#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_800844D8(void);
extern void fn_800DC6B4(void);
extern void fn_8050E630(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);

/* External data declarations */
extern u8 lbl_80759E48[];
extern u8 lbl_8075A844[];
extern u8 lbl_80791764[];
extern u8 lbl_807C8AE8[];
extern u8 lbl_807C8F68[];
extern u8 lbl_807C8F74[];

/* Small data declarations */
extern u32 lbl_8087F604;
extern u32 lbl_8087F608;
extern u32 lbl_8087F60C;
extern u32 lbl_8087F620;
extern u32 lbl_8087F624;

/* Function declarations */
void fn_804FE2E0(void);
void fn_804FF3D4(void);
void fn_804FF47C(void);
void fn_804FF964(void);
void fn_804FF9C0(void);

asm void fn_804FE2E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x10(r3)
    li r10, 0xa0
    lwz r7, 0x0(r3)
    li r12, 0xa0
    mulli r6, r0, 0xd5c
    li r0, 0x14
    li r11, 0x14
    li r30, 0xa0
    add r8, r7, r6
    li r31, 0x14
    li r28, 0xa0
    li r29, 0x14
    b lbl_fn_804FE2E0_000010D4
lbl_fn_804FE2E0_00000048:
    subic. r8, r8, 0xd5c
    subi r5, r5, 0xd5c
    beq lbl_fn_804FE2E0_000010BC
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
    lbz r7, 0xcc(r5)
    addi r6, r8, 0x14c
    stb r7, 0xcc(r8)
    addi r7, r8, 0x3b8
    cmplw r6, r7
    lwz r9, 0xd0(r5)
    addi r7, r5, 0x14c
    stw r9, 0xd0(r8)
    lwz r9, 0xd4(r5)
    stw r9, 0xd4(r8)
    lwz r9, 0xd8(r5)
    stw r9, 0xd8(r8)
    lwz r9, 0xdc(r5)
    stw r9, 0xdc(r8)
    lwz r9, 0xe0(r5)
    stw r9, 0xe0(r8)
    lwz r9, 0xe4(r5)
    stw r9, 0xe4(r8)
    lwz r9, 0xe8(r5)
    stw r9, 0xe8(r8)
    lhz r9, 0xec(r5)
    sth r9, 0xec(r8)
    lwz r9, 0xf0(r5)
    stw r9, 0xf0(r8)
    lwz r9, 0xf8(r5)
    lwz r27, 0xf4(r5)
    stw r27, 0xf4(r8)
    stw r9, 0xf8(r8)
    lwz r9, 0x100(r5)
    lwz r27, 0xfc(r5)
    stw r27, 0xfc(r8)
    stw r9, 0x100(r8)
    lwz r9, 0x108(r5)
    lwz r27, 0x104(r5)
    stw r27, 0x104(r8)
    stw r9, 0x108(r8)
    lwz r9, 0x110(r5)
    lwz r27, 0x10c(r5)
    stw r27, 0x10c(r8)
    stw r9, 0x110(r8)
    lwz r9, 0x118(r5)
    lwz r27, 0x114(r5)
    stw r27, 0x114(r8)
    stw r9, 0x118(r8)
    lwz r9, 0x120(r5)
    lwz r27, 0x11c(r5)
    stw r27, 0x11c(r8)
    stw r9, 0x120(r8)
    lwz r9, 0x128(r5)
    lwz r27, 0x124(r5)
    stw r27, 0x124(r8)
    stw r9, 0x128(r8)
    lwz r9, 0x130(r5)
    lwz r27, 0x12c(r5)
    stw r27, 0x12c(r8)
    stw r9, 0x130(r8)
    lwz r9, 0x134(r5)
    stw r9, 0x134(r8)
    lha r9, 0x138(r5)
    sth r9, 0x138(r8)
    lha r9, 0x13a(r5)
    sth r9, 0x13a(r8)
    lfs f0, 0x13c(r5)
    stfs f0, 0x13c(r8)
    lfs f0, 0x140(r5)
    stfs f0, 0x140(r8)
    lfs f0, 0x144(r5)
    stfs f0, 0x144(r8)
    lfs f0, 0x148(r5)
    stfs f0, 0x148(r8)
    bge lbl_fn_804FE2E0_0000052C
    addi r26, r8, 0x318
    li r9, 0x0
    li r27, 0x0
    bgt lbl_fn_804FE2E0_0000031C
    li r27, 0x1
lbl_fn_804FE2E0_0000031C:
    cmpwi r27, 0x0
    beq lbl_fn_804FE2E0_00000328
    li r9, 0x1
lbl_fn_804FE2E0_00000328:
    cmpwi r9, 0x0
    beq lbl_fn_804FE2E0_000004D4
    addi r9, r26, 0x9f
    subf r9, r6, r9
    divwu r9, r9, r28
    mtctr r9
    cmplw r6, r26
    bge lbl_fn_804FE2E0_000004D4
lbl_fn_804FE2E0_00000348:
    lha r9, 0x0(r7)
    sth r9, 0x0(r6)
    lha r9, 0x2(r7)
    sth r9, 0x2(r6)
    lfs f0, 0x4(r7)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    lha r9, 0x14(r7)
    sth r9, 0x14(r6)
    lha r9, 0x16(r7)
    sth r9, 0x16(r6)
    lfs f0, 0x18(r7)
    stfs f0, 0x18(r6)
    lfs f0, 0x1c(r7)
    stfs f0, 0x1c(r6)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r6)
    lfs f0, 0x24(r7)
    stfs f0, 0x24(r6)
    lha r9, 0x28(r7)
    sth r9, 0x28(r6)
    lha r9, 0x2a(r7)
    sth r9, 0x2a(r6)
    lfs f0, 0x2c(r7)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r7)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r7)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r7)
    stfs f0, 0x38(r6)
    lha r9, 0x3c(r7)
    sth r9, 0x3c(r6)
    lha r9, 0x3e(r7)
    sth r9, 0x3e(r6)
    lfs f0, 0x40(r7)
    stfs f0, 0x40(r6)
    lfs f0, 0x44(r7)
    stfs f0, 0x44(r6)
    lfs f0, 0x48(r7)
    stfs f0, 0x48(r6)
    lfs f0, 0x4c(r7)
    stfs f0, 0x4c(r6)
    lha r9, 0x50(r7)
    sth r9, 0x50(r6)
    lha r9, 0x52(r7)
    sth r9, 0x52(r6)
    lfs f0, 0x54(r7)
    stfs f0, 0x54(r6)
    lfs f0, 0x58(r7)
    stfs f0, 0x58(r6)
    lfs f0, 0x5c(r7)
    stfs f0, 0x5c(r6)
    lfs f0, 0x60(r7)
    stfs f0, 0x60(r6)
    lha r9, 0x64(r7)
    sth r9, 0x64(r6)
    lha r9, 0x66(r7)
    sth r9, 0x66(r6)
    lfs f0, 0x68(r7)
    stfs f0, 0x68(r6)
    lfs f0, 0x6c(r7)
    stfs f0, 0x6c(r6)
    lfs f0, 0x70(r7)
    stfs f0, 0x70(r6)
    lfs f0, 0x74(r7)
    stfs f0, 0x74(r6)
    lha r9, 0x78(r7)
    sth r9, 0x78(r6)
    lha r9, 0x7a(r7)
    sth r9, 0x7a(r6)
    lfs f0, 0x7c(r7)
    stfs f0, 0x7c(r6)
    lfs f0, 0x80(r7)
    stfs f0, 0x80(r6)
    lfs f0, 0x84(r7)
    stfs f0, 0x84(r6)
    lfs f0, 0x88(r7)
    stfs f0, 0x88(r6)
    lha r9, 0x8c(r7)
    sth r9, 0x8c(r6)
    lha r9, 0x8e(r7)
    sth r9, 0x8e(r6)
    lfs f0, 0x90(r7)
    stfs f0, 0x90(r6)
    lfs f0, 0x94(r7)
    stfs f0, 0x94(r6)
    lfs f0, 0x98(r7)
    stfs f0, 0x98(r6)
    lfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    stfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    bdnz lbl_fn_804FE2E0_00000348
lbl_fn_804FE2E0_000004D4:
    addi r27, r8, 0x3b8
    addi r9, r27, 0x13
    subf r9, r6, r9
    divwu r9, r9, r29
    mtctr r9
    cmplw r6, r27
    bge lbl_fn_804FE2E0_0000052C
lbl_fn_804FE2E0_000004F0:
    lha r9, 0x0(r7)
    sth r9, 0x0(r6)
    lha r9, 0x2(r7)
    sth r9, 0x2(r6)
    lfs f0, 0x4(r7)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    addi r7, r7, 0x14
    stfs f0, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_804FE2E0_000004F0
lbl_fn_804FE2E0_0000052C:
    lwz r7, 0x3b8(r5)
    addi r6, r8, 0x460
    stw r7, 0x3b8(r8)
    addi r7, r8, 0x6cc
    cmplw r6, r7
    lwz r9, 0x3c0(r5)
    addi r7, r5, 0x460
    lwz r27, 0x3bc(r5)
    stw r27, 0x3bc(r8)
    stw r9, 0x3c0(r8)
    lwz r9, 0x3c8(r5)
    lwz r27, 0x3c4(r5)
    stw r27, 0x3c4(r8)
    stw r9, 0x3c8(r8)
    lwz r9, 0x3d0(r5)
    lwz r27, 0x3cc(r5)
    stw r27, 0x3cc(r8)
    stw r9, 0x3d0(r8)
    lwz r9, 0x3d8(r5)
    lwz r27, 0x3d4(r5)
    stw r27, 0x3d4(r8)
    stw r9, 0x3d8(r8)
    lwz r9, 0x3e0(r5)
    lwz r27, 0x3dc(r5)
    stw r27, 0x3dc(r8)
    stw r9, 0x3e0(r8)
    lwz r9, 0x3e8(r5)
    lwz r27, 0x3e4(r5)
    stw r27, 0x3e4(r8)
    stw r9, 0x3e8(r8)
    lwz r9, 0x3f0(r5)
    lwz r27, 0x3ec(r5)
    stw r27, 0x3ec(r8)
    stw r9, 0x3f0(r8)
    lwz r9, 0x3f8(r5)
    lwz r27, 0x3f4(r5)
    stw r27, 0x3f4(r8)
    stw r9, 0x3f8(r8)
    lwz r9, 0x3fc(r5)
    stw r9, 0x3fc(r8)
    lhz r9, 0x400(r5)
    sth r9, 0x400(r8)
    lwz r9, 0x404(r5)
    stw r9, 0x404(r8)
    lwz r9, 0x40c(r5)
    lwz r27, 0x408(r5)
    stw r27, 0x408(r8)
    stw r9, 0x40c(r8)
    lwz r9, 0x414(r5)
    lwz r27, 0x410(r5)
    stw r27, 0x410(r8)
    stw r9, 0x414(r8)
    lwz r9, 0x41c(r5)
    lwz r27, 0x418(r5)
    stw r27, 0x418(r8)
    stw r9, 0x41c(r8)
    lwz r9, 0x424(r5)
    lwz r27, 0x420(r5)
    stw r27, 0x420(r8)
    stw r9, 0x424(r8)
    lwz r9, 0x42c(r5)
    lwz r27, 0x428(r5)
    stw r27, 0x428(r8)
    stw r9, 0x42c(r8)
    lwz r9, 0x434(r5)
    lwz r27, 0x430(r5)
    stw r27, 0x430(r8)
    stw r9, 0x434(r8)
    lwz r9, 0x43c(r5)
    lwz r27, 0x438(r5)
    stw r27, 0x438(r8)
    stw r9, 0x43c(r8)
    lwz r9, 0x444(r5)
    lwz r27, 0x440(r5)
    stw r27, 0x440(r8)
    stw r9, 0x444(r8)
    lwz r9, 0x448(r5)
    stw r9, 0x448(r8)
    lha r9, 0x44c(r5)
    sth r9, 0x44c(r8)
    lha r9, 0x44e(r5)
    sth r9, 0x44e(r8)
    lfs f0, 0x450(r5)
    stfs f0, 0x450(r8)
    lfs f0, 0x454(r5)
    stfs f0, 0x454(r8)
    lfs f0, 0x458(r5)
    stfs f0, 0x458(r8)
    lfs f0, 0x45c(r5)
    stfs f0, 0x45c(r8)
    bge lbl_fn_804FE2E0_000008BC
    addi r26, r8, 0x62c
    li r9, 0x0
    li r27, 0x0
    bgt lbl_fn_804FE2E0_000006AC
    li r27, 0x1
lbl_fn_804FE2E0_000006AC:
    cmpwi r27, 0x0
    beq lbl_fn_804FE2E0_000006B8
    li r9, 0x1
lbl_fn_804FE2E0_000006B8:
    cmpwi r9, 0x0
    beq lbl_fn_804FE2E0_00000864
    addi r9, r26, 0x9f
    subf r9, r6, r9
    divwu r9, r9, r30
    mtctr r9
    cmplw r6, r26
    bge lbl_fn_804FE2E0_00000864
lbl_fn_804FE2E0_000006D8:
    lha r9, 0x0(r7)
    sth r9, 0x0(r6)
    lha r9, 0x2(r7)
    sth r9, 0x2(r6)
    lfs f0, 0x4(r7)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    lha r9, 0x14(r7)
    sth r9, 0x14(r6)
    lha r9, 0x16(r7)
    sth r9, 0x16(r6)
    lfs f0, 0x18(r7)
    stfs f0, 0x18(r6)
    lfs f0, 0x1c(r7)
    stfs f0, 0x1c(r6)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r6)
    lfs f0, 0x24(r7)
    stfs f0, 0x24(r6)
    lha r9, 0x28(r7)
    sth r9, 0x28(r6)
    lha r9, 0x2a(r7)
    sth r9, 0x2a(r6)
    lfs f0, 0x2c(r7)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r7)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r7)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r7)
    stfs f0, 0x38(r6)
    lha r9, 0x3c(r7)
    sth r9, 0x3c(r6)
    lha r9, 0x3e(r7)
    sth r9, 0x3e(r6)
    lfs f0, 0x40(r7)
    stfs f0, 0x40(r6)
    lfs f0, 0x44(r7)
    stfs f0, 0x44(r6)
    lfs f0, 0x48(r7)
    stfs f0, 0x48(r6)
    lfs f0, 0x4c(r7)
    stfs f0, 0x4c(r6)
    lha r9, 0x50(r7)
    sth r9, 0x50(r6)
    lha r9, 0x52(r7)
    sth r9, 0x52(r6)
    lfs f0, 0x54(r7)
    stfs f0, 0x54(r6)
    lfs f0, 0x58(r7)
    stfs f0, 0x58(r6)
    lfs f0, 0x5c(r7)
    stfs f0, 0x5c(r6)
    lfs f0, 0x60(r7)
    stfs f0, 0x60(r6)
    lha r9, 0x64(r7)
    sth r9, 0x64(r6)
    lha r9, 0x66(r7)
    sth r9, 0x66(r6)
    lfs f0, 0x68(r7)
    stfs f0, 0x68(r6)
    lfs f0, 0x6c(r7)
    stfs f0, 0x6c(r6)
    lfs f0, 0x70(r7)
    stfs f0, 0x70(r6)
    lfs f0, 0x74(r7)
    stfs f0, 0x74(r6)
    lha r9, 0x78(r7)
    sth r9, 0x78(r6)
    lha r9, 0x7a(r7)
    sth r9, 0x7a(r6)
    lfs f0, 0x7c(r7)
    stfs f0, 0x7c(r6)
    lfs f0, 0x80(r7)
    stfs f0, 0x80(r6)
    lfs f0, 0x84(r7)
    stfs f0, 0x84(r6)
    lfs f0, 0x88(r7)
    stfs f0, 0x88(r6)
    lha r9, 0x8c(r7)
    sth r9, 0x8c(r6)
    lha r9, 0x8e(r7)
    sth r9, 0x8e(r6)
    lfs f0, 0x90(r7)
    stfs f0, 0x90(r6)
    lfs f0, 0x94(r7)
    stfs f0, 0x94(r6)
    lfs f0, 0x98(r7)
    stfs f0, 0x98(r6)
    lfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    stfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    bdnz lbl_fn_804FE2E0_000006D8
lbl_fn_804FE2E0_00000864:
    addi r27, r8, 0x6cc
    addi r9, r27, 0x13
    subf r9, r6, r9
    divwu r9, r9, r31
    mtctr r9
    cmplw r6, r27
    bge lbl_fn_804FE2E0_000008BC
lbl_fn_804FE2E0_00000880:
    lha r9, 0x0(r7)
    sth r9, 0x0(r6)
    lha r9, 0x2(r7)
    sth r9, 0x2(r6)
    lfs f0, 0x4(r7)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    addi r7, r7, 0x14
    stfs f0, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_804FE2E0_00000880
lbl_fn_804FE2E0_000008BC:
    lwz r7, 0x6cc(r5)
    addi r6, r8, 0x774
    stw r7, 0x6cc(r8)
    addi r7, r8, 0x9e0
    cmplw r6, r7
    lwz r9, 0x6d4(r5)
    addi r7, r5, 0x774
    lwz r27, 0x6d0(r5)
    stw r27, 0x6d0(r8)
    stw r9, 0x6d4(r8)
    lwz r9, 0x6dc(r5)
    lwz r27, 0x6d8(r5)
    stw r27, 0x6d8(r8)
    stw r9, 0x6dc(r8)
    lwz r9, 0x6e4(r5)
    lwz r27, 0x6e0(r5)
    stw r27, 0x6e0(r8)
    stw r9, 0x6e4(r8)
    lwz r9, 0x6ec(r5)
    lwz r27, 0x6e8(r5)
    stw r27, 0x6e8(r8)
    stw r9, 0x6ec(r8)
    lwz r9, 0x6f4(r5)
    lwz r27, 0x6f0(r5)
    stw r27, 0x6f0(r8)
    stw r9, 0x6f4(r8)
    lwz r9, 0x6fc(r5)
    lwz r27, 0x6f8(r5)
    stw r27, 0x6f8(r8)
    stw r9, 0x6fc(r8)
    lwz r9, 0x704(r5)
    lwz r27, 0x700(r5)
    stw r27, 0x700(r8)
    stw r9, 0x704(r8)
    lwz r9, 0x70c(r5)
    lwz r27, 0x708(r5)
    stw r27, 0x708(r8)
    stw r9, 0x70c(r8)
    lwz r9, 0x710(r5)
    stw r9, 0x710(r8)
    lhz r9, 0x714(r5)
    sth r9, 0x714(r8)
    lwz r9, 0x718(r5)
    stw r9, 0x718(r8)
    lwz r9, 0x720(r5)
    lwz r27, 0x71c(r5)
    stw r27, 0x71c(r8)
    stw r9, 0x720(r8)
    lwz r9, 0x728(r5)
    lwz r27, 0x724(r5)
    stw r27, 0x724(r8)
    stw r9, 0x728(r8)
    lwz r9, 0x730(r5)
    lwz r27, 0x72c(r5)
    stw r27, 0x72c(r8)
    stw r9, 0x730(r8)
    lwz r9, 0x738(r5)
    lwz r27, 0x734(r5)
    stw r27, 0x734(r8)
    stw r9, 0x738(r8)
    lwz r9, 0x740(r5)
    lwz r27, 0x73c(r5)
    stw r27, 0x73c(r8)
    stw r9, 0x740(r8)
    lwz r9, 0x748(r5)
    lwz r27, 0x744(r5)
    stw r27, 0x744(r8)
    stw r9, 0x748(r8)
    lwz r9, 0x750(r5)
    lwz r27, 0x74c(r5)
    stw r27, 0x74c(r8)
    stw r9, 0x750(r8)
    lwz r9, 0x758(r5)
    lwz r27, 0x754(r5)
    stw r27, 0x754(r8)
    stw r9, 0x758(r8)
    lwz r9, 0x75c(r5)
    stw r9, 0x75c(r8)
    lha r9, 0x760(r5)
    sth r9, 0x760(r8)
    lha r9, 0x762(r5)
    sth r9, 0x762(r8)
    lfs f0, 0x764(r5)
    stfs f0, 0x764(r8)
    lfs f0, 0x768(r5)
    stfs f0, 0x768(r8)
    lfs f0, 0x76c(r5)
    stfs f0, 0x76c(r8)
    lfs f0, 0x770(r5)
    stfs f0, 0x770(r8)
    bge lbl_fn_804FE2E0_00000C4C
    addi r26, r8, 0x940
    li r9, 0x0
    li r27, 0x0
    bgt lbl_fn_804FE2E0_00000A3C
    li r27, 0x1
lbl_fn_804FE2E0_00000A3C:
    cmpwi r27, 0x0
    beq lbl_fn_804FE2E0_00000A48
    li r9, 0x1
lbl_fn_804FE2E0_00000A48:
    cmpwi r9, 0x0
    beq lbl_fn_804FE2E0_00000BF4
    addi r9, r26, 0x9f
    subf r9, r6, r9
    divwu r9, r9, r12
    mtctr r9
    cmplw r6, r26
    bge lbl_fn_804FE2E0_00000BF4
lbl_fn_804FE2E0_00000A68:
    lha r9, 0x0(r7)
    sth r9, 0x0(r6)
    lha r9, 0x2(r7)
    sth r9, 0x2(r6)
    lfs f0, 0x4(r7)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    lha r9, 0x14(r7)
    sth r9, 0x14(r6)
    lha r9, 0x16(r7)
    sth r9, 0x16(r6)
    lfs f0, 0x18(r7)
    stfs f0, 0x18(r6)
    lfs f0, 0x1c(r7)
    stfs f0, 0x1c(r6)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r6)
    lfs f0, 0x24(r7)
    stfs f0, 0x24(r6)
    lha r9, 0x28(r7)
    sth r9, 0x28(r6)
    lha r9, 0x2a(r7)
    sth r9, 0x2a(r6)
    lfs f0, 0x2c(r7)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r7)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r7)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r7)
    stfs f0, 0x38(r6)
    lha r9, 0x3c(r7)
    sth r9, 0x3c(r6)
    lha r9, 0x3e(r7)
    sth r9, 0x3e(r6)
    lfs f0, 0x40(r7)
    stfs f0, 0x40(r6)
    lfs f0, 0x44(r7)
    stfs f0, 0x44(r6)
    lfs f0, 0x48(r7)
    stfs f0, 0x48(r6)
    lfs f0, 0x4c(r7)
    stfs f0, 0x4c(r6)
    lha r9, 0x50(r7)
    sth r9, 0x50(r6)
    lha r9, 0x52(r7)
    sth r9, 0x52(r6)
    lfs f0, 0x54(r7)
    stfs f0, 0x54(r6)
    lfs f0, 0x58(r7)
    stfs f0, 0x58(r6)
    lfs f0, 0x5c(r7)
    stfs f0, 0x5c(r6)
    lfs f0, 0x60(r7)
    stfs f0, 0x60(r6)
    lha r9, 0x64(r7)
    sth r9, 0x64(r6)
    lha r9, 0x66(r7)
    sth r9, 0x66(r6)
    lfs f0, 0x68(r7)
    stfs f0, 0x68(r6)
    lfs f0, 0x6c(r7)
    stfs f0, 0x6c(r6)
    lfs f0, 0x70(r7)
    stfs f0, 0x70(r6)
    lfs f0, 0x74(r7)
    stfs f0, 0x74(r6)
    lha r9, 0x78(r7)
    sth r9, 0x78(r6)
    lha r9, 0x7a(r7)
    sth r9, 0x7a(r6)
    lfs f0, 0x7c(r7)
    stfs f0, 0x7c(r6)
    lfs f0, 0x80(r7)
    stfs f0, 0x80(r6)
    lfs f0, 0x84(r7)
    stfs f0, 0x84(r6)
    lfs f0, 0x88(r7)
    stfs f0, 0x88(r6)
    lha r9, 0x8c(r7)
    sth r9, 0x8c(r6)
    lha r9, 0x8e(r7)
    sth r9, 0x8e(r6)
    lfs f0, 0x90(r7)
    stfs f0, 0x90(r6)
    lfs f0, 0x94(r7)
    stfs f0, 0x94(r6)
    lfs f0, 0x98(r7)
    stfs f0, 0x98(r6)
    lfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    stfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    bdnz lbl_fn_804FE2E0_00000A68
lbl_fn_804FE2E0_00000BF4:
    addi r27, r8, 0x9e0
    addi r9, r27, 0x13
    subf r9, r6, r9
    divwu r9, r9, r11
    mtctr r9
    cmplw r6, r27
    bge lbl_fn_804FE2E0_00000C4C
lbl_fn_804FE2E0_00000C10:
    lha r9, 0x0(r7)
    sth r9, 0x0(r6)
    lha r9, 0x2(r7)
    sth r9, 0x2(r6)
    lfs f0, 0x4(r7)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    addi r7, r7, 0x14
    stfs f0, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_804FE2E0_00000C10
lbl_fn_804FE2E0_00000C4C:
    lwz r7, 0x9e0(r5)
    addi r6, r8, 0xa88
    stw r7, 0x9e0(r8)
    addi r7, r8, 0xcf4
    cmplw r6, r7
    lwz r9, 0x9e8(r5)
    addi r7, r5, 0xa88
    lwz r27, 0x9e4(r5)
    stw r27, 0x9e4(r8)
    stw r9, 0x9e8(r8)
    lwz r9, 0x9f0(r5)
    lwz r27, 0x9ec(r5)
    stw r27, 0x9ec(r8)
    stw r9, 0x9f0(r8)
    lwz r9, 0x9f8(r5)
    lwz r27, 0x9f4(r5)
    stw r27, 0x9f4(r8)
    stw r9, 0x9f8(r8)
    lwz r9, 0xa00(r5)
    lwz r27, 0x9fc(r5)
    stw r27, 0x9fc(r8)
    stw r9, 0xa00(r8)
    lwz r9, 0xa08(r5)
    lwz r27, 0xa04(r5)
    stw r27, 0xa04(r8)
    stw r9, 0xa08(r8)
    lwz r9, 0xa10(r5)
    lwz r27, 0xa0c(r5)
    stw r27, 0xa0c(r8)
    stw r9, 0xa10(r8)
    lwz r9, 0xa18(r5)
    lwz r27, 0xa14(r5)
    stw r27, 0xa14(r8)
    stw r9, 0xa18(r8)
    lwz r9, 0xa20(r5)
    lwz r27, 0xa1c(r5)
    stw r27, 0xa1c(r8)
    stw r9, 0xa20(r8)
    lwz r9, 0xa24(r5)
    stw r9, 0xa24(r8)
    lhz r9, 0xa28(r5)
    sth r9, 0xa28(r8)
    lwz r9, 0xa2c(r5)
    stw r9, 0xa2c(r8)
    lwz r9, 0xa34(r5)
    lwz r27, 0xa30(r5)
    stw r27, 0xa30(r8)
    stw r9, 0xa34(r8)
    lwz r9, 0xa3c(r5)
    lwz r27, 0xa38(r5)
    stw r27, 0xa38(r8)
    stw r9, 0xa3c(r8)
    lwz r9, 0xa44(r5)
    lwz r27, 0xa40(r5)
    stw r27, 0xa40(r8)
    stw r9, 0xa44(r8)
    lwz r9, 0xa4c(r5)
    lwz r27, 0xa48(r5)
    stw r27, 0xa48(r8)
    stw r9, 0xa4c(r8)
    lwz r9, 0xa54(r5)
    lwz r27, 0xa50(r5)
    stw r27, 0xa50(r8)
    stw r9, 0xa54(r8)
    lwz r9, 0xa5c(r5)
    lwz r27, 0xa58(r5)
    stw r27, 0xa58(r8)
    stw r9, 0xa5c(r8)
    lwz r9, 0xa64(r5)
    lwz r27, 0xa60(r5)
    stw r27, 0xa60(r8)
    stw r9, 0xa64(r8)
    lwz r9, 0xa6c(r5)
    lwz r27, 0xa68(r5)
    stw r27, 0xa68(r8)
    stw r9, 0xa6c(r8)
    lwz r9, 0xa70(r5)
    stw r9, 0xa70(r8)
    lha r9, 0xa74(r5)
    sth r9, 0xa74(r8)
    lha r9, 0xa76(r5)
    sth r9, 0xa76(r8)
    lfs f0, 0xa78(r5)
    stfs f0, 0xa78(r8)
    lfs f0, 0xa7c(r5)
    stfs f0, 0xa7c(r8)
    lfs f0, 0xa80(r5)
    stfs f0, 0xa80(r8)
    lfs f0, 0xa84(r5)
    stfs f0, 0xa84(r8)
    bge lbl_fn_804FE2E0_00000FDC
    addi r27, r8, 0xc54
    li r9, 0x0
    li r26, 0x0
    bgt lbl_fn_804FE2E0_00000DCC
    li r26, 0x1
lbl_fn_804FE2E0_00000DCC:
    cmpwi r26, 0x0
    beq lbl_fn_804FE2E0_00000DD8
    li r9, 0x1
lbl_fn_804FE2E0_00000DD8:
    cmpwi r9, 0x0
    beq lbl_fn_804FE2E0_00000F84
    addi r9, r27, 0x9f
    subf r9, r6, r9
    divwu r9, r9, r10
    mtctr r9
    cmplw r6, r27
    bge lbl_fn_804FE2E0_00000F84
lbl_fn_804FE2E0_00000DF8:
    lha r9, 0x0(r7)
    sth r9, 0x0(r6)
    lha r9, 0x2(r7)
    sth r9, 0x2(r6)
    lfs f0, 0x4(r7)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    lha r9, 0x14(r7)
    sth r9, 0x14(r6)
    lha r9, 0x16(r7)
    sth r9, 0x16(r6)
    lfs f0, 0x18(r7)
    stfs f0, 0x18(r6)
    lfs f0, 0x1c(r7)
    stfs f0, 0x1c(r6)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r6)
    lfs f0, 0x24(r7)
    stfs f0, 0x24(r6)
    lha r9, 0x28(r7)
    sth r9, 0x28(r6)
    lha r9, 0x2a(r7)
    sth r9, 0x2a(r6)
    lfs f0, 0x2c(r7)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r7)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r7)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r7)
    stfs f0, 0x38(r6)
    lha r9, 0x3c(r7)
    sth r9, 0x3c(r6)
    lha r9, 0x3e(r7)
    sth r9, 0x3e(r6)
    lfs f0, 0x40(r7)
    stfs f0, 0x40(r6)
    lfs f0, 0x44(r7)
    stfs f0, 0x44(r6)
    lfs f0, 0x48(r7)
    stfs f0, 0x48(r6)
    lfs f0, 0x4c(r7)
    stfs f0, 0x4c(r6)
    lha r9, 0x50(r7)
    sth r9, 0x50(r6)
    lha r9, 0x52(r7)
    sth r9, 0x52(r6)
    lfs f0, 0x54(r7)
    stfs f0, 0x54(r6)
    lfs f0, 0x58(r7)
    stfs f0, 0x58(r6)
    lfs f0, 0x5c(r7)
    stfs f0, 0x5c(r6)
    lfs f0, 0x60(r7)
    stfs f0, 0x60(r6)
    lha r9, 0x64(r7)
    sth r9, 0x64(r6)
    lha r9, 0x66(r7)
    sth r9, 0x66(r6)
    lfs f0, 0x68(r7)
    stfs f0, 0x68(r6)
    lfs f0, 0x6c(r7)
    stfs f0, 0x6c(r6)
    lfs f0, 0x70(r7)
    stfs f0, 0x70(r6)
    lfs f0, 0x74(r7)
    stfs f0, 0x74(r6)
    lha r9, 0x78(r7)
    sth r9, 0x78(r6)
    lha r9, 0x7a(r7)
    sth r9, 0x7a(r6)
    lfs f0, 0x7c(r7)
    stfs f0, 0x7c(r6)
    lfs f0, 0x80(r7)
    stfs f0, 0x80(r6)
    lfs f0, 0x84(r7)
    stfs f0, 0x84(r6)
    lfs f0, 0x88(r7)
    stfs f0, 0x88(r6)
    lha r9, 0x8c(r7)
    sth r9, 0x8c(r6)
    lha r9, 0x8e(r7)
    sth r9, 0x8e(r6)
    lfs f0, 0x90(r7)
    stfs f0, 0x90(r6)
    lfs f0, 0x94(r7)
    stfs f0, 0x94(r6)
    lfs f0, 0x98(r7)
    stfs f0, 0x98(r6)
    lfs f0, 0x9c(r7)
    addi r7, r7, 0xa0
    stfs f0, 0x9c(r6)
    addi r6, r6, 0xa0
    bdnz lbl_fn_804FE2E0_00000DF8
lbl_fn_804FE2E0_00000F84:
    addi r27, r8, 0xcf4
    addi r9, r27, 0x13
    subf r9, r6, r9
    divwu r9, r9, r0
    mtctr r9
    cmplw r6, r27
    bge lbl_fn_804FE2E0_00000FDC
lbl_fn_804FE2E0_00000FA0:
    lha r9, 0x0(r7)
    sth r9, 0x0(r6)
    lha r9, 0x2(r7)
    sth r9, 0x2(r6)
    lfs f0, 0x4(r7)
    stfs f0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    addi r7, r7, 0x14
    stfs f0, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_804FE2E0_00000FA0
lbl_fn_804FE2E0_00000FDC:
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
    lwz r6, 0xd58(r5)
    stw r6, 0xd58(r8)
lbl_fn_804FE2E0_000010BC:
    lwz r7, 0x10(r3)
    lwz r6, 0x4(r3)
    subi r7, r7, 0x1
    stw r7, 0x10(r3)
    addi r6, r6, 0x1
    stw r6, 0x4(r3)
lbl_fn_804FE2E0_000010D4:
    cmplw r5, r4
    bgt lbl_fn_804FE2E0_00000048
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804FF3D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x13
    stw r0, 0x24(r1)
    addi r0, r4, 0x299e
    cmplw r5, r0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    ble lbl_fn_804FF3D4_00001144
    lis r3, __files@ha
    lis r4, lbl_80759E48@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80759E48@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804FF3D4_00001144:
    mulli r3, r30, 0xd5c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_804FF3D4_00001178
    lis r3, __files@ha
    lis r4, lbl_80791764@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80791764@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804FF3D4_00001178:
    stw r31, 0x0(r29)
    stw r30, 0x8(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804FF47C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80759E48@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80759E48@l
    addi r3, r3, 0x312
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_807C8AE8@ha
    addi r30, r30, lbl_807C8AE8@l
    bl fn_800DC6B4
    stw r3, lbl_8087F604
    la r3, lbl_8087F608
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    addi r5, r30, 0xc
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F608
    bl __register_global_object
    la r3, lbl_8087F60C
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    addi r5, r30, 0x18
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F60C
    bl __register_global_object
    addi r11, r30, 0x28
    li r9, 0x0
    li r31, 0x4
    li r12, 0x1
    li r8, -0x1
    li r10, 0x3
    li r7, 0x9
    li r6, 0x8
    li r5, 0x2
    li r4, 0x7
    li r3, 0x5
    stw r31, 0x28(r30)
    stw r12, 0x4(r11)
    stw r10, 0x8(r11)
    stw r9, 0xc(r11)
    stw r8, 0x10(r11)
    stw r9, 0x14(r11)
    stw r9, 0x18(r11)
    stw r9, 0x1c(r11)
    stw r9, 0x20(r11)
    stw r31, 0x24(r11)
    stw r12, 0x28(r11)
    stw r12, 0x2c(r11)
    stw r9, 0x30(r11)
    stw r8, 0x34(r11)
    stw r9, 0x38(r11)
    stw r9, 0x3c(r11)
    stw r9, 0x40(r11)
    stw r9, 0x44(r11)
    stw r31, 0x48(r11)
    stw r12, 0x4c(r11)
    stw r7, 0x50(r11)
    stw r9, 0x54(r11)
    stw r8, 0x58(r11)
    stw r9, 0x5c(r11)
    stw r9, 0x60(r11)
    stw r9, 0x64(r11)
    stw r9, 0x68(r11)
    stw r31, 0x6c(r11)
    stw r12, 0x70(r11)
    stw r6, 0x74(r11)
    stw r9, 0x78(r11)
    stw r8, 0x7c(r11)
    stw r9, 0x80(r11)
    stw r9, 0x84(r11)
    stw r9, 0x88(r11)
    stw r9, 0x8c(r11)
    stw r31, 0x90(r11)
    stw r12, 0x94(r11)
    stw r5, 0x98(r11)
    stw r9, 0x9c(r11)
    stw r8, 0xa0(r11)
    stw r9, 0xa4(r11)
    stw r9, 0xa8(r11)
    stw r9, 0xac(r11)
    stw r9, 0xb0(r11)
    stw r31, 0xb4(r11)
    stw r12, 0xb8(r11)
    stw r4, 0xbc(r11)
    stw r9, 0xc0(r11)
    stw r8, 0xc4(r11)
    stw r9, 0xc8(r11)
    stw r9, 0xcc(r11)
    stw r9, 0xd0(r11)
    stw r9, 0xd4(r11)
    stw r31, 0xd8(r11)
    stw r12, 0xdc(r11)
    stw r31, 0xe0(r11)
    stw r9, 0xe4(r11)
    stw r8, 0xe8(r11)
    stw r9, 0xec(r11)
    stw r9, 0xf0(r11)
    stw r9, 0xf4(r11)
    stw r9, 0xf8(r11)
    stw r31, 0xfc(r11)
    stw r12, 0x100(r11)
    stw r3, 0x104(r11)
    stw r9, 0x108(r11)
    stw r8, 0x10c(r11)
    li r0, 0x6
    stw r9, 0x110(r11)
    stw r9, 0x114(r11)
    stw r9, 0x118(r11)
    stw r9, 0x11c(r11)
    stw r31, 0x120(r11)
    stw r12, 0x124(r11)
    stw r0, 0x128(r11)
    stw r9, 0x12c(r11)
    stw r8, 0x130(r11)
    stw r9, 0x134(r11)
    stw r9, 0x138(r11)
    stw r9, 0x13c(r11)
    stw r9, 0x140(r11)
    stw r31, 0x144(r11)
    stw r12, 0x148(r11)
    stw r12, 0x14c(r11)
    stw r9, 0x150(r11)
    stw r8, 0x154(r11)
    stw r9, 0x158(r11)
    stw r9, 0x15c(r11)
    stw r9, 0x160(r11)
    stw r9, 0x164(r11)
    stw r31, 0x168(r11)
    stw r12, 0x16c(r11)
    stw r10, 0x170(r11)
    stw r9, 0x174(r11)
    stw r8, 0x178(r11)
    stw r9, 0x17c(r11)
    stw r9, 0x180(r11)
    stw r9, 0x184(r11)
    stw r9, 0x188(r11)
    stw r31, 0x18c(r11)
    stw r12, 0x190(r11)
    stw r12, 0x194(r11)
    stw r9, 0x198(r11)
    stw r8, 0x19c(r11)
    stw r9, 0x1a0(r11)
    stw r9, 0x1a4(r11)
    stw r9, 0x1a8(r11)
    stw r9, 0x1ac(r11)
    stw r31, 0x1b0(r11)
    stw r12, 0x1b4(r11)
    stw r7, 0x1b8(r11)
    stw r9, 0x1bc(r11)
    stw r8, 0x1c0(r11)
    stw r9, 0x1c4(r11)
    stw r9, 0x1c8(r11)
    stw r9, 0x1cc(r11)
    stw r9, 0x1d0(r11)
    stw r31, 0x1d4(r11)
    stw r12, 0x1d8(r11)
    stw r6, 0x1dc(r11)
    stw r9, 0x1e0(r11)
    stw r8, 0x1e4(r11)
    stw r9, 0x1e8(r11)
    stw r9, 0x1ec(r11)
    stw r9, 0x1f0(r11)
    stw r9, 0x1f4(r11)
    stw r31, 0x1f8(r11)
    stw r12, 0x1fc(r11)
    stw r5, 0x200(r11)
    stw r9, 0x204(r11)
    stw r8, 0x208(r11)
    stw r9, 0x20c(r11)
    stw r9, 0x210(r11)
    stw r9, 0x214(r11)
    stw r9, 0x218(r11)
    stw r31, 0x21c(r11)
    stw r12, 0x220(r11)
    stw r4, 0x224(r11)
    stw r9, 0x228(r11)
    stw r8, 0x22c(r11)
    stw r9, 0x230(r11)
    stw r9, 0x234(r11)
    stw r9, 0x238(r11)
    stw r9, 0x23c(r11)
    stw r31, 0x240(r11)
    stw r12, 0x244(r11)
    stw r31, 0x248(r11)
    stw r9, 0x24c(r11)
    stw r8, 0x250(r11)
    stw r9, 0x254(r11)
    stw r9, 0x258(r11)
    stw r9, 0x25c(r11)
    stw r9, 0x260(r11)
    stw r31, 0x264(r11)
    stw r12, 0x268(r11)
    stw r3, 0x26c(r11)
    stw r9, 0x270(r11)
    stw r8, 0x274(r11)
    stw r9, 0x278(r11)
    stw r9, 0x27c(r11)
    stw r9, 0x280(r11)
    stw r9, 0x284(r11)
    stw r31, 0x288(r11)
    stw r12, 0x28c(r11)
    stw r0, 0x290(r11)
    stw r9, 0x294(r11)
    stw r8, 0x298(r11)
    stw r9, 0x29c(r11)
    stw r9, 0x2a0(r11)
    stw r9, 0x2a4(r11)
    stw r9, 0x2a8(r11)
    stw r31, 0x2ac(r11)
    stw r12, 0x2b0(r11)
    stw r12, 0x2b4(r11)
    stw r9, 0x2b8(r11)
    stw r8, 0x2bc(r11)
    stw r9, 0x2c0(r11)
    stw r9, 0x2c4(r11)
    stw r9, 0x2c8(r11)
    stw r9, 0x2cc(r11)
    stw r10, 0x2d0(r11)
    stw r10, 0x2d4(r11)
    stw r4, 0x2d8(r11)
    stw r9, 0x2dc(r11)
    stw r8, 0x2e0(r11)
    stw r9, 0x2e4(r11)
    stw r9, 0x2e8(r11)
    stw r9, 0x2ec(r11)
    stw r9, 0x2f0(r11)
    stw r10, 0x2f4(r11)
    stw r10, 0x2f8(r11)
    stw r5, 0x2fc(r11)
    stw r9, 0x300(r11)
    stw r8, 0x304(r11)
    stw r9, 0x308(r11)
    stw r9, 0x30c(r11)
    stw r9, 0x310(r11)
    stw r9, 0x314(r11)
    stw r10, 0x318(r11)
    stw r10, 0x31c(r11)
    stw r0, 0x320(r11)
    stw r9, 0x324(r11)
    stw r8, 0x328(r11)
    stw r9, 0x32c(r11)
    stw r9, 0x330(r11)
    stw r9, 0x334(r11)
    stw r9, 0x338(r11)
    stw r10, 0x33c(r11)
    stw r10, 0x340(r11)
    stw r12, 0x344(r11)
    stw r9, 0x348(r11)
    stw r8, 0x34c(r11)
    stw r9, 0x350(r11)
    stw r9, 0x354(r11)
    stw r9, 0x358(r11)
    stw r9, 0x35c(r11)
    stw r10, 0x360(r11)
    stw r10, 0x364(r11)
    stw r10, 0x368(r11)
    stw r9, 0x36c(r11)
    stw r8, 0x370(r11)
    stw r9, 0x374(r11)
    stw r9, 0x378(r11)
    stw r9, 0x37c(r11)
    stw r9, 0x380(r11)
    stw r10, 0x384(r11)
    stw r10, 0x388(r11)
    stw r31, 0x38c(r11)
    stw r9, 0x390(r11)
    stw r8, 0x394(r11)
    stw r9, 0x398(r11)
    stw r9, 0x39c(r11)
    stw r9, 0x3a0(r11)
    stw r9, 0x3a4(r11)
    stw r10, 0x3a8(r11)
    stw r10, 0x3ac(r11)
    stw r3, 0x3b0(r11)
    stw r9, 0x3b4(r11)
    stw r8, 0x3b8(r11)
    stw r9, 0x3bc(r11)
    stw r9, 0x3c0(r11)
    stw r9, 0x3c4(r11)
    stw r9, 0x3c8(r11)
    stw r10, 0x3cc(r11)
    stw r10, 0x3d0(r11)
    stw r10, 0x3d4(r11)
    stw r9, 0x3d8(r11)
    stw r8, 0x3dc(r11)
    stw r9, 0x3e0(r11)
    stw r9, 0x3e4(r11)
    stw r9, 0x3e8(r11)
    stw r9, 0x3ec(r11)
    stw r10, 0x3f0(r11)
    stw r10, 0x3f4(r11)
    stw r12, 0x3f8(r11)
    stw r9, 0x3fc(r11)
    stw r8, 0x400(r11)
    stw r9, 0x404(r11)
    stw r9, 0x408(r11)
    stw r9, 0x40c(r11)
    stw r9, 0x410(r11)
    stw r10, 0x414(r11)
    stw r10, 0x418(r11)
    stw r12, 0x41c(r11)
    stw r9, 0x420(r11)
    stw r8, 0x424(r11)
    stw r9, 0x428(r11)
    stw r9, 0x42c(r11)
    stw r9, 0x430(r11)
    stw r9, 0x434(r11)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FF964(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F620
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C8F68@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F620
    addi r5, r5, lbl_807C8F68@l
    bl __register_global_object
    la r3, lbl_8087F624
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C8F74@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F624
    addi r5, r5, lbl_807C8F74@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804FF9C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x1021
    stw r0, 0x14(r1)
    beq lbl_fn_804FF9C0_00001960
    bge lbl_fn_804FF9C0_00001804
    cmpwi r4, 0x1009
    beq lbl_fn_804FF9C0_000019A8
    bge lbl_fn_804FF9C0_00001788
    cmpwi r4, 0x14
    beq lbl_fn_804FF9C0_00001A38
    bge lbl_fn_804FF9C0_0000174C
    cmpwi r4, 0x9
    beq lbl_fn_804FF9C0_00001A20
    bge lbl_fn_804FF9C0_00001734
    cmpwi r4, 0x7
    beq lbl_fn_804FF9C0_00001B00
    bge lbl_fn_804FF9C0_00001A18
    cmpwi r4, 0x6
    bge lbl_fn_804FF9C0_00001A10
    b lbl_fn_804FF9C0_00001B00
lbl_fn_804FF9C0_00001734:
    cmpwi r4, 0x10
    beq lbl_fn_804FF9C0_00001A28
    blt lbl_fn_804FF9C0_00001B00
    cmpwi r4, 0x13
    bge lbl_fn_804FF9C0_00001A30
    b lbl_fn_804FF9C0_00001B00
lbl_fn_804FF9C0_0000174C:
    cmpwi r4, 0x1004
    beq lbl_fn_804FF9C0_00001980
    bge lbl_fn_804FF9C0_00001770
    cmpwi r4, 0x1002
    beq lbl_fn_804FF9C0_00001970
    bge lbl_fn_804FF9C0_00001978
    cmpwi r4, 0x1001
    bge lbl_fn_804FF9C0_00001968
    b lbl_fn_804FF9C0_00001B00
lbl_fn_804FF9C0_00001770:
    cmpwi r4, 0x1007
    beq lbl_fn_804FF9C0_00001998
    bge lbl_fn_804FF9C0_000019A0
    cmpwi r4, 0x1006
    bge lbl_fn_804FF9C0_00001990
    b lbl_fn_804FF9C0_00001988
lbl_fn_804FF9C0_00001788:
    cmpwi r4, 0x1016
    beq lbl_fn_804FF9C0_00001900
    bge lbl_fn_804FF9C0_000017D0
    cmpwi r4, 0x1011
    beq lbl_fn_804FF9C0_00001AA8
    bge lbl_fn_804FF9C0_000017B8
    cmpwi r4, 0x100b
    beq lbl_fn_804FF9C0_000019B8
    blt lbl_fn_804FF9C0_000019B0
    cmpwi r4, 0x1010
    bge lbl_fn_804FF9C0_000019C0
    b lbl_fn_804FF9C0_00001B00
lbl_fn_804FF9C0_000017B8:
    cmpwi r4, 0x1014
    beq lbl_fn_804FF9C0_00001908
    bge lbl_fn_804FF9C0_00001910
    cmpwi r4, 0x1013
    bge lbl_fn_804FF9C0_000019C8
    b lbl_fn_804FF9C0_00001AB0
lbl_fn_804FF9C0_000017D0:
    cmpwi r4, 0x101c
    beq lbl_fn_804FF9C0_000019E0
    bge lbl_fn_804FF9C0_000017F4
    cmpwi r4, 0x101a
    beq lbl_fn_804FF9C0_000019D0
    bge lbl_fn_804FF9C0_000019D8
    cmpwi r4, 0x1018
    bge lbl_fn_804FF9C0_00001B00
    b lbl_fn_804FF9C0_00001918
lbl_fn_804FF9C0_000017F4:
    cmpwi r4, 0x101e
    beq lbl_fn_804FF9C0_000019F0
    bge lbl_fn_804FF9C0_00001B00
    b lbl_fn_804FF9C0_000019E8
lbl_fn_804FF9C0_00001804:
    cmpwi r4, 0x1039
    beq lbl_fn_804FF9C0_00001A70
    bge lbl_fn_804FF9C0_0000188C
    cmpwi r4, 0x1030
    beq lbl_fn_804FF9C0_00001950
    bge lbl_fn_804FF9C0_00001858
    cmpwi r4, 0x1026
    beq lbl_fn_804FF9C0_00001B00
    bge lbl_fn_804FF9C0_00001840
    cmpwi r4, 0x1024
    beq lbl_fn_804FF9C0_00001920
    bge lbl_fn_804FF9C0_00001928
    cmpwi r4, 0x1023
    bge lbl_fn_804FF9C0_000019F8
    b lbl_fn_804FF9C0_00001958
lbl_fn_804FF9C0_00001840:
    cmpwi r4, 0x102e
    beq lbl_fn_804FF9C0_00001938
    bge lbl_fn_804FF9C0_00001940
    cmpwi r4, 0x1028
    bge lbl_fn_804FF9C0_00001B00
    b lbl_fn_804FF9C0_00001930
lbl_fn_804FF9C0_00001858:
    cmpwi r4, 0x1035
    beq lbl_fn_804FF9C0_00001A50
    bge lbl_fn_804FF9C0_0000187C
    cmpwi r4, 0x1033
    beq lbl_fn_804FF9C0_00001A40
    bge lbl_fn_804FF9C0_00001A48
    cmpwi r4, 0x1032
    bge lbl_fn_804FF9C0_00001A08
    b lbl_fn_804FF9C0_00001A00
lbl_fn_804FF9C0_0000187C:
    cmpwi r4, 0x1037
    beq lbl_fn_804FF9C0_00001A60
    bge lbl_fn_804FF9C0_00001A68
    b lbl_fn_804FF9C0_00001A58
lbl_fn_804FF9C0_0000188C:
    cmpwi r4, 0x1042
    beq lbl_fn_804FF9C0_00001AC8
    bge lbl_fn_804FF9C0_000018CC
    cmpwi r4, 0x103e
    beq lbl_fn_804FF9C0_00001A98
    bge lbl_fn_804FF9C0_000018BC
    cmpwi r4, 0x103c
    beq lbl_fn_804FF9C0_00001A88
    bge lbl_fn_804FF9C0_00001A90
    cmpwi r4, 0x103b
    bge lbl_fn_804FF9C0_00001A80
    b lbl_fn_804FF9C0_00001A78
lbl_fn_804FF9C0_000018BC:
    cmpwi r4, 0x1040
    beq lbl_fn_804FF9C0_00001AB8
    bge lbl_fn_804FF9C0_00001AC0
    b lbl_fn_804FF9C0_00001AA0
lbl_fn_804FF9C0_000018CC:
    cmpwi r4, 0x1047
    beq lbl_fn_804FF9C0_00001AF0
    bge lbl_fn_804FF9C0_000018F0
    cmpwi r4, 0x1045
    beq lbl_fn_804FF9C0_00001AE0
    bge lbl_fn_804FF9C0_00001AE8
    cmpwi r4, 0x1044
    bge lbl_fn_804FF9C0_00001AD8
    b lbl_fn_804FF9C0_00001AD0
lbl_fn_804FF9C0_000018F0:
    cmpwi r4, 0x1049
    beq lbl_fn_804FF9C0_00001948
    bge lbl_fn_804FF9C0_00001B00
    b lbl_fn_804FF9C0_00001AF8
lbl_fn_804FF9C0_00001900:
    li r3, 0x1
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001908:
    li r3, 0x2
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001910:
    li r3, 0x3
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001918:
    li r3, 0x4
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001920:
    li r3, 0x5
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001928:
    li r3, 0x3a
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001930:
    li r3, 0x6
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001938:
    li r3, 0x7
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001940:
    li r3, 0x8
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001948:
    li r3, 0x40
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001950:
    li r3, 0x9
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001958:
    li r3, 0xa
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001960:
    li r3, 0xb
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001968:
    li r3, 0xc
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001970:
    li r3, 0xd
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001978:
    li r3, 0xe
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001980:
    li r3, 0xf
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001988:
    li r3, 0x10
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001990:
    li r3, 0x11
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001998:
    li r3, 0x12
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019A0:
    li r3, 0x13
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019A8:
    li r3, 0x14
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019B0:
    li r3, 0x15
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019B8:
    li r3, 0x16
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019C0:
    li r3, 0x17
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019C8:
    li r3, 0x18
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019D0:
    li r3, 0x19
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019D8:
    li r3, 0x1a
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019E0:
    li r3, 0x1b
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019E8:
    li r3, 0x1c
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019F0:
    li r3, 0x1d
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_000019F8:
    li r3, 0x1e
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A00:
    li r3, 0x1f
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A08:
    li r3, 0x20
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A10:
    li r3, 0x21
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A18:
    li r3, 0x22
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A20:
    li r3, 0x23
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A28:
    li r3, 0x24
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A30:
    li r3, 0x25
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A38:
    li r3, 0x26
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A40:
    li r3, 0x27
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A48:
    li r3, 0x28
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A50:
    li r3, 0x29
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A58:
    li r3, 0x2a
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A60:
    li r3, 0x2b
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A68:
    li r3, 0x2c
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A70:
    li r3, 0x2d
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A78:
    li r3, 0x2e
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A80:
    li r3, 0x2f
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A88:
    li r3, 0x30
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A90:
    li r3, 0x31
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001A98:
    li r3, 0x32
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AA0:
    li r3, 0x33
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AA8:
    li r3, 0x34
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AB0:
    li r3, 0x35
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AB8:
    li r3, 0x36
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AC0:
    li r3, 0x37
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AC8:
    li r3, 0x38
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AD0:
    li r3, 0x39
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AD8:
    li r3, 0x3b
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AE0:
    li r3, 0x3c
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AE8:
    li r3, 0x3d
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AF0:
    li r3, 0x3e
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001AF8:
    li r3, 0x3f
    b lbl_fn_804FF9C0_00001B18
lbl_fn_804FF9C0_00001B00:
    lis r5, lbl_8075A844@ha
    li r4, 0x0
    addi r5, r5, lbl_8075A844@l
    crclr 6
    bl fn_8050E630
    li r3, 0x0
lbl_fn_804FF9C0_00001B18:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
