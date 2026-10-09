#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _savegpr_17(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_800422CC(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006B174(void);
extern void fn_8006BA30(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_8006F420(void);
extern void fn_8006F72C(void);
extern void fn_800846FC(void);
extern void fn_800DBF68(void);
extern void fn_800DC12C(void);
extern void fn_800DC1DC(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_8011BB90(void);
extern void fn_80205BE8(void);
extern void fn_8020A360(void);
extern void fn_8020A3E4(void);
extern void fn_8020A3EC(void);
extern void fn_8020A59C(void);
extern void fn_8020A5D4(void);
extern void fn_8020A780(void);
extern void fn_8020A808(void);
extern void fn_802180A8(void);
extern void fn_80219544(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_805A52F8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686A48(void);
extern void fn_80686A80(void);
extern void fn_80686AF0(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073EAB8[];
extern u8 lbl_8073EB58[];
extern u8 lbl_8073EBC0[];
extern u8 lbl_8073EC74[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087DB28;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F190;
extern u32 lbl_8087F194;
extern u32 lbl_8087F198;
extern u32 lbl_8087F19C;
extern u32 lbl_8087F1A0;
extern u32 lbl_8087F1A4;
extern u32 lbl_8087F1A8;
extern u32 lbl_8087F1AC;
extern u32 lbl_8087F1B0;
extern u32 lbl_8087F1B4;
extern u32 lbl_8087F1B8;
extern u32 lbl_8087F1BC;
extern u32 lbl_80882D88;
extern u32 lbl_80882D90;
extern u32 lbl_80882E04;
extern u32 lbl_80882E08;
extern u32 lbl_80882E0C;

/* Function declarations */
void fn_802085B4(void);
void fn_802085E0(void);
void fn_80208634(void);
void fn_80208694(void);
void fn_80208714(void);
void fn_80208740(void);
void fn_80208748(void);
void fn_80208814(void);
void fn_802088A4(void);
void fn_802089C4(void);
void fn_80208A3C(void);
void fn_80208B70(void);
void fn_80208BE0(void);
void fn_80208BE8(void);
void fn_80209048(void);
void fn_80209120(void);
void fn_80209184(void);
void fn_802091E8(void);
void fn_8020924C(void);
void fn_80209294(void);
void fn_802092C0(void);
void fn_802092F8(void);
void fn_80209300(void);
void fn_802096A8(void);
void fn_802097C4(void);
void fn_802098E0(void);
void fn_80209960(void);

asm void fn_802085B4(void)
{
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
    stw r4, 0x54(r3)
    stw r4, 0x58(r3)
    stw r4, 0x5c(r3)
    stw r4, 0x60(r3)
    blr
}

asm void fn_802085E0(void)
{
    nofralloc
    lwz r6, lbl_8087F190
    li r7, 0x0
    lwz r0, lbl_8087F194
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_802085E0_00000078
lbl_fn_802085E0_00000048:
    lwz r0, 0x8(r5)
    cmpw r0, r3
    bne lbl_fn_802085E0_0000006C
    lwz r0, 0xc(r5)
    cmpw r0, r4
    bne lbl_fn_802085E0_0000006C
    mulli r0, r7, 0x64
    add r3, r6, r0
    blr
lbl_fn_802085E0_0000006C:
    addi r5, r5, 0x64
    addi r7, r7, 0x1
    bdnz lbl_fn_802085E0_00000048
lbl_fn_802085E0_00000078:
    mr r3, r6
    blr
}

asm void fn_80208634(void)
{
    nofralloc
    lwz r7, lbl_8087F190
    li r8, 0x0
    lwz r0, lbl_8087F194
    mr r6, r7
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80208634_000000D8
lbl_fn_80208634_0000009C:
    lwz r0, 0x8(r6)
    cmpw r0, r3
    bne lbl_fn_80208634_000000CC
    lwz r0, 0xc(r6)
    cmpw r0, r4
    bne lbl_fn_80208634_000000CC
    lwz r0, 0x10(r6)
    cmpw r0, r5
    bne lbl_fn_80208634_000000CC
    mulli r0, r8, 0x64
    add r3, r7, r0
    blr
lbl_fn_80208634_000000CC:
    addi r6, r6, 0x64
    addi r8, r8, 0x1
    bdnz lbl_fn_80208634_0000009C
lbl_fn_80208634_000000D8:
    mr r3, r7
    blr
}

asm void fn_80208694(void)
{
    nofralloc
    lwz r6, lbl_8087F194
    lwz r7, lbl_8087F190
    subi r5, r6, 0x1
    mulli r4, r5, 0x64
    lwz r0, 0x4(r7)
    cmpw r3, r0
    add r4, r7, r4
    lwz r0, 0x4(r4)
    bgt lbl_fn_80208694_0000010C
    mr r3, r7
    blr
lbl_fn_80208694_0000010C:
    cmpw r0, r3
    bgt lbl_fn_80208694_0000011C
    mr r3, r4
    blr
lbl_fn_80208694_0000011C:
    addi r4, r7, 0x64
    li r8, 0x1
    mtctr r5
    cmpwi r6, 0x1
    ble lbl_fn_80208694_00000158
lbl_fn_80208694_00000130:
    lwz r0, 0x4(r4)
    cmpw r0, r3
    ble lbl_fn_80208694_0000014C
    subi r0, r8, 0x1
    mulli r0, r0, 0x64
    add r3, r7, r0
    blr
lbl_fn_80208694_0000014C:
    addi r4, r4, 0x64
    addi r8, r8, 0x1
    bdnz lbl_fn_80208694_00000130
lbl_fn_80208694_00000158:
    mr r3, r7
    blr
}

asm void fn_80208714(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_80208714_00000174
    lwz r0, lbl_8087F194
    cmpw r0, r3
    bgt lbl_fn_80208714_0000017C
lbl_fn_80208714_00000174:
    li r3, 0x0
    blr
lbl_fn_80208714_0000017C:
    mulli r0, r3, 0x64
    lwz r3, lbl_8087F190
    add r3, r3, r0
    blr
}

asm void fn_80208740(void)
{
    nofralloc
    lwz r3, lbl_8087F194
    blr
}

asm void fn_80208748(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8073EAB8@ha
    addi r4, r31, lbl_8073EAB8@l
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_80208748_000001E0
    addi r31, r31, lbl_8073EAB8@l
    mr r3, r30
    addi r4, r31, 0x3
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80208748_000001E8
lbl_fn_80208748_000001E0:
    li r3, 0x1
    b lbl_fn_80208748_00000248
lbl_fn_80208748_000001E8:
    mr r3, r30
    addi r4, r31, 0x6
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80208748_00000208
    li r3, 0x2
    b lbl_fn_80208748_00000248
lbl_fn_80208748_00000208:
    mr r3, r30
    addi r4, r31, 0x9
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80208748_00000228
    li r3, 0x3
    b lbl_fn_80208748_00000248
lbl_fn_80208748_00000228:
    mr r3, r30
    addi r4, r31, 0xc
    li r5, 0x2
    bl fn_80682544
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    andi. r3, r0, 0x5
lbl_fn_80208748_00000248:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80208814(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8073EAB8@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_8073EAB8@l
    li r0, 0x0
    stw r31, 0x1c(r1)
    addi r31, r4, 0xf
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r31
    bl strlen
    mr r30, r3
    mr r3, r29
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    mr r6, r31
    add r7, r31, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802088A4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r5
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    lwz r0, lbl_8087EEC8
    cmpwi r0, 0x0
    beq lbl_fn_802088A4_00000338
    mr r3, r0
    mr r4, r28
    mr r5, r29
    bl fn_8006F420
    b lbl_fn_802088A4_000003F0
lbl_fn_802088A4_00000338:
    li r0, 0x0
    stw r0, 0x10(r1)
    mr r3, r29
    addi r31, r1, 0x10
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    bl fn_80686A48
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_800DBF68
    lbz r3, 0xc(r1)
    slwi r0, r30, 1
    stb r3, 0x8(r1)
    mr r3, r31
    mr r6, r29
    add r7, r29, r0
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    mr r4, r31
    addi r3, r1, 0x1c
    bl fn_80208814
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802088A4_000003AC
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_802088A4_000003AC:
    lwz r0, 0x1c(r1)
    mr r3, r28
    srwi. r0, r0, 31
    bne lbl_fn_802088A4_000003C4
    addi r4, r1, 0x1d
    b lbl_fn_802088A4_000003C8
lbl_fn_802088A4_000003C4:
    lwz r4, 0x24(r1)
lbl_fn_802088A4_000003C8:
    bl strcpy
    mr r3, r28
    bl strlen
    lwz r0, 0x1c(r1)
    mr r31, r3
    srwi. r0, r0, 31
    beq lbl_fn_802088A4_000003EC
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_802088A4_000003EC:
    mr r3, r31
lbl_fn_802088A4_000003F0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802089C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    slwi r0, r6, 1
    add r0, r5, r0
    li r5, 0x100
    stw r31, 0xc(r1)
    mr r31, r6
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    mr r3, r0
    bl fn_80686A80
    lwz r3, 0x0(r30)
    bl fn_80686A48
    addi r4, r3, 0x1
    srwi r3, r4, 31
    clrlwi r0, r4, 31
    xor r0, r0, r3
    subf r0, r3, r0
    cmpwi r0, 0x1
    bne lbl_fn_802089C4_0000046C
    addi r4, r4, 0x1
lbl_fn_802089C4_0000046C:
    add r3, r31, r4
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80208A3C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    add r30, r5, r6
    mr r26, r3
    mr r27, r4
    mr r31, r6
    stw r30, 0x0(r3)
    lwz r3, lbl_8087EEC8
    cmpwi r3, 0x0
    beq lbl_fn_80208A3C_000004CC
    mr r4, r30
    mr r5, r27
    li r6, 0x100
    bl fn_8006F420
    b lbl_fn_80208A3C_0000057C
lbl_fn_80208A3C_000004CC:
    li r0, 0x0
    stw r0, 0x1c(r1)
    mr r3, r27
    addi r29, r1, 0x1c
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_80686A48
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_800DBF68
    lbz r3, 0x8(r1)
    slwi r0, r28, 1
    stb r3, 0xc(r1)
    mr r3, r29
    mr r6, r27
    add r7, r27, r0
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    mr r4, r29
    addi r3, r1, 0x10
    bl fn_80208814
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80208A3C_00000540
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_80208A3C_00000540:
    lwz r0, 0x10(r1)
    mr r3, r30
    srwi. r0, r0, 31
    bne lbl_fn_80208A3C_00000558
    addi r4, r1, 0x11
    b lbl_fn_80208A3C_0000055C
lbl_fn_80208A3C_00000558:
    lwz r4, 0x18(r1)
lbl_fn_80208A3C_0000055C:
    bl strcpy
    mr r3, r30
    bl strlen
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80208A3C_0000057C
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_80208A3C_0000057C:
    lwz r3, 0x0(r26)
    bl strlen
    addi r4, r3, 0x1
    srwi r3, r4, 31
    clrlwi r0, r4, 31
    xor r0, r0, r3
    subf r0, r3, r0
    cmpwi r0, 0x1
    bne lbl_fn_80208A3C_000005A4
    addi r4, r4, 0x1
lbl_fn_80208A3C_000005A4:
    add r3, r31, r4
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80208B70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    add r0, r5, r6
    stw r31, 0xc(r1)
    mr r31, r6
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    mr r3, r0
    bl strcpy
    lwz r3, 0x0(r30)
    bl strlen
    addi r4, r3, 0x1
    srwi r3, r4, 31
    clrlwi r0, r4, 31
    xor r0, r0, r3
    subf r0, r3, r0
    cmpwi r0, 0x1
    bne lbl_fn_80208B70_00000610
    addi r4, r4, 0x1
lbl_fn_80208B70_00000610:
    add r3, r31, r4
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80208BE0(void)
{
    nofralloc
    lwz r3, lbl_80882D88
    b fn_80208BE8
}

asm void fn_80208BE8(void)
{
    nofralloc
    stwu r1, -0xda0(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0xda4(r1)
    li r0, 0x0
    addi r4, r1, 0x8
    stmw r27, 0xd8c(r1)
    stw r0, 0x8(r1)
    bl fn_8006BA8C
    lwz r0, 0x8(r1)
    mr r31, r3
    mr r4, r31
    addi r3, r1, 0x130
    srwi r5, r0, 1
    bl fn_80209048
    lis r30, lbl_8073EAB8@ha
    li r28, 0x0
    addi r30, r30, lbl_8073EAB8@l
    li r29, 0x0
    li r27, 0x0
    b lbl_fn_80208BE8_00000828
lbl_fn_80208BE8_00000688:
    addi r3, r1, 0x130
    bl fn_8005B710
    la r4, lbl_8087DB28
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80208BE8_00000828
    addi r3, r1, 0x130
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x10
    li r5, 0x20
    bl fn_802088A4
    addi r3, r1, 0x10
    addi r4, r30, 0xf
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80208BE8_00000828
    addi r28, r28, 0x1
    addi r3, r1, 0x130
    bl fn_8005B710
    bl fn_80686A48
    add r4, r3, r29
    addi r3, r1, 0x130
    addi r29, r4, 0x2
    bl fn_8005B710
    bl fn_80686A48
    add r4, r3, r29
    addi r3, r1, 0x130
    addi r29, r4, 0x2
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x100
    bl fn_802088A4
    addi r3, r1, 0x30
    bl strlen
    add r4, r3, r27
    addi r3, r1, 0x130
    addi r27, r4, 0x2
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x100
    bl fn_802088A4
    addi r3, r1, 0x30
    bl strlen
    add r4, r3, r27
    addi r3, r1, 0x130
    addi r27, r4, 0x2
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x100
    bl fn_802088A4
    addi r3, r1, 0x30
    bl strlen
    add r4, r3, r27
    addi r3, r1, 0x130
    addi r27, r4, 0x2
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x100
    bl fn_802088A4
    addi r3, r1, 0x30
    bl strlen
    add r4, r3, r27
    addi r3, r1, 0x130
    addi r27, r4, 0x2
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x100
    bl fn_802088A4
    addi r3, r1, 0x30
    bl strlen
    add r4, r3, r27
    addi r3, r1, 0x130
    addi r27, r4, 0x2
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x100
    bl fn_802088A4
    addi r3, r1, 0x30
    bl strlen
    add r4, r3, r27
    addi r3, r1, 0x130
    addi r27, r4, 0x2
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x100
    bl fn_802088A4
    addi r3, r1, 0x130
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x100
    bl fn_802088A4
    addi r3, r1, 0x30
    bl strlen
    add r3, r3, r27
    addi r27, r3, 0x2
lbl_fn_80208BE8_00000828:
    addi r3, r1, 0x130
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80208BE8_00000688
    lis r30, lbl_8073EAB8@ha
    li r4, 0x3
    addi r30, r30, lbl_8073EAB8@l
    li r7, 0x0
    addi r5, r30, 0xf
    mulli r3, r28, 0x30
    mr r6, r5
    bl fn_800846FC
    lwz r0, 0x8(r1)
    mr r4, r31
    stw r3, lbl_8087F198
    addi r3, r1, 0x130
    srwi r5, r0, 1
    stw r28, lbl_8087F19C
    bl fn_8011BB90
    addi r5, r30, 0xf
    slwi r3, r29, 1
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F1A0
    addi r5, r30, 0xf
    mr r3, r27
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F1A4
    li r29, 0x0
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_80208BE8_00000A64
lbl_fn_80208BE8_000008BC:
    addi r3, r1, 0x130
    bl fn_8005B710
    la r4, lbl_8087DB28
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80208BE8_00000A64
    addi r3, r1, 0x130
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80208BE8_00000A64
    lwz r0, lbl_8087F198
    add r27, r0, r30
    bl fn_80209184
    stw r3, 0x0(r27)
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A0
    mr r4, r3
    mr r6, r29
    addi r3, r27, 0x4
    bl fn_802089C4
    mr r29, r3
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A0
    mr r4, r3
    mr r6, r29
    addi r3, r27, 0x8
    bl fn_802089C4
    mr r29, r3
    bl fn_8006BA30
    cmpwi r3, 0x0
    beq lbl_fn_80208BE8_0000094C
    lwz r0, 0x4(r27)
    stw r0, 0x8(r27)
lbl_fn_80208BE8_0000094C:
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A4
    mr r4, r3
    mr r6, r28
    addi r3, r27, 0xc
    bl fn_80208A3C
    mr r28, r3
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A4
    mr r4, r3
    mr r6, r28
    addi r3, r27, 0x10
    bl fn_80208A3C
    mr r28, r3
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A4
    mr r4, r3
    mr r6, r28
    addi r3, r27, 0x14
    bl fn_80208A3C
    mr r28, r3
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A4
    mr r4, r3
    mr r6, r28
    addi r3, r27, 0x18
    bl fn_80208A3C
    mr r28, r3
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A4
    mr r4, r3
    mr r6, r28
    addi r3, r27, 0x1c
    bl fn_80208A3C
    mr r28, r3
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A4
    mr r4, r3
    mr r6, r28
    addi r3, r27, 0x20
    bl fn_80208A3C
    mr r28, r3
    addi r3, r1, 0x130
    bl fn_8005B710
    mr r4, r3
    addi r3, r1, 0x30
    li r5, 0x40
    bl fn_802088A4
    addi r3, r1, 0x30
    bl fn_805A52F8
    stw r3, 0x24(r27)
    addi r3, r1, 0x130
    bl fn_8005B710
    lwz r5, lbl_8087F1A4
    mr r4, r3
    mr r6, r28
    addi r3, r27, 0x28
    bl fn_80208A3C
    mr r28, r3
    addi r3, r1, 0x130
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x2c(r27)
    addi r30, r30, 0x30
lbl_fn_80208BE8_00000A64:
    addi r3, r1, 0x130
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_80208BE8_000008BC
    mr r3, r31
    li r4, 0x0
    bl fn_8006BB6C
    lmw r27, 0xd8c(r1)
    lwz r0, 0xda4(r1)
    mtlr r0
    addi r1, r1, 0xda0
    blr
}

asm void fn_80209048(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8077A090@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r6, r6, lbl_8077A090@l
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x800
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0xc50(r3)
    addi r3, r3, 0x10
    bl memset
    addi r3, r29, 0xc10
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r31, 0x0
    mr r5, r31
    beq lbl_fn_80209048_00000B08
    subi r5, r31, 0x1
lbl_fn_80209048_00000B08:
    cmpwi r31, 0x0
    mr r3, r29
    beq lbl_fn_80209048_00000B1C
    addi r4, r30, 0x2
    b lbl_fn_80209048_00000B20
lbl_fn_80209048_00000B1C:
    mr r4, r30
lbl_fn_80209048_00000B20:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x0(r29)
    mr r3, r29
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80209120(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80209120_00000BB4
    bl strlen
    cmplwi r3, 0x7
    ble lbl_fn_80209120_00000BB4
    addi r3, r30, 0x2
    bl fn_800DC12C
    mulli r31, r3, 0x64
    addi r3, r30, 0x7
    bl fn_800DC12C
    add r31, r31, r3
lbl_fn_80209120_00000BB4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80209184(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80209184_00000C18
    bl fn_80686A48
    cmplwi r3, 0x7
    ble lbl_fn_80209184_00000C18
    addi r3, r30, 0x4
    bl fn_800DC1DC
    mulli r31, r3, 0x64
    addi r3, r30, 0xe
    bl fn_800DC1DC
    add r31, r31, r3
lbl_fn_80209184_00000C18:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802091E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80219544
    lwz r6, lbl_8087F198
    li r4, 0x0
    lwz r0, lbl_8087F19C
    mr r5, r6
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802091E8_00000C84
lbl_fn_802091E8_00000C60:
    lwz r0, 0x0(r5)
    cmpw r3, r0
    bne lbl_fn_802091E8_00000C78
    mulli r0, r4, 0x30
    add r3, r6, r0
    b lbl_fn_802091E8_00000C88
lbl_fn_802091E8_00000C78:
    addi r5, r5, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_802091E8_00000C60
lbl_fn_802091E8_00000C84:
    li r3, 0x0
lbl_fn_802091E8_00000C88:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8020924C(void)
{
    nofralloc
    lwz r5, lbl_8087F198
    li r6, 0x0
    lwz r0, lbl_8087F19C
    mr r4, r5
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8020924C_00000CD8
lbl_fn_8020924C_00000CB4:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_8020924C_00000CCC
    mulli r0, r6, 0x30
    add r3, r5, r0
    blr
lbl_fn_8020924C_00000CCC:
    addi r4, r4, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_8020924C_00000CB4
lbl_fn_8020924C_00000CD8:
    li r3, 0x0
    blr
}

asm void fn_80209294(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_80209294_00000CF4
    lwz r0, lbl_8087F19C
    cmpw r3, r0
    blt lbl_fn_80209294_00000CFC
lbl_fn_80209294_00000CF4:
    li r3, 0x0
    blr
lbl_fn_80209294_00000CFC:
    mulli r0, r3, 0x30
    lwz r3, lbl_8087F198
    add r3, r3, r0
    blr
}

asm void fn_802092C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8073EAB8@ha
    mr r5, r4
    addi r6, r6, lbl_8073EAB8@l
    stw r0, 0x14(r1)
    addi r4, r6, 0x10
    crclr 6
    bl sprintf
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802092F8(void)
{
    nofralloc
    lwz r3, lbl_8087F19C
    blr
}

asm void fn_80209300(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    lwz r3, lbl_80882D90
    li r5, 0x0
    stw r0, 0x674(r1)
    addi r4, r1, 0x8
    stmw r21, 0x644(r1)
    li r28, 0x0
    stw r28, 0x8(r1)
    bl fn_8006BA8C
    lis r4, lbl_807772D0@ha
    mr r31, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0xc(r1)
    lwz r29, 0x8(r1)
    addi r3, r1, 0x1c
    stw r28, 0x10(r1)
    li r4, 0x0
    li r5, 0x400
    stw r28, 0x14(r1)
    stw r28, 0x18(r1)
    stw r28, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xc(r1)
    mr r4, r31
    mr r5, r29
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
    lis r29, lbl_8073EB58@ha
    li r24, 0x0
    addi r28, r29, lbl_8073EB58@l
    b lbl_fn_80209300_00000E8C
lbl_fn_80209300_00000DFC:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r25, r3
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80209300_00000E8C
    lbz r0, 0x0(r25)
    extsb r0, r0
    cmpwi r0, 0x23
    beq lbl_fn_80209300_00000E8C
    cmpwi r0, 0x40
    bne lbl_fn_80209300_00000E64
    mr r3, r25
    addi r4, r29, lbl_8073EB58@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80209300_00000E48
    li r24, 0x0
    b lbl_fn_80209300_00000E8C
lbl_fn_80209300_00000E48:
    mr r3, r25
    addi r4, r28, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80209300_00000E8C
    li r24, 0x1
    b lbl_fn_80209300_00000E8C
lbl_fn_80209300_00000E64:
    cmpwi r24, 0x1
    bne lbl_fn_80209300_00000E78
    lwz r3, lbl_8087F1B4
    addi r0, r3, 0x1
    stw r0, lbl_8087F1B4
lbl_fn_80209300_00000E78:
    cmpwi r24, 0x1
    beq lbl_fn_80209300_00000E8C
    lwz r3, lbl_8087F1AC
    addi r0, r3, 0x1
    stw r0, lbl_8087F1AC
lbl_fn_80209300_00000E8C:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80209300_00000DFC
    lis r28, lbl_8073EB58@ha
    lwz r0, lbl_8087F1AC
    addi r29, r28, lbl_8073EB58@l
    li r4, 0x1
    addi r5, r29, 0xe
    slwi r3, r0, 3
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lwz r0, lbl_8087F1B4
    addi r5, r29, 0xe
    stw r3, lbl_8087F1A8
    mr r6, r5
    mulli r3, r0, 0x58
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F1B0
    mr r4, r31
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    li r24, 0x0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r27, 0x0
    li r26, 0x0
    li r30, -0x1
    b lbl_fn_80209300_000010C4
lbl_fn_80209300_00000F14:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r25, r3
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80209300_000010C4
    lbz r0, 0x0(r25)
    extsb r0, r0
    cmpwi r0, 0x23
    beq lbl_fn_80209300_000010C4
    cmpwi r0, 0x40
    bne lbl_fn_80209300_00000F7C
    mr r3, r25
    addi r4, r28, lbl_8073EB58@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80209300_00000F60
    li r24, 0x0
    b lbl_fn_80209300_000010C4
lbl_fn_80209300_00000F60:
    mr r3, r25
    addi r4, r29, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80209300_000010C4
    li r24, 0x1
    b lbl_fn_80209300_000010C4
lbl_fn_80209300_00000F7C:
    cmpwi r24, 0x1
    bne lbl_fn_80209300_0000109C
    lwz r0, lbl_8087F1B0
    mr r3, r25
    add r23, r0, r27
    bl fn_800DC6B4
    stw r3, 0x0(r23)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r23)
    mr r25, r23
    li r22, 0x0
lbl_fn_80209300_00000FB0:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x8(r25)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    addi r22, r22, 0x1
    stfs f1, 0x18(r25)
    cmplwi r22, 0x4
    addi r25, r25, 0x4
    blt lbl_fn_80209300_00000FB0
    mr r25, r23
    li r22, 0x0
lbl_fn_80209300_00000FE8:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    addi r22, r22, 0x1
    stw r3, 0x28(r25)
    cmplwi r22, 0x4
    addi r25, r25, 0x4
    blt lbl_fn_80209300_00000FE8
    mr r25, r23
    li r22, 0x0
lbl_fn_80209300_00001010:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r21, r3
    addi r4, r29, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80209300_00001034
    stw r30, 0x38(r25)
    b lbl_fn_80209300_00001040
lbl_fn_80209300_00001034:
    mr r3, r21
    bl fn_802180A8
    stw r3, 0x38(r25)
lbl_fn_80209300_00001040:
    addi r22, r22, 0x1
    addi r25, r25, 0x4
    cmplwi r22, 0x4
    blt lbl_fn_80209300_00001010
    li r21, 0x0
lbl_fn_80209300_00001054:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r22, r3
    addi r4, r29, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80209300_00001078
    stw r30, 0x48(r23)
    b lbl_fn_80209300_00001084
lbl_fn_80209300_00001078:
    mr r3, r22
    bl fn_802180A8
    stw r3, 0x48(r23)
lbl_fn_80209300_00001084:
    addi r21, r21, 0x1
    addi r23, r23, 0x4
    cmplwi r21, 0x4
    blt lbl_fn_80209300_00001054
    addi r27, r27, 0x58
    b lbl_fn_80209300_000010C4
lbl_fn_80209300_0000109C:
    lwz r0, lbl_8087F1A8
    mr r3, r25
    add r21, r0, r26
    bl fn_800DC6B4
    stw r3, 0x0(r21)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4(r21)
    addi r26, r26, 0x8
lbl_fn_80209300_000010C4:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80209300_00000F14
    mr r3, r31
    li r4, 0x0
    bl fn_8006BB6C
    lmw r21, 0x644(r1)
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_802096A8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    addi r31, r1, 0x1c
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802096A8_0000117C
    addi r3, r1, 0x11
    b lbl_fn_802096A8_00001180
lbl_fn_802096A8_0000117C:
    lwz r3, 0x18(r1)
lbl_fn_802096A8_00001180:
    bl fn_800DC6B4
    lwz r0, 0x10(r1)
    mr r31, r3
    srwi. r0, r0, 31
    beq lbl_fn_802096A8_0000119C
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_802096A8_0000119C:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802096A8_000011B0
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_802096A8_000011B0:
    lwz r4, lbl_8087F1A8
    li r5, 0x0
    lwz r0, lbl_8087F1AC
    mr r3, r4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802096A8_000011F0
lbl_fn_802096A8_000011CC:
    lwz r0, 0x0(r3)
    cmplw r31, r0
    bne lbl_fn_802096A8_000011E4
    slwi r0, r5, 3
    add r3, r4, r0
    b lbl_fn_802096A8_000011F4
lbl_fn_802096A8_000011E4:
    addi r3, r3, 0x8
    addi r5, r5, 0x1
    bdnz lbl_fn_802096A8_000011CC
lbl_fn_802096A8_000011F0:
    li r3, 0x0
lbl_fn_802096A8_000011F4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802097C4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    addi r31, r1, 0x1c
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802097C4_00001298
    addi r3, r1, 0x11
    b lbl_fn_802097C4_0000129C
lbl_fn_802097C4_00001298:
    lwz r3, 0x18(r1)
lbl_fn_802097C4_0000129C:
    bl fn_800DC6B4
    lwz r0, 0x10(r1)
    mr r31, r3
    srwi. r0, r0, 31
    beq lbl_fn_802097C4_000012B8
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_802097C4_000012B8:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802097C4_000012CC
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_802097C4_000012CC:
    lwz r4, lbl_8087F1B0
    li r5, 0x0
    lwz r0, lbl_8087F1B4
    mr r3, r4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802097C4_0000130C
lbl_fn_802097C4_000012E8:
    lwz r0, 0x0(r3)
    cmplw r31, r0
    bne lbl_fn_802097C4_00001300
    mulli r0, r5, 0x58
    add r3, r4, r0
    b lbl_fn_802097C4_00001310
lbl_fn_802097C4_00001300:
    addi r3, r3, 0x58
    addi r5, r5, 0x1
    bdnz lbl_fn_802097C4_000012E8
lbl_fn_802097C4_0000130C:
    li r3, 0x0
lbl_fn_802097C4_00001310:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802098E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_802098E0_00001380
lbl_fn_802098E0_0000135C:
    lwz r4, 0x0(r31)
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802098E0_00001378
    mr r3, r30
    b lbl_fn_802098E0_0000138C
lbl_fn_802098E0_00001378:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_802098E0_00001380:
    cmpw r30, r29
    blt lbl_fn_802098E0_0000135C
    li r3, 0x0
lbl_fn_802098E0_0000138C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80209960(void)
{
    nofralloc
    stwu r1, -0x970(r1)
    mflr r0
    stw r0, 0x974(r1)
    li r0, 0x968
    addi r11, r1, 0x950
    stfd f31, 0x960(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x958
    stfd f30, 0x950(r1)
    psq_stx f30, r1, r0, 0, 0
    bl _savegpr_17
    lis r24, lbl_8073EBC0@ha
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r24, r24, lbl_8073EBC0@l
    addi r3, r1, 0x2d4
    bl fn_8020A360
    lwz r0, lbl_8087F1B8
    cmpwi r0, 0x0
    bne lbl_fn_80209960_00001D7C
    bl fn_8020A3E4
    lwz r4, lbl_80882E04
    addi r5, r1, 0x8
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0x2d4(r1)
    mr r21, r3
    mr r4, r21
    addi r3, r1, 0x2d4
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_80209960_00001454
lbl_fn_80209960_00001434:
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80209960_00001454
    lwz r3, lbl_8087F1BC
    addi r0, r3, 0x1
    stw r0, lbl_8087F1BC
lbl_fn_80209960_00001454:
    addi r3, r1, 0x2d4
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80209960_00001434
    lwz r20, lbl_8087F1BC
    lis r25, lbl_8073EC74@ha
    addi r5, r25, lbl_8073EC74@l
    li r4, 0x3
    mulli r3, r20, 0x13c
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8020A3EC@ha
    mr r7, r20
    addi r4, r4, fn_8020A3EC@l
    li r5, 0x0
    li r6, 0x13c
    bl fn_80695720
    stw r3, lbl_8087F1B8
    mr r4, r21
    lwz r12, 0x2d4(r1)
    addi r3, r1, 0x2d4
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lfs f31, lbl_80882E0C
    addi r31, r25, lbl_8073EC74@l
    lfs f30, lbl_80882E08
    li r23, 0x0
    li r30, 0x2
    li r29, 0x1
    li r28, 0x0
    li r27, 0x3
    li r26, 0x64
    b lbl_fn_80209960_00001D60
lbl_fn_80209960_000014E8:
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    mr r19, r3
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80209960_00001D60
    lwz r0, lbl_8087F1B8
    li r4, 0x0
    li r5, 0x13c
    add r3, r0, r23
    bl memset
    mr r3, r19
    bl fn_800DC6B4
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0xc0(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x78(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x7c(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0xc8(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0xcc(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x80(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x98(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x84(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x88(r4)
    lwz r0, lbl_8087F1B8
    add r3, r0, r23
    lwz r0, 0x88(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80209960_00001608
    stw r26, 0x88(r3)
lbl_fn_80209960_00001608:
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r4, lbl_8087F1B8
    addi r3, r1, 0x2d4
    stfsx f1, r4, r23
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x4(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x8(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0xc(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x10(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x14(r4)
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x94(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x28(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x2c(r4)
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x20(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x24(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x18(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x1c(r4)
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x30(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x34(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x134(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x8c(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    add r3, r0, r23
    stfs f1, 0x90(r3)
    lwz r0, lbl_8087F1B8
    add r3, r0, r23
    lfs f0, 0x90(r3)
    fcmpo cr0, f0, f30
    cror eq, lt, eq
    bne lbl_fn_80209960_000017D0
    stfs f31, 0x90(r3)
lbl_fn_80209960_000017D0:
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x24
    bl fn_8003E4A4
    addi r3, r1, 0x1a4
    addi r4, r31, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0x2a8
    addi r4, r1, 0x24
    addi r5, r1, 0x1a4
    bl fn_800EC2C4
    addi r3, r1, 0x1a4
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x26c
    addi r4, r1, 0x2a8
    li r22, 0x0
    bl fn_800EC654
    li r19, 0x0
    b lbl_fn_80209960_00001870
lbl_fn_80209960_0000182C:
    addi r3, r1, 0x26c
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_800DC288
    lwz r5, lbl_8087F1B8
    add r0, r19, r23
    addi r3, r1, 0x168
    addi r4, r1, 0x26c
    add r5, r5, r0
    addi r19, r19, 0x4
    stfs f1, 0x38(r5)
    li r5, 0x0
    addi r22, r22, 0x1
    bl fn_80205BE8
    addi r3, r1, 0x168
    li r4, -0x1
    bl fn_800ED42C
lbl_fn_80209960_00001870:
    addi r3, r1, 0x12c
    addi r4, r1, 0x2a8
    bl fn_800EDFE8
    addi r3, r1, 0x26c
    addi r4, r1, 0x12c
    li r20, 0x0
    bl fn_800EC254
    cmpwi r3, 0x0
    beq lbl_fn_80209960_000018A0
    cmpwi r22, 0x7
    bge lbl_fn_80209960_000018A0
    li r20, 0x1
lbl_fn_80209960_000018A0:
    addi r3, r1, 0x12c
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r20, 0x0
    bne lbl_fn_80209960_0000182C
    addi r3, r1, 0x26c
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x24
    bl fn_8020A780
    addi r3, r1, 0x108
    addi r4, r31, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0x2a8
    addi r4, r1, 0x24
    addi r5, r1, 0x108
    bl fn_8020A5D4
    addi r3, r1, 0x108
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x230
    addi r4, r1, 0x2a8
    li r22, 0x0
    bl fn_800EC654
    li r19, 0x0
    b lbl_fn_80209960_00001960
lbl_fn_80209960_0000191C:
    addi r3, r1, 0x230
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_800DC288
    lwz r5, lbl_8087F1B8
    add r0, r19, r23
    addi r3, r1, 0xcc
    addi r4, r1, 0x230
    add r5, r5, r0
    addi r19, r19, 0x4
    stfs f1, 0x54(r5)
    li r5, 0x0
    addi r22, r22, 0x1
    bl fn_80205BE8
    addi r3, r1, 0xcc
    li r4, -0x1
    bl fn_800ED42C
lbl_fn_80209960_00001960:
    addi r3, r1, 0x90
    addi r4, r1, 0x2a8
    bl fn_800EDFE8
    addi r3, r1, 0x230
    addi r4, r1, 0x90
    li r20, 0x0
    bl fn_800EC254
    cmpwi r3, 0x0
    beq lbl_fn_80209960_00001990
    cmpwi r22, 0x7
    bge lbl_fn_80209960_00001990
    li r20, 0x1
lbl_fn_80209960_00001990:
    addi r3, r1, 0x90
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r20, 0x0
    bne lbl_fn_80209960_0000191C
    addi r3, r1, 0x230
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x124(r4)
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x128(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x12c(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x130(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0xd0(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    li r20, 0x0
    li r22, 0x0
    add r4, r0, r23
    stw r3, 0x11c(r4)
lbl_fn_80209960_00001A48:
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    addi r4, r25, lbl_8073EC74@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80209960_00001A84
    lwz r4, lbl_8087F1B8
    add r3, r20, r23
    add r0, r22, r23
    add r3, r4, r3
    stb r27, 0xd4(r3)
    lwz r3, lbl_8087F1B8
    add r3, r3, r0
    stw r28, 0xd8(r3)
    b lbl_fn_80209960_00001B14
lbl_fn_80209960_00001A84:
    addi r3, r1, 0x2d4
    bl fn_800422CC
    addi r4, r31, 0x3
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80209960_00001AB4
    lwz r3, lbl_8087F1B8
    add r0, r20, r23
    add r3, r3, r0
    stb r28, 0xd4(r3)
    b lbl_fn_80209960_00001AF4
lbl_fn_80209960_00001AB4:
    addi r3, r1, 0x2d4
    bl fn_800422CC
    addi r4, r31, 0x6
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80209960_00001AE4
    lwz r3, lbl_8087F1B8
    add r0, r20, r23
    add r3, r3, r0
    stb r29, 0xd4(r3)
    b lbl_fn_80209960_00001AF4
lbl_fn_80209960_00001AE4:
    lwz r3, lbl_8087F1B8
    add r0, r20, r23
    add r3, r3, r0
    stb r30, 0xd4(r3)
lbl_fn_80209960_00001AF4:
    addi r3, r1, 0x2d4
    bl fn_800422CC
    addi r3, r3, 0x2
    bl fn_80684600
    lwz r4, lbl_8087F1B8
    add r0, r22, r23
    add r4, r4, r0
    stw r3, 0xd8(r4)
lbl_fn_80209960_00001B14:
    addi r20, r20, 0x1
    addi r22, r22, 0x4
    cmpwi r20, 0x4
    blt lbl_fn_80209960_00001A48
    li r18, 0x0
    li r22, 0x0
lbl_fn_80209960_00001B2C:
    addi r3, r1, 0x10
    bl fn_8020A59C
    addi r3, r1, 0x2d4
    li r17, 0x0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x6c
    addi r4, r31, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0x204
    addi r4, r1, 0x18
    addi r5, r1, 0x6c
    bl fn_800EC2C4
    addi r3, r1, 0x6c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x1c8
    addi r4, r1, 0x204
    bl fn_800EC654
    addi r19, r1, 0x10
    b lbl_fn_80209960_00001BB4
lbl_fn_80209960_00001B90:
    addi r3, r1, 0x1c8
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    stw r3, 0x0(r19)
    addi r19, r19, 0x4
    addi r17, r17, 0x1
    addi r3, r1, 0x1c8
    bl fn_800ED4E0
lbl_fn_80209960_00001BB4:
    addi r3, r1, 0x30
    addi r4, r1, 0x204
    bl fn_800EDFE8
    addi r3, r1, 0x1c8
    addi r4, r1, 0x30
    li r20, 0x0
    bl fn_800EC254
    cmpwi r3, 0x0
    beq lbl_fn_80209960_00001BE4
    cmpwi r17, 0x2
    bge lbl_fn_80209960_00001BE4
    li r20, 0x1
lbl_fn_80209960_00001BE4:
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r20, 0x0
    bne lbl_fn_80209960_00001B90
    addi r3, r1, 0x1c8
    li r4, -0x1
    bl fn_800ED42C
    lwz r0, lbl_8087F1B8
    addi r4, r1, 0x10
    add r0, r0, r23
    add r3, r0, r22
    addi r3, r3, 0xe8
    bl fn_8020A808
    addi r3, r1, 0x204
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x18
    li r4, -0x1
    bl dtor_80013D60
    addi r18, r18, 0x1
    addi r22, r22, 0x8
    cmpwi r18, 0x4
    blt lbl_fn_80209960_00001B2C
    li r17, 0x0
    li r20, 0x0
lbl_fn_80209960_00001C4C:
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    addi r3, r3, 0x2
    bl fn_80684600
    lwz r4, lbl_8087F1B8
    add r0, r20, r23
    addi r17, r17, 0x1
    addi r20, r20, 0x4
    add r4, r4, r0
    cmpwi r17, 0x5
    stw r3, 0x108(r4)
    blt lbl_fn_80209960_00001C4C
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stw r3, 0x9c(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r0, lbl_8087F1B8
    addi r3, r1, 0x2d4
    add r4, r0, r23
    stfs f1, 0x138(r4)
    bl fn_8005B3CC
    addi r4, r24, 0x0
    li r5, 0x8
    bl fn_802098E0
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stb r3, 0x120(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    addi r4, r24, 0x20
    li r5, 0xa
    bl fn_802098E0
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stb r3, 0x121(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    addi r4, r24, 0x48
    li r5, 0x5
    bl fn_802098E0
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stb r3, 0x122(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    addi r4, r24, 0x60
    li r5, 0x4
    bl fn_802098E0
    lwz r0, lbl_8087F1B8
    add r4, r0, r23
    stb r3, 0x123(r4)
    addi r3, r1, 0x2d4
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, lbl_8087F1B8
    li r4, -0x1
    add r5, r0, r23
    addi r23, r23, 0x13c
    stw r3, 0xc4(r5)
    addi r3, r1, 0x2a8
    bl fn_800EC5BC
    addi r3, r1, 0x24
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_80209960_00001D60:
    addi r3, r1, 0x2d4
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80209960_000014E8
    bl fn_8020A3E4
    mr r4, r21
    bl fn_8046DD20
lbl_fn_80209960_00001D7C:
    li r0, 0x968
    addi r11, r1, 0x950
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x960(r1)
    li r0, 0x958
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x950(r1)
    bl _restgpr_17
    lwz r0, 0x974(r1)
    mtlr r0
    addi r1, r1, 0x970
    blr
}
