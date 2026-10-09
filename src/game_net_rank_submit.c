#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006F5E8(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_8009EE30(void);
extern void fn_800A58D0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_8010A828(void);
extern void fn_80116EB8(void);
extern void fn_80116FC0(void);
extern void fn_801F4728(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C2C(void);
extern void fn_801F6D7C(void);
extern void fn_801F837C(void);
extern void fn_801F8830(void);
extern void fn_801FECE0(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_80202118(void);
extern void fn_80202D00(void);
extern void fn_8044D878(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_804A53D4(void);
extern void fn_804A5E40(void);
extern void fn_8050FA80(void);
extern void fn_8050FD24(void);
extern void fn_8050FD3C(void);
extern void fn_8051125C(void);
extern void fn_805112AC(void);
extern void fn_805118B8(void);
extern void fn_805119CC(void);
extern void fn_8052635C(void);
extern void fn_805F89F0(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686B24(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075C300[];
extern u8 lbl_8075C364[];
extern u8 lbl_8075C6A8[];
extern u8 lbl_8075C6C4[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_807830B8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E498;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9C0;
extern u32 lbl_808879EC;
extern u32 lbl_808879F0;
extern u32 lbl_808879F8;
extern u32 lbl_808879FC;
extern u32 lbl_80887A00;
extern u32 lbl_80887A04;
extern u32 lbl_80887A08;
extern u32 lbl_80887A0C;
extern u32 lbl_80887A10;
extern u32 lbl_80887A14;
extern u32 lbl_80887A18;
extern u32 lbl_80887A1C;
extern u32 lbl_80887A20;
extern u32 lbl_80887A24;
extern u32 lbl_80887A28;
extern u32 lbl_80887A2C;

/* Function declarations */
void fn_805226A8(void);
void fn_80522714(void);
void fn_80522768(void);
void fn_805227D0(void);
void fn_80522878(void);
void fn_80522880(void);
void fn_8052293C(void);
void fn_80522DDC(void);
void fn_805231F4(void);
void fn_805233FC(void);

asm void fn_805226A8(void)
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
    beq lbl_fn_805226A8_00000050
    addic. r0, r3, 0x8
    beq lbl_fn_805226A8_00000040
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805226A8_00000040
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_805226A8_00000040:
    cmpwi r31, 0x0
    ble lbl_fn_805226A8_00000050
    mr r3, r30
    bl dtor_80084684
lbl_fn_805226A8_00000050:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80522714(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8044D878@ha
    lis r5, fn_8010A828@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r4, fn_8044D878@l
    addi r5, r5, fn_8010A828@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r6, 0x40
    li r7, 0x4
    stb r0, 0x0(r3)
    addi r3, r3, 0x10
    bl fn_806958E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80522768(void)
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
    beq lbl_fn_80522768_0000010C
    lis r4, fn_8010A828@ha
    li r5, 0x40
    addi r4, r4, fn_8010A828@l
    li r6, 0x4
    addi r3, r3, 0x10
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_80522768_0000010C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80522768_0000010C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805227D0(void)
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
    beq lbl_fn_805227D0_000001B4
    addic. r3, r3, 0x18c
    beq lbl_fn_805227D0_00000170
    beq lbl_fn_805227D0_00000170
    lis r4, fn_80522768@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_80522768@l
    li r5, 0x110
    li r6, 0x12
    bl fn_806959D8
lbl_fn_805227D0_00000170:
    addic. r3, r30, 0x184
    beq lbl_fn_805227D0_00000180
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805227D0_00000180:
    lis r4, fn_805226A8@ha
    addi r3, r30, 0xf0
    addi r4, r4, fn_805226A8@l
    li r5, 0xc
    li r6, 0x6
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_8050FA80
    cmpwi r31, 0x0
    ble lbl_fn_805227D0_000001B4
    mr r3, r30
    bl dtor_80084684
lbl_fn_805227D0_000001B4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80522878(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80522880(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r6, lbl_8075C300@ha
    lwz r5, 0x50(r3)
    lwz r7, 0x4c(r3)
    mr r27, r3
    lwz r8, lbl_808879EC
    addi r6, r6, lbl_8075C300@l
    bl fn_8050FD3C
    lfs f0, lbl_808879FC
    mr r30, r27
    stfs f0, 0x58(r27)
    li r28, 0x0
lbl_fn_80522880_00000218:
    lwz r3, 0xf0(r30)
    li r4, 0x0
    bl fn_800D246C
    li r31, 0x0
    li r29, 0x0
    b lbl_fn_80522880_0000024C
lbl_fn_80522880_00000230:
    lwz r0, 0xf8(r30)
    li r4, 0x0
    add r3, r0, r29
    lwz r3, 0x18(r3)
    bl fn_800D246C
    addi r29, r29, 0x20
    addi r31, r31, 0x1
lbl_fn_80522880_0000024C:
    lwz r0, 0xf4(r30)
    cmpw r31, r0
    blt lbl_fn_80522880_00000230
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0x6
    blt lbl_fn_80522880_00000218
    li r0, 0x0
    stw r0, 0x80(r27)
    addi r11, r1, 0x20
    stw r0, 0x84(r27)
    stw r0, 0x88(r27)
    stw r0, 0x8c(r27)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8052293C(void)
{
    nofralloc
    stwu r1, -0xdb0(r1)
    mflr r0
    lis r4, lbl_8077A090@ha
    li r5, 0x800
    stw r0, 0xdb4(r1)
    addi r4, r4, lbl_8077A090@l
    stmw r22, 0xd88(r1)
    li r24, 0x0
    mr r23, r3
    stw r24, 0x18c(r3)
    addi r3, r1, 0x138
    stw r4, 0x128(r1)
    li r4, 0x0
    stw r24, 0x12c(r1)
    stw r24, 0x130(r1)
    stw r24, 0x134(r1)
    stw r24, 0xd78(r1)
    bl memset
    addi r3, r1, 0xd38
    li r4, 0x0
    li r5, 0x40
    bl memset
    lis r3, lbl_8077A070@ha
    lis r4, lbl_807830B8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x128(r1)
    addi r3, r1, 0x128
    addi r4, r4, lbl_807830B8@l
    bl fn_8005B9AC
    lis r4, fn_8044D878@ha
    lis r5, fn_8010A828@ha
    stb r24, 0x18(r1)
    addi r3, r1, 0x28
    addi r4, r4, fn_8044D878@l
    addi r5, r5, fn_8010A828@l
    li r6, 0x40
    li r7, 0x4
    bl fn_806958E0
    addi r3, r23, 0x184
    bl fn_8047059C
    srwi r24, r3, 1
    addi r3, r23, 0x184
    bl fn_80470580
    cmpwi r24, 0x0
    beq lbl_fn_8052293C_0000034C
    addi r3, r3, 0x2
lbl_fn_8052293C_0000034C:
    cmpwi r24, 0x0
    stw r3, 0x12c(r1)
    beq lbl_fn_8052293C_0000035C
    subi r24, r24, 0x1
lbl_fn_8052293C_0000035C:
    li r26, 0x0
    stw r24, 0x130(r1)
    addi r24, r1, 0x9
    addi r25, r1, 0x8
    stw r26, 0x134(r1)
    addi r27, r1, 0x18
    addi r28, r1, 0x28
    addi r29, r1, 0x68
    addi r30, r1, 0xa8
    addi r31, r1, 0xe8
lbl_fn_8052293C_00000384:
    addi r3, r1, 0x128
    bl fn_8005B710
    la r4, lbl_8087E498
    li r5, 0x1
    bl fn_80686B24
    cmpwi r3, 0x0
    beq lbl_fn_8052293C_00000708
    stw r26, 0x8(r1)
    addi r3, r1, 0x128
    lwz r22, lbl_8087EEC8
    stw r26, 0xc(r1)
    stw r26, 0x10(r1)
    bl fn_8005B710
    mr r5, r3
    mr r3, r22
    mr r4, r25
    bl fn_8006F5E8
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8052293C_000003DC
    mr r22, r24
    b lbl_fn_8052293C_000003E0
lbl_fn_8052293C_000003DC:
    lwz r22, 0x10(r1)
lbl_fn_8052293C_000003E0:
    cmplw r22, r27
    beq lbl_fn_8052293C_00000404
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r3, r27
    mr r4, r22
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8052293C_00000404:
    addi r3, r1, 0x128
    bl fn_8005B710
    cmplw r3, r28
    mr r22, r3
    beq lbl_fn_8052293C_00000430
    bl fn_80686A48
    mr r5, r3
    mr r3, r28
    mr r4, r22
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8052293C_00000430:
    addi r3, r1, 0x128
    bl fn_8005B710
    cmplw r3, r29
    mr r22, r3
    beq lbl_fn_8052293C_0000045C
    bl fn_80686A48
    mr r5, r3
    mr r3, r29
    mr r4, r22
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8052293C_0000045C:
    addi r3, r1, 0x128
    bl fn_8005B710
    cmplw r3, r30
    mr r22, r3
    beq lbl_fn_8052293C_00000488
    bl fn_80686A48
    mr r5, r3
    mr r3, r30
    mr r4, r22
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8052293C_00000488:
    addi r3, r1, 0x128
    bl fn_8005B710
    cmplw r3, r31
    mr r22, r3
    beq lbl_fn_8052293C_000004B4
    bl fn_80686A48
    mr r5, r3
    mr r3, r31
    mr r4, r22
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8052293C_000004B4:
    lwz r0, 0x18c(r23)
    mulli r0, r0, 0x110
    add r0, r23, r0
    addic. r3, r0, 0x190
    beq lbl_fn_8052293C_000006E8
    lwz r0, 0x1c(r1)
    lwz r4, 0x18(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x24(r1)
    lwz r4, 0x20(r1)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x2c(r1)
    lwz r4, 0x28(r1)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, 0x34(r1)
    lwz r4, 0x30(r1)
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x3c(r1)
    lwz r4, 0x38(r1)
    stw r4, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, 0x44(r1)
    lwz r4, 0x40(r1)
    stw r4, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, 0x4c(r1)
    lwz r4, 0x48(r1)
    stw r4, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0x54(r1)
    lwz r4, 0x50(r1)
    stw r4, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x5c(r1)
    lwz r4, 0x58(r1)
    stw r4, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x64(r1)
    lwz r4, 0x60(r1)
    stw r4, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x6c(r1)
    lwz r4, 0x68(r1)
    stw r4, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x74(r1)
    lwz r4, 0x70(r1)
    stw r4, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, 0x7c(r1)
    lwz r4, 0x78(r1)
    stw r4, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x84(r1)
    lwz r4, 0x80(r1)
    stw r4, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x8c(r1)
    lwz r4, 0x88(r1)
    stw r4, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x94(r1)
    lwz r4, 0x90(r1)
    stw r4, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x9c(r1)
    lwz r4, 0x98(r1)
    stw r4, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0xa4(r1)
    lwz r4, 0xa0(r1)
    stw r4, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0xac(r1)
    lwz r4, 0xa8(r1)
    stw r4, 0x90(r3)
    stw r0, 0x94(r3)
    lwz r0, 0xb4(r1)
    lwz r4, 0xb0(r1)
    stw r4, 0x98(r3)
    stw r0, 0x9c(r3)
    lwz r0, 0xbc(r1)
    lwz r4, 0xb8(r1)
    stw r4, 0xa0(r3)
    stw r0, 0xa4(r3)
    lwz r0, 0xc4(r1)
    lwz r4, 0xc0(r1)
    stw r4, 0xa8(r3)
    stw r0, 0xac(r3)
    lwz r0, 0xcc(r1)
    lwz r4, 0xc8(r1)
    stw r4, 0xb0(r3)
    stw r0, 0xb4(r3)
    lwz r0, 0xd4(r1)
    lwz r4, 0xd0(r1)
    stw r4, 0xb8(r3)
    stw r0, 0xbc(r3)
    lwz r0, 0xdc(r1)
    lwz r4, 0xd8(r1)
    stw r4, 0xc0(r3)
    stw r0, 0xc4(r3)
    lwz r0, 0xe4(r1)
    lwz r4, 0xe0(r1)
    stw r4, 0xc8(r3)
    stw r0, 0xcc(r3)
    lwz r0, 0xec(r1)
    lwz r4, 0xe8(r1)
    stw r4, 0xd0(r3)
    stw r0, 0xd4(r3)
    lwz r0, 0xf4(r1)
    lwz r4, 0xf0(r1)
    stw r4, 0xd8(r3)
    stw r0, 0xdc(r3)
    lwz r0, 0xfc(r1)
    lwz r4, 0xf8(r1)
    stw r4, 0xe0(r3)
    stw r0, 0xe4(r3)
    lwz r0, 0x104(r1)
    lwz r4, 0x100(r1)
    stw r4, 0xe8(r3)
    stw r0, 0xec(r3)
    lwz r0, 0x10c(r1)
    lwz r4, 0x108(r1)
    stw r4, 0xf0(r3)
    stw r0, 0xf4(r3)
    lwz r0, 0x114(r1)
    lwz r4, 0x110(r1)
    stw r4, 0xf8(r3)
    stw r0, 0xfc(r3)
    lwz r0, 0x11c(r1)
    lwz r4, 0x118(r1)
    stw r4, 0x100(r3)
    stw r0, 0x104(r3)
    lwz r0, 0x124(r1)
    lwz r4, 0x120(r1)
    stw r4, 0x108(r3)
    stw r0, 0x10c(r3)
lbl_fn_8052293C_000006E8:
    lwz r3, 0x18c(r23)
    addi r0, r3, 0x1
    stw r0, 0x18c(r23)
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8052293C_00000708
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_8052293C_00000708:
    addi r3, r1, 0x128
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8052293C_00000384
    mr r3, r23
    bl fn_80522DDC
    lmw r22, 0xd88(r1)
    lwz r0, 0xdb4(r1)
    mtlr r0
    addi r1, r1, 0xdb0
    blr
}

asm void fn_80522DDC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lis r4, lbl_8075C6C4@ha
    mr r31, r3
    addi r4, r4, lbl_8075C6C4@l
    li r27, 0x0
    mr r28, r31
    addi r29, r4, 0x250
lbl_fn_80522DDC_00000760:
    lwz r3, 0x13c(r28)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80522DDC_00000794
    lwz r3, 0x13c(r28)
    bl fn_80202118
    mr r30, r3
    mr r3, r29
    bl fn_800DC6B4
    lfs f1, lbl_808879F0
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_80522DDC_00000794:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x2
    blt lbl_fn_80522DDC_00000760
    li r0, 0x0
    sth r0, 0x8(r1)
    lwz r0, 0x158(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80522DDC_00000A20
    addi r29, r31, 0x800
    addi r30, r1, 0x8
    cmplw r29, r30
    beq lbl_fn_80522DDC_000007E4
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_000007E4:
    addi r29, r31, 0x910
    addi r0, r31, 0x800
    cmplw r29, r0
    beq lbl_fn_80522DDC_00000810
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x800
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000810:
    addi r29, r1, 0x8
    addi r0, r31, 0x910
    cmplw r29, r0
    beq lbl_fn_80522DDC_0000083C
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x910
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_0000083C:
    addi r29, r31, 0x840
    addi r30, r1, 0x8
    cmplw r29, r30
    beq lbl_fn_80522DDC_00000868
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000868:
    addi r29, r31, 0x950
    addi r0, r31, 0x840
    cmplw r29, r0
    beq lbl_fn_80522DDC_00000894
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x840
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000894:
    addi r29, r1, 0x8
    addi r0, r31, 0x950
    cmplw r29, r0
    beq lbl_fn_80522DDC_000008C0
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x950
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_000008C0:
    addi r29, r31, 0xee0
    addi r30, r1, 0x8
    cmplw r29, r30
    beq lbl_fn_80522DDC_000008EC
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_000008EC:
    addi r29, r31, 0xff0
    addi r0, r31, 0xee0
    cmplw r29, r0
    beq lbl_fn_80522DDC_00000918
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xee0
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000918:
    addi r29, r1, 0x8
    addi r0, r31, 0xff0
    cmplw r29, r0
    beq lbl_fn_80522DDC_00000944
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xff0
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000944:
    addi r29, r31, 0xf20
    addi r30, r1, 0x8
    cmplw r29, r30
    beq lbl_fn_80522DDC_00000970
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000970:
    addi r29, r31, 0x1030
    addi r0, r31, 0xf20
    cmplw r29, r0
    beq lbl_fn_80522DDC_0000099C
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xf20
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_0000099C:
    addi r29, r1, 0x8
    addi r0, r31, 0x1030
    cmplw r29, r0
    beq lbl_fn_80522DDC_000009C8
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x1030
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_000009C8:
    lis r3, lbl_8075C6C4@ha
    mr r28, r31
    addi r3, r3, lbl_8075C6C4@l
    li r27, 0x0
    addi r29, r3, 0x250
lbl_fn_80522DDC_000009DC:
    lwz r3, 0x13c(r28)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80522DDC_00000A10
    lwz r3, 0x13c(r28)
    bl fn_80202118
    mr r30, r3
    mr r3, r29
    bl fn_800DC6B4
    lfs f1, lbl_808879F8
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_80522DDC_00000A10:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x2
    blt lbl_fn_80522DDC_000009DC
lbl_fn_80522DDC_00000A20:
    lwz r0, 0x15c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80522DDC_00000B34
    addi r29, r31, 0xa20
    addi r30, r1, 0x8
    cmplw r29, r30
    beq lbl_fn_80522DDC_00000A58
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000A58:
    addi r29, r31, 0xb30
    addi r0, r31, 0xa20
    cmplw r29, r0
    beq lbl_fn_80522DDC_00000A84
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xa20
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000A84:
    addi r29, r1, 0x8
    addi r0, r31, 0xb30
    cmplw r29, r0
    beq lbl_fn_80522DDC_00000AB0
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xb30
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000AB0:
    addi r29, r31, 0xa60
    addi r30, r1, 0x8
    cmplw r29, r30
    beq lbl_fn_80522DDC_00000ADC
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000ADC:
    addi r29, r31, 0xb70
    addi r0, r31, 0xa60
    cmplw r29, r0
    beq lbl_fn_80522DDC_00000B08
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xa60
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000B08:
    addi r29, r1, 0x8
    addi r0, r31, 0xb70
    cmplw r29, r0
    beq lbl_fn_80522DDC_00000B34
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xb70
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80522DDC_00000B34:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805231F4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_25
    lwz r12, 0x0(r3)
    mr r25, r3
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lfs f30, lbl_80887A00
    mr r31, r25
    lfs f31, lbl_808879F0
    li r27, 0x0
lbl_fn_805231F4_00000B94:
    li r26, 0x0
    li r30, 0x0
    b lbl_fn_805231F4_00000C70
lbl_fn_805231F4_00000BA0:
    lwz r0, 0xf8(r31)
    add r29, r0, r30
    lwz r28, 0x18(r29)
    cmpwi r28, 0x0
    beq lbl_fn_805231F4_00000BF8
    mr r3, r28
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_805231F4_00000BF8
    lwz r3, 0x0(r29)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_805231F4_00000BF8
    lwz r3, 0x18(r29)
    bl fn_80202D00
    lfs f0, 0x54(r3)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f30
    blt lbl_fn_805231F4_00000BF8
    li r0, 0x1
    b lbl_fn_805231F4_00000BFC
lbl_fn_805231F4_00000BF8:
    li r0, 0x0
lbl_fn_805231F4_00000BFC:
    cmpwi r0, 0x0
    beq lbl_fn_805231F4_00000C68
    mr r3, r28
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_805231F4_00000C68
    mr r3, r28
    bl fn_80202D00
    lfs f0, 0x54(r3)
    mr r28, r3
    fcmpo cr0, f0, f31
    bge lbl_fn_805231F4_00000C44
    lfs f0, 0x50(r3)
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_805231F4_00000C68
    stfs f31, 0x54(r3)
    b lbl_fn_805231F4_00000C68
lbl_fn_805231F4_00000C44:
    bl fn_801F6C2C
    lfs f0, 0x50(r28)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_805231F4_00000C68
    stfs f31, 0x50(r28)
    stfs f31, 0x54(r28)
lbl_fn_805231F4_00000C68:
    addi r30, r30, 0x20
    addi r26, r26, 0x1
lbl_fn_805231F4_00000C70:
    lwz r0, 0xf4(r31)
    cmpw r26, r0
    blt lbl_fn_805231F4_00000BA0
    addi r27, r27, 0x1
    addi r31, r31, 0xc
    cmpwi r27, 0x6
    blt lbl_fn_805231F4_00000B94
    lfs f1, 0xd4(r25)
    lfs f2, lbl_808879F0
    fcmpo cr0, f1, f2
    ble lbl_fn_805231F4_00000CBC
    lfs f0, lbl_80887A04
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_805231F4_00000CB0
    b lbl_fn_805231F4_00000CB4
lbl_fn_805231F4_00000CB0:
    fmr f2, f0
lbl_fn_805231F4_00000CB4:
    stfs f2, 0xd4(r25)
    b lbl_fn_805231F4_00000CDC
lbl_fn_805231F4_00000CBC:
    bge lbl_fn_805231F4_00000CDC
    lfs f0, lbl_80887A04
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_805231F4_00000CD4
    b lbl_fn_805231F4_00000CD8
lbl_fn_805231F4_00000CD4:
    fmr f2, f0
lbl_fn_805231F4_00000CD8:
    stfs f2, 0xd4(r25)
lbl_fn_805231F4_00000CDC:
    lfs f1, 0x180(r25)
    lfs f2, lbl_808879F0
    fcmpo cr0, f1, f2
    ble lbl_fn_805231F4_00000D0C
    lfs f0, lbl_80887A04
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_805231F4_00000D00
    b lbl_fn_805231F4_00000D04
lbl_fn_805231F4_00000D00:
    fmr f2, f0
lbl_fn_805231F4_00000D04:
    stfs f2, 0x180(r25)
    b lbl_fn_805231F4_00000D2C
lbl_fn_805231F4_00000D0C:
    bge lbl_fn_805231F4_00000D2C
    lfs f0, lbl_80887A04
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_805231F4_00000D24
    b lbl_fn_805231F4_00000D28
lbl_fn_805231F4_00000D24:
    fmr f2, f0
lbl_fn_805231F4_00000D28:
    stfs f2, 0x180(r25)
lbl_fn_805231F4_00000D2C:
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805233FC(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x260
    stfd f31, 0x2a0(r1)
    psq_st f31, 0x2a8(r1), 0, 0
    stfd f30, 0x290(r1)
    psq_st f30, 0x298(r1), 0, 0
    stfd f29, 0x280(r1)
    psq_st f29, 0x288(r1), 0, 0
    stfd f28, 0x270(r1)
    psq_st f28, 0x278(r1), 0, 0
    stfd f27, 0x260(r1)
    psq_st f27, 0x268(r1), 0, 0
    bl _savegpr_19
    mr r25, r3
    li r28, 0x0
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_00000DB8
    lwz r3, 0x48(r25)
    lwz r0, 0x11f8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805233FC_00000DB8
    li r28, 0x1
lbl_fn_805233FC_00000DB8:
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r28
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lfs f9, 0xd4(r25)
    lis r23, lbl_8075C364@ha
    lfs f8, 0x14b8(r25)
    lis r22, lbl_8075C6C4@ha
    lfs f7, 0x14b4(r25)
    addi r24, r1, 0x1f0
    lfs f0, 0x14b0(r25)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    addi r23, r23, lbl_8075C364@l
    fmuls f0, f0, f9
    stfs f8, 0xc4(r1)
    addi r22, r22, lbl_8075C6C4@l
    stfs f0, 0xbc(r1)
    li r19, 0x0
    li r26, 0x0
    stfs f7, 0xc0(r1)
    li r27, 0x0
    b lbl_fn_805233FC_00000F74
lbl_fn_805233FC_00000E1C:
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r0, 0x50(r25)
    li r5, 0x0
    lwz r12, 0x60(r12)
    li r6, 0x7
    add r20, r0, r26
    lfs f1, lbl_808879F0
    mr r4, r20
    mtctr r12
    bctrl
    lwzx r0, r23, r27
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00000F18
    lwz r3, 0x8(r20)
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_00000E68
    mr r0, r3
    b lbl_fn_805233FC_00000E6C
lbl_fn_805233FC_00000E68:
    li r0, 0x0
lbl_fn_805233FC_00000E6C:
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00000F18
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_00000E80
    b lbl_fn_805233FC_00000E84
lbl_fn_805233FC_00000E80:
    li r3, 0x0
lbl_fn_805233FC_00000E84:
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r24), 0, 0
    lfs f0, 0xc4(r1)
    lfs f8, 0x21c(r1)
    psq_st f2, 0x8(r24), 0, 0
    fadds f11, f8, f0
    lfs f7, 0xc0(r1)
    psq_st f4, 0x18(r24), 0, 0
    lfs f10, 0x1fc(r1)
    lfs f9, 0x20c(r1)
    lfs f0, 0xbc(r1)
    fadds f7, f9, f7
    psq_st f1, 0x0(r24), 0, 0
    fadds f0, f10, f0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    stfs f0, 0x1fc(r1)
    stfs f7, 0x20c(r1)
    stfs f11, 0x21c(r1)
    lwz r3, 0x8(r20)
    stfs f10, 0xa4(r1)
    cmpwi r3, 0x0
    stfs f9, 0xa8(r1)
    stfs f8, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f11, 0xb8(r1)
    beq lbl_fn_805233FC_00000F0C
    b lbl_fn_805233FC_00000F10
lbl_fn_805233FC_00000F0C:
    li r3, 0x0
lbl_fn_805233FC_00000F10:
    addi r4, r1, 0x1f0
    bl fn_8009EE30
lbl_fn_805233FC_00000F18:
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r20
    addi r5, r22, 0x263
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r20
    addi r5, r22, 0x263
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r20
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    addi r19, r19, 0x1
    addi r26, r26, 0x40
    addi r27, r27, 0x4
lbl_fn_805233FC_00000F74:
    lwz r0, 0x4c(r25)
    cmpw r19, r0
    blt lbl_fn_805233FC_00000E1C
    lis r3, lbl_8075C6C4@ha
    lfs f29, lbl_808879F8
    lfs f28, lbl_808879F0
    mr r29, r25
    addi r23, r3, lbl_8075C6C4@l
    li r27, 0x0
    li r24, 0x1
    lis r22, 0x2aab
lbl_fn_805233FC_00000FA0:
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00001120
    lwz r3, 0xe8(r25)
    subi r0, r22, 0x5555
    subf r3, r3, r27
    addi r4, r3, 0x6
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x6
    subf r3, r0, r4
    addi r0, r3, 0x3
    cmpwi r0, 0x7
    blt lbl_fn_805233FC_00000FE0
    li r0, 0x2
lbl_fn_805233FC_00000FE0:
    stfs f29, 0x8c(r1)
    slwi r31, r0, 6
    mr r3, r25
    addi r6, r1, 0x98
    stfs f29, 0x90(r1)
    addi r7, r1, 0x8c
    addi r8, r23, 0x263
    stfs f29, 0x94(r1)
    stfs f28, 0x98(r1)
    stfs f28, 0x9c(r1)
    stfs f28, 0xa0(r1)
    lwz r0, 0x50(r25)
    lwz r5, 0xf0(r29)
    add r4, r0, r31
    bl fn_8051125C
    li r26, 0x0
    li r30, 0x0
    b lbl_fn_805233FC_000010D4
lbl_fn_805233FC_00001028:
    lwz r0, 0xf8(r29)
    mr r3, r25
    addi r6, r1, 0x80
    addi r7, r1, 0x74
    add r21, r0, r30
    addi r8, r23, 0x263
    lwz r5, 0x18(r21)
    stfs f29, 0x74(r1)
    stfs f29, 0x78(r1)
    stfs f29, 0x7c(r1)
    stfs f28, 0x80(r1)
    stfs f28, 0x84(r1)
    stfs f28, 0x88(r1)
    lwz r0, 0x50(r25)
    add r4, r0, r31
    bl fn_805112AC
    lwz r0, 0xd8(r25)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x1
    cmplwi r0, 0x8
    bgt lbl_fn_805233FC_00001090
    slw r0, r24, r0
    andi. r0, r0, 0x103
    beq lbl_fn_805233FC_00001090
    li r5, 0x0
lbl_fn_805233FC_00001090:
    cmpwi r5, 0x0
    beq lbl_fn_805233FC_000010A8
    lwz r0, 0xe8(r25)
    cmpw r27, r0
    bne lbl_fn_805233FC_000010A8
    li r3, 0x1
lbl_fn_805233FC_000010A8:
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_000010C0
    lwz r0, 0xe4(r25)
    cmpw r26, r0
    bne lbl_fn_805233FC_000010C0
    li r4, 0x1
lbl_fn_805233FC_000010C0:
    lwz r5, 0xf0(r29)
    mr r3, r21
    bl fn_8052635C
    addi r30, r30, 0x20
    addi r26, r26, 0x1
lbl_fn_805233FC_000010D4:
    lwz r0, 0xf4(r29)
    cmpw r26, r0
    blt lbl_fn_805233FC_00001028
    cmpwi r27, 0x0
    bne lbl_fn_805233FC_00001120
    stfs f29, 0x5c(r1)
    mr r3, r25
    addi r6, r1, 0x68
    addi r7, r1, 0x5c
    stfs f29, 0x60(r1)
    addi r8, r23, 0x263
    stfs f29, 0x64(r1)
    stfs f28, 0x68(r1)
    stfs f28, 0x6c(r1)
    stfs f28, 0x70(r1)
    lwz r0, 0x50(r25)
    lwz r5, 0x138(r25)
    add r4, r0, r31
    bl fn_8051125C
lbl_fn_805233FC_00001120:
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0x6
    blt lbl_fn_805233FC_00000FA0
    lwz r4, 0xe8(r25)
    lis r3, 0x2aab
    subi r0, r3, 0x5555
    subfic r4, r4, 0x6
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x6
    subf r3, r0, r4
    addi r19, r3, 0x3
    cmpwi r19, 0x7
    blt lbl_fn_805233FC_00001164
    li r19, 0x2
lbl_fn_805233FC_00001164:
    lwz r29, 0xf8(r25)
    li r4, 0x0
    lwz r3, lbl_8087EF70
    bl fn_800A58D0
    neg r0, r3
    lis r4, lbl_8075C6C4@ha
    or r0, r0, r3
    lfs f30, lbl_808879F8
    slwi r21, r19, 6
    lfs f29, lbl_808879F0
    lfs f28, lbl_808879FC
    mr r20, r25
    srwi r31, r0, 31
    addi r27, r4, lbl_8075C6C4@l
    li r19, 0x0
lbl_fn_805233FC_000011A0:
    stfs f30, 0x44(r1)
    mr r3, r25
    addi r6, r1, 0x50
    addi r7, r1, 0x44
    stfs f30, 0x48(r1)
    addi r8, r27, 0x263
    stfs f30, 0x4c(r1)
    stfs f29, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f29, 0x58(r1)
    lwz r0, 0x50(r25)
    lwz r5, 0x13c(r20)
    add r4, r0, r21
    bl fn_8051125C
    lwz r3, 0x13c(r20)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_00001264
    cmpw r31, r19
    bne lbl_fn_805233FC_00001200
    lwz r3, 0x13c(r20)
    bl fn_80202118
    stfs f30, 0x104(r3)
    b lbl_fn_805233FC_0000120C
lbl_fn_805233FC_00001200:
    lwz r3, 0x13c(r20)
    bl fn_80202118
    stfs f28, 0x104(r3)
lbl_fn_805233FC_0000120C:
    lfs f31, 0x160(r25)
    addi r22, r27, 0x26d
    lwz r3, 0x13c(r20)
    bl fn_80202118
    mr r26, r3
    mr r3, r22
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    lfs f31, 0x164(r25)
    addi r22, r27, 0x275
    lwz r3, 0x13c(r20)
    bl fn_80202118
    mr r26, r3
    mr r3, r22
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
lbl_fn_805233FC_00001264:
    addi r19, r19, 0x1
    addi r20, r20, 0x4
    cmpwi r19, 0x2
    blt lbl_fn_805233FC_000011A0
    lwz r3, 0x104(r25)
    lis r27, lbl_8075C6C4@ha
    mr r21, r25
    li r23, 0x0
    lwz r0, 0x28(r3)
    addi r27, r27, lbl_8075C6C4@l
    li r24, 0x0
    slwi r30, r0, 6
lbl_fn_805233FC_00001294:
    lwz r3, 0x13c(r21)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_0000131C
    addi r20, r25, 0x190
    li r22, 0x0
    b lbl_fn_805233FC_000012E8
lbl_fn_805233FC_000012B0:
    add r4, r20, r24
    lwz r3, 0x13c(r21)
    addi r0, r4, 0x10
    add r19, r0, r30
    bl fn_80202118
    mr r26, r3
    mr r3, r20
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    addi r20, r20, 0x110
    addi r22, r22, 0x1
lbl_fn_805233FC_000012E8:
    lwz r0, 0x18c(r25)
    cmplw r22, r0
    blt lbl_fn_805233FC_000012B0
    lwz r3, 0x13c(r21)
    addi r22, r27, 0x259
    bl fn_80202118
    mr r26, r3
    mr r3, r22
    bl fn_800DC6B4
    lfs f1, lbl_808879F8
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
lbl_fn_805233FC_0000131C:
    addi r23, r23, 0x1
    addi r24, r24, 0x80
    cmpwi r23, 0x2
    addi r21, r21, 0x4
    blt lbl_fn_805233FC_00001294
    lwz r3, 0x18(r29)
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_805233FC_00001470
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00001470
    lwz r3, 0x18(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_000013A0
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_000013A0
    lwz r3, 0x0(r29)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_805233FC_000013A0
    lwz r3, 0x18(r29)
    bl fn_80202D00
    lfs f7, 0x54(r3)
    lfs f0, lbl_80887A00
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_805233FC_000013A0
    li r0, 0x1
    b lbl_fn_805233FC_000013A4
lbl_fn_805233FC_000013A0:
    li r0, 0x0
lbl_fn_805233FC_000013A4:
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00001418
    lfs f7, 0x54(r30)
    lfs f0, lbl_808879F0
    fcmpo cr0, f7, f0
    ble lbl_fn_805233FC_00001418
    subic. r0, r31, 0x1
    blt lbl_fn_805233FC_000013EC
    lwz r3, 0x1c(r29)
    slwi r0, r0, 3
    add r3, r3, r0
    bl fn_80116EB8
    lis r4, lbl_8075C6C4@ha
    mr r5, r3
    addi r4, r4, lbl_8075C6C4@l
    mr r3, r30
    addi r4, r4, 0x27d
    bl fn_801F837C
lbl_fn_805233FC_000013EC:
    lwz r3, 0x1c(r29)
    slwi r0, r31, 3
    add r3, r3, r0
    bl fn_80116EB8
    lis r4, lbl_8075C6C4@ha
    mr r5, r3
    addi r4, r4, lbl_8075C6C4@l
    mr r3, r30
    addi r4, r4, 0x289
    bl fn_801F837C
    b lbl_fn_805233FC_00001470
lbl_fn_805233FC_00001418:
    lwz r3, 0x1c(r29)
    slwi r0, r31, 3
    add r3, r3, r0
    bl fn_80116EB8
    lis r26, lbl_8075C6C4@ha
    mr r5, r3
    addi r26, r26, lbl_8075C6C4@l
    mr r3, r30
    addi r4, r26, 0x27d
    bl fn_801F837C
    lwz r0, 0xc(r29)
    addi r4, r31, 0x1
    cmpw r4, r0
    bge lbl_fn_805233FC_00001470
    lwz r3, 0x1c(r29)
    slwi r0, r4, 3
    add r3, r3, r0
    bl fn_80116EB8
    mr r5, r3
    mr r3, r30
    addi r4, r26, 0x289
    bl fn_801F837C
lbl_fn_805233FC_00001470:
    lwz r3, 0xfc(r25)
    bl fn_80202118
    lwz r5, 0xe8(r25)
    lis r4, 0x2aab
    subi r0, r4, 0x5555
    mr r26, r3
    subfic r4, r5, 0x7
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x6
    subf r3, r0, r4
    addi r0, r3, 0x3
    cmpwi r0, 0x7
    blt lbl_fn_805233FC_000014B0
    li r0, 0x2
lbl_fn_805233FC_000014B0:
    lis r3, lbl_8075C6C4@ha
    lfs f28, lbl_808879F8
    lfs f29, lbl_808879F0
    mr r23, r25
    lwz r21, 0x104(r25)
    slwi r24, r0, 6
    lfs f30, lbl_80887A08
    addi r29, r3, lbl_8075C6C4@l
    lfs f31, lbl_80887A0C
    li r19, 0x0
lbl_fn_805233FC_000014D8:
    stfs f28, 0x2c(r1)
    mr r3, r25
    addi r6, r1, 0x38
    addi r7, r1, 0x2c
    stfs f28, 0x30(r1)
    addi r8, r29, 0x263
    stfs f28, 0x34(r1)
    stfs f29, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f29, 0x40(r1)
    lwz r0, 0x50(r25)
    lwz r5, 0x144(r23)
    add r4, r0, r24
    bl fn_8051125C
    lwz r3, 0x144(r23)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_0000160C
    cmpwi r26, 0x0
    beq lbl_fn_805233FC_00001554
    addi r3, r29, 0x294
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x168
    bl fn_801F4E8C
    lwz r3, 0x144(r23)
    bl fn_80202118
    addi r4, r29, 0x2a5
    addi r5, r1, 0x168
    bl fn_801F4728
lbl_fn_805233FC_00001554:
    cmpw r31, r19
    bne lbl_fn_805233FC_0000157C
    lfs f0, 0x14c(r23)
    fadds f0, f30, f0
    fcmpo cr0, f0, f28
    bge lbl_fn_805233FC_00001570
    b lbl_fn_805233FC_00001574
lbl_fn_805233FC_00001570:
    fmr f0, f28
lbl_fn_805233FC_00001574:
    stfs f0, 0x14c(r23)
    b lbl_fn_805233FC_00001598
lbl_fn_805233FC_0000157C:
    lfs f0, 0x14c(r23)
    fsubs f0, f0, f30
    fcmpo cr0, f0, f29
    ble lbl_fn_805233FC_00001590
    b lbl_fn_805233FC_00001594
lbl_fn_805233FC_00001590:
    fmr f0, f29
lbl_fn_805233FC_00001594:
    stfs f0, 0x14c(r23)
lbl_fn_805233FC_00001598:
    lfs f0, 0x14c(r23)
    addi r22, r29, 0x2ae
    lwz r3, 0x144(r23)
    fmuls f27, f31, f0
    bl fn_80202118
    mr r27, r3
    mr r3, r22
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    addi r3, r27, 0x58
    li r5, 0x0
    bl fn_801FEDBC
    lwz r0, 0x8(r21)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_000015E0
    lfs f27, lbl_808879F0
    b lbl_fn_805233FC_000015E4
lbl_fn_805233FC_000015E0:
    lfs f27, lbl_808879F8
lbl_fn_805233FC_000015E4:
    lwz r3, 0x144(r23)
    addi r22, r29, 0x2b9
    bl fn_80202118
    mr r27, r3
    mr r3, r22
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    addi r3, r27, 0x58
    bl fn_801FECE0
lbl_fn_805233FC_0000160C:
    addi r19, r19, 0x1
    addi r23, r23, 0x4
    cmpwi r19, 0x2
    blt lbl_fn_805233FC_000014D8
    lwz r19, lbl_8087F9C0
    lwz r3, 0xfc(r25)
    bl fn_80202118
    lwz r0, 0x28(r19)
    mr r29, r3
    cmpwi r0, 0x1
    bne lbl_fn_805233FC_000016B0
    lis r3, lbl_8075C6C4@ha
    addi r21, r29, 0x58
    addi r26, r3, lbl_8075C6C4@l
    addi r3, r26, 0x2c1
    bl fn_800DC6B4
    lfs f1, lbl_808879F0
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    mr r21, r25
    addi r22, r26, 0x2c1
    li r20, 0x0
lbl_fn_805233FC_00001668:
    lwz r3, 0x144(r21)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_0000169C
    lwz r3, 0x144(r21)
    bl fn_80202118
    mr r26, r3
    mr r3, r22
    bl fn_800DC6B4
    lfs f1, lbl_808879F0
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
lbl_fn_805233FC_0000169C:
    addi r20, r20, 0x1
    addi r21, r21, 0x4
    cmpwi r20, 0x2
    blt lbl_fn_805233FC_00001668
    b lbl_fn_805233FC_00001724
lbl_fn_805233FC_000016B0:
    lis r3, lbl_8075C6C4@ha
    addi r21, r29, 0x58
    addi r26, r3, lbl_8075C6C4@l
    addi r3, r26, 0x2c1
    bl fn_800DC6B4
    lfs f1, lbl_808879F8
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    mr r21, r25
    addi r22, r26, 0x2c1
    li r20, 0x0
lbl_fn_805233FC_000016E0:
    lwz r3, 0x144(r21)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_00001714
    lwz r3, 0x144(r21)
    bl fn_80202118
    mr r26, r3
    mr r3, r22
    bl fn_800DC6B4
    lfs f1, lbl_808879F8
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
lbl_fn_805233FC_00001714:
    addi r20, r20, 0x1
    addi r21, r21, 0x4
    cmpwi r20, 0x2
    blt lbl_fn_805233FC_000016E0
lbl_fn_805233FC_00001724:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_0000179C
    lis r27, 0xf
    li r3, 0x0
    addi r4, r27, 0x42a6
    bl fn_80116FC0
    lis r26, lbl_8075C6C4@ha
    mr r22, r3
    addi r26, r26, lbl_8075C6C4@l
    addi r21, r29, 0x58
    addi r3, r26, 0x2c7
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r22
    bl fn_801FEE08
    addi r4, r27, 0x42aa
    li r3, 0x0
    bl fn_80116FC0
    mr r22, r3
    addi r3, r26, 0x2d1
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r22
    bl fn_801FEE08
    b lbl_fn_805233FC_0000186C
lbl_fn_805233FC_0000179C:
    lwz r0, 0x30(r19)
    cmpwi r0, 0x1
    bne lbl_fn_805233FC_0000180C
    lis r27, 0xf
    li r3, 0x0
    addi r4, r27, 0x42a4
    bl fn_80116FC0
    lis r26, lbl_8075C6C4@ha
    mr r22, r3
    addi r26, r26, lbl_8075C6C4@l
    addi r21, r29, 0x58
    addi r3, r26, 0x2c7
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r22
    bl fn_801FEE08
    addi r4, r27, 0x42a8
    li r3, 0x0
    bl fn_80116FC0
    mr r22, r3
    addi r3, r26, 0x2d1
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r22
    bl fn_801FEE08
    b lbl_fn_805233FC_0000186C
lbl_fn_805233FC_0000180C:
    lis r27, 0xf
    li r3, 0x0
    addi r4, r27, 0x42a5
    bl fn_80116FC0
    lis r26, lbl_8075C6C4@ha
    mr r22, r3
    addi r26, r26, lbl_8075C6C4@l
    addi r21, r29, 0x58
    addi r3, r26, 0x2c7
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r22
    bl fn_801FEE08
    addi r4, r27, 0x42a9
    li r3, 0x0
    bl fn_80116FC0
    mr r22, r3
    addi r3, r26, 0x2d1
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r21
    mr r5, r22
    bl fn_801FEE08
lbl_fn_805233FC_0000186C:
    lwz r5, lbl_8087F9C0
    li r4, 0x0
    lwz r3, lbl_8087EF70
    lwz r5, 0x28(r5)
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r26, r0, 5
    bl fn_800A58D0
    lwz r4, 0x104(r25)
    cntlzw r0, r26
    srwi r0, r0, 5
    cmpwi r28, 0x0
    stw r0, 0x14(r4)
    lwz r4, 0x110(r25)
    stw r3, 0x90(r4)
    lwz r3, 0x138(r25)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    beq lbl_fn_805233FC_00001E2C
    lwz r4, 0x50(r25)
    lwz r5, 0xc8(r4)
    cmpwi r5, 0x0
    bne lbl_fn_805233FC_000018D4
    li r0, 0x0
    b lbl_fn_805233FC_000018DC
lbl_fn_805233FC_000018D4:
    lwz r3, 0x4(r5)
    addi r0, r3, 0x10
lbl_fn_805233FC_000018DC:
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00001E2C
    lwz r0, 0xc8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_000018F4
    li r5, 0x0
lbl_fn_805233FC_000018F4:
    cmpwi r5, 0x0
    beq lbl_fn_805233FC_00001E2C
    lfs f0, lbl_808879F0
    stfs f0, 0x154(r1)
    stfs f0, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f0, 0x160(r1)
    stfs f0, 0x164(r1)
    lwz r3, 0x50(r25)
    lwz r3, 0xc8(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805233FC_0000192C
    li r22, 0x0
    b lbl_fn_805233FC_00001934
lbl_fn_805233FC_0000192C:
    lwz r3, 0x4(r3)
    addi r22, r3, 0x10
lbl_fn_805233FC_00001934:
    lis r4, lbl_8075C6C4@ha
    mr r3, r22
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x263
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_805233FC_0000195C
    li r4, 0x0
    b lbl_fn_805233FC_00001968
lbl_fn_805233FC_0000195C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r22)
    add r4, r3, r0
lbl_fn_805233FC_00001968:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x180
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    lwz r3, 0x50(r25)
    lwz r3, 0xc8(r3)
    cmpwi r3, 0x0
    bne lbl_fn_805233FC_000019B0
    li r3, 0x0
lbl_fn_805233FC_000019B0:
    addi r4, r1, 0x180
    addi r3, r3, 0x30
    mr r5, r4
    bl fn_805F89F0
    lis r31, lbl_8075C6C4@ha
    addi r3, r1, 0x1b0
    addi r31, r31, lbl_8075C6C4@l
    addi r4, r31, 0x2dc
    crclr 6
    bl sprintf
    lwz r0, 0xe8(r25)
    mulli r0, r0, 0xc
    add r3, r25, r0
    lwz r3, 0xf0(r3)
    bl fn_80202118
    mr r22, r3
    addi r3, r1, 0x1b0
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r22
    addi r3, r1, 0xf0
    bl fn_801F4E8C
    lfs f10, 0xf0(r1)
    mr r3, r25
    lfs f9, 0xf4(r1)
    addi r7, r1, 0x154
    lfs f8, 0xf8(r1)
    li r4, 0x0
    lfs f7, 0xfc(r1)
    li r5, 0x0
    lfs f0, 0x100(r1)
    stfs f10, 0x154(r1)
    stfs f9, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f7, 0x160(r1)
    stfs f0, 0x164(r1)
    lwz r6, 0xd8(r25)
    lwz r8, 0x50(r25)
    neg r0, r6
    or r0, r0, r6
    addi r6, r8, 0xc0
    srwi r8, r0, 31
    bl fn_805118B8
    lwz r0, 0xd8(r25)
    cmpwi r0, 0x7
    bne lbl_fn_805233FC_00001AF4
    lwz r0, 0x178(r25)
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00001E2C
    addi r3, r1, 0x1b0
    addi r4, r31, 0x2e9
    crclr 6
    bl sprintf
    lwz r22, 0x178(r25)
    addi r3, r1, 0x1b0
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r22
    addi r3, r1, 0x140
    bl fn_801F4E8C
    lfs f9, lbl_80887A10
    addi r6, r1, 0x154
    lfs f8, 0x140(r1)
    li r5, 0x0
    lfs f7, 0x144(r1)
    li r7, 0x0
    fadds f10, f9, f8
    lfs f0, lbl_80887A14
    lfs f8, lbl_80887A18
    fsubs f9, f7, f0
    lfs f7, lbl_80887A04
    lfs f0, lbl_808879F0
    stfs f10, 0x154(r1)
    lwz r3, lbl_8087F580
    stfs f9, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f7, 0x160(r1)
    stfs f0, 0x164(r1)
    lwz r4, 0x178(r25)
    bl fn_804A53D4
    b lbl_fn_805233FC_00001E2C
lbl_fn_805233FC_00001AF4:
    cmpwi r0, 0x1
    bne lbl_fn_805233FC_00001B98
    lwz r0, 0x154(r25)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_00001E2C
    lwz r5, 0x138(r25)
    addi r3, r1, 0x1b0
    addi r4, r31, 0x2f6
    lwz r0, 0x104(r5)
    oris r0, r0, 0x80
    stw r0, 0x104(r5)
    lwz r5, 0xe4(r25)
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_00001B54
    lwz r3, 0x140(r25)
    bl fn_80202118
    mr r26, r3
    b lbl_fn_805233FC_00001B60
lbl_fn_805233FC_00001B54:
    lwz r3, 0x13c(r25)
    bl fn_80202118
    mr r26, r3
lbl_fn_805233FC_00001B60:
    addi r3, r1, 0x1b0
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r26
    addi r3, r1, 0x12c
    bl fn_801F4E8C
    lwz r3, 0x138(r25)
    bl fn_80202118
    lis r4, lbl_8075C6C4@ha
    addi r5, r1, 0x12c
    addi r4, r4, lbl_8075C6C4@l
    addi r4, r4, 0x307
    bl fn_801F4728
    b lbl_fn_805233FC_00001E2C
lbl_fn_805233FC_00001B98:
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00001E2C
    cmpwi r0, 0x8
    beq lbl_fn_805233FC_00001E2C
    lwz r0, 0xe8(r25)
    addi r3, r1, 0x1b0
    lwz r5, 0xe4(r25)
    addi r4, r31, 0x311
    mulli r6, r0, 0xc
    slwi r0, r5, 5
    add r6, r25, r6
    lwz r6, 0xf8(r6)
    add r21, r6, r0
    crclr 6
    bl sprintf
    lwz r0, 0xe8(r25)
    mulli r0, r0, 0xc
    add r3, r25, r0
    lwz r3, 0xf0(r3)
    bl fn_80202118
    mr r22, r3
    addi r3, r1, 0x1b0
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r22
    addi r3, r1, 0x118
    bl fn_801F4E8C
    lwz r3, 0x0(r21)
    subi r0, r3, 0x1
    cmplwi r0, 0x6
    ble lbl_fn_805233FC_00001C34
    subi r0, r3, 0x8
    cmplwi r0, 0x1
    ble lbl_fn_805233FC_00001CA0
    cmpwi r3, 0xa
    blt lbl_fn_805233FC_00001E2C
    cmpwi r3, 0xb
    ble lbl_fn_805233FC_00001D78
    b lbl_fn_805233FC_00001E2C
lbl_fn_805233FC_00001C34:
    lwz r0, 0xd8(r25)
    cmpwi r0, 0x2
    bne lbl_fn_805233FC_00001CA0
    lwz r3, 0x18(r21)
    bl fn_80202D00
    lfs f1, lbl_80887A1C
    addi r4, r31, 0x320
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x18(r21)
    bl fn_80202D00
    lfs f1, lbl_80887A20
    addi r4, r31, 0x32b
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x18(r21)
    bl fn_80202D00
    lfs f1, lbl_80887A24
    addi r4, r31, 0x336
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x18(r21)
    bl fn_80202D00
    lfs f1, lbl_80887A28
    addi r4, r31, 0x336
    li r5, 0x2
    bl fn_801F6D7C
lbl_fn_805233FC_00001CA0:
    lis r4, lbl_8075C6C4@ha
    addi r3, r1, 0x1b0
    addi r4, r4, lbl_8075C6C4@l
    addi r4, r4, 0x2dc
    crclr 6
    bl sprintf
    lwz r3, 0x18(r21)
    bl fn_80202D00
    mr r4, r3
    addi r3, r1, 0xdc
    addi r5, r1, 0x1b0
    bl fn_801F8830
    lfs f10, 0xdc(r1)
    lfs f9, 0xe0(r1)
    lfs f8, 0xe4(r1)
    lfs f7, 0xe8(r1)
    lfs f0, 0xec(r1)
    stfs f10, 0x154(r1)
    stfs f9, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f7, 0x160(r1)
    stfs f0, 0x164(r1)
    lwz r0, 0x10(r21)
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00001D10
    lwz r0, 0x14(r21)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_00001D48
lbl_fn_805233FC_00001D10:
    lwz r4, 0x50(r25)
    lwz r3, 0x18(r21)
    addi r21, r4, 0xc0
    bl fn_80202D00
    lis r5, lbl_8075C6C4@ha
    mr r4, r3
    addi r5, r5, lbl_8075C6C4@l
    mr r3, r25
    mr r6, r21
    addi r7, r1, 0x154
    addi r5, r5, 0x341
    li r8, 0x0
    bl fn_805119CC
    b lbl_fn_805233FC_00001E2C
lbl_fn_805233FC_00001D48:
    lwz r4, 0x50(r25)
    lwz r3, 0x18(r21)
    addi r21, r4, 0xc0
    bl fn_80202D00
    mr r4, r3
    mr r3, r25
    mr r6, r21
    addi r7, r1, 0x154
    li r5, 0x0
    li r8, 0x0
    bl fn_805119CC
    b lbl_fn_805233FC_00001E2C
lbl_fn_805233FC_00001D78:
    lfs f9, lbl_80887A2C
    lfs f8, 0x118(r1)
    lfs f7, 0x11c(r1)
    fadds f10, f9, f8
    lfs f0, lbl_80887A14
    lfs f8, lbl_80887A18
    fsubs f9, f7, f0
    lfs f7, lbl_80887A04
    lfs f0, lbl_808879F0
    stfs f10, 0x154(r1)
    stfs f9, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f7, 0x160(r1)
    stfs f0, 0x164(r1)
    lwz r0, 0x10(r21)
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00001DC8
    lwz r0, 0x14(r21)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_00001E00
lbl_fn_805233FC_00001DC8:
    lwz r4, 0x50(r25)
    lwz r3, 0x18(r21)
    addi r21, r4, 0xc0
    bl fn_80202D00
    lis r5, lbl_8075C6C4@ha
    mr r4, r3
    addi r5, r5, lbl_8075C6C4@l
    mr r3, r25
    mr r6, r21
    addi r7, r1, 0x154
    addi r5, r5, 0x341
    li r8, 0x0
    bl fn_805119CC
    b lbl_fn_805233FC_00001E2C
lbl_fn_805233FC_00001E00:
    lwz r4, 0x50(r25)
    lwz r3, 0x18(r21)
    addi r21, r4, 0xc0
    bl fn_80202D00
    mr r4, r3
    mr r3, r25
    mr r6, r21
    addi r7, r1, 0x154
    li r5, 0x0
    li r8, 0x0
    bl fn_805119CC
lbl_fn_805233FC_00001E2C:
    lwz r3, 0x17c(r25)
    cmpwi r3, 0x0
    beq lbl_fn_805233FC_00001F68
    lbz r0, 0x96(r25)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_00001F68
    cmpwi r28, 0x0
    beq lbl_fn_805233FC_00001E64
    lwz r0, 0xd8(r25)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_00001E64
    lfs f0, lbl_808879F8
    stfs f0, 0x104(r3)
    b lbl_fn_805233FC_00001E6C
lbl_fn_805233FC_00001E64:
    lfs f0, lbl_808879FC
    stfs f0, 0x104(r3)
lbl_fn_805233FC_00001E6C:
    lfs f27, 0x180(r25)
    lfs f0, lbl_808879F0
    fcmpo cr0, f27, f0
    ble lbl_fn_805233FC_00001EC8
    lwz r4, 0x17c(r25)
    lis r26, lbl_8075C6C4@ha
    addi r26, r26, lbl_8075C6C4@l
    addi r3, r26, 0x347
    addi r21, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    lwz r4, 0x17c(r25)
    addi r3, r26, 0x34e
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808879F0
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    b lbl_fn_805233FC_00001F68
lbl_fn_805233FC_00001EC8:
    bge lbl_fn_805233FC_00001F20
    lwz r4, 0x17c(r25)
    lis r26, lbl_8075C6C4@ha
    addi r26, r26, lbl_8075C6C4@l
    addi r3, r26, 0x347
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808879F0
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    lfs f0, 0x180(r25)
    addi r3, r26, 0x34e
    lwz r4, 0x17c(r25)
    fneg f27, f0
    addi r21, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    b lbl_fn_805233FC_00001F68
lbl_fn_805233FC_00001F20:
    lwz r4, 0x17c(r25)
    lis r26, lbl_8075C6C4@ha
    addi r26, r26, lbl_8075C6C4@l
    addi r3, r26, 0x347
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808879F0
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    lwz r4, 0x17c(r25)
    addi r3, r26, 0x34e
    addi r21, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808879F0
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
lbl_fn_805233FC_00001F68:
    lwz r3, 0x178(r25)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r22, 0x174(r25)
    cmpwi r22, 0x0
    beq lbl_fn_805233FC_00002098
    lwz r0, 0x178(r25)
    cmpwi r0, 0x0
    beq lbl_fn_805233FC_00002098
    lbz r0, 0x96(r25)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_00002098
    lfs f0, lbl_808879F0
    lis r26, lbl_8075C6C4@ha
    addi r26, r26, lbl_8075C6C4@l
    stfs f0, 0x104(r1)
    addi r3, r26, 0x2e9
    stfs f0, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0x110(r1)
    stfs f0, 0x114(r1)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r22
    addi r3, r1, 0xc8
    bl fn_801F4E8C
    lfs f10, 0xc8(r1)
    addi r4, r26, 0x2a5
    lfs f9, 0xcc(r1)
    addi r5, r1, 0x104
    lfs f8, 0xd0(r1)
    lfs f7, 0xd4(r1)
    lfs f0, 0xd8(r1)
    stfs f10, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f8, 0x10c(r1)
    stfs f7, 0x110(r1)
    stfs f0, 0x114(r1)
    lwz r3, 0x178(r25)
    bl fn_801F4728
    lwz r3, 0x178(r25)
    lis r4, lbl_8075C6A8@ha
    lfs f0, lbl_808879F0
    lis r0, 0x4330
    stfs f0, 0x100(r3)
    addi r3, r26, 0x355
    lfd f7, lbl_8075C6A8@l(r4)
    lwz r4, 0x170(r25)
    lwz r5, 0x178(r25)
    addi r4, r4, 0x5
    stw r0, 0x220(r1)
    xoris r0, r4, 0x8000
    addi r21, r5, 0x58
    stw r0, 0x224(r1)
    lfd f0, 0x220(r1)
    fsubs f27, f0, f7
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    mr r3, r21
    bl fn_801FECE0
    lwz r0, 0xd8(r25)
    cmpwi r0, 0x7
    bne lbl_fn_805233FC_0000208C
    lwz r3, 0x174(r25)
    lfs f0, lbl_808879F8
    stfs f0, 0x104(r3)
    lwz r3, 0x178(r25)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_805233FC_00002098
lbl_fn_805233FC_0000208C:
    lwz r3, 0x174(r25)
    lfs f0, lbl_808879FC
    stfs f0, 0x104(r3)
lbl_fn_805233FC_00002098:
    cmpwi r28, 0x0
    beq lbl_fn_805233FC_0000213C
    lwz r0, 0xd8(r25)
    cmpwi r0, 0x0
    bne lbl_fn_805233FC_00002100
    lis r22, lbl_807C7030@ha
    addi r5, r1, 0x20
    addi r22, r22, lbl_807C7030@l
    lwz r3, lbl_8087F580
    psq_l f1, 0x0(r22), 0, 0
    li r4, 0x4
    lfs f2, 0x8(r22)
    li r6, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    bl fn_804A5E40
    lfs f2, 0x8(r22)
    addi r5, r1, 0x14
    psq_l f1, 0x0(r22), 0, 0
    li r4, 0x3
    psq_st f1, 0x0(r5), 0, 0
    li r6, 0x0
    lwz r3, lbl_8087F580
    stfs f2, 0x1c(r1)
    bl fn_804A5E40
    b lbl_fn_805233FC_0000213C
lbl_fn_805233FC_00002100:
    cmpwi r0, 0x7
    beq lbl_fn_805233FC_0000213C
    cmpwi r0, 0x8
    beq lbl_fn_805233FC_0000213C
    lis r6, lbl_807C7030@ha
    addi r5, r1, 0x8
    addi r6, r6, lbl_807C7030@l
    lwz r3, lbl_8087F580
    psq_l f1, 0x0(r6), 0, 0
    li r4, 0x5
    lfs f2, 0x8(r6)
    li r6, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    bl fn_804A5E40
lbl_fn_805233FC_0000213C:
    addi r11, r1, 0x260
    psq_l f31, 0x2a8(r1), 0, 0
    lfd f31, 0x2a0(r1)
    psq_l f30, 0x298(r1), 0, 0
    lfd f30, 0x290(r1)
    psq_l f29, 0x288(r1), 0, 0
    lfd f29, 0x280(r1)
    psq_l f28, 0x278(r1), 0, 0
    lfd f28, 0x270(r1)
    psq_l f27, 0x268(r1), 0, 0
    lfd f27, 0x260(r1)
    bl _restgpr_19
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}
