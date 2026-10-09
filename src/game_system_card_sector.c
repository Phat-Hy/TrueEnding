#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_80126214(void);
extern void fn_8013CB68(void);
extern void fn_80144710(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_805A4258(void);
extern void fn_805A49E8(void);
extern void fn_805A4A20(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 jumptable_80789880[];
extern u8 lbl_8074B088[];
extern u8 lbl_8074B090[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8088552C;
extern u32 lbl_80885534;
extern u32 lbl_80885540;
extern u32 lbl_80885550;
extern u32 lbl_80885558;
extern u32 lbl_8088555C;
extern u32 lbl_80885560;
extern u32 lbl_80885564;
extern u32 lbl_80885568;
extern u32 lbl_8088556C;
extern u32 lbl_80885570;
extern u32 lbl_80885574;
extern u32 lbl_80885578;
extern u32 lbl_80885588;
extern u32 lbl_80885598;
extern u32 lbl_8088559C;
extern u32 lbl_808855A4;
extern u32 lbl_808855A8;
extern u32 lbl_808855AC;
extern u32 lbl_808855B0;
extern u32 lbl_808855B4;
extern u32 lbl_808855B8;
extern u32 lbl_808855BC;
extern u32 lbl_808855C0;
extern u32 lbl_808855C4;
extern u32 lbl_808855C8;
extern u32 lbl_808855CC;
extern u32 lbl_808855D0;
extern u32 lbl_808855D4;
extern u32 lbl_808855D8;
extern u32 lbl_808855DC;
extern u32 lbl_808855E0;
extern u32 lbl_808855E4;
extern u32 lbl_808855E8;

/* Function declarations */
void fn_80358A5C(void);

asm void fn_80358A5C(void)
{
    nofralloc
    stwu r1, -0xac0(r1)
    mflr r0
    stw r0, 0xac4(r1)
    li r0, 0xab8
    addi r4, r1, 0x208
    stfd f31, 0xab0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xaa8
    stfd f30, 0xaa0(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xa98
    stfd f29, 0xa90(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0xa88
    lfs f29, lbl_8088552C
    stfd f28, 0xa80(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0xa78
    lfs f28, lbl_80885550
    stfd f27, 0xa70(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0xa68
    stfd f26, 0xa60(r1)
    psq_stx f26, r1, r0, 0, 0
    li r0, 0xa58
    stfd f25, 0xa50(r1)
    psq_stx f25, r1, r0, 0, 0
    li r0, 0xa48
    stfd f24, 0xa40(r1)
    psq_stx f24, r1, r0, 0, 0
    li r0, 0xa38
    stfd f23, 0xa30(r1)
    psq_stx f23, r1, r0, 0, 0
    li r0, 0xa28
    stfd f22, 0xa20(r1)
    psq_stx f22, r1, r0, 0, 0
    stw r31, 0xa1c(r1)
    mr r31, r3
    stw r30, 0xa18(r1)
    stw r29, 0xa14(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x210(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80358A5C_00001EE0
    lwz r4, 0x58c(r3)
    subi r0, r4, 0x7
    cmplwi r0, 0xb
    bgt lbl_fn_80358A5C_00001EE8
    lis r4, jumptable_80789880@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80789880@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r4, 0x8889
    lwz r5, 0x14c0(r3)
    subi r0, r4, 0x7777
    mulhw r0, r0, r5
    add r0, r0, r5
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r0, r0, r5
    cmpwi r0, 0xa
    blt lbl_fn_80358A5C_0000042C
    lwz r4, 0xd1c(r3)
    lfs f30, lbl_808855A4
    cmpwi r4, 0x0
    lfs f31, lbl_808855A8
    beq lbl_fn_80358A5C_0000040C
    lfs f7, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f9, 0x52c(r4)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x148
    lfs f7, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x14c(r1)
    stfs f0, 0x148(r1)
    stfs f10, 0x150(r1)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_80885564
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_80358A5C_00000180
    addi r3, r1, 0x148
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80358A5C_00000180:
    lfs f2, 0x150(r1)
    addi r3, r1, 0x148
    lfs f0, lbl_80885564
    addi r29, r1, 0x154
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f7, f7
    stfs f2, 0x15c(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_000001D0
    lfs f7, 0x154(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_000001C4
    lfs f0, lbl_80885568
    b lbl_fn_80358A5C_000001C8
lbl_fn_80358A5C_000001C4:
    lfs f0, lbl_8088556C
lbl_fn_80358A5C_000001C8:
    stfs f0, 0x164(r1)
    b lbl_fn_80358A5C_000001E4
lbl_fn_80358A5C_000001D0:
    frsp f2, f2
    lfs f1, 0x154(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x164(r1)
lbl_fn_80358A5C_000001E4:
    lfs f0, 0x164(r1)
    addi r3, r1, 0x908
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_8088552C
    addi r4, r1, 0x16c
    lfs f8, 0x910(r1)
    mr r5, r4
    lfs f9, 0x90c(r1)
    addi r3, r1, 0x8c8
    lfs f10, 0x908(r1)
    lfs f11, 0x920(r1)
    lfs f12, 0x91c(r1)
    lfs f13, 0x918(r1)
    lfs f27, 0x930(r1)
    lfs f26, 0x92c(r1)
    lfs f25, 0x928(r1)
    lfs f24, 0x934(r1)
    lfs f23, 0x924(r1)
    lfs f22, 0x914(r1)
    lfs f0, lbl_80885550
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x15c(r1)
    stfs f7, 0x8f8(r1)
    stfs f7, 0x8fc(r1)
    stfs f7, 0x900(r1)
    stfs f0, 0x904(r1)
    stfs f10, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f8, 0x1a4(r1)
    stfs f10, 0x8c8(r1)
    stfs f9, 0x8cc(r1)
    stfs f8, 0x8d0(r1)
    stfs f13, 0x190(r1)
    stfs f12, 0x194(r1)
    stfs f11, 0x198(r1)
    stfs f13, 0x8d8(r1)
    stfs f12, 0x8dc(r1)
    stfs f11, 0x8e0(r1)
    stfs f25, 0x184(r1)
    stfs f26, 0x188(r1)
    stfs f27, 0x18c(r1)
    stfs f25, 0x8e8(r1)
    stfs f26, 0x8ec(r1)
    stfs f27, 0x8f0(r1)
    stfs f22, 0x178(r1)
    stfs f23, 0x17c(r1)
    stfs f24, 0x180(r1)
    stfs f22, 0x8d4(r1)
    stfs f23, 0x8e4(r1)
    stfs f24, 0x8f4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x174(r1)
    bl fn_805F9750
    lfs f2, 0x174(r1)
    lfs f0, lbl_80885564
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_00000300
    lfs f7, 0x170(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_000002F0
    lfs f0, lbl_80885568
    b lbl_fn_80358A5C_000002F4
lbl_fn_80358A5C_000002F0:
    lfs f0, lbl_8088556C
lbl_fn_80358A5C_000002F4:
    fneg f0, f0
    stfs f0, 0x160(r1)
    b lbl_fn_80358A5C_00000314
lbl_fn_80358A5C_00000300:
    lfs f1, 0x170(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x160(r1)
lbl_fn_80358A5C_00000314:
    addi r3, r1, 0x160
    lfs f2, lbl_8088552C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f8, 0x538(r31)
    lfs f7, 0x158(r1)
    lfs f0, lbl_80885558
    fsubs f7, f7, f8
    stfs f2, 0x168(r1)
    stfs f2, 0x15c(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_00000354
    lfs f0, lbl_8088555C
    fsubs f0, f7, f0
    fmadds f27, f31, f0, f8
    b lbl_fn_80358A5C_00000374
lbl_fn_80358A5C_00000354:
    lfs f0, lbl_80885560
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_00000370
    lfs f0, lbl_8088555C
    fadds f0, f0, f7
    fmadds f27, f31, f0, f8
    b lbl_fn_80358A5C_00000374
lbl_fn_80358A5C_00000370:
    fmadds f27, f31, f7, f8
lbl_fn_80358A5C_00000374:
    lfs f0, 0x538(r31)
    lis r3, lbl_8074B088@ha
    lfd f2, lbl_8074B088@l(r3)
    fsubs f1, f27, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f31, f0
    ble lbl_fn_80358A5C_000003A0
    lfs f0, lbl_8088555C
    fsubs f31, f31, f0
lbl_fn_80358A5C_000003A0:
    lfs f0, lbl_80885560
    fcmpo cr0, f31, f0
    bge lbl_fn_80358A5C_000003B4
    lfs f0, lbl_8088555C
    fadds f31, f31, f0
lbl_fn_80358A5C_000003B4:
    lis r3, lbl_8074B088@ha
    frsp f1, f27
    stfs f27, 0x538(r31)
    lfd f2, lbl_8074B088@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_000003E0
    lfs f0, lbl_8088555C
    fsubs f7, f7, f0
lbl_fn_80358A5C_000003E0:
    lfs f0, lbl_80885560
    fcmpo cr0, f7, f0
    lfs f0, lbl_80885570
    fmuls f0, f0, f31
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_80358A5C_0000040C
    li r0, 0x1
    b lbl_fn_80358A5C_00000410
lbl_fn_80358A5C_0000040C:
    li r0, 0x0
lbl_fn_80358A5C_00000410:
    cmpwi r0, 0x0
    beq lbl_fn_80358A5C_00000424
    lfs f0, lbl_808855AC
    stfs f0, 0x2e8(r31)
    b lbl_fn_80358A5C_0000042C
lbl_fn_80358A5C_00000424:
    lfs f0, lbl_8088552C
    stfs f0, 0x2e8(r31)
lbl_fn_80358A5C_0000042C:
    lwz r3, 0x14c0(r31)
    lwz r0, 0x1518(r31)
    cmpw r3, r0
    ble lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80358A5C_0000045C
    lfs f28, lbl_808855B0
lbl_fn_80358A5C_0000045C:
    addi r3, r3, 0xc64
    bl fn_80126214
    lwz r0, 0xc90(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80358A5C_0000047C
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_80358A5C_0000047C:
    addi r4, r31, 0xcbc
    addi r29, r1, 0x1fc
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0xcc4(r31)
    stfs f2, 0x204(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9920
    lfs f0, lbl_808855B4
    fmr f29, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80358A5C_00000688
    addi r30, r1, 0x1b4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x204(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x1bc(r1)
    bl fn_805F98D0
    lfs f2, 0x1bc(r1)
    addi r29, r1, 0x1c0
    psq_l f1, 0x0(r30), 0, 0
    fabs f7, f2
    lfs f0, lbl_80885564
    psq_st f1, 0x0(r29), 0, 0
    frsp f7, f7
    stfs f2, 0x1c8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_00000518
    lfs f7, 0x1c0(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_0000050C
    lfs f0, lbl_80885568
    b lbl_fn_80358A5C_00000510
lbl_fn_80358A5C_0000050C:
    lfs f0, lbl_8088556C
lbl_fn_80358A5C_00000510:
    stfs f0, 0x140(r1)
    b lbl_fn_80358A5C_0000052C
lbl_fn_80358A5C_00000518:
    frsp f2, f2
    lfs f1, 0x1c0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x140(r1)
lbl_fn_80358A5C_0000052C:
    lfs f0, 0x140(r1)
    addi r3, r1, 0x858
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_8088552C
    addi r4, r1, 0x130
    lfs f27, 0x860(r1)
    mr r5, r4
    lfs f26, 0x85c(r1)
    addi r3, r1, 0x888
    lfs f25, 0x858(r1)
    lfs f24, 0x870(r1)
    lfs f23, 0x86c(r1)
    lfs f22, 0x868(r1)
    lfs f13, 0x880(r1)
    lfs f12, 0x87c(r1)
    lfs f11, 0x878(r1)
    lfs f10, 0x884(r1)
    lfs f9, 0x874(r1)
    lfs f8, 0x864(r1)
    lfs f0, lbl_80885550
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x1c8(r1)
    stfs f7, 0x8b8(r1)
    stfs f7, 0x8bc(r1)
    stfs f7, 0x8c0(r1)
    stfs f0, 0x8c4(r1)
    stfs f25, 0x100(r1)
    stfs f26, 0x104(r1)
    stfs f27, 0x108(r1)
    stfs f25, 0x888(r1)
    stfs f26, 0x88c(r1)
    stfs f27, 0x890(r1)
    stfs f22, 0x10c(r1)
    stfs f23, 0x110(r1)
    stfs f24, 0x114(r1)
    stfs f22, 0x898(r1)
    stfs f23, 0x89c(r1)
    stfs f24, 0x8a0(r1)
    stfs f11, 0x118(r1)
    stfs f12, 0x11c(r1)
    stfs f13, 0x120(r1)
    stfs f11, 0x8a8(r1)
    stfs f12, 0x8ac(r1)
    stfs f13, 0x8b0(r1)
    stfs f8, 0x124(r1)
    stfs f9, 0x128(r1)
    stfs f10, 0x12c(r1)
    stfs f8, 0x894(r1)
    stfs f9, 0x8a4(r1)
    stfs f10, 0x8b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x138(r1)
    bl fn_805F9750
    lfs f2, 0x138(r1)
    lfs f0, lbl_80885564
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_00000648
    lfs f7, 0x134(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_00000638
    lfs f0, lbl_80885568
    b lbl_fn_80358A5C_0000063C
lbl_fn_80358A5C_00000638:
    lfs f0, lbl_8088556C
lbl_fn_80358A5C_0000063C:
    fneg f0, f0
    stfs f0, 0x13c(r1)
    b lbl_fn_80358A5C_0000065C
lbl_fn_80358A5C_00000648:
    lfs f1, 0x134(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x13c(r1)
lbl_fn_80358A5C_0000065C:
    lfs f2, lbl_8088552C
    addi r3, r1, 0x13c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x208
    stfs f2, 0x144(r1)
    stfs f2, 0x1c8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x210(r1)
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00000688:
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0x208
    lfs f2, 0x53c(r31)
    stfs f2, 0x210(r1)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80358A5C_00001EE8
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_000006C8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_80358A5C_000006C8:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855B8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    lfs f0, lbl_8088559C
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00001EE8
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x155c(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    cmpwi r3, 0x0
    ble lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80358A5C_00001EE8
    mr r3, r31
    addi r4, r31, 0x16ac
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80358A5C_00001EE8
    mr r3, r31
    addi r4, r31, 0x16ac
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_80358A5C_00001EE8
    lfs f22, 0x2e4(r3)
    li r29, 0x0
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00000784
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_80358A5C_00000784:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855B8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_000007D4
    lfs f0, lbl_8088559C
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_000007D4
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x1560(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x3
    li r10, -0x1
    bl fn_800F8C6C
    mr r29, r3
lbl_fn_80358A5C_000007D4:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855BC
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00000824
    lfs f0, lbl_808855C0
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00000824
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x155c(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    add r29, r29, r3
lbl_fn_80358A5C_00000824:
    cmpwi r29, 0x0
    ble lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80358A5C_00001EE8
    mr r3, r31
    addi r4, r31, 0x16ac
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_80358A5C_00001EE8
    mr r3, r31
    addi r4, r31, 0x16ac
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_80358A5C_00001EE8
    lfs f7, 0x2e4(r3)
    lfs f0, lbl_80885588
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_00000A0C
    stfs f29, 0x1f0(r1)
    addi r29, r1, 0x9c8
    stfs f29, 0x1f4(r1)
    stfs f28, 0x1f8(r1)
    stfs f29, 0x9f4(r1)
    stfs f29, 0x9ec(r1)
    stfs f29, 0x9e8(r1)
    stfs f29, 0x9e4(r1)
    stfs f29, 0x9e0(r1)
    stfs f29, 0x9d8(r1)
    stfs f29, 0x9d4(r1)
    stfs f29, 0x9d0(r1)
    stfs f29, 0x9cc(r1)
    stfs f28, 0x9f0(r1)
    stfs f28, 0x9dc(r1)
    stfs f28, 0x9c8(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f29, f1
    beq lbl_fn_80358A5C_0000090C
    addi r3, r1, 0x768
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x768
    addi r5, r1, 0x738
    bl fn_805F89F0
    addi r3, r1, 0x738
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
lbl_fn_80358A5C_0000090C:
    lfs f0, lbl_8088552C
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_0000096C
    addi r3, r1, 0x7c8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x7c8
    addi r5, r1, 0x798
    bl fn_805F89F0
    addi r3, r1, 0x798
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
lbl_fn_80358A5C_0000096C:
    lfs f0, lbl_8088552C
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_000009CC
    addi r3, r1, 0x828
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x828
    addi r5, r1, 0x7f8
    bl fn_805F89F0
    addi r3, r1, 0x7f8
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
lbl_fn_80358A5C_000009CC:
    addi r4, r1, 0x1f0
    addi r3, r1, 0x9c8
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x528(r31)
    lfs f0, 0x1f0(r1)
    lfs f8, 0x52c(r31)
    fadds f0, f7, f0
    lfs f7, 0x530(r31)
    stfs f0, 0x528(r31)
    lfs f0, 0x1f4(r1)
    fadds f0, f8, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x1f8(r1)
    fadds f0, f7, f0
    stfs f0, 0x530(r31)
lbl_fn_80358A5C_00000A0C:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855C4
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00000D50
    lfs f0, lbl_808855C8
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00000D50
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xb
    beq lbl_fn_80358A5C_00000A50
    cmpwi r0, 0xe
    beq lbl_fn_80358A5C_00000C54
    cmpwi r0, 0x11
    beq lbl_fn_80358A5C_00000CE0
    b lbl_fn_80358A5C_00000D50
lbl_fn_80358A5C_00000A50:
    lfs f8, lbl_8088552C
    addi r29, r1, 0x5e8
    lfs f0, lbl_80885550
    lfs f7, lbl_8088559C
    stfs f8, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f8, 0x614(r1)
    stfs f8, 0x60c(r1)
    stfs f8, 0x608(r1)
    stfs f8, 0x604(r1)
    stfs f8, 0x600(r1)
    stfs f8, 0x5f8(r1)
    stfs f8, 0x5f4(r1)
    stfs f8, 0x5f0(r1)
    stfs f8, 0x5ec(r1)
    stfs f0, 0x610(r1)
    stfs f0, 0x5fc(r1)
    stfs f0, 0x5e8(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f8, f1
    beq lbl_fn_80358A5C_00000AF8
    addi r3, r1, 0x6d8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x6d8
    addi r5, r1, 0x708
    bl fn_805F89F0
    addi r3, r1, 0x708
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
lbl_fn_80358A5C_00000AF8:
    lfs f0, lbl_8088552C
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_00000B58
    addi r3, r1, 0x678
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x678
    addi r5, r1, 0x6a8
    bl fn_805F89F0
    addi r3, r1, 0x6a8
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
lbl_fn_80358A5C_00000B58:
    lfs f0, lbl_8088552C
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_00000BB8
    addi r3, r1, 0x618
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x618
    addi r5, r1, 0x648
    bl fn_805F89F0
    addi r3, r1, 0x648
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
lbl_fn_80358A5C_00000BB8:
    addi r4, r1, 0x88
    addi r3, r1, 0x5e8
    mr r5, r4
    bl fn_805F93C0
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f8, 0x530(r31)
    li r3, -0x1
    lfs f0, 0x90(r1)
    li r0, 0x1
    lfs f9, 0x52c(r31)
    addi r4, r31, 0x164c
    fadds f10, f8, f0
    lfs f7, 0x8c(r1)
    lfs f8, 0x528(r31)
    addi r7, r1, 0x94
    lfs f0, lbl_80885550
    fadds f9, f9, f7
    lfs f7, 0x88(r1)
    addi r8, r31, 0x534
    stfs f9, 0x98(r1)
    addi r9, r1, 0xa0
    fadds f7, f8, f7
    lfs f1, lbl_808855B0
    stfs f10, 0x9c(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f7, 0x94(r1)
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80358A5C_00000D50
lbl_fn_80358A5C_00000C54:
    mr r3, r31
    li r4, 0x5
    bl fn_80232B7C
    lwz r4, lbl_8087F3C0
    li r0, 0x2
    lfs f1, lbl_80885550
    li r3, -0x1
    stw r0, 0xb8(r4)
    li r0, 0x1
    lfs f0, lbl_8088552C
    addi r4, r31, 0x1640
    stfs f0, 0xc0(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0xcc
    addi r8, r1, 0xc0
    stfs f0, 0xc4(r1)
    addi r9, r1, 0xb0
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f0, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f1, 0xb0(r1)
    stfs f1, 0xb4(r1)
    stfs f1, 0xb8(r1)
    stfs f1, 0xbc(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_80358A5C_00000D50
lbl_fn_80358A5C_00000CE0:
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_8088552C
    li r3, -0x1
    lfs f1, lbl_80885550
    li r0, 0x1
    stfs f0, 0xe8(r1)
    addi r4, r31, 0x1634
    addi r5, r31, 0xb0
    addi r7, r1, 0xf4
    stfs f0, 0xec(r1)
    addi r8, r1, 0xe8
    addi r9, r1, 0xd8
    li r6, 0x0
    stfs f0, 0xf0(r1)
    li r10, -0x1
    stfs f0, 0xf4(r1)
    stfs f0, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f1, 0xd8(r1)
    stfs f1, 0xdc(r1)
    stfs f1, 0xe0(r1)
    stfs f1, 0xe4(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80358A5C_00000D50:
    lfs f22, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00000D78
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_80358A5C_00000D78:
    lwz r3, 0x14bc(r31)
    cmpwi r3, 0x0
    bne lbl_fn_80358A5C_00001EE8
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855CC
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    li r0, -0x1
    lfs f1, lbl_8088552C
    stw r0, 0x8(r1)
    mr r4, r31
    lfs f2, lbl_80885550
    addi r7, r31, 0x528
    stw r0, 0xc(r1)
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    lwz r3, lbl_8087F048
    lwz r5, 0x1564(r31)
    lwz r6, 0x590(r31)
    bl fn_800FAB80
    b lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80358A5C_00000DFC
    cmpwi r0, 0x1
    beq lbl_fn_80358A5C_00000ECC
    cmpwi r0, 0x2
    beq lbl_fn_80358A5C_00000FA0
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00000DFC:
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f7, lbl_8088559C
    fsubs f0, f1, f7
    fcmpo cr0, f22, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00000E68
    lwz r4, 0x14bc(r31)
    li r0, 0x1
    lfs f0, lbl_80885550
    addi r3, r31, 0xb0
    addi r4, r4, 0x1
    stw r4, 0x14bc(r31)
    lfs f1, lbl_8088552C
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x156
    lfs f2, lbl_808855D0
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00000E68:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80358A5C_00001EE8
    lfs f8, 0x2e4(r31)
    lfs f0, lbl_808855B8
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    fcmpo cr0, f8, f7
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00001EE8
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x156c(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x5
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x598(r31)
    add r0, r0, r3
    stw r0, 0x598(r31)
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00000ECC:
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_808855D4
    fsubs f0, f1, f0
    fcmpo cr0, f22, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00000F38
    lwz r4, 0x14bc(r31)
    li r0, 0x1
    lfs f0, lbl_80885550
    addi r3, r31, 0xb0
    addi r4, r4, 0x1
    stw r4, 0x14bc(r31)
    lfs f1, lbl_8088552C
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x15a
    lfs f2, lbl_808855D0
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00000F38:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80358A5C_00001EE8
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855B8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    lfs f0, lbl_8088559C
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00001EE8
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x156c(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x5
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x598(r31)
    add r0, r0, r3
    stw r0, 0x598(r31)
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00000FA0:
    lwz r0, 0x598(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80358A5C_00000FD0
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_808855D4
    fsubs f0, f1, f0
    fcmpo cr0, f22, f0
    cror eq, gt, eq
    beq lbl_fn_80358A5C_00000FEC
lbl_fn_80358A5C_00000FD0:
    lfs f22, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00000FFC
lbl_fn_80358A5C_00000FEC:
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00000FFC:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80358A5C_00001EE8
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855C0
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    lfs f0, lbl_808855D8
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00001EE8
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x1570(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x5
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x598(r31)
    add r0, r0, r3
    stw r0, 0x598(r31)
    b lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80358A5C_000013C8
    lwz r0, 0x598(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80358A5C_00001138
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    lfs f8, lbl_80885574
    fsubs f0, f1, f8
    fcmpo cr0, f22, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001138
    lwz r3, 0x151c(r31)
    lis r30, 0x4330
    lis r29, lbl_8074B090@ha
    stw r30, 0x9f8(r1)
    srwi r0, r3, 31
    lfd f7, lbl_8074B090@l(r29)
    add r0, r0, r3
    lfs f30, 0x2e4(r31)
    srawi r0, r0, 1
    stw r0, 0x154c(r31)
    xoris r0, r0, 0x8000
    addi r3, r31, 0xb0
    stw r0, 0x9fc(r1)
    li r4, 0x0
    lfd f0, 0x9f8(r1)
    fsubs f0, f0, f7
    fadds f0, f8, f0
    fdivs f0, f8, f0
    stfs f0, 0x2e8(r31)
    bl fn_80097D7C
    lwz r0, 0x154c(r31)
    lfs f9, lbl_80885574
    xoris r0, r0, 0x8000
    stw r0, 0xa04(r1)
    fsubs f8, f1, f9
    lfd f7, lbl_8074B090@l(r29)
    stw r30, 0xa00(r1)
    lfd f0, 0xa00(r1)
    fsubs f8, f30, f8
    fsubs f0, f0, f7
    fadds f0, f9, f0
    fmuls f0, f8, f0
    fdivs f0, f0, f9
    fcmpo cr0, f0, f9
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001138
    li r0, 0x1
    stw r0, 0x14bc(r31)
lbl_fn_80358A5C_00001138:
    lfs f22, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_000011B8
    lwz r0, 0x598(r31)
    li r30, 0x1
    stw r30, 0x14bc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80358A5C_00001370
    mr r3, r31
    addi r4, r31, 0x1664
    li r5, 0x1
    bl fn_805A4A20
    lfs f0, lbl_80885550
    addi r3, r31, 0xb0
    lwz r0, 0x151c(r31)
    li r4, 0x0
    stw r0, 0x154c(r31)
    li r5, 0x145
    lfs f1, lbl_8088552C
    li r6, 0x0
    stw r30, 0x3fc(r31)
    li r7, 0x0
    lfs f2, lbl_808855D0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80358A5C_00001370
lbl_fn_80358A5C_000011B8:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885534
    addi r29, r1, 0x998
    lfs f7, lbl_8088552C
    fdivs f8, f0, f1
    lfs f0, lbl_80885550
    stfs f7, 0x1e4(r1)
    stfs f7, 0x1e8(r1)
    stfs f7, 0x9c4(r1)
    stfs f7, 0x9bc(r1)
    stfs f8, 0x1ec(r1)
    stfs f7, 0x9b8(r1)
    stfs f7, 0x9b4(r1)
    stfs f7, 0x9b0(r1)
    stfs f7, 0x9a8(r1)
    stfs f7, 0x9a4(r1)
    stfs f7, 0x9a0(r1)
    stfs f7, 0x99c(r1)
    stfs f0, 0x9c0(r1)
    stfs f0, 0x9ac(r1)
    stfs f0, 0x998(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_80358A5C_00001270
    addi r3, r1, 0x4f8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x4f8
    addi r5, r1, 0x4c8
    bl fn_805F89F0
    addi r3, r1, 0x4c8
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
lbl_fn_80358A5C_00001270:
    lfs f0, lbl_8088552C
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_000012D0
    addi r3, r1, 0x558
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x558
    addi r5, r1, 0x528
    bl fn_805F89F0
    addi r3, r1, 0x528
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
lbl_fn_80358A5C_000012D0:
    lfs f0, lbl_8088552C
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_00001330
    addi r3, r1, 0x5b8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x5b8
    addi r5, r1, 0x588
    bl fn_805F89F0
    addi r3, r1, 0x588
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
lbl_fn_80358A5C_00001330:
    addi r4, r1, 0x1e4
    addi r3, r1, 0x998
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x528(r31)
    lfs f0, 0x1e4(r1)
    lfs f8, 0x52c(r31)
    fadds f0, f7, f0
    lfs f7, 0x530(r31)
    stfs f0, 0x528(r31)
    lfs f0, 0x1e8(r1)
    fadds f0, f8, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x1ec(r1)
    fadds f0, f7, f0
    stfs f0, 0x530(r31)
lbl_fn_80358A5C_00001370:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855DC
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_000013C8
    lfs f0, lbl_808855E0
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_000013C8
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x1574(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x598(r31)
    add r0, r0, r3
    stw r0, 0x598(r31)
lbl_fn_80358A5C_000013C8:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80358A5C_00001EE8
    lwz r3, 0x154c(r31)
    subic. r0, r3, 0x1
    stw r0, 0x154c(r31)
    bgt lbl_fn_80358A5C_000013F8
    lwz r3, 0x14cc(r31)
    li r0, 0x0
    stw r0, 0x154c(r31)
    oris r3, r3, 0x8000
    stw r3, 0x14cc(r31)
lbl_fn_80358A5C_000013F8:
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x145
    bne lbl_fn_80358A5C_00001EE8
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855DC
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    lfs f0, lbl_808855E0
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00001EE8
    lfs f0, lbl_80885598
    stfs f0, 0x2e8(r31)
    b lbl_fn_80358A5C_00001EE8
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001488
    lfs f0, lbl_80885550
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_8088552C
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x174
    lfs f2, lbl_808855D0
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80358A5C_00001488:
    lwz r3, 0x14c0(r31)
    lwz r0, 0x1540(r31)
    cmpw r3, r0
    ble lbl_fn_80358A5C_000014A4
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_80358A5C_000014A4:
    lwz r3, 0x1540(r31)
    lwz r4, 0x14c0(r31)
    subi r0, r3, 0x14
    cmpw r4, r0
    bne lbl_fn_80358A5C_00001EE8
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xb
    beq lbl_fn_80358A5C_000014D8
    cmpwi r0, 0xe
    beq lbl_fn_80358A5C_000014F0
    cmpwi r0, 0x11
    beq lbl_fn_80358A5C_00001508
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_000014D8:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_000014F0:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x5
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00001508:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80358A5C_00001EE8
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001548
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_80358A5C_00001548:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855E0
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001594
    lfs f0, lbl_808855C8
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00001594
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x1568(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80358A5C_00001594:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_8088559C
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    lfs f0, lbl_808855DC
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_00001EE8
    lfs f29, lbl_80885550
    b lbl_fn_80358A5C_00001EE8
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_000015E8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_000015E8:
    lfs f22, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808855D4
    fsubs f0, f1, f0
    fcmpo cr0, f22, f0
    bge lbl_fn_80358A5C_00001EE8
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, 0x1558(r31)
    addi r29, r1, 0x968
    lfs f7, lbl_8088552C
    fneg f8, f0
    lfs f0, lbl_80885550
    stfs f7, 0x1d8(r1)
    fdivs f8, f8, f1
    stfs f7, 0x1dc(r1)
    stfs f7, 0x994(r1)
    stfs f7, 0x98c(r1)
    stfs f7, 0x988(r1)
    stfs f7, 0x984(r1)
    stfs f8, 0x1e0(r1)
    stfs f7, 0x980(r1)
    stfs f7, 0x978(r1)
    stfs f7, 0x974(r1)
    stfs f7, 0x970(r1)
    stfs f7, 0x96c(r1)
    stfs f0, 0x990(r1)
    stfs f0, 0x97c(r1)
    stfs f0, 0x968(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_80358A5C_000016C4
    addi r3, r1, 0x3d8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x3d8
    addi r5, r1, 0x3a8
    bl fn_805F89F0
    addi r3, r1, 0x3a8
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
lbl_fn_80358A5C_000016C4:
    lfs f0, lbl_8088552C
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_00001724
    addi r3, r1, 0x438
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x438
    addi r5, r1, 0x408
    bl fn_805F89F0
    addi r3, r1, 0x408
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
lbl_fn_80358A5C_00001724:
    lfs f0, lbl_8088552C
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_00001784
    addi r3, r1, 0x498
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x498
    addi r5, r1, 0x468
    bl fn_805F89F0
    addi r3, r1, 0x468
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
lbl_fn_80358A5C_00001784:
    addi r4, r1, 0x1d8
    addi r3, r1, 0x968
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x528(r31)
    lfs f0, 0x1d8(r1)
    lfs f8, 0x52c(r31)
    fadds f0, f7, f0
    lfs f7, 0x530(r31)
    stfs f0, 0x528(r31)
    lfs f0, 0x1dc(r1)
    fadds f0, f8, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x1e0(r1)
    fadds f0, f7, f0
    stfs f0, 0x530(r31)
    b lbl_fn_80358A5C_00001EE8
    lwz r4, 0xd1c(r3)
    lfs f30, 0x2e4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80358A5C_00001AB0
    lfs f7, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f9, 0x52c(r4)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x28
    lfs f7, 0x528(r4)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x2c(r1)
    stfs f0, 0x28(r1)
    stfs f10, 0x30(r1)
    bl fn_805F9920
    fabs f7, f1
    lfs f0, lbl_80885564
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_80358A5C_00001830
    addi r3, r1, 0x28
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80358A5C_00001830:
    lfs f2, 0x30(r1)
    addi r3, r1, 0x28
    lfs f0, lbl_80885564
    addi r29, r1, 0x34
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f7, f7
    stfs f2, 0x3c(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_00001880
    lfs f7, 0x34(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_00001874
    lfs f0, lbl_80885568
    b lbl_fn_80358A5C_00001878
lbl_fn_80358A5C_00001874:
    lfs f0, lbl_8088556C
lbl_fn_80358A5C_00001878:
    stfs f0, 0x44(r1)
    b lbl_fn_80358A5C_00001894
lbl_fn_80358A5C_00001880:
    frsp f2, f2
    lfs f1, 0x34(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x44(r1)
lbl_fn_80358A5C_00001894:
    lfs f0, 0x44(r1)
    addi r3, r1, 0x378
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_8088552C
    addi r4, r1, 0x4c
    lfs f8, 0x380(r1)
    mr r5, r4
    lfs f9, 0x37c(r1)
    addi r3, r1, 0x338
    lfs f10, 0x378(r1)
    lfs f11, 0x390(r1)
    lfs f12, 0x38c(r1)
    lfs f13, 0x388(r1)
    lfs f22, 0x3a0(r1)
    lfs f23, 0x39c(r1)
    lfs f24, 0x398(r1)
    lfs f25, 0x3a4(r1)
    lfs f26, 0x394(r1)
    lfs f27, 0x384(r1)
    lfs f0, lbl_80885550
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x3c(r1)
    stfs f7, 0x368(r1)
    stfs f7, 0x36c(r1)
    stfs f7, 0x370(r1)
    stfs f0, 0x374(r1)
    stfs f10, 0x7c(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f10, 0x338(r1)
    stfs f9, 0x33c(r1)
    stfs f8, 0x340(r1)
    stfs f13, 0x70(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f13, 0x348(r1)
    stfs f12, 0x34c(r1)
    stfs f11, 0x350(r1)
    stfs f24, 0x64(r1)
    stfs f23, 0x68(r1)
    stfs f22, 0x6c(r1)
    stfs f24, 0x358(r1)
    stfs f23, 0x35c(r1)
    stfs f22, 0x360(r1)
    stfs f27, 0x58(r1)
    stfs f26, 0x5c(r1)
    stfs f25, 0x60(r1)
    stfs f27, 0x344(r1)
    stfs f26, 0x354(r1)
    stfs f25, 0x364(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F9750
    lfs f2, 0x54(r1)
    lfs f0, lbl_80885564
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_000019B0
    lfs f7, 0x50(r1)
    lfs f0, lbl_8088552C
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_000019A0
    lfs f0, lbl_80885568
    b lbl_fn_80358A5C_000019A4
lbl_fn_80358A5C_000019A0:
    lfs f0, lbl_8088556C
lbl_fn_80358A5C_000019A4:
    fneg f0, f0
    stfs f0, 0x40(r1)
    b lbl_fn_80358A5C_000019C4
lbl_fn_80358A5C_000019B0:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x40(r1)
lbl_fn_80358A5C_000019C4:
    addi r3, r1, 0x40
    lfs f2, lbl_8088552C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f8, 0x538(r31)
    lfs f7, 0x38(r1)
    lfs f0, lbl_80885558
    fsubs f7, f7, f8
    stfs f2, 0x48(r1)
    stfs f2, 0x3c(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_00001A04
    lfs f0, lbl_8088555C
    fsubs f0, f7, f0
    fmadds f22, f28, f0, f8
    b lbl_fn_80358A5C_00001A24
lbl_fn_80358A5C_00001A04:
    lfs f0, lbl_80885560
    fcmpo cr0, f7, f0
    bge lbl_fn_80358A5C_00001A20
    lfs f0, lbl_8088555C
    fadds f0, f0, f7
    fmadds f22, f28, f0, f8
    b lbl_fn_80358A5C_00001A24
lbl_fn_80358A5C_00001A20:
    fmadds f22, f28, f7, f8
lbl_fn_80358A5C_00001A24:
    lfs f0, 0x538(r31)
    lis r3, lbl_8074B088@ha
    lfd f2, lbl_8074B088@l(r3)
    fsubs f1, f22, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f31, f0
    ble lbl_fn_80358A5C_00001A50
    lfs f0, lbl_8088555C
    fsubs f31, f31, f0
lbl_fn_80358A5C_00001A50:
    lfs f0, lbl_80885560
    fcmpo cr0, f31, f0
    bge lbl_fn_80358A5C_00001A64
    lfs f0, lbl_8088555C
    fadds f31, f31, f0
lbl_fn_80358A5C_00001A64:
    lis r3, lbl_8074B088@ha
    frsp f1, f22
    stfs f22, 0x538(r31)
    lfd f2, lbl_8074B088@l(r3)
    bl fn_8068AEA8
    frsp f7, f1
    lfs f0, lbl_80885558
    fcmpo cr0, f7, f0
    ble lbl_fn_80358A5C_00001A90
    lfs f0, lbl_8088555C
    fsubs f7, f7, f0
lbl_fn_80358A5C_00001A90:
    lfs f0, lbl_80885560
    fcmpo cr0, f7, f0
    lfs f0, lbl_80885570
    fmuls f0, f0, f31
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f29
    cror eq, gt, eq
lbl_fn_80358A5C_00001AB0:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80358A5C_00001CFC
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    ble lbl_fn_80358A5C_00001B40
    addi r5, r31, 0x1534
    lfs f2, 0x153c(r31)
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r31, 0xb0
    psq_st f1, 0x528(r31), 0, 0
    li r4, 0x0
    lfs f1, lbl_8088552C
    stfs f2, 0x530(r31)
    bl fn_80097CCC
    lfs f7, lbl_80885550
    li r0, 0x1
    lfs f0, lbl_808855AC
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_8088552C
    li r5, 0x1ea
    stfs f7, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_808855D0
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14bc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00001B40:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_808855E4
    addi r29, r1, 0x938
    lfs f7, lbl_8088552C
    fdivs f8, f0, f1
    lfs f0, lbl_80885550
    stfs f7, 0x1cc(r1)
    stfs f7, 0x1d0(r1)
    stfs f7, 0x964(r1)
    stfs f7, 0x95c(r1)
    stfs f8, 0x1d4(r1)
    stfs f7, 0x958(r1)
    stfs f7, 0x954(r1)
    stfs f7, 0x950(r1)
    stfs f7, 0x948(r1)
    stfs f7, 0x944(r1)
    stfs f7, 0x940(r1)
    stfs f7, 0x93c(r1)
    stfs f0, 0x960(r1)
    stfs f0, 0x94c(r1)
    stfs f0, 0x938(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_80358A5C_00001BF8
    addi r3, r1, 0x248
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x248
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r3, r1, 0x218
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
lbl_fn_80358A5C_00001BF8:
    lfs f0, lbl_8088552C
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_00001C58
    addi r3, r1, 0x2a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x2a8
    addi r5, r1, 0x278
    bl fn_805F89F0
    addi r3, r1, 0x278
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
lbl_fn_80358A5C_00001C58:
    lfs f0, lbl_8088552C
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80358A5C_00001CB8
    addi r3, r1, 0x308
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x308
    addi r5, r1, 0x2d8
    bl fn_805F89F0
    addi r3, r1, 0x2d8
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
lbl_fn_80358A5C_00001CB8:
    addi r4, r1, 0x1cc
    addi r3, r1, 0x938
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x528(r31)
    lfs f0, 0x1cc(r1)
    lfs f8, 0x52c(r31)
    fadds f0, f7, f0
    lfs f7, 0x530(r31)
    stfs f0, 0x528(r31)
    lfs f0, 0x1d0(r1)
    fadds f0, f8, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x1d4(r1)
    fadds f0, f7, f0
    stfs f0, 0x530(r31)
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00001CFC:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    ble lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80358A5C_00001EB4
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001D94
    lwz r4, 0x14bc(r31)
    li r0, 0x1
    lfs f7, lbl_80885550
    addi r3, r31, 0xb0
    lfs f0, lbl_808855AC
    addi r4, r4, 0x1
    stw r4, 0x14bc(r31)
    li r4, 0x0
    lfs f1, lbl_8088552C
    li r5, 0x14b
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_808855D0
    li r7, 0x0
    stfs f7, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80358A5C_00001E64
lbl_fn_80358A5C_00001D94:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855CC
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001DC0
    addi r3, r31, 0x1500
    lfs f2, 0x1508(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    b lbl_fn_80358A5C_00001E64
lbl_fn_80358A5C_00001DC0:
    lfs f0, lbl_80885540
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001E50
    fsubs f11, f7, f0
    lfs f10, lbl_80885578
    lfs f7, 0x1508(r31)
    addi r3, r1, 0x1a8
    lfs f9, 0x1514(r31)
    lfs f0, 0x1504(r31)
    fsubs f12, f7, f9
    lfs f8, 0x1510(r31)
    fmuls f10, f11, f10
    lfs f7, 0x1500(r31)
    fsubs f11, f0, f8
    lfs f0, 0x150c(r31)
    fsubs f7, f7, f0
    stfs f12, 0x24(r1)
    fmuls f12, f12, f10
    stfs f11, 0x20(r1)
    fmuls f11, f11, f10
    fmuls f10, f7, f10
    stfs f7, 0x1c(r1)
    fadds f2, f12, f9
    fadds f7, f11, f8
    fadds f0, f10, f0
    stfs f10, 0x10(r1)
    stfs f7, 0x1ac(r1)
    stfs f0, 0x1a8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f11, 0x14(r1)
    stfs f12, 0x18(r1)
    stfs f2, 0x1b0(r1)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    b lbl_fn_80358A5C_00001E64
lbl_fn_80358A5C_00001E50:
    addi r3, r31, 0x150c
    lfs f2, 0x1514(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
lbl_fn_80358A5C_00001E64:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808855E8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    lfs f0, lbl_808855E0
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80358A5C_00001EE8
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x155c(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_8088552C
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00001EB4:
    lfs f22, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f22, f1
    cror eq, gt, eq
    bne lbl_fn_80358A5C_00001EE8
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_80358A5C_00001EE8
lbl_fn_80358A5C_00001EE0:
    bl fn_805A4258
    b lbl_fn_80358A5C_00001F04
lbl_fn_80358A5C_00001EE8:
    lfs f0, 0x568(r31)
    fmr f1, f29
    mr r3, r31
    addi r4, r1, 0x208
    fmuls f2, f0, f28
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_80358A5C_00001F04:
    li r0, 0xab8
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xab0(r1)
    li r0, 0xaa8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xaa0(r1)
    li r0, 0xa98
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xa90(r1)
    li r0, 0xa88
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0xa80(r1)
    li r0, 0xa78
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0xa70(r1)
    li r0, 0xa68
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0xa60(r1)
    li r0, 0xa58
    psq_lx f25, r1, r0, 0, 0
    lfd f25, 0xa50(r1)
    li r0, 0xa48
    psq_lx f24, r1, r0, 0, 0
    lfd f24, 0xa40(r1)
    li r0, 0xa38
    psq_lx f23, r1, r0, 0, 0
    lfd f23, 0xa30(r1)
    li r0, 0xa28
    psq_lx f22, r1, r0, 0, 0
    lfd f22, 0xa20(r1)
    lwz r31, 0xa1c(r1)
    lwz r30, 0xa18(r1)
    lwz r0, 0xac4(r1)
    lwz r29, 0xa14(r1)
    mtlr r0
    addi r1, r1, 0xac0
    blr
}
