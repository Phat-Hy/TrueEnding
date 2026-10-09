#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80045694(void);
extern void fn_8006B174(void);
extern void fn_80092814(void);
extern void fn_80097D40(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB518(void);
extern void fn_800CB688(void);
extern void fn_800EFBC4(void);
extern void fn_800EFE3C(void);
extern void fn_800F72F4(void);
extern void fn_80103600(void);
extern void fn_80103FD4(void);
extern void fn_80219558(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A108(void);
extern void fn_8023A254(void);
extern void fn_8023A8B4(void);
extern void fn_8036554C(void);
extern void fn_80370320(void);
extern void fn_80473F18(void);
extern void fn_8054D798(void);
extern void fn_8067E23C(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80735DD0[];
extern u8 lbl_80736040[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9C0;
extern u32 lbl_80881478;
extern u32 lbl_80881494;
extern u32 lbl_8088151C;
extern u32 lbl_8088158C;
extern u32 lbl_808815CC;

/* Function declarations */
void fn_80105510(void);
void fn_801055A8(void);
void fn_801058F8(void);
void fn_80105950(void);
void fn_801059F8(void);
void fn_80105A08(void);
void fn_80105AB0(void);
void fn_80105B3C(void);
void fn_80105B4C(void);
void fn_80105BD8(void);
void fn_80105C9C(void);
void fn_80105DCC(void);
void fn_80105F3C(void);
void fn_80105F4C(void);
void fn_8010607C(void);
void fn_8010608C(void);
void fn_801061BC(void);
void fn_8010652C(void);
void fn_8010653C(void);
void fn_801065E4(void);
void fn_801065F4(void);
void fn_80106680(void);
void fn_80106728(void);
void fn_801067D0(void);
void fn_80106878(void);

asm void fn_80105510(void)
{
    nofralloc
    cmpwi r4, 0x12c
    ble lbl_fn_80105510_00000030
    addis r5, r3, 0x3
    lwz r0, 0x63bc(r5)
    cmpw r0, r4
    bge lbl_fn_80105510_00000024
    li r0, 0x270f
    stw r0, 0x63bc(r5)
    b lbl_fn_80105510_00000050
lbl_fn_80105510_00000024:
    li r0, 0x12c
    stw r0, 0x63bc(r5)
    b lbl_fn_80105510_00000050
lbl_fn_80105510_00000030:
    cmpwi r4, 0x14
    bge lbl_fn_80105510_00000048
    addis r4, r3, 0x3
    li r0, 0x14
    stw r0, 0x63bc(r4)
    b lbl_fn_80105510_00000050
lbl_fn_80105510_00000048:
    addis r5, r3, 0x3
    stw r4, 0x63bc(r5)
lbl_fn_80105510_00000050:
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beqlr
    addis r3, r3, 0x3
    lwz r0, 0x63bc(r3)
    cmpwi r0, 0x270f
    bne lbl_fn_80105510_00000080
    mr r3, r4
    li r4, 0xa
    li r5, 0x1
    li r6, 0x0
    b fn_80370320
lbl_fn_80105510_00000080:
    mr r3, r4
    li r4, 0xa
    li r5, 0x0
    li r6, 0x0
    b fn_80370320
    blr
}

asm void fn_801055A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r5, r3, 0x4
    li r6, 0x0
    stw r0, 0x24(r1)
    li r0, 0x12
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    stw r4, -0x7640(r5)
    addis r5, r3, 0x3
    mtctr r0
    addi r5, r5, 0x67b8
lbl_fn_801055A8_000000D4:
    lhz r4, 0x76(r5)
    clrlwi r0, r4, 31
    cmpwi r0, 0x1
    bne lbl_fn_801055A8_000000F0
    ori r0, r4, 0x2
    sth r0, 0x76(r5)
    b lbl_fn_801055A8_000000F8
lbl_fn_801055A8_000000F0:
    andi. r0, r4, 0xfffd
    sth r0, 0x76(r5)
lbl_fn_801055A8_000000F8:
    lhz r0, 0x76(r5)
    rlwinm r0, r0, 0, 16, 30
    sth r0, 0x76(r5)
    lhz r4, 0xee(r5)
    clrlwi r0, r4, 31
    cmpwi r0, 0x1
    bne lbl_fn_801055A8_00000120
    ori r0, r4, 0x2
    sth r0, 0xee(r5)
    b lbl_fn_801055A8_00000128
lbl_fn_801055A8_00000120:
    andi. r0, r4, 0xfffd
    sth r0, 0xee(r5)
lbl_fn_801055A8_00000128:
    lhz r0, 0xee(r5)
    rlwinm r0, r0, 0, 16, 30
    sth r0, 0xee(r5)
    lhz r4, 0x166(r5)
    clrlwi r0, r4, 31
    cmpwi r0, 0x1
    bne lbl_fn_801055A8_00000150
    ori r0, r4, 0x2
    sth r0, 0x166(r5)
    b lbl_fn_801055A8_00000158
lbl_fn_801055A8_00000150:
    andi. r0, r4, 0xfffd
    sth r0, 0x166(r5)
lbl_fn_801055A8_00000158:
    lhz r0, 0x166(r5)
    rlwinm r0, r0, 0, 16, 30
    sth r0, 0x166(r5)
    lhz r4, 0x1de(r5)
    clrlwi r0, r4, 31
    cmpwi r0, 0x1
    bne lbl_fn_801055A8_00000180
    ori r0, r4, 0x2
    sth r0, 0x1de(r5)
    b lbl_fn_801055A8_00000188
lbl_fn_801055A8_00000180:
    andi. r0, r4, 0xfffd
    sth r0, 0x1de(r5)
lbl_fn_801055A8_00000188:
    lhz r0, 0x1de(r5)
    addi r6, r6, 0x3
    rlwinm r0, r0, 0, 16, 30
    sth r0, 0x1de(r5)
    addi r5, r5, 0x1e0
    bdnz lbl_fn_801055A8_000000D4
    addis r3, r3, 0x3
    lwz r4, lbl_8087F8A0
    lwz r0, 0x67b0(r3)
    lwz r4, 0x48(r4)
    cmpwi r0, 0x0
    ble lbl_fn_801055A8_00000364
    lwz r3, lbl_8087F9C0
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801055A8_00000364
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801055A8_00000270
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_801055A8_00000364
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_801055A8_000001FC
    mr r3, r31
    li r5, 0x0
    bl fn_800F72F4
lbl_fn_801055A8_000001FC:
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r29, r3
    addis r30, r31, 0x4
    b lbl_fn_801055A8_0000023C
lbl_fn_801055A8_00000210:
    lwz r0, 0xf14(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801055A8_00000228
    lwz r0, -0x7600(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801055A8_00000238
lbl_fn_801055A8_00000228:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_800F72F4
lbl_fn_801055A8_00000238:
    lwz r29, 0x14ac(r29)
lbl_fn_801055A8_0000023C:
    cmpwi r29, 0x0
    bne lbl_fn_801055A8_00000210
    lwz r3, lbl_8087F408
    lwz r29, 0x48(r3)
    b lbl_fn_801055A8_00000264
lbl_fn_801055A8_00000250:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_800F72F4
    lwz r29, 0x14ac(r29)
lbl_fn_801055A8_00000264:
    cmpwi r29, 0x0
    bne lbl_fn_801055A8_00000250
    b lbl_fn_801055A8_00000364
lbl_fn_801055A8_00000270:
    cmpwi r0, 0x2
    bne lbl_fn_801055A8_00000308
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_801055A8_00000294
    mr r3, r31
    li r5, 0x0
    bl fn_800F72F4
lbl_fn_801055A8_00000294:
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r29, r3
    addis r30, r31, 0x4
    b lbl_fn_801055A8_000002D4
lbl_fn_801055A8_000002A8:
    lwz r0, 0xf14(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801055A8_000002C0
    lwz r0, -0x7600(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801055A8_000002D0
lbl_fn_801055A8_000002C0:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_800F72F4
lbl_fn_801055A8_000002D0:
    lwz r29, 0x14ac(r29)
lbl_fn_801055A8_000002D4:
    cmpwi r29, 0x0
    bne lbl_fn_801055A8_000002A8
    lwz r3, lbl_8087F408
    lwz r29, 0x48(r3)
    b lbl_fn_801055A8_000002FC
lbl_fn_801055A8_000002E8:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_800F72F4
    lwz r29, 0x14ac(r29)
lbl_fn_801055A8_000002FC:
    cmpwi r29, 0x0
    bne lbl_fn_801055A8_000002E8
    b lbl_fn_801055A8_00000364
lbl_fn_801055A8_00000308:
    cmpwi r0, 0x3
    bne lbl_fn_801055A8_00000364
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r29, r3
    b lbl_fn_801055A8_00000334
lbl_fn_801055A8_00000320:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_800F72F4
    lwz r29, 0x14ac(r29)
lbl_fn_801055A8_00000334:
    cmpwi r29, 0x0
    bne lbl_fn_801055A8_00000320
    lwz r3, lbl_8087F408
    lwz r29, 0x48(r3)
    b lbl_fn_801055A8_0000035C
lbl_fn_801055A8_00000348:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_800F72F4
    lwz r29, 0x14ac(r29)
lbl_fn_801055A8_0000035C:
    cmpwi r29, 0x0
    bne lbl_fn_801055A8_00000348
lbl_fn_801055A8_00000364:
    addis r29, r31, 0x3
    li r28, 0x0
    li r30, 0x1
    li r31, 0x0
    addi r29, r29, 0x67b8
lbl_fn_801055A8_00000378:
    lhz r3, 0x76(r29)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_801055A8_000003B8
    clrlwi r0, r3, 31
    cmpwi r0, 0x1
    beq lbl_fn_801055A8_000003B8
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x0
    li r6, 0x0
    stw r30, 0xd0(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    stw r31, 0xd0(r3)
lbl_fn_801055A8_000003B8:
    addi r28, r28, 0x1
    addi r29, r29, 0x78
    cmplwi r28, 0x48
    blt lbl_fn_801055A8_00000378
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801058F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80103FD4
    lwz r3, lbl_8087F8A0
    lwz r31, 0x48(r3)
    b lbl_fn_801058F8_00000420
lbl_fn_801058F8_00000410:
    mr r3, r30
    mr r4, r31
    bl fn_80103600
    lwz r31, 0x14ac(r31)
lbl_fn_801058F8_00000420:
    cmpwi r31, 0x0
    bne lbl_fn_801058F8_00000410
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80105950(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x3
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    addi r4, r4, 0x63c0
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

asm void fn_801059F8(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80105A08(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x3
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    addi r4, r4, 0x63cc
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

asm void fn_80105AB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    li r4, 0x0
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    lis r7, lbl_807C7030@ha
    stw r0, 0xc(r1)
    addis r4, r29, 0x3
    addi r7, r7, lbl_807C7030@l
    lfs f1, lbl_80881494
    lwz r3, lbl_8087F3C0
    mr r5, r30
    mr r8, r7
    mr r9, r31
    li r6, 0x0
    li r10, -0x1
    addi r4, r4, 0x63d8
    bl fn_8023A8B4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80105B3C(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    li r6, 0x0
    b fn_80239DAC
}

asm void fn_80105B4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    li r4, 0x0
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    lis r7, lbl_807C7030@ha
    stw r0, 0xc(r1)
    addis r4, r29, 0x3
    addi r7, r7, lbl_807C7030@l
    lfs f1, lbl_80881494
    lwz r3, lbl_8087F3C0
    mr r5, r30
    mr r8, r7
    mr r9, r31
    li r6, 0x0
    li r10, -0x1
    addi r4, r4, 0x63e4
    bl fn_8023A8B4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80105BD8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    li r31, 0x1
    stw r30, 0x48(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x44(r1)
    mr r29, r3
    li r3, 0x0
    lwz r5, lbl_8087F3C0
    stw r31, 0xc4(r5)
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r29, 0x3
    lfs f1, lbl_80881494
    li r0, -0x1
    stfs f0, 0x1c(r1)
    mr r5, r30
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    addi r4, r4, 0x64ec
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xc4(r3)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80105C9C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r5
    stw r30, 0x68(r1)
    mr r30, r4
    li r4, 0x3
    stw r29, 0x64(r1)
    mr r29, r3
    mr r3, r30
    bl fn_80232B7C
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x2
    bne lbl_fn_80105C9C_00000838
    lfs f0, lbl_80881478
    addis r4, r29, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x44(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    li r6, 0x0
    stfs f0, 0x4c(r1)
    li r10, -0x1
    subi r4, r4, 0x7500
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80105C9C_000008A0
lbl_fn_80105C9C_00000838:
    lfs f0, lbl_80881478
    addis r4, r29, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x750c
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
lbl_fn_80105C9C_000008A0:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80105DCC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r6
    stw r30, 0x68(r1)
    mr r30, r5
    stw r29, 0x64(r1)
    mr r29, r4
    li r4, 0x4
    stw r28, 0x60(r1)
    mr r28, r3
    mr r3, r29
    bl fn_80232B7C
    lwz r3, 0x50(r29)
    bl fn_80219558
    cmpwi r3, 0x2
    bne lbl_fn_80105DCC_00000970
    lfs f0, lbl_80881478
    addis r4, r28, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x44(r1)
    li r0, 0x1
    mr r5, r30
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    li r6, 0x0
    stfs f0, 0x4c(r1)
    li r10, -0x1
    subi r4, r4, 0x74d0
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80105DCC_00000A0C
lbl_fn_80105DCC_00000970:
    lfs f1, lbl_80881478
    neg r0, r31
    lfs f0, lbl_80881494
    andc r4, r0, r31
    srawi r0, r4, 31
    stfs f1, 0x1c(r1)
    and r0, r31, r0
    lwz r3, lbl_8087F3C0
    cmplwi r0, 0x3
    stfs f1, 0x20(r1)
    li r5, -0x1
    li r0, 0x1
    stfs f1, 0x24(r1)
    addis r6, r28, 0x4
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    bge lbl_fn_80105DCC_000009DC
    srawi r0, r4, 31
    and r0, r31, r0
    b lbl_fn_80105DCC_000009E0
lbl_fn_80105DCC_000009DC:
    li r0, 0x3
lbl_fn_80105DCC_000009E0:
    mulli r0, r0, 0xc
    lfs f1, lbl_80881494
    mr r5, r30
    addi r7, r1, 0x10
    add r4, r6, r0
    addi r8, r1, 0x1c
    subi r4, r4, 0x74f4
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_80105DCC_00000A0C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80105F3C(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x4
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_80105F4C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r5
    stw r30, 0x68(r1)
    mr r30, r4
    li r4, 0x3
    stw r29, 0x64(r1)
    mr r29, r3
    mr r3, r30
    bl fn_80232B7C
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x2
    bne lbl_fn_80105F4C_00000AE8
    lfs f0, lbl_80881478
    addis r4, r29, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x44(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    li r6, 0x0
    stfs f0, 0x4c(r1)
    li r10, -0x1
    subi r4, r4, 0x74b8
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80105F4C_00000B50
lbl_fn_80105F4C_00000AE8:
    lfs f0, lbl_80881478
    addis r4, r29, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x74c4
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
lbl_fn_80105F4C_00000B50:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8010607C(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x3
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8010608C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r5
    stw r30, 0x68(r1)
    mr r30, r4
    li r4, 0x3
    stw r29, 0x64(r1)
    mr r29, r3
    mr r3, r30
    bl fn_80232B7C
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x2
    bne lbl_fn_8010608C_00000C28
    lfs f0, lbl_80881478
    addis r4, r29, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x44(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    li r6, 0x0
    stfs f0, 0x4c(r1)
    li r10, -0x1
    subi r4, r4, 0x74a0
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8010608C_00000C90
lbl_fn_8010608C_00000C28:
    lfs f0, lbl_80881478
    addis r4, r29, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x74ac
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
lbl_fn_8010608C_00000C90:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801061BC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_27
    mr r28, r4
    mr r27, r3
    mr r30, r5
    mr r31, r6
    mr r3, r28
    li r4, 0x1e
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r29, 0x1
    stw r29, 0xc4(r3)
    lwz r3, 0x50(r28)
    bl fn_80219558
    cmpwi r3, 0x2
    bne lbl_fn_801061BC_00000D54
    lfs f1, lbl_80881494
    lis r7, lbl_807C7030@ha
    lfs f0, lbl_80881478
    addi r7, r7, lbl_807C7030@l
    stfs f1, 0x68(r1)
    li r6, -0x1
    mulli r0, r31, 0xc
    addis r3, r27, 0x4
    stfs f0, 0x6c(r1)
    mr r5, r30
    mr r8, r7
    add r3, r3, r0
    stfs f0, 0x70(r1)
    subi r4, r3, 0x7470
    addi r9, r1, 0x68
    li r10, -0x1
    stfs f1, 0x74(r1)
    stw r6, 0x8(r1)
    li r6, 0x0
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_801061BC_00000DC0
lbl_fn_801061BC_00000D54:
    lfs f0, lbl_80881478
    li r11, -0x1
    lfs f1, lbl_80881494
    mulli r0, r31, 0xc
    stfs f0, 0x38(r1)
    addis r3, r27, 0x4
    mr r5, r30
    stfs f0, 0x3c(r1)
    add r3, r3, r0
    subi r4, r3, 0x7494
    addi r7, r1, 0x2c
    stfs f0, 0x40(r1)
    addi r8, r1, 0x38
    addi r9, r1, 0x48
    li r6, 0x0
    stfs f0, 0x2c(r1)
    li r10, -0x1
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stw r11, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_801061BC_00000DC0:
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    cmpwi r31, 0x1
    stw r0, 0xc4(r3)
    blt lbl_fn_801061BC_00000ED8
    lis r29, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    addi r29, r29, lbl_80735DD0@l
    addi r3, r1, 0x20
    lwz r4, 0x60(r29)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, 0x64(r29)
    addi r3, r1, 0x28
    lfs f1, lbl_8088158C
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    cmpwi cr1, r31, 0x0
    lfs f1, lbl_80881494
    li r6, 0x0
    ble cr1, lbl_fn_801061BC_00000EB4
    cmpwi r31, 0x8
    subi r4, r31, 0x8
    ble lbl_fn_801061BC_00000E98
    li r5, 0x0
    blt cr1, lbl_fn_801061BC_00000E50
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r31, r0
    bgt lbl_fn_801061BC_00000E50
    li r5, 0x1
lbl_fn_801061BC_00000E50:
    cmpwi r5, 0x0
    beq lbl_fn_801061BC_00000E98
    addi r0, r4, 0x7
    lfs f0, lbl_808815CC
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_801061BC_00000E98
lbl_fn_801061BC_00000E70:
    fmuls f1, f1, f0
    addi r6, r6, 0x8
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    bdnz lbl_fn_801061BC_00000E70
lbl_fn_801061BC_00000E98:
    subf r0, r6, r31
    lfs f0, lbl_808815CC
    mtctr r0
    cmpw r6, r31
    bge lbl_fn_801061BC_00000EB4
lbl_fn_801061BC_00000EAC:
    fmuls f1, f1, f0
    bdnz lbl_fn_801061BC_00000EAC
lbl_fn_801061BC_00000EB4:
    addi r3, r1, 0x28
    li r4, 0x0
    bl fn_800CB688
    addi r3, r1, 0x28
    li r4, 0xa
    bl fn_800CB518
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801061BC_00000ED8:
    lwz r0, lbl_8087F8A8
    cmpwi r0, 0x0
    beq lbl_fn_801061BC_00001004
    cmpwi r31, 0x1
    blt lbl_fn_801061BC_00001004
    lfs f1, lbl_80881478
    cmpwi r30, 0x0
    lfs f0, lbl_8088151C
    li r29, 0x0
    stw r29, 0x24(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f1, 0x80(r1)
    beq lbl_fn_801061BC_00000FB8
    lis r4, lbl_80736040@ha
    mr r3, r30
    addi r4, r4, lbl_80736040@l
    li r5, 0x0
    addi r4, r4, 0x3f6
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801061BC_00000F34
    b lbl_fn_801061BC_00000F40
lbl_fn_801061BC_00000F34:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r29, r3, r0
lbl_fn_801061BC_00000F40:
    cmpwi r29, 0x0
    beq lbl_fn_801061BC_00000FB8
    lis r4, lbl_80736040@ha
    mr r3, r30
    addi r4, r4, lbl_80736040@l
    li r5, 0x0
    addi r4, r4, 0x3f6
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801061BC_00000F70
    li r3, 0x0
    b lbl_fn_801061BC_00000F7C
lbl_fn_801061BC_00000F70:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_801061BC_00000F7C:
    lfs f3, 0x2c(r3)
    lfs f4, 0x1c(r3)
    lfs f5, 0xc(r3)
    lfs f2, 0x78(r1)
    lfs f1, 0x7c(r1)
    lfs f0, 0x80(r1)
    fadds f2, f2, f5
    fadds f1, f1, f4
    stfs f5, 0x58(r1)
    fadds f0, f0, f3
    stfs f4, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f2, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f0, 0x80(r1)
lbl_fn_801061BC_00000FB8:
    li r3, 0x0
    stw r3, 0x8(r1)
    subi r0, r31, 0x2
    li r4, 0x1
    stw r3, 0xc(r1)
    cntlzw r0, r0
    li r3, -0x1
    addi r5, r1, 0x24
    stw r4, 0x10(r1)
    addi r6, r1, 0x78
    srwi r7, r0, 5
    li r4, 0x6
    stw r3, 0x14(r1)
    li r8, 0x0
    li r9, 0x1
    li r10, 0x0
    stw r3, 0x18(r1)
    lwz r3, lbl_8087F8A8
    bl fn_8054D798
lbl_fn_801061BC_00001004:
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8010652C(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x1e
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_8010653C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x6
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x73b0
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

asm void fn_801065E4(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    li r5, 0x6
    li r6, 0x1
    b fn_80239DAC
}

asm void fn_801065F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    li r4, 0x7
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    lis r7, lbl_807C7030@ha
    stw r0, 0xc(r1)
    addis r4, r29, 0x4
    addi r7, r7, lbl_807C7030@l
    lfs f1, lbl_80881494
    lwz r3, lbl_8087F3C0
    mr r5, r30
    mr r8, r7
    mr r9, r31
    li r6, 0x0
    li r10, -0x1
    subi r4, r4, 0x73a4
    bl fn_8023A8B4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80106680(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x8
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x4
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    subi r4, r4, 0x7398
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

asm void fn_80106728(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x3
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    addi r4, r4, 0x65d0
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

asm void fn_801067D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r4, r30, 0x3
    lfs f1, lbl_80881494
    li r3, -0x1
    stfs f0, 0x1c(r1)
    li r0, 0x1
    mr r5, r31
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    addi r4, r4, 0x65dc
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

asm void fn_80106878(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_26
    addi r31, r4, 0xb0
    mr r29, r4
    mr r28, r3
    lwz r4, 0x2dc(r4)
    mr r3, r31
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_80106878_00001BA0
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0xc8(r1)
    mr r26, r3
    addi r27, r1, 0xc8
    stw r0, 0xcc(r1)
    stw r0, 0xd0(r1)
    bl strlen
    mr r30, r3
    mr r3, r27
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r27
    stb r0, 0x10(r1)
    mr r6, r26
    add r7, r26, r30
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r27
    addi r3, r1, 0xd4
    bl fn_8006B174
    lwz r0, 0xc8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80106878_00001410
    lwz r3, 0xd0(r1)
    bl dtor_80084684
lbl_fn_80106878_00001410:
    lis r3, lbl_80736040@ha
    li r30, 0x7
    addi r3, r3, lbl_80736040@l
    addi r26, r3, 0x3fb
    mr r3, r26
    bl strlen
    lwz r0, 0xd4(r1)
    mr r27, r3
    stw r3, 0x84(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_00001448
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80106878_0000144C
lbl_fn_80106878_00001448:
    lwz r4, 0xd8(r1)
lbl_fn_80106878_0000144C:
    lwz r0, 0xd4(r1)
    stw r4, 0x88(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_0000146C
    lbz r0, 0xd4(r1)
    addi r3, r1, 0xd5
    clrlwi r0, r0, 25
    b lbl_fn_80106878_00001474
lbl_fn_80106878_0000146C:
    lwz r3, 0xdc(r1)
    lwz r0, 0xd8(r1)
lbl_fn_80106878_00001474:
    cmplw r4, r0
    stw r0, 0x80(r1)
    addi r4, r1, 0x80
    bge lbl_fn_80106878_00001488
    addi r4, r1, 0x88
lbl_fn_80106878_00001488:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x7c(r1)
    addi r5, r1, 0x7c
    cmplw r27, r0
    bge lbl_fn_80106878_000014A4
    addi r5, r1, 0x84
lbl_fn_80106878_000014A4:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80106878_000014D8
    lwz r0, 0x7c(r1)
    cmplw r0, r27
    bge lbl_fn_80106878_000014C8
    li r3, -0x1
    b lbl_fn_80106878_000014D8
lbl_fn_80106878_000014C8:
    bne lbl_fn_80106878_000014D4
    li r3, 0x0
    b lbl_fn_80106878_000014D8
lbl_fn_80106878_000014D4:
    li r3, 0x1
lbl_fn_80106878_000014D8:
    cmpwi r3, 0x0
    bne lbl_fn_80106878_000014E8
    li r30, 0x0
    b lbl_fn_80106878_000019DC
lbl_fn_80106878_000014E8:
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r26, r3, 0x411
    mr r3, r26
    bl strlen
    lwz r0, 0xd4(r1)
    mr r27, r3
    stw r3, 0x74(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_0000151C
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80106878_00001520
lbl_fn_80106878_0000151C:
    lwz r4, 0xd8(r1)
lbl_fn_80106878_00001520:
    lwz r0, 0xd4(r1)
    stw r4, 0x78(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_00001540
    lbz r0, 0xd4(r1)
    addi r3, r1, 0xd5
    clrlwi r0, r0, 25
    b lbl_fn_80106878_00001548
lbl_fn_80106878_00001540:
    lwz r3, 0xdc(r1)
    lwz r0, 0xd8(r1)
lbl_fn_80106878_00001548:
    cmplw r4, r0
    stw r0, 0x70(r1)
    addi r4, r1, 0x70
    bge lbl_fn_80106878_0000155C
    addi r4, r1, 0x78
lbl_fn_80106878_0000155C:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x6c(r1)
    addi r5, r1, 0x6c
    cmplw r27, r0
    bge lbl_fn_80106878_00001578
    addi r5, r1, 0x74
lbl_fn_80106878_00001578:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80106878_000015AC
    lwz r0, 0x6c(r1)
    cmplw r0, r27
    bge lbl_fn_80106878_0000159C
    li r3, -0x1
    b lbl_fn_80106878_000015AC
lbl_fn_80106878_0000159C:
    bne lbl_fn_80106878_000015A8
    li r3, 0x0
    b lbl_fn_80106878_000015AC
lbl_fn_80106878_000015A8:
    li r3, 0x1
lbl_fn_80106878_000015AC:
    cmpwi r3, 0x0
    bne lbl_fn_80106878_000015BC
    li r30, 0x1
    b lbl_fn_80106878_000019DC
lbl_fn_80106878_000015BC:
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r26, r3, 0x427
    mr r3, r26
    bl strlen
    lwz r0, 0xd4(r1)
    mr r27, r3
    stw r3, 0x64(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_000015F0
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80106878_000015F4
lbl_fn_80106878_000015F0:
    lwz r4, 0xd8(r1)
lbl_fn_80106878_000015F4:
    lwz r0, 0xd4(r1)
    stw r4, 0x68(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_00001614
    lbz r0, 0xd4(r1)
    addi r3, r1, 0xd5
    clrlwi r0, r0, 25
    b lbl_fn_80106878_0000161C
lbl_fn_80106878_00001614:
    lwz r3, 0xdc(r1)
    lwz r0, 0xd8(r1)
lbl_fn_80106878_0000161C:
    cmplw r4, r0
    stw r0, 0x60(r1)
    addi r4, r1, 0x60
    bge lbl_fn_80106878_00001630
    addi r4, r1, 0x68
lbl_fn_80106878_00001630:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x5c(r1)
    addi r5, r1, 0x5c
    cmplw r27, r0
    bge lbl_fn_80106878_0000164C
    addi r5, r1, 0x64
lbl_fn_80106878_0000164C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80106878_00001680
    lwz r0, 0x5c(r1)
    cmplw r0, r27
    bge lbl_fn_80106878_00001670
    li r3, -0x1
    b lbl_fn_80106878_00001680
lbl_fn_80106878_00001670:
    bne lbl_fn_80106878_0000167C
    li r3, 0x0
    b lbl_fn_80106878_00001680
lbl_fn_80106878_0000167C:
    li r3, 0x1
lbl_fn_80106878_00001680:
    cmpwi r3, 0x0
    bne lbl_fn_80106878_00001690
    li r30, 0x2
    b lbl_fn_80106878_000019DC
lbl_fn_80106878_00001690:
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r26, r3, 0x43d
    mr r3, r26
    bl strlen
    lwz r0, 0xd4(r1)
    mr r27, r3
    stw r3, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_000016C4
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80106878_000016C8
lbl_fn_80106878_000016C4:
    lwz r4, 0xd8(r1)
lbl_fn_80106878_000016C8:
    lwz r0, 0xd4(r1)
    stw r4, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_000016E8
    lbz r0, 0xd4(r1)
    addi r3, r1, 0xd5
    clrlwi r0, r0, 25
    b lbl_fn_80106878_000016F0
lbl_fn_80106878_000016E8:
    lwz r3, 0xdc(r1)
    lwz r0, 0xd8(r1)
lbl_fn_80106878_000016F0:
    cmplw r4, r0
    stw r0, 0x50(r1)
    addi r4, r1, 0x50
    bge lbl_fn_80106878_00001704
    addi r4, r1, 0x58
lbl_fn_80106878_00001704:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x4c(r1)
    addi r5, r1, 0x4c
    cmplw r27, r0
    bge lbl_fn_80106878_00001720
    addi r5, r1, 0x54
lbl_fn_80106878_00001720:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80106878_00001754
    lwz r0, 0x4c(r1)
    cmplw r0, r27
    bge lbl_fn_80106878_00001744
    li r3, -0x1
    b lbl_fn_80106878_00001754
lbl_fn_80106878_00001744:
    bne lbl_fn_80106878_00001750
    li r3, 0x0
    b lbl_fn_80106878_00001754
lbl_fn_80106878_00001750:
    li r3, 0x1
lbl_fn_80106878_00001754:
    cmpwi r3, 0x0
    bne lbl_fn_80106878_00001764
    li r30, 0x3
    b lbl_fn_80106878_000019DC
lbl_fn_80106878_00001764:
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r26, r3, 0x453
    mr r3, r26
    bl strlen
    lwz r0, 0xd4(r1)
    mr r27, r3
    stw r3, 0x44(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_00001798
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80106878_0000179C
lbl_fn_80106878_00001798:
    lwz r4, 0xd8(r1)
lbl_fn_80106878_0000179C:
    lwz r0, 0xd4(r1)
    stw r4, 0x48(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_000017BC
    lbz r0, 0xd4(r1)
    addi r3, r1, 0xd5
    clrlwi r0, r0, 25
    b lbl_fn_80106878_000017C4
lbl_fn_80106878_000017BC:
    lwz r3, 0xdc(r1)
    lwz r0, 0xd8(r1)
lbl_fn_80106878_000017C4:
    cmplw r4, r0
    stw r0, 0x40(r1)
    addi r4, r1, 0x40
    bge lbl_fn_80106878_000017D8
    addi r4, r1, 0x48
lbl_fn_80106878_000017D8:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x3c(r1)
    addi r5, r1, 0x3c
    cmplw r27, r0
    bge lbl_fn_80106878_000017F4
    addi r5, r1, 0x44
lbl_fn_80106878_000017F4:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80106878_00001828
    lwz r0, 0x3c(r1)
    cmplw r0, r27
    bge lbl_fn_80106878_00001818
    li r3, -0x1
    b lbl_fn_80106878_00001828
lbl_fn_80106878_00001818:
    bne lbl_fn_80106878_00001824
    li r3, 0x0
    b lbl_fn_80106878_00001828
lbl_fn_80106878_00001824:
    li r3, 0x1
lbl_fn_80106878_00001828:
    cmpwi r3, 0x0
    bne lbl_fn_80106878_00001838
    li r30, 0x4
    b lbl_fn_80106878_000019DC
lbl_fn_80106878_00001838:
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r26, r3, 0x469
    mr r3, r26
    bl strlen
    lwz r0, 0xd4(r1)
    mr r27, r3
    stw r3, 0x34(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_0000186C
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80106878_00001870
lbl_fn_80106878_0000186C:
    lwz r4, 0xd8(r1)
lbl_fn_80106878_00001870:
    lwz r0, 0xd4(r1)
    stw r4, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_00001890
    lbz r0, 0xd4(r1)
    addi r3, r1, 0xd5
    clrlwi r0, r0, 25
    b lbl_fn_80106878_00001898
lbl_fn_80106878_00001890:
    lwz r3, 0xdc(r1)
    lwz r0, 0xd8(r1)
lbl_fn_80106878_00001898:
    cmplw r4, r0
    stw r0, 0x30(r1)
    addi r4, r1, 0x30
    bge lbl_fn_80106878_000018AC
    addi r4, r1, 0x38
lbl_fn_80106878_000018AC:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x2c(r1)
    addi r5, r1, 0x2c
    cmplw r27, r0
    bge lbl_fn_80106878_000018C8
    addi r5, r1, 0x34
lbl_fn_80106878_000018C8:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80106878_000018FC
    lwz r0, 0x2c(r1)
    cmplw r0, r27
    bge lbl_fn_80106878_000018EC
    li r3, -0x1
    b lbl_fn_80106878_000018FC
lbl_fn_80106878_000018EC:
    bne lbl_fn_80106878_000018F8
    li r3, 0x0
    b lbl_fn_80106878_000018FC
lbl_fn_80106878_000018F8:
    li r3, 0x1
lbl_fn_80106878_000018FC:
    cmpwi r3, 0x0
    bne lbl_fn_80106878_0000190C
    li r30, 0x0
    b lbl_fn_80106878_000019DC
lbl_fn_80106878_0000190C:
    lis r3, lbl_80736040@ha
    addi r3, r3, lbl_80736040@l
    addi r26, r3, 0x47f
    mr r3, r26
    bl strlen
    lwz r0, 0xd4(r1)
    mr r27, r3
    stw r3, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_00001940
    lbz r0, 0xd4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80106878_00001944
lbl_fn_80106878_00001940:
    lwz r4, 0xd8(r1)
lbl_fn_80106878_00001944:
    lwz r0, 0xd4(r1)
    stw r4, 0x28(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80106878_00001964
    lbz r0, 0xd4(r1)
    addi r3, r1, 0xd5
    clrlwi r0, r0, 25
    b lbl_fn_80106878_0000196C
lbl_fn_80106878_00001964:
    lwz r3, 0xdc(r1)
    lwz r0, 0xd8(r1)
lbl_fn_80106878_0000196C:
    cmplw r4, r0
    stw r0, 0x20(r1)
    addi r4, r1, 0x20
    bge lbl_fn_80106878_00001980
    addi r4, r1, 0x28
lbl_fn_80106878_00001980:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x1c(r1)
    addi r5, r1, 0x1c
    cmplw r27, r0
    bge lbl_fn_80106878_0000199C
    addi r5, r1, 0x24
lbl_fn_80106878_0000199C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80106878_000019D0
    lwz r0, 0x1c(r1)
    cmplw r0, r27
    bge lbl_fn_80106878_000019C0
    li r3, -0x1
    b lbl_fn_80106878_000019D0
lbl_fn_80106878_000019C0:
    bne lbl_fn_80106878_000019CC
    li r3, 0x0
    b lbl_fn_80106878_000019D0
lbl_fn_80106878_000019CC:
    li r3, 0x1
lbl_fn_80106878_000019D0:
    cmpwi r3, 0x0
    bne lbl_fn_80106878_000019DC
    li r30, 0x6
lbl_fn_80106878_000019DC:
    cmpwi r30, 0x7
    bne lbl_fn_80106878_000019FC
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80106878_00001BA0
    lwz r3, 0xdc(r1)
    bl dtor_80084684
    b lbl_fn_80106878_00001BA0
lbl_fn_80106878_000019FC:
    mr r3, r29
    li r4, 0x9
    bl fn_80232B7C
    lfs f0, lbl_80881478
    addis r3, r28, 0x3
    lfs f1, lbl_80881494
    mulli r0, r30, 0xc
    stfs f0, 0x98(r1)
    li r27, -0x1
    li r28, 0x1
    stfs f0, 0x9c(r1)
    add r3, r3, r0
    addi r4, r3, 0x65e8
    mr r5, r31
    stfs f0, 0xa0(r1)
    addi r7, r1, 0x8c
    addi r8, r1, 0x98
    addi r9, r1, 0xa8
    stfs f0, 0x8c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f1, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f1, 0xb4(r1)
    stw r27, 0x8(r1)
    stw r28, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80106878_00001B4C
    li r4, 0x2
    li r5, -0x1
    li r6, 0x22
    li r7, -0x1
    bl fn_80045694
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80106878_00001B4C
    lfs f0, lbl_80881494
    li r3, 0x232c
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_800EFBC4
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80106878_00001B10
    mr r3, r29
    li r4, 0x9
    bl fn_80232B7C
    stw r27, 0x8(r1)
    lis r7, lbl_807C7030@ha
    addi r7, r7, lbl_807C7030@l
    lfs f1, lbl_80881494
    stw r28, 0xc(r1)
    mr r4, r26
    mr r5, r31
    mr r8, r7
    lwz r3, lbl_8087F3C0
    addi r9, r1, 0xb8
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_80106878_00001B10:
    addi r26, r29, 0x528
    li r3, 0x232c
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_80106878_00001B4C
    lfs f1, lbl_80881494
    mr r4, r3
    mr r5, r26
    addi r3, r1, 0x18
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80106878_00001B4C:
    lfs f1, 0x234(r31)
    lfs f0, lbl_80881478
    fcmpo cr0, f1, f0
    ble lbl_fn_80106878_00001B78
    fctiwz f0, f1
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x9
    stfd f0, 0xe0(r1)
    lwz r6, 0xe4(r1)
    bl fn_8023A108
lbl_fn_80106878_00001B78:
    lfs f1, 0x238(r31)
    mr r4, r29
    lwz r3, lbl_8087F3C0
    li r5, 0x9
    bl fn_8023A254
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80106878_00001BA0
    lwz r3, 0xdc(r1)
    bl dtor_80084684
lbl_fn_80106878_00001BA0:
    addi r11, r1, 0x100
    bl _restgpr_26
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}
