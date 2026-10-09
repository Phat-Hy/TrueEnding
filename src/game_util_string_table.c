#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_800DD3FC(void);
extern void fn_80206C50(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_8058ECD8(void);
extern void fn_8058ECF0(void);
extern void fn_8058ED10(void);
extern void fn_8058ED2C(void);
extern void fn_8058EEF0(void);
extern void fn_8058FE90(void);
extern void fn_8058FEB8(void);
extern void fn_8058FEC8(void);
extern void fn_8058FED4(void);
extern void fn_8058FEE8(void);
extern void fn_8058FEF4(void);
extern void fn_8058FF04(void);
extern void fn_8058FF0C(void);
extern void fn_80593030(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);

/* External data declarations */
extern u8 lbl_80796ACC[];

/* Small data declarations */
extern u32 lbl_8087E6BC;
extern u32 lbl_8087E6C0;
extern u32 lbl_80888160;

/* Function declarations */
void fn_80590AAC(void);
void fn_80591508(void);
void fn_8059185C(void);
void fn_80591D8C(void);
void fn_80591F38(void);
void fn_80592468(void);

asm void fn_80590AAC(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x1c0
    bl _savegpr_14
    lwz r16, 0x0(r5)
    mr r28, r3
    lwz r15, 0x0(r3)
    mr r29, r4
    lwz r3, 0x0(r16)
    mr r30, r5
    bl fn_8020EFEC
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_8020EFEC
    cmpwi r14, 0x0
    beq lbl_fn_80590AAC_00000054
    cmpwi r3, 0x0
    bne lbl_fn_80590AAC_00000054
    li r0, 0x1
    b lbl_fn_80590AAC_0000011C
lbl_fn_80590AAC_00000054:
    cmpwi r14, 0x0
    bne lbl_fn_80590AAC_0000006C
    cmpwi r3, 0x0
    beq lbl_fn_80590AAC_0000006C
    li r0, 0x0
    b lbl_fn_80590AAC_0000011C
lbl_fn_80590AAC_0000006C:
    lwz r4, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_80590AAC_000000C4
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80590AAC_000000AC
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80590AAC_000000AC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80590AAC_0000011C
lbl_fn_80590AAC_000000AC:
    cmpwi r0, 0x0
    blt lbl_fn_80590AAC_000000BC
    li r0, 0x1
    b lbl_fn_80590AAC_0000011C
lbl_fn_80590AAC_000000BC:
    li r0, 0x0
    b lbl_fn_80590AAC_0000011C
lbl_fn_80590AAC_000000C4:
    lfs f2, 0x8(r14)
    lfs f1, 0x8(r3)
    lfs f0, lbl_80888160
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80590AAC_00000110
    mr r3, r4
    bl fn_80211480
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r14)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_80590AAC_0000011C
lbl_fn_80590AAC_00000110:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80590AAC_0000011C:
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
    beq lbl_fn_80590AAC_00000158
    cmpwi r3, 0x0
    bne lbl_fn_80590AAC_00000158
    li r0, 0x1
    b lbl_fn_80590AAC_00000220
lbl_fn_80590AAC_00000158:
    cmpwi r14, 0x0
    bne lbl_fn_80590AAC_00000170
    cmpwi r3, 0x0
    beq lbl_fn_80590AAC_00000170
    li r0, 0x0
    b lbl_fn_80590AAC_00000220
lbl_fn_80590AAC_00000170:
    lwz r4, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_80590AAC_000001C8
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80590AAC_000001B0
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80590AAC_000001B0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80590AAC_00000220
lbl_fn_80590AAC_000001B0:
    cmpwi r0, 0x0
    blt lbl_fn_80590AAC_000001C0
    li r0, 0x1
    b lbl_fn_80590AAC_00000220
lbl_fn_80590AAC_000001C0:
    li r0, 0x0
    b lbl_fn_80590AAC_00000220
lbl_fn_80590AAC_000001C8:
    lfs f2, 0x8(r14)
    lfs f1, 0x8(r3)
    lfs f0, lbl_80888160
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80590AAC_00000214
    mr r3, r4
    bl fn_80211480
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r14)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_80590AAC_00000220
lbl_fn_80590AAC_00000214:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80590AAC_00000220:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_80590AAC_00000238
    cmpwi r0, 0x0
    bne lbl_fn_80590AAC_00000A44
lbl_fn_80590AAC_00000238:
    cmpwi r31, 0x0
    bne lbl_fn_80590AAC_00000404
    cmpwi r0, 0x0
    bne lbl_fn_80590AAC_00000404
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
    stw r22, 0x118(r1)
    stw r21, 0x11c(r1)
    stw r20, 0x120(r1)
    stw r19, 0x124(r1)
    stw r18, 0x128(r1)
    stw r17, 0x12c(r1)
    stw r16, 0x130(r1)
    stw r15, 0x134(r1)
    stw r14, 0x138(r1)
    stw r12, 0x13c(r1)
    stw r11, 0x140(r1)
    stw r10, 0x144(r1)
    stw r9, 0x148(r1)
    stw r8, 0x14c(r1)
    stw r7, 0x150(r1)
    stw r6, 0x154(r1)
    stw r5, 0x158(r1)
    stw r4, 0x15c(r1)
    stw r3, 0x160(r1)
    stw r0, 0x164(r1)
    stw r6, 0x44(r23)
    stw r5, 0x48(r23)
    stw r4, 0x4c(r23)
    stw r3, 0x50(r23)
    stw r0, 0x54(r23)
    b lbl_fn_80590AAC_00000A44
lbl_fn_80590AAC_00000404:
    lwz r16, 0x0(r29)
    lwz r15, 0x0(r28)
    lwz r3, 0x0(r16)
    bl fn_8020EFEC
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_8020EFEC
    cmpwi r14, 0x0
    beq lbl_fn_80590AAC_00000438
    cmpwi r3, 0x0
    bne lbl_fn_80590AAC_00000438
    li r0, 0x1
    b lbl_fn_80590AAC_00000500
lbl_fn_80590AAC_00000438:
    cmpwi r14, 0x0
    bne lbl_fn_80590AAC_00000450
    cmpwi r3, 0x0
    beq lbl_fn_80590AAC_00000450
    li r0, 0x0
    b lbl_fn_80590AAC_00000500
lbl_fn_80590AAC_00000450:
    lwz r4, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_80590AAC_000004A8
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80590AAC_00000490
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80590AAC_00000490
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80590AAC_00000500
lbl_fn_80590AAC_00000490:
    cmpwi r0, 0x0
    blt lbl_fn_80590AAC_000004A0
    li r0, 0x1
    b lbl_fn_80590AAC_00000500
lbl_fn_80590AAC_000004A0:
    li r0, 0x0
    b lbl_fn_80590AAC_00000500
lbl_fn_80590AAC_000004A8:
    lfs f2, 0x8(r14)
    lfs f1, 0x8(r3)
    lfs f0, lbl_80888160
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80590AAC_000004F4
    mr r3, r4
    bl fn_80211480
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r14)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_80590AAC_00000500
lbl_fn_80590AAC_000004F4:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80590AAC_00000500:
    cmpwi r0, 0x0
    beq lbl_fn_80590AAC_000006C8
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
    stw r14, 0x168(r1)
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
    lwz r15, 0x168(r1)
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
lbl_fn_80590AAC_000006C8:
    cmpwi r31, 0x0
    beq lbl_fn_80590AAC_0000088C
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
    b lbl_fn_80590AAC_00000A44
lbl_fn_80590AAC_0000088C:
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
lbl_fn_80590AAC_00000A44:
    addi r11, r1, 0x1c0
    bl _restgpr_14
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80591508(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x0(r3)
    mr r29, r3
    lwz r3, 0x0(r4)
    mr r30, r4
    cmplw r0, r3
    beq lbl_fn_80591508_00000D90
    lfs f31, lbl_80888160
    subi r14, r3, 0x58
    b lbl_fn_80591508_00000D84
lbl_fn_80591508_00000A9C:
    lwz r31, 0x0(r29)
    lwz r17, 0x0(r30)
    cmplw r31, r17
    beq lbl_fn_80591508_00000BBC
    addi r15, r31, 0x58
    b lbl_fn_80591508_00000BB4
lbl_fn_80591508_00000AB4:
    lwz r3, 0x0(r15)
    bl fn_8020EFEC
    mr r16, r3
    lwz r3, 0x0(r31)
    bl fn_8020EFEC
    cmpwi r16, 0x0
    beq lbl_fn_80591508_00000AE0
    cmpwi r3, 0x0
    bne lbl_fn_80591508_00000AE0
    li r0, 0x1
    b lbl_fn_80591508_00000BA4
lbl_fn_80591508_00000AE0:
    cmpwi r16, 0x0
    bne lbl_fn_80591508_00000AF8
    cmpwi r3, 0x0
    beq lbl_fn_80591508_00000AF8
    li r0, 0x0
    b lbl_fn_80591508_00000BA4
lbl_fn_80591508_00000AF8:
    lwz r4, 0x0(r15)
    lwz r0, 0x0(r31)
    cmpw r4, r0
    bne lbl_fn_80591508_00000B50
    lwz r0, 0x50(r15)
    cmpwi r0, 0x0
    blt lbl_fn_80591508_00000B38
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    blt lbl_fn_80591508_00000B38
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80591508_00000BA4
lbl_fn_80591508_00000B38:
    cmpwi r0, 0x0
    blt lbl_fn_80591508_00000B48
    li r0, 0x1
    b lbl_fn_80591508_00000BA4
lbl_fn_80591508_00000B48:
    li r0, 0x0
    b lbl_fn_80591508_00000BA4
lbl_fn_80591508_00000B50:
    lfs f1, 0x8(r16)
    lfs f0, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_80591508_00000B98
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r31)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_80591508_00000BA4
lbl_fn_80591508_00000B98:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80591508_00000BA4:
    cmpwi r0, 0x0
    beq lbl_fn_80591508_00000BB0
    mr r31, r15
lbl_fn_80591508_00000BB0:
    addi r15, r15, 0x58
lbl_fn_80591508_00000BB4:
    cmplw r15, r17
    bne lbl_fn_80591508_00000AB4
lbl_fn_80591508_00000BBC:
    lwz r19, 0x0(r29)
    cmplw r31, r19
    beq lbl_fn_80591508_00000D78
    lwz r20, 0x8(r31)
    lwz r21, 0xc(r31)
    lwz r22, 0x10(r31)
    lwz r23, 0x14(r31)
    lwz r24, 0x18(r31)
    lwz r25, 0x1c(r31)
    lwz r26, 0x20(r31)
    lwz r27, 0x24(r31)
    lwz r28, 0x28(r31)
    lwz r12, 0x2c(r31)
    lwz r11, 0x30(r31)
    lwz r10, 0x34(r31)
    lwz r9, 0x38(r31)
    lwz r8, 0x3c(r31)
    lwz r7, 0x40(r31)
    lwz r6, 0x44(r31)
    lwz r5, 0x48(r31)
    lwz r4, 0x4c(r31)
    lwz r3, 0x50(r31)
    lwz r0, 0x54(r31)
    lwz r18, 0x0(r31)
    lwz r17, 0x4(r31)
    lwz r15, 0x0(r19)
    stw r15, 0x0(r31)
    lwz r15, 0x4(r19)
    stw r15, 0x4(r31)
    lwz r15, 0xc(r19)
    lwz r16, 0x8(r19)
    stw r16, 0x8(r31)
    stw r15, 0xc(r31)
    lwz r15, 0x14(r19)
    lwz r16, 0x10(r19)
    stw r16, 0x10(r31)
    stw r15, 0x14(r31)
    lwz r15, 0x1c(r19)
    lwz r16, 0x18(r19)
    stw r16, 0x18(r31)
    stw r15, 0x1c(r31)
    lwz r15, 0x24(r19)
    lwz r16, 0x20(r19)
    stw r16, 0x20(r31)
    stw r15, 0x24(r31)
    lwz r15, 0x2c(r19)
    lwz r16, 0x28(r19)
    stw r16, 0x28(r31)
    stw r15, 0x2c(r31)
    lwz r15, 0x34(r19)
    lwz r16, 0x30(r19)
    stw r16, 0x30(r31)
    stw r15, 0x34(r31)
    lwz r15, 0x3c(r19)
    lwz r16, 0x38(r19)
    stw r16, 0x38(r31)
    stw r15, 0x3c(r31)
    lwz r16, 0x44(r19)
    lwz r15, 0x40(r19)
    stw r15, 0x40(r31)
    stw r16, 0x44(r31)
    lwz r15, 0x48(r19)
    stw r15, 0x48(r31)
    lwz r15, 0x4c(r19)
    stw r15, 0x4c(r31)
    lwz r15, 0x50(r19)
    stw r15, 0x50(r31)
    lwz r15, 0x54(r19)
    stw r15, 0x54(r31)
    stw r20, 0x10(r1)
    stw r21, 0x14(r1)
    stw r22, 0x18(r1)
    stw r23, 0x1c(r1)
    stw r24, 0x20(r1)
    stw r25, 0x24(r1)
    stw r26, 0x28(r1)
    stw r27, 0x2c(r1)
    stw r28, 0x30(r1)
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
    stw r18, 0x0(r19)
    stw r17, 0x4(r19)
    stw r20, 0x8(r19)
    stw r21, 0xc(r19)
    stw r22, 0x10(r19)
    stw r23, 0x14(r19)
    stw r24, 0x18(r19)
    stw r25, 0x1c(r19)
    stw r26, 0x20(r19)
    stw r27, 0x24(r19)
    stw r28, 0x28(r19)
    stw r12, 0x2c(r19)
    stw r11, 0x30(r19)
    stw r10, 0x34(r19)
    stw r9, 0x38(r19)
    stw r8, 0x3c(r19)
    stw r7, 0x40(r19)
    stw r6, 0x44(r19)
    stw r5, 0x48(r19)
    stw r4, 0x4c(r19)
    stw r3, 0x50(r19)
    stw r0, 0x54(r19)
lbl_fn_80591508_00000D78:
    lwz r3, 0x0(r29)
    addi r0, r3, 0x58
    stw r0, 0x0(r29)
lbl_fn_80591508_00000D84:
    lwz r0, 0x0(r29)
    cmplw r0, r14
    bne lbl_fn_80591508_00000A9C
lbl_fn_80591508_00000D90:
    addi r11, r1, 0xb0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    bl _restgpr_14
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8059185C(void)
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
lbl_fn_8059185C_00000DD4:
    mr r3, r28
    mr r4, r27
    bl fn_8058FE90
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_8059185C_000012CC
    cmpwi r3, 0x14
    bgt lbl_fn_8059185C_00000E18
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_80593030
    b lbl_fn_8059185C_000012CC
lbl_fn_8059185C_00000E18:
    lwz r5, lbl_8087E6BC
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
    lwz r3, lbl_8087E6BC
    addi r6, r3, 0x1
    stw r6, lbl_8087E6BC
    cmpwi r6, 0x5
    blt lbl_fn_8059185C_00000E74
    li r6, -0x4
    stw r6, lbl_8087E6BC
lbl_fn_8059185C_00000E74:
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
    lwz r3, lbl_8087E6BC
    addi r0, r3, 0x1
    stw r0, lbl_8087E6BC
    cmpwi r0, 0x5
    blt lbl_fn_8059185C_00000ED4
    li r6, -0x4
    stw r6, lbl_8087E6BC
lbl_fn_8059185C_00000ED4:
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
    bl fn_80592468
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_8058FEE8
    b lbl_fn_8059185C_00000F40
lbl_fn_8059185C_00000F38:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8059185C_00000F40:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    bne lbl_fn_8059185C_00000F38
lbl_fn_8059185C_00000F6C:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00000FB4
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00000F6C
lbl_fn_8059185C_00000FB4:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00001090
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8059185C_00000FF8
lbl_fn_8059185C_00000FF0:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8059185C_00000FF8:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    bne lbl_fn_8059185C_00000FF0
lbl_fn_8059185C_00001024:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00001024
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8059185C_00001090
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8059185C_00000FF8
lbl_fn_8059185C_00001090:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058ECD8
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00001248
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
    bl fn_80591D8C
    cmpwi r3, 0x0
    bne lbl_fn_8059185C_00001180
    b lbl_fn_8059185C_00001110
lbl_fn_8059185C_00001108:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8059185C_00001110:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00001150
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00001108
lbl_fn_8059185C_00001150:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00001180
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
lbl_fn_8059185C_00001180:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00001238
    b lbl_fn_8059185C_000011A0
lbl_fn_8059185C_00001198:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8059185C_000011A0:
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    beq lbl_fn_8059185C_00001198
lbl_fn_8059185C_000011CC:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    bne lbl_fn_8059185C_000011CC
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8059185C_00001238
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8059185C_000011A0
lbl_fn_8059185C_00001238:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8059185C_00000DD4
lbl_fn_8059185C_00001248:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FE90
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FE90
    cmpw r3, r30
    bge lbl_fn_8059185C_0000129C
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_80591F38
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8059185C_00000DD4
lbl_fn_8059185C_0000129C:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_80591F38
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8059185C_00000DD4
lbl_fn_8059185C_000012CC:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80591D8C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lwz r3, 0x0(r4)
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r4
    stw r30, 0x118(r1)
    mr r30, r5
    stw r29, 0x114(r1)
    bl fn_80206C50
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r29, 0x0
    beq lbl_fn_80591D8C_0000132C
    cmpwi r3, 0x0
    bne lbl_fn_80591D8C_0000132C
    li r3, 0x1
    b lbl_fn_80591D8C_00001470
lbl_fn_80591D8C_0000132C:
    cmpwi r29, 0x0
    bne lbl_fn_80591D8C_00001344
    cmpwi r3, 0x0
    beq lbl_fn_80591D8C_00001344
    li r3, 0x0
    b lbl_fn_80591D8C_00001470
lbl_fn_80591D8C_00001344:
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r30)
    cmpw r3, r0
    bne lbl_fn_80591D8C_0000139C
    lwz r0, 0x50(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80591D8C_00001384
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_80591D8C_00001384
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80591D8C_00001470
lbl_fn_80591D8C_00001384:
    cmpwi r0, 0x0
    blt lbl_fn_80591D8C_00001394
    li r3, 0x1
    b lbl_fn_80591D8C_00001470
lbl_fn_80591D8C_00001394:
    li r3, 0x0
    b lbl_fn_80591D8C_00001470
lbl_fn_80591D8C_0000139C:
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r29)
    mr r30, r3
    addi r3, r1, 0x88
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x88
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_80591D8C_000013E4
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80591D8C_000013E4:
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r30)
    addi r3, r1, 0x8
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_80591D8C_00001418
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80591D8C_00001418:
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80591D8C_00001460
    lwz r3, 0x8(r29)
    bl fn_80686A48
    mr r31, r3
    lwz r3, 0x8(r30)
    bl fn_80686A48
    cmpw r31, r3
    beq lbl_fn_80591D8C_00001460
    xor r0, r3, r31
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_80591D8C_00001470
lbl_fn_80591D8C_00001460:
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r30)
    bl fn_80686AF0
    srwi r3, r3, 31
lbl_fn_80591D8C_00001470:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80591F38(void)
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
lbl_fn_80591F38_000014B0:
    mr r3, r28
    mr r4, r27
    bl fn_8058FE90
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_80591F38_000019A8
    cmpwi r3, 0x14
    bgt lbl_fn_80591F38_000014F4
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_80593030
    b lbl_fn_80591F38_000019A8
lbl_fn_80591F38_000014F4:
    lwz r5, lbl_8087E6C0
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
    lwz r3, lbl_8087E6C0
    addi r6, r3, 0x1
    stw r6, lbl_8087E6C0
    cmpwi r6, 0x5
    blt lbl_fn_80591F38_00001550
    li r6, -0x4
    stw r6, lbl_8087E6C0
lbl_fn_80591F38_00001550:
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
    lwz r3, lbl_8087E6C0
    addi r0, r3, 0x1
    stw r0, lbl_8087E6C0
    cmpwi r0, 0x5
    blt lbl_fn_80591F38_000015B0
    li r6, -0x4
    stw r6, lbl_8087E6C0
lbl_fn_80591F38_000015B0:
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
    bl fn_80592468
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_8058FEE8
    b lbl_fn_80591F38_0000161C
lbl_fn_80591F38_00001614:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_80591F38_0000161C:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    bne lbl_fn_80591F38_00001614
lbl_fn_80591F38_00001648:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_00001690
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_00001648
lbl_fn_80591F38_00001690:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_0000176C
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_80591F38_000016D4
lbl_fn_80591F38_000016CC:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_80591F38_000016D4:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    bne lbl_fn_80591F38_000016CC
lbl_fn_80591F38_00001700:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_00001700
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_80591F38_0000176C
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_80591F38_000016D4
lbl_fn_80591F38_0000176C:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058ECD8
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_00001924
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
    bl fn_80591D8C
    cmpwi r3, 0x0
    bne lbl_fn_80591F38_0000185C
    b lbl_fn_80591F38_000017EC
lbl_fn_80591F38_000017E4:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_80591F38_000017EC:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_0000182C
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_000017E4
lbl_fn_80591F38_0000182C:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_0000185C
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
lbl_fn_80591F38_0000185C:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_00001914
    b lbl_fn_80591F38_0000187C
lbl_fn_80591F38_00001874:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_80591F38_0000187C:
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    beq lbl_fn_80591F38_00001874
lbl_fn_80591F38_000018A8:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_80591D8C
    cmpwi r3, 0x0
    bne lbl_fn_80591F38_000018A8
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_80591F38_00001914
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_80591F38_0000187C
lbl_fn_80591F38_00001914:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_80591F38_000014B0
lbl_fn_80591F38_00001924:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FE90
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FE90
    cmpw r3, r30
    bge lbl_fn_80591F38_00001978
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_80591F38
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_80591F38_000014B0
lbl_fn_80591F38_00001978:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_80591F38
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_80591F38_000014B0
lbl_fn_80591F38_000019A8:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80592468(void)
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
    bl fn_80206C50
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r14, 0x0
    beq lbl_fn_80592468_00001A0C
    cmpwi r3, 0x0
    bne lbl_fn_80592468_00001A0C
    li r0, 0x1
    b lbl_fn_80592468_00001B50
lbl_fn_80592468_00001A0C:
    cmpwi r14, 0x0
    bne lbl_fn_80592468_00001A24
    cmpwi r3, 0x0
    beq lbl_fn_80592468_00001A24
    li r0, 0x0
    b lbl_fn_80592468_00001B50
lbl_fn_80592468_00001A24:
    lwz r3, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r3, r0
    bne lbl_fn_80592468_00001A7C
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80592468_00001A64
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80592468_00001A64
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80592468_00001B50
lbl_fn_80592468_00001A64:
    cmpwi r0, 0x0
    blt lbl_fn_80592468_00001A74
    li r0, 0x1
    b lbl_fn_80592468_00001B50
lbl_fn_80592468_00001A74:
    li r0, 0x0
    b lbl_fn_80592468_00001B50
lbl_fn_80592468_00001A7C:
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
    beq lbl_fn_80592468_00001AC4
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80592468_00001AC4:
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
    beq lbl_fn_80592468_00001AF8
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80592468_00001AF8:
    addi r3, r1, 0x368
    addi r4, r1, 0x3e8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80592468_00001B40
    lwz r3, 0x8(r16)
    bl fn_80686A48
    mr r14, r3
    lwz r3, 0x8(r15)
    bl fn_80686A48
    cmpw r14, r3
    beq lbl_fn_80592468_00001B40
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_80592468_00001B50
lbl_fn_80592468_00001B40:
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r15)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_80592468_00001B50:
    lwz r16, 0x0(r29)
    cntlzw r0, r0
    lwz r15, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x0(r16)
    bl fn_80206C50
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r14, 0x0
    beq lbl_fn_80592468_00001B8C
    cmpwi r3, 0x0
    bne lbl_fn_80592468_00001B8C
    li r0, 0x1
    b lbl_fn_80592468_00001CD0
lbl_fn_80592468_00001B8C:
    cmpwi r14, 0x0
    bne lbl_fn_80592468_00001BA4
    cmpwi r3, 0x0
    beq lbl_fn_80592468_00001BA4
    li r0, 0x0
    b lbl_fn_80592468_00001CD0
lbl_fn_80592468_00001BA4:
    lwz r3, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r3, r0
    bne lbl_fn_80592468_00001BFC
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80592468_00001BE4
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80592468_00001BE4
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80592468_00001CD0
lbl_fn_80592468_00001BE4:
    cmpwi r0, 0x0
    blt lbl_fn_80592468_00001BF4
    li r0, 0x1
    b lbl_fn_80592468_00001CD0
lbl_fn_80592468_00001BF4:
    li r0, 0x0
    b lbl_fn_80592468_00001CD0
lbl_fn_80592468_00001BFC:
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
    beq lbl_fn_80592468_00001C44
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80592468_00001C44:
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
    beq lbl_fn_80592468_00001C78
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80592468_00001C78:
    addi r3, r1, 0x268
    addi r4, r1, 0x2e8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80592468_00001CC0
    lwz r3, 0x8(r16)
    bl fn_80686A48
    mr r14, r3
    lwz r3, 0x8(r15)
    bl fn_80686A48
    cmpw r14, r3
    beq lbl_fn_80592468_00001CC0
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_80592468_00001CD0
lbl_fn_80592468_00001CC0:
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r15)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_80592468_00001CD0:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_80592468_00001CE8
    cmpwi r0, 0x0
    bne lbl_fn_80592468_00002570
lbl_fn_80592468_00001CE8:
    cmpwi r31, 0x0
    bne lbl_fn_80592468_00001EB4
    cmpwi r0, 0x0
    bne lbl_fn_80592468_00001EB4
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
    b lbl_fn_80592468_00002570
lbl_fn_80592468_00001EB4:
    lwz r16, 0x0(r29)
    lwz r15, 0x0(r28)
    lwz r3, 0x0(r16)
    bl fn_80206C50
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r14, 0x0
    beq lbl_fn_80592468_00001EE8
    cmpwi r3, 0x0
    bne lbl_fn_80592468_00001EE8
    li r0, 0x1
    b lbl_fn_80592468_0000202C
lbl_fn_80592468_00001EE8:
    cmpwi r14, 0x0
    bne lbl_fn_80592468_00001F00
    cmpwi r3, 0x0
    beq lbl_fn_80592468_00001F00
    li r0, 0x0
    b lbl_fn_80592468_0000202C
lbl_fn_80592468_00001F00:
    lwz r3, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r3, r0
    bne lbl_fn_80592468_00001F58
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80592468_00001F40
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80592468_00001F40
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80592468_0000202C
lbl_fn_80592468_00001F40:
    cmpwi r0, 0x0
    blt lbl_fn_80592468_00001F50
    li r0, 0x1
    b lbl_fn_80592468_0000202C
lbl_fn_80592468_00001F50:
    li r0, 0x0
    b lbl_fn_80592468_0000202C
lbl_fn_80592468_00001F58:
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
    beq lbl_fn_80592468_00001FA0
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80592468_00001FA0:
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
    beq lbl_fn_80592468_00001FD4
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_80592468_00001FD4:
    addi r3, r1, 0x110
    addi r4, r1, 0x190
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80592468_0000201C
    lwz r3, 0x8(r16)
    bl fn_80686A48
    mr r14, r3
    lwz r3, 0x8(r15)
    bl fn_80686A48
    cmpw r14, r3
    beq lbl_fn_80592468_0000201C
    xor r0, r3, r14
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_80592468_0000202C
lbl_fn_80592468_0000201C:
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r15)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_80592468_0000202C:
    cmpwi r0, 0x0
    beq lbl_fn_80592468_000021F4
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
lbl_fn_80592468_000021F4:
    cmpwi r31, 0x0
    beq lbl_fn_80592468_000023B8
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
    b lbl_fn_80592468_00002570
lbl_fn_80592468_000023B8:
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
lbl_fn_80592468_00002570:
    lmw r14, 0x478(r1)
    lwz r0, 0x4c4(r1)
    mtlr r0
    addi r1, r1, 0x4c0
    blr
}
