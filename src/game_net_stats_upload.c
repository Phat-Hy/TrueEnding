#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800844D8(void);
extern void fn_80084C24(void);
extern void fn_80543730(void);
extern void fn_805437E8(void);
extern void fn_80543C04(void);
extern void fn_80543F64(void);
extern void fn_80544074(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_8075E148[];
extern u8 lbl_80775A20[];
extern u8 lbl_80775A48[];
extern u8 lbl_80775A88[];
extern u8 lbl_80775AA4[];
extern u8 lbl_80779F40[];
extern u8 lbl_80779F68[];
extern u8 lbl_80779F84[];
extern u8 lbl_80794598[];
extern u8 lbl_807945B4[];

/* Small data declarations */

/* Function declarations */
void fn_80544294(void);
void fn_80544298(void);
void fn_8054439C(void);
void fn_805444C4(void);
void fn_805445C8(void);
void fn_80544614(void);
void fn_80544654(void);
void fn_8054474C(void);
void fn_80544844(void);
void fn_80544E78(void);
void fn_80545088(void);
void fn_80545294(void);
void fn_805455D0(void);
void fn_80545B94(void);
void fn_80545C40(void);

asm void fn_80544294(void)
{
    nofralloc
    blr
}

asm void fn_80544298(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    lwz r0, 0x4(r4)
    stmw r26, 0x8(r1)
    mr r29, r3
    lwz r31, 0x0(r4)
    slwi r0, r0, 2
    add r26, r31, r0
    subf r30, r31, r26
    srawi r0, r30, 2
    addze. r27, r0
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    beq lbl_fn_80544298_000000F0
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_80544298_0000007C
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80544298_0000007C:
    slwi r3, r27, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80544298_000000B0
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80544298_000000B0:
    subf r0, r31, r26
    lwz r3, 0x4(r29)
    srawi r0, r0, 2
    stw r28, 0x0(r29)
    slwi r3, r3, 2
    mr r4, r31
    addze r0, r0
    stw r27, 0x8(r29)
    add r3, r28, r3
    slwi r5, r0, 2
    bl memmove
    srawi r0, r30, 2
    lwz r3, 0x4(r29)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r29)
lbl_fn_80544298_000000F0:
    mr r3, r29
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8054439C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x4(r4)
    li r5, 0x0
    lwz r30, 0x0(r4)
    mr r29, r3
    slwi r0, r0, 4
    stw r5, 0x0(r3)
    add r31, r30, r0
    subf r0, r30, r31
    stw r5, 0x4(r3)
    srawi r0, r0, 4
    addze. r27, r0
    stw r5, 0x8(r3)
    beq lbl_fn_8054439C_00000214
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_8054439C_00000184
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8054439C_00000184:
    slwi r3, r27, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8054439C_000001B8
    lis r3, __files@ha
    lis r4, lbl_80775AA4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775AA4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8054439C_000001B8:
    lwz r0, 0x4(r29)
    stw r28, 0x0(r29)
    slwi r0, r0, 4
    stw r27, 0x8(r29)
    add r4, r28, r0
    b lbl_fn_8054439C_0000020C
lbl_fn_8054439C_000001D0:
    cmpwi r4, 0x0
    beq lbl_fn_8054439C_000001F8
    lfs f0, 0x0(r30)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r4)
lbl_fn_8054439C_000001F8:
    lwz r3, 0x4(r29)
    addi r30, r30, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
lbl_fn_8054439C_0000020C:
    cmplw r30, r31
    bne lbl_fn_8054439C_000001D0
lbl_fn_8054439C_00000214:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805444C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    lwz r0, 0x4(r4)
    stmw r26, 0x8(r1)
    mr r29, r3
    lwz r31, 0x0(r4)
    slwi r0, r0, 2
    add r26, r31, r0
    subf r30, r31, r26
    srawi r0, r30, 2
    addze. r27, r0
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    beq lbl_fn_805444C4_0000031C
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r27, r0
    ble lbl_fn_805444C4_000002A8
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805444C4_000002A8:
    slwi r3, r27, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_805444C4_000002DC
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805444C4_000002DC:
    subf r0, r31, r26
    lwz r3, 0x4(r29)
    srawi r0, r0, 2
    stw r28, 0x0(r29)
    slwi r3, r3, 2
    mr r4, r31
    addze r0, r0
    stw r27, 0x8(r29)
    add r3, r28, r3
    slwi r5, r0, 2
    bl memmove
    srawi r0, r30, 2
    lwz r3, 0x4(r29)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r29)
lbl_fn_805444C4_0000031C:
    mr r3, r29
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805445C8(void)
{
    nofralloc
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    psq_st f1, 0x4(r3), 0, 0
    psq_l f1, 0x10(r4), 0, 0
    stfs f2, 0xc(r3)
    lfs f2, 0x18(r4)
    psq_st f1, 0x10(r3), 0, 0
    psq_l f1, 0x1c(r4), 0, 0
    stfs f2, 0x18(r3)
    lfs f2, 0x24(r4)
    psq_st f1, 0x1c(r3), 0, 0
    lwz r0, 0x0(r4)
    stfs f2, 0x24(r3)
    psq_l f1, 0x28(r4), 0, 0
    lfs f2, 0x30(r4)
    stw r0, 0x0(r3)
    psq_st f1, 0x28(r3), 0, 0
    stfs f2, 0x30(r3)
    blr
}

asm void fn_80544614(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80544614_000003A8
    cmpwi r4, 0x0
    ble lbl_fn_80544614_000003A8
    bl dtor_80084684
lbl_fn_80544614_000003A8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80544654(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, 0x92
    stw r0, 0x24(r1)
    addi r0, r5, 0x4924
    stw r31, 0x1c(r1)
    stw r4, 0x8(r1)
    lwz r31, 0x8(r3)
    subf r0, r31, r0
    cmplw r4, r0
    ble lbl_fn_80544654_00000410
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80544654_00000410:
    lis r3, 0x31
    subi r0, r3, 0x3cf4
    cmplw r31, r0
    bge lbl_fn_80544654_00000460
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80544654_00000454
    addi r3, r1, 0x8
lbl_fn_80544654_00000454:
    lwz r0, 0x0(r3)
    add r3, r31, r0
    b lbl_fn_80544654_000004A4
lbl_fn_80544654_00000460:
    lis r3, 0x62
    subi r0, r3, 0x79e8
    cmplw r31, r0
    bge lbl_fn_80544654_0000049C
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80544654_00000490
    addi r3, r1, 0x8
lbl_fn_80544654_00000490:
    lwz r0, 0x0(r3)
    add r3, r31, r0
    b lbl_fn_80544654_000004A4
lbl_fn_80544654_0000049C:
    lis r3, 0x92
    addi r3, r3, 0x4924
lbl_fn_80544654_000004A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8054474C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, 0x1f0
    stw r0, 0x24(r1)
    addi r0, r5, 0x7c1f
    stw r31, 0x1c(r1)
    stw r4, 0x8(r1)
    lwz r31, 0x8(r3)
    subf r0, r31, r0
    cmplw r4, r0
    ble lbl_fn_8054474C_00000508
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8054474C_00000508:
    lis r3, 0xa5
    addi r0, r3, 0x7eb5
    cmplw r31, r0
    bge lbl_fn_8054474C_00000558
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8054474C_0000054C
    addi r3, r1, 0x8
lbl_fn_8054474C_0000054C:
    lwz r0, 0x0(r3)
    add r3, r31, r0
    b lbl_fn_8054474C_0000059C
lbl_fn_8054474C_00000558:
    lis r3, 0x14b
    subi r0, r3, 0x296
    cmplw r31, r0
    bge lbl_fn_8054474C_00000594
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8054474C_00000588
    addi r3, r1, 0x8
lbl_fn_8054474C_00000588:
    lwz r0, 0x0(r3)
    add r3, r31, r0
    b lbl_fn_8054474C_0000059C
lbl_fn_8054474C_00000594:
    lis r3, 0x1f0
    addi r3, r3, 0x7c1f
lbl_fn_8054474C_0000059C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80544844(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r3
    mr r29, r4
    beq lbl_fn_80544844_00000BCC
    lwz r4, 0x10(r3)
    lwz r0, 0x4(r3)
    mulli r4, r4, 0x1c0
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x1c0
    add r30, r3, r4
    add r31, r30, r0
    b lbl_fn_80544844_000008B0
lbl_fn_80544844_000005F0:
    subic. r31, r31, 0x1c0
    beq lbl_fn_80544844_000008B0
    addic. r3, r31, 0x17c
    beq lbl_fn_80544844_0000062C
    beq lbl_fn_80544844_0000062C
    beq lbl_fn_80544844_0000062C
    beq lbl_fn_80544844_0000062C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_0000062C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_0000062C:
    addic. r3, r31, 0x170
    beq lbl_fn_80544844_0000065C
    beq lbl_fn_80544844_0000065C
    beq lbl_fn_80544844_0000065C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_0000065C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_0000065C:
    addic. r3, r31, 0x164
    beq lbl_fn_80544844_00000690
    beq lbl_fn_80544844_00000690
    beq lbl_fn_80544844_00000690
    beq lbl_fn_80544844_00000690
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000690
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000690:
    addic. r3, r31, 0x158
    beq lbl_fn_80544844_000006C0
    beq lbl_fn_80544844_000006C0
    beq lbl_fn_80544844_000006C0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_000006C0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_000006C0:
    addic. r3, r31, 0x148
    beq lbl_fn_80544844_000006F4
    beq lbl_fn_80544844_000006F4
    beq lbl_fn_80544844_000006F4
    beq lbl_fn_80544844_000006F4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_000006F4
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_000006F4:
    addic. r0, r31, 0x124
    beq lbl_fn_80544844_00000714
    lwz r3, 0x12c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80544844_00000714
    beq lbl_fn_80544844_00000714
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80544844_00000714:
    addic. r0, r31, 0x118
    beq lbl_fn_80544844_00000734
    lwz r3, 0x120(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80544844_00000734
    beq lbl_fn_80544844_00000734
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80544844_00000734:
    addic. r3, r31, 0xac
    beq lbl_fn_80544844_00000764
    beq lbl_fn_80544844_00000764
    beq lbl_fn_80544844_00000764
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000764
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000764:
    addic. r27, r31, 0x5c
    beq lbl_fn_80544844_00000830
    addic. r3, r27, 0x44
    beq lbl_fn_80544844_000007A0
    beq lbl_fn_80544844_000007A0
    beq lbl_fn_80544844_000007A0
    beq lbl_fn_80544844_000007A0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_000007A0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_000007A0:
    addic. r3, r27, 0x38
    beq lbl_fn_80544844_000007D0
    beq lbl_fn_80544844_000007D0
    beq lbl_fn_80544844_000007D0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_000007D0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_000007D0:
    addic. r3, r27, 0x2c
    beq lbl_fn_80544844_00000800
    beq lbl_fn_80544844_00000800
    beq lbl_fn_80544844_00000800
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000800
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000800:
    addic. r3, r27, 0x20
    beq lbl_fn_80544844_00000830
    beq lbl_fn_80544844_00000830
    beq lbl_fn_80544844_00000830
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000830
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000830:
    addic. r27, r31, 0x24
    beq lbl_fn_80544844_0000088C
    addic. r3, r27, 0x28
    beq lbl_fn_80544844_0000086C
    beq lbl_fn_80544844_0000086C
    beq lbl_fn_80544844_0000086C
    beq lbl_fn_80544844_0000086C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_0000086C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_0000086C:
    cmpwi r27, 0x0
    beq lbl_fn_80544844_0000088C
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80544844_0000088C
    beq lbl_fn_80544844_0000088C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80544844_0000088C:
    cmpwi r31, 0x0
    beq lbl_fn_80544844_000008B0
    addic. r0, r31, 0x8
    beq lbl_fn_80544844_000008B0
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80544844_000008B0
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_80544844_000008B0:
    cmplw r31, r30
    bgt lbl_fn_80544844_000005F0
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x4(r28)
    beq lbl_fn_80544844_00000BBC
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80544844_00000BBC
    mulli r0, r0, 0x1c0
    li r30, 0x0
    stw r30, 0x4(r28)
    add r31, r3, r0
    b lbl_fn_80544844_00000BAC
lbl_fn_80544844_000008E8:
    subic. r31, r31, 0x1c0
    beq lbl_fn_80544844_00000BA8
    addic. r3, r31, 0x17c
    beq lbl_fn_80544844_00000924
    beq lbl_fn_80544844_00000924
    beq lbl_fn_80544844_00000924
    beq lbl_fn_80544844_00000924
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000924
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000924:
    addic. r3, r31, 0x170
    beq lbl_fn_80544844_00000954
    beq lbl_fn_80544844_00000954
    beq lbl_fn_80544844_00000954
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000954
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000954:
    addic. r3, r31, 0x164
    beq lbl_fn_80544844_00000988
    beq lbl_fn_80544844_00000988
    beq lbl_fn_80544844_00000988
    beq lbl_fn_80544844_00000988
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000988
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000988:
    addic. r3, r31, 0x158
    beq lbl_fn_80544844_000009B8
    beq lbl_fn_80544844_000009B8
    beq lbl_fn_80544844_000009B8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_000009B8
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_000009B8:
    addic. r3, r31, 0x148
    beq lbl_fn_80544844_000009EC
    beq lbl_fn_80544844_000009EC
    beq lbl_fn_80544844_000009EC
    beq lbl_fn_80544844_000009EC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_000009EC
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_000009EC:
    addic. r0, r31, 0x124
    beq lbl_fn_80544844_00000A0C
    lwz r3, 0x12c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80544844_00000A0C
    beq lbl_fn_80544844_00000A0C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80544844_00000A0C:
    addic. r0, r31, 0x118
    beq lbl_fn_80544844_00000A2C
    lwz r3, 0x120(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80544844_00000A2C
    beq lbl_fn_80544844_00000A2C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80544844_00000A2C:
    addic. r3, r31, 0xac
    beq lbl_fn_80544844_00000A5C
    beq lbl_fn_80544844_00000A5C
    beq lbl_fn_80544844_00000A5C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000A5C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000A5C:
    addic. r27, r31, 0x5c
    beq lbl_fn_80544844_00000B28
    addic. r3, r27, 0x44
    beq lbl_fn_80544844_00000A98
    beq lbl_fn_80544844_00000A98
    beq lbl_fn_80544844_00000A98
    beq lbl_fn_80544844_00000A98
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000A98
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000A98:
    addic. r3, r27, 0x38
    beq lbl_fn_80544844_00000AC8
    beq lbl_fn_80544844_00000AC8
    beq lbl_fn_80544844_00000AC8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000AC8
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000AC8:
    addic. r3, r27, 0x2c
    beq lbl_fn_80544844_00000AF8
    beq lbl_fn_80544844_00000AF8
    beq lbl_fn_80544844_00000AF8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000AF8
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000AF8:
    addic. r3, r27, 0x20
    beq lbl_fn_80544844_00000B28
    beq lbl_fn_80544844_00000B28
    beq lbl_fn_80544844_00000B28
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000B28
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000B28:
    addic. r27, r31, 0x24
    beq lbl_fn_80544844_00000B84
    addic. r3, r27, 0x28
    beq lbl_fn_80544844_00000B64
    beq lbl_fn_80544844_00000B64
    beq lbl_fn_80544844_00000B64
    beq lbl_fn_80544844_00000B64
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80544844_00000B64
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80544844_00000B64:
    cmpwi r27, 0x0
    beq lbl_fn_80544844_00000B84
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80544844_00000B84
    beq lbl_fn_80544844_00000B84
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80544844_00000B84:
    cmpwi r31, 0x0
    beq lbl_fn_80544844_00000BA8
    addic. r0, r31, 0x8
    beq lbl_fn_80544844_00000BA8
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80544844_00000BA8
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_80544844_00000BA8:
    subi r30, r30, 0x1
lbl_fn_80544844_00000BAC:
    cmpwi r30, 0x0
    bne lbl_fn_80544844_000008E8
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_80544844_00000BBC:
    cmpwi r29, 0x0
    ble lbl_fn_80544844_00000BCC
    mr r3, r28
    bl dtor_80084684
lbl_fn_80544844_00000BCC:
    mr r3, r28
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80544E78(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0x10(r3)
    lis r31, lbl_80775A20@ha
    lwz r0, 0x4(r3)
    mr r27, r3
    mulli r6, r6, 0x1c0
    lwz r7, 0x0(r3)
    mr r30, r4
    mr r29, r5
    mulli r3, r0, 0x1c0
    addi r31, r31, lbl_80775A20@l
    add r0, r7, r6
    add r28, r3, r0
    b lbl_fn_80544E78_00000DD4
lbl_fn_80544E78_00000C2C:
    cmpwi r28, 0x0
    beq lbl_fn_80544E78_00000DC0
    mr r3, r28
    mr r4, r29
    bl fn_80543730
    stw r31, 0x0(r28)
    addi r3, r28, 0x24
    addi r4, r29, 0x24
    lwz r0, 0x18(r29)
    stw r0, 0x18(r28)
    lwz r0, 0x1c(r29)
    stw r0, 0x1c(r28)
    lwz r0, 0x20(r29)
    stw r0, 0x20(r28)
    bl fn_80543C04
    lwz r0, 0x58(r29)
    addi r3, r28, 0x5c
    stw r0, 0x58(r28)
    addi r4, r29, 0x5c
    bl fn_805437E8
    addi r3, r28, 0xac
    addi r4, r29, 0xac
    bl fn_80543F64
    lwz r0, 0xbc(r29)
    addi r3, r28, 0x118
    lwz r5, 0xb8(r29)
    addi r4, r29, 0x118
    stw r5, 0xb8(r28)
    stw r0, 0xbc(r28)
    lwz r0, 0xc0(r29)
    stw r0, 0xc0(r28)
    lfs f2, 0xcc(r29)
    psq_l f1, 0xc4(r29), 0, 0
    psq_st f1, 0xc4(r28), 0, 0
    stfs f2, 0xcc(r28)
    lfs f2, 0xd8(r29)
    psq_l f1, 0xd0(r29), 0, 0
    psq_st f1, 0xd0(r28), 0, 0
    stfs f2, 0xd8(r28)
    lfs f2, 0xe4(r29)
    psq_l f1, 0xdc(r29), 0, 0
    psq_st f1, 0xdc(r28), 0, 0
    stfs f2, 0xe4(r28)
    lfs f2, 0xf0(r29)
    psq_l f1, 0xe8(r29), 0, 0
    psq_st f1, 0xe8(r28), 0, 0
    stfs f2, 0xf0(r28)
    lfs f2, 0xfc(r29)
    psq_l f1, 0xf4(r29), 0, 0
    psq_st f1, 0xf4(r28), 0, 0
    stfs f2, 0xfc(r28)
    lfs f2, 0x108(r29)
    psq_l f1, 0x100(r29), 0, 0
    psq_st f1, 0x100(r28), 0, 0
    stfs f2, 0x108(r28)
    lfs f2, 0x114(r29)
    psq_l f1, 0x10c(r29), 0, 0
    psq_st f1, 0x10c(r28), 0, 0
    stfs f2, 0x114(r28)
    bl fn_80544074
    addi r3, r28, 0x124
    addi r4, r29, 0x124
    bl fn_80544074
    lwz r0, 0x130(r29)
    addi r3, r28, 0x148
    stw r0, 0x130(r28)
    addi r4, r29, 0x148
    lwz r0, 0x134(r29)
    stw r0, 0x134(r28)
    lwz r0, 0x138(r29)
    stw r0, 0x138(r28)
    lwz r0, 0x13c(r29)
    stw r0, 0x13c(r28)
    lwz r0, 0x140(r29)
    stw r0, 0x140(r28)
    lbz r0, 0x144(r29)
    stb r0, 0x144(r28)
    lbz r0, 0x145(r29)
    stb r0, 0x145(r28)
    lbz r0, 0x146(r29)
    stb r0, 0x146(r28)
    bl fn_80544298
    lwz r0, 0x154(r29)
    addi r3, r28, 0x158
    stw r0, 0x154(r28)
    addi r4, r29, 0x158
    bl fn_8054439C
    addi r3, r28, 0x164
    addi r4, r29, 0x164
    bl fn_805444C4
    addi r3, r28, 0x170
    addi r4, r29, 0x170
    bl fn_8054439C
    addi r3, r28, 0x17c
    addi r4, r29, 0x17c
    bl fn_805444C4
    lbz r0, 0x188(r29)
    addi r3, r28, 0x18c
    stb r0, 0x188(r28)
    addi r4, r29, 0x18c
    bl fn_805445C8
lbl_fn_80544E78_00000DC0:
    lwz r3, 0x4(r27)
    subi r30, r30, 0x1
    addi r28, r28, 0x1c0
    addi r0, r3, 0x1
    stw r0, 0x4(r27)
lbl_fn_80544E78_00000DD4:
    cmpwi r30, 0x0
    bne lbl_fn_80544E78_00000C2C
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80545088(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x10(r3)
    lis r31, lbl_80775A20@ha
    lwz r6, 0x0(r3)
    mr r27, r3
    mulli r0, r0, 0x1c0
    mr r28, r4
    mr r30, r5
    addi r31, r31, lbl_80775A20@l
    add r29, r6, r0
    b lbl_fn_80545088_00000FE0
lbl_fn_80545088_00000E30:
    subic. r29, r29, 0x1c0
    subi r30, r30, 0x1c0
    beq lbl_fn_80545088_00000FC8
    mr r3, r29
    mr r4, r30
    bl fn_80543730
    stw r31, 0x0(r29)
    addi r3, r29, 0x24
    addi r4, r30, 0x24
    lwz r0, 0x18(r30)
    stw r0, 0x18(r29)
    lwz r0, 0x1c(r30)
    stw r0, 0x1c(r29)
    lwz r0, 0x20(r30)
    stw r0, 0x20(r29)
    bl fn_80543C04
    lwz r0, 0x58(r30)
    addi r3, r29, 0x5c
    stw r0, 0x58(r29)
    addi r4, r30, 0x5c
    bl fn_805437E8
    addi r3, r29, 0xac
    addi r4, r30, 0xac
    bl fn_80543F64
    lwz r0, 0xbc(r30)
    addi r3, r29, 0x118
    lwz r5, 0xb8(r30)
    addi r4, r30, 0x118
    stw r5, 0xb8(r29)
    stw r0, 0xbc(r29)
    lwz r0, 0xc0(r30)
    stw r0, 0xc0(r29)
    lfs f2, 0xcc(r30)
    psq_l f1, 0xc4(r30), 0, 0
    psq_st f1, 0xc4(r29), 0, 0
    stfs f2, 0xcc(r29)
    lfs f2, 0xd8(r30)
    psq_l f1, 0xd0(r30), 0, 0
    psq_st f1, 0xd0(r29), 0, 0
    stfs f2, 0xd8(r29)
    lfs f2, 0xe4(r30)
    psq_l f1, 0xdc(r30), 0, 0
    psq_st f1, 0xdc(r29), 0, 0
    stfs f2, 0xe4(r29)
    lfs f2, 0xf0(r30)
    psq_l f1, 0xe8(r30), 0, 0
    psq_st f1, 0xe8(r29), 0, 0
    stfs f2, 0xf0(r29)
    lfs f2, 0xfc(r30)
    psq_l f1, 0xf4(r30), 0, 0
    psq_st f1, 0xf4(r29), 0, 0
    stfs f2, 0xfc(r29)
    lfs f2, 0x108(r30)
    psq_l f1, 0x100(r30), 0, 0
    psq_st f1, 0x100(r29), 0, 0
    stfs f2, 0x108(r29)
    lfs f2, 0x114(r30)
    psq_l f1, 0x10c(r30), 0, 0
    psq_st f1, 0x10c(r29), 0, 0
    stfs f2, 0x114(r29)
    bl fn_80544074
    addi r3, r29, 0x124
    addi r4, r30, 0x124
    bl fn_80544074
    lwz r0, 0x130(r30)
    addi r3, r29, 0x148
    stw r0, 0x130(r29)
    addi r4, r30, 0x148
    lwz r0, 0x134(r30)
    stw r0, 0x134(r29)
    lwz r0, 0x138(r30)
    stw r0, 0x138(r29)
    lwz r0, 0x13c(r30)
    stw r0, 0x13c(r29)
    lwz r0, 0x140(r30)
    stw r0, 0x140(r29)
    lbz r0, 0x144(r30)
    stb r0, 0x144(r29)
    lbz r0, 0x145(r30)
    stb r0, 0x145(r29)
    lbz r0, 0x146(r30)
    stb r0, 0x146(r29)
    bl fn_80544298
    lwz r0, 0x154(r30)
    addi r3, r29, 0x158
    stw r0, 0x154(r29)
    addi r4, r30, 0x158
    bl fn_8054439C
    addi r3, r29, 0x164
    addi r4, r30, 0x164
    bl fn_805444C4
    addi r3, r29, 0x170
    addi r4, r30, 0x170
    bl fn_8054439C
    addi r3, r29, 0x17c
    addi r4, r30, 0x17c
    bl fn_805444C4
    lbz r0, 0x188(r30)
    addi r3, r29, 0x18c
    stb r0, 0x188(r29)
    addi r4, r30, 0x18c
    bl fn_805445C8
lbl_fn_80545088_00000FC8:
    lwz r4, 0x10(r27)
    lwz r3, 0x4(r27)
    subi r0, r4, 0x1
    stw r0, 0x10(r27)
    addi r0, r3, 0x1
    stw r0, 0x4(r27)
lbl_fn_80545088_00000FE0:
    cmplw r28, r30
    blt lbl_fn_80545088_00000E30
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80545294(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r28, r3
    mr r29, r4
    beq lbl_fn_80545294_00001324
    lwz r4, 0x10(r3)
    lwz r0, 0x4(r3)
    mulli r4, r4, 0x84
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x84
    add r30, r3, r4
    add r31, r30, r0
    b lbl_fn_80545294_00001184
lbl_fn_80545294_00001040:
    subic. r31, r31, 0x84
    beq lbl_fn_80545294_00001184
    addic. r27, r31, 0x34
    beq lbl_fn_80545294_00001114
    addic. r3, r27, 0x44
    beq lbl_fn_80545294_00001084
    beq lbl_fn_80545294_00001084
    beq lbl_fn_80545294_00001084
    beq lbl_fn_80545294_00001084
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_00001084
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_00001084:
    addic. r3, r27, 0x38
    beq lbl_fn_80545294_000010B4
    beq lbl_fn_80545294_000010B4
    beq lbl_fn_80545294_000010B4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_000010B4
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_000010B4:
    addic. r3, r27, 0x2c
    beq lbl_fn_80545294_000010E4
    beq lbl_fn_80545294_000010E4
    beq lbl_fn_80545294_000010E4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_000010E4
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_000010E4:
    addic. r3, r27, 0x20
    beq lbl_fn_80545294_00001114
    beq lbl_fn_80545294_00001114
    beq lbl_fn_80545294_00001114
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_00001114
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_00001114:
    addic. r3, r31, 0x28
    beq lbl_fn_80545294_00001144
    beq lbl_fn_80545294_00001144
    beq lbl_fn_80545294_00001144
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_00001144
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_00001144:
    addic. r0, r31, 0x1c
    beq lbl_fn_80545294_00001160
    lwz r0, 0x1c(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80545294_00001160
    lwz r3, 0x24(r31)
    bl dtor_80084684
lbl_fn_80545294_00001160:
    cmpwi r31, 0x0
    beq lbl_fn_80545294_00001184
    addic. r0, r31, 0x8
    beq lbl_fn_80545294_00001184
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80545294_00001184
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_80545294_00001184:
    cmplw r31, r30
    bgt lbl_fn_80545294_00001040
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x4(r28)
    beq lbl_fn_80545294_00001314
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80545294_00001314
    mulli r0, r0, 0x84
    li r30, 0x0
    stw r30, 0x4(r28)
    add r31, r3, r0
    b lbl_fn_80545294_00001304
lbl_fn_80545294_000011BC:
    subic. r31, r31, 0x84
    beq lbl_fn_80545294_00001300
    addic. r27, r31, 0x34
    beq lbl_fn_80545294_00001290
    addic. r3, r27, 0x44
    beq lbl_fn_80545294_00001200
    beq lbl_fn_80545294_00001200
    beq lbl_fn_80545294_00001200
    beq lbl_fn_80545294_00001200
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_00001200
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_00001200:
    addic. r3, r27, 0x38
    beq lbl_fn_80545294_00001230
    beq lbl_fn_80545294_00001230
    beq lbl_fn_80545294_00001230
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_00001230
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_00001230:
    addic. r3, r27, 0x2c
    beq lbl_fn_80545294_00001260
    beq lbl_fn_80545294_00001260
    beq lbl_fn_80545294_00001260
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_00001260
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_00001260:
    addic. r3, r27, 0x20
    beq lbl_fn_80545294_00001290
    beq lbl_fn_80545294_00001290
    beq lbl_fn_80545294_00001290
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_00001290
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_00001290:
    addic. r3, r31, 0x28
    beq lbl_fn_80545294_000012C0
    beq lbl_fn_80545294_000012C0
    beq lbl_fn_80545294_000012C0
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80545294_000012C0
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_80545294_000012C0:
    addic. r0, r31, 0x1c
    beq lbl_fn_80545294_000012DC
    lwz r0, 0x1c(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80545294_000012DC
    lwz r3, 0x24(r31)
    bl dtor_80084684
lbl_fn_80545294_000012DC:
    cmpwi r31, 0x0
    beq lbl_fn_80545294_00001300
    addic. r0, r31, 0x8
    beq lbl_fn_80545294_00001300
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80545294_00001300
    lwz r3, 0x10(r31)
    bl dtor_80084684
lbl_fn_80545294_00001300:
    subi r30, r30, 0x1
lbl_fn_80545294_00001304:
    cmpwi r30, 0x0
    bne lbl_fn_80545294_000011BC
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_80545294_00001314:
    cmpwi r29, 0x0
    ble lbl_fn_80545294_00001324
    mr r3, r28
    bl dtor_80084684
lbl_fn_80545294_00001324:
    mr r3, r28
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805455D0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    lwz r0, 0x10(r3)
    lis r29, __files@ha
    lis r28, lbl_8075E148@ha
    lis r24, lbl_80775A48@ha
    mulli r0, r0, 0x84
    lwz r6, 0x0(r3)
    lis r26, lbl_80779F40@ha
    mr r15, r3
    mr r16, r4
    mr r23, r5
    add r21, r6, r0
    addi r24, r24, lbl_80775A48@l
    addi r26, r26, lbl_80779F40@l
    addi r28, r28, lbl_8075E148@l
    addi r29, r29, __files@l
    li r25, 0x0
    lis r27, 0x1000
    lis r14, lbl_80779F68@ha
    lis r30, 0x4000
    b lbl_fn_805455D0_000018E0
lbl_fn_805455D0_000013A0:
    subic. r21, r21, 0x84
    subi r23, r23, 0x84
    beq lbl_fn_805455D0_000018C8
    stw r24, 0x0(r21)
    lwz r0, 0x4(r23)
    stw r0, 0x4(r21)
    lwz r3, 0x8(r23)
    srwi. r0, r3, 31
    bne lbl_fn_805455D0_000013DC
    lwz r0, 0xc(r23)
    stw r3, 0x8(r21)
    stw r0, 0xc(r21)
    lwz r0, 0x10(r23)
    stw r0, 0x10(r21)
    b lbl_fn_805455D0_0000141C
lbl_fn_805455D0_000013DC:
    stw r25, 0x8(r21)
    addi r3, r21, 0x8
    stw r25, 0xc(r21)
    stw r25, 0x10(r21)
    lwz r4, 0xc(r23)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    addi r3, r21, 0x8
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10(r23)
    lwz r0, 0xc(r23)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_805455D0_0000141C:
    lwz r0, 0x14(r23)
    stw r0, 0x14(r21)
    stw r26, 0x0(r21)
    lwz r0, 0x18(r23)
    stw r0, 0x18(r21)
    lwz r3, 0x1c(r23)
    srwi. r0, r3, 31
    bne lbl_fn_805455D0_00001454
    lwz r0, 0x20(r23)
    stw r3, 0x1c(r21)
    stw r0, 0x20(r21)
    lwz r0, 0x24(r23)
    stw r0, 0x24(r21)
    b lbl_fn_805455D0_00001494
lbl_fn_805455D0_00001454:
    stw r25, 0x1c(r21)
    addi r3, r21, 0x1c
    stw r25, 0x20(r21)
    stw r25, 0x24(r21)
    lwz r4, 0x20(r23)
    bl fn_80013DC4
    lbz r0, 0x10(r1)
    addi r3, r21, 0x1c
    stb r0, 0x14(r1)
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x24(r23)
    lwz r0, 0x20(r23)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_805455D0_00001494:
    stw r25, 0x28(r21)
    stw r25, 0x2c(r21)
    stw r25, 0x30(r21)
    lwz r0, 0x2c(r23)
    lwz r19, 0x28(r23)
    slwi r0, r0, 4
    add r18, r19, r0
    subf r0, r19, r18
    srawi r0, r0, 4
    addze. r20, r0
    beq lbl_fn_805455D0_00001560
    subi r0, r27, 0x1
    cmplw r20, r0
    ble lbl_fn_805455D0_000014E0
    addi r4, r28, 0x8b
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_000014E0:
    slwi r3, r20, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_805455D0_0000150C
    lis r4, lbl_80779F84@ha
    addi r3, r29, 0xa0
    addi r4, r4, lbl_80779F84@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_0000150C:
    stw r17, 0x28(r21)
    stw r20, 0x30(r21)
    lwz r0, 0x2c(r21)
    slwi r0, r0, 4
    add r4, r17, r0
    b lbl_fn_805455D0_00001558
lbl_fn_805455D0_00001524:
    cmpwi r4, 0x0
    beq lbl_fn_805455D0_00001544
    lfs f2, 0x8(r19)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r19)
    stfs f0, 0xc(r4)
lbl_fn_805455D0_00001544:
    lwz r3, 0x2c(r21)
    addi r19, r19, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x2c(r21)
lbl_fn_805455D0_00001558:
    cmplw r19, r18
    bne lbl_fn_805455D0_00001524
lbl_fn_805455D0_00001560:
    lwz r0, 0x34(r23)
    addi r18, r21, 0x54
    stw r0, 0x34(r21)
    lfs f0, 0x38(r23)
    stfs f0, 0x38(r21)
    lfs f2, 0x44(r23)
    psq_l f1, 0x3c(r23), 0, 0
    psq_st f1, 0x3c(r21), 0, 0
    stfs f2, 0x44(r21)
    lfs f2, 0x50(r23)
    psq_l f1, 0x48(r23), 0, 0
    psq_st f1, 0x48(r21), 0, 0
    stfs f2, 0x50(r21)
    stw r25, 0x54(r21)
    stw r25, 0x58(r21)
    stw r25, 0x5c(r21)
    lwz r0, 0x58(r23)
    lwz r20, 0x54(r23)
    slwi r0, r0, 4
    add r19, r20, r0
    subf r0, r20, r19
    srawi r0, r0, 4
    addze. r22, r0
    beq lbl_fn_805455D0_00001664
    subi r0, r27, 0x1
    cmplw r22, r0
    ble lbl_fn_805455D0_000015E0
    addi r4, r28, 0x8b
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_000015E0:
    slwi r3, r22, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_805455D0_00001608
    addi r3, r29, 0xa0
    addi r4, r14, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_00001608:
    stw r17, 0x0(r18)
    stw r22, 0x8(r18)
    lwz r0, 0x4(r18)
    slwi r0, r0, 4
    add r4, r17, r0
    b lbl_fn_805455D0_0000165C
lbl_fn_805455D0_00001620:
    cmpwi r4, 0x0
    beq lbl_fn_805455D0_00001648
    lfs f0, 0x0(r20)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r20)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r20)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r20)
    stfs f0, 0xc(r4)
lbl_fn_805455D0_00001648:
    lwz r3, 0x4(r18)
    addi r20, r20, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r18)
lbl_fn_805455D0_0000165C:
    cmplw r20, r19
    bne lbl_fn_805455D0_00001620
lbl_fn_805455D0_00001664:
    stw r25, 0x60(r21)
    addi r18, r21, 0x60
    stw r25, 0x64(r21)
    stw r25, 0x68(r21)
    lwz r0, 0x64(r23)
    lwz r20, 0x60(r23)
    slwi r0, r0, 4
    add r19, r20, r0
    subf r0, r20, r19
    srawi r0, r0, 4
    addze. r22, r0
    beq lbl_fn_805455D0_00001738
    subi r0, r27, 0x1
    cmplw r22, r0
    ble lbl_fn_805455D0_000016B4
    addi r4, r28, 0x8b
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_000016B4:
    slwi r3, r22, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_805455D0_000016DC
    addi r3, r29, 0xa0
    addi r4, r14, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_000016DC:
    stw r17, 0x0(r18)
    stw r22, 0x8(r18)
    lwz r0, 0x4(r18)
    slwi r0, r0, 4
    add r4, r17, r0
    b lbl_fn_805455D0_00001730
lbl_fn_805455D0_000016F4:
    cmpwi r4, 0x0
    beq lbl_fn_805455D0_0000171C
    lfs f0, 0x0(r20)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r20)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r20)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r20)
    stfs f0, 0xc(r4)
lbl_fn_805455D0_0000171C:
    lwz r3, 0x4(r18)
    addi r20, r20, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r18)
lbl_fn_805455D0_00001730:
    cmplw r20, r19
    bne lbl_fn_805455D0_000016F4
lbl_fn_805455D0_00001738:
    stw r25, 0x6c(r21)
    addi r18, r21, 0x6c
    stw r25, 0x70(r21)
    stw r25, 0x74(r21)
    lwz r0, 0x70(r23)
    lwz r20, 0x6c(r23)
    slwi r0, r0, 4
    add r19, r20, r0
    subf r0, r20, r19
    srawi r0, r0, 4
    addze. r22, r0
    beq lbl_fn_805455D0_0000180C
    subi r0, r27, 0x1
    cmplw r22, r0
    ble lbl_fn_805455D0_00001788
    addi r4, r28, 0x8b
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_00001788:
    slwi r3, r22, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_805455D0_000017B0
    addi r3, r29, 0xa0
    addi r4, r14, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_000017B0:
    stw r17, 0x0(r18)
    stw r22, 0x8(r18)
    lwz r0, 0x4(r18)
    slwi r0, r0, 4
    add r4, r17, r0
    b lbl_fn_805455D0_00001804
lbl_fn_805455D0_000017C8:
    cmpwi r4, 0x0
    beq lbl_fn_805455D0_000017F0
    lfs f0, 0x0(r20)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r20)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r20)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r20)
    stfs f0, 0xc(r4)
lbl_fn_805455D0_000017F0:
    lwz r3, 0x4(r18)
    addi r20, r20, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r18)
lbl_fn_805455D0_00001804:
    cmplw r20, r19
    bne lbl_fn_805455D0_000017C8
lbl_fn_805455D0_0000180C:
    stw r25, 0x78(r21)
    addi r22, r21, 0x78
    stw r25, 0x7c(r21)
    stw r25, 0x80(r21)
    lwz r0, 0x7c(r23)
    lwz r19, 0x78(r23)
    slwi r0, r0, 2
    add r20, r19, r0
    subf r18, r19, r20
    srawi r0, r18, 2
    addze. r17, r0
    beq lbl_fn_805455D0_000018C8
    subi r0, r30, 0x1
    cmplw r17, r0
    ble lbl_fn_805455D0_0000185C
    addi r4, r28, 0x8b
    addi r3, r29, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_0000185C:
    slwi r3, r17, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_805455D0_00001888
    lis r4, lbl_80775A88@ha
    addi r3, r29, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805455D0_00001888:
    stw r31, 0x0(r22)
    subf r0, r19, r20
    srawi r0, r0, 2
    mr r4, r19
    stw r17, 0x8(r22)
    addze r0, r0
    slwi r5, r0, 2
    lwz r3, 0x4(r22)
    slwi r0, r3, 2
    add r3, r31, r0
    bl memmove
    srawi r0, r18, 2
    lwz r3, 0x4(r22)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r22)
lbl_fn_805455D0_000018C8:
    lwz r4, 0x10(r15)
    lwz r3, 0x4(r15)
    subi r0, r4, 0x1
    stw r0, 0x10(r15)
    addi r0, r3, 0x1
    stw r0, 0x4(r15)
lbl_fn_805455D0_000018E0:
    cmplw r16, r23
    blt lbl_fn_805455D0_000013A0
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80545B94(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x1f0
    stw r0, 0x24(r1)
    addi r0, r4, 0x7c1f
    cmplw r5, r0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    ble lbl_fn_80545B94_00001954
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80545B94_00001954:
    mulli r3, r30, 0x84
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80545B94_00001988
    lis r3, __files@ha
    lis r4, lbl_80794598@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80794598@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80545B94_00001988:
    stw r31, 0x0(r29)
    stw r30, 0x8(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80545C40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x92
    stw r0, 0x24(r1)
    addi r0, r4, 0x4924
    cmplw r5, r0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    ble lbl_fn_80545C40_00001A00
    lis r4, lbl_8075E148@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075E148@l
    addi r3, r3, __files@l
    addi r4, r4, 0x8b
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80545C40_00001A00:
    mulli r3, r30, 0x1c0
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80545C40_00001A34
    lis r3, __files@ha
    lis r4, lbl_807945B4@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807945B4@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80545C40_00001A34:
    stw r31, 0x0(r29)
    stw r30, 0x8(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
