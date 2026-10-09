#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8000DB1C(void);
extern void fn_8001047C(void);
extern void fn_800109E0(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_80013410(void);
extern void fn_8004B378(void);
extern void fn_8008B964(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_800F52F8(void);
extern void fn_800F7260(void);
extern void fn_800F8524(void);
extern void fn_8010F6FC(void);
extern void fn_80112220(void);
extern void fn_801125F8(void);
extern void fn_80112958(void);
extern void fn_80112960(void);
extern void fn_80112A00(void);
extern void fn_80112F54(void);
extern void fn_80113CCC(void);
extern void fn_801144A8(void);
extern void fn_801146A4(void);
extern void fn_80114AA0(void);
extern void fn_80114AB4(void);
extern void fn_80116B98(void);
extern void fn_80116BA4(void);
extern void fn_80116BAC(void);
extern void fn_80116BB4(void);
extern void fn_80116BB8(void);
extern void fn_80116BC8(void);
extern void fn_80116BD4(void);
extern void fn_80116E64(void);
extern void fn_80116E6C(void);
extern void fn_80116E74(void);
extern void fn_801240B4(void);
extern void fn_8048BCA4(void);
extern void fn_8048BD04(void);
extern void fn_805F9050(void);
extern void fn_805F9190(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_805F99F0(void);
extern void fn_805F9AB0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807366B0[];
extern u8 lbl_807366C0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D980;
extern u32 lbl_8087D984;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F540;
extern u32 lbl_8087F9C0;
extern u32 lbl_808816A8;
extern u32 lbl_808816AC;
extern u32 lbl_808816B0;
extern u32 lbl_808816C4;
extern u32 lbl_808816CC;
extern u32 lbl_808816D4;
extern u32 lbl_808816D8;
extern u32 lbl_808816DC;
extern u32 lbl_808816E0;
extern u32 lbl_808816E4;
extern u32 lbl_808816E8;
extern u32 lbl_808816EC;
extern u32 lbl_808816F0;
extern u32 lbl_808816F4;
extern u32 lbl_808816F8;
extern u32 lbl_808816FC;
extern u32 lbl_80881700;
extern u32 lbl_80881704;
extern u32 lbl_80881708;
extern u32 lbl_8088170C;
extern u32 lbl_80881710;

/* Function declarations */
void fn_801151A4(void);
void fn_801156BC(void);
void fn_801156C4(void);
void fn_801156CC(void);
void fn_801156D8(void);
void fn_801156E0(void);
void fn_801156F8(void);
void fn_80115704(void);
void fn_801157DC(void);
void fn_801162A0(void);
void fn_801162A4(void);

asm void fn_801151A4(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x1
    stw r0, 0xc4(r1)
    li r6, 0x0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    lwz r3, lbl_8087EF70
    bl fn_800A56A8
    fneg f31, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801151A4_00000068
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    fadds f31, f31, f0
lbl_fn_801151A4_00000068:
    lwz r3, lbl_8087F9C0
    cmpwi r3, 0x0
    beq lbl_fn_801151A4_0000008C
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_801151A4_0000008C
    lfs f0, lbl_808816AC
    fmuls f31, f31, f0
lbl_fn_801151A4_0000008C:
    lfs f0, lbl_808816AC
    fcmpo cr0, f0, f31
    ble lbl_fn_801151A4_0000009C
    b lbl_fn_801151A4_000000A0
lbl_fn_801151A4_0000009C:
    fmr f0, f31
lbl_fn_801151A4_000000A0:
    lfs f3, lbl_808816A8
    fcmpo cr0, f3, f0
    bge lbl_fn_801151A4_000000B0
    b lbl_fn_801151A4_000000C4
lbl_fn_801151A4_000000B0:
    lfs f3, lbl_808816AC
    fcmpo cr0, f3, f31
    ble lbl_fn_801151A4_000000C0
    b lbl_fn_801151A4_000000C4
lbl_fn_801151A4_000000C0:
    fmr f3, f31
lbl_fn_801151A4_000000C4:
    fabs f4, f3
    lfs f0, lbl_808816D4
    frsp f4, f4
    fcmpo cr0, f4, f0
    ble lbl_fn_801151A4_000001BC
    lfs f0, lbl_808816B0
    fcmpo cr0, f3, f0
    ble lbl_fn_801151A4_000000EC
    lfs f5, lbl_808816A8
    b lbl_fn_801151A4_000000F0
lbl_fn_801151A4_000000EC:
    lfs f5, lbl_808816AC
lbl_fn_801151A4_000000F0:
    fabs f4, f3
    lwz r3, lbl_8087F9C0
    lfs f3, lbl_808816D4
    lfs f0, lbl_808816D8
    cmpwi r3, 0x0
    frsp f4, f4
    fsubs f3, f4, f3
    fdivs f6, f3, f0
    beq lbl_fn_801151A4_0000012C
    lfs f3, 0x4c(r3)
    lfs f4, lbl_808816A8
    lfs f0, lbl_808816DC
    fsubs f3, f3, f4
    fmadds f0, f0, f3, f4
    fmuls f6, f6, f0
lbl_fn_801151A4_0000012C:
    lfs f3, 0x200(r31)
    lis r3, lbl_807366C0@ha
    lfs f0, 0x25c(r31)
    fmuls f3, f5, f3
    lfd f2, lbl_807366C0@l(r3)
    fmuls f6, f6, f3
    fadds f1, f0, f6
    stfs f1, 0x25c(r31)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808816E0
    fcmpo cr0, f4, f0
    ble lbl_fn_801151A4_00000168
    lfs f0, lbl_808816E4
    fsubs f4, f4, f0
lbl_fn_801151A4_00000168:
    lfs f0, lbl_808816E8
    fcmpo cr0, f4, f0
    bge lbl_fn_801151A4_0000017C
    lfs f0, lbl_808816E4
    fadds f4, f4, f0
lbl_fn_801151A4_0000017C:
    frsp f3, f4
    stfs f4, 0x25c(r31)
    lfs f0, 0x268(r31)
    fabs f4, f3
    frsp f4, f4
    fcmpo cr0, f4, f0
    ble lbl_fn_801151A4_000001BC
    lfs f0, lbl_808816B0
    fcmpo cr0, f3, f0
    ble lbl_fn_801151A4_000001AC
    lfs f3, lbl_808816A8
    b lbl_fn_801151A4_000001B0
lbl_fn_801151A4_000001AC:
    lfs f3, lbl_808816AC
lbl_fn_801151A4_000001B0:
    lfs f0, 0x268(r31)
    fmuls f0, f0, f3
    stfs f0, 0x25c(r31)
lbl_fn_801151A4_000001BC:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f31, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801151A4_00000204
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    fadds f31, f31, f0
lbl_fn_801151A4_00000204:
    lwz r3, lbl_8087F9C0
    cmpwi r3, 0x0
    beq lbl_fn_801151A4_00000228
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_801151A4_00000228
    lfs f0, lbl_808816AC
    fmuls f31, f31, f0
lbl_fn_801151A4_00000228:
    lfs f0, lbl_808816AC
    fcmpo cr0, f0, f31
    ble lbl_fn_801151A4_00000238
    b lbl_fn_801151A4_0000023C
lbl_fn_801151A4_00000238:
    fmr f0, f31
lbl_fn_801151A4_0000023C:
    lfs f3, lbl_808816A8
    fcmpo cr0, f3, f0
    bge lbl_fn_801151A4_0000024C
    b lbl_fn_801151A4_00000260
lbl_fn_801151A4_0000024C:
    lfs f3, lbl_808816AC
    fcmpo cr0, f3, f31
    ble lbl_fn_801151A4_0000025C
    b lbl_fn_801151A4_00000260
lbl_fn_801151A4_0000025C:
    fmr f3, f31
lbl_fn_801151A4_00000260:
    fabs f4, f3
    lfs f0, lbl_808816D4
    frsp f4, f4
    fcmpo cr0, f4, f0
    ble lbl_fn_801151A4_00000358
    lfs f0, lbl_808816B0
    fcmpo cr0, f3, f0
    ble lbl_fn_801151A4_00000288
    lfs f5, lbl_808816A8
    b lbl_fn_801151A4_0000028C
lbl_fn_801151A4_00000288:
    lfs f5, lbl_808816AC
lbl_fn_801151A4_0000028C:
    fabs f4, f3
    lwz r3, lbl_8087F9C0
    lfs f3, lbl_808816D4
    lfs f0, lbl_808816D8
    cmpwi r3, 0x0
    frsp f4, f4
    fsubs f3, f4, f3
    fdivs f6, f3, f0
    beq lbl_fn_801151A4_000002C8
    lfs f3, 0x4c(r3)
    lfs f4, lbl_808816A8
    lfs f0, lbl_808816DC
    fsubs f3, f3, f4
    fmadds f0, f0, f3, f4
    fmuls f6, f6, f0
lbl_fn_801151A4_000002C8:
    lfs f3, 0x200(r31)
    lis r3, lbl_807366C0@ha
    lfs f0, 0x260(r31)
    fmuls f3, f5, f3
    lfd f2, lbl_807366C0@l(r3)
    fmuls f6, f6, f3
    fadds f1, f0, f6
    stfs f1, 0x260(r31)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808816E0
    fcmpo cr0, f4, f0
    ble lbl_fn_801151A4_00000304
    lfs f0, lbl_808816E4
    fsubs f4, f4, f0
lbl_fn_801151A4_00000304:
    lfs f0, lbl_808816E8
    fcmpo cr0, f4, f0
    bge lbl_fn_801151A4_00000318
    lfs f0, lbl_808816E4
    fadds f4, f4, f0
lbl_fn_801151A4_00000318:
    frsp f3, f4
    stfs f4, 0x260(r31)
    lfs f0, 0x26c(r31)
    fabs f4, f3
    frsp f4, f4
    fcmpo cr0, f4, f0
    ble lbl_fn_801151A4_00000358
    lfs f0, lbl_808816B0
    fcmpo cr0, f3, f0
    ble lbl_fn_801151A4_00000348
    lfs f3, lbl_808816A8
    b lbl_fn_801151A4_0000034C
lbl_fn_801151A4_00000348:
    lfs f3, lbl_808816AC
lbl_fn_801151A4_0000034C:
    lfs f0, 0x26c(r31)
    fmuls f0, f0, f3
    stfs f0, 0x260(r31)
lbl_fn_801151A4_00000358:
    lfs f2, 0x27c(r31)
    addi r30, r1, 0x60
    psq_l f1, 0x274(r31), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    lfs f0, lbl_808816B0
    stfs f2, 0x68(r1)
    stfs f0, 0x64(r1)
    bl fn_805F98D0
    lfs f3, lbl_808816B0
    mr r4, r30
    lfs f0, lbl_808816A8
    addi r3, r1, 0x54
    stfs f3, 0x54(r1)
    addi r5, r1, 0x48
    stfs f0, 0x58(r1)
    stfs f3, 0x5c(r1)
    bl fn_805F99B0
    lwz r5, lbl_8087F540
    lis r4, 0xb60b
    lis r0, 0x4330
    lis r3, lbl_807366B0@ha
    lwz r5, 0x1eac(r5)
    addi r4, r4, 0x60b7
    stw r0, 0xa0(r1)
    mulhw r0, r4, r5
    lfd f5, lbl_807366B0@l(r3)
    lfs f3, lbl_808816C4
    lfs f0, lbl_808816EC
    add r0, r0, r5
    srawi r0, r0, 8
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x168
    subf r3, r0, r5
    subi r0, r3, 0xb4
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f4, 0xa0(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fmuls f1, f0, f3
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, lbl_808816F0
    lfs f0, 0x25c(r31)
    addi r3, r1, 0x38
    addi r4, r1, 0x48
    fmadds f1, f3, f4, f0
    bl fn_805F9AB0
    lfs f1, 0x260(r31)
    addi r3, r1, 0x28
    addi r4, r1, 0x54
    bl fn_805F9AB0
    addi r3, r1, 0x28
    addi r4, r1, 0x38
    addi r5, r1, 0x18
    bl fn_805F99F0
    addi r3, r1, 0x70
    addi r4, r1, 0x18
    bl fn_805F9190
    lis r4, lbl_807C7030@ha
    addi r30, r1, 0x8
    addi r3, r4, lbl_807C7030@l
    lfs f4, lbl_807C7030@l(r4)
    lfs f3, 0x4(r3)
    mr r4, r30
    lfs f0, 0x8(r3)
    mr r5, r30
    stfs f4, 0x7c(r1)
    addi r3, r1, 0x70
    stfs f3, 0x8c(r1)
    stfs f0, 0x9c(r1)
    psq_l f1, 0x274(r31), 0, 0
    lfs f2, 0x27c(r31)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F93C0
    mr r3, r30
    mr r4, r30
    bl fn_805F98D0
    lfs f4, 0x8(r1)
    lfs f6, lbl_808816F4
    lfs f3, 0xc(r1)
    fmuls f5, f4, f6
    lfs f0, 0x10(r1)
    fmuls f4, f3, f6
    fmuls f3, f0, f6
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    lfs f0, 0x204(r31)
    fadds f0, f5, f0
    stfs f0, 0x8(r1)
    lfs f0, 0x208(r31)
    fadds f0, f4, f0
    stfs f0, 0xc(r1)
    lfs f0, 0x20c(r31)
    psq_l f1, 0x0(r30), 0, 0
    fadds f2, f3, f0
    stfs f2, 0x10(r1)
    psq_st f1, 0x228(r31), 0, 0
    stfs f2, 0x230(r31)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_801156BC(void)
{
    nofralloc
    lwz r3, lbl_8087EF70
    blr
}

asm void fn_801156C4(void)
{
    nofralloc
    lwz r3, lbl_8087F9C0
    blr
}

asm void fn_801156CC(void)
{
    nofralloc
    lwz r0, 0x10(r3)
    extrwi r3, r0, 1, 29
    blr
}

asm void fn_801156D8(void)
{
    nofralloc
    addi r3, r3, 0x40
    blr
}

asm void fn_801156E0(void)
{
    nofralloc
    lfs f1, 0xc(r3)
    lfs f2, lbl_808816A8
    lfs f0, lbl_808816DC
    fsubs f1, f1, f2
    fmadds f1, f0, f1, f2
    blr
}

asm void fn_801156F8(void)
{
    nofralloc
    lwz r0, 0x10(r3)
    extrwi r3, r0, 1, 28
    blr
}

asm void fn_80115704(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r6, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8087EF70
    bl fn_800A56A8
    fneg f2, f1
    lfs f0, lbl_808816D4
    fabs f1, f2
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80115704_000005EC
    lfs f0, lbl_808816B0
    fcmpo cr0, f2, f0
    ble lbl_fn_80115704_000005B4
    lfs f4, lbl_808816A8
    b lbl_fn_80115704_000005B8
lbl_fn_80115704_000005B4:
    lfs f4, lbl_808816AC
lbl_fn_80115704_000005B8:
    fabs f0, f2
    lfs f3, lbl_808816D4
    lfs f2, lbl_808816D8
    lfs f1, 0x298(r31)
    frsp f5, f0
    lfs f0, 0x294(r31)
    fsubs f3, f5, f3
    fdivs f3, f3, f2
    fmuls f2, f3, f4
    fmuls f1, f1, f2
    fmuls f3, f3, f1
    fadds f0, f0, f3
    stfs f0, 0x294(r31)
lbl_fn_80115704_000005EC:
    lfs f0, 0x294(r31)
    lfs f1, lbl_808816A8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80115704_00000604
    b lbl_fn_80115704_00000608
lbl_fn_80115704_00000604:
    fmr f1, f0
lbl_fn_80115704_00000608:
    lfs f0, lbl_808816B0
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80115704_0000061C
    b lbl_fn_80115704_00000620
lbl_fn_80115704_0000061C:
    fmr f0, f1
lbl_fn_80115704_00000620:
    stfs f0, 0x294(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801157DC(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    lfs f5, lbl_808816B0
    stw r0, 0x224(r1)
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    mr r31, r3
    lwz r7, lbl_8087F540
    lfs f0, 0xb4(r7)
    fcmpo cr0, f0, f5
    cror eq, lt, eq
    beq lbl_fn_801157DC_000010C8
    lwz r6, 0x1f8(r3)
    srwi. r0, r6, 31
    beq lbl_fn_801157DC_000007C0
    extrwi r0, r6, 1, 2
    cmplwi r0, 0x1
    bne lbl_fn_801157DC_0000076C
    lfs f2, 0x1c(r3)
    addi r4, r1, 0xb0
    stfs f2, 0xb8(r1)
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0xbc
    psq_l f1, 0x228(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x230(r3)
    addi r3, r1, 0xc8
    lfs f0, 0xb8(r1)
    lfs f5, 0xc0(r1)
    fsubs f6, f2, f0
    lfs f4, 0xb4(r1)
    lfs f3, 0xbc(r1)
    lfs f0, 0xb0(r1)
    fsubs f4, f5, f4
    stfs f2, 0xc4(r1)
    fsubs f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xc8(r1)
    stfs f6, 0xd0(r1)
    bl fn_805F9940
    fmr f29, f1
    addi r3, r1, 0xc8
    mr r4, r3
    bl fn_805F98D0
    lfs f0, 0x3b0(r31)
    addi r3, r1, 0xd4
    lfs f7, 0xc8(r1)
    fmuls f8, f29, f0
    lfs f6, 0xcc(r1)
    lfs f0, 0xd0(r1)
    lfs f3, 0xb4(r1)
    fmuls f6, f6, f8
    lfs f4, 0xb8(r1)
    fmuls f5, f0, f8
    lfs f0, 0xb0(r1)
    fmuls f7, f7, f8
    stfs f6, 0xcc(r1)
    fadds f3, f3, f6
    stfs f5, 0xd0(r1)
    fadds f0, f0, f7
    fadds f2, f4, f5
    stfs f7, 0xc8(r1)
    stfs f0, 0xd4(r1)
    stfs f3, 0xd8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    b lbl_fn_801157DC_0000077C
lbl_fn_801157DC_0000076C:
    psq_l f1, 0x228(r3), 0, 0
    lfs f2, 0x230(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
lbl_fn_801157DC_0000077C:
    lha r3, 0x282(r31)
    lis r0, 0x4330
    lis r4, lbl_807366B0@ha
    psq_l f1, 0x204(r31), 0, 0
    xoris r3, r3, 0x8000
    stw r3, 0x1cc(r1)
    lfs f2, 0x20c(r31)
    stw r0, 0x1c8(r1)
    lfd f3, lbl_807366B0@l(r4)
    lfd f0, 0x1c8(r1)
    lfs f4, 0x258(r31)
    fsubs f0, f0, f3
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
    stfs f4, 0x264(r31)
    stfs f0, 0x288(r31)
    b lbl_fn_801157DC_000010C8
lbl_fn_801157DC_000007C0:
    lha r5, 0x282(r3)
    lis r0, 0x4330
    stw r0, 0x1c8(r1)
    lis r4, lbl_807366B0@ha
    xoris r0, r5, 0x8000
    lfd f4, lbl_807366B0@l(r4)
    stw r0, 0x1cc(r1)
    lfs f0, 0x288(r3)
    lfd f3, 0x1c8(r1)
    fsubs f30, f3, f4
    fsubs f29, f30, f0
    fcmpo cr0, f29, f5
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000900
    extrwi r0, r6, 1, 2
    cmplwi r0, 0x1
    bne lbl_fn_801157DC_000008D4
    lfs f2, 0x1c(r3)
    addi r4, r1, 0x80
    stfs f2, 0x88(r1)
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x8c
    psq_l f1, 0x228(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x230(r3)
    addi r3, r1, 0x98
    lfs f0, 0x88(r1)
    lfs f5, 0x90(r1)
    fsubs f6, f2, f0
    lfs f4, 0x84(r1)
    lfs f3, 0x8c(r1)
    lfs f0, 0x80(r1)
    fsubs f4, f5, f4
    stfs f2, 0x94(r1)
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    stfs f6, 0xa0(r1)
    bl fn_805F9940
    fmr f29, f1
    addi r3, r1, 0x98
    mr r4, r3
    bl fn_805F98D0
    lfs f0, 0x3b0(r31)
    addi r3, r1, 0xa4
    lfs f7, 0x98(r1)
    fmuls f8, f29, f0
    lfs f6, 0x9c(r1)
    lfs f0, 0xa0(r1)
    lfs f3, 0x84(r1)
    fmuls f6, f6, f8
    lfs f4, 0x88(r1)
    fmuls f5, f0, f8
    lfs f0, 0x80(r1)
    fmuls f7, f7, f8
    stfs f6, 0x9c(r1)
    fadds f3, f3, f6
    stfs f5, 0xa0(r1)
    fadds f0, f0, f7
    fadds f2, f4, f5
    stfs f7, 0x98(r1)
    stfs f0, 0xa4(r1)
    stfs f3, 0xa8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xac(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    b lbl_fn_801157DC_000008E4
lbl_fn_801157DC_000008D4:
    psq_l f1, 0x228(r3), 0, 0
    lfs f2, 0x230(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
lbl_fn_801157DC_000008E4:
    psq_l f1, 0x204(r31), 0, 0
    lfs f2, 0x20c(r31)
    lfs f0, 0x258(r31)
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
    stfs f0, 0x264(r31)
    b lbl_fn_801157DC_00001034
lbl_fn_801157DC_00000900:
    fdivs f3, f29, f30
    lfs f0, lbl_808816A8
    lwz r4, 0x28c(r31)
    mr r3, r7
    fsubs f1, f0, f3
    bl fn_8048BD04
    fdivs f3, f29, f30
    lfs f0, lbl_808816A8
    lwz r3, lbl_8087F540
    lwz r4, 0x290(r31)
    fsubs f0, f0, f3
    fnmsubs f29, f1, f30, f30
    fmr f1, f0
    bl fn_8048BCA4
    lwz r3, lbl_8087F540
    fnmsubs f4, f1, f30, f30
    lfs f0, lbl_808816A8
    lfs f3, 0xb4(r3)
    fdivs f29, f29, f3
    fdivs f4, f4, f3
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000960
    lfs f29, lbl_808816B0
lbl_fn_801157DC_00000960:
    lfs f0, lbl_808816A8
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    lfs f0, lbl_808816B0
    addi r3, r1, 0x188
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000994
    psq_l f1, 0x228(r31), 0, 0
    lfs f2, 0x230(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x190(r1)
    b lbl_fn_801157DC_000009FC
lbl_fn_801157DC_00000994:
    lfs f0, lbl_808816A8
    lfs f7, 0x230(r31)
    fdivs f8, f0, f29
    lfs f6, 0x1c(r31)
    lfs f5, 0x22c(r31)
    lfs f4, 0x18(r31)
    lfs f3, 0x228(r31)
    lfs f0, 0x14(r31)
    fsubs f7, f7, f6
    fsubs f11, f5, f4
    fsubs f3, f3, f0
    stfs f7, 0x7c(r1)
    fmuls f10, f7, f8
    fmuls f9, f11, f8
    stfs f3, 0x74(r1)
    fmuls f7, f3, f8
    fadds f5, f6, f10
    stfs f11, 0x78(r1)
    fadds f3, f4, f9
    fadds f0, f0, f7
    stfs f7, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f10, 0x70(r1)
    stfs f0, 0x188(r1)
    stfs f3, 0x18c(r1)
    stfs f5, 0x190(r1)
lbl_fn_801157DC_000009FC:
    lwz r0, 0x1f8(r31)
    addi r4, r1, 0x188
    extrwi r0, r0, 1, 2
    cmplwi r0, 0x1
    bne lbl_fn_801157DC_00000AE0
    lfs f2, 0x1c(r31)
    addi r3, r1, 0x38
    stfs f2, 0x40(r1)
    addi r5, r1, 0x44
    psq_l f1, 0x14(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x190(r1)
    lfs f0, 0x40(r1)
    lfs f5, 0x48(r1)
    fsubs f6, f2, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x44(r1)
    lfs f0, 0x38(r1)
    fsubs f4, f5, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
    lfs f0, 0x3b0(r31)
    addi r3, r1, 0x5c
    lfs f7, 0x50(r1)
    fmuls f8, f30, f0
    lfs f6, 0x54(r1)
    lfs f0, 0x58(r1)
    lfs f3, 0x3c(r1)
    fmuls f6, f6, f8
    lfs f4, 0x40(r1)
    fmuls f5, f0, f8
    lfs f0, 0x38(r1)
    fmuls f7, f7, f8
    stfs f6, 0x54(r1)
    fadds f3, f3, f6
    stfs f5, 0x58(r1)
    fadds f0, f0, f7
    fadds f2, f4, f5
    stfs f7, 0x50(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    b lbl_fn_801157DC_00000AF0
lbl_fn_801157DC_00000AE0:
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x190(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
lbl_fn_801157DC_00000AF0:
    lha r0, 0x280(r31)
    cmpwi r0, 0x3
    bne lbl_fn_801157DC_00000C90
    lfs f3, 0x10(r31)
    lfs f0, 0x1c(r31)
    lfs f4, 0x8(r31)
    fsubs f5, f3, f0
    lfs f0, 0x14(r31)
    fsubs f3, f4, f0
    fmuls f0, f5, f5
    fmadds f1, f3, f3, f0
    bl fn_8068B100
    lfs f3, 0x20c(r31)
    frsp f30, f1
    lfs f0, 0x230(r31)
    lfs f4, 0x204(r31)
    fsubs f5, f3, f0
    lfs f0, 0x228(r31)
    fsubs f3, f4, f0
    fmuls f0, f5, f5
    fmadds f1, f3, f3, f0
    bl fn_8068B100
    lfs f0, lbl_808816B0
    frsp f31, f1
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000B60
    b lbl_fn_801157DC_00000B6C
lbl_fn_801157DC_00000B60:
    fsubs f0, f31, f30
    fdivs f0, f0, f29
    fadds f31, f30, f0
lbl_fn_801157DC_00000B6C:
    lfs f5, 0x10(r31)
    addi r3, r1, 0x170
    lfs f0, 0x1c(r31)
    mr r4, r3
    lfs f4, 0x8(r31)
    lfs f3, 0x14(r31)
    fsubs f5, f5, f0
    lfs f0, lbl_808816B0
    fsubs f3, f4, f3
    stfs f5, 0x178(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    bl fn_805F98D0
    lfs f5, 0x20c(r31)
    addi r3, r1, 0x164
    lfs f0, 0x230(r31)
    mr r4, r3
    lfs f4, 0x204(r31)
    lfs f3, 0x228(r31)
    fsubs f5, f5, f0
    lfs f0, lbl_808816B0
    fsubs f3, f4, f3
    stfs f5, 0x16c(r1)
    stfs f3, 0x164(r1)
    stfs f0, 0x168(r1)
    bl fn_805F98D0
    lfs f2, 0x170(r1)
    lfs f1, 0x178(r1)
    bl fn_8068AEA4
    frsp f30, f1
    lfs f2, 0x164(r1)
    lfs f1, 0x16c(r1)
    bl fn_8068AEA4
    lfs f0, lbl_808816B0
    frsp f28, f1
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000C08
    b lbl_fn_801157DC_00000C14
lbl_fn_801157DC_00000C08:
    fsubs f0, f28, f30
    fdivs f0, f0, f29
    fadds f28, f30, f0
lbl_fn_801157DC_00000C14:
    lfs f0, lbl_808816B0
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000C2C
    lfs f30, 0x208(r31)
    b lbl_fn_801157DC_00000C40
lbl_fn_801157DC_00000C2C:
    lfs f0, 0x208(r31)
    lfs f3, 0xc(r31)
    fsubs f0, f0, f3
    fdivs f0, f0, f29
    fadds f30, f3, f0
lbl_fn_801157DC_00000C40:
    fmr f1, f28
    bl fn_8068A850
    frsp f3, f1
    lfs f0, lbl_808816B0
    fmr f1, f28
    stfs f0, 0x180(r1)
    stfs f3, 0x17c(r1)
    bl fn_8068AD58
    frsp f4, f1
    lfs f0, 0x17c(r1)
    lfs f3, 0x188(r1)
    fmuls f5, f0, f31
    lfs f0, 0x190(r1)
    fmuls f4, f4, f31
    stfs f30, 0x180(r1)
    fadds f3, f5, f3
    fadds f0, f4, f0
    stfs f3, 0x17c(r1)
    stfs f0, 0x184(r1)
    b lbl_fn_801157DC_00000FDC
lbl_fn_801157DC_00000C90:
    cmpwi r0, 0x2
    bne lbl_fn_801157DC_00000F38
    lfs f3, 0x10(r31)
    lfs f0, 0x1c(r31)
    lfs f4, 0x8(r31)
    fsubs f5, f3, f0
    lfs f0, 0x14(r31)
    fsubs f3, f4, f0
    fmuls f0, f5, f5
    fmadds f1, f3, f3, f0
    bl fn_8068B100
    lfs f3, 0x20c(r31)
    frsp f31, f1
    lfs f0, 0x230(r31)
    lfs f4, 0x204(r31)
    fsubs f5, f3, f0
    lfs f0, 0x228(r31)
    fsubs f3, f4, f0
    fmuls f0, f5, f5
    fmadds f1, f3, f3, f0
    bl fn_8068B100
    lfs f0, lbl_808816B0
    frsp f30, f1
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000CFC
    b lbl_fn_801157DC_00000D08
lbl_fn_801157DC_00000CFC:
    fsubs f0, f30, f31
    fdivs f0, f0, f29
    fadds f30, f31, f0
lbl_fn_801157DC_00000D08:
    lfs f0, lbl_808816B0
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000D20
    lfs f31, 0x208(r31)
    b lbl_fn_801157DC_00000D34
lbl_fn_801157DC_00000D20:
    lfs f0, 0x208(r31)
    lfs f3, 0xc(r31)
    fsubs f0, f0, f3
    fdivs f0, f0, f29
    fadds f31, f3, f0
lbl_fn_801157DC_00000D34:
    lfs f3, 0x10(r31)
    addi r3, r1, 0x128
    lfs f0, 0x1c(r31)
    addi r5, r1, 0x11c
    lfs f5, 0xc(r31)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x18(r31)
    lfs f3, 0x8(r31)
    lfs f0, 0x14(r31)
    fsubs f4, f5, f4
    stfs f2, 0x124(r1)
    fsubs f0, f3, f0
    stfs f4, 0x120(r1)
    stfs f0, 0x11c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x130(r1)
    bl fn_805F98D0
    lfs f3, 0x20c(r31)
    addi r3, r1, 0x104
    lfs f0, 0x230(r31)
    addi r5, r1, 0xf8
    lfs f5, 0x208(r31)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x22c(r31)
    lfs f3, 0x204(r31)
    lfs f0, 0x228(r31)
    fsubs f4, f5, f4
    stfs f2, 0x100(r1)
    fsubs f0, f3, f0
    stfs f4, 0xfc(r1)
    stfs f0, 0xf8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F98D0
    lfs f0, lbl_808816B0
    addi r3, r1, 0x110
    lfs f5, 0x230(r31)
    addi r4, r1, 0x140
    lfs f4, 0x10c(r1)
    fcmpo cr0, f29, f0
    lfs f3, 0x22c(r31)
    fadds f2, f5, f4
    lfs f0, 0x108(r1)
    lfs f5, 0x228(r31)
    fadds f7, f3, f0
    lfs f4, 0x104(r1)
    lfs f3, 0x1c(r31)
    fadds f8, f5, f4
    lfs f0, 0x130(r1)
    lfs f5, 0x18(r31)
    fadds f6, f3, f0
    lfs f4, 0x12c(r1)
    lfs f3, 0x14(r31)
    lfs f0, 0x128(r1)
    fadds f4, f5, f4
    stfs f8, 0x110(r1)
    fadds f3, f3, f0
    stfs f7, 0x114(r1)
    stfs f2, 0x118(r1)
    stfs f3, 0x134(r1)
    stfs f4, 0x138(r1)
    stfs f6, 0x13c(r1)
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000E54
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x148(r1)
    b lbl_fn_801157DC_00000EA4
lbl_fn_801157DC_00000E54:
    lfs f0, lbl_808816A8
    fsubs f9, f2, f6
    fsubs f7, f7, f4
    fdivs f0, f0, f29
    stfs f9, 0x34(r1)
    stfs f7, 0x30(r1)
    fsubs f5, f8, f3
    fmuls f8, f7, f0
    fmuls f9, f9, f0
    stfs f5, 0x2c(r1)
    fmuls f7, f5, f0
    fadds f4, f4, f8
    stfs f8, 0x24(r1)
    fadds f5, f6, f9
    fadds f0, f3, f7
    stfs f7, 0x20(r1)
    stfs f9, 0x28(r1)
    stfs f0, 0x140(r1)
    stfs f4, 0x144(r1)
    stfs f5, 0x148(r1)
lbl_fn_801157DC_00000EA4:
    addi r3, r1, 0x17c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0xec
    lfs f2, 0x8(r4)
    mr r4, r3
    lfs f3, 0x180(r1)
    lfs f0, 0x18c(r1)
    lfs f4, 0x190(r1)
    fsubs f5, f3, f0
    lfs f3, 0x17c(r1)
    lfs f0, 0x188(r1)
    fsubs f4, f2, f4
    stfs f2, 0x184(r1)
    fsubs f3, f3, f0
    stfs f5, 0xf0(r1)
    fmr f2, f4
    lfs f0, lbl_808816B0
    stfs f3, 0xec(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f4, 0xf4(r1)
    stfs f2, 0x184(r1)
    stfs f0, 0x180(r1)
    bl fn_805F98D0
    lfs f3, 0x17c(r1)
    lfs f0, 0x184(r1)
    fmuls f5, f3, f30
    lfs f3, 0x188(r1)
    fmuls f4, f0, f30
    lfs f0, 0x190(r1)
    stfs f31, 0x180(r1)
    fadds f3, f5, f3
    fadds f0, f4, f0
    stfs f3, 0x17c(r1)
    stfs f0, 0x184(r1)
    b lbl_fn_801157DC_00000FDC
lbl_fn_801157DC_00000F38:
    lfs f0, lbl_808816B0
    addi r3, r1, 0xe0
    fcmpo cr0, f29, f0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00000F60
    psq_l f1, 0x204(r31), 0, 0
    lfs f2, 0x20c(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe8(r1)
    b lbl_fn_801157DC_00000FC8
lbl_fn_801157DC_00000F60:
    lfs f0, lbl_808816A8
    lfs f7, 0x20c(r31)
    fdivs f8, f0, f29
    lfs f6, 0x10(r31)
    lfs f5, 0x208(r31)
    lfs f4, 0xc(r31)
    lfs f3, 0x204(r31)
    lfs f0, 0x8(r31)
    fsubs f7, f7, f6
    fsubs f11, f5, f4
    fsubs f3, f3, f0
    stfs f7, 0x1c(r1)
    fmuls f10, f7, f8
    fmuls f9, f11, f8
    stfs f3, 0x14(r1)
    fmuls f7, f3, f8
    fadds f5, f6, f10
    stfs f11, 0x18(r1)
    fadds f3, f4, f9
    fadds f0, f0, f7
    stfs f7, 0x8(r1)
    stfs f9, 0xc(r1)
    stfs f10, 0x10(r1)
    stfs f0, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f5, 0xe8(r1)
lbl_fn_801157DC_00000FC8:
    lfs f2, 0x8(r3)
    addi r4, r1, 0x17c
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x184(r1)
lbl_fn_801157DC_00000FDC:
    lfs f0, lbl_808816B0
    addi r3, r1, 0x17c
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x184(r1)
    fcmpo cr0, f29, f0
    stfs f2, 0x10(r31)
    psq_st f1, 0x8(r31), 0, 0
    cror eq, lt, eq
    bne lbl_fn_801157DC_00001008
    lfs f0, 0x258(r31)
    b lbl_fn_801157DC_0000101C
lbl_fn_801157DC_00001008:
    lfs f0, 0x258(r31)
    lfs f3, 0x264(r31)
    fsubs f0, f0, f3
    fdivs f0, f0, f29
    fadds f0, f3, f0
lbl_fn_801157DC_0000101C:
    stfs f0, 0x264(r31)
    lfs f0, 0x288(r31)
    lwz r3, lbl_8087F540
    lfs f3, 0xb4(r3)
    fadds f0, f0, f3
    stfs f0, 0x288(r31)
lbl_fn_801157DC_00001034:
    lfs f3, lbl_808816B0
    addi r3, r1, 0x14c
    lfs f0, lbl_808816A8
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f3, 0x160(r1)
    lfs f3, 0x1c(r31)
    lfs f0, 0x10(r31)
    lfs f5, 0x18(r31)
    fsubs f6, f3, f0
    lfs f4, 0xc(r31)
    lfs f3, 0x14(r31)
    lfs f0, 0x8(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x150(r1)
    stfs f0, 0x14c(r1)
    stfs f6, 0x154(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808816F8
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_801157DC_000010B4
    lfs f1, 0x264(r31)
    addi r3, r1, 0x198
    addi r4, r1, 0x14c
    bl fn_805F9050
    addi r4, r1, 0x158
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
lbl_fn_801157DC_000010B4:
    addi r3, r1, 0x158
    lfs f2, 0x160(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x20(r31), 0, 0
    stfs f2, 0x28(r31)
lbl_fn_801157DC_000010C8:
    lwz r0, 0x224(r1)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_801162A0(void)
{
    nofralloc
    b fn_805F9920
}

asm void fn_801162A4(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    li r31, 0x0
    stw r30, 0x138(r1)
    mr r30, r4
    stw r29, 0x134(r1)
    mr r29, r3
    bl fn_8000DB1C
    bl fn_80112F54
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_00001164
    bl fn_8000DB1C
    bl fn_80112F54
    bl fn_80116B98
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_00001164
    li r31, 0x1
lbl_fn_801162A4_00001164:
    lwz r0, 0x1f4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801162A4_000019C0
    cmpwi r0, 0x1
    beq lbl_fn_801162A4_000011A8
    cmpwi r0, 0x3
    beq lbl_fn_801162A4_000011FC
    cmpwi r0, 0x2
    beq lbl_fn_801162A4_00001224
    cmpwi r0, 0x6
    beq lbl_fn_801162A4_00001240
    cmpwi r0, 0x5
    beq lbl_fn_801162A4_00001274
    cmpwi r0, 0x4
    beq lbl_fn_801162A4_00001280
    b lbl_fn_801162A4_000012D0
    b lbl_fn_801162A4_000019C0
lbl_fn_801162A4_000011A8:
    bl fn_8000DB1C
    lwz r4, 0x290(r29)
    lfs f1, 0x294(r29)
    bl fn_8048BCA4
    fmr f29, f1
    addi r3, r1, 0xa0
    addi r4, r29, 0x210
    bl fn_80112A00
    addi r3, r29, 0x204
    addi r4, r1, 0xa0
    bl fn_8000D124
    fmr f1, f29
    addi r3, r1, 0x94
    addi r4, r29, 0x240
    bl fn_80112A00
    addi r3, r29, 0x228
    addi r4, r1, 0x94
    bl fn_8000D124
    mr r3, r29
    bl fn_801157DC
    b lbl_fn_801162A4_000012D0
lbl_fn_801162A4_000011FC:
    lfs f1, lbl_808816B0
    addi r3, r1, 0x88
    addi r4, r29, 0x240
    bl fn_80112A00
    addi r3, r29, 0x228
    addi r4, r1, 0x88
    bl fn_8000D124
    mr r3, r29
    bl fn_801157DC
    b lbl_fn_801162A4_000012D0
lbl_fn_801162A4_00001224:
    addi r3, r29, 0x274
    bl fn_801162A0
    lfs f0, lbl_808816B0
    fcmpu cr0, f0, f1
    bne lbl_fn_801162A4_00001240
    lfs f0, lbl_808816A8
    stfs f0, 0x27c(r29)
lbl_fn_801162A4_00001240:
    lfs f1, lbl_808816B0
    addi r3, r1, 0x7c
    addi r4, r29, 0x210
    bl fn_80112A00
    addi r3, r29, 0x204
    addi r4, r1, 0x7c
    bl fn_8000D124
    mr r3, r29
    bl fn_801151A4
    mr r3, r29
    bl fn_801157DC
    li r31, 0x0
    b lbl_fn_801162A4_000012D0
lbl_fn_801162A4_00001274:
    mr r3, r29
    bl fn_80115704
    li r31, 0x0
lbl_fn_801162A4_00001280:
    bl fn_8000DB1C
    lwz r4, 0x290(r29)
    lfs f1, 0x294(r29)
    bl fn_8048BCA4
    fmr f29, f1
    addi r3, r1, 0x70
    addi r4, r29, 0x210
    bl fn_80112A00
    addi r3, r29, 0x204
    addi r4, r1, 0x70
    bl fn_8000D124
    fmr f1, f29
    addi r3, r1, 0x64
    addi r4, r29, 0x240
    bl fn_80112A00
    addi r3, r29, 0x228
    addi r4, r1, 0x64
    bl fn_8000D124
    mr r3, r29
    bl fn_801157DC
lbl_fn_801162A4_000012D0:
    mr r3, r29
    bl fn_80114AB4
    mr r3, r29
    bl fn_801146A4
    mr r3, r29
    bl fn_801144A8
    mr r3, r29
    bl fn_80112958
    mr r4, r3
    addi r3, r1, 0xf4
    bl fn_8001047C
    mr r3, r29
    bl fn_80116BA4
    fmr f31, f1
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    stfs f0, 0x14(r1)
    bl fn_801156BC
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_0000135C
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    bl fn_800A56A8
    fneg f1, f1
    lfs f0, 0x14(r1)
    fadds f0, f0, f1
    stfs f0, 0x14(r1)
lbl_fn_801162A4_0000135C:
    bl fn_801156C4
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_0000138C
    bl fn_801156C4
    bl fn_801156D8
    bl fn_801156F8
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_0000138C
    lfs f1, 0x14(r1)
    lfs f0, lbl_808816AC
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
lbl_fn_801162A4_0000138C:
    lfs f1, lbl_808816AC
    lfs f0, 0x14(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_801162A4_000013A0
    b lbl_fn_801162A4_000013A4
lbl_fn_801162A4_000013A0:
    fmr f1, f0
lbl_fn_801162A4_000013A4:
    lfs f2, lbl_808816A8
    fcmpo cr0, f2, f1
    bge lbl_fn_801162A4_000013B4
    b lbl_fn_801162A4_000013CC
lbl_fn_801162A4_000013B4:
    lfs f2, lbl_808816AC
    lfs f0, 0x14(r1)
    fcmpo cr0, f2, f0
    ble lbl_fn_801162A4_000013C8
    b lbl_fn_801162A4_000013CC
lbl_fn_801162A4_000013C8:
    fmr f2, f0
lbl_fn_801162A4_000013CC:
    frsp f1, f2
    stfs f2, 0x14(r1)
    bl fn_80011220
    lfs f0, lbl_808816D4
    fcmpo cr0, f1, f0
    ble lbl_fn_801162A4_00001440
    addi r3, r1, 0x14
    addi r5, r1, 0x18
    mr r4, r3
    bl fn_80112220
    lfs f2, 0x14(r1)
    lfs f1, lbl_808816D4
    lfs f0, lbl_808816D8
    fsubs f1, f2, f1
    fdivs f0, f1, f0
    stfs f0, 0x14(r1)
    bl fn_801156C4
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_00001430
    bl fn_801156C4
    bl fn_801156D8
    bl fn_801156E0
    lfs f0, 0x14(r1)
    fmuls f0, f0, f1
    stfs f0, 0x14(r1)
lbl_fn_801162A4_00001430:
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
lbl_fn_801162A4_00001440:
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    stfs f0, 0x10(r1)
    bl fn_801156BC
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_00001494
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl fn_800A56A8
    fneg f1, f1
    lfs f0, 0x10(r1)
    fadds f0, f0, f1
    stfs f0, 0x10(r1)
lbl_fn_801162A4_00001494:
    bl fn_801156C4
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_000014C4
    bl fn_801156C4
    bl fn_801156D8
    bl fn_801156CC
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_000014C4
    lfs f1, 0x10(r1)
    lfs f0, lbl_808816AC
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
lbl_fn_801162A4_000014C4:
    lfs f1, lbl_808816AC
    lfs f0, 0x10(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_801162A4_000014D8
    b lbl_fn_801162A4_000014DC
lbl_fn_801162A4_000014D8:
    fmr f1, f0
lbl_fn_801162A4_000014DC:
    lfs f2, lbl_808816A8
    fcmpo cr0, f2, f1
    bge lbl_fn_801162A4_000014EC
    b lbl_fn_801162A4_00001504
lbl_fn_801162A4_000014EC:
    lfs f2, lbl_808816AC
    lfs f0, 0x10(r1)
    fcmpo cr0, f2, f0
    ble lbl_fn_801162A4_00001500
    b lbl_fn_801162A4_00001504
lbl_fn_801162A4_00001500:
    fmr f2, f0
lbl_fn_801162A4_00001504:
    frsp f1, f2
    stfs f2, 0x10(r1)
    bl fn_80011220
    lfs f0, lbl_808816D4
    fcmpo cr0, f1, f0
    ble lbl_fn_801162A4_00001578
    addi r3, r1, 0x10
    addi r5, r1, 0x18
    mr r4, r3
    bl fn_80112220
    lfs f2, 0x10(r1)
    lfs f1, lbl_808816D4
    lfs f0, lbl_808816D8
    fsubs f1, f2, f1
    fdivs f0, f1, f0
    stfs f0, 0x10(r1)
    bl fn_801156C4
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_00001568
    bl fn_801156C4
    bl fn_801156D8
    bl fn_801156E0
    lfs f0, 0x10(r1)
    fmuls f0, f0, f1
    stfs f0, 0x10(r1)
lbl_fn_801162A4_00001568:
    lfs f1, 0x10(r1)
    lfs f0, 0x18(r1)
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
lbl_fn_801162A4_00001578:
    lfs f29, lbl_808816B0
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x7
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_00001598
    lfs f29, lbl_808816A8
lbl_fn_801162A4_00001598:
    lfs f0, 0x14(r1)
    cmpwi r31, 0x0
    lfs f5, 0x644(r29)
    lfs f4, lbl_808816FC
    fsubs f3, f0, f5
    lfs f1, 0x64c(r29)
    lfs f2, 0x648(r29)
    fsubs f0, f29, f1
    fmadds f3, f4, f3, f5
    stfs f3, 0x644(r29)
    fmadds f0, f4, f0, f1
    lfs f1, 0x10(r1)
    fsubs f1, f1, f2
    stfs f0, 0x64c(r29)
    fmadds f0, f4, f1, f2
    stfs f0, 0x648(r29)
    beq lbl_fn_801162A4_00001850
    addi r3, r1, 0x20
    bl fn_80116BB4
    lfs f1, lbl_80881704
    bl fn_801125F8
    fmr f30, f1
    lfs f1, lbl_80881700
    bl fn_801125F8
    fmr f29, f1
    mr r3, r29
    bl fn_80116BA4
    fsubs f1, f1, f29
    lfs f0, lbl_808816A8
    fdivs f1, f1, f30
    fcmpo cr0, f0, f1
    bge lbl_fn_801162A4_0000161C
    b lbl_fn_801162A4_00001644
lbl_fn_801162A4_0000161C:
    lfs f1, lbl_80881704
    bl fn_801125F8
    fmr f30, f1
    lfs f1, lbl_80881700
    bl fn_801125F8
    fmr f29, f1
    mr r3, r29
    bl fn_80116BA4
    fsubs f0, f1, f29
    fdivs f0, f0, f30
lbl_fn_801162A4_00001644:
    lfs f1, lbl_808816B0
    fcmpo cr0, f1, f0
    ble lbl_fn_801162A4_00001654
    b lbl_fn_801162A4_000016B4
lbl_fn_801162A4_00001654:
    lfs f1, lbl_80881704
    bl fn_801125F8
    fmr f30, f1
    lfs f1, lbl_80881700
    bl fn_801125F8
    fmr f29, f1
    mr r3, r29
    bl fn_80116BA4
    fsubs f0, f1, f29
    lfs f1, lbl_808816A8
    fdivs f0, f0, f30
    fcmpo cr0, f1, f0
    bge lbl_fn_801162A4_0000168C
    b lbl_fn_801162A4_000016B4
lbl_fn_801162A4_0000168C:
    lfs f1, lbl_80881704
    bl fn_801125F8
    fmr f29, f1
    lfs f1, lbl_80881700
    bl fn_801125F8
    fmr f30, f1
    mr r3, r29
    bl fn_80116BA4
    fsubs f0, f1, f30
    fdivs f1, f0, f29
lbl_fn_801162A4_000016B4:
    la r3, lbl_8087D980
    la r4, lbl_8087D984
    bl fn_800F8524
    fmr f30, f1
    lfs f1, lbl_80881708
    bl fn_801125F8
    lfs f0, 0x648(r29)
    fmuls f0, f0, f1
    lfs f1, lbl_80881708
    fmuls f0, f30, f0
    stfs f0, 0x20(r1)
    bl fn_801125F8
    lfs f0, 0x644(r29)
    mr r3, r29
    fmuls f0, f0, f1
    fmuls f0, f30, f0
    stfs f0, 0x24(r1)
    bl fn_80113CCC
    mr r4, r3
    addi r3, r1, 0xe8
    bl fn_8001047C
    mr r3, r29
    bl fn_80112958
    mr r4, r3
    addi r3, r1, 0xdc
    bl fn_8001047C
    addi r3, r1, 0xd0
    addi r4, r1, 0xdc
    addi r5, r1, 0xe8
    bl fn_80013338
    addi r3, r1, 0xd0
    bl fn_8000D3A4
    fmr f29, f1
    addi r3, r1, 0xc4
    addi r4, r1, 0xd0
    bl fn_80011034
    lfs f1, 0xc4(r1)
    lfs f0, 0x20(r1)
    fadds f1, f1, f0
    bl fn_800133B0
    lfs f0, lbl_8088170C
    fcmpo cr0, f0, f1
    bge lbl_fn_801162A4_00001764
    b lbl_fn_801162A4_00001778
lbl_fn_801162A4_00001764:
    lfs f1, 0xc4(r1)
    lfs f0, 0x20(r1)
    fadds f1, f1, f0
    bl fn_800133B0
    fmr f0, f1
lbl_fn_801162A4_00001778:
    lfs f2, lbl_80881710
    fcmpo cr0, f2, f0
    ble lbl_fn_801162A4_00001788
    b lbl_fn_801162A4_000017BC
lbl_fn_801162A4_00001788:
    lfs f1, 0xc4(r1)
    lfs f0, 0x20(r1)
    fadds f1, f1, f0
    bl fn_800133B0
    lfs f2, lbl_8088170C
    fcmpo cr0, f2, f1
    bge lbl_fn_801162A4_000017A8
    b lbl_fn_801162A4_000017BC
lbl_fn_801162A4_000017A8:
    lfs f1, 0xc4(r1)
    lfs f0, 0x20(r1)
    fadds f1, f1, f0
    bl fn_800133B0
    fmr f2, f1
lbl_fn_801162A4_000017BC:
    lfs f1, 0xc8(r1)
    lfs f0, 0x24(r1)
    stfs f2, 0xc4(r1)
    fadds f1, f1, f0
    bl fn_800133B0
    stfs f1, 0xc8(r1)
    addi r3, r1, 0x100
    addi r4, r1, 0xc4
    bl fn_800109E0
    lfs f1, lbl_808816B0
    fmr f3, f29
    addi r3, r1, 0x40
    fmr f2, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x4c
    addi r5, r1, 0x100
    bl fn_8010F6FC
    addi r3, r1, 0x58
    addi r4, r1, 0xe8
    addi r5, r1, 0x4c
    bl fn_80013410
    addi r3, r1, 0xdc
    addi r4, r1, 0x58
    bl fn_8000D124
    mr r3, r29
    addi r4, r1, 0xdc
    bl fn_80112960
    mr r3, r29
    bl fn_80116BA4
    lfs f3, lbl_808816CC
    mr r3, r29
    lfs f2, 0x64c(r29)
    lfs f0, lbl_808816A8
    fnmsubs f0, f3, f2, f0
    fmuls f1, f1, f0
    bl fn_80116BB8
lbl_fn_801162A4_00001850:
    lfs f2, 0x638(r29)
    lfs f1, 0x63c(r29)
    fcmpo cr0, f2, f1
    bge lbl_fn_801162A4_00001924
    lfs f0, lbl_808816B0
    fcmpo cr0, f1, f0
    ble lbl_fn_801162A4_00001924
    lfs f29, lbl_808816A8
    fadds f0, f2, f29
    stfs f0, 0x638(r29)
    fdivs f0, f0, f1
    fcmpo cr0, f29, f0
    bge lbl_fn_801162A4_00001888
    b lbl_fn_801162A4_0000188C
lbl_fn_801162A4_00001888:
    fmr f29, f0
lbl_fn_801162A4_0000188C:
    mr r3, r29
    bl fn_80113CCC
    mr r31, r3
    addi r3, r29, 0x444
    bl fn_80113CCC
    fmr f1, f29
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x34
    bl fn_800F7260
    mr r3, r29
    addi r4, r1, 0x34
    bl fn_80114AA0
    mr r3, r29
    bl fn_80112958
    mr r31, r3
    addi r3, r29, 0x444
    bl fn_80112958
    fmr f1, f29
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x28
    bl fn_800F7260
    mr r3, r29
    addi r4, r1, 0x28
    bl fn_80112960
    mr r3, r29
    bl fn_80116BA4
    stfs f1, 0x8(r1)
    addi r3, r29, 0x444
    bl fn_80116BA4
    stfs f1, 0xc(r1)
    fmr f1, f29
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800F8524
    mr r3, r29
    bl fn_80116BB8
lbl_fn_801162A4_00001924:
    mr r3, r29
    bl fn_8004B378
    cmpwi r30, 0x0
    beq lbl_fn_801162A4_000019A8
    mr r3, r29
    bl fn_80116BC8
    cmpwi r3, 0x0
    bne lbl_fn_801162A4_000019A8
    bl fn_8008B964
    mr r4, r29
    bl fn_80116BD4
    bl fn_80116E64
    cmpwi r3, 0x0
    beq lbl_fn_801162A4_000019A8
    mr r3, r29
    bl fn_80116E6C
    mr r4, r3
    addi r3, r1, 0xb8
    bl fn_8001047C
    lfs f1, lbl_808816E0
    lfs f0, 0xbc(r1)
    fadds f1, f1, f0
    bl fn_800133B0
    stfs f1, 0xbc(r1)
    mr r3, r29
    bl fn_80113CCC
    mr r4, r3
    addi r3, r1, 0xac
    bl fn_8001047C
    bl fn_80116E64
    addi r4, r1, 0xac
    addi r5, r1, 0xb8
    bl fn_80116E74
lbl_fn_801162A4_000019A8:
    mr r3, r29
    addi r4, r1, 0xf4
    bl fn_80112960
    fmr f1, f31
    mr r3, r29
    bl fn_80116BB8
lbl_fn_801162A4_000019C0:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}
