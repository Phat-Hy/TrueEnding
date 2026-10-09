#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_19(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003DEE0(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800EFC64(void);
extern void fn_800FB1BC(void);
extern void fn_80108F38(void);
extern void fn_801092C8(void);
extern void fn_8010CA2C(void);
extern void fn_8010CD3C(void);
extern void fn_8012B0B0(void);
extern void fn_8012DF7C(void);
extern void fn_8012E534(void);
extern void fn_80133B30(void);
extern void fn_80133BD8(void);
extern void fn_80133E24(void);
extern void fn_80133EE8(void);
extern void fn_80133F18(void);
extern void fn_80133F6C(void);
extern void fn_80133FBC(void);
extern void fn_80134134(void);
extern void fn_80134168(void);
extern void fn_80156120(void);
extern void fn_8016ADF4(void);
extern void fn_8016E484(void);
extern void fn_801781B0(void);
extern void fn_801789D8(void);
extern void fn_80179D44(void);
extern void fn_8017AC24(void);
extern void fn_80187CC0(void);
extern void fn_80219E6C(void);
extern void fn_8021A684(void);
extern void fn_8021A9CC(void);
extern void fn_80370174(void);
extern void fn_803750E4(void);
extern void fn_8044D6E0(void);
extern void fn_804EB4B0(void);
extern void fn_804EB7C8(void);
extern void fn_804EB818(void);
extern void fn_8059B670(void);
extern void fn_805F98D0(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_80730C68[];
extern u8 lbl_80730C70[];
extern u8 lbl_807C6B78[];
extern u8 lbl_807C6B84[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C6BA8[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE70;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F9E8;
extern u32 lbl_808807C0;
extern u32 lbl_808807C8;
extern u32 lbl_808807CC;
extern u32 lbl_808807D0;
extern u32 lbl_808807D4;
extern u32 lbl_808807D8;
extern u32 lbl_808807DC;
extern u32 lbl_808807E0;
extern u32 lbl_808807E4;
extern u32 lbl_808807E8;
extern u32 lbl_808807EC;
extern u32 lbl_808807F0;
extern u32 lbl_808807F4;
extern u32 lbl_808807F8;
extern u32 lbl_808807FC;
extern u32 lbl_80880800;
extern u32 lbl_80880804;
extern u32 lbl_80880808;
extern u32 lbl_8088080C;
extern u32 lbl_80880810;
extern u32 lbl_80880814;
extern u32 lbl_80880818;
extern u32 lbl_8088081C;
extern u32 lbl_80880820;
extern u32 lbl_80880824;
extern u32 lbl_80880828;

/* Function declarations */
void fn_8003E688(void);
void fn_8003E6B8(void);
void fn_8003E918(void);
void fn_8003E950(void);
void fn_8003EA3C(void);
void fn_8003EFB0(void);
void fn_8003F030(void);
void fn_8003F1E4(void);
void fn_8003F440(void);
void fn_8003F538(void);
void fn_80040434(void);
void fn_80040588(void);
void fn_80040664(void);
void fn_800407F4(void);
void fn_80040994(void);
void fn_80040B40(void);
void fn_80040B44(void);
void fn_800413EC(void);
void fn_800417E8(void);
void fn_80041A20(void);
void fn_80041A28(void);

asm void fn_8003E688(void)
{
    nofralloc
    lis r3, lbl_807C6B84@ha
    lis r4, fn_8003E6B8@ha
    addi r3, r3, lbl_807C6B84@l
    li r6, 0x0
    addi r0, r3, 0x4
    lis r5, lbl_807C6B78@ha
    stw r6, 0x0(r3)
    addi r4, r4, fn_8003E6B8@l
    addi r5, r5, lbl_807C6B78@l
    stw r6, 0x4(r3)
    stw r0, 0x8(r3)
    b __register_global_object
}

asm void fn_8003E6B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r29, r3
    mr r30, r4
    beq lbl_fn_8003E6B8_00000278
    beq lbl_fn_8003E6B8_00000268
    beq lbl_fn_8003E6B8_00000268
    beq lbl_fn_8003E6B8_00000268
    beq lbl_fn_8003E6B8_00000268
    lwz r31, 0x4(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8003E6B8_00000268
    lwz r28, 0x0(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8003E6B8_00000154
    lwz r27, 0x0(r28)
    cmpwi r27, 0x0
    beq lbl_fn_8003E6B8_000000D0
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8003E6B8_00000094
    bl fn_8003DEE0
lbl_fn_8003E6B8_00000094:
    lwz r4, 0x4(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8003E6B8_000000A8
    mr r3, r29
    bl fn_8003DEE0
lbl_fn_8003E6B8_000000A8:
    addic. r3, r27, 0xc
    beq lbl_fn_8003E6B8_000000C8
    beq lbl_fn_8003E6B8_000000C8
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003E6B8_000000C8
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003E6B8_000000C8:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8003E6B8_000000D0:
    lwz r27, 0x4(r28)
    cmpwi r27, 0x0
    beq lbl_fn_8003E6B8_0000012C
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8003E6B8_000000F0
    mr r3, r29
    bl fn_8003DEE0
lbl_fn_8003E6B8_000000F0:
    lwz r4, 0x4(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8003E6B8_00000104
    mr r3, r29
    bl fn_8003DEE0
lbl_fn_8003E6B8_00000104:
    addic. r3, r27, 0xc
    beq lbl_fn_8003E6B8_00000124
    beq lbl_fn_8003E6B8_00000124
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003E6B8_00000124
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003E6B8_00000124:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8003E6B8_0000012C:
    addic. r3, r28, 0xc
    beq lbl_fn_8003E6B8_0000014C
    beq lbl_fn_8003E6B8_0000014C
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003E6B8_0000014C
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003E6B8_0000014C:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8003E6B8_00000154:
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8003E6B8_00000240
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_8003E6B8_000001BC
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8003E6B8_00000180
    mr r3, r29
    bl fn_8003DEE0
lbl_fn_8003E6B8_00000180:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8003E6B8_00000194
    mr r3, r29
    bl fn_8003DEE0
lbl_fn_8003E6B8_00000194:
    addic. r3, r28, 0xc
    beq lbl_fn_8003E6B8_000001B4
    beq lbl_fn_8003E6B8_000001B4
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003E6B8_000001B4
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003E6B8_000001B4:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8003E6B8_000001BC:
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_8003E6B8_00000218
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8003E6B8_000001DC
    mr r3, r29
    bl fn_8003DEE0
lbl_fn_8003E6B8_000001DC:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8003E6B8_000001F0
    mr r3, r29
    bl fn_8003DEE0
lbl_fn_8003E6B8_000001F0:
    addic. r3, r28, 0xc
    beq lbl_fn_8003E6B8_00000210
    beq lbl_fn_8003E6B8_00000210
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003E6B8_00000210
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003E6B8_00000210:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8003E6B8_00000218:
    addic. r3, r27, 0xc
    beq lbl_fn_8003E6B8_00000238
    beq lbl_fn_8003E6B8_00000238
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003E6B8_00000238
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003E6B8_00000238:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8003E6B8_00000240:
    addic. r3, r31, 0xc
    beq lbl_fn_8003E6B8_00000260
    beq lbl_fn_8003E6B8_00000260
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003E6B8_00000260
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003E6B8_00000260:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8003E6B8_00000268:
    cmpwi r30, 0x0
    ble lbl_fn_8003E6B8_00000278
    mr r3, r29
    bl dtor_80084684
lbl_fn_8003E6B8_00000278:
    mr r3, r29
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003E918(void)
{
    nofralloc
    lfs f0, lbl_808807C0
    li r5, 0x0
    li r4, 0x4
    li r0, -0x1
    stw r5, 0x4(r3)
    stw r4, 0x8(r3)
    stw r5, 0xc(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stw r5, 0x28(r3)
    stw r5, 0x2c(r3)
    stw r0, 0x30(r3)
    blr
}

asm void fn_8003E950(void)
{
    nofralloc
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8003E950_00000314
    lwz r5, 0xc(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8003E950_00000314
    lfs f3, 0x530(r5)
    lfs f0, 0x24(r4)
    lfs f5, 0x52c(r5)
    fadds f6, f3, f0
    lfs f4, 0x20(r4)
    lfs f3, 0x528(r5)
    lfs f0, 0x1c(r4)
    fadds f4, f5, f4
    stfs f6, 0x8(r3)
    fadds f0, f3, f0
    stfs f4, 0x4(r3)
    stfs f0, 0x0(r3)
    blr
lbl_fn_8003E950_00000314:
    cmpwi r0, 0x3
    bne lbl_fn_8003E950_00000350
    lfs f3, 0x18(r4)
    lfs f0, 0x24(r4)
    lfs f5, 0x14(r4)
    fadds f6, f3, f0
    lfs f4, 0x20(r4)
    lfs f3, 0x10(r4)
    lfs f0, 0x1c(r4)
    fadds f4, f5, f4
    stfs f6, 0x8(r3)
    fadds f0, f3, f0
    stfs f4, 0x4(r3)
    stfs f0, 0x0(r3)
    blr
lbl_fn_8003E950_00000350:
    cmpwi r0, 0x2
    bne lbl_fn_8003E950_00000398
    lwz r5, 0xc(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8003E950_00000398
    lfs f3, 0x18(r5)
    lfs f0, 0x24(r4)
    lfs f5, 0x14(r5)
    fadds f6, f3, f0
    lfs f4, 0x20(r4)
    lfs f3, 0x10(r5)
    lfs f0, 0x1c(r4)
    fadds f4, f5, f4
    stfs f6, 0x8(r3)
    fadds f0, f3, f0
    stfs f4, 0x4(r3)
    stfs f0, 0x0(r3)
    blr
lbl_fn_8003E950_00000398:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_8003EA3C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xe0
    bl _savegpr_24
    cmpwi r5, 0x0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r31, r9
    mr r30, r10
    beq lbl_fn_8003EA3C_00000460
    rlwinm r0, r7, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8003EA3C_00000460
    addi r3, r5, 0x7d4
    li r4, 0x40
    li r5, 0x9
    bl fn_80133E24
    addi r3, r26, 0x7d4
    li r4, 0x23
    li r5, 0x9
    bl fn_80133E24
    addi r3, r26, 0x7d4
    li r4, -0x1
    li r5, -0x1
    bl fn_80133F6C
    cmpwi r3, 0x0
    bgt lbl_fn_8003EA3C_00000444
    lwz r0, 0x1c(r24)
    rlwinm r28, r28, 0, 7, 5
    oris r0, r0, 0x2000
    stw r0, 0x1c(r24)
lbl_fn_8003EA3C_00000444:
    rlwinm r0, r28, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8003EA3C_00000460
    lwz r0, 0x1c(r24)
    rlwinm r28, r28, 0, 17, 15
    oris r0, r0, 0x1000
    stw r0, 0x1c(r24)
lbl_fn_8003EA3C_00000460:
    cmpwi r26, 0x0
    beq lbl_fn_8003EA3C_00000488
    mr r3, r24
    mr r4, r25
    mr r7, r28
    mr r8, r29
    addi r6, r27, 0x7d4
    addi r5, r26, 0x7d4
    bl fn_80040B44
    b lbl_fn_8003EA3C_000004DC
lbl_fn_8003EA3C_00000488:
    lwz r0, lbl_8087EE70
    cmpwi r0, 0x0
    bne lbl_fn_8003EA3C_000004C0
    lis r5, lbl_80730C70@ha
    li r3, 0x43c
    addi r5, r5, lbl_80730C70@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_000004BC
    bl fn_8012B0B0
lbl_fn_8003EA3C_000004BC:
    stw r3, lbl_8087EE70
lbl_fn_8003EA3C_000004C0:
    lwz r5, lbl_8087EE70
    mr r3, r24
    mr r4, r25
    mr r7, r28
    mr r8, r29
    addi r6, r27, 0x7d4
    bl fn_80040B44
lbl_fn_8003EA3C_000004DC:
    cmpwi r25, 0x0
    beq lbl_fn_8003EA3C_0000083C
    cmpwi r24, 0x0
    beq lbl_fn_8003EA3C_0000083C
    lwz r4, 0x0(r24)
    li r3, 0x0
    subi r4, r4, 0x1
    cmplwi r4, 0x4
    bgt lbl_fn_8003EA3C_00000514
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x19
    beq lbl_fn_8003EA3C_00000514
    li r3, 0x1
lbl_fn_8003EA3C_00000514:
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_0000083C
    lwz r3, 0xb0(r25)
    bl fn_800EFC64
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_000005F0
    cmpwi r31, 0x0
    beq lbl_fn_8003EA3C_00000538
    b lbl_fn_8003EA3C_0000053C
lbl_fn_8003EA3C_00000538:
    addi r31, r27, 0x528
lbl_fn_8003EA3C_0000053C:
    psq_l f1, 0x0(r31), 0, 0
    cmpwi r30, 0x0
    lfs f2, 0x8(r31)
    addi r3, r1, 0x14
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    beq lbl_fn_8003EA3C_0000055C
    b lbl_fn_8003EA3C_00000560
lbl_fn_8003EA3C_0000055C:
    addi r30, r27, 0x534
lbl_fn_8003EA3C_00000560:
    psq_l f1, 0x0(r30), 0, 0
    cmpwi r26, 0x0
    lfs f2, 0x8(r30)
    addi r3, r1, 0x8
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    beq lbl_fn_8003EA3C_00000588
    mr r3, r26
    bl fn_8017AC24
    b lbl_fn_8003EA3C_0000058C
lbl_fn_8003EA3C_00000588:
    lfs f1, lbl_808807C8
lbl_fn_8003EA3C_0000058C:
    li r0, 0x0
    stw r0, 0x20(r1)
    lwz r3, lbl_8087F9E8
    mr r4, r25
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x14
    addi r8, r1, 0x8
    addi r9, r1, 0x20
    bl fn_8059B670
    addic. r3, r1, 0x20
    beq lbl_fn_8003EA3C_000005F0
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8003EA3C_000005F0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8003EA3C_000005E8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8003EA3C_000005E8:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_8003EA3C_000005F0:
    cmpwi r26, 0x0
    beq lbl_fn_8003EA3C_0000063C
    lwz r0, 0x4(r24)
    cmpwi r0, 0x0
    bge lbl_fn_8003EA3C_0000063C
    addi r3, r26, 0x7d4
    li r4, 0x23
    li r5, 0x9
    bl fn_80133E24
    addi r3, r26, 0x7d4
    li r4, -0x1
    li r5, -0x1
    bl fn_80133F6C
    cmpwi r3, 0x0
    bgt lbl_fn_8003EA3C_0000063C
    lwz r0, 0x1c(r24)
    rlwinm r28, r28, 0, 7, 5
    oris r0, r0, 0x2000
    stw r0, 0x1c(r24)
lbl_fn_8003EA3C_0000063C:
    cmpwi r26, 0x0
    beq lbl_fn_8003EA3C_0000083C
    cmpwi r27, 0x0
    beq lbl_fn_8003EA3C_0000083C
    mr r3, r25
    bl fn_8021A684
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_0000083C
    addi r31, r26, 0x7d4
    addi r30, r27, 0x7d4
    mr r3, r31
    li r4, 0x1a
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_000006B4
    mr r3, r31
    li r4, 0x1a
    bl fn_80133EE8
    lwz r4, 0x648(r26)
    li r6, 0x384
    li r0, 0x0
    stw r4, 0x90(r1)
    addi r4, r1, 0x8c
    li r5, 0x1
    stw r3, 0x8c(r1)
    mr r3, r30
    stw r26, 0x94(r1)
    stw r6, 0x98(r1)
    stw r0, 0x9c(r1)
    bl fn_80133FBC
lbl_fn_8003EA3C_000006B4:
    mr r3, r31
    li r4, 0x1c
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_00000704
    mr r3, r31
    li r4, 0x1c
    bl fn_80133EE8
    lwz r4, 0x648(r26)
    li r6, 0x384
    li r0, 0x0
    stw r4, 0x7c(r1)
    addi r4, r1, 0x78
    li r5, 0x1
    stw r3, 0x78(r1)
    mr r3, r30
    stw r26, 0x80(r1)
    stw r6, 0x84(r1)
    stw r0, 0x88(r1)
    bl fn_80133FBC
lbl_fn_8003EA3C_00000704:
    mr r3, r31
    li r4, 0x1e
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_00000754
    mr r3, r31
    li r4, 0x1e
    bl fn_80133EE8
    lwz r4, 0x648(r26)
    li r6, 0x384
    li r0, 0x0
    stw r4, 0x68(r1)
    addi r4, r1, 0x64
    li r5, 0x1
    stw r3, 0x64(r1)
    mr r3, r30
    stw r26, 0x6c(r1)
    stw r6, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_80133FBC
lbl_fn_8003EA3C_00000754:
    mr r3, r31
    li r4, 0x20
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_000007A4
    mr r3, r31
    li r4, 0x20
    bl fn_80133EE8
    lwz r4, 0x648(r26)
    li r6, 0x12c
    li r0, 0x0
    stw r4, 0x54(r1)
    addi r4, r1, 0x50
    li r5, 0x0
    stw r3, 0x50(r1)
    mr r3, r30
    stw r26, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r0, 0x60(r1)
    bl fn_80133FBC
lbl_fn_8003EA3C_000007A4:
    mr r3, r31
    li r4, 0x34
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003EA3C_0000083C
    mr r3, r31
    li r4, 0x34
    bl fn_80133EE8
    lwz r6, 0x4(r24)
    lis r4, 0x4330
    lwz r0, 0x4(r3)
    lis r5, lbl_80730C68@ha
    xoris r3, r6, 0x8000
    stw r3, 0xa4(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80730C68@l(r5)
    stw r4, 0xa0(r1)
    lfs f3, lbl_808807CC
    lfd f0, 0xa0(r1)
    stw r0, 0xac(r1)
    fsubs f4, f0, f5
    lwz r3, lbl_8087F4F0
    stw r4, 0xa8(r1)
    lwz r0, 0x6000(r3)
    lfd f0, 0xa8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    fsubs f0, f0, f5
    stw r4, 0xb0(r1)
    fmuls f4, f4, f0
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f5
    fdivs f3, f4, f3
    fadds f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r4, 0xbc(r1)
    bl fn_8044D6E0
lbl_fn_8003EA3C_0000083C:
    lwz r3, 0x4(r25)
    lbz r0, lbl_8087EE74
    stw r3, 0x40(r1)
    extsb. r0, r0
    stw r28, 0x44(r1)
    stw r26, 0x38(r1)
    stw r27, 0x3c(r1)
    lfs f0, 0x4(r29)
    stfs f0, 0x4c(r1)
    lwz r0, 0x1c(r24)
    srwi r0, r0, 31
    stw r0, 0x48(r1)
    bne lbl_fn_8003EA3C_000008A4
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r25, 0x1
    lis r5, lbl_807C6BA8@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C6BA8@l
    stw r0, 0x8(r3)
    stw r25, 0xc(r3)
    bl __register_global_object
    stb r25, lbl_8087EE74
lbl_fn_8003EA3C_000008A4:
    lis r27, lbl_807C6BB8@ha
    addi r27, r27, lbl_807C6BB8@l
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8003EA3C_0000090C
    li r28, 0x0
    li r25, 0x0
    b lbl_fn_8003EA3C_00000900
lbl_fn_8003EA3C_000008C4:
    lwz r0, 0x0(r27)
    add r3, r0, r25
    lwzx r0, r25, r0
    cmpwi r0, -0x1
    beq lbl_fn_8003EA3C_000008E0
    cmpwi r0, 0x7
    bne lbl_fn_8003EA3C_000008F8
lbl_fn_8003EA3C_000008E0:
    lwz r12, 0x4(r3)
    mr r4, r26
    addi r5, r1, 0x38
    li r3, 0x7
    mtctr r12
    bctrl
lbl_fn_8003EA3C_000008F8:
    addi r28, r28, 0x1
    addi r25, r25, 0x8
lbl_fn_8003EA3C_00000900:
    lwz r0, 0x4(r27)
    cmpw r28, r0
    blt lbl_fn_8003EA3C_000008C4
lbl_fn_8003EA3C_0000090C:
    addi r11, r1, 0xe0
    lwz r3, 0x0(r24)
    bl _restgpr_24
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8003EFB0(void)
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
    beq lbl_fn_8003EFB0_0000098C
    beq lbl_fn_8003EFB0_0000097C
    beq lbl_fn_8003EFB0_0000097C
    beq lbl_fn_8003EFB0_0000097C
    beq lbl_fn_8003EFB0_0000097C
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8003EFB0_0000097C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_8003EFB0_0000097C:
    cmpwi r31, 0x0
    ble lbl_fn_8003EFB0_0000098C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8003EFB0_0000098C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8003F030(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r5, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    beq lbl_fn_8003F030_00000A38
    lwz r0, lbl_8087EE70
    cmpwi r0, 0x0
    bne lbl_fn_8003F030_00000A14
    lis r5, lbl_80730C70@ha
    li r3, 0x43c
    addi r5, r5, lbl_80730C70@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8003F030_00000A10
    bl fn_8012B0B0
lbl_fn_8003F030_00000A10:
    stw r3, lbl_8087EE70
lbl_fn_8003F030_00000A14:
    lis r8, lbl_807C6B90@ha
    lwz r6, lbl_8087EE70
    mr r3, r25
    mr r4, r26
    mr r7, r30
    addi r5, r27, 0x7d4
    addi r8, r8, lbl_807C6B90@l
    bl fn_80040B44
    b lbl_fn_8003F030_00000AC8
lbl_fn_8003F030_00000A38:
    lwz r0, lbl_8087EE70
    cmpwi r0, 0x0
    bne lbl_fn_8003F030_00000A70
    lis r5, lbl_80730C70@ha
    li r3, 0x43c
    addi r5, r5, lbl_80730C70@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8003F030_00000A6C
    bl fn_8012B0B0
lbl_fn_8003F030_00000A6C:
    stw r3, lbl_8087EE70
lbl_fn_8003F030_00000A70:
    lwz r31, lbl_8087EE70
    cmpwi r31, 0x0
    bne lbl_fn_8003F030_00000AA8
    lis r5, lbl_80730C70@ha
    li r3, 0x43c
    addi r5, r5, lbl_80730C70@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8003F030_00000AA4
    bl fn_8012B0B0
lbl_fn_8003F030_00000AA4:
    stw r3, lbl_8087EE70
lbl_fn_8003F030_00000AA8:
    lis r8, lbl_807C6B90@ha
    lwz r6, lbl_8087EE70
    mr r3, r25
    mr r4, r26
    mr r5, r31
    mr r7, r30
    addi r8, r8, lbl_807C6B90@l
    bl fn_80040B44
lbl_fn_8003F030_00000AC8:
    cmpwi r26, 0x0
    beq lbl_fn_8003F030_00000B40
    cmpwi r25, 0x0
    beq lbl_fn_8003F030_00000B40
    lwz r3, 0x0(r25)
    li r4, 0x0
    subi r3, r3, 0x1
    cmplwi r3, 0x4
    bgt lbl_fn_8003F030_00000B00
    li r0, 0x1
    slw r0, r0, r3
    andi. r0, r0, 0x19
    beq lbl_fn_8003F030_00000B00
    li r4, 0x1
lbl_fn_8003F030_00000B00:
    cmpwi r4, 0x0
    beq lbl_fn_8003F030_00000B40
    cmpwi r27, 0x0
    beq lbl_fn_8003F030_00000B1C
    mr r3, r27
    bl fn_8017AC24
    b lbl_fn_8003F030_00000B20
lbl_fn_8003F030_00000B1C:
    lfs f1, lbl_808807C8
lbl_fn_8003F030_00000B20:
    lwz r3, lbl_8087F048
    mr r4, r27
    mr r5, r26
    mr r6, r28
    mr r7, r29
    mr r8, r30
    li r9, 0x1
    bl fn_800FB1BC
lbl_fn_8003F030_00000B40:
    addi r11, r1, 0x30
    lwz r3, 0x0(r25)
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8003F1E4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    cmpwi r5, 0x0
    mr r28, r3
    mr r27, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    beq lbl_fn_8003F1E4_00000BA4
    lis r8, lbl_807C6B90@ha
    addi r6, r6, 0x7d4
    addi r8, r8, lbl_807C6B90@l
    addi r5, r5, 0x7d4
    bl fn_80040B44
    b lbl_fn_8003F1E4_00000BFC
lbl_fn_8003F1E4_00000BA4:
    lwz r0, lbl_8087EE70
    cmpwi r0, 0x0
    bne lbl_fn_8003F1E4_00000BDC
    lis r5, lbl_80730C70@ha
    li r3, 0x43c
    addi r5, r5, lbl_80730C70@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8003F1E4_00000BD8
    bl fn_8012B0B0
lbl_fn_8003F1E4_00000BD8:
    stw r3, lbl_8087EE70
lbl_fn_8003F1E4_00000BDC:
    lis r8, lbl_807C6B90@ha
    lwz r5, lbl_8087EE70
    mr r3, r28
    mr r4, r27
    mr r7, r31
    addi r6, r30, 0x7d4
    addi r8, r8, lbl_807C6B90@l
    bl fn_80040B44
lbl_fn_8003F1E4_00000BFC:
    cmpwi r27, 0x0
    beq lbl_fn_8003F1E4_00000CD4
    cmpwi r28, 0x0
    beq lbl_fn_8003F1E4_00000CD4
    lwz r4, 0x0(r28)
    li r3, 0x0
    subi r4, r4, 0x1
    cmplwi r4, 0x4
    bgt lbl_fn_8003F1E4_00000C34
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x19
    beq lbl_fn_8003F1E4_00000C34
    li r3, 0x1
lbl_fn_8003F1E4_00000C34:
    cmpwi r3, 0x0
    beq lbl_fn_8003F1E4_00000CD4
    lwz r3, 0xb0(r27)
    bl fn_800EFC64
    cmpwi r3, 0x0
    beq lbl_fn_8003F1E4_00000CD4
    psq_l f1, 0x528(r30), 0, 0
    addi r7, r1, 0x14
    lfs f2, 0x530(r30)
    addi r8, r1, 0x8
    stfs f2, 0x1c(r1)
    li r0, 0x0
    lwz r3, lbl_8087F9E8
    mr r4, r27
    psq_st f1, 0x0(r7), 0, 0
    mr r5, r29
    mr r6, r30
    addi r9, r1, 0x20
    psq_l f1, 0x534(r30), 0, 0
    lfs f2, 0x53c(r30)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r8), 0, 0
    lfs f1, lbl_808807C8
    stw r0, 0x20(r1)
    bl fn_8059B670
    addic. r3, r1, 0x20
    beq lbl_fn_8003F1E4_00000CD4
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8003F1E4_00000CD4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8003F1E4_00000CCC
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8003F1E4_00000CCC:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_8003F1E4_00000CD4:
    lwz r3, 0x4(r27)
    lbz r0, lbl_8087EE74
    stw r3, 0x40(r1)
    extsb. r0, r0
    stw r31, 0x44(r1)
    stw r29, 0x38(r1)
    stw r30, 0x3c(r1)
    lwz r0, 0x1c(r28)
    srwi r0, r0, 31
    stw r0, 0x48(r1)
    bne lbl_fn_8003F1E4_00000D34
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C6BA8@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C6BA8@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_8003F1E4_00000D34:
    lis r31, lbl_807C6BB8@ha
    addi r31, r31, lbl_807C6BB8@l
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8003F1E4_00000D9C
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_8003F1E4_00000D90
lbl_fn_8003F1E4_00000D54:
    lwz r0, 0x0(r31)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_8003F1E4_00000D70
    cmpwi r0, 0x6
    bne lbl_fn_8003F1E4_00000D88
lbl_fn_8003F1E4_00000D70:
    lwz r12, 0x4(r3)
    mr r4, r29
    addi r5, r1, 0x38
    li r3, 0x6
    mtctr r12
    bctrl
lbl_fn_8003F1E4_00000D88:
    addi r27, r27, 0x1
    addi r30, r30, 0x8
lbl_fn_8003F1E4_00000D90:
    lwz r0, 0x4(r31)
    cmpw r27, r0
    blt lbl_fn_8003F1E4_00000D54
lbl_fn_8003F1E4_00000D9C:
    addi r11, r1, 0x70
    lwz r3, 0x0(r28)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8003F440(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_27
    lis r5, lbl_80730C68@ha
    lfs f30, lbl_808807D0
    lfd f31, lbl_80730C68@l(r5)
    mr r27, r3
    mr r30, r4
    li r29, 0x1
    li r28, 0x0
    lis r31, 0x4330
lbl_fn_8003F440_00000DFC:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8003F440_00000E34
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_8003F440_00000E34
    lwz r0, 0xbc(r3)
    li r29, 0x0
    stw r31, 0x8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f31
    fadds f30, f30, f0
lbl_fn_8003F440_00000E34:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x2
    blt lbl_fn_8003F440_00000DFC
    cmpwi r27, 0x0
    beq lbl_fn_8003F440_00000E64
    mr r3, r27
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_8003F440_00000E64
    li r29, 0x0
    lfs f30, lbl_808807D0
lbl_fn_8003F440_00000E64:
    cmpwi r29, 0x0
    beq lbl_fn_8003F440_00000E74
    li r3, 0x0
    b lbl_fn_8003F440_00000E88
lbl_fn_8003F440_00000E74:
    lfs f0, 0x7dc(r27)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
lbl_fn_8003F440_00000E88:
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8003F538(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_22
    cmpwi r3, 0x0
    lis r0, 0x4330
    stw r0, 0x28(r1)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    stw r0, 0x30(r1)
    mr r26, r6
    mr r27, r7
    li r22, 0x0
    beq lbl_fn_8003F538_00001D38
    lfs f1, 0xe8(r4)
    lfs f0, 0x28(r3)
    lwz r0, 0x18(r3)
    fmuls f0, f1, f0
    lwz r3, 0x14(r3)
    cmpwi r0, 0x0
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r29, 0x3c(r1)
    add r29, r29, r3
    ble lbl_fn_8003F538_00000F3C
    bl fn_80680CF8
    lwz r4, 0x18(r23)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    b lbl_fn_8003F538_00000F40
lbl_fn_8003F538_00000F3C:
    li r3, 0x0
lbl_fn_8003F538_00000F40:
    rlwinm r0, r26, 0, 25, 25
    add r29, r29, r3
    cmplwi r0, 0x40
    bne lbl_fn_8003F538_00000FA4
    lwz r3, 0x2f0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00000FA4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8003F538_00000F74
    lwz r3, lbl_8087F0A8
    lfs f2, 0x460(r3)
    b lbl_fn_8003F538_00000F7C
lbl_fn_8003F538_00000F74:
    lwz r3, lbl_8087F0A8
    lfs f2, 0x45c(r3)
lbl_fn_8003F538_00000F7C:
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_80730C68@ha
    lfd f1, lbl_80730C68@l(r3)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r29, 0x3c(r1)
lbl_fn_8003F538_00000FA4:
    mr r3, r23
    mr r4, r24
    mr r5, r25
    mr r6, r26
    bl fn_80040994
    cmpwi r3, 0x0
    bne lbl_fn_8003F538_00001108
    lwz r0, lbl_8087F610
    lwz r4, 0x0(r27)
    cmpwi r0, 0x0
    lfs f2, lbl_808807C8
    lfs f1, lbl_808807D4
    lfs f0, lbl_808807D8
    beq lbl_fn_8003F538_00000FE8
    lfs f1, lbl_808807DC
    lfs f0, lbl_808807E0
    b lbl_fn_8003F538_00000FFC
lbl_fn_8003F538_00000FE8:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8003F538_00000FFC
    lfs f0, lbl_808807E4
lbl_fn_8003F538_00000FFC:
    cmpwi cr1, r4, 0x1
    li r5, 0x1
    ble cr1, lbl_fn_8003F538_000010D0
    subi r0, r4, 0x1
    subi r6, r4, 0x8
    cmpwi r0, 0x8
    ble lbl_fn_8003F538_000010B8
    li r7, 0x0
    li r8, 0x0
    blt cr1, lbl_fn_8003F538_00001038
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_fn_8003F538_00001038
    li r8, 0x1
lbl_fn_8003F538_00001038:
    cmpwi r8, 0x0
    beq lbl_fn_8003F538_00001074
    clrrwi r8, r4, 31
    li r3, 0x1
    addis r0, r8, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_00001068
    subi r0, r4, 0x1
    clrrwi r0, r0, 31
    cmpw r8, r0
    beq lbl_fn_8003F538_00001068
    li r3, 0x0
lbl_fn_8003F538_00001068:
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001074
    li r7, 0x1
lbl_fn_8003F538_00001074:
    cmpwi r7, 0x0
    beq lbl_fn_8003F538_000010B8
    addi r0, r6, 0x6
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_fn_8003F538_000010B8
lbl_fn_8003F538_00001090:
    fmuls f2, f2, f1
    addi r5, r5, 0x8
    fmuls f2, f2, f1
    fmuls f2, f2, f1
    fmuls f2, f2, f1
    fmuls f2, f2, f1
    fmuls f2, f2, f1
    fmuls f2, f2, f1
    fmuls f2, f2, f1
    bdnz lbl_fn_8003F538_00001090
lbl_fn_8003F538_000010B8:
    subf r0, r5, r4
    mtctr r0
    cmpw r5, r4
    bge lbl_fn_8003F538_000010D0
lbl_fn_8003F538_000010C8:
    fmuls f2, f2, f1
    bdnz lbl_fn_8003F538_000010C8
lbl_fn_8003F538_000010D0:
    fcmpo cr0, f2, f0
    bge lbl_fn_8003F538_000010DC
    b lbl_fn_8003F538_000010E0
lbl_fn_8003F538_000010DC:
    fmr f2, f0
lbl_fn_8003F538_000010E0:
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfd f1, lbl_80730C68@l(r3)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r29, 0x3c(r1)
lbl_fn_8003F538_00001108:
    rlwinm r3, r26, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_00001144
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, lbl_808807E8
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r29, 0x3c(r1)
lbl_fn_8003F538_00001144:
    cmpwi r29, 0x0
    ble lbl_fn_8003F538_00001170
    lwz r0, 0x184(r25)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_8003F538_00001170
    rlwinm r3, r26, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8003F538_00001170
    li r29, 0x0
lbl_fn_8003F538_00001170:
    lfs f1, 0x2c(r23)
    lfs f0, 0xec(r24)
    lwz r0, 0x20(r23)
    fmuls f0, f0, f1
    lwz r3, 0x1c(r23)
    cmpwi r0, 0x0
    lfs f31, lbl_808807C8
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r31, 0x3c(r1)
    add r31, r31, r3
    ble lbl_fn_8003F538_000011B8
    bl fn_80680CF8
    lwz r4, 0x20(r23)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    b lbl_fn_8003F538_000011BC
lbl_fn_8003F538_000011B8:
    li r0, 0x0
lbl_fn_8003F538_000011BC:
    add. r31, r31, r0
    ble lbl_fn_8003F538_000011E8
    lwz r0, 0x184(r25)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_8003F538_000011E8
    rlwinm r3, r26, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_8003F538_000011E8
    li r31, 0x0
lbl_fn_8003F538_000011E8:
    lfs f1, 0xf0(r25)
    lfs f0, 0x30(r23)
    lwz r0, 0xc(r25)
    fmuls f0, f1, f0
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    fctiwz f0, f0
    cmplwi r0, 0x0
    stfd f0, 0x38(r1)
    lwz r28, 0x3c(r1)
    bne lbl_fn_8003F538_00001240
    xoris r0, r28, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, lbl_808807EC
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r28, 0x44(r1)
lbl_fn_8003F538_00001240:
    rlwinm r30, r26, 0, 28, 28
    cmplwi r30, 0x8
    bne lbl_fn_8003F538_00001278
    xoris r0, r28, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, 0xf8(r25)
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r28, 0x4c(r1)
lbl_fn_8003F538_00001278:
    mr r3, r24
    li r4, 0x30
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_000012B8
    xoris r0, r28, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, lbl_808807F0
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x50(r1)
    lwz r28, 0x54(r1)
lbl_fn_8003F538_000012B8:
    rlwinm r22, r26, 0, 20, 20
    cmplwi r22, 0x800
    beq lbl_fn_8003F538_000012E4
    lwz r0, 0x14(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8003F538_000012E8
    mr r3, r24
    li r4, 0x1
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_000012E8
lbl_fn_8003F538_000012E4:
    li r28, 0x0
lbl_fn_8003F538_000012E8:
    lfs f1, 0xf4(r25)
    cmplwi r30, 0x8
    lfs f0, 0x34(r23)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x50(r1)
    lwz r0, 0x54(r1)
    bne lbl_fn_8003F538_00001334
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, 0xfc(r25)
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
lbl_fn_8003F538_00001334:
    cmplwi r22, 0x800
    bne lbl_fn_8003F538_00001340
    li r0, 0x0
lbl_fn_8003F538_00001340:
    subf r0, r0, r31
    lis r4, lbl_80730C68@ha
    xoris r3, r0, 0x8000
    stw r3, 0x34(r1)
    lfd f2, lbl_80730C68@l(r4)
    lfd f0, 0x30(r1)
    lfs f1, lbl_808807F4
    fsubs f0, f0, f2
    fmadds f0, f31, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    cmpwi r0, 0x0
    bge lbl_fn_8003F538_00001380
    li r5, 0x0
    b lbl_fn_8003F538_0000139C
lbl_fn_8003F538_00001380:
    stw r3, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fmadds f0, f31, f0, f1
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r5, 0x3c(r1)
lbl_fn_8003F538_0000139C:
    add r0, r29, r31
    lis r4, lbl_80730C68@ha
    xoris r3, r0, 0x8000
    stw r3, 0x34(r1)
    lwz r31, lbl_8087F0A8
    subf r6, r28, r29
    lfd f2, lbl_80730C68@l(r4)
    srawi r0, r6, 31
    lfd f0, 0x30(r1)
    andc r0, r6, r0
    lfs f1, 0x2c8(r31)
    add r4, r0, r5
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    cmpw r4, r0
    ble lbl_fn_8003F538_000013EC
    b lbl_fn_8003F538_00001408
lbl_fn_8003F538_000013EC:
    stw r3, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x60(r1)
    lwz r4, 0x64(r1)
lbl_fn_8003F538_00001408:
    xoris r0, r4, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lwz r0, lbl_8087F610
    lfs f4, lbl_808807F8
    lfs f3, 0x4(r27)
    cmpwi r0, 0x0
    lfs f0, lbl_808807EC
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x30(r1)
    fmadds f3, f4, f3, f0
    lfs f0, 0x38(r23)
    fsubs f1, f1, f2
    fmuls f1, f1, f3
    fctiwz f1, f1
    stfd f1, 0x68(r1)
    lwz r0, 0x6c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
    bne lbl_fn_8003F538_00001560
    lwz r3, 0x2f0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001560
    lwz r4, 0x2f0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_8003F538_00001560
    lwz r5, 0x2d0(r31)
    cmpwi r5, 0x0
    bne lbl_fn_8003F538_000014AC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8003F538_000014AC
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    beq lbl_fn_8003F538_000014EC
lbl_fn_8003F538_000014AC:
    cmpwi r5, 0x1
    bne lbl_fn_8003F538_000014CC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8003F538_000014CC
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    beq lbl_fn_8003F538_000014EC
lbl_fn_8003F538_000014CC:
    cmpwi r5, 0x1
    bne lbl_fn_8003F538_00001560
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8003F538_00001560
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_8003F538_00001560
lbl_fn_8003F538_000014EC:
    mr r3, r25
    li r4, 0x0
    bl fn_80133BD8
    lwz r4, 0x160(r24)
    li r0, 0x5
    subf r5, r3, r4
    lwz r3, lbl_8087F0A8
    cmpwi r5, 0x5
    bgt lbl_fn_8003F538_00001514
    mr r0, r5
lbl_fn_8003F538_00001514:
    cmpwi r0, -0x5
    bge lbl_fn_8003F538_00001524
    li r4, -0x5
    b lbl_fn_8003F538_00001534
lbl_fn_8003F538_00001524:
    cmpwi r5, 0x5
    li r4, 0x5
    bgt lbl_fn_8003F538_00001534
    mr r4, r5
lbl_fn_8003F538_00001534:
    bl fn_80187CC0
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfd f2, lbl_80730C68@l(r3)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_00001560:
    cmplwi r30, 0x8
    bne lbl_fn_8003F538_00001660
    rlwinm r3, r26, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_000015AC
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lis r4, lbl_80730C68@ha
    lwz r3, lbl_8087F0A8
    lfd f2, lbl_80730C68@l(r4)
    lfd f1, 0x28(r1)
    lfs f0, 0x340(r3)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
    b lbl_fn_8003F538_000015E8
lbl_fn_8003F538_000015AC:
    lwz r3, lbl_8087F0A8
    srawi r0, r29, 2
    addze r29, r0
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8003F538_000015E8
    lwz r3, 0x2f0(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_000015E8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8003F538_000015E8
    srwi r0, r29, 31
    add r0, r0, r29
    srawi r29, r0, 1
lbl_fn_8003F538_000015E8:
    mr r3, r25
    li r4, 0x2d
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001660
    mr r3, r25
    li r4, 0x2d
    li r5, -0x1
    bl fn_80134168
    cmpwi r3, 0x64
    bge lbl_fn_8003F538_00001628
    mr r3, r25
    li r4, 0x2d
    li r5, -0x1
    bl fn_80134168
    b lbl_fn_8003F538_0000162C
lbl_fn_8003F538_00001628:
    li r3, 0x64
lbl_fn_8003F538_0000162C:
    subfic r0, r3, 0x64
    lis r3, lbl_80730C68@ha
    mullw r0, r29, r0
    lfd f2, lbl_80730C68@l(r3)
    lfs f0, lbl_808807CC
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_00001660:
    mr r3, r25
    li r4, 0x45
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001700
    mr r3, r25
    li r4, 0x45
    li r5, -0x1
    bl fn_80134168
    cmplwi r30, 0x8
    beq lbl_fn_8003F538_0000169C
    mr r3, r25
    li r4, 0x45
    li r5, 0x9
    bl fn_80134168
lbl_fn_8003F538_0000169C:
    mr r3, r25
    li r4, 0x45
    li r5, -0x1
    bl fn_80134168
    cmpwi r3, 0x64
    bge lbl_fn_8003F538_000016C8
    mr r3, r25
    li r4, 0x45
    li r5, -0x1
    bl fn_80134168
    b lbl_fn_8003F538_000016CC
lbl_fn_8003F538_000016C8:
    li r3, 0x64
lbl_fn_8003F538_000016CC:
    subfic r0, r3, 0x64
    lis r3, lbl_80730C68@ha
    mullw r0, r29, r0
    lfd f2, lbl_80730C68@l(r3)
    lfs f0, lbl_808807CC
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_00001700:
    rlwinm r0, r26, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8003F538_00001710
    slwi r29, r29, 1
lbl_fn_8003F538_00001710:
    rlwinm r0, r26, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8003F538_00001748
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, lbl_808807FC
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_00001748:
    clrrwi r3, r26, 31
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_000017D8
    lwz r3, 0x2f0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_000017AC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8003F538_000017AC
    lwz r0, 0x4(r23)
    cmpwi r0, 0x133
    bne lbl_fn_8003F538_000017AC
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, 0x324(r31)
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
    b lbl_fn_8003F538_000017D8
lbl_fn_8003F538_000017AC:
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, 0x328(r31)
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_000017D8:
    rlwinm r0, r26, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_8003F538_000017E8
    slwi r29, r29, 1
lbl_fn_8003F538_000017E8:
    rlwinm r0, r26, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8003F538_00001800
    clrlwi r0, r26, 31
    cmplwi r0, 0x1
    bne lbl_fn_8003F538_00001830
lbl_fn_8003F538_00001800:
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lis r4, lbl_80730C68@ha
    lwz r3, lbl_8087F0A8
    lfd f2, lbl_80730C68@l(r4)
    lfd f1, 0x28(r1)
    lfs f0, 0x34c(r3)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_00001830:
    mr r3, r23
    mr r4, r24
    mr r5, r25
    mr r6, r26
    bl fn_80040994
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_0000188C
    lwz r0, lbl_8087F610
    lfs f2, lbl_80880800
    cmpwi r0, 0x0
    beq lbl_fn_8003F538_00001860
    lfs f2, lbl_80880804
lbl_fn_8003F538_00001860:
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfd f1, lbl_80730C68@l(r3)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
    b lbl_fn_8003F538_00001AF4
lbl_fn_8003F538_0000188C:
    rlwinm r30, r26, 0, 8, 8
    subis r0, r30, 0x80
    cmplwi r0, 0x0
    beq lbl_fn_8003F538_000018CC
    rlwinm r3, r26, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8003F538_000018CC
    rlwinm r3, r26, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    beq lbl_fn_8003F538_000018CC
    rlwinm r3, r26, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_00001934
lbl_fn_8003F538_000018CC:
    rlwinm r0, r26, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8003F538_00001908
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, lbl_808807D4
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
    b lbl_fn_8003F538_00001934
lbl_fn_8003F538_00001908:
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, lbl_808807FC
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r29, 0x6c(r1)
lbl_fn_8003F538_00001934:
    rlwinm r3, r26, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    beq lbl_fn_8003F538_00001AF4
    mr r4, r25
    addi r3, r23, 0x74
    li r5, 0x1
    bl fn_80040588
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lis r28, lbl_80730C68@ha
    lfs f2, lbl_80880800
    lfd f4, lbl_80730C68@l(r28)
    addi r3, r1, 0x8
    lfd f3, 0x28(r1)
    li r4, 0x0
    lfs f0, lbl_808807F0
    li r5, 0x1c
    fsubs f3, f3, f4
    fmuls f2, f2, f3
    fmuls f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r0, 0x74(r1)
    add r29, r29, r0
    bl memset
    mr r4, r24
    mr r5, r26
    addi r3, r1, 0x8
    bl fn_80040434
    mr r4, r25
    addi r3, r1, 0x8
    li r5, 0x1
    bl fn_80040588
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    lfd f3, lbl_80730C68@l(r28)
    addi r3, r1, 0x8
    lfd f0, 0x30(r1)
    li r4, 0x0
    lfs f2, lbl_80880800
    li r5, 0x1c
    fsubs f3, f0, f3
    lfs f0, lbl_808807F0
    fmuls f2, f2, f3
    fmuls f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r0, 0x6c(r1)
    add r29, r29, r0
    bl memset
    subis r0, r30, 0x80
    lfs f0, lbl_808807C8
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_00001A30
    lfs f1, 0x8(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_8003F538_00001A28
    b lbl_fn_8003F538_00001A2C
lbl_fn_8003F538_00001A28:
    fmr f1, f0
lbl_fn_8003F538_00001A2C:
    stfs f1, 0x8(r1)
lbl_fn_8003F538_00001A30:
    rlwinm r3, r26, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_00001A58
    lfs f1, 0xc(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_8003F538_00001A50
    b lbl_fn_8003F538_00001A54
lbl_fn_8003F538_00001A50:
    fmr f1, f0
lbl_fn_8003F538_00001A54:
    stfs f1, 0xc(r1)
lbl_fn_8003F538_00001A58:
    rlwinm r3, r26, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_00001A80
    lfs f1, 0x18(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_8003F538_00001A78
    b lbl_fn_8003F538_00001A7C
lbl_fn_8003F538_00001A78:
    fmr f1, f0
lbl_fn_8003F538_00001A7C:
    stfs f1, 0x18(r1)
lbl_fn_8003F538_00001A80:
    rlwinm r3, r26, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_00001AA8
    lfs f1, 0x14(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_8003F538_00001AA0
    b lbl_fn_8003F538_00001AA4
lbl_fn_8003F538_00001AA0:
    fmr f1, f0
lbl_fn_8003F538_00001AA4:
    stfs f1, 0x14(r1)
lbl_fn_8003F538_00001AA8:
    mr r4, r25
    addi r3, r1, 0x8
    li r5, 0x1
    bl fn_80040588
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_80730C68@ha
    lfs f2, lbl_80880800
    lfd f4, lbl_80730C68@l(r3)
    lfd f3, 0x28(r1)
    lfs f0, lbl_808807F0
    fsubs f3, f3, f4
    fmuls f2, f2, f3
    fmuls f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r0, 0x74(r1)
    add r29, r29, r0
lbl_fn_8003F538_00001AF4:
    mr r3, r24
    li r4, 0x3
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001B48
    mr r3, r24
    li r4, 0x3
    li r5, -0x1
    bl fn_80133F18
    mullw r0, r29, r3
    lis r3, lbl_80730C68@ha
    lfd f2, lbl_80730C68@l(r3)
    lfs f0, lbl_80880808
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_00001B48:
    mr r3, r24
    li r4, 0x41
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001B70
    mr r3, r24
    li r4, 0x41
    li r5, -0x1
    bl fn_80133F18
    add r29, r29, r3
lbl_fn_8003F538_00001B70:
    mr r3, r24
    li r4, 0x42
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001BF0
    lwz r0, 0xac(r23)
    rlwinm r3, r0, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_8003F538_00001BF0
    mr r3, r24
    li r4, 0x42
    li r5, -0x1
    bl fn_80133F18
    xoris r0, r3, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfs f1, lbl_808807CC
    lfd f4, lbl_80730C68@l(r3)
    xoris r0, r29, 0x8000
    lfd f0, 0x30(r1)
    stw r0, 0x2c(r1)
    fsubs f2, f0, f4
    lfs f0, lbl_808807C8
    lfd f3, 0x28(r1)
    fdivs f1, f2, f1
    fsubs f2, f3, f4
    fadds f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_00001BF0:
    mr r3, r24
    li r4, 0x3b
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001C48
    mr r3, r24
    li r4, 0x3b
    li r5, -0x1
    bl fn_80133F18
    lwz r0, 0x16c(r25)
    lis r4, lbl_80730C68@ha
    lfd f2, lbl_80730C68@l(r4)
    mullw r0, r0, r3
    lfs f0, lbl_808807CC
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r29, 0x74(r1)
lbl_fn_8003F538_00001C48:
    mr r3, r24
    li r4, 0xb
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001CA0
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80730C68@ha
    lfs f0, 0x4(r25)
    lfd f2, lbl_80730C68@l(r3)
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8003F538_00001CA0
    fctiwz f0, f0
    li r0, 0x0
    mullw r3, r29, r0
    stfd f0, 0x70(r1)
    lwz r0, 0x74(r1)
    add r3, r0, r3
    subi r29, r3, 0x1
lbl_fn_8003F538_00001CA0:
    lis r3, 0x6666
    lwz r0, 0xc(r27)
    addi r4, r3, 0x6667
    lfs f0, 0x10(r27)
    mulhw r4, r4, r0
    rlwinm r0, r26, 0, 18, 18
    lis r3, lbl_80730C68@ha
    cmplwi r0, 0x2000
    lfd f2, lbl_80730C68@l(r3)
    srawi r0, r4, 2
    srwi r3, r0, 31
    add r0, r0, r3
    add r29, r29, r0
    xoris r0, r29, 0x8000
    stw r0, 0x2c(r1)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r23, 0x74(r1)
    bne lbl_fn_8003F538_00001CFC
    li r23, 0x0
lbl_fn_8003F538_00001CFC:
    rlwinm r0, r26, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8003F538_00001D0C
    li r23, 0x0
lbl_fn_8003F538_00001D0C:
    mr r3, r24
    li r4, 0xe
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001D24
    li r23, 0x0
lbl_fn_8003F538_00001D24:
    lis r3, 0x2
    subi r22, r3, 0x7961
    cmpw r23, r22
    bge lbl_fn_8003F538_00001D38
    mr r22, r23
lbl_fn_8003F538_00001D38:
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001D88
    lwz r0, 0x50c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8003F538_00001D58
    li r22, 0x0
    b lbl_fn_8003F538_00001D88
lbl_fn_8003F538_00001D58:
    lwz r4, 0x2f0(r25)
    cmpwi r4, 0x0
    beq lbl_fn_8003F538_00001D88
    bl fn_804EB7C8
    cmpwi r3, 0x0
    beq lbl_fn_8003F538_00001D88
    lwz r3, 0xd4c(r3)
    rlwinm. r0, r3, 0, 21, 21
    bne lbl_fn_8003F538_00001D84
    rlwinm. r0, r3, 0, 20, 20
    beq lbl_fn_8003F538_00001D88
lbl_fn_8003F538_00001D84:
    li r22, 0x0
lbl_fn_8003F538_00001D88:
    psq_l f31, 0xa8(r1), 0, 0
    mr r3, r22
    lfd f31, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_22
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80040434(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x3f
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040434_00001EE8
    lfs f0, lbl_808807C8
    addi r3, r31, 0x308
    li r4, 0x0
    b lbl_fn_80040434_00001EDC
lbl_fn_80040434_00001DEC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3f
    bne lbl_fn_80040434_00001ED4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80040434_00001E30
    cmpwi r0, 0x2
    beq lbl_fn_80040434_00001E4C
    cmpwi r0, 0x4
    beq lbl_fn_80040434_00001E68
    cmpwi r0, 0x5
    beq lbl_fn_80040434_00001E84
    cmpwi r0, 0x6
    beq lbl_fn_80040434_00001EA0
    cmpwi r0, 0x7
    beq lbl_fn_80040434_00001EBC
    b lbl_fn_80040434_00001ED4
lbl_fn_80040434_00001E30:
    lfs f1, 0x4(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040434_00001E40
    b lbl_fn_80040434_00001E44
lbl_fn_80040434_00001E40:
    fmr f1, f0
lbl_fn_80040434_00001E44:
    stfs f1, 0x4(r30)
    b lbl_fn_80040434_00001ED4
lbl_fn_80040434_00001E4C:
    lfs f1, 0x0(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040434_00001E5C
    b lbl_fn_80040434_00001E60
lbl_fn_80040434_00001E5C:
    fmr f1, f0
lbl_fn_80040434_00001E60:
    stfs f1, 0x0(r30)
    b lbl_fn_80040434_00001ED4
lbl_fn_80040434_00001E68:
    lfs f1, 0xc(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040434_00001E78
    b lbl_fn_80040434_00001E7C
lbl_fn_80040434_00001E78:
    fmr f1, f0
lbl_fn_80040434_00001E7C:
    stfs f1, 0xc(r30)
    b lbl_fn_80040434_00001ED4
lbl_fn_80040434_00001E84:
    lfs f1, 0x10(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040434_00001E94
    b lbl_fn_80040434_00001E98
lbl_fn_80040434_00001E94:
    fmr f1, f0
lbl_fn_80040434_00001E98:
    stfs f1, 0x10(r30)
    b lbl_fn_80040434_00001ED4
lbl_fn_80040434_00001EA0:
    lfs f1, 0x14(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040434_00001EB0
    b lbl_fn_80040434_00001EB4
lbl_fn_80040434_00001EB0:
    fmr f1, f0
lbl_fn_80040434_00001EB4:
    stfs f1, 0x14(r30)
    b lbl_fn_80040434_00001ED4
lbl_fn_80040434_00001EBC:
    lfs f1, 0x18(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040434_00001ECC
    b lbl_fn_80040434_00001ED0
lbl_fn_80040434_00001ECC:
    fmr f1, f0
lbl_fn_80040434_00001ED0:
    stfs f1, 0x18(r30)
lbl_fn_80040434_00001ED4:
    addi r3, r3, 0x14
    addi r4, r4, 0x1
lbl_fn_80040434_00001EDC:
    lwz r0, 0x304(r31)
    cmplw r4, r0
    blt lbl_fn_80040434_00001DEC
lbl_fn_80040434_00001EE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80040588(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    li r0, 0x7
    lfs f31, lbl_808807D0
    lfs f0, lbl_8088080C
    li r6, -0x1
    li r7, 0x0
    mtctr r0
lbl_fn_80040588_00001F2C:
    lfs f2, 0x0(r3)
    lfs f1, 0x13c(r4)
    fmuls f3, f2, f1
    fabs f1, f3
    frsp f1, f1
    fcmpo cr0, f1, f0
    blt lbl_fn_80040588_00001F60
    fabs f2, f31
    frsp f2, f2
    fcmpo cr0, f2, f1
    bge lbl_fn_80040588_00001F60
    fmr f31, f3
    mr r6, r7
lbl_fn_80040588_00001F60:
    addi r4, r4, 0x4
    addi r3, r3, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80040588_00001F2C
    cmpwi r6, 0x0
    bge lbl_fn_80040588_00001F80
    lfs f1, lbl_808807D0
    b lbl_fn_80040588_00001FC4
lbl_fn_80040588_00001F80:
    cmpwi r5, 0x0
    beq lbl_fn_80040588_00001F9C
    lfs f1, lbl_808807D0
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80040588_00001F9C
    b lbl_fn_80040588_00001FC4
lbl_fn_80040588_00001F9C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80040588_00001FC0
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80040588_00001FC0
    lfs f0, lbl_808807D8
    fmuls f31, f31, f0
lbl_fn_80040588_00001FC0:
    fmr f1, f31
lbl_fn_80040588_00001FC4:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80040664(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    rlwinm r7, r6, 0, 11, 11
    mr r8, r3
    stw r0, 0x44(r1)
    subis r0, r7, 0x10
    cmplwi r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r6
    stw r29, 0x34(r1)
    mr r29, r5
    stw r28, 0x30(r1)
    mr r28, r4
    bne lbl_fn_80040664_00002020
    li r3, -0x1
    b lbl_fn_80040664_0000214C
lbl_fn_80040664_00002020:
    rlwinm r3, r6, 0, 8, 8
    li r31, -0x1
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80040664_00002050
    lfs f1, 0x13c(r5)
    li r31, 0x0
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    bge lbl_fn_80040664_00002050
    li r3, 0x0
    b lbl_fn_80040664_0000214C
lbl_fn_80040664_00002050:
    rlwinm r3, r6, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_80040664_0000207C
    lfs f1, 0x140(r5)
    li r31, 0x1
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    bge lbl_fn_80040664_0000207C
    li r3, 0x1
    b lbl_fn_80040664_0000214C
lbl_fn_80040664_0000207C:
    rlwinm r3, r6, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_80040664_000020A8
    lfs f1, 0x14c(r5)
    li r31, 0x4
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    bge lbl_fn_80040664_000020A8
    li r3, 0x4
    b lbl_fn_80040664_0000214C
lbl_fn_80040664_000020A8:
    rlwinm r3, r6, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_80040664_000020D4
    lfs f1, 0x148(r5)
    li r31, 0x3
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    bge lbl_fn_80040664_000020D4
    li r3, 0x3
    b lbl_fn_80040664_0000214C
lbl_fn_80040664_000020D4:
    addi r3, r1, 0x8
    addi r4, r8, 0x74
    li r5, 0x1c
    bl memcpy
    mr r4, r28
    mr r5, r30
    addi r3, r1, 0x8
    bl fn_80040434
    li r0, 0x7
    addi r3, r1, 0x8
    lfs f3, lbl_808807D0
    li r4, 0x0
    lfs f0, lbl_8088080C
    mtctr r0
lbl_fn_80040664_0000210C:
    lfs f2, 0x0(r3)
    lfs f1, 0x13c(r29)
    fmuls f2, f2, f1
    fabs f1, f2
    frsp f1, f1
    fcmpo cr0, f1, f0
    blt lbl_fn_80040664_00002138
    fcmpo cr0, f3, f2
    ble lbl_fn_80040664_00002138
    fmr f3, f2
    mr r31, r4
lbl_fn_80040664_00002138:
    addi r29, r29, 0x4
    addi r3, r3, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_80040664_0000210C
    mr r3, r31
lbl_fn_80040664_0000214C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800407F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    rlwinm r7, r6, 0, 11, 11
    mr r8, r3
    stw r0, 0x44(r1)
    subis r0, r7, 0x10
    cmplwi r0, 0x0
    stw r31, 0x3c(r1)
    li r31, -0x1
    stw r30, 0x38(r1)
    mr r30, r6
    stw r29, 0x34(r1)
    mr r29, r5
    stw r28, 0x30(r1)
    mr r28, r4
    bne lbl_fn_800407F4_000021B4
    li r3, -0x1
    b lbl_fn_800407F4_000022EC
lbl_fn_800407F4_000021B4:
    rlwinm r3, r6, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_800407F4_000021D8
    lfs f1, 0x13c(r5)
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    bge lbl_fn_800407F4_000021D8
    li r31, 0x0
lbl_fn_800407F4_000021D8:
    rlwinm r3, r6, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_800407F4_000021FC
    lfs f1, 0x140(r5)
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    bge lbl_fn_800407F4_000021FC
    li r31, 0x1
lbl_fn_800407F4_000021FC:
    rlwinm r3, r6, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_800407F4_00002220
    lfs f1, 0x14c(r5)
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    bge lbl_fn_800407F4_00002220
    li r31, 0x4
lbl_fn_800407F4_00002220:
    rlwinm r3, r6, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_800407F4_00002244
    lfs f1, 0x148(r5)
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    bge lbl_fn_800407F4_00002244
    li r31, 0x3
lbl_fn_800407F4_00002244:
    cmpwi r31, 0x0
    blt lbl_fn_800407F4_00002254
    mr r3, r31
    b lbl_fn_800407F4_000022EC
lbl_fn_800407F4_00002254:
    addi r3, r1, 0x8
    addi r4, r8, 0x74
    li r5, 0x1c
    bl memcpy
    mr r4, r28
    mr r5, r30
    addi r3, r1, 0x8
    bl fn_80040434
    li r0, 0x7
    addi r3, r1, 0x8
    lfs f3, lbl_808807D0
    li r4, 0x0
    lfs f0, lbl_8088080C
    mtctr r0
lbl_fn_800407F4_0000228C:
    lfs f2, 0x0(r3)
    lfs f1, 0x13c(r29)
    fmuls f4, f2, f1
    fabs f1, f4
    frsp f1, f1
    fcmpo cr0, f1, f0
    blt lbl_fn_800407F4_000022C0
    fabs f2, f3
    frsp f2, f2
    fcmpo cr0, f2, f1
    bge lbl_fn_800407F4_000022C0
    fmr f3, f4
    mr r31, r4
lbl_fn_800407F4_000022C0:
    addi r29, r29, 0x4
    addi r3, r3, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_800407F4_0000228C
    lfs f0, lbl_808807D0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_800407F4_000022E8
    li r3, -0x1
    b lbl_fn_800407F4_000022EC
lbl_fn_800407F4_000022E8:
    mr r3, r31
lbl_fn_800407F4_000022EC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80040994(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    rlwinm r7, r6, 0, 8, 8
    mr r8, r3
    stw r0, 0x64(r1)
    subis r0, r7, 0x80
    cmplwi r0, 0x0
    li r7, 0x0
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    li r4, 0x0
    bne lbl_fn_80040994_00002374
    lfs f1, 0x13c(r5)
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80040994_00002368
    li r4, 0x1
lbl_fn_80040994_00002368:
    cmpwi r0, 0x0
    bne lbl_fn_80040994_00002374
    li r7, 0x1
lbl_fn_80040994_00002374:
    rlwinm r3, r6, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_80040994_000023AC
    lfs f1, 0x140(r5)
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80040994_000023A0
    li r4, 0x1
lbl_fn_80040994_000023A0:
    cmpwi r0, 0x0
    bne lbl_fn_80040994_000023AC
    li r7, 0x1
lbl_fn_80040994_000023AC:
    rlwinm r3, r6, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_80040994_000023E4
    lfs f1, 0x14c(r5)
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80040994_000023D8
    li r4, 0x1
lbl_fn_80040994_000023D8:
    cmpwi r0, 0x0
    bne lbl_fn_80040994_000023E4
    li r7, 0x1
lbl_fn_80040994_000023E4:
    rlwinm r3, r6, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_80040994_0000241C
    lfs f1, 0x148(r5)
    lfs f0, lbl_808807D0
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80040994_00002410
    li r4, 0x1
lbl_fn_80040994_00002410:
    cmpwi r0, 0x0
    bne lbl_fn_80040994_0000241C
    li r7, 0x1
lbl_fn_80040994_0000241C:
    cmpwi r7, 0x0
    beq lbl_fn_80040994_0000242C
    li r3, 0x0
    b lbl_fn_80040994_0000249C
lbl_fn_80040994_0000242C:
    cmpwi r4, 0x0
    beq lbl_fn_80040994_0000243C
    li r3, 0x1
    b lbl_fn_80040994_0000249C
lbl_fn_80040994_0000243C:
    addi r3, r1, 0x24
    addi r4, r8, 0x74
    li r5, 0x1c
    bl memcpy
    addi r3, r1, 0x8
    addi r4, r1, 0x24
    li r5, 0x1c
    bl memcpy
    mr r4, r29
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_80040434
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x0
    bl fn_80040588
    lfs f2, lbl_80880810
    lfs f0, lbl_808807F0
    fmuls f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    srwi r3, r0, 31
lbl_fn_80040994_0000249C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80040B40(void)
{
    nofralloc
    b fn_80040B44
}

asm void fn_80040B44(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_19
    lwz r0, 0x1c(r3)
    li r9, 0x0
    stw r9, 0x0(r3)
    mr r20, r3
    clrlwi r0, r0, 1
    mr r21, r4
    stw r9, 0x4(r3)
    mr r22, r5
    mr r23, r6
    mr r24, r7
    stw r9, 0x8(r3)
    mr r25, r8
    stw r0, 0x1c(r3)
    lwz r0, 0xc(r6)
    extrwi r30, r0, 1, 26
    bl fn_80680CF8
    lis r4, 0x51ec
    rlwinm r31, r24, 0, 26, 26
    subi r4, r4, 0x7ae1
    lbz r0, 0x3(r21)
    mulhw r5, r4, r3
    cmplwi r31, 0x20
    extsb r4, r0
    srawi r0, r5, 5
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    subf r0, r0, r3
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    bne lbl_fn_80040B44_0000255C
    li r0, 0x0
lbl_fn_80040B44_0000255C:
    cmpwi r0, 0x0
    li r29, 0x0
    beq lbl_fn_80040B44_0000256C
    lwz r29, 0x90(r21)
lbl_fn_80040B44_0000256C:
    lwz r0, 0xac(r21)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x80
    bne lbl_fn_80040B44_000026B8
    li r0, 0x4
    addi r4, r1, 0x30
    lwz r5, 0x90(r21)
    li r19, 0x0
    li r7, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_80040B44_00002598:
    slw r6, r3, r7
    and r0, r6, r5
    cmplw r6, r0
    bne lbl_fn_80040B44_000025B4
    stw r6, 0x0(r4)
    addi r4, r4, 0x4
    addi r19, r19, 0x1
lbl_fn_80040B44_000025B4:
    addi r7, r7, 0x1
    slw r6, r3, r7
    and r0, r6, r5
    cmplw r6, r0
    bne lbl_fn_80040B44_000025D4
    stw r6, 0x0(r4)
    addi r4, r4, 0x4
    addi r19, r19, 0x1
lbl_fn_80040B44_000025D4:
    addi r7, r7, 0x1
    slw r6, r3, r7
    and r0, r6, r5
    cmplw r6, r0
    bne lbl_fn_80040B44_000025F4
    stw r6, 0x0(r4)
    addi r4, r4, 0x4
    addi r19, r19, 0x1
lbl_fn_80040B44_000025F4:
    addi r7, r7, 0x1
    slw r6, r3, r7
    and r0, r6, r5
    cmplw r6, r0
    bne lbl_fn_80040B44_00002614
    stw r6, 0x0(r4)
    addi r4, r4, 0x4
    addi r19, r19, 0x1
lbl_fn_80040B44_00002614:
    addi r7, r7, 0x1
    slw r6, r3, r7
    and r0, r6, r5
    cmplw r6, r0
    bne lbl_fn_80040B44_00002634
    stw r6, 0x0(r4)
    addi r4, r4, 0x4
    addi r19, r19, 0x1
lbl_fn_80040B44_00002634:
    addi r7, r7, 0x1
    slw r6, r3, r7
    and r0, r6, r5
    cmplw r6, r0
    bne lbl_fn_80040B44_00002654
    stw r6, 0x0(r4)
    addi r4, r4, 0x4
    addi r19, r19, 0x1
lbl_fn_80040B44_00002654:
    addi r7, r7, 0x1
    slw r6, r3, r7
    and r0, r6, r5
    cmplw r6, r0
    bne lbl_fn_80040B44_00002674
    stw r6, 0x0(r4)
    addi r4, r4, 0x4
    addi r19, r19, 0x1
lbl_fn_80040B44_00002674:
    addi r7, r7, 0x1
    slw r6, r3, r7
    and r0, r6, r5
    cmplw r6, r0
    bne lbl_fn_80040B44_00002694
    stw r6, 0x0(r4)
    addi r4, r4, 0x4
    addi r19, r19, 0x1
lbl_fn_80040B44_00002694:
    addi r7, r7, 0x1
    bdnz lbl_fn_80040B44_00002598
    bl fn_80680CF8
    divw r0, r3, r19
    addi r4, r1, 0x30
    mullw r0, r0, r19
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r29, r4, r0
lbl_fn_80040B44_000026B8:
    lwz r0, 0x2f0(r23)
    cmpwi r0, 0x0
    beq lbl_fn_80040B44_00002818
    mr r3, r23
    bl fn_8012E534
    cmpwi r3, 0x0
    bne lbl_fn_80040B44_00002818
    mr r3, r22
    li r4, 0x10
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002714
    lwz r26, lbl_8087F048
    ori r29, r29, 0x20
    cmpwi r26, 0x0
    beq lbl_fn_80040B44_00002714
    lwz r4, 0x2f0(r23)
    addi r3, r1, 0x8
    bl fn_801781B0
    mr r3, r26
    addi r4, r1, 0x8
    li r5, 0x20
    bl fn_80108F38
lbl_fn_80040B44_00002714:
    mr r3, r22
    li r4, 0x11
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_0000272C
    oris r29, r29, 0x1
lbl_fn_80040B44_0000272C:
    mr r3, r22
    li r4, 0x12
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002744
    oris r29, r29, 0x40
lbl_fn_80040B44_00002744:
    mr r3, r22
    li r4, 0x13
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_0000275C
    ori r29, r29, 0x80
lbl_fn_80040B44_0000275C:
    mr r3, r22
    li r4, 0x14
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002774
    ori r29, r29, 0x1
lbl_fn_80040B44_00002774:
    mr r3, r22
    li r4, 0x15
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_0000278C
    ori r29, r29, 0x40
lbl_fn_80040B44_0000278C:
    mr r3, r22
    li r4, 0x16
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_000027A4
    ori r29, r29, 0x10
lbl_fn_80040B44_000027A4:
    mr r3, r22
    li r4, 0x17
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_000027BC
    ori r29, r29, 0x8000
lbl_fn_80040B44_000027BC:
    mr r3, r22
    li r4, 0x19
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_000027D4
    ori r29, r29, 0x4
lbl_fn_80040B44_000027D4:
    mr r3, r22
    li r4, 0x18
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002818
    rlwinm r0, r24, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80040B44_00002818
    rlwinm r0, r24, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_80040B44_00002818
    clrlwi r0, r24, 31
    cmplwi r0, 0x1
    beq lbl_fn_80040B44_00002818
    cmplwi r31, 0x20
    beq lbl_fn_80040B44_00002818
    ori r29, r29, 0x4000
lbl_fn_80040B44_00002818:
    lbz r3, 0x1(r21)
    extsb r0, r3
    cmpwi r0, 0x2
    bne lbl_fn_80040B44_000028F4
    lwz r3, 0x24(r21)
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002860
    lwz r0, 0xac(r21)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_80040B44_00002860
    lwz r0, 0x224(r23)
    lwz r4, 0x180(r23)
    add r0, r0, r3
    cmpw r0, r4
    bge lbl_fn_80040B44_0000285C
    mr r4, r0
lbl_fn_80040B44_0000285C:
    stw r4, 0x224(r23)
lbl_fn_80040B44_00002860:
    lwz r31, 0x1c(r21)
    lwz r24, 0x20(r21)
    bl fn_80680CF8
    addi r5, r24, 0x1
    srwi r0, r24, 31
    divw r4, r3, r5
    lwz r6, 0x2f0(r23)
    add r0, r0, r24
    lfs f1, 0xec(r22)
    lfs f0, 0x2c(r21)
    cmpwi r6, 0x0
    fmuls f0, f1, f0
    mullw r4, r4, r5
    srawi r0, r0, 1
    fctiwz f0, f0
    subf r3, r4, r3
    stfd f0, 0xb0(r1)
    subf r3, r0, r3
    lwz r0, 0xb4(r1)
    add r31, r31, r3
    add r31, r31, r0
    beq lbl_fn_80040B44_000028D8
    lwz r0, 0x12a4(r6)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80040B44_000028D8
    mr r3, r23
    mr r5, r29
    mr r6, r21
    neg r4, r31
    bl fn_8012DF7C
lbl_fn_80040B44_000028D8:
    neg r4, r31
    li r3, 0x0
    li r0, 0x1
    stw r4, 0x4(r20)
    stw r3, 0xc(r20)
    stw r0, 0x0(r20)
    b lbl_fn_80040B44_00002D24
lbl_fn_80040B44_000028F4:
    cmpwi r0, 0x3
    bne lbl_fn_80040B44_00002910
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x4(r20)
    stw r0, 0x0(r20)
    b lbl_fn_80040B44_00002D24
lbl_fn_80040B44_00002910:
    cmplwi r3, 0x1
    bgt lbl_fn_80040B44_00002D04
    lwz r0, 0x24(r21)
    li r28, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80040B44_0000294C
    lwz r3, 0x160(r23)
    subi r28, r3, 0x1
    cmpw r0, r28
    bge lbl_fn_80040B44_0000293C
    mr r28, r0
lbl_fn_80040B44_0000293C:
    lwz r0, 0x1c(r23)
    mr r3, r23
    subf r4, r28, r0
    bl fn_80133B30
lbl_fn_80040B44_0000294C:
    mr r3, r21
    mr r4, r22
    mr r5, r23
    mr r6, r24
    mr r7, r25
    bl fn_8003F538
    mr r27, r3
    mr r3, r21
    mr r4, r22
    mr r5, r23
    mr r6, r24
    bl fn_80040664
    stw r3, 0x14(r20)
    mr r3, r21
    mr r4, r22
    mr r5, r23
    mr r6, r24
    bl fn_800407F4
    stw r3, 0x18(r20)
    li r26, 0x1
    lwz r3, lbl_8087F628
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002B20
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    bne lbl_fn_80040B44_00002B20
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002B20
    addis r4, r3, 0x1
    lbz r26, -0x6644(r4)
    cmpwi r26, 0x0
    bne lbl_fn_80040B44_00002B20
    lwz r31, 0x2f0(r23)
    cmpwi r31, 0x0
    beq lbl_fn_80040B44_00002B20
    lwz r19, 0x2f0(r22)
    mr r4, r19
    bl fn_804EB7C8
    lwz r3, lbl_8087F610
    mr r4, r31
    bl fn_804EB7C8
    lwz r4, lbl_8087F610
    mr r25, r3
    lwz r0, 0x540(r4)
    cmpwi r0, 0x1
    beq lbl_fn_80040B44_00002A10
    cmpwi r0, 0x0
    bne lbl_fn_80040B44_00002A50
lbl_fn_80040B44_00002A10:
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002B20
    lwz r3, 0xd0(r3)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_80040B44_00002B20
    extrwi r0, r3, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_80040B44_00002A48
    mr r3, r4
    mr r4, r25
    bl fn_804EB4B0
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002B20
lbl_fn_80040B44_00002A48:
    li r26, 0x1
    b lbl_fn_80040B44_00002B20
lbl_fn_80040B44_00002A50:
    mr r3, r4
    mr r4, r19
    bl fn_804EB818
    lwz r3, lbl_8087F610
    mr r4, r31
    bl fn_804EB818
    cmpwi r19, 0x0
    mr r31, r3
    beq lbl_fn_80040B44_00002ACC
    cmpwi r25, 0x0
    beq lbl_fn_80040B44_00002AAC
    lwz r3, 0xd0(r25)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_80040B44_00002AAC
    extrwi r0, r3, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_80040B44_00002AC4
    lwz r3, lbl_8087F610
    mr r4, r25
    bl fn_804EB4B0
    cmpwi r3, 0x0
    bne lbl_fn_80040B44_00002AC4
lbl_fn_80040B44_00002AAC:
    cmpwi r31, 0x0
    beq lbl_fn_80040B44_00002B20
    lwz r0, 0xb0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80040B44_00002B20
lbl_fn_80040B44_00002AC4:
    li r26, 0x1
    b lbl_fn_80040B44_00002B20
lbl_fn_80040B44_00002ACC:
    cmpwi r25, 0x0
    beq lbl_fn_80040B44_00002B04
    lwz r3, 0xd0(r25)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_80040B44_00002B04
    extrwi r0, r3, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_80040B44_00002B1C
    lwz r3, lbl_8087F610
    mr r4, r25
    bl fn_804EB4B0
    cmpwi r3, 0x0
    bne lbl_fn_80040B44_00002B1C
lbl_fn_80040B44_00002B04:
    cmpwi r31, 0x0
    beq lbl_fn_80040B44_00002B20
    lwz r0, 0xb0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80040B44_00002B20
lbl_fn_80040B44_00002B1C:
    li r26, 0x1
lbl_fn_80040B44_00002B20:
    cmplwi r26, 0x1
    bne lbl_fn_80040B44_00002B3C
    mr r3, r23
    mr r4, r27
    mr r5, r29
    mr r6, r21
    bl fn_8012DF7C
lbl_fn_80040B44_00002B3C:
    neg r0, r28
    stw r27, 0x4(r20)
    addi r3, r1, 0x14
    addi r4, r21, 0x74
    stw r0, 0xc(r20)
    li r5, 0x1c
    bl memcpy
    mr r4, r22
    mr r5, r24
    addi r3, r1, 0x14
    bl fn_80040434
    rlwinm r3, r24, 0, 8, 8
    lfs f0, lbl_808807C8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_80040B44_00002B94
    lfs f1, 0x14(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040B44_00002B8C
    b lbl_fn_80040B44_00002B90
lbl_fn_80040B44_00002B8C:
    fmr f1, f0
lbl_fn_80040B44_00002B90:
    stfs f1, 0x14(r1)
lbl_fn_80040B44_00002B94:
    rlwinm r3, r24, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_80040B44_00002BBC
    lfs f1, 0x18(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040B44_00002BB4
    b lbl_fn_80040B44_00002BB8
lbl_fn_80040B44_00002BB4:
    fmr f1, f0
lbl_fn_80040B44_00002BB8:
    stfs f1, 0x18(r1)
lbl_fn_80040B44_00002BBC:
    rlwinm r3, r24, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_80040B44_00002BE4
    lfs f1, 0x24(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040B44_00002BDC
    b lbl_fn_80040B44_00002BE0
lbl_fn_80040B44_00002BDC:
    fmr f1, f0
lbl_fn_80040B44_00002BE0:
    stfs f1, 0x24(r1)
lbl_fn_80040B44_00002BE4:
    rlwinm r3, r24, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_80040B44_00002C0C
    lfs f1, 0x20(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_80040B44_00002C04
    b lbl_fn_80040B44_00002C08
lbl_fn_80040B44_00002C04:
    fmr f1, f0
lbl_fn_80040B44_00002C08:
    stfs f1, 0x20(r1)
lbl_fn_80040B44_00002C0C:
    mr r4, r23
    addi r3, r1, 0x14
    li r5, 0x0
    bl fn_80040588
    lfs f2, lbl_80880814
    rlwinm r3, r24, 0, 11, 11
    subis r0, r3, 0x10
    lfs f0, lbl_808807F0
    fmuls f1, f2, f1
    cmplwi r0, 0x0
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r0, 0xb4(r1)
    bne lbl_fn_80040B44_00002C4C
    li r0, 0x0
lbl_fn_80040B44_00002C4C:
    cmpwi r0, -0x2
    bgt lbl_fn_80040B44_00002C74
    li r0, 0x5
    stw r0, 0x0(r20)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002CD0
    li r4, 0x15b
    bl fn_803750E4
    b lbl_fn_80040B44_00002CD0
lbl_fn_80040B44_00002C74:
    cmpwi r0, -0x1
    bgt lbl_fn_80040B44_00002C88
    li r0, 0x4
    stw r0, 0x0(r20)
    b lbl_fn_80040B44_00002CD0
lbl_fn_80040B44_00002C88:
    cmpwi r0, 0x1
    blt lbl_fn_80040B44_00002CC8
    li r0, 0x1
    stw r0, 0x0(r20)
    lwz r3, 0x2f0(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002CD0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80040B44_00002CD0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002CD0
    li r4, 0x15a
    bl fn_803750E4
    b lbl_fn_80040B44_00002CD0
lbl_fn_80040B44_00002CC8:
    li r0, 0x1
    stw r0, 0x0(r20)
lbl_fn_80040B44_00002CD0:
    rlwinm r3, r29, 0, 12, 12
    lwz r4, 0x18(r23)
    subis r0, r3, 0x8
    lwz r3, 0x240(r23)
    cmplwi r0, 0x0
    or r0, r4, r3
    bne lbl_fn_80040B44_00002D24
    rlwinm. r0, r0, 0, 12, 12
    bne lbl_fn_80040B44_00002D24
    lwz r0, 0x1c(r20)
    oris r0, r0, 0x4000
    stw r0, 0x1c(r20)
    b lbl_fn_80040B44_00002D24
lbl_fn_80040B44_00002D04:
    mr r3, r21
    bl fn_8021A9CC
    cmpwi r3, 0x0
    beq lbl_fn_80040B44_00002D24
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x4(r20)
    stw r0, 0x0(r20)
lbl_fn_80040B44_00002D24:
    cmpwi r30, 0x0
    bne lbl_fn_80040B44_00002D48
    lwz r0, 0xc(r23)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80040B44_00002D48
    lwz r0, 0x1c(r20)
    oris r0, r0, 0x8000
    stw r0, 0x1c(r20)
lbl_fn_80040B44_00002D48:
    addi r11, r1, 0xf0
    lwz r3, 0x0(r20)
    bl _restgpr_19
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_800413EC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_24
    lwz r6, 0x5c(r4)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r30, 0x11c(r6)
    addi r3, r5, 0x7d4
    li r31, 0x0
    li r4, 0x0
    bl fn_80133BD8
    lwz r5, 0x934(r27)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r4, lbl_80730C68@ha
    subf r0, r3, r5
    lfd f4, lbl_80730C68@l(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfs f0, lbl_80880818
    lfd f3, 0x38(r1)
    lfs f5, lbl_808807D0
    fsubs f3, f3, f4
    fmuls f0, f0, f3
    fcmpo cr0, f5, f0
    ble lbl_fn_800413EC_00002DE4
    b lbl_fn_800413EC_00002DE8
lbl_fn_800413EC_00002DE4:
    fmr f5, f0
lbl_fn_800413EC_00002DE8:
    lfs f31, lbl_808807F0
    fcmpo cr0, f31, f5
    bge lbl_fn_800413EC_00002DF8
    b lbl_fn_800413EC_00002E0C
lbl_fn_800413EC_00002DF8:
    lfs f31, lbl_808807D0
    fcmpo cr0, f31, f0
    ble lbl_fn_800413EC_00002E08
    b lbl_fn_800413EC_00002E0C
lbl_fn_800413EC_00002E08:
    fmr f31, f0
lbl_fn_800413EC_00002E0C:
    cmpwi r26, 0x0
    bne lbl_fn_800413EC_00002E30
    lwz r0, 0x7e8(r27)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_800413EC_00002E30
    lwz r3, lbl_8087F048
    bl fn_8010CA2C
    fadds f31, f31, f1
lbl_fn_800413EC_00002E30:
    cmpwi r26, 0x1
    bne lbl_fn_800413EC_00002E4C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x29c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800413EC_00002E4C
    lfs f31, lbl_808807D0
lbl_fn_800413EC_00002E4C:
    cmpwi r26, 0x1
    bne lbl_fn_800413EC_00002EEC
    lwz r0, 0xf58(r27)
    cmpwi r0, 0xc
    bge lbl_fn_800413EC_00002E74
    lwz r3, lbl_8087F0A8
    lwz r0, 0x4d8(r3)
    cmpwi r0, 0xc
    bge lbl_fn_800413EC_00002E74
    lfs f31, lbl_808807C8
lbl_fn_800413EC_00002E74:
    mr r3, r27
    li r4, 0x1789
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_800413EC_00002E90
    lfs f31, lbl_808807C8
lbl_fn_800413EC_00002E90:
    addi r3, r27, 0x7d4
    li r4, 0xc
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_800413EC_00002EEC
    addi r3, r27, 0x7d4
    li r4, 0xc
    bl fn_80134134
    mr r29, r3
    bl fn_80680CF8
    lis r5, 0x51ec
    lwz r4, 0x0(r29)
    subi r0, r5, 0x7ae1
    mulhw r5, r0, r3
    lwz r0, 0x10(r4)
    srawi r4, r5, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    cmpw r0, r3
    ble lbl_fn_800413EC_00002EEC
    lfs f31, lbl_808807C8
lbl_fn_800413EC_00002EEC:
    cmpwi r26, 0x0
    li r29, 0x0
    bne lbl_fn_800413EC_00003024
    cmplwi r30, 0x1
    bgt lbl_fn_800413EC_00003024
    lfs f5, 0x530(r28)
    addi r3, r1, 0x2c
    lfs f0, 0x530(r27)
    mr r4, r3
    lfs f4, 0x528(r28)
    lfs f3, 0x528(r27)
    fsubs f5, f5, f0
    lfs f0, lbl_808807D0
    fsubs f3, f4, f3
    stfs f5, 0x34(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    bl fn_805F98D0
    lfs f2, 0x530(r28)
    addi r25, r1, 0x20
    psq_l f1, 0x528(r28), 0, 0
    mr r3, r28
    psq_st f1, 0x0(r25), 0, 0
    lfs f0, lbl_80880808
    lfs f3, 0x24(r1)
    stfs f2, 0x28(r1)
    fadds f6, f3, f0
    lfs f0, lbl_8088081C
    lfs f5, 0x34(r1)
    stfs f6, 0x24(r1)
    lfs f4, 0x30(r1)
    lfs f7, 0x5b0(r28)
    lfs f3, 0x2c(r1)
    fadds f7, f0, f7
    lfs f0, 0x20(r1)
    lwz r24, lbl_8087EE98
    fmuls f4, f4, f7
    fmuls f3, f3, f7
    fmuls f5, f5, f7
    stfs f4, 0xc(r1)
    fadds f6, f6, f4
    stfs f5, 0x10(r1)
    fadds f0, f0, f3
    fadds f5, f2, f5
    stfs f3, 0x8(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r24
    mr r5, r25
    addi r6, r1, 0x14
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_800413EC_00003024
    mr r3, r27
    mr r4, r28
    bl fn_80156120
    lwz r0, 0x12a4(r28)
    mr r29, r3
    li r3, 0x0
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_800413EC_00003008
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800413EC_0000300C
lbl_fn_800413EC_00003008:
    li r3, 0x1
lbl_fn_800413EC_0000300C:
    cmpwi r3, 0x0
    beq lbl_fn_800413EC_0000301C
    lfs f0, lbl_80880820
    b lbl_fn_800413EC_00003020
lbl_fn_800413EC_0000301C:
    lfs f0, lbl_80880824
lbl_fn_800413EC_00003020:
    fadds f31, f31, f0
lbl_fn_800413EC_00003024:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x38(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80730C68@ha
    lfd f4, lbl_80730C68@l(r4)
    lfs f0, lbl_80880828
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f3, 0x38(r1)
    fsubs f3, f3, f4
    fdivs f0, f3, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_800413EC_0000313C
    subi r0, r26, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_800413EC_00003138
    cmpwi r26, 0x0
    beq lbl_fn_800413EC_00003098
    cmpwi r26, 0x1
    beq lbl_fn_800413EC_00003128
    b lbl_fn_800413EC_0000313C
lbl_fn_800413EC_00003098:
    cmplwi r30, 0x1
    bgt lbl_fn_800413EC_00003120
    cmpwi r29, 0x0
    beq lbl_fn_800413EC_000030B0
    li r31, 0x4
    b lbl_fn_800413EC_0000313C
lbl_fn_800413EC_000030B0:
    mr r3, r27
    mr r4, r28
    bl fn_80156120
    cmpwi r3, 0x0
    beq lbl_fn_800413EC_00003118
    mr r3, r28
    mr r4, r27
    bl fn_8016ADF4
    cmpwi r3, 0x0
    beq lbl_fn_800413EC_00003110
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    bne lbl_fn_800413EC_00003110
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800413EC_00003110
    li r31, 0x5
    b lbl_fn_800413EC_0000313C
lbl_fn_800413EC_00003110:
    li r31, 0x2
    b lbl_fn_800413EC_0000313C
lbl_fn_800413EC_00003118:
    li r31, 0x1
    b lbl_fn_800413EC_0000313C
lbl_fn_800413EC_00003120:
    li r31, 0x1
    b lbl_fn_800413EC_0000313C
lbl_fn_800413EC_00003128:
    cmplwi r30, 0x2
    bgt lbl_fn_800413EC_0000313C
    li r31, 0x3
    b lbl_fn_800413EC_0000313C
lbl_fn_800413EC_00003138:
    li r31, 0x1
lbl_fn_800413EC_0000313C:
    psq_l f31, 0x68(r1), 0, 0
    mr r3, r31
    lfd f31, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_24
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800417E8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    mr r29, r4
    mr r28, r3
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r27, r5
    mr r4, r28
    lwz r12, 0xa8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    blt lbl_fn_800417E8_000031AC
    b lbl_fn_800417E8_00003378
lbl_fn_800417E8_000031AC:
    lwz r3, 0x5c(r29)
    cmpwi r28, 0x0
    lfs f31, lbl_808807D0
    li r31, 0x0
    lwz r30, 0x11c(r3)
    bne lbl_fn_800417E8_00003230
    lwz r3, 0x80(r3)
    cmpwi r3, 0x0
    ble lbl_fn_800417E8_00003208
    cmpwi r3, 0x2
    li r0, 0x2
    bge lbl_fn_800417E8_000031E0
    mr r0, r3
lbl_fn_800417E8_000031E0:
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80730C68@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_80730C68@l(r4)
    stw r0, 0x8(r1)
    lfs f0, lbl_80880824
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f31, f0, f1
lbl_fn_800417E8_00003208:
    lwz r0, 0x48(r29)
    cmpwi r0, 0x3
    bne lbl_fn_800417E8_00003230
    lwz r0, 0x7e8(r29)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_800417E8_00003230
    lwz r3, lbl_8087F048
    bl fn_8010CA2C
    fadds f31, f31, f1
lbl_fn_800417E8_00003230:
    cmpwi r28, 0x1
    bne lbl_fn_800417E8_000032F0
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_800417E8_00003278
    mr r5, r29
    mr r6, r27
    li r4, 0x3
    bl fn_8010CD3C
    cmpwi r3, 0x0
    beq lbl_fn_800417E8_00003278
    lwz r3, lbl_8087F048
    mr r5, r29
    li r4, 0xe
    li r6, 0x3
    li r7, 0x0
    bl fn_801092C8
    lfs f31, lbl_808807C8
lbl_fn_800417E8_00003278:
    addi r3, r29, 0x7d4
    li r4, 0xc
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_800417E8_000032D4
    addi r3, r29, 0x7d4
    li r4, 0xc
    bl fn_80134134
    mr r27, r3
    bl fn_80680CF8
    lis r5, 0x51ec
    lwz r4, 0x0(r27)
    subi r0, r5, 0x7ae1
    mulhw r5, r0, r3
    lwz r0, 0x10(r4)
    srawi r4, r5, 5
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x64
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_fn_800417E8_000032D4
    lfs f31, lbl_808807C8
lbl_fn_800417E8_000032D4:
    mr r3, r29
    li r4, 0x1789
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_800417E8_000032F0
    lfs f31, lbl_808807C8
lbl_fn_800417E8_000032F0:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80730C68@ha
    lfd f2, lbl_80730C68@l(r4)
    lfs f0, lbl_80880828
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_800417E8_00003374
    cmpwi r28, 0x0
    beq lbl_fn_800417E8_00003358
    cmpwi r28, 0x1
    beq lbl_fn_800417E8_00003368
    b lbl_fn_800417E8_00003374
lbl_fn_800417E8_00003358:
    cmplwi r30, 0x1
    bgt lbl_fn_800417E8_00003374
    li r31, 0x2
    b lbl_fn_800417E8_00003374
lbl_fn_800417E8_00003368:
    cmplwi r30, 0x2
    bgt lbl_fn_800417E8_00003374
    li r31, 0x3
lbl_fn_800417E8_00003374:
    mr r3, r31
lbl_fn_800417E8_00003378:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80041A20(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_80041A28(void)
{
    nofralloc
    cmpwi r5, 0x0
    bne lbl_fn_80041A28_000033B0
    li r3, 0x0
    blr
lbl_fn_80041A28_000033B0:
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80041A28_000033C0
    b fn_800413EC
lbl_fn_80041A28_000033C0:
    b fn_800417E8
    blr
}
