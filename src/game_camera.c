#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8001AEDC(void);
extern void fn_8001B634(void);
extern void fn_8001BD14(void);
extern void fn_8001BE00(void);
extern void fn_8001BEB0(void);
extern void fn_8003CDB0(void);
extern void fn_8003D298(void);
extern void fn_8003DBA4(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8072FF60[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];

/* Small data declarations */
extern u32 lbl_80880798;

/* Function declarations */
void fn_8001EDE8(void);
void fn_8001EDF0(void);
void fn_8001EDF8(void);
void fn_8001EE00(void);
void fn_8001EE08(void);
void fn_8001EE10(void);
void fn_8001EE18(void);
void fn_8001EE20(void);
void fn_8001EE28(void);
void fn_8001EE30(void);
void fn_8001EE38(void);
void fn_8001EE40(void);
void fn_8001EE48(void);
void fn_8001EE50(void);
void fn_8001EE58(void);
void fn_8001EEBC(void);
void fn_8001F248(void);
void fn_8001F478(void);
void fn_8001F674(void);
void fn_8001F6F8(void);
void fn_8001F814(void);
void fn_8001F944(void);
void fn_8001FA2C(void);
void fn_8001FB08(void);
void fn_8001FC40(void);
void fn_8001FCB4(void);

asm void fn_8001EDE8(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EDF0(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EDF8(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE00(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE08(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE10(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE18(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE20(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE28(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE30(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE38(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE40(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE48(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE50(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8001EE58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807C68C0@ha
    lis r5, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r6, lbl_807C68C0@l
    addi r4, r5, lbl_807C6A40@l
    li r0, 0x5a
    stw r31, 0xc(r1)
    li r31, 0x1
    lwz r3, 0x30(r3)
    stw r3, 0x1c(r4)
    lwz r3, lbl_807C68C0@l(r6)
    stw r0, 0x20(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8001EE58_000000BC
    li r31, 0x7
lbl_fn_8001EE58_000000BC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001EEBC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8001EEBC_00000228
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8001EEBC_00000164
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8001EEBC_0000015C
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r0, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x6
    stw r0, 0x50(r1)
    stw r31, 0x54(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_8001EEBC_0000019C
lbl_fn_8001EEBC_0000015C:
    li r0, -0x1
    b lbl_fn_8001EEBC_0000019C
lbl_fn_8001EEBC_00000164:
    li r0, 0x0
    stw r0, 0x58(r1)
    addi r4, r1, 0x64
    addi r5, r1, 0x60
    stw r0, 0x5c(r1)
    addi r6, r1, 0x5c
    addi r7, r1, 0x58
    li r3, 0x0
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_8001EEBC_0000019C:
    cmpwi r0, 0x6
    bne lbl_fn_8001EEBC_000001E8
    bl fn_8003CDB0
    cmpwi r3, 0x9
    bne lbl_fn_8001EEBC_000001C4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_000001C4:
    cmpwi r3, 0x4
    bne lbl_fn_8001EEBC_000001E0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_000001E0:
    li r3, -0x1
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_000001E8:
    cmpwi r0, 0x1
    bne lbl_fn_8001EEBC_00000204
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_00000204:
    cmpwi r0, 0x9
    bne lbl_fn_8001EEBC_00000220
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_00000220:
    li r3, -0x1
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_00000228:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8001EEBC_00000294
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8001EEBC_0000028C
    lwz r0, 0x20(r31)
    li r8, 0x0
    stw r8, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r8, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x4
    stw r8, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x5
    b lbl_fn_8001EEBC_000002CC
lbl_fn_8001EEBC_0000028C:
    li r0, -0x1
    b lbl_fn_8001EEBC_000002CC
lbl_fn_8001EEBC_00000294:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_8001EEBC_000002CC:
    cmpwi r0, 0x5
    bne lbl_fn_8001EEBC_000002E8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_000002E8:
    cmpwi r0, 0x1
    bne lbl_fn_8001EEBC_00000304
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_00000304:
    cmpwi r0, 0x6
    bne lbl_fn_8001EEBC_000003C8
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_807C6A40@ha
    addi r31, r5, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0xc(r31)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_8001EEBC_00000334
    li r3, -0x1
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_00000334:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8001EEBC_00000368
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8001EEBC_00000368
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8001EEBC_0000036C
lbl_fn_8001EEBC_00000368:
    li r0, 0x0
lbl_fn_8001EEBC_0000036C:
    cmpwi r0, 0x0
    beq lbl_fn_8001EEBC_000003C0
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
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_000003C0:
    li r3, -0x1
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_000003C8:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x68(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x6c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8001EEBC_00000444
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x4
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8001EEBC_00000448
lbl_fn_8001EEBC_00000444:
    li r3, -0x1
lbl_fn_8001EEBC_00000448:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8001F248(void)
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
    bne lbl_fn_8001F248_0000053C
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8001F248_00000514
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8001F248_000004D4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8001F248_000004D4:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r31, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8001F248_00000518
lbl_fn_8001F248_00000514:
    li r0, -0x1
lbl_fn_8001F248_00000518:
    cmpwi r0, 0x7
    bne lbl_fn_8001F248_00000534
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8001F248_00000678
lbl_fn_8001F248_00000534:
    li r3, -0x1
    b lbl_fn_8001F248_00000678
lbl_fn_8001F248_0000053C:
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
    bge lbl_fn_8001F248_000005B4
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
    b lbl_fn_8001F248_0000063C
lbl_fn_8001F248_000005B4:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8001F248_00000638
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8001F248_000005F8
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8001F248_000005F8:
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
    b lbl_fn_8001F248_0000063C
lbl_fn_8001F248_00000638:
    li r0, -0x1
lbl_fn_8001F248_0000063C:
    cmpwi r0, 0x5
    bne lbl_fn_8001F248_00000658
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8001F248_00000678
lbl_fn_8001F248_00000658:
    cmpwi r0, 0x7
    bne lbl_fn_8001F248_00000674
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8001F248_00000678
lbl_fn_8001F248_00000674:
    li r3, -0x1
lbl_fn_8001F248_00000678:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8001F478(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8001F478_000007FC
    lis r3, lbl_807C68C0@ha
    addi r31, r3, lbl_807C68C0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8001F478_0000076C
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BD14
    lfs f0, 0x1c(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_8001F478_00000730
    lwz r8, 0x20(r31)
    cmpwi r8, 0x0
    beq lbl_fn_8001F478_0000071C
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r3, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x3
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
lbl_fn_8001F478_0000071C:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8001F478_00000770
lbl_fn_8001F478_00000730:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r0, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x6
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_8001F478_00000770
lbl_fn_8001F478_0000076C:
    li r0, -0x1
lbl_fn_8001F478_00000770:
    cmpwi r0, 0x9
    bne lbl_fn_8001F478_0000078C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_0000078C:
    cmpwi r0, 0x6
    bne lbl_fn_8001F478_000007F4
    bl fn_8003CDB0
    cmpwi r3, 0x6
    bne lbl_fn_8001F478_000007B4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_000007B4:
    cmpwi r3, 0x4
    bne lbl_fn_8001F478_000007D0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_000007D0:
    cmpwi r3, 0x9
    bne lbl_fn_8001F478_000007EC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_000007EC:
    li r3, -0x1
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_000007F4:
    li r3, -0x1
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_000007FC:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8001F478_00000820
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_8001F478_00000824
lbl_fn_8001F478_00000820:
    li r0, -0x1
lbl_fn_8001F478_00000824:
    cmpwi r0, 0x6
    bne lbl_fn_8001F478_00000870
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8001F478_0000084C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_0000084C:
    cmpwi r3, 0x4
    bne lbl_fn_8001F478_00000868
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_00000868:
    li r3, -0x1
    b lbl_fn_8001F478_00000874
lbl_fn_8001F478_00000870:
    li r3, -0x1
lbl_fn_8001F478_00000874:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8001F674(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8001FB08
    cmpwi r3, 0x0
    bne lbl_fn_8001F674_000008B8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x0
    b lbl_fn_8001F674_00000900
lbl_fn_8001F674_000008B8:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8001F674_000008D4
    li r0, -0x1
    b lbl_fn_8001F674_000008E0
lbl_fn_8001F674_000008D4:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8001F674_000008E0:
    cmpwi r0, 0x1
    bne lbl_fn_8001F674_000008FC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8001F674_00000900
lbl_fn_8001F674_000008FC:
    li r3, -0x1
lbl_fn_8001F674_00000900:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001F6F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0xc(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8001F6F8_0000093C
    li r0, -0x1
    b lbl_fn_8001F6F8_00000948
lbl_fn_8001F6F8_0000093C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8001F6F8_00000948:
    cmpwi r0, 0x1
    bne lbl_fn_8001F6F8_00000958
    li r3, -0x1
    b lbl_fn_8001F6F8_00000A18
lbl_fn_8001F6F8_00000958:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8001F6F8_00000A14
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8001F6F8_000009D8
    bl fn_8003CDB0
    cmpwi r3, 0x6
    bne lbl_fn_8001F6F8_000009A0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_8001F6F8_00000A18
lbl_fn_8001F6F8_000009A0:
    cmpwi r3, 0x9
    bne lbl_fn_8001F6F8_000009B8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_8001F6F8_00000A18
lbl_fn_8001F6F8_000009B8:
    cmpwi r3, 0x4
    bne lbl_fn_8001F6F8_000009D0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_8001F6F8_00000A18
lbl_fn_8001F6F8_000009D0:
    li r3, -0x1
    b lbl_fn_8001F6F8_00000A18
lbl_fn_8001F6F8_000009D8:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8001F6F8_000009F4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_8001F6F8_00000A18
lbl_fn_8001F6F8_000009F4:
    cmpwi r3, 0x4
    bne lbl_fn_8001F6F8_00000A0C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_8001F6F8_00000A18
lbl_fn_8001F6F8_00000A0C:
    li r3, -0x1
    b lbl_fn_8001F6F8_00000A18
lbl_fn_8001F6F8_00000A14:
    li r3, -0x1
lbl_fn_8001F6F8_00000A18:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001F814(void)
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
    ble lbl_fn_8001F814_00000A8C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8001F814_00000ADC
lbl_fn_8001F814_00000A8C:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8001F814_00000AD8
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
    b lbl_fn_8001F814_00000ADC
lbl_fn_8001F814_00000AD8:
    li r0, -0x1
lbl_fn_8001F814_00000ADC:
    cmpwi r0, 0x6
    bne lbl_fn_8001F814_00000B28
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8001F814_00000B04
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8001F814_00000B48
lbl_fn_8001F814_00000B04:
    cmpwi r3, 0x6
    bne lbl_fn_8001F814_00000B20
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8001F814_00000B48
lbl_fn_8001F814_00000B20:
    li r3, -0x1
    b lbl_fn_8001F814_00000B48
lbl_fn_8001F814_00000B28:
    cmpwi r0, 0x8
    bne lbl_fn_8001F814_00000B44
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8001F814_00000B48
lbl_fn_8001F814_00000B44:
    li r3, -0x1
lbl_fn_8001F814_00000B48:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8001F944(void)
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
    beq lbl_fn_8001F944_00000C08
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8001F944_00000BBC
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8001F944_00000BBC:
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
    b lbl_fn_8001F944_00000C0C
lbl_fn_8001F944_00000C08:
    li r0, -0x1
lbl_fn_8001F944_00000C0C:
    cmpwi r0, 0x5
    bne lbl_fn_8001F944_00000C28
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8001F944_00000C2C
lbl_fn_8001F944_00000C28:
    li r3, -0x1
lbl_fn_8001F944_00000C2C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001FA2C(void)
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
    beq lbl_fn_8001FA2C_00000CE4
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8001FA2C_00000CA4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8001FA2C_00000CA4:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8001FA2C_00000CE8
lbl_fn_8001FA2C_00000CE4:
    li r0, -0x1
lbl_fn_8001FA2C_00000CE8:
    cmpwi r0, 0x7
    bne lbl_fn_8001FA2C_00000D04
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8001FA2C_00000D08
lbl_fn_8001FA2C_00000D04:
    li r3, -0x1
lbl_fn_8001FA2C_00000D08:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001FB08(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r9, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r7, r9, lbl_807C6A40@l
    lwz r0, 0x18(r7)
    cmpwi r0, 0x0
    bne lbl_fn_8001FB08_00000DC4
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8001FB08_00000DBC
    li r0, 0x0
    li r8, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0xc(r7)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r8, lbl_807C6A40@l(r9)
    stw r0, 0x24(r1)
    stw r0, 0x20(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_8001FB08_00000E48
lbl_fn_8001FB08_00000DBC:
    li r3, -0x1
    b lbl_fn_8001FB08_00000E48
lbl_fn_8001FB08_00000DC4:
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8001FB08_00000E44
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0xc(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, lbl_807C6A40@l(r9)
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_8001FB08_00000E48
lbl_fn_8001FB08_00000E44:
    li r3, -0x1
lbl_fn_8001FB08_00000E48:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8001FC40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_807C68C0@ha
    lis r7, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r8, lbl_807C68C0@l
    addi r6, r7, lbl_807C6A40@l
    li r5, 0x5a
    stw r31, 0xc(r1)
    li r31, 0x1
    li r4, 0x3c
    li r0, 0x64
    lwz r3, 0x30(r3)
    stw r3, 0x1c(r6)
    lwz r3, lbl_807C68C0@l(r8)
    stw r5, 0x20(r6)
    stw r4, 0x24(r6)
    stw r0, 0x28(r6)
    stw r31, lbl_807C6A40@l(r7)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8001FC40_00000EB4
    li r31, 0x7
lbl_fn_8001FC40_00000EB4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001FCB4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    lis r31, lbl_807C6A40@ha
    stw r30, 0x78(r1)
    addi r30, r31, lbl_807C6A40@l
    lwz r3, 0x24(r30)
    lwz r4, 0x28(r30)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_8001FCB4_00000F0C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00000F0C:
    cmpwi r3, 0xa
    bne lbl_fn_8001FCB4_00000F24
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00000F24:
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8001FCB4_0000106C
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8001FCB4_00000F98
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8001FCB4_00000F90
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r0, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x6
    stw r0, 0x50(r1)
    stw r30, 0x54(r1)
    bl fn_8001AEDC
    stw r30, lbl_807C6A40@l(r31)
    li r0, 0x9
    b lbl_fn_8001FCB4_00000FD0
lbl_fn_8001FCB4_00000F90:
    li r0, -0x1
    b lbl_fn_8001FCB4_00000FD0
lbl_fn_8001FCB4_00000F98:
    li r0, 0x0
    stw r0, 0x58(r1)
    addi r4, r1, 0x64
    addi r5, r1, 0x60
    stw r0, 0x5c(r1)
    addi r6, r1, 0x5c
    addi r7, r1, 0x58
    li r3, 0x0
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
lbl_fn_8001FCB4_00000FD0:
    cmpwi r0, 0x9
    bne lbl_fn_8001FCB4_00000FEC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00000FEC:
    cmpwi r0, 0x6
    bne lbl_fn_8001FCB4_00001048
    bl fn_8003CDB0
    cmpwi r3, 0x9
    bne lbl_fn_8001FCB4_00001014
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001014:
    cmpwi r3, 0x6
    bne lbl_fn_8001FCB4_00001024
    li r3, -0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001024:
    cmpwi r3, 0x4
    bne lbl_fn_8001FCB4_00001040
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001040:
    li r3, -0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001048:
    cmpwi r0, 0x1
    bne lbl_fn_8001FCB4_00001064
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001064:
    li r3, -0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_0000106C:
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8001FCB4_000010D8
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8001FCB4_000010D0
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r8, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x4
    stw r8, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x5
    b lbl_fn_8001FCB4_00001110
lbl_fn_8001FCB4_000010D0:
    li r0, -0x1
    b lbl_fn_8001FCB4_00001110
lbl_fn_8001FCB4_000010D8:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
lbl_fn_8001FCB4_00001110:
    cmpwi r0, 0x5
    bne lbl_fn_8001FCB4_0000112C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_0000112C:
    cmpwi r0, 0x1
    bne lbl_fn_8001FCB4_00001148
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001148:
    cmpwi r0, 0x6
    bne lbl_fn_8001FCB4_0000120C
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_807C6A40@ha
    addi r31, r5, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0xc(r31)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_8001FCB4_00001178
    li r3, -0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001178:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8001FCB4_000011AC
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8001FCB4_000011AC
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8001FCB4_000011B0
lbl_fn_8001FCB4_000011AC:
    li r0, 0x0
lbl_fn_8001FCB4_000011B0:
    cmpwi r0, 0x0
    beq lbl_fn_8001FCB4_00001204
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
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001204:
    li r3, -0x1
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_0000120C:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x68(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x6c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8001FCB4_00001288
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x4
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8001FCB4_0000128C
lbl_fn_8001FCB4_00001288:
    li r3, -0x1
lbl_fn_8001FCB4_0000128C:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}
