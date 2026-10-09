#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void fn_80043BF4(void);
extern void fn_80092814(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_800E2A24(void);
extern void fn_801018E4(void);
extern void fn_80101CDC(void);
extern void fn_80102EAC(void);
extern void fn_8010895C(void);
extern void fn_80108C10(void);
extern void fn_80109864(void);
extern void fn_8010B180(void);
extern void fn_8010B250(void);
extern void fn_8010B398(void);
extern void fn_8012DF7C(void);
extern void fn_8012F034(void);
extern void fn_8012F188(void);
extern void fn_8012F440(void);
extern void fn_80133E24(void);
extern void fn_80133EE8(void);
extern void fn_80133F18(void);
extern void fn_80133F6C(void);
extern void fn_80134168(void);
extern void fn_80148B0C(void);
extern void fn_801533C8(void);
extern void fn_8016F3D0(void);
extern void fn_801789D8(void);
extern void fn_801799BC(void);
extern void fn_8017A5D8(void);
extern void fn_801FECE0(void);
extern void fn_801FEE08(void);
extern void fn_80210220(void);
extern void fn_80211480(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8021A8D0(void);
extern void fn_8021E48C(void);
extern void fn_803750E4(void);
extern void fn_80376238(void);
extern void fn_803E2110(void);
extern void fn_803E5E64(void);
extern void fn_803EA77C(void);
extern void fn_80444020(void);
extern void fn_8047961C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);

/* External data declarations */
extern u8 jumptable_80779CEC[];
extern u8 lbl_807355C8[];
extern u8 lbl_80736040[];
extern u8 lbl_80779DF4[];

/* Small data declarations */
extern u32 lbl_8087EE78;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F528;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80881478;
extern u32 lbl_8088148C;
extern u32 lbl_80881490;
extern u32 lbl_80881494;
extern u32 lbl_808814AC;
extern u32 lbl_808814C4;
extern u32 lbl_808814CC;
extern u32 lbl_808814D0;
extern u32 lbl_808814D4;
extern u32 lbl_808814E8;
extern u32 lbl_80881500;
extern u32 lbl_80881510;
extern u32 lbl_80881514;
extern u32 lbl_8088152C;
extern u32 lbl_80881540;
extern u32 lbl_80881544;

/* Function declarations */
void fn_800FD658(void);
void fn_800FDB20(void);
void fn_800FDE60(void);
void fn_800FDF14(void);

asm void fn_800FD658(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x210
    bl _savegpr_25
    mr r28, r3
    addis r3, r3, 0x4
    mr r25, r4
    mr r29, r5
    mr r26, r6
    mr r30, r7
    mr r27, r8
    mr r31, r9
    subi r3, r3, 0x75a4
    bl fn_800E2A24
    addis r3, r28, 0x4
    cmpwi r27, 0x0
    li r0, 0x0
    stw r25, -0x75a4(r3)
    stw r29, -0x75a0(r3)
    stw r26, -0x759c(r3)
    stw r0, -0x7598(r3)
    beq lbl_fn_800FD658_00000064
    oris r0, r0, 0x4
    stw r0, -0x7598(r3)
lbl_fn_800FD658_00000064:
    lfs f7, lbl_80881478
    cmpwi r25, 0x0
    lfs f0, lbl_80881494
    stfs f7, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f0, 0x94(r1)
    beq lbl_fn_800FD658_00000430
    lfs f7, 0x530(r25)
    addi r27, r1, 0x8c
    lfs f0, 0x530(r29)
    addi r4, r1, 0x80
    lfs f9, 0x52c(r25)
    mr r3, r27
    fsubs f2, f7, f0
    lfs f8, 0x52c(r29)
    lfs f7, 0x528(r25)
    lfs f0, 0x528(r29)
    fsubs f8, f9, f8
    stfs f2, 0x88(r1)
    fsubs f0, f7, f0
    stfs f8, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_808814D4
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_800FD658_000001E8
    mr r3, r27
    mr r4, r27
    bl fn_805F98D0
    lfs f9, 0x5b0(r29)
    addi r27, r1, 0x68
    lfs f8, 0x8c(r1)
    lfs f7, 0x90(r1)
    lfs f0, 0x94(r1)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f0, 0x94(r1)
    lwz r0, 0x12a8(r29)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FD658_00000180
    addi r3, r1, 0x20
    psq_l f1, 0x5f4(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x2c
    psq_l f1, 0x600(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x24(r1)
    lfs f7, 0x30(r1)
    psq_l f1, 0x5f4(r29), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80881500
    psq_st f1, 0x0(r27), 0, 0
    lfs f2, 0x5fc(r29)
    fmuls f7, f0, f7
    lfs f0, 0x6c(r1)
    stfs f2, 0x28(r1)
    lfs f2, 0x608(r29)
    fadds f0, f0, f7
    stfs f2, 0x34(r1)
    lfs f2, 0x5fc(r29)
    stfs f2, 0x70(r1)
    stfs f0, 0x6c(r1)
    b lbl_fn_800FD658_0000019C
lbl_fn_800FD658_00000180:
    mr r3, r29
    li r4, 0x0
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_800FD658_0000019C:
    lfs f7, 0x94(r1)
    addis r3, r28, 0x4
    lfs f0, 0x70(r1)
    addi r4, r1, 0x74
    lfs f9, 0x90(r1)
    subi r3, r3, 0x7588
    fadds f2, f7, f0
    lfs f8, 0x6c(r1)
    lfs f7, 0x8c(r1)
    lfs f0, 0x68(r1)
    fadds f8, f9, f8
    stfs f2, 0x7c(r1)
    fadds f0, f7, f0
    stfs f8, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    b lbl_fn_800FD658_00000430
lbl_fn_800FD658_000001E8:
    lfs f8, 0x5b0(r29)
    addi r27, r1, 0x1b8
    lfs f7, lbl_80881478
    lfs f0, lbl_80881494
    stfs f7, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f7, 0x1e4(r1)
    stfs f7, 0x1dc(r1)
    stfs f7, 0x1d8(r1)
    stfs f7, 0x1d4(r1)
    stfs f7, 0x1d0(r1)
    stfs f7, 0x1c8(r1)
    stfs f7, 0x1c4(r1)
    stfs f7, 0x1c0(r1)
    stfs f7, 0x1bc(r1)
    stfs f0, 0x1e0(r1)
    stfs f0, 0x1cc(r1)
    stfs f0, 0x1b8(r1)
    lfs f1, 0x53c(r29)
    fcmpu cr0, f7, f1
    beq lbl_fn_800FD658_00000290
    addi r3, r1, 0xc8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
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
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_800FD658_00000290:
    lfs f0, lbl_80881478
    lfs f1, 0x538(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_800FD658_000002F0
    addi r3, r1, 0x128
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
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
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_800FD658_000002F0:
    lfs f0, lbl_80881478
    lfs f1, 0x534(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_800FD658_00000350
    addi r3, r1, 0x188
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x188
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_800FD658_00000350:
    addi r4, r1, 0x8c
    addi r3, r1, 0x1b8
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x12a8(r29)
    addi r27, r1, 0x50
    extrwi. r0, r0, 1, 2
    beq lbl_fn_800FD658_000003CC
    addi r3, r1, 0x8
    psq_l f1, 0x5f4(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x14
    psq_l f1, 0x600(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0xc(r1)
    lfs f7, 0x18(r1)
    psq_l f1, 0x5f4(r29), 0, 0
    fsubs f7, f7, f0
    lfs f0, lbl_80881500
    psq_st f1, 0x0(r27), 0, 0
    lfs f2, 0x5fc(r29)
    fmuls f7, f0, f7
    lfs f0, 0x54(r1)
    stfs f2, 0x10(r1)
    lfs f2, 0x608(r29)
    fadds f0, f0, f7
    stfs f2, 0x1c(r1)
    lfs f2, 0x5fc(r29)
    stfs f2, 0x58(r1)
    stfs f0, 0x54(r1)
    b lbl_fn_800FD658_000003E8
lbl_fn_800FD658_000003CC:
    mr r3, r29
    li r4, 0x0
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x58(r1)
lbl_fn_800FD658_000003E8:
    lfs f7, 0x94(r1)
    addis r3, r28, 0x4
    lfs f0, 0x58(r1)
    addi r4, r1, 0x5c
    lfs f9, 0x90(r1)
    subi r3, r3, 0x7588
    fadds f2, f7, f0
    lfs f8, 0x54(r1)
    lfs f7, 0x8c(r1)
    lfs f0, 0x50(r1)
    fadds f8, f9, f8
    stfs f2, 0x64(r1)
    fadds f0, f7, f0
    stfs f8, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
lbl_fn_800FD658_00000430:
    addi r4, r1, 0x8c
    lfs f2, 0x94(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x40(r1)
    bl fn_805F98D0
    lfs f8, 0x40(r1)
    addis r5, r28, 0x4
    lfs f7, 0x3c(r1)
    mr r4, r5
    lfs f0, 0x38(r1)
    fneg f8, f8
    fneg f7, f7
    li r0, 0x3
    fneg f0, f0
    addi r6, r1, 0x44
    stfs f7, 0x48(r1)
    frsp f2, f8
    stfs f0, 0x44(r1)
    subi r5, r5, 0x757c
    mr r3, r28
    psq_l f1, 0x0(r6), 0, 0
    stfs f8, 0x4c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    stw r30, -0x7570(r4)
    stw r31, -0x756c(r4)
    stw r0, -0x7560(r4)
    subi r4, r4, 0x75a4
    bl fn_800FDF14
    addi r11, r1, 0x210
    bl _restgpr_25
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_800FDB20(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    mr r25, r5
    mr r27, r7
    mr r23, r3
    mr r28, r8
    mr r24, r4
    lwz r31, 0x58(r1)
    mr r26, r6
    mr r29, r9
    mr r30, r10
    mr r3, r25
    mr r4, r28
    mr r5, r27
    bl fn_801533C8
    cmpwi r3, 0x0
    beq lbl_fn_800FDB20_00000520
    li r3, 0x0
    b lbl_fn_800FDB20_000007F0
lbl_fn_800FDB20_00000520:
    lwz r0, 0x7e8(r25)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_800FDB20_000005DC
    mr r3, r27
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_800FDB20_000005DC
    cmpwi r27, 0x0
    beq lbl_fn_800FDB20_000005DC
    lwz r0, 0xac(r27)
    rlwinm r3, r0, 0, 3, 3
    subis r0, r3, 0x1000
    cmplwi r0, 0x0
    beq lbl_fn_800FDB20_000005DC
    cmpwi r24, 0x0
    beq lbl_fn_800FDB20_00000580
    lwz r3, 0x60(r24)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x14
    bne lbl_fn_800FDB20_00000580
    lwz r3, lbl_8087F430
    li r4, 0x13c
    bl fn_803750E4
lbl_fn_800FDB20_00000580:
    lwz r3, 0x24(r1)
    li r12, 0x0
    li r11, -0x1
    li r0, 0x1
    clrlwi r10, r3, 4
    stw r12, 0x10(r1)
    mr r3, r23
    mr r5, r29
    stw r12, 0x14(r1)
    mr r6, r24
    mr r7, r25
    addi r4, r1, 0x8
    stw r12, 0x18(r1)
    li r8, 0x108
    li r9, 0x0
    stw r11, 0x1c(r1)
    stw r10, 0x24(r1)
    stw r11, 0x20(r1)
    stw r12, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_80108C10
    li r3, 0x4
    b lbl_fn_800FDB20_000007F0
lbl_fn_800FDB20_000005DC:
    addis r3, r23, 0x4
    subi r3, r3, 0x75a4
    bl fn_800E2A24
    addis r4, r23, 0x4
    li r3, 0x1
    stw r24, -0x75a4(r4)
    subi r5, r4, 0x7588
    subi r6, r4, 0x757c
    li r0, 0x0
    stw r25, -0x75a0(r4)
    cmpwi r24, 0x0
    stw r26, -0x7564(r4)
    stw r27, -0x759c(r4)
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    stfs f2, -0x7580(r4)
    lfs f2, 0x8(r30)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, -0x7574(r4)
    stw r28, -0x7570(r4)
    stw r31, -0x756c(r4)
    stw r3, -0x7568(r4)
    stw r3, -0x7560(r4)
    stw r0, -0x755c(r4)
    lwz r3, 0x8f0(r25)
    lwz r0, 0x3c(r27)
    subf r26, r3, r0
    beq lbl_fn_800FDB20_000006A8
    cmpwi r25, 0x0
    beq lbl_fn_800FDB20_000006A8
    mr r3, r25
    li r4, 0x0
    lis r5, 0x40
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_800FDB20_000006A8
    cmpwi r26, 0x4
    bgt lbl_fn_800FDB20_00000694
    subi r3, r26, 0x2
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r26, r3, r0
    b lbl_fn_800FDB20_000006A8
lbl_fn_800FDB20_00000694:
    subi r3, r26, 0x1
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r26, r3, r0
lbl_fn_800FDB20_000006A8:
    cmpwi r24, 0x0
    beq lbl_fn_800FDB20_000006F8
    addi r3, r24, 0x7d4
    li r4, 0x43
    li r5, -0x1
    bl fn_80134168
    cmpwi r3, 0xf
    ble lbl_fn_800FDB20_000006F8
    addi r3, r24, 0x7d4
    li r4, 0x43
    li r5, -0x1
    bl fn_80134168
    lis r4, 0x6666
    addi r0, r3, 0xa
    addi r3, r4, 0x6667
    mulhw r0, r3, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    divw r26, r26, r0
lbl_fn_800FDB20_000006F8:
    addis r5, r23, 0x4
    mr r3, r23
    mr r4, r26
    subi r5, r5, 0x75a4
    bl fn_8010B250
    addis r5, r23, 0x4
    fmr f5, f1
    mr r3, r5
    mr r4, r5
    subi r5, r5, 0x757c
    psq_l f1, 0x0(r5), 0, 0
    subi r3, r3, 0x7594
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r23
    lfs f2, 0x8(r5)
    lfs f4, -0x7594(r4)
    lfs f3, -0x7590(r4)
    fmuls f0, f2, f5
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    stfs f0, -0x758c(r4)
    stfs f4, -0x7594(r4)
    stfs f3, -0x7590(r4)
    subi r4, r4, 0x75a4
    bl fn_800FDF14
    cmpwi r24, 0x0
    beq lbl_fn_800FDB20_000007EC
    lwz r0, 0x48(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800FDB20_000007EC
    lwz r0, 0x12a4(r24)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDB20_00000788
    addis r3, r23, 0x4
    lfs f4, -0x75c8(r3)
    b lbl_fn_800FDB20_0000078C
lbl_fn_800FDB20_00000788:
    lfs f4, lbl_80881494
lbl_fn_800FDB20_0000078C:
    addis r3, r23, 0x4
    lfs f0, -0x75e8(r3)
    lfs f3, -0x75fc(r3)
    fmuls f4, f0, f4
    lfs f0, -0x75f4(r3)
    fadds f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_800FDB20_000007B0
    b lbl_fn_800FDB20_000007B4
lbl_fn_800FDB20_000007B0:
    fmr f3, f0
lbl_fn_800FDB20_000007B4:
    lfs f5, lbl_80881478
    fcmpo cr0, f5, f3
    ble lbl_fn_800FDB20_000007C4
    b lbl_fn_800FDB20_000007E4
lbl_fn_800FDB20_000007C4:
    addis r3, r23, 0x4
    lfs f3, -0x75fc(r3)
    lfs f0, -0x75f4(r3)
    fadds f5, f3, f4
    fcmpo cr0, f5, f0
    bge lbl_fn_800FDB20_000007E0
    b lbl_fn_800FDB20_000007E4
lbl_fn_800FDB20_000007E0:
    fmr f5, f0
lbl_fn_800FDB20_000007E4:
    addis r3, r23, 0x4
    stfs f5, -0x75fc(r3)
lbl_fn_800FDB20_000007EC:
    li r3, 0x0
lbl_fn_800FDB20_000007F0:
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800FDE60(void)
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
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    addis r3, r3, 0x4
    subi r3, r3, 0x75a4
    bl fn_800E2A24
    addis r4, r28, 0x4
    li r3, 0x2710
    stw r29, -0x75a4(r4)
    stw r30, -0x75a0(r4)
    bl fn_80219E6C
    addis r4, r28, 0x4
    li r5, 0x0
    lwz r0, -0x7598(r4)
    li r6, 0x3
    lfs f2, 0x8(r31)
    subi r7, r4, 0x757c
    psq_l f1, 0x0(r31), 0, 0
    oris r0, r0, 0x1
    stw r3, -0x759c(r4)
    mr r3, r28
    stw r6, -0x7560(r4)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, -0x7574(r4)
    stw r5, -0x755c(r4)
    stw r5, -0x7558(r4)
    stw r0, -0x7598(r4)
    subi r4, r4, 0x75a4
    bl fn_800FDF14
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800FDF14(void)
{
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    stw r0, 0x454(r1)
    addi r11, r1, 0x420
    stfd f31, 0x440(r1)
    psq_st f31, 0x448(r1), 0, 0
    stfd f30, 0x430(r1)
    psq_st f30, 0x438(r1), 0, 0
    stfd f29, 0x420(r1)
    psq_st f29, 0x428(r1), 0, 0
    bl _savegpr_21
    lwz r28, 0x4(r4)
    lis r0, 0x4330
    lis r31, lbl_807355C8@ha
    stw r0, 0x3d0(r1)
    cmpwi r28, 0x0
    lwz r29, 0x0(r4)
    stw r0, 0x3d8(r1)
    mr r25, r3
    lwz r27, 0x8(r4)
    mr r26, r4
    addi r31, r31, lbl_807355C8@l
    beq lbl_fn_800FDF14_00000920
    cmpwi r27, 0x0
    bne lbl_fn_800FDF14_00000928
lbl_fn_800FDF14_00000920:
    li r3, 0x0
    b lbl_fn_800FDF14_000027E0
lbl_fn_800FDF14_00000928:
    lwz r0, 0x54c(r28)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_800FDF14_00000954
    lwz r0, 0xac(r27)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    beq lbl_fn_800FDF14_00000954
    li r3, 0x0
    b lbl_fn_800FDF14_000027E0
lbl_fn_800FDF14_00000954:
    mr r3, r25
    mr r4, r29
    mr r5, r28
    bl fn_8010B180
    cmpwi r3, 0x0
    bne lbl_fn_800FDF14_00000974
    li r3, 0x0
    b lbl_fn_800FDF14_000027E0
lbl_fn_800FDF14_00000974:
    lwz r0, 0x44(r26)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_000009F8
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_800FDF14_00000994
    lfs f3, lbl_80881494
    b lbl_fn_800FDF14_00000998
lbl_fn_800FDF14_00000994:
    lfs f3, lbl_808814CC
lbl_fn_800FDF14_00000998:
    lfs f0, lbl_80881478
    addi r3, r1, 0x158
    stfs f0, 0xac(r1)
    li r4, 0x79
    stfs f0, 0xb0(r1)
    stfs f3, 0xb4(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0xac
    addi r3, r1, 0x158
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xac
    addi r4, r26, 0x28
    bl fn_805F9990
    fmr f30, f1
    lfd f1, 0x8f8(r31)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f30, f0
    bge lbl_fn_800FDF14_000009F8
    lwz r0, 0xc(r26)
    ori r0, r0, 0x10
    stw r0, 0xc(r26)
lbl_fn_800FDF14_000009F8:
    lwz r0, 0x44(r26)
    cmpwi r0, 0x1
    bne lbl_fn_800FDF14_00000B40
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00000B40
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_00000B40
    lis r4, lbl_80736040@ha
    addi r24, r28, 0xb0
    addi r4, r4, lbl_80736040@l
    li r5, 0x0
    mr r3, r24
    addi r4, r4, 0x1
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800FDF14_00000A44
    li r24, 0x0
    b lbl_fn_800FDF14_00000A50
lbl_fn_800FDF14_00000A44:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r24)
    add r24, r3, r0
lbl_fn_800FDF14_00000A50:
    cmpwi r24, 0x0
    beq lbl_fn_800FDF14_00000B40
    lwz r0, 0x12a4(r28)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_800FDF14_00000B40
    cmpwi r28, 0x0
    bne lbl_fn_800FDF14_00000A78
    li r0, 0x0
    b lbl_fn_800FDF14_00000AC4
lbl_fn_800FDF14_00000A78:
    lwz r23, 0x60(r28)
    cmpwi r23, 0x0
    bne lbl_fn_800FDF14_00000A8C
    li r0, 0x0
    b lbl_fn_800FDF14_00000AC4
lbl_fn_800FDF14_00000A8C:
    addi r22, r31, 0x8d0
    li r30, 0x0
lbl_fn_800FDF14_00000A94:
    lwz r3, 0x10(r23)
    lwz r4, 0x0(r22)
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800FDF14_00000AB0
    li r0, 0x1
    b lbl_fn_800FDF14_00000AC4
lbl_fn_800FDF14_00000AB0:
    addi r30, r30, 0x1
    addi r22, r22, 0x4
    cmpwi r30, 0x6
    blt lbl_fn_800FDF14_00000A94
    li r0, 0x0
lbl_fn_800FDF14_00000AC4:
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_00000B40
    lfs f6, 0x1c(r24)
    addi r3, r1, 0x5c
    lfs f3, 0x20(r26)
    lfs f5, 0x2c(r24)
    lfs f7, 0xc(r24)
    fsubs f8, f6, f3
    lfs f4, 0x24(r26)
    lfs f0, 0x1c(r26)
    lfs f9, 0x5b4(r28)
    fsubs f4, f5, f4
    lfs f3, lbl_80881540
    fsubs f0, f7, f0
    stfs f7, 0x50(r1)
    fmuls f30, f9, f3
    stfs f6, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f4, 0x64(r1)
    bl fn_805F9920
    fmuls f0, f30, f30
    fcmpo cr0, f1, f0
    bge lbl_fn_800FDF14_00000B40
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    oris r3, r3, 0x8000
    stw r3, 0xc(r26)
    oris r0, r0, 0x8000
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00000B40:
    mr r3, r28
    li r4, 0x4f60
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000B70
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    ori r3, r3, 0x100
    stw r3, 0xc(r26)
    ori r0, r0, 0x100
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00000B70:
    lwz r3, 0x4(r27)
    subi r0, r3, 0x1fa
    cmplwi r0, 0x2
    bgt lbl_fn_800FDF14_00000B98
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    clrlwi r3, r3, 1
    stw r3, 0xc(r26)
    clrlwi r0, r0, 1
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00000B98:
    mr r3, r25
    mr r4, r26
    bl fn_8010B398
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000BC4
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    oris r3, r3, 0x200
    stw r3, 0xc(r26)
    oris r0, r0, 0x200
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00000BC4:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00000E98
    mr r3, r29
    mr r4, r28
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800FDF14_00000E98
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00000E5C
    cmpwi r28, 0x0
    beq lbl_fn_800FDF14_00000E5C
    addi r3, r29, 0x7d4
    li r4, 0x3c
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000E5C
    lwz r3, 0x5c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000C1C
    lwz r30, 0xd0(r3)
    b lbl_fn_800FDF14_00000C20
lbl_fn_800FDF14_00000C1C:
    li r30, 0x0
lbl_fn_800FDF14_00000C20:
    cmpwi r30, 0x0
    ble lbl_fn_800FDF14_00000E5C
    cmpwi r28, 0x0
    bne lbl_fn_800FDF14_00000C38
    li r4, -0x1
    b lbl_fn_800FDF14_00000C78
lbl_fn_800FDF14_00000C38:
    addis r3, r25, 0x3
    mr r5, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00000C74
lbl_fn_800FDF14_00000C54:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r28
    bne lbl_fn_800FDF14_00000C68
    b lbl_fn_800FDF14_00000C78
lbl_fn_800FDF14_00000C68:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_800FDF14_00000C54
lbl_fn_800FDF14_00000C74:
    li r4, -0x1
lbl_fn_800FDF14_00000C78:
    cmpwi r4, 0x0
    blt lbl_fn_800FDF14_00000C94
    mulli r0, r4, 0x934
    addis r3, r25, 0x1
    add r3, r3, r0
    subi r24, r3, 0x3410
    b lbl_fn_800FDF14_00000C98
lbl_fn_800FDF14_00000C94:
    li r24, 0x0
lbl_fn_800FDF14_00000C98:
    cmpwi r24, 0x0
    beq lbl_fn_800FDF14_00000E5C
    lbz r0, 0x92e(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_00000E5C
    lwz r0, 0x12a4(r28)
    li r4, 0x51
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_800FDF14_00000CC4
    ori r4, r4, 0x20
lbl_fn_800FDF14_00000CC4:
    mr r3, r30
    bl fn_8021E48C
    cmpwi r3, 0x0
    blt lbl_fn_800FDF14_00000E5C
    lwz r4, lbl_8087F4F0
    li r12, 0x0
    stw r12, 0x1c(r1)
    mr r6, r3
    addis r11, r4, 0x1
    addi r0, r1, 0x14
    stw r12, 0x18(r1)
    mr r4, r30
    addi r9, r1, 0x1c
    addi r10, r1, 0x18
    stw r12, 0x14(r1)
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    stw r12, -0x24f0(r11)
    lwz r3, lbl_8087F4F0
    stw r0, 0x8(r1)
    bl fn_80444020
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000E4C
    lwz r0, 0x1c(r1)
    li r3, -0x1
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00000D38
    mr r3, r0
lbl_fn_800FDF14_00000D38:
    bl fn_80211480
    lwz r0, 0x1c(r1)
    mr r30, r3
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00000E4C
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00000E4C
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000E4C
    li r0, 0x1
    stb r0, 0x92e(r24)
    addi r3, r29, 0x7d4
    li r4, 0x3c
    bl fn_80133EE8
    mr r4, r3
    mr r3, r25
    mr r5, r29
    bl fn_80109864
    lwz r4, lbl_8087F1E4
    lwz r3, 0x60(r29)
    lwz r4, 0x7c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_800FDF14_00000D9C
    b lbl_fn_800FDF14_00000DA0
lbl_fn_800FDF14_00000D9C:
    la r4, lbl_808813D0
lbl_fn_800FDF14_00000DA0:
    lwz r5, 0x4(r3)
    addi r3, r1, 0x1d0
    lwz r6, 0x8(r30)
    lwz r7, 0x18(r1)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F0A8
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00000DE8
    lwz r3, lbl_8087F528
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000DE8
    addi r4, r1, 0x1d0
    li r5, -0x3301
    li r6, 0x0
    li r7, 0x0
    bl fn_8047961C
lbl_fn_800FDF14_00000DE8:
    addi r3, r31, 0x808
    lfs f1, lbl_80881494
    lwz r4, 0x54(r3)
    addi r3, r1, 0x10
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000E2C
    lwz r4, 0x1c(r1)
    lwz r5, 0x18(r1)
    lwz r6, 0x14(r1)
    bl fn_803E5E64
lbl_fn_800FDF14_00000E2C:
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    oris r3, r3, 0x200
    oris r0, r0, 0x200
    ori r3, r3, 0x200
    stw r3, 0xc(r26)
    ori r0, r0, 0x200
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00000E4C:
    lwz r3, lbl_8087F4F0
    li r0, 0x1
    addis r3, r3, 0x1
    stw r0, -0x24f0(r3)
lbl_fn_800FDF14_00000E5C:
    addi r3, r29, 0x7d4
    li r4, 0x31
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00000E98
    lfs f4, 0x10(r26)
    lfs f5, lbl_80881510
    lfs f3, 0x14(r26)
    lfs f0, 0x18(r26)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r26)
    stfs f3, 0x14(r26)
    stfs f0, 0x18(r26)
lbl_fn_800FDF14_00000E98:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00000F9C
    lbz r0, 0x1(r27)
    extsb. r0, r0
    bne lbl_fn_800FDF14_00000EB8
    lwz r0, 0x44(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00000F00
lbl_fn_800FDF14_00000EB8:
    cmpwi r27, 0x0
    beq lbl_fn_800FDF14_00000EF4
    lwz r0, 0x4(r27)
    cmpwi r0, 0xcc
    beq lbl_fn_800FDF14_00000EEC
    cmpwi r0, 0xd1
    beq lbl_fn_800FDF14_00000EEC
    cmpwi r0, 0xd5
    beq lbl_fn_800FDF14_00000EEC
    cmpwi r0, 0x5bc
    beq lbl_fn_800FDF14_00000EEC
    cmpwi r0, 0x658
    bne lbl_fn_800FDF14_00000EF4
lbl_fn_800FDF14_00000EEC:
    li r0, 0x1
    b lbl_fn_800FDF14_00000EF8
lbl_fn_800FDF14_00000EF4:
    li r0, 0x0
lbl_fn_800FDF14_00000EF8:
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00000F9C
lbl_fn_800FDF14_00000F00:
    mr r3, r29
    bl fn_801799BC
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_800FDF14_00000F20
    lwz r0, 0xc(r26)
    oris r0, r0, 0x80
    stw r0, 0xc(r26)
lbl_fn_800FDF14_00000F20:
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_800FDF14_00000F38
    lwz r0, 0xc(r26)
    oris r0, r0, 0x100
    stw r0, 0xc(r26)
lbl_fn_800FDF14_00000F38:
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_800FDF14_00000F50
    lwz r0, 0xc(r26)
    oris r0, r0, 0x400
    stw r0, 0xc(r26)
lbl_fn_800FDF14_00000F50:
    rlwinm r0, r3, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_800FDF14_00000F68
    lwz r0, 0xc(r26)
    oris r0, r0, 0x800
    stw r0, 0xc(r26)
lbl_fn_800FDF14_00000F68:
    rlwinm r0, r3, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_800FDF14_00000F80
    lwz r0, 0xc(r26)
    ori r0, r0, 0x4
    stw r0, 0xc(r26)
lbl_fn_800FDF14_00000F80:
    lis r3, 0xd80
    lwz r4, 0xc(r26)
    addi r0, r3, 0x4
    lwz r3, 0x94(r26)
    and r0, r4, r0
    or r0, r3, r0
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00000F9C:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_0000106C
    lwz r0, 0x50(r26)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_800FDF14_0000106C
    lfs f30, lbl_80881478
    addi r3, r29, 0x7d4
    li r4, 0x4
    li r5, -0x1
    bl fn_80134168
    xoris r0, r3, 0x8000
    stw r0, 0x3d4(r1)
    lfd f4, 0x8e8(r31)
    lfd f0, 0x3d0(r1)
    lfs f3, lbl_808814C4
    fsubs f4, f0, f4
    lfs f0, 0x8d4(r29)
    fdivs f3, f4, f3
    fadds f30, f30, f3
    fadds f30, f30, f0
    bl fn_80680CF8
    lis r4, 0x4178
    lfd f4, 0x8e8(r31)
    addi r0, r4, 0x749f
    lfs f0, lbl_8088152C
    mulhw r0, r0, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x3dc(r1)
    lfd f3, 0x3d8(r1)
    fsubs f3, f3, f4
    fdivs f0, f3, f0
    fcmpo cr0, f0, f30
    bge lbl_fn_800FDF14_0000106C
    lfs f4, 0x10(r26)
    lfs f5, lbl_80881490
    lfs f3, 0x14(r26)
    lfs f0, 0x18(r26)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    lwz r0, 0xc(r26)
    fmuls f0, f0, f5
    stfs f4, 0x10(r26)
    ori r0, r0, 0x80
    stw r0, 0xc(r26)
    stfs f3, 0x14(r26)
    stfs f0, 0x18(r26)
lbl_fn_800FDF14_0000106C:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_000010C8
    addi r3, r29, 0x7d4
    li r4, 0x30
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001094
    lwz r0, 0xc(r26)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0xc(r26)
lbl_fn_800FDF14_00001094:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_800FDF14_000010C8
    lwz r0, 0x560(r29)
    cmpwi r0, 0x6
    beq lbl_fn_800FDF14_000010BC
    cmpwi r0, 0x7
    beq lbl_fn_800FDF14_000010BC
    cmpwi r0, 0xb
    bne lbl_fn_800FDF14_000010C8
lbl_fn_800FDF14_000010BC:
    lwz r0, 0xc(r26)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0xc(r26)
lbl_fn_800FDF14_000010C8:
    lwz r3, 0x4(r27)
    subi r0, r3, 0x1fa
    cmplwi r0, 0x2
    bgt lbl_fn_800FDF14_000010F0
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    rlwinm r3, r3, 0, 25, 23
    stw r3, 0xc(r26)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x94(r26)
lbl_fn_800FDF14_000010F0:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00001158
    lwz r0, 0xc(r26)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_800FDF14_0000111C
    addi r3, r29, 0x7d4
    li r4, -0x1
    li r5, 0x13
    bl fn_80133E24
    b lbl_fn_800FDF14_00001158
lbl_fn_800FDF14_0000111C:
    addi r23, r29, 0xadc
    li r22, 0x0
    b lbl_fn_800FDF14_0000114C
lbl_fn_800FDF14_00001128:
    lwz r0, 0x8(r23)
    cmpwi r0, 0x13
    bne lbl_fn_800FDF14_00001144
    mr r3, r25
    mr r4, r23
    mr r5, r29
    bl fn_80109864
lbl_fn_800FDF14_00001144:
    addi r23, r23, 0x14
    addi r22, r22, 0x1
lbl_fn_800FDF14_0000114C:
    lwz r0, 0xad8(r29)
    cmplw r22, r0
    blt lbl_fn_800FDF14_00001128
lbl_fn_800FDF14_00001158:
    lwz r0, 0xac(r27)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_800FDF14_00001174
    li r0, 0x0
    stw r0, 0x4c(r26)
lbl_fn_800FDF14_00001174:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00001188
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_0000119C
lbl_fn_800FDF14_00001188:
    cmpwi r28, 0x0
    beq lbl_fn_800FDF14_000011A8
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_000011A8
lbl_fn_800FDF14_0000119C:
    lwz r0, 0xc(r26)
    oris r0, r0, 0x4
    stw r0, 0xc(r26)
lbl_fn_800FDF14_000011A8:
    lwz r0, 0xac(r27)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_800FDF14_000011C8
    lwz r0, 0xc(r26)
    oris r0, r0, 0x4
    stw r0, 0xc(r26)
lbl_fn_800FDF14_000011C8:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_000011F0
    addi r3, r29, 0x7d4
    li r4, 0x40
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_000011F0
    lwz r0, 0xc(r26)
    ori r0, r0, 0x8000
    stw r0, 0xc(r26)
lbl_fn_800FDF14_000011F0:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r26
    li r5, 0x1
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_000013A4
    addi r3, r29, 0x7d4
    li r4, -0x1
    li r5, 0x1a
    bl fn_80133F6C
    cmpwi r3, 0x0
    ble lbl_fn_800FDF14_00001278
    lwz r0, 0x80(r26)
    srwi. r0, r0, 31
    bne lbl_fn_800FDF14_00001248
    addi r3, r29, 0x7d4
    li r4, -0x1
    li r5, 0x1a
    bl fn_80133E24
lbl_fn_800FDF14_00001248:
    addi r3, r29, 0x7d4
    li r4, -0x1
    li r5, 0x1a
    bl fn_80133F6C
    cmpwi r3, 0x0
    ble lbl_fn_800FDF14_00001278
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    oris r3, r3, 0x200
    stw r3, 0xc(r26)
    oris r0, r0, 0x200
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00001278:
    addi r3, r29, 0x7d4
    li r4, 0x18
    li r5, -0x1
    bl fn_80133F6C
    cmpwi r3, 0x0
    ble lbl_fn_800FDF14_00001304
    lwz r3, 0x94(r26)
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_800FDF14_000012C4
    rlwinm r0, r3, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_800FDF14_000012C4
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_800FDF14_000012C4
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_800FDF14_000012D4
lbl_fn_800FDF14_000012C4:
    addi r3, r29, 0x7d4
    li r4, 0x18
    li r5, -0x1
    bl fn_80133E24
lbl_fn_800FDF14_000012D4:
    addi r3, r29, 0x7d4
    li r4, -0x1
    li r5, -0x1
    bl fn_80133F6C
    cmpwi r3, 0x0
    bgt lbl_fn_800FDF14_00001304
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    rlwinm r3, r3, 0, 7, 5
    stw r3, 0xc(r26)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00001304:
    addi r3, r29, 0x7d4
    li r4, 0x23
    li r5, -0x1
    bl fn_80133F6C
    cmpwi r3, 0x0
    ble lbl_fn_800FDF14_00001368
    lwz r0, 0x80(r26)
    srwi. r0, r0, 31
    beq lbl_fn_800FDF14_00001338
    addi r3, r29, 0x7d4
    li r4, 0x23
    li r5, -0x1
    bl fn_80133E24
lbl_fn_800FDF14_00001338:
    addi r3, r29, 0x7d4
    li r4, -0x1
    li r5, -0x1
    bl fn_80133F6C
    cmpwi r3, 0x0
    bgt lbl_fn_800FDF14_00001368
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    rlwinm r3, r3, 0, 7, 5
    stw r3, 0xc(r26)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x94(r26)
lbl_fn_800FDF14_00001368:
    lwz r0, 0x64(r26)
    cmpwi r0, 0x1
    bne lbl_fn_800FDF14_00001384
    lwz r0, 0x94(r26)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_800FDF14_000013A4
lbl_fn_800FDF14_00001384:
    li r0, 0x0
    stw r0, 0xad8(r29)
    lwz r3, 0xc(r26)
    lwz r0, 0x94(r26)
    rlwinm r3, r3, 0, 7, 5
    stw r3, 0xc(r26)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x94(r26)
lbl_fn_800FDF14_000013A4:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_000014E0
    lwz r0, 0xac(r27)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_800FDF14_000014E0
    lwz r3, 0x154(r1)
    li r8, 0x0
    li r7, -0x1
    li r0, 0x1
    clrlwi r4, r3, 4
    stw r8, 0x13c(r1)
    lfd f4, 0x8e8(r31)
    addi r3, r29, 0x7d4
    stw r8, 0x140(r1)
    li r5, 0x0
    lfs f0, lbl_80881500
    li r6, 0x0
    stw r8, 0x144(r1)
    stw r8, 0x148(r1)
    stw r7, 0x14c(r1)
    stw r4, 0x154(r1)
    stw r7, 0x150(r1)
    stw r0, 0x138(r1)
    lwz r0, 0x68(r26)
    xoris r0, r0, 0x8000
    stw r0, 0x3d4(r1)
    lfd f3, 0x3d0(r1)
    fsubs f3, f3, f4
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x3e0(r1)
    lwz r0, 0x3e4(r1)
    neg r4, r0
    stw r4, 0x13c(r1)
    bl fn_8012DF7C
    lwz r0, 0x90(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_000014E0
    lwz r4, 0x40(r26)
    mr r3, r29
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001474
    lwz r4, 0x40(r26)
    mr r3, r29
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r1, 0xa0
    lfs f2, 0xc(r3)
    stfs f2, 0xa8(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_800FDF14_00001488
lbl_fn_800FDF14_00001474:
    psq_l f1, 0x528(r29), 0, 0
    addi r3, r1, 0xa0
    lfs f2, 0x530(r29)
    stfs f2, 0xa8(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_800FDF14_00001488:
    lfs f6, lbl_80881478
    mr r3, r25
    lfs f5, lbl_808814E8
    mr r6, r29
    lfs f4, 0xa0(r1)
    mr r7, r29
    lfs f3, 0xa4(r1)
    addi r4, r1, 0x138
    lfs f0, 0xa8(r1)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x44(r1)
    fadds f0, f0, f6
    addi r5, r1, 0xa0
    stfs f5, 0x48(r1)
    li r8, 0x0
    stfs f6, 0x4c(r1)
    li r9, 0x0
    stfs f4, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f0, 0xa8(r1)
    bl fn_80108C10
lbl_fn_800FDF14_000014E0:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00001684
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDF14_00001684
    lwz r0, 0x68(r26)
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00001684
    lwz r3, lbl_8087F0A8
    lfs f0, lbl_80881478
    lfs f4, 0x258(r3)
    fcmpo cr0, f4, f0
    ble lbl_fn_800FDF14_00001684
    xoris r0, r0, 0x8000
    stw r0, 0x3dc(r1)
    li r9, 0x0
    li r8, -0x1
    lfd f3, 0x8e8(r31)
    li r7, 0x1
    lfd f0, 0x3d8(r1)
    addi r3, r29, 0x7d4
    lwz r0, 0x134(r1)
    li r5, 0x0
    fsubs f0, f0, f3
    stw r9, 0x120(r1)
    clrlwi r4, r0, 4
    li r6, 0x0
    stw r9, 0x124(r1)
    fmuls f0, f0, f4
    stw r9, 0x128(r1)
    fctiwz f0, f0
    stw r8, 0x12c(r1)
    stfd f0, 0x3e0(r1)
    lwz r0, 0x3e4(r1)
    stw r4, 0x134(r1)
    neg r27, r0
    stw r8, 0x130(r1)
    mr r4, r27
    stw r7, 0x118(r1)
    stw r27, 0x11c(r1)
    bl fn_8012DF7C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x470(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00001684
    lwz r0, 0x90(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00001684
    addis r3, r25, 0x4
    lwz r0, -0x1d08(r3)
    cmpw r27, r0
    beq lbl_fn_800FDF14_000015C0
    lwz r4, -0x1d0c(r3)
    lfs f0, lbl_80881478
    stfs f0, 0x100(r4)
    stw r27, -0x1d08(r3)
lbl_fn_800FDF14_000015C0:
    lis r4, lbl_80779DF4@ha
    addi r3, r1, 0x90
    addi r4, r4, lbl_80779DF4@l
    neg r5, r27
    addi r4, r4, 0x10
    crclr 6
    bl fn_800DD3FC
    addis r3, r25, 0x4
    lis r27, lbl_80736040@ha
    lwz r4, -0x1d0c(r3)
    addi r27, r27, lbl_80736040@l
    addi r3, r27, 0x231
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    addi r5, r1, 0x90
    bl fn_801FEE08
    addis r4, r25, 0x4
    addi r3, r27, 0x239
    lwz r4, -0x1d0c(r4)
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    addi r5, r1, 0x90
    bl fn_801FEE08
    lwz r0, 0x940(r29)
    addis r3, r25, 0x4
    lwz r4, -0x1d0c(r3)
    addi r3, r27, 0x244
    xoris r0, r0, 0x8000
    stw r0, 0x3d4(r1)
    lfd f4, 0x8e8(r31)
    addi r23, r4, 0x58
    lfd f3, 0x3d0(r1)
    lfs f0, 0x7d8(r29)
    fsubs f3, f3, f4
    fdivs f30, f0, f3
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    addis r3, r25, 0x4
    lwz r3, -0x1d0c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_800FDF14_00001684:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00001808
    addi r3, r29, 0x7d4
    li r4, 0x23
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001808
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800FDF14_00001808
    lwz r3, 0x114(r1)
    li r8, 0x0
    li r7, -0x1
    li r0, 0x1
    clrlwi r6, r3, 4
    stw r8, 0xfc(r1)
    addi r3, r29, 0x7d4
    li r4, 0x23
    stw r8, 0x100(r1)
    li r5, -0x1
    stw r8, 0x104(r1)
    stw r8, 0x108(r1)
    stw r7, 0x10c(r1)
    stw r6, 0x114(r1)
    stw r7, 0x110(r1)
    stw r0, 0xf8(r1)
    bl fn_80133F18
    cmpwi r3, 0x0
    ble lbl_fn_800FDF14_0000171C
    xoris r0, r3, 0x8000
    stw r0, 0x3dc(r1)
    lfd f4, 0x8e8(r31)
    lfd f3, 0x3d8(r1)
    lfs f0, lbl_808814C4
    fsubs f3, f3, f4
    fdivs f4, f3, f0
    b lbl_fn_800FDF14_00001720
lbl_fn_800FDF14_0000171C:
    lfs f4, lbl_80881510
lbl_fn_800FDF14_00001720:
    lwz r0, 0x68(r26)
    addi r3, r28, 0x7d4
    lfd f3, 0x8e8(r31)
    li r5, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x3d4(r1)
    lwz r0, 0xfc(r1)
    li r6, 0x0
    lfd f0, 0x3d0(r1)
    fsubs f0, f0, f3
    fmuls f0, f0, f4
    fctiwz f0, f0
    stfd f0, 0x3e0(r1)
    lwz r4, 0x3e4(r1)
    subf r4, r4, r0
    stw r4, 0xfc(r1)
    bl fn_8012DF7C
    lwz r4, 0x40(r26)
    mr r3, r28
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_0000179C
    lwz r4, 0x40(r26)
    mr r3, r28
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r1, 0x80
    lfs f2, 0xc(r3)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_800FDF14_000017B0
lbl_fn_800FDF14_0000179C:
    psq_l f1, 0x528(r28), 0, 0
    addi r3, r1, 0x80
    lfs f2, 0x530(r28)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_800FDF14_000017B0:
    lfs f6, lbl_80881478
    mr r3, r25
    lfs f5, lbl_8088148C
    mr r6, r28
    lfs f4, 0x80(r1)
    mr r7, r28
    lfs f3, 0x84(r1)
    addi r4, r1, 0xf8
    lfs f0, 0x88(r1)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x38(r1)
    fadds f0, f0, f6
    addi r5, r1, 0x80
    stfs f5, 0x3c(r1)
    li r8, 0x0
    stfs f6, 0x40(r1)
    li r9, 0x0
    stfs f4, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    bl fn_80108C10
lbl_fn_800FDF14_00001808:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00001C34
    addi r23, r29, 0x7d4
    li r0, 0x0
    stw r0, 0x188(r1)
    mr r3, r23
    li r27, 0x0
    li r30, 0x0
    li r4, 0x7
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_000018B0
    mr r3, r23
    li r4, 0x7
    li r5, -0x1
    bl fn_80133F18
    xoris r0, r3, 0x8000
    stw r0, 0x3d4(r1)
    lwz r0, 0x68(r26)
    addi r3, r1, 0x18c
    lfd f5, 0x8e8(r31)
    lfd f0, 0x3d0(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x3dc(r1)
    fsubs f3, f0, f5
    lfs f0, lbl_808814C4
    lwz r0, 0x188(r1)
    lfd f4, 0x3d8(r1)
    fdivs f0, f3, f0
    slwi r0, r0, 2
    add. r3, r3, r0
    fsubs f3, f4, f5
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x3e0(r1)
    lwz r27, 0x3e4(r1)
    beq lbl_fn_800FDF14_000018A0
    stw r29, 0x0(r3)
lbl_fn_800FDF14_000018A0:
    lwz r3, 0x188(r1)
    addi r0, r3, 0x1
    stw r0, 0x188(r1)
    b lbl_fn_800FDF14_00001AAC
lbl_fn_800FDF14_000018B0:
    mr r3, r23
    li r4, 0x8
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_000019E8
    mr r3, r23
    li r4, 0x8
    li r5, -0x1
    bl fn_80133F18
    xoris r0, r3, 0x8000
    stw r0, 0x3d4(r1)
    lwz r0, 0x68(r26)
    lfd f5, 0x8e8(r31)
    lfd f0, 0x3d0(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x3dc(r1)
    fsubs f3, f0, f5
    lfs f0, lbl_808814C4
    lwz r3, lbl_8087F8A0
    lfd f4, 0x3d8(r1)
    fdivs f0, f3, f0
    lwz r3, 0x48(r3)
    fsubs f3, f4, f5
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x3e0(r1)
    lwz r27, 0x3e4(r1)
    b lbl_fn_800FDF14_000019DC
lbl_fn_800FDF14_00001920:
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r6, r7, 0, 29, 29
    cmplwi r6, 0x4
    beq lbl_fn_800FDF14_0000194C
    clrlwi r6, r7, 31
    cmplwi r6, 0x1
    beq lbl_fn_800FDF14_0000194C
    li r4, 0x1
lbl_fn_800FDF14_0000194C:
    cmpwi r4, 0x0
    beq lbl_fn_800FDF14_00001968
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_800FDF14_00001968
    li r0, 0x1
lbl_fn_800FDF14_00001968:
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_0000199C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800FDF14_00001990
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_800FDF14_00001990
    li r4, 0x1
lbl_fn_800FDF14_00001990:
    cmpwi r4, 0x0
    bne lbl_fn_800FDF14_0000199C
    li r5, 0x1
lbl_fn_800FDF14_0000199C:
    cmpwi r5, 0x0
    beq lbl_fn_800FDF14_000019D8
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_800FDF14_000019D8
    lwz r0, 0x188(r1)
    addi r4, r1, 0x18c
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_800FDF14_000019CC
    stw r3, 0x0(r4)
lbl_fn_800FDF14_000019CC:
    lwz r4, 0x188(r1)
    addi r0, r4, 0x1
    stw r0, 0x188(r1)
lbl_fn_800FDF14_000019D8:
    lwz r3, 0x14ac(r3)
lbl_fn_800FDF14_000019DC:
    cmpwi r3, 0x0
    bne lbl_fn_800FDF14_00001920
    b lbl_fn_800FDF14_00001AAC
lbl_fn_800FDF14_000019E8:
    mr r3, r23
    li r4, 0x9
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001A34
    mr r3, r23
    li r4, 0x9
    bl fn_80133EE8
    lwz r0, 0x188(r1)
    addi r3, r1, 0x18c
    li r30, 0x1
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_800FDF14_00001A24
    stw r29, 0x0(r3)
lbl_fn_800FDF14_00001A24:
    lwz r3, 0x188(r1)
    addi r0, r3, 0x1
    stw r0, 0x188(r1)
    b lbl_fn_800FDF14_00001AAC
lbl_fn_800FDF14_00001A34:
    mr r3, r23
    li r4, 0x47
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001AAC
    mr r3, r23
    li r4, 0x47
    li r5, -0x1
    bl fn_80133F18
    lwz r4, 0x16c(r23)
    addi r5, r1, 0x18c
    lwz r0, 0x188(r1)
    mullw r3, r4, r3
    lfd f4, 0x8e8(r31)
    slwi r0, r0, 2
    lfs f0, lbl_808814C4
    add. r5, r5, r0
    xoris r0, r3, 0x8000
    stw r0, 0x3dc(r1)
    lfd f3, 0x3d8(r1)
    fsubs f3, f3, f4
    fdivs f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x3e0(r1)
    lwz r27, 0x3e4(r1)
    beq lbl_fn_800FDF14_00001AA0
    stw r29, 0x0(r5)
lbl_fn_800FDF14_00001AA0:
    lwz r3, 0x188(r1)
    addi r0, r3, 0x1
    stw r0, 0x188(r1)
lbl_fn_800FDF14_00001AAC:
    lwz r23, 0x188(r1)
    cmpwi r23, 0x0
    beq lbl_fn_800FDF14_00001C34
    cmpwi r27, 0x0
    ble lbl_fn_800FDF14_00001BDC
    lwz r3, 0xf4(r1)
    li r6, 0x0
    li r5, -0x1
    neg r0, r27
    clrlwi r4, r3, 4
    li r3, 0x1
    stw r6, 0xe0(r1)
    addi r22, r1, 0x18c
    lfs f30, lbl_80881478
    addi r24, r1, 0x74
    stw r6, 0xe4(r1)
    li r31, 0x0
    lfs f31, lbl_8088148C
    li r27, 0x0
    stw r6, 0xe8(r1)
    stw r5, 0xec(r1)
    stw r4, 0xf4(r1)
    stw r5, 0xf0(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    b lbl_fn_800FDF14_00001BD4
lbl_fn_800FDF14_00001B14:
    lwzx r21, r22, r27
    li r5, 0x0
    lwz r4, 0xdc(r1)
    li r6, 0x0
    addi r3, r21, 0x7d4
    bl fn_8012DF7C
    lwz r0, 0x90(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00001BCC
    lwz r4, 0x40(r26)
    mr r3, r21
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001B6C
    lwz r4, 0x40(r26)
    mr r3, r21
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r24), 0, 0
    b lbl_fn_800FDF14_00001B7C
lbl_fn_800FDF14_00001B6C:
    psq_l f1, 0x528(r21), 0, 0
    lfs f2, 0x530(r21)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r24), 0, 0
lbl_fn_800FDF14_00001B7C:
    lfs f4, 0x74(r1)
    mr r3, r25
    lfs f3, 0x78(r1)
    mr r6, r21
    lfs f0, 0x7c(r1)
    fadds f4, f4, f30
    fadds f3, f3, f31
    stfs f30, 0x2c(r1)
    fadds f0, f0, f30
    mr r7, r21
    stfs f31, 0x30(r1)
    addi r4, r1, 0xd8
    stfs f30, 0x34(r1)
    addi r5, r1, 0x74
    li r8, 0x0
    li r9, 0x0
    stfs f4, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    bl fn_80108C10
lbl_fn_800FDF14_00001BCC:
    addi r31, r31, 0x1
    addi r27, r27, 0x4
lbl_fn_800FDF14_00001BD4:
    cmplw r31, r23
    blt lbl_fn_800FDF14_00001B14
lbl_fn_800FDF14_00001BDC:
    cmpwi r30, 0x0
    ble lbl_fn_800FDF14_00001C34
    lwz r0, 0x188(r1)
    addi r4, r1, 0x188
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800FDF14_00001C34
lbl_fn_800FDF14_00001BF8:
    lwz r5, 0x4(r4)
    lwz r0, 0x9f8(r5)
    lwz r7, 0x954(r5)
    add r6, r0, r30
    neg r0, r6
    andc r0, r0, r6
    srawi r3, r0, 31
    and r3, r6, r3
    cmpw r3, r7
    bge lbl_fn_800FDF14_00001C28
    srawi r0, r0, 31
    and r7, r6, r0
lbl_fn_800FDF14_00001C28:
    stw r7, 0x9f8(r5)
    addi r4, r4, 0x4
    bdnz lbl_fn_800FDF14_00001BF8
lbl_fn_800FDF14_00001C34:
    lwz r0, 0x4c(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00001CF0
    lwz r0, 0x90(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00001CF0
    lwz r4, 0x40(r26)
    mr r3, r28
    bl fn_80148B0C
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001C84
    lwz r4, 0x40(r26)
    mr r3, r28
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r1, 0x68
    lfs f2, 0xc(r3)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_800FDF14_00001C98
lbl_fn_800FDF14_00001C84:
    psq_l f1, 0x528(r28), 0, 0
    addi r3, r1, 0x68
    lfs f2, 0x530(r28)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_800FDF14_00001C98:
    lfs f6, lbl_80881478
    mr r3, r25
    lfs f5, lbl_808814E8
    mr r6, r29
    lfs f4, 0x68(r1)
    mr r7, r28
    lfs f3, 0x6c(r1)
    addi r4, r26, 0x64
    lfs f0, 0x70(r1)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x20(r1)
    fadds f0, f0, f6
    addi r5, r1, 0x68
    stfs f4, 0x68(r1)
    li r9, 0x0
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f5, 0x24(r1)
    lwz r8, 0x94(r26)
    stfs f6, 0x28(r1)
    bl fn_80108C10
lbl_fn_800FDF14_00001CF0:
    mr r3, r25
    mr r4, r26
    bl fn_801018E4
    mr r3, r25
    mr r4, r26
    bl fn_80101CDC
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00001D20
    addis r3, r25, 0x4
    li r0, 0x0
    stw r0, -0x7518(r3)
lbl_fn_800FDF14_00001D20:
    addis r3, r25, 0x4
    lwz r0, -0x7518(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00002164
    lwz r0, 0x44(r26)
    li r27, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_00001E64
    cmpwi r29, 0x0
    li r27, 0x64
    beq lbl_fn_800FDF14_00001D74
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_00001D74
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001D74
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_800FDF14_00001D74
    li r27, 0xc8
lbl_fn_800FDF14_00001D74:
    addis r3, r25, 0x4
    lwz r0, -0x7510(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_800FDF14_00001D8C
    slwi r27, r27, 1
lbl_fn_800FDF14_00001D8C:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00001ED4
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDF14_00001ED4
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_800FDF14_00001DCC
    mr r3, r28
    li r4, 0x1
    bl fn_8017A5D8
    lwz r4, lbl_8087F0A8
    addi r3, r29, 0x7d4
    lfs f1, 0x40c(r4)
    bl fn_8012F188
lbl_fn_800FDF14_00001DCC:
    cmpwi r28, 0x0
    bne lbl_fn_800FDF14_00001DDC
    li r4, -0x1
    b lbl_fn_800FDF14_00001E1C
lbl_fn_800FDF14_00001DDC:
    addis r3, r25, 0x3
    mr r5, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00001E18
lbl_fn_800FDF14_00001DF8:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r28
    bne lbl_fn_800FDF14_00001E0C
    b lbl_fn_800FDF14_00001E1C
lbl_fn_800FDF14_00001E0C:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_800FDF14_00001DF8
lbl_fn_800FDF14_00001E18:
    li r4, -0x1
lbl_fn_800FDF14_00001E1C:
    cmpwi r4, 0x0
    blt lbl_fn_800FDF14_00001E38
    mulli r0, r4, 0x934
    addis r3, r25, 0x1
    add r3, r3, r0
    subi r4, r3, 0x3410
    b lbl_fn_800FDF14_00001E3C
lbl_fn_800FDF14_00001E38:
    li r4, 0x0
lbl_fn_800FDF14_00001E3C:
    cmpwi r4, 0x0
    beq lbl_fn_800FDF14_00001ED4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00001E58
    lwz r0, 0x5744(r3)
    b lbl_fn_800FDF14_00001E5C
lbl_fn_800FDF14_00001E58:
    li r0, 0x0
lbl_fn_800FDF14_00001E5C:
    stw r0, 0x930(r4)
    b lbl_fn_800FDF14_00001ED4
lbl_fn_800FDF14_00001E64:
    cmpwi r0, 0x2
    bne lbl_fn_800FDF14_00001E88
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_00001E80
    li r27, 0x14
    b lbl_fn_800FDF14_00001ED4
lbl_fn_800FDF14_00001E80:
    li r27, 0x64
    b lbl_fn_800FDF14_00001ED4
lbl_fn_800FDF14_00001E88:
    cmpwi r0, 0x1
    bne lbl_fn_800FDF14_00001ED4
    cmpwi r29, 0x0
    li r27, 0xa
    beq lbl_fn_800FDF14_00001ED4
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDF14_00001ED4
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_800FDF14_00001ED4
    mr r3, r28
    li r4, 0x1
    bl fn_8017A5D8
    lwz r4, lbl_8087F0A8
    addi r3, r29, 0x7d4
    lfs f1, 0x40c(r4)
    bl fn_8012F188
lbl_fn_800FDF14_00001ED4:
    mr r3, r25
    mr r4, r28
    mr r5, r29
    mr r6, r27
    li r7, -0x1
    bl fn_80102EAC
    lwz r3, lbl_8087F0A8
    lwz r3, 0x3cc(r3)
    bl fn_80210220
    cmpwi r29, 0x0
    bne lbl_fn_800FDF14_00001F08
    li r5, -0x1
    b lbl_fn_800FDF14_00001F48
lbl_fn_800FDF14_00001F08:
    addis r3, r25, 0x3
    mr r4, r25
    lwz r0, 0x63b0(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00001F44
lbl_fn_800FDF14_00001F24:
    addis r3, r4, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r29
    bne lbl_fn_800FDF14_00001F38
    b lbl_fn_800FDF14_00001F48
lbl_fn_800FDF14_00001F38:
    addi r4, r4, 0x934
    addi r5, r5, 0x1
    bdnz lbl_fn_800FDF14_00001F24
lbl_fn_800FDF14_00001F44:
    li r5, -0x1
lbl_fn_800FDF14_00001F48:
    cmpwi r28, 0x0
    bne lbl_fn_800FDF14_00001F58
    li r4, -0x1
    b lbl_fn_800FDF14_00001F98
lbl_fn_800FDF14_00001F58:
    addis r3, r25, 0x3
    mr r6, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_00001F94
lbl_fn_800FDF14_00001F74:
    addis r3, r6, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r28
    bne lbl_fn_800FDF14_00001F88
    b lbl_fn_800FDF14_00001F98
lbl_fn_800FDF14_00001F88:
    addi r6, r6, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_800FDF14_00001F74
lbl_fn_800FDF14_00001F94:
    li r4, -0x1
lbl_fn_800FDF14_00001F98:
    cmpwi r4, 0x0
    blt lbl_fn_800FDF14_0000204C
    cmpwi r5, 0x0
    blt lbl_fn_800FDF14_0000204C
    mulli r3, r5, 0x934
    addis r0, r25, 0x1
    add r3, r0, r3
    lwzu r8, -0x3410(r3)
    cmpwi r8, 0x0
    beq lbl_fn_800FDF14_0000204C
    lwz r9, 0x38(r8)
    li r6, 0x0
    li r5, 0x0
    li r7, 0x0
    rlwinm r0, r9, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800FDF14_00001FEC
    clrlwi r0, r9, 31
    cmplwi r0, 0x1
    beq lbl_fn_800FDF14_00001FEC
    li r7, 0x1
lbl_fn_800FDF14_00001FEC:
    cmpwi r7, 0x0
    beq lbl_fn_800FDF14_00002008
    lwz r0, 0x7e0(r8)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800FDF14_00002008
    li r5, 0x1
lbl_fn_800FDF14_00002008:
    cmpwi r5, 0x0
    beq lbl_fn_800FDF14_0000203C
    lwz r0, 0x55c(r8)
    li r5, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800FDF14_00002030
    lwz r0, 0x560(r8)
    cmpwi r0, 0x1c
    bne lbl_fn_800FDF14_00002030
    li r5, 0x1
lbl_fn_800FDF14_00002030:
    cmpwi r5, 0x0
    bne lbl_fn_800FDF14_0000203C
    li r6, 0x1
lbl_fn_800FDF14_0000203C:
    cmpwi r6, 0x0
    beq lbl_fn_800FDF14_0000204C
    li r5, 0x0
    bl fn_8010895C
lbl_fn_800FDF14_0000204C:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00002164
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDF14_00002164
    cmpwi r28, 0x0
    bne lbl_fn_800FDF14_00002070
    li r4, -0x1
    b lbl_fn_800FDF14_000020B0
lbl_fn_800FDF14_00002070:
    addis r3, r25, 0x3
    mr r5, r25
    lwz r0, 0x63b0(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_000020AC
lbl_fn_800FDF14_0000208C:
    addis r3, r5, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r28
    bne lbl_fn_800FDF14_000020A0
    b lbl_fn_800FDF14_000020B0
lbl_fn_800FDF14_000020A0:
    addi r5, r5, 0x934
    addi r4, r4, 0x1
    bdnz lbl_fn_800FDF14_0000208C
lbl_fn_800FDF14_000020AC:
    li r4, -0x1
lbl_fn_800FDF14_000020B0:
    cmpwi r29, 0x0
    bne lbl_fn_800FDF14_000020C0
    li r5, -0x1
    b lbl_fn_800FDF14_00002100
lbl_fn_800FDF14_000020C0:
    addis r3, r25, 0x3
    mr r6, r25
    lwz r0, 0x63b0(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800FDF14_000020FC
lbl_fn_800FDF14_000020DC:
    addis r3, r6, 0x1
    lwz r0, -0x3410(r3)
    cmplw r0, r29
    bne lbl_fn_800FDF14_000020F0
    b lbl_fn_800FDF14_00002100
lbl_fn_800FDF14_000020F0:
    addi r6, r6, 0x934
    addi r5, r5, 0x1
    bdnz lbl_fn_800FDF14_000020DC
lbl_fn_800FDF14_000020FC:
    li r5, -0x1
lbl_fn_800FDF14_00002100:
    cmpwi r5, 0x0
    blt lbl_fn_800FDF14_00002164
    cmpwi r4, 0x0
    blt lbl_fn_800FDF14_00002130
    mulli r3, r4, 0x934
    addis r4, r25, 0x1
    slwi r0, r5, 2
    lfs f0, lbl_80881478
    add r3, r4, r3
    add r3, r3, r0
    stfs f0, -0x2d2c(r3)
    b lbl_fn_800FDF14_00002164
lbl_fn_800FDF14_00002130:
    slwi r0, r5, 2
    lfs f0, lbl_80881478
    add r6, r25, r0
    addis r3, r25, 0x3
    li r5, 0x0
    b lbl_fn_800FDF14_00002158
lbl_fn_800FDF14_00002148:
    addis r4, r6, 0x1
    addi r5, r5, 0x1
    stfs f0, -0x2d2c(r4)
    addi r6, r6, 0x934
lbl_fn_800FDF14_00002158:
    lwz r0, 0x63b0(r3)
    cmpw r5, r0
    blt lbl_fn_800FDF14_00002148
lbl_fn_800FDF14_00002164:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_000025D8
    mr r3, r29
    mr r4, r28
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800FDF14_000025D8
    lwz r0, 0x80(r26)
    srwi. r0, r0, 31
    beq lbl_fn_800FDF14_00002234
    stw r29, 0x13b0(r28)
    lwz r0, 0x48(r29)
    cmpwi r0, 0x3
    bne lbl_fn_800FDF14_000021CC
    lwz r3, lbl_8087F490
    mr r5, r29
    li r4, 0x4
    bl fn_803E2110
    lwz r3, lbl_8087F498
    mr r4, r29
    lfs f1, lbl_80881494
    li r5, 0x1c
    lfs f2, lbl_8088148C
    li r6, 0xf
    bl fn_803EA77C
lbl_fn_800FDF14_000021CC:
    lwz r3, lbl_8087F4A0
    li r30, 0x3
    lfs f31, lbl_80881478
    li r27, 0x0
    lwz r21, 0x48(r3)
    b lbl_fn_800FDF14_0000222C
lbl_fn_800FDF14_000021E4:
    lwz r0, 0x50(r21)
    cmpwi r0, 0x3a
    bne lbl_fn_800FDF14_00002228
    stw r30, 0xb8(r1)
    mr r3, r21
    addi r4, r1, 0xb8
    stw r27, 0xbc(r1)
    stw r27, 0xc0(r1)
    stw r27, 0xc4(r1)
    stfs f31, 0xcc(r1)
    stfs f31, 0xd0(r1)
    stfs f31, 0xd4(r1)
    stw r29, 0xc8(r1)
    lwz r12, 0x0(r21)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_800FDF14_00002228:
    lwz r21, 0x5c(r21)
lbl_fn_800FDF14_0000222C:
    cmpwi r21, 0x0
    bne lbl_fn_800FDF14_000021E4
lbl_fn_800FDF14_00002234:
    lwz r0, 0x44(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00002248
    cmpwi r0, 0x2
    bne lbl_fn_800FDF14_0000225C
lbl_fn_800FDF14_00002248:
    lwz r4, lbl_8087F0A8
    addi r3, r28, 0x7d4
    lfs f1, 0x410(r4)
    bl fn_8012F188
    b lbl_fn_800FDF14_00002274
lbl_fn_800FDF14_0000225C:
    lwz r4, lbl_8087F0A8
    addi r3, r28, 0x7d4
    lfs f3, lbl_80881500
    lfs f0, 0x410(r4)
    fmuls f1, f3, f0
    bl fn_8012F188
lbl_fn_800FDF14_00002274:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_000025D8
    bl fn_80376238
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_000025D8
    lwz r0, 0x48(r29)
    lfs f30, lbl_80881494
    cmpwi r0, 0x0
    lfs f29, lbl_80881478
    bne lbl_fn_800FDF14_000023AC
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDF14_000023E4
    addis r30, r25, 0x1
    lfs f31, lbl_80881540
    addis r31, r25, 0x3
    li r27, 0x0
    subi r30, r30, 0x3410
    b lbl_fn_800FDF14_00002384
lbl_fn_800FDF14_000022C4:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_0000237C
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_800FDF14_000022FC
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_800FDF14_000022FC
    li r6, 0x1
lbl_fn_800FDF14_000022FC:
    cmpwi r6, 0x0
    beq lbl_fn_800FDF14_00002318
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800FDF14_00002318
    li r4, 0x1
lbl_fn_800FDF14_00002318:
    cmpwi r4, 0x0
    beq lbl_fn_800FDF14_0000234C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800FDF14_00002340
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_800FDF14_00002340
    li r4, 0x1
lbl_fn_800FDF14_00002340:
    cmpwi r4, 0x0
    bne lbl_fn_800FDF14_0000234C
    li r5, 0x1
lbl_fn_800FDF14_0000234C:
    cmpwi r5, 0x0
    beq lbl_fn_800FDF14_0000237C
    mr r4, r29
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800FDF14_0000237C
    lwz r3, 0x0(r30)
    lwz r0, 0xd1c(r3)
    cmplw r0, r29
    bne lbl_fn_800FDF14_0000237C
    fadds f30, f30, f31
lbl_fn_800FDF14_0000237C:
    addi r30, r30, 0x934
    addi r27, r27, 0x1
lbl_fn_800FDF14_00002384:
    lwz r0, 0x63b0(r31)
    cmpw r27, r0
    blt lbl_fn_800FDF14_000022C4
    lfs f0, lbl_80881510
    fcmpo cr0, f0, f30
    bge lbl_fn_800FDF14_000023A0
    b lbl_fn_800FDF14_000023A4
lbl_fn_800FDF14_000023A0:
    fmr f0, f30
lbl_fn_800FDF14_000023A4:
    fmr f30, f0
    b lbl_fn_800FDF14_000023E4
lbl_fn_800FDF14_000023AC:
    cmpwi r0, 0x3
    bne lbl_fn_800FDF14_000023E4
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_000023C8
    lwz r3, 0x48(r3)
    b lbl_fn_800FDF14_000023CC
lbl_fn_800FDF14_000023C8:
    li r3, 0x0
lbl_fn_800FDF14_000023CC:
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_000023E4
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDF14_000023E4
    lfs f30, lbl_80881490
lbl_fn_800FDF14_000023E4:
    lwz r0, 0x44(r26)
    cmplwi r0, 0x1
    bgt lbl_fn_800FDF14_00002400
    addis r3, r25, 0x4
    lfs f0, -0x75bc(r3)
    fadds f29, f29, f0
    b lbl_fn_800FDF14_0000240C
lbl_fn_800FDF14_00002400:
    addis r3, r25, 0x4
    lfs f0, -0x75b8(r3)
    fadds f29, f29, f0
lbl_fn_800FDF14_0000240C:
    lwz r0, 0x80(r26)
    srwi. r0, r0, 31
    beq lbl_fn_800FDF14_00002424
    addis r3, r25, 0x4
    lfs f0, -0x75b4(r3)
    fadds f29, f29, f0
lbl_fn_800FDF14_00002424:
    lwz r0, 0x12a4(r28)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_800FDF14_00002440
    addis r3, r25, 0x4
    lfs f0, -0x75ac(r3)
    fadds f29, f29, f0
lbl_fn_800FDF14_00002440:
    fmuls f1, f29, f30
    addi r3, r29, 0x7d4
    bl fn_8012F034
    addis r4, r25, 0x4
    addi r3, r28, 0x7d4
    lfs f1, -0x75b0(r4)
    bl fn_8012F034
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_00002470
    cmpwi r0, 0x3
    bne lbl_fn_800FDF14_000025D8
lbl_fn_800FDF14_00002470:
    lwz r0, 0x80(r26)
    srwi. r0, r0, 31
    beq lbl_fn_800FDF14_000025D8
    lwz r3, 0x50(r28)
    bl fn_80219558
    lwz r4, lbl_8087F8A0
    mr r30, r3
    cmpwi r4, 0x0
    beq lbl_fn_800FDF14_0000249C
    lwz r21, 0x48(r4)
    b lbl_fn_800FDF14_000024A0
lbl_fn_800FDF14_0000249C:
    li r21, 0x0
lbl_fn_800FDF14_000024A0:
    lis r27, jumptable_80779CEC@ha
    b lbl_fn_800FDF14_000025D0
lbl_fn_800FDF14_000024A8:
    lfs f29, lbl_80881478
    lwz r3, 0x50(r21)
    bl fn_80219558
    cmplwi r3, 0xa
    bgt lbl_fn_800FDF14_000025C0
    addi r4, r27, jumptable_80779CEC@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r30, 0x1
    beq lbl_fn_800FDF14_000024E4
    subi r0, r30, 0x9
    cmplwi r0, 0x1
    bgt lbl_fn_800FDF14_000024EC
lbl_fn_800FDF14_000024E4:
    lfs f29, lbl_80881514
    b lbl_fn_800FDF14_000025C0
lbl_fn_800FDF14_000024EC:
    cmpw r30, r3
    beq lbl_fn_800FDF14_000025C0
    lfs f29, lbl_808814AC
    b lbl_fn_800FDF14_000025C0
    cmpwi r30, 0x0
    bne lbl_fn_800FDF14_0000250C
    lfs f29, lbl_80881514
    b lbl_fn_800FDF14_000025C0
lbl_fn_800FDF14_0000250C:
    cmpw r30, r3
    beq lbl_fn_800FDF14_000025C0
    lfs f29, lbl_808814AC
    b lbl_fn_800FDF14_000025C0
    cmpwi r30, 0x0
    bne lbl_fn_800FDF14_0000252C
    lfs f29, lbl_80881540
    b lbl_fn_800FDF14_000025C0
lbl_fn_800FDF14_0000252C:
    cmpw r30, r3
    beq lbl_fn_800FDF14_000025C0
    lfs f29, lbl_808814AC
    b lbl_fn_800FDF14_000025C0
    cmpw r30, r3
    beq lbl_fn_800FDF14_000025C0
    lfs f29, lbl_808814AC
    b lbl_fn_800FDF14_000025C0
    cmpwi r30, 0x1
    beq lbl_fn_800FDF14_0000256C
    cmpwi r30, 0x9
    beq lbl_fn_800FDF14_0000256C
    cmpwi r30, 0xa
    beq lbl_fn_800FDF14_0000256C
    cmpwi r30, 0x5
    bne lbl_fn_800FDF14_00002574
lbl_fn_800FDF14_0000256C:
    lfs f29, lbl_80881544
    b lbl_fn_800FDF14_000025C0
lbl_fn_800FDF14_00002574:
    cmpwi r30, 0x3
    bne lbl_fn_800FDF14_00002584
    lfs f29, lbl_80881514
    b lbl_fn_800FDF14_000025C0
lbl_fn_800FDF14_00002584:
    cmpw r30, r3
    beq lbl_fn_800FDF14_000025C0
    lfs f29, lbl_808814AC
    b lbl_fn_800FDF14_000025C0
    cmpwi r30, 0x6
    bne lbl_fn_800FDF14_000025A4
    lfs f29, lbl_80881514
    b lbl_fn_800FDF14_000025C0
lbl_fn_800FDF14_000025A4:
    cmpw r30, r3
    beq lbl_fn_800FDF14_000025C0
    lfs f29, lbl_808814AC
    b lbl_fn_800FDF14_000025C0
    cmpw r30, r3
    beq lbl_fn_800FDF14_000025C0
    lfs f29, lbl_808814D0
lbl_fn_800FDF14_000025C0:
    fmr f1, f29
    addi r3, r21, 0x7d4
    bl fn_8012F034
    lwz r21, 0x14ac(r21)
lbl_fn_800FDF14_000025D0:
    cmpwi r21, 0x0
    bne lbl_fn_800FDF14_000024A8
lbl_fn_800FDF14_000025D8:
    lwz r3, lbl_8087EE78
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_00002600
    lwz r0, 0x80(r26)
    srwi. r0, r0, 31
    beq lbl_fn_800FDF14_00002600
    mr r5, r29
    mr r6, r28
    li r4, 0x1
    bl fn_80043BF4
lbl_fn_800FDF14_00002600:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_000026A0
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_000026A0
    lwz r0, 0x80(r26)
    srwi. r0, r0, 31
    beq lbl_fn_800FDF14_00002730
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDF14_00002638
    addis r3, r25, 0x4
    lfs f4, -0x75c8(r3)
    b lbl_fn_800FDF14_0000263C
lbl_fn_800FDF14_00002638:
    lfs f4, lbl_80881494
lbl_fn_800FDF14_0000263C:
    addis r3, r25, 0x4
    lfs f0, -0x75e0(r3)
    lfs f3, -0x75fc(r3)
    fmuls f4, f0, f4
    lfs f0, -0x75f4(r3)
    fadds f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_800FDF14_00002660
    b lbl_fn_800FDF14_00002664
lbl_fn_800FDF14_00002660:
    fmr f3, f0
lbl_fn_800FDF14_00002664:
    lfs f5, lbl_80881478
    fcmpo cr0, f5, f3
    ble lbl_fn_800FDF14_00002674
    b lbl_fn_800FDF14_00002694
lbl_fn_800FDF14_00002674:
    addis r3, r25, 0x4
    lfs f3, -0x75fc(r3)
    lfs f0, -0x75f4(r3)
    fadds f5, f3, f4
    fcmpo cr0, f5, f0
    bge lbl_fn_800FDF14_00002690
    b lbl_fn_800FDF14_00002694
lbl_fn_800FDF14_00002690:
    fmr f5, f0
lbl_fn_800FDF14_00002694:
    addis r3, r25, 0x4
    stfs f5, -0x75fc(r3)
    b lbl_fn_800FDF14_00002730
lbl_fn_800FDF14_000026A0:
    cmpwi r28, 0x0
    beq lbl_fn_800FDF14_00002730
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_00002730
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800FDF14_000026CC
    addis r3, r25, 0x4
    lfs f4, -0x75c8(r3)
    b lbl_fn_800FDF14_000026D0
lbl_fn_800FDF14_000026CC:
    lfs f4, lbl_80881494
lbl_fn_800FDF14_000026D0:
    addis r3, r25, 0x4
    lfs f0, -0x75dc(r3)
    lfs f3, -0x75fc(r3)
    fmuls f4, f0, f4
    lfs f0, -0x75f4(r3)
    fadds f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_800FDF14_000026F4
    b lbl_fn_800FDF14_000026F8
lbl_fn_800FDF14_000026F4:
    fmr f3, f0
lbl_fn_800FDF14_000026F8:
    lfs f5, lbl_80881478
    fcmpo cr0, f5, f3
    ble lbl_fn_800FDF14_00002708
    b lbl_fn_800FDF14_00002728
lbl_fn_800FDF14_00002708:
    addis r3, r25, 0x4
    lfs f3, -0x75fc(r3)
    lfs f0, -0x75f4(r3)
    fadds f5, f3, f4
    fcmpo cr0, f5, f0
    bge lbl_fn_800FDF14_00002724
    b lbl_fn_800FDF14_00002728
lbl_fn_800FDF14_00002724:
    fmr f5, f0
lbl_fn_800FDF14_00002728:
    addis r3, r25, 0x4
    stfs f5, -0x75fc(r3)
lbl_fn_800FDF14_00002730:
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_00002788
    lwz r0, 0x80(r26)
    srwi. r0, r0, 31
    bne lbl_fn_800FDF14_00002788
    lwz r0, 0x44(r26)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_00002788
    lwz r3, 0x5c(r28)
    lwz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_800FDF14_00002788
    addi r3, r29, 0x7d4
    lis r4, 0x40
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x1
    bl fn_8012F440
lbl_fn_800FDF14_00002788:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_000027DC
    cmpwi r29, 0x0
    beq lbl_fn_800FDF14_000027DC
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800FDF14_000027DC
    lwz r0, 0x44(r26)
    cmpwi r0, 0x0
    bne lbl_fn_800FDF14_000027DC
    lwz r0, 0x28c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800FDF14_000027DC
    lwz r4, 0x288(r3)
    subi r4, r4, 0x1
    neg r0, r4
    andc r0, r0, r4
    srawi r0, r0, 31
    and r0, r4, r0
    stw r0, 0x288(r3)
lbl_fn_800FDF14_000027DC:
    li r3, 0x1
lbl_fn_800FDF14_000027E0:
    addi r11, r1, 0x420
    psq_l f31, 0x448(r1), 0, 0
    lfd f31, 0x440(r1)
    psq_l f30, 0x438(r1), 0, 0
    lfd f30, 0x430(r1)
    psq_l f29, 0x428(r1), 0, 0
    lfd f29, 0x420(r1)
    bl _restgpr_21
    lwz r0, 0x454(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}
