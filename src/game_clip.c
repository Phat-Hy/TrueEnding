#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_17(void);
extern void _restgpr_19(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_17(void);
extern void _savegpr_19(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void fn_8003EFB0(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800E2A24(void);
extern void fn_800EFBC4(void);
extern void fn_800EFDA0(void);
extern void fn_800EFE3C(void);
extern void fn_800FBE70(void);
extern void fn_800FCD24(void);
extern void fn_800FD658(void);
extern void fn_80148B0C(void);
extern void fn_801533C8(void);
extern void fn_80154E38(void);
extern void fn_8016F3D0(void);
extern void fn_80178668(void);
extern void fn_8017AC24(void);
extern void fn_80219E6C(void);
extern void fn_8021A7A0(void);
extern void fn_8021A9CC(void);
extern void fn_8021AA48(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_80491D50(void);
extern void fn_8059B670(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068AE9C(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7840[];

/* Small data declarations */
extern u32 lbl_8087D978;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F558;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80881478;
extern u32 lbl_8088148C;
extern u32 lbl_80881494;
extern u32 lbl_808814B8;
extern u32 lbl_80881500;
extern u32 lbl_80881538;

/* Function declarations */
void fn_800FA4EC(void);
void fn_800FA4F4(void);
void fn_800FA4FC(void);
void fn_800FA9F4(void);
void fn_800FAB80(void);
void fn_800FB1BC(void);
void fn_800FB4B0(void);
void fn_800FBA30(void);
void fn_800FBA9C(void);

asm void fn_800FA4EC(void)
{
    nofralloc
    lfs f1, lbl_80881478
    blr
}

asm void fn_800FA4F4(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800FA4FC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_24
    lis r24, 0x2aab
    lis r6, 0x6666
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r30, r6, 0x6667
    subi r29, r24, 0x5555
lbl_fn_800FA4FC_00000040:
    lwz r3, 0x0(r26)
    lwz r8, 0x0(r27)
    subf r0, r3, r8
    mulhw r0, r29, r0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r7, r0, r4
    cmpwi r7, 0x1
    ble lbl_fn_800FA4FC_000004F0
    cmpwi r7, 0x14
    bgt lbl_fn_800FA4FC_00000114
    cmplw r3, r8
    beq lbl_fn_800FA4FC_000004F0
    subi r7, r8, 0xc
    cmplw r3, r7
    beq lbl_fn_800FA4FC_000004F0
    b lbl_fn_800FA4FC_00000108
lbl_fn_800FA4FC_00000084:
    cmplw r3, r8
    mr r5, r3
    beq lbl_fn_800FA4FC_000000C0
    addi r4, r3, 0xc
    b lbl_fn_800FA4FC_000000B8
lbl_fn_800FA4FC_00000098:
    lfs f1, 0x8(r4)
    lfs f0, 0x8(r5)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800FA4FC_000000B4
    mr r5, r4
lbl_fn_800FA4FC_000000B4:
    addi r4, r4, 0xc
lbl_fn_800FA4FC_000000B8:
    cmplw r4, r8
    bne lbl_fn_800FA4FC_00000098
lbl_fn_800FA4FC_000000C0:
    cmplw r5, r3
    beq lbl_fn_800FA4FC_00000104
    lwz r6, 0x0(r5)
    lwz r4, 0x4(r5)
    lfs f1, 0x8(r5)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r5)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r5)
    stw r6, 0x0(r3)
    stw r4, 0x4(r3)
    stw r6, 0x60(r1)
    stw r4, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x8(r3)
lbl_fn_800FA4FC_00000104:
    addi r3, r3, 0xc
lbl_fn_800FA4FC_00000108:
    cmplw r3, r7
    bne lbl_fn_800FA4FC_00000084
    b lbl_fn_800FA4FC_000004F0
lbl_fn_800FA4FC_00000114:
    lwz r5, lbl_8087D978
    srawi r0, r7, 2
    addze r6, r0
    mulhw r0, r30, r5
    addi r8, r5, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r0, r6, r0
    mulli r0, r0, 0xc
    add r0, r3, r0
    blt lbl_fn_800FA4FC_00000154
    li r8, -0x4
lbl_fn_800FA4FC_00000154:
    mulhw r4, r30, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087D978
    cmpwi r3, 0x5
    lwz r6, 0x0(r26)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0xc
    add r7, r6, r3
    blt lbl_fn_800FA4FC_000001A4
    li r8, -0x4
    stw r8, lbl_8087D978
lbl_fn_800FA4FC_000001A4:
    lwz r5, 0x0(r27)
    mr r6, r28
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r31, r5, 0xc
    stw r31, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_800FA9F4
    lwz r25, 0x0(r26)
    mr r5, r31
    b lbl_fn_800FA4FC_000001DC
lbl_fn_800FA4FC_000001D8:
    addi r25, r25, 0xc
lbl_fn_800FA4FC_000001DC:
    lfs f1, 0x8(r25)
    lfs f0, 0x8(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_800FA4FC_000001D8
lbl_fn_800FA4FC_000001F4:
    subi r5, r5, 0xc
    cmplw r25, r5
    beq lbl_fn_800FA4FC_00000218
    lfs f1, 0x8(r5)
    lfs f0, 0x8(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800FA4FC_000001F4
lbl_fn_800FA4FC_00000218:
    cmplw r25, r5
    bge lbl_fn_800FA4FC_000002F4
    lwz r4, 0x0(r25)
    lwz r3, 0x4(r25)
    lfs f1, 0x8(r25)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r25)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r25)
    addi r25, r25, 0xc
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f1, 0x8(r5)
    b lbl_fn_800FA4FC_00000268
lbl_fn_800FA4FC_00000264:
    addi r25, r25, 0xc
lbl_fn_800FA4FC_00000268:
    lfs f1, 0x8(r25)
    lfs f0, 0x8(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_800FA4FC_00000264
lbl_fn_800FA4FC_00000280:
    subi r5, r5, 0xc
    lfs f0, 0x8(r31)
    lfs f1, 0x8(r5)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800FA4FC_00000280
    xor r0, r5, r25
    cntlzw r0, r0
    slw r0, r5, r0
    srwi. r0, r0, 31
    beq lbl_fn_800FA4FC_000002F4
    lwz r4, 0x0(r25)
    lwz r3, 0x4(r25)
    lfs f1, 0x8(r25)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r25)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r25)
    addi r25, r25, 0xc
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r4, 0x48(r1)
    stw r3, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x8(r5)
    b lbl_fn_800FA4FC_00000268
lbl_fn_800FA4FC_000002F4:
    lwz r6, 0x0(r26)
    cmplw r25, r6
    bne lbl_fn_800FA4FC_00000478
    lwz r6, 0x0(r25)
    lwz r4, 0x4(r25)
    lfs f2, 0x8(r25)
    lwz r0, 0x0(r31)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r31)
    stw r0, 0x4(r25)
    lfs f0, 0x8(r31)
    stfs f0, 0x8(r25)
    stw r6, 0x0(r31)
    stw r4, 0x4(r31)
    stfs f2, 0x8(r31)
    lwz r3, 0x0(r27)
    lwz r7, 0x0(r26)
    lfs f0, -0x4(r3)
    subi r5, r3, 0xc
    lfs f1, 0x8(r7)
    stw r6, 0x3c(r1)
    fcmpo cr0, f1, f0
    stw r4, 0x40(r1)
    stfs f2, 0x44(r1)
    mfcr r0
    srwi. r0, r0, 31
    addi r25, r25, 0xc
    bne lbl_fn_800FA4FC_000003D0
    b lbl_fn_800FA4FC_0000036C
lbl_fn_800FA4FC_00000368:
    addi r25, r25, 0xc
lbl_fn_800FA4FC_0000036C:
    cmplw r25, r3
    beq lbl_fn_800FA4FC_0000038C
    lfs f1, 0x8(r7)
    lfs f0, 0x8(r25)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800FA4FC_00000368
lbl_fn_800FA4FC_0000038C:
    cmplw r25, r5
    bge lbl_fn_800FA4FC_000003D0
    lwz r4, 0x0(r25)
    lwz r3, 0x4(r25)
    lfs f1, 0x8(r25)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r25)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r25)
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r4, 0x30(r1)
    stw r3, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x8(r5)
lbl_fn_800FA4FC_000003D0:
    cmplw r25, r5
    bge lbl_fn_800FA4FC_00000470
    b lbl_fn_800FA4FC_000003E0
lbl_fn_800FA4FC_000003DC:
    addi r25, r25, 0xc
lbl_fn_800FA4FC_000003E0:
    lwz r3, 0x0(r26)
    lfs f0, 0x8(r25)
    lfs f1, 0x8(r3)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800FA4FC_000003DC
lbl_fn_800FA4FC_000003FC:
    subi r5, r5, 0xc
    lfs f1, 0x8(r3)
    lfs f0, 0x8(r5)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_800FA4FC_000003FC
    xor r0, r5, r25
    cntlzw r0, r0
    slw r0, r5, r0
    srwi. r0, r0, 31
    beq lbl_fn_800FA4FC_00000470
    lwz r4, 0x0(r25)
    lwz r3, 0x4(r25)
    lfs f1, 0x8(r25)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r25)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r25)
    addi r25, r25, 0xc
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r4, 0x24(r1)
    stw r3, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x8(r5)
    b lbl_fn_800FA4FC_000003E0
lbl_fn_800FA4FC_00000470:
    stw r25, 0x0(r26)
    b lbl_fn_800FA4FC_00000040
lbl_fn_800FA4FC_00000478:
    lwz r3, 0x0(r27)
    subf r0, r6, r25
    subi r5, r24, 0x5555
    mulhw r4, r5, r0
    subf r0, r25, r3
    mulhw r0, r5, r0
    srawi r4, r4, 1
    srwi r5, r4, 31
    srawi r0, r0, 1
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_800FA4FC_000004D0
    stw r25, 0x10(r1)
    mr r5, r28
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_800FA4FC
    stw r25, 0x0(r26)
    b lbl_fn_800FA4FC_00000040
lbl_fn_800FA4FC_000004D0:
    stw r3, 0x8(r1)
    mr r5, r28
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r25, 0xc(r1)
    bl fn_800FA4FC
    stw r25, 0x0(r27)
    b lbl_fn_800FA4FC_00000040
lbl_fn_800FA4FC_000004F0:
    addi r11, r1, 0x90
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800FA9F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    lwz r10, 0x0(r3)
    lwz r6, 0x0(r5)
    lfs f0, 0x8(r10)
    lfs f1, 0x8(r6)
    fcmpo cr0, f1, f0
    mfcr r0
    lwz r9, 0x0(r4)
    srwi r0, r0, 31
    lfs f0, 0x8(r9)
    cntlzw r0, r0
    srwi. r8, r0, 5
    fcmpo cr1, f0, f1
    mfcr r0
    extrwi r0, r0, 1, 4
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_800FA9F4_00000558
    cmpwi r0, 0x0
    bne lbl_fn_800FA9F4_0000068C
lbl_fn_800FA9F4_00000558:
    cmpwi r8, 0x0
    bne lbl_fn_800FA9F4_000005A8
    cmpwi r0, 0x0
    bne lbl_fn_800FA9F4_000005A8
    lwz r4, 0x0(r10)
    lwz r3, 0x4(r10)
    lfs f1, 0x8(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lfs f0, 0x8(r9)
    stfs f0, 0x8(r10)
    stw r4, 0x0(r9)
    stw r3, 0x4(r9)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x8(r9)
    b lbl_fn_800FA9F4_0000068C
lbl_fn_800FA9F4_000005A8:
    lfs f0, 0x8(r9)
    lfs f1, 0x8(r10)
    fcmpo cr0, f0, f1
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800FA9F4_000005F8
    lwz r7, 0x0(r10)
    lwz r6, 0x4(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lfs f0, 0x8(r9)
    stfs f0, 0x8(r10)
    stw r7, 0x0(r9)
    stw r6, 0x4(r9)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x8(r9)
lbl_fn_800FA9F4_000005F8:
    cmpwi r8, 0x0
    beq lbl_fn_800FA9F4_00000648
    lwz r6, 0x0(r4)
    lwz r5, 0x0(r5)
    lwz r4, 0x0(r6)
    lwz r3, 0x4(r6)
    lfs f1, 0x8(r6)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r6)
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x8(r5)
    b lbl_fn_800FA9F4_0000068C
lbl_fn_800FA9F4_00000648:
    lwz r6, 0x0(r3)
    lwz r5, 0x0(r5)
    lwz r4, 0x0(r6)
    lwz r3, 0x4(r6)
    lfs f1, 0x8(r6)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r6)
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r4, 0x8(r1)
    stw r3, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x8(r5)
lbl_fn_800FA9F4_0000068C:
    addi r1, r1, 0x40
    blr
}

asm void fn_800FAB80(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    bl _savegpr_19
    fmr f30, f1
    mr r20, r3
    addis r3, r3, 0x4
    fmr f29, f2
    lwz r26, 0xfc(r1)
    mr r21, r4
    mr r22, r5
    mr r30, r6
    mr r23, r7
    mr r24, r8
    mr r29, r9
    mr r27, r10
    subi r3, r3, 0x75a4
    bl fn_800E2A24
    cmpwi r22, 0x0
    bne lbl_fn_800FAB80_00000708
    li r3, 0x0
    b lbl_fn_800FAB80_00000CA0
lbl_fn_800FAB80_00000708:
    lwz r3, lbl_8087F8A0
    li r28, 0x0
    li r19, 0x0
    lwz r25, 0x48(r3)
    b lbl_fn_800FAB80_00000780
lbl_fn_800FAB80_0000071C:
    mr r3, r20
    mr r4, r21
    mr r5, r25
    mr r6, r22
    mr r7, r30
    mr r8, r23
    mr r9, r29
    mr r10, r26
    bl fn_800FBE70
    cmpwi r3, 0x0
    mr r6, r3
    blt lbl_fn_800FAB80_0000077C
    fmr f1, f30
    stw r19, 0x8(r1)
    fmr f2, f29
    mr r3, r20
    mr r4, r21
    mr r5, r25
    mr r7, r22
    mr r8, r30
    mr r9, r23
    mr r10, r27
    bl fn_800FCD24
    li r28, 0x1
lbl_fn_800FAB80_0000077C:
    lwz r25, 0x14ac(r25)
lbl_fn_800FAB80_00000780:
    cmpwi r25, 0x0
    bne lbl_fn_800FAB80_0000071C
    lwz r3, lbl_8087F408
    li r19, 0x0
    lwz r25, 0x48(r3)
    b lbl_fn_800FAB80_000007FC
lbl_fn_800FAB80_00000798:
    mr r3, r20
    mr r4, r21
    mr r5, r25
    mr r6, r22
    mr r7, r30
    mr r8, r23
    mr r9, r29
    mr r10, r26
    bl fn_800FBE70
    cmpwi r3, 0x0
    mr r6, r3
    blt lbl_fn_800FAB80_000007F8
    fmr f1, f30
    stw r19, 0x8(r1)
    fmr f2, f29
    mr r3, r20
    mr r4, r21
    mr r5, r25
    mr r7, r22
    mr r8, r30
    mr r9, r23
    mr r10, r27
    bl fn_800FCD24
    li r28, 0x1
lbl_fn_800FAB80_000007F8:
    lwz r25, 0x14ac(r25)
lbl_fn_800FAB80_000007FC:
    cmpwi r25, 0x0
    bne lbl_fn_800FAB80_00000798
    lfs f30, lbl_80881494
    mr r3, r22
    bl fn_8021A7A0
    cmpwi r3, 0x0
    beq lbl_fn_800FAB80_0000082C
    cmpwi r21, 0x0
    beq lbl_fn_800FAB80_0000082C
    mr r3, r21
    bl fn_8017AC24
    fmr f30, f1
lbl_fn_800FAB80_0000082C:
    lwz r3, 0x4(r22)
    li r4, 0x1
    subi r0, r3, 0x1f7
    cmplwi r0, 0x2
    ble lbl_fn_800FAB80_0000084C
    subi r0, r3, 0x201
    cmplwi r0, 0x2
    bgt lbl_fn_800FAB80_00000850
lbl_fn_800FAB80_0000084C:
    li r4, 0x0
lbl_fn_800FAB80_00000850:
    cmpwi r4, 0x0
    beq lbl_fn_800FAB80_00000ACC
    lfs f0, 0x58(r22)
    cmpwi r21, 0x0
    lwz r27, 0x1c(r22)
    fmuls f29, f0, f30
    beq lbl_fn_800FAB80_00000888
    lfs f3, 0x2c(r22)
    lfs f0, 0x8c0(r21)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x80(r1)
    lwz r0, 0x84(r1)
    add r27, r27, r0
lbl_fn_800FAB80_00000888:
    lwz r3, lbl_8087F4A0
    addi r31, r1, 0x6c
    lwz r26, 0x3c(r22)
    addi r30, r1, 0x1c
    lwz r25, 0x48(r3)
    addi r29, r1, 0x60
    lis r19, 0x1062
    b lbl_fn_800FAB80_00000AC4
lbl_fn_800FAB80_000008A8:
    lwz r3, 0x38(r25)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_800FAB80_00000AC0
    andis. r3, r3, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800FAB80_00000AC0
    lwz r12, 0x0(r25)
    mr r4, r25
    addi r3, r1, 0x10
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lfs f3, 0x18(r1)
    addi r3, r1, 0x1c
    lfs f0, 0x8(r23)
    lfs f5, 0x14(r1)
    fsubs f6, f3, f0
    lfs f4, 0x4(r23)
    lfs f0, 0x0(r23)
    lfs f3, 0x10(r1)
    fsubs f4, f5, f4
    stfs f6, 0x24(r1)
    fsubs f0, f3, f0
    stfs f4, 0x20(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    lwz r12, 0x0(r25)
    fmr f31, f1
    mr r3, r25
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    fsubs f0, f31, f1
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800FAB80_00000AC0
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x30
    bl memset
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x24(r1)
    stw r27, 0x50(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x74(r1)
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0x8(r23)
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r29), 0, 0
    stw r22, 0x7c(r1)
    stw r21, 0x78(r1)
    lwz r0, 0x50(r25)
    cmpwi r0, 0x1
    beq lbl_fn_800FAB80_000009AC
    cmpwi r0, 0x1c
    beq lbl_fn_800FAB80_00000A7C
    cmpwi r0, 0x10
    beq lbl_fn_800FAB80_00000AA0
    cmpwi r0, 0x22
    beq lbl_fn_800FAB80_00000AA0
    cmpwi r0, 0x30
    beq lbl_fn_800FAB80_00000AA0
    b lbl_fn_800FAB80_00000AC0
lbl_fn_800FAB80_000009AC:
    cmpwi r26, 0x2
    blt lbl_fn_800FAB80_00000AC0
    lwz r4, 0x48(r25)
    addi r0, r19, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x3a
    beq lbl_fn_800FAB80_000009EC
    cmpwi r0, 0x6b
    beq lbl_fn_800FAB80_000009EC
    cmpwi r0, 0x7b
    bne lbl_fn_800FAB80_00000A08
lbl_fn_800FAB80_000009EC:
    lwz r12, 0x0(r25)
    mr r3, r25
    addi r4, r1, 0x50
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_800FAB80_00000AC0
lbl_fn_800FAB80_00000A08:
    cmpwi r22, 0x0
    bne lbl_fn_800FAB80_00000A18
    li r0, 0x0
    b lbl_fn_800FAB80_00000A58
lbl_fn_800FAB80_00000A18:
    lwz r0, 0x4(r22)
    cmpwi r0, 0x136
    beq lbl_fn_800FAB80_00000A4C
    cmpwi r0, 0x139
    beq lbl_fn_800FAB80_00000A4C
    cmpwi r0, 0x13c
    beq lbl_fn_800FAB80_00000A4C
    cmpwi r0, 0x146
    beq lbl_fn_800FAB80_00000A4C
    cmpwi r0, 0x15a
    beq lbl_fn_800FAB80_00000A4C
    cmpwi r0, 0x232c
    bne lbl_fn_800FAB80_00000A54
lbl_fn_800FAB80_00000A4C:
    li r0, 0x1
    b lbl_fn_800FAB80_00000A58
lbl_fn_800FAB80_00000A54:
    li r0, 0x0
lbl_fn_800FAB80_00000A58:
    cmpwi r0, 0x0
    bne lbl_fn_800FAB80_00000AC0
    lwz r12, 0x0(r25)
    mr r3, r25
    addi r4, r1, 0x50
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_800FAB80_00000AC0
lbl_fn_800FAB80_00000A7C:
    cmpwi r26, 0x2
    blt lbl_fn_800FAB80_00000AC0
    lwz r12, 0x0(r25)
    mr r3, r25
    addi r4, r1, 0x50
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_800FAB80_00000AC0
lbl_fn_800FAB80_00000AA0:
    cmpwi r26, 0x0
    ble lbl_fn_800FAB80_00000AC0
    lwz r12, 0x0(r25)
    mr r3, r25
    addi r4, r1, 0x50
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_800FAB80_00000AC0:
    lwz r25, 0x5c(r25)
lbl_fn_800FAB80_00000AC4:
    cmpwi r25, 0x0
    bne lbl_fn_800FAB80_000008A8
lbl_fn_800FAB80_00000ACC:
    addis r3, r20, 0x4
    fmr f1, f30
    lwz r8, -0x7510(r3)
    mr r3, r20
    mr r4, r21
    mr r5, r22
    mr r6, r23
    mr r7, r24
    li r9, 0x0
    bl fn_800FB1BC
    cmpwi r28, 0x0
    beq lbl_fn_800FAB80_00000B8C
    cmpwi r21, 0x0
    beq lbl_fn_800FAB80_00000B8C
    lwz r0, 0x48(r21)
    cmpwi r0, 0x0
    bne lbl_fn_800FAB80_00000B8C
    lwz r0, 0x12a4(r21)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FAB80_00000B28
    addis r3, r20, 0x4
    lfs f4, -0x75c8(r3)
    b lbl_fn_800FAB80_00000B2C
lbl_fn_800FAB80_00000B28:
    lfs f4, lbl_80881494
lbl_fn_800FAB80_00000B2C:
    addis r3, r20, 0x4
    lfs f0, -0x75e4(r3)
    lfs f3, -0x75fc(r3)
    fmuls f4, f0, f4
    lfs f0, -0x75f4(r3)
    fadds f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_800FAB80_00000B50
    b lbl_fn_800FAB80_00000B54
lbl_fn_800FAB80_00000B50:
    fmr f3, f0
lbl_fn_800FAB80_00000B54:
    lfs f5, lbl_80881478
    fcmpo cr0, f5, f3
    ble lbl_fn_800FAB80_00000B64
    b lbl_fn_800FAB80_00000B84
lbl_fn_800FAB80_00000B64:
    addis r3, r20, 0x4
    lfs f3, -0x75fc(r3)
    lfs f0, -0x75f4(r3)
    fadds f5, f3, f4
    fcmpo cr0, f5, f0
    bge lbl_fn_800FAB80_00000B80
    b lbl_fn_800FAB80_00000B84
lbl_fn_800FAB80_00000B80:
    fmr f5, f0
lbl_fn_800FAB80_00000B84:
    addis r3, r20, 0x4
    stfs f5, -0x75fc(r3)
lbl_fn_800FAB80_00000B8C:
    addis r5, r20, 0x4
    lwz r0, -0x6e24(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800FAB80_00000C8C
    lfs f3, lbl_80881478
    li r3, 0x0
    lwz r6, -0x732c(r5)
    li r0, 0x1
    lfs f2, 0x8(r23)
    addi r4, r1, 0x30
    stfs f2, 0x38(r1)
    cmplwi r6, 0x20
    lfs f2, 0x8(r24)
    addi r6, r1, 0x3c
    lfs f0, 0x58(r22)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r23), 0, 0
    stfs f3, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    stfs f3, 0x3c(r1)
    stfs f3, 0x40(r1)
    stw r3, 0x4c(r1)
    stw r0, 0x28(r1)
    stw r22, 0x2c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x44(r1)
    stfs f0, 0x48(r1)
    blt lbl_fn_800FAB80_00000C1C
    lwz r4, -0x6e28(r5)
    lwz r3, -0x732c(r5)
    addi r0, r4, 0x1
    clrlwi r4, r0, 27
    stw r4, -0x6e28(r5)
    subi r0, r3, 0x1
    stw r0, -0x732c(r5)
lbl_fn_800FAB80_00000C1C:
    addis r6, r20, 0x4
    addi r5, r1, 0x30
    lwz r3, -0x6e28(r6)
    addi r7, r1, 0x3c
    lwzu r0, -0x732c(r6)
    psq_l f1, 0x0(r5), 0, 0
    add r0, r3, r0
    lwz r4, 0x28(r1)
    clrlwi r0, r0, 27
    lwz r3, 0x2c(r1)
    mulli r5, r0, 0x28
    lfs f2, 0x38(r1)
    lfs f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    add r5, r6, r5
    stw r4, 0x4(r5)
    stw r3, 0x8(r5)
    psq_st f1, 0xc(r5), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x14(r5)
    lfs f2, 0x44(r1)
    psq_st f1, 0x18(r5), 0, 0
    stfs f2, 0x20(r5)
    stfs f0, 0x24(r5)
    stw r0, 0x28(r5)
    lwz r3, 0x0(r6)
    addi r0, r3, 0x1
    stw r0, 0x0(r6)
lbl_fn_800FAB80_00000C8C:
    cmpwi r21, 0x0
    beq lbl_fn_800FAB80_00000C9C
    li r0, 0x0
    stw r0, 0xad8(r21)
lbl_fn_800FAB80_00000C9C:
    mr r3, r28
lbl_fn_800FAB80_00000CA0:
    addi r11, r1, 0xc0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    bl _restgpr_19
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_800FB1BC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_24
    fmr f31, f1
    cmpwi r5, 0x0
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    beq lbl_fn_800FB1BC_00000FA4
    lwz r3, 0xb0(r5)
    bl fn_800EFDA0
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_800FB1BC_00000DA8
    psq_l f1, 0x0(r28), 0, 0
    addi r5, r1, 0x28
    lfs f2, 0x8(r28)
    addi r3, r1, 0x18
    lfs f0, lbl_8088148C
    psq_st f1, 0x0(r5), 0, 0
    lwz r4, lbl_8087F558
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_80491D50
    lwz r5, lbl_8087F3C0
    li r25, 0x1
    li r3, 0x0
    li r4, 0x0
    stw r25, 0xc4(r5)
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r0, -0x1
    lis r8, lbl_807C7030@ha
    fmr f1, f31
    stw r0, 0x8(r1)
    mr r4, r24
    mr r7, r28
    addi r8, r8, lbl_807C7030@l
    stw r25, 0xc(r1)
    addi r9, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xc4(r3)
lbl_fn_800FB1BC_00000DA8:
    lwz r3, 0xb0(r27)
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_800FB1BC_00000E24
    lwz r4, 0xb0(r27)
    lfs f1, lbl_80881494
    cmpwi r4, 0x6d4
    bne lbl_fn_800FB1BC_00000DCC
    lfs f1, lbl_80881538
lbl_fn_800FB1BC_00000DCC:
    lwz r5, lbl_8087EFE8
    cmpwi r5, 0x0
    beq lbl_fn_800FB1BC_00000DEC
    subi r0, r4, 0x148
    cmplwi r0, 0x2
    bgt lbl_fn_800FB1BC_00000DEC
    li r0, 0x0
    stw r0, 0x34c8(r5)
lbl_fn_800FB1BC_00000DEC:
    mr r4, r3
    mr r5, r28
    addi r3, r1, 0x10
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_800FB1BC_00000E24
    li r0, 0x1
    stw r0, 0x34c8(r3)
lbl_fn_800FB1BC_00000E24:
    rlwinm r3, r30, 0, 2, 2
    subis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_fn_800FB1BC_00000EC8
    cmpwi r31, 0x0
    beq lbl_fn_800FB1BC_00000E44
    mr r3, r27
    b lbl_fn_800FB1BC_00000E4C
lbl_fn_800FB1BC_00000E44:
    lwz r3, 0x6c(r27)
    bl fn_80219E6C
lbl_fn_800FB1BC_00000E4C:
    cmpwi r3, 0x0
    beq lbl_fn_800FB1BC_00000EC8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800FB1BC_00000EC8
    fmr f1, f31
    li r0, 0x0
    mr r4, r3
    stw r0, 0x38(r1)
    lwz r3, lbl_8087F9E8
    mr r5, r26
    mr r7, r28
    mr r8, r29
    addi r9, r1, 0x38
    li r6, 0x0
    bl fn_8059B670
    addic. r3, r1, 0x38
    beq lbl_fn_800FB1BC_00000EC8
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800FB1BC_00000EC8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800FB1BC_00000EC0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800FB1BC_00000EC0:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_800FB1BC_00000EC8:
    lwz r0, 0x4(r27)
    addi r3, r1, 0x54
    stw r0, 0x50(r1)
    addi r4, r1, 0x60
    lbz r0, lbl_8087EE74
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    extsb. r0, r0
    stfs f2, 0x5c(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r4), 0, 0
    stw r31, 0x6c(r1)
    bne lbl_fn_800FB1BC_00000F3C
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r27, 0x1
    lis r5, lbl_807C7840@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7840@l
    stw r0, 0x8(r3)
    stw r27, 0xc(r3)
    bl __register_global_object
    stb r27, lbl_8087EE74
lbl_fn_800FB1BC_00000F3C:
    lis r25, lbl_807C6BB8@ha
    addi r25, r25, lbl_807C6BB8@l
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800FB1BC_00000FA4
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_800FB1BC_00000F98
lbl_fn_800FB1BC_00000F5C:
    lwz r0, 0x0(r25)
    add r3, r0, r27
    lwzx r0, r27, r0
    cmpwi r0, -0x1
    beq lbl_fn_800FB1BC_00000F78
    cmpwi r0, 0xf
    bne lbl_fn_800FB1BC_00000F90
lbl_fn_800FB1BC_00000F78:
    lwz r12, 0x4(r3)
    mr r4, r26
    addi r5, r1, 0x50
    li r3, 0xf
    mtctr r12
    bctrl
lbl_fn_800FB1BC_00000F90:
    addi r28, r28, 0x1
    addi r27, r27, 0x8
lbl_fn_800FB1BC_00000F98:
    lwz r0, 0x4(r25)
    cmpw r28, r0
    blt lbl_fn_800FB1BC_00000F5C
lbl_fn_800FB1BC_00000FA4:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_800FB4B0(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    bl _savegpr_17
    cmpwi r5, 0x0
    lwz r29, 0xd8(r1)
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    beq lbl_fn_800FB4B0_00001018
    cmpwi r4, 0x0
    bne lbl_fn_800FB4B0_00001020
lbl_fn_800FB4B0_00001018:
    li r3, 0x0
    b lbl_fn_800FB4B0_0000151C
lbl_fn_800FB4B0_00001020:
    lwz r3, lbl_8087F8A0
    li r31, 0x0
    lfs f31, 0x44(r5)
    li r21, -0x1
    lwz r30, 0x48(r3)
    li r20, 0x1
    lfs f30, lbl_80881494
    lis r19, lbl_807C7030@ha
    b lbl_fn_800FB4B0_000011E8
lbl_fn_800FB4B0_00001044:
    mr r3, r30
    mr r4, r25
    mr r5, r24
    bl fn_801533C8
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_0000106C
    mr r3, r24
    bl fn_8021AA48
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_000011E4
lbl_fn_800FB4B0_0000106C:
    lwz r0, 0x64(r24)
    cmpwi r0, 0x4
    bne lbl_fn_800FB4B0_00001090
    mr r3, r23
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800FB4B0_000011E4
lbl_fn_800FB4B0_00001090:
    lwz r0, 0x64(r24)
    cmpwi r0, 0x2
    bne lbl_fn_800FB4B0_000010B4
    mr r3, r23
    mr r4, r30
    li r5, 0x0
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_000011E4
lbl_fn_800FB4B0_000010B4:
    lwz r0, 0x64(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800FB4B0_000010C8
    cmplw r23, r30
    bne lbl_fn_800FB4B0_000011E4
lbl_fn_800FB4B0_000010C8:
    lfs f1, 0x8(r26)
    addi r3, r1, 0x58
    lfs f0, 0x530(r30)
    lfs f3, 0x4(r26)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f0, 0x528(r30)
    lfs f1, 0x0(r26)
    fsubs f2, f3, f2
    stfs f4, 0x60(r1)
    fsubs f0, f1, f0
    stfs f2, 0x5c(r1)
    stfs f0, 0x58(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_800FB4B0_000011E4
    mr r3, r24
    bl fn_8021A9CC
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_00001148
    lwz r6, 0x5c(r24)
    mr r3, r30
    mr r4, r24
    mr r7, r23
    li r5, 0x0
    li r8, 0x0
    bl fn_80178668
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_000011E4
    li r31, 0x1
    b lbl_fn_800FB4B0_000011E4
lbl_fn_800FB4B0_00001148:
    mr r3, r22
    mr r4, r23
    mr r5, r30
    mr r6, r24
    mr r7, r27
    mr r8, r25
    mr r9, r28
    bl fn_800FD658
    or r3, r31, r3
    cmpwi r29, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r31, r0, 31
    beq lbl_fn_800FB4B0_000011E4
    stfs f30, 0x48(r1)
    addi r17, r30, 0xb0
    stfs f30, 0x4c(r1)
    stfs f30, 0x50(r1)
    stfs f30, 0x54(r1)
    lwz r3, 0xb0(r24)
    bl fn_800EFDA0
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_800FB4B0_000011E4
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stw r21, 0x8(r1)
    addi r7, r19, lbl_807C7030@l
    lfs f1, lbl_80881494
    mr r4, r18
    stw r20, 0xc(r1)
    mr r5, r17
    mr r8, r7
    addi r9, r1, 0x48
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_800FB4B0_000011E4:
    lwz r30, 0x14ac(r30)
lbl_fn_800FB4B0_000011E8:
    cmpwi r30, 0x0
    bne lbl_fn_800FB4B0_00001044
    lwz r3, lbl_8087F408
    li r19, -0x1
    lfs f30, lbl_80881494
    li r20, 0x1
    lwz r30, 0x48(r3)
    lis r21, lbl_807C7030@ha
    b lbl_fn_800FB4B0_000013B0
lbl_fn_800FB4B0_0000120C:
    mr r3, r30
    mr r4, r25
    mr r5, r24
    bl fn_801533C8
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_00001234
    mr r3, r24
    bl fn_8021AA48
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_000013AC
lbl_fn_800FB4B0_00001234:
    lwz r0, 0x64(r24)
    cmpwi r0, 0x4
    bne lbl_fn_800FB4B0_00001258
    mr r3, r23
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800FB4B0_000013AC
lbl_fn_800FB4B0_00001258:
    lwz r0, 0x64(r24)
    cmpwi r0, 0x2
    bne lbl_fn_800FB4B0_0000127C
    mr r3, r23
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_000013AC
lbl_fn_800FB4B0_0000127C:
    lwz r0, 0x64(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800FB4B0_00001290
    cmplw r23, r30
    bne lbl_fn_800FB4B0_000013AC
lbl_fn_800FB4B0_00001290:
    lfs f1, 0x8(r26)
    addi r3, r1, 0x38
    lfs f0, 0x530(r30)
    lfs f3, 0x4(r26)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f0, 0x528(r30)
    lfs f1, 0x0(r26)
    fsubs f2, f3, f2
    stfs f4, 0x40(r1)
    fsubs f0, f1, f0
    stfs f2, 0x3c(r1)
    stfs f0, 0x38(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_800FB4B0_000013AC
    mr r3, r24
    bl fn_8021A9CC
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_00001310
    lwz r6, 0x5c(r24)
    mr r3, r30
    mr r4, r24
    mr r7, r23
    li r5, 0x0
    li r8, 0x0
    bl fn_80178668
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_000013AC
    li r31, 0x1
    b lbl_fn_800FB4B0_000013AC
lbl_fn_800FB4B0_00001310:
    mr r3, r22
    mr r4, r23
    mr r5, r30
    mr r6, r24
    mr r7, r27
    mr r8, r25
    mr r9, r28
    bl fn_800FD658
    or r3, r31, r3
    cmpwi r29, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r31, r0, 31
    beq lbl_fn_800FB4B0_000013AC
    stfs f30, 0x28(r1)
    addi r17, r30, 0xb0
    stfs f30, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f30, 0x34(r1)
    lwz r3, 0xb0(r24)
    bl fn_800EFDA0
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_800FB4B0_000013AC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    stw r19, 0x8(r1)
    addi r7, r21, lbl_807C7030@l
    lfs f1, lbl_80881494
    mr r4, r18
    stw r20, 0xc(r1)
    mr r5, r17
    mr r8, r7
    addi r9, r1, 0x28
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_800FB4B0_000013AC:
    lwz r30, 0x14ac(r30)
lbl_fn_800FB4B0_000013B0:
    cmpwi r30, 0x0
    bne lbl_fn_800FB4B0_0000120C
    cmpwi r29, 0x0
    beq lbl_fn_800FB4B0_00001470
    lfs f0, lbl_80881494
    addi r17, r23, 0x534
    stfs f0, 0x18(r1)
    addi r19, r23, 0x528
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r3, 0xb0(r24)
    bl fn_800EFBC4
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_800FB4B0_00001434
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    lfs f1, lbl_80881494
    stw r0, 0xc(r1)
    mr r4, r18
    mr r7, r19
    mr r8, r17
    lwz r3, lbl_8087F3C0
    addi r9, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_800FB4B0_00001434:
    lwz r3, 0xb0(r24)
    addi r17, r23, 0x528
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_800FB4B0_00001470
    lfs f1, lbl_80881494
    mr r4, r3
    mr r5, r17
    addi r3, r1, 0x10
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_800FB4B0_00001470:
    cmpwi r31, 0x0
    beq lbl_fn_800FB4B0_00001508
    cmpwi r23, 0x0
    beq lbl_fn_800FB4B0_00001508
    lwz r0, 0x48(r23)
    cmpwi r0, 0x0
    bne lbl_fn_800FB4B0_00001508
    lwz r0, 0x12a4(r23)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FB4B0_000014A4
    addis r3, r22, 0x4
    lfs f2, -0x75c8(r3)
    b lbl_fn_800FB4B0_000014A8
lbl_fn_800FB4B0_000014A4:
    lfs f2, lbl_80881494
lbl_fn_800FB4B0_000014A8:
    addis r3, r22, 0x4
    lfs f0, -0x75e4(r3)
    lfs f1, -0x75fc(r3)
    fmuls f2, f0, f2
    lfs f0, -0x75f4(r3)
    fadds f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_800FB4B0_000014CC
    b lbl_fn_800FB4B0_000014D0
lbl_fn_800FB4B0_000014CC:
    fmr f1, f0
lbl_fn_800FB4B0_000014D0:
    lfs f3, lbl_80881478
    fcmpo cr0, f3, f1
    ble lbl_fn_800FB4B0_000014E0
    b lbl_fn_800FB4B0_00001500
lbl_fn_800FB4B0_000014E0:
    addis r3, r22, 0x4
    lfs f1, -0x75fc(r3)
    lfs f0, -0x75f4(r3)
    fadds f3, f1, f2
    fcmpo cr0, f3, f0
    bge lbl_fn_800FB4B0_000014FC
    b lbl_fn_800FB4B0_00001500
lbl_fn_800FB4B0_000014FC:
    fmr f3, f0
lbl_fn_800FB4B0_00001500:
    addis r3, r22, 0x4
    stfs f3, -0x75fc(r3)
lbl_fn_800FB4B0_00001508:
    cmpwi r23, 0x0
    beq lbl_fn_800FB4B0_00001518
    li r0, 0x0
    stw r0, 0xad8(r23)
lbl_fn_800FB4B0_00001518:
    mr r3, r31
lbl_fn_800FB4B0_0000151C:
    addi r11, r1, 0xb0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    bl _restgpr_17
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_800FBA30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r10, r3, 0x4
    lfs f1, lbl_80881478
    stw r0, 0x24(r1)
    li r0, -0x1
    lfs f2, lbl_80881494
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r5, -0x1c68(r10)
    mr r5, r6
    mr r6, r7
    mr r7, r8
    stw r0, 0x8(r1)
    mr r8, r9
    li r9, 0x0
    li r10, 0x1e
    stw r0, 0xc(r1)
    bl fn_800FAB80
    addis r4, r31, 0x4
    li r0, 0x0
    stw r0, -0x1c68(r4)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800FBA9C(void)
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
    bl _savegpr_26
    fmr f25, f1
    mr r30, r5
    mr r31, r6
    mr r29, r4
    mr r4, r7
    mr r3, r30
    mr r5, r31
    bl fn_801533C8
    cmpwi r3, 0x0
    beq lbl_fn_800FBA9C_00001644
    li r3, -0x1
    b lbl_fn_800FBA9C_0000191C
lbl_fn_800FBA9C_00001644:
    cmpwi r29, 0x0
    beq lbl_fn_800FBA9C_000016C0
    cmpwi r31, 0x0
    beq lbl_fn_800FBA9C_000016C0
    lwz r0, 0x64(r31)
    cmpwi r0, 0x4
    bne lbl_fn_800FBA9C_00001694
    mr r3, r29
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_800FBA9C_00001694
    mr r3, r29
    mr r4, r30
    bl fn_80154E38
    cmpwi r3, 0x0
    bne lbl_fn_800FBA9C_00001694
    li r3, -0x1
    b lbl_fn_800FBA9C_0000191C
lbl_fn_800FBA9C_00001694:
    lwz r0, 0x64(r31)
    cmpwi r0, 0x2
    bne lbl_fn_800FBA9C_000016C0
    mr r3, r29
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800FBA9C_000016C0
    li r3, -0x1
    b lbl_fn_800FBA9C_0000191C
lbl_fn_800FBA9C_000016C0:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_800FBA9C_000016E0
    lwz r0, 0x560(r30)
    cmpwi r0, 0x41
    bne lbl_fn_800FBA9C_000016E0
    li r3, -0x1
    b lbl_fn_800FBA9C_0000191C
lbl_fn_800FBA9C_000016E0:
    lfs f1, 0x40(r31)
    li r27, -0x1
    lfs f0, 0x8e4(r29)
    li r26, 0x0
    lfs f29, lbl_808814B8
    fadds f28, f1, f0
    lfs f27, 0x50(r31)
    lfs f26, 0x54(r31)
    lfs f30, lbl_80881478
    lfs f31, lbl_80881494
    lfs f24, lbl_80881500
    b lbl_fn_800FBA9C_0000190C
lbl_fn_800FBA9C_00001710:
    mr r3, r30
    mr r4, r26
    bl fn_80148B0C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_800FBA9C_00001908
    lwz r0, 0x4(r31)
    li r5, 0x0
    lwz r4, 0x0(r3)
    cmpwi r0, 0xcb
    bne lbl_fn_800FBA9C_00001750
    rlwinm r0, r4, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_800FBA9C_00001784
    li r5, 0x1
    b lbl_fn_800FBA9C_00001784
lbl_fn_800FBA9C_00001750:
    lbz r6, 0x1(r31)
    cmpwi r6, 0x1
    bne lbl_fn_800FBA9C_0000176C
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_800FBA9C_0000176C
    li r5, 0x1
lbl_fn_800FBA9C_0000176C:
    extsb. r0, r6
    bne lbl_fn_800FBA9C_00001784
    clrlwi r0, r4, 31
    cmpwi r0, 0x1
    bne lbl_fn_800FBA9C_00001784
    li r5, 0x1
lbl_fn_800FBA9C_00001784:
    cmpwi r5, 0x0
    bne lbl_fn_800FBA9C_00001908
    lfs f1, 0x8(r3)
    lfs f0, 0x52c(r29)
    lfs f4, 0x10(r3)
    fsubs f5, f1, f0
    lfs f3, 0xc(r3)
    fadds f23, f28, f4
    lfs f2, 0x530(r29)
    lfs f1, 0x4(r3)
    fabs f4, f5
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    frsp f3, f4
    stfs f5, 0x30(r1)
    fsubs f0, f1, f0
    stfs f2, 0x34(r1)
    fcmpo cr0, f3, f23
    stfs f0, 0x2c(r1)
    bgt lbl_fn_800FBA9C_00001908
    stfs f0, 0x14(r1)
    addi r3, r1, 0x14
    stfs f30, 0x18(r1)
    stfs f2, 0x1c(r1)
    bl fn_805F9920
    fmuls f0, f23, f23
    fmr f22, f1
    fcmpo cr0, f1, f0
    bgt lbl_fn_800FBA9C_00001908
    lfs f0, 0x2c(r1)
    li r0, 0x0
    stfs f30, 0x30(r1)
    fcmpu cr0, f30, f0
    bne lbl_fn_800FBA9C_00001824
    fcmpu cr0, f30, f30
    bne lbl_fn_800FBA9C_00001824
    lfs f0, 0x34(r1)
    fcmpu cr0, f30, f0
    bne lbl_fn_800FBA9C_00001824
    li r0, 0x1
lbl_fn_800FBA9C_00001824:
    cmpwi r0, 0x0
    bne lbl_fn_800FBA9C_000018C0
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_805F98D0
    stfs f30, 0x20(r1)
    addi r3, r1, 0x38
    li r4, 0x79
    stfs f30, 0x24(r1)
    stfs f31, 0x28(r1)
    lfs f0, 0x538(r29)
    fadds f1, f25, f0
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x2c
    addi r4, r1, 0x20
    bl fn_805F9990
    fmr f23, f1
    bl fn_8068AE9C
    frsp f1, f1
    fmuls f0, f24, f27
    fcmpo cr0, f1, f0
    bgt lbl_fn_800FBA9C_00001908
    fcmpo cr0, f26, f30
    ble lbl_fn_800FBA9C_000018C0
    fnmsubs f1, f23, f23, f31
    bl fn_8068B100
    frsp f23, f1
    fmr f1, f22
    bl fn_8068B100
    frsp f1, f1
    lfs f0, 0x10(r28)
    fadds f0, f26, f0
    fmuls f1, f1, f23
    fcmpo cr0, f1, f0
    bgt lbl_fn_800FBA9C_00001908
lbl_fn_800FBA9C_000018C0:
    lfs f1, 0xc(r28)
    addi r3, r1, 0x8
    lfs f0, 0x530(r29)
    lfs f3, 0x8(r28)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x4(r28)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f29
    bge lbl_fn_800FBA9C_00001908
    mr r27, r26
    fmr f29, f1
lbl_fn_800FBA9C_00001908:
    addi r26, r26, 0x1
lbl_fn_800FBA9C_0000190C:
    lwz r0, 0x624(r30)
    cmplw r26, r0
    blt lbl_fn_800FBA9C_00001710
    mr r3, r27
lbl_fn_800FBA9C_0000191C:
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
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
