#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800DD3FC(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_80590AAC(void);
extern void fn_80591508(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);

/* External data declarations */
extern u8 lbl_80796ACC[];

/* Small data declarations */
extern u32 lbl_8087E6B4;
extern u32 lbl_8087E6B8;
extern u32 lbl_80888160;

/* Function declarations */
void fn_8058ECD8(void);
void fn_8058ECF0(void);
void fn_8058ED10(void);
void fn_8058ED2C(void);
void fn_8058EEF0(void);
void fn_8058EF0C(void);
void fn_8058FAD4(void);
void fn_8058FE90(void);
void fn_8058FEB8(void);
void fn_8058FEC8(void);
void fn_8058FED4(void);
void fn_8058FEE8(void);
void fn_8058FEF4(void);
void fn_8058FF04(void);
void fn_8058FF0C(void);
void fn_8058FF1C(void);
void fn_8059044C(void);
void fn_8059057C(void);

asm void fn_8058ECD8(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8058ECF0(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r3, 0x0(r4)
    subf r0, r3, r5
    orc r3, r5, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8058ED10(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    lwz r3, 0x0(r4)
    xor r0, r3, r0
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_8058ED2C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    stmw r17, 0x64(r1)
    lwz r20, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r19, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r21, 0x8(r3)
    lwz r22, 0xc(r3)
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    lwz r23, 0x10(r3)
    stw r5, 0x8(r3)
    lwz r24, 0x14(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    lwz r25, 0x18(r3)
    lwz r26, 0x1c(r3)
    stw r5, 0x10(r3)
    lwz r27, 0x20(r3)
    stw r0, 0x14(r3)
    lwz r28, 0x24(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    lwz r29, 0x28(r3)
    lwz r30, 0x2c(r3)
    stw r5, 0x18(r3)
    lwz r31, 0x30(r3)
    stw r0, 0x1c(r3)
    lwz r12, 0x34(r3)
    lwz r5, 0x20(r4)
    lwz r0, 0x24(r4)
    lwz r11, 0x38(r3)
    lwz r10, 0x3c(r3)
    stw r5, 0x20(r3)
    lwz r9, 0x40(r3)
    stw r0, 0x24(r3)
    lwz r8, 0x44(r3)
    lwz r7, 0x48(r3)
    lwz r5, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r0, 0x2c(r3)
    lwz r6, 0x4c(r3)
    stw r5, 0x28(r3)
    lwz r5, 0x50(r3)
    lwz r18, 0x30(r4)
    lwz r17, 0x34(r4)
    lwz r0, 0x54(r3)
    stw r17, 0x34(r3)
    stw r18, 0x30(r3)
    lwz r18, 0x38(r4)
    lwz r17, 0x3c(r4)
    stw r17, 0x3c(r3)
    stw r18, 0x38(r3)
    lwz r17, 0x40(r4)
    lwz r18, 0x44(r4)
    stw r18, 0x44(r3)
    stw r17, 0x40(r3)
    lwz r18, 0x48(r4)
    stw r18, 0x48(r3)
    lwz r18, 0x4c(r4)
    stw r18, 0x4c(r3)
    lwz r18, 0x50(r4)
    stw r18, 0x50(r3)
    lwz r18, 0x54(r4)
    stw r18, 0x54(r3)
    stw r21, 0x10(r1)
    stw r22, 0x14(r1)
    stw r23, 0x18(r1)
    stw r24, 0x1c(r1)
    stw r25, 0x20(r1)
    stw r26, 0x24(r1)
    stw r27, 0x28(r1)
    stw r28, 0x2c(r1)
    stw r29, 0x30(r1)
    stw r30, 0x34(r1)
    stw r31, 0x38(r1)
    stw r12, 0x3c(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r20, 0x0(r4)
    stw r19, 0x4(r4)
    stw r21, 0x8(r4)
    stw r22, 0xc(r4)
    stw r23, 0x10(r4)
    stw r24, 0x14(r4)
    stw r25, 0x18(r4)
    stw r26, 0x1c(r4)
    stw r27, 0x20(r4)
    stw r28, 0x24(r4)
    stw r29, 0x28(r4)
    stw r30, 0x2c(r4)
    stw r31, 0x30(r4)
    stw r12, 0x34(r4)
    stw r11, 0x38(r4)
    stw r10, 0x3c(r4)
    stw r9, 0x40(r4)
    stw r8, 0x44(r4)
    stw r7, 0x48(r4)
    stw r6, 0x4c(r4)
    stw r5, 0x50(r4)
    stw r0, 0x54(r4)
    lmw r17, 0x64(r1)
    addi r1, r1, 0xa0
    blr
}

asm void fn_8058EEF0(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_8058EF0C(void)
{
    nofralloc
    stwu r1, -0x4c0(r1)
    mflr r0
    stw r0, 0x4c4(r1)
    stmw r14, 0x478(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r16, 0x0(r5)
    lwz r15, 0x0(r3)
    lwz r3, 0x0(r16)
    bl fn_8020EFEC
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_8020EFEC
    cmpwi r14, 0x0
    beq lbl_fn_8058EF0C_00000284
    cmpwi r3, 0x0
    bne lbl_fn_8058EF0C_00000284
    li r0, 0x1
    b lbl_fn_8058EF0C_000003C8
lbl_fn_8058EF0C_00000284:
    cmpwi r14, 0x0
    bne lbl_fn_8058EF0C_0000029C
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_0000029C
    li r0, 0x0
    b lbl_fn_8058EF0C_000003C8
lbl_fn_8058EF0C_0000029C:
    lwz r3, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r3, r0
    bne lbl_fn_8058EF0C_000002F4
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_8058EF0C_000002DC
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_8058EF0C_000002DC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8058EF0C_000003C8
lbl_fn_8058EF0C_000002DC:
    cmpwi r0, 0x0
    blt lbl_fn_8058EF0C_000002EC
    li r0, 0x1
    b lbl_fn_8058EF0C_000003C8
lbl_fn_8058EF0C_000002EC:
    li r0, 0x0
    b lbl_fn_8058EF0C_000003C8
lbl_fn_8058EF0C_000002F4:
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r16)
    mr r15, r3
    addi r3, r1, 0x368
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x368
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_0000033C
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8058EF0C_0000033C:
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r15)
    addi r3, r1, 0x3e8
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x3e8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_00000370
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8058EF0C_00000370:
    addi r3, r1, 0x368
    addi r4, r1, 0x3e8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8058EF0C_000003B8
    lwz r3, 0x8(r16)
    bl fn_80686A48
    mr r14, r3
    lwz r3, 0x8(r15)
    bl fn_80686A48
    cmpw r14, r3
    beq lbl_fn_8058EF0C_000003B8
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8058EF0C_000003C8
lbl_fn_8058EF0C_000003B8:
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r15)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_8058EF0C_000003C8:
    lwz r16, 0x0(r29)
    cntlzw r0, r0
    lwz r15, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x0(r16)
    bl fn_8020EFEC
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_8020EFEC
    cmpwi r14, 0x0
    beq lbl_fn_8058EF0C_00000404
    cmpwi r3, 0x0
    bne lbl_fn_8058EF0C_00000404
    li r0, 0x1
    b lbl_fn_8058EF0C_00000548
lbl_fn_8058EF0C_00000404:
    cmpwi r14, 0x0
    bne lbl_fn_8058EF0C_0000041C
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_0000041C
    li r0, 0x0
    b lbl_fn_8058EF0C_00000548
lbl_fn_8058EF0C_0000041C:
    lwz r3, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r3, r0
    bne lbl_fn_8058EF0C_00000474
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_8058EF0C_0000045C
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_8058EF0C_0000045C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8058EF0C_00000548
lbl_fn_8058EF0C_0000045C:
    cmpwi r0, 0x0
    blt lbl_fn_8058EF0C_0000046C
    li r0, 0x1
    b lbl_fn_8058EF0C_00000548
lbl_fn_8058EF0C_0000046C:
    li r0, 0x0
    b lbl_fn_8058EF0C_00000548
lbl_fn_8058EF0C_00000474:
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r16)
    mr r15, r3
    addi r3, r1, 0x268
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x268
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_000004BC
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8058EF0C_000004BC:
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r15)
    addi r3, r1, 0x2e8
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x2e8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_000004F0
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8058EF0C_000004F0:
    addi r3, r1, 0x268
    addi r4, r1, 0x2e8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8058EF0C_00000538
    lwz r3, 0x8(r16)
    bl fn_80686A48
    mr r14, r3
    lwz r3, 0x8(r15)
    bl fn_80686A48
    cmpw r14, r3
    beq lbl_fn_8058EF0C_00000538
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8058EF0C_00000548
lbl_fn_8058EF0C_00000538:
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r15)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_8058EF0C_00000548:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_8058EF0C_00000560
    cmpwi r0, 0x0
    bne lbl_fn_8058EF0C_00000DE8
lbl_fn_8058EF0C_00000560:
    cmpwi r31, 0x0
    bne lbl_fn_8058EF0C_0000072C
    cmpwi r0, 0x0
    bne lbl_fn_8058EF0C_0000072C
    lwz r24, 0x0(r28)
    lwz r23, 0x0(r29)
    lwz r22, 0x8(r24)
    lwz r21, 0xc(r24)
    lwz r20, 0x10(r24)
    lwz r19, 0x14(r24)
    lwz r18, 0x18(r24)
    lwz r17, 0x1c(r24)
    lwz r16, 0x20(r24)
    lwz r15, 0x24(r24)
    lwz r14, 0x28(r24)
    lwz r12, 0x2c(r24)
    lwz r11, 0x30(r24)
    lwz r10, 0x34(r24)
    lwz r9, 0x38(r24)
    lwz r8, 0x3c(r24)
    lwz r7, 0x40(r24)
    lwz r6, 0x44(r24)
    lwz r5, 0x48(r24)
    lwz r4, 0x4c(r24)
    lwz r3, 0x50(r24)
    lwz r0, 0x54(r24)
    lwz r25, 0x0(r24)
    lwz r26, 0x4(r24)
    lwz r27, 0x0(r23)
    stw r27, 0x0(r24)
    lwz r27, 0x4(r23)
    stw r27, 0x4(r24)
    lwz r27, 0xc(r23)
    lwz r28, 0x8(r23)
    stw r28, 0x8(r24)
    stw r27, 0xc(r24)
    lwz r27, 0x14(r23)
    lwz r28, 0x10(r23)
    stw r28, 0x10(r24)
    stw r27, 0x14(r24)
    lwz r27, 0x1c(r23)
    lwz r28, 0x18(r23)
    stw r28, 0x18(r24)
    stw r27, 0x1c(r24)
    lwz r27, 0x24(r23)
    lwz r28, 0x20(r23)
    stw r28, 0x20(r24)
    stw r27, 0x24(r24)
    lwz r27, 0x2c(r23)
    lwz r28, 0x28(r23)
    stw r28, 0x28(r24)
    stw r27, 0x2c(r24)
    lwz r27, 0x34(r23)
    lwz r28, 0x30(r23)
    stw r28, 0x30(r24)
    stw r27, 0x34(r24)
    lwz r27, 0x3c(r23)
    lwz r28, 0x38(r23)
    stw r28, 0x38(r24)
    stw r27, 0x3c(r24)
    lwz r27, 0x44(r23)
    lwz r28, 0x40(r23)
    stw r28, 0x40(r24)
    stw r27, 0x44(r24)
    lwz r27, 0x48(r23)
    stw r27, 0x48(r24)
    lwz r27, 0x4c(r23)
    stw r27, 0x4c(r24)
    lwz r27, 0x50(r23)
    stw r27, 0x50(r24)
    lwz r27, 0x54(r23)
    stw r27, 0x54(r24)
    stw r25, 0x0(r23)
    stw r26, 0x4(r23)
    stw r22, 0x8(r23)
    stw r21, 0xc(r23)
    stw r20, 0x10(r23)
    stw r19, 0x14(r23)
    stw r18, 0x18(r23)
    stw r17, 0x1c(r23)
    stw r16, 0x20(r23)
    stw r15, 0x24(r23)
    stw r14, 0x28(r23)
    stw r12, 0x2c(r23)
    stw r11, 0x30(r23)
    stw r10, 0x34(r23)
    stw r9, 0x38(r23)
    stw r8, 0x3c(r23)
    stw r7, 0x40(r23)
    stw r22, 0x218(r1)
    stw r21, 0x21c(r1)
    stw r20, 0x220(r1)
    stw r19, 0x224(r1)
    stw r18, 0x228(r1)
    stw r17, 0x22c(r1)
    stw r16, 0x230(r1)
    stw r15, 0x234(r1)
    stw r14, 0x238(r1)
    stw r12, 0x23c(r1)
    stw r11, 0x240(r1)
    stw r10, 0x244(r1)
    stw r9, 0x248(r1)
    stw r8, 0x24c(r1)
    stw r7, 0x250(r1)
    stw r6, 0x254(r1)
    stw r5, 0x258(r1)
    stw r4, 0x25c(r1)
    stw r3, 0x260(r1)
    stw r0, 0x264(r1)
    stw r6, 0x44(r23)
    stw r5, 0x48(r23)
    stw r4, 0x4c(r23)
    stw r3, 0x50(r23)
    stw r0, 0x54(r23)
    b lbl_fn_8058EF0C_00000DE8
lbl_fn_8058EF0C_0000072C:
    lwz r16, 0x0(r29)
    lwz r15, 0x0(r28)
    lwz r3, 0x0(r16)
    bl fn_8020EFEC
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_8020EFEC
    cmpwi r14, 0x0
    beq lbl_fn_8058EF0C_00000760
    cmpwi r3, 0x0
    bne lbl_fn_8058EF0C_00000760
    li r0, 0x1
    b lbl_fn_8058EF0C_000008A4
lbl_fn_8058EF0C_00000760:
    cmpwi r14, 0x0
    bne lbl_fn_8058EF0C_00000778
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_00000778
    li r0, 0x0
    b lbl_fn_8058EF0C_000008A4
lbl_fn_8058EF0C_00000778:
    lwz r3, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r3, r0
    bne lbl_fn_8058EF0C_000007D0
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_8058EF0C_000007B8
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_8058EF0C_000007B8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8058EF0C_000008A4
lbl_fn_8058EF0C_000007B8:
    cmpwi r0, 0x0
    blt lbl_fn_8058EF0C_000007C8
    li r0, 0x1
    b lbl_fn_8058EF0C_000008A4
lbl_fn_8058EF0C_000007C8:
    li r0, 0x0
    b lbl_fn_8058EF0C_000008A4
lbl_fn_8058EF0C_000007D0:
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r16)
    mr r15, r3
    addi r3, r1, 0x110
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x110
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_00000818
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8058EF0C_00000818:
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r15)
    addi r3, r1, 0x190
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x190
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058EF0C_0000084C
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8058EF0C_0000084C:
    addi r3, r1, 0x110
    addi r4, r1, 0x190
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8058EF0C_00000894
    lwz r3, 0x8(r16)
    bl fn_80686A48
    mr r14, r3
    lwz r3, 0x8(r15)
    bl fn_80686A48
    cmpw r14, r3
    beq lbl_fn_8058EF0C_00000894
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8058EF0C_000008A4
lbl_fn_8058EF0C_00000894:
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r15)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_8058EF0C_000008A4:
    cmpwi r0, 0x0
    beq lbl_fn_8058EF0C_00000A6C
    lwz r17, 0x0(r28)
    lwz r18, 0x0(r29)
    lwz r14, 0x0(r17)
    lwz r19, 0x8(r17)
    lwz r20, 0xc(r17)
    lwz r21, 0x10(r17)
    lwz r22, 0x14(r17)
    lwz r23, 0x18(r17)
    lwz r24, 0x1c(r17)
    lwz r25, 0x20(r17)
    lwz r26, 0x24(r17)
    lwz r27, 0x28(r17)
    lwz r12, 0x2c(r17)
    lwz r11, 0x30(r17)
    lwz r10, 0x34(r17)
    lwz r9, 0x38(r17)
    lwz r8, 0x3c(r17)
    lwz r7, 0x40(r17)
    lwz r6, 0x44(r17)
    lwz r5, 0x48(r17)
    lwz r4, 0x4c(r17)
    lwz r3, 0x50(r17)
    lwz r0, 0x54(r17)
    stw r14, 0x468(r1)
    lwz r14, 0x4(r17)
    lwz r15, 0x0(r18)
    stw r15, 0x0(r17)
    lwz r15, 0x4(r18)
    stw r15, 0x4(r17)
    lwz r15, 0xc(r18)
    lwz r16, 0x8(r18)
    stw r16, 0x8(r17)
    stw r15, 0xc(r17)
    lwz r15, 0x14(r18)
    lwz r16, 0x10(r18)
    stw r16, 0x10(r17)
    stw r15, 0x14(r17)
    lwz r15, 0x1c(r18)
    lwz r16, 0x18(r18)
    stw r16, 0x18(r17)
    stw r15, 0x1c(r17)
    lwz r15, 0x24(r18)
    lwz r16, 0x20(r18)
    stw r16, 0x20(r17)
    stw r15, 0x24(r17)
    lwz r15, 0x2c(r18)
    lwz r16, 0x28(r18)
    stw r16, 0x28(r17)
    stw r15, 0x2c(r17)
    lwz r15, 0x34(r18)
    lwz r16, 0x30(r18)
    stw r16, 0x30(r17)
    stw r15, 0x34(r17)
    lwz r15, 0x3c(r18)
    lwz r16, 0x38(r18)
    stw r16, 0x38(r17)
    stw r15, 0x3c(r17)
    lwz r16, 0x44(r18)
    lwz r15, 0x40(r18)
    stw r15, 0x40(r17)
    stw r16, 0x44(r17)
    lwz r15, 0x48(r18)
    stw r15, 0x48(r17)
    lwz r15, 0x4c(r18)
    stw r15, 0x4c(r17)
    lwz r15, 0x50(r18)
    stw r15, 0x50(r17)
    lwz r15, 0x54(r18)
    stw r15, 0x54(r17)
    lwz r15, 0x468(r1)
    stw r15, 0x0(r18)
    stw r14, 0x4(r18)
    stw r19, 0x8(r18)
    stw r20, 0xc(r18)
    stw r21, 0x10(r18)
    stw r22, 0x14(r18)
    stw r23, 0x18(r18)
    stw r24, 0x1c(r18)
    stw r25, 0x20(r18)
    stw r26, 0x24(r18)
    stw r27, 0x28(r18)
    stw r12, 0x2c(r18)
    stw r11, 0x30(r18)
    stw r10, 0x34(r18)
    stw r9, 0x38(r18)
    stw r8, 0x3c(r18)
    stw r7, 0x40(r18)
    stw r19, 0xc0(r1)
    stw r20, 0xc4(r1)
    stw r21, 0xc8(r1)
    stw r22, 0xcc(r1)
    stw r23, 0xd0(r1)
    stw r24, 0xd4(r1)
    stw r25, 0xd8(r1)
    stw r26, 0xdc(r1)
    stw r27, 0xe0(r1)
    stw r12, 0xe4(r1)
    stw r11, 0xe8(r1)
    stw r10, 0xec(r1)
    stw r9, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r7, 0xf8(r1)
    stw r6, 0xfc(r1)
    stw r5, 0x100(r1)
    stw r4, 0x104(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    stw r6, 0x44(r18)
    stw r5, 0x48(r18)
    stw r4, 0x4c(r18)
    stw r3, 0x50(r18)
    stw r0, 0x54(r18)
lbl_fn_8058EF0C_00000A6C:
    cmpwi r31, 0x0
    beq lbl_fn_8058EF0C_00000C30
    lwz r24, 0x0(r29)
    lwz r23, 0x0(r30)
    lwz r22, 0x8(r24)
    lwz r21, 0xc(r24)
    lwz r20, 0x10(r24)
    lwz r19, 0x14(r24)
    lwz r18, 0x18(r24)
    lwz r17, 0x1c(r24)
    lwz r16, 0x20(r24)
    lwz r15, 0x24(r24)
    lwz r14, 0x28(r24)
    lwz r12, 0x2c(r24)
    lwz r11, 0x30(r24)
    lwz r10, 0x34(r24)
    lwz r9, 0x38(r24)
    lwz r8, 0x3c(r24)
    lwz r7, 0x40(r24)
    lwz r6, 0x44(r24)
    lwz r5, 0x48(r24)
    lwz r4, 0x4c(r24)
    lwz r3, 0x50(r24)
    lwz r0, 0x54(r24)
    lwz r25, 0x0(r24)
    lwz r26, 0x4(r24)
    lwz r27, 0x0(r23)
    stw r27, 0x0(r24)
    lwz r27, 0x4(r23)
    stw r27, 0x4(r24)
    lwz r27, 0xc(r23)
    lwz r28, 0x8(r23)
    stw r28, 0x8(r24)
    stw r27, 0xc(r24)
    lwz r27, 0x14(r23)
    lwz r28, 0x10(r23)
    stw r28, 0x10(r24)
    stw r27, 0x14(r24)
    lwz r27, 0x1c(r23)
    lwz r28, 0x18(r23)
    stw r28, 0x18(r24)
    stw r27, 0x1c(r24)
    lwz r27, 0x24(r23)
    lwz r28, 0x20(r23)
    stw r28, 0x20(r24)
    stw r27, 0x24(r24)
    lwz r27, 0x2c(r23)
    lwz r28, 0x28(r23)
    stw r28, 0x28(r24)
    stw r27, 0x2c(r24)
    lwz r27, 0x34(r23)
    lwz r28, 0x30(r23)
    stw r28, 0x30(r24)
    stw r27, 0x34(r24)
    lwz r27, 0x3c(r23)
    lwz r28, 0x38(r23)
    stw r28, 0x38(r24)
    stw r27, 0x3c(r24)
    lwz r27, 0x44(r23)
    lwz r28, 0x40(r23)
    stw r28, 0x40(r24)
    stw r27, 0x44(r24)
    lwz r27, 0x48(r23)
    stw r27, 0x48(r24)
    lwz r27, 0x4c(r23)
    stw r27, 0x4c(r24)
    lwz r27, 0x50(r23)
    stw r27, 0x50(r24)
    lwz r27, 0x54(r23)
    stw r27, 0x54(r24)
    stw r25, 0x0(r23)
    stw r26, 0x4(r23)
    stw r22, 0x8(r23)
    stw r21, 0xc(r23)
    stw r20, 0x10(r23)
    stw r19, 0x14(r23)
    stw r18, 0x18(r23)
    stw r17, 0x1c(r23)
    stw r16, 0x20(r23)
    stw r15, 0x24(r23)
    stw r14, 0x28(r23)
    stw r12, 0x2c(r23)
    stw r11, 0x30(r23)
    stw r10, 0x34(r23)
    stw r9, 0x38(r23)
    stw r8, 0x3c(r23)
    stw r7, 0x40(r23)
    stw r22, 0x68(r1)
    stw r21, 0x6c(r1)
    stw r20, 0x70(r1)
    stw r19, 0x74(r1)
    stw r18, 0x78(r1)
    stw r17, 0x7c(r1)
    stw r16, 0x80(r1)
    stw r15, 0x84(r1)
    stw r14, 0x88(r1)
    stw r12, 0x8c(r1)
    stw r11, 0x90(r1)
    stw r10, 0x94(r1)
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r6, 0x44(r23)
    stw r5, 0x48(r23)
    stw r4, 0x4c(r23)
    stw r3, 0x50(r23)
    stw r0, 0x54(r23)
    b lbl_fn_8058EF0C_00000DE8
lbl_fn_8058EF0C_00000C30:
    lwz r24, 0x0(r28)
    lwz r23, 0x0(r30)
    lwz r22, 0x8(r24)
    lwz r21, 0xc(r24)
    lwz r20, 0x10(r24)
    lwz r19, 0x14(r24)
    lwz r18, 0x18(r24)
    lwz r17, 0x1c(r24)
    lwz r16, 0x20(r24)
    lwz r15, 0x24(r24)
    lwz r14, 0x28(r24)
    lwz r12, 0x2c(r24)
    lwz r11, 0x30(r24)
    lwz r10, 0x34(r24)
    lwz r9, 0x38(r24)
    lwz r8, 0x3c(r24)
    lwz r7, 0x40(r24)
    lwz r6, 0x44(r24)
    lwz r5, 0x48(r24)
    lwz r4, 0x4c(r24)
    lwz r3, 0x50(r24)
    lwz r0, 0x54(r24)
    lwz r25, 0x0(r24)
    lwz r26, 0x4(r24)
    lwz r27, 0x0(r23)
    stw r27, 0x0(r24)
    lwz r27, 0x4(r23)
    stw r27, 0x4(r24)
    lwz r27, 0xc(r23)
    lwz r28, 0x8(r23)
    stw r28, 0x8(r24)
    stw r27, 0xc(r24)
    lwz r27, 0x14(r23)
    lwz r28, 0x10(r23)
    stw r28, 0x10(r24)
    stw r27, 0x14(r24)
    lwz r27, 0x1c(r23)
    lwz r28, 0x18(r23)
    stw r28, 0x18(r24)
    stw r27, 0x1c(r24)
    lwz r27, 0x24(r23)
    lwz r28, 0x20(r23)
    stw r28, 0x20(r24)
    stw r27, 0x24(r24)
    lwz r27, 0x2c(r23)
    lwz r28, 0x28(r23)
    stw r28, 0x28(r24)
    stw r27, 0x2c(r24)
    lwz r27, 0x34(r23)
    lwz r28, 0x30(r23)
    stw r28, 0x30(r24)
    stw r27, 0x34(r24)
    lwz r27, 0x3c(r23)
    lwz r28, 0x38(r23)
    stw r28, 0x38(r24)
    stw r27, 0x3c(r24)
    lwz r27, 0x44(r23)
    lwz r28, 0x40(r23)
    stw r28, 0x40(r24)
    stw r27, 0x44(r24)
    lwz r27, 0x48(r23)
    stw r27, 0x48(r24)
    lwz r27, 0x4c(r23)
    stw r27, 0x4c(r24)
    lwz r27, 0x50(r23)
    stw r27, 0x50(r24)
    lwz r27, 0x54(r23)
    stw r27, 0x54(r24)
    stw r25, 0x0(r23)
    stw r26, 0x4(r23)
    stw r22, 0x8(r23)
    stw r21, 0xc(r23)
    stw r20, 0x10(r23)
    stw r19, 0x14(r23)
    stw r18, 0x18(r23)
    stw r17, 0x1c(r23)
    stw r16, 0x20(r23)
    stw r15, 0x24(r23)
    stw r14, 0x28(r23)
    stw r12, 0x2c(r23)
    stw r11, 0x30(r23)
    stw r10, 0x34(r23)
    stw r9, 0x38(r23)
    stw r8, 0x3c(r23)
    stw r7, 0x40(r23)
    stw r22, 0x10(r1)
    stw r21, 0x14(r1)
    stw r20, 0x18(r1)
    stw r19, 0x1c(r1)
    stw r18, 0x20(r1)
    stw r17, 0x24(r1)
    stw r16, 0x28(r1)
    stw r15, 0x2c(r1)
    stw r14, 0x30(r1)
    stw r12, 0x34(r1)
    stw r11, 0x38(r1)
    stw r10, 0x3c(r1)
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r6, 0x44(r23)
    stw r5, 0x48(r23)
    stw r4, 0x4c(r23)
    stw r3, 0x50(r23)
    stw r0, 0x54(r23)
lbl_fn_8058EF0C_00000DE8:
    lmw r14, 0x478(r1)
    lwz r0, 0x4c4(r1)
    mtlr r0
    addi r1, r1, 0x4c0
    blr
}

asm void fn_8058FAD4(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stmw r14, 0x178(r1)
    mr r28, r3
    stw r4, 0x8(r1)
    lwz r0, 0x0(r3)
    lwz r3, 0x0(r4)
    cmplw r0, r3
    beq lbl_fn_8058FAD4_000011A4
    subi r0, r3, 0x58
    stw r0, 0x168(r1)
    lis r30, lbl_80796ACC@ha
    li r31, 0x0
    b lbl_fn_8058FAD4_00001194
lbl_fn_8058FAD4_00000E38:
    lwz r3, 0x8(r1)
    lwz r29, 0x0(r28)
    lwz r14, 0x0(r3)
    cmplw r29, r14
    beq lbl_fn_8058FAD4_00000FCC
    addi r15, r29, 0x58
    b lbl_fn_8058FAD4_00000FC4
lbl_fn_8058FAD4_00000E54:
    lwz r3, 0x0(r15)
    bl fn_8020EFEC
    mr r16, r3
    lwz r3, 0x0(r29)
    bl fn_8020EFEC
    cmpwi r16, 0x0
    beq lbl_fn_8058FAD4_00000E80
    cmpwi r3, 0x0
    bne lbl_fn_8058FAD4_00000E80
    li r0, 0x1
    b lbl_fn_8058FAD4_00000FB4
lbl_fn_8058FAD4_00000E80:
    cmpwi r16, 0x0
    bne lbl_fn_8058FAD4_00000E98
    cmpwi r3, 0x0
    beq lbl_fn_8058FAD4_00000E98
    li r0, 0x0
    b lbl_fn_8058FAD4_00000FB4
lbl_fn_8058FAD4_00000E98:
    lwz r3, 0x0(r15)
    lwz r0, 0x0(r29)
    cmpw r3, r0
    bne lbl_fn_8058FAD4_00000EF0
    lwz r0, 0x50(r15)
    cmpwi r0, 0x0
    blt lbl_fn_8058FAD4_00000ED8
    lwz r4, 0x50(r29)
    cmpwi r4, 0x0
    blt lbl_fn_8058FAD4_00000ED8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_8058FAD4_00000FB4
lbl_fn_8058FAD4_00000ED8:
    cmpwi r0, 0x0
    blt lbl_fn_8058FAD4_00000EE8
    li r0, 0x1
    b lbl_fn_8058FAD4_00000FB4
lbl_fn_8058FAD4_00000EE8:
    li r0, 0x0
    b lbl_fn_8058FAD4_00000FB4
lbl_fn_8058FAD4_00000EF0:
    bl fn_80211480
    mr r18, r3
    lwz r3, 0x0(r29)
    bl fn_80211480
    lwz r5, 0x8(r18)
    mr r17, r3
    addi r3, r1, 0xe8
    addi r4, r30, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0xe8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058FAD4_00000F30
    sth r31, 0x0(r3)
lbl_fn_8058FAD4_00000F30:
    lwz r5, 0x8(r17)
    addi r3, r1, 0x68
    addi r4, r30, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x68
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058FAD4_00000F5C
    sth r31, 0x0(r3)
lbl_fn_8058FAD4_00000F5C:
    addi r3, r1, 0xe8
    addi r4, r1, 0x68
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8058FAD4_00000FA4
    lwz r3, 0x8(r18)
    bl fn_80686A48
    mr r16, r3
    lwz r3, 0x8(r17)
    bl fn_80686A48
    cmpw r16, r3
    beq lbl_fn_8058FAD4_00000FA4
    xor r0, r3, r16
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_8058FAD4_00000FB4
lbl_fn_8058FAD4_00000FA4:
    lwz r3, 0x8(r18)
    lwz r4, 0x8(r17)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_8058FAD4_00000FB4:
    cmpwi r0, 0x0
    beq lbl_fn_8058FAD4_00000FC0
    mr r29, r15
lbl_fn_8058FAD4_00000FC0:
    addi r15, r15, 0x58
lbl_fn_8058FAD4_00000FC4:
    cmplw r15, r14
    bne lbl_fn_8058FAD4_00000E54
lbl_fn_8058FAD4_00000FCC:
    lwz r18, 0x0(r28)
    cmplw r29, r18
    beq lbl_fn_8058FAD4_00001188
    lwz r19, 0x8(r29)
    lwz r20, 0xc(r29)
    lwz r21, 0x10(r29)
    lwz r22, 0x14(r29)
    lwz r23, 0x18(r29)
    lwz r24, 0x1c(r29)
    lwz r25, 0x20(r29)
    lwz r26, 0x24(r29)
    lwz r27, 0x28(r29)
    lwz r12, 0x2c(r29)
    lwz r11, 0x30(r29)
    lwz r10, 0x34(r29)
    lwz r9, 0x38(r29)
    lwz r8, 0x3c(r29)
    lwz r7, 0x40(r29)
    lwz r6, 0x44(r29)
    lwz r5, 0x48(r29)
    lwz r4, 0x4c(r29)
    lwz r3, 0x50(r29)
    lwz r0, 0x54(r29)
    lwz r14, 0x0(r29)
    lwz r17, 0x4(r29)
    lwz r15, 0x0(r18)
    stw r15, 0x0(r29)
    lwz r15, 0x4(r18)
    stw r15, 0x4(r29)
    lwz r15, 0xc(r18)
    lwz r16, 0x8(r18)
    stw r16, 0x8(r29)
    stw r15, 0xc(r29)
    lwz r15, 0x14(r18)
    lwz r16, 0x10(r18)
    stw r16, 0x10(r29)
    stw r15, 0x14(r29)
    lwz r15, 0x1c(r18)
    lwz r16, 0x18(r18)
    stw r16, 0x18(r29)
    stw r15, 0x1c(r29)
    lwz r15, 0x24(r18)
    lwz r16, 0x20(r18)
    stw r16, 0x20(r29)
    stw r15, 0x24(r29)
    lwz r15, 0x2c(r18)
    lwz r16, 0x28(r18)
    stw r16, 0x28(r29)
    stw r15, 0x2c(r29)
    lwz r15, 0x34(r18)
    lwz r16, 0x30(r18)
    stw r16, 0x30(r29)
    stw r15, 0x34(r29)
    lwz r15, 0x3c(r18)
    lwz r16, 0x38(r18)
    stw r16, 0x38(r29)
    stw r15, 0x3c(r29)
    lwz r16, 0x44(r18)
    lwz r15, 0x40(r18)
    stw r15, 0x40(r29)
    stw r16, 0x44(r29)
    lwz r15, 0x48(r18)
    stw r15, 0x48(r29)
    lwz r15, 0x4c(r18)
    stw r15, 0x4c(r29)
    lwz r15, 0x50(r18)
    stw r15, 0x50(r29)
    lwz r15, 0x54(r18)
    stw r15, 0x54(r29)
    stw r19, 0x18(r1)
    stw r20, 0x1c(r1)
    stw r21, 0x20(r1)
    stw r22, 0x24(r1)
    stw r23, 0x28(r1)
    stw r24, 0x2c(r1)
    stw r25, 0x30(r1)
    stw r26, 0x34(r1)
    stw r27, 0x38(r1)
    stw r12, 0x3c(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    stw r14, 0x0(r18)
    stw r17, 0x4(r18)
    stw r19, 0x8(r18)
    stw r20, 0xc(r18)
    stw r21, 0x10(r18)
    stw r22, 0x14(r18)
    stw r23, 0x18(r18)
    stw r24, 0x1c(r18)
    stw r25, 0x20(r18)
    stw r26, 0x24(r18)
    stw r27, 0x28(r18)
    stw r12, 0x2c(r18)
    stw r11, 0x30(r18)
    stw r10, 0x34(r18)
    stw r9, 0x38(r18)
    stw r8, 0x3c(r18)
    stw r7, 0x40(r18)
    stw r6, 0x44(r18)
    stw r5, 0x48(r18)
    stw r4, 0x4c(r18)
    stw r3, 0x50(r18)
    stw r0, 0x54(r18)
lbl_fn_8058FAD4_00001188:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x58
    stw r0, 0x0(r28)
lbl_fn_8058FAD4_00001194:
    lwz r3, 0x0(r28)
    lwz r0, 0x168(r1)
    cmplw r3, r0
    bne lbl_fn_8058FAD4_00000E38
lbl_fn_8058FAD4_000011A4:
    lmw r14, 0x178(r1)
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_8058FE90(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    lis r4, 0x2e8c
    lwz r0, 0x0(r3)
    subi r3, r4, 0x5d17
    subf r0, r5, r0
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r3, r0, r3
    blr
}

asm void fn_8058FEB8(void)
{
    nofralloc
    mulli r0, r4, 0x58
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_8058FEC8(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_8058FED4(void)
{
    nofralloc
    neg r0, r4
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x58
    add r3, r3, r0
    blr
}

asm void fn_8058FEE8(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_8058FEF4(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    addi r0, r4, 0x58
    stw r0, 0x0(r3)
    blr
}

asm void fn_8058FF04(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_8058FF0C(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    subi r0, r4, 0x58
    stw r0, 0x0(r3)
    blr
}

asm void fn_8058FF1C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_8058FF1C_00001268:
    mr r3, r28
    mr r4, r27
    bl fn_8058FE90
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_8058FF1C_00001760
    cmpwi r3, 0x14
    bgt lbl_fn_8058FF1C_000012AC
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_80591508
    b lbl_fn_8058FF1C_00001760
lbl_fn_8058FF1C_000012AC:
    lwz r5, lbl_8087E6B4
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_8058FEB8
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_8058FEC8
    lwz r3, lbl_8087E6B4
    addi r6, r3, 0x1
    stw r6, lbl_8087E6B4
    cmpwi r6, 0x5
    blt lbl_fn_8058FF1C_00001308
    li r6, -0x4
    stw r6, lbl_8087E6B4
lbl_fn_8058FF1C_00001308:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_8058FEB8
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_8058FEC8
    lwz r3, lbl_8087E6B4
    addi r0, r3, 0x1
    stw r0, lbl_8087E6B4
    cmpwi r0, 0x5
    blt lbl_fn_8058FF1C_00001368
    li r6, -0x4
    stw r6, lbl_8087E6B4
lbl_fn_8058FF1C_00001368:
    mr r3, r28
    li r4, 0x1
    bl fn_8058FED4
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_8058FEC8
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_80590AAC
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_8058FEE8
    b lbl_fn_8058FF1C_000013D4
lbl_fn_8058FF1C_000013CC:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058FF1C_000013D4:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    bne lbl_fn_8058FF1C_000013CC
lbl_fn_8058FF1C_00001400:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_00001448
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_00001400
lbl_fn_8058FF1C_00001448:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_00001524
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058FF1C_0000148C
lbl_fn_8058FF1C_00001484:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058FF1C_0000148C:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    bne lbl_fn_8058FF1C_00001484
lbl_fn_8058FF1C_000014B8:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_000014B8
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8058FF1C_00001524
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058FF1C_0000148C
lbl_fn_8058FF1C_00001524:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058ECD8
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_000016DC
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    bne lbl_fn_8058FF1C_00001614
    b lbl_fn_8058FF1C_000015A4
lbl_fn_8058FF1C_0000159C:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058FF1C_000015A4:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_000015E4
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_0000159C
lbl_fn_8058FF1C_000015E4:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_00001614
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
lbl_fn_8058FF1C_00001614:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_000016CC
    b lbl_fn_8058FF1C_00001634
lbl_fn_8058FF1C_0000162C:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058FF1C_00001634:
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    beq lbl_fn_8058FF1C_0000162C
lbl_fn_8058FF1C_00001660:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    bne lbl_fn_8058FF1C_00001660
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8058FF1C_000016CC
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058FF1C_00001634
lbl_fn_8058FF1C_000016CC:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058FF1C_00001268
lbl_fn_8058FF1C_000016DC:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FE90
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FE90
    cmpw r3, r30
    bge lbl_fn_8058FF1C_00001730
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_8059057C
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058FF1C_00001268
lbl_fn_8058FF1C_00001730:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_8059057C
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058FF1C_00001268
lbl_fn_8058FF1C_00001760:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8059044C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x0(r4)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl fn_8020EFEC
    mr r31, r3
    lwz r3, 0x0(r30)
    bl fn_8020EFEC
    cmpwi r31, 0x0
    beq lbl_fn_8059044C_000017C0
    cmpwi r3, 0x0
    bne lbl_fn_8059044C_000017C0
    li r3, 0x1
    b lbl_fn_8059044C_00001888
lbl_fn_8059044C_000017C0:
    cmpwi r31, 0x0
    bne lbl_fn_8059044C_000017D8
    cmpwi r3, 0x0
    beq lbl_fn_8059044C_000017D8
    li r3, 0x0
    b lbl_fn_8059044C_00001888
lbl_fn_8059044C_000017D8:
    lwz r4, 0x0(r29)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_8059044C_00001830
    lwz r0, 0x50(r29)
    cmpwi r0, 0x0
    blt lbl_fn_8059044C_00001818
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_8059044C_00001818
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8059044C_00001888
lbl_fn_8059044C_00001818:
    cmpwi r0, 0x0
    blt lbl_fn_8059044C_00001828
    li r3, 0x1
    b lbl_fn_8059044C_00001888
lbl_fn_8059044C_00001828:
    li r3, 0x0
    b lbl_fn_8059044C_00001888
lbl_fn_8059044C_00001830:
    lfs f2, 0x8(r31)
    lfs f1, 0x8(r3)
    lfs f0, lbl_80888160
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8059044C_0000187C
    mr r3, r4
    bl fn_80211480
    mr r31, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r31)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r3, r3, 31
    b lbl_fn_8059044C_00001888
lbl_fn_8059044C_0000187C:
    fcmpo cr0, f2, f1
    mfcr r3
    extrwi r3, r3, 1, 1
lbl_fn_8059044C_00001888:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059057C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_8059057C_000018C8:
    mr r3, r28
    mr r4, r27
    bl fn_8058FE90
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_8059057C_00001DC0
    cmpwi r3, 0x14
    bgt lbl_fn_8059057C_0000190C
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_80591508
    b lbl_fn_8059057C_00001DC0
lbl_fn_8059057C_0000190C:
    lwz r5, lbl_8087E6B8
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_8058FEB8
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_8058FEC8
    lwz r3, lbl_8087E6B8
    addi r6, r3, 0x1
    stw r6, lbl_8087E6B8
    cmpwi r6, 0x5
    blt lbl_fn_8059057C_00001968
    li r6, -0x4
    stw r6, lbl_8087E6B8
lbl_fn_8059057C_00001968:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_8058FEB8
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_8058FEC8
    lwz r3, lbl_8087E6B8
    addi r0, r3, 0x1
    stw r0, lbl_8087E6B8
    cmpwi r0, 0x5
    blt lbl_fn_8059057C_000019C8
    li r6, -0x4
    stw r6, lbl_8087E6B8
lbl_fn_8059057C_000019C8:
    mr r3, r28
    li r4, 0x1
    bl fn_8058FED4
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_8058FEC8
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_80590AAC
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_8058FEE8
    b lbl_fn_8059057C_00001A34
lbl_fn_8059057C_00001A2C:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8059057C_00001A34:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    bne lbl_fn_8059057C_00001A2C
lbl_fn_8059057C_00001A60:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001AA8
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001A60
lbl_fn_8059057C_00001AA8:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001B84
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8059057C_00001AEC
lbl_fn_8059057C_00001AE4:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8059057C_00001AEC:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    bne lbl_fn_8059057C_00001AE4
lbl_fn_8059057C_00001B18:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001B18
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8059057C_00001B84
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8059057C_00001AEC
lbl_fn_8059057C_00001B84:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058ECD8
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001D3C
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    bne lbl_fn_8059057C_00001C74
    b lbl_fn_8059057C_00001C04
lbl_fn_8059057C_00001BFC:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8059057C_00001C04:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001C44
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001BFC
lbl_fn_8059057C_00001C44:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001C74
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
lbl_fn_8059057C_00001C74:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001D2C
    b lbl_fn_8059057C_00001C94
lbl_fn_8059057C_00001C8C:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8059057C_00001C94:
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    beq lbl_fn_8059057C_00001C8C
lbl_fn_8059057C_00001CC0:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8059044C
    cmpwi r3, 0x0
    bne lbl_fn_8059057C_00001CC0
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8059057C_00001D2C
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8059057C_00001C94
lbl_fn_8059057C_00001D2C:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8059057C_000018C8
lbl_fn_8059057C_00001D3C:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FE90
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FE90
    cmpw r3, r30
    bge lbl_fn_8059057C_00001D90
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_8059057C
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8059057C_000018C8
lbl_fn_8059057C_00001D90:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_8059057C
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8059057C_000018C8
lbl_fn_8059057C_00001DC0:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
