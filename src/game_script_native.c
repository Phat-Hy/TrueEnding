#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _savegpr_17(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800E8630(void);
extern void fn_800EB7A0(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80126214(void);
extern void fn_8013322C(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80144710(void);
extern void fn_801489CC(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_8015DEC0(void);
extern void fn_8015E4B0(void);
extern void fn_801656A4(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023A02C(void);
extern void fn_8023A8B4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80743AF4[];
extern u8 lbl_807C8300[];
extern u8 lbl_807C830C[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F3D8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80883338;
extern u32 lbl_8088333C;
extern u32 lbl_80883350;
extern u32 lbl_80883358;
extern u32 lbl_8088335C;
extern u32 lbl_80883360;
extern u32 lbl_80883364;
extern u32 lbl_80883368;
extern u32 lbl_8088336C;
extern u32 lbl_80883374;
extern u32 lbl_80883378;
extern u32 lbl_8088337C;
extern u32 lbl_80883380;
extern u32 lbl_80883384;
extern u32 lbl_80883388;
extern u32 lbl_8088338C;
extern u32 lbl_80883390;
extern u32 lbl_80883394;
extern u32 lbl_80883398;
extern u32 lbl_8088339C;
extern u32 lbl_808833A0;
extern u32 lbl_808833A4;

/* Function declarations */
void fn_802529CC(void);
void fn_80252A84(void);
void fn_80252A90(void);
void fn_80252C40(void);
void fn_80252E48(void);
void fn_80252E6C(void);
void fn_802531F4(void);
void fn_80253684(void);
void fn_80253884(void);
void fn_80253C9C(void);
void fn_80253F00(void);

asm void fn_802529CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_801489CC
    lwz r0, 0x624(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802529CC_000000A4
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802529CC_00000098
    lwz r5, 0x62c(r31)
    lis r3, lbl_807C8300@ha
    lfs f0, lbl_80883374
    addi r4, r3, lbl_807C8300@l
    stfs f0, 0x10(r5)
    lfs f2, lbl_80883378
    lfs f0, lbl_807C8300@l(r3)
    lwz r3, 0x62c(r31)
    fmuls f4, f0, f2
    lfs f3, 0x8(r4)
    lfs f0, 0x4(r3)
    lfs f1, 0x4(r4)
    fmuls f3, f3, f2
    fadds f0, f0, f4
    fmuls f1, f1, f2
    stfs f4, 0x8(r1)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r3)
    stfs f1, 0xc(r1)
    fadds f0, f0, f1
    stfs f3, 0x10(r1)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r3)
    fadds f0, f0, f3
    stfs f0, 0xc(r3)
    b lbl_fn_802529CC_000000A4
lbl_fn_802529CC_00000098:
    lwz r3, 0x62c(r31)
    lfs f0, lbl_80883374
    stfs f0, 0x10(r3)
lbl_fn_802529CC_000000A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80252A84(void)
{
    nofralloc
    li r0, 0x0
    stw r0, lbl_8087F3D8
    b fn_80149A30
}

asm void fn_80252A90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80252A90_0000021C
    lwz r5, 0x0(r4)
    lwz r0, 0x1504(r3)
    cmplw r5, r0
    bne lbl_fn_80252A90_00000254
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xb
    beq lbl_fn_80252A90_00000120
    cmpwi r0, 0xa
    beq lbl_fn_80252A90_00000120
    cmpwi r0, 0x6
    bne lbl_fn_80252A90_00000190
lbl_fn_80252A90_00000120:
    addi r3, r4, 0x10
    bl fn_805F9920
    lfs f0, lbl_80883360
    fcmpo cr0, f1, f0
    ble lbl_fn_80252A90_00000140
    addi r3, r29, 0x10
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80252A90_00000140:
    lfs f2, 0x10(r29)
    li r4, 0xe9
    lfs f3, lbl_8088337C
    lfs f1, 0x14(r29)
    lfs f0, 0x18(r29)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r29)
    stfs f1, 0x14(r29)
    stfs f0, 0x18(r29)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80252A90_00000230
    lwz r3, lbl_8087F430
    li r4, 0xe9
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80252A90_00000230
lbl_fn_80252A90_00000190:
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80252A90_00000230
    lwz r0, 0x4(r4)
    cmpwi r0, 0xc8
    bne lbl_fn_80252A90_00000204
    li r30, 0x0
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    li r31, 0x1
    mr r3, r28
    addi r4, r29, 0x10
    stw r31, 0x58c(r28)
    bl fn_8015DEC0
    lwz r3, 0xf80(r28)
    li r4, 0x1
    stw r31, 0x1c(r3)
    lwz r3, 0x0(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r30, 0x90(r29)
    stw r0, 0x84(r29)
    b lbl_fn_80252A90_00000254
lbl_fn_80252A90_00000204:
    cmpwi r0, 0xd0
    beq lbl_fn_80252A90_00000230
    cmpwi r0, 0x2710
    beq lbl_fn_80252A90_00000230
    b lbl_fn_80252A90_00000254
    b lbl_fn_80252A90_00000254
lbl_fn_80252A90_0000021C:
    cmpwi r0, 0x2
    bne lbl_fn_80252A90_00000230
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x8
    beq lbl_fn_80252A90_00000254
lbl_fn_80252A90_00000230:
    mr r3, r28
    mr r4, r29
    bl fn_80151448
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80252A90_00000254:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80252C40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80252C40_000002D0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80252C40_000002D0
    lwz r4, 0x560(r3)
    subi r0, r4, 0x14
    cmplwi r0, 0x3
    bgt lbl_fn_80252C40_000002D0
    li r0, 0x0
    li r4, 0xa
    stw r4, 0x58c(r3)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
lbl_fn_80252C40_000002D0:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80252C40_00000364
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80252C40_00000304
    lfs f0, lbl_80883358
    addi r3, r31, 0x7d4
    stfs f0, 0x7d8(r31)
    li r4, 0x20
    bl fn_8013322C
    b lbl_fn_80252C40_00000468
lbl_fn_80252C40_00000304:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80883358
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x58c(r31)
    lfs f1, lbl_8088333C
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_8088335C
    li r5, 0x14a
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    bl fn_800EB7A0
    b lbl_fn_80252C40_00000468
lbl_fn_80252C40_00000364:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80252C40_00000468
    lwz r7, 0x560(r31)
    subi r0, r7, 0x14
    cmplwi r0, 0x3
    bgt lbl_fn_80252C40_00000468
    lwz r3, 0x1520(r31)
    lwz r0, 0x1524(r31)
    addi r3, r3, 0x1
    stw r3, 0x1520(r31)
    cmpw r3, r0
    blt lbl_fn_80252C40_00000468
    lha r0, 0x1470(r31)
    cmpwi r0, 0xe
    beq lbl_fn_80252C40_00000468
    lfs f2, lbl_8088333C
    li r3, 0x0
    stfs f2, 0x14(r1)
    li r4, 0xe
    addi r6, r1, 0x14
    li r0, 0x96
    stfs f2, 0x18(r1)
    addi r5, r31, 0x147c
    cmpwi r7, 0x17
    psq_l f1, 0x0(r6), 0, 0
    sth r4, 0x8(r1)
    sth r3, 0xa(r1)
    stw r3, 0xc(r1)
    stw r0, 0x10(r1)
    stfs f2, 0x1c(r1)
    stw r3, 0x20(r1)
    sth r4, 0x1470(r31)
    sth r3, 0x1472(r31)
    stw r3, 0x1474(r31)
    stw r0, 0x1478(r31)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1484(r31)
    stw r3, 0x1488(r31)
    beq lbl_fn_80252C40_00000468
    addi r3, r31, 0x6b8
    bl fn_805F9940
    lfs f0, lbl_80883380
    fcmpo cr0, f1, f0
    ble lbl_fn_80252C40_00000468
    addi r3, r31, 0x6b8
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x6b8(r31)
    mr r3, r31
    lfs f5, lbl_80883374
    addi r4, r31, 0x6b8
    lfs f3, 0x6bc(r31)
    li r5, -0x1
    lfs f0, 0x6c0(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    lwz r0, 0x12a4(r31)
    fmuls f0, f0, f5
    stfs f4, 0x6b8(r31)
    rlwinm r0, r0, 0, 27, 25
    stfs f3, 0x6bc(r31)
    stfs f0, 0x6c0(r31)
    stw r0, 0x12a4(r31)
    bl fn_8015E4B0
lbl_fn_80252C40_00000468:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80252E48(void)
{
    nofralloc
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80252E48_0000049C
    lfs f0, lbl_80883358
    li r4, 0x20
    stfs f0, 0x7d8(r3)
    addi r3, r3, 0x7d4
    b fn_8013322C
lbl_fn_80252E48_0000049C:
    b fn_800E8630
}

asm void fn_80252E6C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80252E6C_000007E4
    lwz r0, 0x1548(r3)
    lwz r4, 0x14c0(r3)
    cmpwi r0, 0x0
    subi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    bne lbl_fn_80252E6C_00000724
    cmpwi r0, 0x0
    bge lbl_fn_80252E6C_00000724
    lwz r0, 0x1518(r3)
    li r4, 0xf0
    li r30, 0x1
    stw r4, 0x14c0(r3)
    cmpwi r0, 0x0
    stw r30, 0x14c4(r3)
    beq lbl_fn_80252E6C_00000570
    li r0, 0x0
    stw r0, 0x1514(r3)
    stw r0, 0x1518(r3)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883358
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_8088333C
    li r5, 0x140
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_8088335C
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80883384
    stfs f0, 0x2e8(r31)
    b lbl_fn_80252E6C_00000810
lbl_fn_80252E6C_00000570:
    lwz r4, 0xd1c(r3)
    lfs f1, lbl_80883388
    cmpwi r4, 0x0
    beq lbl_fn_80252E6C_000005B0
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f1, 0x528(r3)
    addi r3, r1, 0x38
    lfs f2, 0x528(r4)
    fsubs f3, f3, f0
    lfs f0, lbl_8088333C
    fsubs f1, f2, f1
    stfs f3, 0x40(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_805F9940
lbl_fn_80252E6C_000005B0:
    lfs f0, lbl_8088338C
    fcmpo cr0, f1, f0
    bge lbl_fn_80252E6C_00000618
    li r0, 0x0
    stw r0, 0x14b4(r31)
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883358
    li r4, 0x5
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_8088333C
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_8088335C
    li r5, 0x145
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80252E6C_00000810
lbl_fn_80252E6C_00000618:
    li r0, 0x0
    stw r0, 0x14b4(r31)
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883358
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_8088333C
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_8088335C
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80252E6C_00000810
    mr r3, r31
    li r4, 0x64
    bl fn_80232B7C
    lwz r3, 0x14fc(r31)
    li r0, -0x1
    lfs f0, lbl_8088333C
    addi r4, r31, 0x14e0
    lfs f1, lbl_80883358
    addi r5, r3, 0xb0
    stfs f0, 0x20(r1)
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    stfs f0, 0x24(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x10
    bl fn_8023A02C
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x8
    bl fn_8023A02C
    b lbl_fn_80252E6C_00000810
lbl_fn_80252E6C_00000724:
    lwz r0, 0x1540(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80252E6C_00000810
    lwz r0, 0x1544(r3)
    cmpwi r0, 0x1e
    ble lbl_fn_80252E6C_00000810
    li r30, 0x0
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883358
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_8088333C
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14b
    lfs f2, lbl_8088335C
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1540(r31)
    li r0, 0x3c
    stw r30, 0x1544(r31)
    cmpwi r3, 0x3c
    bge lbl_fn_80252E6C_000007B8
    mr r0, r3
lbl_fn_80252E6C_000007B8:
    stw r0, 0x1540(r31)
    li r4, 0xe7
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80252E6C_00000810
    lwz r3, lbl_8087F430
    li r4, 0xe7
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80252E6C_00000810
lbl_fn_80252E6C_000007E4:
    li r30, 0x0
    stw r30, 0x14c4(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_80252E6C_00000810:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802531F4(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    stw r30, 0x178(r1)
    stw r29, 0x174(r1)
    mr r29, r3
    lwz r0, 0x55c(r3)
    cmpwi cr1, r0, 0x6
    bne cr1, lbl_fn_802531F4_00000BD8
    psq_l f1, 0x534(r3), 0, 0
    cmpwi r0, 0x7
    lfs f2, 0x53c(r3)
    addi r4, r1, 0x40
    stfs f2, 0x48(r1)
    lfs f31, lbl_8088333C
    psq_st f1, 0x0(r4), 0, 0
    bne lbl_fn_802531F4_00000A9C
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0x4c
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0x54(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80883360
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802531F4_00000AA8
    addi r30, r1, 0x64
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x54(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x6c(r1)
    bl fn_805F98D0
    lfs f2, 0x6c(r1)
    addi r31, r1, 0x58
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883364
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x60(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802531F4_0000092C
    lfs f3, 0x58(r1)
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    ble lbl_fn_802531F4_00000920
    lfs f0, lbl_80883368
    b lbl_fn_802531F4_00000924
lbl_fn_802531F4_00000920:
    lfs f0, lbl_8088336C
lbl_fn_802531F4_00000924:
    stfs f0, 0x74(r1)
    b lbl_fn_802531F4_00000940
lbl_fn_802531F4_0000092C:
    frsp f2, f2
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x74(r1)
lbl_fn_802531F4_00000940:
    lfs f0, 0x74(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088333C
    addi r4, r1, 0x7c
    lfs f4, 0x140(r1)
    mr r5, r4
    lfs f5, 0x13c(r1)
    addi r3, r1, 0xf8
    lfs f6, 0x138(r1)
    lfs f7, 0x150(r1)
    lfs f8, 0x14c(r1)
    lfs f9, 0x148(r1)
    lfs f10, 0x160(r1)
    lfs f11, 0x15c(r1)
    lfs f12, 0x158(r1)
    lfs f13, 0x164(r1)
    lfs f30, 0x154(r1)
    lfs f29, 0x144(r1)
    lfs f0, lbl_80883358
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x60(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f6, 0xac(r1)
    stfs f5, 0xb0(r1)
    stfs f4, 0xb4(r1)
    stfs f6, 0xf8(r1)
    stfs f5, 0xfc(r1)
    stfs f4, 0x100(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f9, 0x108(r1)
    stfs f8, 0x10c(r1)
    stfs f7, 0x110(r1)
    stfs f12, 0x94(r1)
    stfs f11, 0x98(r1)
    stfs f10, 0x9c(r1)
    stfs f12, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f10, 0x120(r1)
    stfs f29, 0x88(r1)
    stfs f30, 0x8c(r1)
    stfs f13, 0x90(r1)
    stfs f29, 0x104(r1)
    stfs f30, 0x114(r1)
    stfs f13, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x84(r1)
    bl fn_805F9750
    lfs f2, 0x84(r1)
    lfs f0, lbl_80883364
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802531F4_00000A5C
    lfs f3, 0x80(r1)
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    ble lbl_fn_802531F4_00000A4C
    lfs f0, lbl_80883368
    b lbl_fn_802531F4_00000A50
lbl_fn_802531F4_00000A4C:
    lfs f0, lbl_8088336C
lbl_fn_802531F4_00000A50:
    fneg f0, f0
    stfs f0, 0x70(r1)
    b lbl_fn_802531F4_00000A70
lbl_fn_802531F4_00000A5C:
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x70(r1)
lbl_fn_802531F4_00000A70:
    lfs f2, lbl_8088333C
    addi r3, r1, 0x70
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x40
    stfs f2, 0x78(r1)
    stfs f2, 0x60(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x48(r1)
    b lbl_fn_802531F4_00000AA8
lbl_fn_802531F4_00000A9C:
    bne cr1, lbl_fn_802531F4_00000AA8
    bl fn_8013A258
    b lbl_fn_802531F4_00000AC0
lbl_fn_802531F4_00000AA8:
    fmr f1, f31
    lfs f2, 0x568(r29)
    mr r3, r29
    addi r4, r1, 0x40
    li r5, 0x1
    bl fn_8013CB68
lbl_fn_802531F4_00000AC0:
    lwz r0, 0x560(r29)
    cmpwi r0, 0x7e
    bne lbl_fn_802531F4_00000C84
    lfs f4, 0x2e4(r29)
    lfs f3, lbl_80883390
    lfs f0, lbl_80883364
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802531F4_00000B80
    lfs f0, lbl_8088333C
    li r11, -0x1
    lfs f1, lbl_80883358
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r29, 0x14c8
    lwz r3, lbl_8087F3C0
    addi r5, r29, 0xb0
    stfs f0, 0x24(r1)
    addi r7, r1, 0x14
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    stfs f0, 0x28(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lis r4, lbl_80743AF4@ha
    lfs f1, lbl_80883358
    addi r4, r4, lbl_80743AF4@l
    addi r3, r1, 0x10
    addi r4, r4, 0xe4
    addi r5, r29, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802531F4_00000B80:
    lfs f4, 0x2e4(r29)
    lfs f3, lbl_80883394
    lfs f0, lbl_80883364
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802531F4_00000C84
    lwz r3, 0x152c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_802531F4_00000BBC
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r29)
    psq_st f1, 0x528(r29), 0, 0
lbl_fn_802531F4_00000BBC:
    li r0, 0x2
    stw r0, 0x14bc(r29)
    li r4, 0x1
    li r4, 0x0
    mr r3, r29
    bl fn_8016E4C4
    b lbl_fn_802531F4_00000C84
lbl_fn_802531F4_00000BD8:
    li r4, 0x3
    bl fn_8016E970
    lwz r6, 0x1504(r29)
    cmpwi r6, 0x0
    beq lbl_fn_802531F4_00000C84
    psq_l f1, 0x528(r6), 0, 0
    lis r5, lbl_807C830C@ha
    lfs f2, 0x530(r6)
    addi r5, r5, lbl_807C830C@l
    stfs f2, 0x530(r29)
    addi r3, r1, 0xc8
    lfs f5, lbl_80883350
    li r4, 0x79
    psq_st f1, 0x528(r29), 0, 0
    lfs f3, lbl_8088333C
    lfs f4, 0x8(r5)
    lfs f0, lbl_80883358
    fmsubs f4, f5, f4, f2
    stfs f4, 0x530(r29)
    stfs f3, 0xb8(r1)
    stfs f3, 0xbc(r1)
    stfs f0, 0xc0(r1)
    lfs f1, 0x538(r6)
    bl fn_805F8E70
    addi r4, r1, 0xb8
    addi r3, r1, 0xc8
    mr r5, r4
    bl fn_805F93C0
    lis r4, lbl_807C8300@ha
    addi r3, r1, 0xb8
    addi r4, r4, lbl_807C8300@l
    bl fn_805F9990
    lfs f0, lbl_80883338
    fmuls f1, f0, f1
    bl fn_8068AE9C
    lfs f3, 0xb8(r1)
    frsp f4, f1
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    bge lbl_fn_802531F4_00000C80
    lfs f0, lbl_80883338
    fmuls f4, f4, f0
lbl_fn_802531F4_00000C80:
    stfs f4, 0x538(r29)
lbl_fn_802531F4_00000C84:
    lwz r0, 0x1b4(r1)
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_80253684(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80253684_00000DAC
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_80253684_00000D98
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_80253684_00000E9C
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_8088333C
    li r3, -0x1
    lfs f1, lbl_80883358
    li r0, 0x1
    stfs f0, 0x4c(r1)
    addi r4, r31, 0x14d4
    addi r5, r31, 0xb0
    addi r7, r1, 0x40
    stfs f0, 0x50(r1)
    addi r8, r1, 0x4c
    addi r9, r1, 0x58
    li r6, 0x0
    stfs f0, 0x54(r1)
    li r10, -0x1
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80253684_00000E9C
lbl_fn_80253684_00000D98:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    b lbl_fn_80253684_00000E9C
lbl_fn_80253684_00000DAC:
    lfs f2, 0x2e4(r31)
    li r0, 0x1e
    lfs f1, lbl_8088338C
    lfs f0, lbl_80883364
    fsubs f1, f2, f1
    stw r0, 0x1434(r31)
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80253684_00000E68
    lfs f0, lbl_8088333C
    li r3, -0x1
    lfs f1, lbl_80883358
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x14c8
    addi r5, r31, 0xb0
    addi r7, r1, 0x14
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_80743AF4@ha
    lfs f1, lbl_80883358
    addi r4, r4, lbl_80743AF4@l
    addi r3, r1, 0x10
    addi r4, r4, 0xe4
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80253684_00000E68:
    lfs f2, 0x2e4(r31)
    lfs f1, lbl_80883398
    lfs f0, lbl_80883364
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80253684_00000E9C
    li r0, 0x3
    stw r0, 0x14bc(r31)
    li r4, 0x1
    mr r3, r31
    bl fn_8016E4C4
lbl_fn_80253684_00000E9C:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80253884(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r4, r1, 0x80
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    lfs f2, 0x53c(r3)
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_80253884_00000FC8
    lwz r3, 0x560(r31)
    cmpwi r3, 0xa
    bne lbl_fn_80253884_00000F84
    li r0, 0x0
    stw r0, 0x14b4(r31)
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80883358
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_8088333C
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x140
    lfs f2, lbl_8088335C
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80883384
    stfs f0, 0x2e8(r31)
    b lbl_fn_80253884_0000129C
lbl_fn_80253884_00000F84:
    subi r0, r3, 0x15
    cmplwi r0, 0x1
    bgt lbl_fn_80253884_00000F9C
    li r0, 0xa
    stw r0, 0x58c(r31)
    b lbl_fn_80253884_0000129C
lbl_fn_80253884_00000F9C:
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_80253884_0000129C
lbl_fn_80253884_00000FC8:
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0x8
    lfs f2, 0x53c(r31)
    stfs f2, 0x10(r1)
    lfs f31, lbl_8088333C
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_80253884_00001200
    addi r3, r31, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    addi r30, r1, 0x14
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r30
    lfs f2, 0x1090(r31)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80883360
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80253884_00001214
    addi r29, r1, 0x2c
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    mr r3, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r29
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    lfs f2, 0x34(r1)
    addi r30, r1, 0x20
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883364
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x28(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80253884_00001090
    lfs f3, 0x20(r1)
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    ble lbl_fn_80253884_00001084
    lfs f0, lbl_80883368
    b lbl_fn_80253884_00001088
lbl_fn_80253884_00001084:
    lfs f0, lbl_8088336C
lbl_fn_80253884_00001088:
    stfs f0, 0x3c(r1)
    b lbl_fn_80253884_000010A4
lbl_fn_80253884_00001090:
    frsp f2, f2
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3c(r1)
lbl_fn_80253884_000010A4:
    lfs f0, 0x3c(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088333C
    addi r4, r1, 0x44
    lfs f4, 0xd8(r1)
    mr r5, r4
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x90
    lfs f6, 0xd0(r1)
    lfs f7, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f9, 0xe0(r1)
    lfs f10, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f12, 0xf0(r1)
    lfs f13, 0xfc(r1)
    lfs f30, 0xec(r1)
    lfs f29, 0xdc(r1)
    lfs f0, lbl_80883358
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f29, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f29, 0x9c(r1)
    stfs f30, 0xac(r1)
    stfs f13, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80883364
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80253884_000011C0
    lfs f3, 0x48(r1)
    lfs f0, lbl_8088333C
    fcmpo cr0, f3, f0
    ble lbl_fn_80253884_000011B0
    lfs f0, lbl_80883368
    b lbl_fn_80253884_000011B4
lbl_fn_80253884_000011B0:
    lfs f0, lbl_8088336C
lbl_fn_80253884_000011B4:
    fneg f0, f0
    stfs f0, 0x38(r1)
    b lbl_fn_80253884_000011D4
lbl_fn_80253884_000011C0:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x38(r1)
lbl_fn_80253884_000011D4:
    lfs f2, lbl_8088333C
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x8
    stfs f2, 0x40(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    b lbl_fn_80253884_00001214
lbl_fn_80253884_00001200:
    cmpwi r0, 0x6
    bne lbl_fn_80253884_00001214
    mr r3, r31
    bl fn_8013A258
    b lbl_fn_80253884_0000122C
lbl_fn_80253884_00001214:
    fmr f1, f31
    lfs f2, 0x568(r31)
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x1
    bl fn_8013CB68
lbl_fn_80253884_0000122C:
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80253884_0000129C
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_80253884_0000129C
    mr r3, r31
    bl fn_80144710
    lwz r0, 0x560(r31)
    cmpwi r0, 0xa
    bne lbl_fn_80253884_0000126C
    li r3, 0xe5
    bl fn_80219E6C
    mr r7, r3
    b lbl_fn_80253884_00001278
lbl_fn_80253884_0000126C:
    li r3, 0xc8
    bl fn_80219E6C
    mr r7, r3
lbl_fn_80253884_00001278:
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r8, 0x590(r31)
    li r4, 0x0
    lfs f1, lbl_8088333C
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80253884_0000129C:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_80253C9C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80253C9C_0000150C
    li r0, 0x0
    stw r0, 0x20(r1)
    lwz r3, lbl_8087F8A0
    lwz r7, 0x48(r3)
    b lbl_fn_80253C9C_0000143C
lbl_fn_80253C9C_00001328:
    lwz r0, 0x48(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80253C9C_00001438
    lwz r6, 0x38(r7)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_80253C9C_00001360
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_80253C9C_00001360
    li r3, 0x1
lbl_fn_80253C9C_00001360:
    cmpwi r3, 0x0
    beq lbl_fn_80253C9C_0000137C
    lwz r3, 0x7e0(r7)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_80253C9C_0000137C
    li r0, 0x1
lbl_fn_80253C9C_0000137C:
    cmpwi r0, 0x0
    beq lbl_fn_80253C9C_000013B0
    lwz r0, 0x55c(r7)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80253C9C_000013A4
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_80253C9C_000013A4
    li r3, 0x1
lbl_fn_80253C9C_000013A4:
    cmpwi r3, 0x0
    bne lbl_fn_80253C9C_000013B0
    li r4, 0x1
lbl_fn_80253C9C_000013B0:
    cmpwi r4, 0x0
    beq lbl_fn_80253C9C_00001438
    lwz r0, 0x55c(r7)
    cmpwi r0, 0x6
    bne lbl_fn_80253C9C_00001404
    lwz r0, 0x560(r7)
    li r3, 0x0
    cmpwi r0, 0x4
    beq lbl_fn_80253C9C_000013F4
    cmpwi r0, 0x1d
    beq lbl_fn_80253C9C_000013F4
    cmpwi r0, 0x2
    beq lbl_fn_80253C9C_000013F4
    cmpwi r0, 0x14
    beq lbl_fn_80253C9C_000013F4
    cmpwi r0, 0x16
    bne lbl_fn_80253C9C_000013F8
lbl_fn_80253C9C_000013F4:
    li r3, 0x1
lbl_fn_80253C9C_000013F8:
    cmpwi r3, 0x0
    bne lbl_fn_80253C9C_00001438
    b lbl_fn_80253C9C_0000140C
lbl_fn_80253C9C_00001404:
    cmpwi r0, 0x2
    bne lbl_fn_80253C9C_00001438
lbl_fn_80253C9C_0000140C:
    lwz r0, 0x20(r1)
    cmplwi r0, 0x8
    bge lbl_fn_80253C9C_00001438
    slwi r0, r0, 2
    addi r3, r1, 0x24
    add. r3, r3, r0
    beq lbl_fn_80253C9C_0000142C
    stw r7, 0x0(r3)
lbl_fn_80253C9C_0000142C:
    lwz r3, 0x20(r1)
    addi r0, r3, 0x1
    stw r0, 0x20(r1)
lbl_fn_80253C9C_00001438:
    lwz r7, 0x14ac(r7)
lbl_fn_80253C9C_0000143C:
    cmpwi r7, 0x0
    bne lbl_fn_80253C9C_00001328
    lwz r0, 0x20(r1)
    lwz r28, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80253C9C_000014E0
    bl fn_80680CF8
    divwu r0, r3, r28
    addi r5, r1, 0x24
    addi r30, r1, 0x14
    addi r29, r1, 0x8
    li r4, 0x5a
    mullw r0, r0, r28
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r3, r5, r0
    lfs f2, 0x530(r3)
    stfs f2, 0x1c(r1)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x53c(r3)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x534(r3), 0, 0
    stfs f2, 0x10(r1)
    lfs f2, 0x530(r31)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lfs f2, 0x53c(r31)
    psq_l f1, 0x534(r31), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    bl fn_801656A4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x530(r31)
    lfs f2, 0x10(r1)
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_80253C9C_000014E0:
    li r30, 0x0
    stw r30, 0x1520(r31)
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
lbl_fn_80253C9C_0000150C:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80253F00(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x130
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    bl _savegpr_17
    li r0, 0x10
    mr r18, r3
    lwz r7, 0x4(r3)
    li r17, 0x0
    lwz r6, lbl_8087F9E8
    li r20, 0x0
    li r9, 0x0
    li r3, 0x0
    mtctr r0
lbl_fn_80253F00_0000158C:
    cmplwi r9, 0x20
    blt lbl_fn_80253F00_0000159C
    li r4, 0x0
    b lbl_fn_80253F00_000015A4
lbl_fn_80253F00_0000159C:
    add r4, r6, r3
    addi r4, r4, 0x48
lbl_fn_80253F00_000015A4:
    lwz r8, 0x4(r4)
    li r5, 0x0
    cmpwi r8, 0x0
    beq lbl_fn_80253F00_000015C4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x3
    beq lbl_fn_80253F00_000015C4
    li r5, 0x1
lbl_fn_80253F00_000015C4:
    cmpwi r5, 0x0
    beq lbl_fn_80253F00_000015F4
    lwz r0, 0x8(r4)
    cmplw r0, r7
    bne lbl_fn_80253F00_000015F4
    cmpwi r8, 0x0
    beq lbl_fn_80253F00_000015F4
    lbz r0, 0x1(r8)
    cmpwi r0, 0x5
    bne lbl_fn_80253F00_000015F4
    mr r20, r4
    b lbl_fn_80253F00_00001670
lbl_fn_80253F00_000015F4:
    addi r9, r9, 0x1
    addi r3, r3, 0x140
    cmplwi r9, 0x20
    blt lbl_fn_80253F00_0000160C
    li r4, 0x0
    b lbl_fn_80253F00_00001614
lbl_fn_80253F00_0000160C:
    add r4, r6, r3
    addi r4, r4, 0x48
lbl_fn_80253F00_00001614:
    lwz r8, 0x4(r4)
    li r5, 0x0
    cmpwi r8, 0x0
    beq lbl_fn_80253F00_00001634
    lwz r0, 0x0(r4)
    cmpwi r0, 0x3
    beq lbl_fn_80253F00_00001634
    li r5, 0x1
lbl_fn_80253F00_00001634:
    cmpwi r5, 0x0
    beq lbl_fn_80253F00_00001664
    lwz r0, 0x8(r4)
    cmplw r0, r7
    bne lbl_fn_80253F00_00001664
    cmpwi r8, 0x0
    beq lbl_fn_80253F00_00001664
    lbz r0, 0x1(r8)
    cmpwi r0, 0x5
    bne lbl_fn_80253F00_00001664
    mr r20, r4
    b lbl_fn_80253F00_00001670
lbl_fn_80253F00_00001664:
    addi r9, r9, 0x1
    addi r3, r3, 0x140
    bdnz lbl_fn_80253F00_0000158C
lbl_fn_80253F00_00001670:
    cmpwi r20, 0x0
    bne lbl_fn_80253F00_0000167C
    li r17, 0x1
lbl_fn_80253F00_0000167C:
    cmpwi r20, 0x0
    beq lbl_fn_80253F00_00001AD0
    lfs f3, 0x2e4(r7)
    lfs f0, lbl_808833A4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80253F00_00001AD0
    lwz r3, lbl_8087F408
    addi r23, r1, 0x44
    lfs f30, lbl_8088333C
    addi r24, r1, 0x38
    lwz r19, 0x48(r3)
    addi r26, r1, 0x2c
    lfs f31, lbl_8088339C
    addi r27, r1, 0x84
    lfs f28, lbl_808833A0
    addi r25, r1, 0x9c
    lfs f29, lbl_80883374
    addi r22, r1, 0xa8
    addi r21, r1, 0x68
    li r28, 0x1
    li r29, 0x0
    li r30, 0x96
    lis r31, 0x6666
    b lbl_fn_80253F00_00001AC4
lbl_fn_80253F00_000016E0:
    lwz r0, 0x4(r18)
    cmplw r19, r0
    beq lbl_fn_80253F00_00001AC0
    lwz r6, 0x38(r19)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80253F00_00001718
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80253F00_00001718
    li r5, 0x1
lbl_fn_80253F00_00001718:
    cmpwi r5, 0x0
    beq lbl_fn_80253F00_00001734
    lwz r0, 0x7e0(r19)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80253F00_00001734
    li r3, 0x1
lbl_fn_80253F00_00001734:
    cmpwi r3, 0x0
    beq lbl_fn_80253F00_00001768
    lwz r0, 0x55c(r19)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80253F00_0000175C
    lwz r0, 0x560(r19)
    cmpwi r0, 0x1c
    bne lbl_fn_80253F00_0000175C
    li r3, 0x1
lbl_fn_80253F00_0000175C:
    cmpwi r3, 0x0
    bne lbl_fn_80253F00_00001768
    li r4, 0x1
lbl_fn_80253F00_00001768:
    cmpwi r4, 0x0
    beq lbl_fn_80253F00_00001AC0
    lwz r0, 0x54c(r19)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80253F00_00001AC0
    lfs f5, 0x530(r19)
    addi r3, r1, 0x50
    lfs f4, 0x18(r20)
    lfs f3, 0x528(r19)
    lfs f0, 0x10(r20)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x58(r1)
    stfs f0, 0x50(r1)
    stfs f30, 0x54(r1)
    bl fn_805F9940
    lfs f3, 0x5c(r20)
    lfs f0, 0x28(r20)
    fmuls f0, f3, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_80253F00_00001A40
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
    sth r28, 0x78(r1)
    sth r29, 0x7a(r1)
    stw r30, 0x80(r1)
    stfs f30, 0x84(r1)
    stfs f30, 0x88(r1)
    stw r29, 0x90(r1)
    bl fn_80680CF8
    lfs f3, 0x5c(r20)
    addi r0, r31, 0x6667
    lfs f0, 0x28(r20)
    mulhw r0, r0, r3
    lfs f5, 0x58(r1)
    fmuls f7, f3, f0
    lfs f3, 0x54(r1)
    lfs f0, 0x50(r1)
    lfs f4, 0x18(r20)
    fmuls f6, f3, f7
    srawi r0, r0, 2
    fmuls f5, f5, f7
    srwi r4, r0, 31
    fmuls f7, f0, f7
    lfs f3, 0x14(r20)
    fmuls f8, f5, f31
    lfs f0, 0x10(r20)
    fmuls f9, f6, f31
    add r0, r0, r4
    fmuls f10, f7, f31
    mulli r0, r0, 0xa
    fadds f4, f4, f8
    stfs f7, 0x14(r1)
    fadds f3, f3, f9
    subf r0, r0, r3
    fadds f0, f0, f10
    stw r0, 0x7c(r1)
    fmr f2, f4
    stfs f0, 0x2c(r1)
    lwz r17, lbl_8087EE98
    mr r3, r19
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x10(r20), 0, 0
    stfs f2, 0x8c(r1)
    lfs f2, 0x18(r20)
    stfs f2, 0x4c(r1)
    lfs f2, 0x8c(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    lfs f3, 0x48(r1)
    lfs f0, 0x3c(r1)
    fadds f3, f3, f28
    stfs f6, 0x18(r1)
    fadds f0, f0, f28
    stfs f5, 0x1c(r1)
    stfs f10, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f4, 0x34(r1)
    stfs f2, 0x40(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x3c(r1)
    stw r29, 0xcc(r1)
    stw r29, 0xd0(r1)
    stw r29, 0xd4(r1)
    stw r29, 0xd8(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r17
    mr r5, r23
    mr r6, r24
    addi r4, r1, 0x98
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80253F00_00001910
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0xa4(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x8c(r1)
lbl_fn_80253F00_00001910:
    psq_l f1, 0x0(r27), 0, 0
    mr r3, r19
    psq_st f1, 0x0(r23), 0, 0
    lfs f2, 0x8c(r1)
    psq_st f1, 0x0(r24), 0, 0
    lfs f3, 0x48(r1)
    lfs f0, 0x3c(r1)
    fadds f3, f3, f28
    stfs f2, 0x4c(r1)
    fsubs f0, f0, f28
    lwz r17, lbl_8087EE98
    stfs f2, 0x40(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x3c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r17
    mr r5, r23
    mr r6, r24
    addi r4, r1, 0x98
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80253F00_00001984
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0xa4(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x8c(r1)
lbl_fn_80253F00_00001984:
    psq_l f1, 0x0(r27), 0, 0
    mr r3, r19
    psq_st f1, 0x0(r23), 0, 0
    lfs f2, 0x8c(r1)
    lfs f0, 0x48(r1)
    stfs f2, 0x4c(r1)
    fadds f0, f0, f29
    lwz r17, lbl_8087EE98
    stfs f30, 0x8(r1)
    stfs f0, 0x48(r1)
    stfs f30, 0xc(r1)
    stfs f30, 0x10(r1)
    bl fn_80179D44
    lfs f1, lbl_80883374
    oris r7, r3, 0x8000
    mr r3, r17
    mr r5, r23
    addi r4, r1, 0x98
    addi r6, r1, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80253F00_00001A00
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f2, 0xb0(r1)
    lfs f0, 0x88(r1)
    stfs f2, 0x8c(r1)
    fsubs f0, f0, f29
    stfs f0, 0x88(r1)
lbl_fn_80253F00_00001A00:
    lha r0, 0x78(r1)
    addi r3, r19, 0x147c
    sth r0, 0x1470(r19)
    lha r0, 0x7a(r1)
    sth r0, 0x1472(r19)
    lwz r0, 0x7c(r1)
    stw r0, 0x1474(r19)
    lwz r0, 0x80(r1)
    stw r0, 0x1478(r19)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8c(r1)
    stfs f2, 0x1484(r19)
    lwz r0, 0x90(r1)
    stw r0, 0x1488(r19)
    b lbl_fn_80253F00_00001AC0
lbl_fn_80253F00_00001A40:
    sth r28, 0x5c(r1)
    sth r29, 0x5e(r1)
    stw r30, 0x64(r1)
    stfs f30, 0x68(r1)
    stfs f30, 0x6c(r1)
    stw r29, 0x74(r1)
    bl fn_80680CF8
    addi r0, r31, 0x6667
    lwz r5, 0x4(r18)
    mulhw r6, r0, r3
    extsh r4, r28
    psq_l f1, 0x528(r5), 0, 0
    extsh r0, r29
    lfs f2, 0x530(r5)
    addi r7, r19, 0x147c
    srawi r5, r6, 2
    sth r4, 0x1470(r19)
    srwi r6, r5, 31
    mr r4, r30
    add r5, r5, r6
    sth r0, 0x1472(r19)
    mulli r5, r5, 0xa
    mr r0, r29
    psq_st f1, 0x0(r21), 0, 0
    subf r3, r5, r3
    stw r3, 0x1474(r19)
    stw r4, 0x1478(r19)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1484(r19)
    stw r3, 0x60(r1)
    stfs f2, 0x70(r1)
    stw r0, 0x1488(r19)
lbl_fn_80253F00_00001AC0:
    lwz r19, 0x14ac(r19)
lbl_fn_80253F00_00001AC4:
    cmpwi r19, 0x0
    bne lbl_fn_80253F00_000016E0
    li r17, 0x1
lbl_fn_80253F00_00001AD0:
    lwz r3, 0x4(r18)
    li r5, 0x0
    lfs f1, lbl_8088333C
    lfs f2, lbl_80883358
    addi r4, r3, 0x534
    bl fn_8013CB68
    psq_l f31, 0x168(r1), 0, 0
    mr r3, r17
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    addi r11, r1, 0x130
    bl _restgpr_17
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}
