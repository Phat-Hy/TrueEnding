#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80056E40(void);
extern void fn_80058A1C(void);
extern void fn_80058B78(void);
extern void fn_80058BBC(void);
extern void fn_8005B9CC(void);
extern void fn_80062C8C(void);
extern void fn_8006B0C8(void);
extern void fn_8006FE08(void);
extern void fn_800709F4(void);
extern void fn_80070C98(void);
extern void fn_80070D04(void);
extern void fn_80077160(void);
extern void fn_800774D4(void);
extern void fn_80077534(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_8009E690(void);
extern void fn_800C18BC(void);
extern void fn_800C2D88(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DC288(void);
extern void fn_80232B7C(void);
extern void fn_802375C4(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_8023A02C(void);
extern void fn_8023A108(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_803EE374(void);
extern void fn_803FFF40(void);
extern void fn_804003E0(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804714A4(void);
extern void fn_804714B0(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473EFC(void);
extern void fn_80473F18(void);
extern void fn_80473F50(void);
extern void fn_80491EA0(void);
extern void fn_804985E4(void);
extern void fn_8049A018(void);
extern void fn_8049B9B8(void);
extern void fn_8049C8DC(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80683B54(void);
extern void fn_80684600(void);
extern void fn_80695A50(void);
extern void fn_80695D84(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807903D0[];
extern u8 lbl_807569DC[];
extern u8 lbl_807569FC[];
extern u8 lbl_80756A10[];
extern u8 lbl_80756A68[];
extern u8 lbl_80756A70[];
extern u8 lbl_80756A8C[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807902E8[];
extern u8 lbl_80790320[];
extern u8 lbl_80790378[];
extern u8 lbl_807903F0[];
extern u8 lbl_80790560[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80887068;
extern u32 lbl_8088706C;
extern u32 lbl_80887074;
extern u32 lbl_808870C0;
extern u32 lbl_808870C4;
extern u32 lbl_808870C8;
extern u32 lbl_808870D0;
extern u32 lbl_808870D4;
extern u32 lbl_808870D8;
extern u32 lbl_808870DC;
extern u32 lbl_808870E0;
extern u32 lbl_808870E4;
extern u32 lbl_808870E8;
extern u32 lbl_808870EC;

/* Function declarations */
void fn_80495EA8(void);
void fn_80495F78(void);
void fn_804961B4(void);
void fn_804962B0(void);
void fn_8049638C(void);
void fn_80496394(void);
void fn_80496398(void);
void fn_8049639C(void);
void fn_804963A4(void);
void fn_804963F8(void);
void fn_80496414(void);
void fn_8049641C(void);
void fn_80496420(void);
void fn_80496500(void);
void fn_80496550(void);
void fn_8049655C(void);
void fn_804965EC(void);
void fn_80496670(void);
void fn_80496774(void);
void fn_80496800(void);
void fn_8049682C(void);
void fn_80496A24(void);
void fn_80496A28(void);
void fn_80496B3C(void);
void fn_80496C3C(void);
void fn_80496CC0(void);
void fn_80496E00(void);
void fn_80496E94(void);
void fn_80496EDC(void);
void fn_80496EE4(void);
void fn_80496EE8(void);
void fn_80496F6C(void);
void fn_8049707C(void);
void fn_804970D4(void);
void fn_80497238(void);
void fn_80497248(void);
void fn_80497374(void);
void fn_80497864(void);
void fn_80497874(void);

asm void fn_80495EA8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    b lbl_fn_80495EA8_000000A8
lbl_fn_80495EA8_00000028:
    lwz r3, 0x58(r29)
    lwz r6, lbl_8087EFA8
    lwzx r4, r3, r31
    lfs f0, 0x304(r6)
    lwz r5, 0xbc(r4)
    lfs f1, 0x300(r6)
    cmpwi r5, 0x0
    stfs f1, 0x10(r1)
    stfs f0, 0xc(r1)
    beq lbl_fn_80495EA8_00000068
    lwz r0, 0xc0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80495EA8_00000060
    b lbl_fn_80495EA8_0000006C
lbl_fn_80495EA8_00000060:
    addi r0, r4, 0xc4
    b lbl_fn_80495EA8_0000006C
lbl_fn_80495EA8_00000068:
    li r0, 0x0
lbl_fn_80495EA8_0000006C:
    cmpwi r0, 0x0
    beq lbl_fn_80495EA8_000000A0
    lwz r3, 0xc0(r4)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_80495EA8_000000A0
    cmpwi r5, 0x0
    beq lbl_fn_80495EA8_00000098
    beq cr1, lbl_fn_80495EA8_00000090
    b lbl_fn_80495EA8_0000009C
lbl_fn_80495EA8_00000090:
    addi r3, r4, 0xc4
    b lbl_fn_80495EA8_0000009C
lbl_fn_80495EA8_00000098:
    li r3, 0x0
lbl_fn_80495EA8_0000009C:
    bl fn_800C18BC
lbl_fn_80495EA8_000000A0:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
lbl_fn_80495EA8_000000A8:
    lwz r0, 0x5c(r29)
    cmplw r30, r0
    blt lbl_fn_80495EA8_00000028
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80495F78(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x30
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    bl _savegpr_23
    lwz r4, lbl_8087F0A8
    mr r28, r3
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80495F78_000002D4
    lfs f28, lbl_80887074
    li r30, 0x0
    lfs f29, lbl_8088706C
    li r27, 0x0
    lfs f30, lbl_808870C0
    lfs f31, lbl_80887068
    b lbl_fn_80495F78_000002C8
lbl_fn_80495F78_00000134:
    lwz r3, 0x58(r28)
    li r29, 0x0
    lwzx r31, r3, r27
    lwz r0, 0x2c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80495F78_00000268
    li r23, 0x0
    b lbl_fn_80495F78_0000025C
lbl_fn_80495F78_00000154:
    lfs f0, 0x58(r31)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_80495F78_0000016C
    li r24, 0xff
    b lbl_fn_80495F78_0000018C
lbl_fn_80495F78_0000016C:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_80495F78_00000180
    li r3, 0x0
    b lbl_fn_80495F78_00000188
lbl_fn_80495F78_00000180:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_80495F78_00000188:
    mr r24, r3
lbl_fn_80495F78_0000018C:
    lfs f0, 0x5c(r31)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_80495F78_000001A4
    li r25, 0xff
    b lbl_fn_80495F78_000001C4
lbl_fn_80495F78_000001A4:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_80495F78_000001B8
    li r3, 0x0
    b lbl_fn_80495F78_000001C0
lbl_fn_80495F78_000001B8:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_80495F78_000001C0:
    mr r25, r3
lbl_fn_80495F78_000001C4:
    lfs f0, 0x60(r31)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_80495F78_000001DC
    li r26, 0xff
    b lbl_fn_80495F78_000001FC
lbl_fn_80495F78_000001DC:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_80495F78_000001F0
    li r3, 0x0
    b lbl_fn_80495F78_000001F8
lbl_fn_80495F78_000001F0:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_80495F78_000001F8:
    mr r26, r3
lbl_fn_80495F78_000001FC:
    lfs f0, 0x64(r31)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_80495F78_00000214
    li r3, 0xff
    b lbl_fn_80495F78_00000230
lbl_fn_80495F78_00000214:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_80495F78_00000228
    li r3, 0x0
    b lbl_fn_80495F78_00000230
lbl_fn_80495F78_00000228:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_80495F78_00000230:
    slwi r4, r3, 24
    slwi r3, r24, 16
    or r4, r4, r3
    lwz r0, 0x28(r31)
    slwi r3, r25, 8
    or r4, r3, r4
    add r3, r0, r23
    or r4, r26, r4
    bl fn_8006FE08
    addi r23, r23, 0x18
    addi r29, r29, 0x1
lbl_fn_80495F78_0000025C:
    lwz r0, 0x2c(r31)
    cmplw r29, r0
    blt lbl_fn_80495F78_00000154
lbl_fn_80495F78_00000268:
    li r23, 0x0
    li r24, 0x0
    b lbl_fn_80495F78_000002AC
lbl_fn_80495F78_00000274:
    lwz r0, 0x34(r31)
    li r4, 0x10
    lwz r3, lbl_8087EEB0
    li r5, -0x1
    add r6, r0, r24
    lfs f4, lbl_8088706C
    lfsx f1, r24, r0
    lfs f2, 0x4(r6)
    lfs f3, 0x8(r6)
    lfs f5, 0xc(r6)
    lfs f6, 0x10(r6)
    bl fn_80062C8C
    addi r24, r24, 0x14
    addi r23, r23, 0x1
lbl_fn_80495F78_000002AC:
    lwz r0, 0x38(r31)
    cmplw r23, r0
    blt lbl_fn_80495F78_00000274
    addi r3, r31, 0x4c
    bl fn_800C2D88
    addi r30, r30, 0x1
    addi r27, r27, 0x4
lbl_fn_80495F78_000002C8:
    lwz r0, 0x5c(r28)
    cmplw r30, r0
    blt lbl_fn_80495F78_00000134
lbl_fn_80495F78_000002D4:
    addi r11, r1, 0x30
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    bl _restgpr_23
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804961B4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    lfs f3, lbl_808870C4
    addi r5, r1, 0x14
    lfs f0, lbl_808870C8
    addi r6, r1, 0x8
    fmr f2, f3
    stfs f3, 0x14(r1)
    mr r24, r3
    mr r25, r4
    stfs f3, 0x18(r1)
    addi r29, r1, 0x20
    stfs f2, 0x8(r3)
    fmr f2, f0
    psq_l f1, 0x0(r5), 0, 0
    li r28, 0x0
    stfs f0, 0x8(r1)
    li r31, 0x0
    stfs f0, 0xc(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f3, 0x1c(r1)
    stfs f0, 0x10(r1)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    b lbl_fn_804961B4_000003E4
lbl_fn_804961B4_00000380:
    lwz r3, 0x58(r25)
    li r26, 0x0
    li r30, 0x0
    lwzx r27, r3, r31
    b lbl_fn_804961B4_000003D0
lbl_fn_804961B4_00000394:
    lwz r0, 0x28(r27)
    mr r5, r24
    addi r3, r1, 0x20
    add r4, r0, r30
    bl fn_80070C98
    psq_l f1, 0x0(r29), 0, 0
    addi r26, r26, 0x1
    lfs f2, 0x28(r1)
    addi r30, r30, 0x18
    stfs f2, 0x8(r24)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0xc(r29), 0, 0
    lfs f2, 0x34(r1)
    stfs f2, 0x14(r24)
    psq_st f1, 0xc(r24), 0, 0
lbl_fn_804961B4_000003D0:
    lwz r0, 0x2c(r27)
    cmplw r26, r0
    blt lbl_fn_804961B4_00000394
    addi r28, r28, 0x1
    addi r31, r31, 0x4
lbl_fn_804961B4_000003E4:
    lwz r0, 0x5c(r25)
    cmplw r28, r0
    blt lbl_fn_804961B4_00000380
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_804962B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    lwz r31, 0x58(r3)
    b lbl_fn_804962B0_000004B4
lbl_fn_804962B0_00000428:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_804962B0_0000045C
lbl_fn_804962B0_00000434:
    lwz r0, 0x28(r3)
    mr r4, r28
    add r3, r0, r30
    bl fn_800709F4
    cmpwi r3, 0x0
    beq lbl_fn_804962B0_00000454
    lwz r3, 0x0(r31)
    b lbl_fn_804962B0_000004D0
lbl_fn_804962B0_00000454:
    addi r30, r30, 0x18
    addi r29, r29, 0x1
lbl_fn_804962B0_0000045C:
    lwz r3, 0x0(r31)
    lwz r0, 0x2c(r3)
    cmplw r29, r0
    blt lbl_fn_804962B0_00000434
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_804962B0_000004A0
lbl_fn_804962B0_00000478:
    lwz r0, 0x34(r3)
    mr r4, r28
    add r3, r0, r30
    bl fn_80070D04
    cmpwi r3, 0x0
    beq lbl_fn_804962B0_00000498
    lwz r3, 0x0(r31)
    b lbl_fn_804962B0_000004D0
lbl_fn_804962B0_00000498:
    addi r30, r30, 0x14
    addi r29, r29, 0x1
lbl_fn_804962B0_000004A0:
    lwz r3, 0x0(r31)
    lwz r0, 0x38(r3)
    cmplw r29, r0
    blt lbl_fn_804962B0_00000478
    addi r31, r31, 0x4
lbl_fn_804962B0_000004B4:
    lwz r0, 0x5c(r27)
    lwz r3, 0x58(r27)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r31, r0
    bne lbl_fn_804962B0_00000428
    li r3, 0x0
lbl_fn_804962B0_000004D0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049638C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80496394(void)
{
    nofralloc
    blr
}

asm void fn_80496398(void)
{
    nofralloc
    blr
}

asm void fn_8049639C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_804963A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D1D3C
    lis r3, lbl_807902E8@ha
    li r0, 0x0
    addi r3, r3, lbl_807902E8@l
    stw r3, 0x0(r30)
    mr r3, r30
    stw r31, 0x48(r30)
    stw r0, 0x4c(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804963F8(void)
{
    nofralloc
    b lbl_fn_804963F8_00000558
lbl_fn_804963F8_00000554:
    mr r3, r0
lbl_fn_804963F8_00000558:
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804963F8_00000554
    stw r4, 0x4c(r3)
    blr
}

asm void fn_80496414(void)
{
    nofralloc
    stw r4, 0x4c(r3)
    blr
}

asm void fn_8049641C(void)
{
    nofralloc
    blr
}

asm void fn_80496420(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r29, r4
    mr r28, r5
    beq lbl_fn_80496420_00000640
    lis r31, lbl_807569DC@ha
    li r3, 0xc8
    addi r5, r31, lbl_807569DC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80496420_00000638
    mr r4, r27
    mr r5, r29
    bl fn_804963A4
    lis r4, lbl_80790320@ha
    addi r3, r30, 0x50
    addi r4, r4, lbl_80790320@l
    stw r4, 0x0(r30)
    bl fn_80058A1C
    mr r3, r28
    bl fn_8005B9CC
    mr r29, r3
    addi r3, r30, 0x50
    mr r4, r29
    bl fn_80058B78
    addi r31, r31, lbl_807569DC@l
    mr r3, r29
    addi r4, r31, 0x1
    bl fn_806827C4
    cmpwi r3, 0x0
    bne lbl_fn_80496420_0000062C
    mr r3, r28
    bl fn_8005B9CC
    addi r4, r31, 0x8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496420_00000638
lbl_fn_80496420_0000062C:
    lwz r0, 0x58(r30)
    ori r0, r0, 0x20
    stw r0, 0x58(r30)
lbl_fn_80496420_00000638:
    mr r3, r30
    b lbl_fn_80496420_00000644
lbl_fn_80496420_00000640:
    li r3, 0x0
lbl_fn_80496420_00000644:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80496500(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x50
    bl fn_80058BBC
    cmpwi r3, 0x0
    beq lbl_fn_80496500_00000684
    li r3, 0x0
    b lbl_fn_80496500_00000694
lbl_fn_80496500_00000684:
    lwz r0, 0x58(r31)
    li r3, 0x1
    ori r0, r0, 0x1
    stw r0, 0x58(r31)
lbl_fn_80496500_00000694:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80496550(void)
{
    nofralloc
    lwz r0, 0x58(r3)
    extrwi r3, r0, 1, 26
    blr
}

asm void fn_8049655C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8049655C_00000724
    addic. r31, r3, 0x50
    beq lbl_fn_8049655C_00000700
    addic. r3, r31, 0x3c
    beq lbl_fn_8049655C_000006F4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8049655C_000006F4:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8049655C_00000700:
    cmpwi r29, 0x0
    beq lbl_fn_8049655C_00000714
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_8049655C_00000714:
    cmpwi r30, 0x0
    ble lbl_fn_8049655C_00000724
    mr r3, r29
    bl dtor_80084684
lbl_fn_8049655C_00000724:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804965EC(void)
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
    beq lbl_fn_804965EC_000007A8
    lis r5, lbl_807569FC@ha
    li r3, 0x70
    addi r5, r5, lbl_807569FC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804965EC_000007AC
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80496670
    b lbl_fn_804965EC_000007AC
lbl_fn_804965EC_000007A8:
    li r3, 0x0
lbl_fn_804965EC_000007AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80496670(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r6
    bl fn_804963A4
    lis r4, lbl_80790378@ha
    addi r3, r27, 0x50
    addi r4, r4, lbl_80790378@l
    stw r4, 0x0(r27)
    bl fn_802377B8
    li r30, 0x0
    stw r30, 0x5c(r27)
    mr r3, r28
    stw r30, 0x60(r27)
    stw r30, 0x64(r27)
    stw r30, 0x68(r27)
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r27, 0x50
    bl fn_8023780C
    mr r3, r28
    bl fn_8005B9CC
    lis r31, lbl_807569FC@ha
    mr r29, r3
    addi r31, r31, lbl_807569FC@l
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496670_0000084C
    stw r30, 0x60(r27)
    b lbl_fn_80496670_000008B4
lbl_fn_80496670_0000084C:
    mr r3, r29
    addi r4, r31, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496670_00000898
    li r31, 0x1
    stw r31, 0x60(r27)
    mr r3, r28
    bl fn_8005B9CC
    bl fn_80684600
    cmpwi r3, 0x1
    bge lbl_fn_80496670_00000880
    b lbl_fn_80496670_00000890
lbl_fn_80496670_00000880:
    mr r3, r28
    bl fn_8005B9CC
    bl fn_80684600
    mr r31, r3
lbl_fn_80496670_00000890:
    stw r31, 0x64(r27)
    b lbl_fn_80496670_000008B4
lbl_fn_80496670_00000898:
    mr r3, r29
    addi r4, r31, 0xd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496670_000008B4
    li r0, 0x2
    stw r0, 0x60(r27)
lbl_fn_80496670_000008B4:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80496774(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80496774_00000938
    addic. r31, r3, 0x50
    beq lbl_fn_80496774_00000914
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80496774_00000914
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80496774_00000914:
    cmpwi r29, 0x0
    beq lbl_fn_80496774_00000928
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80496774_00000928:
    cmpwi r30, 0x0
    ble lbl_fn_80496774_00000938
    mr r3, r29
    bl dtor_80084684
lbl_fn_80496774_00000938:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80496800(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x50
    stw r0, 0x14(r1)
    bl fn_80237874
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049682C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049682C_000009BC
    cmpwi r0, 0x1
    beq lbl_fn_8049682C_00000A50
    cmpwi r0, 0x2
    beq lbl_fn_8049682C_00000ADC
    b lbl_fn_8049682C_00000B64
lbl_fn_8049682C_000009BC:
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8049682C_00000B64
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r31, 0x1
    lfs f1, lbl_808870D4
    li r0, -0x1
    stw r31, 0xb8(r3)
    addi r4, r30, 0x50
    lfs f0, lbl_808870D0
    addi r7, r1, 0x60
    lwz r5, 0x5c(r30)
    addi r8, r1, 0x6c
    addi r9, r1, 0x78
    li r6, 0x0
    stfs f0, 0x6c(r1)
    li r10, -0x1
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    stw r31, 0x68(r30)
    b lbl_fn_8049682C_00000B64
lbl_fn_8049682C_00000A50:
    bl fn_80680CF8
    lwz r4, 0x64(r30)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf. r0, r0, r3
    bne lbl_fn_8049682C_00000B64
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r5, 0x5c(r30)
    li r3, -0x1
    lfs f0, lbl_808870D0
    li r0, 0x1
    lfs f1, lbl_808870D4
    addi r4, r30, 0x50
    stfs f0, 0x44(r1)
    addi r7, r1, 0x38
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    stfs f0, 0x48(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8049682C_00000B64
lbl_fn_8049682C_00000ADC:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8049682C_00000B64
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r5, 0x5c(r30)
    li r3, -0x1
    lfs f0, lbl_808870D0
    li r0, 0x1
    lfs f1, lbl_808870D4
    addi r4, r30, 0x50
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x20(r1)
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
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8049682C_00000B64:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80496A24(void)
{
    nofralloc
    blr
}

asm void fn_80496A28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80756A10@ha
    addi r4, r31, lbl_80756A10@l
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496A28_00000BB4
    li r3, 0x0
    b lbl_fn_80496A28_00000C7C
lbl_fn_80496A28_00000BB4:
    addi r31, r31, lbl_80756A10@l
    mr r3, r30
    addi r4, r31, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496A28_00000BD4
    li r3, 0x2
    b lbl_fn_80496A28_00000C7C
lbl_fn_80496A28_00000BD4:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496A28_00000BF0
    li r3, 0x3
    b lbl_fn_80496A28_00000C7C
lbl_fn_80496A28_00000BF0:
    mr r3, r30
    addi r4, r31, 0x15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496A28_00000C0C
    li r3, 0x4
    b lbl_fn_80496A28_00000C7C
lbl_fn_80496A28_00000C0C:
    mr r3, r30
    addi r4, r31, 0x1e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496A28_00000C28
    li r3, 0x5
    b lbl_fn_80496A28_00000C7C
lbl_fn_80496A28_00000C28:
    mr r3, r30
    addi r4, r31, 0x2a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496A28_00000C44
    li r3, 0x6
    b lbl_fn_80496A28_00000C7C
lbl_fn_80496A28_00000C44:
    mr r3, r30
    addi r4, r31, 0x33
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80496A28_00000C60
    li r3, 0x7
    b lbl_fn_80496A28_00000C7C
lbl_fn_80496A28_00000C60:
    mr r3, r30
    addi r4, r31, 0x3d
    bl fn_80682428
    cmpwi r3, 0x0
    li r3, 0x1
    beq lbl_fn_80496A28_00000C7C
    li r3, -0x1
lbl_fn_80496A28_00000C7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80496B3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    bl fn_80496A28
    cmplwi r3, 0x7
    bgt lbl_fn_80496B3C_00000D78
    lis r4, jumptable_807903D0@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_807903D0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl fn_8049B9B8
    b lbl_fn_80496B3C_00000D7C
    mr r3, r30
    mr r5, r31
    li r4, 0x2
    bl fn_80496420
    b lbl_fn_80496B3C_00000D7C
    mr r3, r30
    mr r5, r31
    li r4, 0x3
    bl fn_804965EC
    b lbl_fn_80496B3C_00000D7C
    mr r3, r30
    mr r5, r31
    li r4, 0x4
    bl fn_8049A018
    b lbl_fn_80496B3C_00000D7C
    mr r3, r30
    mr r5, r31
    li r4, 0x5
    bl fn_80496EE8
    b lbl_fn_80496B3C_00000D7C
    mr r3, r30
    mr r5, r31
    li r4, 0x6
    bl fn_80491EA0
    b lbl_fn_80496B3C_00000D7C
    mr r3, r30
    mr r5, r31
    li r4, 0x7
    bl fn_80496C3C
    b lbl_fn_80496B3C_00000D7C
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl fn_8049C8DC
    b lbl_fn_80496B3C_00000D7C
lbl_fn_80496B3C_00000D78:
    li r3, 0x0
lbl_fn_80496B3C_00000D7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80496C3C(void)
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
    beq lbl_fn_80496C3C_00000DF8
    lis r5, lbl_80756A68@ha
    li r3, 0x58
    addi r5, r5, lbl_80756A68@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80496C3C_00000DFC
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80496CC0
    b lbl_fn_80496C3C_00000DFC
lbl_fn_80496C3C_00000DF8:
    li r3, 0x0
lbl_fn_80496C3C_00000DFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80496CC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r6
    bl fn_804963A4
    lis r4, lbl_807903F0@ha
    mr r3, r27
    addi r4, r4, lbl_807903F0@l
    stw r4, 0x0(r26)
    bl fn_8005B9CC
    bl fn_80684600
    lis r5, lbl_80756A68@ha
    mr r29, r3
    addi r5, r5, lbl_80756A68@l
    li r3, 0x144
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80496CC0_00000E9C
    lfs f0, lbl_808870D8
    mr r5, r29
    stfs f0, 0x8(r1)
    addi r6, r1, 0x8
    lfs f1, lbl_808870DC
    li r4, 0x1
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_80077160
lbl_fn_80496CC0_00000E9C:
    stw r3, 0x50(r26)
    li r28, 0x0
    li r31, 0x0
    b lbl_fn_80496CC0_00000F34
lbl_fn_80496CC0_00000EAC:
    lwz r4, 0x50(r26)
    mr r3, r27
    lwz r0, 0x1c(r4)
    add r30, r0, r31
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x0(r30)
    mr r3, r27
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    mr r3, r27
    stfs f0, 0x8(r30)
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    mr r3, r27
    stfs f0, 0x4(r30)
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    mr r3, r27
    stfs f0, 0xc(r30)
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    mr r3, r27
    stfs f0, 0x10(r30)
    bl fn_8005B9CC
    bl fn_80683B54
    frsp f0, f1
    addi r28, r28, 0x1
    addi r31, r31, 0x1c
    stfs f0, 0x14(r30)
lbl_fn_80496CC0_00000F34:
    cmpw r28, r29
    blt lbl_fn_80496CC0_00000EAC
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80496E00(void)
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
    beq lbl_fn_80496E00_00000FD0
    lwz r0, 0x50(r3)
    lis r4, lbl_807903F0@ha
    addi r4, r4, lbl_807903F0@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80496E00_00000FAC
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80496E00_00000FAC:
    cmpwi r30, 0x0
    beq lbl_fn_80496E00_00000FC0
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80496E00_00000FC0:
    cmpwi r31, 0x0
    ble lbl_fn_80496E00_00000FD0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80496E00_00000FD0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80496E94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x50(r3)
    bl fn_800774D4
    cmpwi r3, 0x0
    beq lbl_fn_80496E94_00001018
    li r3, 0x0
    b lbl_fn_80496E94_00001020
lbl_fn_80496E94_00001018:
    mr r3, r31
    bl fn_800D3FA4
lbl_fn_80496E94_00001020:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80496EDC(void)
{
    nofralloc
    lwz r3, 0x50(r3)
    b fn_80077534
}

asm void fn_80496EE4(void)
{
    nofralloc
    blr
}

asm void fn_80496EE8(void)
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
    beq lbl_fn_80496EE8_000010A4
    lis r5, lbl_80756A8C@ha
    li r3, 0x138
    addi r5, r5, lbl_80756A8C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80496EE8_000010A8
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80496F6C
    b lbl_fn_80496EE8_000010A8
lbl_fn_80496EE8_000010A4:
    li r3, 0x0
lbl_fn_80496EE8_000010A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80496F6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r6
    bl fn_804963A4
    lis r3, lbl_80790560@ha
    li r31, 0x0
    addi r3, r3, lbl_80790560@l
    addi r30, r27, 0x58
    stw r3, 0x0(r27)
    mr r3, r30
    stw r31, 0x50(r27)
    stw r31, 0x54(r27)
    bl fn_80473E74
    lis r29, lbl_80756A8C@ha
    lis r3, lbl_8078FBB0@ha
    addi r29, r29, lbl_80756A8C@l
    addi r0, r27, 0x70
    cmplw r29, r0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    stw r31, 0x60(r27)
    stw r31, 0x64(r27)
    stw r31, 0x68(r27)
    stw r31, 0x6c(r27)
    beq lbl_fn_80496F6C_00001154
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r27, 0x70
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80496F6C_00001154:
    addi r3, r27, 0xf0
    bl fn_800D5738
    lfs f0, lbl_808870E0
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x120(r27)
    mr r3, r28
    stb r0, 0x121(r27)
    stfs f0, 0x124(r27)
    stfs f0, 0x128(r27)
    stfs f0, 0x12c(r27)
    stfs f0, 0x130(r27)
    bl fn_8005B9CC
    lwz r12, 0x58(r27)
    mr r4, r3
    addi r3, r27, 0x58
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r28
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049707C(void)
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
    beq lbl_fn_8049707C_00001210
    li r4, -0x1
    bl fn_802375C4
    cmpwi r31, 0x0
    ble lbl_fn_8049707C_00001210
    mr r3, r30
    bl dtor_80084684
lbl_fn_8049707C_00001210:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804970D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    beq lbl_fn_804970D4_00001378
    lis r4, lbl_80790560@ha
    li r28, 0x0
    addi r4, r4, lbl_80790560@l
    stw r4, 0x0(r3)
    li r29, 0x0
    b lbl_fn_804970D4_000012DC
lbl_fn_804970D4_00001264:
    lwz r3, 0x6c(r26)
    lwzx r31, r3, r29
    cmpwi r31, 0x0
    beq lbl_fn_804970D4_000012D4
    addic. r30, r31, 0x128
    beq lbl_fn_804970D4_00001294
    mr r3, r30
    bl fn_8023781C
    addic. r3, r30, 0x4
    beq lbl_fn_804970D4_00001294
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804970D4_00001294:
    addic. r0, r31, 0x98
    beq lbl_fn_804970D4_000012B0
    lwz r3, 0x98(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804970D4_000012B0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804970D4_000012B0:
    addic. r3, r31, 0x88
    beq lbl_fn_804970D4_000012C0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804970D4_000012C0:
    mr r3, r31
    li r4, -0x1
    bl fn_8009E690
    mr r3, r31
    bl dtor_80084684
lbl_fn_804970D4_000012D4:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_804970D4_000012DC:
    lwz r0, 0x68(r26)
    cmplw r28, r0
    blt lbl_fn_804970D4_00001264
    addi r3, r26, 0xf0
    li r4, -0x1
    bl fn_800D5808
    addic. r0, r26, 0x68
    beq lbl_fn_804970D4_00001318
    lwz r3, 0x6c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_804970D4_0000130C
    bl fn_80084C24
lbl_fn_804970D4_0000130C:
    li r0, 0x0
    stw r0, 0x6c(r26)
    stw r0, 0x68(r26)
lbl_fn_804970D4_00001318:
    addic. r0, r26, 0x60
    beq lbl_fn_804970D4_00001344
    lwz r3, 0x64(r26)
    cmpwi r3, 0x0
    beq lbl_fn_804970D4_00001338
    lis r4, fn_8049707C@ha
    addi r4, r4, fn_8049707C@l
    bl fn_80695A50
lbl_fn_804970D4_00001338:
    li r0, 0x0
    stw r0, 0x64(r26)
    stw r0, 0x60(r26)
lbl_fn_804970D4_00001344:
    addic. r3, r26, 0x58
    beq lbl_fn_804970D4_00001354
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804970D4_00001354:
    cmpwi r26, 0x0
    beq lbl_fn_804970D4_00001368
    mr r3, r26
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_804970D4_00001368:
    cmpwi r27, 0x0
    ble lbl_fn_804970D4_00001378
    mr r3, r26
    bl dtor_80084684
lbl_fn_804970D4_00001378:
    mr r3, r26
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80497238(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_80497248(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    mr r27, r4
    mr r26, r3
    mr r3, r27
    bl fn_8005B9CC
    lis r31, lbl_80756A8C@ha
    lfs f31, lbl_808870E4
    mr r28, r3
    li r30, 0x1
    addi r29, r31, lbl_80756A8C@l
lbl_fn_80497248_000013E0:
    mr r3, r28
    addi r4, r31, lbl_80756A8C@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80497248_00001484
    mr r3, r28
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80497248_0000143C
    mr r3, r27
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x124(r26)
    mr r3, r27
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x128(r26)
    mr r3, r27
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x12c(r26)
    b lbl_fn_80497248_00001484
lbl_fn_80497248_0000143C:
    mr r3, r28
    addi r4, r29, 0xa
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80497248_0000145C
    stb r30, 0x121(r26)
    stfs f31, 0x130(r26)
    b lbl_fn_80497248_00001484
lbl_fn_80497248_0000145C:
    mr r3, r28
    addi r4, r29, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80497248_000014AC
    stb r30, 0x121(r26)
    mr r3, r27
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x130(r26)
lbl_fn_80497248_00001484:
    mr r3, r27
    bl fn_8005B9CC
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80497248_000014AC
    mr r4, r28
    addi r3, r31, lbl_80756A8C@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80497248_000013E0
lbl_fn_80497248_000014AC:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80497374(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r27, 0x5c(r1)
    mr r30, r3
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80497374_00001500
    cmpwi r0, 0x1
    beq lbl_fn_80497374_0000183C
    cmpwi r0, 0x3
    beq lbl_fn_80497374_00001864
    b lbl_fn_80497374_000018FC
lbl_fn_80497374_00001500:
    addi r3, r3, 0x58
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80497374_00001518
    li r3, 0x0
    b lbl_fn_80497374_000019A8
lbl_fn_80497374_00001518:
    addi r3, r1, 0x20
    bl fn_804714A4
    li r0, 0x0
    stw r0, 0x3c(r1)
    addi r3, r30, 0x58
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x58
    bl fn_80470580
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x20
    addi r6, r1, 0x3c
    li r7, 0x0
    bl fn_804714B0
    addic. r3, r1, 0x3c
    beq lbl_fn_80497374_00001590
    lwz r4, 0x3c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80497374_00001590
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80497374_00001588
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80497374_00001588:
    li r0, 0x0
    stw r0, 0x3c(r1)
lbl_fn_80497374_00001590:
    addi r3, r30, 0x58
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_80497374_00001834
    addi r3, r30, 0x58
    bl fn_80470580
    lis r28, lbl_80756A8C@ha
    mr r31, r3
    addi r28, r28, lbl_80756A8C@l
    addi r3, r30, 0x70
    bl strlen
    lbzx r0, r28, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80497374_0000161C
    add r3, r30, r3
    addi r4, r30, 0x70
    addi r3, r3, 0x70
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_80497374_00001618
lbl_fn_80497374_000015EC:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r28)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80497374_0000160C
    li r0, 0x0
    b lbl_fn_80497374_0000161C
lbl_fn_80497374_0000160C:
    addi r4, r4, 0x1
    addi r28, r28, 0x1
    bdnz lbl_fn_80497374_000015EC
lbl_fn_80497374_00001618:
    li r0, 0x1
lbl_fn_80497374_0000161C:
    cmpwi r0, 0x0
    beq lbl_fn_80497374_000017B0
    lis r4, lbl_80756A8C@ha
    lwz r3, 0x20(r31)
    addi r4, r4, lbl_80756A8C@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80497374_000017B0
    addi r3, r30, 0x58
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x30(r1)
    mr r28, r3
    addi r29, r1, 0x30
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    bl strlen
    mr r27, r3
    mr r3, r29
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r29
    stb r0, 0xc(r1)
    mr r6, r28
    add r7, r28, r27
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r29
    addi r3, r1, 0x24
    bl fn_8006B0C8
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80497374_000016B4
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_80497374_000016B4:
    lwz r0, 0x24(r1)
    lis r3, lbl_80756A8C@ha
    addi r3, r3, lbl_80756A8C@l
    srwi. r0, r0, 31
    addi r29, r3, 0x28
    bne lbl_fn_80497374_000016D8
    lbz r0, 0x24(r1)
    clrlwi r27, r0, 25
    b lbl_fn_80497374_000016DC
lbl_fn_80497374_000016D8:
    lwz r27, 0x28(r1)
lbl_fn_80497374_000016DC:
    lbz r0, 0x10(r1)
    mr r3, r29
    stb r0, 0x14(r1)
    bl strlen
    mr r0, r3
    mr r4, r27
    mr r6, r29
    addi r3, r1, 0x24
    add r7, r29, r0
    addi r8, r1, 0x14
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x24(r1)
    lwz r31, 0x20(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80497374_00001728
    lbz r0, 0x24(r1)
    clrlwi r27, r0, 25
    b lbl_fn_80497374_0000172C
lbl_fn_80497374_00001728:
    lwz r27, 0x28(r1)
lbl_fn_80497374_0000172C:
    lbz r0, 0x18(r1)
    mr r3, r31
    stb r0, 0x1c(r1)
    bl strlen
    mr r0, r3
    mr r4, r27
    mr r6, r31
    addi r3, r1, 0x24
    add r7, r31, r0
    addi r8, r1, 0x1c
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80497374_00001770
    addi r27, r1, 0x25
    b lbl_fn_80497374_00001774
lbl_fn_80497374_00001770:
    lwz r27, 0x2c(r1)
lbl_fn_80497374_00001774:
    addi r0, r30, 0x70
    cmplw r27, r0
    beq lbl_fn_80497374_0000179C
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r30, 0x70
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80497374_0000179C:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80497374_000017B0
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_80497374_000017B0:
    lis r31, lbl_80756A8C@ha
    addi r3, r30, 0x70
    addi r31, r31, lbl_80756A8C@l
    bl strlen
    lbzx r0, r31, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80497374_00001820
    add r3, r30, r3
    addi r4, r30, 0x70
    addi r3, r3, 0x70
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_80497374_0000181C
lbl_fn_80497374_000017F0:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r31)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80497374_00001810
    li r0, 0x0
    b lbl_fn_80497374_00001820
lbl_fn_80497374_00001810:
    addi r4, r4, 0x1
    addi r31, r31, 0x1
    bdnz lbl_fn_80497374_000017F0
lbl_fn_80497374_0000181C:
    li r0, 0x1
lbl_fn_80497374_00001820:
    cmpwi r0, 0x0
    bne lbl_fn_80497374_00001834
    addi r3, r30, 0xf0
    addi r4, r30, 0x70
    bl fn_800D5908
lbl_fn_80497374_00001834:
    li r0, 0x1
    stw r0, 0x50(r30)
lbl_fn_80497374_0000183C:
    addi r3, r30, 0xf0
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_80497374_00001854
    li r3, 0x0
    b lbl_fn_80497374_000019A8
lbl_fn_80497374_00001854:
    mr r3, r30
    bl fn_804985E4
    li r0, 0x3
    stw r0, 0x50(r30)
lbl_fn_80497374_00001864:
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_80497374_00001894
lbl_fn_80497374_00001870:
    lwz r0, 0x64(r30)
    add r3, r0, r27
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_80497374_0000188C
    li r3, 0x0
    b lbl_fn_80497374_000019A8
lbl_fn_80497374_0000188C:
    addi r27, r27, 0xa0
    addi r28, r28, 0x1
lbl_fn_80497374_00001894:
    lwz r0, 0x60(r30)
    cmplw r28, r0
    blt lbl_fn_80497374_00001870
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_80497374_000018D0
lbl_fn_80497374_000018AC:
    lwz r3, 0x6c(r30)
    lwzx r3, r3, r27
    bl fn_803FFF40
    cmpwi r3, 0x0
    bne lbl_fn_80497374_000018C8
    li r3, 0x0
    b lbl_fn_80497374_000019A8
lbl_fn_80497374_000018C8:
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_fn_80497374_000018D0:
    lwz r0, 0x68(r30)
    cmplw r28, r0
    blt lbl_fn_80497374_000018AC
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_80497374_000018F4
    li r3, 0x0
    b lbl_fn_80497374_000019A8
lbl_fn_80497374_000018F4:
    li r0, 0x4
    stw r0, 0x50(r30)
lbl_fn_80497374_000018FC:
    lwz r0, 0x50(r30)
    cmpwi r0, 0x4
    bne lbl_fn_80497374_000019A4
    lwz r0, 0x54(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80497374_00001974
    li r0, 0x1
    stw r0, 0x54(r30)
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_80497374_00001968
lbl_fn_80497374_00001928:
    lwz r0, 0x64(r30)
    add r3, r0, r27
    lwz r29, 0x90(r3)
    cmpwi r29, 0x0
    ble lbl_fn_80497374_00001950
    bl fn_80680CF8
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r4, r0, r3
    b lbl_fn_80497374_00001954
lbl_fn_80497374_00001950:
    li r4, 0x0
lbl_fn_80497374_00001954:
    lwz r0, 0x64(r30)
    addi r28, r28, 0x1
    add r3, r0, r27
    addi r27, r27, 0xa0
    stw r4, 0x98(r3)
lbl_fn_80497374_00001968:
    lwz r0, 0x60(r30)
    cmplw r28, r0
    blt lbl_fn_80497374_00001928
lbl_fn_80497374_00001974:
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_80497374_0000199C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80497374_0000199C
    lwz r3, lbl_8087F4A0
    mr r4, r30
    bl fn_803EE374
lbl_fn_80497374_0000199C:
    li r3, 0x1
    b lbl_fn_80497374_000019A8
lbl_fn_80497374_000019A4:
    li r3, 0x0
lbl_fn_80497374_000019A8:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80497864(void)
{
    nofralloc
    mulli r0, r4, 0xa0
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_80497874(void)
{
    nofralloc
    stwu r1, -0x5e0(r1)
    mflr r0
    stw r0, 0x5e4(r1)
    addi r11, r1, 0x580
    stfd f31, 0x5d0(r1)
    psq_st f31, 0x5d8(r1), 0, 0
    stfd f30, 0x5c0(r1)
    psq_st f30, 0x5c8(r1), 0, 0
    stfd f29, 0x5b0(r1)
    psq_st f29, 0x5b8(r1), 0, 0
    stfd f28, 0x5a0(r1)
    psq_st f28, 0x5a8(r1), 0, 0
    stfd f27, 0x590(r1)
    psq_st f27, 0x598(r1), 0, 0
    stfd f26, 0x580(r1)
    psq_st f26, 0x588(r1), 0, 0
    bl _savegpr_14
    lbz r0, 0x120(r3)
    mr r15, r3
    cmpwi r0, 0x0
    beq lbl_fn_80497874_00002464
    lwz r0, 0x54(r3)
    lwz r17, lbl_8087F3C0
    cmpwi r0, 0x1
    bne lbl_fn_80497874_00001EC4
    lis r3, lbl_80756A70@ha
    li r14, 0x0
    lis r4, lbl_80756A8C@ha
    lfs f31, lbl_808870E0
    lfs f30, lbl_808870E8
    mr r20, r14
    lfd f29, lbl_80756A70@l(r3)
    mr r19, r14
    lfs f28, lbl_808870EC
    mr r18, r14
    addi r26, r1, 0x3a8
    addi r28, r1, 0x378
    addi r23, r1, 0x4c8
    addi r25, r1, 0x408
    addi r24, r1, 0x468
    addi r27, r1, 0x4f8
    addi r21, r4, lbl_80756A8C@l
    li r16, 0x0
    li r22, 0x1
    lis r31, 0x4178
    b lbl_fn_80497874_00001EAC
lbl_fn_80497874_00001A84:
    lwz r0, 0x64(r15)
    add r30, r0, r16
    lwz r0, 0x88(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80497874_00001EA4
    lfs f1, 0x2c(r30)
    addi r3, r1, 0x378
    lfs f2, 0x30(r30)
    lfs f3, 0x34(r30)
    bl fn_805F90D0
    psq_l f2, 0x8(r28), 0, 0
    addi r29, r30, 0x48
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    stfs f31, 0x4f4(r1)
    stfs f31, 0x4ec(r1)
    stfs f31, 0x4e8(r1)
    stfs f31, 0x4e4(r1)
    stfs f31, 0x4e0(r1)
    stfs f31, 0x4d8(r1)
    stfs f31, 0x4d4(r1)
    stfs f31, 0x4d0(r1)
    stfs f31, 0x4cc(r1)
    stfs f30, 0x4f0(r1)
    stfs f30, 0x4dc(r1)
    stfs f30, 0x4c8(r1)
    lfs f1, 0x40(r30)
    fcmpu cr0, f31, f1
    beq lbl_fn_80497874_00001B68
    addi r3, r1, 0x3d8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x3d8
    addi r5, r1, 0x3a8
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80497874_00001B68:
    lfs f1, 0x3c(r30)
    fcmpu cr0, f31, f1
    beq lbl_fn_80497874_00001BC0
    addi r3, r1, 0x438
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x438
    addi r5, r1, 0x408
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80497874_00001BC0:
    lfs f1, 0x38(r30)
    fcmpu cr0, f31, f1
    beq lbl_fn_80497874_00001C18
    addi r3, r1, 0x498
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x498
    addi r5, r1, 0x468
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80497874_00001C18:
    mr r3, r29
    mr r4, r23
    addi r5, r1, 0x4f8
    bl fn_805F89F0
    psq_l f2, 0x8(r27), 0, 0
    addi r30, r21, 0x33
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    stw r22, 0xb8(r17)
    lwz r0, 0x64(r15)
    add r29, r0, r16
    addi r29, r29, 0xc
    mr r3, r29
    bl strlen
    lbzx r0, r30, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80497874_00001CCC
    add r3, r29, r3
    subf r0, r29, r3
    mtctr r0
    cmplw r29, r3
    beq lbl_fn_80497874_00001CC8
lbl_fn_80497874_00001C9C:
    lbz r3, 0x0(r29)
    lbz r0, 0x0(r30)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80497874_00001CBC
    li r0, 0x0
    b lbl_fn_80497874_00001CCC
lbl_fn_80497874_00001CBC:
    addi r29, r29, 0x1
    addi r30, r30, 0x1
    bdnz lbl_fn_80497874_00001C9C
lbl_fn_80497874_00001CC8:
    li r0, 0x1
lbl_fn_80497874_00001CCC:
    cmpwi r0, 0x0
    beq lbl_fn_80497874_00001CD8
    stw r22, 0xc4(r17)
lbl_fn_80497874_00001CD8:
    lwz r0, 0x64(r15)
    li r4, 0x0
    add r3, r0, r16
    bl fn_80232B7C
    lwz r0, 0x64(r15)
    add r29, r0, r16
    lfs f26, 0x94(r29)
    fneg f27, f26
    bl fn_80680CF8
    addi r0, r31, 0x749f
    lwz r4, 0x64(r15)
    mulhw r5, r0, r3
    fsubs f7, f26, f27
    lis r0, 0x4330
    stw r0, 0x528(r1)
    add r4, r4, r16
    stw r20, 0x8(r1)
    li r0, -0x1
    stw r0, 0xc(r1)
    srawi r5, r5, 8
    addi r10, r29, 0x78
    srwi r0, r5, 31
    stw r22, 0x10(r1)
    add r0, r5, r0
    addi r7, r4, 0x48
    mulli r0, r0, 0x3e9
    lfs f0, 0x44(r4)
    li r5, -0x1
    li r6, 0x5
    subf r0, r0, r3
    mr r3, r17
    xoris r0, r0, 0x8000
    stw r0, 0x52c(r1)
    li r8, 0x0
    li r9, 0x0
    lfd f8, 0x528(r1)
    fsubs f8, f8, f29
    fdivs f8, f8, f28
    fmadds f7, f7, f8, f27
    fadds f1, f0, f7
    bl fn_8023A680
    lwz r0, 0x64(r15)
    add r4, r0, r16
    lwz r0, 0x9c(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80497874_00001DA4
    mr r3, r17
    li r5, 0x0
    li r6, 0x8
    bl fn_8023A02C
lbl_fn_80497874_00001DA4:
    lwz r0, 0x64(r15)
    mr r3, r17
    li r5, 0x0
    li r6, 0x40
    add r4, r0, r16
    bl fn_8023A02C
    lwz r4, 0x64(r15)
    add r3, r4, r16
    lwz r30, 0x8c(r3)
    cmpwi r30, 0x0
    bgt lbl_fn_80497874_00001DDC
    lwz r0, 0x90(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80497874_00001E24
lbl_fn_80497874_00001DDC:
    add r29, r4, r16
    lwz r0, 0x90(r29)
    cmpwi r0, 0x0
    ble lbl_fn_80497874_00001E0C
    bl fn_80680CF8
    lwz r5, 0x90(r29)
    slwi r4, r5, 1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    subf r0, r5, r0
    add r30, r30, r0
lbl_fn_80497874_00001E0C:
    lwz r0, 0x64(r15)
    mr r3, r17
    mr r6, r30
    li r5, 0x0
    add r4, r0, r16
    bl fn_8023A108
lbl_fn_80497874_00001E24:
    stw r19, 0xb8(r17)
    addi r29, r21, 0x33
    lwz r0, 0x64(r15)
    add r30, r0, r16
    addi r30, r30, 0xc
    mr r3, r30
    bl strlen
    lbzx r0, r29, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80497874_00001E98
    add r3, r30, r3
    subf r0, r30, r3
    mtctr r0
    cmplw r30, r3
    beq lbl_fn_80497874_00001E94
lbl_fn_80497874_00001E68:
    lbz r3, 0x0(r30)
    lbz r0, 0x0(r29)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80497874_00001E88
    li r0, 0x0
    b lbl_fn_80497874_00001E98
lbl_fn_80497874_00001E88:
    addi r30, r30, 0x1
    addi r29, r29, 0x1
    bdnz lbl_fn_80497874_00001E68
lbl_fn_80497874_00001E94:
    li r0, 0x1
lbl_fn_80497874_00001E98:
    cmpwi r0, 0x0
    beq lbl_fn_80497874_00001EA4
    stw r18, 0xc4(r17)
lbl_fn_80497874_00001EA4:
    addi r14, r14, 0x1
    addi r16, r16, 0xa0
lbl_fn_80497874_00001EAC:
    lwz r0, 0x60(r15)
    cmplw r14, r0
    blt lbl_fn_80497874_00001A84
    li r0, 0x2
    stw r0, 0x54(r15)
    b lbl_fn_80497874_00002438
lbl_fn_80497874_00001EC4:
    cmpwi r0, 0x2
    bne lbl_fn_80497874_00002438
    lis r3, lbl_80756A70@ha
    lfs f28, lbl_808870E0
    lfs f29, lbl_808870E8
    addi r29, r1, 0x1f8
    lfd f30, lbl_80756A70@l(r3)
    addi r27, r1, 0x1c8
    lfs f31, lbl_808870EC
    addi r30, r1, 0x318
    addi r14, r1, 0x258
    addi r28, r1, 0x348
    addi r22, r1, 0x48
    addi r20, r1, 0x18
    addi r25, r1, 0x168
    addi r23, r1, 0xa8
    addi r24, r1, 0x108
    addi r21, r1, 0x198
    li r16, 0x0
    li r31, 0x0
    b lbl_fn_80497874_0000242C
lbl_fn_80497874_00001F18:
    mulli r19, r16, 0xa0
    lwz r0, 0x64(r15)
    add r18, r0, r19
    lwz r0, 0x88(r18)
    cmpwi r0, 0x1
    bne lbl_fn_80497874_0000225C
    lwz r3, 0x98(r18)
    cmpwi r3, 0x0
    bgt lbl_fn_80497874_00002254
    lfs f1, 0x2c(r18)
    addi r3, r1, 0x1c8
    lfs f2, 0x30(r18)
    lfs f3, 0x34(r18)
    bl fn_805F90D0
    psq_l f2, 0x8(r27), 0, 0
    addi r26, r18, 0x48
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    stfs f28, 0x344(r1)
    stfs f28, 0x33c(r1)
    stfs f28, 0x338(r1)
    stfs f28, 0x334(r1)
    stfs f28, 0x330(r1)
    stfs f28, 0x328(r1)
    stfs f28, 0x324(r1)
    stfs f28, 0x320(r1)
    stfs f28, 0x31c(r1)
    stfs f29, 0x340(r1)
    stfs f29, 0x32c(r1)
    stfs f29, 0x318(r1)
    lfs f1, 0x40(r18)
    fcmpu cr0, f28, f1
    beq lbl_fn_80497874_0000200C
    addi r3, r1, 0x228
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x228
    addi r5, r1, 0x1f8
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
lbl_fn_80497874_0000200C:
    lfs f1, 0x3c(r18)
    fcmpu cr0, f28, f1
    beq lbl_fn_80497874_00002064
    addi r3, r1, 0x288
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x288
    addi r5, r1, 0x258
    bl fn_805F89F0
    psq_l f1, 0x0(r14), 0, 0
    psq_l f2, 0x8(r14), 0, 0
    psq_l f3, 0x10(r14), 0, 0
    psq_l f4, 0x18(r14), 0, 0
    psq_l f5, 0x20(r14), 0, 0
    psq_l f6, 0x28(r14), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80497874_00002064:
    lfs f1, 0x38(r18)
    fcmpu cr0, f28, f1
    beq lbl_fn_80497874_000020C0
    addi r3, r1, 0x2e8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x2e8
    addi r5, r1, 0x2b8
    bl fn_805F89F0
    addi r3, r1, 0x2b8
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
lbl_fn_80497874_000020C0:
    mr r3, r26
    mr r4, r30
    addi r5, r1, 0x348
    bl fn_805F89F0
    psq_l f2, 0x8(r28), 0, 0
    li r0, 0x1
    psq_l f3, 0x10(r28), 0, 0
    mr r19, r31
    psq_l f4, 0x18(r28), 0, 0
    li r4, 0x0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    stw r0, 0xb8(r17)
    lwz r0, 0x64(r15)
    add r3, r0, r31
    bl fn_80232B7C
    lwz r0, 0x64(r15)
    add r18, r0, r31
    lfs f27, 0x94(r18)
    fneg f26, f27
    bl fn_80680CF8
    lis r4, 0x4178
    fsubs f7, f27, f26
    addi r0, r4, 0x749f
    lwz r4, 0x64(r15)
    mulhw r5, r0, r3
    addi r10, r18, 0x78
    lis r0, 0x4330
    stw r0, 0x528(r1)
    add r4, r4, r31
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    srawi r5, r5, 8
    addi r7, r4, 0x48
    stw r0, 0xc(r1)
    srwi r0, r5, 31
    add r5, r5, r0
    li r6, 0x5
    li r0, 0x1
    stw r0, 0x10(r1)
    mulli r0, r5, 0x3e9
    li r5, -0x1
    lfs f0, 0x44(r4)
    li r8, 0x0
    li r9, 0x0
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x52c(r1)
    mr r3, r17
    lfd f8, 0x528(r1)
    fsubs f8, f8, f30
    fdivs f8, f8, f31
    fmadds f7, f7, f8, f26
    fadds f1, f0, f7
    bl fn_8023A680
    li r0, 0x0
    stw r0, 0xb8(r17)
    lwz r0, 0x64(r15)
    add r4, r0, r31
    lwz r0, 0x9c(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80497874_000021EC
    mr r3, r17
    li r5, 0x0
    li r6, 0x8
    bl fn_8023A02C
lbl_fn_80497874_000021EC:
    lwz r0, 0x64(r15)
    mr r3, r17
    li r5, 0x0
    li r6, 0x40
    add r4, r0, r31
    bl fn_8023A02C
    lwz r0, 0x64(r15)
    add r3, r0, r31
    lwz r0, 0x8c(r3)
    stw r0, 0x98(r3)
    lwz r0, 0x64(r15)
    add r18, r0, r31
    lwz r0, 0x90(r18)
    cmpwi r0, 0x0
    ble lbl_fn_80497874_0000225C
    bl fn_80680CF8
    lwz r6, 0x90(r18)
    lwz r0, 0x98(r18)
    slwi r5, r6, 1
    divw r4, r3, r5
    mullw r4, r4, r5
    subf r3, r4, r3
    subf r3, r6, r3
    add r0, r0, r3
    stw r0, 0x98(r18)
    b lbl_fn_80497874_0000225C
lbl_fn_80497874_00002254:
    subi r0, r3, 0x1
    stw r0, 0x98(r18)
lbl_fn_80497874_0000225C:
    lwz r0, 0x64(r15)
    addi r3, r1, 0x18
    add r19, r0, r19
    lfs f1, 0x2c(r19)
    lfs f2, 0x30(r19)
    lfs f3, 0x34(r19)
    bl fn_805F90D0
    psq_l f2, 0x8(r20), 0, 0
    addi r18, r19, 0x48
    psq_l f3, 0x10(r20), 0, 0
    psq_l f4, 0x18(r20), 0, 0
    psq_l f5, 0x20(r20), 0, 0
    psq_l f6, 0x28(r20), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    stfs f28, 0x194(r1)
    stfs f28, 0x18c(r1)
    stfs f28, 0x188(r1)
    stfs f28, 0x184(r1)
    stfs f28, 0x180(r1)
    stfs f28, 0x178(r1)
    stfs f28, 0x174(r1)
    stfs f28, 0x170(r1)
    stfs f28, 0x16c(r1)
    stfs f29, 0x190(r1)
    stfs f29, 0x17c(r1)
    stfs f29, 0x168(r1)
    lfs f1, 0x40(r19)
    fcmpu cr0, f28, f1
    beq lbl_fn_80497874_00002334
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x78
    addi r5, r1, 0x48
    bl fn_805F89F0
    psq_l f1, 0x0(r22), 0, 0
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_80497874_00002334:
    lfs f1, 0x3c(r19)
    fcmpu cr0, f28, f1
    beq lbl_fn_80497874_0000238C
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_80497874_0000238C:
    lfs f1, 0x38(r19)
    fcmpu cr0, f28, f1
    beq lbl_fn_80497874_000023E4
    addi r3, r1, 0x138
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r25
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
lbl_fn_80497874_000023E4:
    mr r3, r18
    mr r4, r25
    addi r5, r1, 0x198
    bl fn_805F89F0
    psq_l f2, 0x8(r21), 0, 0
    addi r16, r16, 0x1
    psq_l f3, 0x10(r21), 0, 0
    addi r31, r31, 0xa0
    psq_l f4, 0x18(r21), 0, 0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
lbl_fn_80497874_0000242C:
    lwz r0, 0x60(r15)
    cmplw r16, r0
    blt lbl_fn_80497874_00001F18
lbl_fn_80497874_00002438:
    li r16, 0x0
    li r14, 0x0
    b lbl_fn_80497874_00002458
lbl_fn_80497874_00002444:
    lwz r3, 0x6c(r15)
    lwzx r3, r3, r14
    bl fn_804003E0
    addi r14, r14, 0x4
    addi r16, r16, 0x1
lbl_fn_80497874_00002458:
    lwz r0, 0x68(r15)
    cmplw r16, r0
    blt lbl_fn_80497874_00002444
lbl_fn_80497874_00002464:
    addi r11, r1, 0x580
    psq_l f31, 0x5d8(r1), 0, 0
    lfd f31, 0x5d0(r1)
    psq_l f30, 0x5c8(r1), 0, 0
    lfd f30, 0x5c0(r1)
    psq_l f29, 0x5b8(r1), 0, 0
    lfd f29, 0x5b0(r1)
    psq_l f28, 0x5a8(r1), 0, 0
    lfd f28, 0x5a0(r1)
    psq_l f27, 0x598(r1), 0, 0
    lfd f27, 0x590(r1)
    psq_l f26, 0x588(r1), 0, 0
    lfd f26, 0x580(r1)
    bl _restgpr_14
    lwz r0, 0x5e4(r1)
    mtlr r0
    addi r1, r1, 0x5e0
    blr
}
