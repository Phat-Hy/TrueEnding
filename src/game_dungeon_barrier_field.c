#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8005B3CC(void);
extern void fn_8005B6E8(void);
extern void fn_8005B9CC(void);
extern void fn_800616C0(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008B130(void);
extern void fn_8008CD60(void);
extern void fn_800902C0(void);
extern void fn_80092A4C(void);
extern void fn_800954DC(void);
extern void fn_80097E80(void);
extern void fn_800BFAC8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D59B8(void);
extern void fn_803EE3F0(void);
extern void fn_803EE41C(void);
extern void fn_803EEE44(void);
extern void fn_803EF608(void);
extern void fn_803EF64C(void);
extern void fn_803EF780(void);
extern void fn_803F06B0(void);
extern void fn_803F0764(void);
extern void fn_803F10AC(void);
extern void fn_803F11F8(void);
extern void fn_803F1310(void);
extern void fn_803F1A38(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473EFC(void);
extern void fn_80473F50(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_8078C8D0[];
extern u8 lbl_80751DD0[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8078C9D0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885F54;
extern u32 lbl_80885F58;
extern u32 lbl_80885F5C;
extern u32 lbl_80885F60;
extern u32 lbl_80885F64;
extern u32 lbl_80885F68;
extern u32 lbl_80885F6C;
extern u32 lbl_80885F70;
extern u32 lbl_80885F74;
extern u32 lbl_80885F78;
extern u32 lbl_80885F7C;
extern u32 lbl_80885F80;
extern u32 lbl_80885F84;

/* Function declarations */
void fn_803EC568(void);
void fn_803EC69C(void);
void fn_803EC758(void);
void fn_803EC7A0(void);
void fn_803EC91C(void);
void fn_803ECB7C(void);
void fn_803ECB84(void);
void fn_803ECBCC(void);
void fn_803ECBD0(void);
void fn_803ECBD4(void);
void fn_803ED0D4(void);
void fn_803ED5D0(void);
void fn_803ED610(void);
void fn_803ED774(void);
void fn_803ED8D8(void);
void fn_803ED8F4(void);
void fn_803ED92C(void);
void fn_803EDAF0(void);
void fn_803EDB0C(void);
void fn_803EDB18(void);
void fn_803EDCF4(void);
void fn_803EDE34(void);

asm void fn_803EC568(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    bl fn_800D1D3C
    lis r3, 0x1062
    li r31, 0x0
    addi r0, r3, 0x4dd3
    addi r30, r27, 0x60
    mulhw r0, r0, r28
    lis r3, lbl_8078C9D0@ha
    stw r28, 0x48(r27)
    addi r3, r3, lbl_8078C9D0@l
    stw r3, 0x0(r27)
    mr r3, r30
    srawi r0, r0, 6
    stw r29, 0x4c(r27)
    srwi r4, r0, 31
    add r0, r0, r4
    stw r0, 0x50(r27)
    stw r31, 0x54(r27)
    stw r31, 0x58(r27)
    stw r31, 0x5c(r27)
    bl fn_80473E74
    lfs f1, lbl_80885F54
    lis r3, lbl_8078FBB0@ha
    lfs f0, lbl_80885F58
    addi r3, r3, lbl_8078FBB0@l
    li r0, 0x1
    stw r3, 0x0(r30)
    addi r3, r27, 0xb0
    stw r31, 0x68(r27)
    stfs f1, 0x6c(r27)
    stfs f1, 0x70(r27)
    stfs f1, 0x74(r27)
    stfs f1, 0x78(r27)
    stfs f1, 0x7c(r27)
    stfs f1, 0x80(r27)
    stfs f1, 0x84(r27)
    stfs f1, 0x88(r27)
    stfs f1, 0x8c(r27)
    stfs f0, 0x90(r27)
    stfs f0, 0x94(r27)
    stfs f0, 0x98(r27)
    stw r0, 0x9c(r27)
    stw r31, 0xa0(r27)
    stw r31, 0xa4(r27)
    stw r31, 0xa8(r27)
    stw r31, 0xac(r27)
    bl fn_803EF608
    lwz r3, 0x48(r27)
    li r0, -0x1
    stw r31, 0xe4(r27)
    cmpwi r3, 0x3e8
    stw r0, 0xe8(r27)
    stw r0, 0xec(r27)
    stw r31, 0xf0(r27)
    bge lbl_fn_803EC568_00000104
    mulli r0, r3, 0x3e8
    stw r3, 0x50(r27)
    stw r0, 0x48(r27)
lbl_fn_803EC568_00000104:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_803EC568_00000118
    mr r4, r27
    bl fn_803EE3F0
lbl_fn_803EC568_00000118:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EC69C(void)
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
    beq lbl_fn_803EC69C_000001D4
    lis r4, lbl_8078C9D0@ha
    addi r4, r4, lbl_8078C9D0@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_803EC69C_00000178
    mr r4, r30
    bl fn_803EE41C
lbl_fn_803EC69C_00000178:
    addic. r0, r30, 0xf0
    beq lbl_fn_803EC69C_0000019C
    lwz r4, 0xf0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803EC69C_0000019C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803EC69C_0000019C
    bl fn_800897D8
lbl_fn_803EC69C_0000019C:
    addi r3, r30, 0xb0
    li r4, -0x1
    bl fn_803EF64C
    addic. r3, r30, 0x60
    beq lbl_fn_803EC69C_000001B8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803EC69C_000001B8:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803EC69C_000001D4
    mr r3, r30
    bl dtor_80084684
lbl_fn_803EC69C_000001D4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EC758(void)
{
    nofralloc
    lis r5, 0x1062
    lwz r9, 0x48(r3)
    addi r0, r5, 0x4dd3
    lwz r7, 0x4c(r3)
    mulhw r0, r0, r9
    lis r5, lbl_80751DD0@ha
    mr r3, r4
    addi r4, r5, lbl_80751DD0@l
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    b sprintf
}

asm void fn_803EC7A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r30, r5
    mr r28, r3
    mr r29, r4
    mr r3, r30
    bl fn_8005B9CC
    lis r4, lbl_80751DD0@ha
    mr r26, r3
    li r31, 0x1
    addi r27, r4, lbl_80751DD0@l
    b lbl_fn_803EC7A0_0000036C
lbl_fn_803EC7A0_00000270:
    mr r3, r26
    addi r4, r27, 0x12
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EC7A0_0000028C
    stw r31, 0xa4(r28)
    b lbl_fn_803EC7A0_00000360
lbl_fn_803EC7A0_0000028C:
    mr r3, r26
    addi r4, r27, 0x1a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EC7A0_000002B0
    lwz r0, 0x4(r29)
    ori r0, r0, 0x1800
    stw r0, 0x4(r29)
    b lbl_fn_803EC7A0_00000360
lbl_fn_803EC7A0_000002B0:
    mr r3, r26
    addi r4, r27, 0x22
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EC7A0_000002D4
    lwz r0, 0x4(r29)
    ori r0, r0, 0x4
    stw r0, 0x4(r29)
    b lbl_fn_803EC7A0_00000360
lbl_fn_803EC7A0_000002D4:
    mr r3, r26
    addi r4, r27, 0x30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EC7A0_000002F8
    lwz r0, 0x4(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x4(r29)
    b lbl_fn_803EC7A0_00000360
lbl_fn_803EC7A0_000002F8:
    mr r3, r26
    addi r4, r27, 0x42
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EC7A0_0000031C
    lwz r0, 0x4(r29)
    ori r0, r0, 0x8
    stw r0, 0x4(r29)
    b lbl_fn_803EC7A0_00000360
lbl_fn_803EC7A0_0000031C:
    mr r3, r26
    addi r4, r27, 0x52
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EC7A0_00000340
    lwz r0, 0x4(r29)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x4(r29)
    b lbl_fn_803EC7A0_00000360
lbl_fn_803EC7A0_00000340:
    mr r3, r26
    addi r4, r27, 0x66
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EC7A0_00000360
    lwz r0, 0x4(r29)
    oris r0, r0, 0x10
    stw r0, 0x4(r29)
lbl_fn_803EC7A0_00000360:
    mr r3, r30
    bl fn_8005B9CC
    mr r26, r3
lbl_fn_803EC7A0_0000036C:
    cmpwi r26, 0x0
    beq lbl_fn_803EC7A0_00000388
    mr r4, r26
    addi r3, r27, 0x6f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803EC7A0_00000270
lbl_fn_803EC7A0_00000388:
    lwz r0, 0xa4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803EC7A0_000003A0
    lwz r0, 0x4(r29)
    ori r0, r0, 0x1400
    stw r0, 0x4(r29)
lbl_fn_803EC7A0_000003A0:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EC91C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    li r29, 0x0
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EC91C_000003F4
    cmpwi r0, 0x1
    beq lbl_fn_803EC91C_00000464
    cmpwi r0, 0x2
    beq lbl_fn_803EC91C_00000520
    b lbl_fn_803EC91C_000005F4
lbl_fn_803EC91C_000003F4:
    lwz r8, 0x48(r3)
    lis r3, 0x1062
    addi r0, r3, 0x4dd3
    lis r4, lbl_80751DD0@ha
    mulhw r0, r0, r8
    addi r3, r1, 0x8
    addi r4, r4, lbl_80751DD0@l
    addi r4, r4, 0x70
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    li r0, 0x1
    stw r0, 0x68(r31)
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    lwz r12, 0x60(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r29, 0x1
    b lbl_fn_803EC91C_000005F4
lbl_fn_803EC91C_00000464:
    addi r3, r3, 0x60
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803EC91C_00000478
    li r29, 0x1
lbl_fn_803EC91C_00000478:
    cmpwi r29, 0x0
    bne lbl_fn_803EC91C_00000520
    addi r3, r31, 0x60
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_803EC91C_00000518
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x60
    bl fn_80470580
    mr r4, r3
    mr r5, r30
    addi r3, r31, 0xb0
    bl fn_803EF780
    lwz r0, 0x50(r31)
    cmplwi r0, 0x3f
    bgt lbl_fn_803EC91C_000004F8
    lis r3, jumptable_8078C8D0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078C8D0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_803F1310
    stw r3, 0xe4(r31)
lbl_fn_803EC91C_000004F8:
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803EC91C_0000050C
    li r4, 0x1
    bl fn_800D246C
lbl_fn_803EC91C_0000050C:
    li r0, 0x2
    stw r0, 0x68(r31)
    b lbl_fn_803EC91C_00000520
lbl_fn_803EC91C_00000518:
    li r0, 0x3
    stw r0, 0x68(r31)
lbl_fn_803EC91C_00000520:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803EC91C_00000540
    li r29, 0x1
lbl_fn_803EC91C_00000540:
    addi r3, r31, 0xb0
    bl fn_803F06B0
    cmpwi r3, 0x0
    beq lbl_fn_803EC91C_00000554
    li r29, 0x1
lbl_fn_803EC91C_00000554:
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803EC91C_00000574
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803EC91C_00000574
    li r29, 0x1
lbl_fn_803EC91C_00000574:
    cmpwi r29, 0x0
    bne lbl_fn_803EC91C_000005F4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    li r0, 0x3
    stw r0, 0x68(r31)
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_803EC91C_000005E0
    lwz r4, lbl_8087F0A8
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803EC91C_000005E0
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    bne lbl_fn_803EC91C_000005E0
    lwz r4, 0x50(r31)
    bl fn_803EEE44
    lwz r12, 0x0(r31)
    mr r4, r3
    mr r3, r31
    lwz r12, 0x6c(r12)
    mtctr r12
    bctrl
lbl_fn_803EC91C_000005E0:
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803EC91C_000005F4
    li r4, 0x0
    bl fn_800D246C
lbl_fn_803EC91C_000005F4:
    lwz r31, 0x11c(r1)
    mr r3, r29
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803ECB7C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_803ECB84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xb0
    bl fn_803F10AC
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803ECB84_00000650
    li r4, 0x1
    bl fn_803F1A38
lbl_fn_803ECB84_00000650:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803ECBCC(void)
{
    nofralloc
    blr
}

asm void fn_803ECBD0(void)
{
    nofralloc
    blr
}

asm void fn_803ECBD4(void)
{
    nofralloc
    stwu r1, -0x380(r1)
    mflr r0
    stw r0, 0x384(r1)
    stfd f31, 0x370(r1)
    psq_st f31, 0x378(r1), 0, 0
    stfd f30, 0x360(r1)
    psq_st f30, 0x368(r1), 0, 0
    stw r31, 0x35c(r1)
    stw r30, 0x358(r1)
    mr r30, r5
    stw r29, 0x354(r1)
    mr r29, r4
    stw r28, 0x350(r1)
    mr r28, r3
    mr r3, r29
    bl fn_80092A4C
    lis r4, lbl_807C7060@ha
    lfs f7, lbl_80885F54
    addi r4, r4, lbl_807C7060@l
    lfs f0, lbl_80885F58
    addi r3, r1, 0x320
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    addi r31, r1, 0x2f0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    stfs f7, 0x31c(r1)
    stfs f7, 0x314(r1)
    stfs f7, 0x310(r1)
    stfs f7, 0x30c(r1)
    stfs f7, 0x308(r1)
    stfs f7, 0x300(r1)
    stfs f7, 0x2fc(r1)
    stfs f7, 0x2f8(r1)
    stfs f7, 0x2f4(r1)
    stfs f0, 0x318(r1)
    stfs f0, 0x304(r1)
    stfs f0, 0x2f0(r1)
    lfs f1, 0x80(r28)
    fcmpu cr0, f7, f1
    beq lbl_fn_803ECBD4_00000780
    addi r3, r1, 0x1a0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x1a0
    addi r5, r1, 0x170
    bl fn_805F89F0
    addi r3, r1, 0x170
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ECBD4_00000780:
    lfs f0, lbl_80885F54
    lfs f1, 0x7c(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_803ECBD4_000007E0
    addi r3, r1, 0x200
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x200
    addi r5, r1, 0x1d0
    bl fn_805F89F0
    addi r3, r1, 0x1d0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ECBD4_000007E0:
    lfs f0, lbl_80885F54
    lfs f1, 0x78(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_803ECBD4_00000840
    addi r3, r1, 0x260
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x260
    addi r5, r1, 0x230
    bl fn_805F89F0
    addi r3, r1, 0x230
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ECBD4_00000840:
    lfs f1, 0x90(r28)
    addi r3, r1, 0x2c0
    lfs f2, 0x94(r28)
    lfs f3, 0x98(r28)
    bl fn_805F9160
    addi r4, r1, 0x320
    addi r3, r1, 0x2c0
    mr r5, r4
    bl fn_805F89F0
    addi r4, r1, 0x320
    addi r3, r1, 0x2f0
    mr r5, r4
    bl fn_805F89F0
    lfs f7, lbl_80885F54
    addi r31, r1, 0x290
    lfs f0, lbl_80885F58
    stfs f7, 0x2bc(r1)
    stfs f7, 0x2b4(r1)
    stfs f7, 0x2b0(r1)
    stfs f7, 0x2ac(r1)
    stfs f7, 0x2a8(r1)
    stfs f7, 0x2a0(r1)
    stfs f7, 0x29c(r1)
    stfs f7, 0x298(r1)
    stfs f7, 0x294(r1)
    stfs f0, 0x2b8(r1)
    stfs f0, 0x2a4(r1)
    stfs f0, 0x290(r1)
    lfs f1, 0x8c(r28)
    fcmpu cr0, f7, f1
    beq lbl_fn_803ECBD4_0000090C
    addi r3, r1, 0x80
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ECBD4_0000090C:
    lfs f0, lbl_80885F54
    lfs f1, 0x88(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_803ECBD4_0000096C
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xe0
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ECBD4_0000096C:
    lfs f0, lbl_80885F54
    lfs f1, 0x84(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_803ECBD4_000009CC
    addi r3, r1, 0x140
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x140
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ECBD4_000009CC:
    addi r4, r1, 0x320
    addi r3, r1, 0x290
    mr r5, r4
    bl fn_805F89F0
    lfs f8, 0x74(r28)
    addi r4, r1, 0x320
    lfs f7, 0x70(r28)
    addi r3, r1, 0x14
    lfs f0, 0x6c(r28)
    stfs f0, 0x32c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x33c(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f8, 0x34c(r1)
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x30(r29), 0, 0
    psq_st f1, 0x8(r29), 0, 0
    psq_st f2, 0x10(r29), 0, 0
    psq_st f3, 0x18(r29), 0, 0
    psq_st f4, 0x20(r29), 0, 0
    psq_st f5, 0x28(r29), 0, 0
    lfs f8, 0x348(r1)
    lfs f7, 0x338(r1)
    lfs f0, 0x328(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x344(r1)
    fmr f30, f1
    lfs f7, 0x334(r1)
    addi r3, r1, 0x20
    lfs f0, 0x324(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x340(r1)
    fmr f31, f1
    lfs f7, 0x330(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x320(r1)
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
    ble lbl_fn_803ECBD4_00000AB0
    b lbl_fn_803ECBD4_00000AB4
lbl_fn_803ECBD4_00000AB0:
    fmr f7, f0
lbl_fn_803ECBD4_00000AB4:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_803ECBD4_00000AC4
    b lbl_fn_803ECBD4_00000ADC
lbl_fn_803ECBD4_00000AC4:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_803ECBD4_00000AD8
    b lbl_fn_803ECBD4_00000ADC
lbl_fn_803ECBD4_00000AD8:
    fmr f8, f0
lbl_fn_803ECBD4_00000ADC:
    cmpwi r30, 0x0
    stfs f8, 0x54(r29)
    beq lbl_fn_803ECBD4_00000B3C
    li r0, 0x0
    stw r0, 0x38(r1)
    mr r3, r29
    addi r5, r1, 0x38
    li r4, 0x0
    bl fn_800902C0
    addic. r3, r1, 0x38
    beq lbl_fn_803ECBD4_00000B3C
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803ECBD4_00000B3C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_803ECBD4_00000B34
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803ECBD4_00000B34:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_803ECBD4_00000B3C:
    lwz r0, 0x384(r1)
    psq_l f31, 0x378(r1), 0, 0
    lfd f31, 0x370(r1)
    psq_l f30, 0x368(r1), 0, 0
    lfd f30, 0x360(r1)
    lwz r31, 0x35c(r1)
    lwz r30, 0x358(r1)
    lwz r29, 0x354(r1)
    lwz r28, 0x350(r1)
    mtlr r0
    addi r1, r1, 0x380
    blr
}

asm void fn_803ED0D4(void)
{
    nofralloc
    stwu r1, -0x380(r1)
    mflr r0
    stw r0, 0x384(r1)
    stfd f31, 0x370(r1)
    psq_st f31, 0x378(r1), 0, 0
    stfd f30, 0x360(r1)
    psq_st f30, 0x368(r1), 0, 0
    stw r31, 0x35c(r1)
    stw r30, 0x358(r1)
    mr r30, r5
    stw r29, 0x354(r1)
    mr r29, r4
    stw r28, 0x350(r1)
    mr r28, r3
    mr r3, r29
    bl fn_80092A4C
    lis r4, lbl_807C7060@ha
    lfs f7, lbl_80885F54
    addi r4, r4, lbl_807C7060@l
    lfs f0, lbl_80885F58
    addi r3, r1, 0x320
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    addi r31, r1, 0x2f0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    stfs f7, 0x31c(r1)
    stfs f7, 0x314(r1)
    stfs f7, 0x310(r1)
    stfs f7, 0x30c(r1)
    stfs f7, 0x308(r1)
    stfs f7, 0x300(r1)
    stfs f7, 0x2fc(r1)
    stfs f7, 0x2f8(r1)
    stfs f7, 0x2f4(r1)
    stfs f0, 0x318(r1)
    stfs f0, 0x304(r1)
    stfs f0, 0x2f0(r1)
    lfs f1, 0x80(r28)
    fcmpu cr0, f7, f1
    beq lbl_fn_803ED0D4_00000C80
    addi r3, r1, 0x1a0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x1a0
    addi r5, r1, 0x170
    bl fn_805F89F0
    addi r3, r1, 0x170
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ED0D4_00000C80:
    lfs f0, lbl_80885F54
    lfs f1, 0x7c(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_803ED0D4_00000CE0
    addi r3, r1, 0x200
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x200
    addi r5, r1, 0x1d0
    bl fn_805F89F0
    addi r3, r1, 0x1d0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ED0D4_00000CE0:
    lfs f0, lbl_80885F54
    lfs f1, 0x78(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_803ED0D4_00000D40
    addi r3, r1, 0x260
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x260
    addi r5, r1, 0x230
    bl fn_805F89F0
    addi r3, r1, 0x230
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ED0D4_00000D40:
    lfs f1, 0x90(r28)
    addi r3, r1, 0x2c0
    lfs f2, 0x94(r28)
    lfs f3, 0x98(r28)
    bl fn_805F9160
    addi r4, r1, 0x320
    addi r3, r1, 0x2c0
    mr r5, r4
    bl fn_805F89F0
    addi r4, r1, 0x320
    addi r3, r1, 0x2f0
    mr r5, r4
    bl fn_805F89F0
    lfs f7, lbl_80885F54
    addi r31, r1, 0x290
    lfs f0, lbl_80885F58
    stfs f7, 0x2bc(r1)
    stfs f7, 0x2b4(r1)
    stfs f7, 0x2b0(r1)
    stfs f7, 0x2ac(r1)
    stfs f7, 0x2a8(r1)
    stfs f7, 0x2a0(r1)
    stfs f7, 0x29c(r1)
    stfs f7, 0x298(r1)
    stfs f7, 0x294(r1)
    stfs f0, 0x2b8(r1)
    stfs f0, 0x2a4(r1)
    stfs f0, 0x290(r1)
    lfs f1, 0x8c(r28)
    fcmpu cr0, f7, f1
    beq lbl_fn_803ED0D4_00000E0C
    addi r3, r1, 0x80
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ED0D4_00000E0C:
    lfs f0, lbl_80885F54
    lfs f1, 0x88(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_803ED0D4_00000E6C
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xe0
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ED0D4_00000E6C:
    lfs f0, lbl_80885F54
    lfs f1, 0x84(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_803ED0D4_00000ECC
    addi r3, r1, 0x140
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x140
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803ED0D4_00000ECC:
    addi r4, r1, 0x320
    addi r3, r1, 0x290
    mr r5, r4
    bl fn_805F89F0
    lfs f8, 0x74(r28)
    addi r4, r1, 0x320
    lfs f7, 0x70(r28)
    addi r3, r1, 0x14
    lfs f0, 0x6c(r28)
    stfs f0, 0x32c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x33c(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f8, 0x34c(r1)
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x30(r29), 0, 0
    psq_st f1, 0x8(r29), 0, 0
    psq_st f2, 0x10(r29), 0, 0
    psq_st f3, 0x18(r29), 0, 0
    psq_st f4, 0x20(r29), 0, 0
    psq_st f5, 0x28(r29), 0, 0
    lfs f8, 0x348(r1)
    lfs f7, 0x338(r1)
    lfs f0, 0x328(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x344(r1)
    fmr f30, f1
    lfs f7, 0x334(r1)
    addi r3, r1, 0x20
    lfs f0, 0x324(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x340(r1)
    fmr f31, f1
    lfs f7, 0x330(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x320(r1)
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
    ble lbl_fn_803ED0D4_00000FB0
    b lbl_fn_803ED0D4_00000FB4
lbl_fn_803ED0D4_00000FB0:
    fmr f7, f0
lbl_fn_803ED0D4_00000FB4:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_803ED0D4_00000FC4
    b lbl_fn_803ED0D4_00000FDC
lbl_fn_803ED0D4_00000FC4:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_803ED0D4_00000FD8
    b lbl_fn_803ED0D4_00000FDC
lbl_fn_803ED0D4_00000FD8:
    fmr f8, f0
lbl_fn_803ED0D4_00000FDC:
    cmpwi r30, 0x0
    stfs f8, 0x54(r29)
    beq lbl_fn_803ED0D4_00001038
    li r0, 0x0
    stw r0, 0x38(r1)
    mr r3, r29
    addi r4, r1, 0x38
    bl fn_8000D430
    addic. r3, r1, 0x38
    beq lbl_fn_803ED0D4_00001038
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803ED0D4_00001038
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_803ED0D4_00001030
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803ED0D4_00001030:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_803ED0D4_00001038:
    lwz r0, 0x384(r1)
    psq_l f31, 0x378(r1), 0, 0
    lfd f31, 0x370(r1)
    psq_l f30, 0x368(r1), 0, 0
    lfd f30, 0x360(r1)
    lwz r31, 0x35c(r1)
    lwz r30, 0x358(r1)
    lwz r29, 0x354(r1)
    lwz r28, 0x350(r1)
    mtlr r0
    addi r1, r1, 0x380
    blr
}

asm void fn_803ED5D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r4, r3
    addi r3, r3, 0xb0
    bl fn_803F0764
    mr r3, r31
    li r4, 0x1
    bl fn_80097E80
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803ED610(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803ED610_000011F4
    mr r3, r4
    bl fn_8008CD60
    lwz r3, lbl_8087F0A8
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803ED610_000011F4
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x14
    lfs f0, 0x74(r30)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r30)
    lfs f1, 0x10c(r4)
    lfs f0, 0x6c(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    lfs f0, lbl_80885F5C
    fcmpo cr0, f1, f0
    bge lbl_fn_803ED610_000011F4
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    addi r5, r30, 0x6c
    bl fn_800BFAC8
    lfs f0, lbl_80885F54
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_803ED610_000011F4
    lfs f0, lbl_80885F58
    fcmpo cr0, f1, f0
    bge lbl_fn_803ED610_000011F4
    lis r3, 0x1062
    lwz r9, 0x48(r30)
    addi r0, r3, 0x4dd3
    lis r31, lbl_80751DD0@ha
    mulhw r0, r0, r9
    lwz r7, 0x4c(r30)
    addi r3, r1, 0x40
    addi r4, r31, lbl_80751DD0@l
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    bl sprintf
    addi r4, r31, lbl_80751DD0@l
    lwz r6, 0x54(r30)
    addi r3, r1, 0x20
    addi r5, r1, 0x40
    addi r4, r4, 0x93
    crclr 6
    bl sprintf
    lfs f4, lbl_80885F60
    addi r4, r1, 0x20
    lfs f0, 0xc(r1)
    li r5, -0x1
    lfs f3, lbl_80885F54
    fmr f5, f4
    fsubs f2, f0, f4
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f1, 0x8(r1)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_803ED610_000011F4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803ED774(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803ED774_00001358
    mr r3, r4
    bl fn_8008CD60
    lwz r3, lbl_8087F0A8
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803ED774_00001358
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    lfs f0, 0x74(r30)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r30)
    lfs f1, 0x10c(r4)
    lfs f0, 0x6c(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80885F5C
    fcmpo cr0, f1, f0
    bge lbl_fn_803ED774_00001358
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x14
    addi r5, r30, 0x6c
    bl fn_800BFAC8
    lfs f0, lbl_80885F54
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_803ED774_00001358
    lfs f0, lbl_80885F58
    fcmpo cr0, f1, f0
    bge lbl_fn_803ED774_00001358
    lis r3, 0x1062
    lwz r9, 0x48(r30)
    addi r0, r3, 0x4dd3
    lis r31, lbl_80751DD0@ha
    mulhw r0, r0, r9
    lwz r7, 0x4c(r30)
    addi r3, r1, 0x20
    addi r4, r31, lbl_80751DD0@l
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    bl sprintf
    addi r4, r31, lbl_80751DD0@l
    lwz r6, 0x54(r30)
    addi r3, r1, 0x40
    addi r5, r1, 0x20
    addi r4, r4, 0x93
    crclr 6
    bl sprintf
    lfs f4, lbl_80885F60
    addi r4, r1, 0x40
    lfs f0, 0x18(r1)
    li r5, -0x1
    lfs f3, lbl_80885F54
    fmr f5, f4
    fsubs f2, f0, f4
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f1, 0x14(r1)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_803ED774_00001358:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803ED8D8(void)
{
    nofralloc
    b lbl_fn_803ED8D8_00001378
lbl_fn_803ED8D8_00001374:
    mr r3, r0
lbl_fn_803ED8D8_00001378:
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803ED8D8_00001374
    stw r4, 0x5c(r3)
    blr
}

asm void fn_803ED8F4(void)
{
    nofralloc
    b lbl_fn_803ED8F4_00001394
lbl_fn_803ED8F4_00001390:
    mr r3, r0
lbl_fn_803ED8F4_00001394:
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803ED8F4_000013A8
    cmplw r0, r4
    bne lbl_fn_803ED8F4_00001390
lbl_fn_803ED8F4_000013A8:
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x5c(r4)
    li r0, 0x0
    stw r5, 0x5c(r3)
    stw r0, 0x5c(r4)
    blr
}

asm void fn_803ED92C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, 0x1062
    stw r0, 0x44(r1)
    addi r0, r5, 0x4dd3
    lis r5, lbl_80751DD0@ha
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    addi r4, r5, lbl_80751DD0@l
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r9, 0x48(r3)
    lwz r7, 0x4c(r3)
    addi r3, r1, 0x8
    mulhw r0, r0, r9
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    bl sprintf
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_803ED92C_00001464
    cmpwi r30, 0x0
    beq lbl_fn_803ED92C_00001464
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_803ED92C_00001464
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_803ED92C_00001468
lbl_fn_803ED92C_00001464:
    li r30, 0x0
lbl_fn_803ED92C_00001468:
    lis r31, lbl_80751DD0@ha
    mr r3, r30
    addi r31, r31, lbl_80751DD0@l
    addi r5, r29, 0x54
    addi r4, r31, 0xa0
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885F64
    mr r3, r30
    lfs f2, lbl_80885F68
    addi r4, r31, 0xa6
    lfs f3, lbl_80885F6C
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80885F70
    mr r3, r30
    lfs f2, lbl_80885F74
    addi r4, r31, 0xaa
    lfs f3, lbl_80885F78
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80885F70
    mr r3, r30
    lfs f2, lbl_80885F74
    addi r4, r31, 0xae
    lfs f3, lbl_80885F78
    addi r5, r29, 0x84
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80885F64
    mr r3, r30
    lfs f2, lbl_80885F68
    addi r4, r31, 0xb8
    lfs f3, lbl_80885F6C
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0xbc
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0xc3
    addi r5, r29, 0x58
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r4, r30
    addi r3, r29, 0xb0
    bl fn_803F11F8
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803EDAF0(void)
{
    nofralloc
    lwz r5, 0xe4(r3)
    stw r4, 0x54(r3)
    cmpwi r5, 0x0
    beqlr
    li r0, 0x1
    stw r0, 0x58(r5)
    blr
}

asm void fn_803EDB0C(void)
{
    nofralloc
    stw r4, 0xa8(r3)
    stw r5, 0xac(r3)
    blr
}

asm void fn_803EDB18(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    stw r0, 0x684(r1)
    addi r11, r1, 0x680
    bl _savegpr_22
    lwz r25, 0xa8(r3)
    mr r30, r3
    mr r31, r4
    cmpwi r25, 0x0
    beq lbl_fn_803EDB18_00001774
    lwz r0, 0x28(r25)
    li r26, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_803EDB18_00001608
    mr r3, r25
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_803EDB18_0000160C
    addi r3, r25, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_803EDB18_0000160C
lbl_fn_803EDB18_00001608:
    li r26, 0x1
lbl_fn_803EDB18_0000160C:
    cmpwi r26, 0x0
    beq lbl_fn_803EDB18_00001774
    lwz r0, 0xac(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803EDB18_00001774
    mr r3, r31
    bl fn_8008B130
    cmpwi r3, 0x0
    bne lbl_fn_803EDB18_00001634
    b lbl_fn_803EDB18_00001774
lbl_fn_803EDB18_00001634:
    lis r26, lbl_807772D0@ha
    lis r28, lbl_807772B0@ha
    addi r26, r26, lbl_807772D0@l
    li r23, 0x0
    addi r28, r28, lbl_807772B0@l
    li r25, 0x0
    li r27, 0x0
    b lbl_fn_803EDB18_00001764
lbl_fn_803EDB18_00001654:
    lwz r0, 0x2c(r3)
    lwzx r24, r25, r0
    add r22, r0, r25
    cmpwi r24, 0x0
    beq lbl_fn_803EDB18_0000175C
    mr r3, r24
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803EDB18_0000175C
    mr r3, r24
    bl strlen
    stw r26, 0x18(r1)
    mr r29, r3
    addi r3, r1, 0x28
    li r4, 0x0
    stw r27, 0x1c(r1)
    li r5, 0x400
    stw r27, 0x20(r1)
    stw r27, 0x24(r1)
    stw r27, 0x648(r1)
    bl memset
    addi r3, r1, 0x628
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x18(r1)
    mr r4, r24
    mr r5, r29
    addi r3, r1, 0x18
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    stw r28, 0x18(r1)
    addi r3, r1, 0x18
    la r4, lbl_8087D708
    bl fn_8005B6E8
    addi r3, r1, 0x18
    bl fn_8005B3CC
    mr r29, r3
    mr r3, r31
    bl fn_8008B130
    mr r4, r29
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_803EDB18_0000175C
    lfs f0, 0x8(r22)
    addi r4, r1, 0x10
    lfs f5, 0xc(r22)
    addi r5, r1, 0x8
    lfs f2, lbl_80885F7C
    mr r3, r31
    fadds f4, f0, f5
    lfs f0, 0x4(r22)
    lfs f3, lbl_80885F58
    fmuls f0, f2, f0
    fdivs f2, f4, f5
    fdivs f0, f0, f5
    stfs f0, 0x10(r1)
    fsubs f0, f3, f2
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lwz r4, 0xa8(r30)
    lfs f1, 0xc(r22)
    bl fn_800954DC
    b lbl_fn_803EDB18_00001774
lbl_fn_803EDB18_0000175C:
    addi r25, r25, 0x10
    addi r23, r23, 0x1
lbl_fn_803EDB18_00001764:
    lwz r3, 0xac(r30)
    lwz r0, 0x28(r3)
    cmpw r23, r0
    blt lbl_fn_803EDB18_00001654
lbl_fn_803EDB18_00001774:
    addi r11, r1, 0x680
    bl _restgpr_22
    lwz r0, 0x684(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}

asm void fn_803EDCF4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r4, lbl_8087EFB4
    lfs f0, 0x74(r3)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r3)
    lfs f0, 0x6c(r3)
    addi r3, r1, 0x8
    lfs f1, 0x10c(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80885F5C
    fcmpo cr0, f1, f0
    bge lbl_fn_803EDCF4_000018B4
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x14
    addi r5, r30, 0x6c
    bl fn_800BFAC8
    lfs f0, lbl_80885F54
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_803EDCF4_000018B4
    lfs f0, lbl_80885F58
    fcmpo cr0, f1, f0
    bge lbl_fn_803EDCF4_000018B4
    lis r3, 0x1062
    lwz r9, 0x48(r30)
    addi r0, r3, 0x4dd3
    lis r31, lbl_80751DD0@ha
    mulhw r0, r0, r9
    lwz r7, 0x4c(r30)
    addi r3, r1, 0x20
    addi r4, r31, lbl_80751DD0@l
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    bl sprintf
    addi r4, r31, lbl_80751DD0@l
    lwz r6, 0x54(r30)
    addi r3, r1, 0x40
    addi r5, r1, 0x20
    addi r4, r4, 0x93
    crclr 6
    bl sprintf
    lfs f4, lbl_80885F60
    addi r4, r1, 0x40
    lfs f0, 0x18(r1)
    li r5, -0x1
    lfs f3, lbl_80885F54
    fmr f5, f4
    fsubs f2, f0, f4
    lwz r3, lbl_8087EEB0
    fmr f6, f3
    lfs f1, 0x14(r1)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_803EDCF4_000018B4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803EDE34(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803EDE34_00001990
    cmpwi r31, 0x0
    bne lbl_fn_803EDE34_00001990
    lfs f1, 0x74(r28)
    addi r3, r1, 0x8
    lfs f0, 0x8(r29)
    lfs f3, 0x70(r28)
    fsubs f4, f1, f0
    lfs f2, 0x4(r29)
    lfs f1, 0x6c(r28)
    lfs f0, 0x0(r29)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    lfs f0, lbl_80885F80
    fcmpo cr0, f1, f0
    ble lbl_fn_803EDE34_00001964
    li r3, 0x0
    b lbl_fn_803EDE34_00001994
lbl_fn_803EDE34_00001964:
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_805F9990
    lfs f0, lbl_80885F84
    fcmpo cr0, f1, f0
    mfcr r3
    extrwi r3, r3, 1, 1
    b lbl_fn_803EDE34_00001994
lbl_fn_803EDE34_00001990:
    li r3, 0x0
lbl_fn_803EDE34_00001994:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
