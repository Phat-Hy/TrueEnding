#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092814(void);
extern void fn_80094F98(void);
extern void fn_80095F10(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800BFAC8(void);
extern void fn_800C122C(void);
extern void fn_800C2C20(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_802180A8(void);
extern void fn_80232B7C(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_803EC7A0(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F8C50(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807522F4[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF50;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_80885FF0;
extern u32 lbl_80885FF4;
extern u32 lbl_80885FF8;
extern u32 lbl_80885FFC;
extern u32 lbl_80886000;
extern u32 lbl_80886004;
extern u32 lbl_80886008;
extern u32 lbl_8088600C;

/* Function declarations */
void fn_803F4D98(void);
void fn_803F53E0(void);
void fn_803F5AD8(void);
void fn_803F5B48(void);
void fn_803F5C2C(void);
void fn_803F60E8(void);
void fn_803F6280(void);
void fn_803F6448(void);

asm void fn_803F4D98(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803F4D98_00000044
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F4D98_0000013C
lbl_fn_803F4D98_00000044:
    cmpwi r0, 0x2
    bne lbl_fn_803F4D98_000000FC
    lwz r0, 0x614(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803F4D98_000000A4
    lfs f0, lbl_80885FF0
    li r5, 0x0
    stw r5, 0x5c(r1)
    li r0, 0x3
    addi r4, r1, 0x58
    stw r0, 0x58(r1)
    li r0, 0x1
    stw r5, 0x60(r1)
    stw r5, 0x64(r1)
    stw r5, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    stw r0, 0x54(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F4D98_0000013C
lbl_fn_803F4D98_000000A4:
    lwz r0, 0x674(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803F4D98_0000013C
    lfs f0, lbl_80885FF0
    li r5, 0x0
    stw r5, 0x3c(r1)
    li r0, 0x3
    addi r4, r1, 0x38
    stw r0, 0x38(r1)
    li r0, 0x4
    stw r5, 0x40(r1)
    stw r5, 0x44(r1)
    stw r5, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stw r0, 0x54(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F4D98_0000013C
lbl_fn_803F4D98_000000FC:
    cmpwi r0, 0x3
    bne lbl_fn_803F4D98_0000013C
    lwz r0, 0xf8(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803F4D98_0000013C
    lfs f31, 0x328(r3)
    li r4, 0x0
    addi r3, r3, 0xf4
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803F4D98_0000013C
    lwz r0, 0xf8(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xf8(r31)
lbl_fn_803F4D98_0000013C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F4D98_0000017C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F4D98_0000017C:
    addi r3, r31, 0x4c4
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    addi r3, r31, 0x54c
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r0, 0x5e4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_00000234
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F4D98_00000234
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_803F4D98_00000234:
    mr r3, r31
    bl fn_803F53E0
    lwz r0, 0x60c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_0000029C
    lwz r0, 0x54(r31)
    cmpwi r0, 0x1
    bne lbl_fn_803F4D98_00000278
    lwz r4, 0x4cc(r31)
    li r0, 0x0
    lwz r3, 0x554(r31)
    ori r4, r4, 0x1
    stw r4, 0x4cc(r31)
    clrrwi r3, r3, 1
    stw r3, 0x554(r31)
    stw r0, 0x5e8(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_00000278:
    lwz r4, 0x4cc(r31)
    li r0, 0x1
    lwz r3, 0x554(r31)
    clrrwi r4, r4, 1
    stw r4, 0x4cc(r31)
    ori r3, r3, 0x1
    stw r3, 0x554(r31)
    stw r0, 0x5e8(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_0000029C:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x1
    bne lbl_fn_803F4D98_00000410
    lfs f7, 0x32c(r31)
    lfs f0, lbl_80885FF0
    fcmpo cr0, f7, f0
    ble lbl_fn_803F4D98_00000374
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, 0x5d4(r31)
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_803F4D98_000002E8
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
    b lbl_fn_803F4D98_00000318
lbl_fn_803F4D98_000002E8:
    lwz r0, 0x5dc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_00000304
    lwz r0, 0x4cc(r31)
    ori r0, r0, 0x1
    stw r0, 0x4cc(r31)
    b lbl_fn_803F4D98_00000310
lbl_fn_803F4D98_00000304:
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
lbl_fn_803F4D98_00000310:
    li r0, 0x0
    stw r0, 0x5e8(r31)
lbl_fn_803F4D98_00000318:
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, 0x5d8(r31)
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_803F4D98_00000364
    lwz r0, 0x5e0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_00000354
    lwz r0, 0x554(r31)
    ori r0, r0, 0x1
    stw r0, 0x554(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_00000354:
    lwz r0, 0x554(r31)
    clrrwi r0, r0, 1
    stw r0, 0x554(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_00000364:
    lwz r0, 0x554(r31)
    clrrwi r0, r0, 1
    stw r0, 0x554(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_00000374:
    lfs f7, 0x328(r31)
    lfs f0, 0x5d4(r31)
    fcmpo cr0, f7, f0
    bge lbl_fn_803F4D98_000003B8
    lwz r0, 0x5dc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_000003A0
    lwz r0, 0x4cc(r31)
    ori r0, r0, 0x1
    stw r0, 0x4cc(r31)
    b lbl_fn_803F4D98_000003AC
lbl_fn_803F4D98_000003A0:
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
lbl_fn_803F4D98_000003AC:
    li r0, 0x0
    stw r0, 0x5e8(r31)
    b lbl_fn_803F4D98_000003C4
lbl_fn_803F4D98_000003B8:
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
lbl_fn_803F4D98_000003C4:
    lfs f7, 0x328(r31)
    lfs f0, 0x5d8(r31)
    fcmpo cr0, f7, f0
    bge lbl_fn_803F4D98_000003E4
    lwz r0, 0x554(r31)
    clrrwi r0, r0, 1
    stw r0, 0x554(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_000003E4:
    lwz r0, 0x5e0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_00000400
    lwz r0, 0x554(r31)
    ori r0, r0, 0x1
    stw r0, 0x554(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_00000400:
    lwz r0, 0x554(r31)
    clrrwi r0, r0, 1
    stw r0, 0x554(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_00000410:
    cmpwi r0, 0x3
    bne lbl_fn_803F4D98_000004B0
    lfs f7, 0x328(r31)
    lfs f0, 0x5d4(r31)
    fcmpo cr0, f7, f0
    bge lbl_fn_803F4D98_00000454
    lwz r0, 0x5dc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_00000444
    lwz r0, 0x4cc(r31)
    ori r0, r0, 0x1
    stw r0, 0x4cc(r31)
    b lbl_fn_803F4D98_00000468
lbl_fn_803F4D98_00000444:
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
    b lbl_fn_803F4D98_00000468
lbl_fn_803F4D98_00000454:
    lwz r3, 0x4cc(r31)
    li r0, 0x1
    stw r0, 0x5e8(r31)
    clrrwi r0, r3, 1
    stw r0, 0x4cc(r31)
lbl_fn_803F4D98_00000468:
    lfs f7, 0x328(r31)
    lfs f0, 0x5d8(r31)
    fcmpo cr0, f7, f0
    bge lbl_fn_803F4D98_00000488
    lwz r0, 0x554(r31)
    clrrwi r0, r0, 1
    stw r0, 0x554(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_00000488:
    lwz r0, 0x5e0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_000004A4
    lwz r0, 0x554(r31)
    ori r0, r0, 0x1
    stw r0, 0x554(r31)
    b lbl_fn_803F4D98_000004B0
lbl_fn_803F4D98_000004A4:
    lwz r0, 0x554(r31)
    clrrwi r0, r0, 1
    stw r0, 0x554(r31)
lbl_fn_803F4D98_000004B0:
    lwz r0, 0x5f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_00000624
    lwz r0, 0x5f4(r31)
    cmpwi r0, -0x1
    beq lbl_fn_803F4D98_00000624
    lwz r30, lbl_8087EFB4
    addi r3, r1, 0x8
    addi r4, r31, 0xf4
    bl fn_80094F98
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_800C122C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_803F4D98_00000624
    lwz r0, lbl_8087DF50
    cmpwi r0, 0x0
    beq lbl_fn_803F4D98_00000624
    psq_l f1, 0x5f8(r31), 0, 0
    addi r3, r1, 0x28
    lfs f2, 0x600(r31)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x604(r31)
    stfs f0, 0x34(r1)
    lwz r0, 0x5f4(r31)
    cmpwi r0, 0x0
    bge lbl_fn_803F4D98_0000052C
    li r30, 0x0
    b lbl_fn_803F4D98_00000538
lbl_fn_803F4D98_0000052C:
    mulli r0, r0, 0x30
    lwz r3, 0x130(r31)
    add r30, r3, r0
lbl_fn_803F4D98_00000538:
    psq_l f1, 0x0(r30), 0, 0
    addi r31, r1, 0x78
    psq_l f2, 0x8(r30), 0, 0
    mr r3, r31
    psq_l f3, 0x10(r30), 0, 0
    mr r4, r31
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    bl fn_805F8CA0
    mr r3, r31
    mr r4, r31
    bl fn_805F8C50
    addi r3, r1, 0x28
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_80885FF4
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_803F4D98_000005AC
    addi r3, r1, 0x28
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803F4D98_000005AC:
    addi r4, r1, 0x28
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x28
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_80885FF4
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_803F4D98_000005E4
    addi r3, r1, 0x28
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803F4D98_000005E4:
    lfs f0, 0x2c(r30)
    addi r3, r1, 0x28
    lfs f7, 0x1c(r30)
    addi r4, r1, 0x18
    lfs f8, 0xc(r30)
    stfs f8, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9990
    fneg f0, f1
    li r0, 0x1
    mr r3, r29
    addi r4, r1, 0x28
    stfs f0, 0x34(r1)
    stw r0, 0x120(r29)
    bl fn_800C2C20
lbl_fn_803F4D98_00000624:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_803F53E0(void)
{
    nofralloc
    stwu r1, -0x540(r1)
    mflr r0
    stw r0, 0x544(r1)
    addi r11, r1, 0x4e0
    stfd f31, 0x530(r1)
    psq_st f31, 0x538(r1), 0, 0
    stfd f30, 0x520(r1)
    psq_st f30, 0x528(r1), 0, 0
    stfd f29, 0x510(r1)
    psq_st f29, 0x518(r1), 0, 0
    stfd f28, 0x500(r1)
    psq_st f28, 0x508(r1), 0, 0
    stfd f27, 0x4f0(r1)
    psq_st f27, 0x4f8(r1), 0, 0
    stfd f26, 0x4e0(r1)
    psq_st f26, 0x4e8(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x6d0(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803F53E0_00000CF8
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803F53E0_00000CF8
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    bne lbl_fn_803F53E0_000006B8
    b lbl_fn_803F53E0_00000CF8
lbl_fn_803F53E0_000006B8:
    addi r3, r1, 0x2d4
    li r4, 0x0
    li r5, 0x1
    bl fn_8004B290
    lwz r3, lbl_8087F490
    lwz r27, lbl_8087F430
    lwz r0, 0x10fc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F53E0_00000CE0
    lwz r0, 0x868(r27)
    cmpwi r0, 0x4
    beq lbl_fn_803F53E0_000006F0
    cmpwi r0, 0x3
    bne lbl_fn_803F53E0_00000CE0
lbl_fn_803F53E0_000006F0:
    lwz r5, lbl_8087EFB4
    addi r30, r1, 0x98
    lfs f31, lbl_80885FF8
    addi r6, r1, 0x8
    lfs f10, 0x120(r5)
    mr r3, r30
    lfs f0, 0x114(r5)
    fmr f29, f31
    lfs f9, 0x11c(r5)
    mr r4, r30
    fsubs f2, f10, f0
    lfs f0, 0x110(r5)
    lfs f30, lbl_80885FFC
    fsubs f10, f9, f0
    lfs f9, 0x118(r5)
    lfs f0, 0x10c(r5)
    stfs f10, 0xc(r1)
    fmr f28, f30
    fsubs f0, f9, f0
    stfs f2, 0x10(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F98D0
    lfs f2, 0x74(r31)
    addi r5, r1, 0x8c
    psq_l f1, 0x6c(r31), 0, 0
    addi r3, r1, 0xa8
    lfs f9, lbl_80885FF0
    li r4, 0x79
    lfs f0, lbl_80885FFC
    stfs f9, 0x80(r1)
    stfs f9, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f0, 0x7c(r31)
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    stfs f2, 0x94(r1)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0xa8
    mr r5, r4
    bl fn_805F93C0
    lfs f11, 0x88(r1)
    mr r4, r30
    lfs f10, lbl_80886000
    addi r3, r1, 0x80
    lfs f9, 0x84(r1)
    lfs f0, 0x80(r1)
    fmuls f11, f11, f10
    fmuls f12, f9, f10
    lfs f9, 0x90(r1)
    fmuls f13, f0, f10
    lfs f10, 0x8c(r1)
    lfs f0, 0x94(r1)
    fadds f9, f9, f12
    fadds f10, f10, f13
    stfs f13, 0x44(r1)
    fadds f0, f0, f11
    stfs f12, 0x48(r1)
    stfs f11, 0x4c(r1)
    stfs f10, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_805F9990
    fneg f0, f1
    lfs f9, lbl_80886004
    fcmpo cr0, f0, f9
    bge lbl_fn_803F53E0_00000824
    lwz r0, 0xf8(r31)
    addi r3, r1, 0x2d4
    li r4, -0x1
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0xf8(r31)
    bl fn_8004B338
    b lbl_fn_803F53E0_00000CF8
lbl_fn_803F53E0_00000824:
    lwz r4, lbl_8087EFB4
    addi r30, r1, 0x5c
    addi r3, r1, 0x74
    lfs f10, 0x90(r1)
    psq_l f1, 0x10c(r4), 0, 0
    addi r6, r1, 0x68
    psq_st f1, 0x0(r3), 0, 0
    mr r5, r30
    lfs f2, 0x114(r4)
    addi r3, r1, 0x2c
    lfs f9, 0x78(r1)
    lfs f11, 0x94(r1)
    fsubs f10, f10, f9
    lfs f9, 0x84(r1)
    lfs f13, 0x8c(r1)
    fsubs f26, f11, f2
    lfs f12, 0x74(r1)
    fmuls f11, f9, f10
    fsubs f12, f13, f12
    lfs f10, 0x80(r1)
    lfs f9, 0x88(r1)
    lfs f13, 0xa0(r1)
    fmadds f27, f10, f12, f11
    lfs f12, 0x9c(r1)
    lfs f11, 0x98(r1)
    lfs f10, 0x78(r1)
    fmadds f26, f9, f26, f27
    lfs f9, 0x74(r1)
    stfs f2, 0x7c(r1)
    fdivs f0, f26, f0
    fmuls f13, f13, f0
    fmuls f12, f12, f0
    fmuls f0, f11, f0
    stfs f13, 0x40(r1)
    fsubs f2, f2, f13
    fsubs f10, f10, f12
    stfs f0, 0x38(r1)
    fsubs f0, f9, f0
    stfs f10, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f12, 0x3c(r1)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_800BFAC8
    lfs f12, lbl_80885FF0
    addi r4, r1, 0x2c
    lfs f11, lbl_80885FFC
    addi r3, r1, 0x14
    lfs f10, 0x70(r1)
    addi r5, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    lfs f9, 0x6c(r1)
    fadds f10, f10, f12
    lfs f0, 0x68(r1)
    fadds f9, f9, f11
    lfs f2, 0x34(r1)
    fadds f0, f0, f12
    psq_st f1, 0x0(r30), 0, 0
    lwz r4, lbl_8087EFB4
    stfs f2, 0x64(r1)
    stfs f12, 0x20(r1)
    stfs f11, 0x24(r1)
    stfs f12, 0x28(r1)
    stfs f0, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f10, 0x58(r1)
    bl fn_800BFAC8
    lfs f0, 0x64(r1)
    addi r3, r1, 0x14
    lfs f10, lbl_80885FF0
    addi r4, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x1c(r1)
    fcmpo cr0, f0, f10
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    blt lbl_fn_803F53E0_00000980
    lfs f9, lbl_80885FFC
    fcmpo cr0, f9, f0
    blt lbl_fn_803F53E0_00000980
    frsp f0, f2
    fcmpo cr0, f0, f10
    blt lbl_fn_803F53E0_00000980
    fcmpo cr0, f9, f0
    bge lbl_fn_803F53E0_0000099C
lbl_fn_803F53E0_00000980:
    lwz r0, 0xf8(r31)
    addi r3, r1, 0x2d4
    li r4, -0x1
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0xf8(r31)
    bl fn_8004B338
    b lbl_fn_803F53E0_00000CF8
lbl_fn_803F53E0_0000099C:
    lfs f9, 0x54(r1)
    lfs f0, 0x60(r1)
    lfs f11, lbl_80886008
    fsubs f0, f9, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f10
    ble lbl_fn_803F53E0_000009C8
    lwz r3, lbl_8087F490
    lfs f9, 0x1100(r3)
    fdivs f11, f9, f0
lbl_fn_803F53E0_000009C8:
    psq_l f1, 0x280(r27), 0, 0
    addi r30, r1, 0x2f4
    lfs f2, 0x288(r27)
    addi r29, r1, 0x2dc
    stfs f2, 0x2fc(r1)
    fmuls f31, f31, f11
    fmuls f30, f30, f11
    addi r28, r1, 0x2e8
    psq_st f1, 0x0(r30), 0, 0
    fmuls f29, f29, f11
    fmuls f28, f28, f11
    psq_l f1, 0x268(r27), 0, 0
    lfs f2, 0x270(r27)
    addi r3, r1, 0x2d4
    stfs f2, 0x2e4(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x274(r27), 0, 0
    lfs f2, 0x27c(r27)
    stfs f2, 0x2f0(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f28, 0x310(r1)
    stfs f29, 0x314(r1)
    stfs f31, 0x318(r1)
    stfs f30, 0x31c(r1)
    bl fn_8004B378
    li r0, 0x0
    stw r0, 0xd8(r1)
    addi r3, r1, 0xe0
    li r4, 0x0
    li r5, 0x0
    bl fn_8004B290
    lfs f2, 0x2e4(r1)
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r29), 0, 0
    addi r5, r1, 0xf4
    psq_st f1, 0x0(r3), 0, 0
    addi r9, r1, 0x100
    addi r3, r1, 0x32c
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r1, 0x35c
    psq_l f1, 0x0(r30), 0, 0
    addi r7, r1, 0x300
    stfs f2, 0xf0(r1)
    addi r8, r1, 0x10c
    lfs f2, 0x2f0(r1)
    addi r6, r1, 0x138
    stfs f2, 0xfc(r1)
    addi r5, r1, 0x168
    lfs f2, 0x2fc(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x108(r1)
    lfs f2, 0x308(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x114(r1)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, 0x2d4(r1)
    psq_st f2, 0x8(r6), 0, 0
    lwz r0, 0x2d8(r1)
    psq_st f3, 0x10(r6), 0, 0
    lfs f31, 0x30c(r1)
    psq_st f4, 0x18(r6), 0, 0
    lfs f30, 0x310(r1)
    psq_st f5, 0x20(r6), 0, 0
    lfs f29, 0x314(r1)
    psq_st f6, 0x28(r6), 0, 0
    lfs f28, 0x318(r1)
    lfs f13, 0x31c(r1)
    lfs f12, 0x320(r1)
    lfs f11, 0x324(r1)
    lfs f10, 0x328(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f7, 0x30(r4), 0, 0
    psq_l f8, 0x38(r4), 0, 0
    lfs f9, 0x39c(r1)
    lfs f0, 0x3a0(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    stfs f31, 0x118(r1)
    stfs f30, 0x11c(r1)
    stfs f29, 0x120(r1)
    stfs f28, 0x124(r1)
    stfs f13, 0x128(r1)
    stfs f12, 0x12c(r1)
    stfs f11, 0x130(r1)
    stfs f10, 0x134(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f7, 0x30(r5), 0, 0
    psq_st f8, 0x38(r5), 0, 0
    stfs f9, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
    addi r3, r1, 0x3a4
    addi r7, r1, 0x1e0
    addi r6, r1, 0x3d4
    addi r8, r1, 0x1b0
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r7, 0x94
    psq_l f2, 0x8(r3), 0, 0
    addi r5, r6, 0x94
    psq_st f1, 0x0(r8), 0, 0
    addi r0, r7, 0xf4
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x3c(r6), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    lfs f2, 0x418(r1)
    psq_st f1, 0x3c(r7), 0, 0
    psq_l f1, 0x4c(r6), 0, 0
    stfs f2, 0x224(r1)
    lfs f2, 0x428(r1)
    psq_st f1, 0x4c(r7), 0, 0
    psq_l f1, 0x5c(r6), 0, 0
    stfs f2, 0x234(r1)
    lfs f2, 0x438(r1)
    psq_st f1, 0x5c(r7), 0, 0
    psq_l f1, 0x6c(r6), 0, 0
    stfs f2, 0x244(r1)
    lfs f2, 0x448(r1)
    psq_st f1, 0x6c(r7), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    stfs f2, 0x254(r1)
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x7c(r6), 0, 0
    lfs f2, 0x458(r1)
    psq_st f3, 0x10(r8), 0, 0
    psq_l f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_st f6, 0x28(r8), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x7c(r7), 0, 0
    lwz r3, 0x404(r1)
    stfs f2, 0x264(r1)
    lfs f13, 0x408(r1)
    lfs f12, 0x40c(r1)
    lfs f11, 0x41c(r1)
    lfs f10, 0x42c(r1)
    lfs f9, 0x43c(r1)
    lfs f0, 0x44c(r1)
    psq_l f1, 0x88(r6), 0, 0
    lfs f2, 0x464(r1)
    psq_st f3, 0x10(r7), 0, 0
    psq_st f4, 0x18(r7), 0, 0
    psq_st f5, 0x20(r7), 0, 0
    psq_st f6, 0x28(r7), 0, 0
    stw r3, 0x210(r1)
    stfs f13, 0x214(r1)
    stfs f12, 0x218(r1)
    stfs f11, 0x228(r1)
    stfs f10, 0x238(r1)
    stfs f9, 0x248(r1)
    stfs f0, 0x258(r1)
    psq_st f1, 0x88(r7), 0, 0
    stfs f2, 0x270(r1)
lbl_fn_803F53E0_00000C8C:
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r4)
    addi r4, r4, 0x10
    cmplw r4, r0
    blt lbl_fn_803F53E0_00000C8C
    addi r3, r31, 0x6a0
    li r0, 0x3
    stw r3, 0xdc(r1)
    addi r3, r31, 0xf4
    addi r4, r1, 0xd8
    stw r0, 0xd8(r1)
    bl fn_80095F10
    addi r3, r1, 0xe0
    li r4, -0x1
    bl fn_8004B338
    b lbl_fn_803F53E0_00000CEC
lbl_fn_803F53E0_00000CE0:
    lwz r0, 0xf8(r31)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0xf8(r31)
lbl_fn_803F53E0_00000CEC:
    addi r3, r1, 0x2d4
    li r4, -0x1
    bl fn_8004B338
lbl_fn_803F53E0_00000CF8:
    addi r11, r1, 0x4e0
    psq_l f31, 0x538(r1), 0, 0
    lfd f31, 0x530(r1)
    psq_l f30, 0x528(r1), 0, 0
    lfd f30, 0x520(r1)
    psq_l f29, 0x518(r1), 0, 0
    lfd f29, 0x510(r1)
    psq_l f28, 0x508(r1), 0, 0
    lfd f28, 0x500(r1)
    psq_l f27, 0x4f8(r1), 0, 0
    lfd f27, 0x4f0(r1)
    psq_l f26, 0x4e8(r1), 0, 0
    lfd f26, 0x4e0(r1)
    bl _restgpr_27
    lwz r0, 0x544(r1)
    mtlr r0
    addi r1, r1, 0x540
    blr
}

asm void fn_803F5AD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803F5AD8_00000D9C
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F5AD8_00000D9C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_803F5AD8_00000D9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F5B48(void)
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
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_803F5B48_00000DE8
    li r3, 0x1
    b lbl_fn_803F5B48_00000E74
lbl_fn_803F5B48_00000DE8:
    addi r3, r28, 0x4c4
    bl fn_800580BC
    cmpwi r3, 0x0
    bne lbl_fn_803F5B48_00000E08
    addi r3, r28, 0x54c
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_803F5B48_00000E10
lbl_fn_803F5B48_00000E08:
    li r3, 0x1
    b lbl_fn_803F5B48_00000E74
lbl_fn_803F5B48_00000E10:
    addi r3, r28, 0x6a0
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_803F5B48_00000E28
    li r3, 0x1
    b lbl_fn_803F5B48_00000E74
lbl_fn_803F5B48_00000E28:
    addi r31, r28, 0x61c
    li r29, 0x0
lbl_fn_803F5B48_00000E30:
    mr r30, r31
    li r28, 0x0
lbl_fn_803F5B48_00000E38:
    mr r3, r30
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_803F5B48_00000E50
    li r3, 0x1
    b lbl_fn_803F5B48_00000E74
lbl_fn_803F5B48_00000E50:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0x3
    blt lbl_fn_803F5B48_00000E38
    addi r29, r29, 0x1
    addi r31, r31, 0x30
    cmpwi r29, 0x3
    blt lbl_fn_803F5B48_00000E30
    li r3, 0x0
lbl_fn_803F5B48_00000E74:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F5C2C(void)
{
    nofralloc
    stwu r1, -0x760(r1)
    mflr r0
    stw r0, 0x764(r1)
    stmw r27, 0x74c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r29, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r29, lbl_807522F4@ha
    li r30, 0x1
    addi r29, r29, lbl_807522F4@l
lbl_fn_803F5C2C_00000F40:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803F5C2C_0000132C
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_00000F94
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r31
    addi r4, r31, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_00000F94:
    mr r3, r28
    addi r4, r29, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_00000FDC
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r31, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_00000FDC:
    mr r3, r28
    addi r4, r29, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_0000101C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x5d4(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x4c4
    bl fn_80058078
    stw r30, 0x5dc(r31)
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_0000101C:
    mr r3, r28
    addi r4, r29, 0x1f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_0000105C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x5d8(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x54c
    bl fn_80058078
    stw r30, 0x5e0(r31)
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_0000105C:
    addi r3, r29, 0x2f
    bl strlen
    mr r5, r3
    mr r3, r28
    addi r4, r29, 0x2f
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_00001118
    addi r3, r29, 0x2f
    bl strlen
    add r28, r28, r3
    addi r4, r29, 0x3b
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_000010C8
    mr r28, r31
    li r27, 0x0
lbl_fn_803F5C2C_000010A4:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    addi r27, r27, 0x1
    stw r3, 0x610(r28)
    cmpwi r27, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_803F5C2C_000010A4
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_000010C8:
    mr r3, r28
    addi r4, r29, 0x43
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_0000132C
    addi r28, r31, 0x61c
    li r27, 0x0
lbl_fn_803F5C2C_000010E4:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803F5C2C_00001104
    mr r3, r28
    addi r4, r1, 0x118
    bl fn_8023780C
lbl_fn_803F5C2C_00001104:
    addi r27, r27, 0x1
    addi r28, r28, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_803F5C2C_000010E4
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_00001118:
    addi r3, r29, 0x48
    bl strlen
    mr r5, r3
    mr r3, r28
    addi r4, r29, 0x48
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_000011D4
    addi r3, r29, 0x48
    bl strlen
    add r28, r28, r3
    addi r4, r29, 0x3b
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_00001184
    mr r28, r31
    li r27, 0x0
lbl_fn_803F5C2C_00001160:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    addi r27, r27, 0x1
    stw r3, 0x670(r28)
    cmpwi r27, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_803F5C2C_00001160
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_00001184:
    mr r3, r28
    addi r4, r29, 0x43
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_0000132C
    addi r28, r31, 0x67c
    li r27, 0x0
lbl_fn_803F5C2C_000011A0:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803F5C2C_000011C0
    mr r3, r28
    addi r4, r1, 0x118
    bl fn_8023780C
lbl_fn_803F5C2C_000011C0:
    addi r27, r27, 0x1
    addi r28, r28, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_803F5C2C_000011A0
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_000011D4:
    addi r3, r29, 0x57
    bl strlen
    mr r5, r3
    mr r3, r28
    addi r4, r29, 0x57
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_00001290
    addi r3, r29, 0x57
    bl strlen
    add r28, r28, r3
    addi r4, r29, 0x3b
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_00001240
    mr r28, r31
    li r27, 0x0
lbl_fn_803F5C2C_0000121C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    addi r27, r27, 0x1
    stw r3, 0x640(r28)
    cmpwi r27, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_803F5C2C_0000121C
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_00001240:
    mr r3, r28
    addi r4, r29, 0x43
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_0000132C
    addi r28, r31, 0x64c
    li r27, 0x0
lbl_fn_803F5C2C_0000125C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803F5C2C_0000127C
    mr r3, r28
    addi r4, r1, 0x118
    bl fn_8023780C
lbl_fn_803F5C2C_0000127C:
    addi r27, r27, 0x1
    addi r28, r28, 0xc
    cmpwi r27, 0x3
    blt lbl_fn_803F5C2C_0000125C
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_00001290:
    mr r3, r28
    addi r4, r29, 0x62
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_000012B8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC12C
    stw r3, 0x608(r31)
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_000012B8:
    mr r3, r28
    addi r4, r29, 0x71
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_000012E8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x6a0
    bl fn_800D5908
    stw r30, 0x6d0(r31)
    b lbl_fn_803F5C2C_0000132C
lbl_fn_803F5C2C_000012E8:
    mr r3, r28
    addi r4, r29, 0x80
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_0000132C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    addi r0, r31, 0x6d4
    mr r28, r3
    cmplw r3, r0
    beq lbl_fn_803F5C2C_0000132C
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r31, 0x6d4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803F5C2C_0000132C:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803F5C2C_00000F40
    lmw r27, 0x74c(r1)
    lwz r0, 0x764(r1)
    mtlr r0
    addi r1, r1, 0x760
    blr
}

asm void fn_803F60E8(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_807522F4@ha
    li r31, 0x1
    addi r30, r30, lbl_807522F4@l
lbl_fn_803F60E8_00001408:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803F60E8_000014B8
    addi r4, r30, 0x92
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F60E8_00001494
    stw r31, 0x5f0(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x5f8(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x5fc(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x600(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x604(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r28, 0xf4
    li r5, 0x0
    bl fn_80092814
    stw r3, 0x5f4(r28)
    b lbl_fn_803F60E8_000014B8
lbl_fn_803F60E8_00001494:
    mr r3, r29
    addi r4, r30, 0xa0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F60E8_000014B8
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x5ec(r28)
lbl_fn_803F60E8_000014B8:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803F60E8_00001408
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_803F6280(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_803F6280_00001514
    li r3, 0x0
    b lbl_fn_803F6280_00001698
lbl_fn_803F6280_00001514:
    lwz r4, 0x0(r4)
    cmpwi r4, 0x1
    beq lbl_fn_803F6280_00001534
    cmpwi r4, 0x3
    beq lbl_fn_803F6280_0000159C
    cmpwi r4, 0x4
    beq lbl_fn_803F6280_00001618
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_00001534:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803F6280_0000155C
    lfs f1, lbl_80885FFC
    li r4, 0x0
    lfs f2, lbl_80885FF0
    li r5, 0x0
    li r6, 0x1
    bl fn_803F6448
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_0000155C:
    cmpwi r0, 0x4
    bne lbl_fn_803F6280_00001580
    lfs f1, lbl_80885FFC
    li r4, 0x2
    lfs f2, lbl_80885FF0
    li r5, 0x0
    li r6, 0x0
    bl fn_803F6448
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_00001580:
    lfs f1, lbl_80885FFC
    li r4, 0x1
    lfs f2, lbl_80885FF0
    li r5, 0x0
    li r6, 0x0
    bl fn_803F6448
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_0000159C:
    lwz r0, 0x608(r3)
    lwz r5, 0x54(r3)
    subf r0, r0, r4
    cntlzw r0, r0
    cmpwi r5, 0x3
    srwi r0, r0, 5
    stw r0, 0x60c(r3)
    bne lbl_fn_803F6280_000015D8
    lfs f1, lbl_80885FFC
    li r4, 0x1
    lfs f2, lbl_80885FF0
    li r5, 0x1
    li r6, 0x1
    bl fn_803F6448
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_000015D8:
    cmpwi r5, 0x4
    bne lbl_fn_803F6280_000015FC
    lfs f1, lbl_80885FFC
    li r4, 0x2
    lfs f2, lbl_80885FF0
    li r5, 0x1
    li r6, 0x0
    bl fn_803F6448
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_000015FC:
    lfs f1, lbl_80885FFC
    li r4, 0x0
    lfs f2, lbl_80885FF0
    li r5, 0x1
    li r6, 0x0
    bl fn_803F6448
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_00001618:
    lwz r0, 0x608(r3)
    lwz r5, 0x54(r3)
    subf r0, r0, r4
    cntlzw r0, r0
    cmpwi r5, 0x3
    srwi r0, r0, 5
    stw r0, 0x60c(r3)
    bne lbl_fn_803F6280_00001654
    lfs f1, lbl_80885FFC
    li r4, 0x1
    lfs f2, lbl_80885FF0
    li r5, 0x2
    li r6, 0x0
    bl fn_803F6448
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_00001654:
    cmpwi r5, 0x4
    bne lbl_fn_803F6280_00001678
    lfs f1, lbl_80885FFC
    li r4, 0x2
    lfs f2, lbl_80885FF0
    li r5, 0x2
    li r6, 0x1
    bl fn_803F6448
    b lbl_fn_803F6280_00001690
lbl_fn_803F6280_00001678:
    lfs f1, lbl_80885FFC
    li r4, 0x0
    lfs f2, lbl_80885FF0
    li r5, 0x2
    li r6, 0x0
    bl fn_803F6448
lbl_fn_803F6280_00001690:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_803F6280_00001698:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F6448(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    mulli r7, r4, 0x30
    stw r0, 0x74(r1)
    slwi r0, r5, 2
    stfd f31, 0x60(r1)
    add r7, r3, r7
    psq_st f31, 0x68(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    fmr f30, f1
    stw r31, 0x4c(r1)
    addi r31, r7, 0x610
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    lwzx r0, r31, r0
    cmpwi r0, -0x1
    beq lbl_fn_803F6448_00001740
    lfs f1, lbl_80885FF0
    mr r5, r0
    lfs f2, lbl_8088600C
    li r4, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    li r0, 0x1
    stfs f31, 0x328(r28)
    stfs f30, 0x32c(r28)
    stw r0, 0x5e4(r28)
    b lbl_fn_803F6448_00001A28
lbl_fn_803F6448_00001740:
    cmpw r4, r5
    bne lbl_fn_803F6448_0000192C
    cmpwi r4, 0x0
    beq lbl_fn_803F6448_00001764
    cmpwi r4, 0x1
    beq lbl_fn_803F6448_000017F8
    cmpwi r4, 0x2
    beq lbl_fn_803F6448_00001898
    b lbl_fn_803F6448_00001A28
lbl_fn_803F6448_00001764:
    lwz r5, 0x618(r3)
    cmpwi r5, -0x1
    bne lbl_fn_803F6448_00001774
    lwz r5, 0x614(r3)
lbl_fn_803F6448_00001774:
    cmpwi r5, -0x1
    beq lbl_fn_803F6448_000017EC
    lfs f1, lbl_80885FFC
    li r4, 0x0
    lfs f2, lbl_8088600C
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    lfs f0, lbl_80885FF0
    mr r3, r28
    stfs f0, 0x328(r28)
    stfs f0, 0x32c(r28)
    lwz r12, 0x0(r28)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F6448_000017E4
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r28
    bl fn_803ED5D0
lbl_fn_803F6448_000017E4:
    li r0, 0x0
    stw r0, 0x5e4(r28)
lbl_fn_803F6448_000017EC:
    li r0, 0x0
    stw r0, 0x5e8(r28)
    b lbl_fn_803F6448_00001A28
lbl_fn_803F6448_000017F8:
    lwz r5, 0x614(r3)
    cmpwi r5, -0x1
    bne lbl_fn_803F6448_00001808
    lwz r5, 0x674(r3)
lbl_fn_803F6448_00001808:
    cmpwi r5, -0x1
    beq lbl_fn_803F6448_0000188C
    lfs f1, lbl_80885FFC
    li r4, 0x0
    lfs f2, lbl_8088600C
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    addi r3, r28, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885FFC
    mr r3, r28
    stfs f1, 0x328(r28)
    stfs f0, 0x32c(r28)
    lwz r12, 0x0(r28)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F6448_00001884
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r28
    bl fn_803ED5D0
lbl_fn_803F6448_00001884:
    li r0, 0x0
    stw r0, 0x5e4(r28)
lbl_fn_803F6448_0000188C:
    li r0, 0x1
    stw r0, 0x5e8(r28)
    b lbl_fn_803F6448_00001A28
lbl_fn_803F6448_00001898:
    lwz r5, 0x618(r3)
    cmpwi r5, -0x1
    beq lbl_fn_803F6448_00001920
    lfs f1, lbl_80885FFC
    li r4, 0x0
    lfs f2, lbl_8088600C
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    addi r3, r28, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885FFC
    mr r3, r28
    stfs f1, 0x328(r28)
    stfs f0, 0x32c(r28)
    lwz r12, 0x0(r28)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F6448_00001918
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r28
    bl fn_803ED5D0
lbl_fn_803F6448_00001918:
    li r0, 0x0
    stw r0, 0x5e4(r28)
lbl_fn_803F6448_00001920:
    li r0, 0x0
    stw r0, 0x5e8(r28)
    b lbl_fn_803F6448_00001A28
lbl_fn_803F6448_0000192C:
    cmpwi r4, 0x1
    bne lbl_fn_803F6448_00001998
    cmpwi r5, 0x0
    bne lbl_fn_803F6448_00001998
    lwz r5, 0x614(r3)
    cmpwi r5, -0x1
    bne lbl_fn_803F6448_0000194C
    lwz r5, 0x618(r3)
lbl_fn_803F6448_0000194C:
    cmpwi r5, -0x1
    beq lbl_fn_803F6448_00001A28
    lfs f1, lbl_80885FF0
    li r4, 0x0
    lfs f2, lbl_8088600C
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    addi r3, r28, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885FF8
    li r0, 0x1
    stfs f1, 0x328(r28)
    stfs f0, 0x32c(r28)
    stw r0, 0x5e4(r28)
    b lbl_fn_803F6448_00001A28
lbl_fn_803F6448_00001998:
    cmpwi r4, 0x2
    bne lbl_fn_803F6448_000019F8
    cmpwi r5, 0x0
    bne lbl_fn_803F6448_000019F8
    lwz r5, 0x618(r3)
    cmpwi r5, -0x1
    beq lbl_fn_803F6448_00001A28
    lfs f1, lbl_80885FF0
    li r4, 0x0
    lfs f2, lbl_8088600C
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xf4
    bl fn_80097C08
    addi r3, r28, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885FF8
    li r0, 0x1
    stfs f1, 0x328(r28)
    stfs f0, 0x32c(r28)
    stw r0, 0x5e4(r28)
    b lbl_fn_803F6448_00001A28
lbl_fn_803F6448_000019F8:
    cmpwi r4, 0x0
    bne lbl_fn_803F6448_00001A28
    cmpwi r5, 0x1
    bne lbl_fn_803F6448_00001A28
    li r4, 0x0
    addi r3, r3, 0xf4
    bl fn_80097D7C
    lfs f0, lbl_80885FFC
    li r0, 0x1
    stfs f1, 0x328(r28)
    stfs f0, 0x32c(r28)
    stw r0, 0x5e4(r28)
lbl_fn_803F6448_00001A28:
    cmpwi r30, 0x0
    bne lbl_fn_803F6448_00001A44
    cmpw r29, r30
    bne lbl_fn_803F6448_00001A44
    lwz r3, lbl_8087F3C0
    li r0, 0x1
    stw r0, 0xb8(r3)
lbl_fn_803F6448_00001A44:
    lwz r3, lbl_8087F3C0
    mr r4, r28
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r28
    li r4, 0x1
    bl fn_80232B7C
    lfs f0, lbl_80885FF0
    mulli r0, r30, 0xc
    lfs f1, lbl_80885FFC
    li r12, -0x1
    stfs f0, 0x1c(r1)
    li r11, 0x1
    add r3, r31, r0
    stfs f0, 0x20(r1)
    addi r4, r3, 0xc
    addi r5, r28, 0xf4
    addi r7, r1, 0x10
    stfs f0, 0x24(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x10(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r12, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    cmpwi r30, 0x0
    bne lbl_fn_803F6448_00001AEC
    cmpw r29, r30
    bne lbl_fn_803F6448_00001AEC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_803F6448_00001AEC:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
