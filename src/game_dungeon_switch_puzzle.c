#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_19(void);
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800A58D0(void);
extern void fn_800BFAC8(void);
extern void fn_800DC6B4(void);
extern void fn_801333A4(void);
extern void fn_80160324(void);
extern void fn_8016DAB0(void);
extern void fn_801789D8(void);
extern void fn_801F48C8(void);
extern void fn_801F4C14(void);
extern void fn_801F6C80(void);
extern void fn_801F6D7C(void);
extern void fn_801F791C(void);
extern void fn_801F80A8(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801F8FE4(void);
extern void fn_801F90E0(void);
extern void fn_801F91DC(void);
extern void fn_801FECE0(void);
extern void fn_801FEE08(void);
extern void fn_8021A888(void);
extern void fn_805ADD40(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8078BE40[];
extern u8 jumptable_8078C4C4[];
extern u8 jumptable_8078C4E8[];
extern u8 jumptable_8078C50C[];
extern u8 jumptable_8078C530[];
extern u8 lbl_80750650[];
extern u8 lbl_807506A0[];
extern u8 lbl_8078C5FC[];
extern u8 lbl_8078C638[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F494;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9F8;
extern u32 lbl_808813D0;
extern u32 lbl_80885D58;
extern u32 lbl_80885D60;
extern u32 lbl_80885D9C;
extern u32 lbl_80885DAC;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E60;
extern u32 lbl_80885E70;
extern u32 lbl_80885E74;
extern u32 lbl_80885E90;
extern u32 lbl_80885EB0;
extern u32 lbl_80885EF0;
extern u32 lbl_80885EF4;
extern u32 lbl_80885EF8;

/* Function declarations */
void fn_803E2110(void);
void fn_803E2410(void);
void fn_803E2A30(void);
void fn_803E3050(void);
void fn_803E32EC(void);
void fn_803E3384(void);
void fn_803E3468(void);

asm void fn_803E2110(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r0, 0x48(r5)
    cmpwi r0, 0x3
    bne lbl_fn_803E2110_000002EC
    lwz r7, 0x310(r3)
    lwz r6, 0x314(r3)
    cmplw r7, r6
    bge lbl_fn_803E2110_0000005C
    addi r7, r7, 0x1
    lwz r6, 0x30c(r3)
    subi r0, r7, 0x1
    stw r7, 0x310(r3)
    slwi r0, r0, 3
    stwx r4, r6, r0
    add r3, r6, r0
    stw r5, 0x4(r3)
    b lbl_fn_803E2110_000002EC
lbl_fn_803E2110_0000005C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r6, r0
    cmplwi r0, 0x1
    bge lbl_fn_803E2110_00000094
    lis r4, lbl_807506A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807506A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x11d2
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803E2110_00000094:
    li r5, 0x0
    addi r4, r28, 0x314
    lis r3, 0x2000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x310(r28)
    lwz r31, 0x314(r28)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_803E2110_000000FC
    lis r4, lbl_807506A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807506A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x11d2
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803E2110_000000FC:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_803E2110_0000014C
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
    bge lbl_fn_803E2110_00000140
    addi r3, r1, 0x10
lbl_fn_803E2110_00000140:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_803E2110_00000190
lbl_fn_803E2110_0000014C:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_803E2110_00000188
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_803E2110_0000017C
    addi r3, r1, 0x10
lbl_fn_803E2110_0000017C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_803E2110_00000190
lbl_fn_803E2110_00000188:
    lis r3, 0x2000
    subi r31, r3, 0x1
lbl_fn_803E2110_00000190:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_803E2110_000001C4
    lis r4, lbl_807506A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807506A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x11d2
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803E2110_000001C4:
    slwi r3, r31, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_803E2110_000001F8
    lis r3, __files@ha
    lis r4, lbl_8078C5FC@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078C5FC@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803E2110_000001F8:
    lwz r0, 0x18(r1)
    stw r27, 0x14(r1)
    slwi r3, r0, 3
    stw r31, 0x1c(r1)
    lwz r0, 0x310(r28)
    stw r0, 0x24(r1)
    slwi r0, r0, 3
    add r0, r27, r0
    stwux r29, r3, r0
    stw r30, 0x4(r3)
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    slwi r0, r0, 3
    lwz r4, 0x310(r28)
    add r5, r3, r0
    lwz r7, 0x30c(r28)
    slwi r0, r4, 3
    add r6, r7, r0
    addi r0, r6, 0x7
    subf r0, r7, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_803E2110_0000029C
lbl_fn_803E2110_00000264:
    subic. r5, r5, 0x8
    subi r6, r6, 0x8
    beq lbl_fn_803E2110_00000280
    lwz r0, 0x4(r6)
    lwz r3, 0x0(r6)
    stw r3, 0x0(r5)
    stw r0, 0x4(r5)
lbl_fn_803E2110_00000280:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_803E2110_00000264
lbl_fn_803E2110_0000029C:
    li r4, 0x0
    stw r4, 0x310(r28)
    addic. r0, r1, 0x14
    lwz r3, 0x314(r28)
    lwz r0, 0x1c(r1)
    stw r0, 0x314(r28)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x30c(r28)
    stw r0, 0x30c(r28)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x310(r28)
    stw r4, 0x18(r1)
    beq lbl_fn_803E2110_000002EC
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803E2110_000002EC
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_803E2110_000002EC:
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803E2410(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_27
    lwz r0, 0x12a8(r4)
    mr r30, r3
    mr r31, r4
    extrwi. r0, r0, 1, 18
    beq lbl_fn_803E2410_00000344
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0xc0(r12)
    mtctr r12
    bctrl
    b lbl_fn_803E2410_00000908
lbl_fn_803E2410_00000344:
    lwz r7, 0x38(r4)
    li r5, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_803E2410_00000370
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_803E2410_00000370
    li r3, 0x1
lbl_fn_803E2410_00000370:
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_0000038C
    lwz r3, 0x7e0(r4)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_803E2410_0000038C
    li r0, 0x1
lbl_fn_803E2410_0000038C:
    cmpwi r0, 0x0
    beq lbl_fn_803E2410_000003C0
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803E2410_000003B4
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_803E2410_000003B4
    li r3, 0x1
lbl_fn_803E2410_000003B4:
    cmpwi r3, 0x0
    bne lbl_fn_803E2410_000003C0
    li r5, 0x1
lbl_fn_803E2410_000003C0:
    cmpwi r5, 0x0
    beq lbl_fn_803E2410_00000908
    lwz r5, 0x48(r4)
    cmpwi r5, 0x0
    beq lbl_fn_803E2410_000003E0
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803E2410_00000908
lbl_fn_803E2410_000003E0:
    lwz r0, 0x12a4(r4)
    extrwi r0, r0, 1, 5
    cmplwi r0, 0x1
    bne lbl_fn_803E2410_00000908
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_00000410
    cmpwi r5, 0x0
    beq lbl_fn_803E2410_00000410
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803E2410_00000908
lbl_fn_803E2410_00000410:
    mr r3, r31
    bl fn_80160324
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_0000060C
    lwz r29, 0x638(r31)
    cmpwi r29, 0x0
    beq lbl_fn_803E2410_00000908
    lwz r12, 0x0(r31)
    mr r4, r31
    lwz r0, 0xac(r29)
    addi r3, r1, 0xe0
    lwz r12, 0x58(r12)
    extrwi r28, r0, 1, 26
    mtctr r12
    bctrl
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0xd4
    addi r5, r1, 0xe0
    bl fn_800BFAC8
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803E2410_00000494
    lfs f3, lbl_80885EF0
    addi r4, r1, 0x80
    lfs f0, lbl_80885EF4
    addi r3, r1, 0xd4
    stfs f3, 0x80(r1)
    lfs f2, lbl_80885DFC
    stfs f0, 0x84(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
lbl_fn_803E2410_00000494:
    lfs f0, lbl_80885D58
    lfs f3, 0xdc(r1)
    fcmpo cr0, f0, f3
    bge lbl_fn_803E2410_00000908
    lfs f0, lbl_80885D60
    fcmpo cr0, f3, f0
    bge lbl_fn_803E2410_00000908
    mr r3, r31
    bl fn_8016DAB0
    lwz r0, 0x48(r31)
    mr r27, r3
    cmpwi r0, 0x2
    bne lbl_fn_803E2410_00000540
    mr r3, r29
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_0000050C
    addi r3, r1, 0xd4
    lfs f2, 0xdc(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x74
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r30
    mr r5, r27
    mr r8, r28
    stfs f2, 0x7c(r1)
    li r4, 0x2
    li r7, 0x1
    bl fn_803E2A30
    b lbl_fn_803E2410_00000908
lbl_fn_803E2410_0000050C:
    addi r3, r1, 0xd4
    lfs f2, 0xdc(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x68
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r30
    mr r5, r27
    li r4, 0x3
    stfs f2, 0x70(r1)
    li r7, 0x1
    li r8, 0x0
    bl fn_803E2A30
    b lbl_fn_803E2410_00000908
lbl_fn_803E2410_00000540:
    lwz r3, lbl_8087F8A0
    li r28, 0x1
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_00000564
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_803E2410_00000564
    li r28, 0x2
lbl_fn_803E2410_00000564:
    mr r3, r31
    li r4, 0x4fbf
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_00000580
    slwi r28, r28, 1
lbl_fn_803E2410_00000580:
    lwz r0, 0x7e8(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_803E2410_00000594
    slwi r28, r28, 1
lbl_fn_803E2410_00000594:
    mr r3, r29
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_000005D8
    addi r3, r1, 0xd4
    lfs f2, 0xdc(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x5c
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r30
    mr r5, r27
    mr r7, r28
    stfs f2, 0x64(r1)
    li r4, 0x0
    li r8, 0x0
    bl fn_803E2A30
    b lbl_fn_803E2410_00000908
lbl_fn_803E2410_000005D8:
    addi r3, r1, 0xd4
    lfs f2, 0xdc(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x50
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r30
    mr r5, r27
    mr r7, r28
    stfs f2, 0x58(r1)
    li r4, 0x1
    li r8, 0x0
    bl fn_803E2A30
    b lbl_fn_803E2410_00000908
lbl_fn_803E2410_0000060C:
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_00000764
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803E2410_00000764
    lwz r12, 0x0(r31)
    mr r4, r31
    addi r3, r1, 0xc8
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0xbc
    addi r5, r1, 0xc8
    bl fn_800BFAC8
    lfs f0, lbl_80885D58
    lfs f3, 0xc4(r1)
    fcmpo cr0, f0, f3
    bge lbl_fn_803E2410_00000908
    lfs f0, lbl_80885D60
    fcmpo cr0, f3, f0
    bge lbl_fn_803E2410_00000908
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    beq lbl_fn_803E2410_00000908
    lwz r3, lbl_8087F8A0
    li r27, 0x1
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_00000698
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_803E2410_00000698
    li r27, 0x2
lbl_fn_803E2410_00000698:
    mr r3, r31
    li r4, 0x4fbf
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_000006B4
    slwi r27, r27, 1
lbl_fn_803E2410_000006B4:
    lwz r0, 0x7e8(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_803E2410_000006C8
    slwi r27, r27, 1
lbl_fn_803E2410_000006C8:
    lwz r3, lbl_8087F9F8
    mr r4, r31
    bl fn_805ADD40
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_803E2410_00000908
    mr r3, r31
    bl fn_8016DAB0
    mr r29, r3
    mr r3, r28
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_00000730
    addi r3, r1, 0xbc
    lfs f2, 0xc4(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x44
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r30
    mr r5, r29
    mr r7, r27
    stfs f2, 0x4c(r1)
    li r4, 0x0
    li r8, 0x0
    bl fn_803E2A30
    b lbl_fn_803E2410_00000908
lbl_fn_803E2410_00000730:
    addi r3, r1, 0xbc
    lfs f2, 0xc4(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x38
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r30
    mr r5, r29
    mr r7, r27
    stfs f2, 0x40(r1)
    li r4, 0x1
    li r8, 0x0
    bl fn_803E2A30
    b lbl_fn_803E2410_00000908
lbl_fn_803E2410_00000764:
    lwz r3, 0x7e0(r31)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_803E2410_0000084C
    lfs f6, lbl_80885D58
    addi r3, r1, 0xa4
    lfs f5, lbl_80885E60
    addi r5, r1, 0xb0
    lfs f4, 0x530(r31)
    lfs f3, 0x52c(r31)
    lfs f0, 0x528(r31)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x2c(r1)
    fadds f0, f0, f6
    lwz r4, lbl_8087EFB4
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f0, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f4, 0xb8(r1)
    bl fn_800BFAC8
    lwz r0, lbl_8087F610
    li r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803E2410_000007DC
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803E2410_000007DC
    li r3, 0x0
lbl_fn_803E2410_000007DC:
    cmpwi r3, 0x0
    beq lbl_fn_803E2410_00000908
    lfs f0, lbl_80885D58
    lfs f3, 0xac(r1)
    fcmpo cr0, f0, f3
    bge lbl_fn_803E2410_00000908
    lfs f0, lbl_80885D60
    fcmpo cr0, f3, f0
    bge lbl_fn_803E2410_00000908
    addi r3, r31, 0x7d4
    li r4, 0x1
    bl fn_801333A4
    cmpwi r3, 0x0
    mr r5, r3
    bge lbl_fn_803E2410_0000081C
    li r5, 0x0
lbl_fn_803E2410_0000081C:
    addi r3, r1, 0xa4
    lfs f2, 0xac(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x20
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r30
    li r4, 0x4
    li r7, 0x1
    stfs f2, 0x28(r1)
    li r8, 0x0
    bl fn_803E2A30
    b lbl_fn_803E2410_00000908
lbl_fn_803E2410_0000084C:
    clrrwi r3, r3, 31
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_803E2410_00000908
    lfs f6, lbl_80885D58
    addi r3, r1, 0x8c
    lfs f5, lbl_80885E74
    addi r5, r1, 0x98
    lfs f4, 0x530(r31)
    lfs f3, 0x52c(r31)
    lfs f0, 0x528(r31)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x14(r1)
    fadds f0, f0, f6
    lwz r4, lbl_8087EFB4
    stfs f5, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f0, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f4, 0xa0(r1)
    bl fn_800BFAC8
    lfs f0, lbl_80885D58
    lfs f3, 0x94(r1)
    fcmpo cr0, f0, f3
    bge lbl_fn_803E2410_00000908
    lfs f0, lbl_80885D60
    fcmpo cr0, f3, f0
    bge lbl_fn_803E2410_00000908
    addi r3, r31, 0x7d4
    lis r4, 0x8000
    bl fn_801333A4
    cmpwi r3, 0x0
    mr r5, r3
    bge lbl_fn_803E2410_000008DC
    li r5, 0x0
lbl_fn_803E2410_000008DC:
    addi r3, r1, 0x8c
    lfs f2, 0x94(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r6, r1, 0x8
    psq_st f1, 0x0(r6), 0, 0
    mr r3, r30
    li r4, 0x5
    li r7, 0x1
    stfs f2, 0x10(r1)
    li r8, 0x0
    bl fn_803E2A30
lbl_fn_803E2410_00000908:
    addi r11, r1, 0x110
    bl _restgpr_27
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803E2A30(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_19
    lwz r0, 0xa8c(r3)
    mr r21, r3
    mr r22, r4
    mr r23, r5
    cmpwi r0, 0xa
    mr r24, r6
    mr r25, r7
    mr r26, r8
    bge lbl_fn_803E2A30_00000F28
    lwz r8, lbl_8087F494
    cmpwi r8, 0x0
    beq lbl_fn_803E2A30_00000988
    lis r4, 0x8889
    subi r4, r4, 0x7777
    mulhw r4, r4, r5
    add r4, r4, r5
    srawi r4, r4, 5
    srwi r7, r4, 31
    add r4, r4, r7
    addi r31, r4, 0x1
    b lbl_fn_803E2A30_000009A8
lbl_fn_803E2A30_00000988:
    lis r4, 0x8889
    subi r4, r4, 0x7777
    mulhw r4, r4, r5
    add r4, r4, r5
    srawi r4, r4, 4
    srwi r7, r4, 31
    add r4, r4, r7
    addi r31, r4, 0x1
lbl_fn_803E2A30_000009A8:
    cmpwi r8, 0x0
    beq lbl_fn_803E2A30_000009E4
    lis r4, 0x8889
    subi r4, r4, 0x7777
    mulhw r4, r4, r5
    add r4, r4, r5
    srawi r4, r4, 5
    srwi r7, r4, 31
    add r4, r4, r7
    mulli r4, r4, 0x3c
    subf r5, r4, r5
    srwi r4, r5, 31
    add r4, r4, r5
    srawi r30, r4, 1
    b lbl_fn_803E2A30_00000A08
lbl_fn_803E2A30_000009E4:
    lis r4, 0x8889
    subi r4, r4, 0x7777
    mulhw r4, r4, r5
    add r4, r4, r5
    srawi r4, r4, 4
    srwi r7, r4, 31
    add r4, r4, r7
    mulli r4, r4, 0x1e
    subf r30, r4, r5
lbl_fn_803E2A30_00000A08:
    slwi r0, r0, 2
    lis r20, lbl_807506A0@ha
    add r7, r3, r0
    li r5, 0x0
    lwz r29, 0xa90(r7)
    addi r20, r20, lbl_807506A0@l
    lwz r28, 0xab8(r7)
    addi r4, r20, 0x1215
    lwz r0, 0x38(r29)
    mr r3, r29
    lwz r27, 0xae0(r7)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
    lfs f1, 0x0(r6)
    bl fn_801F6D7C
    lfs f1, 0x4(r24)
    mr r3, r29
    addi r4, r20, 0x1215
    li r5, 0x1
    bl fn_801F6D7C
    lfs f1, 0x0(r24)
    mr r3, r28
    addi r4, r20, 0x1215
    li r5, 0x0
    bl fn_801F90E0
    lfs f1, 0x4(r24)
    mr r3, r28
    addi r4, r20, 0x1215
    li r5, 0x1
    bl fn_801F90E0
    lfs f1, 0x0(r24)
    mr r3, r27
    addi r4, r20, 0x1215
    li r5, 0x0
    bl fn_801F90E0
    lfs f1, 0x4(r24)
    mr r3, r27
    addi r4, r20, 0x1215
    li r5, 0x1
    bl fn_801F90E0
    cmpwi r23, 0x0
    bne lbl_fn_803E2A30_00000ACC
    lis r5, lbl_8078C638@ha
    mr r3, r29
    addi r5, r5, lbl_8078C638@l
    addi r4, r20, 0x1181
    addi r5, r5, 0x54
    bl fn_801F837C
    b lbl_fn_803E2A30_00000AE0
lbl_fn_803E2A30_00000ACC:
    mr r3, r29
    mr r5, r31
    addi r4, r20, 0x1181
    li r6, 0x0
    bl fn_801F8598
lbl_fn_803E2A30_00000AE0:
    cmpwi r31, 0xc
    li r20, 0x0
    li r24, 0x0
    li r0, 0xc
    bgt lbl_fn_803E2A30_00000AF8
    mr r0, r31
lbl_fn_803E2A30_00000AF8:
    cmpwi r0, 0x0
    bge lbl_fn_803E2A30_00000B08
    li r19, 0x0
    b lbl_fn_803E2A30_00000B18
lbl_fn_803E2A30_00000B08:
    cmpwi r31, 0xc
    li r19, 0xc
    bgt lbl_fn_803E2A30_00000B18
    mr r19, r31
lbl_fn_803E2A30_00000B18:
    cmpwi r22, 0x0
    bne lbl_fn_803E2A30_00000B54
    cmpwi r25, 0x1
    li r20, 0x1
    ble lbl_fn_803E2A30_00000B30
    li r24, 0x1
lbl_fn_803E2A30_00000B30:
    lfs f3, 0x2728(r21)
    lfs f2, 0x272c(r21)
    lfs f1, 0x2730(r21)
    lfs f0, 0x2734(r21)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_803E2A30_00000CB0
lbl_fn_803E2A30_00000B54:
    cmpwi r22, 0x1
    bne lbl_fn_803E2A30_00000B90
    cmpwi r25, 0x1
    li r20, 0x1
    ble lbl_fn_803E2A30_00000B6C
    li r24, 0x1
lbl_fn_803E2A30_00000B6C:
    lfs f3, 0x2738(r21)
    lfs f2, 0x273c(r21)
    lfs f1, 0x2740(r21)
    lfs f0, 0x2744(r21)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_803E2A30_00000CB0
lbl_fn_803E2A30_00000B90:
    cmpwi r22, 0x2
    bne lbl_fn_803E2A30_00000BEC
    cmpwi r26, 0x0
    li r20, 0x1
    beq lbl_fn_803E2A30_00000BC8
    lfs f3, 0x2768(r21)
    lfs f2, 0x276c(r21)
    lfs f1, 0x2770(r21)
    lfs f0, 0x2774(r21)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_803E2A30_00000CB0
lbl_fn_803E2A30_00000BC8:
    lfs f3, 0x2748(r21)
    lfs f2, 0x274c(r21)
    lfs f1, 0x2750(r21)
    lfs f0, 0x2754(r21)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_803E2A30_00000CB0
lbl_fn_803E2A30_00000BEC:
    cmpwi r22, 0x3
    bne lbl_fn_803E2A30_00000C1C
    lfs f3, 0x2758(r21)
    li r20, 0x1
    lfs f2, 0x275c(r21)
    lfs f1, 0x2760(r21)
    lfs f0, 0x2764(r21)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_803E2A30_00000CB0
lbl_fn_803E2A30_00000C1C:
    cmpwi r22, 0x4
    bne lbl_fn_803E2A30_00000C48
    lfs f3, 0x2778(r21)
    lfs f2, 0x277c(r21)
    lfs f1, 0x2780(r21)
    lfs f0, 0x2784(r21)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_803E2A30_00000CB0
lbl_fn_803E2A30_00000C48:
    cmpwi r22, 0x5
    bne lbl_fn_803E2A30_00000C80
    lfs f1, lbl_80885D58
    lfs f2, lbl_80885DAC
    lfs f0, lbl_80885D60
    stfs f2, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_803E2A30_00000CB0
lbl_fn_803E2A30_00000C80:
    lfs f3, lbl_80885DAC
    lfs f2, lbl_80885D9C
    lfs f1, lbl_80885D58
    lfs f0, lbl_80885D60
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
lbl_fn_803E2A30_00000CB0:
    lfs f3, 0x38(r1)
    lis r3, lbl_807506A0@ha
    addi r22, r3, lbl_807506A0@l
    lfs f2, 0x3c(r1)
    lfs f1, 0x40(r1)
    mr r3, r29
    lfs f0, 0x44(r1)
    addi r4, r22, 0x14b5
    stfs f3, 0x8(r1)
    addi r5, r1, 0x8
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_801F80A8
    lfs f1, lbl_80885D58
    mr r3, r29
    addi r4, r22, 0x14a0
    bl fn_801F6C80
    lfs f1, lbl_80885EB0
    mr r3, r29
    lfs f0, 0x38(r1)
    addi r4, r22, 0x14a6
    fmuls f1, f1, f0
    bl fn_801F6C80
    lfs f1, lbl_80885EB0
    mr r3, r29
    lfs f0, 0x3c(r1)
    addi r4, r22, 0x14ab
    fmuls f1, f1, f0
    bl fn_801F6C80
    lfs f1, lbl_80885EB0
    mr r3, r29
    lfs f0, 0x40(r1)
    addi r4, r22, 0x14b0
    fmuls f1, f1, f0
    bl fn_801F6C80
    li r31, 0x0
lbl_fn_803E2A30_00000D44:
    addi r3, r1, 0x48
    addi r4, r22, 0x14bf
    addi r5, r31, 0x1
    crclr 6
    bl sprintf
    cmpwi r20, 0x0
    mr r3, r29
    addi r4, r1, 0x48
    li r0, 0x0
    beq lbl_fn_803E2A30_00000D78
    cmpw r31, r19
    bge lbl_fn_803E2A30_00000D78
    li r0, 0x1
lbl_fn_803E2A30_00000D78:
    cmpwi r0, 0x0
    beq lbl_fn_803E2A30_00000D88
    lfs f1, lbl_80885EB0
    b lbl_fn_803E2A30_00000D8C
lbl_fn_803E2A30_00000D88:
    lfs f1, lbl_80885D58
lbl_fn_803E2A30_00000D8C:
    li r5, 0x0
    bl fn_801F791C
    addi r31, r31, 0x1
    cmpwi r31, 0xc
    blt lbl_fn_803E2A30_00000D44
    lis r4, lbl_807506A0@ha
    cmpwi r24, 0x0
    addi r4, r4, lbl_807506A0@l
    mr r3, r29
    addi r4, r4, 0x14cc
    beq lbl_fn_803E2A30_00000DC0
    lfs f1, lbl_80885EB0
    b lbl_fn_803E2A30_00000DC4
lbl_fn_803E2A30_00000DC0:
    lfs f1, lbl_80885D58
lbl_fn_803E2A30_00000DC4:
    li r5, 0x0
    bl fn_801F791C
    cmpwi r24, 0x0
    beq lbl_fn_803E2A30_00000E54
    lwz r0, 0x38(r28)
    lis r22, lbl_807506A0@ha
    addi r22, r22, lbl_807506A0@l
    lfs f1, lbl_80885D58
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
    mr r3, r28
    addi r4, r22, 0x14a0
    bl fn_801F8FE4
    lfs f1, lbl_80885EB0
    mr r3, r28
    lfs f0, 0x38(r1)
    addi r4, r22, 0x14a6
    fmuls f1, f1, f0
    bl fn_801F8FE4
    lfs f1, lbl_80885EB0
    mr r3, r28
    lfs f0, 0x3c(r1)
    addi r4, r22, 0x14ab
    fmuls f1, f1, f0
    bl fn_801F8FE4
    lfs f1, lbl_80885EB0
    mr r3, r28
    lfs f0, 0x40(r1)
    addi r4, r22, 0x14b0
    fmuls f1, f1, f0
    bl fn_801F8FE4
    mr r3, r28
    mr r5, r25
    addi r4, r22, 0x14d4
    li r6, 0x0
    bl fn_801F91DC
lbl_fn_803E2A30_00000E54:
    cmpwi r23, 0x0
    bne lbl_fn_803E2A30_00000E6C
    lfs f0, lbl_80885E74
    stfs f0, 0x50(r29)
    stfs f0, 0x50(r27)
    b lbl_fn_803E2A30_00000EA4
lbl_fn_803E2A30_00000E6C:
    xoris r3, r30, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80750650@ha
    stw r3, 0x8c(r1)
    lfd f2, lbl_80750650@l(r4)
    stw r0, 0x88(r1)
    lfd f0, 0x88(r1)
    stw r3, 0x94(r1)
    fsubs f1, f0, f2
    stw r0, 0x90(r1)
    lfd f0, 0x90(r1)
    stfs f1, 0x50(r29)
    fsubs f0, f0, f2
    stfs f0, 0x50(r27)
lbl_fn_803E2A30_00000EA4:
    lfs f1, 0x50(r28)
    lfs f0, lbl_80885E74
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803E2A30_00000EC0
    lfs f0, lbl_80885EF8
    stfs f0, 0x50(r28)
lbl_fn_803E2A30_00000EC0:
    cmpwi r26, 0x0
    beq lbl_fn_803E2A30_00000F1C
    lwz r0, 0x38(r27)
    lis r22, lbl_807506A0@ha
    addi r22, r22, lbl_807506A0@l
    lfs f1, lbl_80885D58
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r27)
    mr r3, r27
    addi r4, r22, 0x14a0
    bl fn_801F8FE4
    lfs f1, lbl_80885E70
    mr r3, r27
    addi r4, r22, 0x14a6
    bl fn_801F8FE4
    lfs f1, lbl_80885E60
    mr r3, r27
    addi r4, r22, 0x14ab
    bl fn_801F8FE4
    lfs f1, lbl_80885E90
    mr r3, r27
    addi r4, r22, 0x14b0
    bl fn_801F8FE4
lbl_fn_803E2A30_00000F1C:
    lwz r3, 0xa8c(r21)
    addi r0, r3, 0x1
    stw r0, 0xa8c(r21)
lbl_fn_803E2A30_00000F28:
    addi r11, r1, 0xd0
    bl _restgpr_19
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_803E3050(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    fmr f3, f1
    addi r8, r3, 0x8d4
    lwz r0, 0x8d0(r3)
    mulli r0, r0, 0x24
    add r7, r3, r0
    addi r0, r7, 0x8d4
    b lbl_fn_803E3050_00001134
lbl_fn_803E3050_00000F60:
    lfs f0, 0x20(r8)
    fcmpo cr0, f1, f0
    bge lbl_fn_803E3050_00001130
    lwz r0, 0x8d0(r3)
    cmplwi r0, 0xc
    blt lbl_fn_803E3050_00000F84
    lwz r7, 0x8d0(r3)
    subi r0, r7, 0x1
    stw r0, 0x8d0(r3)
lbl_fn_803E3050_00000F84:
    addi r9, r3, 0x8d0
    lis r3, 0x38e4
    addi r0, r9, 0x4
    lfs f2, 0x8(r4)
    subf r0, r0, r8
    subi r3, r3, 0x71c7
    mulhw r0, r3, r0
    psq_l f1, 0x0(r4), 0, 0
    addi r8, r1, 0x2c
    stfs f2, 0x34(r1)
    lfs f2, 0x8(r5)
    addi r4, r1, 0x38
    srawi r0, r0, 3
    lwz r10, 0x0(r9)
    srwi r3, r0, 31
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    add r11, r0, r3
    psq_st f1, 0x0(r4), 0, 0
    cmplw r10, r11
    addi r5, r1, 0x44
    psq_l f1, 0x0(r6), 0, 0
    mulli r4, r10, 0x24
    stfs f2, 0x40(r1)
    subf r3, r11, r10
    psq_st f1, 0x0(r5), 0, 0
    stfs f3, 0x4c(r1)
    ble lbl_fn_803E3050_000010E8
    srwi. r0, r3, 1
    mtctr r0
    beq lbl_fn_803E3050_00001098
lbl_fn_803E3050_00001000:
    subi r7, r10, 0x1
    add r5, r9, r4
    mulli r0, r7, 0x24
    subi r4, r4, 0x24
    subi r7, r10, 0x2
    subi r10, r10, 0x2
    add r6, r9, r0
    lfs f2, 0xc(r6)
    mulli r0, r7, 0x24
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    psq_l f1, 0x1c(r6), 0, 0
    psq_st f1, 0x1c(r5), 0, 0
    lfs f0, 0x24(r6)
    add r6, r9, r0
    stfs f0, 0x24(r5)
    add r5, r9, r4
    subi r4, r4, 0x24
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    psq_l f1, 0x1c(r6), 0, 0
    psq_st f1, 0x1c(r5), 0, 0
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r5)
    bdnz lbl_fn_803E3050_00001000
    andi. r3, r3, 0x1
    beq lbl_fn_803E3050_000010E8
lbl_fn_803E3050_00001098:
    mtctr r3
lbl_fn_803E3050_0000109C:
    subi r7, r10, 0x1
    add r5, r9, r4
    mulli r0, r7, 0x24
    subi r10, r10, 0x1
    subi r4, r4, 0x24
    add r6, r9, r0
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    stfs f2, 0x18(r5)
    psq_l f1, 0x1c(r6), 0, 0
    psq_st f1, 0x1c(r5), 0, 0
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r5)
    bdnz lbl_fn_803E3050_0000109C
lbl_fn_803E3050_000010E8:
    mulli r0, r11, 0x24
    psq_l f1, 0x0(r8), 0, 0
    lfs f2, 0x34(r1)
    lfs f0, 0x4c(r1)
    add r3, r9, r0
    psq_st f1, 0x4(r3), 0, 0
    psq_l f1, 0xc(r8), 0, 0
    stfs f2, 0xc(r3)
    lfs f2, 0x40(r1)
    psq_st f1, 0x10(r3), 0, 0
    psq_l f1, 0x18(r8), 0, 0
    stfs f2, 0x18(r3)
    psq_st f1, 0x1c(r3), 0, 0
    stfs f0, 0x24(r3)
    lwz r3, 0x0(r9)
    addi r0, r3, 0x1
    stw r0, 0x0(r9)
    b lbl_fn_803E3050_000011D4
lbl_fn_803E3050_00001130:
    addi r8, r8, 0x24
lbl_fn_803E3050_00001134:
    cmplw r8, r0
    bne lbl_fn_803E3050_00000F60
    lwz r0, 0x8d0(r3)
    cmplwi r0, 0xc
    bge lbl_fn_803E3050_000011D4
    lwz r0, 0x8d0(r3)
    addi r8, r3, 0x8d0
    lfs f2, 0x8(r4)
    addi r3, r1, 0x8
    mulli r0, r0, 0x24
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x14
    psq_l f1, 0x0(r5), 0, 0
    addi r7, r1, 0x20
    add r0, r8, r0
    stfs f2, 0x10(r1)
    lfs f2, 0x8(r5)
    addic. r9, r0, 0x4
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f3, 0x28(r1)
    beq lbl_fn_803E3050_000011C8
    psq_l f1, 0x0(r3), 0, 0
    frsp f0, f3
    psq_st f1, 0x0(r9), 0, 0
    lfs f2, 0x10(r1)
    stfs f2, 0x8(r9)
    psq_l f1, 0xc(r3), 0, 0
    psq_st f1, 0xc(r9), 0, 0
    lfs f2, 0x1c(r1)
    stfs f2, 0x14(r9)
    psq_l f1, 0x18(r3), 0, 0
    psq_st f1, 0x18(r9), 0, 0
    stfs f0, 0x20(r9)
lbl_fn_803E3050_000011C8:
    lwz r3, 0x0(r8)
    addi r0, r3, 0x1
    stw r0, 0x0(r8)
lbl_fn_803E3050_000011D4:
    addi r1, r1, 0x50
    blr
}

asm void fn_803E32EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addi r4, r3, 0x764
    li r5, 0x1c
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x748
    bl memcpy
    li r31, 0x0
    li r30, -0x1
    stw r30, 0x764(r29)
    addi r3, r29, 0x7f8
    addi r4, r29, 0x7c0
    li r5, 0x1c
    stw r30, 0x768(r29)
    stw r30, 0x76c(r29)
    stw r31, 0x770(r29)
    stw r31, 0x774(r29)
    stw r31, 0x778(r29)
    stw r31, 0x77c(r29)
    bl memcpy
    stw r30, 0x7c0(r29)
    stw r30, 0x7c4(r29)
    stw r30, 0x7c8(r29)
    stw r31, 0x7cc(r29)
    stw r31, 0x7d0(r29)
    stw r31, 0x7d4(r29)
    stw r31, 0x7d8(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803E3384(void)
{
    nofralloc
    lwz r11, 0x764(r3)
    li r12, 0x1
    lwz r10, 0x768(r3)
    li r4, -0x1
    lwz r9, 0x76c(r3)
    li r0, 0x0
    lwz r8, 0x770(r3)
    lwz r7, 0x774(r3)
    lwz r6, 0x778(r3)
    lwz r5, 0x77c(r3)
    stw r12, 0x834(r3)
    lwz r12, 0x814(r3)
    stw r11, 0x79c(r3)
    lfs f0, lbl_80885D58
    stw r10, 0x7a0(r3)
    stw r9, 0x7a4(r3)
    stw r8, 0x7a8(r3)
    stw r7, 0x7ac(r3)
    stw r6, 0x7b0(r3)
    stw r5, 0x7b4(r3)
    lfs f1, 0xa0(r12)
    stfs f1, 0x100(r12)
    lwz r5, 0x81c(r3)
    lfs f1, 0xa0(r5)
    stfs f1, 0x100(r5)
    lwz r5, 0x824(r3)
    stfs f0, 0x100(r5)
    lwz r5, 0x818(r3)
    lfs f1, 0xa0(r5)
    stfs f1, 0x100(r5)
    lwz r5, 0x820(r3)
    lfs f1, 0xa0(r5)
    stfs f1, 0x100(r5)
    lwz r5, 0x828(r3)
    stfs f0, 0x100(r5)
    stw r4, 0x748(r3)
    stw r4, 0x74c(r3)
    stw r4, 0x750(r3)
    stw r0, 0x754(r3)
    stw r0, 0x758(r3)
    stw r0, 0x75c(r3)
    stw r0, 0x760(r3)
    stw r4, 0x764(r3)
    stw r4, 0x768(r3)
    stw r4, 0x76c(r3)
    stw r0, 0x770(r3)
    stw r0, 0x774(r3)
    stw r0, 0x778(r3)
    stw r0, 0x77c(r3)
    stw r4, 0x780(r3)
    stw r4, 0x784(r3)
    stw r4, 0x788(r3)
    stw r0, 0x78c(r3)
    stw r0, 0x790(r3)
    stw r0, 0x794(r3)
    stw r0, 0x798(r3)
    blr
}

asm void fn_803E3468(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_22
    lwz r3, lbl_8087F0A8
    lis r31, jumptable_8078BE40@ha
    mr r25, r4
    mr r26, r5
    lwz r0, 0x474(r3)
    mr r27, r6
    addi r31, r31, jumptable_8078BE40@l
    cmpwi r0, 0x0
    beq lbl_fn_803E3468_00001AB8
    cmpwi r7, 0x0
    bne lbl_fn_803E3468_000013C0
    lwz r0, 0x0(r6)
    cmpwi r0, 0x6
    beq lbl_fn_803E3468_00001AB8
    cmpwi r0, 0xc
    beq lbl_fn_803E3468_00001AB8
    cmpwi r0, 0x9
    bne lbl_fn_803E3468_000013C0
    b lbl_fn_803E3468_00001AB8
lbl_fn_803E3468_000013C0:
    lwz r0, 0x38(r4)
    addi r3, r31, 0x208
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r30, 0x0(r6)
    lwz r29, 0x4(r6)
    mulli r22, r30, 0x1c
    lwzx r0, r3, r22
    cmpwi r0, 0x1
    bne lbl_fn_803E3468_000013F0
    lfs f31, lbl_80885D60
    b lbl_fn_803E3468_000013F4
lbl_fn_803E3468_000013F0:
    lfs f31, lbl_80885D58
lbl_fn_803E3468_000013F4:
    lis r23, lbl_807506A0@ha
    addi r24, r4, 0x58
    addi r23, r23, lbl_807506A0@l
    addi r3, r23, 0x14e2
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r24
    bl fn_801FECE0
    lwz r5, 0x8(r27)
    addi r3, r1, 0x68
    addi r4, r23, 0x14e7
    crclr 6
    bl sprintf
    mr r3, r25
    addi r4, r23, 0x14eb
    addi r5, r1, 0x68
    bl fn_801F4C14
    lwz r3, 0x10(r27)
    cmpwi r3, 0x0
    beq lbl_fn_803E3468_00001468
    lwz r24, 0x8(r3)
    addi r3, r23, 0x14f4
    addi r23, r25, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    mr r5, r24
    bl fn_801FEE08
lbl_fn_803E3468_00001468:
    lwz r0, 0x0(r27)
    li r28, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803E3468_0000148C
    mulli r0, r29, 0x1c
    addi r3, r31, 0x400
    add r3, r3, r0
    lwz r23, 0x4(r3)
    b lbl_fn_803E3468_00001498
lbl_fn_803E3468_0000148C:
    addi r0, r31, 0x208
    add r3, r0, r22
    lwz r23, 0x4(r3)
lbl_fn_803E3468_00001498:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lwz r4, lbl_8087F9C0
    cmpwi r3, 0x0
    lwz r3, 0x30(r4)
    lwz r0, 0x34(r4)
    cntlzw r3, r3
    cntlzw r0, r0
    srwi r5, r3, 5
    srwi r6, r0, 5
    bne lbl_fn_803E3468_00001604
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803E3468_00001554
    cmplwi r23, 0x8
    bgt lbl_fn_803E3468_0000170C
    lis r3, jumptable_8078C530@ha
    slwi r0, r23, 2
    addi r3, r3, jumptable_8078C530@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r28, 0x0
    b lbl_fn_803E3468_0000170C
    li r28, 0x0
    b lbl_fn_803E3468_0000170C
    cmpwi r6, 0x0
    li r28, 0x3
    beq lbl_fn_803E3468_0000170C
    li r28, 0x2
    b lbl_fn_803E3468_0000170C
    cmpwi r6, 0x0
    li r28, 0x2
    beq lbl_fn_803E3468_0000170C
    li r28, 0x3
    b lbl_fn_803E3468_0000170C
    li r28, 0x0
    b lbl_fn_803E3468_0000170C
    li r28, 0x0
    b lbl_fn_803E3468_0000170C
    li r28, 0x0
    b lbl_fn_803E3468_0000170C
    li r28, 0x1
    b lbl_fn_803E3468_0000170C
    li r28, 0x0
    b lbl_fn_803E3468_0000170C
lbl_fn_803E3468_00001554:
    cmplwi r23, 0x8
    bgt lbl_fn_803E3468_0000170C
    lis r3, jumptable_8078C50C@ha
    slwi r0, r23, 2
    addi r3, r3, jumptable_8078C50C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r5, 0x0
    li r28, 0x8
    beq lbl_fn_803E3468_0000170C
    li r28, 0x9
    b lbl_fn_803E3468_0000170C
    cmpwi r5, 0x0
    li r28, 0x8
    beq lbl_fn_803E3468_0000170C
    li r28, 0x9
    b lbl_fn_803E3468_0000170C
    cmpwi r6, 0x0
    li r28, 0x3
    beq lbl_fn_803E3468_0000170C
    li r28, 0x2
    b lbl_fn_803E3468_0000170C
    cmpwi r6, 0x0
    li r28, 0x2
    beq lbl_fn_803E3468_0000170C
    li r28, 0x3
    b lbl_fn_803E3468_0000170C
    li r28, 0x0
    b lbl_fn_803E3468_0000170C
    cmpwi r5, 0x0
    li r28, 0x8
    beq lbl_fn_803E3468_0000170C
    li r28, 0x9
    b lbl_fn_803E3468_0000170C
    li r28, 0x0
    b lbl_fn_803E3468_0000170C
    li r28, 0x1
    b lbl_fn_803E3468_0000170C
    cmpwi r5, 0x0
    li r28, 0x8
    beq lbl_fn_803E3468_0000170C
    li r28, 0x9
    b lbl_fn_803E3468_0000170C
lbl_fn_803E3468_00001604:
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803E3468_00001690
    cmplwi r23, 0x8
    bgt lbl_fn_803E3468_0000170C
    lis r3, jumptable_8078C4E8@ha
    slwi r0, r23, 2
    addi r3, r3, jumptable_8078C4E8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r28, 0xc
    b lbl_fn_803E3468_0000170C
    li r28, 0xc
    b lbl_fn_803E3468_0000170C
    cmpwi r6, 0x0
    li r28, 0x12
    beq lbl_fn_803E3468_0000170C
    li r28, 0x10
    b lbl_fn_803E3468_0000170C
    cmpwi r6, 0x0
    li r28, 0x10
    beq lbl_fn_803E3468_0000170C
    li r28, 0x12
    b lbl_fn_803E3468_0000170C
    li r28, 0xc
    b lbl_fn_803E3468_0000170C
    li r28, 0xc
    b lbl_fn_803E3468_0000170C
    li r28, 0xc
    b lbl_fn_803E3468_0000170C
    li r28, 0x11
    b lbl_fn_803E3468_0000170C
    li r28, 0xc
    b lbl_fn_803E3468_0000170C
lbl_fn_803E3468_00001690:
    cmplwi r23, 0x8
    bgt lbl_fn_803E3468_0000170C
    lis r3, jumptable_8078C4C4@ha
    slwi r0, r23, 2
    addi r3, r3, jumptable_8078C4C4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r28, 0xf
    b lbl_fn_803E3468_0000170C
    li r28, 0xf
    b lbl_fn_803E3468_0000170C
    cmpwi r6, 0x0
    li r28, 0x12
    beq lbl_fn_803E3468_0000170C
    li r28, 0x10
    b lbl_fn_803E3468_0000170C
    cmpwi r6, 0x0
    li r28, 0x10
    beq lbl_fn_803E3468_0000170C
    li r28, 0x12
    b lbl_fn_803E3468_0000170C
    li r28, 0xc
    b lbl_fn_803E3468_0000170C
    li r28, 0xf
    b lbl_fn_803E3468_0000170C
    li r28, 0xc
    b lbl_fn_803E3468_0000170C
    li r28, 0x11
    b lbl_fn_803E3468_0000170C
    li r28, 0xf
lbl_fn_803E3468_0000170C:
    mulli r0, r28, 0x18
    addi r23, r31, 0x28
    lis r24, lbl_807506A0@ha
    addi r5, r1, 0x58
    add r4, r23, r0
    addi r24, r24, lbl_807506A0@l
    psq_l f1, 0x8(r4), 0, 0
    mr r3, r25
    psq_l f2, 0x10(r4), 0, 0
    addi r4, r24, 0x10c6
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    mulli r0, r28, 0x18
    addi r5, r1, 0x48
    mr r3, r25
    addi r4, r24, 0x10cc
    add r6, r23, r0
    psq_l f1, 0x8(r6), 0, 0
    psq_l f2, 0x10(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    addi r3, r24, 0x14fe
    addi r23, r25, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80885D58
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    subi r0, r28, 0x8
    cmplwi r0, 0x3
    bgt lbl_fn_803E3468_000018B0
    addi r3, r24, 0x14fe
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    cmpwi r26, 0x0
    beq lbl_fn_803E3468_000018B0
    lwz r0, 0x38(r26)
    addi r3, r24, 0x1506
    addi r23, r26, 0x58
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r26)
    bl fn_800DC6B4
    lfs f1, lbl_80885D58
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    addi r3, r24, 0x150d
    bl fn_800DC6B4
    lfs f1, lbl_80885D58
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    addi r3, r24, 0x1514
    bl fn_800DC6B4
    lfs f1, lbl_80885D58
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    addi r3, r24, 0x151b
    bl fn_800DC6B4
    lfs f1, lbl_80885D58
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    cmpwi r28, 0x8
    beq lbl_fn_803E3468_00001844
    cmpwi r28, 0x9
    beq lbl_fn_803E3468_00001860
    cmpwi r28, 0xa
    beq lbl_fn_803E3468_0000187C
    cmpwi r28, 0xb
    beq lbl_fn_803E3468_00001898
    b lbl_fn_803E3468_000018B0
lbl_fn_803E3468_00001844:
    addi r3, r24, 0x1506
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    b lbl_fn_803E3468_000018B0
lbl_fn_803E3468_00001860:
    addi r3, r24, 0x150d
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    b lbl_fn_803E3468_000018B0
lbl_fn_803E3468_0000187C:
    addi r3, r24, 0x1514
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    b lbl_fn_803E3468_000018B0
lbl_fn_803E3468_00001898:
    addi r3, r24, 0x151b
    bl fn_800DC6B4
    lfs f1, lbl_80885D60
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
lbl_fn_803E3468_000018B0:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x6
    bne lbl_fn_803E3468_000019BC
    mulli r3, r29, 0x1c
    addi r0, r31, 0x400
    lwz r4, lbl_8087F1E4
    add r3, r0, r3
    addi r5, r4, 0x4
    lwz r22, 0x8(r3)
    slwi r3, r22, 3
    lwzx r0, r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803E3468_000018F0
    add r3, r4, r3
    lwz r23, 0x4(r3)
    b lbl_fn_803E3468_000018F4
lbl_fn_803E3468_000018F0:
    la r23, lbl_808813D0
lbl_fn_803E3468_000018F4:
    lis r3, lbl_807506A0@ha
    addi r24, r25, 0x58
    addi r3, r3, lbl_807506A0@l
    addi r3, r3, 0x1522
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r23
    bl fn_801FEE08
    lwz r3, lbl_8087F1E4
    slwi r4, r22, 3
    addi r5, r3, 0x4
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    beq lbl_fn_803E3468_0000193C
    add r3, r3, r4
    lwz r23, 0x4(r3)
    b lbl_fn_803E3468_00001940
lbl_fn_803E3468_0000193C:
    la r23, lbl_808813D0
lbl_fn_803E3468_00001940:
    lis r27, lbl_807506A0@ha
    addi r24, r25, 0x58
    addi r27, r27, lbl_807506A0@l
    addi r3, r27, 0x152e
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r23
    bl fn_801FEE08
    mulli r0, r29, 0x1c
    addi r26, r31, 0x400
    addi r5, r1, 0x38
    mr r3, r25
    add r6, r26, r0
    addi r4, r27, 0x153e
    psq_l f1, 0xc(r6), 0, 0
    psq_l f2, 0x14(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    mulli r0, r29, 0x1c
    addi r5, r1, 0x28
    mr r3, r25
    addi r4, r27, 0x1546
    add r6, r26, r0
    psq_l f1, 0xc(r6), 0, 0
    psq_l f2, 0x14(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    b lbl_fn_803E3468_00001AB8
lbl_fn_803E3468_000019BC:
    mulli r3, r30, 0x1c
    addi r0, r31, 0x208
    lwz r4, lbl_8087F1E4
    add r3, r0, r3
    addi r5, r4, 0x4
    lwz r22, 0x8(r3)
    slwi r3, r22, 3
    lwzx r0, r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803E3468_000019F0
    add r3, r4, r3
    lwz r23, 0x4(r3)
    b lbl_fn_803E3468_000019F4
lbl_fn_803E3468_000019F0:
    la r23, lbl_808813D0
lbl_fn_803E3468_000019F4:
    lis r3, lbl_807506A0@ha
    addi r24, r25, 0x58
    addi r3, r3, lbl_807506A0@l
    addi r3, r3, 0x1522
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r23
    bl fn_801FEE08
    lwz r3, lbl_8087F1E4
    slwi r4, r22, 3
    addi r5, r3, 0x4
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    beq lbl_fn_803E3468_00001A3C
    add r3, r3, r4
    lwz r23, 0x4(r3)
    b lbl_fn_803E3468_00001A40
lbl_fn_803E3468_00001A3C:
    la r23, lbl_808813D0
lbl_fn_803E3468_00001A40:
    lis r27, lbl_807506A0@ha
    addi r24, r25, 0x58
    addi r27, r27, lbl_807506A0@l
    addi r3, r27, 0x152e
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r23
    bl fn_801FEE08
    mulli r0, r30, 0x1c
    addi r26, r31, 0x208
    addi r5, r1, 0x18
    mr r3, r25
    add r6, r26, r0
    addi r4, r27, 0x153e
    psq_l f1, 0xc(r6), 0, 0
    psq_l f2, 0x14(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
    mulli r0, r30, 0x1c
    addi r5, r1, 0x8
    mr r3, r25
    addi r4, r27, 0x1546
    add r6, r26, r0
    psq_l f1, 0xc(r6), 0, 0
    psq_l f2, 0x14(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F48C8
lbl_fn_803E3468_00001AB8:
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_22
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
