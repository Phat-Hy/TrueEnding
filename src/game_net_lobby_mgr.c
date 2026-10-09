#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_800109E0(void);
extern void fn_80013410(void);
extern void fn_8003E4A4(void);
extern void fn_8004203C(void);
extern void fn_8004212C(void);
extern void fn_80043014(void);
extern void fn_8005B3CC(void);
extern void fn_8006B0C8(void);
extern void fn_8006D008(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8009EE30(void);
extern void fn_800DC288(void);
extern void fn_800E0AA8(void);
extern void fn_800F80A8(void);
extern void fn_801125F8(void);
extern void fn_8012044C(void);
extern void fn_801495E8(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_80239DAC(void);
extern void fn_8023A184(void);
extern void fn_8030B408(void);
extern void fn_803830A0(void);
extern void fn_803EC16C(void);
extern void fn_803EDB0C(void);
extern void fn_803EFDA4(void);
extern void fn_803FFD10(void);
extern void fn_804006E0(void);
extern void fn_80470580(void);
extern void fn_80473EFC(void);
extern void fn_80473F18(void);
extern void fn_804918A4(void);
extern void fn_8049707C(void);
extern void fn_80497238(void);
extern void fn_80497864(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80790448[];
extern u8 jumptable_807904D4[];
extern u8 lbl_80756A8C[];
extern u8 lbl_80775A88[];
extern u8 lbl_807905B8[];

/* Small data declarations */
extern u32 lbl_8087E0B8;
extern u32 lbl_8087E0BC;
extern u32 lbl_8087E0C0;
extern u32 lbl_8087E0C4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F558;
extern u32 lbl_808870E0;
extern u32 lbl_808870E8;
extern u32 lbl_808870F0;
extern u32 lbl_808870F4;

/* Function declarations */
void fn_80498354(void);
void fn_80498574(void);
void fn_804985E4(void);
void fn_80498E7C(void);
void fn_80498EAC(void);
void fn_80498EC0(void);
void fn_80498ED4(void);
void fn_80498EE8(void);
void fn_80498EF0(void);
void fn_80498EF8(void);
void fn_80498F08(void);
void fn_80498F0C(void);
void fn_80498F14(void);
void fn_80498F4C(void);
void fn_80498F50(void);
void fn_80498F64(void);
void fn_80498F78(void);
void fn_80498FF4(void);
void fn_80499008(void);
void fn_80499080(void);
void fn_80499388(void);
void fn_80499390(void);
void fn_80499684(void);
void fn_80499694(void);
void fn_8049969C(void);
void fn_80499724(void);
void fn_80499734(void);
void fn_804997E4(void);
void fn_8049981C(void);
void fn_8049982C(void);
void fn_8049994C(void);
void fn_80499B9C(void);
void fn_80499C48(void);
void fn_80499CCC(void);

asm void fn_80498354(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    stw r31, 0x1cc(r1)
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    mr r29, r3
    addi r3, r1, 0x188
    lfs f1, 0x2c(r29)
    lfs f2, 0x30(r29)
    lfs f3, 0x34(r29)
    bl fn_805F90D0
    addi r3, r1, 0x188
    addi r31, r29, 0x48
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0x38
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lfs f7, lbl_808870E0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, lbl_808870E8
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    stfs f7, 0x64(r1)
    stfs f7, 0x5c(r1)
    stfs f7, 0x58(r1)
    stfs f7, 0x54(r1)
    stfs f7, 0x50(r1)
    stfs f7, 0x48(r1)
    stfs f7, 0x44(r1)
    stfs f7, 0x40(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    lfs f1, 0x40(r29)
    fcmpu cr0, f7, f1
    beq lbl_fn_80498354_00000100
    addi r3, r1, 0x128
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x128
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80498354_00000100:
    lfs f0, lbl_808870E0
    lfs f1, 0x3c(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80498354_00000160
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc8
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80498354_00000160:
    lfs f0, lbl_808870E0
    lfs f1, 0x38(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80498354_000001C0
    addi r3, r1, 0x68
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80498354_000001C0:
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_805F89F0
    addi r3, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_80498574(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x120(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80498574_00000274
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_80498574_00000268
lbl_fn_80498574_00000254:
    lwz r3, 0x6c(r29)
    lwzx r3, r3, r31
    bl fn_804006E0
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_80498574_00000268:
    lwz r0, 0x68(r29)
    cmplw r30, r0
    blt lbl_fn_80498574_00000254
lbl_fn_80498574_00000274:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804985E4(void)
{
    nofralloc
    stwu r1, -0x1440(r1)
    mflr r0
    stw r0, 0x1444(r1)
    li r0, 0x1438
    addi r11, r1, 0x1420
    stfd f31, 0x1430(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x1428
    stfd f30, 0x1420(r1)
    psq_stx f30, r1, r0, 0, 0
    bl _savegpr_21
    mr r21, r3
    addi r3, r3, 0x58
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_804985E4_00000AF8
    addi r3, r21, 0x58
    bl fn_80470580
    addi r27, r3, 0x10
    addi r3, r21, 0x58
    bl fn_80473F18
    mr r4, r3
    addi r3, r1, 0x54
    bl fn_8003E4A4
    addi r3, r1, 0xa8
    addi r4, r1, 0x54
    bl fn_8006B0C8
    addi r3, r1, 0x54
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x9c
    bl fn_80498F64
    addi r3, r1, 0x90
    bl fn_80498FF4
    lis r28, lbl_80756A8C@ha
    li r26, 0x0
    addi r28, r28, lbl_80756A8C@l
    lis r31, jumptable_80790448@ha
    lis r30, jumptable_807904D4@ha
    lis r29, 0x1062
    b lbl_fn_804985E4_000005D4
lbl_fn_804985E4_00000334:
    mr r3, r27
    mr r4, r26
    bl fn_80498E7C
    stw r3, 0x8(r1)
    addi r4, r28, 0x3d
    li r5, 0x2
    lwz r22, 0x0(r3)
    mr r3, r22
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_804985E4_000005AC
    addi r3, r22, 0x2
    bl fn_80684600
    lwz r4, 0x8(r1)
    mulli r22, r3, 0x3e8
    lwz r3, 0x0(r4)
    addi r3, r3, 0x6
    bl fn_80684600
    lwz r4, 0x8(r1)
    add r25, r3, r22
    lwz r3, 0x0(r4)
    addi r3, r3, 0xa
    bl fn_80684600
    mr r24, r3
    li r23, 0x0
    li r22, 0x0
    bl fn_803830A0
    cmpwi r3, 0x0
    beq lbl_fn_804985E4_00000468
    addi r0, r29, 0x4dd3
    mulhw r0, r0, r25
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0xa
    bne lbl_fn_804985E4_00000468
    bl fn_803830A0
    bl fn_803EFDA4
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    ble lbl_fn_804985E4_00000434
    cmpwi r3, 0x1
    beq lbl_fn_804985E4_000003FC
    cmpwi r3, 0x3
    beq lbl_fn_804985E4_000003FC
    cmpwi r3, 0x6
    beq lbl_fn_804985E4_000003FC
    cmpwi r3, 0x2
    beq lbl_fn_804985E4_00000434
    b lbl_fn_804985E4_00000468
lbl_fn_804985E4_000003FC:
    subi r0, r25, 0x271d
    cmplwi r0, 0x22
    bgt lbl_fn_804985E4_00000468
    addi r3, r30, jumptable_807904D4@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r22, 0x1
    li r23, 0x1
    b lbl_fn_804985E4_00000468
    li r22, 0x0
    li r23, 0x1
    b lbl_fn_804985E4_00000468
lbl_fn_804985E4_00000434:
    subi r0, r25, 0x271d
    cmplwi r0, 0x22
    bgt lbl_fn_804985E4_00000468
    addi r3, r31, jumptable_80790448@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r22, 0x3
    li r23, 0x1
    b lbl_fn_804985E4_00000468
    li r22, 0x2
    li r23, 0x1
lbl_fn_804985E4_00000468:
    cmpwi r23, 0x0
    beq lbl_fn_804985E4_00000494
    lwz r3, 0x8(r1)
    mr r4, r22
    bl fn_80498F50
    stw r4, 0x14(r1)
    addi r4, r1, 0x10
    stw r3, 0x10(r1)
    addi r3, r1, 0x90
    bl fn_80499080
    b lbl_fn_804985E4_000005D0
lbl_fn_804985E4_00000494:
    lwz r3, 0x8(r1)
    lfs f1, 0x18(r3)
    bl fn_801125F8
    lwz r3, 0x8(r1)
    fmr f31, f1
    lfs f1, 0x14(r3)
    bl fn_801125F8
    lwz r3, 0x8(r1)
    fmr f30, f1
    lfs f1, 0x10(r3)
    bl fn_801125F8
    fmr f2, f30
    addi r3, r1, 0x84
    fmr f3, f31
    bl fn_8000D114
    lwz r3, 0x8(r1)
    lwz r3, 0x2c(r3)
    lwz r22, 0x0(r3)
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r4, r22
    addi r3, r1, 0xdb0
    bl fn_8004203C
    addi r3, r1, 0xdb0
    li r4, 0x1
    bl fn_80499388
    addi r3, r1, 0xdb0
    bl fn_8005B3CC
    addi r3, r1, 0xdb0
    bl fn_8005B3CC
    bl fn_80684600
    mr r22, r3
    addi r3, r1, 0xdb0
    bl fn_8005B3CC
    bl fn_80684600
    mr r23, r3
    mr r3, r21
    mr r4, r25
    mr r5, r24
    bl fn_803EC16C
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_804985E4_000005D0
    lwz r4, 0x8(r1)
    addi r3, r1, 0x48
    addi r5, r21, 0x124
    addi r4, r4, 0x4
    bl fn_80013410
    mr r3, r24
    addi r4, r1, 0x48
    bl fn_80498EAC
    mr r3, r24
    addi r4, r1, 0x84
    bl fn_80498EC0
    lwz r4, 0x8(r1)
    mr r3, r24
    addi r4, r4, 0x1c
    bl fn_80498ED4
    mr r3, r24
    mr r4, r22
    bl fn_80498EE8
    lwz r5, 0x8(r1)
    mr r3, r24
    addi r4, r21, 0xf0
    bl fn_803EDB0C
    mr r3, r24
    mr r4, r23
    bl fn_80498EF0
    b lbl_fn_804985E4_000005D0
lbl_fn_804985E4_000005AC:
    mr r3, r22
    addi r4, r28, 0x40
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_804985E4_000005D0
    addi r3, r1, 0x9c
    addi r4, r1, 0x8
    bl fn_80499390
lbl_fn_804985E4_000005D0:
    addi r26, r26, 0x1
lbl_fn_804985E4_000005D4:
    lwz r0, 0x14(r27)
    cmpw r26, r0
    blt lbl_fn_804985E4_00000334
    addi r3, r1, 0x90
    bl fn_80499684
    cmpwi r3, 0x0
    bne lbl_fn_804985E4_00000808
    addi r3, r1, 0x90
    bl fn_80499694
    lis r23, lbl_80756A8C@ha
    mr r4, r3
    addi r5, r23, lbl_80756A8C@l
    addi r3, r21, 0x68
    addi r6, r5, 0x43
    li r5, 0x6
    bl fn_8049969C
    li r24, 0x0
    b lbl_fn_804985E4_000007F8
lbl_fn_804985E4_0000061C:
    mr r4, r24
    addi r3, r1, 0x90
    bl fn_80499724
    lwz r25, 0x0(r3)
    lwz r3, 0x0(r25)
    addi r3, r3, 0x2
    bl fn_80684600
    mulli r22, r3, 0x3e8
    lwz r3, 0x0(r25)
    addi r3, r3, 0x6
    bl fn_80684600
    lwz r4, 0x0(r25)
    add r26, r3, r22
    addi r3, r4, 0xa
    bl fn_80684600
    lfs f1, 0x18(r25)
    mr r27, r3
    bl fn_801125F8
    fmr f31, f1
    lfs f1, 0x14(r25)
    bl fn_801125F8
    fmr f30, f1
    lfs f1, 0x10(r25)
    bl fn_801125F8
    fmr f2, f30
    addi r3, r1, 0x78
    fmr f3, f31
    bl fn_8000D114
    lwz r3, 0x2c(r25)
    lwz r22, 0x0(r3)
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r4, r22
    addi r3, r1, 0x77c
    bl fn_8004203C
    addi r3, r1, 0x77c
    li r4, 0x1
    bl fn_80499388
    addi r3, r1, 0x77c
    bl fn_8005B3CC
    addi r3, r1, 0x77c
    bl fn_8005B3CC
    bl fn_80684600
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_804985E4_000006F0
    mr r4, r24
    addi r3, r1, 0x90
    bl fn_80499724
    lwz r0, 0x4(r3)
    ori r0, r0, 0x2
    stw r0, 0x4(r3)
lbl_fn_804985E4_000006F0:
    addi r5, r23, lbl_80756A8C@l
    li r3, 0x138
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_804985E4_00000740
    mr r4, r24
    addi r3, r1, 0x90
    bl fn_80499724
    mr r4, r3
    mr r3, r22
    lwz r7, 0x4(r4)
    mr r4, r26
    mr r5, r27
    mr r6, r25
    bl fn_803FFD10
    mr r22, r3
lbl_fn_804985E4_00000740:
    mr r4, r24
    addi r3, r21, 0x68
    bl fn_80497238
    stw r22, 0x0(r3)
    addi r3, r1, 0x118
    addi r4, r25, 0x1c
    bl fn_80498EF8
    addi r3, r1, 0xe8
    addi r4, r1, 0x78
    bl fn_800109E0
    addi r3, r1, 0x118
    addi r4, r1, 0xe8
    bl fn_801495E8
    addi r3, r1, 0x3c
    addi r4, r25, 0x4
    addi r5, r21, 0x124
    bl fn_80013410
    addi r3, r1, 0xb8
    addi r4, r1, 0x3c
    bl fn_800F80A8
    addi r3, r1, 0x118
    addi r4, r1, 0xb8
    bl fn_801495E8
    mr r4, r24
    addi r3, r21, 0x68
    bl fn_80497238
    lwz r3, 0x0(r3)
    bl fn_80498F08
    addi r4, r1, 0x118
    bl fn_8009EE30
    mr r4, r24
    addi r3, r21, 0x68
    bl fn_80497238
    lwz r3, 0x0(r3)
    addi r4, r21, 0xf0
    bl fn_80498F0C
    lwz r22, 0x2c(r25)
    mr r4, r24
    addi r3, r21, 0x68
    bl fn_80497238
    lwz r3, 0x0(r3)
    bl fn_80498F08
    lfs f1, 0xc(r22)
    addi r4, r22, 0x4
    bl fn_80498F14
    addi r24, r24, 0x1
lbl_fn_804985E4_000007F8:
    addi r3, r1, 0x90
    bl fn_80499694
    cmplw r24, r3
    blt lbl_fn_804985E4_0000061C
lbl_fn_804985E4_00000808:
    addi r3, r1, 0x9c
    bl fn_800E0AA8
    lis r5, lbl_80756A8C@ha
    mr r4, r3
    addi r23, r5, lbl_80756A8C@l
    addi r3, r21, 0x60
    addi r6, r23, 0x58
    li r5, 0x7
    bl fn_80499734
    addi r3, r1, 0x6c
    addi r4, r23, 0x63
    bl fn_8003E4A4
    li r24, 0x0
    b lbl_fn_804985E4_00000AB8
lbl_fn_804985E4_00000840:
    mr r4, r24
    addi r3, r1, 0x9c
    bl fn_8049981C
    lwz r25, 0x0(r3)
    lwz r3, 0x2c(r25)
    lwz r22, 0x0(r3)
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r4, r22
    addi r3, r1, 0x148
    bl fn_8004203C
    addi r3, r1, 0x148
    li r4, 0x1
    bl fn_80499388
    lfs f1, 0x18(r25)
    bl fn_801125F8
    fmr f30, f1
    lfs f1, 0x14(r25)
    bl fn_801125F8
    fmr f31, f1
    lfs f1, 0x10(r25)
    bl fn_801125F8
    fmr f2, f31
    addi r3, r1, 0x60
    fmr f3, f30
    bl fn_8000D114
    addi r3, r1, 0x148
    bl fn_8005B3CC
    mr r22, r3
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    mr r4, r22
    addi r3, r3, 0xc
    bl fn_8012044C
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    addi r3, r3, 0xc
    bl fn_80498F4C
    mr r5, r3
    addi r3, r1, 0x30
    addi r4, r1, 0x6c
    bl fn_8006D008
    addi r3, r1, 0x24
    addi r4, r1, 0x30
    addi r5, r23, 0x6c
    bl fn_8006D008
    addi r3, r1, 0x24
    bl fn_8004212C
    mr r22, r3
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    mr r4, r22
    bl fn_80237654
    addi r3, r1, 0x24
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x30
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x18
    addi r4, r25, 0x4
    addi r5, r21, 0x124
    bl fn_80013410
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    addi r3, r3, 0x2c
    addi r4, r1, 0x18
    bl fn_8000D124
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    addi r3, r3, 0x38
    addi r4, r1, 0x60
    bl fn_8000D124
    lfs f31, 0x1c(r25)
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    stfs f31, 0x44(r3)
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    bl fn_80498354
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    lfs f1, lbl_808870E8
    addi r3, r3, 0x78
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_8030B408
    addi r3, r1, 0x148
    bl fn_8005B3CC
    bl fn_80684600
    mr r22, r3
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    stw r22, 0x88(r3)
    addi r3, r1, 0x148
    bl fn_8005B3CC
    bl fn_80684600
    mr r22, r3
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    stw r22, 0x8c(r3)
    addi r3, r1, 0x148
    bl fn_8005B3CC
    bl fn_80684600
    mr r22, r3
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    stw r22, 0x90(r3)
    addi r3, r1, 0x148
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    stfs f31, 0x94(r3)
    addi r3, r1, 0x148
    bl fn_8005B3CC
    bl fn_80684600
    mr r22, r3
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    stw r22, 0x9c(r3)
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    lwz r0, 0x90(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804985E4_00000AA0
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    lwz r22, 0x90(r3)
    bl fn_80680CF8
    divw r0, r3, r22
    mullw r0, r0, r22
    subf r22, r0, r3
    b lbl_fn_804985E4_00000AA4
lbl_fn_804985E4_00000AA0:
    li r22, 0x0
lbl_fn_804985E4_00000AA4:
    mr r4, r24
    addi r3, r21, 0x60
    bl fn_80497864
    stw r22, 0x98(r3)
    addi r24, r24, 0x1
lbl_fn_804985E4_00000AB8:
    addi r3, r1, 0x9c
    bl fn_800E0AA8
    cmplw r24, r3
    blt lbl_fn_804985E4_00000840
    addi r3, r1, 0x6c
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x90
    li r4, -0x1
    bl fn_80499008
    addi r3, r1, 0x9c
    li r4, -0x1
    bl fn_80498F78
    addi r3, r1, 0xa8
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_804985E4_00000AF8:
    li r0, 0x1438
    addi r11, r1, 0x1420
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x1430(r1)
    li r0, 0x1428
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x1420(r1)
    bl _restgpr_21
    lwz r0, 0x1444(r1)
    mtlr r0
    addi r1, r1, 0x1440
    blr
}

asm void fn_80498E7C(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    subis r0, r5, 0x6c6f
    cmplwi r0, 0x6373
    bne lbl_fn_80498E7C_00000B48
    mulli r0, r4, 0x3c
    lwz r3, 0x18(r3)
    add r3, r3, r0
    blr
lbl_fn_80498E7C_00000B48:
    mulli r0, r4, 0x30
    lwz r3, 0x18(r3)
    add r3, r3, r0
    blr
}

asm void fn_80498EAC(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x6c(r3), 0, 0
    stfs f2, 0x74(r3)
    blr
}

asm void fn_80498EC0(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    blr
}

asm void fn_80498ED4(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x90(r3), 0, 0
    stfs f2, 0x98(r3)
    blr
}

asm void fn_80498EE8(void)
{
    nofralloc
    stw r4, 0x58(r3)
    blr
}

asm void fn_80498EF0(void)
{
    nofralloc
    stw r4, 0xa4(r3)
    blr
}

asm void fn_80498EF8(void)
{
    nofralloc
    lfs f1, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    b fn_805F9160
}

asm void fn_80498F08(void)
{
    nofralloc
    blr
}

asm void fn_80498F0C(void)
{
    nofralloc
    stw r4, 0x7c(r3)
    blr
}

asm void fn_80498F14(void)
{
    nofralloc
    lfs f0, 0x4(r4)
    frsp f3, f1
    lfs f5, lbl_808870F0
    fadds f2, f0, f1
    lfs f4, 0x0(r4)
    stfs f1, 0x70(r3)
    fmuls f4, f5, f4
    lfs f0, lbl_808870E8
    fdivs f1, f2, f3
    fdivs f2, f4, f3
    stfs f2, 0x74(r3)
    fsubs f0, f0, f1
    stfs f0, 0x78(r3)
    blr
}

asm void fn_80498F4C(void)
{
    nofralloc
    blr
}

asm void fn_80498F50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_80498F64(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80498F78(void)
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
    beq lbl_fn_80498F78_00000C84
    beq lbl_fn_80498F78_00000C74
    beq lbl_fn_80498F78_00000C74
    beq lbl_fn_80498F78_00000C74
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80498F78_00000C74
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_80498F78_00000C74:
    cmpwi r31, 0x0
    ble lbl_fn_80498F78_00000C84
    mr r3, r30
    bl dtor_80084684
lbl_fn_80498F78_00000C84:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80498FF4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80499008(void)
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
    beq lbl_fn_80499008_00000D10
    beq lbl_fn_80499008_00000D00
    beq lbl_fn_80499008_00000D00
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80499008_00000D00
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_80499008_00000D00:
    cmpwi r31, 0x0
    ble lbl_fn_80499008_00000D10
    mr r3, r30
    bl dtor_80084684
lbl_fn_80499008_00000D10:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80499080(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_80499080_00000D8C
    addi r6, r6, 0x1
    lwz r5, 0x0(r3)
    subi r0, r6, 0x1
    stw r6, 0x4(r3)
    slwi r0, r0, 3
    lwz r3, 0x0(r4)
    add r5, r5, r0
    lwz r0, 0x4(r4)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
    b lbl_fn_80499080_00001014
lbl_fn_80499080_00000D8C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_80499080_00000DC4
    lis r4, lbl_80756A8C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756A8C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x71
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80499080_00000DC4:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x2000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_80499080_00000E2C
    lis r4, lbl_80756A8C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756A8C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x71
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80499080_00000E2C:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80499080_00000E7C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80499080_00000E70
    addi r3, r1, 0x8
lbl_fn_80499080_00000E70:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80499080_00000EC0
lbl_fn_80499080_00000E7C:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_80499080_00000EB8
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80499080_00000EAC
    addi r3, r1, 0x8
lbl_fn_80499080_00000EAC:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80499080_00000EC0
lbl_fn_80499080_00000EB8:
    lis r3, 0x2000
    subi r28, r3, 0x1
lbl_fn_80499080_00000EC0:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_80499080_00000EF4
    lis r4, lbl_80756A8C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756A8C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x71
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80499080_00000EF4:
    slwi r3, r28, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80499080_00000F28
    lis r3, __files@ha
    lis r4, lbl_807905B8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807905B8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80499080_00000F28:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r5, r0, 3
    lwz r3, 0x0(r30)
    stw r28, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r4, r0, 3
    lwz r0, 0x4(r30)
    add r4, r31, r4
    stwux r3, r4, r5
    stw r0, 0x4(r4)
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r28, 0x0(r29)
    slwi r4, r4, 3
    add r5, r28, r4
    subf r5, r28, r5
    mr r4, r28
    srawi r5, r5, 3
    addze r30, r5
    subf r0, r30, r0
    stw r0, 0x24(r1)
    slwi r31, r30, 3
    slwi r0, r0, 3
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r30
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80499080_00001014
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80499080_00001014
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80499080_00001014:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80499388(void)
{
    nofralloc
    stw r4, 0x630(r3)
    blr
}

asm void fn_80499390(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_80499390_00001090
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_80499390_00001310
lbl_fn_80499390_00001090:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_80499390_000010C8
    lis r4, lbl_80756A8C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756A8C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x71
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80499390_000010C8:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80499390_00001130
    lis r4, lbl_80756A8C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756A8C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x71
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80499390_00001130:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80499390_00001180
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80499390_00001174
    addi r3, r1, 0x10
lbl_fn_80499390_00001174:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80499390_000011C4
lbl_fn_80499390_00001180:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80499390_000011BC
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80499390_000011B0
    addi r3, r1, 0x10
lbl_fn_80499390_000011B0:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80499390_000011C4
lbl_fn_80499390_000011BC:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80499390_000011C4:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80499390_000011F8
    lis r4, lbl_80756A8C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756A8C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x71
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80499390_000011F8:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80499390_0000122C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80499390_0000122C:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80499390_00001310
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80499390_00001310
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80499390_00001310:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80499684(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80499694(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8049969C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049969C_00001380
    mr r3, r0
    bl fn_80084C24
lbl_fn_8049969C_00001380:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_8049969C_000013AC
    mr r4, r31
    slwi r3, r30, 2
    la r5, lbl_8087E0C4
    la r6, lbl_8087E0C0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r29)
    b lbl_fn_8049969C_000013B4
lbl_fn_8049969C_000013AC:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_8049969C_000013B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80499724(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    blr
}

asm void fn_80499734(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80499734_00001420
    lis r4, fn_8049707C@ha
    mr r3, r0
    addi r4, r4, fn_8049707C@l
    bl fn_80695A50
lbl_fn_80499734_00001420:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_80499734_0000146C
    mulli r3, r30, 0xa0
    mr r4, r31
    la r5, lbl_8087E0BC
    la r6, lbl_8087E0B8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_804997E4@ha
    lis r5, fn_8049707C@ha
    mr r7, r30
    li r6, 0xa0
    addi r4, r4, fn_804997E4@l
    addi r5, r5, fn_8049707C@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_80499734_00001474
lbl_fn_80499734_0000146C:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_80499734_00001474:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804997E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80237518
    li r0, 0x0
    stb r0, 0xc(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049981C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_8049982C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lwz r0, lbl_8087F558
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_8049982C_000015D8
    lfs f31, lbl_808870F4
    addi r30, r1, 0x18
    addi r29, r1, 0x8
    li r28, 0x0
    li r31, 0x0
    b lbl_fn_8049982C_000015CC
lbl_fn_8049982C_0000151C:
    lwz r0, 0x64(r27)
    mr r4, r29
    stfs f31, 0x24(r1)
    add r5, r0, r31
    lwz r3, lbl_8087F558
    psq_l f1, 0x2c(r5), 0, 0
    lfs f2, 0x34(r5)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x20(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x10(r1)
    stfs f31, 0x14(r1)
    bl fn_804918A4
    cmpwi r3, 0x0
    beq lbl_fn_8049982C_000015C4
    lwz r3, 0x300(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8049982C_000015C4
    lwz r0, 0x64(r27)
    li r4, 0x0
    add r5, r0, r31
    addi r5, r5, 0xc
    bl fn_80043014
    lwz r0, 0x64(r27)
    lfs f0, 0x0(r3)
    add r4, r0, r31
    stfs f0, 0x78(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x7c(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x80(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0x84(r4)
    lwz r0, 0x54(r27)
    cmpwi r0, 0x2
    bne lbl_fn_8049982C_000015C4
    lwz r0, 0x64(r27)
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    add r4, r0, r31
    addi r6, r4, 0x78
    bl fn_8023A184
lbl_fn_8049982C_000015C4:
    addi r28, r28, 0x1
    addi r31, r31, 0xa0
lbl_fn_8049982C_000015CC:
    lwz r0, 0x60(r27)
    cmplw r28, r0
    blt lbl_fn_8049982C_0000151C
lbl_fn_8049982C_000015D8:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8049994C(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x180
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    bl _savegpr_23
    lfs f30, lbl_808870E0
    mr r23, r3
    lfs f31, lbl_808870E8
    mr r24, r4
    mr r25, r5
    addi r27, r1, 0x8
    addi r30, r1, 0x128
    addi r28, r1, 0x68
    addi r29, r1, 0xc8
    li r26, 0x0
    li r31, 0x0
    b lbl_fn_8049994C_00001814
lbl_fn_8049994C_0000164C:
    lwz r0, 0x64(r23)
    lfs f1, 0x8(r25)
    add r3, r0, r31
    lfs f0, 0x0(r24)
    lfs f8, 0x2c(r3)
    fcmpu cr0, f30, f1
    lfs f7, 0x4(r24)
    fadds f8, f8, f0
    lfs f0, 0x8(r24)
    stfs f8, 0x2c(r3)
    lfs f8, 0x30(r3)
    fadds f7, f8, f7
    stfs f7, 0x30(r3)
    lfs f7, 0x34(r3)
    fadds f0, f7, f0
    stfs f0, 0x34(r3)
    stfs f30, 0x154(r1)
    stfs f30, 0x14c(r1)
    stfs f30, 0x148(r1)
    stfs f30, 0x144(r1)
    stfs f30, 0x140(r1)
    stfs f30, 0x138(r1)
    stfs f30, 0x134(r1)
    stfs f30, 0x130(r1)
    stfs f30, 0x12c(r1)
    stfs f31, 0x150(r1)
    stfs f31, 0x13c(r1)
    stfs f31, 0x128(r1)
    beq lbl_fn_8049994C_0000170C
    addi r3, r1, 0x38
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x38
    addi r5, r1, 0x8
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8049994C_0000170C:
    lfs f1, 0x4(r25)
    fcmpu cr0, f30, f1
    beq lbl_fn_8049994C_00001764
    addi r3, r1, 0x98
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x98
    addi r5, r1, 0x68
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8049994C_00001764:
    lfs f1, 0x0(r25)
    fcmpu cr0, f30, f1
    beq lbl_fn_8049994C_000017BC
    addi r3, r1, 0xf8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xf8
    addi r5, r1, 0xc8
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8049994C_000017BC:
    lwz r0, 0x64(r23)
    addi r3, r1, 0x128
    add r4, r0, r31
    addi r4, r4, 0x2c
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x64(r23)
    addi r26, r26, 0x1
    lfs f8, 0x0(r25)
    add r3, r0, r31
    lfs f7, 0x4(r25)
    lfs f9, 0x38(r3)
    addi r31, r31, 0xa0
    lfs f0, 0x8(r25)
    fadds f8, f9, f8
    stfs f8, 0x38(r3)
    lfs f8, 0x3c(r3)
    fadds f7, f8, f7
    stfs f7, 0x3c(r3)
    lfs f7, 0x40(r3)
    fadds f0, f7, f0
    stfs f0, 0x40(r3)
lbl_fn_8049994C_00001814:
    lwz r0, 0x60(r23)
    cmplw r26, r0
    blt lbl_fn_8049994C_0000164C
    addi r11, r1, 0x180
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    bl _restgpr_23
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80499B9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80499B9C_000018D4
    li r0, 0x1
    stw r0, 0x54(r3)
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_80499B9C_000018C8
lbl_fn_80499B9C_00001888:
    lwz r0, 0x64(r28)
    add r3, r0, r31
    lwz r30, 0x90(r3)
    cmpwi r30, 0x0
    ble lbl_fn_80499B9C_000018B0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r4, r0, r3
    b lbl_fn_80499B9C_000018B4
lbl_fn_80499B9C_000018B0:
    li r4, 0x0
lbl_fn_80499B9C_000018B4:
    lwz r0, 0x64(r28)
    addi r29, r29, 0x1
    add r3, r0, r31
    addi r31, r31, 0xa0
    stw r4, 0x98(r3)
lbl_fn_80499B9C_000018C8:
    lwz r0, 0x60(r28)
    cmplw r29, r0
    blt lbl_fn_80499B9C_00001888
lbl_fn_80499B9C_000018D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80499C48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    stw r0, 0x54(r3)
    lwz r30, lbl_8087F3C0
    b lbl_fn_80499C48_0000194C
lbl_fn_80499C48_0000192C:
    lwz r0, 0x64(r28)
    mr r3, r30
    li r5, 0x0
    li r6, 0x0
    add r4, r0, r31
    bl fn_80239DAC
    addi r31, r31, 0xa0
    addi r29, r29, 0x1
lbl_fn_80499C48_0000194C:
    lwz r0, 0x60(r28)
    cmplw r29, r0
    blt lbl_fn_80499C48_0000192C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80499CCC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, 0x18(r3)
    b lbl_fn_80499CCC_000019BC
lbl_fn_80499CCC_000019A0:
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r31, 0x1c(r31)
lbl_fn_80499CCC_000019BC:
    cmpwi r31, 0x0
    bne lbl_fn_80499CCC_000019A0
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_80499CCC_000019E4
lbl_fn_80499CCC_000019D0:
    lwz r3, 0x6c(r29)
    addi r5, r5, 0x1
    lwzx r3, r3, r4
    addi r4, r4, 0x4
    stw r30, 0x64(r3)
lbl_fn_80499CCC_000019E4:
    lwz r0, 0x68(r29)
    cmplw r5, r0
    blt lbl_fn_80499CCC_000019D0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
