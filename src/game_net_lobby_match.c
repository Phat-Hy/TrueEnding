#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80045A24(void);
extern void fn_8005B9CC(void);
extern void fn_8006B174(void);
extern void fn_800709F4(void);
extern void fn_80084320(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B130(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_80092814(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_800B1B28(void);
extern void fn_800C16B4(void);
extern void fn_800D1E9C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_804962B0(void);
extern void fn_804963A4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_8068AD58(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80756B84[];
extern u8 lbl_80756CD8[];
extern u8 lbl_80756E38[];
extern u8 lbl_80756E80[];
extern u8 lbl_80790630[];
extern u8 lbl_80790688[];
extern u8 lbl_807906E8[];

/* Small data declarations */
extern u32 lbl_8087E0D0;
extern u32 lbl_8087E0D4;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F560;
extern u32 lbl_8087F564;
extern u32 lbl_8087F568;
extern u32 lbl_8087F56C;
extern u32 lbl_8087F570;
extern u32 lbl_8087F574;
extern u32 lbl_8088710C;
extern u32 lbl_80887110;
extern u32 lbl_80887114;
extern u32 lbl_80887118;
extern u32 lbl_8088711C;
extern u32 lbl_80887120;
extern u32 lbl_80887124;
extern u32 lbl_80887128;
extern u32 lbl_8088712C;
extern u32 lbl_80887130;
extern u32 lbl_80887134;
extern u32 lbl_80887138;
extern u32 lbl_8088713C;
extern u32 lbl_80887140;
extern u32 lbl_80887144;
extern u32 lbl_80887148;
extern u32 lbl_8088714C;
extern u32 lbl_80887150;
extern u32 lbl_80887154;
extern u32 lbl_80887158;

/* Function declarations */
void fn_8049B780(void);
void fn_8049B7CC(void);
void fn_8049B880(void);
void fn_8049B980(void);
void fn_8049B9B8(void);
void fn_8049BAAC(void);
void fn_8049BB4C(void);
void fn_8049C350(void);
void fn_8049C3C0(void);
void fn_8049C454(void);
void fn_8049C458(void);
void fn_8049C688(void);
void fn_8049C7AC(void);
void fn_8049C8A8(void);
void fn_8049C8DC(void);
void fn_8049C960(void);
void fn_8049CA9C(void);
void fn_8049CB88(void);
void fn_8049CBE0(void);
void fn_8049CC5C(void);
void fn_8049CDA0(void);
void fn_8049CDBC(void);
void fn_8049CE40(void);

asm void fn_8049B780(void)
{
    nofralloc
    lwz r0, 0x340(r3)
    extlwi r0, r0, 2, 5
    srawi. r0, r0, 31
    beq lbl_fn_8049B780_0000001C
    lwz r3, 0x324(r3)
    stw r4, 0x1dc(r3)
    blr
lbl_fn_8049B780_0000001C:
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_8049B780_0000003C
lbl_fn_8049B780_00000028:
    lwz r5, 0x348(r3)
    addi r7, r7, 0x1
    lwzx r5, r5, r6
    addi r6, r6, 0x4
    stw r4, 0x64(r5)
lbl_fn_8049B780_0000003C:
    lwz r0, 0x344(r3)
    cmplw r7, r0
    blt lbl_fn_8049B780_00000028
    blr
}

asm void fn_8049B7CC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    addi r30, r1, 0x8
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_8049B7CC_000000DC
lbl_fn_8049B7CC_00000078:
    lwz r5, 0x348(r27)
    mr r3, r28
    mr r4, r30
    lwzx r5, r5, r31
    psq_l f1, 0x8(r5), 0, 0
    lfs f2, 0x10(r5)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r1)
    bl fn_804962B0
    cmpwi r3, 0x0
    beq lbl_fn_8049B7CC_000000C0
    lwz r4, 0x348(r27)
    addi r0, r3, 0x4c
    lwzx r3, r4, r31
    stw r0, 0x64(r3)
    b lbl_fn_8049B7CC_000000D4
lbl_fn_8049B7CC_000000C0:
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r4, 0x348(r27)
    lwzx r4, r4, r31
    stw r3, 0x64(r4)
lbl_fn_8049B7CC_000000D4:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_fn_8049B7CC_000000DC:
    lwz r0, 0x344(r27)
    cmplw r29, r0
    blt lbl_fn_8049B7CC_00000078
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8049B880(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stmw r26, 0x28(r1)
    addi r30, r3, 0x5c
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r3, r30
    addi r31, r1, 0x10
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    bl strlen
    mr r29, r3
    mr r3, r31
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r30
    add r7, r30, r29
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r31
    addi r3, r1, 0x1c
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049B880_00000190
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8049B880_00000190:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8049B880_000001A4
    addi r3, r1, 0x1d
    b lbl_fn_8049B880_000001A8
lbl_fn_8049B880_000001A4:
    lwz r3, 0x24(r1)
lbl_fn_8049B880_000001A8:
    bl fn_800DC6B4
    cmplw r27, r3
    beq lbl_fn_8049B880_000001CC
    lis r3, lbl_80756B84@ha
    addi r3, r3, lbl_80756B84@l
    addi r3, r3, 0xe4
    bl fn_800DC6B4
    cmplw r27, r3
    bne lbl_fn_8049B880_000001D8
lbl_fn_8049B880_000001CC:
    lwz r0, 0x340(r26)
    rlwimi r0, r28, 28, 3, 3
    stw r0, 0x340(r26)
lbl_fn_8049B880_000001D8:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049B880_000001EC
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8049B880_000001EC:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8049B980(void)
{
    nofralloc
    lwz r0, 0x340(r3)
    li r5, 0x0
    extlwi r0, r0, 2, 2
    srawi. r0, r0, 31
    beq lbl_fn_8049B980_00000230
    lfs f1, lbl_8088710C
    lfs f0, 0x4(r4)
    lfs f2, 0x58(r3)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8049B980_00000230
    li r5, 0x1
lbl_fn_8049B980_00000230:
    mr r3, r5
    blr
}

asm void fn_8049B9B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8049B9B8_00000308
    lis r5, lbl_80756CD8@ha
    li r3, 0x450
    addi r5, r5, lbl_80756CD8@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8049B9B8_00000300
    mr r4, r28
    mr r5, r29
    bl fn_804963A4
    lis r4, lbl_80790630@ha
    addi r3, r31, 0x50
    addi r4, r4, lbl_80790630@l
    stw r4, 0x0(r31)
    li r4, 0x9
    li r5, 0x20
    bl fn_80096E94
    li r4, 0x0
    stw r4, 0x420(r31)
    li r0, 0x1
    mr r3, r30
    stw r4, 0x428(r31)
    stw r4, 0x42c(r31)
    stw r0, 0x448(r31)
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x50
    li r5, 0x0
    bl fn_8008AD4C
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8049B9B8_00000300:
    mr r3, r31
    b lbl_fn_8049B9B8_0000030C
lbl_fn_8049B9B8_00000308:
    li r3, 0x0
lbl_fn_8049B9B8_0000030C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049BAAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_804963A4
    lis r4, lbl_80790630@ha
    addi r3, r30, 0x50
    addi r4, r4, lbl_80790630@l
    stw r4, 0x0(r30)
    li r4, 0x9
    li r5, 0x20
    bl fn_80096E94
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x420(r30)
    mr r3, r31
    stw r4, 0x428(r30)
    stw r4, 0x42c(r30)
    stw r0, 0x448(r30)
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r30, 0x50
    li r5, 0x0
    bl fn_8008AD4C
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049BB4C(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    bl _savegpr_25
    lfs f7, lbl_80887110
    mr r28, r4
    lfs f0, lbl_80887114
    mr r27, r3
    stfs f7, 0x50(r1)
    mr r3, r28
    stfs f7, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f7, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_8005B9CC
    lis r26, lbl_80756CD8@ha
    lfs f30, lbl_8088711C
    lfs f31, lbl_80887118
    mr r25, r3
    addi r29, r1, 0x70
    addi r30, r26, lbl_80756CD8@l
    li r31, 0x1
lbl_fn_8049BB4C_00000448:
    mr r3, r25
    addi r4, r26, lbl_80756CD8@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8049BB4C_00000814
    mr r3, r25
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000480
    lwz r0, 0x54(r27)
    ori r0, r0, 0x80
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000480:
    mr r3, r25
    addi r4, r30, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_000004A4
    lwz r0, 0x54(r27)
    ori r0, r0, 0x2
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_000004A4:
    mr r3, r25
    addi r4, r30, 0x12
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_000004C8
    lwz r0, 0x54(r27)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_000004C8:
    mr r3, r25
    addi r4, r30, 0x1c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_000004EC
    lwz r0, 0x54(r27)
    ori r0, r0, 0x8
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_000004EC:
    mr r3, r25
    addi r4, r30, 0x2c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000510
    lwz r0, 0x54(r27)
    oris r0, r0, 0x20
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000510:
    mr r3, r25
    addi r4, r30, 0x39
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000534
    lwz r0, 0x54(r27)
    oris r0, r0, 0x10
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000534:
    mr r3, r25
    addi r4, r30, 0x43
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000554
    stw r31, 0x420(r27)
    stfs f31, 0x424(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000554:
    mr r3, r25
    addi r4, r30, 0x51
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000580
    stw r31, 0x420(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x424(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000580:
    mr r3, r25
    addi r4, r30, 0x61
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_000005A0
    stw r31, 0x428(r27)
    stfs f30, 0xe8(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_000005A0:
    mr r3, r25
    addi r4, r30, 0x6f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_000005C4
    lwz r0, 0x54(r27)
    ori r0, r0, 0x400
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_000005C4:
    mr r3, r25
    addi r4, r30, 0x77
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_000005E8
    lwz r0, 0x54(r27)
    ori r0, r0, 0x800
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_000005E8:
    mr r3, r25
    addi r4, r30, 0x7f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_0000060C
    lwz r0, 0x54(r27)
    ori r0, r0, 0x1400
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_0000060C:
    mr r3, r25
    addi r4, r30, 0x8d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000630
    lwz r0, 0x54(r27)
    ori r0, r0, 0x1800
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000630:
    mr r3, r25
    addi r4, r30, 0x9b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000654
    lwz r0, 0x54(r27)
    ori r0, r0, 0x8000
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000654:
    mr r3, r25
    addi r4, r30, 0xac
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000678
    lwz r0, 0x54(r27)
    oris r0, r0, 0x100
    stw r0, 0x54(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000678:
    mr r3, r25
    addi r4, r30, 0xc1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_000006C0
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x50(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x54(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x58(r1)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_000006C0:
    mr r3, r25
    addi r4, r30, 0xca
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000708
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x44(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x48(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4c(r1)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000708:
    mr r3, r25
    addi r4, r30, 0xd3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000750
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x38(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3c(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x40(r1)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000750:
    mr r3, r25
    addi r4, r30, 0xd9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000778
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xe8(r27)
    b lbl_fn_8049BB4C_00000814
lbl_fn_8049BB4C_00000778:
    mr r3, r25
    addi r4, r30, 0xe2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_0000083C
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x70(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x74(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x78(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x7c(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x80(r1)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f0, f1
    lfs f2, 0x78(r1)
    stfs f1, 0x84(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x438(r27)
    frsp f2, f0
    psq_st f1, 0x430(r27), 0, 0
    psq_l f1, 0xc(r29), 0, 0
    stw r31, 0x42c(r27)
    psq_st f1, 0x43c(r27), 0, 0
    stfs f2, 0x444(r27)
lbl_fn_8049BB4C_00000814:
    mr r3, r28
    bl fn_8005B9CC
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_8049BB4C_0000083C
    mr r4, r25
    addi r3, r26, lbl_80756CD8@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049BB4C_00000448
lbl_fn_8049BB4C_0000083C:
    lwz r0, 0x420(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8049BB4C_00000878
    addi r3, r27, 0x50
    bl fn_8008B130
    lis r4, lbl_80756CD8@ha
    addi r4, r4, lbl_80756CD8@l
    addi r4, r4, 0xe6
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8049BB4C_00000878
    lfs f0, lbl_80887118
    li r0, 0x1
    stw r0, 0x420(r27)
    stfs f0, 0x424(r27)
lbl_fn_8049BB4C_00000878:
    lfs f1, 0x50(r1)
    addi r3, r1, 0x268
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_805F90D0
    lfs f7, lbl_80887110
    addi r26, r1, 0x268
    lfs f1, 0x4c(r1)
    addi r28, r1, 0x118
    lfs f0, lbl_80887114
    fcmpu cr0, f7, f1
    stfs f7, 0x144(r1)
    stfs f7, 0x13c(r1)
    stfs f7, 0x138(r1)
    stfs f7, 0x134(r1)
    stfs f7, 0x130(r1)
    stfs f7, 0x128(r1)
    stfs f7, 0x124(r1)
    stfs f7, 0x120(r1)
    stfs f7, 0x11c(r1)
    stfs f0, 0x140(r1)
    stfs f0, 0x12c(r1)
    stfs f0, 0x118(r1)
    beq lbl_fn_8049BB4C_00000928
    addi r3, r1, 0x208
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x208
    addi r5, r1, 0x238
    bl fn_805F89F0
    addi r3, r1, 0x238
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8049BB4C_00000928:
    lfs f0, lbl_80887110
    lfs f1, 0x48(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8049BB4C_00000988
    addi r3, r1, 0x1a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1a8
    addi r5, r1, 0x1d8
    bl fn_805F89F0
    addi r3, r1, 0x1d8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8049BB4C_00000988:
    lfs f0, lbl_80887110
    lfs f1, 0x44(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8049BB4C_000009E8
    addi r3, r1, 0x148
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x148
    addi r5, r1, 0x178
    bl fn_805F89F0
    addi r3, r1, 0x178
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8049BB4C_000009E8:
    mr r3, r26
    mr r4, r28
    addi r5, r1, 0xe8
    bl fn_805F89F0
    addi r4, r1, 0xe8
    addi r3, r1, 0xb8
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lfs f1, 0x38(r1)
    psq_st f2, 0x8(r26), 0, 0
    lfs f2, 0x3c(r1)
    psq_st f3, 0x10(r26), 0, 0
    lfs f3, 0x40(r1)
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    bl fn_805F9160
    addi r3, r1, 0x268
    addi r4, r1, 0xb8
    addi r5, r1, 0x88
    bl fn_805F89F0
    addi r4, r1, 0x88
    addi r5, r1, 0x268
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x14
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x58(r27), 0, 0
    psq_st f2, 0x60(r27), 0, 0
    psq_st f3, 0x68(r27), 0, 0
    psq_st f4, 0x70(r27), 0, 0
    psq_st f5, 0x78(r27), 0, 0
    psq_st f6, 0x80(r27), 0, 0
    lfs f8, 0x290(r1)
    lfs f7, 0x280(r1)
    lfs f0, 0x270(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x28c(r1)
    fmr f30, f1
    lfs f7, 0x27c(r1)
    addi r3, r1, 0x20
    lfs f0, 0x26c(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x288(r1)
    fmr f31, f1
    lfs f7, 0x278(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x268(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_8049BB4C_00000B28
    b lbl_fn_8049BB4C_00000B2C
lbl_fn_8049BB4C_00000B28:
    fmr f7, f0
lbl_fn_8049BB4C_00000B2C:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8049BB4C_00000B3C
    b lbl_fn_8049BB4C_00000B54
lbl_fn_8049BB4C_00000B3C:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8049BB4C_00000B50
    b lbl_fn_8049BB4C_00000B54
lbl_fn_8049BB4C_00000B50:
    fmr f8, f0
lbl_fn_8049BB4C_00000B54:
    stfs f8, 0xa4(r27)
    li r0, 0x0
    addi r3, r27, 0x50
    addi r4, r1, 0x5c
    stw r0, 0x5c(r1)
    bl fn_8000D430
    addic. r3, r1, 0x5c
    beq lbl_fn_8049BB4C_00000BA8
    lwz r4, 0x5c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8049BB4C_00000BA8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8049BB4C_00000BA0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049BB4C_00000BA0:
    li r0, 0x0
    stw r0, 0x5c(r1)
lbl_fn_8049BB4C_00000BA8:
    addi r11, r1, 0x2c0
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    bl _restgpr_25
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_8049C350(void)
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
    beq lbl_fn_8049C350_00000C24
    li r4, -0x1
    addi r3, r3, 0x50
    bl fn_800971D4
    cmpwi r30, 0x0
    beq lbl_fn_8049C350_00000C14
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_8049C350_00000C14:
    cmpwi r31, 0x0
    ble lbl_fn_8049C350_00000C24
    mr r3, r30
    bl dtor_80084684
lbl_fn_8049C350_00000C24:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049C3C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r3, 0x50
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8049C3C0_00000CBC
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r31, 0x50
    addi r4, r1, 0x8
    bl fn_8000D430
    addic. r3, r1, 0x8
    beq lbl_fn_8049C3C0_00000CB4
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8049C3C0_00000CB4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8049C3C0_00000CAC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049C3C0_00000CAC:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8049C3C0_00000CB4:
    li r3, 0x1
    b lbl_fn_8049C3C0_00000CC0
lbl_fn_8049C3C0_00000CBC:
    li r3, 0x0
lbl_fn_8049C3C0_00000CC0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8049C454(void)
{
    nofralloc
    blr
}

asm void fn_8049C458(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    mr r31, r3
    lwz r0, 0x42c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049C458_00000D38
    lwz r5, lbl_8087EFB4
    addi r4, r1, 0x38
    lfs f0, lbl_80887114
    addi r3, r3, 0x430
    psq_l f1, 0x118(r5), 0, 0
    lfs f2, 0x120(r5)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, 0x44(r1)
    bl fn_800709F4
    cmpwi r3, 0x0
    beq lbl_fn_8049C458_00000EE4
lbl_fn_8049C458_00000D38:
    lwz r0, 0x428(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8049C458_00000EC0
    lwz r4, lbl_8087EFB4
    addi r5, r1, 0x60
    psq_l f2, 0x60(r31), 0, 0
    addi r3, r1, 0x14
    psq_l f4, 0x70(r31), 0, 0
    psq_l f6, 0x80(r31), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lfs f8, 0x118(r4)
    stfs f8, 0x6c(r1)
    psq_l f1, 0x58(r31), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    lfs f0, 0x120(r4)
    stfs f0, 0x8c(r1)
    lfs f7, 0x11c(r4)
    psq_l f3, 0x68(r31), 0, 0
    psq_l f5, 0x78(r31), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f7, 0x7c(r1)
    psq_l f6, 0x28(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    lfs f8, 0x88(r1)
    psq_st f2, 0x60(r31), 0, 0
    lfs f7, 0x78(r1)
    psq_st f3, 0x68(r31), 0, 0
    lfs f0, 0x68(r1)
    psq_st f4, 0x70(r31), 0, 0
    psq_st f5, 0x78(r31), 0, 0
    psq_st f6, 0x80(r31), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x84(r1)
    fmr f30, f1
    lfs f7, 0x74(r1)
    addi r3, r1, 0x20
    lfs f0, 0x64(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x80(r1)
    fmr f31, f1
    lfs f7, 0x70(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x60(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_8049C458_00000E40
    b lbl_fn_8049C458_00000E44
lbl_fn_8049C458_00000E40:
    fmr f7, f0
lbl_fn_8049C458_00000E44:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_8049C458_00000E54
    b lbl_fn_8049C458_00000E6C
lbl_fn_8049C458_00000E54:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_8049C458_00000E68
    b lbl_fn_8049C458_00000E6C
lbl_fn_8049C458_00000E68:
    fmr f8, f0
lbl_fn_8049C458_00000E6C:
    stfs f8, 0xa4(r31)
    li r0, 0x0
    addi r3, r31, 0x50
    addi r4, r1, 0x48
    stw r0, 0x48(r1)
    bl fn_8000D430
    addic. r3, r1, 0x48
    beq lbl_fn_8049C458_00000EC0
    lwz r4, 0x48(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8049C458_00000EC0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8049C458_00000EB8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049C458_00000EB8:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_8049C458_00000EC0:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049C458_00000EE4
    lwz r0, 0x448(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8049C458_00000EE4
    addi r3, r31, 0x50
    bl fn_8008CD60
lbl_fn_8049C458_00000EE4:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8049C688(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r8, 0x1bc(r4)
    cmpwi r8, 0x0
    beq lbl_fn_8049C688_00000FA4
    lfs f2, 0x18(r8)
    addi r4, r1, 0x50
    psq_l f1, 0x10(r8), 0, 0
    addi r3, r1, 0x44
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r5, 0x0
    addi r6, r1, 0x38
    addi r7, r1, 0x5c
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x1c(r8), 0, 0
    stfs f2, 0x4c(r1)
    lfs f2, 0x24(r8)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x64(r1)
    beq lbl_fn_8049C688_00000FF0
    mr r3, r5
    bl fn_80045A24
    stw r4, 0x14(r1)
    stw r3, 0x10(r1)
    stw r3, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x250(r31)
    stw r4, 0x254(r31)
    b lbl_fn_8049C688_00000FF0
lbl_fn_8049C688_00000FA4:
    lfs f3, lbl_80887118
    addi r5, r1, 0x20
    lfs f0, lbl_80887120
    addi r4, r1, 0x2c
    fmr f2, f3
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f2, 0x8(r3)
    fmr f2, f0
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f3, 0x28(r1)
    stfs f0, 0x34(r1)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    b lbl_fn_8049C688_00001014
lbl_fn_8049C688_00000FF0:
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    psq_l f1, 0xc(r3), 0, 0
    lfs f2, 0x64(r1)
    stfs f2, 0x14(r30)
    psq_st f1, 0xc(r30), 0, 0
lbl_fn_8049C688_00001014:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8049C7AC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r3, r3, 0x50
    bl fn_8008B130
    li r0, 0x0
    stw r0, 0x10(r1)
    mr r31, r3
    addi r30, r1, 0x10
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    bl strlen
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    mr r6, r31
    add r7, r31, r29
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r30
    addi r3, r1, 0x1c
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049C7AC_000010C0
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8049C7AC_000010C0:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8049C7AC_000010D4
    addi r3, r1, 0x1d
    b lbl_fn_8049C7AC_000010D8
lbl_fn_8049C7AC_000010D4:
    lwz r3, 0x24(r1)
lbl_fn_8049C7AC_000010D8:
    bl fn_800DC6B4
    cmplw r27, r3
    beq lbl_fn_8049C7AC_000010FC
    lis r3, lbl_80756CD8@ha
    addi r3, r3, lbl_80756CD8@l
    addi r3, r3, 0xed
    bl fn_800DC6B4
    cmplw r27, r3
    bne lbl_fn_8049C7AC_00001100
lbl_fn_8049C7AC_000010FC:
    stw r28, 0x448(r26)
lbl_fn_8049C7AC_00001100:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049C7AC_00001114
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8049C7AC_00001114:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8049C8A8(void)
{
    nofralloc
    lwz r0, 0x420(r3)
    li r5, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8049C8A8_00001154
    lfs f1, lbl_80887124
    lfs f0, 0x4(r4)
    lfs f2, 0x424(r3)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8049C8A8_00001154
    li r5, 0x1
lbl_fn_8049C8A8_00001154:
    mr r3, r5
    blr
}

asm void fn_8049C8DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8049C8DC_000011C0
    lis r5, lbl_80756E38@ha
    li r3, 0x478
    addi r5, r5, lbl_80756E38@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049C8DC_000011C4
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8049C960
    b lbl_fn_8049C8DC_000011C4
lbl_fn_8049C8DC_000011C0:
    li r3, 0x0
lbl_fn_8049C8DC_000011C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049C960(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    mr r27, r3
    mr r28, r6
    bl fn_8049BAAC
    lfs f7, lbl_80887128
    lis r3, lbl_80790688@ha
    lfs f6, lbl_8088712C
    lis r31, lbl_80756E38@ha
    lfs f5, lbl_80887130
    addi r3, r3, lbl_80790688@l
    lfs f4, lbl_80887134
    addi r29, r28, 0x10
    lfs f3, lbl_80887138
    addi r30, r31, lbl_80756E38@l
    lfs f2, lbl_8088713C
    lfs f1, lbl_80887140
    lfs f0, lbl_80887144
    stw r3, 0x0(r27)
    lfs f31, lbl_80887148
    stfs f7, 0x44c(r27)
    stfs f6, 0x450(r27)
    stfs f5, 0x454(r27)
    stfs f4, 0x458(r27)
    stfs f3, 0x45c(r27)
    stfs f2, 0x460(r27)
    stfs f1, 0x464(r27)
    stfs f0, 0x468(r27)
lbl_fn_8049C960_00001264:
    mr r3, r29
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049C960_000012D0
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC12C
    cmplwi r3, 0x1
    bgt lbl_fn_8049C960_000012D0
    mulli r29, r3, 0xc
    mr r3, r28
    bl fn_8005B9CC
    bl fn_800DC288
    add r4, r27, r29
    mr r3, r28
    stfs f1, 0x454(r4)
    bl fn_8005B9CC
    bl fn_800DC288
    add r4, r27, r29
    mr r3, r28
    stfs f1, 0x458(r4)
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f0, f31, f1
    add r3, r27, r29
    stfs f0, 0x45c(r3)
lbl_fn_8049C960_000012D0:
    mr r3, r28
    bl fn_8005B9CC
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8049C960_000012F8
    mr r4, r29
    addi r3, r31, lbl_80756E38@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049C960_00001264
lbl_fn_8049C960_000012F8:
    psq_l f31, 0x28(r1), 0, 0
    mr r3, r27
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8049CA9C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_25
    lis r31, lbl_80756E38@ha
    mr r25, r4
    addi r30, r3, 0x454
    addi r29, r3, 0x458
    addi r28, r3, 0x45c
    addi r31, r31, lbl_80756E38@l
    li r27, 0x0
lbl_fn_8049CA9C_0000134C:
    mr r5, r27
    addi r3, r1, 0x8
    addi r4, r31, 0x6
    crclr 6
    bl sprintf
    mr r3, r25
    addi r4, r1, 0x8
    bl fn_8008937C
    lfs f1, lbl_8088714C
    mr r26, r3
    lfs f2, lbl_80887150
    mr r5, r30
    lfs f3, lbl_80887154
    addi r4, r31, 0xf
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088714C
    mr r3, r26
    lfs f2, lbl_80887150
    mr r5, r29
    lfs f3, lbl_80887154
    addi r4, r31, 0x19
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088714C
    mr r3, r26
    lfs f2, lbl_80887150
    mr r5, r28
    lfs f3, lbl_80887154
    addi r4, r31, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0x2
    addi r28, r28, 0xc
    addi r30, r30, 0xc
    blt lbl_fn_8049CA9C_0000134C
    addi r11, r1, 0x130
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8049CB88(void)
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
    beq lbl_fn_8049CB88_00001444
    li r4, 0x0
    bl fn_8049C350
    cmpwi r31, 0x0
    ble lbl_fn_8049CB88_00001444
    mr r3, r30
    bl dtor_80084684
lbl_fn_8049CB88_00001444:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049CBE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x50
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8049CBE0_000014C0
    lis r31, lbl_80756E38@ha
    addi r3, r30, 0x50
    addi r31, r31, lbl_80756E38@l
    li r5, 0x0
    addi r4, r31, 0x26
    bl fn_80092814
    stw r3, 0x46c(r30)
    addi r3, r30, 0x50
    addi r4, r31, 0x2d
    li r5, 0x0
    bl fn_80092814
    stw r3, 0x470(r30)
    li r3, 0x1
    b lbl_fn_8049CBE0_000014C4
lbl_fn_8049CBE0_000014C0:
    li r3, 0x0
lbl_fn_8049CBE0_000014C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049CC5C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_26
    mr r26, r3
    addi r29, r1, 0x8
    mr r28, r26
    li r30, 0x0
lbl_fn_8049CC5C_00001508:
    lfs f8, 0x44c(r26)
    lfs f7, 0x458(r28)
    lfs f0, 0x45c(r28)
    fmadds f1, f8, f7, f0
    bl fn_8068AD58
    frsp f7, f1
    lfs f0, 0x454(r28)
    addi r30, r30, 0x1
    addi r28, r28, 0xc
    cmpwi r30, 0x2
    fmuls f0, f0, f7
    stfs f0, 0x0(r29)
    addi r29, r29, 0x4
    blt lbl_fn_8049CC5C_00001508
    lfs f31, lbl_80887128
    addi r30, r1, 0x8
    addi r29, r1, 0x20
    li r27, 0x0
    li r31, 0x0
lbl_fn_8049CC5C_00001554:
    add r3, r26, r31
    lwz r0, 0x46c(r3)
    cmpwi r0, 0x0
    bge lbl_fn_8049CC5C_0000156C
    li r28, 0x0
    b lbl_fn_8049CC5C_00001578
lbl_fn_8049CC5C_0000156C:
    mulli r0, r0, 0x30
    lwz r3, 0x8c(r26)
    add r28, r3, r0
lbl_fn_8049CC5C_00001578:
    fmr f1, f31
    lfsx f2, r30, r31
    stfs f31, 0x10(r1)
    addi r3, r1, 0x20
    fmr f3, f1
    stfs f2, 0x14(r1)
    stfs f31, 0x18(r1)
    bl fn_805F90D0
    psq_l f2, 0x8(r29), 0, 0
    mr r4, r28
    psq_l f3, 0x10(r29), 0, 0
    mr r5, r28
    psq_l f4, 0x18(r29), 0, 0
    addi r3, r26, 0x58
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    bl fn_805F89F0
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x2
    blt lbl_fn_8049CC5C_00001554
    lfs f7, 0x44c(r26)
    mr r3, r26
    lfs f0, lbl_80887158
    fadds f0, f7, f0
    stfs f0, 0x44c(r26)
    bl fn_8049C454
    addi r11, r1, 0x70
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8049CDA0(void)
{
    nofralloc
    la r4, lbl_8087F560
    la r3, lbl_8087F564
    la r0, lbl_8087F568
    stw r4, lbl_8087F56C
    stw r3, lbl_8087F570
    stw r0, lbl_8087F574
    blr
}

asm void fn_8049CDBC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8049CDBC_000016A0
    lis r5, lbl_80756E80@ha
    li r3, 0xb8
    addi r5, r5, lbl_80756E80@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049CDBC_000016A4
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8049CE40
    b lbl_fn_8049CDBC_000016A4
lbl_fn_8049CDBC_000016A0:
    li r3, 0x0
lbl_fn_8049CDBC_000016A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049CE40(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_21
    mr r21, r3
    mr r22, r6
    bl fn_804963A4
    lis r3, lbl_807906E8@ha
    li r0, 0x0
    addi r3, r3, lbl_807906E8@l
    stw r3, 0x0(r21)
    addi r3, r21, 0x54
    stw r0, 0x50(r21)
    bl fn_800B1B28
    lis r31, lbl_80756E80@ha
    addi r23, r22, 0x10
    addi r26, r1, 0x14
    addi r27, r1, 0x40
    addi r24, r1, 0x8
    addi r25, r1, 0x4c
    addi r28, r1, 0x20
    addi r29, r31, lbl_80756E80@l
    li r30, 0x1
lbl_fn_8049CE40_00001728:
    mr r3, r23
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_00001744
    stw r30, 0x50(r21)
    b lbl_fn_8049CE40_000019D8
lbl_fn_8049CE40_00001744:
    mr r3, r23
    addi r4, r29, 0x4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_000017BC
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x30(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x34(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x38(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    frsp f0, f1
    lfs f5, 0x30(r1)
    lfs f4, 0x34(r1)
    lfs f3, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f5, 0x74(r21)
    stfs f4, 0x78(r21)
    stfs f3, 0x7c(r21)
    stfs f0, 0x80(r21)
    b lbl_fn_8049CE40_000019D8
lbl_fn_8049CE40_000017BC:
    mr r3, r23
    addi r4, r29, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_00001818
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x20(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x24(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f0, f1
    stfs f1, 0x28(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x68(r21), 0, 0
    frsp f2, f0
    stfs f2, 0x70(r21)
    b lbl_fn_8049CE40_000019D8
lbl_fn_8049CE40_00001818:
    mr r3, r23
    addi r4, r29, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_0000186C
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC12C
    lwz r0, lbl_8087E0D0
    lwz r4, lbl_8087E0D0
    cmpw r3, r0
    bge lbl_fn_8049CE40_0000184C
    b lbl_fn_8049CE40_00001864
lbl_fn_8049CE40_0000184C:
    lwz r0, lbl_8087E0D4
    mr r4, r3
    lwz r5, lbl_8087E0D4
    cmpw r3, r0
    ble lbl_fn_8049CE40_00001864
    mr r4, r5
lbl_fn_8049CE40_00001864:
    stw r4, 0x9c(r21)
    b lbl_fn_8049CE40_000019D8
lbl_fn_8049CE40_0000186C:
    mr r3, r23
    addi r4, r29, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_00001894
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xa8(r21)
    b lbl_fn_8049CE40_000019D8
lbl_fn_8049CE40_00001894:
    mr r3, r23
    addi r4, r29, 0x19
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_000018D0
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f31, 0xa0(r21)
    stfs f1, 0xa4(r21)
    b lbl_fn_8049CE40_000019D8
lbl_fn_8049CE40_000018D0:
    mr r3, r23
    addi r4, r29, 0x1f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_000018F8
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xac(r21)
    b lbl_fn_8049CE40_000019D8
lbl_fn_8049CE40_000018F8:
    mr r3, r23
    addi r4, r29, 0x26
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_00001920
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xb0(r21)
    b lbl_fn_8049CE40_000019D8
lbl_fn_8049CE40_00001920:
    mr r3, r23
    addi r4, r29, 0x2e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_000019D8
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x14(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x18(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1c(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r1)
    mr r3, r22
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f0, f1
    lfs f2, 0x1c(r1)
    stfs f1, 0x10(r1)
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x48(r1)
    frsp f2, f0
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x54(r1)
    lfs f2, 0x48(r1)
    psq_st f1, 0x84(r21), 0, 0
    psq_l f1, 0xc(r27), 0, 0
    stfs f2, 0x8c(r21)
    lfs f2, 0x54(r1)
    psq_st f1, 0x90(r21), 0, 0
    stfs f2, 0x98(r21)
lbl_fn_8049CE40_000019D8:
    mr r3, r22
    bl fn_8005B9CC
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8049CE40_00001A00
    mr r4, r23
    addi r3, r31, lbl_80756E80@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049CE40_00001728
lbl_fn_8049CE40_00001A00:
    psq_l f31, 0x98(r1), 0, 0
    mr r3, r21
    lfd f31, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_21
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
