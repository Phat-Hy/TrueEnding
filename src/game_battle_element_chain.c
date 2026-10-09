#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _savegpr_16(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80070C98(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_8009EE30(void);
extern void fn_802180A8(void);
extern void fn_80232B7C(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_80425498(void);
extern void fn_80425878(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);
extern void fn_80695720(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80753460[];
extern u8 lbl_80753618[];
extern u8 lbl_80753630[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078E3D8[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DFA0;
extern u32 lbl_8087DFA4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4A0;
extern u32 lbl_80886658;
extern u32 lbl_8088665C;
extern u32 lbl_80886660;
extern u32 lbl_80886664;
extern u32 lbl_80886668;
extern u32 lbl_8088666C;
extern u32 lbl_80886670;
extern u32 lbl_80886674;
extern u32 lbl_80886678;
extern u32 lbl_8088667C;

/* Function declarations */
void fn_804238E8(void);
void fn_80423958(void);
void fn_804239D4(void);
void fn_80423BE0(void);
void fn_80423EA4(void);
void fn_80423F48(void);
void fn_80423F64(void);
void fn_80424170(void);
void fn_80424254(void);
void fn_8042488C(void);
void fn_804248E0(void);
void fn_8042493C(void);
void fn_8042499C(void);
void fn_80424AD4(void);
void fn_80424FB4(void);

asm void fn_804238E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804238E8_0000005C
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804238E8_0000005C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_804238E8_0000005C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80423958(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_80423958_000000A4
    addi r3, r31, 0x4c4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80423958_000000AC
lbl_fn_80423958_000000A4:
    li r3, 0x1
    b lbl_fn_80423958_000000D8
lbl_fn_80423958_000000AC:
    addi r3, r31, 0x894
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_80423958_000000C4
    li r3, 0x1
    b lbl_fn_80423958_000000D8
lbl_fn_80423958_000000C4:
    addi r3, r31, 0x91c
    bl fn_80237874
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80423958_000000D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804239D4(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r31, r3
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
    mr r4, r31
    mr r5, r30
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
    lis r31, lbl_80753460@ha
    addi r31, r31, lbl_80753460@l
lbl_fn_804239D4_0000019C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804239D4_000002CC
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804239D4_000001F0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_804239D4_000002CC
lbl_fn_804239D4_000001F0:
    mr r3, r30
    addi r4, r31, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804239D4_00000230
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x4c4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0x4c4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_804239D4_000002CC
lbl_fn_804239D4_00000230:
    mr r3, r30
    addi r4, r31, 0x1a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804239D4_00000278
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0x4c4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_804239D4_000002CC
lbl_fn_804239D4_00000278:
    mr r3, r30
    addi r4, r31, 0x21
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804239D4_000002A4
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x894
    bl fn_80058078
    b lbl_fn_804239D4_000002CC
lbl_fn_804239D4_000002A4:
    mr r3, r30
    addi r4, r31, 0x2e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804239D4_000002CC
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x91c
    bl fn_8023780C
lbl_fn_804239D4_000002CC:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804239D4_0000019C
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_80423BE0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    bne lbl_fn_80423BE0_0000031C
    li r3, 0x0
    b lbl_fn_80423BE0_000005A8
lbl_fn_80423BE0_0000031C:
    lwz r4, 0x0(r4)
    stw r4, 0x54(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_80423BE0_00000424
    cmpwi r4, 0x1
    beq lbl_fn_80423BE0_0000034C
    cmpwi r4, 0x4
    beq lbl_fn_80423BE0_00000474
    cmpwi r4, 0x5
    beq lbl_fn_80423BE0_00000548
    b lbl_fn_80423BE0_000005A4
lbl_fn_80423BE0_0000034C:
    lfs f1, lbl_8088665C
    li r4, 0x0
    lfs f2, lbl_80886660
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0x4c4
    bl fn_80097C08
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ED0D4
    mr r3, r31
    addi r4, r31, 0x4c4
    li r5, 0x1
    bl fn_803ED0D4
    lwz r0, 0x89c(r31)
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    ori r0, r0, 0x1
    stw r0, 0x89c(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80886658
    li r3, -0x1
    lfs f1, lbl_8088665C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x91c
    addi r5, r31, 0xf4
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
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80423BE0_000005A4
lbl_fn_80423BE0_00000424:
    lfs f1, lbl_8088665C
    li r4, 0x0
    lfs f2, lbl_80886660
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0x4c4
    bl fn_80097C08
    lwz r0, 0x89c(r31)
    mr r4, r31
    lfs f0, lbl_8088665C
    li r5, 0x0
    ori r0, r0, 0x1
    stfs f0, 0x6fc(r31)
    li r6, 0x1
    stw r0, 0x89c(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    b lbl_fn_80423BE0_000005A4
lbl_fn_80423BE0_00000474:
    lfs f1, lbl_8088665C
    li r4, 0x0
    lfs f2, lbl_80886660
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0x4c4
    bl fn_80097C08
    addi r3, r31, 0x4c4
    li r4, 0x0
    bl fn_80097D7C
    lwz r0, 0x89c(r31)
    mr r4, r31
    stfs f1, 0x6f8(r31)
    li r5, 0x0
    clrrwi r0, r0, 1
    li r6, 0x1
    stw r0, 0x89c(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80423BE0_00000508
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_80423BE0_00000508:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80423BE0_000005A4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
    b lbl_fn_80423BE0_000005A4
lbl_fn_80423BE0_00000548:
    lfs f1, lbl_8088665C
    li r4, 0x0
    lfs f2, lbl_80886660
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0x4c4
    bl fn_80097C08
    addi r3, r31, 0x4c4
    li r4, 0x0
    bl fn_80097D7C
    lwz r0, 0x89c(r31)
    mr r4, r31
    lfs f0, lbl_80886664
    li r5, 0x0
    ori r0, r0, 0x1
    stfs f1, 0x6f8(r31)
    li r6, 0x1
    stfs f0, 0x6fc(r31)
    stw r0, 0x89c(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
lbl_fn_80423BE0_000005A4:
    lwz r3, 0x54(r31)
lbl_fn_80423BE0_000005A8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80423EA4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    subi r0, r4, 0x2
    cmplwi r0, 0x2
    stw r31, 0x2c(r1)
    mr r31, r3
    ble lbl_fn_80423EA4_000005F4
    cmpwi r4, 0x1
    beq lbl_fn_80423EA4_000005EC
    cmpwi r4, 0x5
    bne lbl_fn_80423EA4_000005F8
lbl_fn_80423EA4_000005EC:
    li r4, 0x1
    b lbl_fn_80423EA4_000005F8
lbl_fn_80423EA4_000005F4:
    li r4, 0x4
lbl_fn_80423EA4_000005F8:
    lfs f0, lbl_80886658
    li r0, 0x0
    stw r4, 0x8(r1)
    mr r3, r31
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
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80423EA4_0000064C
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_80423EA4_0000064C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80423F48(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80423F48_00000674
    addi r3, r3, 0xf4
    blr
lbl_fn_80423F48_00000674:
    addi r3, r3, 0x4c4
    blr
}

asm void fn_80423F64(void)
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
    beq lbl_fn_80423F64_00000864
    lis r5, lbl_80753630@ha
    li r3, 0x2b0
    addi r5, r5, lbl_80753630@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80423F64_0000085C
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r3, lbl_8078E3D8@ha
    li r4, 0x0
    addi r3, r3, lbl_8078E3D8@l
    stw r3, 0x0(r31)
    lfs f0, lbl_80886668
    li r0, 0xb4
    stw r4, 0xf4(r31)
    addi r5, r31, 0x130
    addi r3, r31, 0x2b0
    stfs f0, 0xf8(r31)
    cmplw r5, r3
    stfs f0, 0xfc(r31)
    stfs f0, 0x100(r31)
    stfs f0, 0x104(r31)
    stfs f0, 0x108(r31)
    stfs f0, 0x10c(r31)
    stw r0, 0x110(r31)
    stw r4, 0x114(r31)
    stw r4, 0x118(r31)
    stw r4, 0x11c(r31)
    stw r4, 0x120(r31)
    stw r4, 0x124(r31)
    stw r4, 0x128(r31)
    stb r4, 0x12c(r31)
    bge lbl_fn_80423F64_00000854
    addi r0, r31, 0x130
    addi r4, r31, 0x230
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_80423F64_00000764
    li r3, 0x1
lbl_fn_80423F64_00000764:
    cmpwi r3, 0x0
    beq lbl_fn_80423F64_00000770
    li r0, 0x1
lbl_fn_80423F64_00000770:
    cmpwi r0, 0x0
    beq lbl_fn_80423F64_0000081C
    addi r0, r4, 0x7f
    li r3, 0x0
    subf r0, r5, r0
    srwi r0, r0, 7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80423F64_0000081C
lbl_fn_80423F64_00000794:
    stw r3, 0x0(r5)
    stw r3, 0x4(r5)
    stw r3, 0x8(r5)
    stb r3, 0xc(r5)
    stw r3, 0x10(r5)
    stw r3, 0x14(r5)
    stw r3, 0x18(r5)
    stb r3, 0x1c(r5)
    stw r3, 0x20(r5)
    stw r3, 0x24(r5)
    stw r3, 0x28(r5)
    stb r3, 0x2c(r5)
    stw r3, 0x30(r5)
    stw r3, 0x34(r5)
    stw r3, 0x38(r5)
    stb r3, 0x3c(r5)
    stw r3, 0x40(r5)
    stw r3, 0x44(r5)
    stw r3, 0x48(r5)
    stb r3, 0x4c(r5)
    stw r3, 0x50(r5)
    stw r3, 0x54(r5)
    stw r3, 0x58(r5)
    stb r3, 0x5c(r5)
    stw r3, 0x60(r5)
    stw r3, 0x64(r5)
    stw r3, 0x68(r5)
    stb r3, 0x6c(r5)
    stw r3, 0x70(r5)
    stw r3, 0x74(r5)
    stw r3, 0x78(r5)
    stb r3, 0x7c(r5)
    addi r5, r5, 0x80
    bdnz lbl_fn_80423F64_00000794
lbl_fn_80423F64_0000081C:
    addi r3, r31, 0x2b0
    li r4, 0x0
    addi r0, r3, 0xf
    subf r0, r5, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r5, r3
    bge lbl_fn_80423F64_00000854
lbl_fn_80423F64_0000083C:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stb r4, 0xc(r5)
    addi r5, r5, 0x10
    bdnz lbl_fn_80423F64_0000083C
lbl_fn_80423F64_00000854:
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_80423F64_0000085C:
    mr r3, r31
    b lbl_fn_80423F64_00000868
lbl_fn_80423F64_00000864:
    li r3, 0x0
lbl_fn_80423F64_00000868:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80424170(void)
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
    beq lbl_fn_80424170_00000948
    lis r4, lbl_8078E3D8@ha
    li r30, 0x0
    addi r4, r4, lbl_8078E3D8@l
    stw r4, 0x0(r3)
    li r31, 0x0
lbl_fn_80424170_000008C8:
    add r3, r28, r31
    lwz r3, 0x120(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80424170_000008F0
    beq lbl_fn_80424170_000008F0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80424170_000008F0:
    addi r30, r30, 0x1
    addi r31, r31, 0x10
    cmplwi r30, 0x19
    blt lbl_fn_80424170_000008C8
    addic. r0, r28, 0x118
    beq lbl_fn_80424170_0000092C
    lwz r3, 0x11c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80424170_00000920
    beq lbl_fn_80424170_00000920
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80424170_00000920:
    li r0, 0x0
    stw r0, 0x11c(r28)
    stw r0, 0x118(r28)
lbl_fn_80424170_0000092C:
    mr r3, r28
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r29, 0x0
    ble lbl_fn_80424170_00000948
    mr r3, r28
    bl dtor_80084684
lbl_fn_80424170_00000948:
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

asm void fn_80424254(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    bl _savegpr_25
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80424254_00000F78
    lwz r3, 0xf4(r31)
    li r0, 0x1
    stw r0, 0x54(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80424254_00000F70
    lwz r4, 0x70(r3)
    li r26, 0x0
    lwz r3, lbl_8087F4A0
    b lbl_fn_80424254_00000A20
lbl_fn_80424254_000009C4:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80424254_000009E4
    cmpwi r0, 0x4
    beq lbl_fn_80424254_000009EC
    cmpwi r0, 0x5
    beq lbl_fn_80424254_000009F8
    b lbl_fn_80424254_00000A1C
lbl_fn_80424254_000009E4:
    addi r26, r26, 0x1
    b lbl_fn_80424254_00000A1C
lbl_fn_80424254_000009EC:
    lwz r0, 0x344(r4)
    add r26, r26, r0
    b lbl_fn_80424254_00000A1C
lbl_fn_80424254_000009F8:
    lwz r5, 0x48(r3)
    b lbl_fn_80424254_00000A14
lbl_fn_80424254_00000A00:
    lwz r0, 0x20(r5)
    cmplw r0, r4
    bne lbl_fn_80424254_00000A10
    addi r26, r26, 0x1
lbl_fn_80424254_00000A10:
    lwz r5, 0x5c(r5)
lbl_fn_80424254_00000A14:
    cmpwi r5, 0x0
    bne lbl_fn_80424254_00000A00
lbl_fn_80424254_00000A1C:
    lwz r4, 0x4c(r4)
lbl_fn_80424254_00000A20:
    cmpwi r4, 0x0
    bne lbl_fn_80424254_000009C4
    lwz r3, 0x11c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80424254_00000A40
    beq lbl_fn_80424254_00000A40
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80424254_00000A40:
    cmpwi r26, 0x0
    stw r26, 0x118(r31)
    beq lbl_fn_80424254_00000A88
    mulli r3, r26, 0x50
    li r4, 0x0
    la r5, lbl_8087DFA4
    la r6, lbl_8087DFA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_804248E0@ha
    mr r7, r26
    addi r4, r4, fn_804248E0@l
    li r5, 0x0
    li r6, 0x50
    bl fn_80695720
    stw r3, 0x11c(r31)
    b lbl_fn_80424254_00000A90
lbl_fn_80424254_00000A88:
    li r0, 0x0
    stw r0, 0x11c(r31)
lbl_fn_80424254_00000A90:
    mr r3, r31
    bl fn_80424AD4
    addi r28, r1, 0x5c
    addi r27, r1, 0x50
    li r25, 0x0
    li r30, 0x0
    b lbl_fn_80424254_00000CA8
lbl_fn_80424254_00000AAC:
    lwz r0, 0x11c(r31)
    lfs f0, 0x6c(r31)
    add r26, r0, r30
    lfs f7, 0x74(r31)
    lfs f10, 0x2c(r26)
    lfs f8, 0x4c(r26)
    fadds f11, f10, f0
    lfs f9, 0x3c(r26)
    lfs f0, 0x70(r31)
    fadds f7, f8, f7
    stfs f10, 0x74(r1)
    fadds f0, f9, f0
    stfs f11, 0x2c(r26)
    stfs f0, 0x3c(r26)
    stfs f7, 0x4c(r26)
    lwzx r0, r30, r0
    stfs f9, 0x78(r1)
    cmpwi r0, 0x0
    stfs f8, 0x7c(r1)
    stfs f11, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f7, 0x70(r1)
    beq lbl_fn_80424254_00000B1C
    cmpwi r0, 0x4
    beq lbl_fn_80424254_00000C0C
    cmpwi r0, 0x5
    beq lbl_fn_80424254_00000C1C
    b lbl_fn_80424254_00000CA0
lbl_fn_80424254_00000B1C:
    lwz r29, 0x4(r26)
    addi r3, r1, 0x14
    psq_l f2, 0x28(r26), 0, 0
    psq_l f3, 0x30(r26), 0, 0
    psq_l f4, 0x38(r26), 0, 0
    psq_l f5, 0x40(r26), 0, 0
    psq_l f6, 0x48(r26), 0, 0
    psq_l f1, 0x20(r26), 0, 0
    psq_st f1, 0x8(r29), 0, 0
    psq_st f2, 0x10(r29), 0, 0
    psq_st f3, 0x18(r29), 0, 0
    psq_st f4, 0x20(r29), 0, 0
    psq_st f5, 0x28(r29), 0, 0
    psq_st f6, 0x30(r29), 0, 0
    lfs f8, 0x48(r26)
    lfs f7, 0x38(r26)
    lfs f0, 0x28(r26)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x44(r26)
    fmr f30, f1
    lfs f7, 0x34(r26)
    addi r3, r1, 0x20
    lfs f0, 0x24(r26)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x40(r26)
    fmr f31, f1
    lfs f7, 0x30(r26)
    addi r3, r1, 0x2c
    lfs f0, 0x20(r26)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_80424254_00000BD8
    b lbl_fn_80424254_00000BDC
lbl_fn_80424254_00000BD8:
    fmr f7, f0
lbl_fn_80424254_00000BDC:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80424254_00000BEC
    b lbl_fn_80424254_00000C04
lbl_fn_80424254_00000BEC:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80424254_00000C00
    b lbl_fn_80424254_00000C04
lbl_fn_80424254_00000C00:
    fmr f8, f0
lbl_fn_80424254_00000C04:
    stfs f8, 0x54(r29)
    b lbl_fn_80424254_00000CA0
lbl_fn_80424254_00000C0C:
    lwz r3, 0x4(r26)
    addi r4, r26, 0x20
    bl fn_8009EE30
    b lbl_fn_80424254_00000CA0
lbl_fn_80424254_00000C1C:
    lwz r3, 0x4(r26)
    lfs f8, 0x70(r31)
    lfs f9, 0x70(r3)
    lfs f7, 0x6c(r3)
    fadds f9, f9, f8
    lfs f0, 0x6c(r31)
    lfs f8, 0x74(r3)
    fadds f7, f7, f0
    lfs f0, 0x74(r31)
    stfs f9, 0x60(r1)
    fadds f10, f8, f0
    stfs f7, 0x5c(r1)
    psq_l f1, 0x0(r28), 0, 0
    fmr f2, f10
    psq_st f1, 0x6c(r3), 0, 0
    stfs f2, 0x74(r3)
    lwz r3, 0x4(r26)
    lfs f8, 0x7c(r31)
    lfs f9, 0x7c(r3)
    lfs f7, 0x78(r3)
    fadds f9, f9, f8
    lfs f0, 0x78(r31)
    lfs f8, 0x80(r3)
    fadds f7, f7, f0
    lfs f0, 0x80(r31)
    stfs f9, 0x54(r1)
    fadds f2, f8, f0
    stfs f7, 0x50(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f10, 0x64(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x80(r3)
lbl_fn_80424254_00000CA0:
    addi r25, r25, 0x1
    addi r30, r30, 0x50
lbl_fn_80424254_00000CA8:
    lwz r0, 0x118(r31)
    cmplw r25, r0
    blt lbl_fn_80424254_00000AAC
    lwz r3, 0xf4(r31)
    lwz r6, 0x70(r3)
    b lbl_fn_80424254_00000D80
lbl_fn_80424254_00000CC0:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x6
    bne lbl_fn_80424254_00000D7C
    li r7, 0x0
    li r4, 0x0
    b lbl_fn_80424254_00000D70
lbl_fn_80424254_00000CD8:
    lwz r3, 0x58(r6)
    li r9, 0x0
    li r5, 0x0
    lwzx r8, r3, r4
    b lbl_fn_80424254_00000D5C
lbl_fn_80424254_00000CEC:
    lwz r0, 0x28(r8)
    addi r9, r9, 0x1
    lfs f0, 0x6c(r31)
    lfsx f7, r5, r0
    add r3, r0, r5
    fadds f0, f7, f0
    stfsx f0, r5, r0
    addi r5, r5, 0x18
    lfs f7, 0x4(r3)
    lfs f0, 0x70(r31)
    fadds f0, f7, f0
    stfs f0, 0x4(r3)
    lfs f7, 0x8(r3)
    lfs f0, 0x74(r31)
    fadds f0, f7, f0
    stfs f0, 0x8(r3)
    lfs f7, 0xc(r3)
    lfs f0, 0x6c(r31)
    fadds f0, f7, f0
    stfs f0, 0xc(r3)
    lfs f7, 0x10(r3)
    lfs f0, 0x70(r31)
    fadds f0, f7, f0
    stfs f0, 0x10(r3)
    lfs f7, 0x14(r3)
    lfs f0, 0x74(r31)
    fadds f0, f7, f0
    stfs f0, 0x14(r3)
lbl_fn_80424254_00000D5C:
    lwz r0, 0x2c(r8)
    cmplw r9, r0
    blt lbl_fn_80424254_00000CEC
    addi r4, r4, 0x4
    addi r7, r7, 0x1
lbl_fn_80424254_00000D70:
    lwz r0, 0x5c(r6)
    cmplw r7, r0
    blt lbl_fn_80424254_00000CD8
lbl_fn_80424254_00000D7C:
    lwz r6, 0x4c(r6)
lbl_fn_80424254_00000D80:
    cmpwi r6, 0x0
    bne lbl_fn_80424254_00000CC0
    addi r4, r31, 0x120
    li r6, 0x0
lbl_fn_80424254_00000D90:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80424254_00000E08
    lwz r3, 0xf4(r31)
    lwz r7, 0x70(r3)
    b lbl_fn_80424254_00000E00
lbl_fn_80424254_00000DA8:
    lwz r0, 0x48(r7)
    cmpwi r0, 0x6
    bne lbl_fn_80424254_00000DFC
    lwz r0, 0x5c(r7)
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80424254_00000DF0
lbl_fn_80424254_00000DC8:
    lwz r3, 0x58(r7)
    lwz r0, 0x4(r4)
    lwzx r3, r3, r5
    lwz r3, 0x24(r3)
    cmplw r3, r0
    bne lbl_fn_80424254_00000DE8
    stw r7, 0x8(r4)
    b lbl_fn_80424254_00000DF0
lbl_fn_80424254_00000DE8:
    addi r5, r5, 0x4
    bdnz lbl_fn_80424254_00000DC8
lbl_fn_80424254_00000DF0:
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80424254_00000E08
lbl_fn_80424254_00000DFC:
    lwz r7, 0x4c(r7)
lbl_fn_80424254_00000E00:
    cmpwi r7, 0x0
    bne lbl_fn_80424254_00000DA8
lbl_fn_80424254_00000E08:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    cmplwi r6, 0x19
    blt lbl_fn_80424254_00000D90
    lfs f7, lbl_8088666C
    addi r3, r1, 0x44
    lfs f0, lbl_80886670
    addi r27, r1, 0xb0
    fmr f2, f7
    stfs f7, 0x44(r1)
    addi r5, r1, 0x38
    addi r4, r1, 0xbc
    stfs f7, 0x48(r1)
    addi r28, r1, 0x98
    stfs f2, 0xb8(r1)
    fmr f2, f0
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    lwz r3, 0xf4(r31)
    stfs f7, 0x4c(r1)
    lwz r25, 0x70(r3)
    stfs f0, 0x40(r1)
    b lbl_fn_80424254_00000EC8
lbl_fn_80424254_00000E78:
    lwz r12, 0x0(r25)
    mr r4, r25
    addi r3, r1, 0x80
    li r5, 0x0
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x98
    addi r4, r1, 0xb0
    addi r5, r1, 0x80
    bl fn_80070C98
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xa0(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0xc(r28), 0, 0
    stfs f2, 0xb8(r1)
    lfs f2, 0xac(r1)
    psq_st f1, 0xc(r27), 0, 0
    stfs f2, 0xc4(r1)
    lwz r25, 0x4c(r25)
lbl_fn_80424254_00000EC8:
    cmpwi r25, 0x0
    bne lbl_fn_80424254_00000E78
    addi r3, r1, 0xb0
    lwz r6, 0xf4(r31)
    lfs f2, 0xb8(r1)
    li r0, 0x19
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r31, 0x120
    psq_st f1, 0x88(r6), 0, 0
    li r4, 0x0
    stfs f2, 0x90(r6)
    lfs f2, 0xc4(r1)
    psq_l f1, 0xc(r3), 0, 0
    psq_st f1, 0x94(r6), 0, 0
    stfs f2, 0x9c(r6)
    mtctr r0
lbl_fn_80424254_00000F08:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    beq lbl_fn_80424254_00000F5C
    lwz r0, 0x54(r31)
    cmpw r4, r0
    bne lbl_fn_80424254_00000F40
    lwz r0, 0x8(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80424254_00000F5C
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_80424254_00000F5C
lbl_fn_80424254_00000F40:
    lwz r0, 0x8(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80424254_00000F5C
    lwz r0, 0x8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x8(r3)
lbl_fn_80424254_00000F5C:
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    bdnz lbl_fn_80424254_00000F08
    mr r3, r31
    bl fn_80425498
lbl_fn_80424254_00000F70:
    li r3, 0x1
    b lbl_fn_80424254_00000F7C
lbl_fn_80424254_00000F78:
    li r3, 0x0
lbl_fn_80424254_00000F7C:
    addi r11, r1, 0xf0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    bl _restgpr_25
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8042488C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f3, lbl_8088666C
    lfs f0, lbl_80886670
    addi r4, r1, 0x14
    fmr f2, f3
    stfs f3, 0x14(r1)
    addi r5, r1, 0x8
    stfs f3, 0x18(r1)
    stfs f2, 0x8(r3)
    fmr f2, f0
    psq_l f1, 0x0(r4), 0, 0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f3, 0x1c(r1)
    stfs f0, 0x10(r1)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_804248E0(void)
{
    nofralloc
    lfs f1, lbl_80886668
    li r0, 0x0
    lfs f0, lbl_80886674
    stw r0, 0x0(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x4c(r3)
    stfs f1, 0x44(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x24(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x20(r3)
    blr
}

asm void fn_8042493C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886668
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r4, r1, 0x8
    lwz r5, 0x58(r3)
    addi r5, r5, 0x1
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042499C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x4330
    lis r6, lbl_80753618@ha
    stw r0, 0x24(r1)
    lfd f3, lbl_80753618@l(r6)
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f0, lbl_80886678
    lwz r5, 0x114(r3)
    lwz r0, 0x110(r3)
    xoris r5, r5, 0x8000
    stw r5, 0xc(r1)
    xoris r0, r0, 0x8000
    stw r4, 0x8(r1)
    lfd f1, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f1, f3
    stw r4, 0x10(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    fdivs f1, f2, f1
    fmuls f1, f0, f1
    bl fn_8068A850
    frsp f2, f1
    lfs f1, lbl_80886674
    lfs f0, lbl_8088667C
    mr r3, r31
    fsubs f1, f1, f2
    fmuls f1, f0, f1
    bl fn_80424FB4
    li r0, 0x19
    addi r4, r31, 0x120
    li r3, 0x0
    mtctr r0
lbl_fn_8042499C_00001140:
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8042499C_00001194
    lwz r0, 0x54(r31)
    cmpw r3, r0
    bne lbl_fn_8042499C_00001178
    lwz r0, 0x8(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8042499C_00001194
    lwz r0, 0x8(r5)
    ori r0, r0, 0x1
    stw r0, 0x8(r5)
    b lbl_fn_8042499C_00001194
lbl_fn_8042499C_00001178:
    lwz r0, 0x8(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8042499C_00001194
    lwz r0, 0x8(r5)
    clrrwi r0, r0, 1
    stw r0, 0x8(r5)
lbl_fn_8042499C_00001194:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_8042499C_00001140
    mr r3, r31
    bl fn_80425498
    lwz r4, 0x114(r31)
    lwz r3, 0x110(r31)
    cmpw r4, r3
    bge lbl_fn_8042499C_000011D8
    addi r0, r4, 0x1
    stw r0, 0x114(r31)
    cmpw r0, r3
    blt lbl_fn_8042499C_000011D8
    stw r3, 0x114(r31)
    mr r3, r31
    li r4, 0x1
    bl fn_80425878
lbl_fn_8042499C_000011D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80424AD4(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x320
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    stfd f30, 0x320(r1)
    psq_st f30, 0x328(r1), 0, 0
    bl _savegpr_16
    lwz r4, 0xf4(r3)
    mr r19, r3
    lfs f30, lbl_80886668
    addi r28, r1, 0x188
    lwz r21, 0x70(r4)
    addi r31, r1, 0x2a8
    lfs f31, lbl_80886674
    addi r29, r1, 0x1e8
    addi r30, r1, 0x248
    addi r26, r1, 0x158
    addi r23, r1, 0x38
    addi r25, r1, 0xf8
    addi r24, r1, 0x98
    addi r27, r1, 0x8
    li r22, 0x0
    b lbl_fn_80424AD4_0000169C
lbl_fn_80424AD4_00001250:
    lwz r5, 0x48(r21)
    cmpwi r5, 0x0
    beq lbl_fn_80424AD4_00001270
    cmpwi r5, 0x4
    beq lbl_fn_80424AD4_000012BC
    cmpwi r5, 0x5
    beq lbl_fn_80424AD4_00001338
    b lbl_fn_80424AD4_00001698
lbl_fn_80424AD4_00001270:
    mulli r0, r22, 0x50
    lwz r3, 0x11c(r19)
    addi r4, r21, 0x50
    addi r22, r22, 0x1
    stwux r5, r3, r0
    stw r4, 0x4(r3)
    psq_l f2, 0x10(r4), 0, 0
    psq_l f3, 0x18(r4), 0, 0
    psq_l f4, 0x20(r4), 0, 0
    psq_l f5, 0x28(r4), 0, 0
    psq_l f6, 0x30(r4), 0, 0
    psq_l f1, 0x8(r4), 0, 0
    psq_st f1, 0x20(r3), 0, 0
    psq_st f2, 0x28(r3), 0, 0
    psq_st f3, 0x30(r3), 0, 0
    psq_st f4, 0x38(r3), 0, 0
    psq_st f5, 0x40(r3), 0, 0
    psq_st f6, 0x48(r3), 0, 0
    b lbl_fn_80424AD4_00001698
lbl_fn_80424AD4_000012BC:
    mulli r3, r22, 0x50
    li r7, 0x0
    li r4, 0x0
    b lbl_fn_80424AD4_00001328
lbl_fn_80424AD4_000012CC:
    lwz r5, 0x348(r21)
    addi r22, r22, 0x1
    lwz r0, 0x11c(r19)
    addi r7, r7, 0x1
    lwzx r5, r5, r4
    addi r4, r4, 0x4
    add r6, r0, r3
    lwz r0, 0x48(r21)
    stw r0, 0x0(r6)
    addi r3, r3, 0x50
    stw r5, 0x4(r6)
    psq_l f2, 0x38(r5), 0, 0
    psq_l f3, 0x40(r5), 0, 0
    psq_l f4, 0x48(r5), 0, 0
    psq_l f5, 0x50(r5), 0, 0
    psq_l f6, 0x58(r5), 0, 0
    psq_l f1, 0x30(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    psq_st f2, 0x28(r6), 0, 0
    psq_st f3, 0x30(r6), 0, 0
    psq_st f4, 0x38(r6), 0, 0
    psq_st f5, 0x40(r6), 0, 0
    psq_st f6, 0x48(r6), 0, 0
lbl_fn_80424AD4_00001328:
    lwz r0, 0x344(r21)
    cmpw r7, r0
    blt lbl_fn_80424AD4_000012CC
    b lbl_fn_80424AD4_00001698
lbl_fn_80424AD4_00001338:
    lwz r3, lbl_8087F4A0
    mulli r18, r22, 0x50
    lwz r20, 0x48(r3)
    b lbl_fn_80424AD4_00001690
lbl_fn_80424AD4_00001348:
    lwz r0, 0x20(r20)
    cmplw r0, r21
    bne lbl_fn_80424AD4_0000168C
    lwz r3, 0x11c(r19)
    lwz r0, 0x48(r21)
    stwx r0, r3, r18
    add r16, r3, r18
    stw r20, 0x4(r16)
    lfs f2, 0x74(r20)
    psq_l f1, 0x6c(r20), 0, 0
    psq_st f1, 0x8(r16), 0, 0
    stfs f2, 0x10(r16)
    lfs f2, 0x8c(r20)
    psq_l f1, 0x84(r20), 0, 0
    psq_st f1, 0x14(r16), 0, 0
    stfs f2, 0x1c(r16)
    stfs f30, 0x2d4(r1)
    stfs f30, 0x2cc(r1)
    stfs f30, 0x2c8(r1)
    stfs f30, 0x2c4(r1)
    stfs f30, 0x2c0(r1)
    stfs f30, 0x2b8(r1)
    stfs f30, 0x2b4(r1)
    stfs f30, 0x2b0(r1)
    stfs f30, 0x2ac(r1)
    stfs f31, 0x2d0(r1)
    stfs f31, 0x2bc(r1)
    stfs f31, 0x2a8(r1)
    lfs f1, 0x80(r20)
    fcmpu cr0, f30, f1
    beq lbl_fn_80424AD4_00001410
    addi r3, r1, 0x1b8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x1b8
    addi r5, r1, 0x188
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80424AD4_00001410:
    lfs f1, 0x7c(r20)
    fcmpu cr0, f30, f1
    beq lbl_fn_80424AD4_00001468
    addi r3, r1, 0x218
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x218
    addi r5, r1, 0x1e8
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80424AD4_00001468:
    lfs f1, 0x78(r20)
    fcmpu cr0, f30, f1
    beq lbl_fn_80424AD4_000014C0
    addi r3, r1, 0x278
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x278
    addi r5, r1, 0x248
    bl fn_805F89F0
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80424AD4_000014C0:
    psq_l f2, 0x8(r31), 0, 0
    addi r17, r16, 0x20
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r17), 0, 0
    psq_st f2, 0x8(r17), 0, 0
    psq_st f3, 0x10(r17), 0, 0
    psq_st f4, 0x18(r17), 0, 0
    psq_st f5, 0x20(r17), 0, 0
    psq_st f6, 0x28(r17), 0, 0
    stfs f30, 0x64(r1)
    stfs f30, 0x5c(r1)
    stfs f30, 0x58(r1)
    stfs f30, 0x54(r1)
    stfs f30, 0x50(r1)
    stfs f30, 0x48(r1)
    stfs f30, 0x44(r1)
    stfs f30, 0x40(r1)
    stfs f30, 0x3c(r1)
    stfs f31, 0x60(r1)
    stfs f31, 0x4c(r1)
    stfs f31, 0x38(r1)
    lfs f1, 0x1c(r16)
    fcmpu cr0, f30, f1
    beq lbl_fn_80424AD4_0000157C
    addi r3, r1, 0x128
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x128
    addi r5, r1, 0x158
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80424AD4_0000157C:
    lfs f1, 0x18(r16)
    fcmpu cr0, f30, f1
    beq lbl_fn_80424AD4_000015D4
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0xc8
    addi r5, r1, 0xf8
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80424AD4_000015D4:
    lfs f1, 0x14(r16)
    fcmpu cr0, f30, f1
    beq lbl_fn_80424AD4_0000162C
    addi r3, r1, 0x68
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80424AD4_0000162C:
    mr r3, r17
    mr r4, r23
    addi r5, r1, 0x8
    bl fn_805F89F0
    psq_l f2, 0x8(r27), 0, 0
    addi r22, r22, 0x1
    psq_l f3, 0x10(r27), 0, 0
    addi r18, r18, 0x50
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r17), 0, 0
    psq_st f2, 0x8(r17), 0, 0
    psq_st f3, 0x10(r17), 0, 0
    psq_st f4, 0x18(r17), 0, 0
    psq_st f5, 0x20(r17), 0, 0
    psq_st f6, 0x28(r17), 0, 0
    lfs f0, 0x6c(r20)
    stfs f0, 0x2c(r16)
    lfs f0, 0x70(r20)
    stfs f0, 0x3c(r16)
    lfs f0, 0x74(r20)
    stfs f0, 0x4c(r16)
lbl_fn_80424AD4_0000168C:
    lwz r20, 0x5c(r20)
lbl_fn_80424AD4_00001690:
    cmpwi r20, 0x0
    bne lbl_fn_80424AD4_00001348
lbl_fn_80424AD4_00001698:
    lwz r21, 0x4c(r21)
lbl_fn_80424AD4_0000169C:
    cmpwi r21, 0x0
    bne lbl_fn_80424AD4_00001250
    addi r11, r1, 0x320
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    psq_l f30, 0x328(r1), 0, 0
    lfd f30, 0x320(r1)
    bl _restgpr_16
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_80424FB4(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    addi r11, r1, 0x270
    stfd f31, 0x2b0(r1)
    psq_st f31, 0x2b8(r1), 0, 0
    stfd f30, 0x2a0(r1)
    psq_st f30, 0x2a8(r1), 0, 0
    stfd f29, 0x290(r1)
    psq_st f29, 0x298(r1), 0, 0
    stfd f28, 0x280(r1)
    psq_st f28, 0x288(r1), 0, 0
    stfd f27, 0x270(r1)
    psq_st f27, 0x278(r1), 0, 0
    bl _savegpr_17
    fmr f29, f1
    li r31, 0x0
    lfs f30, lbl_80886668
    mr r30, r3
    lfs f31, lbl_80886674
    mr r27, r31
    mr r28, r31
    addi r21, r1, 0x200
    addi r23, r1, 0xb0
    addi r26, r1, 0x1d0
    addi r24, r1, 0x110
    addi r25, r1, 0x170
    addi r19, r1, 0x50
    addi r18, r1, 0x44
    addi r20, r1, 0x98
    li r29, 0x0
    b lbl_fn_80424FB4_00001B64
lbl_fn_80424FB4_0000174C:
    lwz r0, 0x11c(r30)
    add r17, r0, r29
    psq_l f1, 0x20(r17), 0, 0
    psq_l f2, 0x28(r17), 0, 0
    psq_l f3, 0x30(r17), 0, 0
    psq_l f4, 0x38(r17), 0, 0
    psq_l f5, 0x40(r17), 0, 0
    psq_l f6, 0x48(r17), 0, 0
    psq_st f6, 0x28(r21), 0, 0
    psq_st f2, 0x8(r21), 0, 0
    lfs f9, 0x22c(r1)
    psq_st f4, 0x18(r21), 0, 0
    lfs f11, 0x20c(r1)
    lfs f10, 0x21c(r1)
    psq_st f1, 0x0(r21), 0, 0
    psq_st f3, 0x10(r21), 0, 0
    psq_st f5, 0x20(r21), 0, 0
    lfs f8, 0x74(r30)
    lfs f7, 0x70(r30)
    fsubs f12, f9, f8
    lfs f0, 0x6c(r30)
    fsubs f13, f10, f7
    stfs f11, 0x80(r1)
    fsubs f11, f11, f0
    stfs f13, 0x21c(r1)
    stfs f11, 0x20c(r1)
    stfs f12, 0x22c(r1)
    lfs f8, 0x10c(r30)
    lfs f7, 0x108(r30)
    lfs f0, 0x104(r30)
    fmuls f1, f8, f29
    fmuls f7, f7, f29
    stfs f10, 0x84(r1)
    fmuls f0, f0, f29
    fcmpu cr0, f30, f1
    stfs f9, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f13, 0x90(r1)
    stfs f12, 0x94(r1)
    stfs f0, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f30, 0x1fc(r1)
    stfs f30, 0x1f4(r1)
    stfs f30, 0x1f0(r1)
    stfs f30, 0x1ec(r1)
    stfs f30, 0x1e8(r1)
    stfs f30, 0x1e0(r1)
    stfs f30, 0x1dc(r1)
    stfs f30, 0x1d8(r1)
    stfs f30, 0x1d4(r1)
    stfs f31, 0x1f8(r1)
    stfs f31, 0x1e4(r1)
    stfs f31, 0x1d0(r1)
    beq lbl_fn_80424FB4_00001874
    addi r3, r1, 0xe0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0xe0
    addi r5, r1, 0xb0
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_80424FB4_00001874:
    lfs f1, 0x78(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_80424FB4_000018CC
    addi r3, r1, 0x140
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x140
    addi r5, r1, 0x110
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_80424FB4_000018CC:
    lfs f1, 0x74(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_80424FB4_00001924
    addi r3, r1, 0x1a0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x1a0
    addi r5, r1, 0x170
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_80424FB4_00001924:
    addi r4, r1, 0x200
    addi r3, r1, 0x1d0
    mr r5, r4
    bl fn_805F89F0
    lfs f9, 0x22c(r1)
    lfs f10, 0x21c(r1)
    lfs f11, 0x20c(r1)
    lfs f8, 0x74(r30)
    lfs f7, 0x70(r30)
    lfs f0, 0x6c(r30)
    fadds f12, f9, f8
    fadds f7, f10, f7
    stfs f11, 0x5c(r1)
    fadds f0, f11, f0
    stfs f7, 0x21c(r1)
    stfs f0, 0x20c(r1)
    stfs f12, 0x22c(r1)
    lwz r0, 0x0(r17)
    stfs f10, 0x60(r1)
    cmpwi r0, 0x0
    stfs f9, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f12, 0x70(r1)
    beq lbl_fn_80424FB4_0000199C
    cmpwi r0, 0x4
    beq lbl_fn_80424FB4_00001AD4
    cmpwi r0, 0x5
    beq lbl_fn_80424FB4_00001AE4
    b lbl_fn_80424FB4_00001B5C
lbl_fn_80424FB4_0000199C:
    lwz r22, 0x4(r17)
    addi r3, r1, 0x14
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x8(r22), 0, 0
    psq_st f2, 0x10(r22), 0, 0
    psq_st f3, 0x18(r22), 0, 0
    psq_st f4, 0x20(r22), 0, 0
    psq_st f5, 0x28(r22), 0, 0
    psq_st f6, 0x30(r22), 0, 0
    lfs f8, 0x228(r1)
    lfs f7, 0x218(r1)
    lfs f0, 0x208(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x224(r1)
    fmr f27, f1
    lfs f7, 0x214(r1)
    addi r3, r1, 0x20
    lfs f0, 0x204(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x220(r1)
    fmr f28, f1
    lfs f7, 0x210(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x200(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f28
    stfs f1, 0x8(r1)
    frsp f0, f27
    stfs f28, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f27, 0x10(r1)
    ble lbl_fn_80424FB4_00001A58
    b lbl_fn_80424FB4_00001A5C
lbl_fn_80424FB4_00001A58:
    fmr f7, f0
lbl_fn_80424FB4_00001A5C:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80424FB4_00001A6C
    b lbl_fn_80424FB4_00001A84
lbl_fn_80424FB4_00001A6C:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80424FB4_00001A80
    b lbl_fn_80424FB4_00001A84
lbl_fn_80424FB4_00001A80:
    fmr f8, f0
lbl_fn_80424FB4_00001A84:
    stfs f8, 0x54(r22)
    addi r4, r1, 0x98
    stw r27, 0x98(r1)
    lwz r3, 0x4(r17)
    bl fn_8000D430
    cmpwi r20, 0x0
    beq lbl_fn_80424FB4_00001B5C
    lwz r3, 0x98(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80424FB4_00001B5C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80424FB4_00001ACC
    addi r3, r20, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80424FB4_00001ACC:
    stw r28, 0x98(r1)
    b lbl_fn_80424FB4_00001B5C
lbl_fn_80424FB4_00001AD4:
    lwz r3, 0x4(r17)
    addi r4, r1, 0x200
    bl fn_8009EE30
    b lbl_fn_80424FB4_00001B5C
lbl_fn_80424FB4_00001AE4:
    stfs f0, 0x50(r1)
    fmr f2, f12
    lwz r3, 0x4(r17)
    stfs f7, 0x54(r1)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x6c(r3), 0, 0
    stfs f2, 0x74(r3)
    lfs f7, 0x108(r30)
    lfs f0, 0x104(r30)
    fmuls f9, f7, f29
    lfs f7, 0x18(r17)
    fmuls f10, f0, f29
    lfs f0, 0x14(r17)
    lfs f8, 0x10c(r30)
    fadds f11, f7, f9
    fadds f0, f0, f10
    lfs f7, 0x1c(r17)
    fmuls f8, f8, f29
    stfs f11, 0x48(r1)
    lwz r3, 0x4(r17)
    stfs f0, 0x44(r1)
    fadds f2, f7, f8
    psq_l f1, 0x0(r18), 0, 0
    psq_st f1, 0x84(r3), 0, 0
    stfs f12, 0x58(r1)
    stfs f10, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x8c(r3)
lbl_fn_80424FB4_00001B5C:
    addi r31, r31, 0x1
    addi r29, r29, 0x50
lbl_fn_80424FB4_00001B64:
    lwz r0, 0x118(r30)
    cmplw r31, r0
    blt lbl_fn_80424FB4_0000174C
    addi r11, r1, 0x270
    psq_l f31, 0x2b8(r1), 0, 0
    lfd f31, 0x2b0(r1)
    psq_l f30, 0x2a8(r1), 0, 0
    lfd f30, 0x2a0(r1)
    psq_l f29, 0x298(r1), 0, 0
    lfd f29, 0x290(r1)
    psq_l f28, 0x288(r1), 0, 0
    lfd f28, 0x280(r1)
    psq_l f27, 0x278(r1), 0, 0
    lfd f27, 0x270(r1)
    bl _restgpr_17
    lwz r0, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}
