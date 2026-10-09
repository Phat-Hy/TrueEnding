#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_80629E20(void);
extern void fn_80629E90(void);
extern void fn_80630CD8(void);
extern void fn_806357EC(void);
extern void fn_806373C8(void);
extern void fn_806380C0(void);
extern void fn_80642174(void);
extern void fn_80642310(void);
extern void fn_806423A0(void);
extern void fn_806425D4(void);
extern void fn_80642764(void);
extern void fn_8064281C(void);
extern void fn_806428EC(void);
extern void fn_80642990(void);
extern void fn_80642A34(void);
extern void fn_8064E72C(void);
extern void fn_8064EAA4(void);
extern void fn_8064EB64(void);
extern void fn_8064EC58(void);
extern void fn_8067E23C(void);

/* External data declarations */
extern u8 lbl_80764F80[];
extern u8 lbl_807B59E0[];
extern u8 lbl_807B59F8[];
extern u8 lbl_807B5A10[];
extern u8 lbl_807B5A30[];
extern u8 lbl_807B5B48[];
extern u8 lbl_807B5B68[];
extern u8 lbl_807B5B8C[];
extern u8 lbl_807B5CAC[];
extern u8 lbl_807B5D64[];
extern u8 lbl_807B5D90[];
extern u8 lbl_807B5DE8[];
extern u8 lbl_807B5E14[];
extern u8 lbl_807B5E38[];
extern u8 lbl_807B5E68[];
extern u8 lbl_807B5E90[];
extern u8 lbl_807B5EC8[];
extern u8 lbl_807B5F00[];
extern u8 lbl_80822B90[];
extern u8 lbl_80822CD8[];

/* Small data declarations */

/* Function declarations */
void fn_8063EE48(void);
void fn_8063EEB0(void);
void fn_8063EF70(void);
void fn_8063F038(void);
void fn_8063F210(void);
void fn_8063F368(void);
void fn_8063F3B4(void);
void fn_8063F47C(void);
void fn_8063F8CC(void);
void fn_8063F910(void);
void fn_8063F98C(void);
void fn_8063FA70(void);
void fn_8063FC00(void);
void fn_8063FCC8(void);
void fn_8063FD2C(void);
void fn_8063FE6C(void);
void fn_8063FF0C(void);
void fn_80640134(void);
void fn_8064028C(void);
void fn_80640330(void);
void fn_80640460(void);
void fn_806406B8(void);
void fn_80640804(void);
void fn_80640A18(void);
void fn_80640D60(void);
void fn_80641008(void);
void fn_80641314(void);
void fn_806415D8(void);
void fn_80641820(void);
void fn_80641A18(void);
void fn_80641DB0(void);
void fn_8064204C(void);
void fn_80642148(void);

asm void fn_8063EE48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x144
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80822B90@ha
    addi r3, r31, lbl_80822B90@l
    bl memset
    lis r3, fn_8063EF70@ha
    addi r5, r31, lbl_80822B90@l
    li r6, 0x1
    li r4, 0x40
    addi r3, r3, fn_8063EF70@l
    li r0, 0x0
    stb r6, 0xca(r5)
    sth r4, 0xcc(r5)
    stb r6, 0x106(r5)
    sth r4, 0x108(r5)
    stw r3, 0x2c(r5)
    stb r0, 0x141(r5)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063EEB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80822B90@ha
    addi r29, r29, lbl_80822B90@l
    lbz r0, 0x141(r29)
    cmplwi r0, 0x4
    blt lbl_fn_8063EEB0_000000A8
    lis r3, 0x1e
    lis r4, lbl_807B59E0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B59E0@l
    bl fn_80629810
lbl_fn_8063EEB0_000000A8:
    li r0, 0x0
    li r30, 0x1
    lis r31, lbl_80822B90@ha
    sth r0, 0x14(r29)
    addi r4, r31, lbl_80822B90@l
    li r3, 0x11
    sth r0, 0x16(r29)
    stb r30, 0x11(r29)
    bl fn_806423A0
    clrlwi. r0, r3, 16
    sth r3, 0x14(r29)
    bne lbl_fn_8063EEB0_00000104
    addi r3, r31, lbl_80822B90@l
    lbz r0, 0x141(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8063EEB0_000000FC
    lis r3, 0x1e
    lis r4, lbl_807B59F8@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B59F8@l
    bl fn_80629810
lbl_fn_8063EEB0_000000FC:
    li r3, 0xe
    b lbl_fn_8063EEB0_0000010C
lbl_fn_8063EEB0_00000104:
    stb r30, 0x10(r29)
    li r3, 0x0
lbl_fn_8063EEB0_0000010C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063EF70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80822B90@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80822B90@l
    stw r31, 0xc(r1)
    lbz r0, 0x141(r3)
    cmplwi r0, 0x5
    blt lbl_fn_8063EF70_00000160
    lis r3, 0x1e
    lis r4, lbl_807B5A10@ha
    addi r3, r3, 0x4
    addi r4, r4, lbl_807B5A10@l
    bl fn_80629810
lbl_fn_8063EF70_00000160:
    lis r31, lbl_80822B90@ha
    addi r31, r31, lbl_80822B90@l
    lbz r3, 0x9(r31)
    addi r0, r3, 0x1
    stb r0, 0x9(r31)
    bl fn_8063EEB0
    clrlwi. r0, r3, 24
    beq lbl_fn_8063EF70_000001C4
    lbz r0, 0x9(r31)
    cmplwi r0, 0xf
    ble lbl_fn_8063EF70_000001B0
    lwz r12, 0xc4(r31)
    li r0, 0x0
    stb r0, 0x8(r31)
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8063EF70_000001DC
lbl_fn_8063EF70_000001B0:
    addi r3, r31, 0x1c
    li r4, 0x16
    li r5, 0x1
    bl fn_80629E20
    b lbl_fn_8063EF70_000001DC
lbl_fn_8063EF70_000001C4:
    lwz r12, 0xc4(r31)
    li r3, 0x2
    lbz r4, 0x9(r31)
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_8063EF70_000001DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063F038(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80822B90@ha
    li r5, 0x0
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80822B90@l
    stw r31, 0x1c(r1)
    lbz r0, 0x6e(r4)
    stw r5, 0xc(r1)
    cmpwi r0, 0x0
    stw r5, 0x10(r1)
    sth r5, 0x14(r1)
    stb r5, 0x8(r1)
    bne lbl_fn_8063F038_0000025C
    lbz r6, 0x6a(r4)
    lbz r5, 0x8(r3)
    cmplw r5, r6
    bne lbl_fn_8063F038_00000274
    cmpwi r5, 0x0
    beq lbl_fn_8063F038_0000025C
    lhz r4, 0x6c(r4)
    lhz r0, 0x2(r3)
    cmplw r4, r0
    blt lbl_fn_8063F038_00000274
    lhz r0, 0x0(r3)
    cmplw r4, r0
    bgt lbl_fn_8063F038_00000274
lbl_fn_8063F038_0000025C:
    lis r4, lbl_80822B90@ha
    li r0, 0xff
    addi r4, r4, lbl_80822B90@l
    li r3, 0x1
    stb r0, 0x78(r4)
    b lbl_fn_8063F038_000003B4
lbl_fn_8063F038_00000274:
    cmpwi r5, 0x2
    beq lbl_fn_8063F038_000002F8
    bge lbl_fn_8063F038_0000028C
    cmpwi r5, 0x0
    beq lbl_fn_8063F038_00000298
    b lbl_fn_8063F038_0000036C
lbl_fn_8063F038_0000028C:
    cmpwi r5, 0x4
    bge lbl_fn_8063F038_0000036C
    b lbl_fn_8063F038_00000334
lbl_fn_8063F038_00000298:
    cmplwi r6, 0x2
    bne lbl_fn_8063F038_000002C8
    lis r31, lbl_80822B90@ha
    addi r5, r1, 0xc
    addi r4, r31, lbl_80822B90@l
    li r3, 0x80
    bl fn_806357EC
    addi r4, r31, lbl_80822B90@l
    li r0, 0x1
    stb r3, 0x8(r1)
    stb r0, 0x6e(r4)
    b lbl_fn_8063F038_0000036C
lbl_fn_8063F038_000002C8:
    cmplwi r6, 0x3
    bne lbl_fn_8063F038_0000036C
    lis r31, lbl_80822B90@ha
    addi r5, r1, 0xc
    addi r4, r31, lbl_80822B90@l
    li r3, 0x80
    bl fn_806357EC
    addi r4, r31, lbl_80822B90@l
    li r0, 0x1
    stb r3, 0x8(r1)
    stb r0, 0x6e(r4)
    b lbl_fn_8063F038_0000036C
lbl_fn_8063F038_000002F8:
    cmpwi r6, 0x0
    beq lbl_fn_8063F038_0000030C
    addi r3, r1, 0xc
    bl fn_8063F038
    b lbl_fn_8063F038_0000036C
lbl_fn_8063F038_0000030C:
    lis r31, lbl_80822B90@ha
    mr r5, r3
    addi r4, r31, lbl_80822B90@l
    li r3, 0x80
    bl fn_806357EC
    addi r4, r31, lbl_80822B90@l
    li r0, 0x1
    stb r3, 0x8(r1)
    stb r0, 0x6e(r4)
    b lbl_fn_8063F038_0000036C
lbl_fn_8063F038_00000334:
    cmpwi r6, 0x0
    beq lbl_fn_8063F038_00000348
    addi r3, r1, 0xc
    bl fn_8063F038
    b lbl_fn_8063F038_0000036C
lbl_fn_8063F038_00000348:
    lis r31, lbl_80822B90@ha
    mr r5, r3
    addi r4, r31, lbl_80822B90@l
    li r3, 0x80
    bl fn_806357EC
    addi r4, r31, lbl_80822B90@l
    li r0, 0x1
    stb r3, 0x8(r1)
    stb r0, 0x6e(r4)
lbl_fn_8063F038_0000036C:
    lbz r4, 0x8(r1)
    cmplwi r4, 0x1
    bgt lbl_fn_8063F038_00000380
    li r3, 0x1
    b lbl_fn_8063F038_000003B4
lbl_fn_8063F038_00000380:
    lis r3, lbl_80822B90@ha
    addi r0, r4, 0x37
    addi r3, r3, lbl_80822B90@l
    stb r0, 0x8(r1)
    lwz r12, 0xc4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8063F038_000003B0
    lbz r4, 0x6f(r3)
    addi r5, r1, 0x8
    li r3, 0x4
    mtctr r12
    bctrl
lbl_fn_8063F038_000003B0:
    li r3, 0x0
lbl_fn_8063F038_000003B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063F210(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80822B90@ha
    addi r30, r30, lbl_80822B90@l
    stw r29, 0x14(r1)
    mr r29, r4
    lbz r0, 0x140(r30)
    stb r3, 0x8(r1)
    cmpwi r0, 0x0
    sth r5, 0xa(r1)
    beq lbl_fn_8063F210_00000504
    li r31, 0x0
    clrlwi. r0, r3, 24
    stb r31, 0x6e(r30)
    beq lbl_fn_8063F210_00000434
    lwz r12, 0xc4(r30)
    cmpwi r12, 0x0
    beq lbl_fn_8063F210_00000504
    addi r5, r1, 0x8
    lbz r4, 0x6f(r30)
    li r3, 0x4
    mtctr r12
    bctrl
    b lbl_fn_8063F210_00000504
lbl_fn_8063F210_00000434:
    lbz r0, 0x78(r30)
    clrlwi r3, r5, 16
    stb r4, 0x6a(r30)
    cmplwi r0, 0xff
    sth r5, 0x6c(r30)
    beq lbl_fn_8063F210_0000049C
    cmplw r0, r4
    bne lbl_fn_8063F210_00000474
    cmpwi r0, 0x0
    beq lbl_fn_8063F210_00000488
    lhz r0, 0x72(r30)
    cmplw r3, r0
    blt lbl_fn_8063F210_00000474
    lhz r0, 0x70(r30)
    cmplw r3, r0
    ble lbl_fn_8063F210_00000488
lbl_fn_8063F210_00000474:
    lis r3, lbl_80822B90@ha
    addi r3, r3, lbl_80822B90@l
    addi r3, r3, 0x70
    bl fn_8063F038
    b lbl_fn_8063F210_000004DC
lbl_fn_8063F210_00000488:
    lis r3, lbl_80822B90@ha
    li r0, 0xff
    addi r3, r3, lbl_80822B90@l
    stb r0, 0x78(r3)
    b lbl_fn_8063F210_000004DC
lbl_fn_8063F210_0000049C:
    cmpwi r4, 0x0
    bne lbl_fn_8063F210_000004DC
    addi r3, r30, 0x70
    addi r4, r30, 0x4c
    li r5, 0xa
    bl memcpy
    addi r3, r30, 0x4c
    bl fn_8063F038
    lis r3, fn_8063F368@ha
    stb r31, 0x6f(r30)
    addi r3, r3, fn_8063F368@l
    li r4, 0x16
    stw r3, 0x44(r30)
    addi r3, r30, 0x34
    li r5, 0x3c
    bl fn_80629E20
lbl_fn_8063F210_000004DC:
    lis r3, lbl_80822B90@ha
    addi r3, r3, lbl_80822B90@l
    lwz r12, 0xc4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8063F210_00000504
    mr r4, r29
    addi r5, r1, 0xa
    li r3, 0x3
    mtctr r12
    bctrl
lbl_fn_8063F210_00000504:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063F368(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0xa
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80822B90@ha
    addi r31, r31, lbl_80822B90@l
    addi r3, r31, 0x70
    addi r4, r31, 0x56
    bl memcpy
    addi r3, r31, 0x56
    bl fn_8063F038
    li r0, 0x1
    stb r0, 0x6f(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063F3B4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80822CD8@ha
    addi r31, r31, lbl_80822CD8@l
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lbz r0, 0x380(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063F3B4_000005B0
    li r3, 0x10
    b lbl_fn_8063F3B4_00000614
lbl_fn_8063F3B4_000005B0:
    li r7, 0x2
    li r0, 0x1124
    stw r4, 0x388(r31)
    mr r4, r5
    mr r3, r29
    addi r6, r1, 0x8
    sth r7, 0x8(r1)
    li r5, 0x1
    li r7, 0x0
    li r8, 0x0
    sth r0, 0xc(r1)
    bl fn_8064E72C
    lis r5, fn_8063F47C@ha
    mr r3, r28
    mr r4, r29
    addi r5, r5, fn_8063F47C@l
    bl fn_8064EAA4
    clrlwi. r0, r3, 24
    beq lbl_fn_8063F3B4_00000610
    li r0, 0x1
    stw r30, 0x384(r31)
    li r3, 0x0
    stb r0, 0x380(r31)
    b lbl_fn_8063F3B4_00000614
lbl_fn_8063F3B4_00000610:
    li r3, 0x3
lbl_fn_8063F3B4_00000614:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063F47C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x2
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    li r0, 0x1124
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    li r29, 0x0
    stw r28, 0x20(r1)
    lis r28, lbl_80822CD8@ha
    addi r28, r28, lbl_80822CD8@l
    sth r4, 0x8(r1)
    addi r30, r28, 0x38c
    lwz r4, 0x388(r28)
    sth r0, 0xc(r1)
    stb r29, 0x380(r28)
    beq lbl_fn_8063F47C_00000698
    lwz r12, 0x384(r28)
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8063F47C_00000A64
lbl_fn_8063F47C_00000698:
    mr r3, r4
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8064EC58
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8063F47C_000006D0
    lwz r12, 0x384(r28)
    li r3, 0xc
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8063F47C_00000A64
lbl_fn_8063F47C_000006D0:
    mr r3, r30
    li r4, 0x0
    li r5, 0x74
    bl memset
    mr r3, r31
    li r4, 0x206
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_00000748
    lhz r0, 0x6(r3)
    srawi r0, r0, 12
    cmpwi r0, 0x6
    bne lbl_fn_8063F47C_00000748
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_00000748
    lhz r0, 0x6(r3)
    srawi r0, r0, 12
    cmpwi r0, 0x6
    bne lbl_fn_8063F47C_00000748
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_00000748
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8063F47C_00000748
    lhz r3, 0x6(r4)
    srawi r0, r3, 12
    cmpwi r0, 0x4
    beq lbl_fn_8063F47C_0000076C
lbl_fn_8063F47C_00000748:
    lis r5, lbl_80822CD8@ha
    li r3, 0xd
    addi r5, r5, lbl_80822CD8@l
    li r4, 0x0
    lwz r12, 0x384(r5)
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8063F47C_00000A64
lbl_fn_8063F47C_0000076C:
    clrlwi. r0, r3, 20
    sth r0, 0x68(r30)
    beq lbl_fn_8063F47C_00000780
    addi r0, r4, 0x8
    stw r0, 0x6c(r30)
lbl_fn_8063F47C_00000780:
    mr r3, r31
    li r4, 0x204
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_000007A4
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063F47C_000007A4
    ori r29, r29, 0x1
lbl_fn_8063F47C_000007A4:
    mr r3, r31
    li r4, 0x205
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_000007CC
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063F47C_000007CC
    ori r0, r29, 0x4
    clrlwi r29, r0, 16
lbl_fn_8063F47C_000007CC:
    mr r3, r31
    li r4, 0x20d
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_000007F4
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063F47C_000007F4
    ori r0, r29, 0x2
    clrlwi r29, r0, 16
lbl_fn_8063F47C_000007F4:
    mr r3, r31
    li r4, 0x208
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_0000081C
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063F47C_0000081C
    ori r0, r29, 0x8
    clrlwi r29, r0, 16
lbl_fn_8063F47C_0000081C:
    mr r3, r31
    li r4, 0x209
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_00000844
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063F47C_00000844
    ori r0, r29, 0x10
    clrlwi r29, r0, 16
lbl_fn_8063F47C_00000844:
    mr r3, r31
    li r4, 0x20a
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_0000086C
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063F47C_0000086C
    ori r0, r29, 0x20
    clrlwi r29, r0, 16
lbl_fn_8063F47C_0000086C:
    mr r3, r31
    li r4, 0x100
    bl fn_8064EB64
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8063F47C_000008CC
    lhz r0, 0x6(r3)
    clrlwi r28, r0, 20
    cmplwi r28, 0x20
    bge lbl_fn_8063F47C_000008B0
    mr r3, r30
    mr r5, r28
    addi r4, r4, 0x8
    bl memcpy
    li r0, 0x0
    stbx r0, r30, r28
    b lbl_fn_8063F47C_000008D4
lbl_fn_8063F47C_000008B0:
    mr r3, r30
    addi r4, r4, 0x8
    li r5, 0x1f
    bl memcpy
    li r0, 0x0
    stb r0, 0x20(r30)
    b lbl_fn_8063F47C_000008D4
lbl_fn_8063F47C_000008CC:
    li r0, 0x0
    stb r0, 0x0(r30)
lbl_fn_8063F47C_000008D4:
    mr r3, r31
    li r4, 0x101
    bl fn_8064EB64
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8063F47C_00000938
    lhz r0, 0x6(r3)
    clrlwi r28, r0, 20
    cmplwi r28, 0x20
    bge lbl_fn_8063F47C_0000091C
    mr r5, r28
    addi r3, r30, 0x20
    addi r4, r4, 0x8
    bl memcpy
    add r3, r30, r28
    li r0, 0x0
    stb r0, 0x20(r3)
    b lbl_fn_8063F47C_00000940
lbl_fn_8063F47C_0000091C:
    addi r3, r30, 0x20
    addi r4, r4, 0x8
    li r5, 0x1f
    bl memcpy
    li r0, 0x0
    stb r0, 0x40(r30)
    b lbl_fn_8063F47C_00000940
lbl_fn_8063F47C_00000938:
    li r0, 0x0
    stb r0, 0x20(r30)
lbl_fn_8063F47C_00000940:
    mr r3, r31
    li r4, 0x102
    bl fn_8064EB64
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8063F47C_000009A4
    lhz r0, 0x6(r3)
    clrlwi r28, r0, 20
    cmplwi r28, 0x20
    bge lbl_fn_8063F47C_00000988
    mr r5, r28
    addi r3, r30, 0x40
    addi r4, r4, 0x8
    bl memcpy
    add r3, r30, r28
    li r0, 0x0
    stb r0, 0x40(r3)
    b lbl_fn_8063F47C_000009AC
lbl_fn_8063F47C_00000988:
    addi r3, r30, 0x40
    addi r4, r4, 0x8
    li r5, 0x1f
    bl memcpy
    li r0, 0x0
    stb r0, 0x60(r30)
    b lbl_fn_8063F47C_000009AC
lbl_fn_8063F47C_000009A4:
    li r0, 0x0
    stb r0, 0x40(r30)
lbl_fn_8063F47C_000009AC:
    mr r3, r31
    li r4, 0x200
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_000009C8
    lhz r0, 0x8(r3)
    sth r0, 0x60(r30)
lbl_fn_8063F47C_000009C8:
    mr r3, r31
    li r4, 0x203
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_000009E4
    lbz r0, 0x8(r3)
    stb r0, 0x65(r30)
lbl_fn_8063F47C_000009E4:
    mr r3, r31
    li r4, 0x202
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_00000A00
    lbz r0, 0x8(r3)
    stb r0, 0x64(r30)
lbl_fn_8063F47C_00000A00:
    mr r3, r31
    li r4, 0x201
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_00000A1C
    lhz r0, 0x8(r3)
    sth r0, 0x62(r30)
lbl_fn_8063F47C_00000A1C:
    mr r3, r31
    li r4, 0x20c
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8063F47C_00000A40
    lhz r0, 0x8(r3)
    ori r3, r29, 0x40
    clrlwi r29, r3, 16
    sth r0, 0x66(r30)
lbl_fn_8063F47C_00000A40:
    lis r6, lbl_80822CD8@ha
    clrlwi r4, r29, 16
    addi r6, r6, lbl_80822CD8@l
    li r3, 0x0
    lwz r12, 0x384(r6)
    addi r5, r6, 0x38c
    stw r31, 0x3fc(r6)
    mtctr r12
    bctrl
lbl_fn_8063F47C_00000A64:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063F8CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x404
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80822CD8@ha
    addi r3, r31, lbl_80822CD8@l
    bl memset
    addi r3, r31, lbl_80822CD8@l
    li r0, 0x0
    stb r0, 0x401(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063F910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80822CD8@ha
    addi r31, r31, lbl_80822CD8@l
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x400(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8063F910_00000AFC
    li r3, 0x2
    b lbl_fn_8063F910_00000B2C
lbl_fn_8063F910_00000AFC:
    cmpwi r3, 0x0
    bne lbl_fn_8063F910_00000B0C
    li r3, 0x5
    b lbl_fn_8063F910_00000B2C
lbl_fn_8063F910_00000B0C:
    bl fn_80640134
    clrlwi. r0, r3, 24
    beq lbl_fn_8063F910_00000B1C
    b lbl_fn_8063F910_00000B2C
lbl_fn_8063F910_00000B1C:
    li r0, 0x1
    stw r30, 0x340(r31)
    li r3, 0x0
    stb r0, 0x400(r31)
lbl_fn_8063F910_00000B2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063F98C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r3, lbl_80822CD8@ha
    addi r29, r3, lbl_80822CD8@l
    lbz r0, 0x400(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8063F98C_00000B74
    li r3, 0x1
    b lbl_fn_8063F98C_00000C10
lbl_fn_8063F98C_00000B74:
    li r27, 0x0
    li r30, 0x1
    li r31, 0x0
lbl_fn_8063F98C_00000B80:
    lbz r0, 0x400(r29)
    cmpwi cr6, r0, 0x0
    beq cr6, lbl_fn_8063F98C_00000BEC
    clrlwi r0, r27, 24
    cmplwi cr1, r0, 0x10
    bgt cr1, lbl_fn_8063F98C_00000BEC
    mulli r0, r0, 0x34
    add r28, r29, r0
    lbzx r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_fn_8063F98C_00000BEC
    beq cr6, lbl_fn_8063F98C_00000BDC
    bgt cr1, lbl_fn_8063F98C_00000BDC
    beq lbl_fn_8063F98C_00000BDC
    stb r30, 0xc(r28)
    addi r3, r28, 0x1c
    bl fn_80629E90
    lbz r0, 0xa(r28)
    cmplwi r0, 0x1
    bne lbl_fn_8063F98C_00000BDC
    stb r30, 0xc(r28)
    clrlwi r3, r27, 24
    bl fn_8064028C
lbl_fn_8063F98C_00000BDC:
    stb r31, 0x0(r28)
    stb r31, 0x10(r28)
    sth r31, 0x16(r28)
    sth r31, 0x14(r28)
lbl_fn_8063F98C_00000BEC:
    addi r27, r27, 0x1
    cmplwi r27, 0x10
    blt lbl_fn_8063F98C_00000B80
    bl fn_80642148
    lis r4, lbl_80822CD8@ha
    li r0, 0x0
    addi r4, r4, lbl_80822CD8@l
    li r3, 0x0
    stb r0, 0x400(r4)
lbl_fn_8063F98C_00000C10:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063FA70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, lbl_80822CD8@ha
    mr r26, r3
    addi r31, r31, lbl_80822CD8@l
    mr r27, r4
    lbz r0, 0x400(r31)
    mr r28, r5
    cmpwi r0, 0x0
    bne lbl_fn_8063FA70_00000C64
    li r3, 0x1
    b lbl_fn_8063FA70_00000DA0
lbl_fn_8063FA70_00000C64:
    li r29, 0x0
lbl_fn_8063FA70_00000C68:
    mr r3, r26
    addi r4, r31, 0x1
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_8063FA70_00000C90
    addi r29, r29, 0x1
    addi r31, r31, 0x34
    cmpwi r29, 0x10
    blt lbl_fn_8063FA70_00000C68
lbl_fn_8063FA70_00000C90:
    cmpwi r29, 0x10
    bne lbl_fn_8063FA70_00000D34
    lis r3, lbl_80822CD8@ha
    li r0, 0x2
    addi r3, r3, lbl_80822CD8@l
    li r29, 0x0
    mtctr r0
lbl_fn_8063FA70_00000CAC:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8063FA70_00000D34
    lbz r0, 0x34(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063FA70_00000D34
    lbz r0, 0x68(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063FA70_00000D34
    lbz r0, 0x9c(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063FA70_00000D34
    lbz r0, 0xd0(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063FA70_00000D34
    lbz r0, 0x104(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063FA70_00000D34
    lbz r0, 0x138(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063FA70_00000D34
    lbz r0, 0x16c(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8063FA70_00000D34
    addi r3, r3, 0x1a0
    addi r29, r29, 0x1
    bdnz lbl_fn_8063FA70_00000CAC
lbl_fn_8063FA70_00000D34:
    cmpwi r29, 0x10
    bne lbl_fn_8063FA70_00000D44
    li r3, 0x3
    b lbl_fn_8063FA70_00000DA0
lbl_fn_8063FA70_00000D44:
    mulli r30, r29, 0x34
    lis r31, lbl_80822CD8@ha
    addi r31, r31, lbl_80822CD8@l
    lbzx r0, r31, r30
    cmpwi r0, 0x0
    bne lbl_fn_8063FA70_00000D88
    li r0, 0x1
    add r3, r31, r30
    stbx r0, r31, r30
    mr r4, r26
    addi r3, r3, 0x1
    li r5, 0x6
    bl memcpy
    add r3, r31, r30
    li r0, 0x0
    stb r0, 0xa(r3)
    stb r0, 0xc(r3)
lbl_fn_8063FA70_00000D88:
    lis r4, lbl_80822CD8@ha
    li r3, 0x0
    addi r4, r4, lbl_80822CD8@l
    add r4, r4, r30
    sth r27, 0x8(r4)
    stb r29, 0x0(r28)
lbl_fn_8063FA70_00000DA0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063FC00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_80822CD8@ha
    mr r27, r3
    addi r30, r30, lbl_80822CD8@l
    lbz r0, 0x400(r30)
    cmpwi cr6, r0, 0x0
    bne cr6, lbl_fn_8063FC00_00000DEC
    li r3, 0x1
    b lbl_fn_8063FC00_00000E68
lbl_fn_8063FC00_00000DEC:
    cmplwi cr1, r3, 0x10
    bgt cr1, lbl_fn_8063FC00_00000E08
    mulli r28, r3, 0x34
    lbzx r0, r30, r28
    add r29, r30, r28
    cmpwi r0, 0x0
    bne lbl_fn_8063FC00_00000E10
lbl_fn_8063FC00_00000E08:
    li r3, 0x5
    b lbl_fn_8063FC00_00000E68
lbl_fn_8063FC00_00000E10:
    beq cr6, lbl_fn_8063FC00_00000E44
    bgt cr1, lbl_fn_8063FC00_00000E44
    beq lbl_fn_8063FC00_00000E44
    li r31, 0x1
    addi r3, r29, 0x1c
    stb r31, 0xc(r29)
    bl fn_80629E90
    lbz r0, 0xa(r29)
    cmplwi r0, 0x1
    bne lbl_fn_8063FC00_00000E44
    stb r31, 0xc(r29)
    mr r3, r27
    bl fn_8064028C
lbl_fn_8063FC00_00000E44:
    li r0, 0x0
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    stb r0, 0x0(r29)
    add r4, r3, r28
    stb r0, 0x10(r4)
    li r3, 0x0
    sth r0, 0x16(r4)
    sth r0, 0x14(r4)
lbl_fn_8063FC00_00000E68:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063FCC8(void)
{
    nofralloc
    lis r4, lbl_80822CD8@ha
    addi r4, r4, lbl_80822CD8@l
    lbz r0, 0x400(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8063FCC8_00000E9C
    li r3, 0x1
    blr
lbl_fn_8063FCC8_00000E9C:
    cmplwi r3, 0x10
    bgt lbl_fn_8063FCC8_00000EB4
    mulli r5, r3, 0x34
    lbzx r0, r4, r5
    cmpwi r0, 0x0
    bne lbl_fn_8063FCC8_00000EBC
lbl_fn_8063FCC8_00000EB4:
    li r3, 0x5
    blr
lbl_fn_8063FCC8_00000EBC:
    add r4, r4, r5
    lbz r0, 0xa(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8063FCC8_00000ED4
    li r3, 0xa
    blr
lbl_fn_8063FCC8_00000ED4:
    li r0, 0x1
    stb r0, 0xc(r4)
    b fn_8064204C
    blr
}

asm void fn_8063FD2C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r9, lbl_80822CD8@ha
    lis r31, lbl_807B5A30@ha
    addi r9, r9, lbl_80822CD8@l
    mr r25, r3
    lbz r0, 0x400(r9)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    cmpwi r0, 0x0
    mr r29, r7
    mr r30, r8
    addi r31, r31, lbl_807B5A30@l
    li r24, 0x0
    bne lbl_fn_8063FD2C_00000F4C
    lbz r0, 0x401(r9)
    cmplwi r0, 0x1
    blt lbl_fn_8063FD2C_00000F48
    addi r4, r31, 0x0
    lis r3, 0x1e
    bl fn_80629810
lbl_fn_8063FD2C_00000F48:
    li r24, 0x1
lbl_fn_8063FD2C_00000F4C:
    cmplwi r25, 0x10
    bgt lbl_fn_8063FD2C_00000F6C
    mulli r0, r25, 0x34
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_fn_8063FD2C_00000F90
lbl_fn_8063FD2C_00000F6C:
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8063FD2C_00000F8C
    addi r4, r31, 0x18
    lis r3, 0x1e
    bl fn_80629810
lbl_fn_8063FD2C_00000F8C:
    li r24, 0x5
lbl_fn_8063FD2C_00000F90:
    mulli r0, r25, 0x34
    lis r4, lbl_80822CD8@ha
    addi r4, r4, lbl_80822CD8@l
    add r3, r4, r0
    lbz r0, 0xa(r3)
    cmplwi r0, 0x1
    beq lbl_fn_8063FD2C_00000FCC
    lbz r0, 0x401(r4)
    cmplwi r0, 0x1
    blt lbl_fn_8063FD2C_00000FC8
    mr r5, r25
    addi r4, r31, 0x30
    lis r3, 0x1e
    bl fn_80629830
lbl_fn_8063FD2C_00000FC8:
    li r24, 0x4
lbl_fn_8063FD2C_00000FCC:
    cmpwi r24, 0x0
    beq lbl_fn_8063FD2C_00000FE8
    cmpwi r30, 0x0
    beq lbl_fn_8063FD2C_00001008
    mr r3, r30
    bl fn_80626D50
    b lbl_fn_8063FD2C_00001008
lbl_fn_8063FD2C_00000FE8:
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r8, r30
    bl fn_80641DB0
    mr r24, r3
lbl_fn_8063FD2C_00001008:
    addi r11, r1, 0x30
    mr r3, r24
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8063FE6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_80822CD8@ha
    mr r27, r3
    addi r30, r30, lbl_80822CD8@l
    lbz r0, 0x400(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8063FE6C_00001058
    li r3, 0x1
    b lbl_fn_8063FE6C_000010AC
lbl_fn_8063FE6C_00001058:
    cmplwi r3, 0x10
    bgt lbl_fn_8063FE6C_00001074
    mulli r28, r3, 0x34
    lbzx r0, r30, r28
    add r29, r30, r28
    cmpwi r0, 0x0
    bne lbl_fn_8063FE6C_0000107C
lbl_fn_8063FE6C_00001074:
    li r3, 0x5
    b lbl_fn_8063FE6C_000010AC
lbl_fn_8063FE6C_0000107C:
    li r31, 0x1
    addi r3, r29, 0x1c
    stb r31, 0xc(r29)
    bl fn_80629E90
    lbz r0, 0xa(r29)
    cmplwi r0, 0x1
    beq lbl_fn_8063FE6C_000010A0
    li r3, 0x4
    b lbl_fn_8063FE6C_000010AC
lbl_fn_8063FE6C_000010A0:
    stb r31, 0xc(r29)
    mr r3, r27
    bl fn_8064028C
lbl_fn_8063FE6C_000010AC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063FF0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x20
    li r7, 0x11
    stw r0, 0x24(r1)
    li r8, 0x6
    li r9, 0x1
    stw r31, 0x1c(r1)
    lis r31, lbl_807B5A30@ha
    addi r31, r31, lbl_807B5A30@l
    stw r30, 0x18(r1)
    mr r30, r4
    mr r6, r30
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    mr r4, r29
    bl fn_806373C8
    clrlwi. r0, r3, 24
    bne lbl_fn_8063FF0C_0000113C
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8063FF0C_00001134
    addi r4, r31, 0x54
    lis r3, 0x1e
    bl fn_80629810
lbl_fn_8063FF0C_00001134:
    li r3, 0x3
    b lbl_fn_8063FF0C_000012D0
lbl_fn_8063FF0C_0000113C:
    mr r4, r29
    mr r6, r30
    li r3, 0x1
    li r5, 0x20
    li r7, 0x11
    li r8, 0x6
    li r9, 0x1
    bl fn_806373C8
    clrlwi. r0, r3, 24
    bne lbl_fn_8063FF0C_0000118C
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8063FF0C_00001184
    addi r4, r31, 0x74
    lis r3, 0x1e
    bl fn_80629810
lbl_fn_8063FF0C_00001184:
    li r3, 0x3
    b lbl_fn_8063FF0C_000012D0
lbl_fn_8063FF0C_0000118C:
    mr r4, r29
    li r3, 0x0
    li r5, 0x21
    li r6, 0x0
    li r7, 0x11
    li r8, 0x6
    li r9, 0x2
    bl fn_806373C8
    clrlwi. r0, r3, 24
    bne lbl_fn_8063FF0C_000011DC
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8063FF0C_000011D4
    addi r4, r31, 0x94
    lis r3, 0x1e
    bl fn_80629810
lbl_fn_8063FF0C_000011D4:
    li r3, 0x3
    b lbl_fn_8063FF0C_000012D0
lbl_fn_8063FF0C_000011DC:
    mr r4, r29
    li r3, 0x1
    li r5, 0x21
    li r6, 0x0
    li r7, 0x11
    li r8, 0x6
    li r9, 0x2
    bl fn_806373C8
    clrlwi. r0, r3, 24
    bne lbl_fn_8063FF0C_0000122C
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8063FF0C_00001224
    addi r4, r31, 0xb4
    lis r3, 0x1e
    bl fn_80629810
lbl_fn_8063FF0C_00001224:
    li r3, 0x3
    b lbl_fn_8063FF0C_000012D0
lbl_fn_8063FF0C_0000122C:
    mr r4, r29
    li r3, 0x1
    li r5, 0x22
    li r6, 0x0
    li r7, 0x13
    li r8, 0x6
    li r9, 0x0
    bl fn_806373C8
    clrlwi. r0, r3, 24
    bne lbl_fn_8063FF0C_0000127C
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8063FF0C_00001274
    addi r4, r31, 0xd4
    lis r3, 0x1e
    bl fn_80629810
lbl_fn_8063FF0C_00001274:
    li r3, 0x3
    b lbl_fn_8063FF0C_000012D0
lbl_fn_8063FF0C_0000127C:
    mr r4, r29
    li r3, 0x0
    li r5, 0x22
    li r6, 0x0
    li r7, 0x13
    li r8, 0x6
    li r9, 0x0
    bl fn_806373C8
    clrlwi. r0, r3, 24
    bne lbl_fn_8063FF0C_000012CC
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8063FF0C_000012C4
    addi r4, r31, 0xf4
    lis r3, 0x1e
    bl fn_80629810
lbl_fn_8063FF0C_000012C4:
    li r3, 0x3
    b lbl_fn_8063FF0C_000012D0
lbl_fn_8063FF0C_000012CC:
    li r3, 0x0
lbl_fn_8063FF0C_000012D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80640134(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0x1
    li r6, 0x1
    stw r0, 0x14(r1)
    subi r0, r3, 0x1
    li r5, 0x280
    li r3, 0x11
    stw r31, 0xc(r1)
    lis r31, lbl_80764F80@ha
    addi r4, r31, lbl_80764F80@l
    stw r30, 0x8(r1)
    lis r30, lbl_80822CD8@ha
    addi r30, r30, lbl_80822CD8@l
    stb r6, 0x346(r30)
    sth r5, 0x348(r30)
    stb r6, 0x364(r30)
    sth r0, 0x366(r30)
    bl fn_80642174
    clrlwi. r0, r3, 24
    bne lbl_fn_80640134_00001364
    lbz r0, 0x401(r30)
    cmplwi r0, 0x1
    blt lbl_fn_80640134_0000135C
    lis r4, lbl_807B5B48@ha
    lis r3, 0x1e
    addi r4, r4, lbl_807B5B48@l
    bl fn_80629810
lbl_fn_80640134_0000135C:
    li r3, 0xe
    b lbl_fn_80640134_0000142C
lbl_fn_80640134_00001364:
    addi r4, r31, lbl_80764F80@l
    li r3, 0x13
    bl fn_80642174
    clrlwi. r0, r3, 24
    bne lbl_fn_80640134_000013A4
    li r3, 0x11
    bl fn_80642310
    lbz r0, 0x401(r30)
    cmplwi r0, 0x1
    blt lbl_fn_80640134_0000139C
    lis r4, lbl_807B5B68@ha
    lis r3, 0x1e
    addi r4, r4, lbl_807B5B68@l
    bl fn_80629810
lbl_fn_80640134_0000139C:
    li r3, 0xe
    b lbl_fn_80640134_0000142C
lbl_fn_80640134_000013A4:
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x0(r30)
    stb r0, 0x10(r30)
    stb r0, 0x34(r30)
    stb r0, 0x44(r30)
    stb r0, 0x68(r30)
    stb r0, 0x78(r30)
    stb r0, 0x9c(r30)
    stb r0, 0xac(r30)
    stb r0, 0xd0(r30)
    stb r0, 0xe0(r30)
    stb r0, 0x104(r30)
    stb r0, 0x114(r30)
    stb r0, 0x138(r30)
    stb r0, 0x148(r30)
    stb r0, 0x16c(r30)
    stb r0, 0x17c(r30)
    stb r0, 0x1a0(r30)
    stb r0, 0x1b0(r30)
    stb r0, 0x1d4(r30)
    stb r0, 0x1e4(r30)
    stb r0, 0x208(r30)
    stb r0, 0x218(r30)
    stb r0, 0x23c(r30)
    stb r0, 0x24c(r30)
    stb r0, 0x270(r30)
    stb r0, 0x280(r30)
    stb r0, 0x2a4(r30)
    stb r0, 0x2b4(r30)
    stb r0, 0x2d8(r30)
    stb r0, 0x2e8(r30)
    stb r0, 0x30c(r30)
    stb r0, 0x31c(r30)
lbl_fn_80640134_0000142C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064028C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80822CD8@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80822CD8@l
    mulli r3, r3, 0x34
    stw r31, 0xc(r1)
    lbz r0, 0x401(r4)
    add r31, r4, r3
    cmplwi r0, 0x4
    blt lbl_fn_8064028C_00001484
    lis r3, 0x1e
    lis r4, lbl_807B5B8C@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5B8C@l
    bl fn_80629810
lbl_fn_8064028C_00001484:
    lhz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8064028C_0000149C
    lhz r0, 0x16(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064028C_000014C8
lbl_fn_8064028C_0000149C:
    li r0, 0x5
    stb r0, 0x10(r31)
    lhz r3, 0x16(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8064028C_000014B4
    bl fn_806428EC
lbl_fn_8064028C_000014B4:
    lhz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8064028C_000014D0
    bl fn_806428EC
    b lbl_fn_8064028C_000014D0
lbl_fn_8064028C_000014C8:
    li r0, 0x0
    stb r0, 0x10(r31)
lbl_fn_8064028C_000014D0:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80640330(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0x4ec5
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    subi r3, r3, 0x13b1
    stw r31, 0xc(r1)
    lis r31, lbl_80822CD8@ha
    addi r31, r31, lbl_80822CD8@l
    subf r0, r31, r4
    stw r30, 0x8(r1)
    mulhw r0, r3, r0
    mr r30, r4
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    clrlwi r6, r0, 24
    bne lbl_fn_80640330_00001574
    lbz r0, 0x10(r4)
    cmplwi r0, 0x6
    bne lbl_fn_80640330_00001574
    li r3, 0x0
    li r0, 0x2
    sth r3, 0x1a(r4)
    addi r3, r4, 0x1
    lhz r5, 0x14(r30)
    li r6, 0x0
    stb r0, 0x10(r4)
    li r7, 0x0
    lbz r4, 0x12(r4)
    bl fn_806425D4
    lhz r3, 0x14(r30)
    addi r4, r31, 0x344
    bl fn_80642764
    b lbl_fn_80640330_00001600
lbl_fn_80640330_00001574:
    cmpwi r5, 0x0
    beq lbl_fn_80640330_00001600
    li r0, 0xf
    lis r3, lbl_80822CD8@ha
    sth r0, 0x1a(r4)
    addi r3, r3, lbl_80822CD8@l
    mulli r4, r6, 0x34
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    add r31, r3, r4
    blt lbl_fn_80640330_000015B4
    lis r3, 0x1e
    lis r4, lbl_807B5B8C@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5B8C@l
    bl fn_80629810
lbl_fn_80640330_000015B4:
    lhz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80640330_000015CC
    lhz r0, 0x16(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80640330_000015F8
lbl_fn_80640330_000015CC:
    li r0, 0x5
    stb r0, 0x10(r31)
    lhz r3, 0x16(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80640330_000015E4
    bl fn_806428EC
lbl_fn_80640330_000015E4:
    lhz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80640330_00001600
    bl fn_806428EC
    b lbl_fn_80640330_00001600
lbl_fn_80640330_000015F8:
    li r0, 0x0
    stb r0, 0x10(r31)
lbl_fn_80640330_00001600:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80640460(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r7, lbl_80822CD8@ha
    lis r31, lbl_807B5B48@ha
    addi r7, r7, lbl_80822CD8@l
    mr r26, r3
    lbz r0, 0x401(r7)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    cmplwi r0, 0x4
    addi r31, r31, lbl_807B5B48@l
    li r25, 0x1
    blt lbl_fn_80640460_00001670
    lis r3, 0x1e
    mr r6, r27
    addi r4, r31, 0x58
    addi r3, r3, 0x3
    bl fn_80629850
lbl_fn_80640460_00001670:
    lis r30, lbl_80822CD8@ha
    li r24, 0x0
    addi r30, r30, lbl_80822CD8@l
lbl_fn_80640460_0000167C:
    lbz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80640460_000016A0
    mr r3, r26
    addi r4, r30, 0x1
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_fn_80640460_000016B0
lbl_fn_80640460_000016A0:
    addi r24, r24, 0x1
    addi r30, r30, 0x34
    cmpwi r24, 0x10
    blt lbl_fn_80640460_0000167C
lbl_fn_80640460_000016B0:
    cmpwi r24, 0x10
    bne lbl_fn_80640460_000016D4
    mr r3, r26
    mr r4, r29
    mr r5, r27
    li r6, 0x3
    li r7, 0x0
    bl fn_806425D4
    b lbl_fn_80640460_00001858
lbl_fn_80640460_000016D4:
    mulli r0, r24, 0x34
    lis r3, lbl_80822CD8@ha
    cmplwi r28, 0x13
    addi r3, r3, lbl_80822CD8@l
    add r30, r3, r0
    bne lbl_fn_80640460_00001750
    lhz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80640460_00001718
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80640460_00001714
    lis r3, 0x1e
    addi r4, r31, 0x8c
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80640460_00001714:
    li r25, 0x0
lbl_fn_80640460_00001718:
    lbz r5, 0x10(r30)
    cmplwi r5, 0x2
    beq lbl_fn_80640460_0000177C
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80640460_00001748
    lis r3, 0x1e
    addi r4, r31, 0xc0
    addi r3, r3, 0x1
    bl fn_80629830
lbl_fn_80640460_00001748:
    li r25, 0x0
    b lbl_fn_80640460_0000177C
lbl_fn_80640460_00001750:
    lbz r5, 0x10(r30)
    cmpwi r5, 0x0
    beq lbl_fn_80640460_0000177C
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80640460_00001778
    lis r3, 0x1e
    addi r4, r31, 0xf0
    addi r3, r3, 0x1
    bl fn_80629830
lbl_fn_80640460_00001778:
    li r25, 0x0
lbl_fn_80640460_0000177C:
    cmpwi r25, 0x0
    bne lbl_fn_80640460_000017A0
    mr r3, r26
    mr r4, r29
    mr r5, r27
    li r6, 0x4
    li r7, 0x0
    bl fn_806425D4
    b lbl_fn_80640460_00001858
lbl_fn_80640460_000017A0:
    cmplwi r28, 0x11
    bne lbl_fn_80640460_000017FC
    li r0, 0x0
    lis r8, fn_80640330@ha
    stb r0, 0x11(r30)
    li r7, 0x100
    li r0, 0x6
    mr r9, r30
    sth r27, 0x14(r30)
    addi r3, r30, 0x1
    addi r8, r8, fn_80640330@l
    li r4, 0x11
    stb r29, 0x12(r30)
    li r5, 0x0
    li r6, 0x6
    sth r7, 0x1a(r30)
    stb r0, 0x10(r30)
    lhz r0, 0x8(r30)
    extrwi r0, r0, 1, 16
    neg r7, r0
    addi r7, r7, 0x2
    bl fn_806380C0
    b lbl_fn_80640460_00001858
lbl_fn_80640460_000017FC:
    li r0, 0x3
    mr r3, r26
    stb r0, 0x10(r30)
    mr r4, r29
    mr r5, r27
    li r6, 0x0
    sth r27, 0x16(r30)
    li r7, 0x0
    bl fn_806425D4
    lis r26, lbl_80822CD8@ha
    mr r3, r27
    addi r26, r26, lbl_80822CD8@l
    addi r4, r26, 0x344
    bl fn_80642764
    lbz r0, 0x401(r26)
    cmplwi r0, 0x4
    blt lbl_fn_80640460_00001858
    lis r3, 0x1e
    mr r5, r28
    mr r6, r27
    addi r4, r31, 0x120
    addi r3, r3, 0x3
    bl fn_80629850
lbl_fn_80640460_00001858:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806406B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80822CD8@ha
    addi r29, r29, lbl_80822CD8@l
    stw r28, 0x10(r1)
    lwz r0, 0x10(r3)
    clrlwi r0, r0, 24
    mulli r0, r0, 0x34
    add r28, r29, r0
    lbz r0, 0x10(r28)
    cmpwi r0, 0x0
    bne lbl_fn_806406B8_00001954
    li r5, 0x0
    li r0, 0x100
    sth r5, 0x14(r28)
    li r30, 0x1
    addi r4, r28, 0x1
    li r3, 0x11
    sth r5, 0x16(r28)
    sth r0, 0x1a(r28)
    stb r30, 0x11(r28)
    bl fn_806423A0
    clrlwi. r0, r3, 16
    sth r3, 0x14(r28)
    bne lbl_fn_806406B8_00001950
    lbz r0, 0x401(r29)
    cmplwi r0, 0x2
    blt lbl_fn_806406B8_00001908
    lis r3, 0x1e
    lis r4, lbl_807B5CAC@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B5CAC@l
    bl fn_80629810
lbl_fn_806406B8_00001908:
    lis r5, lbl_80822CD8@ha
    lis r3, 0x4ec5
    addi r5, r5, lbl_80822CD8@l
    li r4, 0x1
    subf r0, r5, r28
    subi r7, r3, 0x13b1
    mulhw r0, r7, r0
    lwz r12, 0x340(r5)
    li r5, 0xe
    li r6, 0x0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulhwu r0, r7, r0
    extrwi r3, r0, 8, 20
    mtctr r12
    bctrl
    b lbl_fn_806406B8_00001954
lbl_fn_806406B8_00001950:
    stb r30, 0x10(r28)
lbl_fn_806406B8_00001954:
    lwz r0, 0x10(r31)
    lis r7, lbl_80822CD8@ha
    addi r7, r7, lbl_80822CD8@l
    li r4, 0x2
    mulli r0, r0, 0x34
    li r6, 0x0
    add r5, r7, r0
    lbz r3, 0xc(r5)
    addi r0, r3, 0x1
    stb r0, 0xc(r5)
    lwz r3, 0x10(r31)
    lwz r12, 0x340(r7)
    mulli r0, r3, 0x34
    clrlwi r3, r3, 24
    add r5, r7, r0
    lbz r5, 0xc(r5)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80640804(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_80822CD8@ha
    lis r3, 0x4ec5
    addi r6, r6, lbl_80822CD8@l
    lis r31, lbl_807B5B48@ha
    subf r0, r6, r4
    subi r3, r3, 0x13b1
    mulhw r0, r3, r0
    cmpwi r5, 0x0
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_807B5B48@l
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    clrlwi r30, r0, 24
    bne lbl_fn_80640804_00001B24
    lbz r0, 0x10(r4)
    cmplwi r0, 0x6
    bne lbl_fn_80640804_00001B24
    lbz r0, 0x401(r6)
    cmplwi r0, 0x4
    blt lbl_fn_80640804_00001A38
    lis r3, 0x1e
    addi r4, r31, 0x180
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_80640804_00001A38:
    mulli r0, r30, 0x34
    lis r27, lbl_80822CD8@ha
    li r3, 0x0
    addi r27, r27, lbl_80822CD8@l
    sth r3, 0x1a(r28)
    add r26, r27, r0
    addi r4, r26, 0x1
    li r3, 0x13
    bl fn_806423A0
    clrlwi. r0, r3, 16
    sth r3, 0x16(r28)
    bne lbl_fn_80640804_00001B1C
    lbz r0, 0x401(r27)
    cmplwi r0, 0x2
    blt lbl_fn_80640804_00001A84
    lis r3, 0x1e
    addi r4, r31, 0x1a0
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80640804_00001A84:
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80640804_00001AA8
    lis r3, 0x1e
    addi r4, r31, 0x44
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_80640804_00001AA8:
    lhz r0, 0x14(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80640804_00001AC0
    lhz r0, 0x16(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80640804_00001AEC
lbl_fn_80640804_00001AC0:
    li r0, 0x5
    stb r0, 0x10(r26)
    lhz r3, 0x16(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80640804_00001AD8
    bl fn_806428EC
lbl_fn_80640804_00001AD8:
    lhz r3, 0x14(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80640804_00001AF4
    bl fn_806428EC
    b lbl_fn_80640804_00001AF4
lbl_fn_80640804_00001AEC:
    li r0, 0x0
    stb r0, 0x10(r26)
lbl_fn_80640804_00001AF4:
    lis r5, lbl_80822CD8@ha
    mr r3, r30
    addi r5, r5, lbl_80822CD8@l
    li r4, 0x1
    lwz r12, 0x340(r5)
    li r5, 0x200
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80640804_00001BB8
lbl_fn_80640804_00001B1C:
    li r0, 0x2
    stb r0, 0x10(r28)
lbl_fn_80640804_00001B24:
    cmpwi r29, 0x0
    beq lbl_fn_80640804_00001BB8
    lbz r0, 0x10(r28)
    cmplwi r0, 0x6
    bne lbl_fn_80640804_00001BB8
    li r0, 0xf
    lis r3, lbl_80822CD8@ha
    sth r0, 0x1a(r28)
    addi r3, r3, lbl_80822CD8@l
    mulli r4, r30, 0x34
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    add r27, r3, r4
    blt lbl_fn_80640804_00001B6C
    lis r3, 0x1e
    addi r4, r31, 0x44
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_80640804_00001B6C:
    lhz r0, 0x14(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80640804_00001B84
    lhz r0, 0x16(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80640804_00001BB0
lbl_fn_80640804_00001B84:
    li r0, 0x5
    stb r0, 0x10(r27)
    lhz r3, 0x16(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80640804_00001B9C
    bl fn_806428EC
lbl_fn_80640804_00001B9C:
    lhz r3, 0x14(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80640804_00001BB8
    bl fn_806428EC
    b lbl_fn_80640804_00001BB8
lbl_fn_80640804_00001BB0:
    li r0, 0x0
    stb r0, 0x10(r27)
lbl_fn_80640804_00001BB8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80640A18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80822CD8@ha
    li r5, 0x0
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r6, r6, lbl_80822CD8@l
    li r9, 0x0
    stw r31, 0x1c(r1)
    lis r31, lbl_807B5B48@ha
    addi r31, r31, lbl_807B5B48@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mtctr r0
lbl_fn_80640A18_00001C18:
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r7, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001C54
    lbz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001C54
    lhz r0, 0x14(r7)
    cmplw r3, r0
    beq lbl_fn_80640A18_00001D1C
    lhz r0, 0x16(r7)
    cmplw r3, r0
    beq lbl_fn_80640A18_00001D1C
lbl_fn_80640A18_00001C54:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r7, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001C94
    lbz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001C94
    lhz r0, 0x14(r7)
    cmplw r3, r0
    beq lbl_fn_80640A18_00001D1C
    lhz r0, 0x16(r7)
    cmplw r3, r0
    beq lbl_fn_80640A18_00001D1C
lbl_fn_80640A18_00001C94:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r7, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001CD4
    lbz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001CD4
    lhz r0, 0x14(r7)
    cmplw r3, r0
    beq lbl_fn_80640A18_00001D1C
    lhz r0, 0x16(r7)
    cmplw r3, r0
    beq lbl_fn_80640A18_00001D1C
lbl_fn_80640A18_00001CD4:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r7, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001D14
    lbz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001D14
    lhz r0, 0x14(r7)
    cmplw r3, r0
    beq lbl_fn_80640A18_00001D1C
    lhz r0, 0x16(r7)
    cmplw r3, r0
    beq lbl_fn_80640A18_00001D1C
lbl_fn_80640A18_00001D14:
    addi r30, r30, 0x1
    bdnz lbl_fn_80640A18_00001C18
lbl_fn_80640A18_00001D1C:
    clrlwi r0, r30, 24
    cmplwi r0, 0x10
    beq lbl_fn_80640A18_00001D3C
    mulli r0, r0, 0x34
    lis r5, lbl_80822CD8@ha
    addi r5, r5, lbl_80822CD8@l
    add r9, r5, r0
    addi r5, r9, 0x10
lbl_fn_80640A18_00001D3C:
    cmpwi r5, 0x0
    beq lbl_fn_80640A18_00001D80
    lbz r0, 0x1(r5)
    clrlwi. r0, r0, 31
    beq lbl_fn_80640A18_00001D80
    lhz r6, 0x4(r5)
    cmplw r3, r6
    bne lbl_fn_80640A18_00001D68
    lbz r0, 0x0(r5)
    cmplwi r0, 0x1
    bne lbl_fn_80640A18_00001D80
lbl_fn_80640A18_00001D68:
    lhz r0, 0x6(r5)
    cmplw r3, r0
    bne lbl_fn_80640A18_00001DAC
    lbz r0, 0x0(r5)
    cmplwi r0, 0x2
    beq lbl_fn_80640A18_00001DAC
lbl_fn_80640A18_00001D80:
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80640A18_00001EF8
    lis r3, 0x1e
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r31, 0x1bc
    bl fn_80629830
    b lbl_fn_80640A18_00001EF8
lbl_fn_80640A18_00001DAC:
    cmpwi r4, 0x0
    beq lbl_fn_80640A18_00001E74
    cmplw r3, r6
    bne lbl_fn_80640A18_00001DC8
    li r0, 0x0
    sth r0, 0x4(r5)
    b lbl_fn_80640A18_00001DD0
lbl_fn_80640A18_00001DC8:
    li r0, 0x0
    sth r0, 0x6(r5)
lbl_fn_80640A18_00001DD0:
    lis r3, lbl_80822CD8@ha
    clrlwi r4, r30, 24
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    mulli r4, r4, 0x34
    cmplwi r0, 0x4
    add r28, r3, r4
    blt lbl_fn_80640A18_00001E00
    lis r3, 0x1e
    addi r4, r31, 0x44
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_80640A18_00001E00:
    lhz r0, 0x14(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80640A18_00001E18
    lhz r0, 0x16(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80640A18_00001E44
lbl_fn_80640A18_00001E18:
    li r0, 0x5
    stb r0, 0x10(r28)
    lhz r3, 0x16(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80640A18_00001E30
    bl fn_806428EC
lbl_fn_80640A18_00001E30:
    lhz r3, 0x14(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80640A18_00001E4C
    bl fn_806428EC
    b lbl_fn_80640A18_00001E4C
lbl_fn_80640A18_00001E44:
    li r0, 0x0
    stb r0, 0x10(r28)
lbl_fn_80640A18_00001E4C:
    lis r4, lbl_80822CD8@ha
    clrlwi r3, r30, 24
    addi r4, r4, lbl_80822CD8@l
    ori r5, r29, 0x100
    lwz r12, 0x340(r4)
    li r4, 0x1
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80640A18_00001EF8
lbl_fn_80640A18_00001E74:
    cmplw r3, r6
    bne lbl_fn_80640A18_00001EBC
    li r0, 0x6
    lis r8, fn_80640804@ha
    stb r0, 0x0(r5)
    li r0, 0x100
    addi r3, r9, 0x1
    addi r8, r8, fn_80640804@l
    sth r0, 0xa(r5)
    li r4, 0x11
    li r5, 0x1
    li r6, 0x6
    lhz r0, 0x8(r9)
    extrwi r0, r0, 1, 16
    neg r7, r0
    addi r7, r7, 0x2
    bl fn_806380C0
    b lbl_fn_80640A18_00001EC4
lbl_fn_80640A18_00001EBC:
    li r0, 0x3
    stb r0, 0x0(r5)
lbl_fn_80640A18_00001EC4:
    lis r29, lbl_80822CD8@ha
    mr r3, r28
    addi r29, r29, lbl_80822CD8@l
    addi r4, r29, 0x344
    bl fn_80642764
    lbz r0, 0x401(r29)
    cmplwi r0, 0x4
    blt lbl_fn_80640A18_00001EF8
    lis r3, 0x1e
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r31, 0x1e8
    bl fn_80629830
lbl_fn_80640A18_00001EF8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80640D60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80822CD8@ha
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r5, r5, lbl_80822CD8@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mtctr r0
lbl_fn_80640D60_00001F54:
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r4, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_00001F90
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_00001F90
    lhz r0, 0x14(r4)
    cmplw r3, r0
    beq lbl_fn_80640D60_00002058
    lhz r0, 0x16(r4)
    cmplw r3, r0
    beq lbl_fn_80640D60_00002058
lbl_fn_80640D60_00001F90:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r4, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_00001FD0
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_00001FD0
    lhz r0, 0x14(r4)
    cmplw r3, r0
    beq lbl_fn_80640D60_00002058
    lhz r0, 0x16(r4)
    cmplw r3, r0
    beq lbl_fn_80640D60_00002058
lbl_fn_80640D60_00001FD0:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r4, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_00002010
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_00002010
    lhz r0, 0x14(r4)
    cmplw r3, r0
    beq lbl_fn_80640D60_00002058
    lhz r0, 0x16(r4)
    cmplw r3, r0
    beq lbl_fn_80640D60_00002058
lbl_fn_80640D60_00002010:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r4, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_00002050
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_00002050
    lhz r0, 0x14(r4)
    cmplw r3, r0
    beq lbl_fn_80640D60_00002058
    lhz r0, 0x16(r4)
    cmplw r3, r0
    beq lbl_fn_80640D60_00002058
lbl_fn_80640D60_00002050:
    addi r31, r31, 0x1
    bdnz lbl_fn_80640D60_00001F54
lbl_fn_80640D60_00002058:
    clrlwi r0, r31, 24
    cmplwi r0, 0x10
    beq lbl_fn_80640D60_00002078
    mulli r0, r0, 0x34
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    add r30, r3, r0
    addi r30, r30, 0x10
lbl_fn_80640D60_00002078:
    cmpwi r30, 0x0
    bne lbl_fn_80640D60_000020B0
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80640D60_000021A0
    lis r3, 0x1e
    lis r4, lbl_807B5D64@ha
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B5D64@l
    bl fn_80629830
    b lbl_fn_80640D60_000021A0
lbl_fn_80640D60_000020B0:
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80640D60_000020DC
    lis r3, 0x1e
    lis r4, lbl_807B5D90@ha
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5D90@l
    bl fn_80629830
lbl_fn_80640D60_000020DC:
    lbz r0, 0x2(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80640D60_000020F4
    lhz r0, 0x4(r29)
    cmplwi r0, 0x280
    ble lbl_fn_80640D60_00002100
lbl_fn_80640D60_000020F4:
    li r0, 0x280
    sth r0, 0x8(r30)
    b lbl_fn_80640D60_00002104
lbl_fn_80640D60_00002100:
    sth r0, 0x8(r30)
lbl_fn_80640D60_00002104:
    li r0, 0x0
    mr r3, r28
    stb r0, 0x20(r29)
    mr r4, r29
    stb r0, 0x2(r29)
    sth r0, 0x0(r29)
    bl fn_8064281C
    lhz r0, 0x4(r30)
    cmplw r28, r0
    bne lbl_fn_80640D60_0000213C
    lbz r0, 0x1(r30)
    ori r0, r0, 0x2
    stb r0, 0x1(r30)
    b lbl_fn_80640D60_00002148
lbl_fn_80640D60_0000213C:
    lbz r0, 0x1(r30)
    ori r0, r0, 0x8
    stb r0, 0x1(r30)
lbl_fn_80640D60_00002148:
    lbz r0, 0x1(r30)
    rlwinm r0, r0, 0, 27, 30
    cmpwi r0, 0x1e
    bne lbl_fn_80640D60_000021A0
    lbz r0, 0x0(r30)
    cmplwi r0, 0x3
    bne lbl_fn_80640D60_000021A0
    clrlwi r3, r31, 24
    li r4, 0x4
    mulli r0, r3, 0x34
    lis r6, lbl_80822CD8@ha
    stb r4, 0x0(r30)
    li r5, 0x1
    addi r6, r6, lbl_80822CD8@l
    add r4, r6, r0
    stb r5, 0xa(r4)
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x340(r6)
    li r6, 0x0
    mtctr r12
    bctrl
lbl_fn_80640D60_000021A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80641008(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_80822CD8@ha
    lis r31, lbl_807B5B48@ha
    addi r5, r5, lbl_80822CD8@l
    mr r27, r3
    lbz r0, 0x401(r5)
    mr r28, r4
    addi r31, r31, lbl_807B5B48@l
    li r29, 0x0
    cmplwi r0, 0x4
    blt lbl_fn_80641008_00002214
    lis r3, 0x1e
    lhz r6, 0x0(r28)
    mr r5, r27
    addi r4, r31, 0x274
    addi r3, r3, 0x3
    bl fn_80629850
lbl_fn_80641008_00002214:
    lis r3, lbl_80822CD8@ha
    li r0, 0x4
    addi r3, r3, lbl_80822CD8@l
    li r30, 0x0
    mtctr r0
lbl_fn_80641008_00002228:
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r4, r3, r0
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641008_00002264
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80641008_00002264
    lhz r0, 0x14(r4)
    cmplw r27, r0
    beq lbl_fn_80641008_0000232C
    lhz r0, 0x16(r4)
    cmplw r27, r0
    beq lbl_fn_80641008_0000232C
lbl_fn_80641008_00002264:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r4, r3, r0
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641008_000022A4
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80641008_000022A4
    lhz r0, 0x14(r4)
    cmplw r27, r0
    beq lbl_fn_80641008_0000232C
    lhz r0, 0x16(r4)
    cmplw r27, r0
    beq lbl_fn_80641008_0000232C
lbl_fn_80641008_000022A4:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r4, r3, r0
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641008_000022E4
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80641008_000022E4
    lhz r0, 0x14(r4)
    cmplw r27, r0
    beq lbl_fn_80641008_0000232C
    lhz r0, 0x16(r4)
    cmplw r27, r0
    beq lbl_fn_80641008_0000232C
lbl_fn_80641008_000022E4:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r4, r3, r0
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641008_00002324
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80641008_00002324
    lhz r0, 0x14(r4)
    cmplw r27, r0
    beq lbl_fn_80641008_0000232C
    lhz r0, 0x16(r4)
    cmplw r27, r0
    beq lbl_fn_80641008_0000232C
lbl_fn_80641008_00002324:
    addi r30, r30, 0x1
    bdnz lbl_fn_80641008_00002228
lbl_fn_80641008_0000232C:
    clrlwi r0, r30, 24
    cmplwi r0, 0x10
    beq lbl_fn_80641008_0000234C
    mulli r0, r0, 0x34
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    add r29, r3, r0
    addi r29, r29, 0x10
lbl_fn_80641008_0000234C:
    cmpwi r29, 0x0
    bne lbl_fn_80641008_00002380
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80641008_000024B4
    lis r3, 0x1e
    mr r5, r27
    addi r3, r3, 0x1
    addi r4, r31, 0x21c
    bl fn_80629830
    b lbl_fn_80641008_000024B4
lbl_fn_80641008_00002380:
    lhz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80641008_00002434
    lis r3, lbl_80822CD8@ha
    clrlwi r4, r30, 24
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    mulli r4, r4, 0x34
    cmplwi r0, 0x4
    add r27, r3, r4
    blt lbl_fn_80641008_000023BC
    lis r3, 0x1e
    addi r4, r31, 0x44
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_80641008_000023BC:
    lhz r0, 0x14(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80641008_000023D4
    lhz r0, 0x16(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80641008_00002400
lbl_fn_80641008_000023D4:
    li r0, 0x5
    stb r0, 0x10(r27)
    lhz r3, 0x16(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80641008_000023EC
    bl fn_806428EC
lbl_fn_80641008_000023EC:
    lhz r3, 0x14(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80641008_00002408
    bl fn_806428EC
    b lbl_fn_80641008_00002408
lbl_fn_80641008_00002400:
    li r0, 0x0
    stb r0, 0x10(r27)
lbl_fn_80641008_00002408:
    lis r4, lbl_80822CD8@ha
    lhz r0, 0x0(r28)
    addi r4, r4, lbl_80822CD8@l
    clrlwi r3, r30, 24
    lwz r12, 0x340(r4)
    ori r5, r0, 0x400
    li r4, 0x1
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80641008_000024B4
lbl_fn_80641008_00002434:
    lhz r0, 0x4(r29)
    cmplw r27, r0
    bne lbl_fn_80641008_00002450
    lbz r0, 0x1(r29)
    ori r0, r0, 0x4
    stb r0, 0x1(r29)
    b lbl_fn_80641008_0000245C
lbl_fn_80641008_00002450:
    lbz r0, 0x1(r29)
    ori r0, r0, 0x10
    stb r0, 0x1(r29)
lbl_fn_80641008_0000245C:
    lbz r0, 0x1(r29)
    rlwinm r0, r0, 0, 27, 30
    cmpwi r0, 0x1e
    bne lbl_fn_80641008_000024B4
    lbz r0, 0x0(r29)
    cmplwi r0, 0x3
    bne lbl_fn_80641008_000024B4
    clrlwi r3, r30, 24
    li r4, 0x4
    mulli r0, r3, 0x34
    lis r6, lbl_80822CD8@ha
    stb r4, 0x0(r29)
    li r5, 0x1
    addi r6, r6, lbl_80822CD8@l
    add r4, r6, r0
    stb r5, 0xa(r4)
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x340(r6)
    li r6, 0x0
    mtctr r12
    bctrl
lbl_fn_80641008_000024B4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80641314(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_80822CD8@ha
    li r0, 0x4
    mr r27, r3
    mr r28, r4
    addi r5, r5, lbl_80822CD8@l
    li r30, 0x0
    li r29, 0x0
    li r31, 0x0
    mtctr r0
lbl_fn_80641314_00002504:
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641314_00002540
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80641314_00002540
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_fn_80641314_00002608
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_fn_80641314_00002608
lbl_fn_80641314_00002540:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641314_00002580
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80641314_00002580
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_fn_80641314_00002608
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_fn_80641314_00002608
lbl_fn_80641314_00002580:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641314_000025C0
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80641314_000025C0
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_fn_80641314_00002608
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_fn_80641314_00002608
lbl_fn_80641314_000025C0:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641314_00002600
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80641314_00002600
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_fn_80641314_00002608
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_fn_80641314_00002608
lbl_fn_80641314_00002600:
    addi r31, r31, 0x1
    bdnz lbl_fn_80641314_00002504
lbl_fn_80641314_00002608:
    clrlwi r0, r31, 24
    cmplwi r0, 0x10
    beq lbl_fn_80641314_00002628
    mulli r0, r0, 0x34
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    add r30, r3, r0
    addi r30, r30, 0x10
lbl_fn_80641314_00002628:
    cmpwi r30, 0x0
    bne lbl_fn_80641314_00002660
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80641314_00002778
    lis r3, 0x1e
    lis r4, lbl_807B5DE8@ha
    mr r5, r27
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B5DE8@l
    bl fn_80629830
    b lbl_fn_80641314_00002778
lbl_fn_80641314_00002660:
    cmpwi r4, 0x0
    beq lbl_fn_80641314_00002670
    mr r3, r27
    bl fn_80642990
lbl_fn_80641314_00002670:
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80641314_0000269C
    lis r3, 0x1e
    lis r4, lbl_807B5E14@ha
    mr r5, r27
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5E14@l
    bl fn_80629830
lbl_fn_80641314_0000269C:
    li r0, 0x5
    stb r0, 0x0(r30)
    lhz r0, 0x4(r30)
    cmplw r27, r0
    bne lbl_fn_80641314_000026BC
    li r0, 0x0
    sth r0, 0x4(r30)
    b lbl_fn_80641314_000026C4
lbl_fn_80641314_000026BC:
    li r0, 0x0
    sth r0, 0x6(r30)
lbl_fn_80641314_000026C4:
    lhz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80641314_00002778
    lhz r0, 0x6(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80641314_00002778
    clrlwi r0, r31, 24
    lis r3, lbl_80822CD8@ha
    mulli r0, r0, 0x34
    li r4, 0x0
    addi r3, r3, lbl_80822CD8@l
    cmpwi r28, 0x0
    add r3, r3, r0
    stb r4, 0xa(r3)
    stb r4, 0x0(r30)
    bne lbl_fn_80641314_0000270C
    bl fn_80630CD8
    mr r29, r3
lbl_fn_80641314_0000270C:
    clrlwi r0, r29, 16
    lhz r5, 0xa(r30)
    cmplwi r0, 0x5
    beq lbl_fn_80641314_00002754
    cmplwi r0, 0x6
    beq lbl_fn_80641314_00002754
    cmplwi r0, 0xe
    beq lbl_fn_80641314_00002754
    cmplwi r0, 0x18
    beq lbl_fn_80641314_00002754
    cmplwi r0, 0x26
    beq lbl_fn_80641314_00002754
    cmplwi r0, 0x29
    beq lbl_fn_80641314_00002754
    cmplwi r0, 0x25
    beq lbl_fn_80641314_00002754
    cmplwi r0, 0x17
    bne lbl_fn_80641314_00002758
lbl_fn_80641314_00002754:
    li r5, 0xf
lbl_fn_80641314_00002758:
    lis r4, lbl_80822CD8@ha
    clrlwi r3, r31, 24
    addi r4, r4, lbl_80822CD8@l
    li r6, 0x0
    lwz r12, 0x340(r4)
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_80641314_00002778:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806415D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80822CD8@ha
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r4, r4, lbl_80822CD8@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    mtctr r0
lbl_fn_806415D8_000027C4:
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r5, r4, r0
    lbzx r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_fn_806415D8_00002800
    lbz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806415D8_00002800
    lhz r0, 0x14(r5)
    cmplw r3, r0
    beq lbl_fn_806415D8_000028C8
    lhz r0, 0x16(r5)
    cmplw r3, r0
    beq lbl_fn_806415D8_000028C8
lbl_fn_806415D8_00002800:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r5, r4, r0
    lbzx r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_fn_806415D8_00002840
    lbz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806415D8_00002840
    lhz r0, 0x14(r5)
    cmplw r3, r0
    beq lbl_fn_806415D8_000028C8
    lhz r0, 0x16(r5)
    cmplw r3, r0
    beq lbl_fn_806415D8_000028C8
lbl_fn_806415D8_00002840:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r5, r4, r0
    lbzx r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_fn_806415D8_00002880
    lbz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806415D8_00002880
    lhz r0, 0x14(r5)
    cmplw r3, r0
    beq lbl_fn_806415D8_000028C8
    lhz r0, 0x16(r5)
    cmplw r3, r0
    beq lbl_fn_806415D8_000028C8
lbl_fn_806415D8_00002880:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r5, r4, r0
    lbzx r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_fn_806415D8_000028C0
    lbz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806415D8_000028C0
    lhz r0, 0x14(r5)
    cmplw r3, r0
    beq lbl_fn_806415D8_000028C8
    lhz r0, 0x16(r5)
    cmplw r3, r0
    beq lbl_fn_806415D8_000028C8
lbl_fn_806415D8_000028C0:
    addi r31, r31, 0x1
    bdnz lbl_fn_806415D8_000027C4
lbl_fn_806415D8_000028C8:
    clrlwi r0, r31, 24
    cmplwi r0, 0x10
    beq lbl_fn_806415D8_000028E8
    mulli r0, r0, 0x34
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    add r30, r3, r0
    addi r30, r30, 0x10
lbl_fn_806415D8_000028E8:
    cmpwi r30, 0x0
    bne lbl_fn_806415D8_00002920
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806415D8_000029BC
    lis r3, 0x1e
    lis r4, lbl_807B5E38@ha
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B5E38@l
    bl fn_80629830
    b lbl_fn_806415D8_000029BC
lbl_fn_806415D8_00002920:
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    blt lbl_fn_806415D8_0000294C
    lis r3, 0x1e
    lis r4, lbl_807B5E68@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5E68@l
    bl fn_80629830
lbl_fn_806415D8_0000294C:
    lhz r0, 0x4(r30)
    cmplw r29, r0
    bne lbl_fn_806415D8_00002964
    li r0, 0x0
    sth r0, 0x4(r30)
    b lbl_fn_806415D8_0000296C
lbl_fn_806415D8_00002964:
    li r0, 0x0
    sth r0, 0x6(r30)
lbl_fn_806415D8_0000296C:
    lhz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806415D8_000029BC
    lhz r0, 0x6(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806415D8_000029BC
    clrlwi r3, r31, 24
    lis r7, lbl_80822CD8@ha
    mulli r0, r3, 0x34
    li r8, 0x0
    addi r7, r7, lbl_80822CD8@l
    li r4, 0x1
    add r5, r7, r0
    li r6, 0x0
    stb r8, 0xa(r5)
    stb r8, 0x0(r30)
    lwz r12, 0x340(r7)
    lhz r5, 0xa(r30)
    mtctr r12
    bctrl
lbl_fn_806415D8_000029BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80641820(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80822CD8@ha
    stw r0, 0x14(r1)
    li r0, 0x4
    addi r5, r5, lbl_80822CD8@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    li r4, 0x0
    mtctr r0
lbl_fn_80641820_00002A08:
    clrlwi r0, r4, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641820_00002A44
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80641820_00002A44
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_fn_80641820_00002B0C
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_fn_80641820_00002B0C
lbl_fn_80641820_00002A44:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641820_00002A84
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80641820_00002A84
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_fn_80641820_00002B0C
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_fn_80641820_00002B0C
lbl_fn_80641820_00002A84:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641820_00002AC4
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80641820_00002AC4
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_fn_80641820_00002B0C
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_fn_80641820_00002B0C
lbl_fn_80641820_00002AC4:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641820_00002B04
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80641820_00002B04
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_fn_80641820_00002B0C
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_fn_80641820_00002B0C
lbl_fn_80641820_00002B04:
    addi r4, r4, 0x1
    bdnz lbl_fn_80641820_00002A08
lbl_fn_80641820_00002B0C:
    clrlwi r0, r4, 24
    cmplwi r0, 0x10
    beq lbl_fn_80641820_00002B2C
    mulli r0, r0, 0x34
    lis r4, lbl_80822CD8@ha
    addi r4, r4, lbl_80822CD8@l
    add r31, r4, r0
    addi r31, r31, 0x10
lbl_fn_80641820_00002B2C:
    cmpwi r31, 0x0
    bne lbl_fn_80641820_00002B64
    lis r4, lbl_80822CD8@ha
    addi r4, r4, lbl_80822CD8@l
    lbz r0, 0x401(r4)
    cmplwi r0, 0x2
    blt lbl_fn_80641820_00002BB8
    lis r4, lbl_807B5E90@ha
    lis r6, 0x1e
    mr r5, r3
    addi r3, r6, 0x1
    addi r4, r4, lbl_807B5E90@l
    bl fn_80629830
    b lbl_fn_80641820_00002BB8
lbl_fn_80641820_00002B64:
    lis r4, lbl_80822CD8@ha
    addi r4, r4, lbl_80822CD8@l
    lbz r0, 0x401(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80641820_00002B94
    lis r4, lbl_807B5EC8@ha
    lis r7, 0x1e
    mr r5, r3
    mr r6, r30
    addi r3, r7, 0x3
    addi r4, r4, lbl_807B5EC8@l
    bl fn_80629850
lbl_fn_80641820_00002B94:
    cmpwi r30, 0x0
    beq lbl_fn_80641820_00002BAC
    lbz r0, 0x1(r31)
    ori r0, r0, 0x20
    stb r0, 0x1(r31)
    b lbl_fn_80641820_00002BB8
lbl_fn_80641820_00002BAC:
    lbz r0, 0x1(r31)
    rlwinm r0, r0, 0, 27, 25
    stb r0, 0x1(r31)
lbl_fn_80641820_00002BB8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80641A18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80822CD8@ha
    mr r5, r3
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r6, r6, lbl_80822CD8@l
    li r9, 0x0
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    lhz r7, 0x4(r4)
    add r7, r4, r7
    mtctr r0
lbl_fn_80641A18_00002C10:
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r8, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002C4C
    lbz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002C4C
    lhz r0, 0x14(r8)
    cmplw r3, r0
    beq lbl_fn_80641A18_00002D14
    lhz r0, 0x16(r8)
    cmplw r3, r0
    beq lbl_fn_80641A18_00002D14
lbl_fn_80641A18_00002C4C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r8, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002C8C
    lbz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002C8C
    lhz r0, 0x14(r8)
    cmplw r3, r0
    beq lbl_fn_80641A18_00002D14
    lhz r0, 0x16(r8)
    cmplw r3, r0
    beq lbl_fn_80641A18_00002D14
lbl_fn_80641A18_00002C8C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r8, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002CCC
    lbz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002CCC
    lhz r0, 0x14(r8)
    cmplw r3, r0
    beq lbl_fn_80641A18_00002D14
    lhz r0, 0x16(r8)
    cmplw r3, r0
    beq lbl_fn_80641A18_00002D14
lbl_fn_80641A18_00002CCC:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r8, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002D0C
    lbz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002D0C
    lhz r0, 0x14(r8)
    cmplw r3, r0
    beq lbl_fn_80641A18_00002D14
    lhz r0, 0x16(r8)
    cmplw r3, r0
    beq lbl_fn_80641A18_00002D14
lbl_fn_80641A18_00002D0C:
    addi r31, r31, 0x1
    bdnz lbl_fn_80641A18_00002C10
lbl_fn_80641A18_00002D14:
    clrlwi r0, r31, 24
    cmplwi r0, 0x10
    beq lbl_fn_80641A18_00002D34
    mulli r0, r0, 0x34
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    add r9, r3, r0
    addi r9, r9, 0x10
lbl_fn_80641A18_00002D34:
    cmpwi r9, 0x0
    bne lbl_fn_80641A18_00002D70
    lis r3, lbl_80822CD8@ha
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80641A18_00002D64
    lis r3, 0x1e
    lis r4, lbl_807B5F00@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B5F00@l
    bl fn_80629830
lbl_fn_80641A18_00002D64:
    mr r3, r30
    bl fn_80626D50
    b lbl_fn_80641A18_00002F4C
lbl_fn_80641A18_00002D70:
    lbz r7, 0x8(r7)
    lhz r6, 0x2(r4)
    lhz r3, 0x4(r4)
    extrwi r0, r7, 4, 24
    subi r6, r6, 0x1
    clrlwi r8, r7, 28
    addi r3, r3, 0x1
    cmpwi r0, 0xa
    sth r6, 0x2(r4)
    clrlwi r7, r7, 30
    sth r3, 0x4(r4)
    beq lbl_fn_80641A18_00002EB4
    bge lbl_fn_80641A18_00002DBC
    cmpwi r0, 0x1
    beq lbl_fn_80641A18_00002DF8
    bge lbl_fn_80641A18_00002F44
    cmpwi r0, 0x0
    bge lbl_fn_80641A18_00002DC8
    b lbl_fn_80641A18_00002F44
lbl_fn_80641A18_00002DBC:
    cmpwi r0, 0xc
    bge lbl_fn_80641A18_00002F44
    b lbl_fn_80641A18_00002EFC
lbl_fn_80641A18_00002DC8:
    lis r4, lbl_80822CD8@ha
    mr r5, r8
    addi r4, r4, lbl_80822CD8@l
    clrlwi r3, r31, 24
    lwz r12, 0x340(r4)
    li r4, 0x7
    li r6, 0x0
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80626D50
    b lbl_fn_80641A18_00002F4C
lbl_fn_80641A18_00002DF8:
    cmpwi r8, 0x5
    beq lbl_fn_80641A18_00002E04
    b lbl_fn_80641A18_00002EA8
lbl_fn_80641A18_00002E04:
    lis r3, lbl_80822CD8@ha
    clrlwi r4, r31, 24
    addi r3, r3, lbl_80822CD8@l
    lbz r0, 0x401(r3)
    mulli r4, r4, 0x34
    cmplwi r0, 0x4
    add r29, r3, r4
    blt lbl_fn_80641A18_00002E38
    lis r3, 0x1e
    lis r4, lbl_807B5B8C@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B5B8C@l
    bl fn_80629810
lbl_fn_80641A18_00002E38:
    lhz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80641A18_00002E50
    lhz r0, 0x16(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80641A18_00002E7C
lbl_fn_80641A18_00002E50:
    li r0, 0x5
    stb r0, 0x10(r29)
    lhz r3, 0x16(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80641A18_00002E68
    bl fn_806428EC
lbl_fn_80641A18_00002E68:
    lhz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80641A18_00002E84
    bl fn_806428EC
    b lbl_fn_80641A18_00002E84
lbl_fn_80641A18_00002E7C:
    li r0, 0x0
    stb r0, 0x10(r29)
lbl_fn_80641A18_00002E84:
    lis r5, lbl_80822CD8@ha
    clrlwi r3, r31, 24
    addi r5, r5, lbl_80822CD8@l
    li r4, 0x8
    lwz r12, 0x340(r5)
    li r5, 0x0
    li r6, 0x0
    mtctr r12
    bctrl
lbl_fn_80641A18_00002EA8:
    mr r3, r30
    bl fn_80626D50
    b lbl_fn_80641A18_00002F4C
lbl_fn_80641A18_00002EB4:
    clrlwi r3, r31, 24
    lis r6, lbl_80822CD8@ha
    mulli r0, r3, 0x34
    li r4, 0x5
    addi r6, r6, lbl_80822CD8@l
    add r6, r6, r0
    lhz r0, 0x16(r6)
    cmplw r5, r0
    bne lbl_fn_80641A18_00002EDC
    li r4, 0x3
lbl_fn_80641A18_00002EDC:
    lis r6, lbl_80822CD8@ha
    mr r5, r7
    addi r6, r6, lbl_80822CD8@l
    lwz r12, 0x340(r6)
    mr r6, r30
    mtctr r12
    bctrl
    b lbl_fn_80641A18_00002F4C
lbl_fn_80641A18_00002EFC:
    clrlwi r3, r31, 24
    lis r6, lbl_80822CD8@ha
    mulli r0, r3, 0x34
    li r4, 0x6
    addi r6, r6, lbl_80822CD8@l
    add r6, r6, r0
    lhz r0, 0x16(r6)
    cmplw r5, r0
    bne lbl_fn_80641A18_00002F24
    li r4, 0x4
lbl_fn_80641A18_00002F24:
    lis r6, lbl_80822CD8@ha
    mr r5, r7
    addi r6, r6, lbl_80822CD8@l
    lwz r12, 0x340(r6)
    mr r6, r30
    mtctr r12
    bctrl
    b lbl_fn_80641A18_00002F4C
lbl_fn_80641A18_00002F44:
    mr r3, r30
    bl fn_80626D50
lbl_fn_80641A18_00002F4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80641DB0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_17
    mulli r0, r3, 0x34
    lis r3, lbl_80822CD8@ha
    mr r17, r4
    addi r3, r3, lbl_80822CD8@l
    add r27, r3, r0
    mr r18, r7
    lbz r0, 0x11(r27)
    mr r19, r8
    li r21, 0x0
    li r20, 0x0
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_fn_80641DB0_00002FC4
    cmpwi r8, 0x0
    beq lbl_fn_80641DB0_00002FBC
    mr r3, r19
    bl fn_80626D50
lbl_fn_80641DB0_00002FBC:
    li r3, 0x8
    b lbl_fn_80641DB0_000031EC
lbl_fn_80641DB0_00002FC4:
    cmpwi r4, 0x4
    bge lbl_fn_80641DB0_00002FD8
    cmpwi r4, 0x1
    beq lbl_fn_80641DB0_00002FE4
    b lbl_fn_80641DB0_00002FFC
lbl_fn_80641DB0_00002FD8:
    cmpwi r4, 0xa
    beq lbl_fn_80641DB0_00002FF0
    bge lbl_fn_80641DB0_00002FFC
lbl_fn_80641DB0_00002FE4:
    lhz r23, 0x14(r27)
    li r22, 0x2
    b lbl_fn_80641DB0_00003004
lbl_fn_80641DB0_00002FF0:
    lhz r23, 0x16(r27)
    li r22, 0x2
    b lbl_fn_80641DB0_00003004
lbl_fn_80641DB0_00002FFC:
    li r3, 0x5
    b lbl_fn_80641DB0_000031EC
lbl_fn_80641DB0_00003004:
    cmplwi r4, 0x9
    bne lbl_fn_80641DB0_00003014
    li r21, 0x1
    b lbl_fn_80641DB0_00003028
lbl_fn_80641DB0_00003014:
    cmplwi r4, 0x4
    bne lbl_fn_80641DB0_00003028
    rlwinm. r0, r5, 0, 28, 28
    beq lbl_fn_80641DB0_00003028
    li r21, 0x2
lbl_fn_80641DB0_00003028:
    clrlwi r30, r5, 28
    clrlwi r29, r6, 24
    extrwi r28, r6, 8, 16
    li r31, 0x9
lbl_fn_80641DB0_00003038:
    cmpwi r19, 0x0
    beq lbl_fn_80641DB0_00003048
    cmpwi r20, 0x0
    beq lbl_fn_80641DB0_0000307C
lbl_fn_80641DB0_00003048:
    mr r3, r22
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80641DB0_00003064
    li r3, 0x3
    b lbl_fn_80641DB0_000031EC
lbl_fn_80641DB0_00003064:
    sth r31, 0x4(r3)
    li r4, 0x0
    li r24, 0x0
    li r25, 0x0
    li r20, 0x0
    b lbl_fn_80641DB0_000030E0
lbl_fn_80641DB0_0000307C:
    lhz r3, 0x18(r27)
    lhz r24, 0x2(r19)
    subi r0, r3, 0x1
    cmpw r24, r0
    ble lbl_fn_80641DB0_000030C8
    mr r3, r22
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80641DB0_000030AC
    li r3, 0x3
    b lbl_fn_80641DB0_000031EC
lbl_fn_80641DB0_000030AC:
    sth r31, 0x4(r3)
    li r4, 0x1
    lhz r3, 0x18(r27)
    lhz r24, 0x2(r19)
    subi r0, r3, 0x1
    clrlwi r25, r0, 16
    b lbl_fn_80641DB0_000030E0
lbl_fn_80641DB0_000030C8:
    lhz r3, 0x4(r19)
    mr r26, r19
    mr r25, r24
    li r4, 0x0
    subi r0, r3, 0x1
    sth r0, 0x4(r19)
lbl_fn_80641DB0_000030E0:
    lhz r3, 0x4(r26)
    clrlslwi r0, r17, 24, 4
    cmplwi r17, 0x4
    add r3, r26, r3
    or r0, r0, r30
    stb r0, 0x8(r3)
    addi r3, r3, 0x9
    bne lbl_fn_80641DB0_00003114
    cmpwi r18, 0x0
    beq lbl_fn_80641DB0_00003114
    stb r18, 0x0(r3)
    li r25, 0x1
    li r24, 0x1
lbl_fn_80641DB0_00003114:
    cmpwi r4, 0x0
    beq lbl_fn_80641DB0_0000314C
    lhz r0, 0x4(r19)
    clrlwi r5, r25, 16
    add r4, r19, r0
    addi r4, r4, 0x8
    bl memcpy
    lhz r3, 0x4(r19)
    lhz r0, 0x2(r19)
    add r3, r3, r25
    subf r0, r25, r0
    sth r3, 0x4(r19)
    sth r0, 0x2(r19)
    b lbl_fn_80641DB0_00003174
lbl_fn_80641DB0_0000314C:
    cmplwi r21, 0x1
    bne lbl_fn_80641DB0_00003160
    clrlwi r0, r25, 16
    stbx r29, r3, r0
    b lbl_fn_80641DB0_00003174
lbl_fn_80641DB0_00003160:
    cmplwi r21, 0x2
    bne lbl_fn_80641DB0_00003174
    clrlwi r0, r25, 16
    stbux r29, r3, r0
    stb r28, 0x1(r3)
lbl_fn_80641DB0_00003174:
    add r3, r25, r21
    subf r24, r25, r24
    addi r0, r3, 0x1
    sth r0, 0x2(r26)
    lbz r0, 0x11(r27)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_fn_80641DB0_000031A4
    mr r3, r23
    mr r4, r26
    bl fn_80642A34
    clrlwi. r0, r3, 24
    bne lbl_fn_80641DB0_000031AC
lbl_fn_80641DB0_000031A4:
    li r3, 0x8
    b lbl_fn_80641DB0_000031EC
lbl_fn_80641DB0_000031AC:
    clrlwi. r0, r24, 16
    beq lbl_fn_80641DB0_000031BC
    li r17, 0xb
    b lbl_fn_80641DB0_000031D8
lbl_fn_80641DB0_000031BC:
    lhz r3, 0x18(r27)
    clrlwi r4, r25, 16
    subi r0, r3, 0x1
    cmpw r4, r0
    bne lbl_fn_80641DB0_000031D8
    li r17, 0xb
    li r20, 0x1
lbl_fn_80641DB0_000031D8:
    clrlwi. r0, r24, 16
    bne lbl_fn_80641DB0_00003038
    cmpwi r20, 0x0
    bne lbl_fn_80641DB0_00003038
    li r3, 0x0
lbl_fn_80641DB0_000031EC:
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8064204C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    mulli r0, r3, 0x34
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80822CD8@ha
    addi r30, r30, lbl_80822CD8@l
    stw r29, 0x14(r1)
    add r29, r30, r0
    lbz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8064204C_00003240
    li r3, 0x9
    b lbl_fn_8064204C_000032E4
lbl_fn_8064204C_00003240:
    li r5, 0x0
    li r0, 0x100
    sth r5, 0x14(r29)
    li r31, 0x1
    addi r4, r29, 0x1
    li r3, 0x11
    sth r5, 0x16(r29)
    sth r0, 0x1a(r29)
    stb r31, 0x11(r29)
    bl fn_806423A0
    clrlwi. r0, r3, 16
    sth r3, 0x14(r29)
    bne lbl_fn_8064204C_000032DC
    lbz r0, 0x401(r30)
    cmplwi r0, 0x2
    blt lbl_fn_8064204C_00003294
    lis r3, 0x1e
    lis r4, lbl_807B5CAC@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B5CAC@l
    bl fn_80629810
lbl_fn_8064204C_00003294:
    lis r5, lbl_80822CD8@ha
    lis r3, 0x4ec5
    addi r5, r5, lbl_80822CD8@l
    li r4, 0x1
    subf r0, r5, r29
    subi r7, r3, 0x13b1
    mulhw r0, r7, r0
    lwz r12, 0x340(r5)
    li r5, 0xe
    li r6, 0x0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulhwu r0, r7, r0
    extrwi r3, r0, 8, 20
    mtctr r12
    bctrl
    b lbl_fn_8064204C_000032E0
lbl_fn_8064204C_000032DC:
    stb r31, 0x10(r29)
lbl_fn_8064204C_000032E0:
    li r3, 0x0
lbl_fn_8064204C_000032E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80642148(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x11
    stw r0, 0x14(r1)
    bl fn_80642310
    li r3, 0x13
    bl fn_80642310
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
