#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_16(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_16(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_27(void);
extern void fn_80695B00(void);
extern void fn_80726B50(void);
extern void fn_80727600(void);
extern void fn_80727660(void);
extern void vsnprintf(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087EE40;
extern u32 lbl_80880578;
extern u32 lbl_80889378;
extern u32 lbl_8088937C;
extern u32 lbl_80889380;
extern u32 lbl_80889388;

/* Function declarations */
void fn_80728620(void);
void fn_807287A0(void);
void fn_807288F0(void);
void fn_80728A40(void);
void fn_80728B60(void);
void fn_80728D80(void);
void fn_80728F40(void);
void fn_80729080(void);
void fn_80729190(void);
void fn_80729240(void);
void fn_80729250(void);
void fn_80729260(void);
void fn_807293C0(void);
void fn_80729980(void);
void fn_807299C0(void);
void fn_807299D0(void);
void fn_80729AE0(void);
void fn_8072A2F0(void);

asm void fn_80728620(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_15
    mr r31, r1
    lwz r15, lbl_80880578
    mr r30, r3
    mr r18, r4
    cmpwi r15, 0x0
    beq lbl_fn_80728620_00000030
    b lbl_fn_80728620_00000048
lbl_fn_80728620_00000030:
    lwz r3, lbl_8087EE40
    lwz r0, 0x0(r1)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_80728620_00000048:
    lwz r4, lbl_8087EE40
    mr r3, r15
    bl vsnprintf
    lwz r4, lbl_8087EE40
    subi r0, r4, 0x1
    cmpw r3, r0
    ble lbl_fn_80728620_00000068
    mr r3, r0
lbl_fn_80728620_00000068:
    lwz r16, 0x0(r30)
    mr r4, r18
    lwz r17, 0x4(r30)
    mr r5, r15
    lwz r18, 0x8(r30)
    mr r6, r3
    lwz r19, 0xc(r30)
    addi r3, r31, 0x8
    lwz r20, 0x10(r30)
    lwz r21, 0x14(r30)
    lwz r22, 0x18(r30)
    lwz r23, 0x1c(r30)
    lwz r24, 0x20(r30)
    lwz r25, 0x24(r30)
    lwz r26, 0x28(r30)
    lwz r27, 0x2c(r30)
    lwz r28, 0x30(r30)
    lwz r29, 0x34(r30)
    lwz r12, 0x38(r30)
    lwz r11, 0x3c(r30)
    lhz r10, 0x40(r30)
    lbz r9, 0x42(r30)
    lbz r8, 0x43(r30)
    lfs f3, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f2, 0x4c(r30)
    lfs f1, 0x50(r30)
    lfs f0, 0x54(r30)
    lwz r0, 0x58(r30)
    lwz r15, 0x5c(r30)
    lwz r30, 0x60(r30)
    stw r16, 0x8(r31)
    stw r17, 0xc(r31)
    stw r18, 0x10(r31)
    stw r19, 0x14(r31)
    stw r20, 0x18(r31)
    stw r21, 0x1c(r31)
    stw r22, 0x20(r31)
    stw r23, 0x24(r31)
    stw r24, 0x28(r31)
    stw r25, 0x2c(r31)
    stw r26, 0x30(r31)
    stw r27, 0x34(r31)
    stw r28, 0x38(r31)
    stw r29, 0x3c(r31)
    stw r12, 0x40(r31)
    stw r11, 0x44(r31)
    sth r10, 0x48(r31)
    stb r9, 0x4a(r31)
    stb r8, 0x4b(r31)
    stfs f3, 0x4c(r31)
    stw r7, 0x50(r31)
    stfs f2, 0x54(r31)
    stfs f1, 0x58(r31)
    stfs f0, 0x5c(r31)
    stw r0, 0x60(r31)
    stw r15, 0x64(r31)
    stw r30, 0x68(r31)
    bl fn_807299D0
    addi r3, r31, 0x8
    li r4, 0x0
    bl fn_80726B50
    mr r10, r31
    addi r11, r10, 0xc0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_807287A0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_16
    lfs f4, lbl_8088937C
    mr r6, r5
    lwz r16, 0x0(r3)
    mr r5, r4
    lwz r17, 0x4(r3)
    addi r4, r1, 0x8
    lwz r18, 0x8(r3)
    lwz r19, 0xc(r3)
    lwz r20, 0x10(r3)
    lwz r21, 0x14(r3)
    lwz r22, 0x18(r3)
    lwz r23, 0x1c(r3)
    lwz r24, 0x20(r3)
    lwz r25, 0x24(r3)
    lwz r26, 0x28(r3)
    lwz r27, 0x2c(r3)
    lwz r28, 0x30(r3)
    lwz r29, 0x34(r3)
    lwz r30, 0x38(r3)
    lwz r31, 0x3c(r3)
    lhz r12, 0x40(r3)
    lbz r11, 0x42(r3)
    lbz r10, 0x43(r3)
    lfs f3, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f2, 0x4c(r3)
    lfs f1, 0x50(r3)
    lfs f0, 0x54(r3)
    lwz r8, 0x58(r3)
    lwz r7, 0x5c(r3)
    lwz r0, 0x60(r3)
    addi r3, r1, 0x18
    stfs f4, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f4, 0x14(r1)
    stw r16, 0x18(r1)
    stw r17, 0x1c(r1)
    stw r18, 0x20(r1)
    stw r19, 0x24(r1)
    stw r20, 0x28(r1)
    stw r21, 0x2c(r1)
    stw r22, 0x30(r1)
    stw r23, 0x34(r1)
    stw r24, 0x38(r1)
    stw r25, 0x3c(r1)
    stw r26, 0x40(r1)
    stw r27, 0x44(r1)
    stw r28, 0x48(r1)
    stw r29, 0x4c(r1)
    stw r30, 0x50(r1)
    stw r31, 0x54(r1)
    sth r12, 0x58(r1)
    stb r11, 0x5a(r1)
    stb r10, 0x5b(r1)
    stfs f3, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f2, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f0, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r0, 0x78(r1)
    bl fn_807299D0
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_80726B50
    lfs f1, 0x10(r1)
    addi r11, r1, 0xc0
    lfs f0, 0x8(r1)
    fsubs f1, f1, f0
    bl _restgpr_16
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_807288F0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_16
    lfs f4, lbl_8088937C
    mr r6, r5
    lwz r16, 0x0(r3)
    mr r5, r4
    lwz r17, 0x4(r3)
    addi r4, r1, 0x8
    lwz r18, 0x8(r3)
    lwz r19, 0xc(r3)
    lwz r20, 0x10(r3)
    lwz r21, 0x14(r3)
    lwz r22, 0x18(r3)
    lwz r23, 0x1c(r3)
    lwz r24, 0x20(r3)
    lwz r25, 0x24(r3)
    lwz r26, 0x28(r3)
    lwz r27, 0x2c(r3)
    lwz r28, 0x30(r3)
    lwz r29, 0x34(r3)
    lwz r30, 0x38(r3)
    lwz r31, 0x3c(r3)
    lhz r12, 0x40(r3)
    lbz r11, 0x42(r3)
    lbz r10, 0x43(r3)
    lfs f3, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f2, 0x4c(r3)
    lfs f1, 0x50(r3)
    lfs f0, 0x54(r3)
    lwz r8, 0x58(r3)
    lwz r7, 0x5c(r3)
    lwz r0, 0x60(r3)
    addi r3, r1, 0x18
    stfs f4, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f4, 0x14(r1)
    stw r16, 0x18(r1)
    stw r17, 0x1c(r1)
    stw r18, 0x20(r1)
    stw r19, 0x24(r1)
    stw r20, 0x28(r1)
    stw r21, 0x2c(r1)
    stw r22, 0x30(r1)
    stw r23, 0x34(r1)
    stw r24, 0x38(r1)
    stw r25, 0x3c(r1)
    stw r26, 0x40(r1)
    stw r27, 0x44(r1)
    stw r28, 0x48(r1)
    stw r29, 0x4c(r1)
    stw r30, 0x50(r1)
    stw r31, 0x54(r1)
    sth r12, 0x58(r1)
    stb r11, 0x5a(r1)
    stb r10, 0x5b(r1)
    stfs f3, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f2, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f0, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r0, 0x78(r1)
    bl fn_807299D0
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_80726B50
    lfs f1, 0x14(r1)
    addi r11, r1, 0xc0
    lfs f0, 0xc(r1)
    fsubs f1, f1, f0
    bl _restgpr_16
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80728A40(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_16
    lwz r16, 0x0(r3)
    lwz r17, 0x4(r3)
    lwz r18, 0x8(r3)
    lwz r19, 0xc(r3)
    lwz r20, 0x10(r3)
    lwz r21, 0x14(r3)
    lwz r22, 0x18(r3)
    lwz r23, 0x1c(r3)
    lwz r24, 0x20(r3)
    lwz r25, 0x24(r3)
    lwz r26, 0x28(r3)
    lwz r27, 0x2c(r3)
    lwz r28, 0x30(r3)
    lwz r29, 0x34(r3)
    lwz r30, 0x38(r3)
    lwz r31, 0x3c(r3)
    lhz r12, 0x40(r3)
    lbz r11, 0x42(r3)
    lbz r10, 0x43(r3)
    lfs f3, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f2, 0x4c(r3)
    lfs f1, 0x50(r3)
    lfs f0, 0x54(r3)
    lwz r8, 0x58(r3)
    lwz r7, 0x5c(r3)
    lwz r0, 0x60(r3)
    addi r3, r1, 0x8
    stw r16, 0x8(r1)
    stw r17, 0xc(r1)
    stw r18, 0x10(r1)
    stw r19, 0x14(r1)
    stw r20, 0x18(r1)
    stw r21, 0x1c(r1)
    stw r22, 0x20(r1)
    stw r23, 0x24(r1)
    stw r24, 0x28(r1)
    stw r25, 0x2c(r1)
    stw r26, 0x30(r1)
    stw r27, 0x34(r1)
    stw r28, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r31, 0x44(r1)
    sth r12, 0x48(r1)
    stb r11, 0x4a(r1)
    stb r10, 0x4b(r1)
    stfs f3, 0x4c(r1)
    stw r9, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f0, 0x5c(r1)
    stw r8, 0x60(r1)
    stw r7, 0x64(r1)
    stw r0, 0x68(r1)
    bl fn_807299D0
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80726B50
    addi r11, r1, 0xb0
    bl _restgpr_16
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80728B60(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r1
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r29, 0xe4(r1)
    stw r28, 0xe0(r1)
    mr r28, r4
    bne cr1, lbl_fn_80728B60_00000594
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_80728B60_00000594:
    lwz r29, lbl_80880578
    addi r11, r31, 0x108
    addi r0, r31, 0x8
    lis r12, 0x200
    cmpwi r29, 0x0
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_80728B60_000005DC
    b lbl_fn_80728B60_000005F4
lbl_fn_80728B60_000005DC:
    lwz r3, lbl_8087EE40
    lwz r0, 0x0(r1)
    neg r29, r3
    clrrwi r29, r29, 3
    stwux r0, r1, r29
    addi r29, r1, 0x8
lbl_fn_80728B60_000005F4:
    lwz r4, lbl_8087EE40
    mr r3, r29
    mr r5, r28
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r4, lbl_8087EE40
    subi r0, r4, 0x1
    cmpw r3, r0
    ble lbl_fn_80728B60_0000061C
    mr r3, r0
lbl_fn_80728B60_0000061C:
    lwz r0, 0x0(r30)
    mr r5, r3
    stw r0, 0x74(r31)
    mr r4, r29
    addi r3, r31, 0x74
    li r6, 0x0
    lwz r0, 0x4(r30)
    stw r0, 0x78(r31)
    lwz r0, 0x8(r30)
    stw r0, 0x7c(r31)
    lwz r0, 0xc(r30)
    stw r0, 0x80(r31)
    lwz r0, 0x10(r30)
    stw r0, 0x84(r31)
    lwz r0, 0x14(r30)
    stw r0, 0x88(r31)
    lwz r0, 0x18(r30)
    stw r0, 0x8c(r31)
    lwz r0, 0x1c(r30)
    stw r0, 0x90(r31)
    lwz r0, 0x20(r30)
    stw r0, 0x94(r31)
    lwz r7, 0x24(r30)
    lwz r0, 0x28(r30)
    stw r0, 0x9c(r31)
    stw r7, 0x98(r31)
    lwz r7, 0x2c(r30)
    lwz r0, 0x30(r30)
    stw r0, 0xa4(r31)
    stw r7, 0xa0(r31)
    lwz r0, 0x34(r30)
    stw r0, 0xa8(r31)
    lwz r7, 0x38(r30)
    lwz r0, 0x3c(r30)
    stw r0, 0xb0(r31)
    stw r7, 0xac(r31)
    lhz r0, 0x40(r30)
    sth r0, 0xb4(r31)
    lbz r0, 0x42(r30)
    stb r0, 0xb6(r31)
    lbz r0, 0x43(r30)
    stb r0, 0xb7(r31)
    lfs f0, 0x44(r30)
    stfs f0, 0xb8(r31)
    lwz r0, 0x48(r30)
    stw r0, 0xbc(r31)
    lfs f0, 0x4c(r30)
    stfs f0, 0xc0(r31)
    lfs f0, 0x50(r30)
    stfs f0, 0xc4(r31)
    lfs f0, 0x54(r30)
    stfs f0, 0xc8(r31)
    lwz r0, 0x58(r30)
    stw r0, 0xcc(r31)
    lwz r0, 0x5c(r30)
    stw r0, 0xd0(r31)
    lwz r0, 0x60(r30)
    stw r0, 0xd4(r31)
    bl fn_80729AE0
    lfs f0, 0xa4(r31)
    fmr f31, f1
    lfs f2, 0xa0(r31)
    addi r3, r31, 0x74
    stfs f2, 0x2c(r30)
    li r4, 0x0
    stfs f0, 0x30(r30)
    bl fn_80726B50
    mr r10, r31
    fmr f1, f31
    psq_l f31, 0xf8(r10), 0, 0
    lfd f31, 0xf0(r31)
    lwz r31, 0xec(r31)
    lwz r30, 0xe8(r10)
    lwz r29, 0xe4(r10)
    lwz r28, 0xe0(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80728D80(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    mr r7, r4
    mr r6, r5
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r1
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    lwz r29, lbl_80880578
    cmpwi r29, 0x0
    beq lbl_fn_80728D80_000007A0
    b lbl_fn_80728D80_000007B8
lbl_fn_80728D80_000007A0:
    lwz r3, lbl_8087EE40
    lwz r0, 0x0(r1)
    neg r29, r3
    clrrwi r29, r29, 3
    stwux r0, r1, r29
    addi r29, r1, 0x8
lbl_fn_80728D80_000007B8:
    lwz r4, lbl_8087EE40
    mr r3, r29
    mr r5, r7
    bl vsnprintf
    lwz r4, lbl_8087EE40
    subi r0, r4, 0x1
    cmpw r3, r0
    ble lbl_fn_80728D80_000007DC
    mr r3, r0
lbl_fn_80728D80_000007DC:
    lwz r0, 0x0(r30)
    mr r5, r3
    stw r0, 0x8(r31)
    mr r4, r29
    addi r3, r31, 0x8
    li r6, 0x0
    lwz r0, 0x4(r30)
    stw r0, 0xc(r31)
    lwz r0, 0x8(r30)
    stw r0, 0x10(r31)
    lwz r0, 0xc(r30)
    stw r0, 0x14(r31)
    lwz r0, 0x10(r30)
    stw r0, 0x18(r31)
    lwz r0, 0x14(r30)
    stw r0, 0x1c(r31)
    lwz r0, 0x18(r30)
    stw r0, 0x20(r31)
    lwz r0, 0x1c(r30)
    stw r0, 0x24(r31)
    lwz r0, 0x20(r30)
    stw r0, 0x28(r31)
    lwz r7, 0x24(r30)
    lwz r0, 0x28(r30)
    stw r0, 0x30(r31)
    stw r7, 0x2c(r31)
    lwz r7, 0x2c(r30)
    lwz r0, 0x30(r30)
    stw r0, 0x38(r31)
    stw r7, 0x34(r31)
    lwz r0, 0x34(r30)
    stw r0, 0x3c(r31)
    lwz r7, 0x38(r30)
    lwz r0, 0x3c(r30)
    stw r0, 0x44(r31)
    stw r7, 0x40(r31)
    lhz r0, 0x40(r30)
    sth r0, 0x48(r31)
    lbz r0, 0x42(r30)
    stb r0, 0x4a(r31)
    lbz r0, 0x43(r30)
    stb r0, 0x4b(r31)
    lfs f0, 0x44(r30)
    stfs f0, 0x4c(r31)
    lwz r0, 0x48(r30)
    stw r0, 0x50(r31)
    lfs f0, 0x4c(r30)
    stfs f0, 0x54(r31)
    lfs f0, 0x50(r30)
    stfs f0, 0x58(r31)
    lfs f0, 0x54(r30)
    stfs f0, 0x5c(r31)
    lwz r0, 0x58(r30)
    stw r0, 0x60(r31)
    lwz r0, 0x5c(r30)
    stw r0, 0x64(r31)
    lwz r0, 0x60(r30)
    stw r0, 0x68(r31)
    bl fn_80729AE0
    lfs f0, 0x38(r31)
    fmr f31, f1
    lfs f2, 0x34(r31)
    addi r3, r31, 0x8
    stfs f2, 0x2c(r30)
    li r4, 0x0
    stfs f0, 0x30(r30)
    bl fn_80726B50
    mr r10, r31
    fmr f1, f31
    psq_l f31, 0x88(r10), 0, 0
    lfd f31, 0x80(r31)
    lwz r31, 0x7c(r31)
    lwz r30, 0x78(r10)
    lwz r29, 0x74(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80728F40(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    lwz r0, 0x4(r3)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r3)
    stw r0, 0x10(r1)
    lwz r0, 0xc(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r3)
    stw r0, 0x18(r1)
    lwz r0, 0x14(r3)
    stw r0, 0x1c(r1)
    lwz r0, 0x18(r3)
    stw r0, 0x20(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x24(r1)
    lwz r0, 0x20(r3)
    stw r0, 0x28(r1)
    lwz r7, 0x24(r3)
    lwz r0, 0x28(r3)
    stw r0, 0x30(r1)
    stw r7, 0x2c(r1)
    lwz r7, 0x2c(r3)
    lwz r0, 0x30(r3)
    stw r0, 0x38(r1)
    stw r7, 0x34(r1)
    lwz r0, 0x34(r3)
    stw r0, 0x3c(r1)
    lwz r7, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x44(r1)
    stw r7, 0x40(r1)
    lhz r0, 0x40(r3)
    sth r0, 0x48(r1)
    lbz r0, 0x42(r3)
    stb r0, 0x4a(r1)
    lbz r0, 0x43(r3)
    stb r0, 0x4b(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x4c(r1)
    lwz r0, 0x48(r3)
    stw r0, 0x50(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x58(r1)
    lfs f0, 0x54(r3)
    stfs f0, 0x5c(r1)
    lwz r0, 0x58(r3)
    stw r0, 0x60(r1)
    lwz r0, 0x5c(r3)
    stw r0, 0x64(r1)
    lwz r0, 0x60(r3)
    addi r3, r1, 0x8
    stw r0, 0x68(r1)
    bl fn_80729AE0
    lfs f0, 0x38(r1)
    fmr f31, f1
    lfs f2, 0x34(r1)
    addi r3, r1, 0x8
    stfs f2, 0x2c(r31)
    li r4, 0x0
    stfs f0, 0x30(r31)
    bl fn_80726B50
    fmr f1, f31
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80729080(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r1
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    bne cr1, lbl_fn_80729080_00000AAC
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_80729080_00000AAC:
    lwz r30, lbl_80880578
    addi r11, r31, 0x98
    addi r0, r31, 0x8
    lis r12, 0x200
    cmpwi r30, 0x0
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_80729080_00000AF4
    b lbl_fn_80729080_00000B0C
lbl_fn_80729080_00000AF4:
    lwz r3, lbl_8087EE40
    lwz r0, 0x0(r1)
    neg r30, r3
    clrrwi r30, r30, 3
    stwux r0, r1, r30
    addi r30, r1, 0x8
lbl_fn_80729080_00000B0C:
    lwz r4, lbl_8087EE40
    mr r3, r30
    mr r5, r29
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r6, lbl_8087EE40
    mr r5, r3
    mr r3, r28
    mr r4, r30
    subi r0, r6, 0x1
    cmpw r5, r0
    ble lbl_fn_80729080_00000B40
    mr r5, r0
lbl_fn_80729080_00000B40:
    li r6, 0x1
    bl fn_80729AE0
    mr r10, r31
    lwz r31, 0x8c(r31)
    lwz r30, 0x88(r10)
    lwz r29, 0x84(r10)
    lwz r28, 0x80(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80729190(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r7, r4
    mr r6, r5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r30, lbl_80880578
    cmpwi r30, 0x0
    beq lbl_fn_80729190_00000BA8
    b lbl_fn_80729190_00000BC0
lbl_fn_80729190_00000BA8:
    lwz r3, lbl_8087EE40
    lwz r0, 0x0(r1)
    neg r30, r3
    clrrwi r30, r30, 3
    stwux r0, r1, r30
    addi r30, r1, 0x8
lbl_fn_80729190_00000BC0:
    lwz r4, lbl_8087EE40
    mr r3, r30
    mr r5, r7
    bl vsnprintf
    lwz r6, lbl_8087EE40
    mr r5, r3
    mr r3, r29
    mr r4, r30
    subi r0, r6, 0x1
    cmpw r5, r0
    ble lbl_fn_80729190_00000BF0
    mr r5, r0
lbl_fn_80729190_00000BF0:
    li r6, 0x1
    bl fn_80729AE0
    mr r10, r31
    lwz r31, 0x1c(r31)
    lwz r30, 0x18(r10)
    lwz r29, 0x14(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80729240(void)
{
    nofralloc
    li r6, 0x1
    b fn_80729AE0
}

asm void fn_80729250(void)
{
    nofralloc
    b vsnprintf
}

asm void fn_80729260(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    lfs f1, lbl_8088937C
    mr r6, r5
    stw r4, 0x8(r1)
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x20(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x24(r1)
    lwz r0, 0x8(r3)
    stw r0, 0x28(r1)
    lwz r0, 0xc(r3)
    stw r0, 0x2c(r1)
    lwz r0, 0x10(r3)
    stw r0, 0x30(r1)
    lwz r0, 0x14(r3)
    stw r0, 0x34(r1)
    lwz r0, 0x18(r3)
    stw r0, 0x38(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x3c(r1)
    lwz r0, 0x20(r3)
    stw r0, 0x40(r1)
    lwz r7, 0x24(r3)
    lwz r0, 0x28(r3)
    stw r0, 0x48(r1)
    stw r7, 0x44(r1)
    lwz r7, 0x2c(r3)
    lwz r0, 0x30(r3)
    stw r0, 0x50(r1)
    stw r7, 0x4c(r1)
    lwz r0, 0x34(r3)
    stw r0, 0x54(r1)
    lwz r7, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x5c(r1)
    stw r7, 0x58(r1)
    lhz r0, 0x40(r3)
    sth r0, 0x60(r1)
    lbz r0, 0x42(r3)
    stb r0, 0x62(r1)
    lbz r0, 0x43(r3)
    stb r0, 0x63(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x64(r1)
    lwz r0, 0x48(r3)
    stw r0, 0x68(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x6c(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x70(r1)
    lfs f0, 0x54(r3)
    stfs f0, 0x74(r1)
    lwz r0, 0x58(r3)
    stw r0, 0x78(r1)
    lwz r0, 0x5c(r3)
    stw r0, 0x7c(r1)
    lwz r0, 0x60(r3)
    addi r3, r1, 0x20
    stw r0, 0x80(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x50(r1)
    bl fn_807293C0
    lfs f1, 0x18(r1)
    addi r3, r1, 0x20
    lfs f0, 0x10(r1)
    li r4, 0x0
    fsubs f31, f1, f0
    bl fn_80726B50
    fmr f1, f31
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_807293C0(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    stfd f27, 0x190(r1)
    psq_st f27, 0x198(r1), 0, 0
    bl _savegpr_20
    lfs f1, 0x4c(r3)
    mr r22, r3
    lfs f0, lbl_80889378
    mr r23, r4
    lwz r21, 0x0(r5)
    mr r24, r5
    fcmpo cr0, f1, f0
    mr r25, r6
    add r31, r21, r6
    mfcr r30
    lfs f31, lbl_8088937C
    li r20, 0x0
    stw r3, 0xcc(r1)
    srwi r30, r30, 31
    addi r3, r1, 0x98
    stw r20, 0xd4(r1)
    li r29, 0x0
    li r28, 0x0
    stw r20, 0xd8(r1)
    stw r20, 0xdc(r1)
    stw r21, 0xd0(r1)
    stfs f31, 0xa8(r1)
    lwz r4, 0x48(r22)
    stfs f31, 0xc(r1)
    stfs f31, 0x20(r1)
    stfs f31, 0x34(r1)
    bl fn_80729980
    lfs f0, lbl_8088937C
    stfs f0, 0x0(r23)
    stfs f0, 0x8(r23)
    lwz r3, 0x48(r22)
    cmpwi r3, 0x0
    beq lbl_fn_807293C0_00000E74
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_807293C0_00000E78
lbl_fn_807293C0_00000E74:
    mr r3, r20
lbl_fn_807293C0_00000E78:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0x14c(r1)
    lfd f2, lbl_80889380
    stw r0, 0x148(r1)
    lfs f3, 0x28(r22)
    lfd f0, 0x148(r1)
    lfs f1, 0x54(r22)
    fsubs f2, f0, f2
    lfs f0, lbl_8088937C
    fmuls f2, f2, f3
    fadds f1, f1, f2
    fcmpo cr0, f0, f1
    ble lbl_fn_807293C0_00000EB4
    b lbl_fn_807293C0_00000EB8
lbl_fn_807293C0_00000EB4:
    fmr f1, f0
lbl_fn_807293C0_00000EB8:
    stfs f1, 0x4(r23)
    lwz r3, 0x48(r22)
    cmpwi r3, 0x0
    beq lbl_fn_807293C0_00000EDC
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_807293C0_00000EE0
lbl_fn_807293C0_00000EDC:
    li r3, 0x0
lbl_fn_807293C0_00000EE0:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0x154(r1)
    lfd f2, lbl_80889380
    stw r0, 0x150(r1)
    lfs f3, 0x28(r22)
    lfd f0, 0x150(r1)
    lfs f1, 0x54(r22)
    fsubs f2, f0, f2
    lfs f0, lbl_8088937C
    fmuls f2, f2, f3
    fadds f4, f1, f2
    fcmpo cr0, f0, f4
    bge lbl_fn_807293C0_00000F1C
    b lbl_fn_807293C0_00000F20
lbl_fn_807293C0_00000F1C:
    fmr f4, f0
lbl_fn_807293C0_00000F20:
    frsp f0, f4
    lfs f3, 0x0(r23)
    lfs f2, 0x4(r23)
    addi r3, r1, 0x98
    lfs f1, 0x8(r23)
    addi r12, r1, 0x9c
    stfs f4, 0xc(r23)
    li r27, 0x0
    stfs f3, 0x38(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x74(r1)
    stw r21, 0x98(r1)
    bl fn_80695B00
    nop
    lfs f29, lbl_8088937C
    mr r26, r3
    lfd f30, lbl_80889380
    addi r20, r1, 0xe0
    lis r21, 0x4330
    b lbl_fn_807293C0_00001304
lbl_fn_807293C0_00000F74:
    clrlwi r5, r26, 16
    cmpwi r5, 0x20
    bge lbl_fn_807293C0_00001220
    cntlzw r0, r29
    stfs f29, 0x8c(r1)
    srwi r0, r0, 5
    cmpwi r30, 0x0
    stfs f29, 0x90(r1)
    stfs f29, 0x94(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xdc(r1)
    stfs f31, 0x88(r1)
    stfs f31, 0x2c(r22)
    beq lbl_fn_807293C0_0000113C
    cmpwi r5, 0xa
    beq lbl_fn_807293C0_0000113C
    cmpwi r27, 0x0
    beq lbl_fn_807293C0_0000113C
    lwz r9, 0xcc(r1)
    addi r4, r1, 0x78
    lwz r8, 0xd0(r1)
    addi r6, r1, 0xb8
    lwz r7, 0xd4(r1)
    lwz r3, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r3, 0xc4(r1)
    stw r0, 0xc8(r1)
    lwz r0, 0x0(r22)
    stw r0, 0xe0(r1)
    lwz r0, 0x4(r22)
    stw r0, 0xe4(r1)
    lwz r0, 0x8(r22)
    stw r0, 0xe8(r1)
    lwz r0, 0xc(r22)
    stw r0, 0xec(r1)
    lwz r0, 0x10(r22)
    stw r0, 0xf0(r1)
    lwz r0, 0x14(r22)
    stw r0, 0xf4(r1)
    lwz r0, 0x18(r22)
    stw r0, 0xf8(r1)
    lwz r0, 0x1c(r22)
    stw r0, 0xfc(r1)
    lwz r0, 0x20(r22)
    stw r0, 0x100(r1)
    lwz r3, 0x24(r22)
    lwz r0, 0x28(r22)
    stw r0, 0x108(r1)
    stw r3, 0x104(r1)
    lwz r3, 0x2c(r22)
    lwz r0, 0x30(r22)
    stw r0, 0x110(r1)
    stw r3, 0x10c(r1)
    lwz r0, 0x34(r22)
    stw r0, 0x114(r1)
    lwz r3, 0x38(r22)
    lwz r0, 0x3c(r22)
    stw r0, 0x11c(r1)
    stw r3, 0x118(r1)
    lhz r0, 0x40(r22)
    sth r0, 0x120(r1)
    lbz r0, 0x42(r22)
    stb r0, 0x122(r1)
    lbz r0, 0x43(r22)
    stb r0, 0x123(r1)
    lfs f0, 0x44(r22)
    stfs f0, 0x124(r1)
    lwz r0, 0x48(r22)
    stw r0, 0x128(r1)
    lfs f0, 0x4c(r22)
    stfs f0, 0x12c(r1)
    lfs f0, 0x50(r22)
    stfs f0, 0x130(r1)
    lfs f0, 0x54(r22)
    stfs f0, 0x134(r1)
    lwz r0, 0x58(r22)
    stw r0, 0x138(r1)
    lwz r0, 0x5c(r22)
    stw r0, 0x13c(r1)
    lwz r3, 0x60(r22)
    stw r3, 0x140(r1)
    stfs f29, 0x78(r1)
    stfs f29, 0x7c(r1)
    stfs f29, 0x80(r1)
    stfs f29, 0x84(r1)
    stw r20, 0xb8(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lfs f1, 0x80(r1)
    lfs f0, 0x78(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f29
    ble lbl_fn_807293C0_00001130
    lfs f2, 0x10c(r1)
    lfs f1, 0xd4(r1)
    lfs f0, 0x4c(r22)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_807293C0_00001130
    stw r27, 0x98(r1)
    mr r3, r20
    li r28, 0x1
    li r26, 0xa
    li r4, 0x0
    bl fn_80726B50
    b lbl_fn_807293C0_00001304
lbl_fn_807293C0_00001130:
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_80726B50
lbl_fn_807293C0_0000113C:
    lwz r3, 0x60(r22)
    addi r4, r1, 0x88
    clrlwi r5, r26, 16
    addi r6, r1, 0xcc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0xd0(r1)
    stw r0, 0x98(r1)
    lfs f1, 0x88(r1)
    lfs f0, 0x0(r23)
    fcmpo cr0, f0, f1
    ble lbl_fn_807293C0_00001178
    b lbl_fn_807293C0_0000117C
lbl_fn_807293C0_00001178:
    fmr f1, f0
lbl_fn_807293C0_0000117C:
    stfs f1, 0x0(r23)
    lfs f0, 0x4(r23)
    lfs f1, 0x8c(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_807293C0_00001194
    b lbl_fn_807293C0_00001198
lbl_fn_807293C0_00001194:
    fmr f1, f0
lbl_fn_807293C0_00001198:
    stfs f1, 0x4(r23)
    lfs f0, 0x8(r23)
    lfs f1, 0x90(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_807293C0_000011B0
    b lbl_fn_807293C0_000011B4
lbl_fn_807293C0_000011B0:
    fmr f1, f0
lbl_fn_807293C0_000011B4:
    stfs f1, 0x8(r23)
    lfs f0, 0xc(r23)
    lfs f1, 0x94(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_807293C0_000011CC
    b lbl_fn_807293C0_000011D0
lbl_fn_807293C0_000011CC:
    fmr f1, f0
lbl_fn_807293C0_000011D0:
    stfs f1, 0xc(r23)
    cmpwi r3, 0x4
    lfs f31, 0x2c(r22)
    bne lbl_fn_807293C0_000011F4
    lwz r0, 0x0(r24)
    li r3, 0x0
    add r0, r0, r25
    stw r0, 0x0(r24)
    b lbl_fn_807293C0_0000131C
lbl_fn_807293C0_000011F4:
    cmpwi r3, 0x1
    bne lbl_fn_807293C0_00001204
    li r29, 0x0
    b lbl_fn_807293C0_000012E4
lbl_fn_807293C0_00001204:
    cmpwi r3, 0x2
    bne lbl_fn_807293C0_00001214
    li r29, 0x1
    b lbl_fn_807293C0_000012E4
lbl_fn_807293C0_00001214:
    cmpwi r3, 0x3
    beq lbl_fn_807293C0_00001310
    b lbl_fn_807293C0_000012E4
lbl_fn_807293C0_00001220:
    cmpwi r29, 0x0
    lfs f27, lbl_8088937C
    beq lbl_fn_807293C0_00001234
    lfs f0, 0x50(r22)
    fadds f27, f27, f0
lbl_fn_807293C0_00001234:
    lbz r0, 0x43(r22)
    cmpwi r0, 0x0
    beq lbl_fn_807293C0_0000124C
    lfs f0, 0x44(r22)
    fadds f27, f27, f0
    b lbl_fn_807293C0_00001284
lbl_fn_807293C0_0000124C:
    lwz r3, 0x48(r22)
    clrlwi r4, r26, 16
    lfs f28, 0x24(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r0, 0x154(r1)
    stw r21, 0x150(r1)
    lfd f0, 0x150(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f28
    fadds f27, f27, f0
lbl_fn_807293C0_00001284:
    cmpwi r30, 0x0
    beq lbl_fn_807293C0_000012B4
    cmpwi r27, 0x0
    beq lbl_fn_807293C0_000012B4
    fadds f1, f31, f27
    lfs f0, 0x4c(r22)
    fcmpo cr0, f1, f0
    ble lbl_fn_807293C0_000012B4
    stw r27, 0x98(r1)
    li r28, 0x1
    li r26, 0xa
    b lbl_fn_807293C0_00001304
lbl_fn_807293C0_000012B4:
    fadds f31, f31, f27
    lfs f0, 0x0(r23)
    fcmpo cr0, f0, f31
    ble lbl_fn_807293C0_000012C8
    fmr f0, f31
lbl_fn_807293C0_000012C8:
    lfs f1, 0x8(r23)
    stfs f0, 0x0(r23)
    fcmpo cr0, f1, f31
    bge lbl_fn_807293C0_000012DC
    fmr f1, f31
lbl_fn_807293C0_000012DC:
    stfs f1, 0x8(r23)
    li r29, 0x1
lbl_fn_807293C0_000012E4:
    cmpwi r30, 0x0
    beq lbl_fn_807293C0_000012F0
    lwz r27, 0x98(r1)
lbl_fn_807293C0_000012F0:
    addi r3, r1, 0x98
    addi r12, r1, 0x9c
    bl fn_80695B00
    nop
    mr r26, r3
lbl_fn_807293C0_00001304:
    lwz r3, 0x98(r1)
    cmplw r3, r31
    ble lbl_fn_807293C0_00000F74
lbl_fn_807293C0_00001310:
    lwz r0, 0x98(r1)
    mr r3, r28
    stw r0, 0x0(r24)
lbl_fn_807293C0_0000131C:
    addi r11, r1, 0x190
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    psq_l f27, 0x198(r1), 0, 0
    lfd f27, 0x190(r1)
    bl _restgpr_20
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_80729980(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r0, 0x0
    lwz r6, 0x4(r4)
    lwz r5, 0x8(r4)
    lwz r4, 0xc(r4)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x0(r3)
    stw r6, 0x4(r3)
    stw r5, 0x8(r3)
    stw r4, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_807299C0(void)
{
    nofralloc
    lfs f1, 0x50(r3)
    blr
}

asm void fn_807299D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    lfs f31, lbl_8088937C
    stw r31, 0x2c(r1)
    add r31, r5, r6
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r5, 0x8(r1)
    stfs f31, 0x0(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0x4(r4)
    stfs f31, 0xc(r4)
    stfs f31, 0x2c(r3)
    stfs f31, 0x30(r3)
lbl_fn_807299D0_000013FC:
    stfs f31, 0x10(r1)
    mr r3, r29
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    bl fn_807293C0
    lfs f1, 0x10(r1)
    lfs f0, 0x0(r30)
    lwz r0, 0x8(r1)
    fcmpo cr0, f0, f1
    subf r6, r0, r31
    ble lbl_fn_807299D0_00001438
    b lbl_fn_807299D0_0000143C
lbl_fn_807299D0_00001438:
    fmr f1, f0
lbl_fn_807299D0_0000143C:
    stfs f1, 0x0(r30)
    lfs f0, 0x4(r30)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_807299D0_00001454
    b lbl_fn_807299D0_00001458
lbl_fn_807299D0_00001454:
    fmr f1, f0
lbl_fn_807299D0_00001458:
    stfs f1, 0x4(r30)
    lfs f0, 0x8(r30)
    lfs f1, 0x18(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_807299D0_00001470
    b lbl_fn_807299D0_00001474
lbl_fn_807299D0_00001470:
    fmr f1, f0
lbl_fn_807299D0_00001474:
    stfs f1, 0x8(r30)
    lfs f0, 0xc(r30)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_807299D0_0000148C
    b lbl_fn_807299D0_00001490
lbl_fn_807299D0_0000148C:
    fmr f1, f0
lbl_fn_807299D0_00001490:
    cmpwi r6, 0x0
    stfs f1, 0xc(r30)
    bgt lbl_fn_807299D0_000013FC
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80729AE0(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    stfd f30, 0x270(r1)
    psq_st f30, 0x278(r1), 0, 0
    stfd f29, 0x260(r1)
    psq_st f29, 0x268(r1), 0, 0
    stfd f28, 0x250(r1)
    psq_st f28, 0x258(r1), 0, 0
    stfd f27, 0x240(r1)
    psq_st f27, 0x248(r1), 0, 0
    stfd f26, 0x230(r1)
    psq_st f26, 0x238(r1), 0, 0
    stfd f25, 0x220(r1)
    psq_st f25, 0x228(r1), 0, 0
    stfd f24, 0x210(r1)
    psq_st f24, 0x218(r1), 0, 0
    stfd f23, 0x200(r1)
    psq_st f23, 0x208(r1), 0, 0
    stfd f22, 0x1f0(r1)
    psq_st f22, 0x1f8(r1), 0, 0
    bl _savegpr_21
    lfs f0, 0x2c(r3)
    mr r23, r4
    stfs f0, 0x14(r1)
    mr r24, r5
    lfs f0, lbl_80889378
    mr r22, r3
    lfs f28, 0x30(r3)
    mr r25, r6
    stfs f28, 0x10(r1)
    lfs f1, 0x4c(r3)
    fcmpo cr0, f1, f0
    mfcr r30
    mr r28, r23
    srwi r30, r30, 31
    mr r27, r23
    mr r6, r23
    mr r7, r24
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    li r29, 0x0
    bl fn_8072A2F0
    lfs f0, 0x30(r22)
    li r0, 0x0
    lfs f2, 0x14(r1)
    fmr f25, f1
    stw r0, 0x74(r1)
    fsubs f26, f28, f0
    lfs f0, 0x10(r1)
    addi r3, r1, 0x48
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r22, 0x6c(r1)
    stw r23, 0x70(r1)
    stfs f2, 0x74(r1)
    stfs f0, 0x78(r1)
    lwz r4, 0x48(r22)
    bl fn_80729980
    stw r23, 0x48(r1)
    addi r3, r1, 0x48
    addi r12, r1, 0x4c
    bl fn_80695B00
    nop
    lfs f29, lbl_8088937C
    mr r26, r3
    lfs f30, lbl_80889388
    addi r31, r1, 0x148
    lfd f31, lbl_80889380
    lis r21, 0x4330
    b lbl_fn_80729AE0_00001BD8
lbl_fn_80729AE0_000015E8:
    clrlwi r5, r26, 16
    cmpwi r5, 0x20
    bge lbl_fn_80729AE0_00001AB0
    cntlzw r0, r29
    cmpwi r30, 0x0
    srwi r8, r0, 5
    stw r9, 0x70(r1)
    stw r8, 0x7c(r1)
    beq lbl_fn_80729AE0_00001790
    cmpwi r5, 0xa
    beq lbl_fn_80729AE0_00001790
    cmplw r28, r27
    beq lbl_fn_80729AE0_00001790
    lwz r7, 0x6c(r1)
    addi r4, r1, 0x38
    lwz r3, 0x74(r1)
    addi r6, r1, 0x58
    lwz r0, 0x78(r1)
    stw r7, 0x58(r1)
    stw r9, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    stw r8, 0x68(r1)
    lwz r0, 0x0(r22)
    stw r0, 0x148(r1)
    lwz r0, 0x4(r22)
    stw r0, 0x14c(r1)
    lwz r0, 0x8(r22)
    stw r0, 0x150(r1)
    lwz r0, 0xc(r22)
    stw r0, 0x154(r1)
    lwz r0, 0x10(r22)
    stw r0, 0x158(r1)
    lwz r0, 0x14(r22)
    stw r0, 0x15c(r1)
    lwz r0, 0x18(r22)
    stw r0, 0x160(r1)
    lwz r0, 0x1c(r22)
    stw r0, 0x164(r1)
    lwz r0, 0x20(r22)
    stw r0, 0x168(r1)
    lwz r3, 0x24(r22)
    lwz r0, 0x28(r22)
    stw r0, 0x170(r1)
    stw r3, 0x16c(r1)
    lwz r3, 0x2c(r22)
    lwz r0, 0x30(r22)
    stw r0, 0x178(r1)
    stw r3, 0x174(r1)
    lwz r0, 0x34(r22)
    stw r0, 0x17c(r1)
    lwz r3, 0x38(r22)
    lwz r0, 0x3c(r22)
    stw r0, 0x184(r1)
    stw r3, 0x180(r1)
    lhz r0, 0x40(r22)
    sth r0, 0x188(r1)
    lbz r0, 0x42(r22)
    stb r0, 0x18a(r1)
    lbz r0, 0x43(r22)
    stb r0, 0x18b(r1)
    lfs f0, 0x44(r22)
    stfs f0, 0x18c(r1)
    lwz r0, 0x48(r22)
    stw r0, 0x190(r1)
    lfs f0, 0x4c(r22)
    stfs f0, 0x194(r1)
    lfs f0, 0x50(r22)
    stfs f0, 0x198(r1)
    lfs f0, 0x54(r22)
    stfs f0, 0x19c(r1)
    lwz r0, 0x58(r22)
    stw r0, 0x1a0(r1)
    lwz r0, 0x5c(r22)
    stw r0, 0x1a4(r1)
    lwz r3, 0x60(r22)
    stw r3, 0x1a8(r1)
    stfs f29, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f29, 0x40(r1)
    stfs f29, 0x44(r1)
    stw r31, 0x58(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lfs f1, 0x40(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f29
    ble lbl_fn_80729AE0_00001784
    lfs f2, 0x174(r1)
    lfs f1, 0x74(r1)
    lfs f0, 0x4c(r22)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80729AE0_00001784
    stw r28, 0x48(r1)
    mr r3, r31
    li r26, 0xa
    li r4, 0x0
    bl fn_80726B50
    b lbl_fn_80729AE0_00001BD8
lbl_fn_80729AE0_00001784:
    addi r3, r1, 0x148
    li r4, 0x0
    bl fn_80726B50
lbl_fn_80729AE0_00001790:
    lwz r3, 0x60(r22)
    clrlwi r4, r26, 16
    addi r5, r1, 0x6c
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_fn_80729AE0_00001A7C
    lwz r0, 0x5c(r22)
    clrlwi r3, r0, 30
    cmplwi r3, 0x1
    bne lbl_fn_80729AE0_00001900
    lwz r5, 0x70(r1)
    addi r3, r1, 0xe4
    stw r5, 0xc(r1)
    addi r4, r1, 0x28
    subf r6, r23, r5
    addi r5, r1, 0xc
    stfs f29, 0x28(r1)
    subf r6, r6, r24
    stfs f29, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f29, 0x34(r1)
    lwz r7, 0x0(r22)
    stw r7, 0xe4(r1)
    lwz r7, 0x4(r22)
    stw r7, 0xe8(r1)
    lwz r7, 0x8(r22)
    stw r7, 0xec(r1)
    lwz r7, 0xc(r22)
    stw r7, 0xf0(r1)
    lwz r7, 0x10(r22)
    stw r7, 0xf4(r1)
    lwz r7, 0x14(r22)
    stw r7, 0xf8(r1)
    lwz r7, 0x18(r22)
    stw r7, 0xfc(r1)
    lwz r7, 0x1c(r22)
    stw r7, 0x100(r1)
    lwz r7, 0x20(r22)
    stw r7, 0x104(r1)
    lwz r8, 0x24(r22)
    lwz r7, 0x28(r22)
    stw r7, 0x10c(r1)
    stw r8, 0x108(r1)
    lwz r8, 0x2c(r22)
    lwz r7, 0x30(r22)
    stw r7, 0x114(r1)
    stw r8, 0x110(r1)
    lwz r7, 0x34(r22)
    stw r7, 0x118(r1)
    lwz r8, 0x38(r22)
    lwz r7, 0x3c(r22)
    stw r7, 0x120(r1)
    stw r8, 0x11c(r1)
    lhz r7, 0x40(r22)
    sth r7, 0x124(r1)
    lbz r7, 0x42(r22)
    stb r7, 0x126(r1)
    lbz r7, 0x43(r22)
    stb r7, 0x127(r1)
    lfs f0, 0x44(r22)
    stfs f0, 0x128(r1)
    lwz r7, 0x48(r22)
    stw r7, 0x12c(r1)
    lfs f0, 0x4c(r22)
    stfs f0, 0x130(r1)
    lfs f0, 0x50(r22)
    stfs f0, 0x134(r1)
    lfs f0, 0x54(r22)
    stfs f0, 0x138(r1)
    lwz r7, 0x58(r22)
    stw r7, 0x13c(r1)
    stw r0, 0x140(r1)
    lwz r0, 0x60(r22)
    stw r0, 0x144(r1)
    stfs f29, 0x110(r1)
    stfs f29, 0x114(r1)
    bl fn_807293C0
    lfs f1, 0x30(r1)
    addi r3, r1, 0xe4
    lfs f0, 0x28(r1)
    li r4, 0x0
    fsubs f27, f1, f0
    bl fn_80726B50
    fsubs f1, f25, f27
    lfs f0, 0x74(r1)
    fmuls f1, f1, f30
    fadds f0, f0, f1
    stfs f0, 0x2c(r22)
    b lbl_fn_80729AE0_00001A68
lbl_fn_80729AE0_00001900:
    cmplwi r3, 0x2
    bne lbl_fn_80729AE0_00001A40
    lwz r5, 0x70(r1)
    addi r3, r1, 0x80
    stw r5, 0x8(r1)
    addi r4, r1, 0x18
    subf r6, r23, r5
    addi r5, r1, 0x8
    stfs f29, 0x18(r1)
    subf r6, r6, r24
    stfs f29, 0x1c(r1)
    stfs f29, 0x20(r1)
    stfs f29, 0x24(r1)
    lwz r7, 0x0(r22)
    stw r7, 0x80(r1)
    lwz r7, 0x4(r22)
    stw r7, 0x84(r1)
    lwz r7, 0x8(r22)
    stw r7, 0x88(r1)
    lwz r7, 0xc(r22)
    stw r7, 0x8c(r1)
    lwz r7, 0x10(r22)
    stw r7, 0x90(r1)
    lwz r7, 0x14(r22)
    stw r7, 0x94(r1)
    lwz r7, 0x18(r22)
    stw r7, 0x98(r1)
    lwz r7, 0x1c(r22)
    stw r7, 0x9c(r1)
    lwz r7, 0x20(r22)
    stw r7, 0xa0(r1)
    lwz r8, 0x24(r22)
    lwz r7, 0x28(r22)
    stw r7, 0xa8(r1)
    stw r8, 0xa4(r1)
    lwz r8, 0x2c(r22)
    lwz r7, 0x30(r22)
    stw r7, 0xb0(r1)
    stw r8, 0xac(r1)
    lwz r7, 0x34(r22)
    stw r7, 0xb4(r1)
    lwz r8, 0x38(r22)
    lwz r7, 0x3c(r22)
    stw r7, 0xbc(r1)
    stw r8, 0xb8(r1)
    lhz r7, 0x40(r22)
    sth r7, 0xc0(r1)
    lbz r7, 0x42(r22)
    stb r7, 0xc2(r1)
    lbz r7, 0x43(r22)
    stb r7, 0xc3(r1)
    lfs f0, 0x44(r22)
    stfs f0, 0xc4(r1)
    lwz r7, 0x48(r22)
    stw r7, 0xc8(r1)
    lfs f0, 0x4c(r22)
    stfs f0, 0xcc(r1)
    lfs f0, 0x50(r22)
    stfs f0, 0xd0(r1)
    lfs f0, 0x54(r22)
    stfs f0, 0xd4(r1)
    lwz r7, 0x58(r22)
    stw r7, 0xd8(r1)
    stw r0, 0xdc(r1)
    lwz r0, 0x60(r22)
    stw r0, 0xe0(r1)
    stfs f29, 0xac(r1)
    stfs f29, 0xb0(r1)
    bl fn_807293C0
    lfs f1, 0x20(r1)
    addi r3, r1, 0x80
    lfs f0, 0x18(r1)
    li r4, 0x0
    fsubs f27, f1, f0
    bl fn_80726B50
    fsubs f1, f25, f27
    lfs f0, 0x74(r1)
    fadds f0, f0, f1
    stfs f0, 0x2c(r22)
    b lbl_fn_80729AE0_00001A68
lbl_fn_80729AE0_00001A40:
    lfs f1, 0x2c(r22)
    lfs f0, 0x74(r1)
    fsubs f1, f1, f0
    fcmpo cr0, f25, f1
    bge lbl_fn_80729AE0_00001A58
    b lbl_fn_80729AE0_00001A5C
lbl_fn_80729AE0_00001A58:
    fmr f1, f25
lbl_fn_80729AE0_00001A5C:
    lfs f0, 0x74(r1)
    fmr f25, f1
    stfs f0, 0x2c(r22)
lbl_fn_80729AE0_00001A68:
    cmpwi r30, 0x0
    beq lbl_fn_80729AE0_00001A74
    lwz r27, 0x48(r1)
lbl_fn_80729AE0_00001A74:
    li r29, 0x0
    b lbl_fn_80729AE0_00001AA4
lbl_fn_80729AE0_00001A7C:
    cmpwi r3, 0x1
    bne lbl_fn_80729AE0_00001A8C
    li r29, 0x0
    b lbl_fn_80729AE0_00001AA4
lbl_fn_80729AE0_00001A8C:
    cmpwi r3, 0x2
    bne lbl_fn_80729AE0_00001A9C
    li r29, 0x1
    b lbl_fn_80729AE0_00001AA4
lbl_fn_80729AE0_00001A9C:
    cmpwi r3, 0x4
    beq lbl_fn_80729AE0_00001BE8
lbl_fn_80729AE0_00001AA4:
    lwz r0, 0x70(r1)
    stw r0, 0x48(r1)
    b lbl_fn_80729AE0_00001BB8
lbl_fn_80729AE0_00001AB0:
    cmpwi r30, 0x0
    lfs f27, 0x30(r22)
    beq lbl_fn_80729AE0_00001B4C
    cmplw r28, r27
    beq lbl_fn_80729AE0_00001B4C
    cmpwi r29, 0x0
    lfs f24, 0x2c(r22)
    beq lbl_fn_80729AE0_00001AD8
    lfs f23, 0x50(r22)
    b lbl_fn_80729AE0_00001ADC
lbl_fn_80729AE0_00001AD8:
    lfs f23, lbl_8088937C
lbl_fn_80729AE0_00001ADC:
    lbz r0, 0x43(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80729AE0_00001AF0
    lfs f2, 0x44(r22)
    b lbl_fn_80729AE0_00001B24
lbl_fn_80729AE0_00001AF0:
    lwz r3, 0x48(r22)
    clrlwi r4, r26, 16
    lfs f22, 0x24(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r0, 0x1b4(r1)
    stw r21, 0x1b0(r1)
    lfd f0, 0x1b0(r1)
    fsubs f0, f0, f31
    fmuls f2, f0, f22
lbl_fn_80729AE0_00001B24:
    lfs f1, 0x14(r1)
    lfs f0, 0x4c(r22)
    fsubs f1, f24, f1
    fadds f1, f23, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80729AE0_00001B4C
    stw r28, 0x48(r1)
    li r26, 0xa
    b lbl_fn_80729AE0_00001BD8
lbl_fn_80729AE0_00001B4C:
    cmpwi r29, 0x0
    beq lbl_fn_80729AE0_00001B64
    lfs f1, 0x50(r22)
    lfs f0, 0x2c(r22)
    fadds f0, f0, f1
    stfs f0, 0x2c(r22)
lbl_fn_80729AE0_00001B64:
    lwz r3, 0x48(r22)
    li r29, 0x1
    lfs f22, 0x28(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    neg r0, r3
    stw r21, 0x1b0(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x30(r22)
    stw r0, 0x1b4(r1)
    mr r3, r22
    clrlwi r4, r26, 16
    lfd f1, 0x1b0(r1)
    fsubs f1, f1, f31
    fmuls f1, f1, f22
    fadds f0, f0, f1
    stfs f0, 0x30(r22)
    bl fn_80727660
    stfs f27, 0x30(r22)
lbl_fn_80729AE0_00001BB8:
    cmpwi r30, 0x0
    beq lbl_fn_80729AE0_00001BC4
    lwz r28, 0x48(r1)
lbl_fn_80729AE0_00001BC4:
    addi r3, r1, 0x48
    addi r12, r1, 0x4c
    bl fn_80695B00
    nop
    mr r26, r3
lbl_fn_80729AE0_00001BD8:
    lwz r9, 0x48(r1)
    subf r0, r23, r9
    cmpw r0, r24
    ble lbl_fn_80729AE0_000015E8
lbl_fn_80729AE0_00001BE8:
    lfs f1, 0x2c(r22)
    lfs f0, 0x74(r1)
    fsubs f23, f1, f0
    fcmpo cr0, f25, f23
    bge lbl_fn_80729AE0_00001C00
    b lbl_fn_80729AE0_00001C04
lbl_fn_80729AE0_00001C00:
    fmr f23, f25
lbl_fn_80729AE0_00001C04:
    lwz r0, 0x5c(r22)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    beq lbl_fn_80729AE0_00001C1C
    cmplwi r0, 0x200
    bne lbl_fn_80729AE0_00001C24
lbl_fn_80729AE0_00001C1C:
    stfs f28, 0x30(r22)
    b lbl_fn_80729AE0_00001C58
lbl_fn_80729AE0_00001C24:
    cmpwi r25, 0x0
    beq lbl_fn_80729AE0_00001C4C
    cmpwi r0, 0x0
    bne lbl_fn_80729AE0_00001C58
    lfs f22, 0x30(r22)
    mr r3, r22
    bl fn_80727600
    fsubs f0, f22, f1
    stfs f0, 0x30(r22)
    b lbl_fn_80729AE0_00001C58
lbl_fn_80729AE0_00001C4C:
    lfs f0, 0x30(r22)
    fadds f0, f0, f26
    stfs f0, 0x30(r22)
lbl_fn_80729AE0_00001C58:
    psq_l f31, 0x288(r1), 0, 0
    fmr f1, f23
    lfd f31, 0x280(r1)
    psq_l f30, 0x278(r1), 0, 0
    lfd f30, 0x270(r1)
    psq_l f29, 0x268(r1), 0, 0
    lfd f29, 0x260(r1)
    psq_l f28, 0x258(r1), 0, 0
    lfd f28, 0x250(r1)
    psq_l f27, 0x248(r1), 0, 0
    lfd f27, 0x240(r1)
    psq_l f26, 0x238(r1), 0, 0
    lfd f26, 0x230(r1)
    psq_l f25, 0x228(r1), 0, 0
    lfd f25, 0x220(r1)
    psq_l f24, 0x218(r1), 0, 0
    lfd f24, 0x210(r1)
    psq_l f23, 0x208(r1), 0, 0
    lfd f23, 0x200(r1)
    psq_l f22, 0x1f8(r1), 0, 0
    lfd f22, 0x1f0(r1)
    addi r11, r1, 0x1f0
    bl _restgpr_21
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_8072A2F0(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x5c(r3)
    mr r28, r4
    lfs f31, lbl_8088937C
    mr r27, r3
    andi. r4, r0, 0x333
    mr r29, r5
    fmr f2, f31
    mr r30, r6
    mr r31, r7
    cmplwi r4, 0x300
    beq lbl_fn_8072A2F0_00001E44
    cmpwi r4, 0x0
    beq lbl_fn_8072A2F0_00001E44
    stfs f31, 0x30(r1)
    mr r5, r30
    mr r6, r31
    addi r4, r1, 0x30
    stfs f31, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f31, 0x3c(r1)
    lwz r7, 0x0(r3)
    stw r7, 0x108(r1)
    lwz r7, 0x4(r3)
    stw r7, 0x10c(r1)
    lwz r7, 0x8(r3)
    stw r7, 0x110(r1)
    lwz r7, 0xc(r3)
    stw r7, 0x114(r1)
    lwz r7, 0x10(r3)
    stw r7, 0x118(r1)
    lwz r7, 0x14(r3)
    stw r7, 0x11c(r1)
    lwz r7, 0x18(r3)
    stw r7, 0x120(r1)
    lwz r7, 0x1c(r3)
    stw r7, 0x124(r1)
    lwz r7, 0x20(r3)
    stw r7, 0x128(r1)
    lwz r8, 0x24(r3)
    lwz r7, 0x28(r3)
    stw r7, 0x130(r1)
    stw r8, 0x12c(r1)
    lwz r8, 0x2c(r3)
    lwz r7, 0x30(r3)
    stw r7, 0x138(r1)
    stw r8, 0x134(r1)
    lwz r7, 0x34(r3)
    stw r7, 0x13c(r1)
    lwz r8, 0x38(r3)
    lwz r7, 0x3c(r3)
    stw r7, 0x144(r1)
    stw r8, 0x140(r1)
    lhz r7, 0x40(r3)
    sth r7, 0x148(r1)
    lbz r7, 0x42(r3)
    stb r7, 0x14a(r1)
    lbz r7, 0x43(r3)
    stb r7, 0x14b(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x14c(r1)
    lwz r7, 0x48(r3)
    stw r7, 0x150(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x154(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x158(r1)
    lfs f0, 0x54(r3)
    stfs f0, 0x15c(r1)
    lwz r7, 0x58(r3)
    stw r7, 0x160(r1)
    stw r0, 0x164(r1)
    lwz r0, 0x60(r3)
    addi r3, r1, 0x108
    stw r0, 0x168(r1)
    bl fn_807299D0
    addi r3, r1, 0x108
    li r4, 0x0
    bl fn_80726B50
    lfs f3, 0x30(r1)
    lfs f2, 0x38(r1)
    lfs f1, 0x34(r1)
    lfs f0, 0x3c(r1)
    fadds f31, f3, f2
    fadds f2, f1, f0
lbl_fn_8072A2F0_00001E44:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 26, 27
    cmplwi r0, 0x10
    bne lbl_fn_8072A2F0_00001E6C
    lfs f1, lbl_80889388
    lfs f0, 0x0(r28)
    fmuls f1, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r28)
    b lbl_fn_8072A2F0_00001E80
lbl_fn_8072A2F0_00001E6C:
    cmplwi r0, 0x20
    bne lbl_fn_8072A2F0_00001E80
    lfs f0, 0x0(r28)
    fsubs f0, f0, f31
    stfs f0, 0x0(r28)
lbl_fn_8072A2F0_00001E80:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    bne lbl_fn_8072A2F0_00001EA8
    lfs f1, lbl_80889388
    lfs f0, 0x0(r29)
    fmuls f1, f2, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r29)
    b lbl_fn_8072A2F0_00001EBC
lbl_fn_8072A2F0_00001EA8:
    cmplwi r0, 0x200
    bne lbl_fn_8072A2F0_00001EBC
    lfs f0, 0x0(r29)
    fsubs f0, f0, f2
    stfs f0, 0x0(r29)
lbl_fn_8072A2F0_00001EBC:
    lwz r0, 0x5c(r27)
    clrlwi r3, r0, 30
    cmplwi r3, 0x1
    bne lbl_fn_8072A2F0_00002008
    lfs f1, lbl_8088937C
    mr r6, r31
    stw r30, 0xc(r1)
    addi r3, r1, 0xa4
    addi r4, r1, 0x20
    addi r5, r1, 0xc
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    lwz r7, 0x0(r27)
    stw r7, 0xa4(r1)
    lwz r7, 0x4(r27)
    stw r7, 0xa8(r1)
    lwz r7, 0x8(r27)
    stw r7, 0xac(r1)
    lwz r7, 0xc(r27)
    stw r7, 0xb0(r1)
    lwz r7, 0x10(r27)
    stw r7, 0xb4(r1)
    lwz r7, 0x14(r27)
    stw r7, 0xb8(r1)
    lwz r7, 0x18(r27)
    stw r7, 0xbc(r1)
    lwz r7, 0x1c(r27)
    stw r7, 0xc0(r1)
    lwz r7, 0x20(r27)
    stw r7, 0xc4(r1)
    lwz r8, 0x24(r27)
    lwz r7, 0x28(r27)
    stw r7, 0xcc(r1)
    stw r8, 0xc8(r1)
    lwz r8, 0x2c(r27)
    lwz r7, 0x30(r27)
    stw r7, 0xd4(r1)
    stw r8, 0xd0(r1)
    lwz r7, 0x34(r27)
    stw r7, 0xd8(r1)
    lwz r8, 0x38(r27)
    lwz r7, 0x3c(r27)
    stw r7, 0xe0(r1)
    stw r8, 0xdc(r1)
    lhz r7, 0x40(r27)
    sth r7, 0xe4(r1)
    lbz r7, 0x42(r27)
    stb r7, 0xe6(r1)
    lbz r7, 0x43(r27)
    stb r7, 0xe7(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0xe8(r1)
    lwz r7, 0x48(r27)
    stw r7, 0xec(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0xf0(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0xf4(r1)
    lfs f0, 0x54(r27)
    stfs f0, 0xf8(r1)
    lwz r7, 0x58(r27)
    stw r7, 0xfc(r1)
    stw r0, 0x100(r1)
    lwz r0, 0x60(r27)
    stw r0, 0x104(r1)
    stfs f1, 0xd0(r1)
    stfs f1, 0xd4(r1)
    bl fn_807293C0
    lfs f1, 0x28(r1)
    addi r3, r1, 0xa4
    lfs f0, 0x20(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_80726B50
    fsubs f2, f31, f30
    lfs f1, lbl_80889388
    lfs f0, 0x0(r28)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x2c(r27)
    b lbl_fn_8072A2F0_0000214C
lbl_fn_8072A2F0_00002008:
    cmplwi r3, 0x2
    bne lbl_fn_8072A2F0_00002144
    lfs f1, lbl_8088937C
    mr r6, r31
    stw r30, 0x8(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    lwz r7, 0x0(r27)
    stw r7, 0x40(r1)
    lwz r7, 0x4(r27)
    stw r7, 0x44(r1)
    lwz r7, 0x8(r27)
    stw r7, 0x48(r1)
    lwz r7, 0xc(r27)
    stw r7, 0x4c(r1)
    lwz r7, 0x10(r27)
    stw r7, 0x50(r1)
    lwz r7, 0x14(r27)
    stw r7, 0x54(r1)
    lwz r7, 0x18(r27)
    stw r7, 0x58(r1)
    lwz r7, 0x1c(r27)
    stw r7, 0x5c(r1)
    lwz r7, 0x20(r27)
    stw r7, 0x60(r1)
    lwz r8, 0x24(r27)
    lwz r7, 0x28(r27)
    stw r7, 0x68(r1)
    stw r8, 0x64(r1)
    lwz r8, 0x2c(r27)
    lwz r7, 0x30(r27)
    stw r7, 0x70(r1)
    stw r8, 0x6c(r1)
    lwz r7, 0x34(r27)
    stw r7, 0x74(r1)
    lwz r8, 0x38(r27)
    lwz r7, 0x3c(r27)
    stw r7, 0x7c(r1)
    stw r8, 0x78(r1)
    lhz r7, 0x40(r27)
    sth r7, 0x80(r1)
    lbz r7, 0x42(r27)
    stb r7, 0x82(r1)
    lbz r7, 0x43(r27)
    stb r7, 0x83(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0x84(r1)
    lwz r7, 0x48(r27)
    stw r7, 0x88(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0x8c(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0x90(r1)
    lfs f0, 0x54(r27)
    stfs f0, 0x94(r1)
    lwz r7, 0x58(r27)
    stw r7, 0x98(r1)
    stw r0, 0x9c(r1)
    lwz r0, 0x60(r27)
    stw r0, 0xa0(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    bl fn_807293C0
    lfs f1, 0x18(r1)
    addi r3, r1, 0x40
    lfs f0, 0x10(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_80726B50
    fsubs f1, f31, f30
    lfs f0, 0x0(r28)
    fadds f0, f0, f1
    stfs f0, 0x2c(r27)
    b lbl_fn_8072A2F0_0000214C
lbl_fn_8072A2F0_00002144:
    lfs f0, 0x0(r28)
    stfs f0, 0x2c(r27)
lbl_fn_8072A2F0_0000214C:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x300
    bne lbl_fn_8072A2F0_00002168
    lfs f0, 0x0(r29)
    stfs f0, 0x30(r27)
    b lbl_fn_8072A2F0_0000217C
lbl_fn_8072A2F0_00002168:
    mr r3, r27
    bl fn_80727600
    lfs f0, 0x0(r29)
    fadds f0, f0, f1
    stfs f0, 0x30(r27)
lbl_fn_8072A2F0_0000217C:
    fmr f1, f31
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    addi r11, r1, 0x190
    bl _restgpr_27
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
