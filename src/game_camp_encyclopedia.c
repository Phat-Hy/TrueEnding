#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80013D60(void);
extern void fn_8000D760(void);
extern void fn_8000E18C(void);
extern void fn_8000EB8C(void);
extern void fn_8000ECA8(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80089ACC(void);
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
extern void fn_80288390(void);
extern void fn_8028B74C(void);
extern void fn_803C0624(void);
extern void fn_803C0928(void);
extern void fn_803C3724(void);
extern void fn_803C795C(void);
extern void fn_803C7964(void);
extern void fn_803C7A24(void);
extern void fn_803C8810(void);
extern void fn_8068236C(void);
extern void fn_80684600(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_807500DC[];

/* Small data declarations */
extern u32 lbl_8087DEA8;
extern u32 lbl_8087DEAC;
extern u32 lbl_8087DEB0;
extern u32 lbl_8087DEB4;
extern u32 lbl_8087DEB8;
extern u32 lbl_8087DEBC;
extern u32 lbl_8087DEC0;
extern u32 lbl_8087DEC4;
extern u32 lbl_8087DEC8;
extern u32 lbl_8087DECC;
extern u32 lbl_8087DED0;
extern u32 lbl_8087DED4;
extern u32 lbl_8087DED8;
extern u32 lbl_8087DEDC;
extern u32 lbl_8087DEE0;
extern u32 lbl_8087DEE4;

/* Function declarations */
void fn_803C5FC4(void);
void fn_803C5FD0(void);
void fn_803C5FE4(void);
void fn_803C6028(void);
void fn_803C606C(void);
void fn_803C6380(void);
void fn_803C63C8(void);
void fn_803C63D0(void);
void fn_803C6478(void);
void fn_803C647C(void);
void fn_803C65DC(void);
void fn_803C65EC(void);
void fn_803C6894(void);
void fn_803C68DC(void);
void fn_803C68E4(void);
void fn_803C698C(void);
void fn_803C6990(void);
void fn_803C6AD8(void);
void fn_803C6AE8(void);
void fn_803C6D90(void);
void fn_803C6DD8(void);
void fn_803C6DE0(void);
void fn_803C6E88(void);
void fn_803C6E8C(void);
void fn_803C6FD4(void);
void fn_803C6FE4(void);
void fn_803C728C(void);
void fn_803C72D4(void);
void fn_803C72DC(void);
void fn_803C7384(void);
void fn_803C7388(void);
void fn_803C74D0(void);
void fn_803C74E0(void);

asm void fn_803C5FC4(void)
{
    nofralloc
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    blr
}

asm void fn_803C5FD0(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0x20
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_803C5FE4(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    li r7, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C5FE4_0000005C
lbl_fn_803C5FE4_00000038:
    lwz r5, 0x4(r3)
    lwzx r0, r5, r6
    cmpw r4, r0
    bne lbl_fn_803C5FE4_00000050
    mr r3, r7
    blr
lbl_fn_803C5FE4_00000050:
    addi r6, r6, 0x28
    addi r7, r7, 0x1
    bdnz lbl_fn_803C5FE4_00000038
lbl_fn_803C5FE4_0000005C:
    li r3, -0x1
    blr
}

asm void fn_803C6028(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    li r7, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C6028_000000A0
lbl_fn_803C6028_0000007C:
    lwz r5, 0x4(r3)
    lwzx r0, r5, r6
    cmpw r4, r0
    bne lbl_fn_803C6028_00000094
    mr r3, r7
    blr
lbl_fn_803C6028_00000094:
    addi r6, r6, 0x48
    addi r7, r7, 0x1
    bdnz lbl_fn_803C6028_0000007C
lbl_fn_803C6028_000000A0:
    li r3, -0x1
    blr
}

asm void fn_803C606C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stmw r23, 0xec(r1)
    mr r28, r4
    mr r27, r3
    mr r29, r5
    mr r30, r6
    mr r3, r28
    li r31, 0x0
    bl fn_803C63C8
    cmpwi r3, 0x0
    bne lbl_fn_803C606C_00000108
    mr r3, r30
    bl fn_8005B3CC
    bl fn_80684600
    lis r5, lbl_807500DC@ha
    mr r4, r3
    addi r5, r5, lbl_807500DC@l
    mr r3, r28
    addi r6, r5, 0x3b3
    li r5, 0x1
    bl fn_803C63D0
    b lbl_fn_803C606C_00000140
lbl_fn_803C606C_00000108:
    mr r3, r28
    bl fn_80089ACC
    mr r31, r3
    mr r3, r30
    bl fn_8005B3CC
    bl fn_80684600
    lis r6, lbl_807500DC@ha
    mr r0, r3
    addi r6, r6, lbl_807500DC@l
    mr r3, r28
    add r4, r31, r0
    li r5, 0x1
    addi r6, r6, 0x3b3
    bl fn_803C647C
lbl_fn_803C606C_00000140:
    lis r25, lbl_807500DC@ha
    addi r25, r25, lbl_807500DC@l
    b lbl_fn_803C606C_00000398
lbl_fn_803C606C_0000014C:
    mr r3, r30
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r25, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C606C_00000184
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C606C_000003A8
lbl_fn_803C606C_00000184:
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_803C606C_000001AC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C606C_00000398
lbl_fn_803C606C_000001AC:
    mr r3, r28
    mr r4, r31
    bl fn_803C65DC
    mr r4, r3
    mr r3, r27
    mr r5, r30
    bl fn_803C3724
    mr r3, r28
    mr r4, r31
    li r23, 0x0
    bl fn_803C65DC
    li r4, 0x0
    li r5, 0x80
    addi r3, r3, 0x10
    bl memset
    mr r3, r30
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8003E4A4
    addi r3, r1, 0x5c
    addi r4, r25, 0x24d
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xbc
    addi r4, r1, 0x8
    addi r5, r1, 0x5c
    bl fn_800EC2C4
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x80
    addi r4, r1, 0xbc
    bl fn_800EC654
    li r24, 0x0
    b lbl_fn_803C606C_00000298
lbl_fn_803C606C_00000240:
    addi r3, r1, 0x80
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    mr r5, r3
    mr r3, r27
    mr r4, r29
    bl fn_803C6380
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_803C606C_00000290
    mr r3, r28
    mr r4, r31
    bl fn_803C65DC
    addi r23, r23, 0x1
    add r3, r3, r24
    cmpwi r23, 0x20
    stw r26, 0x10(r3)
    addi r24, r24, 0x4
    bge lbl_fn_803C606C_000002C8
lbl_fn_803C606C_00000290:
    addi r3, r1, 0x80
    bl fn_800ED4E0
lbl_fn_803C606C_00000298:
    addi r3, r1, 0x20
    addi r4, r1, 0xbc
    bl fn_800EDFE8
    addi r3, r1, 0x80
    addi r4, r1, 0x20
    bl fn_800EC254
    mr r26, r3
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r26, 0x0
    bne lbl_fn_803C606C_00000240
lbl_fn_803C606C_000002C8:
    addi r3, r1, 0x80
    li r4, -0x1
    bl fn_800ED42C
    mr r3, r30
    bl fn_8005B3CC
    bl fn_80684600
    mr r26, r3
    mr r3, r28
    mr r4, r31
    bl fn_803C65DC
    stw r26, 0x90(r3)
    mr r3, r28
    mr r4, r31
    bl fn_803C65DC
    mr r4, r3
    mr r3, r27
    lwz r5, 0x90(r4)
    mr r4, r29
    bl fn_803C6380
    mr r26, r3
    mr r3, r28
    mr r4, r31
    bl fn_803C65DC
    stw r26, 0x94(r3)
    mr r3, r30
    bl fn_8005B3CC
    bl fn_80684600
    mr r26, r3
    mr r3, r28
    mr r4, r31
    bl fn_803C65DC
    stw r26, 0x98(r3)
    mr r3, r30
    bl fn_8005B3CC
    mr r3, r30
    bl fn_8005B3CC
    bl fn_80684600
    mr r26, r3
    mr r3, r28
    mr r4, r31
    bl fn_803C65DC
    stw r26, 0x9c(r3)
    addi r3, r1, 0xbc
    li r4, -0x1
    addi r31, r31, 0x1
    bl fn_800EC5BC
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_803C606C_00000398:
    mr r3, r30
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C606C_0000014C
lbl_fn_803C606C_000003A8:
    lmw r23, 0xec(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803C6380(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    li r7, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C6380_000003FC
lbl_fn_803C6380_000003D4:
    lwz r6, 0x4(r4)
    lwzx r0, r6, r3
    cmpw r5, r0
    bne lbl_fn_803C6380_000003F0
    mulli r0, r7, 0x148
    add r3, r6, r0
    blr
lbl_fn_803C6380_000003F0:
    addi r3, r3, 0x148
    addi r7, r7, 0x1
    bdnz lbl_fn_803C6380_000003D4
lbl_fn_803C6380_000003FC:
    li r3, 0x0
    blr
}

asm void fn_803C63C8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C63D0(void)
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
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C63D0_00000448
    beq lbl_fn_803C63D0_00000448
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C63D0_00000448:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C63D0_00000490
    mulli r3, r30, 0xa0
    mr r4, r31
    la r5, lbl_8087DEE4
    la r6, lbl_8087DEE0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C6478@ha
    mr r7, r30
    addi r4, r4, fn_803C6478@l
    li r5, 0x0
    li r6, 0xa0
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C63D0_00000498
lbl_fn_803C63D0_00000490:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C63D0_00000498:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C6478(void)
{
    nofralloc
    blr
}

asm void fn_803C647C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803C647C_000005F8
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r28, r4
    beq lbl_fn_803C647C_000005DC
    mulli r3, r4, 0xa0
    mr r4, r5
    la r5, lbl_8087DEDC
    la r6, lbl_8087DED8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C6478@ha
    mr r7, r28
    addi r4, r4, fn_803C6478@l
    li r5, 0x0
    li r6, 0xa0
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803C647C_000005E4
    cmpwi r30, 0x0
    beq lbl_fn_803C647C_000005E4
    li r10, 0x0
    li r3, 0x0
    li r5, 0x10
    b lbl_fn_803C647C_000005BC
lbl_fn_803C647C_00000550:
    lwz r4, 0x4(r29)
    add r9, r31, r3
    lwzx r0, r31, r3
    addi r6, r9, 0xc
    stwx r0, r4, r3
    add r8, r4, r3
    addi r7, r8, 0xc
    lfs f2, 0xc(r9)
    psq_l f1, 0x4(r9), 0, 0
    psq_st f1, 0x4(r8), 0, 0
    stfs f2, 0xc(r8)
    mtctr r5
lbl_fn_803C647C_00000580:
    lwz r4, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_803C647C_00000580
    lwz r0, 0x90(r9)
    addi r10, r10, 0x1
    stw r0, 0x90(r8)
    addi r3, r3, 0xa0
    lwz r0, 0x94(r9)
    stw r0, 0x94(r8)
    lwz r0, 0x98(r9)
    stw r0, 0x98(r8)
    lwz r0, 0x9c(r9)
    stw r0, 0x9c(r8)
lbl_fn_803C647C_000005BC:
    lwz r4, 0x0(r29)
    mr r0, r30
    cmplw r30, r4
    blt lbl_fn_803C647C_000005D0
    mr r0, r4
lbl_fn_803C647C_000005D0:
    cmplw r10, r0
    blt lbl_fn_803C647C_00000550
    b lbl_fn_803C647C_000005E4
lbl_fn_803C647C_000005DC:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C647C_000005E4:
    cmpwi r31, 0x0
    beq lbl_fn_803C647C_000005F8
    beq lbl_fn_803C647C_000005F8
    subi r3, r31, 0x10
    bl fn_80084C24
lbl_fn_803C647C_000005F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C65DC(void)
{
    nofralloc
    mulli r0, r4, 0xa0
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C65EC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stmw r23, 0xec(r1)
    mr r24, r4
    mr r23, r3
    mr r25, r5
    mr r26, r6
    mr r3, r24
    li r28, 0x0
    bl fn_803C68DC
    cmpwi r3, 0x0
    bne lbl_fn_803C65EC_00000688
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    lis r5, lbl_807500DC@ha
    mr r4, r3
    addi r5, r5, lbl_807500DC@l
    mr r3, r24
    addi r6, r5, 0x3c3
    li r5, 0x1
    bl fn_803C68E4
    b lbl_fn_803C65EC_000006C0
lbl_fn_803C65EC_00000688:
    mr r3, r24
    bl fn_80089ACC
    mr r28, r3
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    lis r6, lbl_807500DC@ha
    mr r0, r3
    addi r6, r6, lbl_807500DC@l
    mr r3, r24
    add r4, r28, r0
    li r5, 0x1
    addi r6, r6, 0x3c3
    bl fn_803C6990
lbl_fn_803C65EC_000006C0:
    lis r30, lbl_807500DC@ha
    addi r30, r30, lbl_807500DC@l
    b lbl_fn_803C65EC_000008AC
lbl_fn_803C65EC_000006CC:
    mr r3, r26
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r30, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C65EC_00000704
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C65EC_000008BC
lbl_fn_803C65EC_00000704:
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_803C65EC_0000072C
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C65EC_000008AC
lbl_fn_803C65EC_0000072C:
    mr r3, r24
    mr r4, r28
    bl fn_803C6AD8
    mr r4, r3
    mr r3, r23
    mr r5, r26
    bl fn_803C3724
    mr r3, r24
    mr r4, r28
    li r27, 0x0
    bl fn_803C6AD8
    li r4, 0x0
    li r5, 0x80
    addi r3, r3, 0x10
    bl memset
    mr r3, r26
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8003E4A4
    addi r3, r1, 0x5c
    addi r4, r30, 0x24d
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xbc
    addi r4, r1, 0x8
    addi r5, r1, 0x5c
    bl fn_800EC2C4
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x80
    addi r4, r1, 0xbc
    bl fn_800EC654
    li r29, 0x0
    b lbl_fn_803C65EC_00000818
lbl_fn_803C65EC_000007C0:
    addi r3, r1, 0x80
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    mr r5, r3
    mr r3, r23
    mr r4, r25
    bl fn_803C6894
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803C65EC_00000810
    mr r3, r24
    mr r4, r28
    bl fn_803C6AD8
    addi r27, r27, 0x1
    add r3, r3, r29
    cmpwi r27, 0x20
    stw r31, 0x10(r3)
    addi r29, r29, 0x4
    bge lbl_fn_803C65EC_00000848
lbl_fn_803C65EC_00000810:
    addi r3, r1, 0x80
    bl fn_800ED4E0
lbl_fn_803C65EC_00000818:
    addi r3, r1, 0x20
    addi r4, r1, 0xbc
    bl fn_800EDFE8
    addi r3, r1, 0x80
    addi r4, r1, 0x20
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_803C65EC_000007C0
lbl_fn_803C65EC_00000848:
    addi r3, r1, 0x80
    li r4, -0x1
    bl fn_800ED42C
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r5, r3
    mr r3, r23
    mr r4, r25
    bl fn_803C6894
    mr r31, r3
    mr r3, r24
    mr r4, r28
    bl fn_803C6AD8
    stw r31, 0x90(r3)
    addi r3, r1, 0xbc
    li r4, -0x1
    addi r28, r28, 0x1
    bl fn_800EC5BC
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_803C65EC_000008AC:
    mr r3, r26
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C65EC_000006CC
lbl_fn_803C65EC_000008BC:
    lmw r23, 0xec(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803C6894(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    li r7, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C6894_00000910
lbl_fn_803C6894_000008E8:
    lwz r6, 0x4(r4)
    lwzx r0, r6, r3
    cmpw r5, r0
    bne lbl_fn_803C6894_00000904
    mulli r0, r7, 0x28
    add r3, r6, r0
    blr
lbl_fn_803C6894_00000904:
    addi r3, r3, 0x28
    addi r7, r7, 0x1
    bdnz lbl_fn_803C6894_000008E8
lbl_fn_803C6894_00000910:
    li r3, 0x0
    blr
}

asm void fn_803C68DC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C68E4(void)
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
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C68E4_0000095C
    beq lbl_fn_803C68E4_0000095C
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C68E4_0000095C:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C68E4_000009A4
    mulli r3, r30, 0x94
    mr r4, r31
    la r5, lbl_8087DED4
    la r6, lbl_8087DED0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C698C@ha
    mr r7, r30
    addi r4, r4, fn_803C698C@l
    li r5, 0x0
    li r6, 0x94
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C68E4_000009AC
lbl_fn_803C68E4_000009A4:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C68E4_000009AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C698C(void)
{
    nofralloc
    blr
}

asm void fn_803C6990(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803C6990_00000AF4
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r28, r4
    beq lbl_fn_803C6990_00000AD8
    mulli r3, r4, 0x94
    mr r4, r5
    la r5, lbl_8087DECC
    la r6, lbl_8087DEC8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C698C@ha
    mr r7, r28
    addi r4, r4, fn_803C698C@l
    li r5, 0x0
    li r6, 0x94
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803C6990_00000AE0
    cmpwi r30, 0x0
    beq lbl_fn_803C6990_00000AE0
    li r10, 0x0
    li r3, 0x0
    li r5, 0x10
    b lbl_fn_803C6990_00000AB8
lbl_fn_803C6990_00000A64:
    lwz r4, 0x4(r29)
    add r9, r31, r3
    lwzx r0, r31, r3
    addi r6, r9, 0xc
    stwx r0, r4, r3
    add r8, r4, r3
    addi r7, r8, 0xc
    lfs f2, 0xc(r9)
    psq_l f1, 0x4(r9), 0, 0
    psq_st f1, 0x4(r8), 0, 0
    stfs f2, 0xc(r8)
    mtctr r5
lbl_fn_803C6990_00000A94:
    lwz r4, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_803C6990_00000A94
    lwz r0, 0x90(r9)
    addi r3, r3, 0x94
    stw r0, 0x90(r8)
    addi r10, r10, 0x1
lbl_fn_803C6990_00000AB8:
    lwz r4, 0x0(r29)
    mr r0, r30
    cmplw r30, r4
    blt lbl_fn_803C6990_00000ACC
    mr r0, r4
lbl_fn_803C6990_00000ACC:
    cmplw r10, r0
    blt lbl_fn_803C6990_00000A64
    b lbl_fn_803C6990_00000AE0
lbl_fn_803C6990_00000AD8:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C6990_00000AE0:
    cmpwi r31, 0x0
    beq lbl_fn_803C6990_00000AF4
    beq lbl_fn_803C6990_00000AF4
    subi r3, r31, 0x10
    bl fn_80084C24
lbl_fn_803C6990_00000AF4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C6AD8(void)
{
    nofralloc
    mulli r0, r4, 0x94
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C6AE8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stmw r23, 0xec(r1)
    mr r24, r4
    mr r23, r3
    mr r25, r5
    mr r26, r6
    mr r3, r24
    li r28, 0x0
    bl fn_803C6DD8
    cmpwi r3, 0x0
    bne lbl_fn_803C6AE8_00000B84
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    lis r5, lbl_807500DC@ha
    mr r4, r3
    addi r5, r5, lbl_807500DC@l
    mr r3, r24
    addi r6, r5, 0x3c3
    li r5, 0x1
    bl fn_803C6DE0
    b lbl_fn_803C6AE8_00000BBC
lbl_fn_803C6AE8_00000B84:
    mr r3, r24
    bl fn_80089ACC
    mr r28, r3
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    lis r6, lbl_807500DC@ha
    mr r0, r3
    addi r6, r6, lbl_807500DC@l
    mr r3, r24
    add r4, r28, r0
    li r5, 0x1
    addi r6, r6, 0x3c3
    bl fn_803C6E8C
lbl_fn_803C6AE8_00000BBC:
    lis r30, lbl_807500DC@ha
    addi r30, r30, lbl_807500DC@l
    b lbl_fn_803C6AE8_00000DA8
lbl_fn_803C6AE8_00000BC8:
    mr r3, r26
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r30, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C6AE8_00000C00
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C6AE8_00000DB8
lbl_fn_803C6AE8_00000C00:
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_803C6AE8_00000C28
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C6AE8_00000DA8
lbl_fn_803C6AE8_00000C28:
    mr r3, r24
    mr r4, r28
    bl fn_803C6FD4
    mr r4, r3
    mr r3, r23
    mr r5, r26
    bl fn_803C3724
    mr r3, r24
    mr r4, r28
    li r27, 0x0
    bl fn_803C6FD4
    li r4, 0x0
    li r5, 0x80
    addi r3, r3, 0x10
    bl memset
    mr r3, r26
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8003E4A4
    addi r3, r1, 0x5c
    addi r4, r30, 0x24d
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xbc
    addi r4, r1, 0x8
    addi r5, r1, 0x5c
    bl fn_800EC2C4
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x80
    addi r4, r1, 0xbc
    bl fn_800EC654
    li r29, 0x0
    b lbl_fn_803C6AE8_00000D14
lbl_fn_803C6AE8_00000CBC:
    addi r3, r1, 0x80
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    mr r5, r3
    mr r3, r23
    mr r4, r25
    bl fn_803C6D90
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803C6AE8_00000D0C
    mr r3, r24
    mr r4, r28
    bl fn_803C6FD4
    addi r27, r27, 0x1
    add r3, r3, r29
    cmpwi r27, 0x20
    stw r31, 0x10(r3)
    addi r29, r29, 0x4
    bge lbl_fn_803C6AE8_00000D44
lbl_fn_803C6AE8_00000D0C:
    addi r3, r1, 0x80
    bl fn_800ED4E0
lbl_fn_803C6AE8_00000D14:
    addi r3, r1, 0x20
    addi r4, r1, 0xbc
    bl fn_800EDFE8
    addi r3, r1, 0x80
    addi r4, r1, 0x20
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_803C6AE8_00000CBC
lbl_fn_803C6AE8_00000D44:
    addi r3, r1, 0x80
    li r4, -0x1
    bl fn_800ED42C
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r5, r3
    mr r3, r23
    mr r4, r25
    bl fn_803C6D90
    mr r31, r3
    mr r3, r24
    mr r4, r28
    bl fn_803C6FD4
    stw r31, 0x90(r3)
    addi r3, r1, 0xbc
    li r4, -0x1
    addi r28, r28, 0x1
    bl fn_800EC5BC
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_803C6AE8_00000DA8:
    mr r3, r26
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C6AE8_00000BC8
lbl_fn_803C6AE8_00000DB8:
    lmw r23, 0xec(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803C6D90(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    li r7, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C6D90_00000E0C
lbl_fn_803C6D90_00000DE4:
    lwz r6, 0x4(r4)
    lwzx r0, r6, r3
    cmpw r5, r0
    bne lbl_fn_803C6D90_00000E00
    slwi r0, r7, 6
    add r3, r6, r0
    blr
lbl_fn_803C6D90_00000E00:
    addi r3, r3, 0x40
    addi r7, r7, 0x1
    bdnz lbl_fn_803C6D90_00000DE4
lbl_fn_803C6D90_00000E0C:
    li r3, 0x0
    blr
}

asm void fn_803C6DD8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C6DE0(void)
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
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C6DE0_00000E58
    beq lbl_fn_803C6DE0_00000E58
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C6DE0_00000E58:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C6DE0_00000EA0
    mulli r3, r30, 0x94
    mr r4, r31
    la r5, lbl_8087DEC4
    la r6, lbl_8087DEC0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C6E88@ha
    mr r7, r30
    addi r4, r4, fn_803C6E88@l
    li r5, 0x0
    li r6, 0x94
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C6DE0_00000EA8
lbl_fn_803C6DE0_00000EA0:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C6DE0_00000EA8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C6E88(void)
{
    nofralloc
    blr
}

asm void fn_803C6E8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803C6E8C_00000FF0
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r28, r4
    beq lbl_fn_803C6E8C_00000FD4
    mulli r3, r4, 0x94
    mr r4, r5
    la r5, lbl_8087DEBC
    la r6, lbl_8087DEB8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C6E88@ha
    mr r7, r28
    addi r4, r4, fn_803C6E88@l
    li r5, 0x0
    li r6, 0x94
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803C6E8C_00000FDC
    cmpwi r30, 0x0
    beq lbl_fn_803C6E8C_00000FDC
    li r10, 0x0
    li r3, 0x0
    li r5, 0x10
    b lbl_fn_803C6E8C_00000FB4
lbl_fn_803C6E8C_00000F60:
    lwz r4, 0x4(r29)
    add r9, r31, r3
    lwzx r0, r31, r3
    addi r6, r9, 0xc
    stwx r0, r4, r3
    add r8, r4, r3
    addi r7, r8, 0xc
    lfs f2, 0xc(r9)
    psq_l f1, 0x4(r9), 0, 0
    psq_st f1, 0x4(r8), 0, 0
    stfs f2, 0xc(r8)
    mtctr r5
lbl_fn_803C6E8C_00000F90:
    lwz r4, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_803C6E8C_00000F90
    lwz r0, 0x90(r9)
    addi r3, r3, 0x94
    stw r0, 0x90(r8)
    addi r10, r10, 0x1
lbl_fn_803C6E8C_00000FB4:
    lwz r4, 0x0(r29)
    mr r0, r30
    cmplw r30, r4
    blt lbl_fn_803C6E8C_00000FC8
    mr r0, r4
lbl_fn_803C6E8C_00000FC8:
    cmplw r10, r0
    blt lbl_fn_803C6E8C_00000F60
    b lbl_fn_803C6E8C_00000FDC
lbl_fn_803C6E8C_00000FD4:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C6E8C_00000FDC:
    cmpwi r31, 0x0
    beq lbl_fn_803C6E8C_00000FF0
    beq lbl_fn_803C6E8C_00000FF0
    subi r3, r31, 0x10
    bl fn_80084C24
lbl_fn_803C6E8C_00000FF0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C6FD4(void)
{
    nofralloc
    mulli r0, r4, 0x94
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C6FE4(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stmw r23, 0xec(r1)
    mr r24, r4
    mr r23, r3
    mr r25, r5
    mr r26, r6
    mr r3, r24
    li r28, 0x0
    bl fn_803C72D4
    cmpwi r3, 0x0
    bne lbl_fn_803C6FE4_00001080
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    lis r5, lbl_807500DC@ha
    mr r4, r3
    addi r5, r5, lbl_807500DC@l
    mr r3, r24
    addi r6, r5, 0x3c3
    li r5, 0x1
    bl fn_803C72DC
    b lbl_fn_803C6FE4_000010B8
lbl_fn_803C6FE4_00001080:
    mr r3, r24
    bl fn_80089ACC
    mr r28, r3
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    lis r6, lbl_807500DC@ha
    mr r0, r3
    addi r6, r6, lbl_807500DC@l
    mr r3, r24
    add r4, r28, r0
    li r5, 0x1
    addi r6, r6, 0x3c3
    bl fn_803C7388
lbl_fn_803C6FE4_000010B8:
    lis r30, lbl_807500DC@ha
    addi r30, r30, lbl_807500DC@l
    b lbl_fn_803C6FE4_000012A4
lbl_fn_803C6FE4_000010C4:
    mr r3, r26
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r30, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C6FE4_000010FC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C6FE4_000012B4
lbl_fn_803C6FE4_000010FC:
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_803C6FE4_00001124
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C6FE4_000012A4
lbl_fn_803C6FE4_00001124:
    mr r3, r24
    mr r4, r28
    bl fn_803C74D0
    mr r4, r3
    mr r3, r23
    mr r5, r26
    bl fn_803C3724
    mr r3, r24
    mr r4, r28
    li r27, 0x0
    bl fn_803C74D0
    li r4, 0x0
    li r5, 0x80
    addi r3, r3, 0x10
    bl memset
    mr r3, r26
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8003E4A4
    addi r3, r1, 0x5c
    addi r4, r30, 0x24d
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xbc
    addi r4, r1, 0x8
    addi r5, r1, 0x5c
    bl fn_800EC2C4
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x80
    addi r4, r1, 0xbc
    bl fn_800EC654
    li r29, 0x0
    b lbl_fn_803C6FE4_00001210
lbl_fn_803C6FE4_000011B8:
    addi r3, r1, 0x80
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    mr r5, r3
    mr r3, r23
    mr r4, r25
    bl fn_803C728C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803C6FE4_00001208
    mr r3, r24
    mr r4, r28
    bl fn_803C74D0
    addi r27, r27, 0x1
    add r3, r3, r29
    cmpwi r27, 0x20
    stw r31, 0x10(r3)
    addi r29, r29, 0x4
    bge lbl_fn_803C6FE4_00001240
lbl_fn_803C6FE4_00001208:
    addi r3, r1, 0x80
    bl fn_800ED4E0
lbl_fn_803C6FE4_00001210:
    addi r3, r1, 0x20
    addi r4, r1, 0xbc
    bl fn_800EDFE8
    addi r3, r1, 0x80
    addi r4, r1, 0x20
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_803C6FE4_000011B8
lbl_fn_803C6FE4_00001240:
    addi r3, r1, 0x80
    li r4, -0x1
    bl fn_800ED42C
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r5, r3
    mr r3, r23
    mr r4, r25
    bl fn_803C728C
    mr r31, r3
    mr r3, r24
    mr r4, r28
    bl fn_803C74D0
    stw r31, 0x90(r3)
    addi r3, r1, 0xbc
    li r4, -0x1
    addi r28, r28, 0x1
    bl fn_800EC5BC
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_803C6FE4_000012A4:
    mr r3, r26
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C6FE4_000010C4
lbl_fn_803C6FE4_000012B4:
    lmw r23, 0xec(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803C728C(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    li r7, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C728C_00001308
lbl_fn_803C728C_000012E0:
    lwz r6, 0x4(r4)
    lwzx r0, r6, r3
    cmpw r5, r0
    bne lbl_fn_803C728C_000012FC
    mulli r0, r7, 0x30
    add r3, r6, r0
    blr
lbl_fn_803C728C_000012FC:
    addi r3, r3, 0x30
    addi r7, r7, 0x1
    bdnz lbl_fn_803C728C_000012E0
lbl_fn_803C728C_00001308:
    li r3, 0x0
    blr
}

asm void fn_803C72D4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C72DC(void)
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
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C72DC_00001354
    beq lbl_fn_803C72DC_00001354
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C72DC_00001354:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C72DC_0000139C
    mulli r3, r30, 0x94
    mr r4, r31
    la r5, lbl_8087DEB4
    la r6, lbl_8087DEB0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7384@ha
    mr r7, r30
    addi r4, r4, fn_803C7384@l
    li r5, 0x0
    li r6, 0x94
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C72DC_000013A4
lbl_fn_803C72DC_0000139C:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C72DC_000013A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C7384(void)
{
    nofralloc
    blr
}

asm void fn_803C7388(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803C7388_000014EC
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r28, r4
    beq lbl_fn_803C7388_000014D0
    mulli r3, r4, 0x94
    mr r4, r5
    la r5, lbl_8087DEAC
    la r6, lbl_8087DEA8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7384@ha
    mr r7, r28
    addi r4, r4, fn_803C7384@l
    li r5, 0x0
    li r6, 0x94
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803C7388_000014D8
    cmpwi r30, 0x0
    beq lbl_fn_803C7388_000014D8
    li r10, 0x0
    li r3, 0x0
    li r5, 0x10
    b lbl_fn_803C7388_000014B0
lbl_fn_803C7388_0000145C:
    lwz r4, 0x4(r29)
    add r9, r31, r3
    lwzx r0, r31, r3
    addi r6, r9, 0xc
    stwx r0, r4, r3
    add r8, r4, r3
    addi r7, r8, 0xc
    lfs f2, 0xc(r9)
    psq_l f1, 0x4(r9), 0, 0
    psq_st f1, 0x4(r8), 0, 0
    stfs f2, 0xc(r8)
    mtctr r5
lbl_fn_803C7388_0000148C:
    lwz r4, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_803C7388_0000148C
    lwz r0, 0x90(r9)
    addi r3, r3, 0x94
    stw r0, 0x90(r8)
    addi r10, r10, 0x1
lbl_fn_803C7388_000014B0:
    lwz r4, 0x0(r29)
    mr r0, r30
    cmplw r30, r4
    blt lbl_fn_803C7388_000014C4
    mr r0, r4
lbl_fn_803C7388_000014C4:
    cmplw r10, r0
    blt lbl_fn_803C7388_0000145C
    b lbl_fn_803C7388_000014D8
lbl_fn_803C7388_000014D0:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C7388_000014D8:
    cmpwi r31, 0x0
    beq lbl_fn_803C7388_000014EC
    beq lbl_fn_803C7388_000014EC
    subi r3, r31, 0x10
    bl fn_80084C24
lbl_fn_803C7388_000014EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C74D0(void)
{
    nofralloc
    mulli r0, r4, 0x94
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C74E0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x128(r1)
    stmw r20, 0xf8(r1)
    mr r25, r4
    mr r24, r3
    mr r26, r5
    mr r27, r6
    mr r3, r25
    li r29, 0x0
    bl fn_803C795C
    cmpwi r3, 0x0
    bne lbl_fn_803C74E0_00001580
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    lis r5, lbl_807500DC@ha
    mr r4, r3
    addi r5, r5, lbl_807500DC@l
    mr r3, r25
    addi r6, r5, 0x3d3
    li r5, 0x1
    bl fn_803C7964
    b lbl_fn_803C74E0_000015B8
lbl_fn_803C74E0_00001580:
    mr r3, r25
    bl fn_80089ACC
    mr r29, r3
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    lis r6, lbl_807500DC@ha
    mr r0, r3
    addi r6, r6, lbl_807500DC@l
    mr r3, r25
    add r4, r29, r0
    li r5, 0x1
    addi r6, r6, 0x3d3
    bl fn_803C7A24
lbl_fn_803C74E0_000015B8:
    mulli r30, r27, 0x2710
    lis r3, lbl_807500DC@ha
    mr r28, r29
    addi r31, r3, lbl_807500DC@l
    li r22, 0x0
    b lbl_fn_803C74E0_00001970
lbl_fn_803C74E0_000015D0:
    mr r3, r26
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x24
    bl fn_8003E4A4
    addi r3, r1, 0x24
    addi r4, r31, 0xfe
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_803C74E0_00001608
    addi r3, r1, 0x24
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C74E0_00001980
lbl_fn_803C74E0_00001608:
    addi r3, r1, 0x24
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_803C74E0_00001630
    addi r3, r1, 0x24
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_803C74E0_00001970
lbl_fn_803C74E0_00001630:
    addi r3, r1, 0x24
    bl fn_8004212C
    bl fn_80684600
    add r23, r29, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stw r23, 0x10(r3)
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_803C3724
    mr r3, r26
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stfs f31, 0x14(r3)
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stw r23, 0x18(r3)
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stw r23, 0x1c(r3)
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stw r23, 0x20(r3)
    mr r3, r26
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0xc
    bl fn_80288390
    addi r3, r1, 0x6c
    addi r4, r31, 0x24d
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xcc
    addi r4, r1, 0x18
    addi r5, r1, 0x6c
    bl fn_800EC2C4
    addi r3, r1, 0x6c
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x90
    addi r4, r1, 0xcc
    bl fn_800EC654
    b lbl_fn_803C74E0_00001770
lbl_fn_803C74E0_00001748:
    addi r3, r1, 0x90
    bl fn_800ED4D8
    bl fn_8004212C
    bl fn_80684600
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8000E18C
    addi r3, r1, 0x90
    bl fn_800ED4E0
lbl_fn_803C74E0_00001770:
    addi r3, r1, 0x30
    addi r4, r1, 0xcc
    bl fn_800EDFE8
    addi r3, r1, 0x90
    addi r4, r1, 0x30
    bl fn_800EC254
    mr r23, r3
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r23, 0x0
    bne lbl_fn_803C74E0_00001748
    addi r3, r1, 0x90
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0xc
    bl fn_800E0AA8
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    mr r4, r23
    addi r6, r31, 0x24f
    li r5, 0x3
    addi r3, r3, 0x140
    bl fn_803C8810
    li r21, 0x0
    b lbl_fn_803C74E0_00001830
lbl_fn_803C74E0_000017E0:
    cmpwi r27, 0x0
    ble lbl_fn_803C74E0_00001800
    mr r4, r21
    addi r3, r1, 0xc
    bl fn_8028B74C
    lwz r0, 0x0(r3)
    add r0, r0, r30
    stw r0, 0x0(r3)
lbl_fn_803C74E0_00001800:
    mr r4, r21
    addi r3, r1, 0xc
    bl fn_8028B74C
    lwz r23, 0x0(r3)
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    mr r4, r21
    addi r3, r3, 0x140
    bl fn_803C0624
    stw r23, 0x0(r3)
    addi r21, r21, 0x1
lbl_fn_803C74E0_00001830:
    addi r3, r1, 0xc
    bl fn_800E0AA8
    cmplw r21, r3
    blt lbl_fn_803C74E0_000017E0
    mr r3, r26
    bl fn_8005B3CC
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stw r23, 0x24(r3)
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stw r23, 0x28(r3)
    mr r3, r26
    bl fn_8005B3CC
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    mr r4, r23
    li r5, 0xff
    addi r3, r3, 0x2c
    bl fn_8068236C
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stb r22, 0x12b(r3)
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stw r23, 0x12c(r3)
    li r20, 0x0
    li r21, 0x0
lbl_fn_803C74E0_000018E8:
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    addi r20, r20, 0x1
    add r3, r3, r21
    cmpwi r20, 0x3
    stw r23, 0x130(r3)
    addi r21, r21, 0x4
    blt lbl_fn_803C74E0_000018E8
    mr r3, r26
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r25
    mr r4, r28
    bl fn_803C0928
    stw r23, 0x13c(r3)
    addi r3, r1, 0xcc
    li r4, -0x1
    addi r28, r28, 0x1
    bl fn_800EC5BC
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_8000D760
    addi r3, r1, 0x18
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x24
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_803C74E0_00001970:
    mr r3, r26
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803C74E0_000015D0
lbl_fn_803C74E0_00001980:
    lfd f31, 0x128(r1)
    lmw r20, 0xf8(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
