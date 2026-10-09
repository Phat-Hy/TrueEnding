#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8005ED68(void);
extern void fn_8006F2F0(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800BDB58(void);
extern void fn_800D59B8(void);
extern void fn_80473EFC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_806163C0(void);
extern void fn_806163E0(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80695720(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80731150[];
extern u8 lbl_80731158[];
extern u8 lbl_80731340[];
extern u8 lbl_807777D8[];
extern u8 lbl_80777858[];
extern u8 lbl_80777898[];
extern u8 lbl_807778D8[];
extern u8 lbl_80777920[];
extern u8 lbl_80777AB0[];

/* Small data declarations */
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFB4;
extern u32 lbl_808809A0;
extern u32 lbl_808809A4;
extern u32 lbl_808809A8;
extern u32 lbl_808809AC;
extern u32 lbl_808809B0;
extern u32 lbl_808809B4;
extern u32 lbl_808809B8;
extern u32 lbl_808809BC;

/* Function declarations */
void fn_800610A0(void);
void fn_800610A4(void);
void fn_8006144C(void);
void fn_800616C0(void);
void fn_80061824(void);
void fn_80061AE4(void);
void fn_80061DEC(void);
void fn_80061E2C(void);
void fn_80062908(void);
void fn_8006297C(void);
void fn_800629F0(void);
void fn_80062C8C(void);
void fn_80062F7C(void);

asm void fn_800610A0(void)
{
    nofralloc
    blr
}

asm void fn_800610A4(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stfd f27, 0xf0(r1)
    psq_st f27, 0xf8(r1), 0, 0
    bl _savegpr_22
    lwz r6, 0xc(r3)
    fmr f27, f1
    lwz r0, 0x8(r3)
    fmr f28, f2
    addi r5, r6, 0x20
    fmr f29, f3
    fmr f30, f4
    fmr f31, f5
    cmpw r5, r0
    mr r29, r3
    mr r30, r4
    ble lbl_fn_800610A4_00000078
    li r31, 0x0
    b lbl_fn_800610A4_0000009C
lbl_fn_800610A4_00000078:
    lwz r0, 0x4(r3)
    add. r31, r0, r6
    beq lbl_fn_800610A4_00000090
    lis r4, lbl_80777AB0@ha
    addi r4, r4, lbl_80777AB0@l
    stw r4, 0x0(r31)
lbl_fn_800610A4_00000090:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_800610A4_0000009C:
    cmpwi r31, 0x0
    beq lbl_fn_800610A4_0000036C
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x64
    cmpw r4, r0
    ble lbl_fn_800610A4_000000C0
    li r28, 0x0
    b lbl_fn_800610A4_000000F0
lbl_fn_800610A4_000000C0:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x5
    bl fn_80695720
    lwz r4, 0xc(r29)
    mr r28, r3
    addi r0, r4, 0x64
    stw r0, 0xc(r29)
lbl_fn_800610A4_000000F0:
    cmpwi r28, 0x0
    beq lbl_fn_800610A4_0000036C
    stfs f27, 0x68(r1)
    addi r27, r1, 0x74
    addi r6, r1, 0x68
    lfs f2, lbl_808809A0
    stfs f28, 0x6c(r1)
    mr r4, r27
    mr r5, r27
    addi r3, r29, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F93C0
    fadds f3, f27, f30
    addi r25, r1, 0x5c
    lfs f0, lbl_808809A0
    addi r26, r1, 0x80
    lfs f2, 0x7c(r1)
    addi r6, r1, 0x50
    stfs f2, 0x88(r1)
    fmr f2, f0
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r25
    stfs f3, 0x50(r1)
    mr r5, r25
    addi r3, r29, 0xa4
    stfs f28, 0x54(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x58(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    fadds f4, f27, f30
    addi r24, r1, 0x44
    fadds f3, f28, f31
    lfs f0, lbl_808809A0
    lfs f2, 0x64(r1)
    addi r27, r1, 0x8c
    stfs f2, 0x94(r1)
    fmr f2, f0
    psq_l f1, 0x0(r25), 0, 0
    addi r6, r1, 0x38
    stfs f4, 0x38(r1)
    mr r4, r24
    mr r5, r24
    stfs f3, 0x3c(r1)
    addi r3, r29, 0xa4
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x40(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F93C0
    fadds f3, f28, f31
    addi r23, r1, 0x2c
    lfs f0, lbl_808809A0
    addi r25, r1, 0x98
    lfs f2, 0x4c(r1)
    addi r6, r1, 0x20
    stfs f2, 0xa0(r1)
    fmr f2, f0
    psq_l f1, 0x0(r24), 0, 0
    mr r4, r23
    stfs f27, 0x20(r1)
    mr r5, r23
    addi r3, r29, 0xa4
    stfs f3, 0x24(r1)
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x28(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    lfs f0, lbl_808809A0
    addi r22, r1, 0x14
    lfs f2, 0x34(r1)
    addi r24, r1, 0xa4
    stfs f2, 0xac(r1)
    fmr f2, f0
    psq_l f1, 0x0(r23), 0, 0
    addi r6, r1, 0x8
    stfs f27, 0x8(r1)
    mr r4, r22
    mr r5, r22
    stfs f28, 0xc(r1)
    addi r3, r29, 0xa4
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x10(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r22), 0, 0
    li r5, 0x1
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0xb8(r1)
    lfs f2, 0x88(r1)
    stfs f2, 0x8(r28)
    lfs f2, 0x94(r1)
    stw r30, 0xc(r28)
    psq_st f1, 0x10(r28), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    stfs f2, 0x18(r28)
    lfs f2, 0xa0(r1)
    stw r30, 0x1c(r28)
    psq_st f1, 0x20(r28), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    stfs f2, 0x28(r28)
    lfs f2, 0xac(r1)
    stw r30, 0x2c(r28)
    psq_st f1, 0x30(r28), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x38(r28)
    lfs f2, 0xb8(r1)
    stw r30, 0x3c(r28)
    psq_st f1, 0x40(r28), 0, 0
    stfs f2, 0x48(r28)
    stw r30, 0x4c(r28)
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x6
    beq lbl_fn_800610A4_00000304
    cmpwi r0, 0x8
    beq lbl_fn_800610A4_00000304
    cmpwi r0, 0xd
    bne lbl_fn_800610A4_00000308
lbl_fn_800610A4_00000304:
    li r5, 0x0
lbl_fn_800610A4_00000308:
    stw r5, 0x4(r31)
    li r4, 0xb0
    li r3, 0x4
    li r0, 0x5
    stw r4, 0xc(r31)
    cmpwi r5, 0x1
    stw r3, 0x10(r31)
    stw r0, 0x14(r31)
    stw r28, 0x8(r31)
    beq lbl_fn_800610A4_00000344
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x8
    beq lbl_fn_800610A4_00000344
    cmpwi r0, 0xd
    bne lbl_fn_800610A4_00000350
lbl_fn_800610A4_00000344:
    li r0, 0x0
    stb r0, 0x18(r31)
    b lbl_fn_800610A4_00000358
lbl_fn_800610A4_00000350:
    li r0, 0x1
    stb r0, 0x18(r31)
lbl_fn_800610A4_00000358:
    fmr f1, f29
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r29)
    mr r4, r31
    bl fn_800BDB58
lbl_fn_800610A4_0000036C:
    addi r11, r1, 0xf0
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    psq_l f27, 0xf8(r1), 0, 0
    lfd f27, 0xf0(r1)
    bl _restgpr_22
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8006144C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    bl _savegpr_25
    lwz r6, 0xc(r3)
    fmr f27, f1
    lwz r0, 0x8(r3)
    fmr f28, f2
    addi r5, r6, 0x20
    fmr f29, f3
    fmr f30, f4
    fmr f31, f5
    cmpw r5, r0
    mr r29, r3
    mr r30, r4
    ble lbl_fn_8006144C_00000420
    li r31, 0x0
    b lbl_fn_8006144C_00000444
lbl_fn_8006144C_00000420:
    lwz r0, 0x4(r3)
    add. r31, r0, r6
    beq lbl_fn_8006144C_00000438
    lis r4, lbl_80777AB0@ha
    addi r4, r4, lbl_80777AB0@l
    stw r4, 0x0(r31)
lbl_fn_8006144C_00000438:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_8006144C_00000444:
    cmpwi r31, 0x0
    beq lbl_fn_8006144C_000005E0
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x34
    cmpw r4, r0
    ble lbl_fn_8006144C_00000468
    li r28, 0x0
    b lbl_fn_8006144C_00000498
lbl_fn_8006144C_00000468:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x2
    bl fn_80695720
    lwz r4, 0xc(r29)
    mr r28, r3
    addi r0, r4, 0x34
    stw r0, 0xc(r29)
lbl_fn_8006144C_00000498:
    cmpwi r28, 0x0
    beq lbl_fn_8006144C_000005E0
    stfs f27, 0x20(r1)
    addi r27, r1, 0x2c
    addi r6, r1, 0x20
    lfs f2, lbl_808809A0
    stfs f28, 0x24(r1)
    mr r4, r27
    mr r5, r27
    addi r3, r29, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    lfs f0, lbl_808809A0
    addi r25, r1, 0x14
    lfs f2, 0x34(r1)
    addi r26, r1, 0x38
    stfs f2, 0x40(r1)
    fmr f2, f0
    psq_l f1, 0x0(r27), 0, 0
    addi r6, r1, 0x8
    stfs f29, 0x8(r1)
    mr r4, r25
    mr r5, r25
    stfs f30, 0xc(r1)
    addi r3, r29, 0xa4
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x10(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x44
    psq_l f1, 0x0(r25), 0, 0
    li r5, 0x1
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    lfs f2, 0x40(r1)
    stfs f2, 0x8(r28)
    lfs f2, 0x4c(r1)
    stw r30, 0xc(r28)
    psq_st f1, 0x10(r28), 0, 0
    stfs f2, 0x18(r28)
    stw r30, 0x1c(r28)
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8006144C_0000057C
    cmpwi r0, 0x8
    beq lbl_fn_8006144C_0000057C
    cmpwi r0, 0xd
    bne lbl_fn_8006144C_00000580
lbl_fn_8006144C_0000057C:
    li r5, 0x0
lbl_fn_8006144C_00000580:
    stw r5, 0x4(r31)
    li r4, 0xb0
    li r3, 0x1
    li r0, 0x2
    stw r4, 0xc(r31)
    cmpwi r5, 0x1
    stw r3, 0x10(r31)
    stw r0, 0x14(r31)
    stw r28, 0x8(r31)
    beq lbl_fn_8006144C_000005BC
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x8
    beq lbl_fn_8006144C_000005BC
    cmpwi r0, 0xd
    bne lbl_fn_8006144C_000005C8
lbl_fn_8006144C_000005BC:
    li r0, 0x0
    stb r0, 0x18(r31)
    b lbl_fn_8006144C_000005CC
lbl_fn_8006144C_000005C8:
    stb r3, 0x18(r31)
lbl_fn_8006144C_000005CC:
    fmr f1, f31
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r29)
    mr r4, r31
    bl fn_800BDB58
lbl_fn_8006144C_000005E0:
    addi r11, r1, 0x70
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_800616C0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x30
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    stfd f27, 0x40(r1)
    psq_st f27, 0x48(r1), 0, 0
    stfd f26, 0x30(r1)
    psq_st f26, 0x38(r1), 0, 0
    bl _savegpr_23
    fmr f26, f1
    mr r24, r4
    fmr f27, f2
    mr r23, r3
    addi r30, r3, 0x104
    fmr f28, f3
    fmr f29, f4
    mr r25, r5
    fmr f30, f5
    mr r26, r6
    fmr f31, f6
    mr r27, r7
    mr r28, r8
    mr r3, r24
    bl strlen
    addi r29, r3, 0x1
    li r31, 0x0
    cmplwi r29, 0x200
    blt lbl_fn_800616C0_000006DC
    lis r5, lbl_80731340@ha
    slwi r3, r29, 1
    addi r5, r5, lbl_80731340@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    mr r31, r3
    li r3, 0x0
    bl fn_80084C24
    mr r30, r31
lbl_fn_800616C0_000006DC:
    lwz r3, lbl_8087EEC8
    mr r4, r30
    mr r5, r24
    mr r6, r29
    bl fn_8006F2F0
    lfs f7, lbl_808809A0
    fmr f1, f26
    fmr f2, f27
    mr r3, r23
    fmr f3, f28
    mr r4, r30
    fmr f4, f29
    fmr f5, f30
    fmr f6, f31
    mr r5, r25
    fmr f8, f7
    mr r6, r26
    mr r7, r27
    mr r8, r28
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    mr r3, r31
    bl fn_80084C24
    addi r11, r1, 0x30
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    psq_l f27, 0x48(r1), 0, 0
    lfd f27, 0x40(r1)
    psq_l f26, 0x38(r1), 0, 0
    lfd f26, 0x30(r1)
    bl _restgpr_23
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80061824(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x40
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stfd f26, 0x60(r1)
    psq_st f26, 0x68(r1), 0, 0
    stfd f25, 0x50(r1)
    psq_st f25, 0x58(r1), 0, 0
    stfd f24, 0x40(r1)
    psq_st f24, 0x48(r1), 0, 0
    bl _savegpr_22
    lwz r12, 0xc(r3)
    fmr f24, f1
    lwz r0, 0x8(r3)
    fmr f25, f2
    addi r11, r12, 0x74
    fmr f26, f3
    fmr f27, f4
    fmr f28, f5
    cmpw r11, r0
    fmr f29, f6
    mr r23, r3
    fmr f30, f7
    fmr f31, f8
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    ble lbl_fn_80061824_00000834
    li r31, 0x0
    b lbl_fn_80061824_00000858
lbl_fn_80061824_00000834:
    lwz r0, 0x4(r3)
    add. r31, r0, r12
    beq lbl_fn_80061824_0000084C
    lis r4, lbl_80777920@ha
    addi r4, r4, lbl_80777920@l
    stw r4, 0x0(r31)
lbl_fn_80061824_0000084C:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x74
    stw r0, 0xc(r3)
lbl_fn_80061824_00000858:
    cmpwi r31, 0x0
    beq lbl_fn_80061824_000009EC
    mr r3, r24
    bl fn_80686A48
    addi r0, r3, 0x1
    lwz r6, 0xc(r23)
    slwi r5, r0, 1
    lwz r0, 0x8(r23)
    addi r5, r5, 0x10
    slwi r3, r5, 30
    srwi r4, r5, 31
    subf r3, r4, r3
    rotlwi r3, r3, 2
    add r3, r3, r4
    subfic r3, r3, 0x4
    add r5, r5, r3
    add r3, r6, r5
    cmpw r3, r0
    ble lbl_fn_80061824_000008AC
    li r22, 0x0
    b lbl_fn_80061824_000008B8
lbl_fn_80061824_000008AC:
    lwz r0, 0x4(r23)
    stw r3, 0xc(r23)
    add r22, r0, r6
lbl_fn_80061824_000008B8:
    cmpwi r22, 0x0
    beq lbl_fn_80061824_000009EC
    mr r3, r22
    mr r4, r24
    bl fn_80686A64
    lwz r0, 0xa0(r23)
    li r3, 0x1
    cmpwi r0, 0x6
    beq lbl_fn_80061824_000008EC
    cmpwi r0, 0x8
    beq lbl_fn_80061824_000008EC
    cmpwi r0, 0xd
    bne lbl_fn_80061824_000008F0
lbl_fn_80061824_000008EC:
    li r3, 0x0
lbl_fn_80061824_000008F0:
    stw r3, 0x4(r31)
    cmpwi r26, 0x0
    li r0, 0x0
    stw r22, 0x10(r31)
    stw r27, 0x8(r31)
    stw r0, 0xc(r31)
    beq lbl_fn_80061824_00000918
    lwz r0, 0xc(r31)
    ori r0, r0, 0x1
    stw r0, 0xc(r31)
lbl_fn_80061824_00000918:
    lwz r0, 0xa0(r23)
    cmpwi r0, 0x6
    beq lbl_fn_80061824_00000934
    cmpwi r0, 0x8
    beq lbl_fn_80061824_00000934
    cmpwi r0, 0xd
    bne lbl_fn_80061824_00000940
lbl_fn_80061824_00000934:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x4
    stw r0, 0xc(r31)
lbl_fn_80061824_00000940:
    stfs f24, 0x14(r31)
    cmpwi r3, 0x1
    stfs f25, 0x18(r31)
    stfs f27, 0x1c(r31)
    stfs f28, 0x20(r31)
    stw r25, 0x24(r31)
    stfs f29, 0x28(r31)
    beq lbl_fn_80061824_00000974
    lwz r0, 0xa0(r23)
    cmpwi r0, 0x8
    beq lbl_fn_80061824_00000974
    cmpwi r0, 0xd
    bne lbl_fn_80061824_00000980
lbl_fn_80061824_00000974:
    li r0, 0x0
    stb r0, 0x2c(r31)
    b lbl_fn_80061824_00000988
lbl_fn_80061824_00000980:
    li r0, 0x1
    stb r0, 0x2c(r31)
lbl_fn_80061824_00000988:
    stb r28, 0x2d(r31)
    addi r3, r1, 0x8
    mr r4, r31
    psq_l f2, 0xac(r23), 0, 0
    psq_l f3, 0xb4(r23), 0, 0
    psq_l f4, 0xbc(r23), 0, 0
    psq_l f5, 0xc4(r23), 0, 0
    psq_l f6, 0xcc(r23), 0, 0
    psq_l f1, 0xa4(r23), 0, 0
    psq_st f1, 0x30(r31), 0, 0
    psq_st f2, 0x38(r31), 0, 0
    psq_st f3, 0x40(r31), 0, 0
    psq_st f4, 0x48(r31), 0, 0
    psq_st f5, 0x50(r31), 0, 0
    psq_st f6, 0x58(r31), 0, 0
    stfs f30, 0x8(r1)
    stfs f31, 0xc(r1)
    stw r29, 0x60(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x64(r31), 0, 0
    fmr f1, f26
    stw r30, 0x6c(r31)
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r23)
    bl fn_800BDB58
lbl_fn_80061824_000009EC:
    addi r11, r1, 0x40
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    psq_l f26, 0x68(r1), 0, 0
    lfd f26, 0x60(r1)
    psq_l f25, 0x58(r1), 0, 0
    lfd f25, 0x50(r1)
    psq_l f24, 0x48(r1), 0, 0
    lfd f24, 0x40(r1)
    bl _restgpr_22
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80061AE4(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0x40
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    stfd f26, 0x90(r1)
    psq_st f26, 0x98(r1), 0, 0
    stfd f25, 0x80(r1)
    psq_st f25, 0x88(r1), 0, 0
    stfd f24, 0x70(r1)
    psq_st f24, 0x78(r1), 0, 0
    stfd f23, 0x60(r1)
    psq_st f23, 0x68(r1), 0, 0
    stfd f22, 0x50(r1)
    psq_st f22, 0x58(r1), 0, 0
    stfd f21, 0x40(r1)
    psq_st f21, 0x48(r1), 0, 0
    bl _savegpr_22
    lwz r12, 0xc(r3)
    fmr f21, f1
    lwz r0, 0x8(r3)
    fmr f22, f2
    addi r11, r12, 0x80
    fmr f23, f3
    fmr f24, f4
    fmr f25, f5
    cmpw r11, r0
    fmr f26, f6
    lfs f29, 0xf8(r1)
    fmr f27, f7
    fmr f28, f8
    lfs f30, 0xfc(r1)
    mr r23, r3
    lfs f31, 0x100(r1)
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    ble lbl_fn_80061AE4_00000B18
    li r31, 0x0
    b lbl_fn_80061AE4_00000B3C
lbl_fn_80061AE4_00000B18:
    lwz r0, 0x4(r3)
    add. r31, r0, r12
    beq lbl_fn_80061AE4_00000B30
    lis r4, lbl_807778D8@ha
    addi r4, r4, lbl_807778D8@l
    stw r4, 0x0(r31)
lbl_fn_80061AE4_00000B30:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x80
    stw r0, 0xc(r3)
lbl_fn_80061AE4_00000B3C:
    cmpwi r31, 0x0
    beq lbl_fn_80061AE4_00000CDC
    mr r3, r24
    bl fn_80686A48
    addi r0, r3, 0x1
    lwz r6, 0xc(r23)
    slwi r5, r0, 1
    lwz r0, 0x8(r23)
    addi r5, r5, 0x10
    slwi r3, r5, 30
    srwi r4, r5, 31
    subf r3, r4, r3
    rotlwi r3, r3, 2
    add r3, r3, r4
    subfic r3, r3, 0x4
    add r5, r5, r3
    add r3, r6, r5
    cmpw r3, r0
    ble lbl_fn_80061AE4_00000B90
    li r22, 0x0
    b lbl_fn_80061AE4_00000B9C
lbl_fn_80061AE4_00000B90:
    lwz r0, 0x4(r23)
    stw r3, 0xc(r23)
    add r22, r0, r6
lbl_fn_80061AE4_00000B9C:
    cmpwi r22, 0x0
    beq lbl_fn_80061AE4_00000CDC
    mr r3, r22
    mr r4, r24
    bl fn_80686A64
    lwz r0, 0xa0(r23)
    li r3, 0x1
    cmpwi r0, 0x6
    beq lbl_fn_80061AE4_00000BD0
    cmpwi r0, 0x8
    beq lbl_fn_80061AE4_00000BD0
    cmpwi r0, 0xd
    bne lbl_fn_80061AE4_00000BD4
lbl_fn_80061AE4_00000BD0:
    li r3, 0x0
lbl_fn_80061AE4_00000BD4:
    stw r3, 0x4(r31)
    cmpwi r26, 0x0
    li r0, 0x0
    stw r22, 0x10(r31)
    stw r27, 0x8(r31)
    stw r0, 0xc(r31)
    beq lbl_fn_80061AE4_00000BFC
    lwz r0, 0xc(r31)
    ori r0, r0, 0x1
    stw r0, 0xc(r31)
lbl_fn_80061AE4_00000BFC:
    lwz r0, 0xa0(r23)
    cmpwi r0, 0x6
    beq lbl_fn_80061AE4_00000C18
    cmpwi r0, 0x8
    beq lbl_fn_80061AE4_00000C18
    cmpwi r0, 0xd
    bne lbl_fn_80061AE4_00000C24
lbl_fn_80061AE4_00000C18:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x4
    stw r0, 0xc(r31)
lbl_fn_80061AE4_00000C24:
    stfs f21, 0x14(r31)
    cmpwi r3, 0x1
    stfs f22, 0x18(r31)
    stfs f24, 0x1c(r31)
    stfs f25, 0x20(r31)
    stw r25, 0x24(r31)
    stfs f26, 0x28(r31)
    beq lbl_fn_80061AE4_00000C58
    lwz r0, 0xa0(r23)
    cmpwi r0, 0x8
    beq lbl_fn_80061AE4_00000C58
    cmpwi r0, 0xd
    bne lbl_fn_80061AE4_00000C64
lbl_fn_80061AE4_00000C58:
    li r0, 0x0
    stb r0, 0x2c(r31)
    b lbl_fn_80061AE4_00000C6C
lbl_fn_80061AE4_00000C64:
    li r0, 0x1
    stb r0, 0x2c(r31)
lbl_fn_80061AE4_00000C6C:
    stb r28, 0x2d(r31)
    addi r3, r1, 0x8
    mr r4, r31
    psq_l f2, 0xac(r23), 0, 0
    psq_l f3, 0xb4(r23), 0, 0
    psq_l f4, 0xbc(r23), 0, 0
    psq_l f5, 0xc4(r23), 0, 0
    psq_l f6, 0xcc(r23), 0, 0
    psq_l f1, 0xa4(r23), 0, 0
    psq_st f1, 0x30(r31), 0, 0
    psq_st f2, 0x38(r31), 0, 0
    psq_st f3, 0x40(r31), 0, 0
    psq_st f4, 0x48(r31), 0, 0
    psq_st f5, 0x50(r31), 0, 0
    psq_st f6, 0x58(r31), 0, 0
    stfs f27, 0x8(r1)
    stfs f28, 0xc(r1)
    stw r29, 0x60(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x64(r31), 0, 0
    fmr f1, f23
    stw r30, 0x6c(r31)
    stfs f29, 0x70(r31)
    stfs f30, 0x74(r31)
    stfs f31, 0x78(r31)
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r23)
    bl fn_800BDB58
lbl_fn_80061AE4_00000CDC:
    addi r11, r1, 0x40
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    psq_l f26, 0x98(r1), 0, 0
    lfd f26, 0x90(r1)
    psq_l f25, 0x88(r1), 0, 0
    lfd f25, 0x80(r1)
    psq_l f24, 0x78(r1), 0, 0
    lfd f24, 0x70(r1)
    psq_l f23, 0x68(r1), 0, 0
    lfd f23, 0x60(r1)
    psq_l f22, 0x58(r1), 0, 0
    lfd f22, 0x50(r1)
    psq_l f21, 0x48(r1), 0, 0
    lfd f21, 0x40(r1)
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80061DEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80061DEC_00000D74
    cmpwi r4, 0x0
    ble lbl_fn_80061DEC_00000D74
    bl dtor_80084684
lbl_fn_80061DEC_00000D74:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80061E2C(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    stfd f26, 0x310(r1)
    psq_st f26, 0x318(r1), 0, 0
    stfd f25, 0x300(r1)
    psq_st f25, 0x308(r1), 0, 0
    stfd f24, 0x2f0(r1)
    psq_st f24, 0x2f8(r1), 0, 0
    stfd f23, 0x2e0(r1)
    psq_st f23, 0x2e8(r1), 0, 0
    stfd f22, 0x2d0(r1)
    psq_st f22, 0x2d8(r1), 0, 0
    stfd f21, 0x2c0(r1)
    psq_st f21, 0x2c8(r1), 0, 0
    bl _savegpr_14
    lwz r9, 0xc(r3)
    fmr f24, f3
    lwz r0, 0x8(r3)
    fmr f22, f8
    addi r8, r9, 0x3c
    lfs f25, 0x378(r1)
    cmpw r8, r0
    stw r6, 0x8(r1)
    mr r15, r3
    mr r16, r4
    mr r17, r5
    stw r7, 0xc(r1)
    ble lbl_fn_80061E2C_00000E34
    li r19, 0x0
    b lbl_fn_80061E2C_00000E58
lbl_fn_80061E2C_00000E34:
    lwz r0, 0x4(r3)
    add. r19, r0, r9
    beq lbl_fn_80061E2C_00000E4C
    lis r4, lbl_807777D8@ha
    addi r4, r4, lbl_807777D8@l
    stw r4, 0x0(r19)
lbl_fn_80061E2C_00000E4C:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x3c
    stw r0, 0xc(r3)
lbl_fn_80061E2C_00000E58:
    cmpwi r19, 0x0
    beq lbl_fn_80061E2C_000017F8
    lfs f0, lbl_808809AC
    fadds f23, f1, f6
    fadds f31, f2, f7
    mr r3, r17
    fnmsubs f30, f0, f6, f4
    fnmsubs f27, f0, f7, f5
    bl fn_806163C0
    clrlwi r0, r3, 16
    lis r14, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0x264(r1)
    lis r18, lbl_80731150@ha
    mr r3, r17
    stw r14, 0x260(r1)
    lfd f3, lbl_80731150@l(r18)
    lfd f0, 0x260(r1)
    fsubs f21, f0, f3
    bl fn_806163E0
    lfs f0, lbl_808809A8
    clrlwi r0, r3, 16
    xoris r0, r0, 0x8000
    stw r0, 0x26c(r1)
    fmuls f3, f30, f0
    lfd f4, lbl_80731150@l(r18)
    stw r14, 0x268(r1)
    fmuls f0, f21, f22
    fabs f5, f3
    lfd f3, 0x268(r1)
    fsubs f6, f3, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_80061E2C_00000EE4
    b lbl_fn_80061E2C_00000EE8
lbl_fn_80061E2C_00000EE4:
    fmr f5, f0
lbl_fn_80061E2C_00000EE8:
    fabs f4, f30
    lfs f3, lbl_808809A8
    fmuls f0, f6, f25
    fmuls f3, f27, f3
    frsp f4, f4
    fabs f6, f3
    fdivs f3, f30, f4
    frsp f6, f6
    fmuls f26, f3, f5
    fcmpo cr0, f6, f0
    bge lbl_fn_80061E2C_00000F18
    b lbl_fn_80061E2C_00000F1C
lbl_fn_80061E2C_00000F18:
    fmr f6, f0
lbl_fn_80061E2C_00000F1C:
    fabs f3, f27
    lfs f21, lbl_808809A0
    lfs f22, lbl_808809A4
    fsubs f0, f30, f26
    lfs f4, lbl_808809AC
    addi r4, r1, 0x118
    frsp f5, f3
    stfs f21, 0x118(r1)
    fadds f3, f23, f0
    addi r3, r1, 0x220
    stfs f21, 0x11c(r1)
    addi r6, r1, 0x108
    fdivs f0, f27, f5
    psq_l f1, 0x0(r4), 0, 0
    stfs f22, 0x120(r1)
    addi r5, r1, 0x230
    addi r8, r1, 0xf8
    addi r7, r1, 0x240
    fmuls f25, f0, f6
    stfs f22, 0x124(r1)
    addi r9, r1, 0xe8
    fnmsubs f28, f4, f26, f30
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x250
    fsubs f0, f27, f25
    stfs f22, 0x108(r1)
    fnmsubs f29, f4, f25, f27
    addi r27, r1, 0xdc
    stfs f21, 0x10c(r1)
    addi r26, r1, 0x134
    fadds f0, f31, f0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    addi r14, r1, 0xc0
    stfs f21, 0x110(r1)
    addi r25, r1, 0xb4
    stfs f22, 0x114(r1)
    addi r24, r1, 0x98
    addi r23, r1, 0x8c
    addi r22, r1, 0x70
    psq_st f2, 0x8(r3), 0, 0
    addi r21, r1, 0x64
    psq_l f2, 0x8(r6), 0, 0
    addi r20, r1, 0x48
    stfs f22, 0xf8(r1)
    li r18, 0x0
    li r31, 0x0
    li r30, 0x0
    stfs f22, 0xfc(r1)
    li r29, 0x0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f21, 0x100(r1)
    stfs f21, 0x104(r1)
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f21, 0xe8(r1)
    stfs f22, 0xec(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f22, 0xf0(r1)
    stfs f21, 0xf4(r1)
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f23, 0x140(r1)
    stfs f31, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f31, 0x14c(r1)
    stfs f3, 0x150(r1)
    stfs f0, 0x154(r1)
    stfs f23, 0x158(r1)
    stfs f0, 0x15c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
lbl_fn_80061E2C_00001044:
    lwz r7, 0xc(r15)
    lwz r0, 0x8(r15)
    addi r3, r7, 0x94
    cmpw r3, r0
    ble lbl_fn_80061E2C_00001060
    li r28, 0x0
    b lbl_fn_80061E2C_00001090
lbl_fn_80061E2C_00001060:
    lwz r0, 0x4(r15)
    lis r3, fn_8005ED68@ha
    addi r4, r3, fn_8005ED68@l
    li r5, 0x0
    add r3, r0, r7
    li r6, 0x20
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r15)
    mr r28, r3
    addi r0, r4, 0x94
    stw r0, 0xc(r15)
lbl_fn_80061E2C_00001090:
    cmpwi r28, 0x0
    beq lbl_fn_80061E2C_000017F8
    addi r3, r1, 0x140
    fmr f2, f21
    add r3, r3, r30
    addi r6, r1, 0xd0
    lfs f3, 0x4(r3)
    mr r4, r27
    lfs f0, 0x0(r3)
    stfs f0, 0xd0(r1)
    mr r5, r27
    addi r3, r15, 0xa4
    stfs f3, 0xd4(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f21, 0xd8(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xe4(r1)
    bl fn_805F93C0
    lfs f2, 0xe4(r1)
    addi r6, r1, 0x140
    psq_l f1, 0x0(r27), 0, 0
    addi r3, r1, 0x220
    psq_st f1, 0x0(r28), 0, 0
    add r3, r3, r31
    lfsux f0, r6, r30
    mr r4, r25
    stfs f2, 0x8(r28)
    mr r5, r25
    fadds f4, f26, f0
    lfs f5, 0x4(r6)
    lfs f3, 0x4(r3)
    addi r6, r1, 0xa8
    lfs f0, 0x0(r3)
    addi r3, r15, 0xa4
    stfs f21, 0xc0(r1)
    stfs f21, 0xc4(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r14), 0, 0
    stw r16, 0xc(r28)
    stfs f0, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f2, 0x13c(r1)
    psq_l f2, 0x8(r14), 0, 0
    psq_st f1, 0x10(r28), 0, 0
    psq_st f2, 0x18(r28), 0, 0
    fmr f2, f21
    stfs f4, 0xa8(r1)
    stfs f5, 0xac(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f21, 0xb0(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xbc(r1)
    bl fn_805F93C0
    lfs f2, 0xbc(r1)
    addi r5, r1, 0x140
    psq_l f1, 0x0(r25), 0, 0
    add r5, r5, r30
    psq_st f1, 0x20(r28), 0, 0
    addi r3, r1, 0x220
    lfs f3, 0x4(r5)
    add r3, r3, r31
    stfs f2, 0x28(r28)
    addi r6, r1, 0x80
    lfs f0, 0x0(r5)
    fadds f5, f25, f3
    lfs f4, 0x4(r3)
    mr r4, r23
    lfs f3, 0x8(r3)
    fadds f0, f26, f0
    stfs f22, 0x98(r1)
    mr r5, r23
    addi r3, r15, 0xa4
    stfs f21, 0x9c(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    stw r16, 0x2c(r28)
    stfs f3, 0xa0(r1)
    stfs f4, 0xa4(r1)
    stfs f2, 0x13c(r1)
    psq_l f2, 0x8(r24), 0, 0
    psq_st f1, 0x30(r28), 0, 0
    psq_st f2, 0x38(r28), 0, 0
    fmr f2, f21
    stfs f0, 0x80(r1)
    stfs f5, 0x84(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f21, 0x88(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F93C0
    lfs f2, 0x94(r1)
    addi r6, r1, 0x140
    psq_l f1, 0x0(r23), 0, 0
    add r6, r6, r30
    psq_st f1, 0x40(r28), 0, 0
    addi r3, r1, 0x220
    lfs f0, 0x4(r6)
    add r3, r3, r31
    stfs f2, 0x48(r28)
    mr r4, r21
    fadds f5, f25, f0
    lfs f4, 0x0(r6)
    lfs f3, 0xc(r3)
    addi r6, r1, 0x58
    lfs f0, 0x8(r3)
    mr r5, r21
    stfs f22, 0x70(r1)
    addi r3, r15, 0xa4
    stfs f22, 0x74(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stw r16, 0x4c(r28)
    stfs f0, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f2, 0x13c(r1)
    psq_l f2, 0x8(r22), 0, 0
    psq_st f1, 0x50(r28), 0, 0
    psq_st f2, 0x58(r28), 0, 0
    fmr f2, f21
    stfs f4, 0x58(r1)
    stfs f5, 0x5c(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f21, 0x60(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x6c(r1)
    bl fn_805F93C0
    lfs f2, 0x6c(r1)
    addi r4, r1, 0x220
    psq_l f1, 0x0(r21), 0, 0
    add r4, r4, r31
    psq_st f1, 0x60(r28), 0, 0
    addi r18, r18, 0x1
    lfs f3, 0xc(r4)
    add r3, r19, r29
    stfs f2, 0x68(r28)
    cmpwi r18, 0x4
    lfs f0, 0x0(r4)
    addi r31, r31, 0x10
    stfs f21, 0x48(r1)
    addi r30, r30, 0x8
    addi r29, r29, 0x4
    stfs f22, 0x4c(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    stw r16, 0x6c(r28)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f2, 0x13c(r1)
    psq_l f2, 0x8(r20), 0, 0
    psq_st f1, 0x70(r28), 0, 0
    psq_st f2, 0x78(r28), 0, 0
    stw r28, 0x8(r3)
    blt lbl_fn_80061E2C_00001044
    fsubs f0, f30, f26
    lfs f6, lbl_808809B0
    fadds f3, f23, f26
    lfs f30, lbl_808809A0
    fsubs f5, f27, f25
    lfs f27, lbl_808809A8
    fadds f7, f23, f0
    lfs f0, lbl_808809AC
    fmadds f4, f27, f28, f3
    lis r3, lbl_80731150@ha
    fmuls f8, f6, f26
    stfs f25, 0x1c4(r1)
    fadds f5, f31, f5
    stfs f4, 0x1f0(r1)
    fmadds f3, f0, f8, f28
    lfd f28, lbl_80731150@l(r3)
    fmuls f8, f6, f25
    stfs f4, 0x208(r1)
    fadds f6, f31, f25
    stfs f3, 0x1c0(r1)
    fmadds f4, f27, f25, f31
    addi r21, r1, 0x2c
    fmadds f0, f0, f8, f29
    stfs f26, 0x1d0(r1)
    fmadds f6, f27, f29, f6
    stfs f4, 0x1f4(r1)
    fmadds f7, f27, f26, f7
    lfs f29, lbl_808809B4
    fmadds f5, f27, f25, f5
    stfs f0, 0x1cc(r1)
    fmadds f4, f27, f26, f23
    stfs f6, 0x200(r1)
    frsp f31, f30
    addi r22, r1, 0x20
    stfs f7, 0x1fc(r1)
    addi r23, r1, 0x10
    stfs f5, 0x20c(r1)
    li r25, 0x0
    li r27, 0x0
    li r28, 0x0
    stfs f4, 0x214(r1)
    lis r18, fn_8005ED68@ha
    lis r14, 0x4330
    stfs f6, 0x218(r1)
    stfs f3, 0x1d8(r1)
    stfs f25, 0x1dc(r1)
    stfs f0, 0x1e4(r1)
    stfs f26, 0x1e8(r1)
lbl_fn_80061E2C_000013B4:
    lwz r7, 0xc(r15)
    lwz r0, 0x8(r15)
    addi r3, r7, 0x94
    cmpw r3, r0
    ble lbl_fn_80061E2C_000013D0
    li r20, 0x0
    b lbl_fn_80061E2C_000013FC
lbl_fn_80061E2C_000013D0:
    lwz r0, 0x4(r15)
    addi r4, r18, fn_8005ED68@l
    li r5, 0x0
    li r6, 0x20
    add r3, r0, r7
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r15)
    mr r20, r3
    addi r0, r4, 0x94
    stw r0, 0xc(r15)
lbl_fn_80061E2C_000013FC:
    cmpwi r20, 0x0
    beq lbl_fn_80061E2C_000017F8
    addi r5, r1, 0x1c0
    lfsux f0, r5, r27
    xoris r0, r25, 0x8000
    stw r0, 0x26c(r1)
    fmuls f3, f0, f27
    addi r3, r1, 0x190
    stw r14, 0x268(r1)
    li r4, 0x7a
    lfd f0, 0x268(r1)
    stfs f3, 0x0(r5)
    fsubs f0, f0, f28
    lfs f3, 0x4(r5)
    fmuls f3, f3, f27
    fmuls f1, f29, f0
    stfs f3, 0x4(r5)
    bl fn_805F8E70
    addi r3, r1, 0x1f0
    stfs f30, 0x130(r1)
    add r3, r3, r27
    li r26, 0x0
    lfs f3, 0x4(r3)
    li r29, 0x0
    lfs f0, 0x0(r3)
    li r30, 0x0
    frsp f25, f3
    stfs f0, 0x128(r1)
    frsp f23, f0
    stfs f3, 0x12c(r1)
lbl_fn_80061E2C_00001474:
    srwi r0, r26, 31
    add r0, r0, r26
    srawi. r0, r0, 1
    beq lbl_fn_80061E2C_0000149C
    mulli r4, r25, 0xc
    addi r3, r1, 0x1c0
    add r3, r3, r4
    lfs f0, 0x4(r3)
    fneg f4, f0
    b lbl_fn_80061E2C_000014AC
lbl_fn_80061E2C_0000149C:
    mulli r4, r25, 0xc
    addi r3, r1, 0x1c0
    add r3, r3, r4
    lfs f4, 0x4(r3)
lbl_fn_80061E2C_000014AC:
    cmpwi r26, 0x0
    li r0, 0x0
    beq lbl_fn_80061E2C_000014C0
    cmpwi r26, 0x3
    bne lbl_fn_80061E2C_000014C4
lbl_fn_80061E2C_000014C0:
    li r0, 0x1
lbl_fn_80061E2C_000014C4:
    cmpwi r0, 0x0
    beq lbl_fn_80061E2C_000014D8
    lfs f0, 0x0(r3)
    fneg f0, f0
    b lbl_fn_80061E2C_000014DC
lbl_fn_80061E2C_000014D8:
    lfs f0, 0x0(r3)
lbl_fn_80061E2C_000014DC:
    addi r6, r1, 0x160
    stfsux f0, r6, r30
    frsp f0, f0
    addi r3, r1, 0x1f0
    lfsux f3, r3, r4
    addi r24, r1, 0x160
    stfs f4, 0x4(r6)
    add r24, r24, r30
    stfs f30, 0x8(r6)
    fadds f0, f0, f3
    lfs f4, 0x4(r3)
    mr r4, r24
    stfs f0, 0x0(r6)
    mr r5, r24
    frsp f0, f0
    stfs f3, 0x38(r1)
    addi r3, r1, 0x190
    lfs f3, 0x4(r6)
    fsubs f5, f0, f23
    stfs f4, 0x3c(r1)
    fadds f0, f3, f4
    stfs f5, 0x2c(r1)
    stfs f0, 0x4(r6)
    frsp f0, f0
    lfs f3, 0x8(r6)
    fsubs f4, f0, f25
    stfs f30, 0x40(r1)
    fadds f0, f3, f30
    stfs f4, 0x30(r1)
    fsubs f2, f0, f31
    stfs f0, 0x8(r6)
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    stfs f2, 0x8(r6)
    bl fn_805F93C0
    lfs f0, 0x0(r24)
    mr r4, r22
    mr r5, r22
    addi r3, r15, 0xa4
    fadds f0, f0, f23
    stfs f0, 0x0(r24)
    lfs f0, 0x4(r24)
    fadds f0, f0, f25
    stfs f0, 0x4(r24)
    lfs f0, 0x8(r24)
    fadds f0, f0, f31
    stfs f0, 0x8(r24)
    frsp f2, f0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F93C0
    addi r3, r1, 0x160
    psq_l f1, 0x0(r22), 0, 0
    add r3, r3, r30
    cmpwi r26, 0x0
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x28(r1)
    stfs f2, 0x8(r3)
    beq lbl_fn_80061E2C_000015DC
    cmpwi r26, 0x3
    bne lbl_fn_80061E2C_000015E0
lbl_fn_80061E2C_000015DC:
    li r0, 0x1
lbl_fn_80061E2C_000015E0:
    cmpwi r0, 0x0
    beq lbl_fn_80061E2C_000015F0
    lfs f0, lbl_808809A0
    b lbl_fn_80061E2C_000015F4
lbl_fn_80061E2C_000015F0:
    lfs f0, lbl_808809A4
lbl_fn_80061E2C_000015F4:
    srwi r0, r26, 31
    stfs f0, 0x10(r1)
    add r0, r0, r26
    srawi. r3, r0, 1
    beq lbl_fn_80061E2C_00001610
    lfs f0, lbl_808809A0
    b lbl_fn_80061E2C_00001614
lbl_fn_80061E2C_00001610:
    lfs f0, lbl_808809A4
lbl_fn_80061E2C_00001614:
    cmpwi r26, 0x0
    stfs f0, 0x14(r1)
    li r0, 0x0
    beq lbl_fn_80061E2C_0000162C
    cmpwi r26, 0x3
    bne lbl_fn_80061E2C_00001630
lbl_fn_80061E2C_0000162C:
    li r0, 0x1
lbl_fn_80061E2C_00001630:
    cmpwi r0, 0x0
    beq lbl_fn_80061E2C_00001640
    lfs f0, lbl_808809A0
    b lbl_fn_80061E2C_00001644
lbl_fn_80061E2C_00001640:
    lfs f0, lbl_808809A4
lbl_fn_80061E2C_00001644:
    cmpwi r3, 0x0
    stfs f0, 0x18(r1)
    beq lbl_fn_80061E2C_00001658
    lfs f0, lbl_808809A0
    b lbl_fn_80061E2C_0000165C
lbl_fn_80061E2C_00001658:
    lfs f0, lbl_808809A4
lbl_fn_80061E2C_0000165C:
    addi r4, r1, 0x160
    add r3, r20, r29
    add r4, r4, r30
    addi r26, r26, 0x1
    lfs f2, 0x8(r4)
    cmpwi r26, 0x4
    psq_l f1, 0x0(r4), 0, 0
    addi r29, r29, 0x20
    psq_st f1, 0x0(r3), 0, 0
    addi r30, r30, 0xc
    psq_l f1, 0x0(r23), 0, 0
    stfs f2, 0x8(r3)
    stw r16, 0xc(r3)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x10(r3), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    blt lbl_fn_80061E2C_00001474
    addi r25, r25, 0x1
    add r3, r19, r28
    cmpwi r25, 0x4
    stw r20, 0x18(r3)
    addi r27, r27, 0xc
    addi r28, r28, 0x4
    blt lbl_fn_80061E2C_000013B4
    lwz r0, 0xa0(r15)
    li r3, 0x1
    cmpwi r0, 0x6
    beq lbl_fn_80061E2C_000016E0
    cmpwi r0, 0x8
    beq lbl_fn_80061E2C_000016E0
    cmpwi r0, 0xd
    bne lbl_fn_80061E2C_000016E4
lbl_fn_80061E2C_000016E0:
    li r3, 0x0
lbl_fn_80061E2C_000016E4:
    cmpwi r17, 0x0
    stw r3, 0x4(r19)
    li r16, 0x0
    beq lbl_fn_80061E2C_00001734
    lwz r0, 0x28(r17)
    mr r14, r16
    cmpwi r0, 0x0
    bne lbl_fn_80061E2C_00001724
    mr r3, r17
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_80061E2C_00001728
    addi r3, r17, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_80061E2C_00001728
lbl_fn_80061E2C_00001724:
    li r14, 0x1
lbl_fn_80061E2C_00001728:
    cmpwi r14, 0x0
    beq lbl_fn_80061E2C_00001734
    li r16, 0x1
lbl_fn_80061E2C_00001734:
    cmpwi r16, 0x0
    beq lbl_fn_80061E2C_00001740
    b lbl_fn_80061E2C_00001744
lbl_fn_80061E2C_00001740:
    li r17, 0x0
lbl_fn_80061E2C_00001744:
    lwz r0, 0x8(r1)
    li r16, 0x0
    stw r17, 0x28(r19)
    cmpwi r0, 0x0
    beq lbl_fn_80061E2C_0000179C
    mr r3, r0
    mr r14, r16
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80061E2C_0000178C
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_80061E2C_00001790
    lwz r3, 0x8(r1)
    addi r3, r3, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_80061E2C_00001790
lbl_fn_80061E2C_0000178C:
    li r14, 0x1
lbl_fn_80061E2C_00001790:
    cmpwi r14, 0x0
    beq lbl_fn_80061E2C_0000179C
    li r16, 0x1
lbl_fn_80061E2C_0000179C:
    cmpwi r16, 0x0
    beq lbl_fn_80061E2C_000017A8
    b lbl_fn_80061E2C_000017B0
lbl_fn_80061E2C_000017A8:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80061E2C_000017B0:
    lwz r0, 0x8(r1)
    stw r0, 0x2c(r19)
    li r0, 0x1
    stb r0, 0x30(r19)
    lwz r0, 0xa0(r15)
    cmpwi r0, 0x8
    beq lbl_fn_80061E2C_000017D4
    cmpwi r0, 0xd
    bne lbl_fn_80061E2C_000017DC
lbl_fn_80061E2C_000017D4:
    li r0, 0x0
    stb r0, 0x30(r19)
lbl_fn_80061E2C_000017DC:
    lwz r0, 0xc(r1)
    fmr f1, f24
    stw r0, 0x34(r19)
    mr r4, r19
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r15)
    bl fn_800BDB58
lbl_fn_80061E2C_000017F8:
    addi r11, r1, 0x2c0
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    psq_l f26, 0x318(r1), 0, 0
    lfd f26, 0x310(r1)
    psq_l f25, 0x308(r1), 0, 0
    lfd f25, 0x300(r1)
    psq_l f24, 0x2f8(r1), 0, 0
    lfd f24, 0x2f0(r1)
    psq_l f23, 0x2e8(r1), 0, 0
    lfd f23, 0x2e0(r1)
    psq_l f22, 0x2d8(r1), 0, 0
    lfd f22, 0x2d0(r1)
    psq_l f21, 0x2c8(r1), 0, 0
    lfd f21, 0x2c0(r1)
    bl _restgpr_14
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_80062908(void)
{
    nofralloc
    lwz r9, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r8, r9, 0x1c
    cmpw r8, r0
    ble lbl_fn_80062908_00001884
    li r9, 0x0
    b lbl_fn_80062908_000018A8
lbl_fn_80062908_00001884:
    lwz r0, 0x4(r3)
    add. r9, r0, r9
    beq lbl_fn_80062908_0000189C
    lis r8, lbl_80777898@ha
    addi r8, r8, lbl_80777898@l
    stw r8, 0x0(r9)
lbl_fn_80062908_0000189C:
    lwz r8, 0xc(r3)
    addi r0, r8, 0x1c
    stw r0, 0xc(r3)
lbl_fn_80062908_000018A8:
    cmpwi r9, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x4(r9)
    stw r4, 0x14(r9)
    mr r4, r9
    stw r5, 0x8(r9)
    li r5, 0xd
    stw r6, 0xc(r9)
    stw r7, 0x10(r9)
    lwz r3, lbl_8087EFB4
    b fn_800BDB58
    blr
}

asm void fn_8006297C(void)
{
    nofralloc
    lwz r9, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r8, r9, 0x1c
    cmpw r8, r0
    ble lbl_fn_8006297C_000018F8
    li r9, 0x0
    b lbl_fn_8006297C_0000191C
lbl_fn_8006297C_000018F8:
    lwz r0, 0x4(r3)
    add. r9, r0, r9
    beq lbl_fn_8006297C_00001910
    lis r8, lbl_80777858@ha
    addi r8, r8, lbl_80777858@l
    stw r8, 0x0(r9)
lbl_fn_8006297C_00001910:
    lwz r8, 0xc(r3)
    addi r0, r8, 0x1c
    stw r0, 0xc(r3)
lbl_fn_8006297C_0000191C:
    cmpwi r9, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x4(r9)
    stw r4, 0x14(r9)
    mr r4, r9
    stw r5, 0x8(r9)
    li r5, 0xd
    stw r6, 0xc(r9)
    stw r7, 0x10(r9)
    lwz r3, lbl_8087EFB4
    b fn_800BDB58
    blr
}

asm void fn_800629F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_24
    lwz r9, 0xc(r3)
    fmr f31, f1
    lwz r0, 0x8(r3)
    mr r26, r3
    addi r8, r9, 0x20
    mr r27, r4
    cmpw r8, r0
    mr r28, r5
    mr r29, r6
    mr r30, r7
    ble lbl_fn_800629F0_000019A0
    li r31, 0x0
    b lbl_fn_800629F0_000019C4
lbl_fn_800629F0_000019A0:
    lwz r0, 0x4(r3)
    add. r31, r0, r9
    beq lbl_fn_800629F0_000019B8
    lis r4, lbl_80777AB0@ha
    addi r4, r4, lbl_80777AB0@l
    stw r4, 0x0(r31)
lbl_fn_800629F0_000019B8:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_800629F0_000019C4:
    cmpwi r31, 0x0
    beq lbl_fn_800629F0_00001BCC
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x154
    cmpw r4, r0
    ble lbl_fn_800629F0_000019E8
    li r25, 0x0
    b lbl_fn_800629F0_00001A18
lbl_fn_800629F0_000019E8:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x14
    bl fn_80695720
    lwz r4, 0xc(r26)
    mr r25, r3
    addi r0, r4, 0x154
    stw r0, 0xc(r26)
lbl_fn_800629F0_00001A18:
    cmpwi r25, 0x0
    beq lbl_fn_800629F0_00001BCC
    lfs f0, 0x0(r28)
    mr r26, r25
    lfs f1, 0x4(r28)
    li r24, 0x0
    fneg f2, f0
    lfs f4, 0x8(r28)
    fneg f3, f1
    stfs f2, 0x0(r25)
    fneg f5, f4
    stfs f3, 0x4(r25)
    stfs f4, 0x8(r25)
    stfs f2, 0x10(r25)
    stfs f1, 0x14(r25)
    stfs f4, 0x18(r25)
    stfs f0, 0x20(r25)
    stfs f1, 0x24(r25)
    stfs f4, 0x28(r25)
    stfs f2, 0x30(r25)
    stfs f3, 0x34(r25)
    stfs f4, 0x38(r25)
    stfs f0, 0x40(r25)
    stfs f3, 0x44(r25)
    stfs f4, 0x48(r25)
    stfs f0, 0x50(r25)
    stfs f1, 0x54(r25)
    stfs f4, 0x58(r25)
    stfs f0, 0x60(r25)
    stfs f1, 0x64(r25)
    stfs f5, 0x68(r25)
    stfs f0, 0x70(r25)
    stfs f3, 0x74(r25)
    stfs f4, 0x78(r25)
    stfs f0, 0x80(r25)
    stfs f3, 0x84(r25)
    stfs f5, 0x88(r25)
    stfs f0, 0x90(r25)
    stfs f1, 0x94(r25)
    stfs f5, 0x98(r25)
    stfs f2, 0xa0(r25)
    stfs f1, 0xa4(r25)
    stfs f5, 0xa8(r25)
    stfs f0, 0xb0(r25)
    stfs f3, 0xb4(r25)
    stfs f5, 0xb8(r25)
    stfs f2, 0xc0(r25)
    stfs f3, 0xc4(r25)
    stfs f5, 0xc8(r25)
    stfs f2, 0xd0(r25)
    stfs f1, 0xd4(r25)
    stfs f5, 0xd8(r25)
    stfs f2, 0xe0(r25)
    stfs f1, 0xe4(r25)
    stfs f4, 0xe8(r25)
    stfs f2, 0xf0(r25)
    stfs f3, 0xf4(r25)
    stfs f5, 0xf8(r25)
    stfs f2, 0x100(r25)
    stfs f3, 0x104(r25)
    stfs f4, 0x108(r25)
    stfs f0, 0x110(r25)
    stfs f3, 0x114(r25)
    stfs f5, 0x118(r25)
    stfs f0, 0x120(r25)
    stfs f1, 0x124(r25)
    stfs f5, 0x128(r25)
    stfs f2, 0x130(r25)
    stfs f1, 0x134(r25)
    stfs f4, 0x138(r25)
lbl_fn_800629F0_00001B30:
    cmpwi r30, 0x0
    beq lbl_fn_800629F0_00001B48
    mr r3, r30
    mr r4, r26
    mr r5, r26
    bl fn_805F93C0
lbl_fn_800629F0_00001B48:
    lfs f2, 0x0(r26)
    addi r24, r24, 0x1
    lfs f0, 0x0(r27)
    cmplwi r24, 0x14
    lfs f1, 0x4(r27)
    fadds f2, f2, f0
    lfs f0, 0x8(r27)
    stfs f2, 0x0(r26)
    lfs f2, 0x4(r26)
    fadds f1, f2, f1
    stfs f1, 0x4(r26)
    lfs f1, 0x8(r26)
    fadds f0, f1, f0
    stfs f0, 0x8(r26)
    stw r29, 0xc(r26)
    addi r26, r26, 0x10
    blt lbl_fn_800629F0_00001B30
    li r0, 0x0
    stw r0, 0x4(r31)
    li r0, 0xb0
    li r4, 0x13
    stw r0, 0xc(r31)
    li r3, 0x14
    li r0, 0x1
    fmr f1, f31
    stw r4, 0x10(r31)
    mr r4, r31
    li r5, 0xd
    stw r3, 0x14(r31)
    stw r25, 0x8(r31)
    stb r0, 0x18(r31)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_800629F0_00001BCC:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80062C8C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x80
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stfd f26, 0xc0(r1)
    psq_st f26, 0xc8(r1), 0, 0
    stfd f25, 0xb0(r1)
    psq_st f25, 0xb8(r1), 0, 0
    stfd f24, 0xa0(r1)
    psq_st f24, 0xa8(r1), 0, 0
    stfd f23, 0x90(r1)
    psq_st f23, 0x98(r1), 0, 0
    stfd f22, 0x80(r1)
    psq_st f22, 0x88(r1), 0, 0
    bl _savegpr_22
    lwz r7, 0xc(r3)
    fmr f22, f1
    lwz r0, 0x8(r3)
    fmr f23, f2
    addi r6, r7, 0x20
    fmr f24, f3
    fmr f25, f4
    fmr f26, f5
    cmpw r6, r0
    fmr f27, f6
    mr r27, r3
    mr r28, r4
    mr r29, r5
    ble lbl_fn_80062C8C_00001C90
    li r30, 0x0
    b lbl_fn_80062C8C_00001CB4
lbl_fn_80062C8C_00001C90:
    lwz r0, 0x4(r3)
    add. r30, r0, r7
    beq lbl_fn_80062C8C_00001CA8
    lis r5, lbl_80777AB0@ha
    addi r5, r5, lbl_80777AB0@l
    stw r5, 0x0(r30)
lbl_fn_80062C8C_00001CA8:
    lwz r5, 0xc(r3)
    addi r0, r5, 0x20
    stw r0, 0xc(r3)
lbl_fn_80062C8C_00001CB4:
    cmpwi r30, 0x0
    beq lbl_fn_80062C8C_00001E74
    addi r4, r4, 0x1
    lwz r6, 0xc(r3)
    slwi r24, r4, 5
    lwz r0, 0x8(r3)
    addi r24, r24, 0x10
    slwi r7, r4, 1
    slwi r4, r24, 30
    srwi r5, r24, 31
    subf r4, r5, r4
    rotlwi r4, r4, 2
    add r4, r4, r5
    subfic r4, r4, 0x4
    add r24, r24, r4
    add r4, r6, r24
    cmpw r4, r0
    ble lbl_fn_80062C8C_00001D04
    li r31, 0x0
    b lbl_fn_80062C8C_00001D30
lbl_fn_80062C8C_00001D04:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    li r5, 0x0
    add r3, r0, r6
    addi r4, r4, fn_800610A0@l
    li r6, 0x10
    bl fn_80695720
    lwz r0, 0xc(r27)
    mr r31, r3
    add r0, r0, r24
    stw r0, 0xc(r27)
lbl_fn_80062C8C_00001D30:
    cmpwi r31, 0x0
    beq lbl_fn_80062C8C_00001E74
    lfs f0, lbl_808809A8
    lis r3, lbl_80731158@ha
    lfs f29, lbl_808809A0
    addi r23, r1, 0x8
    fmuls f28, f0, f27
    lfd f30, lbl_80731158@l(r3)
    lfs f31, lbl_808809B8
    addi r25, r28, 0x1
    li r22, 0x0
    li r27, 0x0
    li r26, 0x0
    lis r24, 0x4330
    b lbl_fn_80062C8C_00001E2C
lbl_fn_80062C8C_00001D6C:
    stw r28, 0x54(r1)
    addi r3, r1, 0x18
    li r4, 0x79
    stw r24, 0x50(r1)
    lfd f0, 0x50(r1)
    stw r22, 0x4c(r1)
    fsubs f0, f0, f30
    stw r24, 0x48(r1)
    fdivs f0, f31, f0
    lfd f3, 0x48(r1)
    stfs f26, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    fsubs f3, f3, f30
    fmuls f1, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x8(r1)
    addi r0, r26, 0x1
    lfs f3, 0xc(r1)
    add r3, r31, r27
    lfs f0, 0x10(r1)
    fadds f4, f4, f22
    fadds f3, f3, f23
    slwi r0, r0, 4
    fadds f2, f0, f24
    stfs f4, 0x8(r1)
    add r4, r31, r0
    stfs f3, 0xc(r1)
    addi r22, r22, 0x1
    addi r27, r27, 0x20
    stfs f2, 0x10(r1)
    addi r26, r26, 0x2
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stw r29, 0xc(r3)
    lfs f0, 0xc(r1)
    lfs f2, 0x10(r1)
    fsubs f0, f0, f27
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stw r29, 0xc(r4)
lbl_fn_80062C8C_00001E2C:
    cmplw r22, r25
    blt lbl_fn_80062C8C_00001D6C
    li r0, 0x0
    stw r0, 0x4(r30)
    li r0, 0x98
    slwi r4, r28, 1
    stw r0, 0xc(r30)
    slwi r3, r25, 1
    li r0, 0x1
    fmr f1, f25
    stw r4, 0x10(r30)
    mr r4, r30
    li r5, 0xd
    stw r3, 0x14(r30)
    stw r31, 0x8(r30)
    stb r0, 0x18(r30)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_80062C8C_00001E74:
    addi r11, r1, 0x80
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    psq_l f26, 0xc8(r1), 0, 0
    lfd f26, 0xc0(r1)
    psq_l f25, 0xb8(r1), 0, 0
    lfd f25, 0xb0(r1)
    psq_l f24, 0xa8(r1), 0, 0
    lfd f24, 0xa0(r1)
    psq_l f23, 0x98(r1), 0, 0
    lfd f23, 0x90(r1)
    psq_l f22, 0x88(r1), 0, 0
    lfd f22, 0x80(r1)
    bl _restgpr_22
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80062F7C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    fmr f31, f4
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    fmr f30, f5
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    fmr f29, f6
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    fmr f28, f7
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    fmr f27, f3
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    fmr f26, f2
    stfd f25, 0x60(r1)
    psq_st f25, 0x68(r1), 0, 0
    fmr f25, f1
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    stw r28, 0x50(r1)
    mr r28, r5
    bl fn_80062C8C
    lwz r4, 0xc(r29)
    lwz r0, 0x8(r29)
    addi r3, r4, 0x20
    cmpw r3, r0
    ble lbl_fn_80062F7C_00001F74
    li r31, 0x0
    b lbl_fn_80062F7C_00001F98
lbl_fn_80062F7C_00001F74:
    lwz r0, 0x4(r29)
    add. r31, r0, r4
    beq lbl_fn_80062F7C_00001F8C
    lis r3, lbl_80777AB0@ha
    addi r3, r3, lbl_80777AB0@l
    stw r3, 0x0(r31)
lbl_fn_80062F7C_00001F8C:
    lwz r3, 0xc(r29)
    addi r0, r3, 0x20
    stw r0, 0xc(r29)
lbl_fn_80062F7C_00001F98:
    cmpwi r31, 0x0
    beq lbl_fn_80062F7C_00002108
    lwz r6, 0xc(r29)
    lwz r0, 0x8(r29)
    addi r3, r6, 0x54
    cmpw r3, r0
    ble lbl_fn_80062F7C_00001FBC
    li r30, 0x0
    b lbl_fn_80062F7C_00001FEC
lbl_fn_80062F7C_00001FBC:
    lwz r0, 0x4(r29)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r29)
    mr r30, r3
    addi r0, r4, 0x54
    stw r0, 0xc(r29)
lbl_fn_80062F7C_00001FEC:
    cmpwi r30, 0x0
    beq lbl_fn_80062F7C_00002108
    lfs f4, lbl_808809A0
    fneg f2, f30
    lfs f0, lbl_808809A8
    fmr f1, f28
    stfs f4, 0x0(r30)
    addi r3, r1, 0x18
    fmuls f6, f0, f30
    stfs f4, 0x4(r30)
    fmadds f5, f0, f29, f26
    lfs f0, lbl_808809BC
    li r4, 0x79
    stfs f30, 0x8(r30)
    fneg f3, f6
    stw r28, 0xc(r30)
    fmuls f0, f0, f2
    stfs f3, 0x10(r30)
    stfs f4, 0x14(r30)
    stfs f0, 0x18(r30)
    stw r28, 0x1c(r30)
    stfs f4, 0x20(r30)
    stfs f4, 0x24(r30)
    stfs f4, 0x28(r30)
    stw r28, 0x2c(r30)
    stfs f6, 0x30(r30)
    stfs f4, 0x34(r30)
    stfs f0, 0x38(r30)
    stfs f25, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f27, 0x10(r1)
    stw r28, 0x3c(r30)
    bl fn_805F8E70
    frsp f28, f25
    lfs f29, 0xc(r1)
    frsp f30, f27
    mr r29, r30
    li r28, 0x0
lbl_fn_80062F7C_00002084:
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x18
    bl fn_805F93C0
    lfs f0, 0x0(r29)
    addi r28, r28, 0x1
    cmplwi r28, 0x4
    fadds f0, f0, f28
    stfs f0, 0x0(r29)
    lfs f0, 0x4(r29)
    fadds f0, f0, f29
    stfs f0, 0x4(r29)
    lfs f0, 0x8(r29)
    fadds f0, f0, f30
    stfs f0, 0x8(r29)
    addi r29, r29, 0x10
    blt lbl_fn_80062F7C_00002084
    li r0, 0x0
    stw r0, 0x4(r31)
    li r0, 0xa0
    li r4, 0x2
    stw r0, 0xc(r31)
    li r3, 0x4
    li r0, 0x1
    fmr f1, f31
    stw r4, 0x10(r31)
    mr r4, r31
    li r5, 0xd
    stw r3, 0x14(r31)
    stw r30, 0x8(r31)
    stb r0, 0x18(r31)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_80062F7C_00002108:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    psq_l f25, 0x68(r1), 0, 0
    lfd f25, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
