#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _restgpr_27(void);
extern void _savegpr_18(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8016F3D0(void);
extern void fn_801784BC(void);
extern void fn_80178A6C(void);
extern void fn_80179730(void);
extern void fn_8021A960(void);
extern void fn_8021A984(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_80491DF8(void);
extern void fn_805991E4(void);
extern void fn_80599D64(void);
extern void fn_80599FB8(void);
extern void fn_8059A0B8(void);
extern void fn_8059A200(void);
extern void fn_8059A268(void);
extern void fn_8059A29C(void);
extern void fn_8059DC68(void);
extern void fn_8059E220(void);
extern void fn_8059E244(void);
extern void fn_8059E2F0(void);
extern void fn_8059E740(void);
extern void fn_805F9EF0(void);
extern void fn_805FA200(void);
extern void fn_805FA390(void);
extern void fn_8068236C(void);
extern void fn_80716280(void);
extern void fn_80724DF0(void);
extern void fn_80724E90(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807623A4[];
extern u8 lbl_80796BF0[];

/* Small data declarations */
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F558;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9E8;
extern u32 lbl_808881F8;
extern u32 lbl_808881FC;
extern u32 lbl_80888200;
extern u32 lbl_80888204;
extern u32 lbl_80888208;
extern u32 lbl_8088820C;
extern u32 lbl_80888210;

/* Function declarations */
void fn_8059C088(void);
void fn_8059C2AC(void);
void fn_8059C330(void);
void fn_8059C3F8(void);
void fn_8059C5E0(void);
void fn_8059C6E0(void);
void fn_8059C804(void);
void fn_8059C8DC(void);
void fn_8059C8EC(void);
void fn_8059C990(void);
void fn_8059C9A0(void);
void fn_8059CA78(void);
void fn_8059CA88(void);
void fn_8059CB30(void);
void fn_8059CB40(void);
void fn_8059CBE8(void);
void fn_8059CBF8(void);
void fn_8059CCA0(void);
void fn_8059CCB0(void);
void fn_8059CF74(void);
void fn_8059CFB4(void);
void fn_8059CFC8(void);
void fn_8059D008(void);
void fn_8059D01C(void);
void fn_8059D05C(void);
void fn_8059D070(void);
void fn_8059D0B0(void);
void fn_8059D0C4(void);
void fn_8059D16C(void);
void fn_8059D17C(void);
void fn_8059D26C(void);
void fn_8059D310(void);
void fn_8059D3B4(void);
void fn_8059D7DC(void);
void fn_8059D828(void);
void fn_8059D8B4(void);
void fn_8059DA44(void);

asm void fn_8059C088(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8059C088_00000044
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8059C088_00000050
lbl_fn_8059C088_00000044:
    mr r3, r29
    bl fn_80178A6C
    b lbl_fn_8059C088_00000200
lbl_fn_8059C088_00000050:
    lwz r0, 0x55c(r4)
    li r5, 0x1
    cmpwi r0, 0x6
    bne lbl_fn_8059C088_00000074
    lwz r4, 0x560(r4)
    subi r0, r4, 0x1b
    cmplwi r0, 0x1
    bgt lbl_fn_8059C088_00000074
    li r5, 0x0
lbl_fn_8059C088_00000074:
    cmpwi r5, 0x0
    beq lbl_fn_8059C088_00000200
    lfs f31, lbl_808881FC
    addi r31, r3, 0x48
    li r30, 0x0
lbl_fn_8059C088_00000088:
    lwz r0, 0x4(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059C088_000000A8
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8059C088_000000A8
    li r3, 0x1
lbl_fn_8059C088_000000A8:
    cmpwi r3, 0x0
    beq lbl_fn_8059C088_000001F0
    mr r3, r31
    mr r4, r29
    li r5, 0x1
    bl fn_80599D64
    cmpwi r3, 0x0
    beq lbl_fn_8059C088_00000184
    lwz r3, 0x4(r31)
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_8059C088_00000144
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_8059C088_000000F4
    lwz r0, 0x12a8(r29)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_8059C088_000001F0
lbl_fn_8059C088_000000F4:
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 10
    cmplwi r0, 0x1
    beq lbl_fn_8059C088_000001F0
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8059C088_000001F0
    lwz r0, 0x12a8(r29)
    extrwi. r0, r0, 1, 30
    bne lbl_fn_8059C088_000001F0
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8059C088_00000144
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8059C088_00000144
    lwz r0, 0x560(r29)
    cmpwi r0, 0xe
    beq lbl_fn_8059C088_000001F0
lbl_fn_8059C088_00000144:
    lwz r0, 0x12a4(r29)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_8059C088_00000170
    lwz r4, 0x4(r31)
    mr r3, r29
    li r5, 0x0
    bl fn_80179730
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8059C088_000001F0
lbl_fn_8059C088_00000170:
    mr r3, r29
    mr r4, r31
    li r5, 0x0
    bl fn_801784BC
    b lbl_fn_8059C088_000001F0
lbl_fn_8059C088_00000184:
    lwz r3, 0x4(r31)
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_8059C088_000001F0
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_80599D64
    cmpwi r3, 0x0
    beq lbl_fn_8059C088_000001F0
    lwz r3, 0x4(r31)
    lfs f0, 0x74(r3)
    fcmpo cr0, f0, f31
    bgt lbl_fn_8059C088_000001E0
    lfs f0, 0x78(r3)
    fcmpo cr0, f0, f31
    bgt lbl_fn_8059C088_000001E0
    lfs f0, 0x84(r3)
    fcmpo cr0, f0, f31
    bgt lbl_fn_8059C088_000001E0
    lfs f0, 0x80(r3)
    fcmpo cr0, f0, f31
    ble lbl_fn_8059C088_000001F0
lbl_fn_8059C088_000001E0:
    mr r3, r29
    mr r4, r31
    li r5, 0x1
    bl fn_801784BC
lbl_fn_8059C088_000001F0:
    addi r30, r30, 0x1
    addi r31, r31, 0x140
    cmpwi r30, 0x20
    blt lbl_fn_8059C088_00000088
lbl_fn_8059C088_00000200:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8059C2AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x48
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
lbl_fn_8059C2AC_00000250:
    lwz r0, 0xc(r31)
    cmplw r0, r28
    bne lbl_fn_8059C2AC_00000278
    cmpwi r29, 0x0
    beq lbl_fn_8059C2AC_00000270
    lwz r0, 0x4(r31)
    cmplw r0, r29
    bne lbl_fn_8059C2AC_00000278
lbl_fn_8059C2AC_00000270:
    mr r3, r31
    bl fn_805991E4
lbl_fn_8059C2AC_00000278:
    addi r30, r30, 0x1
    addi r31, r31, 0x140
    cmpwi r30, 0x20
    blt lbl_fn_8059C2AC_00000250
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059C330(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r27, r4
    addi r29, r3, 0x48
    addi r30, r1, 0x8
    li r28, 0x0
    li r31, 0x0
lbl_fn_8059C330_000002CC:
    lwz r0, 0x4(r29)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059C330_000002EC
    lwz r0, 0x0(r29)
    cmpwi r0, 0x3
    beq lbl_fn_8059C330_000002EC
    li r3, 0x1
lbl_fn_8059C330_000002EC:
    cmpwi r3, 0x0
    beq lbl_fn_8059C330_0000034C
    cmpwi r27, 0x0
    beq lbl_fn_8059C330_00000344
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_8059C3F8
    cmpwi r30, 0x0
    beq lbl_fn_8059C330_00000344
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8059C330_00000344
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8059C330_00000340
    addi r3, r30, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8059C330_00000340:
    stw r31, 0x8(r1)
lbl_fn_8059C330_00000344:
    mr r3, r29
    bl fn_805991E4
lbl_fn_8059C330_0000034C:
    addi r28, r28, 0x1
    addi r29, r29, 0x140
    cmpwi r28, 0x20
    blt lbl_fn_8059C330_000002CC
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059C3F8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8059C3F8_000003B4
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8059C3F8_000003B4:
    addi r3, r31, 0x68
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_8059C3F8_00000508
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8059C3F8_000003F8
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8059C3F8_000003F8:
    addi r3, r31, 0x68
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_8059C3F8_00000464
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8059C3F8_0000043C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8059C3F8_00000434
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8059C3F8_00000434:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8059C3F8_0000043C:
    lwz r6, 0x68(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8059C3F8_00000464
    stw r6, 0x8(r1)
    addi r3, r31, 0x6c
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8059C3F8_00000464:
    addi r3, r1, 0x1c
    addi r0, r31, 0x68
    cmplw r3, r0
    beq lbl_fn_8059C3F8_000004D4
    lwz r3, 0x68(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8059C3F8_000004A8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8059C3F8_000004A0
    addi r3, r31, 0x6c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8059C3F8_000004A0:
    li r0, 0x0
    stw r0, 0x68(r31)
lbl_fn_8059C3F8_000004A8:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8059C3F8_000004D4
    stw r0, 0x68(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x6c
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8059C3F8_000004D4:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8059C3F8_00000508
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8059C3F8_00000500
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8059C3F8_00000500:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_8059C3F8_00000508:
    addic. r3, r1, 0x8
    beq lbl_fn_8059C3F8_00000544
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8059C3F8_00000544
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8059C3F8_0000053C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8059C3F8_0000053C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8059C3F8_00000544:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059C5E0(void)
{
    nofralloc
    li r0, 0x10
    addi r3, r3, 0x48
    li r9, 0x0
    mtctr r0
lbl_fn_8059C5E0_00000568:
    lwz r8, 0x4(r3)
    li r7, 0x0
    cmpwi r8, 0x0
    beq lbl_fn_8059C5E0_00000588
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059C5E0_00000588
    li r7, 0x1
lbl_fn_8059C5E0_00000588:
    cmpwi r7, 0x0
    beq lbl_fn_8059C5E0_000005D4
    cmpwi r4, 0x0
    beq lbl_fn_8059C5E0_000005A4
    lwz r0, 0x8(r3)
    cmplw r0, r4
    bne lbl_fn_8059C5E0_000005D4
lbl_fn_8059C5E0_000005A4:
    cmpwi r5, 0x0
    ble lbl_fn_8059C5E0_000005B8
    lwz r0, 0x4(r8)
    cmpw r5, r0
    bne lbl_fn_8059C5E0_000005D4
lbl_fn_8059C5E0_000005B8:
    cmpwi r6, 0x0
    blelr
    lwz r0, 0xac(r8)
    and r0, r6, r0
    cmpw r6, r0
    bne lbl_fn_8059C5E0_000005D4
    blr
lbl_fn_8059C5E0_000005D4:
    lwz r8, 0x144(r3)
    li r7, 0x0
    addi r3, r3, 0x140
    cmpwi r8, 0x0
    beq lbl_fn_8059C5E0_000005F8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059C5E0_000005F8
    li r7, 0x1
lbl_fn_8059C5E0_000005F8:
    cmpwi r7, 0x0
    beq lbl_fn_8059C5E0_00000644
    cmpwi r4, 0x0
    beq lbl_fn_8059C5E0_00000614
    lwz r0, 0x8(r3)
    cmplw r0, r4
    bne lbl_fn_8059C5E0_00000644
lbl_fn_8059C5E0_00000614:
    cmpwi r5, 0x0
    ble lbl_fn_8059C5E0_00000628
    lwz r0, 0x4(r8)
    cmpw r5, r0
    bne lbl_fn_8059C5E0_00000644
lbl_fn_8059C5E0_00000628:
    cmpwi r6, 0x0
    blelr
    lwz r0, 0xac(r8)
    and r0, r6, r0
    cmpw r6, r0
    bne lbl_fn_8059C5E0_00000644
    blr
lbl_fn_8059C5E0_00000644:
    addi r3, r3, 0x140
    addi r9, r9, 0x1
    bdnz lbl_fn_8059C5E0_00000568
    li r3, 0x0
    blr
}

asm void fn_8059C6E0(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8059C6E0_00000668
    li r3, 0x0
    blr
lbl_fn_8059C6E0_00000668:
    li r0, 0x10
    addi r8, r3, 0x48
    lwz r6, 0xac(r4)
    li r7, 0x0
    lwz r3, 0x4(r4)
    mtctr r0
lbl_fn_8059C6E0_00000680:
    lwz r9, 0x4(r8)
    li r4, 0x0
    cmpwi r9, 0x0
    beq lbl_fn_8059C6E0_000006A0
    lwz r0, 0x0(r8)
    cmpwi r0, 0x3
    beq lbl_fn_8059C6E0_000006A0
    li r4, 0x1
lbl_fn_8059C6E0_000006A0:
    cmpwi r4, 0x0
    beq lbl_fn_8059C6E0_000006EC
    cmpwi r5, 0x0
    beq lbl_fn_8059C6E0_000006BC
    lwz r0, 0x8(r8)
    cmplw r0, r5
    bne lbl_fn_8059C6E0_000006EC
lbl_fn_8059C6E0_000006BC:
    cmpwi r3, 0x0
    ble lbl_fn_8059C6E0_000006D0
    lwz r0, 0x4(r9)
    cmpw r3, r0
    bne lbl_fn_8059C6E0_000006EC
lbl_fn_8059C6E0_000006D0:
    cmpwi r6, 0x0
    ble lbl_fn_8059C6E0_0000076C
    lwz r0, 0xac(r9)
    and r0, r6, r0
    cmpw r6, r0
    bne lbl_fn_8059C6E0_000006EC
    b lbl_fn_8059C6E0_0000076C
lbl_fn_8059C6E0_000006EC:
    lwz r9, 0x144(r8)
    li r4, 0x0
    addi r8, r8, 0x140
    cmpwi r9, 0x0
    beq lbl_fn_8059C6E0_00000710
    lwz r0, 0x0(r8)
    cmpwi r0, 0x3
    beq lbl_fn_8059C6E0_00000710
    li r4, 0x1
lbl_fn_8059C6E0_00000710:
    cmpwi r4, 0x0
    beq lbl_fn_8059C6E0_0000075C
    cmpwi r5, 0x0
    beq lbl_fn_8059C6E0_0000072C
    lwz r0, 0x8(r8)
    cmplw r0, r5
    bne lbl_fn_8059C6E0_0000075C
lbl_fn_8059C6E0_0000072C:
    cmpwi r3, 0x0
    ble lbl_fn_8059C6E0_00000740
    lwz r0, 0x4(r9)
    cmpw r3, r0
    bne lbl_fn_8059C6E0_0000075C
lbl_fn_8059C6E0_00000740:
    cmpwi r6, 0x0
    ble lbl_fn_8059C6E0_0000076C
    lwz r0, 0xac(r9)
    and r0, r6, r0
    cmpw r6, r0
    bne lbl_fn_8059C6E0_0000075C
    b lbl_fn_8059C6E0_0000076C
lbl_fn_8059C6E0_0000075C:
    addi r8, r8, 0x140
    addi r7, r7, 0x1
    bdnz lbl_fn_8059C6E0_00000680
    li r8, 0x0
lbl_fn_8059C6E0_0000076C:
    neg r0, r8
    or r0, r0, r8
    srwi r3, r0, 31
    blr
}

asm void fn_8059C804(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    li r4, 0xa
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80232B7C
    lwz r0, 0x48(r31)
    li r3, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8059C804_000007C4
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8059C804_000007C4
    li r3, 0x1
lbl_fn_8059C804_000007C4:
    cmpwi r3, 0x0
    beq lbl_fn_8059C804_000007D4
    addi r4, r30, 0x2858
    b lbl_fn_8059C804_000007D8
lbl_fn_8059C804_000007D4:
    addi r4, r30, 0x284c
lbl_fn_8059C804_000007D8:
    lfs f1, 0x1258(r31)
    li r3, -0x1
    lfs f2, lbl_808881FC
    li r0, 0x1
    lfs f0, lbl_808881F8
    addi r5, r31, 0xb0
    stfs f2, 0x20(r1)
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    stfs f2, 0x24(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059C8DC(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0xa
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8059C8EC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    li r4, 0xb
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80232B7C
    lfs f0, lbl_808881FC
    li r3, -0x1
    lfs f1, lbl_808881F8
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x2864
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
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
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059C990(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0xb
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8059C9A0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    li r4, 0xc
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80232B7C
    lwz r0, 0x48(r31)
    li r3, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_8059C9A0_00000960
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8059C9A0_00000960
    li r3, 0x1
lbl_fn_8059C9A0_00000960:
    cmpwi r3, 0x0
    beq lbl_fn_8059C9A0_00000970
    addi r4, r30, 0x287c
    b lbl_fn_8059C9A0_00000974
lbl_fn_8059C9A0_00000970:
    addi r4, r30, 0x2870
lbl_fn_8059C9A0_00000974:
    lfs f1, 0x1258(r31)
    li r3, -0x1
    lfs f2, lbl_808881FC
    li r0, 0x1
    lfs f0, lbl_808881F8
    addi r5, r31, 0xb0
    stfs f2, 0x20(r1)
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    stfs f2, 0x24(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059CA78(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0xc
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8059CA88(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    li r4, 0xd
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80232B7C
    lfs f1, 0x1258(r31)
    li r3, -0x1
    lfs f2, lbl_808881FC
    li r0, 0x1
    lfs f0, lbl_808881F8
    addi r4, r30, 0x2888
    stfs f2, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f2, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059CB30(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0xd
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8059CB40(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    li r4, 0xe
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80232B7C
    lfs f1, 0x1258(r31)
    li r3, -0x1
    lfs f2, lbl_808881FC
    li r0, 0x1
    lfs f0, lbl_808881F8
    addi r4, r30, 0x2894
    stfs f2, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f2, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059CBE8(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0xe
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8059CBF8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    li r4, 0xf
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80232B7C
    lfs f1, 0x1258(r31)
    li r3, -0x1
    lfs f2, lbl_808881FC
    li r0, 0x1
    lfs f0, lbl_808881F8
    addi r4, r30, 0x28ac
    stfs f2, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f2, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059CCA0(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0xf
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8059CCB0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_27
    lwz r3, 0x648(r4)
    mr r28, r4
    mr r29, r5
    mr r30, r6
    cmpwi r3, 0x0
    mr r31, r7
    beq lbl_fn_8059CCB0_00000ECC
    lwz r27, 0x274(r3)
    addi r3, r27, 0x8c
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8059CCB0_00000ECC
    lwz r0, 0xb8(r27)
    cmpwi r0, 0x1
    bne lbl_fn_8059CCB0_00000C88
    lfs f31, lbl_80888200
    b lbl_fn_8059CCB0_00000C8C
lbl_fn_8059CCB0_00000C88:
    lfs f31, lbl_808881F8
lbl_fn_8059CCB0_00000C8C:
    lfs f4, 0x8(r31)
    lfs f3, 0x4(r31)
    lfs f0, 0x0(r31)
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f0, f0, f31
    stfs f4, 0x2c(r1)
    stfs f0, 0x24(r1)
    stfs f3, 0x28(r1)
    lwz r3, 0x648(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8059CCB0_00000CD4
    lwz r4, 0x274(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8059CCB0_00000CD4
    lwz r0, 0x78(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8059CCB0_00000CDC
lbl_fn_8059CCB0_00000CD4:
    li r0, 0x0
    b lbl_fn_8059CCB0_00000D2C
lbl_fn_8059CCB0_00000CDC:
    lis r3, 0x1062
    lwz r4, 0x80(r4)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x196
    blt lbl_fn_8059CCB0_00000D10
    cmpwi r0, 0x19c
    ble lbl_fn_8059CCB0_00000D20
lbl_fn_8059CCB0_00000D10:
    cmpwi r0, 0x373
    blt lbl_fn_8059CCB0_00000D28
    cmpwi r0, 0x376
    bgt lbl_fn_8059CCB0_00000D28
lbl_fn_8059CCB0_00000D20:
    li r0, 0x1
    b lbl_fn_8059CCB0_00000D2C
lbl_fn_8059CCB0_00000D28:
    li r0, 0x0
lbl_fn_8059CCB0_00000D2C:
    cmpwi r0, 0x0
    beq lbl_fn_8059CCB0_00000D44
    lfs f3, lbl_80888204
    lfs f0, 0x28(r1)
    fmadds f0, f3, f31, f0
    stfs f0, 0x28(r1)
lbl_fn_8059CCB0_00000D44:
    mr r3, r28
    mr r4, r29
    bl fn_80232B7C
    lwz r6, 0x648(r28)
    li r4, 0x0
    lwz r3, lbl_8087F3C0
    li r5, -0x1
    addi r7, r6, 0x10
    fmr f1, f31
    stw r4, 0x8(r1)
    li r0, 0x1
    mr r4, r30
    addi r8, r1, 0x24
    stw r5, 0xc(r1)
    li r5, -0x1
    li r6, 0x3
    stw r0, 0x10(r1)
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    lwz r3, 0x64c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8059CCB0_00000ECC
    lwz r3, 0x274(r3)
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8059CCB0_00000DB8
    lfs f4, lbl_80888200
    b lbl_fn_8059CCB0_00000DBC
lbl_fn_8059CCB0_00000DB8:
    lfs f4, lbl_808881F8
lbl_fn_8059CCB0_00000DBC:
    lfs f0, 0x8(r31)
    addi r4, r1, 0x18
    lfs f3, 0x4(r31)
    addi r3, r1, 0x24
    fmuls f2, f0, f4
    lfs f0, 0x0(r31)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f2, 0x2c(r1)
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, 0x648(r28)
    stfs f2, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8059CCB0_00000E18
    lwz r4, 0x274(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8059CCB0_00000E18
    lwz r0, 0x78(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8059CCB0_00000E20
lbl_fn_8059CCB0_00000E18:
    li r0, 0x0
    b lbl_fn_8059CCB0_00000E70
lbl_fn_8059CCB0_00000E20:
    lis r3, 0x1062
    lwz r4, 0x80(r4)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x196
    blt lbl_fn_8059CCB0_00000E54
    cmpwi r0, 0x19c
    ble lbl_fn_8059CCB0_00000E64
lbl_fn_8059CCB0_00000E54:
    cmpwi r0, 0x373
    blt lbl_fn_8059CCB0_00000E6C
    cmpwi r0, 0x376
    bgt lbl_fn_8059CCB0_00000E6C
lbl_fn_8059CCB0_00000E64:
    li r0, 0x1
    b lbl_fn_8059CCB0_00000E70
lbl_fn_8059CCB0_00000E6C:
    li r0, 0x0
lbl_fn_8059CCB0_00000E70:
    cmpwi r0, 0x0
    beq lbl_fn_8059CCB0_00000E88
    lfs f3, lbl_80888204
    lfs f0, 0x28(r1)
    fmadds f0, f3, f4, f0
    stfs f0, 0x28(r1)
lbl_fn_8059CCB0_00000E88:
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    fmr f1, f4
    stw r3, 0xc(r1)
    li r0, 0x1
    mr r4, r30
    addi r8, r1, 0x24
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x3
    lwz r7, 0x64c(r28)
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    addi r7, r7, 0x10
    bl fn_8023A680
lbl_fn_8059CCB0_00000ECC:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8059CF74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_808881FC
    addi r6, r3, 0x28c4
    stw r0, 0x24(r1)
    addi r7, r1, 0x8
    lfs f0, lbl_80888208
    li r5, 0x10
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_8059CCB0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059CFB4(void)
{
    nofralloc
    cntlzw r0, r5
    lwz r3, lbl_8087F3C0
    li r5, 0x10
    srwi r6, r0, 5
    b fn_80239DAC
}

asm void fn_8059CFC8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_808881FC
    addi r6, r3, 0x28d0
    stw r0, 0x24(r1)
    addi r7, r1, 0x8
    lfs f0, lbl_8088820C
    li r5, 0x11
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_8059CCB0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059D008(void)
{
    nofralloc
    cntlzw r0, r5
    lwz r3, lbl_8087F3C0
    li r5, 0x11
    srwi r6, r0, 5
    b fn_80239DAC
}

asm void fn_8059D01C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_808881FC
    addi r6, r3, 0x28dc
    stw r0, 0x24(r1)
    addi r7, r1, 0x8
    lfs f0, lbl_8088820C
    li r5, 0x12
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_8059CCB0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059D05C(void)
{
    nofralloc
    cntlzw r0, r5
    lwz r3, lbl_8087F3C0
    li r5, 0x12
    srwi r6, r0, 5
    b fn_80239DAC
}

asm void fn_8059D070(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_808881FC
    addi r6, r3, 0x28e8
    stw r0, 0x24(r1)
    addi r7, r1, 0x8
    lfs f0, lbl_8088820C
    li r5, 0x13
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_8059CCB0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059D0B0(void)
{
    nofralloc
    cntlzw r0, r5
    lwz r3, lbl_8087F3C0
    li r5, 0x13
    srwi r6, r0, 5
    b fn_80239DAC
}

asm void fn_8059D0C4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    li r4, 0x14
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80232B7C
    lfs f1, 0x1258(r31)
    li r3, -0x1
    lfs f2, lbl_808881FC
    li r0, 0x1
    lfs f0, lbl_808881F8
    addi r4, r30, 0x28f4
    stfs f2, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f2, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059D16C(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x14
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8059D17C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_fn_8059D17C_0000111C:
    cmplwi r29, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_8059D17C_00001130
    li r31, 0x0
    b lbl_fn_8059D17C_00001138
lbl_fn_8059D17C_00001130:
    add r3, r0, r30
    addi r31, r3, 0x48
lbl_fn_8059D17C_00001138:
    cmpwi r31, 0x0
    beq lbl_fn_8059D17C_000011B4
    lwz r0, 0x4(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059D17C_00001160
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8059D17C_00001160
    li r3, 0x1
lbl_fn_8059D17C_00001160:
    cmpwi r3, 0x0
    beq lbl_fn_8059D17C_000011B4
    lwz r3, 0x8(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059D17C_00001180
    cmpwi r0, 0x0
    bne lbl_fn_8059D17C_000011B4
lbl_fn_8059D17C_00001180:
    mr r3, r31
    bl fn_8059A268
    cmpwi r3, 0x0
    bne lbl_fn_8059D17C_00001198
    lwz r3, 0x4(r31)
    b lbl_fn_8059D17C_0000119C
lbl_fn_8059D17C_00001198:
    addi r3, r31, 0x80
lbl_fn_8059D17C_0000119C:
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_8059D17C_000011B4
    mr r3, r31
    addi r4, r28, 0x28a0
    bl fn_8059A0B8
lbl_fn_8059D17C_000011B4:
    addi r29, r29, 0x1
    addi r30, r30, 0x140
    cmplwi r29, 0x20
    blt lbl_fn_8059D17C_0000111C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059D26C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
lbl_fn_8059D26C_00001208:
    cmplwi r30, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_8059D26C_0000121C
    li r3, 0x0
    b lbl_fn_8059D26C_00001224
lbl_fn_8059D26C_0000121C:
    add r3, r0, r31
    addi r3, r3, 0x48
lbl_fn_8059D26C_00001224:
    cmpwi r3, 0x0
    beq lbl_fn_8059D26C_0000125C
    lwz r0, 0x4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059D26C_0000124C
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059D26C_0000124C
    li r4, 0x1
lbl_fn_8059D26C_0000124C:
    cmpwi r4, 0x0
    beq lbl_fn_8059D26C_0000125C
    mr r4, r29
    bl fn_8059A200
lbl_fn_8059D26C_0000125C:
    addi r30, r30, 0x1
    addi r31, r31, 0x140
    cmplwi r30, 0x20
    blt lbl_fn_8059D26C_00001208
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059D310(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r3
    mr r26, r4
    addi r30, r3, 0x48
    li r29, 0x0
    li r28, 0x0
lbl_fn_8059D310_000012AC:
    lwz r3, 0x50(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8059D310_00001300
    mr r4, r26
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_8059D310_00001300
    lwz r27, 0x4c(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8059D310_00001300
    mr r3, r30
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_8059D310_000012EC
    addi r27, r30, 0x80
lbl_fn_8059D310_000012EC:
    mr r3, r27
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_8059D310_00001300
    addi r29, r29, 0x1
lbl_fn_8059D310_00001300:
    addi r28, r28, 0x1
    addi r30, r30, 0x140
    cmpwi r28, 0x20
    addi r31, r31, 0x140
    blt lbl_fn_8059D310_000012AC
    mr r3, r29
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059D3B4(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    bl _savegpr_18
    cmpwi r4, 0x0
    mr r22, r3
    mr r23, r4
    beq lbl_fn_8059D3B4_00001724
    li r26, 0x0
    lfs f30, lbl_80888210
    lfs f31, lbl_808881F8
    mr r31, r26
    mr r20, r26
    addi r30, r1, 0x7c
    addi r29, r1, 0x70
    addi r28, r1, 0x60
    addi r27, r1, 0x40
    li r21, 0x0
    li r18, -0x1
    li r19, 0x1
lbl_fn_8059D3B4_00001398:
    add r4, r22, r21
    li r3, 0x0
    lwz r0, 0x4c(r4)
    addi r25, r4, 0x48
    cmpwi r0, 0x0
    beq lbl_fn_8059D3B4_000013C0
    lwz r0, 0x0(r25)
    cmpwi r0, 0x3
    beq lbl_fn_8059D3B4_000013C0
    li r3, 0x1
lbl_fn_8059D3B4_000013C0:
    cmpwi r3, 0x0
    beq lbl_fn_8059D3B4_00001714
    lwz r3, 0x8(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8059D3B4_00001714
    mr r4, r23
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_8059D3B4_00001714
    mr r3, r25
    bl fn_8059A268
    cmpwi r3, 0x0
    bne lbl_fn_8059D3B4_00001714
    lwz r24, 0x4(r25)
    mr r3, r24
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_8059D3B4_000015CC
    lwz r4, 0x90(r24)
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_8059D3B4_000015CC
    rlwinm r3, r4, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    beq lbl_fn_8059D3B4_000015CC
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8059D3B4_000015CC
    psq_l f1, 0x528(r23), 0, 0
    mr r3, r30
    lfs f2, 0x530(r23)
    mr r4, r29
    stfs f2, 0x84(r1)
    li r5, 0x0
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x534(r23), 0, 0
    lfs f2, 0x53c(r23)
    stfs f2, 0x78(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_8059A29C
    cmpwi r3, 0x0
    beq lbl_fn_8059D3B4_00001714
    lfs f2, 0x84(r1)
    addic. r0, r25, 0x80
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x10(r25), 0, 0
    stfs f2, 0x18(r25)
    lfs f2, 0x78(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x1c(r25), 0, 0
    stfs f2, 0x24(r25)
    beq lbl_fn_8059D3B4_000014A0
    lfs f0, 0xd8(r25)
    stfs f0, 0x5c(r25)
lbl_fn_8059D3B4_000014A0:
    stw r19, 0x13c(r25)
    mr r3, r25
    li r4, 0x0
    stw r31, 0x60(r25)
    stw r23, 0x8(r25)
    bl fn_80599FB8
    fmr f29, f1
    psq_l f1, 0x10(r25), 0, 0
    lfs f2, 0x18(r25)
    mr r5, r28
    stfs f2, 0x68(r1)
    addi r3, r1, 0x50
    psq_st f1, 0x0(r28), 0, 0
    lwz r4, lbl_8087F558
    stfs f30, 0x6c(r1)
    bl fn_80491DF8
    lwz r5, 0x4(r25)
    mr r4, r25
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    lwz r5, 0x4(r5)
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stfs f31, 0x20(r1)
    fmr f1, f29
    addi r4, r22, 0x2900
    addi r7, r25, 0x10
    stfs f31, 0x24(r1)
    addi r8, r25, 0x1c
    addi r9, r1, 0x20
    stfs f31, 0x28(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x2c(r1)
    stw r18, 0x8(r1)
    stw r19, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r4, 0x4(r25)
    mr r3, r25
    lwz r4, 0x4(r4)
    bl fn_80232B7C
    mr r3, r24
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_8059D3B4_00001598
    stw r18, 0x8(r1)
    fmr f1, f29
    addi r4, r22, 0x2918
    addi r7, r25, 0x10
    stw r19, 0xc(r1)
    addi r8, r25, 0x1c
    addi r9, r1, 0x50
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    b lbl_fn_8059D3B4_00001714
lbl_fn_8059D3B4_00001598:
    stw r18, 0x8(r1)
    fmr f1, f29
    addi r4, r22, 0x290c
    addi r7, r25, 0x10
    stw r19, 0xc(r1)
    addi r8, r25, 0x1c
    addi r9, r1, 0x50
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    b lbl_fn_8059D3B4_00001714
lbl_fn_8059D3B4_000015CC:
    mr r3, r24
    bl fn_8021A960
    cmpwi r3, 0x0
    bne lbl_fn_8059D3B4_000015EC
    mr r3, r24
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_8059D3B4_00001714
lbl_fn_8059D3B4_000015EC:
    stw r19, 0x13c(r25)
    mr r3, r25
    li r4, 0x0
    stw r20, 0x60(r25)
    stw r23, 0x8(r25)
    bl fn_80599FB8
    fmr f29, f1
    psq_l f1, 0x10(r25), 0, 0
    lfs f2, 0x18(r25)
    mr r5, r27
    stfs f2, 0x48(r1)
    addi r3, r1, 0x30
    psq_st f1, 0x0(r27), 0, 0
    lwz r4, lbl_8087F558
    stfs f30, 0x4c(r1)
    bl fn_80491DF8
    lwz r5, 0x4(r25)
    mr r4, r25
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    lwz r5, 0x4(r5)
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stfs f31, 0x10(r1)
    fmr f1, f29
    addi r4, r22, 0x2900
    addi r7, r25, 0x10
    stfs f31, 0x14(r1)
    addi r8, r25, 0x1c
    addi r9, r1, 0x10
    stfs f31, 0x18(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x1c(r1)
    stw r18, 0x8(r1)
    stw r19, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r4, 0x4(r25)
    mr r3, r25
    lwz r4, 0x4(r4)
    bl fn_80232B7C
    mr r3, r24
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_8059D3B4_000016E4
    stw r18, 0x8(r1)
    fmr f1, f29
    addi r4, r22, 0x2918
    addi r7, r25, 0x10
    stw r19, 0xc(r1)
    addi r8, r25, 0x1c
    addi r9, r1, 0x30
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    b lbl_fn_8059D3B4_00001714
lbl_fn_8059D3B4_000016E4:
    stw r18, 0x8(r1)
    fmr f1, f29
    addi r4, r22, 0x290c
    addi r7, r25, 0x10
    stw r19, 0xc(r1)
    addi r8, r25, 0x1c
    addi r9, r1, 0x30
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_8059D3B4_00001714:
    addi r26, r26, 0x1
    addi r21, r21, 0x140
    cmpwi r26, 0x20
    blt lbl_fn_8059D3B4_00001398
lbl_fn_8059D3B4_00001724:
    addi r11, r1, 0xc0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    bl _restgpr_18
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8059D7DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8059E220
    lis r4, lbl_80796BF0@ha
    addi r3, r31, 0x108
    addi r4, r4, lbl_80796BF0@l
    stw r4, 0x0(r31)
    bl fn_80716280
    li r0, 0x0
    stb r0, 0x188(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059D828(void)
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
    beq lbl_fn_8059D828_00001810
    lbz r0, 0x188(r3)
    lis r4, lbl_80796BF0@ha
    addi r4, r4, lbl_80796BF0@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8059D828_000017EC
    addi r3, r3, 0x14c
    bl fn_805FA390
    li r0, 0x0
    stb r0, 0x188(r30)
lbl_fn_8059D828_000017EC:
    mr r3, r30
    bl fn_8059E2F0
    mr r3, r30
    li r4, 0x0
    bl fn_8059E244
    cmpwi r31, 0x0
    ble lbl_fn_8059D828_00001810
    mr r3, r30
    bl dtor_80084684
lbl_fn_8059D828_00001810:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059D8B4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r4
    stw r29, 0x114(r1)
    mr r29, r3
    mr r3, r30
    bl fn_805F9EF0
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_fn_8059D8B4_00001884
    lis r3, lbl_807623A4@ha
    mr r6, r30
    addi r3, r3, lbl_807623A4@l
    li r4, 0x6b
    addi r5, r3, 0x41
    crclr 6
    bl fn_80724E90
    li r3, 0x0
    b lbl_fn_8059D8B4_000019A0
lbl_fn_8059D8B4_00001884:
    addi r4, r29, 0x14c
    bl fn_805FA200
    cmpwi r3, 0x0
    bne lbl_fn_8059D8B4_000018B8
    lis r3, lbl_807623A4@ha
    mr r6, r31
    addi r3, r3, lbl_807623A4@l
    li r4, 0x4e
    addi r5, r3, 0x18
    crclr 6
    bl fn_80724E90
    li r0, 0x0
    b lbl_fn_8059D8B4_000018F4
lbl_fn_8059D8B4_000018B8:
    li r0, 0x1
    stb r0, 0x188(r29)
    mr r3, r29
    bl fn_8059DC68
    cmpwi r3, 0x0
    bne lbl_fn_8059D8B4_000018F0
    lis r3, lbl_807623A4@ha
    li r4, 0x56
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x2d
    crclr 6
    bl fn_80724E90
    li r0, 0x0
    b lbl_fn_8059D8B4_000018F4
lbl_fn_8059D8B4_000018F0:
    li r0, 0x1
lbl_fn_8059D8B4_000018F4:
    cmpwi r0, 0x0
    bne lbl_fn_8059D8B4_00001904
    li r3, 0x0
    b lbl_fn_8059D8B4_000019A0
lbl_fn_8059D8B4_00001904:
    mr r3, r30
    bl strlen
    subic. r31, r3, 0x1
    addi r0, r31, 0x1
    add r3, r30, r31
    mtctr r0
    blt lbl_fn_8059D8B4_0000199C
lbl_fn_8059D8B4_00001920:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x2f
    beq lbl_fn_8059D8B4_00001938
    cmpwi r0, 0x5c
    bne lbl_fn_8059D8B4_00001990
lbl_fn_8059D8B4_00001938:
    cmpwi r31, 0x100
    blt lbl_fn_8059D8B4_00001958
    lis r3, lbl_807623A4@ha
    li r4, 0x7b
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x56
    crclr 6
    bl fn_80724DF0
lbl_fn_8059D8B4_00001958:
    cmpwi r31, 0x100
    blt lbl_fn_8059D8B4_00001968
    li r3, 0x0
    b lbl_fn_8059D8B4_000019A0
lbl_fn_8059D8B4_00001968:
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_8068236C
    addi r4, r1, 0x8
    li r0, 0x0
    stbx r0, r4, r31
    mr r3, r29
    bl fn_8059E740
    b lbl_fn_8059D8B4_0000199C
lbl_fn_8059D8B4_00001990:
    subi r31, r31, 0x1
    subi r3, r3, 0x1
    bdnz lbl_fn_8059D8B4_00001920
lbl_fn_8059D8B4_0000199C:
    li r3, 0x1
lbl_fn_8059D8B4_000019A0:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8059DA44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x188(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8059DA44_000019EC
    addi r3, r3, 0x14c
    bl fn_805FA390
    li r0, 0x0
    stb r0, 0x188(r31)
lbl_fn_8059DA44_000019EC:
    mr r3, r31
    bl fn_8059E2F0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
