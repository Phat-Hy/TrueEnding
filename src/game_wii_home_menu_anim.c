#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void fn_800697D8(void);
extern void fn_80084320(void);
extern void fn_8008CD60(void);
extern void fn_800D246C(void);
extern void fn_80101138(void);
extern void fn_8010EE78(void);
extern void fn_8010EFC8(void);
extern void fn_8010F26C(void);
extern void fn_8010F41C(void);
extern void fn_80148B38(void);
extern void fn_80149A30(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_80232B7C(void);
extern void fn_80239C14(void);
extern void fn_80239C20(void);
extern void fn_8023B71C(void);
extern void fn_8023B724(void);
extern void fn_8036554C(void);
extern void fn_8056A9E8(void);
extern void fn_8056CB24(void);
extern void fn_8056D440(void);
extern void fn_8056DAD0(void);
extern void fn_805F68F0(void);
extern void fn_805F69E0(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8075FF7C[];
extern u8 lbl_8075FFB0[];

/* Small data declarations */
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFC0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F420;
extern u32 lbl_8087F428;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9A0;
extern u32 lbl_80888020;
extern u32 lbl_80888028;
extern u32 lbl_8088802C;
extern u32 lbl_80888030;
extern u32 lbl_80888034;
extern u32 lbl_8088804C;

/* Function declarations */
void fn_8056F2FC(void);
void fn_8056F404(void);
void fn_8056F5B8(void);
void fn_8056FC28(void);
void fn_80570258(void);
void fn_805704B0(void);
void fn_805706C4(void);
void fn_80570810(void);
void fn_80570A18(void);
void fn_80570A44(void);
void fn_80570A50(void);
void fn_80570A68(void);
void fn_80570A78(void);
void fn_80570B4C(void);
void fn_80570BD4(void);
void fn_80570C54(void);

asm void fn_8056F2FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r5, r3, 0x4
    stw r0, 0x24(r1)
    srwi r0, r4, 31
    add r4, r0, r4
    stw r31, 0x1c(r1)
    srawi r6, r4, 1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x517c(r5)
    lwz r4, 0x5178(r5)
    subfic r5, r0, 0x1
    cmpw r6, r5
    mr r0, r5
    ble lbl_fn_8056F2FC_00000044
    mr r0, r6
lbl_fn_8056F2FC_00000044:
    cmpwi r0, -0x1
    ble lbl_fn_8056F2FC_00000054
    li r5, -0x1
    b lbl_fn_8056F2FC_00000060
lbl_fn_8056F2FC_00000054:
    cmpw r6, r5
    ble lbl_fn_8056F2FC_00000060
    mr r5, r6
lbl_fn_8056F2FC_00000060:
    add. r5, r4, r5
    bge lbl_fn_8056F2FC_0000006C
    addi r5, r5, 0x2d
lbl_fn_8056F2FC_0000006C:
    addis r4, r3, 0x6
    lwz r0, -0x424c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8056F2FC_00000088
    addis r31, r3, 0x4
    addi r31, r31, 0x3970
    b lbl_fn_8056F2FC_00000094
lbl_fn_8056F2FC_00000088:
    mulli r0, r5, 0x1808
    add r3, r3, r0
    addi r31, r3, 0x8
lbl_fn_8056F2FC_00000094:
    mr r30, r31
    li r29, 0x0
    b lbl_fn_8056F2FC_000000B0
lbl_fn_8056F2FC_000000A0:
    lwz r3, 0x0(r30)
    bl fn_80149A30
    addi r30, r30, 0x8c
    addi r29, r29, 0x1
lbl_fn_8056F2FC_000000B0:
    lbz r0, 0x1554(r31)
    extsb r0, r0
    cmpw r29, r0
    blt lbl_fn_8056F2FC_000000A0
    mr r30, r31
    li r29, 0x0
    b lbl_fn_8056F2FC_000000DC
lbl_fn_8056F2FC_000000CC:
    lwz r3, 0x838(r30)
    bl fn_8008CD60
    addi r30, r30, 0x38
    addi r29, r29, 0x1
lbl_fn_8056F2FC_000000DC:
    lbz r0, 0x1555(r31)
    extsb r0, r0
    cmpw r29, r0
    blt lbl_fn_8056F2FC_000000CC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8056F404(void)
{
    nofralloc
    addis r5, r3, 0x6
    lwz r0, -0x4250(r5)
    cmpwi r0, 0x0
    bnelr
    lwz r5, 0x60(r4)
    subi r0, r5, 0x3
    cmplwi r0, 0x2
    blelr
    cmpwi r5, 0x1
    bne lbl_fn_8056F404_00000134
    blr
lbl_fn_8056F404_00000134:
    li r0, 0x200
    addis r7, r3, 0x5
    li r5, 0x0
    li r9, 0x0
    mtctr r0
lbl_fn_8056F404_00000148:
    lwz r0, 0x2988(r7)
    add r6, r0, r9
    slwi r0, r6, 23
    srwi r6, r6, 31
    subf r0, r6, r0
    rotlwi r0, r0, 9
    add r10, r0, r6
    mulli r6, r10, 0x68
    addis r6, r6, 0x4
    addi r8, r6, 0x5184
    add r8, r3, r8
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    bge lbl_fn_8056F404_000001A4
    addi r6, r10, 0x1
    mr r5, r8
    slwi r0, r6, 23
    srwi r6, r6, 31
    subf r0, r6, r0
    rotlwi r0, r0, 9
    add r0, r0, r6
    stw r0, 0x2988(r7)
    b lbl_fn_8056F404_000001AC
lbl_fn_8056F404_000001A4:
    addi r9, r9, 0x1
    bdnz lbl_fn_8056F404_00000148
lbl_fn_8056F404_000001AC:
    cmpwi r5, 0x0
    beq lbl_fn_8056F404_000002A4
    lwz r0, 0x4(r3)
    addis r6, r3, 0x5
    stw r0, 0x0(r5)
    lwz r0, 0x0(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x8(r5)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r5)
    lwz r0, 0xc(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x14(r5)
    psq_l f1, 0x14(r4), 0, 0
    psq_st f1, 0x18(r5), 0, 0
    lfs f2, 0x1c(r4)
    stfs f2, 0x20(r5)
    psq_l f1, 0x20(r4), 0, 0
    psq_st f1, 0x24(r5), 0, 0
    lfs f2, 0x28(r4)
    stfs f2, 0x2c(r5)
    lfs f0, 0x2c(r4)
    stfs f0, 0x30(r5)
    lwz r0, 0x30(r4)
    stw r0, 0x34(r5)
    lwz r0, 0x34(r4)
    stw r0, 0x38(r5)
    lwz r0, 0x38(r4)
    stw r0, 0x3c(r5)
    lwz r0, 0x3c(r4)
    stw r0, 0x40(r5)
    lwz r0, 0x40(r4)
    stw r0, 0x44(r5)
    lwz r0, 0x44(r4)
    stw r0, 0x48(r5)
    lwz r0, 0x48(r4)
    stw r0, 0x4c(r5)
    lwz r0, 0x4c(r4)
    stw r0, 0x50(r5)
    lwz r0, 0x50(r4)
    stw r0, 0x54(r5)
    lwz r0, 0x54(r4)
    stw r0, 0x58(r5)
    lwz r0, 0x58(r4)
    stw r0, 0x5c(r5)
    lwz r0, 0x5c(r4)
    stw r0, 0x60(r5)
    lwz r0, 0x60(r4)
    stw r0, 0x64(r5)
    lwz r0, 0x2184(r6)
    slwi r0, r0, 2
    add r0, r6, r0
    addic. r4, r0, 0x2188
    beq lbl_fn_8056F404_00000290
    stw r5, 0x0(r4)
lbl_fn_8056F404_00000290:
    addis r4, r3, 0x5
    lwz r3, 0x2184(r4)
    addi r0, r3, 0x1
    stw r0, 0x2184(r4)
    blr
lbl_fn_8056F404_000002A4:
    lis r4, lbl_8075FF7C@ha
    lwz r3, lbl_8087EEB8
    addi r4, r4, lbl_8075FF7C@l
    addi r4, r4, 0x15
    b fn_800697D8
    blr
}

asm void fn_8056F5B8(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x190
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    stfd f28, 0x1c0(r1)
    psq_st f28, 0x1c8(r1), 0, 0
    stfd f27, 0x1b0(r1)
    psq_st f27, 0x1b8(r1), 0, 0
    stfd f26, 0x1a0(r1)
    psq_st f26, 0x1a8(r1), 0, 0
    stfd f25, 0x190(r1)
    psq_st f25, 0x198(r1), 0, 0
    bl _savegpr_23
    addis r5, r3, 0x4
    li r0, 0x0
    stb r0, 0x4ec4(r5)
    mr r26, r3
    mr r25, r4
    addi r3, r1, 0x100
    stb r0, 0x4ec5(r5)
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lfs f1, 0x528(r4)
    lfs f2, 0x52c(r4)
    lfs f3, 0x530(r4)
    bl fn_805F90D0
    addi r6, r1, 0x100
    addi r23, r1, 0x130
    addis r5, r26, 0x4
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    addi r5, r5, 0x5148
    psq_l f3, 0x10(r6), 0, 0
    mr r3, r23
    psq_l f4, 0x18(r6), 0, 0
    mr r4, r23
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    bl fn_805F8CA0
    lwz r4, lbl_8087F8A0
    addis r3, r26, 0x4
    mr r5, r23
    lwz r4, 0x48(r4)
    addi r3, r3, 0x3970
    bl fn_8056CB24
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r23, r3
    b lbl_fn_8056F5B8_0000041C
lbl_fn_8056F5B8_000003C8:
    lwz r4, 0x38(r23)
    rlwinm r0, r4, 0, 29, 29
    cmplwi cr1, r0, 0x4
    beq cr1, lbl_fn_8056F5B8_00000418
    lwz r0, 0x48(r23)
    cmpwi r0, 0x2
    bne lbl_fn_8056F5B8_00000404
    li r3, 0x0
    beq cr1, lbl_fn_8056F5B8_000003F8
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8056F5B8_000003FC
lbl_fn_8056F5B8_000003F8:
    li r3, 0x1
lbl_fn_8056F5B8_000003FC:
    cmpwi r3, 0x0
    bne lbl_fn_8056F5B8_00000418
lbl_fn_8056F5B8_00000404:
    addis r3, r26, 0x4
    mr r4, r23
    addi r5, r1, 0x130
    addi r3, r3, 0x3970
    bl fn_8056CB24
lbl_fn_8056F5B8_00000418:
    lwz r23, 0x14ac(r23)
lbl_fn_8056F5B8_0000041C:
    cmpwi r23, 0x0
    bne lbl_fn_8056F5B8_000003C8
    lwz r3, lbl_8087F408
    lwz r23, 0x48(r3)
    b lbl_fn_8056F5B8_00000484
lbl_fn_8056F5B8_00000430:
    lwz r4, 0x38(r23)
    rlwinm r0, r4, 0, 29, 29
    cmplwi cr1, r0, 0x4
    beq cr1, lbl_fn_8056F5B8_00000480
    lwz r0, 0x48(r23)
    cmpwi r0, 0x2
    bne lbl_fn_8056F5B8_0000046C
    li r3, 0x0
    beq cr1, lbl_fn_8056F5B8_00000460
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8056F5B8_00000464
lbl_fn_8056F5B8_00000460:
    li r3, 0x1
lbl_fn_8056F5B8_00000464:
    cmpwi r3, 0x0
    bne lbl_fn_8056F5B8_00000480
lbl_fn_8056F5B8_0000046C:
    addis r3, r26, 0x4
    mr r4, r23
    addi r5, r1, 0x130
    addi r3, r3, 0x3970
    bl fn_8056CB24
lbl_fn_8056F5B8_00000480:
    lwz r23, 0x14ac(r23)
lbl_fn_8056F5B8_00000484:
    cmpwi r23, 0x0
    bne lbl_fn_8056F5B8_00000430
    cmpwi r25, 0x0
    bne lbl_fn_8056F5B8_000008DC
    addis r4, r26, 0x4
    mr r3, r26
    addi r4, r4, 0x3970
    addi r5, r1, 0x130
    bl fn_8056D440
    addis r31, r26, 0x4
    lfs f31, lbl_80888020
    lfs f29, lbl_80888028
    addi r27, r1, 0x38
    lfs f30, lbl_80888034
    addi r28, r1, 0x2c
    addi r29, r1, 0x50
    addi r30, r1, 0x44
    li r25, 0x0
    li r24, 0x0
    li r23, 0x0
    addi r31, r31, 0x3970
lbl_fn_8056F5B8_000004D8:
    lwz r3, lbl_8087F048
    add r4, r31, r23
    addi r26, r4, 0x1558
    li r0, 0x0
    addis r3, r3, 0x1
    add r3, r3, r24
    subi r4, r3, 0x5ea8
    lfs f2, -0x5ea0(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x8(r26)
    lfs f0, -0x5e90(r3)
    fcmpu cr0, f31, f0
    bne lbl_fn_8056F5B8_0000052C
    lfs f0, -0x5e8c(r3)
    fcmpu cr0, f31, f0
    bne lbl_fn_8056F5B8_0000052C
    lfs f0, -0x5e88(r3)
    fcmpu cr0, f31, f0
    bne lbl_fn_8056F5B8_0000052C
    li r0, 0x1
lbl_fn_8056F5B8_0000052C:
    cmpwi r0, 0x0
    beq lbl_fn_8056F5B8_00000630
    stfs f31, 0x10(r1)
    lwz r4, 0x10(r1)
    stfs f31, 0x20(r1)
    cmpwi r4, 0x0
    stfs f31, 0x24(r1)
    stfs f31, 0x28(r1)
    bne lbl_fn_8056F5B8_00000558
    li r0, 0x0
    b lbl_fn_8056F5B8_00000588
lbl_fn_8056F5B8_00000558:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056F5B8_0000056C
    li r0, 0x0
    b lbl_fn_8056F5B8_00000588
lbl_fn_8056F5B8_0000056C:
    cmpwi r3, 0x1f
    ble lbl_fn_8056F5B8_00000578
    li r3, 0x1f
lbl_fn_8056F5B8_00000578:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056F5B8_00000588:
    lfs f0, 0x24(r1)
    stfs f0, 0xc(r1)
    lwz r4, 0xc(r1)
    sth r0, 0xc(r26)
    cmpwi r4, 0x0
    bne lbl_fn_8056F5B8_000005A8
    li r0, 0x0
    b lbl_fn_8056F5B8_000005D8
lbl_fn_8056F5B8_000005A8:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056F5B8_000005BC
    li r0, 0x0
    b lbl_fn_8056F5B8_000005D8
lbl_fn_8056F5B8_000005BC:
    cmpwi r3, 0x1f
    ble lbl_fn_8056F5B8_000005C8
    li r3, 0x1f
lbl_fn_8056F5B8_000005C8:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056F5B8_000005D8:
    lfs f0, 0x28(r1)
    stfs f0, 0x8(r1)
    lwz r4, 0x8(r1)
    sth r0, 0xe(r26)
    cmpwi r4, 0x0
    bne lbl_fn_8056F5B8_000005F8
    li r0, 0x0
    b lbl_fn_8056F5B8_00000628
lbl_fn_8056F5B8_000005F8:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056F5B8_0000060C
    li r0, 0x0
    b lbl_fn_8056F5B8_00000628
lbl_fn_8056F5B8_0000060C:
    cmpwi r3, 0x1f
    ble lbl_fn_8056F5B8_00000618
    li r3, 0x1f
lbl_fn_8056F5B8_00000618:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056F5B8_00000628:
    sth r0, 0x10(r26)
    b lbl_fn_8056F5B8_000008C8
lbl_fn_8056F5B8_00000630:
    subi r5, r3, 0x5e90
    mr r3, r27
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r27
    lfs f2, 0x8(r5)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r27), 0, 0
    bl fn_805F98D0
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r27), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x34(r1)
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_8056F5B8_00000690
    lfs f0, 0x2c(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8056F5B8_00000684
    lfs f0, lbl_8088802C
    b lbl_fn_8056F5B8_00000688
lbl_fn_8056F5B8_00000684:
    lfs f0, lbl_80888030
lbl_fn_8056F5B8_00000688:
    stfs f0, 0x48(r1)
    b lbl_fn_8056F5B8_000006A4
lbl_fn_8056F5B8_00000690:
    frsp f2, f2
    lfs f1, 0x2c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8056F5B8_000006A4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f0, 0xd8(r1)
    mr r4, r29
    lfs f7, 0xd4(r1)
    mr r5, r29
    lfs f8, 0xd0(r1)
    addi r3, r1, 0x90
    lfs f9, 0xe8(r1)
    lfs f10, 0xe4(r1)
    lfs f11, 0xe0(r1)
    lfs f12, 0xf8(r1)
    lfs f13, 0xf4(r1)
    lfs f28, 0xf0(r1)
    lfs f27, 0xfc(r1)
    lfs f26, 0xec(r1)
    lfs f25, 0xdc(r1)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x34(r1)
    stfs f31, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f31, 0xc8(r1)
    stfs f30, 0xcc(r1)
    stfs f8, 0x80(r1)
    stfs f7, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f8, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f11, 0xa0(r1)
    stfs f10, 0xa4(r1)
    stfs f9, 0xa8(r1)
    stfs f28, 0x68(r1)
    stfs f13, 0x6c(r1)
    stfs f12, 0x70(r1)
    stfs f28, 0xb0(r1)
    stfs f13, 0xb4(r1)
    stfs f12, 0xb8(r1)
    stfs f25, 0x5c(r1)
    stfs f26, 0x60(r1)
    stfs f27, 0x64(r1)
    stfs f25, 0x9c(r1)
    stfs f26, 0xac(r1)
    stfs f27, 0xbc(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_8056F5B8_000007B0
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8056F5B8_000007A0
    lfs f0, lbl_8088802C
    b lbl_fn_8056F5B8_000007A4
lbl_fn_8056F5B8_000007A0:
    lfs f0, lbl_80888030
lbl_fn_8056F5B8_000007A4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8056F5B8_000007C4
lbl_fn_8056F5B8_000007B0:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8056F5B8_000007C4:
    psq_l f1, 0x0(r30), 0, 0
    fmr f2, f31
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x2c(r1)
    stfs f0, 0x1c(r1)
    lwz r4, 0x1c(r1)
    stfs f31, 0x4c(r1)
    cmpwi r4, 0x0
    stfs f2, 0x34(r1)
    bne lbl_fn_8056F5B8_000007F4
    li r0, 0x0
    b lbl_fn_8056F5B8_00000824
lbl_fn_8056F5B8_000007F4:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056F5B8_00000808
    li r0, 0x0
    b lbl_fn_8056F5B8_00000824
lbl_fn_8056F5B8_00000808:
    cmpwi r3, 0x1f
    ble lbl_fn_8056F5B8_00000814
    li r3, 0x1f
lbl_fn_8056F5B8_00000814:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056F5B8_00000824:
    lfs f0, 0x30(r1)
    stfs f0, 0x18(r1)
    lwz r4, 0x18(r1)
    sth r0, 0xc(r26)
    cmpwi r4, 0x0
    bne lbl_fn_8056F5B8_00000844
    li r0, 0x0
    b lbl_fn_8056F5B8_00000874
lbl_fn_8056F5B8_00000844:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056F5B8_00000858
    li r0, 0x0
    b lbl_fn_8056F5B8_00000874
lbl_fn_8056F5B8_00000858:
    cmpwi r3, 0x1f
    ble lbl_fn_8056F5B8_00000864
    li r3, 0x1f
lbl_fn_8056F5B8_00000864:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056F5B8_00000874:
    lfs f0, 0x34(r1)
    stfs f0, 0x14(r1)
    lwz r4, 0x14(r1)
    sth r0, 0xe(r26)
    cmpwi r4, 0x0
    bne lbl_fn_8056F5B8_00000894
    li r0, 0x0
    b lbl_fn_8056F5B8_000008C4
lbl_fn_8056F5B8_00000894:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056F5B8_000008A8
    li r0, 0x0
    b lbl_fn_8056F5B8_000008C4
lbl_fn_8056F5B8_000008A8:
    cmpwi r3, 0x1f
    ble lbl_fn_8056F5B8_000008B4
    li r3, 0x1f
lbl_fn_8056F5B8_000008B4:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056F5B8_000008C4:
    sth r0, 0x10(r26)
lbl_fn_8056F5B8_000008C8:
    addi r25, r25, 0x1
    addi r23, r23, 0x14
    cmpwi r25, 0x20
    addi r24, r24, 0xc8
    blt lbl_fn_8056F5B8_000004D8
lbl_fn_8056F5B8_000008DC:
    addi r11, r1, 0x190
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    psq_l f28, 0x1c8(r1), 0, 0
    lfd f28, 0x1c0(r1)
    psq_l f27, 0x1b8(r1), 0, 0
    lfd f27, 0x1b0(r1)
    psq_l f26, 0x1a8(r1), 0, 0
    lfd f26, 0x1a0(r1)
    psq_l f25, 0x198(r1), 0, 0
    lfd f25, 0x190(r1)
    bl _restgpr_23
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8056FC28(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    addi r11, r1, 0x330
    stfd f31, 0x340(r1)
    psq_st f31, 0x348(r1), 0, 0
    stfd f30, 0x330(r1)
    psq_st f30, 0x338(r1), 0, 0
    bl _savegpr_21
    addis r25, r3, 0x4
    mr r24, r4
    lbz r0, 0x4ec4(r25)
    li r28, 0x0
    addi r25, r25, 0x3970
    extsb. r0, r0
    ble lbl_fn_8056FC28_00000B74
    mr r27, r25
    addi r31, r1, 0x1f8
    li r21, 0x0
    li r29, 0x6
    b lbl_fn_8056FC28_00000B64
lbl_fn_8056FC28_00000980:
    lwz r3, 0x0(r27)
    li r5, 0x0
    lbz r4, 0x5(r27)
    addi r26, r3, 0xb0
    lwz r3, 0x100(r3)
    lwz r0, 0x20c(r26)
    extsb r4, r4
    rlwimi r0, r3, 8, 16, 23
    stw r0, 0x20c(r26)
    stw r4, 0x50(r26)
    lbz r0, 0x6(r27)
    extsb r0, r0
    stw r0, 0x34c(r26)
    mtctr r29
lbl_fn_8056FC28_000009B8:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r27, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056FC28_000009E4
    lfs f0, lbl_80888020
    b lbl_fn_8056FC28_00000A00
lbl_fn_8056FC28_000009E4:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x18(r1)
    lfs f0, 0x18(r1)
lbl_fn_8056FC28_00000A00:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r31, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r27, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056FC28_00000A40
    lfs f0, lbl_80888020
    b lbl_fn_8056FC28_00000A5C
lbl_fn_8056FC28_00000A40:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x18(r1)
    lfs f0, 0x18(r1)
lbl_fn_8056FC28_00000A5C:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r31, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056FC28_000009B8
    lha r0, 0x88(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8056FC28_00000A88
    lfs f30, lbl_80888020
    b lbl_fn_8056FC28_00000AA4
lbl_fn_8056FC28_00000A88:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x1c(r1)
    lfs f30, 0x1c(r1)
lbl_fn_8056FC28_00000AA4:
    stw r21, 0x228(r1)
    mr r4, r31
    addi r3, r25, 0x17d8
    addi r5, r1, 0x1c8
    bl fn_805F89F0
    fmr f1, f30
    mr r3, r26
    mr r8, r27
    addi r4, r27, 0x20
    addi r6, r1, 0x1c8
    addi r7, r1, 0x228
    li r5, 0x4
    bl fn_8056A9E8
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x20
    lfs f11, 0x34(r26)
    lfs f10, 0x24(r26)
    lfs f9, 0x14(r26)
    lfs f8, 0x114(r4)
    lfs f7, 0x110(r4)
    lfs f0, 0x10c(r4)
    fsubs f8, f8, f11
    fsubs f7, f7, f10
    stfs f9, 0x2c(r1)
    fsubs f0, f0, f9
    stfs f10, 0x30(r1)
    stfs f11, 0x34(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9920
    lbz r0, 0x4(r27)
    fmr f30, f1
    extsb. r4, r0
    blt lbl_fn_8056FC28_00000B44
    lwz r3, 0x0(r27)
    li r5, 0x1
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_8056FC28_00000B50
lbl_fn_8056FC28_00000B44:
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_8014EEC4
lbl_fn_8056FC28_00000B50:
    fmr f1, f30
    lwz r3, 0x0(r27)
    bl fn_80148B38
    addi r27, r27, 0x8c
    addi r28, r28, 0x1
lbl_fn_8056FC28_00000B64:
    lbz r0, 0x1554(r25)
    extsb r0, r0
    cmpw r28, r0
    blt lbl_fn_8056FC28_00000980
lbl_fn_8056FC28_00000B74:
    cmpwi r24, 0x0
    bne lbl_fn_8056FC28_00000F34
    addi r26, r25, 0x834
    addi r22, r1, 0x270
    li r27, 0x0
    li r21, 0x0
    li r24, 0x6
    b lbl_fn_8056FC28_00000C98
lbl_fn_8056FC28_00000B94:
    lwz r28, 0x4(r26)
    li r5, 0x0
    mtctr r24
lbl_fn_8056FC28_00000BA0:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r26, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056FC28_00000BCC
    lfs f0, lbl_80888020
    b lbl_fn_8056FC28_00000BE8
lbl_fn_8056FC28_00000BCC:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x14(r1)
    lfs f0, 0x14(r1)
lbl_fn_8056FC28_00000BE8:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r22, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r26, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056FC28_00000C28
    lfs f0, lbl_80888020
    b lbl_fn_8056FC28_00000C44
lbl_fn_8056FC28_00000C28:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x14(r1)
    lfs f0, 0x14(r1)
lbl_fn_8056FC28_00000C44:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r22, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056FC28_00000BA0
    stw r21, 0x24c(r1)
    addi r3, r25, 0x17d8
    addi r4, r1, 0x270
    addi r5, r1, 0x2a0
    bl fn_805F89F0
    lfs f1, lbl_80888020
    mr r3, r28
    addi r4, r26, 0x20
    addi r6, r1, 0x2a0
    addi r7, r1, 0x24c
    li r5, 0x1
    li r8, 0x0
    bl fn_8056A9E8
    addi r26, r26, 0x38
    addi r27, r27, 0x1
lbl_fn_8056FC28_00000C98:
    lbz r0, 0x1555(r25)
    extsb r0, r0
    cmpw r27, r0
    blt lbl_fn_8056FC28_00000B94
    lfs f30, lbl_80888020
    addi r29, r1, 0x198
    lfs f31, lbl_80888034
    addi r31, r1, 0x2d0
    addi r26, r1, 0x78
    addi r28, r1, 0x138
    addi r27, r1, 0xd8
    addi r30, r1, 0x48
    li r24, 0x0
    li r23, 0x0
    li r22, 0x0
lbl_fn_8056FC28_00000CD4:
    add r21, r25, r22
    addi r3, r1, 0x2d0
    lfs f1, 0x1558(r21)
    lfs f2, 0x155c(r21)
    lfs f3, 0x1560(r21)
    bl fn_805F90D0
    lha r0, 0x1564(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8056FC28_00000D00
    lfs f8, lbl_80888020
    b lbl_fn_8056FC28_00000D1C
lbl_fn_8056FC28_00000D00:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x8(r1)
    lfs f8, 0x8(r1)
lbl_fn_8056FC28_00000D1C:
    lha r0, 0x1566(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8056FC28_00000D30
    lfs f7, lbl_80888020
    b lbl_fn_8056FC28_00000D4C
lbl_fn_8056FC28_00000D30:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0xc(r1)
    lfs f7, 0xc(r1)
lbl_fn_8056FC28_00000D4C:
    lha r0, 0x1568(r21)
    cmpwi r0, 0x0
    bne lbl_fn_8056FC28_00000D60
    lfs f0, lbl_80888020
    b lbl_fn_8056FC28_00000D7C
lbl_fn_8056FC28_00000D60:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x10(r1)
    lfs f0, 0x10(r1)
lbl_fn_8056FC28_00000D7C:
    frsp f1, f0
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    fcmpu cr0, f30, f1
    stfs f0, 0x40(r1)
    stfs f30, 0xa4(r1)
    stfs f30, 0x9c(r1)
    stfs f30, 0x98(r1)
    stfs f30, 0x94(r1)
    stfs f30, 0x90(r1)
    stfs f30, 0x88(r1)
    stfs f30, 0x84(r1)
    stfs f30, 0x80(r1)
    stfs f30, 0x7c(r1)
    stfs f31, 0xa0(r1)
    stfs f31, 0x8c(r1)
    stfs f31, 0x78(r1)
    beq lbl_fn_8056FC28_00000E10
    addi r3, r1, 0x168
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x168
    addi r5, r1, 0x198
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8056FC28_00000E10:
    lfs f1, 0x3c(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_8056FC28_00000E68
    addi r3, r1, 0x108
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x108
    addi r5, r1, 0x138
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8056FC28_00000E68:
    lfs f1, 0x38(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_8056FC28_00000EC0
    addi r3, r1, 0xa8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0xa8
    addi r5, r1, 0xd8
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8056FC28_00000EC0:
    mr r3, r31
    mr r4, r26
    addi r5, r1, 0x48
    bl fn_805F89F0
    lwz r3, lbl_8087F048
    addi r4, r1, 0x2d0
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    addis r3, r3, 0x1
    psq_l f3, 0x10(r30), 0, 0
    subi r3, r3, 0x5eb0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lwzux r12, r3, r23
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    addi r24, r24, 0x1
    addi r22, r22, 0x14
    cmpwi r24, 0x20
    addi r23, r23, 0xc8
    blt lbl_fn_8056FC28_00000CD4
lbl_fn_8056FC28_00000F34:
    addi r11, r1, 0x330
    psq_l f31, 0x348(r1), 0, 0
    lfd f31, 0x340(r1)
    psq_l f30, 0x338(r1), 0, 0
    lfd f30, 0x330(r1)
    bl _restgpr_21
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}

asm void fn_80570258(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    addis r5, r3, 0x6
    li r0, 0x0
    stw r0, -0x424c(r5)
    mr r30, r3
    mr r26, r4
    bl fn_8056DAD0
    addis r4, r30, 0x6
    lwz r3, lbl_8087F3C0
    lwz r4, -0x4254(r4)
    li r0, 0x1
    mr r28, r30
    addis r29, r30, 0x5
    stw r0, 0xd0(r3)
    add r31, r4, r26
    li r27, 0x0
    b lbl_fn_80570258_00000FDC
lbl_fn_80570258_00000FB0:
    addis r3, r28, 0x5
    lwz r0, 0x2990(r29)
    lwz r4, 0x2188(r3)
    lwz r3, 0x0(r4)
    cmpw r3, r0
    bge lbl_fn_80570258_00000FD4
    lwz r3, lbl_8087F3C0
    addi r4, r4, 0x4
    bl fn_8023B724
lbl_fn_80570258_00000FD4:
    addi r28, r28, 0x4
    addi r27, r27, 0x1
lbl_fn_80570258_00000FDC:
    lwz r0, 0x2184(r29)
    cmplw r27, r0
    blt lbl_fn_80570258_00000FB0
    lwz r27, 0x2990(r29)
    addis r29, r30, 0x5
    b lbl_fn_80570258_00001048
lbl_fn_80570258_00000FF4:
    mr r28, r30
    li r26, 0x0
    b lbl_fn_80570258_00001028
lbl_fn_80570258_00001000:
    addis r3, r28, 0x5
    lwz r4, 0x2188(r3)
    lwz r0, 0x0(r4)
    cmpw r0, r27
    bne lbl_fn_80570258_00001020
    lwz r3, lbl_8087F3C0
    addi r4, r4, 0x4
    bl fn_8023B724
lbl_fn_80570258_00001020:
    addi r28, r28, 0x4
    addi r26, r26, 0x1
lbl_fn_80570258_00001028:
    lwz r0, 0x2184(r29)
    cmplw r26, r0
    blt lbl_fn_80570258_00001000
    lwz r3, lbl_8087F3C0
    bl fn_80239C14
    lwz r3, lbl_8087F3C0
    bl fn_80239C20
    addi r27, r27, 0x1
lbl_fn_80570258_00001048:
    cmpw r27, r31
    blt lbl_fn_80570258_00000FF4
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_8023B71C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    addis r29, r30, 0x6
    li r0, 0x1
    stw r4, 0xd0(r3)
    stw r0, -0x425c(r29)
    lwz r26, -0x4260(r29)
    b lbl_fn_80570258_00001188
lbl_fn_80570258_00001088:
    mr r28, r30
    li r27, 0x0
    b lbl_fn_80570258_00001170
lbl_fn_80570258_00001094:
    addis r3, r28, 0x6
    lwz r6, -0x4668(r3)
    lwz r0, 0x0(r6)
    cmpw r0, r26
    bne lbl_fn_80570258_00001168
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80570258_000010D0
    cmpwi r0, 0x1
    beq lbl_fn_80570258_00001130
    cmpwi r0, 0x2
    beq lbl_fn_80570258_00001150
    cmpwi r0, 0x3
    beq lbl_fn_80570258_00001160
    b lbl_fn_80570258_00001168
lbl_fn_80570258_000010D0:
    lwz r7, 0x3c(r6)
    cmpwi r7, 0x0
    beq lbl_fn_80570258_00001100
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    addi r5, r6, 0x24
    lfs f1, lbl_8088804C
    addi r6, r6, 0x30
    li r8, -0x1
    li r9, 0x0
    bl fn_8010EE78
    b lbl_fn_80570258_00001168
lbl_fn_80570258_00001100:
    lwz r7, 0x40(r6)
    cmpwi r7, 0x0
    beq lbl_fn_80570258_00001168
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    addi r5, r6, 0x24
    lfs f1, lbl_8088804C
    addi r6, r6, 0x30
    li r8, -0x1
    li r9, 0x0
    bl fn_8010EFC8
    b lbl_fn_80570258_00001168
lbl_fn_80570258_00001130:
    lwz r3, 0x44(r6)
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80570258_00001168
lbl_fn_80570258_00001150:
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    bl fn_8010F26C
    b lbl_fn_80570258_00001168
lbl_fn_80570258_00001160:
    lwz r3, 0x44(r6)
    bl fn_8010F41C
lbl_fn_80570258_00001168:
    addi r28, r28, 0x4
    addi r27, r27, 0x1
lbl_fn_80570258_00001170:
    lwz r0, -0x466c(r29)
    cmplw r27, r0
    blt lbl_fn_80570258_00001094
    lwz r3, lbl_8087F048
    bl fn_80101138
    addi r26, r26, 0x1
lbl_fn_80570258_00001188:
    cmpw r26, r31
    blt lbl_fn_80570258_00001088
    addis r3, r30, 0x6
    li r0, 0x0
    stw r0, -0x425c(r3)
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805704B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r4, 0x4(r3)
    addis r5, r3, 0x6
    li r28, 0x1
    stw r28, -0x424c(r5)
    addi r31, r4, 0x1
    mr r30, r3
    li r4, 0x0
    bl fn_8056FC28
    lwz r4, lbl_8087F3C0
    addis r3, r30, 0x6
    addis r29, r30, 0x5
    stw r28, 0xd0(r4)
    lwz r3, -0x4254(r3)
    addi r27, r3, 0x1
    b lbl_fn_805704B0_00001258
lbl_fn_805704B0_00001204:
    mr r28, r30
    li r26, 0x0
    b lbl_fn_805704B0_00001238
lbl_fn_805704B0_00001210:
    addis r3, r28, 0x5
    lwz r4, 0x2188(r3)
    lwz r0, 0x0(r4)
    cmpw r0, r27
    bne lbl_fn_805704B0_00001230
    lwz r3, lbl_8087F3C0
    addi r4, r4, 0x4
    bl fn_8023B724
lbl_fn_805704B0_00001230:
    addi r28, r28, 0x4
    addi r26, r26, 0x1
lbl_fn_805704B0_00001238:
    lwz r0, 0x2184(r29)
    cmplw r26, r0
    blt lbl_fn_805704B0_00001210
    lwz r3, lbl_8087F3C0
    bl fn_80239C14
    lwz r3, lbl_8087F3C0
    bl fn_80239C20
    addi r27, r27, 0x1
lbl_fn_805704B0_00001258:
    cmpw r27, r31
    blt lbl_fn_805704B0_00001204
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_8023B71C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    addis r29, r30, 0x6
    li r0, 0x1
    stw r4, 0xd0(r3)
    lwz r3, -0x4254(r29)
    stw r0, -0x425c(r29)
    addi r26, r3, 0x1
    b lbl_fn_805704B0_0000139C
lbl_fn_805704B0_0000129C:
    mr r28, r30
    li r27, 0x0
    b lbl_fn_805704B0_00001384
lbl_fn_805704B0_000012A8:
    addis r3, r28, 0x6
    lwz r6, -0x4668(r3)
    lwz r0, 0x0(r6)
    cmpw r0, r26
    bne lbl_fn_805704B0_0000137C
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805704B0_000012E4
    cmpwi r0, 0x1
    beq lbl_fn_805704B0_00001344
    cmpwi r0, 0x2
    beq lbl_fn_805704B0_00001364
    cmpwi r0, 0x3
    beq lbl_fn_805704B0_00001374
    b lbl_fn_805704B0_0000137C
lbl_fn_805704B0_000012E4:
    lwz r7, 0x3c(r6)
    cmpwi r7, 0x0
    beq lbl_fn_805704B0_00001314
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    addi r5, r6, 0x24
    lfs f1, lbl_8088804C
    addi r6, r6, 0x30
    li r8, -0x1
    li r9, 0x0
    bl fn_8010EE78
    b lbl_fn_805704B0_0000137C
lbl_fn_805704B0_00001314:
    lwz r7, 0x40(r6)
    cmpwi r7, 0x0
    beq lbl_fn_805704B0_0000137C
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    addi r5, r6, 0x24
    lfs f1, lbl_8088804C
    addi r6, r6, 0x30
    li r8, -0x1
    li r9, 0x0
    bl fn_8010EFC8
    b lbl_fn_805704B0_0000137C
lbl_fn_805704B0_00001344:
    lwz r3, 0x44(r6)
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805704B0_0000137C
lbl_fn_805704B0_00001364:
    lwz r3, 0x44(r6)
    addi r4, r6, 0x8
    bl fn_8010F26C
    b lbl_fn_805704B0_0000137C
lbl_fn_805704B0_00001374:
    lwz r3, 0x44(r6)
    bl fn_8010F41C
lbl_fn_805704B0_0000137C:
    addi r28, r28, 0x4
    addi r27, r27, 0x1
lbl_fn_805704B0_00001384:
    lwz r0, -0x466c(r29)
    cmplw r27, r0
    blt lbl_fn_805704B0_000012A8
    lwz r3, lbl_8087F048
    bl fn_80101138
    addi r26, r26, 0x1
lbl_fn_805704B0_0000139C:
    cmpw r26, r31
    blt lbl_fn_805704B0_0000129C
    addis r3, r30, 0x6
    li r0, 0x0
    stw r0, -0x425c(r3)
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805706C4(void)
{
    nofralloc
    addis r7, r3, 0x6
    lwz r0, -0x425c(r7)
    cmpwi r0, 0x0
    bnelr
    lwz r0, -0x4250(r7)
    cmpwi r0, 0x0
    beq lbl_fn_805706C4_000013E8
    blr
lbl_fn_805706C4_000013E8:
    li r0, 0x100
    li r5, 0x0
    li r9, 0x0
    mtctr r0
lbl_fn_805706C4_000013F8:
    lwz r0, -0x4268(r7)
    add r6, r0, r9
    slwi r0, r6, 24
    srwi r6, r6, 31
    subf r0, r6, r0
    rotlwi r0, r0, 8
    add r10, r0, r6
    mulli r6, r10, 0x48
    addis r6, r6, 0x5
    addi r8, r6, 0x2994
    add r8, r3, r8
    lwz r0, 0x0(r8)
    cmpwi r0, 0x0
    bge lbl_fn_805706C4_00001454
    addi r6, r10, 0x1
    mr r5, r8
    slwi r0, r6, 24
    srwi r6, r6, 31
    subf r0, r6, r0
    rotlwi r0, r0, 8
    add r0, r0, r6
    stw r0, -0x4268(r7)
    b lbl_fn_805706C4_0000145C
lbl_fn_805706C4_00001454:
    addi r9, r9, 0x1
    bdnz lbl_fn_805706C4_000013F8
lbl_fn_805706C4_0000145C:
    cmpwi r5, 0x0
    beqlr
    lwz r0, 0x4(r3)
    addis r6, r3, 0x6
    stw r0, 0x0(r5)
    lwz r0, 0x0(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x8(r5)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r5)
    lwz r0, 0xc(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x14(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x1c(r5)
    lwz r0, 0x1c(r4)
    stw r0, 0x20(r5)
    psq_l f1, 0x20(r4), 0, 0
    psq_st f1, 0x24(r5), 0, 0
    lfs f2, 0x28(r4)
    stfs f2, 0x2c(r5)
    psq_l f1, 0x2c(r4), 0, 0
    psq_st f1, 0x30(r5), 0, 0
    lfs f2, 0x34(r4)
    stfs f2, 0x38(r5)
    lwz r0, 0x38(r4)
    stw r0, 0x3c(r5)
    lwz r0, 0x3c(r4)
    stw r0, 0x40(r5)
    lwz r0, 0x40(r4)
    stw r0, 0x44(r5)
    lwz r0, -0x466c(r6)
    slwi r0, r0, 2
    add r0, r6, r0
    subic. r4, r0, 0x4668
    beq lbl_fn_805706C4_00001500
    stw r5, 0x0(r4)
lbl_fn_805706C4_00001500:
    addis r4, r3, 0x6
    lwz r3, -0x466c(r4)
    addi r0, r3, 0x1
    stw r0, -0x466c(r4)
    blr
}

asm void fn_80570810(void)
{
    nofralloc
    stwu r1, -0x410(r1)
    addis r4, r3, 0x6
    li r0, 0x0
    li r7, -0x1
    stw r0, 0x8(r1)
    mr r6, r4
    addi r9, r1, 0xc
    subi r4, r4, 0x4668
    b lbl_fn_80570810_00001640
lbl_fn_80570810_00001538:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80570810_00001564
    cmpwi r0, 0x2
    beq lbl_fn_80570810_00001564
    cmpwi r0, 0x1
    beq lbl_fn_80570810_0000158C
    cmpwi r0, 0x3
    beq lbl_fn_80570810_0000158C
    b lbl_fn_80570810_0000163C
lbl_fn_80570810_00001564:
    lwz r0, 0x8(r1)
    addi r8, r1, 0xc
    slwi r0, r0, 2
    add. r8, r8, r0
    beq lbl_fn_80570810_0000157C
    stw r5, 0x0(r8)
lbl_fn_80570810_0000157C:
    lwz r5, 0x8(r1)
    addi r0, r5, 0x1
    stw r0, 0x8(r1)
    b lbl_fn_80570810_0000163C
lbl_fn_80570810_0000158C:
    lwz r8, 0x4(r3)
    lwz r10, 0x0(r5)
    subi r0, r8, 0x5a
    cmpw r10, r0
    bge lbl_fn_80570810_0000163C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80570810_000015B4
    stw r7, 0x0(r5)
    b lbl_fn_80570810_0000163C
lbl_fn_80570810_000015B4:
    lwz r0, 0x8(r1)
    addi r11, r1, 0xc
    slwi r0, r0, 2
    add r10, r11, r0
    b lbl_fn_80570810_00001634
lbl_fn_80570810_000015C8:
    lwz r12, 0x0(r11)
    lwz r0, 0x0(r12)
    cmpwi r0, 0x0
    blt lbl_fn_80570810_00001634
    lwz r8, 0x44(r5)
    lwz r0, 0x44(r12)
    cmplw r8, r0
    bne lbl_fn_80570810_00001630
    subf r0, r9, r11
    addi r11, r1, 0x8
    srawi r0, r0, 2
    addze r10, r0
    slwi r0, r10, 2
    add r11, r11, r0
    b lbl_fn_80570810_00001610
lbl_fn_80570810_00001604:
    lwz r0, 0x8(r11)
    addi r10, r10, 0x1
    stwu r0, 0x4(r11)
lbl_fn_80570810_00001610:
    lwz r8, 0x8(r1)
    subi r0, r8, 0x1
    cmplw r10, r0
    blt lbl_fn_80570810_00001604
    stw r0, 0x8(r1)
    stw r7, 0x0(r5)
    stw r7, 0x0(r12)
    b lbl_fn_80570810_0000163C
lbl_fn_80570810_00001630:
    addi r11, r11, 0x4
lbl_fn_80570810_00001634:
    cmplw r11, r10
    bne lbl_fn_80570810_000015C8
lbl_fn_80570810_0000163C:
    addi r4, r4, 0x4
lbl_fn_80570810_00001640:
    lwz r0, -0x466c(r6)
    slwi r0, r0, 2
    add r5, r6, r0
    subi r0, r5, 0x4668
    cmplw r4, r0
    bne lbl_fn_80570810_00001538
    lwz r0, 0x4(r3)
    subi r9, r6, 0x4668
    stw r0, -0x4260(r6)
    addis r5, r3, 0x6
    b lbl_fn_80570810_000016FC
lbl_fn_80570810_0000166C:
    lwz r4, 0x0(r9)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    bge lbl_fn_80570810_000016C8
    addis r6, r3, 0x6
    subi r0, r6, 0x4668
    subf r0, r0, r9
    srawi r0, r0, 2
    addze r7, r0
    slwi r0, r7, 2
    add r8, r3, r0
    b lbl_fn_80570810_000016B0
lbl_fn_80570810_0000169C:
    addis r4, r8, 0x6
    addi r8, r8, 0x4
    lwz r0, -0x4664(r4)
    addi r7, r7, 0x1
    stw r0, -0x4668(r4)
lbl_fn_80570810_000016B0:
    lwz r4, -0x466c(r6)
    subi r0, r4, 0x1
    cmplw r7, r0
    blt lbl_fn_80570810_0000169C
    stw r0, -0x466c(r6)
    b lbl_fn_80570810_000016FC
lbl_fn_80570810_000016C8:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80570810_000016DC
    cmpwi r0, 0x2
    bne lbl_fn_80570810_000016F8
lbl_fn_80570810_000016DC:
    addis r4, r3, 0x6
    lwz r0, -0x4260(r4)
    cmpw r6, r0
    bge lbl_fn_80570810_000016F0
    mr r0, r6
lbl_fn_80570810_000016F0:
    addis r4, r3, 0x6
    stw r0, -0x4260(r4)
lbl_fn_80570810_000016F8:
    addi r9, r9, 0x4
lbl_fn_80570810_000016FC:
    lwz r0, -0x466c(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    subi r0, r4, 0x4668
    cmplw r9, r0
    bne lbl_fn_80570810_0000166C
    addi r1, r1, 0x410
    blr
}

asm void fn_80570A18(void)
{
    nofralloc
    addis r5, r3, 0x6
    cmpwi r4, 0x0
    stw r4, -0x4258(r5)
    beq lbl_fn_80570A18_00001738
    lwz r0, 0x4(r3)
    stw r0, -0x4254(r5)
    blr
lbl_fn_80570A18_00001738:
    addis r3, r3, 0x4
    li r0, 0x0
    stw r0, 0x517c(r3)
    blr
}

asm void fn_80570A44(void)
{
    nofralloc
    addis r3, r3, 0x6
    stw r4, -0x4250(r3)
    blr
}

asm void fn_80570A50(void)
{
    nofralloc
    addis r3, r3, 0x4
    lwz r3, 0x517c(r3)
    subi r0, r3, 0x2d
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80570A68(void)
{
    nofralloc
    addis r3, r3, 0x4
    li r0, 0x0
    stw r0, 0x517c(r3)
    blr
}

asm void fn_80570A78(void)
{
    nofralloc
    lwz r10, 0x0(r4)
    stwu r1, -0x10(r1)
    cmpwi r10, 0x0
    stw r31, 0xc(r1)
    beq lbl_fn_80570A78_00001844
    addis r5, r3, 0x5
    li r31, 0x0
    li r11, 0x0
    b lbl_fn_80570A78_00001838
lbl_fn_80570A78_000017A0:
    lwz r0, 0x4(r10)
    addis r9, r3, 0x5
    addi r9, r9, 0x2188
    add r4, r0, r11
    addi r7, r4, 0x48
    b lbl_fn_80570A78_00001818
lbl_fn_80570A78_000017B8:
    lwz r4, 0x0(r9)
    lwz r0, 0x8(r4)
    cmplw r0, r7
    bne lbl_fn_80570A78_00001814
    addis r6, r3, 0x5
    addi r0, r6, 0x2188
    subf r0, r0, r9
    srawi r0, r0, 2
    addze r8, r0
    slwi r0, r8, 2
    add r12, r3, r0
    b lbl_fn_80570A78_000017FC
lbl_fn_80570A78_000017E8:
    addis r4, r12, 0x5
    addi r12, r12, 0x4
    lwz r0, 0x218c(r4)
    addi r8, r8, 0x1
    stw r0, 0x2188(r4)
lbl_fn_80570A78_000017FC:
    lwz r4, 0x2184(r6)
    subi r0, r4, 0x1
    cmplw r8, r0
    blt lbl_fn_80570A78_000017E8
    stw r0, 0x2184(r6)
    b lbl_fn_80570A78_00001818
lbl_fn_80570A78_00001814:
    addi r9, r9, 0x4
lbl_fn_80570A78_00001818:
    lwz r0, 0x2184(r5)
    slwi r0, r0, 2
    add r4, r5, r0
    addi r0, r4, 0x2188
    cmplw r9, r0
    bne lbl_fn_80570A78_000017B8
    addi r11, r11, 0x54
    addi r31, r31, 0x1
lbl_fn_80570A78_00001838:
    lwz r0, 0x0(r10)
    cmplw r31, r0
    blt lbl_fn_80570A78_000017A0
lbl_fn_80570A78_00001844:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_80570B4C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, lbl_8087F9A0
    lwz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80570B4C_00001878
    li r0, 0x1
    stw r0, 0x28(r4)
    b lbl_fn_80570B4C_000018C8
lbl_fn_80570B4C_00001878:
    li r3, 0x1
    stw r3, 0x0(r4)
    li r0, 0x0
    stw r0, 0x8(r4)
    lwz r4, lbl_8087F420
    cmpwi r4, 0x0
    beq lbl_fn_80570B4C_00001898
    stw r3, 0x20(r4)
lbl_fn_80570B4C_00001898:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570B4C_000018AC
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570B4C_000018AC:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570B4C_000018C8
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
lbl_fn_80570B4C_000018C8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80570BD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F9A0
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80570BD4_00001900
    li r0, 0x1
    stw r0, 0x2c(r3)
    b lbl_fn_80570BD4_00001948
lbl_fn_80570BD4_00001900:
    li r0, 0x1
    stw r0, 0x4(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80570BD4_00001918
    stw r0, 0x20(r3)
lbl_fn_80570BD4_00001918:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570BD4_0000192C
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570BD4_0000192C:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570BD4_00001948
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
lbl_fn_80570BD4_00001948:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80570C54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8087F9A0
    cmpwi r0, 0x0
    bne lbl_fn_80570C54_000019EC
    lis r5, lbl_8075FFB0@ha
    li r3, 0x30
    addi r5, r5, lbl_8075FFB0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80570C54_000019E8
    li r0, 0x0
    stw r0, 0x0(r3)
    lis r4, fn_80570B4C@ha
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    addi r3, r4, fn_80570B4C@l
    bl fn_805F68F0
    lis r3, fn_80570BD4@ha
    addi r3, r3, fn_80570BD4@l
    bl fn_805F69E0
lbl_fn_80570C54_000019E8:
    stw r31, lbl_8087F9A0
lbl_fn_80570C54_000019EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
