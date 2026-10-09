#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80013410(void);
extern void fn_80013484(void);
extern void fn_8003EFB0(void);
extern void fn_80045694(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80093F1C(void);
extern void fn_80094778(void);
extern void fn_800F52F0(void);
extern void fn_800F72CC(void);
extern void fn_800F7F80(void);
extern void fn_800F7FB4(void);
extern void fn_801162A0(void);
extern void fn_80121F00(void);
extern void fn_80133EE8(void);
extern void fn_80133F18(void);
extern void fn_80134270(void);
extern void fn_80134290(void);
extern void fn_801342B0(void);
extern void fn_80139EBC(void);
extern void fn_80139F4C(void);
extern void fn_8013A158(void);
extern void fn_8013A16C(void);
extern void fn_8013A18C(void);
extern void fn_8013A214(void);
extern void fn_8013A248(void);
extern void fn_801404E0(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_80140518(void);
extern void fn_8014052C(void);
extern void fn_80148334(void);
extern void fn_8014C0B4(void);
extern void fn_8014DEE4(void);
extern void fn_801511C4(void);
extern void fn_80151204(void);
extern void fn_80151210(void);
extern void fn_80151218(void);
extern void fn_8015121C(void);
extern void fn_8015123C(void);
extern void fn_8015CC70(void);
extern void fn_8015D8C0(void);
extern void fn_8015DEC0(void);
extern void fn_8015E1B8(void);
extern void fn_8015E4B0(void);
extern void fn_8015E7A0(void);
extern void fn_80160324(void);
extern void fn_801681B0(void);
extern void fn_80168824(void);
extern void fn_801698E4(void);
extern void fn_8016DA4C(void);
extern void fn_8016F5EC(void);
extern void fn_801750FC(void);
extern void fn_80175A38(void);
extern void fn_8017B16C(void);
extern void fn_8020ED84(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_80211940(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);
extern void fn_8044D034(void);
extern void fn_8044D1A4(void);
extern void fn_804EB654(void);
extern void fn_804EB818(void);
extern void fn_805634D4(void);
extern void fn_805638C0(void);
extern void fn_80680CF8(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 jumptable_8077AAD0[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077AAC4[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7B10[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881994;
extern u32 lbl_808819A4;
extern u32 lbl_808819DC;
extern u32 lbl_808819F8;
extern u32 lbl_80881A50;
extern u32 lbl_80881A80;
extern u32 lbl_80881B0C;
extern u32 lbl_80881B10;
extern u32 lbl_80881B14;

/* Function declarations */
void fn_8014F860(void);
void fn_8014F8F4(void);
void fn_8014F960(void);
void fn_8014FAD0(void);
void fn_8014FB60(void);
void fn_8014FCC4(void);
void fn_8014FCE8(void);
void fn_8014FD0C(void);
void fn_8014FD30(void);
void fn_8014FF9C(void);
void fn_80150178(void);
void fn_801501F0(void);
void fn_80150460(void);
void fn_8015061C(void);
void fn_8015076C(void);
void fn_8015115C(void);
void fn_80151168(void);
void fn_80151180(void);
void fn_80151188(void);
void fn_80151194(void);

asm void fn_8014F860(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0xc(r3)
    stmw r26, 0x8(r1)
    mr r26, r3
    cmpwi r0, 0x0
    mr r27, r4
    mr r28, r5
    mr r29, r6
    beq lbl_fn_8014F860_00000080
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8014F860_00000074
lbl_fn_8014F860_00000038:
    lwz r0, 0x0(r26)
    add r3, r0, r31
    lwzx r0, r31, r0
    cmpwi r0, -0x1
    beq lbl_fn_8014F860_00000054
    cmpw r27, r0
    bne lbl_fn_8014F860_0000006C
lbl_fn_8014F860_00000054:
    lwz r12, 0x4(r3)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mtctr r12
    bctrl
lbl_fn_8014F860_0000006C:
    addi r30, r30, 0x1
    addi r31, r31, 0x8
lbl_fn_8014F860_00000074:
    lwz r0, 0x4(r26)
    cmpw r30, r0
    blt lbl_fn_8014F860_00000038
lbl_fn_8014F860_00000080:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8014F8F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_8014F8F4_000000E4
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r31, 0x1
    lis r5, lbl_807C7B10@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7B10@l
    stw r0, 0x8(r3)
    stw r31, 0xc(r3)
    bl __register_global_object
    stb r31, lbl_8087EE74
lbl_fn_8014F8F4_000000E4:
    lwz r31, 0xc(r1)
    lis r3, lbl_807C6BB8@ha
    lwz r0, 0x14(r1)
    addi r3, r3, lbl_807C6BB8@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8014F960(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x678(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8014F960_00000250
    beq lbl_fn_8014F960_0000014C
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014F960_0000014C:
    lwz r3, 0x67c(r31)
    li r0, 0x0
    stw r0, 0x678(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8014F960_00000180
    beq lbl_fn_8014F960_00000178
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014F960_00000178:
    li r0, 0x0
    stw r0, 0x67c(r31)
lbl_fn_8014F960_00000180:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8014F960_000001A0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8014F960_000001A0:
    cmpwi r28, 0x0
    beq lbl_fn_8014F960_00000250
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_8014F960_000001E8
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C7B10@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7B10@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_8014F960_000001E8:
    lis r29, lbl_807C6BB8@ha
    addi r29, r29, lbl_807C6BB8@l
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8014F960_00000250
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8014F960_00000244
lbl_fn_8014F960_00000208:
    lwz r0, 0x0(r29)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_8014F960_00000224
    cmpwi r0, 0x9
    bne lbl_fn_8014F960_0000023C
lbl_fn_8014F960_00000224:
    lwz r12, 0x4(r3)
    mr r4, r31
    li r3, 0x9
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_8014F960_0000023C:
    addi r28, r28, 0x1
    addi r30, r30, 0x8
lbl_fn_8014F960_00000244:
    lwz r0, 0x4(r29)
    cmpw r28, r0
    blt lbl_fn_8014F960_00000208
lbl_fn_8014F960_00000250:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8014FAD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    mr r31, r28
    b lbl_fn_8014FAD0_000002D0
lbl_fn_8014FAD0_000002A0:
    lwz r3, 0x654(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8014FAD0_000002C8
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8014FAD0_000002C8
    li r30, 0x1
lbl_fn_8014FAD0_000002C8:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_8014FAD0_000002D0:
    lwz r0, 0x650(r28)
    cmplw r29, r0
    blt lbl_fn_8014FAD0_000002A0
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8014FB60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8014FB60_000003A4
    lwz r0, 0x674(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8014FB60_000003A4
    lwz r3, 0x678(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8014FB60_00000368
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8014FB60_00000360
    lwz r3, 0x678(r31)
    lwz r0, 0x648(r31)
    cmplw r3, r0
    beq lbl_fn_8014FB60_00000368
lbl_fn_8014FB60_00000360:
    li r3, 0x0
    b lbl_fn_8014FB60_00000450
lbl_fn_8014FB60_00000368:
    lwz r3, 0x67c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8014FB60_000003A4
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8014FB60_0000039C
    lwz r3, 0x67c(r31)
    lwz r0, 0x64c(r31)
    cmplw r3, r0
    beq lbl_fn_8014FB60_000003A4
lbl_fn_8014FB60_0000039C:
    li r3, 0x0
    b lbl_fn_8014FB60_00000450
lbl_fn_8014FB60_000003A4:
    lwz r0, 0x648(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8014FB60_0000044C
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_8014FB60_0000044C
    lwz r0, 0x1208(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8014FB60_0000044C
    lwz r0, 0xf54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8014FB60_0000044C
    lwz r0, 0x139c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8014FB60_0000044C
    lwz r0, 0x13fc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8014FB60_0000044C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8014FB60_0000041C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x3a
    beq lbl_fn_8014FB60_0000044C
    cmpwi r0, 0x54
    beq lbl_fn_8014FB60_0000044C
    cmpwi r0, 0x79
    beq lbl_fn_8014FB60_0000044C
    cmpwi r0, 0x8a
    beq lbl_fn_8014FB60_0000044C
lbl_fn_8014FB60_0000041C:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8014FB60_00000444
    lwz r3, 0x2dc(r31)
    subi r3, r3, 0x6c
    xori r0, r3, 0x4
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r3, r0, 31
    b lbl_fn_8014FB60_00000450
lbl_fn_8014FB60_00000444:
    li r3, 0x1
    b lbl_fn_8014FB60_00000450
lbl_fn_8014FB60_0000044C:
    li r3, 0x0
lbl_fn_8014FB60_00000450:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8014FCC4(void)
{
    nofralloc
    lwz r4, 0x648(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bnelr
    li r3, 0x1
    blr
}

asm void fn_8014FCE8(void)
{
    nofralloc
    lwz r4, 0x648(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1
    bnelr
    li r3, 0x1
    blr
}

asm void fn_8014FD0C(void)
{
    nofralloc
    lwz r4, 0x648(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x4(r4)
    cmpwi r0, 0x2
    bnelr
    li r3, 0x1
    blr
}

asm void fn_8014FD30(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r0, 0xac(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8014FD30_00000720
    lwz r5, 0x680(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8014FD30_00000678
    lis r4, 0x1062
    lwz r5, 0x4(r5)
    addi r0, r4, 0x4dd3
    mulhw r0, r0, r5
    lis r4, 0x6666
    addi r6, r4, 0x6667
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r0, r0, r5
    mulhw r0, r6, r0
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    cmpwi r0, 0x2e
    bne lbl_fn_8014FD30_00000678
    lfs f0, lbl_80881964
    lis r29, lbl_80737A9C@ha
    lis r30, lbl_807C7030@ha
    stfs f0, 0x2c(r1)
    addi r29, r29, lbl_80737A9C@l
    addi r7, r1, 0x2c
    addi r5, r30, lbl_807C7030@l
    stfs f0, 0x30(r1)
    mr r6, r5
    addi r4, r29, 0x303
    stfs f0, 0x34(r1)
    li r8, 0x8
    addi r3, r3, 0xb0
    bl fn_80093F1C
    lfs f0, lbl_80881964
    addi r5, r30, lbl_807C7030@l
    stfs f0, 0x20(r1)
    mr r6, r5
    addi r3, r31, 0xb0
    addi r4, r29, 0x30d
    stfs f0, 0x24(r1)
    addi r7, r1, 0x20
    li r8, 0x8
    stfs f0, 0x28(r1)
    bl fn_80093F1C
    lfs f0, lbl_80881964
    addi r5, r30, lbl_807C7030@l
    stfs f0, 0x14(r1)
    mr r6, r5
    addi r3, r31, 0xb0
    addi r4, r29, 0x317
    stfs f0, 0x18(r1)
    addi r7, r1, 0x14
    li r8, 0x8
    stfs f0, 0x1c(r1)
    bl fn_80093F1C
    lfs f0, lbl_80881964
    addi r5, r30, lbl_807C7030@l
    stfs f0, 0x8(r1)
    mr r6, r5
    addi r3, r31, 0xb0
    addi r4, r29, 0x322
    stfs f0, 0xc(r1)
    addi r7, r1, 0x8
    li r8, 0x8
    stfs f0, 0x10(r1)
    bl fn_80093F1C
    lwz r0, 0x484(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8014FD30_00000620
    mr r3, r31
    li r4, 0x0
    li r5, 0x6
    bl fn_8014C0B4
lbl_fn_8014FD30_00000620:
    lwz r0, 0x488(r31)
    cmpwi r0, 0x14
    bne lbl_fn_8014FD30_0000063C
    mr r3, r31
    li r4, 0x1
    li r5, 0x17
    bl fn_8014C0B4
lbl_fn_8014FD30_0000063C:
    lwz r0, 0x48c(r31)
    cmpwi r0, 0x1a
    bne lbl_fn_8014FD30_00000658
    mr r3, r31
    li r4, 0x2
    li r5, 0x1d
    bl fn_8014C0B4
lbl_fn_8014FD30_00000658:
    lwz r0, 0x490(r31)
    cmpwi r0, 0x20
    bne lbl_fn_8014FD30_00000720
    mr r3, r31
    li r4, 0x3
    li r5, 0x24
    bl fn_8014C0B4
    b lbl_fn_8014FD30_00000720
lbl_fn_8014FD30_00000678:
    lis r30, lbl_80737A9C@ha
    addi r3, r3, 0xb0
    addi r30, r30, lbl_80737A9C@l
    addi r4, r30, 0x303
    bl fn_80094778
    addi r3, r31, 0xb0
    addi r4, r30, 0x30d
    bl fn_80094778
    addi r3, r31, 0xb0
    addi r4, r30, 0x317
    bl fn_80094778
    addi r3, r31, 0xb0
    addi r4, r30, 0x322
    bl fn_80094778
    lwz r0, 0x484(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8014FD30_000006CC
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_8014C0B4
lbl_fn_8014FD30_000006CC:
    lwz r0, 0x488(r31)
    cmpwi r0, 0x17
    bne lbl_fn_8014FD30_000006E8
    mr r3, r31
    li r4, 0x1
    li r5, 0x14
    bl fn_8014C0B4
lbl_fn_8014FD30_000006E8:
    lwz r0, 0x48c(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_8014FD30_00000704
    mr r3, r31
    li r4, 0x2
    li r5, 0x1a
    bl fn_8014C0B4
lbl_fn_8014FD30_00000704:
    lwz r0, 0x490(r31)
    cmpwi r0, 0x24
    bne lbl_fn_8014FD30_00000720
    mr r3, r31
    li r4, 0x3
    li r5, 0x20
    bl fn_8014C0B4
lbl_fn_8014FD30_00000720:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8014FF9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    slwi r0, r4, 2
    stmw r24, 0x10(r1)
    add r30, r3, r0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    lwz r3, 0x680(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8014FF9C_00000784
    beq lbl_fn_8014FF9C_00000784
    li r4, 0x1
    bl fn_805638C0
    li r0, 0x0
    stw r0, 0x680(r30)
lbl_fn_8014FF9C_00000784:
    cmpwi r26, 0x4
    li r29, 0x0
    li r24, 0x0
    bge lbl_fn_8014FF9C_0000089C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8014FF9C_00000868
    lwz r3, 0x50(r25)
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_8014FF9C_0000089C
    cmpwi r3, 0x7
    bge lbl_fn_8014FF9C_0000089C
    lwz r3, lbl_8087F610
    mr r4, r25
    mr r5, r26
    bl fn_804EB654
    cmpwi r3, 0x0
    beq lbl_fn_8014FF9C_0000089C
    lwz r3, lbl_8087F610
    mr r4, r25
    mr r5, r26
    bl fn_804EB654
    lwz r27, 0x0(r3)
    mr r31, r3
    cmpwi r27, 0x3e8
    blt lbl_fn_8014FF9C_0000084C
    mr r3, r26
    mr r4, r27
    bl fn_8020ED84
    cmpwi r3, 0x0
    bne lbl_fn_8014FF9C_0000084C
    lis r24, 0x1062
    mr r3, r26
    addi r0, r24, 0x4dd3
    mulhw r0, r0, r27
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r27
    bl fn_8020ED84
    bl fn_8020EF80
    bl fn_80211480
    addi r0, r24, 0x4dd3
    mulhw r0, r0, r27
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_80211940
lbl_fn_8014FF9C_0000084C:
    lhz r3, 0x4(r31)
    li r24, 0x0
    extrwi. r0, r3, 1, 16
    beq lbl_fn_8014FF9C_0000089C
    addi r29, r31, 0x4c
    extrwi r28, r3, 1, 17
    b lbl_fn_8014FF9C_0000089C
lbl_fn_8014FF9C_00000868:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_8014FF9C_0000089C
    lwz r5, 0x50(r25)
    mr r4, r26
    bl fn_8044D1A4
    cmpwi r3, 0x0
    mr r24, r3
    blt lbl_fn_8014FF9C_0000089C
    lwz r3, lbl_8087F4F0
    mr r4, r24
    bl fn_8044D034
    mr r29, r3
lbl_fn_8014FF9C_0000089C:
    lis r5, lbl_80737A9C@ha
    li r3, 0x43c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8014FF9C_000008F0
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r4, r26
    mr r5, r27
    stw r0, 0xc(r1)
    mr r6, r24
    mr r7, r25
    mr r8, r29
    mr r10, r28
    li r9, 0x0
    bl fn_805634D4
lbl_fn_8014FF9C_000008F0:
    cmpwi r26, 0x0
    stw r3, 0x680(r30)
    bne lbl_fn_8014FF9C_00000904
    mr r3, r25
    bl fn_8014FD30
lbl_fn_8014FF9C_00000904:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80150178(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    slwi r0, r4, 2
    stw r31, 0x1c(r1)
    add r31, r3, r0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r3, 0x680(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80150178_0000095C
    li r4, 0x1
    bl fn_805638C0
lbl_fn_80150178_0000095C:
    cmpwi r29, 0x0
    stw r30, 0x680(r31)
    bne lbl_fn_80150178_00000970
    mr r3, r28
    bl fn_8014FD30
lbl_fn_80150178_00000970:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801501F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lwz r0, 0x12d0(r4)
    addi r4, r4, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801501F0_000009F8
lbl_fn_801501F0_000009C4:
    lwz r5, 0x0(r4)
    lwz r0, 0xac(r5)
    rlwinm r3, r0, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_801501F0_000009F0
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    ble lbl_fn_801501F0_000009F0
    bl fn_80219E6C
    b lbl_fn_801501F0_000009FC
lbl_fn_801501F0_000009F0:
    addi r4, r4, 0x14
    bdnz lbl_fn_801501F0_000009C4
lbl_fn_801501F0_000009F8:
    li r3, 0x0
lbl_fn_801501F0_000009FC:
    cmpwi r3, 0x0
    bne lbl_fn_801501F0_00000AA0
    cmpwi r31, 0x0
    beq lbl_fn_801501F0_00000AA0
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801501F0_00000A38
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_801501F0_00000A54
lbl_fn_801501F0_00000A38:
    lis r5, lbl_8077AAC4@ha
    lwzu r4, lbl_8077AAC4@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_801501F0_00000A54:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801501F0_00000A94
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_fn_801501F0_00000A98
lbl_fn_801501F0_00000A94:
    li r3, 0x0
lbl_fn_801501F0_00000A98:
    cmpwi r3, 0x0
    bne lbl_fn_801501F0_00000BE4
lbl_fn_801501F0_00000AA0:
    lwz r0, 0x12a8(r30)
    li r29, 0x0
    srwi. r0, r0, 31
    beq lbl_fn_801501F0_00000AB8
    li r29, 0x1
    b lbl_fn_801501F0_00000BB4
lbl_fn_801501F0_00000AB8:
    lwz r4, 0xfdc(r30)
    cmplw r31, r4
    beq lbl_fn_801501F0_00000B5C
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    bne lbl_fn_801501F0_00000B00
    cmpwi r31, 0x0
    beq lbl_fn_801501F0_00000AE4
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801501F0_00000AF8
lbl_fn_801501F0_00000AE4:
    cmpwi r4, 0x0
    beq lbl_fn_801501F0_00000B5C
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801501F0_00000B5C
lbl_fn_801501F0_00000AF8:
    li r29, 0x1
    b lbl_fn_801501F0_00000B5C
lbl_fn_801501F0_00000B00:
    mr r4, r31
    bl fn_804EB818
    cmpwi r3, 0x0
    bne lbl_fn_801501F0_00000B5C
    lwz r3, lbl_8087F610
    lwz r4, 0xfdc(r30)
    bl fn_804EB818
    cmpwi r3, 0x0
    bne lbl_fn_801501F0_00000B5C
    cmpwi r31, 0x0
    beq lbl_fn_801501F0_00000B5C
    lwz r4, 0xf14(r31)
    cmpwi r4, 0x0
    ble lbl_fn_801501F0_00000B5C
    lwz r3, 0xfdc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801501F0_00000B5C
    lwz r0, 0xf14(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801501F0_00000B5C
    cmpw r4, r0
    bne lbl_fn_801501F0_00000B5C
    li r29, 0x1
lbl_fn_801501F0_00000B5C:
    lwz r0, 0x12d0(r31)
    addi r4, r31, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801501F0_00000BA4
lbl_fn_801501F0_00000B70:
    lwz r5, 0x0(r4)
    lwz r0, 0xac(r5)
    rlwinm r3, r0, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_801501F0_00000B9C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    ble lbl_fn_801501F0_00000B9C
    bl fn_80219E6C
    b lbl_fn_801501F0_00000BA8
lbl_fn_801501F0_00000B9C:
    addi r4, r4, 0x14
    bdnz lbl_fn_801501F0_00000B70
lbl_fn_801501F0_00000BA4:
    li r3, 0x0
lbl_fn_801501F0_00000BA8:
    cmpwi r3, 0x0
    beq lbl_fn_801501F0_00000BB4
    li r29, 0x1
lbl_fn_801501F0_00000BB4:
    cmpwi r29, 0x0
    beq lbl_fn_801501F0_00000BD4
    lwz r5, 0xfe4(r30)
    mr r3, r30
    mr r4, r31
    addi r5, r5, 0x1
    bl fn_80150460
    b lbl_fn_801501F0_00000BE4
lbl_fn_801501F0_00000BD4:
    mr r3, r30
    mr r4, r31
    li r5, 0x1
    bl fn_80150460
lbl_fn_801501F0_00000BE4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80150460(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x3c
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r31, 0xfdc(r3)
    stw r5, 0xfe4(r3)
    stw r4, 0xfdc(r3)
    stw r0, 0xfe0(r3)
    beq lbl_fn_80150460_00000D9C
    addi r29, r4, 0x7d4
    li r4, 0xa
    mr r3, r29
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_80150460_00000C7C
    mr r3, r29
    li r4, 0xa
    li r5, -0x1
    bl fn_80133F18
    mulli r3, r3, 0x1e
    lwz r0, 0xfe0(r30)
    add r0, r0, r3
    stw r0, 0xfe0(r30)
    b lbl_fn_80150460_00000CE0
lbl_fn_80150460_00000C7C:
    cmpwi r31, 0x0
    beq lbl_fn_80150460_00000CE0
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80150460_00000CE0
    li r4, 0x8
    li r5, 0x0
    li r6, 0xa
    li r7, -0x1
    bl fn_80045694
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80150460_00000CE0
    lwz r3, 0x648(r31)
    li r4, 0x8
    li r5, 0x0
    li r6, 0xa
    li r7, -0x1
    bl fn_80045694
    lwz r3, 0x4(r3)
    lwz r0, 0xfe0(r30)
    mulli r3, r3, 0x1e
    add r0, r0, r3
    stw r0, 0xfe0(r30)
lbl_fn_80150460_00000CE0:
    lwz r0, 0x12d0(r28)
    addi r4, r28, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80150460_00000D28
lbl_fn_80150460_00000CF4:
    lwz r5, 0x0(r4)
    lwz r0, 0xac(r5)
    rlwinm r3, r0, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_80150460_00000D20
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    ble lbl_fn_80150460_00000D20
    bl fn_80219E6C
    b lbl_fn_80150460_00000D2C
lbl_fn_80150460_00000D20:
    addi r4, r4, 0x14
    bdnz lbl_fn_80150460_00000CF4
lbl_fn_80150460_00000D28:
    li r3, 0x0
lbl_fn_80150460_00000D2C:
    cmpwi r3, 0x0
    bne lbl_fn_80150460_00000D90
    cmpwi r31, 0x0
    beq lbl_fn_80150460_00000D9C
    lwz r0, 0x12d0(r31)
    addi r4, r31, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80150460_00000D84
lbl_fn_80150460_00000D50:
    lwz r5, 0x0(r4)
    lwz r0, 0xac(r5)
    rlwinm r3, r0, 0, 5, 5
    subis r0, r3, 0x400
    cmplwi r0, 0x0
    bne lbl_fn_80150460_00000D7C
    lwz r3, 0x4(r5)
    cmpwi r3, 0x0
    ble lbl_fn_80150460_00000D7C
    bl fn_80219E6C
    b lbl_fn_80150460_00000D88
lbl_fn_80150460_00000D7C:
    addi r4, r4, 0x14
    bdnz lbl_fn_80150460_00000D50
lbl_fn_80150460_00000D84:
    li r3, 0x0
lbl_fn_80150460_00000D88:
    cmpwi r3, 0x0
    beq lbl_fn_80150460_00000D9C
lbl_fn_80150460_00000D90:
    lwz r3, 0xfe0(r30)
    addi r0, r3, 0x96
    stw r0, 0xfe0(r30)
lbl_fn_80150460_00000D9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8015061C(void)
{
    nofralloc
    lwz r0, 0x12a8(r3)
    li r7, 0x0
    srwi. r0, r0, 31
    beq lbl_fn_8015061C_00000DD4
    li r7, 0x1
    b lbl_fn_8015061C_00000F04
lbl_fn_8015061C_00000DD4:
    lwz r6, lbl_8087F610
    cmpwi cr1, r6, 0x0
    bne cr1, lbl_fn_8015061C_00000E00
    lwz r3, 0xfdc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8015061C_00000F04
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8015061C_00000F04
    li r7, 0x1
    b lbl_fn_8015061C_00000F04
lbl_fn_8015061C_00000E00:
    lwz r5, 0xfdc(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8015061C_00000F04
    cmplw r5, r4
    beq lbl_fn_8015061C_00000F04
    beq lbl_fn_8015061C_00000E68
    beq cr1, lbl_fn_8015061C_00000E30
    lwz r0, 0x540(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8015061C_00000E30
    li r4, 0x0
    b lbl_fn_8015061C_00000EF8
lbl_fn_8015061C_00000E30:
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8015061C_00000E60
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8015061C_00000E60
    lwz r3, lbl_8087F0A8
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8015061C_00000E68
lbl_fn_8015061C_00000E60:
    li r4, 0x0
    b lbl_fn_8015061C_00000EF8
lbl_fn_8015061C_00000E68:
    lwz r3, 0xf14(r5)
    cmpwi r3, 0x0
    blt lbl_fn_8015061C_00000E90
    lwz r0, 0xf14(r4)
    cmpwi r0, 0x0
    blt lbl_fn_8015061C_00000E90
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r4, r0, 5
    b lbl_fn_8015061C_00000EF8
lbl_fn_8015061C_00000E90:
    lwz r3, 0x48(r4)
    li r4, 0x1
    lwz r6, 0x48(r5)
    li r5, 0x1
    cmpw r6, r3
    beq lbl_fn_8015061C_00000ECC
    cmpwi r6, 0x0
    li r0, 0x0
    bne lbl_fn_8015061C_00000EC0
    cmpwi r3, 0x3
    bne lbl_fn_8015061C_00000EC0
    li r0, 0x1
lbl_fn_8015061C_00000EC0:
    cmpwi r0, 0x0
    bne lbl_fn_8015061C_00000ECC
    li r5, 0x0
lbl_fn_8015061C_00000ECC:
    cmpwi r5, 0x0
    bne lbl_fn_8015061C_00000EF8
    cmpwi r6, 0x3
    li r0, 0x0
    bne lbl_fn_8015061C_00000EEC
    cmpwi r3, 0x0
    bne lbl_fn_8015061C_00000EEC
    li r0, 0x1
lbl_fn_8015061C_00000EEC:
    cmpwi r0, 0x0
    bne lbl_fn_8015061C_00000EF8
    li r4, 0x0
lbl_fn_8015061C_00000EF8:
    cmpwi r4, 0x0
    beq lbl_fn_8015061C_00000F04
    li r7, 0x1
lbl_fn_8015061C_00000F04:
    mr r3, r7
    blr
}

asm void fn_8015076C(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x210
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    bl _savegpr_23
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r29, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    addi r3, r1, 0x120
    bl fn_80151218
    stw r24, 0x120(r1)
    mr r4, r25
    addi r3, r1, 0x124
    bl fn_8000D124
    mr r4, r29
    addi r3, r1, 0x130
    bl fn_8000D124
    cmpwi r28, 0x0
    stw r26, 0x13c(r1)
    stw r27, 0x140(r1)
    beq lbl_fn_8015076C_00000FB4
    lwz r0, 0x80(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8015076C_00000FB4
    lfs f1, lbl_808819F8
    addi r3, r1, 0xbc
    addi r4, r28, 0x28
    bl fn_800F72CC
    addi r3, r1, 0x124
    addi r4, r1, 0xbc
    bl fn_8000D124
    lwz r0, 0x140(r1)
    oris r0, r0, 0x1
    stw r0, 0x140(r1)
lbl_fn_8015076C_00000FB4:
    bl fn_8014F8F4
    mr r5, r23
    addi r6, r1, 0x120
    li r4, 0xe
    bl fn_8014F860
    mr r3, r23
    bl fn_80139EBC
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_00000FE0
    mr r3, r23
    bl fn_80175A38
lbl_fn_8015076C_00000FE0:
    addi r3, r23, 0x6d0
    bl fn_8015121C
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_000018D4
    mr r3, r23
    bl fn_80148334
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_00001030
    rlwinm r3, r27, 0, 3, 3
    subis r0, r3, 0x1000
    cmplwi r0, 0x0
    beq lbl_fn_8015076C_00001030
    mr r4, r24
    mr r5, r26
    addi r3, r1, 0x18
    bl fn_8015115C
    mr r4, r3
    addi r3, r23, 0x6d0
    bl fn_8015123C
    b lbl_fn_8015076C_000018D4
lbl_fn_8015076C_00001030:
    mr r3, r25
    bl fn_801162A0
    fmr f30, f1
    mr r3, r23
    bl fn_80160324
    lwz r4, 0x55c(r23)
    mr r31, r3
    cmpwi r4, 0x6
    bne lbl_fn_8015076C_000010C0
    lwz r0, 0x560(r23)
    cmpwi r0, 0x79
    beq lbl_fn_8015076C_000010BC
    bge lbl_fn_8015076C_00001098
    cmpwi r0, 0x2e
    beq lbl_fn_8015076C_000010BC
    bge lbl_fn_8015076C_00001084
    cmpwi r0, 0x25
    bge lbl_fn_8015076C_000010C0
    cmpwi r0, 0x23
    bge lbl_fn_8015076C_000010BC
    b lbl_fn_8015076C_000010C0
lbl_fn_8015076C_00001084:
    cmpwi r0, 0x36
    bge lbl_fn_8015076C_000010C0
    cmpwi r0, 0x34
    bge lbl_fn_8015076C_000010BC
    b lbl_fn_8015076C_000010C0
lbl_fn_8015076C_00001098:
    cmpwi r0, 0x8a
    beq lbl_fn_8015076C_000010BC
    bge lbl_fn_8015076C_000010B0
    cmpwi r0, 0x84
    beq lbl_fn_8015076C_000010BC
    b lbl_fn_8015076C_000010C0
lbl_fn_8015076C_000010B0:
    cmpwi r0, 0x8e
    beq lbl_fn_8015076C_000010BC
    b lbl_fn_8015076C_000010C0
lbl_fn_8015076C_000010BC:
    lfs f30, lbl_8088196C
lbl_fn_8015076C_000010C0:
    rlwinm r30, r27, 0, 28, 28
    cmplwi r30, 0x8
    beq lbl_fn_8015076C_00001108
    cmpwi r4, 0x6
    bne lbl_fn_8015076C_00001108
    lwz r0, 0x560(r23)
    cmpwi r0, 0x1e
    bne lbl_fn_8015076C_00001108
    lwz r3, 0x638(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_00001108
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpwi r0, 0x1
    beq lbl_fn_8015076C_00001104
    cmpwi r0, 0x4
    bne lbl_fn_8015076C_00001108
lbl_fn_8015076C_00001104:
    lfs f30, lbl_8088196C
lbl_fn_8015076C_00001108:
    mr r3, r23
    bl fn_8017B16C
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_00001158
    lwz r0, 0x55c(r23)
    cmpwi r0, 0x6
    bne lbl_fn_8015076C_00001158
    lwz r0, 0x560(r23)
    cmpwi r0, 0x1d
    beq lbl_fn_8015076C_00001138
    cmpwi r0, 0x1f
    bne lbl_fn_8015076C_00001158
lbl_fn_8015076C_00001138:
    lwz r0, 0x674(r23)
    cmpwi r0, 0x0
    blt lbl_fn_8015076C_00001158
    mr r3, r23
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8015076C_00001158:
    bl fn_80121F00
    li r4, 0x67
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000012D0
    mr r3, r23
    bl fn_800F7F80
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000012D0
    addi r3, r23, 0x7d4
    bl fn_80139F4C
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_000012D0
    addi r3, r1, 0x198
    bl fn_80140500
    lfs f1, lbl_8088196C
    addi r3, r1, 0xb0
    lfs f2, lbl_808819F8
    fmr f3, f1
    bl fn_8000D114
    mr r5, r3
    addi r3, r1, 0xf8
    addi r4, r23, 0x528
    bl fn_80013410
    lfs f1, lbl_80881B0C
    mr r4, r25
    addi r3, r1, 0x8c
    bl fn_800F72CC
    lfs f1, lbl_8088196C
    addi r3, r1, 0x98
    lfs f2, lbl_808819F8
    fmr f3, f1
    bl fn_8000D114
    mr r5, r3
    addi r3, r1, 0xa4
    addi r4, r23, 0x528
    bl fn_80013410
    addi r3, r1, 0xec
    addi r4, r1, 0xa4
    addi r5, r1, 0x8c
    bl fn_80013410
    bl fn_801404F8
    addi r4, r1, 0x198
    addi r5, r1, 0xf8
    addi r6, r1, 0xec
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000012D0
    lwz r0, 0x1d4(r1)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8015076C_000012D0
    lfs f1, lbl_8088196C
    addi r3, r1, 0x80
    lfs f2, lbl_808819F8
    fmr f3, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x19c
    bl fn_80013484
    mr r3, r23
    bl fn_8016DA4C
    lwz r0, 0x1208(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8015076C_00001270
    mr r3, r23
    bl fn_801750FC
lbl_fn_8015076C_00001270:
    addi r3, r1, 0x5c
    addi r4, r1, 0x1c0
    bl fn_8001047C
    mr r27, r3
    addi r3, r1, 0x68
    addi r4, r1, 0x19c
    bl fn_8001047C
    mr r25, r3
    addi r3, r1, 0x74
    addi r4, r23, 0x528
    bl fn_8001047C
    mr r4, r3
    mr r3, r23
    mr r5, r25
    mr r6, r27
    bl fn_8015CC70
    mr r4, r24
    mr r5, r26
    addi r3, r1, 0x10
    bl fn_8015115C
    mr r4, r3
    addi r3, r23, 0x6d0
    bl fn_8015123C
    b lbl_fn_8015076C_000018D4
lbl_fn_8015076C_000012D0:
    lwz r3, 0x1208(r23)
    lwz r4, 0x58c(r23)
    neg r0, r3
    or r0, r0, r3
    cmpwi r4, 0x3
    srwi r29, r0, 31
    beq lbl_fn_8015076C_000017C0
    cmpwi r4, 0x4
    beq lbl_fn_8015076C_000017C0
    mr r3, r23
    bl fn_8013A158
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_0000130C
    lfs f31, lbl_808819F8
    b lbl_fn_8015076C_00001310
lbl_fn_8015076C_0000130C:
    lfs f31, lbl_80881A50
lbl_fn_8015076C_00001310:
    lwz r0, 0x137c(r23)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8015076C_00001400
    addi r3, r1, 0xe0
    addi r4, r23, 0x534
    bl fn_8001047C
    addi r3, r1, 0x148
    bl fn_80140500
    mr r4, r23
    addi r3, r1, 0x44
    bl fn_8014052C
    lfs f1, lbl_808819DC
    addi r3, r1, 0x50
    addi r4, r1, 0x44
    bl fn_800F72CC
    addi r3, r1, 0xd4
    addi r4, r23, 0x528
    addi r5, r1, 0x50
    bl fn_80013410
    mr r4, r23
    addi r3, r1, 0x2c
    bl fn_8014052C
    lfs f1, lbl_80881A80
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    bl fn_800F72CC
    addi r3, r1, 0xc8
    addi r4, r23, 0x528
    addi r5, r1, 0x38
    bl fn_80013410
    lfs f1, 0xd8(r1)
    lfs f2, lbl_808819DC
    lfs f0, 0xcc(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    stfs f1, 0xd8(r1)
    stfs f0, 0xcc(r1)
    bl fn_801404F8
    addi r4, r1, 0x148
    addi r5, r1, 0xd4
    addi r6, r1, 0xc8
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000013E8
    addi r3, r1, 0x20
    addi r4, r1, 0x170
    bl fn_80011034
    addi r3, r1, 0xe0
    addi r4, r1, 0x20
    bl fn_8000D124
lbl_fn_8015076C_000013E8:
    mr r3, r23
    bl fn_8016DA4C
    mr r3, r23
    addi r4, r1, 0xe0
    bl fn_801698E4
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_00001400:
    cmpwi r28, 0x0
    beq lbl_fn_8015076C_00001454
    lwz r3, 0x8(r28)
    li r4, 0x4000
    addi r3, r3, 0x90
    bl fn_80151168
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_00001454
    addi r3, r23, 0x7d4
    li r4, 0x4000
    bl fn_8013A16C
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_00001454
    lwz r6, 0x8(r28)
    mr r3, r23
    mr r4, r25
    li r5, 0x0
    lwz r0, 0xac(r6)
    extrwi r6, r0, 1, 22
    bl fn_801681B0
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_00001454:
    cmpwi r28, 0x0
    beq lbl_fn_8015076C_000014BC
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000014BC
    bl fn_800F52F0
    li r4, 0x18
    bl fn_80133EE8
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000014BC
    addi r3, r23, 0x7d4
    li r4, 0x4000
    bl fn_8013A16C
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000014BC
    lwz r3, 0x0(r28)
    bl fn_800F52F0
    li r4, 0x18
    li r5, -0x1
    bl fn_80133F18
    mulli r5, r3, 0x1e
    mr r3, r23
    mr r4, r25
    li r6, 0x0
    bl fn_801681B0
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_000014BC:
    rlwinm r0, r27, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8015076C_000017C0
    clrlwi r0, r27, 31
    cmplwi r0, 0x1
    beq lbl_fn_8015076C_000017C0
    rlwinm r0, r27, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8015076C_00001530
    lwz r0, 0x12a4(r23)
    srwi. r0, r0, 31
    bne lbl_fn_8015076C_000017C0
    mr r3, r23
    bl fn_800F52F0
    li r4, 0x10
    addi r3, r3, 0xe8
    bl fn_801404E0
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_000017C0
    lwz r0, 0x55c(r23)
    cmpwi r0, 0x6
    bne lbl_fn_8015076C_00001520
    lwz r0, 0x560(r23)
    cmpwi r0, 0x17
    beq lbl_fn_8015076C_000017C0
lbl_fn_8015076C_00001520:
    mr r3, r23
    mr r4, r25
    bl fn_8015E1B8
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_00001530:
    cmplwi r30, 0x8
    bne lbl_fn_8015076C_000015E0
    lwz r0, 0x12a4(r23)
    srwi. r0, r0, 31
    bne lbl_fn_8015076C_000017C0
    mr r3, r23
    bl fn_800F52F0
    li r4, 0x10
    addi r3, r3, 0xe8
    bl fn_801404E0
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_000017C0
    lwz r0, 0x55c(r23)
    cmpwi r0, 0x6
    bne lbl_fn_8015076C_00001578
    lwz r0, 0x560(r23)
    cmpwi r0, 0x17
    beq lbl_fn_8015076C_000017C0
lbl_fn_8015076C_00001578:
    rlwinm r0, r27, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8015076C_00001594
    mr r3, r23
    mr r4, r25
    bl fn_8015DEC0
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_00001594:
    cmpwi r28, 0x0
    lfs f1, lbl_80881994
    beq lbl_fn_8015076C_000015BC
    lwz r3, 0x8(r28)
    lwz r0, 0xac(r3)
    rlwinm r3, r0, 0, 2, 2
    subis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_fn_8015076C_000015BC
    lfs f1, lbl_808819A4
lbl_fn_8015076C_000015BC:
    cmpwi r28, 0x0
    mr r3, r23
    mr r4, r25
    beq lbl_fn_8015076C_000015D4
    lwz r5, 0x0(r28)
    b lbl_fn_8015076C_000015D8
lbl_fn_8015076C_000015D4:
    li r5, 0x0
lbl_fn_8015076C_000015D8:
    bl fn_8015D8C0
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_000015E0:
    cmpwi r28, 0x0
    beq lbl_fn_8015076C_0000162C
    lwz r3, 0x8(r28)
    lis r4, 0x2
    addi r3, r3, 0x90
    bl fn_80151168
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_0000162C
    addi r3, r23, 0x7d4
    lis r4, 0x2
    bl fn_8013A16C
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_0000162C
    lwz r4, 0x8(r28)
    mr r3, r23
    lwz r0, 0xac(r4)
    extrwi r4, r0, 1, 22
    bl fn_80168824
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_0000162C:
    fmuls f0, f31, f31
    fcmpo cr0, f30, f0
    bgt lbl_fn_8015076C_00001648
    rlwinm r3, r27, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_8015076C_000016A4
lbl_fn_8015076C_00001648:
    mr r3, r23
    bl fn_8016DA4C
    lwz r0, 0x55c(r23)
    cmpwi r0, 0x6
    bne lbl_fn_8015076C_00001668
    lwz r0, 0x560(r23)
    cmpwi r0, 0x17
    beq lbl_fn_8015076C_0000168C
lbl_fn_8015076C_00001668:
    cmpwi r28, 0x0
    mr r3, r23
    mr r4, r25
    beq lbl_fn_8015076C_00001680
    lwz r5, 0x58(r28)
    b lbl_fn_8015076C_00001684
lbl_fn_8015076C_00001680:
    li r5, -0x1
lbl_fn_8015076C_00001684:
    li r6, 0x0
    bl fn_8015E7A0
lbl_fn_8015076C_0000168C:
    lwz r3, 0xd1c(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000017C0
    mr r4, r23
    bl fn_8016F5EC
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_000016A4:
    lfs f0, lbl_80881B10
    fcmpo cr0, f30, f0
    ble lbl_fn_8015076C_000017BC
    lwz r0, 0x55c(r23)
    li r27, 0x1
    cmpwi r0, 0x6
    bne lbl_fn_8015076C_00001740
    lwz r0, 0x560(r23)
    cmplwi r0, 0x84
    bgt lbl_fn_8015076C_00001740
    lis r3, jumptable_8077AAD0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8077AAD0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r27, 0x0
    b lbl_fn_8015076C_00001740
    lwz r3, 0x1208(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_00001740
    bl fn_8013A18C
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_00001740
    li r27, 0x0
    b lbl_fn_8015076C_00001740
    addi r3, r23, 0xf80
    bl fn_8013A248
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_0000173C
    addi r3, r23, 0xf80
    bl fn_8013A214
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_00001740
lbl_fn_8015076C_0000173C:
    li r27, 0x0
lbl_fn_8015076C_00001740:
    lwz r0, 0x12a4(r23)
    srwi. r0, r0, 31
    beq lbl_fn_8015076C_0000176C
    mr r3, r23
    bl fn_800F7F80
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_0000176C
    lfs f0, lbl_80881B14
    fcmpo cr0, f30, f0
    bge lbl_fn_8015076C_0000176C
    li r27, 0x0
lbl_fn_8015076C_0000176C:
    cmpwi r27, 0x0
    beq lbl_fn_8015076C_000017B4
    mr r3, r23
    bl fn_8016DA4C
    cmpwi r28, 0x0
    mr r3, r23
    mr r4, r25
    beq lbl_fn_8015076C_00001794
    lwz r5, 0x54(r28)
    b lbl_fn_8015076C_00001798
lbl_fn_8015076C_00001794:
    li r5, -0x1
lbl_fn_8015076C_00001798:
    bl fn_8015E4B0
    lwz r3, 0xd1c(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000017C0
    mr r4, r23
    bl fn_8016F5EC
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_000017B4:
    li r29, 0x0
    b lbl_fn_8015076C_000017C0
lbl_fn_8015076C_000017BC:
    li r29, 0x0
lbl_fn_8015076C_000017C0:
    cmpwi r29, 0x0
    beq lbl_fn_8015076C_000017D0
    mr r3, r23
    bl fn_801750FC
lbl_fn_8015076C_000017D0:
    cmpwi r31, 0x0
    beq lbl_fn_8015076C_000018B8
    mr r3, r23
    bl fn_80160324
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_000018B8
    addi r3, r23, 0x7d4
    bl fn_80134270
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_00001818
    addi r3, r23, 0x7d4
    bl fn_80134290
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_00001818
    addi r3, r23, 0x7d4
    bl fn_801342B0
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000018AC
lbl_fn_8015076C_00001818:
    addi r3, r23, 0x7d4
    bl fn_80151188
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000018A4
    addi r3, r1, 0x104
    li r4, 0x2
    bl fn_80151194
    bl fn_80680CF8
    lis r4, 0x6666
    li r0, 0x3c
    addi r4, r4, 0x6667
    stw r0, 0x10c(r1)
    mulhw r0, r4, r3
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    stw r0, 0x108(r1)
    mr r3, r23
    bl fn_80140518
    cmpwi r3, 0x0
    bne lbl_fn_8015076C_00001884
    mr r3, r23
    bl fn_8013A158
    cmpwi r3, 0x0
    beq lbl_fn_8015076C_000018AC
lbl_fn_8015076C_00001884:
    mr r3, r23
    bl fn_800F7FB4
    cmpwi r3, 0x0
    bgt lbl_fn_8015076C_000018AC
    mr r3, r23
    addi r4, r1, 0x104
    bl fn_801511C4
    b lbl_fn_8015076C_000018AC
lbl_fn_8015076C_000018A4:
    li r0, 0x1e
    stw r0, 0xf0c(r23)
lbl_fn_8015076C_000018AC:
    bl fn_80151210
    mr r4, r23
    bl fn_80151204
lbl_fn_8015076C_000018B8:
    mr r4, r24
    mr r5, r26
    addi r3, r1, 0x8
    bl fn_8015115C
    mr r4, r3
    addi r3, r23, 0x6d0
    bl fn_8015123C
lbl_fn_8015076C_000018D4:
    addi r11, r1, 0x210
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    bl _restgpr_23
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_8015115C(void)
{
    nofralloc
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    blr
}

asm void fn_80151168(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    and r0, r4, r0
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80151180(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80151188(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    extrwi r3, r0, 1, 20
    blr
}

asm void fn_80151194(void)
{
    nofralloc
    lfs f0, lbl_8088196C
    li r5, 0x0
    li r0, 0x96
    sth r4, 0x0(r3)
    sth r5, 0x2(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stw r5, 0x18(r3)
    blr
}
