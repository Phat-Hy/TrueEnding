#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004B338(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800C1FB4(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800DC6B4(void);
extern void fn_800EF73C(void);
extern void fn_80232B7C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A108(void);
extern void fn_8023A8B4(void);
extern void fn_8037309C(void);
extern void fn_804741C0(void);
extern void fn_8050FA80(void);
extern void fn_8051445C(void);
extern void fn_805144E8(void);
extern void fn_80514534(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80680770(void);
extern void fn_806827C4(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_8075B32C[];
extern u8 lbl_8075B510[];
extern u8 lbl_8077927C[];
extern u8 lbl_8078FD70[];
extern u8 lbl_8078FF60[];
extern u8 lbl_8078FFB0[];
extern u8 lbl_807933A8[];
extern u8 lbl_807C8FF0[];

/* Small data declarations */
extern u32 lbl_8087D918;
extern u32 lbl_8087D91C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F3C0;
extern u32 lbl_808877E0;
extern u32 lbl_808877E4;
extern u32 lbl_808877E8;
extern u32 lbl_808877EC;
extern u32 lbl_808877F0;
extern u32 lbl_808877F4;

/* Function declarations */
void fn_80512A38(void);
void fn_80512A88(void);
void fn_80512B18(void);
void fn_80512B48(void);
void fn_80512C74(void);
void fn_80512C78(void);
void fn_80512C7C(void);
void fn_80512C80(void);
void fn_80512C94(void);
void fn_80513024(void);
void fn_805134F8(void);
void fn_80513CFC(void);
void fn_80513D38(void);
void fn_80513EC8(void);
void fn_8051421C(void);
void fn_805143CC(void);

asm void fn_80512A38(void)
{
    nofralloc
    lfs f1, lbl_808877E4
    li r0, 0x0
    lfs f0, lbl_808877E8
    stw r0, 0x0(r3)
    stw r0, 0x8(r3)
    stb r0, 0x3c(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x24(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x10(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0xc(r3)
    sth r0, 0x4(r3)
    blr
}

asm void fn_80512A88(void)
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
    beq lbl_fn_80512A88_000000C4
    lis r4, fn_800EF73C@ha
    li r5, 0xc
    addi r4, r4, fn_800EF73C@l
    li r6, 0x8
    addi r3, r3, 0xd8
    bl fn_806959D8
    addic. r0, r30, 0xd4
    beq lbl_fn_80512A88_000000A8
    lwz r3, 0xd4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80512A88_000000A8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80512A88_000000A8:
    mr r3, r30
    li r4, 0x0
    bl fn_8050FA80
    cmpwi r31, 0x0
    ble lbl_fn_80512A88_000000C4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80512A88_000000C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80512B18(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0xd8
    stw r0, 0x14(r1)
    bl fn_80237874
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80512B48(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r23, lbl_8075B32C@ha
    lwz r31, 0x70(r4)
    mr r27, r3
    addi r23, r23, lbl_8075B32C@l
    b lbl_fn_80512B48_0000021C
lbl_fn_80512B48_00000138:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80512B48_00000218
    addi r30, r31, 0x5c
    li r29, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_80512B48_0000020C
lbl_fn_80512B48_00000158:
    lwz r4, lbl_808877E0
    mr r3, r30
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_80512B48_00000200
    li r28, 0x0
    li r24, 0x0
    b lbl_fn_80512B48_000001F4
lbl_fn_80512B48_00000178:
    lwz r4, 0x348(r31)
    add r3, r23, r25
    lwzx r22, r4, r24
    lwz r21, 0x8c(r22)
    bl fn_800DC6B4
    cmplw r21, r3
    bne lbl_fn_80512B48_000001EC
    lwz r0, 0xd4(r27)
    add r3, r0, r26
    stw r22, 0x8(r3)
    lwz r0, 0xd4(r27)
    add r4, r0, r26
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80512B48_000001B8
    b lbl_fn_80512B48_000001BC
lbl_fn_80512B48_000001B8:
    li r3, 0x0
lbl_fn_80512B48_000001BC:
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_l f1, 0x30(r3), 0, 0
    psq_st f1, 0xc(r4), 0, 0
    psq_st f2, 0x14(r4), 0, 0
    psq_st f3, 0x1c(r4), 0, 0
    psq_st f4, 0x24(r4), 0, 0
    psq_st f5, 0x2c(r4), 0, 0
    psq_st f6, 0x34(r4), 0, 0
lbl_fn_80512B48_000001EC:
    addi r28, r28, 0x1
    addi r24, r24, 0x4
lbl_fn_80512B48_000001F4:
    lwz r0, 0x344(r31)
    cmpw r28, r0
    blt lbl_fn_80512B48_00000178
lbl_fn_80512B48_00000200:
    addi r29, r29, 0x1
    addi r26, r26, 0x40
    addi r25, r25, 0x24
lbl_fn_80512B48_0000020C:
    lwz r0, 0x4c(r27)
    cmpw r29, r0
    blt lbl_fn_80512B48_00000158
lbl_fn_80512B48_00000218:
    lwz r31, 0x4c(r31)
lbl_fn_80512B48_0000021C:
    cmpwi r31, 0x0
    bne lbl_fn_80512B48_00000138
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80512C74(void)
{
    nofralloc
    blr
}

asm void fn_80512C78(void)
{
    nofralloc
    blr
}

asm void fn_80512C7C(void)
{
    nofralloc
    blr
}

asm void fn_80512C80(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087F3C0
    li r5, 0x1
    li r6, 0x0
    b fn_80239DAC
}

asm void fn_80512C94(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    li r5, 0x1
    li r6, 0x0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stfd f27, 0x140(r1)
    psq_st f27, 0x148(r1), 0, 0
    stfd f26, 0x130(r1)
    psq_st f26, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    mr r31, r3
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    mr r29, r4
    mr r4, r31
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r5, lbl_8087F3C0
    li r4, 0x1
    li r0, 0x6
    mr r3, r31
    stw r4, 0xbc(r5)
    li r4, 0x1
    lwz r5, lbl_8087F3C0
    stw r0, 0xb8(r5)
    bl fn_80232B7C
    lwz r3, 0xd4(r31)
    slwi r0, r29, 6
    add r6, r3, r0
    lwz r3, 0x8(r6)
    cmpwi r3, 0x0
    bne lbl_fn_80512C94_00000304
    li r0, 0x0
    b lbl_fn_80512C94_0000030C
lbl_fn_80512C94_00000304:
    lwz r3, 0x4(r3)
    addi r0, r3, 0x10
lbl_fn_80512C94_0000030C:
    cmpwi r0, 0x0
    beq lbl_fn_80512C94_00000578
    psq_l f1, 0xc(r6), 0, 0
    addi r4, r1, 0x74
    psq_l f2, 0x14(r6), 0, 0
    addi r3, r1, 0xf0
    psq_l f3, 0x1c(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x24(r6), 0, 0
    psq_l f5, 0x2c(r6), 0, 0
    psq_l f6, 0x34(r6), 0, 0
    lfs f7, lbl_808877E4
    psq_st f2, 0x8(r3), 0, 0
    lfs f0, lbl_808877E8
    psq_st f4, 0x18(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0xfc(r1)
    stfs f7, 0x10c(r1)
    stfs f7, 0x11c(r1)
    stfs f7, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f0, 0x7c(r1)
    bl fn_805F93C0
    lfs f2, 0x7c(r1)
    addi r30, r1, 0x74
    lfs f0, lbl_808877EC
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80512C94_000003B4
    lfs f7, 0x74(r1)
    lfs f0, lbl_808877E4
    fcmpo cr0, f7, f0
    ble lbl_fn_80512C94_000003A8
    lfs f0, lbl_808877F0
    b lbl_fn_80512C94_000003AC
lbl_fn_80512C94_000003A8:
    lfs f0, lbl_808877F4
lbl_fn_80512C94_000003AC:
    stfs f0, 0x24(r1)
    b lbl_fn_80512C94_000003C4
lbl_fn_80512C94_000003B4:
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_80512C94_000003C4:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xc0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808877E4
    addi r4, r1, 0x2c
    lfs f8, 0xc8(r1)
    mr r5, r4
    lfs f9, 0xc4(r1)
    addi r3, r1, 0x80
    lfs f10, 0xc0(r1)
    lfs f11, 0xd8(r1)
    lfs f12, 0xd4(r1)
    lfs f13, 0xd0(r1)
    lfs f31, 0xe8(r1)
    lfs f30, 0xe4(r1)
    lfs f29, 0xe0(r1)
    lfs f28, 0xec(r1)
    lfs f27, 0xdc(r1)
    lfs f26, 0xcc(r1)
    lfs f0, lbl_808877E8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
    stfs f7, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f10, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f8, 0x64(r1)
    stfs f10, 0x80(r1)
    stfs f9, 0x84(r1)
    stfs f8, 0x88(r1)
    stfs f13, 0x50(r1)
    stfs f12, 0x54(r1)
    stfs f11, 0x58(r1)
    stfs f13, 0x90(r1)
    stfs f12, 0x94(r1)
    stfs f11, 0x98(r1)
    stfs f29, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f29, 0xa0(r1)
    stfs f30, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f26, 0x38(r1)
    stfs f27, 0x3c(r1)
    stfs f28, 0x40(r1)
    stfs f26, 0x8c(r1)
    stfs f27, 0x9c(r1)
    stfs f28, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808877EC
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80512C94_000004E0
    lfs f7, 0x30(r1)
    lfs f0, lbl_808877E4
    fcmpo cr0, f7, f0
    ble lbl_fn_80512C94_000004D0
    lfs f0, lbl_808877F0
    b lbl_fn_80512C94_000004D4
lbl_fn_80512C94_000004D0:
    lfs f0, lbl_808877F4
lbl_fn_80512C94_000004D4:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_80512C94_000004F4
lbl_fn_80512C94_000004E0:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_80512C94_000004F4:
    addi r3, r1, 0x20
    lfs f2, lbl_808877E4
    psq_l f1, 0x0(r3), 0, 0
    slwi r5, r29, 6
    psq_st f1, 0x0(r30), 0, 0
    li r3, -0x1
    lfs f1, lbl_808877E8
    li r0, 0x1
    stfs f2, 0x7c(r1)
    addi r4, r31, 0xd8
    addi r7, r1, 0x68
    addi r8, r1, 0x74
    lwz r6, 0xd4(r31)
    addi r9, r1, 0x10
    stfs f2, 0x28(r1)
    li r10, -0x1
    add r5, r6, r5
    li r6, 0x0
    lfs f0, 0x38(r5)
    lfs f7, 0x28(r5)
    lfs f8, 0x18(r5)
    li r5, 0x0
    stfs f8, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80512C94_00000578:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1
    li r6, 0x1e
    bl fn_8023A108
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    stw r0, 0xbc(r3)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    lfd f28, 0x150(r1)
    psq_l f27, 0x148(r1), 0, 0
    lfd f27, 0x140(r1)
    psq_l f26, 0x138(r1), 0, 0
    lfd f26, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80513024(void)
{
    nofralloc
    stwu r1, -0x850(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x854(r1)
    li r0, 0x848
    stfd f31, 0x840(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x838
    stfd f30, 0x830(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x828
    stfd f29, 0x820(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0x818
    stfd f28, 0x810(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0x808
    stfd f27, 0x800(r1)
    psq_stx f27, r1, r0, 0, 0
    stfd f26, 0x7f0(r1)
    psq_st f26, 0x7f8(r1), 0, 0
    stw r31, 0x7ec(r1)
    mr r31, r5
    stw r30, 0x7e8(r1)
    mr r30, r3
    stw r29, 0x7e4(r1)
    bne lbl_fn_80513024_000006DC
    lwz r3, 0xd4(r3)
    lwz r4, 0x2c8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80513024_00000674
    lwz r0, 0x88(r4)
    clrlwi r0, r0, 1
    stw r0, 0x88(r4)
lbl_fn_80513024_00000674:
    lwz r3, 0x308(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80513024_0000068C
    lwz r0, 0x88(r3)
    clrlwi r0, r0, 1
    stw r0, 0x88(r3)
lbl_fn_80513024_0000068C:
    lwz r4, 0x48(r30)
    addi r3, r1, 0x120
    bl fn_805134F8
    lwz r5, lbl_8087EFA8
    addi r29, r1, 0x120
    lfs f0, 0x358(r1)
    addi r3, r29, 0x258
    stfs f0, 0x3c(r5)
    li r4, -0x1
    lfs f0, 0x35c(r1)
    stfs f0, 0x40(r5)
    lfs f0, 0x360(r1)
    stfs f0, 0x44(r5)
    lfs f0, 0x364(r1)
    stfs f0, 0x48(r5)
    bl fn_800C1FB4
    mr r3, r29
    li r4, -0x1
    bl fn_8004B338
    b lbl_fn_80513024_00000744
lbl_fn_80513024_000006DC:
    lwz r3, 0xd4(r3)
    lwz r5, 0x2c8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80513024_000006F8
    lwz r0, 0x88(r5)
    oris r0, r0, 0x8000
    stw r0, 0x88(r5)
lbl_fn_80513024_000006F8:
    lwz r3, 0x308(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80513024_00000710
    lwz r0, 0x88(r3)
    oris r0, r0, 0x8000
    stw r0, 0x88(r3)
lbl_fn_80513024_00000710:
    lis r3, lbl_807C8FF0@ha
    slwi r0, r4, 4
    addi r3, r3, lbl_807C8FF0@l
    lwz r4, lbl_8087EFA8
    lfsx f0, r3, r0
    add r3, r3, r0
    stfs f0, 0x3c(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x40(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x44(r4)
    lfs f0, 0xc(r3)
    stfs f0, 0x48(r4)
lbl_fn_80513024_00000744:
    lwz r3, 0x48(r30)
    lwz r0, 0x1354(r3)
    cmplwi r0, 0x1
    bgt lbl_fn_80513024_00000A4C
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x1
    li r6, 0x0
    bl fn_80239DAC
    lwz r5, lbl_8087F3C0
    li r4, 0x1
    li r0, 0x6
    mr r3, r30
    stw r4, 0xbc(r5)
    li r4, 0x1
    lwz r5, lbl_8087F3C0
    stw r0, 0xb8(r5)
    bl fn_80232B7C
    lwz r3, 0xd4(r30)
    slwi r0, r31, 6
    add r6, r3, r0
    lwz r3, 0x8(r6)
    cmpwi r3, 0x0
    bne lbl_fn_80513024_000007AC
    li r0, 0x0
    b lbl_fn_80513024_000007B4
lbl_fn_80513024_000007AC:
    lwz r3, 0x4(r3)
    addi r0, r3, 0x10
lbl_fn_80513024_000007B4:
    cmpwi r0, 0x0
    beq lbl_fn_80513024_00000A20
    psq_l f1, 0xc(r6), 0, 0
    addi r4, r1, 0x10
    psq_l f2, 0x14(r6), 0, 0
    addi r3, r1, 0x80
    psq_l f3, 0x1c(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x24(r6), 0, 0
    psq_l f5, 0x2c(r6), 0, 0
    psq_l f6, 0x34(r6), 0, 0
    lfs f7, lbl_808877E4
    psq_st f2, 0x8(r3), 0, 0
    lfs f0, lbl_808877E8
    psq_st f4, 0x18(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0x8c(r1)
    stfs f7, 0x9c(r1)
    stfs f7, 0xac(r1)
    stfs f7, 0x10(r1)
    stfs f7, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_805F93C0
    lfs f2, 0x18(r1)
    addi r29, r1, 0x10
    lfs f0, lbl_808877EC
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80513024_0000085C
    lfs f7, 0x10(r1)
    lfs f0, lbl_808877E4
    fcmpo cr0, f7, f0
    ble lbl_fn_80513024_00000850
    lfs f0, lbl_808877F0
    b lbl_fn_80513024_00000854
lbl_fn_80513024_00000850:
    lfs f0, lbl_808877F4
lbl_fn_80513024_00000854:
    stfs f0, 0x68(r1)
    b lbl_fn_80513024_0000086C
lbl_fn_80513024_0000085C:
    lfs f1, 0x10(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x68(r1)
lbl_fn_80513024_0000086C:
    lfs f0, 0x68(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808877E4
    addi r4, r1, 0x58
    lfs f26, 0xb8(r1)
    mr r5, r4
    lfs f27, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f28, 0xb0(r1)
    lfs f29, 0xc8(r1)
    lfs f30, 0xc4(r1)
    lfs f31, 0xc0(r1)
    lfs f13, 0xd8(r1)
    lfs f12, 0xd4(r1)
    lfs f11, 0xd0(r1)
    lfs f10, 0xdc(r1)
    lfs f9, 0xcc(r1)
    lfs f8, 0xbc(r1)
    lfs f0, lbl_808877E8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x18(r1)
    stfs f7, 0x110(r1)
    stfs f7, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f28, 0x28(r1)
    stfs f27, 0x2c(r1)
    stfs f26, 0x30(r1)
    stfs f28, 0xe0(r1)
    stfs f27, 0xe4(r1)
    stfs f26, 0xe8(r1)
    stfs f31, 0x34(r1)
    stfs f30, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f31, 0xf0(r1)
    stfs f30, 0xf4(r1)
    stfs f29, 0xf8(r1)
    stfs f11, 0x40(r1)
    stfs f12, 0x44(r1)
    stfs f13, 0x48(r1)
    stfs f11, 0x100(r1)
    stfs f12, 0x104(r1)
    stfs f13, 0x108(r1)
    stfs f8, 0x4c(r1)
    stfs f9, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xfc(r1)
    stfs f10, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x60(r1)
    bl fn_805F9750
    lfs f2, 0x60(r1)
    lfs f0, lbl_808877EC
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80513024_00000988
    lfs f7, 0x5c(r1)
    lfs f0, lbl_808877E4
    fcmpo cr0, f7, f0
    ble lbl_fn_80513024_00000978
    lfs f0, lbl_808877F0
    b lbl_fn_80513024_0000097C
lbl_fn_80513024_00000978:
    lfs f0, lbl_808877F4
lbl_fn_80513024_0000097C:
    fneg f0, f0
    stfs f0, 0x64(r1)
    b lbl_fn_80513024_0000099C
lbl_fn_80513024_00000988:
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x64(r1)
lbl_fn_80513024_0000099C:
    addi r3, r1, 0x64
    lfs f2, lbl_808877E4
    psq_l f1, 0x0(r3), 0, 0
    slwi r5, r31, 6
    psq_st f1, 0x0(r29), 0, 0
    li r3, -0x1
    lfs f1, lbl_808877E8
    li r0, 0x1
    stfs f2, 0x18(r1)
    addi r4, r30, 0xd8
    addi r7, r1, 0x1c
    addi r8, r1, 0x10
    lwz r6, 0xd4(r30)
    addi r9, r1, 0x70
    stfs f2, 0x6c(r1)
    li r10, -0x1
    add r5, r6, r5
    li r6, 0x0
    lfs f8, 0x38(r5)
    lfs f7, 0x28(r5)
    lfs f0, 0x18(r5)
    li r5, 0x0
    stfs f0, 0x1c(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80513024_00000A20:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x1
    li r6, 0x1e
    bl fn_8023A108
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    stw r0, 0xbc(r3)
    b lbl_fn_80513024_00000A60
lbl_fn_80513024_00000A4C:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x1
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_80513024_00000A60:
    li r0, 0x848
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x840(r1)
    li r0, 0x838
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x830(r1)
    li r0, 0x828
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x820(r1)
    li r0, 0x818
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0x810(r1)
    li r0, 0x808
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0x800(r1)
    psq_l f26, 0x7f8(r1), 0, 0
    lfd f26, 0x7f0(r1)
    lwz r31, 0x7ec(r1)
    lwz r30, 0x7e8(r1)
    lwz r0, 0x854(r1)
    lwz r29, 0x7e4(r1)
    mtlr r0
    addi r1, r1, 0x850
    blr
}

asm void fn_805134F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x468(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x46c(r4)
    stw r0, 0x4(r3)
    psq_l f1, 0x470(r4), 0, 0
    lfs f2, 0x478(r4)
    stfs f2, 0x10(r3)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x47c(r4), 0, 0
    lfs f2, 0x484(r4)
    stfs f2, 0x1c(r3)
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x488(r4), 0, 0
    lfs f2, 0x490(r4)
    stfs f2, 0x28(r3)
    psq_st f1, 0x20(r3), 0, 0
    psq_l f1, 0x494(r4), 0, 0
    lfs f2, 0x49c(r4)
    stfs f2, 0x34(r3)
    psq_st f1, 0x2c(r3), 0, 0
    lfs f0, 0x4a0(r4)
    stfs f0, 0x38(r3)
    lfs f0, 0x4a4(r4)
    stfs f0, 0x3c(r3)
    lfs f0, 0x4a8(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x4ac(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x4b0(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4b4(r4)
    stfs f0, 0x4c(r3)
    lfs f0, 0x4b8(r4)
    stfs f0, 0x50(r3)
    lfs f0, 0x4bc(r4)
    stfs f0, 0x54(r3)
    psq_l f1, 0x4c0(r4), 0, 0
    psq_l f2, 0x4c8(r4), 0, 0
    psq_l f3, 0x4d0(r4), 0, 0
    psq_l f4, 0x4d8(r4), 0, 0
    psq_l f5, 0x4e0(r4), 0, 0
    psq_l f6, 0x4e8(r4), 0, 0
    psq_st f6, 0x80(r3), 0, 0
    psq_st f1, 0x58(r3), 0, 0
    psq_st f2, 0x60(r3), 0, 0
    psq_st f3, 0x68(r3), 0, 0
    psq_st f4, 0x70(r3), 0, 0
    psq_st f5, 0x78(r3), 0, 0
    psq_l f1, 0x4f0(r4), 0, 0
    psq_l f2, 0x4f8(r4), 0, 0
    psq_l f3, 0x500(r4), 0, 0
    psq_l f4, 0x508(r4), 0, 0
    psq_l f5, 0x510(r4), 0, 0
    psq_l f6, 0x518(r4), 0, 0
    psq_l f7, 0x520(r4), 0, 0
    psq_l f8, 0x528(r4), 0, 0
    psq_st f8, 0xc0(r3), 0, 0
    psq_st f1, 0x88(r3), 0, 0
    psq_st f2, 0x90(r3), 0, 0
    psq_st f3, 0x98(r3), 0, 0
    psq_st f4, 0xa0(r3), 0, 0
    psq_st f5, 0xa8(r3), 0, 0
    psq_st f6, 0xb0(r3), 0, 0
    psq_st f7, 0xb8(r3), 0, 0
    lfs f0, 0x530(r4)
    stfs f0, 0xc8(r3)
    lfs f0, 0x534(r4)
    addi r6, r4, 0x568
    stfs f0, 0xcc(r3)
    addi r8, r3, 0x194
    addi r7, r6, 0x94
    addi r0, r3, 0x1f4
    psq_l f1, 0x538(r4), 0, 0
    psq_l f2, 0x540(r4), 0, 0
    psq_l f3, 0x548(r4), 0, 0
    psq_l f4, 0x550(r4), 0, 0
    psq_l f5, 0x558(r4), 0, 0
    psq_l f6, 0x560(r4), 0, 0
    psq_st f6, 0xf8(r3), 0, 0
    psq_st f1, 0xd0(r3), 0, 0
    psq_st f2, 0xd8(r3), 0, 0
    psq_st f3, 0xe0(r3), 0, 0
    psq_st f4, 0xe8(r3), 0, 0
    psq_st f5, 0xf0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x128(r3), 0, 0
    psq_st f1, 0x100(r3), 0, 0
    psq_st f2, 0x108(r3), 0, 0
    psq_st f3, 0x110(r3), 0, 0
    psq_st f4, 0x118(r3), 0, 0
    psq_st f5, 0x120(r3), 0, 0
    lwz r5, 0x598(r4)
    stw r5, 0x130(r3)
    lfs f0, 0x59c(r4)
    stfs f0, 0x134(r3)
    lfs f0, 0x5a0(r4)
    stfs f0, 0x138(r3)
    psq_l f1, 0x3c(r6), 0, 0
    lfs f2, 0x5ac(r4)
    stfs f2, 0x144(r3)
    psq_st f1, 0x13c(r3), 0, 0
    lfs f0, 0x5b0(r4)
    stfs f0, 0x148(r3)
    psq_l f1, 0x4c(r6), 0, 0
    lfs f2, 0x5bc(r4)
    stfs f2, 0x154(r3)
    psq_st f1, 0x14c(r3), 0, 0
    lfs f0, 0x5c0(r4)
    stfs f0, 0x158(r3)
    psq_l f1, 0x5c(r6), 0, 0
    lfs f2, 0x5cc(r4)
    stfs f2, 0x164(r3)
    psq_st f1, 0x15c(r3), 0, 0
    lfs f0, 0x5d0(r4)
    stfs f0, 0x168(r3)
    psq_l f1, 0x6c(r6), 0, 0
    lfs f2, 0x5dc(r4)
    stfs f2, 0x174(r3)
    psq_st f1, 0x16c(r3), 0, 0
    lfs f0, 0x5e0(r4)
    stfs f0, 0x178(r3)
    psq_l f1, 0x7c(r6), 0, 0
    lfs f2, 0x5ec(r4)
    stfs f2, 0x184(r3)
    psq_st f1, 0x17c(r3), 0, 0
    psq_l f1, 0x88(r6), 0, 0
    lfs f2, 0x5f8(r4)
    stfs f2, 0x190(r3)
    psq_st f1, 0x188(r3), 0, 0
lbl_fn_805134F8_00000CF4:
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x8(r8)
    lfs f0, 0xc(r7)
    addi r7, r7, 0x10
    stfs f0, 0xc(r8)
    addi r8, r8, 0x10
    cmplw r8, r0
    blt lbl_fn_805134F8_00000CF4
    lwz r0, 0x65c(r4)
    lis r6, lbl_8078FD70@ha
    stw r0, 0x1f4(r3)
    lis r5, lbl_8078FF60@ha
    addi r6, r6, lbl_8078FD70@l
    lwz r0, 0x660(r4)
    addi r5, r5, lbl_8078FF60@l
    stw r0, 0x1f8(r3)
    psq_l f1, 0x664(r4), 0, 0
    lfs f2, 0x66c(r4)
    stfs f2, 0x204(r3)
    psq_st f1, 0x1fc(r3), 0, 0
    psq_l f1, 0x670(r4), 0, 0
    lfs f2, 0x678(r4)
    stfs f2, 0x210(r3)
    psq_st f1, 0x208(r3), 0, 0
    lwz r0, 0x67c(r4)
    stw r0, 0x214(r3)
    lfs f0, 0x680(r4)
    stfs f0, 0x218(r3)
    lfs f0, 0x684(r4)
    stfs f0, 0x21c(r3)
    lfs f0, 0x688(r4)
    stfs f0, 0x220(r3)
    lfs f0, 0x68c(r4)
    stfs f0, 0x224(r3)
    lfs f0, 0x690(r4)
    stfs f0, 0x228(r3)
    lfs f0, 0x694(r4)
    stfs f0, 0x22c(r3)
    lfs f0, 0x698(r4)
    stfs f0, 0x230(r3)
    lfs f0, 0x69c(r4)
    stfs f0, 0x234(r3)
    lfs f0, 0x6a0(r4)
    stfs f0, 0x238(r3)
    lfs f0, 0x6a4(r4)
    stfs f0, 0x23c(r3)
    lfs f0, 0x6a8(r4)
    stfs f0, 0x240(r3)
    lfs f0, 0x6ac(r4)
    stfs f0, 0x244(r3)
    lfs f0, 0x6b0(r4)
    stfs f0, 0x248(r3)
    lfs f0, 0x6b4(r4)
    stfs f0, 0x24c(r3)
    lfs f0, 0x6b8(r4)
    stfs f0, 0x250(r3)
    lfs f0, 0x6bc(r4)
    stfs f0, 0x254(r3)
    stw r6, 0x258(r3)
    lwz r0, 0x6c4(r4)
    stw r0, 0x25c(r3)
    stw r5, 0x258(r3)
    lwz r0, 0x6c8(r4)
    stw r0, 0x260(r3)
    lfs f0, 0x6cc(r4)
    stfs f0, 0x264(r3)
    lfs f0, 0x6d0(r4)
    stfs f0, 0x268(r3)
    lfs f0, 0x6d4(r4)
    stfs f0, 0x26c(r3)
    lfs f0, 0x6d8(r4)
    stfs f0, 0x270(r3)
    lfs f0, 0x6dc(r4)
    stfs f0, 0x274(r3)
    lfs f0, 0x6e0(r4)
    stfs f0, 0x278(r3)
    lfs f0, 0x6e4(r4)
    stfs f0, 0x27c(r3)
    lfs f0, 0x6e8(r4)
    stfs f0, 0x280(r3)
    lfs f0, 0x6ec(r4)
    stfs f0, 0x284(r3)
    lfs f0, 0x6f0(r4)
    stfs f0, 0x288(r3)
    lfs f0, 0x6f4(r4)
    stfs f0, 0x28c(r3)
    lfs f0, 0x6f8(r4)
    addi r4, r4, 0x6fc
    stfs f0, 0x290(r3)
    addi r3, r3, 0x294
    bl fn_80513CFC
    addi r3, r30, 0x2b0
    addi r4, r31, 0x718
    bl fn_80513D38
    addi r3, r30, 0x2bc
    addi r4, r31, 0x724
    bl fn_80513EC8
    lwz r0, 0x730(r31)
    addi r3, r30, 0x2d0
    stw r0, 0x2c8(r30)
    addi r4, r31, 0x738
    lwz r0, 0x734(r31)
    stw r0, 0x2cc(r30)
    bl fn_8051421C
    lwz r0, 0x788(r31)
    addi r3, r30, 0x328
    stw r0, 0x320(r30)
    addi r4, r31, 0x790
    lwz r0, 0x78c(r31)
    stw r0, 0x324(r30)
    bl fn_8051421C
    lwz r0, 0x7e0(r31)
    addi r6, r31, 0x7e4
    stw r0, 0x378(r30)
    addi r5, r31, 0x814
    addi r3, r30, 0x3bc
    addi r4, r31, 0x824
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x3a4(r30), 0, 0
    psq_st f1, 0x37c(r30), 0, 0
    psq_st f2, 0x384(r30), 0, 0
    psq_st f3, 0x38c(r30), 0, 0
    psq_st f4, 0x394(r30), 0, 0
    psq_st f5, 0x39c(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x81c(r31)
    stfs f2, 0x3b4(r30)
    psq_st f1, 0x3ac(r30), 0, 0
    lfs f0, 0x820(r31)
    stfs f0, 0x3b8(r30)
    bl fn_805143CC
    lwz r0, 0x854(r31)
    addi r3, r30, 0x3f0
    stw r0, 0x3ec(r30)
    addi r4, r31, 0x858
    bl fn_8051445C
    lwz r0, 0x8a0(r31)
    addi r3, r30, 0x450
    stw r0, 0x438(r30)
    addi r4, r31, 0x8b8
    lwz r0, 0x8a4(r31)
    stw r0, 0x43c(r30)
    lwz r0, 0x8a8(r31)
    stw r0, 0x440(r30)
    lfs f0, 0x8ac(r31)
    stfs f0, 0x444(r30)
    lfs f0, 0x8b0(r31)
    stfs f0, 0x448(r30)
    lwz r0, 0x8b4(r31)
    stw r0, 0x44c(r30)
    bl fn_805144E8
    lwz r0, 0x8f4(r31)
    addi r3, r30, 0x490
    stw r0, 0x48c(r30)
    addi r4, r31, 0x8f8
    bl fn_80514534
    lwz r0, 0x920(r31)
    addi r3, r30, 0x4bc
    stw r0, 0x4b8(r30)
    addi r4, r31, 0x924
    bl fn_8037309C
    lwz r0, 0x974(r31)
    addi r3, r31, 0xa24
    stw r0, 0x50c(r30)
    lwz r0, 0x978(r31)
    stw r0, 0x510(r30)
    lwz r0, 0x97c(r31)
    stw r0, 0x514(r30)
    lwz r0, 0x980(r31)
    stw r0, 0x518(r30)
    lfs f0, 0x984(r31)
    stfs f0, 0x51c(r30)
    lfs f0, 0x988(r31)
    stfs f0, 0x520(r30)
    lfs f0, 0x98c(r31)
    stfs f0, 0x524(r30)
    lfs f0, 0x990(r31)
    stfs f0, 0x528(r30)
    lwz r0, 0x994(r31)
    stw r0, 0x52c(r30)
    lwz r0, 0x998(r31)
    stw r0, 0x530(r30)
    lfs f0, 0x99c(r31)
    stfs f0, 0x534(r30)
    lfs f0, 0x9a0(r31)
    stfs f0, 0x538(r30)
    lwz r0, 0x9a4(r31)
    stw r0, 0x53c(r30)
    lwz r0, 0x9a8(r31)
    stw r0, 0x540(r30)
    lwz r0, 0x9ac(r31)
    stw r0, 0x544(r30)
    lwz r0, 0x9b0(r31)
    stw r0, 0x548(r30)
    lwz r0, 0x9b4(r31)
    stw r0, 0x54c(r30)
    lfs f0, 0x9b8(r31)
    stfs f0, 0x550(r30)
    lfs f0, 0x9bc(r31)
    stfs f0, 0x554(r30)
    lfs f0, 0x9c0(r31)
    stfs f0, 0x558(r30)
    lfs f0, 0x9c4(r31)
    stfs f0, 0x55c(r30)
    lwz r4, 0x9c8(r31)
    lwz r0, 0x9cc(r31)
    stw r0, 0x564(r30)
    stw r4, 0x560(r30)
    lwz r4, 0x9d0(r31)
    lwz r0, 0x9d4(r31)
    stw r0, 0x56c(r30)
    stw r4, 0x568(r30)
    lwz r0, 0x9d8(r31)
    stw r0, 0x570(r30)
    lfs f0, 0x9dc(r31)
    stfs f0, 0x574(r30)
    lfs f0, 0x9e0(r31)
    stfs f0, 0x578(r30)
    lfs f0, 0x9e4(r31)
    stfs f0, 0x57c(r30)
    lfs f0, 0x9e8(r31)
    stfs f0, 0x580(r30)
    lfs f0, 0x9ec(r31)
    stfs f0, 0x584(r30)
    lfs f0, 0x9f0(r31)
    stfs f0, 0x588(r30)
    lfs f0, 0x9f4(r31)
    stfs f0, 0x58c(r30)
    lfs f0, 0x9f8(r31)
    stfs f0, 0x590(r30)
    lfs f0, 0x9fc(r31)
    stfs f0, 0x594(r30)
    lfs f0, 0xa00(r31)
    stfs f0, 0x598(r30)
    lfs f0, 0xa04(r31)
    stfs f0, 0x59c(r30)
    lfs f0, 0xa08(r31)
    stfs f0, 0x5a0(r30)
    lwz r4, 0xa0c(r31)
    lwz r0, 0xa10(r31)
    stw r0, 0x5a8(r30)
    stw r4, 0x5a4(r30)
    lwz r0, 0xa14(r31)
    stw r0, 0x5ac(r30)
    lwz r4, 0xa18(r31)
    lwz r0, 0xa1c(r31)
    stw r0, 0x5b4(r30)
    stw r4, 0x5b0(r30)
    lwz r0, 0xa20(r31)
    stw r0, 0x5b8(r30)
    lwz r0, 0xa24(r31)
    stw r0, 0x5bc(r30)
    lwz r0, 0xa28(r31)
    stw r0, 0x5c0(r30)
    lwz r0, 0x8(r3)
    addi r5, r31, 0xa70
    stw r0, 0x5c4(r30)
    addi r6, r31, 0xa80
    addi r7, r31, 0xa90
    addi r8, r31, 0xaa0
    lwz r0, 0xc(r3)
    addi r4, r31, 0xabc
    stw r0, 0x5c8(r30)
    lwz r0, 0x10(r3)
    stw r0, 0x5cc(r30)
    lwz r0, 0x14(r3)
    stw r0, 0x5d0(r30)
    lwz r0, 0x18(r3)
    stw r0, 0x5d4(r30)
    lfs f0, 0x1c(r3)
    stfs f0, 0x5d8(r30)
    lfs f0, 0x20(r3)
    stfs f0, 0x5dc(r30)
    lfs f0, 0x24(r3)
    stfs f0, 0x5e0(r30)
    lfs f0, 0x28(r3)
    stfs f0, 0x5e4(r30)
    lfs f0, 0x2c(r3)
    stfs f0, 0x5e8(r30)
    lfs f0, 0x30(r3)
    stfs f0, 0x5ec(r30)
    lfs f0, 0x34(r3)
    stfs f0, 0x5f0(r30)
    psq_l f1, 0x38(r3), 0, 0
    lfs f2, 0x40(r3)
    stfs f2, 0x5fc(r30)
    psq_st f1, 0x5f4(r30), 0, 0
    lfs f0, 0x44(r3)
    stfs f0, 0x600(r30)
    lwz r0, 0xa6c(r31)
    stw r0, 0x604(r30)
    psq_l f1, 0x0(r5), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x610(r30), 0, 0
    psq_st f1, 0x608(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f2, 0x620(r30), 0, 0
    psq_st f1, 0x618(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f2, 0x630(r30), 0, 0
    psq_st f1, 0x628(r30), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f2, 0x640(r30), 0, 0
    psq_st f1, 0x638(r30), 0, 0
    lwz r0, 0xab0(r31)
    stw r0, 0x648(r30)
    lwz r0, 0xab4(r31)
    stw r0, 0x64c(r30)
    lfs f0, 0xab8(r31)
    stfs f0, 0x650(r30)
    lwz r0, 0xabc(r31)
    stw r0, 0x654(r30)
    lwz r0, 0xac0(r31)
    stw r0, 0x658(r30)
    lfs f0, 0xac4(r31)
    stfs f0, 0x65c(r30)
    lfs f0, 0xac8(r31)
    stfs f0, 0x660(r30)
    lfs f0, 0xacc(r31)
    stfs f0, 0x664(r30)
    lfs f0, 0xad0(r31)
    stfs f0, 0x668(r30)
    lfs f0, 0xad4(r31)
    stfs f0, 0x66c(r30)
    psq_l f1, 0x1c(r4), 0, 0
    lfs f2, 0x24(r4)
    stfs f2, 0x678(r30)
    psq_st f1, 0x670(r30), 0, 0
    lwz r0, 0xae4(r31)
    stw r0, 0x67c(r30)
    lwz r0, 0xae8(r31)
    stw r0, 0x680(r30)
    lfs f0, 0xaec(r31)
    stfs f0, 0x684(r30)
    lwz r3, 0xaf0(r31)
    lwz r0, 0xaf4(r31)
    stw r0, 0x68c(r30)
    stw r3, 0x688(r30)
    lwz r3, 0xaf8(r31)
    lwz r0, 0xafc(r31)
    stw r0, 0x694(r30)
    stw r3, 0x690(r30)
    lwz r3, 0xb00(r31)
    lwz r0, 0xb04(r31)
    stw r0, 0x69c(r30)
    stw r3, 0x698(r30)
    lwz r3, 0xb08(r31)
    lwz r0, 0xb0c(r31)
    stw r0, 0x6a4(r30)
    stw r3, 0x6a0(r30)
    lfs f0, 0xb10(r31)
    stfs f0, 0x6a8(r30)
    lfs f0, 0xb14(r31)
    stfs f0, 0x6ac(r30)
    lwz r0, 0xb18(r31)
    stw r0, 0x6b0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80513CFC(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    lfs f5, 0x4(r4)
    lfs f4, 0x8(r4)
    lfs f3, 0xc(r4)
    lfs f2, 0x10(r4)
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    stw r0, 0x0(r3)
    stfs f5, 0x4(r3)
    stfs f4, 0x8(r3)
    stfs f3, 0xc(r3)
    stfs f2, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    blr
}

asm void fn_80513D38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x4(r4)
    li r5, 0x0
    lwz r30, 0x0(r4)
    lis r4, 0x7878
    mulli r0, r0, 0x44
    stw r5, 0x0(r3)
    addi r4, r4, 0x7879
    stw r5, 0x4(r3)
    mr r29, r3
    add r31, r30, r0
    subf r0, r30, r31
    stw r5, 0x8(r3)
    mulhw r0, r4, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add. r27, r0, r3
    beq lbl_fn_80513D38_00001474
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r27, r0
    ble lbl_fn_80513D38_0000138C
    lis r4, lbl_8075B510@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075B510@l
    addi r3, r3, __files@l
    addi r4, r4, 0x21
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80513D38_0000138C:
    mulli r3, r27, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80513D38_000013C0
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80513D38_000013C0:
    lwz r0, 0x4(r29)
    stw r28, 0x0(r29)
    mulli r0, r0, 0x44
    stw r27, 0x8(r29)
    add r4, r28, r0
    b lbl_fn_80513D38_0000146C
lbl_fn_80513D38_000013D8:
    cmpwi r4, 0x0
    beq lbl_fn_80513D38_00001458
    lwz r0, 0x0(r30)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r30)
    psq_l f1, 0x8(r30), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lwz r0, 0x20(r30)
    stw r0, 0x20(r4)
    lfs f0, 0x24(r30)
    stfs f0, 0x24(r4)
    lfs f0, 0x28(r30)
    stfs f0, 0x28(r4)
    lfs f0, 0x2c(r30)
    stfs f0, 0x2c(r4)
    lfs f0, 0x30(r30)
    stfs f0, 0x30(r4)
    lfs f0, 0x34(r30)
    stfs f0, 0x34(r4)
    lfs f0, 0x38(r30)
    stfs f0, 0x38(r4)
    lfs f0, 0x3c(r30)
    stfs f0, 0x3c(r4)
    lfs f0, 0x40(r30)
    stfs f0, 0x40(r4)
lbl_fn_80513D38_00001458:
    lwz r3, 0x4(r29)
    addi r30, r30, 0x44
    addi r4, r4, 0x44
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
lbl_fn_80513D38_0000146C:
    cmplw r30, r31
    bne lbl_fn_80513D38_000013D8
lbl_fn_80513D38_00001474:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80513EC8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x4(r4)
    li r5, 0x0
    lwz r30, 0x0(r4)
    lis r4, 0x1062
    mulli r0, r0, 0x1f4
    stw r5, 0x0(r3)
    addi r4, r4, 0x4dd3
    stw r5, 0x4(r3)
    mr r29, r3
    add r31, r30, r0
    subf r0, r30, r31
    stw r5, 0x8(r3)
    mulhw r0, r4, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add. r27, r0, r3
    beq lbl_fn_80513EC8_000017C8
    lis r3, 0x83
    addi r0, r3, 0x126e
    cmplw r27, r0
    ble lbl_fn_80513EC8_0000151C
    lis r4, lbl_8075B510@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8075B510@l
    addi r3, r3, __files@l
    addi r4, r4, 0x21
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80513EC8_0000151C:
    mulli r3, r27, 0x1f4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80513EC8_00001550
    lis r3, __files@ha
    lis r4, lbl_807933A8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807933A8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80513EC8_00001550:
    lwz r0, 0x4(r29)
    stw r28, 0x0(r29)
    mulli r0, r0, 0x1f4
    stw r27, 0x8(r29)
    add r4, r28, r0
    b lbl_fn_80513EC8_000017C0
lbl_fn_80513EC8_00001568:
    cmpwi r4, 0x0
    beq lbl_fn_80513EC8_000017AC
    lwz r0, 0x0(r30)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r4)
    lfs f2, 0x10(r30)
    psq_l f1, 0x8(r30), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x14(r4), 0, 0
    stfs f2, 0x1c(r4)
    lfs f2, 0x28(r30)
    psq_l f1, 0x20(r30), 0, 0
    psq_st f1, 0x20(r4), 0, 0
    stfs f2, 0x28(r4)
    lfs f2, 0x34(r30)
    psq_l f1, 0x2c(r30), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x34(r4)
    lfs f0, 0x38(r30)
    stfs f0, 0x38(r4)
    lfs f0, 0x3c(r30)
    stfs f0, 0x3c(r4)
    lfs f0, 0x40(r30)
    stfs f0, 0x40(r4)
    lfs f0, 0x44(r30)
    stfs f0, 0x44(r4)
    lfs f0, 0x48(r30)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r30)
    stfs f0, 0x4c(r4)
    lfs f0, 0x50(r30)
    stfs f0, 0x50(r4)
    lfs f0, 0x54(r30)
    stfs f0, 0x54(r4)
    psq_l f2, 0x60(r30), 0, 0
    psq_l f3, 0x68(r30), 0, 0
    psq_l f4, 0x70(r30), 0, 0
    psq_l f5, 0x78(r30), 0, 0
    psq_l f6, 0x80(r30), 0, 0
    psq_l f1, 0x58(r30), 0, 0
    psq_st f1, 0x58(r4), 0, 0
    psq_st f2, 0x60(r4), 0, 0
    psq_st f3, 0x68(r4), 0, 0
    psq_st f4, 0x70(r4), 0, 0
    psq_st f5, 0x78(r4), 0, 0
    psq_st f6, 0x80(r4), 0, 0
    psq_l f2, 0x90(r30), 0, 0
    psq_l f3, 0x98(r30), 0, 0
    psq_l f4, 0xa0(r30), 0, 0
    psq_l f5, 0xa8(r30), 0, 0
    psq_l f6, 0xb0(r30), 0, 0
    psq_l f7, 0xb8(r30), 0, 0
    psq_l f8, 0xc0(r30), 0, 0
    psq_l f1, 0x88(r30), 0, 0
    psq_st f1, 0x88(r4), 0, 0
    psq_st f2, 0x90(r4), 0, 0
    psq_st f3, 0x98(r4), 0, 0
    psq_st f4, 0xa0(r4), 0, 0
    psq_st f5, 0xa8(r4), 0, 0
    psq_st f6, 0xb0(r4), 0, 0
    psq_st f7, 0xb8(r4), 0, 0
    psq_st f8, 0xc0(r4), 0, 0
    lfs f0, 0xc8(r30)
    stfs f0, 0xc8(r4)
    lfs f0, 0xcc(r30)
    stfs f0, 0xcc(r4)
    psq_l f2, 0xd8(r30), 0, 0
    psq_l f3, 0xe0(r30), 0, 0
    psq_l f4, 0xe8(r30), 0, 0
    psq_l f5, 0xf0(r30), 0, 0
    psq_l f6, 0xf8(r30), 0, 0
    psq_l f1, 0xd0(r30), 0, 0
    psq_st f1, 0xd0(r4), 0, 0
    psq_st f2, 0xd8(r4), 0, 0
    psq_st f3, 0xe0(r4), 0, 0
    psq_st f4, 0xe8(r4), 0, 0
    psq_st f5, 0xf0(r4), 0, 0
    psq_st f6, 0xf8(r4), 0, 0
    psq_l f2, 0x108(r30), 0, 0
    psq_l f3, 0x110(r30), 0, 0
    psq_l f4, 0x118(r30), 0, 0
    psq_l f5, 0x120(r30), 0, 0
    psq_l f6, 0x128(r30), 0, 0
    psq_l f1, 0x100(r30), 0, 0
    psq_st f1, 0x100(r4), 0, 0
    psq_st f2, 0x108(r4), 0, 0
    psq_st f3, 0x110(r4), 0, 0
    psq_st f4, 0x118(r4), 0, 0
    psq_st f5, 0x120(r4), 0, 0
    psq_st f6, 0x128(r4), 0, 0
    lwz r0, 0x130(r30)
    addi r5, r4, 0x194
    stw r0, 0x130(r4)
    addi r3, r30, 0x194
    addi r0, r4, 0x1f4
    lfs f0, 0x134(r30)
    stfs f0, 0x134(r4)
    lfs f0, 0x138(r30)
    stfs f0, 0x138(r4)
    lfs f2, 0x144(r30)
    psq_l f1, 0x13c(r30), 0, 0
    psq_st f1, 0x13c(r4), 0, 0
    stfs f2, 0x144(r4)
    lfs f0, 0x148(r30)
    stfs f0, 0x148(r4)
    lfs f2, 0x154(r30)
    psq_l f1, 0x14c(r30), 0, 0
    psq_st f1, 0x14c(r4), 0, 0
    stfs f2, 0x154(r4)
    lfs f0, 0x158(r30)
    stfs f0, 0x158(r4)
    lfs f2, 0x164(r30)
    psq_l f1, 0x15c(r30), 0, 0
    psq_st f1, 0x15c(r4), 0, 0
    stfs f2, 0x164(r4)
    lfs f0, 0x168(r30)
    stfs f0, 0x168(r4)
    lfs f2, 0x174(r30)
    psq_l f1, 0x16c(r30), 0, 0
    psq_st f1, 0x16c(r4), 0, 0
    stfs f2, 0x174(r4)
    lfs f0, 0x178(r30)
    stfs f0, 0x178(r4)
    lfs f2, 0x184(r30)
    psq_l f1, 0x17c(r30), 0, 0
    psq_st f1, 0x17c(r4), 0, 0
    stfs f2, 0x184(r4)
    lfs f2, 0x190(r30)
    psq_l f1, 0x188(r30), 0, 0
    psq_st f1, 0x188(r4), 0, 0
    stfs f2, 0x190(r4)
lbl_fn_80513EC8_00001784:
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    lfs f0, 0xc(r3)
    addi r3, r3, 0x10
    stfs f0, 0xc(r5)
    addi r5, r5, 0x10
    cmplw r5, r0
    blt lbl_fn_80513EC8_00001784
lbl_fn_80513EC8_000017AC:
    lwz r3, 0x4(r29)
    addi r30, r30, 0x1f4
    addi r4, r4, 0x1f4
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
lbl_fn_80513EC8_000017C0:
    cmplw r30, r31
    bne lbl_fn_80513EC8_00001568
lbl_fn_80513EC8_000017C8:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8051421C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    psq_l f1, 0x4(r4), 0, 0
    li r0, 0x0
    psq_st f1, 0x4(r3), 0, 0
    mr r26, r3
    psq_l f1, 0xc(r4), 0, 0
    mr r27, r4
    psq_st f1, 0xc(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    lfs f2, 0x2c(r4)
    psq_st f1, 0x24(r3), 0, 0
    lwz r5, 0x0(r4)
    stfs f2, 0x2c(r3)
    lfs f3, 0x1c(r4)
    lfs f0, 0x20(r4)
    psq_l f1, 0x30(r4), 0, 0
    lfs f2, 0x38(r4)
    stw r5, 0x0(r3)
    lwz r28, 0x3c(r4)
    stfs f3, 0x1c(r3)
    stfs f0, 0x20(r3)
    psq_st f1, 0x30(r3), 0, 0
    stfs f2, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    b lbl_fn_8051421C_00001868
    bl fn_80695A50
lbl_fn_8051421C_00001868:
    cmpwi r28, 0x0
    stw r28, 0x3c(r26)
    beq lbl_fn_8051421C_000018B4
    mulli r3, r28, 0x30
    li r4, 0x0
    la r5, lbl_8087D91C
    la r6, lbl_8087D918
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    mr r7, r28
    li r6, 0x30
    addi r4, r4, fn_800D5738@l
    addi r5, r5, fn_800D5808@l
    bl fn_80695720
    stw r3, 0x40(r26)
    b lbl_fn_8051421C_000018BC
lbl_fn_8051421C_000018B4:
    li r0, 0x0
    stw r0, 0x40(r26)
lbl_fn_8051421C_000018BC:
    li r30, 0x0
    li r28, 0x0
    b lbl_fn_8051421C_00001954
lbl_fn_8051421C_000018C8:
    lwz r0, 0x40(r27)
    lwz r3, 0x40(r26)
    add r29, r0, r28
    lwz r0, 0x4(r29)
    add r31, r3, r28
    lwz r4, 0x0(r29)
    addi r3, r31, 0x20
    stw r4, 0x0(r31)
    addi r4, r29, 0x20
    stw r0, 0x4(r31)
    lwz r0, 0xc(r29)
    lwz r5, 0x8(r29)
    stw r5, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r0, 0x14(r29)
    lwz r5, 0x10(r29)
    stw r5, 0x10(r31)
    stw r0, 0x14(r31)
    lwz r0, 0x1c(r29)
    lwz r5, 0x18(r29)
    stw r5, 0x18(r31)
    stw r0, 0x1c(r31)
    bl fn_804741C0
    lwz r0, 0x28(r29)
    addi r28, r28, 0x30
    stw r0, 0x28(r31)
    addi r30, r30, 0x1
    lbz r0, 0x2c(r29)
    stb r0, 0x2c(r31)
    lbz r0, 0x2d(r29)
    stb r0, 0x2d(r31)
    lbz r0, 0x2e(r29)
    stb r0, 0x2e(r31)
    lbz r0, 0x2f(r29)
    stb r0, 0x2f(r31)
lbl_fn_8051421C_00001954:
    lwz r0, 0x3c(r26)
    cmplw r30, r0
    blt lbl_fn_8051421C_000018C8
    lwz r5, 0x44(r27)
    addi r11, r1, 0x20
    lwz r4, 0x48(r27)
    mr r3, r26
    lwz r0, 0x4c(r27)
    stw r5, 0x44(r26)
    stw r4, 0x48(r26)
    stw r0, 0x4c(r26)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805143CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r9, lbl_8078FFB0@ha
    lwz r12, 0x18(r4)
    addi r9, r9, lbl_8078FFB0@l
    stmw r26, 0x8(r1)
    lwz r26, 0x0(r4)
    lwz r27, 0x4(r4)
    lwz r28, 0x8(r4)
    lwz r29, 0xc(r4)
    lwz r30, 0x10(r4)
    lwz r31, 0x14(r4)
    lwz r11, 0x1c(r4)
    lwz r10, 0x24(r4)
    lwz r8, 0x28(r4)
    lbz r7, 0x2c(r4)
    lbz r6, 0x2d(r4)
    lbz r5, 0x2e(r4)
    lbz r0, 0x2f(r4)
    stw r26, 0x0(r3)
    stw r27, 0x4(r3)
    stw r28, 0x8(r3)
    stw r29, 0xc(r3)
    stw r30, 0x10(r3)
    stw r31, 0x14(r3)
    stw r12, 0x18(r3)
    stw r11, 0x1c(r3)
    stw r10, 0x24(r3)
    stw r9, 0x20(r3)
    stw r8, 0x28(r3)
    stb r7, 0x2c(r3)
    stb r6, 0x2d(r3)
    stb r5, 0x2e(r3)
    stb r0, 0x2f(r3)
    lmw r26, 0x8(r1)
    addi r1, r1, 0x20
    blr
}
