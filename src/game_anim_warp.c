#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_24(void);
extern void _savegpr_19(void);
extern void _savegpr_24(void);
extern void fn_8000D0F8(void);
extern void fn_8000D3A4(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_8004D124(void);
extern void fn_8004ED34(void);
extern void fn_8008CCE8(void);
extern void fn_8008CD1C(void);
extern void fn_80092814(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DD3FC(void);
extern void fn_800F72CC(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F80B8(void);
extern void fn_800F8290(void);
extern void fn_80109828(void);
extern void fn_8010EDFC(void);
extern void fn_801162A0(void);
extern void fn_8012D8B8(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_80145334(void);
extern void fn_801479E4(void);
extern void fn_8015495C(void);
extern void fn_8015C0C0(void);
extern void fn_8015C6A0(void);
extern void fn_80176ACC(void);
extern void fn_801A03E8(void);
extern void fn_801A03F4(void);
extern void fn_801A0400(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_8026607C(void);
extern void fn_80267B20(void);
extern void fn_80267B28(void);
extern void fn_80276AE4(void);
extern void fn_80279788(void);
extern void fn_80279790(void);
extern void fn_80279798(void);
extern void fn_802797A0(void);
extern void fn_802797A8(void);
extern void fn_802797D4(void);
extern void fn_8036554C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80744A10[];
extern u8 lbl_80744AA4[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80883820;
extern u32 lbl_80883828;
extern u32 lbl_80883830;
extern u32 lbl_80883838;
extern u32 lbl_80883868;
extern u32 lbl_8088386C;
extern u32 lbl_808838A8;
extern u32 lbl_808838C0;

/* Function declarations */
void fn_80277DC4(void);
void fn_8027819C(void);
void fn_80278218(void);
void fn_80278330(void);
void fn_8027851C(void);
void fn_80278634(void);
void fn_80279054(void);
void fn_802790A0(void);
void fn_80279280(void);

asm void fn_80277DC4(void)
{
    nofralloc
    stwu r1, -0x390(r1)
    mflr r0
    stw r0, 0x394(r1)
    addi r11, r1, 0x360
    stfd f31, 0x380(r1)
    psq_st f31, 0x388(r1), 0, 0
    stfd f30, 0x370(r1)
    psq_st f30, 0x378(r1), 0, 0
    stfd f29, 0x360(r1)
    psq_st f29, 0x368(r1), 0, 0
    bl _savegpr_19
    lfs f29, lbl_80883820
    li r25, 0x0
    lfs f0, lbl_80883828
    mr r22, r3
    stfs f29, 0x74(r1)
    mr r19, r25
    lfs f30, lbl_80883838
    addi r31, r1, 0x50
    stfs f29, 0x78(r1)
    addi r28, r1, 0x74
    lfs f31, lbl_80883830
    addi r30, r1, 0x38
    stfs f0, 0x7c(r1)
    addi r29, r1, 0x44
    addi r27, r1, 0x68
    addi r26, r1, 0x5c
    li r24, 0x0
    li r21, 0x0
    li r20, 0x1
    b lbl_fn_80277DC4_0000034C
lbl_fn_80277DC4_0000007C:
    lwz r3, 0x14b0(r22)
    lwzx r23, r3, r21
    cmpwi r23, 0x0
    beq lbl_fn_80277DC4_00000344
    lwz r0, 0x7e0(r23)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80277DC4_000000A8
    lwz r0, 0xd18(r23)
    cmpwi r0, 0x0
    bne lbl_fn_80277DC4_00000344
lbl_fn_80277DC4_000000A8:
    lfs f1, lbl_80883868
    addi r3, r1, 0xf0
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xf0
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x7c(r1)
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f6, 0x530(r22)
    lfs f0, 0x7c(r1)
    lfs f5, 0x52c(r22)
    frsp f7, f3
    lfs f4, 0x78(r1)
    fadds f6, f6, f0
    lfs f3, 0x528(r22)
    lfs f0, 0x74(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0x6c(r1)
    fcmpo cr0, f7, f30
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bge lbl_fn_80277DC4_00000138
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f29
    ble lbl_fn_80277DC4_0000012C
    lfs f0, lbl_80883868
    b lbl_fn_80277DC4_00000130
lbl_fn_80277DC4_0000012C:
    lfs f0, lbl_8088386C
lbl_fn_80277DC4_00000130:
    stfs f0, 0x48(r1)
    b lbl_fn_80277DC4_0000014C
lbl_fn_80277DC4_00000138:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80277DC4_0000014C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f13, 0x88(r1)
    mr r4, r30
    lfs f12, 0x84(r1)
    mr r5, r30
    lfs f11, 0x80(r1)
    addi r3, r1, 0xb0
    lfs f10, 0x98(r1)
    lfs f9, 0x94(r1)
    lfs f8, 0x90(r1)
    lfs f7, 0xa8(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0xa0(r1)
    lfs f4, 0xac(r1)
    lfs f3, 0x9c(r1)
    lfs f0, 0x8c(r1)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f29, 0xe0(r1)
    stfs f29, 0xe4(r1)
    stfs f29, 0xe8(r1)
    stfs f31, 0xec(r1)
    stfs f11, 0x8(r1)
    stfs f12, 0xc(r1)
    stfs f13, 0x10(r1)
    stfs f11, 0xb0(r1)
    stfs f12, 0xb4(r1)
    stfs f13, 0xb8(r1)
    stfs f8, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f10, 0x1c(r1)
    stfs f8, 0xc0(r1)
    stfs f9, 0xc4(r1)
    stfs f10, 0xc8(r1)
    stfs f5, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f5, 0xd0(r1)
    stfs f6, 0xd4(r1)
    stfs f7, 0xd8(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f0, 0xbc(r1)
    stfs f3, 0xcc(r1)
    stfs f4, 0xdc(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f30
    bge lbl_fn_80277DC4_00000258
    lfs f0, 0x3c(r1)
    fcmpo cr0, f0, f29
    ble lbl_fn_80277DC4_00000248
    lfs f0, lbl_80883868
    b lbl_fn_80277DC4_0000024C
lbl_fn_80277DC4_00000248:
    lfs f0, lbl_8088386C
lbl_fn_80277DC4_0000024C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80277DC4_0000026C
lbl_fn_80277DC4_00000258:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80277DC4_0000026C:
    lwz r0, 0x12a4(r23)
    fmr f2, f29
    psq_l f1, 0x0(r29), 0, 0
    mr r3, r23
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r23)
    psq_st f1, 0x0(r31), 0, 0
    lwz r0, 0x38(r23)
    lfs f0, 0x54(r1)
    rlwinm r0, r0, 0, 30, 28
    stfs f29, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f29, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f29, 0x64(r1)
    stw r0, 0x38(r23)
    bl fn_80176ACC
    mr r3, r23
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x12a4(r23)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_80277DC4_000002D4
    lwz r0, 0x12a4(r23)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r23)
lbl_fn_80277DC4_000002D4:
    addi r3, r23, 0x7d4
    bl fn_8012D8B8
    stw r19, 0x58c(r23)
    mr r3, r23
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lfs f2, 0x70(r1)
    mr r3, r23
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x528(r23), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x530(r23)
    lfs f2, 0x64(r1)
    psq_st f1, 0x534(r23), 0, 0
    stfs f2, 0x53c(r23)
    bl fn_80145334
    stw r20, 0xd18(r23)
    mr r3, r23
    mr r4, r27
    addi r5, r1, 0x74
    lwz r12, 0x0(r23)
    lwz r12, 0x80(r12)
    mtctr r12
    bctrl
    addi r25, r25, 0x1
lbl_fn_80277DC4_00000344:
    addi r24, r24, 0x1
    addi r21, r21, 0x4
lbl_fn_80277DC4_0000034C:
    lwz r0, 0x14b4(r22)
    cmplw r24, r0
    blt lbl_fn_80277DC4_0000007C
    cmpwi r25, 0x0
    ble lbl_fn_80277DC4_000003A8
    addi r3, r1, 0x120
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x120
    lwz r4, 0x2e4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80277DC4_00000388
    b lbl_fn_80277DC4_0000038C
lbl_fn_80277DC4_00000388:
    la r4, lbl_808813D0
lbl_fn_80277DC4_0000038C:
    lwz r5, 0x60(r22)
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x120
    bl fn_80109828
lbl_fn_80277DC4_000003A8:
    addi r11, r1, 0x360
    psq_l f31, 0x388(r1), 0, 0
    lfd f31, 0x380(r1)
    psq_l f30, 0x378(r1), 0, 0
    lfd f30, 0x370(r1)
    psq_l f29, 0x368(r1), 0, 0
    lfd f29, 0x360(r1)
    bl _restgpr_19
    lwz r0, 0x394(r1)
    mtlr r0
    addi r1, r1, 0x390
    blr
}

asm void fn_8027819C(void)
{
    nofralloc
    lwz r0, 0x14b4(r3)
    li r6, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8027819C_000003F0
    li r3, 0x0
    blr
lbl_fn_8027819C_000003F0:
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8027819C_00000438
lbl_fn_8027819C_00000400:
    lwz r4, 0x14b0(r3)
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_8027819C_00000430
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8027819C_00000430
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8027819C_00000430
    addi r6, r6, 0x1
lbl_fn_8027819C_00000430:
    addi r5, r5, 0x4
    bdnz lbl_fn_8027819C_00000400
lbl_fn_8027819C_00000438:
    subfic r0, r6, 0x1
    li r3, 0x1
    orc r3, r3, r6
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80278218(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C7030@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C7030@l
    stw r31, 0x1c(r1)
    li r31, 0x1
    stw r30, 0x18(r1)
    mr r30, r4
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x8(r4)
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, lbl_8087F428
    bl fn_8036554C
    b lbl_fn_80278218_00000500
lbl_fn_80278218_000004AC:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80278218_000004FC
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80278218_000004FC
    lfs f3, 0x0(r30)
    addi r31, r31, 0x1
    lfs f0, 0x528(r3)
    lfs f4, 0x4(r30)
    fadds f0, f3, f0
    lfs f3, 0x8(r30)
    stfs f0, 0x0(r30)
    lfs f0, 0x52c(r3)
    fadds f0, f4, f0
    stfs f0, 0x4(r30)
    lfs f0, 0x530(r3)
    fadds f0, f3, f0
    stfs f0, 0x8(r30)
lbl_fn_80278218_000004FC:
    lwz r3, 0x14ac(r3)
lbl_fn_80278218_00000500:
    cmpwi r3, 0x0
    bne lbl_fn_80278218_000004AC
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80744A10@ha
    stw r3, 0xc(r1)
    lfd f3, lbl_80744A10@l(r4)
    stw r0, 0x8(r1)
    lfs f5, lbl_80883830
    lfd f0, 0x8(r1)
    lfs f4, 0x0(r30)
    fsubs f6, f0, f3
    lfs f3, 0x4(r30)
    lfs f0, 0x8(r30)
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x0(r30)
    stfs f3, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80278330(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r4, lbl_807C7030@ha
    stw r0, 0x84(r1)
    addi r4, r4, lbl_807C7030@l
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    addi r3, r1, 0x14
    stw r30, 0x38(r1)
    li r30, 0x1
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r5, lbl_8087F8A0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    lwz r5, 0x48(r5)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x528(r5), 0, 0
    stfs f2, 0x1c(r1)
    lfs f2, 0x530(r5)
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, lbl_8087F428
    stfs f2, 0x1c(r1)
    bl fn_8036554C
    b lbl_fn_80278330_00000644
lbl_fn_80278330_000005F0:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80278330_00000640
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80278330_00000640
    lfs f3, 0x14(r1)
    addi r30, r30, 0x1
    lfs f0, 0x528(r3)
    lfs f5, 0x18(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x1c(r1)
    lfs f0, 0x530(r3)
    fadds f4, f5, f4
    stfs f6, 0x14(r1)
    fadds f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_80278330_00000640:
    lwz r3, 0x14ac(r3)
lbl_fn_80278330_00000644:
    cmpwi r3, 0x0
    bne lbl_fn_80278330_000005F0
    xoris r3, r30, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80744A10@ha
    stw r3, 0x24(r1)
    lfd f3, lbl_80744A10@l(r4)
    li r29, 0x0
    stw r0, 0x20(r1)
    li r28, 0x0
    lfs f5, lbl_80883830
    li r30, 0x0
    lfd f0, 0x20(r1)
    lfs f4, 0x14(r1)
    fsubs f6, f0, f3
    lfs f3, 0x18(r1)
    lfs f0, 0x1c(r1)
    lfs f31, lbl_80883820
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x14(r1)
    frsp f30, f4
    frsp f29, f3
    stfs f3, 0x18(r1)
    frsp f28, f0
    stfs f0, 0x1c(r1)
    b lbl_fn_80278330_00000708
lbl_fn_80278330_000006B8:
    lwz r4, 0x14c0(r31)
    addi r3, r1, 0x8
    lwzx r4, r4, r30
    lfs f4, 0xc(r4)
    lfs f3, 0x8(r4)
    lfs f0, 0x4(r4)
    fsubs f4, f28, f4
    fsubs f3, f29, f3
    fsubs f0, f30, f0
    stfs f4, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    bge lbl_fn_80278330_00000700
    lwz r3, 0x14c0(r31)
    fmr f31, f1
    lwzx r29, r3, r30
lbl_fn_80278330_00000700:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_80278330_00000708:
    lwz r0, 0x14c4(r31)
    cmplw r28, r0
    blt lbl_fn_80278330_000006B8
    psq_l f31, 0x78(r1), 0, 0
    mr r3, r29
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8027851C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_80744AA4@ha
    stw r0, 0x84(r1)
    addi r5, r5, lbl_80744AA4@l
    stw r31, 0x7c(r1)
    mr r31, r4
    addi r4, r5, 0x1cf
    li r5, 0x0
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8027851C_0000079C
    li r3, 0x0
    b lbl_fn_8027851C_000007A8
lbl_fn_8027851C_0000079C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8027851C_000007A8:
    lfs f0, 0x2c(r3)
    lis r4, lbl_80744AA4@ha
    lfs f1, 0x1c(r3)
    addi r4, r4, lbl_80744AA4@l
    lfs f2, 0xc(r3)
    addi r31, r31, 0xb0
    stfs f2, 0x14(r1)
    mr r3, r31
    addi r4, r4, 0x1ea
    li r5, 0x0
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8027851C_000007EC
    li r3, 0x0
    b lbl_fn_8027851C_000007F8
lbl_fn_8027851C_000007EC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_8027851C_000007F8:
    lfs f0, 0x2c(r3)
    li r0, 0x0
    lfs f1, 0x1c(r3)
    addi r4, r1, 0x20
    lfs f2, 0xc(r3)
    addi r5, r1, 0x14
    stfs f2, 0x8(r1)
    addi r6, r1, 0x8
    lwz r3, lbl_8087EE98
    addi r8, r30, 0x5b8
    stfs f1, 0xc(r1)
    lis r7, 0x8000
    li r9, 0x0
    stfs f0, 0x10(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8027851C_00000854
    li r3, 0x0
    b lbl_fn_8027851C_00000858
lbl_fn_8027851C_00000854:
    li r3, 0x1
lbl_fn_8027851C_00000858:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80278634(void)
{
    nofralloc
    stwu r1, -0x5b0(r1)
    mflr r0
    mulli r5, r5, 0xec
    stw r0, 0x5b4(r1)
    li r0, 0x1
    stfd f31, 0x5a0(r1)
    psq_st f31, 0x5a8(r1), 0, 0
    stfd f30, 0x590(r1)
    psq_st f30, 0x598(r1), 0, 0
    stfd f29, 0x580(r1)
    psq_st f29, 0x588(r1), 0, 0
    stfd f28, 0x570(r1)
    psq_st f28, 0x578(r1), 0, 0
    stfd f27, 0x560(r1)
    psq_st f27, 0x568(r1), 0, 0
    stfd f26, 0x550(r1)
    psq_st f26, 0x558(r1), 0, 0
    stw r31, 0x54c(r1)
    stw r30, 0x548(r1)
    stw r29, 0x544(r1)
    mr r29, r4
    stw r28, 0x540(r1)
    mr r28, r3
    add r3, r3, r5
    li r5, 0x64
    stw r0, 0x1538(r3)
    addi r31, r3, 0x1538
    mr r4, r31
    stw r6, 0x1544(r3)
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x0
    stw r0, 0x4(r31)
    lis r3, lbl_80744AA4@ha
    li r5, 0x0
    li r0, 0x1e
    stw r0, 0x8(r31)
    addi r3, r3, lbl_80744AA4@l
    addi r4, r3, 0x1cf
    addi r3, r28, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80278634_00000950
    li r3, 0x0
    b lbl_fn_80278634_0000095C
lbl_fn_80278634_00000950:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r28)
    add r3, r3, r0
lbl_fn_80278634_0000095C:
    lfs f0, 0x2c(r3)
    lis r4, lbl_80744AA4@ha
    lfs f7, 0x1c(r3)
    addi r4, r4, lbl_80744AA4@l
    lfs f8, 0xc(r3)
    addi r28, r29, 0xb0
    stfs f8, 0xf0(r1)
    mr r3, r28
    addi r4, r4, 0x1ea
    li r5, 0x0
    stfs f7, 0xf4(r1)
    stfs f0, 0xf8(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80278634_000009A0
    li r4, 0x0
    b lbl_fn_80278634_000009AC
lbl_fn_80278634_000009A0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r4, r3, r0
lbl_fn_80278634_000009AC:
    lfs f9, 0x1c(r4)
    addi r5, r1, 0xc0
    lfs f10, 0xc(r4)
    addi r3, r31, 0x10
    lfs f7, 0xf4(r1)
    lfs f8, 0x2c(r4)
    mr r4, r3
    fsubs f11, f9, f7
    lfs f0, 0xf0(r1)
    lfs f7, 0xf8(r1)
    fsubs f0, f10, f0
    stfs f11, 0xc4(r1)
    fsubs f2, f8, f7
    stfs f0, 0xc0(r1)
    stw r29, 0x88(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f10, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f2, 0xc8(r1)
    stfs f2, 0x18(r31)
    bl fn_805F98D0
    lfs f0, 0x10(r31)
    addi r30, r1, 0xb4
    lfs f10, lbl_808838A8
    lfs f8, lbl_80883820
    fmuls f9, f0, f10
    lfs f7, lbl_80883830
    lfs f0, lbl_80883838
    stfs f9, 0x10(r31)
    lfs f9, 0x14(r31)
    fmuls f9, f9, f10
    stfs f9, 0x14(r31)
    lfs f9, 0x18(r31)
    fmuls f9, f9, f10
    stfs f9, 0x18(r31)
    frsp f2, f9
    stfs f8, 0x54(r31)
    stfs f8, 0x4c(r31)
    fabs f9, f2
    stfs f8, 0x48(r31)
    frsp f9, f9
    stfs f8, 0x44(r31)
    stfs f8, 0x40(r31)
    fcmpo cr0, f9, f0
    stfs f8, 0x38(r31)
    stfs f8, 0x34(r31)
    stfs f8, 0x30(r31)
    stfs f8, 0x2c(r31)
    stfs f7, 0x50(r31)
    stfs f7, 0x3c(r31)
    stfs f7, 0x28(r31)
    psq_l f1, 0x10(r31), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xbc(r1)
    bge lbl_fn_80278634_00000AB0
    lfs f0, 0xb4(r1)
    fcmpo cr0, f0, f8
    ble lbl_fn_80278634_00000AA4
    lfs f0, lbl_80883868
    b lbl_fn_80278634_00000AA8
lbl_fn_80278634_00000AA4:
    lfs f0, lbl_8088386C
lbl_fn_80278634_00000AA8:
    stfs f0, 0xac(r1)
    b lbl_fn_80278634_00000AC4
lbl_fn_80278634_00000AB0:
    frsp f2, f2
    lfs f1, 0xb4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xac(r1)
lbl_fn_80278634_00000AC4:
    lfs f0, 0xac(r1)
    addi r3, r1, 0x4d0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80883820
    addi r4, r1, 0x9c
    lfs f26, 0x4d8(r1)
    mr r5, r4
    lfs f27, 0x4d4(r1)
    addi r3, r1, 0x500
    lfs f28, 0x4d0(r1)
    lfs f29, 0x4e8(r1)
    lfs f30, 0x4e4(r1)
    lfs f31, 0x4e0(r1)
    lfs f13, 0x4f8(r1)
    lfs f12, 0x4f4(r1)
    lfs f11, 0x4f0(r1)
    lfs f10, 0x4fc(r1)
    lfs f9, 0x4ec(r1)
    lfs f8, 0x4dc(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xbc(r1)
    stfs f7, 0x530(r1)
    stfs f7, 0x534(r1)
    stfs f7, 0x538(r1)
    stfs f0, 0x53c(r1)
    stfs f28, 0x6c(r1)
    stfs f27, 0x70(r1)
    stfs f26, 0x74(r1)
    stfs f28, 0x500(r1)
    stfs f27, 0x504(r1)
    stfs f26, 0x508(r1)
    stfs f31, 0x78(r1)
    stfs f30, 0x7c(r1)
    stfs f29, 0x80(r1)
    stfs f31, 0x510(r1)
    stfs f30, 0x514(r1)
    stfs f29, 0x518(r1)
    stfs f11, 0x84(r1)
    stfs f12, 0x88(r1)
    stfs f13, 0x8c(r1)
    stfs f11, 0x520(r1)
    stfs f12, 0x524(r1)
    stfs f13, 0x528(r1)
    stfs f8, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f10, 0x98(r1)
    stfs f8, 0x50c(r1)
    stfs f9, 0x51c(r1)
    stfs f10, 0x52c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa4(r1)
    bl fn_805F9750
    lfs f2, 0xa4(r1)
    lfs f0, lbl_80883838
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80278634_00000BE0
    lfs f7, 0xa0(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f7, f0
    ble lbl_fn_80278634_00000BD0
    lfs f0, lbl_80883868
    b lbl_fn_80278634_00000BD4
lbl_fn_80278634_00000BD0:
    lfs f0, lbl_8088386C
lbl_fn_80278634_00000BD4:
    fneg f0, f0
    stfs f0, 0xa8(r1)
    b lbl_fn_80278634_00000BF4
lbl_fn_80278634_00000BE0:
    lfs f1, 0xa0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa8(r1)
lbl_fn_80278634_00000BF4:
    lfs f2, lbl_80883820
    addi r3, r1, 0xa8
    lfs f7, lbl_80883830
    addi r29, r31, 0x28
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xb0(r1)
    addi r28, r1, 0x380
    fcmpu cr0, f2, f0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xbc(r1)
    stfs f2, 0x3ac(r1)
    stfs f2, 0x3a4(r1)
    stfs f2, 0x3a0(r1)
    stfs f2, 0x39c(r1)
    stfs f2, 0x398(r1)
    stfs f2, 0x390(r1)
    stfs f2, 0x38c(r1)
    stfs f2, 0x388(r1)
    stfs f2, 0x384(r1)
    stfs f7, 0x3a8(r1)
    stfs f7, 0x394(r1)
    stfs f7, 0x380(r1)
    beq lbl_fn_80278634_00000CA8
    fmr f1, f0
    addi r3, r1, 0x470
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x470
    addi r5, r1, 0x4a0
    bl fn_805F89F0
    addi r3, r1, 0x4a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80278634_00000CA8:
    lfs f0, lbl_80883820
    lfs f1, 0xb8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80278634_00000D08
    addi r3, r1, 0x410
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x410
    addi r5, r1, 0x440
    bl fn_805F89F0
    addi r3, r1, 0x440
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80278634_00000D08:
    lfs f0, lbl_80883820
    lfs f1, 0xb4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80278634_00000D68
    addi r3, r1, 0x3b0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x3b0
    addi r5, r1, 0x3e0
    bl fn_805F89F0
    addi r3, r1, 0x3e0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_80278634_00000D68:
    mr r3, r29
    mr r4, r28
    addi r5, r1, 0x350
    bl fn_805F89F0
    addi r5, r1, 0x350
    addi r28, r1, 0xd8
    psq_l f2, 0x8(r5), 0, 0
    mr r3, r28
    psq_l f3, 0x10(r5), 0, 0
    mr r4, r28
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f8, 0xf0(r1)
    psq_st f2, 0x8(r29), 0, 0
    lfs f7, 0xf4(r1)
    psq_st f3, 0x10(r29), 0, 0
    lfs f0, 0xf8(r1)
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    stfs f8, 0x34(r31)
    stfs f7, 0x44(r31)
    stfs f0, 0x54(r31)
    psq_l f1, 0x10(r31), 0, 0
    lfs f2, 0x18(r31)
    stfs f2, 0xe0(r1)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F98D0
    lfs f2, 0xe0(r1)
    addi r29, r1, 0xcc
    psq_l f1, 0x0(r28), 0, 0
    fabs f7, f2
    lfs f0, lbl_80883838
    psq_st f1, 0x0(r29), 0, 0
    frsp f7, f7
    stfs f2, 0xd4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80278634_00000E30
    lfs f7, 0xcc(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f7, f0
    ble lbl_fn_80278634_00000E24
    lfs f0, lbl_80883868
    b lbl_fn_80278634_00000E28
lbl_fn_80278634_00000E24:
    lfs f0, lbl_8088386C
lbl_fn_80278634_00000E28:
    stfs f0, 0x64(r1)
    b lbl_fn_80278634_00000E44
lbl_fn_80278634_00000E30:
    frsp f2, f2
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_80278634_00000E44:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x2e0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80883820
    addi r4, r1, 0x54
    lfs f31, 0x2e8(r1)
    mr r5, r4
    lfs f30, 0x2e4(r1)
    addi r3, r1, 0x310
    lfs f29, 0x2e0(r1)
    lfs f28, 0x2f8(r1)
    lfs f27, 0x2f4(r1)
    lfs f26, 0x2f0(r1)
    lfs f13, 0x308(r1)
    lfs f12, 0x304(r1)
    lfs f11, 0x300(r1)
    lfs f10, 0x30c(r1)
    lfs f9, 0x2fc(r1)
    lfs f8, 0x2ec(r1)
    lfs f0, lbl_80883830
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xd4(r1)
    stfs f7, 0x340(r1)
    stfs f7, 0x344(r1)
    stfs f7, 0x348(r1)
    stfs f0, 0x34c(r1)
    stfs f29, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f29, 0x310(r1)
    stfs f30, 0x314(r1)
    stfs f31, 0x318(r1)
    stfs f26, 0x30(r1)
    stfs f27, 0x34(r1)
    stfs f28, 0x38(r1)
    stfs f26, 0x320(r1)
    stfs f27, 0x324(r1)
    stfs f28, 0x328(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f11, 0x330(r1)
    stfs f12, 0x334(r1)
    stfs f13, 0x338(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f8, 0x31c(r1)
    stfs f9, 0x32c(r1)
    stfs f10, 0x33c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80883838
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80278634_00000F60
    lfs f7, 0x58(r1)
    lfs f0, lbl_80883820
    fcmpo cr0, f7, f0
    ble lbl_fn_80278634_00000F50
    lfs f0, lbl_80883868
    b lbl_fn_80278634_00000F54
lbl_fn_80278634_00000F50:
    lfs f0, lbl_8088386C
lbl_fn_80278634_00000F54:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_80278634_00000F74
lbl_fn_80278634_00000F60:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_80278634_00000F74:
    addi r3, r1, 0x60
    lfs f2, lbl_80883820
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd8
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xd4(r1)
    bl fn_805F9940
    lfs f11, lbl_80883820
    addi r28, r31, 0x58
    stfs f11, 0x84(r31)
    addi r29, r1, 0x190
    lfs f7, lbl_808838C0
    stfs f11, 0x7c(r31)
    fdivs f26, f1, f7
    lfs f0, 0xd4(r1)
    stfs f11, 0x78(r31)
    lfs f10, lbl_80883830
    stfs f11, 0x74(r31)
    lfs f9, 0xf0(r1)
    stfs f11, 0x70(r31)
    fcmpu cr0, f11, f0
    lfs f8, 0xf4(r1)
    stfs f11, 0x68(r31)
    lfs f7, 0xf8(r1)
    stfs f11, 0x64(r31)
    stfs f11, 0x60(r31)
    stfs f11, 0x5c(r31)
    stfs f10, 0x80(r31)
    stfs f10, 0x6c(r31)
    stfs f10, 0x58(r31)
    stfs f9, 0x64(r31)
    stfs f8, 0x74(r31)
    stfs f7, 0x84(r31)
    stfs f11, 0x1bc(r1)
    stfs f11, 0x1b4(r1)
    stfs f11, 0x1b0(r1)
    stfs f11, 0x1ac(r1)
    stfs f11, 0x1a8(r1)
    stfs f11, 0x1a0(r1)
    stfs f11, 0x19c(r1)
    stfs f11, 0x198(r1)
    stfs f11, 0x194(r1)
    stfs f10, 0x1b8(r1)
    stfs f10, 0x1a4(r1)
    stfs f10, 0x190(r1)
    beq lbl_fn_80278634_00001084
    fmr f1, f0
    addi r3, r1, 0x280
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x280
    addi r5, r1, 0x2b0
    bl fn_805F89F0
    addi r3, r1, 0x2b0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80278634_00001084:
    lfs f0, lbl_80883820
    lfs f1, 0xd0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80278634_000010E4
    addi r3, r1, 0x220
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x220
    addi r5, r1, 0x250
    bl fn_805F89F0
    addi r3, r1, 0x250
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80278634_000010E4:
    lfs f0, lbl_80883820
    lfs f1, 0xcc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80278634_00001144
    addi r3, r1, 0x1c0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1c0
    addi r5, r1, 0x1f0
    bl fn_805F89F0
    addi r3, r1, 0x1f0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80278634_00001144:
    mr r3, r28
    mr r4, r29
    addi r5, r1, 0x160
    bl fn_805F89F0
    addi r4, r1, 0x160
    lfs f0, lbl_80883830
    psq_l f2, 0x8(r4), 0, 0
    addi r29, r31, 0x58
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0x100
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fmr f1, f0
    psq_st f2, 0x8(r28), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r28), 0, 0
    fmr f3, f26
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f26, 0x20(r1)
    bl fn_805F9160
    mr r3, r29
    addi r4, r1, 0x100
    addi r5, r1, 0x130
    bl fn_805F89F0
    addi r5, r1, 0x130
    mr r3, r31
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x65
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80883830
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r4, r31, 0xb0
    mr r7, r29
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    lwz r3, lbl_8087F3C0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    lwz r0, 0x5b4(r1)
    psq_l f31, 0x5a8(r1), 0, 0
    lfd f31, 0x5a0(r1)
    psq_l f30, 0x598(r1), 0, 0
    lfd f30, 0x590(r1)
    psq_l f29, 0x588(r1), 0, 0
    lfd f29, 0x580(r1)
    psq_l f28, 0x578(r1), 0, 0
    lfd f28, 0x570(r1)
    psq_l f27, 0x568(r1), 0, 0
    lfd f27, 0x560(r1)
    psq_l f26, 0x558(r1), 0, 0
    lfd f26, 0x550(r1)
    lwz r31, 0x54c(r1)
    lwz r30, 0x548(r1)
    lwz r29, 0x544(r1)
    lwz r28, 0x540(r1)
    mtlr r0
    addi r1, r1, 0x5b0
    blr
}

asm void fn_80279054(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
lbl_fn_80279054_000012AC:
    mr r3, r30
    mr r4, r31
    bl fn_802790A0
    addi r31, r31, 0x1
    cmpwi r31, 0x4
    blt lbl_fn_80279054_000012AC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802790A0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    mulli r4, r4, 0xec
    li r5, 0x64
    stw r0, 0x54(r1)
    li r0, 0x0
    li r6, 0x1
    stw r31, 0x4c(r1)
    add r3, r3, r4
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    addi r29, r3, 0x1538
    mr r4, r29
    stw r0, 0x1538(r3)
    stw r0, 0x1544(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x66
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x67
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802790A0_00001494
    lwz r4, 0x88(r29)
    cmpwi r4, 0x0
    beq lbl_fn_802790A0_00001494
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bne lbl_fn_802790A0_000013A8
    lwz r3, lbl_8087F430
    li r4, 0x73
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802790A0_000013A8
    lwz r3, lbl_8087F430
    li r4, 0x73
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802790A0_000013A8:
    lwz r3, 0x88(r29)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802790A0_000013CC
    lwz r4, 0x560(r3)
    subi r0, r4, 0x74
    cmplwi r0, 0x1
    bgt lbl_fn_802790A0_000013CC
    bl fn_8015C6A0
lbl_fn_802790A0_000013CC:
    lwz r3, 0x88(r29)
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 22
    bne lbl_fn_802790A0_00001494
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, 0x88(r29)
    li r30, -0x1
    lfs f0, lbl_80883820
    li r31, 0x1
    lfs f1, lbl_80883830
    addi r5, r3, 0xb0
    stfs f0, 0x24(r1)
    addi r4, r29, 0xe0
    addi r7, r1, 0x18
    addi r8, r1, 0x24
    stfs f0, 0x28(r1)
    addi r9, r1, 0x30
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r30, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    lfs f1, lbl_80883830
    addi r4, r29, 0xbc
    stw r30, 0xc(r1)
    addi r7, r29, 0x58
    li r5, -0x1
    li r6, 0x5
    stw r31, 0x10(r1)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
lbl_fn_802790A0_00001494:
    li r0, 0x0
    stw r0, 0x4(r29)
    stw r0, 0x88(r29)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80279280(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    bl _savegpr_24
    lis r4, lbl_80744AA4@ha
    lfs f28, lbl_80883820
    lfs f29, lbl_80883830
    mr r31, r3
    lfs f31, lbl_808838C0
    addi r25, r3, 0x1538
    addi r26, r4, lbl_80744AA4@l
    li r24, 0x0
    li r27, 0x4
    li r28, 0x1
    li r30, 0x0
lbl_fn_80279280_0000151C:
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80279280_0000197C
    lwz r0, 0x4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80279280_000015C0
    lwz r3, 0x88(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80279280_000018FC
    bl fn_8000DD0C
    addi r4, r26, 0x1c9
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0xf8
    bl fn_8008CCE8
    addi r3, r25, 0x28
    addi r4, r1, 0xf8
    bl fn_8008CD1C
    lwz r0, 0xc(r25)
    li r29, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80279280_000018FC
    lwz r3, 0x88(r25)
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_80279280_000015A8
    lwz r3, 0x88(r25)
    bl fn_80267B28
    cmpwi r3, 0x74
    beq lbl_fn_80279280_000015A4
    lwz r3, 0x88(r25)
    bl fn_80267B28
    cmpwi r3, 0x75
    bne lbl_fn_80279280_000015A8
lbl_fn_80279280_000015A4:
    li r29, 0x1
lbl_fn_80279280_000015A8:
    cmpwi r29, 0x0
    bne lbl_fn_80279280_000018FC
    mr r3, r31
    mr r4, r24
    bl fn_802790A0
    b lbl_fn_80279280_000018FC
lbl_fn_80279280_000015C0:
    lwz r3, 0x8(r25)
    subic. r0, r3, 0x1
    stw r0, 0x8(r25)
    bge lbl_fn_80279280_000015E0
    mr r3, r31
    mr r4, r24
    bl fn_802790A0
    b lbl_fn_80279280_0000198C
lbl_fn_80279280_000015E0:
    addi r3, r1, 0xcc
    addi r4, r25, 0x28
    bl fn_8000D0F8
    addi r3, r1, 0xc0
    addi r4, r1, 0xcc
    addi r5, r25, 0x10
    bl fn_80013410
    bl fn_80279790
    bl fn_80279788
    mr r29, r3
    b lbl_fn_80279280_0000174C
lbl_fn_80279280_0000160C:
    mr r3, r29
    bl fn_80279798
    cmpwi r3, 0x1
    bne lbl_fn_80279280_00001740
    addi r3, r1, 0xb4
    addi r4, r1, 0xcc
    bl fn_8001047C
    stfs f28, 0xb8(r1)
    addi r3, r1, 0xa8
    addi r4, r1, 0xc0
    bl fn_8001047C
    stfs f28, 0xac(r1)
    mr r3, r29
    bl fn_802797A0
    mr r4, r3
    addi r3, r1, 0x9c
    bl fn_8001047C
    stfs f28, 0xa0(r1)
    addi r3, r1, 0x90
    addi r4, r1, 0xa8
    addi r5, r1, 0xb4
    bl fn_80013338
    addi r3, r1, 0x90
    bl fn_801162A0
    fmr f30, f1
    addi r3, r1, 0x54
    addi r4, r1, 0xb4
    addi r5, r1, 0x9c
    bl fn_80013338
    addi r3, r1, 0x90
    addi r4, r1, 0x54
    bl fn_801A03E8
    fneg f0, f1
    fdivs f1, f0, f30
    fcmpo cr0, f28, f1
    bge lbl_fn_80279280_00001740
    fcmpo cr0, f1, f29
    bge lbl_fn_80279280_00001740
    addi r3, r1, 0x48
    addi r4, r1, 0x90
    bl fn_800F72CC
    addi r3, r1, 0x84
    addi r4, r1, 0xb4
    addi r5, r1, 0x48
    bl fn_80013410
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    fmr f30, f1
    addi r3, r1, 0x3c
    addi r4, r1, 0x84
    addi r5, r1, 0x9c
    bl fn_80013338
    addi r3, r1, 0x3c
    bl fn_8000D3A4
    fcmpo cr0, f1, f30
    bge lbl_fn_80279280_00001740
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80279280_00001740
    addi r3, r1, 0xd8
    bl fn_802797A8
    stw r27, 0xd8(r1)
    mr r3, r29
    addi r4, r1, 0xd8
    lwz r12, 0x0(r29)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    bl fn_801404F8
    bl fn_8004D124
lbl_fn_80279280_00001740:
    mr r3, r29
    bl fn_802797D4
    mr r29, r3
lbl_fn_80279280_0000174C:
    cmpwi r29, 0x0
    bne lbl_fn_80279280_0000160C
    addi r3, r1, 0x128
    bl fn_80140500
    bl fn_801404F8
    lwz r7, 0x1900(r31)
    addi r4, r1, 0x128
    addi r5, r1, 0xcc
    addi r6, r1, 0xc0
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80279280_000018F0
    lwz r3, 0x160(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80279280_000018DC
    bl fn_801A03F4
    cmpwi r3, 0x0
    beq lbl_fn_80279280_000018DC
    lwz r3, 0x160(r1)
    bl fn_801A0400
    lwz r0, 0x88(r25)
    cmplw r3, r0
    bne lbl_fn_80279280_000018CC
    addi r3, r25, 0x28
    addi r4, r1, 0x138
    bl fn_801479E4
    bl fn_800F7FA0
    mr r4, r25
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    stw r28, 0x4(r25)
    mr r4, r31
    lwz r3, 0x88(r25)
    lwz r5, 0xc(r25)
    bl fn_8015C0C0
    addi r3, r1, 0x30
    addi r4, r25, 0x28
    bl fn_8000D0F8
    lfs f1, lbl_80883830
    addi r3, r1, 0x8
    addi r4, r26, 0x1f0
    addi r5, r1, 0x30
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    bl fn_800F7FA0
    li r4, 0x0
    li r5, 0x0
    bl fn_800F7FA8
    addi r3, r1, 0x18
    addi r4, r25, 0x10
    bl fn_80011034
    addi r3, r1, 0x24
    addi r4, r25, 0x28
    bl fn_8000D0F8
    bl fn_800F7FA0
    lfs f1, lbl_80883830
    addi r4, r25, 0xa4
    addi r6, r1, 0x24
    addi r7, r1, 0x18
    li r5, 0x0
    li r8, -0x1
    li r9, -0x1
    li r10, 0x1
    bl fn_80276AE4
    bl fn_800F7FA0
    mr r4, r25
    li r5, 0x66
    bl fn_800F7FA8
    lwz r3, 0x88(r25)
    bl fn_8000DD0C
    mr r29, r3
    bl fn_800F7FA0
    mr r5, r29
    addi r4, r25, 0xc8
    li r6, 0x1
    bl fn_8026607C
    bl fn_800F7FA0
    mr r4, r25
    li r5, 0x67
    bl fn_800F7FA8
    lwz r3, 0x88(r25)
    bl fn_8000DD0C
    mr r29, r3
    bl fn_800F7FA0
    mr r5, r29
    addi r4, r25, 0xd4
    li r6, 0x1
    bl fn_8026607C
    b lbl_fn_80279280_000018FC
lbl_fn_80279280_000018CC:
    addi r3, r25, 0x28
    addi r4, r1, 0xc0
    bl fn_801479E4
    b lbl_fn_80279280_000018FC
lbl_fn_80279280_000018DC:
    stw r30, 0x88(r25)
    mr r3, r31
    mr r4, r24
    bl fn_802790A0
    b lbl_fn_80279280_000018FC
lbl_fn_80279280_000018F0:
    addi r3, r25, 0x28
    addi r4, r1, 0xc0
    bl fn_801479E4
lbl_fn_80279280_000018FC:
    addi r3, r31, 0xb0
    addi r4, r26, 0x1cf
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x78
    bl fn_8000D0F8
    addi r3, r1, 0xc
    addi r4, r25, 0x28
    bl fn_8000D0F8
    addi r3, r1, 0x6c
    addi r4, r1, 0xc
    addi r5, r1, 0x78
    bl fn_80013338
    addi r3, r1, 0x60
    addi r4, r1, 0x6c
    bl fn_80011034
    addi r3, r1, 0x6c
    bl fn_8000D3A4
    fdivs f30, f1, f31
    addi r3, r25, 0x58
    bl fn_8010EDFC
    addi r3, r25, 0x58
    addi r4, r1, 0x78
    bl fn_801479E4
    addi r3, r25, 0x58
    addi r4, r1, 0x60
    bl fn_800F80B8
    lfs f1, lbl_80883830
    fmr f3, f30
    addi r3, r25, 0x58
    fmr f2, f1
    bl fn_800F8290
lbl_fn_80279280_0000197C:
    addi r24, r24, 0x1
    addi r25, r25, 0xec
    cmpwi r24, 0x4
    blt lbl_fn_80279280_0000151C
lbl_fn_80279280_0000198C:
    addi r11, r1, 0x1a0
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    bl _restgpr_24
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
