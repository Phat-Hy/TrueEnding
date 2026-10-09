#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _savegpr_14(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void fn_800500FC(void);
extern void fn_8005DF90(void);
extern void fn_800610A4(void);
extern void fn_80063764(void);
extern void fn_8006FE08(void);
extern void fn_800704DC(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_800B3978(void);
extern void fn_800B64DC(void);
extern void fn_800BFAC8(void);
extern void fn_800C0D4C(void);
extern void fn_805F93C0(void);
extern void fn_805F9420(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80615E00(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_8067E23C(void);
extern void fn_8068A6D8(void);
extern void fn_8068A918(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80732E28[];
extern u8 lbl_80732E48[];
extern u8 lbl_807790A8[];
extern u8 lbl_807C7060[];
extern u8 lbl_807C74A0[];
extern u8 lbl_807C7560[];
extern u8 lbl_807C7580[];

/* Small data declarations */
extern u32 lbl_8087D888;
extern u32 lbl_8087D88C;
extern u32 lbl_8087D890;
extern u32 lbl_8087D894;
extern u32 lbl_8087D898;
extern u32 lbl_8087D89C;
extern u32 lbl_8087D8A0;
extern u32 lbl_8087D8A4;
extern u32 lbl_8087D8A8;
extern u32 lbl_8087D8AC;
extern u32 lbl_8087D8B0;
extern u32 lbl_8087D8B4;
extern u32 lbl_8087D8B8;
extern u32 lbl_8087D8BC;
extern u32 lbl_8087D8C0;
extern u32 lbl_8087D8C4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFA0;
extern u32 lbl_8087EFA4;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880F40;
extern u32 lbl_80880F44;
extern u32 lbl_80880F48;
extern u32 lbl_80880F4C;
extern u32 lbl_80880F50;
extern u32 lbl_80880F54;
extern u32 lbl_80880F58;

/* Function declarations */
void fn_800B4054(void);
void fn_800B4134(void);
void fn_800B4390(void);
void fn_800B448C(void);
void fn_800B4694(void);
void fn_800B47AC(void);
void fn_800B543C(void);
void fn_800B5528(void);
void fn_800B5994(void);

asm void fn_800B4054(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80880F4C
    stw r0, 0x14(r1)
    li r0, 0x20
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x14(r3)
    mtctr r0
lbl_fn_800B4054_00000024:
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x50(r3)
    stfs f0, 0x54(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    stfs f0, 0x68(r3)
    stfs f0, 0x6c(r3)
    stfs f0, 0x70(r3)
    stfs f0, 0x74(r3)
    stfs f0, 0x78(r3)
    stfs f0, 0x7c(r3)
    addi r3, r3, 0x80
    bdnz lbl_fn_800B4054_00000024
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x20
    li r7, 0x20
    bl fn_80075F58
    li r0, 0x0
    stw r0, 0x2c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B4134(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x20
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    mr r30, r28
lbl_fn_800B4134_0000010C:
    sraw r5, r31, r29
    lwz r3, 0x18(r30)
    lwz r4, 0x14(r30)
    mr r6, r5
    bl fn_800B3978
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x4
    blt lbl_fn_800B4134_0000010C
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B4134_0000031C
    lbz r0, lbl_8087EFA0
    cmpwi r0, 0x0
    bne lbl_fn_800B4134_000001F8
    li r3, 0x20
    li r4, 0x20
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    mr r29, r3
    bl fn_800827E0
    lis r6, lbl_80732E48@ha
    mr r4, r29
    addi r6, r6, lbl_80732E48@l
    li r5, 0x20
    addi r7, r6, 0xd
    li r9, 0x0
    li r6, 0x6
    li r10, 0x0
    mr r8, r7
    bl fn_800839EC
    stw r3, lbl_8087EFA4
    lis r31, lbl_807C7580@ha
    mr r4, r3
    li r5, 0x20
    li r6, 0x20
    addi r3, r31, lbl_807C7580@l
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880F48
    addi r3, r31, lbl_807C7580@l
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    li r0, 0x1
    stb r0, lbl_8087EFA0
lbl_fn_800B4134_000001F8:
    lwz r6, lbl_8087EFA4
    li r8, 0x0
    lwz r7, 0x14(r28)
    li r4, 0x0
    lfs f2, lbl_80880F44
    li r3, 0x0
    lfs f0, lbl_80880F4C
    li r0, 0x8
lbl_fn_800B4134_00000218:
    add r9, r6, r4
    add r5, r7, r3
    li r10, 0x0
    mtctr r0
lbl_fn_800B4134_00000228:
    lfs f3, 0x0(r5)
    fmuls f1, f2, f3
    fcmpu cr0, f0, f3
    fctiwz f1, f1
    stfd f1, 0x8(r1)
    lwz r11, 0xc(r1)
    bne lbl_fn_800B4134_00000248
    li r11, 0x0
lbl_fn_800B4134_00000248:
    stb r11, 0x0(r9)
    lfs f3, 0x4(r5)
    fmuls f1, f2, f3
    fcmpu cr0, f0, f3
    fctiwz f1, f1
    stfd f1, 0x8(r1)
    lwz r11, 0xc(r1)
    bne lbl_fn_800B4134_0000026C
    li r11, 0x0
lbl_fn_800B4134_0000026C:
    stb r11, 0x1(r9)
    lfs f3, 0x8(r5)
    fmuls f1, f2, f3
    fcmpu cr0, f0, f3
    fctiwz f1, f1
    stfd f1, 0x8(r1)
    lwz r11, 0xc(r1)
    bne lbl_fn_800B4134_00000290
    li r11, 0x0
lbl_fn_800B4134_00000290:
    stb r11, 0x2(r9)
    lfs f3, 0xc(r5)
    fmuls f1, f2, f3
    fcmpu cr0, f0, f3
    fctiwz f1, f1
    stfd f1, 0x8(r1)
    lwz r11, 0xc(r1)
    bne lbl_fn_800B4134_000002B4
    li r11, 0x0
lbl_fn_800B4134_000002B4:
    stb r11, 0x3(r9)
    addi r9, r9, 0x4
    addi r5, r5, 0x10
    addi r10, r10, 0x3
    bdnz lbl_fn_800B4134_00000228
    addi r8, r8, 0x1
    addi r3, r3, 0x80
    cmpwi r8, 0x20
    addi r4, r4, 0x20
    blt lbl_fn_800B4134_00000218
    lwz r3, lbl_8087EFA4
    li r4, 0x1
    li r5, 0x20
    li r6, 0x20
    bl fn_800C0D4C
    lfs f4, lbl_80880F58
    lis r5, lbl_807C7580@ha
    lwz r3, lbl_8087EEB0
    addi r5, r5, lbl_807C7580@l
    fmr f5, f4
    lfs f1, lbl_80880F50
    lfs f2, lbl_80880F54
    li r4, -0x1
    lfs f3, lbl_80880F48
    li r6, 0x0
    bl fn_8005DF90
lbl_fn_800B4134_0000031C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800B4390(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mfcr r0
    lis r8, lbl_807790A8@ha
    stw r0, 0xc(r1)
    addi r8, r8, lbl_807790A8@l
    li r9, 0x0
    mtctr r5
    subi r5, r5, 0x1
    psq_l f8, 0x0(r8), 0, 0
    psq_l f0, 0x0(r3), 0, 0
    psq_l f1, 0x8(r3), 0, 0
    ps_neg f0, f0
    ps_neg f1, f1
    psq_l f2, 0x0(r4), 0, 0
    psq_l f3, 0x8(r4), 1, 0
    addi r3, r4, 0xc
    ps_mul f9, f2, f0
    ps_madd f10, f3, f1, f9
    ps_sum0 f6, f10, f10, f10
    ps_cmpo0 cr0, f8, f6
lbl_fn_800B4390_0000038C:
    psq_l f4, 0x0(r3), 0, 0
    psq_l f5, 0x8(r3), 1, 0
    ps_mul f9, f4, f0
    ps_madd f10, f5, f1, f9
    ps_sum0 f7, f10, f10, f10
    ps_cmpo0 cr1, f8, f7
    addi r3, r3, 0xc
    blt lbl_fn_800B4390_000003D8
    blt cr1, lbl_fn_800B4390_000003DC
lbl_fn_800B4390_000003B0:
    ps_mr f2, f4
    ps_mr f3, f5
    ps_mr f6, f7
    mcrf cr0, cr1
    subi r5, r5, 0x1
    cmpwi cr2, r5, 0x0
    bne cr2, lbl_fn_800B4390_000003D0
    mr r3, r4
lbl_fn_800B4390_000003D0:
    bdnz lbl_fn_800B4390_0000038C
    b lbl_fn_800B4390_00000424
lbl_fn_800B4390_000003D8:
    blt cr1, lbl_fn_800B4390_00000410
lbl_fn_800B4390_000003DC:
    fsub f10, f6, f7
    fres f9, f10
    fmul f6, f9, f6
    ps_sub f9, f4, f2
    ps_sub f10, f5, f3
    ps_madds0 f9, f9, f6, f2
    ps_madds0 f10, f10, f6, f3
    psq_st f9, 0x0(r6), 0, 0
    stfs f10, 0x8(r6)
    addi r6, r6, 0xc
    addi r9, r9, 0x1
    blt cr1, lbl_fn_800B4390_00000410
    b lbl_fn_800B4390_000003B0
lbl_fn_800B4390_00000410:
    addi r9, r9, 0x1
    psq_st f4, 0x0(r6), 0, 0
    stfs f5, 0x8(r6)
    addi r6, r6, 0xc
    b lbl_fn_800B4390_000003B0
lbl_fn_800B4390_00000424:
    stw r9, 0x0(r7)
    lwz r12, 0xc(r1)
    mtcrf 255, r12
    addi r1, r1, 0x10
    blr
}

asm void fn_800B448C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    mulli r0, r6, 0x28
    lwz r6, 0x14(r4)
    stmw r25, 0x14(r1)
    mr r29, r5
    mr r27, r3
    mr r28, r4
    add r31, r6, r0
    mr r3, r29
    mr r4, r31
    bl fn_800500FC
    cmpwi r3, 0x2
    bne lbl_fn_800B448C_000004C4
    lhz r4, 0x20(r31)
    mr r3, r27
    lwz r7, 0x24(r28)
    li r6, 0x1
    slwi r0, r4, 2
    lhz r5, 0x22(r31)
    subf r4, r4, r0
    cmpwi r7, -0x1
    slwi r0, r5, 2
    lwz r8, 0x1c(r28)
    slwi r4, r4, 1
    add r4, r8, r4
    subf r5, r5, r0
    bne lbl_fn_800B448C_000004B0
    li r6, 0x4
lbl_fn_800B448C_000004B0:
    lwz r8, 0x28(r28)
    li r9, 0x0
    li r10, 0x0
    bl fn_800B47AC
    b lbl_fn_800B448C_0000062C
lbl_fn_800B448C_000004C4:
    cmpwi r3, 0x1
    bne lbl_fn_800B448C_0000062C
    lhz r4, 0x24(r31)
    mr r3, r27
    lwz r7, 0x24(r28)
    li r6, 0x1
    slwi r0, r4, 2
    lhz r5, 0x26(r31)
    subf r4, r4, r0
    cmpwi r7, -0x1
    slwi r0, r5, 2
    lwz r8, 0x1c(r28)
    slwi r4, r4, 1
    add r4, r8, r4
    subf r5, r5, r0
    bne lbl_fn_800B448C_00000508
    li r6, 0x4
lbl_fn_800B448C_00000508:
    lwz r8, 0x28(r28)
    li r9, 0x1
    li r10, 0x0
    bl fn_800B47AC
    li r30, 0x0
lbl_fn_800B448C_0000051C:
    lha r0, 0x18(r31)
    cmpwi r0, -0x1
    beq lbl_fn_800B448C_0000061C
    mulli r0, r0, 0x28
    lwz r4, 0x14(r28)
    mr r3, r29
    add r25, r4, r0
    mr r4, r25
    bl fn_800500FC
    cmpwi r3, 0x2
    bne lbl_fn_800B448C_00000598
    lhz r4, 0x20(r25)
    mr r3, r27
    lwz r7, 0x24(r28)
    li r6, 0x1
    slwi r0, r4, 2
    lhz r5, 0x22(r25)
    subf r4, r4, r0
    cmpwi r7, -0x1
    slwi r0, r5, 2
    lwz r8, 0x1c(r28)
    slwi r4, r4, 1
    add r4, r8, r4
    subf r5, r5, r0
    bne lbl_fn_800B448C_00000584
    li r6, 0x4
lbl_fn_800B448C_00000584:
    lwz r8, 0x28(r28)
    li r9, 0x0
    li r10, 0x0
    bl fn_800B47AC
    b lbl_fn_800B448C_0000061C
lbl_fn_800B448C_00000598:
    cmpwi r3, 0x1
    bne lbl_fn_800B448C_0000061C
    lhz r4, 0x24(r25)
    mr r3, r27
    lwz r7, 0x24(r28)
    li r6, 0x1
    slwi r0, r4, 2
    lhz r5, 0x26(r25)
    subf r4, r4, r0
    cmpwi r7, -0x1
    slwi r0, r5, 2
    lwz r8, 0x1c(r28)
    slwi r4, r4, 1
    add r4, r8, r4
    subf r5, r5, r0
    bne lbl_fn_800B448C_000005DC
    li r6, 0x4
lbl_fn_800B448C_000005DC:
    lwz r8, 0x28(r28)
    li r9, 0x1
    li r10, 0x0
    bl fn_800B47AC
    li r26, 0x0
lbl_fn_800B448C_000005F0:
    lha r6, 0x18(r25)
    cmpwi r6, -0x1
    beq lbl_fn_800B448C_0000060C
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_800B448C
lbl_fn_800B448C_0000060C:
    addi r26, r26, 0x1
    addi r25, r25, 0x2
    cmpwi r26, 0x4
    blt lbl_fn_800B448C_000005F0
lbl_fn_800B448C_0000061C:
    addi r30, r30, 0x1
    addi r31, r31, 0x2
    cmpwi r30, 0x4
    blt lbl_fn_800B448C_0000051C
lbl_fn_800B448C_0000062C:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800B4694(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r1, 0x8
    li r30, 0x0
    li r25, 0x0
    lis r24, lbl_807C7060@ha
    b lbl_fn_800B4694_00000734
lbl_fn_800B4694_00000674:
    lwz r3, 0x14(r28)
    lwzx r29, r3, r25
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bge lbl_fn_800B4694_00000690
    li r6, 0x0
    b lbl_fn_800B4694_0000069C
lbl_fn_800B4694_00000690:
    mulli r0, r0, 0x30
    lwz r3, 0x3c(r27)
    add r6, r3, r0
lbl_fn_800B4694_0000069C:
    psq_l f1, 0x0(r6), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r6), 0, 0
    addi r4, r24, lbl_807C7060@l
    psq_l f3, 0x10(r6), 0, 0
    li r5, 0x30
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    bl fn_8067E23C
    cntlzw r3, r3
    lwz r4, 0x16c(r27)
    lwz r0, 0x18(r29)
    srwi. r3, r3, 5
    lwz r3, 0x2c(r4)
    mr r10, r31
    slwi r0, r0, 2
    lwz r5, 0x1c(r29)
    lwzx r7, r3, r0
    mr r3, r26
    lwz r4, 0x20(r29)
    li r9, 0x1
    lwz r6, 0x14(r7)
    lwz r8, 0x1c(r7)
    lwz r7, 0x1c(r6)
    lwz r6, 0xc(r7)
    lwz r7, 0x14(r7)
    beq lbl_fn_800B4694_00000728
    li r10, 0x0
lbl_fn_800B4694_00000728:
    bl fn_800B47AC
    addi r30, r30, 0x1
    addi r25, r25, 0x4
lbl_fn_800B4694_00000734:
    lwz r0, 0x10(r28)
    cmpw r30, r0
    blt lbl_fn_800B4694_00000674
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800B47AC(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x120
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    bl _savegpr_14
    slwi r0, r7, 8
    lis r12, 0xe000
    ori r14, r0, 0x7
    stw r3, 0x8(r1)
    slwi r0, r14, 16
    addi r11, r12, 0xc0
    or r15, r14, r0
    mr r21, r4
    addi r0, r12, 0x180
    stw r0, 0x28(r3)
    mr r14, r6
    mr r22, r8
    stw r7, 0xc(r1)
    mr r23, r10
    stw r9, 0x10(r1)
    stw r12, 0x18(r1)
    stw r11, 0x1c(r1)
    mtspr GQR6, r15
    lis r3, 0x1
    lis r28, lbl_807C7560@ha
    subi r4, r3, 0x1
    sthu r4, lbl_807C7560@l(r28)
    lis r3, 0x5555
    lis r20, lbl_807C74A0@ha
    sth r4, 0x2(r28)
    addi r0, r3, 0x5556
    mulhw r3, r0, r5
    lfs f28, lbl_80880F4C
    sth r4, 0x4(r28)
    addi r30, r1, 0xa0
    lfs f29, lbl_80880F44
    addi r29, r1, 0x74
    sth r4, 0x6(r28)
    srwi r0, r3, 31
    add r0, r3, r0
    lfs f30, lbl_80880F40
    sth r4, 0x8(r28)
    addi r19, r1, 0x18
    lfs f31, lbl_80880F48
    addi r20, r20, lbl_807C74A0@l
    sth r4, 0xa(r28)
    li r27, 0x0
    li r18, 0x0
    sth r4, 0xc(r28)
    sth r4, 0xe(r28)
    sth r4, 0x10(r28)
    sth r4, 0x12(r28)
    sth r4, 0x14(r28)
    sth r4, 0x16(r28)
    sth r4, 0x18(r28)
    sth r4, 0x1a(r28)
    sth r4, 0x1c(r28)
    stw r0, 0xd0(r1)
    sth r4, 0x1e(r28)
    b lbl_fn_800B47AC_000013A4
lbl_fn_800B47AC_00000868:
    cmpwi r14, 0x4
    lhz r26, 0x0(r21)
    lhz r25, 0x2(r21)
    lhz r24, 0x4(r21)
    addi r21, r21, 0x6
    bne lbl_fn_800B47AC_000008D8
    mulli r0, r26, 0xc
    add r3, r22, r0
    lfs f2, 0x8(r3)
    mulli r4, r25, 0xc
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc4
    psq_st f1, 0x0(r3), 0, 0
    add r3, r22, r4
    mulli r0, r24, 0xc
    stfs f2, 0xcc(r1)
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xb8
    psq_st f1, 0x0(r3), 0, 0
    add r4, r22, r0
    addi r3, r1, 0xac
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xc0(r1)
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xb4(r1)
    b lbl_fn_800B47AC_00000970
lbl_fn_800B47AC_000008D8:
    cmpwi r14, 0x1
    bne lbl_fn_800B47AC_00000970
    lwz r0, 0xc(r1)
    slwi r0, r0, 8
    ori r3, r0, 0x7
    slwi r0, r3, 16
    or r0, r3, r0
    mtspr GQR6, r0
    clrlslwi r0, r26, 16, 2
    subf r0, r26, r0
    slwi r0, r0, 1
    add r3, r22, r0
    psq_l f0, 0x0(r3), 1, 6
    stfs f0, 0xc4(r1)
    psq_l f0, 0x2(r3), 1, 6
    stfs f0, 0xc8(r1)
    psq_l f0, 0x4(r3), 1, 6
    clrlslwi r0, r25, 16, 2
    subf r0, r25, r0
    stfs f0, 0xcc(r1)
    slwi r0, r0, 1
    add r3, r22, r0
    psq_l f0, 0x0(r3), 1, 6
    stfs f0, 0xb8(r1)
    psq_l f0, 0x2(r3), 1, 6
    stfs f0, 0xbc(r1)
    psq_l f0, 0x4(r3), 1, 6
    clrlslwi r0, r24, 16, 2
    subf r0, r24, r0
    stfs f0, 0xc0(r1)
    slwi r0, r0, 1
    add r3, r22, r0
    psq_l f0, 0x0(r3), 1, 6
    stfs f0, 0xac(r1)
    psq_l f0, 0x2(r3), 1, 6
    stfs f0, 0xb0(r1)
    psq_l f0, 0x4(r3), 1, 6
    stfs f0, 0xb4(r1)
lbl_fn_800B47AC_00000970:
    cmpwi r23, 0x0
    beq lbl_fn_800B47AC_000009A8
    addi r4, r1, 0xc4
    mr r3, r23
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0xb8
    mr r3, r23
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0xac
    mr r3, r23
    mr r5, r4
    bl fn_805F93C0
lbl_fn_800B47AC_000009A8:
    lwz r31, lbl_8087EFB4
    addi r3, r1, 0x2c
    lfs f5, 0xcc(r1)
    addi r4, r1, 0x38
    lfs f4, 0x114(r31)
    addi r5, r1, 0x44
    lfs f3, 0xc0(r1)
    lfs f0, 0xb4(r1)
    fsubs f12, f5, f4
    fsubs f9, f3, f5
    lfs f6, 0xc8(r1)
    fsubs f7, f0, f5
    lfs f4, 0x110(r31)
    lfs f3, 0x10c(r31)
    fsubs f11, f6, f4
    lfs f5, 0xc4(r1)
    lfs f0, 0xbc(r1)
    fsubs f10, f5, f3
    lfs f4, 0xb8(r1)
    fsubs f8, f0, f6
    lfs f3, 0xb0(r1)
    lfs f0, 0xac(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    stfs f10, 0x20(r1)
    fsubs f0, f0, f5
    stfs f11, 0x24(r1)
    stfs f12, 0x28(r1)
    stfs f4, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f9, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f7, 0x40(r1)
    bl fn_805F99B0
    addi r3, r1, 0x44
    addi r4, r1, 0x20
    bl fn_805F9990
    fcmpo cr0, f1, f31
    bge lbl_fn_800B47AC_00000D80
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B47AC_000013A0
    fcmpo cr0, f31, f28
    stfs f31, 0x90(r1)
    stfs f28, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f28, 0x9c(r1)
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000A7C
    li r17, 0xff
    b lbl_fn_800B47AC_00000A9C
lbl_fn_800B47AC_00000A7C:
    fcmpo cr0, f31, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000A90
    li r3, 0x0
    b lbl_fn_800B47AC_00000A98
lbl_fn_800B47AC_00000A90:
    fmadds f1, f29, f31, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000A98:
    mr r17, r3
lbl_fn_800B47AC_00000A9C:
    lfs f0, 0x94(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000AB4
    li r16, 0xff
    b lbl_fn_800B47AC_00000AD4
lbl_fn_800B47AC_00000AB4:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000AC8
    li r3, 0x0
    b lbl_fn_800B47AC_00000AD0
lbl_fn_800B47AC_00000AC8:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000AD0:
    mr r16, r3
lbl_fn_800B47AC_00000AD4:
    lfs f0, 0x98(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000AEC
    li r15, 0xff
    b lbl_fn_800B47AC_00000B0C
lbl_fn_800B47AC_00000AEC:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000B00
    li r3, 0x0
    b lbl_fn_800B47AC_00000B08
lbl_fn_800B47AC_00000B00:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000B08:
    mr r15, r3
lbl_fn_800B47AC_00000B0C:
    lfs f0, 0x9c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000B24
    li r3, 0xff
    b lbl_fn_800B47AC_00000B40
lbl_fn_800B47AC_00000B24:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000B38
    li r3, 0x0
    b lbl_fn_800B47AC_00000B40
lbl_fn_800B47AC_00000B38:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000B40:
    slwi r0, r17, 16
    slwi r3, r3, 24
    or r0, r3, r0
    lfs f1, lbl_80880F48
    slwi r3, r16, 8
    addi r4, r1, 0xc4
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    or r6, r15, r0
    addi r5, r1, 0xb8
    bl fn_80063764
    lfs f0, 0x90(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000B84
    li r17, 0xff
    b lbl_fn_800B47AC_00000BA4
lbl_fn_800B47AC_00000B84:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000B98
    li r3, 0x0
    b lbl_fn_800B47AC_00000BA0
lbl_fn_800B47AC_00000B98:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000BA0:
    mr r17, r3
lbl_fn_800B47AC_00000BA4:
    lfs f0, 0x94(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000BBC
    li r16, 0xff
    b lbl_fn_800B47AC_00000BDC
lbl_fn_800B47AC_00000BBC:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000BD0
    li r3, 0x0
    b lbl_fn_800B47AC_00000BD8
lbl_fn_800B47AC_00000BD0:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000BD8:
    mr r16, r3
lbl_fn_800B47AC_00000BDC:
    lfs f0, 0x98(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000BF4
    li r15, 0xff
    b lbl_fn_800B47AC_00000C14
lbl_fn_800B47AC_00000BF4:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000C08
    li r3, 0x0
    b lbl_fn_800B47AC_00000C10
lbl_fn_800B47AC_00000C08:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000C10:
    mr r15, r3
lbl_fn_800B47AC_00000C14:
    lfs f0, 0x9c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000C2C
    li r3, 0xff
    b lbl_fn_800B47AC_00000C48
lbl_fn_800B47AC_00000C2C:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000C40
    li r3, 0x0
    b lbl_fn_800B47AC_00000C48
lbl_fn_800B47AC_00000C40:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000C48:
    slwi r0, r17, 16
    slwi r3, r3, 24
    or r0, r3, r0
    lfs f1, lbl_80880F48
    slwi r3, r16, 8
    addi r4, r1, 0xb8
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    or r6, r15, r0
    addi r5, r1, 0xac
    bl fn_80063764
    lfs f0, 0x90(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000C8C
    li r17, 0xff
    b lbl_fn_800B47AC_00000CAC
lbl_fn_800B47AC_00000C8C:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000CA0
    li r3, 0x0
    b lbl_fn_800B47AC_00000CA8
lbl_fn_800B47AC_00000CA0:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000CA8:
    mr r17, r3
lbl_fn_800B47AC_00000CAC:
    lfs f0, 0x94(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000CC4
    li r16, 0xff
    b lbl_fn_800B47AC_00000CE4
lbl_fn_800B47AC_00000CC4:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000CD8
    li r3, 0x0
    b lbl_fn_800B47AC_00000CE0
lbl_fn_800B47AC_00000CD8:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000CE0:
    mr r16, r3
lbl_fn_800B47AC_00000CE4:
    lfs f0, 0x98(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000CFC
    li r15, 0xff
    b lbl_fn_800B47AC_00000D1C
lbl_fn_800B47AC_00000CFC:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000D10
    li r3, 0x0
    b lbl_fn_800B47AC_00000D18
lbl_fn_800B47AC_00000D10:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000D18:
    mr r15, r3
lbl_fn_800B47AC_00000D1C:
    lfs f0, 0x9c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000D34
    li r3, 0xff
    b lbl_fn_800B47AC_00000D50
lbl_fn_800B47AC_00000D34:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000D48
    li r3, 0x0
    b lbl_fn_800B47AC_00000D50
lbl_fn_800B47AC_00000D48:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000D50:
    slwi r0, r17, 16
    slwi r3, r3, 24
    or r0, r3, r0
    lfs f1, lbl_80880F48
    slwi r3, r16, 8
    addi r4, r1, 0xac
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    or r6, r15, r0
    addi r5, r1, 0xc4
    bl fn_80063764
    b lbl_fn_800B47AC_000013A0
lbl_fn_800B47AC_00000D80:
    addi r3, r1, 0xc4
    lwz r4, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xb8
    lfs f2, 0xcc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xac
    lfs f2, 0xc0(r1)
    psq_st f1, 0xc(r4), 0, 0
    stfs f2, 0x14(r4)
    lfs f2, 0xb4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B47AC_000010F4
    fcmpo cr0, f28, f28
    stfs f28, 0x80(r1)
    stfs f28, 0x84(r1)
    stfs f28, 0x88(r1)
    stfs f28, 0x8c(r1)
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000DF4
    li r17, 0xff
    b lbl_fn_800B47AC_00000E14
lbl_fn_800B47AC_00000DF4:
    fcmpo cr0, f28, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000E08
    li r3, 0x0
    b lbl_fn_800B47AC_00000E10
lbl_fn_800B47AC_00000E08:
    fmadds f1, f29, f28, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000E10:
    mr r17, r3
lbl_fn_800B47AC_00000E14:
    lfs f0, 0x84(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000E2C
    li r16, 0xff
    b lbl_fn_800B47AC_00000E4C
lbl_fn_800B47AC_00000E2C:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000E40
    li r3, 0x0
    b lbl_fn_800B47AC_00000E48
lbl_fn_800B47AC_00000E40:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000E48:
    mr r16, r3
lbl_fn_800B47AC_00000E4C:
    lfs f0, 0x88(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000E64
    li r15, 0xff
    b lbl_fn_800B47AC_00000E84
lbl_fn_800B47AC_00000E64:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000E78
    li r3, 0x0
    b lbl_fn_800B47AC_00000E80
lbl_fn_800B47AC_00000E78:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000E80:
    mr r15, r3
lbl_fn_800B47AC_00000E84:
    lfs f0, 0x8c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000E9C
    li r3, 0xff
    b lbl_fn_800B47AC_00000EB8
lbl_fn_800B47AC_00000E9C:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000EB0
    li r3, 0x0
    b lbl_fn_800B47AC_00000EB8
lbl_fn_800B47AC_00000EB0:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000EB8:
    slwi r0, r17, 16
    slwi r3, r3, 24
    or r0, r3, r0
    lfs f1, lbl_80880F48
    slwi r3, r16, 8
    addi r4, r1, 0xc4
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    or r6, r15, r0
    addi r5, r1, 0xb8
    bl fn_80063764
    lfs f0, 0x80(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000EFC
    li r17, 0xff
    b lbl_fn_800B47AC_00000F1C
lbl_fn_800B47AC_00000EFC:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000F10
    li r3, 0x0
    b lbl_fn_800B47AC_00000F18
lbl_fn_800B47AC_00000F10:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000F18:
    mr r17, r3
lbl_fn_800B47AC_00000F1C:
    lfs f0, 0x84(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000F34
    li r16, 0xff
    b lbl_fn_800B47AC_00000F54
lbl_fn_800B47AC_00000F34:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000F48
    li r3, 0x0
    b lbl_fn_800B47AC_00000F50
lbl_fn_800B47AC_00000F48:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000F50:
    mr r16, r3
lbl_fn_800B47AC_00000F54:
    lfs f0, 0x88(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000F6C
    li r15, 0xff
    b lbl_fn_800B47AC_00000F8C
lbl_fn_800B47AC_00000F6C:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000F80
    li r3, 0x0
    b lbl_fn_800B47AC_00000F88
lbl_fn_800B47AC_00000F80:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000F88:
    mr r15, r3
lbl_fn_800B47AC_00000F8C:
    lfs f0, 0x8c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00000FA4
    li r3, 0xff
    b lbl_fn_800B47AC_00000FC0
lbl_fn_800B47AC_00000FA4:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00000FB8
    li r3, 0x0
    b lbl_fn_800B47AC_00000FC0
lbl_fn_800B47AC_00000FB8:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00000FC0:
    slwi r0, r17, 16
    slwi r3, r3, 24
    or r0, r3, r0
    lfs f1, lbl_80880F48
    slwi r3, r16, 8
    addi r4, r1, 0xb8
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    or r6, r15, r0
    addi r5, r1, 0xac
    bl fn_80063764
    lfs f0, 0x80(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00001004
    li r15, 0xff
    b lbl_fn_800B47AC_00001024
lbl_fn_800B47AC_00001004:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00001018
    li r3, 0x0
    b lbl_fn_800B47AC_00001020
lbl_fn_800B47AC_00001018:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00001020:
    mr r15, r3
lbl_fn_800B47AC_00001024:
    lfs f0, 0x84(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_0000103C
    li r16, 0xff
    b lbl_fn_800B47AC_0000105C
lbl_fn_800B47AC_0000103C:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00001050
    li r3, 0x0
    b lbl_fn_800B47AC_00001058
lbl_fn_800B47AC_00001050:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00001058:
    mr r16, r3
lbl_fn_800B47AC_0000105C:
    lfs f0, 0x88(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_00001074
    li r17, 0xff
    b lbl_fn_800B47AC_00001094
lbl_fn_800B47AC_00001074:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_00001088
    li r3, 0x0
    b lbl_fn_800B47AC_00001090
lbl_fn_800B47AC_00001088:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_00001090:
    mr r17, r3
lbl_fn_800B47AC_00001094:
    lfs f0, 0x8c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800B47AC_000010AC
    li r3, 0xff
    b lbl_fn_800B47AC_000010C8
lbl_fn_800B47AC_000010AC:
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B47AC_000010C0
    li r3, 0x0
    b lbl_fn_800B47AC_000010C8
lbl_fn_800B47AC_000010C0:
    fmadds f1, f29, f0, f30
    bl fn_80695D84
lbl_fn_800B47AC_000010C8:
    slwi r0, r15, 16
    slwi r3, r3, 24
    or r0, r3, r0
    lfs f1, lbl_80880F48
    slwi r3, r16, 8
    addi r4, r1, 0xac
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    or r6, r17, r0
    addi r5, r1, 0xc4
    bl fn_80063764
lbl_fn_800B47AC_000010F4:
    lwz r0, 0x10(r1)
    li r15, 0x3
    cmpwi r0, 0x0
    beq lbl_fn_800B47AC_000011D8
    addi r16, r31, 0x298
    li r17, 0x0
    b lbl_fn_800B47AC_00001164
lbl_fn_800B47AC_00001110:
    addi r0, r17, 0x1
    srwi r6, r17, 31
    clrlwi r3, r17, 31
    stw r18, 0x14(r1)
    xor r5, r3, r6
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    mr r3, r16
    xor r0, r0, r4
    subf r6, r6, r5
    subf r0, r4, r0
    mr r5, r15
    slwi r4, r6, 2
    addi r7, r1, 0x14
    slwi r0, r0, 2
    lwzx r4, r19, r4
    lwzx r6, r19, r0
    bl fn_800B4390
    lwz r15, 0x14(r1)
    addi r16, r16, 0x10
    addi r17, r17, 0x1
lbl_fn_800B47AC_00001164:
    cmpwi r17, 0x6
    bge lbl_fn_800B47AC_00001174
    cmpwi r15, 0x3
    bge lbl_fn_800B47AC_00001110
lbl_fn_800B47AC_00001174:
    cmpwi r15, 0x3
    blt lbl_fn_800B47AC_000013A0
    lwz r17, 0x18(r1)
    li r24, 0x0
    li r16, 0x0
    b lbl_fn_800B47AC_000011CC
lbl_fn_800B47AC_0000118C:
    add r3, r17, r16
    lwz r4, lbl_8087EFB4
    psq_l f1, 0x0(r3), 0, 0
    mr r5, r30
    lfs f2, 0x8(r3)
    addi r3, r1, 0x74
    stfs f2, 0xa8(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_800BFAC8
    lfs f2, 0x7c(r1)
    add r3, r17, r16
    psq_l f1, 0x0(r29), 0, 0
    addi r24, r24, 0x1
    psq_st f1, 0x0(r3), 0, 0
    addi r16, r16, 0xc
    stfs f2, 0x8(r3)
lbl_fn_800B47AC_000011CC:
    cmpw r24, r15
    blt lbl_fn_800B47AC_0000118C
    b lbl_fn_800B47AC_00001390
lbl_fn_800B47AC_000011D8:
    slwi r0, r26, 28
    srwi r3, r26, 31
    subf r0, r3, r0
    slwi r5, r25, 28
    rotlwi r0, r0, 4
    srwi r6, r25, 31
    add r7, r0, r3
    slwi r3, r24, 28
    clrlslwi r0, r7, 16, 1
    srwi r4, r24, 31
    lhzx r0, r28, r0
    subf r5, r6, r5
    subf r3, r4, r3
    clrlwi r16, r7, 16
    cmplw r26, r0
    rotlwi r5, r5, 4
    rotlwi r0, r3, 4
    add r3, r5, r6
    add r0, r0, r4
    clrlwi r17, r3, 16
    clrlwi r31, r0, 16
    bne lbl_fn_800B47AC_00001250
    mulli r0, r16, 0xc
    lwz r3, 0x18(r1)
    add r4, r20, r0
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    b lbl_fn_800B47AC_00001298
lbl_fn_800B47AC_00001250:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x68
    lwz r5, 0x18(r1)
    bl fn_800BFAC8
    addi r3, r1, 0x68
    lwz r4, 0x18(r1)
    lfs f2, 0x70(r1)
    clrlslwi r0, r16, 16, 1
    psq_l f1, 0x0(r3), 0, 0
    mulli r5, r16, 0xc
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    add r3, r20, r5
    sthx r26, r28, r0
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_800B47AC_00001298:
    clrlslwi r0, r17, 16, 1
    lhzx r0, r28, r0
    cmplw r25, r0
    bne lbl_fn_800B47AC_000012C8
    mulli r0, r17, 0xc
    lwz r3, 0x18(r1)
    add r4, r20, r0
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    b lbl_fn_800B47AC_00001314
lbl_fn_800B47AC_000012C8:
    lwz r5, 0x18(r1)
    addi r3, r1, 0x5c
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0xc
    bl fn_800BFAC8
    addi r3, r1, 0x5c
    lwz r4, 0x18(r1)
    lfs f2, 0x64(r1)
    clrlslwi r0, r17, 16, 1
    psq_l f1, 0x0(r3), 0, 0
    mulli r5, r17, 0xc
    psq_st f1, 0xc(r4), 0, 0
    stfs f2, 0x14(r4)
    add r3, r20, r5
    sthx r25, r28, r0
    lfs f2, 0x14(r4)
    psq_l f1, 0xc(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_800B47AC_00001314:
    clrlslwi r0, r31, 16, 1
    lhzx r0, r28, r0
    cmplw r24, r0
    bne lbl_fn_800B47AC_00001344
    mulli r0, r31, 0xc
    lwz r3, 0x18(r1)
    add r4, r20, r0
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x18(r3), 0, 0
    stfs f2, 0x20(r3)
    b lbl_fn_800B47AC_00001390
lbl_fn_800B47AC_00001344:
    lwz r5, 0x18(r1)
    addi r3, r1, 0x50
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x18
    bl fn_800BFAC8
    addi r3, r1, 0x50
    lwz r4, 0x18(r1)
    lfs f2, 0x58(r1)
    clrlslwi r0, r31, 16, 1
    psq_l f1, 0x0(r3), 0, 0
    mulli r5, r31, 0xc
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    add r3, r20, r5
    sthx r24, r28, r0
    lfs f2, 0x20(r4)
    psq_l f1, 0x18(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_800B47AC_00001390:
    lwz r4, 0x18(r1)
    mr r5, r15
    lwz r3, 0x8(r1)
    bl fn_800B5528
lbl_fn_800B47AC_000013A0:
    addi r27, r27, 0x1
lbl_fn_800B47AC_000013A4:
    lwz r0, 0xd0(r1)
    cmpw r27, r0
    blt lbl_fn_800B47AC_00000868
    addi r11, r1, 0x120
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    bl _restgpr_14
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_800B543C(void)
{
    nofralloc
    subf. r11, r5, r7
    stwu r1, -0x20(r1)
    subf r0, r4, r6
    beq lbl_fn_800B543C_000014CC
    lis r10, 0x4330
    xoris r0, r0, 0x8000
    xoris r6, r11, 0x8000
    lis r11, lbl_80732E28@ha
    stw r0, 0xc(r1)
    add r9, r5, r9
    lfd f2, lbl_80732E28@l(r11)
    srawi r0, r9, 31
    stw r10, 0x8(r1)
    andc r11, r9, r0
    cmpwi r7, 0x20
    li r9, 0x20
    lfd f0, 0x8(r1)
    stw r6, 0x14(r1)
    fsubs f1, f0, f2
    stw r10, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f2, f1, f0
    bge lbl_fn_800B543C_0000144C
    mr r9, r7
lbl_fn_800B543C_0000144C:
    lis r6, lbl_80732E28@ha
    subf r0, r11, r9
    slwi r10, r11, 3
    lfd f1, lbl_80732E28@l(r6)
    lis r7, 0x4330
    mtctr r0
    cmpw r11, r9
    bge lbl_fn_800B543C_000014CC
lbl_fn_800B543C_0000146C:
    cmplwi r11, 0x1f
    bgt lbl_fn_800B543C_000014C0
    subf r0, r5, r11
    stw r7, 0x10(r1)
    xoris r0, r0, 0x8000
    cmpwi r8, 0x0
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r9, r4, r0
    beq lbl_fn_800B543C_000014B4
    lwz r6, 0x28(r3)
    stwx r9, r6, r10
    b lbl_fn_800B543C_000014C0
lbl_fn_800B543C_000014B4:
    lwz r0, 0x28(r3)
    add r6, r0, r10
    stw r9, 0x4(r6)
lbl_fn_800B543C_000014C0:
    addi r10, r10, 0x8
    addi r11, r11, 0x1
    bdnz lbl_fn_800B543C_0000146C
lbl_fn_800B543C_000014CC:
    addi r1, r1, 0x20
    blr
}

asm void fn_800B5528(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_23
    lfs f1, 0x0(r4)
    subi r0, r5, 0x1
    lfs f0, 0x4(r4)
    mr r23, r3
    fctiwz f1, f1
    mr r24, r5
    fctiwz f0, f0
    addi r8, r4, 0xc
    stfd f1, 0x90(r1)
    addi r9, r1, 0x18
    lwz r7, 0x94(r1)
    li r11, 0x0
    stfd f0, 0x98(r1)
    li r30, 0x0
    mr r3, r7
    li r10, 0x1
    lwz r6, 0x9c(r1)
    stw r7, 0x10(r1)
    mr r29, r6
    lfs f31, 0x8(r4)
    stw r6, 0x14(r1)
    stw r7, 0xc(r1)
    stw r7, 0x8(r1)
    mtctr r0
    cmpwi r5, 0x1
    ble lbl_fn_800B5528_00001600
lbl_fn_800B5528_00001558:
    lfs f1, 0x0(r8)
    lfs f0, 0x4(r8)
    fctiwz f1, f1
    lfs f2, 0x8(r8)
    fctiwz f0, f0
    stfd f1, 0x98(r1)
    fsubs f1, f31, f2
    lwz r4, 0x9c(r1)
    fsel f1, f1, f31, f2
    stfd f0, 0x90(r1)
    cmpw r4, r3
    stw r4, 0x0(r9)
    lwz r0, 0x94(r1)
    fmr f31, f1
    stw r0, 0x4(r9)
    bge lbl_fn_800B5528_000015A0
    mr r3, r9
    b lbl_fn_800B5528_000015A4
lbl_fn_800B5528_000015A0:
    addi r3, r1, 0x8
lbl_fn_800B5528_000015A4:
    lwz r0, 0x0(r9)
    lwz r3, 0x0(r3)
    cmpw r7, r0
    stw r3, 0x8(r1)
    bge lbl_fn_800B5528_000015C0
    mr r4, r9
    b lbl_fn_800B5528_000015C4
lbl_fn_800B5528_000015C0:
    addi r4, r1, 0xc
lbl_fn_800B5528_000015C4:
    lwz r0, 0x4(r9)
    lwz r7, 0x0(r4)
    cmpw r0, r29
    stw r7, 0xc(r1)
    bge lbl_fn_800B5528_000015E0
    mr r29, r0
    mr r11, r10
lbl_fn_800B5528_000015E0:
    cmpw r0, r6
    ble lbl_fn_800B5528_000015F0
    mr r6, r0
    mr r30, r10
lbl_fn_800B5528_000015F0:
    addi r8, r8, 0xc
    addi r9, r9, 0x8
    addi r10, r10, 0x1
    bdnz lbl_fn_800B5528_00001558
lbl_fn_800B5528_00001600:
    cmpw r29, r6
    beq lbl_fn_800B5528_00001920
    cmpw r3, r7
    bne lbl_fn_800B5528_00001614
    b lbl_fn_800B5528_00001920
lbl_fn_800B5528_00001614:
    mr r7, r11
    addi r4, r1, 0x10
    b lbl_fn_800B5528_00001634
lbl_fn_800B5528_00001620:
    add r3, r11, r5
    addi r3, r3, 0x1
    divw r0, r3, r5
    mullw r0, r0, r5
    subf r11, r0, r3
lbl_fn_800B5528_00001634:
    slwi r0, r11, 3
    add r3, r4, r0
    lwz r0, 0x4(r3)
    cmpw r29, r0
    beq lbl_fn_800B5528_00001620
    add r4, r11, r5
    addi r3, r1, 0x10
    subi r4, r4, 0x1
    divw r0, r4, r5
    mullw r0, r0, r5
    subf r25, r0, r4
    b lbl_fn_800B5528_00001678
lbl_fn_800B5528_00001664:
    add r4, r7, r5
    subi r4, r4, 0x1
    divw r0, r4, r5
    mullw r0, r0, r5
    subf r7, r0, r4
lbl_fn_800B5528_00001678:
    slwi r0, r7, 3
    add r4, r3, r0
    lwz r0, 0x4(r4)
    cmpw r29, r0
    beq lbl_fn_800B5528_00001664
    add r4, r7, r5
    li r28, -0x1
    addi r4, r4, 0x1
    divw r0, r4, r5
    mullw r0, r0, r5
    subf r26, r0, r4
    subf r4, r25, r26
    subf r0, r26, r25
    or r0, r4, r0
    srwi. r31, r0, 31
    beq lbl_fn_800B5528_000016E4
    slwi r4, r26, 3
    slwi r0, r25, 3
    lwzx r4, r3, r4
    lwzx r0, r3, r0
    cmpw r4, r0
    ble lbl_fn_800B5528_00001760
    mr r0, r26
    mr r26, r25
    mr r25, r0
    li r28, 0x1
    b lbl_fn_800B5528_00001760
lbl_fn_800B5528_000016E4:
    add r4, r26, r5
    addi r7, r25, 0x1
    subi r10, r4, 0x1
    addi r8, r1, 0x14
    slwi r4, r26, 3
    divw r9, r10, r5
    lwzx r0, r3, r4
    lwzx r11, r8, r4
    divw r4, r7, r5
    mullw r4, r4, r5
    mullw r9, r9, r5
    subf r7, r4, r7
    subf r5, r9, r10
    slwi r9, r5, 3
    lwzx r5, r3, r9
    lwzx r4, r8, r9
    slwi r9, r7, 3
    lwzx r7, r8, r9
    subf r5, r0, r5
    lwzx r3, r3, r9
    subf r4, r11, r4
    subf r7, r11, r7
    subf r0, r0, r3
    mullw r3, r7, r5
    mullw r0, r0, r4
    subf. r0, r3, r0
    bge lbl_fn_800B5528_00001760
    mr r0, r26
    mr r26, r25
    mr r25, r0
    li r28, 0x1
lbl_fn_800B5528_00001760:
    lwz r0, lbl_8087D888
    lwz r3, lbl_8087D888
    cmpw r6, r0
    bge lbl_fn_800B5528_00001774
    b lbl_fn_800B5528_0000178C
lbl_fn_800B5528_00001774:
    lwz r0, lbl_8087D88C
    mr r3, r6
    lwz r4, lbl_8087D88C
    cmpw r6, r0
    ble lbl_fn_800B5528_0000178C
    mr r3, r4
lbl_fn_800B5528_0000178C:
    lwz r0, lbl_8087D890
    lwz r4, lbl_8087D890
    cmpw r29, r0
    bge lbl_fn_800B5528_000017A0
    b lbl_fn_800B5528_000017B8
lbl_fn_800B5528_000017A0:
    lwz r0, lbl_8087D894
    mr r4, r29
    lwz r5, lbl_8087D894
    cmpw r29, r0
    ble lbl_fn_800B5528_000017B8
    mr r4, r5
lbl_fn_800B5528_000017B8:
    subf r0, r4, r3
    subf r4, r29, r6
    add r3, r31, r0
    subic. r0, r3, 0x1
    add r27, r31, r4
    subi r27, r27, 0x1
    ble lbl_fn_800B5528_00001920
    cntlzw r0, r31
    srwi r9, r0, 5
lbl_fn_800B5528_000017DC:
    add r0, r24, r26
    addi r7, r1, 0x10
    add r6, r28, r0
    mr r3, r23
    divw r5, r6, r24
    slwi r0, r26, 3
    mr r8, r7
    lwzux r4, r8, r0
    mullw r0, r5, r24
    lwz r5, 0x4(r8)
    li r8, 0x1
    subf r26, r0, r6
    slwi r0, r26, 3
    add r7, r7, r0
    lwz r6, 0x0(r7)
    lwz r7, 0x4(r7)
    bl fn_800B543C
    cmpw r26, r30
    li r9, 0x0
    bne lbl_fn_800B5528_000017DC
    cntlzw r0, r31
    neg r26, r28
    srwi r9, r0, 5
lbl_fn_800B5528_00001838:
    add r0, r24, r25
    addi r7, r1, 0x10
    add r6, r26, r0
    mr r3, r23
    divw r5, r6, r24
    slwi r0, r25, 3
    mr r8, r7
    lwzux r4, r8, r0
    subi r4, r4, 0x1
    mullw r0, r5, r24
    lwz r5, 0x4(r8)
    li r8, 0x0
    subf r25, r0, r6
    slwi r0, r25, 3
    add r7, r7, r0
    lwz r6, 0x0(r7)
    lwz r7, 0x4(r7)
    subi r6, r6, 0x1
    bl fn_800B543C
    cmpw r25, r30
    li r9, 0x0
    bne lbl_fn_800B5528_00001838
    addi r0, r29, 0x1
    lwz r5, 0x14(r23)
    subf r7, r31, r0
    add r4, r7, r27
    subf r0, r7, r4
    slwi r6, r7, 3
    slwi r3, r7, 7
    mtctr r0
    cmpw r7, r4
    bge lbl_fn_800B5528_00001920
lbl_fn_800B5528_000018B8:
    cmplwi r7, 0x1f
    bgt lbl_fn_800B5528_00001910
    lwz r4, 0x28(r23)
    add r0, r5, r3
    lwzx r9, r4, r6
    add r8, r4, r6
    slwi r4, r9, 2
    add r4, r4, r0
    b lbl_fn_800B5528_000018FC
lbl_fn_800B5528_000018DC:
    cmpwi r9, 0x0
    blt lbl_fn_800B5528_000018F4
    lfs f0, 0x0(r4)
    fcmpo cr0, f0, f31
    ble lbl_fn_800B5528_000018F4
    stfs f31, 0x0(r4)
lbl_fn_800B5528_000018F4:
    addi r4, r4, 0x4
    addi r9, r9, 0x1
lbl_fn_800B5528_000018FC:
    lwz r0, 0x4(r8)
    cmpw r9, r0
    bgt lbl_fn_800B5528_00001910
    cmpwi r9, 0x20
    blt lbl_fn_800B5528_000018DC
lbl_fn_800B5528_00001910:
    addi r6, r6, 0x8
    addi r3, r3, 0x80
    addi r7, r7, 0x1
    bdnz lbl_fn_800B5528_000018B8
lbl_fn_800B5528_00001920:
    addi r11, r1, 0xd0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    bl _restgpr_23
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_800B5994(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x160
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stfd f28, 0x160(r1)
    psq_st f28, 0x168(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0x2c(r3)
    lis r5, 0x4330
    stw r5, 0x110(r1)
    mr r22, r3
    cmpwi r0, 0x0
    mr r23, r4
    stw r5, 0x118(r1)
    bne lbl_fn_800B5994_0000199C
    li r3, 0x0
    b lbl_fn_800B5994_0000218C
lbl_fn_800B5994_0000199C:
    lfs f28, 0x14(r4)
    addi r5, r1, 0x20
    lfs f13, 0x10(r4)
    addi r24, r1, 0xb0
    lfs f12, 0xc(r4)
    fmr f2, f28
    stfs f12, 0x20(r1)
    addi r6, r1, 0x2c
    lwz r3, lbl_8087EFB4
    addi r25, r1, 0xbc
    stfs f13, 0x24(r1)
    addi r12, r1, 0x38
    addi r26, r1, 0xc8
    psq_l f1, 0x0(r5), 0, 0
    addi r11, r1, 0x44
    psq_st f1, 0x0(r24), 0, 0
    addi r27, r1, 0xd4
    addi r10, r1, 0x50
    addi r28, r1, 0xe0
    stfs f2, 0xb8(r1)
    addi r9, r1, 0x5c
    addi r29, r1, 0xec
    addi r8, r1, 0x68
    lfs f11, 0x0(r4)
    addi r30, r1, 0xf8
    stfs f11, 0x2c(r1)
    addi r7, r1, 0x74
    addi r31, r1, 0x104
    addi r3, r3, 0x15c
    stfs f13, 0x30(r1)
    mr r5, r24
    addi r21, r1, 0x98
    psq_l f1, 0x0(r6), 0, 0
    li r6, 0x8
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xc4(r1)
    lfs f10, 0x4(r4)
    stfs f12, 0x38(r1)
    stfs f10, 0x3c(r1)
    psq_l f1, 0x0(r12), 0, 0
    stfs f11, 0x44(r1)
    stfs f10, 0x48(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xdc(r1)
    lfs f2, 0x8(r4)
    mr r4, r24
    stfs f12, 0x50(r1)
    stfs f13, 0x54(r1)
    psq_l f1, 0x0(r10), 0, 0
    stfs f11, 0x5c(r1)
    stfs f13, 0x60(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f12, 0x68(r1)
    stfs f10, 0x6c(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f28, 0x28(r1)
    stfs f28, 0x34(r1)
    stfs f28, 0x40(r1)
    stfs f28, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0xe8(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0xf4(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x100(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F9420
    addi r4, r1, 0x8
    addi r3, r1, 0x14
    psq_l f1, 0x0(r24), 0, 0
    mr r5, r4
    lfs f2, 0xb8(r1)
    mr r6, r3
    psq_st f1, 0x0(r4), 0, 0
    mr r7, r4
    psq_lu f0, 0x0(r25), 0, 0
    mr r8, r3
    stfs f2, 0x10(r1)
    psq_lu f4, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    ps_sub f8, f0, f4
    lfs f1, 0x8(r25)
    stfs f2, 0x1c(r1)
    lfs f5, 0x8(r5)
    psq_lu f2, 0x0(r6), 0, 0
    ps_sel f8, f8, f0, f4
    fsub f9, f1, f5
    ps_sub f6, f0, f2
    lfs f3, 0x8(r6)
    fsub f7, f1, f3
    ps_sel f6, f6, f2, f0
    fsel f9, f9, f1, f5
    fsel f7, f7, f3, f1
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r26), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r26)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r27), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r27)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r28), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r28)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    stfs f9, 0x8(r7)
    mr r5, r4
    mr r6, r3
    psq_lu f0, 0x0(r29), 0, 0
    mr r7, r4
    psq_lu f2, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f4, 0x0(r5), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r29)
    lfs f3, 0x8(r6)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r5)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r30), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r30)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r31), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r31)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x8(r7)
    lfs f2, 0x1c(r1)
    stfs f2, 0xa0(r1)
    lfs f2, 0x10(r1)
    psq_st f1, 0x0(r21), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r21), 0, 0
    lwz r3, lbl_8087EFB4
    stfs f2, 0xac(r1)
    lfs f11, 0xa0(r1)
    lfs f10, 0x1d0(r3)
    fneg f10, f10
    fcmpo cr0, f11, f10
    blt lbl_fn_800B5994_00001DA8
    lfs f10, 0x1cc(r3)
    frsp f11, f2
    fneg f10, f10
    fcmpo cr0, f11, f10
    ble lbl_fn_800B5994_00001DCC
lbl_fn_800B5994_00001DA8:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B5994_00001DC4
    mr r3, r23
    li r4, -0x1
    bl fn_8006FE08
lbl_fn_800B5994_00001DC4:
    li r3, 0x0
    b lbl_fn_800B5994_0000218C
lbl_fn_800B5994_00001DCC:
    mr r4, r21
    addi r3, r1, 0x80
    bl fn_800704DC
    lwz r5, lbl_8087EEE0
    lis r3, lbl_80732E28@ha
    lfd f12, lbl_80732E28@l(r3)
    lwz r3, 0x3c(r5)
    lwz r0, 0x40(r5)
    xoris r3, r3, 0x8000
    stw r3, 0x114(r1)
    xoris r0, r0, 0x8000
    lfs f28, 0x80(r1)
    stw r0, 0x11c(r1)
    lfd f11, 0x110(r1)
    lfd f10, 0x118(r1)
    lfs f13, lbl_8087D898
    fsubs f29, f11, f12
    fsubs f30, f10, f12
    fcmpo cr0, f28, f13
    bge lbl_fn_800B5994_00001E20
    b lbl_fn_800B5994_00001E30
lbl_fn_800B5994_00001E20:
    fcmpo cr0, f28, f29
    ble lbl_fn_800B5994_00001E2C
    fmr f28, f29
lbl_fn_800B5994_00001E2C:
    fmr f13, f28
lbl_fn_800B5994_00001E30:
    lfs f10, 0x84(r1)
    lfs f11, lbl_8087D89C
    stfs f13, 0x80(r1)
    fcmpo cr0, f10, f11
    bge lbl_fn_800B5994_00001E48
    b lbl_fn_800B5994_00001E58
lbl_fn_800B5994_00001E48:
    fcmpo cr0, f10, f30
    ble lbl_fn_800B5994_00001E54
    fmr f10, f30
lbl_fn_800B5994_00001E54:
    fmr f11, f10
lbl_fn_800B5994_00001E58:
    lfs f10, 0x8c(r1)
    lfs f12, lbl_8087D8A0
    stfs f11, 0x84(r1)
    fcmpo cr0, f10, f12
    bge lbl_fn_800B5994_00001E70
    b lbl_fn_800B5994_00001E84
lbl_fn_800B5994_00001E70:
    fcmpo cr0, f10, f29
    ble lbl_fn_800B5994_00001E7C
    b lbl_fn_800B5994_00001E80
lbl_fn_800B5994_00001E7C:
    fmr f29, f10
lbl_fn_800B5994_00001E80:
    fmr f12, f29
lbl_fn_800B5994_00001E84:
    lfs f10, 0x90(r1)
    lfs f13, lbl_8087D8A4
    stfs f12, 0x8c(r1)
    fcmpo cr0, f10, f13
    bge lbl_fn_800B5994_00001E9C
    b lbl_fn_800B5994_00001EB0
lbl_fn_800B5994_00001E9C:
    fcmpo cr0, f10, f30
    ble lbl_fn_800B5994_00001EA8
    b lbl_fn_800B5994_00001EAC
lbl_fn_800B5994_00001EA8:
    fmr f30, f10
lbl_fn_800B5994_00001EAC:
    fmr f13, f30
lbl_fn_800B5994_00001EB0:
    frsp f10, f13
    lfs f2, 0x84(r1)
    lfs f11, 0x8c(r1)
    lfs f1, 0x80(r1)
    stfs f13, 0x90(r1)
    fsubs f30, f10, f2
    lwz r3, lbl_8087EFA8
    fsubs f31, f11, f1
    lfs f10, 0x1f4(r3)
    fmuls f11, f31, f30
    fcmpo cr0, f31, f10
    bge lbl_fn_800B5994_00001F1C
    fcmpo cr0, f30, f10
    bge lbl_fn_800B5994_00001F1C
    fcmpo cr0, f11, f10
    bge lbl_fn_800B5994_00001F1C
    lwz r0, 0x1dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B5994_00001F14
    fmr f4, f31
    lwz r3, lbl_8087EEB0
    fmr f5, f30
    lfs f3, lbl_80880F48
    li r4, -0x100
    bl fn_800610A4
lbl_fn_800B5994_00001F14:
    li r3, 0x1
    b lbl_fn_800B5994_0000218C
lbl_fn_800B5994_00001F1C:
    lwz r3, 0x3c(r5)
    lis r4, lbl_80732E28@ha
    lwz r0, 0x40(r5)
    xoris r3, r3, 0x8000
    stw r3, 0x114(r1)
    xoris r0, r0, 0x8000
    lfd f28, lbl_80732E28@l(r4)
    lfd f10, 0x110(r1)
    stw r0, 0x11c(r1)
    fsubs f13, f10, f28
    lfs f12, lbl_80880F54
    lfd f11, 0x118(r1)
    lfs f10, 0x80(r1)
    fdivs f29, f12, f13
    fsubs f11, f11, f28
    fmuls f1, f10, f29
    fdivs f28, f12, f11
    bl fn_8068A918
    frsp f10, f1
    lwz r0, lbl_8087D8A8
    lwz r21, lbl_8087D8A8
    fctiwz f10, f10
    stfd f10, 0x120(r1)
    lwz r3, 0x124(r1)
    cmpw r3, r0
    bge lbl_fn_800B5994_00001F88
    b lbl_fn_800B5994_00001FA0
lbl_fn_800B5994_00001F88:
    lwz r0, lbl_8087D8AC
    lwz r4, lbl_8087D8AC
    cmpw r3, r0
    ble lbl_fn_800B5994_00001F9C
    mr r3, r4
lbl_fn_800B5994_00001F9C:
    mr r21, r3
lbl_fn_800B5994_00001FA0:
    lfs f10, 0x84(r1)
    fmuls f1, f10, f28
    bl fn_8068A918
    frsp f10, f1
    lwz r0, lbl_8087D8B0
    lwz r24, lbl_8087D8B0
    fctiwz f10, f10
    stfd f10, 0x120(r1)
    lwz r3, 0x124(r1)
    cmpw r3, r0
    bge lbl_fn_800B5994_00001FD0
    b lbl_fn_800B5994_00001FE8
lbl_fn_800B5994_00001FD0:
    lwz r0, lbl_8087D8B4
    lwz r4, lbl_8087D8B4
    cmpw r3, r0
    ble lbl_fn_800B5994_00001FE4
    mr r3, r4
lbl_fn_800B5994_00001FE4:
    mr r24, r3
lbl_fn_800B5994_00001FE8:
    lfs f10, 0x8c(r1)
    fmuls f1, f10, f29
    bl fn_8068A6D8
    frsp f10, f1
    lwz r0, lbl_8087D8B8
    lwz r25, lbl_8087D8B8
    fctiwz f10, f10
    stfd f10, 0x120(r1)
    lwz r3, 0x124(r1)
    cmpw r3, r0
    bge lbl_fn_800B5994_00002018
    b lbl_fn_800B5994_00002030
lbl_fn_800B5994_00002018:
    lwz r0, lbl_8087D8BC
    lwz r4, lbl_8087D8BC
    cmpw r3, r0
    ble lbl_fn_800B5994_0000202C
    mr r3, r4
lbl_fn_800B5994_0000202C:
    mr r25, r3
lbl_fn_800B5994_00002030:
    lfs f10, 0x90(r1)
    fmuls f1, f10, f28
    bl fn_8068A6D8
    frsp f10, f1
    lwz r0, lbl_8087D8C0
    lwz r7, lbl_8087D8C0
    fctiwz f10, f10
    stfd f10, 0x120(r1)
    lwz r3, 0x124(r1)
    cmpw r3, r0
    bge lbl_fn_800B5994_00002060
    b lbl_fn_800B5994_00002078
lbl_fn_800B5994_00002060:
    lwz r0, lbl_8087D8C4
    lwz r4, lbl_8087D8C4
    cmpw r3, r0
    ble lbl_fn_800B5994_00002074
    mr r3, r4
lbl_fn_800B5994_00002074:
    mr r7, r3
lbl_fn_800B5994_00002078:
    subf r0, r21, r25
    cmpwi r0, 0x1f
    bge lbl_fn_800B5994_00002090
    subf r0, r24, r7
    cmpwi r0, 0x1f
    blt lbl_fn_800B5994_000020B8
lbl_fn_800B5994_00002090:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B5994_000020B0
    lis r4, 0xff00
    mr r3, r23
    addi r4, r4, 0xff
    bl fn_8006FE08
lbl_fn_800B5994_000020B0:
    li r3, 0x0
    b lbl_fn_800B5994_0000218C
lbl_fn_800B5994_000020B8:
    lfs f1, 0x88(r1)
    mr r3, r22
    mr r4, r21
    mr r5, r24
    mr r6, r25
    li r8, 0x4
    bl fn_800B64DC
    cmpwi r3, 0x0
    beq lbl_fn_800B5994_00002134
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B5994_0000210C
    fmr f4, f31
    lwz r3, lbl_8087EEB0
    fmr f5, f30
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lis r4, 0xffff
    lfs f3, lbl_80880F48
    bl fn_800610A4
lbl_fn_800B5994_0000210C:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B5994_0000212C
    lis r4, 0xff01
    mr r3, r23
    subi r4, r4, 0x1
    bl fn_8006FE08
lbl_fn_800B5994_0000212C:
    li r3, 0x1
    b lbl_fn_800B5994_0000218C
lbl_fn_800B5994_00002134:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B5994_00002168
    fmr f4, f31
    lis r4, 0xff7f
    fmr f5, f30
    lwz r3, lbl_8087EEB0
    lfs f1, 0x80(r1)
    addi r4, r4, 0x7f7f
    lfs f2, 0x84(r1)
    lfs f3, lbl_80880F48
    bl fn_800610A4
lbl_fn_800B5994_00002168:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B5994_00002188
    lis r4, 0xff01
    mr r3, r23
    subi r4, r4, 0x100
    bl fn_8006FE08
lbl_fn_800B5994_00002188:
    li r3, 0x0
lbl_fn_800B5994_0000218C:
    addi r11, r1, 0x160
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    bl _restgpr_21
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}
