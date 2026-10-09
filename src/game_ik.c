#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80049AE4(void);
extern void fn_80049B2C(void);
extern void fn_80049B74(void);
extern void fn_80049CDC(void);
extern void fn_80049E3C(void);
extern void fn_800697D8(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800A555C(void);
extern void fn_800A5584(void);
extern void fn_800A55AC(void);
extern void fn_800DCA6C(void);
extern void fn_805F8E70(void);
extern void fn_805F9240(void);
extern void fn_805F93C0(void);
extern void fn_80686A48(void);
extern void fn_806952C4(void);
extern void fn_80695AD0(void);
extern void fn_80709AD0(void);
extern void fn_8070AD40(void);
extern void fn_8070AD50(void);
extern void fn_8070AD60(void);
extern void fn_8070AD80(void);
extern void fn_8070AD90(void);
extern void fn_80714930(void);
extern void fn_807149C0(void);
extern void fn_80715B20(void);
extern void fn_80715BA0(void);
extern void fn_80717630(void);
extern void fn_80724DF0(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807340F0[];
extern u8 lbl_8073416C[];
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_807794B4[];
extern u8 lbl_807794C0[];
extern u8 lbl_807794CC[];
extern u8 lbl_807794F8[];
extern u8 lbl_80779510[];
extern u8 lbl_80779528[];
extern u8 lbl_80779540[];
extern u8 lbl_80779564[];
extern u8 lbl_80779570[];
extern u8 lbl_807795AC[];

/* Small data declarations */
extern u32 lbl_8087D930;
extern u32 lbl_8087D934;
extern u32 lbl_8087D938;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EF70;
extern u32 lbl_80881164;
extern u32 lbl_80881168;
extern u32 lbl_8088116C;
extern u32 lbl_80881170;
extern u32 lbl_80881174;

/* Function declarations */
void fn_800C6CD4(void);
void fn_800C6E60(void);
void fn_800C6ED8(void);
void fn_800C6F28(void);
void fn_800C6FB4(void);
void fn_800C7040(void);
void fn_800C70CC(void);
void fn_800C7158(void);
void fn_800C71D0(void);
void fn_800C7248(void);
void fn_800C72C0(void);
void fn_800C7338(void);
void fn_800C73B0(void);
void fn_800C755C(void);
void fn_800C7568(void);
void fn_800C776C(void);
void fn_800C77D8(void);
void fn_800C7844(void);
void fn_800C78CC(void);
void fn_800C7954(void);
void fn_800C79DC(void);
void fn_800C7A2C(void);
void fn_800C7A30(void);
void fn_800C7B74(void);
void fn_800C7B78(void);
void fn_800C7CA4(void);
void fn_800C7CA8(void);
void fn_800C7DC4(void);
void fn_800C7E70(void);
void fn_800C7F08(void);
void fn_800C801C(void);
void fn_800C8078(void);
void fn_800C81CC(void);
void fn_800C8278(void);
void fn_800C82A0(void);
void fn_800C82FC(void);
void fn_800C8780(void);

asm void fn_800C6CD4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r17, 0x34(r1)
    mr r22, r3
    lwz r0, 0x24a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C6CD4_00000178
    lis r29, lbl_80775B60@ha
    lis r20, lbl_80775B98@ha
    lis r21, lbl_80775B30@ha
    addi r26, r3, 0x804
    addi r29, r29, lbl_80775B60@l
    addi r18, r1, 0x8
    addi r20, r20, lbl_80775B98@l
    addi r21, r21, lbl_80775B30@l
    addi r27, r1, 0x18
    li r24, 0x0
    li r30, 0x0
    lis r31, lbl_80775BC8@ha
    li r19, 0x1
lbl_fn_800C6CD4_00000054:
    mr r25, r26
    li r23, 0x0
lbl_fn_800C6CD4_0000005C:
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800C6CD4_00000158
    lhz r0, 0x4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800C6CD4_00000158
    lwz r3, 0x2424(r22)
    lwz r0, 0x24a0(r22)
    subf r3, r3, r25
    cntlzw r3, r3
    cmpwi r0, 0x0
    srwi r28, r3, 5
    bne lbl_fn_800C6CD4_00000134
    stw r29, 0x18(r1)
    addi r3, r31, lbl_80775BC8@l
    stb r30, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r17, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r18, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800C6CD4_000000E0
    stw r19, 0x4(r3)
    stw r19, 0x8(r3)
    stw r20, 0x0(r3)
    stw r17, 0xc(r3)
lbl_fn_800C6CD4_000000E0:
    cmpwi r30, 0x0
    stw r3, 0x20(r1)
    stw r30, 0x10(r1)
    beq lbl_fn_800C6CD4_000000F8
    li r3, 0x0
    bl fn_80084C24
lbl_fn_800C6CD4_000000F8:
    lwz r3, 0x1c(r1)
    addi r4, r31, lbl_80775BC8@l
    bl strcpy
    stw r21, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r27, 0x0
    beq lbl_fn_800C6CD4_00000134
    addic. r3, r27, 0x4
    beq lbl_fn_800C6CD4_00000134
    beq lbl_fn_800C6CD4_00000134
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C6CD4_00000134
    bl fn_806952C4
lbl_fn_800C6CD4_00000134:
    lwz r3, 0x24a0(r22)
    mr r4, r24
    mr r5, r23
    mr r6, r25
    lwz r12, 0x4(r3)
    mr r7, r28
    addi r3, r22, 0x24a4
    mtctr r12
    bctrl
lbl_fn_800C6CD4_00000158:
    addi r23, r23, 0x1
    addi r25, r25, 0x1c
    cmpwi r23, 0x20
    blt lbl_fn_800C6CD4_0000005C
    addi r24, r24, 0x1
    addi r26, r26, 0x380
    cmpwi r24, 0x8
    blt lbl_fn_800C6CD4_00000054
lbl_fn_800C6CD4_00000178:
    lmw r17, 0x34(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800C6E60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x4
    bl fn_80686A48
    lwz r4, 0x2420(r30)
    subi r0, r4, 0x1
    cmplw r3, r0
    bge lbl_fn_800C6E60_000001EC
    addi r3, r30, 0x4
    bl fn_80686A48
    cmplwi r3, 0x3fe
    bge lbl_fn_800C6E60_000001EC
    addi r3, r30, 0x4
    bl fn_80686A48
    slwi r3, r3, 1
    li r0, 0x0
    add r3, r30, r3
    sth r31, 0x4(r3)
    sth r0, 0x6(r3)
lbl_fn_800C6E60_000001EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C6ED8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4
    bl fn_80686A48
    cmpwi r3, 0x0
    beq lbl_fn_800C6ED8_00000240
    addi r3, r31, 0x4
    bl fn_80686A48
    slwi r0, r3, 1
    li r4, 0x0
    add r3, r31, r0
    sth r4, 0x2(r3)
lbl_fn_800C6ED8_00000240:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C6F28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x2404(r3)
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800C6F28_000002D0
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C6F28_00000290
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    b lbl_fn_800C6F28_00000294
lbl_fn_800C6F28_00000290:
    li r3, 0x0
lbl_fn_800C6F28_00000294:
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    bne lbl_fn_800C6F28_000002D0
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C6F28_000002C0
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    b lbl_fn_800C6F28_000002C4
lbl_fn_800C6F28_000002C0:
    li r3, 0x0
lbl_fn_800C6F28_000002C4:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800C6F28_000002D0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C6FB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x2404(r3)
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800C6FB4_0000035C
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C6FB4_0000031C
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    b lbl_fn_800C6FB4_00000320
lbl_fn_800C6FB4_0000031C:
    li r3, 0x0
lbl_fn_800C6FB4_00000320:
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    bne lbl_fn_800C6FB4_0000035C
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C6FB4_0000034C
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    b lbl_fn_800C6FB4_00000350
lbl_fn_800C6FB4_0000034C:
    li r3, 0x0
lbl_fn_800C6FB4_00000350:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800C6FB4_0000035C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C7040(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x2404(r3)
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800C7040_000003E8
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C7040_000003A8
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    b lbl_fn_800C7040_000003AC
lbl_fn_800C7040_000003A8:
    li r3, 0x0
lbl_fn_800C7040_000003AC:
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    bne lbl_fn_800C7040_000003E8
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C7040_000003D8
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    b lbl_fn_800C7040_000003DC
lbl_fn_800C7040_000003D8:
    li r3, 0x0
lbl_fn_800C7040_000003DC:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800C7040_000003E8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C70CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x2404(r3)
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    beq lbl_fn_800C70CC_00000474
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C70CC_00000434
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    b lbl_fn_800C70CC_00000438
lbl_fn_800C70CC_00000434:
    li r3, 0x0
lbl_fn_800C70CC_00000438:
    neg r0, r3
    or r0, r0, r3
    srwi. r3, r0, 31
    bne lbl_fn_800C70CC_00000474
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C70CC_00000464
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    b lbl_fn_800C70CC_00000468
lbl_fn_800C70CC_00000464:
    li r3, 0x0
lbl_fn_800C70CC_00000468:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800C70CC_00000474:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C7158(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x2404(r3)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_800C7158_000004B4
    lwz r3, 0x2408(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C7158_000004B4:
    cmpwi r0, 0x0
    beq lbl_fn_800C7158_000004E8
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C7158_000004D8
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    b lbl_fn_800C7158_000004DC
lbl_fn_800C7158_000004D8:
    li r3, 0x0
lbl_fn_800C7158_000004DC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C7158_000004E8:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C71D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x2404(r3)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_800C71D0_0000052C
    lwz r3, 0x2408(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C71D0_0000052C:
    cmpwi r0, 0x0
    beq lbl_fn_800C71D0_00000560
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C71D0_00000550
    li r4, 0x0
    li r5, 0x4
    bl fn_800A5584
    b lbl_fn_800C71D0_00000554
lbl_fn_800C71D0_00000550:
    li r3, 0x0
lbl_fn_800C71D0_00000554:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C71D0_00000560:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C7248(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x2404(r3)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_800C7248_000005A4
    lwz r3, 0x2408(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C7248_000005A4:
    cmpwi r0, 0x0
    beq lbl_fn_800C7248_000005D8
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C7248_000005C8
    li r4, 0x0
    li r5, 0xe
    bl fn_800A5584
    b lbl_fn_800C7248_000005CC
lbl_fn_800C7248_000005C8:
    li r3, 0x0
lbl_fn_800C7248_000005CC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C7248_000005D8:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C72C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x2404(r3)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_800C72C0_0000061C
    lwz r3, 0x2408(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C72C0_0000061C:
    cmpwi r0, 0x0
    beq lbl_fn_800C72C0_00000650
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C72C0_00000640
    li r4, 0x0
    li r5, 0xf
    bl fn_800A555C
    b lbl_fn_800C72C0_00000644
lbl_fn_800C72C0_00000640:
    li r3, 0x0
lbl_fn_800C72C0_00000644:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C72C0_00000650:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C7338(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x2404(r3)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_800C7338_00000694
    lwz r3, 0x2408(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C7338_00000694:
    cmpwi r0, 0x0
    beq lbl_fn_800C7338_000006C8
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_800C7338_000006B8
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    b lbl_fn_800C7338_000006BC
lbl_fn_800C7338_000006B8:
    li r3, 0x0
lbl_fn_800C7338_000006BC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_800C7338_000006C8:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C73B0(void)
{
    nofralloc
    lwz r0, 0x2418(r3)
    li r4, 0x1
    stw r4, 0x2414(r3)
    cmpwi r0, 0x0
    blt lbl_fn_800C73B0_000006FC
    lwz r0, 0x241c(r3)
    cmpwi r0, 0x0
    bgelr
lbl_fn_800C73B0_000006FC:
    addi r5, r3, 0x804
    li r7, 0x0
    li r0, 0x4
lbl_fn_800C73B0_00000708:
    mr r6, r5
    li r8, 0x0
    mtctr r0
lbl_fn_800C73B0_00000714:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000738
    lhz r4, 0x4(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000738
    stw r7, 0x2418(r3)
    stw r8, 0x241c(r3)
    b lbl_fn_800C73B0_0000085C
lbl_fn_800C73B0_00000738:
    lwz r4, 0x1c(r6)
    addi r8, r8, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000760
    lhz r4, 0x20(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000760
    stw r7, 0x2418(r3)
    stw r8, 0x241c(r3)
    b lbl_fn_800C73B0_0000085C
lbl_fn_800C73B0_00000760:
    lwz r4, 0x38(r6)
    addi r8, r8, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000788
    lhz r4, 0x3c(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000788
    stw r7, 0x2418(r3)
    stw r8, 0x241c(r3)
    b lbl_fn_800C73B0_0000085C
lbl_fn_800C73B0_00000788:
    lwz r4, 0x54(r6)
    addi r8, r8, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_000007B0
    lhz r4, 0x58(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_000007B0
    stw r7, 0x2418(r3)
    stw r8, 0x241c(r3)
    b lbl_fn_800C73B0_0000085C
lbl_fn_800C73B0_000007B0:
    lwz r4, 0x70(r6)
    addi r8, r8, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_000007D8
    lhz r4, 0x74(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_000007D8
    stw r7, 0x2418(r3)
    stw r8, 0x241c(r3)
    b lbl_fn_800C73B0_0000085C
lbl_fn_800C73B0_000007D8:
    lwz r4, 0x8c(r6)
    addi r8, r8, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000800
    lhz r4, 0x90(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000800
    stw r7, 0x2418(r3)
    stw r8, 0x241c(r3)
    b lbl_fn_800C73B0_0000085C
lbl_fn_800C73B0_00000800:
    lwz r4, 0xa8(r6)
    addi r8, r8, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000828
    lhz r4, 0xac(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000828
    stw r7, 0x2418(r3)
    stw r8, 0x241c(r3)
    b lbl_fn_800C73B0_0000085C
lbl_fn_800C73B0_00000828:
    lwz r4, 0xc4(r6)
    addi r8, r8, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000850
    lhz r4, 0xc8(r6)
    cmpwi r4, 0x0
    beq lbl_fn_800C73B0_00000850
    stw r7, 0x2418(r3)
    stw r8, 0x241c(r3)
    b lbl_fn_800C73B0_0000085C
lbl_fn_800C73B0_00000850:
    addi r6, r6, 0xe0
    addi r8, r8, 0x1
    bdnz lbl_fn_800C73B0_00000714
lbl_fn_800C73B0_0000085C:
    lwz r4, 0x2418(r3)
    cmpwi r4, 0x0
    blt lbl_fn_800C73B0_00000874
    lwz r4, 0x241c(r3)
    cmpwi r4, 0x0
    bgelr
lbl_fn_800C73B0_00000874:
    addi r7, r7, 0x1
    addi r5, r5, 0x380
    cmpwi r7, 0x8
    blt lbl_fn_800C73B0_00000708
    blr
}

asm void fn_800C755C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x2414(r3)
    blr
}

asm void fn_800C7568(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmplwi r4, 0x7
    stw r0, 0x64(r1)
    stmw r25, 0x44(r1)
    mr r26, r3
    bgt lbl_fn_800C7568_00000A84
    cmplwi r5, 0x1f
    bgt lbl_fn_800C7568_00000A84
    mulli r6, r4, 0x380
    mulli r0, r5, 0x1c
    add r6, r3, r6
    add r6, r6, r0
    lwz r0, 0x804(r6)
    cmpwi r0, 0x0
    beq lbl_fn_800C7568_00000A84
    lwz r0, 0x2428(r3)
    lwz r28, 0x2418(r3)
    lwz r27, 0x241c(r3)
    cmpwi r0, 0x0
    stw r4, 0x2418(r3)
    stw r5, 0x241c(r3)
    bne lbl_fn_800C7568_00000910
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
    b lbl_fn_800C7568_0000092C
lbl_fn_800C7568_00000910:
    lis r5, lbl_807794B4@ha
    lwzu r4, lbl_807794B4@l(r5)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
lbl_fn_800C7568_0000092C:
    lwz r5, 0x30(r1)
    addi r3, r1, 0x24
    lwz r4, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C7568_00000A84
    lwz r29, 0x2418(r26)
    lwz r0, 0x2428(r26)
    mulli r3, r29, 0x380
    lwz r30, 0x241c(r26)
    cmpwi r0, 0x0
    mulli r0, r30, 0x1c
    add r3, r26, r3
    add r3, r3, r0
    addi r31, r3, 0x804
    bne lbl_fn_800C7568_00000A48
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r25, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800C7568_000009EC
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r25, 0xc(r3)
lbl_fn_800C7568_000009EC:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C7568_00000A00
    bl fn_80084C24
lbl_fn_800C7568_00000A00:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_800C7568_00000A48
    addic. r3, r3, 0x4
    beq lbl_fn_800C7568_00000A48
    beq lbl_fn_800C7568_00000A48
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C7568_00000A48
    bl fn_806952C4
lbl_fn_800C7568_00000A48:
    mulli r6, r28, 0x380
    lwz r3, 0x2428(r26)
    mr r4, r28
    lwz r12, 0x4(r3)
    mr r5, r27
    mulli r0, r27, 0x1c
    add r3, r26, r6
    mr r7, r29
    add r6, r3, r0
    mr r8, r30
    mr r9, r31
    addi r3, r26, 0x242c
    addi r6, r6, 0x804
    mtctr r12
    bctrl
lbl_fn_800C7568_00000A84:
    lmw r25, 0x44(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800C776C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800C776C_00000AC8
    lis r6, lbl_80766768@ha
    lwzu r5, lbl_80766768@l(r6)
    stw r5, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C776C_00000AE4
lbl_fn_800C776C_00000AC8:
    lis r6, lbl_807794C0@ha
    lwzu r5, lbl_807794C0@l(r6)
    stw r5, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
lbl_fn_800C776C_00000AE4:
    lwz r5, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r0, 0x10(r1)
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_800C77D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800C77D8_00000B34
    lis r6, lbl_80766768@ha
    lwzu r5, lbl_80766768@l(r6)
    stw r5, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C77D8_00000B50
lbl_fn_800C77D8_00000B34:
    lis r6, lbl_807794CC@ha
    lwzu r5, lbl_807794CC@l(r6)
    stw r5, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
lbl_fn_800C77D8_00000B50:
    lwz r5, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r0, 0x10(r1)
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_800C7844(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_800C7844_00000BDC
    beq lbl_fn_800C7844_00000BCC
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800C7844_00000BCC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800C7844_00000BC4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C7844_00000BC4:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_800C7844_00000BCC:
    cmpwi r31, 0x0
    ble lbl_fn_800C7844_00000BDC
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C7844_00000BDC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C78CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_800C78CC_00000C64
    beq lbl_fn_800C78CC_00000C54
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800C78CC_00000C54
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800C78CC_00000C4C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C78CC_00000C4C:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_800C78CC_00000C54:
    cmpwi r31, 0x0
    ble lbl_fn_800C78CC_00000C64
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C78CC_00000C64:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C7954(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_800C7954_00000CEC
    beq lbl_fn_800C7954_00000CDC
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800C7954_00000CDC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800C7954_00000CD4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C7954_00000CD4:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_800C7954_00000CDC:
    cmpwi r31, 0x0
    ble lbl_fn_800C7954_00000CEC
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C7954_00000CEC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C79DC(void)
{
    nofralloc
    lfs f0, 0x8(r3)
    li r0, 0x0
    lfs f1, 0x0(r4)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_800C79DC_00000D50
    lfs f0, 0x10(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_800C79DC_00000D50
    lfs f0, 0xc(r3)
    lfs f1, 0x4(r4)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_800C79DC_00000D50
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_800C79DC_00000D50
    li r0, 0x1
lbl_fn_800C79DC_00000D50:
    mr r3, r0
    blr
}

asm void fn_800C7A2C(void)
{
    nofralloc
    blr
}

asm void fn_800C7A30(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r24, 0x30(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800C7A30_00000E60
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r24, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800C7A30_00000E04
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_800C7A30_00000E04:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C7A30_00000E18
    bl fn_80084C24
lbl_fn_800C7A30_00000E18:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_800C7A30_00000E60
    addic. r3, r3, 0x4
    beq lbl_fn_800C7A30_00000E60
    beq lbl_fn_800C7A30_00000E60
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C7A30_00000E60
    bl fn_806952C4
lbl_fn_800C7A30_00000E60:
    lwz r3, 0x0(r25)
    mr r4, r26
    mr r5, r27
    mr r6, r28
    lwz r12, 0x4(r3)
    mr r7, r29
    mr r8, r30
    mr r9, r31
    addi r3, r25, 0x4
    mtctr r12
    bctrl
    lmw r24, 0x30(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800C7B74(void)
{
    nofralloc
    blr
}

asm void fn_800C7B78(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    mr r27, r6
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800C7B78_00000F9C
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r28, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800C7B78_00000F40
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r28, 0xc(r3)
lbl_fn_800C7B78_00000F40:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C7B78_00000F54
    bl fn_80084C24
lbl_fn_800C7B78_00000F54:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_800C7B78_00000F9C
    addic. r3, r3, 0x4
    beq lbl_fn_800C7B78_00000F9C
    beq lbl_fn_800C7B78_00000F9C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C7B78_00000F9C
    bl fn_806952C4
lbl_fn_800C7B78_00000F9C:
    lwz r3, 0x0(r29)
    mr r4, r30
    mr r5, r31
    mr r6, r27
    lwz r12, 0x4(r3)
    addi r3, r29, 0x4
    mtctr r12
    bctrl
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800C7CA4(void)
{
    nofralloc
    blr
}

asm void fn_800C7CA8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800C7CA8_000010C4
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r31, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800C7CA8_00001068
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r31, 0xc(r3)
lbl_fn_800C7CA8_00001068:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C7CA8_0000107C
    bl fn_80084C24
lbl_fn_800C7CA8_0000107C:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_800C7CA8_000010C4
    addic. r3, r3, 0x4
    beq lbl_fn_800C7CA8_000010C4
    beq lbl_fn_800C7CA8_000010C4
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C7CA8_000010C4
    bl fn_806952C4
lbl_fn_800C7CA8_000010C4:
    lwz r4, 0x0(r30)
    addi r3, r30, 0x4
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C7DC4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80779528@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80779528@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x0(r3)
    addi r3, r3, 0x4
    bl fn_80715B20
    lfs f0, lbl_80881168
    addic. r0, r29, 0x4
    stfs f0, 0x70(r29)
    stfs f0, 0x74(r29)
    stfs f0, 0x78(r29)
    stfs f0, 0x7c(r29)
    stfs f0, 0x80(r29)
    stfs f0, 0x84(r29)
    lwz r30, lbl_8087EE90
    addi r31, r30, 0x374
    bne lbl_fn_800C7DC4_00001168
    lis r3, lbl_80779564@ha
    lis r5, lbl_80779540@ha
    addi r3, r3, lbl_80779564@l
    li r4, 0x233
    addi r5, r5, lbl_80779540@l
    crclr 6
    bl fn_80724DF0
lbl_fn_800C7DC4_00001168:
    stw r31, 0x8(r1)
    addi r3, r30, 0x370
    addi r4, r1, 0x8
    addi r5, r29, 0x68
    bl fn_807252A0
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C7E70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_800C7E70_00001214
    lis r4, lbl_80779528@ha
    addic. r0, r3, 0x4
    addi r4, r4, lbl_80779528@l
    stw r4, 0x0(r3)
    lwz r31, lbl_8087EE90
    bne lbl_fn_800C7E70_000011F8
    lis r3, lbl_80779564@ha
    lis r5, lbl_80779540@ha
    addi r3, r3, lbl_80779564@l
    li r4, 0x233
    addi r5, r5, lbl_80779540@l
    crclr 6
    bl fn_80724DF0
lbl_fn_800C7E70_000011F8:
    addi r3, r31, 0x370
    addi r4, r29, 0x68
    bl fn_807252D0
    cmpwi r30, 0x0
    ble lbl_fn_800C7E70_00001214
    mr r3, r29
    bl dtor_80084684
lbl_fn_800C7E70_00001214:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C7F08(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0xd4(r1)
    lfs f2, 0x8(r4)
    li r4, 0x79
    stw r31, 0xcc(r1)
    mr r31, r3
    lfs f7, lbl_80881168
    psq_st f1, 0x70(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x78(r3)
    lfs f2, 0x8(r5)
    psq_st f1, 0x7c(r3), 0, 0
    lfs f0, lbl_8088116C
    stfs f2, 0x84(r3)
    stfs f7, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x80(r3)
    addi r3, r1, 0x60
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    lfs f7, lbl_80881168
    addi r3, r1, 0x30
    lfs f0, lbl_8088116C
    addi r4, r31, 0x70
    stfs f0, 0xc(r1)
    addi r5, r1, 0x8
    lfs f10, 0x28(r1)
    addi r6, r1, 0x14
    stfs f7, 0x8(r1)
    lfs f8, 0x24(r1)
    stfs f7, 0x10(r1)
    lfs f0, 0x20(r1)
    lfs f11, 0x78(r31)
    lfs f9, 0x74(r31)
    lfs f7, 0x70(r31)
    fadds f10, f11, f10
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f10, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f8, 0x18(r1)
    bl fn_805F9240
    addi r5, r1, 0x30
    addi r4, r1, 0x90
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r31, 0x4
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    bl fn_80715BA0
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_800C801C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_800C801C_00001388
    li r4, -0x1
    addi r3, r3, 0x4
    bl fn_807149C0
    cmpwi r31, 0x0
    ble lbl_fn_800C801C_00001388
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C801C_00001388:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C8078(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807794F8@ha
    lis r4, lbl_80779510@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807794F8@l
    addi r4, r4, lbl_80779510@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r5, 0x0(r3)
    stw r31, 0x4(r3)
    stw r4, 0x8(r3)
    addi r3, r3, 0xc
    lwz r5, lbl_8087EE90
    addi r4, r5, 0x1d8
    addi r5, r5, 0x364
    bl fn_80714930
    lfs f2, lbl_80881168
    li r0, -0x1
    lfs f3, lbl_8088116C
    mr r3, r30
    stw r0, 0x90(r30)
    stw r31, 0x98(r30)
    stw r31, 0x9c(r30)
    stw r31, 0xa0(r30)
    stw r31, 0xa4(r30)
    stw r31, 0xa8(r30)
    stw r31, 0xac(r30)
    stw r31, 0xb0(r30)
    stw r31, 0xb4(r30)
    stfs f3, 0xb8(r30)
    stfs f3, 0xbc(r30)
    stfs f2, 0xc0(r30)
    stw r31, 0xc8(r30)
    stfs f2, 0xcc(r30)
    stw r31, 0xd4(r30)
    stfs f2, 0xd8(r30)
    stfs f2, 0xdc(r30)
    stfs f2, 0xe0(r30)
    stfs f2, 0xe4(r30)
    stw r31, 0xe8(r30)
    stfs f2, 0xec(r30)
    stfs f2, 0xf0(r30)
    stfs f3, 0xf4(r30)
    stb r31, 0xf8(r30)
    lfs f1, lbl_8087D930
    stfs f1, 0xfc(r30)
    lfs f0, lbl_8087D930
    stfs f0, 0x100(r30)
    fsubs f0, f0, f1
    lfs f1, lbl_8087D930
    stfs f1, 0x104(r30)
    stfs f0, 0x108(r30)
    stfs f2, 0x10c(r30)
    stfs f2, 0x110(r30)
    stfs f3, 0x114(r30)
    stb r31, 0x118(r30)
    lfs f1, lbl_8087D934
    stfs f1, 0x11c(r30)
    lfs f0, lbl_8087D934
    stfs f0, 0x120(r30)
    fsubs f0, f0, f1
    lfs f1, lbl_8087D934
    stfs f1, 0x124(r30)
    stfs f0, 0x128(r30)
    stfs f2, 0x12c(r30)
    stfs f2, 0x130(r30)
    stfs f3, 0x134(r30)
    stb r31, 0x138(r30)
    lfs f1, lbl_8087D938
    stfs f1, 0x13c(r30)
    lfs f0, lbl_8087D938
    stfs f0, 0x140(r30)
    fsubs f0, f0, f1
    lfs f1, lbl_8087D938
    stfs f1, 0x144(r30)
    stfs f0, 0x148(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C81CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_800C81CC_00001588
    lwz r0, 0x4(r3)
    lis r4, lbl_807794F8@ha
    addi r4, r4, lbl_807794F8@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C81CC_00001540
    mr r3, r0
    li r4, 0x0
    bl fn_80709AD0
lbl_fn_800C81CC_00001540:
    addi r3, r30, 0x4
    bl fn_80717630
    addic. r3, r30, 0x8
    li r0, 0x0
    stw r0, 0x9c(r30)
    stw r0, 0xa0(r30)
    stw r0, 0xa4(r30)
    beq lbl_fn_800C81CC_0000156C
    addi r3, r3, 0x4
    li r4, -0x1
    bl fn_807149C0
lbl_fn_800C81CC_0000156C:
    addic. r3, r30, 0x4
    beq lbl_fn_800C81CC_00001578
    bl fn_80717630
lbl_fn_800C81CC_00001578:
    cmpwi r31, 0x0
    ble lbl_fn_800C81CC_00001588
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C81CC_00001588:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C8278(void)
{
    nofralloc
    lwz r0, 0xa4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    bgt lbl_fn_800C8278_000015C4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800C8278_000015C4
    li r4, 0x1
lbl_fn_800C8278_000015C4:
    mr r3, r4
    blr
}

asm void fn_800C82A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800C82A0_000015FC
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C82A0_000015FC
    li r4, 0x0
    bl fn_80709AD0
lbl_fn_800C82A0_000015FC:
    addi r3, r31, 0x4
    bl fn_80717630
    li r0, 0x0
    stw r0, 0x9c(r31)
    stw r0, 0xa0(r31)
    stw r0, 0xa4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C82FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0xf8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C82FC_0000177C
    lfs f0, 0xec(r3)
    lfs f5, 0xf4(r3)
    lfs f4, lbl_80881168
    fadds f0, f0, f5
    fcmpo cr0, f5, f4
    stfs f0, 0xec(r3)
    cror eq, gt, eq
    bne lbl_fn_800C82FC_000016F8
    fcmpo cr0, f0, f4
    bge lbl_fn_800C82FC_0000168C
    lfs f0, 0xfc(r3)
    stfs f0, 0x104(r3)
    stfs f4, 0xec(r3)
    b lbl_fn_800C82FC_0000177C
lbl_fn_800C82FC_0000168C:
    lfs f3, 0xf0(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_800C82FC_000016C4
    fdivs f5, f0, f3
    lfs f3, 0x100(r3)
    lfs f4, 0xfc(r3)
    lfs f0, 0x104(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0x104(r3)
    fsubs f0, f3, f0
    stfs f0, 0x108(r3)
    b lbl_fn_800C82FC_0000177C
lbl_fn_800C82FC_000016C4:
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_800C82FC_000016E0
    lfs f0, 0x100(r3)
    stfs f0, 0x104(r3)
    stfs f3, 0xec(r3)
    b lbl_fn_800C82FC_000016EC
lbl_fn_800C82FC_000016E0:
    lfs f0, 0xfc(r3)
    stfs f0, 0x104(r3)
    stfs f4, 0xec(r3)
lbl_fn_800C82FC_000016EC:
    li r0, 0x0
    stb r0, 0xf8(r3)
    b lbl_fn_800C82FC_0000177C
lbl_fn_800C82FC_000016F8:
    fcmpo cr0, f0, f4
    bge lbl_fn_800C82FC_00001738
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_800C82FC_00001720
    lfs f3, 0x100(r3)
    lfs f0, 0xf0(r3)
    stfs f3, 0x104(r3)
    stfs f0, 0xec(r3)
    b lbl_fn_800C82FC_0000172C
lbl_fn_800C82FC_00001720:
    lfs f0, 0xfc(r3)
    stfs f0, 0x104(r3)
    stfs f4, 0xec(r3)
lbl_fn_800C82FC_0000172C:
    li r0, 0x0
    stb r0, 0xf8(r3)
    b lbl_fn_800C82FC_0000177C
lbl_fn_800C82FC_00001738:
    lfs f3, 0xf0(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_800C82FC_00001770
    fdivs f5, f0, f3
    lfs f3, 0x100(r3)
    lfs f4, 0xfc(r3)
    lfs f0, 0x104(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0x104(r3)
    fsubs f0, f3, f0
    stfs f0, 0x108(r3)
    b lbl_fn_800C82FC_0000177C
lbl_fn_800C82FC_00001770:
    lfs f0, 0x100(r3)
    stfs f0, 0x104(r3)
    stfs f3, 0xec(r3)
lbl_fn_800C82FC_0000177C:
    lbz r0, 0x118(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C82FC_000018B0
    lfs f0, 0x10c(r3)
    lfs f5, 0x114(r3)
    lfs f4, lbl_80881168
    fadds f0, f0, f5
    fcmpo cr0, f5, f4
    stfs f0, 0x10c(r3)
    cror eq, gt, eq
    bne lbl_fn_800C82FC_0000182C
    fcmpo cr0, f0, f4
    bge lbl_fn_800C82FC_000017C0
    lfs f0, 0x11c(r3)
    stfs f0, 0x124(r3)
    stfs f4, 0x10c(r3)
    b lbl_fn_800C82FC_000018B0
lbl_fn_800C82FC_000017C0:
    lfs f3, 0x110(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_800C82FC_000017F8
    fdivs f5, f0, f3
    lfs f3, 0x120(r3)
    lfs f4, 0x11c(r3)
    lfs f0, 0x124(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0x124(r3)
    fsubs f0, f3, f0
    stfs f0, 0x128(r3)
    b lbl_fn_800C82FC_000018B0
lbl_fn_800C82FC_000017F8:
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_800C82FC_00001814
    lfs f0, 0x120(r3)
    stfs f0, 0x124(r3)
    stfs f3, 0x10c(r3)
    b lbl_fn_800C82FC_00001820
lbl_fn_800C82FC_00001814:
    lfs f0, 0x11c(r3)
    stfs f0, 0x124(r3)
    stfs f4, 0x10c(r3)
lbl_fn_800C82FC_00001820:
    li r0, 0x0
    stb r0, 0x118(r3)
    b lbl_fn_800C82FC_000018B0
lbl_fn_800C82FC_0000182C:
    fcmpo cr0, f0, f4
    bge lbl_fn_800C82FC_0000186C
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_800C82FC_00001854
    lfs f3, 0x120(r3)
    lfs f0, 0x110(r3)
    stfs f3, 0x124(r3)
    stfs f0, 0x10c(r3)
    b lbl_fn_800C82FC_00001860
lbl_fn_800C82FC_00001854:
    lfs f0, 0x11c(r3)
    stfs f0, 0x124(r3)
    stfs f4, 0x10c(r3)
lbl_fn_800C82FC_00001860:
    li r0, 0x0
    stb r0, 0x118(r3)
    b lbl_fn_800C82FC_000018B0
lbl_fn_800C82FC_0000186C:
    lfs f3, 0x110(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_800C82FC_000018A4
    fdivs f5, f0, f3
    lfs f3, 0x120(r3)
    lfs f4, 0x11c(r3)
    lfs f0, 0x124(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0x124(r3)
    fsubs f0, f3, f0
    stfs f0, 0x128(r3)
    b lbl_fn_800C82FC_000018B0
lbl_fn_800C82FC_000018A4:
    lfs f0, 0x120(r3)
    stfs f0, 0x124(r3)
    stfs f3, 0x10c(r3)
lbl_fn_800C82FC_000018B0:
    lbz r0, 0x138(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C82FC_000019E4
    lfs f0, 0x12c(r3)
    lfs f5, 0x134(r3)
    lfs f4, lbl_80881168
    fadds f0, f0, f5
    fcmpo cr0, f5, f4
    stfs f0, 0x12c(r3)
    cror eq, gt, eq
    bne lbl_fn_800C82FC_00001960
    fcmpo cr0, f0, f4
    bge lbl_fn_800C82FC_000018F4
    lfs f0, 0x13c(r3)
    stfs f0, 0x144(r3)
    stfs f4, 0x12c(r3)
    b lbl_fn_800C82FC_000019E4
lbl_fn_800C82FC_000018F4:
    lfs f3, 0x130(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_800C82FC_0000192C
    fdivs f5, f0, f3
    lfs f3, 0x140(r3)
    lfs f4, 0x13c(r3)
    lfs f0, 0x144(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0x144(r3)
    fsubs f0, f3, f0
    stfs f0, 0x148(r3)
    b lbl_fn_800C82FC_000019E4
lbl_fn_800C82FC_0000192C:
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_800C82FC_00001948
    lfs f0, 0x140(r3)
    stfs f0, 0x144(r3)
    stfs f3, 0x12c(r3)
    b lbl_fn_800C82FC_00001954
lbl_fn_800C82FC_00001948:
    lfs f0, 0x13c(r3)
    stfs f0, 0x144(r3)
    stfs f4, 0x12c(r3)
lbl_fn_800C82FC_00001954:
    li r0, 0x0
    stb r0, 0x138(r3)
    b lbl_fn_800C82FC_000019E4
lbl_fn_800C82FC_00001960:
    fcmpo cr0, f0, f4
    bge lbl_fn_800C82FC_000019A0
    fcmpo cr0, f5, f4
    cror eq, gt, eq
    bne lbl_fn_800C82FC_00001988
    lfs f3, 0x140(r3)
    lfs f0, 0x130(r3)
    stfs f3, 0x144(r3)
    stfs f0, 0x12c(r3)
    b lbl_fn_800C82FC_00001994
lbl_fn_800C82FC_00001988:
    lfs f0, 0x13c(r3)
    stfs f0, 0x144(r3)
    stfs f4, 0x12c(r3)
lbl_fn_800C82FC_00001994:
    li r0, 0x0
    stb r0, 0x138(r3)
    b lbl_fn_800C82FC_000019E4
lbl_fn_800C82FC_000019A0:
    lfs f3, 0x130(r3)
    fcmpo cr0, f0, f3
    bge lbl_fn_800C82FC_000019D8
    fdivs f5, f0, f3
    lfs f3, 0x140(r3)
    lfs f4, 0x13c(r3)
    lfs f0, 0x144(r3)
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fadds f3, f4, f3
    stfs f3, 0x144(r3)
    fsubs f0, f3, f0
    stfs f0, 0x148(r3)
    b lbl_fn_800C82FC_000019E4
lbl_fn_800C82FC_000019D8:
    lfs f0, 0x140(r3)
    stfs f0, 0x144(r3)
    stfs f3, 0x12c(r3)
lbl_fn_800C82FC_000019E4:
    lwz r0, 0x4(r3)
    lfs f1, 0x104(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C82FC_000019FC
    mr r3, r0
    bl fn_8070AD40
lbl_fn_800C82FC_000019FC:
    lwz r3, 0x4(r30)
    lfs f1, 0x124(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C82FC_00001A10
    bl fn_8070AD50
lbl_fn_800C82FC_00001A10:
    lwz r31, 0xc8(r30)
    li r0, 0x0
    lfs f31, 0x144(r30)
    cmplwi r31, 0x7f
    bgt lbl_fn_800C82FC_00001A28
    li r0, 0x1
lbl_fn_800C82FC_00001A28:
    cmpwi r0, 0x0
    bne lbl_fn_800C82FC_00001A58
    lis r3, lbl_807795AC@ha
    lis r5, lbl_80779570@ha
    mr r6, r31
    li r4, 0x80
    addi r3, r3, lbl_807795AC@l
    addi r5, r5, lbl_80779570@l
    li r7, 0x0
    li r8, 0x7f
    crclr 6
    bl fn_80724DF0
lbl_fn_800C82FC_00001A58:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C82FC_00001A70
    fmr f1, f31
    mr r4, r31
    bl fn_8070AD60
lbl_fn_800C82FC_00001A70:
    lwz r0, 0xd4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800C82FC_00001A8C
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
lbl_fn_800C82FC_00001A8C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C8780(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stw r31, 0x23c(r1)
    stw r30, 0x238(r1)
    mr r30, r3
    stw r29, 0x234(r1)
    mr r29, r4
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800C8780_00001E78
    li r5, 0x0
    stw r5, 0x8(r1)
    ori r0, r5, 0x1
    lwz r3, lbl_8087EE90
    stw r5, 0x20(r1)
    mr r4, r31
    stw r5, 0x24(r1)
    lwz r6, 0xd0(r30)
    stw r6, 0x10(r1)
    stw r0, 0x8(r1)
    stw r5, 0xc(r1)
    bl fn_80049E3C
    lwz r3, lbl_8087EE90
    mr r5, r31
    addi r4, r30, 0x4
    addi r6, r1, 0x8
    bl fn_80049AE4
    cmpwi r3, 0x0
    stw r3, 0x90(r30)
    beq lbl_fn_800C8780_00001B98
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_80049CDC
    lwz r4, lbl_8087EEB8
    lwz r0, 0x90(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800C8780_00001B98
    cmpwi r0, 0x0
    blt lbl_fn_800C8780_00001B70
    cmpwi r0, 0xb
    bgt lbl_fn_800C8780_00001B70
    lis r4, lbl_807340F0@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_807340F0@l
    lwzx r5, r4, r0
    b lbl_fn_800C8780_00001B74
lbl_fn_800C8780_00001B70:
    lwz r5, lbl_80881164
lbl_fn_800C8780_00001B74:
    lis r4, lbl_8073416C@ha
    mr r6, r3
    addi r3, r1, 0x128
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x128
    bl fn_800697D8
lbl_fn_800C8780_00001B98:
    lwz r3, 0xa8(r30)
    li r0, 0x0
    lfs f1, lbl_80881168
    cmpwi r3, 0x0
    stw r0, 0x9c(r30)
    stfs f1, 0xc4(r30)
    beq lbl_fn_800C8780_00001BBC
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C8780_00001BBC:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001BD0
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C8780_00001BD0:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001BE4
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C8780_00001BE4:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001BF8
    li r4, 0x0
    bl fn_8070AD90
lbl_fn_800C8780_00001BF8:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001C10
    lfs f1, lbl_80881168
    li r4, 0x1
    bl fn_8070AD90
lbl_fn_800C8780_00001C10:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001C28
    lfs f1, lbl_80881168
    li r4, 0x2
    bl fn_8070AD90
lbl_fn_800C8780_00001C28:
    lfs f3, lbl_8088116C
    lfs f0, lbl_80881170
    fcmpo cr0, f3, f0
    bge lbl_fn_800C8780_00001C3C
    fmr f3, f0
lbl_fn_800C8780_00001C3C:
    lwz r3, 0xa8(r30)
    frsp f6, f3
    stfs f3, 0xbc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001C58
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C8780_00001C58:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001C6C
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C8780_00001C6C:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001C80
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C8780_00001C80:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x104(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0xec(r30)
    stfs f5, 0xf0(r30)
    stfs f4, 0xf4(r30)
    stb r0, 0xf8(r30)
    stfs f3, 0xfc(r30)
    stfs f6, 0x100(r30)
    stfs f0, 0x108(r30)
    cror eq, lt, eq
    bne lbl_fn_800C8780_00001CE8
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C8780_00001CD8
    frsp f0, f6
    stfs f5, 0xec(r30)
    stfs f0, 0x104(r30)
    b lbl_fn_800C8780_00001CE0
lbl_fn_800C8780_00001CD8:
    stfs f3, 0x104(r30)
    stfs f5, 0xec(r30)
lbl_fn_800C8780_00001CE0:
    li r0, 0x0
    stb r0, 0xf8(r30)
lbl_fn_800C8780_00001CE8:
    lwz r3, 0xa8(r30)
    lfs f6, lbl_80881174
    cmpwi r3, 0x0
    stfs f6, 0xc0(r30)
    beq lbl_fn_800C8780_00001D04
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C8780_00001D04:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001D18
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C8780_00001D18:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001D2C
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C8780_00001D2C:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x124(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0x10c(r30)
    stfs f5, 0x110(r30)
    stfs f4, 0x114(r30)
    stb r0, 0x118(r30)
    stfs f3, 0x11c(r30)
    stfs f6, 0x120(r30)
    stfs f0, 0x128(r30)
    cror eq, lt, eq
    bne lbl_fn_800C8780_00001D94
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C8780_00001D84
    frsp f0, f6
    stfs f5, 0x10c(r30)
    stfs f0, 0x124(r30)
    b lbl_fn_800C8780_00001D8C
lbl_fn_800C8780_00001D84:
    stfs f3, 0x124(r30)
    stfs f5, 0x10c(r30)
lbl_fn_800C8780_00001D8C:
    li r0, 0x0
    stb r0, 0x118(r30)
lbl_fn_800C8780_00001D94:
    lfs f5, lbl_80881168
    li r3, 0x0
    lfs f3, 0x144(r30)
    li r0, 0x1
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stw r3, 0xc8(r30)
    stfs f5, 0xcc(r30)
    stfs f5, 0x12c(r30)
    stfs f5, 0x130(r30)
    stfs f4, 0x134(r30)
    stb r0, 0x138(r30)
    stfs f3, 0x13c(r30)
    stfs f5, 0x140(r30)
    stfs f0, 0x148(r30)
    cror eq, lt, eq
    bne lbl_fn_800C8780_00001E04
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C8780_00001DF4
    stfs f5, 0x144(r30)
    stfs f5, 0x12c(r30)
    b lbl_fn_800C8780_00001DFC
lbl_fn_800C8780_00001DF4:
    stfs f3, 0x144(r30)
    stfs f5, 0x12c(r30)
lbl_fn_800C8780_00001DFC:
    li r0, 0x0
    stb r0, 0x138(r30)
lbl_fn_800C8780_00001E04:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001E14
    bl fn_8070AD80
lbl_fn_800C8780_00001E14:
    lfs f0, lbl_80881168
    li r0, 0x0
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    stw r0, 0xd4(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
    stfs f0, 0xe4(r30)
    b lbl_fn_800C8780_00001E40
    stw r0, 0x6c(r30)
    b lbl_fn_800C8780_00001E48
lbl_fn_800C8780_00001E40:
    li r0, 0x0
    stw r0, 0x6c(r30)
lbl_fn_800C8780_00001E48:
    li r0, 0x0
    stw r0, 0xd0(r30)
    mr r4, r31
    stw r31, 0x98(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_800C8780_00001EB4
    lwz r0, 0x9c(r30)
    ori r0, r0, 0x8
    stw r0, 0x9c(r30)
    b lbl_fn_800C8780_00001EB4
lbl_fn_800C8780_00001E78:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_800C8780_00001EB4
    lis r3, lbl_807340F0@ha
    lis r4, lbl_8073416C@ha
    addi r3, r3, lbl_807340F0@l
    mr r6, r29
    lwz r5, 0x8(r3)
    addi r3, r1, 0x28
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x28
    bl fn_800697D8
lbl_fn_800C8780_00001EB4:
    lwz r0, 0x244(r1)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r29, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}
