#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_803BF824(void);
extern void fn_803BF8EC(void);
extern void fn_803BF960(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087DDF0;
extern u32 lbl_8087DDF4;
extern u32 lbl_8087DDF8;
extern u32 lbl_8087DDFC;
extern u32 lbl_8087DE00;
extern u32 lbl_8087DE04;
extern u32 lbl_8087DE08;
extern u32 lbl_8087DE0C;
extern u32 lbl_8087DE10;
extern u32 lbl_8087DE14;
extern u32 lbl_8087DE18;
extern u32 lbl_8087DE1C;
extern u32 lbl_8087DE20;
extern u32 lbl_8087DE24;
extern u32 lbl_8087DE28;
extern u32 lbl_8087DE2C;
extern u32 lbl_8087DE30;
extern u32 lbl_8087DE34;
extern u32 lbl_8087DE38;
extern u32 lbl_8087DE3C;
extern u32 lbl_8087DE40;
extern u32 lbl_8087DE44;
extern u32 lbl_8087DE48;
extern u32 lbl_8087DE4C;
extern u32 lbl_8087DE50;
extern u32 lbl_8087DE54;
extern u32 lbl_8087DE58;
extern u32 lbl_8087DE5C;
extern u32 lbl_8087DE60;
extern u32 lbl_8087DE64;
extern u32 lbl_8087DE68;
extern u32 lbl_8087DE6C;
extern u32 lbl_8087DE70;
extern u32 lbl_8087DE74;
extern u32 lbl_8087DE78;
extern u32 lbl_8087DE7C;
extern u32 lbl_8087DE80;
extern u32 lbl_8087DE84;
extern u32 lbl_8087DE88;
extern u32 lbl_8087DE8C;
extern u32 lbl_8087DE90;
extern u32 lbl_8087DE94;
extern u32 lbl_8087DE98;
extern u32 lbl_8087DE9C;
extern u32 lbl_8087DEA0;
extern u32 lbl_8087DEA4;
extern u32 lbl_80885CBC;

/* Function declarations */
void fn_803C795C(void);
void fn_803C7964(void);
void fn_803C7A14(void);
void fn_803C7A24(void);
void fn_803C7C34(void);
void fn_803C7CDC(void);
void fn_803C7D08(void);
void fn_803C7D18(void);
void fn_803C7D20(void);
void fn_803C7DC8(void);
void fn_803C7DF8(void);
void fn_803C7F30(void);
void fn_803C7F38(void);
void fn_803C7FE0(void);
void fn_803C7FE4(void);
void fn_803C8130(void);
void fn_803C81D8(void);
void fn_803C81DC(void);
void fn_803C8284(void);
void fn_803C8288(void);
void fn_803C8330(void);
void fn_803C8334(void);
void fn_803C833C(void);
void fn_803C83E4(void);
void fn_803C83E8(void);
void fn_803C8564(void);
void fn_803C856C(void);
void fn_803C861C(void);
void fn_803C862C(void);
void fn_803C8810(void);
void fn_803C8898(void);
void fn_803C88A0(void);
void fn_803C8950(void);
void fn_803C8960(void);
void fn_803C8B0C(void);
void fn_803C8BB4(void);
void fn_803C8BB8(void);
void fn_803C8BC0(void);
void fn_803C8C68(void);
void fn_803C8C6C(void);
void fn_803C8E64(void);
void fn_803C8E6C(void);
void fn_803C8F14(void);
void fn_803C8F18(void);
void fn_803C90BC(void);
void fn_803C90C4(void);
void fn_803C916C(void);
void fn_803C9170(void);

asm void fn_803C795C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C7964(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C7964_00000048
    lis r4, fn_803BF824@ha
    mr r3, r0
    addi r4, r4, fn_803BF824@l
    bl fn_80695A50
lbl_fn_803C7964_00000048:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C7964_00000094
    mulli r3, r30, 0x148
    mr r4, r31
    la r5, lbl_8087DEA4
    la r6, lbl_8087DEA0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7A14@ha
    lis r5, fn_803BF824@ha
    mr r7, r30
    li r6, 0x148
    addi r4, r4, fn_803C7A14@l
    addi r5, r5, fn_803BF824@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C7964_0000009C
lbl_fn_803C7964_00000094:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C7964_0000009C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C7A14(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x140(r3)
    stw r0, 0x144(r3)
    blr
}

asm void fn_803C7A24(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r27, 0x0(r3)
    mr r25, r3
    cmplw r4, r27
    beq lbl_fn_803C7A24_000002C0
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r28, 0x4(r3)
    mr r22, r4
    beq lbl_fn_803C7A24_000002A0
    mulli r3, r4, 0x148
    mr r4, r5
    la r5, lbl_8087DE9C
    la r6, lbl_8087DE98
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7A14@ha
    lis r5, fn_803BF824@ha
    mr r7, r22
    li r6, 0x148
    addi r4, r4, fn_803C7A14@l
    addi r5, r5, fn_803BF824@l
    bl fn_80695720
    cmpwi r28, 0x0
    stw r3, 0x4(r25)
    beq lbl_fn_803C7A24_000002A8
    cmpwi r27, 0x0
    beq lbl_fn_803C7A24_000002A8
    li r26, 0x0
    li r24, 0x0
    mr r23, r26
    li r31, 0x20
    b lbl_fn_803C7A24_00000280
lbl_fn_803C7A24_00000160:
    lwz r3, 0x4(r25)
    add r29, r28, r24
    lwzx r0, r28, r24
    addi r4, r29, 0x28
    stwx r0, r3, r24
    add r30, r3, r24
    addi r5, r30, 0x28
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x4(r30), 0, 0
    stfs f2, 0xc(r30)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r30)
    lfs f0, 0x14(r29)
    stfs f0, 0x14(r30)
    lwz r0, 0x18(r29)
    stw r0, 0x18(r30)
    lwz r0, 0x1c(r29)
    stw r0, 0x1c(r30)
    lwz r0, 0x20(r29)
    stw r0, 0x20(r30)
    lwz r0, 0x24(r29)
    stw r0, 0x24(r30)
    lwz r0, 0x28(r29)
    stw r0, 0x28(r30)
    mtctr r31
lbl_fn_803C7A24_000001C8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803C7A24_000001C8
    lwz r0, 0x12c(r29)
    stw r0, 0x12c(r30)
    lwz r0, 0x134(r29)
    lwz r3, 0x130(r29)
    stw r3, 0x130(r30)
    stw r0, 0x134(r30)
    lwz r0, 0x138(r29)
    stw r0, 0x138(r30)
    lwz r0, 0x13c(r29)
    stw r0, 0x13c(r30)
    lwz r3, 0x144(r30)
    lwz r22, 0x140(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803C7A24_00000218
    bl fn_80084C24
lbl_fn_803C7A24_00000218:
    cmpwi r22, 0x0
    stw r22, 0x140(r30)
    beq lbl_fn_803C7A24_00000244
    slwi r3, r22, 2
    li r4, 0x0
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x144(r30)
    b lbl_fn_803C7A24_00000248
lbl_fn_803C7A24_00000244:
    stw r23, 0x144(r30)
lbl_fn_803C7A24_00000248:
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_803C7A24_0000026C
lbl_fn_803C7A24_00000254:
    lwz r4, 0x144(r29)
    addi r5, r5, 0x1
    lwz r3, 0x144(r30)
    lwzx r0, r4, r6
    stwx r0, r3, r6
    addi r6, r6, 0x4
lbl_fn_803C7A24_0000026C:
    lwz r0, 0x140(r30)
    cmplw r5, r0
    blt lbl_fn_803C7A24_00000254
    addi r26, r26, 0x1
    addi r24, r24, 0x148
lbl_fn_803C7A24_00000280:
    lwz r3, 0x0(r25)
    mr r0, r27
    cmplw r27, r3
    blt lbl_fn_803C7A24_00000294
    mr r0, r3
lbl_fn_803C7A24_00000294:
    cmplw r26, r0
    blt lbl_fn_803C7A24_00000160
    b lbl_fn_803C7A24_000002A8
lbl_fn_803C7A24_000002A0:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C7A24_000002A8:
    cmpwi r28, 0x0
    beq lbl_fn_803C7A24_000002C0
    lis r4, fn_803BF824@ha
    mr r3, r28
    addi r4, r4, fn_803BF824@l
    bl fn_80695A50
lbl_fn_803C7A24_000002C0:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803C7C34(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C7C34_00000314
    beq lbl_fn_803C7C34_00000314
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C7C34_00000314:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C7C34_0000035C
    slwi r3, r30, 5
    mr r4, r31
    addi r3, r3, 0x10
    la r5, lbl_8087DE94
    la r6, lbl_8087DE90
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7CDC@ha
    mr r7, r30
    addi r4, r4, fn_803C7CDC@l
    li r5, 0x0
    li r6, 0x20
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C7C34_00000364
lbl_fn_803C7C34_0000035C:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C7C34_00000364:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C7CDC(void)
{
    nofralloc
    lfs f0, lbl_80885CBC
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    blr
}

asm void fn_803C7D08(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 5
    add r3, r3, r0
    blr
}

asm void fn_803C7D18(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C7D20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C7D20_00000400
    beq lbl_fn_803C7D20_00000400
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C7D20_00000400:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C7D20_00000448
    slwi r3, r30, 5
    mr r4, r31
    addi r3, r3, 0x10
    la r5, lbl_8087DE8C
    la r6, lbl_8087DE88
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7DC8@ha
    mr r7, r30
    addi r4, r4, fn_803C7DC8@l
    li r5, 0x0
    li r6, 0x20
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C7D20_00000450
lbl_fn_803C7D20_00000448:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C7D20_00000450:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C7DC8(void)
{
    nofralloc
    lfs f0, lbl_80885CBC
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stw r0, 0x1c(r3)
    blr
}

asm void fn_803C7DF8(void)
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
    lwz r29, 0x0(r3)
    cmplw r4, r29
    beq lbl_fn_803C7DF8_000005B4
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r30, 0x4(r3)
    mr r31, r4
    beq lbl_fn_803C7DF8_00000598
    slwi r3, r4, 5
    mr r4, r5
    la r5, lbl_8087DE84
    la r6, lbl_8087DE80
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7DC8@ha
    mr r7, r31
    addi r4, r4, fn_803C7DC8@l
    li r5, 0x0
    li r6, 0x20
    bl fn_80695720
    cmpwi r30, 0x0
    stw r3, 0x4(r28)
    beq lbl_fn_803C7DF8_000005A0
    cmpwi r29, 0x0
    beq lbl_fn_803C7DF8_000005A0
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_803C7DF8_00000578
lbl_fn_803C7DF8_00000530:
    lwz r4, 0x4(r28)
    add r5, r30, r3
    lwzx r0, r30, r3
    addi r6, r6, 0x1
    stwux r0, r4, r3
    addi r3, r3, 0x20
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r4)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r4), 0, 0
    stfs f2, 0x18(r4)
    lwz r0, 0x1c(r5)
    stw r0, 0x1c(r4)
lbl_fn_803C7DF8_00000578:
    lwz r4, 0x0(r28)
    mr r0, r29
    cmplw r29, r4
    blt lbl_fn_803C7DF8_0000058C
    mr r0, r4
lbl_fn_803C7DF8_0000058C:
    cmplw r6, r0
    blt lbl_fn_803C7DF8_00000530
    b lbl_fn_803C7DF8_000005A0
lbl_fn_803C7DF8_00000598:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C7DF8_000005A0:
    cmpwi r30, 0x0
    beq lbl_fn_803C7DF8_000005B4
    beq lbl_fn_803C7DF8_000005B4
    subi r3, r30, 0x10
    bl fn_80084C24
lbl_fn_803C7DF8_000005B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C7F30(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C7F38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C7F38_00000618
    beq lbl_fn_803C7F38_00000618
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C7F38_00000618:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C7F38_00000660
    mulli r3, r30, 0x28
    mr r4, r31
    la r5, lbl_8087DE7C
    la r6, lbl_8087DE78
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7FE0@ha
    mr r7, r30
    addi r4, r4, fn_803C7FE0@l
    li r5, 0x0
    li r6, 0x28
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C7F38_00000668
lbl_fn_803C7F38_00000660:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C7F38_00000668:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C7FE0(void)
{
    nofralloc
    blr
}

asm void fn_803C7FE4(void)
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
    lwz r28, 0x0(r3)
    cmplw r4, r28
    beq lbl_fn_803C7FE4_000007B4
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r29, 0x4(r3)
    mr r30, r4
    beq lbl_fn_803C7FE4_00000798
    mulli r3, r4, 0x28
    mr r4, r5
    la r5, lbl_8087DE74
    la r6, lbl_8087DE70
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C7FE0@ha
    mr r7, r30
    addi r4, r4, fn_803C7FE0@l
    li r5, 0x0
    li r6, 0x28
    bl fn_80695720
    cmpwi r29, 0x0
    stw r3, 0x4(r31)
    beq lbl_fn_803C7FE4_000007A0
    cmpwi r28, 0x0
    beq lbl_fn_803C7FE4_000007A0
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_803C7FE4_00000778
lbl_fn_803C7FE4_0000071C:
    lwz r4, 0x4(r31)
    add r6, r29, r3
    lwzx r0, r29, r3
    addi r7, r7, 0x1
    stwx r0, r4, r3
    add r5, r4, r3
    addi r3, r3, 0x28
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r5)
    lfs f0, 0x14(r6)
    stfs f0, 0x14(r5)
    lwz r0, 0x1c(r6)
    lwz r4, 0x18(r6)
    stw r4, 0x18(r5)
    stw r0, 0x1c(r5)
    lwz r0, 0x20(r6)
    stw r0, 0x20(r5)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r5)
lbl_fn_803C7FE4_00000778:
    lwz r4, 0x0(r31)
    mr r0, r28
    cmplw r28, r4
    blt lbl_fn_803C7FE4_0000078C
    mr r0, r4
lbl_fn_803C7FE4_0000078C:
    cmplw r7, r0
    blt lbl_fn_803C7FE4_0000071C
    b lbl_fn_803C7FE4_000007A0
lbl_fn_803C7FE4_00000798:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C7FE4_000007A0:
    cmpwi r29, 0x0
    beq lbl_fn_803C7FE4_000007B4
    beq lbl_fn_803C7FE4_000007B4
    subi r3, r29, 0x10
    bl fn_80084C24
lbl_fn_803C7FE4_000007B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8130(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C8130_00000810
    beq lbl_fn_803C8130_00000810
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C8130_00000810:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C8130_00000858
    mulli r3, r30, 0x30
    mr r4, r31
    la r5, lbl_8087DE6C
    la r6, lbl_8087DE68
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C81D8@ha
    mr r7, r30
    addi r4, r4, fn_803C81D8@l
    li r5, 0x0
    li r6, 0x30
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C8130_00000860
lbl_fn_803C8130_00000858:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C8130_00000860:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C81D8(void)
{
    nofralloc
    blr
}

asm void fn_803C81DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C81DC_000008BC
    beq lbl_fn_803C81DC_000008BC
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C81DC_000008BC:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C81DC_00000904
    slwi r3, r30, 6
    mr r4, r31
    addi r3, r3, 0x10
    la r5, lbl_8087DE64
    la r6, lbl_8087DE60
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8284@ha
    mr r7, r30
    addi r4, r4, fn_803C8284@l
    li r5, 0x0
    li r6, 0x40
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C81DC_0000090C
lbl_fn_803C81DC_00000904:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C81DC_0000090C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8284(void)
{
    nofralloc
    blr
}

asm void fn_803C8288(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C8288_00000968
    beq lbl_fn_803C8288_00000968
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C8288_00000968:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C8288_000009B0
    mulli r3, r30, 0x30
    mr r4, r31
    la r5, lbl_8087DE5C
    la r6, lbl_8087DE58
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8330@ha
    mr r7, r30
    addi r4, r4, fn_803C8330@l
    li r5, 0x0
    li r6, 0x30
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C8288_000009B8
lbl_fn_803C8288_000009B0:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C8288_000009B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8330(void)
{
    nofralloc
    blr
}

asm void fn_803C8334(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C833C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C833C_00000A1C
    beq lbl_fn_803C833C_00000A1C
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C833C_00000A1C:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C833C_00000A64
    slwi r3, r30, 6
    mr r4, r31
    addi r3, r3, 0x10
    la r5, lbl_8087DE54
    la r6, lbl_8087DE50
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C83E4@ha
    mr r7, r30
    addi r4, r4, fn_803C83E4@l
    li r5, 0x0
    li r6, 0x40
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C833C_00000A6C
lbl_fn_803C833C_00000A64:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C833C_00000A6C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C83E4(void)
{
    nofralloc
    blr
}

asm void fn_803C83E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803C83E8_00000BE8
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r28, r4
    beq lbl_fn_803C83E8_00000BCC
    slwi r3, r4, 6
    mr r4, r5
    la r5, lbl_8087DE4C
    la r6, lbl_8087DE48
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C83E4@ha
    mr r7, r28
    addi r4, r4, fn_803C83E4@l
    li r5, 0x0
    li r6, 0x40
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803C83E8_00000BD4
    cmpwi r30, 0x0
    beq lbl_fn_803C83E8_00000BD4
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_803C83E8_00000BAC
lbl_fn_803C83E8_00000B20:
    lwz r4, 0x4(r29)
    add r6, r31, r3
    lwzx r0, r31, r3
    addi r7, r7, 0x1
    stwx r0, r4, r3
    add r5, r4, r3
    addi r3, r3, 0x40
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r5)
    lfs f0, 0x14(r6)
    stfs f0, 0x14(r5)
    lwz r0, 0x18(r6)
    stw r0, 0x18(r5)
    lwz r0, 0x20(r6)
    lwz r4, 0x1c(r6)
    stw r4, 0x1c(r5)
    stw r0, 0x20(r5)
    lwz r0, 0x28(r6)
    lwz r4, 0x24(r6)
    stw r4, 0x24(r5)
    stw r0, 0x28(r5)
    lwz r0, 0x30(r6)
    lwz r4, 0x2c(r6)
    stw r4, 0x2c(r5)
    stw r0, 0x30(r5)
    lwz r0, 0x34(r6)
    stw r0, 0x34(r5)
    lwz r0, 0x38(r6)
    stw r0, 0x38(r5)
    lwz r0, 0x3c(r6)
    stw r0, 0x3c(r5)
lbl_fn_803C83E8_00000BAC:
    lwz r4, 0x0(r29)
    mr r0, r30
    cmplw r30, r4
    blt lbl_fn_803C83E8_00000BC0
    mr r0, r4
lbl_fn_803C83E8_00000BC0:
    cmplw r7, r0
    blt lbl_fn_803C83E8_00000B20
    b lbl_fn_803C83E8_00000BD4
lbl_fn_803C83E8_00000BCC:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C83E8_00000BD4:
    cmpwi r31, 0x0
    beq lbl_fn_803C83E8_00000BE8
    beq lbl_fn_803C83E8_00000BE8
    subi r3, r31, 0x10
    bl fn_80084C24
lbl_fn_803C83E8_00000BE8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8564(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C856C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C856C_00000C50
    lis r4, fn_803BF8EC@ha
    mr r3, r0
    addi r4, r4, fn_803BF8EC@l
    bl fn_80695A50
lbl_fn_803C856C_00000C50:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C856C_00000C9C
    mulli r3, r30, 0x48
    mr r4, r31
    la r5, lbl_8087DE44
    la r6, lbl_8087DE40
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C861C@ha
    lis r5, fn_803BF8EC@ha
    mr r7, r30
    li r6, 0x48
    addi r4, r4, fn_803C861C@l
    addi r5, r5, fn_803BF8EC@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C856C_00000CA4
lbl_fn_803C856C_00000C9C:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C856C_00000CA4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C861C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    blr
}

asm void fn_803C862C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r27, 0x0(r3)
    mr r25, r3
    cmplw r4, r27
    beq lbl_fn_803C862C_00000E9C
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r28, 0x4(r3)
    mr r23, r4
    beq lbl_fn_803C862C_00000E7C
    mulli r3, r4, 0x48
    mr r4, r5
    la r5, lbl_8087DE3C
    la r6, lbl_8087DE38
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C861C@ha
    lis r5, fn_803BF8EC@ha
    mr r7, r23
    li r6, 0x48
    addi r4, r4, fn_803C861C@l
    addi r5, r5, fn_803BF8EC@l
    bl fn_80695720
    cmpwi r28, 0x0
    stw r3, 0x4(r25)
    beq lbl_fn_803C862C_00000E84
    cmpwi r27, 0x0
    beq lbl_fn_803C862C_00000E84
    li r26, 0x0
    li r24, 0x0
    mr r31, r26
    b lbl_fn_803C862C_00000E5C
lbl_fn_803C862C_00000D64:
    lwz r3, 0x4(r25)
    add r29, r28, r24
    lwzx r0, r28, r24
    stwx r0, r3, r24
    add r30, r3, r24
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x4(r30), 0, 0
    stfs f2, 0xc(r30)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r30)
    lfs f0, 0x14(r29)
    stfs f0, 0x14(r30)
    lfs f2, 0x20(r29)
    psq_l f1, 0x18(r29), 0, 0
    psq_st f1, 0x18(r30), 0, 0
    stfs f2, 0x20(r30)
    lwz r3, 0x28(r30)
    lwz r23, 0x24(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803C862C_00000DBC
    bl fn_80084C24
lbl_fn_803C862C_00000DBC:
    cmpwi r23, 0x0
    stw r23, 0x24(r30)
    beq lbl_fn_803C862C_00000DE8
    slwi r3, r23, 2
    li r4, 0x0
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x28(r30)
    b lbl_fn_803C862C_00000DEC
lbl_fn_803C862C_00000DE8:
    stw r31, 0x28(r30)
lbl_fn_803C862C_00000DEC:
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_803C862C_00000E10
lbl_fn_803C862C_00000DF8:
    lwz r4, 0x28(r29)
    addi r5, r5, 0x1
    lwz r3, 0x28(r30)
    lwzx r0, r4, r6
    stwx r0, r3, r6
    addi r6, r6, 0x4
lbl_fn_803C862C_00000E10:
    lwz r0, 0x24(r30)
    cmplw r5, r0
    blt lbl_fn_803C862C_00000DF8
    lwz r0, 0x2c(r29)
    addi r26, r26, 0x1
    stw r0, 0x2c(r30)
    addi r24, r24, 0x48
    lwz r0, 0x30(r29)
    stw r0, 0x30(r30)
    lwz r0, 0x34(r29)
    stw r0, 0x34(r30)
    lwz r0, 0x38(r29)
    stw r0, 0x38(r30)
    lwz r0, 0x3c(r29)
    stw r0, 0x3c(r30)
    lwz r0, 0x40(r29)
    stw r0, 0x40(r30)
    lwz r0, 0x44(r29)
    stw r0, 0x44(r30)
lbl_fn_803C862C_00000E5C:
    lwz r3, 0x0(r25)
    mr r0, r27
    cmplw r27, r3
    blt lbl_fn_803C862C_00000E70
    mr r0, r3
lbl_fn_803C862C_00000E70:
    cmplw r26, r0
    blt lbl_fn_803C862C_00000D64
    b lbl_fn_803C862C_00000E84
lbl_fn_803C862C_00000E7C:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C862C_00000E84:
    cmpwi r28, 0x0
    beq lbl_fn_803C862C_00000E9C
    lis r4, fn_803BF8EC@ha
    mr r3, r28
    addi r4, r4, fn_803BF8EC@l
    bl fn_80695A50
lbl_fn_803C862C_00000E9C:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803C8810(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C8810_00000EEC
    mr r3, r0
    bl fn_80084C24
lbl_fn_803C8810_00000EEC:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C8810_00000F18
    mr r4, r31
    slwi r3, r30, 2
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r29)
    b lbl_fn_803C8810_00000F20
lbl_fn_803C8810_00000F18:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C8810_00000F20:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8898(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C88A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C88A0_00000F84
    lis r4, fn_803BF960@ha
    mr r3, r0
    addi r4, r4, fn_803BF960@l
    bl fn_80695A50
lbl_fn_803C88A0_00000F84:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C88A0_00000FD0
    mulli r3, r30, 0x28
    mr r4, r31
    la r5, lbl_8087DE34
    la r6, lbl_8087DE30
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8950@ha
    lis r5, fn_803BF960@ha
    mr r7, r30
    li r6, 0x28
    addi r4, r4, fn_803C8950@l
    addi r5, r5, fn_803BF960@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C88A0_00000FD8
lbl_fn_803C88A0_00000FD0:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C88A0_00000FD8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8950(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    blr
}

asm void fn_803C8960(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r30, 0x0(r3)
    mr r28, r3
    cmplw r4, r30
    beq lbl_fn_803C8960_00001198
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r23, r4
    beq lbl_fn_803C8960_00001178
    mulli r3, r4, 0x28
    mr r4, r5
    la r5, lbl_8087DE2C
    la r6, lbl_8087DE28
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8950@ha
    lis r5, fn_803BF960@ha
    mr r7, r23
    li r6, 0x28
    addi r4, r4, fn_803C8950@l
    addi r5, r5, fn_803BF960@l
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r28)
    beq lbl_fn_803C8960_00001180
    cmpwi r30, 0x0
    beq lbl_fn_803C8960_00001180
    li r29, 0x0
    li r27, 0x0
    mr r26, r29
    b lbl_fn_803C8960_00001158
lbl_fn_803C8960_00001098:
    lwz r3, 0x4(r28)
    add r24, r31, r27
    lwzx r0, r31, r27
    stwx r0, r3, r27
    add r25, r3, r27
    lfs f2, 0xc(r24)
    psq_l f1, 0x4(r24), 0, 0
    psq_st f1, 0x4(r25), 0, 0
    stfs f2, 0xc(r25)
    lwz r0, 0x10(r24)
    stw r0, 0x10(r25)
    lfs f0, 0x14(r24)
    stfs f0, 0x14(r25)
    lwz r3, 0x1c(r25)
    lwz r23, 0x18(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803C8960_000010E0
    bl fn_80084C24
lbl_fn_803C8960_000010E0:
    cmpwi r23, 0x0
    stw r23, 0x18(r25)
    beq lbl_fn_803C8960_0000110C
    slwi r3, r23, 2
    li r4, 0x0
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x1c(r25)
    b lbl_fn_803C8960_00001110
lbl_fn_803C8960_0000110C:
    stw r26, 0x1c(r25)
lbl_fn_803C8960_00001110:
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_803C8960_00001134
lbl_fn_803C8960_0000111C:
    lwz r4, 0x1c(r24)
    addi r5, r5, 0x1
    lwz r3, 0x1c(r25)
    lwzx r0, r4, r6
    stwx r0, r3, r6
    addi r6, r6, 0x4
lbl_fn_803C8960_00001134:
    lwz r0, 0x18(r25)
    cmplw r5, r0
    blt lbl_fn_803C8960_0000111C
    lwz r0, 0x20(r24)
    addi r29, r29, 0x1
    stw r0, 0x20(r25)
    addi r27, r27, 0x28
    lwz r0, 0x24(r24)
    stw r0, 0x24(r25)
lbl_fn_803C8960_00001158:
    lwz r3, 0x0(r28)
    mr r0, r30
    cmplw r30, r3
    blt lbl_fn_803C8960_0000116C
    mr r0, r3
lbl_fn_803C8960_0000116C:
    cmplw r29, r0
    blt lbl_fn_803C8960_00001098
    b lbl_fn_803C8960_00001180
lbl_fn_803C8960_00001178:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C8960_00001180:
    cmpwi r31, 0x0
    beq lbl_fn_803C8960_00001198
    lis r4, fn_803BF960@ha
    mr r3, r31
    addi r4, r4, fn_803BF960@l
    bl fn_80695A50
lbl_fn_803C8960_00001198:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803C8B0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C8B0C_000011EC
    beq lbl_fn_803C8B0C_000011EC
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C8B0C_000011EC:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C8B0C_00001234
    mulli r3, r30, 0x30
    mr r4, r31
    la r5, lbl_8087DE24
    la r6, lbl_8087DE20
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8BB4@ha
    mr r7, r30
    addi r4, r4, fn_803C8BB4@l
    li r5, 0x0
    li r6, 0x30
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C8B0C_0000123C
lbl_fn_803C8B0C_00001234:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C8B0C_0000123C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8BB4(void)
{
    nofralloc
    blr
}

asm void fn_803C8BB8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C8BC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C8BC0_000012A0
    beq lbl_fn_803C8BC0_000012A0
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C8BC0_000012A0:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C8BC0_000012E8
    slwi r3, r30, 7
    mr r4, r31
    addi r3, r3, 0x10
    la r5, lbl_8087DE1C
    la r6, lbl_8087DE18
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8C68@ha
    mr r7, r30
    addi r4, r4, fn_803C8C68@l
    li r5, 0x0
    li r6, 0x80
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C8BC0_000012F0
lbl_fn_803C8BC0_000012E8:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C8BC0_000012F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8C68(void)
{
    nofralloc
    blr
}

asm void fn_803C8C6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803C8C6C_000014E8
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r28, r4
    beq lbl_fn_803C8C6C_000014CC
    slwi r3, r4, 7
    mr r4, r5
    la r5, lbl_8087DE14
    la r6, lbl_8087DE10
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8C68@ha
    mr r7, r28
    addi r4, r4, fn_803C8C68@l
    li r5, 0x0
    li r6, 0x80
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803C8C6C_000014D4
    cmpwi r30, 0x0
    beq lbl_fn_803C8C6C_000014D4
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_803C8C6C_000014AC
lbl_fn_803C8C6C_000013A4:
    lwz r3, 0x4(r29)
    add r4, r31, r6
    lwzx r0, r31, r6
    addi r5, r5, 0x1
    stwux r0, r3, r6
    addi r6, r6, 0x80
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r3)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r3)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r4)
    stw r0, 0x1c(r3)
    lwz r0, 0x24(r4)
    lwz r7, 0x20(r4)
    stw r7, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, 0x2c(r4)
    lwz r7, 0x28(r4)
    stw r7, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, 0x34(r4)
    lwz r7, 0x30(r4)
    stw r7, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0x3c(r4)
    lwz r7, 0x38(r4)
    stw r7, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x44(r4)
    lwz r7, 0x40(r4)
    stw r7, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x4c(r4)
    lwz r7, 0x48(r4)
    stw r7, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x54(r4)
    lwz r7, 0x50(r4)
    stw r7, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x5c(r4)
    lwz r7, 0x58(r4)
    stw r7, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, 0x64(r4)
    lwz r7, 0x60(r4)
    stw r7, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x6c(r4)
    lwz r7, 0x68(r4)
    stw r7, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x74(r4)
    lwz r7, 0x70(r4)
    stw r7, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x78(r4)
    stw r0, 0x78(r3)
    lwz r0, 0x7c(r4)
    stw r0, 0x7c(r3)
lbl_fn_803C8C6C_000014AC:
    lwz r3, 0x0(r29)
    mr r0, r30
    cmplw r30, r3
    blt lbl_fn_803C8C6C_000014C0
    mr r0, r3
lbl_fn_803C8C6C_000014C0:
    cmplw r5, r0
    blt lbl_fn_803C8C6C_000013A4
    b lbl_fn_803C8C6C_000014D4
lbl_fn_803C8C6C_000014CC:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C8C6C_000014D4:
    cmpwi r31, 0x0
    beq lbl_fn_803C8C6C_000014E8
    beq lbl_fn_803C8C6C_000014E8
    subi r3, r31, 0x10
    bl fn_80084C24
lbl_fn_803C8C6C_000014E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8E64(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C8E6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C8E6C_0000154C
    beq lbl_fn_803C8E6C_0000154C
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C8E6C_0000154C:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C8E6C_00001594
    mulli r3, r30, 0x58
    mr r4, r31
    la r5, lbl_8087DE0C
    la r6, lbl_8087DE08
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8F14@ha
    mr r7, r30
    addi r4, r4, fn_803C8F14@l
    li r5, 0x0
    li r6, 0x58
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C8E6C_0000159C
lbl_fn_803C8E6C_00001594:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C8E6C_0000159C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C8F14(void)
{
    nofralloc
    blr
}

asm void fn_803C8F18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803C8F18_00001740
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r28, r4
    beq lbl_fn_803C8F18_00001724
    mulli r3, r4, 0x58
    mr r4, r5
    la r5, lbl_8087DE04
    la r6, lbl_8087DE00
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C8F14@ha
    mr r7, r28
    addi r4, r4, fn_803C8F14@l
    li r5, 0x0
    li r6, 0x58
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803C8F18_0000172C
    cmpwi r30, 0x0
    beq lbl_fn_803C8F18_0000172C
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_803C8F18_00001704
lbl_fn_803C8F18_00001650:
    lwz r4, 0x4(r29)
    add r6, r31, r3
    lwzx r0, r31, r3
    addi r7, r7, 0x1
    stwx r0, r4, r3
    add r5, r4, r3
    addi r3, r3, 0x58
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r5)
    lfs f0, 0x14(r6)
    stfs f0, 0x14(r5)
    lfs f2, 0x20(r6)
    psq_l f1, 0x18(r6), 0, 0
    psq_st f1, 0x18(r5), 0, 0
    stfs f2, 0x20(r5)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r5)
    lwz r0, 0x28(r6)
    stw r0, 0x28(r5)
    lwz r0, 0x2c(r6)
    stw r0, 0x2c(r5)
    lwz r0, 0x30(r6)
    stw r0, 0x30(r5)
    lwz r0, 0x34(r6)
    stw r0, 0x34(r5)
    lwz r0, 0x3c(r6)
    lwz r4, 0x38(r6)
    stw r4, 0x38(r5)
    stw r0, 0x3c(r5)
    lwz r0, 0x44(r6)
    lwz r4, 0x40(r6)
    stw r4, 0x40(r5)
    stw r0, 0x44(r5)
    lwz r0, 0x4c(r6)
    lwz r4, 0x48(r6)
    stw r4, 0x48(r5)
    stw r0, 0x4c(r5)
    lwz r0, 0x50(r6)
    stw r0, 0x50(r5)
    lwz r0, 0x54(r6)
    stw r0, 0x54(r5)
lbl_fn_803C8F18_00001704:
    lwz r4, 0x0(r29)
    mr r0, r30
    cmplw r30, r4
    blt lbl_fn_803C8F18_00001718
    mr r0, r4
lbl_fn_803C8F18_00001718:
    cmplw r7, r0
    blt lbl_fn_803C8F18_00001650
    b lbl_fn_803C8F18_0000172C
lbl_fn_803C8F18_00001724:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C8F18_0000172C:
    cmpwi r31, 0x0
    beq lbl_fn_803C8F18_00001740
    beq lbl_fn_803C8F18_00001740
    subi r3, r31, 0x10
    bl fn_80084C24
lbl_fn_803C8F18_00001740:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C90BC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803C90C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803C90C4_000017A4
    beq lbl_fn_803C90C4_000017A4
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803C90C4_000017A4:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803C90C4_000017EC
    mulli r3, r30, 0x50
    mr r4, r31
    la r5, lbl_8087DDFC
    la r6, lbl_8087DDF8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C916C@ha
    mr r7, r30
    addi r4, r4, fn_803C916C@l
    li r5, 0x0
    li r6, 0x50
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803C90C4_000017F4
lbl_fn_803C90C4_000017EC:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803C90C4_000017F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803C916C(void)
{
    nofralloc
    blr
}

asm void fn_803C9170(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r30, 0x0(r3)
    cmplw r4, r30
    beq lbl_fn_803C9170_00001988
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    lwz r31, 0x4(r3)
    mr r28, r4
    beq lbl_fn_803C9170_0000196C
    mulli r3, r4, 0x50
    mr r4, r5
    la r5, lbl_8087DDF4
    la r6, lbl_8087DDF0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803C916C@ha
    mr r7, r28
    addi r4, r4, fn_803C916C@l
    li r5, 0x0
    li r6, 0x50
    bl fn_80695720
    cmpwi r31, 0x0
    stw r3, 0x4(r29)
    beq lbl_fn_803C9170_00001974
    cmpwi r30, 0x0
    beq lbl_fn_803C9170_00001974
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_803C9170_0000194C
lbl_fn_803C9170_000018A8:
    lwz r4, 0x4(r29)
    add r6, r31, r3
    lwzx r0, r31, r3
    addi r7, r7, 0x1
    stwx r0, r4, r3
    add r5, r4, r3
    addi r3, r3, 0x50
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r5)
    lfs f0, 0x14(r6)
    stfs f0, 0x14(r5)
    lfs f2, 0x20(r6)
    psq_l f1, 0x18(r6), 0, 0
    psq_st f1, 0x18(r5), 0, 0
    stfs f2, 0x20(r5)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r5)
    lfs f0, 0x28(r6)
    stfs f0, 0x28(r5)
    lwz r0, 0x2c(r6)
    stw r0, 0x2c(r5)
    lwz r0, 0x34(r6)
    lwz r4, 0x30(r6)
    stw r4, 0x30(r5)
    stw r0, 0x34(r5)
    lwz r0, 0x3c(r6)
    lwz r4, 0x38(r6)
    stw r4, 0x38(r5)
    stw r0, 0x3c(r5)
    lwz r0, 0x44(r6)
    lwz r4, 0x40(r6)
    stw r4, 0x40(r5)
    stw r0, 0x44(r5)
    lwz r0, 0x48(r6)
    stw r0, 0x48(r5)
    lwz r0, 0x4c(r6)
    stw r0, 0x4c(r5)
lbl_fn_803C9170_0000194C:
    lwz r4, 0x0(r29)
    mr r0, r30
    cmplw r30, r4
    blt lbl_fn_803C9170_00001960
    mr r0, r4
lbl_fn_803C9170_00001960:
    cmplw r7, r0
    blt lbl_fn_803C9170_000018A8
    b lbl_fn_803C9170_00001974
lbl_fn_803C9170_0000196C:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_803C9170_00001974:
    cmpwi r31, 0x0
    beq lbl_fn_803C9170_00001988
    beq lbl_fn_803C9170_00001988
    subi r3, r31, 0x10
    bl fn_80084C24
lbl_fn_803C9170_00001988:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
