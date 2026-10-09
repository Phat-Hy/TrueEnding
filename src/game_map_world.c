#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80096218(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_801065F4(void);
extern void fn_80106680(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_8013310C(void);
extern void fn_8013322C(void);
extern void fn_80134250(void);
extern void fn_80134270(void);
extern void fn_801346C8(void);
extern void fn_80134724(void);
extern void fn_8014DEE4(void);
extern void fn_8015487C(void);
extern void fn_80179730(void);
extern void fn_80204E04(void);
extern void fn_80208748(void);
extern void fn_80219E6C(void);
extern void fn_8021A960(void);
extern void fn_803761A4(void);
extern void fn_803B3B38(void);
extern void fn_80418318(void);
extern void fn_804188A0(void);
extern void fn_80473F34(void);
extern void fn_80563A64(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80684600(void);
extern void fn_80686A64(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_807374B8[];
extern u8 lbl_80737840[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077C418[];
extern u8 lbl_8077C424[];
extern u8 lbl_8077C430[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D7DC;
extern u32 lbl_8087D7E0;
extern u32 lbl_8087D9D8;
extern u32 lbl_8087D9DC;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881994;
extern u32 lbl_808819C4;
extern u32 lbl_808819CC;
extern u32 lbl_808819F8;
extern u32 lbl_80881B5C;

/* Function declarations */
void fn_801799BC(void);
void fn_80179A34(void);
void fn_80179AB4(void);
void fn_80179AD0(void);
void fn_80179D44(void);
void fn_80179EBC(void);
void fn_80179F98(void);
void fn_80179FA8(void);
void fn_8017A160(void);
void fn_8017A220(void);
void fn_8017A228(void);
void fn_8017A2F8(void);
void fn_8017A300(void);
void fn_8017A33C(void);
void fn_8017A450(void);
void fn_8017A504(void);
void fn_8017A5D8(void);
void fn_8017A9A8(void);
void fn_8017ABD4(void);
void fn_8017AC08(void);
void fn_8017AC24(void);
void fn_8017AC2C(void);
void fn_8017AC3C(void);
void fn_8017AC44(void);
void fn_8017AD44(void);
void fn_8017B0F8(void);
void fn_8017B16C(void);
void fn_8017B1C4(void);

asm void fn_801799BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r3, 0x12d4
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_801799BC_00000040
lbl_fn_801799BC_00000028:
    lwz r4, 0x0(r30)
    mr r3, r29
    lbz r5, 0xe(r30)
    bl fn_80179730
    or r31, r31, r3
    addi r30, r30, 0x14
lbl_fn_801799BC_00000040:
    lwz r0, 0x12d0(r29)
    mulli r0, r0, 0x14
    add r3, r29, r0
    addi r0, r3, 0x12d4
    cmplw r30, r0
    bne lbl_fn_801799BC_00000028
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80179A34(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80179A34_000000DC
    lwz r3, 0x10(r4)
    addi r3, r3, 0x8
    bl fn_80684600
    lwz r4, 0x60(r31)
    mulli r30, r3, 0x64
    lwz r3, 0x10(r4)
    addi r3, r3, 0x2
    bl fn_80684600
    lwz r4, 0x60(r31)
    mulli r31, r3, 0x2710
    lwz r3, 0x10(r4)
    addi r3, r3, 0xb
    bl fn_80684600
    add r0, r31, r30
    add r3, r3, r0
    b lbl_fn_80179A34_000000E0
lbl_fn_80179A34_000000DC:
    li r3, 0x0
lbl_fn_80179A34_000000E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80179AB4(void)
{
    nofralloc
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80179AB4_0000010C
    lwz r3, 0x10(r3)
    b fn_80208748
lbl_fn_80179AB4_0000010C:
    li r3, 0x0
    blr
}

asm void fn_80179AD0(void)
{
    nofralloc
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_00000254
    lwz r5, 0x648(r3)
    nor r6, r4, r4
    lwz r0, 0xb4(r3)
    cmpwi r5, 0x0
    and r0, r0, r6
    stw r0, 0xb4(r3)
    beq lbl_fn_80179AD0_0000015C
    lwz r0, 0x14(r5)
    and r0, r0, r6
    stw r0, 0x14(r5)
    lwz r4, 0x64c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_0000015C
    lwz r0, 0x14(r4)
    and r0, r0, r6
    stw r0, 0x14(r4)
lbl_fn_80179AD0_0000015C:
    lwz r4, 0x680(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_00000174
    lwz r0, 0x28(r4)
    and r0, r0, r6
    stw r0, 0x28(r4)
lbl_fn_80179AD0_00000174:
    lwz r4, 0x684(r3)
    addi r5, r3, 0x684
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_00000190
    lwz r0, 0x28(r4)
    and r0, r0, r6
    stw r0, 0x28(r4)
lbl_fn_80179AD0_00000190:
    lwz r4, 0x4(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_000001A8
    lwz r0, 0x28(r4)
    and r0, r0, r6
    stw r0, 0x28(r4)
lbl_fn_80179AD0_000001A8:
    lwz r4, 0x8(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_000001C0
    lwz r0, 0x28(r4)
    and r0, r0, r6
    stw r0, 0x28(r4)
lbl_fn_80179AD0_000001C0:
    lwz r4, 0xc(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_000001D8
    lwz r0, 0x28(r4)
    and r0, r0, r6
    stw r0, 0x28(r4)
lbl_fn_80179AD0_000001D8:
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_000001F0
    lwz r0, 0x28(r4)
    and r0, r0, r6
    stw r0, 0x28(r4)
lbl_fn_80179AD0_000001F0:
    lwz r4, 0x14(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_00000208
    lwz r0, 0x28(r4)
    and r0, r0, r6
    stw r0, 0x28(r4)
lbl_fn_80179AD0_00000208:
    lwz r4, 0x18(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80179AD0_00000220
    lwz r0, 0x28(r4)
    and r0, r0, r6
    stw r0, 0x28(r4)
lbl_fn_80179AD0_00000220:
    mr r5, r3
    li r7, 0x0
    b lbl_fn_80179AD0_00000244
lbl_fn_80179AD0_0000022C:
    lwz r4, 0x6a8(r5)
    addi r5, r5, 0x4
    addi r7, r7, 0x1
    lwz r0, 0x8(r4)
    and r0, r0, r6
    stw r0, 0x8(r4)
lbl_fn_80179AD0_00000244:
    lwz r0, 0x6a4(r3)
    cmplw r7, r0
    blt lbl_fn_80179AD0_0000022C
    blr
lbl_fn_80179AD0_00000254:
    lwz r5, 0x648(r3)
    lwz r0, 0xb4(r3)
    cmpwi r5, 0x0
    or r0, r0, r4
    stw r0, 0xb4(r3)
    beq lbl_fn_80179AD0_00000290
    lwz r0, 0x14(r5)
    or r0, r0, r4
    stw r0, 0x14(r5)
    lwz r5, 0x64c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_00000290
    lwz r0, 0x14(r5)
    or r0, r0, r4
    stw r0, 0x14(r5)
lbl_fn_80179AD0_00000290:
    lwz r5, 0x680(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_000002A8
    lwz r0, 0x28(r5)
    or r0, r0, r4
    stw r0, 0x28(r5)
lbl_fn_80179AD0_000002A8:
    lwz r5, 0x684(r3)
    addi r6, r3, 0x684
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_000002C4
    lwz r0, 0x28(r5)
    or r0, r0, r4
    stw r0, 0x28(r5)
lbl_fn_80179AD0_000002C4:
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_000002DC
    lwz r0, 0x28(r5)
    or r0, r0, r4
    stw r0, 0x28(r5)
lbl_fn_80179AD0_000002DC:
    lwz r5, 0x8(r6)
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_000002F4
    lwz r0, 0x28(r5)
    or r0, r0, r4
    stw r0, 0x28(r5)
lbl_fn_80179AD0_000002F4:
    lwz r5, 0xc(r6)
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_0000030C
    lwz r0, 0x28(r5)
    or r0, r0, r4
    stw r0, 0x28(r5)
lbl_fn_80179AD0_0000030C:
    lwz r5, 0x10(r6)
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_00000324
    lwz r0, 0x28(r5)
    or r0, r0, r4
    stw r0, 0x28(r5)
lbl_fn_80179AD0_00000324:
    lwz r5, 0x14(r6)
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_0000033C
    lwz r0, 0x28(r5)
    or r0, r0, r4
    stw r0, 0x28(r5)
lbl_fn_80179AD0_0000033C:
    lwz r5, 0x18(r6)
    cmpwi r5, 0x0
    beq lbl_fn_80179AD0_00000354
    lwz r0, 0x28(r5)
    or r0, r0, r4
    stw r0, 0x28(r5)
lbl_fn_80179AD0_00000354:
    mr r6, r3
    li r7, 0x0
    b lbl_fn_80179AD0_00000378
lbl_fn_80179AD0_00000360:
    lwz r5, 0x6a8(r6)
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    lwz r0, 0x8(r5)
    or r0, r0, r4
    stw r0, 0x8(r5)
lbl_fn_80179AD0_00000378:
    lwz r0, 0x6a4(r3)
    cmplw r7, r0
    blt lbl_fn_80179AD0_00000360
    blr
}

asm void fn_80179D44(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    li r7, 0x0
    cmpwi r6, 0x0
    bne lbl_fn_80179D44_000003A0
    ori r7, r7, 0x20
    b lbl_fn_80179D44_00000414
lbl_fn_80179D44_000003A0:
    cmpwi r6, 0x3
    bne lbl_fn_80179D44_000003B0
    ori r7, r7, 0x40
    b lbl_fn_80179D44_00000414
lbl_fn_80179D44_000003B0:
    cmpwi r6, 0x2
    bne lbl_fn_80179D44_000003F0
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80179D44_000003E8
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_80179D44_000003E8
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x19
    bne lbl_fn_80179D44_000003E8
    lwz r0, 0x50(r4)
    cmpwi r0, 0x2
    beq lbl_fn_80179D44_00000414
lbl_fn_80179D44_000003E8:
    ori r7, r7, 0x80
    b lbl_fn_80179D44_00000414
lbl_fn_80179D44_000003F0:
    cmpwi r6, 0x1
    li r0, 0x0
    beq lbl_fn_80179D44_00000404
    cmpwi r6, 0x4
    bne lbl_fn_80179D44_00000408
lbl_fn_80179D44_00000404:
    li r0, 0x1
lbl_fn_80179D44_00000408:
    cmpwi r0, 0x0
    beq lbl_fn_80179D44_00000414
    ori r7, r7, 0x800
lbl_fn_80179D44_00000414:
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_80179D44_00000424
    oris r7, r7, 0x1
lbl_fn_80179D44_00000424:
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80179D44_000004D4
    lwz r0, 0x24(r4)
    cmpwi r0, 0x1a
    beq lbl_fn_80179D44_00000474
    cmpwi r0, 0x3b
    beq lbl_fn_80179D44_00000474
    cmpwi r0, 0x3c
    beq lbl_fn_80179D44_00000474
    cmpwi r0, 0x19
    beq lbl_fn_80179D44_00000474
    cmpwi r0, 0x17
    bne lbl_fn_80179D44_00000478
    lfs f1, 0x568(r3)
    lfs f0, lbl_808819C4
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80179D44_00000478
lbl_fn_80179D44_00000474:
    oris r7, r7, 0x2000
lbl_fn_80179D44_00000478:
    cmpwi r0, 0x23
    bne lbl_fn_80179D44_00000484
    oris r7, r7, 0x8000
lbl_fn_80179D44_00000484:
    lwz r4, lbl_8087F610
    li r5, 0x0
    cmpwi r4, 0x0
    beq lbl_fn_80179D44_000004A4
    lwz r0, 0x540(r4)
    cmpwi r0, 0x2
    bne lbl_fn_80179D44_000004A4
    li r5, 0x1
lbl_fn_80179D44_000004A4:
    cmpwi r5, 0x0
    beq lbl_fn_80179D44_000004D4
    cmpwi r6, 0x2
    bne lbl_fn_80179D44_000004D4
    lwz r4, lbl_8087F430
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x3
    bne lbl_fn_80179D44_000004D4
    lwz r0, 0x50(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80179D44_000004D4
    oris r7, r7, 0x8000
lbl_fn_80179D44_000004D4:
    lwz r0, 0x12a4(r3)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_80179D44_000004E8
    oris r7, r7, 0x2
lbl_fn_80179D44_000004E8:
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 30
    beq lbl_fn_80179D44_000004F8
    oris r7, r7, 0x8000
lbl_fn_80179D44_000004F8:
    mr r3, r7
    blr
}

asm void fn_80179EBC(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    lwz r5, lbl_8087F0A8
    cmpwi r0, 0x0
    bne lbl_fn_80179EBC_0000051C
    lwz r0, 0x308(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80179EBC_00000548
lbl_fn_80179EBC_0000051C:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80179EBC_00000548
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80179EBC_00000548
    lwz r0, 0xc54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80179EBC_00000550
lbl_fn_80179EBC_00000548:
    li r3, 0x0
    blr
lbl_fn_80179EBC_00000550:
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80179EBC_00000564
    li r3, 0x0
    blr
lbl_fn_80179EBC_00000564:
    cmpwi r4, 0xa
    beq lbl_fn_80179EBC_00000584
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80179EBC_00000584
    li r3, 0x0
    blr
lbl_fn_80179EBC_00000584:
    lwz r0, 0x1380(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80179EBC_000005D4
    subi r0, r4, 0x24
    cmplwi r0, 0x3
    ble lbl_fn_80179EBC_000005D4
    subi r0, r4, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_80179EBC_000005D4
    cmpwi r4, 0x2
    bne lbl_fn_80179EBC_000005CC
    lwz r0, 0x1384(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80179EBC_000005D4
    cmpwi r0, 0x1
    beq lbl_fn_80179EBC_000005D4
    li r3, 0x0
    blr
lbl_fn_80179EBC_000005CC:
    li r3, 0x0
    blr
lbl_fn_80179EBC_000005D4:
    li r3, 0x1
    blr
}

asm void fn_80179F98(void)
{
    nofralloc
    li r0, 0x5a
    stw r4, 0x1384(r3)
    stw r0, 0x1380(r3)
    blr
}

asm void fn_80179FA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_80179FA8_0000061C
    mr r3, r0
    bl fn_803761A4
    cmpwi r3, 0x0
    bne lbl_fn_80179FA8_00000624
lbl_fn_80179FA8_0000061C:
    li r3, 0x0
    b lbl_fn_80179FA8_00000790
lbl_fn_80179FA8_00000624:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80179FA8_00000650
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80179FA8_00000650
    li r5, 0x1
lbl_fn_80179FA8_00000650:
    cmpwi r5, 0x0
    beq lbl_fn_80179FA8_0000066C
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80179FA8_0000066C
    li r3, 0x1
lbl_fn_80179FA8_0000066C:
    cmpwi r3, 0x0
    beq lbl_fn_80179FA8_000006A0
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80179FA8_00000694
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_80179FA8_00000694
    li r3, 0x1
lbl_fn_80179FA8_00000694:
    cmpwi r3, 0x0
    bne lbl_fn_80179FA8_000006A0
    li r4, 0x1
lbl_fn_80179FA8_000006A0:
    cmpwi r4, 0x0
    bne lbl_fn_80179FA8_000006B0
    li r0, 0x0
    b lbl_fn_80179FA8_000006FC
lbl_fn_80179FA8_000006B0:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80179FA8_000006D4
    lwz r0, 0xf94(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80179FA8_000006D4
    li r0, 0x0
    b lbl_fn_80179FA8_000006FC
lbl_fn_80179FA8_000006D4:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80179FA8_000006F8
    lwz r3, 0x560(r31)
    subi r0, r3, 0x11
    cmplwi r0, 0x2
    bgt lbl_fn_80179FA8_000006F8
    li r0, 0x0
    b lbl_fn_80179FA8_000006FC
lbl_fn_80179FA8_000006F8:
    li r0, 0x1
lbl_fn_80179FA8_000006FC:
    cmpwi r0, 0x0
    bne lbl_fn_80179FA8_0000070C
    li r3, 0x0
    b lbl_fn_80179FA8_00000790
lbl_fn_80179FA8_0000070C:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80179FA8_00000738
    addi r3, r31, 0x7d4
    li r4, 0xe
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    bne lbl_fn_80179FA8_00000738
    li r3, 0x0
    b lbl_fn_80179FA8_00000790
lbl_fn_80179FA8_00000738:
    lwz r5, 0x648(r31)
    li r3, 0x0
    li r4, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_80179FA8_0000075C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80179FA8_0000075C
    li r4, 0x1
lbl_fn_80179FA8_0000075C:
    cmpwi r4, 0x0
    beq lbl_fn_80179FA8_00000790
    lwz r4, 0x5c(r31)
    li r0, 0x1
    lwz r4, 0x11c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80179FA8_00000784
    cmpwi r4, 0x1
    beq lbl_fn_80179FA8_00000784
    li r0, 0x0
lbl_fn_80179FA8_00000784:
    cmpwi r0, 0x0
    beq lbl_fn_80179FA8_00000790
    li r3, 0x1
lbl_fn_80179FA8_00000790:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017A160(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8017A160_0000084C
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8017A160_000007F0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8017A160_0000080C
lbl_fn_8017A160_000007F0:
    lis r5, lbl_8077C418@ha
    lwzu r4, lbl_8077C418@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8017A160_0000080C:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017A160_0000084C
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_8017A160_00000850
lbl_fn_8017A160_0000084C:
    li r3, 0x0
lbl_fn_8017A160_00000850:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8017A220(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8017A228(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8017A228_00000920
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8017A228_000008C0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8017A228_000008DC
lbl_fn_8017A228_000008C0:
    lis r5, lbl_8077C424@ha
    lwzu r4, lbl_8077C424@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8017A228_000008DC:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017A228_00000920
    lwz r3, 0xf80(r30)
    mr r4, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    b lbl_fn_8017A228_00000924
lbl_fn_8017A228_00000920:
    li r3, -0x1
lbl_fn_8017A228_00000924:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8017A2F8(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8017A300(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x5c(r3)
    addi r3, r3, 0x7d4
    bl fn_8012B3E8
    addi r3, r31, 0x7d4
    bl fn_8012B988
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017A33C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    beq lbl_fn_8017A33C_00000A24
    lfs f1, lbl_80881964
    li r4, 0x3
    lfs f2, lbl_80881994
    li r5, 0x1f3
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lis r4, lbl_80737A9C@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x6c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8017A33C_000009F8
    li r4, 0x0
    b lbl_fn_8017A33C_00000A04
lbl_fn_8017A33C_000009F8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8017A33C_00000A04:
    lwz r3, 0x5c0(r31)
    lwz r0, 0x12a4(r31)
    clrrwi r3, r3, 1
    stw r4, 0xf1c(r31)
    ori r0, r0, 0x800
    stw r3, 0x5c0(r31)
    stw r0, 0x12a4(r31)
    b lbl_fn_8017A33C_00000A74
lbl_fn_8017A33C_00000A24:
    lwz r0, 0x139c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017A33C_00000A74
    lfs f1, lbl_8088196C
    li r4, 0x3
    addi r3, r3, 0xb0
    bl fn_80097CCC
    cmpwi r29, 0x0
    beq lbl_fn_8017A33C_00000A74
    lwz r3, 0x139c(r30)
    li r0, 0x0
    stw r0, 0xf1c(r3)
    lwz r3, 0x139c(r30)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    lwz r3, 0x139c(r30)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 21, 19
    stw r0, 0x12a4(r3)
lbl_fn_8017A33C_00000A74:
    stw r31, 0x139c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8017A450(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8017A450_00000AD4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8017A450_00000AF0
lbl_fn_8017A450_00000AD4:
    lis r5, lbl_8077C430@ha
    lwzu r4, lbl_8077C430@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8017A450_00000AF0:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017A450_00000B30
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_8017A450_00000B34
lbl_fn_8017A450_00000B30:
    li r3, 0x0
lbl_fn_8017A450_00000B34:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8017A504(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r0, 0x54c(r3)
    oris r0, r0, 0x20
    stw r0, 0x54c(r3)
    bl fn_80418318
    cmpwi r3, 0x0
    beq lbl_fn_8017A504_00000BFC
    lwz r0, 0x520(r30)
    cmpwi r0, 0x0
    bge lbl_fn_8017A504_00000B94
    li r31, 0x0
    b lbl_fn_8017A504_00000BA0
lbl_fn_8017A504_00000B94:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r30)
    add r31, r3, r0
lbl_fn_8017A504_00000BA0:
    bl fn_80418318
    lfs f4, 0x1c(r31)
    mr r4, r3
    lfs f0, 0x52c(r30)
    addi r5, r1, 0x8
    lfs f3, 0x2c(r31)
    addi r3, r1, 0x20
    lfs f5, 0xc(r31)
    fsubs f31, f4, f0
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    stfs f5, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    bl fn_804188A0
    lfs f0, 0x24(r1)
    fsubs f0, f0, f31
    stfs f0, 0x24(r1)
    stfs f0, 0x13bc(r30)
    lfs f0, 0x24(r1)
    stfs f0, 0x13c8(r30)
lbl_fn_8017A504_00000BFC:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8017A5D8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r0, 0x48(r3)
    stw r5, 0x48(r1)
    cmpwi r0, 0x2
    stw r5, 0x50(r1)
    bne lbl_fn_8017A5D8_00000FD8
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8017A5D8_00000C5C
    b lbl_fn_8017A5D8_00000FD8
lbl_fn_8017A5D8_00000C5C:
    cmpwi r4, 0x0
    beq lbl_fn_8017A5D8_00000F6C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_8017A5D8_00000F6C
    li r4, 0x800
    li r5, 0x0
    addi r3, r3, 0x7d4
    bl fn_8013310C
    lwz r0, 0xc04(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8017A5D8_00000C9C
    addi r3, r31, 0x7d4
    li r4, 0x1
    bl fn_80134724
lbl_fn_8017A5D8_00000C9C:
    mr r3, r31
    bl fn_8017A9A8
    cmpwi r3, 0x0
    beq lbl_fn_8017A5D8_00000CD0
    mr r3, r31
    bl fn_8015487C
    cmpwi r3, 0x1
    bne lbl_fn_8017A5D8_00000CD0
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8017A5D8_00000CD0:
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8017A5D8_00000EA4
    addi r3, r31, 0x7d4
    bl fn_80134270
    cmpwi r3, 0x0
    beq lbl_fn_8017A5D8_00000D74
    lwz r4, lbl_8087F0A8
    lis r3, lbl_80737840@ha
    lfd f5, lbl_80737840@l(r3)
    lwz r5, 0x370(r4)
    lfs f4, lbl_80881B5C
    extrwi r0, r5, 8, 8
    stw r0, 0x4c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x48(r1)
    srwi r0, r5, 24
    stw r4, 0x54(r1)
    fsubs f1, f0, f5
    lfd f0, 0x50(r1)
    stw r3, 0x4c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0x54(r1)
    lfd f1, 0x48(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f1, f5
    stfs f3, 0x28(r1)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    stfs f3, 0x38(r1)
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_8017A5D8_00000E90
lbl_fn_8017A5D8_00000D74:
    addi r3, r31, 0x7d4
    bl fn_80134250
    cmpwi r3, 0x0
    beq lbl_fn_8017A5D8_00000E0C
    lwz r4, lbl_8087F0A8
    lis r3, lbl_80737840@ha
    lfd f5, lbl_80737840@l(r3)
    lwz r5, 0x36c(r4)
    lfs f4, lbl_80881B5C
    extrwi r0, r5, 8, 8
    stw r0, 0x4c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x48(r1)
    srwi r0, r5, 24
    stw r4, 0x54(r1)
    fsubs f1, f0, f5
    lfd f0, 0x50(r1)
    stw r3, 0x4c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0x54(r1)
    lfd f1, 0x48(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f1, f5
    stfs f3, 0x18(r1)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    stfs f3, 0x38(r1)
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    b lbl_fn_8017A5D8_00000E90
lbl_fn_8017A5D8_00000E0C:
    lwz r4, lbl_8087F0A8
    lis r3, lbl_80737840@ha
    lfd f5, lbl_80737840@l(r3)
    lwz r5, 0x368(r4)
    lfs f4, lbl_80881B5C
    extrwi r0, r5, 8, 8
    stw r0, 0x4c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x48(r1)
    srwi r0, r5, 24
    stw r4, 0x54(r1)
    fsubs f1, f0, f5
    lfd f0, 0x50(r1)
    stw r3, 0x4c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0x54(r1)
    lfd f1, 0x48(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f1, f5
    stfs f3, 0x8(r1)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    stfs f3, 0x38(r1)
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
lbl_fn_8017A5D8_00000E90:
    lwz r3, lbl_8087F048
    mr r4, r31
    addi r5, r31, 0xb0
    addi r6, r1, 0x38
    bl fn_801065F4
lbl_fn_8017A5D8_00000EA4:
    lha r0, 0x1388(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8017A5D8_00000F44
    lwz r0, 0x12a4(r31)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8017A5D8_00000F44
    lwz r0, 0x55c(r31)
    li r3, 0x1c2
    sth r3, 0x1388(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8017A5D8_00000EE8
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_8017A5D8_00000EE8
    li r3, 0x1
lbl_fn_8017A5D8_00000EE8:
    cmpwi r3, 0x0
    beq lbl_fn_8017A5D8_00000F44
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8017A5D8_00000F10
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_8017A5D8_00000F10:
    lwz r0, 0x12a8(r31)
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_8088196C
    mr r3, r31
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    addi r4, r4, lbl_807C7030@l
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
lbl_fn_8017A5D8_00000F44:
    lha r0, 0x138a(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8017A5D8_00000FD8
    lwz r0, 0x12a4(r31)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_8017A5D8_00000FD8
    li r0, 0xf0
    sth r0, 0x138a(r31)
    b lbl_fn_8017A5D8_00000FD8
lbl_fn_8017A5D8_00000F6C:
    cmpwi r4, 0x0
    bne lbl_fn_8017A5D8_00000FD8
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    bne lbl_fn_8017A5D8_00000FD8
    li r4, 0x800
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lfs f0, lbl_8088196C
    li r0, 0x0
    stw r0, 0xc04(r31)
    mr r3, r31
    stfs f0, 0xc08(r31)
    stfs f0, 0xc0c(r31)
    bl fn_8017A9A8
    cmpwi r3, 0x0
    beq lbl_fn_8017A5D8_00000FD8
    mr r3, r31
    bl fn_8015487C
    cmpwi r3, 0x1
    bne lbl_fn_8017A5D8_00000FD8
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8017A5D8_00000FD8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8017A9A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r28, lbl_8087F0A8
    bl fn_8015487C
    lwz r0, 0x70(r29)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8017A9A8_000011F4
    lis r4, lbl_807374B8@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807374B8@l
    lwzx r0, r4, r0
    cmpwi r0, 0x0
    ble lbl_fn_8017A9A8_000011F4
    subi r0, r3, 0x3
    li r30, 0x0
    cmplwi r0, 0x1
    ble lbl_fn_8017A9A8_00001140
    cmpwi r3, 0x0
    beq lbl_fn_8017A9A8_00001070
    cmpwi r3, 0x1
    beq lbl_fn_8017A9A8_00001088
    cmpwi r3, 0x2
    beq lbl_fn_8017A9A8_000010AC
    cmpwi r3, 0x5
    beq lbl_fn_8017A9A8_000010AC
    b lbl_fn_8017A9A8_00001164
lbl_fn_8017A9A8_00001070:
    lwz r0, 0x137c(r29)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_8017A9A8_00001164
    li r30, 0x1
    b lbl_fn_8017A9A8_00001164
lbl_fn_8017A9A8_00001088:
    lwz r0, 0x404(r28)
    cmpwi r0, 0x1
    blt lbl_fn_8017A9A8_00001164
    lwz r0, 0x137c(r29)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_8017A9A8_00001164
    li r30, 0x1
    b lbl_fn_8017A9A8_00001164
lbl_fn_8017A9A8_000010AC:
    lwz r0, 0x404(r28)
    cmpwi r0, 0x2
    blt lbl_fn_8017A9A8_00001164
    lwz r0, 0x137c(r29)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_8017A9A8_000010E4
    lha r0, 0x1388(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8017A9A8_000010DC
    cmpwi r0, 0x12c
    ble lbl_fn_8017A9A8_000010F4
lbl_fn_8017A9A8_000010DC:
    li r30, 0x1
    b lbl_fn_8017A9A8_000010F4
lbl_fn_8017A9A8_000010E4:
    lha r0, 0x1388(r29)
    cmpwi r0, 0x1bd
    blt lbl_fn_8017A9A8_000010F4
    li r30, 0x1
lbl_fn_8017A9A8_000010F4:
    lwz r3, 0xaa4(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8017A9A8_0000110C
    bl fn_80219E6C
    mr r28, r3
    b lbl_fn_8017A9A8_00001110
lbl_fn_8017A9A8_0000110C:
    li r28, 0x0
lbl_fn_8017A9A8_00001110:
    cmpwi r28, 0x0
    beq lbl_fn_8017A9A8_00001164
    mr r3, r28
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_8017A9A8_00001164
    lwz r0, 0xac(r28)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_8017A9A8_00001164
    li r30, 0x0
    b lbl_fn_8017A9A8_00001164
lbl_fn_8017A9A8_00001140:
    lwz r0, 0x404(r28)
    cmpwi r0, 0x3
    blt lbl_fn_8017A9A8_00001164
    lha r0, 0x1388(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8017A9A8_00001160
    cmpwi r0, 0x12c
    ble lbl_fn_8017A9A8_00001164
lbl_fn_8017A9A8_00001160:
    li r30, 0x1
lbl_fn_8017A9A8_00001164:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8017A9A8_00001178
    lwz r4, 0x48(r3)
    b lbl_fn_8017A9A8_0000117C
lbl_fn_8017A9A8_00001178:
    li r4, 0x0
lbl_fn_8017A9A8_0000117C:
    cmpwi r30, 0x0
    beq lbl_fn_8017A9A8_000011F4
    cmpwi r4, 0x0
    beq lbl_fn_8017A9A8_000011F4
    lwz r3, 0xd0c(r29)
    cmpwi r31, 0x1
    lwz r0, 0xd0c(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    bne lbl_fn_8017A9A8_000011F8
    lwz r0, 0x650(r29)
    li r5, 0x0
    cmplwi r0, 0x1
    ble lbl_fn_8017A9A8_000011D0
    lwz r4, 0x658(r29)
    lwz r4, 0x274(r4)
    lwz r0, 0x78(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8017A9A8_000011D0
    li r5, 0x1
lbl_fn_8017A9A8_000011D0:
    cmpwi r3, 0x0
    beq lbl_fn_8017A9A8_000011E8
    cmpwi r5, 0x0
    beq lbl_fn_8017A9A8_000011E8
    li r3, 0x1
    b lbl_fn_8017A9A8_000011F8
lbl_fn_8017A9A8_000011E8:
    li r3, 0x0
    b lbl_fn_8017A9A8_000011F8
    b lbl_fn_8017A9A8_000011F8
lbl_fn_8017A9A8_000011F4:
    li r3, 0x0
lbl_fn_8017A9A8_000011F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8017ABD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x48(r3)
    bl fn_80204E04
    stw r3, 0x6c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017AC08(void)
{
    nofralloc
    lwz r3, 0x6c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8017AC08_00001260
    lwz r3, 0x4(r3)
    blr
lbl_fn_8017AC08_00001260:
    li r3, 0x0
    blr
}

asm void fn_8017AC24(void)
{
    nofralloc
    lfs f1, lbl_80881964
    blr
}

asm void fn_8017AC2C(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087F048
    addi r5, r4, 0xb0
    b fn_80106680
}

asm void fn_8017AC3C(void)
{
    nofralloc
    stw r4, 0x13fc(r3)
    blr
}

asm void fn_8017AC44(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    mr r29, r3
    lwz r0, 0x13fc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017AC44_0000136C
    lfs f3, lbl_8088196C
    li r31, 0x0
    stfs f3, 0x574(r3)
    li r4, 0x79
    lfs f0, lbl_80881964
    stfs f3, 0x578(r3)
    stfs f3, 0x57c(r3)
    stfs f3, 0x570(r3)
    stfs f3, 0x580(r3)
    stfs f3, 0x584(r3)
    stw r31, 0xf1c(r3)
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x18
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    lfs f1, lbl_808819CC
    addi r3, r1, 0x48
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x8(r1)
    addi r3, r1, 0x8
    lfs f5, lbl_808819F8
    cmpwi r30, 0x0
    lfs f3, 0xc(r1)
    lfs f0, 0x10(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f2, f0, f5
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r29), 0, 0
    stfs f2, 0x57c(r29)
    beq lbl_fn_8017AC44_0000136C
    stw r31, 0x13fc(r29)
lbl_fn_8017AC44_0000136C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8017AD44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r31, r5
    addi r3, r3, 0xb0
    bl fn_80096218
    mr r29, r27
    li r30, 0x0
    b lbl_fn_8017AD44_000013D4
lbl_fn_8017AD44_000013B8:
    lwz r3, 0x654(r29)
    mr r4, r28
    mr r5, r31
    addi r3, r3, 0x10
    bl fn_80096218
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_8017AD44_000013D4:
    lwz r0, 0x650(r27)
    cmplw r30, r0
    blt lbl_fn_8017AD44_000013B8
    addi r29, r27, 0x680
    li r30, 0x0
lbl_fn_8017AD44_000013E8:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8017AD44_00001400
    mr r4, r28
    mr r5, r31
    bl fn_80563A64
lbl_fn_8017AD44_00001400:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmplwi r30, 0x8
    blt lbl_fn_8017AD44_000013E8
    mr r29, r27
    li r30, 0x0
    b lbl_fn_8017AD44_00001438
lbl_fn_8017AD44_0000141C:
    lwz r3, 0x6a8(r29)
    mr r4, r28
    mr r5, r31
    addi r3, r3, 0x4
    bl fn_80096218
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_8017AD44_00001438:
    lwz r0, 0x6a4(r27)
    cmplw r30, r0
    blt lbl_fn_8017AD44_0000141C
    addi r3, r27, 0x98
    bl fn_80473F34
    lwz r0, 0x8(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8017AD44_00001468
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8017AD44_000015B8
lbl_fn_8017AD44_00001468:
    lwz r0, 0x4(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_8017AD44_0000170C
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_8017AD44_000015A8
    lwz r0, 0x0(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8017AD44_000014B0
    mr r4, r0
lbl_fn_8017AD44_000014B0:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_8017AD44_000015A0
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_8017AD44_00001570
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_8017AD44_00001570
lbl_fn_8017AD44_000014E4:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_8017AD44_000014E4
lbl_fn_8017AD44_00001570:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_8017AD44_000015A0
lbl_fn_8017AD44_00001588:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_8017AD44_00001588
lbl_fn_8017AD44_000015A0:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_8017AD44_000015A8:
    li r0, 0x8
    stw r29, 0x8(r28)
    stw r0, 0x4(r28)
    b lbl_fn_8017AD44_0000170C
lbl_fn_8017AD44_000015B8:
    lwz r3, 0x0(r28)
    cmplw r3, r0
    blt lbl_fn_8017AD44_0000170C
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_8017AD44_0000170C
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_8017AD44_00001704
    lwz r0, 0x0(r28)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_8017AD44_0000160C
    mr r4, r0
lbl_fn_8017AD44_0000160C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_8017AD44_000016FC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_8017AD44_000016CC
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_8017AD44_000016CC
lbl_fn_8017AD44_00001640:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_8017AD44_00001640
lbl_fn_8017AD44_000016CC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_8017AD44_000016FC
lbl_fn_8017AD44_000016E4:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_8017AD44_000016E4
lbl_fn_8017AD44_000016FC:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_8017AD44_00001704:
    stw r30, 0x8(r28)
    stw r29, 0x4(r28)
lbl_fn_8017AD44_0000170C:
    lwz r0, 0x0(r28)
    lwz r3, 0x8(r28)
    slwi r0, r0, 2
    stwx r31, r3, r0
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8017B0F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r3, 0x5c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8017B0F8_00001798
    lwz r4, 0xc4(r3)
    cmpwi r4, 0x0
    ble lbl_fn_8017B0F8_00001798
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8017B0F8_00001798
    addi r3, r3, 0x54f4
    bl fn_803B3B38
    cmpwi r3, 0x0
    beq lbl_fn_8017B0F8_00001798
    lwz r4, 0x8(r3)
    mr r3, r31
    bl fn_80686A64
    li r3, 0x1
    b lbl_fn_8017B0F8_0000179C
lbl_fn_8017B0F8_00001798:
    li r3, 0x0
lbl_fn_8017B0F8_0000179C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8017B16C(void)
{
    nofralloc
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    bne lbl_fn_8017B16C_000017E4
    lwz r4, lbl_8087F0A8
    lwz r0, 0x278(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8017B16C_000017E4
    lwz r4, 0x5c(r3)
    lwz r0, 0x11c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_8017B16C_000017E4
    li r3, 0x1
    blr
lbl_fn_8017B16C_000017E4:
    cmpwi r5, 0x0
    bne lbl_fn_8017B16C_00001800
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8017B16C_00001800
    li r3, 0x1
    blr
lbl_fn_8017B16C_00001800:
    li r3, 0x0
    blr
}

asm void fn_8017B1C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, -0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, 0x1408(r3)
    stw r0, 0x140c(r3)
    cmpwi r5, 0x0
    stw r30, 0x1400(r3)
    stw r30, 0x1404(r3)
    beq lbl_fn_8017B1C4_00001858
    mr r3, r5
    bl fn_80084C24
    stw r30, 0x1408(r28)
lbl_fn_8017B1C4_00001858:
    lwz r31, 0x0(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8017B1C4_00001884
    slwi r3, r31, 2
    li r4, 0x0
    la r5, lbl_8087D9DC
    la r6, lbl_8087D9D8
    li r7, 0x0
    bl fn_800846FC
    mr r30, r3
    b lbl_fn_8017B1C4_00001888
lbl_fn_8017B1C4_00001884:
    li r30, 0x0
lbl_fn_8017B1C4_00001888:
    lwz r0, 0x1408(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8017B1C4_000019A0
    lwz r0, 0x1400(r28)
    mr r3, r31
    cmplw r31, r0
    ble lbl_fn_8017B1C4_000018A8
    mr r3, r0
lbl_fn_8017B1C4_000018A8:
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_fn_8017B1C4_00001998
    cmplwi r3, 0x8
    subi r7, r3, 0x8
    ble lbl_fn_8017B1C4_00001968
    addi r0, r7, 0x7
    mr r6, r30
    srwi r0, r0, 3
    li r5, 0x0
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_fn_8017B1C4_00001968
lbl_fn_8017B1C4_000018DC:
    lwz r7, 0x1408(r28)
    addi r4, r4, 0x8
    lwzx r0, r7, r5
    stw r0, 0x0(r6)
    lwz r0, 0x1408(r28)
    add r7, r0, r5
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lwz r0, 0x1408(r28)
    add r7, r0, r5
    lwz r0, 0x8(r7)
    stw r0, 0x8(r6)
    lwz r0, 0x1408(r28)
    add r7, r0, r5
    lwz r0, 0xc(r7)
    stw r0, 0xc(r6)
    lwz r0, 0x1408(r28)
    add r7, r0, r5
    lwz r0, 0x10(r7)
    stw r0, 0x10(r6)
    lwz r0, 0x1408(r28)
    add r7, r0, r5
    lwz r0, 0x14(r7)
    stw r0, 0x14(r6)
    lwz r0, 0x1408(r28)
    add r7, r0, r5
    lwz r0, 0x18(r7)
    stw r0, 0x18(r6)
    lwz r0, 0x1408(r28)
    add r7, r0, r5
    addi r5, r5, 0x20
    lwz r0, 0x1c(r7)
    stw r0, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_8017B1C4_000018DC
lbl_fn_8017B1C4_00001968:
    slwi r6, r4, 2
    subf r0, r4, r3
    add r5, r30, r6
    mtctr r0
    cmplw r4, r3
    bge lbl_fn_8017B1C4_00001998
lbl_fn_8017B1C4_00001980:
    lwz r3, 0x1408(r28)
    lwzx r0, r3, r6
    addi r6, r6, 0x4
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_fn_8017B1C4_00001980
lbl_fn_8017B1C4_00001998:
    lwz r3, 0x1408(r28)
    bl fn_80084C24
lbl_fn_8017B1C4_000019A0:
    stw r30, 0x1408(r28)
    li r6, 0x0
    li r3, 0x0
    li r7, 0x0
    stw r31, 0x1400(r28)
    stw r31, 0x1404(r28)
    b lbl_fn_8017B1C4_000019D8
lbl_fn_8017B1C4_000019BC:
    lwz r5, 0x8(r29)
    addi r6, r6, 0x1
    lwz r4, 0x1408(r28)
    lwzx r0, r5, r3
    addi r3, r3, 0x4
    stwx r0, r4, r7
    addi r7, r7, 0x4
lbl_fn_8017B1C4_000019D8:
    lwz r0, 0x1400(r28)
    cmplw r6, r0
    blt lbl_fn_8017B1C4_000019BC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
