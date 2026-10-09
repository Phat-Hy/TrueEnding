#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _savegpr_17(void);
extern void dtor_80013D60(void);
extern void fn_8000D124(void);
extern void fn_8000D760(void);
extern void fn_8000E18C(void);
extern void fn_8000EB8C(void);
extern void fn_8000ECA8(void);
extern void fn_80013410(void);
extern void fn_8003E4A4(void);
extern void fn_8004203C(void);
extern void fn_8004212C(void);
extern void fn_800422CC(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_800827E0(void);
extern void fn_80084320(void);
extern void fn_80089ACC(void);
extern void fn_8008AD4C(void);
extern void fn_80096E94(void);
extern void fn_800DC288(void);
extern void fn_800E0AA8(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800F72CC(void);
extern void fn_8020A780(void);
extern void fn_8021A4CC(void);
extern void fn_80288390(void);
extern void fn_8028B74C(void);
extern void fn_803C01B0(void);
extern void fn_803C0624(void);
extern void fn_803C1194(void);
extern void fn_803C1E2C(void);
extern void fn_803C2038(void);
extern void fn_803C5FC4(void);
extern void fn_803C5FD0(void);
extern void fn_803C5FE4(void);
extern void fn_803C6028(void);
extern void fn_803C606C(void);
extern void fn_803C65EC(void);
extern void fn_803C6AE8(void);
extern void fn_803C6FE4(void);
extern void fn_803C74E0(void);
extern void fn_803C7C34(void);
extern void fn_803C7D08(void);
extern void fn_803C7D18(void);
extern void fn_803C7D20(void);
extern void fn_803C7DF8(void);
extern void fn_803C7F30(void);
extern void fn_803C7F38(void);
extern void fn_803C7FE4(void);
extern void fn_803C8130(void);
extern void fn_803C81DC(void);
extern void fn_803C8288(void);
extern void fn_803C8334(void);
extern void fn_803C833C(void);
extern void fn_803C83E8(void);
extern void fn_803C8564(void);
extern void fn_803C856C(void);
extern void fn_803C862C(void);
extern void fn_803C8810(void);
extern void fn_803C8898(void);
extern void fn_803C88A0(void);
extern void fn_803C8960(void);
extern void fn_803C8B0C(void);
extern void fn_803C8BB8(void);
extern void fn_803C8BC0(void);
extern void fn_803C8C6C(void);
extern void fn_803C8E64(void);
extern void fn_803C8E6C(void);
extern void fn_803C8F18(void);
extern void fn_803C90BC(void);
extern void fn_803C90C4(void);
extern void fn_803C9170(void);
extern void fn_803C9304(void);
extern void fn_803C9318(void);
extern void fn_803C9378(void);
extern void fn_803C93F4(void);
extern void fn_803C940C(void);
extern void fn_803C94D0(void);
extern void fn_803C94E4(void);
extern void fn_803C955C(void);
extern void fn_803C9570(void);
extern void fn_803C95E8(void);
extern void fn_803C95EC(void);
extern void fn_803C99A8(void);
extern void fn_803C9CDC(void);
extern void fn_803C9CE4(void);
extern void fn_803C9D8C(void);
extern void fn_803C9D9C(void);
extern void fn_803C9DC8(void);
extern void fn_803C9DD0(void);
extern void fn_803C9E58(void);
extern void fn_803C9E68(void);
extern void fn_803C9E84(void);
extern void fn_803C9E98(void);
extern void fn_803C9EF8(void);
extern void fn_803C9F70(void);
extern void fn_803C9F84(void);
extern void fn_803CA00C(void);
extern void fn_803CA014(void);
extern void fn_803CCF64(void);
extern void fn_803CD598(void);
extern void fn_8067CE80(void);
extern void fn_80684600(void);

/* External data declarations */
extern u8 lbl_807500DC[];

/* Small data declarations */
extern u32 lbl_80885CCC;

/* Function declarations */
void fn_803C3664(void);
void fn_803C3674(void);
void fn_803C3684(void);
void fn_803C3694(void);
void fn_803C36A4(void);
void fn_803C36B4(void);
void fn_803C36C4(void);
void fn_803C36D4(void);
void fn_803C36E4(void);
void fn_803C36F4(void);
void fn_803C3704(void);
void fn_803C3714(void);
void fn_803C3724(void);
void fn_803C3798(void);
void fn_803C380C(void);
void fn_803C3894(void);

asm void fn_803C3664(void)
{
    nofralloc
    mulli r0, r4, 0x30
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C3674(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 6
    add r3, r3, r0
    blr
}

asm void fn_803C3684(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 6
    add r3, r3, r0
    blr
}

asm void fn_803C3694(void)
{
    nofralloc
    mulli r0, r4, 0x48
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C36A4(void)
{
    nofralloc
    mulli r0, r4, 0x28
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C36B4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    blr
}

asm void fn_803C36C4(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C36D4(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C36E4(void)
{
    nofralloc
    mulli r0, r4, 0x30
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C36F4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    blr
}

asm void fn_803C3704(void)
{
    nofralloc
    mulli r0, r4, 0x30
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C3714(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 7
    add r3, r3, r0
    blr
}

asm void fn_803C3724(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    mr r3, r31
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x4(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x8(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803C3798(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    mr r3, r31
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x8(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803C380C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    mr r3, r31
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, 0x4(r30)
    stw r3, 0x8(r30)
    cmpwi r0, 0x0
    blt lbl_fn_803C380C_00000210
    cmpwi r3, 0x0
    ble lbl_fn_803C380C_00000210
    cmpw r0, r3
    ble lbl_fn_803C380C_00000218
lbl_fn_803C380C_00000210:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_803C380C_00000218:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803C3894(void)
{
    nofralloc
    stwu r1, -0x940(r1)
    mflr r0
    stw r0, 0x944(r1)
    li r0, 0x938
    addi r11, r1, 0x930
    stfd f31, 0x930(r1)
    psq_stx f31, r1, r0, 0, 0
    bl _savegpr_17
    mr r28, r3
    mr r29, r6
    addi r3, r1, 0x2b0
    bl fn_8004203C
    addi r3, r1, 0xe0
    bl fn_8021A4CC
    mulli r23, r29, 0x2710
    lis r24, lbl_807500DC@ha
    li r22, 0x0
    addi r25, r24, lbl_807500DC@l
    li r31, 0x0
    li r30, 0x0
    li r26, 0x1
    li r27, 0x0
lbl_fn_803C3894_00000288:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xf1
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00002830
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xf7
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000344
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00000344
    b lbl_fn_803C3894_00000330
lbl_fn_803C3894_000002E4:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    addi r4, r25, 0x102
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000330
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r22, r3
lbl_fn_803C3894_00000330:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000002E4
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00000344:
    addi r3, r1, 0xe0
    addi r4, r25, 0x10a
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_0000070C
    b lbl_fn_803C3894_000006F8
lbl_fn_803C3894_0000035C:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    addi r4, r25, 0x116
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000003B4
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_000003B4
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x68(r28)
    b lbl_fn_803C3894_000006F8
lbl_fn_803C3894_000003B4:
    addi r3, r1, 0xe0
    addi r4, r25, 0x11d
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000003E4
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_000003E4
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x6c(r28)
    b lbl_fn_803C3894_000006F8
lbl_fn_803C3894_000003E4:
    addi r3, r1, 0xe0
    addi r4, r25, 0x126
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000414
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00000414
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x70(r28)
    b lbl_fn_803C3894_000006F8
lbl_fn_803C3894_00000414:
    addi r3, r1, 0xe0
    addi r4, r25, 0x137
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000594
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00000594
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0xd4
    addi r6, r25, 0x140
    li r5, 0x3
    bl fn_803C7C34
    li r21, 0x0
    b lbl_fn_803C3894_00000580
lbl_fn_803C3894_00000458:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000006F8
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_803C3894_0000049C
    subi r21, r21, 0x1
    b lbl_fn_803C3894_0000057C
lbl_fn_803C3894_0000049C:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xd4
    bl fn_803C7D08
    stw r19, 0x4(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xd4
    bl fn_803C7D08
    stw r19, 0x8(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0xd4
    bl fn_803C7D08
    stfs f31, 0x10(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xd4
    bl fn_803C7D08
    stw r19, 0x0(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xd4
    bl fn_803C7D08
    stw r19, 0x14(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xd4
    bl fn_803C7D08
    stw r19, 0x18(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xd4
    bl fn_803C7D08
    stw r19, 0x1c(r3)
lbl_fn_803C3894_0000057C:
    addi r21, r21, 0x1
lbl_fn_803C3894_00000580:
    addi r3, r28, 0xd4
    bl fn_80089ACC
    cmplw r21, r3
    blt lbl_fn_803C3894_00000458
    b lbl_fn_803C3894_000006F8
lbl_fn_803C3894_00000594:
    addi r3, r1, 0xe0
    addi r4, r25, 0x146
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000006F8
    addi r3, r28, 0xdc
    li r18, 0x0
    bl fn_803C7D18
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000005E0
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0xdc
    addi r6, r25, 0x158
    li r5, 0x3
    bl fn_803C7D20
    b lbl_fn_803C3894_000006E8
lbl_fn_803C3894_000005E0:
    addi r3, r28, 0xdc
    bl fn_80089ACC
    mr r18, r3
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r0, r3
    addi r3, r28, 0xdc
    add r4, r18, r0
    addi r6, r25, 0x158
    li r5, 0x3
    bl fn_803C7DF8
    b lbl_fn_803C3894_000006E8
lbl_fn_803C3894_00000614:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000006F8
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_803C3894_00000658
    subi r18, r18, 0x1
    b lbl_fn_803C3894_000006E4
lbl_fn_803C3894_00000658:
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r19, r3
    mr r4, r18
    addi r3, r28, 0xdc
    bl fn_803C01B0
    stw r19, 0x0(r3)
    addi r5, r24, lbl_807500DC@l
    mr r6, r5
    li r3, 0x3d0
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_803C3894_000006AC
    li r4, 0x100
    li r5, 0x20
    bl fn_80096E94
    mr r19, r3
lbl_fn_803C3894_000006AC:
    mr r4, r18
    addi r3, r28, 0xdc
    bl fn_803C01B0
    stw r19, 0x4(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r19, r3
    mr r4, r18
    addi r3, r28, 0xdc
    bl fn_803C01B0
    lwz r3, 0x4(r3)
    mr r4, r19
    li r5, 0x0
    bl fn_8008AD4C
lbl_fn_803C3894_000006E4:
    addi r18, r18, 0x1
lbl_fn_803C3894_000006E8:
    addi r3, r28, 0xdc
    bl fn_80089ACC
    cmplw r18, r3
    blt lbl_fn_803C3894_00000614
lbl_fn_803C3894_000006F8:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_0000035C
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_0000070C:
    addi r3, r1, 0xe0
    addi r4, r25, 0x16c
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000888
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r28, 0x78
    li r18, 0x0
    bl fn_803C7F30
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_0000076C
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0x78
    addi r6, r25, 0x176
    li r5, 0x3
    bl fn_803C7F38
    b lbl_fn_803C3894_0000079C
lbl_fn_803C3894_0000076C:
    addi r3, r28, 0x78
    bl fn_80089ACC
    mr r18, r3
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r0, r3
    addi r3, r28, 0x78
    add r4, r18, r0
    addi r6, r25, 0x185
    li r5, 0x3
    bl fn_803C7FE4
lbl_fn_803C3894_0000079C:
    mr r20, r18
    b lbl_fn_803C3894_00000874
lbl_fn_803C3894_000007A4:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00000874
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    add r19, r18, r3
    mr r4, r20
    addi r3, r28, 0x78
    bl fn_803C1194
    stw r19, 0x10(r3)
    mr r4, r20
    addi r3, r28, 0x78
    bl fn_803C1194
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r20
    addi r3, r28, 0x78
    bl fn_803C1194
    stfs f31, 0x14(r3)
    mr r4, r20
    addi r3, r28, 0x78
    bl fn_803C1194
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x18
    addi r5, r1, 0x2b0
    bl fn_803C380C
    mr r4, r20
    addi r3, r28, 0x78
    bl fn_803C1194
    stw r26, 0x24(r3)
    addi r20, r20, 0x1
lbl_fn_803C3894_00000874:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000007A4
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00000888:
    addi r3, r1, 0xe0
    addi r4, r25, 0x194
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000008B4
    mr r3, r28
    mr r6, r29
    addi r4, r28, 0x80
    addi r5, r1, 0x2b0
    bl fn_803C74E0
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_000008B4:
    addi r3, r1, 0xe0
    addi r4, r25, 0x1a0
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000008E0
    mr r3, r28
    mr r6, r29
    addi r4, r28, 0x88
    addi r5, r1, 0x2b0
    bl fn_803C74E0
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_000008E0:
    addi r3, r1, 0xe0
    addi r4, r25, 0x1ae
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_0000090C
    mr r3, r28
    mr r6, r29
    addi r4, r28, 0x90
    addi r5, r1, 0x2b0
    bl fn_803C74E0
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_0000090C:
    addi r3, r1, 0xe0
    addi r4, r25, 0x1bd
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000ADC
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00000ADC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    stw r3, 0x74(r28)
    mr r4, r3
    addi r3, r28, 0x98
    addi r6, r25, 0x1c7
    li r5, 0x3
    bl fn_803C8130
    li r21, 0x0
    b lbl_fn_803C3894_00000AC8
lbl_fn_803C3894_00000968:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00000AC8
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    stw r19, 0x10(r3)
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    stfs f31, 0x14(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    stw r19, 0x18(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    stw r19, 0x1c(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    stw r19, 0x20(r3)
    mr r3, r28
    addi r4, r1, 0xd0
    addi r5, r1, 0x2b0
    bl fn_803C3798
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    stw r26, 0x2c(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    stw r19, 0x24(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x98
    bl fn_803C3664
    stw r19, 0x28(r3)
    addi r21, r21, 0x1
lbl_fn_803C3894_00000AC8:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00000968
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00000ADC:
    addi r3, r1, 0xe0
    addi r4, r25, 0x1d6
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000CAC
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00000CAC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    stw r3, 0xa8(r28)
    mr r4, r3
    addi r3, r28, 0xac
    addi r6, r25, 0x1e0
    li r5, 0x3
    bl fn_803C81DC
    li r21, 0x0
    b lbl_fn_803C3894_00000C98
lbl_fn_803C3894_00000B38:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00000C98
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    stw r19, 0x10(r3)
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    stw r19, 0x14(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    stw r19, 0x18(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    stw r19, 0x1c(r3)
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x28
    addi r5, r1, 0x2b0
    bl fn_803C3798
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    stw r26, 0x38(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    stw r19, 0x20(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    stw r19, 0x24(r3)
    mr r4, r21
    addi r3, r28, 0xac
    bl fn_803C3674
    stw r27, 0x3c(r3)
    addi r21, r21, 0x1
lbl_fn_803C3894_00000C98:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00000B38
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00000CAC:
    addi r3, r1, 0xe0
    addi r4, r25, 0x1ef
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000DF4
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00000DF4
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0xc4
    addi r6, r25, 0x200
    li r5, 0x3
    bl fn_803C8288
    li r18, 0x0
    b lbl_fn_803C3894_00000DE0
lbl_fn_803C3894_00000CF0:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00000DE0
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r19, r3
    mr r4, r18
    addi r3, r28, 0xc4
    bl fn_803C36E4
    stw r19, 0x10(r3)
    mr r4, r18
    addi r3, r28, 0xc4
    bl fn_803C36E4
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r18
    addi r3, r28, 0xc4
    bl fn_803C36E4
    stw r19, 0x14(r3)
    mr r4, r18
    addi r3, r28, 0xc4
    bl fn_803C36E4
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x1c
    addi r5, r1, 0x2b0
    bl fn_803C3798
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r18
    addi r3, r28, 0xc4
    bl fn_803C36E4
    stw r19, 0x18(r3)
    mr r4, r18
    addi r3, r28, 0xc4
    bl fn_803C36E4
    stw r26, 0x2c(r3)
    addi r18, r18, 0x1
lbl_fn_803C3894_00000DE0:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00000CF0
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00000DF4:
    addi r3, r1, 0xe0
    addi r4, r25, 0x213
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00000FBC
    addi r3, r28, 0xfc
    li r21, 0x0
    bl fn_803C8334
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00000E40
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0xfc
    addi r6, r25, 0x222
    li r5, 0x3
    bl fn_803C833C
    b lbl_fn_803C3894_00000E70
lbl_fn_803C3894_00000E40:
    addi r3, r28, 0xfc
    bl fn_80089ACC
    mr r21, r3
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r0, r3
    addi r3, r28, 0xfc
    add r4, r21, r0
    addi r6, r25, 0x222
    li r5, 0x3
    bl fn_803C83E8
lbl_fn_803C3894_00000E70:
    mr r20, r21
    b lbl_fn_803C3894_00000FA8
lbl_fn_803C3894_00000E78:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00000FA8
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    add r19, r21, r3
    mr r4, r20
    addi r3, r28, 0xfc
    bl fn_803C3684
    stw r19, 0x10(r3)
    mr r4, r20
    addi r3, r28, 0xfc
    bl fn_803C3684
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r20
    addi r3, r28, 0xfc
    bl fn_803C3684
    stfs f31, 0x14(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r20
    addi r3, r28, 0xfc
    bl fn_803C3684
    stw r19, 0x18(r3)
    mr r4, r20
    addi r3, r28, 0xfc
    bl fn_803C3684
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x1c
    addi r5, r1, 0x2b0
    bl fn_803C3798
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r20
    addi r3, r28, 0xfc
    bl fn_803C3684
    stw r19, 0x3c(r3)
    mr r4, r20
    addi r3, r28, 0xfc
    bl fn_803C3684
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x2c
    addi r5, r1, 0x2b0
    bl fn_803C380C
    mr r4, r20
    addi r3, r28, 0xfc
    bl fn_803C3684
    stw r26, 0x38(r3)
    addi r20, r20, 0x1
lbl_fn_803C3894_00000FA8:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00000E78
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00000FBC:
    addi r3, r1, 0xe0
    addi r4, r25, 0x236
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000012EC
    addi r3, r28, 0xe4
    li r31, 0x0
    bl fn_803C8564
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001008
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0xe4
    addi r6, r25, 0x23f
    li r5, 0x3
    bl fn_803C856C
    b lbl_fn_803C3894_00001038
lbl_fn_803C3894_00001008:
    addi r3, r28, 0xe4
    bl fn_80089ACC
    mr r31, r3
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r0, r3
    addi r3, r28, 0xe4
    add r4, r31, r0
    addi r6, r25, 0x23f
    li r5, 0x3
    bl fn_803C862C
lbl_fn_803C3894_00001038:
    mr r20, r31
    b lbl_fn_803C3894_000012D8
lbl_fn_803C3894_00001040:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_000012D8
    mr r4, r20
    addi r3, r28, 0xe4
    bl fn_803C3694
    mr r21, r3
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    add r0, r31, r3
    stw r0, 0x10(r21)
    mr r3, r28
    mr r4, r21
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x18(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1c(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x20(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xc4
    bl fn_8003E4A4
    addi r3, r1, 0xb8
    bl fn_80288390
    addi r3, r1, 0x1bc
    addi r4, r25, 0x24d
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0x284
    addi r4, r1, 0xc4
    addi r5, r1, 0x1bc
    bl fn_800EC2C4
    addi r3, r1, 0x1bc
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x248
    addi r4, r1, 0x284
    bl fn_800EC654
    b lbl_fn_803C3894_00001180
lbl_fn_803C3894_00001158:
    addi r3, r1, 0x248
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    stw r3, 0xc(r1)
    addi r3, r1, 0xb8
    addi r4, r1, 0xc
    bl fn_8000E18C
    addi r3, r1, 0x248
    bl fn_800ED4E0
lbl_fn_803C3894_00001180:
    addi r3, r1, 0x180
    addi r4, r1, 0x284
    bl fn_800EDFE8
    addi r3, r1, 0x248
    addi r4, r1, 0x180
    bl fn_800EC254
    mr r19, r3
    addi r3, r1, 0x180
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r19, 0x0
    bne lbl_fn_803C3894_00001158
    addi r3, r1, 0x248
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0xb8
    bl fn_800E0AA8
    mr r4, r3
    addi r3, r21, 0x24
    addi r6, r25, 0x24f
    li r5, 0x3
    bl fn_803C8810
    li r18, 0x0
    b lbl_fn_803C3894_00001224
lbl_fn_803C3894_000011E0:
    cmpwi r29, 0x0
    ble lbl_fn_803C3894_00001200
    mr r4, r18
    addi r3, r1, 0xb8
    bl fn_8028B74C
    lwz r0, 0x0(r3)
    add r0, r0, r23
    stw r0, 0x0(r3)
lbl_fn_803C3894_00001200:
    mr r4, r18
    addi r3, r1, 0xb8
    bl fn_8028B74C
    lwz r19, 0x0(r3)
    mr r4, r18
    addi r3, r21, 0x24
    bl fn_803C0624
    stw r19, 0x0(r3)
    addi r18, r18, 0x1
lbl_fn_803C3894_00001224:
    addi r3, r1, 0xb8
    bl fn_800E0AA8
    cmplw r18, r3
    blt lbl_fn_803C3894_000011E0
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x2c(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    subi r0, r3, 0x1
    addi r3, r1, 0x2b0
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x30(r21)
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x38(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x3c(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x34(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x40(r21)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x44(r21)
    addi r3, r1, 0x284
    li r4, -0x1
    addi r20, r20, 0x1
    bl fn_800EC5BC
    addi r3, r1, 0xb8
    li r4, -0x1
    bl fn_8000D760
    addi r3, r1, 0xc4
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_803C3894_000012D8:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001040
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_000012EC:
    addi r3, r1, 0xe0
    addi r4, r25, 0x25b
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000015A0
    addi r3, r28, 0xec
    li r30, 0x0
    bl fn_803C8898
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001338
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0xec
    addi r6, r25, 0x267
    li r5, 0x3
    bl fn_803C88A0
    b lbl_fn_803C3894_00001368
lbl_fn_803C3894_00001338:
    addi r3, r28, 0xec
    bl fn_80089ACC
    mr r30, r3
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r0, r3
    addi r3, r28, 0xec
    add r4, r30, r0
    addi r6, r25, 0x267
    li r5, 0x3
    bl fn_803C8960
lbl_fn_803C3894_00001368:
    mr r20, r30
    b lbl_fn_803C3894_0000158C
lbl_fn_803C3894_00001370:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_0000158C
    mr r4, r20
    addi r3, r28, 0xec
    bl fn_803C36A4
    mr r18, r3
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    add r0, r30, r3
    stw r0, 0x10(r18)
    mr r3, r28
    mr r4, r18
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14(r18)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xac
    bl fn_8003E4A4
    addi r3, r1, 0xa0
    bl fn_80288390
    addi r3, r1, 0x15c
    addi r4, r25, 0x24d
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0x21c
    addi r4, r1, 0xac
    addi r5, r1, 0x15c
    bl fn_800EC2C4
    addi r3, r1, 0x15c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x1e0
    addi r4, r1, 0x21c
    bl fn_800EC654
    b lbl_fn_803C3894_00001480
lbl_fn_803C3894_00001458:
    addi r3, r1, 0x1e0
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    stw r3, 0x8(r1)
    addi r3, r1, 0xa0
    addi r4, r1, 0x8
    bl fn_8000E18C
    addi r3, r1, 0x1e0
    bl fn_800ED4E0
lbl_fn_803C3894_00001480:
    addi r3, r1, 0x120
    addi r4, r1, 0x21c
    bl fn_800EDFE8
    addi r3, r1, 0x1e0
    addi r4, r1, 0x120
    bl fn_800EC254
    mr r19, r3
    addi r3, r1, 0x120
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r19, 0x0
    bne lbl_fn_803C3894_00001458
    addi r3, r1, 0x1e0
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0xa0
    bl fn_800E0AA8
    mr r4, r3
    addi r3, r18, 0x18
    addi r6, r25, 0x24f
    li r5, 0x3
    bl fn_803C8810
    li r21, 0x0
    b lbl_fn_803C3894_00001524
lbl_fn_803C3894_000014E0:
    cmpwi r29, 0x0
    ble lbl_fn_803C3894_00001500
    mr r4, r21
    addi r3, r1, 0xa0
    bl fn_8028B74C
    lwz r0, 0x0(r3)
    add r0, r0, r23
    stw r0, 0x0(r3)
lbl_fn_803C3894_00001500:
    mr r4, r21
    addi r3, r1, 0xa0
    bl fn_8028B74C
    lwz r19, 0x0(r3)
    mr r4, r21
    addi r3, r18, 0x18
    bl fn_803C0624
    stw r19, 0x0(r3)
    addi r21, r21, 0x1
lbl_fn_803C3894_00001524:
    addi r3, r1, 0xa0
    bl fn_800E0AA8
    cmplw r21, r3
    blt lbl_fn_803C3894_000014E0
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x20(r18)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x24(r18)
    addi r3, r1, 0x21c
    li r4, -0x1
    addi r20, r20, 0x1
    bl fn_800EC5BC
    addi r3, r1, 0xa0
    li r4, -0x1
    bl fn_8000D760
    addi r3, r1, 0xac
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_803C3894_0000158C:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001370
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_000015A0:
    addi r3, r1, 0xe0
    addi r4, r25, 0x278
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00001768
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00001768
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0xf4
    addi r6, r25, 0x27f
    li r5, 0x3
    bl fn_803C8B0C
    li r20, 0x0
    b lbl_fn_803C3894_00001754
lbl_fn_803C3894_000015E4:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00001754
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r19, r3
    mr r4, r20
    addi r3, r28, 0xf4
    bl fn_803C3704
    stw r19, 0x10(r3)
    mr r4, r20
    addi r3, r28, 0xf4
    bl fn_803C3704
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r20
    addi r3, r28, 0xf4
    bl fn_803C3704
    stfs f31, 0x14(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r20
    addi r3, r28, 0xf4
    bl fn_803C3704
    stfs f31, 0x18(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r20
    addi r3, r28, 0xf4
    bl fn_803C3704
    stfs f31, 0x1c(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r20
    addi r3, r28, 0xf4
    bl fn_803C3704
    stfs f31, 0x20(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r20
    addi r3, r28, 0xf4
    bl fn_803C3704
    stw r19, 0x24(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r20
    addi r3, r28, 0xf4
    bl fn_803C3704
    stw r19, 0x28(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    subi r0, r3, 0x1
    mr r4, r20
    cntlzw r0, r0
    addi r3, r28, 0xf4
    srwi r19, r0, 5
    bl fn_803C3704
    stw r19, 0x2c(r3)
    addi r20, r20, 0x1
lbl_fn_803C3894_00001754:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000015E4
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00001768:
    addi r3, r1, 0xe0
    addi r4, r25, 0x28b
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00001794
    mr r3, r28
    addi r4, r28, 0x158
    addi r5, r28, 0x98
    addi r6, r1, 0x2b0
    bl fn_803C6FE4
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00001794:
    addi r3, r1, 0xe0
    addi r4, r25, 0x29a
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000017C0
    mr r3, r28
    addi r4, r28, 0x160
    addi r5, r28, 0xac
    addi r6, r1, 0x2b0
    bl fn_803C6AE8
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_000017C0:
    addi r3, r1, 0xe0
    addi r4, r25, 0x2a9
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000017EC
    mr r3, r28
    addi r4, r28, 0x168
    addi r5, r28, 0x78
    addi r6, r1, 0x2b0
    bl fn_803C65EC
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_000017EC:
    addi r3, r1, 0xe0
    addi r4, r25, 0x2b8
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    addi r4, r25, 0x2c1
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_0000182C
    mr r3, r28
    addi r4, r28, 0x178
    addi r5, r28, 0x88
    addi r6, r1, 0x2b0
    bl fn_803C606C
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_0000182C:
    addi r3, r1, 0xe0
    addi r4, r25, 0x2cc
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00001858
    mr r3, r28
    addi r4, r28, 0x170
    addi r5, r28, 0x90
    addi r6, r1, 0x2b0
    bl fn_803C606C
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00001858:
    addi r3, r1, 0xe0
    addi r4, r25, 0x2d8
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00001AB4
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r28, 0x104
    li r20, 0x0
    bl fn_803C8BB8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000018B8
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0x104
    addi r6, r25, 0x2e0
    li r5, 0x3
    bl fn_803C8BC0
    b lbl_fn_803C3894_000018E8
lbl_fn_803C3894_000018B8:
    addi r3, r28, 0x104
    bl fn_80089ACC
    mr r20, r3
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r0, r3
    addi r3, r28, 0x104
    add r4, r20, r0
    addi r6, r25, 0x2e0
    li r5, 0x3
    bl fn_803C8C6C
lbl_fn_803C3894_000018E8:
    mr r21, r20
    b lbl_fn_803C3894_00001AA0
lbl_fn_803C3894_000018F0:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00001AA0
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    add r19, r20, r3
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    stw r19, 0x10(r3)
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    stfs f31, 0x14(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    stw r19, 0x18(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    stw r19, 0x1c(r3)
    li r17, 0x0
    li r18, 0x0
lbl_fn_803C3894_000019DC:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    addi r17, r17, 0x1
    add r3, r3, r18
    cmpwi r17, 0x8
    stw r19, 0x20(r3)
    addi r18, r18, 0x4
    blt lbl_fn_803C3894_000019DC
    li r17, 0x0
    li r19, 0x0
lbl_fn_803C3894_00001A18:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    addi r17, r17, 0x1
    add r3, r3, r19
    cmpwi r17, 0x8
    stfs f31, 0x40(r3)
    addi r19, r19, 0x4
    blt lbl_fn_803C3894_00001A18
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x60
    addi r5, r1, 0x2b0
    bl fn_803C3798
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x70
    addi r5, r1, 0x2b0
    bl fn_803C380C
    mr r4, r21
    addi r3, r28, 0x104
    bl fn_803C3714
    stw r26, 0x7c(r3)
    addi r21, r21, 0x1
lbl_fn_803C3894_00001AA0:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000018F0
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00001AB4:
    addi r3, r1, 0xe0
    addi r4, r25, 0x2ed
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00001D58
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r28, 0x10c
    li r20, 0x0
    bl fn_803C8E64
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001B14
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0x10c
    addi r6, r25, 0x2f7
    li r5, 0x3
    bl fn_803C8E6C
    b lbl_fn_803C3894_00001B44
lbl_fn_803C3894_00001B14:
    addi r3, r28, 0x10c
    bl fn_80089ACC
    mr r20, r3
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r0, r3
    addi r3, r28, 0x10c
    add r4, r20, r0
    addi r6, r25, 0x2f7
    li r5, 0x3
    bl fn_803C8F18
lbl_fn_803C3894_00001B44:
    mr r21, r20
    b lbl_fn_803C3894_00001D44
lbl_fn_803C3894_00001B4C:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00001D44
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    add r19, r20, r3
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stw r19, 0x10(r3)
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stfs f31, 0x14(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stfs f31, 0x18(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stfs f31, 0x1c(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stfs f31, 0x20(r3)
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x38
    addi r5, r1, 0x2b0
    bl fn_803C3798
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stw r19, 0x24(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stw r19, 0x28(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stw r19, 0x2c(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stw r19, 0x30(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stw r19, 0x34(r3)
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x48
    addi r5, r1, 0x2b0
    bl fn_803C380C
    mr r4, r21
    addi r3, r28, 0x10c
    bl fn_803C1E2C
    stw r26, 0x54(r3)
    addi r21, r21, 0x1
lbl_fn_803C3894_00001D44:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001B4C
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00001D58:
    addi r3, r1, 0xe0
    addi r4, r25, 0x306
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00001FBC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r28, 0x114
    li r20, 0x0
    bl fn_803C90BC
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001DB8
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0x114
    addi r6, r25, 0x30d
    li r5, 0x3
    bl fn_803C90C4
    b lbl_fn_803C3894_00001DE8
lbl_fn_803C3894_00001DB8:
    addi r3, r28, 0x114
    bl fn_80089ACC
    mr r20, r3
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r0, r3
    addi r3, r28, 0x114
    add r4, r20, r0
    addi r6, r25, 0x30d
    li r5, 0x3
    bl fn_803C9170
lbl_fn_803C3894_00001DE8:
    mr r21, r20
    b lbl_fn_803C3894_00001FA8
lbl_fn_803C3894_00001DF0:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00001FA8
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    add r19, r20, r3
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stw r19, 0x10(r3)
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    mr r4, r3
    mr r3, r28
    addi r5, r1, 0x2b0
    bl fn_803C3724
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stfs f31, 0x14(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stfs f31, 0x18(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stfs f31, 0x1c(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stfs f31, 0x20(r3)
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x30
    addi r5, r1, 0x2b0
    bl fn_803C3798
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stw r19, 0x24(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stfs f31, 0x28(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r19, r3
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stw r19, 0x2c(r3)
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    mr r4, r3
    mr r3, r28
    addi r4, r4, 0x40
    addi r5, r1, 0x2b0
    bl fn_803C380C
    mr r4, r21
    addi r3, r28, 0x114
    bl fn_803C2038
    stw r26, 0x4c(r3)
    addi r21, r21, 0x1
lbl_fn_803C3894_00001FA8:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001DF0
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00001FBC:
    addi r3, r1, 0xe0
    addi r4, r25, 0x319
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00002118
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00002118
    addi r3, r1, 0x94
    bl fn_803C9304
    lwz r4, 0x74(r28)
    addi r3, r1, 0x94
    mr r5, r4
    bl fn_803C9378
    li r17, 0x0
    b lbl_fn_803C3894_0000207C
lbl_fn_803C3894_00001FF8:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_0000208C
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_0000207C
    li r18, 0x0
    li r20, 0x0
    b lbl_fn_803C3894_0000206C
lbl_fn_803C3894_00002044:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    clrlwi r19, r3, 16
    mr r4, r17
    addi r3, r1, 0x94
    bl fn_803C93F4
    sthx r19, r3, r20
    addi r20, r20, 0x2
    addi r18, r18, 0x1
lbl_fn_803C3894_0000206C:
    lwz r0, 0x74(r28)
    cmpw r18, r0
    blt lbl_fn_803C3894_00002044
    addi r17, r17, 0x1
lbl_fn_803C3894_0000207C:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00001FF8
lbl_fn_803C3894_0000208C:
    bl fn_800827E0
    li r4, 0x1
    li r5, 0x20
    bl fn_803C5FC4
    lwz r4, 0x74(r28)
    addi r3, r28, 0xa0
    addi r6, r25, 0x32d
    li r5, 0x3
    bl fn_803C940C
    li r17, 0x0
    b lbl_fn_803C3894_000020F0
lbl_fn_803C3894_000020B8:
    addi r3, r28, 0xa0
    bl fn_80089ACC
    mr r20, r3
    mr r4, r17
    addi r3, r1, 0x94
    bl fn_803C93F4
    mr r19, r3
    mr r4, r17
    addi r3, r28, 0xa0
    bl fn_803C36B4
    mr r4, r19
    mr r5, r20
    bl fn_803CCF64
    addi r17, r17, 0x1
lbl_fn_803C3894_000020F0:
    addi r3, r28, 0xa0
    bl fn_80089ACC
    cmplw r17, r3
    blt lbl_fn_803C3894_000020B8
    bl fn_800827E0
    bl fn_803C5FD0
    addi r3, r1, 0x94
    li r4, -0x1
    bl fn_803C9318
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00002118:
    addi r3, r1, 0xe0
    addi r4, r25, 0x33f
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_000021C0
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_000021C0
    lwz r4, 0x74(r28)
    addi r3, r28, 0xa0
    addi r6, r25, 0x32d
    li r5, 0x3
    bl fn_803C940C
    li r17, 0x0
    b lbl_fn_803C3894_000021AC
lbl_fn_803C3894_00002150:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_000021AC
    mr r4, r17
    addi r3, r28, 0xa0
    bl fn_803C36B4
    lwz r5, 0x74(r28)
    addi r4, r1, 0x2b0
    bl fn_803CD598
    addi r17, r17, 0x1
lbl_fn_803C3894_000021AC:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002150
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_000021C0:
    addi r3, r1, 0xe0
    addi r4, r25, 0x357
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00002698
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00002698
    cmpwi r22, 0x7
    blt lbl_fn_803C3894_000023F4
    addi r3, r1, 0x88
    bl fn_803C94D0
    addi r3, r1, 0x7c
    bl fn_803C955C
    b lbl_fn_803C3894_00002310
lbl_fn_803C3894_000021F8:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002320
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00002310
    addi r3, r1, 0x2b0
    bl fn_800422CC
    bl fn_80684600
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r17, r3
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r18, r3
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    clrlwi r0, r3, 31
    mr r20, r3
    cmpwi r0, 0x1
    bne lbl_fn_803C3894_000022EC
    addi r3, r1, 0x108
    bl fn_803C95E8
    stw r17, 0x108(r1)
    mr r4, r18
    addi r3, r28, 0xac
    stw r18, 0x10c(r1)
    stw r26, 0x110(r1)
    bl fn_803C3674
    mr r19, r3
    mr r4, r17
    addi r3, r28, 0xac
    bl fn_803C3674
    mr r4, r3
    addi r3, r1, 0x28
    addi r4, r4, 0x4
    addi r5, r19, 0x4
    bl fn_80013410
    lfs f1, lbl_80885CCC
    addi r3, r1, 0x34
    addi r4, r1, 0x28
    bl fn_800F72CC
    addi r3, r1, 0x114
    addi r4, r1, 0x34
    bl fn_8000D124
    addi r3, r1, 0x88
    addi r4, r1, 0x108
    bl fn_803C95EC
lbl_fn_803C3894_000022EC:
    rlwinm r0, r20, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_803C3894_00002310
    stw r17, 0x70(r1)
    addi r3, r1, 0x7c
    addi r4, r1, 0x70
    stw r18, 0x74(r1)
    stw r26, 0x78(r1)
    bl fn_803C99A8
lbl_fn_803C3894_00002310:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000021F8
lbl_fn_803C3894_00002320:
    addi r3, r1, 0x88
    bl fn_803C9CDC
    mr r4, r3
    addi r3, r28, 0xb4
    addi r6, r25, 0x32d
    li r5, 0x3
    bl fn_803C9CE4
    li r17, 0x0
    b lbl_fn_803C3894_0000236C
lbl_fn_803C3894_00002344:
    mr r4, r17
    addi r3, r1, 0x88
    bl fn_803C9D8C
    mr r19, r3
    mr r4, r17
    addi r3, r28, 0xb4
    bl fn_803C36C4
    mr r4, r19
    bl fn_803C9D9C
    addi r17, r17, 0x1
lbl_fn_803C3894_0000236C:
    addi r3, r1, 0x88
    bl fn_803C9CDC
    cmplw r17, r3
    blt lbl_fn_803C3894_00002344
    addi r3, r1, 0x7c
    bl fn_803C9DC8
    mr r4, r3
    addi r3, r28, 0xbc
    addi r6, r25, 0x32d
    li r5, 0x3
    bl fn_803C9DD0
    li r17, 0x0
    b lbl_fn_803C3894_000023C8
lbl_fn_803C3894_000023A0:
    mr r4, r17
    addi r3, r1, 0x7c
    bl fn_803C9E58
    mr r19, r3
    mr r4, r17
    addi r3, r28, 0xbc
    bl fn_803C36D4
    mr r4, r19
    bl fn_803C9E68
    addi r17, r17, 0x1
lbl_fn_803C3894_000023C8:
    addi r3, r1, 0x7c
    bl fn_803C9DC8
    cmplw r17, r3
    blt lbl_fn_803C3894_000023A0
    addi r3, r1, 0x7c
    li r4, -0x1
    bl fn_803C9570
    addi r3, r1, 0x88
    li r4, -0x1
    bl fn_803C94E4
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_000023F4:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0x64
    bl fn_803C9E84
    lwz r4, 0xa8(r28)
    addi r3, r1, 0x64
    mr r5, r4
    bl fn_803C9EF8
    li r17, 0x0
    b lbl_fn_803C3894_000024A4
lbl_fn_803C3894_00002428:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000024B4
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_000024A4
    li r18, 0x0
    b lbl_fn_803C3894_00002494
lbl_fn_803C3894_00002470:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    clrlwi r19, r3, 24
    mr r4, r17
    addi r3, r1, 0x64
    bl fn_803C9F70
    stbx r19, r3, r18
    addi r18, r18, 0x1
lbl_fn_803C3894_00002494:
    lwz r0, 0xa8(r28)
    cmpw r18, r0
    blt lbl_fn_803C3894_00002470
    addi r17, r17, 0x1
lbl_fn_803C3894_000024A4:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002428
lbl_fn_803C3894_000024B4:
    addi r3, r1, 0x58
    bl fn_803C94D0
    addi r3, r1, 0x4c
    bl fn_803C955C
    li r20, 0x0
    b lbl_fn_803C3894_000025A8
lbl_fn_803C3894_000024CC:
    li r21, 0x0
    b lbl_fn_803C3894_00002594
lbl_fn_803C3894_000024D4:
    mr r4, r20
    addi r3, r1, 0x64
    bl fn_803C9F70
    lbzx r0, r3, r21
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803C3894_0000255C
    addi r3, r1, 0xf0
    bl fn_803C95E8
    stw r20, 0xf0(r1)
    mr r4, r21
    addi r3, r28, 0xac
    stw r21, 0xf4(r1)
    stw r26, 0xf8(r1)
    bl fn_803C3674
    mr r19, r3
    mr r4, r20
    addi r3, r28, 0xac
    bl fn_803C3674
    mr r4, r3
    addi r3, r1, 0x10
    addi r4, r4, 0x4
    addi r5, r19, 0x4
    bl fn_80013410
    lfs f1, lbl_80885CCC
    addi r3, r1, 0x1c
    addi r4, r1, 0x10
    bl fn_800F72CC
    addi r3, r1, 0xfc
    addi r4, r1, 0x1c
    bl fn_8000D124
    addi r3, r1, 0x58
    addi r4, r1, 0xf0
    bl fn_803C95EC
lbl_fn_803C3894_0000255C:
    mr r4, r20
    addi r3, r1, 0x64
    bl fn_803C9F70
    lbzx r0, r3, r21
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_803C3894_00002590
    stw r20, 0x40(r1)
    addi r3, r1, 0x4c
    addi r4, r1, 0x40
    stw r21, 0x44(r1)
    stw r26, 0x48(r1)
    bl fn_803C99A8
lbl_fn_803C3894_00002590:
    addi r21, r21, 0x1
lbl_fn_803C3894_00002594:
    addi r3, r28, 0xac
    bl fn_80089ACC
    cmplw r21, r3
    blt lbl_fn_803C3894_000024D4
    addi r20, r20, 0x1
lbl_fn_803C3894_000025A8:
    addi r3, r28, 0xac
    bl fn_80089ACC
    cmplw r20, r3
    blt lbl_fn_803C3894_000024CC
    addi r3, r1, 0x58
    bl fn_803C9CDC
    mr r4, r3
    addi r3, r28, 0xb4
    addi r6, r25, 0x32d
    li r5, 0x3
    bl fn_803C9CE4
    li r17, 0x0
    b lbl_fn_803C3894_00002604
lbl_fn_803C3894_000025DC:
    mr r4, r17
    addi r3, r1, 0x58
    bl fn_803C9D8C
    mr r20, r3
    mr r4, r17
    addi r3, r28, 0xb4
    bl fn_803C36C4
    mr r4, r20
    bl fn_803C9D9C
    addi r17, r17, 0x1
lbl_fn_803C3894_00002604:
    addi r3, r1, 0x58
    bl fn_803C9CDC
    cmplw r17, r3
    blt lbl_fn_803C3894_000025DC
    addi r3, r1, 0x4c
    bl fn_803C9DC8
    mr r4, r3
    addi r3, r28, 0xbc
    addi r6, r25, 0x32d
    li r5, 0x3
    bl fn_803C9DD0
    li r17, 0x0
    b lbl_fn_803C3894_00002660
lbl_fn_803C3894_00002638:
    mr r4, r17
    addi r3, r1, 0x4c
    bl fn_803C9E58
    mr r20, r3
    mr r4, r17
    addi r3, r28, 0xbc
    bl fn_803C36D4
    mr r4, r20
    bl fn_803C9E68
    addi r17, r17, 0x1
lbl_fn_803C3894_00002660:
    addi r3, r1, 0x4c
    bl fn_803C9DC8
    cmplw r17, r3
    blt lbl_fn_803C3894_00002638
    addi r3, r1, 0x4c
    li r4, -0x1
    bl fn_803C9570
    addi r3, r1, 0x58
    li r4, -0x1
    bl fn_803C94E4
    addi r3, r1, 0x64
    li r4, -0x1
    bl fn_803C9E98
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00002698:
    addi r3, r1, 0xe0
    addi r4, r25, 0x36c
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00002774
    cmpwi r29, 0x0
    bgt lbl_fn_803C3894_00002774
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0xcc
    addi r6, r25, 0x32d
    li r5, 0x3
    bl fn_803C9F84
    li r17, 0x0
    b lbl_fn_803C3894_00002760
lbl_fn_803C3894_000026DC:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0xe0
    bl fn_8020A780
    addi r3, r1, 0xe0
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00002830
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_803C3894_00002760
    addi r3, r1, 0xe0
    bl fn_8004212C
    bl fn_80684600
    mr r20, r3
    mr r4, r17
    addi r3, r28, 0xcc
    bl fn_803C36F4
    stw r20, 0x0(r3)
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r20, r3
    mr r4, r17
    addi r3, r28, 0xcc
    bl fn_803C36F4
    stw r20, 0x4(r3)
    addi r17, r17, 0x1
lbl_fn_803C3894_00002760:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000026DC
    b lbl_fn_803C3894_00002830
lbl_fn_803C3894_00002774:
    addi r3, r1, 0xe0
    addi r4, r25, 0x382
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00002830
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    mr r17, r3
    addi r3, r28, 0x180
    li r18, 0x0
    bl fn_803CA00C
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_000027C4
    mr r4, r17
    addi r3, r28, 0x180
    addi r6, r25, 0x38e
    li r5, 0x3
    bl fn_803C8810
    b lbl_fn_803C3894_000027E4
lbl_fn_803C3894_000027C4:
    addi r3, r28, 0x180
    bl fn_80089ACC
    mr r18, r3
    addi r3, r28, 0x180
    add r4, r18, r17
    addi r6, r25, 0x38e
    li r5, 0x3
    bl fn_803CA014
lbl_fn_803C3894_000027E4:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    beq lbl_fn_803C3894_00002830
    b lbl_fn_803C3894_00002820
lbl_fn_803C3894_000027F8:
    addi r3, r1, 0x2b0
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_8067CE80
    mr r20, r3
    mr r4, r18
    addi r3, r28, 0x180
    bl fn_803C0624
    stw r20, 0x0(r3)
    addi r18, r18, 0x1
lbl_fn_803C3894_00002820:
    addi r3, r28, 0x180
    bl fn_80089ACC
    cmpw r18, r3
    blt lbl_fn_803C3894_000027F8
lbl_fn_803C3894_00002830:
    addi r3, r1, 0x2b0
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C3894_00000288
    li r20, -0x1
    b lbl_fn_803C3894_000028A8
lbl_fn_803C3894_00002848:
    mr r4, r31
    addi r3, r28, 0xe4
    bl fn_803C3694
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803C3894_00002894
    mr r4, r31
    addi r3, r28, 0xe4
    bl fn_803C3694
    mr r4, r3
    addi r3, r28, 0xe4
    lwz r4, 0x2c(r4)
    bl fn_803C6028
    mr r21, r3
    mr r4, r31
    addi r3, r28, 0xe4
    bl fn_803C3694
    stw r21, 0x2c(r3)
    b lbl_fn_803C3894_000028A4
lbl_fn_803C3894_00002894:
    mr r4, r31
    addi r3, r28, 0xe4
    bl fn_803C3694
    stw r20, 0x2c(r3)
lbl_fn_803C3894_000028A4:
    addi r31, r31, 0x1
lbl_fn_803C3894_000028A8:
    addi r3, r28, 0xe4
    bl fn_80089ACC
    cmplw r31, r3
    blt lbl_fn_803C3894_00002848
    li r20, -0x1
    b lbl_fn_803C3894_00002920
lbl_fn_803C3894_000028C0:
    mr r4, r30
    addi r3, r28, 0xec
    bl fn_803C36A4
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803C3894_0000290C
    mr r4, r30
    addi r3, r28, 0xec
    bl fn_803C36A4
    mr r4, r3
    addi r3, r28, 0xec
    lwz r4, 0x20(r4)
    bl fn_803C5FE4
    mr r21, r3
    mr r4, r30
    addi r3, r28, 0xec
    bl fn_803C36A4
    stw r21, 0x20(r3)
    b lbl_fn_803C3894_0000291C
lbl_fn_803C3894_0000290C:
    mr r4, r30
    addi r3, r28, 0xec
    bl fn_803C36A4
    stw r20, 0x20(r3)
lbl_fn_803C3894_0000291C:
    addi r30, r30, 0x1
lbl_fn_803C3894_00002920:
    addi r3, r28, 0xec
    bl fn_80089ACC
    cmplw r30, r3
    blt lbl_fn_803C3894_000028C0
    addi r3, r1, 0xe0
    li r4, -0x1
    bl dtor_80013D60
    li r0, 0x938
    addi r11, r1, 0x930
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x930(r1)
    bl _restgpr_17
    lwz r0, 0x944(r1)
    mtlr r0
    addi r1, r1, 0x940
    blr
}
