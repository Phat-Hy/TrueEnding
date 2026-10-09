#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_800081C0(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800696B4(void);
extern void fn_8006BA8C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_800D0240(void);
extern void fn_802180A8(void);
extern void fn_805391E8(void);
extern void fn_80539334(void);
extern void fn_805393FC(void);
extern void fn_8053A514(void);
extern void fn_8053B034(void);
extern void fn_8053B82C(void);
extern void fn_8053C78C(void);
extern void fn_80541F1C(void);
extern void fn_8054474C(void);
extern void fn_80545294(void);
extern void fn_805455D0(void);
extern void fn_80545B94(void);
extern void fn_80575F10(void);
extern void fn_80575F70(void);
extern void fn_80575FD0(void);
extern void fn_8057666C(void);
extern void fn_80624AB0(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void memmove(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80760DE8[];
extern u8 lbl_80760FC0[];
extern u8 lbl_8076105C[];
extern u8 lbl_80775A48[];
extern u8 lbl_80775A88[];
extern u8 lbl_80779F40[];
extern u8 lbl_80779F68[];
extern u8 lbl_80779F84[];
extern u8 lbl_80796790[];

/* Small data declarations */
extern u32 lbl_8087D78C;
extern u32 lbl_8087D790;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F9B8;
extern u32 lbl_8087F9C0;
extern u32 lbl_80888098;
extern u32 lbl_8088809C;
extern u32 lbl_808880A0;

/* Function declarations */
void fn_8057CED0(void);
void fn_8057CF3C(void);
void fn_8057D004(void);
void fn_8057D078(void);
void fn_8057D140(void);
void fn_8057D1B8(void);
void fn_8057D280(void);
void fn_8057D354(void);
void fn_8057D41C(void);
void fn_8057D518(void);
void fn_8057D59C(void);
void fn_8057D5F8(void);
void fn_8057D8C4(void);
void fn_8057DB18(void);
void fn_8057DC3C(void);
void fn_8057E278(void);
void fn_8057E840(void);
void fn_8057E8C8(void);

asm void fn_8057CED0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r4, r5
    li r5, 0x8
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl memcpy
    lwz r3, lbl_8087F9B8
    lwz r4, 0x8(r1)
    lwz r3, 0x14(r3)
    bl fn_8053B034
    lwz r4, lbl_8087F9B8
    li r0, 0x0
    stw r3, 0x18(r4)
    lwz r4, lbl_8087F9B8
    stw r0, 0x20(r4)
    lwz r4, lbl_8087F9B8
    stw r0, 0x24(r4)
    lwz r4, lbl_8087F9B8
    stw r0, 0x28(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x10(r3)
    li r3, 0x8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057CF3C(void)
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
    lwz r30, 0x18(r3)
    beq lbl_fn_8057CF3C_000000A4
    mr r3, r31
    bl strlen
    mr r28, r3
    b lbl_fn_8057CF3C_000000A8
lbl_fn_8057CF3C_000000A4:
    li r28, 0x0
lbl_fn_8057CF3C_000000A8:
    cmpwi r31, 0x0
    beq lbl_fn_8057CF3C_00000104
    cmpwi r28, 0x0
    beq lbl_fn_8057CF3C_00000104
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
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057CF3C_000000FC
    bl fn_80084C24
    stw r31, 0x4(r30)
lbl_fn_8057CF3C_000000FC:
    stw r29, 0x4(r30)
    b lbl_fn_8057CF3C_0000011C
lbl_fn_8057CF3C_00000104:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057CF3C_0000011C
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8057CF3C_0000011C:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057D004(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r4, r5
    li r5, 0x8
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl memcpy
    lwz r3, lbl_8087F9B8
    lha r4, 0xc(r1)
    lwz r3, 0x14(r3)
    bl fn_8053B82C
    lwz r4, lbl_8087F9B8
    li r0, 0x0
    stw r3, 0x1c(r4)
    lwz r4, lbl_8087F9B8
    stw r0, 0x20(r4)
    lwz r4, lbl_8087F9B8
    stw r0, 0x24(r4)
    lwz r4, lbl_8087F9B8
    stw r0, 0x28(r4)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r3)
    lha r0, 0xc(r1)
    stw r0, 0xc(r3)
    li r3, 0x8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057D078(void)
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
    lwz r30, 0x1c(r3)
    beq lbl_fn_8057D078_000001E0
    mr r3, r31
    bl strlen
    mr r28, r3
    b lbl_fn_8057D078_000001E4
lbl_fn_8057D078_000001E0:
    li r28, 0x0
lbl_fn_8057D078_000001E4:
    cmpwi r31, 0x0
    beq lbl_fn_8057D078_00000240
    cmpwi r28, 0x0
    beq lbl_fn_8057D078_00000240
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
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057D078_00000238
    bl fn_80084C24
    stw r31, 0x4(r30)
lbl_fn_8057D078_00000238:
    stw r29, 0x4(r30)
    b lbl_fn_8057D078_00000258
lbl_fn_8057D078_00000240:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057D078_00000258
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8057D078_00000258:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057D140(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    lwz r3, lbl_8087F9B8
    lwz r3, 0x1c(r3)
    bl fn_8053C78C
    lwz r5, lbl_8087F9B8
    li r0, 0x0
    mr r31, r3
    mr r4, r30
    stw r3, 0x20(r5)
    addi r3, r1, 0x8
    li r5, 0x4
    lwz r6, lbl_8087F9B8
    stw r0, 0x24(r6)
    lwz r6, lbl_8087F9B8
    stw r0, 0x28(r6)
    bl memcpy
    lha r0, 0x8(r1)
    li r3, 0x4
    stw r0, 0xc(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057D1B8(void)
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
    lwz r30, 0x20(r3)
    beq lbl_fn_8057D1B8_00000320
    mr r3, r31
    bl strlen
    mr r28, r3
    b lbl_fn_8057D1B8_00000324
lbl_fn_8057D1B8_00000320:
    li r28, 0x0
lbl_fn_8057D1B8_00000324:
    cmpwi r31, 0x0
    beq lbl_fn_8057D1B8_00000380
    cmpwi r28, 0x0
    beq lbl_fn_8057D1B8_00000380
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
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057D1B8_00000378
    bl fn_80084C24
    stw r31, 0x4(r30)
lbl_fn_8057D1B8_00000378:
    stw r29, 0x4(r30)
    b lbl_fn_8057D1B8_00000398
lbl_fn_8057D1B8_00000380:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057D1B8_00000398
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8057D1B8_00000398:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057D280(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, -0x1
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r5
    lwz r6, lbl_8087F9B8
    lwz r3, 0x20(r6)
    bl fn_8053A514
    lwz r4, lbl_8087F9B8
    subis r0, r31, 0x4143
    cmplwi r0, 0x5432
    mr r31, r3
    stw r3, 0x24(r4)
    li r0, 0x0
    lwz r3, lbl_8087F9B8
    stw r0, 0x28(r3)
    bne lbl_fn_8057D280_00000438
    mr r4, r30
    addi r3, r1, 0x10
    li r5, 0xc
    bl memcpy
    lha r0, 0x10(r1)
    li r3, 0xc
    stw r0, 0x10(r31)
    lha r0, 0x12(r1)
    stw r0, 0x18(r31)
    lha r0, 0x14(r1)
    stw r0, 0x1c(r31)
    lha r0, 0x16(r1)
    stw r0, 0x14(r31)
    b lbl_fn_8057D280_0000046C
lbl_fn_8057D280_00000438:
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x8
    bl memcpy
    lha r0, 0x8(r1)
    li r3, 0x8
    stw r0, 0x10(r31)
    lha r0, 0xa(r1)
    stw r0, 0x18(r31)
    lha r0, 0xc(r1)
    stw r0, 0x1c(r31)
    lha r0, 0xe(r1)
    stw r0, 0x14(r31)
lbl_fn_8057D280_0000046C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8057D354(void)
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
    lwz r30, 0x24(r3)
    beq lbl_fn_8057D354_000004BC
    mr r3, r31
    bl strlen
    mr r28, r3
    b lbl_fn_8057D354_000004C0
lbl_fn_8057D354_000004BC:
    li r28, 0x0
lbl_fn_8057D354_000004C0:
    cmpwi r31, 0x0
    beq lbl_fn_8057D354_0000051C
    cmpwi r28, 0x0
    beq lbl_fn_8057D354_0000051C
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
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057D354_00000514
    bl fn_80084C24
    stw r31, 0x4(r30)
lbl_fn_8057D354_00000514:
    stw r29, 0x4(r30)
    b lbl_fn_8057D354_00000534
lbl_fn_8057D354_0000051C:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8057D354_00000534
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8057D354_00000534:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057D41C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r5
    li r5, 0x8
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r6, lbl_8087F9B8
    lwz r28, 0x24(r6)
    bl memcpy
    lwz r4, 0x8(r1)
    mr r3, r28
    bl fn_80539334
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8057D41C_0000061C
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r3, 0x8(r28)
    lwz r3, 0xc(r3)
    bl fn_800081C0
    lwz r4, 0x1c(r3)
    mr r31, r3
    cmpwi r4, 0x0
    blt lbl_fn_8057D41C_0000061C
    li r3, 0x0
    blt lbl_fn_8057D41C_000005D4
    lwz r0, 0x30(r28)
    cmpw r4, r0
    bge lbl_fn_8057D41C_000005D4
    li r3, 0x1
lbl_fn_8057D41C_000005D4:
    cmpwi r3, 0x0
    beq lbl_fn_8057D41C_000005EC
    lwz r3, 0x2c(r28)
    slwi r0, r4, 3
    add r3, r3, r0
    b lbl_fn_8057D41C_000005F0
lbl_fn_8057D41C_000005EC:
    li r3, 0x0
lbl_fn_8057D41C_000005F0:
    lwz r29, 0x4(r3)
    mr r3, r28
    lwz r4, 0x8(r1)
    bl fn_805391E8
    lwz r5, 0x24(r31)
    slwi r4, r29, 2
    mulli r0, r3, 0x18
    lwzx r3, r5, r4
    add r3, r3, r0
    lwz r0, 0x8(r3)
    stw r0, 0x0(r30)
lbl_fn_8057D41C_0000061C:
    lwz r4, lbl_8087F9B8
    li r3, 0x8
    stw r30, 0x28(r4)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057D518(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    mr r4, r31
    lwz r6, lbl_8087F9B8
    lwz r30, 0x24(r6)
    bl memcpy
    addi r3, r31, 0x4
    bl fn_802180A8
    lwz r4, 0x8(r1)
    mr r31, r3
    mr r3, r30
    bl fn_80539334
    cmpwi r3, 0x0
    beq lbl_fn_8057D518_000006A4
    stw r31, 0x4(r3)
lbl_fn_8057D518_000006A4:
    lwz r4, lbl_8087F9B8
    stw r3, 0x28(r4)
    mr r3, r29
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057D59C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r5
    li r5, 0x8
    stw r0, 0x24(r1)
    addi r3, r1, 0x10
    stw r31, 0x1c(r1)
    lwz r6, lbl_8087F9B8
    lwz r31, 0x24(r6)
    bl memcpy
    lfs f1, 0x10(r1)
    mr r3, r31
    lfs f0, 0x14(r1)
    addi r4, r1, 0x8
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805393FC
    lwz r31, 0x1c(r1)
    li r3, 0x8
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057D5F8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r23, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x98(r3)
    rlwimi r0, r5, 31, 0, 0
    stw r0, 0x98(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8057D5F8_000009C8
    mr r3, r4
    addi r4, r31, 0x1cc
    li r5, 0x0
    bl fn_8006BA8C
    stw r3, 0x1d0(r31)
    mr r3, r31
    bl fn_80575F10
    cmpwi r3, 0x0
    bne lbl_fn_8057D5F8_00000780
    li r0, 0x0
    b lbl_fn_8057D5F8_00000998
lbl_fn_8057D5F8_00000780:
    lwz r0, lbl_8087F9B8
    cmpwi r0, 0x0
    beq lbl_fn_8057D5F8_00000794
    li r0, 0x0
    b lbl_fn_8057D5F8_00000998
lbl_fn_8057D5F8_00000794:
    lis r5, lbl_80760FC0@ha
    li r3, 0x5c
    addi r5, r5, lbl_80760FC0@l
    li r4, 0x4
    addi r5, r5, 0x33
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8057D5F8_0000081C
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
lbl_fn_8057D5F8_0000081C:
    stw r3, lbl_8087F9B8
    stw r31, 0x10(r3)
    mr r3, r31
    lwz r24, lbl_8087F9B8
    bl fn_80575F10
    mr r26, r3
    mr r3, r31
    bl fn_80575F70
    mr r23, r3
    lis r28, lbl_80760DE8@ha
    mr r25, r23
    li r27, 0x0
    addi r29, r28, lbl_80760DE8@l
    li r30, 0x3b
    b lbl_fn_8057D5F8_000008E8
lbl_fn_8057D5F8_00000858:
    stw r27, 0x8(r1)
    mr r4, r25
    addi r3, r1, 0x8
    li r5, 0x8
    stw r27, 0xc(r1)
    bl memcpy
    bl fn_800696B4
    addi r6, r28, lbl_80760DE8@l
    lwz r3, 0x8(r1)
    li r4, -0x1
    li r5, 0x0
    mtctr r30
    addi r25, r25, 0x8
lbl_fn_8057D5F8_0000088C:
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8057D5F8_000008CC
    lwz r0, 0x0(r6)
    cmplw r0, r3
    bne lbl_fn_8057D5F8_000008CC
    slwi r0, r5, 3
    mr r5, r25
    add r4, r29, r0
    mr r6, r24
    lwz r12, 0x4(r4)
    lwz r4, 0xc(r1)
    mtctr r12
    bctrl
    mr r4, r3
    b lbl_fn_8057D5F8_000008D8
lbl_fn_8057D5F8_000008CC:
    addi r6, r6, 0x8
    addi r5, r5, 0x1
    bdnz lbl_fn_8057D5F8_0000088C
lbl_fn_8057D5F8_000008D8:
    cmpwi r4, -0x1
    bne lbl_fn_8057D5F8_000008E4
    lwz r4, 0xc(r1)
lbl_fn_8057D5F8_000008E4:
    add r25, r25, r4
lbl_fn_8057D5F8_000008E8:
    subf r0, r23, r25
    cmpw r0, r26
    blt lbl_fn_8057D5F8_00000858
    lwz r23, lbl_8087F9B8
    cmpwi r23, 0x0
    beq lbl_fn_8057D5F8_00000984
    beq lbl_fn_8057D5F8_0000097C
    li r26, 0x0
    li r30, 0x0
    b lbl_fn_8057D5F8_0000093C
lbl_fn_8057D5F8_00000910:
    lwz r3, 0x4(r23)
    lwzx r3, r3, r30
    cmpwi r3, 0x0
    beq lbl_fn_8057D5F8_00000934
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8057D5F8_00000934:
    addi r26, r26, 0x1
    addi r30, r30, 0x4
lbl_fn_8057D5F8_0000093C:
    lwz r0, 0x8(r23)
    cmpw r26, r0
    blt lbl_fn_8057D5F8_00000910
    addic. r3, r23, 0x4
    beq lbl_fn_8057D5F8_0000097C
    beq lbl_fn_8057D5F8_0000097C
    beq lbl_fn_8057D5F8_0000097C
    beq lbl_fn_8057D5F8_0000097C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8057D5F8_0000097C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8057D5F8_0000097C:
    mr r3, r23
    bl dtor_80084684
lbl_fn_8057D5F8_00000984:
    li r0, 0x0
    stw r0, lbl_8087F9B8
    mr r3, r31
    bl fn_8057666C
    li r0, 0x1
lbl_fn_8057D5F8_00000998:
    cmpwi r0, 0x0
    beq lbl_fn_8057D5F8_000009AC
    li r0, 0x4
    stw r0, 0x194(r31)
    b lbl_fn_8057D5F8_000009B4
lbl_fn_8057D5F8_000009AC:
    li r0, 0x0
    stw r0, 0x194(r31)
lbl_fn_8057D5F8_000009B4:
    mr r3, r31
    bl fn_80575FD0
    mr r3, r31
    bl fn_80541F1C
    b lbl_fn_8057D5F8_000009E0
lbl_fn_8057D5F8_000009C8:
    lwzu r12, 0x1c4(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x3
    stw r0, 0x194(r31)
lbl_fn_8057D5F8_000009E0:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8057D8C4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r23, 0x1c(r1)
    mr r31, r3
    bl fn_80575F10
    cmpwi r3, 0x0
    bne lbl_fn_8057D8C4_00000A1C
    li r3, 0x0
    b lbl_fn_8057D8C4_00000C34
lbl_fn_8057D8C4_00000A1C:
    lwz r0, lbl_8087F9B8
    cmpwi r0, 0x0
    beq lbl_fn_8057D8C4_00000A30
    li r3, 0x0
    b lbl_fn_8057D8C4_00000C34
lbl_fn_8057D8C4_00000A30:
    lis r5, lbl_80760FC0@ha
    li r3, 0x5c
    addi r5, r5, lbl_80760FC0@l
    li r4, 0x4
    addi r5, r5, 0x33
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8057D8C4_00000AB8
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
lbl_fn_8057D8C4_00000AB8:
    stw r3, lbl_8087F9B8
    stw r31, 0x10(r3)
    mr r3, r31
    lwz r24, lbl_8087F9B8
    bl fn_80575F10
    mr r26, r3
    mr r3, r31
    bl fn_80575F70
    mr r25, r3
    lis r28, lbl_80760DE8@ha
    mr r23, r25
    li r27, 0x0
    addi r29, r28, lbl_80760DE8@l
    li r30, 0x3b
    b lbl_fn_8057D8C4_00000B84
lbl_fn_8057D8C4_00000AF4:
    stw r27, 0x8(r1)
    mr r4, r23
    addi r3, r1, 0x8
    li r5, 0x8
    stw r27, 0xc(r1)
    bl memcpy
    bl fn_800696B4
    addi r6, r28, lbl_80760DE8@l
    lwz r3, 0x8(r1)
    li r5, -0x1
    li r4, 0x0
    mtctr r30
    addi r23, r23, 0x8
lbl_fn_8057D8C4_00000B28:
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8057D8C4_00000B68
    lwz r0, 0x0(r6)
    cmplw r0, r3
    bne lbl_fn_8057D8C4_00000B68
    slwi r0, r4, 3
    mr r5, r23
    add r4, r29, r0
    mr r6, r24
    lwz r12, 0x4(r4)
    lwz r4, 0xc(r1)
    mtctr r12
    bctrl
    mr r5, r3
    b lbl_fn_8057D8C4_00000B74
lbl_fn_8057D8C4_00000B68:
    addi r6, r6, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_8057D8C4_00000B28
lbl_fn_8057D8C4_00000B74:
    cmpwi r5, -0x1
    bne lbl_fn_8057D8C4_00000B80
    lwz r5, 0xc(r1)
lbl_fn_8057D8C4_00000B80:
    add r23, r23, r5
lbl_fn_8057D8C4_00000B84:
    subf r0, r25, r23
    cmpw r0, r26
    blt lbl_fn_8057D8C4_00000AF4
    lwz r24, lbl_8087F9B8
    cmpwi r24, 0x0
    beq lbl_fn_8057D8C4_00000C20
    beq lbl_fn_8057D8C4_00000C18
    li r23, 0x0
    li r30, 0x0
    b lbl_fn_8057D8C4_00000BD8
lbl_fn_8057D8C4_00000BAC:
    lwz r3, 0x4(r24)
    lwzx r3, r3, r30
    cmpwi r3, 0x0
    beq lbl_fn_8057D8C4_00000BD0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8057D8C4_00000BD0:
    addi r23, r23, 0x1
    addi r30, r30, 0x4
lbl_fn_8057D8C4_00000BD8:
    lwz r0, 0x8(r24)
    cmpw r23, r0
    blt lbl_fn_8057D8C4_00000BAC
    addic. r3, r24, 0x4
    beq lbl_fn_8057D8C4_00000C18
    beq lbl_fn_8057D8C4_00000C18
    beq lbl_fn_8057D8C4_00000C18
    beq lbl_fn_8057D8C4_00000C18
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8057D8C4_00000C18
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8057D8C4_00000C18:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8057D8C4_00000C20:
    li r0, 0x0
    stw r0, lbl_8087F9B8
    mr r3, r31
    bl fn_8057666C
    li r3, 0x1
lbl_fn_8057D8C4_00000C34:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8057DB18(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x1f0
    stw r0, 0x34(r1)
    addi r0, r5, 0x7c1f
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r4
    lwz r6, 0x8(r3)
    subf r0, r6, r0
    cmplwi r0, 0x1
    bge lbl_fn_8057DB18_00000CA0
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DB18_00000CA0:
    li r4, 0x0
    addi r0, r31, 0x8
    stw r4, 0x8(r1)
    mr r3, r31
    stw r4, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    stw r4, 0x18(r1)
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    addi r0, r4, 0x1
    subf r4, r5, r0
    bl fn_8054474C
    lwz r4, 0x4(r31)
    mr r5, r3
    addi r3, r1, 0x8
    addi r4, r4, 0x1
    bl fn_80545B94
    lwz r0, 0x4(r31)
    mr r5, r30
    stw r0, 0x18(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_8057E278
    lwz r0, 0x4(r31)
    addi r3, r1, 0x8
    lwz r4, 0x0(r31)
    mulli r0, r0, 0x84
    add r5, r4, r0
    bl fn_805455D0
    lwz r5, 0x8(r31)
    addi r3, r1, 0x8
    lwz r0, 0x10(r1)
    li r4, -0x1
    stw r0, 0x8(r31)
    stw r5, 0x10(r1)
    lwz r0, 0x8(r1)
    lwz r5, 0x0(r31)
    stw r0, 0x0(r31)
    stw r5, 0x8(r1)
    lwz r0, 0xc(r1)
    lwz r5, 0x4(r31)
    stw r0, 0x4(r31)
    stw r5, 0xc(r1)
    bl fn_80545294
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8057DC3C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r31, r4
    mr r27, r5
    beq lbl_fn_8057DC3C_00001390
    lwz r6, 0x8(r5)
    lis r7, lbl_80775A48@ha
    lwz r3, 0x4(r5)
    addi r7, r7, lbl_80775A48@l
    srwi r0, r6, 31
    stw r7, 0x0(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r3, 0x4(r4)
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8057DC3C_00000DD8
    lwz r3, 0xc(r5)
    lwz r0, 0x10(r5)
    stw r6, 0x8(r4)
    stw r3, 0xc(r4)
    stw r0, 0x10(r4)
    b lbl_fn_8057DC3C_00000E1C
lbl_fn_8057DC3C_00000DD8:
    addi r3, r4, 0x8
    li r0, 0x0
    stw r0, 0x8(r4)
    lwz r4, 0xc(r5)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    addi r3, r31, 0x8
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x10(r27)
    li r4, 0x0
    lwz r0, 0xc(r27)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057DC3C_00000E1C:
    lwz r4, 0x1c(r27)
    lis r5, lbl_80779F40@ha
    lwz r6, 0x14(r27)
    addi r5, r5, lbl_80779F40@l
    srwi r0, r4, 31
    lwz r3, 0x18(r27)
    cntlzw r0, r0
    stw r6, 0x14(r31)
    srwi r0, r0, 5
    cntlzw r0, r0
    stw r5, 0x0(r31)
    srwi. r0, r0, 5
    stw r3, 0x18(r31)
    bne lbl_fn_8057DC3C_00000E6C
    lwz r3, 0x20(r27)
    lwz r0, 0x24(r27)
    stw r4, 0x1c(r31)
    stw r3, 0x20(r31)
    stw r0, 0x24(r31)
    b lbl_fn_8057DC3C_00000EB0
lbl_fn_8057DC3C_00000E6C:
    li r0, 0x0
    stw r0, 0x1c(r31)
    lwz r4, 0x20(r27)
    addi r3, r31, 0x1c
    stw r0, 0x20(r31)
    stw r0, 0x24(r31)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    addi r3, r31, 0x1c
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x24(r27)
    li r4, 0x0
    lwz r0, 0x20(r27)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057DC3C_00000EB0:
    lwz r0, 0x2c(r27)
    li r3, 0x0
    lwz r29, 0x28(r27)
    slwi r0, r0, 4
    stw r3, 0x28(r31)
    add r30, r29, r0
    subf r0, r29, r30
    stw r3, 0x2c(r31)
    srawi r0, r0, 4
    addze. r26, r0
    stw r3, 0x30(r31)
    beq lbl_fn_8057DC3C_00000F9C
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_8057DC3C_00000F14
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_00000F14:
    slwi r3, r26, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_8057DC3C_00000F48
    lis r3, __files@ha
    lis r4, lbl_80779F84@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F84@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_00000F48:
    lwz r0, 0x2c(r31)
    stw r25, 0x28(r31)
    slwi r0, r0, 4
    stw r26, 0x30(r31)
    add r4, r25, r0
    b lbl_fn_8057DC3C_00000F94
lbl_fn_8057DC3C_00000F60:
    cmpwi r4, 0x0
    beq lbl_fn_8057DC3C_00000F80
    lfs f2, 0x8(r29)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r29)
    stfs f0, 0xc(r4)
lbl_fn_8057DC3C_00000F80:
    lwz r3, 0x2c(r31)
    addi r29, r29, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x2c(r31)
lbl_fn_8057DC3C_00000F94:
    cmplw r29, r30
    bne lbl_fn_8057DC3C_00000F60
lbl_fn_8057DC3C_00000F9C:
    lwz r0, 0x58(r27)
    li r3, 0x0
    lwz r28, 0x54(r27)
    addi r30, r31, 0x54
    slwi r0, r0, 4
    psq_l f1, 0x3c(r27), 0, 0
    add r29, r28, r0
    lfs f2, 0x44(r27)
    subf r0, r28, r29
    psq_st f1, 0x3c(r31), 0, 0
    srawi r0, r0, 4
    lwz r4, 0x34(r27)
    stfs f2, 0x44(r31)
    addze. r25, r0
    lfs f0, 0x38(r27)
    psq_l f1, 0x48(r27), 0, 0
    lfs f2, 0x50(r27)
    stw r4, 0x34(r31)
    stfs f0, 0x38(r31)
    psq_st f1, 0x48(r31), 0, 0
    stfs f2, 0x50(r31)
    stw r3, 0x54(r31)
    stw r3, 0x58(r31)
    stw r3, 0x5c(r31)
    beq lbl_fn_8057DC3C_000010C4
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_8057DC3C_00001034
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_00001034:
    slwi r3, r25, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8057DC3C_00001068
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_00001068:
    lwz r0, 0x4(r30)
    stw r26, 0x0(r30)
    slwi r0, r0, 4
    stw r25, 0x8(r30)
    add r4, r26, r0
    b lbl_fn_8057DC3C_000010BC
lbl_fn_8057DC3C_00001080:
    cmpwi r4, 0x0
    beq lbl_fn_8057DC3C_000010A8
    lfs f0, 0x0(r28)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r28)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r28)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r28)
    stfs f0, 0xc(r4)
lbl_fn_8057DC3C_000010A8:
    lwz r3, 0x4(r30)
    addi r28, r28, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
lbl_fn_8057DC3C_000010BC:
    cmplw r28, r29
    bne lbl_fn_8057DC3C_00001080
lbl_fn_8057DC3C_000010C4:
    lwz r0, 0x64(r27)
    li r3, 0x0
    lwz r28, 0x60(r27)
    addi r30, r31, 0x60
    slwi r0, r0, 4
    stw r3, 0x60(r31)
    add r29, r28, r0
    subf r0, r28, r29
    stw r3, 0x64(r31)
    srawi r0, r0, 4
    addze. r25, r0
    stw r3, 0x68(r31)
    beq lbl_fn_8057DC3C_000011BC
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_8057DC3C_0000112C
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_0000112C:
    slwi r3, r25, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8057DC3C_00001160
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_00001160:
    lwz r0, 0x4(r30)
    stw r26, 0x0(r30)
    slwi r0, r0, 4
    stw r25, 0x8(r30)
    add r4, r26, r0
    b lbl_fn_8057DC3C_000011B4
lbl_fn_8057DC3C_00001178:
    cmpwi r4, 0x0
    beq lbl_fn_8057DC3C_000011A0
    lfs f0, 0x0(r28)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r28)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r28)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r28)
    stfs f0, 0xc(r4)
lbl_fn_8057DC3C_000011A0:
    lwz r3, 0x4(r30)
    addi r28, r28, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
lbl_fn_8057DC3C_000011B4:
    cmplw r28, r29
    bne lbl_fn_8057DC3C_00001178
lbl_fn_8057DC3C_000011BC:
    lwz r0, 0x70(r27)
    li r3, 0x0
    lwz r28, 0x6c(r27)
    addi r30, r31, 0x6c
    slwi r0, r0, 4
    stw r3, 0x6c(r31)
    add r29, r28, r0
    subf r0, r28, r29
    stw r3, 0x70(r31)
    srawi r0, r0, 4
    addze. r25, r0
    stw r3, 0x74(r31)
    beq lbl_fn_8057DC3C_000012B4
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_8057DC3C_00001224
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_00001224:
    slwi r3, r25, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8057DC3C_00001258
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_00001258:
    lwz r0, 0x4(r30)
    stw r26, 0x0(r30)
    slwi r0, r0, 4
    stw r25, 0x8(r30)
    add r4, r26, r0
    b lbl_fn_8057DC3C_000012AC
lbl_fn_8057DC3C_00001270:
    cmpwi r4, 0x0
    beq lbl_fn_8057DC3C_00001298
    lfs f0, 0x0(r28)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r28)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r28)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r28)
    stfs f0, 0xc(r4)
lbl_fn_8057DC3C_00001298:
    lwz r3, 0x4(r30)
    addi r28, r28, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
lbl_fn_8057DC3C_000012AC:
    cmplw r28, r29
    bne lbl_fn_8057DC3C_00001270
lbl_fn_8057DC3C_000012B4:
    lwz r0, 0x7c(r27)
    li r3, 0x0
    lwz r28, 0x78(r27)
    addi r30, r31, 0x78
    slwi r0, r0, 2
    stw r3, 0x78(r31)
    add r26, r28, r0
    subf r29, r28, r26
    stw r3, 0x7c(r31)
    srawi r0, r29, 2
    addze. r25, r0
    stw r3, 0x80(r31)
    beq lbl_fn_8057DC3C_00001390
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_8057DC3C_0000131C
    lis r4, lbl_80760FC0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760FC0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_0000131C:
    slwi r3, r25, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8057DC3C_00001350
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057DC3C_00001350:
    subf r0, r28, r26
    lwz r3, 0x4(r30)
    srawi r0, r0, 2
    stw r27, 0x0(r30)
    slwi r3, r3, 2
    mr r4, r28
    addze r0, r0
    stw r25, 0x8(r30)
    add r3, r27, r3
    slwi r5, r0, 2
    bl memmove
    srawi r0, r29, 2
    lwz r3, 0x4(r30)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r30)
lbl_fn_8057DC3C_00001390:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8057E278(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    lwz r6, 0x10(r3)
    lis r29, __files@ha
    lwz r0, 0x4(r3)
    lis r28, lbl_80760FC0@ha
    mulli r7, r6, 0x84
    lis r24, lbl_80775A48@ha
    lwz r8, 0x0(r3)
    lis r26, lbl_80779F40@ha
    mr r15, r3
    mulli r6, r0, 0x84
    add r0, r8, r7
    mr r23, r4
    mr r22, r5
    addi r24, r24, lbl_80775A48@l
    add r20, r6, r0
    addi r26, r26, lbl_80779F40@l
    addi r28, r28, lbl_80760FC0@l
    addi r29, r29, __files@l
    li r25, 0x0
    lis r27, 0x1000
    lis r14, lbl_80779F68@ha
    lis r30, 0x4000
    b lbl_fn_8057E278_00001950
lbl_fn_8057E278_00001418:
    cmpwi r20, 0x0
    beq lbl_fn_8057E278_0000193C
    lwz r3, 0x8(r22)
    stw r24, 0x0(r20)
    srwi. r0, r3, 31
    lwz r0, 0x4(r22)
    stw r0, 0x4(r20)
    bne lbl_fn_8057E278_00001450
    stw r3, 0x8(r20)
    lwz r0, 0xc(r22)
    stw r0, 0xc(r20)
    lwz r0, 0x10(r22)
    stw r0, 0x10(r20)
    b lbl_fn_8057E278_00001490
lbl_fn_8057E278_00001450:
    stw r25, 0x8(r20)
    addi r3, r20, 0x8
    lwz r4, 0xc(r22)
    stw r25, 0xc(r20)
    stw r25, 0x10(r20)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    addi r3, r20, 0x8
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x10(r22)
    li r4, 0x0
    lwz r0, 0xc(r22)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057E278_00001490:
    lwz r0, 0x14(r22)
    stw r0, 0x14(r20)
    lwz r3, 0x1c(r22)
    stw r26, 0x0(r20)
    srwi. r0, r3, 31
    lwz r0, 0x18(r22)
    stw r0, 0x18(r20)
    bne lbl_fn_8057E278_000014C8
    stw r3, 0x1c(r20)
    lwz r0, 0x20(r22)
    stw r0, 0x20(r20)
    lwz r0, 0x24(r22)
    stw r0, 0x24(r20)
    b lbl_fn_8057E278_00001508
lbl_fn_8057E278_000014C8:
    stw r25, 0x1c(r20)
    addi r3, r20, 0x1c
    lwz r4, 0x20(r22)
    stw r25, 0x20(r20)
    stw r25, 0x24(r20)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    addi r3, r20, 0x1c
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x24(r22)
    li r4, 0x0
    lwz r0, 0x20(r22)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8057E278_00001508:
    lwz r0, 0x2c(r22)
    lwz r18, 0x28(r22)
    slwi r0, r0, 4
    stw r25, 0x28(r20)
    add r17, r18, r0
    subf r0, r18, r17
    stw r25, 0x2c(r20)
    srawi r0, r0, 4
    addze. r19, r0
    stw r25, 0x30(r20)
    beq lbl_fn_8057E278_000015D4
    subi r0, r27, 0x1
    cmplw r19, r0
    ble lbl_fn_8057E278_00001554
    addi r4, r28, 0x1f
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_00001554:
    slwi r3, r19, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_8057E278_00001580
    lis r4, lbl_80779F84@ha
    addi r3, r29, 0xa0
    addi r4, r4, lbl_80779F84@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_00001580:
    stw r16, 0x28(r20)
    stw r19, 0x30(r20)
    lwz r0, 0x2c(r20)
    slwi r0, r0, 4
    add r4, r16, r0
    b lbl_fn_8057E278_000015CC
lbl_fn_8057E278_00001598:
    cmpwi r4, 0x0
    beq lbl_fn_8057E278_000015B8
    lfs f2, 0x8(r18)
    psq_l f1, 0x0(r18), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r18)
    stfs f0, 0xc(r4)
lbl_fn_8057E278_000015B8:
    lwz r3, 0x2c(r20)
    addi r18, r18, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x2c(r20)
lbl_fn_8057E278_000015CC:
    cmplw r18, r17
    bne lbl_fn_8057E278_00001598
lbl_fn_8057E278_000015D4:
    lwz r0, 0x34(r22)
    addi r17, r20, 0x54
    stw r0, 0x34(r20)
    lfs f0, 0x38(r22)
    stfs f0, 0x38(r20)
    psq_l f1, 0x3c(r22), 0, 0
    psq_st f1, 0x3c(r20), 0, 0
    lfs f2, 0x44(r22)
    stfs f2, 0x44(r20)
    lwz r0, 0x58(r22)
    psq_l f1, 0x48(r22), 0, 0
    lwz r19, 0x54(r22)
    slwi r0, r0, 4
    psq_st f1, 0x48(r20), 0, 0
    lfs f2, 0x50(r22)
    add r18, r19, r0
    stfs f2, 0x50(r20)
    subf r0, r19, r18
    srawi r0, r0, 4
    stw r25, 0x54(r20)
    addze. r21, r0
    stw r25, 0x58(r20)
    stw r25, 0x5c(r20)
    beq lbl_fn_8057E278_000016D8
    subi r0, r27, 0x1
    cmplw r21, r0
    ble lbl_fn_8057E278_00001654
    addi r4, r28, 0x1f
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_00001654:
    slwi r3, r21, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_8057E278_0000167C
    addi r3, r29, 0xa0
    addi r4, r14, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_0000167C:
    stw r16, 0x0(r17)
    stw r21, 0x8(r17)
    lwz r0, 0x4(r17)
    slwi r0, r0, 4
    add r4, r16, r0
    b lbl_fn_8057E278_000016D0
lbl_fn_8057E278_00001694:
    cmpwi r4, 0x0
    beq lbl_fn_8057E278_000016BC
    lfs f0, 0x0(r19)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r19)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r19)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r19)
    stfs f0, 0xc(r4)
lbl_fn_8057E278_000016BC:
    lwz r3, 0x4(r17)
    addi r19, r19, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r17)
lbl_fn_8057E278_000016D0:
    cmplw r19, r18
    bne lbl_fn_8057E278_00001694
lbl_fn_8057E278_000016D8:
    lwz r0, 0x64(r22)
    addi r17, r20, 0x60
    lwz r19, 0x60(r22)
    slwi r0, r0, 4
    stw r25, 0x60(r20)
    add r18, r19, r0
    subf r0, r19, r18
    stw r25, 0x64(r20)
    srawi r0, r0, 4
    addze. r21, r0
    stw r25, 0x68(r20)
    beq lbl_fn_8057E278_000017AC
    subi r0, r27, 0x1
    cmplw r21, r0
    ble lbl_fn_8057E278_00001728
    addi r4, r28, 0x1f
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_00001728:
    slwi r3, r21, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_8057E278_00001750
    addi r3, r29, 0xa0
    addi r4, r14, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_00001750:
    stw r16, 0x0(r17)
    stw r21, 0x8(r17)
    lwz r0, 0x4(r17)
    slwi r0, r0, 4
    add r4, r16, r0
    b lbl_fn_8057E278_000017A4
lbl_fn_8057E278_00001768:
    cmpwi r4, 0x0
    beq lbl_fn_8057E278_00001790
    lfs f0, 0x0(r19)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r19)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r19)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r19)
    stfs f0, 0xc(r4)
lbl_fn_8057E278_00001790:
    lwz r3, 0x4(r17)
    addi r19, r19, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r17)
lbl_fn_8057E278_000017A4:
    cmplw r19, r18
    bne lbl_fn_8057E278_00001768
lbl_fn_8057E278_000017AC:
    lwz r0, 0x70(r22)
    addi r17, r20, 0x6c
    lwz r19, 0x6c(r22)
    slwi r0, r0, 4
    stw r25, 0x6c(r20)
    add r18, r19, r0
    subf r0, r19, r18
    stw r25, 0x70(r20)
    srawi r0, r0, 4
    addze. r21, r0
    stw r25, 0x74(r20)
    beq lbl_fn_8057E278_00001880
    subi r0, r27, 0x1
    cmplw r21, r0
    ble lbl_fn_8057E278_000017FC
    addi r4, r28, 0x1f
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_000017FC:
    slwi r3, r21, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_8057E278_00001824
    addi r3, r29, 0xa0
    addi r4, r14, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_00001824:
    stw r16, 0x0(r17)
    stw r21, 0x8(r17)
    lwz r0, 0x4(r17)
    slwi r0, r0, 4
    add r4, r16, r0
    b lbl_fn_8057E278_00001878
lbl_fn_8057E278_0000183C:
    cmpwi r4, 0x0
    beq lbl_fn_8057E278_00001864
    lfs f0, 0x0(r19)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r19)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r19)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r19)
    stfs f0, 0xc(r4)
lbl_fn_8057E278_00001864:
    lwz r3, 0x4(r17)
    addi r19, r19, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r17)
lbl_fn_8057E278_00001878:
    cmplw r19, r18
    bne lbl_fn_8057E278_0000183C
lbl_fn_8057E278_00001880:
    lwz r0, 0x7c(r22)
    addi r21, r20, 0x78
    lwz r18, 0x78(r22)
    slwi r0, r0, 2
    stw r25, 0x78(r20)
    add r19, r18, r0
    subf r17, r18, r19
    stw r25, 0x7c(r20)
    srawi r0, r17, 2
    addze. r16, r0
    stw r25, 0x80(r20)
    beq lbl_fn_8057E278_0000193C
    subi r0, r30, 0x1
    cmplw r16, r0
    ble lbl_fn_8057E278_000018D0
    addi r4, r28, 0x1f
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_000018D0:
    slwi r3, r16, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8057E278_000018FC
    lis r4, lbl_80775A88@ha
    addi r3, r29, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8057E278_000018FC:
    stw r31, 0x0(r21)
    subf r0, r18, r19
    srawi r0, r0, 2
    mr r4, r18
    stw r16, 0x8(r21)
    addze r0, r0
    slwi r5, r0, 2
    lwz r3, 0x4(r21)
    slwi r0, r3, 2
    add r3, r31, r0
    bl memmove
    srawi r0, r17, 2
    lwz r3, 0x4(r21)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r21)
lbl_fn_8057E278_0000193C:
    lwz r3, 0x4(r15)
    subi r23, r23, 0x1
    addi r20, r20, 0x84
    addi r0, r3, 0x1
    stw r0, 0x4(r15)
lbl_fn_8057E278_00001950:
    cmpwi r23, 0x0
    bne lbl_fn_8057E278_00001418
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8057E840(void)
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
    beq lbl_fn_8057E840_000019DC
    lwz r0, lbl_8087F9C0
    cmpwi r0, 0x0
    beq lbl_fn_8057E840_000019A8
    li r0, 0x0
    stw r0, lbl_8087F9C0
lbl_fn_8057E840_000019A8:
    cmpwi r3, 0x0
    beq lbl_fn_8057E840_000019CC
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8057E840_000019CC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8057E840_000019CC
    bl fn_800897D8
lbl_fn_8057E840_000019CC:
    cmpwi r31, 0x0
    ble lbl_fn_8057E840_000019DC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8057E840_000019DC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057E8C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, lbl_8087F9C0
    cmpwi r0, 0x0
    bne lbl_fn_8057E8C8_00001C04
    lis r5, lbl_8076105C@ha
    li r3, 0xac
    addi r5, r5, lbl_8076105C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8057E8C8_00001C00
    lis r4, lbl_80796790@ha
    li r28, 0x0
    addi r4, r4, lbl_80796790@l
    stw r4, 0xa8(r3)
    li r29, 0x1
    li r5, 0x8
    stw r28, 0x0(r3)
    li r4, 0x0
    stw r29, 0x8(r3)
    stw r28, 0xc(r3)
    stw r29, 0x10(r3)
    stw r29, 0x14(r3)
    stw r29, 0x18(r3)
    stw r28, 0x1c(r3)
    stw r29, 0x20(r3)
    stw r28, 0xa4(r3)
    lwz r6, lbl_8087F0A8
    lwz r0, 0x244(r6)
    stw r0, 0x4(r3)
    stw r28, 0x24(r3)
    stw r28, 0x28(r3)
    stw r28, 0x2c(r3)
    stw r28, 0x30(r3)
    stw r28, 0x34(r3)
    addi r3, r3, 0x38
    bl memset
    lfs f2, lbl_80888098
    li r0, 0x10
    stfs f2, 0x40(r31)
    li r30, 0x2
    lfs f1, lbl_8088809C
    addi r3, r31, 0x68
    stfs f2, 0x44(r31)
    li r4, 0x0
    lfs f0, lbl_808880A0
    li r5, 0x10
    stfs f1, 0x48(r31)
    stfs f2, 0x4c(r31)
    stfs f0, 0x54(r31)
    stw r0, 0x50(r31)
    stw r30, 0x58(r31)
    stw r29, 0x5c(r31)
    stw r29, 0x60(r31)
    stw r29, 0x64(r31)
    bl memset
    stw r29, 0x78(r31)
    addi r3, r31, 0x88
    li r4, 0x0
    li r5, 0xc
    stw r29, 0x7c(r31)
    stw r29, 0x80(r31)
    stw r28, 0x84(r31)
    bl memset
    stw r29, 0x94(r31)
    lfs f0, lbl_80888098
    stfs f0, 0x98(r31)
    stfs f0, 0x9c(r31)
    stfs f0, 0xa0(r31)
    bl fn_80624AB0
    clrlwi. r0, r3, 24
    bne lbl_fn_8057E8C8_00001B44
    stw r30, 0x94(r31)
    b lbl_fn_8057E8C8_00001B58
lbl_fn_8057E8C8_00001B44:
    cmplwi r0, 0x2
    bne lbl_fn_8057E8C8_00001B54
    stw r28, 0x94(r31)
    b lbl_fn_8057E8C8_00001B58
lbl_fn_8057E8C8_00001B54:
    stw r29, 0x94(r31)
lbl_fn_8057E8C8_00001B58:
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8057E8C8_00001BE0
    lfs f1, 0x98(r31)
    li r4, 0x0
    li r5, 0x0
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    lfs f1, 0x9c(r31)
    li r5, 0x0
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    lfs f1, 0xa0(r31)
    li r5, 0x0
    bl fn_800D0240
    lwz r0, 0x94(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8057E8C8_00001BB4
    cmpwi r0, 0x2
    beq lbl_fn_8057E8C8_00001BC4
    b lbl_fn_8057E8C8_00001BD4
lbl_fn_8057E8C8_00001BB4:
    lwz r3, lbl_8087EFE8
    li r0, 0x2
    stw r0, 0x2a10(r3)
    b lbl_fn_8057E8C8_00001BE0
lbl_fn_8057E8C8_00001BC4:
    lwz r3, lbl_8087EFE8
    li r0, 0x3
    stw r0, 0x2a10(r3)
    b lbl_fn_8057E8C8_00001BE0
lbl_fn_8057E8C8_00001BD4:
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x2a10(r3)
lbl_fn_8057E8C8_00001BE0:
    li r0, 0x0
    stw r0, 0xa4(r31)
    lwz r4, lbl_8087EFA8
    cmpwi r4, 0x0
    beq lbl_fn_8057E8C8_00001C00
    lwz r3, 0xa4(r31)
    addi r0, r3, 0xa
    stw r0, 0x34(r4)
lbl_fn_8057E8C8_00001C00:
    stw r31, lbl_8087F9C0
lbl_fn_8057E8C8_00001C04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
