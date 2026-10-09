#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80061824(void);
extern void fn_80062C8C(void);
extern void fn_80063484(void);
extern void fn_80063764(void);
extern void fn_8006F2F0(void);
extern void fn_800BFAC8(void);
extern void fn_801255C8(void);
extern void fn_80128A30(void);
extern void fn_80139560(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8015E7A0(void);
extern void fn_8016EB48(void);
extern void fn_8017E9D8(void);
extern void fn_8017F118(void);
extern void fn_8017F348(void);
extern void fn_8017F4A0(void);
extern void fn_8017FBEC(void);
extern void fn_8017FED0(void);
extern void fn_80182788(void);
extern void fn_80183860(void);
extern void fn_8035B78C(void);
extern void fn_804AAFCC(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_8077C948[];
extern u8 lbl_8077C968[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80881B78;
extern u32 lbl_80881B7C;
extern u32 lbl_80881B80;
extern u32 lbl_80881B84;
extern u32 lbl_80881B88;
extern u32 lbl_80881B8C;
extern u32 lbl_80881B90;
extern u32 lbl_80881B94;
extern u32 lbl_80881B98;
extern u32 lbl_80881B9C;
extern u32 lbl_80881BA0;
extern u32 lbl_80881BA4;
extern u32 lbl_80881BA8;
extern u32 lbl_80881BAC;

/* Function declarations */
void fn_8017D000(void);
void fn_8017D0B0(void);
void fn_8017D138(void);
void fn_8017D13C(void);
void fn_8017E650(void);

asm void fn_8017D000(void)
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
    beq lbl_fn_8017D000_00000094
    lis r4, lbl_8077C968@ha
    addi r4, r4, lbl_8077C968@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_8017D000_00000048
    lwz r3, 0x258(r3)
    mr r4, r30
    bl fn_804AAFCC
lbl_fn_8017D000_00000048:
    addic. r4, r30, 0x14ec
    beq lbl_fn_8017D000_00000078
    beq lbl_fn_8017D000_00000078
    beq lbl_fn_8017D000_00000078
    beq lbl_fn_8017D000_00000078
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8017D000_00000078
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8017D000_00000078:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_8017D000_00000094
    mr r3, r30
    bl dtor_80084684
lbl_fn_8017D000_00000094:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017D0B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F098
    lwz r5, 0x48(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8017D0B0_00000124
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8017D0B0_00000124
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8017D0B0_00000124
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8017D0B0_00000110
    bl fn_80139560
    mr r3, r31
    bl fn_80145334
    b lbl_fn_8017D0B0_00000124
lbl_fn_8017D0B0_00000110:
    cmpwi r5, 0x3
    beq lbl_fn_8017D0B0_00000124
    bl fn_8017D13C
    mr r3, r31
    bl fn_80145334
lbl_fn_8017D0B0_00000124:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017D138(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_8017D13C(void)
{
    nofralloc
    stwu r1, -0x3f0(r1)
    mflr r0
    stw r0, 0x3f4(r1)
    addi r11, r1, 0x3d0
    stfd f31, 0x3e0(r1)
    psq_st f31, 0x3e8(r1), 0, 0
    stfd f30, 0x3d0(r1)
    psq_st f30, 0x3d8(r1), 0, 0
    bl _savegpr_27
    lwz r4, lbl_8087F8A0
    li r0, 0x0
    mr r31, r3
    lwz r4, 0x48(r4)
    stw r4, 0xd1c(r3)
    stb r0, 0xd75(r3)
    lwz r4, lbl_8087F098
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8017D13C_000001A8
    lwz r4, 0x14b0(r3)
    cmpwi r4, 0x3
    beq lbl_fn_8017D13C_000001A8
    cmpwi r4, 0x5
    beq lbl_fn_8017D13C_000001A8
    li r4, 0x5
    bl fn_8017F4A0
    b lbl_fn_8017D13C_00001628
lbl_fn_8017D13C_000001A8:
    cmpwi r0, 0x0
    bne lbl_fn_8017D13C_000001B8
    li r0, 0x0
    stw r0, 0x14d0(r3)
lbl_fn_8017D13C_000001B8:
    lwz r4, 0x14b0(r3)
    lwz r0, 0x5c0(r3)
    cmpwi r4, 0x0
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    beq lbl_fn_8017D13C_000001FC
    cmpwi r4, 0x5
    beq lbl_fn_8017D13C_0000020C
    cmpwi r4, 0x2
    beq lbl_fn_8017D13C_00000218
    cmpwi r4, 0x1
    beq lbl_fn_8017D13C_00000270
    cmpwi r4, 0x3
    beq lbl_fn_8017D13C_0000027C
    cmpwi r4, 0x4
    beq lbl_fn_8017D13C_00000288
    b lbl_fn_8017D13C_00000290
lbl_fn_8017D13C_000001FC:
    mr r3, r31
    li r4, 0x5
    bl fn_8017F4A0
    b lbl_fn_8017D13C_00000290
lbl_fn_8017D13C_0000020C:
    mr r3, r31
    bl fn_8017F348
    b lbl_fn_8017D13C_00000290
lbl_fn_8017D13C_00000218:
    li r0, 0x1
    stb r0, 0xd75(r3)
    mr r3, r31
    bl fn_8017FBEC
    lwz r3, 0x14d0(r31)
    li r0, 0x0
    stw r0, 0x14d4(r31)
    addi r4, r3, 0x1
    stw r4, 0x14d0(r31)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x514(r3)
    cmpw r4, r0
    ble lbl_fn_8017D13C_00000290
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    mr r3, r31
    li r4, 0x1
    bl fn_8017F4A0
    b lbl_fn_8017D13C_00000290
lbl_fn_8017D13C_00000270:
    mr r3, r31
    bl fn_8017E650
    b lbl_fn_8017D13C_00000290
lbl_fn_8017D13C_0000027C:
    mr r3, r31
    bl fn_8017E9D8
    b lbl_fn_8017D13C_00000290
lbl_fn_8017D13C_00000288:
    mr r3, r31
    bl fn_8017F118
lbl_fn_8017D13C_00000290:
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8017D13C_000002A4
    li r0, 0x0
    stw r0, 0x1504(r31)
lbl_fn_8017D13C_000002A4:
    lwz r27, lbl_8087F0A8
    lwz r0, 0x4dc(r27)
    lfs f31, 0x4e4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8017D13C_00001628
    lwz r3, 0x14b0(r31)
    lfs f2, lbl_80881B7C
    subi r0, r3, 0x1
    stfs f2, 0x1a8(r1)
    cmplwi r0, 0x1
    stfs f2, 0x1ac(r1)
    stfs f2, 0x1b0(r1)
    stfs f2, 0x1b4(r1)
    ble lbl_fn_8017D13C_000002F8
    cmpwi r3, 0x3
    beq lbl_fn_8017D13C_00000630
    cmpwi r3, 0x4
    beq lbl_fn_8017D13C_000007A4
    cmpwi r3, 0x5
    beq lbl_fn_8017D13C_00000E24
    b lbl_fn_8017D13C_000012B8
lbl_fn_8017D13C_000002F8:
    fcmpo cr0, f2, f2
    lfs f0, lbl_80881B78
    stfs f2, 0x188(r1)
    lfs f31, 0x4e0(r27)
    stfs f2, 0x18c(r1)
    stfs f0, 0x190(r1)
    stfs f2, 0x194(r1)
    stfs f2, 0x1a8(r1)
    stfs f2, 0x1ac(r1)
    stfs f0, 0x1b0(r1)
    stfs f2, 0x1b4(r1)
    stfs f2, 0x148(r1)
    stfs f2, 0x14c(r1)
    stfs f2, 0x150(r1)
    stfs f2, 0x154(r1)
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000344
    li r30, 0xff
    b lbl_fn_8017D13C_0000036C
lbl_fn_8017D13C_00000344:
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000358
    li r3, 0x0
    b lbl_fn_8017D13C_00000368
lbl_fn_8017D13C_00000358:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000368:
    mr r30, r3
lbl_fn_8017D13C_0000036C:
    lfs f2, 0x14c(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000388
    li r29, 0xff
    b lbl_fn_8017D13C_000003B4
lbl_fn_8017D13C_00000388:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000003A0
    li r3, 0x0
    b lbl_fn_8017D13C_000003B0
lbl_fn_8017D13C_000003A0:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000003B0:
    mr r29, r3
lbl_fn_8017D13C_000003B4:
    lfs f2, 0x150(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000003D0
    li r28, 0xff
    b lbl_fn_8017D13C_000003FC
lbl_fn_8017D13C_000003D0:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000003E8
    li r3, 0x0
    b lbl_fn_8017D13C_000003F8
lbl_fn_8017D13C_000003E8:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000003F8:
    mr r28, r3
lbl_fn_8017D13C_000003FC:
    lfs f2, 0x154(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000418
    li r3, 0xff
    b lbl_fn_8017D13C_00000440
lbl_fn_8017D13C_00000418:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000430
    li r3, 0x0
    b lbl_fn_8017D13C_00000440
lbl_fn_8017D13C_00000430:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000440:
    lfs f1, lbl_80881B78
    slwi r4, r29, 8
    lfs f4, lbl_80881B88
    or r6, r28, r4
    lfs f3, 0x14c0(r31)
    slwi r3, r3, 24
    lfs f2, 0x14bc(r31)
    slwi r0, r30, 16
    lfs f0, 0x14b8(r31)
    fadds f3, f3, f1
    fadds f2, f2, f4
    or r0, r3, r0
    fadds f0, f0, f1
    stfs f3, 0x16c(r1)
    lwz r3, lbl_8087EEB0
    stfs f2, 0x168(r1)
    addi r4, r1, 0x17c
    addi r5, r1, 0x164
    stfs f0, 0x164(r1)
    or r6, r6, r0
    lfs f3, 0x530(r31)
    lfs f2, 0x52c(r31)
    lfs f0, 0x528(r31)
    fadds f3, f3, f1
    fadds f2, f2, f4
    stfs f1, 0x158(r1)
    fadds f0, f0, f1
    stfs f4, 0x15c(r1)
    stfs f1, 0x160(r1)
    stfs f1, 0x170(r1)
    stfs f4, 0x174(r1)
    stfs f1, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f2, 0x180(r1)
    stfs f3, 0x184(r1)
    bl fn_80063764
    lfs f2, 0x1a8(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000004EC
    li r30, 0xff
    b lbl_fn_8017D13C_00000518
lbl_fn_8017D13C_000004EC:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000504
    li r3, 0x0
    b lbl_fn_8017D13C_00000514
lbl_fn_8017D13C_00000504:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000514:
    mr r30, r3
lbl_fn_8017D13C_00000518:
    lfs f2, 0x1ac(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000534
    li r29, 0xff
    b lbl_fn_8017D13C_00000560
lbl_fn_8017D13C_00000534:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_0000054C
    li r3, 0x0
    b lbl_fn_8017D13C_0000055C
lbl_fn_8017D13C_0000054C:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_0000055C:
    mr r29, r3
lbl_fn_8017D13C_00000560:
    lfs f2, 0x1b0(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_0000057C
    li r28, 0xff
    b lbl_fn_8017D13C_000005A8
lbl_fn_8017D13C_0000057C:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000594
    li r3, 0x0
    b lbl_fn_8017D13C_000005A4
lbl_fn_8017D13C_00000594:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000005A4:
    mr r28, r3
lbl_fn_8017D13C_000005A8:
    lfs f2, 0x1b4(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000005C4
    li r3, 0xff
    b lbl_fn_8017D13C_000005EC
lbl_fn_8017D13C_000005C4:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000005DC
    li r3, 0x0
    b lbl_fn_8017D13C_000005EC
lbl_fn_8017D13C_000005DC:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000005EC:
    lwz r6, lbl_8087F0A8
    slwi r5, r29, 8
    slwi r4, r3, 24
    slwi r0, r30, 16
    or r0, r4, r0
    or r5, r28, r5
    lwz r3, lbl_8087EEB0
    or r5, r5, r0
    lfs f1, 0x528(r31)
    li r4, 0xc
    lfs f2, 0x52c(r31)
    lfs f3, 0x530(r31)
    lfs f4, lbl_80881B78
    lfs f5, 0x4f4(r6)
    lfs f6, lbl_80881B8C
    bl fn_80062C8C
    b lbl_fn_8017D13C_000012B8
lbl_fn_8017D13C_00000630:
    fcmpo cr0, f2, f2
    lfs f0, lbl_80881B78
    stfs f2, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f0, 0x140(r1)
    stfs f2, 0x144(r1)
    stfs f2, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
    stfs f0, 0x1b0(r1)
    stfs f2, 0x1b4(r1)
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000668
    li r30, 0xff
    b lbl_fn_8017D13C_00000690
lbl_fn_8017D13C_00000668:
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_0000067C
    li r3, 0x0
    b lbl_fn_8017D13C_0000068C
lbl_fn_8017D13C_0000067C:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_0000068C:
    mr r30, r3
lbl_fn_8017D13C_00000690:
    lfs f2, 0x1ac(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000006AC
    li r29, 0xff
    b lbl_fn_8017D13C_000006D8
lbl_fn_8017D13C_000006AC:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000006C4
    li r3, 0x0
    b lbl_fn_8017D13C_000006D4
lbl_fn_8017D13C_000006C4:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000006D4:
    mr r29, r3
lbl_fn_8017D13C_000006D8:
    lfs f2, 0x1b0(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000006F4
    li r28, 0xff
    b lbl_fn_8017D13C_00000720
lbl_fn_8017D13C_000006F4:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_0000070C
    li r3, 0x0
    b lbl_fn_8017D13C_0000071C
lbl_fn_8017D13C_0000070C:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_0000071C:
    mr r28, r3
lbl_fn_8017D13C_00000720:
    lfs f2, 0x1b4(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_0000073C
    li r3, 0xff
    b lbl_fn_8017D13C_00000764
lbl_fn_8017D13C_0000073C:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000754
    li r3, 0x0
    b lbl_fn_8017D13C_00000764
lbl_fn_8017D13C_00000754:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000764:
    slwi r5, r29, 8
    slwi r4, r3, 24
    slwi r0, r30, 16
    lwz r3, lbl_8087EEB0
    or r0, r4, r0
    or r5, r28, r5
    lfs f1, 0x528(r31)
    or r5, r5, r0
    lfs f2, 0x52c(r31)
    li r4, 0xc
    lfs f3, 0x530(r31)
    lfs f4, lbl_80881B78
    lfs f5, 0x4f4(r27)
    lfs f6, lbl_80881B8C
    bl fn_80062C8C
    b lbl_fn_8017D13C_000012B8
lbl_fn_8017D13C_000007A4:
    fcmpo cr0, f2, f2
    lfs f0, lbl_80881B78
    stfs f0, 0x128(r1)
    stfs f0, 0x12c(r1)
    stfs f2, 0x130(r1)
    stfs f2, 0x134(r1)
    stfs f0, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
    stfs f2, 0x1b0(r1)
    stfs f2, 0x1b4(r1)
    stfs f2, 0xe8(r1)
    stfs f2, 0xec(r1)
    stfs f2, 0xf0(r1)
    stfs f2, 0xf4(r1)
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000007EC
    li r30, 0xff
    b lbl_fn_8017D13C_00000814
lbl_fn_8017D13C_000007EC:
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000800
    li r3, 0x0
    b lbl_fn_8017D13C_00000810
lbl_fn_8017D13C_00000800:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000810:
    mr r30, r3
lbl_fn_8017D13C_00000814:
    lfs f2, 0xec(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000830
    li r29, 0xff
    b lbl_fn_8017D13C_0000085C
lbl_fn_8017D13C_00000830:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000848
    li r3, 0x0
    b lbl_fn_8017D13C_00000858
lbl_fn_8017D13C_00000848:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000858:
    mr r29, r3
lbl_fn_8017D13C_0000085C:
    lfs f2, 0xf0(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000878
    li r28, 0xff
    b lbl_fn_8017D13C_000008A4
lbl_fn_8017D13C_00000878:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000890
    li r3, 0x0
    b lbl_fn_8017D13C_000008A0
lbl_fn_8017D13C_00000890:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000008A0:
    mr r28, r3
lbl_fn_8017D13C_000008A4:
    lfs f2, 0xf4(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000008C0
    li r3, 0xff
    b lbl_fn_8017D13C_000008E8
lbl_fn_8017D13C_000008C0:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000008D8
    li r3, 0x0
    b lbl_fn_8017D13C_000008E8
lbl_fn_8017D13C_000008D8:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000008E8:
    lfs f1, lbl_80881B78
    slwi r4, r29, 8
    lfs f4, lbl_80881B88
    or r6, r28, r4
    lfs f3, 0x14c0(r31)
    slwi r3, r3, 24
    lfs f2, 0x14bc(r31)
    slwi r0, r30, 16
    lfs f0, 0x14b8(r31)
    fadds f3, f3, f1
    fadds f2, f2, f4
    or r0, r3, r0
    fadds f0, f0, f1
    stfs f3, 0x10c(r1)
    lwz r3, lbl_8087EEB0
    stfs f2, 0x108(r1)
    addi r4, r1, 0x11c
    addi r5, r1, 0x104
    stfs f0, 0x104(r1)
    or r6, r6, r0
    lfs f3, 0x530(r31)
    lfs f2, 0x52c(r31)
    lfs f0, 0x528(r31)
    fadds f3, f3, f1
    fadds f2, f2, f4
    stfs f1, 0xf8(r1)
    fadds f0, f0, f1
    stfs f4, 0xfc(r1)
    stfs f1, 0x100(r1)
    stfs f1, 0x110(r1)
    stfs f4, 0x114(r1)
    stfs f1, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f2, 0x120(r1)
    stfs f3, 0x124(r1)
    bl fn_80063764
    lfs f2, lbl_80881B7C
    stfs f2, 0xa8(r1)
    fcmpo cr0, f2, f2
    stfs f2, 0xac(r1)
    stfs f2, 0xb0(r1)
    stfs f2, 0xb4(r1)
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000009A0
    li r30, 0xff
    b lbl_fn_8017D13C_000009CC
lbl_fn_8017D13C_000009A0:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000009B8
    li r3, 0x0
    b lbl_fn_8017D13C_000009C8
lbl_fn_8017D13C_000009B8:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000009C8:
    mr r30, r3
lbl_fn_8017D13C_000009CC:
    lfs f2, 0xac(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000009E8
    li r29, 0xff
    b lbl_fn_8017D13C_00000A14
lbl_fn_8017D13C_000009E8:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000A00
    li r3, 0x0
    b lbl_fn_8017D13C_00000A10
lbl_fn_8017D13C_00000A00:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000A10:
    mr r29, r3
lbl_fn_8017D13C_00000A14:
    lfs f2, 0xb0(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000A30
    li r28, 0xff
    b lbl_fn_8017D13C_00000A5C
lbl_fn_8017D13C_00000A30:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000A48
    li r3, 0x0
    b lbl_fn_8017D13C_00000A58
lbl_fn_8017D13C_00000A48:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000A58:
    mr r28, r3
lbl_fn_8017D13C_00000A5C:
    lfs f2, 0xb4(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000A78
    li r3, 0xff
    b lbl_fn_8017D13C_00000AA0
lbl_fn_8017D13C_00000A78:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000A90
    li r3, 0x0
    b lbl_fn_8017D13C_00000AA0
lbl_fn_8017D13C_00000A90:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000AA0:
    lwz r6, lbl_8087F430
    slwi r4, r29, 8
    lwz r5, 0xc6c(r31)
    slwi r3, r3, 24
    lwz r6, 0x10d8(r6)
    slwi r0, r30, 16
    subi r5, r5, 0x1
    lfs f1, lbl_80881B78
    lwz r7, 0x9c(r6)
    mulli r5, r5, 0x30
    lfs f4, lbl_80881B88
    or r6, r28, r4
    or r0, r3, r0
    stfs f1, 0xb8(r1)
    add r7, r7, r5
    lfs f3, 0xc(r7)
    addi r4, r1, 0xdc
    lfs f2, 0x8(r7)
    addi r5, r1, 0xc4
    lfs f0, 0x4(r7)
    fadds f3, f3, f1
    fadds f2, f2, f4
    stfs f4, 0xbc(r1)
    fadds f0, f0, f1
    lwz r3, lbl_8087EEB0
    stfs f2, 0xc8(r1)
    or r6, r6, r0
    stfs f0, 0xc4(r1)
    stfs f3, 0xcc(r1)
    lfs f3, 0x530(r31)
    lfs f2, 0x52c(r31)
    lfs f0, 0x528(r31)
    fadds f3, f3, f1
    fadds f2, f2, f4
    stfs f1, 0xc0(r1)
    fadds f0, f0, f1
    stfs f1, 0xd0(r1)
    stfs f4, 0xd4(r1)
    stfs f1, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f2, 0xe0(r1)
    stfs f3, 0xe4(r1)
    bl fn_80063764
    lfs f2, lbl_80881B80
    lfs f0, lbl_80881B7C
    lfs f1, lbl_80881B78
    fcmpo cr0, f2, f0
    stfs f2, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000B7C
    li r30, 0xff
    b lbl_fn_8017D13C_00000BA0
lbl_fn_8017D13C_00000B7C:
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000B90
    li r3, 0x0
    b lbl_fn_8017D13C_00000B9C
lbl_fn_8017D13C_00000B90:
    lfs f0, lbl_80881B84
    fmadds f1, f0, f2, f2
    bl fn_80695D84
lbl_fn_8017D13C_00000B9C:
    mr r30, r3
lbl_fn_8017D13C_00000BA0:
    lfs f2, 0x9c(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000BBC
    li r29, 0xff
    b lbl_fn_8017D13C_00000BE8
lbl_fn_8017D13C_00000BBC:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000BD4
    li r3, 0x0
    b lbl_fn_8017D13C_00000BE4
lbl_fn_8017D13C_00000BD4:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000BE4:
    mr r29, r3
lbl_fn_8017D13C_00000BE8:
    lfs f2, 0xa0(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000C04
    li r28, 0xff
    b lbl_fn_8017D13C_00000C30
lbl_fn_8017D13C_00000C04:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000C1C
    li r3, 0x0
    b lbl_fn_8017D13C_00000C2C
lbl_fn_8017D13C_00000C1C:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000C2C:
    mr r28, r3
lbl_fn_8017D13C_00000C30:
    lfs f2, 0xa4(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000C4C
    li r3, 0xff
    b lbl_fn_8017D13C_00000C74
lbl_fn_8017D13C_00000C4C:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000C64
    li r3, 0x0
    b lbl_fn_8017D13C_00000C74
lbl_fn_8017D13C_00000C64:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000C74:
    lwz r6, lbl_8087F0A8
    slwi r5, r29, 8
    slwi r4, r3, 24
    slwi r0, r30, 16
    or r0, r4, r0
    or r5, r28, r5
    lwz r3, lbl_8087EEB0
    or r5, r5, r0
    lfs f1, 0x528(r31)
    li r4, 0xc
    lfs f2, 0x52c(r31)
    lfs f3, 0x530(r31)
    lfs f4, lbl_80881B78
    lfs f5, 0x4ec(r6)
    lfs f6, lbl_80881B8C
    bl fn_80062C8C
    lfs f2, lbl_80881B90
    lfs f0, lbl_80881B7C
    lfs f1, lbl_80881B78
    fcmpo cr0, f2, f0
    stfs f2, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f0, 0x94(r1)
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000CE4
    li r30, 0xff
    b lbl_fn_8017D13C_00000D0C
lbl_fn_8017D13C_00000CE4:
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000CF8
    li r3, 0x0
    b lbl_fn_8017D13C_00000D08
lbl_fn_8017D13C_00000CF8:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000D08:
    mr r30, r3
lbl_fn_8017D13C_00000D0C:
    lfs f2, 0x8c(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000D28
    li r29, 0xff
    b lbl_fn_8017D13C_00000D54
lbl_fn_8017D13C_00000D28:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000D40
    li r3, 0x0
    b lbl_fn_8017D13C_00000D50
lbl_fn_8017D13C_00000D40:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000D50:
    mr r29, r3
lbl_fn_8017D13C_00000D54:
    lfs f2, 0x90(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000D70
    li r28, 0xff
    b lbl_fn_8017D13C_00000D9C
lbl_fn_8017D13C_00000D70:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000D88
    li r3, 0x0
    b lbl_fn_8017D13C_00000D98
lbl_fn_8017D13C_00000D88:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000D98:
    mr r28, r3
lbl_fn_8017D13C_00000D9C:
    lfs f2, 0x94(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000DB8
    li r3, 0xff
    b lbl_fn_8017D13C_00000DE0
lbl_fn_8017D13C_00000DB8:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000DD0
    li r3, 0x0
    b lbl_fn_8017D13C_00000DE0
lbl_fn_8017D13C_00000DD0:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000DE0:
    lwz r6, lbl_8087F0A8
    slwi r5, r29, 8
    slwi r4, r3, 24
    slwi r0, r30, 16
    or r0, r4, r0
    or r5, r28, r5
    lwz r3, lbl_8087EEB0
    or r5, r5, r0
    lfs f1, 0x528(r31)
    li r4, 0xc
    lfs f2, 0x52c(r31)
    lfs f3, 0x530(r31)
    lfs f4, lbl_80881B78
    lfs f5, 0x4f0(r6)
    lfs f6, lbl_80881B8C
    bl fn_80062C8C
    b lbl_fn_8017D13C_000012B8
lbl_fn_8017D13C_00000E24:
    lfs f0, lbl_80881B78
    addi r4, r31, 0x528
    stfs f0, 0x78(r1)
    lwz r3, lbl_8087F098
    stfs f2, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f2, 0x84(r1)
    stfs f0, 0x1a8(r1)
    stfs f2, 0x1ac(r1)
    stfs f0, 0x1b0(r1)
    stfs f2, 0x1b4(r1)
    bl fn_80183860
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8017D13C_00000E68
    li r0, 0x0
    b lbl_fn_8017D13C_00000ED8
lbl_fn_8017D13C_00000E68:
    lfs f1, 0x530(r3)
    lfs f0, 0x530(r31)
    lfs f3, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r3)
    addi r3, r1, 0x14
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    lfs f2, 0x570(r28)
    lfs f0, lbl_80881B94
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    mfcr r0
    lwz r3, lbl_8087F0A8
    extrwi. r0, r0, 1, 2
    lfs f0, 0x4f0(r3)
    beq lbl_fn_8017D13C_00000EC8
    lfs f0, 0x4ec(r3)
lbl_fn_8017D13C_00000EC8:
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
lbl_fn_8017D13C_00000ED8:
    cmpwi r0, 0x0
    beq lbl_fn_8017D13C_00000F04
    lfs f2, lbl_80881B7C
    addi r27, r1, 0x68
    lfs f1, lbl_80881B80
    lfs f0, lbl_80881B78
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f2, 0x74(r1)
    b lbl_fn_8017D13C_00000F24
lbl_fn_8017D13C_00000F04:
    lfs f2, lbl_80881B80
    addi r27, r1, 0x58
    lfs f1, lbl_80881B78
    lfs f0, lbl_80881B7C
    stfs f2, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x64(r1)
lbl_fn_8017D13C_00000F24:
    lfs f2, 0x0(r27)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000F40
    li r30, 0xff
    b lbl_fn_8017D13C_00000F6C
lbl_fn_8017D13C_00000F40:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000F58
    li r3, 0x0
    b lbl_fn_8017D13C_00000F68
lbl_fn_8017D13C_00000F58:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000F68:
    mr r30, r3
lbl_fn_8017D13C_00000F6C:
    lfs f2, 0x4(r27)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000F88
    li r29, 0xff
    b lbl_fn_8017D13C_00000FB4
lbl_fn_8017D13C_00000F88:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000FA0
    li r3, 0x0
    b lbl_fn_8017D13C_00000FB0
lbl_fn_8017D13C_00000FA0:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000FB0:
    mr r29, r3
lbl_fn_8017D13C_00000FB4:
    lfs f2, 0x8(r27)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00000FD0
    li r28, 0xff
    b lbl_fn_8017D13C_00000FFC
lbl_fn_8017D13C_00000FD0:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00000FE8
    li r3, 0x0
    b lbl_fn_8017D13C_00000FF8
lbl_fn_8017D13C_00000FE8:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00000FF8:
    mr r28, r3
lbl_fn_8017D13C_00000FFC:
    lfs f2, 0xc(r27)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00001018
    li r3, 0xff
    b lbl_fn_8017D13C_00001040
lbl_fn_8017D13C_00001018:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00001030
    li r3, 0x0
    b lbl_fn_8017D13C_00001040
lbl_fn_8017D13C_00001030:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00001040:
    lwz r6, lbl_8087F0A8
    slwi r5, r29, 8
    slwi r4, r3, 24
    slwi r0, r30, 16
    or r0, r4, r0
    or r5, r28, r5
    lwz r3, lbl_8087EEB0
    or r5, r5, r0
    lfs f1, 0x528(r31)
    li r4, 0xc
    lfs f2, 0x52c(r31)
    lfs f3, 0x530(r31)
    lfs f4, lbl_80881B78
    lfs f5, 0x4ec(r6)
    lfs f6, lbl_80881B8C
    bl fn_80062C8C
    lwz r3, lbl_8087F098
    addi r4, r31, 0x528
    bl fn_80183860
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8017D13C_000010A0
    li r0, 0x0
    b lbl_fn_8017D13C_00001110
lbl_fn_8017D13C_000010A0:
    lfs f1, 0x530(r3)
    lfs f0, 0x530(r31)
    lfs f3, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r3)
    addi r3, r1, 0x8
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f2, 0x570(r28)
    lfs f0, lbl_80881B94
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    mfcr r0
    lwz r3, lbl_8087F0A8
    extrwi. r0, r0, 1, 2
    lfs f0, 0x4f0(r3)
    beq lbl_fn_8017D13C_00001100
    lfs f0, 0x4ec(r3)
lbl_fn_8017D13C_00001100:
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
lbl_fn_8017D13C_00001110:
    cmpwi r0, 0x0
    beq lbl_fn_8017D13C_0000113C
    lfs f2, lbl_80881B7C
    addi r27, r1, 0x48
    lfs f1, lbl_80881B80
    lfs f0, lbl_80881B78
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0x54(r1)
    b lbl_fn_8017D13C_0000115C
lbl_fn_8017D13C_0000113C:
    lfs f2, lbl_80881B90
    addi r27, r1, 0x38
    lfs f1, lbl_80881B78
    lfs f0, lbl_80881B7C
    stfs f2, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
lbl_fn_8017D13C_0000115C:
    lfs f2, 0x0(r27)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00001178
    li r30, 0xff
    b lbl_fn_8017D13C_000011A4
lbl_fn_8017D13C_00001178:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00001190
    li r3, 0x0
    b lbl_fn_8017D13C_000011A0
lbl_fn_8017D13C_00001190:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000011A0:
    mr r30, r3
lbl_fn_8017D13C_000011A4:
    lfs f2, 0x4(r27)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000011C0
    li r29, 0xff
    b lbl_fn_8017D13C_000011EC
lbl_fn_8017D13C_000011C0:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000011D8
    li r3, 0x0
    b lbl_fn_8017D13C_000011E8
lbl_fn_8017D13C_000011D8:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000011E8:
    mr r29, r3
lbl_fn_8017D13C_000011EC:
    lfs f2, 0x8(r27)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00001208
    li r28, 0xff
    b lbl_fn_8017D13C_00001234
lbl_fn_8017D13C_00001208:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00001220
    li r3, 0x0
    b lbl_fn_8017D13C_00001230
lbl_fn_8017D13C_00001220:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00001230:
    mr r28, r3
lbl_fn_8017D13C_00001234:
    lfs f2, 0xc(r27)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00001250
    li r3, 0xff
    b lbl_fn_8017D13C_00001278
lbl_fn_8017D13C_00001250:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00001268
    li r3, 0x0
    b lbl_fn_8017D13C_00001278
lbl_fn_8017D13C_00001268:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00001278:
    lwz r6, lbl_8087F0A8
    slwi r5, r29, 8
    slwi r4, r3, 24
    slwi r0, r30, 16
    or r0, r4, r0
    or r5, r28, r5
    lwz r3, lbl_8087EEB0
    or r5, r5, r0
    lfs f1, 0x528(r31)
    li r4, 0xc
    lfs f2, 0x52c(r31)
    lfs f3, 0x530(r31)
    lfs f4, lbl_80881B78
    lfs f5, 0x4f0(r6)
    lfs f6, lbl_80881B8C
    bl fn_80062C8C
lbl_fn_8017D13C_000012B8:
    lfs f2, 0x1a8(r1)
    lfs f0, lbl_80881B7C
    lfs f3, 0x538(r31)
    lfs f1, 0x10f4(r31)
    fcmpo cr0, f2, f0
    fadds f30, f3, f1
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000012E0
    li r28, 0xff
    b lbl_fn_8017D13C_0000130C
lbl_fn_8017D13C_000012E0:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000012F8
    li r3, 0x0
    b lbl_fn_8017D13C_00001308
lbl_fn_8017D13C_000012F8:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00001308:
    mr r28, r3
lbl_fn_8017D13C_0000130C:
    lfs f2, 0x1ac(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00001328
    li r30, 0xff
    b lbl_fn_8017D13C_00001354
lbl_fn_8017D13C_00001328:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00001340
    li r3, 0x0
    b lbl_fn_8017D13C_00001350
lbl_fn_8017D13C_00001340:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00001350:
    mr r30, r3
lbl_fn_8017D13C_00001354:
    lfs f2, 0x1b0(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00001370
    li r29, 0xff
    b lbl_fn_8017D13C_0000139C
lbl_fn_8017D13C_00001370:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00001388
    li r3, 0x0
    b lbl_fn_8017D13C_00001398
lbl_fn_8017D13C_00001388:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00001398:
    mr r29, r3
lbl_fn_8017D13C_0000139C:
    lfs f2, 0x1b4(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000013B8
    li r3, 0xff
    b lbl_fn_8017D13C_000013E0
lbl_fn_8017D13C_000013B8:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000013D0
    li r3, 0x0
    b lbl_fn_8017D13C_000013E0
lbl_fn_8017D13C_000013D0:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000013E0:
    lfs f1, lbl_80881B98
    slwi r5, r30, 8
    lfs f0, 0x52c(r31)
    slwi r4, r3, 24
    lwz r6, lbl_8087F0A8
    slwi r0, r28, 16
    fadds f2, f1, f0
    or r0, r4, r0
    or r5, r29, r5
    fmr f4, f30
    fmr f6, f31
    lwz r3, lbl_8087EEB0
    lfs f1, 0x528(r31)
    or r5, r5, r0
    lfs f3, 0x530(r31)
    li r4, 0xc
    lfs f5, lbl_80881B78
    lfs f7, 0x4e8(r6)
    bl fn_80063484
    lfs f4, lbl_80881B78
    addi r3, r1, 0x198
    lfs f3, lbl_80881B9C
    addi r5, r1, 0x2c
    lfs f2, 0x530(r31)
    lfs f1, 0x52c(r31)
    lfs f0, 0x528(r31)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x20(r1)
    fadds f0, f0, f4
    lwz r4, lbl_8087EFB4
    stfs f3, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f2, 0x34(r1)
    bl fn_800BFAC8
    lfs f1, 0x1a0(r1)
    lfs f0, lbl_80881B78
    fcmpo cr0, f1, f0
    ble lbl_fn_8017D13C_00001628
    lfs f0, lbl_80881B7C
    fcmpo cr0, f1, f0
    bge lbl_fn_8017D13C_00001628
    lwz r0, 0x14b0(r31)
    lis r5, lbl_8077C948@ha
    addi r5, r5, lbl_8077C948@l
    lwz r3, lbl_8087EEC8
    slwi r0, r0, 2
    addi r4, r1, 0x1b8
    lwzx r5, r5, r0
    li r6, 0x100
    bl fn_8006F2F0
    lfs f2, 0x1a8(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000014D0
    li r29, 0xff
    b lbl_fn_8017D13C_000014FC
lbl_fn_8017D13C_000014D0:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000014E8
    li r3, 0x0
    b lbl_fn_8017D13C_000014F8
lbl_fn_8017D13C_000014E8:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000014F8:
    mr r29, r3
lbl_fn_8017D13C_000014FC:
    lfs f2, 0x1ac(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00001518
    li r30, 0xff
    b lbl_fn_8017D13C_00001544
lbl_fn_8017D13C_00001518:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00001530
    li r3, 0x0
    b lbl_fn_8017D13C_00001540
lbl_fn_8017D13C_00001530:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00001540:
    mr r30, r3
lbl_fn_8017D13C_00001544:
    lfs f2, 0x1b0(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_00001560
    li r31, 0xff
    b lbl_fn_8017D13C_0000158C
lbl_fn_8017D13C_00001560:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_00001578
    li r3, 0x0
    b lbl_fn_8017D13C_00001588
lbl_fn_8017D13C_00001578:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_00001588:
    mr r31, r3
lbl_fn_8017D13C_0000158C:
    lfs f2, 0x1b4(r1)
    lfs f0, lbl_80881B7C
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8017D13C_000015A8
    li r3, 0xff
    b lbl_fn_8017D13C_000015D0
lbl_fn_8017D13C_000015A8:
    lfs f0, lbl_80881B78
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_8017D13C_000015C0
    li r3, 0x0
    b lbl_fn_8017D13C_000015D0
lbl_fn_8017D13C_000015C0:
    lfs f1, lbl_80881B84
    lfs f0, lbl_80881B80
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_8017D13C_000015D0:
    lfs f3, lbl_80881B78
    slwi r4, r30, 8
    lfs f4, lbl_80881BA0
    or r5, r31, r4
    slwi r3, r3, 24
    slwi r0, r29, 16
    or r0, r3, r0
    fmr f6, f3
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f7, f3
    lfs f1, 0x198(r1)
    fmr f8, f3
    lfs f2, 0x19c(r1)
    addi r4, r1, 0x1b8
    or r5, r5, r0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_8017D13C_00001628:
    addi r11, r1, 0x3d0
    psq_l f31, 0x3e8(r1), 0, 0
    lfd f31, 0x3e0(r1)
    psq_l f30, 0x3d8(r1), 0, 0
    lfd f30, 0x3d0(r1)
    bl _restgpr_27
    lwz r0, 0x3f4(r1)
    mtlr r0
    addi r1, r1, 0x3f0
    blr
}

asm void fn_8017E650(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    li r30, 0x1
    stw r29, 0x54(r1)
    lwz r4, 0x1508(r3)
    stb r30, 0xd75(r3)
    addi r0, r4, 0x1
    stw r0, 0x1508(r3)
    bl fn_8017FBEC
    cmpwi r3, 0x0
    beq lbl_fn_8017E650_00001830
    li r0, 0x0
    stw r0, 0x14d4(r31)
    addi r4, r31, 0x528
    stw r30, 0x1504(r31)
    lwz r3, lbl_8087F098
    bl fn_80183860
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8017E650_000016D0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8017E650_000017A8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x66
    bne lbl_fn_8017E650_000017A8
lbl_fn_8017E650_000016D0:
    mr r3, r31
    li r4, 0x3
    bl fn_8017F4A0
    cmpwi r29, 0x0
    beq lbl_fn_8017E650_00001738
    lfs f3, 0x530(r31)
    addi r30, r1, 0x2c
    lfs f0, 0x530(r29)
    addi r5, r1, 0x38
    lfs f5, 0x52c(r31)
    mr r3, r30
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r31)
    mr r4, r30
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    b lbl_fn_8017E650_00001750
lbl_fn_8017E650_00001738:
    lfs f3, lbl_80881B78
    addi r30, r1, 0x20
    lfs f0, lbl_80881B7C
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_fn_8017E650_00001750:
    lfs f2, 0x8(r30)
    addi r4, r1, 0x44
    psq_l f1, 0x0(r30), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    li r5, 0x38
    lfs f5, lbl_80881BA4
    li r6, 0x0
    lfs f4, 0x44(r1)
    lfs f3, 0x48(r1)
    fmuls f0, f2, f5
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    stfs f0, 0x4c(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    bl fn_8015E7A0
    lfs f0, lbl_80881B80
    li r0, 0x0
    stfs f0, 0x2e8(r31)
    stw r0, 0x14b4(r31)
    b lbl_fn_8017E650_0000198C
lbl_fn_8017E650_000017A8:
    lwz r4, lbl_8087F098
    lwz r5, lbl_8087F0A8
    lwz r0, 0xf8(r4)
    lfs f31, 0x4f4(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8017E650_000017C8
    lfs f0, lbl_80881BA8
    fmuls f31, f31, f0
lbl_fn_8017E650_000017C8:
    lfs f3, 0x530(r3)
    fmuls f31, f31, f31
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x14
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_8017E650_0000198C
    lwz r3, lbl_8087F098
    mr r4, r31
    mr r5, r29
    bl fn_80182788
    mr r3, r31
    li r4, 0x3
    bl fn_8017F4A0
    stw r29, 0x14b4(r31)
    b lbl_fn_8017E650_000019B4
lbl_fn_8017E650_00001830:
    lwz r3, 0x14d4(r31)
    li r0, 0x0
    stw r0, 0x1504(r31)
    addi r3, r3, 0x1
    stw r3, 0x14d4(r31)
    lwz r4, lbl_8087F0A8
    lwz r0, 0x50c(r4)
    cmpw r3, r0
    ble lbl_fn_8017E650_00001864
    mr r3, r31
    li r4, 0x4
    bl fn_8017F4A0
    b lbl_fn_8017E650_000019B4
lbl_fn_8017E650_00001864:
    lwz r3, lbl_8087F408
    lfs f31, lbl_80881BAC
    lwz r29, 0x48(r3)
    b lbl_fn_8017E650_00001984
lbl_fn_8017E650_00001874:
    cmplw r29, r31
    beq lbl_fn_8017E650_00001980
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8017E650_000018A8
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8017E650_000018A8
    li r5, 0x1
lbl_fn_8017E650_000018A8:
    cmpwi r5, 0x0
    beq lbl_fn_8017E650_000018C4
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8017E650_000018C4
    li r3, 0x1
lbl_fn_8017E650_000018C4:
    cmpwi r3, 0x0
    beq lbl_fn_8017E650_000018F8
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8017E650_000018EC
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8017E650_000018EC
    li r3, 0x1
lbl_fn_8017E650_000018EC:
    cmpwi r3, 0x0
    bne lbl_fn_8017E650_000018F8
    li r4, 0x1
lbl_fn_8017E650_000018F8:
    cmpwi r4, 0x0
    beq lbl_fn_8017E650_00001980
    lwz r3, 0x60(r29)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x35
    bne lbl_fn_8017E650_00001980
    lwz r0, 0x1504(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8017E650_00001980
    lfs f3, 0x530(r29)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r29)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_8017E650_00001980
    li r0, 0x0
    stw r0, 0x14d4(r31)
    addi r4, r29, 0x14b8
    addi r3, r31, 0x14b8
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x14c0(r29)
    stfs f2, 0x14c0(r31)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_8017E650_0000198C
lbl_fn_8017E650_00001980:
    lwz r29, 0x14ac(r29)
lbl_fn_8017E650_00001984:
    cmpwi r29, 0x0
    bne lbl_fn_8017E650_00001874
lbl_fn_8017E650_0000198C:
    lfs f1, lbl_80881B78
    addi r3, r31, 0xc64
    addi r4, r31, 0x14b8
    addi r5, r31, 0x528
    li r6, 0x8
    bl fn_80128A30
    addi r3, r31, 0xc64
    bl fn_801255C8
    mr r3, r31
    bl fn_8017FED0
lbl_fn_8017E650_000019B4:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
