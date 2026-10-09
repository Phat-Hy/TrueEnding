#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_805D8130(void);
extern void fn_805D84C0(void);
extern void fn_805D8510(void);
extern void fn_805D9190(void);
extern void fn_805D91A0(void);
extern void fn_805D9360(void);
extern void fn_805D93D0(void);
extern void fn_805D93E0(void);
extern void fn_805D93F0(void);
extern void fn_805D9530(void);
extern void fn_805D9540(void);
extern void fn_805D9550(void);
extern void fn_805D9560(void);
extern void fn_805D9570(void);
extern void fn_805D9580(void);
extern void fn_805D9590(void);
extern void fn_80695B00(void);
extern u32 strlen(const char* str);
extern void vsnprintf(void);

/* External data declarations */
extern u8 lbl_80764630[];
extern u8 lbl_80764638[];
extern u8 lbl_80764640[];
extern u8 lbl_8079A730[];
extern u8 lbl_807CA250[];
extern u8 lbl_807CA25C[];

/* Small data declarations */

/* Function declarations */
void fn_805DC3B0(void);
void fn_805DC5E0(void);
void fn_805DC7B0(void);
void fn_805DC910(void);
void fn_805DCA80(void);
void fn_805DCAA0(void);
void fn_805DCAC0(void);
void fn_805DCAD0(void);
void fn_805DCAE0(void);
void fn_805DCAF0(void);
void fn_805DCB00(void);
void fn_805DCC70(void);
void fn_805DD050(void);
void fn_805DD170(void);
void fn_805DD720(void);
void fn_805DDC10(void);
void fn_805DDC30(void);
void fn_805DDC90(void);
void fn_805DDCF0(void);
void fn_805DDD90(void);

asm void fn_805DC3B0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r1
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r29, 0xe4(r1)
    stw r28, 0xe0(r1)
    mr r28, r4
    bne cr1, lbl_fn_805DC3B0_0000005C
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_805DC3B0_0000005C:
    lis r11, lbl_807CA250@ha
    addi r12, r31, 0x118
    lwz r29, lbl_807CA250@l(r11)
    addi r0, r31, 0x8
    lis r11, 0x200
    stw r3, 0x8(r31)
    cmpwi r29, 0x0
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stw r11, 0x68(r31)
    stw r12, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_805DC3B0_000000A8
    b lbl_fn_805DC3B0_000000C4
lbl_fn_805DC3B0_000000A8:
    lis r3, lbl_8079A730@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A730@l(r3)
    neg r29, r3
    clrrwi r29, r29, 3
    stwux r0, r1, r29
    addi r29, r1, 0x8
lbl_fn_805DC3B0_000000C4:
    lis r4, lbl_8079A730@ha
    mr r3, r29
    lwz r4, lbl_8079A730@l(r4)
    mr r5, r28
    addi r6, r31, 0x68
    bl vsnprintf
    lwz r0, 0x0(r30)
    mr r5, r3
    stw r0, 0x78(r31)
    mr r4, r29
    addi r3, r31, 0x78
    lwz r0, 0x4(r30)
    stw r0, 0x7c(r31)
    lwz r0, 0x8(r30)
    stw r0, 0x80(r31)
    lwz r0, 0xc(r30)
    stw r0, 0x84(r31)
    lwz r0, 0x10(r30)
    stw r0, 0x88(r31)
    lwz r0, 0x14(r30)
    stw r0, 0x8c(r31)
    lwz r0, 0x18(r30)
    stw r0, 0x90(r31)
    lwz r0, 0x1c(r30)
    stw r0, 0x94(r31)
    lwz r0, 0x20(r30)
    stw r0, 0x98(r31)
    lwz r6, 0x24(r30)
    lwz r0, 0x28(r30)
    stw r0, 0xa0(r31)
    stw r6, 0x9c(r31)
    lwz r6, 0x2c(r30)
    lwz r0, 0x30(r30)
    stw r0, 0xa8(r31)
    stw r6, 0xa4(r31)
    lwz r0, 0x34(r30)
    stw r0, 0xac(r31)
    lwz r6, 0x38(r30)
    lwz r0, 0x3c(r30)
    stw r0, 0xb4(r31)
    stw r6, 0xb0(r31)
    lhz r0, 0x40(r30)
    sth r0, 0xb8(r31)
    lbz r0, 0x42(r30)
    stb r0, 0xba(r31)
    lbz r0, 0x43(r30)
    stb r0, 0xbb(r31)
    lfs f0, 0x44(r30)
    stfs f0, 0xbc(r31)
    lwz r0, 0x48(r30)
    stw r0, 0xc0(r31)
    lfs f0, 0x4c(r30)
    stfs f0, 0xc4(r31)
    lfs f0, 0x50(r30)
    stfs f0, 0xc8(r31)
    lwz r0, 0x54(r30)
    stw r0, 0xcc(r31)
    lwz r0, 0x58(r30)
    stw r0, 0xd0(r31)
    lwz r0, 0x5c(r30)
    stw r0, 0xd4(r31)
    bl fn_805DD170
    fmr f30, f1
    addi r3, r31, 0x78
    bl fn_805D9590
    fmr f31, f1
    addi r3, r31, 0x78
    bl fn_805D9580
    fmr f2, f31
    mr r3, r30
    bl fn_805D9530
    addi r3, r31, 0x78
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    fmr f1, f30
    psq_l f31, 0x108(r10), 0, 0
    lfd f31, 0x100(r31)
    psq_l f30, 0xf8(r10), 0, 0
    lfd f30, 0xf0(r31)
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

asm void fn_805DC5E0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r6, lbl_807CA250@ha
    mr r7, r4
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r1
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    lwz r29, lbl_807CA250@l(r6)
    mr r6, r5
    cmpwi r29, 0x0
    beq lbl_fn_805DC5E0_0000027C
    b lbl_fn_805DC5E0_00000298
lbl_fn_805DC5E0_0000027C:
    lis r3, lbl_8079A730@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A730@l(r3)
    neg r29, r3
    clrrwi r29, r29, 3
    stwux r0, r1, r29
    addi r29, r1, 0x8
lbl_fn_805DC5E0_00000298:
    lis r4, lbl_8079A730@ha
    mr r3, r29
    lwz r4, lbl_8079A730@l(r4)
    mr r5, r7
    bl vsnprintf
    lwz r0, 0x0(r30)
    mr r5, r3
    stw r0, 0x8(r31)
    mr r4, r29
    addi r3, r31, 0x8
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
    lwz r6, 0x24(r30)
    lwz r0, 0x28(r30)
    stw r0, 0x30(r31)
    stw r6, 0x2c(r31)
    lwz r6, 0x2c(r30)
    lwz r0, 0x30(r30)
    stw r0, 0x38(r31)
    stw r6, 0x34(r31)
    lwz r0, 0x34(r30)
    stw r0, 0x3c(r31)
    lwz r6, 0x38(r30)
    lwz r0, 0x3c(r30)
    stw r0, 0x44(r31)
    stw r6, 0x40(r31)
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
    lwz r0, 0x54(r30)
    stw r0, 0x5c(r31)
    lwz r0, 0x58(r30)
    stw r0, 0x60(r31)
    lwz r0, 0x5c(r30)
    stw r0, 0x64(r31)
    bl fn_805DD170
    fmr f30, f1
    addi r3, r31, 0x8
    bl fn_805D9590
    fmr f31, f1
    addi r3, r31, 0x8
    bl fn_805D9580
    fmr f2, f31
    mr r3, r30
    bl fn_805D9530
    addi r3, r31, 0x8
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    fmr f1, f30
    psq_l f31, 0x98(r10), 0, 0
    lfd f31, 0x90(r31)
    psq_l f30, 0x88(r10), 0, 0
    lfd f30, 0x80(r31)
    lwz r31, 0x7c(r31)
    lwz r30, 0x78(r10)
    lwz r29, 0x74(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DC7B0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
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
    lwz r6, 0x24(r3)
    lwz r0, 0x28(r3)
    stw r0, 0x30(r1)
    stw r6, 0x2c(r1)
    lwz r6, 0x2c(r3)
    lwz r0, 0x30(r3)
    stw r0, 0x38(r1)
    stw r6, 0x34(r1)
    lwz r0, 0x34(r3)
    stw r0, 0x3c(r1)
    lwz r6, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x44(r1)
    stw r6, 0x40(r1)
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
    lwz r0, 0x54(r3)
    stw r0, 0x5c(r1)
    lwz r0, 0x58(r3)
    stw r0, 0x60(r1)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0x8
    stw r0, 0x64(r1)
    bl fn_805DD170
    fmr f30, f1
    addi r3, r1, 0x8
    bl fn_805D9590
    fmr f31, f1
    addi r3, r1, 0x8
    bl fn_805D9580
    fmr f2, f31
    mr r3, r31
    bl fn_805D9530
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_805D84C0
    psq_l f31, 0x88(r1), 0, 0
    fmr f1, f30
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_805DC910(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r4
    mr r3, r30
    bl strlen
    lwz r0, 0x0(r31)
    mr r5, r3
    stw r0, 0x8(r1)
    mr r4, r30
    addi r3, r1, 0x8
    lwz r0, 0x4(r31)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r31)
    stw r0, 0x10(r1)
    lwz r0, 0xc(r31)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r31)
    stw r0, 0x18(r1)
    lwz r0, 0x14(r31)
    stw r0, 0x1c(r1)
    lwz r0, 0x18(r31)
    stw r0, 0x20(r1)
    lwz r0, 0x1c(r31)
    stw r0, 0x24(r1)
    lwz r0, 0x20(r31)
    stw r0, 0x28(r1)
    lwz r6, 0x24(r31)
    lwz r0, 0x28(r31)
    stw r0, 0x30(r1)
    stw r6, 0x2c(r1)
    lwz r6, 0x2c(r31)
    lwz r0, 0x30(r31)
    stw r0, 0x38(r1)
    stw r6, 0x34(r1)
    lwz r0, 0x34(r31)
    stw r0, 0x3c(r1)
    lwz r6, 0x38(r31)
    lwz r0, 0x3c(r31)
    stw r0, 0x44(r1)
    stw r6, 0x40(r1)
    lhz r0, 0x40(r31)
    sth r0, 0x48(r1)
    lbz r0, 0x42(r31)
    stb r0, 0x4a(r1)
    lbz r0, 0x43(r31)
    stb r0, 0x4b(r1)
    lfs f0, 0x44(r31)
    stfs f0, 0x4c(r1)
    lwz r0, 0x48(r31)
    stw r0, 0x50(r1)
    lfs f0, 0x4c(r31)
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r31)
    stfs f0, 0x58(r1)
    lwz r0, 0x54(r31)
    stw r0, 0x5c(r1)
    lwz r0, 0x58(r31)
    stw r0, 0x60(r1)
    lwz r0, 0x5c(r31)
    stw r0, 0x64(r1)
    bl fn_805DD170
    fmr f30, f1
    addi r3, r1, 0x8
    bl fn_805D9590
    fmr f31, f1
    addi r3, r1, 0x8
    bl fn_805D9580
    fmr f2, f31
    mr r3, r31
    bl fn_805D9530
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_805D84C0
    psq_l f31, 0x88(r1), 0, 0
    fmr f1, f30
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_805DCA80(void)
{
    nofralloc
    lis r6, lbl_807CA250@ha
    mr r0, r3
    lwz r3, lbl_807CA250@l(r6)
    lis r5, lbl_8079A730@ha
    stw r4, lbl_8079A730@l(r5)
    stw r0, lbl_807CA250@l(r6)
    blr
}

asm void fn_805DCAA0(void)
{
    nofralloc
    lis r5, lbl_807CA250@ha
    mr r6, r3
    lwz r3, lbl_807CA250@l(r5)
    lis r4, lbl_8079A730@ha
    li r0, 0x0
    stw r6, lbl_8079A730@l(r4)
    stw r0, lbl_807CA250@l(r5)
    blr
}

asm void fn_805DCAC0(void)
{
    nofralloc
    lis r3, lbl_8079A730@ha
    lwz r3, lbl_8079A730@l(r3)
    blr
}

asm void fn_805DCAD0(void)
{
    nofralloc
    lis r3, lbl_807CA250@ha
    lwz r3, lbl_807CA250@l(r3)
    blr
}

asm void fn_805DCAE0(void)
{
    nofralloc
    b vsnprintf
}

asm void fn_805DCAF0(void)
{
    nofralloc
    b strlen
}

asm void fn_805DCB00(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r6, lbl_80764630@ha
    stw r0, 0x94(r1)
    lfs f1, lbl_80764630@l(r6)
    stfd f31, 0x80(r1)
    fmr f2, f1
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r5
    stw r30, 0x78(r1)
    mr r30, r4
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x18(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x1c(r1)
    lwz r0, 0x8(r3)
    stw r0, 0x20(r1)
    lwz r0, 0xc(r3)
    stw r0, 0x24(r1)
    lwz r0, 0x10(r3)
    stw r0, 0x28(r1)
    lwz r0, 0x14(r3)
    stw r0, 0x2c(r1)
    lwz r0, 0x18(r3)
    stw r0, 0x30(r1)
    lwz r0, 0x1c(r3)
    stw r0, 0x34(r1)
    lwz r0, 0x20(r3)
    stw r0, 0x38(r1)
    lwz r4, 0x24(r3)
    lwz r0, 0x28(r3)
    stw r0, 0x40(r1)
    stw r4, 0x3c(r1)
    lwz r4, 0x2c(r3)
    lwz r0, 0x30(r3)
    stw r0, 0x48(r1)
    stw r4, 0x44(r1)
    lwz r0, 0x34(r3)
    stw r0, 0x4c(r1)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x54(r1)
    stw r4, 0x50(r1)
    lhz r0, 0x40(r3)
    sth r0, 0x58(r1)
    lbz r0, 0x42(r3)
    stb r0, 0x5a(r1)
    lbz r0, 0x43(r3)
    stb r0, 0x5b(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x5c(r1)
    lwz r0, 0x48(r3)
    stw r0, 0x60(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x64(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x68(r1)
    lwz r0, 0x54(r3)
    stw r0, 0x6c(r1)
    lwz r0, 0x58(r3)
    stw r0, 0x70(r1)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0x18
    stw r0, 0x74(r1)
    bl fn_805D9530
    mr r5, r30
    mr r6, r31
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    bl fn_805DCC70
    lfs f1, 0x10(r1)
    addi r3, r1, 0x18
    lfs f0, 0x8(r1)
    li r4, 0x0
    fsubs f31, f1, f0
    bl fn_805D84C0
    fmr f1, f31
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_805DCC70(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    bl _savegpr_25
    li r25, 0x0
    stw r25, 0x40(r1)
    mr r27, r3
    mr r28, r4
    stw r25, 0x44(r1)
    mr r29, r5
    mr r30, r6
    stw r25, 0x48(r1)
    stw r3, 0x38(r1)
    stw r5, 0x3c(r1)
    bl fn_805D8510
    lwz r5, 0x4(r3)
    lis r6, lbl_80764630@ha
    lwz r4, 0x8(r3)
    li r31, 0x0
    lwz r0, 0xc(r3)
    mr r3, r27
    stw r0, 0x34(r1)
    lfs f31, lbl_80764630@l(r6)
    stw r31, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    stfs f31, 0x0(r28)
    stfs f31, 0x8(r28)
    bl fn_805D8510
    cmpwi r3, 0x0
    beq lbl_fn_805DCC70_00000980
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r25, r3
lbl_fn_805DCC70_00000980:
    mr r3, r27
    bl fn_805D91A0
    xoris r3, r25, 0x8000
    lis r0, 0x4330
    stw r3, 0x54(r1)
    lis r4, lbl_80764638@ha
    lfd f4, lbl_80764638@l(r4)
    lis r3, lbl_80764630@ha
    stw r0, 0x50(r1)
    lfs f2, 0x50(r27)
    lfd f3, 0x50(r1)
    lfs f0, lbl_80764630@l(r3)
    fsubs f3, f3, f4
    fmuls f1, f3, f1
    fadds f1, f2, f1
    fcmpo cr0, f0, f1
    ble lbl_fn_805DCC70_000009C8
    b lbl_fn_805DCC70_000009CC
lbl_fn_805DCC70_000009C8:
    fmr f1, f0
lbl_fn_805DCC70_000009CC:
    stfs f1, 0x4(r28)
    mr r3, r27
    bl fn_805D8510
    cmpwi r3, 0x0
    beq lbl_fn_805DCC70_000009F8
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r25, r3
    b lbl_fn_805DCC70_000009FC
lbl_fn_805DCC70_000009F8:
    li r25, 0x0
lbl_fn_805DCC70_000009FC:
    mr r3, r27
    bl fn_805D91A0
    xoris r3, r25, 0x8000
    lis r0, 0x4330
    stw r3, 0x5c(r1)
    lis r4, lbl_80764638@ha
    lfd f4, lbl_80764638@l(r4)
    lis r3, lbl_80764630@ha
    stw r0, 0x58(r1)
    lfs f2, 0x50(r27)
    lfd f3, 0x58(r1)
    lfs f0, lbl_80764630@l(r3)
    fsubs f3, f3, f4
    fmuls f1, f3, f1
    fadds f1, f2, f1
    fcmpo cr0, f0, f1
    bge lbl_fn_805DCC70_00000A44
    b lbl_fn_805DCC70_00000A48
lbl_fn_805DCC70_00000A44:
    fmr f1, f0
lbl_fn_805DCC70_00000A48:
    stfs f1, 0xc(r28)
    addi r3, r1, 0x28
    addi r12, r1, 0x2c
    stw r29, 0x28(r1)
    bl fn_80695B00
    nop
    lis r5, lbl_80764630@ha
    lis r4, lbl_80764638@ha
    lfs f28, lbl_80764630@l(r5)
    mr r25, r3
    lfd f30, lbl_80764638@l(r4)
    lis r26, 0x4330
    b lbl_fn_805DCC70_00000C4C
lbl_fn_805DCC70_00000A7C:
    clrlwi r0, r25, 16
    cmpwi r0, 0x20
    bge lbl_fn_805DCC70_00000B98
    cntlzw r0, r31
    fmr f1, f31
    srwi r0, r0, 5
    stfs f31, 0x18(r1)
    mr r3, r27
    stfs f28, 0x1c(r1)
    stfs f28, 0x20(r1)
    stfs f28, 0x24(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x48(r1)
    bl fn_805D9540
    lwz r3, 0x5c(r27)
    addi r4, r1, 0x18
    clrlwi r5, r25, 16
    addi r6, r1, 0x38
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x3c(r1)
    mr r25, r3
    stw r0, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x0(r28)
    fcmpo cr0, f0, f1
    ble lbl_fn_805DCC70_00000AF4
    b lbl_fn_805DCC70_00000AF8
lbl_fn_805DCC70_00000AF4:
    fmr f1, f0
lbl_fn_805DCC70_00000AF8:
    stfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_805DCC70_00000B10
    b lbl_fn_805DCC70_00000B14
lbl_fn_805DCC70_00000B10:
    fmr f1, f0
lbl_fn_805DCC70_00000B14:
    stfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    lfs f1, 0x20(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805DCC70_00000B2C
    b lbl_fn_805DCC70_00000B30
lbl_fn_805DCC70_00000B2C:
    fmr f1, f0
lbl_fn_805DCC70_00000B30:
    stfs f1, 0x8(r28)
    lfs f0, 0xc(r28)
    lfs f1, 0x24(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805DCC70_00000B48
    b lbl_fn_805DCC70_00000B4C
lbl_fn_805DCC70_00000B48:
    fmr f1, f0
lbl_fn_805DCC70_00000B4C:
    stfs f1, 0xc(r28)
    mr r3, r27
    bl fn_805D9580
    cmpwi r25, 0x4
    fmr f31, f1
    bne lbl_fn_805DCC70_00000B6C
    mr r3, r30
    b lbl_fn_805DCC70_00000C64
lbl_fn_805DCC70_00000B6C:
    cmpwi r25, 0x1
    bne lbl_fn_805DCC70_00000B7C
    li r31, 0x0
    b lbl_fn_805DCC70_00000C38
lbl_fn_805DCC70_00000B7C:
    cmpwi r25, 0x2
    bne lbl_fn_805DCC70_00000B8C
    li r31, 0x1
    b lbl_fn_805DCC70_00000C38
lbl_fn_805DCC70_00000B8C:
    cmpwi r25, 0x3
    beq lbl_fn_805DCC70_00000C5C
    b lbl_fn_805DCC70_00000C38
lbl_fn_805DCC70_00000B98:
    cmpwi r31, 0x0
    beq lbl_fn_805DCC70_00000BA8
    lfs f0, 0x4c(r27)
    fadds f31, f31, f0
lbl_fn_805DCC70_00000BA8:
    mr r3, r27
    li r31, 0x1
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805DCC70_00000BCC
    mr r3, r27
    bl fn_805D93E0
    fadds f31, f31, f1
    b lbl_fn_805DCC70_00000C10
lbl_fn_805DCC70_00000BCC:
    mr r3, r27
    bl fn_805D9190
    fmr f29, f1
    mr r3, r27
    bl fn_805D8510
    lwz r12, 0x0(r3)
    clrlwi r4, r25, 16
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r0, 0x5c(r1)
    stw r26, 0x58(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f29
    fadds f31, f31, f0
lbl_fn_805DCC70_00000C10:
    lfs f0, 0x0(r28)
    fcmpo cr0, f0, f31
    ble lbl_fn_805DCC70_00000C20
    fmr f0, f31
lbl_fn_805DCC70_00000C20:
    lfs f1, 0x8(r28)
    stfs f0, 0x0(r28)
    fcmpo cr0, f1, f31
    bge lbl_fn_805DCC70_00000C34
    fmr f1, f31
lbl_fn_805DCC70_00000C34:
    stfs f1, 0x8(r28)
lbl_fn_805DCC70_00000C38:
    addi r3, r1, 0x28
    addi r12, r1, 0x2c
    bl fn_80695B00
    nop
    mr r25, r3
lbl_fn_805DCC70_00000C4C:
    lwz r4, 0x28(r1)
    subf r0, r29, r4
    cmpw r0, r30
    ble lbl_fn_805DCC70_00000A7C
lbl_fn_805DCC70_00000C5C:
    lwz r0, 0x28(r1)
    subf r3, r29, r0
lbl_fn_805DCC70_00000C64:
    addi r11, r1, 0x80
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805DD050(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    lis r31, lbl_80764630@ha
    mr r27, r3
    lfs f1, lbl_80764630@l(r31)
    mr r28, r4
    stfs f1, 0x0(r4)
    mr r29, r5
    fmr f2, f1
    mr r30, r6
    stfs f1, 0x8(r4)
    stfs f1, 0x4(r4)
    stfs f1, 0xc(r4)
    bl fn_805D9530
    lfs f31, lbl_80764630@l(r31)
lbl_fn_805DD050_00000CF0:
    stfs f31, 0x8(r1)
    mr r3, r27
    mr r5, r29
    mr r6, r30
    stfs f31, 0xc(r1)
    addi r4, r1, 0x8
    stfs f31, 0x10(r1)
    stfs f31, 0x14(r1)
    bl fn_805DCC70
    lfs f1, 0x8(r1)
    add r29, r29, r3
    lfs f0, 0x0(r28)
    subf r30, r3, r30
    fcmpo cr0, f0, f1
    ble lbl_fn_805DD050_00000D30
    b lbl_fn_805DD050_00000D34
lbl_fn_805DD050_00000D30:
    fmr f1, f0
lbl_fn_805DD050_00000D34:
    stfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    lfs f1, 0xc(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_805DD050_00000D4C
    b lbl_fn_805DD050_00000D50
lbl_fn_805DD050_00000D4C:
    fmr f1, f0
lbl_fn_805DD050_00000D50:
    stfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805DD050_00000D68
    b lbl_fn_805DD050_00000D6C
lbl_fn_805DD050_00000D68:
    fmr f1, f0
lbl_fn_805DD050_00000D6C:
    stfs f1, 0x8(r28)
    lfs f0, 0xc(r28)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805DD050_00000D84
    b lbl_fn_805DD050_00000D88
lbl_fn_805DD050_00000D84:
    fmr f1, f0
lbl_fn_805DD050_00000D88:
    cmpwi r30, 0x0
    stfs f1, 0xc(r28)
    bgt lbl_fn_805DD050_00000CF0
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805DD170(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x150
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stfd f28, 0x190(r1)
    psq_st f28, 0x198(r1), 0, 0
    stfd f27, 0x180(r1)
    psq_st f27, 0x188(r1), 0, 0
    stfd f26, 0x170(r1)
    psq_st f26, 0x178(r1), 0, 0
    stfd f25, 0x160(r1)
    psq_st f25, 0x168(r1), 0, 0
    stfd f24, 0x150(r1)
    psq_st f24, 0x158(r1), 0, 0
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl fn_805D9580
    stfs f1, 0xc(r1)
    mr r3, r28
    bl fn_805D9590
    frsp f28, f1
    stfs f1, 0x8(r1)
    mr r3, r28
    mr r6, r29
    mr r7, r30
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    li r31, 0x0
    bl fn_805DD720
    fmr f29, f1
    mr r3, r28
    bl fn_805D9580
    mr r3, r28
    bl fn_805D9590
    li r0, 0x0
    stw r0, 0x58(r1)
    lfs f2, 0xc(r1)
    fsubs f30, f28, f1
    stw r0, 0x5c(r1)
    mr r3, r28
    lfs f0, 0x8(r1)
    stw r0, 0x60(r1)
    stw r28, 0x50(r1)
    stw r29, 0x54(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x5c(r1)
    bl fn_805D8510
    lwz r5, 0x4(r3)
    addi r12, r1, 0x44
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    addi r3, r1, 0x40
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r29, 0x40(r1)
    bl fn_80695B00
    nop
    lis r4, lbl_80764630@ha
    lis r5, lbl_80764640@ha
    lfs f31, lbl_80764630@l(r4)
    lis r4, lbl_80764638@ha
    lfs f25, lbl_80764640@l(r5)
    mr r26, r3
    lfd f27, lbl_80764638@l(r4)
    lis r27, 0x4330
    b lbl_fn_805DD170_000012CC
lbl_fn_805DD170_00000EF8:
    clrlwi r4, r26, 16
    cmpwi r4, 0x20
    bge lbl_fn_805DD170_0000122C
    cntlzw r0, r31
    stw r3, 0x54(r1)
    srwi r0, r0, 5
    addi r5, r1, 0x50
    stw r0, 0x60(r1)
    lwz r3, 0x5c(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_fn_805DD170_000011F8
    lwz r0, 0x58(r28)
    clrlwi r3, r0, 30
    cmplwi r3, 0x1
    bne lbl_fn_805DD170_00001080
    stfs f31, 0x20(r1)
    fmr f1, f31
    fmr f2, f31
    lwz r31, 0x54(r1)
    stfs f31, 0x24(r1)
    addi r3, r1, 0xc8
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    lwz r4, 0x0(r28)
    stw r4, 0xc8(r1)
    lwz r4, 0x4(r28)
    stw r4, 0xcc(r1)
    lwz r4, 0x8(r28)
    stw r4, 0xd0(r1)
    lwz r4, 0xc(r28)
    stw r4, 0xd4(r1)
    lwz r4, 0x10(r28)
    stw r4, 0xd8(r1)
    lwz r4, 0x14(r28)
    stw r4, 0xdc(r1)
    lwz r4, 0x18(r28)
    stw r4, 0xe0(r1)
    lwz r4, 0x1c(r28)
    stw r4, 0xe4(r1)
    lwz r4, 0x20(r28)
    stw r4, 0xe8(r1)
    lwz r5, 0x24(r28)
    lwz r4, 0x28(r28)
    stw r4, 0xf0(r1)
    stw r5, 0xec(r1)
    lwz r5, 0x2c(r28)
    lwz r4, 0x30(r28)
    stw r4, 0xf8(r1)
    stw r5, 0xf4(r1)
    lwz r4, 0x34(r28)
    stw r4, 0xfc(r1)
    lwz r5, 0x38(r28)
    lwz r4, 0x3c(r28)
    stw r4, 0x104(r1)
    stw r5, 0x100(r1)
    lhz r4, 0x40(r28)
    sth r4, 0x108(r1)
    lbz r4, 0x42(r28)
    stb r4, 0x10a(r1)
    lbz r4, 0x43(r28)
    stb r4, 0x10b(r1)
    lfs f0, 0x44(r28)
    stfs f0, 0x10c(r1)
    lwz r4, 0x48(r28)
    stw r4, 0x110(r1)
    lfs f0, 0x4c(r28)
    stfs f0, 0x114(r1)
    lfs f0, 0x50(r28)
    stfs f0, 0x118(r1)
    lwz r4, 0x54(r28)
    stw r4, 0x11c(r1)
    stw r0, 0x120(r1)
    lwz r0, 0x5c(r28)
    stw r0, 0x124(r1)
    bl fn_805D9530
    subf r0, r29, r31
    mr r5, r31
    addi r3, r1, 0xc8
    addi r4, r1, 0x20
    subf r6, r0, r30
    bl fn_805DCC70
    lfs f1, 0x28(r1)
    addi r3, r1, 0xc8
    lfs f0, 0x20(r1)
    li r4, 0x0
    fsubs f26, f1, f0
    bl fn_805D84C0
    fsubs f1, f29, f26
    lfs f0, 0x58(r1)
    mr r3, r28
    fmuls f1, f1, f25
    fadds f1, f0, f1
    bl fn_805D9540
    b lbl_fn_805DD170_000011F0
lbl_fn_805DD170_00001080:
    cmplwi r3, 0x2
    bne lbl_fn_805DD170_000011C0
    stfs f31, 0x10(r1)
    fmr f1, f31
    fmr f2, f31
    lwz r31, 0x54(r1)
    stfs f31, 0x14(r1)
    addi r3, r1, 0x68
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    lwz r4, 0x0(r28)
    stw r4, 0x68(r1)
    lwz r4, 0x4(r28)
    stw r4, 0x6c(r1)
    lwz r4, 0x8(r28)
    stw r4, 0x70(r1)
    lwz r4, 0xc(r28)
    stw r4, 0x74(r1)
    lwz r4, 0x10(r28)
    stw r4, 0x78(r1)
    lwz r4, 0x14(r28)
    stw r4, 0x7c(r1)
    lwz r4, 0x18(r28)
    stw r4, 0x80(r1)
    lwz r4, 0x1c(r28)
    stw r4, 0x84(r1)
    lwz r4, 0x20(r28)
    stw r4, 0x88(r1)
    lwz r5, 0x24(r28)
    lwz r4, 0x28(r28)
    stw r4, 0x90(r1)
    stw r5, 0x8c(r1)
    lwz r5, 0x2c(r28)
    lwz r4, 0x30(r28)
    stw r4, 0x98(r1)
    stw r5, 0x94(r1)
    lwz r4, 0x34(r28)
    stw r4, 0x9c(r1)
    lwz r5, 0x38(r28)
    lwz r4, 0x3c(r28)
    stw r4, 0xa4(r1)
    stw r5, 0xa0(r1)
    lhz r4, 0x40(r28)
    sth r4, 0xa8(r1)
    lbz r4, 0x42(r28)
    stb r4, 0xaa(r1)
    lbz r4, 0x43(r28)
    stb r4, 0xab(r1)
    lfs f0, 0x44(r28)
    stfs f0, 0xac(r1)
    lwz r4, 0x48(r28)
    stw r4, 0xb0(r1)
    lfs f0, 0x4c(r28)
    stfs f0, 0xb4(r1)
    lfs f0, 0x50(r28)
    stfs f0, 0xb8(r1)
    lwz r4, 0x54(r28)
    stw r4, 0xbc(r1)
    stw r0, 0xc0(r1)
    lwz r0, 0x5c(r28)
    stw r0, 0xc4(r1)
    bl fn_805D9530
    subf r0, r29, r31
    mr r5, r31
    addi r3, r1, 0x68
    addi r4, r1, 0x10
    subf r6, r0, r30
    bl fn_805DCC70
    lfs f1, 0x18(r1)
    addi r3, r1, 0x68
    lfs f0, 0x10(r1)
    li r4, 0x0
    fsubs f26, f1, f0
    bl fn_805D84C0
    fsubs f1, f29, f26
    lfs f0, 0x58(r1)
    mr r3, r28
    fadds f1, f0, f1
    bl fn_805D9540
    b lbl_fn_805DD170_000011F0
lbl_fn_805DD170_000011C0:
    mr r3, r28
    bl fn_805D9580
    lfs f0, 0x58(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    bge lbl_fn_805DD170_000011DC
    b lbl_fn_805DD170_000011E0
lbl_fn_805DD170_000011DC:
    fmr f0, f29
lbl_fn_805DD170_000011E0:
    fmr f29, f0
    lfs f1, 0x58(r1)
    mr r3, r28
    bl fn_805D9540
lbl_fn_805DD170_000011F0:
    li r31, 0x0
    b lbl_fn_805DD170_00001220
lbl_fn_805DD170_000011F8:
    cmpwi r3, 0x1
    bne lbl_fn_805DD170_00001208
    li r31, 0x0
    b lbl_fn_805DD170_00001220
lbl_fn_805DD170_00001208:
    cmpwi r3, 0x2
    bne lbl_fn_805DD170_00001218
    li r31, 0x1
    b lbl_fn_805DD170_00001220
lbl_fn_805DD170_00001218:
    cmpwi r3, 0x4
    beq lbl_fn_805DD170_000012DC
lbl_fn_805DD170_00001220:
    lwz r0, 0x54(r1)
    stw r0, 0x40(r1)
    b lbl_fn_805DD170_000012B8
lbl_fn_805DD170_0000122C:
    mr r3, r28
    bl fn_805D9590
    cmpwi r31, 0x0
    fmr f24, f1
    beq lbl_fn_805DD170_0000124C
    lfs f1, 0x4c(r28)
    mr r3, r28
    bl fn_805D9560
lbl_fn_805DD170_0000124C:
    mr r3, r28
    li r31, 0x1
    bl fn_805D8510
    mr r25, r3
    mr r3, r28
    bl fn_805D91A0
    lwz r12, 0x0(r25)
    fmr f26, f1
    mr r3, r25
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    neg r0, r3
    stw r27, 0x128(r1)
    xoris r0, r0, 0x8000
    mr r3, r28
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f27
    fmuls f1, f0, f26
    bl fn_805D9570
    mr r3, r28
    clrlwi r4, r26, 16
    bl fn_805D93F0
    fmr f1, f24
    mr r3, r28
    bl fn_805D9550
lbl_fn_805DD170_000012B8:
    addi r3, r1, 0x40
    addi r12, r1, 0x44
    bl fn_80695B00
    nop
    mr r26, r3
lbl_fn_805DD170_000012CC:
    lwz r3, 0x40(r1)
    subf r0, r29, r3
    cmpw r0, r30
    ble lbl_fn_805DD170_00000EF8
lbl_fn_805DD170_000012DC:
    lwz r0, 0x58(r28)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    beq lbl_fn_805DD170_000012F4
    cmplwi r0, 0x200
    bne lbl_fn_805DD170_00001304
lbl_fn_805DD170_000012F4:
    fmr f1, f28
    mr r3, r28
    bl fn_805D9550
    b lbl_fn_805DD170_00001310
lbl_fn_805DD170_00001304:
    fmr f1, f30
    mr r3, r28
    bl fn_805D9570
lbl_fn_805DD170_00001310:
    psq_l f31, 0x1c8(r1), 0, 0
    fmr f1, f29
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    psq_l f28, 0x198(r1), 0, 0
    lfd f28, 0x190(r1)
    psq_l f27, 0x188(r1), 0, 0
    lfd f27, 0x180(r1)
    psq_l f26, 0x178(r1), 0, 0
    lfd f26, 0x170(r1)
    psq_l f25, 0x168(r1), 0, 0
    lfd f25, 0x160(r1)
    psq_l f24, 0x158(r1), 0, 0
    lfd f24, 0x150(r1)
    addi r11, r1, 0x150
    bl _restgpr_25
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_805DD720(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x170
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x58(r3)
    lis r8, lbl_80764630@ha
    lfs f31, lbl_80764630@l(r8)
    mr r27, r3
    andi. r8, r0, 0x333
    mr r28, r4
    fmr f2, f31
    mr r29, r5
    mr r30, r6
    mr r31, r7
    cmplwi r8, 0x300
    beq lbl_fn_805DD720_000014E0
    cmpwi r8, 0x0
    beq lbl_fn_805DD720_000014E0
    stfs f31, 0x28(r1)
    mr r5, r30
    mr r6, r31
    addi r4, r1, 0x28
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    lwz r7, 0x0(r3)
    stw r7, 0xf8(r1)
    lwz r7, 0x4(r3)
    stw r7, 0xfc(r1)
    lwz r7, 0x8(r3)
    stw r7, 0x100(r1)
    lwz r7, 0xc(r3)
    stw r7, 0x104(r1)
    lwz r7, 0x10(r3)
    stw r7, 0x108(r1)
    lwz r7, 0x14(r3)
    stw r7, 0x10c(r1)
    lwz r7, 0x18(r3)
    stw r7, 0x110(r1)
    lwz r7, 0x1c(r3)
    stw r7, 0x114(r1)
    lwz r7, 0x20(r3)
    stw r7, 0x118(r1)
    lwz r8, 0x24(r3)
    lwz r7, 0x28(r3)
    stw r7, 0x120(r1)
    stw r8, 0x11c(r1)
    lwz r8, 0x2c(r3)
    lwz r7, 0x30(r3)
    stw r7, 0x128(r1)
    stw r8, 0x124(r1)
    lwz r7, 0x34(r3)
    stw r7, 0x12c(r1)
    lwz r8, 0x38(r3)
    lwz r7, 0x3c(r3)
    stw r7, 0x134(r1)
    stw r8, 0x130(r1)
    lhz r7, 0x40(r3)
    sth r7, 0x138(r1)
    lbz r7, 0x42(r3)
    stb r7, 0x13a(r1)
    lbz r7, 0x43(r3)
    stb r7, 0x13b(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x13c(r1)
    lwz r7, 0x48(r3)
    stw r7, 0x140(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x144(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x148(r1)
    lwz r7, 0x54(r3)
    stw r7, 0x14c(r1)
    stw r0, 0x150(r1)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0xf8
    stw r0, 0x154(r1)
    bl fn_805DD050
    addi r3, r1, 0xf8
    li r4, 0x0
    bl fn_805D84C0
    lfs f3, 0x28(r1)
    lfs f2, 0x30(r1)
    lfs f1, 0x2c(r1)
    lfs f0, 0x34(r1)
    fadds f31, f3, f2
    fadds f2, f1, f0
lbl_fn_805DD720_000014E0:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 26, 27
    cmplwi r0, 0x10
    bne lbl_fn_805DD720_0000150C
    lis r3, lbl_80764640@ha
    lfs f0, 0x0(r28)
    lfs f1, lbl_80764640@l(r3)
    fmuls f1, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r28)
    b lbl_fn_805DD720_00001520
lbl_fn_805DD720_0000150C:
    cmplwi r0, 0x20
    bne lbl_fn_805DD720_00001520
    lfs f0, 0x0(r28)
    fsubs f0, f0, f31
    stfs f0, 0x0(r28)
lbl_fn_805DD720_00001520:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    bne lbl_fn_805DD720_0000154C
    lis r3, lbl_80764640@ha
    lfs f0, 0x0(r29)
    lfs f1, lbl_80764640@l(r3)
    fmuls f1, f2, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r29)
    b lbl_fn_805DD720_00001560
lbl_fn_805DD720_0000154C:
    cmplwi r0, 0x200
    bne lbl_fn_805DD720_00001560
    lfs f0, 0x0(r29)
    fsubs f0, f0, f2
    stfs f0, 0x0(r29)
lbl_fn_805DD720_00001560:
    lwz r0, 0x58(r27)
    clrlwi r3, r0, 30
    cmplwi r3, 0x1
    bne lbl_fn_805DD720_000016B0
    lis r4, lbl_80764630@ha
    addi r3, r1, 0x98
    lfs f1, lbl_80764630@l(r4)
    stfs f1, 0x18(r1)
    fmr f2, f1
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    lwz r4, 0x0(r27)
    stw r4, 0x98(r1)
    lwz r4, 0x4(r27)
    stw r4, 0x9c(r1)
    lwz r4, 0x8(r27)
    stw r4, 0xa0(r1)
    lwz r4, 0xc(r27)
    stw r4, 0xa4(r1)
    lwz r4, 0x10(r27)
    stw r4, 0xa8(r1)
    lwz r4, 0x14(r27)
    stw r4, 0xac(r1)
    lwz r4, 0x18(r27)
    stw r4, 0xb0(r1)
    lwz r4, 0x1c(r27)
    stw r4, 0xb4(r1)
    lwz r4, 0x20(r27)
    stw r4, 0xb8(r1)
    lwz r5, 0x24(r27)
    lwz r4, 0x28(r27)
    stw r4, 0xc0(r1)
    stw r5, 0xbc(r1)
    lwz r5, 0x2c(r27)
    lwz r4, 0x30(r27)
    stw r4, 0xc8(r1)
    stw r5, 0xc4(r1)
    lwz r4, 0x34(r27)
    stw r4, 0xcc(r1)
    lwz r5, 0x38(r27)
    lwz r4, 0x3c(r27)
    stw r4, 0xd4(r1)
    stw r5, 0xd0(r1)
    lhz r4, 0x40(r27)
    sth r4, 0xd8(r1)
    lbz r4, 0x42(r27)
    stb r4, 0xda(r1)
    lbz r4, 0x43(r27)
    stb r4, 0xdb(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0xdc(r1)
    lwz r4, 0x48(r27)
    stw r4, 0xe0(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0xe4(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0xe8(r1)
    lwz r4, 0x54(r27)
    stw r4, 0xec(r1)
    stw r0, 0xf0(r1)
    lwz r0, 0x5c(r27)
    stw r0, 0xf4(r1)
    bl fn_805D9530
    mr r5, r30
    mr r6, r31
    addi r3, r1, 0x98
    addi r4, r1, 0x18
    bl fn_805DCC70
    lfs f1, 0x20(r1)
    addi r3, r1, 0x98
    lfs f0, 0x18(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_805D84C0
    lis r3, lbl_80764640@ha
    fsubs f2, f31, f30
    lfs f1, lbl_80764640@l(r3)
    mr r3, r27
    lfs f0, 0x0(r28)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    bl fn_805D9540
    b lbl_fn_805DD720_000017F8
lbl_fn_805DD720_000016B0:
    cmplwi r3, 0x2
    bne lbl_fn_805DD720_000017EC
    lis r4, lbl_80764630@ha
    addi r3, r1, 0x38
    lfs f1, lbl_80764630@l(r4)
    stfs f1, 0x8(r1)
    fmr f2, f1
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    lwz r4, 0x0(r27)
    stw r4, 0x38(r1)
    lwz r4, 0x4(r27)
    stw r4, 0x3c(r1)
    lwz r4, 0x8(r27)
    stw r4, 0x40(r1)
    lwz r4, 0xc(r27)
    stw r4, 0x44(r1)
    lwz r4, 0x10(r27)
    stw r4, 0x48(r1)
    lwz r4, 0x14(r27)
    stw r4, 0x4c(r1)
    lwz r4, 0x18(r27)
    stw r4, 0x50(r1)
    lwz r4, 0x1c(r27)
    stw r4, 0x54(r1)
    lwz r4, 0x20(r27)
    stw r4, 0x58(r1)
    lwz r5, 0x24(r27)
    lwz r4, 0x28(r27)
    stw r4, 0x60(r1)
    stw r5, 0x5c(r1)
    lwz r5, 0x2c(r27)
    lwz r4, 0x30(r27)
    stw r4, 0x68(r1)
    stw r5, 0x64(r1)
    lwz r4, 0x34(r27)
    stw r4, 0x6c(r1)
    lwz r5, 0x38(r27)
    lwz r4, 0x3c(r27)
    stw r4, 0x74(r1)
    stw r5, 0x70(r1)
    lhz r4, 0x40(r27)
    sth r4, 0x78(r1)
    lbz r4, 0x42(r27)
    stb r4, 0x7a(r1)
    lbz r4, 0x43(r27)
    stb r4, 0x7b(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0x7c(r1)
    lwz r4, 0x48(r27)
    stw r4, 0x80(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0x84(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0x88(r1)
    lwz r4, 0x54(r27)
    stw r4, 0x8c(r1)
    stw r0, 0x90(r1)
    lwz r0, 0x5c(r27)
    stw r0, 0x94(r1)
    bl fn_805D9530
    mr r5, r30
    mr r6, r31
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    bl fn_805DCC70
    lfs f1, 0x10(r1)
    addi r3, r1, 0x38
    lfs f0, 0x8(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_805D84C0
    fsubs f1, f31, f30
    lfs f0, 0x0(r28)
    mr r3, r27
    fadds f1, f0, f1
    bl fn_805D9540
    b lbl_fn_805DD720_000017F8
lbl_fn_805DD720_000017EC:
    lfs f1, 0x0(r28)
    mr r3, r27
    bl fn_805D9540
lbl_fn_805DD720_000017F8:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x300
    bne lbl_fn_805DD720_00001818
    lfs f1, 0x0(r29)
    mr r3, r27
    bl fn_805D9550
    b lbl_fn_805DD720_00001830
lbl_fn_805DD720_00001818:
    mr r3, r27
    bl fn_805D9360
    lfs f0, 0x0(r29)
    mr r3, r27
    fadds f1, f0, f1
    bl fn_805D9550
lbl_fn_805DD720_00001830:
    fmr f1, f31
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    addi r11, r1, 0x170
    bl _restgpr_27
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_805DDC10(void)
{
    nofralloc
    lwz r0, 0x58(r3)
    and r0, r0, r4
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_805DDC30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805D8130
    lis r3, lbl_80764630@ha
    lis r4, lbl_807CA25C@ha
    lfs f0, lbl_80764630@l(r3)
    addi r4, r4, lbl_807CA25C@l
    li r5, 0x4
    li r0, 0x0
    stfs f0, 0x4c(r31)
    mr r3, r31
    stfs f0, 0x50(r31)
    stw r5, 0x54(r31)
    stw r0, 0x58(r31)
    stw r4, 0x5c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DDC90(void)
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
    beq lbl_fn_805DDC90_0000191C
    li r4, 0x0
    bl fn_805D84C0
    cmpwi r31, 0x0
    ble lbl_fn_805DDC90_0000191C
    mr r3, r30
    bl dtor_80084684
lbl_fn_805DDC90_0000191C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805DDCF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_805D8510
    cmpwi r3, 0x0
    beq lbl_fn_805DDCF0_00001988
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r31, r3
    b lbl_fn_805DDCF0_0000198C
lbl_fn_805DDCF0_00001988:
    li r31, 0x0
lbl_fn_805DDCF0_0000198C:
    mr r3, r30
    bl fn_805D91A0
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80764638@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_80764638@l(r4)
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fsubs f0, f31, f0
    stfs f0, 0x50(r30)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805DDD90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_805D8510
    cmpwi r3, 0x0
    beq lbl_fn_805DDD90_00001A1C
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r31, r3
    b lbl_fn_805DDD90_00001A20
lbl_fn_805DDD90_00001A1C:
    li r31, 0x0
lbl_fn_805DDD90_00001A20:
    mr r3, r30
    bl fn_805D91A0
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80764638@ha
    stw r3, 0xc(r1)
    lfd f3, lbl_80764638@l(r4)
    stw r0, 0x8(r1)
    lfs f0, 0x50(r30)
    lfd f2, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f2, f2, f3
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}
