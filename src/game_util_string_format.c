#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_800DD3FC(void);
extern void fn_80206C50(void);
extern void fn_80211480(void);
extern void fn_80595F7C(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);

/* External data declarations */
extern u8 lbl_80796ACC[];

/* Small data declarations */
extern u32 lbl_8087E6C4;
extern u32 lbl_8087E6C8;
extern u32 lbl_80888160;

/* Function declarations */
void fn_80593030(void);
void fn_805933EC(void);
void fn_805949B4(void);

asm void fn_80593030(void)
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
    beq lbl_fn_80593030_000003A8
    subi r0, r3, 0x58
    stw r0, 0x168(r1)
    lis r30, lbl_80796ACC@ha
    li r31, 0x0
    b lbl_fn_80593030_00000398
lbl_fn_80593030_0000003C:
    lwz r3, 0x8(r1)
    lwz r29, 0x0(r28)
    lwz r14, 0x0(r3)
    cmplw r29, r14
    beq lbl_fn_80593030_000001D0
    addi r15, r29, 0x58
    b lbl_fn_80593030_000001C8
lbl_fn_80593030_00000058:
    lwz r3, 0x0(r15)
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r29)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_80593030_00000084
    cmpwi r3, 0x0
    bne lbl_fn_80593030_00000084
    li r0, 0x1
    b lbl_fn_80593030_000001B8
lbl_fn_80593030_00000084:
    cmpwi r16, 0x0
    bne lbl_fn_80593030_0000009C
    cmpwi r3, 0x0
    beq lbl_fn_80593030_0000009C
    li r0, 0x0
    b lbl_fn_80593030_000001B8
lbl_fn_80593030_0000009C:
    lwz r3, 0x0(r15)
    lwz r0, 0x0(r29)
    cmpw r3, r0
    bne lbl_fn_80593030_000000F4
    lwz r0, 0x50(r15)
    cmpwi r0, 0x0
    blt lbl_fn_80593030_000000DC
    lwz r4, 0x50(r29)
    cmpwi r4, 0x0
    blt lbl_fn_80593030_000000DC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80593030_000001B8
lbl_fn_80593030_000000DC:
    cmpwi r0, 0x0
    blt lbl_fn_80593030_000000EC
    li r0, 0x1
    b lbl_fn_80593030_000001B8
lbl_fn_80593030_000000EC:
    li r0, 0x0
    b lbl_fn_80593030_000001B8
lbl_fn_80593030_000000F4:
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
    beq lbl_fn_80593030_00000134
    sth r31, 0x0(r3)
lbl_fn_80593030_00000134:
    lwz r5, 0x8(r17)
    addi r3, r1, 0x68
    addi r4, r30, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x68
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_80593030_00000160
    sth r31, 0x0(r3)
lbl_fn_80593030_00000160:
    addi r3, r1, 0xe8
    addi r4, r1, 0x68
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_80593030_000001A8
    lwz r3, 0x8(r18)
    bl fn_80686A48
    mr r16, r3
    lwz r3, 0x8(r17)
    bl fn_80686A48
    cmpw r16, r3
    beq lbl_fn_80593030_000001A8
    xor r0, r3, r16
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_80593030_000001B8
lbl_fn_80593030_000001A8:
    lwz r3, 0x8(r18)
    lwz r4, 0x8(r17)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_80593030_000001B8:
    cmpwi r0, 0x0
    beq lbl_fn_80593030_000001C4
    mr r29, r15
lbl_fn_80593030_000001C4:
    addi r15, r15, 0x58
lbl_fn_80593030_000001C8:
    cmplw r15, r14
    bne lbl_fn_80593030_00000058
lbl_fn_80593030_000001D0:
    lwz r18, 0x0(r28)
    cmplw r29, r18
    beq lbl_fn_80593030_0000038C
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
lbl_fn_80593030_0000038C:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x58
    stw r0, 0x0(r28)
lbl_fn_80593030_00000398:
    lwz r3, 0x0(r28)
    lwz r0, 0x168(r1)
    cmplw r3, r0
    bne lbl_fn_80593030_0000003C
lbl_fn_80593030_000003A8:
    lmw r14, 0x178(r1)
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_805933EC(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x290
    stfd f31, 0x290(r1)
    psq_st f31, 0x298(r1), 0, 0
    bl _savegpr_14
    lis r6, 0x6666
    mr r29, r3
    addi r0, r6, 0x6667
    lis r3, 0x2e8c
    stw r0, 0x23c(r1)
    subi r0, r3, 0x5d17
    lfs f31, lbl_80888160
    mr r14, r4
    stw r5, 0x8(r1)
    stw r0, 0x238(r1)
lbl_fn_805933EC_00000400:
    lwz r16, 0x0(r29)
    lwz r15, 0x0(r14)
    lwz r0, 0x238(r1)
    subf r3, r16, r15
    mulhw r0, r0, r3
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r8, r0, r3
    cmpwi r8, 0x1
    ble lbl_fn_805933EC_00001964
    cmpwi r8, 0x14
    bgt lbl_fn_805933EC_00000730
    cmplw r16, r15
    beq lbl_fn_805933EC_00001964
    subi r14, r15, 0x58
    cmplw r16, r14
    beq lbl_fn_805933EC_00001964
    lfs f31, lbl_80888160
    b lbl_fn_805933EC_00000724
lbl_fn_805933EC_0000044C:
    cmplw r16, r15
    mr r17, r16
    beq lbl_fn_805933EC_00000568
    addi r18, r16, 0x58
    b lbl_fn_805933EC_00000560
lbl_fn_805933EC_00000460:
    lwz r3, 0x0(r18)
    bl fn_80206C50
    mr r19, r3
    lwz r3, 0x0(r17)
    bl fn_80206C50
    cmpwi r19, 0x0
    beq lbl_fn_805933EC_0000048C
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_0000048C
    li r0, 0x1
    b lbl_fn_805933EC_00000550
lbl_fn_805933EC_0000048C:
    cmpwi r19, 0x0
    bne lbl_fn_805933EC_000004A4
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_000004A4
    li r0, 0x0
    b lbl_fn_805933EC_00000550
lbl_fn_805933EC_000004A4:
    lwz r4, 0x0(r18)
    lwz r0, 0x0(r17)
    cmpw r4, r0
    bne lbl_fn_805933EC_000004FC
    lwz r0, 0x50(r18)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000004E4
    lwz r4, 0x50(r17)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_000004E4
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_00000550
lbl_fn_805933EC_000004E4:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000004F4
    li r0, 0x1
    b lbl_fn_805933EC_00000550
lbl_fn_805933EC_000004F4:
    li r0, 0x0
    b lbl_fn_805933EC_00000550
lbl_fn_805933EC_000004FC:
    lfs f1, 0x0(r19)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_00000544
    mr r3, r4
    bl fn_80211480
    mr r19, r3
    lwz r3, 0x0(r17)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r19)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_00000550
lbl_fn_805933EC_00000544:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_00000550:
    cmpwi r0, 0x0
    beq lbl_fn_805933EC_0000055C
    mr r17, r18
lbl_fn_805933EC_0000055C:
    addi r18, r18, 0x58
lbl_fn_805933EC_00000560:
    cmplw r18, r15
    bne lbl_fn_805933EC_00000460
lbl_fn_805933EC_00000568:
    cmplw r17, r16
    beq lbl_fn_805933EC_00000720
    lwz r26, 0x8(r17)
    lwz r25, 0xc(r17)
    lwz r24, 0x10(r17)
    lwz r23, 0x14(r17)
    lwz r22, 0x18(r17)
    lwz r21, 0x1c(r17)
    lwz r20, 0x20(r17)
    lwz r19, 0x24(r17)
    lwz r18, 0x28(r17)
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
    lwz r27, 0x0(r17)
    lwz r28, 0x4(r17)
    lwz r29, 0x0(r16)
    stw r29, 0x0(r17)
    lwz r29, 0x4(r16)
    stw r29, 0x4(r17)
    lwz r29, 0xc(r16)
    lwz r30, 0x8(r16)
    stw r30, 0x8(r17)
    stw r29, 0xc(r17)
    lwz r29, 0x14(r16)
    lwz r30, 0x10(r16)
    stw r30, 0x10(r17)
    stw r29, 0x14(r17)
    lwz r29, 0x1c(r16)
    lwz r30, 0x18(r16)
    stw r30, 0x18(r17)
    stw r29, 0x1c(r17)
    lwz r29, 0x24(r16)
    lwz r30, 0x20(r16)
    stw r30, 0x20(r17)
    stw r29, 0x24(r17)
    lwz r29, 0x2c(r16)
    lwz r30, 0x28(r16)
    stw r30, 0x28(r17)
    stw r29, 0x2c(r17)
    lwz r29, 0x34(r16)
    lwz r30, 0x30(r16)
    stw r30, 0x30(r17)
    stw r29, 0x34(r17)
    lwz r29, 0x3c(r16)
    lwz r30, 0x38(r16)
    stw r30, 0x38(r17)
    stw r29, 0x3c(r17)
    lwz r29, 0x44(r16)
    lwz r30, 0x40(r16)
    stw r30, 0x40(r17)
    stw r29, 0x44(r17)
    lwz r29, 0x48(r16)
    stw r29, 0x48(r17)
    lwz r29, 0x4c(r16)
    stw r29, 0x4c(r17)
    lwz r29, 0x50(r16)
    stw r26, 0x1e8(r1)
    stw r25, 0x1ec(r1)
    stw r24, 0x1f0(r1)
    stw r23, 0x1f4(r1)
    stw r22, 0x1f8(r1)
    stw r21, 0x1fc(r1)
    stw r20, 0x200(r1)
    stw r19, 0x204(r1)
    stw r18, 0x208(r1)
    stw r12, 0x20c(r1)
    stw r11, 0x210(r1)
    stw r10, 0x214(r1)
    stw r9, 0x218(r1)
    stw r8, 0x21c(r1)
    stw r7, 0x220(r1)
    stw r6, 0x224(r1)
    stw r5, 0x228(r1)
    stw r4, 0x22c(r1)
    stw r3, 0x230(r1)
    stw r0, 0x234(r1)
    stw r29, 0x50(r17)
    lwz r29, 0x54(r16)
    stw r29, 0x54(r17)
    stw r27, 0x0(r16)
    stw r28, 0x4(r16)
    stw r26, 0x8(r16)
    stw r25, 0xc(r16)
    stw r24, 0x10(r16)
    stw r23, 0x14(r16)
    stw r22, 0x18(r16)
    stw r21, 0x1c(r16)
    stw r20, 0x20(r16)
    stw r19, 0x24(r16)
    stw r18, 0x28(r16)
    stw r12, 0x2c(r16)
    stw r11, 0x30(r16)
    stw r10, 0x34(r16)
    stw r9, 0x38(r16)
    stw r8, 0x3c(r16)
    stw r7, 0x40(r16)
    stw r6, 0x44(r16)
    stw r5, 0x48(r16)
    stw r4, 0x4c(r16)
    stw r3, 0x50(r16)
    stw r0, 0x54(r16)
lbl_fn_805933EC_00000720:
    addi r16, r16, 0x58
lbl_fn_805933EC_00000724:
    cmplw r16, r14
    bne lbl_fn_805933EC_0000044C
    b lbl_fn_805933EC_00001964
lbl_fn_805933EC_00000730:
    srawi r0, r8, 2
    lwz r4, lbl_8087E6C4
    addze r5, r0
    lwz r0, 0x23c(r1)
    addi r6, r4, 0x1
    mulhw r0, r0, r4
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x58
    add r7, r16, r0
    blt lbl_fn_805933EC_00000774
    li r6, -0x4
lbl_fn_805933EC_00000774:
    lwz r0, 0x23c(r1)
    slwi r4, r8, 2
    lwz r5, 0x0(r29)
    mulhw r3, r0, r6
    addi r0, r6, 0x1
    stw r0, lbl_8087E6C4
    cmpwi r0, 0x5
    subf r0, r8, r4
    srawi r0, r0, 2
    addze r4, r0
    srawi r0, r3, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r4, r0
    mulli r0, r0, 0x58
    add r0, r5, r0
    blt lbl_fn_805933EC_000007C8
    li r6, -0x4
    stw r6, lbl_8087E6C4
lbl_fn_805933EC_000007C8:
    lwz r5, 0x0(r14)
    addi r3, r1, 0x24
    lwz r6, 0x8(r1)
    addi r4, r1, 0x20
    subi r30, r5, 0x58
    stw r30, 0x1c(r1)
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    stw r7, 0x24(r1)
    bl fn_80595F7C
    lwz r28, 0x0(r29)
    mr r31, r30
    b lbl_fn_805933EC_00000800
lbl_fn_805933EC_000007FC:
    addi r28, r28, 0x58
lbl_fn_805933EC_00000800:
    lwz r3, 0x0(r28)
    bl fn_80206C50
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r15, 0x0
    beq lbl_fn_805933EC_0000082C
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_0000082C
    li r0, 0x1
    b lbl_fn_805933EC_000008F0
lbl_fn_805933EC_0000082C:
    cmpwi r15, 0x0
    bne lbl_fn_805933EC_00000844
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_00000844
    li r0, 0x0
    b lbl_fn_805933EC_000008F0
lbl_fn_805933EC_00000844:
    lwz r4, 0x0(r28)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_805933EC_0000089C
    lwz r0, 0x50(r28)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_00000884
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_00000884
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_000008F0
lbl_fn_805933EC_00000884:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_00000894
    li r0, 0x1
    b lbl_fn_805933EC_000008F0
lbl_fn_805933EC_00000894:
    li r0, 0x0
    b lbl_fn_805933EC_000008F0
lbl_fn_805933EC_0000089C:
    lfs f1, 0x0(r15)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_000008E4
    mr r3, r4
    bl fn_80211480
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r15)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_000008F0
lbl_fn_805933EC_000008E4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_000008F0:
    cmpwi r0, 0x0
    bne lbl_fn_805933EC_000007FC
lbl_fn_805933EC_000008F8:
    subi r31, r31, 0x58
    cmplw r28, r31
    beq lbl_fn_805933EC_000009FC
    lwz r3, 0x0(r31)
    bl fn_80206C50
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r15, 0x0
    beq lbl_fn_805933EC_00000930
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_00000930
    li r0, 0x1
    b lbl_fn_805933EC_000009F4
lbl_fn_805933EC_00000930:
    cmpwi r15, 0x0
    bne lbl_fn_805933EC_00000948
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_00000948
    li r0, 0x0
    b lbl_fn_805933EC_000009F4
lbl_fn_805933EC_00000948:
    lwz r4, 0x0(r31)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_805933EC_000009A0
    lwz r0, 0x50(r31)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_00000988
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_00000988
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_000009F4
lbl_fn_805933EC_00000988:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_00000998
    li r0, 0x1
    b lbl_fn_805933EC_000009F4
lbl_fn_805933EC_00000998:
    li r0, 0x0
    b lbl_fn_805933EC_000009F4
lbl_fn_805933EC_000009A0:
    lfs f1, 0x0(r15)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_000009E8
    mr r3, r4
    bl fn_80211480
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r15)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_000009F4
lbl_fn_805933EC_000009E8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_000009F4:
    cmpwi r0, 0x0
    beq lbl_fn_805933EC_000008F8
lbl_fn_805933EC_000009FC:
    cmplw r28, r31
    bge lbl_fn_805933EC_00000F7C
    lwz r23, 0x8(r28)
    lwz r22, 0xc(r28)
    lwz r21, 0x10(r28)
    lwz r20, 0x14(r28)
    lwz r19, 0x18(r28)
    lwz r18, 0x1c(r28)
    lwz r17, 0x20(r28)
    lwz r16, 0x24(r28)
    lwz r15, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r27, 0x0(r28)
    lwz r24, 0x4(r28)
    lwz r25, 0x0(r31)
    stw r25, 0x0(r28)
    lwz r25, 0x4(r31)
    stw r25, 0x4(r28)
    lwz r25, 0xc(r31)
    lwz r26, 0x8(r31)
    stw r26, 0x8(r28)
    stw r25, 0xc(r28)
    lwz r25, 0x14(r31)
    lwz r26, 0x10(r31)
    stw r26, 0x10(r28)
    stw r25, 0x14(r28)
    lwz r25, 0x1c(r31)
    lwz r26, 0x18(r31)
    stw r26, 0x18(r28)
    stw r25, 0x1c(r28)
    lwz r25, 0x24(r31)
    lwz r26, 0x20(r31)
    stw r26, 0x20(r28)
    stw r25, 0x24(r28)
    lwz r25, 0x2c(r31)
    lwz r26, 0x28(r31)
    stw r26, 0x28(r28)
    stw r25, 0x2c(r28)
    lwz r25, 0x34(r31)
    lwz r26, 0x30(r31)
    stw r26, 0x30(r28)
    stw r25, 0x34(r28)
    lwz r25, 0x3c(r31)
    lwz r26, 0x38(r31)
    stw r26, 0x38(r28)
    stw r25, 0x3c(r28)
    lwz r25, 0x44(r31)
    lwz r26, 0x40(r31)
    stw r26, 0x40(r28)
    stw r25, 0x44(r28)
    lwz r25, 0x48(r31)
    stw r25, 0x48(r28)
    lwz r25, 0x4c(r31)
    stw r25, 0x4c(r28)
    lwz r25, 0x50(r31)
    stw r23, 0x190(r1)
    stw r22, 0x194(r1)
    stw r21, 0x198(r1)
    stw r20, 0x19c(r1)
    stw r19, 0x1a0(r1)
    stw r18, 0x1a4(r1)
    stw r17, 0x1a8(r1)
    stw r16, 0x1ac(r1)
    stw r15, 0x1b0(r1)
    stw r12, 0x1b4(r1)
    stw r11, 0x1b8(r1)
    stw r10, 0x1bc(r1)
    stw r9, 0x1c0(r1)
    stw r8, 0x1c4(r1)
    stw r7, 0x1c8(r1)
    stw r6, 0x1cc(r1)
    stw r5, 0x1d0(r1)
    stw r4, 0x1d4(r1)
    stw r3, 0x1d8(r1)
    stw r0, 0x1dc(r1)
    stw r25, 0x50(r28)
    lwz r25, 0x54(r31)
    stw r25, 0x54(r28)
    addi r28, r28, 0x58
    stw r27, 0x0(r31)
    stw r24, 0x4(r31)
    stw r23, 0x8(r31)
    stw r22, 0xc(r31)
    stw r21, 0x10(r31)
    stw r20, 0x14(r31)
    stw r19, 0x18(r31)
    stw r18, 0x1c(r31)
    stw r17, 0x20(r31)
    stw r16, 0x24(r31)
    stw r15, 0x28(r31)
    stw r12, 0x2c(r31)
    stw r11, 0x30(r31)
    stw r10, 0x34(r31)
    stw r9, 0x38(r31)
    stw r8, 0x3c(r31)
    stw r7, 0x40(r31)
    stw r6, 0x44(r31)
    stw r5, 0x48(r31)
    stw r4, 0x4c(r31)
    stw r3, 0x50(r31)
    stw r0, 0x54(r31)
    b lbl_fn_805933EC_00000BC0
lbl_fn_805933EC_00000BBC:
    addi r28, r28, 0x58
lbl_fn_805933EC_00000BC0:
    lwz r3, 0x0(r28)
    bl fn_80206C50
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r15, 0x0
    beq lbl_fn_805933EC_00000BEC
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_00000BEC
    li r0, 0x1
    b lbl_fn_805933EC_00000CB0
lbl_fn_805933EC_00000BEC:
    cmpwi r15, 0x0
    bne lbl_fn_805933EC_00000C04
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_00000C04
    li r0, 0x0
    b lbl_fn_805933EC_00000CB0
lbl_fn_805933EC_00000C04:
    lwz r4, 0x0(r28)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_805933EC_00000C5C
    lwz r0, 0x50(r28)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_00000C44
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_00000C44
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_00000CB0
lbl_fn_805933EC_00000C44:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_00000C54
    li r0, 0x1
    b lbl_fn_805933EC_00000CB0
lbl_fn_805933EC_00000C54:
    li r0, 0x0
    b lbl_fn_805933EC_00000CB0
lbl_fn_805933EC_00000C5C:
    lfs f1, 0x0(r15)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_00000CA4
    mr r3, r4
    bl fn_80211480
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r15)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_00000CB0
lbl_fn_805933EC_00000CA4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_00000CB0:
    cmpwi r0, 0x0
    bne lbl_fn_805933EC_00000BBC
lbl_fn_805933EC_00000CB8:
    lwzu r3, -0x58(r31)
    bl fn_80206C50
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r15, 0x0
    beq lbl_fn_805933EC_00000CE4
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_00000CE4
    li r0, 0x1
    b lbl_fn_805933EC_00000DA8
lbl_fn_805933EC_00000CE4:
    cmpwi r15, 0x0
    bne lbl_fn_805933EC_00000CFC
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_00000CFC
    li r0, 0x0
    b lbl_fn_805933EC_00000DA8
lbl_fn_805933EC_00000CFC:
    lwz r4, 0x0(r31)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_805933EC_00000D54
    lwz r0, 0x50(r31)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_00000D3C
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_00000D3C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_00000DA8
lbl_fn_805933EC_00000D3C:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_00000D4C
    li r0, 0x1
    b lbl_fn_805933EC_00000DA8
lbl_fn_805933EC_00000D4C:
    li r0, 0x0
    b lbl_fn_805933EC_00000DA8
lbl_fn_805933EC_00000D54:
    lfs f1, 0x0(r15)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_00000D9C
    mr r3, r4
    bl fn_80211480
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r15)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_00000DA8
lbl_fn_805933EC_00000D9C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_00000DA8:
    cmpwi r0, 0x0
    beq lbl_fn_805933EC_00000CB8
    xor r0, r31, r28
    cntlzw r0, r0
    slw r0, r31, r0
    srwi. r0, r0, 31
    beq lbl_fn_805933EC_00000F7C
    lwz r19, 0x8(r28)
    lwz r20, 0xc(r28)
    lwz r21, 0x10(r28)
    lwz r22, 0x14(r28)
    lwz r23, 0x18(r28)
    lwz r24, 0x1c(r28)
    lwz r25, 0x20(r28)
    lwz r26, 0x24(r28)
    lwz r27, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r18, 0x0(r28)
    lwz r17, 0x4(r28)
    lwz r15, 0x0(r31)
    stw r15, 0x0(r28)
    lwz r15, 0x4(r31)
    stw r15, 0x4(r28)
    lwz r15, 0xc(r31)
    lwz r16, 0x8(r31)
    stw r16, 0x8(r28)
    stw r15, 0xc(r28)
    lwz r15, 0x14(r31)
    lwz r16, 0x10(r31)
    stw r16, 0x10(r28)
    stw r15, 0x14(r28)
    lwz r15, 0x1c(r31)
    lwz r16, 0x18(r31)
    stw r16, 0x18(r28)
    stw r15, 0x1c(r28)
    lwz r15, 0x24(r31)
    lwz r16, 0x20(r31)
    stw r16, 0x20(r28)
    stw r15, 0x24(r28)
    lwz r15, 0x2c(r31)
    lwz r16, 0x28(r31)
    stw r16, 0x28(r28)
    stw r15, 0x2c(r28)
    lwz r15, 0x34(r31)
    lwz r16, 0x30(r31)
    stw r16, 0x30(r28)
    stw r15, 0x34(r28)
    lwz r15, 0x3c(r31)
    lwz r16, 0x38(r31)
    stw r16, 0x38(r28)
    stw r15, 0x3c(r28)
    lwz r16, 0x44(r31)
    lwz r15, 0x40(r31)
    stw r15, 0x40(r28)
    stw r16, 0x44(r28)
    lwz r15, 0x48(r31)
    stw r15, 0x48(r28)
    lwz r15, 0x4c(r31)
    stw r15, 0x4c(r28)
    lwz r15, 0x50(r31)
    stw r19, 0x138(r1)
    stw r20, 0x13c(r1)
    stw r21, 0x140(r1)
    stw r22, 0x144(r1)
    stw r23, 0x148(r1)
    stw r24, 0x14c(r1)
    stw r25, 0x150(r1)
    stw r26, 0x154(r1)
    stw r27, 0x158(r1)
    stw r12, 0x15c(r1)
    stw r11, 0x160(r1)
    stw r10, 0x164(r1)
    stw r9, 0x168(r1)
    stw r8, 0x16c(r1)
    stw r7, 0x170(r1)
    stw r6, 0x174(r1)
    stw r5, 0x178(r1)
    stw r4, 0x17c(r1)
    stw r3, 0x180(r1)
    stw r0, 0x184(r1)
    stw r15, 0x50(r28)
    lwz r15, 0x54(r31)
    stw r15, 0x54(r28)
    addi r28, r28, 0x58
    stw r18, 0x0(r31)
    stw r17, 0x4(r31)
    stw r19, 0x8(r31)
    stw r20, 0xc(r31)
    stw r21, 0x10(r31)
    stw r22, 0x14(r31)
    stw r23, 0x18(r31)
    stw r24, 0x1c(r31)
    stw r25, 0x20(r31)
    stw r26, 0x24(r31)
    stw r27, 0x28(r31)
    stw r12, 0x2c(r31)
    stw r11, 0x30(r31)
    stw r10, 0x34(r31)
    stw r9, 0x38(r31)
    stw r8, 0x3c(r31)
    stw r7, 0x40(r31)
    stw r6, 0x44(r31)
    stw r5, 0x48(r31)
    stw r4, 0x4c(r31)
    stw r3, 0x50(r31)
    stw r0, 0x54(r31)
    b lbl_fn_805933EC_00000BC0
lbl_fn_805933EC_00000F7C:
    lwz r6, 0x0(r29)
    cmplw r28, r6
    bne lbl_fn_805933EC_000018E8
    lwz r23, 0x8(r28)
    lwz r22, 0xc(r28)
    lwz r21, 0x10(r28)
    lwz r20, 0x14(r28)
    lwz r19, 0x18(r28)
    lwz r18, 0x1c(r28)
    lwz r17, 0x20(r28)
    lwz r16, 0x24(r28)
    lwz r15, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r24, 0x0(r28)
    lwz r25, 0x4(r28)
    lwz r26, 0x0(r30)
    stw r26, 0x0(r28)
    lwz r26, 0x4(r30)
    stw r26, 0x4(r28)
    lwz r26, 0xc(r30)
    lwz r27, 0x8(r30)
    stw r27, 0x8(r28)
    stw r26, 0xc(r28)
    lwz r26, 0x14(r30)
    lwz r27, 0x10(r30)
    stw r27, 0x10(r28)
    stw r26, 0x14(r28)
    lwz r26, 0x1c(r30)
    lwz r27, 0x18(r30)
    stw r27, 0x18(r28)
    stw r26, 0x1c(r28)
    lwz r26, 0x24(r30)
    lwz r27, 0x20(r30)
    stw r27, 0x20(r28)
    stw r26, 0x24(r28)
    lwz r26, 0x2c(r30)
    lwz r27, 0x28(r30)
    stw r27, 0x28(r28)
    stw r26, 0x2c(r28)
    lwz r26, 0x34(r30)
    lwz r27, 0x30(r30)
    stw r27, 0x30(r28)
    stw r26, 0x34(r28)
    lwz r26, 0x3c(r30)
    lwz r27, 0x38(r30)
    stw r27, 0x38(r28)
    stw r26, 0x3c(r28)
    lwz r26, 0x44(r30)
    lwz r27, 0x40(r30)
    stw r27, 0x40(r28)
    stw r26, 0x44(r28)
    lwz r26, 0x48(r30)
    stw r26, 0x48(r28)
    lwz r26, 0x4c(r30)
    stw r26, 0x4c(r28)
    lwz r26, 0x50(r30)
    stw r23, 0xe0(r1)
    stw r22, 0xe4(r1)
    stw r21, 0xe8(r1)
    stw r20, 0xec(r1)
    stw r19, 0xf0(r1)
    stw r18, 0xf4(r1)
    stw r17, 0xf8(r1)
    stw r16, 0xfc(r1)
    stw r15, 0x100(r1)
    stw r12, 0x104(r1)
    stw r11, 0x108(r1)
    stw r10, 0x10c(r1)
    stw r9, 0x110(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r5, 0x120(r1)
    stw r4, 0x124(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    stw r26, 0x50(r28)
    lwz r26, 0x54(r30)
    stw r26, 0x54(r28)
    addi r28, r28, 0x58
    stw r24, 0x0(r30)
    stw r25, 0x4(r30)
    stw r23, 0x8(r30)
    stw r22, 0xc(r30)
    stw r21, 0x10(r30)
    stw r20, 0x14(r30)
    stw r19, 0x18(r30)
    stw r18, 0x1c(r30)
    stw r17, 0x20(r30)
    stw r16, 0x24(r30)
    stw r15, 0x28(r30)
    stw r12, 0x2c(r30)
    stw r11, 0x30(r30)
    stw r10, 0x34(r30)
    stw r9, 0x38(r30)
    stw r8, 0x3c(r30)
    stw r7, 0x40(r30)
    stw r6, 0x44(r30)
    stw r5, 0x48(r30)
    stw r4, 0x4c(r30)
    stw r3, 0x50(r30)
    stw r0, 0x54(r30)
    lwz r17, 0x0(r29)
    lwz r4, 0x0(r14)
    lwz r3, 0x0(r17)
    subi r15, r4, 0x58
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_805933EC_00001174
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_00001174
    li r0, 0x1
    b lbl_fn_805933EC_00001238
lbl_fn_805933EC_00001174:
    cmpwi r16, 0x0
    bne lbl_fn_805933EC_0000118C
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_0000118C
    li r0, 0x0
    b lbl_fn_805933EC_00001238
lbl_fn_805933EC_0000118C:
    lwz r4, 0x0(r17)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_805933EC_000011E4
    lwz r0, 0x50(r17)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000011CC
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_000011CC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_00001238
lbl_fn_805933EC_000011CC:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000011DC
    li r0, 0x1
    b lbl_fn_805933EC_00001238
lbl_fn_805933EC_000011DC:
    li r0, 0x0
    b lbl_fn_805933EC_00001238
lbl_fn_805933EC_000011E4:
    lfs f1, 0x0(r16)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_0000122C
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_00001238
lbl_fn_805933EC_0000122C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_00001238:
    cmpwi r0, 0x0
    bne lbl_fn_805933EC_00001508
    b lbl_fn_805933EC_00001248
lbl_fn_805933EC_00001244:
    addi r28, r28, 0x58
lbl_fn_805933EC_00001248:
    lwz r0, 0x0(r14)
    cmplw r28, r0
    beq lbl_fn_805933EC_00001350
    lwz r17, 0x0(r29)
    lwz r3, 0x0(r17)
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r28)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_805933EC_00001284
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_00001284
    li r0, 0x1
    b lbl_fn_805933EC_00001348
lbl_fn_805933EC_00001284:
    cmpwi r16, 0x0
    bne lbl_fn_805933EC_0000129C
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_0000129C
    li r0, 0x0
    b lbl_fn_805933EC_00001348
lbl_fn_805933EC_0000129C:
    lwz r4, 0x0(r17)
    lwz r0, 0x0(r28)
    cmpw r4, r0
    bne lbl_fn_805933EC_000012F4
    lwz r0, 0x50(r17)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000012DC
    lwz r4, 0x50(r28)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_000012DC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_00001348
lbl_fn_805933EC_000012DC:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000012EC
    li r0, 0x1
    b lbl_fn_805933EC_00001348
lbl_fn_805933EC_000012EC:
    li r0, 0x0
    b lbl_fn_805933EC_00001348
lbl_fn_805933EC_000012F4:
    lfs f1, 0x0(r16)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_0000133C
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r28)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_00001348
lbl_fn_805933EC_0000133C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_00001348:
    cmpwi r0, 0x0
    beq lbl_fn_805933EC_00001244
lbl_fn_805933EC_00001350:
    cmplw r28, r15
    bge lbl_fn_805933EC_00001508
    lwz r24, 0x8(r28)
    lwz r23, 0xc(r28)
    lwz r22, 0x10(r28)
    lwz r21, 0x14(r28)
    lwz r20, 0x18(r28)
    lwz r19, 0x1c(r28)
    lwz r18, 0x20(r28)
    lwz r17, 0x24(r28)
    lwz r16, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r25, 0x0(r28)
    lwz r26, 0x4(r28)
    lwz r27, 0x0(r15)
    stw r27, 0x0(r28)
    lwz r27, 0x4(r15)
    stw r27, 0x4(r28)
    lwz r27, 0xc(r15)
    lwz r30, 0x8(r15)
    stw r30, 0x8(r28)
    stw r27, 0xc(r28)
    lwz r27, 0x14(r15)
    lwz r30, 0x10(r15)
    stw r30, 0x10(r28)
    stw r27, 0x14(r28)
    lwz r27, 0x1c(r15)
    lwz r30, 0x18(r15)
    stw r30, 0x18(r28)
    stw r27, 0x1c(r28)
    lwz r27, 0x24(r15)
    lwz r30, 0x20(r15)
    stw r30, 0x20(r28)
    stw r27, 0x24(r28)
    lwz r27, 0x2c(r15)
    lwz r30, 0x28(r15)
    stw r30, 0x28(r28)
    stw r27, 0x2c(r28)
    lwz r27, 0x34(r15)
    lwz r30, 0x30(r15)
    stw r30, 0x30(r28)
    stw r27, 0x34(r28)
    lwz r27, 0x3c(r15)
    lwz r30, 0x38(r15)
    stw r30, 0x38(r28)
    stw r27, 0x3c(r28)
    lwz r27, 0x44(r15)
    lwz r30, 0x40(r15)
    stw r30, 0x40(r28)
    stw r27, 0x44(r28)
    lwz r27, 0x48(r15)
    stw r27, 0x48(r28)
    lwz r27, 0x4c(r15)
    stw r27, 0x4c(r28)
    lwz r27, 0x50(r15)
    stw r24, 0x88(r1)
    stw r23, 0x8c(r1)
    stw r22, 0x90(r1)
    stw r21, 0x94(r1)
    stw r20, 0x98(r1)
    stw r19, 0x9c(r1)
    stw r18, 0xa0(r1)
    stw r17, 0xa4(r1)
    stw r16, 0xa8(r1)
    stw r12, 0xac(r1)
    stw r11, 0xb0(r1)
    stw r10, 0xb4(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r6, 0xc4(r1)
    stw r5, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    stw r27, 0x50(r28)
    lwz r27, 0x54(r15)
    stw r27, 0x54(r28)
    stw r25, 0x0(r15)
    stw r26, 0x4(r15)
    stw r24, 0x8(r15)
    stw r23, 0xc(r15)
    stw r22, 0x10(r15)
    stw r21, 0x14(r15)
    stw r20, 0x18(r15)
    stw r19, 0x1c(r15)
    stw r18, 0x20(r15)
    stw r17, 0x24(r15)
    stw r16, 0x28(r15)
    stw r12, 0x2c(r15)
    stw r11, 0x30(r15)
    stw r10, 0x34(r15)
    stw r9, 0x38(r15)
    stw r8, 0x3c(r15)
    stw r7, 0x40(r15)
    stw r6, 0x44(r15)
    stw r5, 0x48(r15)
    stw r4, 0x4c(r15)
    stw r3, 0x50(r15)
    stw r0, 0x54(r15)
lbl_fn_805933EC_00001508:
    cmplw r28, r15
    bge lbl_fn_805933EC_000018E0
    b lbl_fn_805933EC_00001518
lbl_fn_805933EC_00001514:
    addi r28, r28, 0x58
lbl_fn_805933EC_00001518:
    lwz r17, 0x0(r29)
    lwz r3, 0x0(r17)
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r28)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_805933EC_00001548
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_00001548
    li r0, 0x1
    b lbl_fn_805933EC_0000160C
lbl_fn_805933EC_00001548:
    cmpwi r16, 0x0
    bne lbl_fn_805933EC_00001560
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_00001560
    li r0, 0x0
    b lbl_fn_805933EC_0000160C
lbl_fn_805933EC_00001560:
    lwz r4, 0x0(r17)
    lwz r0, 0x0(r28)
    cmpw r4, r0
    bne lbl_fn_805933EC_000015B8
    lwz r0, 0x50(r17)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000015A0
    lwz r4, 0x50(r28)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_000015A0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_0000160C
lbl_fn_805933EC_000015A0:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000015B0
    li r0, 0x1
    b lbl_fn_805933EC_0000160C
lbl_fn_805933EC_000015B0:
    li r0, 0x0
    b lbl_fn_805933EC_0000160C
lbl_fn_805933EC_000015B8:
    lfs f1, 0x0(r16)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_00001600
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r28)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_0000160C
lbl_fn_805933EC_00001600:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_0000160C:
    cmpwi r0, 0x0
    beq lbl_fn_805933EC_00001514
lbl_fn_805933EC_00001614:
    lwz r17, 0x0(r29)
    subi r15, r15, 0x58
    lwz r3, 0x0(r17)
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_805933EC_00001648
    cmpwi r3, 0x0
    bne lbl_fn_805933EC_00001648
    li r0, 0x1
    b lbl_fn_805933EC_0000170C
lbl_fn_805933EC_00001648:
    cmpwi r16, 0x0
    bne lbl_fn_805933EC_00001660
    cmpwi r3, 0x0
    beq lbl_fn_805933EC_00001660
    li r0, 0x0
    b lbl_fn_805933EC_0000170C
lbl_fn_805933EC_00001660:
    lwz r4, 0x0(r17)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_805933EC_000016B8
    lwz r0, 0x50(r17)
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000016A0
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_805933EC_000016A0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805933EC_0000170C
lbl_fn_805933EC_000016A0:
    cmpwi r0, 0x0
    blt lbl_fn_805933EC_000016B0
    li r0, 0x1
    b lbl_fn_805933EC_0000170C
lbl_fn_805933EC_000016B0:
    li r0, 0x0
    b lbl_fn_805933EC_0000170C
lbl_fn_805933EC_000016B8:
    lfs f1, 0x0(r16)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805933EC_00001700
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805933EC_0000170C
lbl_fn_805933EC_00001700:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805933EC_0000170C:
    cmpwi r0, 0x0
    bne lbl_fn_805933EC_00001614
    xor r0, r15, r28
    cntlzw r0, r0
    slw r0, r15, r0
    srwi. r0, r0, 31
    beq lbl_fn_805933EC_000018E0
    lwz r24, 0x8(r28)
    lwz r23, 0xc(r28)
    lwz r22, 0x10(r28)
    lwz r21, 0x14(r28)
    lwz r20, 0x18(r28)
    lwz r19, 0x1c(r28)
    lwz r18, 0x20(r28)
    lwz r17, 0x24(r28)
    lwz r16, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r25, 0x0(r28)
    lwz r26, 0x4(r28)
    lwz r27, 0x0(r15)
    stw r27, 0x0(r28)
    lwz r27, 0x4(r15)
    stw r27, 0x4(r28)
    lwz r27, 0xc(r15)
    lwz r30, 0x8(r15)
    stw r30, 0x8(r28)
    stw r27, 0xc(r28)
    lwz r27, 0x14(r15)
    lwz r30, 0x10(r15)
    stw r30, 0x10(r28)
    stw r27, 0x14(r28)
    lwz r27, 0x1c(r15)
    lwz r30, 0x18(r15)
    stw r30, 0x18(r28)
    stw r27, 0x1c(r28)
    lwz r27, 0x24(r15)
    lwz r30, 0x20(r15)
    stw r30, 0x20(r28)
    stw r27, 0x24(r28)
    lwz r27, 0x2c(r15)
    lwz r30, 0x28(r15)
    stw r30, 0x28(r28)
    stw r27, 0x2c(r28)
    lwz r27, 0x34(r15)
    lwz r30, 0x30(r15)
    stw r30, 0x30(r28)
    stw r27, 0x34(r28)
    lwz r27, 0x3c(r15)
    lwz r30, 0x38(r15)
    stw r30, 0x38(r28)
    stw r27, 0x3c(r28)
    lwz r27, 0x44(r15)
    lwz r30, 0x40(r15)
    stw r30, 0x40(r28)
    stw r27, 0x44(r28)
    lwz r27, 0x48(r15)
    stw r27, 0x48(r28)
    lwz r27, 0x4c(r15)
    stw r27, 0x4c(r28)
    lwz r27, 0x50(r15)
    stw r24, 0x30(r1)
    stw r23, 0x34(r1)
    stw r22, 0x38(r1)
    stw r21, 0x3c(r1)
    stw r20, 0x40(r1)
    stw r19, 0x44(r1)
    stw r18, 0x48(r1)
    stw r17, 0x4c(r1)
    stw r16, 0x50(r1)
    stw r12, 0x54(r1)
    stw r11, 0x58(r1)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r27, 0x50(r28)
    lwz r27, 0x54(r15)
    stw r27, 0x54(r28)
    addi r28, r28, 0x58
    stw r25, 0x0(r15)
    stw r26, 0x4(r15)
    stw r24, 0x8(r15)
    stw r23, 0xc(r15)
    stw r22, 0x10(r15)
    stw r21, 0x14(r15)
    stw r20, 0x18(r15)
    stw r19, 0x1c(r15)
    stw r18, 0x20(r15)
    stw r17, 0x24(r15)
    stw r16, 0x28(r15)
    stw r12, 0x2c(r15)
    stw r11, 0x30(r15)
    stw r10, 0x34(r15)
    stw r9, 0x38(r15)
    stw r8, 0x3c(r15)
    stw r7, 0x40(r15)
    stw r6, 0x44(r15)
    stw r5, 0x48(r15)
    stw r4, 0x4c(r15)
    stw r3, 0x50(r15)
    stw r0, 0x54(r15)
    b lbl_fn_805933EC_00001518
lbl_fn_805933EC_000018E0:
    stw r28, 0x0(r29)
    b lbl_fn_805933EC_00000400
lbl_fn_805933EC_000018E8:
    lis r3, 0x2e8c
    lwz r4, 0x0(r14)
    subf r0, r6, r28
    subi r5, r3, 0x5d17
    mulhw r3, r5, r0
    subf r0, r28, r4
    mulhw r0, r5, r0
    srawi r3, r3, 4
    srwi r5, r3, 31
    srawi r0, r0, 4
    add r5, r3, r5
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r5, r0
    bge lbl_fn_805933EC_00001944
    stw r28, 0x14(r1)
    addi r3, r1, 0x18
    lwz r5, 0x8(r1)
    addi r4, r1, 0x14
    stw r6, 0x18(r1)
    bl fn_805949B4
    stw r28, 0x0(r29)
    b lbl_fn_805933EC_00000400
lbl_fn_805933EC_00001944:
    stw r4, 0xc(r1)
    addi r3, r1, 0x10
    lwz r5, 0x8(r1)
    addi r4, r1, 0xc
    stw r28, 0x10(r1)
    bl fn_805949B4
    stw r28, 0x0(r14)
    b lbl_fn_805933EC_00000400
lbl_fn_805933EC_00001964:
    addi r11, r1, 0x290
    psq_l f31, 0x298(r1), 0, 0
    lfd f31, 0x290(r1)
    bl _restgpr_14
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_805949B4(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x290
    stfd f31, 0x290(r1)
    psq_st f31, 0x298(r1), 0, 0
    bl _savegpr_14
    lis r6, 0x6666
    mr r29, r3
    addi r0, r6, 0x6667
    lis r3, 0x2e8c
    stw r0, 0x23c(r1)
    subi r0, r3, 0x5d17
    lfs f31, lbl_80888160
    mr r14, r4
    stw r5, 0x8(r1)
    stw r0, 0x238(r1)
lbl_fn_805949B4_000019C8:
    lwz r16, 0x0(r29)
    lwz r15, 0x0(r14)
    lwz r0, 0x238(r1)
    subf r3, r16, r15
    mulhw r0, r0, r3
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r8, r0, r3
    cmpwi r8, 0x1
    ble lbl_fn_805949B4_00002F2C
    cmpwi r8, 0x14
    bgt lbl_fn_805949B4_00001CF8
    cmplw r16, r15
    beq lbl_fn_805949B4_00002F2C
    subi r14, r15, 0x58
    cmplw r16, r14
    beq lbl_fn_805949B4_00002F2C
    lfs f31, lbl_80888160
    b lbl_fn_805949B4_00001CEC
lbl_fn_805949B4_00001A14:
    cmplw r16, r15
    mr r17, r16
    beq lbl_fn_805949B4_00001B30
    addi r18, r16, 0x58
    b lbl_fn_805949B4_00001B28
lbl_fn_805949B4_00001A28:
    lwz r3, 0x0(r18)
    bl fn_80206C50
    mr r19, r3
    lwz r3, 0x0(r17)
    bl fn_80206C50
    cmpwi r19, 0x0
    beq lbl_fn_805949B4_00001A54
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_00001A54
    li r0, 0x1
    b lbl_fn_805949B4_00001B18
lbl_fn_805949B4_00001A54:
    cmpwi r19, 0x0
    bne lbl_fn_805949B4_00001A6C
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_00001A6C
    li r0, 0x0
    b lbl_fn_805949B4_00001B18
lbl_fn_805949B4_00001A6C:
    lwz r4, 0x0(r18)
    lwz r0, 0x0(r17)
    cmpw r4, r0
    bne lbl_fn_805949B4_00001AC4
    lwz r0, 0x50(r18)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00001AAC
    lwz r4, 0x50(r17)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_00001AAC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00001B18
lbl_fn_805949B4_00001AAC:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00001ABC
    li r0, 0x1
    b lbl_fn_805949B4_00001B18
lbl_fn_805949B4_00001ABC:
    li r0, 0x0
    b lbl_fn_805949B4_00001B18
lbl_fn_805949B4_00001AC4:
    lfs f1, 0x0(r19)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_00001B0C
    mr r3, r4
    bl fn_80211480
    mr r19, r3
    lwz r3, 0x0(r17)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r19)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00001B18
lbl_fn_805949B4_00001B0C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00001B18:
    cmpwi r0, 0x0
    beq lbl_fn_805949B4_00001B24
    mr r17, r18
lbl_fn_805949B4_00001B24:
    addi r18, r18, 0x58
lbl_fn_805949B4_00001B28:
    cmplw r18, r15
    bne lbl_fn_805949B4_00001A28
lbl_fn_805949B4_00001B30:
    cmplw r17, r16
    beq lbl_fn_805949B4_00001CE8
    lwz r26, 0x8(r17)
    lwz r25, 0xc(r17)
    lwz r24, 0x10(r17)
    lwz r23, 0x14(r17)
    lwz r22, 0x18(r17)
    lwz r21, 0x1c(r17)
    lwz r20, 0x20(r17)
    lwz r19, 0x24(r17)
    lwz r18, 0x28(r17)
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
    lwz r27, 0x0(r17)
    lwz r28, 0x4(r17)
    lwz r29, 0x0(r16)
    stw r29, 0x0(r17)
    lwz r29, 0x4(r16)
    stw r29, 0x4(r17)
    lwz r29, 0xc(r16)
    lwz r30, 0x8(r16)
    stw r30, 0x8(r17)
    stw r29, 0xc(r17)
    lwz r29, 0x14(r16)
    lwz r30, 0x10(r16)
    stw r30, 0x10(r17)
    stw r29, 0x14(r17)
    lwz r29, 0x1c(r16)
    lwz r30, 0x18(r16)
    stw r30, 0x18(r17)
    stw r29, 0x1c(r17)
    lwz r29, 0x24(r16)
    lwz r30, 0x20(r16)
    stw r30, 0x20(r17)
    stw r29, 0x24(r17)
    lwz r29, 0x2c(r16)
    lwz r30, 0x28(r16)
    stw r30, 0x28(r17)
    stw r29, 0x2c(r17)
    lwz r29, 0x34(r16)
    lwz r30, 0x30(r16)
    stw r30, 0x30(r17)
    stw r29, 0x34(r17)
    lwz r29, 0x3c(r16)
    lwz r30, 0x38(r16)
    stw r30, 0x38(r17)
    stw r29, 0x3c(r17)
    lwz r29, 0x44(r16)
    lwz r30, 0x40(r16)
    stw r30, 0x40(r17)
    stw r29, 0x44(r17)
    lwz r29, 0x48(r16)
    stw r29, 0x48(r17)
    lwz r29, 0x4c(r16)
    stw r29, 0x4c(r17)
    lwz r29, 0x50(r16)
    stw r26, 0x1e8(r1)
    stw r25, 0x1ec(r1)
    stw r24, 0x1f0(r1)
    stw r23, 0x1f4(r1)
    stw r22, 0x1f8(r1)
    stw r21, 0x1fc(r1)
    stw r20, 0x200(r1)
    stw r19, 0x204(r1)
    stw r18, 0x208(r1)
    stw r12, 0x20c(r1)
    stw r11, 0x210(r1)
    stw r10, 0x214(r1)
    stw r9, 0x218(r1)
    stw r8, 0x21c(r1)
    stw r7, 0x220(r1)
    stw r6, 0x224(r1)
    stw r5, 0x228(r1)
    stw r4, 0x22c(r1)
    stw r3, 0x230(r1)
    stw r0, 0x234(r1)
    stw r29, 0x50(r17)
    lwz r29, 0x54(r16)
    stw r29, 0x54(r17)
    stw r27, 0x0(r16)
    stw r28, 0x4(r16)
    stw r26, 0x8(r16)
    stw r25, 0xc(r16)
    stw r24, 0x10(r16)
    stw r23, 0x14(r16)
    stw r22, 0x18(r16)
    stw r21, 0x1c(r16)
    stw r20, 0x20(r16)
    stw r19, 0x24(r16)
    stw r18, 0x28(r16)
    stw r12, 0x2c(r16)
    stw r11, 0x30(r16)
    stw r10, 0x34(r16)
    stw r9, 0x38(r16)
    stw r8, 0x3c(r16)
    stw r7, 0x40(r16)
    stw r6, 0x44(r16)
    stw r5, 0x48(r16)
    stw r4, 0x4c(r16)
    stw r3, 0x50(r16)
    stw r0, 0x54(r16)
lbl_fn_805949B4_00001CE8:
    addi r16, r16, 0x58
lbl_fn_805949B4_00001CEC:
    cmplw r16, r14
    bne lbl_fn_805949B4_00001A14
    b lbl_fn_805949B4_00002F2C
lbl_fn_805949B4_00001CF8:
    srawi r0, r8, 2
    lwz r4, lbl_8087E6C8
    addze r5, r0
    lwz r0, 0x23c(r1)
    addi r6, r4, 0x1
    mulhw r0, r0, r4
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x58
    add r7, r16, r0
    blt lbl_fn_805949B4_00001D3C
    li r6, -0x4
lbl_fn_805949B4_00001D3C:
    lwz r0, 0x23c(r1)
    slwi r4, r8, 2
    lwz r5, 0x0(r29)
    mulhw r3, r0, r6
    addi r0, r6, 0x1
    stw r0, lbl_8087E6C8
    cmpwi r0, 0x5
    subf r0, r8, r4
    srawi r0, r0, 2
    addze r4, r0
    srawi r0, r3, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r4, r0
    mulli r0, r0, 0x58
    add r0, r5, r0
    blt lbl_fn_805949B4_00001D90
    li r6, -0x4
    stw r6, lbl_8087E6C8
lbl_fn_805949B4_00001D90:
    lwz r5, 0x0(r14)
    addi r3, r1, 0x24
    lwz r6, 0x8(r1)
    addi r4, r1, 0x20
    subi r30, r5, 0x58
    stw r30, 0x1c(r1)
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    stw r7, 0x24(r1)
    bl fn_80595F7C
    lwz r28, 0x0(r29)
    mr r31, r30
    b lbl_fn_805949B4_00001DC8
lbl_fn_805949B4_00001DC4:
    addi r28, r28, 0x58
lbl_fn_805949B4_00001DC8:
    lwz r3, 0x0(r28)
    bl fn_80206C50
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r15, 0x0
    beq lbl_fn_805949B4_00001DF4
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_00001DF4
    li r0, 0x1
    b lbl_fn_805949B4_00001EB8
lbl_fn_805949B4_00001DF4:
    cmpwi r15, 0x0
    bne lbl_fn_805949B4_00001E0C
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_00001E0C
    li r0, 0x0
    b lbl_fn_805949B4_00001EB8
lbl_fn_805949B4_00001E0C:
    lwz r4, 0x0(r28)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_805949B4_00001E64
    lwz r0, 0x50(r28)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00001E4C
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_00001E4C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00001EB8
lbl_fn_805949B4_00001E4C:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00001E5C
    li r0, 0x1
    b lbl_fn_805949B4_00001EB8
lbl_fn_805949B4_00001E5C:
    li r0, 0x0
    b lbl_fn_805949B4_00001EB8
lbl_fn_805949B4_00001E64:
    lfs f1, 0x0(r15)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_00001EAC
    mr r3, r4
    bl fn_80211480
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r15)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00001EB8
lbl_fn_805949B4_00001EAC:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00001EB8:
    cmpwi r0, 0x0
    bne lbl_fn_805949B4_00001DC4
lbl_fn_805949B4_00001EC0:
    subi r31, r31, 0x58
    cmplw r28, r31
    beq lbl_fn_805949B4_00001FC4
    lwz r3, 0x0(r31)
    bl fn_80206C50
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r15, 0x0
    beq lbl_fn_805949B4_00001EF8
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_00001EF8
    li r0, 0x1
    b lbl_fn_805949B4_00001FBC
lbl_fn_805949B4_00001EF8:
    cmpwi r15, 0x0
    bne lbl_fn_805949B4_00001F10
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_00001F10
    li r0, 0x0
    b lbl_fn_805949B4_00001FBC
lbl_fn_805949B4_00001F10:
    lwz r4, 0x0(r31)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_805949B4_00001F68
    lwz r0, 0x50(r31)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00001F50
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_00001F50
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00001FBC
lbl_fn_805949B4_00001F50:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00001F60
    li r0, 0x1
    b lbl_fn_805949B4_00001FBC
lbl_fn_805949B4_00001F60:
    li r0, 0x0
    b lbl_fn_805949B4_00001FBC
lbl_fn_805949B4_00001F68:
    lfs f1, 0x0(r15)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_00001FB0
    mr r3, r4
    bl fn_80211480
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r15)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00001FBC
lbl_fn_805949B4_00001FB0:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00001FBC:
    cmpwi r0, 0x0
    beq lbl_fn_805949B4_00001EC0
lbl_fn_805949B4_00001FC4:
    cmplw r28, r31
    bge lbl_fn_805949B4_00002544
    lwz r23, 0x8(r28)
    lwz r22, 0xc(r28)
    lwz r21, 0x10(r28)
    lwz r20, 0x14(r28)
    lwz r19, 0x18(r28)
    lwz r18, 0x1c(r28)
    lwz r17, 0x20(r28)
    lwz r16, 0x24(r28)
    lwz r15, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r27, 0x0(r28)
    lwz r24, 0x4(r28)
    lwz r25, 0x0(r31)
    stw r25, 0x0(r28)
    lwz r25, 0x4(r31)
    stw r25, 0x4(r28)
    lwz r25, 0xc(r31)
    lwz r26, 0x8(r31)
    stw r26, 0x8(r28)
    stw r25, 0xc(r28)
    lwz r25, 0x14(r31)
    lwz r26, 0x10(r31)
    stw r26, 0x10(r28)
    stw r25, 0x14(r28)
    lwz r25, 0x1c(r31)
    lwz r26, 0x18(r31)
    stw r26, 0x18(r28)
    stw r25, 0x1c(r28)
    lwz r25, 0x24(r31)
    lwz r26, 0x20(r31)
    stw r26, 0x20(r28)
    stw r25, 0x24(r28)
    lwz r25, 0x2c(r31)
    lwz r26, 0x28(r31)
    stw r26, 0x28(r28)
    stw r25, 0x2c(r28)
    lwz r25, 0x34(r31)
    lwz r26, 0x30(r31)
    stw r26, 0x30(r28)
    stw r25, 0x34(r28)
    lwz r25, 0x3c(r31)
    lwz r26, 0x38(r31)
    stw r26, 0x38(r28)
    stw r25, 0x3c(r28)
    lwz r25, 0x44(r31)
    lwz r26, 0x40(r31)
    stw r26, 0x40(r28)
    stw r25, 0x44(r28)
    lwz r25, 0x48(r31)
    stw r25, 0x48(r28)
    lwz r25, 0x4c(r31)
    stw r25, 0x4c(r28)
    lwz r25, 0x50(r31)
    stw r23, 0x190(r1)
    stw r22, 0x194(r1)
    stw r21, 0x198(r1)
    stw r20, 0x19c(r1)
    stw r19, 0x1a0(r1)
    stw r18, 0x1a4(r1)
    stw r17, 0x1a8(r1)
    stw r16, 0x1ac(r1)
    stw r15, 0x1b0(r1)
    stw r12, 0x1b4(r1)
    stw r11, 0x1b8(r1)
    stw r10, 0x1bc(r1)
    stw r9, 0x1c0(r1)
    stw r8, 0x1c4(r1)
    stw r7, 0x1c8(r1)
    stw r6, 0x1cc(r1)
    stw r5, 0x1d0(r1)
    stw r4, 0x1d4(r1)
    stw r3, 0x1d8(r1)
    stw r0, 0x1dc(r1)
    stw r25, 0x50(r28)
    lwz r25, 0x54(r31)
    stw r25, 0x54(r28)
    addi r28, r28, 0x58
    stw r27, 0x0(r31)
    stw r24, 0x4(r31)
    stw r23, 0x8(r31)
    stw r22, 0xc(r31)
    stw r21, 0x10(r31)
    stw r20, 0x14(r31)
    stw r19, 0x18(r31)
    stw r18, 0x1c(r31)
    stw r17, 0x20(r31)
    stw r16, 0x24(r31)
    stw r15, 0x28(r31)
    stw r12, 0x2c(r31)
    stw r11, 0x30(r31)
    stw r10, 0x34(r31)
    stw r9, 0x38(r31)
    stw r8, 0x3c(r31)
    stw r7, 0x40(r31)
    stw r6, 0x44(r31)
    stw r5, 0x48(r31)
    stw r4, 0x4c(r31)
    stw r3, 0x50(r31)
    stw r0, 0x54(r31)
    b lbl_fn_805949B4_00002188
lbl_fn_805949B4_00002184:
    addi r28, r28, 0x58
lbl_fn_805949B4_00002188:
    lwz r3, 0x0(r28)
    bl fn_80206C50
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r15, 0x0
    beq lbl_fn_805949B4_000021B4
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_000021B4
    li r0, 0x1
    b lbl_fn_805949B4_00002278
lbl_fn_805949B4_000021B4:
    cmpwi r15, 0x0
    bne lbl_fn_805949B4_000021CC
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_000021CC
    li r0, 0x0
    b lbl_fn_805949B4_00002278
lbl_fn_805949B4_000021CC:
    lwz r4, 0x0(r28)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_805949B4_00002224
    lwz r0, 0x50(r28)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_0000220C
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_0000220C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00002278
lbl_fn_805949B4_0000220C:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_0000221C
    li r0, 0x1
    b lbl_fn_805949B4_00002278
lbl_fn_805949B4_0000221C:
    li r0, 0x0
    b lbl_fn_805949B4_00002278
lbl_fn_805949B4_00002224:
    lfs f1, 0x0(r15)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_0000226C
    mr r3, r4
    bl fn_80211480
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r15)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00002278
lbl_fn_805949B4_0000226C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00002278:
    cmpwi r0, 0x0
    bne lbl_fn_805949B4_00002184
lbl_fn_805949B4_00002280:
    lwzu r3, -0x58(r31)
    bl fn_80206C50
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80206C50
    cmpwi r15, 0x0
    beq lbl_fn_805949B4_000022AC
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_000022AC
    li r0, 0x1
    b lbl_fn_805949B4_00002370
lbl_fn_805949B4_000022AC:
    cmpwi r15, 0x0
    bne lbl_fn_805949B4_000022C4
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_000022C4
    li r0, 0x0
    b lbl_fn_805949B4_00002370
lbl_fn_805949B4_000022C4:
    lwz r4, 0x0(r31)
    lwz r0, 0x0(r30)
    cmpw r4, r0
    bne lbl_fn_805949B4_0000231C
    lwz r0, 0x50(r31)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00002304
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_00002304
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00002370
lbl_fn_805949B4_00002304:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00002314
    li r0, 0x1
    b lbl_fn_805949B4_00002370
lbl_fn_805949B4_00002314:
    li r0, 0x0
    b lbl_fn_805949B4_00002370
lbl_fn_805949B4_0000231C:
    lfs f1, 0x0(r15)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_00002364
    mr r3, r4
    bl fn_80211480
    mr r15, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r15)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00002370
lbl_fn_805949B4_00002364:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00002370:
    cmpwi r0, 0x0
    beq lbl_fn_805949B4_00002280
    xor r0, r31, r28
    cntlzw r0, r0
    slw r0, r31, r0
    srwi. r0, r0, 31
    beq lbl_fn_805949B4_00002544
    lwz r19, 0x8(r28)
    lwz r20, 0xc(r28)
    lwz r21, 0x10(r28)
    lwz r22, 0x14(r28)
    lwz r23, 0x18(r28)
    lwz r24, 0x1c(r28)
    lwz r25, 0x20(r28)
    lwz r26, 0x24(r28)
    lwz r27, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r18, 0x0(r28)
    lwz r17, 0x4(r28)
    lwz r15, 0x0(r31)
    stw r15, 0x0(r28)
    lwz r15, 0x4(r31)
    stw r15, 0x4(r28)
    lwz r15, 0xc(r31)
    lwz r16, 0x8(r31)
    stw r16, 0x8(r28)
    stw r15, 0xc(r28)
    lwz r15, 0x14(r31)
    lwz r16, 0x10(r31)
    stw r16, 0x10(r28)
    stw r15, 0x14(r28)
    lwz r15, 0x1c(r31)
    lwz r16, 0x18(r31)
    stw r16, 0x18(r28)
    stw r15, 0x1c(r28)
    lwz r15, 0x24(r31)
    lwz r16, 0x20(r31)
    stw r16, 0x20(r28)
    stw r15, 0x24(r28)
    lwz r15, 0x2c(r31)
    lwz r16, 0x28(r31)
    stw r16, 0x28(r28)
    stw r15, 0x2c(r28)
    lwz r15, 0x34(r31)
    lwz r16, 0x30(r31)
    stw r16, 0x30(r28)
    stw r15, 0x34(r28)
    lwz r15, 0x3c(r31)
    lwz r16, 0x38(r31)
    stw r16, 0x38(r28)
    stw r15, 0x3c(r28)
    lwz r16, 0x44(r31)
    lwz r15, 0x40(r31)
    stw r15, 0x40(r28)
    stw r16, 0x44(r28)
    lwz r15, 0x48(r31)
    stw r15, 0x48(r28)
    lwz r15, 0x4c(r31)
    stw r15, 0x4c(r28)
    lwz r15, 0x50(r31)
    stw r19, 0x138(r1)
    stw r20, 0x13c(r1)
    stw r21, 0x140(r1)
    stw r22, 0x144(r1)
    stw r23, 0x148(r1)
    stw r24, 0x14c(r1)
    stw r25, 0x150(r1)
    stw r26, 0x154(r1)
    stw r27, 0x158(r1)
    stw r12, 0x15c(r1)
    stw r11, 0x160(r1)
    stw r10, 0x164(r1)
    stw r9, 0x168(r1)
    stw r8, 0x16c(r1)
    stw r7, 0x170(r1)
    stw r6, 0x174(r1)
    stw r5, 0x178(r1)
    stw r4, 0x17c(r1)
    stw r3, 0x180(r1)
    stw r0, 0x184(r1)
    stw r15, 0x50(r28)
    lwz r15, 0x54(r31)
    stw r15, 0x54(r28)
    addi r28, r28, 0x58
    stw r18, 0x0(r31)
    stw r17, 0x4(r31)
    stw r19, 0x8(r31)
    stw r20, 0xc(r31)
    stw r21, 0x10(r31)
    stw r22, 0x14(r31)
    stw r23, 0x18(r31)
    stw r24, 0x1c(r31)
    stw r25, 0x20(r31)
    stw r26, 0x24(r31)
    stw r27, 0x28(r31)
    stw r12, 0x2c(r31)
    stw r11, 0x30(r31)
    stw r10, 0x34(r31)
    stw r9, 0x38(r31)
    stw r8, 0x3c(r31)
    stw r7, 0x40(r31)
    stw r6, 0x44(r31)
    stw r5, 0x48(r31)
    stw r4, 0x4c(r31)
    stw r3, 0x50(r31)
    stw r0, 0x54(r31)
    b lbl_fn_805949B4_00002188
lbl_fn_805949B4_00002544:
    lwz r6, 0x0(r29)
    cmplw r28, r6
    bne lbl_fn_805949B4_00002EB0
    lwz r23, 0x8(r28)
    lwz r22, 0xc(r28)
    lwz r21, 0x10(r28)
    lwz r20, 0x14(r28)
    lwz r19, 0x18(r28)
    lwz r18, 0x1c(r28)
    lwz r17, 0x20(r28)
    lwz r16, 0x24(r28)
    lwz r15, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r24, 0x0(r28)
    lwz r25, 0x4(r28)
    lwz r26, 0x0(r30)
    stw r26, 0x0(r28)
    lwz r26, 0x4(r30)
    stw r26, 0x4(r28)
    lwz r26, 0xc(r30)
    lwz r27, 0x8(r30)
    stw r27, 0x8(r28)
    stw r26, 0xc(r28)
    lwz r26, 0x14(r30)
    lwz r27, 0x10(r30)
    stw r27, 0x10(r28)
    stw r26, 0x14(r28)
    lwz r26, 0x1c(r30)
    lwz r27, 0x18(r30)
    stw r27, 0x18(r28)
    stw r26, 0x1c(r28)
    lwz r26, 0x24(r30)
    lwz r27, 0x20(r30)
    stw r27, 0x20(r28)
    stw r26, 0x24(r28)
    lwz r26, 0x2c(r30)
    lwz r27, 0x28(r30)
    stw r27, 0x28(r28)
    stw r26, 0x2c(r28)
    lwz r26, 0x34(r30)
    lwz r27, 0x30(r30)
    stw r27, 0x30(r28)
    stw r26, 0x34(r28)
    lwz r26, 0x3c(r30)
    lwz r27, 0x38(r30)
    stw r27, 0x38(r28)
    stw r26, 0x3c(r28)
    lwz r26, 0x44(r30)
    lwz r27, 0x40(r30)
    stw r27, 0x40(r28)
    stw r26, 0x44(r28)
    lwz r26, 0x48(r30)
    stw r26, 0x48(r28)
    lwz r26, 0x4c(r30)
    stw r26, 0x4c(r28)
    lwz r26, 0x50(r30)
    stw r23, 0xe0(r1)
    stw r22, 0xe4(r1)
    stw r21, 0xe8(r1)
    stw r20, 0xec(r1)
    stw r19, 0xf0(r1)
    stw r18, 0xf4(r1)
    stw r17, 0xf8(r1)
    stw r16, 0xfc(r1)
    stw r15, 0x100(r1)
    stw r12, 0x104(r1)
    stw r11, 0x108(r1)
    stw r10, 0x10c(r1)
    stw r9, 0x110(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r5, 0x120(r1)
    stw r4, 0x124(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    stw r26, 0x50(r28)
    lwz r26, 0x54(r30)
    stw r26, 0x54(r28)
    addi r28, r28, 0x58
    stw r24, 0x0(r30)
    stw r25, 0x4(r30)
    stw r23, 0x8(r30)
    stw r22, 0xc(r30)
    stw r21, 0x10(r30)
    stw r20, 0x14(r30)
    stw r19, 0x18(r30)
    stw r18, 0x1c(r30)
    stw r17, 0x20(r30)
    stw r16, 0x24(r30)
    stw r15, 0x28(r30)
    stw r12, 0x2c(r30)
    stw r11, 0x30(r30)
    stw r10, 0x34(r30)
    stw r9, 0x38(r30)
    stw r8, 0x3c(r30)
    stw r7, 0x40(r30)
    stw r6, 0x44(r30)
    stw r5, 0x48(r30)
    stw r4, 0x4c(r30)
    stw r3, 0x50(r30)
    stw r0, 0x54(r30)
    lwz r17, 0x0(r29)
    lwz r4, 0x0(r14)
    lwz r3, 0x0(r17)
    subi r15, r4, 0x58
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_805949B4_0000273C
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_0000273C
    li r0, 0x1
    b lbl_fn_805949B4_00002800
lbl_fn_805949B4_0000273C:
    cmpwi r16, 0x0
    bne lbl_fn_805949B4_00002754
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_00002754
    li r0, 0x0
    b lbl_fn_805949B4_00002800
lbl_fn_805949B4_00002754:
    lwz r4, 0x0(r17)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_805949B4_000027AC
    lwz r0, 0x50(r17)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00002794
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_00002794
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00002800
lbl_fn_805949B4_00002794:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_000027A4
    li r0, 0x1
    b lbl_fn_805949B4_00002800
lbl_fn_805949B4_000027A4:
    li r0, 0x0
    b lbl_fn_805949B4_00002800
lbl_fn_805949B4_000027AC:
    lfs f1, 0x0(r16)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_000027F4
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00002800
lbl_fn_805949B4_000027F4:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00002800:
    cmpwi r0, 0x0
    bne lbl_fn_805949B4_00002AD0
    b lbl_fn_805949B4_00002810
lbl_fn_805949B4_0000280C:
    addi r28, r28, 0x58
lbl_fn_805949B4_00002810:
    lwz r0, 0x0(r14)
    cmplw r28, r0
    beq lbl_fn_805949B4_00002918
    lwz r17, 0x0(r29)
    lwz r3, 0x0(r17)
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r28)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_805949B4_0000284C
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_0000284C
    li r0, 0x1
    b lbl_fn_805949B4_00002910
lbl_fn_805949B4_0000284C:
    cmpwi r16, 0x0
    bne lbl_fn_805949B4_00002864
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_00002864
    li r0, 0x0
    b lbl_fn_805949B4_00002910
lbl_fn_805949B4_00002864:
    lwz r4, 0x0(r17)
    lwz r0, 0x0(r28)
    cmpw r4, r0
    bne lbl_fn_805949B4_000028BC
    lwz r0, 0x50(r17)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_000028A4
    lwz r4, 0x50(r28)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_000028A4
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00002910
lbl_fn_805949B4_000028A4:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_000028B4
    li r0, 0x1
    b lbl_fn_805949B4_00002910
lbl_fn_805949B4_000028B4:
    li r0, 0x0
    b lbl_fn_805949B4_00002910
lbl_fn_805949B4_000028BC:
    lfs f1, 0x0(r16)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_00002904
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r28)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00002910
lbl_fn_805949B4_00002904:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00002910:
    cmpwi r0, 0x0
    beq lbl_fn_805949B4_0000280C
lbl_fn_805949B4_00002918:
    cmplw r28, r15
    bge lbl_fn_805949B4_00002AD0
    lwz r24, 0x8(r28)
    lwz r23, 0xc(r28)
    lwz r22, 0x10(r28)
    lwz r21, 0x14(r28)
    lwz r20, 0x18(r28)
    lwz r19, 0x1c(r28)
    lwz r18, 0x20(r28)
    lwz r17, 0x24(r28)
    lwz r16, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r25, 0x0(r28)
    lwz r26, 0x4(r28)
    lwz r27, 0x0(r15)
    stw r27, 0x0(r28)
    lwz r27, 0x4(r15)
    stw r27, 0x4(r28)
    lwz r27, 0xc(r15)
    lwz r30, 0x8(r15)
    stw r30, 0x8(r28)
    stw r27, 0xc(r28)
    lwz r27, 0x14(r15)
    lwz r30, 0x10(r15)
    stw r30, 0x10(r28)
    stw r27, 0x14(r28)
    lwz r27, 0x1c(r15)
    lwz r30, 0x18(r15)
    stw r30, 0x18(r28)
    stw r27, 0x1c(r28)
    lwz r27, 0x24(r15)
    lwz r30, 0x20(r15)
    stw r30, 0x20(r28)
    stw r27, 0x24(r28)
    lwz r27, 0x2c(r15)
    lwz r30, 0x28(r15)
    stw r30, 0x28(r28)
    stw r27, 0x2c(r28)
    lwz r27, 0x34(r15)
    lwz r30, 0x30(r15)
    stw r30, 0x30(r28)
    stw r27, 0x34(r28)
    lwz r27, 0x3c(r15)
    lwz r30, 0x38(r15)
    stw r30, 0x38(r28)
    stw r27, 0x3c(r28)
    lwz r27, 0x44(r15)
    lwz r30, 0x40(r15)
    stw r30, 0x40(r28)
    stw r27, 0x44(r28)
    lwz r27, 0x48(r15)
    stw r27, 0x48(r28)
    lwz r27, 0x4c(r15)
    stw r27, 0x4c(r28)
    lwz r27, 0x50(r15)
    stw r24, 0x88(r1)
    stw r23, 0x8c(r1)
    stw r22, 0x90(r1)
    stw r21, 0x94(r1)
    stw r20, 0x98(r1)
    stw r19, 0x9c(r1)
    stw r18, 0xa0(r1)
    stw r17, 0xa4(r1)
    stw r16, 0xa8(r1)
    stw r12, 0xac(r1)
    stw r11, 0xb0(r1)
    stw r10, 0xb4(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r6, 0xc4(r1)
    stw r5, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    stw r27, 0x50(r28)
    lwz r27, 0x54(r15)
    stw r27, 0x54(r28)
    stw r25, 0x0(r15)
    stw r26, 0x4(r15)
    stw r24, 0x8(r15)
    stw r23, 0xc(r15)
    stw r22, 0x10(r15)
    stw r21, 0x14(r15)
    stw r20, 0x18(r15)
    stw r19, 0x1c(r15)
    stw r18, 0x20(r15)
    stw r17, 0x24(r15)
    stw r16, 0x28(r15)
    stw r12, 0x2c(r15)
    stw r11, 0x30(r15)
    stw r10, 0x34(r15)
    stw r9, 0x38(r15)
    stw r8, 0x3c(r15)
    stw r7, 0x40(r15)
    stw r6, 0x44(r15)
    stw r5, 0x48(r15)
    stw r4, 0x4c(r15)
    stw r3, 0x50(r15)
    stw r0, 0x54(r15)
lbl_fn_805949B4_00002AD0:
    cmplw r28, r15
    bge lbl_fn_805949B4_00002EA8
    b lbl_fn_805949B4_00002AE0
lbl_fn_805949B4_00002ADC:
    addi r28, r28, 0x58
lbl_fn_805949B4_00002AE0:
    lwz r17, 0x0(r29)
    lwz r3, 0x0(r17)
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r28)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_805949B4_00002B10
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_00002B10
    li r0, 0x1
    b lbl_fn_805949B4_00002BD4
lbl_fn_805949B4_00002B10:
    cmpwi r16, 0x0
    bne lbl_fn_805949B4_00002B28
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_00002B28
    li r0, 0x0
    b lbl_fn_805949B4_00002BD4
lbl_fn_805949B4_00002B28:
    lwz r4, 0x0(r17)
    lwz r0, 0x0(r28)
    cmpw r4, r0
    bne lbl_fn_805949B4_00002B80
    lwz r0, 0x50(r17)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00002B68
    lwz r4, 0x50(r28)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_00002B68
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00002BD4
lbl_fn_805949B4_00002B68:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00002B78
    li r0, 0x1
    b lbl_fn_805949B4_00002BD4
lbl_fn_805949B4_00002B78:
    li r0, 0x0
    b lbl_fn_805949B4_00002BD4
lbl_fn_805949B4_00002B80:
    lfs f1, 0x0(r16)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_00002BC8
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r28)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00002BD4
lbl_fn_805949B4_00002BC8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00002BD4:
    cmpwi r0, 0x0
    beq lbl_fn_805949B4_00002ADC
lbl_fn_805949B4_00002BDC:
    lwz r17, 0x0(r29)
    subi r15, r15, 0x58
    lwz r3, 0x0(r17)
    bl fn_80206C50
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r16, 0x0
    beq lbl_fn_805949B4_00002C10
    cmpwi r3, 0x0
    bne lbl_fn_805949B4_00002C10
    li r0, 0x1
    b lbl_fn_805949B4_00002CD4
lbl_fn_805949B4_00002C10:
    cmpwi r16, 0x0
    bne lbl_fn_805949B4_00002C28
    cmpwi r3, 0x0
    beq lbl_fn_805949B4_00002C28
    li r0, 0x0
    b lbl_fn_805949B4_00002CD4
lbl_fn_805949B4_00002C28:
    lwz r4, 0x0(r17)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_805949B4_00002C80
    lwz r0, 0x50(r17)
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00002C68
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_805949B4_00002C68
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_805949B4_00002CD4
lbl_fn_805949B4_00002C68:
    cmpwi r0, 0x0
    blt lbl_fn_805949B4_00002C78
    li r0, 0x1
    b lbl_fn_805949B4_00002CD4
lbl_fn_805949B4_00002C78:
    li r0, 0x0
    b lbl_fn_805949B4_00002CD4
lbl_fn_805949B4_00002C80:
    lfs f1, 0x0(r16)
    lfs f0, 0x0(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_805949B4_00002CC8
    mr r3, r4
    bl fn_80211480
    mr r16, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r16)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_805949B4_00002CD4
lbl_fn_805949B4_00002CC8:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_805949B4_00002CD4:
    cmpwi r0, 0x0
    bne lbl_fn_805949B4_00002BDC
    xor r0, r15, r28
    cntlzw r0, r0
    slw r0, r15, r0
    srwi. r0, r0, 31
    beq lbl_fn_805949B4_00002EA8
    lwz r24, 0x8(r28)
    lwz r23, 0xc(r28)
    lwz r22, 0x10(r28)
    lwz r21, 0x14(r28)
    lwz r20, 0x18(r28)
    lwz r19, 0x1c(r28)
    lwz r18, 0x20(r28)
    lwz r17, 0x24(r28)
    lwz r16, 0x28(r28)
    lwz r12, 0x2c(r28)
    lwz r11, 0x30(r28)
    lwz r10, 0x34(r28)
    lwz r9, 0x38(r28)
    lwz r8, 0x3c(r28)
    lwz r7, 0x40(r28)
    lwz r6, 0x44(r28)
    lwz r5, 0x48(r28)
    lwz r4, 0x4c(r28)
    lwz r3, 0x50(r28)
    lwz r0, 0x54(r28)
    lwz r25, 0x0(r28)
    lwz r26, 0x4(r28)
    lwz r27, 0x0(r15)
    stw r27, 0x0(r28)
    lwz r27, 0x4(r15)
    stw r27, 0x4(r28)
    lwz r27, 0xc(r15)
    lwz r30, 0x8(r15)
    stw r30, 0x8(r28)
    stw r27, 0xc(r28)
    lwz r27, 0x14(r15)
    lwz r30, 0x10(r15)
    stw r30, 0x10(r28)
    stw r27, 0x14(r28)
    lwz r27, 0x1c(r15)
    lwz r30, 0x18(r15)
    stw r30, 0x18(r28)
    stw r27, 0x1c(r28)
    lwz r27, 0x24(r15)
    lwz r30, 0x20(r15)
    stw r30, 0x20(r28)
    stw r27, 0x24(r28)
    lwz r27, 0x2c(r15)
    lwz r30, 0x28(r15)
    stw r30, 0x28(r28)
    stw r27, 0x2c(r28)
    lwz r27, 0x34(r15)
    lwz r30, 0x30(r15)
    stw r30, 0x30(r28)
    stw r27, 0x34(r28)
    lwz r27, 0x3c(r15)
    lwz r30, 0x38(r15)
    stw r30, 0x38(r28)
    stw r27, 0x3c(r28)
    lwz r27, 0x44(r15)
    lwz r30, 0x40(r15)
    stw r30, 0x40(r28)
    stw r27, 0x44(r28)
    lwz r27, 0x48(r15)
    stw r27, 0x48(r28)
    lwz r27, 0x4c(r15)
    stw r27, 0x4c(r28)
    lwz r27, 0x50(r15)
    stw r24, 0x30(r1)
    stw r23, 0x34(r1)
    stw r22, 0x38(r1)
    stw r21, 0x3c(r1)
    stw r20, 0x40(r1)
    stw r19, 0x44(r1)
    stw r18, 0x48(r1)
    stw r17, 0x4c(r1)
    stw r16, 0x50(r1)
    stw r12, 0x54(r1)
    stw r11, 0x58(r1)
    stw r10, 0x5c(r1)
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r27, 0x50(r28)
    lwz r27, 0x54(r15)
    stw r27, 0x54(r28)
    addi r28, r28, 0x58
    stw r25, 0x0(r15)
    stw r26, 0x4(r15)
    stw r24, 0x8(r15)
    stw r23, 0xc(r15)
    stw r22, 0x10(r15)
    stw r21, 0x14(r15)
    stw r20, 0x18(r15)
    stw r19, 0x1c(r15)
    stw r18, 0x20(r15)
    stw r17, 0x24(r15)
    stw r16, 0x28(r15)
    stw r12, 0x2c(r15)
    stw r11, 0x30(r15)
    stw r10, 0x34(r15)
    stw r9, 0x38(r15)
    stw r8, 0x3c(r15)
    stw r7, 0x40(r15)
    stw r6, 0x44(r15)
    stw r5, 0x48(r15)
    stw r4, 0x4c(r15)
    stw r3, 0x50(r15)
    stw r0, 0x54(r15)
    b lbl_fn_805949B4_00002AE0
lbl_fn_805949B4_00002EA8:
    stw r28, 0x0(r29)
    b lbl_fn_805949B4_000019C8
lbl_fn_805949B4_00002EB0:
    lis r3, 0x2e8c
    lwz r4, 0x0(r14)
    subf r0, r6, r28
    subi r5, r3, 0x5d17
    mulhw r3, r5, r0
    subf r0, r28, r4
    mulhw r0, r5, r0
    srawi r3, r3, 4
    srwi r5, r3, 31
    srawi r0, r0, 4
    add r5, r3, r5
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r5, r0
    bge lbl_fn_805949B4_00002F0C
    stw r28, 0x14(r1)
    addi r3, r1, 0x18
    lwz r5, 0x8(r1)
    addi r4, r1, 0x14
    stw r6, 0x18(r1)
    bl fn_805949B4
    stw r28, 0x0(r29)
    b lbl_fn_805949B4_000019C8
lbl_fn_805949B4_00002F0C:
    stw r4, 0xc(r1)
    addi r3, r1, 0x10
    lwz r5, 0x8(r1)
    addi r4, r1, 0xc
    stw r28, 0x10(r1)
    bl fn_805949B4
    stw r28, 0x0(r14)
    b lbl_fn_805949B4_000019C8
lbl_fn_805949B4_00002F2C:
    addi r11, r1, 0x290
    psq_l f31, 0x298(r1), 0, 0
    lfd f31, 0x290(r1)
    bl _restgpr_14
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}
