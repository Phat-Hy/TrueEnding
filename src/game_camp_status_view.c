#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80089B5C(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_8012AE50(void);
extern void fn_8012AFE8(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_80133B30(void);
extern void fn_80145334(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_80153698(void);
extern void fn_8015E7A0(void);
extern void fn_8016F824(void);
extern void fn_8016FDCC(void);
extern void fn_8017039C(void);
extern void fn_80171420(void);
extern void fn_80183618(void);
extern void fn_80183774(void);
extern void fn_80219558(void);
extern void fn_8036DAF4(void);
extern void fn_80370094(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80373148(void);
extern void fn_8039BC0C(void);
extern void fn_803ACD50(void);
extern void fn_803AD148(void);
extern void fn_803AD278(void);
extern void fn_803B84DC(void);
extern void fn_803B8F50(void);
extern void fn_80470580(void);
extern void fn_8049B72C(void);
extern void fn_804A0BCC(void);
extern void fn_804A0E90(void);
extern void fn_8054A0A0(void);
extern void fn_8054A340(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80622180(void);
extern void fn_8067E23C(void);
extern void fn_80680CF8(void);
extern void fn_806958E0(void);

/* External data declarations */
extern u8 lbl_807500A8[];
extern u8 lbl_8078B6C8[];

/* Small data declarations */
extern u32 lbl_8087DDA0;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA00;
extern u32 lbl_80885CA0;
extern u32 lbl_80885CA4;

/* Function declarations */
void fn_803B9624(void);
void fn_803B9638(void);
void fn_803B97C4(void);
void fn_803B97C8(void);
void fn_803B97D8(void);
void fn_803B9804(void);
void fn_803B9C98(void);
void fn_803B9D78(void);
void fn_803BA0CC(void);
void fn_803BA120(void);
void fn_803BA408(void);
void fn_803BA620(void);
void fn_803BAA90(void);
void fn_803BAAE0(void);
void fn_803BAD6C(void);
void fn_803BAE54(void);
void fn_803BAEF8(void);

asm void fn_803B9624(void)
{
    nofralloc
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_803B9638(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r25, 0x54(r1)
    mr r31, r3
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    blt lbl_fn_803B9638_0000018C
    lis r4, 0x1
    addi r3, r3, 0x160
    subi r5, r4, 0xf60
    li r4, 0x0
    bl memset
    addi r6, r31, 0x104
    addi r5, r31, 0xc4
    addi r3, r31, 0x160
    li r4, 0x0
    bl fn_80622180
    addi r3, r31, 0x58
    bl fn_80470580
    mr r4, r3
    addi r3, r31, 0x200
    li r5, 0x6000
    bl memcpy
    li r25, 0x0
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x3
    b lbl_fn_803B9638_000000E4
lbl_fn_803B9638_00000090:
    add r3, r31, r29
    addi r3, r3, 0x60
    bl fn_80470580
    add r5, r31, r30
    mr r4, r3
    addi r3, r5, 0x6200
    li r5, 0x1200
    bl memcpy
    add r3, r31, r28
    lhz r4, 0x168(r31)
    lwz r0, 0xa0(r3)
    slw r3, r26, r27
    andc r3, r4, r3
    addi r29, r29, 0x8
    slw r0, r0, r27
    addi r28, r28, 0x4
    or r0, r3, r0
    sth r0, 0x168(r31)
    addi r27, r27, 0x2
    addi r25, r25, 0x1
    addi r30, r30, 0x1200
lbl_fn_803B9638_000000E4:
    lwz r0, 0xc0(r31)
    cmpw r25, r0
    blt lbl_fn_803B9638_00000090
    cmpwi r0, 0x8
    bge lbl_fn_803B9638_00000110
    slwi r0, r0, 1
    li r3, 0x3
    lhz r4, 0x168(r31)
    slw r0, r3, r0
    andc r0, r4, r0
    sth r0, 0x168(r31)
lbl_fn_803B9638_00000110:
    lwz r3, 0xc0(r31)
    li r26, 0x1
    lwz r0, 0x148(r31)
    mulli r3, r3, 0x1200
    lwz r5, 0x164(r31)
    lwz r4, 0x144(r31)
    cmpwi r0, 0x0
    or r0, r5, r4
    ori r0, r0, 0x1
    stw r0, 0x164(r31)
    addi r25, r3, 0x60a0
    beq lbl_fn_803B9638_00000160
    addis r3, r31, 0x1
    mr r5, r25
    addi r4, r31, 0x160
    subi r3, r3, 0xe00
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_803B9638_00000160
    li r26, 0x0
lbl_fn_803B9638_00000160:
    cmpwi r26, 0x0
    beq lbl_fn_803B9638_0000018C
    addi r3, r1, 0x8
    bl fn_803B84DC
    lwz r3, 0x48(r31)
    mr r6, r25
    addi r4, r1, 0x8
    addi r5, r31, 0x160
    li r7, 0x0
    li r8, 0x1
    bl fn_803B8F50
lbl_fn_803B9638_0000018C:
    lmw r25, 0x54(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803B97C4(void)
{
    nofralloc
    blr
}

asm void fn_803B97C8(void)
{
    nofralloc
    lwz r0, 0xc0(r3)
    mulli r3, r0, 0x1200
    addi r3, r3, 0x60a0
    blr
}

asm void fn_803B97D8(void)
{
    nofralloc
    cmpwi r5, 0x0
    beq lbl_fn_803B97D8_000001C0
    addi r4, r4, 0x2
lbl_fn_803B97D8_000001C0:
    cmpwi r5, 0x0
    stw r4, 0x4(r3)
    beq lbl_fn_803B97D8_000001D0
    subi r5, r5, 0x1
lbl_fn_803B97D8_000001D0:
    li r0, 0x0
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_803B9804(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r24
    li r27, 0x0
    lwz r26, lbl_8087F430
    lwz r0, 0x10d0(r26)
    stw r0, 0x0(r3)
lbl_fn_803B9804_00000208:
    mr r3, r26
    mr r4, r27
    bl fn_80370174
    addi r27, r27, 0x1
    stwu r3, 0x4(r25)
    cmpwi r27, 0x1000
    blt lbl_fn_803B9804_00000208
    mr r25, r24
    li r27, 0x0
lbl_fn_803B9804_0000022C:
    mr r3, r26
    mr r4, r27
    bl fn_80370A78
    addi r27, r27, 0x1
    stw r3, 0x4004(r25)
    cmpwi r27, 0x100
    addi r25, r25, 0x4
    blt lbl_fn_803B9804_0000022C
    mr r3, r26
    bl fn_80373148
    lwz r0, 0x48(r3)
    mr r27, r24
    stb r0, 0x4d0c(r24)
    li r28, 0x0
    lwz r0, 0x4c(r3)
    sth r0, 0x4d0e(r24)
    lwz r0, 0x50(r3)
    stb r0, 0x4d0d(r24)
    lwz r31, 0x10d8(r26)
    lwz r30, 0x134(r31)
    lwz r25, 0x140(r30)
    addi r26, r30, 0x13c
    b lbl_fn_803B9804_000002F4
lbl_fn_803B9804_00000288:
    lwz r4, 0xc(r25)
    mr r3, r30
    bl fn_803ACD50
    cmpwi r3, 0x0
    bne lbl_fn_803B9804_000002AC
    lwz r0, 0xc(r25)
    addi r28, r28, 0x1
    sth r0, 0x4404(r27)
    addi r27, r27, 0x2
lbl_fn_803B9804_000002AC:
    lwz r3, 0x4(r25)
    cmpwi r3, 0x0
    beq lbl_fn_803B9804_000002DC
    b lbl_fn_803B9804_000002C0
lbl_fn_803B9804_000002BC:
    mr r3, r0
lbl_fn_803B9804_000002C0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803B9804_000002BC
    mr r25, r3
    b lbl_fn_803B9804_000002F4
    b lbl_fn_803B9804_000002DC
lbl_fn_803B9804_000002D8:
    mr r25, r3
lbl_fn_803B9804_000002DC:
    lwz r0, 0x8(r25)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r25, r0
    bne lbl_fn_803B9804_000002D8
    mr r25, r3
lbl_fn_803B9804_000002F4:
    cmplw r25, r26
    bne lbl_fn_803B9804_00000288
    sth r28, 0x4504(r24)
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803B9804_00000364
    lwz r3, 0x2640(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B9804_00000364
    lbz r0, 0x71(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B9804_00000364
    lwz r0, 0x74(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803B9804_00000348
    lwz r0, 0x78(r3)
    li r4, 0x1
    slwi r0, r0, 2
    add r3, r24, r0
    stw r4, 0x4(r3)
    b lbl_fn_803B9804_00000364
lbl_fn_803B9804_00000348:
    cmpwi r0, 0x0
    bne lbl_fn_803B9804_00000364
    lwz r0, 0x78(r3)
    li r4, 0x1
    slwi r0, r0, 2
    add r3, r24, r0
    stw r4, 0x4004(r3)
lbl_fn_803B9804_00000364:
    lwz r27, lbl_8087FA00
    cmpwi r27, 0x0
    beq lbl_fn_803B9804_000004CC
    li r26, 0x0
    li r28, 0x0
    b lbl_fn_803B9804_000004C0
lbl_fn_803B9804_0000037C:
    lwz r0, 0x4c(r27)
    add r29, r0, r28
    lwz r4, 0x210(r29)
    addi r29, r29, 0x10
    subic. r3, r4, 0x1
    bge lbl_fn_803B9804_00000398
    addi r3, r3, 0x20
lbl_fn_803B9804_00000398:
    lwz r0, 0x204(r29)
    cmpw r3, r0
    bne lbl_fn_803B9804_000003AC
    li r25, 0x0
    b lbl_fn_803B9804_000004B0
lbl_fn_803B9804_000003AC:
    subic. r3, r4, 0x1
    bge lbl_fn_803B9804_000003B8
    addi r3, r3, 0x20
lbl_fn_803B9804_000003B8:
    slwi r0, r3, 4
    add r25, r29, r0
    b lbl_fn_803B9804_000004B0
lbl_fn_803B9804_000003C4:
    lhz r0, 0x0(r25)
    cmplwi r0, 0x20
    bne lbl_fn_803B9804_00000460
    lbz r0, 0xd(r25)
    lwz r4, 0x8(r25)
    cmplwi r0, 0x2
    bne lbl_fn_803B9804_000003F0
    slwi r0, r4, 2
    add r3, r24, r0
    lwz r4, 0x4(r3)
    b lbl_fn_803B9804_00000428
lbl_fn_803B9804_000003F0:
    cmplwi r0, 0x1
    bne lbl_fn_803B9804_00000408
    slwi r0, r4, 2
    add r3, r24, r0
    lwz r4, 0x4004(r3)
    b lbl_fn_803B9804_00000428
lbl_fn_803B9804_00000408:
    cmplwi r0, 0x3
    bne lbl_fn_803B9804_00000428
    bl fn_80680CF8
    lwz r4, 0x8(r25)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    addi r4, r3, 0x1
lbl_fn_803B9804_00000428:
    lbz r0, 0xc(r25)
    cmplwi r0, 0x1
    bne lbl_fn_803B9804_00000448
    lwz r0, 0x4(r25)
    slwi r0, r0, 2
    add r3, r24, r0
    stw r4, 0x4(r3)
    b lbl_fn_803B9804_00000460
lbl_fn_803B9804_00000448:
    cmpwi r0, 0x0
    bne lbl_fn_803B9804_00000460
    lwz r0, 0x4(r25)
    slwi r0, r0, 2
    add r3, r24, r0
    stw r4, 0x4004(r3)
lbl_fn_803B9804_00000460:
    subf r0, r29, r25
    li r3, -0x1
    srwi r0, r0, 4
    cmplwi r0, 0x1f
    bgt lbl_fn_803B9804_00000478
    mr r3, r0
lbl_fn_803B9804_00000478:
    cmpwi r3, -0x1
    bne lbl_fn_803B9804_00000488
    li r25, 0x0
    b lbl_fn_803B9804_000004B0
lbl_fn_803B9804_00000488:
    subic. r3, r3, 0x1
    bge lbl_fn_803B9804_00000494
    addi r3, r3, 0x20
lbl_fn_803B9804_00000494:
    lwz r0, 0x204(r29)
    cmpw r3, r0
    bne lbl_fn_803B9804_000004A8
    li r25, 0x0
    b lbl_fn_803B9804_000004B0
lbl_fn_803B9804_000004A8:
    slwi r0, r3, 4
    add r25, r29, r0
lbl_fn_803B9804_000004B0:
    cmpwi r25, 0x0
    bne lbl_fn_803B9804_000003C4
    addi r28, r28, 0x37c
    addi r26, r26, 0x1
lbl_fn_803B9804_000004C0:
    lwz r0, 0x48(r27)
    cmplw r26, r0
    blt lbl_fn_803B9804_0000037C
lbl_fn_803B9804_000004CC:
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803B9804_000004EC
    lwz r0, 0x5c(r3)
    stw r0, 0xe60(r24)
    lwz r3, lbl_8087F098
    lwz r0, 0x1b8(r3)
    stw r0, 0xe64(r24)
lbl_fn_803B9804_000004EC:
    mr r28, r24
    li r25, 0x0
    li r29, 0x0
    li r27, 0x0
    li r26, 0x1
    b lbl_fn_803B9804_00000550
lbl_fn_803B9804_00000504:
    cmpwi r25, 0x100
    bge lbl_fn_803B9804_0000055C
    lwz r4, 0x84(r31)
    lwz r3, lbl_8087F890
    lwzx r4, r4, r27
    bl fn_8011FE3C
    cmpwi r3, 0x0
    beq lbl_fn_803B9804_00000548
    lwz r4, 0x84(r31)
    addi r25, r25, 0x1
    lwzx r0, r4, r27
    stw r0, 0x4508(r28)
    stb r26, 0x450c(r28)
    lwz r0, 0x12a8(r3)
    extrwi r0, r0, 1, 11
    stb r0, 0x450d(r28)
    addi r28, r28, 0x8
lbl_fn_803B9804_00000548:
    addi r27, r27, 0x148
    addi r29, r29, 0x1
lbl_fn_803B9804_00000550:
    lwz r0, 0x80(r31)
    cmplw r29, r0
    blt lbl_fn_803B9804_00000504
lbl_fn_803B9804_0000055C:
    slwi r0, r25, 3
    li r29, 0x0
    add r28, r24, r0
    li r27, 0x0
    li r26, 0x2
    b lbl_fn_803B9804_000005C0
lbl_fn_803B9804_00000574:
    cmpwi r25, 0x100
    bge lbl_fn_803B9804_000005CC
    lwz r4, 0x8c(r31)
    lwz r3, lbl_8087F408
    lwzx r4, r4, r27
    bl fn_8011FC10
    cmpwi r3, 0x0
    beq lbl_fn_803B9804_000005B8
    lwz r4, 0x8c(r31)
    addi r25, r25, 0x1
    lwzx r0, r4, r27
    stw r0, 0x4508(r28)
    stb r26, 0x450c(r28)
    lwz r0, 0x12a8(r3)
    extrwi r0, r0, 1, 11
    stb r0, 0x450d(r28)
    addi r28, r28, 0x8
lbl_fn_803B9804_000005B8:
    addi r27, r27, 0x148
    addi r29, r29, 0x1
lbl_fn_803B9804_000005C0:
    lwz r0, 0x88(r31)
    cmplw r29, r0
    blt lbl_fn_803B9804_00000574
lbl_fn_803B9804_000005CC:
    slwi r0, r25, 3
    li r29, 0x0
    add r28, r24, r0
    li r27, 0x0
    li r26, 0x3
    b lbl_fn_803B9804_00000630
lbl_fn_803B9804_000005E4:
    cmpwi r25, 0x100
    bge lbl_fn_803B9804_0000063C
    lwz r4, 0x94(r31)
    lwz r3, lbl_8087F8A0
    lwzx r4, r4, r27
    bl fn_8011F91C
    cmpwi r3, 0x0
    beq lbl_fn_803B9804_00000628
    lwz r4, 0x94(r31)
    addi r25, r25, 0x1
    lwzx r0, r4, r27
    stw r0, 0x4508(r28)
    stb r26, 0x450c(r28)
    lwz r0, 0x12a8(r3)
    extrwi r0, r0, 1, 11
    stb r0, 0x450d(r28)
    addi r28, r28, 0x8
lbl_fn_803B9804_00000628:
    addi r27, r27, 0x148
    addi r29, r29, 0x1
lbl_fn_803B9804_00000630:
    lwz r0, 0x90(r31)
    cmplw r29, r0
    blt lbl_fn_803B9804_000005E4
lbl_fn_803B9804_0000063C:
    sth r25, 0x4d08(r24)
    addi r3, r24, 0x4d18
    addi r4, r30, 0x154
    li r5, 0x200
    lwz r6, lbl_8087F8A0
    lwz r6, 0x48(r6)
    lwz r0, 0x58(r6)
    stw r0, 0x4d14(r24)
    bl memcpy
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803B9C98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r30, lbl_8087F430
    cmpwi r30, 0x0
    beq lbl_fn_803B9C98_00000734
    lwz r4, 0x0(r28)
    mr r3, r30
    bl fn_80370094
    mr r3, r30
    li r4, 0x11b
    li r5, 0x0
    li r6, 0x1
    bl fn_80370320
    mr r31, r28
    li r29, 0x0
lbl_fn_803B9C98_000006C8:
    cmpwi r29, 0x1e
    bne lbl_fn_803B9C98_000006E8
    mr r3, r30
    mr r4, r29
    li r5, 0x1
    li r6, 0x1
    bl fn_80370320
    b lbl_fn_803B9C98_000006FC
lbl_fn_803B9C98_000006E8:
    lwz r5, 0x4(r31)
    mr r3, r30
    mr r4, r29
    li r6, 0x1
    bl fn_80370320
lbl_fn_803B9C98_000006FC:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x1000
    blt lbl_fn_803B9C98_000006C8
    lwz r0, 0x470(r28)
    cmpwi r0, 0x0
    ble lbl_fn_803B9C98_00000728
    lwz r3, lbl_8087F0A8
    li r0, 0x3
    stw r0, 0xd4(r3)
    b lbl_fn_803B9C98_00000734
lbl_fn_803B9C98_00000728:
    lwz r3, lbl_8087F0A8
    li r0, 0x1
    stw r0, 0xd4(r3)
lbl_fn_803B9C98_00000734:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B9D78(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r24, 0x20(r1)
    mr r29, r3
    mr r25, r29
    li r24, 0x0
    lwz r30, lbl_8087F430
lbl_fn_803B9D78_00000774:
    lwz r5, 0x4004(r25)
    mr r3, r30
    mr r4, r24
    bl fn_80370AE4
    addi r24, r24, 0x1
    addi r25, r25, 0x4
    cmpwi r24, 0x100
    blt lbl_fn_803B9D78_00000774
    lwz r31, 0x10d8(r30)
    lwz r27, 0x134(r31)
    lwz r25, 0x13c(r27)
    addi r28, r27, 0x138
    cmpwi r25, 0x0
    beq lbl_fn_803B9D78_000008E0
    lwz r26, 0x0(r25)
    cmpwi r26, 0x0
    beq lbl_fn_803B9D78_00000838
    lwz r24, 0x0(r26)
    cmpwi r24, 0x0
    beq lbl_fn_803B9D78_000007F4
    lwz r4, 0x0(r24)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_000007D8
    mr r3, r28
    bl fn_803AD278
lbl_fn_803B9D78_000007D8:
    lwz r4, 0x4(r24)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_000007EC
    mr r3, r28
    bl fn_803AD278
lbl_fn_803B9D78_000007EC:
    mr r3, r24
    bl dtor_80084684
lbl_fn_803B9D78_000007F4:
    lwz r24, 0x4(r26)
    cmpwi r24, 0x0
    beq lbl_fn_803B9D78_00000830
    lwz r4, 0x0(r24)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_00000814
    mr r3, r28
    bl fn_803AD278
lbl_fn_803B9D78_00000814:
    lwz r4, 0x4(r24)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_00000828
    mr r3, r28
    bl fn_803AD278
lbl_fn_803B9D78_00000828:
    mr r3, r24
    bl dtor_80084684
lbl_fn_803B9D78_00000830:
    mr r3, r26
    bl dtor_80084684
lbl_fn_803B9D78_00000838:
    lwz r24, 0x4(r25)
    cmpwi r24, 0x0
    beq lbl_fn_803B9D78_000008C4
    lwz r26, 0x0(r24)
    cmpwi r26, 0x0
    beq lbl_fn_803B9D78_00000880
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_00000864
    mr r3, r28
    bl fn_803AD278
lbl_fn_803B9D78_00000864:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_00000878
    mr r3, r28
    bl fn_803AD278
lbl_fn_803B9D78_00000878:
    mr r3, r26
    bl dtor_80084684
lbl_fn_803B9D78_00000880:
    lwz r26, 0x4(r24)
    cmpwi r26, 0x0
    beq lbl_fn_803B9D78_000008BC
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_000008A0
    mr r3, r28
    bl fn_803AD278
lbl_fn_803B9D78_000008A0:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_000008B4
    mr r3, r28
    bl fn_803AD278
lbl_fn_803B9D78_000008B4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_803B9D78_000008BC:
    mr r3, r24
    bl dtor_80084684
lbl_fn_803B9D78_000008C4:
    mr r3, r25
    bl dtor_80084684
    li r3, 0x0
    stw r3, 0x0(r28)
    addi r0, r28, 0x4
    stw r3, 0x4(r28)
    stw r0, 0x8(r28)
lbl_fn_803B9D78_000008E0:
    lhz r0, 0x4504(r29)
    li r24, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_803B9D78_00000980
    mr r25, r29
    addi r26, r27, 0x138
    li r28, 0x1
    b lbl_fn_803B9D78_00000974
lbl_fn_803B9D78_00000900:
    lhz r0, 0x4404(r25)
    mr r3, r26
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    addi r7, r1, 0x9
    bl fn_8039BC0C
    lwz r5, 0xc(r1)
    mr r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_803B9D78_00000940
    lwz r0, 0x10(r1)
    lwzu r3, 0xc(r5)
    cmpw r3, r0
    bge lbl_fn_803B9D78_00000968
lbl_fn_803B9D78_00000940:
    lwz r5, 0x10(r1)
    mr r3, r26
    lbz r0, lbl_8087DDA0
    addi r7, r1, 0x18
    stw r5, 0x18(r1)
    lbz r5, 0x8(r1)
    stb r0, 0x1c(r1)
    lbz r6, 0x9(r1)
    bl fn_803AD148
    addi r5, r3, 0xc
lbl_fn_803B9D78_00000968:
    stb r28, 0x4(r5)
    addi r25, r25, 0x2
    addi r24, r24, 0x1
lbl_fn_803B9D78_00000974:
    lhz r0, 0x4504(r29)
    cmpw r24, r0
    blt lbl_fn_803B9D78_00000900
lbl_fn_803B9D78_00000980:
    lwz r4, 0x4d14(r29)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_803B9D78_000009C0
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    cmpwi r3, 0x0
    beq lbl_fn_803B9D78_000009C0
    lwz r24, lbl_8087F8A0
    lwz r4, 0x4d14(r29)
    mr r3, r24
    bl fn_8011F91C
    mr r4, r3
    mr r3, r24
    li r5, 0x0
    bl fn_8054A0A0
lbl_fn_803B9D78_000009C0:
    lwz r24, lbl_8087F098
    cmpwi r24, 0x0
    beq lbl_fn_803B9D78_00000A00
    mr r3, r30
    li r4, 0x397
    bl fn_80370174
    mr r4, r3
    mr r3, r24
    bl fn_80183618
    lwz r26, lbl_8087F098
    mr r3, r30
    li r4, 0x398
    bl fn_80370174
    mr r4, r3
    mr r3, r26
    bl fn_80183774
lbl_fn_803B9D78_00000A00:
    addi r3, r27, 0x154
    addi r4, r29, 0x4d18
    li r5, 0x200
    bl memcpy
    li r24, 0x0
lbl_fn_803B9D78_00000A14:
    lwz r4, 0x4d18(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803B9D78_00000A94
    lwz r5, 0x4d1c(r29)
    rlwinm r0, r5, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803B9D78_00000A3C
    lwz r3, 0x64(r31)
    clrlwi r5, r5, 31
    bl fn_804A0E90
lbl_fn_803B9D78_00000A3C:
    lwz r0, 0x4d1c(r29)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803B9D78_00000A84
    lwz r3, 0x64(r31)
    li r4, 0x4
    lwz r5, 0x4d18(r29)
    bl fn_804A0BCC
    cmpwi r3, 0x0
    beq lbl_fn_803B9D78_00000A84
    lwz r0, 0x4d1c(r29)
    lwz r5, 0x10c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    rlwinm r4, r5, 0, 22, 20
    bne lbl_fn_803B9D78_00000A80
    ori r4, r5, 0x400
lbl_fn_803B9D78_00000A80:
    bl fn_8049B72C
lbl_fn_803B9D78_00000A84:
    addi r24, r24, 0x1
    addi r29, r29, 0x8
    cmpwi r24, 0x40
    blt lbl_fn_803B9D78_00000A14
lbl_fn_803B9D78_00000A94:
    lmw r24, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803BA0CC(void)
{
    nofralloc
    lhz r0, 0x4d08(r3)
    mr r6, r3
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803BA0CC_00000AF4
lbl_fn_803BA0CC_00000AC0:
    lbz r0, 0x450c(r6)
    cmpw r4, r0
    bne lbl_fn_803BA0CC_00000AE8
    lwz r0, 0x4508(r6)
    cmpw r5, r0
    bne lbl_fn_803BA0CC_00000AE8
    slwi r0, r7, 3
    add r3, r3, r0
    addi r3, r3, 0x4508
    blr
lbl_fn_803BA0CC_00000AE8:
    addi r6, r6, 0x8
    addi r7, r7, 0x1
    bdnz lbl_fn_803BA0CC_00000AC0
lbl_fn_803BA0CC_00000AF4:
    li r3, 0x0
    blr
}

asm void fn_803BA120(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bne lbl_fn_803BA120_00000DC8
    lis r4, 0x2
    lwz r10, 0x470(r3)
    subi r0, r4, 0x7578
    stw r0, 0x0(r3)
    mr r8, r31
    li r11, 0x0
    lis r6, lbl_8078B6C8@ha
    li r4, 0x0
    li r0, 0x27
lbl_fn_803BA120_00000B44:
    addi r9, r6, lbl_8078B6C8@l
    li r7, 0x0
    mtctr r0
lbl_fn_803BA120_00000B50:
    lwz r5, 0x0(r9)
    cmpw r11, r5
    bne lbl_fn_803BA120_00000B64
    li r5, 0x1
    b lbl_fn_803BA120_00000BEC
lbl_fn_803BA120_00000B64:
    lwz r5, 0x4(r9)
    cmpw r11, r5
    bne lbl_fn_803BA120_00000B78
    li r5, 0x1
    b lbl_fn_803BA120_00000BEC
lbl_fn_803BA120_00000B78:
    lwz r5, 0x8(r9)
    cmpw r11, r5
    bne lbl_fn_803BA120_00000B8C
    li r5, 0x1
    b lbl_fn_803BA120_00000BEC
lbl_fn_803BA120_00000B8C:
    lwz r5, 0xc(r9)
    cmpw r11, r5
    bne lbl_fn_803BA120_00000BA0
    li r5, 0x1
    b lbl_fn_803BA120_00000BEC
lbl_fn_803BA120_00000BA0:
    lwz r5, 0x10(r9)
    cmpw r11, r5
    bne lbl_fn_803BA120_00000BB4
    li r5, 0x1
    b lbl_fn_803BA120_00000BEC
lbl_fn_803BA120_00000BB4:
    lwz r5, 0x14(r9)
    cmpw r11, r5
    bne lbl_fn_803BA120_00000BC8
    li r5, 0x1
    b lbl_fn_803BA120_00000BEC
lbl_fn_803BA120_00000BC8:
    lwz r5, 0x18(r9)
    cmpw r11, r5
    bne lbl_fn_803BA120_00000BDC
    li r5, 0x1
    b lbl_fn_803BA120_00000BEC
lbl_fn_803BA120_00000BDC:
    addi r9, r9, 0x1c
    addi r7, r7, 0x6
    bdnz lbl_fn_803BA120_00000B50
    li r5, 0x0
lbl_fn_803BA120_00000BEC:
    cmpwi r5, 0x0
    bne lbl_fn_803BA120_00000BF8
    stw r4, 0x4(r8)
lbl_fn_803BA120_00000BF8:
    addi r11, r11, 0x1
    addi r8, r8, 0x4
    cmpwi r11, 0x1000
    blt lbl_fn_803BA120_00000B44
    addi r0, r10, 0x1
    li r4, 0x1
    cmpwi r0, 0x1
    bgt lbl_fn_803BA120_00000C1C
    mr r4, r0
lbl_fn_803BA120_00000C1C:
    li r29, 0x0
    li r30, 0x1
    li r0, 0x64
    stw r4, 0x470(r3)
    li r4, 0x0
    li r5, 0x400
    stw r29, 0xe20(r3)
    stw r29, 0xe24(r3)
    stw r30, 0xe30(r3)
    stw r29, 0xe18(r3)
    stw r29, 0xe1c(r3)
    stw r29, 0xe40(r3)
    stw r0, 0xe44(r3)
    stw r29, 0xe60(r3)
    stw r29, 0xe64(r3)
    stw r30, 0x4(r3)
    stw r30, 0x7c(r3)
    stw r30, 0xb4(r3)
    addi r3, r3, 0x4004
    bl memset
    addi r3, r31, 0x4404
    li r4, 0x0
    li r5, 0x100
    bl memset
    li r0, 0x8
    li r4, 0x2
    li r3, 0x4
    mr r5, r31
    sth r29, 0x4504(r31)
    stb r4, 0x4d0c(r31)
    sth r3, 0x4d0e(r31)
    stb r30, 0x4d0d(r31)
    mtctr r0
lbl_fn_803BA120_00000CA0:
    stw r29, 0x4508(r5)
    stw r29, 0x4510(r5)
    stw r29, 0x4518(r5)
    stw r29, 0x4520(r5)
    stw r29, 0x4528(r5)
    stw r29, 0x4530(r5)
    stw r29, 0x4538(r5)
    stw r29, 0x4540(r5)
    stw r29, 0x4548(r5)
    stw r29, 0x4550(r5)
    stw r29, 0x4558(r5)
    stw r29, 0x4560(r5)
    stw r29, 0x4568(r5)
    stw r29, 0x4570(r5)
    stw r29, 0x4578(r5)
    stw r29, 0x4580(r5)
    stw r29, 0x4588(r5)
    stw r29, 0x4590(r5)
    stw r29, 0x4598(r5)
    stw r29, 0x45a0(r5)
    stw r29, 0x45a8(r5)
    stw r29, 0x45b0(r5)
    stw r29, 0x45b8(r5)
    stw r29, 0x45c0(r5)
    stw r29, 0x45c8(r5)
    stw r29, 0x45d0(r5)
    stw r29, 0x45d8(r5)
    stw r29, 0x45e0(r5)
    stw r29, 0x45e8(r5)
    stw r29, 0x45f0(r5)
    stw r29, 0x45f8(r5)
    stw r29, 0x4600(r5)
    addi r5, r5, 0x100
    bdnz lbl_fn_803BA120_00000CA0
    li r0, 0x2
    li r4, 0x0
    li r3, -0x1
    sth r4, 0x4d08(r31)
    stw r3, 0x4d14(r31)
    mtctr r0
lbl_fn_803BA120_00000D40:
    stw r4, 0x4d18(r31)
    stw r4, 0x4d20(r31)
    stw r4, 0x4d28(r31)
    stw r4, 0x4d30(r31)
    stw r4, 0x4d38(r31)
    stw r4, 0x4d40(r31)
    stw r4, 0x4d48(r31)
    stw r4, 0x4d50(r31)
    stw r4, 0x4d58(r31)
    stw r4, 0x4d60(r31)
    stw r4, 0x4d68(r31)
    stw r4, 0x4d70(r31)
    stw r4, 0x4d78(r31)
    stw r4, 0x4d80(r31)
    stw r4, 0x4d88(r31)
    stw r4, 0x4d90(r31)
    stw r4, 0x4d98(r31)
    stw r4, 0x4da0(r31)
    stw r4, 0x4da8(r31)
    stw r4, 0x4db0(r31)
    stw r4, 0x4db8(r31)
    stw r4, 0x4dc0(r31)
    stw r4, 0x4dc8(r31)
    stw r4, 0x4dd0(r31)
    stw r4, 0x4dd8(r31)
    stw r4, 0x4de0(r31)
    stw r4, 0x4de8(r31)
    stw r4, 0x4df0(r31)
    stw r4, 0x4df8(r31)
    stw r4, 0x4e00(r31)
    stw r4, 0x4e08(r31)
    stw r4, 0x4e10(r31)
    addi r31, r31, 0x100
    bdnz lbl_fn_803BA120_00000D40
lbl_fn_803BA120_00000DC8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BA408(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r4, 0x0
    sth r4, 0x0(r3)
    sth r4, 0x44(r3)
    sth r4, 0x88(r3)
    sth r4, 0xcc(r3)
    sth r4, 0x110(r3)
    sth r4, 0x154(r3)
    sth r4, 0x198(r3)
    sth r4, 0x1dc(r3)
    sth r4, 0x220(r3)
    sth r4, 0x264(r3)
    sth r4, 0x2a8(r3)
    sth r4, 0x2ec(r3)
    sth r4, 0x330(r3)
    sth r4, 0x374(r3)
    sth r4, 0x3b8(r3)
    sth r4, 0x3fc(r3)
    lwz r5, lbl_8087F8A0
    lwz r5, 0x48(r5)
    b lbl_fn_803BA408_00000FEC
lbl_fn_803BA408_00000E38:
    lhzx r0, r3, r4
    add r6, r3, r4
    ori r0, r0, 0x1
    sthx r0, r3, r4
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803BA408_00000E64
    lhz r0, 0x0(r6)
    ori r0, r0, 0x2
    sth r0, 0x0(r6)
lbl_fn_803BA408_00000E64:
    lwz r0, 0x12a4(r5)
    srwi. r0, r0, 31
    beq lbl_fn_803BA408_00000E7C
    lhz r0, 0x0(r6)
    ori r0, r0, 0x4
    sth r0, 0x0(r6)
lbl_fn_803BA408_00000E7C:
    lwz r0, 0x54c(r5)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_803BA408_00000E98
    lhz r0, 0x0(r6)
    ori r0, r0, 0x8
    sth r0, 0x0(r6)
lbl_fn_803BA408_00000E98:
    lwz r0, 0x58(r5)
    add r7, r3, r4
    stw r0, 0x4(r6)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x53c(r5)
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x14(r7), 0, 0
    stfs f2, 0x1c(r7)
    lwz r0, 0xd18(r5)
    stb r0, 0x2(r7)
    lwz r0, 0xd0c(r5)
    stw r0, 0x20(r7)
    lwz r0, 0x674(r5)
    stb r0, 0x3(r7)
    lwz r0, 0x55c(r5)
    cmpwi r0, 0x7
    beq lbl_fn_803BA408_00000EFC
    cmpwi r0, 0x6
    bne lbl_fn_803BA408_00000FE4
    lwz r0, 0x564(r5)
    cmpwi r0, 0x7
    bne lbl_fn_803BA408_00000FE4
lbl_fn_803BA408_00000EFC:
    lhz r0, 0x0(r7)
    ori r0, r0, 0x10
    sth r0, 0x0(r7)
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    beq lbl_fn_803BA408_00000F1C
    lwz r6, 0x10d8(r6)
    b lbl_fn_803BA408_00000F20
lbl_fn_803BA408_00000F1C:
    li r6, 0x0
lbl_fn_803BA408_00000F20:
    cmpwi r6, 0x0
    beq lbl_fn_803BA408_00000FE4
    lwz r0, 0x1074(r5)
    sth r0, 0x24(r7)
    lwz r0, 0x1078(r5)
    sth r0, 0x26(r7)
    lwz r0, 0x1074(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803BA408_00000F60
    cmpwi r0, 0x1
    beq lbl_fn_803BA408_00000F7C
    cmpwi r0, 0x3
    beq lbl_fn_803BA408_00000F98
    cmpwi r0, 0x6
    beq lbl_fn_803BA408_00000FA4
    b lbl_fn_803BA408_00000FE4
lbl_fn_803BA408_00000F60:
    lwz r8, 0x1038(r5)
    lwz r6, 0x9c(r6)
    subi r0, r8, 0x1
    mulli r0, r0, 0x30
    lwzx r0, r6, r0
    stw r0, 0x28(r7)
    b lbl_fn_803BA408_00000FE4
lbl_fn_803BA408_00000F7C:
    lwz r8, 0x103c(r5)
    lwz r6, 0xb0(r6)
    subi r0, r8, 0x1
    slwi r0, r0, 6
    lwzx r0, r6, r0
    stw r0, 0x28(r7)
    b lbl_fn_803BA408_00000FE4
lbl_fn_803BA408_00000F98:
    lwz r0, 0x1050(r5)
    stw r0, 0x28(r7)
    b lbl_fn_803BA408_00000FE4
lbl_fn_803BA408_00000FA4:
    lwz r6, 0x1054(r5)
    cmpwi r6, 0x0
    beq lbl_fn_803BA408_00000FE4
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    beq lbl_fn_803BA408_00000FC8
    lwz r0, 0x48(r5)
    cmpwi r0, 0x3
    bne lbl_fn_803BA408_00000FE4
lbl_fn_803BA408_00000FC8:
    lwz r0, 0x58(r6)
    stw r0, 0x28(r7)
    lfs f0, 0x1058(r5)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x2c(r7)
lbl_fn_803BA408_00000FE4:
    lwz r5, 0x14ac(r5)
    addi r4, r4, 0x44
lbl_fn_803BA408_00000FEC:
    cmpwi r5, 0x0
    bne lbl_fn_803BA408_00000E38
    addi r1, r1, 0x10
    blr
}

asm void fn_803BA620(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    bl _savegpr_25
    lwz r4, lbl_8087F8A0
    mr r28, r3
    cmpwi r4, 0x0
    beq lbl_fn_803BA620_0000143C
    lis r3, lbl_807500A8@ha
    lwz r29, 0x48(r4)
    lfs f29, lbl_80885CA0
    li r31, 0x0
    lfs f30, lbl_80885CA4
    lis r25, 0x4330
    lfd f31, lbl_807500A8@l(r3)
    li r26, 0x4
    li r27, 0x4
    b lbl_fn_803BA620_00001434
lbl_fn_803BA620_00001060:
    mr r4, r28
    li r5, -0x1
    li r6, 0x0
    mtctr r26
lbl_fn_803BA620_00001070:
    lhz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BA620_00001098
    lwz r3, 0x4(r4)
    lwz r0, 0x58(r29)
    cmpw r3, r0
    bne lbl_fn_803BA620_00001098
    mr r5, r6
    b lbl_fn_803BA620_00001128
lbl_fn_803BA620_00001098:
    lhz r0, 0x44(r4)
    addi r6, r6, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BA620_000010C4
    lwz r3, 0x48(r4)
    lwz r0, 0x58(r29)
    cmpw r3, r0
    bne lbl_fn_803BA620_000010C4
    mr r5, r6
    b lbl_fn_803BA620_00001128
lbl_fn_803BA620_000010C4:
    lhz r0, 0x88(r4)
    addi r6, r6, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BA620_000010F0
    lwz r3, 0x8c(r4)
    lwz r0, 0x58(r29)
    cmpw r3, r0
    bne lbl_fn_803BA620_000010F0
    mr r5, r6
    b lbl_fn_803BA620_00001128
lbl_fn_803BA620_000010F0:
    lhz r0, 0xcc(r4)
    addi r6, r6, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BA620_0000111C
    lwz r3, 0xd0(r4)
    lwz r0, 0x58(r29)
    cmpw r3, r0
    bne lbl_fn_803BA620_0000111C
    mr r5, r6
    b lbl_fn_803BA620_00001128
lbl_fn_803BA620_0000111C:
    addi r4, r4, 0x110
    addi r6, r6, 0x1
    bdnz lbl_fn_803BA620_00001070
lbl_fn_803BA620_00001128:
    cmpwi r5, 0x0
    bge lbl_fn_803BA620_00001214
    mr r3, r28
    li r4, 0x0
    mtctr r27
lbl_fn_803BA620_0000113C:
    lhz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BA620_0000116C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803BA620_0000116C
    lwz r0, 0x58(r29)
    cmpwi r0, -0x1
    bne lbl_fn_803BA620_0000116C
    mr r5, r4
    b lbl_fn_803BA620_00001214
lbl_fn_803BA620_0000116C:
    lhz r0, 0x44(r3)
    addi r4, r4, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BA620_000011A0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803BA620_000011A0
    lwz r0, 0x58(r29)
    cmpwi r0, -0x1
    bne lbl_fn_803BA620_000011A0
    mr r5, r4
    b lbl_fn_803BA620_00001214
lbl_fn_803BA620_000011A0:
    lhz r0, 0x88(r3)
    addi r4, r4, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BA620_000011D4
    lwz r0, 0x8c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803BA620_000011D4
    lwz r0, 0x58(r29)
    cmpwi r0, -0x1
    bne lbl_fn_803BA620_000011D4
    mr r5, r4
    b lbl_fn_803BA620_00001214
lbl_fn_803BA620_000011D4:
    lhz r0, 0xcc(r3)
    addi r4, r4, 0x1
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803BA620_00001208
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803BA620_00001208
    lwz r0, 0x58(r29)
    cmpwi r0, -0x1
    bne lbl_fn_803BA620_00001208
    mr r5, r4
    b lbl_fn_803BA620_00001214
lbl_fn_803BA620_00001208:
    addi r3, r3, 0x110
    addi r4, r4, 0x1
    bdnz lbl_fn_803BA620_0000113C
lbl_fn_803BA620_00001214:
    cmpwi r5, 0x0
    blt lbl_fn_803BA620_00001430
    mulli r0, r5, 0x44
    add r30, r28, r0
    lfs f2, 0x10(r30)
    psq_l f1, 0x8(r30), 0, 0
    psq_st f1, 0x528(r29), 0, 0
    stfs f2, 0x530(r29)
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    lbz r0, 0x2(r30)
    stw r0, 0xd18(r29)
    lwz r0, 0x20(r30)
    stw r0, 0xd0c(r29)
    stw r31, 0x58c(r29)
    lhz r0, 0x0(r30)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_803BA620_000012E0
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    stfs f29, 0x8(r1)
    addi r3, r1, 0x20
    li r4, 0x79
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x10(r1)
    mr r3, r29
    lfs f3, 0xc(r1)
    addi r4, r1, 0x14
    lfs f0, 0x8(r1)
    fneg f4, f4
    fneg f3, f3
    li r5, -0x1
    fneg f0, f0
    stfs f4, 0x1c(r1)
    li r6, 0x0
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    bl fn_8015E7A0
lbl_fn_803BA620_000012E0:
    lbz r0, 0x3(r30)
    extsb. r8, r0
    blt lbl_fn_803BA620_00001318
    lwz r7, 0x50(r29)
    mr r3, r29
    li r5, 0x0
    li r6, 0x0
    subi r4, r7, 0x1
    subfic r0, r7, 0x1
    nor r0, r4, r0
    srawi r0, r0, 31
    andc r4, r8, r0
    bl fn_8014DEE4
    b lbl_fn_803BA620_00001324
lbl_fn_803BA620_00001318:
    mr r3, r29
    li r4, 0x0
    bl fn_8014EEC4
lbl_fn_803BA620_00001324:
    lhz r0, 0x0(r30)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_803BA620_0000136C
    mr r3, r29
    bl fn_80145334
    lwz r3, lbl_8087F430
    mr r5, r29
    addi r4, r1, 0x50
    li r6, 0x1
    li r7, 0x0
    bl fn_8036DAF4
    cmpwi r3, 0x0
    beq lbl_fn_803BA620_0000136C
    mr r3, r29
    addi r4, r1, 0x50
    li r5, 0x0
    bl fn_80153698
lbl_fn_803BA620_0000136C:
    lhz r0, 0x0(r30)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_803BA620_00001388
    lwz r0, 0x54c(r29)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r29)
lbl_fn_803BA620_00001388:
    lhz r0, 0x0(r30)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x10
    bne lbl_fn_803BA620_00001430
    lhz r0, 0x24(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803BA620_000013C0
    cmpwi r0, 0x1
    beq lbl_fn_803BA620_000013D4
    cmpwi r0, 0x3
    beq lbl_fn_803BA620_000013E8
    cmpwi r0, 0x6
    beq lbl_fn_803BA620_000013FC
    b lbl_fn_803BA620_00001430
lbl_fn_803BA620_000013C0:
    lwz r4, 0x28(r30)
    mr r3, r29
    lhz r5, 0x26(r30)
    bl fn_8016F824
    b lbl_fn_803BA620_00001430
lbl_fn_803BA620_000013D4:
    lwz r4, 0x28(r30)
    mr r3, r29
    lhz r5, 0x26(r30)
    bl fn_8016FDCC
    b lbl_fn_803BA620_00001430
lbl_fn_803BA620_000013E8:
    lwz r4, 0x28(r30)
    mr r3, r29
    lhz r5, 0x26(r30)
    bl fn_8017039C
    b lbl_fn_803BA620_00001430
lbl_fn_803BA620_000013FC:
    lwz r3, lbl_8087F8A0
    lwz r4, 0x28(r30)
    bl fn_8011F91C
    lwz r0, 0x2c(r30)
    mr r4, r3
    stw r25, 0x90(r1)
    mr r3, r29
    xoris r0, r0, 0x8000
    lhz r5, 0x26(r30)
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f1, f0, f31
    bl fn_80171420
lbl_fn_803BA620_00001430:
    lwz r29, 0x14ac(r29)
lbl_fn_803BA620_00001434:
    cmpwi r29, 0x0
    bne lbl_fn_803BA620_00001060
lbl_fn_803BA620_0000143C:
    addi r11, r1, 0xc0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    bl _restgpr_25
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_803BAA90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_8012AE50@ha
    lis r5, fn_8012AFE8@ha
    stw r0, 0x14(r1)
    li r6, 0x240
    addi r4, r4, fn_8012AE50@l
    addi r5, r5, fn_8012AFE8@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r7, 0x7
    bl fn_806958E0
    li r0, 0x0
    stw r0, 0xfc0(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BAAE0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r27, r3
    li r28, 0x0
    mr r29, r27
    li r26, 0x0
    li r30, 0x18
    li r31, 0xf
    li r25, 0x1
lbl_fn_803BAAE0_000014EC:
    lwz r3, lbl_8087F8A0
    mr r4, r28
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_803BAAE0_0000160C
    lfs f0, 0x7d8(r3)
    addi r6, r29, 0x24
    stfs f0, 0x4(r29)
    addi r5, r3, 0x7f8
    lfs f0, 0x7dc(r3)
    stfs f0, 0x8(r29)
    lwz r0, 0x7e0(r3)
    stw r0, 0xc(r29)
    lwz r0, 0x7e4(r3)
    stw r0, 0x10(r29)
    lwz r0, 0x7e8(r3)
    stw r0, 0x14(r29)
    lwz r0, 0x7ec(r3)
    stw r0, 0x18(r29)
    lwz r0, 0x7f0(r3)
    stw r0, 0x1c(r29)
    lfs f0, 0x7f4(r3)
    stfs f0, 0x20(r29)
    lfs f0, 0x7f8(r3)
    stfs f0, 0x24(r29)
    mtctr r30
lbl_fn_803BAAE0_00001554:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BAAE0_00001554
    addi r6, r29, 0xe4
    addi r5, r3, 0x8b8
    mtctr r30
lbl_fn_803BAAE0_00001574:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BAAE0_00001574
    addi r6, r29, 0x1a4
    addi r5, r3, 0x978
    mtctr r31
lbl_fn_803BAAE0_00001594:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BAAE0_00001594
    lwz r4, 0x4(r5)
    slw r0, r25, r28
    stw r4, 0x4(r6)
    lwz r4, 0x9f8(r3)
    stw r4, 0x224(r29)
    lfs f0, 0x9fc(r3)
    stfs f0, 0x228(r29)
    lwz r4, 0xa00(r3)
    stw r4, 0x22c(r29)
    lbz r4, 0xa04(r3)
    stb r4, 0x230(r29)
    lbz r4, 0xa05(r3)
    stb r4, 0x231(r29)
    lwz r4, 0xa0a(r3)
    lwz r5, 0xa06(r3)
    stw r5, 0x232(r29)
    stw r4, 0x236(r29)
    lwz r4, 0xa0e(r3)
    stw r4, 0x23a(r29)
    lhz r3, 0xa12(r3)
    sth r3, 0x23e(r29)
    lwz r3, 0xfc0(r27)
    or r0, r3, r0
    stw r0, 0xfc0(r27)
    b lbl_fn_803BAAE0_0000171C
lbl_fn_803BAAE0_0000160C:
    lwz r0, lbl_8087F4F0
    addi r6, r29, 0x24
    add r3, r0, r26
    lfs f0, 0x64f0(r3)
    addi r5, r3, 0x6510
    stfs f0, 0x4(r29)
    lfs f0, 0x64f4(r3)
    stfs f0, 0x8(r29)
    lwz r0, 0x64f8(r3)
    stw r0, 0xc(r29)
    lwz r0, 0x64fc(r3)
    stw r0, 0x10(r29)
    lwz r0, 0x6500(r3)
    stw r0, 0x14(r29)
    lwz r0, 0x6504(r3)
    stw r0, 0x18(r29)
    lwz r0, 0x6508(r3)
    stw r0, 0x1c(r29)
    lfs f0, 0x650c(r3)
    stfs f0, 0x20(r29)
    lfs f0, 0x6510(r3)
    stfs f0, 0x24(r29)
    mtctr r30
lbl_fn_803BAAE0_00001668:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BAAE0_00001668
    addi r6, r29, 0xe4
    addi r5, r3, 0x65d0
    mtctr r30
lbl_fn_803BAAE0_00001688:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BAAE0_00001688
    addi r6, r29, 0x1a4
    addi r5, r3, 0x6690
    mtctr r31
lbl_fn_803BAAE0_000016A8:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_803BAAE0_000016A8
    lwz r4, 0x4(r5)
    slw r0, r25, r28
    stw r4, 0x4(r6)
    lwz r4, 0x6710(r3)
    stw r4, 0x224(r29)
    lfs f0, 0x6714(r3)
    stfs f0, 0x228(r29)
    lwz r4, 0x6718(r3)
    stw r4, 0x22c(r29)
    lbz r4, 0x671c(r3)
    stb r4, 0x230(r29)
    lbz r4, 0x671d(r3)
    stb r4, 0x231(r29)
    lwz r4, 0x6722(r3)
    lwz r5, 0x671e(r3)
    stw r5, 0x232(r29)
    stw r4, 0x236(r29)
    lwz r4, 0x6726(r3)
    stw r4, 0x23a(r29)
    lhz r3, 0x672a(r3)
    sth r3, 0x23e(r29)
    lwz r3, 0xfc0(r27)
    or r0, r3, r0
    stw r0, 0xfc0(r27)
lbl_fn_803BAAE0_0000171C:
    addi r28, r28, 0x1
    addi r26, r26, 0x43c
    cmplwi r28, 0x7
    addi r29, r29, 0x240
    blt lbl_fn_803BAAE0_000014EC
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803BAD6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_803BAD6C_00001814
    lwz r30, 0x48(r4)
    li r31, 0x1
    b lbl_fn_803BAD6C_0000180C
lbl_fn_803BAD6C_0000177C:
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x9
    beq lbl_fn_803BAD6C_0000179C
    cmpwi r3, 0xa
    beq lbl_fn_803BAD6C_0000179C
    cmpwi r3, 0xc
    bne lbl_fn_803BAD6C_000017A0
lbl_fn_803BAD6C_0000179C:
    li r3, 0x1
lbl_fn_803BAD6C_000017A0:
    cmpwi r3, 0x0
    blt lbl_fn_803BAD6C_00001808
    cmpwi r3, 0x7
    bge lbl_fn_803BAD6C_00001808
    lwz r0, 0xfc0(r29)
    slw r4, r31, r3
    and r0, r4, r0
    cmplw r4, r0
    bne lbl_fn_803BAD6C_00001808
    mulli r0, r3, 0x240
    addi r3, r30, 0x7d4
    li r5, 0x240
    add r4, r29, r0
    bl memcpy
    stw r30, 0xac4(r30)
    addi r3, r30, 0x7d4
    li r4, 0x0
    bl fn_80133B30
    addi r3, r30, 0x7d4
    bl fn_8012B3E8
    addi r3, r30, 0x7d4
    bl fn_8012B988
    addi r3, r30, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x954(r30)
    stw r0, 0x9f8(r30)
lbl_fn_803BAD6C_00001808:
    lwz r30, 0x14ac(r30)
lbl_fn_803BAD6C_0000180C:
    cmpwi r30, 0x0
    bne lbl_fn_803BAD6C_0000177C
lbl_fn_803BAD6C_00001814:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BAE54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r0, 0x8(r4)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_803BAE54_000018B4
    mr r3, r5
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_803BAE54_000018B4
    cmpwi r3, 0x7
    bge lbl_fn_803BAE54_000018B4
    mulli r5, r3, 0x240
    li r0, 0x1
    lhz r4, 0x8(r30)
    li r3, 0x1
    slw r6, r0, r31
    add r7, r29, r5
    lbz r5, 0x230(r7)
    lbz r0, 0x231(r7)
    and r5, r6, r5
    subf r5, r6, r5
    cntlzw r5, r5
    rlwimi r4, r5, 9, 17, 17
    rlwimi r4, r0, 6, 18, 25
    sth r4, 0x8(r30)
    b lbl_fn_803BAE54_000018B8
lbl_fn_803BAE54_000018B4:
    li r3, 0x0
lbl_fn_803BAE54_000018B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BAEF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x2
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mtctr r0
lbl_fn_803BAEF8_000018F8:
    sth r4, 0x0(r5)
    sth r4, 0x2c(r5)
    sth r4, 0x58(r5)
    sth r4, 0x84(r5)
    sth r4, 0xb0(r5)
    sth r4, 0xdc(r5)
    sth r4, 0x108(r5)
    sth r4, 0x134(r5)
    sth r4, 0x160(r5)
    sth r4, 0x18c(r5)
    sth r4, 0x1b8(r5)
    sth r4, 0x1e4(r5)
    sth r4, 0x210(r5)
    sth r4, 0x23c(r5)
    sth r4, 0x268(r5)
    sth r4, 0x294(r5)
    sth r4, 0x2c0(r5)
    sth r4, 0x2ec(r5)
    sth r4, 0x318(r5)
    sth r4, 0x344(r5)
    sth r4, 0x370(r5)
    sth r4, 0x39c(r5)
    sth r4, 0x3c8(r5)
    sth r4, 0x3f4(r5)
    sth r4, 0x420(r5)
    sth r4, 0x44c(r5)
    sth r4, 0x478(r5)
    sth r4, 0x4a4(r5)
    sth r4, 0x4d0(r5)
    sth r4, 0x4fc(r5)
    sth r4, 0x528(r5)
    sth r4, 0x554(r5)
    addi r5, r5, 0x580
    bdnz lbl_fn_803BAEF8_000018F8
    lwz r4, lbl_8087F408
    mr r31, r3
    lwz r30, 0x48(r4)
    b lbl_fn_803BAEF8_00001A9C
lbl_fn_803BAEF8_00001990:
    lhz r0, 0x0(r31)
    ori r0, r0, 0x1
    sth r0, 0x0(r31)
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803BAEF8_000019B8
    lhz r0, 0x0(r31)
    ori r0, r0, 0x2
    sth r0, 0x0(r31)
lbl_fn_803BAEF8_000019B8:
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_803BAEF8_000019D0
    lhz r0, 0x0(r31)
    ori r0, r0, 0x4
    sth r0, 0x0(r31)
lbl_fn_803BAEF8_000019D0:
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_803BAEF8_000019EC
    lhz r0, 0x0(r31)
    ori r0, r0, 0x8
    sth r0, 0x0(r31)
lbl_fn_803BAEF8_000019EC:
    lwz r0, 0x137c(r30)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803BAEF8_00001A24
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 11
    bne lbl_fn_803BAEF8_00001A18
    addi r3, r30, 0x1b4
    bl fn_80089B5C
    cmpwi r3, 0x0
    beq lbl_fn_803BAEF8_00001A24
lbl_fn_803BAEF8_00001A18:
    lhz r0, 0x0(r31)
    ori r0, r0, 0x10
    sth r0, 0x0(r31)
lbl_fn_803BAEF8_00001A24:
    lwz r0, 0x137c(r30)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_803BAEF8_00001A5C
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 9
    bne lbl_fn_803BAEF8_00001A50
    addi r3, r30, 0x1b4
    bl fn_80089B5C
    cmpwi r3, 0x0
    bne lbl_fn_803BAEF8_00001A5C
lbl_fn_803BAEF8_00001A50:
    lhz r0, 0x0(r31)
    ori r0, r0, 0x20
    sth r0, 0x0(r31)
lbl_fn_803BAEF8_00001A5C:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_803BAEF8_00001A74
    lhz r0, 0x0(r31)
    ori r0, r0, 0x40
    sth r0, 0x0(r31)
lbl_fn_803BAEF8_00001A74:
    lwz r0, 0x58(r30)
    stw r0, 0x4(r31)
    lwz r0, 0xd18(r30)
    stb r0, 0x2(r31)
    lwz r0, 0xd0c(r30)
    stw r0, 0x8(r31)
    lwz r0, 0x674(r30)
    stb r0, 0x3(r31)
    addi r31, r31, 0x2c
    lwz r30, 0x14ac(r30)
lbl_fn_803BAEF8_00001A9C:
    cmpwi r30, 0x0
    bne lbl_fn_803BAEF8_00001990
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
