#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8004B158(void);
extern void fn_8004B1EC(void);
extern void fn_8004B378(void);
extern void fn_8004BF64(void);
extern void fn_8006A204(void);
extern void fn_8006A900(void);
extern void fn_8006BA74(void);
extern void fn_800A4228(void);
extern void fn_800A45D0(void);
extern void fn_800A472C(void);
extern void fn_800A4794(void);
extern void fn_800A4AD4(void);
extern void fn_800A4BE4(void);
extern void fn_800A4E08(void);
extern void fn_800A4F0C(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800A55D4(void);
extern void fn_800C16B4(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB480(void);
extern void fn_800CB538(void);
extern void fn_800CF45C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_80117914(void);
extern void fn_80124C6C(void);
extern void fn_801F48C8(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80364E7C(void);
extern void fn_8036503C(void);
extern void fn_80365320(void);
extern void fn_803B84DC(void);
extern void fn_803B854C(void);
extern void fn_803B8C6C(void);
extern void fn_803B9044(void);
extern void fn_803B9638(void);
extern void fn_803B97C8(void);
extern void fn_803CE44C(void);
extern void fn_803EEE10(void);
extern void fn_80453DBC(void);
extern void fn_804741C0(void);
extern void fn_8047C7FC(void);
extern void fn_804A0F58(void);
extern void fn_8052BBF0(void);
extern void fn_8052E8D8(void);
extern void fn_8052E984(void);
extern void fn_8052EEC0(void);
extern void fn_8052F890(void);
extern void fn_805715C8(void);
extern void fn_80572B70(void);
extern void fn_805F9920(void);

/* External data declarations */
extern u8 jumptable_80793950[];
extern u8 jumptable_807939B8[];
extern u8 lbl_8075D4C0[];
extern u8 lbl_8075D518[];
extern u8 lbl_8075D5B0[];
extern u8 lbl_80793940[];
extern u8 lbl_807C8458[];

/* Small data declarations */
extern u32 lbl_8087EF68;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F06C;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F420;
extern u32 lbl_8087F470;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F9A0;
extern u32 lbl_8087F9AC;
extern u32 lbl_80887B80;
extern u32 lbl_80887BB4;
extern u32 lbl_80887BB8;
extern u32 lbl_80887BDC;
extern u32 lbl_80887BF4;
extern u32 lbl_80887C1C;
extern u32 lbl_80887C20;
extern u32 lbl_80887C24;
extern u32 lbl_80887C28;
extern u32 lbl_80887C2C;
extern u32 lbl_80887C30;
extern u32 lbl_80887C34;
extern u32 lbl_80887C38;

/* Function declarations */
void fn_80533A2C(void);
void fn_80533BE0(void);
void fn_80534074(void);

asm void fn_80533A2C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_80533A2C_000000A0
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80533A2C_00000060
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80533A2C_00000068
lbl_fn_80533A2C_00000060:
    li r31, -0x1
    b lbl_fn_80533A2C_00000120
lbl_fn_80533A2C_00000068:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80533A2C_00000098
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80533A2C_00000120
lbl_fn_80533A2C_00000098:
    li r31, 0x1
    b lbl_fn_80533A2C_00000120
lbl_fn_80533A2C_000000A0:
    cmpwi r5, 0x1
    bne lbl_fn_80533A2C_00000118
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80533A2C_000000D8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80533A2C_000000E0
lbl_fn_80533A2C_000000D8:
    li r31, -0x1
    b lbl_fn_80533A2C_00000120
lbl_fn_80533A2C_000000E0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80533A2C_00000110
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80533A2C_00000120
lbl_fn_80533A2C_00000110:
    li r31, 0x1
    b lbl_fn_80533A2C_00000120
lbl_fn_80533A2C_00000118:
    li r3, 0x0
    b lbl_fn_80533A2C_00000194
lbl_fn_80533A2C_00000120:
    cmpwi r31, 0x0
    lwz r30, 0x2b8(r28)
    beq lbl_fn_80533A2C_00000180
    add. r0, r30, r31
    stw r0, 0x2b8(r28)
    bge lbl_fn_80533A2C_00000140
    add r0, r0, r29
    stw r0, 0x2b8(r28)
lbl_fn_80533A2C_00000140:
    lwz r0, 0x2b8(r28)
    cmpw r0, r29
    blt lbl_fn_80533A2C_00000154
    subf r0, r29, r0
    stw r0, 0x2b8(r28)
lbl_fn_80533A2C_00000154:
    lis r4, lbl_8075D518@ha
    lfs f1, lbl_80887BB8
    addi r4, r4, lbl_8075D518@l
    addi r3, r1, 0x8
    lwz r4, 0x8(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80533A2C_00000180:
    lwz r0, 0x2b8(r28)
    subf r3, r30, r0
    subf r0, r0, r30
    or r0, r3, r0
    srwi r3, r0, 31
lbl_fn_80533A2C_00000194:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80533BE0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_27
    lwz r6, 0x2ac(r3)
    cmplwi r4, 0x19
    stw r6, 0x2b0(r3)
    mr r31, r3
    stw r4, 0x2ac(r3)
    bgt lbl_fn_80533BE0_00000628
    lis r5, jumptable_80793950@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_80793950@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    addi r0, r3, 0x348
    stw r0, 0x3e8(r3)
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80887BB4
    li r3, -0x1
    lfs f1, lbl_80887BB8
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x290
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r5, 0x0
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x2c0(r31)
    lwz r3, 0x48(r31)
    lfs f0, lbl_80887BB4
    stfs f0, 0x100(r3)
    lwz r3, 0x50(r31)
    stfs f0, 0x100(r3)
    b lbl_fn_80533BE0_00000628
    addi r0, r3, 0x410
    stw r0, 0x434(r3)
    lwz r3, 0x2cc(r3)
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x2cc(r31)
    li r0, 0x1
    lis r3, 0x100
    li r30, 0x0
    stw r0, 0x68(r4)
    subi r5, r3, 0x1
    li r6, -0x1
    li r4, 0x12
    lwz r3, 0x2cc(r31)
    li r0, 0x3c
    lfs f0, lbl_80887BF4
    stw r30, 0x5c(r3)
    lwz r3, 0x2cc(r31)
    stw r30, 0x58(r3)
    lwz r3, 0x2cc(r31)
    stw r6, 0x6c(r3)
    lwz r3, 0x2cc(r31)
    stw r5, 0x70(r3)
    lwz r3, 0x2cc(r31)
    stw r4, 0x78(r3)
    lwz r3, 0x2cc(r31)
    stw r0, 0x54(r3)
    lwz r3, 0x2cc(r31)
    stw r30, 0x4c(r3)
    lwz r3, 0x2cc(r31)
    stfs f0, 0x74(r3)
    lwz r3, 0x2cc(r31)
    bl fn_8006A900
    lwz r0, 0x270(r31)
    stw r30, 0x2c0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80533BE0_00000334
    addi r3, r31, 0x268
    li r4, 0x5a
    bl fn_8004B1EC
lbl_fn_80533BE0_00000334:
    lwz r0, 0x284(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80533BE0_00000628
    lfs f1, lbl_80887BB8
    addi r3, r31, 0x27c
    li r4, 0x5a
    bl fn_8004B158
    b lbl_fn_80533BE0_00000628
    cmpwi r6, 0xa
    addi r0, r3, 0x410
    stw r0, 0x434(r3)
    bne lbl_fn_80533BE0_00000370
    addi r0, r3, 0x388
    stw r0, 0x3e8(r3)
    b lbl_fn_80533BE0_00000378
lbl_fn_80533BE0_00000370:
    addi r0, r3, 0x368
    stw r0, 0x3e8(r3)
lbl_fn_80533BE0_00000378:
    lwz r4, 0x48(r3)
    li r0, 0x0
    lfs f2, lbl_80887C20
    li r29, 0x0
    stfs f2, 0x100(r4)
    li r28, 0x0
    lfs f1, lbl_80887BB4
    lwz r4, 0x50(r3)
    lfs f0, lbl_80887BB8
    stfs f2, 0x100(r4)
    lwz r4, 0x5c(r3)
    stfs f1, 0x100(r4)
    lwz r4, 0x5c(r3)
    stfs f0, 0x104(r4)
    lwz r4, 0x60(r3)
    stfs f1, 0x100(r4)
    lwz r4, 0x60(r3)
    stfs f1, 0x104(r4)
    stw r0, 0x2c0(r3)
    b lbl_fn_80533BE0_00000404
lbl_fn_80533BE0_000003C8:
    lwz r0, 0x2d0(r31)
    lwz r3, lbl_8087F4A0
    add r30, r0, r28
    lwzx r4, r28, r0
    lwz r5, 0x4(r30)
    bl fn_803EEE10
    cmpwi r3, 0x0
    beq lbl_fn_80533BE0_000003FC
    lwz r12, 0x0(r3)
    lwz r4, 0x8(r30)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
lbl_fn_80533BE0_000003FC:
    addi r28, r28, 0x10
    addi r29, r29, 0x1
lbl_fn_80533BE0_00000404:
    lwz r0, 0x2d4(r31)
    cmplw r29, r0
    blt lbl_fn_80533BE0_000003C8
    b lbl_fn_80533BE0_00000628
    lwz r4, 0x60(r3)
    li r0, 0x0
    lfs f0, lbl_80887BB8
    stfs f0, 0x104(r4)
    stw r0, 0x2c0(r3)
    b lbl_fn_80533BE0_00000628
    li r30, 0x0
    addi r0, r3, 0x3a8
    stw r0, 0x3e8(r3)
    li r27, 0x0
    lfs f31, lbl_80887BB4
    li r28, 0x0
    stw r30, 0x2b8(r3)
    stw r30, 0x2bc(r3)
    b lbl_fn_80533BE0_000004B8
lbl_fn_80533BE0_00000450:
    lwz r0, 0x2d0(r31)
    lwz r3, lbl_8087F4A0
    add r29, r0, r28
    lwzx r4, r28, r0
    lwz r5, 0x4(r29)
    bl fn_803EEE10
    cmpwi r3, 0x0
    beq lbl_fn_80533BE0_000004B0
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80533BE0_000004B0
    stw r0, 0x38(r1)
    addi r4, r1, 0x38
    stw r30, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r30, 0x44(r1)
    stw r30, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f31, 0x50(r1)
    stfs f31, 0x54(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80533BE0_000004B0:
    addi r28, r28, 0x10
    addi r27, r27, 0x1
lbl_fn_80533BE0_000004B8:
    lwz r0, 0x2d4(r31)
    cmplw r27, r0
    blt lbl_fn_80533BE0_00000450
    b lbl_fn_80533BE0_00000628
    li r0, 0x0
    addi r4, r3, 0x388
    stw r4, 0x3e8(r3)
    lwz r4, 0x60(r3)
    stw r0, 0x2b8(r3)
    lfs f1, lbl_80887BB4
    stw r0, 0x2bc(r3)
    lfs f0, lbl_80887C24
    stfs f1, 0x104(r4)
    lwz r4, 0x5c(r3)
    stfs f1, 0x104(r4)
    lwz r4, 0x4c(r3)
    lfs f1, 0xa0(r4)
    stfs f1, 0x100(r4)
    lwz r4, 0x5c(r3)
    stfs f0, 0x104(r4)
    lwz r3, 0x60(r3)
    stfs f0, 0x104(r3)
    b lbl_fn_80533BE0_00000628
    subi r0, r6, 0xd
    addi r4, r3, 0x3a8
    cmplwi r0, 0x1
    stw r4, 0x3e8(r3)
    bgt lbl_fn_80533BE0_00000534
    li r0, 0x0
    stw r0, 0x2b8(r3)
    stw r0, 0x2bc(r3)
lbl_fn_80533BE0_00000534:
    lwz r4, 0x5c(r3)
    lfs f0, lbl_80887C24
    stfs f0, 0x104(r4)
    lfs f1, lbl_80887C28
    lwz r4, 0x60(r3)
    lfs f0, lbl_80887BB4
    stfs f1, 0x100(r4)
    lwz r3, 0x60(r3)
    stfs f0, 0x104(r3)
    b lbl_fn_80533BE0_00000628
    lwz r4, 0x60(r3)
    addi r0, r3, 0x3c8
    lfs f0, lbl_80887BB8
    stfs f0, 0x104(r4)
    lwz r4, 0x5c(r3)
    stfs f0, 0x104(r4)
    stw r0, 0x3e8(r3)
    b lbl_fn_80533BE0_00000628
    li r0, 0x0
    stw r0, 0x2b8(r3)
    b lbl_fn_80533BE0_00000628
    lwz r0, lbl_8087F06C
    cmpwi r0, 0x0
    bne lbl_fn_80533BE0_00000628
    lwz r4, 0x6e4(r3)
    lwz r5, 0x6e0(r3)
    bl fn_80117914
    b lbl_fn_80533BE0_00000628
    lwz r0, 0x284(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80533BE0_000005BC
    li r4, 0x5a
    addi r3, r3, 0x27c
    bl fn_8004B1EC
lbl_fn_80533BE0_000005BC:
    lwz r3, 0x2c8(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x2c8(r31)
    li r7, 0x1
    li r6, 0x0
    li r5, 0x3c
    stw r7, 0x68(r3)
    li r4, 0x23
    lis r0, 0xff00
    lfs f0, lbl_80887BF4
    lwz r3, 0x2c8(r31)
    stw r6, 0x58(r3)
    lwz r3, 0x2c8(r31)
    stw r5, 0x54(r3)
    lwz r3, 0x2c8(r31)
    stw r4, 0x5c(r3)
    lwz r3, 0x2c8(r31)
    stw r6, 0x6c(r3)
    lwz r3, 0x2c8(r31)
    stw r0, 0x70(r3)
    lwz r3, 0x2c8(r31)
    stfs f0, 0x74(r3)
    lwz r3, 0x2c8(r31)
    stw r6, 0x4c(r3)
    lwz r3, 0x2c8(r31)
    stw r7, 0x48(r3)
lbl_fn_80533BE0_00000628:
    addi r11, r1, 0x70
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80534074(void)
{
    nofralloc
    stwu r1, -0xa50(r1)
    mflr r0
    stw r0, 0xa54(r1)
    li r0, 0xa48
    addi r11, r1, 0x970
    stfd f31, 0xa40(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xa38
    stfd f30, 0xa30(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xa28
    stfd f29, 0xa20(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0xa18
    stfd f28, 0xa10(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0xa08
    stfd f27, 0xa00(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0x9f8
    stfd f26, 0x9f0(r1)
    psq_stx f26, r1, r0, 0, 0
    li r0, 0x9e8
    stfd f25, 0x9e0(r1)
    psq_stx f25, r1, r0, 0, 0
    li r0, 0x9d8
    stfd f24, 0x9d0(r1)
    psq_stx f24, r1, r0, 0, 0
    li r0, 0x9c8
    stfd f23, 0x9c0(r1)
    psq_stx f23, r1, r0, 0, 0
    li r0, 0x9b8
    stfd f22, 0x9b0(r1)
    psq_stx f22, r1, r0, 0, 0
    li r0, 0x9a8
    stfd f21, 0x9a0(r1)
    psq_stx f21, r1, r0, 0, 0
    li r0, 0x998
    stfd f20, 0x990(r1)
    psq_stx f20, r1, r0, 0, 0
    li r0, 0x988
    stfd f19, 0x980(r1)
    psq_stx f19, r1, r0, 0, 0
    li r0, 0x978
    stfd f18, 0x970(r1)
    psq_stx f18, r1, r0, 0, 0
    bl _savegpr_26
    lwz r4, 0x48(r3)
    lis r31, lbl_8075D4C0@ha
    lwz r30, lbl_8087F0A8
    mr r28, r3
    lwz r0, 0x38(r4)
    addi r31, r31, lbl_8075D4C0@l
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x50(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x60(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00000810
    lwz r0, 0xbb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_000007A0
    lwz r4, 0xbac(r3)
    subic. r0, r4, 0x1
    stw r0, 0xbac(r3)
    bgt lbl_fn_80534074_00000810
    li r0, 0x0
    stw r0, 0xbac(r3)
    stw r0, 0xbb0(r3)
    b lbl_fn_80534074_00000810
lbl_fn_80534074_000007A0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0xe
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00000808
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0xc
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00000808
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0xd
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00000808
    lwz r3, 0xbac(r28)
    addi r0, r3, 0x1
    stw r0, 0xbac(r28)
    cmpwi r0, 0x1e
    ble lbl_fn_80534074_00000810
    li r0, 0x1
    stw r0, 0xbb0(r28)
    b lbl_fn_80534074_00000810
lbl_fn_80534074_00000808:
    li r0, 0x0
    stw r0, 0xbac(r28)
lbl_fn_80534074_00000810:
    lwz r0, 0x2ac(r28)
    li r29, 0x0
    cmplwi r0, 0x19
    bgt lbl_fn_80534074_00002308
    lis r3, jumptable_807939B8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807939B8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_000008DC
    lwz r3, 0x48(r28)
    lfs f9, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f9
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80534074_000008A4
    mr r3, r28
    li r4, 0x2
    bl fn_80533BE0
    lwz r4, 0x58(r31)
    addi r3, r1, 0x3c
    lfs f1, lbl_80887BB8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x3c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_000008DC
lbl_fn_80534074_000008A4:
    lwz r0, 0x598(r30)
    stw r0, 0x2c0(r28)
    lfs f0, lbl_80887C20
    lfs f9, 0xa0(r3)
    stfs f9, 0x100(r3)
    lwz r3, 0x50(r28)
    stfs f0, 0x100(r3)
    lwz r5, 0x2c8(r28)
    lwz r4, 0x5c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x58(r5)
    add r0, r4, r0
    add r0, r3, r0
    stw r0, 0x4c(r5)
lbl_fn_80534074_000008DC:
    lwz r0, 0x264(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_0000091C
    lwz r3, 0x2c0(r28)
    lwz r0, 0x584(r30)
    cmpw r3, r0
    blt lbl_fn_80534074_0000091C
    lwz r0, 0x270(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_0000091C
    lfs f1, lbl_80887BB8
    addi r3, r28, 0x268
    lwz r4, 0x588(r30)
    bl fn_8004B158
    li r0, 0x1
    stw r0, 0x264(r28)
lbl_fn_80534074_0000091C:
    lwz r3, 0x2c0(r28)
    lwz r0, 0x590(r30)
    cmpw r3, r0
    blt lbl_fn_80534074_00000948
    lwz r3, 0x48(r28)
    lfs f0, lbl_80887BB8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x48(r28)
    stfs f0, 0x104(r3)
lbl_fn_80534074_00000948:
    lwz r3, 0x2c0(r28)
    lwz r0, 0x594(r30)
    cmpw r3, r0
    blt lbl_fn_80534074_00000990
    lwz r3, 0x50(r28)
    lfs f9, lbl_80887BB8
    lwz r0, 0x38(r3)
    lfs f0, lbl_80887C20
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x50(r28)
    stfs f9, 0x104(r3)
    lwz r3, 0x50(r28)
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_80534074_00000990
    stfs f0, 0x100(r3)
lbl_fn_80534074_00000990:
    lwz r3, 0x2c0(r28)
    lwz r0, 0x598(r30)
    cmpw r3, r0
    blt lbl_fn_80534074_000009A4
    li r29, 0x1
lbl_fn_80534074_000009A4:
    lwz r3, 0x2c0(r28)
    addi r0, r3, 0x1
    stw r0, 0x2c0(r28)
    b lbl_fn_80534074_00002308
    lwz r0, 0x2c0(r28)
    cmpwi r0, 0x1
    bne lbl_fn_80534074_00000F90
    lwz r5, 0x48(r28)
    addi r3, r28, 0x368
    li r0, 0x1
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    lwz r5, 0x50(r28)
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    stw r3, 0x3e8(r28)
    lwz r3, 0x2cc(r28)
    stw r0, 0x48(r3)
    lwz r3, 0x25c(r28)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x258(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    mr r31, r3
    addi r4, r28, 0x750
    bl fn_804741C0
    lwz r0, 0x758(r28)
    addi r3, r31, 0x58
    stw r0, 0x8(r31)
    addi r4, r28, 0x7a8
    lwz r0, 0x760(r28)
    lwz r5, 0x75c(r28)
    stw r5, 0xc(r31)
    stw r0, 0x10(r31)
    lwz r0, 0x768(r28)
    lwz r5, 0x764(r28)
    stw r5, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r0, 0x770(r28)
    lwz r5, 0x76c(r28)
    stw r5, 0x1c(r31)
    stw r0, 0x20(r31)
    lwz r0, 0x778(r28)
    lwz r5, 0x774(r28)
    stw r5, 0x24(r31)
    stw r0, 0x28(r31)
    lwz r0, 0x780(r28)
    lwz r5, 0x77c(r28)
    stw r5, 0x2c(r31)
    stw r0, 0x30(r31)
    lwz r0, 0x788(r28)
    lwz r5, 0x784(r28)
    stw r5, 0x34(r31)
    stw r0, 0x38(r31)
    lwz r0, 0x790(r28)
    lwz r5, 0x78c(r28)
    stw r5, 0x3c(r31)
    stw r0, 0x40(r31)
    lwz r0, 0x798(r28)
    lwz r5, 0x794(r28)
    stw r5, 0x44(r31)
    stw r0, 0x48(r31)
    lwz r0, 0x7a0(r28)
    lwz r5, 0x79c(r28)
    stw r5, 0x4c(r31)
    stw r0, 0x50(r31)
    lwz r0, 0x7a4(r28)
    stw r0, 0x54(r31)
    bl fn_8052E984
    addi r3, r31, 0x64
    addi r4, r28, 0x7b4
    bl fn_8052EEC0
    lwz r0, 0x7c0(r28)
    addi r3, r31, 0x78
    stw r0, 0x70(r31)
    addi r4, r28, 0x7c8
    lwz r0, 0x7c4(r28)
    stw r0, 0x74(r31)
    bl fn_8052F890
    lwz r0, 0x818(r28)
    addi r3, r31, 0xd0
    stw r0, 0xc8(r31)
    addi r4, r28, 0x820
    lwz r0, 0x81c(r28)
    stw r0, 0xcc(r31)
    bl fn_8052F890
    lwz r0, 0x870(r28)
    addi r6, r28, 0x874
    stw r0, 0x120(r31)
    addi r5, r28, 0x8a4
    addi r3, r31, 0x164
    addi r4, r28, 0x8b4
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x124(r31), 0, 0
    psq_st f2, 0x12c(r31), 0, 0
    psq_st f3, 0x134(r31), 0, 0
    psq_st f4, 0x13c(r31), 0, 0
    psq_st f5, 0x144(r31), 0, 0
    psq_st f6, 0x14c(r31), 0, 0
    lfs f2, 0x8ac(r28)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x154(r31), 0, 0
    stfs f2, 0x15c(r31)
    lfs f0, 0x8b0(r28)
    stfs f0, 0x160(r31)
    bl fn_8052E8D8
    lwz r0, 0x8e4(r28)
    addi r3, r31, 0x198
    stw r0, 0x194(r31)
    addi r4, r28, 0x8e8
    bl fn_8052BBF0
    lwz r0, 0x930(r28)
    addi r3, r31, 0x1f8
    stw r0, 0x1e0(r31)
    addi r4, r28, 0x948
    lwz r0, 0x938(r28)
    lwz r5, 0x934(r28)
    stw r5, 0x1e4(r31)
    stw r0, 0x1e8(r31)
    lwz r0, 0x940(r28)
    lwz r5, 0x93c(r28)
    stw r5, 0x1ec(r31)
    stw r0, 0x1f0(r31)
    lwz r0, 0x944(r28)
    stw r0, 0x1f4(r31)
    bl fn_8047C7FC
    lwz r0, 0x984(r28)
    addi r6, r28, 0x9a4
    stw r0, 0x234(r31)
    addi r3, r31, 0x264
    addi r4, r28, 0x9b4
    lwz r0, 0x988(r28)
    stw r0, 0x238(r31)
    lwz r0, 0x98c(r28)
    stw r0, 0x23c(r31)
    lfs f0, 0x990(r28)
    stfs f0, 0x240(r31)
    lwz r0, 0x998(r28)
    lwz r5, 0x994(r28)
    stw r5, 0x244(r31)
    stw r0, 0x248(r31)
    lwz r0, 0x9a0(r28)
    lwz r5, 0x99c(r28)
    stw r5, 0x24c(r31)
    stw r0, 0x250(r31)
    lfs f2, 0x9ac(r28)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x254(r31), 0, 0
    stfs f2, 0x25c(r31)
    lwz r0, 0x9b0(r28)
    stw r0, 0x260(r31)
    bl fn_80453DBC
    lwz r3, lbl_8087EFA8
    lfs f0, 0x730(r28)
    stfs f0, 0x3c(r3)
    lfs f0, 0x734(r28)
    stfs f0, 0x40(r3)
    lfs f0, 0x738(r28)
    stfs f0, 0x44(r3)
    lfs f0, 0x73c(r28)
    stfs f0, 0x48(r3)
    lwz r3, lbl_8087EFA8
    lwz r0, 0xa04(r28)
    stw r0, 0xd4(r3)
    lwz r0, 0xa08(r28)
    stw r0, 0xd8(r3)
    lwz r0, 0xa0c(r28)
    stw r0, 0xdc(r3)
    lwz r0, 0xa10(r28)
    stw r0, 0xe0(r3)
    lfs f0, 0xa14(r28)
    stfs f0, 0xe4(r3)
    lfs f0, 0xa18(r28)
    stfs f0, 0xe8(r3)
    lfs f0, 0xa1c(r28)
    stfs f0, 0xec(r3)
    lfs f0, 0xa20(r28)
    stfs f0, 0xf0(r3)
    lwz r0, 0xa24(r28)
    stw r0, 0xf4(r3)
    lwz r0, 0xa28(r28)
    stw r0, 0xf8(r3)
    lfs f0, 0xa2c(r28)
    stfs f0, 0xfc(r3)
    lfs f0, 0xa30(r28)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087EFA8
    lwz r0, 0xa34(r28)
    stw r0, 0x54(r3)
    lwz r0, 0xa38(r28)
    stw r0, 0x58(r3)
    lwz r0, 0xa3c(r28)
    stw r0, 0x5c(r3)
    lwz r0, 0xa40(r28)
    stw r0, 0x60(r3)
    lwz r0, 0xa44(r28)
    stw r0, 0x64(r3)
    lfs f0, 0xa48(r28)
    stfs f0, 0x68(r3)
    lfs f0, 0xa4c(r28)
    stfs f0, 0x6c(r3)
    lfs f0, 0xa50(r28)
    stfs f0, 0x70(r3)
    lfs f0, 0xa54(r28)
    stfs f0, 0x74(r3)
    lwz r0, 0xa5c(r28)
    lwz r4, 0xa58(r28)
    stw r4, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0xa64(r28)
    lwz r4, 0xa60(r28)
    stw r4, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0xa68(r28)
    stw r0, 0x88(r3)
    lwz r0, 0xa70(r28)
    lwz r4, 0xa6c(r28)
    stw r4, 0x8c(r3)
    stw r0, 0x90(r3)
    lwz r0, 0xa78(r28)
    lwz r4, 0xa74(r28)
    stw r4, 0x94(r3)
    stw r0, 0x98(r3)
    lwz r0, 0xa80(r28)
    lwz r4, 0xa7c(r28)
    stw r4, 0x9c(r3)
    stw r0, 0xa0(r3)
    lwz r0, 0xa88(r28)
    lwz r4, 0xa84(r28)
    stw r4, 0xa4(r3)
    stw r0, 0xa8(r3)
    lwz r0, 0xa90(r28)
    lwz r4, 0xa8c(r28)
    stw r4, 0xac(r3)
    stw r0, 0xb0(r3)
    lwz r0, 0xa98(r28)
    lwz r4, 0xa94(r28)
    stw r4, 0xb4(r3)
    stw r0, 0xb8(r3)
    lwz r0, 0xaa0(r28)
    lwz r4, 0xa9c(r28)
    stw r4, 0xbc(r3)
    stw r0, 0xc0(r3)
    lwz r0, 0xaa4(r28)
    stw r0, 0xc4(r3)
    lwz r0, 0xaac(r28)
    addi r8, r28, 0xb68
    lwz r4, 0xaa8(r28)
    addi r7, r28, 0xb00
    stw r4, 0xc8(r3)
    addi r6, r28, 0xb10
    addi r5, r28, 0xb20
    addi r4, r28, 0xb30
    stw r0, 0xcc(r3)
    lwz r0, 0xab0(r28)
    stw r0, 0xd0(r3)
    lwz r9, lbl_8087EFA8
    lwz r0, 0xb4c(r28)
    stw r0, 0x104(r9)
    lwz r0, 0xb50(r28)
    stw r0, 0x108(r9)
    lfs f0, 0xb54(r28)
    stfs f0, 0x10c(r9)
    lwz r0, 0xb5c(r28)
    lwz r3, 0xb58(r28)
    stw r3, 0x110(r9)
    stw r0, 0x114(r9)
    lwz r0, 0xb64(r28)
    lwz r3, 0xb60(r28)
    stw r3, 0x118(r9)
    stw r0, 0x11c(r9)
    lfs f2, 0xb70(r28)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x120(r9), 0, 0
    stfs f2, 0x128(r9)
    lwz r3, lbl_8087EFA8
    lwz r0, 0xafc(r28)
    stw r0, 0x324(r3)
    psq_l f2, 0x8(r7), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x328(r3), 0, 0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_st f2, 0x340(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x348(r3), 0, 0
    psq_st f2, 0x350(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x358(r3), 0, 0
    psq_st f2, 0x360(r3), 0, 0
    lwz r0, 0xb40(r28)
    stw r0, 0x368(r3)
    lwz r0, 0xb44(r28)
    stw r0, 0x36c(r3)
    lfs f0, 0xb48(r28)
    stfs f0, 0x370(r3)
    lwz r4, lbl_8087EFA8
    lwz r0, 0xb74(r28)
    stw r0, 0x3dc(r4)
    lwz r0, 0xb78(r28)
    stw r0, 0x3e0(r4)
    lfs f0, 0xb7c(r28)
    stfs f0, 0x3e4(r4)
    lwz r0, 0xb84(r28)
    lwz r3, 0xb80(r28)
    stw r3, 0x3e8(r4)
    stw r0, 0x3ec(r4)
    lwz r0, 0xb8c(r28)
    lwz r3, 0xb88(r28)
    stw r3, 0x3f0(r4)
    stw r0, 0x3f4(r4)
    lwz r0, 0xb94(r28)
    lwz r3, 0xb90(r28)
    stw r3, 0x3f8(r4)
    stw r0, 0x3fc(r4)
    lwz r0, 0xb9c(r28)
    lwz r3, 0xb98(r28)
    stw r3, 0x400(r4)
    stw r0, 0x404(r4)
    lfs f0, 0xba0(r28)
    stfs f0, 0x408(r4)
    lfs f0, 0xba4(r28)
    stfs f0, 0x40c(r4)
    lwz r3, lbl_8087EFB4
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00000F08
    lwz r0, 0xba8(r28)
    stw r0, 0x4(r3)
lbl_fn_80534074_00000F08:
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r28
    li r4, 0x1
    bl fn_80232B7C
    lfs f0, lbl_80887BB4
    li r11, -0x1
    lfs f1, lbl_80887BB8
    li r0, 0x1
    stfs f0, 0x104(r1)
    addi r4, r28, 0x29c
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0xf8
    stfs f0, 0x108(r1)
    addi r8, r1, 0x104
    addi r9, r1, 0x110
    li r5, 0x0
    stfs f0, 0x10c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f0, 0x100(r1)
    stfs f1, 0x110(r1)
    stfs f1, 0x114(r1)
    stfs f1, 0x118(r1)
    stfs f1, 0x11c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    b lbl_fn_80534074_00001050
lbl_fn_80534074_00000F90:
    lwz r3, 0x4c(r28)
    li r26, 0x0
    lfs f0, lbl_80887BB4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x104(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x100(r3)
    lwz r0, 0x2c0(r28)
    cmpwi r0, 0x3c
    blt lbl_fn_80534074_00000FC8
    li r26, 0x1
lbl_fn_80534074_00000FC8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001000
    lwz r5, 0x2cc(r28)
    li r26, 0x1
    lwz r4, 0x5c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x58(r5)
    add r0, r4, r0
    add r0, r3, r0
    stw r0, 0x4c(r5)
lbl_fn_80534074_00001000:
    cmpwi r26, 0x0
    beq lbl_fn_80534074_00001050
    mr r3, r28
    li r4, 0x3
    bl fn_80533BE0
    lwz r0, 0x2e8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_0000290C
    lwz r5, 0x2e4(r28)
    lwz r3, 0x258(r28)
    lwz r4, 0x0(r5)
    lfs f1, lbl_80887BB4
    lfs f2, 0x4(r5)
    bl fn_804A0F58
    lwz r0, 0x2e8(r28)
    cmplwi r0, 0x1
    ble lbl_fn_80534074_0000290C
    li r0, 0x1
    stw r0, 0x2dc(r28)
    b lbl_fn_80534074_0000290C
lbl_fn_80534074_00001050:
    lwz r3, 0x2c0(r28)
    addi r0, r3, 0x1
    stw r0, 0x2c0(r28)
    b lbl_fn_80534074_00002308
    lwz r3, 0x4c(r28)
    lfs f0, lbl_80887BB4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x104(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x100(r3)
    lwz r3, 0x2c0(r28)
    lwz r0, 0x6a4(r28)
    cmpw r3, r0
    bge lbl_fn_80534074_000010A0
    addi r0, r3, 0x1
    stw r0, 0x2c0(r28)
    b lbl_fn_80534074_00002308
lbl_fn_80534074_000010A0:
    lwz r3, 0x2c8(r28)
    bl fn_8006A204
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
    mr r3, r28
    li r4, 0x4
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, 0x4c(r28)
    li r4, 0x0
    lfs f0, lbl_80887BB4
    li r5, 0x4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x104(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087EF70
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_000011B8
    lwz r0, 0x2c4(r28)
    addi r3, r28, 0x6c0
    cmpwi r0, 0x0
    bne lbl_fn_80534074_0000113C
    bl fn_803CE44C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_0000113C
    mr r3, r28
    li r4, 0x6
    bl fn_80533BE0
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001194
    li r4, 0xc
    bl fn_80364E7C
    b lbl_fn_80534074_00001194
lbl_fn_80534074_0000113C:
    addi r3, r1, 0x848
    addi r4, r1, 0x84
    bl fn_803B854C
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x848
    addi r5, r1, 0x80
    bl fn_800A4BE4
    lwz r0, 0x80(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00001188
    mr r3, r28
    li r4, 0x6
    bl fn_80533BE0
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001194
    li r4, 0xc
    bl fn_80364E7C
    b lbl_fn_80534074_00001194
lbl_fn_80534074_00001188:
    mr r3, r28
    li r4, 0x5
    bl fn_80533BE0
lbl_fn_80534074_00001194:
    lwz r4, 0x58(r31)
    addi r3, r1, 0x38
    lfs f1, lbl_80887BB8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80534074_000011B8:
    lwz r3, 0x2c0(r28)
    lis r0, 0x4330
    stw r0, 0x948(r1)
    xoris r0, r3, 0x8000
    lfd f10, 0x90(r31)
    stw r0, 0x94c(r1)
    lfs f0, lbl_80887C2C
    lfd f9, 0x948(r1)
    fsubs f9, f9, f10
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_80534074_000011EC
    li r29, 0x1
lbl_fn_80534074_000011EC:
    lwz r3, 0x2c0(r28)
    addi r0, r3, 0x1
    stw r0, 0x2c0(r28)
    b lbl_fn_80534074_00002308
    lwz r3, 0x4c(r28)
    addi r4, r1, 0x7c
    lfs f0, lbl_80887BB4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x104(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087EF68
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80534074_0000131C
    lwz r0, 0x7c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_000012D8
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x78
    addi r5, r1, 0x7c
    bl fn_800A472C
    cmpwi r3, 0x0
    bne lbl_fn_80534074_0000127C
    mr r3, r28
    li r4, 0x6
    bl fn_80533BE0
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_0000131C
    li r4, 0xc
    bl fn_80364E7C
    b lbl_fn_80534074_0000131C
lbl_fn_80534074_0000127C:
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x7c
    bl fn_800A4E08
    addi r3, r1, 0x748
    addi r4, r1, 0x74
    bl fn_803B854C
    lwz r3, 0x78(r1)
    lwz r0, 0x74(r1)
    cmplw r3, r0
    beq lbl_fn_80534074_000012C8
    mr r3, r28
    li r4, 0x6
    bl fn_80533BE0
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_0000131C
    li r4, 0xc
    bl fn_80364E7C
    b lbl_fn_80534074_0000131C
lbl_fn_80534074_000012C8:
    mr r3, r28
    li r4, 0x9
    bl fn_80533BE0
    b lbl_fn_80534074_0000131C
lbl_fn_80534074_000012D8:
    cmpwi r0, 0x5
    beq lbl_fn_80534074_000012E8
    cmpwi r0, 0xe
    bne lbl_fn_80534074_00001310
lbl_fn_80534074_000012E8:
    mr r3, r28
    li r4, 0x6
    bl fn_80533BE0
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_0000131C
    lwz r4, 0x7c(r1)
    addi r4, r4, 0x7
    bl fn_80364E7C
    b lbl_fn_80534074_0000131C
lbl_fn_80534074_00001310:
    mr r3, r28
    li r4, 0x9
    bl fn_80533BE0
lbl_fn_80534074_0000131C:
    lwz r3, 0x4c(r28)
    lfs f0, lbl_80887BB4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x104(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001350
    bl fn_8036503C
lbl_fn_80534074_00001350:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001410
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001378
    bl fn_80365320
lbl_fn_80534074_00001378:
    lwz r3, lbl_8087F420
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_000013D8
    addi r3, r1, 0x648
    addi r4, r1, 0x70
    bl fn_803B854C
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x648
    addi r5, r1, 0x6c
    bl fn_800A4F0C
    mr r3, r28
    li r4, 0x7
    bl fn_80533BE0
    lwz r4, 0x58(r31)
    addi r3, r1, 0x34
    lfs f1, lbl_80887BB8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x34
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_000013D8:
    mr r3, r28
    li r4, 0x4
    bl fn_80533BE0
    addi r3, r31, 0x58
    lfs f1, lbl_80887BB8
    lwz r4, 0x4(r3)
    addi r3, r1, 0x30
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001410:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001438
    bl fn_80365320
lbl_fn_80534074_00001438:
    mr r3, r28
    li r4, 0x4
    bl fn_80533BE0
    addi r3, r31, 0x58
    lfs f1, lbl_80887BB8
    lwz r4, 0x4(r3)
    addi r3, r1, 0x2c
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
    lwz r3, 0x4c(r28)
    addi r4, r1, 0x68
    lfs f0, lbl_80887BB4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x104(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087EF68
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002308
    lwz r0, 0x68(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_000014DC
    addi r3, r1, 0x548
    bl fn_803B84DC
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x548
    addi r5, r1, 0x68
    bl fn_800A4F0C
    mr r3, r28
    li r4, 0x8
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_000014DC:
    li r0, 0x1
    stw r0, 0x2c4(r28)
    mr r3, r28
    li r4, 0x9
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, 0x4c(r28)
    addi r4, r1, 0x64
    lfs f0, lbl_80887BB4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x104(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x100(r3)
    lwz r3, lbl_8087EF68
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002308
    addi r3, r28, 0x6c0
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r3, lbl_8087F0A8
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001558
    li r0, 0x0
    stb r0, 0x1140(r3)
    lwz r3, lbl_8087F0A8
    stw r0, 0x113c(r3)
lbl_fn_80534074_00001558:
    lwz r3, 0x6e0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001570
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x6e0(r28)
lbl_fn_80534074_00001570:
    lwz r3, 0x6e4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001588
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x6e4(r28)
lbl_fn_80534074_00001588:
    li r0, 0x1
    stw r0, 0x2c4(r28)
    mr r3, r28
    li r4, 0x9
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, 0x4c(r28)
    lfs f9, lbl_80887BB8
    lwz r0, 0x38(r3)
    lfs f0, lbl_80887C28
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f9, 0x104(r3)
    lwz r3, 0x4c(r28)
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_80534074_000015E4
    lwz r3, 0x5c(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_80534074_000015E4:
    lwz r3, 0x5c(r28)
    lfs f0, lbl_80887C30
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_80534074_0000160C
    stfs f0, 0x100(r3)
    lfs f0, lbl_80887BB4
    lwz r3, 0x5c(r28)
    stfs f0, 0x104(r3)
lbl_fn_80534074_0000160C:
    lwz r3, 0x5c(r28)
    li r26, 0x0
    lfs f0, lbl_80887C30
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_80534074_00001654
    lwz r3, 0x60(r28)
    lfs f0, lbl_80887C28
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x60(r28)
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_80534074_00001654
    li r26, 0x1
lbl_fn_80534074_00001654:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001670
    li r26, 0x1
lbl_fn_80534074_00001670:
    cmpwi r26, 0x0
    beq lbl_fn_80534074_00002308
    lwz r5, 0x3e8(r28)
    mr r3, r28
    li r4, 0xb
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x74(r28)
    psq_st f1, 0x6c(r28), 0, 0
    psq_l f1, 0xc(r5), 0, 0
    lfs f2, 0x14(r5)
    stfs f2, 0x80(r28)
    psq_st f1, 0x78(r28), 0, 0
    lfs f0, 0x18(r5)
    stfs f0, 0xb4(r28)
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, 0x5c(r28)
    lfs f0, lbl_80887BB4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x60(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x60(r28)
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, lt, eq
    bne lbl_fn_80534074_000016F0
    stfs f0, 0x104(r3)
lbl_fn_80534074_000016F0:
    lwz r3, 0x5c(r28)
    lfs f0, lbl_80887BB4
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, lt, eq
    bne lbl_fn_80534074_00001714
    stfs f0, 0x100(r3)
    lwz r3, 0x5c(r28)
    stfs f0, 0x104(r3)
lbl_fn_80534074_00001714:
    lwz r3, 0x5c(r28)
    lfs f0, lbl_80887C34
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, lt, eq
    bne lbl_fn_80534074_00001748
    lwz r3, 0x4c(r28)
    lfs f0, lbl_80887C24
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r28)
    stfs f0, 0x104(r3)
lbl_fn_80534074_00001748:
    lwz r3, 0x4c(r28)
    lfs f0, lbl_80887BB4
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, lt, eq
    bne lbl_fn_80534074_00001770
    mr r3, r28
    li r4, 0x3
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001770:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
    lwz r5, 0x3e8(r28)
    mr r3, r28
    li r4, 0x3
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x74(r28)
    psq_st f1, 0x6c(r28), 0, 0
    psq_l f1, 0xc(r5), 0, 0
    lfs f2, 0x14(r5)
    stfs f2, 0x80(r28)
    psq_st f1, 0x78(r28), 0, 0
    lfs f0, 0x18(r5)
    stfs f0, 0xb4(r28)
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, 0x5c(r28)
    lfs f0, lbl_80887C30
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x60(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x5c(r28)
    lfs f9, 0x100(r3)
    fcmpo cr0, f9, f0
    cror eq, lt, eq
    bne lbl_fn_80534074_0000180C
    stfs f0, 0x100(r3)
    lfs f0, lbl_80887BB4
    lwz r3, 0x5c(r28)
    stfs f0, 0x104(r3)
lbl_fn_80534074_0000180C:
    lwz r0, 0x2c4(r28)
    li r4, 0x3
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00001820
    li r4, 0x1
lbl_fn_80534074_00001820:
    cmpwi r0, 0x0
    addi r26, r31, 0x68
    beq lbl_fn_80534074_00001830
    la r26, lbl_80887B80
lbl_fn_80534074_00001830:
    cmpwi r0, 0x0
    bne lbl_fn_80534074_0000185C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_0000185C
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_0000185C
    li r4, 0x2
    addi r26, r31, 0x78
lbl_fn_80534074_0000185C:
    mr r3, r28
    li r5, 0x1
    bl fn_80533A2C
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00001954
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001904
    lwz r0, 0x2bc(r28)
    slwi r0, r0, 2
    lwzx r0, r26, r0
    cmpwi r0, 0x0
    beq lbl_fn_80534074_000018B0
    cmpwi r0, 0x1
    beq lbl_fn_80534074_000018BC
    cmpwi r0, 0x2
    beq lbl_fn_80534074_000018C8
    b lbl_fn_80534074_000018D0
lbl_fn_80534074_000018B0:
    li r0, 0x1
    stw r0, 0x2b4(r28)
    b lbl_fn_80534074_000018D0
lbl_fn_80534074_000018BC:
    li r0, 0x0
    stw r0, 0x2b4(r28)
    b lbl_fn_80534074_000018D0
lbl_fn_80534074_000018C8:
    li r0, 0x2
    stw r0, 0x2b4(r28)
lbl_fn_80534074_000018D0:
    mr r3, r28
    li r4, 0xc
    bl fn_80533BE0
    lwz r4, 0x58(r31)
    addi r3, r1, 0x28
    lfs f1, lbl_80887BB8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001904:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
    mr r3, r28
    li r4, 0xa
    bl fn_80533BE0
    addi r3, r31, 0x58
    lfs f1, lbl_80887BB8
    lwz r4, 0x4(r3)
    addi r3, r1, 0x24
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001954:
    lwz r0, 0x2b8(r28)
    stw r0, 0x2bc(r28)
    b lbl_fn_80534074_00002308
    lwz r3, 0x5c(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x60(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x5c(r28)
    lfs f9, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f9
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80534074_00002308
    lwz r3, 0x60(r28)
    lfs f9, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f9
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80534074_00002308
    lwz r0, 0x2b4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_000019E0
    cmpwi r0, 0x1
    beq lbl_fn_80534074_00001A48
    cmpwi r0, 0x2
    beq lbl_fn_80534074_00001A58
    b lbl_fn_80534074_00002308
lbl_fn_80534074_000019E0:
    addi r3, r1, 0x448
    addi r4, r1, 0x60
    bl fn_803B854C
    lwz r3, lbl_8087EF68
    li r4, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001A14
    addi r4, r1, 0x448
    addi r5, r1, 0x5c
    li r6, 0x1
    li r7, 0x0
    bl fn_800A45D0
    mr r4, r3
lbl_fn_80534074_00001A14:
    lwz r0, 0x2c4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00001A38
    cmpwi r4, 0x0
    bne lbl_fn_80534074_00001A38
    mr r3, r28
    li r4, 0x10
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001A38:
    mr r3, r28
    li r4, 0x19
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001A48:
    mr r3, r28
    li r4, 0xf
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001A58:
    mr r3, r28
    li r4, 0xf
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    mr r3, r28
    li r4, 0x2
    li r5, 0x0
    bl fn_80533A2C
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002308
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001AE8
    lwz r0, 0x2b8(r28)
    lis r3, lbl_80793940@ha
    addi r3, r3, lbl_80793940@l
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    bl fn_8006BA74
    mr r3, r28
    li r4, 0x19
    bl fn_80533BE0
    lwz r4, 0x58(r31)
    addi r3, r1, 0x20
    lfs f1, lbl_80887BB8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001AE8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
    mr r3, r28
    li r4, 0xb
    bl fn_80533BE0
    addi r3, r31, 0x58
    lfs f1, lbl_80887BB8
    lwz r4, 0x4(r3)
    addi r3, r1, 0x1c
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087F06C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_80534074_00001B64
    bl fn_800D2338
    mr r3, r28
    li r4, 0xb
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001B64:
    cmpwi r0, 0x8
    bne lbl_fn_80534074_00002308
    bl fn_800D2338
    mr r3, r28
    bl fn_803B8C6C
    stw r3, 0x6e8(r28)
    mr r4, r3
    mr r3, r28
    bl fn_803B9044
    mr r3, r28
    li r4, 0x15
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r0, lbl_8087EF68
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00001BE4
    lwz r0, 0x6e8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_00001BBC
    mr r3, r28
    bl fn_803B8C6C
    stw r3, 0x6e8(r28)
lbl_fn_80534074_00001BBC:
    lwz r0, lbl_8087F470
    cmpwi r0, 0x0
    bne lbl_fn_80534074_00001BD4
    lwz r4, 0x6e8(r28)
    mr r3, r28
    bl fn_803B9044
lbl_fn_80534074_00001BD4:
    mr r3, r28
    li r4, 0x11
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001BE4:
    mr r3, r28
    li r4, 0x19
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    mr r3, r28
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
    addi r3, r1, 0x348
    addi r4, r1, 0x58
    bl fn_803B854C
    lwz r3, lbl_8087F470
    bl fn_803B97C8
    lwz r4, lbl_8087EF68
    lwz r0, 0x58(r1)
    cmpwi r4, 0x0
    add r0, r0, r3
    stw r0, 0x58(r1)
    beq lbl_fn_80534074_00001C4C
    li r0, 0x0
    stw r0, 0x168(r4)
    addi r6, r1, 0x54
    li r5, 0x2
    lwz r3, lbl_8087EF68
    lwz r4, 0x58(r1)
    bl fn_800A4AD4
lbl_fn_80534074_00001C4C:
    mr r3, r28
    li r4, 0x12
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001C78
    addi r4, r1, 0x50
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002308
lbl_fn_80534074_00001C78:
    lwz r0, lbl_8087EF68
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00002308
    lwz r4, 0x50(r1)
    cmpwi r4, 0x0
    bne lbl_fn_80534074_00001CA0
    mr r3, r28
    li r4, 0x13
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001CA0:
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001CB4
    addi r4, r4, 0x7
    bl fn_80364E7C
lbl_fn_80534074_00001CB4:
    mr r3, r28
    li r4, 0x17
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001CE0
    addi r4, r1, 0x4c
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002308
lbl_fn_80534074_00001CE0:
    lwz r0, lbl_8087EF68
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00001D80
    lwz r4, 0x4c(r1)
    cmpwi r4, 0x0
    bne lbl_fn_80534074_00001D5C
    addi r3, r1, 0x248
    addi r4, r1, 0x48
    bl fn_803B854C
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x248
    addi r5, r1, 0x4c
    li r6, 0x1
    li r7, 0x0
    bl fn_800A45D0
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00001D38
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x248
    lwz r5, 0x48(r1)
    addi r6, r1, 0x4c
    bl fn_800A4794
lbl_fn_80534074_00001D38:
    mr r3, r28
    li r4, 0x14
    bl fn_80533BE0
    lwz r3, lbl_8087F9A0
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
    li r0, 0x1
    stw r0, 0x24(r3)
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001D5C:
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001D70
    addi r4, r4, 0x7
    bl fn_80364E7C
lbl_fn_80534074_00001D70:
    mr r3, r28
    li r4, 0x17
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001D80:
    mr r3, r28
    li r4, 0x14
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001DAC
    addi r4, r1, 0x44
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002308
lbl_fn_80534074_00001DAC:
    lwz r0, lbl_8087EF68
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00001E7C
    lwz r4, 0x44(r1)
    cmpwi r4, 0x0
    bne lbl_fn_80534074_00001E58
    lwz r3, lbl_8087F0A8
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_00001E48
    lwz r3, lbl_8087F470
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_fn_80534074_00001E08
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80534074_00001E08
    beq cr1, lbl_fn_80534074_00001DF8
    bl fn_803B9638
lbl_fn_80534074_00001DF8:
    mr r3, r28
    li r4, 0x16
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001E08:
    lwz r0, 0x6e8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_00001E20
    mr r3, r28
    bl fn_803B8C6C
    stw r3, 0x6e8(r28)
lbl_fn_80534074_00001E20:
    lwz r0, lbl_8087F470
    cmpwi r0, 0x0
    bne lbl_fn_80534074_00001E38
    lwz r4, 0x6e8(r28)
    mr r3, r28
    bl fn_803B9044
lbl_fn_80534074_00001E38:
    mr r3, r28
    li r4, 0x15
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001E48:
    mr r3, r28
    li r4, 0x19
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001E58:
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001E6C
    addi r4, r4, 0x7
    bl fn_80364E7C
lbl_fn_80534074_00001E6C:
    mr r3, r28
    li r4, 0x17
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001E7C:
    mr r3, r28
    li r4, 0x19
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087F470
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001EA8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80534074_00002308
lbl_fn_80534074_00001EA8:
    lwz r3, lbl_8087F470
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001EB8
    bl fn_803B9638
lbl_fn_80534074_00001EB8:
    mr r3, r28
    li r4, 0x16
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001EE4
    addi r4, r1, 0x40
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002308
lbl_fn_80534074_00001EE4:
    lwz r3, lbl_8087F470
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001EF4
    bl fn_800D2338
lbl_fn_80534074_00001EF4:
    lwz r0, lbl_8087EF68
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00001F54
    lwz r4, 0x40(r1)
    cmpwi r4, 0x0
    bne lbl_fn_80534074_00001F30
    lwz r3, lbl_8087F9A0
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001F20
    li r0, 0x0
    stw r0, 0x24(r3)
lbl_fn_80534074_00001F20:
    mr r3, r28
    li r4, 0x19
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001F30:
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001F44
    addi r4, r4, 0x7
    bl fn_80364E7C
lbl_fn_80534074_00001F44:
    mr r3, r28
    li r4, 0x17
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00001F54:
    mr r3, r28
    li r4, 0x19
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087F9A0
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001F84
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00001F84
    li r0, 0x0
    stw r0, 0x24(r3)
lbl_fn_80534074_00001F84:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00001FB4
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
lbl_fn_80534074_00001FB4:
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00001FF4
    bl fn_80365320
    lwz r3, lbl_8087F420
    li r4, 0x1e
    bl fn_80364E7C
    lwz r4, 0x58(r31)
    addi r3, r1, 0x18
    lfs f1, lbl_80887BB8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80534074_00001FF4:
    mr r3, r28
    li r4, 0x18
    bl fn_80533BE0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002014
    bl fn_8036503C
lbl_fn_80534074_00002014:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002044
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002308
lbl_fn_80534074_00002044:
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002054
    bl fn_80365320
lbl_fn_80534074_00002054:
    lwz r3, lbl_8087F420
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80534074_000020B0
    lwz r3, lbl_8087F9A0
    li r4, 0x0
    bl fn_805715C8
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002088
    li r4, 0x19
    li r5, 0x0
    bl fn_800CF45C
lbl_fn_80534074_00002088:
    lwz r4, 0x58(r31)
    addi r3, r1, 0x14
    lfs f1, lbl_80887BB8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
lbl_fn_80534074_000020B0:
    mr r3, r28
    li r4, 0xb
    bl fn_80533BE0
    addi r3, r31, 0x58
    lfs f1, lbl_80887BB8
    lwz r4, 0x4(r3)
    addi r3, r1, 0x10
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80534074_00002308
    lwz r3, lbl_8087F9A0
    cmpwi r3, 0x0
    beq lbl_fn_80534074_00002108
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00002108
    li r0, 0x0
    stw r0, 0x24(r3)
lbl_fn_80534074_00002108:
    lwz r3, 0x2c8(r28)
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3c
    blt lbl_fn_80534074_00002308
    addi r3, r28, 0x284
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_80534074_00002308
    addi r3, r28, 0x270
    bl fn_800CB480
    addi r3, r28, 0x284
    bl fn_800CB480
    mr r3, r28
    bl fn_800D2338
    lwz r0, 0x2b4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00002160
    cmpwi r0, 0x1
    beq lbl_fn_80534074_000022DC
    cmpwi r0, 0x2
    beq lbl_fn_80534074_000022F4
    b lbl_fn_80534074_00002308
lbl_fn_80534074_00002160:
    addi r6, r1, 0x1f4
    addi r3, r1, 0x248
    cmplw r6, r3
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x1b0(r1)
    stw r5, 0x1b4(r1)
    stw r5, 0x1b8(r1)
    stw r5, 0x1bc(r1)
    stw r5, 0x1c0(r1)
    stw r4, 0x1c4(r1)
    stw r5, 0x1c8(r1)
    stw r5, 0x1cc(r1)
    stw r5, 0x1d0(r1)
    stw r5, 0x1d4(r1)
    stw r5, 0x1d8(r1)
    stw r5, 0x1dc(r1)
    stw r5, 0x1e0(r1)
    stw r5, 0x1e4(r1)
    stw r4, 0x1e8(r1)
    stw r5, 0x1ec(r1)
    stw r5, 0x1f0(r1)
    bge lbl_fn_80534074_000021E8
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80534074_000021E8
lbl_fn_80534074_000021D4:
    stw r4, 0x0(r6)
    stw r5, 0x4(r6)
    stw r5, 0x8(r6)
    addi r6, r6, 0xc
    bdnz lbl_fn_80534074_000021D4
lbl_fn_80534074_000021E8:
    lis r10, lbl_807C8458@ha
    lis r3, 0x2
    subi r30, r3, 0x7578
    lwz r8, 0x1d8(r1)
    li r26, 0x1
    addi r9, r10, lbl_807C8458@l
    li r11, 0x0
    li r27, 0x2
    li r31, 0x4
    li r12, -0x1
    lwz r7, 0x1dc(r1)
    li r0, 0xc
    lwz r6, 0x1e0(r1)
    addi r5, r9, 0x34
    lwz r3, 0x1e4(r1)
    addi r4, r1, 0x1e4
    stw r26, 0x1b0(r1)
    stw r27, 0x168(r1)
    stw r31, 0x16c(r1)
    stw r26, 0x170(r1)
    stw r30, 0x174(r1)
    stw r12, 0x178(r1)
    stw r26, 0x17c(r1)
    stw r11, 0x180(r1)
    stw r11, 0x184(r1)
    stw r11, 0x188(r1)
    stw r27, 0x1b4(r1)
    stw r31, 0x1b8(r1)
    stw r26, 0x1bc(r1)
    stw r30, 0x1c0(r1)
    stw r12, 0x1c4(r1)
    stw r26, 0x1c8(r1)
    stw r11, 0x1d0(r1)
    stw r11, 0x1d4(r1)
    stw r26, 0x1cc(r1)
    stw r26, lbl_807C8458@l(r10)
    stw r27, 0x4(r9)
    stw r31, 0x8(r9)
    stw r26, 0xc(r9)
    stw r30, 0x10(r9)
    stw r12, 0x14(r9)
    stw r26, 0x18(r9)
    stw r26, 0x1c(r9)
    stw r11, 0x20(r9)
    stw r11, 0x24(r9)
    stw r8, 0x28(r9)
    stw r7, 0x2c(r9)
    stw r6, 0x30(r9)
    stw r3, 0x34(r9)
    mtctr r0
lbl_fn_80534074_000022B0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80534074_000022B0
    lis r4, lbl_8075D5B0@ha
    lwz r3, lbl_8087F9AC
    addi r4, r4, lbl_8075D5B0@l
    addi r4, r4, 0x21a
    bl fn_80572B70
    b lbl_fn_80534074_00002308
lbl_fn_80534074_000022DC:
    lis r4, lbl_8075D5B0@ha
    lwz r3, lbl_8087F9AC
    addi r4, r4, lbl_8075D5B0@l
    addi r4, r4, 0x21a
    bl fn_80572B70
    b lbl_fn_80534074_00002308
lbl_fn_80534074_000022F4:
    lis r4, lbl_8075D5B0@ha
    lwz r3, lbl_8087F9AC
    addi r4, r4, lbl_8075D5B0@l
    addi r4, r4, 0x21f
    bl fn_80572B70
lbl_fn_80534074_00002308:
    lwz r4, 0x54(r28)
    addi r3, r1, 0xb8
    li r5, 0x0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x58(r28)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, lbl_8087F0A8
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lis r30, lbl_8075D5B0@ha
    lwz r3, 0x54(r28)
    addi r30, r30, lbl_8075D5B0@l
    addi r5, r1, 0xb8
    addi r4, r30, 0x22b
    bl fn_801F48C8
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0xc8
    li r5, 0x0
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r3, 0x54(r28)
    addi r4, r30, 0x231
    addi r5, r1, 0xc8
    bl fn_801F48C8
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0xd8
    li r5, 0x0
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r3, 0x58(r28)
    addi r4, r30, 0x22b
    addi r5, r1, 0xd8
    bl fn_801F48C8
    lwz r4, lbl_8087F0A8
    addi r3, r1, 0xe8
    li r5, 0x0
    addi r4, r4, 0x48c
    bl fn_80124C6C
    lwz r3, 0x58(r28)
    addi r4, r30, 0x231
    addi r5, r1, 0xe8
    bl fn_801F48C8
    cmpwi r29, 0x0
    beq lbl_fn_80534074_0000240C
    lwz r3, 0x54(r28)
    lfs f9, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f9
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80534074_000023FC
    lwz r3, 0x58(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_80534074_00002420
lbl_fn_80534074_000023FC:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_80534074_00002420
lbl_fn_80534074_0000240C:
    lwz r3, 0x54(r28)
    lfs f0, lbl_80887BB4
    stfs f0, 0x100(r3)
    lwz r3, 0x58(r28)
    stfs f0, 0x100(r3)
lbl_fn_80534074_00002420:
    lwz r0, 0x318(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80534074_00002468
    lfs f0, 0x340(r28)
    addi r3, r28, 0x64
    stfs f0, 0xb4(r28)
    lfs f1, lbl_80887BDC
    lfs f2, lbl_80887C38
    bl fn_8004BF64
    psq_l f1, 0x6c(r28), 0, 0
    lfs f2, 0x74(r28)
    psq_st f1, 0x31c(r28), 0, 0
    psq_l f1, 0x78(r28), 0, 0
    stfs f2, 0x324(r28)
    lfs f2, 0x80(r28)
    psq_st f1, 0x328(r28), 0, 0
    stfs f2, 0x330(r28)
    b lbl_fn_80534074_000026C4
lbl_fn_80534074_00002468:
    lfs f2, 0x74(r28)
    addi r4, r1, 0x150
    lwz r8, 0x3e8(r28)
    addi r3, r1, 0x15c
    psq_l f1, 0x6c(r28), 0, 0
    frsp f11, f2
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r1, 0x144
    lfs f0, 0x8(r8)
    addi r6, r1, 0x138
    stfs f2, 0x158(r1)
    fsubs f29, f0, f11
    lfs f0, 0x1c(r8)
    stfs f2, 0x164(r1)
    addi r7, r1, 0x12c
    lfs f2, 0x80(r28)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x78(r28), 0, 0
    fmuls f13, f29, f0
    psq_st f1, 0x0(r5), 0, 0
    frsp f24, f2
    lfs f9, 0x4(r8)
    lfs f21, 0x154(r1)
    lfs f10, 0x0(r8)
    fsubs f30, f9, f21
    lfs f9, 0x14(r8)
    lfs f26, 0x150(r1)
    fsubs f22, f9, f24
    lfs f20, 0x10(r8)
    fsubs f31, f10, f26
    fmuls f12, f30, f0
    lfs f19, 0x148(r1)
    fmuls f25, f22, f0
    fadds f10, f13, f11
    stfs f2, 0x14c(r1)
    fmuls f11, f31, f0
    fadds f9, f12, f21
    lfs f21, 0xc(r8)
    fsubs f23, f20, f19
    fadds f28, f25, f24
    lfs f20, 0x144(r1)
    fadds f26, f11, f26
    fsubs f24, f21, f20
    stfs f9, 0x13c(r1)
    fmr f2, f10
    stfs f26, 0x138(r1)
    fmuls f26, f23, f0
    fmuls f27, f24, f0
    stfs f2, 0x158(r1)
    fmr f2, f28
    fadds f18, f26, f19
    psq_l f1, 0x0(r6), 0, 0
    fadds f19, f27, f20
    stfs f2, 0x14c(r1)
    lfs f21, 0xb4(r28)
    lfs f9, 0x18(r8)
    lfs f2, 0x158(r1)
    fsubs f9, f9, f21
    stfs f2, 0x74(r28)
    lfs f2, 0x14c(r1)
    stfs f19, 0x12c(r1)
    fmadds f0, f0, f9, f21
    stfs f18, 0x130(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x6c(r28), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x78(r28), 0, 0
    stfs f2, 0x80(r28)
    stfs f0, 0xb4(r28)
    lwz r5, lbl_8087EFA8
    stfs f31, 0xac(r1)
    lwz r4, 0x240(r5)
    lwz r3, 0x244(r5)
    lwz r0, 0x248(r5)
    lfs f9, 0x24c(r5)
    lfs f0, 0x250(r5)
    stfs f30, 0xb0(r1)
    stfs f29, 0xb4(r1)
    stfs f11, 0xa0(r1)
    stfs f12, 0xa4(r1)
    stfs f13, 0xa8(r1)
    stfs f10, 0x140(r1)
    stfs f24, 0x94(r1)
    stfs f23, 0x98(r1)
    stfs f22, 0x9c(r1)
    stfs f27, 0x88(r1)
    stfs f26, 0x8c(r1)
    stfs f25, 0x90(r1)
    stfs f28, 0x134(r1)
    stw r4, 0x18c(r1)
    stw r3, 0x190(r1)
    stw r0, 0x194(r1)
    stfs f9, 0x198(r1)
    stfs f0, 0x19c(r1)
    lfs f9, 0x164(r1)
    addi r3, r1, 0x120
    lfs f0, 0x158(r1)
    lfs f11, 0x160(r1)
    fsubs f18, f9, f0
    lfs f10, 0x154(r1)
    lwz r4, 0x254(r5)
    lwz r0, 0x258(r5)
    fsubs f10, f11, f10
    lfs f13, 0x25c(r5)
    lfs f12, 0x260(r5)
    lfs f9, 0x15c(r1)
    lfs f0, 0x150(r1)
    stw r4, 0x1a0(r1)
    fsubs f0, f9, f0
    stw r0, 0x1a4(r1)
    stfs f13, 0x1a8(r1)
    stfs f12, 0x1ac(r1)
    stfs f0, 0x120(r1)
    stfs f10, 0x124(r1)
    stfs f18, 0x128(r1)
    bl fn_805F9920
    lfs f0, lbl_80887C1C
    fcmpo cr0, f1, f0
    bge lbl_fn_80534074_00002670
    lwz r0, 0x2ac(r28)
    cmpwi r0, 0xf
    beq lbl_fn_80534074_00002670
    cmpwi r0, 0x19
    beq lbl_fn_80534074_00002670
    li r0, 0x0
    stw r0, 0x18c(r1)
    b lbl_fn_80534074_00002678
lbl_fn_80534074_00002670:
    li r0, 0x1
    stw r0, 0x18c(r1)
lbl_fn_80534074_00002678:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x18c(r1)
    stw r0, 0x240(r3)
    lwz r0, 0x190(r1)
    stw r0, 0x244(r3)
    lwz r0, 0x194(r1)
    stw r0, 0x248(r3)
    lfs f0, 0x198(r1)
    stfs f0, 0x24c(r3)
    lfs f0, 0x19c(r1)
    stfs f0, 0x250(r3)
    lwz r0, 0x1a0(r1)
    stw r0, 0x254(r3)
    lwz r0, 0x1a4(r1)
    stw r0, 0x258(r3)
    lfs f0, 0x1a8(r1)
    stfs f0, 0x25c(r3)
    lfs f0, 0x1ac(r1)
    stfs f0, 0x260(r3)
lbl_fn_80534074_000026C4:
    addi r3, r28, 0x64
    bl fn_8004B378
    lwz r6, lbl_8087EFB4
    lwz r0, 0x64(r28)
    stw r0, 0x104(r6)
    lwz r0, 0x68(r28)
    stw r0, 0x108(r6)
    lfs f2, 0x74(r28)
    psq_l f1, 0x6c(r28), 0, 0
    psq_st f1, 0x10c(r6), 0, 0
    stfs f2, 0x114(r6)
    lfs f2, 0x80(r28)
    psq_l f1, 0x78(r28), 0, 0
    psq_st f1, 0x118(r6), 0, 0
    stfs f2, 0x120(r6)
    lfs f2, 0x8c(r28)
    psq_l f1, 0x84(r28), 0, 0
    psq_st f1, 0x124(r6), 0, 0
    stfs f2, 0x12c(r6)
    lfs f2, 0x98(r28)
    psq_l f1, 0x90(r28), 0, 0
    psq_st f1, 0x130(r6), 0, 0
    stfs f2, 0x138(r6)
    lfs f0, 0x9c(r28)
    stfs f0, 0x13c(r6)
    lfs f0, 0xa0(r28)
    stfs f0, 0x140(r6)
    lfs f0, 0xa4(r28)
    stfs f0, 0x144(r6)
    lfs f0, 0xa8(r28)
    stfs f0, 0x148(r6)
    lfs f0, 0xac(r28)
    stfs f0, 0x14c(r6)
    lfs f0, 0xb0(r28)
    stfs f0, 0x150(r6)
    lfs f0, 0xb4(r28)
    stfs f0, 0x154(r6)
    lfs f0, 0xb8(r28)
    stfs f0, 0x158(r6)
    psq_l f2, 0xc4(r28), 0, 0
    psq_l f3, 0xcc(r28), 0, 0
    psq_l f4, 0xd4(r28), 0, 0
    psq_l f5, 0xdc(r28), 0, 0
    psq_l f6, 0xe4(r28), 0, 0
    psq_l f1, 0xbc(r28), 0, 0
    psq_st f1, 0x15c(r6), 0, 0
    psq_st f2, 0x164(r6), 0, 0
    psq_st f3, 0x16c(r6), 0, 0
    psq_st f4, 0x174(r6), 0, 0
    psq_st f5, 0x17c(r6), 0, 0
    psq_st f6, 0x184(r6), 0, 0
    psq_l f2, 0xf4(r28), 0, 0
    psq_l f3, 0xfc(r28), 0, 0
    psq_l f4, 0x104(r28), 0, 0
    psq_l f5, 0x10c(r28), 0, 0
    psq_l f6, 0x114(r28), 0, 0
    psq_l f7, 0x11c(r28), 0, 0
    psq_l f8, 0x124(r28), 0, 0
    psq_l f1, 0xec(r28), 0, 0
    psq_st f1, 0x18c(r6), 0, 0
    psq_st f2, 0x194(r6), 0, 0
    psq_st f3, 0x19c(r6), 0, 0
    psq_st f4, 0x1a4(r6), 0, 0
    psq_st f5, 0x1ac(r6), 0, 0
    psq_st f6, 0x1b4(r6), 0, 0
    psq_st f7, 0x1bc(r6), 0, 0
    psq_st f8, 0x1c4(r6), 0, 0
    lfs f0, 0x12c(r28)
    addi r5, r6, 0x298
    stfs f0, 0x1cc(r6)
    addi r4, r28, 0x1f8
    addi r0, r6, 0x2f8
    lfs f0, 0x130(r28)
    stfs f0, 0x1d0(r6)
    psq_l f2, 0x13c(r28), 0, 0
    psq_l f3, 0x144(r28), 0, 0
    psq_l f4, 0x14c(r28), 0, 0
    psq_l f5, 0x154(r28), 0, 0
    psq_l f6, 0x15c(r28), 0, 0
    psq_l f1, 0x134(r28), 0, 0
    psq_st f1, 0x1d4(r6), 0, 0
    psq_st f2, 0x1dc(r6), 0, 0
    psq_st f3, 0x1e4(r6), 0, 0
    psq_st f4, 0x1ec(r6), 0, 0
    psq_st f5, 0x1f4(r6), 0, 0
    psq_st f6, 0x1fc(r6), 0, 0
    psq_l f2, 0x16c(r28), 0, 0
    psq_l f3, 0x174(r28), 0, 0
    psq_l f4, 0x17c(r28), 0, 0
    psq_l f5, 0x184(r28), 0, 0
    psq_l f6, 0x18c(r28), 0, 0
    psq_l f1, 0x164(r28), 0, 0
    psq_st f1, 0x204(r6), 0, 0
    psq_st f2, 0x20c(r6), 0, 0
    psq_st f3, 0x214(r6), 0, 0
    psq_st f4, 0x21c(r6), 0, 0
    psq_st f5, 0x224(r6), 0, 0
    psq_st f6, 0x22c(r6), 0, 0
    lwz r3, 0x194(r28)
    stw r3, 0x234(r6)
    lfs f0, 0x198(r28)
    stfs f0, 0x238(r6)
    lfs f0, 0x19c(r28)
    stfs f0, 0x23c(r6)
    lfs f2, 0x1a8(r28)
    psq_l f1, 0x1a0(r28), 0, 0
    psq_st f1, 0x240(r6), 0, 0
    stfs f2, 0x248(r6)
    lfs f0, 0x1ac(r28)
    stfs f0, 0x24c(r6)
    lfs f2, 0x1b8(r28)
    psq_l f1, 0x1b0(r28), 0, 0
    psq_st f1, 0x250(r6), 0, 0
    stfs f2, 0x258(r6)
    lfs f0, 0x1bc(r28)
    stfs f0, 0x25c(r6)
    lfs f2, 0x1c8(r28)
    psq_l f1, 0x1c0(r28), 0, 0
    psq_st f1, 0x260(r6), 0, 0
    stfs f2, 0x268(r6)
    lfs f0, 0x1cc(r28)
    stfs f0, 0x26c(r6)
    lfs f2, 0x1d8(r28)
    psq_l f1, 0x1d0(r28), 0, 0
    psq_st f1, 0x270(r6), 0, 0
    stfs f2, 0x278(r6)
    lfs f0, 0x1dc(r28)
    stfs f0, 0x27c(r6)
    lfs f2, 0x1e8(r28)
    psq_l f1, 0x1e0(r28), 0, 0
    psq_st f1, 0x280(r6), 0, 0
    stfs f2, 0x288(r6)
    lfs f2, 0x1f4(r28)
    psq_l f1, 0x1ec(r28), 0, 0
    psq_st f1, 0x28c(r6), 0, 0
    stfs f2, 0x294(r6)
lbl_fn_80534074_000028E4:
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r4)
    addi r4, r4, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_80534074_000028E4
lbl_fn_80534074_0000290C:
    li r0, 0xa48
    addi r11, r1, 0x970
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xa40(r1)
    li r0, 0xa38
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xa30(r1)
    li r0, 0xa28
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xa20(r1)
    li r0, 0xa18
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0xa10(r1)
    li r0, 0xa08
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0xa00(r1)
    li r0, 0x9f8
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0x9f0(r1)
    li r0, 0x9e8
    psq_lx f25, r1, r0, 0, 0
    lfd f25, 0x9e0(r1)
    li r0, 0x9d8
    psq_lx f24, r1, r0, 0, 0
    lfd f24, 0x9d0(r1)
    li r0, 0x9c8
    psq_lx f23, r1, r0, 0, 0
    lfd f23, 0x9c0(r1)
    li r0, 0x9b8
    psq_lx f22, r1, r0, 0, 0
    lfd f22, 0x9b0(r1)
    li r0, 0x9a8
    psq_lx f21, r1, r0, 0, 0
    lfd f21, 0x9a0(r1)
    li r0, 0x998
    psq_lx f20, r1, r0, 0, 0
    lfd f20, 0x990(r1)
    li r0, 0x988
    psq_lx f19, r1, r0, 0, 0
    lfd f19, 0x980(r1)
    li r0, 0x978
    psq_lx f18, r1, r0, 0, 0
    lfd f18, 0x970(r1)
    bl _restgpr_26
    lwz r0, 0xa54(r1)
    mtlr r0
    addi r1, r1, 0xa50
    blr
}
