#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008CCE8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800EB7A0(void);
extern void fn_800EC204(void);
extern void fn_800F530C(void);
extern void fn_800F72CC(void);
extern void fn_800F8574(void);
extern void fn_8010A308(void);
extern void fn_8010F668(void);
extern void fn_80121F00(void);
extern void fn_8012D8B8(void);
extern void fn_8013A194(void);
extern void fn_8013C480(void);
extern void fn_8013C504(void);
extern void fn_8014052C(void);
extern void fn_80145334(void);
extern void fn_80148990(void);
extern void fn_80149624(void);
extern void fn_8015495C(void);
extern void fn_8016E970(void);
extern void fn_80176ACC(void);
extern void fn_801A03E0(void);
extern void fn_801A03EC(void);
extern void fn_801A0408(void);
extern void fn_801C3910(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80239DAC(void);
extern void fn_80266154(void);
extern void fn_802A7910(void);
extern void fn_802A7964(void);
extern void fn_8030B74C(void);
extern void fn_8030B92C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803C17FC(void);
extern void fn_805A3C58(void);
extern void fn_805A3D6C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80748FE8[];
extern u8 lbl_807490AC[];
extern u8 lbl_80788220[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80884BA8;
extern u32 lbl_80884BAC;
extern u32 lbl_80884BC8;
extern u32 lbl_80884BCC;
extern u32 lbl_80884BD0;
extern u32 lbl_80884BE8;
extern u32 lbl_80884BEC;
extern u32 lbl_80884BFC;
extern u32 lbl_80884C00;
extern u32 lbl_80884C04;
extern u32 lbl_80884C1C;
extern u32 lbl_80884C30;
extern u32 lbl_80884C34;
extern u32 lbl_80884C38;
extern u32 lbl_80884C3C;
extern u32 lbl_80884C40;
extern u32 lbl_80884C44;
extern u32 lbl_80884C48;
extern u32 lbl_80884C4C;
extern u32 lbl_80884C50;
extern u32 lbl_80884C54;
extern u32 lbl_80884C58;

/* Function declarations */
void fn_8030C190(void);
void fn_8030C1A4(void);
void fn_8030C490(void);
void fn_8030CA38(void);
void fn_8030CBC0(void);
void fn_8030CF84(void);
void fn_8030D0D8(void);
void fn_8030D348(void);
void fn_8030D5C8(void);
void fn_8030D9F0(void);
void fn_8030DA1C(void);
void fn_8030DA20(void);

asm void fn_8030C190(void)
{
    nofralloc
    subi r0, r4, 0x1
    lwz r3, 0x9c(r3)
    mulli r0, r0, 0x30
    add r3, r3, r0
    blr
}

asm void fn_8030C1A4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r5
    stw r29, 0xf4(r1)
    mr r29, r4
    lwz r0, 0x12a4(r4)
    stw r3, 0xf1c(r4)
    mr r3, r29
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r4)
    bl fn_80176ACC
    mr r3, r29
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_8030C1A4_00000084
    lwz r0, 0x12a4(r29)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r29)
lbl_fn_8030C1A4_00000084:
    lfs f0, lbl_80884C1C
    addi r3, r29, 0x7d4
    stfs f0, 0x570(r29)
    bl fn_8012D8B8
    li r0, 0x0
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    addi r31, r1, 0x50
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    mr r3, r31
    psq_st f1, 0x0(r31), 0, 0
    mr r4, r31
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884BFC
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8030C1A4_00000120
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884BAC
    fcmpo cr0, f3, f0
    ble lbl_fn_8030C1A4_00000114
    lfs f0, lbl_80884C00
    b lbl_fn_8030C1A4_00000118
lbl_fn_8030C1A4_00000114:
    lfs f0, lbl_80884C04
lbl_fn_8030C1A4_00000118:
    stfs f0, 0x48(r1)
    b lbl_fn_8030C1A4_00000134
lbl_fn_8030C1A4_00000120:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8030C1A4_00000134:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884BAC
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
    lfs f0, lbl_80884BA8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
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
    lfs f0, lbl_80884BFC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8030C1A4_00000250
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884BAC
    fcmpo cr0, f3, f0
    ble lbl_fn_8030C1A4_00000240
    lfs f0, lbl_80884C00
    b lbl_fn_8030C1A4_00000244
lbl_fn_8030C1A4_00000240:
    lfs f0, lbl_80884C04
lbl_fn_8030C1A4_00000244:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8030C1A4_00000264
lbl_fn_8030C1A4_00000250:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8030C1A4_00000264:
    addi r3, r1, 0x44
    lfs f2, lbl_80884BAC
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x68
    psq_st f1, 0x0(r30), 0, 0
    mr r3, r29
    lfs f0, 0x60(r1)
    stfs f2, 0x68(r1)
    stfs f0, 0x6c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0x70(r1)
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    bl fn_80145334
    lwz r0, 0x12a4(r29)
    li r3, 0x1
    stw r3, 0xd18(r29)
    lis r4, lbl_807C7030@ha
    rlwinm r0, r0, 0, 29, 27
    mr r3, r29
    stw r0, 0x12a4(r29)
    addi r4, r4, lbl_807C7030@l
    lwz r12, 0x0(r29)
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
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

asm void fn_8030C490(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x1e0
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    bl _savegpr_27
    mr r30, r3
    bl fn_80121F00
    bl fn_8013C504
    mr r31, r3
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    mr r3, r30
    bl fn_8030B92C
    lbz r0, 0x14f1(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030C490_00000448
    lfs f29, lbl_80884C30
    mr r31, r30
    lfs f31, lbl_80884BEC
    li r29, -0x1
    lfs f30, lbl_80884BE8
    li r28, 0x0
lbl_fn_8030C490_0000037C:
    bl fn_80121F00
    bl fn_8013C504
    mr r27, r3
    mr r4, r30
    addi r3, r1, 0x14
    bl fn_8014052C
    lfs f1, lbl_80884BCC
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_800F72CC
    addi r3, r1, 0xc8
    addi r4, r30, 0x528
    addi r5, r1, 0x20
    bl fn_80013410
    lwz r4, 0x1538(r31)
    mr r3, r27
    bl fn_800EC204
    mr r4, r3
    addi r3, r1, 0xbc
    addi r4, r4, 0x4
    addi r5, r1, 0xc8
    bl fn_80013338
    addi r3, r1, 0xbc
    bl fn_8000D3A4
    fmr f28, f1
    addi r3, r1, 0x8
    addi r4, r1, 0xbc
    bl fn_80011034
    lfs f1, 0xc(r1)
    lfs f0, 0x538(r30)
    fsubs f1, f1, f0
    bl fn_802A7964
    bl fn_802A7910
    fcmpo cr0, f1, f30
    bge lbl_fn_8030C490_00000420
    fcmpo cr0, f1, f31
    ble lbl_fn_8030C490_00000420
    fcmpo cr0, f28, f29
    bge lbl_fn_8030C490_00000420
    fmr f29, f28
    mr r29, r28
lbl_fn_8030C490_00000420:
    addi r28, r28, 0x1
    addi r31, r31, 0x8
    cmpwi r28, 0x4
    blt lbl_fn_8030C490_0000037C
    cmpwi r29, -0x1
    beq lbl_fn_8030C490_00000870
    stw r29, 0x14e8(r30)
    mr r3, r30
    bl fn_8030D0D8
    b lbl_fn_8030C490_00000870
lbl_fn_8030C490_00000448:
    lwz r4, 0x1534(r30)
    mr r3, r31
    bl fn_800EC204
    mr r4, r3
    addi r3, r1, 0xb0
    addi r4, r4, 0x4
    bl fn_8001047C
    addi r3, r1, 0xa4
    addi r4, r1, 0xb0
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0xa4
    bl fn_801C3910
    lfs f0, lbl_80884BD0
    fcmpo cr0, f1, f0
    bge lbl_fn_8030C490_000004B4
    lbz r0, 0x15f0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8030C490_000004B4
    li r0, 0x1
    stw r0, 0x14b8(r30)
    stb r0, 0x14e4(r30)
    stb r0, 0x15f0(r30)
    bl fn_80121F00
    li r4, 0xd0
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8030C490_000004B4:
    lwz r0, 0x14e0(r30)
    cmpwi r0, 0x3c
    ble lbl_fn_8030C490_000004CC
    li r0, 0x0
    stw r0, 0x14d4(r30)
    stw r0, 0x14e0(r30)
lbl_fn_8030C490_000004CC:
    lwz r0, 0x14d0(r30)
    cmpwi r0, 0x14
    ble lbl_fn_8030C490_000005BC
    lbz r0, 0x14e4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030C490_000005BC
    lwz r0, 0x14d4(r30)
    cmpwi r0, 0x4
    bge lbl_fn_8030C490_000005BC
    li r3, 0x137
    bl fn_80219E6C
    lwz r0, 0x14d4(r30)
    lis r5, lbl_80748FE8@ha
    mr r27, r3
    addi r3, r30, 0xb0
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    addi r5, r5, lbl_80748FE8@l
    subf. r0, r4, r0
    addi r4, r5, 0x75
    bne lbl_fn_8030C490_00000528
    addi r4, r5, 0x68
lbl_fn_8030C490_00000528:
    bl fn_800132EC
    cmpwi r3, 0x0
    bne lbl_fn_8030C490_0000053C
    addi r3, r30, 0xb0
    bl fn_80266154
lbl_fn_8030C490_0000053C:
    mr r4, r3
    addi r3, r1, 0x198
    bl fn_8008CCE8
    addi r3, r1, 0x98
    addi r4, r1, 0x198
    bl fn_8000D0F8
    addi r3, r1, 0x198
    bl fn_8010F668
    lfs f1, lbl_80884BAC
    addi r3, r1, 0x8c
    lfs f2, lbl_80884C34
    lfs f3, lbl_80884BA8
    bl fn_8000D114
    addi r3, r1, 0x8c
    addi r4, r1, 0x198
    bl fn_80011410
    bl fn_8013A194
    lfs f1, lbl_80884BAC
    mr r4, r30
    lfs f2, lbl_80884BA8
    mr r5, r27
    addi r6, r1, 0x98
    addi r7, r1, 0x8c
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    lwz r3, 0x14d4(r30)
    li r0, 0x0
    stw r0, 0x14d0(r30)
    addi r0, r3, 0x1
    stw r0, 0x14d4(r30)
lbl_fn_8030C490_000005BC:
    lwz r0, 0x14d4(r30)
    lwz r3, 0x14d0(r30)
    cmpwi r0, 0x4
    addi r0, r3, 0x1
    stw r0, 0x14d0(r30)
    bne lbl_fn_8030C490_000005E0
    lwz r3, 0x14e0(r30)
    addi r0, r3, 0x1
    stw r0, 0x14e0(r30)
lbl_fn_8030C490_000005E0:
    lbz r0, 0x150c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8030C490_0000080C
    lwz r4, 0x1530(r30)
    mr r3, r31
    bl fn_800EC204
    mr r4, r3
    addi r3, r1, 0x80
    addi r4, r4, 0x4
    bl fn_8001047C
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x74
    bl fn_801C3910
    lfs f0, lbl_80884BD0
    fcmpo cr0, f1, f0
    bge lbl_fn_8030C490_0000080C
    lfs f2, lbl_80884C38
    addi r3, r1, 0x68
    lfs f0, 0x538(r30)
    lfs f1, 0x534(r30)
    fadds f2, f2, f0
    lfs f3, 0x53c(r30)
    bl fn_8000D114
    addi r3, r1, 0x168
    addi r4, r30, 0x534
    bl fn_8030CA38
    li r27, -0x3
    bl fn_801A03E0
    bl fn_801A0408
    mr r28, r3
    b lbl_fn_8030C490_0000069C
lbl_fn_8030C490_00000668:
    mr r3, r28
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_8030C490_00000690
    mr r3, r28
    bl fn_800F530C
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030C490_00000690
    addi r27, r27, 0x1
lbl_fn_8030C490_00000690:
    mr r3, r28
    bl fn_801A03EC
    mr r28, r3
lbl_fn_8030C490_0000069C:
    cmpwi r28, 0x0
    bne lbl_fn_8030C490_00000668
    bl fn_80121F00
    lwz r4, 0x1518(r30)
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_8030C490_0000077C
    lwz r0, 0x1504(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030C490_000007E8
    lwz r0, 0x1508(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030C490_000007E8
    addi r3, r1, 0x138
    addi r4, r1, 0x168
    bl fn_8008CCE8
    addi r3, r1, 0x108
    addi r4, r1, 0x168
    bl fn_8008CCE8
    lfs f1, lbl_80884BAC
    addi r3, r1, 0x5c
    lfs f3, lbl_80884BA8
    fmr f2, f1
    bl fn_8000D114
    lfs f1, lbl_80884BAC
    addi r3, r1, 0x50
    lfs f3, lbl_80884BA8
    fmr f2, f1
    bl fn_8000D114
    lfs f1, lbl_80884C38
    bl fn_802A7964
    addi r3, r1, 0x138
    bl fn_80149624
    lfs f1, lbl_80884C3C
    bl fn_802A7964
    addi r3, r1, 0x108
    bl fn_80149624
    addi r3, r1, 0x5c
    addi r4, r1, 0x138
    bl fn_80011410
    addi r3, r1, 0x50
    addi r4, r1, 0x108
    bl fn_80011410
    cmpwi r27, 0x4
    bge lbl_fn_8030C490_00000760
    lwz r4, 0x1504(r30)
    mr r3, r30
    addi r5, r1, 0x5c
    bl fn_8030C1A4
lbl_fn_8030C490_00000760:
    cmpwi r27, 0x3
    bge lbl_fn_8030C490_000007E8
    lwz r4, 0x1508(r30)
    mr r3, r30
    addi r5, r1, 0x50
    bl fn_8030C1A4
    b lbl_fn_8030C490_000007E8
lbl_fn_8030C490_0000077C:
    bl fn_80121F00
    lwz r4, 0x1518(r30)
    bl fn_80370A78
    cmpwi r3, 0x2
    bne lbl_fn_8030C490_000007E8
    lwz r0, 0x1500(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030C490_000007E8
    addi r3, r1, 0xd8
    addi r4, r1, 0x168
    bl fn_8008CCE8
    lfs f1, lbl_80884BAC
    addi r3, r1, 0x44
    lfs f3, lbl_80884BA8
    fmr f2, f1
    bl fn_8000D114
    lfs f1, lbl_80884C38
    bl fn_802A7964
    addi r3, r1, 0xd8
    bl fn_80149624
    addi r3, r1, 0x44
    addi r4, r1, 0x168
    bl fn_80011410
    lwz r4, 0x1500(r30)
    mr r3, r30
    addi r5, r1, 0x44
    bl fn_8030C1A4
lbl_fn_8030C490_000007E8:
    li r0, 0x1
    stb r0, 0x150c(r30)
    bl fn_80121F00
    lwz r4, 0x1520(r30)
    li r5, 0x1
    bl fn_80370AE4
    li r0, 0x0
    stb r0, 0x14e4(r30)
    stw r0, 0x14b8(r30)
lbl_fn_8030C490_0000080C:
    bl fn_80121F00
    bl fn_8013C504
    lwz r4, 0x1528(r30)
    bl fn_803C17FC
    mr r4, r3
    mr r3, r31
    bl fn_8030C190
    mr r4, r3
    addi r3, r1, 0x38
    addi r4, r4, 0x4
    bl fn_8001047C
    addi r3, r1, 0x2c
    addi r4, r1, 0x38
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x2c
    bl fn_801C3910
    lfs f0, lbl_80884BD0
    fcmpo cr0, f1, f0
    bge lbl_fn_8030C490_00000870
    mr r3, r30
    li r4, 0x0
    bl fn_8030CF84
    li r0, 0x0
    stb r0, 0x15f0(r30)
lbl_fn_8030C490_00000870:
    addi r11, r1, 0x1e0
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    bl _restgpr_27
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_8030CA38(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    lfs f7, lbl_80884BAC
    stw r0, 0x134(r1)
    lfs f1, 0x8(r4)
    stw r31, 0x12c(r1)
    mr r31, r4
    lfs f0, lbl_80884BA8
    fcmpu cr0, f7, f1
    stw r30, 0x128(r1)
    mr r30, r3
    stfs f7, 0x2c(r3)
    stfs f7, 0x24(r3)
    stfs f7, 0x20(r3)
    stfs f7, 0x1c(r3)
    stfs f7, 0x18(r3)
    stfs f7, 0x10(r3)
    stfs f7, 0xc(r3)
    stfs f7, 0x8(r3)
    stfs f7, 0x4(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x0(r3)
    beq lbl_fn_8030CA38_00000958
    addi r3, r1, 0xc8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc8
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_8030CA38_00000958:
    lfs f0, lbl_80884BAC
    lfs f1, 0x0(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8030CA38_000009B8
    addi r3, r1, 0x68
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x68
    addi r5, r1, 0x98
    bl fn_805F89F0
    addi r3, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_8030CA38_000009B8:
    lfs f0, lbl_80884BAC
    lfs f1, 0x4(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8030CA38_00000A18
    addi r3, r1, 0x8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_8030CA38_00000A18:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8030CBC0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030CBC0_00000A6C
    cmpwi r0, 0x1
    beq lbl_fn_8030CBC0_00000B1C
    cmpwi r0, 0x2
    beq lbl_fn_8030CBC0_00000BCC
    b lbl_fn_8030CBC0_00000C6C
lbl_fn_8030CBC0_00000A6C:
    lfs f3, 0x15b4(r3)
    lfs f0, 0x15a8(r3)
    lfs f5, 0x15b0(r3)
    fsubs f6, f3, f0
    lfs f4, 0x15a4(r3)
    lfs f3, 0x15ac(r3)
    lfs f0, 0x15a0(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x20
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9940
    lfs f3, 0x14c4(r31)
    addi r4, r31, 0x1594
    lfs f0, 0x1590(r31)
    addi r3, r1, 0x38
    fdivs f3, f3, f1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x159c(r31)
    addi r5, r31, 0x15a0
    addi r4, r1, 0x44
    addi r7, r31, 0x15ac
    fadds f0, f0, f3
    addi r6, r1, 0x50
    addi r9, r31, 0x15b8
    addi r8, r1, 0x5c
    stfs f0, 0x1590(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x15a8(r31)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x15b4(r31)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x15c0(r31)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r8), 0, 0
    b lbl_fn_8030CBC0_00000C6C
lbl_fn_8030CBC0_00000B1C:
    lfs f3, 0x15c0(r3)
    lfs f0, 0x15b4(r3)
    lfs f5, 0x15bc(r3)
    fsubs f6, f3, f0
    lfs f4, 0x15b0(r3)
    lfs f3, 0x15b8(r3)
    lfs f0, 0x15ac(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x14
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9940
    lfs f3, 0x14c4(r31)
    addi r4, r31, 0x15a0
    lfs f0, 0x1590(r31)
    addi r3, r1, 0x38
    fdivs f3, f3, f1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x15a8(r31)
    addi r5, r31, 0x15ac
    addi r4, r1, 0x44
    addi r7, r31, 0x15b8
    fadds f0, f0, f3
    addi r6, r1, 0x50
    addi r9, r31, 0x15c4
    addi r8, r1, 0x5c
    stfs f0, 0x1590(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x15b4(r31)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x15c0(r31)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x15cc(r31)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r8), 0, 0
    b lbl_fn_8030CBC0_00000C6C
lbl_fn_8030CBC0_00000BCC:
    lfs f3, 0x15cc(r3)
    lfs f0, 0x15c0(r3)
    lfs f5, 0x15c8(r3)
    fsubs f6, f3, f0
    lfs f4, 0x15bc(r3)
    lfs f3, 0x15c4(r3)
    lfs f0, 0x15b8(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x8
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    lfs f3, 0x14c4(r31)
    addi r4, r31, 0x15ac
    lfs f0, 0x1590(r31)
    addi r3, r1, 0x38
    fdivs f3, f3, f1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x15b4(r31)
    addi r5, r31, 0x15b8
    addi r4, r1, 0x44
    addi r7, r31, 0x15c4
    fadds f0, f0, f3
    addi r6, r1, 0x50
    addi r8, r1, 0x5c
    stfs f0, 0x1590(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x15c0(r31)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x15cc(r31)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x64(r1)
lbl_fn_8030CBC0_00000C6C:
    lfs f1, 0x1590(r31)
    mr r3, r31
    addi r4, r1, 0x38
    bl fn_8030B74C
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x33
    bne lbl_fn_8030CBC0_00000CC8
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8030CBC0_00000CC8
    lfs f1, lbl_80884BAC
    addi r3, r31, 0xb0
    lfs f2, lbl_80884BC8
    li r4, 0x0
    li r5, 0x2e
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8030CBC0_00000CC8:
    lfs f3, 0x1590(r31)
    lfs f0, lbl_80884BA8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8030CBC0_00000D60
    lwz r3, 0x14b0(r31)
    lfs f0, lbl_80884BAC
    addi r0, r3, 0x1
    stw r0, 0x14b0(r31)
    cmpwi r0, 0x3
    stfs f0, 0x1590(r31)
    bne lbl_fn_8030CBC0_00000D60
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r4, 0x0
    li r0, -0x1
    stb r4, 0x14f0(r31)
    addi r3, r31, 0x7d4
    stb r4, 0x14f1(r31)
    stw r4, 0x14ec(r31)
    stb r4, 0x15f0(r31)
    stw r0, 0x14e8(r31)
    bl fn_8012D8B8
    lwz r3, lbl_8087F430
    li r5, 0x0
    lwz r4, 0x1514(r31)
    bl fn_80370AE4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0x5c0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
lbl_fn_8030CBC0_00000D60:
    lis r4, lbl_80748FE8@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80748FE8@l
    li r5, 0x0
    addi r4, r4, 0x82
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8030CBC0_00000D88
    li r3, 0x0
    b lbl_fn_8030CBC0_00000D94
lbl_fn_8030CBC0_00000D88:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8030CBC0_00000D94:
    lfs f0, 0x2c(r3)
    addi r4, r31, 0x15e4
    lfs f3, 0x1c(r3)
    addi r5, r1, 0x2c
    lfs f4, 0xc(r3)
    stfs f4, 0x2c(r1)
    lwz r3, lbl_8087F048
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x5b0(r31)
    bl fn_8010A308
    addi r3, r1, 0x2c
    lfs f2, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0x15e4
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15ec(r31)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8030CF84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x7
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r0, 0x58c(r3)
    beq lbl_fn_8030CF84_00000EB4
    lwz r3, lbl_8087F430
    lwz r4, 0x1524(r31)
    lwz r3, 0x10d8(r3)
    bl fn_803C17FC
    lwz r5, lbl_8087F430
    mr r30, r3
    lwz r4, 0x1528(r31)
    lwz r3, 0x10d8(r5)
    bl fn_803C17FC
    lfs f3, lbl_80884BAC
    subi r0, r30, 0x1
    stw r3, 0x158c(r31)
    mulli r9, r0, 0x30
    lfs f0, lbl_80884BA8
    li r0, 0x1
    stw r30, 0x1588(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    stfs f3, 0x1590(r31)
    li r5, 0x14
    li r6, 0x1
    li r7, 0x0
    lwz r10, lbl_8087F430
    li r8, 0x1
    lwz r10, 0x10d8(r10)
    lwz r10, 0x9c(r10)
    add r9, r10, r9
    lfs f2, 0xc(r9)
    psq_l f1, 0x4(r9), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    fmr f1, f3
    stfs f2, 0x530(r31)
    lfs f2, lbl_80884BC8
    stfs f3, 0x15d0(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2e8(r31)
    stfs f0, 0x2ec(r31)
    bl fn_80097C08
lbl_fn_8030CF84_00000EB4:
    lwz r3, 0x1504(r31)
    li r5, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_8030CF84_00000F14
    lwz r4, 0x1508(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8030CF84_00000F14
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8030CF84_00000EF0
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8030CF84_00000F10
lbl_fn_8030CF84_00000EF0:
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8030CF84_00000F14
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8030CF84_00000F14
lbl_fn_8030CF84_00000F10:
    li r5, 0x0
lbl_fn_8030CF84_00000F14:
    lwz r3, lbl_8087F430
    lwz r4, 0x1518(r31)
    bl fn_80370AE4
    li r0, 0x0
    stb r0, 0x150d(r31)
    stw r0, 0x14ec(r31)
    stb r0, 0x150c(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8030D0D8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r4, 0x3
    stw r0, 0x74(r1)
    li r0, 0x8
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F430
    addi r6, r30, 0x1594
    lwz r4, 0x158c(r30)
    addi r7, r30, 0x15a0
    lwz r31, 0x10d8(r3)
    addi r3, r1, 0x38
    subi r0, r4, 0x1
    lfs f3, lbl_80884BAC
    mulli r0, r0, 0x30
    lwz r5, 0x9c(r31)
    lfs f0, lbl_80884BA8
    li r4, 0x79
    add r5, r5, r0
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x159c(r30)
    lfs f2, 0x530(r30)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x15a8(r30)
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80884BCC
    addi r3, r1, 0x2c
    lfs f3, 0x18(r1)
    addi r4, r30, 0x15ac
    lfs f0, 0x14(r1)
    li r5, 0x0
    fmuls f6, f3, f4
    lfs f3, 0x52c(r30)
    fmuls f7, f0, f4
    lfs f0, 0x528(r30)
    lfs f5, 0x1c(r1)
    li r6, 0x0
    fadds f8, f0, f7
    lwz r0, 0x14e8(r30)
    fadds f3, f3, f6
    lfs f0, 0x530(r30)
    fmuls f4, f5, f4
    stfs f8, 0x2c(r1)
    stfs f3, 0x30(r1)
    slwi r0, r0, 3
    fadds f2, f0, f4
    lfs f0, lbl_80884BD0
    psq_l f1, 0x0(r3), 0, 0
    add r3, r30, r0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x15b0(r30)
    stfs f2, 0x15b4(r30)
    fadds f0, f3, f0
    stfs f7, 0x20(r1)
    stfs f0, 0x15b0(r30)
    lwz r0, 0x78(r31)
    stfs f6, 0x24(r1)
    lwz r4, 0x1538(r3)
    stfs f4, 0x28(r1)
    stfs f2, 0x34(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8030D0D8_000010A8
lbl_fn_8030D0D8_00001080:
    lwz r3, 0x7c(r31)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_8030D0D8_0000109C
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_8030D0D8_000010AC
lbl_fn_8030D0D8_0000109C:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8030D0D8_00001080
lbl_fn_8030D0D8_000010A8:
    li r3, 0x0
lbl_fn_8030D0D8_000010AC:
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r30, 0x15b8
    lfs f2, 0xc(r3)
    li r5, 0x0
    lwz r0, 0x14e8(r30)
    li r6, 0x0
    psq_st f1, 0x0(r4), 0, 0
    slwi r0, r0, 3
    stfs f2, 0x15c0(r30)
    add r3, r30, r0
    lwz r0, 0x78(r31)
    lwz r4, 0x153c(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8030D0D8_00001110
lbl_fn_8030D0D8_000010E8:
    lwz r3, 0x7c(r31)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_8030D0D8_00001104
    mulli r0, r5, 0x28
    add r4, r3, r0
    b lbl_fn_8030D0D8_00001114
lbl_fn_8030D0D8_00001104:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8030D0D8_000010E8
lbl_fn_8030D0D8_00001110:
    li r4, 0x0
lbl_fn_8030D0D8_00001114:
    psq_l f1, 0x4(r4), 0, 0
    lis r3, lbl_80748FE8@ha
    lfs f2, 0xc(r4)
    addi r5, r30, 0x15c4
    lfs f0, lbl_80884BAC
    addi r3, r3, lbl_80748FE8@l
    li r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r3, 0x82
    addi r3, r30, 0xb0
    stfs f2, 0x15cc(r30)
    li r5, 0x0
    stfs f0, 0x1590(r30)
    stw r0, 0x14b0(r30)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8030D0D8_00001160
    li r3, 0x0
    b lbl_fn_8030D0D8_0000116C
lbl_fn_8030D0D8_00001160:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8030D0D8_0000116C:
    lfs f0, 0x1c(r3)
    addi r5, r1, 0x8
    lfs f3, 0xc(r3)
    addi r4, r30, 0x15e4
    lfs f2, 0x2c(r3)
    mr r3, r30
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15ec(r30)
    bl fn_800EB7A0
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8030D348(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    lis r4, lbl_80748FE8@ha
    li r5, 0x0
    stw r0, 0x194(r1)
    addi r4, r4, lbl_80748FE8@l
    addi r4, r4, 0x9f
    stw r31, 0x18c(r1)
    stw r30, 0x188(r1)
    mr r30, r3
    lfs f0, 0x5b0(r3)
    stfs f0, 0x620(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8030D348_00001200
    li r5, 0x0
    b lbl_fn_8030D348_0000120C
lbl_fn_8030D348_00001200:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_8030D348_0000120C:
    lfs f8, 0x2c(r5)
    addi r3, r1, 0x8
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x20
    lfs f7, 0xc(r5)
    fmr f2, f8
    stfs f7, 0x8(r1)
    addi r31, r1, 0x150
    lfs f7, lbl_80884BAC
    stfs f0, 0xc(r1)
    lfs f0, lbl_80884BA8
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x61c(r30)
    frsp f2, f2
    psq_st f1, 0x614(r30), 0, 0
    stfs f7, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f7, 0x17c(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f7, 0x168(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x150(r1)
    lfs f0, 0x538(r30)
    stfs f8, 0x10(r1)
    fcmpu cr0, f7, f0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    beq lbl_fn_8030D348_000012F0
    fmr f1, f0
    addi r3, r1, 0x60
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    addi r3, r1, 0x30
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8030D348_000012F0:
    lfs f0, lbl_80884BAC
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8030D348_00001350
    addi r3, r1, 0xc0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    addi r3, r1, 0x90
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8030D348_00001350:
    lfs f0, lbl_80884BAC
    lfs f1, 0x53c(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8030D348_000013B0
    addi r3, r1, 0x120
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8030D348_000013B0:
    addi r4, r1, 0x14
    addi r3, r1, 0x150
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x14(r1)
    addi r4, r1, 0x20
    lfs f0, 0x20(r1)
    addi r3, r1, 0x14
    lfs f9, 0x18(r1)
    fadds f10, f7, f0
    lfs f8, 0x24(r1)
    lfs f7, 0x1c(r1)
    lfs f0, 0x28(r1)
    fadds f8, f9, f8
    stfs f10, 0x14(r1)
    fadds f0, f7, f0
    psq_l f1, 0x0(r4), 0, 0
    stfs f8, 0x18(r1)
    lfs f2, 0x28(r1)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x5f4(r30), 0, 0
    lfs f0, 0x620(r30)
    stfs f2, 0x5fc(r30)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x1c(r1)
    stfs f2, 0x608(r30)
    psq_st f1, 0x600(r30), 0, 0
    stfs f0, 0x60c(r30)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_8030D5C8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f3, lbl_80884BAC
    li r4, 0x0
    stw r0, 0x44(r1)
    addi r5, r1, 0x8
    fmr f2, f3
    addi r6, r1, 0x18
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r0, 0x62c(r3)
    stfs f3, 0x8(r1)
    lfs f0, 0x620(r3)
    cmpwi r0, 0x0
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x614(r3), 0, 0
    stfs f2, 0x20(r1)
    lfs f2, 0x61c(r3)
    stw r4, 0x14(r1)
    stfs f3, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x20(r1)
    stfs f0, 0x24(r1)
    beq lbl_fn_8030D5C8_000014B4
    lwz r0, 0x628(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8030D5C8_00001654
lbl_fn_8030D5C8_000014B4:
    lwz r0, 0x628(r3)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_8030D5C8_000017FC
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_8030D5C8_00001648
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8030D5C8_00001518
    mr r5, r0
lbl_fn_8030D5C8_00001518:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8030D5C8_00001634
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8030D5C8_000015FC
lbl_fn_8030D5C8_00001530:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_8030D5C8_00001530
    andi. r5, r5, 0x3
    beq lbl_fn_8030D5C8_00001634
lbl_fn_8030D5C8_000015FC:
    mtctr r5
lbl_fn_8030D5C8_00001600:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_8030D5C8_00001600
lbl_fn_8030D5C8_00001634:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8030D5C8_00001648
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8030D5C8_00001648:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_8030D5C8_000017FC
lbl_fn_8030D5C8_00001654:
    lwz r3, 0x624(r3)
    cmplw r3, r0
    blt lbl_fn_8030D5C8_000017FC
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_8030D5C8_000017FC
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_8030D5C8_000017F4
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_8030D5C8_000016C4
    mr r5, r0
lbl_fn_8030D5C8_000016C4:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8030D5C8_000017E0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8030D5C8_000017A8
lbl_fn_8030D5C8_000016DC:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_8030D5C8_000016DC
    andi. r5, r5, 0x3
    beq lbl_fn_8030D5C8_000017E0
lbl_fn_8030D5C8_000017A8:
    mtctr r5
lbl_fn_8030D5C8_000017AC:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_8030D5C8_000017AC
lbl_fn_8030D5C8_000017E0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8030D5C8_000017F4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8030D5C8_000017F4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_8030D5C8_000017FC:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x18
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x14(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x20(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x24(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8030D9F0(void)
{
    nofralloc
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x62c(r3)
    lfs f2, 0x61c(r3)
    psq_l f1, 0x614(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lfs f0, 0x620(r3)
    stfs f0, 0x10(r4)
    blr
}

asm void fn_8030DA1C(void)
{
    nofralloc
    blr
}

asm void fn_8030DA20(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    mr r31, r3
    stw r30, 0x218(r1)
    stw r29, 0x214(r1)
    stw r28, 0x210(r1)
    mr r28, r5
    bl fn_805A3C58
    addi r6, r31, 0x14fc
    addi r3, r31, 0x152c
    lfs f1, lbl_80884C40
    lis r5, lbl_80788220@ha
    li r4, 0x0
    lfs f0, lbl_80884C44
    addi r5, r5, lbl_80788220@l
    li r0, 0x1
    cmplw r6, r3
    stw r5, 0x0(r31)
    stw r4, 0x14d4(r31)
    stw r0, 0x14d8(r31)
    stw r4, 0x14dc(r31)
    stw r4, 0x14e0(r31)
    stfs f1, 0x14e4(r31)
    stfs f0, 0x14e8(r31)
    stw r4, 0x14ec(r31)
    stw r4, 0x14f0(r31)
    stw r4, 0x14f4(r31)
    stw r4, 0x14f8(r31)
    bge lbl_fn_8030DA20_00001938
    addi r0, r3, 0xf
    subf r0, r6, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_8030DA20_00001938
lbl_fn_8030DA20_00001920:
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    stw r4, 0x8(r6)
    stw r4, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_8030DA20_00001920
lbl_fn_8030DA20_00001938:
    addi r6, r31, 0x153c
    addi r3, r31, 0x156c
    lfs f0, lbl_80884C48
    cmplw r6, r3
    li r5, -0x1
    li r4, 0x0
    stw r5, 0x152c(r31)
    stfs f0, 0x1530(r31)
    stw r5, 0x1534(r31)
    stw r4, 0x1538(r31)
    bge lbl_fn_8030DA20_00001990
    addi r0, r3, 0xf
    subf r0, r6, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_8030DA20_00001990
lbl_fn_8030DA20_00001978:
    stw r5, 0x0(r6)
    stfs f0, 0x4(r6)
    stw r5, 0x8(r6)
    stw r4, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_8030DA20_00001978
lbl_fn_8030DA20_00001990:
    li r0, 0x3
    li r3, 0x384
    li r4, 0x4b0
    stw r3, 0x1570(r31)
    addi r3, r31, 0x1580
    stw r4, 0x1574(r31)
    stw r0, 0x1578(r31)
    stw r0, 0x157c(r31)
    bl fn_802377B8
    addi r3, r31, 0x158c
    bl fn_802377B8
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r28, 0x2c
    bl fn_805A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_8030DA20_000019F0
    lis r4, lbl_807490AC@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807490AC@l
    addi r5, r1, 0x108
    crclr 6
    bl sprintf
    b lbl_fn_8030DA20_00001A08
lbl_fn_8030DA20_000019F0:
    lis r4, lbl_807490AC@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807490AC@l
    addi r4, r4, 0x1c
    crclr 6
    bl sprintf
lbl_fn_8030DA20_00001A08:
    lwz r12, 0x14b4(r31)
    addi r3, r31, 0x14b4
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r28, lbl_807490AC@ha
    addi r3, r31, 0x1580
    addi r28, r28, lbl_807490AC@l
    addi r4, r28, 0x48
    bl fn_8023780C
    addi r3, r31, 0x158c
    addi r4, r28, 0x5e
    bl fn_8023780C
    lfs f3, lbl_80884C4C
    li r8, -0x1
    li r7, 0x2
    li r11, 0x0
    lfs f2, lbl_80884C50
    li r3, 0x4e2
    lfs f1, lbl_80884C54
    li r28, 0xf0
    lfs f0, lbl_80884C58
    li r29, 0x4e3
    li r30, 0x78
    li r12, 0x4e4
    li r10, 0x4e5
    li r9, 0x13f
    li r6, 0x142
    li r5, 0x1
    li r4, 0x145
    li r0, 0x14a
    stw r3, 0x14ec(r31)
    mr r3, r31
    stw r28, 0x14f4(r31)
    stw r29, 0x14fc(r31)
    stw r30, 0x1504(r31)
    stw r12, 0x150c(r31)
    stw r11, 0x1514(r31)
    stw r10, 0x151c(r31)
    stw r11, 0x1524(r31)
    stw r9, 0x152c(r31)
    stfs f3, 0x1530(r31)
    stw r8, 0x1534(r31)
    stw r7, 0x1538(r31)
    stw r6, 0x153c(r31)
    stfs f2, 0x1540(r31)
    stw r8, 0x1544(r31)
    stw r5, 0x1548(r31)
    stw r4, 0x154c(r31)
    stfs f1, 0x1550(r31)
    stw r8, 0x1554(r31)
    stw r7, 0x1558(r31)
    stw r0, 0x155c(r31)
    stfs f0, 0x1560(r31)
    stw r8, 0x1564(r31)
    stw r7, 0x1568(r31)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r28, 0x210(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}
