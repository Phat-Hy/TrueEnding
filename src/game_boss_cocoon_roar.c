#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_801079C0(void);
extern void fn_80107A68(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80755188[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80886D60;
extern u32 lbl_80886D70;
extern u32 lbl_80886D80;
extern u32 lbl_80886D84;
extern u32 lbl_80886D88;
extern u32 lbl_80886D8C;
extern u32 lbl_80886D90;
extern u32 lbl_80886D9C;
extern u32 lbl_80886DA4;
extern u32 lbl_80886E24;
extern u32 lbl_80886E28;
extern u32 lbl_80886E3C;
extern u32 lbl_80886E60;
extern u32 lbl_80886E64;
extern u32 lbl_80886E68;
extern u32 lbl_80886E6C;
extern u32 lbl_80886E70;
extern u32 lbl_80886E74;
extern u32 lbl_80886E78;
extern u32 lbl_80886E7C;

/* Function declarations */
void fn_80466370(void);
void fn_804666D8(void);
void fn_80466868(void);
void fn_80466974(void);
void fn_80466A04(void);
void fn_80466AE4(void);
void fn_80466B8C(void);
void fn_80466CA4(void);
void fn_804672CC(void);
void fn_804678F4(void);
void fn_80467C18(void);

asm void fn_80466370(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r3
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80466370_000000AC
    li r0, 0x0
    stw r0, 0x14bc(r29)
    stw r0, 0x14c0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80466370_00000078
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80466370_00000078:
    li r31, 0x0
    stw r31, 0x58c(r29)
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80466370_0000033C
    lwz r3, lbl_8087F048
    addi r4, r29, 0xb0
    bl fn_80107A68
    stw r31, 0x1800(r29)
    b lbl_fn_80466370_0000033C
lbl_fn_80466370_000000AC:
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80886E28
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80466370_000000F4
    lfs f3, 0x528(r29)
    lfs f0, 0x15bc(r29)
    lfs f5, 0x52c(r29)
    fadds f6, f3, f0
    lfs f4, 0x15c0(r29)
    lfs f3, 0x530(r29)
    lfs f0, 0x15c4(r29)
    fadds f4, f5, f4
    stfs f6, 0x528(r29)
    fadds f0, f3, f0
    stfs f4, 0x52c(r29)
    stfs f0, 0x530(r29)
    b lbl_fn_80466370_0000015C
lbl_fn_80466370_000000F4:
    fcmpo cr0, f0, f3
    bge lbl_fn_80466370_0000015C
    lfs f0, lbl_80886E60
    fcmpo cr0, f3, f0
    bge lbl_fn_80466370_0000015C
    lwz r0, 0x14bc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80466370_0000015C
    li r3, 0x5b5
    bl fn_80219E6C
    mr r5, r3
    lwz r3, lbl_8087F048
    li r0, -0x1
    lfs f1, lbl_80886D60
    stw r0, 0x8(r1)
    mr r4, r29
    lfs f2, lbl_80886D8C
    addi r7, r29, 0x528
    stw r0, 0xc(r1)
    addi r8, r29, 0x534
    li r9, 0x0
    li r10, 0x1e
    lwz r6, 0x590(r29)
    bl fn_800FAB80
    li r0, 0x1
    stw r0, 0x14bc(r29)
lbl_fn_80466370_0000015C:
    addi r4, r29, 0x15bc
    lfs f2, 0x15c4(r29)
    addi r31, r1, 0x64
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    mr r3, r31
    lfs f0, lbl_80886D60
    mr r4, r31
    stfs f2, 0x6c(r1)
    stfs f0, 0x68(r1)
    bl fn_805F98D0
    lfs f2, 0x6c(r1)
    addi r30, r1, 0x58
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80886D80
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x60(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80466370_000001D4
    lfs f3, 0x58(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80466370_000001C8
    lfs f0, lbl_80886D84
    b lbl_fn_80466370_000001CC
lbl_fn_80466370_000001C8:
    lfs f0, lbl_80886D88
lbl_fn_80466370_000001CC:
    stfs f0, 0x50(r1)
    b lbl_fn_80466370_000001E8
lbl_fn_80466370_000001D4:
    frsp f2, f2
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_80466370_000001E8:
    lfs f0, 0x50(r1)
    addi r3, r1, 0x70
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x40
    lfs f30, 0x78(r1)
    mr r5, r4
    lfs f31, 0x74(r1)
    addi r3, r1, 0xa0
    lfs f13, 0x70(r1)
    lfs f12, 0x88(r1)
    lfs f11, 0x84(r1)
    lfs f10, 0x80(r1)
    lfs f9, 0x98(r1)
    lfs f8, 0x94(r1)
    lfs f7, 0x90(r1)
    lfs f6, 0x9c(r1)
    lfs f5, 0x8c(r1)
    lfs f4, 0x7c(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x60(r1)
    stfs f3, 0xd0(r1)
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f13, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f13, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f30, 0xa8(r1)
    stfs f10, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f10, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f12, 0xb8(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f7, 0xc0(r1)
    stfs f8, 0xc4(r1)
    stfs f9, 0xc8(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f4, 0xac(r1)
    stfs f5, 0xbc(r1)
    stfs f6, 0xcc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80466370_00000304
    lfs f3, 0x44(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80466370_000002F4
    lfs f0, lbl_80886D84
    b lbl_fn_80466370_000002F8
lbl_fn_80466370_000002F4:
    lfs f0, lbl_80886D88
lbl_fn_80466370_000002F8:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_80466370_00000318
lbl_fn_80466370_00000304:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_80466370_00000318:
    lfs f2, lbl_80886D60
    addi r3, r1, 0x4c
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x54(r1)
    stfs f2, 0x60(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
lbl_fn_80466370_0000033C:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_804666D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_804666D8_00000408
    li r0, 0x0
    stw r0, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804666D8_000003D4
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_804666D8_000003D4:
    li r31, 0x0
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804666D8_000004D8
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107A68
    stw r31, 0x1800(r30)
    b lbl_fn_804666D8_000004D8
lbl_fn_804666D8_00000408:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80886E64
    fcmpo cr0, f1, f0
    ble lbl_fn_804666D8_00000444
    lwz r0, 0x1800(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804666D8_00000438
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107A68
    li r0, 0x0
    stw r0, 0x1800(r30)
lbl_fn_804666D8_00000438:
    lfs f0, lbl_80886D8C
    stfs f0, 0x2e8(r30)
    b lbl_fn_804666D8_000004D8
lbl_fn_804666D8_00000444:
    lfs f0, lbl_80886E68
    fcmpo cr0, f1, f0
    ble lbl_fn_804666D8_00000480
    lwz r0, 0x1800(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804666D8_00000474
    addi r4, r30, 0xb0
    lwz r3, lbl_8087F048
    mr r5, r4
    bl fn_801079C0
    li r0, 0x1
    stw r0, 0x1800(r30)
lbl_fn_804666D8_00000474:
    lfs f0, lbl_80886E6C
    stfs f0, 0x2e8(r30)
    b lbl_fn_804666D8_000004D8
lbl_fn_804666D8_00000480:
    lfs f0, lbl_80886D9C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_804666D8_000004D8
    fcmpo cr0, f0, f1
    bge lbl_fn_804666D8_000004D8
    lfs f0, lbl_80886E70
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804666D8_000004D8
    lfs f1, 0x528(r30)
    lfs f0, 0x15bc(r30)
    lfs f3, 0x52c(r30)
    fadds f4, f1, f0
    lfs f2, 0x15c0(r30)
    lfs f1, 0x530(r30)
    lfs f0, 0x15c4(r30)
    fadds f2, f3, f2
    stfs f4, 0x528(r30)
    fadds f0, f1, f0
    stfs f2, 0x52c(r30)
    stfs f0, 0x530(r30)
lbl_fn_804666D8_000004D8:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80466868(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_80886E24
    stw r0, 0x24(r1)
    lfs f0, lbl_80886D80
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, 0x2e4(r3)
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80466868_00000568
    lwz r6, lbl_8087F430
    li r0, 0x3c
    lfs f0, lbl_80886D70
    lwz r4, 0x96c(r6)
    srwi r5, r4, 31
    clrlwi r4, r4, 31
    xor r4, r4, r5
    subf r4, r5, r4
    stw r4, 0x96c(r6)
    stw r0, 0x970(r6)
    stfs f0, 0x974(r6)
    stfs f0, 0x978(r6)
lbl_fn_80466868_00000568:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80466868_000005E4
    li r0, 0x0
    stw r0, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80466868_000005B4
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80466868_000005B4:
    li r31, 0x0
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80466868_000005E4
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107A68
    stw r31, 0x1800(r30)
lbl_fn_80466868_000005E4:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80466974(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80466974_0000064C
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80466974_0000064C:
    li r31, 0x0
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80466974_0000067C
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107A68
    stw r31, 0x1800(r30)
lbl_fn_80466974_0000067C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80466A04(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80466A04_000006D8
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80466A04_000006D8:
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x17b0(r31)
    lis r4, lbl_80755188@ha
    addi r4, r4, lbl_80755188@l
    lfs f1, lbl_80886D8C
    ori r0, r0, 0x1
    stw r0, 0x17b0(r31)
    addi r3, r1, 0x8
    addi r4, r4, 0xc9
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80466AE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80466AE4_000007B8
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80466AE4_000007B8:
    li r0, 0x7
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f2, lbl_80886D8C
    li r0, 0x1
    lfs f0, lbl_80886DA4
    addi r3, r31, 0xb0
    stfs f2, 0x2fc(r31)
    li r4, 0x0
    lfs f1, lbl_80886D60
    li r5, 0x156
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_80886D90
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80466B8C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80466B8C_00000864
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80466B8C_00000864:
    li r0, 0x8
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x13f
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80886D60
    li r0, -0x1
    lfs f1, lbl_80886D8C
    addi r4, r30, 0x1790
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80466CA4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80466CA4_0000098C
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80466CA4_0000098C:
    li r0, 0xa
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x21
    lfs f2, lbl_80886D90
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f3, lbl_80886E3C
    addi r5, r1, 0x74
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80466CA4_00000A08
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_80466CA4_00000B94
lbl_fn_80466CA4_00000A08:
    lfs f0, lbl_80886D8C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80466CA4_00000A30
    addi r3, r31, 0x1518
    lfs f2, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_80466CA4_00000B94
lbl_fn_80466CA4_00000A30:
    lwz r7, 0x1504(r31)
    li r6, 0x0
    lfs f0, 0x1508(r31)
    li r3, 0x0
    subic. r0, r7, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80466CA4_00000B80
lbl_fn_80466CA4_00000A50:
    lwz r4, 0x1548(r31)
    lfsx f0, r4, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80466CA4_00000B70
    lfs f8, lbl_80886D60
    fcmpu cr0, f8, f3
    bne lbl_fn_80466CA4_00000A74
    b lbl_fn_80466CA4_00000A78
lbl_fn_80466CA4_00000A74:
    fdivs f8, f3, f0
lbl_fn_80466CA4_00000A78:
    cmpwi r6, 0x0
    bge lbl_fn_80466CA4_00000A98
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_80466CA4_00000B94
lbl_fn_80466CA4_00000A98:
    subi r0, r7, 0x1
    cmpw r6, r0
    blt lbl_fn_80466CA4_00000ABC
    addi r3, r31, 0x1518
    lfs f2, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_80466CA4_00000B94
lbl_fn_80466CA4_00000ABC:
    cmpwi r7, 0x2
    bge lbl_fn_80466CA4_00000AE0
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_80466CA4_00000B94
lbl_fn_80466CA4_00000AE0:
    lwz r0, 0x1524(r31)
    slwi r7, r6, 4
    lwz r3, 0x1530(r31)
    addi r4, r1, 0x5c
    add r6, r0, r7
    lwz r0, 0x153c(r31)
    add r3, r3, r7
    lfs f5, 0xc(r6)
    lfs f3, 0x8(r6)
    add r7, r0, r7
    lfs f4, 0xc(r3)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r3)
    lfs f6, 0x4(r6)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r3)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r6)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r3)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r7)
    lfs f0, 0x8(r7)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r7)
    stfs f6, 0x5c(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r7)
    stfs f4, 0x60(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x7c(r1)
    b lbl_fn_80466CA4_00000B94
lbl_fn_80466CA4_00000B70:
    fsubs f3, f3, f0
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_80466CA4_00000A50
lbl_fn_80466CA4_00000B80:
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_80466CA4_00000B94:
    lfs f3, lbl_80886D60
    addi r6, r1, 0x68
    fcmpo cr0, f3, f3
    cror eq, lt, eq
    bne lbl_fn_80466CA4_00000BC0
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_80466CA4_00000D4C
lbl_fn_80466CA4_00000BC0:
    lfs f0, lbl_80886D8C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80466CA4_00000BE8
    addi r3, r31, 0x1518
    lfs f2, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_80466CA4_00000D4C
lbl_fn_80466CA4_00000BE8:
    lwz r8, 0x1504(r31)
    li r7, 0x0
    lfs f0, 0x1508(r31)
    li r3, 0x0
    subic. r0, r8, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80466CA4_00000D38
lbl_fn_80466CA4_00000C08:
    lwz r4, 0x1548(r31)
    lfsx f0, r4, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80466CA4_00000D28
    lfs f8, lbl_80886D60
    fcmpu cr0, f8, f3
    bne lbl_fn_80466CA4_00000C2C
    b lbl_fn_80466CA4_00000C30
lbl_fn_80466CA4_00000C2C:
    fdivs f8, f3, f0
lbl_fn_80466CA4_00000C30:
    cmpwi r7, 0x0
    bge lbl_fn_80466CA4_00000C50
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_80466CA4_00000D4C
lbl_fn_80466CA4_00000C50:
    subi r0, r8, 0x1
    cmpw r7, r0
    blt lbl_fn_80466CA4_00000C74
    addi r3, r31, 0x1518
    lfs f2, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_80466CA4_00000D4C
lbl_fn_80466CA4_00000C74:
    cmpwi r8, 0x2
    bge lbl_fn_80466CA4_00000C98
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_80466CA4_00000D4C
lbl_fn_80466CA4_00000C98:
    lwz r0, 0x1524(r31)
    slwi r8, r7, 4
    lwz r3, 0x1530(r31)
    addi r4, r1, 0x50
    add r7, r0, r8
    lwz r0, 0x153c(r31)
    add r3, r3, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r8, r0, r8
    lfs f4, 0xc(r3)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r3)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r3)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r3)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r8)
    lfs f0, 0x8(r8)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r8)
    stfs f6, 0x50(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r8)
    stfs f4, 0x54(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x70(r1)
    b lbl_fn_80466CA4_00000D4C
lbl_fn_80466CA4_00000D28:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_80466CA4_00000C08
lbl_fn_80466CA4_00000D38:
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_80466CA4_00000D4C:
    lfs f3, 0x8(r5)
    addi r3, r1, 0x80
    lfs f0, 0x70(r1)
    addi r30, r1, 0x8c
    lfs f5, 0x4(r5)
    fsubs f2, f3, f0
    lfs f4, 0x6c(r1)
    lfs f3, 0x0(r5)
    fsubs f4, f5, f4
    lfs f0, 0x68(r1)
    stfs f2, 0x88(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80886D80
    stfs f4, 0x84(r1)
    frsp f4, f2
    stfs f3, 0x80(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80466CA4_00000DCC
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80466CA4_00000DC0
    lfs f0, lbl_80886D84
    b lbl_fn_80466CA4_00000DC4
lbl_fn_80466CA4_00000DC0:
    lfs f0, lbl_80886D88
lbl_fn_80466CA4_00000DC4:
    stfs f0, 0x48(r1)
    b lbl_fn_80466CA4_00000DE0
lbl_fn_80466CA4_00000DCC:
    fmr f2, f4
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80466CA4_00000DE0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80466CA4_00000EFC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80466CA4_00000EEC
    lfs f0, lbl_80886D84
    b lbl_fn_80466CA4_00000EF0
lbl_fn_80466CA4_00000EEC:
    lfs f0, lbl_80886D88
lbl_fn_80466CA4_00000EF0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80466CA4_00000F10
lbl_fn_80466CA4_00000EFC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80466CA4_00000F10:
    lfs f2, lbl_80886D60
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x94(r1)
    frsp f2, f2
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_804672CC(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804672CC_00000FB4
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_804672CC_00000FB4:
    li r0, 0xb
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x21
    lfs f2, lbl_80886D90
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f3, lbl_80886E3C
    addi r5, r1, 0x74
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_804672CC_00001030
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_804672CC_000011BC
lbl_fn_804672CC_00001030:
    lfs f0, lbl_80886D8C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_804672CC_00001058
    addi r3, r31, 0x1518
    lfs f2, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_804672CC_000011BC
lbl_fn_804672CC_00001058:
    lwz r7, 0x1504(r31)
    li r6, 0x0
    lfs f0, 0x1508(r31)
    li r3, 0x0
    subic. r0, r7, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_804672CC_000011A8
lbl_fn_804672CC_00001078:
    lwz r4, 0x1548(r31)
    lfsx f0, r4, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_804672CC_00001198
    lfs f8, lbl_80886D60
    fcmpu cr0, f8, f3
    bne lbl_fn_804672CC_0000109C
    b lbl_fn_804672CC_000010A0
lbl_fn_804672CC_0000109C:
    fdivs f8, f3, f0
lbl_fn_804672CC_000010A0:
    cmpwi r6, 0x0
    bge lbl_fn_804672CC_000010C0
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_804672CC_000011BC
lbl_fn_804672CC_000010C0:
    subi r0, r7, 0x1
    cmpw r6, r0
    blt lbl_fn_804672CC_000010E4
    addi r3, r31, 0x1518
    lfs f2, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_804672CC_000011BC
lbl_fn_804672CC_000010E4:
    cmpwi r7, 0x2
    bge lbl_fn_804672CC_00001108
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_804672CC_000011BC
lbl_fn_804672CC_00001108:
    lwz r0, 0x1524(r31)
    slwi r7, r6, 4
    lwz r3, 0x1530(r31)
    addi r4, r1, 0x5c
    add r6, r0, r7
    lwz r0, 0x153c(r31)
    add r3, r3, r7
    lfs f5, 0xc(r6)
    lfs f3, 0x8(r6)
    add r7, r0, r7
    lfs f4, 0xc(r3)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r3)
    lfs f6, 0x4(r6)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r3)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r6)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r3)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r7)
    lfs f0, 0x8(r7)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r7)
    stfs f6, 0x5c(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r7)
    stfs f4, 0x60(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x7c(r1)
    b lbl_fn_804672CC_000011BC
lbl_fn_804672CC_00001198:
    fsubs f3, f3, f0
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_804672CC_00001078
lbl_fn_804672CC_000011A8:
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_804672CC_000011BC:
    lfs f3, lbl_80886D60
    addi r6, r1, 0x68
    fcmpo cr0, f3, f3
    cror eq, lt, eq
    bne lbl_fn_804672CC_000011E8
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_804672CC_00001374
lbl_fn_804672CC_000011E8:
    lfs f0, lbl_80886D8C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_804672CC_00001210
    addi r3, r31, 0x1518
    lfs f2, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_804672CC_00001374
lbl_fn_804672CC_00001210:
    lwz r8, 0x1504(r31)
    li r7, 0x0
    lfs f0, 0x1508(r31)
    li r3, 0x0
    subic. r0, r8, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_804672CC_00001360
lbl_fn_804672CC_00001230:
    lwz r4, 0x1548(r31)
    lfsx f0, r4, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_804672CC_00001350
    lfs f8, lbl_80886D60
    fcmpu cr0, f8, f3
    bne lbl_fn_804672CC_00001254
    b lbl_fn_804672CC_00001258
lbl_fn_804672CC_00001254:
    fdivs f8, f3, f0
lbl_fn_804672CC_00001258:
    cmpwi r7, 0x0
    bge lbl_fn_804672CC_00001278
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_804672CC_00001374
lbl_fn_804672CC_00001278:
    subi r0, r8, 0x1
    cmpw r7, r0
    blt lbl_fn_804672CC_0000129C
    addi r3, r31, 0x1518
    lfs f2, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_804672CC_00001374
lbl_fn_804672CC_0000129C:
    cmpwi r8, 0x2
    bge lbl_fn_804672CC_000012C0
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_804672CC_00001374
lbl_fn_804672CC_000012C0:
    lwz r0, 0x1524(r31)
    slwi r8, r7, 4
    lwz r3, 0x1530(r31)
    addi r4, r1, 0x50
    add r7, r0, r8
    lwz r0, 0x153c(r31)
    add r3, r3, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r8, r0, r8
    lfs f4, 0xc(r3)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r3)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r3)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r3)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r8)
    lfs f0, 0x8(r8)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r8)
    stfs f6, 0x50(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r8)
    stfs f4, 0x54(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x70(r1)
    b lbl_fn_804672CC_00001374
lbl_fn_804672CC_00001350:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_804672CC_00001230
lbl_fn_804672CC_00001360:
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_804672CC_00001374:
    lfs f3, 0x8(r5)
    addi r3, r1, 0x80
    lfs f0, 0x70(r1)
    addi r30, r1, 0x8c
    lfs f5, 0x4(r5)
    fsubs f2, f3, f0
    lfs f4, 0x6c(r1)
    lfs f3, 0x0(r5)
    fsubs f4, f5, f4
    lfs f0, 0x68(r1)
    stfs f2, 0x88(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80886D80
    stfs f4, 0x84(r1)
    frsp f4, f2
    stfs f3, 0x80(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x94(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804672CC_000013F4
    lfs f3, 0x8c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804672CC_000013E8
    lfs f0, lbl_80886D84
    b lbl_fn_804672CC_000013EC
lbl_fn_804672CC_000013E8:
    lfs f0, lbl_80886D88
lbl_fn_804672CC_000013EC:
    stfs f0, 0x48(r1)
    b lbl_fn_804672CC_00001408
lbl_fn_804672CC_000013F4:
    fmr f2, f4
    lfs f1, 0x8c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_804672CC_00001408:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x94(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804672CC_00001524
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804672CC_00001514
    lfs f0, lbl_80886D84
    b lbl_fn_804672CC_00001518
lbl_fn_804672CC_00001514:
    lfs f0, lbl_80886D88
lbl_fn_804672CC_00001518:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_804672CC_00001538
lbl_fn_804672CC_00001524:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_804672CC_00001538:
    lfs f2, lbl_80886D60
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x94(r1)
    frsp f2, f2
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_804678F4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    li r0, 0x0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804678F4_000015E0
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_804678F4_000015E0:
    li r0, 0xc
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x145
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1554(r29)
    addi r31, r1, 0x50
    addi r5, r29, 0x155c
    lfs f0, 0x530(r29)
    lfs f2, 0x530(r3)
    addi r7, r1, 0x68
    psq_l f1, 0x528(r3), 0, 0
    addi r6, r29, 0x1568
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    mr r3, r31
    lfs f5, 0x1560(r29)
    mr r4, r31
    lfs f3, 0x155c(r29)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x1564(r29)
    fmr f2, f6
    fsubs f0, f3, f0
    lfs f3, lbl_80886D60
    stfs f4, 0x6c(r1)
    lfs f4, lbl_80886E74
    stfs f0, 0x68(r1)
    frsp f0, f2
    fmuls f3, f3, f4
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    fmuls f2, f0, f4
    lfs f0, 0x1568(r29)
    stfs f3, 0x156c(r29)
    fmuls f0, f0, f4
    stfs f2, 0x1570(r29)
    stfs f0, 0x1568(r29)
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80886D80
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804678F4_00001714
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804678F4_00001708
    lfs f0, lbl_80886D84
    b lbl_fn_804678F4_0000170C
lbl_fn_804678F4_00001708:
    lfs f0, lbl_80886D88
lbl_fn_804678F4_0000170C:
    stfs f0, 0x48(r1)
    b lbl_fn_804678F4_00001728
lbl_fn_804678F4_00001714:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_804678F4_00001728:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804678F4_00001844
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804678F4_00001834
    lfs f0, lbl_80886D84
    b lbl_fn_804678F4_00001838
lbl_fn_804678F4_00001834:
    lfs f0, lbl_80886D88
lbl_fn_804678F4_00001838:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_804678F4_00001858
lbl_fn_804678F4_00001844:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_804678F4_00001858:
    lfs f2, lbl_80886D60
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80467C18(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    li r0, 0x0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r4
    stw r30, 0xf8(r1)
    mr r30, r5
    stw r29, 0xf4(r1)
    mr r29, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80467C18_0000190C
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80467C18_0000190C:
    li r0, 0xf
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x142
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r31, 0x15ac(r29)
    addi r31, r1, 0x74
    addi r5, r29, 0x15b0
    lfs f0, 0x530(r29)
    lfs f2, 0x8(r30)
    addi r7, r1, 0x68
    psq_l f1, 0x0(r30), 0, 0
    addi r6, r29, 0x15bc
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f0
    lfs f9, lbl_80886E78
    mr r3, r31
    lfs f4, 0x52c(r29)
    mr r4, r31
    lfs f5, 0x15b4(r29)
    lfs f3, 0x15b0(r29)
    fmuls f7, f6, f9
    fsubs f4, f5, f4
    lfs f0, 0x528(r29)
    stfs f2, 0x15b8(r29)
    fsubs f5, f3, f0
    lfs f3, lbl_80886E7C
    fmuls f8, f4, f9
    fmr f2, f7
    lfs f0, lbl_80886D60
    fmuls f9, f5, f9
    stfs f8, 0x6c(r1)
    stfs f9, 0x68(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f3, 0x15c0(r29)
    stfs f2, 0x15c4(r29)
    frsp f2, f2
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f5, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f7, 0x70(r1)
    stfs f2, 0x7c(r1)
    stfs f0, 0x78(r1)
    bl fn_805F98D0
    lfs f2, 0x7c(r1)
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80886D80
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80467C18_00001A4C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80467C18_00001A40
    lfs f0, lbl_80886D84
    b lbl_fn_80467C18_00001A44
lbl_fn_80467C18_00001A40:
    lfs f0, lbl_80886D88
lbl_fn_80467C18_00001A44:
    stfs f0, 0x48(r1)
    b lbl_fn_80467C18_00001A60
lbl_fn_80467C18_00001A4C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80467C18_00001A60:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80467C18_00001B7C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80467C18_00001B6C
    lfs f0, lbl_80886D84
    b lbl_fn_80467C18_00001B70
lbl_fn_80467C18_00001B6C:
    lfs f0, lbl_80886D88
lbl_fn_80467C18_00001B70:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80467C18_00001B90
lbl_fn_80467C18_00001B7C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80467C18_00001B90:
    lfs f2, lbl_80886D60
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
