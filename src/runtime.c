#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80084C24(void);
extern void fn_80394068(void);
extern void fn_80686EA4(void);
extern void fn_80697BB8(void);

/* External data declarations */
extern u8 atexit_funcs_80832C50[];
extern u8 lbl_80766778[];
extern u8 lbl_807667C0[];
extern u8 lbl_8078B198[];

/* Small data declarations */
extern u32 __global_destructor_chain;
extern u32 atexit_curr_func_808803D8;
extern u32 lbl_8087ED20;
extern u32 lbl_8087ED24;

/* Function declarations */
void __register_atexit(void);
void fn_806954CC(void);
void fn_806954D0(void);
void fn_806954D4(void);
void fn_806954E0(void);
void fn_806954EC(void);
void fn_80695720(void);
void dtor_80695824(void);
void fn_806958E0(void);
void fn_806959D8(void);
void fn_80695A50(void);
void fn_80695AD0(void);
void fn_80695B00(void);
void fn_80695B28(void);
void fn_80695D84(void);
void __save_fpr(void);
void __restore_fpr(void);
void __save_gpr(void);
void __restore_gpr(void);
void __div2u(void);
void __div2i(void);
void __mod2u(void);
void __mod2i(void);
void fn_80696324(void);
void fn_80696348(void);
void fn_8069636C(void);
void fn_8069641C(void);
void fn_806964D0(void);
void _restfpr_14(void);
void _restfpr_15(void);
void _restfpr_16(void);
void _restfpr_17(void);
void _restfpr_18(void);
void _restfpr_19(void);
void _restfpr_20(void);
void _restfpr_21(void);
void _restfpr_22(void);
void _restfpr_23(void);
void _restfpr_24(void);
void _restfpr_25(void);
void _restfpr_26(void);
void _restfpr_27(void);
void _restfpr_28(void);
void _restfpr_29(void);
void _restfpr_30(void);
void _restfpr_31(void);
void _restgpr_14(void);
void _restgpr_15(void);
void _restgpr_16(void);
void _restgpr_17(void);
void _restgpr_18(void);
void _restgpr_19(void);
void _restgpr_20(void);
void _restgpr_21(void);
void _restgpr_22(void);
void _restgpr_23(void);
void _restgpr_24(void);
void _restgpr_25(void);
void _restgpr_26(void);
void _restgpr_27(void);
void _restgpr_28(void);
void _restgpr_29(void);
void _restgpr_30(void);
void _restgpr_31(void);
void _savefpr_14(void);
void _savefpr_15(void);
void _savefpr_16(void);
void _savefpr_17(void);
void _savefpr_18(void);
void _savefpr_19(void);
void _savefpr_20(void);
void _savefpr_21(void);
void _savefpr_22(void);
void _savefpr_23(void);
void _savefpr_24(void);
void _savefpr_25(void);
void _savefpr_26(void);
void _savefpr_27(void);
void _savefpr_28(void);
void _savefpr_29(void);
void _savefpr_30(void);
void _savefpr_31(void);
void _savegpr_14(void);
void _savegpr_15(void);
void _savegpr_16(void);
void _savegpr_17(void);
void _savegpr_18(void);
void _savegpr_19(void);
void _savegpr_20(void);
void _savegpr_21(void);
void _savegpr_22(void);
void _savegpr_23(void);
void _savegpr_24(void);
void _savegpr_25(void);
void _savegpr_26(void);
void _savegpr_27(void);
void _savegpr_28(void);
void _savegpr_29(void);
void _savegpr_30(void);
void _savegpr_31(void);

asm void __register_atexit(void)
{
    nofralloc
    lwz r4, atexit_curr_func_808803D8
    cmpwi r4, 0x40
    bne lbl___register_atexit_00000014
    li r3, -0x1
    blr
lbl___register_atexit_00000014:
    mulli r0, r4, 0xc
    addi r6, r4, 0x1
    lis r5, atexit_funcs_80832C50@ha
    lwz r4, __global_destructor_chain
    stw r6, atexit_curr_func_808803D8
    addi r5, r5, atexit_funcs_80832C50@l
    add r5, r5, r0
    stw r5, __global_destructor_chain
    li r0, 0x0
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    li r3, 0x0
    stw r0, 0x8(r5)
    blr
}

asm void fn_806954CC(void)
{
    nofralloc
    b fn_80686EA4
}

asm void fn_806954D0(void)
{
    nofralloc
    b fn_806954D4
}

asm void fn_806954D4(void)
{
    nofralloc
    lwz r12, lbl_8087ED20
    mtctr r12
    bctr
}

asm void fn_806954E0(void)
{
    nofralloc
    lwz r12, lbl_8087ED24
    mtctr r12
    bctr
}

asm void fn_806954EC(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r0, 0x0
    stw r0, 0x0(r5)
    mr r7, r4
    bne lbl_fn_806954EC_00000088
    li r3, 0x1
    blr
lbl_fn_806954EC_00000088:
    lbz r0, 0x0(r4)
    mr r6, r3
    cmpwi r0, 0x50
    bne lbl_fn_806954EC_000000EC
    lbz r0, 0x1(r4)
    addi r7, r4, 0x1
    cmpwi r0, 0x43
    bne lbl_fn_806954EC_000000AC
    addi r7, r7, 0x1
lbl_fn_806954EC_000000AC:
    lbz r0, 0x0(r7)
    cmpwi r0, 0x56
    bne lbl_fn_806954EC_000000BC
    addi r7, r7, 0x1
lbl_fn_806954EC_000000BC:
    lbz r0, 0x0(r7)
    cmpwi r0, 0x76
    bne lbl_fn_806954EC_000000E8
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x50
    beq lbl_fn_806954EC_000000E0
    cmpwi r0, 0x2a
    bne lbl_fn_806954EC_000000E8
lbl_fn_806954EC_000000E0:
    li r3, 0x1
    blr
lbl_fn_806954EC_000000E8:
    mr r7, r4
lbl_fn_806954EC_000000EC:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x2a
    beq lbl_fn_806954EC_00000104
    cmpwi r0, 0x21
    bne lbl_fn_806954EC_00000238
lbl_fn_806954EC_00000104:
    lbz r0, 0x0(r7)
    addi r6, r3, 0x1
    lbz r3, 0x0(r3)
    addi r7, r7, 0x1
    extsb r0, r0
    extsb r3, r3
    cmpw r3, r0
    beq lbl_fn_806954EC_0000012C
    li r3, 0x0
    blr
lbl_fn_806954EC_0000012C:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    lbz r3, 0x0(r6)
    extsb r0, r0
    extsb r3, r3
    cmpw r3, r0
    bne lbl_fn_806954EC_0000018C
    cmpwi r3, 0x21
    addi r6, r6, 0x1
    bne lbl_fn_806954EC_0000012C
    li r4, 0x0
    b lbl_fn_806954EC_00000174
lbl_fn_806954EC_0000015C:
    lbz r3, 0x0(r6)
    mulli r0, r4, 0xa
    addi r6, r6, 0x1
    extsb r3, r3
    add r4, r3, r0
    subi r4, r4, 0x30
lbl_fn_806954EC_00000174:
    lbz r0, 0x0(r6)
    cmpwi r0, 0x21
    bne lbl_fn_806954EC_0000015C
    stw r4, 0x0(r5)
    li r3, 0x1
    blr
lbl_fn_806954EC_0000018C:
    lbz r0, 0x0(r6)
    addi r6, r6, 0x1
    cmpwi r0, 0x21
    bne lbl_fn_806954EC_0000018C
lbl_fn_806954EC_0000019C:
    lbz r0, 0x0(r6)
    addi r6, r6, 0x1
    cmpwi r0, 0x21
    bne lbl_fn_806954EC_0000019C
    lbz r0, 0x0(r6)
    extsb. r0, r0
    bne lbl_fn_806954EC_000001C0
    li r3, 0x0
    blr
lbl_fn_806954EC_000001C0:
    addi r7, r4, 0x1
    b lbl_fn_806954EC_0000012C
    b lbl_fn_806954EC_00000238
lbl_fn_806954EC_000001CC:
    lbzu r0, 0x1(r7)
    addi r6, r6, 0x1
    cmpwi r0, 0x43
    bne lbl_fn_806954EC_000001F0
    lbz r0, 0x0(r6)
    cmpwi r0, 0x43
    bne lbl_fn_806954EC_000001EC
    addi r6, r6, 0x1
lbl_fn_806954EC_000001EC:
    addi r7, r7, 0x1
lbl_fn_806954EC_000001F0:
    lbz r0, 0x0(r6)
    extsb r3, r0
    cmpwi r3, 0x43
    bne lbl_fn_806954EC_00000208
    li r3, 0x0
    blr
lbl_fn_806954EC_00000208:
    lbz r0, 0x0(r7)
    cmpwi r0, 0x56
    bne lbl_fn_806954EC_00000224
    cmpwi r3, 0x56
    bne lbl_fn_806954EC_00000220
    addi r6, r6, 0x1
lbl_fn_806954EC_00000220:
    addi r7, r7, 0x1
lbl_fn_806954EC_00000224:
    lbz r0, 0x0(r6)
    cmpwi r0, 0x56
    bne lbl_fn_806954EC_00000238
    li r3, 0x0
    blr
lbl_fn_806954EC_00000238:
    lbz r3, 0x0(r6)
    extsb r0, r3
    cmpwi r0, 0x50
    beq lbl_fn_806954EC_00000250
    cmpwi r0, 0x52
    bne lbl_fn_806954EC_00000280
lbl_fn_806954EC_00000250:
    lbz r0, 0x0(r7)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_806954EC_000001CC
    b lbl_fn_806954EC_00000280
lbl_fn_806954EC_00000268:
    extsb. r0, r4
    bne lbl_fn_806954EC_00000278
    li r3, 0x1
    blr
lbl_fn_806954EC_00000278:
    addi r6, r6, 0x1
    addi r7, r7, 0x1
lbl_fn_806954EC_00000280:
    lbz r4, 0x0(r6)
    lbz r0, 0x0(r7)
    extsb r3, r4
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_806954EC_00000268
    li r3, 0x0
    blr
}

asm void fn_80695720(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r30, r3
    mr r27, r4
    mr r28, r6
    mr r29, r7
    beq lbl_fn_80695720_0000038C
    cmpwi r4, 0x0
    stw r6, 0x0(r3)
    addi r30, r3, 0x10
    stw r7, 0x4(r3)
    beq lbl_fn_80695720_0000038C
    li r0, 0x0
    stw r30, 0x8(r1)
    mr r31, r30
    stw r6, 0xc(r1)
    stw r7, 0x10(r1)
    stw r5, 0x14(r1)
    stw r0, 0x18(r1)
    b lbl_fn_80695720_00000320
lbl_fn_80695720_000002FC:
    mr r12, r27
    mr r3, r31
    li r4, 0x1
    mtctr r12
    bctrl
    lwz r3, 0x18(r1)
    add r31, r31, r28
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_80695720_00000320:
    lwz r4, 0x18(r1)
    cmplw r4, r29
    blt lbl_fn_80695720_000002FC
    lwz r0, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80695720_0000038C
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80695720_0000038C
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    mullw r0, r0, r4
    add r31, r3, r0
    b lbl_fn_80695720_00000380
lbl_fn_80695720_00000358:
    lwz r0, 0xc(r1)
    li r4, -0x1
    lwz r12, 0x14(r1)
    subf r31, r0, r31
    mr r3, r31
    mtctr r12
    bctrl
    lwz r3, 0x18(r1)
    subi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_80695720_00000380:
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80695720_00000358
lbl_fn_80695720_0000038C:
    mr r3, r30
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void dtor_80695824(void)
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
    beq lbl_dtor_80695824_00000440
    lwz r4, 0x10(r3)
    lwz r0, 0x8(r3)
    cmplw r4, r0
    bge lbl_dtor_80695824_00000430
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_dtor_80695824_00000430
    lwz r0, 0x4(r3)
    lwz r3, 0x0(r3)
    mullw r0, r0, r4
    add r31, r3, r0
    b lbl_dtor_80695824_00000424
lbl_dtor_80695824_000003FC:
    lwz r0, 0x4(r29)
    li r4, -0x1
    lwz r12, 0xc(r29)
    subf r31, r0, r31
    mr r3, r31
    mtctr r12
    bctrl
    lwz r3, 0x10(r29)
    subi r0, r3, 0x1
    stw r0, 0x10(r29)
lbl_dtor_80695824_00000424:
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    bne lbl_dtor_80695824_000003FC
lbl_dtor_80695824_00000430:
    cmpwi r30, 0x0
    ble lbl_dtor_80695824_00000440
    mr r3, r29
    bl dtor_80084684
lbl_dtor_80695824_00000440:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806958E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r7
    stw r29, 0x24(r1)
    mr r29, r6
    stw r28, 0x20(r1)
    mr r28, r4
    stw r3, 0x8(r1)
    stw r6, 0xc(r1)
    stw r7, 0x10(r1)
    stw r5, 0x14(r1)
    stw r0, 0x18(r1)
    b lbl_fn_806958E0_000004CC
lbl_fn_806958E0_000004A8:
    mr r12, r28
    mr r3, r31
    li r4, 0x1
    mtctr r12
    bctrl
    lwz r3, 0x18(r1)
    add r31, r31, r29
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_806958E0_000004CC:
    lwz r4, 0x18(r1)
    cmplw r4, r30
    blt lbl_fn_806958E0_000004A8
    lwz r0, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_806958E0_00000538
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806958E0_00000538
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    mullw r0, r0, r4
    add r31, r3, r0
    b lbl_fn_806958E0_0000052C
lbl_fn_806958E0_00000504:
    lwz r0, 0xc(r1)
    li r4, -0x1
    lwz r12, 0x14(r1)
    subf r31, r0, r31
    mr r3, r31
    mtctr r12
    bctrl
    lwz r3, 0x18(r1)
    subi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_806958E0_0000052C:
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806958E0_00000504
lbl_fn_806958E0_00000538:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806959D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    mullw r0, r5, r6
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    add r31, r3, r0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    b lbl_fn_806959D8_000005A8
lbl_fn_806959D8_0000058C:
    subf r31, r29, r31
    mr r12, r28
    mr r3, r31
    li r4, -0x1
    mtctr r12
    bctrl
    subi r30, r30, 0x1
lbl_fn_806959D8_000005A8:
    cmpwi r30, 0x0
    bne lbl_fn_806959D8_0000058C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80695A50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    beq lbl_fn_80695A50_0000063C
    cmpwi r4, 0x0
    beq lbl_fn_80695A50_00000634
    lwz r29, -0x10(r3)
    li r31, 0x0
    lwz r30, -0xc(r3)
    mullw r0, r29, r30
    add r28, r3, r0
    b lbl_fn_80695A50_0000062C
lbl_fn_80695A50_00000610:
    subf r28, r29, r28
    mr r12, r27
    mr r3, r28
    li r4, -0x1
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_fn_80695A50_0000062C:
    cmplw r31, r30
    blt lbl_fn_80695A50_00000610
lbl_fn_80695A50_00000634:
    subi r3, r26, 0x10
    bl fn_80084C24
lbl_fn_80695A50_0000063C:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80695AD0(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r6, 0x4(r3)
    lwz r7, 0x8(r3)
    li r3, 0x1
    cmpwi r5, 0x0
    cmpwi cr6, r6, 0x0
    cmpwi cr7, r7, 0x0
    bnelr
    bnelr cr6
    bnelr cr7
    li r3, 0x0
    blr
}

asm void fn_80695B00(void)
{
    nofralloc
    lwz r0, 0x0(r12)
    lwz r11, 0x4(r12)
    lwz r12, 0x8(r12)
    add r3, r3, r0
    cmpwi r11, 0x0
    blt lbl_fn_80695B00_000006A0
    lwzx r12, r3, r12
    lwzx r12, r12, r11
lbl_fn_80695B00_000006A0:
    mtctr r12
    bctr
}

asm void fn_80695B28(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    bne lbl_fn_80695B28_000006C8
    li r3, 0x0
    b lbl_fn_80695B28_000008F0
lbl_fn_80695B28_000006C8:
    lwzx r4, r3, r4
    lwz r11, 0x0(r4)
    cmpwi r11, 0x0
    beq lbl_fn_80695B28_000008BC
    lwz r0, 0x4(r4)
    cmpwi r5, 0x0
    add r3, r3, r0
    beq lbl_fn_80695B28_000008F0
    lwz r4, 0x0(r5)
    lwz r9, 0x0(r11)
    mr r10, r4
    b lbl_fn_80695B28_00000710
lbl_fn_80695B28_000006F8:
    extsb. r5, r12
    bne lbl_fn_80695B28_00000708
    li r5, 0x0
    b lbl_fn_80695B28_00000734
lbl_fn_80695B28_00000708:
    addi r9, r9, 0x1
    addi r10, r10, 0x1
lbl_fn_80695B28_00000710:
    lbz r12, 0x0(r9)
    lbz r5, 0x0(r10)
    extsb r8, r12
    extsb r5, r5
    cmpw r8, r5
    beq lbl_fn_80695B28_000006F8
    lbz r8, 0x0(r10)
    lbz r5, 0x0(r9)
    subf r5, r8, r5
lbl_fn_80695B28_00000734:
    cmpwi r5, 0x0
    bne lbl_fn_80695B28_00000740
    b lbl_fn_80695B28_000008F0
lbl_fn_80695B28_00000740:
    lwz r5, 0x4(r11)
    cmpwi r5, 0x0
    beq lbl_fn_80695B28_000008BC
    b lbl_fn_80695B28_000008B0
lbl_fn_80695B28_00000750:
    lwz r12, 0x4(r5)
    clrrwi. r8, r12, 31
    beq lbl_fn_80695B28_00000854
    clrlwi r8, r12, 1
    lwz r31, 0x8(r5)
    add. r8, r0, r8
    bne lbl_fn_80695B28_00000840
    lwz r10, 0x0(r9)
    mr r11, r4
    b lbl_fn_80695B28_00000790
lbl_fn_80695B28_00000778:
    extsb. r8, r12
    bne lbl_fn_80695B28_00000788
    li r8, 0x0
    b lbl_fn_80695B28_000007B4
lbl_fn_80695B28_00000788:
    addi r10, r10, 0x1
    addi r11, r11, 0x1
lbl_fn_80695B28_00000790:
    lbz r12, 0x0(r10)
    lbz r8, 0x0(r11)
    extsb r9, r12
    extsb r8, r8
    cmpw r9, r8
    beq lbl_fn_80695B28_00000778
    lbz r9, 0x0(r11)
    lbz r8, 0x0(r10)
    subf r8, r9, r8
lbl_fn_80695B28_000007B4:
    cmpwi r8, 0x0
    bne lbl_fn_80695B28_00000840
    addi r12, r5, 0xc
    mtctr r31
    cmpwi r31, 0x0
    ble lbl_fn_80695B28_000008BC
lbl_fn_80695B28_000007CC:
    lwz r11, 0x4(r12)
    add. r4, r0, r11
    bne lbl_fn_80695B28_00000834
    lwz r4, 0x0(r12)
    lwz r9, 0x0(r6)
    lwz r8, 0x0(r4)
    b lbl_fn_80695B28_00000800
lbl_fn_80695B28_000007E8:
    extsb. r4, r10
    bne lbl_fn_80695B28_000007F8
    li r4, 0x0
    b lbl_fn_80695B28_00000824
lbl_fn_80695B28_000007F8:
    addi r8, r8, 0x1
    addi r9, r9, 0x1
lbl_fn_80695B28_00000800:
    lbz r10, 0x0(r8)
    lbz r4, 0x0(r9)
    extsb r5, r10
    extsb r4, r4
    cmpw r5, r4
    beq lbl_fn_80695B28_000007E8
    lbz r5, 0x0(r9)
    lbz r4, 0x0(r8)
    subf r4, r5, r4
lbl_fn_80695B28_00000824:
    cmpwi r4, 0x0
    bne lbl_fn_80695B28_00000834
    add r3, r3, r11
    b lbl_fn_80695B28_000008F0
lbl_fn_80695B28_00000834:
    addi r12, r12, 0x8
    bdnz lbl_fn_80695B28_000007CC
    b lbl_fn_80695B28_000008BC
lbl_fn_80695B28_00000840:
    subi r8, r31, 0x1
    addi r5, r5, 0xc
    slwi r8, r8, 3
    add r5, r5, r8
    b lbl_fn_80695B28_000008AC
lbl_fn_80695B28_00000854:
    lwz r10, 0x0(r9)
    mr r11, r4
    b lbl_fn_80695B28_00000878
lbl_fn_80695B28_00000860:
    extsb. r8, r31
    bne lbl_fn_80695B28_00000870
    li r8, 0x0
    b lbl_fn_80695B28_0000089C
lbl_fn_80695B28_00000870:
    addi r10, r10, 0x1
    addi r11, r11, 0x1
lbl_fn_80695B28_00000878:
    lbz r31, 0x0(r10)
    lbz r8, 0x0(r11)
    extsb r9, r31
    extsb r8, r8
    cmpw r9, r8
    beq lbl_fn_80695B28_00000860
    lbz r9, 0x0(r11)
    lbz r8, 0x0(r10)
    subf r8, r9, r8
lbl_fn_80695B28_0000089C:
    cmpwi r8, 0x0
    bne lbl_fn_80695B28_000008AC
    add r3, r3, r12
    b lbl_fn_80695B28_000008F0
lbl_fn_80695B28_000008AC:
    addi r5, r5, 0x8
lbl_fn_80695B28_000008B0:
    lwz r9, 0x0(r5)
    cmpwi r9, 0x0
    bne lbl_fn_80695B28_00000750
lbl_fn_80695B28_000008BC:
    cmpwi r7, 0x0
    beq lbl_fn_80695B28_000008EC
    lis r4, lbl_8078B198@ha
    lis r3, lbl_80766778@ha
    addi r4, r4, lbl_8078B198@l
    lis r5, fn_80394068@ha
    addi r3, r3, lbl_80766778@l
    stw r4, 0x8(r1)
    addi r3, r3, 0x27
    addi r4, r1, 0x8
    addi r5, r5, fn_80394068@l
    bl fn_80697BB8
lbl_fn_80695B28_000008EC:
    li r3, 0x0
lbl_fn_80695B28_000008F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80695D84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lis r4, lbl_807667C0@ha
    addi r4, r4, lbl_807667C0@l
    li r3, 0x0
    lfd f0, 0x0(r4)
    lfd f3, 0x8(r4)
    lfd f4, 0x10(r4)
    fcmpu cr0, f1, f0
    fcmpu cr6, f1, f3
    blt lbl_fn_80695D84_00000958
    subi r3, r3, 0x1
    bge cr6, lbl_fn_80695D84_00000958
    fcmpu cr7, f1, f4
    fmr f2, f1
    blt cr7, lbl_fn_80695D84_00000944
    fsub f2, f1, f4
lbl_fn_80695D84_00000944:
    fctiwz f2, f2
    stfd f2, 0x8(r1)
    lwz r3, 0xc(r1)
    blt cr7, lbl_fn_80695D84_00000958
    addis r3, r3, 0x8000
lbl_fn_80695D84_00000958:
    addi r1, r1, 0x10
    blr
}

asm void __save_fpr(void)
{
    nofralloc
entry _savefpr_14
    stfd f14, -0x90(r11)
entry _savefpr_15
    stfd f15, -0x88(r11)
entry _savefpr_16
    stfd f16, -0x80(r11)
entry _savefpr_17
    stfd f17, -0x78(r11)
entry _savefpr_18
    stfd f18, -0x70(r11)
entry _savefpr_19
    stfd f19, -0x68(r11)
entry _savefpr_20
    stfd f20, -0x60(r11)
entry _savefpr_21
    stfd f21, -0x58(r11)
entry _savefpr_22
    stfd f22, -0x50(r11)
entry _savefpr_23
    stfd f23, -0x48(r11)
entry _savefpr_24
    stfd f24, -0x40(r11)
entry _savefpr_25
    stfd f25, -0x38(r11)
entry _savefpr_26
    stfd f26, -0x30(r11)
entry _savefpr_27
    stfd f27, -0x28(r11)
entry _savefpr_28
    stfd f28, -0x20(r11)
entry _savefpr_29
    stfd f29, -0x18(r11)
entry _savefpr_30
    stfd f30, -0x10(r11)
entry _savefpr_31
    stfd f31, -0x8(r11)
    blr
}

asm void __restore_fpr(void)
{
    nofralloc
entry _restfpr_14
    lfd f14, -0x90(r11)
entry _restfpr_15
    lfd f15, -0x88(r11)
entry _restfpr_16
    lfd f16, -0x80(r11)
entry _restfpr_17
    lfd f17, -0x78(r11)
entry _restfpr_18
    lfd f18, -0x70(r11)
entry _restfpr_19
    lfd f19, -0x68(r11)
entry _restfpr_20
    lfd f20, -0x60(r11)
entry _restfpr_21
    lfd f21, -0x58(r11)
entry _restfpr_22
    lfd f22, -0x50(r11)
entry _restfpr_23
    lfd f23, -0x48(r11)
entry _restfpr_24
    lfd f24, -0x40(r11)
entry _restfpr_25
    lfd f25, -0x38(r11)
entry _restfpr_26
    lfd f26, -0x30(r11)
entry _restfpr_27
    lfd f27, -0x28(r11)
entry _restfpr_28
    lfd f28, -0x20(r11)
entry _restfpr_29
    lfd f29, -0x18(r11)
entry _restfpr_30
    lfd f30, -0x10(r11)
entry _restfpr_31
    lfd f31, -0x8(r11)
    blr
}

asm void __save_gpr(void)
{
    nofralloc
entry _savegpr_14
    stw r14, -0x48(r11)
entry _savegpr_15
    stw r15, -0x44(r11)
entry _savegpr_16
    stw r16, -0x40(r11)
entry _savegpr_17
    stw r17, -0x3c(r11)
entry _savegpr_18
    stw r18, -0x38(r11)
entry _savegpr_19
    stw r19, -0x34(r11)
entry _savegpr_20
    stw r20, -0x30(r11)
entry _savegpr_21
    stw r21, -0x2c(r11)
entry _savegpr_22
    stw r22, -0x28(r11)
entry _savegpr_23
    stw r23, -0x24(r11)
entry _savegpr_24
    stw r24, -0x20(r11)
entry _savegpr_25
    stw r25, -0x1c(r11)
entry _savegpr_26
    stw r26, -0x18(r11)
entry _savegpr_27
    stw r27, -0x14(r11)
entry _savegpr_28
    stw r28, -0x10(r11)
entry _savegpr_29
    stw r29, -0xc(r11)
entry _savegpr_30
    stw r30, -0x8(r11)
entry _savegpr_31
    stw r31, -0x4(r11)
    blr
}

asm void __restore_gpr(void)
{
    nofralloc
entry _restgpr_14
    lwz r14, -0x48(r11)
entry _restgpr_15
    lwz r15, -0x44(r11)
entry _restgpr_16
    lwz r16, -0x40(r11)
entry _restgpr_17
    lwz r17, -0x3c(r11)
entry _restgpr_18
    lwz r18, -0x38(r11)
entry _restgpr_19
    lwz r19, -0x34(r11)
entry _restgpr_20
    lwz r20, -0x30(r11)
entry _restgpr_21
    lwz r21, -0x2c(r11)
entry _restgpr_22
    lwz r22, -0x28(r11)
entry _restgpr_23
    lwz r23, -0x24(r11)
entry _restgpr_24
    lwz r24, -0x20(r11)
entry _restgpr_25
    lwz r25, -0x1c(r11)
entry _restgpr_26
    lwz r26, -0x18(r11)
entry _restgpr_27
    lwz r27, -0x14(r11)
entry _restgpr_28
    lwz r28, -0x10(r11)
entry _restgpr_29
    lwz r29, -0xc(r11)
entry _restgpr_30
    lwz r30, -0x8(r11)
entry _restgpr_31
    lwz r31, -0x4(r11)
    blr
}

asm void __div2u(void)
{
    nofralloc
    cmpwi r3, 0x0
    cntlzw r0, r3
    cntlzw r9, r4
    bne lbl___div2u_00000AA4
    addi r0, r9, 0x20
lbl___div2u_00000AA4:
    cmpwi r5, 0x0
    cntlzw r9, r5
    cntlzw r10, r6
    bne lbl___div2u_00000AB8
    addi r9, r10, 0x20
lbl___div2u_00000AB8:
    cmpw r0, r9
    subfic r10, r0, 0x40
    bgt lbl___div2u_00000B70
    addi r9, r9, 0x1
    subfic r9, r9, 0x40
    add r0, r0, r9
    subf r9, r9, r10
    mtctr r9
    cmpwi r9, 0x20
    subi r7, r9, 0x20
    blt lbl___div2u_00000AF0
    srw r8, r3, r7
    li r7, 0x0
    b lbl___div2u_00000B04
lbl___div2u_00000AF0:
    srw r8, r4, r9
    subfic r7, r9, 0x20
    slw r7, r3, r7
    or r8, r8, r7
    srw r7, r3, r9
lbl___div2u_00000B04:
    cmpwi r0, 0x20
    subic r9, r0, 0x20
    blt lbl___div2u_00000B1C
    slw r3, r4, r9
    li r4, 0x0
    b lbl___div2u_00000B30
lbl___div2u_00000B1C:
    slw r3, r3, r0
    subfic r9, r0, 0x20
    srw r9, r4, r9
    or r3, r3, r9
    slw r4, r4, r0
lbl___div2u_00000B30:
    li r10, -0x1
    addic r7, r7, 0x0
lbl___div2u_00000B38:
    adde r4, r4, r4
    adde r3, r3, r3
    adde r8, r8, r8
    adde r7, r7, r7
    subfc r0, r6, r8
    subfe. r9, r5, r7
    blt lbl___div2u_00000B60
    mr r8, r0
    mr r7, r9
    addic r0, r10, 0x1
lbl___div2u_00000B60:
    bdnz lbl___div2u_00000B38
    adde r4, r4, r4
    adde r3, r3, r3
    blr
lbl___div2u_00000B70:
    li r4, 0x0
    li r3, 0x0
    blr
}

asm void __div2i(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    clrrwi. r9, r3, 31
    beq lbl___div2i_00000B90
    subfic r4, r4, 0x0
    subfze r3, r3
lbl___div2i_00000B90:
    stw r9, 0x8(r1)
    clrrwi. r10, r5, 31
    beq lbl___div2i_00000BA4
    subfic r6, r6, 0x0
    subfze r5, r5
lbl___div2i_00000BA4:
    stw r10, 0xc(r1)
    cmpwi r3, 0x0
    cntlzw r0, r3
    cntlzw r9, r4
    bne lbl___div2i_00000BBC
    addi r0, r9, 0x20
lbl___div2i_00000BBC:
    cmpwi r5, 0x0
    cntlzw r9, r5
    cntlzw r10, r6
    bne lbl___div2i_00000BD0
    addi r9, r10, 0x20
lbl___div2i_00000BD0:
    cmpw r0, r9
    subfic r10, r0, 0x40
    bgt lbl___div2i_00000CA4
    addi r9, r9, 0x1
    subfic r9, r9, 0x40
    add r0, r0, r9
    subf r9, r9, r10
    mtctr r9
    cmpwi r9, 0x20
    subi r7, r9, 0x20
    blt lbl___div2i_00000C08
    srw r8, r3, r7
    li r7, 0x0
    b lbl___div2i_00000C1C
lbl___div2i_00000C08:
    srw r8, r4, r9
    subfic r7, r9, 0x20
    slw r7, r3, r7
    or r8, r8, r7
    srw r7, r3, r9
lbl___div2i_00000C1C:
    cmpwi r0, 0x20
    subic r9, r0, 0x20
    blt lbl___div2i_00000C34
    slw r3, r4, r9
    li r4, 0x0
    b lbl___div2i_00000C48
lbl___div2i_00000C34:
    slw r3, r3, r0
    subfic r9, r0, 0x20
    srw r9, r4, r9
    or r3, r3, r9
    slw r4, r4, r0
lbl___div2i_00000C48:
    li r10, -0x1
    addic r7, r7, 0x0
lbl___div2i_00000C50:
    adde r4, r4, r4
    adde r3, r3, r3
    adde r8, r8, r8
    adde r7, r7, r7
    subfc r0, r6, r8
    subfe. r9, r5, r7
    blt lbl___div2i_00000C78
    mr r8, r0
    mr r7, r9
    addic r0, r10, 0x1
lbl___div2i_00000C78:
    bdnz lbl___div2i_00000C50
    adde r4, r4, r4
    adde r3, r3, r3
    lwz r9, 0x8(r1)
    lwz r10, 0xc(r1)
    xor. r7, r9, r10
    beq lbl___div2i_00000CA0
    cmpwi r9, 0x0
    subfic r4, r4, 0x0
    subfze r3, r3
lbl___div2i_00000CA0:
    b lbl___div2i_00000CAC
lbl___div2i_00000CA4:
    li r4, 0x0
    li r3, 0x0
lbl___div2i_00000CAC:
    addi r1, r1, 0x10
    blr
}

asm void __mod2u(void)
{
    nofralloc
    cmpwi r3, 0x0
    cntlzw r0, r3
    cntlzw r9, r4
    bne lbl___mod2u_00000CC8
    addi r0, r9, 0x20
lbl___mod2u_00000CC8:
    cmpwi r5, 0x0
    cntlzw r9, r5
    cntlzw r10, r6
    bne lbl___mod2u_00000CDC
    addi r9, r10, 0x20
lbl___mod2u_00000CDC:
    cmpw r0, r9
    subfic r10, r0, 0x40
    bgt lbl___mod2u_00000D94
    addi r9, r9, 0x1
    subfic r9, r9, 0x40
    add r0, r0, r9
    subf r9, r9, r10
    mtctr r9
    cmpwi r9, 0x20
    subi r7, r9, 0x20
    blt lbl___mod2u_00000D14
    srw r8, r3, r7
    li r7, 0x0
    b lbl___mod2u_00000D28
lbl___mod2u_00000D14:
    srw r8, r4, r9
    subfic r7, r9, 0x20
    slw r7, r3, r7
    or r8, r8, r7
    srw r7, r3, r9
lbl___mod2u_00000D28:
    cmpwi r0, 0x20
    subic r9, r0, 0x20
    blt lbl___mod2u_00000D40
    slw r3, r4, r9
    li r4, 0x0
    b lbl___mod2u_00000D54
lbl___mod2u_00000D40:
    slw r3, r3, r0
    subfic r9, r0, 0x20
    srw r9, r4, r9
    or r3, r3, r9
    slw r4, r4, r0
lbl___mod2u_00000D54:
    li r10, -0x1
    addic r7, r7, 0x0
lbl___mod2u_00000D5C:
    adde r4, r4, r4
    adde r3, r3, r3
    adde r8, r8, r8
    adde r7, r7, r7
    subfc r0, r6, r8
    subfe. r9, r5, r7
    blt lbl___mod2u_00000D84
    mr r8, r0
    mr r7, r9
    addic r0, r10, 0x1
lbl___mod2u_00000D84:
    bdnz lbl___mod2u_00000D5C
    mr r4, r8
    mr r3, r7
    blr
lbl___mod2u_00000D94:
    blr
}

asm void __mod2i(void)
{
    nofralloc
    cmpwi cr7, r3, 0x0
    bge cr7, lbl___mod2i_00000DA8
    subfic r4, r4, 0x0
    subfze r3, r3
lbl___mod2i_00000DA8:
    cmpwi r5, 0x0
    bge lbl___mod2i_00000DB8
    subfic r6, r6, 0x0
    subfze r5, r5
lbl___mod2i_00000DB8:
    cmpwi r3, 0x0
    cntlzw r0, r3
    cntlzw r9, r4
    bne lbl___mod2i_00000DCC
    addi r0, r9, 0x20
lbl___mod2i_00000DCC:
    cmpwi r5, 0x0
    cntlzw r9, r5
    cntlzw r10, r6
    bne lbl___mod2i_00000DE0
    addi r9, r10, 0x20
lbl___mod2i_00000DE0:
    cmpw r0, r9
    subfic r10, r0, 0x40
    bgt lbl___mod2i_00000E94
    addi r9, r9, 0x1
    subfic r9, r9, 0x40
    add r0, r0, r9
    subf r9, r9, r10
    mtctr r9
    cmpwi r9, 0x20
    subi r7, r9, 0x20
    blt lbl___mod2i_00000E18
    srw r8, r3, r7
    li r7, 0x0
    b lbl___mod2i_00000E2C
lbl___mod2i_00000E18:
    srw r8, r4, r9
    subfic r7, r9, 0x20
    slw r7, r3, r7
    or r8, r8, r7
    srw r7, r3, r9
lbl___mod2i_00000E2C:
    cmpwi r0, 0x20
    subic r9, r0, 0x20
    blt lbl___mod2i_00000E44
    slw r3, r4, r9
    li r4, 0x0
    b lbl___mod2i_00000E58
lbl___mod2i_00000E44:
    slw r3, r3, r0
    subfic r9, r0, 0x20
    srw r9, r4, r9
    or r3, r3, r9
    slw r4, r4, r0
lbl___mod2i_00000E58:
    li r10, -0x1
    addic r7, r7, 0x0
lbl___mod2i_00000E60:
    adde r4, r4, r4
    adde r3, r3, r3
    adde r8, r8, r8
    adde r7, r7, r7
    subfc r0, r6, r8
    subfe. r9, r5, r7
    blt lbl___mod2i_00000E88
    mr r8, r0
    mr r7, r9
    addic r0, r10, 0x1
lbl___mod2i_00000E88:
    bdnz lbl___mod2i_00000E60
    mr r4, r8
    mr r3, r7
lbl___mod2i_00000E94:
    bge cr7, lbl___mod2i_00000EA0
    subfic r4, r4, 0x0
    subfze r3, r3
lbl___mod2i_00000EA0:
    blr
}

asm void fn_80696324(void)
{
    nofralloc
    subfic r8, r5, 0x20
    subic r9, r5, 0x20
    slw r3, r3, r5
    srw r10, r4, r8
    or r3, r3, r10
    slw r10, r4, r9
    or r3, r3, r10
    slw r4, r4, r5
    blr
}

asm void fn_80696348(void)
{
    nofralloc
    subfic r8, r5, 0x20
    subic r9, r5, 0x20
    srw r4, r4, r5
    slw r10, r3, r8
    or r4, r4, r10
    srw r10, r3, r9
    or r4, r4, r10
    srw r3, r3, r5
    blr
}

asm void fn_8069636C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    clrrwi. r5, r3, 31
    beq lbl_fn_8069636C_00000F00
    subfic r4, r4, 0x0
    subfze r3, r3
lbl_fn_8069636C_00000F00:
    or. r7, r3, r4
    li r6, 0x0
    beq lbl_fn_8069636C_00000F88
    cntlzw r7, r3
    cntlzw r8, r4
    extlwi r9, r7, 5, 26
    srawi r9, r9, 31
    and r9, r9, r8
    add r7, r7, r9
    subfic r8, r7, 0x20
    subic r9, r7, 0x20
    slw r3, r3, r7
    srw r10, r4, r8
    or r3, r3, r10
    slw r10, r4, r9
    or r3, r3, r10
    slw r4, r4, r7
    subf r6, r7, r6
    clrlwi r7, r4, 21
    cmpwi r7, 0x400
    addi r6, r6, 0x43e
    blt lbl_fn_8069636C_00000F70
    bgt lbl_fn_8069636C_00000F64
    rlwinm. r7, r4, 0, 20, 20
    beq lbl_fn_8069636C_00000F70
lbl_fn_8069636C_00000F64:
    addic r4, r4, 0x800
    addze r3, r3
    addze r6, r6
lbl_fn_8069636C_00000F70:
    rotrwi r4, r4, 11
    rlwimi r4, r3, 21, 0, 10
    extrwi r3, r3, 20, 1
    slwi r6, r6, 20
    or r3, r6, r3
    or r3, r5, r3
lbl_fn_8069636C_00000F88:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_8069641C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    clrrwi. r5, r3, 31
    beq lbl_fn_8069641C_00000FB0
    subfic r4, r4, 0x0
    subfze r3, r3
lbl_fn_8069641C_00000FB0:
    or. r7, r3, r4
    li r6, 0x0
    beq lbl_fn_8069641C_00001038
    cntlzw r7, r3
    cntlzw r8, r4
    extlwi r9, r7, 5, 26
    srawi r9, r9, 31
    and r9, r9, r8
    add r7, r7, r9
    subfic r8, r7, 0x20
    subic r9, r7, 0x20
    slw r3, r3, r7
    srw r10, r4, r8
    or r3, r3, r10
    slw r10, r4, r9
    or r3, r3, r10
    slw r4, r4, r7
    subf r6, r7, r6
    clrlwi r7, r4, 21
    cmpwi r7, 0x400
    addi r6, r6, 0x43e
    blt lbl_fn_8069641C_00001020
    bgt lbl_fn_8069641C_00001014
    rlwinm. r7, r4, 0, 20, 20
    beq lbl_fn_8069641C_00001020
lbl_fn_8069641C_00001014:
    addic r4, r4, 0x800
    addze r3, r3
    addze r6, r6
lbl_fn_8069641C_00001020:
    rotrwi r4, r4, 11
    rlwimi r4, r3, 21, 0, 10
    extrwi r3, r3, 20, 1
    slwi r6, r6, 20
    or r3, r6, r3
    or r3, r5, r3
lbl_fn_8069641C_00001038:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    frsp f1, f1
    addi r1, r1, 0x10
    blr
}

asm void fn_806964D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    extrwi r5, r3, 11, 1
    cmplwi r5, 0x3ff
    bge lbl_fn_806964D0_00001078
lbl_fn_806964D0_0000106C:
    li r3, 0x0
    li r4, 0x0
    b lbl_fn_806964D0_000010F0
lbl_fn_806964D0_00001078:
    clrrwi. r6, r3, 31
    bne lbl_fn_806964D0_0000106C
    clrlwi r3, r3, 12
    oris r3, r3, 0x10
    subi r5, r5, 0x433
    cmpwi r5, 0x0
    bge lbl_fn_806964D0_000010BC
    neg r5, r5
    subfic r8, r5, 0x20
    subic r9, r5, 0x20
    srw r4, r4, r5
    slw r10, r3, r8
    or r4, r4, r10
    srw r10, r3, r9
    or r4, r4, r10
    srw r3, r3, r5
    b lbl_fn_806964D0_000010F0
lbl_fn_806964D0_000010BC:
    cmpwi r5, 0xb
    ble+ lbl_fn_806964D0_000010D0
    li r3, -0x1
    li r4, -0x1
    b lbl_fn_806964D0_000010F0
lbl_fn_806964D0_000010D0:
    subfic r8, r5, 0x20
    subic r9, r5, 0x20
    slw r3, r3, r5
    srw r10, r4, r8
    or r3, r3, r10
    slw r10, r4, r9
    or r3, r3, r10
    slw r4, r4, r5
lbl_fn_806964D0_000010F0:
    addi r1, r1, 0x10
    blr
}
