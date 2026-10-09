#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void fn_802376D0(void);
extern void fn_80237874(void);
extern void fn_804E2844(void);
extern void fn_804E2920(void);
extern void fn_804E4C60(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087E164;
extern u32 lbl_8087E168;

/* Function declarations */
void fn_804DF408(void);
void fn_804DF4BC(void);
void fn_804E0698(void);
void fn_804E09B0(void);
void fn_804E09D0(void);
void fn_804E0CE8(void);

asm void fn_804DF408(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x5e0(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_804DF408_0000009C
    addis r3, r3, 0x1
    subi r3, r3, 0x694c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_804DF408_0000009C
    addis r3, r31, 0x1
    subi r3, r3, 0x6940
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_804DF408_0000009C
    lwz r0, 0x5e8(r31)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DF408_00000094
lbl_fn_804DF408_00000064:
    lwz r4, 0x5e4(r31)
    lwzx r4, r4, r3
    cmpwi r4, 0x0
    beq lbl_fn_804DF408_0000008C
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804DF408_0000008C
    li r3, 0x1
    b lbl_fn_804DF408_000000A0
lbl_fn_804DF408_0000008C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DF408_00000064
lbl_fn_804DF408_00000094:
    li r3, 0x0
    b lbl_fn_804DF408_000000A0
lbl_fn_804DF408_0000009C:
    li r3, 0x1
lbl_fn_804DF408_000000A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DF4BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    li r4, 0x0
    stw r4, 0x2b88(r3)
    mr r31, r3
    li r9, 0x0
    li r12, 0xa0
    li r10, 0x14
    li r29, 0xa0
    li r30, 0x14
    li r27, 0xa0
    li r28, 0x14
    li r0, 0xa0
    li r26, 0x14
    b lbl_fn_804DF4BC_000011BC
lbl_fn_804DF4BC_000000FC:
    cmpwi r9, 0x0
    blt lbl_fn_804DF4BC_00000118
    cmpw r9, r5
    bge lbl_fn_804DF4BC_00000118
    lwz r5, 0x5e4(r3)
    add r5, r5, r4
    b lbl_fn_804DF4BC_0000011C
lbl_fn_804DF4BC_00000118:
    li r5, 0x0
lbl_fn_804DF4BC_0000011C:
    lwz r6, 0xd0(r5)
    srwi r6, r6, 31
    cmplwi r6, 0x1
    bne lbl_fn_804DF4BC_000011B4
    lwz r6, 0x2b88(r3)
    mulli r6, r6, 0xd5c
    add r6, r3, r6
    addic. r8, r6, 0x2b8c
    beq lbl_fn_804DF4BC_000011A8
    lwz r6, 0x0(r5)
    stw r6, 0x0(r8)
    lwz r6, 0x8(r5)
    lwz r7, 0x4(r5)
    stw r7, 0x4(r8)
    stw r6, 0x8(r8)
    lwz r6, 0x10(r5)
    lwz r7, 0xc(r5)
    stw r7, 0xc(r8)
    stw r6, 0x10(r8)
    lwz r6, 0x18(r5)
    lwz r7, 0x14(r5)
    stw r7, 0x14(r8)
    stw r6, 0x18(r8)
    lwz r6, 0x20(r5)
    lwz r7, 0x1c(r5)
    stw r7, 0x1c(r8)
    stw r6, 0x20(r8)
    lwz r6, 0x28(r5)
    lwz r7, 0x24(r5)
    stw r7, 0x24(r8)
    stw r6, 0x28(r8)
    lwz r6, 0x30(r5)
    lwz r7, 0x2c(r5)
    stw r7, 0x2c(r8)
    stw r6, 0x30(r8)
    lwz r6, 0x34(r5)
    stw r6, 0x34(r8)
    lwz r6, 0x38(r5)
    stw r6, 0x38(r8)
    lfs f0, 0x3c(r5)
    stfs f0, 0x3c(r8)
    lfs f0, 0x40(r5)
    stfs f0, 0x40(r8)
    lfs f0, 0x44(r5)
    stfs f0, 0x44(r8)
    lfs f0, 0x48(r5)
    stfs f0, 0x48(r8)
    lfs f0, 0x4c(r5)
    stfs f0, 0x4c(r8)
    lfs f0, 0x50(r5)
    stfs f0, 0x50(r8)
    lwz r6, 0x54(r5)
    stw r6, 0x54(r8)
    lwz r6, 0x5c(r5)
    lwz r7, 0x58(r5)
    stw r7, 0x58(r8)
    stw r6, 0x5c(r8)
    lwz r6, 0x64(r5)
    lwz r7, 0x60(r5)
    stw r7, 0x60(r8)
    stw r6, 0x64(r8)
    lwz r6, 0x6c(r5)
    lwz r7, 0x68(r5)
    stw r7, 0x68(r8)
    stw r6, 0x6c(r8)
    lwz r6, 0x74(r5)
    lwz r7, 0x70(r5)
    stw r7, 0x70(r8)
    stw r6, 0x74(r8)
    lwz r6, 0x7c(r5)
    lwz r7, 0x78(r5)
    stw r7, 0x78(r8)
    stw r6, 0x7c(r8)
    lwz r6, 0x84(r5)
    lwz r7, 0x80(r5)
    stw r7, 0x80(r8)
    stw r6, 0x84(r8)
    lwz r6, 0x8c(r5)
    lwz r7, 0x88(r5)
    stw r7, 0x88(r8)
    stw r6, 0x8c(r8)
    lwz r6, 0x94(r5)
    lwz r7, 0x90(r5)
    stw r7, 0x90(r8)
    stw r6, 0x94(r8)
    lwz r6, 0x9c(r5)
    lwz r7, 0x98(r5)
    stw r7, 0x98(r8)
    stw r6, 0x9c(r8)
    lwz r6, 0xa4(r5)
    lwz r7, 0xa0(r5)
    stw r7, 0xa0(r8)
    stw r6, 0xa4(r8)
    lwz r6, 0xac(r5)
    lwz r7, 0xa8(r5)
    stw r7, 0xa8(r8)
    stw r6, 0xac(r8)
    lwz r6, 0xb4(r5)
    lwz r7, 0xb0(r5)
    stw r7, 0xb0(r8)
    stw r6, 0xb4(r8)
    lwz r6, 0xbc(r5)
    lwz r7, 0xb8(r5)
    stw r7, 0xb8(r8)
    stw r6, 0xbc(r8)
    lwz r6, 0xc4(r5)
    lwz r7, 0xc0(r5)
    stw r7, 0xc0(r8)
    stw r6, 0xc4(r8)
    lwz r6, 0xc8(r5)
    stw r6, 0xc8(r8)
    lbz r6, 0xcc(r5)
    addi r7, r8, 0x14c
    stb r6, 0xcc(r8)
    addi r6, r8, 0x3b8
    cmplw r7, r6
    lwz r11, 0xd0(r5)
    addi r6, r5, 0x14c
    stw r11, 0xd0(r8)
    lwz r11, 0xd4(r5)
    stw r11, 0xd4(r8)
    lwz r11, 0xd8(r5)
    stw r11, 0xd8(r8)
    lwz r11, 0xdc(r5)
    stw r11, 0xdc(r8)
    lwz r11, 0xe0(r5)
    stw r11, 0xe0(r8)
    lwz r11, 0xe4(r5)
    stw r11, 0xe4(r8)
    lwz r11, 0xe8(r5)
    stw r11, 0xe8(r8)
    lhz r11, 0xec(r5)
    sth r11, 0xec(r8)
    lwz r11, 0xf0(r5)
    stw r11, 0xf0(r8)
    lwz r11, 0xf8(r5)
    lwz r25, 0xf4(r5)
    stw r25, 0xf4(r8)
    stw r11, 0xf8(r8)
    lwz r11, 0x100(r5)
    lwz r25, 0xfc(r5)
    stw r25, 0xfc(r8)
    stw r11, 0x100(r8)
    lwz r11, 0x108(r5)
    lwz r25, 0x104(r5)
    stw r25, 0x104(r8)
    stw r11, 0x108(r8)
    lwz r11, 0x110(r5)
    lwz r25, 0x10c(r5)
    stw r25, 0x10c(r8)
    stw r11, 0x110(r8)
    lwz r11, 0x118(r5)
    lwz r25, 0x114(r5)
    stw r25, 0x114(r8)
    stw r11, 0x118(r8)
    lwz r11, 0x120(r5)
    lwz r25, 0x11c(r5)
    stw r25, 0x11c(r8)
    stw r11, 0x120(r8)
    lwz r11, 0x128(r5)
    lwz r25, 0x124(r5)
    stw r25, 0x124(r8)
    stw r11, 0x128(r8)
    lwz r11, 0x130(r5)
    lwz r25, 0x12c(r5)
    stw r25, 0x12c(r8)
    stw r11, 0x130(r8)
    lwz r11, 0x134(r5)
    stw r11, 0x134(r8)
    lha r11, 0x138(r5)
    sth r11, 0x138(r8)
    lha r11, 0x13a(r5)
    sth r11, 0x13a(r8)
    lfs f0, 0x13c(r5)
    stfs f0, 0x13c(r8)
    lfs f0, 0x140(r5)
    stfs f0, 0x140(r8)
    lfs f0, 0x144(r5)
    stfs f0, 0x144(r8)
    lfs f0, 0x148(r5)
    stfs f0, 0x148(r8)
    bge lbl_fn_804DF4BC_00000618
    addi r24, r8, 0x318
    li r11, 0x0
    li r25, 0x0
    bgt lbl_fn_804DF4BC_00000408
    li r25, 0x1
lbl_fn_804DF4BC_00000408:
    cmpwi r25, 0x0
    beq lbl_fn_804DF4BC_00000414
    li r11, 0x1
lbl_fn_804DF4BC_00000414:
    cmpwi r11, 0x0
    beq lbl_fn_804DF4BC_000005C0
    addi r11, r24, 0x9f
    subf r11, r7, r11
    divwu r11, r11, r0
    mtctr r11
    cmplw r7, r24
    bge lbl_fn_804DF4BC_000005C0
lbl_fn_804DF4BC_00000434:
    lha r11, 0x0(r6)
    sth r11, 0x0(r7)
    lha r11, 0x2(r6)
    sth r11, 0x2(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    lha r11, 0x14(r6)
    sth r11, 0x14(r7)
    lha r11, 0x16(r6)
    sth r11, 0x16(r7)
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r7)
    lfs f0, 0x1c(r6)
    stfs f0, 0x1c(r7)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r7)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r7)
    lha r11, 0x28(r6)
    sth r11, 0x28(r7)
    lha r11, 0x2a(r6)
    sth r11, 0x2a(r7)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r7)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r7)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r7)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r7)
    lha r11, 0x3c(r6)
    sth r11, 0x3c(r7)
    lha r11, 0x3e(r6)
    sth r11, 0x3e(r7)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r7)
    lfs f0, 0x44(r6)
    stfs f0, 0x44(r7)
    lfs f0, 0x48(r6)
    stfs f0, 0x48(r7)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r7)
    lha r11, 0x50(r6)
    sth r11, 0x50(r7)
    lha r11, 0x52(r6)
    sth r11, 0x52(r7)
    lfs f0, 0x54(r6)
    stfs f0, 0x54(r7)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r7)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r7)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r7)
    lha r11, 0x64(r6)
    sth r11, 0x64(r7)
    lha r11, 0x66(r6)
    sth r11, 0x66(r7)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r7)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r7)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r7)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r7)
    lha r11, 0x78(r6)
    sth r11, 0x78(r7)
    lha r11, 0x7a(r6)
    sth r11, 0x7a(r7)
    lfs f0, 0x7c(r6)
    stfs f0, 0x7c(r7)
    lfs f0, 0x80(r6)
    stfs f0, 0x80(r7)
    lfs f0, 0x84(r6)
    stfs f0, 0x84(r7)
    lfs f0, 0x88(r6)
    stfs f0, 0x88(r7)
    lha r11, 0x8c(r6)
    sth r11, 0x8c(r7)
    lha r11, 0x8e(r6)
    sth r11, 0x8e(r7)
    lfs f0, 0x90(r6)
    stfs f0, 0x90(r7)
    lfs f0, 0x94(r6)
    stfs f0, 0x94(r7)
    lfs f0, 0x98(r6)
    stfs f0, 0x98(r7)
    lfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    stfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    bdnz lbl_fn_804DF4BC_00000434
lbl_fn_804DF4BC_000005C0:
    addi r25, r8, 0x3b8
    addi r11, r25, 0x13
    subf r11, r7, r11
    divwu r11, r11, r26
    mtctr r11
    cmplw r7, r25
    bge lbl_fn_804DF4BC_00000618
lbl_fn_804DF4BC_000005DC:
    lha r11, 0x0(r6)
    sth r11, 0x0(r7)
    lha r11, 0x2(r6)
    sth r11, 0x2(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r7)
    lfs f0, 0x10(r6)
    addi r6, r6, 0x14
    stfs f0, 0x10(r7)
    addi r7, r7, 0x14
    bdnz lbl_fn_804DF4BC_000005DC
lbl_fn_804DF4BC_00000618:
    lwz r6, 0x3b8(r5)
    addi r7, r8, 0x460
    stw r6, 0x3b8(r8)
    addi r6, r8, 0x6cc
    cmplw r7, r6
    lwz r11, 0x3c0(r5)
    addi r6, r5, 0x460
    lwz r25, 0x3bc(r5)
    stw r25, 0x3bc(r8)
    stw r11, 0x3c0(r8)
    lwz r11, 0x3c8(r5)
    lwz r25, 0x3c4(r5)
    stw r25, 0x3c4(r8)
    stw r11, 0x3c8(r8)
    lwz r11, 0x3d0(r5)
    lwz r25, 0x3cc(r5)
    stw r25, 0x3cc(r8)
    stw r11, 0x3d0(r8)
    lwz r11, 0x3d8(r5)
    lwz r25, 0x3d4(r5)
    stw r25, 0x3d4(r8)
    stw r11, 0x3d8(r8)
    lwz r11, 0x3e0(r5)
    lwz r25, 0x3dc(r5)
    stw r25, 0x3dc(r8)
    stw r11, 0x3e0(r8)
    lwz r11, 0x3e8(r5)
    lwz r25, 0x3e4(r5)
    stw r25, 0x3e4(r8)
    stw r11, 0x3e8(r8)
    lwz r11, 0x3f0(r5)
    lwz r25, 0x3ec(r5)
    stw r25, 0x3ec(r8)
    stw r11, 0x3f0(r8)
    lwz r11, 0x3f8(r5)
    lwz r25, 0x3f4(r5)
    stw r25, 0x3f4(r8)
    stw r11, 0x3f8(r8)
    lwz r11, 0x3fc(r5)
    stw r11, 0x3fc(r8)
    lhz r11, 0x400(r5)
    sth r11, 0x400(r8)
    lwz r11, 0x404(r5)
    stw r11, 0x404(r8)
    lwz r11, 0x40c(r5)
    lwz r25, 0x408(r5)
    stw r25, 0x408(r8)
    stw r11, 0x40c(r8)
    lwz r11, 0x414(r5)
    lwz r25, 0x410(r5)
    stw r25, 0x410(r8)
    stw r11, 0x414(r8)
    lwz r11, 0x41c(r5)
    lwz r25, 0x418(r5)
    stw r25, 0x418(r8)
    stw r11, 0x41c(r8)
    lwz r11, 0x424(r5)
    lwz r25, 0x420(r5)
    stw r25, 0x420(r8)
    stw r11, 0x424(r8)
    lwz r11, 0x42c(r5)
    lwz r25, 0x428(r5)
    stw r25, 0x428(r8)
    stw r11, 0x42c(r8)
    lwz r11, 0x434(r5)
    lwz r25, 0x430(r5)
    stw r25, 0x430(r8)
    stw r11, 0x434(r8)
    lwz r11, 0x43c(r5)
    lwz r25, 0x438(r5)
    stw r25, 0x438(r8)
    stw r11, 0x43c(r8)
    lwz r11, 0x444(r5)
    lwz r25, 0x440(r5)
    stw r25, 0x440(r8)
    stw r11, 0x444(r8)
    lwz r11, 0x448(r5)
    stw r11, 0x448(r8)
    lha r11, 0x44c(r5)
    sth r11, 0x44c(r8)
    lha r11, 0x44e(r5)
    sth r11, 0x44e(r8)
    lfs f0, 0x450(r5)
    stfs f0, 0x450(r8)
    lfs f0, 0x454(r5)
    stfs f0, 0x454(r8)
    lfs f0, 0x458(r5)
    stfs f0, 0x458(r8)
    lfs f0, 0x45c(r5)
    stfs f0, 0x45c(r8)
    bge lbl_fn_804DF4BC_000009A8
    addi r24, r8, 0x62c
    li r11, 0x0
    li r25, 0x0
    bgt lbl_fn_804DF4BC_00000798
    li r25, 0x1
lbl_fn_804DF4BC_00000798:
    cmpwi r25, 0x0
    beq lbl_fn_804DF4BC_000007A4
    li r11, 0x1
lbl_fn_804DF4BC_000007A4:
    cmpwi r11, 0x0
    beq lbl_fn_804DF4BC_00000950
    addi r11, r24, 0x9f
    subf r11, r7, r11
    divwu r11, r11, r27
    mtctr r11
    cmplw r7, r24
    bge lbl_fn_804DF4BC_00000950
lbl_fn_804DF4BC_000007C4:
    lha r11, 0x0(r6)
    sth r11, 0x0(r7)
    lha r11, 0x2(r6)
    sth r11, 0x2(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    lha r11, 0x14(r6)
    sth r11, 0x14(r7)
    lha r11, 0x16(r6)
    sth r11, 0x16(r7)
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r7)
    lfs f0, 0x1c(r6)
    stfs f0, 0x1c(r7)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r7)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r7)
    lha r11, 0x28(r6)
    sth r11, 0x28(r7)
    lha r11, 0x2a(r6)
    sth r11, 0x2a(r7)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r7)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r7)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r7)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r7)
    lha r11, 0x3c(r6)
    sth r11, 0x3c(r7)
    lha r11, 0x3e(r6)
    sth r11, 0x3e(r7)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r7)
    lfs f0, 0x44(r6)
    stfs f0, 0x44(r7)
    lfs f0, 0x48(r6)
    stfs f0, 0x48(r7)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r7)
    lha r11, 0x50(r6)
    sth r11, 0x50(r7)
    lha r11, 0x52(r6)
    sth r11, 0x52(r7)
    lfs f0, 0x54(r6)
    stfs f0, 0x54(r7)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r7)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r7)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r7)
    lha r11, 0x64(r6)
    sth r11, 0x64(r7)
    lha r11, 0x66(r6)
    sth r11, 0x66(r7)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r7)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r7)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r7)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r7)
    lha r11, 0x78(r6)
    sth r11, 0x78(r7)
    lha r11, 0x7a(r6)
    sth r11, 0x7a(r7)
    lfs f0, 0x7c(r6)
    stfs f0, 0x7c(r7)
    lfs f0, 0x80(r6)
    stfs f0, 0x80(r7)
    lfs f0, 0x84(r6)
    stfs f0, 0x84(r7)
    lfs f0, 0x88(r6)
    stfs f0, 0x88(r7)
    lha r11, 0x8c(r6)
    sth r11, 0x8c(r7)
    lha r11, 0x8e(r6)
    sth r11, 0x8e(r7)
    lfs f0, 0x90(r6)
    stfs f0, 0x90(r7)
    lfs f0, 0x94(r6)
    stfs f0, 0x94(r7)
    lfs f0, 0x98(r6)
    stfs f0, 0x98(r7)
    lfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    stfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    bdnz lbl_fn_804DF4BC_000007C4
lbl_fn_804DF4BC_00000950:
    addi r25, r8, 0x6cc
    addi r11, r25, 0x13
    subf r11, r7, r11
    divwu r11, r11, r28
    mtctr r11
    cmplw r7, r25
    bge lbl_fn_804DF4BC_000009A8
lbl_fn_804DF4BC_0000096C:
    lha r11, 0x0(r6)
    sth r11, 0x0(r7)
    lha r11, 0x2(r6)
    sth r11, 0x2(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r7)
    lfs f0, 0x10(r6)
    addi r6, r6, 0x14
    stfs f0, 0x10(r7)
    addi r7, r7, 0x14
    bdnz lbl_fn_804DF4BC_0000096C
lbl_fn_804DF4BC_000009A8:
    lwz r6, 0x6cc(r5)
    addi r7, r8, 0x774
    stw r6, 0x6cc(r8)
    addi r6, r8, 0x9e0
    cmplw r7, r6
    lwz r11, 0x6d4(r5)
    addi r6, r5, 0x774
    lwz r25, 0x6d0(r5)
    stw r25, 0x6d0(r8)
    stw r11, 0x6d4(r8)
    lwz r11, 0x6dc(r5)
    lwz r25, 0x6d8(r5)
    stw r25, 0x6d8(r8)
    stw r11, 0x6dc(r8)
    lwz r11, 0x6e4(r5)
    lwz r25, 0x6e0(r5)
    stw r25, 0x6e0(r8)
    stw r11, 0x6e4(r8)
    lwz r11, 0x6ec(r5)
    lwz r25, 0x6e8(r5)
    stw r25, 0x6e8(r8)
    stw r11, 0x6ec(r8)
    lwz r11, 0x6f4(r5)
    lwz r25, 0x6f0(r5)
    stw r25, 0x6f0(r8)
    stw r11, 0x6f4(r8)
    lwz r11, 0x6fc(r5)
    lwz r25, 0x6f8(r5)
    stw r25, 0x6f8(r8)
    stw r11, 0x6fc(r8)
    lwz r11, 0x704(r5)
    lwz r25, 0x700(r5)
    stw r25, 0x700(r8)
    stw r11, 0x704(r8)
    lwz r11, 0x70c(r5)
    lwz r25, 0x708(r5)
    stw r25, 0x708(r8)
    stw r11, 0x70c(r8)
    lwz r11, 0x710(r5)
    stw r11, 0x710(r8)
    lhz r11, 0x714(r5)
    sth r11, 0x714(r8)
    lwz r11, 0x718(r5)
    stw r11, 0x718(r8)
    lwz r11, 0x720(r5)
    lwz r25, 0x71c(r5)
    stw r25, 0x71c(r8)
    stw r11, 0x720(r8)
    lwz r11, 0x728(r5)
    lwz r25, 0x724(r5)
    stw r25, 0x724(r8)
    stw r11, 0x728(r8)
    lwz r11, 0x730(r5)
    lwz r25, 0x72c(r5)
    stw r25, 0x72c(r8)
    stw r11, 0x730(r8)
    lwz r11, 0x738(r5)
    lwz r25, 0x734(r5)
    stw r25, 0x734(r8)
    stw r11, 0x738(r8)
    lwz r11, 0x740(r5)
    lwz r25, 0x73c(r5)
    stw r25, 0x73c(r8)
    stw r11, 0x740(r8)
    lwz r11, 0x748(r5)
    lwz r25, 0x744(r5)
    stw r25, 0x744(r8)
    stw r11, 0x748(r8)
    lwz r11, 0x750(r5)
    lwz r25, 0x74c(r5)
    stw r25, 0x74c(r8)
    stw r11, 0x750(r8)
    lwz r11, 0x758(r5)
    lwz r25, 0x754(r5)
    stw r25, 0x754(r8)
    stw r11, 0x758(r8)
    lwz r11, 0x75c(r5)
    stw r11, 0x75c(r8)
    lha r11, 0x760(r5)
    sth r11, 0x760(r8)
    lha r11, 0x762(r5)
    sth r11, 0x762(r8)
    lfs f0, 0x764(r5)
    stfs f0, 0x764(r8)
    lfs f0, 0x768(r5)
    stfs f0, 0x768(r8)
    lfs f0, 0x76c(r5)
    stfs f0, 0x76c(r8)
    lfs f0, 0x770(r5)
    stfs f0, 0x770(r8)
    bge lbl_fn_804DF4BC_00000D38
    addi r24, r8, 0x940
    li r11, 0x0
    li r25, 0x0
    bgt lbl_fn_804DF4BC_00000B28
    li r25, 0x1
lbl_fn_804DF4BC_00000B28:
    cmpwi r25, 0x0
    beq lbl_fn_804DF4BC_00000B34
    li r11, 0x1
lbl_fn_804DF4BC_00000B34:
    cmpwi r11, 0x0
    beq lbl_fn_804DF4BC_00000CE0
    addi r11, r24, 0x9f
    subf r11, r7, r11
    divwu r11, r11, r29
    mtctr r11
    cmplw r7, r24
    bge lbl_fn_804DF4BC_00000CE0
lbl_fn_804DF4BC_00000B54:
    lha r11, 0x0(r6)
    sth r11, 0x0(r7)
    lha r11, 0x2(r6)
    sth r11, 0x2(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    lha r11, 0x14(r6)
    sth r11, 0x14(r7)
    lha r11, 0x16(r6)
    sth r11, 0x16(r7)
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r7)
    lfs f0, 0x1c(r6)
    stfs f0, 0x1c(r7)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r7)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r7)
    lha r11, 0x28(r6)
    sth r11, 0x28(r7)
    lha r11, 0x2a(r6)
    sth r11, 0x2a(r7)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r7)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r7)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r7)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r7)
    lha r11, 0x3c(r6)
    sth r11, 0x3c(r7)
    lha r11, 0x3e(r6)
    sth r11, 0x3e(r7)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r7)
    lfs f0, 0x44(r6)
    stfs f0, 0x44(r7)
    lfs f0, 0x48(r6)
    stfs f0, 0x48(r7)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r7)
    lha r11, 0x50(r6)
    sth r11, 0x50(r7)
    lha r11, 0x52(r6)
    sth r11, 0x52(r7)
    lfs f0, 0x54(r6)
    stfs f0, 0x54(r7)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r7)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r7)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r7)
    lha r11, 0x64(r6)
    sth r11, 0x64(r7)
    lha r11, 0x66(r6)
    sth r11, 0x66(r7)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r7)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r7)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r7)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r7)
    lha r11, 0x78(r6)
    sth r11, 0x78(r7)
    lha r11, 0x7a(r6)
    sth r11, 0x7a(r7)
    lfs f0, 0x7c(r6)
    stfs f0, 0x7c(r7)
    lfs f0, 0x80(r6)
    stfs f0, 0x80(r7)
    lfs f0, 0x84(r6)
    stfs f0, 0x84(r7)
    lfs f0, 0x88(r6)
    stfs f0, 0x88(r7)
    lha r11, 0x8c(r6)
    sth r11, 0x8c(r7)
    lha r11, 0x8e(r6)
    sth r11, 0x8e(r7)
    lfs f0, 0x90(r6)
    stfs f0, 0x90(r7)
    lfs f0, 0x94(r6)
    stfs f0, 0x94(r7)
    lfs f0, 0x98(r6)
    stfs f0, 0x98(r7)
    lfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    stfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    bdnz lbl_fn_804DF4BC_00000B54
lbl_fn_804DF4BC_00000CE0:
    addi r25, r8, 0x9e0
    addi r11, r25, 0x13
    subf r11, r7, r11
    divwu r11, r11, r30
    mtctr r11
    cmplw r7, r25
    bge lbl_fn_804DF4BC_00000D38
lbl_fn_804DF4BC_00000CFC:
    lha r11, 0x0(r6)
    sth r11, 0x0(r7)
    lha r11, 0x2(r6)
    sth r11, 0x2(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r7)
    lfs f0, 0x10(r6)
    addi r6, r6, 0x14
    stfs f0, 0x10(r7)
    addi r7, r7, 0x14
    bdnz lbl_fn_804DF4BC_00000CFC
lbl_fn_804DF4BC_00000D38:
    lwz r6, 0x9e0(r5)
    addi r7, r8, 0xa88
    stw r6, 0x9e0(r8)
    addi r6, r8, 0xcf4
    cmplw r7, r6
    lwz r11, 0x9e8(r5)
    addi r6, r5, 0xa88
    lwz r25, 0x9e4(r5)
    stw r25, 0x9e4(r8)
    stw r11, 0x9e8(r8)
    lwz r11, 0x9f0(r5)
    lwz r25, 0x9ec(r5)
    stw r25, 0x9ec(r8)
    stw r11, 0x9f0(r8)
    lwz r11, 0x9f8(r5)
    lwz r25, 0x9f4(r5)
    stw r25, 0x9f4(r8)
    stw r11, 0x9f8(r8)
    lwz r11, 0xa00(r5)
    lwz r25, 0x9fc(r5)
    stw r25, 0x9fc(r8)
    stw r11, 0xa00(r8)
    lwz r11, 0xa08(r5)
    lwz r25, 0xa04(r5)
    stw r25, 0xa04(r8)
    stw r11, 0xa08(r8)
    lwz r11, 0xa10(r5)
    lwz r25, 0xa0c(r5)
    stw r25, 0xa0c(r8)
    stw r11, 0xa10(r8)
    lwz r11, 0xa18(r5)
    lwz r25, 0xa14(r5)
    stw r25, 0xa14(r8)
    stw r11, 0xa18(r8)
    lwz r11, 0xa20(r5)
    lwz r25, 0xa1c(r5)
    stw r25, 0xa1c(r8)
    stw r11, 0xa20(r8)
    lwz r11, 0xa24(r5)
    stw r11, 0xa24(r8)
    lhz r11, 0xa28(r5)
    sth r11, 0xa28(r8)
    lwz r11, 0xa2c(r5)
    stw r11, 0xa2c(r8)
    lwz r11, 0xa34(r5)
    lwz r25, 0xa30(r5)
    stw r25, 0xa30(r8)
    stw r11, 0xa34(r8)
    lwz r11, 0xa3c(r5)
    lwz r25, 0xa38(r5)
    stw r25, 0xa38(r8)
    stw r11, 0xa3c(r8)
    lwz r11, 0xa44(r5)
    lwz r25, 0xa40(r5)
    stw r25, 0xa40(r8)
    stw r11, 0xa44(r8)
    lwz r11, 0xa4c(r5)
    lwz r25, 0xa48(r5)
    stw r25, 0xa48(r8)
    stw r11, 0xa4c(r8)
    lwz r11, 0xa54(r5)
    lwz r25, 0xa50(r5)
    stw r25, 0xa50(r8)
    stw r11, 0xa54(r8)
    lwz r11, 0xa5c(r5)
    lwz r25, 0xa58(r5)
    stw r25, 0xa58(r8)
    stw r11, 0xa5c(r8)
    lwz r11, 0xa64(r5)
    lwz r25, 0xa60(r5)
    stw r25, 0xa60(r8)
    stw r11, 0xa64(r8)
    lwz r11, 0xa6c(r5)
    lwz r25, 0xa68(r5)
    stw r25, 0xa68(r8)
    stw r11, 0xa6c(r8)
    lwz r11, 0xa70(r5)
    stw r11, 0xa70(r8)
    lha r11, 0xa74(r5)
    sth r11, 0xa74(r8)
    lha r11, 0xa76(r5)
    sth r11, 0xa76(r8)
    lfs f0, 0xa78(r5)
    stfs f0, 0xa78(r8)
    lfs f0, 0xa7c(r5)
    stfs f0, 0xa7c(r8)
    lfs f0, 0xa80(r5)
    stfs f0, 0xa80(r8)
    lfs f0, 0xa84(r5)
    stfs f0, 0xa84(r8)
    bge lbl_fn_804DF4BC_000010C8
    addi r25, r8, 0xc54
    li r11, 0x0
    li r24, 0x0
    bgt lbl_fn_804DF4BC_00000EB8
    li r24, 0x1
lbl_fn_804DF4BC_00000EB8:
    cmpwi r24, 0x0
    beq lbl_fn_804DF4BC_00000EC4
    li r11, 0x1
lbl_fn_804DF4BC_00000EC4:
    cmpwi r11, 0x0
    beq lbl_fn_804DF4BC_00001070
    addi r11, r25, 0x9f
    subf r11, r7, r11
    divwu r11, r11, r12
    mtctr r11
    cmplw r7, r25
    bge lbl_fn_804DF4BC_00001070
lbl_fn_804DF4BC_00000EE4:
    lha r11, 0x0(r6)
    sth r11, 0x0(r7)
    lha r11, 0x2(r6)
    sth r11, 0x2(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    lha r11, 0x14(r6)
    sth r11, 0x14(r7)
    lha r11, 0x16(r6)
    sth r11, 0x16(r7)
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r7)
    lfs f0, 0x1c(r6)
    stfs f0, 0x1c(r7)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r7)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r7)
    lha r11, 0x28(r6)
    sth r11, 0x28(r7)
    lha r11, 0x2a(r6)
    sth r11, 0x2a(r7)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r7)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r7)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r7)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r7)
    lha r11, 0x3c(r6)
    sth r11, 0x3c(r7)
    lha r11, 0x3e(r6)
    sth r11, 0x3e(r7)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r7)
    lfs f0, 0x44(r6)
    stfs f0, 0x44(r7)
    lfs f0, 0x48(r6)
    stfs f0, 0x48(r7)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r7)
    lha r11, 0x50(r6)
    sth r11, 0x50(r7)
    lha r11, 0x52(r6)
    sth r11, 0x52(r7)
    lfs f0, 0x54(r6)
    stfs f0, 0x54(r7)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r7)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r7)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r7)
    lha r11, 0x64(r6)
    sth r11, 0x64(r7)
    lha r11, 0x66(r6)
    sth r11, 0x66(r7)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r7)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r7)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r7)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r7)
    lha r11, 0x78(r6)
    sth r11, 0x78(r7)
    lha r11, 0x7a(r6)
    sth r11, 0x7a(r7)
    lfs f0, 0x7c(r6)
    stfs f0, 0x7c(r7)
    lfs f0, 0x80(r6)
    stfs f0, 0x80(r7)
    lfs f0, 0x84(r6)
    stfs f0, 0x84(r7)
    lfs f0, 0x88(r6)
    stfs f0, 0x88(r7)
    lha r11, 0x8c(r6)
    sth r11, 0x8c(r7)
    lha r11, 0x8e(r6)
    sth r11, 0x8e(r7)
    lfs f0, 0x90(r6)
    stfs f0, 0x90(r7)
    lfs f0, 0x94(r6)
    stfs f0, 0x94(r7)
    lfs f0, 0x98(r6)
    stfs f0, 0x98(r7)
    lfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    stfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    bdnz lbl_fn_804DF4BC_00000EE4
lbl_fn_804DF4BC_00001070:
    addi r25, r8, 0xcf4
    addi r11, r25, 0x13
    subf r11, r7, r11
    divwu r11, r11, r10
    mtctr r11
    cmplw r7, r25
    bge lbl_fn_804DF4BC_000010C8
lbl_fn_804DF4BC_0000108C:
    lha r11, 0x0(r6)
    sth r11, 0x0(r7)
    lha r11, 0x2(r6)
    sth r11, 0x2(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r7)
    lfs f0, 0x10(r6)
    addi r6, r6, 0x14
    stfs f0, 0x10(r7)
    addi r7, r7, 0x14
    bdnz lbl_fn_804DF4BC_0000108C
lbl_fn_804DF4BC_000010C8:
    lwz r6, 0xcf4(r5)
    stw r6, 0xcf4(r8)
    lwz r6, 0xcfc(r5)
    lwz r7, 0xcf8(r5)
    stw r7, 0xcf8(r8)
    stw r6, 0xcfc(r8)
    lwz r6, 0xd04(r5)
    lwz r7, 0xd00(r5)
    stw r7, 0xd00(r8)
    stw r6, 0xd04(r8)
    lwz r6, 0xd0c(r5)
    lwz r7, 0xd08(r5)
    stw r7, 0xd08(r8)
    stw r6, 0xd0c(r8)
    lwz r6, 0xd14(r5)
    lwz r7, 0xd10(r5)
    stw r7, 0xd10(r8)
    stw r6, 0xd14(r8)
    lwz r6, 0xd1c(r5)
    lwz r7, 0xd18(r5)
    stw r7, 0xd18(r8)
    stw r6, 0xd1c(r8)
    lwz r6, 0xd24(r5)
    lwz r7, 0xd20(r5)
    stw r7, 0xd20(r8)
    stw r6, 0xd24(r8)
    lwz r6, 0xd2c(r5)
    lwz r7, 0xd28(r5)
    stw r7, 0xd28(r8)
    stw r6, 0xd2c(r8)
    lwz r6, 0xd34(r5)
    lwz r7, 0xd30(r5)
    stw r7, 0xd30(r8)
    stw r6, 0xd34(r8)
    lwz r6, 0xd3c(r5)
    lwz r7, 0xd38(r5)
    stw r7, 0xd38(r8)
    stw r6, 0xd3c(r8)
    lwz r6, 0xd44(r5)
    lwz r7, 0xd40(r5)
    stw r7, 0xd40(r8)
    stw r6, 0xd44(r8)
    lwz r6, 0xd48(r5)
    stw r6, 0xd48(r8)
    lwz r6, 0xd4c(r5)
    stw r6, 0xd4c(r8)
    lha r6, 0xd50(r5)
    sth r6, 0xd50(r8)
    lbz r6, 0xd52(r5)
    stb r6, 0xd52(r8)
    lbz r6, 0xd53(r5)
    stb r6, 0xd53(r8)
    lwz r6, 0xd54(r5)
    stw r6, 0xd54(r8)
    lwz r5, 0xd58(r5)
    stw r5, 0xd58(r8)
lbl_fn_804DF4BC_000011A8:
    lwz r5, 0x2b88(r3)
    addi r5, r5, 0x1
    stw r5, 0x2b88(r3)
lbl_fn_804DF4BC_000011B4:
    addi r9, r9, 0x1
    addi r4, r4, 0xd5c
lbl_fn_804DF4BC_000011BC:
    lwz r5, 0x5e8(r3)
    cmpw r9, r5
    blt lbl_fn_804DF4BC_000000FC
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804DF4BC_00001278
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_804DF4BC_000011F4
lbl_fn_804DF4BC_000011E0:
    add r5, r3, r4
    addi r6, r6, 0x1
    lwz r0, 0x2c68(r5)
    addi r4, r4, 0xd5c
    stw r0, 0x38e4(r5)
lbl_fn_804DF4BC_000011F4:
    lwz r0, 0x2b88(r3)
    cmpw r6, r0
    blt lbl_fn_804DF4BC_000011E0
    lwz r0, 0x540(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804DF4BC_00001254
    mr r3, r31
    bl fn_804E4C60
    li r7, 0x0
    li r4, 0x0
    b lbl_fn_804DF4BC_00001248
lbl_fn_804DF4BC_00001220:
    add r6, r31, r4
    lwz r0, 0x2c5c(r6)
    extrwi r0, r0, 4, 6
    cmplw r0, r3
    bne lbl_fn_804DF4BC_00001240
    lwz r5, 0x38e4(r6)
    addi r0, r5, 0x3e8
    stw r0, 0x38e4(r6)
lbl_fn_804DF4BC_00001240:
    addi r7, r7, 0x1
    addi r4, r4, 0xd5c
lbl_fn_804DF4BC_00001248:
    lwz r0, 0x2b88(r31)
    cmpw r7, r0
    blt lbl_fn_804DF4BC_00001220
lbl_fn_804DF4BC_00001254:
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r31, 0x2b8c
    addi r5, r1, 0x8
    lwz r0, 0x2b88(r31)
    mulli r0, r0, 0xd5c
    add r4, r31, r0
    addi r4, r4, 0x2b8c
    bl fn_804E0698
lbl_fn_804DF4BC_00001278:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804E0698(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    lis r25, 0x994d
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
    subi r30, r25, 0xcdf
lbl_fn_804E0698_000012BC:
    subf r0, r26, r27
    mulhw r3, r30, r0
    add r0, r3, r0
    srawi r0, r0, 11
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_804E0698_00001594
    cmpwi r7, 0x14
    bgt lbl_fn_804E0698_000012F8
    mr r3, r26
    mr r4, r27
    mr r5, r28
    bl fn_804E2920
    b lbl_fn_804E0698_00001594
lbl_fn_804E0698_000012F8:
    lwz r4, lbl_8087E164
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0xd5c
    add r3, r26, r0
    blt lbl_fn_804E0698_00001338
    li r6, -0x4
lbl_fn_804E0698_00001338:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E164
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0xd5c
    add r4, r26, r0
    blt lbl_fn_804E0698_00001384
    li r6, -0x4
    stw r6, lbl_8087E164
lbl_fn_804E0698_00001384:
    subi r23, r27, 0xd5c
    mr r6, r28
    mr r5, r23
    bl fn_804E2844
    mr r29, r26
    mr r24, r23
    b lbl_fn_804E0698_000013A4
lbl_fn_804E0698_000013A0:
    addi r29, r29, 0xd5c
lbl_fn_804E0698_000013A4:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_804E09B0
    cmpwi r3, 0x0
    bne lbl_fn_804E0698_000013A0
lbl_fn_804E0698_000013BC:
    subi r24, r24, 0xd5c
    cmplw r29, r24
    beq lbl_fn_804E0698_000013E0
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E0698_000013BC
lbl_fn_804E0698_000013E0:
    cmplw r29, r24
    bge lbl_fn_804E0698_00001450
    mr r3, r29
    mr r4, r24
    bl fn_804E0CE8
    addi r29, r29, 0xd5c
    b lbl_fn_804E0698_00001400
lbl_fn_804E0698_000013FC:
    addi r29, r29, 0xd5c
lbl_fn_804E0698_00001400:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_804E09B0
    cmpwi r3, 0x0
    bne lbl_fn_804E0698_000013FC
lbl_fn_804E0698_00001418:
    subi r24, r24, 0xd5c
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E0698_00001418
    cmplw r29, r24
    bge lbl_fn_804E0698_00001450
    mr r3, r29
    mr r4, r24
    bl fn_804E0CE8
    addi r29, r29, 0xd5c
    b lbl_fn_804E0698_00001400
lbl_fn_804E0698_00001450:
    cmplw r29, r26
    bne lbl_fn_804E0698_00001528
    mr r3, r29
    mr r4, r23
    bl fn_804E0CE8
    subi r24, r27, 0xd5c
    mr r3, r28
    mr r4, r26
    addi r29, r29, 0xd5c
    mr r5, r24
    bl fn_804E09B0
    cmpwi r3, 0x0
    bne lbl_fn_804E0698_000014C0
    b lbl_fn_804E0698_0000148C
lbl_fn_804E0698_00001488:
    addi r29, r29, 0xd5c
lbl_fn_804E0698_0000148C:
    cmplw r29, r27
    beq lbl_fn_804E0698_000014AC
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E0698_00001488
lbl_fn_804E0698_000014AC:
    cmplw r29, r24
    bge lbl_fn_804E0698_000014C0
    mr r3, r29
    mr r4, r24
    bl fn_804E0CE8
lbl_fn_804E0698_000014C0:
    cmplw r29, r24
    bge lbl_fn_804E0698_00001520
    b lbl_fn_804E0698_000014D0
lbl_fn_804E0698_000014CC:
    addi r29, r29, 0xd5c
lbl_fn_804E0698_000014D0:
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E0698_000014CC
lbl_fn_804E0698_000014E8:
    subi r24, r24, 0xd5c
    mr r3, r28
    mr r4, r26
    mr r5, r24
    bl fn_804E09B0
    cmpwi r3, 0x0
    bne lbl_fn_804E0698_000014E8
    cmplw r29, r24
    bge lbl_fn_804E0698_00001520
    mr r3, r29
    mr r4, r24
    bl fn_804E0CE8
    addi r29, r29, 0xd5c
    b lbl_fn_804E0698_000014D0
lbl_fn_804E0698_00001520:
    mr r26, r29
    b lbl_fn_804E0698_000012BC
lbl_fn_804E0698_00001528:
    subf r4, r26, r29
    subi r3, r25, 0xcdf
    mulhw r5, r3, r4
    subf r0, r29, r27
    mulhw r3, r3, r0
    add r4, r5, r4
    srawi r4, r4, 11
    add r0, r3, r0
    srwi r5, r4, 31
    srawi r0, r0, 11
    srwi r3, r0, 31
    add r4, r4, r5
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_804E0698_0000157C
    mr r3, r26
    mr r4, r29
    mr r5, r28
    bl fn_804E09D0
    mr r26, r29
    b lbl_fn_804E0698_000012BC
lbl_fn_804E0698_0000157C:
    mr r3, r29
    mr r4, r27
    mr r5, r28
    bl fn_804E09D0
    mr r27, r29
    b lbl_fn_804E0698_000012BC
lbl_fn_804E0698_00001594:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804E09B0(void)
{
    nofralloc
    lwz r4, 0xd58(r4)
    lwz r0, 0xd58(r5)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_804E09D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    lis r25, 0x994d
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
    subi r30, r25, 0xcdf
lbl_fn_804E09D0_000015F4:
    subf r0, r26, r27
    mulhw r3, r30, r0
    add r0, r3, r0
    srawi r0, r0, 11
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_804E09D0_000018CC
    cmpwi r7, 0x14
    bgt lbl_fn_804E09D0_00001630
    mr r3, r26
    mr r4, r27
    mr r5, r28
    bl fn_804E2920
    b lbl_fn_804E09D0_000018CC
lbl_fn_804E09D0_00001630:
    lwz r4, lbl_8087E168
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0xd5c
    add r3, r26, r0
    blt lbl_fn_804E09D0_00001670
    li r6, -0x4
lbl_fn_804E09D0_00001670:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E168
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0xd5c
    add r4, r26, r0
    blt lbl_fn_804E09D0_000016BC
    li r6, -0x4
    stw r6, lbl_8087E168
lbl_fn_804E09D0_000016BC:
    subi r23, r27, 0xd5c
    mr r6, r28
    mr r5, r23
    bl fn_804E2844
    mr r29, r26
    mr r24, r23
    b lbl_fn_804E09D0_000016DC
lbl_fn_804E09D0_000016D8:
    addi r29, r29, 0xd5c
lbl_fn_804E09D0_000016DC:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_804E09B0
    cmpwi r3, 0x0
    bne lbl_fn_804E09D0_000016D8
lbl_fn_804E09D0_000016F4:
    subi r24, r24, 0xd5c
    cmplw r29, r24
    beq lbl_fn_804E09D0_00001718
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E09D0_000016F4
lbl_fn_804E09D0_00001718:
    cmplw r29, r24
    bge lbl_fn_804E09D0_00001788
    mr r3, r29
    mr r4, r24
    bl fn_804E0CE8
    addi r29, r29, 0xd5c
    b lbl_fn_804E09D0_00001738
lbl_fn_804E09D0_00001734:
    addi r29, r29, 0xd5c
lbl_fn_804E09D0_00001738:
    mr r3, r28
    mr r4, r29
    mr r5, r23
    bl fn_804E09B0
    cmpwi r3, 0x0
    bne lbl_fn_804E09D0_00001734
lbl_fn_804E09D0_00001750:
    subi r24, r24, 0xd5c
    mr r3, r28
    mr r4, r24
    mr r5, r23
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E09D0_00001750
    cmplw r29, r24
    bge lbl_fn_804E09D0_00001788
    mr r3, r29
    mr r4, r24
    bl fn_804E0CE8
    addi r29, r29, 0xd5c
    b lbl_fn_804E09D0_00001738
lbl_fn_804E09D0_00001788:
    cmplw r29, r26
    bne lbl_fn_804E09D0_00001860
    mr r3, r29
    mr r4, r23
    bl fn_804E0CE8
    subi r24, r27, 0xd5c
    mr r3, r28
    mr r4, r26
    addi r29, r29, 0xd5c
    mr r5, r24
    bl fn_804E09B0
    cmpwi r3, 0x0
    bne lbl_fn_804E09D0_000017F8
    b lbl_fn_804E09D0_000017C4
lbl_fn_804E09D0_000017C0:
    addi r29, r29, 0xd5c
lbl_fn_804E09D0_000017C4:
    cmplw r29, r27
    beq lbl_fn_804E09D0_000017E4
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E09D0_000017C0
lbl_fn_804E09D0_000017E4:
    cmplw r29, r24
    bge lbl_fn_804E09D0_000017F8
    mr r3, r29
    mr r4, r24
    bl fn_804E0CE8
lbl_fn_804E09D0_000017F8:
    cmplw r29, r24
    bge lbl_fn_804E09D0_00001858
    b lbl_fn_804E09D0_00001808
lbl_fn_804E09D0_00001804:
    addi r29, r29, 0xd5c
lbl_fn_804E09D0_00001808:
    mr r3, r28
    mr r4, r26
    mr r5, r29
    bl fn_804E09B0
    cmpwi r3, 0x0
    beq lbl_fn_804E09D0_00001804
lbl_fn_804E09D0_00001820:
    subi r24, r24, 0xd5c
    mr r3, r28
    mr r4, r26
    mr r5, r24
    bl fn_804E09B0
    cmpwi r3, 0x0
    bne lbl_fn_804E09D0_00001820
    cmplw r29, r24
    bge lbl_fn_804E09D0_00001858
    mr r3, r29
    mr r4, r24
    bl fn_804E0CE8
    addi r29, r29, 0xd5c
    b lbl_fn_804E09D0_00001808
lbl_fn_804E09D0_00001858:
    mr r26, r29
    b lbl_fn_804E09D0_000015F4
lbl_fn_804E09D0_00001860:
    subf r4, r26, r29
    subi r3, r25, 0xcdf
    mulhw r5, r3, r4
    subf r0, r29, r27
    mulhw r3, r3, r0
    add r4, r5, r4
    srawi r4, r4, 11
    add r0, r3, r0
    srwi r5, r4, 31
    srawi r0, r0, 11
    srwi r3, r0, 31
    add r4, r4, r5
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_804E09D0_000018B4
    mr r3, r26
    mr r4, r29
    mr r5, r28
    bl fn_804E09D0
    mr r26, r29
    b lbl_fn_804E09D0_000015F4
lbl_fn_804E09D0_000018B4:
    mr r3, r29
    mr r4, r27
    mr r5, r28
    bl fn_804E09D0
    mr r27, r29
    b lbl_fn_804E09D0_000015F4
lbl_fn_804E09D0_000018CC:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804E0CE8(void)
{
    nofralloc
    stwu r1, -0xd80(r1)
    mflr r0
    stw r0, 0xd84(r1)
    stw r31, 0xd7c(r1)
    stw r30, 0xd78(r1)
    stw r29, 0xd74(r1)
    lwz r0, 0x0(r3)
    mr r30, r3
    stw r0, 0x8(r1)
    mr r31, r4
    lwz r5, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r0, 0x10(r1)
    stw r5, 0xc(r1)
    lwz r5, 0xc(r3)
    lwz r0, 0x10(r3)
    stw r0, 0x18(r1)
    stw r5, 0x14(r1)
    lwz r5, 0x14(r3)
    lwz r0, 0x18(r3)
    stw r0, 0x20(r1)
    stw r5, 0x1c(r1)
    lwz r5, 0x1c(r3)
    lwz r0, 0x20(r3)
    stw r0, 0x28(r1)
    stw r5, 0x24(r1)
    lwz r5, 0x24(r3)
    lwz r0, 0x28(r3)
    stw r0, 0x30(r1)
    stw r5, 0x2c(r1)
    lwz r5, 0x2c(r3)
    lwz r0, 0x30(r3)
    stw r0, 0x38(r1)
    stw r5, 0x34(r1)
    lwz r0, 0x34(r3)
    stw r0, 0x3c(r1)
    lwz r0, 0x38(r3)
    stw r0, 0x40(r1)
    lfs f0, 0x3c(r3)
    stfs f0, 0x44(r1)
    lfs f0, 0x40(r3)
    stfs f0, 0x48(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x4c(r1)
    lfs f0, 0x48(r3)
    stfs f0, 0x50(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x58(r1)
    lwz r0, 0x54(r3)
    stw r0, 0x5c(r1)
    lwz r5, 0x58(r3)
    lwz r0, 0x5c(r3)
    stw r0, 0x64(r1)
    stw r5, 0x60(r1)
    lwz r5, 0x60(r3)
    lwz r0, 0x64(r3)
    stw r0, 0x6c(r1)
    stw r5, 0x68(r1)
    lwz r5, 0x68(r3)
    lwz r0, 0x6c(r3)
    stw r0, 0x74(r1)
    stw r5, 0x70(r1)
    lwz r5, 0x70(r3)
    lwz r0, 0x74(r3)
    stw r0, 0x7c(r1)
    stw r5, 0x78(r1)
    lwz r5, 0x78(r3)
    lwz r0, 0x7c(r3)
    stw r0, 0x84(r1)
    stw r5, 0x80(r1)
    lwz r5, 0x80(r3)
    lwz r0, 0x84(r3)
    stw r0, 0x8c(r1)
    stw r5, 0x88(r1)
    lwz r5, 0x88(r3)
    lwz r0, 0x8c(r3)
    stw r0, 0x94(r1)
    stw r5, 0x90(r1)
    lwz r5, 0x90(r3)
    lwz r0, 0x94(r3)
    stw r0, 0x9c(r1)
    stw r5, 0x98(r1)
    lwz r5, 0x98(r3)
    lwz r0, 0x9c(r3)
    stw r0, 0xa4(r1)
    stw r5, 0xa0(r1)
    lwz r5, 0xa0(r3)
    lwz r0, 0xa4(r3)
    stw r0, 0xac(r1)
    stw r5, 0xa8(r1)
    lwz r5, 0xa8(r3)
    lwz r0, 0xac(r3)
    stw r0, 0xb4(r1)
    stw r5, 0xb0(r1)
    lwz r5, 0xb0(r3)
    lwz r0, 0xb4(r3)
    stw r0, 0xbc(r1)
    stw r5, 0xb8(r1)
    lwz r5, 0xb8(r3)
    lwz r0, 0xbc(r3)
    stw r0, 0xc4(r1)
    stw r5, 0xc0(r1)
    lwz r5, 0xc0(r3)
    lwz r0, 0xc4(r3)
    stw r0, 0xcc(r1)
    stw r5, 0xc8(r1)
    lwz r0, 0xc8(r3)
    stw r0, 0xd0(r1)
    lbz r0, 0xcc(r3)
    addi r5, r1, 0x154
    stb r0, 0xd4(r1)
    addi r0, r1, 0x3c0
    cmplw r5, r0
    addi r6, r3, 0x14c
    lwz r0, 0xd0(r3)
    stw r0, 0xd8(r1)
    lwz r0, 0xd4(r3)
    stw r0, 0xdc(r1)
    lwz r0, 0xd8(r3)
    stw r0, 0xe0(r1)
    lwz r0, 0xdc(r3)
    stw r0, 0xe4(r1)
    lwz r0, 0xe0(r3)
    stw r0, 0xe8(r1)
    lwz r0, 0xe4(r3)
    stw r0, 0xec(r1)
    lwz r0, 0xe8(r3)
    stw r0, 0xf0(r1)
    lhz r0, 0xec(r3)
    sth r0, 0xf4(r1)
    lwz r0, 0xf0(r3)
    stw r0, 0xf8(r1)
    lwz r7, 0xf4(r3)
    lwz r0, 0xf8(r3)
    stw r0, 0x100(r1)
    stw r7, 0xfc(r1)
    lwz r7, 0xfc(r3)
    lwz r0, 0x100(r3)
    stw r0, 0x108(r1)
    stw r7, 0x104(r1)
    lwz r7, 0x104(r3)
    lwz r0, 0x108(r3)
    stw r0, 0x110(r1)
    stw r7, 0x10c(r1)
    lwz r7, 0x10c(r3)
    lwz r0, 0x110(r3)
    stw r0, 0x118(r1)
    stw r7, 0x114(r1)
    lwz r7, 0x114(r3)
    lwz r0, 0x118(r3)
    stw r0, 0x120(r1)
    stw r7, 0x11c(r1)
    lwz r7, 0x11c(r3)
    lwz r0, 0x120(r3)
    stw r0, 0x128(r1)
    stw r7, 0x124(r1)
    lwz r7, 0x124(r3)
    lwz r0, 0x128(r3)
    stw r0, 0x130(r1)
    stw r7, 0x12c(r1)
    lwz r7, 0x12c(r3)
    lwz r0, 0x130(r3)
    stw r0, 0x138(r1)
    stw r7, 0x134(r1)
    lwz r0, 0x134(r3)
    stw r0, 0x13c(r1)
    lha r0, 0x138(r3)
    sth r0, 0x140(r1)
    lha r0, 0x13a(r3)
    sth r0, 0x142(r1)
    lfs f0, 0x13c(r3)
    stfs f0, 0x144(r1)
    lfs f0, 0x140(r3)
    stfs f0, 0x148(r1)
    lfs f0, 0x144(r3)
    stfs f0, 0x14c(r1)
    lfs f0, 0x148(r3)
    stfs f0, 0x150(r1)
    bge lbl_fn_804E0CE8_00001DE0
    addi r8, r1, 0x320
    li r0, 0x0
    li r7, 0x0
    bgt lbl_fn_804E0CE8_00001BC8
    li r7, 0x1
lbl_fn_804E0CE8_00001BC8:
    cmpwi r7, 0x0
    beq lbl_fn_804E0CE8_00001BD4
    li r0, 0x1
lbl_fn_804E0CE8_00001BD4:
    cmpwi r0, 0x0
    beq lbl_fn_804E0CE8_00001D84
    addi r7, r8, 0x9f
    li r0, 0xa0
    subf r7, r5, r7
    divwu r7, r7, r0
    mtctr r7
    cmplw r5, r8
    bge lbl_fn_804E0CE8_00001D84
lbl_fn_804E0CE8_00001BF8:
    lha r0, 0x0(r6)
    sth r0, 0x0(r5)
    lha r0, 0x2(r6)
    sth r0, 0x2(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r5)
    lha r0, 0x14(r6)
    sth r0, 0x14(r5)
    lha r0, 0x16(r6)
    sth r0, 0x16(r5)
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r5)
    lfs f0, 0x1c(r6)
    stfs f0, 0x1c(r5)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r5)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r5)
    lha r0, 0x28(r6)
    sth r0, 0x28(r5)
    lha r0, 0x2a(r6)
    sth r0, 0x2a(r5)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r5)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r5)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r5)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r5)
    lha r0, 0x3c(r6)
    sth r0, 0x3c(r5)
    lha r0, 0x3e(r6)
    sth r0, 0x3e(r5)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r5)
    lfs f0, 0x44(r6)
    stfs f0, 0x44(r5)
    lfs f0, 0x48(r6)
    stfs f0, 0x48(r5)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r5)
    lha r0, 0x50(r6)
    sth r0, 0x50(r5)
    lha r0, 0x52(r6)
    sth r0, 0x52(r5)
    lfs f0, 0x54(r6)
    stfs f0, 0x54(r5)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r5)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r5)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r5)
    lha r0, 0x64(r6)
    sth r0, 0x64(r5)
    lha r0, 0x66(r6)
    sth r0, 0x66(r5)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r5)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r5)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r5)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r5)
    lha r0, 0x78(r6)
    sth r0, 0x78(r5)
    lha r0, 0x7a(r6)
    sth r0, 0x7a(r5)
    lfs f0, 0x7c(r6)
    stfs f0, 0x7c(r5)
    lfs f0, 0x80(r6)
    stfs f0, 0x80(r5)
    lfs f0, 0x84(r6)
    stfs f0, 0x84(r5)
    lfs f0, 0x88(r6)
    stfs f0, 0x88(r5)
    lha r0, 0x8c(r6)
    sth r0, 0x8c(r5)
    lha r0, 0x8e(r6)
    sth r0, 0x8e(r5)
    lfs f0, 0x90(r6)
    stfs f0, 0x90(r5)
    lfs f0, 0x94(r6)
    stfs f0, 0x94(r5)
    lfs f0, 0x98(r6)
    stfs f0, 0x98(r5)
    lfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    stfs f0, 0x9c(r5)
    addi r5, r5, 0xa0
    bdnz lbl_fn_804E0CE8_00001BF8
lbl_fn_804E0CE8_00001D84:
    addi r8, r1, 0x3c0
    li r0, 0x14
    addi r7, r8, 0x13
    subf r7, r5, r7
    divwu r7, r7, r0
    mtctr r7
    cmplw r5, r8
    bge lbl_fn_804E0CE8_00001DE0
lbl_fn_804E0CE8_00001DA4:
    lha r0, 0x0(r6)
    sth r0, 0x0(r5)
    lha r0, 0x2(r6)
    sth r0, 0x2(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r6)
    addi r6, r6, 0x14
    stfs f0, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_804E0CE8_00001DA4
lbl_fn_804E0CE8_00001DE0:
    lwz r0, 0x3b8(r3)
    addi r5, r1, 0x468
    stw r0, 0x3c0(r1)
    addi r0, r1, 0x6d4
    cmplw r5, r0
    addi r6, r3, 0x460
    lwz r7, 0x3bc(r3)
    lwz r0, 0x3c0(r3)
    stw r0, 0x3c8(r1)
    stw r7, 0x3c4(r1)
    lwz r7, 0x3c4(r3)
    lwz r0, 0x3c8(r3)
    stw r0, 0x3d0(r1)
    stw r7, 0x3cc(r1)
    lwz r7, 0x3cc(r3)
    lwz r0, 0x3d0(r3)
    stw r0, 0x3d8(r1)
    stw r7, 0x3d4(r1)
    lwz r7, 0x3d4(r3)
    lwz r0, 0x3d8(r3)
    stw r0, 0x3e0(r1)
    stw r7, 0x3dc(r1)
    lwz r7, 0x3dc(r3)
    lwz r0, 0x3e0(r3)
    stw r0, 0x3e8(r1)
    stw r7, 0x3e4(r1)
    lwz r7, 0x3e4(r3)
    lwz r0, 0x3e8(r3)
    stw r0, 0x3f0(r1)
    stw r7, 0x3ec(r1)
    lwz r7, 0x3ec(r3)
    lwz r0, 0x3f0(r3)
    stw r0, 0x3f8(r1)
    stw r7, 0x3f4(r1)
    lwz r7, 0x3f4(r3)
    lwz r0, 0x3f8(r3)
    stw r0, 0x400(r1)
    stw r7, 0x3fc(r1)
    lwz r0, 0x3fc(r3)
    stw r0, 0x404(r1)
    lhz r0, 0x400(r3)
    sth r0, 0x408(r1)
    lwz r0, 0x404(r3)
    stw r0, 0x40c(r1)
    lwz r7, 0x408(r3)
    lwz r0, 0x40c(r3)
    stw r0, 0x414(r1)
    stw r7, 0x410(r1)
    lwz r7, 0x410(r3)
    lwz r0, 0x414(r3)
    stw r0, 0x41c(r1)
    stw r7, 0x418(r1)
    lwz r7, 0x418(r3)
    lwz r0, 0x41c(r3)
    stw r0, 0x424(r1)
    stw r7, 0x420(r1)
    lwz r7, 0x420(r3)
    lwz r0, 0x424(r3)
    stw r0, 0x42c(r1)
    stw r7, 0x428(r1)
    lwz r7, 0x428(r3)
    lwz r0, 0x42c(r3)
    stw r0, 0x434(r1)
    stw r7, 0x430(r1)
    lwz r7, 0x430(r3)
    lwz r0, 0x434(r3)
    stw r0, 0x43c(r1)
    stw r7, 0x438(r1)
    lwz r7, 0x438(r3)
    lwz r0, 0x43c(r3)
    stw r0, 0x444(r1)
    stw r7, 0x440(r1)
    lwz r7, 0x440(r3)
    lwz r0, 0x444(r3)
    stw r0, 0x44c(r1)
    stw r7, 0x448(r1)
    lwz r0, 0x448(r3)
    stw r0, 0x450(r1)
    lha r0, 0x44c(r3)
    sth r0, 0x454(r1)
    lha r0, 0x44e(r3)
    sth r0, 0x456(r1)
    lfs f0, 0x450(r3)
    stfs f0, 0x458(r1)
    lfs f0, 0x454(r3)
    stfs f0, 0x45c(r1)
    lfs f0, 0x458(r3)
    stfs f0, 0x460(r1)
    lfs f0, 0x45c(r3)
    stfs f0, 0x464(r1)
    bge lbl_fn_804E0CE8_00002178
    addi r8, r1, 0x634
    li r0, 0x0
    li r7, 0x0
    bgt lbl_fn_804E0CE8_00001F60
    li r7, 0x1
lbl_fn_804E0CE8_00001F60:
    cmpwi r7, 0x0
    beq lbl_fn_804E0CE8_00001F6C
    li r0, 0x1
lbl_fn_804E0CE8_00001F6C:
    cmpwi r0, 0x0
    beq lbl_fn_804E0CE8_0000211C
    addi r7, r8, 0x9f
    li r0, 0xa0
    subf r7, r5, r7
    divwu r7, r7, r0
    mtctr r7
    cmplw r5, r8
    bge lbl_fn_804E0CE8_0000211C
lbl_fn_804E0CE8_00001F90:
    lha r0, 0x0(r6)
    sth r0, 0x0(r5)
    lha r0, 0x2(r6)
    sth r0, 0x2(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r5)
    lha r0, 0x14(r6)
    sth r0, 0x14(r5)
    lha r0, 0x16(r6)
    sth r0, 0x16(r5)
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r5)
    lfs f0, 0x1c(r6)
    stfs f0, 0x1c(r5)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r5)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r5)
    lha r0, 0x28(r6)
    sth r0, 0x28(r5)
    lha r0, 0x2a(r6)
    sth r0, 0x2a(r5)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r5)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r5)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r5)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r5)
    lha r0, 0x3c(r6)
    sth r0, 0x3c(r5)
    lha r0, 0x3e(r6)
    sth r0, 0x3e(r5)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r5)
    lfs f0, 0x44(r6)
    stfs f0, 0x44(r5)
    lfs f0, 0x48(r6)
    stfs f0, 0x48(r5)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r5)
    lha r0, 0x50(r6)
    sth r0, 0x50(r5)
    lha r0, 0x52(r6)
    sth r0, 0x52(r5)
    lfs f0, 0x54(r6)
    stfs f0, 0x54(r5)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r5)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r5)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r5)
    lha r0, 0x64(r6)
    sth r0, 0x64(r5)
    lha r0, 0x66(r6)
    sth r0, 0x66(r5)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r5)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r5)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r5)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r5)
    lha r0, 0x78(r6)
    sth r0, 0x78(r5)
    lha r0, 0x7a(r6)
    sth r0, 0x7a(r5)
    lfs f0, 0x7c(r6)
    stfs f0, 0x7c(r5)
    lfs f0, 0x80(r6)
    stfs f0, 0x80(r5)
    lfs f0, 0x84(r6)
    stfs f0, 0x84(r5)
    lfs f0, 0x88(r6)
    stfs f0, 0x88(r5)
    lha r0, 0x8c(r6)
    sth r0, 0x8c(r5)
    lha r0, 0x8e(r6)
    sth r0, 0x8e(r5)
    lfs f0, 0x90(r6)
    stfs f0, 0x90(r5)
    lfs f0, 0x94(r6)
    stfs f0, 0x94(r5)
    lfs f0, 0x98(r6)
    stfs f0, 0x98(r5)
    lfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    stfs f0, 0x9c(r5)
    addi r5, r5, 0xa0
    bdnz lbl_fn_804E0CE8_00001F90
lbl_fn_804E0CE8_0000211C:
    addi r8, r1, 0x6d4
    li r0, 0x14
    addi r7, r8, 0x13
    subf r7, r5, r7
    divwu r7, r7, r0
    mtctr r7
    cmplw r5, r8
    bge lbl_fn_804E0CE8_00002178
lbl_fn_804E0CE8_0000213C:
    lha r0, 0x0(r6)
    sth r0, 0x0(r5)
    lha r0, 0x2(r6)
    sth r0, 0x2(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r6)
    addi r6, r6, 0x14
    stfs f0, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_804E0CE8_0000213C
lbl_fn_804E0CE8_00002178:
    lwz r0, 0x6cc(r3)
    addi r5, r1, 0x77c
    stw r0, 0x6d4(r1)
    addi r0, r1, 0x9e8
    cmplw r5, r0
    addi r6, r3, 0x774
    lwz r7, 0x6d0(r3)
    lwz r0, 0x6d4(r3)
    stw r0, 0x6dc(r1)
    stw r7, 0x6d8(r1)
    lwz r7, 0x6d8(r3)
    lwz r0, 0x6dc(r3)
    stw r0, 0x6e4(r1)
    stw r7, 0x6e0(r1)
    lwz r7, 0x6e0(r3)
    lwz r0, 0x6e4(r3)
    stw r0, 0x6ec(r1)
    stw r7, 0x6e8(r1)
    lwz r7, 0x6e8(r3)
    lwz r0, 0x6ec(r3)
    stw r0, 0x6f4(r1)
    stw r7, 0x6f0(r1)
    lwz r7, 0x6f0(r3)
    lwz r0, 0x6f4(r3)
    stw r0, 0x6fc(r1)
    stw r7, 0x6f8(r1)
    lwz r7, 0x6f8(r3)
    lwz r0, 0x6fc(r3)
    stw r0, 0x704(r1)
    stw r7, 0x700(r1)
    lwz r7, 0x700(r3)
    lwz r0, 0x704(r3)
    stw r0, 0x70c(r1)
    stw r7, 0x708(r1)
    lwz r7, 0x708(r3)
    lwz r0, 0x70c(r3)
    stw r0, 0x714(r1)
    stw r7, 0x710(r1)
    lwz r0, 0x710(r3)
    stw r0, 0x718(r1)
    lhz r0, 0x714(r3)
    sth r0, 0x71c(r1)
    lwz r0, 0x718(r3)
    stw r0, 0x720(r1)
    lwz r7, 0x71c(r3)
    lwz r0, 0x720(r3)
    stw r0, 0x728(r1)
    stw r7, 0x724(r1)
    lwz r7, 0x724(r3)
    lwz r0, 0x728(r3)
    stw r0, 0x730(r1)
    stw r7, 0x72c(r1)
    lwz r7, 0x72c(r3)
    lwz r0, 0x730(r3)
    stw r0, 0x738(r1)
    stw r7, 0x734(r1)
    lwz r7, 0x734(r3)
    lwz r0, 0x738(r3)
    stw r0, 0x740(r1)
    stw r7, 0x73c(r1)
    lwz r7, 0x73c(r3)
    lwz r0, 0x740(r3)
    stw r0, 0x748(r1)
    stw r7, 0x744(r1)
    lwz r7, 0x744(r3)
    lwz r0, 0x748(r3)
    stw r0, 0x750(r1)
    stw r7, 0x74c(r1)
    lwz r7, 0x74c(r3)
    lwz r0, 0x750(r3)
    stw r0, 0x758(r1)
    stw r7, 0x754(r1)
    lwz r7, 0x754(r3)
    lwz r0, 0x758(r3)
    stw r0, 0x760(r1)
    stw r7, 0x75c(r1)
    lwz r0, 0x75c(r3)
    stw r0, 0x764(r1)
    lha r0, 0x760(r3)
    sth r0, 0x768(r1)
    lha r0, 0x762(r3)
    sth r0, 0x76a(r1)
    lfs f0, 0x764(r3)
    stfs f0, 0x76c(r1)
    lfs f0, 0x768(r3)
    stfs f0, 0x770(r1)
    lfs f0, 0x76c(r3)
    stfs f0, 0x774(r1)
    lfs f0, 0x770(r3)
    stfs f0, 0x778(r1)
    bge lbl_fn_804E0CE8_00002510
    addi r8, r1, 0x948
    li r0, 0x0
    li r7, 0x0
    bgt lbl_fn_804E0CE8_000022F8
    li r7, 0x1
lbl_fn_804E0CE8_000022F8:
    cmpwi r7, 0x0
    beq lbl_fn_804E0CE8_00002304
    li r0, 0x1
lbl_fn_804E0CE8_00002304:
    cmpwi r0, 0x0
    beq lbl_fn_804E0CE8_000024B4
    addi r7, r8, 0x9f
    li r0, 0xa0
    subf r7, r5, r7
    divwu r7, r7, r0
    mtctr r7
    cmplw r5, r8
    bge lbl_fn_804E0CE8_000024B4
lbl_fn_804E0CE8_00002328:
    lha r0, 0x0(r6)
    sth r0, 0x0(r5)
    lha r0, 0x2(r6)
    sth r0, 0x2(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r5)
    lha r0, 0x14(r6)
    sth r0, 0x14(r5)
    lha r0, 0x16(r6)
    sth r0, 0x16(r5)
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r5)
    lfs f0, 0x1c(r6)
    stfs f0, 0x1c(r5)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r5)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r5)
    lha r0, 0x28(r6)
    sth r0, 0x28(r5)
    lha r0, 0x2a(r6)
    sth r0, 0x2a(r5)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r5)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r5)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r5)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r5)
    lha r0, 0x3c(r6)
    sth r0, 0x3c(r5)
    lha r0, 0x3e(r6)
    sth r0, 0x3e(r5)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r5)
    lfs f0, 0x44(r6)
    stfs f0, 0x44(r5)
    lfs f0, 0x48(r6)
    stfs f0, 0x48(r5)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r5)
    lha r0, 0x50(r6)
    sth r0, 0x50(r5)
    lha r0, 0x52(r6)
    sth r0, 0x52(r5)
    lfs f0, 0x54(r6)
    stfs f0, 0x54(r5)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r5)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r5)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r5)
    lha r0, 0x64(r6)
    sth r0, 0x64(r5)
    lha r0, 0x66(r6)
    sth r0, 0x66(r5)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r5)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r5)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r5)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r5)
    lha r0, 0x78(r6)
    sth r0, 0x78(r5)
    lha r0, 0x7a(r6)
    sth r0, 0x7a(r5)
    lfs f0, 0x7c(r6)
    stfs f0, 0x7c(r5)
    lfs f0, 0x80(r6)
    stfs f0, 0x80(r5)
    lfs f0, 0x84(r6)
    stfs f0, 0x84(r5)
    lfs f0, 0x88(r6)
    stfs f0, 0x88(r5)
    lha r0, 0x8c(r6)
    sth r0, 0x8c(r5)
    lha r0, 0x8e(r6)
    sth r0, 0x8e(r5)
    lfs f0, 0x90(r6)
    stfs f0, 0x90(r5)
    lfs f0, 0x94(r6)
    stfs f0, 0x94(r5)
    lfs f0, 0x98(r6)
    stfs f0, 0x98(r5)
    lfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    stfs f0, 0x9c(r5)
    addi r5, r5, 0xa0
    bdnz lbl_fn_804E0CE8_00002328
lbl_fn_804E0CE8_000024B4:
    addi r8, r1, 0x9e8
    li r0, 0x14
    addi r7, r8, 0x13
    subf r7, r5, r7
    divwu r7, r7, r0
    mtctr r7
    cmplw r5, r8
    bge lbl_fn_804E0CE8_00002510
lbl_fn_804E0CE8_000024D4:
    lha r0, 0x0(r6)
    sth r0, 0x0(r5)
    lha r0, 0x2(r6)
    sth r0, 0x2(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r6)
    addi r6, r6, 0x14
    stfs f0, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_804E0CE8_000024D4
lbl_fn_804E0CE8_00002510:
    lwz r0, 0x9e0(r3)
    addi r5, r1, 0xa90
    stw r0, 0x9e8(r1)
    addi r0, r1, 0xcfc
    cmplw r5, r0
    addi r6, r3, 0xa88
    lwz r7, 0x9e4(r3)
    lwz r0, 0x9e8(r3)
    stw r0, 0x9f0(r1)
    stw r7, 0x9ec(r1)
    lwz r7, 0x9ec(r3)
    lwz r0, 0x9f0(r3)
    stw r0, 0x9f8(r1)
    stw r7, 0x9f4(r1)
    lwz r7, 0x9f4(r3)
    lwz r0, 0x9f8(r3)
    stw r0, 0xa00(r1)
    stw r7, 0x9fc(r1)
    lwz r7, 0x9fc(r3)
    lwz r0, 0xa00(r3)
    stw r0, 0xa08(r1)
    stw r7, 0xa04(r1)
    lwz r7, 0xa04(r3)
    lwz r0, 0xa08(r3)
    stw r0, 0xa10(r1)
    stw r7, 0xa0c(r1)
    lwz r7, 0xa0c(r3)
    lwz r0, 0xa10(r3)
    stw r0, 0xa18(r1)
    stw r7, 0xa14(r1)
    lwz r7, 0xa14(r3)
    lwz r0, 0xa18(r3)
    stw r0, 0xa20(r1)
    stw r7, 0xa1c(r1)
    lwz r7, 0xa1c(r3)
    lwz r0, 0xa20(r3)
    stw r0, 0xa28(r1)
    stw r7, 0xa24(r1)
    lwz r0, 0xa24(r3)
    stw r0, 0xa2c(r1)
    lhz r0, 0xa28(r3)
    sth r0, 0xa30(r1)
    lwz r0, 0xa2c(r3)
    stw r0, 0xa34(r1)
    lwz r7, 0xa30(r3)
    lwz r0, 0xa34(r3)
    stw r0, 0xa3c(r1)
    stw r7, 0xa38(r1)
    lwz r7, 0xa38(r3)
    lwz r0, 0xa3c(r3)
    stw r0, 0xa44(r1)
    stw r7, 0xa40(r1)
    lwz r7, 0xa40(r3)
    lwz r0, 0xa44(r3)
    stw r0, 0xa4c(r1)
    stw r7, 0xa48(r1)
    lwz r7, 0xa48(r3)
    lwz r0, 0xa4c(r3)
    stw r0, 0xa54(r1)
    stw r7, 0xa50(r1)
    lwz r7, 0xa50(r3)
    lwz r0, 0xa54(r3)
    stw r0, 0xa5c(r1)
    stw r7, 0xa58(r1)
    lwz r7, 0xa58(r3)
    lwz r0, 0xa5c(r3)
    stw r0, 0xa64(r1)
    stw r7, 0xa60(r1)
    lwz r7, 0xa60(r3)
    lwz r0, 0xa64(r3)
    stw r0, 0xa6c(r1)
    stw r7, 0xa68(r1)
    lwz r7, 0xa68(r3)
    lwz r0, 0xa6c(r3)
    stw r0, 0xa74(r1)
    stw r7, 0xa70(r1)
    lwz r0, 0xa70(r3)
    stw r0, 0xa78(r1)
    lha r0, 0xa74(r3)
    sth r0, 0xa7c(r1)
    lha r0, 0xa76(r3)
    sth r0, 0xa7e(r1)
    lfs f0, 0xa78(r3)
    stfs f0, 0xa80(r1)
    lfs f0, 0xa7c(r3)
    stfs f0, 0xa84(r1)
    lfs f0, 0xa80(r3)
    stfs f0, 0xa88(r1)
    lfs f0, 0xa84(r3)
    stfs f0, 0xa8c(r1)
    bge lbl_fn_804E0CE8_000028A8
    addi r8, r1, 0xc5c
    li r0, 0x0
    li r7, 0x0
    bgt lbl_fn_804E0CE8_00002690
    li r7, 0x1
lbl_fn_804E0CE8_00002690:
    cmpwi r7, 0x0
    beq lbl_fn_804E0CE8_0000269C
    li r0, 0x1
lbl_fn_804E0CE8_0000269C:
    cmpwi r0, 0x0
    beq lbl_fn_804E0CE8_0000284C
    addi r7, r8, 0x9f
    li r0, 0xa0
    subf r7, r5, r7
    divwu r7, r7, r0
    mtctr r7
    cmplw r5, r8
    bge lbl_fn_804E0CE8_0000284C
lbl_fn_804E0CE8_000026C0:
    lha r0, 0x0(r6)
    sth r0, 0x0(r5)
    lha r0, 0x2(r6)
    sth r0, 0x2(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r5)
    lha r0, 0x14(r6)
    sth r0, 0x14(r5)
    lha r0, 0x16(r6)
    sth r0, 0x16(r5)
    lfs f0, 0x18(r6)
    stfs f0, 0x18(r5)
    lfs f0, 0x1c(r6)
    stfs f0, 0x1c(r5)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r5)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r5)
    lha r0, 0x28(r6)
    sth r0, 0x28(r5)
    lha r0, 0x2a(r6)
    sth r0, 0x2a(r5)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r5)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r5)
    lfs f0, 0x34(r6)
    stfs f0, 0x34(r5)
    lfs f0, 0x38(r6)
    stfs f0, 0x38(r5)
    lha r0, 0x3c(r6)
    sth r0, 0x3c(r5)
    lha r0, 0x3e(r6)
    sth r0, 0x3e(r5)
    lfs f0, 0x40(r6)
    stfs f0, 0x40(r5)
    lfs f0, 0x44(r6)
    stfs f0, 0x44(r5)
    lfs f0, 0x48(r6)
    stfs f0, 0x48(r5)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r5)
    lha r0, 0x50(r6)
    sth r0, 0x50(r5)
    lha r0, 0x52(r6)
    sth r0, 0x52(r5)
    lfs f0, 0x54(r6)
    stfs f0, 0x54(r5)
    lfs f0, 0x58(r6)
    stfs f0, 0x58(r5)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r5)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r5)
    lha r0, 0x64(r6)
    sth r0, 0x64(r5)
    lha r0, 0x66(r6)
    sth r0, 0x66(r5)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r5)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r5)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r5)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r5)
    lha r0, 0x78(r6)
    sth r0, 0x78(r5)
    lha r0, 0x7a(r6)
    sth r0, 0x7a(r5)
    lfs f0, 0x7c(r6)
    stfs f0, 0x7c(r5)
    lfs f0, 0x80(r6)
    stfs f0, 0x80(r5)
    lfs f0, 0x84(r6)
    stfs f0, 0x84(r5)
    lfs f0, 0x88(r6)
    stfs f0, 0x88(r5)
    lha r0, 0x8c(r6)
    sth r0, 0x8c(r5)
    lha r0, 0x8e(r6)
    sth r0, 0x8e(r5)
    lfs f0, 0x90(r6)
    stfs f0, 0x90(r5)
    lfs f0, 0x94(r6)
    stfs f0, 0x94(r5)
    lfs f0, 0x98(r6)
    stfs f0, 0x98(r5)
    lfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    stfs f0, 0x9c(r5)
    addi r5, r5, 0xa0
    bdnz lbl_fn_804E0CE8_000026C0
lbl_fn_804E0CE8_0000284C:
    addi r8, r1, 0xcfc
    li r0, 0x14
    addi r7, r8, 0x13
    subf r7, r5, r7
    divwu r7, r7, r0
    mtctr r7
    cmplw r5, r8
    bge lbl_fn_804E0CE8_000028A8
lbl_fn_804E0CE8_0000286C:
    lha r0, 0x0(r6)
    sth r0, 0x0(r5)
    lha r0, 0x2(r6)
    sth r0, 0x2(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
    lfs f0, 0x10(r6)
    addi r6, r6, 0x14
    stfs f0, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_804E0CE8_0000286C
lbl_fn_804E0CE8_000028A8:
    lwz r5, 0xcf4(r3)
    li r0, 0xf
    stw r5, 0xcfc(r1)
    addi r7, r3, 0x30
    addi r6, r4, 0x30
    lwz r8, 0xcf8(r3)
    lwz r5, 0xcfc(r3)
    stw r5, 0xd04(r1)
    stw r8, 0xd00(r1)
    lwz r8, 0xd00(r3)
    lwz r5, 0xd04(r3)
    stw r5, 0xd0c(r1)
    stw r8, 0xd08(r1)
    lwz r8, 0xd08(r3)
    lwz r5, 0xd0c(r3)
    stw r5, 0xd14(r1)
    stw r8, 0xd10(r1)
    lwz r8, 0xd10(r3)
    lwz r5, 0xd14(r3)
    stw r5, 0xd1c(r1)
    stw r8, 0xd18(r1)
    lwz r8, 0xd18(r3)
    lwz r5, 0xd1c(r3)
    stw r5, 0xd24(r1)
    stw r8, 0xd20(r1)
    lwz r8, 0xd20(r3)
    lwz r5, 0xd24(r3)
    stw r5, 0xd2c(r1)
    stw r8, 0xd28(r1)
    lwz r8, 0xd28(r3)
    lwz r5, 0xd2c(r3)
    stw r5, 0xd34(r1)
    stw r8, 0xd30(r1)
    lwz r8, 0xd30(r3)
    lwz r5, 0xd34(r3)
    stw r5, 0xd3c(r1)
    stw r8, 0xd38(r1)
    lwz r8, 0xd38(r3)
    lwz r5, 0xd3c(r3)
    stw r5, 0xd44(r1)
    stw r8, 0xd40(r1)
    lwz r8, 0xd40(r3)
    lwz r5, 0xd44(r3)
    stw r5, 0xd4c(r1)
    stw r8, 0xd48(r1)
    lwz r5, 0xd48(r3)
    stw r5, 0xd50(r1)
    lwz r5, 0xd4c(r3)
    stw r5, 0xd54(r1)
    lha r5, 0xd50(r3)
    sth r5, 0xd58(r1)
    lbz r5, 0xd52(r3)
    stb r5, 0xd5a(r1)
    lbz r5, 0xd53(r3)
    stb r5, 0xd5b(r1)
    lwz r5, 0xd54(r3)
    stw r5, 0xd5c(r1)
    lwz r5, 0xd58(r3)
    stw r5, 0xd60(r1)
    lwz r5, 0x0(r4)
    stw r5, 0x0(r3)
    lwz r8, 0x4(r4)
    lwz r5, 0x8(r4)
    stw r5, 0x8(r3)
    stw r8, 0x4(r3)
    lwz r8, 0xc(r4)
    lwz r5, 0x10(r4)
    stw r5, 0x10(r3)
    stw r8, 0xc(r3)
    lwz r8, 0x14(r4)
    lwz r5, 0x18(r4)
    stw r5, 0x18(r3)
    stw r8, 0x14(r3)
    lwz r8, 0x1c(r4)
    lwz r5, 0x20(r4)
    stw r5, 0x20(r3)
    stw r8, 0x1c(r3)
    lwz r8, 0x24(r4)
    lwz r5, 0x28(r4)
    stw r5, 0x28(r3)
    stw r8, 0x24(r3)
    lwz r8, 0x2c(r4)
    lwz r5, 0x30(r4)
    stw r5, 0x30(r3)
    stw r8, 0x2c(r3)
    mtctr r0
lbl_fn_804E0CE8_00002A00:
    lwz r5, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_804E0CE8_00002A00
    lwz r0, 0x4(r6)
    addi r5, r4, 0x134
    stw r0, 0x4(r7)
    li r0, 0x50
    mr r6, r5
    addi r7, r3, 0x134
    lwz r9, 0xb0(r4)
    lwz r8, 0xb4(r4)
    stw r8, 0xb4(r3)
    stw r9, 0xb0(r3)
    lwz r9, 0xb8(r4)
    lwz r8, 0xbc(r4)
    stw r8, 0xbc(r3)
    stw r9, 0xb8(r3)
    lwz r9, 0xc0(r4)
    lwz r8, 0xc4(r4)
    stw r8, 0xc4(r3)
    stw r9, 0xc0(r3)
    lwz r8, 0xc8(r4)
    stw r8, 0xc8(r3)
    lbz r8, 0xcc(r4)
    stb r8, 0xcc(r3)
    lwz r8, 0xd0(r4)
    stw r8, 0xd0(r3)
    lwz r8, 0xd4(r4)
    stw r8, 0xd4(r3)
    lwz r8, 0xd8(r4)
    stw r8, 0xd8(r3)
    lwz r8, 0xdc(r4)
    stw r8, 0xdc(r3)
    lwz r8, 0xe0(r4)
    stw r8, 0xe0(r3)
    lwz r8, 0xe4(r4)
    stw r8, 0xe4(r3)
    lwz r8, 0xe8(r4)
    stw r8, 0xe8(r3)
    lhz r8, 0xec(r4)
    sth r8, 0xec(r3)
    lwz r8, 0xf0(r4)
    stw r8, 0xf0(r3)
    lwz r9, 0xf4(r4)
    lwz r8, 0xf8(r4)
    stw r8, 0xf8(r3)
    stw r9, 0xf4(r3)
    lwz r9, 0xfc(r4)
    lwz r8, 0x100(r4)
    stw r8, 0x100(r3)
    stw r9, 0xfc(r3)
    lwz r9, 0x104(r4)
    lwz r8, 0x108(r4)
    stw r8, 0x108(r3)
    stw r9, 0x104(r3)
    lwz r9, 0x10c(r4)
    lwz r8, 0x110(r4)
    stw r8, 0x110(r3)
    stw r9, 0x10c(r3)
    lwz r9, 0x114(r4)
    lwz r8, 0x118(r4)
    stw r8, 0x118(r3)
    stw r9, 0x114(r3)
    lwz r9, 0x11c(r4)
    lwz r8, 0x120(r4)
    stw r8, 0x120(r3)
    stw r9, 0x11c(r3)
    lwz r9, 0x124(r4)
    lwz r8, 0x128(r4)
    stw r8, 0x128(r3)
    stw r9, 0x124(r3)
    lwz r8, 0x12c(r4)
    lwz r4, 0x130(r4)
    stw r4, 0x130(r3)
    stw r8, 0x12c(r3)
    lwz r4, 0x0(r5)
    stw r4, 0x134(r3)
    mtctr r0
lbl_fn_804E0CE8_00002B40:
    lwz r4, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_804E0CE8_00002B40
    addi r29, r5, 0x288
    addi r0, r3, 0x3bc
    lwz r4, 0x284(r5)
    cmplw r29, r0
    stw r4, 0x3b8(r3)
    beq lbl_fn_804E0CE8_00002B88
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r30, 0x3bc
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E0CE8_00002B88:
    lwz r0, 0x3fc(r31)
    addi r3, r31, 0x448
    stw r0, 0x3fc(r30)
    li r0, 0x50
    mr r5, r3
    addi r6, r30, 0x448
    lhz r4, 0x400(r31)
    sth r4, 0x400(r30)
    lwz r4, 0x404(r31)
    stw r4, 0x404(r30)
    lwz r7, 0x408(r31)
    lwz r4, 0x40c(r31)
    stw r4, 0x40c(r30)
    stw r7, 0x408(r30)
    lwz r7, 0x410(r31)
    lwz r4, 0x414(r31)
    stw r4, 0x414(r30)
    stw r7, 0x410(r30)
    lwz r7, 0x418(r31)
    lwz r4, 0x41c(r31)
    stw r4, 0x41c(r30)
    stw r7, 0x418(r30)
    lwz r7, 0x420(r31)
    lwz r4, 0x424(r31)
    stw r4, 0x424(r30)
    stw r7, 0x420(r30)
    lwz r7, 0x428(r31)
    lwz r4, 0x42c(r31)
    stw r4, 0x42c(r30)
    stw r7, 0x428(r30)
    lwz r7, 0x430(r31)
    lwz r4, 0x434(r31)
    stw r4, 0x434(r30)
    stw r7, 0x430(r30)
    lwz r7, 0x438(r31)
    lwz r4, 0x43c(r31)
    stw r4, 0x43c(r30)
    stw r7, 0x438(r30)
    lwz r7, 0x440(r31)
    lwz r4, 0x444(r31)
    stw r4, 0x444(r30)
    stw r7, 0x440(r30)
    lwz r4, 0x448(r31)
    stw r4, 0x448(r30)
    mtctr r0
lbl_fn_804E0CE8_00002C3C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E0CE8_00002C3C
    addi r29, r3, 0x288
    addi r0, r30, 0x6d0
    lwz r3, 0x284(r3)
    cmplw r29, r0
    stw r3, 0x6cc(r30)
    beq lbl_fn_804E0CE8_00002C84
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r30, 0x6d0
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E0CE8_00002C84:
    lwz r0, 0x710(r31)
    addi r3, r31, 0x75c
    stw r0, 0x710(r30)
    li r0, 0x50
    mr r5, r3
    addi r6, r30, 0x75c
    lhz r4, 0x714(r31)
    sth r4, 0x714(r30)
    lwz r4, 0x718(r31)
    stw r4, 0x718(r30)
    lwz r7, 0x71c(r31)
    lwz r4, 0x720(r31)
    stw r4, 0x720(r30)
    stw r7, 0x71c(r30)
    lwz r7, 0x724(r31)
    lwz r4, 0x728(r31)
    stw r4, 0x728(r30)
    stw r7, 0x724(r30)
    lwz r7, 0x72c(r31)
    lwz r4, 0x730(r31)
    stw r4, 0x730(r30)
    stw r7, 0x72c(r30)
    lwz r7, 0x734(r31)
    lwz r4, 0x738(r31)
    stw r4, 0x738(r30)
    stw r7, 0x734(r30)
    lwz r7, 0x73c(r31)
    lwz r4, 0x740(r31)
    stw r4, 0x740(r30)
    stw r7, 0x73c(r30)
    lwz r7, 0x744(r31)
    lwz r4, 0x748(r31)
    stw r4, 0x748(r30)
    stw r7, 0x744(r30)
    lwz r7, 0x74c(r31)
    lwz r4, 0x750(r31)
    stw r4, 0x750(r30)
    stw r7, 0x74c(r30)
    lwz r7, 0x754(r31)
    lwz r4, 0x758(r31)
    stw r4, 0x758(r30)
    stw r7, 0x754(r30)
    lwz r4, 0x75c(r31)
    stw r4, 0x75c(r30)
    mtctr r0
lbl_fn_804E0CE8_00002D38:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E0CE8_00002D38
    addi r29, r3, 0x288
    addi r0, r30, 0x9e4
    lwz r3, 0x284(r3)
    cmplw r29, r0
    stw r3, 0x9e0(r30)
    beq lbl_fn_804E0CE8_00002D80
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r30, 0x9e4
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E0CE8_00002D80:
    lwz r0, 0xa24(r31)
    addi r3, r31, 0xa70
    stw r0, 0xa24(r30)
    li r0, 0x50
    mr r5, r3
    addi r6, r30, 0xa70
    lhz r4, 0xa28(r31)
    sth r4, 0xa28(r30)
    lwz r4, 0xa2c(r31)
    stw r4, 0xa2c(r30)
    lwz r7, 0xa30(r31)
    lwz r4, 0xa34(r31)
    stw r4, 0xa34(r30)
    stw r7, 0xa30(r30)
    lwz r7, 0xa38(r31)
    lwz r4, 0xa3c(r31)
    stw r4, 0xa3c(r30)
    stw r7, 0xa38(r30)
    lwz r7, 0xa40(r31)
    lwz r4, 0xa44(r31)
    stw r4, 0xa44(r30)
    stw r7, 0xa40(r30)
    lwz r7, 0xa48(r31)
    lwz r4, 0xa4c(r31)
    stw r4, 0xa4c(r30)
    stw r7, 0xa48(r30)
    lwz r7, 0xa50(r31)
    lwz r4, 0xa54(r31)
    stw r4, 0xa54(r30)
    stw r7, 0xa50(r30)
    lwz r7, 0xa58(r31)
    lwz r4, 0xa5c(r31)
    stw r4, 0xa5c(r30)
    stw r7, 0xa58(r30)
    lwz r7, 0xa60(r31)
    lwz r4, 0xa64(r31)
    stw r4, 0xa64(r30)
    stw r7, 0xa60(r30)
    lwz r7, 0xa68(r31)
    lwz r4, 0xa6c(r31)
    stw r4, 0xa6c(r30)
    stw r7, 0xa68(r30)
    lwz r4, 0xa70(r31)
    stw r4, 0xa70(r30)
    mtctr r0
lbl_fn_804E0CE8_00002E34:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E0CE8_00002E34
    addi r29, r3, 0x288
    addi r0, r30, 0xcf8
    lwz r3, 0x284(r3)
    cmplw r29, r0
    stw r3, 0xcf4(r30)
    beq lbl_fn_804E0CE8_00002E7C
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r30, 0xcf8
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E0CE8_00002E7C:
    lwz r6, 0xd38(r31)
    li r0, 0xf
    lwz r3, 0xd3c(r31)
    addi r5, r31, 0x30
    stw r3, 0xd3c(r30)
    addi r4, r1, 0x38
    stw r6, 0xd38(r30)
    lwz r6, 0xd40(r31)
    lwz r3, 0xd44(r31)
    stw r3, 0xd44(r30)
    stw r6, 0xd40(r30)
    lwz r3, 0xd48(r31)
    stw r3, 0xd48(r30)
    lwz r3, 0xd4c(r31)
    stw r3, 0xd4c(r30)
    lha r3, 0xd50(r31)
    sth r3, 0xd50(r30)
    lbz r3, 0xd52(r31)
    stb r3, 0xd52(r30)
    lbz r3, 0xd53(r31)
    stb r3, 0xd53(r30)
    lwz r3, 0xd54(r31)
    stw r3, 0xd54(r30)
    lwz r3, 0xd58(r31)
    stw r3, 0xd58(r30)
    lwz r3, 0x8(r1)
    stw r3, 0x0(r31)
    lwz r6, 0xc(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x8(r31)
    stw r6, 0x4(r31)
    lwz r6, 0x14(r1)
    lwz r3, 0x18(r1)
    stw r3, 0x10(r31)
    stw r6, 0xc(r31)
    lwz r6, 0x1c(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x18(r31)
    stw r6, 0x14(r31)
    lwz r6, 0x24(r1)
    lwz r3, 0x28(r1)
    stw r3, 0x20(r31)
    stw r6, 0x1c(r31)
    lwz r6, 0x2c(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x28(r31)
    stw r6, 0x24(r31)
    lwz r6, 0x34(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x30(r31)
    stw r6, 0x2c(r31)
    mtctr r0
lbl_fn_804E0CE8_00002F4C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E0CE8_00002F4C
    lwz r0, 0x4(r4)
    addi r3, r1, 0x13c
    stw r0, 0x4(r5)
    li r0, 0x50
    mr r5, r3
    addi r6, r31, 0x134
    lwz r7, 0xb8(r1)
    lwz r4, 0xbc(r1)
    stw r4, 0xb4(r31)
    stw r7, 0xb0(r31)
    lwz r7, 0xc0(r1)
    lwz r4, 0xc4(r1)
    stw r4, 0xbc(r31)
    stw r7, 0xb8(r31)
    lwz r7, 0xc8(r1)
    lwz r4, 0xcc(r1)
    stw r4, 0xc4(r31)
    stw r7, 0xc0(r31)
    lwz r4, 0xd0(r1)
    stw r4, 0xc8(r31)
    lbz r4, 0xd4(r1)
    stb r4, 0xcc(r31)
    lwz r4, 0xd8(r1)
    stw r4, 0xd0(r31)
    lwz r4, 0xdc(r1)
    stw r4, 0xd4(r31)
    lwz r4, 0xe0(r1)
    stw r4, 0xd8(r31)
    lwz r4, 0xe4(r1)
    stw r4, 0xdc(r31)
    lwz r4, 0xe8(r1)
    stw r4, 0xe0(r31)
    lwz r4, 0xec(r1)
    stw r4, 0xe4(r31)
    lwz r4, 0xf0(r1)
    stw r4, 0xe8(r31)
    lhz r4, 0xf4(r1)
    sth r4, 0xec(r31)
    lwz r4, 0xf8(r1)
    stw r4, 0xf0(r31)
    lwz r7, 0xfc(r1)
    lwz r4, 0x100(r1)
    stw r4, 0xf8(r31)
    stw r7, 0xf4(r31)
    lwz r7, 0x104(r1)
    lwz r4, 0x108(r1)
    stw r4, 0x100(r31)
    stw r7, 0xfc(r31)
    lwz r7, 0x10c(r1)
    lwz r4, 0x110(r1)
    stw r4, 0x108(r31)
    stw r7, 0x104(r31)
    lwz r7, 0x114(r1)
    lwz r4, 0x118(r1)
    stw r4, 0x110(r31)
    stw r7, 0x10c(r31)
    lwz r7, 0x11c(r1)
    lwz r4, 0x120(r1)
    stw r4, 0x118(r31)
    stw r7, 0x114(r31)
    lwz r7, 0x124(r1)
    lwz r4, 0x128(r1)
    stw r4, 0x120(r31)
    stw r7, 0x11c(r31)
    lwz r7, 0x12c(r1)
    lwz r4, 0x130(r1)
    stw r4, 0x128(r31)
    stw r7, 0x124(r31)
    lwz r7, 0x134(r1)
    lwz r4, 0x138(r1)
    stw r4, 0x130(r31)
    stw r7, 0x12c(r31)
    lwz r4, 0x13c(r1)
    stw r4, 0x134(r31)
    mtctr r0
lbl_fn_804E0CE8_0000308C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E0CE8_0000308C
    addi r29, r3, 0x288
    addi r0, r31, 0x3bc
    lwz r3, 0x3c0(r1)
    cmplw r29, r0
    stw r3, 0x3b8(r31)
    beq lbl_fn_804E0CE8_000030D4
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x3bc
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E0CE8_000030D4:
    lwz r0, 0x404(r1)
    addi r7, r1, 0x450
    stw r0, 0x3fc(r31)
    li r0, 0x50
    mr r4, r7
    addi r5, r31, 0x448
    lhz r3, 0x408(r1)
    sth r3, 0x400(r31)
    lwz r3, 0x40c(r1)
    stw r3, 0x404(r31)
    lwz r6, 0x410(r1)
    lwz r3, 0x414(r1)
    stw r3, 0x40c(r31)
    stw r6, 0x408(r31)
    lwz r6, 0x418(r1)
    lwz r3, 0x41c(r1)
    stw r3, 0x414(r31)
    stw r6, 0x410(r31)
    lwz r6, 0x420(r1)
    lwz r3, 0x424(r1)
    stw r3, 0x41c(r31)
    stw r6, 0x418(r31)
    lwz r6, 0x428(r1)
    lwz r3, 0x42c(r1)
    stw r3, 0x424(r31)
    stw r6, 0x420(r31)
    lwz r6, 0x430(r1)
    lwz r3, 0x434(r1)
    stw r3, 0x42c(r31)
    stw r6, 0x428(r31)
    lwz r6, 0x438(r1)
    lwz r3, 0x43c(r1)
    stw r3, 0x434(r31)
    stw r6, 0x430(r31)
    lwz r6, 0x440(r1)
    lwz r3, 0x444(r1)
    stw r3, 0x43c(r31)
    stw r6, 0x438(r31)
    lwz r6, 0x448(r1)
    lwz r3, 0x44c(r1)
    stw r3, 0x444(r31)
    stw r6, 0x440(r31)
    lwz r3, 0x450(r1)
    stw r3, 0x448(r31)
    mtctr r0
lbl_fn_804E0CE8_00003188:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E0CE8_00003188
    addi r29, r7, 0x288
    addi r0, r31, 0x6d0
    lwz r3, 0x6d4(r1)
    cmplw r29, r0
    stw r3, 0x6cc(r31)
    beq lbl_fn_804E0CE8_000031D0
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x6d0
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E0CE8_000031D0:
    lwz r0, 0x718(r1)
    addi r7, r1, 0x764
    stw r0, 0x710(r31)
    li r0, 0x50
    mr r4, r7
    addi r5, r31, 0x75c
    lhz r3, 0x71c(r1)
    sth r3, 0x714(r31)
    lwz r3, 0x720(r1)
    stw r3, 0x718(r31)
    lwz r6, 0x724(r1)
    lwz r3, 0x728(r1)
    stw r3, 0x720(r31)
    stw r6, 0x71c(r31)
    lwz r6, 0x72c(r1)
    lwz r3, 0x730(r1)
    stw r3, 0x728(r31)
    stw r6, 0x724(r31)
    lwz r6, 0x734(r1)
    lwz r3, 0x738(r1)
    stw r3, 0x730(r31)
    stw r6, 0x72c(r31)
    lwz r6, 0x73c(r1)
    lwz r3, 0x740(r1)
    stw r3, 0x738(r31)
    stw r6, 0x734(r31)
    lwz r6, 0x744(r1)
    lwz r3, 0x748(r1)
    stw r3, 0x740(r31)
    stw r6, 0x73c(r31)
    lwz r6, 0x74c(r1)
    lwz r3, 0x750(r1)
    stw r3, 0x748(r31)
    stw r6, 0x744(r31)
    lwz r6, 0x754(r1)
    lwz r3, 0x758(r1)
    stw r3, 0x750(r31)
    stw r6, 0x74c(r31)
    lwz r6, 0x75c(r1)
    lwz r3, 0x760(r1)
    stw r3, 0x758(r31)
    stw r6, 0x754(r31)
    lwz r3, 0x764(r1)
    stw r3, 0x75c(r31)
    mtctr r0
lbl_fn_804E0CE8_00003284:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E0CE8_00003284
    addi r29, r7, 0x288
    addi r0, r31, 0x9e4
    lwz r3, 0x9e8(r1)
    cmplw r29, r0
    stw r3, 0x9e0(r31)
    beq lbl_fn_804E0CE8_000032CC
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x9e4
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E0CE8_000032CC:
    lwz r0, 0xa2c(r1)
    addi r7, r1, 0xa78
    stw r0, 0xa24(r31)
    li r0, 0x50
    mr r4, r7
    addi r5, r31, 0xa70
    lhz r3, 0xa30(r1)
    sth r3, 0xa28(r31)
    lwz r3, 0xa34(r1)
    stw r3, 0xa2c(r31)
    lwz r6, 0xa38(r1)
    lwz r3, 0xa3c(r1)
    stw r3, 0xa34(r31)
    stw r6, 0xa30(r31)
    lwz r6, 0xa40(r1)
    lwz r3, 0xa44(r1)
    stw r3, 0xa3c(r31)
    stw r6, 0xa38(r31)
    lwz r6, 0xa48(r1)
    lwz r3, 0xa4c(r1)
    stw r3, 0xa44(r31)
    stw r6, 0xa40(r31)
    lwz r6, 0xa50(r1)
    lwz r3, 0xa54(r1)
    stw r3, 0xa4c(r31)
    stw r6, 0xa48(r31)
    lwz r6, 0xa58(r1)
    lwz r3, 0xa5c(r1)
    stw r3, 0xa54(r31)
    stw r6, 0xa50(r31)
    lwz r6, 0xa60(r1)
    lwz r3, 0xa64(r1)
    stw r3, 0xa5c(r31)
    stw r6, 0xa58(r31)
    lwz r6, 0xa68(r1)
    lwz r3, 0xa6c(r1)
    stw r3, 0xa64(r31)
    stw r6, 0xa60(r31)
    lwz r6, 0xa70(r1)
    lwz r3, 0xa74(r1)
    stw r3, 0xa6c(r31)
    stw r6, 0xa68(r31)
    lwz r3, 0xa78(r1)
    stw r3, 0xa70(r31)
    mtctr r0
lbl_fn_804E0CE8_00003380:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E0CE8_00003380
    addi r29, r7, 0x288
    addi r0, r31, 0xcf8
    lwz r3, 0xcfc(r1)
    cmplw r29, r0
    stw r3, 0xcf4(r31)
    beq lbl_fn_804E0CE8_000033C8
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0xcf8
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804E0CE8_000033C8:
    lwz r3, 0xd40(r1)
    lwz r0, 0xd44(r1)
    stw r0, 0xd3c(r31)
    stw r3, 0xd38(r31)
    lwz r3, 0xd48(r1)
    lwz r0, 0xd4c(r1)
    stw r0, 0xd44(r31)
    stw r3, 0xd40(r31)
    lwz r0, 0xd50(r1)
    stw r0, 0xd48(r31)
    lwz r0, 0xd54(r1)
    stw r0, 0xd4c(r31)
    lha r0, 0xd58(r1)
    sth r0, 0xd50(r31)
    lbz r0, 0xd5a(r1)
    stb r0, 0xd52(r31)
    lbz r0, 0xd5b(r1)
    stb r0, 0xd53(r31)
    lwz r0, 0xd5c(r1)
    stw r0, 0xd54(r31)
    lwz r0, 0xd60(r1)
    stw r0, 0xd58(r31)
    lwz r31, 0xd7c(r1)
    lwz r30, 0xd78(r1)
    lwz r29, 0xd74(r1)
    lwz r0, 0xd84(r1)
    mtlr r0
    addi r1, r1, 0xd80
    blr
}
