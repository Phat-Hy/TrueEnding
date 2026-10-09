#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_16(void);
extern void _restgpr_19(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_19(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8060AE60(void);
extern void fn_80695D84(void);
extern void fn_80703F90(void);
extern void fn_80704260(void);
extern void fn_80704890(void);
extern void fn_807053D0(void);
extern void fn_80705590(void);
extern void fn_807056B0(void);
extern void fn_807057E0(void);
extern void fn_80705880(void);
extern void fn_80705B20(void);
extern void fn_80705DA0(void);
extern void fn_80705DC0(void);
extern void fn_80705E20(void);
extern void fn_80705E80(void);
extern void fn_80705FD0(void);
extern void fn_80706390(void);
extern void fn_80706470(void);
extern void fn_807066F0(void);
extern void fn_807067D0(void);
extern void fn_80706DF0(void);
extern void fn_80706E80(void);
extern void fn_80707050(void);
extern void fn_807076C0(void);
extern void fn_80707800(void);
extern void fn_807080C0(void);
extern void fn_80708550(void);
extern void fn_80708810(void);
extern void fn_8071DDC0(void);
extern void fn_807204D0(void);
extern void fn_80720920(void);
extern void fn_80720AE0(void);
extern void fn_80720E20(void);
extern void fn_80720E80(void);
extern void fn_80720F60(void);

/* External data declarations */
extern u8 jumptable_807C6430[];

/* Small data declarations */
extern u32 lbl_808892A0;
extern u32 lbl_808892A4;
extern u32 lbl_808892A8;
extern u32 lbl_808892AC;
extern u32 lbl_808892B0;
extern u32 lbl_808892B4;
extern u32 lbl_808892B8;
extern u32 lbl_808892BC;
extern u32 lbl_808892C0;
extern u32 lbl_808892C4;
extern u32 lbl_808892C8;
extern u32 lbl_808892CC;
extern u32 lbl_808892D0;

/* Function declarations */
void pad_03_8071E178_text(void);
void fn_8071E180(void);
void fn_8071E440(void);
void fn_8071E680(void);
void fn_8071E750(void);
void fn_8071E950(void);
void fn_8071E970(void);
void fn_8071EA40(void);
void fn_8071EA60(void);
void fn_8071EA80(void);
void fn_8071EAB0(void);
void fn_8071EB30(void);
void fn_8071EB50(void);
void fn_8071EB70(void);
void fn_8071EB90(void);
void fn_8071EBB0(void);
void fn_8071EBD0(void);
void fn_8071EBF0(void);
void fn_8071EC60(void);
void fn_8071ECA0(void);
void fn_8071ECC0(void);
void fn_8071ECF0(void);
void fn_8071ED30(void);
void fn_8071ED70(void);
void fn_8071EDB0(void);
void fn_8071EE00(void);
void fn_8071EEA0(void);
void fn_8071EF30(void);
void fn_8071EFB0(void);
void fn_8071EFD0(void);
void fn_8071F050(void);
void fn_8071F0D0(void);
void fn_8071F160(void);
void fn_8071F1E0(void);
void fn_8071F270(void);
void fn_8071F360(void);
void fn_8071F450(void);
void fn_8071F4D0(void);
void fn_8071F620(void);
void fn_8071F7C0(void);

asm void pad_03_8071E178_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_8071E180(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_25
    mr r30, r3
    bl OSDisableInterrupts
    lbz r0, 0x9c(r30)
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_fn_8071E180_00000044
    bl OSRestoreInterrupts
    b lbl_fn_8071E180_000002A0
lbl_fn_8071E180_00000044:
    lhz r0, 0xa2(r30)
    li r31, 0x0
    clrlwi. r0, r0, 31
    beq lbl_fn_8071E180_000000FC
    lbz r0, 0x9d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8071E180_000000FC
    lbz r0, 0x9e(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8071E180_000000FC
    mr r25, r30
    li r28, 0x0
    li r26, 0x0
    b lbl_fn_8071E180_000000D8
lbl_fn_8071E180_0000007C:
    lbz r0, 0xa1(r30)
    lfs f31, 0xe4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8071E180_00000094
    lfs f0, 0x30(r25)
    fmuls f31, f31, f0
lbl_fn_8071E180_00000094:
    add r27, r30, r26
    li r31, 0x0
    b lbl_fn_8071E180_000000C0
lbl_fn_8071E180_000000A0:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8071E180_000000B8
    fmr f1, f31
    li r4, 0x1
    bl fn_80706E80
lbl_fn_8071E180_000000B8:
    addi r27, r27, 0x10
    addi r31, r31, 0x1
lbl_fn_8071E180_000000C0:
    lwz r0, 0x8c(r30)
    cmpw r31, r0
    blt lbl_fn_8071E180_000000A0
    addi r25, r25, 0x18
    addi r26, r26, 0x4
    addi r28, r28, 0x1
lbl_fn_8071E180_000000D8:
    lwz r0, 0x90(r30)
    cmpw r28, r0
    blt lbl_fn_8071E180_0000007C
    lhz r0, 0xa2(r30)
    li r31, 0x1
    stb r31, 0x9e(r30)
    rlwinm r0, r0, 0, 16, 30
    rlwinm r0, r0, 0, 30, 28
    sth r0, 0xa2(r30)
lbl_fn_8071E180_000000FC:
    lbz r0, 0x9e(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8071E180_000001A4
    lhz r0, 0xa2(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_8071E180_00000154
    lbz r0, 0x9d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8071E180_00000154
    lbz r0, 0x9f(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8071E180_0000013C
    li r0, 0x1
    stb r0, 0xa0(r30)
    li r31, 0x2
    b lbl_fn_8071E180_00000148
lbl_fn_8071E180_0000013C:
    li r0, 0x0
    stb r0, 0xa0(r30)
    li r31, 0x1
lbl_fn_8071E180_00000148:
    lhz r0, 0xa2(r30)
    rlwinm r0, r0, 0, 31, 29
    sth r0, 0xa2(r30)
lbl_fn_8071E180_00000154:
    mr r26, r30
    li r27, 0x0
    b lbl_fn_8071E180_00000198
lbl_fn_8071E180_00000160:
    mr r25, r26
    li r28, 0x0
    b lbl_fn_8071E180_00000184
lbl_fn_8071E180_0000016C:
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8071E180_0000017C
    bl fn_80707800
lbl_fn_8071E180_0000017C:
    addi r25, r25, 0x4
    addi r28, r28, 0x1
lbl_fn_8071E180_00000184:
    lwz r0, 0x90(r30)
    cmpw r28, r0
    blt lbl_fn_8071E180_0000016C
    addi r26, r26, 0x10
    addi r27, r27, 0x1
lbl_fn_8071E180_00000198:
    lwz r0, 0x8c(r30)
    cmpw r27, r0
    blt lbl_fn_8071E180_00000160
lbl_fn_8071E180_000001A4:
    cmpwi r31, 0x1
    beq lbl_fn_8071E180_000001B8
    cmpwi r31, 0x2
    beq lbl_fn_8071E180_0000021C
    b lbl_fn_8071E180_00000298
lbl_fn_8071E180_000001B8:
    mr r26, r30
    li r28, 0x0
    b lbl_fn_8071E180_0000020C
lbl_fn_8071E180_000001C4:
    mr r31, r26
    li r27, 0x0
    b lbl_fn_8071E180_000001F8
lbl_fn_8071E180_000001D0:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8071E180_000001F0
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8071E180_000001F0
    li r4, 0x1
    bl fn_8060AE60
lbl_fn_8071E180_000001F0:
    addi r31, r31, 0x4
    addi r27, r27, 0x1
lbl_fn_8071E180_000001F8:
    lwz r0, 0x90(r30)
    cmpw r27, r0
    blt lbl_fn_8071E180_000001D0
    addi r26, r26, 0x10
    addi r28, r28, 0x1
lbl_fn_8071E180_0000020C:
    lwz r0, 0x8c(r30)
    cmpw r28, r0
    blt lbl_fn_8071E180_000001C4
    b lbl_fn_8071E180_00000298
lbl_fn_8071E180_0000021C:
    mr r31, r30
    li r28, 0x0
    b lbl_fn_8071E180_0000028C
lbl_fn_8071E180_00000228:
    mr r26, r31
    li r27, 0x0
    b lbl_fn_8071E180_00000278
lbl_fn_8071E180_00000234:
    lwz r3, 0xc(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8071E180_00000270
    lwz r3, 0x0(r3)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8071E180_00000260
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8071E180_00000260
    li r4, 0x1
lbl_fn_8071E180_00000260:
    cmpwi r4, 0x0
    beq lbl_fn_8071E180_00000270
    li r4, 0x0
    bl fn_8060AE60
lbl_fn_8071E180_00000270:
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_fn_8071E180_00000278:
    lwz r0, 0x90(r30)
    cmpw r27, r0
    blt lbl_fn_8071E180_00000234
    addi r31, r31, 0x10
    addi r28, r28, 0x1
lbl_fn_8071E180_0000028C:
    lwz r0, 0x8c(r30)
    cmpw r28, r0
    blt lbl_fn_8071E180_00000228
lbl_fn_8071E180_00000298:
    mr r3, r29
    bl OSRestoreInterrupts
lbl_fn_8071E180_000002A0:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8071E440(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_19
    cmpwi r4, 0x2
    mr r20, r3
    mr r21, r6
    mr r22, r7
    mr r23, r8
    ble lbl_fn_8071E440_000002FC
    li r30, 0x2
    b lbl_fn_8071E440_0000030C
lbl_fn_8071E440_000002FC:
    cmpwi r4, 0x1
    li r30, 0x1
    blt lbl_fn_8071E440_0000030C
    mr r30, r4
lbl_fn_8071E440_0000030C:
    cmpwi r5, 0x4
    ble lbl_fn_8071E440_0000031C
    li r29, 0x4
    b lbl_fn_8071E440_0000032C
lbl_fn_8071E440_0000031C:
    cmpwi r5, 0x1
    li r29, 0x1
    blt lbl_fn_8071E440_0000032C
    mr r29, r5
lbl_fn_8071E440_0000032C:
    bl OSDisableInterrupts
    cmpwi r21, 0xff
    mr r19, r3
    li r27, 0x10
    bne lbl_fn_8071E440_00000344
    li r27, 0x1f
lbl_fn_8071E440_00000344:
    mullw r26, r30, r29
    addi r28, r1, 0x8
    li r25, 0x0
    lis r31, fn_8071F4D0@ha
    b lbl_fn_8071E440_00000464
lbl_fn_8071E440_00000358:
    bl fn_807080C0
    mr r4, r27
    mr r6, r20
    addi r5, r31, fn_8071F4D0@l
    bl fn_80708550
    cmpwi r3, 0x0
    bne lbl_fn_8071E440_00000418
    subf r24, r25, r26
    bl fn_807204D0
    addi r5, r3, 0x8
    lwz r3, 0x8(r3)
    b lbl_fn_8071E440_000003AC
lbl_fn_8071E440_00000388:
    lwz r0, -0x54(r3)
    cmpw r21, r0
    blt lbl_fn_8071E440_000003B4
    lwz r4, -0x70(r3)
    lwz r0, -0x6c(r3)
    mullw r0, r4, r0
    subf. r24, r0, r24
    ble lbl_fn_8071E440_000003B4
    lwz r3, 0x0(r3)
lbl_fn_8071E440_000003AC:
    cmplw r3, r5
    bne lbl_fn_8071E440_00000388
lbl_fn_8071E440_000003B4:
    cmpwi r24, 0x0
    ble lbl_fn_8071E440_000003F4
    addi r20, r1, 0x8
    li r21, 0x0
    b lbl_fn_8071E440_000003DC
lbl_fn_8071E440_000003C8:
    bl fn_807080C0
    lwz r4, 0x0(r20)
    bl fn_80708810
    addi r20, r20, 0x4
    addi r21, r21, 0x1
lbl_fn_8071E440_000003DC:
    cmpw r21, r25
    blt lbl_fn_8071E440_000003C8
    mr r3, r19
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8071E440_000004EC
lbl_fn_8071E440_000003F4:
    cmplwi r27, 0x1f
    li r24, 0x11
    bne lbl_fn_8071E440_00000404
    li r24, 0x1f
lbl_fn_8071E440_00000404:
    bl fn_807080C0
    mr r4, r24
    mr r6, r20
    addi r5, r31, fn_8071F4D0@l
    bl fn_80708550
lbl_fn_8071E440_00000418:
    cmpwi r3, 0x0
    bne lbl_fn_8071E440_00000458
    addi r20, r1, 0x8
    li r21, 0x0
    b lbl_fn_8071E440_00000440
lbl_fn_8071E440_0000042C:
    bl fn_807080C0
    lwz r4, 0x0(r20)
    bl fn_80708810
    addi r20, r20, 0x4
    addi r21, r21, 0x1
lbl_fn_8071E440_00000440:
    cmpw r21, r25
    blt lbl_fn_8071E440_0000042C
    mr r3, r19
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8071E440_000004EC
lbl_fn_8071E440_00000458:
    stw r3, 0x0(r28)
    addi r28, r28, 0x4
    addi r25, r25, 0x1
lbl_fn_8071E440_00000464:
    cmpw r25, r26
    blt lbl_fn_8071E440_00000358
    mr r24, r20
    addi r21, r1, 0x8
    li r26, 0x0
    b lbl_fn_8071E440_000004B8
lbl_fn_8071E440_0000047C:
    mr r25, r24
    li r28, 0x0
    b lbl_fn_8071E440_000004A8
lbl_fn_8071E440_00000488:
    lwz r3, 0x0(r21)
    mr r4, r27
    bl fn_80705DA0
    lwz r0, 0x0(r21)
    addi r28, r28, 0x1
    stw r0, 0xc(r25)
    addi r25, r25, 0x4
    addi r21, r21, 0x4
lbl_fn_8071E440_000004A8:
    cmpw r28, r29
    blt lbl_fn_8071E440_00000488
    addi r24, r24, 0x10
    addi r26, r26, 0x1
lbl_fn_8071E440_000004B8:
    cmpw r26, r30
    blt lbl_fn_8071E440_0000047C
    mr r3, r20
    mr r4, r30
    mr r5, r29
    mr r6, r22
    mr r7, r23
    bl fn_8071DDC0
    li r0, 0x1
    stb r0, 0x9c(r20)
    mr r3, r19
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_8071E440_000004EC:
    addi r11, r1, 0x60
    bl _restgpr_19
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8071E680(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    bl OSDisableInterrupts
    lbz r0, 0x9c(r24)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_8071E680_0000053C
    bl OSRestoreInterrupts
    b lbl_fn_8071E680_000005BC
lbl_fn_8071E680_0000053C:
    mr r29, r24
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_8071E680_00000590
lbl_fn_8071E680_0000054C:
    mr r28, r29
    li r26, 0x0
    b lbl_fn_8071E680_0000057C
lbl_fn_8071E680_00000558:
    lwz r25, 0xc(r28)
    cmpwi r25, 0x0
    beq lbl_fn_8071E680_00000574
    bl fn_807080C0
    mr r4, r25
    bl fn_80708810
    stw r30, 0xc(r28)
lbl_fn_8071E680_00000574:
    addi r28, r28, 0x4
    addi r26, r26, 0x1
lbl_fn_8071E680_0000057C:
    lwz r0, 0x90(r24)
    cmpw r26, r0
    blt lbl_fn_8071E680_00000558
    addi r29, r29, 0x10
    addi r27, r27, 0x1
lbl_fn_8071E680_00000590:
    lwz r0, 0x8c(r24)
    cmpw r27, r0
    blt lbl_fn_8071E680_0000054C
    li r30, 0x0
    stw r30, 0x8c(r24)
    bl fn_807204D0
    mr r4, r24
    bl fn_80720920
    stb r30, 0x9c(r24)
    mr r3, r31
    bl OSRestoreInterrupts
lbl_fn_8071E680_000005BC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071E750(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_16
    mr r23, r3
    mr r24, r4
    lwz r28, 0xc(r4)
    mr r25, r5
    mr r31, r23
    mr r30, r24
    addi r29, r4, 0x44
    li r27, 0x0
    b lbl_fn_8071E750_00000754
lbl_fn_8071E750_00000610:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8071E750_00000744
    lwz r0, 0x0(r24)
    lwz r26, 0x18(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8071E750_000006A8
    lwz r16, 0x1c(r30)
    mr r6, r25
    lwz r17, 0x20(r30)
    mr r7, r26
    lwz r18, 0x24(r30)
    addi r3, r1, 0x2a
    lwz r19, 0x28(r30)
    addi r4, r1, 0x2c
    lwz r20, 0x2c(r30)
    addi r5, r1, 0x2e
    lwz r21, 0x30(r30)
    addi r8, r1, 0x8
    lwz r22, 0x34(r30)
    lwz r12, 0x38(r30)
    lhz r11, 0x3c(r30)
    lhz r10, 0x3e(r30)
    lhz r9, 0x40(r30)
    lhz r0, 0x42(r30)
    stw r16, 0x8(r1)
    stw r17, 0xc(r1)
    stw r18, 0x10(r1)
    stw r19, 0x14(r1)
    stw r20, 0x18(r1)
    stw r21, 0x1c(r1)
    stw r22, 0x20(r1)
    stw r12, 0x24(r1)
    sth r11, 0x28(r1)
    sth r10, 0x2a(r1)
    sth r9, 0x2c(r1)
    sth r0, 0x2e(r1)
    bl fn_807076C0
lbl_fn_8071E750_000006A8:
    mr r16, r31
    li r17, 0x0
    b lbl_fn_8071E750_00000738
lbl_fn_8071E750_000006B4:
    lwz r18, 0xc(r16)
    cmpwi r18, 0x0
    beq lbl_fn_8071E750_00000730
    lwz r4, 0x18(r30)
    mr r3, r18
    lwz r5, 0x0(r24)
    mr r6, r28
    bl fn_807053D0
    lbz r4, 0x4(r24)
    mr r3, r18
    lwz r7, 0x10(r24)
    mr r5, r26
    lwz r8, 0x14(r24)
    mr r6, r25
    bl fn_80705FD0
    lwz r0, 0x0(r24)
    cmpwi r0, 0x3
    bne lbl_fn_8071E750_00000714
    mr r3, r18
    addi r4, r1, 0x8
    bl fn_80706470
    mr r3, r18
    mr r4, r29
    bl fn_807066F0
lbl_fn_8071E750_00000714:
    lfs f1, 0xe4(r23)
    mr r3, r18
    li r4, 0x5
    bl fn_80706390
    mr r3, r18
    li r4, 0x0
    bl fn_80705DC0
lbl_fn_8071E750_00000730:
    addi r16, r16, 0x4
    addi r17, r17, 0x1
lbl_fn_8071E750_00000738:
    lwz r0, 0x90(r23)
    cmpw r17, r0
    blt lbl_fn_8071E750_000006B4
lbl_fn_8071E750_00000744:
    addi r31, r31, 0x10
    addi r30, r30, 0x34
    addi r29, r29, 0x34
    addi r27, r27, 0x1
lbl_fn_8071E750_00000754:
    lwz r0, 0x8c(r23)
    cmpw r27, r0
    blt lbl_fn_8071E750_00000610
    lfs f1, lbl_808892A0
    mr r3, r23
    lfs f0, lbl_808892A4
    li r4, 0x0
    b lbl_fn_8071E750_00000794
lbl_fn_8071E750_00000774:
    stfs f1, 0x2c(r3)
    addi r4, r4, 0x1
    stfs f1, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    addi r3, r3, 0x18
lbl_fn_8071E750_00000794:
    lwz r0, 0x90(r23)
    cmpw r4, r0
    blt lbl_fn_8071E750_00000774
    lhz r0, 0xa2(r23)
    li r3, 0x0
    stb r3, 0x9f(r23)
    addi r11, r1, 0x70
    ori r0, r0, 0x38
    stb r3, 0xa0(r23)
    stb r3, 0x9d(r23)
    stb r3, 0x9e(r23)
    sth r0, 0xa2(r23)
    bl _restgpr_16
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8071E950(void)
{
    nofralloc
    lhz r0, 0xa2(r3)
    li r5, 0x1
    li r4, 0x0
    stb r5, 0x9d(r3)
    ori r0, r0, 0x1
    stb r4, 0x9f(r3)
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071E970(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x9e(r3)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_8071E970_000008A0
    mr r29, r27
    li r30, 0x0
    b lbl_fn_8071E970_0000088C
lbl_fn_8071E970_00000828:
    mr r28, r29
    li r31, 0x0
    b lbl_fn_8071E970_00000878
lbl_fn_8071E970_00000834:
    lwz r3, 0xc(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8071E970_00000870
    lwz r3, 0x0(r3)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8071E970_00000860
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8071E970_00000860
    li r4, 0x1
lbl_fn_8071E970_00000860:
    cmpwi r4, 0x0
    beq lbl_fn_8071E970_00000870
    li r4, 0x0
    bl fn_8060AE60
lbl_fn_8071E970_00000870:
    addi r28, r28, 0x4
    addi r31, r31, 0x1
lbl_fn_8071E970_00000878:
    lwz r0, 0x90(r27)
    cmpw r31, r0
    blt lbl_fn_8071E970_00000834
    addi r29, r29, 0x10
    addi r30, r30, 0x1
lbl_fn_8071E970_0000088C:
    lwz r0, 0x8c(r27)
    cmpw r30, r0
    blt lbl_fn_8071E970_00000828
    li r0, 0x0
    stb r0, 0x9e(r27)
lbl_fn_8071E970_000008A0:
    li r0, 0x0
    stb r0, 0xa0(r27)
    addi r11, r1, 0x20
    stb r0, 0x9f(r27)
    stb r0, 0x9d(r27)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071EA40(void)
{
    nofralloc
    lbz r0, 0x9f(r3)
    cmplw r0, r4
    beqlr
    lhz r0, 0xa2(r3)
    stb r4, 0x9f(r3)
    ori r0, r0, 0x2
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EA60(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8071EA60_000008FC
    lwz r3, 0x14(r3)
    blr
lbl_fn_8071EA60_000008FC:
    li r3, 0x1
    blr
}

asm void fn_8071EA80(void)
{
    nofralloc
    lfs f0, lbl_808892A4
    fcmpo cr0, f1, f0
    bge lbl_fn_8071EA80_00000918
    fmr f1, f0
lbl_fn_8071EA80_00000918:
    lfs f0, 0xe8(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xe8(r3)
    ori r0, r0, 0x8
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EAB0(void)
{
    nofralloc
    lfs f0, lbl_808892A4
    fcmpo cr0, f1, f0
    bge lbl_fn_8071EAB0_00000948
    fmr f1, f0
lbl_fn_8071EAB0_00000948:
    lfs f0, lbl_808892A4
    fcmpo cr0, f2, f0
    bge lbl_fn_8071EAB0_00000958
    fmr f2, f0
lbl_fn_8071EAB0_00000958:
    lfs f0, lbl_808892A4
    fcmpo cr0, f2, f0
    bge lbl_fn_8071EAB0_00000984
    lfs f0, 0xf0(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xf0(r3)
    ori r0, r0, 0x8
    sth r0, 0xa2(r3)
    blr
lbl_fn_8071EAB0_00000984:
    lfs f0, 0xec(r3)
    fcmpu cr0, f2, f0
    bne lbl_fn_8071EAB0_0000099C
    lfs f0, 0xf0(r3)
    fcmpu cr0, f1, f0
    beqlr
lbl_fn_8071EAB0_0000099C:
    lhz r0, 0xa2(r3)
    stfs f2, 0xec(r3)
    ori r0, r0, 0x8
    stfs f1, 0xf0(r3)
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EB30(void)
{
    nofralloc
    lfs f0, 0xe4(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xe4(r3)
    ori r0, r0, 0x4
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EB50(void)
{
    nofralloc
    lwz r0, 0xf4(r3)
    cmpw r4, r0
    beqlr
    lhz r0, 0xa2(r3)
    stw r4, 0xf4(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EB70(void)
{
    nofralloc
    lwz r0, 0xf8(r3)
    cmpw r4, r0
    beqlr
    lhz r0, 0xa2(r3)
    stw r4, 0xf8(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EB90(void)
{
    nofralloc
    lfs f0, 0xac(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xac(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EBB0(void)
{
    nofralloc
    lfs f0, 0xb0(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xb0(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EBD0(void)
{
    nofralloc
    lfs f0, 0xb4(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xb4(r3)
    ori r0, r0, 0x20
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EBF0(void)
{
    nofralloc
    lfs f2, lbl_808892A0
    fcmpo cr0, f1, f2
    ble lbl_fn_8071EBF0_00000A88
    b lbl_fn_8071EBF0_00000A9C
lbl_fn_8071EBF0_00000A88:
    lfs f2, lbl_808892A4
    fcmpo cr0, f1, f2
    bge lbl_fn_8071EBF0_00000A98
    b lbl_fn_8071EBF0_00000A9C
lbl_fn_8071EBF0_00000A98:
    fmr f2, f1
lbl_fn_8071EBF0_00000A9C:
    lbz r0, 0xa5(r3)
    li r5, 0x0
    cmpw r4, r0
    beq lbl_fn_8071EBF0_00000AB4
    stb r4, 0xa5(r3)
    li r5, 0x1
lbl_fn_8071EBF0_00000AB4:
    lfs f0, 0xb8(r3)
    fcmpu cr0, f2, f0
    beq lbl_fn_8071EBF0_00000AC8
    stfs f2, 0xb8(r3)
    li r5, 0x1
lbl_fn_8071EBF0_00000AC8:
    cmpwi r5, 0x0
    beqlr
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x100
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EC60(void)
{
    nofralloc
    cmpwi r4, 0x7f
    ble lbl_fn_8071EC60_00000AF8
    li r4, 0x7f
    b lbl_fn_8071EC60_00000B00
lbl_fn_8071EC60_00000AF8:
    srawi r0, r4, 31
    andc r4, r4, r0
lbl_fn_8071EC60_00000B00:
    lbz r0, 0xa4(r3)
    cmpw r4, r0
    beqlr
    lhz r0, 0xa2(r3)
    stb r4, 0xa4(r3)
    ori r0, r0, 0x80
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071ECA0(void)
{
    nofralloc
    lwz r0, 0xbc(r3)
    cmpw r4, r0
    beqlr
    lhz r0, 0xa2(r3)
    stw r4, 0xbc(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071ECC0(void)
{
    nofralloc
    lfs f0, lbl_808892A4
    fcmpo cr0, f1, f0
    bge lbl_fn_8071ECC0_00000B58
    fmr f1, f0
lbl_fn_8071ECC0_00000B58:
    lfs f0, 0xc0(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xc0(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071ECF0(void)
{
    nofralloc
    lfs f2, lbl_808892A0
    lfs f0, lbl_808892A4
    fadds f1, f1, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_8071ECF0_00000B90
    fmr f1, f0
lbl_fn_8071ECF0_00000B90:
    lfs f0, 0xc4(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xc4(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071ED30(void)
{
    nofralloc
    lfs f0, lbl_808892A4
    fcmpo cr0, f1, f0
    bge lbl_fn_8071ED30_00000BC8
    fmr f1, f0
lbl_fn_8071ED30_00000BC8:
    slwi r0, r4, 2
    add r4, r3, r0
    lfs f0, 0xc8(r4)
    fcmpu cr0, f1, f0
    beqlr
    stfs f1, 0xc8(r4)
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071ED70(void)
{
    nofralloc
    lfs f0, lbl_808892A4
    fcmpo cr0, f1, f0
    bge lbl_fn_8071ED70_00000C08
    fmr f1, f0
lbl_fn_8071ED70_00000C08:
    slwi r0, r4, 2
    add r4, r3, r0
    lfs f0, 0xd4(r4)
    fcmpu cr0, f1, f0
    beqlr
    stfs f1, 0xd4(r4)
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EDB0(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lfs f1, 0x0(r5)
    lfs f0, 0x4(r5)
    lfs f3, 0x8(r5)
    add r4, r3, r0
    lfs f2, 0xc(r5)
    stfs f1, 0x2c(r4)
    lfs f1, 0x10(r5)
    stfs f0, 0x30(r4)
    lfs f0, 0x14(r5)
    stfs f3, 0x34(r4)
    stfs f2, 0x38(r4)
    stfs f1, 0x3c(r4)
    stfs f0, 0x40(r4)
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x3c
    sth r0, 0xa2(r3)
    blr
}

asm void fn_8071EE00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    stw r4, 0xa8(r3)
    mr r27, r3
    bl fn_807204D0
    mr r4, r27
    bl fn_80720AE0
    lwz r0, 0xa8(r27)
    cmpwi r0, 0x1
    bne lbl_fn_8071EE00_00000D10
    mr r31, r27
    li r29, 0x0
    b lbl_fn_8071EE00_00000D04
lbl_fn_8071EE00_00000CC8:
    mr r30, r31
    li r28, 0x0
    b lbl_fn_8071EE00_00000CF0
lbl_fn_8071EE00_00000CD4:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8071EE00_00000CE8
    li r4, 0xf
    bl fn_80705DA0
lbl_fn_8071EE00_00000CE8:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_8071EE00_00000CF0:
    lwz r0, 0x90(r27)
    cmpw r28, r0
    blt lbl_fn_8071EE00_00000CD4
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_fn_8071EE00_00000D04:
    lwz r0, 0x8c(r27)
    cmpw r29, r0
    blt lbl_fn_8071EE00_00000CC8
lbl_fn_8071EE00_00000D10:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071EEA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0xa8(r3)
    mr r27, r3
    cmpwi r0, 0x1
    beq lbl_fn_8071EEA0_00000DA0
    mr r31, r27
    li r29, 0x0
    b lbl_fn_8071EEA0_00000D94
lbl_fn_8071EEA0_00000D58:
    mr r30, r31
    li r28, 0x0
    b lbl_fn_8071EEA0_00000D80
lbl_fn_8071EEA0_00000D64:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8071EEA0_00000D78
    li r4, 0x10
    bl fn_80705DA0
lbl_fn_8071EEA0_00000D78:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_8071EEA0_00000D80:
    lwz r0, 0x90(r27)
    cmpw r28, r0
    blt lbl_fn_8071EEA0_00000D64
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_fn_8071EEA0_00000D94:
    lwz r0, 0x8c(r27)
    cmpw r29, r0
    blt lbl_fn_8071EEA0_00000D58
lbl_fn_8071EEA0_00000DA0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071EF30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    slwi r0, r4, 4
    stw r31, 0x1c(r1)
    add r31, r3, r0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_8071EF30_00000E08
lbl_fn_8071EF30_00000DEC:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8071EF30_00000E00
    mr r4, r29
    bl fn_807066F0
lbl_fn_8071EF30_00000E00:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8071EF30_00000E08:
    lwz r0, 0x90(r28)
    cmpw r30, r0
    blt lbl_fn_8071EF30_00000DEC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071EFB0(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8071EFB0_00000E48
    b fn_80705B20
lbl_fn_8071EFB0_00000E48:
    li r3, 0x0
    blr
}

asm void fn_8071EFD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    slwi r0, r4, 4
    mr r27, r3
    mr r28, r5
    mr r29, r6
    add r31, r3, r0
    li r30, 0x0
    b lbl_fn_8071EFD0_00000EA8
lbl_fn_8071EFD0_00000E88:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8071EFD0_00000EA0
    mr r4, r28
    mr r5, r29
    bl fn_80705590
lbl_fn_8071EFD0_00000EA0:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8071EFD0_00000EA8:
    lwz r0, 0x90(r27)
    cmpw r30, r0
    blt lbl_fn_8071EFD0_00000E88
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071F050(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    slwi r0, r4, 4
    mr r27, r3
    mr r28, r5
    mr r29, r6
    add r31, r3, r0
    li r30, 0x0
    b lbl_fn_8071F050_00000F28
lbl_fn_8071F050_00000F08:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8071F050_00000F20
    mr r4, r28
    mr r5, r29
    bl fn_807056B0
lbl_fn_8071F050_00000F20:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8071F050_00000F28:
    lwz r0, 0x90(r27)
    cmpw r30, r0
    blt lbl_fn_8071F050_00000F08
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071F0D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r31, r26
    li r29, 0x0
    b lbl_fn_8071F0D0_00000FBC
lbl_fn_8071F0D0_00000F80:
    mr r30, r31
    li r28, 0x0
    b lbl_fn_8071F0D0_00000FA8
lbl_fn_8071F0D0_00000F8C:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8071F0D0_00000FA0
    mr r4, r27
    bl fn_807057E0
lbl_fn_8071F0D0_00000FA0:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_8071F0D0_00000FA8:
    lwz r0, 0x90(r26)
    cmpw r28, r0
    blt lbl_fn_8071F0D0_00000F8C
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_fn_8071F0D0_00000FBC:
    lwz r0, 0x8c(r26)
    cmpw r29, r0
    blt lbl_fn_8071F0D0_00000F80
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071F160(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    slwi r0, r4, 4
    mr r27, r3
    mr r28, r5
    mr r29, r6
    add r31, r3, r0
    li r30, 0x0
    b lbl_fn_8071F160_00001038
lbl_fn_8071F160_00001018:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8071F160_00001030
    mr r4, r28
    mr r5, r29
    bl fn_80705880
lbl_fn_8071F160_00001030:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8071F160_00001038:
    lwz r0, 0x90(r27)
    cmpw r30, r0
    blt lbl_fn_8071F160_00001018
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071F1E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r31, r26
    li r29, 0x0
    b lbl_fn_8071F1E0_000010CC
lbl_fn_8071F1E0_00001090:
    mr r30, r31
    li r28, 0x0
    b lbl_fn_8071F1E0_000010B8
lbl_fn_8071F1E0_0000109C:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8071F1E0_000010B0
    mr r4, r27
    bl fn_80705DC0
lbl_fn_8071F1E0_000010B0:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_8071F1E0_000010B8:
    lwz r0, 0x90(r26)
    cmpw r28, r0
    blt lbl_fn_8071F1E0_0000109C
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_fn_8071F1E0_000010CC:
    lwz r0, 0x8c(r26)
    cmpw r29, r0
    blt lbl_fn_8071F1E0_00001090
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071F270(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x20
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    bl _savegpr_26
    lfs f31, lbl_808892A0
    mr r26, r3
    lfs f0, 0xe8(r3)
    fmuls f31, f31, f0
    bl fn_80703F90
    bl fn_80704260
    fmuls f31, f31, f1
    mr r31, r26
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8071F270_000011AC
lbl_fn_8071F270_00001150:
    lfs f0, 0x2c(r31)
    add r29, r26, r30
    lfs f1, 0xf0(r26)
    li r27, 0x0
    fmuls f2, f31, f0
    lfs f0, 0xec(r26)
    fmuls f30, f2, f1
    fmuls f29, f2, f0
    b lbl_fn_8071F270_00001194
lbl_fn_8071F270_00001174:
    lwz r3, 0xc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8071F270_0000118C
    fmr f1, f30
    fmr f2, f29
    bl fn_80707050
lbl_fn_8071F270_0000118C:
    addi r29, r29, 0x10
    addi r27, r27, 0x1
lbl_fn_8071F270_00001194:
    lwz r0, 0x8c(r26)
    cmpw r27, r0
    blt lbl_fn_8071F270_00001174
    addi r31, r31, 0x18
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_8071F270_000011AC:
    lwz r0, 0x90(r26)
    cmpw r28, r0
    blt lbl_fn_8071F270_00001150
    addi r11, r1, 0x20
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8071F360(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    mr r25, r3
    li r29, 0x0
    mr r31, r25
    li r28, 0x0
    b lbl_fn_8071F360_000012AC
lbl_fn_8071F360_00001210:
    mr r30, r31
    li r27, 0x0
    b lbl_fn_8071F360_00001298
lbl_fn_8071F360_0000121C:
    lwz r26, 0xc(r30)
    cmpwi r26, 0x0
    beq lbl_fn_8071F360_00001290
    mr r3, r25
    mr r4, r28
    mr r5, r27
    addi r6, r1, 0x18
    addi r7, r1, 0x8
    bl fn_8071F7C0
    mr r3, r26
    addi r4, r1, 0x18
    bl fn_807067D0
    lwz r4, 0xbc(r25)
    or r3, r29, r3
    neg r0, r3
    cmplwi r4, 0x1
    or r0, r0, r3
    srwi r29, r0, 31
    bgt lbl_fn_8071F360_00001278
    mr r3, r26
    li r4, 0x0
    bl fn_80705E20
    b lbl_fn_8071F360_00001290
lbl_fn_8071F360_00001278:
    mr r3, r26
    li r4, 0x1
    bl fn_80705E20
    mr r3, r26
    addi r4, r1, 0x8
    bl fn_80706DF0
lbl_fn_8071F360_00001290:
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_8071F360_00001298:
    lwz r0, 0x90(r25)
    cmpw r27, r0
    blt lbl_fn_8071F360_0000121C
    addi r31, r31, 0x10
    addi r28, r28, 0x1
lbl_fn_8071F360_000012AC:
    lwz r0, 0x8c(r25)
    cmpw r28, r0
    blt lbl_fn_8071F360_00001210
    addi r11, r1, 0x50
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8071F450(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_8071F450_00001334
lbl_fn_8071F450_000012FC:
    add r30, r27, r31
    li r28, 0x0
    b lbl_fn_8071F450_00001320
lbl_fn_8071F450_00001308:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8071F450_00001318
    bl fn_80705E80
lbl_fn_8071F450_00001318:
    addi r30, r30, 0x10
    addi r28, r28, 0x1
lbl_fn_8071F450_00001320:
    lwz r0, 0x8c(r27)
    cmpw r28, r0
    blt lbl_fn_8071F450_00001308
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_8071F450_00001334:
    lwz r0, 0x90(r27)
    cmpw r29, r0
    blt lbl_fn_8071F450_000012FC
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8071F4D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    cmpwi r4, 0x0
    mr r22, r3
    mr r28, r5
    li r26, 0x0
    beq lbl_fn_8071F4D0_0000138C
    cmpwi r4, 0x1
    beq lbl_fn_8071F4D0_00001394
    b lbl_fn_8071F4D0_0000139C
lbl_fn_8071F4D0_0000138C:
    li r27, 0x1
    b lbl_fn_8071F4D0_0000139C
lbl_fn_8071F4D0_00001394:
    li r27, 0x3
    li r26, 0x1
lbl_fn_8071F4D0_0000139C:
    mr r30, r28
    li r25, 0x0
    li r31, 0x0
    b lbl_fn_8071F4D0_00001440
lbl_fn_8071F4D0_000013AC:
    mr r29, r30
    li r24, 0x0
    b lbl_fn_8071F4D0_0000142C
lbl_fn_8071F4D0_000013B8:
    lwz r23, 0xc(r29)
    cmpwi r23, 0x0
    beq lbl_fn_8071F4D0_00001424
    cmplw r23, r22
    bne lbl_fn_8071F4D0_000013E4
    cmpwi r26, 0x0
    bne lbl_fn_8071F4D0_00001420
    bl fn_807080C0
    mr r4, r23
    bl fn_80708810
    b lbl_fn_8071F4D0_00001420
lbl_fn_8071F4D0_000013E4:
    lwz r3, 0x0(r23)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8071F4D0_00001404
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_fn_8071F4D0_00001404
    li r4, 0x1
lbl_fn_8071F4D0_00001404:
    cmpwi r4, 0x0
    beq lbl_fn_8071F4D0_00001414
    li r4, 0x0
    bl fn_8060AE60
lbl_fn_8071F4D0_00001414:
    bl fn_807080C0
    mr r4, r23
    bl fn_80708810
lbl_fn_8071F4D0_00001420:
    stw r31, 0xc(r29)
lbl_fn_8071F4D0_00001424:
    addi r29, r29, 0x4
    addi r24, r24, 0x1
lbl_fn_8071F4D0_0000142C:
    lwz r0, 0x90(r28)
    cmpw r24, r0
    blt lbl_fn_8071F4D0_000013B8
    addi r30, r30, 0x10
    addi r25, r25, 0x1
lbl_fn_8071F4D0_00001440:
    lwz r0, 0x8c(r28)
    cmpw r25, r0
    blt lbl_fn_8071F4D0_000013AC
    cmpwi r26, 0x0
    li r0, 0x0
    stb r0, 0x9f(r28)
    stb r0, 0x9d(r28)
    stw r0, 0x8c(r28)
    beq lbl_fn_8071F4D0_0000146C
    mr r3, r28
    bl fn_8071E680
lbl_fn_8071F4D0_0000146C:
    lwz r12, 0x94(r28)
    cmpwi r12, 0x0
    beq lbl_fn_8071F4D0_0000148C
    mr r3, r28
    mr r4, r27
    lwz r5, 0x98(r28)
    mtctr r12
    bctrl
lbl_fn_8071F4D0_0000148C:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8071F620(void)
{
    nofralloc
    lfs f3, lbl_808892A0
    fabs f0, f1
    fsubs f4, f2, f3
    fabs f2, f4
    fcmpo cr0, f0, f2
    cror eq, lt, eq
    bne lbl_fn_8071F620_00001514
    lfs f0, lbl_808892A4
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_8071F620_000014F0
    lfs f2, lbl_808892AC
    lfs f0, lbl_808892A8
    fmuls f2, f2, f4
    stfs f1, 0x0(r4)
    fadds f0, f0, f2
    stfs f0, 0x0(r5)
    b lbl_fn_8071F620_00001634
lbl_fn_8071F620_000014F0:
    lfs f0, lbl_808892B4
    lfs f3, lbl_808892B0
    fmuls f2, f0, f4
    lfs f0, lbl_808892A8
    fmuls f1, f3, f1
    stfs f1, 0x0(r4)
    fadds f0, f0, f2
    stfs f0, 0x0(r5)
    b lbl_fn_8071F620_00001634
lbl_fn_8071F620_00001514:
    lfs f2, lbl_808892A4
    fcmpo cr0, f1, f2
    cror eq, gt, eq
    bne lbl_fn_8071F620_000015AC
    fcmpo cr0, f4, f2
    cror eq, lt, eq
    bne lbl_fn_8071F620_00001574
    fneg f5, f4
    lfs f2, lbl_808892C0
    lfs f6, lbl_808892BC
    fmuls f4, f2, f4
    lfs f3, lbl_808892AC
    fdivs f7, f5, f1
    lfs f5, lbl_808892B8
    lfs f2, lbl_808892A8
    fmuls f6, f6, f7
    fmuls f1, f3, f1
    fadds f3, f5, f6
    fadds f1, f4, f1
    fmuls f3, f3, f0
    fadds f0, f2, f1
    stfs f3, 0x0(r4)
    stfs f0, 0x0(r5)
    b lbl_fn_8071F620_00001634
lbl_fn_8071F620_00001574:
    fneg f5, f4
    lfs f2, lbl_808892B4
    lfs f4, lbl_808892C4
    fmuls f2, f2, f1
    lfs f3, lbl_808892B8
    fdivs f5, f5, f1
    lfs f1, lbl_808892A8
    fmuls f4, f4, f5
    fadds f1, f1, f2
    fadds f2, f3, f4
    fmuls f0, f2, f0
    stfs f0, 0x0(r4)
    stfs f1, 0x0(r5)
    b lbl_fn_8071F620_00001634
lbl_fn_8071F620_000015AC:
    fcmpo cr0, f4, f2
    cror eq, lt, eq
    bne lbl_fn_8071F620_000015FC
    fneg f5, f4
    lfs f2, lbl_808892C0
    lfs f6, lbl_808892BC
    fmuls f4, f2, f4
    lfs f3, lbl_808892B4
    fdivs f7, f5, f1
    lfs f5, lbl_808892B8
    lfs f2, lbl_808892A8
    fmuls f6, f6, f7
    fmuls f1, f3, f1
    fsubs f3, f6, f5
    fsubs f1, f4, f1
    fmuls f3, f3, f0
    fadds f0, f2, f1
    stfs f3, 0x0(r4)
    stfs f0, 0x0(r5)
    b lbl_fn_8071F620_00001634
lbl_fn_8071F620_000015FC:
    fneg f6, f4
    lfs f5, lbl_808892C4
    fneg f3, f1
    lfs f2, lbl_808892B4
    lfs f4, lbl_808892B8
    fdivs f6, f6, f1
    lfs f1, lbl_808892A8
    fmuls f5, f5, f6
    fmuls f2, f2, f3
    fsubs f3, f5, f4
    fadds f1, f1, f2
    fmuls f0, f3, f0
    stfs f0, 0x0(r4)
    stfs f1, 0x0(r5)
lbl_fn_8071F620_00001634:
    lfs f1, 0x0(r5)
    lfs f0, lbl_808892A0
    fadds f0, f1, f0
    stfs f0, 0x0(r5)
    blr
}

asm void fn_8071F7C0(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    lfs f2, lbl_808892A4
    stw r0, 0x164(r1)
    fmr f3, f2
    stfd f31, 0x150(r1)
    fmr f4, f2
    fmr f5, f2
    psq_st f31, 0x158(r1), 0, 0
    fmr f6, f2
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    stfd f26, 0x100(r1)
    psq_st f26, 0x108(r1), 0, 0
    stfd f25, 0xf0(r1)
    psq_st f25, 0xf8(r1), 0, 0
    stfd f24, 0xe0(r1)
    psq_st f24, 0xe8(r1), 0, 0
    stfd f23, 0xd0(r1)
    psq_st f23, 0xd8(r1), 0, 0
    stfd f22, 0xc0(r1)
    psq_st f22, 0xc8(r1), 0, 0
    stfd f21, 0xb0(r1)
    psq_st f21, 0xb8(r1), 0, 0
    stfd f20, 0xa0(r1)
    psq_st f20, 0xa8(r1), 0, 0
    stfd f19, 0x90(r1)
    psq_st f19, 0x98(r1), 0, 0
    stfd f18, 0x80(r1)
    psq_st f18, 0x88(r1), 0, 0
    stfd f17, 0x70(r1)
    psq_st f17, 0x78(r1), 0, 0
    stfd f16, 0x60(r1)
    psq_st f16, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r7
    stw r30, 0x58(r1)
    mr r30, r6
    stw r29, 0x54(r1)
    mr r29, r5
    stw r28, 0x50(r1)
    mr r28, r3
    lwz r8, 0xbc(r3)
    clrlwi. r0, r8, 31
    beq lbl_fn_8071F7C0_00001744
    mulli r0, r5, 0x18
    lfs f1, 0xc8(r3)
    lfs f2, 0xc0(r3)
    lfs f3, 0xc4(r3)
    add r6, r3, r0
    lfs f0, 0x3c(r6)
    fadds f4, f1, f0
    fcmpo cr0, f4, f6
    bge lbl_fn_8071F7C0_0000173C
    fmr f4, f6
lbl_fn_8071F7C0_0000173C:
    lfs f5, 0xcc(r3)
    lfs f6, 0xd0(r3)
lbl_fn_8071F7C0_00001744:
    lfs f0, lbl_808892A0
    fcmpo cr0, f3, f0
    ble lbl_fn_8071F7C0_00001754
    b lbl_fn_8071F7C0_00001768
lbl_fn_8071F7C0_00001754:
    lfs f0, lbl_808892A4
    fcmpo cr0, f3, f0
    bge lbl_fn_8071F7C0_00001764
    b lbl_fn_8071F7C0_00001768
lbl_fn_8071F7C0_00001764:
    fmr f0, f3
lbl_fn_8071F7C0_00001768:
    lfs f1, lbl_808892A0
    fmuls f31, f2, f0
    fcmpo cr0, f4, f1
    ble lbl_fn_8071F7C0_0000177C
    b lbl_fn_8071F7C0_00001790
lbl_fn_8071F7C0_0000177C:
    lfs f1, lbl_808892A4
    fcmpo cr0, f4, f1
    bge lbl_fn_8071F7C0_0000178C
    b lbl_fn_8071F7C0_00001790
lbl_fn_8071F7C0_0000178C:
    fmr f1, f4
lbl_fn_8071F7C0_00001790:
    lfs f0, lbl_808892A0
    fmuls f30, f2, f1
    fcmpo cr0, f5, f0
    ble lbl_fn_8071F7C0_000017A4
    b lbl_fn_8071F7C0_000017B8
lbl_fn_8071F7C0_000017A4:
    lfs f0, lbl_808892A4
    fcmpo cr0, f5, f0
    bge lbl_fn_8071F7C0_000017B4
    b lbl_fn_8071F7C0_000017B8
lbl_fn_8071F7C0_000017B4:
    fmr f0, f5
lbl_fn_8071F7C0_000017B8:
    lfs f1, lbl_808892A0
    fmuls f29, f2, f0
    fcmpo cr0, f6, f1
    ble lbl_fn_8071F7C0_000017CC
    b lbl_fn_8071F7C0_000017E0
lbl_fn_8071F7C0_000017CC:
    lfs f1, lbl_808892A4
    fcmpo cr0, f6, f1
    bge lbl_fn_8071F7C0_000017DC
    b lbl_fn_8071F7C0_000017E0
lbl_fn_8071F7C0_000017DC:
    fmr f1, f6
lbl_fn_8071F7C0_000017E0:
    li r0, 0x0
    li r6, 0x2
    slw r0, r6, r0
    fmuls f28, f2, f1
    and. r0, r8, r0
    lfs f0, lbl_808892A4
    beq lbl_fn_8071F7C0_00001808
    lfs f1, 0xd4(r3)
    stfs f1, 0x40(r1)
    b lbl_fn_8071F7C0_0000180C
lbl_fn_8071F7C0_00001808:
    stfs f0, 0x40(r1)
lbl_fn_8071F7C0_0000180C:
    li r0, 0x1
    slw r0, r6, r0
    and. r0, r8, r0
    beq lbl_fn_8071F7C0_00001828
    lfs f1, 0xd8(r3)
    stfs f1, 0x44(r1)
    b lbl_fn_8071F7C0_0000182C
lbl_fn_8071F7C0_00001828:
    stfs f0, 0x44(r1)
lbl_fn_8071F7C0_0000182C:
    li r0, 0x2
    slw r0, r6, r0
    and. r0, r8, r0
    beq lbl_fn_8071F7C0_00001848
    lfs f1, 0xdc(r3)
    stfs f1, 0x48(r1)
    b lbl_fn_8071F7C0_0000184C
lbl_fn_8071F7C0_00001848:
    stfs f0, 0x48(r1)
lbl_fn_8071F7C0_0000184C:
    li r0, 0x3
    slw r0, r6, r0
    and. r0, r8, r0
    beq lbl_fn_8071F7C0_00001868
    lfs f1, 0xe0(r3)
    stfs f1, 0x4c(r1)
    b lbl_fn_8071F7C0_0000186C
lbl_fn_8071F7C0_00001868:
    stfs f0, 0x4c(r1)
lbl_fn_8071F7C0_0000186C:
    li r7, 0x0
    stw r7, 0x28(r1)
    stb r7, 0x2c(r1)
    stb r7, 0x2d(r1)
    lwz r0, 0xf8(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_8071F7C0_00001934
    lis r6, jumptable_807C6430@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_807C6430@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    stw r7, 0x28(r1)
    b lbl_fn_8071F7C0_0000193C
    li r0, 0x1
    stw r7, 0x28(r1)
    stb r0, 0x2c(r1)
    b lbl_fn_8071F7C0_0000193C
    li r0, 0x1
    stw r7, 0x28(r1)
    stb r0, 0x2c(r1)
    stb r0, 0x2d(r1)
    b lbl_fn_8071F7C0_0000193C
    li r0, 0x1
    stw r0, 0x28(r1)
    b lbl_fn_8071F7C0_0000193C
    li r0, 0x1
    stw r0, 0x28(r1)
    stb r0, 0x2c(r1)
    b lbl_fn_8071F7C0_0000193C
    li r0, 0x1
    stw r0, 0x28(r1)
    stb r0, 0x2c(r1)
    stb r0, 0x2d(r1)
    b lbl_fn_8071F7C0_0000193C
    li r0, 0x2
    stw r0, 0x28(r1)
    b lbl_fn_8071F7C0_0000193C
    li r6, 0x2
    li r0, 0x1
    stw r6, 0x28(r1)
    stb r0, 0x2c(r1)
    b lbl_fn_8071F7C0_0000193C
    li r0, 0x1
    li r6, 0x2
    stw r6, 0x28(r1)
    stb r0, 0x2c(r1)
    stb r0, 0x2d(r1)
    b lbl_fn_8071F7C0_0000193C
lbl_fn_8071F7C0_00001934:
    li r0, 0x0
    stw r0, 0x28(r1)
lbl_fn_8071F7C0_0000193C:
    lwz r6, 0x8c(r3)
    cmpwi r6, 0x1
    ble lbl_fn_8071F7C0_000019D4
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8071F7C0_000019D4
    mulli r0, r5, 0x18
    lfs f3, 0xac(r3)
    lfs f2, 0xb0(r3)
    cmpwi r4, 0x0
    add r3, r3, r0
    lfs f1, 0x34(r3)
    lfs f0, 0x38(r3)
    fadds f1, f3, f1
    fadds f16, f2, f0
    bne lbl_fn_8071F7C0_00001990
    addi r3, r1, 0x28
    bl fn_80720E80
    fmr f27, f1
    lfs f26, lbl_808892A4
    b lbl_fn_8071F7C0_000019AC
lbl_fn_8071F7C0_00001990:
    cmpwi r4, 0x1
    bne lbl_fn_8071F7C0_000019AC
    fneg f1, f1
    lfs f27, lbl_808892A4
    addi r3, r1, 0x28
    bl fn_80720E80
    fmr f26, f1
lbl_fn_8071F7C0_000019AC:
    fmr f1, f16
    addi r3, r1, 0x28
    bl fn_80720F60
    lfs f0, lbl_808892C0
    fmr f24, f1
    addi r3, r1, 0x28
    fsubs f1, f0, f16
    bl fn_80720F60
    fmr f16, f1
    b lbl_fn_8071F7C0_00001AB8
lbl_fn_8071F7C0_000019D4:
    cmpwi r6, 0x2
    lfs f16, lbl_808892A4
    bne lbl_fn_8071F7C0_000019F8
    cmpwi r4, 0x0
    bne lbl_fn_8071F7C0_000019EC
    lfs f16, lbl_808892C8
lbl_fn_8071F7C0_000019EC:
    cmpwi r4, 0x1
    bne lbl_fn_8071F7C0_000019F8
    lfs f16, lbl_808892A0
lbl_fn_8071F7C0_000019F8:
    bl fn_80703F90
    bl fn_80704890
    cmpwi r3, 0x2
    bne lbl_fn_8071F7C0_00001A40
    mulli r0, r29, 0x18
    lfs f0, 0xac(r28)
    lfs f2, 0xb0(r28)
    mr r3, r28
    fadds f3, f0, f16
    addi r4, r1, 0x24
    add r6, r28, r0
    addi r5, r1, 0x20
    lfs f1, 0x34(r6)
    lfs f0, 0x38(r6)
    fadds f1, f3, f1
    fadds f2, f2, f0
    bl fn_8071F620
    b lbl_fn_8071F7C0_00001A6C
lbl_fn_8071F7C0_00001A40:
    mulli r0, r29, 0x18
    lfs f0, 0xac(r28)
    fadds f1, f0, f16
    add r3, r28, r0
    lfs f0, 0x34(r3)
    fadds f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xb0(r28)
    lfs f0, 0x38(r3)
    fadds f0, f1, f0
    stfs f0, 0x20(r1)
lbl_fn_8071F7C0_00001A6C:
    lfs f1, 0x24(r1)
    addi r3, r1, 0x28
    bl fn_80720E80
    lfs f0, 0x24(r1)
    fmr f27, f1
    addi r3, r1, 0x28
    fneg f1, f0
    bl fn_80720E80
    fmr f26, f1
    lfs f1, 0x20(r1)
    addi r3, r1, 0x28
    bl fn_80720F60
    lfs f2, lbl_808892C0
    fmr f24, f1
    lfs f0, 0x20(r1)
    addi r3, r1, 0x28
    fsubs f1, f2, f0
    bl fn_80720F60
    fmr f16, f1
lbl_fn_8071F7C0_00001AB8:
    lfs f1, lbl_808892CC
    bl fn_80720E20
    fadds f2, f27, f26
    lfs f0, lbl_808892B0
    fmr f17, f1
    fmuls f25, f0, f2
    bl fn_80703F90
    bl fn_80704890
    cmpwi r3, 0x0
    beq lbl_fn_8071F7C0_00001AFC
    cmpwi r3, 0x3
    beq lbl_fn_8071F7C0_00001B3C
    cmpwi r3, 0x1
    beq lbl_fn_8071F7C0_00001B78
    cmpwi r3, 0x2
    beq lbl_fn_8071F7C0_00001BD0
    b lbl_fn_8071F7C0_00001C28
lbl_fn_8071F7C0_00001AFC:
    fmuls f1, f28, f27
    lfs f2, lbl_808892A4
    fmuls f0, f28, f26
    stfs f2, 0x1c(r1)
    fmuls f23, f31, f27
    fmuls f22, f31, f26
    fmuls f21, f30, f27
    stfs f2, 0x18(r1)
    fmuls f20, f30, f26
    fmuls f19, f29, f27
    stfs f2, 0x14(r1)
    fmuls f18, f29, f26
    stfs f1, 0x10(r1)
    stfs f0, 0xc(r1)
    stfs f2, 0x8(r1)
    b lbl_fn_8071F7C0_00001C28
lbl_fn_8071F7C0_00001B3C:
    fmuls f23, f31, f25
    lfs f1, lbl_808892A4
    fmuls f21, f30, f25
    stfs f1, 0x1c(r1)
    fmuls f0, f28, f25
    fmuls f19, f29, f25
    fmr f22, f23
    stfs f1, 0x18(r1)
    fmr f20, f21
    fmr f18, f19
    stfs f1, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x8(r1)
    b lbl_fn_8071F7C0_00001C28
lbl_fn_8071F7C0_00001B78:
    fmuls f5, f27, f24
    fmuls f6, f26, f24
    fmuls f7, f17, f16
    fmuls f0, f28, f5
    fmuls f1, f28, f6
    fmuls f4, f31, f7
    stfs f0, 0x10(r1)
    fmuls f3, f30, f7
    fmuls f2, f29, f7
    stfs f4, 0x1c(r1)
    fmuls f0, f28, f7
    fmuls f23, f31, f5
    stfs f3, 0x18(r1)
    fmuls f22, f31, f6
    fmuls f21, f30, f5
    stfs f2, 0x14(r1)
    fmuls f20, f30, f6
    fmuls f19, f29, f5
    stfs f1, 0xc(r1)
    fmuls f18, f29, f6
    stfs f0, 0x8(r1)
    b lbl_fn_8071F7C0_00001C28
lbl_fn_8071F7C0_00001BD0:
    fmuls f6, f27, f16
    fmuls f7, f26, f16
    fmuls f4, f27, f24
    fmuls f5, f26, f24
    fmuls f1, f31, f6
    fmuls f0, f31, f7
    fmuls f3, f30, f6
    stfs f1, 0x1c(r1)
    fmuls f2, f30, f7
    fmuls f1, f29, f6
    stfs f0, 0x10(r1)
    fmuls f0, f29, f7
    fmuls f23, f31, f4
    stfs f3, 0x18(r1)
    fmuls f22, f31, f5
    fmuls f21, f30, f4
    stfs f2, 0xc(r1)
    fmuls f20, f30, f5
    fmuls f19, f29, f4
    stfs f1, 0x14(r1)
    fmuls f18, f29, f5
    stfs f0, 0x8(r1)
lbl_fn_8071F7C0_00001C28:
    lfs f1, 0x40(r1)
    lfs f0, 0x44(r1)
    fmuls f4, f25, f1
    lfs f2, 0x48(r1)
    fmuls f3, f25, f0
    lfs f1, 0x4c(r1)
    lfs f0, lbl_808892A4
    fmuls f2, f25, f2
    fmuls f1, f25, f1
    stfs f4, 0x30(r1)
    fcmpo cr0, f23, f0
    stfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001C70
    li r0, 0x0
    b lbl_fn_8071F7C0_00001CA0
lbl_fn_8071F7C0_00001C70:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f23
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001C94
    lfs f0, lbl_808892D0
    fmuls f1, f0, f23
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001C9C
lbl_fn_8071F7C0_00001C94:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001C9C:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001CA0:
    lfs f0, lbl_808892A4
    sth r0, 0x0(r30)
    fcmpo cr0, f22, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001CBC
    li r0, 0x0
    b lbl_fn_8071F7C0_00001CEC
lbl_fn_8071F7C0_00001CBC:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f22
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001CE0
    lfs f0, lbl_808892D0
    fmuls f1, f0, f22
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001CE8
lbl_fn_8071F7C0_00001CE0:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001CE8:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001CEC:
    lfs f17, 0x1c(r1)
    lfs f0, lbl_808892A4
    sth r0, 0x2(r30)
    fcmpo cr0, f17, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001D0C
    li r0, 0x0
    b lbl_fn_8071F7C0_00001D3C
lbl_fn_8071F7C0_00001D0C:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001D30
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001D38
lbl_fn_8071F7C0_00001D30:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001D38:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001D3C:
    lfs f0, lbl_808892A4
    sth r0, 0x4(r30)
    fcmpo cr0, f21, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001D58
    li r0, 0x0
    b lbl_fn_8071F7C0_00001D88
lbl_fn_8071F7C0_00001D58:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f21
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001D7C
    lfs f0, lbl_808892D0
    fmuls f1, f0, f21
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001D84
lbl_fn_8071F7C0_00001D7C:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001D84:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001D88:
    lfs f0, lbl_808892A4
    sth r0, 0x6(r30)
    fcmpo cr0, f20, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001DA4
    li r0, 0x0
    b lbl_fn_8071F7C0_00001DD4
lbl_fn_8071F7C0_00001DA4:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f20
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001DC8
    lfs f0, lbl_808892D0
    fmuls f1, f0, f20
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001DD0
lbl_fn_8071F7C0_00001DC8:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001DD0:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001DD4:
    lfs f17, 0x18(r1)
    lfs f0, lbl_808892A4
    sth r0, 0x8(r30)
    fcmpo cr0, f17, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001DF4
    li r0, 0x0
    b lbl_fn_8071F7C0_00001E24
lbl_fn_8071F7C0_00001DF4:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001E18
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001E20
lbl_fn_8071F7C0_00001E18:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001E20:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001E24:
    lfs f0, lbl_808892A4
    sth r0, 0xa(r30)
    fcmpo cr0, f19, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001E40
    li r0, 0x0
    b lbl_fn_8071F7C0_00001E70
lbl_fn_8071F7C0_00001E40:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f19
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001E64
    lfs f0, lbl_808892D0
    fmuls f1, f0, f19
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001E6C
lbl_fn_8071F7C0_00001E64:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001E6C:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001E70:
    lfs f0, lbl_808892A4
    sth r0, 0xc(r30)
    fcmpo cr0, f18, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001E8C
    li r0, 0x0
    b lbl_fn_8071F7C0_00001EBC
lbl_fn_8071F7C0_00001E8C:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f18
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001EB0
    lfs f0, lbl_808892D0
    fmuls f1, f0, f18
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001EB8
lbl_fn_8071F7C0_00001EB0:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001EB8:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001EBC:
    lfs f17, 0x14(r1)
    lfs f0, lbl_808892A4
    sth r0, 0xe(r30)
    fcmpo cr0, f17, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001EDC
    li r0, 0x0
    b lbl_fn_8071F7C0_00001F0C
lbl_fn_8071F7C0_00001EDC:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001F00
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001F08
lbl_fn_8071F7C0_00001F00:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001F08:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001F0C:
    lfs f17, 0x10(r1)
    lfs f0, lbl_808892A4
    sth r0, 0x10(r30)
    fcmpo cr0, f17, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001F2C
    li r0, 0x0
    b lbl_fn_8071F7C0_00001F5C
lbl_fn_8071F7C0_00001F2C:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001F50
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001F58
lbl_fn_8071F7C0_00001F50:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001F58:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001F5C:
    lfs f17, 0xc(r1)
    lfs f0, lbl_808892A4
    sth r0, 0x12(r30)
    fcmpo cr0, f17, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001F7C
    li r0, 0x0
    b lbl_fn_8071F7C0_00001FAC
lbl_fn_8071F7C0_00001F7C:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001FA0
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001FA8
lbl_fn_8071F7C0_00001FA0:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001FA8:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001FAC:
    lfs f17, 0x8(r1)
    lfs f0, lbl_808892A4
    sth r0, 0x14(r30)
    fcmpo cr0, f17, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00001FCC
    li r0, 0x0
    b lbl_fn_8071F7C0_00001FFC
lbl_fn_8071F7C0_00001FCC:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00001FF0
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_00001FF8
lbl_fn_8071F7C0_00001FF0:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00001FF8:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_00001FFC:
    lfs f17, 0x30(r1)
    lfs f0, lbl_808892A4
    sth r0, 0x16(r30)
    fcmpo cr0, f17, f0
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_0000201C
    li r0, 0x0
    b lbl_fn_8071F7C0_0000204C
lbl_fn_8071F7C0_0000201C:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00002040
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_00002048
lbl_fn_8071F7C0_00002040:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00002048:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_0000204C:
    lfs f17, 0x34(r1)
    li r3, 0x0
    lfs f0, lbl_808892A4
    sth r0, 0x0(r31)
    fcmpo cr0, f17, f0
    sth r3, 0x2(r31)
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00002070
    b lbl_fn_8071F7C0_000020A0
lbl_fn_8071F7C0_00002070:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_00002094
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_0000209C
lbl_fn_8071F7C0_00002094:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_0000209C:
    clrlwi r3, r3, 16
lbl_fn_8071F7C0_000020A0:
    lfs f17, 0x38(r1)
    li r0, 0x0
    lfs f0, lbl_808892A4
    sth r3, 0x4(r31)
    fcmpo cr0, f17, f0
    sth r0, 0x6(r31)
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_000020C4
    b lbl_fn_8071F7C0_000020F4
lbl_fn_8071F7C0_000020C4:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_000020E8
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_000020F0
lbl_fn_8071F7C0_000020E8:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_000020F0:
    clrlwi r0, r3, 16
lbl_fn_8071F7C0_000020F4:
    lfs f17, 0x3c(r1)
    li r3, 0x0
    lfs f0, lbl_808892A4
    sth r0, 0x8(r31)
    fcmpo cr0, f17, f0
    sth r3, 0xa(r31)
    cror eq, lt, eq
    bne lbl_fn_8071F7C0_00002118
    b lbl_fn_8071F7C0_00002148
lbl_fn_8071F7C0_00002118:
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    cmplwi r3, 0xffff
    bge lbl_fn_8071F7C0_0000213C
    lfs f0, lbl_808892D0
    fmuls f1, f0, f17
    bl fn_80695D84
    b lbl_fn_8071F7C0_00002144
lbl_fn_8071F7C0_0000213C:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_fn_8071F7C0_00002144:
    clrlwi r3, r3, 16
lbl_fn_8071F7C0_00002148:
    li r0, 0x0
    sth r3, 0xc(r31)
    sth r0, 0xe(r31)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    psq_l f26, 0x108(r1), 0, 0
    lfd f26, 0x100(r1)
    psq_l f25, 0xf8(r1), 0, 0
    lfd f25, 0xf0(r1)
    psq_l f24, 0xe8(r1), 0, 0
    lfd f24, 0xe0(r1)
    psq_l f23, 0xd8(r1), 0, 0
    lfd f23, 0xd0(r1)
    psq_l f22, 0xc8(r1), 0, 0
    lfd f22, 0xc0(r1)
    psq_l f21, 0xb8(r1), 0, 0
    lfd f21, 0xb0(r1)
    psq_l f20, 0xa8(r1), 0, 0
    lfd f20, 0xa0(r1)
    psq_l f19, 0x98(r1), 0, 0
    lfd f19, 0x90(r1)
    psq_l f18, 0x88(r1), 0, 0
    lfd f18, 0x80(r1)
    psq_l f17, 0x78(r1), 0, 0
    lfd f17, 0x70(r1)
    psq_l f16, 0x68(r1), 0, 0
    lfd f16, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
