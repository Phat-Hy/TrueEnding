#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void NANDSetAutoErrorMessaging(void);
extern void __register_global_object(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8006B0C8(void);
extern void fn_8006B174(void);
extern void fn_8006EF48(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800A500C(void);
extern void fn_800D1D3C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_801F0758(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_8061E370(void);
extern void fn_8061E5C0(void);
extern void fn_8061E7D0(void);
extern void fn_8061E8C0(void);
extern void fn_8061E9E0(void);
extern void fn_8061EC60(void);
extern void fn_8061EF10(void);
extern void fn_8061EF90(void);
extern void fn_8061F460(void);
extern void fn_8061F470(void);
extern void fn_8061F9F0(void);
extern void fn_8061FBE0(void);
extern void fn_80620220(void);
extern void fn_80620830(void);
extern void fn_80620BD0(void);
extern void fn_80621CD0(void);
extern void fn_80622050(void);
extern void fn_80622260(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807789D8[];
extern u8 lbl_807327B4[];
extern u8 lbl_80778A9C[];
extern u8 lbl_807C73E8[];
extern u8 lbl_807C73F4[];

/* Small data declarations */
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF58;
extern u32 lbl_8087EF5C;
extern u32 lbl_8087EF68;
extern u32 lbl_80880CA0;
extern u32 lbl_80880CA4;
extern u32 lbl_80880CA8;
extern u32 lbl_80880CAC;

/* Function declarations */
void fn_800A291C(void);
void fn_800A2978(void);
void fn_800A29B4(void);
void fn_800A29F0(void);
void fn_800A2A2C(void);
void fn_800A2A68(void);
void fn_800A2AA4(void);
void fn_800A2AE0(void);
void fn_800A2B1C(void);
void fn_800A2B58(void);
void fn_800A2B94(void);
void fn_800A2BD0(void);
void fn_800A2C0C(void);
void fn_800A2C48(void);
void fn_800A2D20(void);
void fn_800A2D60(void);
void fn_800A2DE0(void);
void fn_800A4228(void);
void fn_800A4244(void);
void fn_800A4450(void);
void fn_800A4460(void);
void fn_800A4494(void);
void fn_800A45D0(void);
void fn_800A472C(void);
void fn_800A4794(void);
void fn_800A48B8(void);
void fn_800A49C4(void);
void fn_800A4AD4(void);
void fn_800A4BE4(void);
void fn_800A4D00(void);
void fn_800A4E08(void);
void fn_800A4F0C(void);

asm void fn_800A291C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087EF58
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C73E8@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087EF58
    addi r5, r5, lbl_807C73E8@l
    bl __register_global_object
    la r3, lbl_8087EF5C
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C73F4@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087EF5C
    addi r5, r5, lbl_807C73F4@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2978(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x3
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A29B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x5
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A29F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x7
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2A2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x9
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2A68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0xd
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2AA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0xf
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2AE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x11
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2B1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x13
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2B58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0xb
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2B94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x15
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2BD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x17
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2C0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8061F470
    mr r4, r31
    li r5, 0x19
    bl fn_800A500C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2C48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087EF68
    cmpwi r0, 0x0
    bne lbl_fn_800A2C48_000003E4
    lis r31, lbl_807327B4@ha
    lis r3, 0x1
    addi r5, r31, lbl_807327B4@l
    li r4, 0x1
    mr r6, r5
    subi r3, r3, 0x7d20
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_800A2C48_000003E0
    mr r4, r29
    bl fn_800D1D3C
    lis r3, lbl_80778A9C@ha
    li r0, 0x0
    addi r3, r3, lbl_80778A9C@l
    stw r3, 0x0(r30)
    li r3, 0x1
    stb r0, 0x4c(r30)
    stw r0, 0x15c(r30)
    stw r0, 0x160(r30)
    stw r0, 0x168(r30)
    stw r0, 0x16c(r30)
    stw r0, 0x170(r30)
    stw r0, 0x174(r30)
    bl NANDSetAutoErrorMessaging
    addi r4, r31, lbl_807327B4@l
    mr r3, r30
    addi r4, r4, 0x1
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r30, 0x1
    li r4, 0x1
    stw r3, -0x7d40(r5)
    bl fn_800D246C
lbl_fn_800A2C48_000003E0:
    stw r30, lbl_8087EF68
lbl_fn_800A2C48_000003E4:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087EF68
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A2D20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A2D20_0000042C
    cmpwi r4, 0x0
    ble lbl_fn_800A2D20_0000042C
    bl dtor_80084684
lbl_fn_800A2D20_0000042C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2D60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_800A2D60_000004AC
    addis r3, r31, 0x1
    li r4, 0x0
    lwz r3, -0x7d40(r3)
    bl fn_800D246C
    addis r6, r31, 0x1
    li r0, 0x13
    lwz r5, -0x7d40(r6)
    li r3, 0x1
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r5, -0x7d40(r6)
    lwz r4, 0xfc(r5)
    oris r4, r4, 0x1000
    stw r4, 0xfc(r5)
    lwz r4, -0x7d40(r6)
    stw r0, 0x108(r4)
    b lbl_fn_800A2D60_000004B0
lbl_fn_800A2D60_000004AC:
    li r3, 0x0
lbl_fn_800A2D60_000004B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A2DE0(void)
{
    nofralloc
    stwu r1, -0x6e0(r1)
    mflr r0
    stw r0, 0x6e4(r1)
    stw r31, 0x6dc(r1)
    mr r31, r3
    stw r30, 0x6d8(r1)
    stw r29, 0x6d4(r1)
    stw r28, 0x6d0(r1)
    lwz r5, 0x15c(r3)
    cmplwi r5, 0x19
    bgt lbl_fn_800A2DE0_000018B0
    lis r4, jumptable_807789D8@ha
    slwi r0, r5, 2
    addi r4, r4, jumptable_807789D8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r4, 0x170(r3)
    cmpwi r4, 0x0
    ble lbl_fn_800A2DE0_00000520
    subi r0, r4, 0x1
    stw r0, 0x170(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000520:
    lwz r4, 0x48(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_800A2DE0_000018B0
    cmpwi r4, 0x2
    bne lbl_fn_800A2DE0_00000588
    li r0, 0x6
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r5, 0x1
    lis r8, fn_800A29F0@ha
    addi r7, r5, -0x8000
    addi r3, r31, 0x4c
    addi r4, r31, 0x234
    addi r6, r31, 0x2c0
    addi r8, r8, fn_800A29F0@l
    addi r9, r31, 0x178
    li r5, 0x2
    bl fn_80620220
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A2DE0_00000730
lbl_fn_800A2DE0_00000588:
    li r0, 0x0
    stw r0, 0x158(r3)
    addi r29, r3, 0x4c
    addi r30, r1, 0xb4
    stw r0, 0xb4(r1)
    mr r3, r29
    stw r0, 0xb8(r1)
    stw r0, 0xbc(r1)
    bl strlen
    mr r28, r3
    mr r3, r30
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x34(r1)
    mr r3, r30
    stb r0, 0x30(r1)
    mr r6, r29
    add r7, r29, r28
    addi r8, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0xc0
    bl fn_8006B174
    lwz r0, 0xb4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00000600
    lwz r3, 0xbc(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00000600:
    lwz r0, 0xc0(r1)
    lis r4, lbl_807327B4@ha
    addi r4, r4, lbl_807327B4@l
    addi r3, r1, 0xd0
    srwi. r0, r0, 31
    addi r4, r4, 0x1d
    bne lbl_fn_800A2DE0_00000624
    addi r5, r1, 0xc1
    b lbl_fn_800A2DE0_00000628
lbl_fn_800A2DE0_00000624:
    lwz r5, 0xc8(r1)
lbl_fn_800A2DE0_00000628:
    crclr 6
    bl sprintf
    lwz r0, 0xc0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00000644
    lwz r3, 0xc8(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00000644:
    li r0, 0x0
    stw r0, 0x158(r31)
    addi r3, r1, 0x1d0
    addi r4, r1, 0xd0
    bl strcpy
    addi r3, r1, 0x1d0
    addi r4, r1, 0x38
    bl fn_80622050
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_800A2DE0_00000684
    lbz r3, 0x38(r1)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_800A2DE0_000006A4
lbl_fn_800A2DE0_00000684:
    cmpwi r3, -0xc
    bne lbl_fn_800A2DE0_00000694
    li r0, 0x0
    b lbl_fn_800A2DE0_000006A4
lbl_fn_800A2DE0_00000694:
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
    li r0, 0x0
lbl_fn_800A2DE0_000006A4:
    cmpwi r0, 0x0
    beq lbl_fn_800A2DE0_000006F0
    li r0, 0x8
    stw r0, 0x15c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    bl fn_8061F460
    lis r6, fn_800A2A2C@ha
    addi r3, r1, 0xd0
    addi r4, r31, 0x234
    addi r7, r31, 0x178
    addi r6, r6, fn_800A2A2C@l
    li r5, 0x2
    bl fn_8061F9F0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A2DE0_00000730
lbl_fn_800A2DE0_000006F0:
    li r0, 0x4
    stw r0, 0x15c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    bl fn_8061F460
    lis r6, fn_800A29B4@ha
    addi r3, r1, 0xd0
    addi r6, r6, fn_800A29B4@l
    addi r7, r31, 0x178
    li r4, 0x34
    li r5, 0x0
    bl fn_8061E370
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
lbl_fn_800A2DE0_00000730:
    lwz r5, 0x158(r31)
    cmpwi r5, 0x0
    beq lbl_fn_800A2DE0_000018B0
    lwz r4, 0x15c(r31)
    li r0, 0x0
    lwz r3, 0x48(r31)
    slwi r4, r4, 16
    stw r5, 0x168(r31)
    slwi r3, r3, 8
    or r3, r4, r3
    stw r0, 0x15c(r31)
    or r0, r5, r3
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
    lwz r6, 0x158(r3)
    cmpwi r6, 0x0
    bne lbl_fn_800A2DE0_00000944
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A2DE0_00000794
    cmpwi r0, 0x1
    beq lbl_fn_800A2DE0_000008C4
    cmpwi r0, 0xa
    beq lbl_fn_800A2DE0_00000938
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000794:
    li r0, 0x0
    stw r0, 0x158(r3)
    addi r28, r3, 0x4c
    addi r30, r1, 0xa8
    stw r0, 0xa8(r1)
    mr r3, r28
    stw r0, 0xac(r1)
    stw r0, 0xb0(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x28(r1)
    mr r3, r30
    stb r0, 0x2c(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x2c
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x9c
    bl fn_8006B174
    lwz r0, 0xa8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_0000080C
    lwz r3, 0xb0(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_0000080C:
    lwz r0, 0x9c(r1)
    lis r4, lbl_807327B4@ha
    addi r4, r4, lbl_807327B4@l
    addi r3, r1, 0x5d0
    srwi. r0, r0, 31
    addi r4, r4, 0x1d
    bne lbl_fn_800A2DE0_00000830
    addi r5, r1, 0x9d
    b lbl_fn_800A2DE0_00000834
lbl_fn_800A2DE0_00000830:
    lwz r5, 0xa4(r1)
lbl_fn_800A2DE0_00000834:
    crclr 6
    bl sprintf
    lwz r0, 0x9c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00000850
    lwz r3, 0xa4(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00000850:
    li r0, 0x4
    stw r0, 0x15c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    bl fn_8061F460
    lis r6, fn_800A29B4@ha
    addi r3, r1, 0x5d0
    addi r6, r6, fn_800A29B4@l
    addi r7, r31, 0x178
    li r4, 0x34
    li r5, 0x0
    bl fn_8061E370
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x0
    lwz r4, 0x48(r31)
    slwi r5, r5, 16
    stw r3, 0x168(r31)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r31)
    or r0, r3, r4
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_000008C4:
    li r0, 0x4
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r6, fn_800A29B4@ha
    addi r3, r31, 0x4c
    addi r6, r6, fn_800A29B4@l
    addi r7, r31, 0x178
    li r4, 0x34
    li r5, 0x0
    bl fn_8061EC60
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x0
    lwz r4, 0x48(r31)
    slwi r5, r5, 16
    stw r3, 0x168(r31)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r31)
    or r0, r3, r4
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000938:
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000944:
    lwz r4, 0x48(r3)
    li r0, 0x0
    slwi r5, r5, 16
    stw r6, 0x168(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r3)
    or r0, r6, r4
    stw r0, 0x16c(r3)
    b lbl_fn_800A2DE0_000018B0
    lwz r6, 0x158(r3)
    cmpwi r6, 0x0
    bne lbl_fn_800A2DE0_00000C20
    lwz r4, 0x48(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_800A2DE0_00000AF0
    cmpwi r4, 0x0
    beq lbl_fn_800A2DE0_0000099C
    cmpwi r4, 0x1
    beq lbl_fn_800A2DE0_00000AE4
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_0000099C:
    lwz r0, 0x150(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800A2DE0_00000AD8
    li r0, 0x0
    stw r0, 0x158(r3)
    addi r28, r3, 0x4c
    addi r30, r1, 0x90
    stw r0, 0x90(r1)
    mr r3, r28
    stw r0, 0x94(r1)
    stw r0, 0x98(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x20(r1)
    mr r3, r30
    stb r0, 0x24(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x24
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x84
    bl fn_8006B174
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00000A20
    lwz r3, 0x98(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00000A20:
    lwz r0, 0x84(r1)
    lis r4, lbl_807327B4@ha
    addi r4, r4, lbl_807327B4@l
    addi r3, r1, 0x4d0
    srwi. r0, r0, 31
    addi r4, r4, 0x1d
    bne lbl_fn_800A2DE0_00000A44
    addi r5, r1, 0x85
    b lbl_fn_800A2DE0_00000A48
lbl_fn_800A2DE0_00000A44:
    lwz r5, 0x8c(r1)
lbl_fn_800A2DE0_00000A48:
    crclr 6
    bl sprintf
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00000A64
    lwz r3, 0x8c(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00000A64:
    li r0, 0x8
    stw r0, 0x15c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    bl fn_8061F460
    lis r6, fn_800A2A2C@ha
    addi r3, r1, 0x4d0
    addi r4, r31, 0x234
    addi r7, r31, 0x178
    addi r6, r6, fn_800A2A2C@l
    li r5, 0x2
    bl fn_8061F9F0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x0
    lwz r4, 0x48(r31)
    slwi r5, r5, 16
    stw r3, 0x168(r31)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r31)
    or r0, r3, r4
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000AD8:
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000AE4:
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000AF0:
    li r0, 0x0
    stw r0, 0x158(r3)
    addi r28, r3, 0x4c
    addi r30, r1, 0x78
    stw r0, 0x78(r1)
    mr r3, r28
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x18(r1)
    mr r3, r30
    stb r0, 0x1c(r1)
    mr r6, r28
    add r7, r28, r29
    addi r8, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x6c
    bl fn_8006B174
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00000B68
    lwz r3, 0x80(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00000B68:
    lwz r0, 0x6c(r1)
    lis r4, lbl_807327B4@ha
    addi r4, r4, lbl_807327B4@l
    addi r3, r1, 0x3d0
    srwi. r0, r0, 31
    addi r4, r4, 0x1d
    bne lbl_fn_800A2DE0_00000B8C
    addi r5, r1, 0x6d
    b lbl_fn_800A2DE0_00000B90
lbl_fn_800A2DE0_00000B8C:
    lwz r5, 0x74(r1)
lbl_fn_800A2DE0_00000B90:
    crclr 6
    bl sprintf
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00000BAC
    lwz r3, 0x74(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00000BAC:
    li r0, 0x8
    stw r0, 0x15c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    bl fn_8061F460
    lis r6, fn_800A2A2C@ha
    addi r3, r1, 0x3d0
    addi r4, r31, 0x234
    addi r7, r31, 0x178
    addi r6, r6, fn_800A2A2C@l
    li r5, 0x2
    bl fn_8061F9F0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x0
    lwz r4, 0x48(r31)
    slwi r5, r5, 16
    stw r3, 0x168(r31)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r31)
    or r0, r3, r4
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000C20:
    lwz r4, 0x48(r3)
    li r0, 0x0
    slwi r5, r5, 16
    stw r6, 0x168(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r3)
    or r0, r6, r4
    stw r0, 0x16c(r3)
    b lbl_fn_800A2DE0_000018B0
    lwz r6, 0x158(r3)
    cmpwi cr1, r6, 0x0
    bne cr1, lbl_fn_800A2DE0_00001080
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A2DE0_00000C84
    cmpwi r0, 0x2
    beq lbl_fn_800A2DE0_00000D80
    cmpwi r0, 0x3
    beq lbl_fn_800A2DE0_00000E7C
    cmpwi r0, 0x4
    beq lbl_fn_800A2DE0_00000F24
    cmpwi r0, 0x5
    beq lbl_fn_800A2DE0_00001020
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000C84:
    bl fn_800827E0
    lwz r4, 0x150(r31)
    lis r7, lbl_807327B4@ha
    addi r7, r7, lbl_807327B4@l
    li r5, 0x20
    addi r0, r4, 0x1f
    li r6, 0x1
    mr r8, r7
    li r9, 0x0
    clrrwi r4, r0, 5
    bl fn_800838B8
    lwz r5, 0x150(r31)
    li r4, 0x0
    stw r3, 0x14c(r31)
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
    bl memset
    li r0, 0xe
    stw r0, 0x15c(r31)
    lwz r29, 0x150(r31)
    mr r4, r31
    lwz r30, 0x14c(r31)
    addi r3, r31, 0x178
    bl fn_8061F460
    lis r6, fn_800A2AA4@ha
    mr r4, r30
    mr r5, r29
    addi r3, r31, 0x234
    addi r6, r6, fn_800A2AA4@l
    addi r7, r31, 0x178
    bl fn_8061E8C0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    bl fn_800827E0
    lwz r4, 0x14c(r31)
    bl fn_80083AD4
    lwz r5, 0x15c(r31)
    li r0, 0x12
    lwz r3, 0x48(r31)
    mr r4, r31
    lwz r6, 0x158(r31)
    slwi r5, r5, 16
    slwi r3, r3, 8
    stw r6, 0x168(r31)
    or r5, r5, r3
    or r5, r6, r5
    stw r5, 0x16c(r31)
    addi r3, r31, 0x178
    stw r0, 0x15c(r31)
    bl fn_8061F460
    lis r4, fn_800A2B1C@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B1C@l
    addi r5, r31, 0x178
    bl fn_8061FBE0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000D80:
    lwz r28, 0x154(r3)
    cmpwi r28, 0x0
    ble lbl_fn_800A2DE0_00000DD0
    li r0, 0xa
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r6, fn_800A2B58@ha
    mr r4, r28
    addi r3, r31, 0x234
    addi r7, r31, 0x178
    addi r6, r6, fn_800A2B58@l
    li r5, 0x0
    bl fn_8061E9E0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A2DE0_00000E18
lbl_fn_800A2DE0_00000DD0:
    li r0, 0xe
    stw r0, 0x15c(r3)
    lwz r30, 0x150(r3)
    mr r4, r31
    lwz r29, 0x14c(r3)
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r6, fn_800A2AA4@ha
    mr r4, r29
    mr r5, r30
    addi r3, r31, 0x234
    addi r6, r6, fn_800A2AA4@l
    addi r7, r31, 0x178
    bl fn_8061E8C0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
lbl_fn_800A2DE0_00000E18:
    lwz r7, 0x158(r31)
    cmpwi r7, 0x0
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x14
    lwz r3, 0x48(r31)
    mr r4, r31
    slwi r6, r5, 16
    stw r7, 0x168(r31)
    slwi r5, r3, 8
    addi r3, r31, 0x178
    or r5, r6, r5
    stw r0, 0x15c(r31)
    or r0, r7, r5
    stw r0, 0x16c(r31)
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000E7C:
    li r0, 0xe
    stw r0, 0x15c(r3)
    lwz r30, 0x150(r3)
    mr r4, r31
    lwz r29, 0x14c(r3)
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r6, fn_800A2AA4@ha
    mr r4, r29
    mr r5, r30
    addi r3, r31, 0x234
    addi r6, r6, fn_800A2AA4@l
    addi r7, r31, 0x178
    bl fn_8061E8C0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r6, 0x15c(r31)
    li r0, 0x12
    lwz r5, 0x48(r31)
    mr r4, r31
    slwi r6, r6, 16
    stw r3, 0x168(r31)
    slwi r5, r5, 8
    or r5, r6, r5
    stw r0, 0x15c(r31)
    or r0, r3, r5
    addi r3, r31, 0x178
    stw r0, 0x16c(r31)
    bl fn_8061F460
    lis r4, fn_800A2B1C@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B1C@l
    addi r5, r31, 0x178
    bl fn_8061FBE0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00000F24:
    lwz r28, 0x154(r3)
    cmpwi r28, 0x0
    ble lbl_fn_800A2DE0_00000F74
    li r0, 0xa
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r6, fn_800A2B58@ha
    mr r4, r28
    addi r3, r31, 0x234
    addi r7, r31, 0x178
    addi r6, r6, fn_800A2B58@l
    li r5, 0x0
    bl fn_8061E9E0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A2DE0_00000FBC
lbl_fn_800A2DE0_00000F74:
    li r0, 0xc
    stw r0, 0x15c(r3)
    lwz r30, 0x150(r3)
    mr r4, r31
    lwz r29, 0x14c(r3)
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r6, fn_800A2A68@ha
    mr r4, r29
    mr r5, r30
    addi r3, r31, 0x234
    addi r6, r6, fn_800A2A68@l
    addi r7, r31, 0x178
    bl fn_8061E7D0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
lbl_fn_800A2DE0_00000FBC:
    lwz r7, 0x158(r31)
    cmpwi r7, 0x0
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x14
    lwz r3, 0x48(r31)
    mr r4, r31
    slwi r6, r5, 16
    stw r7, 0x168(r31)
    slwi r5, r3, 8
    addi r3, r31, 0x178
    or r5, r6, r5
    stw r0, 0x15c(r31)
    or r0, r7, r5
    stw r0, 0x16c(r31)
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001020:
    beq cr1, lbl_fn_800A2DE0_00001074
    slwi r4, r5, 16
    slwi r0, r0, 8
    or r4, r4, r0
    stw r6, 0x168(r3)
    or r5, r6, r4
    li r0, 0x14
    stw r5, 0x16c(r3)
    mr r4, r31
    stw r0, 0x15c(r3)
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001074:
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001080:
    lwz r0, 0x48(r3)
    slwi r4, r5, 16
    cmpwi r5, 0x7
    stw r6, 0x168(r3)
    slwi r0, r0, 8
    or r0, r4, r0
    or r0, r6, r0
    stw r0, 0x16c(r3)
    bne lbl_fn_800A2DE0_000010DC
    li r0, 0x14
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_00001110
lbl_fn_800A2DE0_000010DC:
    li r0, 0x12
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r4, fn_800A2B1C@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B1C@l
    addi r5, r31, 0x178
    bl fn_8061FBE0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
lbl_fn_800A2DE0_00001110:
    li r0, 0x0
    stw r0, 0x15c(r31)
    b lbl_fn_800A2DE0_000018B0
    lwz r7, 0x158(r3)
    cmpwi r7, 0x0
    bne lbl_fn_800A2DE0_00001298
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_800A2DE0_00001148
    cmpwi r0, 0x4
    beq lbl_fn_800A2DE0_000011F0
    cmpwi r0, 0x6
    beq lbl_fn_800A2DE0_000011F0
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001148:
    li r0, 0xe
    stw r0, 0x15c(r3)
    lwz r30, 0x150(r3)
    mr r4, r31
    lwz r29, 0x14c(r3)
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r6, fn_800A2AA4@ha
    mr r4, r29
    mr r5, r30
    addi r3, r31, 0x234
    addi r6, r6, fn_800A2AA4@l
    addi r7, r31, 0x178
    bl fn_8061E8C0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r6, 0x15c(r31)
    li r0, 0x14
    lwz r5, 0x48(r31)
    mr r4, r31
    slwi r6, r6, 16
    stw r3, 0x168(r31)
    slwi r5, r5, 8
    or r5, r6, r5
    stw r0, 0x15c(r31)
    or r0, r3, r5
    addi r3, r31, 0x178
    stw r0, 0x16c(r31)
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_000011F0:
    li r0, 0xc
    stw r0, 0x15c(r3)
    lwz r30, 0x150(r3)
    mr r4, r31
    lwz r29, 0x14c(r3)
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r6, fn_800A2A68@ha
    mr r4, r29
    mr r5, r30
    addi r3, r31, 0x234
    addi r6, r6, fn_800A2A68@l
    addi r7, r31, 0x178
    bl fn_8061E7D0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r6, 0x15c(r31)
    li r0, 0x14
    lwz r5, 0x48(r31)
    mr r4, r31
    slwi r6, r6, 16
    stw r3, 0x168(r31)
    slwi r5, r5, 8
    or r5, r6, r5
    stw r0, 0x15c(r31)
    or r0, r3, r5
    addi r3, r31, 0x178
    stw r0, 0x16c(r31)
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001298:
    lwz r4, 0x48(r3)
    slwi r6, r5, 16
    li r0, 0x14
    stw r7, 0x168(r3)
    slwi r5, r4, 8
    mr r4, r31
    or r5, r6, r5
    stw r0, 0x15c(r3)
    or r0, r7, r5
    stw r0, 0x16c(r3)
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
    lwz r6, 0x158(r3)
    cmpwi r6, 0x0
    bne lbl_fn_800A2DE0_00001468
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A2DE0_00001318
    cmpwi r0, 0x2
    beq lbl_fn_800A2DE0_00001390
    cmpwi r0, 0x3
    beq lbl_fn_800A2DE0_000013FC
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001318:
    bl fn_800827E0
    lwz r4, 0x14c(r31)
    bl fn_80083AD4
    li r0, 0x12
    stw r0, 0x15c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    bl fn_8061F460
    lis r4, fn_800A2B1C@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B1C@l
    addi r5, r31, 0x178
    bl fn_8061FBE0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x0
    lwz r4, 0x48(r31)
    slwi r5, r5, 16
    stw r3, 0x168(r31)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r31)
    or r0, r3, r4
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001390:
    li r0, 0x10
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r4, fn_800A2AE0@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2AE0@l
    addi r5, r31, 0x178
    bl fn_80620830
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x0
    lwz r4, 0x48(r31)
    slwi r5, r5, 16
    stw r3, 0x168(r31)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r31)
    or r0, r3, r4
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_000013FC:
    li r0, 0x12
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r4, fn_800A2B1C@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B1C@l
    addi r5, r31, 0x178
    bl fn_8061FBE0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x0
    lwz r4, 0x48(r31)
    slwi r5, r5, 16
    stw r3, 0x168(r31)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r31)
    or r0, r3, r4
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001468:
    lwz r4, 0x48(r3)
    slwi r5, r5, 16
    stw r6, 0x168(r3)
    slwi r0, r4, 8
    cmpwi r4, 0x0
    or r0, r5, r0
    or r0, r6, r0
    stw r0, 0x16c(r3)
    bne lbl_fn_800A2DE0_00001498
    bl fn_800827E0
    lwz r4, 0x14c(r31)
    bl fn_80083AD4
lbl_fn_800A2DE0_00001498:
    li r0, 0x14
    stw r0, 0x15c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
    lwz r7, 0x158(r3)
    cmpwi r7, 0x0
    bne lbl_fn_800A2DE0_0000156C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x4
    beq lbl_fn_800A2DE0_000014F4
    cmpwi r0, 0x6
    beq lbl_fn_800A2DE0_00001560
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_000014F4:
    li r0, 0x10
    stw r0, 0x15c(r3)
    mr r4, r31
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r4, fn_800A2AE0@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2AE0@l
    addi r5, r31, 0x178
    bl fn_80620830
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r5, 0x15c(r31)
    li r0, 0x0
    lwz r4, 0x48(r31)
    slwi r5, r5, 16
    stw r3, 0x168(r31)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r31)
    or r0, r3, r4
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_00001560:
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_0000156C:
    lwz r4, 0x48(r3)
    slwi r6, r5, 16
    li r0, 0x14
    stw r7, 0x168(r3)
    slwi r5, r4, 8
    mr r4, r31
    or r5, r6, r5
    stw r0, 0x15c(r3)
    or r0, r7, r5
    stw r0, 0x16c(r3)
    addi r3, r3, 0x178
    bl fn_8061F460
    lis r4, fn_800A2B94@ha
    addi r3, r31, 0x234
    addi r4, r4, fn_800A2B94@l
    addi r5, r31, 0x178
    bl fn_80620BD0
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    b lbl_fn_800A2DE0_000018B0
    lwz r4, 0x158(r3)
    cmpwi r4, 0x0
    bne lbl_fn_800A2DE0_000017B8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A2DE0_000015E0
    cmpwi r0, 0x3
    bne lbl_fn_800A2DE0_000017AC
lbl_fn_800A2DE0_000015E0:
    li r0, 0x0
    stw r0, 0x158(r3)
    addi r28, r3, 0x4c
    addi r29, r1, 0x60
    stw r0, 0x60(r1)
    mr r3, r28
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    bl strlen
    mr r30, r3
    mr r3, r29
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0x10(r1)
    mr r3, r29
    stb r0, 0x14(r1)
    mr r6, r28
    add r7, r28, r30
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r29
    addi r3, r1, 0x54
    bl fn_8006B174
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00001658
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00001658:
    lwz r0, 0x54(r1)
    lis r4, lbl_807327B4@ha
    addi r4, r4, lbl_807327B4@l
    addi r3, r1, 0x2d0
    srwi. r0, r0, 31
    addi r4, r4, 0x1d
    bne lbl_fn_800A2DE0_0000167C
    addi r5, r1, 0x55
    b lbl_fn_800A2DE0_00001680
lbl_fn_800A2DE0_0000167C:
    lwz r5, 0x5c(r1)
lbl_fn_800A2DE0_00001680:
    crclr 6
    bl sprintf
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_0000169C
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_0000169C:
    li r0, 0x18
    stw r0, 0x15c(r31)
    li r0, 0x0
    addi r28, r31, 0x4c
    stw r0, 0x48(r1)
    mr r3, r28
    addi r29, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    bl strlen
    mr r30, r3
    mr r3, r29
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r29
    stb r0, 0xc(r1)
    mr r6, r28
    add r7, r28, r30
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r29
    addi r3, r1, 0x3c
    bl fn_8006B0C8
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00001718
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00001718:
    mr r4, r31
    addi r3, r31, 0x178
    bl fn_8061F460
    lwz r0, 0x3c(r1)
    addi r3, r1, 0x2d0
    srwi. r0, r0, 31
    bne lbl_fn_800A2DE0_0000173C
    addi r4, r1, 0x3d
    b lbl_fn_800A2DE0_00001740
lbl_fn_800A2DE0_0000173C:
    lwz r4, 0x44(r1)
lbl_fn_800A2DE0_00001740:
    lis r5, fn_800A2C0C@ha
    addi r6, r31, 0x178
    addi r5, r5, fn_800A2C0C@l
    bl fn_8061EF10
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    lwz r0, 0x3c(r1)
    mr r29, r3
    srwi. r0, r0, 31
    beq lbl_fn_800A2DE0_00001774
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_800A2DE0_00001774:
    cmpwi r29, 0x0
    stw r29, 0x158(r31)
    beq lbl_fn_800A2DE0_000018B0
    lwz r4, 0x15c(r31)
    li r0, 0x0
    lwz r3, 0x48(r31)
    slwi r4, r4, 16
    stw r29, 0x168(r31)
    slwi r3, r3, 8
    or r3, r4, r3
    stw r0, 0x15c(r31)
    or r0, r29, r3
    stw r0, 0x16c(r31)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_000017AC:
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_000017B8:
    lwz r0, 0x168(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800A2DE0_000017C8
    stw r4, 0x168(r3)
lbl_fn_800A2DE0_000017C8:
    lwz r5, 0x15c(r3)
    li r0, 0x0
    lwz r4, 0x48(r3)
    slwi r5, r5, 16
    lwz r6, 0x158(r3)
    slwi r4, r4, 8
    stw r0, 0x15c(r3)
    or r0, r5, r4
    or r0, r6, r0
    stw r0, 0x16c(r3)
    b lbl_fn_800A2DE0_000018B0
    lwz r6, 0x158(r3)
    cmpwi r6, 0x0
    bne lbl_fn_800A2DE0_0000180C
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_0000180C:
    lwz r4, 0x48(r3)
    li r0, 0x0
    slwi r5, r5, 16
    stw r6, 0x168(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r3)
    or r0, r6, r4
    stw r0, 0x16c(r3)
    b lbl_fn_800A2DE0_000018B0
    lwz r6, 0x158(r3)
    cmpwi r6, 0x0
    bne lbl_fn_800A2DE0_0000184C
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_0000184C:
    lwz r4, 0x48(r3)
    li r0, 0x0
    slwi r5, r5, 16
    stw r6, 0x168(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r3)
    or r0, r6, r4
    stw r0, 0x16c(r3)
    b lbl_fn_800A2DE0_000018B0
    lwz r6, 0x158(r3)
    cmpwi r6, 0x0
    bne lbl_fn_800A2DE0_0000188C
    li r0, 0x0
    stw r0, 0x15c(r3)
    b lbl_fn_800A2DE0_000018B0
lbl_fn_800A2DE0_0000188C:
    lwz r4, 0x48(r3)
    li r0, 0x0
    slwi r5, r5, 16
    stw r6, 0x168(r3)
    slwi r4, r4, 8
    or r4, r5, r4
    stw r0, 0x15c(r3)
    or r0, r6, r4
    stw r0, 0x16c(r3)
lbl_fn_800A2DE0_000018B0:
    lwz r0, 0x15c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800A2DE0_000018C8
    li r0, 0x3
    stw r0, 0x174(r31)
    b lbl_fn_800A2DE0_000018EC
lbl_fn_800A2DE0_000018C8:
    lwz r3, 0x174(r31)
    subic. r0, r3, 0x1
    stw r0, 0x174(r31)
    bgt lbl_fn_800A2DE0_000018EC
    addis r3, r31, 0x1
    lwz r3, -0x7d40(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_800A2DE0_000018EC:
    lwz r0, 0x6e4(r1)
    lwz r31, 0x6dc(r1)
    lwz r30, 0x6d8(r1)
    lwz r29, 0x6d4(r1)
    lwz r28, 0x6d0(r1)
    mtlr r0
    addi r1, r1, 0x6e0
    blr
}

asm void fn_800A4228(void)
{
    nofralloc
    lwz r5, 0x15c(r3)
    lwz r3, 0x168(r3)
    neg r0, r5
    stw r3, 0x0(r4)
    or r0, r0, r5
    srwi r3, r0, 31
    blr
}

asm void fn_800A4244(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r3, -0x7d40(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_800A4244_0000197C
    lfs f0, lbl_80880CA0
    stfs f0, 0x100(r3)
    lwz r3, -0x7d40(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_800A4244_0000197C:
    lwz r3, lbl_8087EEE0
    cmpwi r3, 0x0
    beq lbl_fn_800A4244_00001B10
    lwz r0, 0x44(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A4244_000019E8
    addis r3, r31, 0x1
    lis r30, lbl_807327B4@ha
    lwz r4, -0x7d40(r3)
    addi r30, r30, lbl_807327B4@l
    addi r3, r30, 0x25
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80880CA0
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    addis r4, r31, 0x1
    addi r3, r30, 0x2a
    lwz r4, -0x7d40(r4)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80880CA0
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    b lbl_fn_800A4244_00001A38
lbl_fn_800A4244_000019E8:
    addis r3, r31, 0x1
    lis r30, lbl_807327B4@ha
    lwz r4, -0x7d40(r3)
    addi r30, r30, lbl_807327B4@l
    addi r3, r30, 0x25
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80880CA4
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    addis r4, r31, 0x1
    addi r3, r30, 0x2a
    lwz r4, -0x7d40(r4)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80880CA8
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
lbl_fn_800A4244_00001A38:
    addis r3, r31, 0x1
    lis r30, lbl_807327B4@ha
    lwz r3, -0x7d40(r3)
    addi r30, r30, lbl_807327B4@l
    addi r4, r30, 0x2f
    addi r3, r3, 0x58
    bl fn_801FEC74
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_800A4244_00001B10
    addis r4, r31, 0x1
    addi r3, r30, 0x3a
    lwz r30, -0x7d40(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x14
    bl fn_801F4E8C
    mr r4, r29
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, 0x1c(r1)
    bne lbl_fn_800A4244_00001AB0
    addi r4, r1, 0xa
    b lbl_fn_800A4244_00001AB4
lbl_fn_800A4244_00001AB0:
    lwz r4, 0x10(r1)
lbl_fn_800A4244_00001AB4:
    lfs f2, lbl_80880CA0
    li r5, 0x1
    li r6, 0x4
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_800A4244_00001ADC
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_800A4244_00001ADC:
    addis r3, r31, 0x1
    lis r5, lbl_807327B4@ha
    lwz r4, -0x7d40(r3)
    addi r5, r5, lbl_807327B4@l
    addi r3, r5, 0x47
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f0, lbl_80880CAC
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    fadds f1, f0, f31
    bl fn_801FED24
lbl_fn_800A4244_00001B10:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800A4450(void)
{
    nofralloc
    slwi r0, r6, 3
    add r4, r4, r0
    addi r4, r4, 0x4
    b fn_801F0758
}

asm void fn_800A4460(void)
{
    nofralloc
    lwz r0, 0x15c(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_800A4460_00001B6C
    addis r3, r3, 0x1
    lwz r3, -0x7d40(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800A4460_00001B70
lbl_fn_800A4460_00001B6C:
    li r4, 0x1
lbl_fn_800A4460_00001B70:
    mr r3, r4
    blr
}

asm void fn_800A4494(void)
{
    nofralloc
    cmpwi r4, -0xa
    beq lbl_fn_800A4494_00001C64
    bge lbl_fn_800A4494_00001BCC
    cmpwi r4, -0x10
    beq lbl_fn_800A4494_00001C94
    bge lbl_fn_800A4494_00001BA8
    cmpwi r4, -0x40
    beq lbl_fn_800A4494_00001C9C
    bge lbl_fn_800A4494_00001CAC
    cmpwi r4, -0x80
    beq lbl_fn_800A4494_00001CA4
    b lbl_fn_800A4494_00001CAC
lbl_fn_800A4494_00001BA8:
    cmpwi r4, -0xd
    beq lbl_fn_800A4494_00001C7C
    bge lbl_fn_800A4494_00001BC0
    cmpwi r4, -0xe
    bge lbl_fn_800A4494_00001C84
    b lbl_fn_800A4494_00001C8C
lbl_fn_800A4494_00001BC0:
    cmpwi r4, -0xb
    bge lbl_fn_800A4494_00001C6C
    b lbl_fn_800A4494_00001C74
lbl_fn_800A4494_00001BCC:
    cmpwi r4, -0x4
    beq lbl_fn_800A4494_00001C3C
    bge lbl_fn_800A4494_00001BFC
    cmpwi r4, -0x7
    beq lbl_fn_800A4494_00001CAC
    bge lbl_fn_800A4494_00001BF0
    cmpwi r4, -0x8
    bge lbl_fn_800A4494_00001C54
    b lbl_fn_800A4494_00001C5C
lbl_fn_800A4494_00001BF0:
    cmpwi r4, -0x5
    bge lbl_fn_800A4494_00001C44
    b lbl_fn_800A4494_00001C4C
lbl_fn_800A4494_00001BFC:
    cmpwi r4, -0x1
    beq lbl_fn_800A4494_00001C24
    bge lbl_fn_800A4494_00001C14
    cmpwi r4, -0x2
    bge lbl_fn_800A4494_00001C2C
    b lbl_fn_800A4494_00001C34
lbl_fn_800A4494_00001C14:
    cmpwi r4, 0x1
    bge lbl_fn_800A4494_00001CAC
    li r3, 0x0
    blr
lbl_fn_800A4494_00001C24:
    li r3, 0x1
    blr
lbl_fn_800A4494_00001C2C:
    li r3, 0x2
    blr
lbl_fn_800A4494_00001C34:
    li r3, 0x3
    blr
lbl_fn_800A4494_00001C3C:
    li r3, 0x4
    blr
lbl_fn_800A4494_00001C44:
    li r3, 0x5
    blr
lbl_fn_800A4494_00001C4C:
    li r3, 0x6
    blr
lbl_fn_800A4494_00001C54:
    li r3, 0x7
    blr
lbl_fn_800A4494_00001C5C:
    li r3, 0x8
    blr
lbl_fn_800A4494_00001C64:
    li r3, 0x9
    blr
lbl_fn_800A4494_00001C6C:
    li r3, 0xa
    blr
lbl_fn_800A4494_00001C74:
    li r3, 0xb
    blr
lbl_fn_800A4494_00001C7C:
    li r3, 0xc
    blr
lbl_fn_800A4494_00001C84:
    li r3, 0xd
    blr
lbl_fn_800A4494_00001C8C:
    li r3, 0xe
    blr
lbl_fn_800A4494_00001C94:
    li r3, 0xf
    blr
lbl_fn_800A4494_00001C9C:
    li r3, 0x10
    blr
lbl_fn_800A4494_00001CA4:
    li r3, 0x11
    blr
lbl_fn_800A4494_00001CAC:
    li r3, 0x10
    blr
}

asm void fn_800A45D0(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    cmpwi r7, 0x0
    stw r0, 0x224(r1)
    li r0, 0x0
    stw r31, 0x21c(r1)
    mr r31, r6
    stw r30, 0x218(r1)
    mr r30, r5
    stw r29, 0x214(r1)
    mr r29, r4
    stw r28, 0x210(r1)
    mr r28, r3
    stw r0, 0x0(r5)
    beq lbl_fn_800A45D0_00001D80
    stw r0, 0x0(r5)
    addi r3, r1, 0x10
    bl fn_80621CD0
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_800A45D0_00001D1C
    mr r3, r28
    bl fn_800A4494
    stw r3, 0x0(r30)
    li r0, 0x0
    b lbl_fn_800A45D0_00001D70
lbl_fn_800A45D0_00001D1C:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x2f
    beq lbl_fn_800A45D0_00001D4C
    lis r4, lbl_807327B4@ha
    mr r6, r29
    addi r4, r4, lbl_807327B4@l
    addi r3, r1, 0x110
    addi r4, r4, 0x4e
    addi r5, r1, 0x10
    crclr 6
    bl sprintf
    b lbl_fn_800A45D0_00001D6C
lbl_fn_800A45D0_00001D4C:
    lis r4, lbl_807327B4@ha
    mr r6, r29
    addi r4, r4, lbl_807327B4@l
    addi r3, r1, 0x110
    addi r4, r4, 0x54
    addi r5, r1, 0x10
    crclr 6
    bl sprintf
lbl_fn_800A45D0_00001D6C:
    li r0, 0x1
lbl_fn_800A45D0_00001D70:
    cmpwi r0, 0x0
    bne lbl_fn_800A45D0_00001D88
    li r3, 0x0
    b lbl_fn_800A45D0_00001DF0
lbl_fn_800A45D0_00001D80:
    addi r3, r1, 0x110
    bl strcpy
lbl_fn_800A45D0_00001D88:
    addi r3, r1, 0x110
    addi r4, r1, 0x8
    bl fn_80622050
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_800A45D0_00001DD0
    cmpwi r31, 0x0
    beq lbl_fn_800A45D0_00001DBC
    lbz r3, 0x8(r1)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_800A45D0_00001DF0
lbl_fn_800A45D0_00001DBC:
    lbz r3, 0x8(r1)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_800A45D0_00001DF0
lbl_fn_800A45D0_00001DD0:
    cmpwi r3, -0xc
    bne lbl_fn_800A45D0_00001DE0
    li r3, 0x0
    b lbl_fn_800A45D0_00001DF0
lbl_fn_800A45D0_00001DE0:
    mr r3, r28
    bl fn_800A4494
    stw r3, 0x0(r30)
    li r3, 0x0
lbl_fn_800A45D0_00001DF0:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r28, 0x210(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_800A472C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x234
    stw r0, 0x0(r5)
    bl fn_8061EF90
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_800A472C_00001E5C
    mr r3, r30
    bl fn_800A4494
    stw r3, 0x0(r31)
    li r3, 0x0
    b lbl_fn_800A472C_00001E60
lbl_fn_800A472C_00001E5C:
    li r3, 0x1
lbl_fn_800A472C_00001E60:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A4794(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r0, r3, 0x4c
    cmplw r4, r0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    stw r7, 0x168(r3)
    stw r7, 0x48(r3)
    beq lbl_fn_800A4794_00001ED8
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r28, 0x4c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800A4794_00001ED8:
    li r31, 0x0
    li r0, 0x2
    stw r31, 0x14c(r28)
    mr r4, r28
    addi r3, r28, 0x178
    stw r29, 0x150(r28)
    stw r31, 0x154(r28)
    stw r31, 0x158(r28)
    stw r0, 0x15c(r28)
    bl fn_8061F460
    srawi r0, r29, 14
    lis r6, fn_800A2978@ha
    addze r3, r0
    stw r31, 0x164(r28)
    addi r5, r28, 0x164
    addi r6, r6, fn_800A2978@l
    addi r3, r3, 0x1
    addi r7, r28, 0x178
    li r4, 0x1
    bl fn_80622260
    mr r4, r3
    mr r3, r28
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    beq lbl_fn_800A4794_00001F70
    lwz r4, 0x15c(r28)
    lwz r0, 0x48(r28)
    slwi r4, r4, 16
    lwz r5, 0x158(r28)
    slwi r0, r0, 8
    stw r3, 0x168(r28)
    or r0, r4, r0
    li r3, 0x0
    or r0, r5, r0
    stw r0, 0x16c(r28)
    stw r31, 0x15c(r28)
    b lbl_fn_800A4794_00001F7C
lbl_fn_800A4794_00001F70:
    mr r3, r28
    bl fn_800A4244
    li r3, 0x1
lbl_fn_800A4794_00001F7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A48B8(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stmw r27, 0x11c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    stw r0, 0x168(r3)
    stw r0, 0x158(r3)
    addi r3, r1, 0x10
    bl strcpy
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_80622050
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_800A48B8_00002000
    lbz r3, 0x8(r1)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_800A48B8_00002020
lbl_fn_800A48B8_00002000:
    cmpwi r3, -0xc
    bne lbl_fn_800A48B8_00002010
    li r0, 0x0
    b lbl_fn_800A48B8_00002020
lbl_fn_800A48B8_00002010:
    mr r3, r27
    bl fn_800A4494
    stw r3, 0x158(r27)
    li r0, 0x0
lbl_fn_800A48B8_00002020:
    cmpwi r0, 0x0
    beq lbl_fn_800A48B8_00002034
    li r0, 0x2
    stw r0, 0x48(r27)
    b lbl_fn_800A48B8_0000203C
lbl_fn_800A48B8_00002034:
    li r0, 0x3
    stw r0, 0x48(r27)
lbl_fn_800A48B8_0000203C:
    addi r0, r27, 0x4c
    cmplw r28, r0
    beq lbl_fn_800A48B8_00002064
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r27, 0x4c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800A48B8_00002064:
    li r5, 0x0
    li r4, 0x5
    li r0, 0x1
    stw r29, 0x14c(r27)
    mr r3, r27
    stw r30, 0x150(r27)
    stw r31, 0x154(r27)
    stw r5, 0x158(r27)
    stw r4, 0x170(r27)
    stw r0, 0x15c(r27)
    bl fn_800A4244
    lmw r27, 0x11c(r1)
    li r3, 0x1
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_800A49C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r9, 0x0
    stw r0, 0x24(r1)
    addi r0, r3, 0x4c
    cmplw r4, r0
    stmw r26, 0x8(r1)
    li r0, 0x4
    mr r31, r3
    mr r30, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    stw r9, 0x168(r3)
    stw r0, 0x48(r3)
    beq lbl_fn_800A49C4_00002108
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r4, r30
    addi r3, r31, 0x4c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800A49C4_00002108:
    li r30, 0x0
    li r0, 0x6
    stw r26, 0x14c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    stw r27, 0x150(r31)
    stw r28, 0x154(r31)
    stw r30, 0x158(r31)
    stw r0, 0x15c(r31)
    bl fn_8061F460
    lis r5, 0x1
    lis r8, fn_800A29F0@ha
    addi r7, r5, -0x8000
    addi r3, r31, 0x4c
    addi r4, r31, 0x234
    addi r6, r31, 0x2c0
    addi r8, r8, fn_800A29F0@l
    addi r9, r31, 0x178
    li r5, 0x1
    bl fn_80620220
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x0(r29)
    beq lbl_fn_800A49C4_000021A0
    lwz r4, 0x15c(r31)
    lwz r0, 0x48(r31)
    slwi r4, r4, 16
    lwz r5, 0x158(r31)
    slwi r0, r0, 8
    stw r3, 0x168(r31)
    or r0, r4, r0
    li r3, 0x0
    or r0, r5, r0
    stw r0, 0x16c(r31)
    stw r30, 0x15c(r31)
    b lbl_fn_800A49C4_000021A4
lbl_fn_800A49C4_000021A0:
    li r3, 0x1
lbl_fn_800A49C4_000021A4:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A4AD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r0, r3, 0x4c
    stmw r27, 0xc(r1)
    lis r30, lbl_807327B4@ha
    addi r30, r30, lbl_807327B4@l
    mr r31, r3
    cmplw r30, r0
    li r0, 0xa
    mr r27, r4
    mr r28, r5
    mr r29, r6
    stw r7, 0x168(r3)
    stw r0, 0x48(r3)
    beq lbl_fn_800A4AD4_00002218
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r4, r30
    addi r3, r31, 0x4c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800A4AD4_00002218:
    li r30, 0x0
    li r0, 0x2
    stw r30, 0x14c(r31)
    mr r4, r31
    addi r3, r31, 0x178
    stw r27, 0x150(r31)
    stw r30, 0x154(r31)
    stw r30, 0x158(r31)
    stw r0, 0x15c(r31)
    bl fn_8061F460
    srawi r0, r27, 14
    lis r6, fn_800A2978@ha
    addze r3, r0
    stw r30, 0x164(r31)
    mr r4, r28
    addi r5, r31, 0x164
    addi r3, r3, 0x1
    addi r6, r6, fn_800A2978@l
    addi r7, r31, 0x178
    bl fn_80622260
    mr r4, r3
    mr r3, r31
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x0(r29)
    beq lbl_fn_800A4AD4_000022B0
    lwz r4, 0x15c(r31)
    lwz r0, 0x48(r31)
    slwi r4, r4, 16
    lwz r5, 0x158(r31)
    slwi r0, r0, 8
    stw r3, 0x168(r31)
    or r0, r4, r0
    li r3, 0x0
    or r0, r5, r0
    stw r0, 0x16c(r31)
    stw r30, 0x15c(r31)
    b lbl_fn_800A4AD4_000022B4
lbl_fn_800A4AD4_000022B0:
    li r3, 0x1
lbl_fn_800A4AD4_000022B4:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A4BE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x24(r1)
    addi r0, r3, 0x4c
    cmplw r4, r0
    stw r31, 0x1c(r1)
    li r0, 0x5
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r6, 0x168(r3)
    stw r0, 0x48(r3)
    beq lbl_fn_800A4BE4_00002328
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r28, 0x4c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800A4BE4_00002328:
    li r31, 0x0
    li r0, 0x6
    stw r31, 0x14c(r28)
    mr r4, r28
    addi r3, r28, 0x178
    stw r31, 0x150(r28)
    stw r31, 0x154(r28)
    stw r31, 0x158(r28)
    stw r0, 0x15c(r28)
    bl fn_8061F460
    lis r5, 0x1
    lis r8, fn_800A29F0@ha
    addi r7, r5, -0x8000
    mr r3, r29
    addi r4, r28, 0x234
    addi r6, r28, 0x2c0
    addi r8, r8, fn_800A29F0@l
    addi r9, r28, 0x178
    li r5, 0x1
    bl fn_80620220
    mr r4, r3
    mr r3, r28
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    beq lbl_fn_800A4BE4_000023C0
    lwz r4, 0x15c(r28)
    lwz r0, 0x48(r28)
    slwi r4, r4, 16
    lwz r5, 0x158(r28)
    slwi r0, r0, 8
    stw r3, 0x168(r28)
    or r0, r4, r0
    li r3, 0x0
    or r0, r5, r0
    stw r0, 0x16c(r28)
    stw r31, 0x15c(r28)
    b lbl_fn_800A4BE4_000023C4
lbl_fn_800A4BE4_000023C0:
    li r3, 0x1
lbl_fn_800A4BE4_000023C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A4D00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r8, 0x0
    stw r0, 0x24(r1)
    addi r0, r3, 0x4c
    stmw r26, 0x8(r1)
    lis r31, lbl_807327B4@ha
    addi r31, r31, lbl_807327B4@l
    mr r26, r3
    cmplw r31, r0
    li r0, 0x6
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stw r8, 0x168(r3)
    stw r0, 0x48(r3)
    beq lbl_fn_800A4D00_00002448
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r26, 0x4c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800A4D00_00002448:
    li r31, 0x0
    li r0, 0xa
    stw r27, 0x14c(r26)
    mr r4, r26
    addi r3, r26, 0x178
    stw r28, 0x150(r26)
    stw r29, 0x154(r26)
    stw r31, 0x158(r26)
    stw r0, 0x15c(r26)
    bl fn_8061F460
    lis r6, fn_800A2B58@ha
    mr r4, r29
    addi r3, r26, 0x234
    addi r7, r26, 0x178
    addi r6, r6, fn_800A2B58@l
    li r5, 0x0
    bl fn_8061E9E0
    mr r4, r3
    mr r3, r26
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    beq lbl_fn_800A4D00_000024D4
    lwz r4, 0x15c(r26)
    lwz r0, 0x48(r26)
    slwi r4, r4, 16
    lwz r5, 0x158(r26)
    slwi r0, r0, 8
    stw r3, 0x168(r26)
    or r0, r4, r0
    li r3, 0x0
    or r0, r5, r0
    stw r0, 0x16c(r26)
    stw r31, 0x15c(r26)
    b lbl_fn_800A4D00_000024D8
lbl_fn_800A4D00_000024D4:
    li r3, 0x1
lbl_fn_800A4D00_000024D8:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A4E08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    addi r0, r3, 0x4c
    stw r31, 0x1c(r1)
    lis r31, lbl_807327B4@ha
    addi r31, r31, lbl_807327B4@l
    stw r30, 0x18(r1)
    cmplw r31, r0
    li r0, 0x7
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r5, 0x168(r3)
    stw r0, 0x48(r3)
    beq lbl_fn_800A4E08_0000254C
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r29, 0x4c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800A4E08_0000254C:
    li r31, 0x0
    li r0, 0x10
    stw r31, 0x14c(r29)
    mr r4, r29
    addi r3, r29, 0x178
    stw r31, 0x150(r29)
    stw r31, 0x154(r29)
    stw r31, 0x158(r29)
    stw r0, 0x15c(r29)
    bl fn_8061F460
    lis r4, fn_800A2AE0@ha
    addi r3, r29, 0x234
    addi r4, r4, fn_800A2AE0@l
    addi r5, r29, 0x178
    bl fn_80620830
    mr r4, r3
    mr r3, r29
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    beq lbl_fn_800A4E08_000025D0
    lwz r4, 0x15c(r29)
    lwz r0, 0x48(r29)
    slwi r4, r4, 16
    lwz r5, 0x158(r29)
    slwi r0, r0, 8
    stw r3, 0x168(r29)
    or r0, r4, r0
    li r3, 0x0
    or r0, r5, r0
    stw r0, 0x16c(r29)
    stw r31, 0x15c(r29)
    b lbl_fn_800A4E08_000025D4
lbl_fn_800A4E08_000025D0:
    li r3, 0x1
lbl_fn_800A4E08_000025D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A4F0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x24(r1)
    addi r0, r3, 0x4c
    cmplw r4, r0
    stw r31, 0x1c(r1)
    li r0, 0x9
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    stw r6, 0x168(r3)
    stw r0, 0x48(r3)
    beq lbl_fn_800A4F0C_0000264C
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r29, 0x4c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800A4F0C_0000264C:
    li r31, 0x0
    li r0, 0x16
    stw r31, 0x14c(r29)
    mr r4, r29
    addi r3, r29, 0x178
    stw r31, 0x150(r29)
    stw r31, 0x154(r29)
    stw r31, 0x158(r29)
    stw r0, 0x15c(r29)
    bl fn_8061F460
    lis r4, fn_800A2BD0@ha
    addi r3, r29, 0x4c
    addi r4, r4, fn_800A2BD0@l
    addi r5, r29, 0x178
    bl fn_8061E5C0
    mr r4, r3
    mr r3, r29
    bl fn_800A4494
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    beq lbl_fn_800A4F0C_000026D0
    lwz r4, 0x15c(r29)
    lwz r0, 0x48(r29)
    slwi r4, r4, 16
    lwz r5, 0x158(r29)
    slwi r0, r0, 8
    stw r3, 0x168(r29)
    or r0, r4, r0
    li r3, 0x0
    or r0, r5, r0
    stw r0, 0x16c(r29)
    stw r31, 0x15c(r29)
    b lbl_fn_800A4F0C_000026D4
lbl_fn_800A4F0C_000026D0:
    li r3, 0x1
lbl_fn_800A4F0C_000026D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
