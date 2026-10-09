#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800584B4(void);
extern void fn_80059240(void);
extern void fn_8006D7B0(void);
extern void fn_8006F17C(void);
extern void fn_80072914(void);
extern void fn_80074EC8(void);
extern void fn_800761A8(void);
extern void fn_800763FC(void);
extern void fn_80076760(void);
extern void fn_80076BE4(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_80615B60(void);
extern void fn_80615C40(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80617220(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177B0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80618350(void);
extern void fn_80618400(void);
extern void fn_80686A48(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80731140[];
extern u8 lbl_80731158[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_808809A0;
extern u32 lbl_808809A4;
extern u32 lbl_808809E0;

/* Function declarations */
void fn_80065060(void);
void fn_8006533C(void);
void fn_800656C8(void);
void fn_80065B34(void);
void fn_80066098(void);
void fn_80066A74(void);
void fn_80067480(void);
void fn_800678BC(void);
void fn_80067EB8(void);
void fn_80067FFC(void);
void fn_80068164(void);
void fn_800685E4(void);
void fn_80068B70(void);
void fn_80068BB0(void);
void fn_80068BF0(void);
void fn_80068C30(void);
void fn_80068C70(void);
void fn_80068CB0(void);
void fn_80068CF0(void);
void fn_80068D30(void);
void fn_80068D70(void);

asm void fn_80065060(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    li r3, 0x1
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    mr r28, r4
    bl fn_80615D20
    li r3, 0x0
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x4
    bl fn_80617340
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80065060_000001A4
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0xc(r31)
    clrlwi r5, r0, 16
    bl fn_80614790
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    b lbl_fn_80065060_00000194
lbl_fn_80065060_00000160:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x10
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
lbl_fn_80065060_00000194:
    lwz r0, 0x14(r31)
    cmpw r6, r0
    blt lbl_fn_80065060_00000160
    b lbl_fn_80065060_000002BC
lbl_fn_80065060_000001A4:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    lbz r30, 0x18(r31)
    li r5, 0x1
    mr r3, r29
    bl fn_80076760
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r29
    mr r5, r30
    li r4, 0xa
    bl fn_80076760
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
    addi r3, r28, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0xc(r31)
    clrlwi r5, r0, 16
    bl fn_80614790
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    b lbl_fn_80065060_000002B0
lbl_fn_80065060_00000274:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x10
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
lbl_fn_80065060_000002B0:
    lwz r0, 0x14(r31)
    cmpw r6, r0
    blt lbl_fn_80065060_00000274
lbl_fn_80065060_000002BC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8006533C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    li r3, 0x1
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    mr r28, r4
    bl fn_80615D20
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8006533C_000003D0
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_8006533C_0000042C
lbl_fn_8006533C_000003D0:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    lbz r30, 0x11(r31)
    li r5, 0x1
    mr r3, r29
    bl fn_80076760
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r29
    mr r5, r30
    li r4, 0xa
    bl fn_80076760
    addi r3, r28, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
lbl_fn_8006533C_0000042C:
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0xc(r31)
    bl fn_800763FC
    lbz r3, 0x10(r31)
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl fn_80617D50
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8006533C_000004DC
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    b lbl_fn_8006533C_00000524
lbl_fn_8006533C_000004DC:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
lbl_fn_8006533C_00000524:
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    li r0, 0x2
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_fn_8006533C_00000550:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8006533C_00000578
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_fn_8006533C_00000598
lbl_fn_8006533C_00000578:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_fn_8006533C_00000598:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8006533C_000005F0
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_fn_8006533C_00000610
lbl_fn_8006533C_000005F0:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_fn_8006533C_00000610:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_fn_8006533C_00000550
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800656C8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    mr r28, r4
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    bl fn_80617340
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_800656C8_00000764
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_800656C8_000007C0
lbl_fn_800656C8_00000764:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    lbz r30, 0x11(r31)
    li r5, 0x1
    mr r3, r29
    bl fn_80076760
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r29
    mr r5, r30
    li r4, 0xa
    bl fn_80076760
    addi r3, r28, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
lbl_fn_800656C8_000007C0:
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0xc(r31)
    bl fn_800763FC
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800656C8_00000800
    cmpwi r0, 0x1
    beq lbl_fn_800656C8_00000824
    cmpwi r0, 0x2
    beq lbl_fn_800656C8_00000848
    cmpwi r0, 0x3
    beq lbl_fn_800656C8_0000086C
    cmpwi r0, 0x4
    beq lbl_fn_800656C8_00000890
    b lbl_fn_800656C8_000008B0
lbl_fn_800656C8_00000800:
    lbz r3, 0x10(r31)
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl fn_80617D50
    b lbl_fn_800656C8_000008B0
lbl_fn_800656C8_00000824:
    lbz r3, 0x10(r31)
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl fn_80617D50
    b lbl_fn_800656C8_000008B0
lbl_fn_800656C8_00000848:
    lbz r3, 0x10(r31)
    li r4, 0x3
    li r5, 0x1
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl fn_80617D50
    b lbl_fn_800656C8_000008B0
lbl_fn_800656C8_0000086C:
    lbz r3, 0x10(r31)
    li r4, 0x0
    li r5, 0x5
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl fn_80617D50
    b lbl_fn_800656C8_000008B0
lbl_fn_800656C8_00000890:
    lbz r3, 0x10(r31)
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl fn_80617D50
lbl_fn_800656C8_000008B0:
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_800656C8_00000930
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    b lbl_fn_800656C8_00000978
lbl_fn_800656C8_00000930:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
lbl_fn_800656C8_00000978:
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    li r0, 0x2
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_fn_800656C8_0000099C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_800656C8_000009C4
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_fn_800656C8_000009E4
lbl_fn_800656C8_000009C4:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_fn_800656C8_000009E4:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_800656C8_00000A3C
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_fn_800656C8_00000A5C
lbl_fn_800656C8_00000A3C:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_fn_800656C8_00000A5C:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_fn_800656C8_0000099C
    lbz r3, 0x10(r31)
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    bl fn_80617D50
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80065B34(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    mr r28, r4
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xc
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80065B34_00000CEC
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_80065B34_00000D48
lbl_fn_80065B34_00000CEC:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r29, lbl_8087EEE0
    li r4, 0x8
    lbz r30, 0x14(r31)
    li r5, 0x1
    mr r3, r29
    bl fn_80076760
    mr r3, r29
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r29
    mr r5, r30
    li r4, 0xa
    bl fn_80076760
    addi r3, r28, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
lbl_fn_80065B34_00000D48:
    lwz r4, 0xc(r31)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_fn_80065B34_00000D5C
    b lbl_fn_80065B34_00000D64
lbl_fn_80065B34_00000D5C:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_fn_80065B34_00000D64:
    li r5, 0x0
    bl fn_800763FC
    lwz r4, 0x10(r31)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_fn_80065B34_00000D80
    b lbl_fn_80065B34_00000D88
lbl_fn_80065B34_00000D80:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_fn_80065B34_00000D88:
    li r5, 0x1
    bl fn_800763FC
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80065B34_00000DC0
    cmpwi r0, 0x1
    beq lbl_fn_80065B34_00000DD8
    cmpwi r0, 0x2
    beq lbl_fn_80065B34_00000DF0
    cmpwi r0, 0x3
    beq lbl_fn_80065B34_00000E08
    cmpwi r0, 0x4
    beq lbl_fn_80065B34_00000E20
    b lbl_fn_80065B34_00000E34
lbl_fn_80065B34_00000DC0:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_80065B34_00000E34
lbl_fn_80065B34_00000DD8:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_80065B34_00000E34
lbl_fn_80065B34_00000DF0:
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_80065B34_00000E34
lbl_fn_80065B34_00000E08:
    li r3, 0x1
    li r4, 0x0
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_80065B34_00000E34
lbl_fn_80065B34_00000E20:
    li r3, 0x1
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl fn_80617D50
lbl_fn_80065B34_00000E34:
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xe
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80065B34_00000ED8
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    b lbl_fn_80065B34_00000F38
lbl_fn_80065B34_00000ED8:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
lbl_fn_80065B34_00000F38:
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    li r0, 0x4
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_fn_80065B34_00000F60:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80065B34_00000F88
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_fn_80065B34_00000FA8
lbl_fn_80065B34_00000F88:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_fn_80065B34_00000FA8:
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x20
    lfs f1, 0x1c(r3)
    lfs f0, 0x18(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_fn_80065B34_00000F60
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80066098(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    lis r9, lbl_80731140@ha
    lwzu r8, lbl_80731140@l(r9)
    stw r0, 0x194(r1)
    lis r10, 0x4330
    lwz r7, 0x4(r9)
    lis r5, lbl_80731158@ha
    stw r8, 0x28(r1)
    li r0, 0x3
    lwz r6, 0x8(r9)
    addi r8, r1, 0xc8
    stw r31, 0x18c(r1)
    mr r31, r4
    lfs f3, lbl_808809A4
    stw r7, 0x2c(r1)
    addi r7, r1, 0x88
    lfs f6, lbl_808809A0
    stw r30, 0x188(r1)
    mr r30, r3
    lfs f0, 0x28(r1)
    lfs f1, 0x2c(r1)
    fmuls f2, f0, f3
    stw r6, 0x30(r1)
    fmuls f1, f1, f3
    lwz r3, 0xc(r9)
    lfs f0, 0x30(r1)
    stw r29, 0x184(r1)
    fmuls f0, f0, f3
    lfs f5, lbl_808809E0
    stw r28, 0x180(r1)
    lfd f4, lbl_80731158@l(r5)
    stw r10, 0x108(r1)
    stw r10, 0x110(r1)
    stw r3, 0x34(r1)
    stfs f6, 0xf4(r1)
    stfs f6, 0xe4(r1)
    stfs f6, 0xd4(r1)
    stfs f3, 0x104(r1)
    stfs f2, 0xc8(r1)
    stfs f1, 0xd8(r1)
    stfs f0, 0xe8(r1)
    stfs f6, 0xf8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xdc(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0xfc(r1)
    stfs f2, 0xd0(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xf0(r1)
    stfs f6, 0x100(r1)
    mtctr r0
lbl_fn_80066098_00001108:
    lfs f8, 0xc(r8)
    lfs f7, 0x8(r8)
    lfs f6, 0x4(r8)
    fmuls f0, f5, f8
    lfs f3, 0x0(r8)
    fmuls f1, f5, f7
    fmuls f2, f5, f6
    stfs f3, 0x38(r1)
    fmuls f3, f5, f3
    fctiwz f1, f1
    stfs f6, 0x3c(r1)
    fctiwz f2, f2
    fctiwz f3, f3
    stfd f1, 0x128(r1)
    fctiwz f0, f0
    stfd f3, 0x118(r1)
    addi r8, r8, 0x10
    lwz r3, 0x12c(r1)
    stfd f2, 0x120(r1)
    lwz r5, 0x11c(r1)
    stfd f0, 0x130(r1)
    lwz r4, 0x124(r1)
    lwz r0, 0x134(r1)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r3, 0x16(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x24(r1)
    lbz r0, 0x24(r1)
    stw r0, 0x10c(r1)
    lbz r0, 0x25(r1)
    stw r0, 0x114(r1)
    lfd f0, 0x108(r1)
    lbz r0, 0x26(r1)
    stw r0, 0x10c(r1)
    fsubs f0, f0, f4
    lfd f2, 0x110(r1)
    lbz r0, 0x27(r1)
    fdivs f3, f0, f5
    stw r0, 0x114(r1)
    lfd f1, 0x108(r1)
    lfd f0, 0x110(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    fsubs f2, f2, f4
    stfs f3, 0x0(r7)
    fsubs f1, f1, f4
    fsubs f0, f0, f4
    stfs f3, 0x48(r1)
    fdivs f2, f2, f5
    stfs f2, 0x4(r7)
    fdivs f1, f1, f5
    stfs f2, 0x4c(r1)
    stfs f1, 0x8(r7)
    fdivs f0, f0, f5
    stfs f1, 0x50(r1)
    stfs f0, 0xc(r7)
    addi r7, r7, 0x10
    stfs f0, 0x54(r1)
    bdnz lbl_fn_80066098_00001108
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x4
    bl fn_806179E0
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0xc(r30)
    bl fn_800763FC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    lfs f4, lbl_808809E0
    addi r4, r1, 0x20
    lfs f0, 0x88(r1)
    li r3, 0x0
    lfs f2, 0x8c(r1)
    fmuls f3, f4, f0
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x130(r1)
    fctiwz f0, f0
    stfd f2, 0x128(r1)
    lwz r7, 0x134(r1)
    stfd f1, 0x120(r1)
    lwz r6, 0x12c(r1)
    stfd f0, 0x118(r1)
    lwz r5, 0x124(r1)
    lwz r0, 0x11c(r1)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x20(r1)
    bl fn_806175F0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x1c
    lfs f0, 0x98(r1)
    li r3, 0x1
    lfs f2, 0x9c(r1)
    fmuls f3, f4, f0
    lfs f1, 0xa0(r1)
    lfs f0, 0xa4(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x138(r1)
    fctiwz f0, f0
    stfd f2, 0x140(r1)
    lwz r7, 0x13c(r1)
    stfd f1, 0x148(r1)
    lwz r6, 0x144(r1)
    stfd f0, 0x150(r1)
    lwz r5, 0x14c(r1)
    lwz r0, 0x154(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x1c(r1)
    bl fn_806175F0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x18
    lfs f0, 0xa8(r1)
    li r3, 0x2
    lfs f2, 0xac(r1)
    fmuls f3, f4, f0
    lfs f1, 0xb0(r1)
    lfs f0, 0xb4(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x158(r1)
    fctiwz f0, f0
    stfd f2, 0x160(r1)
    lwz r7, 0x15c(r1)
    stfd f1, 0x168(r1)
    lwz r6, 0x164(r1)
    stfd f0, 0x170(r1)
    lwz r5, 0x16c(r1)
    lwz r0, 0x174(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_80617730
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x2
    bl fn_80617730
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x1
    li r4, 0xd
    bl fn_80617650
    li r3, 0x1
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_80617220
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    bl fn_806176F0
    li r3, 0x2
    li r4, 0xe
    bl fn_80617650
    li r3, 0x2
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x2
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl fn_80617420
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x2
    bl fn_80617220
    li r3, 0x3
    li r4, 0x3
    li r5, 0x3
    bl fn_806176F0
    li r3, 0x3
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x3
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x3
    bl fn_80617220
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80066098_0000170C
    lfs f1, lbl_808809A0
    addi r3, r1, 0x58
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x84(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x5c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x58(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_80066098_00001768
lbl_fn_80066098_0000170C:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r28, lbl_8087EEE0
    li r4, 0x8
    lbz r29, 0x11(r30)
    li r5, 0x1
    mr r3, r28
    bl fn_80076760
    mr r3, r28
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r28
    mr r5, r29
    li r4, 0xa
    bl fn_80076760
    addi r3, r31, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
lbl_fn_80066098_00001768:
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80066098_000017E8
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    b lbl_fn_80066098_00001830
lbl_fn_80066098_000017E8:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
lbl_fn_80066098_00001830:
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    li r0, 0x2
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_fn_80066098_0000185C:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80066098_00001884
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_fn_80066098_000018A4
lbl_fn_80066098_00001884:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_fn_80066098_000018A4:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r30)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80066098_000018FC
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_fn_80066098_0000191C
lbl_fn_80066098_000018FC:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_fn_80066098_0000191C:
    lwz r0, 0x8(r30)
    addi r6, r6, 0x1
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r30)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_fn_80066098_0000185C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    lwz r0, 0x194(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    lwz r28, 0x180(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80066A74(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    lis r0, 0x4330
    stw r31, 0x18c(r1)
    mr r31, r4
    stw r30, 0x188(r1)
    mr r30, r3
    stw r29, 0x184(r1)
    stw r28, 0x180(r1)
    stw r0, 0x108(r1)
    lwz r3, lbl_8087EEE0
    stw r0, 0x110(r1)
    bl fn_800761A8
    lis r7, lbl_80731140@ha
    lwzu r4, lbl_80731140@l(r7)
    stw r4, 0x28(r1)
    lis r3, lbl_80731158@ha
    lwz r6, 0x4(r7)
    li r0, 0x3
    lwz r5, 0x8(r7)
    addi r8, r1, 0xc8
    lfs f3, lbl_808809A4
    addi r9, r1, 0x88
    stw r6, 0x2c(r1)
    lfs f0, 0x28(r1)
    lfs f1, 0x2c(r1)
    lfs f6, lbl_808809A0
    fmuls f2, f0, f3
    fmuls f1, f1, f3
    stw r5, 0x30(r1)
    lwz r4, 0xc(r7)
    lfs f0, 0x30(r1)
    stw r4, 0x34(r1)
    fmuls f0, f0, f3
    lfs f5, lbl_808809E0
    stfs f6, 0xf4(r1)
    lfd f4, lbl_80731158@l(r3)
    stfs f6, 0xe4(r1)
    stfs f6, 0xd4(r1)
    stfs f3, 0x104(r1)
    stfs f2, 0xc8(r1)
    stfs f1, 0xd8(r1)
    stfs f0, 0xe8(r1)
    stfs f6, 0xf8(r1)
    stfs f2, 0xcc(r1)
    stfs f1, 0xdc(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0xfc(r1)
    stfs f2, 0xd0(r1)
    stfs f1, 0xe0(r1)
    stfs f0, 0xf0(r1)
    stfs f6, 0x100(r1)
    mtctr r0
lbl_fn_80066A74_00001AEC:
    lfs f8, 0xc(r8)
    lfs f7, 0x8(r8)
    lfs f6, 0x4(r8)
    fmuls f0, f5, f8
    lfs f3, 0x0(r8)
    fmuls f1, f5, f7
    fmuls f2, f5, f6
    stfs f3, 0x38(r1)
    fmuls f3, f5, f3
    fctiwz f1, f1
    stfs f6, 0x3c(r1)
    fctiwz f2, f2
    fctiwz f3, f3
    stfd f1, 0x128(r1)
    fctiwz f0, f0
    stfd f3, 0x118(r1)
    addi r8, r8, 0x10
    lwz r3, 0x12c(r1)
    stfd f2, 0x120(r1)
    lwz r5, 0x11c(r1)
    stfd f0, 0x130(r1)
    lwz r4, 0x124(r1)
    lwz r0, 0x134(r1)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r3, 0x16(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x24(r1)
    lbz r0, 0x24(r1)
    stw r0, 0x10c(r1)
    lbz r0, 0x25(r1)
    stw r0, 0x114(r1)
    lfd f0, 0x108(r1)
    lbz r0, 0x26(r1)
    stw r0, 0x10c(r1)
    fsubs f0, f0, f4
    lfd f2, 0x110(r1)
    lbz r0, 0x27(r1)
    fdivs f3, f0, f5
    stw r0, 0x114(r1)
    lfd f1, 0x108(r1)
    lfd f0, 0x110(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    fsubs f2, f2, f4
    stfs f3, 0x0(r9)
    fsubs f1, f1, f4
    fsubs f0, f0, f4
    stfs f3, 0x48(r1)
    fdivs f2, f2, f5
    stfs f2, 0x4(r9)
    fdivs f1, f1, f5
    stfs f2, 0x4c(r1)
    stfs f1, 0x8(r9)
    fdivs f0, f0, f5
    stfs f1, 0x50(r1)
    stfs f0, 0xc(r9)
    addi r9, r9, 0x10
    stfs f0, 0x54(r1)
    bdnz lbl_fn_80066A74_00001AEC
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x4
    bl fn_806179E0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x20
    lfs f0, 0x88(r1)
    li r3, 0x0
    lfs f2, 0x8c(r1)
    fmuls f3, f4, f0
    lfs f1, 0x90(r1)
    lfs f0, 0x94(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x130(r1)
    fctiwz f0, f0
    stfd f2, 0x128(r1)
    lwz r7, 0x134(r1)
    stfd f1, 0x120(r1)
    lwz r6, 0x12c(r1)
    stfd f0, 0x118(r1)
    lwz r5, 0x124(r1)
    lwz r0, 0x11c(r1)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x20(r1)
    bl fn_806175F0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x1c
    lfs f0, 0x98(r1)
    li r3, 0x1
    lfs f2, 0x9c(r1)
    fmuls f3, f4, f0
    lfs f1, 0xa0(r1)
    lfs f0, 0xa4(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x138(r1)
    fctiwz f0, f0
    stfd f2, 0x140(r1)
    lwz r7, 0x13c(r1)
    stfd f1, 0x148(r1)
    lwz r6, 0x144(r1)
    stfd f0, 0x150(r1)
    lwz r5, 0x14c(r1)
    lwz r0, 0x154(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x1c(r1)
    bl fn_806175F0
    lfs f4, lbl_808809E0
    addi r4, r1, 0x18
    lfs f0, 0xa8(r1)
    li r3, 0x2
    lfs f2, 0xac(r1)
    fmuls f3, f4, f0
    lfs f1, 0xb0(r1)
    lfs f0, 0xb4(r1)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x158(r1)
    fctiwz f0, f0
    stfd f2, 0x160(r1)
    lwz r7, 0x15c(r1)
    stfd f1, 0x168(r1)
    lwz r6, 0x164(r1)
    stfd f0, 0x170(r1)
    lwz r5, 0x16c(r1)
    lwz r0, 0x174(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_80617730
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x2
    bl fn_80617730
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x1
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x1
    li r4, 0xd
    bl fn_80617650
    li r3, 0x1
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x1
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_80617220
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    bl fn_806176F0
    li r3, 0x2
    li r4, 0xe
    bl fn_80617650
    li r3, 0x2
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x2
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x1
    bl fn_80617420
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x2
    bl fn_80617220
    li r3, 0x3
    li r4, 0x3
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x3
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x3
    li r4, 0x1
    li r5, 0x1
    li r6, 0x4
    bl fn_80617880
    li r3, 0x3
    bl fn_80617220
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80066A74_000020E8
    lfs f1, lbl_808809A0
    addi r3, r1, 0x58
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x84(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x5c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x58(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_80066A74_00002144
lbl_fn_80066A74_000020E8:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r28, lbl_8087EEE0
    li r4, 0x8
    lbz r29, 0x14(r30)
    li r5, 0x1
    mr r3, r28
    bl fn_80076760
    mr r3, r28
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r28
    mr r5, r29
    li r4, 0xa
    bl fn_80076760
    addi r3, r31, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
lbl_fn_80066A74_00002144:
    lwz r4, 0xc(r30)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_fn_80066A74_00002158
    b lbl_fn_80066A74_00002160
lbl_fn_80066A74_00002158:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_fn_80066A74_00002160:
    li r5, 0x0
    bl fn_800763FC
    lwz r4, 0x10(r30)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_fn_80066A74_0000217C
    b lbl_fn_80066A74_00002184
lbl_fn_80066A74_0000217C:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_fn_80066A74_00002184:
    li r5, 0x1
    bl fn_800763FC
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xe
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80066A74_00002244
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    b lbl_fn_80066A74_000022A4
lbl_fn_80066A74_00002244:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
lbl_fn_80066A74_000022A4:
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    li r0, 0x4
    li r5, 0x0
    lis r4, 0xcc01
    mtctr r0
lbl_fn_80066A74_000022CC:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80066A74_000022F4
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    b lbl_fn_80066A74_00002314
lbl_fn_80066A74_000022F4:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
lbl_fn_80066A74_00002314:
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r30)
    add r3, r0, r5
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    lwz r0, 0x8(r30)
    add r3, r0, r5
    addi r5, r5, 0x20
    lfs f1, 0x1c(r3)
    lfs f0, 0x18(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    bdnz lbl_fn_80066A74_000022CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    lwz r0, 0x194(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    lwz r28, 0x180(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80067480(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r31, lbl_8087EEE0
    mr r30, r3
    mr r27, r4
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xc
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80067480_00002594
    lfs f7, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f7, 0x34(r1)
    stfs f7, 0x2c(r1)
    stfs f7, 0x28(r1)
    stfs f7, 0x24(r1)
    stfs f7, 0x20(r1)
    stfs f7, 0x18(r1)
    stfs f7, 0x14(r1)
    stfs f7, 0x10(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_80067480_000025F0
lbl_fn_80067480_00002594:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r28, lbl_8087EEE0
    li r4, 0x8
    lbz r29, 0x2c(r30)
    li r5, 0x1
    mr r3, r28
    bl fn_80076760
    mr r3, r28
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r28
    mr r5, r29
    li r4, 0xa
    bl fn_80076760
    addi r3, r27, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
lbl_fn_80067480_000025F0:
    lbz r0, 0x2d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80067480_00002620
    mr r3, r31
    li r4, 0x1
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_80067480_00002640
lbl_fn_80067480_00002620:
    mr r3, r31
    li r4, 0x0
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
lbl_fn_80067480_00002640:
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80067480_000026C0
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    b lbl_fn_80067480_00002744
lbl_fn_80067480_000026C0:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    lwz r3, lbl_8087EEC8
    psq_l f2, 0x38(r30), 0, 0
    addis r3, r3, 0x3
    psq_l f3, 0x40(r30), 0, 0
    psq_l f4, 0x48(r30), 0, 0
    addi r3, r3, 0x3268
    psq_l f5, 0x50(r30), 0, 0
    psq_l f6, 0x58(r30), 0, 0
    psq_l f1, 0x30(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_80067480_00002744:
    lwz r0, 0x60(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80067480_00002760
    lwz r0, 0xc(r30)
    ori r0, r0, 0x2
    stw r0, 0xc(r30)
    b lbl_fn_80067480_0000278C
lbl_fn_80067480_00002760:
    cmpwi r0, 0x2
    bne lbl_fn_80067480_00002778
    lwz r0, 0xc(r30)
    ori r0, r0, 0x8
    stw r0, 0xc(r30)
    b lbl_fn_80067480_0000278C
lbl_fn_80067480_00002778:
    cmpwi r0, 0x3
    bne lbl_fn_80067480_0000278C
    lwz r0, 0xc(r30)
    ori r0, r0, 0x10
    stw r0, 0xc(r30)
lbl_fn_80067480_0000278C:
    lwz r3, lbl_8087EEC8
    mr r4, r27
    lfs f1, 0x14(r30)
    lfs f2, 0x18(r30)
    lfs f3, 0x1c(r30)
    lfs f4, 0x20(r30)
    lwz r5, 0x10(r30)
    lwz r6, 0x24(r30)
    lwz r7, 0xc(r30)
    lwz r8, 0x8(r30)
    lfs f5, 0x28(r30)
    lwz r9, 0x6c(r30)
    lfs f6, 0x64(r30)
    lfs f7, 0x68(r30)
    bl fn_8006D7B0
    lwz r5, lbl_8087EEC8
    li r3, 0x0
    lfs f7, lbl_808809A0
    li r4, 0x0
    addis r6, r5, 0x3
    lfs f0, lbl_808809A4
    stfs f7, 0x3294(r6)
    li r5, 0x0
    stfs f7, 0x328c(r6)
    stfs f7, 0x3288(r6)
    stfs f7, 0x3284(r6)
    stfs f7, 0x3280(r6)
    stfs f7, 0x3278(r6)
    stfs f7, 0x3274(r6)
    stfs f7, 0x3270(r6)
    stfs f7, 0x326c(r6)
    stfs f0, 0x3290(r6)
    stfs f0, 0x327c(r6)
    stfs f0, 0x3268(r6)
    bl fn_806176F0
    lbz r0, 0x2d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80067480_00002844
    mr r3, r31
    li r4, 0x0
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
lbl_fn_80067480_00002844:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800678BC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    bl _savegpr_20
    mr r27, r3
    lwz r3, 0x10(r3)
    mr r28, r4
    bl fn_80686A48
    lfs f7, 0x74(r27)
    li r30, 0x0
    lfs f0, 0x78(r27)
    mr r23, r3
    lwz r4, lbl_8087EEC8
    mr r29, r30
    fmuls f29, f7, f0
    lfs f9, 0x14(r27)
    lfs f8, 0x70(r27)
    addis r31, r4, 0x3
    lfs f0, 0x1c(r27)
    li r26, 0x0
    fsubs f7, f7, f29
    stwu r3, 0x32a0(r31)
    fsubs f30, f9, f8
    lfs f26, lbl_808809E0
    lfs f27, lbl_808809A4
    li r21, 0x0
    fsubs f28, f7, f0
    lfs f31, lbl_808809A0
    li r22, 0x0
    lis r25, 0xff00
    b lbl_fn_800678BC_000029CC
lbl_fn_800678BC_0000290C:
    lwz r3, 0x10(r27)
    fcmpo cr0, f31, f30
    lhzx r20, r3, r22
    cror eq, lt, eq
    bne lbl_fn_800678BC_000029A4
    lfs f7, 0x74(r27)
    lfs f0, 0x1c(r27)
    fsubs f0, f7, f0
    fcmpo cr0, f30, f0
    cror eq, lt, eq
    bne lbl_fn_800678BC_000029A4
    fcmpo cr0, f30, f29
    add r24, r31, r26
    bge lbl_fn_800678BC_0000295C
    fdivs f0, f30, f29
    fmuls f1, f26, f0
    bl fn_80695D84
    slwi r0, r3, 24
    stw r0, 0xc(r24)
    b lbl_fn_800678BC_00002988
lbl_fn_800678BC_0000295C:
    fcmpo cr0, f28, f30
    bge lbl_fn_800678BC_00002984
    fsubs f0, f30, f28
    fdivs f0, f0, f29
    fsubs f0, f27, f0
    fmuls f1, f26, f0
    bl fn_80695D84
    slwi r0, r3, 24
    stw r0, 0xc(r24)
    b lbl_fn_800678BC_00002988
lbl_fn_800678BC_00002984:
    stw r25, 0xc(r24)
lbl_fn_800678BC_00002988:
    lfs f0, 0x70(r27)
    addi r30, r30, 0x1
    addi r26, r26, 0xc
    fadds f0, f30, f0
    stfs f0, 0x8(r24)
    sth r20, 0x4(r24)
    sth r29, 0x6(r24)
lbl_fn_800678BC_000029A4:
    lwz r0, 0xc(r27)
    mr r4, r20
    lwz r3, lbl_8087EEC8
    lfs f1, 0x1c(r27)
    clrlwi r5, r0, 31
    lwz r6, 0x8(r27)
    bl fn_8006F17C
    fadds f30, f30, f1
    addi r22, r22, 0x2
    addi r21, r21, 0x1
lbl_fn_800678BC_000029CC:
    cmpw r21, r23
    blt lbl_fn_800678BC_0000290C
    lwz r29, lbl_8087EEE0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xc
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r0, 0x4(r27)
    cmpwi r0, 0x1
    bne lbl_fn_800678BC_00002B2C
    lfs f7, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f7, 0x34(r1)
    stfs f7, 0x2c(r1)
    stfs f7, 0x28(r1)
    stfs f7, 0x24(r1)
    stfs f7, 0x20(r1)
    stfs f7, 0x18(r1)
    stfs f7, 0x14(r1)
    stfs f7, 0x10(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_800678BC_00002B88
lbl_fn_800678BC_00002B2C:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r22, lbl_8087EEE0
    li r4, 0x8
    lbz r23, 0x2c(r27)
    li r5, 0x1
    mr r3, r22
    bl fn_80076760
    mr r3, r22
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r22
    mr r5, r23
    li r4, 0xa
    bl fn_80076760
    addi r3, r28, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
lbl_fn_800678BC_00002B88:
    lbz r0, 0x2d(r27)
    cmpwi r0, 0x0
    beq lbl_fn_800678BC_00002BB8
    mr r3, r29
    li r4, 0x1
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_800678BC_00002BD8
lbl_fn_800678BC_00002BB8:
    mr r3, r29
    li r4, 0x0
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
lbl_fn_800678BC_00002BD8:
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r27)
    cmpwi r0, 0x1
    bne lbl_fn_800678BC_00002C58
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    b lbl_fn_800678BC_00002CDC
lbl_fn_800678BC_00002C58:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    lwz r3, lbl_8087EEC8
    psq_l f2, 0x38(r27), 0, 0
    addis r3, r3, 0x3
    psq_l f3, 0x40(r27), 0, 0
    psq_l f4, 0x48(r27), 0, 0
    addi r3, r3, 0x3268
    psq_l f5, 0x50(r27), 0, 0
    psq_l f6, 0x58(r27), 0, 0
    psq_l f1, 0x30(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_800678BC_00002CDC:
    lwz r0, 0x60(r27)
    cmpwi r0, 0x1
    bne lbl_fn_800678BC_00002CF8
    lwz r0, 0xc(r27)
    ori r0, r0, 0x2
    stw r0, 0xc(r27)
    b lbl_fn_800678BC_00002D24
lbl_fn_800678BC_00002CF8:
    cmpwi r0, 0x2
    bne lbl_fn_800678BC_00002D10
    lwz r0, 0xc(r27)
    ori r0, r0, 0x8
    stw r0, 0xc(r27)
    b lbl_fn_800678BC_00002D24
lbl_fn_800678BC_00002D10:
    cmpwi r0, 0x3
    bne lbl_fn_800678BC_00002D24
    lwz r0, 0xc(r27)
    ori r0, r0, 0x10
    stw r0, 0xc(r27)
lbl_fn_800678BC_00002D24:
    li r20, 0x0
    li r26, 0x0
    b lbl_fn_800678BC_00002D8C
lbl_fn_800678BC_00002D30:
    add r4, r31, r26
    lwz r3, 0x24(r27)
    lwz r0, 0x6c(r27)
    addi r5, r4, 0x4
    clrlwi r6, r3, 8
    lwz r7, 0xc(r4)
    clrlwi r0, r0, 8
    lfs f1, 0x8(r4)
    lwz r3, lbl_8087EEC8
    or r6, r6, r7
    or r9, r0, r7
    lfs f2, 0x18(r27)
    lfs f3, 0x1c(r27)
    mr r4, r28
    lfs f4, 0x20(r27)
    lwz r7, 0xc(r27)
    lwz r8, 0x8(r27)
    lfs f5, 0x28(r27)
    lfs f6, 0x64(r27)
    lfs f7, 0x68(r27)
    bl fn_8006D7B0
    addi r20, r20, 0x1
    addi r26, r26, 0xc
lbl_fn_800678BC_00002D8C:
    cmpw r20, r30
    blt lbl_fn_800678BC_00002D30
    lwz r5, lbl_8087EEC8
    li r3, 0x0
    lfs f7, lbl_808809A0
    li r4, 0x0
    addis r6, r5, 0x3
    lfs f0, lbl_808809A4
    stfs f7, 0x3294(r6)
    li r5, 0x0
    stfs f7, 0x328c(r6)
    stfs f7, 0x3288(r6)
    stfs f7, 0x3284(r6)
    stfs f7, 0x3280(r6)
    stfs f7, 0x3278(r6)
    stfs f7, 0x3274(r6)
    stfs f7, 0x3270(r6)
    stfs f7, 0x326c(r6)
    stfs f0, 0x3290(r6)
    stfs f0, 0x327c(r6)
    stfs f0, 0x3268(r6)
    bl fn_806176F0
    lbz r0, 0x2d(r27)
    cmpwi r0, 0x0
    beq lbl_fn_800678BC_00002E10
    mr r3, r29
    li r4, 0x0
    bl fn_80072914
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
lbl_fn_800678BC_00002E10:
    addi r11, r1, 0x70
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    bl _restgpr_20
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80067EB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x2
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    li r4, 0x6
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r3, lbl_8087EEE0
    bl fn_80076760
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x0
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x4
    bl fn_80617340
    li r31, 0x0
    stb r31, 0xc(r1)
    addi r4, r1, 0x14
    li r3, 0x0
    stb r31, 0xd(r1)
    stb r31, 0xe(r1)
    stb r31, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x14(r1)
    bl fn_80615B60
    li r0, 0xff
    stb r31, 0x8(r1)
    addi r4, r1, 0x10
    li r3, 0x0
    stb r0, 0x9(r1)
    stb r31, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80615C40
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    addi r3, r30, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    lwz r3, 0x14(r29)
    li r6, -0x1
    lwz r4, 0xc(r29)
    lwz r5, 0x10(r29)
    bl fn_800584B4
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80067FFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x2
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    li r4, 0x6
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r3, lbl_8087EEE0
    bl fn_80076760
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x0
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x4
    bl fn_80617340
    li r31, 0x0
    stb r31, 0xc(r1)
    addi r4, r1, 0x14
    li r3, 0x0
    stb r31, 0xd(r1)
    stb r31, 0xe(r1)
    stb r31, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x14(r1)
    bl fn_80615B60
    li r0, 0xff
    stb r31, 0x8(r1)
    addi r4, r1, 0x10
    li r3, 0x0
    stb r0, 0x9(r1)
    stb r31, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80615C40
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    addi r3, r30, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    lwz r3, 0x14(r29)
    li r6, -0x1
    lwz r4, 0xc(r29)
    lwz r5, 0x10(r29)
    bl fn_80059240
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80068164(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x0
    lwz r30, lbl_8087EEE0
    mr r3, r30
    bl fn_80072914
    mr r3, r30
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r5, 0x20(r31)
    mr r3, r30
    li r4, 0x8
    bl fn_80076760
    mr r3, r30
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r30
    li r4, 0xa
    li r5, 0x0
    bl fn_80076760
    addi r3, r29, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80068164_000031C8
    lwz r3, lbl_8087EEB0
    addi r0, r3, 0x10
    stw r0, 0x1c(r31)
lbl_fn_80068164_000031C8:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80068164_00003344
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xc
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0x18(r31)
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    li r5, 0x1
    lwz r4, 0x1c(r31)
    bl fn_800763FC
    b lbl_fn_80068164_00003424
lbl_fn_80068164_00003344:
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xc
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0x1c(r31)
    bl fn_800763FC
lbl_fn_80068164_00003424:
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80074EC8
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    bl fn_80076BE4
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0xc(r31)
    clrlwi r5, r0, 16
    bl fn_80614790
    li r6, 0x0
    li r5, 0x0
    lis r4, 0xcc01
    b lbl_fn_80068164_0000353C
lbl_fn_80068164_000034E8:
    lwz r0, 0x8(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    lfsx f0, r5, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f2, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r4)
    lwz r0, 0x8(r31)
    add r3, r0, r5
    addi r5, r5, 0x18
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r4)
    stfs f1, -0x8000(r4)
lbl_fn_80068164_0000353C:
    lwz r0, 0x14(r31)
    cmpw r6, r0
    blt lbl_fn_80068164_000034E8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800685E4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r30, r3
    lwz r3, lbl_8087EEE0
    mr r29, r4
    bl fn_800761A8
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xc
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_800685E4_00003794
    lfs f1, lbl_808809A0
    addi r3, r1, 0x8
    lfs f0, lbl_808809A4
    li r4, 0x0
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x8(r1)
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    b lbl_fn_800685E4_000037F0
lbl_fn_800685E4_00003794:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r27, lbl_8087EEE0
    li r4, 0x8
    lbz r28, 0x30(r30)
    li r5, 0x1
    mr r3, r27
    bl fn_80076760
    mr r3, r27
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r27
    mr r5, r28
    li r4, 0xa
    bl fn_80076760
    addi r3, r29, 0x15c
    li r4, 0x0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
lbl_fn_800685E4_000037F0:
    lwz r0, 0x34(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800685E4_00003820
    cmpwi r0, 0x1
    beq lbl_fn_800685E4_00003838
    cmpwi r0, 0x2
    beq lbl_fn_800685E4_00003850
    cmpwi r0, 0x3
    beq lbl_fn_800685E4_00003868
    cmpwi r0, 0x4
    beq lbl_fn_800685E4_00003880
    b lbl_fn_800685E4_00003894
lbl_fn_800685E4_00003820:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_800685E4_00003894
lbl_fn_800685E4_00003838:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_800685E4_00003894
lbl_fn_800685E4_00003850:
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_800685E4_00003894
lbl_fn_800685E4_00003868:
    li r3, 0x1
    li r4, 0x0
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    b lbl_fn_800685E4_00003894
lbl_fn_800685E4_00003880:
    li r3, 0x1
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl fn_80617D50
lbl_fn_800685E4_00003894:
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xe
    li r4, 0x1
    bl fn_80612E80
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_800685E4_00003938
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    b lbl_fn_800685E4_00003998
lbl_fn_800685E4_00003938:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
lbl_fn_800685E4_00003998:
    mr r27, r30
    li r31, 0x0
    lis r28, 0xcc01
    li r29, 0x4
lbl_fn_800685E4_000039A8:
    lwz r4, lbl_8087EEB0
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x10
    bl fn_800763FC
    cmplwi r31, 0x4
    bge lbl_fn_800685E4_000039EC
    lwz r4, 0x28(r30)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_fn_800685E4_000039D8
    b lbl_fn_800685E4_000039E0
lbl_fn_800685E4_000039D8:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_fn_800685E4_000039E0:
    li r5, 0x1
    bl fn_800763FC
    b lbl_fn_800685E4_00003A10
lbl_fn_800685E4_000039EC:
    lwz r4, 0x2c(r30)
    lwz r3, lbl_8087EEE0
    cmpwi r4, 0x0
    beq lbl_fn_800685E4_00003A00
    b lbl_fn_800685E4_00003A08
lbl_fn_800685E4_00003A00:
    lwz r4, lbl_8087EEB0
    addi r4, r4, 0x10
lbl_fn_800685E4_00003A08:
    li r5, 0x1
    bl fn_800763FC
lbl_fn_800685E4_00003A10:
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl fn_80614790
    li r4, 0x0
    mtctr r29
lbl_fn_800685E4_00003A30:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x1
    bne lbl_fn_800685E4_00003A58
    lwz r0, 0x8(r27)
    add r3, r0, r4
    lfsx f0, r4, r0
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r28)
    stfs f1, -0x8000(r28)
    b lbl_fn_800685E4_00003A78
lbl_fn_800685E4_00003A58:
    lwz r0, 0x8(r27)
    add r3, r0, r4
    lfsx f0, r4, r0
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    stfs f0, -0x8000(r28)
    stfs f1, -0x8000(r28)
    stfs f2, -0x8000(r28)
lbl_fn_800685E4_00003A78:
    lwz r0, 0x8(r27)
    add r3, r0, r4
    lwz r0, 0xc(r3)
    rotlwi r0, r0, 8
    stw r0, -0x8000(r28)
    lwz r0, 0x8(r27)
    add r3, r0, r4
    lfs f1, 0x14(r3)
    lfs f0, 0x10(r3)
    stfs f0, -0x8000(r28)
    stfs f1, -0x8000(r28)
    lwz r0, 0x8(r27)
    add r3, r0, r4
    addi r4, r4, 0x20
    lfs f1, 0x1c(r3)
    lfs f0, 0x18(r3)
    stfs f0, -0x8000(r28)
    stfs f1, -0x8000(r28)
    bdnz lbl_fn_800685E4_00003A30
    addi r31, r31, 0x1
    addi r27, r27, 0x4
    cmplwi r31, 0x8
    blt lbl_fn_800685E4_000039A8
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80068B70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068B70_00003B38
    cmpwi r4, 0x0
    ble lbl_fn_80068B70_00003B38
    bl dtor_80084684
lbl_fn_80068B70_00003B38:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80068BB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068BB0_00003B78
    cmpwi r4, 0x0
    ble lbl_fn_80068BB0_00003B78
    bl dtor_80084684
lbl_fn_80068BB0_00003B78:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80068BF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068BF0_00003BB8
    cmpwi r4, 0x0
    ble lbl_fn_80068BF0_00003BB8
    bl dtor_80084684
lbl_fn_80068BF0_00003BB8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80068C30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068C30_00003BF8
    cmpwi r4, 0x0
    ble lbl_fn_80068C30_00003BF8
    bl dtor_80084684
lbl_fn_80068C30_00003BF8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80068C70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068C70_00003C38
    cmpwi r4, 0x0
    ble lbl_fn_80068C70_00003C38
    bl dtor_80084684
lbl_fn_80068C70_00003C38:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80068CB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068CB0_00003C78
    cmpwi r4, 0x0
    ble lbl_fn_80068CB0_00003C78
    bl dtor_80084684
lbl_fn_80068CB0_00003C78:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80068CF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068CF0_00003CB8
    cmpwi r4, 0x0
    ble lbl_fn_80068CF0_00003CB8
    bl dtor_80084684
lbl_fn_80068CF0_00003CB8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80068D30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068D30_00003CF8
    cmpwi r4, 0x0
    ble lbl_fn_80068D30_00003CF8
    bl dtor_80084684
lbl_fn_80068D30_00003CF8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80068D70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80068D70_00003D38
    cmpwi r4, 0x0
    ble lbl_fn_80068D70_00003D38
    bl dtor_80084684
lbl_fn_80068D70_00003D38:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
