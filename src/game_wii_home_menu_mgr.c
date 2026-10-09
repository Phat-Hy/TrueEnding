#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80092814(void);
extern void fn_80148B38(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_8016E484(void);
extern void fn_8036554C(void);
extern void fn_8056A9E8(void);
extern void fn_8056D070(void);
extern void fn_8056D440(void);
extern void fn_80570810(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8075FE70[];
extern u8 lbl_8075FF7C[];
extern u8 lbl_80795820[];
extern u8 lbl_80795828[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80888020;
extern u32 lbl_80888024;
extern u32 lbl_80888028;
extern u32 lbl_8088802C;
extern u32 lbl_80888030;
extern u32 lbl_80888034;
extern u32 lbl_80888038;
extern u32 lbl_8088803C;
extern u32 lbl_80888040;
extern u32 lbl_80888044;
extern u32 lbl_80888048;

/* Function declarations */
void fn_8056B2C4(void);
void fn_8056B2E4(void);
void fn_8056B38C(void);
void fn_8056B398(void);
void fn_8056B3D8(void);
void fn_8056B55C(void);
void fn_8056BAA8(void);
void fn_8056BD38(void);
void fn_8056BF90(void);
void fn_8056C39C(void);
void fn_8056C3DC(void);
void fn_8056CB24(void);

asm void fn_8056B2C4(void)
{
    nofralloc
    mr r7, r3
    mr r3, r4
    lwz r12, 0x0(r7)
    mr r4, r5
    mr r5, r6
    lfs f1, 0x4(r7)
    mtctr r12
    bctr
}

asm void fn_8056B2E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8056B2E4_00000054
    lis r3, lbl_80795820@ha
    addi r3, r3, lbl_80795820@l
    stw r3, 0x0(r4)
    b lbl_fn_8056B2E4_000000B0
lbl_fn_8056B2E4_00000054:
    cmpwi r5, 0x0
    bne lbl_fn_8056B2E4_00000078
    cmpwi r4, 0x0
    beq lbl_fn_8056B2E4_000000B0
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    b lbl_fn_8056B2E4_000000B0
lbl_fn_8056B2E4_00000078:
    cmpwi r5, 0x1
    beq lbl_fn_8056B2E4_000000B0
    lwz r5, 0x0(r4)
    lis r3, lbl_80795820@ha
    lwz r4, lbl_80795820@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8056B2E4_000000A8
    stw r30, 0x0(r31)
    b lbl_fn_8056B2E4_000000B0
lbl_fn_8056B2E4_000000A8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8056B2E4_000000B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8056B38C(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x460(r3)
    blr
}

asm void fn_8056B398(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8056B398_000000FC
    cmpwi r4, 0x0
    ble lbl_fn_8056B398_000000FC
    bl dtor_80084684
lbl_fn_8056B398_000000FC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8056B3D8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    stw r30, 0x68(r1)
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lfs f1, 0x528(r4)
    lfs f2, 0x52c(r4)
    lfs f3, 0x530(r4)
    bl fn_805F90D0
    addi r5, r1, 0x8
    addi r3, r1, 0x38
    psq_l f1, 0x0(r5), 0, 0
    li r0, 0x0
    psq_l f2, 0x8(r5), 0, 0
    mr r4, r3
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x48c(r31), 0, 0
    psq_st f1, 0x464(r31), 0, 0
    psq_st f2, 0x46c(r31), 0, 0
    psq_st f3, 0x474(r31), 0, 0
    psq_st f4, 0x47c(r31), 0, 0
    psq_st f5, 0x484(r31), 0, 0
    stb r0, 0x460(r31)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    bl fn_805F8CA0
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    b lbl_fn_8056B3D8_00000204
lbl_fn_8056B3D8_000001B4:
    lwz r4, 0x38(r30)
    rlwinm r0, r4, 0, 29, 29
    cmplwi cr1, r0, 0x4
    beq cr1, lbl_fn_8056B3D8_00000200
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8056B3D8_000001F0
    li r3, 0x0
    beq cr1, lbl_fn_8056B3D8_000001E4
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8056B3D8_000001E8
lbl_fn_8056B3D8_000001E4:
    li r3, 0x1
lbl_fn_8056B3D8_000001E8:
    cmpwi r3, 0x0
    bne lbl_fn_8056B3D8_00000200
lbl_fn_8056B3D8_000001F0:
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0x38
    bl fn_8056B55C
lbl_fn_8056B3D8_00000200:
    lwz r30, 0x14ac(r30)
lbl_fn_8056B3D8_00000204:
    cmpwi r30, 0x0
    bne lbl_fn_8056B3D8_000001B4
    lwz r3, lbl_8087F890
    lwz r30, 0x48(r3)
    b lbl_fn_8056B3D8_00000278
lbl_fn_8056B3D8_00000218:
    lwz r4, 0x38(r30)
    rlwinm r0, r4, 0, 29, 29
    cmplwi cr1, r0, 0x4
    beq cr1, lbl_fn_8056B3D8_00000274
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8056B3D8_00000254
    li r3, 0x0
    beq cr1, lbl_fn_8056B3D8_00000248
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8056B3D8_0000024C
lbl_fn_8056B3D8_00000248:
    li r3, 0x1
lbl_fn_8056B3D8_0000024C:
    cmpwi r3, 0x0
    bne lbl_fn_8056B3D8_00000274
lbl_fn_8056B3D8_00000254:
    mr r3, r30
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_8056B3D8_00000274
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0x38
    bl fn_8056B55C
lbl_fn_8056B3D8_00000274:
    lwz r30, 0x1424(r30)
lbl_fn_8056B3D8_00000278:
    cmpwi r30, 0x0
    bne lbl_fn_8056B3D8_00000218
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8056B55C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x130
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    bl _savegpr_27
    lbz r0, 0x460(r3)
    mr r28, r3
    mr r29, r4
    mr r6, r5
    extsb r0, r0
    cmpwi r0, 0x8
    bge lbl_fn_8056B55C_000007BC
    lwz r5, 0x38(r4)
    rlwinm r5, r5, 0, 30, 30
    cmplwi r5, 0x2
    bne lbl_fn_8056B55C_000007BC
    mulli r0, r0, 0x8c
    addi r31, r4, 0xb0
    addi r5, r1, 0xe0
    add r30, r3, r0
    mr r3, r6
    stw r4, 0x0(r30)
    lwz r0, 0x100(r4)
    stb r0, 0x5(r30)
    lwz r0, 0x674(r4)
    addi r4, r31, 0x8
    stb r0, 0x4(r30)
    lwz r0, 0x34c(r31)
    stb r0, 0x6(r30)
    bl fn_805F89F0
    li r0, 0x6
    addi r5, r1, 0xe0
    li r8, 0x0
    mtctr r0
lbl_fn_8056B55C_00000330:
    extlwi r6, r8, 28, 2
    clrlslwi r4, r8, 30, 2
    add r0, r5, r6
    clrlwi r9, r8, 30
    lfsx f0, r4, r0
    srwi r6, r8, 2
    stfs f0, 0x18(r1)
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056B55C_00000360
    li r7, 0x0
    b lbl_fn_8056B55C_00000390
lbl_fn_8056B55C_00000360:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056B55C_00000374
    li r7, 0x0
    b lbl_fn_8056B55C_00000390
lbl_fn_8056B55C_00000374:
    cmpwi r3, 0x1f
    ble lbl_fn_8056B55C_00000380
    li r3, 0x1f
lbl_fn_8056B55C_00000380:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r7, r0
lbl_fn_8056B55C_00000390:
    slwi r0, r6, 3
    addi r8, r8, 0x1
    slwi r3, r9, 1
    add r0, r30, r0
    extlwi r6, r8, 28, 2
    add r3, r3, r0
    clrlslwi r4, r8, 30, 2
    add r0, r5, r6
    sth r7, 0x8(r3)
    srwi r6, r8, 2
    clrlwi r9, r8, 30
    lfsx f0, r4, r0
    stfs f0, 0x18(r1)
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056B55C_000003D8
    li r7, 0x0
    b lbl_fn_8056B55C_00000408
lbl_fn_8056B55C_000003D8:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056B55C_000003EC
    li r7, 0x0
    b lbl_fn_8056B55C_00000408
lbl_fn_8056B55C_000003EC:
    cmpwi r3, 0x1f
    ble lbl_fn_8056B55C_000003F8
    li r3, 0x1f
lbl_fn_8056B55C_000003F8:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r7, r0
lbl_fn_8056B55C_00000408:
    slwi r0, r6, 3
    slwi r3, r9, 1
    add r0, r30, r0
    addi r8, r8, 0x1
    add r3, r3, r0
    sth r7, 0x8(r3)
    bdnz lbl_fn_8056B55C_00000330
    mr r3, r30
    mr r4, r31
    bl fn_8056BAA8
    lis r4, lbl_8075FF7C@ha
    lwz r27, 0x220(r31)
    addi r4, r4, lbl_8075FF7C@l
    mr r3, r31
    addi r4, r4, 0xb
    li r5, 0x0
    bl fn_80092814
    mulli r0, r3, 0x2c
    add r5, r27, r0
    lfs f0, 0x4(r5)
    stfs f0, 0xc(r1)
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056B55C_00000470
    li r0, 0x0
    b lbl_fn_8056B55C_000004A0
lbl_fn_8056B55C_00000470:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056B55C_00000484
    li r0, 0x0
    b lbl_fn_8056B55C_000004A0
lbl_fn_8056B55C_00000484:
    cmpwi r3, 0x1f
    ble lbl_fn_8056B55C_00000490
    li r3, 0x1f
lbl_fn_8056B55C_00000490:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056B55C_000004A0:
    sth r0, 0x80(r30)
    lfs f0, 0x8(r5)
    stfs f0, 0x10(r1)
    lwz r4, 0x10(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056B55C_000004C0
    li r0, 0x0
    b lbl_fn_8056B55C_000004F0
lbl_fn_8056B55C_000004C0:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056B55C_000004D4
    li r0, 0x0
    b lbl_fn_8056B55C_000004F0
lbl_fn_8056B55C_000004D4:
    cmpwi r3, 0x1f
    ble lbl_fn_8056B55C_000004E0
    li r3, 0x1f
lbl_fn_8056B55C_000004E0:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056B55C_000004F0:
    sth r0, 0x82(r30)
    lfs f0, 0xc(r5)
    stfs f0, 0x14(r1)
    lwz r4, 0x14(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056B55C_00000510
    li r0, 0x0
    b lbl_fn_8056B55C_00000540
lbl_fn_8056B55C_00000510:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056B55C_00000524
    li r0, 0x0
    b lbl_fn_8056B55C_00000540
lbl_fn_8056B55C_00000524:
    cmpwi r3, 0x1f
    ble lbl_fn_8056B55C_00000530
    li r3, 0x1f
lbl_fn_8056B55C_00000530:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056B55C_00000540:
    sth r0, 0x84(r30)
    addi r3, r29, 0xfa4
    lfs f0, lbl_80888028
    addi r31, r1, 0x64
    lwz r0, 0x0(r5)
    sth r0, 0x86(r30)
    lfs f2, 0xfac(r29)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x6c(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056B55C_0000059C
    lfs f3, 0x64(r1)
    lfs f0, lbl_80888020
    fcmpo cr0, f3, f0
    ble lbl_fn_8056B55C_00000590
    lfs f0, lbl_8088802C
    b lbl_fn_8056B55C_00000594
lbl_fn_8056B55C_00000590:
    lfs f0, lbl_80888030
lbl_fn_8056B55C_00000594:
    stfs f0, 0x5c(r1)
    b lbl_fn_8056B55C_000005B0
lbl_fn_8056B55C_0000059C:
    frsp f2, f2
    lfs f1, 0x64(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x5c(r1)
lbl_fn_8056B55C_000005B0:
    lfs f0, 0x5c(r1)
    addi r3, r1, 0x70
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80888020
    addi r4, r1, 0x4c
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
    lfs f0, lbl_80888034
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x6c(r1)
    stfs f3, 0xd0(r1)
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f13, 0x1c(r1)
    stfs f31, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f13, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f30, 0xa8(r1)
    stfs f10, 0x28(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f10, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f12, 0xb8(r1)
    stfs f7, 0x34(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f7, 0xc0(r1)
    stfs f8, 0xc4(r1)
    stfs f9, 0xc8(r1)
    stfs f4, 0x40(r1)
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f4, 0xac(r1)
    stfs f5, 0xbc(r1)
    stfs f6, 0xcc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F9750
    lfs f2, 0x54(r1)
    lfs f0, lbl_80888028
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056B55C_000006CC
    lfs f3, 0x50(r1)
    lfs f0, lbl_80888020
    fcmpo cr0, f3, f0
    ble lbl_fn_8056B55C_000006BC
    lfs f0, lbl_8088802C
    b lbl_fn_8056B55C_000006C0
lbl_fn_8056B55C_000006BC:
    lfs f0, lbl_80888030
lbl_fn_8056B55C_000006C0:
    fneg f0, f0
    stfs f0, 0x58(r1)
    b lbl_fn_8056B55C_000006E0
lbl_fn_8056B55C_000006CC:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x58(r1)
lbl_fn_8056B55C_000006E0:
    addi r3, r1, 0x58
    lfs f4, lbl_80888020
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8075FE70@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r29)
    lfs f3, 0x68(r1)
    stfs f2, 0x6c(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8075FE70@l(r3)
    stfs f4, 0x60(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80888038
    fcmpo cr0, f3, f0
    ble lbl_fn_8056B55C_0000072C
    lfs f0, lbl_8088803C
    fsubs f3, f3, f0
lbl_fn_8056B55C_0000072C:
    lfs f0, lbl_80888040
    fcmpo cr0, f3, f0
    bge lbl_fn_8056B55C_00000740
    lfs f0, lbl_8088803C
    fadds f3, f3, f0
lbl_fn_8056B55C_00000740:
    stfs f3, 0x8(r1)
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056B55C_00000758
    li r0, 0x0
    b lbl_fn_8056B55C_00000788
lbl_fn_8056B55C_00000758:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056B55C_0000076C
    li r0, 0x0
    b lbl_fn_8056B55C_00000788
lbl_fn_8056B55C_0000076C:
    cmpwi r3, 0x1f
    ble lbl_fn_8056B55C_00000778
    li r3, 0x1f
lbl_fn_8056B55C_00000778:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056B55C_00000788:
    sth r0, 0x88(r30)
    li r3, 0x0
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8056B55C_000007AC
    lwz r0, 0xc48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8056B55C_000007AC
    li r3, 0x1
lbl_fn_8056B55C_000007AC:
    stb r3, 0x7(r30)
    lbz r3, 0x460(r28)
    addi r0, r3, 0x1
    stb r0, 0x460(r28)
lbl_fn_8056B55C_000007BC:
    addi r11, r1, 0x130
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    bl _restgpr_27
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8056BAA8(void)
{
    nofralloc
    li r0, 0x4
    stwu r1, -0x20(r1)
    lfs f2, lbl_80888024
    addi r6, r4, 0x22c
    lfs f1, lbl_80888020
    mtctr r0
lbl_fn_8056BAA8_000007FC:
    lwz r0, 0x0(r6)
    sth r0, 0x28(r3)
    lwz r0, 0x4(r6)
    stw r0, 0x20(r3)
    lfs f0, 0x8(r6)
    stfs f0, 0x10(r1)
    lwz r5, 0x10(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8056BAA8_00000828
    li r0, 0x0
    b lbl_fn_8056BAA8_00000858
lbl_fn_8056BAA8_00000828:
    extrwi r4, r5, 8, 1
    subic. r4, r4, 0x70
    bge lbl_fn_8056BAA8_0000083C
    li r0, 0x0
    b lbl_fn_8056BAA8_00000858
lbl_fn_8056BAA8_0000083C:
    cmpwi r4, 0x1f
    ble lbl_fn_8056BAA8_00000848
    li r4, 0x1f
lbl_fn_8056BAA8_00000848:
    rlwinm r0, r5, 16, 16, 16
    rlwimi r0, r4, 10, 17, 21
    rlwimi r0, r5, 19, 22, 31
    extsh r0, r0
lbl_fn_8056BAA8_00000858:
    sth r0, 0x2a(r3)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r1)
    lwz r5, 0xc(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8056BAA8_00000878
    li r0, 0x0
    b lbl_fn_8056BAA8_000008A8
lbl_fn_8056BAA8_00000878:
    extrwi r4, r5, 8, 1
    subic. r4, r4, 0x70
    bge lbl_fn_8056BAA8_0000088C
    li r0, 0x0
    b lbl_fn_8056BAA8_000008A8
lbl_fn_8056BAA8_0000088C:
    cmpwi r4, 0x1f
    ble lbl_fn_8056BAA8_00000898
    li r4, 0x1f
lbl_fn_8056BAA8_00000898:
    rlwinm r0, r5, 16, 16, 16
    rlwimi r0, r4, 10, 17, 21
    rlwimi r0, r5, 19, 22, 31
    extsh r0, r0
lbl_fn_8056BAA8_000008A8:
    sth r0, 0x2c(r3)
    lbz r0, 0x18(r6)
    stb r0, 0x30(r3)
    lfs f0, 0x10(r6)
    fmuls f3, f2, f0
    fcmpo cr0, f2, f3
    bge lbl_fn_8056BAA8_000008C8
    fmr f3, f2
lbl_fn_8056BAA8_000008C8:
    fcmpo cr0, f1, f3
    ble lbl_fn_8056BAA8_000008D8
    fmr f0, f1
    b lbl_fn_8056BAA8_000008E8
lbl_fn_8056BAA8_000008D8:
    fmuls f0, f2, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8056BAA8_000008E8
    fmr f0, f2
lbl_fn_8056BAA8_000008E8:
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x31(r3)
    lfs f0, 0x14(r6)
    fmuls f3, f2, f0
    fcmpo cr0, f2, f3
    bge lbl_fn_8056BAA8_0000090C
    fmr f3, f2
lbl_fn_8056BAA8_0000090C:
    fcmpo cr0, f1, f3
    ble lbl_fn_8056BAA8_0000091C
    fmr f0, f1
    b lbl_fn_8056BAA8_0000092C
lbl_fn_8056BAA8_0000091C:
    fmuls f0, f2, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8056BAA8_0000092C
    fmr f0, f2
lbl_fn_8056BAA8_0000092C:
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x32(r3)
    lfs f0, 0x1c(r6)
    fmuls f3, f2, f0
    fcmpo cr0, f2, f3
    bge lbl_fn_8056BAA8_00000950
    fmr f3, f2
lbl_fn_8056BAA8_00000950:
    fcmpo cr0, f1, f3
    ble lbl_fn_8056BAA8_00000960
    fmr f0, f1
    b lbl_fn_8056BAA8_00000970
lbl_fn_8056BAA8_00000960:
    fmuls f0, f2, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8056BAA8_00000970
    fmr f0, f2
lbl_fn_8056BAA8_00000970:
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x33(r3)
    lfs f0, 0x20(r6)
    fmuls f3, f2, f0
    fcmpo cr0, f2, f3
    bge lbl_fn_8056BAA8_00000994
    fmr f3, f2
lbl_fn_8056BAA8_00000994:
    fcmpo cr0, f1, f3
    ble lbl_fn_8056BAA8_000009A4
    fmr f0, f1
    b lbl_fn_8056BAA8_000009B4
lbl_fn_8056BAA8_000009A4:
    fmuls f0, f2, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8056BAA8_000009B4
    fmr f0, f2
lbl_fn_8056BAA8_000009B4:
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x34(r3)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r3)
    lfs f0, 0x28(r6)
    stfs f0, 0x8(r1)
    lwz r5, 0x8(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8056BAA8_000009E8
    li r0, 0x0
    b lbl_fn_8056BAA8_00000A18
lbl_fn_8056BAA8_000009E8:
    extrwi r4, r5, 8, 1
    subic. r4, r4, 0x70
    bge lbl_fn_8056BAA8_000009FC
    li r0, 0x0
    b lbl_fn_8056BAA8_00000A18
lbl_fn_8056BAA8_000009FC:
    cmpwi r4, 0x1f
    ble lbl_fn_8056BAA8_00000A08
    li r4, 0x1f
lbl_fn_8056BAA8_00000A08:
    rlwinm r0, r5, 16, 16, 16
    rlwimi r0, r4, 10, 17, 21
    rlwimi r0, r5, 19, 22, 31
    extsh r0, r0
lbl_fn_8056BAA8_00000A18:
    sth r0, 0x2e(r3)
    lfs f0, 0x2c(r6)
    fmuls f3, f2, f0
    fcmpo cr0, f2, f3
    bge lbl_fn_8056BAA8_00000A30
    fmr f3, f2
lbl_fn_8056BAA8_00000A30:
    fcmpo cr0, f1, f3
    ble lbl_fn_8056BAA8_00000A40
    fmr f0, f1
    b lbl_fn_8056BAA8_00000A50
lbl_fn_8056BAA8_00000A40:
    fmuls f0, f2, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8056BAA8_00000A50
    fmr f0, f2
lbl_fn_8056BAA8_00000A50:
    fctiwz f0, f0
    addi r6, r6, 0x30
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stb r0, 0x35(r3)
    addi r3, r3, 0x18
    bdnz lbl_fn_8056BAA8_000007FC
    addi r1, r1, 0x20
    blr
}

asm void fn_8056BD38(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_25
    lbz r0, 0x460(r3)
    mr r27, r3
    li r28, 0x0
    extsb. r0, r0
    ble lbl_fn_8056BD38_00000CAC
    mr r29, r27
    addi r31, r1, 0x58
    li r25, 0x0
    li r26, 0x6
    b lbl_fn_8056BD38_00000C9C
lbl_fn_8056BD38_00000AB8:
    lwz r3, 0x0(r29)
    li r5, 0x0
    lbz r4, 0x5(r29)
    addi r30, r3, 0xb0
    lwz r3, 0x100(r3)
    lwz r0, 0x20c(r30)
    extsb r4, r4
    rlwimi r0, r3, 8, 16, 23
    stw r0, 0x20c(r30)
    stw r4, 0x50(r30)
    lbz r0, 0x6(r29)
    extsb r0, r0
    stw r0, 0x34c(r30)
    mtctr r26
lbl_fn_8056BD38_00000AF0:
    extlwi r4, r5, 29, 1
    clrlslwi r3, r5, 30, 1
    add r0, r29, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056BD38_00000B1C
    lfs f0, lbl_80888020
    b lbl_fn_8056BD38_00000B38
lbl_fn_8056BD38_00000B1C:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x8(r1)
    lfs f0, 0x8(r1)
lbl_fn_8056BD38_00000B38:
    slwi r0, r6, 4
    addi r5, r5, 0x1
    slwi r3, r7, 2
    add r0, r31, r0
    extlwi r4, r5, 29, 1
    stfsx f0, r3, r0
    clrlslwi r3, r5, 30, 1
    add r0, r29, r4
    srwi r6, r5, 2
    add r3, r3, r0
    clrlwi r7, r5, 30
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056BD38_00000B78
    lfs f0, lbl_80888020
    b lbl_fn_8056BD38_00000B94
lbl_fn_8056BD38_00000B78:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0x8(r1)
    lfs f0, 0x8(r1)
lbl_fn_8056BD38_00000B94:
    slwi r0, r6, 4
    slwi r3, r7, 2
    add r0, r31, r0
    addi r5, r5, 0x1
    stfsx f0, r3, r0
    bdnz lbl_fn_8056BD38_00000AF0
    lha r0, 0x88(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8056BD38_00000BC0
    lfs f31, lbl_80888020
    b lbl_fn_8056BD38_00000BDC
lbl_fn_8056BD38_00000BC0:
    extrwi r3, r0, 5, 17
    extlwi r4, r0, 1, 16
    rlwimi r4, r0, 13, 9, 18
    addi r0, r3, 0x70
    rlwimi r4, r0, 23, 1, 8
    stw r4, 0xc(r1)
    lfs f31, 0xc(r1)
lbl_fn_8056BD38_00000BDC:
    stw r25, 0x88(r1)
    mr r4, r31
    addi r3, r27, 0x464
    addi r5, r1, 0x28
    bl fn_805F89F0
    fmr f1, f31
    mr r3, r30
    mr r8, r29
    addi r4, r29, 0x20
    addi r6, r1, 0x28
    addi r7, r1, 0x88
    li r5, 0x4
    bl fn_8056A9E8
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x10
    lfs f5, 0x34(r30)
    lfs f4, 0x24(r30)
    lfs f3, 0x14(r30)
    lfs f2, 0x114(r4)
    lfs f1, 0x110(r4)
    lfs f0, 0x10c(r4)
    fsubs f2, f2, f5
    fsubs f1, f1, f4
    stfs f3, 0x1c(r1)
    fsubs f0, f0, f3
    stfs f4, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f2, 0x18(r1)
    bl fn_805F9920
    lbz r0, 0x4(r29)
    fmr f31, f1
    extsb. r4, r0
    blt lbl_fn_8056BD38_00000C7C
    lwz r3, 0x0(r29)
    li r5, 0x1
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_8056BD38_00000C88
lbl_fn_8056BD38_00000C7C:
    lwz r3, 0x0(r29)
    li r4, 0x1
    bl fn_8014EEC4
lbl_fn_8056BD38_00000C88:
    fmr f1, f31
    lwz r3, 0x0(r29)
    bl fn_80148B38
    addi r29, r29, 0x8c
    addi r28, r28, 0x1
lbl_fn_8056BD38_00000C9C:
    lbz r0, 0x460(r27)
    extsb r0, r0
    cmpw r28, r0
    blt lbl_fn_8056BD38_00000AB8
lbl_fn_8056BD38_00000CAC:
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_25
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8056BF90(void)
{
    nofralloc
    addis r5, r3, 0x4
    li r0, 0x0
    addi r4, r5, 0x3970
    addi r7, r3, 0x1810
    lis r6, lbl_80795828@ha
    stw r0, 0x4(r3)
    addi r6, r6, lbl_80795828@l
    cmplw r7, r4
    stw r6, 0x0(r3)
    stb r0, 0x155c(r3)
    stb r0, 0x155d(r3)
    bge lbl_fn_8056BF90_00000DCC
    addi r0, r3, 0x1810
    subis r8, r5, 0x1
    cmplw r0, r4
    li r4, 0x0
    li r0, 0x0
    addi r8, r8, 0x7930
    bgt lbl_fn_8056BF90_00000D1C
    li r4, 0x1
lbl_fn_8056BF90_00000D1C:
    cmpwi r4, 0x0
    beq lbl_fn_8056BF90_00000D28
    li r0, 0x1
lbl_fn_8056BF90_00000D28:
    cmpwi r0, 0x0
    beq lbl_fn_8056BF90_00000D94
    li r0, 0x0
    b lbl_fn_8056BF90_00000D8C
lbl_fn_8056BF90_00000D38:
    stb r0, 0x1554(r7)
    addi r6, r7, 0x1554
    addi r5, r7, 0x1555
    addis r4, r7, 0x1
    stb r0, 0x1555(r7)
    stb r0, 0x2d5c(r7)
    stb r0, 0x2d5d(r7)
    stb r0, 0x4564(r7)
    stb r0, 0x4565(r7)
    stb r0, 0x5d6c(r7)
    stb r0, 0x5d6d(r7)
    stb r0, 0x7574(r7)
    stb r0, 0x7575(r7)
    addis r7, r7, 0x1
    subi r7, r7, 0x3fc0
    stb r0, 0x7828(r6)
    stb r0, 0x7828(r5)
    stb r0, -0x5a7c(r4)
    stb r0, -0x5a7b(r4)
    stb r0, -0x4274(r4)
    stb r0, -0x4273(r4)
lbl_fn_8056BF90_00000D8C:
    cmplw r7, r8
    blt lbl_fn_8056BF90_00000D38
lbl_fn_8056BF90_00000D94:
    addis r4, r3, 0x4
    li r0, 0x1808
    addi r5, r4, 0x3970
    li r6, 0x0
    addi r4, r5, 0x1807
    subf r4, r7, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r7, r5
    bge lbl_fn_8056BF90_00000DCC
lbl_fn_8056BF90_00000DBC:
    stb r6, 0x1554(r7)
    stb r6, 0x1555(r7)
    addi r7, r7, 0x1808
    bdnz lbl_fn_8056BF90_00000DBC
lbl_fn_8056BF90_00000DCC:
    addis r7, r3, 0x4
    addis r4, r3, 0x5
    addi r0, r4, 0x2184
    li r8, 0x0
    addi r9, r7, 0x51ec
    li r6, 0x1
    li r5, -0x1
    stb r8, 0x4ec4(r7)
    cmplw r9, r0
    stb r8, 0x4ec5(r7)
    stw r8, 0x5178(r7)
    stw r8, 0x517c(r7)
    stw r6, 0x5180(r7)
    stw r5, 0x5184(r7)
    bge lbl_fn_8056BF90_00000EAC
    addi r6, r4, 0x1e44
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_8056BF90_00000E1C
    li r4, 0x1
lbl_fn_8056BF90_00000E1C:
    cmpwi r4, 0x0
    beq lbl_fn_8056BF90_00000E28
    li r0, 0x1
lbl_fn_8056BF90_00000E28:
    cmpwi r0, 0x0
    beq lbl_fn_8056BF90_00000E78
    addi r4, r6, 0x33f
    li r0, 0x340
    subf r4, r9, r4
    li r5, -0x1
    divwu r4, r4, r0
    mtctr r4
    cmplw r9, r6
    bge lbl_fn_8056BF90_00000E78
lbl_fn_8056BF90_00000E50:
    stw r5, 0x0(r9)
    stw r5, 0x68(r9)
    stw r5, 0xd0(r9)
    stw r5, 0x138(r9)
    stw r5, 0x1a0(r9)
    stw r5, 0x208(r9)
    stw r5, 0x270(r9)
    stw r5, 0x2d8(r9)
    addi r9, r9, 0x340
    bdnz lbl_fn_8056BF90_00000E50
lbl_fn_8056BF90_00000E78:
    addis r4, r3, 0x5
    li r0, 0x68
    addi r5, r4, 0x2184
    li r6, -0x1
    addi r4, r5, 0x67
    subf r4, r9, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r9, r5
    bge lbl_fn_8056BF90_00000EAC
lbl_fn_8056BF90_00000EA0:
    stw r6, 0x0(r9)
    addi r9, r9, 0x68
    bdnz lbl_fn_8056BF90_00000EA0
lbl_fn_8056BF90_00000EAC:
    addis r6, r3, 0x5
    addis r4, r3, 0x6
    subi r0, r4, 0x466c
    li r7, 0x0
    addi r8, r6, 0x29dc
    lfs f2, lbl_80888044
    lfs f1, lbl_80888020
    li r5, -0x1
    lfs f0, lbl_80888034
    cmplw r8, r0
    stw r7, 0x2184(r6)
    stw r7, 0x2988(r6)
    stw r7, 0x298c(r6)
    stw r7, 0x2990(r6)
    stw r5, 0x2994(r6)
    stfs f2, 0x299c(r6)
    stw r7, 0x29a0(r6)
    stw r7, 0x29a4(r6)
    stw r7, 0x29ac(r6)
    stfs f1, 0x29b0(r6)
    stfs f0, 0x29b4(r6)
    bge lbl_fn_8056BF90_000010A0
    subi r6, r4, 0x48ac
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_8056BF90_00000F18
    li r4, 0x1
lbl_fn_8056BF90_00000F18:
    cmpwi r4, 0x0
    beq lbl_fn_8056BF90_00000F24
    li r0, 0x1
lbl_fn_8056BF90_00000F24:
    cmpwi r0, 0x0
    beq lbl_fn_8056BF90_00001044
    addi r4, r6, 0x23f
    li r0, 0x240
    subf r4, r8, r4
    lfs f2, lbl_80888044
    divwu r4, r4, r0
    lfs f1, lbl_80888020
    lfs f0, lbl_80888034
    li r5, -0x1
    li r0, 0x0
    mtctr r4
    cmplw r8, r6
    bge lbl_fn_8056BF90_00001044
lbl_fn_8056BF90_00000F5C:
    stw r5, 0x0(r8)
    stfs f2, 0x8(r8)
    stw r0, 0xc(r8)
    stw r0, 0x10(r8)
    stw r0, 0x18(r8)
    stfs f1, 0x1c(r8)
    stfs f0, 0x20(r8)
    stw r5, 0x48(r8)
    stfs f2, 0x50(r8)
    stw r0, 0x54(r8)
    stw r0, 0x58(r8)
    stw r0, 0x60(r8)
    stfs f1, 0x64(r8)
    stfs f0, 0x68(r8)
    stw r5, 0x90(r8)
    stfs f2, 0x98(r8)
    stw r0, 0x9c(r8)
    stw r0, 0xa0(r8)
    stw r0, 0xa8(r8)
    stfs f1, 0xac(r8)
    stfs f0, 0xb0(r8)
    stw r5, 0xd8(r8)
    stfs f2, 0xe0(r8)
    stw r0, 0xe4(r8)
    stw r0, 0xe8(r8)
    stw r0, 0xf0(r8)
    stfs f1, 0xf4(r8)
    stfs f0, 0xf8(r8)
    stw r5, 0x120(r8)
    stfs f2, 0x128(r8)
    stw r0, 0x12c(r8)
    stw r0, 0x130(r8)
    stw r0, 0x138(r8)
    stfs f1, 0x13c(r8)
    stfs f0, 0x140(r8)
    stw r5, 0x168(r8)
    stfs f2, 0x170(r8)
    stw r0, 0x174(r8)
    stw r0, 0x178(r8)
    stw r0, 0x180(r8)
    stfs f1, 0x184(r8)
    stfs f0, 0x188(r8)
    stw r5, 0x1b0(r8)
    stfs f2, 0x1b8(r8)
    stw r0, 0x1bc(r8)
    stw r0, 0x1c0(r8)
    stw r0, 0x1c8(r8)
    stfs f1, 0x1cc(r8)
    stfs f0, 0x1d0(r8)
    stw r5, 0x1f8(r8)
    stfs f2, 0x200(r8)
    stw r0, 0x204(r8)
    stw r0, 0x208(r8)
    stw r0, 0x210(r8)
    stfs f1, 0x214(r8)
    stfs f0, 0x218(r8)
    addi r8, r8, 0x240
    bdnz lbl_fn_8056BF90_00000F5C
lbl_fn_8056BF90_00001044:
    addis r4, r3, 0x6
    li r0, 0x48
    subi r5, r4, 0x466c
    lfs f2, lbl_80888044
    addi r4, r5, 0x47
    lfs f1, lbl_80888020
    subf r4, r8, r4
    lfs f0, lbl_80888034
    divwu r4, r4, r0
    li r6, -0x1
    li r0, 0x0
    mtctr r4
    cmplw r8, r5
    bge lbl_fn_8056BF90_000010A0
lbl_fn_8056BF90_0000107C:
    stw r6, 0x0(r8)
    stfs f2, 0x8(r8)
    stw r0, 0xc(r8)
    stw r0, 0x10(r8)
    stw r0, 0x18(r8)
    stfs f1, 0x1c(r8)
    stfs f0, 0x20(r8)
    addi r8, r8, 0x48
    bdnz lbl_fn_8056BF90_0000107C
lbl_fn_8056BF90_000010A0:
    addis r4, r3, 0x6
    lfs f0, lbl_80888020
    li r0, 0x0
    stw r0, -0x466c(r4)
    stw r0, -0x4268(r4)
    stw r0, -0x4264(r4)
    stw r0, -0x4260(r4)
    stw r0, -0x425c(r4)
    stw r0, -0x4258(r4)
    stw r0, -0x4254(r4)
    stw r0, -0x4250(r4)
    stw r0, -0x424c(r4)
    stfs f0, -0x4248(r4)
    blr
}

asm void fn_8056C39C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8056C39C_00001100
    cmpwi r4, 0x0
    ble lbl_fn_8056C39C_00001100
    bl dtor_80084684
lbl_fn_8056C39C_00001100:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8056C3DC(void)
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
    bl _savegpr_22
    lwz r5, lbl_8087EFA8
    addis r4, r3, 0x6
    lfs f7, -0x4248(r4)
    mr r24, r3
    lfs f8, 0x3a4(r5)
    lfs f0, lbl_80888048
    fadds f7, f7, f8
    stfs f7, -0x4248(r4)
    fcmpo cr0, f7, f0
    blt lbl_fn_8056C3DC_00001810
    lfs f0, lbl_80888034
    lwz r0, -0x4258(r4)
    fsubs f0, f7, f0
    cmpwi r0, 0x0
    stfs f0, -0x4248(r4)
    bne lbl_fn_8056C3DC_000017D8
    addis r4, r3, 0x4
    lwz r0, 0x5180(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8056C3DC_000017C4
    lwz r0, 0x5178(r4)
    lwz r4, lbl_8087F8A0
    mulli r0, r0, 0x1808
    lwz r4, 0x48(r4)
    add r3, r3, r0
    lfs f1, 0x528(r4)
    addi r25, r3, 0x8
    lfs f2, 0x52c(r4)
    lfs f3, 0x530(r4)
    addi r3, r1, 0x100
    bl fn_805F90D0
    addi r6, r1, 0x100
    addi r22, r1, 0x130
    psq_l f2, 0x8(r6), 0, 0
    addi r5, r25, 0x17d8
    psq_l f3, 0x10(r6), 0, 0
    mr r3, r22
    psq_l f4, 0x18(r6), 0, 0
    mr r4, r22
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r22), 0, 0
    psq_st f3, 0x10(r22), 0, 0
    psq_st f4, 0x18(r22), 0, 0
    psq_st f5, 0x20(r22), 0, 0
    psq_st f6, 0x28(r22), 0, 0
    bl fn_805F8CA0
    lwz r4, lbl_8087F8A0
    mr r3, r25
    mr r5, r22
    lwz r4, 0x48(r4)
    bl fn_8056CB24
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r22, r3
    b lbl_fn_8056C3DC_000012B4
lbl_fn_8056C3DC_00001264:
    lwz r4, 0x38(r22)
    rlwinm r0, r4, 0, 29, 29
    cmplwi cr1, r0, 0x4
    beq cr1, lbl_fn_8056C3DC_000012B0
    lwz r0, 0x48(r22)
    cmpwi r0, 0x2
    bne lbl_fn_8056C3DC_000012A0
    li r3, 0x0
    beq cr1, lbl_fn_8056C3DC_00001294
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8056C3DC_00001298
lbl_fn_8056C3DC_00001294:
    li r3, 0x1
lbl_fn_8056C3DC_00001298:
    cmpwi r3, 0x0
    bne lbl_fn_8056C3DC_000012B0
lbl_fn_8056C3DC_000012A0:
    mr r3, r25
    mr r4, r22
    addi r5, r1, 0x130
    bl fn_8056CB24
lbl_fn_8056C3DC_000012B0:
    lwz r22, 0x14ac(r22)
lbl_fn_8056C3DC_000012B4:
    cmpwi r22, 0x0
    bne lbl_fn_8056C3DC_00001264
    lwz r3, lbl_8087F408
    lwz r22, 0x48(r3)
    b lbl_fn_8056C3DC_00001318
lbl_fn_8056C3DC_000012C8:
    lwz r4, 0x38(r22)
    rlwinm r0, r4, 0, 29, 29
    cmplwi cr1, r0, 0x4
    beq cr1, lbl_fn_8056C3DC_00001314
    lwz r0, 0x48(r22)
    cmpwi r0, 0x2
    bne lbl_fn_8056C3DC_00001304
    li r3, 0x0
    beq cr1, lbl_fn_8056C3DC_000012F8
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8056C3DC_000012FC
lbl_fn_8056C3DC_000012F8:
    li r3, 0x1
lbl_fn_8056C3DC_000012FC:
    cmpwi r3, 0x0
    bne lbl_fn_8056C3DC_00001314
lbl_fn_8056C3DC_00001304:
    mr r3, r25
    mr r4, r22
    addi r5, r1, 0x130
    bl fn_8056CB24
lbl_fn_8056C3DC_00001314:
    lwz r22, 0x14ac(r22)
lbl_fn_8056C3DC_00001318:
    cmpwi r22, 0x0
    bne lbl_fn_8056C3DC_000012C8
    mr r3, r24
    mr r4, r25
    addi r5, r1, 0x130
    bl fn_8056D440
    lfs f31, lbl_80888020
    addi r28, r1, 0x38
    lfs f29, lbl_80888028
    addi r29, r1, 0x2c
    lfs f30, lbl_80888034
    addi r30, r1, 0x50
    addi r31, r1, 0x44
    li r26, 0x0
    li r23, 0x0
    li r22, 0x0
lbl_fn_8056C3DC_00001358:
    lwz r3, lbl_8087F048
    add r4, r25, r22
    addi r27, r4, 0x1558
    li r0, 0x0
    addis r3, r3, 0x1
    add r3, r3, r23
    subi r4, r3, 0x5ea8
    lfs f2, -0x5ea0(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x8(r27)
    lfs f0, -0x5e90(r3)
    fcmpu cr0, f31, f0
    bne lbl_fn_8056C3DC_000013AC
    lfs f0, -0x5e8c(r3)
    fcmpu cr0, f31, f0
    bne lbl_fn_8056C3DC_000013AC
    lfs f0, -0x5e88(r3)
    fcmpu cr0, f31, f0
    bne lbl_fn_8056C3DC_000013AC
    li r0, 0x1
lbl_fn_8056C3DC_000013AC:
    cmpwi r0, 0x0
    beq lbl_fn_8056C3DC_000014B0
    stfs f31, 0x10(r1)
    lwz r4, 0x10(r1)
    stfs f31, 0x20(r1)
    cmpwi r4, 0x0
    stfs f31, 0x24(r1)
    stfs f31, 0x28(r1)
    bne lbl_fn_8056C3DC_000013D8
    li r0, 0x0
    b lbl_fn_8056C3DC_00001408
lbl_fn_8056C3DC_000013D8:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056C3DC_000013EC
    li r0, 0x0
    b lbl_fn_8056C3DC_00001408
lbl_fn_8056C3DC_000013EC:
    cmpwi r3, 0x1f
    ble lbl_fn_8056C3DC_000013F8
    li r3, 0x1f
lbl_fn_8056C3DC_000013F8:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056C3DC_00001408:
    lfs f0, 0x24(r1)
    stfs f0, 0xc(r1)
    lwz r4, 0xc(r1)
    sth r0, 0xc(r27)
    cmpwi r4, 0x0
    bne lbl_fn_8056C3DC_00001428
    li r0, 0x0
    b lbl_fn_8056C3DC_00001458
lbl_fn_8056C3DC_00001428:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056C3DC_0000143C
    li r0, 0x0
    b lbl_fn_8056C3DC_00001458
lbl_fn_8056C3DC_0000143C:
    cmpwi r3, 0x1f
    ble lbl_fn_8056C3DC_00001448
    li r3, 0x1f
lbl_fn_8056C3DC_00001448:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056C3DC_00001458:
    lfs f0, 0x28(r1)
    stfs f0, 0x8(r1)
    lwz r4, 0x8(r1)
    sth r0, 0xe(r27)
    cmpwi r4, 0x0
    bne lbl_fn_8056C3DC_00001478
    li r0, 0x0
    b lbl_fn_8056C3DC_000014A8
lbl_fn_8056C3DC_00001478:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056C3DC_0000148C
    li r0, 0x0
    b lbl_fn_8056C3DC_000014A8
lbl_fn_8056C3DC_0000148C:
    cmpwi r3, 0x1f
    ble lbl_fn_8056C3DC_00001498
    li r3, 0x1f
lbl_fn_8056C3DC_00001498:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056C3DC_000014A8:
    sth r0, 0x10(r27)
    b lbl_fn_8056C3DC_00001748
lbl_fn_8056C3DC_000014B0:
    subi r5, r3, 0x5e90
    mr r3, r28
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r28
    lfs f2, 0x8(r5)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F98D0
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r28), 0, 0
    fabs f0, f2
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x34(r1)
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_8056C3DC_00001510
    lfs f0, 0x2c(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8056C3DC_00001504
    lfs f0, lbl_8088802C
    b lbl_fn_8056C3DC_00001508
lbl_fn_8056C3DC_00001504:
    lfs f0, lbl_80888030
lbl_fn_8056C3DC_00001508:
    stfs f0, 0x48(r1)
    b lbl_fn_8056C3DC_00001524
lbl_fn_8056C3DC_00001510:
    frsp f2, f2
    lfs f1, 0x2c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8056C3DC_00001524:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f0, 0xd8(r1)
    mr r4, r30
    lfs f7, 0xd4(r1)
    mr r5, r30
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
    psq_l f1, 0x0(r29), 0, 0
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
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_8056C3DC_00001630
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8056C3DC_00001620
    lfs f0, lbl_8088802C
    b lbl_fn_8056C3DC_00001624
lbl_fn_8056C3DC_00001620:
    lfs f0, lbl_80888030
lbl_fn_8056C3DC_00001624:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8056C3DC_00001644
lbl_fn_8056C3DC_00001630:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8056C3DC_00001644:
    psq_l f1, 0x0(r31), 0, 0
    fmr f2, f31
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x2c(r1)
    stfs f0, 0x1c(r1)
    lwz r4, 0x1c(r1)
    stfs f31, 0x4c(r1)
    cmpwi r4, 0x0
    stfs f2, 0x34(r1)
    bne lbl_fn_8056C3DC_00001674
    li r0, 0x0
    b lbl_fn_8056C3DC_000016A4
lbl_fn_8056C3DC_00001674:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056C3DC_00001688
    li r0, 0x0
    b lbl_fn_8056C3DC_000016A4
lbl_fn_8056C3DC_00001688:
    cmpwi r3, 0x1f
    ble lbl_fn_8056C3DC_00001694
    li r3, 0x1f
lbl_fn_8056C3DC_00001694:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056C3DC_000016A4:
    lfs f0, 0x30(r1)
    stfs f0, 0x18(r1)
    lwz r4, 0x18(r1)
    sth r0, 0xc(r27)
    cmpwi r4, 0x0
    bne lbl_fn_8056C3DC_000016C4
    li r0, 0x0
    b lbl_fn_8056C3DC_000016F4
lbl_fn_8056C3DC_000016C4:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056C3DC_000016D8
    li r0, 0x0
    b lbl_fn_8056C3DC_000016F4
lbl_fn_8056C3DC_000016D8:
    cmpwi r3, 0x1f
    ble lbl_fn_8056C3DC_000016E4
    li r3, 0x1f
lbl_fn_8056C3DC_000016E4:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056C3DC_000016F4:
    lfs f0, 0x34(r1)
    stfs f0, 0x14(r1)
    lwz r4, 0x14(r1)
    sth r0, 0xe(r27)
    cmpwi r4, 0x0
    bne lbl_fn_8056C3DC_00001714
    li r0, 0x0
    b lbl_fn_8056C3DC_00001744
lbl_fn_8056C3DC_00001714:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056C3DC_00001728
    li r0, 0x0
    b lbl_fn_8056C3DC_00001744
lbl_fn_8056C3DC_00001728:
    cmpwi r3, 0x1f
    ble lbl_fn_8056C3DC_00001734
    li r3, 0x1f
lbl_fn_8056C3DC_00001734:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056C3DC_00001744:
    sth r0, 0x10(r27)
lbl_fn_8056C3DC_00001748:
    addi r26, r26, 0x1
    addi r22, r22, 0x14
    cmpwi r26, 0x20
    addi r23, r23, 0xc8
    blt lbl_fn_8056C3DC_00001358
    addis r6, r24, 0x4
    lis r3, 0xb60b
    lwz r5, 0x5178(r6)
    addi r0, r3, 0x60b7
    li r4, 0x0
    addi r5, r5, 0x1
    mulhw r0, r0, r5
    add r0, r0, r5
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x2d
    subf r0, r0, r5
    stw r0, 0x5178(r6)
    mulli r0, r0, 0x1808
    add r3, r24, r0
    stb r4, 0x155c(r3)
    lwz r0, 0x5178(r6)
    mulli r0, r0, 0x1808
    add r3, r24, r0
    stb r4, 0x155d(r3)
    lwz r3, 0x517c(r6)
    cmpwi r3, 0x2d
    bge lbl_fn_8056C3DC_000017C4
    addi r0, r3, 0x1
    stw r0, 0x517c(r6)
lbl_fn_8056C3DC_000017C4:
    addis r3, r24, 0x4
    lwz r0, 0x5180(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x5180(r3)
lbl_fn_8056C3DC_000017D8:
    addis r3, r24, 0x6
    lwz r4, 0x4(r24)
    lwz r0, -0x4258(r3)
    addi r3, r4, 0x1
    stw r3, 0x4(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8056C3DC_00001810
    mr r3, r24
    bl fn_8056D070
    mr r3, r24
    bl fn_80570810
    addis r3, r24, 0x6
    lwz r0, 0x4(r24)
    stw r0, -0x4254(r3)
lbl_fn_8056C3DC_00001810:
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
    bl _restgpr_22
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8056CB24(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x130
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    bl _savegpr_27
    lbz r0, 0x1554(r3)
    mr r28, r3
    mr r29, r4
    mr r6, r5
    extsb r0, r0
    cmpwi r0, 0xf
    bge lbl_fn_8056CB24_00001D84
    lwz r5, 0x38(r4)
    rlwinm r5, r5, 0, 30, 30
    cmplwi r5, 0x2
    bne lbl_fn_8056CB24_00001D84
    mulli r0, r0, 0x8c
    addi r31, r4, 0xb0
    addi r5, r1, 0xe0
    add r30, r3, r0
    mr r3, r6
    stw r4, 0x0(r30)
    lwz r0, 0x100(r4)
    stb r0, 0x5(r30)
    lwz r0, 0x674(r4)
    addi r4, r31, 0x8
    stb r0, 0x4(r30)
    lwz r0, 0x34c(r31)
    stb r0, 0x6(r30)
    bl fn_805F89F0
    li r0, 0x6
    addi r5, r1, 0xe0
    li r8, 0x0
    mtctr r0
lbl_fn_8056CB24_000018F8:
    extlwi r6, r8, 28, 2
    clrlslwi r4, r8, 30, 2
    add r0, r5, r6
    clrlwi r9, r8, 30
    lfsx f0, r4, r0
    srwi r6, r8, 2
    stfs f0, 0x18(r1)
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056CB24_00001928
    li r7, 0x0
    b lbl_fn_8056CB24_00001958
lbl_fn_8056CB24_00001928:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056CB24_0000193C
    li r7, 0x0
    b lbl_fn_8056CB24_00001958
lbl_fn_8056CB24_0000193C:
    cmpwi r3, 0x1f
    ble lbl_fn_8056CB24_00001948
    li r3, 0x1f
lbl_fn_8056CB24_00001948:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r7, r0
lbl_fn_8056CB24_00001958:
    slwi r0, r6, 3
    addi r8, r8, 0x1
    slwi r3, r9, 1
    add r0, r30, r0
    extlwi r6, r8, 28, 2
    add r3, r3, r0
    clrlslwi r4, r8, 30, 2
    add r0, r5, r6
    sth r7, 0x8(r3)
    srwi r6, r8, 2
    clrlwi r9, r8, 30
    lfsx f0, r4, r0
    stfs f0, 0x18(r1)
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056CB24_000019A0
    li r7, 0x0
    b lbl_fn_8056CB24_000019D0
lbl_fn_8056CB24_000019A0:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056CB24_000019B4
    li r7, 0x0
    b lbl_fn_8056CB24_000019D0
lbl_fn_8056CB24_000019B4:
    cmpwi r3, 0x1f
    ble lbl_fn_8056CB24_000019C0
    li r3, 0x1f
lbl_fn_8056CB24_000019C0:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r7, r0
lbl_fn_8056CB24_000019D0:
    slwi r0, r6, 3
    slwi r3, r9, 1
    add r0, r30, r0
    addi r8, r8, 0x1
    add r3, r3, r0
    sth r7, 0x8(r3)
    bdnz lbl_fn_8056CB24_000018F8
    mr r3, r30
    mr r4, r31
    bl fn_8056BAA8
    lis r4, lbl_8075FF7C@ha
    lwz r27, 0x220(r31)
    addi r4, r4, lbl_8075FF7C@l
    mr r3, r31
    addi r4, r4, 0xb
    li r5, 0x0
    bl fn_80092814
    mulli r0, r3, 0x2c
    add r5, r27, r0
    lfs f0, 0x4(r5)
    stfs f0, 0xc(r1)
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056CB24_00001A38
    li r0, 0x0
    b lbl_fn_8056CB24_00001A68
lbl_fn_8056CB24_00001A38:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056CB24_00001A4C
    li r0, 0x0
    b lbl_fn_8056CB24_00001A68
lbl_fn_8056CB24_00001A4C:
    cmpwi r3, 0x1f
    ble lbl_fn_8056CB24_00001A58
    li r3, 0x1f
lbl_fn_8056CB24_00001A58:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056CB24_00001A68:
    sth r0, 0x80(r30)
    lfs f0, 0x8(r5)
    stfs f0, 0x10(r1)
    lwz r4, 0x10(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056CB24_00001A88
    li r0, 0x0
    b lbl_fn_8056CB24_00001AB8
lbl_fn_8056CB24_00001A88:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056CB24_00001A9C
    li r0, 0x0
    b lbl_fn_8056CB24_00001AB8
lbl_fn_8056CB24_00001A9C:
    cmpwi r3, 0x1f
    ble lbl_fn_8056CB24_00001AA8
    li r3, 0x1f
lbl_fn_8056CB24_00001AA8:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056CB24_00001AB8:
    sth r0, 0x82(r30)
    lfs f0, 0xc(r5)
    stfs f0, 0x14(r1)
    lwz r4, 0x14(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056CB24_00001AD8
    li r0, 0x0
    b lbl_fn_8056CB24_00001B08
lbl_fn_8056CB24_00001AD8:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056CB24_00001AEC
    li r0, 0x0
    b lbl_fn_8056CB24_00001B08
lbl_fn_8056CB24_00001AEC:
    cmpwi r3, 0x1f
    ble lbl_fn_8056CB24_00001AF8
    li r3, 0x1f
lbl_fn_8056CB24_00001AF8:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056CB24_00001B08:
    sth r0, 0x84(r30)
    addi r3, r29, 0xfa4
    lfs f0, lbl_80888028
    addi r31, r1, 0x64
    lwz r0, 0x0(r5)
    sth r0, 0x86(r30)
    lfs f2, 0xfac(r29)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x6c(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056CB24_00001B64
    lfs f3, 0x64(r1)
    lfs f0, lbl_80888020
    fcmpo cr0, f3, f0
    ble lbl_fn_8056CB24_00001B58
    lfs f0, lbl_8088802C
    b lbl_fn_8056CB24_00001B5C
lbl_fn_8056CB24_00001B58:
    lfs f0, lbl_80888030
lbl_fn_8056CB24_00001B5C:
    stfs f0, 0x5c(r1)
    b lbl_fn_8056CB24_00001B78
lbl_fn_8056CB24_00001B64:
    frsp f2, f2
    lfs f1, 0x64(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x5c(r1)
lbl_fn_8056CB24_00001B78:
    lfs f0, 0x5c(r1)
    addi r3, r1, 0x70
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80888020
    addi r4, r1, 0x4c
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
    lfs f0, lbl_80888034
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x6c(r1)
    stfs f3, 0xd0(r1)
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f13, 0x1c(r1)
    stfs f31, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f13, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f30, 0xa8(r1)
    stfs f10, 0x28(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f10, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f12, 0xb8(r1)
    stfs f7, 0x34(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f7, 0xc0(r1)
    stfs f8, 0xc4(r1)
    stfs f9, 0xc8(r1)
    stfs f4, 0x40(r1)
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f4, 0xac(r1)
    stfs f5, 0xbc(r1)
    stfs f6, 0xcc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F9750
    lfs f2, 0x54(r1)
    lfs f0, lbl_80888028
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8056CB24_00001C94
    lfs f3, 0x50(r1)
    lfs f0, lbl_80888020
    fcmpo cr0, f3, f0
    ble lbl_fn_8056CB24_00001C84
    lfs f0, lbl_8088802C
    b lbl_fn_8056CB24_00001C88
lbl_fn_8056CB24_00001C84:
    lfs f0, lbl_80888030
lbl_fn_8056CB24_00001C88:
    fneg f0, f0
    stfs f0, 0x58(r1)
    b lbl_fn_8056CB24_00001CA8
lbl_fn_8056CB24_00001C94:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x58(r1)
lbl_fn_8056CB24_00001CA8:
    addi r3, r1, 0x58
    lfs f4, lbl_80888020
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8075FE70@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r29)
    lfs f3, 0x68(r1)
    stfs f2, 0x6c(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8075FE70@l(r3)
    stfs f4, 0x60(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80888038
    fcmpo cr0, f3, f0
    ble lbl_fn_8056CB24_00001CF4
    lfs f0, lbl_8088803C
    fsubs f3, f3, f0
lbl_fn_8056CB24_00001CF4:
    lfs f0, lbl_80888040
    fcmpo cr0, f3, f0
    bge lbl_fn_8056CB24_00001D08
    lfs f0, lbl_8088803C
    fadds f3, f3, f0
lbl_fn_8056CB24_00001D08:
    stfs f3, 0x8(r1)
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    bne lbl_fn_8056CB24_00001D20
    li r0, 0x0
    b lbl_fn_8056CB24_00001D50
lbl_fn_8056CB24_00001D20:
    extrwi r3, r4, 8, 1
    subic. r3, r3, 0x70
    bge lbl_fn_8056CB24_00001D34
    li r0, 0x0
    b lbl_fn_8056CB24_00001D50
lbl_fn_8056CB24_00001D34:
    cmpwi r3, 0x1f
    ble lbl_fn_8056CB24_00001D40
    li r3, 0x1f
lbl_fn_8056CB24_00001D40:
    rlwinm r0, r4, 16, 16, 16
    rlwimi r0, r3, 10, 17, 21
    rlwimi r0, r4, 19, 22, 31
    extsh r0, r0
lbl_fn_8056CB24_00001D50:
    sth r0, 0x88(r30)
    li r3, 0x0
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8056CB24_00001D74
    lwz r0, 0xc48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8056CB24_00001D74
    li r3, 0x1
lbl_fn_8056CB24_00001D74:
    stb r3, 0x7(r30)
    lbz r3, 0x1554(r28)
    addi r0, r3, 0x1
    stb r0, 0x1554(r28)
lbl_fn_8056CB24_00001D84:
    addi r11, r1, 0x130
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    bl _restgpr_27
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
