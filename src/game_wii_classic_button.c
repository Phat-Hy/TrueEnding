#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_80010374(void);
extern void fn_8001260C(void);
extern void fn_8001296C(void);
extern void fn_8004ECC0(void);
extern void fn_8008BBD8(void);
extern void fn_800928B0(void);
extern void fn_800A555C(void);
extern void fn_800C16B4(void);
extern void fn_80480438(void);
extern void fn_80483F70(void);
extern void fn_80484088(void);
extern void fn_804846FC(void);
extern void fn_80484A78(void);
extern void fn_80484BF4(void);
extern void fn_80484D40(void);
extern void fn_80484D64(void);
extern void fn_80484E88(void);
extern void fn_80485028(void);
extern void fn_80485964(void);
extern void fn_80486BEC(void);
extern void fn_80486DAC(void);
extern void fn_80487064(void);
extern void fn_8048E9E0(void);
extern void fn_8048EE78(void);
extern void fn_8048F184(void);
extern void fn_80491528(void);
extern void fn_804A0614(void);
extern void fn_805381CC(void);
extern void fn_805381F4(void);
extern void fn_805384D0(void);
extern void fn_80538B1C(void);
extern void fn_80538DC8(void);
extern void fn_80538FD8(void);
extern void fn_80541BDC(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8075F060[];
extern u8 lbl_80794F70[];
extern u8 lbl_80794F90[];
extern u8 lbl_807C9248[];
extern u8 lbl_807C9548[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F540;
extern u32 lbl_8087F558;
extern u32 lbl_8087F988;
extern u32 lbl_80887EB4;
extern u32 lbl_80887EB8;
extern u32 lbl_80887ED4;

/* Function declarations */
void fn_80560D90(void);
void fn_80560E9C(void);
void fn_80560F08(void);
void fn_80560F9C(void);
void fn_80560FEC(void);
void fn_805611C0(void);
void fn_80561248(void);
void fn_8056142C(void);
void fn_80561568(void);
void fn_805616A4(void);
void fn_805616F0(void);
void fn_8056173C(void);
void fn_80561B20(void);
void fn_80561B54(void);
void fn_80561BD4(void);
void fn_805623A8(void);
void fn_805623D4(void);
void fn_8056248C(void);
void fn_805625A0(void);
void fn_805626E8(void);

asm void fn_80560D90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80560D90_00000038
    lwz r4, 0x2c(r31)
    b lbl_fn_80560D90_0000003C
lbl_fn_80560D90_00000038:
    li r4, 0x0
lbl_fn_80560D90_0000003C:
    lwz r0, 0x148(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80560D90_00000074
lbl_fn_80560D90_00000054:
    lwz r0, 0x144(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_80560D90_0000006C
    b lbl_fn_80560D90_00000078
lbl_fn_80560D90_0000006C:
    addi r4, r4, 0x1c
    bdnz lbl_fn_80560D90_00000054
lbl_fn_80560D90_00000074:
    li r5, 0x0
lbl_fn_80560D90_00000078:
    lwz r3, lbl_8087F540
    lbz r0, 0x2404(r3)
    extrwi. r0, r0, 1, 24
    bne lbl_fn_80560D90_000000B0
    lfs f1, 0x1f6c(r3)
    lfs f0, lbl_80887EB8
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    bne lbl_fn_80560D90_000000A8
    bl fn_8048E9E0
    b lbl_fn_80560D90_000000F0
lbl_fn_80560D90_000000A8:
    li r3, 0x3
    b lbl_fn_80560D90_000000F4
lbl_fn_80560D90_000000B0:
    cmpwi r5, 0x0
    beq lbl_fn_80560D90_000000F0
    lwz r3, 0x18(r5)
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80560D90_000000F0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80560D90_000000F0
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    li r5, 0x3
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80560D90_000000F0:
    li r3, 0x0
lbl_fn_80560D90_000000F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80560E9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_80560E9C_00000164
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80560E9C_00000134
    lwz r3, 0x2c(r4)
    b lbl_fn_80560E9C_00000138
lbl_fn_80560E9C_00000134:
    li r3, 0x0
lbl_fn_80560E9C_00000138:
    cmpwi r0, 0x1
    lwz r0, 0x4(r3)
    ble lbl_fn_80560E9C_00000150
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x8
    b lbl_fn_80560E9C_00000154
lbl_fn_80560E9C_00000150:
    li r3, 0x0
lbl_fn_80560E9C_00000154:
    lfs f1, 0x4(r3)
    mr r4, r0
    lwz r3, lbl_8087F540
    bl fn_80486BEC
lbl_fn_80560E9C_00000164:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80560F08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    beq lbl_fn_80560F08_000001A0
    cmpwi r5, 0x6
    beq lbl_fn_80560F08_000001E8
    b lbl_fn_80560F08_000001F4
lbl_fn_80560F08_000001A0:
    mr r3, r31
    bl fn_805381CC
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x2
    bl fn_80538B1C
    lwz r0, 0x30(r31)
    addi r4, r1, 0x8
    lwz r3, lbl_8087F540
    cmpwi r0, 0x5
    ble lbl_fn_80560F08_000001D8
    lwz r5, 0x2c(r31)
    addi r5, r5, 0x28
    b lbl_fn_80560F08_000001DC
lbl_fn_80560F08_000001D8:
    li r5, 0x0
lbl_fn_80560F08_000001DC:
    lwz r5, 0x4(r5)
    bl fn_804846FC
    b lbl_fn_80560F08_000001F4
lbl_fn_80560F08_000001E8:
    mr r3, r31
    li r4, 0x2
    bl fn_80538FD8
lbl_fn_80560F08_000001F4:
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80560F9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_80560F9C_00000248
    lwz r0, 0x30(r4)
    lwz r3, lbl_8087F540
    cmpwi r0, 0x1
    ble lbl_fn_80560F9C_0000023C
    lwz r4, 0x2c(r4)
    addi r4, r4, 0x8
    b lbl_fn_80560F9C_00000240
lbl_fn_80560F9C_0000023C:
    li r4, 0x0
lbl_fn_80560F9C_00000240:
    lwz r4, 0x4(r4)
    bl fn_80484A78
lbl_fn_80560F9C_00000248:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80560FEC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r27, r4
    mr r31, r3
    mr r3, r27
    bl fn_805381CC
    lwz r0, 0x30(r27)
    mr r29, r3
    cmpwi r0, 0x0
    ble lbl_fn_80560FEC_00000298
    lwz r3, 0x2c(r27)
    b lbl_fn_80560FEC_0000029C
lbl_fn_80560FEC_00000298:
    li r3, 0x0
lbl_fn_80560FEC_0000029C:
    cmpwi r0, 0x1
    lwz r30, 0x4(r3)
    ble lbl_fn_80560FEC_000002B4
    lwz r3, 0x2c(r27)
    addi r3, r3, 0x8
    b lbl_fn_80560FEC_000002B8
lbl_fn_80560FEC_000002B4:
    li r3, 0x0
lbl_fn_80560FEC_000002B8:
    lwz r28, 0x4(r3)
    mr r4, r27
    addi r3, r1, 0x34
    li r5, 0x2
    bl fn_805381F4
    lwz r0, 0x30(r27)
    cmpwi r0, 0x5
    lwz r0, 0x168(r29)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80560FEC_00000308
lbl_fn_80560FEC_000002E8:
    lwz r0, 0x164(r29)
    add r27, r0, r3
    lwz r0, 0x14(r27)
    cmpw r30, r0
    bne lbl_fn_80560FEC_00000300
    b lbl_fn_80560FEC_0000030C
lbl_fn_80560FEC_00000300:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_80560FEC_000002E8
lbl_fn_80560FEC_00000308:
    li r27, 0x0
lbl_fn_80560FEC_0000030C:
    cmpwi r27, 0x0
    bne lbl_fn_80560FEC_00000324
    lfs f0, lbl_80887EB8
    stfs f0, 0x0(r31)
    stfs f0, 0x4(r31)
    b lbl_fn_80560FEC_00000418
lbl_fn_80560FEC_00000324:
    mr r4, r27
    addi r3, r1, 0x28
    bl fn_80010374
    lwz r0, 0x20(r27)
    cmpwi r0, 0x6
    bne lbl_fn_80560FEC_00000364
    mr r4, r29
    addi r3, r1, 0x1c
    addi r5, r1, 0x34
    bl fn_80541BDC
    addi r3, r1, 0x1c
    lfs f2, 0x24(r1)
    addi r4, r1, 0x34
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3c(r1)
lbl_fn_80560FEC_00000364:
    mr r3, r27
    bl fn_8001296C
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80560FEC_000003D4
    mr r4, r28
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80560FEC_00000394
    li r5, 0x0
    b lbl_fn_80560FEC_000003A0
lbl_fn_80560FEC_00000394:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r5, r3, r0
lbl_fn_80560FEC_000003A0:
    cmpwi r5, 0x0
    beq lbl_fn_80560FEC_000003D4
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x10
    lfs f3, 0xc(r5)
    addi r3, r1, 0x28
    lfs f2, 0x2c(r5)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x30(r1)
lbl_fn_80560FEC_000003D4:
    lfs f4, 0x28(r1)
    addi r3, r1, 0x8
    lfs f0, 0x34(r1)
    lfs f3, 0x30(r1)
    fadds f5, f4, f0
    lfs f0, 0x3c(r1)
    lfs f4, 0x2c(r1)
    fadds f0, f3, f0
    lfs f3, 0x38(r1)
    stfs f5, 0x8(r1)
    fadds f3, f4, f3
    stfs f0, 0xc(r1)
    stfs f5, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    psq_st f1, 0x0(r31), 0, 0
lbl_fn_80560FEC_00000418:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805611C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    lwz r0, 0x30(r4)
    cmpwi r0, 0x5
    ble lbl_fn_805611C0_0000045C
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x28
    b lbl_fn_805611C0_00000460
lbl_fn_805611C0_0000045C:
    li r3, 0x0
lbl_fn_805611C0_00000460:
    lfs f31, 0x4(r3)
    addi r3, r1, 0x20
    bl fn_80560FEC
    stfs f31, 0x18(r1)
    addi r6, r1, 0x18
    addi r4, r1, 0x10
    addi r7, r1, 0x20
    stfs f31, 0x1c(r1)
    addi r5, r1, 0x8
    lwz r3, lbl_8087F540
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    bl fn_80484D64
    psq_l f31, 0x38(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80561248(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r4
    beq lbl_fn_80561248_000004F0
    cmpwi r5, 0x2
    beq lbl_fn_80561248_000005BC
    cmpwi r5, 0x3
    beq lbl_fn_80561248_00000674
    b lbl_fn_80561248_0000067C
lbl_fn_80561248_000004F0:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x5
    ble lbl_fn_80561248_00000508
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x28
    b lbl_fn_80561248_0000050C
lbl_fn_80561248_00000508:
    li r3, 0x0
lbl_fn_80561248_0000050C:
    lfs f31, 0x4(r3)
    mr r4, r31
    addi r3, r1, 0x40
    bl fn_80560FEC
    lwz r0, 0x18(r31)
    stfs f31, 0x38(r1)
    cmpwi r0, 0x0
    stfs f31, 0x3c(r1)
    ble lbl_fn_80561248_0000055C
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8075F060@ha
    stw r3, 0x4c(r1)
    lfd f3, lbl_8075F060@l(r4)
    stw r0, 0x48(r1)
    lfs f0, lbl_80887EB4
    lfd f2, 0x48(r1)
    fsubs f2, f2, f3
    fdivs f31, f0, f2
    b lbl_fn_80561248_00000560
lbl_fn_80561248_0000055C:
    lfs f31, lbl_80887EB4
lbl_fn_80561248_00000560:
    lfs f2, 0x38(r1)
    lfs f0, 0x3c(r1)
    fmuls f2, f2, f31
    lwz r3, lbl_8087F540
    fmuls f0, f0, f31
    stfs f2, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_80484BF4
    lwz r5, lbl_8087F540
    addi r3, r1, 0x38
    li r0, 0x1
    addi r4, r1, 0x20
    stw r0, 0x1f0c(r5)
    addi r6, r1, 0x40
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x18
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f31
    lwz r3, lbl_8087F540
    bl fn_80484D40
    b lbl_fn_80561248_0000067C
lbl_fn_80561248_000005BC:
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80561248_0000067C
    lwz r0, 0x30(r4)
    cmpwi r0, 0x5
    ble lbl_fn_80561248_000005E0
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x28
    b lbl_fn_80561248_000005E4
lbl_fn_80561248_000005E0:
    li r3, 0x0
lbl_fn_80561248_000005E4:
    lfs f31, 0x4(r3)
    mr r4, r31
    addi r3, r1, 0x30
    bl fn_80560FEC
    lwz r0, 0x1c(r31)
    stfs f31, 0x28(r1)
    cmpwi r0, 0x0
    stfs f31, 0x2c(r1)
    ble lbl_fn_80561248_00000634
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8075F060@ha
    stw r3, 0x4c(r1)
    lfd f3, lbl_8075F060@l(r4)
    stw r0, 0x48(r1)
    lfs f0, lbl_80887EB4
    lfd f2, 0x48(r1)
    fsubs f2, f2, f3
    fdivs f0, f0, f2
    b lbl_fn_80561248_00000638
lbl_fn_80561248_00000634:
    lfs f0, lbl_80887EB4
lbl_fn_80561248_00000638:
    lwz r5, lbl_8087F540
    addi r3, r1, 0x28
    li r0, 0x0
    addi r4, r1, 0x10
    stw r0, 0x1f0c(r5)
    addi r6, r1, 0x30
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x8
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    lwz r3, lbl_8087F540
    bl fn_80484D40
    b lbl_fn_80561248_0000067C
lbl_fn_80561248_00000674:
    lwz r3, lbl_8087F540
    bl fn_80484E88
lbl_fn_80561248_0000067C:
    psq_l f31, 0x68(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8056142C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    beq lbl_fn_8056142C_000006C8
    cmpwi r5, 0x6
    beq lbl_fn_8056142C_00000744
    b lbl_fn_8056142C_000007BC
lbl_fn_8056142C_000006C8:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_8056142C_000006DC
    lwz r3, 0x2c(r4)
    b lbl_fn_8056142C_000006E0
lbl_fn_8056142C_000006DC:
    li r3, 0x0
lbl_fn_8056142C_000006E0:
    lwz r31, 0x4(r3)
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x1
    bl fn_805384D0
    lwz r0, 0x30(r30)
    cmpwi r0, 0x6
    ble lbl_fn_8056142C_0000070C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x30
    b lbl_fn_8056142C_00000710
lbl_fn_8056142C_0000070C:
    li r3, 0x0
lbl_fn_8056142C_00000710:
    cmpwi r0, 0x7
    lfs f1, 0x4(r3)
    lwz r3, lbl_8087F540
    mr r4, r31
    addi r5, r1, 0x8
    ble lbl_fn_8056142C_00000734
    lwz r6, 0x2c(r30)
    addi r6, r6, 0x38
    b lbl_fn_8056142C_00000738
lbl_fn_8056142C_00000734:
    li r6, 0x0
lbl_fn_8056142C_00000738:
    lwz r6, 0x4(r6)
    bl fn_80485028
    b lbl_fn_8056142C_000007BC
lbl_fn_8056142C_00000744:
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    cmpwi r0, 0x1
    ble lbl_fn_8056142C_00000764
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x8
    b lbl_fn_8056142C_00000768
lbl_fn_8056142C_00000764:
    li r4, 0x0
lbl_fn_8056142C_00000768:
    lwz r0, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8056142C_000007A0
lbl_fn_8056142C_00000780:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_8056142C_00000798
    b lbl_fn_8056142C_000007A4
lbl_fn_8056142C_00000798:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8056142C_00000780
lbl_fn_8056142C_000007A0:
    li r5, 0x0
lbl_fn_8056142C_000007A4:
    lwz r0, 0x20(r5)
    cmpwi r0, 0x6
    bne lbl_fn_8056142C_000007BC
    mr r3, r30
    li r4, 0x3
    bl fn_80538DC8
lbl_fn_8056142C_000007BC:
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80561568(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    beq lbl_fn_80561568_00000800
    cmpwi r5, 0x6
    beq lbl_fn_80561568_00000888
    b lbl_fn_80561568_000008FC
lbl_fn_80561568_00000800:
    addi r3, r1, 0x14
    li r5, 0x0
    bl fn_805384D0
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x5
    bl fn_80538B1C
    lwz r0, 0x30(r31)
    cmpwi r0, 0x8
    ble lbl_fn_80561568_00000834
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x40
    b lbl_fn_80561568_00000838
lbl_fn_80561568_00000834:
    li r3, 0x0
lbl_fn_80561568_00000838:
    cmpwi r0, 0x9
    lfs f1, 0x4(r3)
    ble lbl_fn_80561568_00000850
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x48
    b lbl_fn_80561568_00000854
lbl_fn_80561568_00000850:
    li r3, 0x0
lbl_fn_80561568_00000854:
    cmpwi r0, 0xa
    lfs f2, 0x4(r3)
    lwz r3, lbl_8087F540
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    ble lbl_fn_80561568_00000878
    lwz r6, 0x2c(r31)
    addi r6, r6, 0x50
    b lbl_fn_80561568_0000087C
lbl_fn_80561568_00000878:
    li r6, 0x0
lbl_fn_80561568_0000087C:
    lwz r6, 0x4(r6)
    bl fn_80485964
    b lbl_fn_80561568_000008FC
lbl_fn_80561568_00000888:
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80561568_000008A4
    lwz r4, 0x2c(r31)
    b lbl_fn_80561568_000008A8
lbl_fn_80561568_000008A4:
    li r4, 0x0
lbl_fn_80561568_000008A8:
    lwz r0, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80561568_000008E0
lbl_fn_80561568_000008C0:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_80561568_000008D8
    b lbl_fn_80561568_000008E4
lbl_fn_80561568_000008D8:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_80561568_000008C0
lbl_fn_80561568_000008E0:
    li r5, 0x0
lbl_fn_80561568_000008E4:
    lwz r0, 0x20(r5)
    cmpwi r0, 0x6
    bne lbl_fn_80561568_000008FC
    mr r3, r31
    li r4, 0x2
    bl fn_80538DC8
lbl_fn_80561568_000008FC:
    lwz r31, 0x2c(r1)
    li r3, 0x0
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805616A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_805616A4_0000094C
    lwz r0, 0x30(r4)
    lwz r3, lbl_8087F540
    cmpwi r0, 0x0
    ble lbl_fn_805616A4_00000940
    lwz r4, 0x2c(r4)
    b lbl_fn_805616A4_00000944
lbl_fn_805616A4_00000940:
    li r4, 0x0
lbl_fn_805616A4_00000944:
    lwz r4, 0x4(r4)
    bl fn_80486DAC
lbl_fn_805616A4_0000094C:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805616F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_805616F0_00000998
    lwz r0, 0x30(r4)
    lwz r3, lbl_8087F540
    cmpwi r0, 0x0
    ble lbl_fn_805616F0_0000098C
    lwz r4, 0x2c(r4)
    b lbl_fn_805616F0_00000990
lbl_fn_805616F0_0000098C:
    li r4, 0x0
lbl_fn_805616F0_00000990:
    lwz r4, 0x4(r4)
    bl fn_80487064
lbl_fn_805616F0_00000998:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8056173C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_23
    lwz r0, 0x30(r4)
    mr r27, r4
    cmpwi r0, 0x5
    ble lbl_fn_8056173C_000009E4
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x28
    b lbl_fn_8056173C_000009E8
lbl_fn_8056173C_000009E4:
    li r3, 0x0
lbl_fn_8056173C_000009E8:
    cmpwi r0, 0x0
    lwz r30, 0x4(r3)
    ble lbl_fn_8056173C_000009FC
    lwz r3, 0x2c(r4)
    b lbl_fn_8056173C_00000A00
lbl_fn_8056173C_000009FC:
    li r3, 0x0
lbl_fn_8056173C_00000A00:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056173C_00000B50
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x6
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8056173C_00000D6C
    lwz r3, lbl_8087F540
    li r0, 0x2
    addi r5, r1, 0x20
    li r6, 0x3
    lwz r7, 0x1a38(r3)
    li r8, 0x0
    li r9, 0x0
    mtctr r0
lbl_fn_8056173C_00000A44:
    addic. r3, r9, 0x1
    li r4, 0x0
    blt lbl_fn_8056173C_00000A60
    lwz r0, 0x30(r27)
    cmpw r3, r0
    bge lbl_fn_8056173C_00000A60
    li r4, 0x1
lbl_fn_8056173C_00000A60:
    cmpwi r4, 0x0
    beq lbl_fn_8056173C_00000A7C
    addi r0, r9, 0x1
    lwz r3, 0x2c(r27)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_8056173C_00000A80
lbl_fn_8056173C_00000A7C:
    li r3, 0x0
lbl_fn_8056173C_00000A80:
    lwz r3, 0x4(r3)
    stw r3, 0x0(r5)
    subi r0, r3, 0x1
    cmpw r7, r0
    bne lbl_fn_8056173C_00000A98
    mr r8, r9
lbl_fn_8056173C_00000A98:
    cmpwi r3, 0x0
    bne lbl_fn_8056173C_00000AA8
    mr r6, r9
    b lbl_fn_8056173C_00000B1C
lbl_fn_8056173C_00000AA8:
    addic. r3, r9, 0x2
    li r4, 0x0
    addi r9, r9, 0x1
    blt lbl_fn_8056173C_00000AC8
    lwz r0, 0x30(r27)
    cmpw r3, r0
    bge lbl_fn_8056173C_00000AC8
    li r4, 0x1
lbl_fn_8056173C_00000AC8:
    cmpwi r4, 0x0
    beq lbl_fn_8056173C_00000AE4
    addi r0, r9, 0x1
    lwz r3, 0x2c(r27)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_8056173C_00000AE8
lbl_fn_8056173C_00000AE4:
    li r3, 0x0
lbl_fn_8056173C_00000AE8:
    lwz r3, 0x4(r3)
    stw r3, 0x4(r5)
    subi r0, r3, 0x1
    cmpw r7, r0
    bne lbl_fn_8056173C_00000B00
    mr r8, r9
lbl_fn_8056173C_00000B00:
    cmpwi r3, 0x0
    bne lbl_fn_8056173C_00000B10
    mr r6, r9
    b lbl_fn_8056173C_00000B1C
lbl_fn_8056173C_00000B10:
    addi r5, r5, 0x8
    addi r9, r9, 0x1
    bdnz lbl_fn_8056173C_00000A44
lbl_fn_8056173C_00000B1C:
    addi r8, r8, 0x1
    cmpw r8, r6
    ble lbl_fn_8056173C_00000B2C
    li r8, 0x0
lbl_fn_8056173C_00000B2C:
    slwi r0, r8, 2
    addi r3, r1, 0x20
    lwzx r3, r3, r0
    lwz r4, lbl_8087F540
    subi r3, r3, 0x1
    srawi r0, r3, 31
    andc r0, r3, r0
    stw r0, 0x1a38(r4)
    b lbl_fn_8056173C_00000D6C
lbl_fn_8056173C_00000B50:
    cmpwi r0, 0x1
    bne lbl_fn_8056173C_00000C4C
    lwz r31, 0x38(r4)
    cmpwi r31, 0x0
    bne lbl_fn_8056173C_00000C40
    lfs f31, lbl_80887ED4
    li r29, 0x0
    li r24, 0x0
lbl_fn_8056173C_00000B70:
    addic. r3, r24, 0x1
    li r4, 0x0
    blt lbl_fn_8056173C_00000B8C
    lwz r0, 0x30(r27)
    cmpw r3, r0
    bge lbl_fn_8056173C_00000B8C
    li r4, 0x1
lbl_fn_8056173C_00000B8C:
    cmpwi r4, 0x0
    beq lbl_fn_8056173C_00000BA8
    addi r0, r24, 0x1
    lwz r3, 0x2c(r27)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_8056173C_00000BAC
lbl_fn_8056173C_00000BA8:
    li r3, 0x0
lbl_fn_8056173C_00000BAC:
    lwz r25, 0x4(r3)
    cmpwi r25, 0x0
    beq lbl_fn_8056173C_00000C1C
    subi r0, r25, 0x1
    lwz r4, lbl_8087F540
    mulli r0, r0, 0x65c
    addi r3, r1, 0x8
    add r4, r4, r0
    lfs f1, 0xe4(r4)
    lfs f0, 0xd8(r4)
    lfs f3, 0xe0(r4)
    fsubs f4, f1, f0
    lfs f2, 0xd4(r4)
    lfs f1, 0xdc(r4)
    lfs f0, 0xd0(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_8056173C_00000C10
    fmr f31, f1
    subi r29, r25, 0x1
lbl_fn_8056173C_00000C10:
    addi r24, r24, 0x1
    cmpwi r24, 0x4
    blt lbl_fn_8056173C_00000B70
lbl_fn_8056173C_00000C1C:
    lwz r3, lbl_8087F540
    lwz r0, 0x1a38(r3)
    cmpw r29, r0
    beq lbl_fn_8056173C_00000C44
    srawi r0, r29, 31
    mr r31, r30
    andc r0, r29, r0
    stw r0, 0x1a38(r3)
    b lbl_fn_8056173C_00000C44
lbl_fn_8056173C_00000C40:
    subi r31, r31, 0x1
lbl_fn_8056173C_00000C44:
    stw r31, 0x38(r27)
    b lbl_fn_8056173C_00000D6C
lbl_fn_8056173C_00000C4C:
    cmpwi r0, 0x2
    bne lbl_fn_8056173C_00000D6C
    lwz r31, 0x38(r4)
    cmpwi r31, 0x0
    bne lbl_fn_8056173C_00000D64
    li r29, 0x0
    li r28, 0x0
lbl_fn_8056173C_00000C68:
    addic. r3, r28, 0x1
    li r4, 0x0
    blt lbl_fn_8056173C_00000C84
    lwz r0, 0x30(r27)
    cmpw r3, r0
    bge lbl_fn_8056173C_00000C84
    li r4, 0x1
lbl_fn_8056173C_00000C84:
    cmpwi r4, 0x0
    beq lbl_fn_8056173C_00000CA0
    addi r0, r28, 0x1
    lwz r3, 0x2c(r27)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_8056173C_00000CA4
lbl_fn_8056173C_00000CA0:
    li r3, 0x0
lbl_fn_8056173C_00000CA4:
    lwz r24, 0x4(r3)
    cmpwi r24, 0x0
    beq lbl_fn_8056173C_00000D40
    subi r0, r24, 0x1
    lwz r3, lbl_8087F540
    mulli r0, r0, 0x65c
    li r23, 0x0
    add r25, r3, r0
    lwz r3, 0x308(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8056173C_00000CD8
    bl fn_8001260C
    mr r23, r3
lbl_fn_8056173C_00000CD8:
    lwz r3, lbl_8087EE98
    mr r8, r23
    addi r4, r1, 0x14
    addi r5, r25, 0xd0
    addi r6, r25, 0xdc
    li r7, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    mr r26, r3
    lwz r3, lbl_8087EE98
    mr r8, r23
    addi r4, r1, 0x14
    addi r5, r25, 0xdc
    addi r6, r25, 0xd0
    li r7, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r26, 0x0
    bne lbl_fn_8056173C_00000D34
    cmpwi r3, 0x0
    bne lbl_fn_8056173C_00000D34
    subi r29, r24, 0x1
    b lbl_fn_8056173C_00000D40
lbl_fn_8056173C_00000D34:
    addi r28, r28, 0x1
    cmpwi r28, 0x4
    blt lbl_fn_8056173C_00000C68
lbl_fn_8056173C_00000D40:
    lwz r3, lbl_8087F540
    lwz r0, 0x1a38(r3)
    cmpw r29, r0
    beq lbl_fn_8056173C_00000D68
    srawi r0, r29, 31
    mr r31, r30
    andc r0, r29, r0
    stw r0, 0x1a38(r3)
    b lbl_fn_8056173C_00000D68
lbl_fn_8056173C_00000D64:
    subi r31, r31, 0x1
lbl_fn_8056173C_00000D68:
    stw r31, 0x38(r27)
lbl_fn_8056173C_00000D6C:
    psq_l f31, 0x68(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_23
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80561B20(void)
{
    nofralloc
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_80561B20_00000DB0
    cmpwi r5, 0x0
    bne lbl_fn_80561B20_00000DBC
    li r0, 0x0
    stw r0, 0x38(r4)
    b lbl_fn_80561B20_00000DBC
lbl_fn_80561B20_00000DB0:
    lwz r3, lbl_8087F540
    li r0, 0x0
    stw r0, 0x1a38(r3)
lbl_fn_80561B20_00000DBC:
    li r3, 0x0
    blr
}

asm void fn_80561B54(void)
{
    nofralloc
    lwz r0, 0x2ac(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80561B54_00000DD8
    addi r3, r4, 0x2b0
    b lbl_fn_80561B54_00000DE0
lbl_fn_80561B54_00000DD8:
    lwz r3, lbl_8087EFA8
    addi r3, r3, 0x324
lbl_fn_80561B54_00000DE0:
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    psq_l f2, 0xc(r5), 0, 0
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    psq_st f2, 0xc(r3), 0, 0
    psq_l f2, 0x1c(r5), 0, 0
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    psq_st f2, 0x1c(r3), 0, 0
    psq_l f2, 0x2c(r5), 0, 0
    psq_l f1, 0x24(r5), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    psq_st f2, 0x2c(r3), 0, 0
    psq_l f2, 0x3c(r5), 0, 0
    psq_l f1, 0x34(r5), 0, 0
    psq_st f1, 0x34(r3), 0, 0
    psq_st f2, 0x3c(r3), 0, 0
    lwz r0, 0x44(r5)
    stw r0, 0x44(r3)
    lwz r0, 0x48(r5)
    stw r0, 0x48(r3)
    lfs f0, 0x4c(r5)
    stfs f0, 0x4c(r3)
    blr
}

asm void fn_80561BD4(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1d0
    bl _savegpr_23
    lis r0, 0x4330
    mr r31, r4
    mr r30, r3
    stw r0, 0x198(r1)
    mr r3, r31
    stw r0, 0x1a0(r1)
    bl fn_805381CC
    cmpwi r3, 0x0
    bne lbl_fn_80561BD4_00000E84
    li r3, 0x0
    b lbl_fn_80561BD4_00001600
lbl_fn_80561BD4_00000E84:
    lwz r0, 0x10(r31)
    lis r4, lbl_8075F060@ha
    lfd f4, lbl_8075F060@l(r4)
    xoris r4, r0, 0x8000
    stw r4, 0x19c(r1)
    lfs f5, 0x198(r3)
    lfd f0, 0x198(r1)
    lwz r5, 0x14(r31)
    fsubs f0, f0, f4
    fcmpo cr0, f0, f5
    cror eq, lt, eq
    bne lbl_fn_80561BD4_00000F14
    lwz r3, 0x18(r31)
    add r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1a4(r1)
    lfd f0, 0x1a0(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_80561BD4_00000F14
    stw r4, 0x19c(r1)
    lfs f0, lbl_80887EB8
    lfd f3, 0x198(r1)
    fsubs f3, f3, f4
    fsubs f5, f5, f3
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_80561BD4_00000EFC
    b lbl_fn_80561BD4_00000FA8
lbl_fn_80561BD4_00000EFC:
    xoris r0, r3, 0x8000
    stw r0, 0x1a4(r1)
    lfd f0, 0x1a0(r1)
    fsubs f0, f0, f4
    fdivs f0, f5, f0
    b lbl_fn_80561BD4_00000FA8
lbl_fn_80561BD4_00000F14:
    lwz r4, 0x1c(r31)
    lis r3, lbl_8075F060@ha
    lfd f4, lbl_8075F060@l(r3)
    subf r0, r4, r5
    xoris r3, r0, 0x8000
    stw r3, 0x19c(r1)
    lfd f0, 0x198(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f0, f5
    cror eq, lt, eq
    bne lbl_fn_80561BD4_00000FA4
    xoris r0, r5, 0x8000
    stw r0, 0x1a4(r1)
    lfd f0, 0x1a0(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_80561BD4_00000FA4
    stw r3, 0x19c(r1)
    lfs f0, lbl_80887EB8
    lfd f3, 0x198(r1)
    fsubs f3, f3, f4
    fsubs f5, f5, f3
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_80561BD4_00000F84
    lfs f0, lbl_80887EB4
    b lbl_fn_80561BD4_00000FA8
lbl_fn_80561BD4_00000F84:
    xoris r0, r4, 0x8000
    stw r0, 0x1a4(r1)
    lfs f0, lbl_80887EB4
    lfd f3, 0x1a0(r1)
    fsubs f3, f3, f4
    fdivs f3, f5, f3
    fsubs f0, f0, f3
    b lbl_fn_80561BD4_00000FA8
lbl_fn_80561BD4_00000FA4:
    lfs f0, lbl_80887EB4
lbl_fn_80561BD4_00000FA8:
    lfs f3, lbl_80887EB8
    li r3, 0x0
    lfs f4, lbl_80887EB4
    li r0, 0x1
    stfs f4, 0x80(r1)
    addi r10, r1, 0x80
    addi r11, r1, 0x14c
    addi r8, r1, 0x90
    stfs f3, 0x84(r1)
    addi r9, r1, 0x15c
    addi r6, r1, 0xa0
    addi r7, r1, 0x16c
    psq_l f1, 0x0(r10), 0, 0
    addi r4, r1, 0xb0
    stfs f3, 0x88(r1)
    addi r5, r1, 0x17c
    addi r25, r1, 0x40
    addi r24, r1, 0xfc
    stfs f3, 0x8c(r1)
    addi r27, r1, 0x50
    addi r26, r1, 0x10c
    addi r29, r1, 0x60
    psq_l f2, 0x8(r10), 0, 0
    addi r28, r1, 0x11c
    stfs f3, 0x90(r1)
    addi r10, r1, 0x70
    addi r12, r1, 0x12c
    lwz r23, lbl_8087F540
    stfs f4, 0x94(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f3, 0xa0(r1)
    stfs f3, 0xa4(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0xa8(r1)
    stfs f3, 0xac(r1)
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f3, 0xb8(r1)
    stfs f3, 0xbc(r1)
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f4, 0x40(r1)
    stfs f3, 0x44(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    stfs f3, 0x48(r1)
    stfs f3, 0x4c(r1)
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    stfs f3, 0x50(r1)
    stfs f4, 0x54(r1)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f3, 0x58(r1)
    stfs f3, 0x5c(r1)
    psq_st f2, 0x8(r24), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    stfs f3, 0x60(r1)
    stfs f3, 0x64(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    psq_st f2, 0x8(r26), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    stfs f3, 0x70(r1)
    stfs f3, 0x74(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f3, 0x78(r1)
    stfs f3, 0x7c(r1)
    psq_st f2, 0x8(r28), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stw r3, 0x18c(r1)
    stw r3, 0x190(r1)
    stfs f4, 0x194(r1)
    stw r0, 0x148(r1)
    stw r3, 0x13c(r1)
    stw r3, 0x140(r1)
    stfs f4, 0x144(r1)
    psq_st f1, 0x0(r12), 0, 0
    psq_st f2, 0x8(r12), 0, 0
    stw r0, 0xf8(r1)
    addi r3, r23, 0x1d74
    addi r4, r1, 0xfc
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r23, 0x1d84
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    addi r4, r1, 0x10c
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r23, 0x1d94
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    addi r4, r1, 0x11c
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r23, 0x1da4
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    addi r4, r1, 0x12c
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80561BD4_00001190
    lwz r3, 0x2c(r31)
    b lbl_fn_80561BD4_00001194
lbl_fn_80561BD4_00001190:
    li r3, 0x0
lbl_fn_80561BD4_00001194:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    bne lbl_fn_80561BD4_000012B8
    li r0, 0x4
    addi r8, r1, 0xd0
    lfs f3, lbl_80887EB4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    mtctr r0
lbl_fn_80561BD4_000011BC:
    subf r7, r3, r5
    li r6, 0x0
    addic. r9, r7, 0x1
    blt lbl_fn_80561BD4_000011DC
    lwz r0, 0x30(r31)
    cmpw r9, r0
    bge lbl_fn_80561BD4_000011DC
    li r6, 0x1
lbl_fn_80561BD4_000011DC:
    cmpwi r6, 0x0
    beq lbl_fn_80561BD4_000011F4
    lwz r6, 0x2c(r31)
    slwi r0, r9, 3
    add r6, r6, r0
    b lbl_fn_80561BD4_000011F8
lbl_fn_80561BD4_000011F4:
    li r6, 0x0
lbl_fn_80561BD4_000011F8:
    addic. r7, r7, 0x2
    lfs f4, 0x4(r6)
    li r6, 0x0
    blt lbl_fn_80561BD4_00001218
    lwz r0, 0x30(r31)
    cmpw r7, r0
    bge lbl_fn_80561BD4_00001218
    li r6, 0x1
lbl_fn_80561BD4_00001218:
    cmpwi r6, 0x0
    beq lbl_fn_80561BD4_00001230
    lwz r6, 0x2c(r31)
    slwi r0, r7, 3
    add r7, r6, r0
    b lbl_fn_80561BD4_00001234
lbl_fn_80561BD4_00001230:
    li r7, 0x0
lbl_fn_80561BD4_00001234:
    addi r6, r3, 0x1
    lfs f5, 0x4(r7)
    slwi r0, r6, 2
    li r7, 0x0
    subf. r9, r6, r0
    blt lbl_fn_80561BD4_0000125C
    lwz r0, 0x30(r31)
    cmpw r9, r0
    bge lbl_fn_80561BD4_0000125C
    li r7, 0x1
lbl_fn_80561BD4_0000125C:
    cmpwi r7, 0x0
    beq lbl_fn_80561BD4_00001274
    lwz r6, 0x2c(r31)
    slwi r0, r9, 3
    add r6, r6, r0
    b lbl_fn_80561BD4_00001278
lbl_fn_80561BD4_00001274:
    li r6, 0x0
lbl_fn_80561BD4_00001278:
    stfs f4, 0xd0(r1)
    addi r7, r1, 0x14c
    lfs f4, 0x4(r6)
    add r7, r7, r4
    stfs f5, 0xd4(r1)
    addi r3, r3, 0x1
    addi r4, r4, 0x10
    addi r5, r5, 0x4
    psq_l f1, 0x0(r8), 0, 0
    stfs f4, 0xd8(r1)
    stfs f3, 0xdc(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    bdnz lbl_fn_80561BD4_000011BC
    b lbl_fn_80561BD4_00001354
lbl_fn_80561BD4_000012B8:
    cmpwi r3, 0x1
    bne lbl_fn_80561BD4_000012D8
    fmr f1, f0
    lwz r3, lbl_8087F540
    addi r4, r1, 0xf8
    bl fn_80484088
    li r3, 0x0
    b lbl_fn_80561BD4_00001600
lbl_fn_80561BD4_000012D8:
    subi r0, r3, 0x1
    lis r3, lbl_807C9248@ha
    slwi r4, r0, 6
    addi r6, r1, 0x14c
    addi r3, r3, lbl_807C9248@l
    add r5, r3, r4
    addi r0, r4, 0x10
    psq_l f1, 0x0(r5), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    add r5, r3, r0
    psq_st f1, 0x0(r6), 0, 0
    addi r0, r4, 0x20
    psq_l f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    addi r6, r1, 0x15c
    psq_l f2, 0x8(r5), 0, 0
    add r5, r3, r0
    psq_st f1, 0x0(r6), 0, 0
    addi r0, r4, 0x30
    psq_l f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    addi r6, r1, 0x16c
    psq_l f2, 0x8(r5), 0, 0
    add r5, r3, r0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    addi r6, r1, 0x17c
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
lbl_fn_80561BD4_00001354:
    lfs f3, lbl_80887EB4
    li r0, 0x2
    addi r3, r1, 0xf8
    addi r4, r1, 0x148
    fsubs f7, f3, f0
    mtctr r0
lbl_fn_80561BD4_0000136C:
    lfs f6, 0x4(r3)
    lfs f9, 0x8(r3)
    fmuls f6, f6, f7
    lfs f8, 0x4(r4)
    fmuls f5, f9, f7
    lfs f10, 0xc(r3)
    lfs f11, 0x10(r3)
    fmadds f8, f8, f0, f6
    fmuls f4, f10, f7
    lfs f6, 0x14(r3)
    stfs f8, 0x4(r4)
    fmuls f3, f11, f7
    fmuls f6, f6, f7
    lfs f8, 0x8(r4)
    lfs f9, 0x18(r3)
    fmadds f8, f8, f0, f5
    lfs f10, 0x1c(r3)
    fmuls f5, f9, f7
    lfsu f11, 0x20(r3)
    stfs f8, 0x8(r4)
    lfs f8, 0xc(r4)
    fmadds f8, f8, f0, f4
    fmuls f4, f10, f7
    stfs f8, 0xc(r4)
    lfs f8, 0x10(r4)
    fmadds f8, f8, f0, f3
    fmuls f3, f11, f7
    stfs f8, 0x10(r4)
    lfs f8, 0x14(r4)
    fmadds f8, f8, f0, f6
    stfs f8, 0x14(r4)
    lfs f8, 0x18(r4)
    fmadds f8, f8, f0, f5
    stfs f8, 0x18(r4)
    lfs f8, 0x1c(r4)
    fmadds f8, f8, f0, f4
    stfs f8, 0x1c(r4)
    lfs f8, 0x20(r4)
    fmadds f8, f8, f0, f3
    stfsu f8, 0x20(r4)
    bdnz lbl_fn_80561BD4_0000136C
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r0, 0x260(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80561BD4_0000142C
    addi r8, r3, 0x264
    b lbl_fn_80561BD4_00001434
lbl_fn_80561BD4_0000142C:
    lwz r3, lbl_8087EFA8
    addi r8, r3, 0x324
lbl_fn_80561BD4_00001434:
    lwz r0, 0x148(r1)
    addi r3, r1, 0x14c
    stw r0, 0x0(r8)
    addi r4, r1, 0x15c
    addi r5, r1, 0x16c
    addi r7, r1, 0x17c
    psq_l f2, 0x8(r3), 0, 0
    lis r6, lbl_80794F70@ha
    psq_l f1, 0x0(r3), 0, 0
    li r3, 0x0
    psq_st f1, 0x4(r8), 0, 0
    psq_st f2, 0xc(r8), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x14(r8), 0, 0
    psq_st f2, 0x1c(r8), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x24(r8), 0, 0
    psq_st f2, 0x2c(r8), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x34(r8), 0, 0
    psq_st f2, 0x3c(r8), 0, 0
    lwz r0, 0x18c(r1)
    stw r0, 0x44(r8)
    lwz r0, 0x190(r1)
    stw r0, 0x48(r8)
    lfs f0, 0x194(r1)
    stfs f0, 0x4c(r8)
    lbz r0, lbl_8087F988
    lwzu r5, lbl_80794F70@l(r6)
    extsb. r0, r0
    stw r5, 0x34(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r0, 0xc8(r1)
    stw r30, 0xcc(r1)
    stw r3, 0xe0(r1)
    bne lbl_fn_80561BD4_00001518
    lis r6, lbl_807C9548@ha
    lis r4, fn_805623A8@ha
    lis r3, fn_805623D4@ha
    li r0, 0x1
    addi r3, r3, fn_805623D4@l
    addi r5, r6, lbl_807C9548@l
    addi r4, r4, fn_805623A8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9548@l(r6)
    stb r0, lbl_8087F988
lbl_fn_80561BD4_00001518:
    lwz r6, 0xc0(r1)
    addi r3, r1, 0x18
    lwz r5, 0xc4(r1)
    lwz r4, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80561BD4_0000158C
    addic. r0, r1, 0xe4
    lwz r5, 0x18(r1)
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_80561BD4_00001584
    stw r5, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r3, 0xec(r1)
    stw r0, 0xf0(r1)
lbl_fn_80561BD4_00001584:
    li r0, 0x1
    b lbl_fn_80561BD4_00001590
lbl_fn_80561BD4_0000158C:
    li r0, 0x0
lbl_fn_80561BD4_00001590:
    cmpwi r0, 0x0
    beq lbl_fn_80561BD4_000015A8
    lis r3, lbl_807C9548@ha
    addi r3, r3, lbl_807C9548@l
    stw r3, 0xe0(r1)
    b lbl_fn_80561BD4_000015B0
lbl_fn_80561BD4_000015A8:
    li r0, 0x0
    stw r0, 0xe0(r1)
lbl_fn_80561BD4_000015B0:
    lwz r3, lbl_8087F558
    addi r4, r1, 0xe0
    addi r5, r1, 0x148
    bl fn_80491528
    addic. r3, r1, 0xe0
    beq lbl_fn_80561BD4_000015FC
    lwz r4, 0xe0(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80561BD4_000015FC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80561BD4_000015F4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80561BD4_000015F4:
    li r0, 0x0
    stw r0, 0xe0(r1)
lbl_fn_80561BD4_000015FC:
    li r3, 0x0
lbl_fn_80561BD4_00001600:
    addi r11, r1, 0x1d0
    bl _restgpr_23
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_805623A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805623D4(void)
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
    bne lbl_fn_805623D4_00001678
    lis r3, lbl_80794F90@ha
    addi r3, r3, lbl_80794F90@l
    stw r3, 0x0(r4)
    b lbl_fn_805623D4_000016E4
lbl_fn_805623D4_00001678:
    cmpwi r5, 0x0
    bne lbl_fn_805623D4_000016AC
    cmpwi r4, 0x0
    beq lbl_fn_805623D4_000016E4
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_805623D4_000016E4
lbl_fn_805623D4_000016AC:
    cmpwi r5, 0x1
    beq lbl_fn_805623D4_000016E4
    lwz r5, 0x0(r4)
    lis r3, lbl_80794F90@ha
    lwz r4, lbl_80794F90@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_805623D4_000016DC
    stw r30, 0x0(r31)
    b lbl_fn_805623D4_000016E4
lbl_fn_805623D4_000016DC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805623D4_000016E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8056248C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    bne lbl_fn_8056248C_000017F4
    lwz r3, lbl_8087F540
    bl fn_80483F70
    addi r9, r1, 0xc
    psq_l f1, 0x4(r3), 0, 0
    psq_l f2, 0xc(r3), 0, 0
    addi r8, r1, 0x1c
    psq_st f1, 0x0(r9), 0, 0
    addi r7, r1, 0x2c
    lwz r30, lbl_8087F540
    li r0, 0x1
    psq_st f2, 0x8(r9), 0, 0
    addi r6, r1, 0x3c
    psq_l f1, 0x14(r3), 0, 0
    addi r10, r30, 0x1d74
    psq_l f2, 0x1c(r3), 0, 0
    addi r11, r30, 0x1d84
    psq_st f1, 0x0(r8), 0, 0
    addi r12, r30, 0x1d94
    psq_l f1, 0x24(r3), 0, 0
    addi r31, r30, 0x1da4
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x2c(r3), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x34(r3), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x3c(r3), 0, 0
    lwz r5, 0x44(r3)
    lwz r4, 0x48(r3)
    lfs f0, 0x4c(r3)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stw r0, 0x1d70(r30)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r12), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    stw r5, 0x1db4(r30)
    stw r4, 0x1db8(r30)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stfs f0, 0x54(r1)
    stw r0, 0x8(r1)
    stfs f0, 0x1dbc(r30)
lbl_fn_8056248C_000017F4:
    lwz r31, 0x5c(r1)
    li r3, 0x0
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805625A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_805625A0_00001944
    lwz r5, 0x30(r4)
    cmpwi r5, 0x0
    ble lbl_fn_805625A0_00001838
    lwz r3, 0x2c(r4)
    b lbl_fn_805625A0_0000183C
lbl_fn_805625A0_00001838:
    li r3, 0x0
lbl_fn_805625A0_0000183C:
    cmpwi r5, 0x1
    lwz r0, 0x4(r3)
    ble lbl_fn_805625A0_00001854
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x8
    b lbl_fn_805625A0_00001858
lbl_fn_805625A0_00001854:
    li r3, 0x0
lbl_fn_805625A0_00001858:
    cmpwi r5, 0x2
    lwz r6, 0x4(r3)
    ble lbl_fn_805625A0_00001870
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x10
    b lbl_fn_805625A0_00001874
lbl_fn_805625A0_00001870:
    li r3, 0x0
lbl_fn_805625A0_00001874:
    cmpwi r5, 0x3
    lfs f1, 0x4(r3)
    ble lbl_fn_805625A0_0000188C
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x18
    b lbl_fn_805625A0_00001890
lbl_fn_805625A0_0000188C:
    li r3, 0x0
lbl_fn_805625A0_00001890:
    cmpwi r5, 0x4
    lfs f2, 0x4(r3)
    ble lbl_fn_805625A0_000018A8
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x20
    b lbl_fn_805625A0_000018AC
lbl_fn_805625A0_000018A8:
    li r3, 0x0
lbl_fn_805625A0_000018AC:
    cmpwi r5, 0x5
    lfs f3, 0x4(r3)
    ble lbl_fn_805625A0_000018C4
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x28
    b lbl_fn_805625A0_000018C8
lbl_fn_805625A0_000018C4:
    li r3, 0x0
lbl_fn_805625A0_000018C8:
    cmpwi r5, 0x6
    lfs f4, 0x4(r3)
    ble lbl_fn_805625A0_000018E0
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x30
    b lbl_fn_805625A0_000018E4
lbl_fn_805625A0_000018E0:
    li r3, 0x0
lbl_fn_805625A0_000018E4:
    cmpwi r5, 0x7
    lfs f5, 0x4(r3)
    ble lbl_fn_805625A0_000018FC
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x38
    b lbl_fn_805625A0_00001900
lbl_fn_805625A0_000018FC:
    li r3, 0x0
lbl_fn_805625A0_00001900:
    cmpwi r5, 0x8
    lwz r5, 0x4(r3)
    ble lbl_fn_805625A0_00001918
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x40
    b lbl_fn_805625A0_0000191C
lbl_fn_805625A0_00001918:
    li r3, 0x0
lbl_fn_805625A0_0000191C:
    cmpwi r0, 0x0
    lfs f6, 0x4(r3)
    beq lbl_fn_805625A0_00001938
    lwz r3, lbl_8087F540
    mr r4, r6
    bl fn_8048EE78
    b lbl_fn_805625A0_00001944
lbl_fn_805625A0_00001938:
    lwz r3, lbl_8087F540
    mr r4, r6
    bl fn_8048F184
lbl_fn_805625A0_00001944:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805626E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    stmw r27, 0xc(r1)
    mr r31, r4
    ble lbl_fn_805626E8_00001A4C
    cmpwi r5, 0x0
    bne lbl_fn_805626E8_00001B14
    mr r3, r31
    bl fn_805381CC
    mr r29, r3
    lwz r3, lbl_8087F540
    bl fn_80480438
    mr r28, r3
    li r27, 0x0
    li r30, 0x0
lbl_fn_805626E8_000019A0:
    cmpwi r27, 0x0
    li r3, 0x0
    blt lbl_fn_805626E8_000019BC
    lwz r0, 0x30(r31)
    cmpw r27, r0
    bge lbl_fn_805626E8_000019BC
    li r3, 0x1
lbl_fn_805626E8_000019BC:
    cmpwi r3, 0x0
    beq lbl_fn_805626E8_000019D0
    lwz r0, 0x2c(r31)
    add r4, r0, r30
    b lbl_fn_805626E8_000019D4
lbl_fn_805626E8_000019D0:
    li r4, 0x0
lbl_fn_805626E8_000019D4:
    lwz r0, 0x118(r29)
    li r3, 0x0
    lwz r4, 0x4(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805626E8_00001A0C
lbl_fn_805626E8_000019EC:
    lwz r0, 0x114(r29)
    add r5, r0, r3
    lwz r0, 0x14(r5)
    cmpw r4, r0
    bne lbl_fn_805626E8_00001A04
    b lbl_fn_805626E8_00001A10
lbl_fn_805626E8_00001A04:
    addi r3, r3, 0x18
    bdnz lbl_fn_805626E8_000019EC
lbl_fn_805626E8_00001A0C:
    li r5, 0x0
lbl_fn_805626E8_00001A10:
    cmpwi r5, 0x0
    beq lbl_fn_805626E8_00001A38
    mr r3, r28
    addi r4, r5, 0x8
    bl fn_804A0614
    cmpwi r3, 0x0
    beq lbl_fn_805626E8_00001A38
    lwz r0, 0x88(r3)
    oris r0, r0, 0x8000
    stw r0, 0x88(r3)
lbl_fn_805626E8_00001A38:
    addi r27, r27, 0x1
    addi r30, r30, 0x8
    cmpwi r27, 0xc
    blt lbl_fn_805626E8_000019A0
    b lbl_fn_805626E8_00001B14
lbl_fn_805626E8_00001A4C:
    mr r3, r31
    bl fn_805381CC
    mr r29, r3
    lwz r3, lbl_8087F540
    bl fn_80480438
    mr r27, r3
    li r28, 0x0
    li r30, 0x0
lbl_fn_805626E8_00001A6C:
    cmpwi r28, 0x0
    li r3, 0x0
    blt lbl_fn_805626E8_00001A88
    lwz r0, 0x30(r31)
    cmpw r28, r0
    bge lbl_fn_805626E8_00001A88
    li r3, 0x1
lbl_fn_805626E8_00001A88:
    cmpwi r3, 0x0
    beq lbl_fn_805626E8_00001A9C
    lwz r0, 0x2c(r31)
    add r4, r0, r30
    b lbl_fn_805626E8_00001AA0
lbl_fn_805626E8_00001A9C:
    li r4, 0x0
lbl_fn_805626E8_00001AA0:
    lwz r0, 0x118(r29)
    li r3, 0x0
    lwz r4, 0x4(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805626E8_00001AD8
lbl_fn_805626E8_00001AB8:
    lwz r0, 0x114(r29)
    add r5, r0, r3
    lwz r0, 0x14(r5)
    cmpw r4, r0
    bne lbl_fn_805626E8_00001AD0
    b lbl_fn_805626E8_00001ADC
lbl_fn_805626E8_00001AD0:
    addi r3, r3, 0x18
    bdnz lbl_fn_805626E8_00001AB8
lbl_fn_805626E8_00001AD8:
    li r5, 0x0
lbl_fn_805626E8_00001ADC:
    cmpwi r5, 0x0
    beq lbl_fn_805626E8_00001B04
    mr r3, r27
    addi r4, r5, 0x8
    bl fn_804A0614
    cmpwi r3, 0x0
    beq lbl_fn_805626E8_00001B04
    lwz r0, 0x88(r3)
    clrlwi r0, r0, 1
    stw r0, 0x88(r3)
lbl_fn_805626E8_00001B04:
    addi r28, r28, 0x1
    addi r30, r30, 0x8
    cmpwi r28, 0xc
    blt lbl_fn_805626E8_00001A6C
lbl_fn_805626E8_00001B14:
    lmw r27, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
