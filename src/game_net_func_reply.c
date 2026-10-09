#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSIsThreadSuspended(void);
extern void OSResumeThread(void);
extern void OSWakeupThread(void);
extern void dtor_80084684(void);
extern void fn_800827E0(void);
extern void fn_80083AD4(void);
extern void fn_804DBC84(void);
extern void fn_8050AA90(void);
extern void fn_8050AAD4(void);
extern void fn_8050AAE4(void);
extern void fn_8050B1AC(void);
extern void fn_8050B228(void);
extern void fn_8050B65C(void);
extern void fn_8050BAC8(void);
extern void fn_8050BDC8(void);
extern void fn_8050D488(void);
extern void fn_8050D504(void);
extern void fn_8050D5BC(void);
extern void fn_8050D680(void);
extern void fn_8050D72C(void);
extern void fn_8050DDE0(void);
extern void fn_8050E098(void);
extern void fn_8050E6D0(void);
extern void fn_8050E6F8(void);
extern void fn_8050E7E0(void);
extern void fn_8050E998(void);
extern void fn_8050EB8C(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_80624D40(void);
extern void fn_806823B0(void);
extern void fn_80686A64(void);
extern void fn_806959D8(void);
extern void fn_806A2790(void);
extern void fn_806A295C(void);
extern void fn_806A2A58(void);
extern void fn_806A2E8C(void);
extern void fn_806A7020(void);
extern void fn_806A70E0(void);
extern void fn_806A7150(void);
extern void fn_806A7250(void);
extern void fn_806A76A0(void);
extern void fn_806A8200(void);
extern void fn_806A8270(void);
extern void fn_806A8280(void);
extern void fn_806A8290(void);
extern void fn_806A8D90(void);
extern void fn_806A8DB0(void);
extern void fn_806AF6A0(void);
extern void fn_806AF910(void);
extern void fn_806AFAA0(void);
extern void fn_806AFDB0(void);
extern void fn_806B0980(void);
extern void fn_806B3220(void);
extern void fn_806B3680(void);
extern void fn_806B3C40(void);
extern void fn_806B3CC0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 jumptable_80792E08[];
extern u8 lbl_8075B090[];
extern u8 lbl_8075B098[];
extern u8 lbl_80791B00[];
extern u8 lbl_807930F0[];
extern u8 lbl_80793108[];

/* Small data declarations */
extern u32 lbl_8087E160;
extern u32 lbl_8087F628;
extern u32 lbl_8087F62C;

/* Function declarations */
void fn_80508CC8(void);
void fn_80508CF0(void);
void fn_80508DA0(void);
void fn_80508F0C(void);
void fn_80508FB0(void);
void fn_80509300(void);
void fn_80509A8C(void);
void fn_80509A94(void);
void fn_80509A9C(void);
void fn_80509AFC(void);
void fn_80509B24(void);
void fn_80509B50(void);
void fn_80509C8C(void);
void fn_80509CB0(void);
void fn_80509DA4(void);
void fn_80509F0C(void);
void fn_80509F4C(void);
void fn_8050A104(void);
void fn_8050A3D4(void);
void fn_8050A4E4(void);
void fn_8050A5F0(void);
void fn_8050A638(void);

asm void fn_80508CC8(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x20(r3)
    blr
}

asm void fn_80508CF0(void)
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
    beq lbl_fn_80508CF0_000000B8
    lis r4, lbl_807930F0@ha
    addi r4, r4, lbl_807930F0@l
    stw r4, 0x0(r3)
    bl fn_8050D488
    addis r3, r29, 0x1
    subic. r0, r3, 0x4130
    beq lbl_fn_80508CF0_00000090
    lwz r31, -0x4130(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80508CF0_00000090
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    addis r3, r29, 0x1
    li r0, 0x0
    stw r0, -0x4130(r3)
lbl_fn_80508CF0_00000090:
    lis r4, fn_804DBC84@ha
    addi r3, r29, 0xd8
    addi r4, r4, fn_804DBC84@l
    li r5, 0x24
    li r6, 0x8
    bl fn_806959D8
    cmpwi r30, 0x0
    ble lbl_fn_80508CF0_000000B8
    mr r3, r29
    bl dtor_80084684
lbl_fn_80508CF0_000000B8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80508DA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80508DA0_00000144
    lwz r0, 0x0(r4)
    stw r0, 0x98(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x9c(r3)
    lwz r0, 0x8(r4)
    stw r0, 0xa0(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xa4(r3)
    lwz r0, 0x10(r4)
    stw r0, 0xa8(r3)
    lwz r0, 0x14(r4)
    stw r0, 0xac(r3)
    lwz r0, 0x18(r4)
    stw r0, 0xb0(r3)
    lwz r0, 0x1c(r4)
    stw r0, 0xb4(r3)
    lwz r0, 0x20(r4)
    stw r0, 0xb8(r3)
    lwz r0, 0x24(r4)
    stw r0, 0xbc(r3)
lbl_fn_80508DA0_00000144:
    li r0, 0x1
    stw r0, 0xc8(r3)
    addi r3, r3, 0x414
    bl fn_805F30F0
    lis r4, lbl_8075B098@ha
    lis r3, 0x534c
    lis r6, fn_8050D504@ha
    lis r7, fn_8050D5BC@ha
    addi r5, r3, 0x5345
    addi r4, r4, lbl_8075B098@l
    addi r6, r6, fn_8050D504@l
    addi r7, r7, fn_8050D5BC@l
    li r3, 0x1
    bl fn_806A7150
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80508DA0_000001A0
    lwz r0, -0x3de8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80508DA0_000001A0
    li r3, 0x0
    bl fn_806A8200
lbl_fn_80508DA0_000001A0:
    li r3, 0x0
    bl fn_806A76A0
    lwz r12, 0xb0(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80508DA0_000001C4
    addi r3, r31, 0x430
    li r4, 0x9f0
    mtctr r12
    bctrl
lbl_fn_80508DA0_000001C4:
    li r10, 0x0
    addis r4, r31, 0x1
    li r9, 0x8
    li r7, 0x2
    oris r8, r10, 0x40
    li r6, 0x1e
    li r5, 0x12c
    li r0, 0x3e8
    stw r10, 0x8(r31)
    li r3, 0x1
    stw r10, 0x4(r31)
    stw r10, 0xcc(r31)
    stw r10, 0x25c(r31)
    stb r10, 0xc0(r31)
    stw r9, 0x264(r31)
    stw r8, 0x1f8(r31)
    stw r10, 0x268(r31)
    stw r7, 0x260(r31)
    stw r6, 0x254(r31)
    stw r5, 0x258(r31)
    stw r0, 0x250(r31)
    stw r10, -0x4138(r4)
    stw r10, -0x413c(r4)
    stw r10, -0x4134(r4)
    stw r10, 0x3e6c(r31)
    stw r10, 0xc(r31)
    stw r9, 0x270(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80508F0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, lbl_8087F628
    addis r30, r4, 0x1
    subi r3, r30, 0x4128
    bl OSIsThreadSuspended
    cmpwi r3, 0x1
    bne lbl_fn_80508F0C_00000280
    subi r3, r30, 0x4128
    bl OSResumeThread
lbl_fn_80508F0C_00000280:
    li r31, 0x0
    stw r31, -0x3e10(r30)
    li r0, 0x7
    subi r3, r30, 0x3dfc
    stw r0, -0x3e08(r30)
    bl OSWakeupThread
    stw r31, -0x3e0c(r30)
    addis r3, r29, 0x1
    lbz r0, -0x3deb(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80508F0C_000002BC
    lwz r0, -0x3de8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80508F0C_000002BC
    bl fn_806A8DB0
lbl_fn_80508F0C_000002BC:
    bl fn_806A7250
    li r0, 0x0
    stw r0, 0xc8(r29)
    li r3, 0x1
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80508FB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x8
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl memset
    lis r3, fn_8050D680@ha
    lis r4, fn_8050D72C@ha
    addi r3, r3, fn_8050D680@l
    stw r3, 0x8(r1)
    addi r4, r4, fn_8050D72C@l
    stw r4, 0xc(r1)
    addi r3, r1, 0x8
    bl fn_806A2790
    cmpwi r3, 0x0
    beq lbl_fn_80508FB0_00000570
    cmpwi r3, -0x7
    beq lbl_fn_80508FB0_00000350
    cmpwi r3, -0x1c
    beq lbl_fn_80508FB0_000003D8
    cmpwi r3, -0x31
    beq lbl_fn_80508FB0_00000460
    b lbl_fn_80508FB0_000004E8
lbl_fn_80508FB0_00000350:
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_80508FB0_0000039C
    mr r6, r31
    li r5, 0x0
    b lbl_fn_80508FB0_00000388
lbl_fn_80508FB0_0000036C:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_80508FB0_00000388:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80508FB0_0000036C
    stw r0, -0x4180(r4)
lbl_fn_80508FB0_0000039C:
    addis r3, r31, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_80508FB0_000003C4
    li r0, 0x1
    stw r0, 0x0(r3)
    li r0, -0x7
    stw r0, 0x4(r3)
lbl_fn_80508FB0_000003C4:
    addis r4, r31, 0x1
    lwz r3, -0x4180(r4)
    addi r0, r3, 0x1
    stw r0, -0x4180(r4)
    b lbl_fn_80508FB0_00000568
lbl_fn_80508FB0_000003D8:
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_80508FB0_00000424
    mr r6, r31
    li r5, 0x0
    b lbl_fn_80508FB0_00000410
lbl_fn_80508FB0_000003F4:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_80508FB0_00000410:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80508FB0_000003F4
    stw r0, -0x4180(r4)
lbl_fn_80508FB0_00000424:
    addis r3, r31, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_80508FB0_0000044C
    li r0, 0x2
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_80508FB0_0000044C:
    addis r4, r31, 0x1
    lwz r3, -0x4180(r4)
    addi r0, r3, 0x1
    stw r0, -0x4180(r4)
    b lbl_fn_80508FB0_00000568
lbl_fn_80508FB0_00000460:
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_80508FB0_000004AC
    mr r6, r31
    li r5, 0x0
    b lbl_fn_80508FB0_00000498
lbl_fn_80508FB0_0000047C:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_80508FB0_00000498:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80508FB0_0000047C
    stw r0, -0x4180(r4)
lbl_fn_80508FB0_000004AC:
    addis r3, r31, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_80508FB0_000004D4
    li r0, 0x3
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_80508FB0_000004D4:
    addis r4, r31, 0x1
    lwz r3, -0x4180(r4)
    addi r0, r3, 0x1
    stw r0, -0x4180(r4)
    b lbl_fn_80508FB0_00000568
lbl_fn_80508FB0_000004E8:
    addis r5, r31, 0x1
    lwz r0, -0x4180(r5)
    cmplwi r0, 0x8
    blt lbl_fn_80508FB0_00000534
    mr r7, r31
    li r6, 0x0
    b lbl_fn_80508FB0_00000520
lbl_fn_80508FB0_00000504:
    addis r4, r7, 0x1
    addi r7, r7, 0x8
    lwz r0, -0x4174(r4)
    addi r6, r6, 0x1
    stw r0, -0x417c(r4)
    lwz r0, -0x4170(r4)
    stw r0, -0x4178(r4)
lbl_fn_80508FB0_00000520:
    lwz r4, -0x4180(r5)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_80508FB0_00000504
    stw r0, -0x4180(r5)
lbl_fn_80508FB0_00000534:
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    subic. r4, r0, 0x417c
    beq lbl_fn_80508FB0_00000558
    li r0, 0x4
    stw r0, 0x0(r4)
    stw r3, 0x4(r4)
lbl_fn_80508FB0_00000558:
    addis r4, r31, 0x1
    lwz r3, -0x4180(r4)
    addi r0, r3, 0x1
    stw r0, -0x4180(r4)
lbl_fn_80508FB0_00000568:
    li r3, 0x0
    b lbl_fn_80508FB0_00000624
lbl_fn_80508FB0_00000570:
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80508FB0_0000058C
    lwz r0, -0x3de8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80508FB0_00000620
lbl_fn_80508FB0_0000058C:
    bl fn_806A2A58
    cmpwi r3, 0x0
    beq lbl_fn_80508FB0_00000620
    addis r5, r31, 0x1
    lwz r0, -0x4180(r5)
    cmplwi r0, 0x8
    blt lbl_fn_80508FB0_000005E4
    mr r7, r31
    li r6, 0x0
    b lbl_fn_80508FB0_000005D0
lbl_fn_80508FB0_000005B4:
    addis r4, r7, 0x1
    addi r7, r7, 0x8
    lwz r0, -0x4174(r4)
    addi r6, r6, 0x1
    stw r0, -0x417c(r4)
    lwz r0, -0x4170(r4)
    stw r0, -0x4178(r4)
lbl_fn_80508FB0_000005D0:
    lwz r4, -0x4180(r5)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_80508FB0_000005B4
    stw r0, -0x4180(r5)
lbl_fn_80508FB0_000005E4:
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    subic. r4, r0, 0x417c
    beq lbl_fn_80508FB0_00000608
    li r0, 0x5
    stw r0, 0x0(r4)
    stw r3, 0x4(r4)
lbl_fn_80508FB0_00000608:
    addis r5, r31, 0x1
    li r3, 0x0
    lwz r4, -0x4180(r5)
    addi r0, r4, 0x1
    stw r0, -0x4180(r5)
    b lbl_fn_80508FB0_00000624
lbl_fn_80508FB0_00000620:
    li r3, 0x1
lbl_fn_80508FB0_00000624:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80509300(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    addis r5, r3, 0x1
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r7, -0x3e0c(r5)
    stw r0, 0x10(r1)
    cmpwi r7, 0x0
    stw r0, 0x18(r1)
    bne lbl_fn_80509300_00000678
    li r3, 0x1
    b lbl_fn_80509300_00000DA8
lbl_fn_80509300_00000678:
    lwz r6, 0xc8(r3)
    cmplwi r6, 0xe
    bgt lbl_fn_80509300_00000978
    lis r4, jumptable_80792E08@ha
    slwi r0, r6, 2
    addi r4, r4, jumptable_80792E08@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r3, 0x0
    b lbl_fn_80509300_00000DA8
    cmpwi r7, 0x1
    bne lbl_fn_80509300_00000738
    lwz r12, 0xb8(r3)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80509300_00000738
    lwz r12, 0xbc(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80509300_00000704
    lwz r0, 0x98(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80509300_00000704
    lwz r12, 0xa4(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80509300_00000728
    addi r3, r31, 0xc20
    li r4, 0x0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80509300_00000728
lbl_fn_80509300_00000704:
    addi r3, r31, 0x430
    bl fn_8050E998
    lwz r12, 0xa4(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80509300_00000728
    addi r3, r31, 0xc20
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_80509300_00000728:
    addi r3, r31, 0x430
    bl fn_8050EB8C
    li r0, 0x2
    stw r0, 0xc8(r31)
lbl_fn_80509300_00000738:
    li r3, 0x0
    b lbl_fn_80509300_00000DA8
    li r3, 0x1
    b lbl_fn_80509300_00000DA8
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    addis r29, r3, 0x1
    subi r3, r29, 0x4128
    bl OSIsThreadSuspended
    cmpwi r3, 0x1
    bne lbl_fn_80509300_00000778
    subi r3, r29, 0x4128
    bl OSResumeThread
lbl_fn_80509300_00000778:
    li r30, 0x0
    stw r30, -0x3e10(r29)
    li r0, 0x2
    subi r3, r29, 0x3dfc
    stw r0, -0x3e08(r29)
    bl OSWakeupThread
    stw r30, -0x3e0c(r29)
    li r0, 0x5
    stw r0, 0xc8(r31)
    b lbl_fn_80509300_00000978
    lwz r4, lbl_8087F628
    addis r4, r4, 0x1
    lwz r0, -0x3e0c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80509300_00000978
    lwz r0, -0x3e04(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80509300_000007D4
    cmpwi r6, 0x5
    bne lbl_fn_80509300_00000978
    li r0, 0x6
    stw r0, 0xc8(r3)
    b lbl_fn_80509300_00000978
lbl_fn_80509300_000007D4:
    lwz r0, -0x4180(r5)
    cmplwi r0, 0x8
    blt lbl_fn_80509300_0000081C
    mr r7, r31
    li r6, 0x0
    b lbl_fn_80509300_00000808
lbl_fn_80509300_000007EC:
    addis r4, r7, 0x1
    addi r7, r7, 0x8
    lwz r0, -0x4174(r4)
    addi r6, r6, 0x1
    stw r0, -0x417c(r4)
    lwz r0, -0x4170(r4)
    stw r0, -0x4178(r4)
lbl_fn_80509300_00000808:
    lwz r4, -0x4180(r5)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_80509300_000007EC
    stw r0, -0x4180(r5)
lbl_fn_80509300_0000081C:
    addis r4, r3, 0x1
    lwz r0, -0x4180(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    subic. r4, r0, 0x417c
    beq lbl_fn_80509300_00000844
    li r0, 0x10
    stw r0, 0x0(r4)
    li r0, 0x0
    stw r0, 0x4(r4)
lbl_fn_80509300_00000844:
    addis r5, r3, 0x1
    li r0, 0x3
    lwz r4, -0x4180(r5)
    stw r0, 0xc8(r3)
    addi r0, r4, 0x1
    stw r0, -0x4180(r5)
    b lbl_fn_80509300_00000978
    cmpwi r7, 0x1
    bne lbl_fn_80509300_00000978
    lwz r12, 0xb8(r3)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80509300_00000978
    lwz r12, 0xbc(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80509300_00000920
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_80509300_000008DC
    mr r6, r31
    li r5, 0x0
    b lbl_fn_80509300_000008C8
lbl_fn_80509300_000008AC:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_80509300_000008C8:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80509300_000008AC
    stw r0, -0x4180(r4)
lbl_fn_80509300_000008DC:
    addis r3, r31, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_80509300_00000904
    li r0, 0x13
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_80509300_00000904:
    addis r4, r31, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    stw r0, 0xc8(r31)
    addi r0, r3, 0x1
    stw r0, -0x4180(r4)
    b lbl_fn_80509300_00000978
lbl_fn_80509300_00000920:
    li r0, 0x8
    stw r0, 0xc8(r31)
    b lbl_fn_80509300_00000978
    lwz r3, lbl_8087F628
    addis r29, r3, 0x1
    subi r3, r29, 0x4128
    bl OSIsThreadSuspended
    cmpwi r3, 0x1
    bne lbl_fn_80509300_0000094C
    subi r3, r29, 0x4128
    bl OSResumeThread
lbl_fn_80509300_0000094C:
    li r30, 0x0
    stw r30, -0x3e10(r29)
    li r0, 0x7
    subi r3, r29, 0x3dfc
    stw r0, -0x3e08(r29)
    bl OSWakeupThread
    stw r30, -0x3e0c(r29)
    li r0, 0x2
    li r3, 0x1
    stw r0, 0xc8(r31)
    b lbl_fn_80509300_00000DA8
lbl_fn_80509300_00000978:
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80509300_000009A4
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    lwz r0, -0x3e0c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80509300_000009C8
    bl fn_806AFAA0
    b lbl_fn_80509300_000009C8
lbl_fn_80509300_000009A4:
    lwz r0, -0x3de8(r3)
    cmpwi r0, 0x1
    ble lbl_fn_80509300_000009C8
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi r0, r0, 1, 14
    cmplwi r0, 0x1
    bne lbl_fn_80509300_000009C8
    bl fn_806A8290
lbl_fn_80509300_000009C8:
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_806A7020
    cmpwi r3, 0x0
    beq lbl_fn_80509300_00000A64
    addis r5, r31, 0x1
    lwz r0, -0x4180(r5)
    cmplwi r0, 0x8
    blt lbl_fn_80509300_00000A28
    mr r7, r31
    li r6, 0x0
    b lbl_fn_80509300_00000A14
lbl_fn_80509300_000009F8:
    addis r4, r7, 0x1
    addi r7, r7, 0x8
    lwz r0, -0x4174(r4)
    addi r6, r6, 0x1
    stw r0, -0x417c(r4)
    lwz r0, -0x4170(r4)
    stw r0, -0x4178(r4)
lbl_fn_80509300_00000A14:
    lwz r4, -0x4180(r5)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_80509300_000009F8
    stw r0, -0x4180(r5)
lbl_fn_80509300_00000A28:
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    subic. r4, r0, 0x417c
    beq lbl_fn_80509300_00000A4C
    li r0, 0x11
    stw r0, 0x0(r4)
    stw r3, 0x4(r4)
lbl_fn_80509300_00000A4C:
    addis r4, r31, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    stw r0, 0xc8(r31)
    addi r0, r3, 0x1
    stw r0, -0x4180(r4)
lbl_fn_80509300_00000A64:
    lwz r0, 0xc8(r31)
    cmpwi r0, 0x9
    beq lbl_fn_80509300_00000A94
    cmpwi r0, 0xa
    beq lbl_fn_80509300_00000BD0
    cmpwi r0, 0xb
    beq lbl_fn_80509300_00000C70
    cmpwi r0, 0xc
    beq lbl_fn_80509300_00000C9C
    cmpwi r0, 0xd
    beq lbl_fn_80509300_00000CA8
    b lbl_fn_80509300_00000CD0
lbl_fn_80509300_00000A94:
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80509300_00000B50
    mr r3, r31
    bl fn_8050A104
    cmpwi r3, 0x0
    beq lbl_fn_80509300_00000AC0
    li r0, 0xa
    stw r0, 0xc8(r31)
    b lbl_fn_80509300_00000CD0
lbl_fn_80509300_00000AC0:
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_80509300_00000B0C
    mr r6, r31
    li r5, 0x0
    b lbl_fn_80509300_00000AF8
lbl_fn_80509300_00000ADC:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_80509300_00000AF8:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80509300_00000ADC
    stw r0, -0x4180(r4)
lbl_fn_80509300_00000B0C:
    addis r3, r31, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_80509300_00000B34
    li r0, 0x12
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_80509300_00000B34:
    addis r4, r31, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    stw r0, 0xc8(r31)
    addi r0, r3, 0x1
    stw r0, -0x4180(r4)
    b lbl_fn_80509300_00000CD0
lbl_fn_80509300_00000B50:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_8050B228
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x8000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x4000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x200
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x100
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x2000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x1000
    stw r0, 0x1f8(r3)
    b lbl_fn_80509300_00000CD0
lbl_fn_80509300_00000BD0:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_80509300_00000CD0
    addis r4, r31, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_80509300_00000C2C
    mr r6, r31
    li r5, 0x0
    b lbl_fn_80509300_00000C18
lbl_fn_80509300_00000BFC:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_80509300_00000C18:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80509300_00000BFC
    stw r0, -0x4180(r4)
lbl_fn_80509300_00000C2C:
    addis r3, r31, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_80509300_00000C54
    li r0, 0x12
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_80509300_00000C54:
    addis r4, r31, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    stw r0, 0xc8(r31)
    addi r0, r3, 0x1
    stw r0, -0x4180(r4)
    b lbl_fn_80509300_00000CD0
lbl_fn_80509300_00000C70:
    lwz r4, 0xcc(r31)
    lwz r3, 0x254(r31)
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_80509300_00000C90
    mr r3, r31
    bl fn_8050BDC8
lbl_fn_80509300_00000C90:
    mr r3, r31
    bl fn_8050BAC8
    b lbl_fn_80509300_00000CD0
lbl_fn_80509300_00000C9C:
    li r0, 0xd
    stw r0, 0xc8(r31)
    b lbl_fn_80509300_00000CD0
lbl_fn_80509300_00000CA8:
    lwz r4, 0xcc(r31)
    lwz r3, 0x254(r31)
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_80509300_00000CC8
    mr r3, r31
    bl fn_8050BDC8
lbl_fn_80509300_00000CC8:
    mr r3, r31
    bl fn_8050BAC8
lbl_fn_80509300_00000CD0:
    lwz r4, 0x250(r31)
    addi r3, r31, 0x200
    bl fn_8050E6D0
    addi r3, r31, 0x200
    bl fn_8050E6F8
    lwz r0, 0x218(r31)
    lis r30, lbl_8075B090@ha
    lfd f1, lbl_8075B090@l(r30)
    addi r3, r31, 0x200
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    li r4, 0x3
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8050E7E0
    lwz r0, 0x214(r31)
    addi r3, r31, 0x200
    lfd f1, lbl_8075B090@l(r30)
    li r4, 0x3
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8050E7E0
    lwz r0, 0x238(r31)
    addi r3, r31, 0x200
    lfd f1, lbl_8075B090@l(r30)
    li r4, 0x3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_8050E7E0
    lwz r0, 0x234(r31)
    addi r3, r31, 0x200
    lfd f1, lbl_8075B090@l(r30)
    li r4, 0x3
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    bl fn_8050E7E0
    lwz r0, 0x4(r31)
    lwz r3, 0xcc(r31)
    cmpwi r0, 0x0
    addi r3, r3, 0x1
    stw r3, 0xcc(r31)
    ble lbl_fn_80509300_00000DA4
    subic. r0, r0, 0x1
    stw r0, 0x4(r31)
    bne lbl_fn_80509300_00000DA4
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_fn_80509300_00000DA4:
    li r3, 0x1
lbl_fn_80509300_00000DA8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80509A8C(void)
{
    nofralloc
    addi r3, r3, 0x414
    b fn_805F3130
}

asm void fn_80509A94(void)
{
    nofralloc
    addi r3, r3, 0x414
    b fn_805F3210
}

asm void fn_80509A9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80509A9C_00000DFC
    li r3, 0x0
    b lbl_fn_80509A9C_00000E20
lbl_fn_80509A9C_00000DFC:
    bl fn_80624D40
    cmpwi r3, 0x0
    beq lbl_fn_80509A9C_00000E14
    li r0, 0x3
    stw r0, 0xc8(r31)
    b lbl_fn_80509A9C_00000E1C
lbl_fn_80509A9C_00000E14:
    li r0, 0x4
    stw r0, 0xc8(r31)
lbl_fn_80509A9C_00000E1C:
    li r3, 0x1
lbl_fn_80509A9C_00000E20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80509AFC(void)
{
    nofralloc
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80509AFC_00000E4C
    li r0, 0xe
    stw r0, 0xc8(r3)
    b lbl_fn_80509AFC_00000E54
lbl_fn_80509AFC_00000E4C:
    li r3, 0x0
    blr
lbl_fn_80509AFC_00000E54:
    li r3, 0x1
    blr
}

asm void fn_80509B24(void)
{
    nofralloc
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x8
    beq lbl_fn_80509B24_00000E70
    li r3, 0x0
    blr
lbl_fn_80509B24_00000E70:
    li r0, 0x9
    stw r6, 0xd4(r3)
    stw r5, 0xd0(r3)
    stw r0, 0xc8(r3)
    li r3, 0x1
    blr
}

asm void fn_80509B50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xc8(r3)
    cmpwi r0, 0xb
    beq lbl_fn_80509B50_00000EB0
    li r3, 0x0
    b lbl_fn_80509B50_00000FB0
lbl_fn_80509B50_00000EB0:
    lwz r4, 0x1f8(r3)
    stw r6, 0xd4(r3)
    extrwi r0, r4, 1, 10
    cmplwi r0, 0x1
    stw r5, 0xd0(r3)
    beq lbl_fn_80509B50_00000F6C
    extrwi r0, r4, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_80509B50_00000F6C
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x13
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 9
    beq lbl_fn_80509B50_00000F6C
    bl fn_806B3CC0
    cmpwi r3, 0x1
    bne lbl_fn_80509B50_00000F24
    lwz r0, 0x1f8(r31)
    extrwi r0, r0, 1, 8
    cmplwi r0, 0x1
    beq lbl_fn_80509B50_00000F6C
lbl_fn_80509B50_00000F24:
    addis r3, r31, 0x1
    lwz r4, 0x1f8(r31)
    lbz r0, -0x3deb(r3)
    oris r4, r4, 0x80
    cmpwi r0, 0x0
    rlwinm r0, r4, 0, 10, 8
    stw r0, 0x1f8(r31)
    bne lbl_fn_80509B50_00000F6C
    lis r4, fn_8050B1AC@ha
    li r3, 0x1
    addi r4, r4, fn_8050B1AC@l
    li r5, 0x0
    bl fn_806B3C40
    cmpwi r3, 0x0
    bne lbl_fn_80509B50_00000F6C
    lwz r0, 0x1f8(r31)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
lbl_fn_80509B50_00000F6C:
    lwz r0, 0x1f8(r31)
    extrwi r0, r0, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_80509B50_00000FAC
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x8
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
    li r0, 0xc
    stw r0, 0xc8(r31)
lbl_fn_80509B50_00000FAC:
    li r3, 0x1
lbl_fn_80509B50_00000FB0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80509C8C(void)
{
    nofralloc
    lwz r0, 0xc8(r3)
    cmpwi r0, 0xd
    beq lbl_fn_80509C8C_00000FD8
    li r3, 0x0
    blr
lbl_fn_80509C8C_00000FD8:
    li r0, 0xb
    stw r0, 0xc8(r3)
    li r3, 0x1
    blr
}

asm void fn_80509CB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x1f8(r3)
    extrwi r0, r4, 1, 6
    cmplwi r0, 0x1
    bne lbl_fn_80509CB0_000010C4
    extrwi r0, r4, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_80509CB0_0000109C
    extrwi. r0, r4, 1, 9
    beq lbl_fn_80509CB0_0000109C
    bl fn_806B3CC0
    cmpwi r3, 0x0
    bne lbl_fn_80509CB0_00001038
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 8
    beq lbl_fn_80509CB0_0000109C
lbl_fn_80509CB0_00001038:
    addis r3, r31, 0x1
    lwz r4, 0x1f8(r31)
    lbz r0, -0x3deb(r3)
    rlwinm r3, r4, 0, 10, 7
    stw r3, 0x1f8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80509CB0_0000109C
    lis r4, fn_8050B1AC@ha
    li r3, 0x0
    addi r4, r4, fn_8050B1AC@l
    li r5, 0x0
    bl fn_806B3C40
    lwz r4, lbl_8087F628
    cmpwi r3, 0x0
    lwz r0, 0x1f8(r4)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r4)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x1f8(r3)
    bne lbl_fn_80509CB0_0000109C
    lwz r0, 0x1f8(r31)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
lbl_fn_80509CB0_0000109C:
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80509CB0_000010B0
    bl fn_806B0980
lbl_fn_80509CB0_000010B0:
    lwz r3, 0x1f8(r31)
    li r0, 0x8
    stw r0, 0xc8(r31)
    rlwinm r3, r3, 0, 7, 5
    stw r3, 0x1f8(r31)
lbl_fn_80509CB0_000010C4:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80509DA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x1f8(r3)
    srwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_80509DA4_0000122C
    extrwi r0, r4, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_80509DA4_00001190
    extrwi. r0, r4, 1, 9
    beq lbl_fn_80509DA4_00001190
    bl fn_806B3CC0
    cmpwi r3, 0x0
    bne lbl_fn_80509DA4_0000112C
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 8
    beq lbl_fn_80509DA4_00001190
lbl_fn_80509DA4_0000112C:
    addis r3, r31, 0x1
    lwz r4, 0x1f8(r31)
    lbz r0, -0x3deb(r3)
    rlwinm r3, r4, 0, 10, 7
    stw r3, 0x1f8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80509DA4_00001190
    lis r4, fn_8050B1AC@ha
    li r3, 0x0
    addi r4, r4, fn_8050B1AC@l
    li r5, 0x0
    bl fn_806B3C40
    lwz r4, lbl_8087F628
    cmpwi r3, 0x0
    lwz r0, 0x1f8(r4)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r4)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x1f8(r3)
    bne lbl_fn_80509DA4_00001190
    lwz r0, 0x1f8(r31)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
lbl_fn_80509DA4_00001190:
    lwz r0, 0x1f8(r31)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x1f8(r31)
    extrwi r0, r0, 1, 6
    cmplwi r0, 0x1
    bne lbl_fn_80509DA4_000011C8
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80509DA4_000011BC
    bl fn_806B0980
lbl_fn_80509DA4_000011BC:
    lwz r0, 0x1f8(r31)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x1f8(r31)
lbl_fn_80509DA4_000011C8:
    lwz r3, 0x1f8(r31)
    extrwi r0, r3, 1, 2
    cmplwi r0, 0x1
    bne lbl_fn_80509DA4_000011E0
    rlwinm r0, r3, 0, 3, 1
    stw r0, 0x1f8(r31)
lbl_fn_80509DA4_000011E0:
    lwz r0, 0x1f8(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80509DA4_00001200
    bl fn_806AF910
    lwz r0, 0x1f8(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1f8(r31)
lbl_fn_80509DA4_00001200:
    bl fn_806A70E0
    addis r3, r31, 0x1
    li r0, 0x0
    stw r0, -0x4138(r3)
    stw r0, -0x413c(r3)
    stw r0, -0x4134(r3)
    stw r0, -0x4180(r3)
    bl fn_806A2E8C
    bl fn_806A295C
    li r0, 0x2
    stw r0, 0xc8(r31)
lbl_fn_80509DA4_0000122C:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80509F0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806A70E0
    addis r3, r31, 0x1
    li r0, 0x0
    stw r0, -0x4138(r3)
    stw r0, -0x413c(r3)
    stw r0, -0x4134(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80509F4C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_80508FB0
    cmpwi r3, 0x0
    bne lbl_fn_80509F4C_000012B4
    li r0, 0x3
    stw r0, 0xc8(r31)
    li r3, 0x0
    b lbl_fn_80509F4C_00001428
lbl_fn_80509F4C_000012B4:
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80509F4C_00001344
    lis r4, lbl_8075B098@ha
    addi r3, r31, 0x430
    addi r4, r4, lbl_8075B098@l
    addi r8, r31, 0x470
    addi r5, r4, 0xd
    li r6, 0x0
    li r4, 0x32b9
    li r7, 0x0
    li r9, 0x20
    bl fn_806AF6A0
    addi r3, r1, 0x8
    addi r4, r31, 0x5f0
    bl fn_80686A64
    lis r5, fn_8050AAE4@ha
    addi r3, r1, 0x8
    addi r5, r5, fn_8050AAE4@l
    li r4, 0x0
    li r6, 0x0
    bl fn_806AFDB0
    cmpwi r3, 0x0
    bne lbl_fn_80509F4C_00001320
    li r3, 0x0
    b lbl_fn_80509F4C_00001428
lbl_fn_80509F4C_00001320:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x8000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x1f8(r3)
    b lbl_fn_80509F4C_00001424
lbl_fn_80509F4C_00001344:
    lwz r0, -0x3de8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80509F4C_00001368
    lis r3, fn_8050AAD4@ha
    addi r3, r3, fn_8050AAD4@l
    bl fn_806A8270
    lis r3, fn_8050AA90@ha
    addi r3, r3, fn_8050AA90@l
    bl fn_806A8280
lbl_fn_80509F4C_00001368:
    addis r3, r31, 0x1
    lwz r3, -0x3de8(r3)
    cmpwi r3, 0x1
    bne lbl_fn_80509F4C_000013A8
    lwz r9, lbl_8087F628
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    lwz r0, 0x1f8(r9)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    oris r0, r0, 0x8
    stw r0, 0x1f8(r9)
    bl fn_8050B228
    b lbl_fn_80509F4C_000013B4
lbl_fn_80509F4C_000013A8:
    lis r4, fn_8050B65C@ha
    addi r4, r4, fn_8050B65C@l
    bl fn_806A8D90
lbl_fn_80509F4C_000013B4:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x8000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x4000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x200
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x100
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x2000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x1000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x2
    stw r0, 0x1f8(r3)
lbl_fn_80509F4C_00001424:
    li r3, 0x1
lbl_fn_80509F4C_00001428:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8050A104(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x80
    stw r0, 0xa4(r1)
    stmw r27, 0x8c(r1)
    mr r28, r3
    addi r3, r3, 0x10
    bl memset
    addis r5, r28, 0x1
    li r31, 0x0
    lis r4, lbl_80791B00@ha
    stw r31, -0x3df0(r5)
    addi r4, r4, lbl_80791B00@l
    li r3, 0x0
    stw r31, 0x26c(r28)
    la r5, lbl_8087E160
    bl fn_806B3220
    lis r4, lbl_80793108@ha
    addi r3, r28, 0x10
    addi r4, r4, lbl_80793108@l
    bl strcpy
    lis r3, lbl_8075B098@ha
    addi r30, r28, 0xd8
    li r29, 0x0
    addi r27, r3, lbl_8075B098@l
lbl_fn_8050A104_000014A4:
    stb r31, 0x8(r1)
    lwz r0, 0xc(r30)
    cmplwi r0, 0x1
    bne lbl_fn_8050A104_00001540
    lwz r0, 0x10(r30)
    srwi. r0, r0, 31
    bne lbl_fn_8050A104_000014C8
    addi r5, r30, 0x11
    b lbl_fn_8050A104_000014CC
lbl_fn_8050A104_000014C8:
    lwz r5, 0x18(r30)
lbl_fn_8050A104_000014CC:
    lwz r0, 0x0(r30)
    li r3, 0x0
    srwi. r0, r0, 31
    bne lbl_fn_8050A104_000014E4
    addi r4, r30, 0x1
    b lbl_fn_8050A104_000014E8
lbl_fn_8050A104_000014E4:
    lwz r4, 0x8(r30)
lbl_fn_8050A104_000014E8:
    bl fn_806B3680
    lwz r0, 0x20(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8050A104_000015A8
    lwz r0, 0x10(r30)
    srwi. r0, r0, 31
    bne lbl_fn_8050A104_00001510
    addi r6, r30, 0x11
    b lbl_fn_8050A104_00001514
lbl_fn_8050A104_00001510:
    lwz r6, 0x18(r30)
lbl_fn_8050A104_00001514:
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    addi r4, r27, 0x14
    srwi. r0, r0, 31
    bne lbl_fn_8050A104_00001530
    addi r5, r30, 0x1
    b lbl_fn_8050A104_00001534
lbl_fn_8050A104_00001530:
    lwz r5, 0x8(r30)
lbl_fn_8050A104_00001534:
    crclr 6
    bl sprintf
    b lbl_fn_8050A104_000015A8
lbl_fn_8050A104_00001540:
    cmplwi r0, 0x2
    bne lbl_fn_8050A104_000015E0
    lwz r0, 0x0(r30)
    li r3, 0x0
    srwi. r0, r0, 31
    bne lbl_fn_8050A104_00001560
    addi r4, r30, 0x1
    b lbl_fn_8050A104_00001564
lbl_fn_8050A104_00001560:
    lwz r4, 0x8(r30)
lbl_fn_8050A104_00001564:
    addi r5, r30, 0x1c
    bl fn_806B3220
    lwz r0, 0x20(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8050A104_000015A8
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    addi r4, r27, 0x1d
    srwi. r0, r0, 31
    bne lbl_fn_8050A104_00001598
    addi r5, r30, 0x1
    b lbl_fn_8050A104_0000159C
lbl_fn_8050A104_00001598:
    lwz r5, 0x8(r30)
lbl_fn_8050A104_0000159C:
    lwz r6, 0x1c(r30)
    crclr 6
    bl sprintf
lbl_fn_8050A104_000015A8:
    lwz r0, 0x20(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8050A104_000015D0
    addi r3, r28, 0x10
    addi r4, r27, 0x26
    bl fn_806823B0
    addi r3, r28, 0x10
    addi r4, r1, 0x8
    bl fn_806823B0
lbl_fn_8050A104_000015D0:
    addi r29, r29, 0x1
    addi r30, r30, 0x24
    cmpwi r29, 0x8
    blt lbl_fn_8050A104_000014A4
lbl_fn_8050A104_000015E0:
    lwz r3, lbl_8087F628
    li r5, 0x0
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x1
    stw r0, 0x1f8(r3)
    lwz r0, 0x25c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8050A104_00001664
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050A104_000016B4
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x1f8(r4)
    lwz r3, lbl_8087F628
    addis r27, r3, 0x1
    subi r3, r27, 0x4128
    bl OSIsThreadSuspended
    cmpwi r3, 0x1
    bne lbl_fn_8050A104_00001640
    subi r3, r27, 0x4128
    bl OSResumeThread
lbl_fn_8050A104_00001640:
    li r28, 0x0
    stw r28, -0x3e10(r27)
    li r0, 0x5
    subi r3, r27, 0x3dfc
    stw r0, -0x3e08(r27)
    bl OSWakeupThread
    stw r28, -0x3e0c(r27)
    li r5, 0x1
    b lbl_fn_8050A104_000016B4
lbl_fn_8050A104_00001664:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    addis r27, r3, 0x1
    subi r3, r27, 0x4128
    bl OSIsThreadSuspended
    cmpwi r3, 0x1
    bne lbl_fn_8050A104_00001694
    subi r3, r27, 0x4128
    bl OSResumeThread
lbl_fn_8050A104_00001694:
    li r28, 0x0
    stw r28, -0x3e10(r27)
    li r0, 0x6
    subi r3, r27, 0x3dfc
    stw r0, -0x3e08(r27)
    bl OSWakeupThread
    stw r28, -0x3e0c(r27)
    li r5, 0x1
lbl_fn_8050A104_000016B4:
    cmpwi r5, 0x0
    bne lbl_fn_8050A104_000016C4
    li r3, 0x0
    b lbl_fn_8050A104_000016F8
lbl_fn_8050A104_000016C4:
    lwz r4, lbl_8087F628
    li r3, 0x1
    lwz r0, 0x1f8(r4)
    oris r0, r0, 0x200
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x1f8(r4)
lbl_fn_8050A104_000016F8:
    lmw r27, 0x8c(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8050A3D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x1f8(r3)
    extrwi r0, r0, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_8050A3D4_00001804
    cmpwi r4, 0x0
    beq lbl_fn_8050A3D4_00001760
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x14
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_8050A3D4_00001760:
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 9
    bne lbl_fn_8050A3D4_00001774
    li r3, 0x0
    b lbl_fn_8050A3D4_00001808
lbl_fn_8050A3D4_00001774:
    bl fn_806B3CC0
    cmpwi r3, 0x0
    bne lbl_fn_8050A3D4_00001794
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 8
    bne lbl_fn_8050A3D4_00001794
    li r3, 0x0
    b lbl_fn_8050A3D4_00001808
lbl_fn_8050A3D4_00001794:
    addis r3, r31, 0x1
    lwz r4, 0x1f8(r31)
    lbz r0, -0x3deb(r3)
    rlwinm r3, r4, 0, 10, 7
    stw r3, 0x1f8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8050A3D4_000017FC
    lis r4, fn_8050B1AC@ha
    li r3, 0x0
    addi r4, r4, fn_8050B1AC@l
    li r5, 0x0
    bl fn_806B3C40
    lwz r4, lbl_8087F628
    cmpwi r3, 0x0
    lwz r0, 0x1f8(r4)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x1f8(r4)
    bne lbl_fn_8050A3D4_00001808
    lwz r0, 0x1f8(r31)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
    b lbl_fn_8050A3D4_00001808
lbl_fn_8050A3D4_000017FC:
    li r3, 0x1
    b lbl_fn_8050A3D4_00001808
lbl_fn_8050A3D4_00001804:
    li r3, 0x0
lbl_fn_8050A3D4_00001808:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050A4E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x1f8(r3)
    extrwi r0, r5, 1, 10
    cmplwi r0, 0x1
    bne lbl_fn_8050A4E4_00001848
    li r3, 0x1
    b lbl_fn_8050A4E4_00001914
lbl_fn_8050A4E4_00001848:
    extrwi r0, r5, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_8050A4E4_00001910
    cmpwi r4, 0x0
    beq lbl_fn_8050A4E4_00001884
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x13
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_8050A4E4_00001884:
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 9
    bne lbl_fn_8050A4E4_00001898
    li r3, 0x0
    b lbl_fn_8050A4E4_00001914
lbl_fn_8050A4E4_00001898:
    bl fn_806B3CC0
    cmpwi r3, 0x1
    bne lbl_fn_8050A4E4_000018BC
    lwz r0, 0x1f8(r31)
    extrwi r0, r0, 1, 8
    cmplwi r0, 0x1
    bne lbl_fn_8050A4E4_000018BC
    li r3, 0x0
    b lbl_fn_8050A4E4_00001914
lbl_fn_8050A4E4_000018BC:
    addis r3, r31, 0x1
    lwz r4, 0x1f8(r31)
    lbz r0, -0x3deb(r3)
    oris r4, r4, 0x80
    cmpwi r0, 0x0
    rlwinm r0, r4, 0, 10, 8
    stw r0, 0x1f8(r31)
    bne lbl_fn_8050A4E4_00001908
    lis r4, fn_8050B1AC@ha
    li r3, 0x1
    addi r4, r4, fn_8050B1AC@l
    li r5, 0x0
    bl fn_806B3C40
    cmpwi r3, 0x0
    bne lbl_fn_8050A4E4_00001914
    lwz r0, 0x1f8(r31)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
    b lbl_fn_8050A4E4_00001914
lbl_fn_8050A4E4_00001908:
    li r3, 0x1
    b lbl_fn_8050A4E4_00001914
lbl_fn_8050A4E4_00001910:
    li r3, 0x0
lbl_fn_8050A4E4_00001914:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050A5F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806B3CC0
    cmpwi r3, 0x0
    bne lbl_fn_8050A5F0_0000195C
    lwz r0, 0x1f8(r31)
    rlwinm r0, r0, 0, 9, 7
    rlwinm r0, r0, 0, 11, 9
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
lbl_fn_8050A5F0_0000195C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050A638(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 9
    bne lbl_fn_8050A638_000019A0
    li r3, 0x0
    b lbl_fn_8050A638_00001A50
lbl_fn_8050A638_000019A0:
    bl fn_806B3CC0
    cmpw r30, r3
    bne lbl_fn_8050A638_000019D0
    neg r0, r30
    lwz r3, 0x1f8(r31)
    or r0, r0, r30
    extrwi r3, r3, 1, 8
    srwi r0, r0, 31
    cmplw r3, r0
    bne lbl_fn_8050A638_000019D0
    li r3, 0x0
    b lbl_fn_8050A638_00001A50
lbl_fn_8050A638_000019D0:
    addis r3, r31, 0x1
    neg r4, r30
    lbz r0, -0x3deb(r3)
    or r4, r4, r30
    lwz r3, 0x1f8(r31)
    rlwimi r3, r4, 24, 8, 8
    cmpwi r0, 0x0
    rlwinm r0, r3, 0, 10, 8
    stw r0, 0x1f8(r31)
    bne lbl_fn_8050A638_00001A4C
    lis r4, fn_8050B1AC@ha
    mr r3, r30
    addi r4, r4, fn_8050B1AC@l
    li r5, 0x0
    bl fn_806B3C40
    cmpwi r30, 0x0
    bne lbl_fn_8050A638_00001A34
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x1f8(r4)
lbl_fn_8050A638_00001A34:
    cmpwi r3, 0x0
    bne lbl_fn_8050A638_00001A50
    lwz r0, 0x1f8(r31)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
    b lbl_fn_8050A638_00001A50
lbl_fn_8050A638_00001A4C:
    li r3, 0x1
lbl_fn_8050A638_00001A50:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
