#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_18(void);
extern void _restgpr_19(void);
extern void _savegpr_18(void);
extern void _savegpr_19(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B6E8(void);
extern void fn_800616C0(void);
extern void fn_800844D8(void);
extern void fn_80097C08(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DC12C(void);
extern void fn_80125474(void);
extern void fn_801255C8(void);
extern void fn_80126214(void);
extern void fn_80128818(void);
extern void fn_80139560(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8014C0B4(void);
extern void fn_8014C228(void);
extern void fn_801598B4(void);
extern void fn_80159BA4(void);
extern void fn_80179D44(void);
extern void fn_80182134(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80738140[];
extern u8 lbl_80738154[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8077CAC8[];
extern u8 lbl_8077CAE0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F090;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881BF8;
extern u32 lbl_80881C04;
extern u32 lbl_80881C08;
extern u32 lbl_80881C0C;
extern u32 lbl_80881C10;
extern u32 lbl_80881C14;
extern u32 lbl_80881C18;
extern u32 lbl_80881C1C;
extern u32 lbl_80881C20;
extern u32 lbl_80881C24;
extern u32 lbl_80881C28;
extern u32 lbl_80881C2C;
extern u32 lbl_80881C30;
extern u32 lbl_80881C34;
extern u32 lbl_80881C38;
extern u32 lbl_80881C3C;

/* Function declarations */
void fn_80180594(void);
void fn_8018059C(void);
void fn_801805A4(void);
void fn_80180960(void);
void fn_801809F4(void);
void fn_80180ADC(void);
void fn_80180AE0(void);
void fn_8018120C(void);
void fn_80181284(void);
void fn_8018128C(void);
void fn_801814F0(void);
void fn_8018161C(void);
void fn_80181A64(void);
void fn_80181D94(void);

asm void fn_80180594(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8018059C(void)
{
    nofralloc
    lwz r3, lbl_8087F090
    blr
}

asm void fn_801805A4(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_18
    mr r18, r5
    lwz r5, 0x20(r5)
    mr r21, r3
    bl fn_8035B694
    lfs f0, lbl_80881BF8
    lis r3, lbl_8077CAE0@ha
    li r23, 0x0
    li r0, -0x1
    addi r3, r3, lbl_8077CAE0@l
    stw r3, 0x0(r21)
    addi r3, r18, 0x2c
    stw r23, 0x14b0(r21)
    stw r23, 0x14b4(r21)
    stw r23, 0x14b8(r21)
    stw r23, 0x14bc(r21)
    stw r0, 0x14c0(r21)
    stfs f0, 0x14c4(r21)
    stw r23, 0x14c8(r21)
    stw r23, 0x14cc(r21)
    stw r23, 0x14d0(r21)
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r19, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x28(r1)
    addi r3, r1, 0x38
    li r5, 0x400
    stw r23, 0x2c(r1)
    li r4, 0x0
    stw r23, 0x30(r1)
    stw r23, 0x34(r1)
    stw r23, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x28(r1)
    mr r5, r19
    addi r3, r1, 0x28
    addi r4, r18, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    lis r4, __files@ha
    lis r19, lbl_80738154@ha
    mr r18, r3
    addi r22, r1, 0x14
    addi r20, r19, lbl_80738154@l
    addi r26, r4, __files@l
    lis r29, 0xcccd
    lis r25, 0x4000
    lis r28, 0x1555
    lis r30, 0x2aab
    lis r31, lbl_80775A88@ha
    b lbl_fn_801805A4_00000384
lbl_fn_801805A4_00000124:
    mr r3, r18
    bl fn_800DC12C
    lwz r5, 0x14b8(r21)
    mr r24, r3
    lwz r4, 0x14bc(r21)
    cmplw r5, r4
    bge lbl_fn_801805A4_0000015C
    addi r5, r5, 0x1
    lwz r4, 0x14b4(r21)
    slwi r0, r5, 2
    stw r5, 0x14b8(r21)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_801805A4_00000378
lbl_fn_801805A4_0000015C:
    subi r0, r25, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_801805A4_00000180
    addi r4, r19, lbl_80738154@l
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801805A4_00000180:
    addi r3, r21, 0x14bc
    stw r23, 0x14(r1)
    subi r0, r25, 0x1
    stw r23, 0x18(r1)
    stw r23, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r23, 0x24(r1)
    lwz r3, 0x14b8(r21)
    lwz r27, 0x14bc(r21)
    addi r3, r3, 0x1
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_801805A4_000001D0
    addi r4, r19, lbl_80738154@l
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801805A4_000001D0:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_801805A4_00000218
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_801805A4_0000020C
    addi r3, r1, 0x8
lbl_fn_801805A4_0000020C:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_801805A4_00000254
lbl_fn_801805A4_00000218:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_801805A4_00000250
    addi r3, r27, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_801805A4_00000244
    addi r3, r1, 0x8
lbl_fn_801805A4_00000244:
    lwz r0, 0x0(r3)
    add r18, r27, r0
    b lbl_fn_801805A4_00000254
lbl_fn_801805A4_00000250:
    subi r18, r25, 0x1
lbl_fn_801805A4_00000254:
    subi r0, r25, 0x1
    cmplw r18, r0
    ble lbl_fn_801805A4_00000274
    addi r4, r19, lbl_80738154@l
    addi r3, r26, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801805A4_00000274:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_801805A4_0000029C
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801805A4_0000029C:
    lwz r0, 0x18(r1)
    stw r27, 0x14(r1)
    slwi r3, r0, 2
    stw r18, 0x1c(r1)
    lwz r0, 0x14b8(r21)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r27, r0
    stwx r24, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x14b8(r21)
    lwz r27, 0x14b4(r21)
    slwi r4, r4, 2
    add r5, r27, r4
    subf r5, r27, r5
    mr r4, r27
    srawi r5, r5, 2
    addze r24, r5
    subf r0, r24, r0
    stw r0, 0x24(r1)
    slwi r18, r24, 2
    slwi r0, r0, 2
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r27
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r22, 0x0
    add r0, r0, r24
    stw r0, 0x18(r1)
    stw r23, 0x14b8(r21)
    lwz r3, 0x14bc(r21)
    lwz r0, 0x1c(r1)
    stw r0, 0x14bc(r21)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x14b4(r21)
    stw r0, 0x14b4(r21)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x14b8(r21)
    stw r23, 0x18(r1)
    beq lbl_fn_801805A4_00000378
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801805A4_00000378
    stw r23, 0x18(r1)
    bl dtor_80084684
lbl_fn_801805A4_00000378:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    mr r18, r3
lbl_fn_801805A4_00000384:
    cmpwi r18, 0x0
    beq lbl_fn_801805A4_000003A0
    mr r4, r18
    addi r3, r20, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_801805A4_00000124
lbl_fn_801805A4_000003A0:
    lwz r0, 0x12a4(r21)
    addi r11, r1, 0x6a0
    mr r3, r21
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x12a4(r21)
    stw r21, lbl_8087F090
    bl _restgpr_18
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80180960(void)
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
    beq lbl_fn_80180960_00000444
    addic. r4, r3, 0x14b4
    li r0, 0x0
    stw r0, lbl_8087F090
    beq lbl_fn_80180960_00000428
    beq lbl_fn_80180960_00000428
    beq lbl_fn_80180960_00000428
    beq lbl_fn_80180960_00000428
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80180960_00000428
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80180960_00000428:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_80180960_00000444
    mr r3, r30
    bl dtor_80084684
lbl_fn_80180960_00000444:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801809F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_80881BF8
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    stfs f0, 0x568(r3)
    cmpwi r0, 0x6
    bne lbl_fn_801809F4_00000528
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801809F4_00000514
    cmpwi r0, 0x4
    beq lbl_fn_801809F4_00000514
    lwz r0, 0x14d0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801809F4_00000514
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lwz r0, 0x560(r4)
    cmpwi r0, 0x69
    beq lbl_fn_801809F4_00000514
    lfs f1, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lwz r3, lbl_8087F0A8
    lfs f0, 0x564(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_801809F4_00000514
    mr r3, r31
    li r4, 0x4
    bl fn_8018161C
    b lbl_fn_801809F4_00000534
lbl_fn_801809F4_00000514:
    mr r3, r31
    bl fn_80139560
    mr r3, r31
    bl fn_80145334
    b lbl_fn_801809F4_00000534
lbl_fn_801809F4_00000528:
    bl fn_80180AE0
    mr r3, r31
    bl fn_80145334
lbl_fn_801809F4_00000534:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80180ADC(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_80180AE0(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stw r31, 0x18c(r1)
    mr r31, r3
    stw r30, 0x188(r1)
    stw r29, 0x184(r1)
    stw r28, 0x180(r1)
    lwz r4, 0x14d0(r3)
    lwz r6, 0x14b0(r3)
    subi r4, r4, 0x1
    stw r5, 0xd1c(r3)
    srawi r0, r4, 31
    cmpwi r6, 0x0
    andc r0, r4, r0
    stb r5, 0xd75(r3)
    stw r0, 0x14d0(r3)
    beq lbl_fn_80180AE0_000005CC
    cmpwi r6, 0x1
    beq lbl_fn_80180AE0_000005D4
    cmpwi r6, 0x3
    beq lbl_fn_80180AE0_00000674
    cmpwi r6, 0x2
    beq lbl_fn_80180AE0_0000067C
    cmpwi r6, 0x4
    beq lbl_fn_80180AE0_00000684
    cmpwi r6, 0x5
    beq lbl_fn_80180AE0_0000069C
    b lbl_fn_80180AE0_000006A0
lbl_fn_80180AE0_000005CC:
    bl fn_80139560
    b lbl_fn_80180AE0_000006A0
lbl_fn_80180AE0_000005D4:
    lwz r4, lbl_8087F8A0
    lfs f1, 0x530(r3)
    lwz r4, 0x48(r4)
    lfs f2, 0x52c(r3)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r3)
    fsubs f4, f4, f1
    lfs f1, 0x528(r4)
    fsubs f2, f3, f2
    addi r3, r1, 0x8
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lwz r3, lbl_8087F0A8
    lfs f0, 0x564(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80180AE0_00000654
    lwz r0, 0x14d0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80180AE0_00000654
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x560(r3)
    cmpwi r0, 0x69
    beq lbl_fn_80180AE0_00000654
    mr r3, r31
    li r4, 0x4
    bl fn_8018161C
    b lbl_fn_80180AE0_000006A0
lbl_fn_80180AE0_00000654:
    lwz r3, 0x14c8(r31)
    lfs f0, lbl_80881BF8
    subi r3, r3, 0x1
    stfs f0, 0x14c4(r31)
    srawi r0, r3, 31
    andc r0, r3, r0
    stw r0, 0x14c8(r31)
    b lbl_fn_80180AE0_000006A0
lbl_fn_80180AE0_00000674:
    bl fn_8018128C
    b lbl_fn_80180AE0_000006A0
lbl_fn_80180AE0_0000067C:
    bl fn_801814F0
    b lbl_fn_80180AE0_000006A0
lbl_fn_80180AE0_00000684:
    lwz r5, lbl_8087F0A8
    li r4, 0x3
    lwz r0, 0x568(r5)
    stw r0, 0x14d0(r3)
    bl fn_8018161C
    b lbl_fn_80180AE0_000006A0
lbl_fn_80180AE0_0000069C:
    stw r5, 0x14c8(r3)
lbl_fn_80180AE0_000006A0:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x53c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80180AE0_00000C50
    lfs f4, lbl_80881C04
    addi r3, r1, 0x70
    lfs f3, lbl_80881C08
    addi r5, r1, 0x64
    lfs f2, 0x530(r31)
    lfs f1, 0x52c(r31)
    lfs f0, 0x528(r31)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x58(r1)
    fadds f0, f0, f4
    lwz r4, lbl_8087EFB4
    stfs f3, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f2, 0x6c(r1)
    bl fn_800BFAC8
    lfs f1, 0x78(r1)
    lfs f0, lbl_80881C04
    fcmpo cr0, f1, f0
    ble lbl_fn_80180AE0_00000C50
    lfs f0, lbl_80881BF8
    fcmpo cr0, f1, f0
    bge lbl_fn_80180AE0_00000C50
    lwz r0, 0x14b0(r31)
    lis r3, lbl_8077CAC8@ha
    lfs f1, 0x74(r1)
    lis r4, lbl_80738154@ha
    lfs f0, lbl_80881C0C
    slwi r0, r0, 2
    addi r3, r3, lbl_8077CAC8@l
    addi r4, r4, lbl_80738154@l
    lwzx r5, r3, r0
    fsubs f31, f1, f0
    addi r3, r1, 0x80
    addi r4, r4, 0x15
    crclr 6
    bl sprintf
    lfs f2, lbl_80881BF8
    stfs f2, 0x48(r1)
    fcmpo cr0, f2, f2
    stfs f2, 0x4c(r1)
    stfs f2, 0x50(r1)
    stfs f2, 0x54(r1)
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000774
    li r30, 0xff
    b lbl_fn_80180AE0_000007A0
lbl_fn_80180AE0_00000774:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_0000078C
    li r3, 0x0
    b lbl_fn_80180AE0_0000079C
lbl_fn_80180AE0_0000078C:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_0000079C:
    mr r30, r3
lbl_fn_80180AE0_000007A0:
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_000007BC
    li r29, 0xff
    b lbl_fn_80180AE0_000007E8
lbl_fn_80180AE0_000007BC:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_000007D4
    li r3, 0x0
    b lbl_fn_80180AE0_000007E4
lbl_fn_80180AE0_000007D4:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_000007E4:
    mr r29, r3
lbl_fn_80180AE0_000007E8:
    lfs f2, 0x50(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000804
    li r28, 0xff
    b lbl_fn_80180AE0_00000830
lbl_fn_80180AE0_00000804:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_0000081C
    li r3, 0x0
    b lbl_fn_80180AE0_0000082C
lbl_fn_80180AE0_0000081C:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_0000082C:
    mr r28, r3
lbl_fn_80180AE0_00000830:
    lfs f2, 0x54(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_0000084C
    li r3, 0xff
    b lbl_fn_80180AE0_00000874
lbl_fn_80180AE0_0000084C:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_00000864
    li r3, 0x0
    b lbl_fn_80180AE0_00000874
lbl_fn_80180AE0_00000864:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_00000874:
    lfs f3, lbl_80881C04
    slwi r4, r29, 8
    lfs f4, lbl_80881C0C
    or r5, r28, r4
    fmr f2, f31
    slwi r3, r3, 24
    slwi r0, r30, 16
    fmr f6, f3
    or r0, r3, r0
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x80
    lfs f1, 0x70(r1)
    or r5, r5, r0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0x14c0(r31)
    lis r4, lbl_80738154@ha
    addi r4, r4, lbl_80738154@l
    addi r3, r1, 0x80
    cmpwi r0, 0x0
    addi r4, r4, 0x18
    blt lbl_fn_80180AE0_000008E8
    lwz r5, 0x14b4(r31)
    slwi r0, r0, 2
    lwzx r5, r5, r0
    b lbl_fn_80180AE0_000008EC
lbl_fn_80180AE0_000008E8:
    li r5, -0x1
lbl_fn_80180AE0_000008EC:
    lfs f1, 0x14c4(r31)
    lfs f0, lbl_80881C18
    fdivs f1, f1, f0
    crset 6
    bl sprintf
    lfs f2, lbl_80881BF8
    lfs f0, lbl_80881C0C
    fcmpo cr0, f2, f2
    stfs f2, 0x38(r1)
    fadds f31, f31, f0
    stfs f2, 0x3c(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0x44(r1)
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000930
    li r28, 0xff
    b lbl_fn_80180AE0_0000095C
lbl_fn_80180AE0_00000930:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_00000948
    li r3, 0x0
    b lbl_fn_80180AE0_00000958
lbl_fn_80180AE0_00000948:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_00000958:
    mr r28, r3
lbl_fn_80180AE0_0000095C:
    lfs f2, 0x3c(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000978
    li r30, 0xff
    b lbl_fn_80180AE0_000009A4
lbl_fn_80180AE0_00000978:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_00000990
    li r3, 0x0
    b lbl_fn_80180AE0_000009A0
lbl_fn_80180AE0_00000990:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_000009A0:
    mr r30, r3
lbl_fn_80180AE0_000009A4:
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_000009C0
    li r29, 0xff
    b lbl_fn_80180AE0_000009EC
lbl_fn_80180AE0_000009C0:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_000009D8
    li r3, 0x0
    b lbl_fn_80180AE0_000009E8
lbl_fn_80180AE0_000009D8:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_000009E8:
    mr r29, r3
lbl_fn_80180AE0_000009EC:
    lfs f2, 0x44(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000A08
    li r3, 0xff
    b lbl_fn_80180AE0_00000A30
lbl_fn_80180AE0_00000A08:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_00000A20
    li r3, 0x0
    b lbl_fn_80180AE0_00000A30
lbl_fn_80180AE0_00000A20:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_00000A30:
    lfs f3, lbl_80881C04
    slwi r4, r30, 8
    lfs f4, lbl_80881C0C
    or r5, r29, r4
    fmr f2, f31
    slwi r3, r3, 24
    slwi r0, r28, 16
    fmr f6, f3
    or r0, r3, r0
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x80
    lfs f1, 0x70(r1)
    or r5, r5, r0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x28
    lfs f1, lbl_80881C0C
    lwz r4, 0x48(r4)
    fadds f31, f31, f1
    lfs f0, 0x530(r31)
    lfs f1, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x2c(r1)
    stfs f0, 0x28(r1)
    stfs f4, 0x30(r1)
    bl fn_805F9940
    lis r4, lbl_80738154@ha
    lwz r5, 0x14c8(r31)
    addi r4, r4, lbl_80738154@l
    lwz r6, 0x14d0(r31)
    addi r3, r1, 0x80
    addi r4, r4, 0x23
    crset 6
    bl sprintf
    lfs f2, lbl_80881BF8
    stfs f2, 0x18(r1)
    fcmpo cr0, f2, f2
    stfs f2, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f2, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000B08
    li r29, 0xff
    b lbl_fn_80180AE0_00000B34
lbl_fn_80180AE0_00000B08:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_00000B20
    li r3, 0x0
    b lbl_fn_80180AE0_00000B30
lbl_fn_80180AE0_00000B20:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_00000B30:
    mr r29, r3
lbl_fn_80180AE0_00000B34:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000B50
    li r30, 0xff
    b lbl_fn_80180AE0_00000B7C
lbl_fn_80180AE0_00000B50:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_00000B68
    li r3, 0x0
    b lbl_fn_80180AE0_00000B78
lbl_fn_80180AE0_00000B68:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_00000B78:
    mr r30, r3
lbl_fn_80180AE0_00000B7C:
    lfs f2, 0x20(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000B98
    li r31, 0xff
    b lbl_fn_80180AE0_00000BC4
lbl_fn_80180AE0_00000B98:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_00000BB0
    li r3, 0x0
    b lbl_fn_80180AE0_00000BC0
lbl_fn_80180AE0_00000BB0:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_00000BC0:
    mr r31, r3
lbl_fn_80180AE0_00000BC4:
    lfs f2, 0x24(r1)
    lfs f0, lbl_80881BF8
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80180AE0_00000BE0
    li r3, 0xff
    b lbl_fn_80180AE0_00000C08
lbl_fn_80180AE0_00000BE0:
    lfs f0, lbl_80881C04
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80180AE0_00000BF8
    li r3, 0x0
    b lbl_fn_80180AE0_00000C08
lbl_fn_80180AE0_00000BF8:
    lfs f1, lbl_80881C14
    lfs f0, lbl_80881C10
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_80180AE0_00000C08:
    lfs f3, lbl_80881C04
    slwi r4, r30, 8
    lfs f4, lbl_80881C0C
    or r5, r31, r4
    fmr f2, f31
    slwi r3, r3, 24
    slwi r0, r29, 16
    fmr f6, f3
    or r0, r3, r0
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x80
    lfs f1, 0x70(r1)
    or r5, r5, r0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80180AE0_00000C50:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    lwz r28, 0x180(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_8018120C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8018161C
    lwz r3, lbl_8087F8A0
    li r4, 0x3
    li r5, 0x1f
    lwz r3, 0x48(r3)
    bl fn_8014C0B4
    lwz r3, lbl_8087F8A0
    li r4, 0x2
    li r5, 0x19
    lwz r3, 0x48(r3)
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x3
    li r5, 0x1f
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x2
    li r5, 0x19
    bl fn_8014C0B4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80181284(void)
{
    nofralloc
    li r4, 0x3
    b fn_8018161C
}

asm void fn_8018128C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x1
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stb r0, 0xd75(r3)
    lfs f4, 0x530(r3)
    lwz r4, lbl_8087F8A0
    lfs f2, 0x52c(r3)
    lwz r4, 0x48(r4)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f5, 0x530(r4)
    lfs f3, 0x52c(r4)
    lfs f1, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f4, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f2, 0xc(r1)
    bl fn_805F9940
    lwz r31, lbl_8087F0A8
    fmr f31, f1
    lfs f0, 0x564(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_8018128C_00000DA4
    lwz r0, 0x14d0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8018128C_00000DA4
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x560(r3)
    cmpwi r0, 0x69
    beq lbl_fn_8018128C_00000DA4
    mr r3, r30
    li r4, 0x4
    bl fn_8018161C
    b lbl_fn_8018128C_00000F3C
lbl_fn_8018128C_00000DA4:
    lwz r3, 0x14c8(r30)
    addi r0, r3, 0x1
    stw r0, 0x14c8(r30)
    lfs f0, 0x554(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_8018128C_00000E14
    lwz r6, lbl_8087F8A0
    addi r5, r30, 0x528
    lwz r3, lbl_8087EE98
    li r4, 0x0
    lwz r6, 0x48(r6)
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    addi r6, r6, 0x528
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8018128C_00000E14
    lwz r3, 0x14cc(r30)
    addi r3, r3, 0x1
    stw r3, 0x14cc(r30)
    lwz r0, 0x550(r31)
    cmpw r3, r0
    ble lbl_fn_8018128C_00000E1C
    mr r3, r30
    li r4, 0x2
    bl fn_8018161C
    b lbl_fn_8018128C_00000F3C
lbl_fn_8018128C_00000E14:
    li r0, 0x0
    stw r0, 0x14cc(r30)
lbl_fn_8018128C_00000E1C:
    lfs f2, 0x14c4(r30)
    lfs f1, lbl_80881C18
    lfs f0, lbl_80881C1C
    fdivs f2, f2, f1
    stfs f2, 0x14c4(r30)
    fcmpo cr0, f31, f0
    ble lbl_fn_8018128C_00000E5C
    lfs f1, 0x54c(r31)
    lfs f0, 0x544(r31)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8018128C_00000E50
    b lbl_fn_8018128C_00000E54
lbl_fn_8018128C_00000E50:
    fmr f1, f0
lbl_fn_8018128C_00000E54:
    stfs f1, 0x14c4(r30)
    b lbl_fn_8018128C_00000E88
lbl_fn_8018128C_00000E5C:
    lfs f0, lbl_80881C20
    fcmpo cr0, f31, f0
    bge lbl_fn_8018128C_00000E88
    lfs f1, 0x54c(r31)
    lfs f0, 0x548(r31)
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8018128C_00000E80
    b lbl_fn_8018128C_00000E84
lbl_fn_8018128C_00000E80:
    fmr f1, f0
lbl_fn_8018128C_00000E84:
    stfs f1, 0x14c4(r30)
lbl_fn_8018128C_00000E88:
    lwz r5, 0x14c8(r30)
    lis r0, 0x4330
    lwz r4, 0x578(r31)
    lis r3, lbl_80738140@ha
    stw r0, 0x18(r1)
    divw r0, r5, r4
    lfd f3, lbl_80738140@l(r3)
    lfs f1, 0x574(r31)
    lfs f0, 0x548(r31)
    lfs f4, 0x14c4(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f2, 0x18(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fsubs f0, f0, f1
    fcmpo cr0, f4, f0
    bge lbl_fn_8018128C_00000ED4
    b lbl_fn_8018128C_00000ED8
lbl_fn_8018128C_00000ED4:
    fmr f4, f0
lbl_fn_8018128C_00000ED8:
    stfs f4, 0x14c4(r30)
    frsp f1, f4
    lfs f0, 0x544(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_8018128C_00000EF0
    b lbl_fn_8018128C_00000EF4
lbl_fn_8018128C_00000EF0:
    fmr f1, f0
lbl_fn_8018128C_00000EF4:
    frsp f1, f1
    lfs f0, lbl_80881C18
    lwz r0, 0xc90(r30)
    fmuls f0, f1, f0
    cmpwi r0, 0x0
    stfs f0, 0x14c4(r30)
    beq lbl_fn_8018128C_00000F34
    lfs f0, 0x560(r31)
    fcmpo cr0, f31, f0
    ble lbl_fn_8018128C_00000F2C
    mr r3, r30
    li r4, 0x1
    bl fn_8018161C
    b lbl_fn_8018128C_00000F3C
lbl_fn_8018128C_00000F2C:
    mr r3, r30
    bl fn_80181A64
lbl_fn_8018128C_00000F34:
    mr r3, r30
    bl fn_80181D94
lbl_fn_8018128C_00000F3C:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801814F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f1, lbl_80881C18
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, lbl_8087F0A8
    lfs f4, 0x530(r3)
    lfs f0, 0x540(r31)
    lfs f2, 0x52c(r3)
    fmuls f1, f1, f0
    lfs f0, 0x528(r3)
    stfs f1, 0x14c4(r3)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lfs f5, 0x530(r4)
    lfs f3, 0x52c(r4)
    lfs f1, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f4, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f2, 0xc(r1)
    bl fn_805F9940
    lfs f0, 0x564(r31)
    fmr f31, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_801814F0_00001010
    lwz r0, 0x14d0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801814F0_00001010
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x560(r3)
    cmpwi r0, 0x69
    beq lbl_fn_801814F0_00001010
    mr r3, r30
    li r4, 0x4
    bl fn_8018161C
    b lbl_fn_801814F0_00001068
lbl_fn_801814F0_00001010:
    lwz r0, 0xc90(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801814F0_0000102C
    mr r3, r30
    li r4, 0x1
    bl fn_8018161C
    b lbl_fn_801814F0_00001068
lbl_fn_801814F0_0000102C:
    mr r3, r30
    bl fn_80182134
    cmpwi r3, 0x0
    beq lbl_fn_801814F0_00001044
    lfs f0, 0x558(r31)
    b lbl_fn_801814F0_00001048
lbl_fn_801814F0_00001044:
    lfs f0, 0x55c(r31)
lbl_fn_801814F0_00001048:
    fcmpo cr0, f31, f0
    bge lbl_fn_801814F0_00001060
    mr r3, r30
    li r4, 0x3
    bl fn_8018161C
    b lbl_fn_801814F0_00001068
lbl_fn_801814F0_00001060:
    mr r3, r30
    bl fn_80181D94
lbl_fn_801814F0_00001068:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8018161C(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    mr r31, r4
    stw r30, 0x208(r1)
    mr r30, r3
    stw r29, 0x204(r1)
    stw r28, 0x200(r1)
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8018161C_000010E4
    cmpwi r0, 0x3
    beq lbl_fn_8018161C_000010EC
    cmpwi r0, 0x4
    beq lbl_fn_8018161C_000010F8
    b lbl_fn_8018161C_000010FC
lbl_fn_8018161C_000010E4:
    bl fn_80181A64
    b lbl_fn_8018161C_000010FC
lbl_fn_8018161C_000010EC:
    li r0, 0x0
    stw r0, 0x14cc(r3)
    b lbl_fn_8018161C_000010FC
lbl_fn_8018161C_000010F8:
    bl fn_80181A64
lbl_fn_8018161C_000010FC:
    cmpwi r31, 0x3
    beq lbl_fn_8018161C_00001118
    cmpwi r31, 0x1
    beq lbl_fn_8018161C_000011AC
    cmpwi r31, 0x4
    beq lbl_fn_8018161C_000011EC
    b lbl_fn_8018161C_00001494
lbl_fn_8018161C_00001118:
    lis r4, lbl_80738154@ha
    lfs f1, lbl_80881BF8
    addi r4, r4, lbl_80738154@l
    addi r3, r1, 0x8
    addi r4, r4, 0x34
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F8A0
    li r4, 0x3
    li r5, 0x1f
    lwz r3, 0x48(r3)
    bl fn_8014C0B4
    lwz r3, lbl_8087F8A0
    li r4, 0x2
    li r5, 0x19
    lwz r3, 0x48(r3)
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x3
    li r5, 0x1f
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x2
    li r5, 0x19
    bl fn_8014C0B4
    lwz r0, 0x14b0(r30)
    cmpwi r0, 0x2
    beq lbl_fn_8018161C_000011A0
    cmpwi r0, 0x0
    bne lbl_fn_8018161C_00001494
lbl_fn_8018161C_000011A0:
    mr r3, r30
    bl fn_80181A64
    b lbl_fn_8018161C_00001494
lbl_fn_8018161C_000011AC:
    lfs f0, lbl_80881BF8
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80881C04
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x8b
    lfs f2, lbl_80881C24
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881BF8
    stfs f0, 0x2e8(r30)
    b lbl_fn_8018161C_00001494
lbl_fn_8018161C_000011EC:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_8014C228
    mr r3, r30
    bl fn_8014C228
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x1c8
    lfs f7, lbl_80881C04
    li r4, 0x79
    lwz r28, 0x48(r5)
    lfs f0, lbl_80881BF8
    stfs f7, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f0, 0x44(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x3c
    addi r3, r1, 0x1c8
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x540(r30)
    addi r3, r1, 0x198
    lfs f2, 0x544(r30)
    lfs f3, 0x548(r30)
    bl fn_805F9160
    addi r4, r1, 0x198
    addi r3, r30, 0x14d4
    psq_l f1, 0x0(r4), 0, 0
    addi r29, r1, 0x168
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f7, lbl_80881C04
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_80881BF8
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0x194(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0x168(r1)
    lfs f1, 0x53c(r28)
    fcmpu cr0, f7, f1
    beq lbl_fn_8018161C_00001320
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x78
    addi r5, r1, 0x48
    bl fn_805F89F0
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8018161C_00001320:
    lfs f0, lbl_80881C04
    lfs f1, 0x538(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_8018161C_00001380
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8018161C_00001380:
    lfs f0, lbl_80881C04
    lfs f1, 0x534(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_8018161C_000013E0
    addi r3, r1, 0x138
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8018161C_000013E0:
    addi r4, r30, 0x14d4
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F89F0
    lfs f9, 0x44(r1)
    mr r3, r30
    lfs f8, lbl_80881C28
    mr r4, r28
    lfs f0, 0x40(r1)
    li r5, -0x1
    lfs f7, 0x3c(r1)
    fmuls f9, f9, f8
    fmuls f10, f0, f8
    lfs f0, 0x530(r28)
    fmuls f11, f7, f8
    lfs f7, 0x52c(r28)
    fsubs f12, f0, f9
    fsubs f13, f7, f10
    lfs f8, lbl_80881C04
    li r6, 0x96
    lfs f7, lbl_80881C10
    lfs f0, 0x528(r28)
    fadds f31, f12, f8
    fadds f30, f13, f7
    stfs f8, 0xc(r1)
    fsubs f0, f0, f11
    stfs f7, 0x10(r1)
    fadds f29, f0, f8
    stfs f8, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f9, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f12, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f30, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f29, 0x14e0(r30)
    stfs f30, 0x14f0(r30)
    stfs f31, 0x1500(r30)
    bl fn_801598B4
    mr r3, r28
    mr r4, r30
    bl fn_80159BA4
lbl_fn_8018161C_00001494:
    stw r31, 0x14b0(r30)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    lwz r28, 0x200(r1)
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_80181A64(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x70
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    bl _savegpr_19
    mr r20, r3
    lwz r3, lbl_8087F8A0
    lwz r4, lbl_8087F430
    li r25, -0x1
    lwz r22, 0x48(r3)
    lwz r26, 0x10d8(r4)
    mr r3, r22
    bl fn_80179D44
    lfs f1, lbl_80881C2C
    mr r5, r3
    mr r3, r26
    addi r4, r22, 0x528
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    mr r29, r3
    mr r3, r20
    bl fn_80179D44
    lfs f1, lbl_80881C2C
    mr r5, r3
    mr r3, r26
    addi r4, r20, 0x528
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    lfs f3, 0x530(r22)
    addi r5, r1, 0x14
    lfs f0, 0x530(r20)
    addi r4, r1, 0x2c
    lfs f5, 0x52c(r22)
    mr r21, r3
    fsubs f2, f3, f0
    lfs f4, 0x52c(r20)
    lfs f3, 0x528(r22)
    mr r3, r4
    lfs f0, 0x528(r20)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    lwz r22, 0x14b8(r20)
    li r24, 0x0
    li r23, -0x1
    bl fn_80680CF8
    divwu r4, r3, r22
    subi r0, r21, 0x1
    lfs f30, lbl_80881C04
    addi r28, r1, 0x8
    slwi r31, r0, 3
    lfs f31, lbl_80881C30
    mullw r0, r4, r22
    addi r27, r1, 0x20
    subf r22, r0, r3
    b lbl_fn_80181A64_000017A0
lbl_fn_80181A64_000015F0:
    lwz r3, 0x14b4(r20)
    slwi r0, r22, 2
    lwz r5, 0x78(r26)
    li r4, 0x0
    lwzx r6, r3, r0
    li r3, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_80181A64_0000163C
lbl_fn_80181A64_00001614:
    lwz r5, 0x7c(r26)
    lwzx r0, r5, r3
    cmpw r6, r0
    bne lbl_fn_80181A64_00001630
    mulli r0, r4, 0x28
    add r21, r5, r0
    b lbl_fn_80181A64_00001640
lbl_fn_80181A64_00001630:
    addi r3, r3, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80181A64_00001614
lbl_fn_80181A64_0000163C:
    li r21, 0x0
lbl_fn_80181A64_00001640:
    mr r3, r20
    bl fn_80179D44
    lfs f1, lbl_80881C2C
    mr r5, r3
    mr r3, r26
    addi r4, r21, 0x4
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    lwz r0, 0xa4(r26)
    mr r30, r3
    subi r4, r30, 0x1
    li r21, 0x1
    add r3, r0, r31
    addi r24, r24, 0x1
    bl fn_803CD958
    clrlwi r19, r3, 16
    lwz r4, 0x9c(r26)
    subi r0, r19, 0x1
    lfs f3, 0x530(r20)
    mulli r0, r0, 0x30
    lfs f4, 0x52c(r20)
    lfs f0, 0x528(r20)
    mr r3, r28
    add r5, r4, r0
    mr r4, r28
    lfs f6, 0xc(r5)
    lfs f5, 0x8(r5)
    fsubs f2, f6, f3
    lfs f3, 0x4(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x24(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    mr r3, r28
    addi r4, r1, 0x2c
    bl fn_805F9990
    bl fn_8068AE9C
    frsp f29, f1
    b lbl_fn_80181A64_00001724
lbl_fn_80181A64_000016F8:
    cmpw r19, r29
    bne lbl_fn_80181A64_00001708
    li r21, 0x0
    b lbl_fn_80181A64_00001734
lbl_fn_80181A64_00001708:
    subi r0, r19, 0x1
    lwz r3, 0xa4(r26)
    slwi r0, r0, 3
    subi r4, r30, 0x1
    add r3, r3, r0
    bl fn_803CD958
    clrlwi r19, r3, 16
lbl_fn_80181A64_00001724:
    cmpwi r19, 0x0
    beq lbl_fn_80181A64_00001734
    cmpw r19, r30
    bne lbl_fn_80181A64_000016F8
lbl_fn_80181A64_00001734:
    cmpwi r21, 0x0
    beq lbl_fn_80181A64_00001760
    cmpwi r23, -0x1
    beq lbl_fn_80181A64_0000174C
    fcmpo cr0, f30, f29
    bge lbl_fn_80181A64_00001754
lbl_fn_80181A64_0000174C:
    mr r23, r22
    fmr f30, f29
lbl_fn_80181A64_00001754:
    fcmpo cr0, f29, f31
    bge lbl_fn_80181A64_00001760
    li r21, 0x0
lbl_fn_80181A64_00001760:
    cmpwi r21, 0x0
    beq lbl_fn_80181A64_00001770
    mr r25, r22
    b lbl_fn_80181A64_0000178C
lbl_fn_80181A64_00001770:
    lwz r0, 0x14b8(r20)
    cmpw r24, r0
    blt lbl_fn_80181A64_0000178C
    cmpwi r23, -0x1
    mr r25, r23
    bne lbl_fn_80181A64_0000178C
    mr r25, r22
lbl_fn_80181A64_0000178C:
    lwz r3, 0x14b8(r20)
    addi r4, r22, 0x1
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf r22, r0, r4
lbl_fn_80181A64_000017A0:
    cmpwi r25, -0x1
    beq lbl_fn_80181A64_000015F0
    stw r25, 0x14c0(r20)
    slwi r0, r25, 2
    lwz r4, 0x14b4(r20)
    addi r3, r20, 0xc64
    addi r5, r20, 0x528
    li r6, 0x8
    lwzx r4, r4, r0
    bl fn_80128818
    addi r3, r20, 0xc64
    bl fn_801255C8
    addi r11, r1, 0x70
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    bl _restgpr_19
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80181D94(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    addi r31, r3, 0xc64
    stw r30, 0xf8(r1)
    mr r30, r3
    mr r3, r31
    stw r29, 0xf4(r1)
    bl fn_80125474
    cmpwi r3, 0x0
    bne lbl_fn_80181D94_00001928
    lwz r3, lbl_8087F430
    addi r4, r30, 0x528
    lfs f1, lbl_80881C2C
    li r5, 0x0
    lwz r29, 0x10d8(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    mr r3, r29
    bl fn_803C1560
    cmpwi r3, 0x0
    beq lbl_fn_80181D94_0000189C
    subi r0, r3, 0x1
    lwz r3, 0x9c(r29)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r30)
    psq_st f1, 0x528(r30), 0, 0
    b lbl_fn_80181D94_00001900
lbl_fn_80181D94_0000189C:
    lwz r0, 0x14c0(r30)
    li r5, 0x0
    lwz r4, 0x14b4(r30)
    li r6, 0x0
    slwi r3, r0, 2
    lwz r0, 0x78(r29)
    lwzx r4, r4, r3
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80181D94_000018EC
lbl_fn_80181D94_000018C4:
    lwz r3, 0x7c(r29)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_80181D94_000018E0
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_80181D94_000018F0
lbl_fn_80181D94_000018E0:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80181D94_000018C4
lbl_fn_80181D94_000018EC:
    li r3, 0x0
lbl_fn_80181D94_000018F0:
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r30)
    psq_st f1, 0x528(r30), 0, 0
lbl_fn_80181D94_00001900:
    lwz r0, 0x14c0(r30)
    addi r3, r30, 0xc64
    lwz r4, 0x14b4(r30)
    addi r5, r30, 0x528
    slwi r0, r0, 2
    li r6, 0x8
    lwzx r4, r4, r0
    bl fn_80128818
    addi r3, r30, 0xc64
    bl fn_801255C8
lbl_fn_80181D94_00001928:
    mr r3, r31
    bl fn_80126214
    psq_l f1, 0x58(r31), 0, 0
    addi r29, r1, 0x68
    lfs f2, 0x60(r31)
    addi r3, r1, 0x5c
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x534(r30), 0, 0
    lfs f2, 0x53c(r30)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0xc90(r30)
    lfs f31, 0x14c4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80181D94_00001B44
    mr r3, r29
    bl fn_805F9920
    lfs f0, lbl_80881C34
    fcmpo cr0, f1, f0
    ble lbl_fn_80181D94_00001B48
    mr r3, r29
    mr r4, r29
    bl fn_805F98D0
    lfs f2, 0x70(r1)
    addi r31, r1, 0x50
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881C38
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80181D94_000019D4
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881C04
    fcmpo cr0, f3, f0
    ble lbl_fn_80181D94_000019C8
    lfs f0, lbl_80881C30
    b lbl_fn_80181D94_000019CC
lbl_fn_80181D94_000019C8:
    lfs f0, lbl_80881C3C
lbl_fn_80181D94_000019CC:
    stfs f0, 0x48(r1)
    b lbl_fn_80181D94_000019E8
lbl_fn_80181D94_000019D4:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80181D94_000019E8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881C04
    addi r4, r1, 0x38
    lfs f29, 0x80(r1)
    mr r5, r4
    lfs f30, 0x7c(r1)
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
    lfs f0, lbl_80881BF8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f30, 0xac(r1)
    stfs f29, 0xb0(r1)
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
    lfs f0, lbl_80881C38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80181D94_00001B04
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881C04
    fcmpo cr0, f3, f0
    ble lbl_fn_80181D94_00001AF4
    lfs f0, lbl_80881C30
    b lbl_fn_80181D94_00001AF8
lbl_fn_80181D94_00001AF4:
    lfs f0, lbl_80881C3C
lbl_fn_80181D94_00001AF8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80181D94_00001B18
lbl_fn_80181D94_00001B04:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80181D94_00001B18:
    lfs f2, lbl_80881C04
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x5c
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    b lbl_fn_80181D94_00001B48
lbl_fn_80181D94_00001B44:
    lfs f31, lbl_80881C04
lbl_fn_80181D94_00001B48:
    lwz r12, 0x0(r30)
    fmr f1, f31
    mr r3, r30
    addi r4, r1, 0x5c
    lwz r12, 0x34(r12)
    li r5, 0x0
    lfs f2, 0x14c4(r30)
    mtctr r12
    bctrl
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
