#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8006AC08(void);
extern void fn_8007A994(void);
extern void fn_8007AA64(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D594C(void);
extern void fn_800D59B8(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_80473EFC(void);
extern void fn_80478198(void);
extern void fn_80616250(void);
extern void fn_80616360(void);
extern void fn_8067E23C(void);
extern void fn_80682544(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80777DE0[];
extern u8 jumptable_80777EA8[];
extern u8 jumptable_80777F70[];
extern u8 jumptable_80778038[];
extern u8 jumptable_80778100[];
extern u8 jumptable_807781C8[];
extern u8 jumptable_80778290[];
extern u8 jumptable_80778358[];
extern u8 jumptable_80778420[];
extern u8 lbl_80731B9C[];
extern u8 lbl_80731D38[];
extern u8 lbl_80731D40[];
extern u8 lbl_80777D80[];

/* Small data declarations */
extern u32 lbl_8087D77C;
extern u32 lbl_8087D780;
extern u32 lbl_8087D784;
extern u32 lbl_8087D788;
extern u32 lbl_8087D78C;
extern u32 lbl_8087D790;
extern u32 lbl_8087EF00;
extern u32 lbl_8087EFA8;
extern u32 lbl_80880B84;
extern u32 lbl_80880B88;
extern u32 lbl_80880B8C;
extern u32 lbl_80880B90;
extern u32 lbl_80880B94;
extern u32 lbl_80880B98;
extern u32 lbl_80880B9C;
extern u32 lbl_80880BA0;
extern u32 lbl_80880BB0;

/* Function declarations */
void fn_8007B078(void);
void fn_8007B100(void);
void fn_8007B260(void);
void fn_8007C018(void);
void fn_8007C0D4(void);
void fn_8007C0D8(void);
void fn_8007C144(void);
void fn_8007C3F8(void);

asm void fn_8007B078(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    bl strlen
    lis r29, lbl_80777D80@ha
    mr r31, r3
    addi r29, r29, lbl_80777D80@l
    li r30, 0x0
    b lbl_fn_8007B078_00000060
lbl_fn_8007B078_0000002C:
    mr r3, r28
    bl strlen
    cmpw r3, r31
    bne lbl_fn_8007B078_00000058
    mr r3, r27
    mr r4, r28
    mr r5, r31
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007B078_00000058
    b lbl_fn_8007B078_00000070
lbl_fn_8007B078_00000058:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_8007B078_00000060:
    lwz r28, 0x0(r29)
    cmpwi r28, 0x0
    bne lbl_fn_8007B078_0000002C
    li r30, -0x1
lbl_fn_8007B078_00000070:
    mr r3, r30
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8007B100(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r30, 0x4(r3)
    cmpwi r30, 0x0
    beq lbl_fn_8007B100_000001CC
    lwz r0, 0x28(r30)
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8007B100_000000E0
    mr r3, r30
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8007B100_000000E4
    addi r3, r30, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8007B100_000000E4
lbl_fn_8007B100_000000E0:
    li r31, 0x1
lbl_fn_8007B100_000000E4:
    cmpwi r31, 0x0
    beq lbl_fn_8007B100_000001CC
    lwz r31, 0x4(r29)
    lbz r4, 0x12(r29)
    lbz r5, 0x13(r29)
    mr r3, r31
    extsb r4, r4
    extsb r5, r5
    bl fn_80616360
    lwz r3, 0x4(r29)
    lbz r30, 0x14(r29)
    lwz r0, 0x28(r3)
    lbz r29, 0x15(r29)
    extsb r30, r30
    cmpwi r0, 0x0
    extsb r29, r29
    beq lbl_fn_8007B100_00000134
    lbz r3, 0x2f(r3)
    extsb r3, r3
    b lbl_fn_8007B100_0000013C
lbl_fn_8007B100_00000134:
    addi r3, r3, 0x20
    bl fn_80478198
lbl_fn_8007B100_0000013C:
    subic. r0, r3, 0x1
    ble lbl_fn_8007B100_00000164
    cmpwi r30, 0x0
    beq lbl_fn_8007B100_00000158
    cmpwi r30, 0x1
    beq lbl_fn_8007B100_00000160
    b lbl_fn_8007B100_00000164
lbl_fn_8007B100_00000158:
    li r30, 0x4
    b lbl_fn_8007B100_00000164
lbl_fn_8007B100_00000160:
    li r30, 0x5
lbl_fn_8007B100_00000164:
    cmpwi r0, 0x0
    li r8, 0x0
    li r6, 0x0
    ble lbl_fn_8007B100_00000188
    lwz r3, lbl_8087EFA8
    lwz r8, 0x224(r3)
    cmpwi r8, 0x0
    beq lbl_fn_8007B100_00000188
    lwz r6, 0x228(r3)
lbl_fn_8007B100_00000188:
    xoris r4, r0, 0x8000
    lis r0, 0x4330
    stw r4, 0xc(r1)
    lis r5, lbl_80731D38@ha
    lfd f2, lbl_80731D38@l(r5)
    clrlwi r7, r6, 24
    stw r0, 0x8(r1)
    mr r4, r30
    lwz r3, lbl_8087EFA8
    mr r5, r29
    lfd f0, 0x8(r1)
    li r6, 0x0
    lfs f3, 0x22c(r3)
    mr r3, r31
    fsubs f2, f0, f2
    lfs f1, lbl_80880B9C
    bl fn_80616250
lbl_fn_8007B100_000001CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8007B260(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xa0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    stfd f27, 0xc0(r1)
    psq_st f27, 0xc8(r1), 0, 0
    stfd f26, 0xb0(r1)
    psq_st f26, 0xb8(r1), 0, 0
    stfd f25, 0xa0(r1)
    psq_st f25, 0xa8(r1), 0, 0
    bl _savegpr_14
    lwz r24, lbl_80880B84
    li r30, 0x0
    stw r30, 0x2c(r1)
    mr r15, r3
    mr r16, r5
    mr r3, r6
    mr r4, r24
    addi r5, r1, 0x2c
    li r20, 0x0
    li r19, 0x0
    li r18, 0x0
    li r17, 0x0
    bl fn_8007A994
    lis r27, lbl_80731D40@ha
    lfs f25, lbl_80880B88
    lfs f26, lbl_80880B8C
    addi r27, r27, lbl_80731D40@l
    lfs f27, lbl_80880B90
    mr r21, r3
    lfs f28, lbl_80880B94
    addi r26, r1, 0x3d
    lfs f29, lbl_80880B98
    addi r28, r1, 0x30
    lfs f31, lbl_80880BA0
    lis r31, lbl_80731B9C@ha
    lis r14, jumptable_80778420@ha
    b lbl_fn_8007B260_00000EDC
lbl_fn_8007B260_000002A0:
    lbz r0, 0x2(r21)
    cmpwi r0, 0x4d
    bne lbl_fn_8007B260_000002E0
    lbz r0, 0x3(r21)
    cmpwi r0, 0x42
    bne lbl_fn_8007B260_000002E0
    lbz r0, 0x4(r21)
    cmpwi r0, 0x5f
    bne lbl_fn_8007B260_000002E0
    lwz r0, 0x2c(r1)
    mr r4, r24
    addi r5, r1, 0x2c
    add r3, r21, r0
    bl fn_8007A994
    mr r21, r3
    b lbl_fn_8007B260_00000EC4
lbl_fn_8007B260_000002E0:
    lwz r22, 0x2c(r1)
    addi r25, r31, lbl_80731B9C@l
    li r29, 0x0
    b lbl_fn_8007B260_00000324
lbl_fn_8007B260_000002F0:
    mr r3, r23
    bl strlen
    cmpw r3, r22
    bne lbl_fn_8007B260_0000031C
    mr r3, r21
    mr r4, r23
    mr r5, r22
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007B260_0000031C
    b lbl_fn_8007B260_00000334
lbl_fn_8007B260_0000031C:
    addi r25, r25, 0x4
    addi r29, r29, 0x1
lbl_fn_8007B260_00000324:
    lwz r23, 0x0(r25)
    cmpwi r23, 0x0
    bne lbl_fn_8007B260_000002F0
    li r29, -0x1
lbl_fn_8007B260_00000334:
    cmplwi r29, 0xe
    bgt lbl_fn_8007B260_00000EC4
    addi r3, r14, jumptable_80778420@l
    slwi r0, r29, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    add r3, r21, r22
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpwi r0, 0xa
    beq lbl_fn_8007B260_0000036C
    cmpwi r0, 0xd
    bne lbl_fn_8007B260_000003F8
lbl_fn_8007B260_0000036C:
    cmpwi r27, 0x0
    beq lbl_fn_8007B260_00000384
    mr r3, r27
    bl strlen
    mr r23, r3
    b lbl_fn_8007B260_00000388
lbl_fn_8007B260_00000384:
    li r23, 0x0
lbl_fn_8007B260_00000388:
    cmpwi r27, 0x0
    beq lbl_fn_8007B260_000003E0
    cmpwi r23, 0x0
    beq lbl_fn_8007B260_000003E0
    addi r3, r23, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r22, r3
    mr r4, r27
    mr r5, r23
    bl memcpy
    stbx r30, r22, r23
    lwz r3, 0x0(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_000003D8
    bl fn_80084C24
    stw r30, 0x0(r15)
lbl_fn_8007B260_000003D8:
    stw r22, 0x0(r15)
    b lbl_fn_8007B260_00000EC4
lbl_fn_8007B260_000003E0:
    lwz r3, 0x0(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000EC4
    bl fn_80084C24
    stw r30, 0x0(r15)
    b lbl_fn_8007B260_00000EC4
lbl_fn_8007B260_000003F8:
    mr r4, r24
    addi r5, r1, 0x2c
    bl fn_8007A994
    cmpwi r3, 0x0
    lwz r22, 0x2c(r1)
    mr r21, r3
    beq lbl_fn_8007B260_00000464
    cmpwi r22, 0x0
    beq lbl_fn_8007B260_00000464
    addi r3, r22, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r23, r3
    mr r4, r21
    mr r5, r22
    bl memcpy
    stbx r30, r23, r22
    lwz r3, 0x0(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_0000045C
    bl fn_80084C24
    stw r30, 0x0(r15)
lbl_fn_8007B260_0000045C:
    stw r23, 0x0(r15)
    b lbl_fn_8007B260_00000478
lbl_fn_8007B260_00000464:
    lwz r3, 0x0(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000478
    bl fn_80084C24
    stw r30, 0x0(r15)
lbl_fn_8007B260_00000478:
    lwz r23, 0x0(r15)
    cmpwi r23, 0x0
    beq lbl_fn_8007B260_00000488
    b lbl_fn_8007B260_0000048C
lbl_fn_8007B260_00000488:
    la r23, lbl_8087EF00
lbl_fn_8007B260_0000048C:
    stw r30, 0x30(r1)
    mr r3, r23
    stw r30, 0x34(r1)
    stw r30, 0x38(r1)
    bl strlen
    mr r22, r3
    mr r3, r28
    mr r4, r22
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r23
    add r7, r23, r22
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_8006AC08
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8007B260_000004F4
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8007B260_000004F4:
    mr r3, r27
    bl strlen
    lwz r0, 0x3c(r1)
    mr r22, r3
    stw r3, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8007B260_0000051C
    lbz r0, 0x3c(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8007B260_00000520
lbl_fn_8007B260_0000051C:
    lwz r4, 0x40(r1)
lbl_fn_8007B260_00000520:
    lwz r0, 0x3c(r1)
    stw r4, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8007B260_00000540
    lbz r0, 0x3c(r1)
    mr r3, r26
    clrlwi r0, r0, 25
    b lbl_fn_8007B260_00000548
lbl_fn_8007B260_00000540:
    lwz r3, 0x44(r1)
    lwz r0, 0x40(r1)
lbl_fn_8007B260_00000548:
    cmplw r4, r0
    stw r0, 0x14(r1)
    addi r4, r1, 0x14
    bge lbl_fn_8007B260_0000055C
    addi r4, r1, 0x1c
lbl_fn_8007B260_0000055C:
    lwz r0, 0x0(r4)
    mr r4, r27
    stw r0, 0x10(r1)
    addi r5, r1, 0x10
    cmplw r22, r0
    bge lbl_fn_8007B260_00000578
    addi r5, r1, 0x18
lbl_fn_8007B260_00000578:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8007B260_000005AC
    lwz r0, 0x10(r1)
    cmplw r0, r22
    bge lbl_fn_8007B260_0000059C
    li r3, -0x1
    b lbl_fn_8007B260_000005AC
lbl_fn_8007B260_0000059C:
    bne lbl_fn_8007B260_000005A8
    li r3, 0x0
    b lbl_fn_8007B260_000005AC
lbl_fn_8007B260_000005A8:
    li r3, 0x1
lbl_fn_8007B260_000005AC:
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000648
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8007B260_000005CC
    lbz r0, 0x3c(r1)
    clrlwi r3, r0, 25
    b lbl_fn_8007B260_000005D0
lbl_fn_8007B260_000005CC:
    lwz r3, 0x40(r1)
lbl_fn_8007B260_000005D0:
    cmpwi r21, 0x0
    lwz r0, 0x2c(r1)
    addi r3, r3, 0x1
    subf r22, r3, r0
    beq lbl_fn_8007B260_00000634
    cmpwi r22, 0x0
    beq lbl_fn_8007B260_00000634
    addi r3, r22, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r23, r3
    mr r4, r21
    mr r5, r22
    bl memcpy
    stbx r30, r23, r22
    lwz r3, 0x0(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_0000062C
    bl fn_80084C24
    stw r30, 0x0(r15)
lbl_fn_8007B260_0000062C:
    stw r23, 0x0(r15)
    b lbl_fn_8007B260_00000648
lbl_fn_8007B260_00000634:
    lwz r3, 0x0(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000648
    bl fn_80084C24
    stw r30, 0x0(r15)
lbl_fn_8007B260_00000648:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8007B260_00000EC4
    lwz r3, 0x44(r1)
    bl dtor_80084684
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0x8(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_000006C0
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_000006BC
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_000006BC:
    stw r3, 0x8(r15)
lbl_fn_8007B260_000006C0:
    lwz r3, 0x8(r15)
    mr r4, r24
    addi r5, r1, 0x2c
    stfs f30, 0x0(r3)
    lwz r0, 0x2c(r1)
    add r3, r21, r0
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0x8(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_0000072C
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000728
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_00000728:
    stw r3, 0x8(r15)
lbl_fn_8007B260_0000072C:
    lwz r3, 0x8(r15)
    stfs f30, 0x4(r3)
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0x8(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_00000798
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000794
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_00000794:
    stw r3, 0x8(r15)
lbl_fn_8007B260_00000798:
    lwz r3, 0x8(r15)
    stfs f30, 0x8(r3)
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0x8(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_00000804
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000800
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_00000800:
    stw r3, 0x8(r15)
lbl_fn_8007B260_00000804:
    lwz r3, 0x8(r15)
    mr r4, r24
    addi r5, r1, 0x2c
    stfs f30, 0xc(r3)
    lwz r0, 0x2c(r1)
    add r3, r21, r0
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0x8(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_00000870
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_0000086C
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_0000086C:
    stw r3, 0x8(r15)
lbl_fn_8007B260_00000870:
    lwz r3, 0x8(r15)
    stfs f30, 0x10(r3)
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC12C
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r20, r0, 5
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC12C
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r19, r0, 5
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC12C
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r18, r0, 5
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC12C
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r17, r0, 5
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0xc(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_0000097C
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000978
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_00000978:
    stw r3, 0xc(r15)
lbl_fn_8007B260_0000097C:
    lwz r3, 0xc(r15)
    mr r4, r24
    addi r5, r1, 0x2c
    stfs f30, 0x0(r3)
    lwz r0, 0x2c(r1)
    add r3, r21, r0
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0xc(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_000009E8
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_000009E4
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_000009E4:
    stw r3, 0xc(r15)
lbl_fn_8007B260_000009E8:
    lwz r3, 0xc(r15)
    stfs f30, 0x4(r3)
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0xc(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_00000A54
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000A50
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_00000A50:
    stw r3, 0xc(r15)
lbl_fn_8007B260_00000A54:
    lwz r3, 0xc(r15)
    stfs f30, 0x8(r3)
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0xc(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_00000AC0
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000ABC
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_00000ABC:
    stw r3, 0xc(r15)
lbl_fn_8007B260_00000AC0:
    lwz r3, 0xc(r15)
    mr r4, r24
    addi r5, r1, 0x2c
    stfs f30, 0xc(r3)
    lwz r0, 0x2c(r1)
    add r3, r21, r0
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    lwz r0, 0xc(r15)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_8007B260_00000B2C
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007B260_00000B28
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_8007B260_00000B28:
    stw r3, 0xc(r15)
lbl_fn_8007B260_00000B2C:
    lwz r3, 0xc(r15)
    stfs f30, 0x10(r3)
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    mr r21, r3
    bl fn_800DC288
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x3c(r16)
    b lbl_fn_8007B260_00000EC4
    mr r4, r24
    add r3, r21, r22
    addi r5, r1, 0x2c
    bl fn_8007A994
    lwz r0, 0x38(r16)
    mr r21, r3
    stw r0, 0x24(r1)
    lwz r7, 0x2c(r1)
    lbz r6, 0x24(r1)
    lbz r5, 0x25(r1)
    cmpwi r7, 0x1
    lbz r4, 0x26(r1)
    lbz r0, 0x27(r1)
    stb r6, 0x28(r1)
    stb r5, 0x29(r1)
    stb r4, 0x2a(r1)
    stb r0, 0x2b(r1)
    bne lbl_fn_8007B260_00000C3C
    lbz r0, 0x0(r3)
    extsb r3, r0
    subi r0, r3, 0x41
    cmplwi r0, 0x31
    bgt lbl_fn_8007B260_00000C14
    lis r3, jumptable_80778358@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80778358@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x0
    b lbl_fn_8007B260_00000C18
    li r3, 0x1
    b lbl_fn_8007B260_00000C18
    li r3, 0x2
    b lbl_fn_8007B260_00000C18
    li r3, 0x3
    b lbl_fn_8007B260_00000C18
lbl_fn_8007B260_00000C14:
    li r3, 0x0
lbl_fn_8007B260_00000C18:
    lbz r0, 0x10(r15)
    cmpwi r0, 0x3
    bne lbl_fn_8007B260_00000C2C
    stb r3, 0x2b(r1)
    b lbl_fn_8007B260_00000E9C
lbl_fn_8007B260_00000C2C:
    stb r3, 0x2a(r1)
    stb r3, 0x29(r1)
    stb r3, 0x28(r1)
    b lbl_fn_8007B260_00000E9C
lbl_fn_8007B260_00000C3C:
    cmpwi r7, 0x3
    bne lbl_fn_8007B260_00000D44
    lbz r0, 0x0(r3)
    extsb r4, r0
    subi r0, r4, 0x41
    cmplwi r0, 0x31
    bgt lbl_fn_8007B260_00000C90
    lis r4, jumptable_80778290@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80778290@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r4, 0x0
    b lbl_fn_8007B260_00000C94
    li r4, 0x1
    b lbl_fn_8007B260_00000C94
    li r4, 0x2
    b lbl_fn_8007B260_00000C94
    li r4, 0x3
    b lbl_fn_8007B260_00000C94
lbl_fn_8007B260_00000C90:
    li r4, 0x0
lbl_fn_8007B260_00000C94:
    lbz r0, 0x1(r3)
    stb r4, 0x28(r1)
    extsb r4, r0
    subi r0, r4, 0x41
    cmplwi r0, 0x31
    bgt lbl_fn_8007B260_00000CE4
    lis r4, jumptable_807781C8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807781C8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r4, 0x0
    b lbl_fn_8007B260_00000CE8
    li r4, 0x1
    b lbl_fn_8007B260_00000CE8
    li r4, 0x2
    b lbl_fn_8007B260_00000CE8
    li r4, 0x3
    b lbl_fn_8007B260_00000CE8
lbl_fn_8007B260_00000CE4:
    li r4, 0x0
lbl_fn_8007B260_00000CE8:
    lbz r0, 0x2(r3)
    stb r4, 0x29(r1)
    extsb r3, r0
    subi r0, r3, 0x41
    cmplwi r0, 0x31
    bgt lbl_fn_8007B260_00000D38
    lis r3, jumptable_80778100@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80778100@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_fn_8007B260_00000D3C
    li r0, 0x1
    b lbl_fn_8007B260_00000D3C
    li r0, 0x2
    b lbl_fn_8007B260_00000D3C
    li r0, 0x3
    b lbl_fn_8007B260_00000D3C
lbl_fn_8007B260_00000D38:
    li r0, 0x0
lbl_fn_8007B260_00000D3C:
    stb r0, 0x2a(r1)
    b lbl_fn_8007B260_00000E9C
lbl_fn_8007B260_00000D44:
    cmpwi r7, 0x4
    bne lbl_fn_8007B260_00000E9C
    lbz r0, 0x0(r3)
    extsb r4, r0
    subi r0, r4, 0x41
    cmplwi r0, 0x31
    bgt lbl_fn_8007B260_00000D98
    lis r4, jumptable_80778038@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80778038@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r4, 0x0
    b lbl_fn_8007B260_00000D9C
    li r4, 0x1
    b lbl_fn_8007B260_00000D9C
    li r4, 0x2
    b lbl_fn_8007B260_00000D9C
    li r4, 0x3
    b lbl_fn_8007B260_00000D9C
lbl_fn_8007B260_00000D98:
    li r4, 0x0
lbl_fn_8007B260_00000D9C:
    lbz r0, 0x1(r3)
    stb r4, 0x28(r1)
    extsb r4, r0
    subi r0, r4, 0x41
    cmplwi r0, 0x31
    bgt lbl_fn_8007B260_00000DEC
    lis r4, jumptable_80777F70@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80777F70@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r4, 0x0
    b lbl_fn_8007B260_00000DF0
    li r4, 0x1
    b lbl_fn_8007B260_00000DF0
    li r4, 0x2
    b lbl_fn_8007B260_00000DF0
    li r4, 0x3
    b lbl_fn_8007B260_00000DF0
lbl_fn_8007B260_00000DEC:
    li r4, 0x0
lbl_fn_8007B260_00000DF0:
    lbz r0, 0x2(r3)
    stb r4, 0x29(r1)
    extsb r4, r0
    subi r0, r4, 0x41
    cmplwi r0, 0x31
    bgt lbl_fn_8007B260_00000E40
    lis r4, jumptable_80777EA8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80777EA8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r4, 0x0
    b lbl_fn_8007B260_00000E44
    li r4, 0x1
    b lbl_fn_8007B260_00000E44
    li r4, 0x2
    b lbl_fn_8007B260_00000E44
    li r4, 0x3
    b lbl_fn_8007B260_00000E44
lbl_fn_8007B260_00000E40:
    li r4, 0x0
lbl_fn_8007B260_00000E44:
    lbz r0, 0x3(r3)
    stb r4, 0x2a(r1)
    extsb r3, r0
    subi r0, r3, 0x41
    cmplwi r0, 0x31
    bgt lbl_fn_8007B260_00000E94
    lis r3, jumptable_80777DE0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80777DE0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_fn_8007B260_00000E98
    li r0, 0x1
    b lbl_fn_8007B260_00000E98
    li r0, 0x2
    b lbl_fn_8007B260_00000E98
    li r0, 0x3
    b lbl_fn_8007B260_00000E98
lbl_fn_8007B260_00000E94:
    li r0, 0x0
lbl_fn_8007B260_00000E98:
    stb r0, 0x2b(r1)
lbl_fn_8007B260_00000E9C:
    lwz r0, 0x28(r1)
    stw r0, 0x20(r1)
    lbz r5, 0x20(r1)
    lbz r4, 0x21(r1)
    lbz r3, 0x22(r1)
    lbz r0, 0x23(r1)
    stb r5, 0x38(r16)
    stb r4, 0x39(r16)
    stb r3, 0x3a(r16)
    stb r0, 0x3b(r16)
lbl_fn_8007B260_00000EC4:
    lwz r0, 0x2c(r1)
    mr r4, r24
    addi r5, r1, 0x2c
    add r3, r21, r0
    bl fn_8007A994
    mr r21, r3
lbl_fn_8007B260_00000EDC:
    lbz r0, 0x0(r21)
    cmpwi r0, 0x9
    bne lbl_fn_8007B260_00000EF4
    lbz r0, 0x1(r21)
    cmpwi r0, 0x9
    beq lbl_fn_8007B260_000002A0
lbl_fn_8007B260_00000EF4:
    cmpwi r20, 0x0
    li r0, 0x0
    stb r0, 0x12(r15)
    beq lbl_fn_8007B260_00000F10
    li r0, 0x1
    stb r0, 0x12(r15)
    b lbl_fn_8007B260_00000F20
lbl_fn_8007B260_00000F10:
    cmpwi r18, 0x0
    beq lbl_fn_8007B260_00000F20
    li r0, 0x2
    stb r0, 0x12(r15)
lbl_fn_8007B260_00000F20:
    cmpwi r19, 0x0
    li r0, 0x0
    stb r0, 0x13(r15)
    beq lbl_fn_8007B260_00000F3C
    li r0, 0x1
    stb r0, 0x13(r15)
    b lbl_fn_8007B260_00000F4C
lbl_fn_8007B260_00000F3C:
    cmpwi r17, 0x0
    beq lbl_fn_8007B260_00000F4C
    li r0, 0x2
    stb r0, 0x13(r15)
lbl_fn_8007B260_00000F4C:
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r21
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    psq_l f27, 0xc8(r1), 0, 0
    lfd f27, 0xc0(r1)
    psq_l f26, 0xb8(r1), 0, 0
    lfd f26, 0xb0(r1)
    psq_l f25, 0xa8(r1), 0, 0
    lfd f25, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8007C018(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x11(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8007C018_00000FF0
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8007C018_00000FF0
    li r4, 0x1
    bl fn_800D5808
    li r0, 0x0
    stb r0, 0x11(r29)
    stw r0, 0x4(r29)
lbl_fn_8007C018_00000FF0:
    lis r5, lbl_80731D40@ha
    li r0, 0x1
    addi r5, r5, lbl_80731D40@l
    stb r0, 0x11(r29)
    mr r6, r5
    li r3, 0x30
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C018_00001020
    bl fn_800D5738
lbl_fn_8007C018_00001020:
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_8007C018_00001038
    mr r4, r30
    bl fn_800D594C
    b lbl_fn_8007C018_00001040
lbl_fn_8007C018_00001038:
    mr r4, r30
    bl fn_800D5908
lbl_fn_8007C018_00001040:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8007C0D4(void)
{
    nofralloc
    b fn_8007B100
}

asm void fn_8007C0D8(void)
{
    nofralloc
    lbz r0, 0x50(r3)
    li r5, -0x1
    lfs f0, lbl_80880B9C
    li r4, 0x0
    rlwinm r0, r0, 0, 26, 23
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    stb r0, 0x50(r3)
    blr
}

asm void fn_8007C144(void)
{
    nofralloc
    lfs f2, lbl_80880BB0
    li r0, 0x0
    lfs f0, lbl_80880BA0
    stwu r1, -0xb0(r1)
    fmuls f0, f0, f2
    stw r31, 0xac(r1)
    fctiwz f1, f0
    stw r30, 0xa8(r1)
    stfd f1, 0x48(r1)
    stfd f1, 0x50(r1)
    lwz r12, 0x4c(r1)
    stfd f1, 0x58(r1)
    lwz r11, 0x54(r1)
    stfd f1, 0x60(r1)
    lwz r10, 0x5c(r1)
    stfd f1, 0x68(r1)
    lwz r9, 0x64(r1)
    stfd f1, 0x70(r1)
    lwz r8, 0x6c(r1)
    stfd f1, 0x78(r1)
    lwz r7, 0x74(r1)
    stfd f1, 0x80(r1)
    lwz r6, 0x7c(r1)
    lwz r5, 0x84(r1)
    stfd f1, 0x88(r1)
    stw r4, 0x8(r3)
    lwz r4, 0x8c(r1)
    stb r12, 0x10(r1)
    stb r11, 0x11(r1)
    stb r10, 0x12(r1)
    stb r9, 0x13(r1)
    lwz r9, 0x10(r1)
    stb r8, 0xc(r1)
    stb r7, 0xd(r1)
    stb r6, 0xe(r1)
    stb r5, 0xf(r1)
    lwz r5, 0xc(r1)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stfs f2, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x44(r1)
    stw r9, 0x18(r3)
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f2, 0x34(r1)
    stw r5, 0x1c(r3)
    stfs f2, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f2, 0x24(r1)
    stb r4, 0x8(r1)
    lwz r4, 0x14(r3)
    li r11, 0x2
    lbz r9, 0x18(r3)
    li r12, 0x1
    clrlwi r4, r4, 1
    lbz r8, 0x19(r3)
    oris r4, r4, 0x7000
    lbz r7, 0x1a(r3)
    rlwinm r4, r4, 0, 12, 3
    stfd f1, 0x90(r1)
    oris r5, r4, 0x8
    li r6, 0x4
    li r4, 0x5
    stfd f1, 0x98(r1)
    rlwimi r5, r6, 16, 13, 15
    lwz r30, 0x94(r1)
    rlwimi r5, r4, 13, 16, 18
    stfd f1, 0xa0(r1)
    ori r4, r5, 0x1000
    lwz r31, 0x9c(r1)
    rlwinm r4, r4, 0, 21, 19
    lwz r5, 0xa4(r1)
    ori r4, r4, 0x400
    stb r30, 0x9(r1)
    rlwimi r4, r11, 7, 22, 24
    lfs f0, lbl_80880B9C
    ori r6, r4, 0x70
    li r10, 0x3
    extrwi. r4, r6, 1, 12
    stb r31, 0xa(r1)
    li r4, -0x1
    li r30, 0x0
    stb r5, 0xb(r1)
    lwz r5, 0x8(r1)
    stw r5, 0x20(r3)
    ori r5, r0, 0x1
    stfs f0, 0x30(r3)
    stw r0, 0x34(r3)
    stb r0, 0x38(r3)
    stb r12, 0x39(r3)
    stb r11, 0x3a(r3)
    stb r10, 0x3b(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stb r0, 0x48(r3)
    stb r0, 0x49(r3)
    stb r0, 0x4a(r3)
    stb r0, 0x4b(r3)
    stb r4, 0x4c(r3)
    stb r0, 0x4d(r3)
    stb r0, 0x4e(r3)
    stb r0, 0x4f(r3)
    stb r0, 0x50(r3)
    stb r0, 0x51(r3)
    stb r9, 0x24(r3)
    stb r8, 0x25(r3)
    stb r7, 0x26(r3)
    stb r0, 0x27(r3)
    stb r9, 0x28(r3)
    stb r8, 0x29(r3)
    stb r7, 0x2a(r3)
    stb r0, 0x2b(r3)
    stb r9, 0x2c(r3)
    stb r8, 0x2d(r3)
    stb r7, 0x2e(r3)
    stb r0, 0x2f(r3)
    stw r6, 0x14(r3)
    beq lbl_fn_8007C144_000012C4
    ori r5, r30, 0x2
lbl_fn_8007C144_000012C4:
    lbz r9, 0x4a(r3)
    mr r30, r5
    li r6, 0x0
    li r7, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_8007C144_0000130C
lbl_fn_8007C144_000012E0:
    lwz r8, 0xc(r3)
    add r4, r8, r7
    lbz r0, 0x10(r4)
    cmpwi r0, 0x15
    bne lbl_fn_8007C144_00001300
    mulli r0, r6, 0x18
    add r0, r8, r0
    b lbl_fn_8007C144_00001310
lbl_fn_8007C144_00001300:
    addi r7, r7, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_8007C144_000012E0
lbl_fn_8007C144_0000130C:
    li r0, 0x0
lbl_fn_8007C144_00001310:
    cmpwi r0, 0x0
    beq lbl_fn_8007C144_0000131C
    ori r30, r5, 0x4
lbl_fn_8007C144_0000131C:
    li r5, 0x0
    li r6, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_8007C144_0000135C
lbl_fn_8007C144_00001330:
    lwz r7, 0xc(r3)
    add r4, r7, r6
    lbz r0, 0x10(r4)
    cmpwi r0, 0x14
    bne lbl_fn_8007C144_00001350
    mulli r0, r5, 0x18
    add r0, r7, r0
    b lbl_fn_8007C144_00001360
lbl_fn_8007C144_00001350:
    addi r6, r6, 0x18
    addi r5, r5, 0x1
    bdnz lbl_fn_8007C144_00001330
lbl_fn_8007C144_0000135C:
    li r0, 0x0
lbl_fn_8007C144_00001360:
    cmpwi r0, 0x0
    beq lbl_fn_8007C144_0000136C
    ori r30, r30, 0x8
lbl_fn_8007C144_0000136C:
    stb r30, 0x49(r3)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    addi r1, r1, 0xb0
    blr
}

asm void fn_8007C3F8(void)
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
    beq lbl_fn_8007C3F8_000013D8
    lis r4, fn_8007AA64@ha
    lwz r3, 0xc(r3)
    addi r4, r4, fn_8007AA64@l
    bl fn_80695A50
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007C3F8_000013C8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8007C3F8_000013C8:
    cmpwi r31, 0x0
    ble lbl_fn_8007C3F8_000013D8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8007C3F8_000013D8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
