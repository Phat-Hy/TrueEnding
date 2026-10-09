#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8005C448(void);
extern void fn_800844D8(void);
extern void fn_80489D08(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_80756380[];
extern u8 lbl_80790184[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_80886F8C;
extern u32 lbl_80886F90;
extern u32 lbl_80886F98;
extern u32 lbl_8088703C;
extern u32 lbl_80887044;

/* Function declarations */
void fn_8048AF9C(void);
void fn_8048B048(void);
void fn_8048B3B0(void);
void fn_8048B3B8(void);
void fn_8048B720(void);
void fn_8048BCA4(void);
void fn_8048BD04(void);
void fn_8048BD64(void);
void fn_8048C884(void);

asm void fn_8048AF9C(void)
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
    beq lbl_fn_8048AF9C_00000090
    addic. r4, r3, 0x10
    beq lbl_fn_8048AF9C_00000054
    beq lbl_fn_8048AF9C_00000054
    beq lbl_fn_8048AF9C_00000054
    beq lbl_fn_8048AF9C_00000054
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8048AF9C_00000054
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8048AF9C_00000054:
    cmpwi r30, 0x0
    beq lbl_fn_8048AF9C_00000080
    beq lbl_fn_8048AF9C_00000080
    beq lbl_fn_8048AF9C_00000080
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8048AF9C_00000080
    lwz r0, 0x4(r30)
    subf r0, r0, r0
    stw r0, 0x4(r30)
    bl dtor_80084684
lbl_fn_8048AF9C_00000080:
    cmpwi r31, 0x0
    ble lbl_fn_8048AF9C_00000090
    mr r3, r30
    bl dtor_80084684
lbl_fn_8048AF9C_00000090:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8048B048(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r29, r4
    mr r28, r3
    li r30, 0x1
    li r4, 0x0
    lwz r0, 0x23a4(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048B048_000000F8
lbl_fn_8048B048_000000DC:
    lwz r5, 0x23a0(r3)
    lwzx r5, r5, r4
    cmpw r5, r30
    blt lbl_fn_8048B048_000000F0
    addi r30, r5, 0x1
lbl_fn_8048B048_000000F0:
    addi r4, r4, 0x10
    bdnz lbl_fn_8048B048_000000DC
lbl_fn_8048B048_000000F8:
    lwz r5, 0x23a4(r3)
    lwz r4, 0x23a8(r3)
    cmplw r5, r4
    bge lbl_fn_8048B048_00000134
    addi r5, r5, 0x1
    lwz r4, 0x23a0(r3)
    stw r5, 0x23a4(r3)
    subi r0, r5, 0x1
    slwi r3, r0, 4
    stwux r30, r3, r4
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    b lbl_fn_8048B048_000003E0
lbl_fn_8048B048_00000134:
    lis r3, 0x1000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8048B048_0000016C
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048B048_0000016C:
    li r5, 0x0
    addi r4, r28, 0x23a8
    lis r3, 0x1000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x23a4(r28)
    lwz r31, 0x23a8(r28)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_8048B048_000001D4
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048B048_000001D4:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8048B048_00000224
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8048B048_00000218
    addi r3, r1, 0x10
lbl_fn_8048B048_00000218:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8048B048_00000268
lbl_fn_8048B048_00000224:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8048B048_00000260
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8048B048_00000254
    addi r3, r1, 0x10
lbl_fn_8048B048_00000254:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8048B048_00000268
lbl_fn_8048B048_00000260:
    lis r3, 0x1000
    subi r31, r3, 0x1
lbl_fn_8048B048_00000268:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8048B048_0000029C
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048B048_0000029C:
    slwi r3, r31, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8048B048_000002D0
    lis r3, __files@ha
    lis r4, lbl_80790184@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80790184@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048B048_000002D0:
    lwz r0, 0x18(r1)
    li r4, 0x0
    stw r27, 0x14(r1)
    slwi r3, r0, 4
    stw r31, 0x1c(r1)
    lwz r0, 0x23a4(r28)
    stw r0, 0x24(r1)
    slwi r0, r0, 4
    add r0, r27, r0
    stwux r30, r3, r0
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    slwi r0, r0, 4
    lwz r4, 0x23a4(r28)
    add r5, r3, r0
    lwz r7, 0x23a0(r28)
    slwi r0, r4, 4
    add r6, r7, r0
    addi r0, r6, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_8048B048_00000390
lbl_fn_8048B048_00000348:
    subic. r5, r5, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_8048B048_00000374
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r5)
lbl_fn_8048B048_00000374:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_8048B048_00000348
lbl_fn_8048B048_00000390:
    li r4, 0x0
    stw r4, 0x23a4(r28)
    addic. r0, r1, 0x14
    lwz r3, 0x23a8(r28)
    lwz r0, 0x1c(r1)
    stw r0, 0x23a8(r28)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x23a0(r28)
    stw r0, 0x23a0(r28)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x23a4(r28)
    stw r4, 0x18(r1)
    beq lbl_fn_8048B048_000003E0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8048B048_000003E0
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_8048B048_000003E0:
    lwz r3, 0x23a4(r28)
    mr r4, r29
    lwz r5, 0x23a0(r28)
    subi r0, r3, 0x1
    slwi r0, r0, 4
    add r3, r5, r0
    bl fn_80489D08
    mr r3, r30
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8048B3B0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8048B3B8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r29, r4
    mr r28, r3
    li r30, 0x1
    li r4, 0x0
    lwz r0, 0x2398(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048B3B8_00000468
lbl_fn_8048B3B8_0000044C:
    lwz r5, 0x2394(r3)
    lwzx r5, r5, r4
    cmpw r5, r30
    blt lbl_fn_8048B3B8_00000460
    addi r30, r5, 0x1
lbl_fn_8048B3B8_00000460:
    addi r4, r4, 0x10
    bdnz lbl_fn_8048B3B8_0000044C
lbl_fn_8048B3B8_00000468:
    lwz r5, 0x2398(r3)
    lwz r4, 0x239c(r3)
    cmplw r5, r4
    bge lbl_fn_8048B3B8_000004A4
    addi r5, r5, 0x1
    lwz r4, 0x2394(r3)
    stw r5, 0x2398(r3)
    subi r0, r5, 0x1
    slwi r3, r0, 4
    stwux r30, r3, r4
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    b lbl_fn_8048B3B8_00000750
lbl_fn_8048B3B8_000004A4:
    lis r3, 0x1000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8048B3B8_000004DC
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048B3B8_000004DC:
    li r5, 0x0
    addi r4, r28, 0x239c
    lis r3, 0x1000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x2398(r28)
    lwz r31, 0x239c(r28)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_8048B3B8_00000544
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048B3B8_00000544:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8048B3B8_00000594
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8048B3B8_00000588
    addi r3, r1, 0x10
lbl_fn_8048B3B8_00000588:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8048B3B8_000005D8
lbl_fn_8048B3B8_00000594:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8048B3B8_000005D0
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8048B3B8_000005C4
    addi r3, r1, 0x10
lbl_fn_8048B3B8_000005C4:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8048B3B8_000005D8
lbl_fn_8048B3B8_000005D0:
    lis r3, 0x1000
    subi r31, r3, 0x1
lbl_fn_8048B3B8_000005D8:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8048B3B8_0000060C
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048B3B8_0000060C:
    slwi r3, r31, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8048B3B8_00000640
    lis r3, __files@ha
    lis r4, lbl_80790184@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80790184@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048B3B8_00000640:
    lwz r0, 0x18(r1)
    li r4, 0x0
    stw r27, 0x14(r1)
    slwi r3, r0, 4
    stw r31, 0x1c(r1)
    lwz r0, 0x2398(r28)
    stw r0, 0x24(r1)
    slwi r0, r0, 4
    add r0, r27, r0
    stwux r30, r3, r0
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    slwi r0, r0, 4
    lwz r4, 0x2398(r28)
    add r5, r3, r0
    lwz r7, 0x2394(r28)
    slwi r0, r4, 4
    add r6, r7, r0
    addi r0, r6, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_8048B3B8_00000700
lbl_fn_8048B3B8_000006B8:
    subic. r5, r5, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_8048B3B8_000006E4
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r5)
lbl_fn_8048B3B8_000006E4:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_8048B3B8_000006B8
lbl_fn_8048B3B8_00000700:
    li r4, 0x0
    stw r4, 0x2398(r28)
    addic. r0, r1, 0x14
    lwz r3, 0x239c(r28)
    lwz r0, 0x1c(r1)
    stw r0, 0x239c(r28)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x2394(r28)
    stw r0, 0x2394(r28)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x2398(r28)
    stw r4, 0x18(r1)
    beq lbl_fn_8048B3B8_00000750
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8048B3B8_00000750
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_8048B3B8_00000750:
    lwz r3, 0x2398(r28)
    mr r4, r29
    lwz r5, 0x2394(r28)
    subi r0, r3, 0x1
    slwi r0, r0, 4
    add r3, r5, r0
    bl fn_80489D08
    mr r3, r30
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8048B720(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    fmr f30, f1
    stfd f29, 0x1f0(r1)
    fmr f31, f30
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stfd f26, 0x1c0(r1)
    psq_st f26, 0x1c8(r1), 0, 0
    stfd f25, 0x1b0(r1)
    psq_st f25, 0x1b8(r1), 0, 0
    stfd f24, 0x1a0(r1)
    psq_st f24, 0x1a8(r1), 0, 0
    stfd f23, 0x190(r1)
    psq_st f23, 0x198(r1), 0, 0
    stfd f22, 0x180(r1)
    psq_st f22, 0x188(r1), 0, 0
    stfd f21, 0x170(r1)
    psq_st f21, 0x178(r1), 0, 0
    stfd f20, 0x160(r1)
    psq_st f20, 0x168(r1), 0, 0
    stfd f19, 0x150(r1)
    psq_st f19, 0x158(r1), 0, 0
    stfd f18, 0x140(r1)
    psq_st f18, 0x148(r1), 0, 0
    stfd f17, 0x130(r1)
    psq_st f17, 0x138(r1), 0, 0
    stfd f16, 0x120(r1)
    psq_st f16, 0x128(r1), 0, 0
    stfd f15, 0x110(r1)
    psq_st f15, 0x118(r1), 0, 0
    stfd f14, 0x100(r1)
    psq_st f14, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r4
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8048B720_000008E4
    lwz r12, 0x8(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r12, 0x8(r3)
    mr r31, r3
    lfs f1, lbl_80886F8C
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x8(r31)
    fmr f14, f1
    fmr f1, f30
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r3, 0x8(r30)
    fsubs f31, f1, f14
    cmpwi r3, 0x0
    beq lbl_fn_8048B720_00000C5C
    lwz r12, 0x8(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r12, 0x8(r3)
    mr r31, r3
    lfs f1, lbl_80886F8C
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x8(r31)
    fmr f14, f1
    fmr f1, f30
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    fsubs f0, f1, f14
    fadds f31, f31, f0
    b lbl_fn_8048B720_00000C5C
lbl_fn_8048B720_000008E4:
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8048B720_00000C5C
    lfs f30, lbl_80886F98
    lis r9, lbl_807C7030@ha
    lfs f4, lbl_80886F8C
    addi r7, r1, 0xd4
    fmr f19, f30
    stfs f4, 0xe0(r1)
    lfs f3, lbl_80886F90
    addi r9, r9, lbl_807C7030@l
    stfd f30, 0xf0(r1)
    addi r10, r1, 0xc8
    stfs f4, 0xe4(r1)
    addi r12, r1, 0xe0
    lfs f0, lbl_8088703C
    li r3, 0x0
    stfs f4, 0xe8(r1)
    lfs f18, lbl_80887044
lbl_fn_8048B720_00000930:
    fcmpo cr0, f30, f4
    lwz r8, 0xc(r4)
    cror eq, lt, eq
    bne lbl_fn_8048B720_00000958
    lwz r5, 0x0(r8)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xdc(r1)
    b lbl_fn_8048B720_00000C08
lbl_fn_8048B720_00000958:
    fcmpo cr0, f30, f3
    cror eq, gt, eq
    bne lbl_fn_8048B720_0000098C
    lwz r5, 0x4(r8)
    lwz r6, 0x0(r8)
    subi r0, r5, 0x1
    mulli r0, r0, 0xc
    add r5, r6, r0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xdc(r1)
    b lbl_fn_8048B720_00000C08
lbl_fn_8048B720_0000098C:
    lfs f5, 0xc(r8)
    li r11, 0x0
    lwz r0, 0x1c(r8)
    li r5, 0x0
    fmuls f6, f5, f30
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048B720_00000BF8
lbl_fn_8048B720_000009AC:
    lwz r6, 0x10(r8)
    lfsx f5, r6, r5
    fcmpo cr0, f6, f5
    cror eq, lt, eq
    bne lbl_fn_8048B720_00000BE8
    fcmpu cr0, f4, f6
    bne lbl_fn_8048B720_000009D0
    fmr f20, f4
    b lbl_fn_8048B720_000009D4
lbl_fn_8048B720_000009D0:
    fdivs f20, f6, f5
lbl_fn_8048B720_000009D4:
    slwi r0, r11, 2
    lwz r31, 0x0(r8)
    subf r8, r11, r0
    fsubs f14, f3, f20
    addi r0, r8, 0x2
    mulli r5, r0, 0xc
    addi r6, r8, 0x3
    addi r0, r8, 0x1
    add r11, r31, r5
    mulli r5, r6, 0xc
    lfs f5, 0x8(r11)
    lfs f6, 0x4(r11)
    lfs f7, 0x0(r11)
    fmuls f5, f5, f0
    add r5, r31, r5
    fmuls f6, f6, f0
    lfs f8, 0x8(r5)
    fmuls f7, f7, f0
    lfs f9, 0x4(r5)
    fmuls f27, f8, f20
    lfs f10, 0x0(r5)
    fmuls f21, f9, f20
    mulli r0, r0, 0xc
    fmuls f11, f10, f20
    stfs f27, 0x10(r1)
    fmuls f9, f6, f20
    fmuls f10, f7, f20
    fmuls f26, f27, f20
    add r5, r31, r0
    fmuls f25, f21, f20
    lfs f16, 0x4(r5)
    fmuls f12, f9, f20
    fmuls f13, f10, f20
    fmuls f8, f5, f20
    lfsx f17, r31, r0
    fmuls f24, f11, f20
    stfs f11, 0x8(r1)
    lfs f15, 0x8(r5)
    fmuls f11, f8, f20
    fmuls f23, f26, f20
    stfs f21, 0xc(r1)
    fmuls f22, f25, f20
    fmuls f21, f24, f20
    stfs f24, 0x14(r1)
    fmuls f29, f11, f14
    fmuls f28, f12, f14
    stfs f25, 0x18(r1)
    fmuls f27, f13, f14
    fmuls f16, f16, f0
    stfs f26, 0x1c(r1)
    fmuls f17, f17, f0
    fmuls f15, f15, f0
    stfs f21, 0x20(r1)
    stfs f22, 0x24(r1)
    stfs f23, 0x28(r1)
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f10, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f12, 0x48(r1)
    stfs f11, 0x4c(r1)
    stfs f27, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f17, 0x5c(r1)
    stfs f16, 0x60(r1)
    mulli r0, r8, 0xc
    fmuls f5, f15, f20
    fmuls f6, f16, f20
    stfs f15, 0x64(r1)
    fmuls f15, f17, f20
    add r5, r31, r0
    lfs f11, 0x8(r5)
    fmuls f8, f6, f14
    lfs f10, 0x4(r5)
    fmuls f7, f5, f14
    fmuls f12, f11, f14
    lfsx f11, r31, r0
    fmuls f13, f10, f14
    fmuls f9, f15, f14
    stfs f15, 0x68(r1)
    fmuls f15, f12, f14
    fmuls f11, f11, f14
    stfs f6, 0x6c(r1)
    fmuls f16, f13, f14
    fmuls f10, f7, f14
    stfs f9, 0x74(r1)
    fmuls f6, f11, f14
    fmuls f17, f15, f14
    stfs f5, 0x70(r1)
    fmuls f24, f8, f14
    fmuls f20, f16, f14
    stfs f8, 0x78(r1)
    fadds f5, f17, f10
    fmuls f9, f9, f14
    stfs f7, 0x7c(r1)
    fmuls f8, f6, f14
    fadds f25, f5, f29
    stfs f9, 0x80(r1)
    fadds f14, f20, f24
    fadds f7, f8, f9
    stfs f10, 0x88(r1)
    fadds f2, f25, f23
    fadds f9, f14, f28
    stfs f24, 0x84(r1)
    fadds f23, f7, f27
    stfs f11, 0x8c(r1)
    fadds f22, f9, f22
    fadds f10, f23, f21
    stfs f13, 0x90(r1)
    stfs f22, 0xcc(r1)
    stfs f10, 0xc8(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f12, 0x94(r1)
    stfs f6, 0x98(r1)
    stfs f16, 0x9c(r1)
    stfs f15, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f20, 0xa8(r1)
    stfs f17, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f14, 0xb4(r1)
    stfs f5, 0xb8(r1)
    stfs f23, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f25, 0xc4(r1)
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xdc(r1)
    b lbl_fn_8048B720_00000C08
lbl_fn_8048B720_00000BE8:
    fsubs f6, f6, f5
    addi r11, r11, 0x1
    addi r5, r5, 0x4
    bdnz lbl_fn_8048B720_000009AC
lbl_fn_8048B720_00000BF8:
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r9)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0xdc(r1)
lbl_fn_8048B720_00000C08:
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    lfs f2, 0x8(r7)
    lfs f5, 0xe0(r1)
    stfs f2, 0xe8(r1)
    fsubs f6, f31, f5
    fabs f6, f6
    frsp f6, f6
    fcmpo cr0, f6, f18
    blt lbl_fn_8048B720_00000C58
    fcmpo cr0, f31, f5
    lfd f5, 0xf0(r1)
    fmuls f19, f19, f5
    ble lbl_fn_8048B720_00000C48
    fadds f30, f30, f19
    b lbl_fn_8048B720_00000C4C
lbl_fn_8048B720_00000C48:
    fsubs f30, f30, f19
lbl_fn_8048B720_00000C4C:
    addi r3, r3, 0x1
    cmpwi r3, 0xa
    blt lbl_fn_8048B720_00000930
lbl_fn_8048B720_00000C58:
    lfs f31, 0xe4(r1)
lbl_fn_8048B720_00000C5C:
    fmr f1, f31
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    psq_l f26, 0x1c8(r1), 0, 0
    lfd f26, 0x1c0(r1)
    psq_l f25, 0x1b8(r1), 0, 0
    lfd f25, 0x1b0(r1)
    psq_l f24, 0x1a8(r1), 0, 0
    lfd f24, 0x1a0(r1)
    psq_l f23, 0x198(r1), 0, 0
    lfd f23, 0x190(r1)
    psq_l f22, 0x188(r1), 0, 0
    lfd f22, 0x180(r1)
    psq_l f21, 0x178(r1), 0, 0
    lfd f21, 0x170(r1)
    psq_l f20, 0x168(r1), 0, 0
    lfd f20, 0x160(r1)
    psq_l f19, 0x158(r1), 0, 0
    lfd f19, 0x150(r1)
    psq_l f18, 0x148(r1), 0, 0
    lfd f18, 0x140(r1)
    psq_l f17, 0x138(r1), 0, 0
    lfd f17, 0x130(r1)
    psq_l f16, 0x128(r1), 0, 0
    lfd f16, 0x120(r1)
    psq_l f15, 0x118(r1), 0, 0
    lfd f15, 0x110(r1)
    psq_l f14, 0x108(r1), 0, 0
    lfd f14, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_8048BCA4(void)
{
    nofralloc
    lwz r0, 0x23a4(r3)
    li r7, -0x1
    li r8, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048BCA4_00000D44
lbl_fn_8048BCA4_00000D24:
    lwz r6, 0x23a0(r3)
    lwzx r0, r6, r5
    cmpw r4, r0
    bne lbl_fn_8048BCA4_00000D38
    mr r7, r8
lbl_fn_8048BCA4_00000D38:
    addi r8, r8, 0x1
    addi r5, r5, 0x10
    bdnz lbl_fn_8048BCA4_00000D24
lbl_fn_8048BCA4_00000D44:
    cmpwi r7, -0x1
    bne lbl_fn_8048BCA4_00000D54
    lfs f1, lbl_80886F8C
    blr
lbl_fn_8048BCA4_00000D54:
    lwz r4, 0x23a0(r3)
    slwi r0, r7, 4
    add r4, r4, r0
    b fn_8048B720
    blr
}

asm void fn_8048BD04(void)
{
    nofralloc
    lwz r0, 0x2398(r3)
    li r7, -0x1
    li r8, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048BD04_00000DA4
lbl_fn_8048BD04_00000D84:
    lwz r6, 0x2394(r3)
    lwzx r0, r6, r5
    cmpw r4, r0
    bne lbl_fn_8048BD04_00000D98
    mr r7, r8
lbl_fn_8048BD04_00000D98:
    addi r8, r8, 0x1
    addi r5, r5, 0x10
    bdnz lbl_fn_8048BD04_00000D84
lbl_fn_8048BD04_00000DA4:
    cmpwi r7, -0x1
    bne lbl_fn_8048BD04_00000DB4
    lfs f1, lbl_80886F8C
    blr
lbl_fn_8048BD04_00000DB4:
    lwz r4, 0x2394(r3)
    slwi r0, r7, 4
    add r4, r4, r0
    b fn_8048B720
    blr
}

asm void fn_8048BD64(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r29, r3
    li r30, 0x0
    li r28, 0x0
    lwz r0, 0x23a4(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048BD64_000018D4
lbl_fn_8048BD64_00000DF4:
    lwz r0, 0x23a0(r3)
    add r5, r0, r28
    lwzx r0, r28, r0
    cmpw r4, r0
    bne lbl_fn_8048BD64_000018C8
    lwz r31, 0x4(r5)
    cmpwi r31, 0x0
    beq lbl_fn_8048BD64_000012F8
    beq lbl_fn_8048BD64_000012E8
    addic. r0, r31, 0x4
    beq lbl_fn_8048BD64_0000107C
    lwz r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_0000107C
    addic. r0, r25, 0x4
    beq lbl_fn_8048BD64_00000F50
    lwz r24, 0x4(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00000F50
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_00000EC4
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00000EC4
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00000E88
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00000E88
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00000E88:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00000EBC
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00000EBC
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00000EBC:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_00000EC4:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00000F48
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00000F48
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00000F0C
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00000F0C
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00000F0C:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00000F40
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00000F40
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00000F40:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_00000F48:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_00000F50:
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_00001074
    lwz r24, 0x0(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001074
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_00000FE8
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00000FE8
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00000FAC
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00000FAC
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00000FAC:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00000FE0
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00000FE0
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00000FE0:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_00000FE8:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_0000106C
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_0000106C
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00001030
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001030
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00001030:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00001064
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001064
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00001064:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_0000106C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_00001074:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_0000107C:
    cmpwi r31, 0x0
    beq lbl_fn_8048BD64_000012E0
    lwz r25, 0x0(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_000012E0
    addic. r0, r25, 0x4
    beq lbl_fn_8048BD64_000011B4
    lwz r24, 0x4(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000011B4
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_00001128
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00001128
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_000010EC
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_000010EC
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_000010EC:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00001120
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001120
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00001120:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_00001128:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000011AC
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_000011AC
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00001170
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001170
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00001170:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_000011A4
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_000011A4
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_000011A4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_000011AC:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_000011B4:
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_000012D8
    lwz r24, 0x0(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000012D8
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_0000124C
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_0000124C
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00001210
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001210
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00001210:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00001244
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001244
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00001244:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_0000124C:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000012D0
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_000012D0
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00001294
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001294
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00001294:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_000012C8
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_000012C8
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_000012C8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_000012D0:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_000012D8:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_000012E0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048BD64_000012E8:
    lwz r0, 0x23a0(r29)
    li r4, 0x0
    add r3, r0, r28
    stw r4, 0x4(r3)
lbl_fn_8048BD64_000012F8:
    lwz r0, 0x23a0(r29)
    add r3, r0, r28
    lwz r31, 0x8(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8048BD64_000017F0
    beq lbl_fn_8048BD64_000017E0
    addic. r0, r31, 0x4
    beq lbl_fn_8048BD64_00001574
    lwz r26, 0x4(r31)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_00001574
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00001448
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001448
    addic. r0, r27, 0x4
    beq lbl_fn_8048BD64_000013BC
    lwz r25, 0x4(r27)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_000013BC
    addic. r0, r25, 0x4
    beq lbl_fn_8048BD64_00001380
    lwz r24, 0x4(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001380
    addi r3, r24, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r24
    li r4, -0x1
    bl fn_8005C448
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_00001380:
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_000013B4
    lwz r24, 0x0(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000013B4
    addi r3, r24, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r24
    li r4, -0x1
    bl fn_8005C448
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_000013B4:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_000013BC:
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001440
    lwz r24, 0x0(r27)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001440
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_00001404
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_00001404
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_00001404:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001438
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_00001438
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_00001438:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_00001440:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_00001448:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_0000156C
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_0000156C
    addic. r0, r27, 0x4
    beq lbl_fn_8048BD64_000014E0
    lwz r24, 0x4(r27)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000014E0
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_000014A4
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_000014A4
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_000014A4:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000014D8
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_000014D8
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_000014D8:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_000014E0:
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_00001564
    lwz r24, 0x0(r27)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001564
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_00001528
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_00001528
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_00001528:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_0000155C
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_0000155C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_0000155C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_00001564:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_0000156C:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_00001574:
    cmpwi r31, 0x0
    beq lbl_fn_8048BD64_000017D8
    lwz r27, 0x0(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_000017D8
    addic. r0, r27, 0x4
    beq lbl_fn_8048BD64_000016AC
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_000016AC
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00001620
    lwz r24, 0x4(r26)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001620
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_000015E4
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_000015E4
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_000015E4:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001618
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_00001618
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_00001618:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_00001620:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_000016A4
    lwz r24, 0x0(r26)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000016A4
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_00001668
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_00001668
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_00001668:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_0000169C
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_0000169C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_0000169C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_000016A4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_000016AC:
    cmpwi r27, 0x0
    beq lbl_fn_8048BD64_000017D0
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_000017D0
    addic. r0, r26, 0x4
    beq lbl_fn_8048BD64_00001744
    lwz r24, 0x4(r26)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001744
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_00001708
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_00001708
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_00001708:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_0000173C
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_0000173C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_0000173C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_00001744:
    cmpwi r26, 0x0
    beq lbl_fn_8048BD64_000017C8
    lwz r24, 0x0(r26)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000017C8
    addic. r0, r24, 0x4
    beq lbl_fn_8048BD64_0000178C
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_0000178C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_0000178C:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_000017C0
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048BD64_000017C0
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048BD64_000017C0:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_000017C8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048BD64_000017D0:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048BD64_000017D8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048BD64_000017E0:
    lwz r0, 0x23a0(r29)
    li r4, 0x0
    add r3, r0, r28
    stw r4, 0x8(r3)
lbl_fn_8048BD64_000017F0:
    lwz r0, 0x23a0(r29)
    add r3, r0, r28
    lwz r24, 0xc(r3)
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_00001884
    beq lbl_fn_8048BD64_00001874
    addic. r3, r24, 0x10
    beq lbl_fn_8048BD64_0000183C
    beq lbl_fn_8048BD64_0000183C
    beq lbl_fn_8048BD64_0000183C
    beq lbl_fn_8048BD64_0000183C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8048BD64_0000183C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8048BD64_0000183C:
    cmpwi r24, 0x0
    beq lbl_fn_8048BD64_0000186C
    beq lbl_fn_8048BD64_0000186C
    beq lbl_fn_8048BD64_0000186C
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8048BD64_0000186C
    lwz r0, 0x4(r24)
    subf r0, r0, r0
    stw r0, 0x4(r24)
    lwz r3, 0x0(r24)
    bl dtor_80084684
lbl_fn_8048BD64_0000186C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048BD64_00001874:
    lwz r0, 0x23a0(r29)
    li r4, 0x0
    add r3, r0, r28
    stw r4, 0xc(r3)
lbl_fn_8048BD64_00001884:
    lwz r0, 0x23a4(r29)
    slwi r3, r30, 4
    lwz r4, 0x23a0(r29)
    slwi r0, r0, 4
    add r3, r4, r3
    add r0, r4, r0
    subf r0, r3, r0
    addi r4, r3, 0x10
    srawi r0, r0, 4
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 4
    bl memmove
    lwz r3, 0x23a4(r29)
    subi r0, r3, 0x1
    stw r0, 0x23a4(r29)
    b lbl_fn_8048BD64_000018D4
lbl_fn_8048BD64_000018C8:
    addi r30, r30, 0x1
    addi r28, r28, 0x10
    bdnz lbl_fn_8048BD64_00000DF4
lbl_fn_8048BD64_000018D4:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8048C884(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r29, r3
    li r30, 0x0
    li r28, 0x0
    lwz r0, 0x2398(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048C884_000023F4
lbl_fn_8048C884_00001914:
    lwz r0, 0x2394(r3)
    add r5, r0, r28
    lwzx r0, r28, r0
    cmpw r4, r0
    bne lbl_fn_8048C884_000023E8
    lwz r31, 0x4(r5)
    cmpwi r31, 0x0
    beq lbl_fn_8048C884_00001E18
    beq lbl_fn_8048C884_00001E08
    addic. r0, r31, 0x4
    beq lbl_fn_8048C884_00001B9C
    lwz r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001B9C
    addic. r0, r25, 0x4
    beq lbl_fn_8048C884_00001A70
    lwz r24, 0x4(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001A70
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_000019E4
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_000019E4
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_000019A8
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_000019A8
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_000019A8:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_000019DC
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_000019DC
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_000019DC:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_000019E4:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001A68
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001A68
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00001A2C
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001A2C
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001A2C:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001A60
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001A60
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001A60:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_00001A68:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00001A70:
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001B94
    lwz r24, 0x0(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001B94
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00001B08
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001B08
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00001ACC
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001ACC
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001ACC:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001B00
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001B00
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001B00:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_00001B08:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001B8C
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001B8C
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00001B50
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001B50
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001B50:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001B84
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001B84
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001B84:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_00001B8C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00001B94:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00001B9C:
    cmpwi r31, 0x0
    beq lbl_fn_8048C884_00001E00
    lwz r25, 0x0(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001E00
    addic. r0, r25, 0x4
    beq lbl_fn_8048C884_00001CD4
    lwz r24, 0x4(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001CD4
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00001C48
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001C48
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00001C0C
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001C0C
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001C0C:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001C40
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001C40
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001C40:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_00001C48:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001CCC
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001CCC
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00001C90
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001C90
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001C90:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001CC4
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001CC4
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001CC4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_00001CCC:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00001CD4:
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001DF8
    lwz r24, 0x0(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001DF8
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00001D6C
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001D6C
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00001D30
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001D30
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001D30:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001D64
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001D64
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001D64:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_00001D6C:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001DF0
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001DF0
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00001DB4
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001DB4
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001DB4:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00001DE8
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001DE8
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001DE8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_00001DF0:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00001DF8:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00001E00:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048C884_00001E08:
    lwz r0, 0x2394(r29)
    li r4, 0x0
    add r3, r0, r28
    stw r4, 0x4(r3)
lbl_fn_8048C884_00001E18:
    lwz r0, 0x2394(r29)
    add r3, r0, r28
    lwz r31, 0x8(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8048C884_00002310
    beq lbl_fn_8048C884_00002300
    addic. r0, r31, 0x4
    beq lbl_fn_8048C884_00002094
    lwz r26, 0x4(r31)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_00002094
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00001F68
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001F68
    addic. r0, r27, 0x4
    beq lbl_fn_8048C884_00001EDC
    lwz r25, 0x4(r27)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001EDC
    addic. r0, r25, 0x4
    beq lbl_fn_8048C884_00001EA0
    lwz r24, 0x4(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001EA0
    addi r3, r24, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r24
    li r4, -0x1
    bl fn_8005C448
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00001EA0:
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001ED4
    lwz r24, 0x0(r25)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001ED4
    addi r3, r24, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r24
    li r4, -0x1
    bl fn_8005C448
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00001ED4:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00001EDC:
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00001F60
    lwz r24, 0x0(r27)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001F60
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00001F24
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001F24
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00001F24:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001F58
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001F58
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00001F58:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00001F60:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_00001F68:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_0000208C
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_0000208C
    addic. r0, r27, 0x4
    beq lbl_fn_8048C884_00002000
    lwz r24, 0x4(r27)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00002000
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00001FC4
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001FC4
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00001FC4:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00001FF8
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00001FF8
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00001FF8:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00002000:
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_00002084
    lwz r24, 0x0(r27)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00002084
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00002048
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00002048
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00002048:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_0000207C
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_0000207C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_0000207C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00002084:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_0000208C:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_00002094:
    cmpwi r31, 0x0
    beq lbl_fn_8048C884_000022F8
    lwz r27, 0x0(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_000022F8
    addic. r0, r27, 0x4
    beq lbl_fn_8048C884_000021CC
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_000021CC
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00002140
    lwz r24, 0x4(r26)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00002140
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00002104
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00002104
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00002104:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00002138
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00002138
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00002138:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00002140:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_000021C4
    lwz r24, 0x0(r26)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_000021C4
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00002188
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00002188
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00002188:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_000021BC
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_000021BC
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_000021BC:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_000021C4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_000021CC:
    cmpwi r27, 0x0
    beq lbl_fn_8048C884_000022F0
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_000022F0
    addic. r0, r26, 0x4
    beq lbl_fn_8048C884_00002264
    lwz r24, 0x4(r26)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_00002264
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_00002228
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_00002228
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_00002228:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_0000225C
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_0000225C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_0000225C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00002264:
    cmpwi r26, 0x0
    beq lbl_fn_8048C884_000022E8
    lwz r24, 0x0(r26)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_000022E8
    addic. r0, r24, 0x4
    beq lbl_fn_8048C884_000022AC
    lwz r25, 0x4(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_000022AC
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_000022AC:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_000022E0
    lwz r25, 0x0(r24)
    cmpwi r25, 0x0
    beq lbl_fn_8048C884_000022E0
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048C884_000022E0:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_000022E8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048C884_000022F0:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048C884_000022F8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048C884_00002300:
    lwz r0, 0x2394(r29)
    li r4, 0x0
    add r3, r0, r28
    stw r4, 0x8(r3)
lbl_fn_8048C884_00002310:
    lwz r0, 0x2394(r29)
    add r3, r0, r28
    lwz r24, 0xc(r3)
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_000023A4
    beq lbl_fn_8048C884_00002394
    addic. r3, r24, 0x10
    beq lbl_fn_8048C884_0000235C
    beq lbl_fn_8048C884_0000235C
    beq lbl_fn_8048C884_0000235C
    beq lbl_fn_8048C884_0000235C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8048C884_0000235C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8048C884_0000235C:
    cmpwi r24, 0x0
    beq lbl_fn_8048C884_0000238C
    beq lbl_fn_8048C884_0000238C
    beq lbl_fn_8048C884_0000238C
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8048C884_0000238C
    lwz r0, 0x4(r24)
    subf r0, r0, r0
    stw r0, 0x4(r24)
    lwz r3, 0x0(r24)
    bl dtor_80084684
lbl_fn_8048C884_0000238C:
    mr r3, r24
    bl dtor_80084684
lbl_fn_8048C884_00002394:
    lwz r0, 0x2394(r29)
    li r4, 0x0
    add r3, r0, r28
    stw r4, 0xc(r3)
lbl_fn_8048C884_000023A4:
    lwz r0, 0x2398(r29)
    slwi r3, r30, 4
    lwz r4, 0x2394(r29)
    slwi r0, r0, 4
    add r3, r4, r3
    add r0, r4, r0
    subf r0, r3, r0
    addi r4, r3, 0x10
    srawi r0, r0, 4
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 4
    bl memmove
    lwz r3, 0x2398(r29)
    subi r0, r3, 0x1
    stw r0, 0x2398(r29)
    b lbl_fn_8048C884_000023F4
lbl_fn_8048C884_000023E8:
    addi r30, r30, 0x1
    addi r28, r28, 0x10
    bdnz lbl_fn_8048C884_00001914
lbl_fn_8048C884_000023F4:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
