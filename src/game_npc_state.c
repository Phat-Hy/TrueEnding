#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80044E0C(void);
extern void fn_8004ED34(void);
extern void fn_8010CA3C(void);
extern void fn_801279E8(void);
extern void fn_8012DB04(void);
extern void fn_8013CB68(void);
extern void fn_80140588(void);
extern void fn_80141674(void);
extern void fn_801426A4(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_80171F3C(void);
extern void fn_80179D44(void);
extern void fn_80370174(void);
extern void fn_805F99B0(void);

/* External data declarations */
extern u8 lbl_80737808[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881974;
extern u32 lbl_8088199C;
extern u32 lbl_808819A4;
extern u32 lbl_808819A8;
extern u32 lbl_808819C4;
extern u32 lbl_808819F8;
extern u32 lbl_80881A00;
extern u32 lbl_80881A04;
extern u32 lbl_80881A08;

/* Function declarations */
void fn_8013C38C(void);
void fn_8013C394(void);
void fn_8013C3A8(void);
void fn_8013C3B4(void);
void fn_8013C3DC(void);
void fn_8013C3E4(void);
void fn_8013C3F4(void);
void fn_8013C3FC(void);
void fn_8013C404(void);
void fn_8013C41C(void);
void fn_8013C424(void);
void fn_8013C42C(void);
void fn_8013C434(void);
void fn_8013C43C(void);
void fn_8013C444(void);
void fn_8013C458(void);
void fn_8013C460(void);
void fn_8013C470(void);
void fn_8013C478(void);
void fn_8013C480(void);
void fn_8013C504(void);
void fn_8013C50C(void);
void fn_8013C514(void);
void fn_8013C53C(void);
void fn_8013C544(void);
void fn_8013C554(void);
void fn_8013C564(void);

asm void fn_8013C38C(void)
{
    nofralloc
    addi r3, r3, 0x528
    blr
}

asm void fn_8013C394(void)
{
    nofralloc
    mr r0, r3
    mr r3, r4
    mr r4, r5
    mr r5, r0
    b fn_805F99B0
}

asm void fn_8013C3A8(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    srwi r3, r0, 31
    blr
}

asm void fn_8013C3B4(void)
{
    nofralloc
    lfs f2, 0x8(r4)
    lfs f1, 0x4(r4)
    lfs f0, 0x0(r4)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x8(r3)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    blr
}

asm void fn_8013C3DC(void)
{
    nofralloc
    lwz r3, 0x34c(r3)
    blr
}

asm void fn_8013C3E4(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    lfs f1, 0x24c(r3)
    blr
}

asm void fn_8013C3F4(void)
{
    nofralloc
    lwz r3, 0x2c(r3)
    blr
}

asm void fn_8013C3FC(void)
{
    nofralloc
    addi r3, r3, 0x70
    blr
}

asm void fn_8013C404(void)
{
    nofralloc
    lwz r0, 0x54c(r3)
    and r0, r4, r0
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8013C41C(void)
{
    nofralloc
    lwz r3, 0x418(r3)
    blr
}

asm void fn_8013C424(void)
{
    nofralloc
    lwz r3, 0x94(r3)
    blr
}

asm void fn_8013C42C(void)
{
    nofralloc
    lfs f1, 0x5b0(r3)
    blr
}

asm void fn_8013C434(void)
{
    nofralloc
    addi r3, r3, 0x454
    blr
}

asm void fn_8013C43C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8013C444(void)
{
    nofralloc
    lwz r0, 0x640(r3)
    li r3, 0x1
    cntlzw r0, r0
    rlwnm r3, r3, r0, 31, 31
    blr
}

asm void fn_8013C458(void)
{
    nofralloc
    lwz r3, 0x648(r3)
    blr
}

asm void fn_8013C460(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    rlwimi r0, r4, 5, 26, 26
    stw r0, 0x12a4(r3)
    blr
}

asm void fn_8013C470(void)
{
    nofralloc
    stw r4, 0xfc0(r3)
    blr
}

asm void fn_8013C478(void)
{
    nofralloc
    lwz r3, 0xfc0(r3)
    blr
}

asm void fn_8013C480(void)
{
    nofralloc
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8013C480_00000120
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8013C480_00000120
    li r6, 0x1
lbl_fn_8013C480_00000120:
    cmpwi r6, 0x0
    beq lbl_fn_8013C480_0000013C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8013C480_0000013C
    li r4, 0x1
lbl_fn_8013C480_0000013C:
    cmpwi r4, 0x0
    beq lbl_fn_8013C480_00000170
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8013C480_00000164
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_8013C480_00000164
    li r4, 0x1
lbl_fn_8013C480_00000164:
    cmpwi r4, 0x0
    bne lbl_fn_8013C480_00000170
    li r5, 0x1
lbl_fn_8013C480_00000170:
    mr r3, r5
    blr
}

asm void fn_8013C504(void)
{
    nofralloc
    lwz r3, 0x10d8(r3)
    blr
}

asm void fn_8013C50C(void)
{
    nofralloc
    lfs f1, 0x48(r3)
    blr
}

asm void fn_8013C514(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8013C514_000001A8
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8013C514_000001A8
    li r4, 0x1
lbl_fn_8013C514_000001A8:
    mr r3, r4
    blr
}

asm void fn_8013C53C(void)
{
    nofralloc
    addi r3, r3, 0x10
    blr
}

asm void fn_8013C544(void)
{
    nofralloc
    lfs f1, 0x5c(r3)
    lfs f0, 0x28(r3)
    fmuls f1, f1, f0
    blr
}

asm void fn_8013C554(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    stfs f1, 0x24c(r3)
    blr
}

asm void fn_8013C564(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    lis r0, 0x4330
    addi r6, r1, 0x2c
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    fmr f31, f2
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    fmr f30, f1
    stw r31, 0xac(r1)
    mr r31, r5
    stw r30, 0xa8(r1)
    mr r30, r4
    stw r29, 0xa4(r1)
    mr r29, r3
    stw r28, 0xa0(r1)
    lwz r7, lbl_8087F048
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    cmpwi r7, 0x0
    lfs f2, 0x530(r3)
    addi r6, r1, 0x20
    psq_l f1, 0x534(r3), 0, 0
    stfs f2, 0x34(r1)
    lfs f2, 0x53c(r3)
    stw r0, 0x88(r1)
    stw r0, 0x90(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    beq lbl_fn_8013C564_00000278
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8013C564_00000278
    fmr f1, f31
    mr r3, r7
    mr r4, r29
    bl fn_8010CA3C
    fmr f31, f1
lbl_fn_8013C564_00000278:
    lwz r0, 0x7e0(r29)
    lfs f0, 0x568(r29)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    fmuls f31, f31, f0
    bne lbl_fn_8013C564_00000308
    lwz r0, 0xf98(r29)
    lis r4, lbl_80737808@ha
    lwz r3, 0xf94(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    xoris r3, r3, 0x8000
    lfd f5, lbl_80737808@l(r4)
    stw r3, 0x8c(r1)
    lfd f0, 0x90(r1)
    lfd f3, 0x88(r1)
    fsubs f0, f0, f5
    lfs f4, lbl_80881964
    fsubs f3, f3, f5
    lfs f6, lbl_80881A00
    fdivs f0, f3, f0
    fsubs f0, f4, f0
    fsubs f0, f4, f0
    fcmpo cr0, f6, f0
    ble lbl_fn_8013C564_000002E0
    b lbl_fn_8013C564_00000304
lbl_fn_8013C564_000002E0:
    stw r3, 0x8c(r1)
    stw r0, 0x94(r1)
    lfd f3, 0x88(r1)
    lfd f0, 0x90(r1)
    fsubs f3, f3, f5
    fsubs f0, f0, f5
    fdivs f0, f3, f0
    fsubs f0, f4, f0
    fsubs f6, f4, f0
lbl_fn_8013C564_00000304:
    fmuls f31, f31, f6
lbl_fn_8013C564_00000308:
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8013C564_00000320
    lfs f0, lbl_808819A8
    fmuls f31, f31, f0
lbl_fn_8013C564_00000320:
    addi r3, r29, 0x7d4
    bl fn_8012DB04
    lwz r0, 0x55c(r29)
    fmuls f31, f31, f1
    cmpwi r0, 0x7
    bne lbl_fn_8013C564_00000374
    addi r3, r29, 0x1030
    bl fn_801279E8
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8013C564_00000374
    lfs f0, lbl_80881974
    fcmpo cr0, f1, f0
    bge lbl_fn_8013C564_00000374
    lfs f0, lbl_8088199C
    fcmpo cr0, f0, f31
    bge lbl_fn_8013C564_0000036C
    b lbl_fn_8013C564_00000370
lbl_fn_8013C564_0000036C:
    fmr f0, f31
lbl_fn_8013C564_00000370:
    fmr f31, f0
lbl_fn_8013C564_00000374:
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8013C564_000005E8
    lwz r0, 0xc48(r29)
    li r4, 0x0
    stw r4, 0x13ac(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8013C564_000005A8
    stw r4, 0x6c(r1)
    addi r31, r1, 0x8
    addi r30, r1, 0x14
    lfs f4, lbl_808819F8
    stw r4, 0x70(r1)
    mr r3, r29
    lwz r28, lbl_8087EE98
    stw r4, 0x74(r1)
    stw r4, 0x78(r1)
    lfs f2, 0x530(r29)
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f3, 0xc(r1)
    lfs f0, 0x18(r1)
    fadds f3, f3, f4
    stfs f2, 0x10(r1)
    fsubs f0, f0, f4
    stfs f3, 0xc(r1)
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    mr r5, r31
    mr r6, r30
    addi r4, r1, 0x38
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8013C564_0000072C
    lwz r5, 0x6c(r1)
    li r4, 0x0
    li r3, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_8013C564_00000438
    lwz r0, 0x0(r5)
    cmplwi r0, 0x1a
    bne lbl_fn_8013C564_00000438
    li r3, 0x1
lbl_fn_8013C564_00000438:
    cmpwi r3, 0x0
    beq lbl_fn_8013C564_00000458
    lwz r0, 0x54c(r29)
    rlwinm r3, r0, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    beq lbl_fn_8013C564_00000458
    li r4, 0x1
lbl_fn_8013C564_00000458:
    lwz r3, 0x12a4(r29)
    rlwimi r3, r4, 3, 28, 28
    stw r3, 0x12a4(r29)
    extrwi. r0, r3, 1, 28
    beq lbl_fn_8013C564_0000072C
    clrlwi r0, r3, 2
    stw r0, 0x12a4(r29)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8013C564_000004CC
    lwz r3, 0xc38(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8013C564_000004CC
    lwz r0, 0xc3c(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8013C564_000004CC
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r29)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8013C564_000004CC:
    lwz r4, 0x48(r29)
    cmpwi r4, 0x0
    bne lbl_fn_8013C564_00000500
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8013C564_00000500
    lwz r3, 0x5c(r29)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8013C564_00000500
    li r0, 0x1
    b lbl_fn_8013C564_00000520
lbl_fn_8013C564_00000500:
    cmpwi r4, 0x0
    bne lbl_fn_8013C564_0000051C
    lwz r0, 0x12a8(r29)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8013C564_0000051C
    li r0, 0x1
    b lbl_fn_8013C564_00000520
lbl_fn_8013C564_0000051C:
    li r0, 0x0
lbl_fn_8013C564_00000520:
    cmpwi r0, 0x0
    beq lbl_fn_8013C564_0000072C
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8013C564_00000584
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8013C564_00000550
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8013C564_00000550:
    lwz r3, 0x64c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8013C564_00000564
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8013C564_00000564:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r29)
    mr r3, r29
    stw r0, 0x648(r29)
    stw r0, 0x64c(r29)
    bl fn_8014C228
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_00000584:
    lwz r0, 0x674(r29)
    cmpwi r0, 0x0
    blt lbl_fn_8013C564_0000072C
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_000005A8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8013C564_000005D0
    fmr f1, f30
    mr r3, r29
    fmr f2, f31
    mr r4, r30
    li r5, 0x0
    bl fn_8013CB68
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_000005D0:
    fmr f1, f30
    mr r3, r29
    fmr f2, f31
    mr r4, r30
    bl fn_80141674
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_000005E8:
    lwz r3, 0x12a4(r29)
    extrwi. r0, r3, 1, 28
    bne lbl_fn_8013C564_00000600
    lwz r0, 0x1208(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8013C564_00000650
lbl_fn_8013C564_00000600:
    lfs f3, lbl_80881A04
    li r0, 0x0
    stw r0, 0x13ac(r29)
    fcmpo cr0, f3, f31
    bge lbl_fn_8013C564_00000618
    b lbl_fn_8013C564_0000061C
lbl_fn_8013C564_00000618:
    fmr f3, f31
lbl_fn_8013C564_0000061C:
    lfs f0, 0x568(r29)
    lfs f2, lbl_80881A04
    fmuls f0, f0, f3
    fcmpo cr0, f2, f0
    ble lbl_fn_8013C564_00000634
    b lbl_fn_8013C564_00000638
lbl_fn_8013C564_00000634:
    fmr f2, f0
lbl_fn_8013C564_00000638:
    fmr f1, f30
    mr r3, r29
    mr r4, r30
    li r5, 0x0
    bl fn_8013CB68
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_00000650:
    lwz r0, 0xf54(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8013C564_00000690
    lfs f2, lbl_808819A4
    lfs f0, 0x568(r29)
    fmuls f0, f0, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_8013C564_00000674
    b lbl_fn_8013C564_00000678
lbl_fn_8013C564_00000674:
    fmr f2, f0
lbl_fn_8013C564_00000678:
    fmr f1, f30
    mr r3, r29
    mr r4, r30
    li r5, 0x0
    bl fn_8013CB68
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_00000690:
    extrwi. r0, r3, 1, 26
    bne lbl_fn_8013C564_000006A0
    extrwi. r0, r3, 1, 27
    beq lbl_fn_8013C564_00000714
lbl_fn_8013C564_000006A0:
    lwz r0, 0x55c(r29)
    li r3, 0x0
    stw r3, 0x13ac(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8013C564_000006D0
    fmr f1, f30
    mr r3, r29
    fmr f2, f31
    mr r4, r30
    mr r5, r31
    bl fn_8013CB68
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_000006D0:
    lfs f0, lbl_80881A08
    lwz r0, 0xfc0(r29)
    fmuls f31, f31, f0
    cmpwi r0, 0x0
    beq lbl_fn_8013C564_000006FC
    fmr f1, f30
    mr r3, r29
    fmr f2, f31
    mr r4, r30
    bl fn_80140588
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_000006FC:
    fmr f1, f30
    mr r3, r29
    fmr f2, f31
    mr r4, r30
    bl fn_801426A4
    b lbl_fn_8013C564_0000072C
lbl_fn_8013C564_00000714:
    fmr f1, f30
    mr r3, r29
    fmr f2, f31
    mr r4, r30
    mr r5, r31
    bl fn_8013CB68
lbl_fn_8013C564_0000072C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8013C564_00000748
    mr r3, r29
    addi r4, r29, 0x528
    addi r5, r29, 0x574
    bl fn_80171F3C
lbl_fn_8013C564_00000748:
    lfs f3, 0x2c(r1)
    lfs f0, 0x528(r29)
    lfs f4, lbl_808819C4
    fsubs f0, f3, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_8013C564_000007A0
    lfs f3, 0x30(r1)
    lfs f0, 0x52c(r29)
    fsubs f0, f3, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_8013C564_000007A0
    lfs f3, 0x34(r1)
    lfs f0, 0x530(r29)
    fsubs f0, f3, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f4
    blt lbl_fn_8013C564_000007AC
lbl_fn_8013C564_000007A0:
    lwz r0, 0x12a4(r29)
    ori r0, r0, 0x4000
    stw r0, 0x12a4(r29)
lbl_fn_8013C564_000007AC:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
