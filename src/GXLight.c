#include "revolution/types.h"

/* External functions referenced */
extern void fn_80615FF0(void);
extern void fn_8068A850(void);
extern void fn_8068B100(void);
extern void _savegpr_24(void);
extern void _restgpr_24(void);

/* Jump tables */
extern u32 jumptable_807B0B98[];
extern u32 jumptable_807B0C8C[];
extern u32 jumptable_807B0D80[];

/* External SDA symbols */
extern u32 __GXData;
extern u8 lbl_8087E8B8[8];
extern f32 lbl_80888750;
extern f32 lbl_80888754;
extern f32 lbl_80888758;
extern f32 lbl_8088875C;
extern f32 lbl_80888760;
extern f32 lbl_80888764;
extern f32 lbl_80888768;
extern f32 lbl_8088876C;
extern f32 lbl_80888770;
extern f32 lbl_80888774;
extern f32 lbl_80888778;
extern f32 lbl_8088877C;
extern f64 lbl_80888780;
extern f32 lbl_80888788;
extern f64 lbl_80888790;
extern f32 lbl_80888798;
extern f32 lbl_8088879C;
extern f32 lbl_808887A0;
extern f32 lbl_808887A4;
extern f32 lbl_808887A8;
extern f32 lbl_808887AC;

/* Function declarations */
void fn_80615700(void);
void fn_80615720(void);
void fn_806158C0(void);
void fn_80615990(void);
void fn_806159A0(void);
void fn_806159C0(void);
void fn_80615AD0(void);
void fn_80615AE0(void);
void fn_80615B60(void);
void fn_80615C40(void);
void fn_80615D20(void);
void fn_80615D50(void);
void fn_80615E00(void);
void fn_80615F30(void);
void fn_80615FF0(void);
void fn_80616200(void);
void fn_80616250(void);
void fn_80616360(void);

asm void fn_80615700(void)
{
    nofralloc
    stfs f1, 0x10(r3)
    stfs f2, 0x14(r3)
    stfs f3, 0x18(r3)
    stfs f4, 0x1c(r3)
    stfs f5, 0x20(r3)
    stfs f6, 0x24(r3)
    blr
}

asm void fn_80615720(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80888750
    stw r0, 0x14(r1)
    fcmpo cr0, f1, f0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    cror eq, lt, eq
    beq lbl_fn_80615720_00000058
    lfs f0, lbl_80888754
    fcmpo cr0, f1, f0
    ble lbl_fn_80615720_0000005C
lbl_fn_80615720_00000058:
    li r31, 0x0
lbl_fn_80615720_0000005C:
    lfs f2, lbl_80888758
    lfs f0, lbl_8088875C
    fmuls f1, f2, f1
    fdivs f1, f1, f0
    bl fn_8068A850
    cmpwi r31, 0x1
    frsp f5, f1
    beq lbl_fn_80615720_000000A8
    cmpwi r31, 0x2
    beq lbl_fn_80615720_000000BC
    cmpwi r31, 0x3
    beq lbl_fn_80615720_000000D8
    cmpwi r31, 0x4
    beq lbl_fn_80615720_000000F4
    cmpwi r31, 0x5
    beq lbl_fn_80615720_00000120
    cmpwi r31, 0x6
    beq lbl_fn_80615720_00000150
    b lbl_fn_80615720_0000018C
lbl_fn_80615720_000000A8:
    lfs f0, lbl_80888760
    lfs f1, lbl_80888764
    fmuls f3, f0, f5
    lfs f6, lbl_80888750
    b lbl_fn_80615720_00000198
lbl_fn_80615720_000000BC:
    lfs f2, lbl_80888768
    fneg f0, f5
    lfs f6, lbl_80888750
    fsubs f1, f2, f5
    fdivs f1, f2, f1
    fmuls f3, f0, f1
    b lbl_fn_80615720_00000198
lbl_fn_80615720_000000D8:
    lfs f2, lbl_80888768
    fneg f0, f5
    lfs f3, lbl_80888750
    fsubs f1, f2, f5
    fdivs f6, f2, f1
    fmuls f1, f0, f6
    b lbl_fn_80615720_00000198
lbl_fn_80615720_000000F4:
    lfs f3, lbl_80888768
    lfs f1, lbl_8088876C
    fsubs f2, f3, f5
    fsubs f0, f5, f1
    fmuls f2, f2, f2
    fmuls f0, f5, f0
    fdivs f2, f3, f2
    fmuls f3, f2, f0
    fmuls f1, f1, f2
    fneg f6, f2
    b lbl_fn_80615720_00000198
lbl_fn_80615720_00000120:
    lfs f4, lbl_80888768
    lfs f0, lbl_80888774
    fsubs f3, f4, f5
    lfs f2, lbl_80888770
    fadds f1, f4, f5
    fmuls f3, f3, f3
    fmuls f0, f0, f1
    fdivs f1, f4, f3
    fmuls f6, f2, f1
    fmuls f1, f0, f1
    fmuls f3, f6, f5
    b lbl_fn_80615720_00000198
lbl_fn_80615720_00000150:
    lfs f4, lbl_80888768
    lfs f0, lbl_8088876C
    fsubs f3, f4, f5
    lfs f1, lbl_80888774
    fmuls f2, f0, f5
    lfs f0, lbl_80888778
    fmuls f1, f1, f5
    fmuls f3, f3, f3
    fmuls f2, f2, f5
    fdivs f3, f4, f3
    fmuls f2, f3, f2
    fmuls f1, f1, f3
    fmuls f6, f0, f3
    fsubs f3, f4, f2
    b lbl_fn_80615720_00000198
lbl_fn_80615720_0000018C:
    lfs f1, lbl_80888750
    lfs f3, lbl_80888768
    fmr f6, f1
lbl_fn_80615720_00000198:
    stfs f3, 0x10(r30)
    stfs f1, 0x14(r30)
    stfs f6, 0x18(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806158C0(void)
{
    nofralloc
    lfs f0, lbl_80888750
    fcmpo cr0, f1, f0
    bge lbl_fn_806158C0_000001D0
    li r4, 0x0
lbl_fn_806158C0_000001D0:
    lfs f0, lbl_80888750
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    beq lbl_fn_806158C0_000001F0
    lfs f0, lbl_80888768
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_806158C0_000001F4
lbl_fn_806158C0_000001F0:
    li r4, 0x0
lbl_fn_806158C0_000001F4:
    cmpwi r4, 0x1
    beq lbl_fn_806158C0_00000210
    cmpwi r4, 0x2
    beq lbl_fn_806158C0_00000228
    cmpwi r4, 0x3
    beq lbl_fn_806158C0_0000024C
    b lbl_fn_806158C0_00000268
lbl_fn_806158C0_00000210:
    lfs f5, lbl_80888768
    fmuls f0, f2, f1
    lfs f4, lbl_80888750
    fsubs f1, f5, f2
    fdivs f3, f1, f0
    b lbl_fn_806158C0_00000274
lbl_fn_806158C0_00000228:
    lfs f5, lbl_80888768
    fmuls f3, f2, f1
    lfs f4, lbl_8088877C
    fsubs f2, f5, f2
    fmuls f0, f1, f3
    fmuls f1, f4, f2
    fdivs f3, f1, f3
    fdivs f4, f1, f0
    b lbl_fn_806158C0_00000274
lbl_fn_806158C0_0000024C:
    fmuls f0, f2, f1
    lfs f5, lbl_80888768
    lfs f3, lbl_80888750
    fsubs f2, f5, f2
    fmuls f0, f1, f0
    fdivs f4, f2, f0
    b lbl_fn_806158C0_00000274
lbl_fn_806158C0_00000268:
    lfs f3, lbl_80888750
    lfs f5, lbl_80888768
    fmr f4, f3
lbl_fn_806158C0_00000274:
    stfs f5, 0x1c(r3)
    stfs f3, 0x20(r3)
    stfs f4, 0x24(r3)
    blr
}

asm void fn_80615990(void)
{
    nofralloc
    stfs f1, 0x28(r3)
    stfs f2, 0x2c(r3)
    stfs f3, 0x30(r3)
    blr
}

asm void fn_806159A0(void)
{
    nofralloc
    fneg f4, f1
    fneg f1, f2
    fneg f0, f3
    stfs f4, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f0, 0x3c(r3)
    blr
}

asm void fn_806159C0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    fneg f6, f3
    lfs f4, lbl_80888768
    stw r0, 0x74(r1)
    lfs f0, lbl_80888750
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    fneg f31, f1
    stfd f30, 0x50(r1)
    fmuls f5, f31, f31
    psq_st f30, 0x58(r1), 0, 0
    fneg f30, f2
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    fadds f29, f4, f6
    fmuls f4, f30, f30
    stfd f28, 0x30(r1)
    fmuls f6, f29, f29
    psq_st f28, 0x38(r1), 0, 0
    fmr f28, f3
    stfd f27, 0x20(r1)
    psq_st f27, 0x28(r1), 0, 0
    fmr f27, f2
    stfd f26, 0x10(r1)
    psq_st f26, 0x18(r1), 0, 0
    fmr f26, f1
    fadds f1, f5, f4
    stw r31, 0xc(r1)
    mr r31, r3
    fadds f1, f6, f1
    fcmpu cr0, f0, f1
    beq lbl_fn_806159C0_00000354
    bl fn_8068B100
    frsp f1, f1
    lfs f0, lbl_80888768
    fdivs f1, f0, f1
lbl_fn_806159C0_00000354:
    fmuls f2, f31, f1
    lfs f0, lbl_80888780
    fmuls f4, f30, f1
    fmuls f3, f29, f1
    stfs f2, 0x34(r31)
    fmuls f2, f0, f26
    fmuls f1, f0, f27
    stfs f4, 0x38(r31)
    fmuls f0, f0, f28
    stfs f3, 0x3c(r31)
    stfs f2, 0x28(r31)
    stfs f1, 0x2c(r31)
    stfs f0, 0x30(r31)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    psq_l f27, 0x28(r1), 0, 0
    lfd f27, 0x20(r1)
    psq_l f26, 0x18(r1), 0, 0
    lfd f26, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80615AD0(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0xc(r3)
    blr
}

asm void fn_80615AE0(void)
{
    nofralloc
    cntlzw r0, r4
    lis r4, 0xcc01
    subfic r5, r0, 0x1f
    clrlslwi r5, r5, 29, 4
    li r0, 0x10
    stb r0, -0x8000(r4)
    addi r0, r5, 0x600
    oris r0, r0, 0xf
    addi r5, r4, -0x8000
    stw r0, -0x8000(r4)
    lwz r0, 0xc(r3)
    xor r6, r6, r6
    psq_l f5, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f3, 0x20(r3), 0, 0
    psq_l f2, 0x28(r3), 0, 0
    psq_l f1, 0x30(r3), 0, 0
    psq_l f0, 0x38(r3), 0, 0
    stw r6, -0x8000(r4)
    stw r6, -0x8000(r4)
    stw r6, -0x8000(r4)
    stw r0, -0x8000(r4)
    psq_st f5, 0x0(r5), 0, 0
    psq_st f4, 0x0(r5), 0, 0
    psq_st f3, 0x0(r5), 0, 0
    psq_st f2, 0x0(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f0, 0x0(r5), 0, 0
    li r0, 0x1
    lwz r3, __GXData
    sth r0, 0x2(r3)
    blr
}

asm void fn_80615B60(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_80615B60_00000494
    cmpwi r3, 0x1
    beq lbl_fn_80615B60_000004AC
    cmpwi r3, 0x2
    beq lbl_fn_80615B60_000004C4
    cmpwi r3, 0x3
    beq lbl_fn_80615B60_000004DC
    cmpwi r3, 0x4
    beq lbl_fn_80615B60_000004F4
    cmpwi r3, 0x5
    beq lbl_fn_80615B60_00000500
    blr
lbl_fn_80615B60_00000494:
    lwz r3, __GXData
    li r8, 0x0
    lwz r0, 0x0(r4)
    lwz r7, 0xa8(r3)
    rlwimi r7, r0, 0, 0, 23
    b lbl_fn_80615B60_00000510
lbl_fn_80615B60_000004AC:
    lwz r3, __GXData
    li r8, 0x1
    lwz r0, 0x0(r4)
    lwz r7, 0xac(r3)
    rlwimi r7, r0, 0, 0, 23
    b lbl_fn_80615B60_00000510
lbl_fn_80615B60_000004C4:
    lwz r3, __GXData
    li r8, 0x0
    lbz r0, 0x3(r4)
    lwz r7, 0xa8(r3)
    rlwimi r7, r0, 0, 24, 31
    b lbl_fn_80615B60_00000510
lbl_fn_80615B60_000004DC:
    lwz r3, __GXData
    li r8, 0x1
    lbz r0, 0x3(r4)
    lwz r7, 0xac(r3)
    rlwimi r7, r0, 0, 24, 31
    b lbl_fn_80615B60_00000510
lbl_fn_80615B60_000004F4:
    lwz r7, 0x0(r4)
    li r8, 0x0
    b lbl_fn_80615B60_00000510
lbl_fn_80615B60_00000500:
    lwz r7, 0x0(r4)
    li r8, 0x1
    b lbl_fn_80615B60_00000510
    blr
lbl_fn_80615B60_00000510:
    lwz r6, __GXData
    li r3, 0x100
    slwi r0, r8, 2
    lwz r5, 0x5fc(r6)
    slw r4, r3, r8
    add r3, r6, r0
    or r0, r5, r4
    stw r0, 0x5fc(r6)
    stw r7, 0xa8(r3)
    blr
}

asm void fn_80615C40(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fn_80615C40_00000574
    cmpwi r3, 0x1
    beq lbl_fn_80615C40_0000058C
    cmpwi r3, 0x2
    beq lbl_fn_80615C40_000005A4
    cmpwi r3, 0x3
    beq lbl_fn_80615C40_000005BC
    cmpwi r3, 0x4
    beq lbl_fn_80615C40_000005D4
    cmpwi r3, 0x5
    beq lbl_fn_80615C40_000005E0
    blr
lbl_fn_80615C40_00000574:
    lwz r3, __GXData
    li r8, 0x0
    lwz r0, 0x0(r4)
    lwz r7, 0xb0(r3)
    rlwimi r7, r0, 0, 0, 23
    b lbl_fn_80615C40_000005F0
lbl_fn_80615C40_0000058C:
    lwz r3, __GXData
    li r8, 0x1
    lwz r0, 0x0(r4)
    lwz r7, 0xb4(r3)
    rlwimi r7, r0, 0, 0, 23
    b lbl_fn_80615C40_000005F0
lbl_fn_80615C40_000005A4:
    lwz r3, __GXData
    li r8, 0x0
    lbz r0, 0x3(r4)
    lwz r7, 0xb0(r3)
    rlwimi r7, r0, 0, 24, 31
    b lbl_fn_80615C40_000005F0
lbl_fn_80615C40_000005BC:
    lwz r3, __GXData
    li r8, 0x1
    lbz r0, 0x3(r4)
    lwz r7, 0xb4(r3)
    rlwimi r7, r0, 0, 24, 31
    b lbl_fn_80615C40_000005F0
lbl_fn_80615C40_000005D4:
    lwz r7, 0x0(r4)
    li r8, 0x0
    b lbl_fn_80615C40_000005F0
lbl_fn_80615C40_000005E0:
    lwz r7, 0x0(r4)
    li r8, 0x1
    b lbl_fn_80615C40_000005F0
    blr
lbl_fn_80615C40_000005F0:
    lwz r6, __GXData
    li r3, 0x400
    slwi r0, r8, 2
    lwz r5, 0x5fc(r6)
    slw r4, r3, r8
    add r3, r6, r0
    or r0, r5, r4
    stw r0, 0x5fc(r6)
    stw r7, 0xb0(r3)
    blr
}

asm void fn_80615D20(void)
{
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x254(r4)
    rlwimi r0, r3, 4, 25, 27
    stw r0, 0x254(r4)
    lwz r0, 0x5fc(r4)
    oris r0, r0, 0x100
    ori r0, r0, 0x4
    stw r0, 0x5fc(r4)
    blr
}

asm void fn_80615D50(void)
{
    nofralloc
    cmpwi r9, 0x0
    li r10, 0x0
    rlwimi r10, r4, 1, 30, 30
    clrlwi r11, r3, 30
    rlwimi r10, r6, 0, 31, 31
    rlwimi r10, r5, 6, 25, 25
    bne lbl_fn_80615D50_00000670
    li r8, 0x0
lbl_fn_80615D50_00000670:
    subfic r5, r9, 0x2
    subi r4, r9, 0x2
    or r4, r5, r4
    lwz r5, __GXData
    neg r0, r9
    rlwimi r10, r8, 7, 23, 24
    rlwimi r10, r4, 10, 22, 22
    slwi r4, r11, 2
    or r0, r0, r9
    cmpwi r3, 0x4
    rlwimi r10, r0, 11, 21, 21
    add r4, r5, r4
    rlwimi r10, r7, 2, 26, 29
    li r0, 0x1000
    rlwimi r10, r7, 7, 17, 20
    stw r10, 0xb8(r4)
    slw r0, r0, r11
    lwz r4, 0x5fc(r5)
    or r0, r4, r0
    stw r0, 0x5fc(r5)
    bne lbl_fn_80615D50_000006D8
    stw r10, 0xc0(r5)
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x5000
    stw r0, 0x5fc(r5)
    blr
lbl_fn_80615D50_000006D8:
    cmpwi r3, 0x5
    bnelr
    stw r10, 0xc4(r5)
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0xa000
    stw r0, 0x5fc(r5)
    blr
}

asm void fn_80615E00(void)
{
    nofralloc
    cmplwi r5, 0x3c
    bgt lbl_fn_80615E00_00000744
    lis r8, jumptable_807B0B98@ha
    slwi r0, r5, 2
    addi r8, r8, jumptable_807B0B98@l
    lwzx r8, r8, r0
    mtctr r8
    bctr
    li r10, 0x3
    li r0, 0x3
    b lbl_fn_80615E00_0000074C
    li r10, 0x3
    li r0, 0x2
    b lbl_fn_80615E00_0000074C
    li r10, 0x2
    li r0, 0x2
    b lbl_fn_80615E00_0000074C
lbl_fn_80615E00_00000744:
    li r0, 0x0
    li r10, 0x0
lbl_fn_80615E00_0000074C:
    cmplwi r5, 0x6
    beq lbl_fn_80615E00_0000075C
    cmplwi r5, 0x16
    bne lbl_fn_80615E00_00000764
lbl_fn_80615E00_0000075C:
    li r11, 0x40
    b lbl_fn_80615E00_00000768
lbl_fn_80615E00_00000764:
    li r11, 0x20
lbl_fn_80615E00_00000768:
    cmplwi r6, 0x1
    bne lbl_fn_80615E00_000007F0
    li r5, 0x1
    li r12, 0x0
    slw r8, r5, r10
    slw r9, r5, r0
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_80615E00_0000081C
lbl_fn_80615E00_0000078C:
    add r6, r3, r8
    add r5, r4, r9
    subi r6, r6, 0x1
    cmplwi r3, 0x1
    sraw r6, r6, r10
    subi r5, r5, 0x1
    mullw r6, r11, r6
    sraw r5, r5, r0
    mullw r5, r6, r5
    add r12, r12, r5
    bne lbl_fn_80615E00_000007C0
    cmplwi r4, 0x1
    beq lbl_fn_80615E00_0000081C
lbl_fn_80615E00_000007C0:
    cmplwi r3, 0x1
    li r5, 0x1
    ble lbl_fn_80615E00_000007D0
    extrwi r5, r3, 15, 16
lbl_fn_80615E00_000007D0:
    cmplwi r4, 0x1
    clrlwi r3, r5, 16
    li r5, 0x1
    ble lbl_fn_80615E00_000007E4
    extrwi r5, r4, 15, 16
lbl_fn_80615E00_000007E4:
    clrlwi r4, r5, 16
    bdnz lbl_fn_80615E00_0000078C
    b lbl_fn_80615E00_0000081C
lbl_fn_80615E00_000007F0:
    li r6, 0x1
    slw r5, r6, r10
    add r5, r3, r5
    slw r3, r6, r0
    subi r5, r5, 0x1
    sraw r5, r5, r10
    add r3, r4, r3
    mullw r4, r11, r5
    subi r3, r3, 0x1
    sraw r0, r3, r0
    mullw r12, r4, r0
lbl_fn_80615E00_0000081C:
    mr r3, r12
    blr
}

asm void fn_80615F30(void)
{
    nofralloc
    cmplwi r3, 0x3c
    bgt lbl_fn_80615F30_00000874
    lis r9, jumptable_807B0C8C@ha
    slwi r0, r3, 2
    addi r9, r9, jumptable_807B0C8C@l
    lwzx r9, r9, r0
    mtctr r9
    bctr
    li r11, 0x3
    li r12, 0x3
    b lbl_fn_80615F30_0000087C
    li r11, 0x3
    li r12, 0x2
    b lbl_fn_80615F30_0000087C
    li r11, 0x2
    li r12, 0x2
    b lbl_fn_80615F30_0000087C
lbl_fn_80615F30_00000874:
    li r12, 0x0
    li r11, 0x0
lbl_fn_80615F30_0000087C:
    cmpwi r4, 0x0
    bne lbl_fn_80615F30_00000888
    li r4, 0x1
lbl_fn_80615F30_00000888:
    cmpwi r5, 0x0
    bne lbl_fn_80615F30_00000894
    li r5, 0x1
lbl_fn_80615F30_00000894:
    li r10, 0x1
    cmpwi r3, 0x6
    slw r0, r10, r11
    li r9, 0x0
    add r4, r4, r0
    slw r0, r10, r12
    subi r4, r4, 0x1
    sraw r10, r4, r11
    stw r10, 0x0(r6)
    add r4, r5, r0
    subi r0, r4, 0x1
    sraw r0, r0, r12
    stw r0, 0x0(r7)
    beq lbl_fn_80615F30_000008D4
    cmpwi r3, 0x16
    bne lbl_fn_80615F30_000008D8
lbl_fn_80615F30_000008D4:
    li r9, 0x1
lbl_fn_80615F30_000008D8:
    neg r0, r9
    or r0, r0, r9
    srwi r3, r0, 31
    addi r0, r3, 0x1
    stw r0, 0x0(r8)
    blr
}

asm void fn_80615FF0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r27, r4
    mr r28, r5
    mr r31, r3
    mr r29, r6
    mr r30, r7
    mr r24, r8
    mr r25, r9
    mr r26, r10
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r0, 0x0(r31)
    rlwimi r0, r24, 0, 30, 31
    rlwimi r0, r25, 2, 28, 29
    cmpwi r26, 0x0
    ori r4, r0, 0x10
    stw r4, 0x0(r31)
    beq lbl_fn_80615FF0_000009D8
    subi r0, r30, 0x8
    lbz r3, 0x1f(r31)
    cmplwi r0, 0x2
    ori r0, r3, 0x1
    stb r0, 0x1f(r31)
    bgt lbl_fn_80615FF0_00000974
    li r0, 0x5
    rlwimi r4, r0, 5, 24, 26
    stw r4, 0x0(r31)
    b lbl_fn_80615FF0_00000980
lbl_fn_80615FF0_00000974:
    li r0, 0x6
    rlwimi r4, r0, 5, 24, 26
    stw r4, 0x0(r31)
lbl_fn_80615FF0_00000980:
    cmplw r28, r29
    ble lbl_fn_80615FF0_00000994
    cntlzw r0, r28
    subfic r3, r0, 0x1f
    b lbl_fn_80615FF0_0000099C
lbl_fn_80615FF0_00000994:
    cntlzw r0, r29
    subfic r3, r0, 0x1f
lbl_fn_80615FF0_0000099C:
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f2, lbl_80888790
    stw r3, 0xc(r1)
    lfs f0, lbl_80888788
    lfd f1, 0x8(r1)
    lwz r0, 0x4(r31)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    rlwimi r0, r3, 8, 16, 23
    stw r0, 0x4(r31)
    b lbl_fn_80615FF0_000009E4
lbl_fn_80615FF0_000009D8:
    li r0, 0x4
    rlwimi r4, r0, 5, 24, 26
    stw r4, 0x0(r31)
lbl_fn_80615FF0_000009E4:
    clrlwi r5, r30, 28
    subi r0, r28, 0x1
    lwz r4, 0x8(r31)
    rlwimi r4, r0, 0, 22, 31
    lwz r0, 0xc(r31)
    subi r3, r29, 0x1
    rlwimi r0, r27, 27, 8, 31
    cmplwi r5, 0xe
    rlwimi r4, r3, 10, 12, 21
    stw r30, 0x14(r31)
    rlwimi r4, r30, 20, 8, 11
    stw r4, 0x8(r31)
    stw r0, 0xc(r31)
    bgt lbl_fn_80615FF0_00000A98
    lis r3, jumptable_807B0D80@ha
    slwi r0, r5, 2
    addi r3, r3, jumptable_807B0D80@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x1
    stb r0, 0x1e(r31)
    li r6, 0x3
    li r7, 0x3
    b lbl_fn_80615FF0_00000AA8
    li r0, 0x2
    stb r0, 0x1e(r31)
    li r6, 0x3
    li r7, 0x2
    b lbl_fn_80615FF0_00000AA8
    li r0, 0x2
    stb r0, 0x1e(r31)
    li r6, 0x2
    li r7, 0x2
    b lbl_fn_80615FF0_00000AA8
    li r0, 0x3
    stb r0, 0x1e(r31)
    li r6, 0x2
    li r7, 0x2
    b lbl_fn_80615FF0_00000AA8
    li r0, 0x0
    stb r0, 0x1e(r31)
    li r6, 0x3
    li r7, 0x3
    b lbl_fn_80615FF0_00000AA8
lbl_fn_80615FF0_00000A98:
    li r0, 0x2
    stb r0, 0x1e(r31)
    li r6, 0x2
    li r7, 0x2
lbl_fn_80615FF0_00000AA8:
    li r5, 0x1
    lbz r0, 0x1f(r31)
    slw r3, r5, r6
    addi r11, r1, 0x40
    add r4, r28, r3
    ori r0, r0, 0x2
    slw r3, r5, r7
    stb r0, 0x1f(r31)
    subi r4, r4, 0x1
    add r3, r29, r3
    sraw r4, r4, r6
    subi r0, r3, 0x1
    sraw r0, r0, r7
    mullw r0, r4, r0
    clrlwi r0, r0, 17
    sth r0, 0x1c(r31)
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80616200(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x18(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80615FF0
    lbz r0, 0x1f(r30)
    stw r31, 0x18(r30)
    rlwinm r0, r0, 0, 31, 29
    stb r0, 0x1f(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80616250(void)
{
    nofralloc
    lfs f0, lbl_80888798
    stwu r1, -0x10(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80616250_00000B68
    fmr f3, f0
    b lbl_fn_80616250_00000B7C
lbl_fn_80616250_00000B68:
    lfs f0, lbl_808887A0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80616250_00000B7C
    lfs f3, lbl_8088879C
lbl_fn_80616250_00000B7C:
    lfs f4, lbl_808887A4
    subi r0, r5, 0x1
    cntlzw r9, r0
    lfs f0, lbl_808887A8
    fmuls f3, f4, f3
    cntlzw r0, r7
    lwz r10, 0x0(r3)
    la r5, lbl_8087E8B8
    fcmpo cr0, f1, f0
    fctiwz f3, f3
    stfd f3, 0x8(r1)
    lwz r7, 0xc(r1)
    rlwimi r10, r7, 9, 15, 22
    rlwimi r10, r9, 31, 27, 27
    stw r10, 0x0(r3)
    lbzx r4, r5, r4
    rlwimi r10, r4, 5, 24, 26
    rlwimi r10, r0, 3, 23, 23
    rlwinm r0, r10, 0, 15, 12
    rlwimi r0, r8, 19, 11, 12
    rlwimi r0, r6, 21, 10, 10
    stw r0, 0x0(r3)
    bge lbl_fn_80616250_00000BE0
    fmr f1, f0
    b lbl_fn_80616250_00000BF0
lbl_fn_80616250_00000BE0:
    lfs f0, lbl_808887AC
    fcmpo cr0, f1, f0
    ble lbl_fn_80616250_00000BF0
    fmr f1, f0
lbl_fn_80616250_00000BF0:
    lfs f3, lbl_80888788
    lfs f0, lbl_808887A8
    fmuls f1, f3, f1
    fcmpo cr0, f2, f0
    fctiwz f1, f1
    stfd f1, 0x8(r1)
    lwz r4, 0xc(r1)
    bge lbl_fn_80616250_00000C18
    fmr f2, f0
    b lbl_fn_80616250_00000C28
lbl_fn_80616250_00000C18:
    lfs f0, lbl_808887AC
    fcmpo cr0, f2, f0
    ble lbl_fn_80616250_00000C28
    fmr f2, f0
lbl_fn_80616250_00000C28:
    lfs f0, lbl_80888788
    lwz r0, 0x4(r3)
    rlwimi r0, r4, 0, 24, 31
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    rlwimi r0, r4, 8, 16, 23
    stw r0, 0x4(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_80616360(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    rlwimi r0, r4, 0, 30, 31
    rlwimi r0, r5, 2, 28, 29
    stw r0, 0x0(r3)
    blr
}
