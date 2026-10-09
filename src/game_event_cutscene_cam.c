#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_80061824(void);
extern void fn_8006A950(void);
extern void fn_8006B404(void);
extern void fn_80079044(void);
extern void fn_80079090(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800DC6B4(void);
extern void fn_8046C3FC(void);
extern void fn_8046D1EC(void);
extern void fn_8046F5CC(void);
extern void fn_8046F834(void);
extern void fn_804714A4(void);
extern void fn_804714B0(void);
extern void fn_8047202C(void);
extern void fn_80472FAC(void);
extern void fn_8047304C(void);
extern void fn_804730D4(void);
extern void fn_80473104(void);
extern void fn_80473F88(void);
extern void fn_805BDD20(void);
extern void fn_805BDD78(void);
extern void fn_80615FF0(void);
extern void fn_80680770(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern void fn_8068AD58(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80756078[];
extern u8 lbl_807560A8[];
extern u8 lbl_807560D0[];
extern u8 lbl_807560E8[];
extern u8 lbl_807560F0[];
extern u8 lbl_80756108[];
extern u8 lbl_80779810[];
extern u8 lbl_8078FF38[];
extern u8 lbl_8078FF88[];
extern u8 lbl_8078FFD8[];
extern u8 lbl_80790028[];
extern u8 lbl_807C8A68[];

/* Small data declarations */
extern u32 lbl_8087E068;
extern u32 lbl_8087E06C;
extern u32 lbl_8087E070;
extern u32 lbl_8087E074;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F518;
extern u32 lbl_8087F528;
extern u32 lbl_80886F08;
extern u32 lbl_80886F10;
extern u32 lbl_80886F14;
extern u32 lbl_80886F18;
extern u32 lbl_80886F1C;
extern u32 lbl_80886F20;
extern u32 lbl_80886F24;
extern u32 lbl_80886F28;
extern u32 lbl_80886F2C;
extern u32 lbl_80886F30;
extern u32 lbl_80886F34;
extern u32 lbl_80886F38;
extern u32 lbl_80886F3C;
extern u32 lbl_80886F40;
extern u32 lbl_80886F44;
extern u32 lbl_80886F48;
extern u32 lbl_80886F4C;
extern u32 lbl_80886F50;
extern u32 lbl_80886F54;
extern u32 lbl_80886F58;
extern u32 lbl_80886F5C;
extern u32 lbl_80886F60;

/* Function declarations */
void fn_8047782C(void);
void fn_804778DC(void);
void fn_80477D60(void);
void fn_80477DAC(void);
void fn_80477DB8(void);
void fn_80477FA4(void);
void fn_80477FC0(void);
void fn_80477FDC(void);
void fn_80477FF8(void);
void fn_80478014(void);
void fn_80478034(void);
void fn_80478054(void);
void fn_804780AC(void);
void fn_80478158(void);
void fn_80478198(void);
void fn_804781B8(void);
void fn_80478204(void);
void fn_804783DC(void);
void fn_8047845C(void);
void fn_804784CC(void);
void fn_80478518(void);
void fn_804786F8(void);
void fn_80478714(void);
void fn_804787CC(void);
void fn_804787EC(void);
void fn_8047882C(void);
void fn_804788B4(void);
void fn_804788BC(void);
void fn_80478A70(void);

asm void fn_8047782C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_8047782C_0000009C
    li r4, 0x3
    bl fn_80473104
    addi r3, r1, 0x8
    bl fn_804714A4
    li r0, 0x0
    stw r0, 0xc(r1)
    addi r3, r1, 0x8
    addi r6, r1, 0xc
    lwz r4, 0x54(r31)
    li r7, 0x0
    lwz r5, 0x50(r31)
    bl fn_804714B0
    addic. r3, r1, 0xc
    beq lbl_fn_8047782C_0000008C
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8047782C_0000008C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8047782C_00000084
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047782C_00000084:
    li r0, 0x0
    stw r0, 0xc(r1)
lbl_fn_8047782C_0000008C:
    lwz r4, 0x54(r31)
    mr r3, r31
    addi r4, r4, 0x10
    bl fn_804778DC
lbl_fn_8047782C_0000009C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804778DC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xe0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x6c(r3)
    mr r15, r3
    lwz r14, 0x10(r4)
    mr r16, r4
    cmpwi r0, 0x0
    beq lbl_fn_804778DC_00000104
    lis r4, fn_8004B338@ha
    mr r3, r0
    addi r4, r4, fn_8004B338@l
    bl fn_80695A50
lbl_fn_804778DC_00000104:
    cmpwi r14, 0x0
    stw r14, 0x68(r15)
    beq lbl_fn_804778DC_00000150
    mulli r3, r14, 0x1f4
    li r4, 0x0
    la r5, lbl_8087E074
    la r6, lbl_8087E070
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80477DAC@ha
    lis r5, fn_8004B338@ha
    mr r7, r14
    li r6, 0x1f4
    addi r4, r4, fn_80477DAC@l
    addi r5, r5, fn_8004B338@l
    bl fn_80695720
    stw r3, 0x6c(r15)
    b lbl_fn_804778DC_00000158
lbl_fn_804778DC_00000150:
    li r0, 0x0
    stw r0, 0x6c(r15)
lbl_fn_804778DC_00000158:
    li r19, 0x0
    stw r19, 0x80(r1)
    li r31, 0x0
    li r30, 0x0
    stw r19, 0x78(r1)
    mr r26, r19
    mr r27, r19
    mr r28, r19
    stw r19, 0x7c(r1)
    mr r29, r19
    mr r20, r19
    mr r21, r19
    stw r19, 0x88(r1)
    mr r22, r19
    mr r23, r19
    mr r24, r19
    stw r19, 0x84(r1)
    mr r25, r19
    mr r14, r19
    b lbl_fn_804778DC_000003CC
lbl_fn_804778DC_000001A8:
    lwz r3, 0x14(r16)
    addi r4, r1, 0x24
    lwz r0, 0x6c(r15)
    lwzx r18, r3, r30
    lfs f1, lbl_80886F08
    add r17, r0, r31
    sth r20, 0x24(r1)
    addi r3, r18, 0x20
    bl fn_8047202C
    fmr f30, f1
    sth r21, 0x22(r1)
    lfs f1, lbl_80886F08
    addi r3, r18, 0x2c
    addi r4, r1, 0x22
    bl fn_8047202C
    fmr f29, f1
    sth r22, 0x20(r1)
    lfs f1, lbl_80886F08
    addi r3, r18, 0x38
    addi r4, r1, 0x20
    bl fn_8047202C
    stfs f30, 0x8(r17)
    addi r3, r18, 0x98
    addi r4, r1, 0x1e
    stfs f29, 0xc(r17)
    stfs f1, 0x10(r17)
    lfs f1, lbl_80886F08
    sth r23, 0x1e(r1)
    bl fn_8047202C
    stfs f1, 0x54(r17)
    fmr f29, f1
    lfs f1, lbl_80886F08
    addi r3, r18, 0xa4
    sth r24, 0x1c(r1)
    addi r4, r1, 0x1c
    bl fn_8047202C
    stfs f1, 0xc8(r17)
    addi r3, r18, 0xb0
    lfs f1, lbl_80886F08
    addi r4, r1, 0x1a
    sth r25, 0x1a(r1)
    bl fn_8047202C
    stfs f1, 0xcc(r17)
    lwz r0, 0x14(r18)
    cmpwi r0, 0x1
    bne lbl_fn_804778DC_000002D4
    sth r26, 0x18(r1)
    addi r3, r18, 0x44
    lfs f1, lbl_80886F08
    addi r4, r1, 0x18
    bl fn_8047202C
    fmr f31, f1
    sth r27, 0x16(r1)
    lfs f1, lbl_80886F08
    addi r3, r18, 0x50
    addi r4, r1, 0x16
    bl fn_8047202C
    fmr f30, f1
    sth r28, 0x14(r1)
    lfs f1, lbl_80886F08
    addi r3, r18, 0x5c
    addi r4, r1, 0x14
    bl fn_8047202C
    stfs f31, 0x14(r17)
    addi r3, r18, 0x8c
    addi r4, r1, 0x12
    stfs f30, 0x18(r17)
    stfs f1, 0x1c(r17)
    lfs f1, lbl_80886F08
    sth r29, 0x12(r1)
    bl fn_8047202C
    stfs f1, 0x38(r17)
    li r0, 0x2
    stw r0, 0x0(r17)
    b lbl_fn_804778DC_00000348
lbl_fn_804778DC_000002D4:
    sth r14, 0x10(r1)
    addi r3, r18, 0x68
    lfs f1, lbl_80886F08
    addi r4, r1, 0x10
    bl fn_8047202C
    fmr f30, f1
    lwz r0, 0x78(r1)
    sth r0, 0xe(r1)
    addi r3, r18, 0x74
    lfs f1, lbl_80886F08
    addi r4, r1, 0xe
    bl fn_8047202C
    fmr f31, f1
    lwz r0, 0x7c(r1)
    sth r0, 0xc(r1)
    addi r3, r18, 0x80
    lfs f1, lbl_80886F08
    addi r4, r1, 0xc
    bl fn_8047202C
    stfs f30, 0x28(r1)
    addi r3, r1, 0x28
    frsp f2, f1
    li r0, 0x1
    stfs f31, 0x2c(r1)
    stfs f1, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r17), 0, 0
    stfs f2, 0x34(r17)
    stw r0, 0x0(r17)
lbl_fn_804778DC_00000348:
    lwz r0, 0x18(r18)
    cmpwi r0, 0x1
    bne lbl_fn_804778DC_0000037C
    lwz r0, 0x80(r1)
    addi r3, r18, 0xbc
    sth r0, 0xa(r1)
    addi r4, r1, 0xa
    lfs f1, lbl_80886F08
    bl fn_8047202C
    stfs f1, 0x50(r17)
    lwz r0, 0x84(r1)
    stw r0, 0x4(r17)
    b lbl_fn_804778DC_000003B8
lbl_fn_804778DC_0000037C:
    lwz r0, 0x88(r1)
    addi r3, r18, 0xc8
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    lfs f1, lbl_80886F08
    bl fn_8047202C
    fneg f3, f1
    stfs f1, 0x3c(r17)
    fmuls f0, f1, f29
    li r0, 0x1
    stfs f3, 0x40(r17)
    fmuls f3, f3, f29
    stfs f3, 0x44(r17)
    stfs f0, 0x48(r17)
    stw r0, 0x4(r17)
lbl_fn_804778DC_000003B8:
    mr r3, r17
    bl fn_8004B378
    addi r19, r19, 0x1
    addi r31, r31, 0x1f4
    addi r30, r30, 0x4
lbl_fn_804778DC_000003CC:
    lwz r0, 0x10(r16)
    cmpw r19, r0
    blt lbl_fn_804778DC_000001A8
    lwz r3, 0x64(r15)
    lwz r14, 0x20(r16)
    cmpwi r3, 0x0
    beq lbl_fn_804778DC_000003F4
    beq lbl_fn_804778DC_000003F4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804778DC_000003F4:
    cmpwi r14, 0x0
    stw r14, 0x60(r15)
    beq lbl_fn_804778DC_0000043C
    mulli r3, r14, 0x44
    li r4, 0x0
    la r5, lbl_8087E06C
    la r6, lbl_8087E068
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80079044@ha
    mr r7, r14
    addi r4, r4, fn_80079044@l
    li r5, 0x0
    li r6, 0x44
    bl fn_80695720
    stw r3, 0x64(r15)
    b lbl_fn_804778DC_00000444
lbl_fn_804778DC_0000043C:
    li r0, 0x0
    stw r0, 0x64(r15)
lbl_fn_804778DC_00000444:
    addi r20, r1, 0x3c
    addi r19, r1, 0x48
    li r14, 0x0
    li r17, 0x0
    li r18, 0x0
    b lbl_fn_804778DC_000004F8
lbl_fn_804778DC_0000045C:
    lwz r4, 0x24(r16)
    addi r3, r1, 0x34
    lwzx r4, r4, r18
    bl fn_80079090
    lwz r3, 0x64(r15)
    addi r14, r14, 0x1
    lwz r0, 0x34(r1)
    addi r18, r18, 0x4
    stwx r0, r3, r17
    add r4, r3, r17
    addi r17, r17, 0x44
    lwz r0, 0x38(r1)
    stw r0, 0x4(r4)
    lfs f2, 0x44(r1)
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x50(r1)
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lwz r0, 0x54(r1)
    stw r0, 0x20(r4)
    lfs f0, 0x58(r1)
    stfs f0, 0x24(r4)
    lfs f0, 0x5c(r1)
    stfs f0, 0x28(r4)
    lfs f0, 0x60(r1)
    stfs f0, 0x2c(r4)
    lfs f0, 0x64(r1)
    stfs f0, 0x30(r4)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x34(r4)
    stw r0, 0x38(r4)
    lwz r0, 0x74(r1)
    lwz r3, 0x70(r1)
    stw r3, 0x3c(r4)
    stw r0, 0x40(r4)
lbl_fn_804778DC_000004F8:
    lwz r0, 0x20(r16)
    cmpw r14, r0
    blt lbl_fn_804778DC_0000045C
    addi r11, r1, 0xe0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    bl _restgpr_14
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80477D60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80477DB8
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80477DAC(void)
{
    nofralloc
    li r4, 0x0
    li r5, 0x0
    b fn_8004B290
}

asm void fn_80477DB8(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_80477DB8_00000638
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80477DB8_000005F0
lbl_fn_80477DB8_000005EC:
    lwz r4, 0x4(r4)
lbl_fn_80477DB8_000005F0:
    cmplw r4, r0
    beq lbl_fn_80477DB8_00000608
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80477DB8_000005EC
lbl_fn_80477DB8_00000608:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80477DB8_00000628
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80477DB8_00000628
    b lbl_fn_80477DB8_00000638
lbl_fn_80477DB8_00000628:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80477DB8_00000638:
    cmpwi r30, 0x0
    bne lbl_fn_80477DB8_0000074C
    lis r5, lbl_80756078@ha
    li r3, 0x70
    addi r5, r5, lbl_80756078@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80477DB8_00000690
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FF38@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FF38@l
    stw r3, 0x0(r30)
    stw r0, 0x60(r30)
    stw r0, 0x64(r30)
    stw r0, 0x68(r30)
    stw r0, 0x6c(r30)
lbl_fn_80477DB8_00000690:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80477DB8_00000730
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80477DB8_000006DC
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80477DB8_000006DC:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80477DB8_000006F4
    stw r30, 0x0(r3)
lbl_fn_80477DB8_000006F4:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_80477DB8_00000754
    bl dtor_80084684
    b lbl_fn_80477DB8_00000754
lbl_fn_80477DB8_00000730:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80477DB8_00000754
lbl_fn_80477DB8_0000074C:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80477DB8_00000754:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80477FA4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80477FA4_0000078C
    lwz r3, 0x64(r3)
    blr
lbl_fn_80477FA4_0000078C:
    li r3, 0x0
    blr
}

asm void fn_80477FC0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80477FC0_000007A8
    lwz r3, 0x6c(r3)
    blr
lbl_fn_80477FC0_000007A8:
    li r3, 0x0
    blr
}

asm void fn_80477FDC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80477FDC_000007C4
    lwz r3, 0x60(r3)
    blr
lbl_fn_80477FDC_000007C4:
    li r3, 0x0
    blr
}

asm void fn_80477FF8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80477FF8_000007E0
    lwz r3, 0x68(r3)
    blr
lbl_fn_80477FF8_000007E0:
    li r3, 0x0
    blr
}

asm void fn_80478014(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80478014_00000800
    lwz r3, 0x54(r3)
    lwz r3, 0x28(r3)
    blr
lbl_fn_80478014_00000800:
    li r3, 0x0
    blr
}

asm void fn_80478034(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80478034_00000820
    lwz r3, 0x54(r3)
    lwz r3, 0x2c(r3)
    blr
lbl_fn_80478034_00000820:
    li r3, 0x0
    blr
}

asm void fn_80478054(void)
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
    beq lbl_fn_80478054_00000864
    li r4, 0x0
    bl fn_8047304C
    cmpwi r31, 0x0
    ble lbl_fn_80478054_00000864
    mr r3, r30
    bl dtor_80084684
lbl_fn_80478054_00000864:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804780AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_804780AC_00000918
    li r4, 0x3
    bl fn_80473104
    addi r3, r1, 0x8
    bl fn_804714A4
    li r0, 0x0
    stw r0, 0xc(r1)
    addi r3, r1, 0x8
    addi r6, r1, 0xc
    lwz r4, 0x54(r31)
    li r7, 0x0
    lwz r5, 0x50(r31)
    bl fn_804714B0
    addic. r3, r1, 0xc
    beq lbl_fn_804780AC_0000090C
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804780AC_0000090C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804780AC_00000904
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804780AC_00000904:
    li r0, 0x0
    stw r0, 0xc(r1)
lbl_fn_804780AC_0000090C:
    lwz r3, 0x54(r31)
    lwz r4, 0x50(r31)
    bl DCFlushRange
lbl_fn_804780AC_00000918:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80478158(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r7, 0x54(r3)
    mr r8, r5
    mr r3, r4
    mr r9, r6
    lwz r5, 0x24(r7)
    li r10, 0x0
    lwz r0, 0x28(r7)
    lwz r4, 0x34(r7)
    clrlwi r5, r5, 16
    lwz r7, 0x20(r7)
    clrlwi r6, r0, 16
    b fn_80615FF0
    blr
}

asm void fn_80478198(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80478198_00000984
    lwz r3, 0x54(r3)
    lwz r3, 0x2c(r3)
    blr
lbl_fn_80478198_00000984:
    li r3, 0x0
    blr
}

asm void fn_804781B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80478204
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80478204(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_80478204_00000A84
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80478204_00000A3C
lbl_fn_80478204_00000A38:
    lwz r4, 0x4(r4)
lbl_fn_80478204_00000A3C:
    cmplw r4, r0
    beq lbl_fn_80478204_00000A54
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80478204_00000A38
lbl_fn_80478204_00000A54:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80478204_00000A74
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80478204_00000A74
    b lbl_fn_80478204_00000A84
lbl_fn_80478204_00000A74:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80478204_00000A84:
    cmpwi r30, 0x0
    bne lbl_fn_80478204_00000B84
    lis r5, lbl_807560A8@ha
    li r3, 0x5c
    addi r5, r5, lbl_807560A8@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80478204_00000AC8
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FF88@ha
    addi r3, r3, lbl_8078FF88@l
    stw r3, 0x0(r30)
lbl_fn_80478204_00000AC8:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80478204_00000B68
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80478204_00000B14
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80478204_00000B14:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80478204_00000B2C
    stw r30, 0x0(r3)
lbl_fn_80478204_00000B2C:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_80478204_00000B8C
    bl dtor_80084684
    b lbl_fn_80478204_00000B8C
lbl_fn_80478204_00000B68:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80478204_00000B8C
lbl_fn_80478204_00000B84:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80478204_00000B8C:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804783DC(void)
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
    beq lbl_fn_804783DC_00000C14
    lwz r0, 0x5c(r3)
    lis r4, lbl_8078FFD8@ha
    addi r4, r4, lbl_8078FFD8@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804783DC_00000BF8
    mr r3, r0
    li r4, 0x1
    bl fn_805BDD78
lbl_fn_804783DC_00000BF8:
    mr r3, r30
    li r4, 0x0
    bl fn_8047304C
    cmpwi r31, 0x0
    ble lbl_fn_804783DC_00000C14
    mr r3, r30
    bl dtor_80084684
lbl_fn_804783DC_00000C14:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047845C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_8047845C_00000C8C
    lis r5, lbl_807560D0@ha
    li r3, 0x20
    addi r5, r5, lbl_807560D0@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8047845C_00000C7C
    lwz r4, 0x54(r31)
    bl fn_805BDD20
lbl_fn_8047845C_00000C7C:
    stw r3, 0x5c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_80473104
lbl_fn_8047845C_00000C8C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804784CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80478518
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80478518(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_80478518_00000D98
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80478518_00000D50
lbl_fn_80478518_00000D4C:
    lwz r4, 0x4(r4)
lbl_fn_80478518_00000D50:
    cmplw r4, r0
    beq lbl_fn_80478518_00000D68
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80478518_00000D4C
lbl_fn_80478518_00000D68:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80478518_00000D88
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80478518_00000D88
    b lbl_fn_80478518_00000D98
lbl_fn_80478518_00000D88:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80478518_00000D98:
    cmpwi r30, 0x0
    bne lbl_fn_80478518_00000EA0
    lis r5, lbl_807560D0@ha
    li r3, 0x60
    addi r5, r5, lbl_807560D0@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80478518_00000DE4
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FFD8@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FFD8@l
    stw r3, 0x0(r30)
    stw r0, 0x5c(r30)
lbl_fn_80478518_00000DE4:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80478518_00000E84
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80478518_00000E30
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80478518_00000E30:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80478518_00000E48
    stw r30, 0x0(r3)
lbl_fn_80478518_00000E48:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_80478518_00000EA8
    bl dtor_80084684
    b lbl_fn_80478518_00000EA8
lbl_fn_80478518_00000E84:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80478518_00000EA8
lbl_fn_80478518_00000EA0:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80478518_00000EA8:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804786F8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804786F8_00000EE0
    lwz r3, 0x5c(r3)
    blr
lbl_fn_804786F8_00000EE0:
    li r3, 0x0
    blr
}

asm void fn_80478714(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8087F528
    cmpwi r0, 0x0
    bne lbl_fn_80478714_00000F84
    lis r5, lbl_80756108@ha
    li r3, 0x958
    addi r5, r5, lbl_80756108@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80478714_00000F80
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_80790028@ha
    lis r4, fn_804787CC@ha
    addi r3, r3, lbl_80790028@l
    stw r3, 0x0(r31)
    li r0, 0x0
    lis r5, fn_804787EC@ha
    stw r0, 0x48(r31)
    addi r3, r31, 0x4c
    addi r4, r4, fn_804787CC@l
    addi r5, r5, fn_804787EC@l
    li r6, 0x90
    li r7, 0x10
    bl fn_806958E0
    lfs f0, lbl_80886F14
    li r0, 0x12c
    stfs f0, 0x94c(r31)
    stw r0, 0x950(r31)
lbl_fn_80478714_00000F80:
    stw r31, lbl_8087F528
lbl_fn_80478714_00000F84:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F528
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804787CC(void)
{
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    sth r4, 0x4(r3)
    stw r0, 0x84(r3)
    stw r4, 0x88(r3)
    stw r4, 0x8c(r3)
    blr
}

asm void fn_804787EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_804787EC_00000FE8
    cmpwi r4, 0x0
    ble lbl_fn_804787EC_00000FE8
    bl dtor_80084684
lbl_fn_804787EC_00000FE8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047882C(void)
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
    beq lbl_fn_8047882C_0000106C
    addic. r3, r3, 0x48
    li r0, 0x0
    stw r0, lbl_8087F528
    beq lbl_fn_8047882C_00001050
    beq lbl_fn_8047882C_00001050
    lis r4, fn_804787EC@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_804787EC@l
    li r5, 0x90
    li r6, 0x10
    bl fn_806959D8
lbl_fn_8047882C_00001050:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8047882C_0000106C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8047882C_0000106C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804788B4(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_804788BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r27, r3
    addi r28, r3, 0x4c
    lis r31, 0x38e4
    b lbl_fn_804788BC_00001188
lbl_fn_804788BC_000010B4:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804788BC_00001184
    lwz r0, 0x0(r28)
    cmpwi r0, 0x96
    ble lbl_fn_804788BC_00001184
    addi r0, r27, 0x4c
    subi r3, r31, 0x71c7
    subf r0, r0, r28
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r26, r0, r3
    mulli r0, r26, 0x90
    add r30, r27, r0
    addi r29, r30, 0x4c
    b lbl_fn_804788BC_0000116C
lbl_fn_804788BC_00001108:
    addi r0, r26, 0x1
    lwz r4, 0xdc(r30)
    mulli r3, r0, 0x90
    stw r4, 0x4c(r30)
    addi r0, r29, 0x4
    add r3, r27, r3
    addi r25, r3, 0x50
    cmplw r25, r0
    beq lbl_fn_804788BC_00001148
    mr r3, r25
    bl fn_80686A48
    mr r5, r3
    mr r4, r25
    addi r3, r29, 0x4
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_804788BC_00001148:
    lwz r0, 0x160(r30)
    addi r29, r29, 0x90
    stw r0, 0xd0(r30)
    addi r26, r26, 0x1
    lwz r0, 0x164(r30)
    stw r0, 0xd4(r30)
    lwz r0, 0x168(r30)
    stw r0, 0xd8(r30)
    addi r30, r30, 0x90
lbl_fn_804788BC_0000116C:
    lwz r3, 0x48(r27)
    subi r0, r3, 0x1
    cmplw r26, r0
    blt lbl_fn_804788BC_00001108
    stw r0, 0x48(r27)
    b lbl_fn_804788BC_00001188
lbl_fn_804788BC_00001184:
    addi r28, r28, 0x90
lbl_fn_804788BC_00001188:
    lwz r0, 0x48(r27)
    mulli r0, r0, 0x90
    add r3, r27, r0
    addi r0, r3, 0x4c
    cmplw r28, r0
    bne lbl_fn_804788BC_000010B4
    lwz r3, 0x950(r27)
    addi r0, r3, 0x1
    stw r0, 0x950(r27)
    cmpwi r0, 0x12c
    ble lbl_fn_804788BC_00001200
    lfs f2, 0x94c(r27)
    lfs f1, lbl_80886F14
    fcmpo cr0, f2, f1
    ble lbl_fn_804788BC_0000122C
    lfs f0, lbl_80886F18
    fsubs f2, f2, f0
    fcmpo cr0, f2, f1
    ble lbl_fn_804788BC_000011D8
    b lbl_fn_804788BC_000011DC
lbl_fn_804788BC_000011D8:
    fmr f2, f1
lbl_fn_804788BC_000011DC:
    frsp f1, f2
    lfs f0, lbl_80886F14
    stfs f2, 0x94c(r27)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804788BC_0000122C
    li r0, 0x0
    stw r0, 0x48(r27)
    b lbl_fn_804788BC_0000122C
lbl_fn_804788BC_00001200:
    lfs f2, 0x94c(r27)
    lfs f1, lbl_80886F1C
    fcmpo cr0, f2, f1
    bge lbl_fn_804788BC_0000122C
    lfs f0, lbl_80886F18
    fadds f0, f0, f2
    fcmpo cr0, f0, f1
    bge lbl_fn_804788BC_00001224
    b lbl_fn_804788BC_00001228
lbl_fn_804788BC_00001224:
    fmr f0, f1
lbl_fn_804788BC_00001228:
    stfs f0, 0x94c(r27)
lbl_fn_804788BC_0000122C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80478A70(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x180
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
    stfd f21, 0x1e0(r1)
    psq_st f21, 0x1e8(r1), 0, 0
    stfd f20, 0x1d0(r1)
    psq_st f20, 0x1d8(r1), 0, 0
    stfd f19, 0x1c0(r1)
    psq_st f19, 0x1c8(r1), 0, 0
    stfd f18, 0x1b0(r1)
    psq_st f18, 0x1b8(r1), 0, 0
    stfd f17, 0x1a0(r1)
    psq_st f17, 0x1a8(r1), 0, 0
    stfd f16, 0x190(r1)
    psq_st f16, 0x198(r1), 0, 0
    stfd f15, 0x180(r1)
    psq_st f15, 0x188(r1), 0, 0
    bl _savegpr_20
    lwz r4, lbl_8087F430
    lis r0, 0x4330
    lis r26, lbl_807C8A68@ha
    stw r0, 0x140(r1)
    cmpwi r4, 0x0
    mr r22, r3
    stw r0, 0x148(r1)
    addi r26, r26, lbl_807C8A68@l
    beq lbl_fn_80478A70_00001D50
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80478A70_00001314
    b lbl_fn_80478A70_00001D50
lbl_fn_80478A70_00001314:
    lfs f0, 0x94c(r3)
    lfs f19, lbl_80886F14
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    beq lbl_fn_80478A70_00001D50
    lwz r4, lbl_8087F0A8
    lwz r0, 0x6c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80478A70_00001CB8
    lis r3, lbl_807560E8@ha
    lis r4, lbl_807560F0@ha
    lwz r25, lbl_80886F10
    addi r28, r26, 0x0
    lfd f29, lbl_807560E8@l(r3)
    addi r29, r26, 0x10
    lfs f30, lbl_80886F40
    addi r30, r26, 0x20
    lfs f20, lbl_80886F28
    li r23, 0x0
    lfs f21, lbl_80886F24
    li r31, 0x8
    lfs f22, lbl_80886F2C
    lfd f23, lbl_807560F0@l(r4)
    lfs f24, lbl_80886F34
    lfs f25, lbl_80886F30
    lfs f26, lbl_80886F38
    lfs f27, lbl_80886F1C
    lfs f31, lbl_80886F44
    lfs f28, lbl_80886F3C
    lfs f15, lbl_80886F4C
    lfs f16, lbl_80886F50
lbl_fn_80478A70_00001390:
    lwz r3, 0x48(r22)
    cmplw r23, r3
    bge lbl_fn_80478A70_00001D50
    subi r0, r3, 0x1
    lfs f18, lbl_80886F20
    subf r0, r23, r0
    mulli r0, r0, 0x90
    add r27, r22, r0
    lwz r3, 0x4c(r27)
    cmpwi r3, 0xa
    bge lbl_fn_80478A70_000013D8
    subfic r0, r3, 0xa
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfd f0, 0x140(r1)
    fsubs f0, f0, f29
    fdivs f0, f0, f20
    fmadds f18, f21, f0, f18
lbl_fn_80478A70_000013D8:
    lwz r0, 0x950(r22)
    subfic r0, r0, 0x6
    xoris r0, r0, 0x8000
    stw r0, 0x14c(r1)
    lfd f0, 0x148(r1)
    fsubs f0, f0, f29
    fdivs f0, f0, f22
    fcmpo cr0, f0, f19
    ble lbl_fn_80478A70_00001410
    stw r0, 0x144(r1)
    lfd f0, 0x140(r1)
    fsubs f0, f0, f29
    fdivs f1, f0, f22
    b lbl_fn_80478A70_00001414
lbl_fn_80478A70_00001410:
    fmr f1, f19
lbl_fn_80478A70_00001414:
    subfic r24, r23, 0x8
    stw r24, 0x14c(r1)
    lwz r0, 0xd4(r27)
    lfd f0, 0x148(r1)
    clrlwi r0, r0, 31
    stfs f26, 0x130(r1)
    fsubs f0, f0, f23
    cmplwi r0, 0x1
    stfs f26, 0x134(r1)
    fmadds f0, f24, f0, f25
    stfs f26, 0x138(r1)
    stfs f27, 0x13c(r1)
    fmadds f17, f24, f1, f0
    beq lbl_fn_80478A70_00001628
    cmpwi r3, 0xa
    blt lbl_fn_80478A70_00001A04
    cmpwi r3, 0x28
    bge lbl_fn_80478A70_00001A04
    subi r3, r3, 0xa
    cmpwi r3, 0x5
    bge lbl_fn_80478A70_00001540
    xoris r0, r3, 0x8000
    stw r0, 0x144(r1)
    lfs f1, 0xc(r29)
    lfd f0, 0x140(r1)
    stw r0, 0x14c(r1)
    fsubs f3, f0, f29
    lfs f0, 0xc(r28)
    lfd f2, 0x148(r1)
    fsubs f1, f1, f0
    stw r0, 0x144(r1)
    fdivs f5, f3, f28
    lfd f3, 0x140(r1)
    stfs f1, 0xcc(r1)
    lfs f10, 0x8(r29)
    lfs f9, 0x8(r28)
    lfs f8, 0x4(r29)
    fmuls f11, f1, f5
    lfs f7, 0x4(r28)
    fsubs f4, f2, f29
    stw r0, 0x14c(r1)
    fsubs f10, f10, f9
    lfs f6, 0x10(r26)
    fadds f1, f11, f0
    lfd f2, 0x148(r1)
    fdivs f0, f4, f28
    lfs f5, 0x0(r26)
    stfs f1, 0x12c(r1)
    stfs f1, 0x13c(r1)
    stfs f10, 0xc8(r1)
    stfs f11, 0xbc(r1)
    fmuls f1, f10, f0
    fsubs f3, f3, f29
    fsubs f4, f8, f7
    stfs f1, 0xb8(r1)
    fsubs f2, f2, f29
    fdivs f0, f3, f28
    stfs f4, 0xc4(r1)
    fmuls f0, f4, f0
    fadds f3, f1, f9
    stfs f0, 0xb4(r1)
    fsubs f4, f6, f5
    fadds f1, f0, f7
    fdivs f0, f2, f28
    stfs f4, 0xc0(r1)
    stfs f1, 0x124(r1)
    stfs f3, 0x128(r1)
    stfs f1, 0x134(r1)
    stfs f3, 0x138(r1)
    fmuls f0, f4, f0
    stfs f0, 0xb0(r1)
    fadds f0, f0, f5
    stfs f0, 0x120(r1)
    stfs f0, 0x130(r1)
    b lbl_fn_80478A70_00001A04
lbl_fn_80478A70_00001540:
    blt lbl_fn_80478A70_00001A04
    cmpwi r3, 0x1e
    bge lbl_fn_80478A70_00001A04
    subi r0, r3, 0x5
    lfs f1, 0xc(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfs f3, 0xc(r29)
    lfd f0, 0x140(r1)
    fsubs f4, f1, f3
    stw r0, 0x14c(r1)
    fsubs f5, f0, f29
    lfs f2, 0x8(r28)
    lfd f0, 0x148(r1)
    stw r0, 0x144(r1)
    fdivs f8, f5, f30
    lfs f1, 0x8(r29)
    stfs f4, 0xac(r1)
    lfd f6, 0x140(r1)
    stw r0, 0x14c(r1)
    lfs f11, 0x4(r28)
    fmuls f4, f4, f8
    lfd f5, 0x148(r1)
    fsubs f7, f0, f29
    lfs f0, 0x4(r29)
    fsubs f8, f2, f1
    stfs f4, 0x9c(r1)
    fdivs f2, f7, f30
    lfs f10, 0x0(r26)
    lfs f9, 0x10(r26)
    stfs f8, 0xa8(r1)
    fmuls f2, f8, f2
    fsubs f6, f6, f29
    stfs f2, 0x98(r1)
    fadds f3, f4, f3
    fadds f2, f2, f1
    fdivs f1, f6, f30
    stfs f3, 0x11c(r1)
    stfs f3, 0x13c(r1)
    stfs f2, 0x118(r1)
    stfs f2, 0x138(r1)
    fsubs f4, f11, f0
    fsubs f5, f5, f29
    fsubs f2, f10, f9
    stfs f4, 0xa4(r1)
    fmuls f3, f4, f1
    fdivs f1, f5, f30
    stfs f2, 0xa0(r1)
    stfs f3, 0x94(r1)
    fmuls f2, f2, f1
    fadds f1, f3, f0
    stfs f2, 0x90(r1)
    fadds f0, f2, f9
    stfs f1, 0x114(r1)
    stfs f0, 0x110(r1)
    stfs f0, 0x130(r1)
    stfs f1, 0x134(r1)
    b lbl_fn_80478A70_00001A04
lbl_fn_80478A70_00001628:
    cmpwi r3, 0xa
    blt lbl_fn_80478A70_00001A04
    cmpwi r3, 0x29
    bge lbl_fn_80478A70_00001A04
    subi r3, r3, 0xa
    cmpwi r3, 0x2
    bge lbl_fn_80478A70_0000171C
    xoris r0, r3, 0x8000
    stw r0, 0x144(r1)
    lfs f3, 0xc(r30)
    lfd f0, 0x140(r1)
    stw r0, 0x14c(r1)
    fsubs f2, f0, f29
    lfs f1, 0xc(r28)
    lfd f0, 0x148(r1)
    fsubs f6, f3, f1
    stw r0, 0x144(r1)
    fmuls f4, f2, f31
    fsubs f3, f0, f29
    stw r0, 0x14c(r1)
    lfd f2, 0x140(r1)
    lfd f0, 0x148(r1)
    fmuls f4, f6, f4
    lfs f5, 0x8(r30)
    fsubs f7, f0, f29
    lfs f0, 0x8(r28)
    fsubs f2, f2, f29
    lfs f8, 0x4(r30)
    fsubs f5, f5, f0
    lfs f10, 0x4(r28)
    fsubs f11, f8, f10
    lfs f9, 0x20(r26)
    fmuls f3, f3, f31
    lfs f8, 0x0(r26)
    fmuls f2, f2, f31
    stfs f11, 0x84(r1)
    fmuls f3, f5, f3
    stfs f5, 0x88(r1)
    fmuls f2, f11, f2
    fsubs f12, f9, f8
    stfs f6, 0x8c(r1)
    fadds f11, f3, f0
    fadds f1, f4, f1
    stfs f12, 0x80(r1)
    fadds f9, f2, f10
    fmuls f0, f7, f31
    stfs f2, 0x74(r1)
    stfs f3, 0x78(r1)
    fmuls f0, f12, f0
    stfs f4, 0x7c(r1)
    stfs f0, 0x70(r1)
    fadds f0, f0, f8
    stfs f0, 0x100(r1)
    stfs f9, 0x104(r1)
    stfs f11, 0x108(r1)
    stfs f1, 0x10c(r1)
    stfs f0, 0x130(r1)
    stfs f9, 0x134(r1)
    stfs f11, 0x138(r1)
    stfs f1, 0x13c(r1)
    b lbl_fn_80478A70_000019D8
lbl_fn_80478A70_0000171C:
    blt lbl_fn_80478A70_00001804
    cmpwi r3, 0x4
    bge lbl_fn_80478A70_00001804
    subi r0, r3, 0x2
    lfs f1, 0xc(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfs f2, 0xc(r30)
    lfd f0, 0x140(r1)
    stw r0, 0x14c(r1)
    fsubs f7, f1, f2
    fsubs f3, f0, f29
    lfs f10, 0x4(r28)
    lfd f0, 0x148(r1)
    stw r0, 0x144(r1)
    fmuls f5, f3, f31
    lfs f6, 0x8(r28)
    stw r0, 0x14c(r1)
    fsubs f4, f0, f29
    lfd f3, 0x140(r1)
    lfd f0, 0x148(r1)
    fsubs f9, f3, f29
    lfs f1, 0x8(r30)
    fsubs f8, f0, f29
    lfs f0, 0x4(r30)
    fmuls f3, f4, f31
    lfs f11, 0x0(r26)
    fmuls f4, f7, f5
    stfs f7, 0x6c(r1)
    fsubs f5, f10, f0
    lfs f10, 0x20(r26)
    fsubs f6, f6, f1
    stfs f4, 0x5c(r1)
    fsubs f11, f11, f10
    stfs f5, 0x64(r1)
    fmuls f3, f6, f3
    fadds f2, f4, f2
    stfs f11, 0x60(r1)
    fmuls f9, f9, f31
    fadds f1, f3, f1
    stfs f6, 0x68(r1)
    fmuls f8, f8, f31
    fmuls f9, f5, f9
    stfs f3, 0x58(r1)
    fmuls f8, f11, f8
    stfs f9, 0x54(r1)
    fadds f5, f9, f0
    stfs f8, 0x50(r1)
    fadds f0, f8, f10
    stfs f5, 0xf4(r1)
    stfs f0, 0xf0(r1)
    stfs f1, 0xf8(r1)
    stfs f2, 0xfc(r1)
    stfs f0, 0x130(r1)
    stfs f5, 0x134(r1)
    stfs f1, 0x138(r1)
    stfs f2, 0x13c(r1)
    b lbl_fn_80478A70_000019D8
lbl_fn_80478A70_00001804:
    cmpwi r3, 0x4
    blt lbl_fn_80478A70_000018F0
    cmpwi r3, 0x6
    bge lbl_fn_80478A70_000018F0
    subi r0, r3, 0x4
    lfs f1, 0xc(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfs f2, 0xc(r28)
    lfd f0, 0x140(r1)
    stw r0, 0x14c(r1)
    fsubs f7, f1, f2
    fsubs f3, f0, f29
    lfs f10, 0x4(r30)
    lfd f0, 0x148(r1)
    stw r0, 0x144(r1)
    fmuls f5, f3, f31
    lfs f6, 0x8(r30)
    stw r0, 0x14c(r1)
    fsubs f4, f0, f29
    lfd f3, 0x140(r1)
    lfd f0, 0x148(r1)
    fsubs f9, f3, f29
    lfs f1, 0x8(r28)
    fsubs f8, f0, f29
    lfs f0, 0x4(r28)
    fmuls f3, f4, f31
    lfs f11, 0x20(r26)
    fmuls f4, f7, f5
    stfs f7, 0x4c(r1)
    fsubs f5, f10, f0
    lfs f10, 0x0(r26)
    fsubs f6, f6, f1
    stfs f4, 0x3c(r1)
    fsubs f11, f11, f10
    stfs f5, 0x44(r1)
    fmuls f3, f6, f3
    fadds f2, f4, f2
    stfs f11, 0x40(r1)
    fmuls f9, f9, f31
    fadds f1, f3, f1
    stfs f6, 0x48(r1)
    fmuls f8, f8, f31
    fmuls f9, f5, f9
    stfs f3, 0x38(r1)
    fmuls f8, f11, f8
    stfs f9, 0x34(r1)
    fadds f5, f9, f0
    stfs f8, 0x30(r1)
    fadds f0, f8, f10
    stfs f5, 0xe4(r1)
    stfs f0, 0xe0(r1)
    stfs f1, 0xe8(r1)
    stfs f2, 0xec(r1)
    stfs f0, 0x130(r1)
    stfs f5, 0x134(r1)
    stfs f1, 0x138(r1)
    stfs f2, 0x13c(r1)
    b lbl_fn_80478A70_000019D8
lbl_fn_80478A70_000018F0:
    cmpwi r3, 0x6
    blt lbl_fn_80478A70_000019D8
    cmpwi r3, 0x1f
    bge lbl_fn_80478A70_000019D8
    subi r0, r3, 0x6
    lfs f1, 0xc(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfs f3, 0xc(r30)
    lfd f0, 0x140(r1)
    fsubs f4, f1, f3
    stw r0, 0x14c(r1)
    fsubs f5, f0, f29
    lfs f2, 0x8(r28)
    lfd f0, 0x148(r1)
    stw r0, 0x144(r1)
    fdivs f8, f5, f30
    lfs f1, 0x8(r30)
    stfs f4, 0x2c(r1)
    lfd f6, 0x140(r1)
    stw r0, 0x14c(r1)
    lfs f11, 0x4(r28)
    fmuls f4, f4, f8
    lfd f5, 0x148(r1)
    fsubs f7, f0, f29
    lfs f0, 0x4(r30)
    fsubs f8, f2, f1
    stfs f4, 0x1c(r1)
    fdivs f2, f7, f30
    lfs f10, 0x0(r26)
    lfs f9, 0x20(r26)
    stfs f8, 0x28(r1)
    fmuls f2, f8, f2
    fsubs f6, f6, f29
    stfs f2, 0x18(r1)
    fadds f3, f4, f3
    fadds f2, f2, f1
    fdivs f1, f6, f30
    stfs f3, 0xdc(r1)
    stfs f3, 0x13c(r1)
    stfs f2, 0xd8(r1)
    stfs f2, 0x138(r1)
    fsubs f4, f11, f0
    fsubs f5, f5, f29
    fsubs f2, f10, f9
    stfs f4, 0x24(r1)
    fmuls f3, f4, f1
    fdivs f1, f5, f30
    stfs f2, 0x20(r1)
    stfs f3, 0x14(r1)
    fmuls f2, f2, f1
    fadds f1, f3, f0
    stfs f2, 0x10(r1)
    fadds f0, f2, f9
    stfs f1, 0xd4(r1)
    stfs f0, 0xd0(r1)
    stfs f0, 0x130(r1)
    stfs f1, 0x134(r1)
lbl_fn_80478A70_000019D8:
    cmpwi r3, 0x2
    bne lbl_fn_80478A70_00001A04
    lfs f1, lbl_80886F48
    mr r4, r25
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80478A70_00001A04:
    stw r24, 0x144(r1)
    stw r31, 0x14c(r1)
    lfd f1, 0x140(r1)
    lfd f0, 0x148(r1)
    fsubs f1, f1, f23
    fsubs f0, f0, f23
    fdivs f0, f1, f0
    fmuls f0, f15, f0
    fmuls f1, f31, f0
    bl fn_8068AD58
    frsp f2, f1
    lfs f1, 0x94c(r22)
    lfs f0, 0x130(r1)
    fmuls f1, f1, f2
    fcmpo cr0, f0, f27
    stfs f1, 0x13c(r1)
    cror eq, gt, eq
    bne lbl_fn_80478A70_00001A54
    li r24, 0xff
    b lbl_fn_80478A70_00001A74
lbl_fn_80478A70_00001A54:
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    bne lbl_fn_80478A70_00001A68
    li r3, 0x0
    b lbl_fn_80478A70_00001A70
lbl_fn_80478A70_00001A68:
    fmadds f1, f16, f0, f31
    bl fn_80695D84
lbl_fn_80478A70_00001A70:
    mr r24, r3
lbl_fn_80478A70_00001A74:
    lfs f0, 0x134(r1)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_80478A70_00001A8C
    li r21, 0xff
    b lbl_fn_80478A70_00001AAC
lbl_fn_80478A70_00001A8C:
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    bne lbl_fn_80478A70_00001AA0
    li r3, 0x0
    b lbl_fn_80478A70_00001AA8
lbl_fn_80478A70_00001AA0:
    fmadds f1, f16, f0, f31
    bl fn_80695D84
lbl_fn_80478A70_00001AA8:
    mr r21, r3
lbl_fn_80478A70_00001AAC:
    lfs f0, 0x138(r1)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_80478A70_00001AC4
    li r20, 0xff
    b lbl_fn_80478A70_00001AE4
lbl_fn_80478A70_00001AC4:
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    bne lbl_fn_80478A70_00001AD8
    li r3, 0x0
    b lbl_fn_80478A70_00001AE0
lbl_fn_80478A70_00001AD8:
    fmadds f1, f16, f0, f31
    bl fn_80695D84
lbl_fn_80478A70_00001AE0:
    mr r20, r3
lbl_fn_80478A70_00001AE4:
    lfs f0, 0x13c(r1)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_80478A70_00001AFC
    li r3, 0xff
    b lbl_fn_80478A70_00001B18
lbl_fn_80478A70_00001AFC:
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    bne lbl_fn_80478A70_00001B10
    li r3, 0x0
    b lbl_fn_80478A70_00001B18
lbl_fn_80478A70_00001B10:
    fmadds f1, f16, f0, f31
    bl fn_80695D84
lbl_fn_80478A70_00001B18:
    lfs f6, lbl_80886F14
    slwi r4, r21, 8
    slwi r3, r3, 24
    slwi r0, r24, 16
    or r0, r3, r0
    or r4, r20, r4
    or r0, r4, r0
    fmr f7, f6
    fmr f8, f6
    lwz r3, lbl_8087EEB0
    fadds f1, f27, f18
    lfs f3, lbl_80886F54
    fadds f2, f27, f17
    lfs f4, lbl_80886F58
    lfs f5, lbl_80886F34
    addi r4, r27, 0x50
    clrrwi r5, r0, 24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, 0x130(r1)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_80478A70_00001B8C
    li r20, 0xff
    b lbl_fn_80478A70_00001BAC
lbl_fn_80478A70_00001B8C:
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    bne lbl_fn_80478A70_00001BA0
    li r3, 0x0
    b lbl_fn_80478A70_00001BA8
lbl_fn_80478A70_00001BA0:
    fmadds f1, f16, f0, f31
    bl fn_80695D84
lbl_fn_80478A70_00001BA8:
    mr r20, r3
lbl_fn_80478A70_00001BAC:
    lfs f0, 0x134(r1)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_80478A70_00001BC4
    li r21, 0xff
    b lbl_fn_80478A70_00001BE4
lbl_fn_80478A70_00001BC4:
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    bne lbl_fn_80478A70_00001BD8
    li r3, 0x0
    b lbl_fn_80478A70_00001BE0
lbl_fn_80478A70_00001BD8:
    fmadds f1, f16, f0, f31
    bl fn_80695D84
lbl_fn_80478A70_00001BE0:
    mr r21, r3
lbl_fn_80478A70_00001BE4:
    lfs f0, 0x138(r1)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_80478A70_00001BFC
    li r24, 0xff
    b lbl_fn_80478A70_00001C1C
lbl_fn_80478A70_00001BFC:
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    bne lbl_fn_80478A70_00001C10
    li r3, 0x0
    b lbl_fn_80478A70_00001C18
lbl_fn_80478A70_00001C10:
    fmadds f1, f16, f0, f31
    bl fn_80695D84
lbl_fn_80478A70_00001C18:
    mr r24, r3
lbl_fn_80478A70_00001C1C:
    lfs f0, 0x13c(r1)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_80478A70_00001C34
    li r3, 0xff
    b lbl_fn_80478A70_00001C50
lbl_fn_80478A70_00001C34:
    fcmpo cr0, f0, f19
    cror eq, lt, eq
    bne lbl_fn_80478A70_00001C48
    li r3, 0x0
    b lbl_fn_80478A70_00001C50
lbl_fn_80478A70_00001C48:
    fmadds f1, f16, f0, f31
    bl fn_80695D84
lbl_fn_80478A70_00001C50:
    lfs f6, lbl_80886F14
    slwi r4, r21, 8
    or r5, r24, r4
    fmr f1, f18
    slwi r3, r3, 24
    slwi r0, r20, 16
    or r0, r3, r0
    fmr f2, f17
    fmr f7, f6
    fmr f8, f6
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80886F54
    addi r4, r27, 0x50
    lfs f4, lbl_80886F58
    lfs f5, lbl_80886F34
    or r5, r5, r0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    addi r23, r23, 0x1
    cmplwi r23, 0x8
    blt lbl_fn_80478A70_00001390
    b lbl_fn_80478A70_00001D50
lbl_fn_80478A70_00001CB8:
    cmpwi r0, 0x2
    bne lbl_fn_80478A70_00001D50
    lis r4, lbl_807560F0@ha
    lfs f18, lbl_80886F5C
    lfd f17, lbl_807560F0@l(r4)
    addi r20, r3, 0x4c
    lfs f16, lbl_80886F34
    li r21, 0x0
    lfs f15, lbl_80886F60
    b lbl_fn_80478A70_00001D44
lbl_fn_80478A70_00001CE0:
    stw r21, 0x144(r1)
    fmr f1, f18
    lfs f6, lbl_80886F14
    fmr f5, f16
    lfd f0, 0x140(r1)
    addi r4, r20, 0x4
    lwz r0, 0x84(r20)
    fsubs f0, f0, f17
    lwz r3, lbl_8087EEB0
    clrrwi r0, r0, 24
    fmr f7, f6
    oris r5, r0, 0xcc
    fmr f8, f6
    fmadds f2, f16, f0, f15
    lfs f3, lbl_80886F54
    lfs f4, lbl_80886F58
    ori r5, r5, 0xcccc
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    addi r20, r20, 0x90
    addi r21, r21, 0x1
lbl_fn_80478A70_00001D44:
    lwz r0, 0x48(r22)
    cmplw r21, r0
    blt lbl_fn_80478A70_00001CE0
lbl_fn_80478A70_00001D50:
    addi r11, r1, 0x180
    psq_l f31, 0x288(r1), 0, 0
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
    psq_l f21, 0x1e8(r1), 0, 0
    lfd f21, 0x1e0(r1)
    psq_l f20, 0x1d8(r1), 0, 0
    lfd f20, 0x1d0(r1)
    psq_l f19, 0x1c8(r1), 0, 0
    lfd f19, 0x1c0(r1)
    psq_l f18, 0x1b8(r1), 0, 0
    lfd f18, 0x1b0(r1)
    psq_l f17, 0x1a8(r1), 0, 0
    lfd f17, 0x1a0(r1)
    psq_l f16, 0x198(r1), 0, 0
    lfd f16, 0x190(r1)
    psq_l f15, 0x188(r1), 0, 0
    lfd f15, 0x180(r1)
    bl _restgpr_20
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}
