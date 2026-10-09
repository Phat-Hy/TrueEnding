#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void fn_8009A584(void);
extern void fn_8009A5A8(void);
extern void fn_805F89F0(void);

/* External data declarations */

/* Small data declarations */

/* Function declarations */
void fn_800902BC(void);
void fn_800902C0(void);
void fn_800904E0(void);
void fn_80090584(void);
void fn_8009076C(void);
void fn_80090834(void);
void fn_800908FC(void);
void fn_800909B0(void);
void fn_80090C58(void);

asm void fn_800902BC(void)
{
    nofralloc
    blr
}

asm void fn_800902C0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r26, 0x88(r1)
    mr r31, r4
    addi r29, r3, 0x8
    mr r30, r3
    mr r26, r5
    lwz r0, 0x50(r3)
    mulli r0, r0, 0x18
    add r4, r3, r0
    lwz r27, 0x16c(r4)
    lwz r28, 0x178(r4)
    cmpwi r27, 0x0
    beq lbl_fn_800902C0_00000210
    li r0, 0x0
    stw r0, 0x1c(r1)
    lwz r6, 0xb8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800902C0_00000070
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    addi r3, r3, 0xbc
    bctrl
lbl_fn_800902C0_00000070:
    lwz r5, 0x34(r29)
    mr r4, r27
    lwz r8, 0xd4(r30)
    mr r6, r28
    lwz r9, 0xcc(r30)
    addi r3, r1, 0x30
    addi r7, r1, 0x1c
    bl fn_800904E0
    addic. r3, r1, 0x1c
    beq lbl_fn_800902C0_000000CC
    lwz r4, 0x1c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800902C0_000000CC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800902C0_000000C4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800902C0_000000C4:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_800902C0_000000CC:
    lwz r6, 0x0(r26)
    cmpwi r6, 0x0
    beq lbl_fn_800902C0_00000148
    li r0, 0x0
    stw r0, 0x8(r1)
    beq lbl_fn_800902C0_00000100
    stw r6, 0x8(r1)
    addi r3, r26, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_800902C0_00000100:
    addi r3, r1, 0x30
    addi r4, r1, 0x8
    bl fn_80090584
    addic. r3, r1, 0x8
    beq lbl_fn_800902C0_00000148
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800902C0_00000148
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800902C0_00000140
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800902C0_00000140:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_800902C0_00000148:
    lwz r4, 0xd8(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800902C0_00000168
    lwz r3, 0xe8(r30)
    lwz r0, 0xe0(r30)
    stw r0, 0x40(r1)
    stw r4, 0x44(r1)
    stw r3, 0x3c(r1)
lbl_fn_800902C0_00000168:
    cmpwi r31, 0x0
    bne lbl_fn_800902C0_00000180
    mr r4, r29
    addi r3, r1, 0x30
    bl fn_8009A584
    b lbl_fn_800902C0_00000190
lbl_fn_800902C0_00000180:
    mr r4, r29
    mr r5, r31
    addi r3, r1, 0x30
    bl fn_8009A5A8
lbl_fn_800902C0_00000190:
    addic. r3, r1, 0x5c
    beq lbl_fn_800902C0_000001D0
    beq lbl_fn_800902C0_000001D0
    lwz r4, 0x5c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800902C0_000001D0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800902C0_000001C8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800902C0_000001C8:
    li r0, 0x0
    stw r0, 0x5c(r1)
lbl_fn_800902C0_000001D0:
    addic. r3, r1, 0x48
    beq lbl_fn_800902C0_00000210
    beq lbl_fn_800902C0_00000210
    lwz r4, 0x48(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800902C0_00000210
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800902C0_00000208
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800902C0_00000208:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_800902C0_00000210:
    lmw r26, 0x88(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_800904E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r9
    stw r30, 0x18(r1)
    mr r30, r8
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x0(r7)
    cmpwi r0, 0x0
    beq lbl_fn_800904E0_00000294
    stw r0, 0x18(r3)
    addi r3, r7, 0x4
    addi r4, r29, 0x1c
    li r5, 0x0
    lwz r6, 0x0(r7)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_800904E0_00000294:
    li r0, 0x0
    stw r0, 0x2c(r29)
    mr r3, r29
    stw r30, 0x40(r29)
    stw r31, 0x44(r29)
    stw r0, 0x48(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80090584(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_80090584_0000030C
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80090584_0000030C:
    addi r3, r31, 0x2c
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80090584_00000460
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80090584_00000350
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80090584_00000350:
    addi r3, r31, 0x2c
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80090584_000003BC
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80090584_00000394
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80090584_0000038C
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80090584_0000038C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80090584_00000394:
    lwz r6, 0x2c(r31)
    cmpwi r6, 0x0
    beq lbl_fn_80090584_000003BC
    stw r6, 0x8(r1)
    addi r3, r31, 0x30
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80090584_000003BC:
    addi r3, r1, 0x1c
    addi r0, r31, 0x2c
    cmplw r3, r0
    beq lbl_fn_80090584_0000042C
    lwz r3, 0x2c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80090584_00000400
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80090584_000003F8
    addi r3, r31, 0x30
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80090584_000003F8:
    li r0, 0x0
    stw r0, 0x2c(r31)
lbl_fn_80090584_00000400:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80090584_0000042C
    stw r0, 0x2c(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x30
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80090584_0000042C:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80090584_00000460
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80090584_00000458
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80090584_00000458:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_80090584_00000460:
    addic. r3, r1, 0x8
    beq lbl_fn_80090584_0000049C
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80090584_0000049C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80090584_00000494
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80090584_00000494:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80090584_0000049C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8009076C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r5, r1, 0x8
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    addi r30, r3, 0x8
    stw r29, 0x44(r1)
    lwz r0, 0x50(r3)
    mulli r0, r0, 0x18
    add r6, r3, r0
    mr r3, r30
    lwz r29, 0x178(r6)
    lwz r31, 0x16c(r6)
    bl fn_805F89F0
    cmpwi r29, 0x0
    beq lbl_fn_8009076C_0000052C
    lwz r31, 0x44(r31)
    b lbl_fn_8009076C_00000520
lbl_fn_8009076C_000004FC:
    lwz r0, 0x0(r29)
    addi r3, r1, 0x8
    lwz r4, 0x34(r30)
    mulli r0, r0, 0x30
    add r4, r4, r0
    mr r5, r4
    bl fn_805F89F0
    subi r31, r31, 0x1
    addi r29, r29, 0x4
lbl_fn_8009076C_00000520:
    cmpwi r31, 0x0
    bgt lbl_fn_8009076C_000004FC
    b lbl_fn_8009076C_0000055C
lbl_fn_8009076C_0000052C:
    lwz r29, 0x44(r31)
    li r31, 0x0
    b lbl_fn_8009076C_00000554
lbl_fn_8009076C_00000538:
    lwz r0, 0x34(r30)
    addi r3, r1, 0x8
    add r4, r0, r31
    mr r5, r4
    bl fn_805F89F0
    subi r29, r29, 0x1
    addi r31, r31, 0x30
lbl_fn_8009076C_00000554:
    cmpwi r29, 0x0
    bgt lbl_fn_8009076C_00000538
lbl_fn_8009076C_0000055C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80090834(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    addi r29, r1, 0x38
    li r28, 0x0
    li r31, 0x0
    li r30, 0x0
    b lbl_fn_80090834_00000620
lbl_fn_80090834_000005B8:
    lwzx r0, r25, r30
    add r4, r23, r31
    addi r5, r1, 0x8
    mulli r0, r0, 0x30
    add r3, r24, r0
    bl fn_805F89F0
    mr r3, r27
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    psq_l f2, 0x8(r29), 0, 0
    add r3, r22, r31
    psq_l f3, 0x10(r29), 0, 0
    addi r28, r28, 0x1
    psq_l f4, 0x18(r29), 0, 0
    addi r31, r31, 0x30
    psq_l f5, 0x20(r29), 0, 0
    addi r30, r30, 0x4
    psq_l f6, 0x28(r29), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_80090834_00000620:
    cmplw r28, r26
    blt lbl_fn_80090834_000005B8
    addi r11, r1, 0x90
    bl _restgpr_22
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800908FC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r30, r1, 0x38
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_800908FC_000006D4
lbl_fn_800908FC_00000678:
    add r3, r26, r31
    add r4, r25, r31
    addi r5, r1, 0x8
    bl fn_805F89F0
    mr r3, r28
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    psq_l f2, 0x8(r30), 0, 0
    add r3, r24, r31
    psq_l f3, 0x10(r30), 0, 0
    addi r29, r29, 0x1
    psq_l f4, 0x18(r30), 0, 0
    addi r31, r31, 0x30
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_800908FC_000006D4:
    cmplw r29, r27
    blt lbl_fn_800908FC_00000678
    addi r11, r1, 0x90
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800909B0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    stfd f26, 0x90(r1)
    psq_st f26, 0x98(r1), 0, 0
    stfd f25, 0x80(r1)
    psq_st f25, 0x88(r1), 0, 0
    stfd f24, 0x70(r1)
    psq_st f24, 0x78(r1), 0, 0
    addi r7, r1, 0x38
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_800909B0_00000954
lbl_fn_800909B0_00000748:
    lwz r0, 0x4(r5)
    lfs f8, 0x8(r5)
    mulli r0, r0, 0x30
    add r6, r4, r0
    lfsx f0, r4, r0
    lfs f7, 0x4(r6)
    fmuls f9, f0, f8
    lfs f0, 0x8(r6)
    fmuls f10, f7, f8
    lfs f7, 0xc(r6)
    fmuls f11, f0, f8
    lfs f0, 0x10(r6)
    fmuls f12, f7, f8
    lfs f7, 0x14(r6)
    fmuls f13, f0, f8
    lfs f0, 0x18(r6)
    fmuls f29, f7, f8
    lfs f7, 0x1c(r6)
    fmuls f31, f7, f8
    lfs f7, 0x24(r6)
    fmuls f30, f0, f8
    lfs f0, 0x20(r6)
    fmuls f27, f7, f8
    lfs f7, 0x2c(r6)
    fmuls f28, f0, f8
    lfs f0, 0x28(r6)
    fmuls f7, f7, f8
    stfs f9, 0x38(r1)
    fmuls f0, f0, f8
    stfs f10, 0x3c(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f11, 0x40(r1)
    stfs f12, 0x44(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f13, 0x48(r1)
    stfs f29, 0x4c(r1)
    psq_st f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r7), 0, 0
    stfs f30, 0x50(r1)
    stfs f31, 0x54(r1)
    psq_st f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r7), 0, 0
    stfs f28, 0x58(r1)
    stfs f27, 0x5c(r1)
    psq_st f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    stfs f0, 0x60(r1)
    stfs f7, 0x64(r1)
    psq_st f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lwz r0, 0xc(r5)
    lfs f27, 0x10(r5)
    mulli r0, r0, 0x30
    add r6, r4, r0
    lfsx f11, r4, r0
    lfs f7, 0x20(r6)
    lfs f0, 0x1c(r6)
    fmuls f28, f11, f27
    fmuls f10, f7, f27
    lfs f31, 0xc(r6)
    fmuls f9, f0, f27
    lfs f8, 0x18(r6)
    fmuls f24, f31, f27
    lfs f7, 0x14(r6)
    lfs f0, 0x10(r6)
    fmuls f8, f8, f27
    lfs f13, 0x8(r6)
    fmuls f7, f7, f27
    lfs f12, 0x4(r6)
    fmuls f0, f0, f27
    lfs f31, 0x24(r6)
    fmuls f25, f13, f27
    lfs f29, 0x2c(r6)
    fmuls f26, f12, f27
    lfs f30, 0x28(r6)
    fmuls f13, f29, f27
    stfs f25, 0x10(r1)
    fmuls f12, f30, f27
    stfs f28, 0x8(r1)
    fmuls f11, f31, f27
    stfs f26, 0xc(r1)
    stfs f24, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f8, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f10, 0x28(r1)
    lfs f31, 0x0(r3)
    addi r5, r5, 0x14
    stfs f11, 0x2c(r1)
    fadds f31, f31, f28
    stfs f12, 0x30(r1)
    stfs f31, 0x0(r3)
    lfs f31, 0x4(r3)
    stfs f13, 0x34(r1)
    fadds f31, f31, f26
    stfs f31, 0x4(r3)
    lfs f31, 0x8(r3)
    fadds f31, f31, f25
    stfs f31, 0x8(r3)
    lfs f31, 0xc(r3)
    fadds f31, f31, f24
    stfs f31, 0xc(r3)
    lfs f31, 0x10(r3)
    fadds f0, f31, f0
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r3)
    fadds f0, f0, f7
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r3)
    fadds f0, f0, f8
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r3)
    fadds f0, f0, f9
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r3)
    fadds f0, f0, f10
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r3)
    fadds f0, f0, f11
    stfs f0, 0x24(r3)
    lfs f0, 0x28(r3)
    fadds f0, f0, f12
    stfs f0, 0x28(r3)
    lfs f0, 0x2c(r3)
    fadds f0, f0, f13
    stfs f0, 0x2c(r3)
    addi r3, r3, 0x30
    bdnz lbl_fn_800909B0_00000748
lbl_fn_800909B0_00000954:
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    psq_l f26, 0x98(r1), 0, 0
    lfd f26, 0x90(r1)
    psq_l f25, 0x88(r1), 0, 0
    lfd f25, 0x80(r1)
    psq_l f24, 0x78(r1), 0, 0
    lfd f24, 0x70(r1)
    addi r1, r1, 0xf0
    blr
}

asm void fn_80090C58(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    stfd f28, 0x170(r1)
    psq_st f28, 0x178(r1), 0, 0
    stfd f27, 0x160(r1)
    psq_st f27, 0x168(r1), 0, 0
    stfd f26, 0x150(r1)
    psq_st f26, 0x158(r1), 0, 0
    stfd f25, 0x140(r1)
    psq_st f25, 0x148(r1), 0, 0
    stfd f24, 0x130(r1)
    psq_st f24, 0x138(r1), 0, 0
    stfd f23, 0x120(r1)
    psq_st f23, 0x128(r1), 0, 0
    stfd f22, 0x110(r1)
    psq_st f22, 0x118(r1), 0, 0
    stfd f21, 0x100(r1)
    psq_st f21, 0x108(r1), 0, 0
    stfd f20, 0xf0(r1)
    psq_st f20, 0xf8(r1), 0, 0
    stfd f19, 0xe0(r1)
    psq_st f19, 0xe8(r1), 0, 0
    stfd f18, 0xd0(r1)
    psq_st f18, 0xd8(r1), 0, 0
    stfd f17, 0xc0(r1)
    psq_st f17, 0xc8(r1), 0, 0
    stfd f16, 0xb0(r1)
    psq_st f16, 0xb8(r1), 0, 0
    stfd f15, 0xa0(r1)
    psq_st f15, 0xa8(r1), 0, 0
    addi r8, r1, 0x68
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_80090C58_00000D88
lbl_fn_80090C58_00000A38:
    lwz r6, 0x4(r5)
    lwz r0, 0xc(r5)
    mulli r6, r6, 0x30
    lfs f8, 0x8(r5)
    lwz r7, 0x0(r3)
    lfs f28, 0x10(r5)
    add r6, r4, r6
    lfs f7, 0x4(r6)
    mulli r0, r0, 0x30
    lfs f0, 0x0(r6)
    fmuls f15, f7, f8
    lfs f7, 0xc(r6)
    fmuls f16, f0, f8
    lfs f0, 0x8(r6)
    fmuls f24, f7, f8
    lfs f7, 0x14(r6)
    fmuls f25, f0, f8
    lfs f0, 0x10(r6)
    fmuls f22, f7, f8
    lfs f7, 0x1c(r6)
    fmuls f23, f0, f8
    lfs f0, 0x18(r6)
    fmuls f20, f7, f8
    lfs f7, 0x24(r6)
    add r9, r4, r0
    fmuls f21, f0, f8
    fmuls f18, f7, f8
    lfs f0, 0x20(r6)
    fmuls f19, f0, f8
    lfs f7, 0x2c(r6)
    lfs f0, 0x28(r6)
    fmuls f7, f7, f8
    lfs f9, 0x20(r9)
    fmuls f0, f0, f8
    fmuls f29, f9, f28
    lfs f8, 0x1c(r9)
    lfs f10, 0x18(r9)
    fmuls f30, f8, f28
    lfs f9, 0x14(r9)
    fmuls f31, f10, f28
    fmuls f13, f9, f28
    lfs f8, 0x10(r9)
    lfs f11, 0xc(r9)
    fmuls f12, f8, f28
    lfs f10, 0x8(r9)
    lfs f9, 0x4(r9)
    lfsx f8, r4, r0
    fmuls f11, f11, f28
    lfs f26, 0x2c(r9)
    lfs f27, 0x28(r9)
    fmuls f10, f10, f28
    fmuls f9, f9, f28
    stfs f16, 0x68(r1)
    fmuls f8, f8, f28
    lfs f17, 0x24(r9)
    stfs f15, 0x6c(r1)
    fmuls f26, f26, f28
    psq_l f1, 0x0(r8), 0, 0
    fmuls f27, f27, f28
    stfs f25, 0x70(r1)
    fmuls f28, f17, f28
    stfs f24, 0x74(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f23, 0x78(r1)
    stfs f22, 0x7c(r1)
    psq_st f2, 0x8(r7), 0, 0
    psq_l f3, 0x10(r8), 0, 0
    stfs f21, 0x80(r1)
    stfs f20, 0x84(r1)
    psq_st f3, 0x10(r7), 0, 0
    psq_l f4, 0x18(r8), 0, 0
    stfs f19, 0x88(r1)
    stfs f18, 0x8c(r1)
    psq_st f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r8), 0, 0
    stfs f0, 0x90(r1)
    stfs f7, 0x94(r1)
    psq_st f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r8), 0, 0
    psq_st f6, 0x28(r7), 0, 0
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f11, 0x44(r1)
    stfs f12, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f31, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f29, 0x58(r1)
    lwz r6, 0x0(r3)
    lwz r0, 0x14(r5)
    lfs f7, 0x0(r6)
    mulli r0, r0, 0x30
    lfs f0, 0x18(r5)
    fadds f7, f7, f8
    stfs f28, 0x5c(r1)
    stfs f7, 0x0(r6)
    add r7, r4, r0
    lfsx f7, r4, r0
    lfs f15, 0x4(r6)
    fmuls f7, f7, f0
    lfs f8, 0x4(r7)
    fadds f16, f15, f9
    lfs f9, 0x2c(r7)
    lfs f15, 0x28(r7)
    fmuls f8, f8, f0
    stfs f16, 0x4(r6)
    fmuls f20, f9, f0
    fmuls f19, f15, f0
    lfs f9, 0x24(r7)
    lfs f16, 0x8(r6)
    fmuls f18, f9, f0
    lfs f15, 0x20(r7)
    fadds f16, f16, f10
    fmuls f17, f15, f0
    lfs f9, 0x18(r7)
    stfs f16, 0x8(r6)
    fmuls f15, f9, f0
    lfs f10, 0x1c(r7)
    lfs f21, 0xc(r6)
    fmuls f16, f10, f0
    lfs f10, 0x10(r7)
    fadds f11, f21, f11
    lfs f22, 0x14(r7)
    fmuls f10, f10, f0
    stfs f11, 0xc(r6)
    fmuls f11, f22, f0
    lfs f9, 0xc(r7)
    lfs f22, 0x10(r6)
    fmuls f9, f9, f0
    lfs f21, 0x8(r7)
    fadds f12, f22, f12
    fmuls f0, f21, f0
    stfs f7, 0x8(r1)
    stfs f12, 0x10(r6)
    lfs f12, 0x14(r6)
    stfs f27, 0x60(r1)
    fadds f12, f12, f13
    stfs f26, 0x64(r1)
    stfs f12, 0x14(r6)
    lfs f12, 0x18(r6)
    stfs f8, 0xc(r1)
    fadds f12, f12, f31
    stfs f0, 0x10(r1)
    stfs f12, 0x18(r6)
    lfs f12, 0x1c(r6)
    stfs f9, 0x14(r1)
    fadds f12, f12, f30
    stfs f10, 0x18(r1)
    stfs f12, 0x1c(r6)
    lfs f12, 0x20(r6)
    stfs f11, 0x1c(r1)
    fadds f12, f12, f29
    stfs f15, 0x20(r1)
    stfs f12, 0x20(r6)
    lfs f12, 0x24(r6)
    stfs f16, 0x24(r1)
    fadds f12, f12, f28
    stfs f17, 0x28(r1)
    stfs f12, 0x24(r6)
    lfs f12, 0x28(r6)
    stfs f18, 0x2c(r1)
    fadds f12, f12, f27
    stfs f19, 0x30(r1)
    stfs f12, 0x28(r6)
    lfs f12, 0x2c(r6)
    stfs f20, 0x34(r1)
    fadds f12, f12, f26
    stfs f12, 0x2c(r6)
    lwz r6, 0x0(r3)
    lfs f12, 0x0(r6)
    fadds f7, f12, f7
    stfs f7, 0x0(r6)
    lfs f7, 0x4(r6)
    fadds f7, f7, f8
    stfs f7, 0x4(r6)
    lfs f7, 0x8(r6)
    addi r5, r5, 0x1c
    fadds f0, f7, f0
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r6)
    fadds f0, f0, f9
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r6)
    fadds f0, f0, f10
    stfs f0, 0x10(r6)
    lfs f0, 0x14(r6)
    fadds f0, f0, f11
    stfs f0, 0x14(r6)
    lfs f0, 0x18(r6)
    fadds f0, f0, f15
    stfs f0, 0x18(r6)
    lfs f0, 0x1c(r6)
    fadds f0, f0, f16
    stfs f0, 0x1c(r6)
    lfs f0, 0x20(r6)
    fadds f0, f0, f17
    stfs f0, 0x20(r6)
    lfs f0, 0x24(r6)
    fadds f0, f0, f18
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r6)
    fadds f0, f0, f19
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r6)
    fadds f0, f0, f20
    stfs f0, 0x2c(r6)
    lwz r6, 0x0(r3)
    addi r0, r6, 0x30
    stw r0, 0x0(r3)
    bdnz lbl_fn_80090C58_00000A38
lbl_fn_80090C58_00000D88:
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    psq_l f28, 0x178(r1), 0, 0
    lfd f28, 0x170(r1)
    psq_l f27, 0x168(r1), 0, 0
    lfd f27, 0x160(r1)
    psq_l f26, 0x158(r1), 0, 0
    lfd f26, 0x150(r1)
    psq_l f25, 0x148(r1), 0, 0
    lfd f25, 0x140(r1)
    psq_l f24, 0x138(r1), 0, 0
    lfd f24, 0x130(r1)
    psq_l f23, 0x128(r1), 0, 0
    lfd f23, 0x120(r1)
    psq_l f22, 0x118(r1), 0, 0
    lfd f22, 0x110(r1)
    psq_l f21, 0x108(r1), 0, 0
    lfd f21, 0x100(r1)
    psq_l f20, 0xf8(r1), 0, 0
    lfd f20, 0xf0(r1)
    psq_l f19, 0xe8(r1), 0, 0
    lfd f19, 0xe0(r1)
    psq_l f18, 0xd8(r1), 0, 0
    lfd f18, 0xd0(r1)
    psq_l f17, 0xc8(r1), 0, 0
    lfd f17, 0xc0(r1)
    psq_l f16, 0xb8(r1), 0, 0
    lfd f16, 0xb0(r1)
    psq_l f15, 0xa8(r1), 0, 0
    lfd f15, 0xa0(r1)
    addi r1, r1, 0x1b0
    blr
}
