#include "revolution/types.h"

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80626AC0(void);
extern void fn_80628150(void);
extern void fn_80628160(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_80629870(void);
extern void fn_80629890(void);
extern void fn_80629EA4(void);
extern void fn_80629ED8(void);
extern void fn_80629FA8(void);
extern void fn_8062A06C(void);
extern void fn_8062A130(void);
extern void fn_8062A164(void);
extern void fn_8062A198(void);
extern void fn_8062A33C(void);
extern void fn_8062A350(void);
extern void fn_8062A5F0(void);
extern void fn_8062D958(void);
extern void fn_8062DACC(void);
extern void fn_8062DBD0(void);
extern void fn_8063F3B4(void);
extern void fn_8063F98C(void);
extern void fn_8063FA70(void);
extern void fn_8063FC00(void);
extern void fn_8063FCC8(void);
extern void fn_8063FD2C(void);
extern void fn_8063FE6C(void);
extern void fn_8063FF0C(void);
extern void fn_80647A88(void);
extern void fn_806743E0(void);
extern void fn_80674410(void);
extern void fn_80674420(void);

/* External data declarations */
extern u8 jumptable_807B3740[];
extern u8 jumptable_807B3768[];
extern u8 jumptable_807B37EC[];
extern u8 jumptable_807B3814[];
extern u8 jumptable_807B3998[];
extern u8 jumptable_807B39BC[];
extern u8 jumptable_807B3CB0[];
extern u8 lbl_80764EC8[];
extern u8 lbl_80764F40[];
extern u8 lbl_807B34E8[];
extern u8 lbl_807B3540[];
extern u8 lbl_807B3570[];
extern u8 lbl_807B35C0[];
extern u8 lbl_807B35E0[];
extern u8 lbl_807B362C[];
extern u8 lbl_807B3840[];
extern u8 lbl_807B3850[];
extern u8 lbl_807B386C[];
extern u8 lbl_807B39E0[];
extern u8 lbl_807B3A10[];
extern u8 lbl_807B3AEC[];
extern u8 lbl_807B3CF0[];
extern u8 lbl_807B3D74[];
extern u8 lbl_8081FDE8[];
extern u8 lbl_80820018[];
extern u8 lbl_80822CD8[];
extern u8 lbl_808230E0[];

/* Small data declarations */
extern u32 lbl_8087EAA8;
extern u32 lbl_8087EAD0;
extern u32 lbl_80880188;
extern u32 lbl_80888870;
extern u32 lbl_808893A8;

/* Function declarations */
void fn_8062DC74(void);
void fn_8062DDA8(void);
void fn_8062DF3C(void);
void fn_8062E0A4(void);
void fn_8062E10C(void);
void fn_8062E234(void);
void fn_8062E2EC(void);
void fn_8062E344(void);
void fn_8062E5AC(void);
void fn_8062E7A4(void);
void fn_8062E9A4(void);
void fn_8062E9C0(void);
void fn_8062EB24(void);
void fn_8062EC40(void);
void fn_8062EE08(void);
void fn_8062F0A0(void);
void fn_8062F128(void);
void fn_8062F160(void);
void fn_8062F1C4(void);
void fn_8062F278(void);
void fn_8062F308(void);
void fn_8062F3B0(void);
void fn_8062F41C(void);
void fn_8062F470(void);
void fn_8062F7C4(void);
void fn_8062F910(void);
void fn_8062F9C4(void);
void fn_8062FB00(void);
void fn_8062FB80(void);
void fn_8062FC3C(void);
void fn_8062FC90(void);
void fn_8062FD70(void);
void fn_8062FD8C(void);

asm void fn_8062DC74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8081FDE8@ha
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    li r0, 0x10
    addi r6, r6, lbl_8081FDE8@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stb r0, 0x8(r1)
    lwz r31, 0x210(r6)
    bne lbl_fn_8062DC74_000000F8
    lbz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8062DC74_0000004C
    ori r29, r4, 0x8000
lbl_fn_8062DC74_0000004C:
    lbz r0, lbl_80880188
    cmplwi r0, 0x4
    blt lbl_fn_8062DC74_00000074
    lis r4, lbl_807B34E8@ha
    mr r6, r3
    mr r5, r31
    clrlwi r7, r29, 16
    addi r4, r4, lbl_807B34E8@l
    li r3, 0x503
    bl fn_80629870
lbl_fn_8062DC74_00000074:
    lbz r4, 0x64(r30)
    mr r3, r31
    bl fn_8062FC3C
    clrlwi. r0, r3, 24
    beq lbl_fn_8062DC74_000000F0
    lbz r0, 0x16(r31)
    cmplwi r0, 0xff
    bne lbl_fn_8062DC74_000000F8
    addi r3, r31, 0x8
    clrlwi r4, r29, 16
    addi r5, r1, 0x9
    bl fn_8063FA70
    clrlwi. r0, r3, 24
    stb r3, 0x8(r1)
    bne lbl_fn_8062DC74_000000E4
    lis r3, lbl_8081FDE8@ha
    lbz r4, 0x9(r1)
    addi r3, r3, lbl_8081FDE8@l
    lbz r0, 0x12(r31)
    add r5, r3, r4
    addi r6, r30, 0x68
    stb r0, 0x214(r5)
    mr r3, r31
    clrlwi r5, r29, 16
    lbz r7, 0x64(r30)
    lbz r8, 0x15(r31)
    bl fn_8062FB80
    b lbl_fn_8062DC74_000000F8
lbl_fn_8062DC74_000000E4:
    li r0, 0x0
    stb r0, 0x15(r31)
    b lbl_fn_8062DC74_000000F8
lbl_fn_8062DC74_000000F0:
    li r0, 0xff
    stb r0, 0x8(r1)
lbl_fn_8062DC74_000000F8:
    lis r3, lbl_8081FDE8@ha
    addi r3, r3, lbl_8081FDE8@l
    addi r3, r3, 0x228
    bl fn_8062A5F0
    mr r3, r31
    addi r5, r1, 0x8
    li r4, 0x1707
    bl fn_8062F470
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062DDA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x10
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stb r0, 0x9(r1)
    lbz r5, 0xe(r4)
    lbz r0, 0x15(r3)
    stb r5, 0x14(r3)
    cmpwi r0, 0x0
    lbz r0, 0xf(r4)
    stb r0, 0x1b(r3)
    beq lbl_fn_8062DDA8_0000020C
    lbz r0, lbl_80880188
    li r3, 0x0
    stb r3, 0x9(r1)
    cmplwi r0, 0x5
    blt lbl_fn_8062DDA8_0000019C
    lis r4, lbl_807B3540@ha
    li r3, 0x504
    addi r4, r4, lbl_807B3540@l
    bl fn_80629810
lbl_fn_8062DDA8_0000019C:
    lbz r0, 0x16(r31)
    cmplwi r0, 0xff
    bne lbl_fn_8062DDA8_000001F8
    lhz r4, 0xe(r31)
    addi r3, r31, 0x8
    addi r5, r1, 0x8
    bl fn_8063FA70
    clrlwi. r0, r3, 24
    stb r3, 0x9(r1)
    bne lbl_fn_8062DDA8_000001F8
    lbz r4, 0x8(r1)
    mr r3, r31
    lhz r5, 0xe(r31)
    li r6, 0x0
    lbz r7, 0x13(r31)
    lbz r8, 0x15(r31)
    bl fn_8062FB80
    lis r3, lbl_8081FDE8@ha
    lbz r0, 0x8(r1)
    addi r3, r3, lbl_8081FDE8@l
    lbz r4, 0x12(r31)
    add r3, r3, r0
    stb r4, 0x214(r3)
lbl_fn_8062DDA8_000001F8:
    mr r3, r31
    addi r5, r1, 0x9
    li r4, 0x1707
    bl fn_8062F470
    b lbl_fn_8062DDA8_000002AC
lbl_fn_8062DDA8_0000020C:
    lis r30, lbl_8081FDE8@ha
    addi r30, r30, lbl_8081FDE8@l
    lwz r0, 0x228(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8062DDA8_00000290
    lwz r3, lbl_8087EAA8
    lhz r3, 0x8(r3)
    bl fn_80626AC0
    stw r3, 0x228(r30)
    lis r6, fn_8062DC74@ha
    lwz r5, lbl_8087EAA8
    mr r4, r3
    stw r31, 0x210(r30)
    addi r3, r29, 0x8
    addi r6, r6, fn_8062DC74@l
    lhz r5, 0x8(r5)
    bl fn_8063F3B4
    clrlwi. r5, r3, 24
    stb r3, 0x9(r1)
    beq lbl_fn_8062DDA8_00000290
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062DDA8_00000278
    lis r4, lbl_807B3570@ha
    li r3, 0x504
    addi r4, r4, lbl_807B3570@l
    bl fn_80629830
lbl_fn_8062DDA8_00000278:
    li r0, 0x7
    lis r3, lbl_8081FDE8@ha
    addi r3, r3, lbl_8081FDE8@l
    stb r0, 0x9(r1)
    addi r3, r3, 0x228
    bl fn_8062A5F0
lbl_fn_8062DDA8_00000290:
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8062DDA8_000002AC
    mr r3, r31
    addi r5, r1, 0x9
    li r4, 0x1707
    bl fn_8062F470
lbl_fn_8062DDA8_000002AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062DF3C(void)
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
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062DF3C_00000308
    lis r4, lbl_807B35C0@ha
    lbz r5, 0x0(r30)
    addi r4, r4, lbl_807B35C0@l
    li r3, 0x504
    bl fn_80629830
lbl_fn_8062DF3C_00000308:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    lbz r0, 0x16(r29)
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    stb r0, 0xf(r1)
    bl fn_80629EA4
    lbz r31, 0x0(r30)
    cmpwi r31, 0x0
    bne lbl_fn_8062DF3C_0000039C
    lbz r0, 0x19(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8062DF3C_0000038C
    lbz r4, 0x14(r29)
    la r3, lbl_8087EAD0
    bl fn_8063FF0C
    lbz r3, 0x16(r29)
    bl fn_8063FCC8
    clrlwi. r5, r3, 24
    mr r31, r3
    beq lbl_fn_8062DF3C_0000039C
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062DF3C_00000380
    lis r4, lbl_807B35E0@ha
    li r3, 0x504
    addi r4, r4, lbl_807B35E0@l
    bl fn_80629830
lbl_fn_8062DF3C_00000380:
    lbz r3, 0x16(r29)
    bl fn_8063FC00
    b lbl_fn_8062DF3C_0000039C
lbl_fn_8062DF3C_0000038C:
    mr r3, r29
    li r4, 0x170b
    li r5, 0x0
    bl fn_8062F470
lbl_fn_8062DF3C_0000039C:
    clrlwi. r0, r31, 24
    beq lbl_fn_8062DF3C_00000414
    lbz r0, 0x0(r30)
    cmplwi r0, 0xff
    bne lbl_fn_8062DF3C_000003BC
    li r0, 0xa
    stb r0, 0xe(r1)
    b lbl_fn_8062DF3C_000003C4
lbl_fn_8062DF3C_000003BC:
    li r0, 0x7
    stb r0, 0xe(r1)
lbl_fn_8062DF3C_000003C4:
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_8081FDE8@l
    li r3, 0x2
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    mr r3, r29
    li r4, 0x1701
    li r5, 0x0
    bl fn_8062F470
    lbz r0, 0x15(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8062DF3C_00000410
    lbz r0, 0x19(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8062DF3C_00000410
    mr r3, r29
    bl fn_8062FB00
lbl_fn_8062DF3C_00000410:
    bl fn_8062FC90
lbl_fn_8062DF3C_00000414:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062E0A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_8062E0A4_00000450
    lhz r0, 0x6(r4)
    clrlwi r3, r0, 24
    b lbl_fn_8062E0A4_00000454
lbl_fn_8062E0A4_00000450:
    lbz r3, 0x16(r3)
lbl_fn_8062E0A4_00000454:
    li r0, 0x6
    stb r3, 0x9(r1)
    stb r0, 0x8(r1)
    bl fn_8063FE6C
    clrlwi. r0, r3, 24
    beq lbl_fn_8062E0A4_00000488
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_8081FDE8@l
    li r3, 0x3
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
lbl_fn_8062E0A4_00000488:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062E10C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8062E10C_000004C8
    lhz r0, 0x6(r4)
    clrlwi r30, r0, 24
    b lbl_fn_8062E10C_000004CC
lbl_fn_8062E10C_000004C8:
    lbz r30, 0x16(r3)
lbl_fn_8062E10C_000004CC:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    stb r30, 0xf(r1)
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    bl fn_80629EA4
    lis r31, lbl_8081FDE8@ha
    addi r31, r31, lbl_8081FDE8@l
    lbz r3, 0x22d(r31)
    addi r0, r3, 0x1
    stb r0, 0x22d(r31)
    lbz r3, 0x16(r29)
    lbz r4, 0x13(r29)
    lhz r5, 0xe(r29)
    lbz r6, 0x15(r29)
    bl fn_80674410
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl fn_80629FA8
    lbz r5, 0x1b(r29)
    cmpwi r5, 0x0
    beq lbl_fn_8062E10C_00000580
    mr r3, r30
    li r4, 0x7
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_8063FD2C
    clrlwi. r0, r3, 24
    stb r3, 0xe(r1)
    beq lbl_fn_8062E10C_00000574
    lwz r12, 0x224(r31)
    li r0, 0x8
    stb r0, 0xe(r1)
    addi r4, r1, 0x8
    li r3, 0x2
    mtctr r12
    bctrl
    b lbl_fn_8062E10C_0000059C
lbl_fn_8062E10C_00000574:
    li r0, 0x2
    sth r0, 0x10(r29)
    b lbl_fn_8062E10C_0000059C
lbl_fn_8062E10C_00000580:
    li r0, 0x1
    addi r4, r1, 0x8
    stb r0, 0x1a(r29)
    li r3, 0x2
    lwz r12, 0x224(r31)
    mtctr r12
    bctrl
lbl_fn_8062E10C_0000059C:
    li r0, 0x0
    stb r0, 0x19(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062E234(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_8062E234_000005F0
    lhz r0, 0x6(r4)
    clrlwi r5, r0, 24
    b lbl_fn_8062E234_000005F4
lbl_fn_8062E234_000005F0:
    lbz r5, 0x16(r3)
lbl_fn_8062E234_000005F4:
    lbz r0, lbl_80880188
    cmplwi r0, 0x4
    blt lbl_fn_8062E234_00000610
    lis r4, lbl_807B362C@ha
    li r3, 0x503
    addi r4, r4, lbl_807B362C@l
    bl fn_80629830
lbl_fn_8062E234_00000610:
    lbz r0, 0x15(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8062E234_00000630
    mr r3, r30
    mr r5, r31
    li r4, 0x170b
    bl fn_8062F470
    b lbl_fn_8062E234_00000660
lbl_fn_8062E234_00000630:
    li r0, 0x1
    addi r3, r1, 0x8
    stb r0, 0x19(r30)
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r1, 0x10
    addi r4, r30, 0x8
    bl fn_80629EA4
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8062DDA8
lbl_fn_8062E234_00000660:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062E2EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r8, r3
    stw r0, 0x14(r1)
    lwz r5, 0xc(r4)
    stw r5, 0x8(r1)
    lhz r0, 0x4(r5)
    lhz r3, 0x6(r4)
    add r4, r5, r0
    lhz r5, 0x2(r5)
    lbz r6, 0x1b(r8)
    clrlwi r3, r3, 24
    lbz r7, 0x13(r8)
    addi r4, r4, 0x8
    lbz r8, 0x15(r8)
    bl fn_806743E0
    addi r3, r1, 0x8
    bl fn_8062A5F0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062E344(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lis r30, lbl_807B34E8@ha
    addi r30, r30, lbl_807B34E8@l
    stw r29, 0x34(r1)
    mr r29, r4
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062E344_00000774
    lhz r0, 0x10(r3)
    cmplwi r0, 0x9
    bgt lbl_fn_8062E344_00000760
    lis r3, jumptable_807B3768@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B3768@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r30, 0x16c
    b lbl_fn_8062E344_00000764
    addi r5, r30, 0x180
    b lbl_fn_8062E344_00000764
    addi r5, r30, 0x194
    b lbl_fn_8062E344_00000764
    addi r5, r30, 0x1ac
    b lbl_fn_8062E344_00000764
    addi r5, r30, 0x1c4
    b lbl_fn_8062E344_00000764
    addi r5, r30, 0x1d8
    b lbl_fn_8062E344_00000764
    addi r5, r30, 0x1f0
    b lbl_fn_8062E344_00000764
lbl_fn_8062E344_00000760:
    addi r5, r30, 0x200
lbl_fn_8062E344_00000764:
    lwz r6, 0x8(r29)
    addi r4, r30, 0x210
    li r3, 0x504
    bl fn_80629850
lbl_fn_8062E344_00000774:
    lhz r0, 0x10(r31)
    cmplwi r0, 0x9
    bgt lbl_fn_8062E344_000008F4
    lis r3, jumptable_807B3740@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B3740@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0xa
    bl memset
    lbz r0, 0x16(r31)
    stb r0, 0x19(r1)
    lwz r0, 0x8(r29)
    cmpwi r0, 0x5
    bge lbl_fn_8062E344_000007CC
    cmpwi r0, 0x0
    beq lbl_fn_8062E344_000007D8
    bge lbl_fn_8062E344_000007E0
    b lbl_fn_8062E344_000007E8
lbl_fn_8062E344_000007CC:
    cmpwi r0, 0x10
    bge lbl_fn_8062E344_000007E8
    b lbl_fn_8062E344_000007E8
lbl_fn_8062E344_000007D8:
    li r0, 0x0
    b lbl_fn_8062E344_000007EC
lbl_fn_8062E344_000007E0:
    clrlwi r0, r0, 24
    b lbl_fn_8062E344_000007EC
lbl_fn_8062E344_000007E8:
    li r0, 0x5
lbl_fn_8062E344_000007EC:
    lis r3, lbl_8081FDE8@ha
    stb r0, 0x18(r1)
    addi r3, r3, lbl_8081FDE8@l
    addi r4, r1, 0x18
    lwz r12, 0x224(r3)
    lhz r3, 0x10(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    sth r0, 0x10(r31)
    b lbl_fn_8062E344_0000090C
    lbz r0, 0x16(r31)
    stb r0, 0x9(r1)
    lwz r0, 0x8(r29)
    cmpwi r0, 0x5
    bge lbl_fn_8062E344_0000083C
    cmpwi r0, 0x0
    beq lbl_fn_8062E344_00000848
    bge lbl_fn_8062E344_00000850
    b lbl_fn_8062E344_00000858
lbl_fn_8062E344_0000083C:
    cmpwi r0, 0x10
    bge lbl_fn_8062E344_00000858
    b lbl_fn_8062E344_00000858
lbl_fn_8062E344_00000848:
    li r0, 0x0
    b lbl_fn_8062E344_0000085C
lbl_fn_8062E344_00000850:
    clrlwi r0, r0, 24
    b lbl_fn_8062E344_0000085C
lbl_fn_8062E344_00000858:
    li r0, 0x5
lbl_fn_8062E344_0000085C:
    lis r3, lbl_8081FDE8@ha
    stb r0, 0x8(r1)
    addi r3, r3, lbl_8081FDE8@l
    addi r4, r1, 0x8
    lwz r12, 0x224(r3)
    lhz r3, 0x10(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    sth r0, 0x10(r31)
    b lbl_fn_8062E344_0000090C
    lwz r0, 0x8(r29)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8062E344_0000089C
    li r3, 0x8
lbl_fn_8062E344_0000089C:
    stb r3, 0x16(r1)
    addi r3, r1, 0x10
    addi r4, r31, 0x8
    lbz r0, 0x16(r31)
    stb r0, 0x17(r1)
    bl fn_80629EA4
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0x10
    addi r5, r5, lbl_8081FDE8@l
    lhz r3, 0x10(r31)
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    bl fn_8062FC90
    li r0, 0x0
    sth r0, 0x10(r31)
    lbz r0, 0x16(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8062E344_0000090C
    li r0, 0x1
    stb r0, 0x1a(r31)
    b lbl_fn_8062E344_0000090C
lbl_fn_8062E344_000008F4:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062E344_0000090C
    addi r4, r30, 0x23c
    li r3, 0x504
    bl fn_80629810
lbl_fn_8062E344_0000090C:
    lbz r4, 0x15(r31)
    addi r5, r31, 0x8
    li r3, 0x17
    bl fn_8062A164
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8062E5AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, lbl_807B34E8@ha
    addi r29, r29, lbl_807B34E8@l
    lwz r4, 0xc(r4)
    lbz r0, lbl_80880188
    stw r4, 0x8(r1)
    cmplwi r0, 0x5
    lhz r0, 0x4(r4)
    add r30, r4, r0
    blt lbl_fn_8062E5AC_000009E4
    lhz r0, 0x10(r3)
    cmplwi r0, 0x9
    bgt lbl_fn_8062E5AC_000009D4
    lis r3, jumptable_807B3814@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B3814@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r29, 0x16c
    b lbl_fn_8062E5AC_000009D8
    addi r5, r29, 0x180
    b lbl_fn_8062E5AC_000009D8
    addi r5, r29, 0x194
    b lbl_fn_8062E5AC_000009D8
    addi r5, r29, 0x1ac
    b lbl_fn_8062E5AC_000009D8
    addi r5, r29, 0x1c4
    b lbl_fn_8062E5AC_000009D8
    addi r5, r29, 0x1d8
    b lbl_fn_8062E5AC_000009D8
    addi r5, r29, 0x1f0
    b lbl_fn_8062E5AC_000009D8
lbl_fn_8062E5AC_000009D4:
    addi r5, r29, 0x200
lbl_fn_8062E5AC_000009D8:
    addi r4, r29, 0x2a8
    li r3, 0x504
    bl fn_80629830
lbl_fn_8062E5AC_000009E4:
    li r0, 0x0
    stb r0, 0xc(r1)
    lbz r0, 0x16(r31)
    stb r0, 0xd(r1)
    lhz r4, 0x10(r31)
    cmpwi r4, 0x7
    beq lbl_fn_8062E5AC_00000A54
    bge lbl_fn_8062E5AC_00000A1C
    cmpwi r4, 0x5
    beq lbl_fn_8062E5AC_00000A54
    bge lbl_fn_8062E5AC_00000A48
    cmpwi r4, 0x4
    bge lbl_fn_8062E5AC_00000A34
    b lbl_fn_8062E5AC_00000A54
lbl_fn_8062E5AC_00000A1C:
    cmpwi r4, 0x9
    beq lbl_fn_8062E5AC_00000A54
    bge lbl_fn_8062E5AC_00000A54
    lbz r0, 0x8(r30)
    stb r0, 0xe(r1)
    b lbl_fn_8062E5AC_00000AC8
lbl_fn_8062E5AC_00000A34:
    lwz r4, 0x8(r1)
    addi r3, r1, 0xe
    li r5, 0x8
    bl memcpy
    b lbl_fn_8062E5AC_00000AC8
lbl_fn_8062E5AC_00000A48:
    lbz r0, 0x8(r30)
    stb r0, 0xe(r1)
    b lbl_fn_8062E5AC_00000AC8
lbl_fn_8062E5AC_00000A54:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062E5AC_00000AC8
    cmplwi r4, 0x9
    bgt lbl_fn_8062E5AC_00000AB8
    lis r3, jumptable_807B37EC@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_807B37EC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r29, 0x16c
    b lbl_fn_8062E5AC_00000ABC
    addi r5, r29, 0x180
    b lbl_fn_8062E5AC_00000ABC
    addi r5, r29, 0x194
    b lbl_fn_8062E5AC_00000ABC
    addi r5, r29, 0x1ac
    b lbl_fn_8062E5AC_00000ABC
    addi r5, r29, 0x1c4
    b lbl_fn_8062E5AC_00000ABC
    addi r5, r29, 0x1d8
    b lbl_fn_8062E5AC_00000ABC
    addi r5, r29, 0x1f0
    b lbl_fn_8062E5AC_00000ABC
lbl_fn_8062E5AC_00000AB8:
    addi r5, r29, 0x200
lbl_fn_8062E5AC_00000ABC:
    addi r4, r29, 0x2cc
    li r3, 0x504
    bl fn_80629830
lbl_fn_8062E5AC_00000AC8:
    lbz r4, 0x15(r31)
    addi r5, r31, 0x8
    li r3, 0x17
    bl fn_8062A198
    lbz r4, 0x15(r31)
    addi r5, r31, 0x8
    li r3, 0x17
    bl fn_8062A164
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0xc
    addi r5, r5, lbl_8081FDE8@l
    lhz r3, 0x10(r31)
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    li r0, 0x0
    addi r3, r1, 0x8
    sth r0, 0x10(r31)
    bl fn_8062A5F0
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8062E7A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x3
    sth r0, 0xc(r1)
    lbz r0, 0x17(r3)
    lwz r6, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8062E7A4_00000B68
    li r30, 0xd
lbl_fn_8062E7A4_00000B68:
    lbz r5, 0x16(r3)
    rlwinm. r0, r6, 0, 21, 23
    stb r5, 0xd(r1)
    lwz r0, 0x8(r4)
    stb r0, 0xc(r1)
    bne lbl_fn_8062E7A4_00000B9C
    cmplwi r6, 0xf
    beq lbl_fn_8062E7A4_00000B9C
    cmplwi r6, 0xe
    beq lbl_fn_8062E7A4_00000B9C
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8062E7A4_00000BF0
lbl_fn_8062E7A4_00000B9C:
    lbz r3, 0x16(r3)
    cmplwi r6, 0xf
    li r0, 0x6
    stb r3, 0x17(r1)
    bne lbl_fn_8062E7A4_00000BB4
    li r0, 0xc
lbl_fn_8062E7A4_00000BB4:
    stb r0, 0x16(r1)
    addi r3, r1, 0x10
    addi r4, r31, 0x8
    bl fn_80629EA4
    lbz r3, 0x16(r31)
    bl fn_8063FE6C
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0x10
    addi r5, r5, lbl_8081FDE8@l
    li r3, 0x2
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    bl fn_8062FC90
    b lbl_fn_8062E7A4_00000D18
lbl_fn_8062E7A4_00000BF0:
    lbz r3, 0x16(r3)
    lbz r4, 0x15(r31)
    bl fn_80674420
    lbz r4, 0x15(r31)
    addi r5, r31, 0x8
    li r3, 0x17
    bl fn_8062A06C
    lis r4, lbl_8081FDE8@ha
    li r0, 0x0
    addi r4, r4, lbl_8081FDE8@l
    lbz r3, 0x22d(r4)
    subi r3, r3, 0x1
    stb r3, 0x22d(r4)
    stb r0, 0x1a(r31)
    lbz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8062E7A4_00000C3C
    li r0, 0x6
    stb r0, 0xc(r1)
lbl_fn_8062E7A4_00000C3C:
    lis r5, lbl_8081FDE8@ha
    mr r3, r30
    addi r5, r5, lbl_8081FDE8@l
    addi r4, r1, 0xc
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    lbz r0, 0x17(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8062E7A4_00000C74
    lbz r3, 0x16(r31)
    bl fn_8063FC00
    mr r3, r31
    bl fn_8062FB00
lbl_fn_8062E7A4_00000C74:
    bl fn_8062FC90
    li r4, 0x0
    lis r3, lbl_8081FDE8@ha
    stb r4, 0x17(r31)
    addi r3, r3, lbl_8081FDE8@l
    sth r4, 0x10(r31)
    lbz r0, 0x22d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8062E7A4_00000D18
    lbz r0, 0x22e(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062E7A4_00000D18
    stb r4, 0x8(r1)
    bl fn_8063F98C
    clrlwi. r0, r3, 24
    beq lbl_fn_8062E7A4_00000CBC
    li r0, 0x6
    stb r0, 0x8(r1)
lbl_fn_8062E7A4_00000CBC:
    lis r31, lbl_8081FDE8@ha
    li r30, 0x0
    addi r31, r31, lbl_8081FDE8@l
lbl_fn_8062E7A4_00000CC8:
    clrlslwi r0, r30, 24, 5
    add r3, r31, r0
    addi r3, r3, 0x14
    bl fn_8062A5F0
    addi r30, r30, 0x1
    cmplwi r30, 0x10
    blt lbl_fn_8062E7A4_00000CC8
    lis r31, lbl_8081FDE8@ha
    addi r31, r31, lbl_8081FDE8@l
    addi r3, r31, 0x228
    bl fn_8062A5F0
    lwz r12, 0x224(r31)
    addi r4, r1, 0x8
    li r3, 0x1
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x0
    li r5, 0x230
    bl memset
lbl_fn_8062E7A4_00000D18:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062E9A4(void)
{
    nofralloc
    lis r5, lbl_8081FDE8@ha
    mr r4, r3
    addi r5, r5, lbl_8081FDE8@l
    li r3, 0xa
    lwz r12, 0x224(r5)
    mtctr r12
    bctr
}

asm void fn_8062E9C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x6
    stw r0, 0x24(r1)
    li r0, 0xff
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stb r5, 0x16(r1)
    stb r0, 0x17(r1)
    lhz r0, 0x10(r4)
    cmpwi r0, 0xc
    beq lbl_fn_8062E9C0_00000E1C
    bge lbl_fn_8062E9C0_00000E60
    cmpwi r0, 0xb
    bge lbl_fn_8062E9C0_00000D94
    b lbl_fn_8062E9C0_00000E60
lbl_fn_8062E9C0_00000D94:
    addi r3, r1, 0x10
    addi r4, r4, 0x8
    bl fn_80629EA4
    lbz r3, 0x16(r30)
    cmplwi r3, 0xff
    bne lbl_fn_8062E9C0_00000E08
    lhz r4, 0xe(r31)
    addi r3, r31, 0x8
    addi r5, r1, 0x8
    bl fn_8063FA70
    clrlwi. r0, r3, 24
    bne lbl_fn_8062E9C0_00000E14
    lbz r4, 0x8(r1)
    li r0, 0x0
    stb r0, 0x16(r1)
    mr r3, r30
    li r6, 0x0
    stb r4, 0x17(r1)
    lhz r5, 0xe(r31)
    lbz r7, 0x12(r31)
    lbz r8, 0x13(r31)
    bl fn_8062FB80
    lis r3, lbl_8081FDE8@ha
    lbz r0, 0x8(r1)
    addi r3, r3, lbl_8081FDE8@l
    lbz r4, 0x12(r30)
    add r3, r3, r0
    stb r4, 0x214(r3)
    b lbl_fn_8062E9C0_00000E14
lbl_fn_8062E9C0_00000E08:
    li r0, 0x0
    stb r3, 0x17(r1)
    stb r0, 0x16(r1)
lbl_fn_8062E9C0_00000E14:
    bl fn_8062FC90
    b lbl_fn_8062E9C0_00000E7C
lbl_fn_8062E9C0_00000E1C:
    lhz r0, 0x6(r4)
    addi r3, r1, 0x10
    addi r4, r30, 0x8
    stb r0, 0x17(r1)
    bl fn_80629EA4
    lbz r0, 0x1c(r30)
    cmplwi r0, 0x3
    beq lbl_fn_8062E9C0_00000E7C
    lbz r3, 0x17(r1)
    bl fn_8063FC00
    clrlwi. r0, r3, 24
    bne lbl_fn_8062E9C0_00000E7C
    li r0, 0x0
    mr r3, r30
    stb r0, 0x16(r1)
    bl fn_8062FB00
    b lbl_fn_8062E9C0_00000E7C
lbl_fn_8062E9C0_00000E60:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062E9C0_00000E7C
    lis r4, lbl_807B3840@ha
    li r3, 0x504
    addi r4, r4, lbl_807B3840@l
    bl fn_80629810
lbl_fn_8062E9C0_00000E7C:
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0x10
    addi r5, r5, lbl_8081FDE8@l
    lhz r3, 0x10(r31)
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062EB24(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    addi r3, r1, 0x8
    li r31, 0x0
    li r4, 0x0
    li r5, 0x1e
    bl memset
    lis r30, lbl_80822CD8@ha
    lis r29, lbl_8081FDE8@ha
    addi r30, r30, lbl_80822CD8@l
    li r27, 0x0
    addi r29, r29, lbl_8081FDE8@l
lbl_fn_8062EB24_00000EEC:
    clrlslwi r0, r27, 24, 5
    add r3, r29, r0
    lbz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062EB24_00000F6C
    lbz r0, 0x2c(r3)
    cmplwi r0, 0x3
    bne lbl_fn_8062EB24_00000F6C
    lbz r4, 0x26(r3)
    clrlwi r0, r31, 24
    mulli r5, r0, 0x6
    addi r28, r1, 0x8
    li r3, 0x0
    add r28, r28, r5
    mulli r0, r4, 0x34
    stb r4, 0x6(r28)
    add r4, r30, r0
    lhz r4, 0x16(r4)
    bl fn_80647A88
    cmpwi r3, 0x0
    beq lbl_fn_8062EB24_00000F68
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8062EB24_00000F68
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062EB24_00000F68
    lhz r0, 0x4c(r3)
    sth r0, 0x8(r28)
    lhz r0, 0x38(r3)
    sth r0, 0xa(r28)
lbl_fn_8062EB24_00000F68:
    addi r31, r31, 0x1
lbl_fn_8062EB24_00000F6C:
    addi r27, r27, 0x1
    cmplwi r27, 0x10
    blt lbl_fn_8062EB24_00000EEC
    lis r4, lbl_808230E0@ha
    lis r3, lbl_8081FDE8@ha
    addi r4, r4, lbl_808230E0@l
    clrlwi r0, r31, 24
    addi r3, r3, lbl_8081FDE8@l
    lhz r6, 0x4(r4)
    lhz r5, 0x2(r4)
    addi r4, r1, 0x8
    lwz r12, 0x224(r3)
    li r3, 0xf
    sth r6, 0x8(r1)
    sth r5, 0xa(r1)
    sth r0, 0xc(r1)
    mtctr r12
    bctrl
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8062EC40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    sth r0, 0x8(r1)
    lbz r31, 0x8(r4)
    lbz r0, 0x16(r3)
    stb r0, 0x9(r1)
    lbz r3, 0x16(r3)
    lbz r4, 0x8(r4)
    lbz r5, 0x9(r30)
    lhz r6, 0xc(r30)
    lbz r7, 0xa(r30)
    lwz r8, 0x10(r30)
    bl fn_8063FD2C
    clrlwi. r5, r3, 24
    beq lbl_fn_8062EC40_000010A8
    lbz r0, lbl_80880188
    cmplwi r0, 0x1
    blt lbl_fn_8062EC40_00001040
    lis r4, lbl_807B3850@ha
    li r3, 0x500
    addi r4, r4, lbl_807B3850@l
    bl fn_80629830
lbl_fn_8062EC40_00001040:
    li r0, 0x6
    stb r0, 0x8(r1)
    lbz r0, 0x8(r30)
    cmplwi r0, 0x1
    beq lbl_fn_8062EC40_0000107C
    cmplwi r0, 0xa
    beq lbl_fn_8062EC40_0000107C
    lis r5, lbl_8081FDE8@ha
    mr r3, r31
    addi r5, r5, lbl_8081FDE8@l
    addi r4, r1, 0x8
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    b lbl_fn_8062EC40_00001178
lbl_fn_8062EC40_0000107C:
    lbz r0, 0x9(r30)
    cmplwi r0, 0x5
    bne lbl_fn_8062EC40_00001178
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_8081FDE8@l
    li r3, 0xd
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    b lbl_fn_8062EC40_00001178
lbl_fn_8062EC40_000010A8:
    lbz r5, 0x8(r30)
    cmpwi r5, 0xa
    beq lbl_fn_8062EC40_000010DC
    bge lbl_fn_8062EC40_000010F4
    cmpwi r5, 0x1
    beq lbl_fn_8062EC40_000010DC
    blt lbl_fn_8062EC40_000010F4
    cmpwi r5, 0x4
    bge lbl_fn_8062EC40_000010D4
    b lbl_fn_8062EC40_000010F4
    b lbl_fn_8062EC40_000010F4
lbl_fn_8062EC40_000010D4:
    sth r31, 0x10(r29)
    b lbl_fn_8062EC40_00001110
lbl_fn_8062EC40_000010DC:
    lbz r0, 0x9(r30)
    cmplwi r0, 0x5
    bne lbl_fn_8062EC40_00001110
    li r0, 0x1
    stb r0, 0x17(r29)
    b lbl_fn_8062EC40_00001110
lbl_fn_8062EC40_000010F4:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062EC40_00001110
    lis r4, lbl_807B386C@ha
    li r3, 0x504
    addi r4, r4, lbl_807B386C@l
    bl fn_80629830
lbl_fn_8062EC40_00001110:
    lbz r0, 0x8(r30)
    cmplwi r0, 0x1
    beq lbl_fn_8062EC40_00001140
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl fn_8062A198
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl fn_8062A164
    b lbl_fn_8062EC40_00001178
lbl_fn_8062EC40_00001140:
    lbz r0, 0x9(r30)
    cmplwi r0, 0x3
    bne lbl_fn_8062EC40_00001160
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl fn_8062A130
    b lbl_fn_8062EC40_00001178
lbl_fn_8062EC40_00001160:
    cmplwi r0, 0x4
    bne lbl_fn_8062EC40_00001178
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl fn_8062A198
lbl_fn_8062EC40_00001178:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062EE08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_807B34E8@ha
    stw r0, 0x24(r1)
    addi r7, r7, lbl_807B34E8@l
    stw r31, 0x1c(r1)
    li r31, 0x1710
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, lbl_80880188
    stw r6, 0x8(r1)
    cmplwi r0, 0x5
    blt lbl_fn_8062EE08_00001250
    cmplwi r4, 0x8
    bgt lbl_fn_8062EE08_00001240
    lis r3, jumptable_807B39BC@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_807B39BC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r7, 0x3ac
    b lbl_fn_8062EE08_00001244
    addi r5, r7, 0x3c0
    b lbl_fn_8062EE08_00001244
    addi r5, r7, 0x3d4
    b lbl_fn_8062EE08_00001244
    addi r5, r7, 0x3ec
    b lbl_fn_8062EE08_00001244
    addi r5, r7, 0x404
    b lbl_fn_8062EE08_00001244
    addi r5, r7, 0x41c
    b lbl_fn_8062EE08_00001244
    addi r5, r7, 0x434
    b lbl_fn_8062EE08_00001244
    addi r5, r7, 0x44c
    b lbl_fn_8062EE08_00001244
    addi r5, r7, 0x464
    b lbl_fn_8062EE08_00001244
lbl_fn_8062EE08_00001240:
    addi r5, r7, 0x47c
lbl_fn_8062EE08_00001244:
    addi r4, r7, 0x490
    li r3, 0x504
    bl fn_80629830
lbl_fn_8062EE08_00001250:
    cmplwi r29, 0x8
    bgt lbl_fn_8062EE08_000013DC
    lis r3, jumptable_807B3998@ha
    slwi r0, r29, 2
    addi r3, r3, jumptable_807B3998@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r31, 0x1702
    b lbl_fn_8062EE08_000013DC
    li r31, 0x1703
    b lbl_fn_8062EE08_000013DC
    li r31, 0x1704
    b lbl_fn_8062EE08_000013DC
    li r31, 0x1706
    b lbl_fn_8062EE08_000013DC
    li r31, 0x1705
    b lbl_fn_8062EE08_000013DC
    addi r3, r1, 0x8
    bl fn_8062A5F0
    b lbl_fn_8062EE08_000013DC
    lis r4, lbl_8081FDE8@ha
    li r0, 0x2
    addi r4, r4, lbl_8081FDE8@l
    li r5, 0x0
    mtctr r0
lbl_fn_8062EE08_000012B8:
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_fn_8062EE08_000012D8
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_fn_8062EE08_000013DC
lbl_fn_8062EE08_000012D8:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_fn_8062EE08_000012FC
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_fn_8062EE08_000013DC
lbl_fn_8062EE08_000012FC:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_fn_8062EE08_00001320
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_fn_8062EE08_000013DC
lbl_fn_8062EE08_00001320:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_fn_8062EE08_00001344
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_fn_8062EE08_000013DC
lbl_fn_8062EE08_00001344:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_fn_8062EE08_00001368
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_fn_8062EE08_000013DC
lbl_fn_8062EE08_00001368:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_fn_8062EE08_0000138C
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_fn_8062EE08_000013DC
lbl_fn_8062EE08_0000138C:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_fn_8062EE08_000013B0
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_fn_8062EE08_000013DC
lbl_fn_8062EE08_000013B0:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_fn_8062EE08_000013D4
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_fn_8062EE08_000013DC
lbl_fn_8062EE08_000013D4:
    addi r5, r5, 0x1
    bdnz lbl_fn_8062EE08_000012B8
lbl_fn_8062EE08_000013DC:
    cmplwi r31, 0x1710
    beq lbl_fn_8062EE08_0000140C
    li r3, 0x18
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062EE08_0000140C
    sth r31, 0x0(r3)
    sth r28, 0x6(r3)
    stw r30, 0x8(r3)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r3)
    bl fn_8062A350
lbl_fn_8062EE08_0000140C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062F0A0(void)
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
    bl fn_80628150
    li r3, 0x17
    la r4, lbl_80888870
    bl fn_8062A33C
    bl fn_80628160
    li r3, 0x34
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062F0A0_00001498
    li r4, 0x0
    li r5, 0x34
    bl memset
    li r0, 0x170c
    mr r3, r31
    sth r0, 0x0(r31)
    stw r30, 0x30(r31)
    stb r29, 0x8(r31)
    bl fn_8062A350
lbl_fn_8062F0A0_00001498:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062F128(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x8
    stw r0, 0x14(r1)
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062F128_000014DC
    li r0, 0x170d
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062F128_000014DC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062F160(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x8
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062F160_00001538
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x1701
    mr r3, r31
    sth r0, 0x0(r31)
    sth r30, 0x6(r31)
    bl fn_8062A350
lbl_fn_8062F160_00001538:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062F1C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x10
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062F1C4_000015C8
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r3, 0x1700
    li r0, 0xff
    sth r3, 0x0(r31)
    mr r4, r28
    addi r3, r31, 0x8
    sth r0, 0x6(r31)
    stb r30, 0xe(r31)
    stb r29, 0xf(r31)
    bl fn_80629EA4
    mr r3, r31
    bl fn_8062A350
    b lbl_fn_8062F1C4_000015E4
lbl_fn_8062F1C4_000015C8:
    lbz r0, lbl_80880188
    cmplwi r0, 0x1
    blt lbl_fn_8062F1C4_000015E4
    lis r4, lbl_807B39E0@ha
    li r3, 0x500
    addi r4, r4, lbl_807B39E0@l
    bl fn_80629810
lbl_fn_8062F1C4_000015E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062F278(void)
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
    li r3, 0x14
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062F278_00001678
    li r4, 0x0
    li r5, 0x14
    bl memset
    li r0, 0x1708
    li r5, 0xa
    sth r0, 0x0(r31)
    li r4, 0x0
    li r0, 0x2
    mr r3, r31
    sth r29, 0x6(r31)
    stb r5, 0x8(r31)
    sth r4, 0xc(r31)
    stb r0, 0x9(r31)
    stw r30, 0x10(r31)
    stb r4, 0xa(r31)
    bl fn_8062A350
lbl_fn_8062F278_00001678:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062F308(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r3, 0x1c
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062F308_00001724
    li r4, 0x0
    li r5, 0x1c
    bl memset
    li r0, 0x170a
    li r5, 0xb
    sth r0, 0x0(r31)
    li r0, 0xff
    mr r4, r30
    addi r3, r31, 0x14
    sth r5, 0x10(r31)
    li r5, 0x8
    sth r0, 0x6(r31)
    sth r27, 0xe(r31)
    stb r28, 0x12(r31)
    stb r29, 0x13(r31)
    bl memcpy
    mr r4, r26
    addi r3, r31, 0x8
    bl fn_80629EA4
    mr r3, r31
    bl fn_8062A350
lbl_fn_8062F308_00001724:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062F3B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x1c
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062F3B0_00001790
    li r4, 0x0
    li r5, 0x1c
    bl memset
    li r3, 0x170a
    li r0, 0xc
    sth r3, 0x0(r31)
    mr r3, r31
    sth r0, 0x10(r31)
    sth r30, 0x6(r31)
    bl fn_8062A350
lbl_fn_8062F3B0_00001790:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062F41C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062F41C_000017E8
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x170e
    mr r3, r31
    sth r0, 0x0(r31)
    bl fn_8062A350
lbl_fn_8062F41C_000017E8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062F470(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lis r31, lbl_807B3A10@ha
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_807B3A10@l
    addi r3, r1, 0x8
    li r30, 0x0
    li r4, 0x0
    li r5, 0x20
    bl memset
    cmpwi r27, 0x0
    bne lbl_fn_8062F470_00001994
    lis r3, lbl_8081FDE8@ha
    addi r3, r3, lbl_8081FDE8@l
    lwz r0, 0x224(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062F470_00001B38
    cmpwi r28, 0x1708
    beq lbl_fn_8062F470_000018E8
    bge lbl_fn_8062F470_00001878
    cmpwi r28, 0x1701
    beq lbl_fn_8062F470_0000193C
    bge lbl_fn_8062F470_00001954
    cmpwi r28, 0x1700
    bge lbl_fn_8062F470_00001884
    b lbl_fn_8062F470_00001954
lbl_fn_8062F470_00001878:
    cmpwi r28, 0x170a
    beq lbl_fn_8062F470_000018A8
    b lbl_fn_8062F470_00001954
lbl_fn_8062F470_00001884:
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    li r30, 0x2
    bl fn_80629EA4
    li r3, 0x9
    li r0, 0xff
    stb r3, 0xe(r1)
    stb r0, 0xf(r1)
    b lbl_fn_8062F470_00001970
lbl_fn_8062F470_000018A8:
    lhz r30, 0x10(r29)
    cmplwi r30, 0xb
    bne lbl_fn_8062F470_000018D4
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    bl fn_80629EA4
    li r3, 0x9
    li r0, 0xff
    stb r3, 0xe(r1)
    stb r0, 0xf(r1)
    b lbl_fn_8062F470_00001970
lbl_fn_8062F470_000018D4:
    li r0, 0xd
    stb r0, 0xe(r1)
    lhz r0, 0x6(r29)
    stb r0, 0xf(r1)
    b lbl_fn_8062F470_00001970
lbl_fn_8062F470_000018E8:
    lbz r30, 0x8(r29)
    cmplwi r30, 0x7
    beq lbl_fn_8062F470_00001904
    cmplwi r30, 0x5
    beq lbl_fn_8062F470_00001904
    cmplwi r30, 0x9
    bne lbl_fn_8062F470_00001918
lbl_fn_8062F470_00001904:
    li r0, 0xd
    stb r0, 0x8(r1)
    lhz r0, 0x6(r29)
    stb r0, 0x9(r1)
    b lbl_fn_8062F470_00001970
lbl_fn_8062F470_00001918:
    cmplwi r30, 0xa
    beq lbl_fn_8062F470_00001970
    cmplwi r30, 0x1
    beq lbl_fn_8062F470_00001970
    lhz r3, 0x6(r29)
    li r0, 0xd
    stb r3, 0x9(r1)
    stb r0, 0x8(r1)
    b lbl_fn_8062F470_00001970
lbl_fn_8062F470_0000193C:
    li r0, 0xd
    li r30, 0x3
    stb r0, 0x8(r1)
    lhz r0, 0x6(r29)
    stb r0, 0x9(r1)
    b lbl_fn_8062F470_00001970
lbl_fn_8062F470_00001954:
    lbz r0, lbl_80880188
    cmplwi r0, 0x1
    blt lbl_fn_8062F470_00001970
    lhz r5, 0x6(r29)
    addi r4, r31, 0x0
    li r3, 0x500
    bl fn_80629830
lbl_fn_8062F470_00001970:
    clrlwi. r3, r30, 16
    beq lbl_fn_8062F470_00001B38
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_8081FDE8@l
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    b lbl_fn_8062F470_00001B38
lbl_fn_8062F470_00001994:
    lbz r0, lbl_80880188
    lbz r30, 0x1c(r27)
    cmplwi r0, 0x4
    blt lbl_fn_8062F470_00001A10
    cmpwi r30, 0x2
    beq lbl_fn_8062F470_000019DC
    bge lbl_fn_8062F470_000019C0
    cmpwi r30, 0x0
    beq lbl_fn_8062F470_000019CC
    bge lbl_fn_8062F470_000019D4
    b lbl_fn_8062F470_000019EC
lbl_fn_8062F470_000019C0:
    cmpwi r30, 0x4
    bge lbl_fn_8062F470_000019EC
    b lbl_fn_8062F470_000019E4
lbl_fn_8062F470_000019CC:
    addi r26, r31, 0x1c
    b lbl_fn_8062F470_000019F0
lbl_fn_8062F470_000019D4:
    addi r26, r31, 0x2c
    b lbl_fn_8062F470_000019F0
lbl_fn_8062F470_000019DC:
    addi r26, r31, 0x3c
    b lbl_fn_8062F470_000019F0
lbl_fn_8062F470_000019E4:
    addi r26, r31, 0x50
    b lbl_fn_8062F470_000019F0
lbl_fn_8062F470_000019EC:
    addi r26, r31, 0x60
lbl_fn_8062F470_000019F0:
    mr r3, r28
    bl fn_8062F910
    mr r7, r3
    mr r5, r30
    mr r6, r26
    addi r4, r31, 0x78
    li r3, 0x503
    bl fn_80629870
lbl_fn_8062F470_00001A10:
    lbz r4, 0x1c(r27)
    lis r3, lbl_80764F40@ha
    addi r3, r3, lbl_80764F40@l
    clrlwi r28, r28, 24
    subi r0, r4, 0x1
    slwi r0, r0, 2
    slwi r4, r28, 1
    lwzx r5, r3, r0
    add r3, r5, r4
    lbz r0, 0x1(r3)
    stb r0, 0x1c(r27)
    lbzx r0, r5, r4
    cmplwi r0, 0xc
    beq lbl_fn_8062F470_00001A68
    lis r4, lbl_80764EC8@ha
    clrlslwi r0, r0, 24, 2
    addi r4, r4, lbl_80764EC8@l
    mr r3, r27
    lwzx r12, r4, r0
    mr r4, r29
    mtctr r12
    bctrl
lbl_fn_8062F470_00001A68:
    lbz r3, 0x1c(r27)
    cmplw r30, r3
    beq lbl_fn_8062F470_00001B38
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062F470_00001B38
    cmpwi r30, 0x2
    beq lbl_fn_8062F470_00001AB8
    bge lbl_fn_8062F470_00001A9C
    cmpwi r30, 0x0
    beq lbl_fn_8062F470_00001AA8
    bge lbl_fn_8062F470_00001AB0
    b lbl_fn_8062F470_00001AC8
lbl_fn_8062F470_00001A9C:
    cmpwi r30, 0x4
    bge lbl_fn_8062F470_00001AC8
    b lbl_fn_8062F470_00001AC0
lbl_fn_8062F470_00001AA8:
    addi r26, r31, 0x1c
    b lbl_fn_8062F470_00001ACC
lbl_fn_8062F470_00001AB0:
    addi r26, r31, 0x2c
    b lbl_fn_8062F470_00001ACC
lbl_fn_8062F470_00001AB8:
    addi r26, r31, 0x3c
    b lbl_fn_8062F470_00001ACC
lbl_fn_8062F470_00001AC0:
    addi r26, r31, 0x50
    b lbl_fn_8062F470_00001ACC
lbl_fn_8062F470_00001AC8:
    addi r26, r31, 0x60
lbl_fn_8062F470_00001ACC:
    cmpwi r3, 0x2
    beq lbl_fn_8062F470_00001B04
    bge lbl_fn_8062F470_00001AE8
    cmpwi r3, 0x0
    beq lbl_fn_8062F470_00001AF4
    bge lbl_fn_8062F470_00001AFC
    b lbl_fn_8062F470_00001B14
lbl_fn_8062F470_00001AE8:
    cmpwi r3, 0x4
    bge lbl_fn_8062F470_00001B14
    b lbl_fn_8062F470_00001B0C
lbl_fn_8062F470_00001AF4:
    addi r27, r31, 0x1c
    b lbl_fn_8062F470_00001B18
lbl_fn_8062F470_00001AFC:
    addi r27, r31, 0x2c
    b lbl_fn_8062F470_00001B18
lbl_fn_8062F470_00001B04:
    addi r27, r31, 0x3c
    b lbl_fn_8062F470_00001B18
lbl_fn_8062F470_00001B0C:
    addi r27, r31, 0x50
    b lbl_fn_8062F470_00001B18
lbl_fn_8062F470_00001B14:
    addi r27, r31, 0x60
lbl_fn_8062F470_00001B18:
    mr r3, r28
    bl fn_8062F910
    mr r7, r3
    mr r5, r26
    mr r6, r27
    addi r4, r31, 0xac
    li r3, 0x504
    bl fn_80629870
lbl_fn_8062F470_00001B38:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8062F7C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x10
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r0, 0x0(r3)
    cmpwi r0, 0x170e
    beq lbl_fn_8062F7C4_00001BB4
    bge lbl_fn_8062F7C4_00001B90
    cmpwi r0, 0x170c
    beq lbl_fn_8062F7C4_00001B9C
    bge lbl_fn_8062F7C4_00001BA4
    b lbl_fn_8062F7C4_00001BBC
lbl_fn_8062F7C4_00001B90:
    cmpwi r0, 0x1710
    bge lbl_fn_8062F7C4_00001BBC
    b lbl_fn_8062F7C4_00001BAC
lbl_fn_8062F7C4_00001B9C:
    bl fn_8062D958
    b lbl_fn_8062F7C4_00001C80
lbl_fn_8062F7C4_00001BA4:
    bl fn_8062DACC
    b lbl_fn_8062F7C4_00001C80
lbl_fn_8062F7C4_00001BAC:
    bl fn_8062DBD0
    b lbl_fn_8062F7C4_00001C80
lbl_fn_8062F7C4_00001BB4:
    bl fn_8062EB24
    b lbl_fn_8062F7C4_00001C80
lbl_fn_8062F7C4_00001BBC:
    cmplwi r0, 0x1700
    bne lbl_fn_8062F7C4_00001BD4
    addi r3, r3, 0x8
    bl fn_8062F9C4
    mr r6, r3
    b lbl_fn_8062F7C4_00001C2C
lbl_fn_8062F7C4_00001BD4:
    cmplwi r0, 0x170a
    bne lbl_fn_8062F7C4_00001C10
    lhz r0, 0x10(r3)
    cmplwi r0, 0xb
    bne lbl_fn_8062F7C4_00001BF8
    addi r3, r3, 0x8
    bl fn_8062F9C4
    mr r6, r3
    b lbl_fn_8062F7C4_00001C2C
lbl_fn_8062F7C4_00001BF8:
    lis r4, lbl_8081FDE8@ha
    lhz r0, 0x6(r3)
    addi r4, r4, lbl_8081FDE8@l
    add r3, r4, r0
    lbz r6, 0x214(r3)
    b lbl_fn_8062F7C4_00001C2C
lbl_fn_8062F7C4_00001C10:
    lhz r0, 0x6(r3)
    cmplwi r0, 0x10
    bge lbl_fn_8062F7C4_00001C2C
    lis r3, lbl_8081FDE8@ha
    addi r3, r3, lbl_8081FDE8@l
    add r3, r3, r0
    lbz r6, 0x214(r3)
lbl_fn_8062F7C4_00001C2C:
    clrlwi r0, r6, 24
    cmplwi r0, 0x10
    beq lbl_fn_8062F7C4_00001C4C
    lis r3, lbl_8081FDE8@ha
    clrlslwi r0, r6, 24, 5
    addi r3, r3, lbl_8081FDE8@l
    add r3, r3, r0
    addi r31, r3, 0x10
lbl_fn_8062F7C4_00001C4C:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062F7C4_00001C70
    lis r4, lbl_807B3AEC@ha
    lhz r5, 0x6(r30)
    addi r4, r4, lbl_807B3AEC@l
    clrlwi r6, r6, 24
    li r3, 0x504
    bl fn_80629850
lbl_fn_8062F7C4_00001C70:
    lhz r4, 0x0(r30)
    mr r3, r31
    mr r5, r30
    bl fn_8062F470
lbl_fn_8062F7C4_00001C80:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062F910(void)
{
    nofralloc
    subi r0, r3, 0x1700
    lis r4, lbl_807B3A10@ha
    cmplwi r0, 0xf
    addi r4, r4, lbl_807B3A10@l
    bgt lbl_fn_8062F910_00001D48
    lis r3, jumptable_807B3CB0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B3CB0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r4, 0x108
    blr
    addi r3, r4, 0x120
    blr
    addi r3, r4, 0x138
    blr
    addi r3, r4, 0x14c
    blr
    addi r3, r4, 0x164
    blr
    addi r3, r4, 0x178
    blr
    addi r3, r4, 0x190
    blr
    addi r3, r4, 0x1a8
    blr
    addi r3, r4, 0x1bc
    blr
    addi r3, r4, 0x1d4
    blr
    addi r3, r4, 0x1f0
    blr
    addi r3, r4, 0x204
    blr
    addi r3, r4, 0x21c
    blr
    addi r3, r4, 0x238
    blr
    addi r3, r4, 0x250
    blr
    addi r3, r4, 0x268
    blr
lbl_fn_8062F910_00001D48:
    addi r3, r4, 0x284
    blr
}

asm void fn_8062F9C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8081FDE8@ha
    lis r30, lbl_807B3CF0@ha
    mr r27, r3
    li r28, 0x0
    addi r30, r30, lbl_807B3CF0@l
    addi r31, r31, lbl_8081FDE8@l
lbl_fn_8062F9C4_00001D7C:
    clrlslwi r29, r28, 24, 5
    mr r3, r27
    add r4, r31, r29
    addi r4, r4, 0x18
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062F9C4_00001DD8
    mr r3, r27
    la r4, lbl_808893A8
    bl fn_80629ED8
    cmpwi r3, 0x0
    beq lbl_fn_8062F9C4_00001DD8
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062F9C4_00001DD0
    add r3, r31, r29
    addi r4, r30, 0x0
    lbz r6, 0x26(r3)
    clrlwi r5, r28, 24
    li r3, 0x504
    bl fn_80629850
lbl_fn_8062F9C4_00001DD0:
    mr r3, r28
    b lbl_fn_8062F9C4_00001E74
lbl_fn_8062F9C4_00001DD8:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062F9C4_00001E04
    add r8, r31, r29
    addi r4, r30, 0x24
    lbz r5, 0x28(r8)
    clrlwi r6, r28, 24
    lbz r7, 0x26(r8)
    li r3, 0x504
    lbz r8, 0x2c(r8)
    bl fn_80629890
lbl_fn_8062F9C4_00001E04:
    addi r28, r28, 0x1
    cmplwi r28, 0x10
    blt lbl_fn_8062F9C4_00001D7C
    lis r4, lbl_8081FDE8@ha
    li r0, 0x10
    addi r4, r4, lbl_8081FDE8@l
    li r29, 0x0
    mtctr r0
lbl_fn_8062F9C4_00001E24:
    clrlslwi r0, r29, 24, 5
    add r3, r4, r0
    lbz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8062F9C4_00001E48
    mr r4, r27
    addi r3, r3, 0x18
    bl fn_80629EA4
    b lbl_fn_8062F9C4_00001E50
lbl_fn_8062F9C4_00001E48:
    addi r29, r29, 0x1
    bdnz lbl_fn_8062F9C4_00001E24
lbl_fn_8062F9C4_00001E50:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062F9C4_00001E70
    addi r4, r30, 0x58
    clrlwi r5, r29, 24
    li r3, 0x504
    li r6, 0x10
    bl fn_80629850
lbl_fn_8062F9C4_00001E70:
    mr r3, r29
lbl_fn_8062F9C4_00001E74:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062FB00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r5, 0x16(r3)
    cmplwi r5, 0xff
    beq lbl_fn_8062FB00_00001EC4
    lis r4, lbl_8081FDE8@ha
    li r0, 0x10
    addi r4, r4, lbl_8081FDE8@l
    add r4, r4, r5
    stb r0, 0x214(r4)
lbl_fn_8062FB00_00001EC4:
    lbz r31, 0x12(r3)
    addi r3, r3, 0x4
    bl fn_8062A5F0
    mr r3, r30
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r3, 0x1
    li r0, 0xff
    stb r31, 0x12(r30)
    stb r3, 0x1c(r30)
    stb r0, 0x16(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062FB80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lbz r0, lbl_80880188
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmplwi r0, 0x5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    blt lbl_fn_8062FB80_00001F58
    lis r4, lbl_807B3D74@ha
    mr r5, r30
    addi r4, r4, lbl_807B3D74@l
    li r3, 0x504
    bl fn_80629830
lbl_fn_8062FB80_00001F58:
    li r0, 0x1
    cmpwi r29, 0x0
    stb r27, 0x16(r26)
    stb r0, 0x18(r26)
    sth r28, 0xe(r26)
    stb r30, 0x13(r26)
    stb r31, 0x15(r26)
    beq lbl_fn_8062FB80_00001FB0
    addi r3, r26, 0x4
    bl fn_8062A5F0
    lhz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8062FB80_00001FB0
    bl fn_80626AC0
    cmpwi r3, 0x0
    stw r3, 0x4(r26)
    beq lbl_fn_8062FB80_00001FB0
    lhz r0, 0x0(r29)
    sth r0, 0x0(r26)
    lwz r4, 0x4(r29)
    lhz r5, 0x0(r29)
    bl memcpy
lbl_fn_8062FB80_00001FB0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062FC3C(void)
{
    nofralloc
    lwz r7, lbl_8087EAA8
    extrwi r9, r4, 6, 24
    li r8, 0x0
    lbz r5, 0x0(r7)
    b lbl_fn_8062FC3C_00002008
lbl_fn_8062FC3C_00001FDC:
    lwz r4, 0x4(r7)
    clrlslwi r6, r8, 24, 1
    lbzx r0, r4, r6
    cmplw r9, r0
    bne lbl_fn_8062FC3C_00002004
    add r4, r4, r6
    lbz r0, 0x1(r4)
    stb r0, 0x15(r3)
    li r3, 0x1
    blr
lbl_fn_8062FC3C_00002004:
    addi r8, r8, 0x1
lbl_fn_8062FC3C_00002008:
    clrlwi r0, r8, 24
    cmplw r0, r5
    blt lbl_fn_8062FC3C_00001FDC
    li r3, 0x0
    blr
}

asm void fn_8062FC90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807B3CF0@ha
    addi r30, r30, lbl_807B3CF0@l
    stw r29, 0x14(r1)
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062FC90_00002054
    addi r4, r30, 0x1e4
    li r3, 0x504
    bl fn_80629810
lbl_fn_8062FC90_00002054:
    lis r3, lbl_8081FDE8@ha
    li r29, 0x0
    addi r31, r3, lbl_8081FDE8@l
lbl_fn_8062FC90_00002060:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062FC90_0000208C
    clrlslwi r0, r29, 24, 5
    addi r4, r30, 0x220
    add r7, r31, r0
    clrlwi r5, r29, 24
    lbz r6, 0x28(r7)
    li r3, 0x504
    lbz r7, 0x26(r7)
    bl fn_80629870
lbl_fn_8062FC90_0000208C:
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062FC90_000020BC
    clrlslwi r0, r29, 24, 5
    addi r4, r30, 0x244
    add r8, r31, r0
    li r3, 0x504
    lhz r5, 0x1e(r8)
    lbz r6, 0x2c(r8)
    lbz r7, 0x23(r8)
    lbz r8, 0x22(r8)
    bl fn_80629890
lbl_fn_8062FC90_000020BC:
    addi r29, r29, 0x1
    cmplwi r29, 0x10
    blt lbl_fn_8062FC90_00002060
    lbz r0, lbl_80880188
    cmplwi r0, 0x5
    blt lbl_fn_8062FC90_000020E0
    addi r4, r30, 0x280
    li r3, 0x504
    bl fn_80629810
lbl_fn_8062FC90_000020E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062FD70(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    li r4, 0x7d00
    addi r3, r3, lbl_80820018@l
    li r0, 0xff
    sth r4, 0x4c6(r3)
    stb r0, 0x27bf(r3)
    blr
}

asm void fn_8062FD8C(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    li r5, 0x0
    addi r4, r4, lbl_80820018@l
    lbz r0, 0x14d(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8062FD8C_0000213C
    lhz r0, 0x34(r4)
    cmplw r0, r3
    beq lbl_fn_8062FD8C_00002194
lbl_fn_8062FD8C_0000213C:
    lbz r0, 0x269(r4)
    li r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8062FD8C_00002158
    lhz r0, 0x150(r4)
    cmplw r0, r3
    beq lbl_fn_8062FD8C_00002194
lbl_fn_8062FD8C_00002158:
    lbz r0, 0x385(r4)
    li r5, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_8062FD8C_00002174
    lhz r0, 0x26c(r4)
    cmplw r0, r3
    beq lbl_fn_8062FD8C_00002194
lbl_fn_8062FD8C_00002174:
    lbz r0, 0x4a1(r4)
    li r5, 0x3
    cmpwi r0, 0x0
    beq lbl_fn_8062FD8C_00002190
    lhz r0, 0x388(r4)
    cmplw r0, r3
    beq lbl_fn_8062FD8C_00002194
lbl_fn_8062FD8C_00002190:
    li r5, 0x4
lbl_fn_8062FD8C_00002194:
    mr r3, r5
    blr
}
