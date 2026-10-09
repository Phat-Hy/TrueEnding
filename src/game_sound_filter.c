#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_800DD3FC(void);
extern void fn_801CFA5C(void);
extern void fn_801D80A0(void);
extern void fn_801D80B4(void);
extern void fn_801D9234(void);
extern void fn_801D923C(void);
extern void fn_801DA2F0(void);
extern void fn_801DA2F8(void);
extern void fn_801E27A8(void);
extern void fn_801E2D78(void);
extern void fn_801E4E64(void);
extern void fn_801E6374(void);
extern void fn_801E6384(void);
extern void fn_801E66F8(void);
extern void fn_801E6700(void);
extern void fn_80206B9C(void);
extern void fn_80206BE4(void);
extern void fn_80206C50(void);
extern void fn_80206D18(void);
extern void fn_8020EF80(void);
extern void fn_80211480(void);
extern void fn_802114D8(void);
extern void fn_802114E0(void);
extern void fn_80219544(void);
extern void fn_8044453C(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);

/* External data declarations */
extern u8 lbl_80782898[];

/* Small data declarations */
extern u32 lbl_8087DA88;
extern u32 lbl_8087DA8C;
extern u32 lbl_80882AF0;

/* Function declarations */
void fn_801DFFA4(void);
void fn_801E057C(void);
void fn_801E07A4(void);
void fn_801E0B0C(void);
void fn_801E18E0(void);

asm void fn_801DFFA4(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    stmw r25, 0x314(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r25, 0x0(r3)
    lwz r6, 0x0(r5)
    lwz r0, 0x8(r25)
    lwz r3, 0x8(r6)
    cmpw r3, r0
    bne lbl_fn_801DFFA4_0000007C
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    blt lbl_fn_801DFFA4_00000064
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801DFFA4_00000064
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DFFA4_0000015C
lbl_fn_801DFFA4_00000064:
    cmpwi r0, 0x0
    blt lbl_fn_801DFFA4_00000074
    li r0, 0x1
    b lbl_fn_801DFFA4_0000015C
lbl_fn_801DFFA4_00000074:
    li r0, 0x0
    b lbl_fn_801DFFA4_0000015C
lbl_fn_801DFFA4_0000007C:
    lwz r3, 0x0(r6)
    bl fn_8020EF80
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r25)
    bl fn_8020EF80
    bl fn_80211480
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r27)
    mr r26, r3
    addi r3, r1, 0x208
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x208
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801DFFA4_000000D0
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801DFFA4_000000D0:
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r26)
    addi r3, r1, 0x288
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x288
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801DFFA4_00000104
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801DFFA4_00000104:
    addi r3, r1, 0x208
    addi r4, r1, 0x288
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801DFFA4_0000014C
    lwz r3, 0x8(r27)
    bl fn_80686A48
    mr r25, r3
    lwz r3, 0x8(r26)
    bl fn_80686A48
    cmpw r25, r3
    beq lbl_fn_801DFFA4_0000014C
    xor r0, r3, r25
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_801DFFA4_0000015C
lbl_fn_801DFFA4_0000014C:
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r26)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_801DFFA4_0000015C:
    lwz r4, 0x0(r29)
    cntlzw r0, r0
    lwz r25, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x8(r4)
    lwz r0, 0x8(r25)
    cmpw r3, r0
    bne lbl_fn_801DFFA4_000001C4
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801DFFA4_000001AC
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801DFFA4_000001AC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DFFA4_000002A4
lbl_fn_801DFFA4_000001AC:
    cmpwi r0, 0x0
    blt lbl_fn_801DFFA4_000001BC
    li r0, 0x1
    b lbl_fn_801DFFA4_000002A4
lbl_fn_801DFFA4_000001BC:
    li r0, 0x0
    b lbl_fn_801DFFA4_000002A4
lbl_fn_801DFFA4_000001C4:
    lwz r3, 0x0(r4)
    bl fn_8020EF80
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r25)
    bl fn_8020EF80
    bl fn_80211480
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r27)
    mr r26, r3
    addi r3, r1, 0x108
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x108
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801DFFA4_00000218
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801DFFA4_00000218:
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r26)
    addi r3, r1, 0x188
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x188
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801DFFA4_0000024C
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801DFFA4_0000024C:
    addi r3, r1, 0x108
    addi r4, r1, 0x188
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801DFFA4_00000294
    lwz r3, 0x8(r27)
    bl fn_80686A48
    mr r25, r3
    lwz r3, 0x8(r26)
    bl fn_80686A48
    cmpw r25, r3
    beq lbl_fn_801DFFA4_00000294
    xor r0, r3, r25
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_801DFFA4_000002A4
lbl_fn_801DFFA4_00000294:
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r26)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_801DFFA4_000002A4:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_801DFFA4_000002BC
    cmpwi r0, 0x0
    bne lbl_fn_801DFFA4_000005C4
lbl_fn_801DFFA4_000002BC:
    cmpwi r31, 0x0
    bne lbl_fn_801DFFA4_00000338
    cmpwi r0, 0x0
    bne lbl_fn_801DFFA4_00000338
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r29)
    lwz r5, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r8, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
    b lbl_fn_801DFFA4_000005C4
lbl_fn_801DFFA4_00000338:
    lwz r26, 0x0(r28)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r26)
    lwz r3, 0x8(r4)
    cmpw r3, r0
    bne lbl_fn_801DFFA4_00000398
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801DFFA4_00000380
    lwz r4, 0xc(r26)
    cmpwi r4, 0x0
    blt lbl_fn_801DFFA4_00000380
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DFFA4_00000478
lbl_fn_801DFFA4_00000380:
    cmpwi r0, 0x0
    blt lbl_fn_801DFFA4_00000390
    li r0, 0x1
    b lbl_fn_801DFFA4_00000478
lbl_fn_801DFFA4_00000390:
    li r0, 0x0
    b lbl_fn_801DFFA4_00000478
lbl_fn_801DFFA4_00000398:
    lwz r3, 0x0(r4)
    bl fn_8020EF80
    bl fn_80211480
    mr r25, r3
    lwz r3, 0x0(r26)
    bl fn_8020EF80
    bl fn_80211480
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r25)
    mr r26, r3
    addi r3, r1, 0x8
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801DFFA4_000003EC
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801DFFA4_000003EC:
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r26)
    addi r3, r1, 0x88
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x88
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801DFFA4_00000420
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801DFFA4_00000420:
    addi r3, r1, 0x8
    addi r4, r1, 0x88
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801DFFA4_00000468
    lwz r3, 0x8(r25)
    bl fn_80686A48
    mr r27, r3
    lwz r3, 0x8(r26)
    bl fn_80686A48
    cmpw r27, r3
    beq lbl_fn_801DFFA4_00000468
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_801DFFA4_00000478
lbl_fn_801DFFA4_00000468:
    lwz r3, 0x8(r25)
    lwz r4, 0x8(r26)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_801DFFA4_00000478:
    cmpwi r0, 0x0
    beq lbl_fn_801DFFA4_000004E8
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r29)
    lwz r5, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r8, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
lbl_fn_801DFFA4_000004E8:
    cmpwi r31, 0x0
    beq lbl_fn_801DFFA4_0000055C
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lwz r5, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r8, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
    b lbl_fn_801DFFA4_000005C4
lbl_fn_801DFFA4_0000055C:
    lwz r4, 0x0(r28)
    lwz r3, 0x0(r30)
    lwz r5, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r8, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    stw r5, 0x0(r3)
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r8, 0xc(r3)
    stw r9, 0x10(r3)
    stw r10, 0x14(r3)
lbl_fn_801DFFA4_000005C4:
    lmw r25, 0x314(r1)
    lwz r0, 0x334(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_801E057C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stmw r21, 0x114(r1)
    mr r26, r3
    mr r27, r4
    lwz r0, 0x0(r3)
    lwz r3, 0x0(r4)
    cmplw r0, r3
    beq lbl_fn_801E057C_000007EC
    subi r24, r3, 0x18
    lis r30, lbl_80782898@ha
    li r31, 0x0
    b lbl_fn_801E057C_000007E0
lbl_fn_801E057C_00000610:
    lwz r29, 0x0(r26)
    lwz r28, 0x0(r27)
    cmplw r29, r28
    beq lbl_fn_801E057C_00000768
    addi r25, r29, 0x18
    b lbl_fn_801E057C_00000760
lbl_fn_801E057C_00000628:
    lwz r3, 0x8(r25)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801E057C_00000680
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    blt lbl_fn_801E057C_00000668
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E057C_00000668
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E057C_00000750
lbl_fn_801E057C_00000668:
    cmpwi r0, 0x0
    blt lbl_fn_801E057C_00000678
    li r0, 0x1
    b lbl_fn_801E057C_00000750
lbl_fn_801E057C_00000678:
    li r0, 0x0
    b lbl_fn_801E057C_00000750
lbl_fn_801E057C_00000680:
    lwz r3, 0x0(r25)
    bl fn_8020EF80
    bl fn_80211480
    mr r21, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    lwz r5, 0x8(r21)
    mr r22, r3
    addi r3, r1, 0x88
    addi r4, r30, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x88
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E057C_000006CC
    sth r31, 0x0(r3)
lbl_fn_801E057C_000006CC:
    lwz r5, 0x8(r22)
    addi r3, r1, 0x8
    addi r4, r30, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E057C_000006F8
    sth r31, 0x0(r3)
lbl_fn_801E057C_000006F8:
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801E057C_00000740
    lwz r3, 0x8(r21)
    bl fn_80686A48
    mr r23, r3
    lwz r3, 0x8(r22)
    bl fn_80686A48
    cmpw r23, r3
    beq lbl_fn_801E057C_00000740
    xor r0, r3, r23
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_801E057C_00000750
lbl_fn_801E057C_00000740:
    lwz r3, 0x8(r21)
    lwz r4, 0x8(r22)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_801E057C_00000750:
    cmpwi r0, 0x0
    beq lbl_fn_801E057C_0000075C
    mr r29, r25
lbl_fn_801E057C_0000075C:
    addi r25, r25, 0x18
lbl_fn_801E057C_00000760:
    cmplw r25, r28
    bne lbl_fn_801E057C_00000628
lbl_fn_801E057C_00000768:
    lwz r9, 0x0(r26)
    cmplw r29, r9
    beq lbl_fn_801E057C_000007D4
    lwz r3, 0x0(r29)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    lwz r6, 0xc(r29)
    lwz r7, 0x10(r29)
    lwz r8, 0x14(r29)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r29)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r29)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r29)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r29)
    stw r3, 0x0(r9)
    stw r4, 0x4(r9)
    stw r5, 0x8(r9)
    stw r6, 0xc(r9)
    stw r7, 0x10(r9)
    stw r8, 0x14(r9)
lbl_fn_801E057C_000007D4:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x18
    stw r0, 0x0(r26)
lbl_fn_801E057C_000007E0:
    lwz r0, 0x0(r26)
    cmplw r0, r24
    bne lbl_fn_801E057C_00000610
lbl_fn_801E057C_000007EC:
    lmw r21, 0x114(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_801E07A4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r21, 0x54(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    addi r3, r3, 0xb4c
    bl fn_801E6374
    addi r3, r29, 0xb58
    bl fn_801E6374
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801CFA5C
    mr r24, r3
    li r23, 0x0
    li r27, -0x1
    li r26, 0x0
    li r25, 0x1
    b lbl_fn_801E07A4_00000900
lbl_fn_801E07A4_00000854:
    lwz r3, 0x48(r29)
    mr r4, r23
    bl fn_801DA2F8
    mr r28, r3
    bl fn_801D80B4
    lwz r4, 0x0(r28)
    bl fn_801D80A0
    li r22, 0x0
lbl_fn_801E07A4_00000874:
    lwz r4, 0x0(r28)
    mr r3, r29
    mr r5, r22
    bl fn_801CFA5C
    mr r21, r3
    bl fn_80206BE4
    stw r21, 0x30(r1)
    stw r3, 0x34(r1)
    stw r27, 0x38(r1)
    stw r22, 0x44(r1)
    lwz r3, 0x0(r28)
    bl fn_80219544
    stw r3, 0x3c(r1)
    mr r3, r21
    mr r4, r30
    mr r5, r31
    stw r26, 0x40(r1)
    bl fn_80206D18
    cmpwi r3, 0x0
    beq lbl_fn_801E07A4_000008E4
    lwz r4, 0x0(r28)
    mr r3, r24
    mr r5, r22
    bl fn_80206D18
    cmpwi r3, 0x0
    beq lbl_fn_801E07A4_000008E4
    stw r25, 0x40(r1)
    stw r22, 0x44(r1)
lbl_fn_801E07A4_000008E4:
    addi r3, r29, 0xb58
    addi r4, r1, 0x30
    bl fn_801E6384
    addi r22, r22, 0x1
    cmpwi r22, 0x4
    blt lbl_fn_801E07A4_00000874
    addi r23, r23, 0x1
lbl_fn_801E07A4_00000900:
    lwz r3, 0x48(r29)
    bl fn_801DA2F0
    cmpw r23, r3
    blt lbl_fn_801E07A4_00000854
    li r21, 0x0
    li r27, -0x1
    li r28, 0x1
    b lbl_fn_801E07A4_00000A64
lbl_fn_801E07A4_00000920:
    bl fn_801D80B4
    cmpwi r3, 0x0
    beq lbl_fn_801E07A4_00000A60
    mr r3, r21
    bl fn_802114E0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_801E07A4_00000A60
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_801E07A4_00000A60
    lwz r3, 0x4(r25)
    bl fn_80206C50
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_801E07A4_00000A60
    mr r4, r30
    mr r5, r31
    bl fn_80206D18
    cmpwi r3, 0x0
    beq lbl_fn_801E07A4_00000A60
    li r23, 0x0
    li r24, 0x0
    b lbl_fn_801E07A4_000009AC
lbl_fn_801E07A4_00000984:
    mr r4, r24
    addi r3, r29, 0xb4c
    bl fn_801D923C
    lwz r3, 0x4(r3)
    lwz r0, 0x4(r25)
    cmpw r0, r3
    bne lbl_fn_801E07A4_000009A8
    li r23, 0x1
    b lbl_fn_801E07A4_000009BC
lbl_fn_801E07A4_000009A8:
    addi r24, r24, 0x1
lbl_fn_801E07A4_000009AC:
    addi r3, r29, 0xb4c
    bl fn_801D9234
    cmplw r24, r3
    blt lbl_fn_801E07A4_00000984
lbl_fn_801E07A4_000009BC:
    cmpwi r23, 0x0
    bne lbl_fn_801E07A4_00000A60
    li r23, 0x0
    b lbl_fn_801E07A4_00000A04
lbl_fn_801E07A4_000009CC:
    mr r4, r23
    addi r3, r29, 0xb58
    bl fn_801D923C
    lwz r3, 0x4(r3)
    lwz r0, 0x4(r25)
    cmpw r0, r3
    bne lbl_fn_801E07A4_00000A00
    mr r4, r23
    addi r3, r29, 0xb58
    bl fn_801D923C
    mr r4, r3
    addi r3, r29, 0xb4c
    bl fn_801E6384
lbl_fn_801E07A4_00000A00:
    addi r23, r23, 0x1
lbl_fn_801E07A4_00000A04:
    addi r3, r29, 0xb58
    bl fn_801D9234
    cmplw r23, r3
    blt lbl_fn_801E07A4_000009CC
    bl fn_801D80B4
    mr r4, r21
    bl fn_8044453C
    mr r26, r3
    li r23, 0x0
    b lbl_fn_801E07A4_00000A58
lbl_fn_801E07A4_00000A2C:
    stw r22, 0x30(r1)
    addi r3, r29, 0xb4c
    addi r4, r1, 0x30
    lwz r0, 0x4(r25)
    stw r0, 0x34(r1)
    stw r27, 0x38(r1)
    stw r27, 0x3c(r1)
    stw r28, 0x40(r1)
    stw r27, 0x44(r1)
    bl fn_801E6384
    addi r23, r23, 0x1
lbl_fn_801E07A4_00000A58:
    cmpw r23, r26
    blt lbl_fn_801E07A4_00000A2C
lbl_fn_801E07A4_00000A60:
    addi r21, r21, 0x1
lbl_fn_801E07A4_00000A64:
    bl fn_802114D8
    cmpw r21, r3
    blt lbl_fn_801E07A4_00000920
    lwz r0, 0xb80(r29)
    cmpwi r0, 0x1
    beq lbl_fn_801E07A4_00000A88
    cmpwi r0, 0x0
    beq lbl_fn_801E07A4_00000ABC
    b lbl_fn_801E07A4_00000B54
lbl_fn_801E07A4_00000A88:
    li r0, 0x0
    stb r0, 0x10(r1)
    addi r3, r29, 0xb4c
    bl fn_801E6700
    stw r3, 0x24(r1)
    addi r3, r29, 0xb4c
    bl fn_801E66F8
    stw r3, 0x28(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0x24
    addi r5, r1, 0x10
    bl fn_801E4E64
    b lbl_fn_801E07A4_00000B54
lbl_fn_801E07A4_00000ABC:
    cmpwi r30, 0x0
    beq lbl_fn_801E07A4_00000ADC
    cmpwi r30, 0x2
    beq lbl_fn_801E07A4_00000ADC
    cmpwi r30, 0x3
    beq lbl_fn_801E07A4_00000ADC
    cmpwi r30, 0x6
    bne lbl_fn_801E07A4_00000B10
lbl_fn_801E07A4_00000ADC:
    li r0, 0x0
    stb r0, 0xc(r1)
    addi r3, r29, 0xb4c
    bl fn_801E6700
    stw r3, 0x1c(r1)
    addi r3, r29, 0xb4c
    bl fn_801E66F8
    stw r3, 0x20(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    addi r5, r1, 0xc
    bl fn_801E2D78
    b lbl_fn_801E07A4_00000B54
lbl_fn_801E07A4_00000B10:
    cmpwi r30, 0x1
    beq lbl_fn_801E07A4_00000B24
    subi r0, r30, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_801E07A4_00000B54
lbl_fn_801E07A4_00000B24:
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r29, 0xb4c
    bl fn_801E6700
    stw r3, 0x14(r1)
    addi r3, r29, 0xb4c
    bl fn_801E66F8
    stw r3, 0x18(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_801E0B0C
lbl_fn_801E07A4_00000B54:
    lmw r21, 0x54(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801E0B0C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    bl _savegpr_22
    lis r31, 0x2aab
    lis r6, 0x6666
    lfs f31, lbl_80882AF0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r28, r6, 0x6667
    subi r27, r31, 0x5555
lbl_fn_801E0B0C_00000BA4:
    lwz r30, 0x0(r24)
    lwz r29, 0x0(r25)
    subf r0, r30, r29
    mulhw r0, r27, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_801E0B0C_0000191C
    cmpwi r7, 0x14
    bgt lbl_fn_801E0B0C_00000D88
    cmplw r30, r29
    beq lbl_fn_801E0B0C_0000191C
    subi r28, r29, 0x18
    cmplw r30, r28
    beq lbl_fn_801E0B0C_0000191C
    lfs f31, lbl_80882AF0
    b lbl_fn_801E0B0C_00000D7C
lbl_fn_801E0B0C_00000BEC:
    cmplw r30, r29
    mr r25, r30
    beq lbl_fn_801E0B0C_00000CF8
    addi r24, r30, 0x18
    b lbl_fn_801E0B0C_00000CF0
lbl_fn_801E0B0C_00000C00:
    lwz r3, 0x4(r24)
    lwz r0, 0x4(r25)
    cmpw r3, r0
    bne lbl_fn_801E0B0C_00000C80
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00000C68
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_00000C68
    cmpw r0, r4
    bne lbl_fn_801E0B0C_00000C50
    lwz r0, 0x14(r24)
    lwz r4, 0x14(r25)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00000CE0
lbl_fn_801E0B0C_00000C50:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00000CE0
lbl_fn_801E0B0C_00000C68:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00000C78
    li r0, 0x1
    b lbl_fn_801E0B0C_00000CE0
lbl_fn_801E0B0C_00000C78:
    li r0, 0x0
    b lbl_fn_801E0B0C_00000CE0
lbl_fn_801E0B0C_00000C80:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r24)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_00000CD4
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r25)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00000CE0
lbl_fn_801E0B0C_00000CD4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00000CE0:
    cmpwi r0, 0x0
    beq lbl_fn_801E0B0C_00000CEC
    mr r25, r24
lbl_fn_801E0B0C_00000CEC:
    addi r24, r24, 0x18
lbl_fn_801E0B0C_00000CF0:
    cmplw r24, r29
    bne lbl_fn_801E0B0C_00000C00
lbl_fn_801E0B0C_00000CF8:
    cmplw r25, r30
    beq lbl_fn_801E0B0C_00000D78
    lwz r8, 0x0(r25)
    lwz r7, 0x4(r25)
    lwz r6, 0x8(r25)
    lwz r5, 0xc(r25)
    lwz r4, 0x10(r25)
    lwz r3, 0x14(r25)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r25)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r25)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r25)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r25)
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r3, 0xb4(r1)
    stw r3, 0x14(r30)
lbl_fn_801E0B0C_00000D78:
    addi r30, r30, 0x18
lbl_fn_801E0B0C_00000D7C:
    cmplw r30, r28
    bne lbl_fn_801E0B0C_00000BEC
    b lbl_fn_801E0B0C_0000191C
lbl_fn_801E0B0C_00000D88:
    lwz r4, lbl_8087DA88
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r28, r4
    addi r8, r4, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r0, r30, r0
    blt lbl_fn_801E0B0C_00000DC8
    li r8, -0x4
lbl_fn_801E0B0C_00000DC8:
    mulhw r4, r28, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087DA88
    cmpwi r3, 0x5
    lwz r6, 0x0(r24)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_801E0B0C_00000E18
    li r8, -0x4
    stw r8, lbl_8087DA88
lbl_fn_801E0B0C_00000E18:
    lwz r5, 0x0(r25)
    mr r6, r26
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r29, r5, 0x18
    stw r29, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801E27A8
    lwz r23, 0x0(r24)
    mr r30, r29
    b lbl_fn_801E0B0C_00000E50
lbl_fn_801E0B0C_00000E4C:
    addi r23, r23, 0x18
lbl_fn_801E0B0C_00000E50:
    lwz r3, 0x4(r23)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E0B0C_00000ED0
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00000EB8
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_00000EB8
    cmpw r0, r4
    bne lbl_fn_801E0B0C_00000EA0
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00000F30
lbl_fn_801E0B0C_00000EA0:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00000F30
lbl_fn_801E0B0C_00000EB8:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00000EC8
    li r0, 0x1
    b lbl_fn_801E0B0C_00000F30
lbl_fn_801E0B0C_00000EC8:
    li r0, 0x0
    b lbl_fn_801E0B0C_00000F30
lbl_fn_801E0B0C_00000ED0:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_00000F24
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00000F30
lbl_fn_801E0B0C_00000F24:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00000F30:
    cmpwi r0, 0x0
    bne lbl_fn_801E0B0C_00000E4C
lbl_fn_801E0B0C_00000F38:
    subi r30, r30, 0x18
    cmplw r23, r30
    beq lbl_fn_801E0B0C_0000102C
    lwz r3, 0x4(r30)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E0B0C_00000FC4
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00000FAC
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_00000FAC
    cmpw r0, r4
    bne lbl_fn_801E0B0C_00000F94
    lwz r0, 0x14(r30)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001024
lbl_fn_801E0B0C_00000F94:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001024
lbl_fn_801E0B0C_00000FAC:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00000FBC
    li r0, 0x1
    b lbl_fn_801E0B0C_00001024
lbl_fn_801E0B0C_00000FBC:
    li r0, 0x0
    b lbl_fn_801E0B0C_00001024
lbl_fn_801E0B0C_00000FC4:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_00001018
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00001024
lbl_fn_801E0B0C_00001018:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00001024:
    cmpwi r0, 0x0
    beq lbl_fn_801E0B0C_00000F38
lbl_fn_801E0B0C_0000102C:
    cmplw r23, r30
    bge lbl_fn_801E0B0C_00001320
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x88(r1)
    stw r7, 0x8c(r1)
    stw r6, 0x90(r1)
    stw r5, 0x94(r1)
    stw r4, 0x98(r1)
    stw r3, 0x9c(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E0B0C_000010B8
lbl_fn_801E0B0C_000010B4:
    addi r23, r23, 0x18
lbl_fn_801E0B0C_000010B8:
    lwz r3, 0x4(r23)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E0B0C_00001138
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00001120
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_00001120
    cmpw r0, r4
    bne lbl_fn_801E0B0C_00001108
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001198
lbl_fn_801E0B0C_00001108:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001198
lbl_fn_801E0B0C_00001120:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00001130
    li r0, 0x1
    b lbl_fn_801E0B0C_00001198
lbl_fn_801E0B0C_00001130:
    li r0, 0x0
    b lbl_fn_801E0B0C_00001198
lbl_fn_801E0B0C_00001138:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_0000118C
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00001198
lbl_fn_801E0B0C_0000118C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00001198:
    cmpwi r0, 0x0
    bne lbl_fn_801E0B0C_000010B4
lbl_fn_801E0B0C_000011A0:
    subi r30, r30, 0x18
    lwz r0, 0x4(r29)
    lwz r3, 0x4(r30)
    cmpw r3, r0
    bne lbl_fn_801E0B0C_00001224
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_0000120C
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_0000120C
    cmpw r0, r4
    bne lbl_fn_801E0B0C_000011F4
    lwz r0, 0x14(r30)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001284
lbl_fn_801E0B0C_000011F4:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001284
lbl_fn_801E0B0C_0000120C:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_0000121C
    li r0, 0x1
    b lbl_fn_801E0B0C_00001284
lbl_fn_801E0B0C_0000121C:
    li r0, 0x0
    b lbl_fn_801E0B0C_00001284
lbl_fn_801E0B0C_00001224:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_00001278
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00001284
lbl_fn_801E0B0C_00001278:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00001284:
    cmpwi r0, 0x0
    beq lbl_fn_801E0B0C_000011A0
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801E0B0C_00001320
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r6, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r3, 0x84(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E0B0C_000010B8
lbl_fn_801E0B0C_00001320:
    lwz r6, 0x0(r24)
    cmplw r23, r6
    bne lbl_fn_801E0B0C_000018A4
    lwz r9, 0x0(r23)
    lwz r8, 0x4(r23)
    lwz r7, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r5, 0x10(r23)
    lwz r4, 0x14(r23)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r29)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r9, 0x0(r29)
    stw r8, 0x4(r29)
    stw r7, 0x8(r29)
    stw r6, 0xc(r29)
    stw r5, 0x10(r29)
    stw r4, 0x14(r29)
    lwz r3, 0x0(r25)
    lwz r10, 0x0(r24)
    subi r30, r3, 0x18
    stw r9, 0x58(r1)
    lwz r3, 0x4(r10)
    lwz r0, 0x4(r30)
    stw r8, 0x5c(r1)
    cmpw r3, r0
    stw r7, 0x60(r1)
    stw r6, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    bne lbl_fn_801E0B0C_00001434
    lwz r0, 0xc(r10)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_0000141C
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_0000141C
    cmpw r0, r4
    bne lbl_fn_801E0B0C_00001404
    lwz r0, 0x14(r10)
    lwz r4, 0x14(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001494
lbl_fn_801E0B0C_00001404:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001494
lbl_fn_801E0B0C_0000141C:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_0000142C
    li r0, 0x1
    b lbl_fn_801E0B0C_00001494
lbl_fn_801E0B0C_0000142C:
    li r0, 0x0
    b lbl_fn_801E0B0C_00001494
lbl_fn_801E0B0C_00001434:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r10)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_00001488
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00001494
lbl_fn_801E0B0C_00001488:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00001494:
    cmpwi r0, 0x0
    bne lbl_fn_801E0B0C_0000161C
    b lbl_fn_801E0B0C_000014A4
lbl_fn_801E0B0C_000014A0:
    addi r23, r23, 0x18
lbl_fn_801E0B0C_000014A4:
    lwz r0, 0x0(r25)
    cmplw r23, r0
    beq lbl_fn_801E0B0C_0000159C
    lwz r5, 0x0(r24)
    lwz r0, 0x4(r23)
    lwz r3, 0x4(r5)
    cmpw r3, r0
    bne lbl_fn_801E0B0C_00001534
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_0000151C
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_0000151C
    cmpw r0, r4
    bne lbl_fn_801E0B0C_00001504
    lwz r0, 0x14(r5)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001594
lbl_fn_801E0B0C_00001504:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001594
lbl_fn_801E0B0C_0000151C:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_0000152C
    li r0, 0x1
    b lbl_fn_801E0B0C_00001594
lbl_fn_801E0B0C_0000152C:
    li r0, 0x0
    b lbl_fn_801E0B0C_00001594
lbl_fn_801E0B0C_00001534:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_00001588
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00001594
lbl_fn_801E0B0C_00001588:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00001594:
    cmpwi r0, 0x0
    beq lbl_fn_801E0B0C_000014A0
lbl_fn_801E0B0C_0000159C:
    cmplw r23, r30
    bge lbl_fn_801E0B0C_0000161C
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x40(r1)
    stw r7, 0x44(r1)
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    stw r3, 0x14(r30)
lbl_fn_801E0B0C_0000161C:
    cmplw r23, r30
    bge lbl_fn_801E0B0C_0000189C
    b lbl_fn_801E0B0C_0000162C
lbl_fn_801E0B0C_00001628:
    addi r23, r23, 0x18
lbl_fn_801E0B0C_0000162C:
    lwz r5, 0x0(r24)
    lwz r0, 0x4(r23)
    lwz r3, 0x4(r5)
    cmpw r3, r0
    bne lbl_fn_801E0B0C_000016B0
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00001698
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_00001698
    cmpw r0, r4
    bne lbl_fn_801E0B0C_00001680
    lwz r0, 0x14(r5)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001710
lbl_fn_801E0B0C_00001680:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001710
lbl_fn_801E0B0C_00001698:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_000016A8
    li r0, 0x1
    b lbl_fn_801E0B0C_00001710
lbl_fn_801E0B0C_000016A8:
    li r0, 0x0
    b lbl_fn_801E0B0C_00001710
lbl_fn_801E0B0C_000016B0:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_00001704
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00001710
lbl_fn_801E0B0C_00001704:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00001710:
    cmpwi r0, 0x0
    beq lbl_fn_801E0B0C_00001628
lbl_fn_801E0B0C_00001718:
    lwz r5, 0x0(r24)
    subi r30, r30, 0x18
    lwz r0, 0x4(r30)
    lwz r3, 0x4(r5)
    cmpw r3, r0
    bne lbl_fn_801E0B0C_000017A0
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00001788
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801E0B0C_00001788
    cmpw r0, r4
    bne lbl_fn_801E0B0C_00001770
    lwz r0, 0x14(r5)
    lwz r4, 0x14(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001800
lbl_fn_801E0B0C_00001770:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E0B0C_00001800
lbl_fn_801E0B0C_00001788:
    cmpwi r0, 0x0
    blt lbl_fn_801E0B0C_00001798
    li r0, 0x1
    b lbl_fn_801E0B0C_00001800
lbl_fn_801E0B0C_00001798:
    li r0, 0x0
    b lbl_fn_801E0B0C_00001800
lbl_fn_801E0B0C_000017A0:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E0B0C_000017F4
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E0B0C_00001800
lbl_fn_801E0B0C_000017F4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E0B0C_00001800:
    cmpwi r0, 0x0
    bne lbl_fn_801E0B0C_00001718
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801E0B0C_0000189C
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x28(r1)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E0B0C_0000162C
lbl_fn_801E0B0C_0000189C:
    stw r23, 0x0(r24)
    b lbl_fn_801E0B0C_00000BA4
lbl_fn_801E0B0C_000018A4:
    lwz r3, 0x0(r25)
    subf r0, r6, r23
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r23, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_801E0B0C_000018FC
    stw r23, 0x10(r1)
    mr r5, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_801E18E0
    stw r23, 0x0(r24)
    b lbl_fn_801E0B0C_00000BA4
lbl_fn_801E0B0C_000018FC:
    stw r3, 0x8(r1)
    mr r5, r26
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r23, 0xc(r1)
    bl fn_801E18E0
    stw r23, 0x0(r25)
    b lbl_fn_801E0B0C_00000BA4
lbl_fn_801E0B0C_0000191C:
    addi r11, r1, 0xe0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_801E18E0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    bl _savegpr_22
    lis r31, 0x2aab
    lis r6, 0x6666
    lfs f31, lbl_80882AF0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r28, r6, 0x6667
    subi r27, r31, 0x5555
lbl_fn_801E18E0_00001978:
    lwz r30, 0x0(r24)
    lwz r29, 0x0(r25)
    subf r0, r30, r29
    mulhw r0, r27, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_801E18E0_000026F0
    cmpwi r7, 0x14
    bgt lbl_fn_801E18E0_00001B5C
    cmplw r30, r29
    beq lbl_fn_801E18E0_000026F0
    subi r28, r29, 0x18
    cmplw r30, r28
    beq lbl_fn_801E18E0_000026F0
    lfs f31, lbl_80882AF0
    b lbl_fn_801E18E0_00001B50
lbl_fn_801E18E0_000019C0:
    cmplw r30, r29
    mr r25, r30
    beq lbl_fn_801E18E0_00001ACC
    addi r24, r30, 0x18
    b lbl_fn_801E18E0_00001AC4
lbl_fn_801E18E0_000019D4:
    lwz r3, 0x4(r24)
    lwz r0, 0x4(r25)
    cmpw r3, r0
    bne lbl_fn_801E18E0_00001A54
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001A3C
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_00001A3C
    cmpw r0, r4
    bne lbl_fn_801E18E0_00001A24
    lwz r0, 0x14(r24)
    lwz r4, 0x14(r25)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00001AB4
lbl_fn_801E18E0_00001A24:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00001AB4
lbl_fn_801E18E0_00001A3C:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001A4C
    li r0, 0x1
    b lbl_fn_801E18E0_00001AB4
lbl_fn_801E18E0_00001A4C:
    li r0, 0x0
    b lbl_fn_801E18E0_00001AB4
lbl_fn_801E18E0_00001A54:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r24)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_00001AA8
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r25)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_00001AB4
lbl_fn_801E18E0_00001AA8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_00001AB4:
    cmpwi r0, 0x0
    beq lbl_fn_801E18E0_00001AC0
    mr r25, r24
lbl_fn_801E18E0_00001AC0:
    addi r24, r24, 0x18
lbl_fn_801E18E0_00001AC4:
    cmplw r24, r29
    bne lbl_fn_801E18E0_000019D4
lbl_fn_801E18E0_00001ACC:
    cmplw r25, r30
    beq lbl_fn_801E18E0_00001B4C
    lwz r8, 0x0(r25)
    lwz r7, 0x4(r25)
    lwz r6, 0x8(r25)
    lwz r5, 0xc(r25)
    lwz r4, 0x10(r25)
    lwz r3, 0x14(r25)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r25)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r25)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r25)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r25)
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r3, 0xb4(r1)
    stw r3, 0x14(r30)
lbl_fn_801E18E0_00001B4C:
    addi r30, r30, 0x18
lbl_fn_801E18E0_00001B50:
    cmplw r30, r28
    bne lbl_fn_801E18E0_000019C0
    b lbl_fn_801E18E0_000026F0
lbl_fn_801E18E0_00001B5C:
    lwz r4, lbl_8087DA8C
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r28, r4
    addi r8, r4, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r0, r30, r0
    blt lbl_fn_801E18E0_00001B9C
    li r8, -0x4
lbl_fn_801E18E0_00001B9C:
    mulhw r4, r28, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087DA8C
    cmpwi r3, 0x5
    lwz r6, 0x0(r24)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_801E18E0_00001BEC
    li r8, -0x4
    stw r8, lbl_8087DA8C
lbl_fn_801E18E0_00001BEC:
    lwz r5, 0x0(r25)
    mr r6, r26
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r29, r5, 0x18
    stw r29, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801E27A8
    lwz r23, 0x0(r24)
    mr r30, r29
    b lbl_fn_801E18E0_00001C24
lbl_fn_801E18E0_00001C20:
    addi r23, r23, 0x18
lbl_fn_801E18E0_00001C24:
    lwz r3, 0x4(r23)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E18E0_00001CA4
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001C8C
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_00001C8C
    cmpw r0, r4
    bne lbl_fn_801E18E0_00001C74
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00001D04
lbl_fn_801E18E0_00001C74:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00001D04
lbl_fn_801E18E0_00001C8C:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001C9C
    li r0, 0x1
    b lbl_fn_801E18E0_00001D04
lbl_fn_801E18E0_00001C9C:
    li r0, 0x0
    b lbl_fn_801E18E0_00001D04
lbl_fn_801E18E0_00001CA4:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_00001CF8
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_00001D04
lbl_fn_801E18E0_00001CF8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_00001D04:
    cmpwi r0, 0x0
    bne lbl_fn_801E18E0_00001C20
lbl_fn_801E18E0_00001D0C:
    subi r30, r30, 0x18
    cmplw r23, r30
    beq lbl_fn_801E18E0_00001E00
    lwz r3, 0x4(r30)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E18E0_00001D98
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001D80
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_00001D80
    cmpw r0, r4
    bne lbl_fn_801E18E0_00001D68
    lwz r0, 0x14(r30)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00001DF8
lbl_fn_801E18E0_00001D68:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00001DF8
lbl_fn_801E18E0_00001D80:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001D90
    li r0, 0x1
    b lbl_fn_801E18E0_00001DF8
lbl_fn_801E18E0_00001D90:
    li r0, 0x0
    b lbl_fn_801E18E0_00001DF8
lbl_fn_801E18E0_00001D98:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_00001DEC
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_00001DF8
lbl_fn_801E18E0_00001DEC:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_00001DF8:
    cmpwi r0, 0x0
    beq lbl_fn_801E18E0_00001D0C
lbl_fn_801E18E0_00001E00:
    cmplw r23, r30
    bge lbl_fn_801E18E0_000020F4
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x88(r1)
    stw r7, 0x8c(r1)
    stw r6, 0x90(r1)
    stw r5, 0x94(r1)
    stw r4, 0x98(r1)
    stw r3, 0x9c(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E18E0_00001E8C
lbl_fn_801E18E0_00001E88:
    addi r23, r23, 0x18
lbl_fn_801E18E0_00001E8C:
    lwz r3, 0x4(r23)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E18E0_00001F0C
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001EF4
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_00001EF4
    cmpw r0, r4
    bne lbl_fn_801E18E0_00001EDC
    lwz r0, 0x14(r23)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00001F6C
lbl_fn_801E18E0_00001EDC:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00001F6C
lbl_fn_801E18E0_00001EF4:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001F04
    li r0, 0x1
    b lbl_fn_801E18E0_00001F6C
lbl_fn_801E18E0_00001F04:
    li r0, 0x0
    b lbl_fn_801E18E0_00001F6C
lbl_fn_801E18E0_00001F0C:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_00001F60
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_00001F6C
lbl_fn_801E18E0_00001F60:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_00001F6C:
    cmpwi r0, 0x0
    bne lbl_fn_801E18E0_00001E88
lbl_fn_801E18E0_00001F74:
    subi r30, r30, 0x18
    lwz r0, 0x4(r29)
    lwz r3, 0x4(r30)
    cmpw r3, r0
    bne lbl_fn_801E18E0_00001FF8
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001FE0
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_00001FE0
    cmpw r0, r4
    bne lbl_fn_801E18E0_00001FC8
    lwz r0, 0x14(r30)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00002058
lbl_fn_801E18E0_00001FC8:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00002058
lbl_fn_801E18E0_00001FE0:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00001FF0
    li r0, 0x1
    b lbl_fn_801E18E0_00002058
lbl_fn_801E18E0_00001FF0:
    li r0, 0x0
    b lbl_fn_801E18E0_00002058
lbl_fn_801E18E0_00001FF8:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_0000204C
    bl fn_80206BE4
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_00002058
lbl_fn_801E18E0_0000204C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_00002058:
    cmpwi r0, 0x0
    beq lbl_fn_801E18E0_00001F74
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801E18E0_000020F4
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x70(r1)
    stw r7, 0x74(r1)
    stw r6, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r3, 0x84(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E18E0_00001E8C
lbl_fn_801E18E0_000020F4:
    lwz r6, 0x0(r24)
    cmplw r23, r6
    bne lbl_fn_801E18E0_00002678
    lwz r9, 0x0(r23)
    lwz r8, 0x4(r23)
    lwz r7, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r5, 0x10(r23)
    lwz r4, 0x14(r23)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r29)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r9, 0x0(r29)
    stw r8, 0x4(r29)
    stw r7, 0x8(r29)
    stw r6, 0xc(r29)
    stw r5, 0x10(r29)
    stw r4, 0x14(r29)
    lwz r3, 0x0(r25)
    lwz r10, 0x0(r24)
    subi r30, r3, 0x18
    stw r9, 0x58(r1)
    lwz r3, 0x4(r10)
    lwz r0, 0x4(r30)
    stw r8, 0x5c(r1)
    cmpw r3, r0
    stw r7, 0x60(r1)
    stw r6, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    bne lbl_fn_801E18E0_00002208
    lwz r0, 0xc(r10)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_000021F0
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_000021F0
    cmpw r0, r4
    bne lbl_fn_801E18E0_000021D8
    lwz r0, 0x14(r10)
    lwz r4, 0x14(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00002268
lbl_fn_801E18E0_000021D8:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00002268
lbl_fn_801E18E0_000021F0:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00002200
    li r0, 0x1
    b lbl_fn_801E18E0_00002268
lbl_fn_801E18E0_00002200:
    li r0, 0x0
    b lbl_fn_801E18E0_00002268
lbl_fn_801E18E0_00002208:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r10)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_0000225C
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_00002268
lbl_fn_801E18E0_0000225C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_00002268:
    cmpwi r0, 0x0
    bne lbl_fn_801E18E0_000023F0
    b lbl_fn_801E18E0_00002278
lbl_fn_801E18E0_00002274:
    addi r23, r23, 0x18
lbl_fn_801E18E0_00002278:
    lwz r0, 0x0(r25)
    cmplw r23, r0
    beq lbl_fn_801E18E0_00002370
    lwz r5, 0x0(r24)
    lwz r0, 0x4(r23)
    lwz r3, 0x4(r5)
    cmpw r3, r0
    bne lbl_fn_801E18E0_00002308
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_000022F0
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_000022F0
    cmpw r0, r4
    bne lbl_fn_801E18E0_000022D8
    lwz r0, 0x14(r5)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00002368
lbl_fn_801E18E0_000022D8:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_00002368
lbl_fn_801E18E0_000022F0:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_00002300
    li r0, 0x1
    b lbl_fn_801E18E0_00002368
lbl_fn_801E18E0_00002300:
    li r0, 0x0
    b lbl_fn_801E18E0_00002368
lbl_fn_801E18E0_00002308:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_0000235C
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_00002368
lbl_fn_801E18E0_0000235C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_00002368:
    cmpwi r0, 0x0
    beq lbl_fn_801E18E0_00002274
lbl_fn_801E18E0_00002370:
    cmplw r23, r30
    bge lbl_fn_801E18E0_000023F0
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x40(r1)
    stw r7, 0x44(r1)
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    stw r3, 0x14(r30)
lbl_fn_801E18E0_000023F0:
    cmplw r23, r30
    bge lbl_fn_801E18E0_00002670
    b lbl_fn_801E18E0_00002400
lbl_fn_801E18E0_000023FC:
    addi r23, r23, 0x18
lbl_fn_801E18E0_00002400:
    lwz r5, 0x0(r24)
    lwz r0, 0x4(r23)
    lwz r3, 0x4(r5)
    cmpw r3, r0
    bne lbl_fn_801E18E0_00002484
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_0000246C
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_0000246C
    cmpw r0, r4
    bne lbl_fn_801E18E0_00002454
    lwz r0, 0x14(r5)
    lwz r4, 0x14(r23)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_000024E4
lbl_fn_801E18E0_00002454:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_000024E4
lbl_fn_801E18E0_0000246C:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_0000247C
    li r0, 0x1
    b lbl_fn_801E18E0_000024E4
lbl_fn_801E18E0_0000247C:
    li r0, 0x0
    b lbl_fn_801E18E0_000024E4
lbl_fn_801E18E0_00002484:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_000024D8
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_000024E4
lbl_fn_801E18E0_000024D8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_000024E4:
    cmpwi r0, 0x0
    beq lbl_fn_801E18E0_000023FC
lbl_fn_801E18E0_000024EC:
    lwz r5, 0x0(r24)
    subi r30, r30, 0x18
    lwz r0, 0x4(r30)
    lwz r3, 0x4(r5)
    cmpw r3, r0
    bne lbl_fn_801E18E0_00002574
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_0000255C
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801E18E0_0000255C
    cmpw r0, r4
    bne lbl_fn_801E18E0_00002544
    lwz r0, 0x14(r5)
    lwz r4, 0x14(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_000025D4
lbl_fn_801E18E0_00002544:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E18E0_000025D4
lbl_fn_801E18E0_0000255C:
    cmpwi r0, 0x0
    blt lbl_fn_801E18E0_0000256C
    li r0, 0x1
    b lbl_fn_801E18E0_000025D4
lbl_fn_801E18E0_0000256C:
    li r0, 0x0
    b lbl_fn_801E18E0_000025D4
lbl_fn_801E18E0_00002574:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0x4(r4)
    lfs f1, 0x4(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801E18E0_000025C8
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E18E0_000025D4
lbl_fn_801E18E0_000025C8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E18E0_000025D4:
    cmpwi r0, 0x0
    bne lbl_fn_801E18E0_000024EC
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801E18E0_00002670
    lwz r8, 0x0(r23)
    lwz r7, 0x4(r23)
    lwz r6, 0x8(r23)
    lwz r5, 0xc(r23)
    lwz r4, 0x10(r23)
    lwz r3, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r8, 0x0(r30)
    stw r7, 0x4(r30)
    stw r6, 0x8(r30)
    stw r5, 0xc(r30)
    stw r4, 0x10(r30)
    stw r8, 0x28(r1)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r3, 0x14(r30)
    b lbl_fn_801E18E0_00002400
lbl_fn_801E18E0_00002670:
    stw r23, 0x0(r24)
    b lbl_fn_801E18E0_00001978
lbl_fn_801E18E0_00002678:
    lwz r3, 0x0(r25)
    subf r0, r6, r23
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r23, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_801E18E0_000026D0
    stw r23, 0x10(r1)
    mr r5, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_801E18E0
    stw r23, 0x0(r24)
    b lbl_fn_801E18E0_00001978
lbl_fn_801E18E0_000026D0:
    stw r3, 0x8(r1)
    mr r5, r26
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r23, 0xc(r1)
    bl fn_801E18E0
    stw r23, 0x0(r25)
    b lbl_fn_801E18E0_00001978
lbl_fn_801E18E0_000026F0:
    addi r11, r1, 0xe0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
