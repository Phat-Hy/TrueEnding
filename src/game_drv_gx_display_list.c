#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_16(void);
extern void _restgpr_25(void);
extern void _savegpr_15(void);
extern void _savegpr_16(void);
extern void _savegpr_25(void);
extern void fn_805D84C0(void);
extern void fn_805D8510(void);
extern void fn_805D9190(void);
extern void fn_805D91A0(void);
extern void fn_805D93D0(void);
extern void fn_805D93E0(void);
extern void fn_805D9530(void);
extern void fn_805D9540(void);
extern void fn_805D9580(void);
extern void fn_805D9590(void);
extern void fn_805DFA30(void);
extern void fn_805DFB50(void);
extern void fn_806869BC(void);
extern void fn_80686A48(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80764630[];
extern u8 lbl_80764638[];
extern u8 lbl_8079A734[];
extern u8 lbl_807CA258[];
extern u8 lbl_807CA25C[];

/* Small data declarations */

/* Function declarations */
void fn_805DDE20(void);
void fn_805DDE30(void);
void fn_805DDE40(void);
void fn_805DDE50(void);
void fn_805DDE60(void);
void fn_805DDE70(void);
void fn_805DDE80(void);
void fn_805DDE90(void);
void fn_805DDEA0(void);
void fn_805DDEB0(void);
void fn_805DDEC0(void);
void fn_805DDED0(void);
void fn_805DE0D0(void);
void fn_805DE2D0(void);
void fn_805DE4A0(void);
void fn_805DE610(void);
void fn_805DE750(void);
void fn_805DE8A0(void);
void fn_805DE9E0(void);
void fn_805DEB30(void);
void fn_805DEC40(void);
void fn_805DED70(void);
void fn_805DEFA0(void);
void fn_805DF170(void);
void fn_805DF2D0(void);
void fn_805DF440(void);
void fn_805DF460(void);
void fn_805DF480(void);
void fn_805DF490(void);
void fn_805DF4A0(void);
void fn_805DF4B0(void);
void fn_805DF4C0(void);
void fn_805DF630(void);

asm void fn_805DDE20(void)
{
    nofralloc
    stfs f1, 0x50(r3)
    blr
}

asm void fn_805DDE30(void)
{
    nofralloc
    stfs f1, 0x4c(r3)
    blr
}

asm void fn_805DDE40(void)
{
    nofralloc
    lfs f1, 0x50(r3)
    blr
}

asm void fn_805DDE50(void)
{
    nofralloc
    lfs f1, 0x4c(r3)
    blr
}

asm void fn_805DDE60(void)
{
    nofralloc
    stw r4, 0x54(r3)
    blr
}

asm void fn_805DDE70(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    blr
}

asm void fn_805DDE80(void)
{
    nofralloc
    stw r4, 0x58(r3)
    blr
}

asm void fn_805DDE90(void)
{
    nofralloc
    lwz r3, 0x58(r3)
    blr
}

asm void fn_805DDEA0(void)
{
    nofralloc
    stw r4, 0x5c(r3)
    blr
}

asm void fn_805DDEB0(void)
{
    nofralloc
    lis r4, lbl_807CA25C@ha
    addi r4, r4, lbl_807CA25C@l
    stw r4, 0x5c(r3)
    blr
}

asm void fn_805DDEC0(void)
{
    nofralloc
    lwz r3, 0x5c(r3)
    blr
}

asm void fn_805DDED0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r16, r4
    bne cr1, lbl_fn_805DDED0_000000F4
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_805DDED0_000000F4:
    lis r11, lbl_807CA258@ha
    lis r12, lbl_80764630@ha
    lwz r15, lbl_807CA258@l(r11)
    addi r11, r31, 0x138
    lfs f0, lbl_80764630@l(r12)
    addi r0, r31, 0x8
    cmpwi r15, 0x0
    lis r12, 0x200
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f0, 0x84(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_805DDED0_00000158
    b lbl_fn_805DDED0_00000174
lbl_fn_805DDED0_00000158:
    lis r3, lbl_8079A734@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A734@l(r3)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_805DDED0_00000174:
    lis r4, lbl_8079A734@ha
    mr r3, r15
    lwz r4, lbl_8079A734@l(r4)
    mr r5, r16
    addi r6, r31, 0x68
    bl fn_806869BC
    lwz r16, 0x0(r30)
    mr r5, r15
    lwz r17, 0x4(r30)
    mr r6, r3
    lwz r18, 0x8(r30)
    addi r3, r31, 0x88
    lwz r19, 0xc(r30)
    addi r4, r31, 0x78
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
    lfs f2, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f1, 0x4c(r30)
    lfs f0, 0x50(r30)
    lwz r0, 0x54(r30)
    lwz r15, 0x58(r30)
    lwz r30, 0x5c(r30)
    stw r16, 0x88(r31)
    stw r17, 0x8c(r31)
    stw r18, 0x90(r31)
    stw r19, 0x94(r31)
    stw r20, 0x98(r31)
    stw r21, 0x9c(r31)
    stw r22, 0xa0(r31)
    stw r23, 0xa4(r31)
    stw r24, 0xa8(r31)
    stw r25, 0xac(r31)
    stw r26, 0xb0(r31)
    stw r27, 0xb4(r31)
    stw r28, 0xb8(r31)
    stw r29, 0xbc(r31)
    stw r12, 0xc0(r31)
    stw r11, 0xc4(r31)
    sth r10, 0xc8(r31)
    stb r9, 0xca(r31)
    stb r8, 0xcb(r31)
    stfs f2, 0xcc(r31)
    stw r7, 0xd0(r31)
    stfs f1, 0xd4(r31)
    stfs f0, 0xd8(r31)
    stw r0, 0xdc(r31)
    stw r15, 0xe0(r31)
    stw r30, 0xe4(r31)
    bl fn_805DFA30
    addi r3, r31, 0x88
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    lfs f1, 0x80(r31)
    lfs f0, 0x78(r31)
    addi r11, r10, 0x130
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DE0D0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r16, r4
    bne cr1, lbl_fn_805DE0D0_000002F4
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_805DE0D0_000002F4:
    lis r11, lbl_807CA258@ha
    lis r12, lbl_80764630@ha
    lwz r15, lbl_807CA258@l(r11)
    addi r11, r31, 0x138
    lfs f0, lbl_80764630@l(r12)
    addi r0, r31, 0x8
    cmpwi r15, 0x0
    lis r12, 0x200
    stw r3, 0x8(r31)
    stw r4, 0xc(r31)
    stw r5, 0x10(r31)
    stw r6, 0x14(r31)
    stw r7, 0x18(r31)
    stw r8, 0x1c(r31)
    stw r9, 0x20(r31)
    stw r10, 0x24(r31)
    stfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f0, 0x84(r31)
    stw r12, 0x68(r31)
    stw r11, 0x6c(r31)
    stw r0, 0x70(r31)
    beq lbl_fn_805DE0D0_00000358
    b lbl_fn_805DE0D0_00000374
lbl_fn_805DE0D0_00000358:
    lis r3, lbl_8079A734@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A734@l(r3)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_805DE0D0_00000374:
    lis r4, lbl_8079A734@ha
    mr r3, r15
    lwz r4, lbl_8079A734@l(r4)
    mr r5, r16
    addi r6, r31, 0x68
    bl fn_806869BC
    lwz r16, 0x0(r30)
    mr r5, r15
    lwz r17, 0x4(r30)
    mr r6, r3
    lwz r18, 0x8(r30)
    addi r3, r31, 0x88
    lwz r19, 0xc(r30)
    addi r4, r31, 0x78
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
    lfs f2, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f1, 0x4c(r30)
    lfs f0, 0x50(r30)
    lwz r0, 0x54(r30)
    lwz r15, 0x58(r30)
    lwz r30, 0x5c(r30)
    stw r16, 0x88(r31)
    stw r17, 0x8c(r31)
    stw r18, 0x90(r31)
    stw r19, 0x94(r31)
    stw r20, 0x98(r31)
    stw r21, 0x9c(r31)
    stw r22, 0xa0(r31)
    stw r23, 0xa4(r31)
    stw r24, 0xa8(r31)
    stw r25, 0xac(r31)
    stw r26, 0xb0(r31)
    stw r27, 0xb4(r31)
    stw r28, 0xb8(r31)
    stw r29, 0xbc(r31)
    stw r12, 0xc0(r31)
    stw r11, 0xc4(r31)
    sth r10, 0xc8(r31)
    stb r9, 0xca(r31)
    stb r8, 0xcb(r31)
    stfs f2, 0xcc(r31)
    stw r7, 0xd0(r31)
    stfs f1, 0xd4(r31)
    stfs f0, 0xd8(r31)
    stw r0, 0xdc(r31)
    stw r15, 0xe0(r31)
    stw r30, 0xe4(r31)
    bl fn_805DFA30
    addi r3, r31, 0x88
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    lfs f1, 0x84(r31)
    lfs f0, 0x7c(r31)
    addi r11, r10, 0x130
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DE2D0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_15
    mr r31, r1
    mr r30, r3
    mr r18, r4
    bne cr1, lbl_fn_805DE2D0_000004F4
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_805DE2D0_000004F4:
    lis r11, lbl_807CA258@ha
    addi r12, r31, 0x128
    lwz r15, lbl_807CA258@l(r11)
    addi r0, r31, 0x8
    lis r11, 0x300
    stw r3, 0x8(r31)
    cmpwi r15, 0x0
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
    beq lbl_fn_805DE2D0_00000540
    b lbl_fn_805DE2D0_0000055C
lbl_fn_805DE2D0_00000540:
    lis r3, lbl_8079A734@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A734@l(r3)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_805DE2D0_0000055C:
    lis r4, lbl_8079A734@ha
    mr r3, r15
    lwz r4, lbl_8079A734@l(r4)
    addi r6, r31, 0x68
    bl fn_806869BC
    lwz r16, 0x0(r30)
    mr r4, r18
    lwz r17, 0x4(r30)
    mr r5, r15
    lwz r18, 0x8(r30)
    mr r6, r3
    lwz r19, 0xc(r30)
    addi r3, r31, 0x78
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
    lfs f2, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f1, 0x4c(r30)
    lfs f0, 0x50(r30)
    lwz r0, 0x54(r30)
    lwz r15, 0x58(r30)
    lwz r30, 0x5c(r30)
    stw r16, 0x78(r31)
    stw r17, 0x7c(r31)
    stw r18, 0x80(r31)
    stw r19, 0x84(r31)
    stw r20, 0x88(r31)
    stw r21, 0x8c(r31)
    stw r22, 0x90(r31)
    stw r23, 0x94(r31)
    stw r24, 0x98(r31)
    stw r25, 0x9c(r31)
    stw r26, 0xa0(r31)
    stw r27, 0xa4(r31)
    stw r28, 0xa8(r31)
    stw r29, 0xac(r31)
    stw r12, 0xb0(r31)
    stw r11, 0xb4(r31)
    sth r10, 0xb8(r31)
    stb r9, 0xba(r31)
    stb r8, 0xbb(r31)
    stfs f2, 0xbc(r31)
    stw r7, 0xc0(r31)
    stfs f1, 0xc4(r31)
    stfs f0, 0xc8(r31)
    stw r0, 0xcc(r31)
    stw r15, 0xd0(r31)
    stw r30, 0xd4(r31)
    bl fn_805DFA30
    addi r3, r31, 0x78
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    addi r11, r10, 0x120
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DE4A0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_15
    mr r31, r1
    lis r7, lbl_807CA258@ha
    mr r30, r3
    lwz r15, lbl_807CA258@l(r7)
    mr r18, r4
    cmpwi r15, 0x0
    beq lbl_fn_805DE4A0_000006B4
    b lbl_fn_805DE4A0_000006D0
lbl_fn_805DE4A0_000006B4:
    lis r3, lbl_8079A734@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A734@l(r3)
    neg r15, r3
    clrrwi r15, r15, 3
    stwux r0, r1, r15
    addi r15, r1, 0x8
lbl_fn_805DE4A0_000006D0:
    lis r4, lbl_8079A734@ha
    mr r3, r15
    lwz r4, lbl_8079A734@l(r4)
    bl fn_806869BC
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
    lfs f2, 0x44(r30)
    lwz r7, 0x48(r30)
    lfs f1, 0x4c(r30)
    lfs f0, 0x50(r30)
    lwz r0, 0x54(r30)
    lwz r15, 0x58(r30)
    lwz r30, 0x5c(r30)
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
    stfs f2, 0x4c(r31)
    stw r7, 0x50(r31)
    stfs f1, 0x54(r31)
    stfs f0, 0x58(r31)
    stw r0, 0x5c(r31)
    stw r15, 0x60(r31)
    stw r30, 0x64(r31)
    bl fn_805DFA30
    addi r3, r31, 0x8
    li r4, 0x0
    bl fn_805D84C0
    mr r10, r31
    addi r11, r10, 0xb0
    bl _restgpr_15
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_805DE610(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_16
    lis r6, lbl_80764630@ha
    lwz r16, 0x0(r3)
    lfs f3, lbl_80764630@l(r6)
    mr r6, r5
    lwz r17, 0x4(r3)
    mr r5, r4
    lwz r18, 0x8(r3)
    addi r4, r1, 0x8
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
    lfs f2, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f1, 0x4c(r3)
    lfs f0, 0x50(r3)
    lwz r8, 0x54(r3)
    lwz r7, 0x58(r3)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0x18
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
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
    stfs f2, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_805DFA30
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_805D84C0
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

asm void fn_805DE750(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_15
    mr r17, r4
    mr r31, r3
    mr r3, r17
    bl fn_80686A48
    lis r4, lbl_80764630@ha
    lwz r15, 0x0(r31)
    lfs f3, lbl_80764630@l(r4)
    mr r5, r17
    lwz r16, 0x4(r31)
    mr r6, r3
    lwz r17, 0x8(r31)
    addi r3, r1, 0x18
    lwz r18, 0xc(r31)
    addi r4, r1, 0x8
    lwz r19, 0x10(r31)
    lwz r20, 0x14(r31)
    lwz r21, 0x18(r31)
    lwz r22, 0x1c(r31)
    lwz r23, 0x20(r31)
    lwz r24, 0x24(r31)
    lwz r25, 0x28(r31)
    lwz r26, 0x2c(r31)
    lwz r27, 0x30(r31)
    lwz r28, 0x34(r31)
    lwz r29, 0x38(r31)
    lwz r30, 0x3c(r31)
    lhz r12, 0x40(r31)
    lbz r11, 0x42(r31)
    lbz r10, 0x43(r31)
    lfs f2, 0x44(r31)
    lwz r9, 0x48(r31)
    lfs f1, 0x4c(r31)
    lfs f0, 0x50(r31)
    lwz r8, 0x54(r31)
    lwz r7, 0x58(r31)
    lwz r0, 0x5c(r31)
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stw r15, 0x18(r1)
    stw r16, 0x1c(r1)
    stw r17, 0x20(r1)
    stw r18, 0x24(r1)
    stw r19, 0x28(r1)
    stw r20, 0x2c(r1)
    stw r21, 0x30(r1)
    stw r22, 0x34(r1)
    stw r23, 0x38(r1)
    stw r24, 0x3c(r1)
    stw r25, 0x40(r1)
    stw r26, 0x44(r1)
    stw r27, 0x48(r1)
    stw r28, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r30, 0x54(r1)
    sth r12, 0x58(r1)
    stb r11, 0x5a(r1)
    stb r10, 0x5b(r1)
    stfs f2, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_805DFA30
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_805D84C0
    lfs f1, 0x10(r1)
    addi r11, r1, 0xc0
    lfs f0, 0x8(r1)
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805DE8A0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_16
    lis r6, lbl_80764630@ha
    lwz r16, 0x0(r3)
    lfs f3, lbl_80764630@l(r6)
    mr r6, r5
    lwz r17, 0x4(r3)
    mr r5, r4
    lwz r18, 0x8(r3)
    addi r4, r1, 0x8
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
    lfs f2, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f1, 0x4c(r3)
    lfs f0, 0x50(r3)
    lwz r8, 0x54(r3)
    lwz r7, 0x58(r3)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0x18
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
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
    stfs f2, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_805DFA30
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_805D84C0
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

asm void fn_805DE9E0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_15
    mr r17, r4
    mr r31, r3
    mr r3, r17
    bl fn_80686A48
    lis r4, lbl_80764630@ha
    lwz r15, 0x0(r31)
    lfs f3, lbl_80764630@l(r4)
    mr r5, r17
    lwz r16, 0x4(r31)
    mr r6, r3
    lwz r17, 0x8(r31)
    addi r3, r1, 0x18
    lwz r18, 0xc(r31)
    addi r4, r1, 0x8
    lwz r19, 0x10(r31)
    lwz r20, 0x14(r31)
    lwz r21, 0x18(r31)
    lwz r22, 0x1c(r31)
    lwz r23, 0x20(r31)
    lwz r24, 0x24(r31)
    lwz r25, 0x28(r31)
    lwz r26, 0x2c(r31)
    lwz r27, 0x30(r31)
    lwz r28, 0x34(r31)
    lwz r29, 0x38(r31)
    lwz r30, 0x3c(r31)
    lhz r12, 0x40(r31)
    lbz r11, 0x42(r31)
    lbz r10, 0x43(r31)
    lfs f2, 0x44(r31)
    lwz r9, 0x48(r31)
    lfs f1, 0x4c(r31)
    lfs f0, 0x50(r31)
    lwz r8, 0x54(r31)
    lwz r7, 0x58(r31)
    lwz r0, 0x5c(r31)
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f3, 0x14(r1)
    stw r15, 0x18(r1)
    stw r16, 0x1c(r1)
    stw r17, 0x20(r1)
    stw r18, 0x24(r1)
    stw r19, 0x28(r1)
    stw r20, 0x2c(r1)
    stw r21, 0x30(r1)
    stw r22, 0x34(r1)
    stw r23, 0x38(r1)
    stw r24, 0x3c(r1)
    stw r25, 0x40(r1)
    stw r26, 0x44(r1)
    stw r27, 0x48(r1)
    stw r28, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r30, 0x54(r1)
    sth r12, 0x58(r1)
    stb r11, 0x5a(r1)
    stb r10, 0x5b(r1)
    stfs f2, 0x5c(r1)
    stw r9, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_805DFA30
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_805D84C0
    lfs f1, 0x14(r1)
    addi r11, r1, 0xc0
    lfs f0, 0xc(r1)
    fsubs f1, f1, f0
    bl _restgpr_15
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_805DEB30(void)
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
    lfs f2, 0x44(r3)
    lwz r9, 0x48(r3)
    lfs f1, 0x4c(r3)
    lfs f0, 0x50(r3)
    lwz r8, 0x54(r3)
    lwz r7, 0x58(r3)
    lwz r0, 0x5c(r3)
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
    stfs f2, 0x4c(r1)
    stw r9, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_805DFA30
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_805D84C0
    addi r11, r1, 0xb0
    bl _restgpr_16
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805DEC40(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_15
    mr r18, r5
    mr r31, r3
    mr r17, r4
    mr r3, r18
    bl fn_80686A48
    lwz r15, 0x0(r31)
    mr r4, r17
    lwz r16, 0x4(r31)
    mr r5, r18
    lwz r17, 0x8(r31)
    mr r6, r3
    lwz r18, 0xc(r31)
    addi r3, r1, 0x8
    lwz r19, 0x10(r31)
    lwz r20, 0x14(r31)
    lwz r21, 0x18(r31)
    lwz r22, 0x1c(r31)
    lwz r23, 0x20(r31)
    lwz r24, 0x24(r31)
    lwz r25, 0x28(r31)
    lwz r26, 0x2c(r31)
    lwz r27, 0x30(r31)
    lwz r28, 0x34(r31)
    lwz r29, 0x38(r31)
    lwz r30, 0x3c(r31)
    lhz r12, 0x40(r31)
    lbz r11, 0x42(r31)
    lbz r10, 0x43(r31)
    lfs f2, 0x44(r31)
    lwz r9, 0x48(r31)
    lfs f1, 0x4c(r31)
    lfs f0, 0x50(r31)
    lwz r8, 0x54(r31)
    lwz r7, 0x58(r31)
    lwz r0, 0x5c(r31)
    stw r15, 0x8(r1)
    stw r16, 0xc(r1)
    stw r17, 0x10(r1)
    stw r18, 0x14(r1)
    stw r19, 0x18(r1)
    stw r20, 0x1c(r1)
    stw r21, 0x20(r1)
    stw r22, 0x24(r1)
    stw r23, 0x28(r1)
    stw r24, 0x2c(r1)
    stw r25, 0x30(r1)
    stw r26, 0x34(r1)
    stw r27, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r29, 0x40(r1)
    stw r30, 0x44(r1)
    sth r12, 0x48(r1)
    stb r11, 0x4a(r1)
    stb r10, 0x4b(r1)
    stfs f2, 0x4c(r1)
    stw r9, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_805DFA30
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_805D84C0
    addi r11, r1, 0xb0
    bl _restgpr_15
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805DED70(void)
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
    bne cr1, lbl_fn_805DED70_00000FAC
    stfd f1, 0x28(r31)
    stfd f2, 0x30(r31)
    stfd f3, 0x38(r31)
    stfd f4, 0x40(r31)
    stfd f5, 0x48(r31)
    stfd f6, 0x50(r31)
    stfd f7, 0x58(r31)
    stfd f8, 0x60(r31)
lbl_fn_805DED70_00000FAC:
    lis r11, lbl_807CA258@ha
    addi r12, r31, 0x118
    lwz r29, lbl_807CA258@l(r11)
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
    beq lbl_fn_805DED70_00000FF8
    b lbl_fn_805DED70_00001014
lbl_fn_805DED70_00000FF8:
    lis r3, lbl_8079A734@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A734@l(r3)
    neg r29, r3
    clrrwi r29, r29, 3
    stwux r0, r1, r29
    addi r29, r1, 0x8
lbl_fn_805DED70_00001014:
    lis r4, lbl_8079A734@ha
    mr r3, r29
    lwz r4, lbl_8079A734@l(r4)
    mr r5, r28
    addi r6, r31, 0x68
    bl fn_806869BC
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
    bl fn_805DFB50
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

asm void fn_805DEFA0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r6, lbl_807CA258@ha
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
    lwz r29, lbl_807CA258@l(r6)
    mr r6, r5
    cmpwi r29, 0x0
    beq lbl_fn_805DEFA0_000011CC
    b lbl_fn_805DEFA0_000011E8
lbl_fn_805DEFA0_000011CC:
    lis r3, lbl_8079A734@ha
    lwz r0, 0x0(r1)
    lwz r3, lbl_8079A734@l(r3)
    neg r29, r3
    clrrwi r29, r29, 3
    stwux r0, r1, r29
    addi r29, r1, 0x8
lbl_fn_805DEFA0_000011E8:
    lis r4, lbl_8079A734@ha
    mr r3, r29
    lwz r4, lbl_8079A734@l(r4)
    mr r5, r7
    bl fn_806869BC
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
    bl fn_805DFB50
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

asm void fn_805DF170(void)
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
    bl fn_805DFB50
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

asm void fn_805DF2D0(void)
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
    bl fn_80686A48
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
    bl fn_805DFB50
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

asm void fn_805DF440(void)
{
    nofralloc
    lis r6, lbl_807CA258@ha
    mr r0, r3
    lwz r3, lbl_807CA258@l(r6)
    lis r5, lbl_8079A734@ha
    stw r4, lbl_8079A734@l(r5)
    stw r0, lbl_807CA258@l(r6)
    blr
}

asm void fn_805DF460(void)
{
    nofralloc
    lis r5, lbl_807CA258@ha
    mr r6, r3
    lwz r3, lbl_807CA258@l(r5)
    lis r4, lbl_8079A734@ha
    li r0, 0x0
    stw r6, lbl_8079A734@l(r4)
    stw r0, lbl_807CA258@l(r5)
    blr
}

asm void fn_805DF480(void)
{
    nofralloc
    lis r3, lbl_8079A734@ha
    lwz r3, lbl_8079A734@l(r3)
    blr
}

asm void fn_805DF490(void)
{
    nofralloc
    lis r3, lbl_807CA258@ha
    lwz r3, lbl_807CA258@l(r3)
    blr
}

asm void fn_805DF4A0(void)
{
    nofralloc
    b fn_806869BC
}

asm void fn_805DF4B0(void)
{
    nofralloc
    b fn_80686A48
}

asm void fn_805DF4C0(void)
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
    bl fn_805DF630
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

asm void fn_805DF630(void)
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
    beq lbl_fn_805DF630_000018D0
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r25, r3
lbl_fn_805DF630_000018D0:
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
    ble lbl_fn_805DF630_00001918
    b lbl_fn_805DF630_0000191C
lbl_fn_805DF630_00001918:
    fmr f1, f0
lbl_fn_805DF630_0000191C:
    stfs f1, 0x4(r28)
    mr r3, r27
    bl fn_805D8510
    cmpwi r3, 0x0
    beq lbl_fn_805DF630_00001948
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r25, r3
    b lbl_fn_805DF630_0000194C
lbl_fn_805DF630_00001948:
    li r25, 0x0
lbl_fn_805DF630_0000194C:
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
    bge lbl_fn_805DF630_00001994
    b lbl_fn_805DF630_00001998
lbl_fn_805DF630_00001994:
    fmr f1, f0
lbl_fn_805DF630_00001998:
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
    b lbl_fn_805DF630_00001B9C
lbl_fn_805DF630_000019CC:
    clrlwi r0, r25, 16
    cmpwi r0, 0x20
    bge lbl_fn_805DF630_00001AE8
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
    ble lbl_fn_805DF630_00001A44
    b lbl_fn_805DF630_00001A48
lbl_fn_805DF630_00001A44:
    fmr f1, f0
lbl_fn_805DF630_00001A48:
    stfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_805DF630_00001A60
    b lbl_fn_805DF630_00001A64
lbl_fn_805DF630_00001A60:
    fmr f1, f0
lbl_fn_805DF630_00001A64:
    stfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    lfs f1, 0x20(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805DF630_00001A7C
    b lbl_fn_805DF630_00001A80
lbl_fn_805DF630_00001A7C:
    fmr f1, f0
lbl_fn_805DF630_00001A80:
    stfs f1, 0x8(r28)
    lfs f0, 0xc(r28)
    lfs f1, 0x24(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805DF630_00001A98
    b lbl_fn_805DF630_00001A9C
lbl_fn_805DF630_00001A98:
    fmr f1, f0
lbl_fn_805DF630_00001A9C:
    stfs f1, 0xc(r28)
    mr r3, r27
    bl fn_805D9580
    cmpwi r25, 0x4
    fmr f31, f1
    bne lbl_fn_805DF630_00001ABC
    mr r3, r30
    b lbl_fn_805DF630_00001BCC
lbl_fn_805DF630_00001ABC:
    cmpwi r25, 0x1
    bne lbl_fn_805DF630_00001ACC
    li r31, 0x0
    b lbl_fn_805DF630_00001B88
lbl_fn_805DF630_00001ACC:
    cmpwi r25, 0x2
    bne lbl_fn_805DF630_00001ADC
    li r31, 0x1
    b lbl_fn_805DF630_00001B88
lbl_fn_805DF630_00001ADC:
    cmpwi r25, 0x3
    beq lbl_fn_805DF630_00001BB8
    b lbl_fn_805DF630_00001B88
lbl_fn_805DF630_00001AE8:
    cmpwi r31, 0x0
    beq lbl_fn_805DF630_00001AF8
    lfs f0, 0x4c(r27)
    fadds f31, f31, f0
lbl_fn_805DF630_00001AF8:
    mr r3, r27
    li r31, 0x1
    bl fn_805D93D0
    cmpwi r3, 0x0
    beq lbl_fn_805DF630_00001B1C
    mr r3, r27
    bl fn_805D93E0
    fadds f31, f31, f1
    b lbl_fn_805DF630_00001B60
lbl_fn_805DF630_00001B1C:
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
lbl_fn_805DF630_00001B60:
    lfs f0, 0x0(r28)
    fcmpo cr0, f0, f31
    ble lbl_fn_805DF630_00001B70
    fmr f0, f31
lbl_fn_805DF630_00001B70:
    lfs f1, 0x8(r28)
    stfs f0, 0x0(r28)
    fcmpo cr0, f1, f31
    bge lbl_fn_805DF630_00001B84
    fmr f1, f31
lbl_fn_805DF630_00001B84:
    stfs f1, 0x8(r28)
lbl_fn_805DF630_00001B88:
    addi r3, r1, 0x28
    addi r12, r1, 0x2c
    bl fn_80695B00
    nop
    mr r25, r3
lbl_fn_805DF630_00001B9C:
    lwz r4, 0x28(r1)
    subf r3, r29, r4
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r0, r30
    ble lbl_fn_805DF630_000019CC
lbl_fn_805DF630_00001BB8:
    lwz r0, 0x28(r1)
    subf r3, r29, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
lbl_fn_805DF630_00001BCC:
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
