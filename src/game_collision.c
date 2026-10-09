#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8001AD80(void);
extern void fn_8001ADE8(void);
extern void fn_8001AEDC(void);
extern void fn_8001B5DC(void);
extern void fn_8001B634(void);
extern void fn_8001B714(void);
extern void fn_8001BAA4(void);
extern void fn_8001BC38(void);
extern void fn_8001BCB4(void);
extern void fn_8001BE00(void);
extern void fn_8001BEB0(void);
extern void fn_800281A0(void);
extern void fn_8003DBA4(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8072FF60[];
extern u8 lbl_8072FF68[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];

/* Small data declarations */
extern u32 lbl_80880798;
extern u32 lbl_808807AC;
extern u32 lbl_808807B0;

/* Function declarations */
void fn_800251B4(void);
void fn_800253E8(void);
void fn_80025478(void);
void fn_8002552C(void);
void fn_8002558C(void);
void fn_80025624(void);
void fn_8002575C(void);
void fn_80025980(void);
void fn_80025A68(void);
void fn_80025C9C(void);
void fn_80025D2C(void);
void fn_80025DE0(void);
void fn_80025E30(void);
void fn_800261C0(void);
void fn_80026310(void);
void fn_800264E0(void);
void fn_80026570(void);
void fn_80026A40(void);
void fn_80026AB8(void);
void fn_80026BEC(void);
void fn_80026CD4(void);
void fn_80026D78(void);
void fn_80026E94(void);
void fn_80026F30(void);
void fn_800270B8(void);
void fn_800271EC(void);
void fn_800272D4(void);
void fn_80027444(void);
void fn_80027458(void);
void fn_800274F0(void);
void fn_800275CC(void);
void fn_8002765C(void);
void fn_800276D4(void);
void fn_80027704(void);
void fn_8002779C(void);
void fn_80027954(void);
void fn_80027B2C(void);
void fn_80027BB0(void);
void fn_80027E54(void);
void fn_80027F84(void);

asm void fn_800251B4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lis r29, lbl_807C68C0@ha
    addi r31, r29, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_800251B4_000001DC
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800251B4_00000088
    lis r30, lbl_807C6A40@ha
    li r9, 0x0
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x20(r31)
    lwz r8, 0x1c(r3)
    addi r4, r1, 0x38
    stw r9, 0x44(r1)
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    stw r9, 0x40(r1)
    li r3, 0x4
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x5
    b lbl_fn_800251B4_00000218
lbl_fn_800251B4_00000088:
    lis r30, lbl_807C6A40@ha
    lwz r3, 0xc(r31)
    addi r5, r30, lbl_807C6A40@l
    lwz r0, 0x18(r5)
    cmpw r3, r0
    bge lbl_fn_800251B4_0000011C
    lwz r4, 0x30(r31)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r31)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_800251B4_00000114
    lwz r8, 0x1c(r5)
    li r3, 0x0
    lwz r0, 0x20(r31)
    addi r4, r1, 0x28
    stw r3, 0x34(r1)
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    stw r3, 0x30(r1)
    li r3, 0x4
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x5
    b lbl_fn_800251B4_00000218
lbl_fn_800251B4_00000114:
    li r3, -0x1
    b lbl_fn_800251B4_00000218
lbl_fn_800251B4_0000011C:
    lwz r4, 0x34(r31)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r31)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_800251B4_000001D4
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800251B4_0000017C
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_800251B4_0000017C
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_800251B4_00000180
lbl_fn_800251B4_0000017C:
    li r0, 0x0
lbl_fn_800251B4_00000180:
    cmpwi r0, 0x0
    beq lbl_fn_800251B4_000001D4
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x24(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x1c(r1)
    li r3, 0x2
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800251B4_00000218
lbl_fn_800251B4_000001D4:
    li r3, -0x1
    b lbl_fn_800251B4_00000218
lbl_fn_800251B4_000001DC:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_800251B4_00000218:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800253E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800253E8_0000025C
    li r0, -0x1
    b lbl_fn_800253E8_00000268
lbl_fn_800253E8_0000025C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800253E8_00000268:
    cmpwi r0, 0x1
    bne lbl_fn_800253E8_000002B0
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800253E8_000002B4
lbl_fn_800253E8_000002B0:
    li r3, -0x1
lbl_fn_800253E8_000002B4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80025478(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80025478_000002EC
    li r0, -0x1
    b lbl_fn_80025478_000002F8
lbl_fn_80025478_000002EC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80025478_000002F8:
    cmpwi r0, 0x1
    bne lbl_fn_80025478_00000308
    li r3, -0x1
    b lbl_fn_80025478_00000368
lbl_fn_80025478_00000308:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80025478_00000364
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80025478_00000340
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80025478_00000368
lbl_fn_80025478_00000340:
    cmpwi r3, 0x4
    bne lbl_fn_80025478_0000035C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80025478_00000368
lbl_fn_80025478_0000035C:
    li r3, -0x1
    b lbl_fn_80025478_00000368
lbl_fn_80025478_00000364:
    li r3, -0x1
lbl_fn_80025478_00000368:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002552C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r6, 0x5a
    li r0, 0xf
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r6, 0x18(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r0, 0x1c(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8002552C_000003C0
    li r31, 0x7
lbl_fn_8002552C_000003C0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002558C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002558C_0000040C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002558C_00000410
lbl_fn_8002558C_0000040C:
    li r0, -0x1
lbl_fn_8002558C_00000410:
    cmpwi r0, 0x6
    bne lbl_fn_8002558C_0000045C
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8002558C_00000438
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002558C_00000460
lbl_fn_8002558C_00000438:
    cmpwi r3, 0x4
    bne lbl_fn_8002558C_00000454
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002558C_00000460
lbl_fn_8002558C_00000454:
    li r3, -0x1
    b lbl_fn_8002558C_00000460
lbl_fn_8002558C_0000045C:
    li r3, -0x1
lbl_fn_8002558C_00000460:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80025624(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x44(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    xoris r0, r4, 0x8000
    lfs f2, 0x1c(r5)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80025624_00000508
    lis r31, lbl_807C6A40@ha
    lwz r0, 0x20(r5)
    addi r3, r31, lbl_807C6A40@l
    li r9, 0x0
    lwz r8, 0x1c(r3)
    addi r4, r1, 0x18
    stw r9, 0x24(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r9, 0x20(r1)
    li r3, 0x4
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_80025624_00000590
lbl_fn_80025624_00000508:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80025624_0000058C
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80025624_0000054C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80025624_0000054C:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80025624_00000590
lbl_fn_80025624_0000058C:
    li r3, -0x1
lbl_fn_80025624_00000590:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002575C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x44(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    slwi r0, r4, 1
    lfs f2, 0x1c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8002575C_00000614
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002575C_00000664
lbl_fn_8002575C_00000614:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002575C_00000660
    li r0, 0x0
    li r28, 0x1
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r0, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x5
    stw r0, 0x20(r1)
    stw r28, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x8
    stw r28, lbl_807C6A40@l(r3)
    b lbl_fn_8002575C_00000664
lbl_fn_8002575C_00000660:
    li r0, -0x1
lbl_fn_8002575C_00000664:
    cmpwi r0, 0x6
    bne lbl_fn_8002575C_000006B0
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8002575C_0000068C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002575C_000007AC
lbl_fn_8002575C_0000068C:
    cmpwi r3, 0x6
    bne lbl_fn_8002575C_000006A8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002575C_000007AC
lbl_fn_8002575C_000006A8:
    li r3, -0x1
    b lbl_fn_8002575C_000007AC
lbl_fn_8002575C_000006B0:
    cmpwi r0, 0x8
    bne lbl_fn_8002575C_000007A8
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8002575C_00000794
    lis r29, lbl_807C6A40@ha
    lis r28, lbl_807C68C0@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, lbl_807C68C0@l(r28)
    lwz r4, 0x3c(r30)
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_8002575C_00000784
    lwz r3, lbl_807C68C0@l(r28)
    lwz r4, 0x3c(r30)
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_8002575C_00000774
    addi r3, r28, lbl_807C68C0@l
    li r31, 0x0
    lwz r8, 0x20(r3)
    addi r4, r1, 0x8
    lwz r0, 0x3c(r30)
    addi r5, r1, 0xc
    stw r31, 0x14(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x7
    stw r31, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r3, 0x3c(r30)
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    addi r4, r3, 0x1
    lwz r3, lbl_807C68C0@l(r28)
    stw r4, 0x3c(r30)
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_8002575C_00000768
    li r3, 0x8
    b lbl_fn_8002575C_000007AC
lbl_fn_8002575C_00000768:
    stw r31, 0x3c(r30)
    li r3, 0x8
    b lbl_fn_8002575C_000007AC
lbl_fn_8002575C_00000774:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x8
    b lbl_fn_8002575C_000007AC
lbl_fn_8002575C_00000784:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x8
    b lbl_fn_8002575C_000007AC
lbl_fn_8002575C_00000794:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8002575C_000007AC
lbl_fn_8002575C_000007A8:
    li r3, -0x1
lbl_fn_8002575C_000007AC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80025980(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80025980_00000878
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80025980_0000082C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80025980_0000082C:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80025980_0000087C
lbl_fn_80025980_00000878:
    li r0, -0x1
lbl_fn_80025980_0000087C:
    cmpwi r0, 0x5
    bne lbl_fn_80025980_00000898
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80025980_0000089C
lbl_fn_80025980_00000898:
    li r3, -0x1
lbl_fn_80025980_0000089C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80025A68(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lis r29, lbl_807C68C0@ha
    addi r31, r29, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80025A68_00000A90
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80025A68_0000093C
    lis r30, lbl_807C6A40@ha
    li r9, 0x0
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x20(r31)
    lwz r8, 0x1c(r3)
    addi r4, r1, 0x38
    stw r9, 0x44(r1)
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    stw r9, 0x40(r1)
    li r3, 0x4
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x5
    b lbl_fn_80025A68_00000ACC
lbl_fn_80025A68_0000093C:
    lis r30, lbl_807C6A40@ha
    lwz r3, 0xc(r31)
    addi r5, r30, lbl_807C6A40@l
    lwz r0, 0x18(r5)
    cmpw r3, r0
    bge lbl_fn_80025A68_000009D0
    lwz r4, 0x30(r31)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r31)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80025A68_000009C8
    lwz r8, 0x1c(r5)
    li r3, 0x0
    lwz r0, 0x20(r31)
    addi r4, r1, 0x28
    stw r3, 0x34(r1)
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    stw r3, 0x30(r1)
    li r3, 0x4
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x5
    b lbl_fn_80025A68_00000ACC
lbl_fn_80025A68_000009C8:
    li r3, -0x1
    b lbl_fn_80025A68_00000ACC
lbl_fn_80025A68_000009D0:
    lwz r4, 0x34(r31)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r31)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80025A68_00000A88
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80025A68_00000A30
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_80025A68_00000A30
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_80025A68_00000A34
lbl_fn_80025A68_00000A30:
    li r0, 0x0
lbl_fn_80025A68_00000A34:
    cmpwi r0, 0x0
    beq lbl_fn_80025A68_00000A88
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x24(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x1c(r1)
    li r3, 0x2
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80025A68_00000ACC
lbl_fn_80025A68_00000A88:
    li r3, -0x1
    b lbl_fn_80025A68_00000ACC
lbl_fn_80025A68_00000A90:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_80025A68_00000ACC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80025C9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80025C9C_00000B10
    li r0, -0x1
    b lbl_fn_80025C9C_00000B1C
lbl_fn_80025C9C_00000B10:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80025C9C_00000B1C:
    cmpwi r0, 0x1
    bne lbl_fn_80025C9C_00000B64
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80025C9C_00000B68
lbl_fn_80025C9C_00000B64:
    li r3, -0x1
lbl_fn_80025C9C_00000B68:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80025D2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80025D2C_00000BA0
    li r0, -0x1
    b lbl_fn_80025D2C_00000BAC
lbl_fn_80025D2C_00000BA0:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80025D2C_00000BAC:
    cmpwi r0, 0x1
    bne lbl_fn_80025D2C_00000BBC
    li r3, -0x1
    b lbl_fn_80025D2C_00000C1C
lbl_fn_80025D2C_00000BBC:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80025D2C_00000C18
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80025D2C_00000BF4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80025D2C_00000C1C
lbl_fn_80025D2C_00000BF4:
    cmpwi r3, 0x4
    bne lbl_fn_80025D2C_00000C10
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80025D2C_00000C1C
lbl_fn_80025D2C_00000C10:
    li r3, -0x1
    b lbl_fn_80025D2C_00000C1C
lbl_fn_80025D2C_00000C18:
    li r3, -0x1
lbl_fn_80025D2C_00000C1C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80025DE0(void)
{
    nofralloc
    lis r5, lbl_807C68C0@ha
    lis r10, lbl_807C6A40@ha
    addi r5, r5, lbl_807C68C0@l
    li r0, 0x1
    addi r9, r10, lbl_807C6A40@l
    lwz r11, 0x7c(r5)
    lwz r8, 0x80(r5)
    li r4, 0x0
    lwz r7, 0x84(r5)
    li r3, 0x1
    lwz r6, 0x88(r5)
    lwz r5, 0x8c(r5)
    stw r11, 0x1c(r9)
    stw r8, 0x20(r9)
    stw r7, 0x24(r9)
    stw r6, 0x28(r9)
    stw r5, 0x8c(r9)
    stw r4, 0x3c(r9)
    stw r0, lbl_807C6A40@l(r10)
    blr
}

asm void fn_80025E30(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lis r0, 0x4330
    stw r31, 0x7c(r1)
    lis r31, lbl_807C68C0@ha
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    addi r29, r31, lbl_807C68C0@l
    stw r0, 0x58(r1)
    lwz r3, 0x20(r29)
    stw r0, 0x60(r1)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80025E30_00000FD4
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80025E30_00000E40
    lwz r0, 0x30(r29)
    lis r3, lbl_8072FF60@ha
    lfd f1, lbl_8072FF60@l(r3)
    slwi r0, r0, 1
    lfs f2, 0x1c(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80025E30_00000D08
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_80025E30_00000D54
lbl_fn_80025E30_00000D08:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80025E30_00000D50
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r0, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x5
    stw r0, 0x50(r1)
    stw r29, 0x54(r1)
    bl fn_8001AEDC
    stw r29, lbl_807C6A40@l(r30)
    li r0, 0x8
    b lbl_fn_80025E30_00000D54
lbl_fn_80025E30_00000D50:
    li r0, -0x1
lbl_fn_80025E30_00000D54:
    cmpwi r0, 0x6
    bne lbl_fn_80025E30_00000E1C
    lis r4, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    addi r4, r4, lbl_807C68C0@l
    lfd f2, lbl_8072FF60@l(r3)
    lwz r0, 0x30(r4)
    lwz r8, 0x20(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfs f0, lbl_808807AC
    cmpwi r8, 0x0
    lfd f1, 0x60(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r9, 0x6c(r1)
    beq lbl_fn_80025E30_00000E08
    cmpwi r9, 0x0
    beq lbl_fn_80025E30_00000DD8
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x3
    stw r9, 0x2c(r1)
    stw r8, 0x28(r1)
    bl fn_8001AEDC
    b lbl_fn_80025E30_00000E08
lbl_fn_80025E30_00000DD8:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r3, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x3
    stw r0, 0x3c(r1)
    stw r8, 0x38(r1)
    bl fn_8001AEDC
lbl_fn_80025E30_00000E08:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80025E30_00000FF0
lbl_fn_80025E30_00000E1C:
    cmpwi r0, 0x8
    bne lbl_fn_80025E30_00000E38
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80025E30_00000FF0
lbl_fn_80025E30_00000E38:
    li r3, -0x1
    b lbl_fn_80025E30_00000FF0
lbl_fn_80025E30_00000E40:
    lwz r3, 0x8c(r3)
    lwz r4, lbl_807C68C0@l(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80025E30_00000E58
    cmpwi r4, 0x0
    bne lbl_fn_80025E30_00000E60
lbl_fn_80025E30_00000E58:
    li r3, 0x0
    b lbl_fn_80025E30_00000E70
lbl_fn_80025E30_00000E60:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r3, 0x6c(r1)
lbl_fn_80025E30_00000E70:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_80025E30_00000E9C
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_80025E30_00000FF0
lbl_fn_80025E30_00000E9C:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80025E30_00000EBC
    cmpwi r4, 0x0
    bne lbl_fn_80025E30_00000EC4
lbl_fn_80025E30_00000EBC:
    li r0, 0x0
    b lbl_fn_80025E30_00000ED4
lbl_fn_80025E30_00000EC4:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r0, 0x6c(r1)
lbl_fn_80025E30_00000ED4:
    lis r3, lbl_807C68C0@ha
    xoris r4, r0, 0x8000
    addi r3, r3, lbl_807C68C0@l
    lis r5, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    stw r4, 0x5c(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r5)
    stw r0, 0x64(r1)
    lfd f2, 0x58(r1)
    lfd f1, 0x60(r1)
    lfs f0, lbl_808807B0
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80025E30_00000F64
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x5
    stw r0, 0x1c(r1)
    stw r29, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    addi r4, r3, lbl_807C6A40@l
    stw r29, lbl_807C6A40@l(r3)
    lwz r0, 0x28(r4)
    li r3, 0x8
    stw r0, 0x3c(r4)
    b lbl_fn_80025E30_00000FF0
lbl_fn_80025E30_00000F64:
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, 0x3c(r30)
    cmpwi r3, 0x0
    bgt lbl_fn_80025E30_00000FBC
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x5
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x28(r30)
    li r3, 0x8
    stw r31, lbl_807C6A40@l(r29)
    stw r0, 0x3c(r30)
    b lbl_fn_80025E30_00000FF0
lbl_fn_80025E30_00000FBC:
    subi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x3c(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_80025E30_00000FF0
lbl_fn_80025E30_00000FD4:
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0x18(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
lbl_fn_80025E30_00000FF0:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_800261C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    lis r4, lbl_807C68C0@ha
    stw r0, 0x34(r1)
    addi r3, r3, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lwz r3, 0x8c(r3)
    lwz r4, lbl_807C68C0@l(r4)
    cmpwi r3, 0x0
    ble lbl_fn_800261C0_00001044
    cmpwi r4, 0x0
    bne lbl_fn_800261C0_0000104C
lbl_fn_800261C0_00001044:
    li r3, 0x0
    b lbl_fn_800261C0_0000105C
lbl_fn_800261C0_0000104C:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_800261C0_0000105C:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_800261C0_00001088
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_800261C0_00001144
lbl_fn_800261C0_00001088:
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800261C0_00001120
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800261C0_000010D4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800261C0_000010D4:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_800261C0_00001124
lbl_fn_800261C0_00001120:
    li r0, -0x1
lbl_fn_800261C0_00001124:
    cmpwi r0, 0x5
    bne lbl_fn_800261C0_00001140
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_800261C0_00001144
lbl_fn_800261C0_00001140:
    li r3, -0x1
lbl_fn_800261C0_00001144:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80026310(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x48(r1)
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80026310_000011E0
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80026310_000011D8
    lwz r0, 0x20(r31)
    li r8, 0x0
    stw r8, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r8, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x4
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80026310_0000121C
lbl_fn_80026310_000011D8:
    li r0, -0x1
    b lbl_fn_80026310_0000121C
lbl_fn_80026310_000011E0:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_80026310_0000121C:
    cmpwi r0, 0x5
    bne lbl_fn_80026310_00001238
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80026310_00001314
lbl_fn_80026310_00001238:
    cmpwi r0, 0x1
    bne lbl_fn_80026310_00001254
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80026310_00001314
lbl_fn_80026310_00001254:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x38(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80026310_00001310
    lwz r3, 0x54(r5)
    lwz r4, 0x50(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80026310_000012C4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80026310_000012C4:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x14(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x8
    stw r5, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r31, 0xc(r1)
    li r3, 0x4
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80026310_00001314
lbl_fn_80026310_00001310:
    li r3, -0x1
lbl_fn_80026310_00001314:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800264E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800264E0_00001354
    li r0, -0x1
    b lbl_fn_800264E0_00001360
lbl_fn_800264E0_00001354:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800264E0_00001360:
    cmpwi r0, 0x1
    bne lbl_fn_800264E0_000013A8
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800264E0_000013AC
lbl_fn_800264E0_000013A8:
    li r3, -0x1
lbl_fn_800264E0_000013AC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80026570(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r5, 0x4330
    lis r4, lbl_807C6A40@ha
    stw r0, 0xa4(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    lwz r0, 0x10(r3)
    stw r5, 0x78(r1)
    cmpwi r0, 0x1
    stw r5, 0x80(r1)
    blt lbl_fn_80026570_000013FC
    li r0, -0x1
    b lbl_fn_80026570_00001408
lbl_fn_80026570_000013FC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80026570_00001408:
    cmpwi r0, 0x1
    bne lbl_fn_80026570_00001418
    li r3, -0x1
    b lbl_fn_80026570_00001870
lbl_fn_80026570_00001418:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x64(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80026570_0000145C
    lis r3, lbl_807C68C0@ha
    li r0, 0x1
    addi r3, r3, lbl_807C68C0@l
    stw r0, lbl_807C6A40@l(r5)
    lwz r3, 0x58(r3)
    stw r3, 0x64(r4)
    subf. r0, r3, r3
    ble lbl_fn_80026570_00001484
    li r0, 0x3
    stw r3, 0x64(r4)
    stw r0, 0x18(r4)
    b lbl_fn_80026570_00001484
lbl_fn_80026570_0000145C:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r6, 0x58(r3)
    subf. r0, r6, r0
    ble lbl_fn_80026570_00001484
    li r3, 0x1
    li r0, 0x3
    stw r6, 0x64(r4)
    stw r3, lbl_807C6A40@l(r5)
    stw r0, 0x18(r4)
lbl_fn_80026570_00001484:
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80026570_000014AC
    li r0, 0x1
    stw r0, 0x18(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_80026570_00001870
lbl_fn_80026570_000014AC:
    cmpwi r0, 0x1
    bne lbl_fn_80026570_00001500
    lwz r8, 0x1c(r30)
    li r3, 0x0
    lwz r0, 0x8c(r30)
    addi r4, r1, 0x68
    stw r3, 0x74(r1)
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    addi r7, r1, 0x74
    stw r3, 0x70(r1)
    li r3, 0x8
    stw r8, 0x6c(r1)
    stw r0, 0x68(r1)
    bl fn_8001AEDC
    li r3, 0x1
    li r0, 0x2
    stw r3, lbl_807C6A40@l(r29)
    li r3, -0x1
    stw r0, 0x18(r30)
    b lbl_fn_80026570_00001870
lbl_fn_80026570_00001500:
    cmpwi r0, 0x2
    bne lbl_fn_80026570_00001698
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80026570_00001690
    lwz r3, 0x8c(r30)
    lwz r4, 0x20(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80026570_00001538
    cmpwi r4, 0x0
    bne lbl_fn_80026570_00001540
lbl_fn_80026570_00001538:
    li r3, 0x0
    b lbl_fn_80026570_00001550
lbl_fn_80026570_00001540:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r3, 0x8c(r1)
lbl_fn_80026570_00001550:
    lis r7, lbl_807C6A40@ha
    addi r5, r7, lbl_807C6A40@l
    lwz r0, 0x20(r5)
    cmpw r3, r0
    bge lbl_fn_80026570_000015B4
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r4, 0x3
    lwz r0, 0x20(r3)
    li r3, 0x1
    stw r4, 0x18(r5)
    addi r4, r1, 0x58
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    stw r3, lbl_807C6A40@l(r7)
    addi r7, r1, 0x64
    li r3, 0x4
    stw r8, 0x64(r1)
    stw r8, 0x60(r1)
    stw r8, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_80026570_00001870
lbl_fn_80026570_000015B4:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80026570_000015D4
    cmpwi r4, 0x0
    bne lbl_fn_80026570_000015DC
lbl_fn_80026570_000015D4:
    li r0, 0x0
    b lbl_fn_80026570_000015EC
lbl_fn_80026570_000015DC:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r0, 0x8c(r1)
lbl_fn_80026570_000015EC:
    lis r3, lbl_807C68C0@ha
    xoris r4, r0, 0x8000
    addi r3, r3, lbl_807C68C0@l
    lis r5, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    lis r3, lbl_8072FF68@ha
    stw r4, 0x7c(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r5)
    stw r0, 0x84(r1)
    lfd f2, 0x78(r1)
    lfd f1, 0x80(r1)
    lfd f0, lbl_8072FF68@l(r3)
    fsub f2, f2, f3
    fsub f1, f1, f3
    fmul f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80026570_00001688
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x54(r1)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    stw r0, 0x50(r1)
    addi r7, r1, 0x54
    li r3, 0x5
    stw r0, 0x4c(r1)
    stw r31, 0x48(r1)
    bl fn_8001AEDC
    lis r5, lbl_807C6A40@ha
    li r3, 0x3
    addi r4, r5, lbl_807C6A40@l
    stw r31, lbl_807C6A40@l(r5)
    lwz r0, 0x28(r4)
    stw r3, 0x18(r4)
    li r3, 0x8
    stw r0, 0x3c(r4)
    b lbl_fn_80026570_00001870
lbl_fn_80026570_00001688:
    li r3, -0x1
    b lbl_fn_80026570_00001870
lbl_fn_80026570_00001690:
    li r3, -0x1
    b lbl_fn_80026570_00001870
lbl_fn_80026570_00001698:
    cmpwi r0, 0x3
    bne lbl_fn_80026570_00001788
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80026570_00001770
    lwz r0, 0x30(r31)
    lis r3, lbl_8072FF60@ha
    lwz r8, 0x20(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f2, lbl_8072FF60@l(r3)
    cmpwi r8, 0x0
    lfd f1, 0x78(r1)
    lfs f0, lbl_808807AC
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x88(r1)
    lwz r9, 0x8c(r1)
    beq lbl_fn_80026570_0000175C
    cmpwi r9, 0x0
    beq lbl_fn_80026570_0000172C
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x3
    stw r9, 0x2c(r1)
    stw r8, 0x28(r1)
    bl fn_8001AEDC
    b lbl_fn_80026570_0000175C
lbl_fn_80026570_0000172C:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r3, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x3
    stw r0, 0x3c(r1)
    stw r8, 0x38(r1)
    bl fn_8001AEDC
lbl_fn_80026570_0000175C:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80026570_00001870
lbl_fn_80026570_00001770:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_80026570_00001870
lbl_fn_80026570_00001788:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80026570_0000186C
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80026570_00001864
    lwz r0, 0x30(r31)
    lis r3, lbl_8072FF60@ha
    lwz r8, 0x20(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f2, lbl_8072FF60@l(r3)
    cmpwi r8, 0x0
    lfd f1, 0x80(r1)
    lfs f0, lbl_808807AC
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x88(r1)
    lwz r9, 0x8c(r1)
    beq lbl_fn_80026570_00001850
    cmpwi r9, 0x0
    beq lbl_fn_80026570_00001820
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x3
    stw r9, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    b lbl_fn_80026570_00001850
lbl_fn_80026570_00001820:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x3
    stw r0, 0x1c(r1)
    stw r8, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_80026570_00001850:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80026570_00001870
lbl_fn_80026570_00001864:
    li r3, -0x1
    b lbl_fn_80026570_00001870
lbl_fn_80026570_0000186C:
    li r3, -0x1
lbl_fn_80026570_00001870:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80026A40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    lis r11, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r9, 0x1
    lwz r10, 0x7c(r3)
    addi r3, r11, lbl_807C6A40@l
    li r4, 0x28
    li r0, 0xa
    stw r4, 0x18(r3)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r10, 0x1c(r3)
    addi r7, r1, 0x8
    li r3, 0x8
    stw r9, lbl_807C6A40@l(r11)
    stw r8, 0x8(r1)
    stw r8, 0xc(r1)
    stw r0, 0x10(r1)
    stw r10, 0x14(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80026AB8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    lis r4, lbl_807C68C0@ha
    stw r0, 0x44(r1)
    addi r3, r3, lbl_807C6A40@l
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r3, 0x1c(r3)
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    ble lbl_fn_80026AB8_00001940
    cmpwi r4, 0x0
    bne lbl_fn_80026AB8_00001948
lbl_fn_80026AB8_00001940:
    li r4, 0x0
    b lbl_fn_80026AB8_00001958
lbl_fn_80026AB8_00001948:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_80026AB8_00001958:
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpw r4, r0
    ble lbl_fn_80026AB8_000019B0
    lwz r0, 0x1c(r3)
    li r3, 0x0
    li r8, 0xa
    stw r3, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r3, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x8
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80026AB8_00001A20
lbl_fn_80026AB8_000019B0:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80026AB8_00001A1C
    lwz r3, lbl_807C68C0@l(r4)
    li r4, 0x2
    bl fn_8001BAA4
    cmpwi r3, 0x0
    beq lbl_fn_80026AB8_000019E0
    li r3, -0x1
    b lbl_fn_80026AB8_00001A20
lbl_fn_80026AB8_000019E0:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r0, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x5
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r3, 0x8
    b lbl_fn_80026AB8_00001A20
lbl_fn_80026AB8_00001A1C:
    li r3, -0x1
lbl_fn_80026AB8_00001A20:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80026BEC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80026BEC_00001AE4
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80026BEC_00001A98
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80026BEC_00001A98:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80026BEC_00001AE8
lbl_fn_80026BEC_00001AE4:
    li r0, -0x1
lbl_fn_80026BEC_00001AE8:
    cmpwi r0, 0x5
    bne lbl_fn_80026BEC_00001B04
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80026BEC_00001B08
lbl_fn_80026BEC_00001B04:
    li r3, -0x1
lbl_fn_80026BEC_00001B08:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80026CD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x1c(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80026CD4_00001B4C
    li r0, -0x1
    b lbl_fn_80026CD4_00001B58
lbl_fn_80026CD4_00001B4C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80026CD4_00001B58:
    cmpwi r0, 0x1
    bne lbl_fn_80026CD4_00001BAC
    lis r31, lbl_807C6A40@ha
    li r9, 0x0
    addi r3, r31, lbl_807C6A40@l
    li r8, 0xa
    lwz r0, 0x1c(r3)
    addi r4, r1, 0x14
    stw r9, 0x8(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r9, 0xc(r1)
    li r3, 0x8
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80026CD4_00001BB0
lbl_fn_80026CD4_00001BAC:
    li r3, -0x1
lbl_fn_80026CD4_00001BB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80026D78(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80026D78_00001BF0
    li r0, -0x1
    b lbl_fn_80026D78_00001BFC
lbl_fn_80026D78_00001BF0:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80026D78_00001BFC:
    cmpwi r0, 0x1
    bne lbl_fn_80026D78_00001C0C
    li r3, -0x1
    b lbl_fn_80026D78_00001CCC
lbl_fn_80026D78_00001C0C:
    lis r4, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r4, r4, lbl_807C68C0@l
    lfs f1, 0x1c(r4)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80026D78_00001CC8
    lis r3, lbl_807C6A40@ha
    lwz r4, 0x20(r4)
    addi r3, r3, lbl_807C6A40@l
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    ble lbl_fn_80026D78_00001C4C
    cmpwi r4, 0x0
    bne lbl_fn_80026D78_00001C54
lbl_fn_80026D78_00001C4C:
    li r4, 0x0
    b lbl_fn_80026D78_00001C64
lbl_fn_80026D78_00001C54:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80026D78_00001C64:
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpw r4, r0
    bge lbl_fn_80026D78_00001CC0
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r8, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r8, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_80026D78_00001CCC
lbl_fn_80026D78_00001CC0:
    li r3, -0x1
    b lbl_fn_80026D78_00001CCC
lbl_fn_80026D78_00001CC8:
    li r3, -0x1
lbl_fn_80026D78_00001CCC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80026E94(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    li r10, 0x0
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    li r4, 0x28
    li r8, 0x1
    stw r31, 0x1c(r1)
    li r0, 0xa
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r30, 0x18(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    addi r7, r1, 0x8
    lwz r12, 0x7c(r3)
    lwz r11, 0x80(r3)
    lwz r9, 0x84(r3)
    li r3, 0x8
    stw r4, 0x18(r31)
    addi r4, r1, 0x14
    stw r12, 0x1c(r31)
    stw r11, 0x20(r31)
    stw r10, 0x24(r31)
    stw r9, 0x28(r31)
    stw r8, lbl_807C6A40@l(r30)
    stw r10, 0x8(r1)
    stw r10, 0xc(r1)
    stw r0, 0x10(r1)
    stw r12, 0x14(r1)
    bl fn_8001AEDC
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80026F30(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80026F30_00001E00
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80026F30_00001DF8
    lwz r0, 0x20(r4)
    li r3, 0x0
    li r8, 0x5
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r3, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0x8
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, -0x1
    b lbl_fn_80026F30_00001EF0
lbl_fn_80026F30_00001DF8:
    li r3, -0x1
    b lbl_fn_80026F30_00001EF0
lbl_fn_80026F30_00001E00:
    lwz r0, 0x10(r4)
    cmpwi r0, 0x1
    blt lbl_fn_80026F30_00001E14
    li r0, -0x1
    b lbl_fn_80026F30_00001E20
lbl_fn_80026F30_00001E14:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
lbl_fn_80026F30_00001E20:
    cmpwi r0, 0x1
    bne lbl_fn_80026F30_00001E30
    li r3, -0x1
    b lbl_fn_80026F30_00001EF0
lbl_fn_80026F30_00001E30:
    lis r4, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r4, r4, lbl_807C68C0@l
    lfs f1, 0x1c(r4)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80026F30_00001EEC
    lis r3, lbl_807C6A40@ha
    lwz r4, 0x20(r4)
    addi r3, r3, lbl_807C6A40@l
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    ble lbl_fn_80026F30_00001E70
    cmpwi r4, 0x0
    bne lbl_fn_80026F30_00001E78
lbl_fn_80026F30_00001E70:
    li r4, 0x0
    b lbl_fn_80026F30_00001E88
lbl_fn_80026F30_00001E78:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_80026F30_00001E88:
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpw r4, r0
    bge lbl_fn_80026F30_00001EE4
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r8, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r8, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_80026F30_00001EF0
lbl_fn_80026F30_00001EE4:
    li r3, -0x1
    b lbl_fn_80026F30_00001EF0
lbl_fn_80026F30_00001EEC:
    li r3, -0x1
lbl_fn_80026F30_00001EF0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800270B8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    lis r4, lbl_807C68C0@ha
    stw r0, 0x44(r1)
    addi r3, r3, lbl_807C6A40@l
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r3, 0x1c(r3)
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    ble lbl_fn_800270B8_00001F40
    cmpwi r4, 0x0
    bne lbl_fn_800270B8_00001F48
lbl_fn_800270B8_00001F40:
    li r4, 0x0
    b lbl_fn_800270B8_00001F58
lbl_fn_800270B8_00001F48:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_800270B8_00001F58:
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpw r4, r0
    ble lbl_fn_800270B8_00001FB0
    lwz r0, 0x1c(r3)
    li r3, 0x0
    li r8, 0xa
    stw r3, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r3, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x8
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_800270B8_00002020
lbl_fn_800270B8_00001FB0:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800270B8_0000201C
    lwz r3, lbl_807C68C0@l(r4)
    li r4, 0x2
    bl fn_8001BAA4
    cmpwi r3, 0x0
    beq lbl_fn_800270B8_00001FE0
    li r3, -0x1
    b lbl_fn_800270B8_00002020
lbl_fn_800270B8_00001FE0:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r0, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x5
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r3, 0x8
    b lbl_fn_800270B8_00002020
lbl_fn_800270B8_0000201C:
    li r3, -0x1
lbl_fn_800270B8_00002020:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800271EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800271EC_000020E4
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800271EC_00002098
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800271EC_00002098:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_800271EC_000020E8
lbl_fn_800271EC_000020E4:
    li r0, -0x1
lbl_fn_800271EC_000020E8:
    cmpwi r0, 0x5
    bne lbl_fn_800271EC_00002104
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_800271EC_00002108
lbl_fn_800271EC_00002104:
    li r3, -0x1
lbl_fn_800271EC_00002108:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800272D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x44(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800272D4_00002148
    li r0, -0x1
    b lbl_fn_800272D4_00002154
lbl_fn_800272D4_00002148:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800272D4_00002154:
    cmpwi r0, 0x1
    bne lbl_fn_800272D4_0000219C
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x0
    stw r0, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800272D4_00002280
lbl_fn_800272D4_0000219C:
    lis r7, lbl_807C6A40@ha
    addi r4, r7, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpwi r0, 0x1
    bne lbl_fn_800272D4_0000221C
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x58(r3)
    cmpwi r0, 0x64
    bne lbl_fn_800272D4_0000220C
    lwz r0, 0x1c(r4)
    li r9, 0x0
    li r3, 0x1
    stw r3, lbl_807C6A40@l(r7)
    li r8, 0xa
    addi r5, r1, 0x20
    stw r9, 0x24(r4)
    addi r4, r1, 0x24
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    stw r9, 0x18(r1)
    li r3, 0x8
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_800272D4_00002280
lbl_fn_800272D4_0000220C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r7)
    li r3, 0x1
    b lbl_fn_800272D4_00002280
lbl_fn_800272D4_0000221C:
    lis r3, lbl_807C68C0@ha
    lwz r0, 0x28(r4)
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x58(r3)
    cmpw r3, r0
    bge lbl_fn_800272D4_0000227C
    lwz r0, 0x20(r4)
    li r3, 0x1
    li r9, 0x0
    li r8, 0x5
    stw r3, 0x24(r4)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r3, lbl_807C6A40@l(r7)
    addi r7, r1, 0x14
    li r3, 0xc
    stw r9, 0x14(r1)
    stw r9, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_800272D4_00002280
lbl_fn_800272D4_0000227C:
    li r3, -0x1
lbl_fn_800272D4_00002280:
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80027444(void)
{
    nofralloc
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
}

asm void fn_80027458(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80027458_00002328
    lfs f1, 0x1c(r3)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80027458_00002320
    li r8, 0x0
    li r0, 0xa
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x6
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80027458_0000232C
lbl_fn_80027458_00002320:
    li r3, -0x1
    b lbl_fn_80027458_0000232C
lbl_fn_80027458_00002328:
    li r3, -0x1
lbl_fn_80027458_0000232C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800274F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800274F0_00002370
    li r0, -0x1
    b lbl_fn_800274F0_0000237C
lbl_fn_800274F0_00002370:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800274F0_0000237C:
    cmpwi r0, 0x1
    bne lbl_fn_800274F0_0000238C
    li r3, -0x1
    b lbl_fn_800274F0_00002400
lbl_fn_800274F0_0000238C:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800274F0_000023C8
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_800274F0_000023C8
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_800274F0_000023CC
lbl_fn_800274F0_000023C8:
    li r0, 0x0
lbl_fn_800274F0_000023CC:
    cmpwi r0, 0x0
    beq lbl_fn_800274F0_000023FC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800274F0_00002400
lbl_fn_800274F0_000023FC:
    li r3, -0x1
lbl_fn_800274F0_00002400:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800275CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800275CC_00002440
    li r0, -0x1
    b lbl_fn_800275CC_0000244C
lbl_fn_800275CC_00002440:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800275CC_0000244C:
    cmpwi r0, 0x1
    bne lbl_fn_800275CC_00002494
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800275CC_00002498
lbl_fn_800275CC_00002494:
    li r3, -0x1
lbl_fn_800275CC_00002498:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002765C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002765C_0000250C
    li r8, 0x0
    li r0, 0xd2
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002765C_00002510
lbl_fn_8002765C_0000250C:
    li r3, -0x1
lbl_fn_8002765C_00002510:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800276D4(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800276D4_00002548
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
lbl_fn_800276D4_00002548:
    li r3, -0x1
    blr
}

asm void fn_80027704(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80027704_000025D4
    lfs f1, 0x1c(r3)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80027704_000025CC
    li r8, 0x0
    li r0, 0x3
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x6
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80027704_000025D8
lbl_fn_80027704_000025CC:
    li r3, -0x1
    b lbl_fn_80027704_000025D8
lbl_fn_80027704_000025D4:
    li r3, -0x1
lbl_fn_80027704_000025D8:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002779C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r4, lbl_807C6A40@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002779C_00002620
    li r0, -0x1
    b lbl_fn_8002779C_0000262C
lbl_fn_8002779C_00002620:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002779C_0000262C:
    cmpwi r0, 0x1
    bne lbl_fn_8002779C_0000263C
    li r3, -0x1
    b lbl_fn_8002779C_00002784
lbl_fn_8002779C_0000263C:
    lis r4, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r29, r4, lbl_807C68C0@l
    lfs f1, 0x1c(r29)
    fcmpo cr1, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 4
    beq lbl_fn_8002779C_00002780
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8002779C_00002744
    mfcr r0
    extrwi. r0, r0, 1, 4
    beq lbl_fn_8002779C_00002698
    lwz r3, lbl_807C68C0@l(r4)
    bl fn_8001B714
    cmpwi r3, 0x0
    ble lbl_fn_8002779C_00002698
    stw r3, 0x64(r29)
    li r0, 0x1
    b lbl_fn_8002779C_0000269C
lbl_fn_8002779C_00002698:
    li r0, 0x0
lbl_fn_8002779C_0000269C:
    cmpwi r0, 0x0
    beq lbl_fn_8002779C_000026CC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002779C_00002784
lbl_fn_8002779C_000026CC:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r30, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r30)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002779C_00002708
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8002779C_00002708
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_8002779C_0000270C
lbl_fn_8002779C_00002708:
    li r0, 0x0
lbl_fn_8002779C_0000270C:
    cmpwi r0, 0x0
    beq lbl_fn_8002779C_0000273C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002779C_00002784
lbl_fn_8002779C_0000273C:
    li r3, -0x1
    b lbl_fn_8002779C_00002784
lbl_fn_8002779C_00002744:
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8002779C_00002760
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x4
    b lbl_fn_8002779C_00002784
lbl_fn_8002779C_00002760:
    cmpwi r3, 0x6
    bne lbl_fn_8002779C_00002778
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    b lbl_fn_8002779C_00002784
lbl_fn_8002779C_00002778:
    li r3, -0x1
    b lbl_fn_8002779C_00002784
lbl_fn_8002779C_00002780:
    li r3, -0x1
lbl_fn_8002779C_00002784:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80027954(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    stw r30, 0x48(r1)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80027954_00002824
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80027954_0000281C
    li r8, 0x0
    li r0, 0xb4
    stw r8, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r8, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x0
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_80027954_00002960
lbl_fn_80027954_0000281C:
    li r3, -0x1
    b lbl_fn_80027954_00002960
lbl_fn_80027954_00002824:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x38(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80027954_0000289C
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x4
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x5
    b lbl_fn_80027954_00002924
lbl_fn_80027954_0000289C:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80027954_00002920
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80027954_000028E0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80027954_000028E0:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80027954_00002924
lbl_fn_80027954_00002920:
    li r0, -0x1
lbl_fn_80027954_00002924:
    cmpwi r0, 0x5
    bne lbl_fn_80027954_00002940
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80027954_00002960
lbl_fn_80027954_00002940:
    cmpwi r0, 0x7
    bne lbl_fn_80027954_0000295C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80027954_00002960
lbl_fn_80027954_0000295C:
    li r3, -0x1
lbl_fn_80027954_00002960:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80027B2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800281A0
    cmpwi r3, 0x0
    bne lbl_fn_80027B2C_000029A4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x0
    b lbl_fn_80027B2C_000029EC
lbl_fn_80027B2C_000029A4:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80027B2C_000029C0
    li r0, -0x1
    b lbl_fn_80027B2C_000029CC
lbl_fn_80027B2C_000029C0:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80027B2C_000029CC:
    cmpwi r0, 0x1
    bne lbl_fn_80027B2C_000029E8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80027B2C_000029EC
lbl_fn_80027B2C_000029E8:
    li r3, -0x1
lbl_fn_80027B2C_000029EC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80027BB0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lis r29, lbl_807C6A40@ha
    addi r3, r29, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80027BB0_00002A88
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80027BB0_00002A80
    li r8, 0x0
    li r0, 0x96
    stw r8, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r8, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x0
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x9
    b lbl_fn_80027BB0_00002C84
lbl_fn_80027BB0_00002A80:
    li r3, -0x1
    b lbl_fn_80027BB0_00002C84
lbl_fn_80027BB0_00002A88:
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80027BB0_00002AF4
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80027BB0_00002AEC
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r8, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x4
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r0, 0x5
    b lbl_fn_80027BB0_00002B2C
lbl_fn_80027BB0_00002AEC:
    li r0, -0x1
    b lbl_fn_80027BB0_00002B2C
lbl_fn_80027BB0_00002AF4:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r0, 0x1
lbl_fn_80027BB0_00002B2C:
    cmpwi r0, 0x5
    bne lbl_fn_80027BB0_00002B48
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80027BB0_00002C84
lbl_fn_80027BB0_00002B48:
    cmpwi r0, 0x6
    bne lbl_fn_80027BB0_00002BE8
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_807C6A40@ha
    addi r30, r5, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0xc(r30)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_80027BB0_00002B78
    li r3, -0x1
    b lbl_fn_80027BB0_00002C84
lbl_fn_80027BB0_00002B78:
    lfs f1, 0x1c(r30)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80027BB0_00002BAC
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_80027BB0_00002BAC
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_80027BB0_00002BB0
lbl_fn_80027BB0_00002BAC:
    li r0, 0x0
lbl_fn_80027BB0_00002BB0:
    cmpwi r0, 0x0
    beq lbl_fn_80027BB0_00002BE0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80027BB0_00002C84
lbl_fn_80027BB0_00002BE0:
    li r3, -0x1
    b lbl_fn_80027BB0_00002C84
lbl_fn_80027BB0_00002BE8:
    cmpwi r0, 0x1
    bne lbl_fn_80027BB0_00002C04
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80027BB0_00002C84
lbl_fn_80027BB0_00002C04:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x48(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80027BB0_00002C80
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x4
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80027BB0_00002C84
lbl_fn_80027BB0_00002C80:
    li r3, -0x1
lbl_fn_80027BB0_00002C84:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80027E54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x34(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x2c(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x18(r1)
    slwi r0, r4, 1
    lfs f2, 0x1c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80027E54_00002D00
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80027E54_00002D50
lbl_fn_80027E54_00002D00:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80027E54_00002D4C
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r0, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x5
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x8
    stw r31, lbl_807C6A40@l(r3)
    b lbl_fn_80027E54_00002D50
lbl_fn_80027E54_00002D4C:
    li r0, -0x1
lbl_fn_80027E54_00002D50:
    cmpwi r0, 0x6
    bne lbl_fn_80027E54_00002D9C
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_80027E54_00002D78
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80027E54_00002DBC
lbl_fn_80027E54_00002D78:
    cmpwi r3, 0x6
    bne lbl_fn_80027E54_00002D94
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80027E54_00002DBC
lbl_fn_80027E54_00002D94:
    li r3, -0x1
    b lbl_fn_80027E54_00002DBC
lbl_fn_80027E54_00002D9C:
    cmpwi r0, 0x8
    bne lbl_fn_80027E54_00002DB8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80027E54_00002DBC
lbl_fn_80027E54_00002DB8:
    li r3, -0x1
lbl_fn_80027E54_00002DBC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80027F84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80027F84_00002E7C
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80027F84_00002E30
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80027F84_00002E30:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80027F84_00002E80
lbl_fn_80027F84_00002E7C:
    li r0, -0x1
lbl_fn_80027F84_00002E80:
    cmpwi r0, 0x5
    bne lbl_fn_80027F84_00002E9C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80027F84_00002EA0
lbl_fn_80027F84_00002E9C:
    li r3, -0x1
lbl_fn_80027F84_00002EA0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
