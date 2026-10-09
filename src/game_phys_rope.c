#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000DD0C(void);
extern void fn_80011034(void);
extern void fn_800132EC(void);
extern void fn_8003EFB0(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_8005361C(void);
extern void fn_8008CCE8(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D1E9C(void);
extern void fn_800F7FD8(void);
extern void fn_800F80B8(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_800FB1BC(void);
extern void fn_800FB4B0(void);
extern void fn_80110858(void);
extern void fn_8016F3D0(void);
extern void fn_8021A8D0(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_80373164(void);
extern void fn_805706C4(void);
extern void fn_8059A000(void);
extern void fn_8059C5E0(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80736680[];
extern u8 lbl_80736698[];
extern u8 lbl_807366A8[];
extern u8 lbl_80779F10[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7888[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F9E8;
extern u32 lbl_80881640;
extern u32 lbl_80881644;
extern u32 lbl_80881648;
extern u32 lbl_8088164C;
extern u32 lbl_80881650;
extern u32 lbl_80881654;
extern u32 lbl_80881658;
extern u32 lbl_8088165C;
extern u32 lbl_80881660;
extern u32 lbl_80881664;
extern u32 lbl_80881668;
extern u32 lbl_8088166C;
extern u32 lbl_80881670;
extern u32 lbl_80881674;
extern u32 lbl_80881678;
extern u32 lbl_8088167C;
extern u32 lbl_80881680;

/* Function declarations */
void fn_8010ECF4(void);
void fn_8010ED4C(void);
void fn_8010EDFC(void);
void fn_8010EE38(void);
void fn_8010EE78(void);
void fn_8010EFC8(void);
void fn_8010EFF0(void);
void fn_8010F018(void);
void fn_8010F26C(void);
void fn_8010F30C(void);
void fn_8010F41C(void);
void fn_8010F4BC(void);
void fn_8010F668(void);
void fn_8010F67C(void);
void fn_8010F6FC(void);
void fn_8010F720(void);
void fn_8010FF74(void);
void fn_801100A0(void);

asm void fn_8010ECF4(void)
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
    beq lbl_fn_8010ECF4_0000003C
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8010ECF4_0000003C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8010ECF4_0000003C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010ED4C(void)
{
    nofralloc
    lfs f3, lbl_80881640
    lis r4, lbl_80779F10@ha
    li r0, 0x0
    lfs f1, lbl_80881648
    lfs f2, lbl_80881644
    addi r4, r4, lbl_80779F10@l
    lfs f0, lbl_8088164C
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f3, 0xc(r3)
    stfs f3, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f3, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f3, 0x20(r3)
    stfs f3, 0x24(r3)
    stfs f3, 0x28(r3)
    stfs f2, 0x5c(r3)
    stw r0, 0x60(r3)
    stw r0, 0x64(r3)
    stw r0, 0x6c(r3)
    stfs f3, 0x70(r3)
    stfs f1, 0x74(r3)
    stfs f3, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x84(r3)
    stw r0, 0x88(r3)
    stw r0, 0x8c(r3)
    stfs f0, 0x94(r3)
    stw r0, 0x9c(r3)
    stfs f3, 0x58(r3)
    stfs f3, 0x50(r3)
    stfs f3, 0x4c(r3)
    stfs f3, 0x48(r3)
    stfs f3, 0x44(r3)
    stfs f3, 0x3c(r3)
    stfs f3, 0x38(r3)
    stfs f3, 0x34(r3)
    stfs f3, 0x30(r3)
    stfs f1, 0x54(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x2c(r3)
    blr
}

asm void fn_8010EDFC(void)
{
    nofralloc
    lfs f1, lbl_80881640
    lfs f0, lbl_80881648
    stfs f1, 0x2c(r3)
    stfs f1, 0x24(r3)
    stfs f1, 0x20(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x0(r3)
    blr
}

asm void fn_8010EE38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8010EE38_0000016C
    cmpwi r4, 0x0
    ble lbl_fn_8010EE38_0000016C
    bl dtor_80084684
lbl_fn_8010EE38_0000016C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010EE78(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    mr r30, r7
    li r29, 0x0
    stw r29, 0x84(r3)
    mr r28, r9
    mr r7, r8
    mr r31, r3
    stw r30, 0x88(r3)
    mr r25, r4
    mr r26, r5
    mr r27, r6
    stw r29, 0x8c(r3)
    mr r8, r28
    li r9, 0x1
    lwz r0, 0x48(r30)
    stw r0, 0x90(r3)
    bl fn_8010F018
    stw r30, 0x8(r1)
    addi r4, r1, 0x10
    lbz r0, lbl_8087EE74
    addi r5, r1, 0x1c
    lwz r3, 0xc(r25)
    extsb. r0, r0
    lwz r0, 0x4(r3)
    stw r0, 0xc(r1)
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x8(r27)
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r5), 0, 0
    stw r28, 0x28(r1)
    stw r29, 0x2c(r1)
    bne lbl_fn_8010EE78_00000254
    lis r3, lbl_807C6BB8@ha
    stwu r29, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C7888@ha
    stw r29, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    stw r29, 0x8(r3)
    addi r5, r5, lbl_807C7888@l
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_8010EE78_00000254:
    lis r29, lbl_807C6BB8@ha
    addi r29, r29, lbl_807C6BB8@l
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8010EE78_000002BC
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8010EE78_000002B0
lbl_fn_8010EE78_00000274:
    lwz r0, 0x0(r29)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_8010EE78_00000290
    cmpwi r0, 0xc
    bne lbl_fn_8010EE78_000002A8
lbl_fn_8010EE78_00000290:
    lwz r12, 0x4(r3)
    mr r4, r31
    addi r5, r1, 0x8
    li r3, 0xc
    mtctr r12
    bctrl
lbl_fn_8010EE78_000002A8:
    addi r28, r28, 0x1
    addi r30, r30, 0x8
lbl_fn_8010EE78_000002B0:
    lwz r0, 0x4(r29)
    cmpw r28, r0
    blt lbl_fn_8010EE78_00000274
lbl_fn_8010EE78_000002BC:
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8010EFC8(void)
{
    nofralloc
    mr r11, r7
    li r10, 0x1
    li r0, 0x0
    mr r7, r8
    mr r8, r9
    stw r10, 0x84(r3)
    li r9, 0x1
    stw r0, 0x88(r3)
    stw r11, 0x8c(r3)
    b fn_8010F018
}

asm void fn_8010EFF0(void)
{
    nofralloc
    li r0, 0x0
    mr r10, r7
    mr r7, r8
    mr r8, r9
    stw r0, 0x84(r3)
    li r9, 0x1
    stw r0, 0x88(r3)
    stw r0, 0x8c(r3)
    stw r10, 0x90(r3)
    b fn_8010F018
}

asm void fn_8010F018(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_25
    lfs f0, lbl_80881640
    oris r12, r8, 0x1
    lfs f4, 0x0(r4)
    mr r26, r3
    lwz r11, 0x4(r4)
    fcmpo cr0, f1, f0
    lwz r10, 0x8(r4)
    mr r27, r4
    lwz r8, 0xc(r4)
    mr r28, r5
    lwz r0, 0x10(r4)
    lfs f3, 0x14(r4)
    mr r29, r6
    lfs f0, 0x18(r4)
    mr r30, r7
    stw r12, 0x4(r3)
    mr r31, r9
    stfs f4, 0x5c(r3)
    stw r11, 0x60(r3)
    stw r10, 0x64(r3)
    stw r8, 0x68(r3)
    stw r0, 0x6c(r3)
    stfs f3, 0x70(r3)
    stfs f0, 0x74(r3)
    ble lbl_fn_8010F018_000003A4
    stfs f1, 0x80(r3)
    b lbl_fn_8010F018_000003AC
lbl_fn_8010F018_000003A4:
    lfs f0, 0x4c(r8)
    stfs f0, 0x80(r3)
lbl_fn_8010F018_000003AC:
    lfs f4, 0x80(r3)
    li r25, 0x0
    lfs f3, 0x8(r6)
    addi r4, r1, 0x18
    lfs f0, 0x4(r6)
    fmuls f2, f3, f4
    lfs f3, 0x0(r6)
    fmuls f5, f0, f4
    lfs f0, lbl_80881640
    fmuls f3, f3, f4
    stfs f2, 0x20(r1)
    stfs f3, 0x18(r1)
    stfs f5, 0x1c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x20(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r3)
    lfs f2, 0x8(r5)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stfs f0, 0x78(r3)
    stw r25, 0x9c(r3)
    mr r3, r26
    bl fn_8010F4BC
    lwz r0, 0x4(r27)
    li r3, 0x3
    lwz r4, lbl_8087F3C0
    cmpwi r0, 0x0
    stw r3, 0xb8(r4)
    beq lbl_fn_8010F018_00000474
    mr r3, r26
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r5, -0x1
    lwz r4, 0x4(r27)
    li r0, 0x1
    stw r25, 0x8(r1)
    addi r7, r26, 0x2c
    lfs f1, lbl_80881648
    li r6, 0x5
    stw r5, 0xc(r1)
    li r5, -0x1
    li r8, 0x0
    li r9, 0x0
    stw r0, 0x10(r1)
    li r10, 0x0
    bl fn_8023A680
lbl_fn_8010F018_00000474:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0xb8(r3)
    bge lbl_fn_8010F018_00000498
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x7c(r26)
    b lbl_fn_8010F018_0000049C
lbl_fn_8010F018_00000498:
    stw r30, 0x7c(r26)
lbl_fn_8010F018_0000049C:
    lwz r0, 0x10(r27)
    lfs f0, lbl_8088164C
    cmpwi r0, 0x0
    stfs f0, 0x94(r26)
    stw r0, 0x98(r26)
    ble lbl_fn_8010F018_000004C0
    lwz r0, 0x4(r26)
    oris r0, r0, 0x4
    stw r0, 0x4(r26)
lbl_fn_8010F018_000004C0:
    cmpwi r31, 0x0
    beq lbl_fn_8010F018_00000560
    lwz r9, lbl_8087F430
    lwz r0, 0x5590(r9)
    cmpwi r0, 0x0
    beq lbl_fn_8010F018_00000560
    lfs f2, 0x8(r28)
    addi r3, r1, 0x44
    psq_l f1, 0x0(r28), 0, 0
    addi r8, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    li r7, 0x0
    lfs f4, 0x0(r27)
    addi r4, r1, 0x24
    stfs f2, 0x4c(r1)
    lwz r6, 0x4(r27)
    lwz r5, 0x8(r27)
    lwz r3, 0xc(r27)
    lwz r0, 0x10(r27)
    lfs f3, 0x14(r27)
    lfs f0, 0x18(r27)
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    stw r7, 0x24(r1)
    stfs f4, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x58(r1)
    lwz r0, 0x88(r26)
    stw r0, 0x5c(r1)
    lwz r0, 0x8c(r26)
    stw r0, 0x60(r1)
    stw r26, 0x64(r1)
    lwz r3, 0x5590(r9)
    bl fn_805706C4
lbl_fn_8010F018_00000560:
    addi r11, r1, 0x90
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8010F26C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x3
    stw r0, 0x24(r1)
    lwz r0, 0x4(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, lbl_8087F3C0
    stw r6, 0xb8(r5)
    beq lbl_fn_8010F26C_000005F4
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lwz r4, 0x4(r31)
    stw r3, 0xc(r1)
    li r0, 0x1
    lfs f1, lbl_80881648
    addi r7, r30, 0x2c
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    lwz r3, lbl_8087F3C0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
lbl_fn_8010F26C_000005F4:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8010F30C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x3
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    rlwinm r4, r5, 0, 16, 13
    li r5, 0x0
    oris r4, r4, 0x200
    stw r4, 0x4(r3)
    mr r4, r29
    lwz r6, lbl_8087F3C0
    stw r0, 0xb8(r6)
    lwz r0, 0x4(r3)
    lwz r3, lbl_8087F3C0
    extrwi r31, r0, 1, 25
    mr r6, r31
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    mr r6, r31
    li r5, 0xa
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0xb
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    cmpwi r30, 0x0
    stw r5, 0xb8(r3)
    beq lbl_fn_8010F30C_0000070C
    lwz r3, lbl_8087F430
    lwz r0, 0x5590(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8010F30C_0000070C
    lfs f2, lbl_80881644
    li r0, 0x1
    lfs f1, lbl_80881640
    addi r4, r1, 0x8
    lfs f0, lbl_80881648
    stfs f2, 0xc(r1)
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r29, 0x48(r1)
    lwz r3, 0x5590(r3)
    bl fn_805706C4
lbl_fn_8010F30C_0000070C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8010F41C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r0, 0x3
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, lbl_8087F3C0
    stw r0, 0xb8(r4)
    mr r4, r30
    lwz r0, 0x4(r3)
    lwz r3, lbl_8087F3C0
    extrwi r31, r0, 1, 25
    mr r6, r31
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    mr r6, r31
    li r5, 0xa
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x1
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0xb
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010F4BC(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    lfs f0, lbl_80881640
    stw r0, 0xf4(r1)
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r3
    lfs f1, 0x94(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8010F4BC_00000924
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8010F4BC_00000924
    lwz r3, 0x9c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8010F4BC_00000924
    bl fn_8000DD0C
    lis r4, lbl_807366A8@ha
    addi r4, r4, lbl_807366A8@l
    bl fn_800132EC
    lwz r0, 0x4(r30)
    mr r31, r3
    rlwinm r4, r0, 0, 12, 12
    subis r0, r4, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_8010F4BC_000008AC
    mr r4, r31
    addi r3, r1, 0x74
    bl fn_8000D0F8
    mr r4, r31
    addi r3, r1, 0xb0
    bl fn_8008CCE8
    addi r3, r1, 0xb0
    bl fn_8010F668
    lfs f1, lbl_80881640
    addi r3, r1, 0x20
    lfs f3, lbl_8088164C
    fmr f2, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x2c
    addi r5, r1, 0xb0
    bl fn_8010F6FC
    addi r3, r1, 0x68
    addi r4, r1, 0x2c
    bl fn_80011034
    addi r3, r30, 0x2c
    bl fn_8010EDFC
    addi r3, r30, 0x2c
    addi r4, r1, 0x74
    bl fn_8010F67C
    addi r3, r30, 0x2c
    addi r4, r1, 0x68
    bl fn_800F80B8
    b lbl_fn_8010F4BC_0000095C
lbl_fn_8010F4BC_000008AC:
    cmpwi r3, 0x0
    beq lbl_fn_8010F4BC_0000095C
    mr r4, r31
    addi r3, r1, 0x80
    bl fn_8008CCE8
    mr r5, r31
    addi r3, r1, 0x5c
    addi r4, r30, 0x8
    bl fn_8010F6FC
    addi r3, r1, 0x80
    bl fn_8010F668
    addi r3, r1, 0x50
    addi r4, r30, 0x20
    addi r5, r1, 0x80
    bl fn_8010F6FC
    addi r3, r1, 0x14
    addi r4, r1, 0x50
    bl fn_800F7FD8
    addi r3, r1, 0x44
    addi r4, r1, 0x14
    bl fn_80011034
    addi r3, r30, 0x2c
    bl fn_8010EDFC
    addi r3, r30, 0x2c
    addi r4, r1, 0x5c
    bl fn_8010F67C
    addi r3, r30, 0x2c
    addi r4, r1, 0x44
    bl fn_800F80B8
    b lbl_fn_8010F4BC_0000095C
lbl_fn_8010F4BC_00000924:
    addi r3, r1, 0x8
    addi r4, r30, 0x20
    bl fn_800F7FD8
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    bl fn_80011034
    addi r3, r30, 0x2c
    bl fn_8010EDFC
    addi r3, r30, 0x2c
    addi r4, r30, 0x8
    bl fn_8010F67C
    addi r3, r30, 0x2c
    addi r4, r1, 0x38
    bl fn_800F80B8
lbl_fn_8010F4BC_0000095C:
    lwz r0, 0xf4(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8010F668(void)
{
    nofralloc
    lfs f0, lbl_80881640
    stfs f0, 0xc(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x2c(r3)
    blr
}

asm void fn_8010F67C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f1, 0x0(r4)
    stw r0, 0x74(r1)
    lfs f2, 0x4(r4)
    stw r31, 0x6c(r1)
    mr r31, r3
    lfs f3, 0x8(r4)
    addi r3, r1, 0x8
    bl fn_805F90D0
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8010F6FC(void)
{
    nofralloc
    mr r6, r3
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    mr r3, r5
    psq_st f1, 0x0(r6), 0, 0
    mr r4, r6
    mr r5, r6
    stfs f2, 0x8(r6)
    b fn_805F93C0
}

asm void fn_8010F720(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    lfs f0, lbl_80881640
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    stfd f28, 0x290(r1)
    psq_st f28, 0x298(r1), 0, 0
    stfd f27, 0x280(r1)
    psq_st f27, 0x288(r1), 0, 0
    stfd f26, 0x270(r1)
    psq_st f26, 0x278(r1), 0, 0
    stw r31, 0x26c(r1)
    mr r31, r3
    stw r30, 0x268(r1)
    stw r29, 0x264(r1)
    stw r28, 0x260(r1)
    lfs f7, 0x94(r3)
    lwz r4, lbl_8087EFA8
    fcmpo cr0, f7, f0
    lfs f31, 0x3a4(r4)
    cror eq, gt, eq
    bne lbl_fn_8010F720_00000E1C
    lwz r0, 0x4(r3)
    oris r0, r0, 0x2
    stw r0, 0x4(r3)
    bl fn_8010F4BC
    lfs f7, 0x94(r31)
    lfs f0, lbl_80881640
    fsubs f7, f7, f31
    stfs f7, 0x94(r31)
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8010F720_00001230
    lwz r0, 0x4(r31)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_8010F720_00000DFC
    lwz r0, 0x64(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8010F720_00000DFC
    lwz r0, 0x9c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8010F720_00000B10
    lfs f0, 0x58(r31)
    addi r4, r1, 0xa0
    lfs f7, 0x48(r31)
    lfs f8, 0x38(r31)
    stfs f8, 0xa0(r1)
    stfs f7, 0xa4(r1)
    stfs f0, 0xa8(r1)
    b lbl_fn_8010F720_00000B14
lbl_fn_8010F720_00000B10:
    addi r4, r31, 0x8
lbl_fn_8010F720_00000B14:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0xb8
    lfs f2, 0x8(r4)
    stfs f2, 0xc0(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x9c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8010F720_00000BB0
    lfs f7, lbl_80881640
    addi r30, r1, 0x88
    lfs f0, lbl_80881648
    addi r3, r1, 0x138
    psq_l f1, 0x2c(r31), 0, 0
    addi r6, r1, 0x94
    psq_l f2, 0x34(r31), 0, 0
    mr r4, r30
    psq_l f3, 0x3c(r31), 0, 0
    mr r5, r30
    psq_l f4, 0x44(r31), 0, 0
    psq_l f5, 0x4c(r31), 0, 0
    psq_l f6, 0x54(r31), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    fmr f2, f0
    psq_st f4, 0x18(r3), 0, 0
    stfs f7, 0x94(r1)
    stfs f7, 0x98(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x9c(r1)
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0x144(r1)
    stfs f7, 0x154(r1)
    stfs f7, 0x164(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x90(r1)
    bl fn_805F93C0
    b lbl_fn_8010F720_00000BB4
lbl_fn_8010F720_00000BB0:
    addi r30, r31, 0x20
lbl_fn_8010F720_00000BB4:
    lfs f2, 0x8(r30)
    addi r3, r1, 0xac
    psq_l f1, 0x0(r30), 0, 0
    addi r29, r1, 0x10
    frsp f7, f2
    lfs f0, lbl_80881650
    psq_st f1, 0x0(r3), 0, 0
    addi r30, r1, 0xb8
    fabs f8, f7
    stfs f2, 0xb4(r1)
    psq_st f1, 0x0(r29), 0, 0
    frsp f8, f8
    stfs f2, 0x18(r1)
    fcmpo cr0, f8, f0
    bge lbl_fn_8010F720_00000C14
    lfs f7, 0x10(r1)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    ble lbl_fn_8010F720_00000C08
    lfs f0, lbl_80881654
    b lbl_fn_8010F720_00000C0C
lbl_fn_8010F720_00000C08:
    lfs f0, lbl_80881658
lbl_fn_8010F720_00000C0C:
    stfs f0, 0x20(r1)
    b lbl_fn_8010F720_00000C28
lbl_fn_8010F720_00000C14:
    fmr f2, f7
    lfs f1, 0x10(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x20(r1)
lbl_fn_8010F720_00000C28:
    lfs f0, 0x20(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881640
    addi r4, r1, 0x28
    lfs f8, 0x110(r1)
    mr r5, r4
    lfs f9, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f10, 0x108(r1)
    lfs f11, 0x120(r1)
    lfs f12, 0x11c(r1)
    lfs f13, 0x118(r1)
    lfs f31, 0x130(r1)
    lfs f30, 0x12c(r1)
    lfs f29, 0x128(r1)
    lfs f28, 0x134(r1)
    lfs f27, 0x124(r1)
    lfs f26, 0x114(r1)
    lfs f0, lbl_80881648
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x18(r1)
    stfs f7, 0xf8(r1)
    stfs f7, 0xfc(r1)
    stfs f7, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f10, 0x58(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f10, 0xc8(r1)
    stfs f9, 0xcc(r1)
    stfs f8, 0xd0(r1)
    stfs f13, 0x4c(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f13, 0xd8(r1)
    stfs f12, 0xdc(r1)
    stfs f11, 0xe0(r1)
    stfs f29, 0x40(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f29, 0xe8(r1)
    stfs f30, 0xec(r1)
    stfs f31, 0xf0(r1)
    stfs f26, 0x34(r1)
    stfs f27, 0x38(r1)
    stfs f28, 0x3c(r1)
    stfs f26, 0xd4(r1)
    stfs f27, 0xe4(r1)
    stfs f28, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x30(r1)
    bl fn_805F9750
    lfs f2, 0x30(r1)
    lfs f0, lbl_80881650
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8010F720_00000D44
    lfs f7, 0x2c(r1)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    ble lbl_fn_8010F720_00000D34
    lfs f0, lbl_80881654
    b lbl_fn_8010F720_00000D38
lbl_fn_8010F720_00000D34:
    lfs f0, lbl_80881658
lbl_fn_8010F720_00000D38:
    fneg f0, f0
    stfs f0, 0x1c(r1)
    b lbl_fn_8010F720_00000D58
lbl_fn_8010F720_00000D44:
    lfs f1, 0x2c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x1c(r1)
lbl_fn_8010F720_00000D58:
    addi r3, r1, 0x1c
    lfs f2, lbl_80881640
    psq_l f1, 0x0(r3), 0, 0
    li r28, 0x0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x18(r1)
    lwz r0, 0x4(r31)
    stfs f2, 0x24(r1)
    rlwinm r0, r0, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_8010F720_00000DAC
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r4, 0x88(r31)
    addi r7, r1, 0x10
    lwz r5, 0x68(r31)
    li r8, 0x0
    lfs f1, lbl_80881648
    li r9, 0x0
    bl fn_800FB1BC
    b lbl_fn_8010F720_00000DE8
lbl_fn_8010F720_00000DAC:
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r7, r30
    addi r8, r1, 0x10
    stw r0, 0xc(r1)
    li r9, 0x0
    li r10, 0x1e
    lwz r3, lbl_8087F048
    lwz r4, 0x88(r31)
    lwz r5, 0x68(r31)
    lwz r6, 0x7c(r31)
    lfs f1, 0x5c(r31)
    lfs f2, 0x74(r31)
    bl fn_800FAB80
    mr r28, r3
lbl_fn_8010F720_00000DE8:
    lwz r3, lbl_8087F430
    mr r5, r30
    lwz r4, 0x88(r31)
    mr r6, r28
    bl fn_80373164
lbl_fn_8010F720_00000DFC:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_8010F720_00001230
lbl_fn_8010F720_00000E1C:
    lwz r0, 0x98(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010F720_00000E3C
    bl fn_8010F4BC
    lwz r3, 0x98(r31)
    subi r0, r3, 0x1
    stw r0, 0x98(r31)
    b lbl_fn_8010F720_00001230
lbl_fn_8010F720_00000E3C:
    lwz r4, 0x68(r3)
    lfs f8, 0x78(r3)
    lfs f0, 0x44(r4)
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    beq lbl_fn_8010F720_00000E70
    lfs f7, 0x70(r3)
    lfs f0, lbl_80881648
    fcmpo cr0, f7, f0
    ble lbl_fn_8010F720_00000F70
    fcmpo cr0, f8, f7
    cror eq, gt, eq
    bne lbl_fn_8010F720_00000F70
lbl_fn_8010F720_00000E70:
    lwz r0, 0xac(r4)
    rlwinm r4, r0, 0, 15, 15
    subis r0, r4, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8010F720_00000EA4
    lfs f7, 0x70(r3)
    lfs f0, lbl_80881648
    fcmpo cr0, f7, f0
    ble lbl_fn_8010F720_00000F50
    lfs f0, 0x78(r3)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    bne lbl_fn_8010F720_00000F50
lbl_fn_8010F720_00000EA4:
    li r0, 0x0
    stw r0, 0x23c(r1)
    addi r5, r1, 0x20c
    addi r6, r1, 0x218
    stw r0, 0x240(r1)
    addi r4, r1, 0x70
    stw r0, 0x244(r1)
    stw r0, 0x248(r1)
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    stfs f2, 0x214(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x220(r1)
    psq_l f1, 0x20(r3), 0, 0
    lfs f2, 0x28(r3)
    mr r3, r4
    stfs f2, 0x78(r1)
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F98D0
    lfs f0, 0x78(r1)
    li r0, 0x1
    lfs f7, 0x74(r1)
    addi r6, r1, 0x7c
    fneg f8, f0
    lfs f0, 0x70(r1)
    fneg f7, f7
    addi r5, r1, 0x230
    fneg f0, f0
    addi r7, r1, 0x224
    stfs f0, 0x7c(r1)
    frsp f2, f8
    mr r3, r31
    addi r4, r1, 0x208
    stfs f7, 0x80(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f8, 0x84(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x238(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x22c(r1)
    stw r0, 0x208(r1)
    bl fn_80110858
lbl_fn_8010F720_00000F50:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_8010F720_00001230
lbl_fn_8010F720_00000F70:
    lfs f7, 0x24(r3)
    lfs f0, 0x20(r3)
    fmuls f12, f7, f31
    lfs f8, 0x28(r3)
    fmuls f13, f0, f31
    lfs f7, 0x8(r3)
    lfs f0, 0xc(r3)
    fmuls f11, f8, f31
    lfs f2, 0x10(r3)
    fadds f10, f7, f13
    psq_l f1, 0x8(r3), 0, 0
    fadds f9, f0, f12
    fadds f8, f2, f11
    lfs f7, 0x80(r3)
    lfs f0, 0x78(r3)
    psq_st f1, 0x14(r3), 0, 0
    fmadds f0, f7, f31, f0
    lwz r4, 0x68(r3)
    stfs f2, 0x1c(r3)
    stfs f10, 0x8(r3)
    stfs f9, 0xc(r3)
    stfs f8, 0x10(r3)
    stfs f0, 0x78(r3)
    lbz r0, 0x2(r4)
    stfs f13, 0x64(r1)
    extsb r0, r0
    cmpwi r0, 0x1
    stfs f12, 0x68(r1)
    stfs f11, 0x6c(r1)
    beq lbl_fn_8010F720_00000FF0
    cmpwi r0, 0x5
    bne lbl_fn_8010F720_00001054
lbl_fn_8010F720_00000FF0:
    lwz r0, 0xac(r4)
    rlwinm r4, r0, 0, 16, 16
    addis r0, r4, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_8010F720_00001014
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8010F720_00001054
lbl_fn_8010F720_00001014:
    lwz r5, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x258(r1)
    lis r4, lbl_80736698@ha
    lwz r0, 0x30(r5)
    lfd f9, lbl_80736698@l(r4)
    mullw r0, r0, r0
    lfs f7, lbl_8088165C
    lfs f0, 0x24(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x25c(r1)
    lfd f8, 0x258(r1)
    fsubs f8, f8, f9
    fdivs f7, f7, f8
    fmadds f0, f31, f7, f0
    stfs f0, 0x24(r3)
lbl_fn_8010F720_00001054:
    lwz r0, 0x4(r3)
    rlwinm r4, r0, 0, 8, 8
    subis r0, r4, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_8010F720_000010D0
    lfs f7, 0x24(r3)
    lfs f0, lbl_80881640
    fcmpo cr0, f7, f0
    bge lbl_fn_8010F720_00001084
    lfs f0, lbl_80881660
    fmuls f0, f7, f0
    stfs f0, 0x24(r3)
lbl_fn_8010F720_00001084:
    lwz r5, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x258(r1)
    lis r4, lbl_80736698@ha
    lwz r0, 0x30(r5)
    lfd f10, lbl_80736698@l(r4)
    mullw r0, r0, r0
    lfs f8, lbl_8088165C
    lfs f7, lbl_80881664
    lfs f0, 0x24(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x25c(r1)
    lfd f9, 0x258(r1)
    fsubs f9, f9, f10
    fdivs f8, f8, f9
    fneg f8, f8
    fmuls f8, f31, f8
    fmadds f0, f7, f8, f0
    stfs f0, 0x24(r3)
lbl_fn_8010F720_000010D0:
    mr r3, r31
    bl fn_8010F4BC
    lwz r4, 0x4(r31)
    rlwinm r3, r4, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_8010F720_00001230
    lwz r0, 0x84(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8010F720_000011B0
    lwz r3, 0x68(r31)
    lbz r0, 0x2(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8010F720_000011A4
    rlwinm r0, r4, 0, 30, 30
    lis r3, 0x8000
    cmplwi r0, 0x2
    addi r7, r3, 0x6
    bne lbl_fn_8010F720_00001120
    oris r7, r7, 0x4000
lbl_fn_8010F720_00001120:
    li r0, 0x0
    stw r0, 0x1ec(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x1b8
    stw r0, 0x1f0(r1)
    addi r5, r31, 0x14
    addi r6, r31, 0x8
    li r8, 0x0
    stw r0, 0x1f4(r1)
    li r9, 0x0
    stw r0, 0x1f8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8010F720_00001230
    li r0, 0x1
    stw r0, 0x8(r1)
    addi r7, r31, 0x8
    li r8, 0x0
    lwz r3, lbl_8087F048
    li r9, 0x1e
    lwz r4, 0x88(r31)
    li r10, -0x1
    lwz r5, 0x68(r31)
    lwz r6, 0x7c(r31)
    bl fn_800FB4B0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_8010F720_00001230
lbl_fn_8010F720_000011A4:
    mr r3, r31
    bl fn_801100A0
    b lbl_fn_8010F720_00001230
lbl_fn_8010F720_000011B0:
    cmpwi r0, 0x1
    bne lbl_fn_8010F720_00001230
    rlwinm r0, r4, 0, 30, 30
    lis r3, 0x8000
    cmplwi r0, 0x2
    addi r7, r3, 0x6
    bne lbl_fn_8010F720_000011D0
    oris r7, r7, 0x4000
lbl_fn_8010F720_000011D0:
    li r0, 0x0
    stw r0, 0x19c(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x168
    stw r0, 0x1a0(r1)
    addi r5, r31, 0x14
    addi r6, r31, 0x8
    li r8, 0x0
    stw r0, 0x1a4(r1)
    li r9, 0x0
    stw r0, 0x1a8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8010F720_00001230
    lwz r3, 0x8c(r31)
    addi r4, r1, 0x178
    bl fn_8059A000
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8010F720_00001230:
    lwz r0, 0x2d4(r1)
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    psq_l f28, 0x298(r1), 0, 0
    lfd f28, 0x290(r1)
    psq_l f27, 0x288(r1), 0, 0
    lfd f27, 0x280(r1)
    psq_l f26, 0x278(r1), 0, 0
    lfd f26, 0x270(r1)
    lwz r31, 0x26c(r1)
    lwz r30, 0x268(r1)
    lwz r29, 0x264(r1)
    lwz r28, 0x260(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_8010FF74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f3, lbl_80881640
    stw r0, 0x24(r1)
    lfs f0, 0x94(r3)
    lwz r4, lbl_8087EFA8
    fcmpo cr0, f0, f3
    lfs f10, 0x3a4(r4)
    cror eq, gt, eq
    bne lbl_fn_8010FF74_000012D8
    fsubs f0, f0, f10
    stfs f0, 0x94(r3)
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8010FF74_0000139C
    lwz r12, 0x0(r3)
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_8010FF74_0000139C
lbl_fn_8010FF74_000012D8:
    lfs f3, 0x24(r3)
    lfs f0, 0x20(r3)
    fmuls f8, f3, f10
    lfs f4, 0x28(r3)
    fmuls f9, f0, f10
    lfs f3, 0x8(r3)
    lfs f0, 0xc(r3)
    fmuls f7, f4, f10
    lfs f2, 0x10(r3)
    fadds f6, f3, f9
    psq_l f1, 0x8(r3), 0, 0
    fadds f5, f0, f8
    fadds f4, f2, f7
    lfs f3, 0x80(r3)
    lfs f0, 0x78(r3)
    psq_st f1, 0x14(r3), 0, 0
    fmadds f0, f3, f10, f0
    lwz r4, 0x68(r3)
    stfs f2, 0x1c(r3)
    stfs f6, 0x8(r3)
    stfs f5, 0xc(r3)
    stfs f4, 0x10(r3)
    stfs f0, 0x78(r3)
    lbz r0, 0x2(r4)
    stfs f9, 0x8(r1)
    extsb r0, r0
    cmpwi r0, 0x1
    stfs f8, 0xc(r1)
    stfs f7, 0x10(r1)
    beq lbl_fn_8010FF74_00001358
    cmpwi r0, 0x5
    bne lbl_fn_8010FF74_00001398
lbl_fn_8010FF74_00001358:
    lwz r5, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lis r4, lbl_80736698@ha
    lwz r0, 0x30(r5)
    lfd f5, lbl_80736698@l(r4)
    mullw r0, r0, r0
    lfs f3, lbl_8088165C
    lfs f0, 0x24(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f4, 0x18(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x24(r3)
lbl_fn_8010FF74_00001398:
    bl fn_8010F4BC
lbl_fn_8010FF74_0000139C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801100A0(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stw r31, 0x18c(r1)
    mr r31, r3
    stw r30, 0x188(r1)
    stw r29, 0x184(r1)
    stw r28, 0x180(r1)
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    beq lbl_fn_801100A0_0000187C
    lwz r3, 0x68(r3)
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_801100A0_0000187C
    lwz r3, lbl_8087F9E8
    li r4, 0x0
    li r5, 0x0
    lis r6, 0x40
    bl fn_8059C5E0
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801100A0_0000187C
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801100A0_0000187C
    lwz r4, 0x88(r31)
    cmpwi r4, 0x0
    beq lbl_fn_801100A0_0000187C
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_801100A0_0000187C
    lfs f2, 0x1c(r31)
    addi r29, r1, 0xc0
    psq_l f1, 0x14(r31), 0, 0
    addi r4, r1, 0xcc
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f2
    addi r28, r1, 0xb0
    lfs f5, lbl_80881668
    stfs f2, 0xc8(r1)
    li r0, 0x0
    lfs f4, 0xc4(r1)
    lfs f2, 0x10(r31)
    addi r3, r1, 0x88
    psq_l f1, 0x8(r31), 0, 0
    frsp f0, f2
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd4(r1)
    fsubs f7, f3, f0
    lfs f0, 0xd0(r1)
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x18(r30)
    fsubs f8, f4, f0
    stfs f2, 0xb8(r1)
    lfs f3, 0xc0(r1)
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0xcc(r1)
    lfs f6, 0x5c(r30)
    lfs f4, 0x28(r30)
    fsubs f3, f3, f0
    fmuls f0, f6, f4
    stw r0, 0x15c(r1)
    stw r0, 0x160(r1)
    fmuls f0, f5, f0
    stw r0, 0x164(r1)
    stfs f0, 0xbc(r1)
    stw r0, 0x168(r1)
    stfs f3, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    bl fn_805F9920
    lfs f0, lbl_8088166C
    fcmpo cr0, f1, f0
    ble lbl_fn_801100A0_000017E0
    mr r4, r29
    mr r5, r28
    addi r3, r1, 0x128
    bl fn_8005361C
    cmpwi r3, 0x0
    beq lbl_fn_801100A0_000017E0
    lis r3, lbl_80736680@ha
    lwz r5, 0x88(r31)
    addi r3, r3, lbl_80736680@l
    lfs f1, lbl_80881670
    lwz r4, 0x10(r3)
    addi r5, r5, 0x528
    addi r3, r1, 0xc
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lfs f3, 0x140(r1)
    addi r3, r1, 0xa0
    lfs f0, 0xb8(r1)
    lfs f5, 0x13c(r1)
    fsubs f6, f3, f0
    lfs f4, 0xb4(r1)
    lfs f3, 0x138(r1)
    lfs f0, 0xb0(r1)
    fsubs f4, f5, f4
    stfs f6, 0xa8(r1)
    fsubs f0, f3, f0
    stfs f4, 0xa4(r1)
    stfs f0, 0xa0(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80881650
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801100A0_00001588
    addi r3, r1, 0xa0
    mr r4, r3
    bl fn_805F98D0
lbl_fn_801100A0_00001588:
    addi r3, r31, 0x20
    bl fn_805F9940
    addi r3, r1, 0xa0
    addi r4, r31, 0x20
    bl fn_805F9990
    lfs f0, 0xa8(r1)
    lfs f4, lbl_8088166C
    lfs f3, 0xa4(r1)
    fmuls f6, f0, f4
    lfs f0, 0xa0(r1)
    fmuls f7, f3, f4
    lfs f5, 0x28(r31)
    fmuls f8, f0, f4
    lfs f0, lbl_80881670
    fmuls f9, f6, f1
    lfs f3, 0x20(r31)
    fmuls f10, f7, f1
    lfs f4, 0x24(r31)
    fmuls f11, f8, f1
    stfs f8, 0x70(r1)
    fmuls f8, f5, f0
    stfs f7, 0x74(r1)
    fmuls f7, f4, f0
    stfs f6, 0x78(r1)
    fmuls f12, f3, f0
    fsubs f5, f5, f9
    fsubs f4, f4, f10
    stfs f11, 0x7c(r1)
    fsubs f6, f3, f11
    fadds f0, f5, f8
    stfs f10, 0x80(r1)
    fadds f3, f4, f7
    fadds f4, f6, f12
    stfs f9, 0x84(r1)
    stfs f12, 0x64(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_80680CF8
    lis r4, 0x4178
    lfs f3, lbl_80881640
    addi r4, r4, 0x749f
    lis r0, 0x4330
    mulhw r7, r4, r3
    lis r6, lbl_80736698@ha
    stw r0, 0x178(r1)
    addi r4, r1, 0x40
    lfs f0, lbl_80881648
    addi r5, r1, 0x4c
    srawi r0, r7, 8
    lfd f7, lbl_80736698@l(r6)
    srwi r6, r0, 31
    stfs f0, 0x44(r1)
    add r0, r0, r6
    lfs f6, lbl_80881678
    mulli r0, r0, 0x3e9
    lfs f5, lbl_80881674
    lfs f4, lbl_8088167C
    stfs f3, 0x40(r1)
    subf r0, r0, r3
    addi r3, r31, 0x20
    xoris r0, r0, 0x8000
    stw r0, 0x17c(r1)
    lfd f0, 0x178(r1)
    stfs f3, 0x48(r1)
    fsubs f0, f0, f7
    fdivs f0, f0, f6
    fmsubs f31, f5, f0, f4
    bl fn_805F99B0
    lfs f4, 0x54(r1)
    addi r3, r1, 0x94
    lfs f3, 0x50(r1)
    mr r4, r3
    fmuls f5, f4, f31
    lfs f0, 0x4c(r1)
    fmuls f6, f3, f31
    lfs f3, 0x98(r1)
    fmuls f7, f0, f31
    lfs f4, 0x94(r1)
    lfs f0, 0x9c(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x58(r1)
    fadds f0, f0, f5
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_805F98D0
    addi r3, r31, 0x20
    bl fn_805F9940
    lfs f4, 0x94(r1)
    lfs f3, 0x98(r1)
    lfs f0, 0x9c(r1)
    fmuls f4, f4, f1
    fmuls f3, f3, f1
    fmuls f2, f0, f1
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_801100A0_00001784
    addi r3, r1, 0x94
    addi r6, r1, 0x34
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r6), 0, 0
    addi r5, r1, 0x138
    stfs f2, 0x3c(r1)
    lwz r12, 0x0(r31)
    lwz r4, 0x8(r30)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_801100A0_00001A44
lbl_fn_801100A0_00001784:
    addi r3, r1, 0x94
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x28
    psq_st f1, 0x20(r31), 0, 0
    mr r3, r31
    stfs f2, 0x28(r31)
    lfs f4, 0x24(r31)
    lfs f3, 0x140(r1)
    lfs f5, 0x13c(r1)
    fadds f2, f3, f0
    lfs f3, 0x138(r1)
    lfs f0, 0x20(r31)
    fadds f4, f5, f4
    stfs f2, 0x30(r1)
    fadds f0, f3, f0
    stfs f4, 0x2c(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
    bl fn_8010F4BC
    b lbl_fn_801100A0_00001A44
lbl_fn_801100A0_000017E0:
    lfs f3, 0x10(r31)
    addi r3, r1, 0x1c
    lfs f0, 0xb8(r1)
    lfs f5, 0xc(r31)
    fsubs f6, f3, f0
    lfs f4, 0xb4(r1)
    lfs f3, 0x8(r31)
    lfs f0, 0xb0(r1)
    fsubs f4, f5, f4
    stfs f6, 0x24(r1)
    fsubs f0, f3, f0
    stfs f4, 0x20(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9920
    lfs f0, 0xbc(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_801100A0_0000187C
    lis r3, lbl_80736680@ha
    lwz r5, 0x88(r31)
    addi r3, r3, lbl_80736680@l
    lfs f1, lbl_80881670
    lwz r4, 0x10(r3)
    addi r3, r1, 0x8
    addi r5, r5, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_801100A0_00001A44
lbl_fn_801100A0_0000187C:
    lwz r3, 0x4(r31)
    li r7, 0x6
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801100A0_00001894
    oris r7, r7, 0x4000
lbl_fn_801100A0_00001894:
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_801100A0_000018A4
    oris r7, r7, 0x8000
lbl_fn_801100A0_000018A4:
    lwz r3, 0x88(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801100A0_000018DC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    bne lbl_fn_801100A0_000018DC
    lfs f3, lbl_80881680
    lfs f0, 0x80(r31)
    lfs f4, 0x78(r31)
    fmuls f0, f3, f0
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_801100A0_000018DC
    oris r7, r7, 0x4000
lbl_fn_801100A0_000018DC:
    li r0, 0x0
    stw r0, 0x10c(r1)
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x118(r1)
    lwz r3, 0x68(r31)
    lwz r4, 0x88(r31)
    lwz r0, 0xac(r3)
    addi r8, r4, 0x5b8
    rlwinm r3, r0, 0, 16, 16
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_801100A0_00001924
    lfs f3, 0x78(r31)
    lfs f0, 0x80(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_801100A0_00001924
    li r8, 0x0
lbl_fn_801100A0_00001924:
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801100A0_0000198C
    lfs f3, 0x10(r31)
    addi r4, r1, 0xd8
    lfs f0, 0x1c(r31)
    addi r5, r31, 0x14
    lfs f5, 0xc(r31)
    addi r6, r1, 0x10
    fsubs f6, f3, f0
    lfs f4, 0x18(r31)
    lfs f3, 0x8(r31)
    li r9, 0x0
    lfs f0, 0x14(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x14(r1)
    lwz r3, lbl_8087EE98
    stfs f0, 0x10(r1)
    stfs f6, 0x18(r1)
    lwz r10, 0x68(r31)
    lfs f1, 0x58(r10)
    bl fn_8004D388
    mr r29, r3
    b lbl_fn_801100A0_000019A8
lbl_fn_801100A0_0000198C:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xd8
    addi r5, r31, 0x14
    addi r6, r31, 0x8
    li r9, 0x0
    bl fn_8004ED34
    mr r29, r3
lbl_fn_801100A0_000019A8:
    cmpwi r29, 0x0
    beq lbl_fn_801100A0_000019E0
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_801100A0_000019E0
    lwz r3, 0x114(r1)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_801100A0_000019E0
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_801100A0_000019E0
    li r29, 0x0
lbl_fn_801100A0_000019E0:
    cmpwi r29, 0x0
    beq lbl_fn_801100A0_00001A30
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_801100A0_00001A30
    lwz r0, 0x114(r1)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801100A0_00001A30
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r4, 0x110(r1)
    lwz r12, 0x24(r12)
    lwz r28, 0xc(r4)
    mtctr r12
    bctrl
    cmplw r28, r3
    beq lbl_fn_801100A0_00001A30
    li r29, 0x0
lbl_fn_801100A0_00001A30:
    cmpwi r29, 0x0
    beq lbl_fn_801100A0_00001A44
    mr r3, r31
    addi r4, r1, 0xd8
    bl fn_80110858
lbl_fn_801100A0_00001A44:
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
