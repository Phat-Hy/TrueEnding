#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8008B978(void);
extern void fn_8012DD70(void);
extern void fn_80145334(void);
extern void fn_8014DEE4(void);
extern void fn_80153698(void);
extern void fn_801765D8(void);
extern void fn_80206B14(void);
extern void fn_80206BE4(void);
extern void fn_8020ED84(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_8021150C(void);
extern void fn_80211940(void);
extern void fn_80212790(void);
extern void fn_8036DAF4(void);
extern void fn_80444744(void);
extern void fn_80444804(void);
extern void fn_8044D404(void);
extern void fn_8044D4F0(void);
extern void fn_8044D530(void);
extern void fn_8044D6E0(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);

/* External data declarations */
extern u8 jumptable_8078BB0C[];

/* Small data declarations */
extern u32 lbl_8087DD64;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_80885CA4;
extern u32 lbl_80885CA8;

/* Function declarations */
void fn_803BB0E0(void);
void fn_803BB248(void);
void fn_803BB3C0(void);
void fn_803BB584(void);
void fn_803BC2D4(void);

asm void fn_803BB0E0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r4, lbl_8087F408
    lwz r30, 0x48(r4)
    b lbl_fn_803BB0E0_00000148
lbl_fn_803BB0E0_00000024:
    lhz r0, 0x0(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BB0E0_00000144
    lbz r0, 0x2(r31)
    stw r0, 0xd18(r30)
    lwz r0, 0x8(r31)
    stw r0, 0xd0c(r30)
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_803BB0E0_00000064
    addi r3, r30, 0x7d4
    bl fn_8012DD70
    mr r3, r30
    bl fn_801765D8
lbl_fn_803BB0E0_00000064:
    lbz r4, 0x3(r31)
    mr r3, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_803BB0E0_000000C0
    mr r3, r30
    bl fn_80145334
    lwz r3, lbl_8087F430
    mr r5, r30
    addi r4, r1, 0x8
    li r6, 0x1
    li r7, 0x0
    bl fn_8036DAF4
    cmpwi r3, 0x0
    beq lbl_fn_803BB0E0_000000C0
    mr r3, r30
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80153698
lbl_fn_803BB0E0_000000C0:
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_803BB0E0_000000DC
    lwz r0, 0x54c(r30)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r30)
lbl_fn_803BB0E0_000000DC:
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x10
    bne lbl_fn_803BB0E0_00000104
    lwz r0, 0x12a8(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    oris r0, r0, 0x10
    stw r0, 0x12a8(r30)
    bl fn_8008B978
lbl_fn_803BB0E0_00000104:
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x20
    bne lbl_fn_803BB0E0_00000124
    lwz r0, 0x12a8(r30)
    oris r0, r0, 0x40
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x12a8(r30)
lbl_fn_803BB0E0_00000124:
    lhz r0, 0x0(r31)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x40
    bne lbl_fn_803BB0E0_00000140
    lwz r0, 0x12a4(r30)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r30)
lbl_fn_803BB0E0_00000140:
    addi r31, r31, 0x2c
lbl_fn_803BB0E0_00000144:
    lwz r30, 0x14ac(r30)
lbl_fn_803BB0E0_00000148:
    cmpwi r30, 0x0
    bne lbl_fn_803BB0E0_00000024
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803BB248(void)
{
    nofralloc
    li r0, 0x10
    mr r5, r3
    li r4, 0x0
    mtctr r0
lbl_fn_803BB248_00000178:
    stb r4, 0x6(r5)
    stb r4, 0x1e(r5)
    stb r4, 0x36(r5)
    stb r4, 0x4e(r5)
    stb r4, 0x66(r5)
    stb r4, 0x7e(r5)
    stb r4, 0x96(r5)
    stb r4, 0xae(r5)
    stb r4, 0xc6(r5)
    stb r4, 0xde(r5)
    stb r4, 0xf6(r5)
    stb r4, 0x10e(r5)
    stb r4, 0x126(r5)
    stb r4, 0x13e(r5)
    stb r4, 0x156(r5)
    stb r4, 0x16e(r5)
    stb r4, 0x186(r5)
    stb r4, 0x19e(r5)
    stb r4, 0x1b6(r5)
    stb r4, 0x1ce(r5)
    stb r4, 0x1e6(r5)
    stb r4, 0x1fe(r5)
    stb r4, 0x216(r5)
    stb r4, 0x22e(r5)
    stb r4, 0x246(r5)
    stb r4, 0x25e(r5)
    stb r4, 0x276(r5)
    stb r4, 0x28e(r5)
    stb r4, 0x2a6(r5)
    stb r4, 0x2be(r5)
    stb r4, 0x2d6(r5)
    stb r4, 0x2ee(r5)
    addi r5, r5, 0x300
    bdnz lbl_fn_803BB248_00000178
    lwz r5, lbl_8087F4A0
    li r4, 0x0
    li r6, 0x0
    lis r7, 0x1062
    lwz r5, 0x48(r5)
    lis r10, jumptable_8078BB0C@ha
    b lbl_fn_803BB248_000002CC
lbl_fn_803BB248_0000021C:
    lwz r0, 0x50(r5)
    cmplwi r0, 0x33
    bgt lbl_fn_803BB248_000002C8
    addi r8, r10, jumptable_8078BB0C@l
    slwi r0, r0, 2
    lwzx r8, r8, r0
    mtctr r8
    bctr
    add r8, r3, r6
    addi r4, r4, 0x1
    lbz r0, 0x6(r8)
    ori r0, r0, 0x1
    stb r0, 0x6(r8)
    lwz r0, 0x54(r5)
    stb r0, 0x7(r8)
    lwz r0, 0x48(r5)
    stwx r0, r3, r6
    addi r6, r6, 0x18
    lwz r0, 0x4c(r5)
    sth r0, 0x4(r8)
    b lbl_fn_803BB248_000002C8
    lwz r9, 0x48(r5)
    addi r0, r7, 0x4dd3
    mulhw r0, r0, r9
    srawi r0, r0, 6
    srwi r8, r0, 31
    add r0, r0, r8
    mulli r0, r0, 0x3e8
    subf r0, r0, r9
    cmpwi r0, 0x1
    bne lbl_fn_803BB248_000002C8
    add r8, r3, r6
    addi r4, r4, 0x1
    lbz r0, 0x6(r8)
    ori r0, r0, 0x1
    stb r0, 0x6(r8)
    lwz r0, 0x54(r5)
    stb r0, 0x7(r8)
    lwz r0, 0x48(r5)
    stwx r0, r3, r6
    addi r6, r6, 0x18
    lwz r0, 0x4c(r5)
    sth r0, 0x4(r8)
lbl_fn_803BB248_000002C8:
    lwz r5, 0x5c(r5)
lbl_fn_803BB248_000002CC:
    cmpwi r5, 0x0
    beqlr
    cmpwi r4, 0x200
    blt lbl_fn_803BB248_0000021C
    blr
}

asm void fn_803BB3C0(void)
{
    nofralloc
    addi r7, r3, 0x24
    addi r0, r3, 0x290
    lfs f1, lbl_80885CA8
    cmplw r7, r0
    li r4, -0x1
    lfs f0, lbl_80885CA4
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    sth r4, 0x10(r3)
    sth r0, 0x12(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f1, 0x20(r3)
    bge lbl_fn_803BB3C0_00000494
    addi r6, r3, 0x1f0
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_803BB3C0_0000033C
    li r4, 0x1
lbl_fn_803BB3C0_0000033C:
    cmpwi r4, 0x0
    beq lbl_fn_803BB3C0_00000348
    li r0, 0x1
lbl_fn_803BB3C0_00000348:
    cmpwi r0, 0x0
    beq lbl_fn_803BB3C0_00000444
    addi r4, r6, 0x9f
    li r0, 0xa0
    subf r4, r7, r4
    lfs f1, lbl_80885CA8
    divwu r4, r4, r0
    lfs f0, lbl_80885CA4
    li r5, -0x1
    li r0, 0x0
    mtctr r4
    cmplw r7, r6
    bge lbl_fn_803BB3C0_00000444
lbl_fn_803BB3C0_0000037C:
    sth r5, 0x0(r7)
    sth r0, 0x2(r7)
    stfs f1, 0x4(r7)
    stfs f0, 0x8(r7)
    stfs f0, 0xc(r7)
    stfs f1, 0x10(r7)
    sth r5, 0x14(r7)
    sth r0, 0x16(r7)
    stfs f1, 0x18(r7)
    stfs f0, 0x1c(r7)
    stfs f0, 0x20(r7)
    stfs f1, 0x24(r7)
    sth r5, 0x28(r7)
    sth r0, 0x2a(r7)
    stfs f1, 0x2c(r7)
    stfs f0, 0x30(r7)
    stfs f0, 0x34(r7)
    stfs f1, 0x38(r7)
    sth r5, 0x3c(r7)
    sth r0, 0x3e(r7)
    stfs f1, 0x40(r7)
    stfs f0, 0x44(r7)
    stfs f0, 0x48(r7)
    stfs f1, 0x4c(r7)
    sth r5, 0x50(r7)
    sth r0, 0x52(r7)
    stfs f1, 0x54(r7)
    stfs f0, 0x58(r7)
    stfs f0, 0x5c(r7)
    stfs f1, 0x60(r7)
    sth r5, 0x64(r7)
    sth r0, 0x66(r7)
    stfs f1, 0x68(r7)
    stfs f0, 0x6c(r7)
    stfs f0, 0x70(r7)
    stfs f1, 0x74(r7)
    sth r5, 0x78(r7)
    sth r0, 0x7a(r7)
    stfs f1, 0x7c(r7)
    stfs f0, 0x80(r7)
    stfs f0, 0x84(r7)
    stfs f1, 0x88(r7)
    sth r5, 0x8c(r7)
    sth r0, 0x8e(r7)
    stfs f1, 0x90(r7)
    stfs f0, 0x94(r7)
    stfs f0, 0x98(r7)
    stfs f1, 0x9c(r7)
    addi r7, r7, 0xa0
    bdnz lbl_fn_803BB3C0_0000037C
lbl_fn_803BB3C0_00000444:
    addi r5, r3, 0x290
    li r0, 0x14
    addi r4, r5, 0x13
    lfs f1, lbl_80885CA8
    subf r4, r7, r4
    lfs f0, lbl_80885CA4
    divwu r4, r4, r0
    li r6, -0x1
    li r0, 0x0
    mtctr r4
    cmplw r7, r5
    bge lbl_fn_803BB3C0_00000494
lbl_fn_803BB3C0_00000474:
    sth r6, 0x0(r7)
    sth r0, 0x2(r7)
    stfs f1, 0x4(r7)
    stfs f0, 0x8(r7)
    stfs f0, 0xc(r7)
    stfs f1, 0x10(r7)
    addi r7, r7, 0x14
    bdnz lbl_fn_803BB3C0_00000474
lbl_fn_803BB3C0_00000494:
    li r0, 0x0
    stw r0, 0x290(r3)
    sth r0, 0x294(r3)
    blr
}

asm void fn_803BB584(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r26, r3
    mr r24, r26
    li r25, 0x0
    lwz r28, lbl_8087F4F0
    lwz r0, 0x6000(r28)
    stw r0, 0x0(r3)
lbl_fn_803BB584_000004CC:
    mr r3, r28
    mr r4, r25
    bl fn_80444804
    cmpwi r3, 0x0
    beq lbl_fn_803BB584_00000500
    lwz r0, 0x0(r3)
    stw r0, 0x60f4(r24)
    lwz r0, 0x4(r3)
    stb r0, 0x60f8(r24)
    lhz r0, 0x8(r3)
    sth r0, 0x60fa(r24)
    lwz r0, 0xc(r3)
    stb r0, 0x60f9(r24)
lbl_fn_803BB584_00000500:
    addi r25, r25, 0x1
    addi r24, r24, 0x8
    cmpwi r25, 0x600
    blt lbl_fn_803BB584_000004CC
    li r0, 0x2
    mr r4, r26
    addis r3, r28, 0x1
    mtctr r0
    subi r3, r3, 0x2ac0
lbl_fn_803BB584_00000524:
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r5, 0x4(r4)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0xc(r4)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x14(r4)
    stw r0, 0x18(r4)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x1c(r4)
    stw r0, 0x20(r4)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x24(r4)
    stw r0, 0x28(r4)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x2c(r4)
    stw r0, 0x30(r4)
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x34(r4)
    stw r0, 0x38(r4)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x3c(r4)
    stw r0, 0x40(r4)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x44(r4)
    stw r0, 0x48(r4)
    lwz r0, 0x4c(r3)
    lwz r5, 0x48(r3)
    stw r5, 0x4c(r4)
    stw r0, 0x50(r4)
    lwz r0, 0x54(r3)
    lwz r5, 0x50(r3)
    stw r5, 0x54(r4)
    stw r0, 0x58(r4)
    lwz r0, 0x5c(r3)
    lwz r5, 0x58(r3)
    stw r5, 0x5c(r4)
    stw r0, 0x60(r4)
    lwz r0, 0x64(r3)
    lwz r5, 0x60(r3)
    stw r5, 0x64(r4)
    stw r0, 0x68(r4)
    lwz r0, 0x6c(r3)
    lwz r5, 0x68(r3)
    stw r5, 0x6c(r4)
    stw r0, 0x70(r4)
    lwz r0, 0x74(r3)
    lwz r5, 0x70(r3)
    stw r5, 0x74(r4)
    stw r0, 0x78(r4)
    lwz r0, 0x7c(r3)
    lwz r5, 0x78(r3)
    stw r5, 0x7c(r4)
    stw r0, 0x80(r4)
    lwz r0, 0x84(r3)
    lwz r5, 0x80(r3)
    stw r5, 0x84(r4)
    stw r0, 0x88(r4)
    lwz r0, 0x8c(r3)
    lwz r5, 0x88(r3)
    stw r5, 0x8c(r4)
    stw r0, 0x90(r4)
    lwz r0, 0x94(r3)
    lwz r5, 0x90(r3)
    stw r5, 0x94(r4)
    stw r0, 0x98(r4)
    lwz r0, 0x9c(r3)
    lwz r5, 0x98(r3)
    stw r5, 0x9c(r4)
    stw r0, 0xa0(r4)
    lwz r0, 0xa4(r3)
    lwz r5, 0xa0(r3)
    stw r5, 0xa4(r4)
    stw r0, 0xa8(r4)
    lwz r0, 0xac(r3)
    lwz r5, 0xa8(r3)
    stw r5, 0xac(r4)
    stw r0, 0xb0(r4)
    lwz r0, 0xb4(r3)
    lwz r5, 0xb0(r3)
    stw r5, 0xb4(r4)
    stw r0, 0xb8(r4)
    lwz r0, 0xbc(r3)
    lwz r5, 0xb8(r3)
    stw r5, 0xbc(r4)
    stw r0, 0xc0(r4)
    lwz r0, 0xc4(r3)
    lwz r5, 0xc0(r3)
    stw r5, 0xc4(r4)
    stw r0, 0xc8(r4)
    lwz r0, 0xcc(r3)
    lwz r5, 0xc8(r3)
    stw r5, 0xcc(r4)
    stw r0, 0xd0(r4)
    lwz r0, 0xd4(r3)
    lwz r5, 0xd0(r3)
    stw r5, 0xd4(r4)
    stw r0, 0xd8(r4)
    lwz r0, 0xdc(r3)
    lwz r5, 0xd8(r3)
    stw r5, 0xdc(r4)
    stw r0, 0xe0(r4)
    lwz r0, 0xe4(r3)
    lwz r5, 0xe0(r3)
    stw r5, 0xe4(r4)
    stw r0, 0xe8(r4)
    lwz r0, 0xec(r3)
    lwz r5, 0xe8(r3)
    stw r5, 0xec(r4)
    stw r0, 0xf0(r4)
    lwz r0, 0xf4(r3)
    lwz r5, 0xf0(r3)
    stw r5, 0xf4(r4)
    stw r0, 0xf8(r4)
    lwz r0, 0xfc(r3)
    lwz r5, 0xf8(r3)
    stw r5, 0xfc(r4)
    stw r0, 0x100(r4)
    lwz r0, 0x104(r3)
    lwz r5, 0x100(r3)
    stw r5, 0x104(r4)
    stw r0, 0x108(r4)
    lwz r0, 0x10c(r3)
    lwz r5, 0x108(r3)
    stw r5, 0x10c(r4)
    stw r0, 0x110(r4)
    lwz r0, 0x114(r3)
    lwz r5, 0x110(r3)
    stw r5, 0x114(r4)
    stw r0, 0x118(r4)
    lwz r0, 0x11c(r3)
    lwz r5, 0x118(r3)
    stw r5, 0x11c(r4)
    stw r0, 0x120(r4)
    lwz r0, 0x124(r3)
    lwz r5, 0x120(r3)
    stw r5, 0x124(r4)
    stw r0, 0x128(r4)
    lwz r0, 0x12c(r3)
    lwz r5, 0x128(r3)
    stw r5, 0x12c(r4)
    stw r0, 0x130(r4)
    lwz r0, 0x134(r3)
    lwz r5, 0x130(r3)
    stw r5, 0x134(r4)
    stw r0, 0x138(r4)
    lwz r0, 0x13c(r3)
    lwz r5, 0x138(r3)
    stw r5, 0x13c(r4)
    stw r0, 0x140(r4)
    lwz r0, 0x144(r3)
    lwz r5, 0x140(r3)
    stw r5, 0x144(r4)
    stw r0, 0x148(r4)
    lwz r0, 0x14c(r3)
    lwz r5, 0x148(r3)
    stw r5, 0x14c(r4)
    stw r0, 0x150(r4)
    lwz r0, 0x154(r3)
    lwz r5, 0x150(r3)
    stw r5, 0x154(r4)
    stw r0, 0x158(r4)
    lwz r0, 0x15c(r3)
    lwz r5, 0x158(r3)
    stw r5, 0x15c(r4)
    stw r0, 0x160(r4)
    lwz r0, 0x164(r3)
    lwz r5, 0x160(r3)
    stw r5, 0x164(r4)
    stw r0, 0x168(r4)
    lwz r0, 0x16c(r3)
    lwz r5, 0x168(r3)
    stw r5, 0x16c(r4)
    stw r0, 0x170(r4)
    lwz r0, 0x174(r3)
    lwz r5, 0x170(r3)
    stw r5, 0x174(r4)
    stw r0, 0x178(r4)
    lwz r0, 0x17c(r3)
    lwz r5, 0x178(r3)
    stw r5, 0x17c(r4)
    stw r0, 0x180(r4)
    lwz r0, 0x184(r3)
    lwz r5, 0x180(r3)
    stw r5, 0x184(r4)
    stw r0, 0x188(r4)
    lwz r0, 0x18c(r3)
    lwz r5, 0x188(r3)
    stw r5, 0x18c(r4)
    stw r0, 0x190(r4)
    lwz r0, 0x194(r3)
    lwz r5, 0x190(r3)
    stw r5, 0x194(r4)
    stw r0, 0x198(r4)
    lwz r0, 0x19c(r3)
    lwz r5, 0x198(r3)
    stw r5, 0x19c(r4)
    stw r0, 0x1a0(r4)
    lwz r0, 0x1a4(r3)
    lwz r5, 0x1a0(r3)
    stw r5, 0x1a4(r4)
    stw r0, 0x1a8(r4)
    lwz r0, 0x1ac(r3)
    lwz r5, 0x1a8(r3)
    stw r5, 0x1ac(r4)
    stw r0, 0x1b0(r4)
    lwz r0, 0x1b4(r3)
    lwz r5, 0x1b0(r3)
    stw r5, 0x1b4(r4)
    stw r0, 0x1b8(r4)
    lwz r0, 0x1bc(r3)
    lwz r5, 0x1b8(r3)
    stw r5, 0x1bc(r4)
    stw r0, 0x1c0(r4)
    lwz r0, 0x1c4(r3)
    lwz r5, 0x1c0(r3)
    stw r5, 0x1c4(r4)
    stw r0, 0x1c8(r4)
    lwz r0, 0x1cc(r3)
    lwz r5, 0x1c8(r3)
    stw r5, 0x1cc(r4)
    stw r0, 0x1d0(r4)
    lwz r0, 0x1d4(r3)
    lwz r5, 0x1d0(r3)
    stw r5, 0x1d4(r4)
    stw r0, 0x1d8(r4)
    lwz r0, 0x1dc(r3)
    lwz r5, 0x1d8(r3)
    stw r5, 0x1dc(r4)
    stw r0, 0x1e0(r4)
    lwz r0, 0x1e4(r3)
    lwz r5, 0x1e0(r3)
    stw r5, 0x1e4(r4)
    stw r0, 0x1e8(r4)
    lwz r0, 0x1ec(r3)
    lwz r5, 0x1e8(r3)
    stw r5, 0x1ec(r4)
    stw r0, 0x1f0(r4)
    lwz r0, 0x1f4(r3)
    lwz r5, 0x1f0(r3)
    stw r5, 0x1f4(r4)
    stw r0, 0x1f8(r4)
    lwz r0, 0x1fc(r3)
    lwz r5, 0x1f8(r3)
    addi r3, r3, 0x200
    stw r5, 0x1fc(r4)
    stwu r0, 0x200(r4)
    bdnz lbl_fn_803BB584_00000524
    addis r3, r28, 0x1
    lwz r4, -0x2c80(r3)
    lwz r0, -0x2c7c(r3)
    stw r0, 0x1008(r26)
    stw r4, 0x1004(r26)
    lwz r4, -0x2c78(r3)
    lwz r0, -0x2c74(r3)
    stw r0, 0x1010(r26)
    stw r4, 0x100c(r26)
    lwz r4, -0x2c70(r3)
    lwz r0, -0x2c6c(r3)
    stw r0, 0x1018(r26)
    stw r4, 0x1014(r26)
    lwz r4, -0x2c68(r3)
    lwz r0, -0x2c64(r3)
    stw r0, 0x1020(r26)
    stw r4, 0x101c(r26)
    lwz r4, -0x2c60(r3)
    lwz r0, -0x2c5c(r3)
    stw r0, 0x1028(r26)
    stw r4, 0x1024(r26)
    lwz r4, -0x2c58(r3)
    lwz r0, -0x2c54(r3)
    stw r0, 0x1030(r26)
    stw r4, 0x102c(r26)
    lwz r4, -0x2c50(r3)
    lwz r0, -0x2c4c(r3)
    stw r0, 0x1038(r26)
    stw r4, 0x1034(r26)
    lwz r4, -0x2c48(r3)
    lwz r0, -0x2c44(r3)
    stw r0, 0x1040(r26)
    stw r4, 0x103c(r26)
    lwz r4, -0x2c40(r3)
    lwz r0, -0x2c3c(r3)
    stw r0, 0x1048(r26)
    stw r4, 0x1044(r26)
    lwz r4, -0x2c38(r3)
    lwz r0, -0x2c34(r3)
    stw r0, 0x1050(r26)
    stw r4, 0x104c(r26)
    lwz r4, -0x2c30(r3)
    lwz r0, -0x2c2c(r3)
    stw r0, 0x1058(r26)
    stw r4, 0x1054(r26)
    lwz r4, -0x2c28(r3)
    lwz r0, -0x2c24(r3)
    stw r0, 0x1060(r26)
    stw r4, 0x105c(r26)
    lwz r4, -0x2c20(r3)
    lwz r0, -0x2c1c(r3)
    stw r0, 0x1068(r26)
    stw r4, 0x1064(r26)
    lwz r4, -0x2c18(r3)
    lwz r0, -0x2c14(r3)
    stw r0, 0x1070(r26)
    stw r4, 0x106c(r26)
    lwz r4, -0x2c10(r3)
    lwz r0, -0x2c0c(r3)
    stw r0, 0x1078(r26)
    stw r4, 0x1074(r26)
    lwz r4, -0x2c08(r3)
    lwz r0, -0x2c04(r3)
    stw r0, 0x1080(r26)
    stw r4, 0x107c(r26)
    lwz r4, -0x2c00(r3)
    lwz r0, -0x2bfc(r3)
    stw r0, 0x1088(r26)
    stw r4, 0x1084(r26)
    lwz r4, -0x2bf8(r3)
    lwz r0, -0x2bf4(r3)
    stw r0, 0x1090(r26)
    stw r4, 0x108c(r26)
    lwz r4, -0x2bf0(r3)
    lwz r0, -0x2bec(r3)
    stw r0, 0x1098(r26)
    stw r4, 0x1094(r26)
    lwz r4, -0x2be8(r3)
    lwz r0, -0x2be4(r3)
    stw r0, 0x10a0(r26)
    stw r4, 0x109c(r26)
    lwz r4, -0x2be0(r3)
    lwz r0, -0x2bdc(r3)
    stw r0, 0x10a8(r26)
    stw r4, 0x10a4(r26)
    lwz r4, -0x2bd8(r3)
    lwz r0, -0x2bd4(r3)
    stw r0, 0x10b0(r26)
    stw r4, 0x10ac(r26)
    lwz r4, -0x2bd0(r3)
    lwz r0, -0x2bcc(r3)
    stw r0, 0x10b8(r26)
    stw r4, 0x10b4(r26)
    lwz r4, -0x2bc8(r3)
    lwz r0, -0x2bc4(r3)
    stw r0, 0x10c0(r26)
    stw r4, 0x10bc(r26)
    lwz r4, -0x2bc0(r3)
    lwz r0, -0x2bbc(r3)
    stw r0, 0x10c8(r26)
    stw r4, 0x10c4(r26)
    lwz r4, -0x2bb8(r3)
    lwz r0, -0x2bb4(r3)
    stw r0, 0x10d0(r26)
    stw r4, 0x10cc(r26)
    lwz r4, -0x2bb0(r3)
    lwz r0, -0x2bac(r3)
    stw r0, 0x10d8(r26)
    stw r4, 0x10d4(r26)
    lwz r4, -0x2ba8(r3)
    lwz r0, -0x2ba4(r3)
    stw r0, 0x10e0(r26)
    stw r4, 0x10dc(r26)
    lwz r4, -0x2ba0(r3)
    lwz r0, -0x2b9c(r3)
    stw r0, 0x10e8(r26)
    stw r4, 0x10e4(r26)
    lwz r4, -0x2b98(r3)
    lwz r0, -0x2b94(r3)
    stw r0, 0x10f0(r26)
    stw r4, 0x10ec(r26)
    lwz r4, -0x2b90(r3)
    lwz r0, -0x2b8c(r3)
    stw r0, 0x10f8(r26)
    stw r4, 0x10f4(r26)
    lwz r4, -0x2b88(r3)
    lwz r0, -0x2b84(r3)
    stw r0, 0x1100(r26)
    stw r4, 0x10fc(r26)
    lwz r4, -0x2b80(r3)
    lwz r0, -0x2b7c(r3)
    stw r0, 0x1108(r26)
    stw r4, 0x1104(r26)
    lwz r4, -0x2b78(r3)
    lwz r0, -0x2b74(r3)
    stw r0, 0x1110(r26)
    stw r4, 0x110c(r26)
    lwz r4, -0x2b70(r3)
    lwz r0, -0x2b6c(r3)
    stw r0, 0x1118(r26)
    stw r4, 0x1114(r26)
    lwz r4, -0x2b68(r3)
    lwz r0, -0x2b64(r3)
    stw r0, 0x1120(r26)
    stw r4, 0x111c(r26)
    lwz r4, -0x2b60(r3)
    lwz r0, -0x2b5c(r3)
    stw r0, 0x1128(r26)
    stw r4, 0x1124(r26)
    lwz r4, -0x2b58(r3)
    lwz r0, -0x2b54(r3)
    stw r0, 0x1130(r26)
    stw r4, 0x112c(r26)
    lwz r4, -0x2b50(r3)
    lwz r0, -0x2b4c(r3)
    stw r0, 0x1138(r26)
    stw r4, 0x1134(r26)
    lwz r4, -0x2b48(r3)
    lwz r0, -0x2b44(r3)
    stw r0, 0x1140(r26)
    stw r4, 0x113c(r26)
    lwz r4, -0x2b40(r3)
    lwz r0, -0x2b3c(r3)
    stw r0, 0x1148(r26)
    stw r4, 0x1144(r26)
    lwz r4, -0x2b38(r3)
    lwz r0, -0x2b34(r3)
    stw r0, 0x1150(r26)
    stw r4, 0x114c(r26)
    lwz r4, -0x2b30(r3)
    lwz r0, -0x2b2c(r3)
    stw r0, 0x1158(r26)
    stw r4, 0x1154(r26)
    lwz r4, -0x2b28(r3)
    lwz r0, -0x2b24(r3)
    stw r0, 0x1160(r26)
    stw r4, 0x115c(r26)
    lwz r4, -0x2b20(r3)
    lwz r0, -0x2b1c(r3)
    stw r0, 0x1168(r26)
    stw r4, 0x1164(r26)
    lwz r4, -0x2b18(r3)
    lwz r0, -0x2b14(r3)
    stw r0, 0x1170(r26)
    stw r4, 0x116c(r26)
    lwz r4, -0x2b10(r3)
    lwz r0, -0x2b0c(r3)
    stw r0, 0x1178(r26)
    stw r4, 0x1174(r26)
    lwz r4, -0x2b08(r3)
    lwz r0, -0x2b04(r3)
    stw r0, 0x1180(r26)
    stw r4, 0x117c(r26)
    lwz r4, -0x2b00(r3)
    lwz r0, -0x2afc(r3)
    stw r0, 0x1188(r26)
    stw r4, 0x1184(r26)
    lwz r4, -0x2af8(r3)
    lwz r0, -0x2af4(r3)
    stw r0, 0x1190(r26)
    stw r4, 0x118c(r26)
    lwz r4, -0x2af0(r3)
    lwz r0, -0x2aec(r3)
    stw r0, 0x1198(r26)
    stw r4, 0x1194(r26)
    lwz r4, -0x2ae8(r3)
    lwz r0, -0x2ae4(r3)
    stw r0, 0x11a0(r26)
    stw r4, 0x119c(r26)
    lwz r4, -0x2ae0(r3)
    mr r30, r26
    lwz r0, -0x2adc(r3)
    addi r29, r26, 0x11c4
    stw r0, 0x11a8(r26)
    subi r31, r3, 0x7bb0
    li r27, 0x0
    li r25, 0x50
    stw r4, 0x11a4(r26)
    lwz r4, -0x2ad8(r3)
    lwz r0, -0x2ad4(r3)
    stw r0, 0x11b0(r26)
    stw r4, 0x11ac(r26)
    lwz r4, -0x2ad0(r3)
    lwz r0, -0x2acc(r3)
    stw r0, 0x11b8(r26)
    stw r4, 0x11b4(r26)
    lwz r4, -0x2ac8(r3)
    lwz r0, -0x2ac4(r3)
    stw r0, 0x11c0(r26)
    stw r4, 0x11bc(r26)
lbl_fn_803BB584_00000CC4:
    lwz r0, 0x0(r31)
    addi r5, r30, 0x11d0
    stw r0, 0x11c4(r30)
    addi r4, r31, 0xc
    lwz r0, 0x4(r31)
    stw r0, 0x11c8(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x11cc(r30)
    lwz r0, 0xc(r31)
    stw r0, 0x11d0(r30)
    mtctr r25
lbl_fn_803BB584_00000CF0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803BB584_00000CF0
    addi r24, r31, 0x294
    addi r0, r29, 0x294
    lwz r3, 0x290(r31)
    cmplw r24, r0
    stw r3, 0x1454(r30)
    beq lbl_fn_803BB584_00000D38
    mr r3, r24
    bl fn_80686A48
    mr r5, r3
    mr r4, r24
    addi r3, r29, 0x294
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_803BB584_00000D38:
    addi r27, r27, 0x1
    addi r30, r30, 0x2d4
    cmpwi r27, 0x1c
    addi r29, r29, 0x2d4
    addi r31, r31, 0x2d4
    blt lbl_fn_803BB584_00000CC4
    addis r3, r28, 0x1
    addis r4, r26, 0x1
    lwz r5, -0x7d70(r3)
    lwz r0, -0x7d6c(r3)
    stw r0, -0x6f08(r4)
    stw r5, -0x6f0c(r4)
    lwz r5, -0x7d68(r3)
    lwz r0, -0x7d64(r3)
    stw r0, -0x6f00(r4)
    stw r5, -0x6f04(r4)
    lwz r5, -0x7d60(r3)
    lwz r0, -0x7d5c(r3)
    stw r0, -0x6ef8(r4)
    stw r5, -0x6efc(r4)
    lwz r5, -0x7d58(r3)
    lwz r0, -0x7d54(r3)
    stw r0, -0x6ef0(r4)
    stw r5, -0x6ef4(r4)
    lwz r5, -0x7d50(r3)
    lwz r0, -0x7d4c(r3)
    stw r0, -0x6ee8(r4)
    stw r5, -0x6eec(r4)
    lwz r5, -0x7d48(r3)
    lwz r0, -0x7d44(r3)
    stw r0, -0x6ee0(r4)
    stw r5, -0x6ee4(r4)
    lwz r5, -0x7d40(r3)
    lwz r0, -0x7d3c(r3)
    stw r0, -0x6ed8(r4)
    stw r5, -0x6edc(r4)
    lwz r5, -0x7d38(r3)
    lwz r0, -0x7d34(r3)
    stw r0, -0x6ed0(r4)
    stw r5, -0x6ed4(r4)
    lwz r5, -0x7d30(r3)
    lwz r0, -0x7d2c(r3)
    stw r0, -0x6ec8(r4)
    stw r5, -0x6ecc(r4)
    lwz r5, -0x7d28(r3)
    lwz r0, -0x7d24(r3)
    stw r0, -0x6ec0(r4)
    stw r5, -0x6ec4(r4)
    lwz r5, -0x7d20(r3)
    lwz r0, -0x7d1c(r3)
    stw r0, -0x6eb8(r4)
    stw r5, -0x6ebc(r4)
    lwz r5, -0x7d18(r3)
    lwz r0, -0x7d14(r3)
    stw r0, -0x6eb0(r4)
    stw r5, -0x6eb4(r4)
    lwz r5, -0x7d10(r3)
    lwz r0, -0x7d0c(r3)
    stw r0, -0x6ea8(r4)
    stw r5, -0x6eac(r4)
    lwz r5, -0x7d08(r3)
    lwz r0, -0x7d04(r3)
    stw r0, -0x6ea0(r4)
    stw r5, -0x6ea4(r4)
    lwz r5, -0x7d00(r3)
    lwz r0, -0x7cfc(r3)
    stw r0, -0x6e98(r4)
    stw r5, -0x6e9c(r4)
    lwz r5, -0x7cf8(r3)
    lwz r0, -0x7cf4(r3)
    stw r0, -0x6e90(r4)
    stw r5, -0x6e94(r4)
    lwz r5, -0x7cf0(r3)
    lwz r0, -0x7cec(r3)
    stw r0, -0x6e88(r4)
    stw r5, -0x6e8c(r4)
    lwz r5, -0x7ce8(r3)
    lwz r0, -0x7ce4(r3)
    stw r0, -0x6e80(r4)
    stw r5, -0x6e84(r4)
    lwz r5, -0x7ce0(r3)
    lwz r0, -0x7cdc(r3)
    stw r0, -0x6e78(r4)
    stw r5, -0x6e7c(r4)
    lwz r5, -0x7cd8(r3)
    lwz r0, -0x7cd4(r3)
    stw r0, -0x6e70(r4)
    stw r5, -0x6e74(r4)
    lwz r5, -0x7cd0(r3)
    lwz r0, -0x7ccc(r3)
    stw r0, -0x6e68(r4)
    stw r5, -0x6e6c(r4)
    lwz r5, -0x7cc8(r3)
    lwz r0, -0x7cc4(r3)
    stw r0, -0x6e60(r4)
    stw r5, -0x6e64(r4)
    lwz r5, -0x7cc0(r3)
    lwz r0, -0x7cbc(r3)
    stw r0, -0x6e58(r4)
    stw r5, -0x6e5c(r4)
    lwz r5, -0x7cb8(r3)
    lwz r0, -0x7cb4(r3)
    stw r0, -0x6e50(r4)
    stw r5, -0x6e54(r4)
    lwz r5, -0x7cb0(r3)
    lwz r0, -0x7cac(r3)
    stw r0, -0x6e48(r4)
    stw r5, -0x6e4c(r4)
    lwz r5, -0x7ca8(r3)
    lwz r0, -0x7ca4(r3)
    stw r0, -0x6e40(r4)
    stw r5, -0x6e44(r4)
    lwz r5, -0x7ca0(r3)
    lwz r0, -0x7c9c(r3)
    stw r0, -0x6e38(r4)
    stw r5, -0x6e3c(r4)
    lwz r5, -0x7c98(r3)
    lwz r0, -0x7c94(r3)
    stw r0, -0x6e30(r4)
    stw r5, -0x6e34(r4)
    lwz r5, -0x7c90(r3)
    lwz r0, -0x7c8c(r3)
    stw r0, -0x6e28(r4)
    stw r5, -0x6e2c(r4)
    lwz r5, -0x7c88(r3)
    lwz r0, -0x7c84(r3)
    stw r0, -0x6e20(r4)
    stw r5, -0x6e24(r4)
    lwz r5, -0x7c80(r3)
    lwz r0, -0x7c7c(r3)
    stw r0, -0x6e18(r4)
    stw r5, -0x6e1c(r4)
    lwz r5, -0x7c78(r3)
    lwz r0, -0x7c74(r3)
    stw r0, -0x6e10(r4)
    stw r5, -0x6e14(r4)
    lwz r5, -0x7c70(r3)
    lwz r0, -0x7c6c(r3)
    stw r0, -0x6e08(r4)
    stw r5, -0x6e0c(r4)
    lwz r5, -0x7c68(r3)
    lwz r0, -0x7c64(r3)
    stw r0, -0x6e00(r4)
    stw r5, -0x6e04(r4)
    lwz r5, -0x7c60(r3)
    lwz r0, -0x7c5c(r3)
    stw r0, -0x6df8(r4)
    stw r5, -0x6dfc(r4)
    lwz r5, -0x7c58(r3)
    lwz r0, -0x7c54(r3)
    stw r0, -0x6df0(r4)
    stw r5, -0x6df4(r4)
    lwz r5, -0x7c50(r3)
    lwz r0, -0x7c4c(r3)
    stw r0, -0x6de8(r4)
    stw r5, -0x6dec(r4)
    lwz r5, -0x7c48(r3)
    lwz r0, -0x7c44(r3)
    stw r0, -0x6de0(r4)
    stw r5, -0x6de4(r4)
    lwz r5, -0x7c40(r3)
    lwz r0, -0x7c3c(r3)
    stw r0, -0x6dd8(r4)
    stw r5, -0x6ddc(r4)
    lwz r5, -0x7c38(r3)
    lwz r0, -0x7c34(r3)
    stw r0, -0x6dd0(r4)
    stw r5, -0x6dd4(r4)
    lwz r5, -0x7c30(r3)
    lwz r0, -0x7c2c(r3)
    stw r0, -0x6dc8(r4)
    stw r5, -0x6dcc(r4)
    lwz r5, -0x7c28(r3)
    lwz r0, -0x7c24(r3)
    stw r0, -0x6dc0(r4)
    stw r5, -0x6dc4(r4)
    lwz r5, -0x7c20(r3)
    lwz r0, -0x7c1c(r3)
    stw r0, -0x6db8(r4)
    stw r5, -0x6dbc(r4)
    lwz r5, -0x7c18(r3)
    lwz r0, -0x7c14(r3)
    stw r0, -0x6db0(r4)
    stw r5, -0x6db4(r4)
    lwz r5, -0x7c10(r3)
    lwz r0, -0x7c0c(r3)
    stw r0, -0x6da8(r4)
    stw r5, -0x6dac(r4)
    lwz r5, -0x7c08(r3)
    lwz r0, -0x7c04(r3)
    stw r0, -0x6da0(r4)
    stw r5, -0x6da4(r4)
    lwz r5, -0x7c00(r3)
    lwz r0, -0x7bfc(r3)
    stw r0, -0x6d98(r4)
    stw r5, -0x6d9c(r4)
    lwz r5, -0x7bf8(r3)
    lwz r0, -0x7bf4(r3)
    stw r0, -0x6d90(r4)
    stw r5, -0x6d94(r4)
    lwz r5, -0x7bf0(r3)
    lwz r0, -0x7bec(r3)
    stw r0, -0x6d88(r4)
    stw r5, -0x6d8c(r4)
    lwz r5, -0x7be8(r3)
    lwz r0, -0x7be4(r3)
    stw r0, -0x6d80(r4)
    stw r5, -0x6d84(r4)
    lwz r5, -0x7be0(r3)
    lwz r0, -0x7bdc(r3)
    stw r0, -0x6d78(r4)
    stw r5, -0x6d7c(r4)
    lwz r5, -0x7bd8(r3)
    lwz r0, -0x7bd4(r3)
    stw r0, -0x6d70(r4)
    stw r5, -0x6d74(r4)
    lwz r5, -0x7bd0(r3)
    mr r24, r26
    lwz r0, -0x7bcc(r3)
    li r25, 0x0
    stw r0, -0x6d68(r4)
    stw r5, -0x6d6c(r4)
    lwz r5, -0x7bc8(r3)
    lwz r0, -0x7bc4(r3)
    stw r0, -0x6d60(r4)
    stw r5, -0x6d64(r4)
    lwz r5, -0x7bc0(r3)
    lwz r0, -0x7bbc(r3)
    stw r0, -0x6d58(r4)
    stw r5, -0x6d5c(r4)
    lwz r5, -0x7bb8(r3)
    lwz r0, -0x7bb4(r3)
    stw r0, -0x6d50(r4)
    stw r5, -0x6d54(r4)
lbl_fn_803BB584_000010E0:
    mr r3, r28
    mr r4, r25
    bl fn_8044D530
    addi r25, r25, 0x1
    subis r4, r3, 0x2
    addis r3, r24, 0x1
    addi r24, r24, 0x2
    addi r0, r4, 0x7960
    cmpwi r25, 0x100
    sth r0, -0x6d4c(r3)
    blt lbl_fn_803BB584_000010E0
    li r6, 0x0
    lwz r0, 0x64a0(r28)
    addis r3, r6, 0x1
    addis r4, r26, 0x1
    subi r5, r3, 0x6b4c
    stbux r0, r5, r26
    li r6, 0x6
    lwz r0, 0x64a4(r28)
    addis r3, r6, 0x1
    stb r0, 0x1(r5)
    li r6, 0xc
    lwz r0, 0x64a8(r28)
    stb r0, 0x2(r5)
    lwz r0, 0x64ac(r28)
    stb r0, 0x3(r5)
    lwz r0, 0x64b0(r28)
    stb r0, 0x4(r5)
    lwz r0, 0x64b4(r28)
    stb r0, 0x5(r5)
    subi r5, r3, 0x6b4c
    addis r3, r6, 0x1
    lwz r0, 0x64b8(r28)
    stbux r0, r5, r26
    lwz r0, 0x64bc(r28)
    stb r0, 0x1(r5)
    lwz r0, 0x64c0(r28)
    stb r0, 0x2(r5)
    lwz r0, 0x64c4(r28)
    stb r0, 0x3(r5)
    lwz r0, 0x64c8(r28)
    stb r0, 0x4(r5)
    lwz r0, 0x64cc(r28)
    stb r0, 0x5(r5)
    subi r5, r3, 0x6b4c
    lwz r0, 0x64d0(r28)
    stbux r0, r5, r26
    lwz r0, 0x64d4(r28)
    stb r0, 0x1(r5)
    lwz r0, 0x64d8(r28)
    stb r0, 0x2(r5)
    lwz r0, 0x64dc(r28)
    stb r0, 0x3(r5)
    lwz r0, 0x64e0(r28)
    stb r0, 0x4(r5)
    lwz r0, 0x64e4(r28)
    stb r0, 0x5(r5)
    lwz r0, 0x64e8(r28)
    stb r0, -0x6b3a(r4)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803BB584_000011E0
    lwz r0, 0x5744(r3)
    stw r0, -0x6b38(r4)
lbl_fn_803BB584_000011E0:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803BC2D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r22, 0x18(r1)
    mr r31, r3
    lwz r25, lbl_8087F4F0
    cmpwi r25, 0x0
    beq lbl_fn_803BC2D4_00002008
    lwz r4, 0x0(r31)
    mr r3, r25
    bl fn_8044D6E0
    bl fn_80212790
    lis r3, 0xf
    li r22, 0x0
    addi r26, r3, 0x4240
    li r24, -0x1
    li r23, 0x0
lbl_fn_803BC2D4_00001238:
    lwz r3, lbl_8087F4F0
    mr r4, r22
    bl fn_80444804
    cmpwi r3, 0x0
    beq lbl_fn_803BC2D4_00001264
    lwz r0, 0x0(r3)
    cmpw r0, r26
    blt lbl_fn_803BC2D4_00001264
    stw r24, 0x0(r3)
    stw r23, 0x4(r3)
    sth r23, 0x8(r3)
lbl_fn_803BC2D4_00001264:
    addi r22, r22, 0x1
    cmpwi r22, 0x600
    blt lbl_fn_803BC2D4_00001238
    lwz r0, lbl_8087DD64
    cmpwi r0, 0xa
    bge lbl_fn_803BC2D4_00001310
    li r24, 0x0
    li r22, 0x0
lbl_fn_803BC2D4_00001284:
    cmpwi r24, 0x400
    bge lbl_fn_803BC2D4_000012C4
    addi r0, r31, 0x60f4
    mr r3, r25
    lwzx r4, r22, r0
    add r23, r0, r22
    bl fn_80444744
    cmpwi r3, 0x0
    beq lbl_fn_803BC2D4_000012FC
    lhz r0, 0x4(r23)
    stw r0, 0x4(r3)
    lhz r0, 0x6(r23)
    sth r0, 0x8(r3)
    lwz r0, 0x8(r23)
    stw r0, 0xc(r3)
    b lbl_fn_803BC2D4_000012FC
lbl_fn_803BC2D4_000012C4:
    subi r0, r24, 0x400
    mr r3, r25
    mulli r0, r0, 0xc
    add r23, r31, r0
    lwz r4, 0x404(r23)
    bl fn_80444744
    cmpwi r3, 0x0
    beq lbl_fn_803BC2D4_000012FC
    lhz r0, 0x408(r23)
    stw r0, 0x4(r3)
    lhz r0, 0x40a(r23)
    sth r0, 0x8(r3)
    lwz r0, 0x40c(r23)
    stw r0, 0xc(r3)
lbl_fn_803BC2D4_000012FC:
    addi r24, r24, 0x1
    addi r22, r22, 0xc
    cmpwi r24, 0x500
    blt lbl_fn_803BC2D4_00001284
    b lbl_fn_803BC2D4_000013EC
lbl_fn_803BC2D4_00001310:
    mr r26, r31
    li r27, 0x0
    lis r24, 0x431c
    lis r23, 0xf
lbl_fn_803BC2D4_00001320:
    lwz r4, 0x60f4(r26)
    mr r3, r25
    bl fn_80444744
    cmpwi r3, 0x0
    beq lbl_fn_803BC2D4_00001350
    lbz r0, 0x60f8(r26)
    stw r0, 0x4(r3)
    lhz r0, 0x60fa(r26)
    sth r0, 0x8(r3)
    lbz r0, 0x60f9(r26)
    stw r0, 0xc(r3)
    b lbl_fn_803BC2D4_000013DC
lbl_fn_803BC2D4_00001350:
    lwz r5, 0x60f4(r26)
    addi r4, r23, 0x4240
    cmpw r5, r4
    blt lbl_fn_803BC2D4_000013DC
    subi r0, r24, 0x217d
    mulhw r0, r0, r5
    srawi r0, r0, 18
    srwi r3, r0, 31
    add r0, r0, r3
    mullw r0, r0, r4
    subf r3, r0, r5
    bl fn_80211480
    lwz r0, 0x60f4(r26)
    subi r4, r24, 0x217d
    mulhw r0, r4, r0
    srawi r0, r0, 18
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_80211940
    cmpwi r3, 0x0
    ble lbl_fn_803BC2D4_000013DC
    bl fn_8021150C
    mr r4, r3
    mr r3, r25
    bl fn_80444804
    cmpwi r3, 0x0
    beq lbl_fn_803BC2D4_000013DC
    lwz r0, 0x60f4(r26)
    stw r0, 0x0(r3)
    lbz r0, 0x60f8(r26)
    stw r0, 0x4(r3)
    lhz r0, 0x60fa(r26)
    sth r0, 0x8(r3)
    lbz r0, 0x60f9(r26)
    stw r0, 0xc(r3)
lbl_fn_803BC2D4_000013DC:
    addi r27, r27, 0x1
    addi r26, r26, 0x8
    cmpwi r27, 0x600
    blt lbl_fn_803BC2D4_00001320
lbl_fn_803BC2D4_000013EC:
    lwz r0, lbl_8087DD64
    cmpwi r0, 0x3
    blt lbl_fn_803BC2D4_00001CDC
    li r0, 0x2
    mr r4, r31
    addis r3, r25, 0x1
    mtctr r0
    subi r3, r3, 0x2ac0
lbl_fn_803BC2D4_0000140C:
    lwz r0, 0x8(r4)
    lwz r5, 0x4(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r4)
    lwz r5, 0xc(r4)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x18(r4)
    lwz r5, 0x14(r4)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, 0x20(r4)
    lwz r5, 0x1c(r4)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x28(r4)
    lwz r5, 0x24(r4)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, 0x30(r4)
    lwz r5, 0x2c(r4)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, 0x38(r4)
    lwz r5, 0x34(r4)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0x40(r4)
    lwz r5, 0x3c(r4)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x48(r4)
    lwz r5, 0x44(r4)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x50(r4)
    lwz r5, 0x4c(r4)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x58(r4)
    lwz r5, 0x54(r4)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x60(r4)
    lwz r5, 0x5c(r4)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, 0x68(r4)
    lwz r5, 0x64(r4)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x70(r4)
    lwz r5, 0x6c(r4)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x78(r4)
    lwz r5, 0x74(r4)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x80(r4)
    lwz r5, 0x7c(r4)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x88(r4)
    lwz r5, 0x84(r4)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x90(r4)
    lwz r5, 0x8c(r4)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x98(r4)
    lwz r5, 0x94(r4)
    stw r5, 0x90(r3)
    stw r0, 0x94(r3)
    lwz r0, 0xa0(r4)
    lwz r5, 0x9c(r4)
    stw r5, 0x98(r3)
    stw r0, 0x9c(r3)
    lwz r0, 0xa8(r4)
    lwz r5, 0xa4(r4)
    stw r5, 0xa0(r3)
    stw r0, 0xa4(r3)
    lwz r0, 0xb0(r4)
    lwz r5, 0xac(r4)
    stw r5, 0xa8(r3)
    stw r0, 0xac(r3)
    lwz r0, 0xb8(r4)
    lwz r5, 0xb4(r4)
    stw r5, 0xb0(r3)
    stw r0, 0xb4(r3)
    lwz r0, 0xc0(r4)
    lwz r5, 0xbc(r4)
    stw r5, 0xb8(r3)
    stw r0, 0xbc(r3)
    lwz r0, 0xc8(r4)
    lwz r5, 0xc4(r4)
    stw r5, 0xc0(r3)
    stw r0, 0xc4(r3)
    lwz r0, 0xd0(r4)
    lwz r5, 0xcc(r4)
    stw r5, 0xc8(r3)
    stw r0, 0xcc(r3)
    lwz r0, 0xd8(r4)
    lwz r5, 0xd4(r4)
    stw r5, 0xd0(r3)
    stw r0, 0xd4(r3)
    lwz r0, 0xe0(r4)
    lwz r5, 0xdc(r4)
    stw r5, 0xd8(r3)
    stw r0, 0xdc(r3)
    lwz r0, 0xe8(r4)
    lwz r5, 0xe4(r4)
    stw r5, 0xe0(r3)
    stw r0, 0xe4(r3)
    lwz r0, 0xf0(r4)
    lwz r5, 0xec(r4)
    stw r5, 0xe8(r3)
    stw r0, 0xec(r3)
    lwz r0, 0xf8(r4)
    lwz r5, 0xf4(r4)
    stw r5, 0xf0(r3)
    stw r0, 0xf4(r3)
    lwz r0, 0x100(r4)
    lwz r5, 0xfc(r4)
    stw r5, 0xf8(r3)
    stw r0, 0xfc(r3)
    lwz r0, 0x108(r4)
    lwz r5, 0x104(r4)
    stw r5, 0x100(r3)
    stw r0, 0x104(r3)
    lwz r0, 0x110(r4)
    lwz r5, 0x10c(r4)
    stw r5, 0x108(r3)
    stw r0, 0x10c(r3)
    lwz r0, 0x118(r4)
    lwz r5, 0x114(r4)
    stw r5, 0x110(r3)
    stw r0, 0x114(r3)
    lwz r0, 0x120(r4)
    lwz r5, 0x11c(r4)
    stw r5, 0x118(r3)
    stw r0, 0x11c(r3)
    lwz r0, 0x128(r4)
    lwz r5, 0x124(r4)
    stw r5, 0x120(r3)
    stw r0, 0x124(r3)
    lwz r0, 0x130(r4)
    lwz r5, 0x12c(r4)
    stw r5, 0x128(r3)
    stw r0, 0x12c(r3)
    lwz r0, 0x138(r4)
    lwz r5, 0x134(r4)
    stw r5, 0x130(r3)
    stw r0, 0x134(r3)
    lwz r0, 0x140(r4)
    lwz r5, 0x13c(r4)
    stw r5, 0x138(r3)
    stw r0, 0x13c(r3)
    lwz r0, 0x148(r4)
    lwz r5, 0x144(r4)
    stw r5, 0x140(r3)
    stw r0, 0x144(r3)
    lwz r0, 0x150(r4)
    lwz r5, 0x14c(r4)
    stw r5, 0x148(r3)
    stw r0, 0x14c(r3)
    lwz r0, 0x158(r4)
    lwz r5, 0x154(r4)
    stw r5, 0x150(r3)
    stw r0, 0x154(r3)
    lwz r0, 0x160(r4)
    lwz r5, 0x15c(r4)
    stw r5, 0x158(r3)
    stw r0, 0x15c(r3)
    lwz r0, 0x168(r4)
    lwz r5, 0x164(r4)
    stw r5, 0x160(r3)
    stw r0, 0x164(r3)
    lwz r0, 0x170(r4)
    lwz r5, 0x16c(r4)
    stw r5, 0x168(r3)
    stw r0, 0x16c(r3)
    lwz r0, 0x178(r4)
    lwz r5, 0x174(r4)
    stw r5, 0x170(r3)
    stw r0, 0x174(r3)
    lwz r0, 0x180(r4)
    lwz r5, 0x17c(r4)
    stw r5, 0x178(r3)
    stw r0, 0x17c(r3)
    lwz r0, 0x188(r4)
    lwz r5, 0x184(r4)
    stw r5, 0x180(r3)
    stw r0, 0x184(r3)
    lwz r0, 0x190(r4)
    lwz r5, 0x18c(r4)
    stw r5, 0x188(r3)
    stw r0, 0x18c(r3)
    lwz r0, 0x198(r4)
    lwz r5, 0x194(r4)
    stw r5, 0x190(r3)
    stw r0, 0x194(r3)
    lwz r0, 0x1a0(r4)
    lwz r5, 0x19c(r4)
    stw r5, 0x198(r3)
    stw r0, 0x19c(r3)
    lwz r0, 0x1a8(r4)
    lwz r5, 0x1a4(r4)
    stw r5, 0x1a0(r3)
    stw r0, 0x1a4(r3)
    lwz r0, 0x1b0(r4)
    lwz r5, 0x1ac(r4)
    stw r5, 0x1a8(r3)
    stw r0, 0x1ac(r3)
    lwz r0, 0x1b8(r4)
    lwz r5, 0x1b4(r4)
    stw r5, 0x1b0(r3)
    stw r0, 0x1b4(r3)
    lwz r0, 0x1c0(r4)
    lwz r5, 0x1bc(r4)
    stw r5, 0x1b8(r3)
    stw r0, 0x1bc(r3)
    lwz r0, 0x1c8(r4)
    lwz r5, 0x1c4(r4)
    stw r5, 0x1c0(r3)
    stw r0, 0x1c4(r3)
    lwz r0, 0x1d0(r4)
    lwz r5, 0x1cc(r4)
    stw r5, 0x1c8(r3)
    stw r0, 0x1cc(r3)
    lwz r0, 0x1d8(r4)
    lwz r5, 0x1d4(r4)
    stw r5, 0x1d0(r3)
    stw r0, 0x1d4(r3)
    lwz r0, 0x1e0(r4)
    lwz r5, 0x1dc(r4)
    stw r5, 0x1d8(r3)
    stw r0, 0x1dc(r3)
    lwz r0, 0x1e8(r4)
    lwz r5, 0x1e4(r4)
    stw r5, 0x1e0(r3)
    stw r0, 0x1e4(r3)
    lwz r0, 0x1f0(r4)
    lwz r5, 0x1ec(r4)
    stw r5, 0x1e8(r3)
    stw r0, 0x1ec(r3)
    lwz r0, 0x1f8(r4)
    lwz r5, 0x1f4(r4)
    stw r5, 0x1f0(r3)
    stw r0, 0x1f4(r3)
    lwz r0, 0x200(r4)
    lwz r5, 0x1fc(r4)
    addi r4, r4, 0x200
    stw r5, 0x1f8(r3)
    stw r0, 0x1fc(r3)
    addi r3, r3, 0x200
    bdnz lbl_fn_803BC2D4_0000140C
    lwz r0, 0x1008(r31)
    addis r3, r25, 0x1
    lwz r4, 0x1004(r31)
    stw r4, -0x2c80(r3)
    stw r0, -0x2c7c(r3)
    lwz r0, 0x1010(r31)
    lwz r4, 0x100c(r31)
    stw r4, -0x2c78(r3)
    stw r0, -0x2c74(r3)
    lwz r0, 0x1018(r31)
    lwz r4, 0x1014(r31)
    stw r4, -0x2c70(r3)
    stw r0, -0x2c6c(r3)
    lwz r0, 0x1020(r31)
    lwz r4, 0x101c(r31)
    stw r4, -0x2c68(r3)
    stw r0, -0x2c64(r3)
    lwz r0, 0x1028(r31)
    lwz r4, 0x1024(r31)
    stw r4, -0x2c60(r3)
    stw r0, -0x2c5c(r3)
    lwz r0, 0x1030(r31)
    lwz r4, 0x102c(r31)
    stw r4, -0x2c58(r3)
    stw r0, -0x2c54(r3)
    lwz r0, 0x1038(r31)
    lwz r4, 0x1034(r31)
    stw r4, -0x2c50(r3)
    stw r0, -0x2c4c(r3)
    lwz r0, 0x1040(r31)
    lwz r4, 0x103c(r31)
    stw r4, -0x2c48(r3)
    stw r0, -0x2c44(r3)
    lwz r0, 0x1048(r31)
    lwz r4, 0x1044(r31)
    stw r4, -0x2c40(r3)
    stw r0, -0x2c3c(r3)
    lwz r0, 0x1050(r31)
    lwz r4, 0x104c(r31)
    stw r4, -0x2c38(r3)
    stw r0, -0x2c34(r3)
    lwz r0, 0x1058(r31)
    lwz r4, 0x1054(r31)
    stw r4, -0x2c30(r3)
    stw r0, -0x2c2c(r3)
    lwz r0, 0x1060(r31)
    lwz r4, 0x105c(r31)
    stw r4, -0x2c28(r3)
    stw r0, -0x2c24(r3)
    lwz r0, 0x1068(r31)
    lwz r4, 0x1064(r31)
    stw r4, -0x2c20(r3)
    stw r0, -0x2c1c(r3)
    lwz r0, 0x1070(r31)
    lwz r4, 0x106c(r31)
    stw r4, -0x2c18(r3)
    stw r0, -0x2c14(r3)
    lwz r0, 0x1078(r31)
    lwz r4, 0x1074(r31)
    stw r4, -0x2c10(r3)
    stw r0, -0x2c0c(r3)
    lwz r0, 0x1080(r31)
    lwz r4, 0x107c(r31)
    stw r4, -0x2c08(r3)
    stw r0, -0x2c04(r3)
    lwz r0, 0x1088(r31)
    lwz r4, 0x1084(r31)
    stw r4, -0x2c00(r3)
    stw r0, -0x2bfc(r3)
    lwz r0, 0x1090(r31)
    lwz r4, 0x108c(r31)
    stw r4, -0x2bf8(r3)
    stw r0, -0x2bf4(r3)
    lwz r0, 0x1098(r31)
    lwz r4, 0x1094(r31)
    stw r4, -0x2bf0(r3)
    stw r0, -0x2bec(r3)
    lwz r0, 0x10a0(r31)
    lwz r4, 0x109c(r31)
    stw r4, -0x2be8(r3)
    stw r0, -0x2be4(r3)
    lwz r0, 0x10a8(r31)
    lwz r4, 0x10a4(r31)
    stw r4, -0x2be0(r3)
    stw r0, -0x2bdc(r3)
    lwz r0, 0x10b0(r31)
    lwz r4, 0x10ac(r31)
    stw r4, -0x2bd8(r3)
    stw r0, -0x2bd4(r3)
    lwz r0, 0x10b8(r31)
    lwz r4, 0x10b4(r31)
    stw r4, -0x2bd0(r3)
    stw r0, -0x2bcc(r3)
    lwz r0, 0x10c0(r31)
    lwz r4, 0x10bc(r31)
    stw r4, -0x2bc8(r3)
    stw r0, -0x2bc4(r3)
    lwz r0, 0x10c8(r31)
    lwz r4, 0x10c4(r31)
    stw r4, -0x2bc0(r3)
    stw r0, -0x2bbc(r3)
    lwz r0, 0x10d0(r31)
    lwz r4, 0x10cc(r31)
    stw r4, -0x2bb8(r3)
    stw r0, -0x2bb4(r3)
    lwz r0, 0x10d8(r31)
    lwz r4, 0x10d4(r31)
    stw r4, -0x2bb0(r3)
    stw r0, -0x2bac(r3)
    lwz r0, 0x10e0(r31)
    lwz r4, 0x10dc(r31)
    stw r4, -0x2ba8(r3)
    stw r0, -0x2ba4(r3)
    lwz r0, 0x10e8(r31)
    lwz r4, 0x10e4(r31)
    stw r4, -0x2ba0(r3)
    stw r0, -0x2b9c(r3)
    lwz r0, 0x10f0(r31)
    lwz r4, 0x10ec(r31)
    stw r4, -0x2b98(r3)
    stw r0, -0x2b94(r3)
    lwz r0, 0x10f8(r31)
    lwz r4, 0x10f4(r31)
    stw r4, -0x2b90(r3)
    stw r0, -0x2b8c(r3)
    lwz r0, 0x1100(r31)
    lwz r4, 0x10fc(r31)
    stw r4, -0x2b88(r3)
    stw r0, -0x2b84(r3)
    lwz r0, 0x1108(r31)
    lwz r4, 0x1104(r31)
    stw r4, -0x2b80(r3)
    stw r0, -0x2b7c(r3)
    lwz r0, 0x1110(r31)
    lwz r4, 0x110c(r31)
    stw r4, -0x2b78(r3)
    stw r0, -0x2b74(r3)
    lwz r0, 0x1118(r31)
    lwz r4, 0x1114(r31)
    stw r4, -0x2b70(r3)
    stw r0, -0x2b6c(r3)
    lwz r0, 0x1120(r31)
    lwz r4, 0x111c(r31)
    stw r4, -0x2b68(r3)
    stw r0, -0x2b64(r3)
    lwz r0, 0x1128(r31)
    lwz r4, 0x1124(r31)
    stw r4, -0x2b60(r3)
    stw r0, -0x2b5c(r3)
    lwz r0, 0x1130(r31)
    lwz r4, 0x112c(r31)
    stw r4, -0x2b58(r3)
    stw r0, -0x2b54(r3)
    lwz r0, 0x1138(r31)
    lwz r4, 0x1134(r31)
    stw r4, -0x2b50(r3)
    stw r0, -0x2b4c(r3)
    lwz r0, 0x1140(r31)
    lwz r4, 0x113c(r31)
    stw r4, -0x2b48(r3)
    stw r0, -0x2b44(r3)
    lwz r0, 0x1148(r31)
    lwz r4, 0x1144(r31)
    stw r4, -0x2b40(r3)
    stw r0, -0x2b3c(r3)
    lwz r0, 0x1150(r31)
    lwz r4, 0x114c(r31)
    stw r4, -0x2b38(r3)
    stw r0, -0x2b34(r3)
    lwz r0, 0x1158(r31)
    lwz r4, 0x1154(r31)
    stw r4, -0x2b30(r3)
    stw r0, -0x2b2c(r3)
    lwz r0, 0x1160(r31)
    lwz r4, 0x115c(r31)
    stw r4, -0x2b28(r3)
    stw r0, -0x2b24(r3)
    lwz r0, 0x1168(r31)
    lwz r4, 0x1164(r31)
    stw r4, -0x2b20(r3)
    stw r0, -0x2b1c(r3)
    lwz r0, 0x1170(r31)
    lwz r4, 0x116c(r31)
    stw r4, -0x2b18(r3)
    stw r0, -0x2b14(r3)
    lwz r0, 0x1178(r31)
    lwz r4, 0x1174(r31)
    stw r4, -0x2b10(r3)
    stw r0, -0x2b0c(r3)
    lwz r0, 0x1180(r31)
    lwz r4, 0x117c(r31)
    stw r4, -0x2b08(r3)
    stw r0, -0x2b04(r3)
    lwz r0, 0x1188(r31)
    lwz r4, 0x1184(r31)
    stw r4, -0x2b00(r3)
    stw r0, -0x2afc(r3)
    lwz r0, 0x1190(r31)
    lwz r4, 0x118c(r31)
    stw r4, -0x2af8(r3)
    stw r0, -0x2af4(r3)
    lwz r0, 0x1198(r31)
    lwz r4, 0x1194(r31)
    stw r4, -0x2af0(r3)
    stw r0, -0x2aec(r3)
    lwz r0, 0x11a0(r31)
    lwz r4, 0x119c(r31)
    stw r4, -0x2ae8(r3)
    stw r0, -0x2ae4(r3)
    lwz r0, 0x11a8(r31)
    subi r29, r3, 0x7bb0
    lwz r4, 0x11a4(r31)
    addi r30, r31, 0x11c4
    stw r4, -0x2ae0(r3)
    mr r26, r29
    mr r27, r31
    mr r28, r30
    stw r0, -0x2adc(r3)
    li r24, 0x0
    li r23, 0x50
    lwz r0, 0x11b0(r31)
    lwz r4, 0x11ac(r31)
    stw r4, -0x2ad8(r3)
    stw r0, -0x2ad4(r3)
    lwz r0, 0x11b8(r31)
    lwz r4, 0x11b4(r31)
    stw r4, -0x2ad0(r3)
    stw r0, -0x2acc(r3)
    lwz r0, 0x11c0(r31)
    lwz r4, 0x11bc(r31)
    stw r4, -0x2ac8(r3)
    stw r0, -0x2ac4(r3)
lbl_fn_803BC2D4_00001BB8:
    lwz r0, 0x11c4(r27)
    addi r5, r26, 0xc
    stw r0, 0x0(r26)
    addi r4, r28, 0xc
    lwz r0, 0x11c8(r27)
    stw r0, 0x4(r26)
    lwz r0, 0x11cc(r27)
    stw r0, 0x8(r26)
    lwz r0, 0xc(r28)
    stw r0, 0xc(r26)
    mtctr r23
lbl_fn_803BC2D4_00001BE4:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803BC2D4_00001BE4
    addi r22, r28, 0x294
    addi r0, r26, 0x294
    lwz r3, 0x290(r28)
    cmplw r22, r0
    stw r3, 0x290(r26)
    beq lbl_fn_803BC2D4_00001C2C
    mr r3, r22
    bl fn_80686A48
    mr r5, r3
    mr r4, r22
    addi r3, r26, 0x294
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_803BC2D4_00001C2C:
    addi r24, r24, 0x1
    addi r27, r27, 0x2d4
    cmpwi r24, 0x1c
    addi r28, r28, 0x2d4
    addi r26, r26, 0x2d4
    blt lbl_fn_803BC2D4_00001BB8
    mr r26, r31
    li r24, 0x0
    li r23, 0x50
lbl_fn_803BC2D4_00001C50:
    lwz r0, 0x11c4(r26)
    addi r5, r29, 0xc
    stw r0, 0x0(r29)
    addi r4, r30, 0xc
    lwz r0, 0x11c8(r26)
    stw r0, 0x4(r29)
    lwz r0, 0x11cc(r26)
    stw r0, 0x8(r29)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r29)
    mtctr r23
lbl_fn_803BC2D4_00001C7C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803BC2D4_00001C7C
    addi r22, r30, 0x294
    addi r0, r29, 0x294
    lwz r3, 0x290(r30)
    cmplw r22, r0
    stw r3, 0x290(r29)
    beq lbl_fn_803BC2D4_00001CC4
    mr r3, r22
    bl fn_80686A48
    mr r5, r3
    mr r4, r22
    addi r3, r29, 0x294
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_803BC2D4_00001CC4:
    addi r24, r24, 0x1
    addi r26, r26, 0x2d4
    cmpwi r24, 0x1c
    addi r30, r30, 0x2d4
    addi r29, r29, 0x2d4
    blt lbl_fn_803BC2D4_00001C50
lbl_fn_803BC2D4_00001CDC:
    addis r27, r25, 0x1
    mr r28, r31
    li r24, 0x0
    li r29, 0x0
    lis r30, 0x1062
    subi r27, r27, 0x7d70
lbl_fn_803BC2D4_00001CF4:
    addis r5, r28, 0x1
    addi r4, r29, 0x1
    stw r29, -0x6f08(r5)
    addi r3, r29, 0x2
    addi r0, r29, 0x3
    mr r26, r28
    stw r4, -0x6f00(r5)
    li r23, 0x0
    stw r3, -0x6ef8(r5)
    stw r0, -0x6ef0(r5)
    lwz r0, -0x6f0c(r5)
    stw r0, 0x0(r27)
    stw r29, 0x4(r27)
    lwz r0, -0x6f00(r5)
    lwz r3, -0x6f04(r5)
    stw r3, 0x8(r27)
    stw r0, 0xc(r27)
    lwz r0, -0x6ef8(r5)
    lwz r3, -0x6efc(r5)
    stw r3, 0x10(r27)
    stw r0, 0x14(r27)
    lwz r0, -0x6ef0(r5)
    lwz r3, -0x6ef4(r5)
    stw r3, 0x18(r27)
    stw r0, 0x1c(r27)
    lwz r0, -0x6ee8(r5)
    lwz r3, -0x6eec(r5)
    stw r3, 0x20(r27)
    stw r0, 0x24(r27)
    lwz r0, -0x6ee0(r5)
    lwz r3, -0x6ee4(r5)
    stw r3, 0x28(r27)
    stw r0, 0x2c(r27)
    lwz r0, -0x6ed8(r5)
    lwz r3, -0x6edc(r5)
    stw r3, 0x30(r27)
    stw r0, 0x34(r27)
    lwz r0, -0x6ed0(r5)
    lwz r3, -0x6ed4(r5)
    stw r3, 0x38(r27)
    stw r0, 0x3c(r27)
lbl_fn_803BC2D4_00001D98:
    addis r3, r26, 0x1
    lwz r4, -0x6f0c(r3)
    cmpwi r4, 0x3e8
    blt lbl_fn_803BC2D4_00001E0C
    mr r3, r23
    bl fn_8020ED84
    cmpwi r3, 0x0
    bne lbl_fn_803BC2D4_00001E0C
    addis r3, r26, 0x1
    addi r0, r30, 0x4dd3
    lwz r5, -0x6f0c(r3)
    mr r3, r23
    mulhw r0, r0, r5
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r5
    bl fn_8020ED84
    bl fn_8020EF80
    bl fn_80211480
    addis r4, r26, 0x1
    addi r5, r30, 0x4dd3
    lwz r0, -0x6f0c(r4)
    mulhw r0, r5, r0
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_80211940
lbl_fn_803BC2D4_00001E0C:
    addis r3, r26, 0x1
    lwz r4, -0x6eec(r3)
    cmpwi r4, 0x3e8
    blt lbl_fn_803BC2D4_00001E80
    li r3, 0x0
    bl fn_80206B14
    cmpwi r3, 0x0
    bne lbl_fn_803BC2D4_00001E80
    addis r3, r26, 0x1
    addi r0, r30, 0x4dd3
    lwz r5, -0x6eec(r3)
    li r3, 0x0
    mulhw r0, r0, r5
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r5
    bl fn_80206B14
    bl fn_80206BE4
    bl fn_80211480
    addis r4, r26, 0x1
    addi r5, r30, 0x4dd3
    lwz r0, -0x6eec(r4)
    mulhw r0, r5, r0
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_80211940
lbl_fn_803BC2D4_00001E80:
    addi r23, r23, 0x1
    addi r26, r26, 0x8
    cmpwi r23, 0x4
    blt lbl_fn_803BC2D4_00001D98
    addi r24, r24, 0x1
    addi r28, r28, 0x40
    cmpwi r24, 0x7
    addi r27, r27, 0x40
    addi r29, r29, 0x4
    blt lbl_fn_803BC2D4_00001CF4
    mr r3, r25
    bl fn_8044D4F0
    mr r22, r31
    li r23, 0x0
lbl_fn_803BC2D4_00001EB8:
    addis r4, r22, 0x1
    mr r3, r25
    lhz r5, -0x6d4c(r4)
    addi r4, r1, 0x8
    addis r5, r5, 0x2
    subi r0, r5, 0x7960
    stw r0, 0x8(r1)
    bl fn_8044D404
    addi r23, r23, 0x1
    addi r22, r22, 0x2
    cmpwi r23, 0x100
    blt lbl_fn_803BC2D4_00001EB8
    li r6, 0x0
    addis r3, r31, 0x1
    addis r4, r6, 0x1
    subi r5, r4, 0x6b4c
    lbzux r0, r5, r31
    li r6, 0x6
    extsb r0, r0
    stw r0, 0x64a0(r25)
    addis r4, r6, 0x1
    li r6, 0xc
    lbz r0, 0x1(r5)
    extsb r0, r0
    stw r0, 0x64a4(r25)
    lbz r0, 0x2(r5)
    extsb r0, r0
    stw r0, 0x64a8(r25)
    lbz r0, 0x3(r5)
    extsb r0, r0
    stw r0, 0x64ac(r25)
    lbz r0, 0x4(r5)
    extsb r0, r0
    stw r0, 0x64b0(r25)
    lbz r0, 0x5(r5)
    subi r5, r4, 0x6b4c
    addis r4, r6, 0x1
    extsb r0, r0
    stw r0, 0x64b4(r25)
    lbzux r0, r5, r31
    extsb r0, r0
    stw r0, 0x64b8(r25)
    lbz r0, 0x1(r5)
    extsb r0, r0
    stw r0, 0x64bc(r25)
    lbz r0, 0x2(r5)
    extsb r0, r0
    stw r0, 0x64c0(r25)
    lbz r0, 0x3(r5)
    extsb r0, r0
    stw r0, 0x64c4(r25)
    lbz r0, 0x4(r5)
    extsb r0, r0
    stw r0, 0x64c8(r25)
    lbz r0, 0x5(r5)
    subi r5, r4, 0x6b4c
    extsb r0, r0
    stw r0, 0x64cc(r25)
    lbzux r0, r5, r31
    extsb r0, r0
    stw r0, 0x64d0(r25)
    lbz r0, 0x1(r5)
    extsb r0, r0
    stw r0, 0x64d4(r25)
    lbz r0, 0x2(r5)
    extsb r0, r0
    stw r0, 0x64d8(r25)
    lbz r0, 0x3(r5)
    extsb r0, r0
    stw r0, 0x64dc(r25)
    lbz r0, 0x4(r5)
    extsb r0, r0
    stw r0, 0x64e0(r25)
    lbz r0, 0x5(r5)
    extsb r0, r0
    stw r0, 0x64e4(r25)
    lbz r0, -0x6b3a(r3)
    extsb r0, r0
    stw r0, 0x64e8(r25)
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_803BC2D4_00002008
    lwz r0, -0x6b38(r3)
    stw r0, 0x5744(r4)
lbl_fn_803BC2D4_00002008:
    lmw r22, 0x18(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
