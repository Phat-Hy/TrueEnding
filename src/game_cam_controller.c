#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807BB380[];

/* Small data declarations */

/* Function declarations */
void fn_800EC1F4(void);
void fn_800EC204(void);
void fn_800EC24C(void);
void fn_800EC254(void);
void fn_800EC2C4(void);
void fn_800EC440(void);
void fn_800EC534(void);
void fn_800EC5BC(void);
void fn_800EC654(void);
void fn_800EC7F0(void);
void fn_800ED42C(void);
void fn_800ED4D8(void);
void fn_800ED4E0(void);

asm void fn_800EC1F4(void)
{
    nofralloc
    lwz r0, 0x14a8(r3)
    rlwimi r0, r4, 26, 5, 5
    stw r0, 0x14a8(r3)
    blr
}

asm void fn_800EC204(void)
{
    nofralloc
    lwz r0, 0x78(r3)
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800EC204_00000050
lbl_fn_800EC204_00000028:
    lwz r5, 0x7c(r3)
    lwzx r0, r5, r7
    cmpw r4, r0
    bne lbl_fn_800EC204_00000044
    mulli r0, r6, 0x28
    add r3, r5, r0
    blr
lbl_fn_800EC204_00000044:
    addi r7, r7, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_800EC204_00000028
lbl_fn_800EC204_00000050:
    li r3, 0x0
    blr
}

asm void fn_800EC24C(void)
{
    nofralloc
    stw r4, 0xa0(r3)
    blr
}

asm void fn_800EC254(void)
{
    nofralloc
    lbz r6, 0x2c(r4)
    li r5, 0x0
    cmpwi r6, 0x0
    beq lbl_fn_800EC254_00000080
    lbz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800EC254_00000080
    li r5, 0x1
lbl_fn_800EC254_00000080:
    cmpwi r5, 0x0
    beq lbl_fn_800EC254_000000B4
    lwz r5, 0x24(r4)
    li r6, 0x0
    lwz r0, 0x24(r3)
    cmplw r5, r0
    bne lbl_fn_800EC254_000000C4
    lwz r4, 0x28(r4)
    lwz r0, 0x28(r3)
    cmplw r4, r0
    bne lbl_fn_800EC254_000000C4
    li r6, 0x1
    b lbl_fn_800EC254_000000C4
lbl_fn_800EC254_000000B4:
    lbz r0, 0x2c(r3)
    subf r0, r6, r0
    cntlzw r0, r0
    srwi r6, r0, 5
lbl_fn_800EC254_000000C4:
    cntlzw r0, r6
    srwi r3, r0, 5
    blr
}

asm void fn_800EC2C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_800EC2C4_00000104
    addi r0, r4, 0x1
    b lbl_fn_800EC2C4_00000108
lbl_fn_800EC2C4_00000104:
    lwz r0, 0x8(r4)
lbl_fn_800EC2C4_00000108:
    stw r0, 0x0(r3)
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_800EC2C4_00000128
    lbz r0, 0x0(r4)
    addi r6, r4, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_800EC2C4_00000130
lbl_fn_800EC2C4_00000128:
    lwz r6, 0x8(r4)
    lwz r0, 0x4(r4)
lbl_fn_800EC2C4_00000130:
    lwz r4, 0x0(r5)
    add r0, r6, r0
    stw r0, 0x4(r3)
    addi r31, r3, 0x8
    srwi. r0, r4, 31
    bne lbl_fn_800EC2C4_00000160
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r4, 0x0(r31)
    stw r3, 0x4(r31)
    stw r0, 0x8(r31)
    b lbl_fn_800EC2C4_000001A4
lbl_fn_800EC2C4_00000160:
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r4, 0x4(r5)
    mr r3, r31
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    bl fn_80013DC4
    lbz r5, 0x8(r1)
    mr r3, r31
    stb r5, 0xc(r1)
    addi r8, r1, 0xc
    lwz r6, 0x8(r30)
    li r4, 0x0
    lwz r0, 0x4(r30)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800EC2C4_000001A4:
    lwz r4, 0xc(r30)
    srwi. r0, r4, 31
    bne lbl_fn_800EC2C4_000001C8
    lwz r3, 0x10(r30)
    lwz r0, 0x14(r30)
    stw r4, 0xc(r31)
    stw r3, 0x10(r31)
    stw r0, 0x14(r31)
    b lbl_fn_800EC2C4_0000020C
lbl_fn_800EC2C4_000001C8:
    li r0, 0x0
    stw r0, 0xc(r31)
    lwz r4, 0x10(r30)
    addi r3, r31, 0xc
    stw r0, 0x10(r31)
    stw r0, 0x14(r31)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    addi r3, r31, 0xc
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x14(r30)
    li r4, 0x0
    lwz r0, 0x10(r30)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800EC2C4_0000020C:
    lbz r6, 0x18(r30)
    mr r3, r29
    lbz r5, 0x19(r30)
    lwz r4, 0x1c(r30)
    lbz r0, 0x20(r30)
    stb r6, 0x18(r31)
    stb r5, 0x19(r31)
    stw r4, 0x1c(r31)
    stb r0, 0x20(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800EC440(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    li r31, 0x0
    mr r27, r4
    mr r26, r3
    mr r28, r5
    mr r29, r6
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    stw r31, 0xc(r3)
    stw r31, 0x10(r3)
    stw r31, 0x14(r3)
    mr r3, r27
    bl strlen
    mr r30, r3
    addi r3, r26, 0xc
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r6, r27
    stb r0, 0x10(r1)
    addi r3, r26, 0xc
    add r7, r27, r30
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    cmpwi r28, 0x0
    stb r31, 0x18(r26)
    stb r31, 0x19(r26)
    stw r29, 0x1c(r26)
    stb r31, 0x20(r26)
    beq lbl_fn_800EC440_00000328
    lwz r0, 0x0(r26)
    srwi. r0, r0, 31
    bne lbl_fn_800EC440_000002F4
    lbz r0, 0x0(r26)
    clrlwi r30, r0, 25
    b lbl_fn_800EC440_000002F8
lbl_fn_800EC440_000002F4:
    lwz r30, 0x4(r26)
lbl_fn_800EC440_000002F8:
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r3, r26
    mr r5, r30
    mr r6, r28
    add r7, r28, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_800EC440_00000328:
    mr r3, r26
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800EC534(void)
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
    beq lbl_fn_800EC534_000003AC
    addic. r0, r3, 0xc
    beq lbl_fn_800EC534_00000380
    lwz r0, 0xc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_800EC534_00000380
    lwz r3, 0x14(r3)
    bl dtor_80084684
lbl_fn_800EC534_00000380:
    cmpwi r30, 0x0
    beq lbl_fn_800EC534_0000039C
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_800EC534_0000039C
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_800EC534_0000039C:
    cmpwi r31, 0x0
    ble lbl_fn_800EC534_000003AC
    mr r3, r30
    bl dtor_80084684
lbl_fn_800EC534_000003AC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EC5BC(void)
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
    beq lbl_fn_800EC5BC_00000440
    addic. r31, r3, 0x8
    beq lbl_fn_800EC5BC_00000430
    addic. r0, r31, 0xc
    beq lbl_fn_800EC5BC_00000414
    lwz r0, 0xc(r31)
    srwi. r0, r0, 31
    beq lbl_fn_800EC5BC_00000414
    lwz r3, 0x14(r31)
    bl dtor_80084684
lbl_fn_800EC5BC_00000414:
    cmpwi r31, 0x0
    beq lbl_fn_800EC5BC_00000430
    lwz r0, 0x0(r31)
    srwi. r0, r0, 31
    beq lbl_fn_800EC5BC_00000430
    lwz r3, 0x8(r31)
    bl dtor_80084684
lbl_fn_800EC5BC_00000430:
    cmpwi r30, 0x0
    ble lbl_fn_800EC5BC_00000440
    mr r3, r29
    bl dtor_80084684
lbl_fn_800EC5BC_00000440:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EC654(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r5, 0x8(r4)
    stw r0, 0x64(r1)
    srwi. r0, r5, 31
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    addi r29, r1, 0x20
    stw r28, 0x50(r1)
    bne lbl_fn_800EC654_000004AC
    lwz r3, 0xc(r4)
    lwz r0, 0x10(r4)
    stw r5, 0x20(r1)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_800EC654_000004F0
lbl_fn_800EC654_000004AC:
    li r0, 0x0
    stw r0, 0x20(r1)
    lwz r4, 0xc(r4)
    mr r3, r29
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80013DC4
    lbz r5, 0x8(r1)
    mr r3, r29
    stb r5, 0xc(r1)
    addi r8, r1, 0xc
    lwz r6, 0x10(r31)
    li r4, 0x0
    lwz r0, 0xc(r31)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800EC654_000004F0:
    lwz r4, 0x14(r31)
    srwi. r0, r4, 31
    bne lbl_fn_800EC654_00000514
    lwz r3, 0x18(r31)
    lwz r0, 0x1c(r31)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_800EC654_0000055C
lbl_fn_800EC654_00000514:
    li r0, 0x0
    stw r0, 0xc(r29)
    lwz r4, 0x18(r31)
    addi r3, r29, 0xc
    stw r0, 0x10(r29)
    addi r28, r31, 0x18
    stw r0, 0x14(r29)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    addi r3, r29, 0xc
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x1c(r31)
    li r4, 0x0
    lwz r0, 0x0(r28)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800EC654_0000055C:
    lbz r11, 0x20(r31)
    mr r3, r30
    lbz r10, 0x21(r31)
    addi r4, r1, 0x20
    lwz r9, 0x24(r31)
    addi r5, r1, 0x1c
    lbz r8, 0x28(r31)
    addi r6, r1, 0x18
    lwz r7, 0x4(r31)
    lwz r0, 0x0(r31)
    stb r11, 0x38(r1)
    stb r10, 0x39(r1)
    stw r9, 0x3c(r1)
    stb r8, 0x40(r1)
    stw r7, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_800EC7F0
    addi r29, r1, 0x20
    addic. r0, r29, 0xc
    beq lbl_fn_800EC654_000005C0
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800EC654_000005C0
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_800EC654_000005C0:
    cmpwi r29, 0x0
    beq lbl_fn_800EC654_000005DC
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800EC654_000005DC
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_800EC654_000005DC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800EC7F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    lwz r7, 0x0(r4)
    srwi. r0, r7, 31
    bne lbl_fn_800EC7F0_0000064C
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    stw r7, 0x0(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    b lbl_fn_800EC7F0_0000068C
lbl_fn_800EC7F0_0000064C:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r4, 0x4(r4)
    bl fn_80013DC4
    lbz r0, 0x18(r1)
    mr r3, r28
    stb r0, 0x1c(r1)
    addi r8, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r29)
    lwz r0, 0x4(r29)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800EC7F0_0000068C:
    lwz r3, 0xc(r29)
    srwi. r0, r3, 31
    bne lbl_fn_800EC7F0_000006B0
    lwz r0, 0x10(r29)
    stw r0, 0x10(r28)
    stw r3, 0xc(r28)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r28)
    b lbl_fn_800EC7F0_000006F4
lbl_fn_800EC7F0_000006B0:
    li r0, 0x0
    stw r0, 0xc(r28)
    addi r3, r28, 0xc
    stw r0, 0x10(r28)
    stw r0, 0x14(r28)
    lwz r4, 0x10(r29)
    bl fn_80013DC4
    lbz r0, 0x20(r1)
    addi r3, r28, 0xc
    stb r0, 0x24(r1)
    addi r8, r1, 0x24
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x14(r29)
    lwz r0, 0x10(r29)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800EC7F0_000006F4:
    lbz r0, 0x18(r29)
    li r3, 0x0
    stb r0, 0x18(r28)
    lbz r0, 0x19(r29)
    stb r0, 0x19(r28)
    lwz r5, 0x1c(r29)
    stw r5, 0x1c(r28)
    lbz r0, 0x20(r29)
    stb r0, 0x20(r28)
    lwz r4, 0x0(r30)
    stw r4, 0x24(r28)
    lwz r0, 0x0(r31)
    stw r0, 0x28(r28)
    cmplw r4, r0
    stb r3, 0x2c(r28)
    stw r3, 0x30(r28)
    stw r3, 0x34(r28)
    stw r3, 0x38(r28)
    beq lbl_fn_800EC7F0_0000120C
    cmpwi r5, 0x0
    bne lbl_fn_800EC7F0_00000870
    lis r7, lbl_807BB380@ha
    addi r3, r28, 0xd
    addi r7, r7, lbl_807BB380@l
    b lbl_fn_800EC7F0_00000764
lbl_fn_800EC7F0_00000758:
    lwz r4, 0x24(r28)
    addi r4, r4, 0x1
    stw r4, 0x24(r28)
lbl_fn_800EC7F0_00000764:
    lwz r4, 0x24(r28)
    cmplw r4, r0
    beq lbl_fn_800EC7F0_00000870
    lwz r5, 0xc(r28)
    lbz r8, 0x0(r4)
    srwi. r6, r5, 31
    extsb r8, r8
    bne lbl_fn_800EC7F0_00000790
    lbz r5, 0xc(r28)
    clrlwi r5, r5, 25
    b lbl_fn_800EC7F0_00000794
lbl_fn_800EC7F0_00000790:
    lwz r5, 0x10(r28)
lbl_fn_800EC7F0_00000794:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00000814
    cmpwi r6, 0x0
    bne lbl_fn_800EC7F0_000007B4
    lbz r5, 0xc(r28)
    mr r6, r3
    clrlwi r5, r5, 25
    b lbl_fn_800EC7F0_000007BC
lbl_fn_800EC7F0_000007B4:
    lwz r6, 0x14(r28)
    lwz r5, 0x10(r28)
lbl_fn_800EC7F0_000007BC:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_000007FC
    add r9, r6, r5
    mr r10, r6
    subf r5, r6, r9
    mtctr r5
    cmplw r6, r9
    bge lbl_fn_800EC7F0_000007FC
lbl_fn_800EC7F0_000007DC:
    lbz r5, 0x0(r10)
    extsb r5, r5
    cmpw r8, r5
    bne lbl_fn_800EC7F0_000007F4
    subf r5, r6, r10
    b lbl_fn_800EC7F0_00000800
lbl_fn_800EC7F0_000007F4:
    addi r10, r10, 0x1
    bdnz lbl_fn_800EC7F0_000007DC
lbl_fn_800EC7F0_000007FC:
    li r5, -0x1
lbl_fn_800EC7F0_00000800:
    subfic r6, r5, -0x1
    addi r5, r5, 0x1
    or r5, r6, r5
    srwi r5, r5, 31
    b lbl_fn_800EC7F0_00000868
lbl_fn_800EC7F0_00000814:
    lbz r5, 0x19(r28)
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00000864
    cmplwi r8, 0xff
    li r5, 0x1
    bgt lbl_fn_800EC7F0_00000830
    li r5, 0x0
lbl_fn_800EC7F0_00000830:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00000840
    li r6, 0x0
    b lbl_fn_800EC7F0_00000854
lbl_fn_800EC7F0_00000840:
    lwz r6, 0x38(r7)
    slwi r5, r8, 1
    lwz r6, 0x8(r6)
    lhzx r5, r6, r5
    rlwinm r6, r5, 0, 23, 23
lbl_fn_800EC7F0_00000854:
    neg r5, r6
    or r5, r5, r6
    srwi r5, r5, 31
    b lbl_fn_800EC7F0_00000868
lbl_fn_800EC7F0_00000864:
    li r5, 0x0
lbl_fn_800EC7F0_00000868:
    cmpwi r5, 0x0
    bne lbl_fn_800EC7F0_00000758
lbl_fn_800EC7F0_00000870:
    lwz r3, 0x1c(r28)
    lwz r6, 0x24(r28)
    cmpwi r3, 0x0
    bne lbl_fn_800EC7F0_00000BD4
    cmplw r4, r0
    bne lbl_fn_800EC7F0_00000890
    li r0, 0x0
    b lbl_fn_800EC7F0_00001210
lbl_fn_800EC7F0_00000890:
    lwz r3, 0x0(r28)
    lbz r5, 0x0(r4)
    srwi. r4, r3, 31
    extsb r5, r5
    bne lbl_fn_800EC7F0_000008B0
    lbz r3, 0x0(r28)
    clrlwi r3, r3, 25
    b lbl_fn_800EC7F0_000008B4
lbl_fn_800EC7F0_000008B0:
    lwz r3, 0x4(r28)
lbl_fn_800EC7F0_000008B4:
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_00000934
    cmpwi r4, 0x0
    bne lbl_fn_800EC7F0_000008D4
    lbz r3, 0x0(r28)
    addi r4, r28, 0x1
    clrlwi r3, r3, 25
    b lbl_fn_800EC7F0_000008DC
lbl_fn_800EC7F0_000008D4:
    lwz r4, 0x8(r28)
    lwz r3, 0x4(r28)
lbl_fn_800EC7F0_000008DC:
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_0000091C
    add r7, r4, r3
    mr r8, r4
    subf r3, r4, r7
    mtctr r3
    cmplw r4, r7
    bge lbl_fn_800EC7F0_0000091C
lbl_fn_800EC7F0_000008FC:
    lbz r3, 0x0(r8)
    extsb r3, r3
    cmpw r5, r3
    bne lbl_fn_800EC7F0_00000914
    subf r3, r4, r8
    b lbl_fn_800EC7F0_00000920
lbl_fn_800EC7F0_00000914:
    addi r8, r8, 0x1
    bdnz lbl_fn_800EC7F0_000008FC
lbl_fn_800EC7F0_0000091C:
    li r3, -0x1
lbl_fn_800EC7F0_00000920:
    subfic r4, r3, -0x1
    addi r3, r3, 0x1
    or r3, r4, r3
    srwi r3, r3, 31
    b lbl_fn_800EC7F0_00000990
lbl_fn_800EC7F0_00000934:
    lbz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_0000098C
    cmplwi r5, 0xff
    li r3, 0x1
    bgt lbl_fn_800EC7F0_00000950
    li r3, 0x0
lbl_fn_800EC7F0_00000950:
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_00000960
    li r4, 0x0
    b lbl_fn_800EC7F0_0000097C
lbl_fn_800EC7F0_00000960:
    lis r4, lbl_807BB380@ha
    slwi r3, r5, 1
    addi r4, r4, lbl_807BB380@l
    lwz r4, 0x38(r4)
    lwz r4, 0x8(r4)
    lhzx r3, r4, r3
    rlwinm r4, r3, 0, 24, 24
lbl_fn_800EC7F0_0000097C:
    neg r3, r4
    or r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_800EC7F0_00000990
lbl_fn_800EC7F0_0000098C:
    li r3, 0x0
lbl_fn_800EC7F0_00000990:
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_000009A8
    lwz r3, 0x24(r28)
    addi r0, r3, 0x1
    stw r0, 0x24(r28)
    b lbl_fn_800EC7F0_000011CC
lbl_fn_800EC7F0_000009A8:
    lis r5, lbl_807BB380@ha
    addi r3, r28, 0xd
    addi r4, r28, 0x1
    addi r8, r5, lbl_807BB380@l
    b lbl_fn_800EC7F0_000009C8
lbl_fn_800EC7F0_000009BC:
    lwz r5, 0x24(r28)
    addi r5, r5, 0x1
    stw r5, 0x24(r28)
lbl_fn_800EC7F0_000009C8:
    lwz r5, 0x24(r28)
    cmplw r5, r0
    beq lbl_fn_800EC7F0_000011CC
    lwz r7, 0xc(r28)
    lbz r5, 0x0(r5)
    srwi. r9, r7, 31
    extsb r10, r5
    bne lbl_fn_800EC7F0_000009F4
    lbz r7, 0xc(r28)
    clrlwi r7, r7, 25
    b lbl_fn_800EC7F0_000009F8
lbl_fn_800EC7F0_000009F4:
    lwz r7, 0x10(r28)
lbl_fn_800EC7F0_000009F8:
    cmpwi r7, 0x0
    beq lbl_fn_800EC7F0_00000A78
    cmpwi r9, 0x0
    bne lbl_fn_800EC7F0_00000A18
    lbz r7, 0xc(r28)
    mr r9, r3
    clrlwi r7, r7, 25
    b lbl_fn_800EC7F0_00000A20
lbl_fn_800EC7F0_00000A18:
    lwz r9, 0x14(r28)
    lwz r7, 0x10(r28)
lbl_fn_800EC7F0_00000A20:
    cmpwi r7, 0x0
    beq lbl_fn_800EC7F0_00000A60
    add r11, r9, r7
    mr r12, r9
    subf r7, r9, r11
    mtctr r7
    cmplw r9, r11
    bge lbl_fn_800EC7F0_00000A60
lbl_fn_800EC7F0_00000A40:
    lbz r7, 0x0(r12)
    extsb r7, r7
    cmpw r10, r7
    bne lbl_fn_800EC7F0_00000A58
    subf r7, r9, r12
    b lbl_fn_800EC7F0_00000A64
lbl_fn_800EC7F0_00000A58:
    addi r12, r12, 0x1
    bdnz lbl_fn_800EC7F0_00000A40
lbl_fn_800EC7F0_00000A60:
    li r7, -0x1
lbl_fn_800EC7F0_00000A64:
    subfic r9, r7, -0x1
    addi r7, r7, 0x1
    or r7, r9, r7
    srwi r7, r7, 31
    b lbl_fn_800EC7F0_00000ACC
lbl_fn_800EC7F0_00000A78:
    lbz r7, 0x19(r28)
    cmpwi r7, 0x0
    beq lbl_fn_800EC7F0_00000AC8
    cmplwi r10, 0xff
    li r7, 0x1
    bgt lbl_fn_800EC7F0_00000A94
    li r7, 0x0
lbl_fn_800EC7F0_00000A94:
    cmpwi r7, 0x0
    beq lbl_fn_800EC7F0_00000AA4
    li r9, 0x0
    b lbl_fn_800EC7F0_00000AB8
lbl_fn_800EC7F0_00000AA4:
    lwz r9, 0x38(r8)
    slwi r7, r10, 1
    lwz r9, 0x8(r9)
    lhzx r7, r9, r7
    rlwinm r9, r7, 0, 23, 23
lbl_fn_800EC7F0_00000AB8:
    neg r7, r9
    or r7, r7, r9
    srwi r7, r7, 31
    b lbl_fn_800EC7F0_00000ACC
lbl_fn_800EC7F0_00000AC8:
    li r7, 0x0
lbl_fn_800EC7F0_00000ACC:
    cmpwi r7, 0x0
    bne lbl_fn_800EC7F0_000011CC
    lwz r7, 0x0(r28)
    extsb r9, r5
    srwi. r7, r7, 31
    bne lbl_fn_800EC7F0_00000AF0
    lbz r5, 0x0(r28)
    clrlwi r5, r5, 25
    b lbl_fn_800EC7F0_00000AF4
lbl_fn_800EC7F0_00000AF0:
    lwz r5, 0x4(r28)
lbl_fn_800EC7F0_00000AF4:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00000B74
    cmpwi r7, 0x0
    bne lbl_fn_800EC7F0_00000B14
    lbz r5, 0x0(r28)
    mr r7, r4
    clrlwi r5, r5, 25
    b lbl_fn_800EC7F0_00000B1C
lbl_fn_800EC7F0_00000B14:
    lwz r7, 0x8(r28)
    lwz r5, 0x4(r28)
lbl_fn_800EC7F0_00000B1C:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00000B5C
    add r10, r7, r5
    mr r11, r7
    subf r5, r7, r10
    mtctr r5
    cmplw r7, r10
    bge lbl_fn_800EC7F0_00000B5C
lbl_fn_800EC7F0_00000B3C:
    lbz r5, 0x0(r11)
    extsb r5, r5
    cmpw r9, r5
    bne lbl_fn_800EC7F0_00000B54
    subf r5, r7, r11
    b lbl_fn_800EC7F0_00000B60
lbl_fn_800EC7F0_00000B54:
    addi r11, r11, 0x1
    bdnz lbl_fn_800EC7F0_00000B3C
lbl_fn_800EC7F0_00000B5C:
    li r5, -0x1
lbl_fn_800EC7F0_00000B60:
    subfic r7, r5, -0x1
    addi r5, r5, 0x1
    or r5, r7, r5
    srwi r5, r5, 31
    b lbl_fn_800EC7F0_00000BC8
lbl_fn_800EC7F0_00000B74:
    lbz r5, 0x18(r28)
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00000BC4
    cmplwi r9, 0xff
    li r5, 0x1
    bgt lbl_fn_800EC7F0_00000B90
    li r5, 0x0
lbl_fn_800EC7F0_00000B90:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00000BA0
    li r7, 0x0
    b lbl_fn_800EC7F0_00000BB4
lbl_fn_800EC7F0_00000BA0:
    lwz r7, 0x38(r8)
    slwi r5, r9, 1
    lwz r7, 0x8(r7)
    lhzx r5, r7, r5
    rlwinm r7, r5, 0, 24, 24
lbl_fn_800EC7F0_00000BB4:
    neg r5, r7
    or r5, r5, r7
    srwi r5, r5, 31
    b lbl_fn_800EC7F0_00000BC8
lbl_fn_800EC7F0_00000BC4:
    li r5, 0x0
lbl_fn_800EC7F0_00000BC8:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_000009BC
    b lbl_fn_800EC7F0_000011CC
lbl_fn_800EC7F0_00000BD4:
    cmplw r4, r0
    bne lbl_fn_800EC7F0_00000C38
    lbz r0, 0x20(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800EC7F0_00000C30
    lwz r0, 0x30(r28)
    li r3, 0x1
    stb r3, 0x20(r28)
    mr r7, r6
    srwi. r0, r0, 31
    bne lbl_fn_800EC7F0_00000C0C
    lbz r0, 0x30(r28)
    clrlwi r5, r0, 25
    b lbl_fn_800EC7F0_00000C10
lbl_fn_800EC7F0_00000C0C:
    lwz r5, 0x34(r28)
lbl_fn_800EC7F0_00000C10:
    lbz r0, 0x10(r1)
    addi r3, r28, 0x30
    stb r0, 0x14(r1)
    addi r8, r1, 0x14
    li r4, 0x0
    bl fn_80013F78
    li r0, 0x1
    b lbl_fn_800EC7F0_00001210
lbl_fn_800EC7F0_00000C30:
    li r0, 0x0
    b lbl_fn_800EC7F0_00001210
lbl_fn_800EC7F0_00000C38:
    lwz r5, 0x0(r28)
    lbz r3, 0x0(r4)
    srwi. r5, r5, 31
    extsb r7, r3
    bne lbl_fn_800EC7F0_00000C58
    lbz r4, 0x0(r28)
    clrlwi r4, r4, 25
    b lbl_fn_800EC7F0_00000C5C
lbl_fn_800EC7F0_00000C58:
    lwz r4, 0x4(r28)
lbl_fn_800EC7F0_00000C5C:
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000CDC
    cmpwi r5, 0x0
    bne lbl_fn_800EC7F0_00000C7C
    lbz r4, 0x0(r28)
    addi r5, r28, 0x1
    clrlwi r4, r4, 25
    b lbl_fn_800EC7F0_00000C84
lbl_fn_800EC7F0_00000C7C:
    lwz r5, 0x8(r28)
    lwz r4, 0x4(r28)
lbl_fn_800EC7F0_00000C84:
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000CC4
    add r8, r5, r4
    mr r9, r5
    subf r4, r5, r8
    mtctr r4
    cmplw r5, r8
    bge lbl_fn_800EC7F0_00000CC4
lbl_fn_800EC7F0_00000CA4:
    lbz r4, 0x0(r9)
    extsb r4, r4
    cmpw r7, r4
    bne lbl_fn_800EC7F0_00000CBC
    subf r4, r5, r9
    b lbl_fn_800EC7F0_00000CC8
lbl_fn_800EC7F0_00000CBC:
    addi r9, r9, 0x1
    bdnz lbl_fn_800EC7F0_00000CA4
lbl_fn_800EC7F0_00000CC4:
    li r4, -0x1
lbl_fn_800EC7F0_00000CC8:
    subfic r5, r4, -0x1
    addi r4, r4, 0x1
    or r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_800EC7F0_00000D38
lbl_fn_800EC7F0_00000CDC:
    lbz r4, 0x18(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000D34
    cmplwi r7, 0xff
    li r4, 0x1
    bgt lbl_fn_800EC7F0_00000CF8
    li r4, 0x0
lbl_fn_800EC7F0_00000CF8:
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000D08
    li r5, 0x0
    b lbl_fn_800EC7F0_00000D24
lbl_fn_800EC7F0_00000D08:
    lis r5, lbl_807BB380@ha
    slwi r4, r7, 1
    addi r5, r5, lbl_807BB380@l
    lwz r5, 0x38(r5)
    lwz r5, 0x8(r5)
    lhzx r4, r5, r4
    rlwinm r5, r4, 0, 24, 24
lbl_fn_800EC7F0_00000D24:
    neg r4, r5
    or r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_800EC7F0_00000D38
lbl_fn_800EC7F0_00000D34:
    li r4, 0x0
lbl_fn_800EC7F0_00000D38:
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000D70
    lbz r0, 0x20(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800EC7F0_00000D58
    li r0, 0x1
    stb r0, 0x20(r28)
    b lbl_fn_800EC7F0_000011CC
lbl_fn_800EC7F0_00000D58:
    lwz r3, 0x24(r28)
    li r0, 0x0
    stb r0, 0x20(r28)
    addi r0, r3, 0x1
    stw r0, 0x24(r28)
    b lbl_fn_800EC7F0_000011CC
lbl_fn_800EC7F0_00000D70:
    lbz r4, 0x20(r28)
    cmpwi r4, 0x0
    bne lbl_fn_800EC7F0_00000E8C
    lwz r4, 0xc(r28)
    extsb r7, r3
    srwi. r5, r4, 31
    bne lbl_fn_800EC7F0_00000D98
    lbz r4, 0xc(r28)
    clrlwi r4, r4, 25
    b lbl_fn_800EC7F0_00000D9C
lbl_fn_800EC7F0_00000D98:
    lwz r4, 0x10(r28)
lbl_fn_800EC7F0_00000D9C:
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000E1C
    cmpwi r5, 0x0
    bne lbl_fn_800EC7F0_00000DBC
    lbz r4, 0xc(r28)
    addi r5, r28, 0xd
    clrlwi r4, r4, 25
    b lbl_fn_800EC7F0_00000DC4
lbl_fn_800EC7F0_00000DBC:
    lwz r5, 0x14(r28)
    lwz r4, 0x10(r28)
lbl_fn_800EC7F0_00000DC4:
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000E04
    add r8, r5, r4
    mr r9, r5
    subf r4, r5, r8
    mtctr r4
    cmplw r5, r8
    bge lbl_fn_800EC7F0_00000E04
lbl_fn_800EC7F0_00000DE4:
    lbz r4, 0x0(r9)
    extsb r4, r4
    cmpw r7, r4
    bne lbl_fn_800EC7F0_00000DFC
    subf r4, r5, r9
    b lbl_fn_800EC7F0_00000E08
lbl_fn_800EC7F0_00000DFC:
    addi r9, r9, 0x1
    bdnz lbl_fn_800EC7F0_00000DE4
lbl_fn_800EC7F0_00000E04:
    li r4, -0x1
lbl_fn_800EC7F0_00000E08:
    subfic r5, r4, -0x1
    addi r4, r4, 0x1
    or r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_800EC7F0_00000E78
lbl_fn_800EC7F0_00000E1C:
    lbz r4, 0x19(r28)
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000E74
    cmplwi r7, 0xff
    li r4, 0x1
    bgt lbl_fn_800EC7F0_00000E38
    li r4, 0x0
lbl_fn_800EC7F0_00000E38:
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000E48
    li r5, 0x0
    b lbl_fn_800EC7F0_00000E64
lbl_fn_800EC7F0_00000E48:
    lis r5, lbl_807BB380@ha
    slwi r4, r7, 1
    addi r5, r5, lbl_807BB380@l
    lwz r5, 0x38(r5)
    lwz r5, 0x8(r5)
    lhzx r4, r5, r4
    rlwinm r5, r4, 0, 23, 23
lbl_fn_800EC7F0_00000E64:
    neg r4, r5
    or r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_800EC7F0_00000E78
lbl_fn_800EC7F0_00000E74:
    li r4, 0x0
lbl_fn_800EC7F0_00000E78:
    cmpwi r4, 0x0
    beq lbl_fn_800EC7F0_00000E8C
    li r0, 0x1
    stb r0, 0x20(r28)
    b lbl_fn_800EC7F0_000011CC
lbl_fn_800EC7F0_00000E8C:
    lwz r4, 0xc(r28)
    extsb r5, r3
    srwi. r4, r4, 31
    bne lbl_fn_800EC7F0_00000EA8
    lbz r3, 0xc(r28)
    clrlwi r3, r3, 25
    b lbl_fn_800EC7F0_00000EAC
lbl_fn_800EC7F0_00000EA8:
    lwz r3, 0x10(r28)
lbl_fn_800EC7F0_00000EAC:
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_00000F2C
    cmpwi r4, 0x0
    bne lbl_fn_800EC7F0_00000ECC
    lbz r3, 0xc(r28)
    addi r4, r28, 0xd
    clrlwi r3, r3, 25
    b lbl_fn_800EC7F0_00000ED4
lbl_fn_800EC7F0_00000ECC:
    lwz r4, 0x14(r28)
    lwz r3, 0x10(r28)
lbl_fn_800EC7F0_00000ED4:
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_00000F14
    add r7, r4, r3
    mr r8, r4
    subf r3, r4, r7
    mtctr r3
    cmplw r4, r7
    bge lbl_fn_800EC7F0_00000F14
lbl_fn_800EC7F0_00000EF4:
    lbz r3, 0x0(r8)
    extsb r3, r3
    cmpw r5, r3
    bne lbl_fn_800EC7F0_00000F0C
    subf r3, r4, r8
    b lbl_fn_800EC7F0_00000F18
lbl_fn_800EC7F0_00000F0C:
    addi r8, r8, 0x1
    bdnz lbl_fn_800EC7F0_00000EF4
lbl_fn_800EC7F0_00000F14:
    li r3, -0x1
lbl_fn_800EC7F0_00000F18:
    subfic r4, r3, -0x1
    addi r3, r3, 0x1
    or r3, r4, r3
    srwi r3, r3, 31
    b lbl_fn_800EC7F0_00000F88
lbl_fn_800EC7F0_00000F2C:
    lbz r3, 0x19(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_00000F84
    cmplwi r5, 0xff
    li r3, 0x1
    bgt lbl_fn_800EC7F0_00000F48
    li r3, 0x0
lbl_fn_800EC7F0_00000F48:
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_00000F58
    li r4, 0x0
    b lbl_fn_800EC7F0_00000F74
lbl_fn_800EC7F0_00000F58:
    lis r4, lbl_807BB380@ha
    slwi r3, r5, 1
    addi r4, r4, lbl_807BB380@l
    lwz r4, 0x38(r4)
    lwz r4, 0x8(r4)
    lhzx r3, r4, r3
    rlwinm r4, r3, 0, 23, 23
lbl_fn_800EC7F0_00000F74:
    neg r3, r4
    or r3, r3, r4
    srwi r3, r3, 31
    b lbl_fn_800EC7F0_00000F88
lbl_fn_800EC7F0_00000F84:
    li r3, 0x0
lbl_fn_800EC7F0_00000F88:
    cmpwi r3, 0x0
    beq lbl_fn_800EC7F0_00000F9C
    lwz r3, 0x24(r28)
    addi r6, r3, 0x1
    stw r6, 0x24(r28)
lbl_fn_800EC7F0_00000F9C:
    lis r5, lbl_807BB380@ha
    addi r3, r28, 0xd
    addi r4, r28, 0x1
    addi r8, r5, lbl_807BB380@l
    b lbl_fn_800EC7F0_00000FBC
lbl_fn_800EC7F0_00000FB0:
    lwz r5, 0x24(r28)
    addi r5, r5, 0x1
    stw r5, 0x24(r28)
lbl_fn_800EC7F0_00000FBC:
    lwz r5, 0x24(r28)
    cmplw r5, r0
    beq lbl_fn_800EC7F0_000011C4
    lwz r7, 0xc(r28)
    lbz r5, 0x0(r5)
    srwi. r9, r7, 31
    extsb r10, r5
    bne lbl_fn_800EC7F0_00000FE8
    lbz r7, 0xc(r28)
    clrlwi r7, r7, 25
    b lbl_fn_800EC7F0_00000FEC
lbl_fn_800EC7F0_00000FE8:
    lwz r7, 0x10(r28)
lbl_fn_800EC7F0_00000FEC:
    cmpwi r7, 0x0
    beq lbl_fn_800EC7F0_0000106C
    cmpwi r9, 0x0
    bne lbl_fn_800EC7F0_0000100C
    lbz r7, 0xc(r28)
    mr r9, r3
    clrlwi r7, r7, 25
    b lbl_fn_800EC7F0_00001014
lbl_fn_800EC7F0_0000100C:
    lwz r9, 0x14(r28)
    lwz r7, 0x10(r28)
lbl_fn_800EC7F0_00001014:
    cmpwi r7, 0x0
    beq lbl_fn_800EC7F0_00001054
    add r11, r9, r7
    mr r12, r9
    subf r7, r9, r11
    mtctr r7
    cmplw r9, r11
    bge lbl_fn_800EC7F0_00001054
lbl_fn_800EC7F0_00001034:
    lbz r7, 0x0(r12)
    extsb r7, r7
    cmpw r10, r7
    bne lbl_fn_800EC7F0_0000104C
    subf r7, r9, r12
    b lbl_fn_800EC7F0_00001058
lbl_fn_800EC7F0_0000104C:
    addi r12, r12, 0x1
    bdnz lbl_fn_800EC7F0_00001034
lbl_fn_800EC7F0_00001054:
    li r7, -0x1
lbl_fn_800EC7F0_00001058:
    subfic r9, r7, -0x1
    addi r7, r7, 0x1
    or r7, r9, r7
    srwi r7, r7, 31
    b lbl_fn_800EC7F0_000010C0
lbl_fn_800EC7F0_0000106C:
    lbz r7, 0x19(r28)
    cmpwi r7, 0x0
    beq lbl_fn_800EC7F0_000010BC
    cmplwi r10, 0xff
    li r7, 0x1
    bgt lbl_fn_800EC7F0_00001088
    li r7, 0x0
lbl_fn_800EC7F0_00001088:
    cmpwi r7, 0x0
    beq lbl_fn_800EC7F0_00001098
    li r9, 0x0
    b lbl_fn_800EC7F0_000010AC
lbl_fn_800EC7F0_00001098:
    lwz r9, 0x38(r8)
    slwi r7, r10, 1
    lwz r9, 0x8(r9)
    lhzx r7, r9, r7
    rlwinm r9, r7, 0, 23, 23
lbl_fn_800EC7F0_000010AC:
    neg r7, r9
    or r7, r7, r9
    srwi r7, r7, 31
    b lbl_fn_800EC7F0_000010C0
lbl_fn_800EC7F0_000010BC:
    li r7, 0x0
lbl_fn_800EC7F0_000010C0:
    cmpwi r7, 0x0
    bne lbl_fn_800EC7F0_000011C4
    lwz r7, 0x0(r28)
    extsb r9, r5
    srwi. r7, r7, 31
    bne lbl_fn_800EC7F0_000010E4
    lbz r5, 0x0(r28)
    clrlwi r5, r5, 25
    b lbl_fn_800EC7F0_000010E8
lbl_fn_800EC7F0_000010E4:
    lwz r5, 0x4(r28)
lbl_fn_800EC7F0_000010E8:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00001168
    cmpwi r7, 0x0
    bne lbl_fn_800EC7F0_00001108
    lbz r5, 0x0(r28)
    mr r7, r4
    clrlwi r5, r5, 25
    b lbl_fn_800EC7F0_00001110
lbl_fn_800EC7F0_00001108:
    lwz r7, 0x8(r28)
    lwz r5, 0x4(r28)
lbl_fn_800EC7F0_00001110:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00001150
    add r10, r7, r5
    mr r11, r7
    subf r5, r7, r10
    mtctr r5
    cmplw r7, r10
    bge lbl_fn_800EC7F0_00001150
lbl_fn_800EC7F0_00001130:
    lbz r5, 0x0(r11)
    extsb r5, r5
    cmpw r9, r5
    bne lbl_fn_800EC7F0_00001148
    subf r5, r7, r11
    b lbl_fn_800EC7F0_00001154
lbl_fn_800EC7F0_00001148:
    addi r11, r11, 0x1
    bdnz lbl_fn_800EC7F0_00001130
lbl_fn_800EC7F0_00001150:
    li r5, -0x1
lbl_fn_800EC7F0_00001154:
    subfic r7, r5, -0x1
    addi r5, r5, 0x1
    or r5, r7, r5
    srwi r5, r5, 31
    b lbl_fn_800EC7F0_000011BC
lbl_fn_800EC7F0_00001168:
    lbz r5, 0x18(r28)
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_000011B8
    cmplwi r9, 0xff
    li r5, 0x1
    bgt lbl_fn_800EC7F0_00001184
    li r5, 0x0
lbl_fn_800EC7F0_00001184:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00001194
    li r7, 0x0
    b lbl_fn_800EC7F0_000011A8
lbl_fn_800EC7F0_00001194:
    lwz r7, 0x38(r8)
    slwi r5, r9, 1
    lwz r7, 0x8(r7)
    lhzx r5, r7, r5
    rlwinm r7, r5, 0, 24, 24
lbl_fn_800EC7F0_000011A8:
    neg r5, r7
    or r5, r5, r7
    srwi r5, r5, 31
    b lbl_fn_800EC7F0_000011BC
lbl_fn_800EC7F0_000011B8:
    li r5, 0x0
lbl_fn_800EC7F0_000011BC:
    cmpwi r5, 0x0
    beq lbl_fn_800EC7F0_00000FB0
lbl_fn_800EC7F0_000011C4:
    li r0, 0x1
    stb r0, 0x20(r28)
lbl_fn_800EC7F0_000011CC:
    lwz r0, 0x30(r28)
    lwz r7, 0x24(r28)
    srwi. r0, r0, 31
    bne lbl_fn_800EC7F0_000011E8
    lbz r0, 0x30(r28)
    clrlwi r5, r0, 25
    b lbl_fn_800EC7F0_000011EC
lbl_fn_800EC7F0_000011E8:
    lwz r5, 0x34(r28)
lbl_fn_800EC7F0_000011EC:
    lbz r0, 0x8(r1)
    addi r3, r28, 0x30
    stb r0, 0xc(r1)
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
    li r0, 0x1
    b lbl_fn_800EC7F0_00001210
lbl_fn_800EC7F0_0000120C:
    li r0, 0x0
lbl_fn_800EC7F0_00001210:
    stb r0, 0x2c(r28)
    mr r3, r28
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800ED42C(void)
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
    beq lbl_fn_800ED42C_000012C8
    addic. r0, r3, 0x30
    beq lbl_fn_800ED42C_00001278
    lwz r0, 0x30(r3)
    srwi. r0, r0, 31
    beq lbl_fn_800ED42C_00001278
    lwz r3, 0x38(r3)
    bl dtor_80084684
lbl_fn_800ED42C_00001278:
    cmpwi r30, 0x0
    beq lbl_fn_800ED42C_000012B8
    addic. r0, r30, 0xc
    beq lbl_fn_800ED42C_0000129C
    lwz r0, 0xc(r30)
    srwi. r0, r0, 31
    beq lbl_fn_800ED42C_0000129C
    lwz r3, 0x14(r30)
    bl dtor_80084684
lbl_fn_800ED42C_0000129C:
    cmpwi r30, 0x0
    beq lbl_fn_800ED42C_000012B8
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_800ED42C_000012B8
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_800ED42C_000012B8:
    cmpwi r31, 0x0
    ble lbl_fn_800ED42C_000012C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_800ED42C_000012C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800ED4D8(void)
{
    nofralloc
    addi r3, r3, 0x30
    blr
}

asm void fn_800ED4E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x1c(r3)
    lwz r8, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800ED4E0_0000143C
    lis r6, lbl_807BB380@ha
    addi r0, r3, 0xd
    addi r6, r6, lbl_807BB380@l
    b lbl_fn_800ED4E0_00001330
lbl_fn_800ED4E0_00001324:
    lwz r4, 0x24(r3)
    addi r4, r4, 0x1
    stw r4, 0x24(r3)
lbl_fn_800ED4E0_00001330:
    lwz r5, 0x24(r3)
    cmplw r5, r8
    beq lbl_fn_800ED4E0_0000143C
    lwz r4, 0xc(r3)
    lbz r7, 0x0(r5)
    srwi. r5, r4, 31
    extsb r10, r7
    bne lbl_fn_800ED4E0_0000135C
    lbz r4, 0xc(r3)
    clrlwi r4, r4, 25
    b lbl_fn_800ED4E0_00001360
lbl_fn_800ED4E0_0000135C:
    lwz r4, 0x10(r3)
lbl_fn_800ED4E0_00001360:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_000013E0
    cmpwi r5, 0x0
    bne lbl_fn_800ED4E0_00001380
    lbz r4, 0xc(r3)
    mr r9, r0
    clrlwi r4, r4, 25
    b lbl_fn_800ED4E0_00001388
lbl_fn_800ED4E0_00001380:
    lwz r9, 0x14(r3)
    lwz r4, 0x10(r3)
lbl_fn_800ED4E0_00001388:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_000013C8
    add r7, r9, r4
    mr r5, r9
    subf r4, r9, r7
    mtctr r4
    cmplw r9, r7
    bge lbl_fn_800ED4E0_000013C8
lbl_fn_800ED4E0_000013A8:
    lbz r4, 0x0(r5)
    extsb r4, r4
    cmpw r10, r4
    bne lbl_fn_800ED4E0_000013C0
    subf r4, r9, r5
    b lbl_fn_800ED4E0_000013CC
lbl_fn_800ED4E0_000013C0:
    addi r5, r5, 0x1
    bdnz lbl_fn_800ED4E0_000013A8
lbl_fn_800ED4E0_000013C8:
    li r4, -0x1
lbl_fn_800ED4E0_000013CC:
    subfic r5, r4, -0x1
    addi r4, r4, 0x1
    or r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_800ED4E0_00001434
lbl_fn_800ED4E0_000013E0:
    lbz r4, 0x19(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_00001430
    cmplwi r10, 0xff
    li r4, 0x1
    bgt lbl_fn_800ED4E0_000013FC
    li r4, 0x0
lbl_fn_800ED4E0_000013FC:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_0000140C
    li r5, 0x0
    b lbl_fn_800ED4E0_00001420
lbl_fn_800ED4E0_0000140C:
    lwz r5, 0x38(r6)
    slwi r4, r10, 1
    lwz r5, 0x8(r5)
    lhzx r4, r5, r4
    rlwinm r5, r4, 0, 23, 23
lbl_fn_800ED4E0_00001420:
    neg r4, r5
    or r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_800ED4E0_00001434
lbl_fn_800ED4E0_00001430:
    li r4, 0x0
lbl_fn_800ED4E0_00001434:
    cmpwi r4, 0x0
    bne lbl_fn_800ED4E0_00001324
lbl_fn_800ED4E0_0000143C:
    lwz r0, 0x1c(r3)
    lwz r6, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800ED4E0_000017A0
    cmplw r6, r8
    bne lbl_fn_800ED4E0_0000145C
    li r0, 0x0
    b lbl_fn_800ED4E0_00001DD4
lbl_fn_800ED4E0_0000145C:
    lwz r0, 0x0(r3)
    lbz r5, 0x0(r6)
    srwi. r4, r0, 31
    extsb r9, r5
    bne lbl_fn_800ED4E0_0000147C
    lbz r0, 0x0(r3)
    clrlwi r0, r0, 25
    b lbl_fn_800ED4E0_00001480
lbl_fn_800ED4E0_0000147C:
    lwz r0, 0x4(r3)
lbl_fn_800ED4E0_00001480:
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_00001500
    cmpwi r4, 0x0
    bne lbl_fn_800ED4E0_000014A0
    lbz r0, 0x0(r3)
    addi r7, r3, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_800ED4E0_000014A8
lbl_fn_800ED4E0_000014A0:
    lwz r7, 0x8(r3)
    lwz r0, 0x4(r3)
lbl_fn_800ED4E0_000014A8:
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_000014E8
    add r5, r7, r0
    mr r4, r7
    subf r0, r7, r5
    mtctr r0
    cmplw r7, r5
    bge lbl_fn_800ED4E0_000014E8
lbl_fn_800ED4E0_000014C8:
    lbz r0, 0x0(r4)
    extsb r0, r0
    cmpw r9, r0
    bne lbl_fn_800ED4E0_000014E0
    subf r5, r7, r4
    b lbl_fn_800ED4E0_000014EC
lbl_fn_800ED4E0_000014E0:
    addi r4, r4, 0x1
    bdnz lbl_fn_800ED4E0_000014C8
lbl_fn_800ED4E0_000014E8:
    li r5, -0x1
lbl_fn_800ED4E0_000014EC:
    subfic r4, r5, -0x1
    addi r0, r5, 0x1
    or r0, r4, r0
    srwi r0, r0, 31
    b lbl_fn_800ED4E0_0000155C
lbl_fn_800ED4E0_00001500:
    lbz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_00001558
    cmplwi r9, 0xff
    li r0, 0x1
    bgt lbl_fn_800ED4E0_0000151C
    li r0, 0x0
lbl_fn_800ED4E0_0000151C:
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_0000152C
    li r4, 0x0
    b lbl_fn_800ED4E0_00001548
lbl_fn_800ED4E0_0000152C:
    lis r4, lbl_807BB380@ha
    slwi r0, r9, 1
    addi r4, r4, lbl_807BB380@l
    lwz r4, 0x38(r4)
    lwz r4, 0x8(r4)
    lhzx r0, r4, r0
    rlwinm r4, r0, 0, 24, 24
lbl_fn_800ED4E0_00001548:
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_800ED4E0_0000155C
lbl_fn_800ED4E0_00001558:
    li r0, 0x0
lbl_fn_800ED4E0_0000155C:
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_00001574
    lwz r4, 0x24(r3)
    addi r0, r4, 0x1
    stw r0, 0x24(r3)
    b lbl_fn_800ED4E0_00001D98
lbl_fn_800ED4E0_00001574:
    lis r5, lbl_807BB380@ha
    addi r0, r3, 0xd
    addi r4, r3, 0x1
    addi r9, r5, lbl_807BB380@l
    b lbl_fn_800ED4E0_00001594
lbl_fn_800ED4E0_00001588:
    lwz r5, 0x24(r3)
    addi r5, r5, 0x1
    stw r5, 0x24(r3)
lbl_fn_800ED4E0_00001594:
    lwz r5, 0x24(r3)
    cmplw r5, r8
    beq lbl_fn_800ED4E0_00001D98
    lwz r7, 0xc(r3)
    lbz r5, 0x0(r5)
    srwi. r10, r7, 31
    extsb r30, r5
    bne lbl_fn_800ED4E0_000015C0
    lbz r7, 0xc(r3)
    clrlwi r7, r7, 25
    b lbl_fn_800ED4E0_000015C4
lbl_fn_800ED4E0_000015C0:
    lwz r7, 0x10(r3)
lbl_fn_800ED4E0_000015C4:
    cmpwi r7, 0x0
    beq lbl_fn_800ED4E0_00001644
    cmpwi r10, 0x0
    bne lbl_fn_800ED4E0_000015E4
    lbz r7, 0xc(r3)
    mr r12, r0
    clrlwi r7, r7, 25
    b lbl_fn_800ED4E0_000015EC
lbl_fn_800ED4E0_000015E4:
    lwz r12, 0x14(r3)
    lwz r7, 0x10(r3)
lbl_fn_800ED4E0_000015EC:
    cmpwi r7, 0x0
    beq lbl_fn_800ED4E0_0000162C
    add r11, r12, r7
    mr r10, r12
    subf r7, r12, r11
    mtctr r7
    cmplw r12, r11
    bge lbl_fn_800ED4E0_0000162C
lbl_fn_800ED4E0_0000160C:
    lbz r7, 0x0(r10)
    extsb r7, r7
    cmpw r30, r7
    bne lbl_fn_800ED4E0_00001624
    subf r7, r12, r10
    b lbl_fn_800ED4E0_00001630
lbl_fn_800ED4E0_00001624:
    addi r10, r10, 0x1
    bdnz lbl_fn_800ED4E0_0000160C
lbl_fn_800ED4E0_0000162C:
    li r7, -0x1
lbl_fn_800ED4E0_00001630:
    subfic r10, r7, -0x1
    addi r7, r7, 0x1
    or r7, r10, r7
    srwi r7, r7, 31
    b lbl_fn_800ED4E0_00001698
lbl_fn_800ED4E0_00001644:
    lbz r7, 0x19(r3)
    cmpwi r7, 0x0
    beq lbl_fn_800ED4E0_00001694
    cmplwi r30, 0xff
    li r7, 0x1
    bgt lbl_fn_800ED4E0_00001660
    li r7, 0x0
lbl_fn_800ED4E0_00001660:
    cmpwi r7, 0x0
    beq lbl_fn_800ED4E0_00001670
    li r10, 0x0
    b lbl_fn_800ED4E0_00001684
lbl_fn_800ED4E0_00001670:
    lwz r10, 0x38(r9)
    slwi r7, r30, 1
    lwz r10, 0x8(r10)
    lhzx r7, r10, r7
    rlwinm r10, r7, 0, 23, 23
lbl_fn_800ED4E0_00001684:
    neg r7, r10
    or r7, r7, r10
    srwi r7, r7, 31
    b lbl_fn_800ED4E0_00001698
lbl_fn_800ED4E0_00001694:
    li r7, 0x0
lbl_fn_800ED4E0_00001698:
    cmpwi r7, 0x0
    bne lbl_fn_800ED4E0_00001D98
    lwz r7, 0x0(r3)
    extsb r12, r5
    srwi. r7, r7, 31
    bne lbl_fn_800ED4E0_000016BC
    lbz r5, 0x0(r3)
    clrlwi r5, r5, 25
    b lbl_fn_800ED4E0_000016C0
lbl_fn_800ED4E0_000016BC:
    lwz r5, 0x4(r3)
lbl_fn_800ED4E0_000016C0:
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001740
    cmpwi r7, 0x0
    bne lbl_fn_800ED4E0_000016E0
    lbz r5, 0x0(r3)
    mr r11, r4
    clrlwi r5, r5, 25
    b lbl_fn_800ED4E0_000016E8
lbl_fn_800ED4E0_000016E0:
    lwz r11, 0x8(r3)
    lwz r5, 0x4(r3)
lbl_fn_800ED4E0_000016E8:
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001728
    add r10, r11, r5
    mr r7, r11
    subf r5, r11, r10
    mtctr r5
    cmplw r11, r10
    bge lbl_fn_800ED4E0_00001728
lbl_fn_800ED4E0_00001708:
    lbz r5, 0x0(r7)
    extsb r5, r5
    cmpw r12, r5
    bne lbl_fn_800ED4E0_00001720
    subf r5, r11, r7
    b lbl_fn_800ED4E0_0000172C
lbl_fn_800ED4E0_00001720:
    addi r7, r7, 0x1
    bdnz lbl_fn_800ED4E0_00001708
lbl_fn_800ED4E0_00001728:
    li r5, -0x1
lbl_fn_800ED4E0_0000172C:
    subfic r7, r5, -0x1
    addi r5, r5, 0x1
    or r5, r7, r5
    srwi r5, r5, 31
    b lbl_fn_800ED4E0_00001794
lbl_fn_800ED4E0_00001740:
    lbz r5, 0x18(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001790
    cmplwi r12, 0xff
    li r5, 0x1
    bgt lbl_fn_800ED4E0_0000175C
    li r5, 0x0
lbl_fn_800ED4E0_0000175C:
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_0000176C
    li r7, 0x0
    b lbl_fn_800ED4E0_00001780
lbl_fn_800ED4E0_0000176C:
    lwz r7, 0x38(r9)
    slwi r5, r12, 1
    lwz r7, 0x8(r7)
    lhzx r5, r7, r5
    rlwinm r7, r5, 0, 24, 24
lbl_fn_800ED4E0_00001780:
    neg r5, r7
    or r5, r5, r7
    srwi r5, r5, 31
    b lbl_fn_800ED4E0_00001794
lbl_fn_800ED4E0_00001790:
    li r5, 0x0
lbl_fn_800ED4E0_00001794:
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001588
    b lbl_fn_800ED4E0_00001D98
lbl_fn_800ED4E0_000017A0:
    cmplw r6, r8
    bne lbl_fn_800ED4E0_00001804
    lbz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800ED4E0_000017FC
    lwz r0, 0x30(r3)
    li r4, 0x1
    stb r4, 0x20(r3)
    mr r7, r6
    srwi. r0, r0, 31
    bne lbl_fn_800ED4E0_000017D8
    lbz r0, 0x30(r3)
    clrlwi r5, r0, 25
    b lbl_fn_800ED4E0_000017DC
lbl_fn_800ED4E0_000017D8:
    lwz r5, 0x34(r3)
lbl_fn_800ED4E0_000017DC:
    lbz r0, 0xc(r1)
    addi r8, r1, 0x8
    stb r0, 0x8(r1)
    li r4, 0x0
    addi r3, r3, 0x30
    bl fn_80013F78
    li r0, 0x1
    b lbl_fn_800ED4E0_00001DD4
lbl_fn_800ED4E0_000017FC:
    li r0, 0x0
    b lbl_fn_800ED4E0_00001DD4
lbl_fn_800ED4E0_00001804:
    lwz r4, 0x0(r3)
    lbz r0, 0x0(r6)
    srwi. r5, r4, 31
    extsb r10, r0
    bne lbl_fn_800ED4E0_00001824
    lbz r4, 0x0(r3)
    clrlwi r4, r4, 25
    b lbl_fn_800ED4E0_00001828
lbl_fn_800ED4E0_00001824:
    lwz r4, 0x4(r3)
lbl_fn_800ED4E0_00001828:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_000018A8
    cmpwi r5, 0x0
    bne lbl_fn_800ED4E0_00001848
    lbz r4, 0x0(r3)
    addi r9, r3, 0x1
    clrlwi r4, r4, 25
    b lbl_fn_800ED4E0_00001850
lbl_fn_800ED4E0_00001848:
    lwz r9, 0x8(r3)
    lwz r4, 0x4(r3)
lbl_fn_800ED4E0_00001850:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_00001890
    add r7, r9, r4
    mr r5, r9
    subf r4, r9, r7
    mtctr r4
    cmplw r9, r7
    bge lbl_fn_800ED4E0_00001890
lbl_fn_800ED4E0_00001870:
    lbz r4, 0x0(r5)
    extsb r4, r4
    cmpw r10, r4
    bne lbl_fn_800ED4E0_00001888
    subf r4, r9, r5
    b lbl_fn_800ED4E0_00001894
lbl_fn_800ED4E0_00001888:
    addi r5, r5, 0x1
    bdnz lbl_fn_800ED4E0_00001870
lbl_fn_800ED4E0_00001890:
    li r4, -0x1
lbl_fn_800ED4E0_00001894:
    subfic r5, r4, -0x1
    addi r4, r4, 0x1
    or r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_800ED4E0_00001904
lbl_fn_800ED4E0_000018A8:
    lbz r4, 0x18(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_00001900
    cmplwi r10, 0xff
    li r4, 0x1
    bgt lbl_fn_800ED4E0_000018C4
    li r4, 0x0
lbl_fn_800ED4E0_000018C4:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_000018D4
    li r5, 0x0
    b lbl_fn_800ED4E0_000018F0
lbl_fn_800ED4E0_000018D4:
    lis r5, lbl_807BB380@ha
    slwi r4, r10, 1
    addi r5, r5, lbl_807BB380@l
    lwz r5, 0x38(r5)
    lwz r5, 0x8(r5)
    lhzx r4, r5, r4
    rlwinm r5, r4, 0, 24, 24
lbl_fn_800ED4E0_000018F0:
    neg r4, r5
    or r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_800ED4E0_00001904
lbl_fn_800ED4E0_00001900:
    li r4, 0x0
lbl_fn_800ED4E0_00001904:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_0000193C
    lbz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800ED4E0_00001924
    li r0, 0x1
    stb r0, 0x20(r3)
    b lbl_fn_800ED4E0_00001D98
lbl_fn_800ED4E0_00001924:
    lwz r4, 0x24(r3)
    li r0, 0x0
    stb r0, 0x20(r3)
    addi r0, r4, 0x1
    stw r0, 0x24(r3)
    b lbl_fn_800ED4E0_00001D98
lbl_fn_800ED4E0_0000193C:
    lbz r4, 0x20(r3)
    cmpwi r4, 0x0
    bne lbl_fn_800ED4E0_00001A58
    lwz r4, 0xc(r3)
    extsb r10, r0
    srwi. r5, r4, 31
    bne lbl_fn_800ED4E0_00001964
    lbz r4, 0xc(r3)
    clrlwi r4, r4, 25
    b lbl_fn_800ED4E0_00001968
lbl_fn_800ED4E0_00001964:
    lwz r4, 0x10(r3)
lbl_fn_800ED4E0_00001968:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_000019E8
    cmpwi r5, 0x0
    bne lbl_fn_800ED4E0_00001988
    lbz r4, 0xc(r3)
    addi r9, r3, 0xd
    clrlwi r4, r4, 25
    b lbl_fn_800ED4E0_00001990
lbl_fn_800ED4E0_00001988:
    lwz r9, 0x14(r3)
    lwz r4, 0x10(r3)
lbl_fn_800ED4E0_00001990:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_000019D0
    add r7, r9, r4
    mr r5, r9
    subf r4, r9, r7
    mtctr r4
    cmplw r9, r7
    bge lbl_fn_800ED4E0_000019D0
lbl_fn_800ED4E0_000019B0:
    lbz r4, 0x0(r5)
    extsb r4, r4
    cmpw r10, r4
    bne lbl_fn_800ED4E0_000019C8
    subf r4, r9, r5
    b lbl_fn_800ED4E0_000019D4
lbl_fn_800ED4E0_000019C8:
    addi r5, r5, 0x1
    bdnz lbl_fn_800ED4E0_000019B0
lbl_fn_800ED4E0_000019D0:
    li r4, -0x1
lbl_fn_800ED4E0_000019D4:
    subfic r5, r4, -0x1
    addi r4, r4, 0x1
    or r4, r5, r4
    srwi r4, r4, 31
    b lbl_fn_800ED4E0_00001A44
lbl_fn_800ED4E0_000019E8:
    lbz r4, 0x19(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_00001A40
    cmplwi r10, 0xff
    li r4, 0x1
    bgt lbl_fn_800ED4E0_00001A04
    li r4, 0x0
lbl_fn_800ED4E0_00001A04:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_00001A14
    li r5, 0x0
    b lbl_fn_800ED4E0_00001A30
lbl_fn_800ED4E0_00001A14:
    lis r5, lbl_807BB380@ha
    slwi r4, r10, 1
    addi r5, r5, lbl_807BB380@l
    lwz r5, 0x38(r5)
    lwz r5, 0x8(r5)
    lhzx r4, r5, r4
    rlwinm r5, r4, 0, 23, 23
lbl_fn_800ED4E0_00001A30:
    neg r4, r5
    or r4, r4, r5
    srwi r4, r4, 31
    b lbl_fn_800ED4E0_00001A44
lbl_fn_800ED4E0_00001A40:
    li r4, 0x0
lbl_fn_800ED4E0_00001A44:
    cmpwi r4, 0x0
    beq lbl_fn_800ED4E0_00001A58
    li r0, 0x1
    stb r0, 0x20(r3)
    b lbl_fn_800ED4E0_00001D98
lbl_fn_800ED4E0_00001A58:
    lwz r4, 0xc(r3)
    extsb r9, r0
    srwi. r4, r4, 31
    bne lbl_fn_800ED4E0_00001A74
    lbz r0, 0xc(r3)
    clrlwi r0, r0, 25
    b lbl_fn_800ED4E0_00001A78
lbl_fn_800ED4E0_00001A74:
    lwz r0, 0x10(r3)
lbl_fn_800ED4E0_00001A78:
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_00001AF8
    cmpwi r4, 0x0
    bne lbl_fn_800ED4E0_00001A98
    lbz r0, 0xc(r3)
    addi r7, r3, 0xd
    clrlwi r0, r0, 25
    b lbl_fn_800ED4E0_00001AA0
lbl_fn_800ED4E0_00001A98:
    lwz r7, 0x14(r3)
    lwz r0, 0x10(r3)
lbl_fn_800ED4E0_00001AA0:
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_00001AE0
    add r5, r7, r0
    mr r4, r7
    subf r0, r7, r5
    mtctr r0
    cmplw r7, r5
    bge lbl_fn_800ED4E0_00001AE0
lbl_fn_800ED4E0_00001AC0:
    lbz r0, 0x0(r4)
    extsb r0, r0
    cmpw r9, r0
    bne lbl_fn_800ED4E0_00001AD8
    subf r5, r7, r4
    b lbl_fn_800ED4E0_00001AE4
lbl_fn_800ED4E0_00001AD8:
    addi r4, r4, 0x1
    bdnz lbl_fn_800ED4E0_00001AC0
lbl_fn_800ED4E0_00001AE0:
    li r5, -0x1
lbl_fn_800ED4E0_00001AE4:
    subfic r4, r5, -0x1
    addi r0, r5, 0x1
    or r0, r4, r0
    srwi r0, r0, 31
    b lbl_fn_800ED4E0_00001B54
lbl_fn_800ED4E0_00001AF8:
    lbz r0, 0x19(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_00001B50
    cmplwi r9, 0xff
    li r0, 0x1
    bgt lbl_fn_800ED4E0_00001B14
    li r0, 0x0
lbl_fn_800ED4E0_00001B14:
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_00001B24
    li r4, 0x0
    b lbl_fn_800ED4E0_00001B40
lbl_fn_800ED4E0_00001B24:
    lis r4, lbl_807BB380@ha
    slwi r0, r9, 1
    addi r4, r4, lbl_807BB380@l
    lwz r4, 0x38(r4)
    lwz r4, 0x8(r4)
    lhzx r0, r4, r0
    rlwinm r4, r0, 0, 23, 23
lbl_fn_800ED4E0_00001B40:
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_800ED4E0_00001B54
lbl_fn_800ED4E0_00001B50:
    li r0, 0x0
lbl_fn_800ED4E0_00001B54:
    cmpwi r0, 0x0
    beq lbl_fn_800ED4E0_00001B68
    lwz r4, 0x24(r3)
    addi r6, r4, 0x1
    stw r6, 0x24(r3)
lbl_fn_800ED4E0_00001B68:
    lis r5, lbl_807BB380@ha
    addi r0, r3, 0xd
    addi r4, r3, 0x1
    addi r9, r5, lbl_807BB380@l
    b lbl_fn_800ED4E0_00001B88
lbl_fn_800ED4E0_00001B7C:
    lwz r5, 0x24(r3)
    addi r5, r5, 0x1
    stw r5, 0x24(r3)
lbl_fn_800ED4E0_00001B88:
    lwz r5, 0x24(r3)
    cmplw r5, r8
    beq lbl_fn_800ED4E0_00001D90
    lwz r7, 0xc(r3)
    lbz r5, 0x0(r5)
    srwi. r10, r7, 31
    extsb r30, r5
    bne lbl_fn_800ED4E0_00001BB4
    lbz r7, 0xc(r3)
    clrlwi r7, r7, 25
    b lbl_fn_800ED4E0_00001BB8
lbl_fn_800ED4E0_00001BB4:
    lwz r7, 0x10(r3)
lbl_fn_800ED4E0_00001BB8:
    cmpwi r7, 0x0
    beq lbl_fn_800ED4E0_00001C38
    cmpwi r10, 0x0
    bne lbl_fn_800ED4E0_00001BD8
    lbz r7, 0xc(r3)
    mr r12, r0
    clrlwi r7, r7, 25
    b lbl_fn_800ED4E0_00001BE0
lbl_fn_800ED4E0_00001BD8:
    lwz r12, 0x14(r3)
    lwz r7, 0x10(r3)
lbl_fn_800ED4E0_00001BE0:
    cmpwi r7, 0x0
    beq lbl_fn_800ED4E0_00001C20
    add r11, r12, r7
    mr r10, r12
    subf r7, r12, r11
    mtctr r7
    cmplw r12, r11
    bge lbl_fn_800ED4E0_00001C20
lbl_fn_800ED4E0_00001C00:
    lbz r7, 0x0(r10)
    extsb r7, r7
    cmpw r30, r7
    bne lbl_fn_800ED4E0_00001C18
    subf r7, r12, r10
    b lbl_fn_800ED4E0_00001C24
lbl_fn_800ED4E0_00001C18:
    addi r10, r10, 0x1
    bdnz lbl_fn_800ED4E0_00001C00
lbl_fn_800ED4E0_00001C20:
    li r7, -0x1
lbl_fn_800ED4E0_00001C24:
    subfic r10, r7, -0x1
    addi r7, r7, 0x1
    or r7, r10, r7
    srwi r7, r7, 31
    b lbl_fn_800ED4E0_00001C8C
lbl_fn_800ED4E0_00001C38:
    lbz r7, 0x19(r3)
    cmpwi r7, 0x0
    beq lbl_fn_800ED4E0_00001C88
    cmplwi r30, 0xff
    li r7, 0x1
    bgt lbl_fn_800ED4E0_00001C54
    li r7, 0x0
lbl_fn_800ED4E0_00001C54:
    cmpwi r7, 0x0
    beq lbl_fn_800ED4E0_00001C64
    li r10, 0x0
    b lbl_fn_800ED4E0_00001C78
lbl_fn_800ED4E0_00001C64:
    lwz r10, 0x38(r9)
    slwi r7, r30, 1
    lwz r10, 0x8(r10)
    lhzx r7, r10, r7
    rlwinm r10, r7, 0, 23, 23
lbl_fn_800ED4E0_00001C78:
    neg r7, r10
    or r7, r7, r10
    srwi r7, r7, 31
    b lbl_fn_800ED4E0_00001C8C
lbl_fn_800ED4E0_00001C88:
    li r7, 0x0
lbl_fn_800ED4E0_00001C8C:
    cmpwi r7, 0x0
    bne lbl_fn_800ED4E0_00001D90
    lwz r7, 0x0(r3)
    extsb r12, r5
    srwi. r7, r7, 31
    bne lbl_fn_800ED4E0_00001CB0
    lbz r5, 0x0(r3)
    clrlwi r5, r5, 25
    b lbl_fn_800ED4E0_00001CB4
lbl_fn_800ED4E0_00001CB0:
    lwz r5, 0x4(r3)
lbl_fn_800ED4E0_00001CB4:
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001D34
    cmpwi r7, 0x0
    bne lbl_fn_800ED4E0_00001CD4
    lbz r5, 0x0(r3)
    mr r11, r4
    clrlwi r5, r5, 25
    b lbl_fn_800ED4E0_00001CDC
lbl_fn_800ED4E0_00001CD4:
    lwz r11, 0x8(r3)
    lwz r5, 0x4(r3)
lbl_fn_800ED4E0_00001CDC:
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001D1C
    add r10, r11, r5
    mr r7, r11
    subf r5, r11, r10
    mtctr r5
    cmplw r11, r10
    bge lbl_fn_800ED4E0_00001D1C
lbl_fn_800ED4E0_00001CFC:
    lbz r5, 0x0(r7)
    extsb r5, r5
    cmpw r12, r5
    bne lbl_fn_800ED4E0_00001D14
    subf r5, r11, r7
    b lbl_fn_800ED4E0_00001D20
lbl_fn_800ED4E0_00001D14:
    addi r7, r7, 0x1
    bdnz lbl_fn_800ED4E0_00001CFC
lbl_fn_800ED4E0_00001D1C:
    li r5, -0x1
lbl_fn_800ED4E0_00001D20:
    subfic r7, r5, -0x1
    addi r5, r5, 0x1
    or r5, r7, r5
    srwi r5, r5, 31
    b lbl_fn_800ED4E0_00001D88
lbl_fn_800ED4E0_00001D34:
    lbz r5, 0x18(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001D84
    cmplwi r12, 0xff
    li r5, 0x1
    bgt lbl_fn_800ED4E0_00001D50
    li r5, 0x0
lbl_fn_800ED4E0_00001D50:
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001D60
    li r7, 0x0
    b lbl_fn_800ED4E0_00001D74
lbl_fn_800ED4E0_00001D60:
    lwz r7, 0x38(r9)
    slwi r5, r12, 1
    lwz r7, 0x8(r7)
    lhzx r5, r7, r5
    rlwinm r7, r5, 0, 24, 24
lbl_fn_800ED4E0_00001D74:
    neg r5, r7
    or r5, r5, r7
    srwi r5, r5, 31
    b lbl_fn_800ED4E0_00001D88
lbl_fn_800ED4E0_00001D84:
    li r5, 0x0
lbl_fn_800ED4E0_00001D88:
    cmpwi r5, 0x0
    beq lbl_fn_800ED4E0_00001B7C
lbl_fn_800ED4E0_00001D90:
    li r0, 0x1
    stb r0, 0x20(r3)
lbl_fn_800ED4E0_00001D98:
    lwz r0, 0x30(r3)
    lwz r7, 0x24(r3)
    srwi. r0, r0, 31
    bne lbl_fn_800ED4E0_00001DB4
    lbz r0, 0x30(r3)
    clrlwi r5, r0, 25
    b lbl_fn_800ED4E0_00001DB8
lbl_fn_800ED4E0_00001DB4:
    lwz r5, 0x34(r3)
lbl_fn_800ED4E0_00001DB8:
    lbz r0, 0x14(r1)
    addi r8, r1, 0x10
    stb r0, 0x10(r1)
    li r4, 0x0
    addi r3, r3, 0x30
    bl fn_80013F78
    li r0, 0x1
lbl_fn_800ED4E0_00001DD4:
    stb r0, 0x2c(r31)
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
