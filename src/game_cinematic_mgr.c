#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AF38(void);
extern void fn_800897D8(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800CB3A0(void);
extern void fn_800E2DD4(void);
extern void fn_800E2FE0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8011D21C(void);
extern void fn_8013CB68(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_80161570(void);
extern void fn_8016D74C(void);
extern void fn_8016EB48(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802375C4(void);
extern void fn_8023781C(void);
extern void fn_8023A8B4(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 dtor_80013D60[];
extern u8 lbl_80749F68[];
extern u8 lbl_8074A138[];
extern u8 lbl_8074A154[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80788FC0[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_80885078;
extern u32 lbl_8088507C;
extern u32 lbl_808850A0;
extern u32 lbl_808850A4;
extern u32 lbl_808850B8;
extern u32 lbl_808850BC;
extern u32 lbl_808850C0;
extern u32 lbl_808850C4;
extern u32 lbl_80885114;
extern u32 lbl_8088512C;
extern u32 lbl_80885130;
extern u32 lbl_80885134;
extern u32 lbl_80885138;
extern u32 lbl_8088513C;
extern u32 lbl_80885140;
extern u32 lbl_80885144;
extern u32 lbl_80885148;
extern u32 lbl_8088514C;
extern u32 lbl_80885150;
extern u32 lbl_80885154;
extern u32 lbl_80885158;
extern u32 lbl_8088515C;
extern u32 lbl_80885160;
extern u32 lbl_80885164;
extern u32 lbl_80885168;
extern u32 lbl_8088516C;
extern u32 lbl_80885170;
extern u32 lbl_80885174;
extern u32 lbl_80885178;
extern u32 lbl_8088517C;
extern u32 lbl_80885180;
extern u32 lbl_80885184;
extern u32 lbl_80885188;
extern u32 lbl_8088518C;

/* Function declarations */
void fn_80332B44(void);
void fn_80332BE0(void);
void fn_80332F78(void);
void fn_80333024(void);
void fn_803333BC(void);
void fn_803334D0(void);
void fn_803335C4(void);
void fn_8033385C(void);
void fn_803338D8(void);
void fn_80333A6C(void);
void fn_80333C40(void);
void fn_80333D68(void);
void fn_803342EC(void);
void fn_80334460(void);

asm void fn_80332B44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_80332B44_0000005C
    cmpwi r4, 0x7
    beq lbl_fn_80332B44_0000005C
    cmpwi r4, 0xe
    beq lbl_fn_80332B44_0000005C
    stw r4, 0x15a8(r30)
lbl_fn_80332B44_0000005C:
    lwz r0, 0x12a4(r30)
    li r3, 0x9
    stw r3, 0x58c(r30)
    mr r3, r30
    rlwinm r0, r0, 0, 27, 25
    lwz r4, 0x14d8(r30)
    stw r0, 0x12a4(r30)
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80332BE0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    lfs f31, lbl_8088507C
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80332BE0_00000390
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808850BC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80332BE0_00000134
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80332BE0_00000134:
    lfs f2, 0x10(r1)
    addi r3, r1, 0x8
    lfs f0, lbl_808850BC
    addi r31, r1, 0x14
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80332BE0_00000184
    lfs f3, 0x14(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80332BE0_00000178
    lfs f0, lbl_808850C0
    b lbl_fn_80332BE0_0000017C
lbl_fn_80332BE0_00000178:
    lfs f0, lbl_808850C4
lbl_fn_80332BE0_0000017C:
    stfs f0, 0x24(r1)
    b lbl_fn_80332BE0_00000198
lbl_fn_80332BE0_00000184:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_80332BE0_00000198:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885078
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f29, 0xb4(r1)
    lfs f0, lbl_8088507C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0x74(r1)
    stfs f30, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808850BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80332BE0_000002B4
    lfs f3, 0x30(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80332BE0_000002A4
    lfs f0, lbl_808850C0
    b lbl_fn_80332BE0_000002A8
lbl_fn_80332BE0_000002A4:
    lfs f0, lbl_808850C4
lbl_fn_80332BE0_000002A8:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_80332BE0_000002C8
lbl_fn_80332BE0_000002B4:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_80332BE0_000002C8:
    addi r3, r1, 0x20
    lfs f2, lbl_80885078
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x538(r30)
    lfs f3, 0x18(r1)
    lfs f0, lbl_808850B8
    fsubs f3, f3, f4
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80332BE0_00000308
    lfs f0, lbl_808850A4
    fsubs f0, f3, f0
    fmadds f31, f31, f0, f4
    b lbl_fn_80332BE0_00000328
lbl_fn_80332BE0_00000308:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    bge lbl_fn_80332BE0_00000324
    lfs f0, lbl_808850A4
    fadds f0, f0, f3
    fmadds f31, f31, f0, f4
    b lbl_fn_80332BE0_00000328
lbl_fn_80332BE0_00000324:
    fmadds f31, f31, f3, f4
lbl_fn_80332BE0_00000328:
    lfs f0, 0x538(r30)
    lis r3, lbl_80749F68@ha
    lfd f2, lbl_80749F68@l(r3)
    fsubs f1, f31, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_80332BE0_00000354
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_80332BE0_00000354:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    lis r3, lbl_80749F68@ha
    frsp f1, f31
    stfs f31, 0x538(r30)
    lfd f2, lbl_80749F68@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_80332BE0_00000388
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_80332BE0_00000388:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
lbl_fn_80332BE0_00000390:
    li r31, 0x0
    stw r31, 0x14b8(r30)
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_80332BE0_000003D4
    cmpwi r4, 0x7
    beq lbl_fn_80332BE0_000003D4
    cmpwi r4, 0xe
    beq lbl_fn_80332BE0_000003D4
    stw r4, 0x15a8(r30)
lbl_fn_80332BE0_000003D4:
    lfs f1, lbl_80885114
    li r4, 0xc
    lwz r0, 0x12a4(r30)
    mr r3, r30
    fmr f2, f1
    stw r4, 0x58c(r30)
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x145
    stw r0, 0x12a4(r30)
    li r5, 0x0
    li r6, 0x0
    bl fn_80161570
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80332F78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_80332F78_00000490
    cmpwi r4, 0x7
    beq lbl_fn_80332F78_00000490
    cmpwi r4, 0xe
    beq lbl_fn_80332F78_00000490
    stw r4, 0x15a8(r30)
lbl_fn_80332F78_00000490:
    lfs f1, lbl_80885114
    li r4, 0xe
    lwz r0, 0x12a4(r30)
    mr r3, r30
    fmr f2, f1
    stw r4, 0x58c(r30)
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x140
    stw r0, 0x12a4(r30)
    li r5, 0x0
    li r6, 0x0
    bl fn_80161570
    lfs f0, lbl_8088512C
    stfs f0, 0x2e8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80333024(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    lfs f31, lbl_8088507C
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80333024_000007D4
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808850BC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80333024_00000578
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80333024_00000578:
    lfs f2, 0x10(r1)
    addi r3, r1, 0x8
    lfs f0, lbl_808850BC
    addi r31, r1, 0x14
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80333024_000005C8
    lfs f3, 0x14(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80333024_000005BC
    lfs f0, lbl_808850C0
    b lbl_fn_80333024_000005C0
lbl_fn_80333024_000005BC:
    lfs f0, lbl_808850C4
lbl_fn_80333024_000005C0:
    stfs f0, 0x24(r1)
    b lbl_fn_80333024_000005DC
lbl_fn_80333024_000005C8:
    frsp f2, f2
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_80333024_000005DC:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885078
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f29, 0xb4(r1)
    lfs f0, lbl_8088507C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f29, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f29, 0x74(r1)
    stfs f30, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_808850BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80333024_000006F8
    lfs f3, 0x30(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80333024_000006E8
    lfs f0, lbl_808850C0
    b lbl_fn_80333024_000006EC
lbl_fn_80333024_000006E8:
    lfs f0, lbl_808850C4
lbl_fn_80333024_000006EC:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_80333024_0000070C
lbl_fn_80333024_000006F8:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_80333024_0000070C:
    addi r3, r1, 0x20
    lfs f2, lbl_80885078
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x538(r30)
    lfs f3, 0x18(r1)
    lfs f0, lbl_808850B8
    fsubs f3, f3, f4
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80333024_0000074C
    lfs f0, lbl_808850A4
    fsubs f0, f3, f0
    fmadds f31, f31, f0, f4
    b lbl_fn_80333024_0000076C
lbl_fn_80333024_0000074C:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    bge lbl_fn_80333024_00000768
    lfs f0, lbl_808850A4
    fadds f0, f0, f3
    fmadds f31, f31, f0, f4
    b lbl_fn_80333024_0000076C
lbl_fn_80333024_00000768:
    fmadds f31, f31, f3, f4
lbl_fn_80333024_0000076C:
    lfs f0, 0x538(r30)
    lis r3, lbl_80749F68@ha
    lfd f2, lbl_80749F68@l(r3)
    fsubs f1, f31, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_80333024_00000798
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_80333024_00000798:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    lis r3, lbl_80749F68@ha
    frsp f1, f31
    stfs f31, 0x538(r30)
    lfd f2, lbl_80749F68@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_80333024_000007CC
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_80333024_000007CC:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
lbl_fn_80333024_000007D4:
    li r31, 0x0
    stw r31, 0x14b8(r30)
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_80333024_00000818
    cmpwi r4, 0x7
    beq lbl_fn_80333024_00000818
    cmpwi r4, 0xe
    beq lbl_fn_80333024_00000818
    stw r4, 0x15a8(r30)
lbl_fn_80333024_00000818:
    lfs f1, lbl_80885114
    li r4, 0xf
    lwz r0, 0x12a4(r30)
    mr r3, r30
    fmr f2, f1
    stw r4, 0x58c(r30)
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x142
    stw r0, 0x12a4(r30)
    li r5, 0x0
    li r6, 0x0
    bl fn_80161570
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803333BC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_803333BC_000008D4
    cmpwi r4, 0x7
    beq lbl_fn_803333BC_000008D4
    cmpwi r4, 0xe
    beq lbl_fn_803333BC_000008D4
    stw r4, 0x15a8(r30)
lbl_fn_803333BC_000008D4:
    lfs f1, lbl_80885114
    li r4, 0x12
    lwz r0, 0x12a4(r30)
    mr r3, r30
    fmr f2, f1
    stw r4, 0x58c(r30)
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x140
    stw r0, 0x12a4(r30)
    li r5, 0x0
    li r6, 0x0
    bl fn_80161570
    mr r3, r30
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80885078
    li r3, -0x1
    lfs f1, lbl_8088507C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x17a4
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
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

asm void fn_803334D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803334D0_00000A60
    li r4, -0x1
    addi r3, r3, 0x17b0
    bl fn_802375C4
    addic. r31, r29, 0x17a4
    beq lbl_fn_803334D0_000009E0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803334D0_000009E0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803334D0_000009E0:
    addic. r3, r29, 0x1614
    beq lbl_fn_803334D0_00000A04
    beq lbl_fn_803334D0_00000A04
    lis r4, dtor_80013D60@ha
    addi r3, r3, 0x4
    addi r4, r4, dtor_80013D60@l
    li r5, 0xc
    li r6, 0x5
    bl fn_806959D8
lbl_fn_803334D0_00000A04:
    addi r3, r29, 0x15b0
    li r4, -0x1
    bl fn_800CB3A0
    addic. r0, r29, 0x158c
    beq lbl_fn_803334D0_00000A34
    lwz r4, 0x158c(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803334D0_00000A34
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803334D0_00000A34
    bl fn_800897D8
lbl_fn_803334D0_00000A34:
    addic. r3, r29, 0x14b0
    beq lbl_fn_803334D0_00000A44
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803334D0_00000A44:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_803334D0_00000A60
    mr r3, r29
    bl dtor_80084684
lbl_fn_803334D0_00000A60:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803335C4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r27, r5
    lwz r5, 0x20(r5)
    mr r31, r3
    bl fn_8035B694
    lis r3, lbl_80788FC0@ha
    addi r30, r31, 0x14b0
    addi r3, r3, lbl_80788FC0@l
    stw r3, 0x0(r31)
    mr r3, r30
    bl fn_80473E74
    lfs f0, lbl_80885130
    lis r3, lbl_8078FBB0@ha
    li r4, 0x78
    li r0, 0xcd
    li r5, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    lis r29, lbl_8074A154@ha
    addi r29, r29, lbl_8074A154@l
    addi r30, r1, 0x2c
    stw r4, 0x14c0(r31)
    mr r3, r29
    stw r0, 0x14c4(r31)
    stw r4, 0x14cc(r31)
    stfs f0, 0x1420(r31)
    stw r5, 0x14b8(r31)
    stw r5, 0x14bc(r31)
    stw r5, 0x14c8(r31)
    stw r5, 0x14d0(r31)
    stw r5, 0x14d8(r31)
    stw r5, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r5, 0x34(r1)
    bl strlen
    mr r28, r3
    mr r3, r30
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r30
    stb r0, 0x18(r1)
    mr r6, r29
    add r7, r29, r28
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r27, 0x2c
    addi r4, r29, 0x2f
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_803335C4_00000C68
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803335C4_00000B80
    lbz r0, 0x2c(r1)
    clrlwi r28, r0, 25
    b lbl_fn_803335C4_00000B84
lbl_fn_803335C4_00000B80:
    lwz r28, 0x30(r1)
lbl_fn_803335C4_00000B84:
    lbz r0, 0x14(r1)
    addi r3, r3, 0x8
    stb r0, 0x10(r1)
    bl strlen
    add r4, r30, r3
    mr r5, r28
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r30, 0x8
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
    lis r4, lbl_8074A154@ha
    addi r3, r1, 0x20
    addi r4, r4, lbl_8074A154@l
    addi r5, r1, 0x2c
    addi r4, r4, 0x38
    bl fn_8006AF38
    lwz r0, 0x2c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803335C4_00000BFC
    lwz r4, 0x20(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803335C4_00000BFC
    lwz r3, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_803335C4_00000C54
lbl_fn_803335C4_00000BFC:
    cmpwi r3, 0x0
    beq lbl_fn_803335C4_00000C0C
    lwz r5, 0x30(r1)
    b lbl_fn_803335C4_00000C14
lbl_fn_803335C4_00000C0C:
    lbz r0, 0x2c(r1)
    clrlwi r5, r0, 25
lbl_fn_803335C4_00000C14:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803335C4_00000C30
    lbz r0, 0x20(r1)
    addi r6, r1, 0x21
    clrlwi r4, r0, 25
    b lbl_fn_803335C4_00000C38
lbl_fn_803335C4_00000C30:
    lwz r6, 0x28(r1)
    lwz r4, 0x24(r1)
lbl_fn_803335C4_00000C38:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x2c
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_803335C4_00000C54:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803335C4_00000C68
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_803335C4_00000C68:
    lwz r0, 0x2c(r1)
    addi r3, r31, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_803335C4_00000C80
    addi r4, r1, 0x2d
    b lbl_fn_803335C4_00000C84
lbl_fn_803335C4_00000C80:
    lwz r4, 0x34(r1)
lbl_fn_803335C4_00000C84:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_8074A154@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_8074A154@l
    li r4, 0x13f
    addi r5, r30, 0x51
    bl fn_80097A88
    addi r3, r31, 0xb0
    addi r5, r30, 0x67
    li r4, 0x142
    bl fn_80097A88
    addi r3, r31, 0xb0
    addi r5, r30, 0x7e
    li r4, 0x143
    bl fn_80097A88
    addi r3, r31, 0xb0
    addi r5, r30, 0x95
    li r4, 0x144
    bl fn_80097A88
    lwz r0, 0x12a8(r31)
    ori r0, r0, 0x10
    stw r0, 0x12a8(r31)
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803335C4_00000CFC
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_803335C4_00000CFC:
    addi r11, r1, 0x50
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8033385C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8033385C_00000D44
    li r3, 0x0
    b lbl_fn_8033385C_00000D80
lbl_fn_8033385C_00000D44:
    mr r3, r31
    bl fn_800E2DD4
    cmpwi r3, 0x0
    beq lbl_fn_8033385C_00000D7C
    mr r3, r31
    bl fn_803338D8
    lwz r4, 0x14a8(r31)
    li r3, 0x1
    lwz r0, 0x54c(r31)
    oris r4, r4, 0x100
    stw r4, 0x14a8(r31)
    oris r0, r0, 0x800
    stw r0, 0x54c(r31)
    b lbl_fn_8033385C_00000D80
lbl_fn_8033385C_00000D7C:
    li r3, 0x0
lbl_fn_8033385C_00000D80:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803338D8(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r3, 0x14b0
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_8074A154@ha
    addi r31, r31, lbl_8074A154@l
lbl_fn_803338D8_00000E44:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r30, r3
    extsb. r0, r0
    beq lbl_fn_803338D8_00000EFC
    cmpwi r0, 0x3b
    beq lbl_fn_803338D8_00000EFC
    addi r4, r31, 0xac
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803338D8_00000E88
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14c0(r29)
    b lbl_fn_803338D8_00000EFC
lbl_fn_803338D8_00000E88:
    mr r3, r30
    addi r4, r31, 0xba
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803338D8_00000EB0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14c4(r29)
    b lbl_fn_803338D8_00000EFC
lbl_fn_803338D8_00000EB0:
    mr r3, r30
    addi r4, r31, 0xc7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803338D8_00000ED8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14cc(r29)
    b lbl_fn_803338D8_00000EFC
lbl_fn_803338D8_00000ED8:
    mr r3, r30
    addi r4, r31, 0xd6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803338D8_00000EFC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14d0(r29)
lbl_fn_803338D8_00000EFC:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803338D8_00000E44
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80333A6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80333A6C_00000F58
    cmpwi r0, 0x7
    beq lbl_fn_80333A6C_00000F70
    b lbl_fn_80333A6C_00000F88
lbl_fn_80333A6C_00000F58:
    bl fn_80334460
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_80333A6C_000010E4
lbl_fn_80333A6C_00000F70:
    bl fn_80333D68
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_80333A6C_000010E4
lbl_fn_80333A6C_00000F88:
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80333A6C_00000FB4
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80333A6C_00000FB4
    li r6, 0x1
lbl_fn_80333A6C_00000FB4:
    cmpwi r6, 0x0
    beq lbl_fn_80333A6C_00000FD0
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80333A6C_00000FD0
    li r4, 0x1
lbl_fn_80333A6C_00000FD0:
    cmpwi r4, 0x0
    beq lbl_fn_80333A6C_00001004
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80333A6C_00000FF8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80333A6C_00000FF8
    li r4, 0x1
lbl_fn_80333A6C_00000FF8:
    cmpwi r4, 0x0
    bne lbl_fn_80333A6C_00001004
    li r5, 0x1
lbl_fn_80333A6C_00001004:
    cmpwi r5, 0x0
    beq lbl_fn_80333A6C_000010BC
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80333A6C_000010BC
    lwz r0, 0xd18(r3)
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80333A6C_00001054
    addi r3, r3, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    beq lbl_fn_80333A6C_00001054
    lwz r3, 0xd1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80333A6C_00001054
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80333A6C_00001054
    li r30, 0x1
lbl_fn_80333A6C_00001054:
    cmpwi r30, 0x0
    beq lbl_fn_80333A6C_000010BC
    lwz r0, 0x14c4(r31)
    lwz r4, 0x14bc(r31)
    lwz r3, 0x14c8(r31)
    cmpwi r0, 0x0
    addi r4, r4, 0x1
    stw r4, 0x14bc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c8(r31)
    ble lbl_fn_80333A6C_00001098
    lwz r0, 0x14c0(r31)
    cmpw r4, r0
    blt lbl_fn_80333A6C_00001098
    mr r3, r31
    bl fn_803342EC
    b lbl_fn_80333A6C_000010BC
lbl_fn_80333A6C_00001098:
    lwz r0, 0x14d0(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80333A6C_000010BC
    lwz r3, 0x14c8(r31)
    lwz r0, 0x14cc(r31)
    cmpw r3, r0
    blt lbl_fn_80333A6C_000010BC
    mr r3, r31
    bl fn_80333C40
lbl_fn_80333A6C_000010BC:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    bge lbl_fn_80333A6C_000010D4
    mr r3, r31
    bl fn_800E2FE0
    b lbl_fn_80333A6C_000010E4
lbl_fn_80333A6C_000010D4:
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
lbl_fn_80333A6C_000010E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80333C40(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f4, lbl_80885134
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    li r31, 0x0
    stw r30, 0x78(r1)
    addi r30, r1, 0x14
    stw r29, 0x74(r1)
    addi r29, r1, 0x8
    stw r28, 0x70(r1)
    mr r28, r3
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r4, 0xd1c(r3)
    lfs f0, 0x18(r1)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    fadds f3, f0, f4
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0xc(r1)
    stw r31, 0x54(r1)
    stw r31, 0x58(r1)
    stw r31, 0x5c(r1)
    stw r31, 0x60(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    lwz r3, lbl_8087EE98
    mr r5, r30
    mr r6, r29
    addi r4, r1, 0x20
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80333C40_000011B4
    lwz r3, 0x14c8(r28)
    subi r0, r3, 0x1e
    stw r0, 0x14c8(r28)
    b lbl_fn_80333C40_00001204
lbl_fn_80333C40_000011B4:
    li r0, 0x7
    stw r0, 0x58c(r28)
    lfs f1, lbl_80885138
    addi r3, r28, 0xb0
    stw r31, 0x14b8(r28)
    li r4, 0x0
    lfs f2, lbl_8088513C
    li r5, 0x142
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885140
    li r3, 0x1
    lwz r0, 0xd1c(r28)
    stw r3, 0x3fc(r28)
    stfs f0, 0x2fc(r28)
    stfs f0, 0x2e8(r28)
    stw r0, 0x14d8(r28)
    stw r31, 0x14c8(r28)
lbl_fn_80333C40_00001204:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80333D68(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80333D68_00001268
    li r0, 0x0
    stw r0, 0x58c(r3)
    b lbl_fn_80333D68_0000177C
lbl_fn_80333D68_00001268:
    lwz r4, 0x14b8(r3)
    lwz r0, 0x12a4(r3)
    cmpwi r4, 0x0
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    bne lbl_fn_80333D68_0000153C
    lwz r4, 0x14d8(r3)
    addi r30, r1, 0x88
    lfs f3, lbl_80885138
    lfs f4, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f5, 0x528(r4)
    fsubs f2, f4, f0
    lfs f4, 0x528(r3)
    lfs f0, lbl_80885144
    fsubs f1, f5, f4
    stfs f2, 0x90(r1)
    fabs f4, f2
    stfs f1, 0x88(r1)
    frsp f4, f4
    stfs f3, 0x8c(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80333D68_000012E0
    fcmpo cr0, f1, f3
    ble lbl_fn_80333D68_000012D4
    lfs f0, lbl_80885148
    b lbl_fn_80333D68_000012D8
lbl_fn_80333D68_000012D4:
    lfs f0, lbl_8088514C
lbl_fn_80333D68_000012D8:
    stfs f0, 0x14(r1)
    b lbl_fn_80333D68_000012EC
lbl_fn_80333D68_000012E0:
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x14(r1)
lbl_fn_80333D68_000012EC:
    lfs f0, 0x14(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885138
    addi r4, r1, 0x1c
    lfs f4, 0x110(r1)
    mr r5, r4
    lfs f5, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f6, 0x108(r1)
    lfs f7, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f9, 0x118(r1)
    lfs f10, 0x130(r1)
    lfs f11, 0x12c(r1)
    lfs f12, 0x128(r1)
    lfs f13, 0x134(r1)
    lfs f31, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80885140
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x90(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f30, 0xd4(r1)
    stfs f31, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x24(r1)
    bl fn_805F9750
    lfs f2, 0x24(r1)
    lfs f0, lbl_80885144
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80333D68_00001408
    lfs f3, 0x20(r1)
    lfs f0, lbl_80885138
    fcmpo cr0, f3, f0
    ble lbl_fn_80333D68_000013F8
    lfs f0, lbl_80885148
    b lbl_fn_80333D68_000013FC
lbl_fn_80333D68_000013F8:
    lfs f0, lbl_8088514C
lbl_fn_80333D68_000013FC:
    fneg f0, f0
    stfs f0, 0x10(r1)
    b lbl_fn_80333D68_0000141C
lbl_fn_80333D68_00001408:
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x10(r1)
lbl_fn_80333D68_0000141C:
    addi r3, r1, 0x10
    lfs f4, lbl_80885138
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A138@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x8c(r1)
    stfs f2, 0x90(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8074A138@l(r3)
    stfs f4, 0x18(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80885150
    fcmpo cr0, f4, f0
    ble lbl_fn_80333D68_00001468
    lfs f0, lbl_80885154
    fsubs f4, f4, f0
lbl_fn_80333D68_00001468:
    lfs f0, lbl_80885158
    fcmpo cr0, f4, f0
    bge lbl_fn_80333D68_0000147C
    lfs f0, lbl_80885154
    fadds f4, f4, f0
lbl_fn_80333D68_0000147C:
    lfs f3, lbl_8088515C
    lis r3, lbl_8074A138@ha
    lfs f0, 0x538(r31)
    fmuls f3, f4, f3
    lfd f2, lbl_8074A138@l(r3)
    fadds f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885150
    fcmpo cr0, f3, f0
    ble lbl_fn_80333D68_000014B0
    lfs f0, lbl_80885154
    fsubs f3, f3, f0
lbl_fn_80333D68_000014B0:
    lfs f0, lbl_80885158
    fcmpo cr0, f3, f0
    bge lbl_fn_80333D68_000014C4
    lfs f0, lbl_80885154
    fadds f3, f3, f0
lbl_fn_80333D68_000014C4:
    stfs f3, 0x538(r31)
    addi r3, r31, 0xb0
    lfs f30, 0x2e4(r31)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80333D68_0000177C
    lfs f1, lbl_80885138
    addi r3, r31, 0xb0
    lfs f2, lbl_8088513C
    li r4, 0x0
    li r5, 0x143
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b8(r31)
    lfs f3, lbl_80885160
    lfs f0, lbl_80885138
    addi r0, r3, 0x1
    stfs f3, 0x2e8(r31)
    stfs f0, 0x14d4(r31)
    stw r0, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    li r0, 0x0
    stw r3, 0x590(r31)
    stw r0, 0xf08(r31)
    b lbl_fn_80333D68_0000177C
lbl_fn_80333D68_0000153C:
    cmpwi r4, 0x1
    bne lbl_fn_80333D68_00001718
    lwz r5, lbl_8087EFA8
    addi r30, r1, 0x7c
    lfs f0, 0x14d4(r3)
    addi r4, r3, 0x534
    lfs f3, 0x3a4(r5)
    li r5, 0x1
    psq_l f1, 0x528(r3), 0, 0
    fadds f0, f0, f3
    lfs f2, 0x530(r3)
    stfs f0, 0x14d4(r3)
    psq_st f1, 0x0(r30), 0, 0
    lfs f1, lbl_80885140
    stfs f2, 0x84(r1)
    lfs f2, lbl_80885164
    bl fn_8013CB68
    lfs f3, lbl_80885138
    addi r3, r1, 0x98
    lfs f0, lbl_80885140
    li r4, 0x79
    stfs f3, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f0, 0x60(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x58
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x60(r1)
    lfs f5, lbl_80885168
    lfs f3, 0x5c(r1)
    fmuls f6, f4, f5
    lfs f4, 0x530(r31)
    fmuls f7, f3, f5
    lfs f0, 0x58(r1)
    lfs f3, 0x52c(r31)
    fmuls f5, f0, f5
    lfs f0, 0x528(r31)
    fadds f4, f4, f6
    fadds f3, f3, f7
    stfs f5, 0x64(r1)
    fadds f0, f0, f5
    stfs f3, 0x74(r1)
    lwz r29, lbl_8087F048
    stfs f0, 0x70(r1)
    stfs f4, 0x78(r1)
    stfs f7, 0x68(r1)
    lwz r3, 0x14d0(r31)
    stfs f6, 0x6c(r1)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80885138
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80885140
    mr r4, r31
    lwz r6, 0x590(r31)
    addi r7, r1, 0x70
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lfs f3, 0x7c(r1)
    lfs f0, 0x528(r31)
    lfs f6, 0x80(r1)
    fsubs f0, f3, f0
    lfs f5, 0x84(r1)
    lfs f3, lbl_80885138
    stfs f0, 0x7c(r1)
    lfs f0, lbl_80885140
    lfs f4, 0x52c(r31)
    fsubs f4, f6, f4
    stfs f4, 0x80(r1)
    lfs f4, 0x530(r31)
    fsubs f4, f5, f4
    stfs f3, 0x80(r1)
    stfs f4, 0x84(r1)
    lfs f3, 0x570(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_80333D68_000016B0
    mr r3, r30
    bl fn_805F9920
    lfs f0, lbl_8088516C
    fcmpo cr0, f1, f0
    bge lbl_fn_80333D68_000016B0
    lwz r3, 0xf08(r31)
    addi r0, r3, 0x1
    stw r0, 0xf08(r31)
    b lbl_fn_80333D68_000016B8
lbl_fn_80333D68_000016B0:
    li r0, 0x0
    stw r0, 0xf08(r31)
lbl_fn_80333D68_000016B8:
    lfs f3, 0x14d4(r31)
    lfs f0, lbl_80885170
    fcmpo cr0, f3, f0
    bgt lbl_fn_80333D68_000016D4
    lwz r0, 0xf08(r31)
    cmpwi r0, 0x2
    ble lbl_fn_80333D68_0000177C
lbl_fn_80333D68_000016D4:
    li r0, 0x0
    stw r0, 0xf08(r31)
    lfs f1, lbl_80885138
    addi r3, r31, 0xb0
    lfs f2, lbl_8088513C
    li r4, 0x0
    li r5, 0x144
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b8(r31)
    lfs f0, lbl_80885140
    addi r0, r3, 0x1
    stfs f0, 0x2e8(r31)
    stw r0, 0x14b8(r31)
    b lbl_fn_80333D68_0000177C
lbl_fn_80333D68_00001718:
    lfs f1, lbl_80885138
    addi r4, r3, 0x534
    lfs f2, lbl_80885140
    li r5, 0x1
    bl fn_8013CB68
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80333D68_0000177C
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80333D68_0000177C:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_803342EC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lfs f6, lbl_80885174
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    addi r30, r1, 0x20
    stw r29, 0x84(r1)
    addi r29, r1, 0x14
    stw r28, 0x80(r1)
    mr r28, r3
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f0, f2
    stfs f2, 0x28(r1)
    lfs f3, 0x24(r1)
    lwz r4, 0xd1c(r3)
    addi r3, r1, 0x8
    fadds f5, f3, f6
    lfs f3, 0x20(r1)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    fsubs f7, f0, f2
    lfs f4, 0x18(r1)
    lfs f0, 0x14(r1)
    fadds f4, f4, f6
    stfs f2, 0x1c(r1)
    fsubs f3, f3, f0
    stfs f5, 0x24(r1)
    fsubs f0, f5, f4
    stfs f4, 0x18(r1)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f7, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80885178
    fcmpo cr0, f1, f0
    ble lbl_fn_803342EC_00001858
    lwz r3, 0x14bc(r28)
    subi r0, r3, 0x1e
    stw r0, 0x14bc(r28)
    b lbl_fn_803342EC_000018FC
lbl_fn_803342EC_00001858:
    li r31, 0x0
    stw r31, 0x64(r1)
    mr r3, r28
    stw r31, 0x68(r1)
    stw r31, 0x6c(r1)
    stw r31, 0x70(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    lwz r3, lbl_8087EE98
    mr r5, r30
    mr r6, r29
    addi r4, r1, 0x30
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803342EC_000018AC
    lwz r3, 0x14bc(r28)
    subi r0, r3, 0x1e
    stw r0, 0x14bc(r28)
    b lbl_fn_803342EC_000018FC
lbl_fn_803342EC_000018AC:
    li r0, 0x6
    stw r0, 0x58c(r28)
    lfs f1, lbl_80885138
    addi r3, r28, 0xb0
    stw r31, 0x14b8(r28)
    li r4, 0x0
    lfs f2, lbl_8088513C
    li r5, 0x13f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885140
    li r3, 0x1
    lwz r0, 0xd1c(r28)
    stw r3, 0x3fc(r28)
    stfs f0, 0x2fc(r28)
    stfs f0, 0x2e8(r28)
    stw r0, 0x14d8(r28)
    stw r31, 0x14bc(r28)
lbl_fn_803342EC_000018FC:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80334460(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stw r31, 0x19c(r1)
    mr r31, r3
    stw r30, 0x198(r1)
    stw r29, 0x194(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80334460_00001960
    li r0, 0x0
    stw r0, 0x58c(r3)
    b lbl_fn_80334460_00001E68
lbl_fn_80334460_00001960:
    lwz r0, 0x14b8(r3)
    lwz r4, 0x12a4(r3)
    cmpwi r0, 0x0
    rlwinm r4, r4, 0, 27, 25
    stw r4, 0x12a4(r3)
    bne lbl_fn_80334460_00001E18
    lfs f0, 0x2e4(r3)
    lfs f3, lbl_8088517C
    fcmpo cr0, f0, f3
    bge lbl_fn_80334460_00001D1C
    lwz r4, 0x14d8(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x530(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0xb8
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80885138
    fsubs f3, f4, f3
    stfs f5, 0xc0(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    bl fn_805F9920
    lfs f0, lbl_80885180
    fcmpo cr0, f1, f0
    ble lbl_fn_80334460_000019D4
    addi r3, r1, 0xb8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80334460_000019D4:
    lfs f2, 0xc0(r1)
    addi r3, r1, 0xb8
    lfs f0, lbl_80885144
    addi r30, r1, 0x94
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x9c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80334460_00001A24
    lfs f3, 0x94(r1)
    lfs f0, lbl_80885138
    fcmpo cr0, f3, f0
    ble lbl_fn_80334460_00001A18
    lfs f0, lbl_80885148
    b lbl_fn_80334460_00001A1C
lbl_fn_80334460_00001A18:
    lfs f0, lbl_8088514C
lbl_fn_80334460_00001A1C:
    stfs f0, 0x68(r1)
    b lbl_fn_80334460_00001A38
lbl_fn_80334460_00001A24:
    frsp f2, f2
    lfs f1, 0x94(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x68(r1)
lbl_fn_80334460_00001A38:
    lfs f0, 0x68(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885138
    addi r4, r1, 0x58
    lfs f30, 0xd0(r1)
    mr r5, r4
    lfs f31, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80885140
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x9c(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f13, 0xf8(r1)
    stfs f31, 0xfc(r1)
    stfs f30, 0x100(r1)
    stfs f10, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f12, 0x3c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x60(r1)
    bl fn_805F9750
    lfs f2, 0x60(r1)
    lfs f0, lbl_80885144
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80334460_00001B54
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80885138
    fcmpo cr0, f3, f0
    ble lbl_fn_80334460_00001B44
    lfs f0, lbl_80885148
    b lbl_fn_80334460_00001B48
lbl_fn_80334460_00001B44:
    lfs f0, lbl_8088514C
lbl_fn_80334460_00001B48:
    fneg f0, f0
    stfs f0, 0x64(r1)
    b lbl_fn_80334460_00001B68
lbl_fn_80334460_00001B54:
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x64(r1)
lbl_fn_80334460_00001B68:
    addi r3, r1, 0x64
    lfs f3, lbl_80885138
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A138@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r31)
    lfs f4, 0x98(r1)
    stfs f2, 0x9c(r1)
    fsubs f1, f4, f0
    lfd f2, lbl_8074A138@l(r3)
    stfs f3, 0x6c(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80885150
    fcmpo cr0, f4, f0
    ble lbl_fn_80334460_00001BB4
    lfs f0, lbl_80885154
    fsubs f4, f4, f0
lbl_fn_80334460_00001BB4:
    lfs f0, lbl_80885158
    fcmpo cr0, f4, f0
    bge lbl_fn_80334460_00001BC8
    lfs f0, lbl_80885154
    fadds f4, f4, f0
lbl_fn_80334460_00001BC8:
    lfs f3, lbl_8088515C
    lis r3, lbl_8074A138@ha
    lfs f0, 0x538(r31)
    fmuls f3, f4, f3
    lfd f2, lbl_8074A138@l(r3)
    fadds f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885150
    fcmpo cr0, f3, f0
    ble lbl_fn_80334460_00001BFC
    lfs f0, lbl_80885154
    fsubs f3, f3, f0
lbl_fn_80334460_00001BFC:
    lfs f0, lbl_80885158
    fcmpo cr0, f3, f0
    bge lbl_fn_80334460_00001C10
    lfs f0, lbl_80885154
    fadds f3, f3, f0
lbl_fn_80334460_00001C10:
    lfs f2, 0x530(r31)
    addi r4, r31, 0x14dc
    psq_l f1, 0x528(r31), 0, 0
    addi r6, r1, 0x88
    stfs f3, 0x538(r31)
    addi r5, r31, 0x14e8
    lfs f5, lbl_80885184
    addi r30, r1, 0xac
    psq_st f1, 0x0(r4), 0, 0
    addi r29, r1, 0xa0
    lwz r7, 0x14d8(r31)
    mr r3, r31
    stfs f2, 0x14e4(r31)
    lfs f4, lbl_80885188
    lfs f6, 0xc0(r1)
    lfs f0, 0xbc(r1)
    fmuls f6, f6, f5
    lfs f3, 0xb8(r1)
    fmuls f7, f0, f5
    lfs f0, 0x530(r7)
    fmuls f5, f3, f5
    lfs f3, 0x52c(r7)
    fsubs f8, f0, f6
    lfs f0, 0x528(r7)
    fsubs f3, f3, f7
    stfs f5, 0x7c(r1)
    fsubs f0, f0, f5
    fmr f2, f8
    stfs f3, 0x8c(r1)
    stfs f0, 0x88(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x14f0(r31)
    frsp f2, f2
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xb4(r1)
    lfs f0, 0xb0(r1)
    lfs f2, 0x14f0(r31)
    fadds f3, f0, f4
    stfs f7, 0x80(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0xa4(r1)
    stfs f6, 0x84(r1)
    fsubs f0, f0, f4
    stfs f8, 0x90(r1)
    stfs f2, 0xa8(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xa4(r1)
    bl fn_80179D44
    li r0, 0x0
    oris r7, r3, 0x8000
    stw r0, 0x16c(r1)
    mr r5, r30
    lwz r3, lbl_8087EE98
    mr r6, r29
    stw r0, 0x170(r1)
    addi r4, r1, 0x138
    li r8, 0x0
    li r9, 0x0
    stw r0, 0x174(r1)
    stw r0, 0x178(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80334460_00001E18
    lfs f0, 0x140(r1)
    stfs f0, 0x14ec(r31)
    b lbl_fn_80334460_00001E18
lbl_fn_80334460_00001D1C:
    fsubs f0, f0, f3
    lfs f11, lbl_80885140
    fdivs f0, f0, f3
    fcmpo cr0, f11, f0
    bge lbl_fn_80334460_00001D34
    b lbl_fn_80334460_00001D38
lbl_fn_80334460_00001D34:
    fmr f11, f0
lbl_fn_80334460_00001D38:
    lfs f0, 0x14f0(r3)
    addi r4, r1, 0x70
    lfs f5, 0x14e4(r3)
    lfs f3, 0x14ec(r3)
    fsubs f10, f0, f5
    lfs f4, 0x14e0(r3)
    lfs f0, 0x14e8(r3)
    fsubs f9, f3, f4
    lfs f3, 0x14dc(r3)
    fmuls f7, f10, f11
    fsubs f8, f0, f3
    lfs f12, 0x2e4(r3)
    fmuls f6, f9, f11
    fadds f2, f7, f5
    lfs f0, lbl_8088518C
    fmuls f5, f8, f11
    fadds f4, f6, f4
    stfs f8, 0x1c(r1)
    fcmpo cr0, f12, f0
    fadds f3, f5, f3
    stfs f4, 0x74(r1)
    stfs f3, 0x70(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f5, 0x10(r1)
    stfs f6, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f2, 0x78(r1)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    cror eq, gt, eq
    bne lbl_fn_80334460_00001E18
    lwz r4, 0x14b8(r3)
    addi r0, r4, 0x1
    stw r0, 0x14b8(r3)
    lwz r29, lbl_8087F048
    mr r3, r29
    bl fn_800F8548
    mr r30, r3
    lwz r3, 0x14c4(r31)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80885138
    mr r5, r3
    stw r0, 0xc(r1)
    mr r3, r29
    lfs f2, lbl_80885140
    mr r4, r31
    mr r6, r30
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_80334460_00001E18:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80334460_00001E68
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80334460_00001E68:
    lwz r0, 0x1c4(r1)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
