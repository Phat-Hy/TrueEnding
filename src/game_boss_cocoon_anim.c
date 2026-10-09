#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_8003EA3C(void);
extern void fn_80108C10(void);
extern void fn_801092C8(void);
extern void fn_80206B68(void);
extern void fn_80206B70(void);
extern void fn_80206B9C(void);
extern void fn_80206BE4(void);
extern void fn_8020ED84(void);
extern void fn_8020EE58(void);
extern void fn_8020EE60(void);
extern void fn_8020EF04(void);
extern void fn_8020EF80(void);
extern void fn_802114D8(void);
extern void fn_802114E0(void);
extern void fn_80213E60(void);
extern void fn_80219E6C(void);
extern void fn_8021E444(void);
extern void fn_80373148(void);
extern void fn_803E5E64(void);
extern void fn_8040B394(void);
extern void fn_804439FC(void);
extern void fn_80444CF8(void);
extern void fn_80445F44(void);
extern void fn_8044D678(void);
extern void fn_80680CF8(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);

/* External data declarations */
extern u8 lbl_80754850[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F4F8;
extern u32 lbl_8087F4FC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886B3C;
extern u32 lbl_80886B40;

/* Function declarations */
void fn_80450590(void);
void fn_80450778(void);
void fn_80450A5C(void);
void fn_80450A78(void);
void fn_80450B28(void);
void fn_80450B44(void);
void fn_80450B60(void);
void fn_80450B84(void);
void fn_804515A8(void);

asm void fn_80450590(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    li r0, 0x1
    stw r31, 0x19c(r1)
    mr r31, r3
    stw r30, 0x198(r1)
    stw r29, 0x194(r1)
    stw r28, 0x190(r1)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x1
    beq lbl_fn_80450590_0000003C
    cmpwi r4, 0x2
    beq lbl_fn_80450590_0000003C
    li r0, 0x0
lbl_fn_80450590_0000003C:
    cmpwi r0, 0x0
    bne lbl_fn_80450590_000001C8
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80450590_000001C8
    cmpwi r4, 0x3
    blt lbl_fn_80450590_000001C8
    addi r3, r1, 0x108
    li r4, 0x0
    li r5, 0x80
    bl memset
    lwz r3, 0x4(r31)
    cmpwi r3, 0x7
    beq lbl_fn_80450590_00000168
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_80450590_00000104
    addi r30, r31, 0xac
    li r28, 0x2
lbl_fn_80450590_00000088:
    subi r0, r28, 0x1
    slwi r0, r0, 6
    add r3, r31, r0
    addi r29, r3, 0x2c
    cmplw r29, r30
    beq lbl_fn_80450590_000000BC
    mr r3, r29
    bl fn_80686A48
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80450590_000000BC:
    subic. r28, r28, 0x1
    subi r30, r30, 0x40
    bgt lbl_fn_80450590_00000088
    mr r3, r31
    addi r4, r1, 0x108
    bl fn_804515A8
    addi r30, r1, 0x108
    addi r0, r31, 0x2c
    cmplw r30, r0
    beq lbl_fn_80450590_000001C8
    mr r3, r30
    bl fn_80686A48
    mr r5, r3
    mr r4, r30
    addi r3, r31, 0x2c
    addi r5, r5, 0x1
    bl fn_806846C4
    b lbl_fn_80450590_000001C8
lbl_fn_80450590_00000104:
    addi r3, r1, 0x88
    li r4, 0x0
    li r5, 0x80
    bl memset
    lwz r4, 0x20(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80450590_00000138
    lwz r0, 0xec(r31)
    addi r3, r1, 0x88
    lwz r4, 0x4(r4)
    lwz r5, 0x24(r31)
    extrwi r6, r0, 1, 1
    bl fn_80444CF8
lbl_fn_80450590_00000138:
    addi r30, r1, 0x88
    addi r0, r31, 0x6c
    cmplw r30, r0
    beq lbl_fn_80450590_000001C8
    mr r3, r30
    bl fn_80686A48
    mr r5, r3
    mr r4, r30
    addi r3, r31, 0x6c
    addi r5, r5, 0x1
    bl fn_806846C4
    b lbl_fn_80450590_000001C8
lbl_fn_80450590_00000168:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x80
    bl memset
    lwz r4, 0x20(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80450590_0000019C
    lwz r0, 0xec(r31)
    addi r3, r1, 0x8
    lwz r4, 0x4(r4)
    lwz r5, 0x24(r31)
    extrwi r6, r0, 1, 1
    bl fn_80444CF8
lbl_fn_80450590_0000019C:
    addi r30, r1, 0x8
    addi r0, r31, 0x2c
    cmplw r30, r0
    beq lbl_fn_80450590_000001C8
    mr r3, r30
    bl fn_80686A48
    mr r5, r3
    mr r4, r30
    addi r3, r31, 0x2c
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_80450590_000001C8:
    lwz r0, 0x1a4(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    lwz r28, 0x190(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80450778(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r5, lbl_8087F4F0
    cmpwi r5, 0x0
    beq lbl_fn_80450778_000004B0
    lwz r3, 0x20(r3)
    cmpwi cr1, r3, 0x0
    bne cr1, lbl_fn_80450778_00000220
    b lbl_fn_80450778_000004B0
lbl_fn_80450778_00000220:
    lwz r4, 0x4(r3)
    cmpwi r4, 0x2714
    beq lbl_fn_80450778_00000234
    cmpwi r4, 0x2719
    bne lbl_fn_80450778_00000264
lbl_fn_80450778_00000234:
    lwz r4, 0x24(r31)
    mr r3, r5
    bl fn_8044D678
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80450778_0000047C
    lwz r6, 0x24(r31)
    li r4, 0x3
    li r5, 0x0
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_80450778_0000047C
lbl_fn_80450778_00000264:
    beq cr1, lbl_fn_80450778_00000274
    lbz r0, 0xc0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80450778_00000284
lbl_fn_80450778_00000274:
    lwz r0, 0xac(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x100
    bne lbl_fn_80450778_000003E4
lbl_fn_80450778_00000284:
    lwz r3, 0xc4(r3)
    lwz r4, lbl_8087F8A0
    cmpwi r3, 0x0
    lwz r30, 0x48(r4)
    ble lbl_fn_80450778_000002A0
    bl fn_80219E6C
    b lbl_fn_80450778_000002A4
lbl_fn_80450778_000002A0:
    li r3, 0x0
lbl_fn_80450778_000002A4:
    cmpwi r30, 0x0
    beq lbl_fn_80450778_0000047C
    cmpwi r3, 0x0
    beq lbl_fn_80450778_0000047C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80450778_00000344
    lwz r7, 0x38(r30)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80450778_000002EC
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80450778_000002EC
    li r6, 0x1
lbl_fn_80450778_000002EC:
    cmpwi r6, 0x0
    beq lbl_fn_80450778_00000308
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80450778_00000308
    li r4, 0x1
lbl_fn_80450778_00000308:
    cmpwi r4, 0x0
    beq lbl_fn_80450778_0000033C
    lwz r0, 0x55c(r30)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80450778_00000330
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_80450778_00000330
    li r4, 0x1
lbl_fn_80450778_00000330:
    cmpwi r4, 0x0
    bne lbl_fn_80450778_0000033C
    li r5, 0x1
lbl_fn_80450778_0000033C:
    cmpwi r5, 0x0
    beq lbl_fn_80450778_0000047C
lbl_fn_80450778_00000344:
    lwz r0, 0x34(r1)
    li r12, 0x0
    li r11, -0x1
    lis r8, lbl_807C6B90@ha
    clrlwi r0, r0, 4
    stw r12, 0x18(r1)
    mr r4, r3
    mr r5, r30
    stw r12, 0x1c(r1)
    mr r6, r30
    addi r3, r1, 0x18
    addi r8, r8, lbl_807C6B90@l
    stw r12, 0x20(r1)
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    stw r12, 0x24(r1)
    stw r12, 0x28(r1)
    stw r11, 0x2c(r1)
    stw r0, 0x34(r1)
    stw r11, 0x30(r1)
    bl fn_8003EA3C
    lwz r29, lbl_8087F048
    cmpwi r29, 0x0
    beq lbl_fn_80450778_0000047C
    lwz r12, 0x0(r30)
    mr r4, r30
    addi r3, r1, 0x8
    lwz r12, 0xac(r12)
    mtctr r12
    bctrl
    mr r3, r29
    addi r4, r1, 0x18
    addi r5, r1, 0x8
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    bl fn_80108C10
    b lbl_fn_80450778_0000047C
lbl_fn_80450778_000003E4:
    lwz r0, 0xec(r31)
    mr r3, r5
    lwz r5, 0x24(r31)
    li r7, 0x0
    extrwi r6, r0, 1, 1
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80450778_0000047C
    lwz r3, 0x20(r31)
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80450778_00000454
    lwz r0, 0xec(r31)
    extrwi. r0, r0, 1, 1
    bne lbl_fn_80450778_00000454
    lwz r6, 0x20(r31)
    li r4, 0x2
    lwz r3, lbl_8087F048
    li r5, 0x0
    lwz r6, 0x4(r6)
    lwz r7, 0x24(r31)
    bl fn_801092C8
    b lbl_fn_80450778_0000047C
lbl_fn_80450778_00000454:
    lwz r5, 0x20(r31)
    lha r0, 0xbc(r5)
    cmpwi r0, 0x6
    beq lbl_fn_80450778_0000047C
    lwz r6, 0x4(r5)
    li r4, 0x1
    lwz r3, lbl_8087F048
    li r5, 0x0
    lwz r7, 0x24(r31)
    bl fn_801092C8
lbl_fn_80450778_0000047C:
    lwz r4, 0x20(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80450778_000004B0
    lwz r0, 0xb4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80450778_000004B0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_80450778_000004B0
    lwz r4, 0x4(r4)
    li r6, 0x1
    lwz r5, 0x24(r31)
    bl fn_803E5E64
lbl_fn_80450778_000004B0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80450A5C(void)
{
    nofralloc
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80450A5C_000004E0
    lwz r3, 0x4(r3)
    blr
lbl_fn_80450A5C_000004E0:
    li r3, 0x0
    blr
}

asm void fn_80450A78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r4, 0x20(r3)
    stw r0, 0x14(r1)
    cmpwi cr1, r4, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    bne cr1, lbl_fn_80450A78_00000510
    li r3, 0x0
    b lbl_fn_80450A78_00000584
lbl_fn_80450A78_00000510:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x12d
    bne lbl_fn_80450A78_00000524
    li r3, 0x1
    b lbl_fn_80450A78_00000584
lbl_fn_80450A78_00000524:
    bne cr1, lbl_fn_80450A78_00000530
    li r3, 0x0
    b lbl_fn_80450A78_00000584
lbl_fn_80450A78_00000530:
    lbz r0, 0xc2(r4)
    extsb. r0, r0
    beq lbl_fn_80450A78_00000544
    li r3, 0x1
    b lbl_fn_80450A78_00000584
lbl_fn_80450A78_00000544:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80450A78_00000580
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80450A78_00000580
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r6, r3
    lwz r3, 0x20(r31)
    lwz r4, 0x48(r6)
    lwz r5, 0x4c(r6)
    lwz r6, 0x50(r6)
    bl fn_80213E60
    b lbl_fn_80450A78_00000584
lbl_fn_80450A78_00000580:
    li r3, 0x0
lbl_fn_80450A78_00000584:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80450B28(void)
{
    nofralloc
    lwz r3, lbl_8087F4F8
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_80450B44(void)
{
    nofralloc
    lwz r3, lbl_8087F4F8
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    blr
}

asm void fn_80450B60(void)
{
    nofralloc
    subi r0, r3, 0x2711
    cmplwi r0, 0x7
    ble lbl_fn_80450B60_000005E4
    cmpwi r3, 0x271a
    bne lbl_fn_80450B60_000005EC
lbl_fn_80450B60_000005E4:
    li r3, 0x1
    blr
lbl_fn_80450B60_000005EC:
    li r3, 0x0
    blr
}

asm void fn_80450B84(void)
{
    nofralloc
    stwu r1, -0x36b0(r1)
    mflr r0
    stw r0, 0x36b4(r1)
    li r0, 0x36a8
    addi r11, r1, 0x3680
    stfd f31, 0x36a0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x3698
    stfd f30, 0x3690(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x3688
    stfd f29, 0x3680(r1)
    psq_stx f29, r1, r0, 0, 0
    bl _savegpr_14
    lwz r0, lbl_8087F610
    mr r14, r3
    mr r15, r4
    mr r16, r5
    cmpwi r0, 0x0
    beq lbl_fn_80450B84_0000064C
    li r3, 0x0
    b lbl_fn_80450B84_00000FDC
lbl_fn_80450B84_0000064C:
    bl fn_8021E444
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_80450B84_00000FD8
    addi r7, r1, 0x2420
    addi r0, r1, 0x3614
    cmplw r7, r0
    li r4, 0x0
    li r3, 0x1
    li r0, 0xa
    stw r4, 0x2410(r1)
    stw r4, 0x2414(r1)
    sth r3, 0x2418(r1)
    sth r0, 0x241a(r1)
    stw r4, 0x241c(r1)
    bge lbl_fn_80450B84_000007A8
    addi r6, r1, 0x35b4
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_80450B84_000006A0
    li r3, 0x1
lbl_fn_80450B84_000006A0:
    cmpwi r3, 0x0
    beq lbl_fn_80450B84_000006AC
    li r0, 0x1
lbl_fn_80450B84_000006AC:
    cmpwi r0, 0x0
    beq lbl_fn_80450B84_00000764
    addi r3, r6, 0x5f
    li r0, 0x60
    subf r3, r7, r3
    li r5, 0x0
    divwu r3, r3, r0
    li r4, 0x1
    li r0, 0xa
    mtctr r3
    cmplw r7, r6
    bge lbl_fn_80450B84_00000764
lbl_fn_80450B84_000006DC:
    stw r5, 0x0(r7)
    sth r4, 0x4(r7)
    sth r0, 0x6(r7)
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    sth r4, 0x10(r7)
    sth r0, 0x12(r7)
    stw r5, 0x14(r7)
    stw r5, 0x18(r7)
    sth r4, 0x1c(r7)
    sth r0, 0x1e(r7)
    stw r5, 0x20(r7)
    stw r5, 0x24(r7)
    sth r4, 0x28(r7)
    sth r0, 0x2a(r7)
    stw r5, 0x2c(r7)
    stw r5, 0x30(r7)
    sth r4, 0x34(r7)
    sth r0, 0x36(r7)
    stw r5, 0x38(r7)
    stw r5, 0x3c(r7)
    sth r4, 0x40(r7)
    sth r0, 0x42(r7)
    stw r5, 0x44(r7)
    stw r5, 0x48(r7)
    sth r4, 0x4c(r7)
    sth r0, 0x4e(r7)
    stw r5, 0x50(r7)
    stw r5, 0x54(r7)
    sth r4, 0x58(r7)
    sth r0, 0x5a(r7)
    stw r5, 0x5c(r7)
    addi r7, r7, 0x60
    bdnz lbl_fn_80450B84_000006DC
lbl_fn_80450B84_00000764:
    addi r4, r1, 0x3614
    li r0, 0xc
    addi r3, r4, 0xb
    li r6, 0x0
    subf r3, r7, r3
    li r5, 0x1
    divwu r3, r3, r0
    li r0, 0xa
    mtctr r3
    cmplw r7, r4
    bge lbl_fn_80450B84_000007A8
lbl_fn_80450B84_00000790:
    stw r6, 0x0(r7)
    sth r5, 0x4(r7)
    sth r0, 0x6(r7)
    stw r6, 0x8(r7)
    addi r7, r7, 0xc
    bdnz lbl_fn_80450B84_00000790
lbl_fn_80450B84_000007A8:
    lwz r17, lbl_8087F4FC
    cmpwi r17, 0x0
    beq lbl_fn_80450B84_00000DCC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80450B84_000008B8
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80450B84_000008B8
    lwz r3, lbl_8087F430
    bl fn_80373148
    addis r5, r17, 0x1
    lwz r6, 0x48(r3)
    lwz r0, -0x2724(r5)
    cmpw r0, r6
    bne lbl_fn_80450B84_00000808
    lwz r4, -0x2720(r5)
    lwz r0, 0x4c(r3)
    cmpw r4, r0
    bne lbl_fn_80450B84_00000808
    lwz r4, -0x271c(r5)
    lwz r0, 0x50(r3)
    cmpw r4, r0
    beq lbl_fn_80450B84_000008B8
lbl_fn_80450B84_00000808:
    addis r4, r17, 0x1
    li r5, 0x0
    stw r6, -0x2724(r4)
    addi r6, r17, 0x6c48
    lwz r0, 0x4c(r3)
    stw r0, -0x2720(r4)
    lwz r0, 0x50(r3)
    stw r0, -0x271c(r4)
    stw r5, 0x48(r17)
    stw r5, 0x4c(r17)
    stw r5, 0x50(r17)
    stw r5, 0x1254(r17)
    stw r5, 0x1258(r17)
    stw r5, 0x125c(r17)
    stw r5, 0x2460(r17)
    stw r5, 0x2464(r17)
    stw r5, 0x2468(r17)
    stw r5, 0x366c(r17)
    stw r5, 0x3670(r17)
    stw r5, 0x3674(r17)
    stw r5, 0x4878(r17)
    stw r5, 0x487c(r17)
    stw r5, 0x4880(r17)
    stw r5, 0x5a84(r17)
    stw r5, 0x5a88(r17)
    stw r5, 0x5a8c(r17)
    stw r5, 0x6c90(r17)
    stw r5, 0x6c94(r17)
    stw r5, 0x6c98(r17)
    stw r5, 0x7e9c(r17)
    stw r5, 0x7ea0(r17)
    stw r5, 0x7ea4(r17)
    stw r5, 0x2460(r6)
    stw r5, 0x2464(r6)
    stw r5, 0x2468(r6)
    stw r5, 0x366c(r6)
    stw r5, 0x3670(r6)
    stw r5, 0x3674(r6)
    stw r5, 0x4878(r6)
    stw r5, 0x487c(r6)
    stw r5, 0x4880(r6)
    stw r5, 0x5a84(r6)
    stw r5, 0x5a88(r6)
    stw r5, 0x5a8c(r6)
lbl_fn_80450B84_000008B8:
    cmpwi r15, 0x0
    li r18, -0x1
    ble lbl_fn_80450B84_000008D4
    mr r3, r15
    bl fn_8040B394
    mr r25, r3
    b lbl_fn_80450B84_000008D8
lbl_fn_80450B84_000008D4:
    li r25, -0x1
lbl_fn_80450B84_000008D8:
    li r0, 0x2
    addi r4, r17, 0x48
    li r3, 0x0
    mtctr r0
lbl_fn_80450B84_000008E8:
    lwz r0, 0x0(r4)
    cmpw r0, r14
    bne lbl_fn_80450B84_00000908
    lwz r0, 0x4(r4)
    cmpw r0, r25
    bne lbl_fn_80450B84_00000908
    mr r18, r3
    b lbl_fn_80450B84_000009C8
lbl_fn_80450B84_00000908:
    lwz r0, 0x120c(r4)
    addi r3, r3, 0x1
    cmpw r0, r14
    bne lbl_fn_80450B84_0000092C
    lwz r0, 0x1210(r4)
    cmpw r0, r25
    bne lbl_fn_80450B84_0000092C
    mr r18, r3
    b lbl_fn_80450B84_000009C8
lbl_fn_80450B84_0000092C:
    lwz r0, 0x2418(r4)
    addi r3, r3, 0x1
    cmpw r0, r14
    bne lbl_fn_80450B84_00000950
    lwz r0, 0x241c(r4)
    cmpw r0, r25
    bne lbl_fn_80450B84_00000950
    mr r18, r3
    b lbl_fn_80450B84_000009C8
lbl_fn_80450B84_00000950:
    lwz r0, 0x3624(r4)
    addi r3, r3, 0x1
    cmpw r0, r14
    bne lbl_fn_80450B84_00000974
    lwz r0, 0x3628(r4)
    cmpw r0, r25
    bne lbl_fn_80450B84_00000974
    mr r18, r3
    b lbl_fn_80450B84_000009C8
lbl_fn_80450B84_00000974:
    lwz r0, 0x4830(r4)
    addi r3, r3, 0x1
    cmpw r0, r14
    bne lbl_fn_80450B84_00000998
    lwz r0, 0x4834(r4)
    cmpw r0, r25
    bne lbl_fn_80450B84_00000998
    mr r18, r3
    b lbl_fn_80450B84_000009C8
lbl_fn_80450B84_00000998:
    lwz r0, 0x5a3c(r4)
    addi r3, r3, 0x1
    cmpw r0, r14
    bne lbl_fn_80450B84_000009BC
    lwz r0, 0x5a40(r4)
    cmpw r0, r25
    bne lbl_fn_80450B84_000009BC
    mr r18, r3
    b lbl_fn_80450B84_000009C8
lbl_fn_80450B84_000009BC:
    addi r4, r4, 0x6c48
    addi r3, r3, 0x1
    bdnz lbl_fn_80450B84_000008E8
lbl_fn_80450B84_000009C8:
    cmpwi r18, 0x0
    bge lbl_fn_80450B84_00000D44
    addis r6, r17, 0x1
    lis r3, 0x2aab
    lwz r18, -0x2728(r6)
    subi r0, r3, 0x5555
    mr r3, r14
    addi r5, r18, 0x1
    mulhw r0, r0, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r4, r0, 0xc
    subf r4, r4, r5
    stw r4, -0x2728(r6)
    mulli r0, r18, 0x120c
    add r4, r17, r0
    stw r14, 0x48(r4)
    addi r21, r4, 0x48
    addi r22, r21, 0x8
    stw r25, 0x4c(r4)
    bl fn_8021E444
    lis r4, lbl_80754850@ha
    lfs f31, lbl_80886B40
    lfd f30, lbl_80754850@l(r4)
    mr r26, r3
    lfs f29, lbl_80886B3C
    addi r19, r1, 0x11ac
    addi r30, r1, 0x120c
    addi r14, r1, 0x18
    li r23, 0x0
    li r20, 0x0
    lis r31, 0x4330
    li r27, 0x0
    li r28, 0x1
    li r29, 0xa
    b lbl_fn_80450B84_00000C90
lbl_fn_80450B84_00000A5C:
    lwz r0, 0x4(r26)
    add r24, r0, r20
    lfs f0, 0x8(r24)
    fcmpo cr0, f0, f29
    ble lbl_fn_80450B84_00000C88
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    ble lbl_fn_80450B84_00000C88
    addi r4, r1, 0x18
    stw r27, 0x8(r1)
    cmplw r4, r30
    stw r27, 0xc(r1)
    sth r28, 0x10(r1)
    sth r29, 0x12(r1)
    stw r27, 0x14(r1)
    bge lbl_fn_80450B84_00000B9C
    cmplw r14, r30
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_80450B84_00000AB0
    li r3, 0x1
lbl_fn_80450B84_00000AB0:
    cmpwi r3, 0x0
    beq lbl_fn_80450B84_00000ABC
    li r0, 0x1
lbl_fn_80450B84_00000ABC:
    cmpwi r0, 0x0
    beq lbl_fn_80450B84_00000B68
    addi r3, r19, 0x5f
    li r0, 0x60
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r19
    bge lbl_fn_80450B84_00000B68
lbl_fn_80450B84_00000AE0:
    stw r27, 0x0(r4)
    sth r28, 0x4(r4)
    sth r29, 0x6(r4)
    stw r27, 0x8(r4)
    stw r27, 0xc(r4)
    sth r28, 0x10(r4)
    sth r29, 0x12(r4)
    stw r27, 0x14(r4)
    stw r27, 0x18(r4)
    sth r28, 0x1c(r4)
    sth r29, 0x1e(r4)
    stw r27, 0x20(r4)
    stw r27, 0x24(r4)
    sth r28, 0x28(r4)
    sth r29, 0x2a(r4)
    stw r27, 0x2c(r4)
    stw r27, 0x30(r4)
    sth r28, 0x34(r4)
    sth r29, 0x36(r4)
    stw r27, 0x38(r4)
    stw r27, 0x3c(r4)
    sth r28, 0x40(r4)
    sth r29, 0x42(r4)
    stw r27, 0x44(r4)
    stw r27, 0x48(r4)
    sth r28, 0x4c(r4)
    sth r29, 0x4e(r4)
    stw r27, 0x50(r4)
    stw r27, 0x54(r4)
    sth r28, 0x58(r4)
    sth r29, 0x5a(r4)
    stw r27, 0x5c(r4)
    addi r4, r4, 0x60
    bdnz lbl_fn_80450B84_00000AE0
lbl_fn_80450B84_00000B68:
    addi r3, r30, 0xb
    li r0, 0xc
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r30
    bge lbl_fn_80450B84_00000B9C
lbl_fn_80450B84_00000B84:
    stw r27, 0x0(r4)
    sth r28, 0x4(r4)
    sth r29, 0x6(r4)
    stw r27, 0x8(r4)
    addi r4, r4, 0xc
    bdnz lbl_fn_80450B84_00000B84
lbl_fn_80450B84_00000B9C:
    lwz r3, lbl_8087F4F0
    mr r7, r16
    lwz r5, 0x0(r24)
    addi r4, r1, 0x8
    lwz r6, 0x4(r24)
    bl fn_80445F44
    cmpwi r3, 0x0
    beq lbl_fn_80450B84_00000C88
    addi r4, r1, 0xc
    li r3, 0x0
    b lbl_fn_80450B84_00000C7C
lbl_fn_80450B84_00000BC8:
    lwz r0, 0x0(r22)
    cmplwi r0, 0x180
    bge lbl_fn_80450B84_00000C74
    lwz r0, 0x0(r22)
    mulli r0, r0, 0xc
    add r0, r22, r0
    addic. r5, r0, 0x4
    beq lbl_fn_80450B84_00000C08
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lha r0, 0x4(r4)
    sth r0, 0x4(r5)
    lha r0, 0x6(r4)
    sth r0, 0x6(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
lbl_fn_80450B84_00000C08:
    lwz r5, 0x0(r22)
    stw r31, 0x3618(r1)
    addi r0, r5, 0x1
    stw r0, 0x0(r22)
    lwz r0, 0x8(r1)
    stw r0, 0x361c(r1)
    lfs f1, 0x8(r24)
    lfd f0, 0x3618(r1)
    lwz r0, 0x8(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fcmpo cr0, f0, f31
    ble lbl_fn_80450B84_00000C54
    stw r0, 0x3624(r1)
    stw r31, 0x3620(r1)
    lfd f0, 0x3620(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    b lbl_fn_80450B84_00000C58
lbl_fn_80450B84_00000C54:
    fmr f0, f31
lbl_fn_80450B84_00000C58:
    lwz r0, 0x0(r22)
    fctiwz f0, f0
    mulli r0, r0, 0xc
    stfd f0, 0x3628(r1)
    lwz r6, 0x362c(r1)
    add r5, r22, r0
    sth r6, -0x2(r5)
lbl_fn_80450B84_00000C74:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_80450B84_00000C7C:
    lwz r0, 0x8(r1)
    cmplw r3, r0
    blt lbl_fn_80450B84_00000BC8
lbl_fn_80450B84_00000C88:
    addi r20, r20, 0xc
    addi r23, r23, 0x1
lbl_fn_80450B84_00000C90:
    lwz r0, 0x8(r26)
    cmplw r23, r0
    blt lbl_fn_80450B84_00000A5C
    cmpwi r15, 0x0
    ble lbl_fn_80450B84_00000D44
    addi r15, r21, 0xc
    lis r14, 0x2aab
    b lbl_fn_80450B84_00000D2C
lbl_fn_80450B84_00000CB0:
    lwz r3, 0x0(r15)
    bl fn_8040B394
    cmpw r25, r3
    beq lbl_fn_80450B84_00000D28
    addi r0, r21, 0xc
    subi r3, r14, 0x5555
    subf r0, r0, r15
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r4, r0, r3
    mulli r0, r4, 0xc
    add r5, r21, r0
    b lbl_fn_80450B84_00000D10
lbl_fn_80450B84_00000CE8:
    lwz r0, 0x18(r5)
    addi r4, r4, 0x1
    stw r0, 0xc(r5)
    lha r0, 0x1c(r5)
    sth r0, 0x10(r5)
    lha r0, 0x1e(r5)
    sth r0, 0x12(r5)
    lwz r0, 0x20(r5)
    stw r0, 0x14(r5)
    addi r5, r5, 0xc
lbl_fn_80450B84_00000D10:
    lwz r3, 0x8(r21)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_80450B84_00000CE8
    stw r0, 0x8(r21)
    b lbl_fn_80450B84_00000D2C
lbl_fn_80450B84_00000D28:
    addi r15, r15, 0xc
lbl_fn_80450B84_00000D2C:
    lwz r0, 0x8(r21)
    mulli r0, r0, 0xc
    add r3, r21, r0
    addi r0, r3, 0xc
    cmplw r15, r0
    bne lbl_fn_80450B84_00000CB0
lbl_fn_80450B84_00000D44:
    cmpwi r18, 0x0
    blt lbl_fn_80450B84_00000FC4
    mulli r0, r18, 0x120c
    li r3, 0x0
    stw r3, 0x2410(r1)
    li r5, 0x0
    add r4, r17, r0
    addi r6, r4, 0x54
    b lbl_fn_80450B84_00000DBC
lbl_fn_80450B84_00000D68:
    lwz r0, 0x2410(r1)
    cmplwi r0, 0x180
    bge lbl_fn_80450B84_00000DB4
    lwz r0, 0x2410(r1)
    addi r3, r1, 0x2414
    mulli r0, r0, 0xc
    add. r3, r3, r0
    beq lbl_fn_80450B84_00000DA8
    lwz r0, 0x0(r6)
    stw r0, 0x0(r3)
    lha r0, 0x4(r6)
    sth r0, 0x4(r3)
    lha r0, 0x6(r6)
    sth r0, 0x6(r3)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r3)
lbl_fn_80450B84_00000DA8:
    lwz r3, 0x2410(r1)
    addi r0, r3, 0x1
    stw r0, 0x2410(r1)
lbl_fn_80450B84_00000DB4:
    addi r6, r6, 0xc
    addi r5, r5, 0x1
lbl_fn_80450B84_00000DBC:
    lwz r0, 0x50(r4)
    cmplw r5, r0
    blt lbl_fn_80450B84_00000D68
    b lbl_fn_80450B84_00000FC4
lbl_fn_80450B84_00000DCC:
    lfs f31, lbl_80886B3C
    addi r22, r1, 0x23b0
    addi r14, r1, 0x2410
    addi r19, r1, 0x121c
    li r23, 0x0
    li r21, 0x0
    li r18, 0x0
    li r17, 0x1
    li r15, 0xa
    li r25, 0x60
    li r24, 0xc
    b lbl_fn_80450B84_00000FB8
lbl_fn_80450B84_00000DFC:
    lwz r0, 0x4(r20)
    add r6, r0, r21
    lfs f0, 0x8(r6)
    fcmpo cr0, f0, f31
    ble lbl_fn_80450B84_00000FB0
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    ble lbl_fn_80450B84_00000FB0
    addi r3, r1, 0x121c
    stw r18, 0x120c(r1)
    cmplw r3, r14
    stw r18, 0x1210(r1)
    sth r17, 0x1214(r1)
    sth r15, 0x1216(r1)
    stw r18, 0x1218(r1)
    bge lbl_fn_80450B84_00000F34
    cmplw r19, r14
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_80450B84_00000E50
    li r4, 0x1
lbl_fn_80450B84_00000E50:
    cmpwi r4, 0x0
    beq lbl_fn_80450B84_00000E5C
    li r0, 0x1
lbl_fn_80450B84_00000E5C:
    cmpwi r0, 0x0
    beq lbl_fn_80450B84_00000F04
    addi r0, r22, 0x5f
    subf r0, r3, r0
    divwu r0, r0, r25
    mtctr r0
    cmplw r3, r22
    bge lbl_fn_80450B84_00000F04
lbl_fn_80450B84_00000E7C:
    stw r18, 0x0(r3)
    sth r17, 0x4(r3)
    sth r15, 0x6(r3)
    stw r18, 0x8(r3)
    stw r18, 0xc(r3)
    sth r17, 0x10(r3)
    sth r15, 0x12(r3)
    stw r18, 0x14(r3)
    stw r18, 0x18(r3)
    sth r17, 0x1c(r3)
    sth r15, 0x1e(r3)
    stw r18, 0x20(r3)
    stw r18, 0x24(r3)
    sth r17, 0x28(r3)
    sth r15, 0x2a(r3)
    stw r18, 0x2c(r3)
    stw r18, 0x30(r3)
    sth r17, 0x34(r3)
    sth r15, 0x36(r3)
    stw r18, 0x38(r3)
    stw r18, 0x3c(r3)
    sth r17, 0x40(r3)
    sth r15, 0x42(r3)
    stw r18, 0x44(r3)
    stw r18, 0x48(r3)
    sth r17, 0x4c(r3)
    sth r15, 0x4e(r3)
    stw r18, 0x50(r3)
    stw r18, 0x54(r3)
    sth r17, 0x58(r3)
    sth r15, 0x5a(r3)
    stw r18, 0x5c(r3)
    addi r3, r3, 0x60
    bdnz lbl_fn_80450B84_00000E7C
lbl_fn_80450B84_00000F04:
    addi r0, r14, 0xb
    subf r0, r3, r0
    divwu r0, r0, r24
    mtctr r0
    cmplw r3, r14
    bge lbl_fn_80450B84_00000F34
lbl_fn_80450B84_00000F1C:
    stw r18, 0x0(r3)
    sth r17, 0x4(r3)
    sth r15, 0x6(r3)
    stw r18, 0x8(r3)
    addi r3, r3, 0xc
    bdnz lbl_fn_80450B84_00000F1C
lbl_fn_80450B84_00000F34:
    lwz r5, 0x0(r6)
    mr r7, r16
    lwz r3, lbl_8087F4F0
    addi r4, r1, 0x120c
    lwz r6, 0x4(r6)
    bl fn_80445F44
    cmpwi r3, 0x0
    beq lbl_fn_80450B84_00000FB0
    lwz r0, 0x120c(r1)
    addi r4, r1, 0x1210
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80450B84_00000FB0
lbl_fn_80450B84_00000F68:
    lwz r0, 0x2410(r1)
    addi r3, r1, 0x2414
    mulli r0, r0, 0xc
    add. r3, r3, r0
    beq lbl_fn_80450B84_00000F9C
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lha r0, 0x4(r4)
    sth r0, 0x4(r3)
    lha r0, 0x6(r4)
    sth r0, 0x6(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
lbl_fn_80450B84_00000F9C:
    lwz r3, 0x2410(r1)
    addi r4, r4, 0xc
    addi r0, r3, 0x1
    stw r0, 0x2410(r1)
    bdnz lbl_fn_80450B84_00000F68
lbl_fn_80450B84_00000FB0:
    addi r21, r21, 0xc
    addi r23, r23, 0x1
lbl_fn_80450B84_00000FB8:
    lwz r0, 0x8(r20)
    cmplw r23, r0
    blt lbl_fn_80450B84_00000DFC
lbl_fn_80450B84_00000FC4:
    lwz r0, 0x2410(r1)
    cmplwi r0, 0x1
    ble lbl_fn_80450B84_00000FD8
    li r3, 0x1
    b lbl_fn_80450B84_00000FDC
lbl_fn_80450B84_00000FD8:
    li r3, 0x0
lbl_fn_80450B84_00000FDC:
    li r0, 0x36a8
    addi r11, r1, 0x3680
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x36a0(r1)
    li r0, 0x3698
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x3690(r1)
    li r0, 0x3688
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x3680(r1)
    bl _restgpr_14
    lwz r0, 0x36b4(r1)
    mtlr r0
    addi r1, r1, 0x36b0
    blr
}

asm void fn_804515A8(void)
{
    nofralloc
    stwu r1, -0x36b0(r1)
    mflr r0
    stw r0, 0x36b4(r1)
    li r0, 0x36a8
    addi r11, r1, 0x3680
    stfd f31, 0x36a0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x3698
    stfd f30, 0x3690(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x3688
    stfd f29, 0x3680(r1)
    psq_stx f29, r1, r0, 0, 0
    bl _savegpr_14
    lwz r5, 0x20(r3)
    lis r0, 0x4330
    stw r0, 0x3618(r1)
    mr r15, r3
    cmpwi r5, 0x0
    mr r16, r4
    stw r0, 0x3620(r1)
    beq lbl_fn_804515A8_00001078
    cmpwi r4, 0x0
    bne lbl_fn_804515A8_00001080
lbl_fn_804515A8_00001078:
    li r3, 0x0
    b lbl_fn_804515A8_00001DA4
lbl_fn_804515A8_00001080:
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    ble lbl_fn_804515A8_00001BB4
    bl fn_8021E444
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_804515A8_00001DA0
    addi r7, r1, 0x2420
    addi r0, r1, 0x3614
    cmplw r7, r0
    li r4, 0x0
    li r3, 0x1
    li r0, 0xa
    stw r4, 0x2410(r1)
    stw r4, 0x2414(r1)
    sth r3, 0x2418(r1)
    sth r0, 0x241a(r1)
    stw r4, 0x241c(r1)
    bge lbl_fn_804515A8_000011E8
    addi r6, r1, 0x35b4
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804515A8_000010E0
    li r3, 0x1
lbl_fn_804515A8_000010E0:
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_000010EC
    li r0, 0x1
lbl_fn_804515A8_000010EC:
    cmpwi r0, 0x0
    beq lbl_fn_804515A8_000011A4
    addi r3, r6, 0x5f
    li r0, 0x60
    subf r3, r7, r3
    li r5, 0x0
    divwu r3, r3, r0
    li r4, 0x1
    li r0, 0xa
    mtctr r3
    cmplw r7, r6
    bge lbl_fn_804515A8_000011A4
lbl_fn_804515A8_0000111C:
    stw r5, 0x0(r7)
    sth r4, 0x4(r7)
    sth r0, 0x6(r7)
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    sth r4, 0x10(r7)
    sth r0, 0x12(r7)
    stw r5, 0x14(r7)
    stw r5, 0x18(r7)
    sth r4, 0x1c(r7)
    sth r0, 0x1e(r7)
    stw r5, 0x20(r7)
    stw r5, 0x24(r7)
    sth r4, 0x28(r7)
    sth r0, 0x2a(r7)
    stw r5, 0x2c(r7)
    stw r5, 0x30(r7)
    sth r4, 0x34(r7)
    sth r0, 0x36(r7)
    stw r5, 0x38(r7)
    stw r5, 0x3c(r7)
    sth r4, 0x40(r7)
    sth r0, 0x42(r7)
    stw r5, 0x44(r7)
    stw r5, 0x48(r7)
    sth r4, 0x4c(r7)
    sth r0, 0x4e(r7)
    stw r5, 0x50(r7)
    stw r5, 0x54(r7)
    sth r4, 0x58(r7)
    sth r0, 0x5a(r7)
    stw r5, 0x5c(r7)
    addi r7, r7, 0x60
    bdnz lbl_fn_804515A8_0000111C
lbl_fn_804515A8_000011A4:
    addi r4, r1, 0x3614
    li r0, 0xc
    addi r3, r4, 0xb
    li r6, 0x0
    subf r3, r7, r3
    li r5, 0x1
    divwu r3, r3, r0
    li r0, 0xa
    mtctr r3
    cmplw r7, r4
    bge lbl_fn_804515A8_000011E8
lbl_fn_804515A8_000011D0:
    stw r6, 0x0(r7)
    sth r5, 0x4(r7)
    sth r0, 0x6(r7)
    stw r6, 0x8(r7)
    addi r7, r7, 0xc
    bdnz lbl_fn_804515A8_000011D0
lbl_fn_804515A8_000011E8:
    lwz r17, lbl_8087F4FC
    cmpwi r17, 0x0
    beq lbl_fn_804515A8_00001820
    lwz r0, 0xec(r15)
    extrwi. r0, r0, 1, 7
    cntlzw r0, r0
    srwi r25, r0, 5
    beq lbl_fn_804515A8_00001214
    lwz r3, 0x20(r15)
    lwz r14, 0x4(r3)
    b lbl_fn_804515A8_00001218
lbl_fn_804515A8_00001214:
    li r14, 0x0
lbl_fn_804515A8_00001218:
    lwz r3, lbl_8087F430
    lwz r19, 0x28(r15)
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_00001320
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_00001320
    lwz r3, lbl_8087F430
    bl fn_80373148
    addis r5, r17, 0x1
    lwz r6, 0x48(r3)
    lwz r0, -0x2724(r5)
    cmpw r0, r6
    bne lbl_fn_804515A8_00001270
    lwz r4, -0x2720(r5)
    lwz r0, 0x4c(r3)
    cmpw r4, r0
    bne lbl_fn_804515A8_00001270
    lwz r4, -0x271c(r5)
    lwz r0, 0x50(r3)
    cmpw r4, r0
    beq lbl_fn_804515A8_00001320
lbl_fn_804515A8_00001270:
    addis r4, r17, 0x1
    li r5, 0x0
    stw r6, -0x2724(r4)
    addi r6, r17, 0x6c48
    lwz r0, 0x4c(r3)
    stw r0, -0x2720(r4)
    lwz r0, 0x50(r3)
    stw r0, -0x271c(r4)
    stw r5, 0x48(r17)
    stw r5, 0x4c(r17)
    stw r5, 0x50(r17)
    stw r5, 0x1254(r17)
    stw r5, 0x1258(r17)
    stw r5, 0x125c(r17)
    stw r5, 0x2460(r17)
    stw r5, 0x2464(r17)
    stw r5, 0x2468(r17)
    stw r5, 0x366c(r17)
    stw r5, 0x3670(r17)
    stw r5, 0x3674(r17)
    stw r5, 0x4878(r17)
    stw r5, 0x487c(r17)
    stw r5, 0x4880(r17)
    stw r5, 0x5a84(r17)
    stw r5, 0x5a88(r17)
    stw r5, 0x5a8c(r17)
    stw r5, 0x6c90(r17)
    stw r5, 0x6c94(r17)
    stw r5, 0x6c98(r17)
    stw r5, 0x7e9c(r17)
    stw r5, 0x7ea0(r17)
    stw r5, 0x7ea4(r17)
    stw r5, 0x2460(r6)
    stw r5, 0x2464(r6)
    stw r5, 0x2468(r6)
    stw r5, 0x366c(r6)
    stw r5, 0x3670(r6)
    stw r5, 0x3674(r6)
    stw r5, 0x4878(r6)
    stw r5, 0x487c(r6)
    stw r5, 0x4880(r6)
    stw r5, 0x5a84(r6)
    stw r5, 0x5a88(r6)
    stw r5, 0x5a8c(r6)
lbl_fn_804515A8_00001320:
    cmpwi r14, 0x0
    li r18, -0x1
    ble lbl_fn_804515A8_0000133C
    mr r3, r14
    bl fn_8040B394
    mr r26, r3
    b lbl_fn_804515A8_00001340
lbl_fn_804515A8_0000133C:
    li r26, -0x1
lbl_fn_804515A8_00001340:
    li r0, 0x2
    addi r4, r17, 0x48
    li r3, 0x0
    mtctr r0
lbl_fn_804515A8_00001350:
    lwz r0, 0x0(r4)
    cmpw r0, r19
    bne lbl_fn_804515A8_00001370
    lwz r0, 0x4(r4)
    cmpw r0, r26
    bne lbl_fn_804515A8_00001370
    mr r18, r3
    b lbl_fn_804515A8_00001430
lbl_fn_804515A8_00001370:
    lwz r0, 0x120c(r4)
    addi r3, r3, 0x1
    cmpw r0, r19
    bne lbl_fn_804515A8_00001394
    lwz r0, 0x1210(r4)
    cmpw r0, r26
    bne lbl_fn_804515A8_00001394
    mr r18, r3
    b lbl_fn_804515A8_00001430
lbl_fn_804515A8_00001394:
    lwz r0, 0x2418(r4)
    addi r3, r3, 0x1
    cmpw r0, r19
    bne lbl_fn_804515A8_000013B8
    lwz r0, 0x241c(r4)
    cmpw r0, r26
    bne lbl_fn_804515A8_000013B8
    mr r18, r3
    b lbl_fn_804515A8_00001430
lbl_fn_804515A8_000013B8:
    lwz r0, 0x3624(r4)
    addi r3, r3, 0x1
    cmpw r0, r19
    bne lbl_fn_804515A8_000013DC
    lwz r0, 0x3628(r4)
    cmpw r0, r26
    bne lbl_fn_804515A8_000013DC
    mr r18, r3
    b lbl_fn_804515A8_00001430
lbl_fn_804515A8_000013DC:
    lwz r0, 0x4830(r4)
    addi r3, r3, 0x1
    cmpw r0, r19
    bne lbl_fn_804515A8_00001400
    lwz r0, 0x4834(r4)
    cmpw r0, r26
    bne lbl_fn_804515A8_00001400
    mr r18, r3
    b lbl_fn_804515A8_00001430
lbl_fn_804515A8_00001400:
    lwz r0, 0x5a3c(r4)
    addi r3, r3, 0x1
    cmpw r0, r19
    bne lbl_fn_804515A8_00001424
    lwz r0, 0x5a40(r4)
    cmpw r0, r26
    bne lbl_fn_804515A8_00001424
    mr r18, r3
    b lbl_fn_804515A8_00001430
lbl_fn_804515A8_00001424:
    addi r4, r4, 0x6c48
    addi r3, r3, 0x1
    bdnz lbl_fn_804515A8_00001350
lbl_fn_804515A8_00001430:
    cmpwi r18, 0x0
    bge lbl_fn_804515A8_00001798
    addis r6, r17, 0x1
    lis r3, 0x2aab
    lwz r18, -0x2728(r6)
    subi r0, r3, 0x5555
    mr r3, r19
    addi r5, r18, 0x1
    mulhw r0, r0, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r4, r0, 0xc
    subf r4, r4, r5
    stw r4, -0x2728(r6)
    mulli r0, r18, 0x120c
    add r4, r17, r0
    stw r19, 0x48(r4)
    addi r21, r4, 0x48
    addi r22, r21, 0x8
    stw r26, 0x4c(r4)
    bl fn_8021E444
    lis r4, lbl_80754850@ha
    lfs f29, lbl_80886B40
    lfd f30, lbl_80754850@l(r4)
    mr r27, r3
    lfs f31, lbl_80886B3C
    addi r19, r1, 0x11ac
    addi r31, r1, 0x120c
    li r23, 0x0
    li r20, 0x0
    li r28, 0x0
    li r29, 0x1
    li r30, 0xa
    b lbl_fn_804515A8_000016E4
lbl_fn_804515A8_000014BC:
    lwz r0, 0x4(r27)
    add r24, r0, r20
    lfs f0, 0x8(r24)
    fcmpo cr0, f0, f31
    ble lbl_fn_804515A8_000016DC
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    ble lbl_fn_804515A8_000016DC
    addi r4, r1, 0x18
    stw r28, 0x8(r1)
    cmplw r4, r31
    stw r28, 0xc(r1)
    sth r29, 0x10(r1)
    sth r30, 0x12(r1)
    stw r28, 0x14(r1)
    bge lbl_fn_804515A8_000015F8
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804515A8_0000150C
    li r3, 0x1
lbl_fn_804515A8_0000150C:
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_00001518
    li r0, 0x1
lbl_fn_804515A8_00001518:
    cmpwi r0, 0x0
    beq lbl_fn_804515A8_000015C4
    addi r3, r19, 0x5f
    li r0, 0x60
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r19
    bge lbl_fn_804515A8_000015C4
lbl_fn_804515A8_0000153C:
    stw r28, 0x0(r4)
    sth r29, 0x4(r4)
    sth r30, 0x6(r4)
    stw r28, 0x8(r4)
    stw r28, 0xc(r4)
    sth r29, 0x10(r4)
    sth r30, 0x12(r4)
    stw r28, 0x14(r4)
    stw r28, 0x18(r4)
    sth r29, 0x1c(r4)
    sth r30, 0x1e(r4)
    stw r28, 0x20(r4)
    stw r28, 0x24(r4)
    sth r29, 0x28(r4)
    sth r30, 0x2a(r4)
    stw r28, 0x2c(r4)
    stw r28, 0x30(r4)
    sth r29, 0x34(r4)
    sth r30, 0x36(r4)
    stw r28, 0x38(r4)
    stw r28, 0x3c(r4)
    sth r29, 0x40(r4)
    sth r30, 0x42(r4)
    stw r28, 0x44(r4)
    stw r28, 0x48(r4)
    sth r29, 0x4c(r4)
    sth r30, 0x4e(r4)
    stw r28, 0x50(r4)
    stw r28, 0x54(r4)
    sth r29, 0x58(r4)
    sth r30, 0x5a(r4)
    stw r28, 0x5c(r4)
    addi r4, r4, 0x60
    bdnz lbl_fn_804515A8_0000153C
lbl_fn_804515A8_000015C4:
    addi r3, r31, 0xb
    li r0, 0xc
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r4, r31
    bge lbl_fn_804515A8_000015F8
lbl_fn_804515A8_000015E0:
    stw r28, 0x0(r4)
    sth r29, 0x4(r4)
    sth r30, 0x6(r4)
    stw r28, 0x8(r4)
    addi r4, r4, 0xc
    bdnz lbl_fn_804515A8_000015E0
lbl_fn_804515A8_000015F8:
    lwz r3, lbl_8087F4F0
    mr r7, r25
    lwz r5, 0x0(r24)
    addi r4, r1, 0x8
    lwz r6, 0x4(r24)
    bl fn_80445F44
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_000016DC
    addi r4, r1, 0xc
    li r3, 0x0
    b lbl_fn_804515A8_000016D0
lbl_fn_804515A8_00001624:
    lwz r0, 0x0(r22)
    cmplwi r0, 0x180
    bge lbl_fn_804515A8_000016C8
    lwz r0, 0x0(r22)
    mulli r0, r0, 0xc
    add r0, r22, r0
    addic. r5, r0, 0x4
    beq lbl_fn_804515A8_00001664
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lha r0, 0x4(r4)
    sth r0, 0x4(r5)
    lha r0, 0x6(r4)
    sth r0, 0x6(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
lbl_fn_804515A8_00001664:
    lwz r5, 0x0(r22)
    addi r0, r5, 0x1
    stw r0, 0x0(r22)
    lwz r0, 0x8(r1)
    stw r0, 0x361c(r1)
    lfs f1, 0x8(r24)
    lfd f0, 0x3618(r1)
    lwz r0, 0x8(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fcmpo cr0, f0, f29
    ble lbl_fn_804515A8_000016A8
    stw r0, 0x3624(r1)
    lfd f0, 0x3620(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    b lbl_fn_804515A8_000016AC
lbl_fn_804515A8_000016A8:
    fmr f0, f29
lbl_fn_804515A8_000016AC:
    lwz r0, 0x0(r22)
    fctiwz f0, f0
    mulli r0, r0, 0xc
    stfd f0, 0x3628(r1)
    lwz r6, 0x362c(r1)
    add r5, r22, r0
    sth r6, -0x2(r5)
lbl_fn_804515A8_000016C8:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_804515A8_000016D0:
    lwz r0, 0x8(r1)
    cmplw r3, r0
    blt lbl_fn_804515A8_00001624
lbl_fn_804515A8_000016DC:
    addi r20, r20, 0xc
    addi r23, r23, 0x1
lbl_fn_804515A8_000016E4:
    lwz r0, 0x8(r27)
    cmplw r23, r0
    blt lbl_fn_804515A8_000014BC
    cmpwi r14, 0x0
    ble lbl_fn_804515A8_00001798
    addi r19, r21, 0xc
    lis r14, 0x2aab
    b lbl_fn_804515A8_00001780
lbl_fn_804515A8_00001704:
    lwz r3, 0x0(r19)
    bl fn_8040B394
    cmpw r26, r3
    beq lbl_fn_804515A8_0000177C
    addi r0, r21, 0xc
    subi r3, r14, 0x5555
    subf r0, r0, r19
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r4, r0, r3
    mulli r0, r4, 0xc
    add r5, r21, r0
    b lbl_fn_804515A8_00001764
lbl_fn_804515A8_0000173C:
    lwz r0, 0x18(r5)
    addi r4, r4, 0x1
    stw r0, 0xc(r5)
    lha r0, 0x1c(r5)
    sth r0, 0x10(r5)
    lha r0, 0x1e(r5)
    sth r0, 0x12(r5)
    lwz r0, 0x20(r5)
    stw r0, 0x14(r5)
    addi r5, r5, 0xc
lbl_fn_804515A8_00001764:
    lwz r3, 0x8(r21)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_804515A8_0000173C
    stw r0, 0x8(r21)
    b lbl_fn_804515A8_00001780
lbl_fn_804515A8_0000177C:
    addi r19, r19, 0xc
lbl_fn_804515A8_00001780:
    lwz r0, 0x8(r21)
    mulli r0, r0, 0xc
    add r3, r21, r0
    addi r0, r3, 0xc
    cmplw r19, r0
    bne lbl_fn_804515A8_00001704
lbl_fn_804515A8_00001798:
    cmpwi r18, 0x0
    blt lbl_fn_804515A8_00001A7C
    mulli r0, r18, 0x120c
    li r3, 0x0
    stw r3, 0x2410(r1)
    li r5, 0x0
    add r4, r17, r0
    addi r6, r4, 0x54
    b lbl_fn_804515A8_00001810
lbl_fn_804515A8_000017BC:
    lwz r0, 0x2410(r1)
    cmplwi r0, 0x180
    bge lbl_fn_804515A8_00001808
    lwz r0, 0x2410(r1)
    addi r3, r1, 0x2414
    mulli r0, r0, 0xc
    add. r3, r3, r0
    beq lbl_fn_804515A8_000017FC
    lwz r0, 0x0(r6)
    stw r0, 0x0(r3)
    lha r0, 0x4(r6)
    sth r0, 0x4(r3)
    lha r0, 0x6(r6)
    sth r0, 0x6(r3)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r3)
lbl_fn_804515A8_000017FC:
    lwz r3, 0x2410(r1)
    addi r0, r3, 0x1
    stw r0, 0x2410(r1)
lbl_fn_804515A8_00001808:
    addi r6, r6, 0xc
    addi r5, r5, 0x1
lbl_fn_804515A8_00001810:
    lwz r0, 0x50(r4)
    cmplw r5, r0
    blt lbl_fn_804515A8_000017BC
    b lbl_fn_804515A8_00001A7C
lbl_fn_804515A8_00001820:
    lis r3, lbl_80754850@ha
    lfs f31, lbl_80886B40
    lfd f30, lbl_80754850@l(r3)
    addi r25, r1, 0x23b0
    lfs f29, lbl_80886B3C
    addi r17, r1, 0x2410
    addi r18, r1, 0x2410
    addi r22, r1, 0x121c
    li r26, 0x0
    li r24, 0x0
    li r21, 0x0
    li r20, 0x1
    li r19, 0xa
    li r14, 0x60
    li r28, 0xc
    b lbl_fn_804515A8_00001A70
lbl_fn_804515A8_00001860:
    lwz r0, 0x4(r23)
    add r27, r0, r24
    lfs f0, 0x8(r27)
    fcmpo cr0, f0, f29
    ble lbl_fn_804515A8_00001A68
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    ble lbl_fn_804515A8_00001A68
    addi r3, r1, 0x121c
    stw r21, 0x120c(r1)
    cmplw r3, r18
    stw r21, 0x1210(r1)
    sth r20, 0x1214(r1)
    sth r19, 0x1216(r1)
    stw r21, 0x1218(r1)
    bge lbl_fn_804515A8_00001998
    cmplw r22, r18
    li r0, 0x0
    li r4, 0x0
    bgt lbl_fn_804515A8_000018B4
    li r4, 0x1
lbl_fn_804515A8_000018B4:
    cmpwi r4, 0x0
    beq lbl_fn_804515A8_000018C0
    li r0, 0x1
lbl_fn_804515A8_000018C0:
    cmpwi r0, 0x0
    beq lbl_fn_804515A8_00001968
    addi r0, r25, 0x5f
    subf r0, r3, r0
    divwu r0, r0, r14
    mtctr r0
    cmplw r3, r25
    bge lbl_fn_804515A8_00001968
lbl_fn_804515A8_000018E0:
    stw r21, 0x0(r3)
    sth r20, 0x4(r3)
    sth r19, 0x6(r3)
    stw r21, 0x8(r3)
    stw r21, 0xc(r3)
    sth r20, 0x10(r3)
    sth r19, 0x12(r3)
    stw r21, 0x14(r3)
    stw r21, 0x18(r3)
    sth r20, 0x1c(r3)
    sth r19, 0x1e(r3)
    stw r21, 0x20(r3)
    stw r21, 0x24(r3)
    sth r20, 0x28(r3)
    sth r19, 0x2a(r3)
    stw r21, 0x2c(r3)
    stw r21, 0x30(r3)
    sth r20, 0x34(r3)
    sth r19, 0x36(r3)
    stw r21, 0x38(r3)
    stw r21, 0x3c(r3)
    sth r20, 0x40(r3)
    sth r19, 0x42(r3)
    stw r21, 0x44(r3)
    stw r21, 0x48(r3)
    sth r20, 0x4c(r3)
    sth r19, 0x4e(r3)
    stw r21, 0x50(r3)
    stw r21, 0x54(r3)
    sth r20, 0x58(r3)
    sth r19, 0x5a(r3)
    stw r21, 0x5c(r3)
    addi r3, r3, 0x60
    bdnz lbl_fn_804515A8_000018E0
lbl_fn_804515A8_00001968:
    addi r0, r18, 0xb
    subf r0, r3, r0
    divwu r0, r0, r28
    mtctr r0
    cmplw r3, r18
    bge lbl_fn_804515A8_00001998
lbl_fn_804515A8_00001980:
    stw r21, 0x0(r3)
    sth r20, 0x4(r3)
    sth r19, 0x6(r3)
    stw r21, 0x8(r3)
    addi r3, r3, 0xc
    bdnz lbl_fn_804515A8_00001980
lbl_fn_804515A8_00001998:
    lwz r3, lbl_8087F4F0
    addi r4, r1, 0x120c
    lwz r5, 0x0(r27)
    li r7, 0x0
    lwz r6, 0x4(r27)
    bl fn_80445F44
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_00001A68
    lwz r0, 0x120c(r1)
    addi r3, r1, 0x1210
    lwz r6, 0x120c(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804515A8_00001A68
lbl_fn_804515A8_000019D0:
    lwz r4, 0x2410(r1)
    addi r5, r1, 0x2414
    mulli r4, r4, 0xc
    add. r5, r5, r4
    beq lbl_fn_804515A8_00001A04
    lwz r4, 0x0(r3)
    stw r4, 0x0(r5)
    lha r4, 0x4(r3)
    sth r4, 0x4(r5)
    lha r4, 0x6(r3)
    sth r4, 0x6(r5)
    lwz r4, 0x8(r3)
    stw r4, 0x8(r5)
lbl_fn_804515A8_00001A04:
    stw r6, 0x361c(r1)
    lwz r4, 0x2410(r1)
    lfd f0, 0x3618(r1)
    addi r4, r4, 0x1
    stw r4, 0x2410(r1)
    fsubs f0, f0, f30
    lfs f1, 0x8(r27)
    fdivs f0, f1, f0
    fcmpo cr0, f0, f31
    ble lbl_fn_804515A8_00001A40
    stw r0, 0x3624(r1)
    lfd f0, 0x3620(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    b lbl_fn_804515A8_00001A44
lbl_fn_804515A8_00001A40:
    fmr f0, f31
lbl_fn_804515A8_00001A44:
    lwz r4, 0x2410(r1)
    fctiwz f0, f0
    addi r3, r3, 0xc
    mulli r4, r4, 0xc
    stfd f0, 0x3628(r1)
    lwz r5, 0x362c(r1)
    add r4, r17, r4
    sth r5, -0x2(r4)
    bdnz lbl_fn_804515A8_000019D0
lbl_fn_804515A8_00001A68:
    addi r24, r24, 0xc
    addi r26, r26, 0x1
lbl_fn_804515A8_00001A70:
    lwz r0, 0x8(r23)
    cmplw r26, r0
    blt lbl_fn_804515A8_00001860
lbl_fn_804515A8_00001A7C:
    lwz r3, 0x2410(r1)
    lwz r5, 0x2410(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_00001B94
    cmpwi r5, 0x0
    li r14, 0x0
    li r6, 0x0
    beq lbl_fn_804515A8_00001B38
    cmplwi r3, 0x8
    subi r3, r3, 0x8
    ble lbl_fn_804515A8_00001B0C
    addi r0, r3, 0x7
    addi r4, r1, 0x2410
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_804515A8_00001B0C
lbl_fn_804515A8_00001AC0:
    lha r3, 0xa(r4)
    addi r6, r6, 0x8
    lha r0, 0x16(r4)
    add r14, r14, r3
    lha r3, 0x22(r4)
    add r14, r14, r0
    lha r0, 0x2e(r4)
    add r14, r14, r3
    lha r3, 0x3a(r4)
    add r14, r14, r0
    lha r0, 0x46(r4)
    add r14, r14, r3
    lha r3, 0x52(r4)
    add r14, r14, r0
    lha r0, 0x5e(r4)
    add r14, r14, r3
    addi r4, r4, 0x60
    add r14, r14, r0
    bdnz lbl_fn_804515A8_00001AC0
lbl_fn_804515A8_00001B0C:
    mulli r3, r6, 0xc
    addi r4, r1, 0x2410
    subf r0, r6, r5
    add r4, r4, r3
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_804515A8_00001B38
lbl_fn_804515A8_00001B28:
    lha r0, 0xa(r4)
    addi r4, r4, 0xc
    add r14, r14, r0
    bdnz lbl_fn_804515A8_00001B28
lbl_fn_804515A8_00001B38:
    bl fn_80680CF8
    divw r0, r3, r14
    lwz r4, 0x2410(r1)
    addi r5, r1, 0x2414
    mullw r0, r0, r14
    subf r3, r0, r3
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_fn_804515A8_00001DA0
lbl_fn_804515A8_00001B5C:
    lha r0, 0x6(r5)
    cmpw r3, r0
    bge lbl_fn_804515A8_00001B84
    lwz r0, 0xec(r15)
    mr r3, r16
    lwz r4, 0x0(r5)
    lha r5, 0x4(r5)
    extrwi r6, r0, 1, 1
    bl fn_80444CF8
    b lbl_fn_804515A8_00001DA0
lbl_fn_804515A8_00001B84:
    subf r3, r0, r3
    addi r5, r5, 0xc
    bdnz lbl_fn_804515A8_00001B5C
    b lbl_fn_804515A8_00001DA0
lbl_fn_804515A8_00001B94:
    lwz r14, 0x28(r15)
    li r0, 0x0
    mr r3, r15
    mr r4, r16
    stw r0, 0x28(r15)
    bl fn_804515A8
    stw r14, 0x28(r15)
    b lbl_fn_804515A8_00001DA0
lbl_fn_804515A8_00001BB4:
    lwz r3, 0x4(r5)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_00001C18
    bl fn_80206B68
    mr r14, r3
    bl fn_80680CF8
    divw r0, r3, r14
    mullw r0, r0, r14
    subf r3, r0, r3
    bl fn_80206B70
    lwz r0, 0xec(r15)
    mr r14, r3
    extrwi. r0, r0, 1, 1
    bne lbl_fn_804515A8_00001BF4
    bl fn_80680CF8
lbl_fn_804515A8_00001BF4:
    mr r3, r14
    bl fn_80206BE4
    lwz r0, 0xec(r15)
    mr r4, r3
    mr r3, r16
    li r5, 0x1
    extrwi r6, r0, 1, 1
    bl fn_80444CF8
    b lbl_fn_804515A8_00001DA0
lbl_fn_804515A8_00001C18:
    lwz r3, 0x20(r15)
    lwz r3, 0x4(r3)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_804515A8_00001C94
    bl fn_8020EE58
    mr r14, r3
    bl fn_80680CF8
    divw r0, r3, r14
    mullw r0, r0, r14
    subf r3, r0, r3
    bl fn_8020EE60
    lwz r0, 0x78(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804515A8_00001C64
    lwz r4, 0x7c(r3)
    li r3, 0x0
    bl fn_8020ED84
    b lbl_fn_804515A8_00001C78
lbl_fn_804515A8_00001C64:
    cmpwi r0, 0x3
    bne lbl_fn_804515A8_00001C78
    lwz r4, 0x7c(r3)
    li r3, 0x1
    bl fn_8020ED84
lbl_fn_804515A8_00001C78:
    bl fn_8020EF80
    mr r4, r3
    mr r3, r16
    li r5, 0x1
    li r6, 0x1
    bl fn_80444CF8
    b lbl_fn_804515A8_00001DA0
lbl_fn_804515A8_00001C94:
    lwz r3, 0x20(r15)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x2714
    bne lbl_fn_804515A8_00001D38
    bl fn_80680CF8
    lis r14, 0x6666
    lwz r0, 0x24(r15)
    addi r4, r14, 0x6667
    mulhw r4, r4, r3
    srawi r4, r4, 1
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x5
    subf r3, r4, r3
    subi r3, r3, 0x2
    mullw r0, r0, r3
    cmpwi r0, 0x1
    ble lbl_fn_804515A8_00001D0C
    bl fn_80680CF8
    addi r4, r14, 0x6667
    lwz r0, 0x24(r15)
    mulhw r4, r4, r3
    srawi r4, r4, 1
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x5
    subf r3, r4, r3
    subi r3, r3, 0x2
    mullw r14, r0, r3
    b lbl_fn_804515A8_00001D10
lbl_fn_804515A8_00001D0C:
    li r14, 0x1
lbl_fn_804515A8_00001D10:
    bl fn_80680CF8
    divw r0, r3, r14
    lwz r4, 0x20(r15)
    li r6, 0x1
    lwz r4, 0x4(r4)
    mullw r0, r0, r14
    subf r5, r0, r3
    mr r3, r16
    bl fn_80444CF8
    b lbl_fn_804515A8_00001DA0
lbl_fn_804515A8_00001D38:
    cmpwi r4, 0x2719
    bne lbl_fn_804515A8_00001D54
    lwz r5, 0x24(r15)
    mr r3, r16
    li r6, 0x1
    bl fn_80444CF8
    b lbl_fn_804515A8_00001DA0
lbl_fn_804515A8_00001D54:
    bl fn_802114D8
    mr r14, r3
    bl fn_80680CF8
    divw r0, r3, r14
    mullw r0, r0, r14
    subf r3, r0, r3
    bl fn_802114E0
    mr r14, r3
    bl fn_80680CF8
    lwz r5, 0x24(r15)
    li r6, 0x1
    lwz r4, 0x4(r14)
    slwi r0, r5, 2
    add r5, r0, r5
    divw r0, r3, r5
    mullw r0, r0, r5
    subf r5, r0, r3
    mr r3, r16
    bl fn_80444CF8
lbl_fn_804515A8_00001DA0:
    li r3, 0x1
lbl_fn_804515A8_00001DA4:
    li r0, 0x36a8
    addi r11, r1, 0x3680
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x36a0(r1)
    li r0, 0x3698
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x3690(r1)
    li r0, 0x3688
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x3680(r1)
    bl _restgpr_14
    lwz r0, 0x36b4(r1)
    mtlr r0
    addi r1, r1, 0x36b0
    blr
}
