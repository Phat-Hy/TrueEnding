#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8001047C(void);
extern void fn_80013338(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_8009373C(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800E0AA8(void);
extern void fn_800F8548(void);
extern void fn_8013322C(void);
extern void fn_8013C38C(void);
extern void fn_80148990(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_801C3910(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8028B74C(void);
extern void fn_80342004(void);
extern void fn_8034228C(void);
extern void fn_80342674(void);
extern void fn_80342BC8(void);
extern void fn_80342FB4(void);
extern void fn_8034315C(void);
extern void fn_803435B8(void);
extern void fn_80343B0C(void);
extern void fn_80344060(void);
extern void fn_803446BC(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 jumptable_80789360[];
extern u8 lbl_8074A490[];
extern u8 lbl_8074A4C0[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885238;
extern u32 lbl_8088525C;
extern u32 lbl_80885260;
extern u32 lbl_80885264;
extern u32 lbl_80885284;
extern u32 lbl_80885288;
extern u32 lbl_8088528C;

/* Function declarations */
void fn_80339F04(void);
void fn_80339F14(void);
void fn_80339F24(void);
void fn_80339F34(void);
void fn_80339F5C(void);
void fn_80339F6C(void);
void fn_80339F74(void);
void fn_80339F7C(void);
void fn_80339F84(void);
void fn_80339F8C(void);
void fn_8033A154(void);
void fn_8033A7A0(void);
void fn_8033AB88(void);
void fn_8033ACB0(void);

asm void fn_80339F04(void)
{
    nofralloc
    lwz r0, 0x54c(r3)
    extrwi r0, r0, 1, 28
    xori r3, r0, 0x1
    blr
}

asm void fn_80339F14(void)
{
    nofralloc
    lwz r0, 0x3dc(r3)
    rlwimi r0, r4, 31, 0, 0
    stw r0, 0x3dc(r3)
    blr
}

asm void fn_80339F24(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_80339F34(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_80339F34_00000048
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r3)
    blr
lbl_fn_80339F34_00000048:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r3)
    blr
}

asm void fn_80339F5C(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    stfs f1, 0x23c(r3)
    blr
}

asm void fn_80339F6C(void)
{
    nofralloc
    lwz r3, 0x638(r3)
    blr
}

asm void fn_80339F74(void)
{
    nofralloc
    stw r4, 0x1454(r3)
    blr
}

asm void fn_80339F7C(void)
{
    nofralloc
    lwz r3, 0xe0(r3)
    blr
}

asm void fn_80339F84(void)
{
    nofralloc
    stw r4, 0xe8(r3)
    blr
}

asm void fn_80339F8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x16b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80339F8C_00000238
    lwz r6, 0x58c(r3)
    cmpwi r6, 0x10
    bne lbl_fn_80339F8C_000000CC
    lwz r5, 0x8(r4)
    lbz r0, 0x1(r5)
    cmpwi r0, 0x1
    beq lbl_fn_80339F8C_00000238
lbl_fn_80339F8C_000000CC:
    cmpwi r6, 0xb
    beq lbl_fn_80339F8C_00000238
    lfs f2, 0x10(r4)
    li r0, 0x0
    lfs f3, lbl_80885238
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    lwz r5, 0x50(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    ori r5, r5, 0x10
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    stw r5, 0x50(r4)
    stw r0, 0x40(r4)
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80339F8C_00000128
    cmpwi r0, 0x2
    beq lbl_fn_80339F8C_000001F0
    b lbl_fn_80339F8C_00000214
lbl_fn_80339F8C_00000128:
    lwz r3, 0x8(r4)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x179a
    beq lbl_fn_80339F8C_00000140
    cmpwi r0, 0x2710
    bne lbl_fn_80339F8C_00000174
lbl_fn_80339F8C_00000140:
    lwz r0, 0xc(r4)
    ori r0, r0, 0x80
    stw r0, 0xc(r4)
    li r4, 0x94
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80339F8C_00000214
    lwz r3, lbl_8087F430
    li r4, 0x94
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80339F8C_00000214
lbl_fn_80339F8C_00000174:
    lwz r0, 0xc(r4)
    ori r0, r0, 0x8008
    stw r0, 0xc(r4)
    li r4, 0x91
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80339F8C_000001A4
    lwz r3, lbl_8087F430
    li r4, 0x91
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80339F8C_000001A4:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80339F8C_00000214
    lwz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80339F8C_00000214
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80339F8C_00000214
    lwz r4, 0x560(r3)
    subi r0, r4, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_80339F8C_00000214
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80339F8C_00000214
lbl_fn_80339F8C_000001F0:
    lwz r3, lbl_8087F8A0
    lwz r5, 0x0(r4)
    lwz r0, 0x48(r3)
    cmplw r5, r0
    bne lbl_fn_80339F8C_00000238
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80339F8C_00000214
    b lbl_fn_80339F8C_00000238
lbl_fn_80339F8C_00000214:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80339F8C_00000238:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8033A154(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xd
    bne lbl_fn_8033A154_0000029C
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8033A154_0000029C
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8033A154_0000029C
    lwz r5, 0x16ac(r3)
    addi r0, r5, 0x1
    stw r0, 0x16ac(r3)
lbl_fn_8033A154_0000029C:
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8033A154_000002BC
    cmpwi r0, 0x2
    beq lbl_fn_8033A154_00000570
    cmpwi r0, 0x1
    beq lbl_fn_8033A154_000005F4
    b lbl_fn_8033A154_00000884
lbl_fn_8033A154_000002BC:
    lfs f1, 0x7d8(r3)
    lfs f0, lbl_80885238
    lwz r5, 0x16c8(r3)
    fcmpo cr0, f1, f0
    addi r0, r5, 0x1
    stw r0, 0x16c8(r3)
    cror eq, lt, eq
    bne lbl_fn_8033A154_0000042C
    lfs f0, lbl_80885260
    li r4, 0x20
    stfs f0, 0x7d8(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    li r31, 0x0
    li r0, 0x2
    stw r0, 0x14bc(r30)
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    stw r31, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r3, 0xd
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80885284
    li r5, 0x3d
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, lbl_8087F430
    lwz r0, 0x8a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8033A154_00000408
    stw r31, 0x8a0(r3)
    stw r31, 0x4d8(r3)
    stb r31, 0x97c(r3)
lbl_fn_8033A154_00000408:
    lwz r0, 0x14bc(r30)
    lfs f0, lbl_80885238
    cmpwi r0, 0x2
    stfs f0, 0x578(r30)
    bne lbl_fn_8033A154_00000884
    lwz r0, 0x14a8(r30)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r30)
    b lbl_fn_8033A154_00000884
lbl_fn_8033A154_0000042C:
    lwz r4, 0x8(r4)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1791
    bne lbl_fn_8033A154_00000884
    li r31, 0x0
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    stw r31, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r3, 0xd
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80885284
    li r5, 0x3d
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, lbl_8087F430
    lwz r0, 0x8a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8033A154_0000054C
    stw r31, 0x8a0(r3)
    stw r31, 0x4d8(r3)
    stb r31, 0x97c(r3)
lbl_fn_8033A154_0000054C:
    lwz r0, 0x14bc(r30)
    lfs f0, lbl_80885238
    cmpwi r0, 0x2
    stfs f0, 0x578(r30)
    bne lbl_fn_8033A154_00000884
    lwz r0, 0x14a8(r30)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r30)
    b lbl_fn_8033A154_00000884
lbl_fn_8033A154_00000570:
    lfs f1, 0x7d8(r3)
    lfs f0, lbl_80885238
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8033A154_00000884
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x11
    bne lbl_fn_8033A154_000005A0
    lwz r4, 0x8(r4)
    lwz r0, 0x4(r4)
    cmpwi r0, 0xe2
    beq lbl_fn_8033A154_000005B8
lbl_fn_8033A154_000005A0:
    lfs f0, lbl_80885260
    li r4, 0x20
    stfs f0, 0x7d8(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    b lbl_fn_8033A154_00000884
lbl_fn_8033A154_000005B8:
    lwz r3, lbl_8087F430
    li r4, 0xce
    li r5, 0x1
    bl fn_80370AE4
    lis r31, lbl_8074A4C0@ha
    addi r3, r30, 0xb0
    addi r31, r31, lbl_8074A4C0@l
    li r5, 0x0
    addi r4, r31, 0x2fb
    bl fn_8009373C
    addi r3, r30, 0xb0
    addi r4, r31, 0x308
    li r5, 0x0
    bl fn_8009373C
    b lbl_fn_8033A154_00000884
lbl_fn_8033A154_000005F4:
    lwz r5, 0x68(r4)
    lis r0, 0x4330
    stw r0, 0x40(r1)
    lis r4, lbl_8074A490@ha
    xoris r0, r5, 0x8000
    lfd f2, lbl_8074A490@l(r4)
    stw r0, 0x44(r1)
    li r4, 0x20
    lfs f0, 0x7d8(r3)
    lfd f1, 0x40(r1)
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x7d8(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r3, 0x68(r31)
    lwz r0, 0x16c0(r30)
    subf. r0, r3, r0
    stw r0, 0x16c0(r30)
    ble lbl_fn_8033A154_0000065C
    lwz r3, 0x8(r31)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x179a
    beq lbl_fn_8033A154_0000065C
    cmpwi r0, 0x2710
    bne lbl_fn_8033A154_00000884
lbl_fn_8033A154_0000065C:
    li r3, 0x0
    stw r3, 0x16c0(r30)
    addi r4, r30, 0x1610
    li r5, 0x0
    lwz r0, 0x94(r31)
    li r6, 0x0
    rlwinm r0, r0, 0, 24, 22
    ori r0, r0, 0x2
    stw r0, 0x94(r31)
    stw r3, 0x14bc(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f2, lbl_80885238
    li r3, -0x1
    lfs f0, lbl_80885260
    li r0, 0x1
    stfs f2, 0x28(r1)
    addi r4, r30, 0x161c
    lfs f1, lbl_80885264
    addi r5, r30, 0xb0
    stfs f2, 0x2c(r1)
    addi r7, r1, 0x34
    addi r8, r1, 0x28
    addi r9, r1, 0x18
    stfs f2, 0x30(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f2, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_8074A4C0@ha
    lfs f1, lbl_80885260
    addi r4, r4, lbl_8074A4C0@l
    addi r3, r1, 0x10
    addi r4, r4, 0x31a
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8033A154_00000754
    lfs f1, lbl_80885260
    mr r4, r30
    lfs f2, lbl_8088525C
    li r5, 0x6
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_8033A154_00000754:
    li r31, 0x0
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    stw r31, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r3, 0xd
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80885284
    li r5, 0x3d
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r3, lbl_8087F430
    lwz r0, 0x8a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8033A154_00000864
    stw r31, 0x8a0(r3)
    stw r31, 0x4d8(r3)
    stb r31, 0x97c(r3)
lbl_fn_8033A154_00000864:
    lwz r0, 0x14bc(r30)
    lfs f0, lbl_80885238
    cmpwi r0, 0x2
    stfs f0, 0x578(r30)
    bne lbl_fn_8033A154_00000884
    lwz r0, 0x14a8(r30)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r30)
lbl_fn_8033A154_00000884:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8033A7A0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8033A7A0_00000C64
    bl fn_8000D9E8
    bl fn_8000DCF4
    lwz r3, 0x14b0(r30)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8001047C
    addi r3, r1, 0x8
    addi r4, r30, 0x528
    addi r5, r1, 0x14
    bl fn_80013338
    addi r3, r1, 0x8
    bl fn_801C3910
    lwz r0, 0x14bc(r30)
    fmr f31, f1
    li r31, 0x0
    cmpwi r0, 0x2
    beq lbl_fn_8033A7A0_00000BDC
    lfs f1, 0x9fc(r30)
    lfs f0, lbl_80885260
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8033A7A0_0000092C
    li r31, 0x6
    b lbl_fn_8033A7A0_00000BDC
lbl_fn_8033A7A0_0000092C:
    lbz r0, 0x1628(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8033A7A0_0000094C
    lwz r0, 0x1558(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8033A7A0_0000094C
    li r31, 0x9
    b lbl_fn_8033A7A0_00000BDC
lbl_fn_8033A7A0_0000094C:
    lbz r0, 0x16b1(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8033A7A0_00000968
    li r0, 0x0
    stb r0, 0x16b1(r30)
    li r31, 0x8
    b lbl_fn_8033A7A0_00000BDC
lbl_fn_8033A7A0_00000968:
    lwz r3, 0x16c8(r30)
    lwz r0, 0x16cc(r30)
    cmpw r3, r0
    blt lbl_fn_8033A7A0_00000980
    li r31, 0x7
    b lbl_fn_8033A7A0_00000BDC
lbl_fn_8033A7A0_00000980:
    lwz r0, 0x165c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8033A7A0_000009C0
    lwz r0, 0x1660(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8033A7A0_000009A8
    li r0, 0x1
    stw r0, 0x1660(r30)
    li r31, 0x5
    b lbl_fn_8033A7A0_000009B4
lbl_fn_8033A7A0_000009A8:
    li r0, 0x0
    stw r0, 0x1660(r30)
    li r31, 0x3
lbl_fn_8033A7A0_000009B4:
    li r0, 0x0
    stw r0, 0x165c(r30)
    b lbl_fn_8033A7A0_00000BDC
lbl_fn_8033A7A0_000009C0:
    lwz r3, 0x14c0(r30)
    lwz r0, 0x176c(r30)
    cmpw r3, r0
    ble lbl_fn_8033A7A0_00000BDC
    mr r3, r30
    addi r4, r30, 0x528
    bl fn_803446BC
    cmpwi r3, 0x0
    beq lbl_fn_8033A7A0_000009EC
    li r31, 0x3
    b lbl_fn_8033A7A0_00000BB8
lbl_fn_8033A7A0_000009EC:
    lfs f0, 0x177c(r30)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8033A7A0_00000A8C
    lwz r0, 0x1558(r30)
    lwz r31, 0x155c(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x14ec
    bl fn_800E0AA8
    subi r0, r3, 0x1
    cmpw r31, r0
    bge lbl_fn_8033A7A0_00000A24
    b lbl_fn_8033A7A0_00000A3C
lbl_fn_8033A7A0_00000A24:
    lwz r0, 0x1558(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x14ec
    bl fn_800E0AA8
    subi r31, r3, 0x1
lbl_fn_8033A7A0_00000A3C:
    lwz r0, 0x1558(r30)
    mr r4, r31
    stw r31, 0x155c(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x14ec
    bl fn_8028B74C
    lwz r0, 0x1558(r30)
    lwz r31, 0x0(r3)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x14ec
    bl fn_800E0AA8
    lwz r4, 0x155c(r30)
    addi r4, r4, 0x1
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x155c(r30)
    b lbl_fn_8033A7A0_00000BB8
lbl_fn_8033A7A0_00000A8C:
    lfs f0, 0x1780(r30)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8033A7A0_00000B2C
    lwz r0, 0x1558(r30)
    lwz r31, 0x1560(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x14f8
    bl fn_800E0AA8
    subi r0, r3, 0x1
    cmpw r31, r0
    bge lbl_fn_8033A7A0_00000AC4
    b lbl_fn_8033A7A0_00000ADC
lbl_fn_8033A7A0_00000AC4:
    lwz r0, 0x1558(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x14f8
    bl fn_800E0AA8
    subi r31, r3, 0x1
lbl_fn_8033A7A0_00000ADC:
    lwz r0, 0x1558(r30)
    mr r4, r31
    stw r31, 0x1560(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x14f8
    bl fn_8028B74C
    lwz r0, 0x1558(r30)
    lwz r31, 0x0(r3)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x14f8
    bl fn_800E0AA8
    lwz r4, 0x1560(r30)
    addi r4, r4, 0x1
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x1560(r30)
    b lbl_fn_8033A7A0_00000BB8
lbl_fn_8033A7A0_00000B2C:
    lwz r0, 0x1558(r30)
    lwz r31, 0x1564(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x1504
    bl fn_800E0AA8
    subi r0, r3, 0x1
    cmpw r31, r0
    bge lbl_fn_8033A7A0_00000B54
    b lbl_fn_8033A7A0_00000B6C
lbl_fn_8033A7A0_00000B54:
    lwz r0, 0x1558(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x1504
    bl fn_800E0AA8
    subi r31, r3, 0x1
lbl_fn_8033A7A0_00000B6C:
    lwz r0, 0x1558(r30)
    mr r4, r31
    stw r31, 0x1564(r30)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x1504
    bl fn_8028B74C
    lwz r0, 0x1558(r30)
    lwz r31, 0x0(r3)
    mulli r0, r0, 0x24
    add r3, r30, r0
    addi r3, r3, 0x1504
    bl fn_800E0AA8
    lwz r4, 0x1564(r30)
    addi r4, r4, 0x1
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x1564(r30)
lbl_fn_8033A7A0_00000BB8:
    lwz r3, 0x1664(r30)
    addi r0, r3, 0x1
    stw r0, 0x1664(r30)
    cmpwi r0, 0x3
    blt lbl_fn_8033A7A0_00000BDC
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x165c(r30)
    stw r0, 0x1664(r30)
lbl_fn_8033A7A0_00000BDC:
    cmplwi r31, 0x9
    bgt lbl_fn_8033A7A0_00000C64
    lis r3, jumptable_80789360@ha
    slwi r0, r31, 2
    addi r3, r3, jumptable_80789360@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    bl fn_80342BC8
    b lbl_fn_8033A7A0_00000C64
    mr r3, r30
    bl fn_8034315C
    b lbl_fn_8033A7A0_00000C64
    mr r3, r30
    bl fn_8034228C
    b lbl_fn_8033A7A0_00000C64
    mr r3, r30
    bl fn_80342004
    b lbl_fn_8033A7A0_00000C64
    mr r3, r30
    bl fn_80342674
    b lbl_fn_8033A7A0_00000C64
    mr r3, r30
    bl fn_80342FB4
    b lbl_fn_8033A7A0_00000C64
    mr r3, r30
    bl fn_803435B8
    b lbl_fn_8033A7A0_00000C64
    mr r3, r30
    bl fn_80343B0C
    b lbl_fn_8033A7A0_00000C64
    mr r3, r30
    bl fn_80344060
lbl_fn_8033A7A0_00000C64:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8033AB88(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f3, lbl_80885238
    li r4, 0x79
    stw r0, 0x84(r1)
    lfs f0, lbl_80885260
    stw r31, 0x7c(r1)
    addi r31, r1, 0x2c
    stw r30, 0x78(r1)
    mr r30, r3
    lfs f2, 0x5fc(r3)
    psq_l f1, 0x5f4(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x600(r3), 0, 0
    stfs f2, 0x34(r1)
    lfs f2, 0x608(r3)
    lfs f4, 0x60c(r3)
    psq_st f1, 0xc(r31), 0, 0
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x538(r3)
    addi r3, r1, 0x48
    stfs f2, 0x40(r1)
    fmr f1, f0
    stfs f4, 0x44(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_8088525C
    addi r3, r1, 0x20
    lfs f3, 0xc(r1)
    lfs f0, 0x8(r1)
    fmuls f6, f3, f4
    lfs f3, 0x618(r30)
    fmuls f7, f0, f4
    lfs f0, 0x614(r30)
    lfs f5, 0x10(r1)
    fadds f3, f3, f6
    fadds f8, f0, f7
    lfs f0, 0x44(r1)
    stfs f3, 0x24(r1)
    fmuls f5, f5, f4
    lfs f3, 0x61c(r30)
    stfs f8, 0x20(r1)
    fadds f8, f3, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f8
    lfs f3, 0x30(r1)
    stfs f2, 0x34(r1)
    fsubs f3, f3, f4
    frsp f2, f2
    stfs f0, 0x60c(r30)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x5f4(r30), 0, 0
    psq_l f1, 0xc(r31), 0, 0
    stfs f2, 0x5fc(r30)
    lfs f2, 0x40(r1)
    psq_st f1, 0x600(r30), 0, 0
    stfs f2, 0x608(r30)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x84(r1)
    stfs f7, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f8, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8033ACB0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lfs f2, lbl_80885238
    li r4, 0x79
    stw r0, 0xb4(r1)
    li r0, 0x0
    lfs f3, lbl_80885288
    addi r5, r1, 0x8
    stw r31, 0xac(r1)
    mr r31, r3
    lfs f0, lbl_80885260
    stw r30, 0xa8(r1)
    addi r30, r1, 0x60
    stw r29, 0xa4(r1)
    stfs f2, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f0, 0x538(r3)
    addi r3, r1, 0x70
    stfs f2, 0x8(r1)
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f0
    stw r0, 0x5c(r1)
    stfs f2, 0x10(r1)
    stfs f2, 0x68(r1)
    stfs f3, 0x6c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_8088525C
    addi r3, r1, 0x50
    lfs f3, 0x3c(r1)
    lfs f0, 0x38(r1)
    fmuls f6, f3, f4
    lfs f3, 0x618(r31)
    fmuls f7, f0, f4
    lfs f0, 0x614(r31)
    lfs f5, 0x40(r1)
    fadds f3, f3, f6
    fadds f8, f0, f7
    lwz r0, 0x62c(r31)
    stfs f3, 0x54(r1)
    fmuls f5, f5, f4
    lfs f0, 0x61c(r31)
    stfs f8, 0x50(r1)
    fadds f2, f0, f5
    lfs f3, 0x620(r31)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r0, 0x0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x64(r1)
    stfs f7, 0x44(r1)
    fsubs f0, f0, f4
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x64(r1)
    beq lbl_fn_8033ACB0_00000EB8
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8033ACB0_00001058
lbl_fn_8033ACB0_00000EB8:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_8033ACB0_00001200
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
    beq lbl_fn_8033ACB0_0000104C
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8033ACB0_00000F1C
    mr r5, r0
lbl_fn_8033ACB0_00000F1C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8033ACB0_00001038
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8033ACB0_00001000
lbl_fn_8033ACB0_00000F34:
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
    bdnz lbl_fn_8033ACB0_00000F34
    andi. r5, r5, 0x3
    beq lbl_fn_8033ACB0_00001038
lbl_fn_8033ACB0_00001000:
    mtctr r5
lbl_fn_8033ACB0_00001004:
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
    bdnz lbl_fn_8033ACB0_00001004
lbl_fn_8033ACB0_00001038:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8033ACB0_0000104C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8033ACB0_0000104C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_8033ACB0_00001200
lbl_fn_8033ACB0_00001058:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_8033ACB0_00001200
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_8033ACB0_00001200
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
    beq lbl_fn_8033ACB0_000011F8
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_8033ACB0_000010C8
    mr r5, r0
lbl_fn_8033ACB0_000010C8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8033ACB0_000011E4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8033ACB0_000011AC
lbl_fn_8033ACB0_000010E0:
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
    bdnz lbl_fn_8033ACB0_000010E0
    andi. r5, r5, 0x3
    beq lbl_fn_8033ACB0_000011E4
lbl_fn_8033ACB0_000011AC:
    mtctr r5
lbl_fn_8033ACB0_000011B0:
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
    bdnz lbl_fn_8033ACB0_000011B0
lbl_fn_8033ACB0_000011E4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8033ACB0_000011F8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8033ACB0_000011F8:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_8033ACB0_00001200:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_8074A4C0@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x5c(r1)
    addi r4, r4, lbl_8074A4C0@l
    lfs f2, 0x68(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x327
    lfs f3, 0x6c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f0, lbl_8088525C
    stfs f2, 0xc(r6)
    stfs f3, 0x10(r6)
    lwz r6, 0x624(r31)
    stfs f0, 0x6c(r1)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033ACB0_0000126C
    li r5, 0x0
    b lbl_fn_8033ACB0_00001278
lbl_fn_8033ACB0_0000126C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_8033ACB0_00001278:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x2c
    lfs f3, 0xc(r5)
    addi r3, r1, 0x60
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    stfs f3, 0x2c(r1)
    cmpwi r0, 0x0
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x68(r1)
    beq lbl_fn_8033ACB0_000012BC
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8033ACB0_0000145C
lbl_fn_8033ACB0_000012BC:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_8033ACB0_00001604
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
    beq lbl_fn_8033ACB0_00001450
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8033ACB0_00001320
    mr r5, r0
lbl_fn_8033ACB0_00001320:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8033ACB0_0000143C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8033ACB0_00001404
lbl_fn_8033ACB0_00001338:
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
    bdnz lbl_fn_8033ACB0_00001338
    andi. r5, r5, 0x3
    beq lbl_fn_8033ACB0_0000143C
lbl_fn_8033ACB0_00001404:
    mtctr r5
lbl_fn_8033ACB0_00001408:
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
    bdnz lbl_fn_8033ACB0_00001408
lbl_fn_8033ACB0_0000143C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8033ACB0_00001450
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8033ACB0_00001450:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_8033ACB0_00001604
lbl_fn_8033ACB0_0000145C:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_8033ACB0_00001604
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_8033ACB0_00001604
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
    beq lbl_fn_8033ACB0_000015FC
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_8033ACB0_000014CC
    mr r5, r0
lbl_fn_8033ACB0_000014CC:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8033ACB0_000015E8
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8033ACB0_000015B0
lbl_fn_8033ACB0_000014E4:
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
    bdnz lbl_fn_8033ACB0_000014E4
    andi. r5, r5, 0x3
    beq lbl_fn_8033ACB0_000015E8
lbl_fn_8033ACB0_000015B0:
    mtctr r5
lbl_fn_8033ACB0_000015B4:
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
    bdnz lbl_fn_8033ACB0_000015B4
lbl_fn_8033ACB0_000015E8:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8033ACB0_000015FC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8033ACB0_000015FC:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_8033ACB0_00001604:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_8074A4C0@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x5c(r1)
    addi r4, r4, lbl_8074A4C0@l
    lfs f2, 0x68(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x32c
    lfs f3, 0x6c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f0, lbl_8088528C
    stfs f2, 0xc(r6)
    stfs f3, 0x10(r6)
    lwz r6, 0x624(r31)
    stfs f0, 0x6c(r1)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033ACB0_00001670
    li r5, 0x0
    b lbl_fn_8033ACB0_0000167C
lbl_fn_8033ACB0_00001670:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_8033ACB0_0000167C:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x20
    lfs f3, 0xc(r5)
    addi r3, r1, 0x60
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    stfs f3, 0x20(r1)
    cmpwi r0, 0x0
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x68(r1)
    beq lbl_fn_8033ACB0_000016C0
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8033ACB0_00001860
lbl_fn_8033ACB0_000016C0:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_8033ACB0_00001A08
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
    beq lbl_fn_8033ACB0_00001854
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8033ACB0_00001724
    mr r5, r0
lbl_fn_8033ACB0_00001724:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8033ACB0_00001840
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8033ACB0_00001808
lbl_fn_8033ACB0_0000173C:
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
    bdnz lbl_fn_8033ACB0_0000173C
    andi. r5, r5, 0x3
    beq lbl_fn_8033ACB0_00001840
lbl_fn_8033ACB0_00001808:
    mtctr r5
lbl_fn_8033ACB0_0000180C:
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
    bdnz lbl_fn_8033ACB0_0000180C
lbl_fn_8033ACB0_00001840:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8033ACB0_00001854
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8033ACB0_00001854:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_8033ACB0_00001A08
lbl_fn_8033ACB0_00001860:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_8033ACB0_00001A08
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_8033ACB0_00001A08
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
    beq lbl_fn_8033ACB0_00001A00
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_8033ACB0_000018D0
    mr r5, r0
lbl_fn_8033ACB0_000018D0:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8033ACB0_000019EC
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8033ACB0_000019B4
lbl_fn_8033ACB0_000018E8:
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
    bdnz lbl_fn_8033ACB0_000018E8
    andi. r5, r5, 0x3
    beq lbl_fn_8033ACB0_000019EC
lbl_fn_8033ACB0_000019B4:
    mtctr r5
lbl_fn_8033ACB0_000019B8:
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
    bdnz lbl_fn_8033ACB0_000019B8
lbl_fn_8033ACB0_000019EC:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8033ACB0_00001A00
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8033ACB0_00001A00:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_8033ACB0_00001A08:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_8074A4C0@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x5c(r1)
    addi r4, r4, lbl_8074A4C0@l
    lfs f2, 0x68(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x332
    lfs f3, 0x6c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f0, lbl_8088528C
    stfs f2, 0xc(r6)
    stfs f3, 0x10(r6)
    lwz r6, 0x624(r31)
    stfs f0, 0x6c(r1)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033ACB0_00001A74
    li r5, 0x0
    b lbl_fn_8033ACB0_00001A80
lbl_fn_8033ACB0_00001A74:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_8033ACB0_00001A80:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x14
    lfs f3, 0xc(r5)
    addi r3, r1, 0x60
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    stfs f3, 0x14(r1)
    cmpwi r0, 0x0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x68(r1)
    beq lbl_fn_8033ACB0_00001AC4
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8033ACB0_00001C64
lbl_fn_8033ACB0_00001AC4:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_8033ACB0_00001E0C
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
    beq lbl_fn_8033ACB0_00001C58
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8033ACB0_00001B28
    mr r5, r0
lbl_fn_8033ACB0_00001B28:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8033ACB0_00001C44
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8033ACB0_00001C0C
lbl_fn_8033ACB0_00001B40:
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
    bdnz lbl_fn_8033ACB0_00001B40
    andi. r5, r5, 0x3
    beq lbl_fn_8033ACB0_00001C44
lbl_fn_8033ACB0_00001C0C:
    mtctr r5
lbl_fn_8033ACB0_00001C10:
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
    bdnz lbl_fn_8033ACB0_00001C10
lbl_fn_8033ACB0_00001C44:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8033ACB0_00001C58
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8033ACB0_00001C58:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_8033ACB0_00001E0C
lbl_fn_8033ACB0_00001C64:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_8033ACB0_00001E0C
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_8033ACB0_00001E0C
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
    beq lbl_fn_8033ACB0_00001E04
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_8033ACB0_00001CD4
    mr r5, r0
lbl_fn_8033ACB0_00001CD4:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_8033ACB0_00001DF0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8033ACB0_00001DB8
lbl_fn_8033ACB0_00001CEC:
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
    bdnz lbl_fn_8033ACB0_00001CEC
    andi. r5, r5, 0x3
    beq lbl_fn_8033ACB0_00001DF0
lbl_fn_8033ACB0_00001DB8:
    mtctr r5
lbl_fn_8033ACB0_00001DBC:
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
    bdnz lbl_fn_8033ACB0_00001DBC
lbl_fn_8033ACB0_00001DF0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8033ACB0_00001E04
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8033ACB0_00001E04:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_8033ACB0_00001E0C:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x60
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x5c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x68(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r31)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
