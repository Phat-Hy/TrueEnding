#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E120(void);
extern void fn_8004A664(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_8006A004(void);
extern void fn_8006B53C(void);
extern void fn_8006F5E8(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800DC1DC(void);
extern void fn_800DC6B4(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80783510[];
extern u8 lbl_80742758[];
extern u8 lbl_807427A0[];
extern u8 lbl_807427C8[];
extern u8 lbl_80742860[];
extern u8 lbl_807428F4[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80778910[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_807835B8[];
extern u8 lbl_807835D0[];
extern u8 lbl_8078378C[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087DBA8;
extern u32 lbl_8087DBA9;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F338;
extern u32 lbl_8087F33C;
extern u32 lbl_8087F340;
extern u32 lbl_8087F344;
extern u32 lbl_8087F348;
extern u32 lbl_8087F34C;
extern u32 lbl_8087F350;
extern u32 lbl_8087F354;
extern u32 lbl_8087F358;
extern u32 lbl_8087F518;
extern u32 lbl_80882FD0;
extern u32 lbl_80882FD8;
extern u32 lbl_80882FDC;
extern u32 lbl_80882FE0;
extern u32 lbl_80882FE8;
extern u32 lbl_80882FEC;

/* Function declarations */
void fn_8021EB04(void);
void fn_8021ECD0(void);
void fn_8021ED08(void);
void fn_8021F040(void);
void fn_8021F054(void);
void fn_8021F094(void);
void fn_8021F09C(void);
void fn_8021F0D4(void);
void fn_8021F100(void);
void fn_8021F3E8(void);
void fn_8021F47C(void);
void fn_8021FAF4(void);
void fn_8021FB40(void);
void fn_8021FB58(void);
void fn_8021FB98(void);
void fn_8021FC00(void);
void fn_8021FD7C(void);
void fn_8021FFB0(void);
void fn_8021FFD8(void);
void fn_80220108(void);
void fn_80220168(void);

asm void fn_8021EB04(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F338
    cmpwi r0, 0x0
    bne lbl_fn_8021EB04_000001B0
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882FD0
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r30, r3
    mr r4, r30
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_8021EB04_000000D4
lbl_fn_8021EB04_000000B4:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8021EB04_000000D4
    lwz r3, lbl_8087F33C
    addi r0, r3, 0x1
    stw r0, lbl_8087F33C
lbl_fn_8021EB04_000000D4:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021EB04_000000B4
    lwz r0, lbl_8087F33C
    lis r5, lbl_80742758@ha
    addi r5, r5, lbl_80742758@l
    li r4, 0xc
    mr r6, r5
    slwi r3, r0, 4
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F338
    mr r4, r30
    lwz r12, 0xc(r1)
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    li r31, 0x0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8021EB04_00000194
lbl_fn_8021EB04_0000012C:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8021EB04_00000194
    lwz r0, lbl_8087F338
    addi r3, r1, 0xc
    add r29, r0, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r29)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r29)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x8(r29)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc(r29)
    addi r31, r31, 0x10
lbl_fn_8021EB04_00000194:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021EB04_0000012C
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
lbl_fn_8021EB04_000001B0:
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_8021ECD0(void)
{
    nofralloc
    lwz r0, lbl_8087F33C
    lwz r4, lbl_8087F338
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021ECD0_000001FC
lbl_fn_8021ECD0_000001E0:
    lwz r0, 0x0(r4)
    cmpw r0, r3
    bne lbl_fn_8021ECD0_000001F4
    mr r3, r4
    blr
lbl_fn_8021ECD0_000001F4:
    addi r4, r4, 0x10
    bdnz lbl_fn_8021ECD0_000001E0
lbl_fn_8021ECD0_000001FC:
    li r3, 0x0
    blr
}

asm void fn_8021ED08(void)
{
    nofralloc
    stwu r1, -0xc90(r1)
    mflr r0
    stw r0, 0xc94(r1)
    stmw r27, 0xc7c(r1)
    lwz r0, lbl_8087F340
    cmpwi r0, 0x0
    bne lbl_fn_8021ED08_00000528
    lwz r4, lbl_8087F0A8
    lwz r3, lbl_8087F518
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8021ED08_0000023C
    lwz r4, lbl_80882FDC
    b lbl_fn_8021ED08_00000240
lbl_fn_8021ED08_0000023C:
    lwz r4, lbl_80882FD8
lbl_fn_8021ED08_00000240:
    addi r5, r1, 0x8
    li r6, 0x20
    bl fn_8046DC5C
    lwz r5, 0x8(r1)
    li r0, 0x0
    lis r4, lbl_8077A090@ha
    mr r29, r3
    srwi r3, r5, 31
    stw r0, 0x1c(r1)
    add r3, r3, r5
    addi r4, r4, lbl_8077A090@l
    stw r4, 0x18(r1)
    srawi r30, r3, 1
    addi r28, r1, 0x18
    addi r3, r1, 0x28
    stw r0, 0x20(r1)
    li r4, 0x0
    li r5, 0x800
    stw r0, 0x24(r1)
    stw r0, 0xc68(r1)
    bl memset
    addi r3, r1, 0xc28
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r30, 0x0
    mr r5, r30
    beq lbl_fn_8021ED08_000002B4
    subi r5, r30, 0x1
lbl_fn_8021ED08_000002B4:
    cmpwi r30, 0x0
    mr r3, r28
    beq lbl_fn_8021ED08_000002C8
    addi r4, r29, 0x2
    b lbl_fn_8021ED08_000002CC
lbl_fn_8021ED08_000002C8:
    mr r4, r29
lbl_fn_8021ED08_000002CC:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x18(r1)
    mr r3, r28
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    b lbl_fn_8021ED08_0000031C
lbl_fn_8021ED08_000002FC:
    addi r3, r1, 0x18
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x3b
    beq lbl_fn_8021ED08_0000031C
    lwz r3, lbl_8087F344
    addi r0, r3, 0x1
    stw r0, lbl_8087F344
lbl_fn_8021ED08_0000031C:
    addi r3, r1, 0x18
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021ED08_000002FC
    lwz r28, lbl_8087F344
    lis r5, lbl_807427A0@ha
    addi r5, r5, lbl_807427A0@l
    li r4, 0xc
    mulli r3, r28, 0xec
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021F040@ha
    lis r5, fn_8021F054@ha
    mr r7, r28
    li r6, 0xec
    addi r4, r4, fn_8021F040@l
    addi r5, r5, fn_8021F054@l
    bl fn_80695720
    li r0, 0x0
    stw r3, lbl_8087F340
    addi r3, r1, 0x28
    li r4, 0x0
    stw r0, 0xc(r1)
    li r5, 0x800
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl memset
    addi r3, r1, 0xc28
    li r4, 0x0
    li r5, 0x40
    bl memset
    lwz r12, 0x18(r1)
    addi r3, r1, 0x18
    lwz r4, 0x1c(r1)
    lwz r12, 0x8(r12)
    lwz r5, 0x20(r1)
    mtctr r12
    bctrl
    addi r30, r1, 0xd
    li r31, 0x0
    b lbl_fn_8021ED08_000004F8
lbl_fn_8021ED08_000003C8:
    addi r3, r1, 0x18
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x3b
    beq lbl_fn_8021ED08_000004F8
    lwz r0, lbl_8087F340
    add r28, r0, r31
    bl fn_800DC1DC
    stw r3, 0x0(r28)
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0x4(r28)
    addi r3, r1, 0x18
    lwz r27, lbl_8087EEC8
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0xc
    bl fn_8006F5E8
    lwz r0, 0xc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8021ED08_0000042C
    mr r27, r30
    b lbl_fn_8021ED08_00000430
lbl_fn_8021ED08_0000042C:
    lwz r27, 0x14(r1)
lbl_fn_8021ED08_00000430:
    addi r0, r28, 0x8
    cmplw r27, r0
    beq lbl_fn_8021ED08_00000458
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r28, 0x8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8021ED08_00000458:
    addi r3, r1, 0x18
    bl fn_8005B710
    addi r0, r28, 0x28
    mr r27, r3
    cmplw r3, r0
    beq lbl_fn_8021ED08_00000488
    bl fn_80686A48
    mr r5, r3
    mr r4, r27
    addi r3, r28, 0x28
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8021ED08_00000488:
    addi r3, r1, 0x18
    bl fn_8005B710
    bl fn_800DC1DC
    stw r3, 0xa8(r28)
    addi r3, r1, 0x18
    lwz r27, lbl_8087EEC8
    bl fn_8005B710
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0xc
    bl fn_8006F5E8
    lwz r0, 0xc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8021ED08_000004C8
    mr r27, r30
    b lbl_fn_8021ED08_000004CC
lbl_fn_8021ED08_000004C8:
    lwz r27, 0x14(r1)
lbl_fn_8021ED08_000004CC:
    addi r0, r28, 0xac
    cmplw r27, r0
    beq lbl_fn_8021ED08_000004F4
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r28, 0xac
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8021ED08_000004F4:
    addi r31, r31, 0xec
lbl_fn_8021ED08_000004F8:
    addi r3, r1, 0x18
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_8021ED08_000003C8
    lwz r3, lbl_8087F518
    mr r4, r29
    bl fn_8046DD20
    lwz r0, 0xc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8021ED08_00000528
    lwz r3, 0x14(r1)
    bl dtor_80084684
lbl_fn_8021ED08_00000528:
    lmw r27, 0xc7c(r1)
    lwz r0, 0xc94(r1)
    mtlr r0
    addi r1, r1, 0xc90
    blr
}

asm void fn_8021F040(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x8(r3)
    sth r0, 0x28(r3)
    stb r0, 0xac(r3)
    blr
}

asm void fn_8021F054(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8021F054_00000578
    cmpwi r4, 0x0
    ble lbl_fn_8021F054_00000578
    bl dtor_80084684
lbl_fn_8021F054_00000578:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021F094(void)
{
    nofralloc
    lwz r3, lbl_8087F344
    blr
}

asm void fn_8021F09C(void)
{
    nofralloc
    lwz r0, lbl_8087F344
    lwz r4, lbl_8087F340
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021F09C_000005C8
lbl_fn_8021F09C_000005AC:
    lwz r0, 0x0(r4)
    cmpw r0, r3
    bne lbl_fn_8021F09C_000005C0
    mr r3, r4
    blr
lbl_fn_8021F09C_000005C0:
    addi r4, r4, 0xec
    bdnz lbl_fn_8021F09C_000005AC
lbl_fn_8021F09C_000005C8:
    li r3, 0x0
    blr
}

asm void fn_8021F0D4(void)
{
    nofralloc
    cmpwi r3, 0x0
    blt lbl_fn_8021F0D4_000005F4
    lwz r0, lbl_8087F344
    cmpw r3, r0
    bge lbl_fn_8021F0D4_000005F4
    mulli r0, r3, 0xec
    lwz r3, lbl_8087F340
    add r3, r3, r0
    blr
lbl_fn_8021F0D4_000005F4:
    li r3, 0x0
    blr
}

asm void fn_8021F100(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x684(r1)
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stw r31, 0x67c(r1)
    li r31, 0x0
    stw r30, 0x678(r1)
    stw r29, 0x674(r1)
    stw r3, 0x34(r1)
    addi r3, r1, 0x44
    stw r31, 0x38(r1)
    stw r31, 0x3c(r1)
    stw r31, 0x40(r1)
    stw r31, 0x664(r1)
    bl memset
    addi r3, r1, 0x644
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x34(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F348
    cmpwi r0, 0x0
    bne lbl_fn_8021F100_000008C8
    lwz r29, lbl_80882FE0
    addi r30, r1, 0x28
    stw r31, 0x28(r1)
    mr r3, r29
    stw r31, 0x2c(r1)
    stw r31, 0x30(r1)
    bl strlen
    mr r31, r3
    mr r3, r30
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r30
    stb r0, 0x10(r1)
    mr r6, r29
    add r7, r29, r31
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x1c
    bl fn_8006B53C
    lwz r0, 0x28(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8021F100_00000704
    lwz r4, 0x1c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8021F100_00000704
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x30(r1)
    b lbl_fn_8021F100_0000075C
lbl_fn_8021F100_00000704:
    cmpwi r3, 0x0
    beq lbl_fn_8021F100_00000714
    lwz r5, 0x2c(r1)
    b lbl_fn_8021F100_0000071C
lbl_fn_8021F100_00000714:
    lbz r0, 0x28(r1)
    clrlwi r5, r0, 25
lbl_fn_8021F100_0000071C:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8021F100_00000738
    lbz r0, 0x1c(r1)
    addi r6, r1, 0x1d
    clrlwi r4, r0, 25
    b lbl_fn_8021F100_00000740
lbl_fn_8021F100_00000738:
    lwz r6, 0x24(r1)
    lwz r4, 0x20(r1)
lbl_fn_8021F100_00000740:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x28
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8021F100_0000075C:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8021F100_00000770
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8021F100_00000770:
    lwz r0, 0x28(r1)
    lwz r3, lbl_8087F518
    srwi. r0, r0, 31
    bne lbl_fn_8021F100_00000788
    addi r4, r1, 0x29
    b lbl_fn_8021F100_0000078C
lbl_fn_8021F100_00000788:
    lwz r4, 0x30(r1)
lbl_fn_8021F100_0000078C:
    addi r5, r1, 0x18
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0x34(r1)
    mr r29, r3
    mr r4, r29
    addi r3, r1, 0x34
    lwz r12, 0x8(r12)
    lwz r5, 0x18(r1)
    mtctr r12
    bctrl
    b lbl_fn_8021F100_000007E8
lbl_fn_8021F100_000007BC:
    addi r3, r1, 0x34
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021F100_000007E8
    cmpwi r0, 0x23
    beq lbl_fn_8021F100_000007E8
    lwz r3, lbl_8087F34C
    addi r0, r3, 0x1
    stw r0, lbl_8087F34C
lbl_fn_8021F100_000007E8:
    addi r3, r1, 0x34
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021F100_000007BC
    lwz r0, lbl_8087F34C
    lis r5, lbl_807427C8@ha
    addi r5, r5, lbl_807427C8@l
    li r4, 0xc
    mr r6, r5
    slwi r3, r0, 3
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F348
    mr r4, r29
    lwz r12, 0x34(r1)
    addi r3, r1, 0x34
    lwz r5, 0x18(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r30, 0x0
    b lbl_fn_8021F100_00000898
lbl_fn_8021F100_00000840:
    addi r3, r1, 0x34
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021F100_00000898
    cmpwi r0, 0x23
    beq lbl_fn_8021F100_00000898
    lwz r0, lbl_8087F348
    addi r3, r1, 0x44
    add r31, r0, r30
    bl fn_800DC6B4
    stw r3, 0x0(r31)
    addi r3, r1, 0x34
    bl fn_8005B3CC
    addi r3, r1, 0x34
    bl fn_8005B3CC
    addi r3, r1, 0x34
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r31)
    addi r30, r30, 0x8
lbl_fn_8021F100_00000898:
    addi r3, r1, 0x34
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021F100_00000840
    lwz r3, lbl_8087F518
    mr r4, r29
    bl fn_8046DD20
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8021F100_000008C8
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_8021F100_000008C8:
    lwz r0, 0x684(r1)
    lwz r31, 0x67c(r1)
    lwz r30, 0x678(r1)
    lwz r29, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}

asm void fn_8021F3E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_8021F3E8_00000904
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8021F3E8_0000090C
lbl_fn_8021F3E8_00000904:
    li r3, 0x0
    b lbl_fn_8021F3E8_00000954
lbl_fn_8021F3E8_0000090C:
    bl fn_800DC6B4
    lwz r6, lbl_8087F348
    li r4, 0x0
    lwz r0, lbl_8087F34C
    mr r5, r6
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021F3E8_00000950
lbl_fn_8021F3E8_0000092C:
    lwz r0, 0x0(r5)
    cmplw r3, r0
    bne lbl_fn_8021F3E8_00000944
    slwi r0, r4, 3
    add r3, r6, r0
    b lbl_fn_8021F3E8_00000954
lbl_fn_8021F3E8_00000944:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
    bdnz lbl_fn_8021F3E8_0000092C
lbl_fn_8021F3E8_00000950:
    li r3, 0x0
lbl_fn_8021F3E8_00000954:
    cmpwi r3, 0x0
    beq lbl_fn_8021F3E8_00000964
    lwz r3, 0x4(r3)
    b lbl_fn_8021F3E8_00000968
lbl_fn_8021F3E8_00000964:
    li r3, -0x1
lbl_fn_8021F3E8_00000968:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021F47C(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x6d4(r1)
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r18, 0x698(r1)
    li r21, 0x0
    stw r3, 0x5c(r1)
    addi r3, r1, 0x6c
    stw r21, 0x60(r1)
    stw r21, 0x64(r1)
    stw r21, 0x68(r1)
    stw r21, 0x68c(r1)
    bl memset
    addi r3, r1, 0x66c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x5c
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x5c(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F350
    cmpwi r0, 0x0
    bne lbl_fn_8021F47C_00000FDC
    lwz r3, lbl_8087F518
    addi r5, r1, 0x20
    lwz r4, lbl_80882FE8
    li r6, 0x20
    bl fn_8046DC5C
    li r6, 0x0
    addi r0, r1, 0x48
    stw r6, 0x44(r1)
    mr r20, r3
    lwz r12, 0x5c(r1)
    mr r4, r20
    stw r6, 0x48(r1)
    addi r3, r1, 0x5c
    lwz r5, 0x20(r1)
    stw r0, 0x4c(r1)
    lwz r12, 0x8(r12)
    stw r6, 0x50(r1)
    stw r6, 0x54(r1)
    stw r6, 0x58(r1)
    mtctr r12
    bctrl
    lis r23, lbl_80742860@ha
    b lbl_fn_8021F47C_00000B14
lbl_fn_8021F47C_00000A48:
    addi r3, r1, 0x5c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021F47C_00000B14
    cmpwi r0, 0x23
    beq lbl_fn_8021F47C_00000B14
    addi r4, r23, lbl_80742860@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021F47C_00000B14
    addi r3, r1, 0x5c
    bl fn_8005B3CC
    addi r4, r23, lbl_80742860@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8021F47C_00000B14
    lwz r22, 0x58(r1)
    li r25, 0x0
    lwz r19, 0x50(r1)
lbl_fn_8021F47C_00000A9C:
    addi r3, r1, 0x5c
    bl fn_8005B3CC
    mr r24, r3
    li r26, 0x0
    li r27, 0x0
    li r18, 0x0
    b lbl_fn_8021F47C_00000ADC
lbl_fn_8021F47C_00000AB8:
    mr r3, r24
    bl fn_800DC6B4
    lwzx r0, r22, r18
    cmplw r0, r3
    bne lbl_fn_8021F47C_00000AD4
    li r26, 0x1
    b lbl_fn_8021F47C_00000AE4
lbl_fn_8021F47C_00000AD4:
    addi r27, r27, 0x1
    addi r18, r18, 0x4
lbl_fn_8021F47C_00000ADC:
    cmplw r27, r19
    blt lbl_fn_8021F47C_00000AB8
lbl_fn_8021F47C_00000AE4:
    cmpwi r26, 0x0
    bne lbl_fn_8021F47C_00000AFC
    mr r3, r24
    bl strlen
    add r3, r3, r21
    addi r21, r3, 0x1
lbl_fn_8021F47C_00000AFC:
    addi r25, r25, 0x1
    cmpwi r25, 0x2b
    blt lbl_fn_8021F47C_00000A9C
    lwz r3, lbl_8087F354
    addi r0, r3, 0x1
    stw r0, lbl_8087F354
lbl_fn_8021F47C_00000B14:
    addi r3, r1, 0x5c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021F47C_00000A48
    lwz r18, lbl_8087F354
    lis r27, lbl_80742860@ha
    addi r5, r27, lbl_80742860@l
    li r4, 0x1
    mulli r3, r18, 0x17c
    li r7, 0x0
    mr r6, r5
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8021FAF4@ha
    lis r5, fn_8021FB98@ha
    mr r7, r18
    li r6, 0x17c
    addi r4, r4, fn_8021FAF4@l
    addi r5, r5, fn_8021FB98@l
    bl fn_80695720
    stw r3, lbl_8087F350
    addi r5, r27, lbl_80742860@l
    mr r3, r21
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F358
    mr r4, r20
    lwz r12, 0x5c(r1)
    addi r3, r1, 0x5c
    lwz r5, 0x20(r1)
    li r22, 0x0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r24, r1, 0x39
    addi r31, r27, lbl_80742860@l
    addi r30, r1, 0x48
    addi r26, r1, 0x38
    li r25, 0x0
    li r28, 0x0
    b lbl_fn_8021F47C_00000E70
lbl_fn_8021F47C_00000BC0:
    addi r3, r1, 0x5c
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8021F47C_00000E70
    cmpwi r0, 0x23
    beq lbl_fn_8021F47C_00000E70
    addi r4, r27, lbl_80742860@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8021F47C_00000E70
    addi r3, r1, 0x5c
    bl fn_8005B3CC
    mr r18, r3
    addi r4, r27, lbl_80742860@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8021F47C_00000E70
    lwz r0, lbl_8087F350
    cmpwi r18, 0x0
    add r19, r0, r25
    beq lbl_fn_8021F47C_00000C2C
    mr r3, r18
    bl strlen
    cmplwi r3, 0x2
    bgt lbl_fn_8021F47C_00000C34
lbl_fn_8021F47C_00000C2C:
    li r18, -0x1
    b lbl_fn_8021F47C_00000D08
lbl_fn_8021F47C_00000C34:
    addi r21, r18, 0x2
    stw r28, 0x38(r1)
    mr r3, r21
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    bl strlen
    mr r18, r3
    mr r3, r26
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r21
    add r7, r21, r18
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lbz r18, 0x18(r1)
    addi r21, r31, 0x1
lbl_fn_8021F47C_00000C88:
    mr r3, r21
    bl strlen
    mr r6, r3
    mr r4, r21
    addi r3, r1, 0x38
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_8021F47C_00000CD4
    stb r18, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x38
    addi r8, r1, 0x14
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
    b lbl_fn_8021F47C_00000C88
lbl_fn_8021F47C_00000CD4:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8021F47C_00000CE8
    mr r3, r24
    b lbl_fn_8021F47C_00000CEC
lbl_fn_8021F47C_00000CE8:
    lwz r3, 0x40(r1)
lbl_fn_8021F47C_00000CEC:
    bl fn_80684600
    lwz r0, 0x38(r1)
    mr r18, r3
    srwi. r0, r0, 31
    beq lbl_fn_8021F47C_00000D08
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8021F47C_00000D08:
    stw r18, 0x0(r19)
    addi r3, r1, 0x5c
    bl fn_8005B3CC
    mr r23, r19
    li r18, 0x0
lbl_fn_8021F47C_00000D1C:
    addi r3, r1, 0x5c
    bl fn_8005B3CC
    mr r21, r3
    bl fn_800DC6B4
    lwz r4, 0x48(r1)
    mr r29, r3
    addi r5, r1, 0x48
    b lbl_fn_8021F47C_00000D58
lbl_fn_8021F47C_00000D3C:
    lwz r0, 0xc(r4)
    cmplw r0, r3
    blt lbl_fn_8021F47C_00000D54
    mr r5, r4
    lwz r4, 0x0(r4)
    b lbl_fn_8021F47C_00000D58
lbl_fn_8021F47C_00000D54:
    lwz r4, 0x4(r4)
lbl_fn_8021F47C_00000D58:
    cmpwi r4, 0x0
    bne lbl_fn_8021F47C_00000D3C
    cmplw r5, r30
    beq lbl_fn_8021F47C_00000D74
    lwz r0, 0xc(r5)
    cmplw r3, r0
    bge lbl_fn_8021F47C_00000D78
lbl_fn_8021F47C_00000D74:
    addi r5, r1, 0x48
lbl_fn_8021F47C_00000D78:
    cmplw r5, r30
    bne lbl_fn_8021F47C_00000E30
    lwz r0, lbl_8087F358
    mr r5, r21
    addi r4, r31, 0x3
    add r3, r0, r22
    crclr 6
    bl sprintf
    lwz r0, lbl_8087F358
    addi r3, r1, 0x44
    addi r4, r1, 0x30
    addi r5, r1, 0x1c
    add r0, r0, r22
    stw r0, 0x8(r23)
    addi r6, r1, 0x9
    addi r7, r1, 0x8
    lwz r0, lbl_8087F358
    stw r29, 0x30(r1)
    add r0, r0, r22
    stw r0, 0x34(r1)
    bl fn_80220108
    lwz r5, 0x1c(r1)
    cmpwi r5, 0x0
    beq lbl_fn_8021F47C_00000DE8
    lwz r4, 0xc(r5)
    lwz r0, 0x30(r1)
    cmplw r4, r0
    bge lbl_fn_8021F47C_00000E10
lbl_fn_8021F47C_00000DE8:
    lbz r5, 0x9(r1)
    mr r4, r3
    lbz r6, 0x8(r1)
    addi r3, r1, 0x44
    addi r7, r1, 0x30
    bl fn_8021FFD8
    lbz r0, lbl_8087DBA8
    stw r3, 0x28(r1)
    stb r0, 0x2c(r1)
    b lbl_fn_8021F47C_00000E1C
lbl_fn_8021F47C_00000E10:
    lbz r0, lbl_8087DBA9
    stw r5, 0x28(r1)
    stb r0, 0x2c(r1)
lbl_fn_8021F47C_00000E1C:
    mr r3, r21
    bl strlen
    add r3, r3, r22
    addi r22, r3, 0x1
    b lbl_fn_8021F47C_00000E38
lbl_fn_8021F47C_00000E30:
    lwz r0, 0x10(r5)
    stw r0, 0x8(r23)
lbl_fn_8021F47C_00000E38:
    addi r18, r18, 0x1
    addi r23, r23, 0x8
    cmpwi r18, 0x2b
    blt lbl_fn_8021F47C_00000D1C
    li r18, 0x0
lbl_fn_8021F47C_00000E4C:
    addi r3, r1, 0x5c
    bl fn_8005B3CC
    bl fn_80684600
    addi r18, r18, 0x1
    stw r3, 0x15c(r19)
    cmpwi r18, 0x8
    addi r19, r19, 0x4
    blt lbl_fn_8021F47C_00000E4C
    addi r25, r25, 0x17c
lbl_fn_8021F47C_00000E70:
    addi r3, r1, 0x5c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8021F47C_00000BC0
    lwz r3, lbl_8087F518
    mr r4, r20
    bl fn_8046DD20
    addic. r18, r1, 0x44
    beq lbl_fn_8021F47C_00000FCC
    beq lbl_fn_8021F47C_00000FCC
    beq lbl_fn_8021F47C_00000FCC
    beq lbl_fn_8021F47C_00000FCC
    lwz r19, 0x48(r1)
    cmpwi r19, 0x0
    beq lbl_fn_8021F47C_00000FCC
    lwz r20, 0x0(r19)
    cmpwi r20, 0x0
    beq lbl_fn_8021F47C_00000F38
    lwz r21, 0x0(r20)
    cmpwi r21, 0x0
    beq lbl_fn_8021F47C_00000EF4
    lwz r4, 0x0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8021F47C_00000ED8
    mr r3, r18
    bl fn_8004A664
lbl_fn_8021F47C_00000ED8:
    lwz r4, 0x4(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8021F47C_00000EEC
    mr r3, r18
    bl fn_8004A664
lbl_fn_8021F47C_00000EEC:
    mr r3, r21
    bl dtor_80084684
lbl_fn_8021F47C_00000EF4:
    lwz r21, 0x4(r20)
    cmpwi r21, 0x0
    beq lbl_fn_8021F47C_00000F30
    lwz r4, 0x0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8021F47C_00000F14
    mr r3, r18
    bl fn_8004A664
lbl_fn_8021F47C_00000F14:
    lwz r4, 0x4(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8021F47C_00000F28
    mr r3, r18
    bl fn_8004A664
lbl_fn_8021F47C_00000F28:
    mr r3, r21
    bl dtor_80084684
lbl_fn_8021F47C_00000F30:
    mr r3, r20
    bl dtor_80084684
lbl_fn_8021F47C_00000F38:
    lwz r20, 0x4(r19)
    cmpwi r20, 0x0
    beq lbl_fn_8021F47C_00000FC4
    lwz r21, 0x0(r20)
    cmpwi r21, 0x0
    beq lbl_fn_8021F47C_00000F80
    lwz r4, 0x0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8021F47C_00000F64
    mr r3, r18
    bl fn_8004A664
lbl_fn_8021F47C_00000F64:
    lwz r4, 0x4(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8021F47C_00000F78
    mr r3, r18
    bl fn_8004A664
lbl_fn_8021F47C_00000F78:
    mr r3, r21
    bl dtor_80084684
lbl_fn_8021F47C_00000F80:
    lwz r21, 0x4(r20)
    cmpwi r21, 0x0
    beq lbl_fn_8021F47C_00000FBC
    lwz r4, 0x0(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8021F47C_00000FA0
    mr r3, r18
    bl fn_8004A664
lbl_fn_8021F47C_00000FA0:
    lwz r4, 0x4(r21)
    cmpwi r4, 0x0
    beq lbl_fn_8021F47C_00000FB4
    mr r3, r18
    bl fn_8004A664
lbl_fn_8021F47C_00000FB4:
    mr r3, r21
    bl dtor_80084684
lbl_fn_8021F47C_00000FBC:
    mr r3, r20
    bl dtor_80084684
lbl_fn_8021F47C_00000FC4:
    mr r3, r19
    bl dtor_80084684
lbl_fn_8021F47C_00000FCC:
    lwz r3, 0x58(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8021F47C_00000FDC
    bl fn_80084C24
lbl_fn_8021F47C_00000FDC:
    lmw r18, 0x698(r1)
    lwz r0, 0x6d4(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}

asm void fn_8021FAF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8021FB40@ha
    lis r5, fn_8021FB58@ha
    stw r0, 0x14(r1)
    addi r4, r4, fn_8021FB40@l
    addi r5, r5, fn_8021FB58@l
    li r6, 0x8
    stw r31, 0xc(r1)
    mr r31, r3
    li r7, 0x2b
    addi r3, r3, 0x4
    bl fn_806958E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021FB40(void)
{
    nofralloc
    lis r4, lbl_807835B8@ha
    li r0, 0x0
    addi r4, r4, lbl_807835B8@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_8021FB58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8021FB58_0000107C
    cmpwi r4, 0x0
    ble lbl_fn_8021FB58_0000107C
    bl dtor_80084684
lbl_fn_8021FB58_0000107C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021FB98(void)
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
    beq lbl_fn_8021FB98_000010E0
    lis r4, fn_8021FB58@ha
    li r5, 0x8
    addi r4, r4, fn_8021FB58@l
    li r6, 0x2b
    addi r3, r3, 0x4
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_8021FB98_000010E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8021FB98_000010E0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021FC00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    beq lbl_fn_8021FC00_0000112C
    bl strlen
    cmplwi r3, 0x2
    bgt lbl_fn_8021FC00_00001134
lbl_fn_8021FC00_0000112C:
    li r30, -0x1
    b lbl_fn_8021FC00_00001218
lbl_fn_8021FC00_00001134:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r30, r1, 0x18
    addi r3, r29, 0x2
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl strlen
    mr r31, r3
    mr r3, r30
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    add r4, r29, r31
    stb r0, 0xc(r1)
    addi r7, r4, 0x2
    mr r3, r30
    addi r6, r29, 0x2
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80742860@ha
    lbz r31, 0x14(r1)
    addi r3, r3, lbl_80742860@l
    addi r30, r3, 0x1
lbl_fn_8021FC00_00001198:
    mr r3, r30
    bl strlen
    mr r6, r3
    mr r4, r30
    addi r3, r1, 0x18
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_8021FC00_000011E4
    stb r31, 0x10(r1)
    mr r4, r3
    addi r3, r1, 0x18
    addi r8, r1, 0x10
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
    b lbl_fn_8021FC00_00001198
lbl_fn_8021FC00_000011E4:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8021FC00_000011F8
    addi r3, r1, 0x19
    b lbl_fn_8021FC00_000011FC
lbl_fn_8021FC00_000011F8:
    lwz r3, 0x20(r1)
lbl_fn_8021FC00_000011FC:
    bl fn_80684600
    lwz r0, 0x18(r1)
    mr r30, r3
    srwi. r0, r0, 31
    beq lbl_fn_8021FC00_00001218
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8021FC00_00001218:
    lwz r4, lbl_8087F350
    li r5, 0x0
    lwz r0, lbl_8087F354
    mr r3, r4
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8021FC00_00001258
lbl_fn_8021FC00_00001234:
    lwz r0, 0x0(r3)
    cmpw r30, r0
    bne lbl_fn_8021FC00_0000124C
    mulli r0, r5, 0x17c
    add r3, r4, r0
    b lbl_fn_8021FC00_0000125C
lbl_fn_8021FC00_0000124C:
    addi r3, r3, 0x17c
    addi r5, r5, 0x1
    bdnz lbl_fn_8021FC00_00001234
lbl_fn_8021FC00_00001258:
    li r3, 0x0
lbl_fn_8021FC00_0000125C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8021FD7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    blt lbl_fn_8021FD7C_0000129C
    cmpwi r4, 0x2b
    blt lbl_fn_8021FD7C_000012A4
lbl_fn_8021FD7C_0000129C:
    li r3, 0x0
    b lbl_fn_8021FD7C_00001498
lbl_fn_8021FD7C_000012A4:
    cmplwi r4, 0x29
    bgt lbl_fn_8021FD7C_00001450
    lis r3, jumptable_80783510@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_80783510@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r4, r4, r0
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r3, r0, r3
    addi r4, r3, 0x2
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0x6
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0x8
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0xa
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0xc
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0x13
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r3, r0, r3
    addi r4, r3, 0x15
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0x19
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0x1c
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0x1e
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r3, r0, r3
    addi r4, r3, 0x20
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0x26
    b lbl_fn_8021FD7C_00001450
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r3, r4, r0
    addi r4, r3, 0x28
lbl_fn_8021FD7C_00001450:
    slwi r0, r4, 3
    add r3, r31, r0
    lwz r31, 0x8(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8021FD7C_0000146C
    mr r3, r31
    b lbl_fn_8021FD7C_00001470
lbl_fn_8021FD7C_0000146C:
    la r3, lbl_80882FEC
lbl_fn_8021FD7C_00001470:
    bl strlen
    cmpwi r3, 0x0
    bne lbl_fn_8021FD7C_00001484
    li r3, 0x0
    b lbl_fn_8021FD7C_00001498
lbl_fn_8021FD7C_00001484:
    cmpwi r31, 0x0
    beq lbl_fn_8021FD7C_00001494
    mr r3, r31
    b lbl_fn_8021FD7C_00001498
lbl_fn_8021FD7C_00001494:
    la r3, lbl_80882FEC
lbl_fn_8021FD7C_00001498:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021FFB0(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_8021FFB0_000014BC
    cmpwi r4, 0x8
    blt lbl_fn_8021FFB0_000014C4
lbl_fn_8021FFB0_000014BC:
    li r3, 0x0
    blr
lbl_fn_8021FFB0_000014C4:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x15c(r3)
    blr
}

asm void fn_8021FFD8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    mr r26, r7
    lwz r8, 0x0(r3)
    addis r0, r8, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_8021FFD8_0000152C
    lis r4, lbl_80742860@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80742860@l
    addi r3, r3, __files@l
    addi r4, r4, 0x7
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8021FFD8_0000152C:
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8021FFD8_00001560
    lis r3, __files@ha
    lis r4, lbl_807835D0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807835D0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8021FFD8_00001560:
    addic. r3, r27, 0xc
    addi r0, r28, 0x4
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    beq lbl_fn_8021FFD8_00001584
    lwz r0, 0x0(r26)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r26)
    stw r0, 0x4(r3)
lbl_fn_8021FFD8_00001584:
    lwz r27, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r27)
    addic. r3, r27, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r27)
    beq lbl_fn_8021FFD8_000015A4
    stw r29, 0x0(r3)
lbl_fn_8021FFD8_000015A4:
    cmpwi r30, 0x0
    beq lbl_fn_8021FFD8_000015B4
    stw r27, 0x0(r29)
    b lbl_fn_8021FFD8_000015B8
lbl_fn_8021FFD8_000015B4:
    stw r27, 0x4(r29)
lbl_fn_8021FFD8_000015B8:
    lwz r5, 0x0(r28)
    mr r3, r27
    lwz r4, 0x4(r28)
    addi r0, r5, 0x1
    stw r0, 0x0(r28)
    bl fn_8003E120
    cmpwi r31, 0x0
    beq lbl_fn_8021FFD8_000015DC
    stw r27, 0x8(r28)
lbl_fn_8021FFD8_000015DC:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8021FFD8_000015EC
    bl dtor_80084684
lbl_fn_8021FFD8_000015EC:
    mr r3, r27
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80220108(void)
{
    nofralloc
    li r9, 0x0
    stw r9, 0x0(r5)
    li r8, 0x1
    addi r10, r3, 0x4
    lwz r11, 0x4(r3)
    stb r8, 0x0(r6)
    stb r8, 0x0(r7)
    b lbl_fn_80220108_00001654
lbl_fn_80220108_00001624:
    lwz r3, 0x0(r4)
    mr r10, r11
    lwz r0, 0xc(r11)
    cmplw r3, r0
    bge lbl_fn_80220108_00001644
    lwz r11, 0x0(r11)
    stb r8, 0x0(r6)
    b lbl_fn_80220108_00001654
lbl_fn_80220108_00001644:
    stw r11, 0x0(r5)
    lwz r11, 0x4(r11)
    stb r9, 0x0(r6)
    stb r9, 0x0(r7)
lbl_fn_80220108_00001654:
    cmpwi r11, 0x0
    bne lbl_fn_80220108_00001624
    mr r3, r10
    blr
}

asm void fn_80220168(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r17, 0x24(r1)
    mr r18, r3
    mr r20, r5
    mr r19, r6
    lwz r25, 0xc(r3)
    lwz r8, 0x8(r3)
    mulli r7, r25, 0x14
    subf r0, r25, r25
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    add r21, r8, r7
    stw r0, 0xc(r3)
    b lbl_fn_80220168_00001714
lbl_fn_80220168_000016A4:
    subic. r21, r21, 0x14
    beq lbl_fn_80220168_00001710
    addic. r22, r21, 0x4
    beq lbl_fn_80220168_00001710
    beq lbl_fn_80220168_00001710
    beq lbl_fn_80220168_00001710
    lwz r4, 0x0(r22)
    cmpwi r4, 0x0
    beq lbl_fn_80220168_00001710
    lwz r24, 0x4(r22)
    mulli r3, r24, 0xc
    subf r0, r24, r24
    stw r0, 0x4(r22)
    add r23, r4, r3
    b lbl_fn_80220168_00001700
lbl_fn_80220168_000016E0:
    subic. r23, r23, 0xc
    beq lbl_fn_80220168_000016FC
    lwz r0, 0x0(r23)
    srwi. r0, r0, 31
    beq lbl_fn_80220168_000016FC
    lwz r3, 0x8(r23)
    bl dtor_80084684
lbl_fn_80220168_000016FC:
    subi r24, r24, 0x1
lbl_fn_80220168_00001700:
    cmpwi r24, 0x0
    bne lbl_fn_80220168_000016E0
    lwz r3, 0x0(r22)
    bl dtor_80084684
lbl_fn_80220168_00001710:
    subi r25, r25, 0x1
lbl_fn_80220168_00001714:
    cmpwi r25, 0x0
    bne lbl_fn_80220168_000016A4
    lwz r0, 0x10(r18)
    cmplw r20, r0
    ble lbl_fn_80220168_00001A00
    lis r3, 0xccd
    li r4, 0x0
    subi r0, r3, 0x3334
    stw r4, 0x10(r1)
    cmplw r20, r0
    stw r4, 0x14(r1)
    stw r4, 0x18(r1)
    ble lbl_fn_80220168_00001768
    lis r3, __files@ha
    lis r4, lbl_807428F4@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_807428F4@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220168_00001768:
    mulli r3, r20, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_80220168_0000179C
    lis r3, __files@ha
    lis r4, lbl_8078378C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078378C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220168_0000179C:
    lwz r4, 0xc(r18)
    lis r3, __files@ha
    lwz r0, 0x14(r1)
    addi r29, r3, __files@l
    mulli r4, r4, 0x14
    lwz r21, 0x8(r18)
    stw r17, 0x10(r1)
    li r31, 0x0
    lis r28, lbl_807428F4@ha
    mulli r0, r0, 0x14
    stw r20, 0x18(r1)
    add r23, r21, r4
    lis r27, 0x1555
    add r24, r17, r0
    lis r30, lbl_80778910@ha
    lis r26, 0x2aab
    b lbl_fn_80220168_0000192C
lbl_fn_80220168_000017E0:
    cmpwi r24, 0x0
    beq lbl_fn_80220168_00001918
    lwz r0, 0x0(r21)
    subi r3, r26, 0x5555
    stw r0, 0x0(r24)
    stw r31, 0x4(r24)
    stw r31, 0x8(r24)
    stw r31, 0xc(r24)
    lwz r0, 0x8(r21)
    lwz r20, 0x4(r21)
    mulli r0, r0, 0xc
    add r22, r20, r0
    subf r0, r20, r22
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add. r17, r0, r3
    beq lbl_fn_80220168_00001910
    addi r0, r27, 0x5555
    cmplw r17, r0
    ble lbl_fn_80220168_00001848
    addi r4, r28, lbl_807428F4@l
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220168_00001848:
    mulli r3, r17, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_80220168_00001870
    addi r3, r29, 0xa0
    addi r4, r30, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80220168_00001870:
    stw r25, 0x4(r24)
    stw r17, 0xc(r24)
    lwz r0, 0x8(r24)
    mulli r0, r0, 0xc
    add r25, r25, r0
    b lbl_fn_80220168_00001908
lbl_fn_80220168_00001888:
    cmpwi r25, 0x0
    beq lbl_fn_80220168_000018F4
    lwz r3, 0x0(r20)
    srwi. r0, r3, 31
    bne lbl_fn_80220168_000018B4
    lwz r0, 0x4(r20)
    stw r3, 0x0(r25)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r20)
    stw r0, 0x8(r25)
    b lbl_fn_80220168_000018F4
lbl_fn_80220168_000018B4:
    stw r31, 0x0(r25)
    mr r3, r25
    stw r31, 0x4(r25)
    stw r31, 0x8(r25)
    lwz r4, 0x4(r20)
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r25
    stb r0, 0xc(r1)
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r20)
    lwz r0, 0x4(r20)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80220168_000018F4:
    lwz r3, 0x8(r24)
    addi r20, r20, 0xc
    addi r25, r25, 0xc
    addi r0, r3, 0x1
    stw r0, 0x8(r24)
lbl_fn_80220168_00001908:
    cmplw r20, r22
    bne lbl_fn_80220168_00001888
lbl_fn_80220168_00001910:
    lwz r0, 0x10(r21)
    stw r0, 0x10(r24)
lbl_fn_80220168_00001918:
    lwz r3, 0x14(r1)
    addi r21, r21, 0x14
    addi r24, r24, 0x14
    addi r0, r3, 0x1
    stw r0, 0x14(r1)
lbl_fn_80220168_0000192C:
    cmplw r21, r23
    blt lbl_fn_80220168_000017E0
    lwz r5, 0x8(r18)
    lwz r3, 0x10(r1)
    lwz r6, 0x10(r18)
    cmpwi r5, 0x0
    lwz r4, 0x18(r1)
    lwz r24, 0xc(r18)
    lwz r0, 0x14(r1)
    stw r4, 0x10(r18)
    stw r6, 0x18(r1)
    stw r3, 0x8(r18)
    stw r5, 0x10(r1)
    stw r0, 0xc(r18)
    stw r24, 0x14(r1)
    beq lbl_fn_80220168_00001A00
    mulli r3, r24, 0x14
    subf r0, r24, r24
    stw r0, 0x14(r1)
    add r23, r5, r3
    b lbl_fn_80220168_000019F0
lbl_fn_80220168_00001980:
    subic. r23, r23, 0x14
    beq lbl_fn_80220168_000019EC
    addic. r22, r23, 0x4
    beq lbl_fn_80220168_000019EC
    beq lbl_fn_80220168_000019EC
    beq lbl_fn_80220168_000019EC
    lwz r4, 0x0(r22)
    cmpwi r4, 0x0
    beq lbl_fn_80220168_000019EC
    lwz r21, 0x4(r22)
    mulli r3, r21, 0xc
    subf r0, r21, r21
    stw r0, 0x4(r22)
    add r20, r4, r3
    b lbl_fn_80220168_000019DC
lbl_fn_80220168_000019BC:
    subic. r20, r20, 0xc
    beq lbl_fn_80220168_000019D8
    lwz r0, 0x0(r20)
    srwi. r0, r0, 31
    beq lbl_fn_80220168_000019D8
    lwz r3, 0x8(r20)
    bl dtor_80084684
lbl_fn_80220168_000019D8:
    subi r21, r21, 0x1
lbl_fn_80220168_000019DC:
    cmpwi r21, 0x0
    bne lbl_fn_80220168_000019BC
    lwz r3, 0x0(r22)
    bl dtor_80084684
lbl_fn_80220168_000019EC:
    subi r24, r24, 0x1
lbl_fn_80220168_000019F0:
    cmpwi r24, 0x0
    bne lbl_fn_80220168_00001980
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_80220168_00001A00:
    stw r19, 0x14(r18)
    lmw r17, 0x24(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
