#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000FAE4(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80016F48(void);
extern void fn_8004B338(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8006AA20(void);
extern void fn_8006AD24(void);
extern void fn_8006B174(void);
extern void fn_8007C3F8(void);
extern void fn_800827E0(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A08E0(void);
extern void fn_800C49F0(void);
extern void fn_800C4E50(void);
extern void fn_800D58A4(void);
extern void fn_800D59B8(void);
extern void fn_800D87C4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473EFC(void);
extern void fn_80473F88(void);
extern void fn_80682428(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807321F0[];
extern u8 lbl_80732248[];
extern u8 lbl_80732368[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80778610[];
extern u8 lbl_80778808[];
extern u8 lbl_807788D0[];
extern u8 lbl_8078FDA8[];
extern u8 lbl_8078FE00[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087D80C;
extern u32 lbl_8087D810;
extern u32 lbl_8087EF10;
extern u32 lbl_80880BE8;
extern u32 lbl_80880BEC;
extern u32 lbl_80880BF0;
extern u32 lbl_80880BF4;
extern u32 lbl_80880BF8;
extern u32 lbl_80880BFC;
extern u32 lbl_80880C00;
extern u32 lbl_80880C04;

/* Function declarations */
void fn_8008937C(void);
void fn_80089488(void);
void fn_80089528(void);
void fn_8008954C(void);
void fn_800895B8(void);
void fn_800895C0(void);
void fn_80089620(void);
void fn_800897C8(void);
void fn_800897D0(void);
void fn_800897D4(void);
void fn_800897D8(void);
void fn_8008984C(void);
void fn_80089854(void);
void fn_8008985C(void);
void fn_8008989C(void);
void fn_800898DC(void);
void fn_8008991C(void);
void fn_8008995C(void);
void fn_8008999C(void);
void fn_800899DC(void);
void fn_80089ACC(void);
void fn_80089AD4(void);
void fn_80089B5C(void);
void fn_80089C28(void);
void fn_80089C7C(void);
void fn_80089C8C(void);
void fn_80089CE4(void);
void fn_80089D70(void);
void fn_80089EE4(void);
void fn_8008A00C(void);
void fn_8008A4B0(void);
void fn_8008A4E0(void);
void fn_8008A714(void);
void fn_8008A76C(void);
void fn_8008AA90(void);
void fn_8008AD4C(void);

asm void fn_8008937C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_807321F0@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, lbl_807321F0@l
    addi r5, r5, 0x23
    stw r31, 0x1c(r1)
    mr r6, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0xe
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x64
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8008937C_000000B4
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r30, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_8008937C_00000080
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r4, r30
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8008937C_00000080:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_80778610@ha
    li r0, 0x1
    stw r29, 0x48(r31)
    addi r3, r3, lbl_80778610@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
lbl_fn_8008937C_000000B4:
    cmpwi r31, 0x0
    beq lbl_fn_8008937C_000000E8
    lwz r0, 0x58(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8008937C_000000D4
    stw r31, 0x58(r29)
    stw r31, 0x5c(r29)
    b lbl_fn_8008937C_000000E0
lbl_fn_8008937C_000000D4:
    lwz r3, 0x5c(r29)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r29)
lbl_fn_8008937C_000000E0:
    mr r3, r31
    b lbl_fn_8008937C_000000F0
lbl_fn_8008937C_000000E8:
    lwz r3, lbl_8087EF10
    addi r3, r3, 0x74
lbl_fn_8008937C_000000F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80089488(void)
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
    lwz r6, 0x0(r5)
    cmpw r4, r6
    bne lbl_fn_80089488_0000013C
    b lbl_fn_80089488_00000190
lbl_fn_80089488_0000013C:
    addi r0, r6, 0x1
    stw r0, 0x0(r5)
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80089488_0000018C
    lwz r31, 0x58(r3)
    b lbl_fn_80089488_00000184
lbl_fn_80089488_00000158:
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80089488_00000180
    b lbl_fn_80089488_00000190
lbl_fn_80089488_00000180:
    lwz r31, 0x44(r31)
lbl_fn_80089488_00000184:
    cmpwi r31, 0x0
    bne lbl_fn_80089488_00000158
lbl_fn_80089488_0000018C:
    li r3, 0x0
lbl_fn_80089488_00000190:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80089528(void)
{
    nofralloc
    lwz r0, 0x0(r5)
    cmpw r4, r0
    bne lbl_fn_80089528_000001BC
    b lbl_fn_80089528_000001C0
lbl_fn_80089528_000001BC:
    li r3, 0x0
lbl_fn_80089528_000001C0:
    lwz r4, 0x0(r5)
    addi r0, r4, 0x1
    stw r0, 0x0(r5)
    blr
}

asm void fn_8008954C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x60(r3)
    stw r31, 0xc(r1)
    li r31, 0x1
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    beq lbl_fn_8008954C_00000220
    lwz r30, 0x58(r3)
    b lbl_fn_8008954C_00000218
lbl_fn_8008954C_000001FC:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    add r31, r31, r3
    lwz r30, 0x44(r30)
lbl_fn_8008954C_00000218:
    cmpwi r30, 0x0
    bne lbl_fn_8008954C_000001FC
lbl_fn_8008954C_00000220:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800895B8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800895C0(void)
{
    nofralloc
    lwz r6, 0x58(r3)
    li r5, 0x0
    b lbl_fn_800895C0_00000294
lbl_fn_800895C0_00000250:
    cmplw r6, r4
    bne lbl_fn_800895C0_0000028C
    cmpwi r5, 0x0
    bne lbl_fn_800895C0_0000026C
    lwz r0, 0x44(r6)
    stw r0, 0x58(r3)
    b lbl_fn_800895C0_00000274
lbl_fn_800895C0_0000026C:
    lwz r0, 0x44(r6)
    stw r0, 0x44(r5)
lbl_fn_800895C0_00000274:
    lwz r0, 0x5c(r3)
    cmplw r6, r0
    bne lbl_fn_800895C0_00000284
    stw r5, 0x5c(r3)
lbl_fn_800895C0_00000284:
    li r3, 0x1
    blr
lbl_fn_800895C0_0000028C:
    mr r5, r6
    lwz r6, 0x44(r6)
lbl_fn_800895C0_00000294:
    cmpwi r6, 0x0
    bne lbl_fn_800895C0_00000250
    li r3, 0x0
    blr
}

asm void fn_80089620(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    bne lbl_fn_80089620_00000430
    lis r31, lbl_807321F0@ha
    li r3, 0xf4
    addi r31, r31, lbl_807321F0@l
    li r4, 0x1
    addi r5, r31, 0x23
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80089620_0000042C
    stw r29, 0x0(r3)
    li r5, 0x0
    lis r4, lbl_80778808@ha
    addi r31, r31, 0x34
    stw r5, 0x4(r3)
    addi r0, r3, 0x14
    cmplw r31, r0
    addi r4, r4, lbl_80778808@l
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r4, 0x10(r3)
    beq lbl_fn_80089620_00000344
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r30, 0x14
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80089620_00000344:
    li r6, 0x0
    stw r6, 0x54(r30)
    lis r5, lbl_80778610@ha
    lis r4, lbl_807321F0@ha
    stw r6, 0x58(r30)
    li r0, 0x1
    addi r4, r4, lbl_807321F0@l
    lis r3, lbl_80778808@ha
    stw r0, 0x5c(r30)
    addi r5, r5, lbl_80778610@l
    addi r31, r4, 0x41
    addi r0, r30, 0x78
    stw r6, 0x60(r30)
    cmplw r31, r0
    addi r3, r3, lbl_80778808@l
    stw r6, 0x64(r30)
    stw r5, 0x10(r30)
    stw r6, 0x68(r30)
    stw r6, 0x6c(r30)
    stw r6, 0x70(r30)
    stw r3, 0x74(r30)
    beq lbl_fn_80089620_000003B8
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r30, 0x78
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80089620_000003B8:
    li r5, 0x0
    stw r5, 0xb8(r30)
    lis r4, lbl_80778610@ha
    li r0, 0x1
    stw r5, 0xbc(r30)
    addi r4, r4, lbl_80778610@l
    lfs f3, lbl_80880BE8
    addi r3, r30, 0x10
    stw r0, 0xc0(r30)
    lfs f2, lbl_80880BEC
    stw r5, 0xc4(r30)
    lfs f1, lbl_80880BF0
    stw r5, 0xc8(r30)
    lfs f0, lbl_80880BF4
    stw r4, 0x74(r30)
    stw r5, 0xcc(r30)
    stw r5, 0xd0(r30)
    stw r5, 0xd4(r30)
    stfs f3, 0xd8(r30)
    stfs f2, 0xdc(r30)
    stfs f1, 0xe0(r30)
    stfs f0, 0xe4(r30)
    stw r5, 0xe8(r30)
    stw r5, 0xec(r30)
    stw r5, 0xf0(r30)
    lwz r12, 0x10(r30)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_80089620_0000042C:
    stw r30, lbl_8087EF10
lbl_fn_80089620_00000430:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800897C8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800897D0(void)
{
    nofralloc
    blr
}

asm void fn_800897D4(void)
{
    nofralloc
    blr
}

asm void fn_800897D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r5, 0x48(r4)
    cmpwi r5, 0x0
    beq lbl_fn_800897D8_000004BC
    addi r0, r3, 0x74
    cmplw r0, r4
    beq lbl_fn_800897D8_000004BC
    lwz r12, 0x0(r5)
    mr r3, r5
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl_fn_800897D8_000004BC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_800897D8_000004BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008984C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80089854(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8008985C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8008985C_00000508
    cmpwi r4, 0x0
    ble lbl_fn_8008985C_00000508
    bl dtor_80084684
lbl_fn_8008985C_00000508:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008989C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8008989C_00000548
    cmpwi r4, 0x0
    ble lbl_fn_8008989C_00000548
    bl dtor_80084684
lbl_fn_8008989C_00000548:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800898DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800898DC_00000588
    cmpwi r4, 0x0
    ble lbl_fn_800898DC_00000588
    bl dtor_80084684
lbl_fn_800898DC_00000588:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008991C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8008991C_000005C8
    cmpwi r4, 0x0
    ble lbl_fn_8008991C_000005C8
    bl dtor_80084684
lbl_fn_8008991C_000005C8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008995C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8008995C_00000608
    cmpwi r4, 0x0
    ble lbl_fn_8008995C_00000608
    bl dtor_80084684
lbl_fn_8008995C_00000608:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008999C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8008999C_00000648
    cmpwi r4, 0x0
    ble lbl_fn_8008999C_00000648
    bl dtor_80084684
lbl_fn_8008999C_00000648:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800899DC(void)
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
    beq lbl_fn_800899DC_0000072C
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_800899DC_000006B0
lbl_fn_800899DC_00000698:
    lwz r3, 0x4(r28)
    li r4, 0x1
    lwzx r3, r3, r31
    bl fn_8007C3F8
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_800899DC_000006B0:
    lwz r0, 0x0(r28)
    cmplw r30, r0
    blt lbl_fn_800899DC_00000698
    addic. r0, r28, 0x28
    beq lbl_fn_800899DC_000006E0
    lwz r3, 0x2c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800899DC_000006D4
    bl fn_80084C24
lbl_fn_800899DC_000006D4:
    li r0, 0x0
    stw r0, 0x2c(r28)
    stw r0, 0x28(r28)
lbl_fn_800899DC_000006E0:
    lis r4, fn_80016F48@ha
    addi r3, r28, 0x8
    addi r4, r4, fn_80016F48@l
    li r5, 0x8
    li r6, 0x4
    bl fn_806959D8
    cmpwi r28, 0x0
    beq lbl_fn_800899DC_0000071C
    lwz r3, 0x4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800899DC_00000710
    bl fn_80084C24
lbl_fn_800899DC_00000710:
    li r0, 0x0
    stw r0, 0x4(r28)
    stw r0, 0x0(r28)
lbl_fn_800899DC_0000071C:
    cmpwi r29, 0x0
    ble lbl_fn_800899DC_0000072C
    mr r3, r28
    bl dtor_80084684
lbl_fn_800899DC_0000072C:
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

asm void fn_80089ACC(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_80089AD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_80089AD4_000007C0
lbl_fn_80089AD4_00000778:
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_80089AD4_000007A4
lbl_fn_80089AD4_00000784:
    lwz r0, 0xc(r3)
    add r3, r0, r30
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80089AD4_0000079C
    bl fn_800D58A4
lbl_fn_80089AD4_0000079C:
    addi r30, r30, 0x18
    addi r28, r28, 0x1
lbl_fn_80089AD4_000007A4:
    lwz r0, 0x4(r27)
    lwzx r3, r31, r0
    lbz r0, 0x4a(r3)
    cmpw r28, r0
    blt lbl_fn_80089AD4_00000784
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_80089AD4_000007C0:
    lwz r0, 0x0(r27)
    cmplw r29, r0
    blt lbl_fn_80089AD4_00000778
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80089B5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_80089B5C_00000888
lbl_fn_80089B5C_00000800:
    li r26, 0x0
    li r29, 0x0
    b lbl_fn_80089B5C_0000086C
lbl_fn_80089B5C_0000080C:
    lwz r0, 0xc(r3)
    add r3, r0, r29
    lwz r28, 0x4(r3)
    cmpwi r28, 0x0
    beq lbl_fn_80089B5C_00000864
    lwz r0, 0x28(r28)
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80089B5C_00000850
    mr r3, r28
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_80089B5C_00000854
    addi r3, r28, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_80089B5C_00000854
lbl_fn_80089B5C_00000850:
    li r31, 0x1
lbl_fn_80089B5C_00000854:
    cmpwi r31, 0x0
    beq lbl_fn_80089B5C_00000864
    li r3, 0x1
    b lbl_fn_80089B5C_00000898
lbl_fn_80089B5C_00000864:
    addi r29, r29, 0x18
    addi r26, r26, 0x1
lbl_fn_80089B5C_0000086C:
    lwz r0, 0x4(r25)
    lwzx r3, r30, r0
    lbz r0, 0x4a(r3)
    cmpw r26, r0
    blt lbl_fn_80089B5C_0000080C
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_80089B5C_00000888:
    lwz r0, 0x0(r25)
    cmplw r27, r0
    blt lbl_fn_80089B5C_00000800
    li r3, 0x0
lbl_fn_80089B5C_00000898:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80089C28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80473E74
    lfs f0, lbl_80880BF8
    lis r4, lbl_8078FE00@ha
    li r0, 0x0
    stw r0, 0x8(r31)
    addi r4, r4, lbl_8078FE00@l
    mr r3, r31
    stw r4, 0x0(r31)
    stfs f0, 0xc(r31)
    stw r0, 0x10(r31)
    stw r0, 0x14(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80089C7C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_80089C8C(void)
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
    beq lbl_fn_80089C8C_0000094C
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_80089C8C_0000094C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80089C8C_0000094C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80089CE4(void)
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
    beq lbl_fn_80089CE4_000009D8
    bl fn_80473F88
    addic. r0, r30, 0x10
    beq lbl_fn_80089CE4_000009B4
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80089CE4_000009A8
    bl fn_80084C24
lbl_fn_80089CE4_000009A8:
    li r0, 0x0
    stw r0, 0x14(r30)
    stw r0, 0x10(r30)
lbl_fn_80089CE4_000009B4:
    cmpwi r30, 0x0
    beq lbl_fn_80089CE4_000009C8
    mr r3, r30
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80089CE4_000009C8:
    cmpwi r31, 0x0
    ble lbl_fn_80089CE4_000009D8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80089CE4_000009D8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80089D70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r3, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_800DC6B4
    lfs f0, 0x0(r28)
    psq_l f1, 0x0(r28), 0, 0
    fabs f0, f0
    lfs f2, 0x8(r28)
    psq_st f1, 0x8(r27), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    frsp f3, f0
    lfs f0, lbl_80880BFC
    stfs f2, 0x10(r27)
    lfs f2, 0x8(r29)
    psq_st f1, 0x14(r27), 0, 0
    fcmpo cr0, f3, f0
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r27)
    lfs f2, 0x8(r30)
    stw r3, 0x0(r27)
    psq_st f1, 0x20(r27), 0, 0
    stfs f2, 0x28(r27)
    stw r31, 0x4(r27)
    bge lbl_fn_80089D70_00000A9C
    lfs f3, 0x4(r28)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80089D70_00000A9C
    lfs f3, 0x8(r28)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80089D70_00000AA8
lbl_fn_80089D70_00000A9C:
    lwz r0, 0x4(r27)
    ori r0, r0, 0x1
    stw r0, 0x4(r27)
lbl_fn_80089D70_00000AA8:
    lfs f3, 0x0(r29)
    lfs f0, lbl_80880BFC
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80089D70_00000AE8
    lfs f3, 0x4(r29)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80089D70_00000AE8
    lfs f3, 0x8(r29)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80089D70_00000AF4
lbl_fn_80089D70_00000AE8:
    lwz r0, 0x4(r27)
    ori r0, r0, 0x2
    stw r0, 0x4(r27)
lbl_fn_80089D70_00000AF4:
    lfs f0, 0x0(r30)
    lfs f4, lbl_80880C00
    lfs f3, lbl_80880BFC
    fsubs f0, f0, f4
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_80089D70_00000B44
    lfs f0, 0x4(r30)
    fsubs f0, f0, f4
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_80089D70_00000B44
    lfs f0, 0x8(r30)
    fsubs f0, f0, f4
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f3
    blt lbl_fn_80089D70_00000B50
lbl_fn_80089D70_00000B44:
    lwz r0, 0x4(r27)
    ori r0, r0, 0x4
    stw r0, 0x4(r27)
lbl_fn_80089D70_00000B50:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80089EE4(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x148(r1)
    stfd f30, 0x140(r1)
    stw r31, 0x13c(r1)
    mr r31, r4
    stw r30, 0x138(r1)
    mr r30, r3
    mr r3, r31
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x30
    bl strcpy
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f31, 0x20(r1)
    mr r3, r31
    stfs f30, 0x24(r1)
    stfs f1, 0x28(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f31, 0x14(r1)
    mr r3, r31
    stfs f30, 0x18(r1)
    stfs f1, 0x1c(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f30, 0x8(r1)
    mr r3, r31
    stfs f31, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r8, r3
    mr r3, r30
    addi r4, r1, 0x30
    addi r5, r1, 0x20
    addi r6, r1, 0x14
    addi r7, r1, 0x8
    bl fn_80089D70
    lwz r0, 0x154(r1)
    lfd f31, 0x148(r1)
    lfd f30, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8008A00C(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    stw r0, 0x694(r1)
    addi r11, r1, 0x690
    bl _savegpr_23
    lis r6, lbl_807774D8@ha
    li r0, 0x0
    addi r6, r6, lbl_807774D8@l
    stw r6, 0x34(r1)
    mr r23, r3
    mr r25, r4
    mr r24, r5
    stw r0, 0x38(r1)
    addi r3, r1, 0x44
    li r4, 0x0
    stw r0, 0x3c(r1)
    li r5, 0x400
    stw r0, 0x40(r1)
    stw r0, 0x664(r1)
    bl memset
    addi r3, r1, 0x644
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x34(r1)
    mr r4, r25
    mr r5, r24
    addi r3, r1, 0x34
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x34(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    addi r29, r1, 0x10
    addi r28, r1, 0x1c
    addi r27, r1, 0x28
    lis r30, lbl_80732368@ha
    lis r31, fn_8000FAE4@ha
    li r25, 0x8
lbl_fn_8008A00C_00000D3C:
    addi r3, r1, 0x34
    bl fn_8005B9CC
    addi r4, r30, lbl_80732368@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8008A00C_0000110C
    addi r3, r1, 0x8
    addi r4, r1, 0x34
    bl fn_80089EE4
    lwz r0, 0x8(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8008A00C_00000D78
    lwz r0, 0x4(r23)
    cmpwi r0, 0x0
    bne lbl_fn_8008A00C_00000F10
lbl_fn_8008A00C_00000D78:
    lwz r0, 0x4(r23)
    cmplwi r0, 0x8
    bgt lbl_fn_8008A00C_000010B4
    li r3, 0x170
    li r4, 0x0
    la r5, lbl_8087D810
    la r6, lbl_8087D80C
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x8(r23)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_8008A00C_00000F04
    lwz r0, 0x0(r23)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8008A00C_00000DD4
    mr r5, r0
lbl_fn_8008A00C_00000DD4:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8008A00C_00000EF0
    srwi. r0, r5, 1
    mtctr r0
    beq lbl_fn_8008A00C_00000E98
lbl_fn_8008A00C_00000DEC:
    lwz r0, 0x8(r23)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    add r6, r3, r4
    lwz r0, 0x8(r23)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_8008A00C_00000DEC
    andi. r5, r5, 0x1
    beq lbl_fn_8008A00C_00000EF0
lbl_fn_8008A00C_00000E98:
    mtctr r5
lbl_fn_8008A00C_00000E9C:
    lwz r0, 0x8(r23)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_8008A00C_00000E9C
lbl_fn_8008A00C_00000EF0:
    lwz r3, 0x8(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8008A00C_00000F04
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8008A00C_00000F04:
    stw r24, 0x8(r23)
    stw r25, 0x4(r23)
    b lbl_fn_8008A00C_000010B4
lbl_fn_8008A00C_00000F10:
    lwz r3, 0x0(r23)
    cmplw r3, r0
    blt lbl_fn_8008A00C_000010B4
    slwi r26, r3, 1
    cmplw r0, r26
    bgt lbl_fn_8008A00C_000010B4
    mulli r3, r26, 0x2c
    li r4, 0x0
    la r5, lbl_8087D810
    la r6, lbl_8087D80C
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r26
    addi r4, r31, fn_8000FAE4@l
    li r5, 0x0
    li r6, 0x2c
    bl fn_80695720
    lwz r0, 0x8(r23)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_8008A00C_000010AC
    lwz r0, 0x0(r23)
    mr r5, r26
    cmplw r26, r0
    ble lbl_fn_8008A00C_00000F7C
    mr r5, r0
lbl_fn_8008A00C_00000F7C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8008A00C_00001098
    srwi. r0, r5, 1
    mtctr r0
    beq lbl_fn_8008A00C_00001040
lbl_fn_8008A00C_00000F94:
    lwz r0, 0x8(r23)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    add r6, r3, r4
    lwz r0, 0x8(r23)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_8008A00C_00000F94
    andi. r5, r5, 0x1
    beq lbl_fn_8008A00C_00001098
lbl_fn_8008A00C_00001040:
    mtctr r5
lbl_fn_8008A00C_00001044:
    lwz r0, 0x8(r23)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x2c
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r7)
    psq_l f1, 0x8(r7), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r7)
    psq_l f1, 0x14(r7), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lfs f2, 0x28(r7)
    psq_l f1, 0x20(r7), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    bdnz lbl_fn_8008A00C_00001044
lbl_fn_8008A00C_00001098:
    lwz r3, 0x8(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8008A00C_000010AC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8008A00C_000010AC:
    stw r24, 0x8(r23)
    stw r26, 0x4(r23)
lbl_fn_8008A00C_000010B4:
    lwz r0, 0x0(r23)
    lwz r4, 0x8(r23)
    mulli r3, r0, 0x2c
    lwz r0, 0x8(r1)
    stwux r0, r3, r4
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lfs f2, 0x18(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x24(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lfs f2, 0x30(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x20(r3), 0, 0
    stfs f2, 0x28(r3)
    lwz r3, 0x0(r23)
    addi r0, r3, 0x1
    stw r0, 0x0(r23)
lbl_fn_8008A00C_0000110C:
    addi r3, r1, 0x34
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8008A00C_00000D3C
    addi r11, r1, 0x690
    bl _restgpr_23
    lwz r0, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_8008A4B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800A08E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008A4E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_807788D0@ha
    lfs f1, lbl_80880BF8
    stw r0, 0x24(r1)
    addi r5, r5, lbl_807788D0@l
    lfs f0, lbl_80880C00
    li r0, 0x6
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r3, 0xfc
    stw r29, 0x14(r1)
    mr r29, r3
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r31, 0x38(r3)
    stw r31, 0x3c(r3)
    stfs f1, 0x34(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x24(r3)
    stfs f1, 0x20(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x8(r3)
    stw r31, 0x50(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x54(r3)
    stw r31, 0x58(r3)
    stw r31, 0x5c(r3)
    stw r0, 0x94(r3)
    stfs f1, 0x98(r3)
    stw r31, 0xb8(r3)
    stw r31, 0xcc(r3)
    stw r31, 0xd0(r3)
    stw r31, 0xd4(r3)
    stw r31, 0xd8(r3)
    stw r31, 0xdc(r3)
    stw r31, 0xe0(r3)
    stw r31, 0xe4(r3)
    stw r31, 0xe8(r3)
    stw r31, 0xec(r3)
    stw r31, 0xf0(r3)
    stw r31, 0xf4(r3)
    stw r31, 0xf8(r3)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FDA8@ha
    lis r4, fn_80089C7C@ha
    addi r3, r3, lbl_8078FDA8@l
    lis r5, fn_80016F48@ha
    stw r3, 0x0(r30)
    addi r3, r29, 0x10c
    addi r4, r4, fn_80089C7C@l
    addi r5, r5, fn_80016F48@l
    stw r31, 0x104(r29)
    li r6, 0x8
    li r7, 0x4
    stw r31, 0x108(r29)
    bl fn_806958E0
    lfs f1, lbl_80880C00
    lis r4, fn_80089C28@ha
    lfs f0, lbl_80880BF8
    lis r5, fn_80089CE4@ha
    stw r31, 0x12c(r29)
    addi r3, r29, 0x164
    addi r4, r4, fn_80089C28@l
    addi r5, r5, fn_80089CE4@l
    stw r31, 0x130(r29)
    li r6, 0x18
    li r7, 0x4
    stw r31, 0x134(r29)
    stw r31, 0x138(r29)
    stw r31, 0x13c(r29)
    stw r31, 0x140(r29)
    stw r31, 0x144(r29)
    stw r31, 0x148(r29)
    stfs f1, 0x14c(r29)
    stfs f1, 0x150(r29)
    stfs f0, 0x154(r29)
    stfs f1, 0x158(r29)
    stw r31, 0x15c(r29)
    stw r31, 0x160(r29)
    bl fn_806958E0
    addi r30, r29, 0x1c4
    mr r3, r30
    bl fn_80473E74
    lwz r3, 0x20c(r29)
    li r0, -0x1
    li r4, 0x1
    lfs f1, lbl_80880BF8
    clrlwi r3, r3, 8
    lfs f0, lbl_80880C00
    rlwimi r3, r4, 16, 8, 15
    lis r5, lbl_8078FE00@ha
    rlwinm r3, r3, 0, 25, 15
    stw r31, 0x8(r30)
    ori r3, r3, 0x40
    addi r5, r5, lbl_8078FE00@l
    clrrwi r4, r3, 6
    stw r5, 0x0(r30)
    mr r3, r29
    stfs f1, 0xc(r30)
    stw r31, 0x10(r30)
    stw r31, 0x14(r30)
    stw r31, 0x1dc(r29)
    stw r31, 0x1e0(r29)
    stw r31, 0x1e4(r29)
    stw r31, 0x1e8(r29)
    stw r31, 0x1ec(r29)
    stw r31, 0x1f0(r29)
    stw r31, 0x1f4(r29)
    stw r31, 0x1f8(r29)
    stw r31, 0x1fc(r29)
    stw r31, 0x200(r29)
    stw r31, 0x204(r29)
    stw r31, 0x208(r29)
    stw r4, 0x20c(r29)
    stw r31, 0x210(r29)
    stfs f1, 0x9c(r29)
    stfs f1, 0xa0(r29)
    stfs f1, 0xa4(r29)
    stfs f1, 0xa8(r29)
    stfs f0, 0xac(r29)
    stw r0, 0xb0(r29)
    stw r0, 0xb4(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8008A714(void)
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
    beq lbl_fn_8008A714_000013D4
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_8008A714_000013D4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8008A714_000013D4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008A76C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_8008A76C_000016FC
    lis r4, lbl_807788D0@ha
    addi r4, r4, lbl_807788D0@l
    stw r4, 0x0(r3)
    bl fn_8008AA90
    addic. r0, r30, 0x210
    beq lbl_fn_8008A76C_00001444
    lwz r4, 0x210(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8008A76C_00001444
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_00001444
    bl fn_800897D8
lbl_fn_8008A76C_00001444:
    addic. r0, r30, 0x208
    beq lbl_fn_8008A76C_0000146C
    lwz r29, 0x208(r30)
    cmpwi r29, 0x0
    beq lbl_fn_8008A76C_0000146C
    addi r3, r29, 0x8
    li r4, -0x1
    bl fn_8004B338
    mr r3, r29
    bl dtor_80084684
lbl_fn_8008A76C_0000146C:
    addic. r0, r30, 0x1e4
    beq lbl_fn_8008A76C_00001484
    lwz r3, 0x1ec(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_00001484
    bl fn_80084C24
lbl_fn_8008A76C_00001484:
    addic. r29, r30, 0x1c4
    beq lbl_fn_8008A76C_000014CC
    mr r3, r29
    bl fn_80473F88
    addic. r0, r29, 0x10
    beq lbl_fn_8008A76C_000014B8
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_000014AC
    bl fn_80084C24
lbl_fn_8008A76C_000014AC:
    li r0, 0x0
    stw r0, 0x14(r29)
    stw r0, 0x10(r29)
lbl_fn_8008A76C_000014B8:
    cmpwi r29, 0x0
    beq lbl_fn_8008A76C_000014CC
    mr r3, r29
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8008A76C_000014CC:
    lis r4, fn_80089CE4@ha
    addi r3, r30, 0x164
    addi r4, r4, fn_80089CE4@l
    li r5, 0x18
    li r6, 0x4
    bl fn_806959D8
    addic. r0, r30, 0x144
    beq lbl_fn_8008A76C_00001508
    lwz r3, 0x148(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_000014FC
    bl fn_80084C24
lbl_fn_8008A76C_000014FC:
    li r0, 0x0
    stw r0, 0x148(r30)
    stw r0, 0x144(r30)
lbl_fn_8008A76C_00001508:
    addic. r0, r30, 0x13c
    beq lbl_fn_8008A76C_0000152C
    lwz r3, 0x140(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_00001520
    bl fn_80084C24
lbl_fn_8008A76C_00001520:
    li r0, 0x0
    stw r0, 0x140(r30)
    stw r0, 0x13c(r30)
lbl_fn_8008A76C_0000152C:
    addic. r29, r30, 0x104
    beq lbl_fn_8008A76C_000015C4
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_8008A76C_00001558
lbl_fn_8008A76C_00001540:
    lwz r3, 0x4(r29)
    li r4, 0x1
    lwzx r3, r3, r27
    bl fn_8007C3F8
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_fn_8008A76C_00001558:
    lwz r0, 0x0(r29)
    cmplw r28, r0
    blt lbl_fn_8008A76C_00001540
    addic. r0, r29, 0x28
    beq lbl_fn_8008A76C_00001588
    lwz r3, 0x2c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_0000157C
    bl fn_80084C24
lbl_fn_8008A76C_0000157C:
    li r0, 0x0
    stw r0, 0x2c(r29)
    stw r0, 0x28(r29)
lbl_fn_8008A76C_00001588:
    lis r4, fn_80016F48@ha
    addi r3, r29, 0x8
    addi r4, r4, fn_80016F48@l
    li r5, 0x8
    li r6, 0x4
    bl fn_806959D8
    cmpwi r29, 0x0
    beq lbl_fn_8008A76C_000015C4
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_000015B8
    bl fn_80084C24
lbl_fn_8008A76C_000015B8:
    li r0, 0x0
    stw r0, 0x4(r29)
    stw r0, 0x0(r29)
lbl_fn_8008A76C_000015C4:
    addic. r3, r30, 0xfc
    beq lbl_fn_8008A76C_000015D4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8008A76C_000015D4:
    addic. r0, r30, 0xf4
    beq lbl_fn_8008A76C_000015F8
    lwz r3, 0xf8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_000015EC
    bl fn_80084C24
lbl_fn_8008A76C_000015EC:
    li r0, 0x0
    stw r0, 0xf8(r30)
    stw r0, 0xf4(r30)
lbl_fn_8008A76C_000015F8:
    addic. r0, r30, 0xec
    beq lbl_fn_8008A76C_0000161C
    lwz r3, 0xf0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_00001610
    bl fn_80084C24
lbl_fn_8008A76C_00001610:
    li r0, 0x0
    stw r0, 0xf0(r30)
    stw r0, 0xec(r30)
lbl_fn_8008A76C_0000161C:
    addic. r0, r30, 0xe4
    beq lbl_fn_8008A76C_00001640
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_00001634
    bl fn_80084C24
lbl_fn_8008A76C_00001634:
    li r0, 0x0
    stw r0, 0xe8(r30)
    stw r0, 0xe4(r30)
lbl_fn_8008A76C_00001640:
    addic. r0, r30, 0xd8
    beq lbl_fn_8008A76C_00001660
    lwz r3, 0xe0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_00001660
    beq lbl_fn_8008A76C_00001660
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8008A76C_00001660:
    addic. r0, r30, 0xcc
    beq lbl_fn_8008A76C_00001678
    lwz r3, 0xd4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_00001678
    bl fn_80084C24
lbl_fn_8008A76C_00001678:
    addic. r28, r30, 0xb8
    beq lbl_fn_8008A76C_000016B8
    beq lbl_fn_8008A76C_000016B8
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_000016B8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8008A76C_000016B0
    addi r3, r28, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8008A76C_000016B0:
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_fn_8008A76C_000016B8:
    addic. r28, r30, 0x8
    beq lbl_fn_8008A76C_000016EC
    addic. r0, r28, 0x30
    beq lbl_fn_8008A76C_000016EC
    lwz r3, 0x34(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8008A76C_000016E0
    beq lbl_fn_8008A76C_000016E0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8008A76C_000016E0:
    li r0, 0x0
    stw r0, 0x34(r28)
    stw r0, 0x30(r28)
lbl_fn_8008A76C_000016EC:
    cmpwi r31, 0x0
    ble lbl_fn_8008A76C_000016FC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8008A76C_000016FC:
    mr r3, r30
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8008AA90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, 0x0
    li r6, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    lwz r0, 0x20c(r3)
    clrlwi r0, r0, 8
    stw r0, 0x20c(r3)
    b lbl_fn_8008AA90_0000175C
lbl_fn_8008AA90_00001740:
    lwz r4, 0x148(r3)
    addi r7, r7, 0x1
    lwzx r5, r4, r6
    addi r6, r6, 0x4
    lwz r4, 0x0(r5)
    subi r0, r4, 0x1
    stw r0, 0x0(r5)
lbl_fn_8008AA90_0000175C:
    lwz r0, 0x144(r3)
    cmplw r7, r0
    blt lbl_fn_8008AA90_00001740
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_8008AA90_000017A4
lbl_fn_8008AA90_00001774:
    lwz r3, 0x140(r31)
    li r4, 0x1
    lwzx r3, r3, r28
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_800C49F0
    lwz r3, 0x140(r31)
    li r4, 0x1
    lwzx r3, r3, r28
    bl fn_800C4E50
    addi r28, r28, 0x4
    addi r29, r29, 0x1
lbl_fn_8008AA90_000017A4:
    lwz r0, 0x13c(r31)
    cmplw r29, r0
    blt lbl_fn_8008AA90_00001774
    li r27, 0x0
    li r30, 0x0
    mr r29, r27
    b lbl_fn_8008AA90_00001840
lbl_fn_8008AA90_000017C0:
    lwz r3, 0x1ec(r31)
    lwzx r3, r3, r30
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8008AA90_000017F8
    beq lbl_fn_8008AA90_000017EC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8008AA90_000017EC:
    lwz r3, 0x1ec(r31)
    lwzx r3, r3, r30
    stw r29, 0x10(r3)
lbl_fn_8008AA90_000017F8:
    lwz r3, 0x1ec(r31)
    lwzx r3, r3, r30
    addi r3, r3, 0x14
    bl fn_800D87C4
    lwz r3, 0x1ec(r31)
    lwzx r28, r3, r30
    cmpwi r28, 0x0
    beq lbl_fn_8008AA90_00001838
    beq lbl_fn_8008AA90_00001830
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8008AA90_00001830
    lwz r3, 0x8(r28)
    bl dtor_80084684
lbl_fn_8008AA90_00001830:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8008AA90_00001838:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
lbl_fn_8008AA90_00001840:
    lwz r0, 0x1e4(r31)
    cmplw r27, r0
    blt lbl_fn_8008AA90_000017C0
    lwz r30, 0x15c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8008AA90_000018F4
    beq lbl_fn_8008AA90_000018F4
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_8008AA90_00001880
lbl_fn_8008AA90_00001868:
    lwz r3, 0x4(r30)
    li r4, 0x1
    lwzx r3, r3, r29
    bl fn_8007C3F8
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_8008AA90_00001880:
    lwz r0, 0x0(r30)
    cmplw r28, r0
    blt lbl_fn_8008AA90_00001868
    addic. r0, r30, 0x28
    beq lbl_fn_8008AA90_000018B0
    lwz r3, 0x2c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008AA90_000018A4
    bl fn_80084C24
lbl_fn_8008AA90_000018A4:
    li r0, 0x0
    stw r0, 0x2c(r30)
    stw r0, 0x28(r30)
lbl_fn_8008AA90_000018B0:
    lis r4, fn_80016F48@ha
    addi r3, r30, 0x8
    addi r4, r4, fn_80016F48@l
    li r5, 0x8
    li r6, 0x4
    bl fn_806959D8
    cmpwi r30, 0x0
    beq lbl_fn_8008AA90_000018EC
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008AA90_000018E0
    bl fn_80084C24
lbl_fn_8008AA90_000018E0:
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
lbl_fn_8008AA90_000018EC:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8008AA90_000018F4:
    lwz r30, 0x160(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8008AA90_0000199C
    beq lbl_fn_8008AA90_0000199C
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_8008AA90_00001928
lbl_fn_8008AA90_00001910:
    lwz r3, 0x4(r30)
    li r4, 0x1
    lwzx r3, r3, r29
    bl fn_8007C3F8
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_8008AA90_00001928:
    lwz r0, 0x0(r30)
    cmplw r28, r0
    blt lbl_fn_8008AA90_00001910
    addic. r0, r30, 0x28
    beq lbl_fn_8008AA90_00001958
    lwz r3, 0x2c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008AA90_0000194C
    bl fn_80084C24
lbl_fn_8008AA90_0000194C:
    li r0, 0x0
    stw r0, 0x2c(r30)
    stw r0, 0x28(r30)
lbl_fn_8008AA90_00001958:
    lis r4, fn_80016F48@ha
    addi r3, r30, 0x8
    addi r4, r4, fn_80016F48@l
    li r5, 0x8
    li r6, 0x4
    bl fn_806959D8
    cmpwi r30, 0x0
    beq lbl_fn_8008AA90_00001994
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8008AA90_00001988
    bl fn_80084C24
lbl_fn_8008AA90_00001988:
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
lbl_fn_8008AA90_00001994:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8008AA90_0000199C:
    lwz r28, 0x58(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8008AA90_000019BC
    bl fn_800827E0
    mr r4, r28
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x58(r31)
lbl_fn_8008AA90_000019BC:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8008AD4C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_27
    lwz r0, 0x20c(r3)
    li r6, 0x1
    rlwimi r0, r6, 24, 0, 7
    stw r0, 0x20c(r3)
    mr r29, r3
    mr r30, r4
    lwzu r12, 0x164(r3)
    mr r28, r5
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    bne lbl_fn_8008AD4C_00001B78
    cmpwi r0, 0x0
    bne lbl_fn_8008AD4C_00001A3C
    lbz r0, 0x74(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8008AD4C_00001A40
lbl_fn_8008AD4C_00001A3C:
    li r28, 0x0
lbl_fn_8008AD4C_00001A40:
    lbz r0, 0x34(r1)
    mr r3, r30
    stb r0, 0x30(r1)
    bl strlen
    mr r0, r3
    mr r5, r28
    mr r6, r30
    addi r3, r1, 0x74
    add r7, r30, r0
    addi r8, r1, 0x30
    li r4, 0x0
    bl fn_80013F78
    lis r3, lbl_80732368@ha
    li r0, 0x0
    addi r3, r3, lbl_80732368@l
    stw r0, 0x68(r1)
    addi r31, r3, 0xb
    addi r28, r1, 0x68
    stw r0, 0x6c(r1)
    mr r3, r31
    stw r0, 0x70(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x2c(r1)
    mr r3, r28
    stb r0, 0x28(r1)
    mr r6, r31
    add r7, r31, r27
    addi r8, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x74
    bl fn_8006AD24
    lwz r0, 0x74(r1)
    srwi. r5, r0, 31
    bne lbl_fn_8008AD4C_00001B08
    lwz r4, 0x0(r3)
    srwi. r0, r4, 31
    bne lbl_fn_8008AD4C_00001B08
    lwz r0, 0x4(r3)
    stw r0, 0x78(r1)
    stw r4, 0x74(r1)
    lwz r0, 0x8(r3)
    stw r0, 0x7c(r1)
    b lbl_fn_8008AD4C_00001B60
lbl_fn_8008AD4C_00001B08:
    cmpwi r5, 0x0
    beq lbl_fn_8008AD4C_00001B18
    lwz r5, 0x78(r1)
    b lbl_fn_8008AD4C_00001B20
lbl_fn_8008AD4C_00001B18:
    lbz r0, 0x74(r1)
    clrlwi r5, r0, 25
lbl_fn_8008AD4C_00001B20:
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8008AD4C_00001B3C
    lbz r0, 0x0(r3)
    addi r6, r3, 0x1
    clrlwi r4, r0, 25
    b lbl_fn_8008AD4C_00001B44
lbl_fn_8008AD4C_00001B3C:
    lwz r6, 0x8(r3)
    lwz r4, 0x4(r3)
lbl_fn_8008AD4C_00001B44:
    lbz r0, 0x24(r1)
    add r7, r6, r4
    stb r0, 0x20(r1)
    addi r3, r1, 0x74
    addi r8, r1, 0x20
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8008AD4C_00001B60:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008AD4C_00001BC0
    lwz r3, 0x70(r1)
    bl dtor_80084684
    b lbl_fn_8008AD4C_00001BC0
lbl_fn_8008AD4C_00001B78:
    cmpwi r0, 0x0
    bne lbl_fn_8008AD4C_00001B8C
    lbz r0, 0x74(r1)
    clrlwi r27, r0, 25
    b lbl_fn_8008AD4C_00001B90
lbl_fn_8008AD4C_00001B8C:
    li r27, 0x0
lbl_fn_8008AD4C_00001B90:
    lbz r0, 0x1c(r1)
    mr r3, r28
    stb r0, 0x18(r1)
    bl strlen
    mr r0, r3
    mr r5, r27
    mr r6, r28
    addi r3, r1, 0x74
    add r7, r28, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8008AD4C_00001BC0:
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8008AD4C_00001BD4
    addi r3, r1, 0x75
    b lbl_fn_8008AD4C_00001BD8
lbl_fn_8008AD4C_00001BD4:
    lwz r3, 0x7c(r1)
lbl_fn_8008AD4C_00001BD8:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_8008AD4C_00001C10
    lwz r0, 0x74(r1)
    addi r3, r29, 0xfc
    srwi. r0, r0, 31
    bne lbl_fn_8008AD4C_00001BFC
    addi r4, r1, 0x75
    b lbl_fn_8008AD4C_00001C00
lbl_fn_8008AD4C_00001BFC:
    lwz r4, 0x7c(r1)
lbl_fn_8008AD4C_00001C00:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8008AD4C_00001C10:
    li r0, 0x0
    stw r0, 0x5c(r1)
    mr r3, r30
    addi r28, r1, 0x5c
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r28
    stb r0, 0x10(r1)
    mr r6, r30
    add r7, r30, r27
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x50
    bl fn_8006B174
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8008AD4C_00001C80
    addi r3, r1, 0x51
    b lbl_fn_8008AD4C_00001C84
lbl_fn_8008AD4C_00001C80:
    lwz r3, 0x58(r1)
lbl_fn_8008AD4C_00001C84:
    bl fn_800DC6B4
    lwz r0, 0x50(r1)
    mr r31, r3
    srwi. r0, r0, 31
    beq lbl_fn_8008AD4C_00001CA0
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_8008AD4C_00001CA0:
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008AD4C_00001CB4
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_8008AD4C_00001CB4:
    li r0, 0x0
    stw r0, 0x44(r1)
    mr r3, r30
    addi r28, r1, 0x44
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r30
    add r7, r30, r27
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x38
    bl fn_8006B174
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8008AD4C_00001D24
    addi r3, r1, 0x39
    b lbl_fn_8008AD4C_00001D28
lbl_fn_8008AD4C_00001D24:
    lwz r3, 0x40(r1)
lbl_fn_8008AD4C_00001D28:
    bl fn_800DC6B4
    lwz r0, 0x38(r1)
    mr r30, r3
    srwi. r0, r0, 31
    beq lbl_fn_8008AD4C_00001D44
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8008AD4C_00001D44:
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008AD4C_00001D58
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_8008AD4C_00001D58:
    rlwinm r4, r30, 0, 16, 23
    lis r0, 0x4330
    rlwimi r4, r31, 0, 24, 31
    lis r3, lbl_80732248@ha
    stw r4, 0x84(r1)
    lfd f2, lbl_80732248@l(r3)
    stw r0, 0x80(r1)
    lfs f0, lbl_80880C04
    lfd f1, 0x80(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    stfs f0, 0x98(r29)
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008AD4C_00001D9C
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_8008AD4C_00001D9C:
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
