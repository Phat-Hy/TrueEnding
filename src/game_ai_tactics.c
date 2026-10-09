#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80013338(void);
extern void fn_8004D388(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DC6B4(void);
extern void fn_800F52F0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_8013C38C(void);
extern void fn_8014052C(void);
extern void fn_80144710(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80176548(void);
extern void fn_801A03E8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80267134(void);
extern void fn_8026B008(void);
extern void fn_8026B118(void);
extern void fn_8026B748(void);
extern void fn_8026B9F0(void);
extern void fn_8026C3E0(void);
extern void fn_8026C7A4(void);
extern void fn_8026C844(void);
extern void fn_8026CDB4(void);
extern void fn_8026D058(void);
extern void fn_8026F9BC(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_807445D8[];
extern u8 lbl_80744608[];
extern u8 lbl_80766768[];
extern u8 lbl_80784D74[];
extern u8 lbl_80784D80[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883670;
extern u32 lbl_80883674;
extern u32 lbl_8088368C;
extern u32 lbl_80883690;
extern u32 lbl_80883694;
extern u32 lbl_80883698;
extern u32 lbl_808836A0;
extern u32 lbl_808836AC;
extern u32 lbl_808836B0;
extern u32 lbl_808836B4;
extern u32 lbl_808836B8;
extern u32 lbl_808836BC;
extern u32 lbl_808836C0;
extern u32 lbl_808836C4;
extern u32 lbl_808836C8;
extern u32 lbl_808836CC;
extern u32 lbl_808836D0;
extern u32 lbl_808836D4;
extern u32 lbl_808836D8;
extern u32 lbl_808836DC;
extern u32 lbl_808836E0;
extern u32 lbl_808836E4;
extern u32 lbl_808836E8;
extern u32 lbl_808836EC;
extern u32 lbl_808836F0;

/* Function declarations */
void fn_802676BC(void);
void fn_80267B20(void);
void fn_80267B28(void);
void fn_80267B30(void);
void fn_80267B60(void);
void fn_80267B88(void);
void fn_80267C0C(void);
void fn_80267CB4(void);
void fn_80267E7C(void);
void fn_80267F88(void);
void fn_802682C4(void);
void fn_802684C0(void);
void fn_8026860C(void);
void fn_80268CB4(void);

asm void fn_802676BC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802676BC_00000448
    mr r3, r0
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8001047C
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x14
    bl fn_8000D3A4
    lwz r0, 0x14c0(r31)
    fmr f31, f1
    cmpwi r0, 0x0
    bne lbl_fn_802676BC_000000B0
    lwz r3, 0x14b8(r31)
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_802676BC_00000098
    lwz r3, 0x14b8(r31)
    bl fn_80267B28
    cmpwi r3, 0x85
    bne lbl_fn_802676BC_00000098
    mr r3, r31
    li r4, 0x5
    li r5, 0xe
    bl fn_8026C3E0
    b lbl_fn_802676BC_00000448
lbl_fn_802676BC_00000098:
    lwz r0, 0x1544(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802676BC_000000F8
    mr r3, r31
    bl fn_8026C7A4
    b lbl_fn_802676BC_00000448
lbl_fn_802676BC_000000B0:
    lwz r0, 0x1544(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802676BC_000000C8
    mr r3, r31
    bl fn_8026C7A4
    b lbl_fn_802676BC_00000448
lbl_fn_802676BC_000000C8:
    lfs f1, 0x9fc(r31)
    lfs f0, lbl_80883670
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802676BC_000000F8
    lfs f0, lbl_80883674
    mr r3, r31
    stfs f0, 0x9fc(r31)
    li r4, 0x2
    li r5, 0x10
    bl fn_8026C3E0
    b lbl_fn_802676BC_00000448
lbl_fn_802676BC_000000F8:
    lwz r3, 0x14bc(r31)
    lwz r0, 0x1500(r31)
    cmpw r3, r0
    ble lbl_fn_802676BC_00000448
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802676BC_000001DC
    lwz r4, 0x1630(r31)
    li r3, 0x4
    cmpwi r4, 0x0
    beq lbl_fn_802676BC_00000128
    li r3, 0x6
lbl_fn_802676BC_00000128:
    cmpwi r4, 0x0
    beq lbl_fn_802676BC_00000150
    lwz r0, 0x1660(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802676BC_00000150
    mr r3, r31
    li r4, 0x6
    li r5, 0x17
    bl fn_8026C3E0
    b lbl_fn_802676BC_000001DC
lbl_fn_802676BC_00000150:
    lwz r0, 0x14cc(r31)
    cmpw r0, r3
    blt lbl_fn_802676BC_000001DC
    cmpwi r4, 0x0
    bne lbl_fn_802676BC_00000178
    mr r3, r31
    li r4, 0x2
    li r5, 0x18
    bl fn_8026C3E0
    b lbl_fn_802676BC_000001D4
lbl_fn_802676BC_00000178:
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpwi r0, 0x32
    bge lbl_fn_802676BC_000001C4
    lwz r0, 0x1688(r31)
    cmpwi r0, 0x5
    blt lbl_fn_802676BC_000001C4
    mr r3, r31
    li r4, 0x0
    li r5, 0xc
    bl fn_8026C3E0
    b lbl_fn_802676BC_000001D4
lbl_fn_802676BC_000001C4:
    mr r3, r31
    li r4, 0x2
    li r5, 0x9
    bl fn_8026C3E0
lbl_fn_802676BC_000001D4:
    li r0, 0x0
    stw r0, 0x14cc(r31)
lbl_fn_802676BC_000001DC:
    lfs f0, lbl_808836A0
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_802676BC_000002EC
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_8014052C
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_801A03E8
    lfs f0, lbl_80883674
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_802676BC_000002D4
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    beq lbl_fn_802676BC_00000254
    cmpwi r0, 0x1
    beq lbl_fn_802676BC_00000278
    cmpwi r0, 0x2
    beq lbl_fn_802676BC_00000284
    b lbl_fn_802676BC_000002DC
lbl_fn_802676BC_00000254:
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802676BC_0000026C
    mr r3, r31
    bl fn_8026B008
    b lbl_fn_802676BC_000002DC
lbl_fn_802676BC_0000026C:
    mr r3, r31
    bl fn_8026D058
    b lbl_fn_802676BC_000002DC
lbl_fn_802676BC_00000278:
    mr r3, r31
    bl fn_8026B748
    b lbl_fn_802676BC_000002DC
lbl_fn_802676BC_00000284:
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802676BC_0000029C
    mr r3, r31
    bl fn_8026B008
    b lbl_fn_802676BC_000002DC
lbl_fn_802676BC_0000029C:
    lwz r3, 0x14b8(r31)
    bl fn_800F52F0
    bl fn_80267B30
    cmpwi r3, 0x0
    bne lbl_fn_802676BC_000002C8
    lwz r0, 0x1688(r31)
    cmpwi r0, 0x5
    blt lbl_fn_802676BC_000002C8
    mr r3, r31
    bl fn_8026B9F0
    b lbl_fn_802676BC_000002DC
lbl_fn_802676BC_000002C8:
    mr r3, r31
    bl fn_8026D058
    b lbl_fn_802676BC_000002DC
lbl_fn_802676BC_000002D4:
    mr r3, r31
    bl fn_8026B748
lbl_fn_802676BC_000002DC:
    lwz r3, 0x14cc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14cc(r31)
    b lbl_fn_802676BC_00000448
lbl_fn_802676BC_000002EC:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802676BC_00000310
    lwz r3, 0x1500(r31)
    lwz r4, 0x14bc(r31)
    slwi r0, r3, 2
    subf r0, r3, r0
    cmpw r4, r0
    ble lbl_fn_802676BC_00000448
lbl_fn_802676BC_00000310:
    bl fn_80680CF8
    lis r4, 0x6666
    addi r0, r4, 0x6667
    mulhw r0, r0, r3
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    cmplwi r0, 0x1
    ble lbl_fn_802676BC_00000350
    cmpwi r0, 0x2
    beq lbl_fn_802676BC_0000037C
    cmpwi r0, 0x3
    beq lbl_fn_802676BC_000003A8
    b lbl_fn_802676BC_000003DC
lbl_fn_802676BC_00000350:
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802676BC_00000370
    mr r3, r31
    li r4, 0x0
    li r5, 0xa
    bl fn_8026C3E0
    b lbl_fn_802676BC_0000043C
lbl_fn_802676BC_00000370:
    mr r3, r31
    bl fn_8026D058
    b lbl_fn_802676BC_0000043C
lbl_fn_802676BC_0000037C:
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802676BC_0000039C
    mr r3, r31
    li r4, 0x0
    li r5, 0xd
    bl fn_8026C3E0
    b lbl_fn_802676BC_0000043C
lbl_fn_802676BC_0000039C:
    mr r3, r31
    bl fn_8026B118
    b lbl_fn_802676BC_0000043C
lbl_fn_802676BC_000003A8:
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802676BC_000003C8
    mr r3, r31
    li r4, 0x4
    li r5, 0xf
    bl fn_8026C3E0
    b lbl_fn_802676BC_0000043C
lbl_fn_802676BC_000003C8:
    mr r3, r31
    li r4, 0x0
    li r5, 0xb
    bl fn_8026C3E0
    b lbl_fn_802676BC_0000043C
lbl_fn_802676BC_000003DC:
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802676BC_00000400
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802676BC_00000400
    mr r3, r31
    bl fn_8026CDB4
    b lbl_fn_802676BC_0000043C
lbl_fn_802676BC_00000400:
    lwz r3, 0x14b8(r31)
    bl fn_800F52F0
    bl fn_80267B30
    cmpwi r3, 0x0
    bne lbl_fn_802676BC_00000434
    lwz r0, 0x1688(r31)
    cmpwi r0, 0x5
    blt lbl_fn_802676BC_00000434
    mr r3, r31
    li r4, 0x0
    li r5, 0xc
    bl fn_8026C3E0
    b lbl_fn_802676BC_0000043C
lbl_fn_802676BC_00000434:
    mr r3, r31
    bl fn_8026B118
lbl_fn_802676BC_0000043C:
    lwz r3, 0x14cc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14cc(r31)
lbl_fn_802676BC_00000448:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80267B20(void)
{
    nofralloc
    lwz r3, 0x55c(r3)
    blr
}

asm void fn_80267B28(void)
{
    nofralloc
    lwz r3, 0x560(r3)
    blr
}

asm void fn_80267B30(void)
{
    nofralloc
    lwz r5, 0xc(r3)
    li r3, 0x1
    rlwinm r4, r5, 0, 12, 12
    subis r0, r4, 0x8
    cmplwi r0, 0x0
    beqlr
    rlwinm r4, r5, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beqlr
    li r3, 0x0
    blr
}

asm void fn_80267B60(void)
{
    nofralloc
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80267B60_000004C4
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x14
    bne lbl_fn_80267B60_000004C4
    li r3, 0x8
    blr
lbl_fn_80267B60_000004C4:
    li r3, 0x0
    blr
}

asm void fn_80267B88(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x8
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bne lbl_fn_80267B88_0000053C
    lfs f5, 0x530(r3)
    lfs f0, 0x530(r5)
    lfs f4, 0x528(r3)
    addi r3, r1, 0x14
    lfs f3, 0x528(r5)
    fsubs f5, f5, f0
    lfs f0, lbl_80883674
    mr r4, r3
    fsubs f3, f4, f3
    stfs f5, 0x1c(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x8
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r31
    stfs f2, 0x10(r1)
    bl fn_8026C844
lbl_fn_80267B88_0000053C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80267C0C(void)
{
    nofralloc
    lwz r0, 0x12a8(r3)
    li r6, 0x0
    srwi. r0, r0, 31
    beq lbl_fn_80267C0C_00000568
    li r6, 0x1
    b lbl_fn_80267C0C_000005C8
lbl_fn_80267C0C_00000568:
    cmpwi r4, 0x0
    beq lbl_fn_80267C0C_00000590
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80267C0C_00000590
    lwz r0, 0x560(r4)
    cmpwi r0, 0x9
    bne lbl_fn_80267C0C_00000590
    li r6, 0x1
    b lbl_fn_80267C0C_000005C8
lbl_fn_80267C0C_00000590:
    lwz r5, 0xfdc(r3)
    cmplw r4, r5
    beq lbl_fn_80267C0C_000005C8
    cmpwi r4, 0x0
    beq lbl_fn_80267C0C_000005B0
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80267C0C_000005C4
lbl_fn_80267C0C_000005B0:
    cmpwi r5, 0x0
    beq lbl_fn_80267C0C_000005C8
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80267C0C_000005C8
lbl_fn_80267C0C_000005C4:
    li r6, 0x1
lbl_fn_80267C0C_000005C8:
    cmpwi r6, 0x0
    li r0, 0x12c
    stw r4, 0xfdc(r3)
    stw r0, 0xfe0(r3)
    beq lbl_fn_80267C0C_000005EC
    lwz r4, 0xfe4(r3)
    addi r0, r4, 0x1
    stw r0, 0xfe4(r3)
    blr
lbl_fn_80267C0C_000005EC:
    li r0, 0x1
    stw r0, 0xfe4(r3)
    blr
}

asm void fn_80267CB4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_27
    lwz r0, 0x121c(r3)
    mr r31, r3
    li r27, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80267CB4_00000640
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x6c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    b lbl_fn_80267CB4_0000065C
lbl_fn_80267CB4_00000640:
    lis r5, lbl_80784D74@ha
    lwzu r4, lbl_80784D74@l(r5)
    stw r4, 0x6c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
lbl_fn_80267CB4_0000065C:
    lwz r5, 0x6c(r1)
    addi r3, r1, 0x60
    lwz r4, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r0, 0x68(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80267CB4_00000694
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 13
    bne lbl_fn_80267CB4_00000694
    li r27, 0x1
lbl_fn_80267CB4_00000694:
    cmpwi r27, 0x0
    beq lbl_fn_80267CB4_000007A8
    lwz r3, 0x121c(r31)
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r27, 0x2
    lfs f1, lbl_80883670
    li r28, -0x1
    stw r27, 0xb8(r3)
    li r29, 0x1
    lfs f0, lbl_80883674
    addi r5, r31, 0xb0
    lwz r4, 0x121c(r31)
    addi r7, r1, 0x38
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    stfs f0, 0x44(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r5, lbl_8087F3C0
    li r30, 0x0
    addi r3, r31, 0x15a0
    li r4, 0x0
    stw r30, 0xb8(r5)
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    addi r4, r31, 0x15a0
    lfs f1, lbl_80883670
    addi r5, r31, 0xb0
    stw r27, 0xb8(r3)
    addi r7, r1, 0x10
    lfs f0, lbl_80883674
    addi r8, r1, 0x1c
    stfs f0, 0x1c(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    stw r30, 0xb8(r3)
    lwz r0, 0x12a4(r31)
    oris r0, r0, 0x4
    stw r0, 0x12a4(r31)
lbl_fn_80267CB4_000007A8:
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80267E7C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x121c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80267E7C_00000808
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_80267E7C_00000824
lbl_fn_80267E7C_00000808:
    lis r5, lbl_80784D80@ha
    lwzu r4, lbl_80784D80@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_80267E7C_00000824:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80267E7C_000008A0
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_80267E7C_000008A0
    lwz r3, lbl_8087F3C0
    mr r6, r31
    lwz r4, 0x121c(r30)
    li r5, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r6, r31
    addi r4, r30, 0x15a0
    li r5, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r6, r31
    addi r4, r30, 0x15ac
    li r5, 0x0
    bl fn_80239DAC
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x12a4(r30)
lbl_fn_80267E7C_000008A0:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80267F88(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r4, 0x55c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_80267F88_00000930
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80267F88_00000930
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b8(r29)
    mr r3, r29
    lfs f1, lbl_808836AC
    li r5, 0x0
    bl fn_80170A20
lbl_fn_80267F88_00000930:
    mr r3, r29
    bl fn_80267134
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80267F88_00000BDC
    lwz r4, 0x14b8(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80267F88_00000BDC
    addi r3, r1, 0x68
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x5c
    lfs f2, 0x530(r4)
    lfs f0, 0x530(r29)
    lfs f5, 0x6c(r1)
    lfs f4, 0x52c(r29)
    fsubs f6, f2, f0
    lfs f0, 0x528(r29)
    lfs f3, 0x68(r1)
    fsubs f4, f5, f4
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9940
    lfs f0, lbl_808836B0
    fcmpo cr0, f1, f0
    bge lbl_fn_80267F88_00000BDC
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    lfs f0, lbl_8088368C
    addi r30, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80267F88_000009F4
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_80267F88_000009E8
    lfs f0, lbl_80883690
    b lbl_fn_80267F88_000009EC
lbl_fn_80267F88_000009E8:
    lfs f0, lbl_80883694
lbl_fn_80267F88_000009EC:
    stfs f0, 0x48(r1)
    b lbl_fn_80267F88_00000A08
lbl_fn_80267F88_000009F4:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80267F88_00000A08:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
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
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
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
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80267F88_00000B24
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_80267F88_00000B14
    lfs f0, lbl_80883690
    b lbl_fn_80267F88_00000B18
lbl_fn_80267F88_00000B14:
    lfs f0, lbl_80883694
lbl_fn_80267F88_00000B18:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80267F88_00000B38
lbl_fn_80267F88_00000B24:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80267F88_00000B38:
    addi r3, r1, 0x44
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    li r31, 0x0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x54(r1)
    stfs f0, 0x538(r29)
    stw r31, 0x14bc(r29)
    stfs f2, 0x4c(r1)
    lwz r3, lbl_8087F048
    stfs f2, 0x58(r1)
    bl fn_800F8548
    lwz r5, 0x12a4(r29)
    li r0, 0x7
    stw r3, 0x590(r29)
    mr r3, r29
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x9
    stw r31, 0x14c4(r29)
    stw r5, 0x12a4(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lwz r5, 0x4e8(r29)
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r6, 0x1
    lfs f1, lbl_80883674
    li r7, 0x0
    stfs f0, 0x2e8(r29)
    li r8, 0x1
    lfs f2, lbl_80883698
    bl fn_80097C08
    lwz r3, 0x12a4(r29)
    li r0, 0x12c
    stw r0, 0x164c(r29)
    ori r3, r3, 0x20
    stw r3, 0x12a4(r29)
lbl_fn_80267F88_00000BDC:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802682C4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x9
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    bl fn_8016E970
    mr r3, r30
    bl fn_80267134
    lwz r0, 0x4ec(r30)
    lwz r3, 0x2dc(r30)
    cmpw r3, r0
    bne lbl_fn_802682C4_00000CA0
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802682C4_00000DE4
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lwz r5, 0x4e8(r30)
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r6, 0x1
    lfs f1, lbl_80883674
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    lfs f2, lbl_80883698
    bl fn_80097C08
    b lbl_fn_802682C4_00000DE4
lbl_fn_802682C4_00000CA0:
    lwz r0, 0x14c0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802682C4_00000D74
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_802682C4_00000DE4
    lwz r5, 0x14b8(r30)
    addi r4, r1, 0x14
    lfs f0, 0x530(r30)
    addi r3, r1, 0x8
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f5, 0x18(r1)
    lfs f4, 0x52c(r30)
    fsubs f6, f2, f0
    lfs f0, 0x528(r30)
    lfs f3, 0x14(r1)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    lfs f0, lbl_808836A0
    fcmpo cr0, f1, f0
    ble lbl_fn_802682C4_00000DE4
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802682C4_00000DE4
lbl_fn_802682C4_00000D74:
    lwz r3, 0x164c(r30)
    subic. r0, r3, 0x1
    stw r0, 0x164c(r30)
    bgt lbl_fn_802682C4_00000DE4
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_802682C4_00000DE4:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802684C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802684C0_00000EA4
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802684C0_00000F30
lbl_fn_802684C0_00000EA4:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_808836B4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802684C0_00000F30
    lfs f0, lbl_808836B8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802684C0_00000F30
    lwz r0, 0x14ec(r30)
    cmpwi r0, 0x0
    ble lbl_fn_802684C0_00000EF4
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x2b
    bne lbl_fn_802684C0_00000EF4
    lis r4, lbl_80744608@ha
    mr r3, r30
    addi r4, r4, lbl_80744608@l
    addi r4, r4, 0x1e4
    bl fn_8026F9BC
lbl_fn_802684C0_00000EF4:
    li r3, 0x60e
    bl fn_80219E6C
    mr r31, r3
    mr r3, r30
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r8, 0x590(r30)
    mr r7, r31
    lfs f1, lbl_80883674
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_802684C0_00000F30:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8026860C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8026860C_00000FF8
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r31)
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r30, 0x14c4(r31)
    stw r5, 0x12a4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_8026860C_000015D0
lbl_fn_8026860C_00000FF8:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808836BC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8026860C_000012CC
    lfs f0, lbl_808836C0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8026860C_000012CC
    lis r4, lbl_80744608@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80744608@l
    li r5, 0x0
    addi r4, r4, 0x1f1
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8026860C_00001044
    li r3, 0x0
    b lbl_fn_8026860C_00001050
lbl_fn_8026860C_00001044:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8026860C_00001050:
    lwz r5, 0x14b8(r31)
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    cmpwi r5, 0x0
    lfs f4, 0xc(r3)
    stfs f4, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
    beq lbl_fn_8026860C_000015D0
    lis r4, lbl_80744608@ha
    addi r30, r5, 0xb0
    addi r4, r4, lbl_80744608@l
    li r5, 0x0
    mr r3, r30
    addi r4, r4, 0x1fd
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8026860C_000010A0
    li r3, 0x0
    b lbl_fn_8026860C_000010AC
lbl_fn_8026860C_000010A0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_8026860C_000010AC:
    lfs f4, 0x2c(r3)
    addi r30, r1, 0x68
    lfs f0, 0xa0(r1)
    addi r5, r1, 0x5c
    lfs f5, 0x1c(r3)
    mr r4, r30
    lfs f6, 0xc(r3)
    fsubs f2, f4, f0
    lfs f3, 0x9c(r1)
    mr r3, r30
    lfs f0, 0x98(r1)
    fsubs f3, f5, f3
    stfs f6, 0x8c(r1)
    fsubs f0, f6, f0
    stfs f3, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x90(r1)
    stfs f4, 0x94(r1)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    lfs f2, 0x70(r1)
    addi r3, r31, 0x1510
    psq_l f1, 0x0(r30), 0, 0
    addi r30, r1, 0x50
    frsp f3, f2
    lfs f0, lbl_8088368C
    psq_st f1, 0x0(r3), 0, 0
    fabs f4, f3
    stfs f2, 0x1518(r31)
    psq_st f1, 0x0(r30), 0, 0
    frsp f4, f4
    stfs f2, 0x58(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8026860C_00001164
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026860C_00001158
    lfs f0, lbl_80883690
    b lbl_fn_8026860C_0000115C
lbl_fn_8026860C_00001158:
    lfs f0, lbl_80883694
lbl_fn_8026860C_0000115C:
    stfs f0, 0x48(r1)
    b lbl_fn_8026860C_00001178
lbl_fn_8026860C_00001164:
    fmr f2, f3
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8026860C_00001178:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x38
    lfs f30, 0xb0(r1)
    mr r5, r4
    lfs f31, 0xac(r1)
    addi r3, r1, 0xd8
    lfs f13, 0xa8(r1)
    lfs f12, 0xc0(r1)
    lfs f11, 0xbc(r1)
    lfs f10, 0xb8(r1)
    lfs f9, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f7, 0xc8(r1)
    lfs f6, 0xd4(r1)
    lfs f5, 0xc4(r1)
    lfs f4, 0xb4(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xd8(r1)
    stfs f31, 0xdc(r1)
    stfs f30, 0xe0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f12, 0xf0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xe4(r1)
    stfs f5, 0xf4(r1)
    stfs f6, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026860C_00001294
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026860C_00001284
    lfs f0, lbl_80883690
    b lbl_fn_8026860C_00001288
lbl_fn_8026860C_00001284:
    lfs f0, lbl_80883694
lbl_fn_8026860C_00001288:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8026860C_000012A8
lbl_fn_8026860C_00001294:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8026860C_000012A8:
    addi r3, r1, 0x44
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x54(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_8026860C_000015D0
lbl_fn_8026860C_000012CC:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_808836C4
    lfs f0, lbl_8088368C
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026860C_000015D0
    lfs f0, lbl_80883670
    lis r3, lbl_80744608@ha
    addi r3, r3, lbl_80744608@l
    stfs f0, 0x12cc(r31)
    addi r4, r3, 0x202
    li r5, 0x0
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8026860C_0000131C
    li r4, 0x0
    b lbl_fn_8026860C_00001328
lbl_fn_8026860C_0000131C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8026860C_00001328:
    lfs f0, 0x2c(r4)
    lis r3, lbl_80744608@ha
    lfs f3, 0x1c(r4)
    addi r3, r3, lbl_80744608@l
    lfs f4, 0xc(r4)
    addi r4, r3, 0x20f
    stfs f4, 0x80(r1)
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8026860C_00001368
    li r3, 0x0
    b lbl_fn_8026860C_00001374
lbl_fn_8026860C_00001368:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8026860C_00001374:
    lfs f0, 0x2c(r3)
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    stfs f4, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8026860C_00001560
    lfs f8, lbl_80883674
    li r4, 0x0
    lfs f7, lbl_808836AC
    li r0, -0x1
    lfs f6, lbl_808836C8
    lis r3, lbl_80744608@ha
    lfs f5, lbl_808836CC
    addi r3, r3, lbl_80744608@l
    lfs f4, lbl_808836D0
    addi r3, r3, 0x1fd
    lfs f3, lbl_808836BC
    stw r4, 0x118(r1)
    lfs f0, lbl_808836D4
    stfs f8, 0x11c(r1)
    stfs f7, 0x120(r1)
    stfs f6, 0x124(r1)
    stfs f5, 0x128(r1)
    stfs f4, 0x12c(r1)
    stfs f3, 0x130(r1)
    stw r4, 0x134(r1)
    stw r0, 0x138(r1)
    lwz r0, 0x14b8(r31)
    stw r0, 0x118(r1)
    stfs f0, 0x128(r1)
    bl fn_800DC6B4
    stw r3, 0x134(r1)
    li r3, 0x617
    lwz r30, lbl_8087F048
    bl fn_80219E6C
    lfs f1, lbl_80883674
    mr r5, r3
    lfs f2, lbl_80883670
    mr r3, r30
    mr r4, r31
    addi r6, r1, 0x80
    addi r7, r31, 0x1510
    addi r8, r1, 0x118
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    lwz r3, lbl_8087F8A0
    li r7, 0x0
    lwz r8, 0x48(r3)
    b lbl_fn_8026860C_000014EC
lbl_fn_8026860C_00001448:
    lwz r6, 0x38(r8)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8026860C_00001474
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8026860C_00001474
    li r5, 0x1
lbl_fn_8026860C_00001474:
    cmpwi r5, 0x0
    beq lbl_fn_8026860C_00001490
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8026860C_00001490
    li r3, 0x1
lbl_fn_8026860C_00001490:
    cmpwi r3, 0x0
    beq lbl_fn_8026860C_000014C4
    lwz r0, 0x55c(r8)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8026860C_000014B8
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_8026860C_000014B8
    li r3, 0x1
lbl_fn_8026860C_000014B8:
    cmpwi r3, 0x0
    bne lbl_fn_8026860C_000014C4
    li r4, 0x1
lbl_fn_8026860C_000014C4:
    cmpwi r4, 0x0
    beq lbl_fn_8026860C_000014E8
    lwz r3, 0x5c(r8)
    lwz r3, 0x11c(r3)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_8026860C_000014E8
    mr r7, r8
    b lbl_fn_8026860C_000014F4
lbl_fn_8026860C_000014E8:
    lwz r8, 0x14ac(r8)
lbl_fn_8026860C_000014EC:
    cmpwi r8, 0x0
    bne lbl_fn_8026860C_00001448
lbl_fn_8026860C_000014F4:
    cmpwi r7, 0x0
    beq lbl_fn_8026860C_00001500
    b lbl_fn_8026860C_00001504
lbl_fn_8026860C_00001500:
    lwz r7, 0x14b8(r31)
lbl_fn_8026860C_00001504:
    lfs f0, lbl_808836D4
    lis r3, lbl_80744608@ha
    addi r3, r3, lbl_80744608@l
    stw r7, 0x118(r1)
    addi r3, r3, 0x1fd
    stfs f0, 0x128(r1)
    bl fn_800DC6B4
    stw r3, 0x134(r1)
    li r3, 0x617
    lwz r30, lbl_8087F048
    bl fn_80219E6C
    lfs f1, lbl_80883674
    mr r5, r3
    lfs f2, lbl_80883670
    mr r3, r30
    mr r4, r31
    addi r6, r1, 0x74
    addi r7, r31, 0x1510
    addi r8, r1, 0x118
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_8026860C_000015D0
lbl_fn_8026860C_00001560:
    lwz r30, lbl_8087F048
    li r3, 0x60f
    bl fn_80219E6C
    lfs f1, lbl_80883674
    mr r5, r3
    lfs f2, lbl_80883670
    mr r3, r30
    mr r4, r31
    addi r6, r1, 0x80
    addi r7, r31, 0x1510
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    lwz r30, lbl_8087F048
    li r3, 0x60f
    bl fn_80219E6C
    lfs f1, lbl_80883674
    mr r5, r3
    lfs f2, lbl_80883670
    mr r3, r30
    mr r4, r31
    addi r6, r1, 0x74
    addi r7, r31, 0x1510
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
lbl_fn_8026860C_000015D0:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80268CB4(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    mr r31, r3
    stw r30, 0x1e8(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80268CB4_00001698
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r31)
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r30, 0x14c4(r31)
    stw r5, 0x12a4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80268CB4_00001844
lbl_fn_80268CB4_00001698:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808836D8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80268CB4_00001728
    lfs f0, lbl_808836B0
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80268CB4_00001728
    lwz r0, 0x14ec(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80268CB4_000016E8
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_80268CB4_000016E8
    lis r4, lbl_80744608@ha
    mr r3, r31
    addi r4, r4, lbl_80744608@l
    addi r4, r4, 0x1e4
    bl fn_8026F9BC
lbl_fn_80268CB4_000016E8:
    li r3, 0x610
    bl fn_80219E6C
    mr r30, r3
    mr r3, r31
    bl fn_80144710
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r3, lbl_8087F048
    mr r7, r30
    lfs f1, lbl_80883674
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_80268CB4_00001844
lbl_fn_80268CB4_00001728:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808836DC
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80268CB4_000017B8
    lfs f0, lbl_808836E0
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80268CB4_000017B8
    lwz r0, 0x14ec(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80268CB4_00001778
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x2d
    bne lbl_fn_80268CB4_00001778
    lis r4, lbl_80744608@ha
    mr r3, r31
    addi r4, r4, lbl_80744608@l
    addi r4, r4, 0x1e4
    bl fn_8026F9BC
lbl_fn_80268CB4_00001778:
    li r3, 0x611
    bl fn_80219E6C
    mr r30, r3
    mr r3, r31
    bl fn_80144710
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r3, lbl_8087F048
    mr r7, r30
    lfs f1, lbl_80883674
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_80268CB4_00001844
lbl_fn_80268CB4_000017B8:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808836E4
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80268CB4_00001844
    lfs f0, lbl_808836E8
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80268CB4_00001844
    lwz r0, 0x14ec(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80268CB4_00001808
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x48
    bne lbl_fn_80268CB4_00001808
    lis r4, lbl_80744608@ha
    mr r3, r31
    addi r4, r4, lbl_80744608@l
    addi r4, r4, 0x1e4
    bl fn_8026F9BC
lbl_fn_80268CB4_00001808:
    li r3, 0x612
    bl fn_80219E6C
    mr r30, r3
    mr r3, r31
    bl fn_80144710
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r3, lbl_8087F048
    mr r7, r30
    lfs f1, lbl_80883674
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80268CB4_00001844:
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x1d8(r1)
    lis r3, lbl_807445D8@ha
    lwz r0, 0x30(r4)
    addi r30, r1, 0x158
    lfs f8, lbl_80883674
    mullw r0, r0, r0
    lfs f0, lbl_80883670
    lfs f7, lbl_808836F0
    lfd f11, lbl_807445D8@l(r3)
    stfs f7, 0x30(r1)
    lfs f9, lbl_808836EC
    xoris r0, r0, 0x8000
    stw r0, 0x1dc(r1)
    lfd f10, 0x1d8(r1)
    stfs f8, 0x28(r1)
    fsubs f7, f10, f11
    stfs f8, 0x184(r1)
    fdivs f7, f9, f7
    stfs f8, 0x17c(r1)
    stfs f8, 0x178(r1)
    stfs f8, 0x174(r1)
    stfs f8, 0x170(r1)
    stfs f8, 0x168(r1)
    stfs f7, 0x2c(r1)
    stfs f8, 0x164(r1)
    stfs f8, 0x160(r1)
    stfs f8, 0x15c(r1)
    stfs f0, 0x180(r1)
    stfs f0, 0x16c(r1)
    stfs f0, 0x158(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f8, f1
    beq lbl_fn_80268CB4_00001920
    addi r3, r1, 0x68
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x68
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80268CB4_00001920:
    lfs f0, lbl_80883674
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80268CB4_00001980
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc8
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80268CB4_00001980:
    lfs f0, lbl_80883674
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80268CB4_000019E0
    addi r3, r1, 0x128
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x128
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80268CB4_000019E0:
    addi r4, r1, 0x28
    addi r3, r1, 0x158
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x0
    stw r0, 0x1bc(r1)
    mr r4, r31
    addi r3, r1, 0x18
    stw r0, 0x1c0(r1)
    addi r5, r31, 0x528
    stw r0, 0x1c4(r1)
    stw r0, 0x1c8(r1)
    bl fn_80176548
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x188
    lfs f1, 0x24(r1)
    addi r5, r1, 0x18
    addi r6, r1, 0x28
    addi r8, r31, 0x5b8
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004D388
    addi r4, r1, 0x198
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x5a8(r31)
    lfs f7, 0xc(r1)
    lfs f2, 0x1a0(r1)
    fsubs f8, f7, f0
    lfs f7, 0x5ac(r31)
    lfs f0, 0x24(r1)
    fsubs f2, f2, f7
    lfs f9, 0x8(r1)
    lfs f7, 0x5a4(r31)
    fsubs f0, f8, f0
    stfs f2, 0x530(r31)
    fsubs f7, f9, f7
    stfs f0, 0xc(r1)
    stfs f7, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r0, 0x204(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}
