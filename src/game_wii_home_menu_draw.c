#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800C3610(void);
extern void fn_800C37FC(void);
extern void fn_800C3834(void);
extern void fn_800C3990(void);
extern void fn_800C411C(void);
extern void fn_8010EB58(void);
extern void fn_80365708(void);
extern void fn_80370320(void);
extern void fn_803B27F8(void);
extern void fn_803B29A8(void);
extern void fn_804D0328(void);
extern void fn_80531ED4(void);
extern void fn_80574564(void);
extern void fn_80574754(void);
extern void fn_805747EC(void);
extern void fn_80574884(void);
extern void fn_8057491C(void);
extern void fn_805A620C(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80760D18[];
extern u8 lbl_80775A88[];
extern u8 lbl_80779308[];
extern u8 lbl_80779330[];
extern u8 lbl_80795888[];
extern u8 lbl_80795890[];
extern u8 lbl_807966F0[];
extern u8 lbl_807966F8[];
extern u8 lbl_80796700[];
extern u8 lbl_80796708[];
extern u8 lbl_80796718[];
extern u8 lbl_80796740[];
extern u8 lbl_80796768[];
extern u8 lbl_807C9570[];
extern u8 lbl_807C9578[];
extern u8 lbl_807C9580[];
extern u8 lbl_807C9588[];
extern u8 lbl_807C9590[];

/* Small data declarations */
extern u32 lbl_8087E680;
extern u32 lbl_8087E684;
extern u32 lbl_8087EFC0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9A8;
extern u32 lbl_8087F9AC;
extern u32 lbl_8087F9B0;
extern u32 lbl_8087F9B1;
extern u32 lbl_8087F9B2;
extern u32 lbl_8087F9B3;

/* Function declarations */
void fn_805727A8(void);
void fn_805727BC(void);
void fn_80572860(void);
void fn_805728C0(void);
void fn_80572B70(void);
void fn_80572BA4(void);
void fn_80572E70(void);
void fn_80572EDC(void);
void fn_80572F44(void);
void fn_80572F48(void);
void fn_80572F74(void);
void fn_80573098(void);
void fn_805731BC(void);
void fn_805731D0(void);
void fn_80573274(void);
void fn_80573398(void);
void fn_805733AC(void);
void fn_80573450(void);
void fn_805738BC(void);
void fn_80573A5C(void);
void fn_80573A74(void);
void fn_80573B18(void);
void fn_80573F44(void);
void fn_805740BC(void);
void fn_805740D4(void);
void fn_80574178(void);

asm void fn_805727A8(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    lwz r12, 0x0(r5)
    mtctr r12
    bctr
}

asm void fn_805727BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_805727BC_00000048
    lis r3, lbl_80795888@ha
    addi r3, r3, lbl_80795888@l
    stw r3, 0x0(r4)
    b lbl_fn_805727BC_000000A0
lbl_fn_805727BC_00000048:
    cmpwi r5, 0x0
    bne lbl_fn_805727BC_0000005C
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_805727BC_000000A0
lbl_fn_805727BC_0000005C:
    cmpwi r5, 0x1
    bne lbl_fn_805727BC_00000070
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_805727BC_000000A0
lbl_fn_805727BC_00000070:
    lwz r5, 0x0(r4)
    lis r3, lbl_80795888@ha
    lwz r4, lbl_80795888@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_805727BC_00000098
    stw r30, 0x0(r31)
    b lbl_fn_805727BC_000000A0
lbl_fn_805727BC_00000098:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805727BC_000000A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80572860(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x14
    li r5, 0x64
    stw r0, 0x14(r1)
    li r6, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80370320
    mr r3, r31
    li r4, 0x72b
    li r5, 0x64
    li r6, 0x0
    bl fn_80370320
    mr r3, r31
    li r4, 0x71e
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805728C0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r3
    lwz r0, lbl_8087F9AC
    cmpwi r0, 0x0
    bne lbl_fn_805728C0_000003AC
    lis r30, lbl_80760D18@ha
    li r3, 0x14
    addi r5, r30, lbl_80760D18@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805728C0_000003A8
    stw r29, 0x0(r3)
    addi r5, r30, lbl_80760D18@l
    mr r6, r5
    li r3, 0x10
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805728C0_00000190
    bl fn_800C3834
lbl_fn_805728C0_00000190:
    lis r5, lbl_80760D18@ha
    stw r3, 0x4(r31)
    addi r5, r5, lbl_80760D18@l
    li r3, 0x10
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805728C0_000001BC
    bl fn_800C3834
lbl_fn_805728C0_000001BC:
    lis r5, lbl_80760D18@ha
    stw r3, 0x8(r31)
    addi r5, r5, lbl_80760D18@l
    li r3, 0x10
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805728C0_000001E8
    bl fn_800C3834
lbl_fn_805728C0_000001E8:
    lis r5, lbl_80760D18@ha
    stw r3, 0xc(r31)
    addi r5, r5, lbl_80760D18@l
    li r3, 0x10
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805728C0_00000214
    bl fn_800C3834
lbl_fn_805728C0_00000214:
    stw r3, 0x10(r31)
    lwz r3, 0x0(r31)
    lwz r4, 0x4(r31)
    bl fn_800C3610
    lwz r3, lbl_8087F0A8
    lwz r0, 0x1b0(r3)
    cmpwi r0, 0x2
    bne lbl_fn_805728C0_00000374
    lis r4, lbl_80760D18@ha
    lis r3, lbl_80779330@ha
    addi r4, r4, lbl_80760D18@l
    li r0, -0x1
    addi r29, r4, 0x1
    addi r30, r1, 0x10
    cmplw r29, r30
    addi r3, r3, lbl_80779330@l
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_805728C0_0000027C
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_805728C0_0000027C:
    lbz r0, lbl_8087F9A8
    lis r4, lbl_80779308@ha
    addi r4, r4, lbl_80779308@l
    li r3, 0x0
    extsb. r0, r0
    stw r4, 0x8(r1)
    stw r3, 0x50(r1)
    bne lbl_fn_805728C0_000002C4
    lis r6, lbl_807C9570@ha
    lis r4, fn_805727A8@ha
    lis r3, fn_805727BC@ha
    li r0, 0x1
    addi r3, r3, fn_805727BC@l
    addi r5, r6, lbl_807C9570@l
    addi r4, r4, fn_805727A8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9570@l(r6)
    stb r0, lbl_8087F9A8
lbl_fn_805728C0_000002C4:
    lis r3, lbl_807C9570@ha
    lwz r12, lbl_807C9570@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805728C0_000002E8
    addi r3, r1, 0x54
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805728C0_000002E8:
    lis r0, fn_8010EB58@ha
    addic. r0, r0, -5288
    beq lbl_fn_805728C0_00000300
    stw r0, 0x54(r1)
    li r0, 0x1
    b lbl_fn_805728C0_00000304
lbl_fn_805728C0_00000300:
    li r0, 0x0
lbl_fn_805728C0_00000304:
    cmpwi r0, 0x0
    beq lbl_fn_805728C0_0000031C
    lis r3, lbl_807C9570@ha
    addi r3, r3, lbl_807C9570@l
    stw r3, 0x50(r1)
    b lbl_fn_805728C0_00000324
lbl_fn_805728C0_0000031C:
    li r0, 0x0
    stw r0, 0x50(r1)
lbl_fn_805728C0_00000324:
    lwz r3, 0x4(r31)
    addi r4, r1, 0x8
    bl fn_800C3990
    addic. r3, r1, 0x50
    beq lbl_fn_805728C0_0000037C
    beq lbl_fn_805728C0_0000037C
    lwz r4, 0x50(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805728C0_0000037C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805728C0_00000368
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805728C0_00000368:
    li r0, 0x0
    stw r0, 0x50(r1)
    b lbl_fn_805728C0_0000037C
lbl_fn_805728C0_00000374:
    mr r3, r31
    bl fn_80572BA4
lbl_fn_805728C0_0000037C:
    mr r3, r31
    bl fn_8057491C
    lwz r3, lbl_8087EFC0
    lis r4, lbl_80760D18@ha
    addi r4, r4, lbl_80760D18@l
    cmpwi r3, 0x0
    addi r4, r4, 0x1
    beq lbl_fn_805728C0_000003A8
    bl fn_800C37FC
    lwz r4, lbl_8087EFC0
    stw r3, 0x50(r4)
lbl_fn_805728C0_000003A8:
    stw r31, lbl_8087F9AC
lbl_fn_805728C0_000003AC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80572B70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80572B70_000003EC
    bl fn_800C37FC
    lwz r4, lbl_8087EFC0
    stw r3, 0x50(r4)
lbl_fn_80572B70_000003EC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80572BA4(void)
{
    nofralloc
    stwu r1, -0x4c0(r1)
    mflr r0
    lis r4, lbl_80760D18@ha
    lis r5, fn_80531ED4@ha
    stw r0, 0x4c4(r1)
    addi r4, r4, lbl_80760D18@l
    addi r5, r5, fn_80531ED4@l
    li r6, -0x1
    stw r31, 0x4bc(r1)
    mr r31, r3
    addi r3, r1, 0x310
    addi r4, r4, 0xa
    stw r30, 0x4b8(r1)
    stw r29, 0x4b4(r1)
    stw r28, 0x4b0(r1)
    bl fn_80574564
    lwz r3, 0x4(r31)
    addi r4, r1, 0x310
    bl fn_80574178
    addi r3, r1, 0x310
    li r4, -0x1
    bl fn_80574754
    lis r28, lbl_80795890@ha
    lis r29, fn_80365708@ha
    addi r28, r28, lbl_80795890@l
    b lbl_fn_80572BA4_000004DC
lbl_fn_80572BA4_00000464:
    lwz r4, 0x4(r28)
    addi r3, r1, 0x290
    lwz r30, 0x8(r28)
    addi r5, r29, fn_80365708@l
    lwz r12, 0xc(r28)
    addi r6, r1, 0x50
    lwz r11, 0x10(r28)
    lwz r10, 0x14(r28)
    lwz r9, 0x18(r28)
    lwz r8, 0x1c(r28)
    lwz r7, 0x20(r28)
    lwz r0, 0x24(r28)
    stw r4, 0x50(r1)
    lwz r4, 0x0(r28)
    stw r30, 0x54(r1)
    stw r12, 0x58(r1)
    stw r11, 0x5c(r1)
    stw r10, 0x60(r1)
    stw r9, 0x64(r1)
    stw r8, 0x68(r1)
    stw r7, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_80573F44
    lwz r3, 0x4(r31)
    addi r4, r1, 0x290
    bl fn_80573B18
    addi r3, r1, 0x290
    li r4, -0x1
    bl fn_805747EC
    addi r28, r28, 0x28
lbl_fn_80572BA4_000004DC:
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80572BA4_00000464
    lis r29, lbl_80760D18@ha
    addi r3, r1, 0x24c
    addi r29, r29, lbl_80760D18@l
    li r5, 0x1
    addi r4, r29, 0x10
    bl fn_80572E70
    lis r30, fn_803B27F8@ha
    addi r3, r1, 0x410
    addi r4, r29, 0x1c
    addi r6, r1, 0x24c
    addi r5, r30, fn_803B27F8@l
    bl fn_805738BC
    lwz r3, 0x4(r31)
    addi r4, r1, 0x410
    bl fn_80573450
    addi r3, r1, 0x410
    li r4, -0x1
    bl fn_80574884
    addi r3, r1, 0x24c
    li r4, -0x1
    bl fn_803B29A8
    lis r5, fn_80572EDC@ha
    addi r3, r1, 0x1f0
    addi r4, r29, 0x10
    addi r5, r5, fn_80572EDC@l
    bl fn_80573274
    lwz r3, 0x4(r31)
    addi r4, r1, 0x1f0
    bl fn_80572F44
    addi r3, r1, 0x1f0
    li r4, -0x1
    bl fn_800C411C
    addi r3, r1, 0x1ac
    addi r4, r29, 0x30
    li r5, 0x1
    bl fn_80572E70
    addi r3, r1, 0x370
    addi r4, r29, 0x35
    addi r5, r30, fn_803B27F8@l
    addi r6, r1, 0x1ac
    bl fn_805738BC
    lwz r3, 0x4(r31)
    addi r4, r1, 0x370
    bl fn_80573450
    addi r3, r1, 0x370
    li r4, -0x1
    bl fn_80574884
    addi r3, r1, 0x1ac
    li r4, -0x1
    bl fn_803B29A8
    lis r5, fn_805A620C@ha
    addi r3, r1, 0x150
    addi r4, r29, 0x3e
    addi r5, r5, fn_805A620C@l
    bl fn_80573098
    lwz r3, 0x4(r31)
    addi r4, r1, 0x150
    bl fn_80572F44
    addi r3, r1, 0x150
    li r4, -0x1
    bl fn_800C411C
    lis r4, 0x2
    addi r3, r1, 0x8
    subi r7, r4, 0x7578
    li r5, 0x4
    li r4, 0x2
    li r6, 0x1
    li r8, -0x1
    li r9, 0x1
    li r10, 0x0
    bl fn_80572F48
    lwz r7, 0x0(r3)
    lis r5, fn_80365708@ha
    lwz r0, 0x4(r3)
    addi r4, r29, 0x30
    stw r0, 0x30(r1)
    addi r5, r5, fn_80365708@l
    addi r6, r1, 0x2c
    stw r7, 0x2c(r1)
    lwz r7, 0x8(r3)
    lwz r0, 0xc(r3)
    stw r0, 0x38(r1)
    stw r7, 0x34(r1)
    lwz r7, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r0, 0x40(r1)
    stw r7, 0x3c(r1)
    lwz r7, 0x18(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0x48(r1)
    stw r7, 0x44(r1)
    lwz r0, 0x20(r3)
    addi r3, r1, 0xd0
    stw r0, 0x4c(r1)
    bl fn_80573F44
    lwz r3, 0x4(r31)
    addi r4, r1, 0xd0
    bl fn_80573B18
    addi r3, r1, 0xd0
    li r4, -0x1
    bl fn_805747EC
    lis r5, fn_8010EB58@ha
    addi r3, r1, 0x74
    addi r4, r29, 0x1
    addi r5, r5, fn_8010EB58@l
    bl fn_80572F74
    lwz r3, 0x4(r31)
    addi r4, r1, 0x74
    bl fn_80572F44
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800C411C
    lwz r0, 0x4c4(r1)
    lwz r31, 0x4bc(r1)
    lwz r30, 0x4b8(r1)
    lwz r29, 0x4b4(r1)
    lwz r28, 0x4b0(r1)
    mtlr r0
    addi r1, r1, 0x4c0
    blr
}

asm void fn_80572E70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplw r4, r3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80572E70_00000710
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r3, r29
    mr r4, r30
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80572E70_00000710:
    stw r31, 0x40(r29)
    mr r3, r29
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80572EDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80572EDC_00000784
    lis r3, 0x1
    li r4, 0x1
    subi r3, r3, 0x6578
    la r5, lbl_8087E684
    la r6, lbl_8087E680
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80572EDC_00000780
    mr r4, r31
    bl fn_804D0328
lbl_fn_80572EDC_00000780:
    stw r3, lbl_8087F610
lbl_fn_80572EDC_00000784:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F610
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80572F44(void)
{
    nofralloc
    b fn_800C3990
}

asm void fn_80572F48(void)
{
    nofralloc
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stw r6, 0x8(r3)
    stw r7, 0xc(r3)
    stw r8, 0x10(r3)
    stw r9, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r10, 0x20(r3)
    blr
}

asm void fn_80572F74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80779330@ha
    stw r0, 0x24(r1)
    addi r0, r3, 0x8
    cmplw r4, r0
    addi r6, r6, lbl_80779330@l
    stw r31, 0x1c(r1)
    li r0, -0x1
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    beq lbl_fn_80572F74_0000082C
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80572F74_0000082C:
    lis r3, lbl_80779308@ha
    li r0, 0x0
    addi r3, r3, lbl_80779308@l
    stw r3, 0x0(r31)
    stw r0, 0x48(r31)
    lbz r0, lbl_8087F9A8
    extsb. r0, r0
    bne lbl_fn_80572F74_00000874
    lis r6, lbl_807C9570@ha
    lis r4, fn_805727A8@ha
    lis r3, fn_805727BC@ha
    li r0, 0x1
    addi r3, r3, fn_805727BC@l
    addi r5, r6, lbl_807C9570@l
    addi r4, r4, fn_805727A8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9570@l(r6)
    stb r0, lbl_8087F9A8
lbl_fn_80572F74_00000874:
    lis r3, lbl_807C9570@ha
    lwz r12, lbl_807C9570@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80572F74_00000898
    addi r3, r31, 0x4c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80572F74_00000898:
    cmpwi r30, 0x0
    beq lbl_fn_80572F74_000008AC
    stw r30, 0x4c(r31)
    li r0, 0x1
    b lbl_fn_80572F74_000008B0
lbl_fn_80572F74_000008AC:
    li r0, 0x0
lbl_fn_80572F74_000008B0:
    cmpwi r0, 0x0
    beq lbl_fn_80572F74_000008C8
    lis r3, lbl_807C9570@ha
    addi r3, r3, lbl_807C9570@l
    stw r3, 0x48(r31)
    b lbl_fn_80572F74_000008D0
lbl_fn_80572F74_000008C8:
    li r0, 0x0
    stw r0, 0x48(r31)
lbl_fn_80572F74_000008D0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80573098(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80779330@ha
    stw r0, 0x24(r1)
    addi r0, r3, 0x8
    cmplw r4, r0
    addi r6, r6, lbl_80779330@l
    stw r31, 0x1c(r1)
    li r0, -0x1
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    beq lbl_fn_80573098_00000950
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80573098_00000950:
    lis r3, lbl_80779308@ha
    li r0, 0x0
    addi r3, r3, lbl_80779308@l
    stw r3, 0x0(r31)
    stw r0, 0x48(r31)
    lbz r0, lbl_8087F9B0
    extsb. r0, r0
    bne lbl_fn_80573098_00000998
    lis r6, lbl_807C9578@ha
    lis r4, fn_805731BC@ha
    lis r3, fn_805731D0@ha
    li r0, 0x1
    addi r3, r3, fn_805731D0@l
    addi r5, r6, lbl_807C9578@l
    addi r4, r4, fn_805731BC@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9578@l(r6)
    stb r0, lbl_8087F9B0
lbl_fn_80573098_00000998:
    lis r3, lbl_807C9578@ha
    lwz r12, lbl_807C9578@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80573098_000009BC
    addi r3, r31, 0x4c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80573098_000009BC:
    cmpwi r30, 0x0
    beq lbl_fn_80573098_000009D0
    stw r30, 0x4c(r31)
    li r0, 0x1
    b lbl_fn_80573098_000009D4
lbl_fn_80573098_000009D0:
    li r0, 0x0
lbl_fn_80573098_000009D4:
    cmpwi r0, 0x0
    beq lbl_fn_80573098_000009EC
    lis r3, lbl_807C9578@ha
    addi r3, r3, lbl_807C9578@l
    stw r3, 0x48(r31)
    b lbl_fn_80573098_000009F4
lbl_fn_80573098_000009EC:
    li r0, 0x0
    stw r0, 0x48(r31)
lbl_fn_80573098_000009F4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805731BC(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    lwz r12, 0x0(r5)
    mtctr r12
    bctr
}

asm void fn_805731D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_805731D0_00000A5C
    lis r3, lbl_807966F0@ha
    addi r3, r3, lbl_807966F0@l
    stw r3, 0x0(r4)
    b lbl_fn_805731D0_00000AB4
lbl_fn_805731D0_00000A5C:
    cmpwi r5, 0x0
    bne lbl_fn_805731D0_00000A70
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_805731D0_00000AB4
lbl_fn_805731D0_00000A70:
    cmpwi r5, 0x1
    bne lbl_fn_805731D0_00000A84
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_805731D0_00000AB4
lbl_fn_805731D0_00000A84:
    lwz r5, 0x0(r4)
    lis r3, lbl_807966F0@ha
    lwz r4, lbl_807966F0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_805731D0_00000AAC
    stw r30, 0x0(r31)
    b lbl_fn_805731D0_00000AB4
lbl_fn_805731D0_00000AAC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805731D0_00000AB4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80573274(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80779330@ha
    stw r0, 0x24(r1)
    addi r0, r3, 0x8
    cmplw r4, r0
    addi r6, r6, lbl_80779330@l
    stw r31, 0x1c(r1)
    li r0, -0x1
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    beq lbl_fn_80573274_00000B2C
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r4, r29
    addi r3, r31, 0x8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80573274_00000B2C:
    lis r3, lbl_80779308@ha
    li r0, 0x0
    addi r3, r3, lbl_80779308@l
    stw r3, 0x0(r31)
    stw r0, 0x48(r31)
    lbz r0, lbl_8087F9B1
    extsb. r0, r0
    bne lbl_fn_80573274_00000B74
    lis r6, lbl_807C9580@ha
    lis r4, fn_80573398@ha
    lis r3, fn_805733AC@ha
    li r0, 0x1
    addi r3, r3, fn_805733AC@l
    addi r5, r6, lbl_807C9580@l
    addi r4, r4, fn_80573398@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9580@l(r6)
    stb r0, lbl_8087F9B1
lbl_fn_80573274_00000B74:
    lis r3, lbl_807C9580@ha
    lwz r12, lbl_807C9580@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80573274_00000B98
    addi r3, r31, 0x4c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80573274_00000B98:
    cmpwi r30, 0x0
    beq lbl_fn_80573274_00000BAC
    stw r30, 0x4c(r31)
    li r0, 0x1
    b lbl_fn_80573274_00000BB0
lbl_fn_80573274_00000BAC:
    li r0, 0x0
lbl_fn_80573274_00000BB0:
    cmpwi r0, 0x0
    beq lbl_fn_80573274_00000BC8
    lis r3, lbl_807C9580@ha
    addi r3, r3, lbl_807C9580@l
    stw r3, 0x48(r31)
    b lbl_fn_80573274_00000BD0
lbl_fn_80573274_00000BC8:
    li r0, 0x0
    stw r0, 0x48(r31)
lbl_fn_80573274_00000BD0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80573398(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    lwz r12, 0x0(r5)
    mtctr r12
    bctr
}

asm void fn_805733AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_805733AC_00000C38
    lis r3, lbl_807966F8@ha
    addi r3, r3, lbl_807966F8@l
    stw r3, 0x0(r4)
    b lbl_fn_805733AC_00000C90
lbl_fn_805733AC_00000C38:
    cmpwi r5, 0x0
    bne lbl_fn_805733AC_00000C4C
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_805733AC_00000C90
lbl_fn_805733AC_00000C4C:
    cmpwi r5, 0x1
    bne lbl_fn_805733AC_00000C60
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_805733AC_00000C90
lbl_fn_805733AC_00000C60:
    lwz r5, 0x0(r4)
    lis r3, lbl_807966F8@ha
    lwz r4, lbl_807966F8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_805733AC_00000C88
    stw r30, 0x0(r31)
    b lbl_fn_805733AC_00000C90
lbl_fn_805733AC_00000C88:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805733AC_00000C90:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80573450(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80760D18@ha
    li r7, 0x0
    stw r0, 0x44(r1)
    addi r5, r5, lbl_80760D18@l
    mr r6, r5
    stmw r27, 0x2c(r1)
    mr r29, r3
    mr r31, r4
    li r3, 0xa0
    li r4, 0x1
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80573450_00000E44
    lis r5, lbl_80779330@ha
    lis r4, lbl_80796718@ha
    addi r5, r5, lbl_80779330@l
    stw r5, 0x0(r3)
    addi r4, r4, lbl_80796718@l
    li r0, 0x0
    lwz r5, 0x4(r31)
    stw r5, 0x4(r3)
    lwz r5, 0xc(r31)
    lwz r6, 0x8(r31)
    stw r6, 0x8(r3)
    stw r5, 0xc(r3)
    lwz r5, 0x14(r31)
    lwz r6, 0x10(r31)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    lwz r5, 0x1c(r31)
    lwz r6, 0x18(r31)
    stw r6, 0x18(r3)
    stw r5, 0x1c(r3)
    lwz r5, 0x24(r31)
    lwz r6, 0x20(r31)
    stw r6, 0x20(r3)
    stw r5, 0x24(r3)
    lwz r5, 0x2c(r31)
    lwz r6, 0x28(r31)
    stw r6, 0x28(r3)
    stw r5, 0x2c(r3)
    lwz r5, 0x34(r31)
    lwz r6, 0x30(r31)
    stw r6, 0x30(r3)
    stw r5, 0x34(r3)
    lwz r5, 0x3c(r31)
    lwz r6, 0x38(r31)
    stw r6, 0x38(r3)
    stw r5, 0x3c(r3)
    lwz r5, 0x44(r31)
    lwz r6, 0x40(r31)
    stw r6, 0x40(r3)
    stw r5, 0x44(r3)
    stw r4, 0x0(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80573450_00000DBC
    stw r0, 0x48(r3)
    addi r3, r31, 0x4c
    addi r4, r30, 0x4c
    li r5, 0x0
    lwz r6, 0x48(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80573450_00000DBC:
    lwz r0, 0x60(r31)
    lwz r3, 0x5c(r31)
    stw r3, 0x5c(r30)
    stw r0, 0x60(r30)
    lwz r0, 0x68(r31)
    lwz r3, 0x64(r31)
    stw r3, 0x64(r30)
    stw r0, 0x68(r30)
    lwz r0, 0x70(r31)
    lwz r3, 0x6c(r31)
    stw r3, 0x6c(r30)
    stw r0, 0x70(r30)
    lwz r0, 0x78(r31)
    lwz r3, 0x74(r31)
    stw r3, 0x74(r30)
    stw r0, 0x78(r30)
    lwz r0, 0x80(r31)
    lwz r3, 0x7c(r31)
    stw r3, 0x7c(r30)
    stw r0, 0x80(r30)
    lwz r0, 0x88(r31)
    lwz r3, 0x84(r31)
    stw r3, 0x84(r30)
    stw r0, 0x88(r30)
    lwz r0, 0x90(r31)
    lwz r3, 0x8c(r31)
    stw r3, 0x8c(r30)
    stw r0, 0x90(r30)
    lwz r0, 0x98(r31)
    lwz r3, 0x94(r31)
    stw r3, 0x94(r30)
    stw r0, 0x98(r30)
    lwz r0, 0x9c(r31)
    stw r0, 0x9c(r30)
lbl_fn_80573450_00000E44:
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
    stw r0, 0x4(r30)
    lwz r3, 0x8(r29)
    lwz r4, 0xc(r29)
    cmplw r3, r4
    bge lbl_fn_80573450_00000E80
    addi r3, r3, 0x1
    stw r3, 0x8(r29)
    subi r0, r3, 0x1
    lwz r3, 0x4(r29)
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_80573450_000010FC
lbl_fn_80573450_00000E80:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80573450_00000EB8
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80573450_00000EB8:
    li r5, 0x0
    addi r4, r29, 0xc
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x8(r29)
    lwz r31, 0xc(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80573450_00000F20
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80573450_00000F20:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80573450_00000F70
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80573450_00000F64
    addi r3, r1, 0x10
lbl_fn_80573450_00000F64:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80573450_00000FB4
lbl_fn_80573450_00000F70:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80573450_00000FAC
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80573450_00000FA0
    addi r3, r1, 0x10
lbl_fn_80573450_00000FA0:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80573450_00000FB4
lbl_fn_80573450_00000FAC:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80573450_00000FB4:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80573450_00000FE8
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80573450_00000FE8:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80573450_0000101C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80573450_0000101C:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    stw r31, 0x1c(r1)
    lwz r0, 0x8(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r30, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x8(r29)
    lwz r31, 0x4(r29)
    slwi r4, r4, 2
    add r5, r31, r4
    subf r5, r31, r5
    mr r4, r31
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r27, r28, 2
    slwi r0, r0, 2
    mr r5, r27
    add r3, r3, r0
    bl memcpy
    mr r3, r31
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x8(r29)
    lwz r3, 0xc(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0xc(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x4(r29)
    stw r0, 0x4(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x8(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80573450_000010FC
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80573450_000010FC
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80573450_000010FC:
    lwz r3, 0x4(r30)
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805738BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, lbl_80779330@ha
    stw r0, 0x34(r1)
    addi r0, r3, 0x8
    cmplw r4, r0
    addi r7, r7, lbl_80779330@l
    stmw r23, 0xc(r1)
    li r0, -0x1
    mr r30, r3
    mr r24, r4
    mr r23, r5
    mr r31, r6
    stw r7, 0x0(r3)
    stw r0, 0x4(r3)
    beq lbl_fn_805738BC_00001170
    mr r3, r24
    bl strlen
    mr r5, r3
    mr r4, r24
    addi r3, r30, 0x8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_805738BC_00001170:
    lis r3, lbl_80796718@ha
    li r0, 0x0
    addi r3, r3, lbl_80796718@l
    stw r3, 0x0(r30)
    stw r0, 0x48(r30)
    lbz r0, lbl_8087F9B2
    extsb. r0, r0
    bne lbl_fn_805738BC_000011B8
    lis r6, lbl_807C9588@ha
    lis r4, fn_80573A5C@ha
    lis r3, fn_80573A74@ha
    li r0, 0x1
    addi r3, r3, fn_80573A74@l
    addi r5, r6, lbl_807C9588@l
    addi r4, r4, fn_80573A5C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9588@l(r6)
    stb r0, lbl_8087F9B2
lbl_fn_805738BC_000011B8:
    lis r3, lbl_807C9588@ha
    lwz r12, lbl_807C9588@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805738BC_000011DC
    addi r3, r30, 0x4c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805738BC_000011DC:
    cmpwi r23, 0x0
    beq lbl_fn_805738BC_000011F0
    stw r23, 0x4c(r30)
    li r0, 0x1
    b lbl_fn_805738BC_000011F4
lbl_fn_805738BC_000011F0:
    li r0, 0x0
lbl_fn_805738BC_000011F4:
    cmpwi r0, 0x0
    beq lbl_fn_805738BC_0000120C
    lis r3, lbl_807C9588@ha
    addi r3, r3, lbl_807C9588@l
    stw r3, 0x48(r30)
    b lbl_fn_805738BC_00001214
lbl_fn_805738BC_0000120C:
    li r0, 0x0
    stw r0, 0x48(r30)
lbl_fn_805738BC_00001214:
    lwz r23, 0x0(r31)
    mr r3, r30
    lwz r24, 0x4(r31)
    lwz r25, 0x8(r31)
    lwz r26, 0xc(r31)
    lwz r27, 0x10(r31)
    lwz r28, 0x14(r31)
    lwz r29, 0x18(r31)
    lwz r12, 0x1c(r31)
    lwz r11, 0x20(r31)
    lwz r10, 0x24(r31)
    lwz r9, 0x28(r31)
    lwz r8, 0x2c(r31)
    lwz r7, 0x30(r31)
    lwz r6, 0x34(r31)
    lwz r5, 0x38(r31)
    lwz r4, 0x3c(r31)
    lwz r0, 0x40(r31)
    stw r23, 0x5c(r30)
    stw r24, 0x60(r30)
    stw r25, 0x64(r30)
    stw r26, 0x68(r30)
    stw r27, 0x6c(r30)
    stw r28, 0x70(r30)
    stw r29, 0x74(r30)
    stw r12, 0x78(r30)
    stw r11, 0x7c(r30)
    stw r10, 0x80(r30)
    stw r9, 0x84(r30)
    stw r8, 0x88(r30)
    stw r7, 0x8c(r30)
    stw r6, 0x90(r30)
    stw r5, 0x94(r30)
    stw r4, 0x98(r30)
    stw r0, 0x9c(r30)
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80573A5C(void)
{
    nofralloc
    mr r6, r3
    mr r3, r4
    lwz r12, 0x0(r6)
    mr r4, r5
    mtctr r12
    bctr
}

asm void fn_80573A74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_80573A74_00001300
    lis r3, lbl_80796700@ha
    addi r3, r3, lbl_80796700@l
    stw r3, 0x0(r4)
    b lbl_fn_80573A74_00001358
lbl_fn_80573A74_00001300:
    cmpwi r5, 0x0
    bne lbl_fn_80573A74_00001314
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_80573A74_00001358
lbl_fn_80573A74_00001314:
    cmpwi r5, 0x1
    bne lbl_fn_80573A74_00001328
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_80573A74_00001358
lbl_fn_80573A74_00001328:
    lwz r5, 0x0(r4)
    lis r3, lbl_80796700@ha
    lwz r4, lbl_80796700@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80573A74_00001350
    stw r30, 0x0(r31)
    b lbl_fn_80573A74_00001358
lbl_fn_80573A74_00001350:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80573A74_00001358:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80573B18(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80760D18@ha
    li r7, 0x0
    stw r0, 0x44(r1)
    addi r5, r5, lbl_80760D18@l
    mr r6, r5
    stmw r27, 0x2c(r1)
    mr r29, r3
    mr r31, r4
    li r3, 0x80
    li r4, 0x1
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80573B18_000014CC
    lis r5, lbl_80779330@ha
    lis r4, lbl_80796740@ha
    addi r5, r5, lbl_80779330@l
    stw r5, 0x0(r3)
    addi r4, r4, lbl_80796740@l
    li r0, 0x0
    lwz r5, 0x4(r31)
    stw r5, 0x4(r3)
    lwz r5, 0xc(r31)
    lwz r6, 0x8(r31)
    stw r6, 0x8(r3)
    stw r5, 0xc(r3)
    lwz r5, 0x14(r31)
    lwz r6, 0x10(r31)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    lwz r5, 0x1c(r31)
    lwz r6, 0x18(r31)
    stw r6, 0x18(r3)
    stw r5, 0x1c(r3)
    lwz r5, 0x24(r31)
    lwz r6, 0x20(r31)
    stw r6, 0x20(r3)
    stw r5, 0x24(r3)
    lwz r5, 0x2c(r31)
    lwz r6, 0x28(r31)
    stw r6, 0x28(r3)
    stw r5, 0x2c(r3)
    lwz r5, 0x34(r31)
    lwz r6, 0x30(r31)
    stw r6, 0x30(r3)
    stw r5, 0x34(r3)
    lwz r5, 0x3c(r31)
    lwz r6, 0x38(r31)
    stw r6, 0x38(r3)
    stw r5, 0x3c(r3)
    lwz r5, 0x44(r31)
    lwz r6, 0x40(r31)
    stw r6, 0x40(r3)
    stw r5, 0x44(r3)
    stw r4, 0x0(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80573B18_00001484
    stw r0, 0x48(r3)
    addi r3, r31, 0x4c
    addi r4, r30, 0x4c
    li r5, 0x0
    lwz r6, 0x48(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80573B18_00001484:
    lwz r0, 0x5c(r31)
    stw r0, 0x5c(r30)
    lwz r0, 0x60(r31)
    stw r0, 0x60(r30)
    lwz r0, 0x64(r31)
    stw r0, 0x64(r30)
    lwz r0, 0x68(r31)
    stw r0, 0x68(r30)
    lwz r0, 0x6c(r31)
    stw r0, 0x6c(r30)
    lwz r0, 0x70(r31)
    stw r0, 0x70(r30)
    lwz r0, 0x74(r31)
    stw r0, 0x74(r30)
    lwz r0, 0x78(r31)
    stw r0, 0x78(r30)
    lwz r0, 0x7c(r31)
    stw r0, 0x7c(r30)
lbl_fn_80573B18_000014CC:
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
    stw r0, 0x4(r30)
    lwz r3, 0x8(r29)
    lwz r4, 0xc(r29)
    cmplw r3, r4
    bge lbl_fn_80573B18_00001508
    addi r3, r3, 0x1
    stw r3, 0x8(r29)
    subi r0, r3, 0x1
    lwz r3, 0x4(r29)
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_80573B18_00001784
lbl_fn_80573B18_00001508:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80573B18_00001540
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80573B18_00001540:
    li r5, 0x0
    addi r4, r29, 0xc
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x8(r29)
    lwz r31, 0xc(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80573B18_000015A8
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80573B18_000015A8:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80573B18_000015F8
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80573B18_000015EC
    addi r3, r1, 0x10
lbl_fn_80573B18_000015EC:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80573B18_0000163C
lbl_fn_80573B18_000015F8:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80573B18_00001634
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80573B18_00001628
    addi r3, r1, 0x10
lbl_fn_80573B18_00001628:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80573B18_0000163C
lbl_fn_80573B18_00001634:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80573B18_0000163C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80573B18_00001670
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80573B18_00001670:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80573B18_000016A4
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80573B18_000016A4:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    stw r31, 0x1c(r1)
    lwz r0, 0x8(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r30, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x8(r29)
    lwz r31, 0x4(r29)
    slwi r4, r4, 2
    add r5, r31, r4
    subf r5, r31, r5
    mr r4, r31
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r27, r28, 2
    slwi r0, r0, 2
    mr r5, r27
    add r3, r3, r0
    bl memcpy
    mr r3, r31
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x8(r29)
    lwz r3, 0xc(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0xc(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x4(r29)
    stw r0, 0x4(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x8(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80573B18_00001784
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80573B18_00001784
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80573B18_00001784:
    lwz r3, 0x4(r30)
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80573F44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80779330@ha
    stw r0, 0x24(r1)
    addi r0, r3, 0x8
    cmplw r4, r0
    addi r7, r7, lbl_80779330@l
    stw r31, 0x1c(r1)
    li r0, -0x1
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    stw r7, 0x0(r3)
    stw r0, 0x4(r3)
    beq lbl_fn_80573F44_00001804
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r30, 0x8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80573F44_00001804:
    lis r3, lbl_80796740@ha
    li r0, 0x0
    addi r3, r3, lbl_80796740@l
    stw r3, 0x0(r30)
    stw r0, 0x48(r30)
    lbz r0, lbl_8087F9B3
    extsb. r0, r0
    bne lbl_fn_80573F44_0000184C
    lis r6, lbl_807C9590@ha
    lis r4, fn_805740BC@ha
    lis r3, fn_805740D4@ha
    li r0, 0x1
    addi r3, r3, fn_805740D4@l
    addi r5, r6, lbl_807C9590@l
    addi r4, r4, fn_805740BC@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9590@l(r6)
    stb r0, lbl_8087F9B3
lbl_fn_80573F44_0000184C:
    lis r3, lbl_807C9590@ha
    lwz r12, lbl_807C9590@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80573F44_00001870
    addi r3, r30, 0x4c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80573F44_00001870:
    cmpwi r29, 0x0
    beq lbl_fn_80573F44_00001884
    stw r29, 0x4c(r30)
    li r0, 0x1
    b lbl_fn_80573F44_00001888
lbl_fn_80573F44_00001884:
    li r0, 0x0
lbl_fn_80573F44_00001888:
    cmpwi r0, 0x0
    beq lbl_fn_80573F44_000018A0
    lis r3, lbl_807C9590@ha
    addi r3, r3, lbl_807C9590@l
    stw r3, 0x48(r30)
    b lbl_fn_80573F44_000018A8
lbl_fn_80573F44_000018A0:
    li r0, 0x0
    stw r0, 0x48(r30)
lbl_fn_80573F44_000018A8:
    lwz r11, 0x0(r31)
    mr r3, r30
    lwz r10, 0x4(r31)
    lwz r9, 0x8(r31)
    lwz r8, 0xc(r31)
    lwz r7, 0x10(r31)
    lwz r6, 0x14(r31)
    lwz r5, 0x18(r31)
    lwz r4, 0x1c(r31)
    lwz r0, 0x20(r31)
    stw r11, 0x5c(r30)
    stw r10, 0x60(r30)
    stw r9, 0x64(r30)
    stw r8, 0x68(r30)
    stw r7, 0x6c(r30)
    stw r6, 0x70(r30)
    stw r5, 0x74(r30)
    stw r4, 0x78(r30)
    stw r0, 0x7c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805740BC(void)
{
    nofralloc
    mr r6, r3
    mr r3, r4
    lwz r12, 0x0(r6)
    mr r4, r5
    mtctr r12
    bctr
}

asm void fn_805740D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_805740D4_00001960
    lis r3, lbl_80796708@ha
    addi r3, r3, lbl_80796708@l
    stw r3, 0x0(r4)
    b lbl_fn_805740D4_000019B8
lbl_fn_805740D4_00001960:
    cmpwi r5, 0x0
    bne lbl_fn_805740D4_00001974
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_805740D4_000019B8
lbl_fn_805740D4_00001974:
    cmpwi r5, 0x1
    bne lbl_fn_805740D4_00001988
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_805740D4_000019B8
lbl_fn_805740D4_00001988:
    lwz r5, 0x0(r4)
    lis r3, lbl_80796708@ha
    lwz r4, lbl_80796708@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_805740D4_000019B0
    stw r30, 0x0(r31)
    b lbl_fn_805740D4_000019B8
lbl_fn_805740D4_000019B0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805740D4_000019B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80574178(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80760D18@ha
    li r7, 0x0
    stw r0, 0x44(r1)
    addi r5, r5, lbl_80760D18@l
    mr r6, r5
    stmw r27, 0x2c(r1)
    mr r29, r3
    mr r31, r4
    li r3, 0x60
    li r4, 0x1
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80574178_00001AEC
    lis r5, lbl_80779330@ha
    lis r4, lbl_80796768@ha
    addi r5, r5, lbl_80779330@l
    stw r5, 0x0(r3)
    addi r4, r4, lbl_80796768@l
    li r0, 0x0
    lwz r5, 0x4(r31)
    stw r5, 0x4(r3)
    lwz r5, 0xc(r31)
    lwz r6, 0x8(r31)
    stw r6, 0x8(r3)
    stw r5, 0xc(r3)
    lwz r5, 0x14(r31)
    lwz r6, 0x10(r31)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    lwz r5, 0x1c(r31)
    lwz r6, 0x18(r31)
    stw r6, 0x18(r3)
    stw r5, 0x1c(r3)
    lwz r5, 0x24(r31)
    lwz r6, 0x20(r31)
    stw r6, 0x20(r3)
    stw r5, 0x24(r3)
    lwz r5, 0x2c(r31)
    lwz r6, 0x28(r31)
    stw r6, 0x28(r3)
    stw r5, 0x2c(r3)
    lwz r5, 0x34(r31)
    lwz r6, 0x30(r31)
    stw r6, 0x30(r3)
    stw r5, 0x34(r3)
    lwz r5, 0x3c(r31)
    lwz r6, 0x38(r31)
    stw r6, 0x38(r3)
    stw r5, 0x3c(r3)
    lwz r5, 0x44(r31)
    lwz r6, 0x40(r31)
    stw r6, 0x40(r3)
    stw r5, 0x44(r3)
    stw r4, 0x0(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80574178_00001AE4
    stw r0, 0x48(r3)
    addi r3, r31, 0x4c
    addi r4, r30, 0x4c
    li r5, 0x0
    lwz r6, 0x48(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80574178_00001AE4:
    lwz r0, 0x5c(r31)
    stw r0, 0x5c(r30)
lbl_fn_80574178_00001AEC:
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
    stw r0, 0x4(r30)
    lwz r3, 0x8(r29)
    lwz r4, 0xc(r29)
    cmplw r3, r4
    bge lbl_fn_80574178_00001B28
    addi r3, r3, 0x1
    stw r3, 0x8(r29)
    subi r0, r3, 0x1
    lwz r3, 0x4(r29)
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_80574178_00001DA4
lbl_fn_80574178_00001B28:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80574178_00001B60
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80574178_00001B60:
    li r5, 0x0
    addi r4, r29, 0xc
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x8(r29)
    lwz r31, 0xc(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_80574178_00001BC8
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80574178_00001BC8:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80574178_00001C18
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80574178_00001C0C
    addi r3, r1, 0x10
lbl_fn_80574178_00001C0C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80574178_00001C5C
lbl_fn_80574178_00001C18:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80574178_00001C54
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80574178_00001C48
    addi r3, r1, 0x10
lbl_fn_80574178_00001C48:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80574178_00001C5C
lbl_fn_80574178_00001C54:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80574178_00001C5C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80574178_00001C90
    lis r4, lbl_80760D18@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80760D18@l
    addi r3, r3, __files@l
    addi r4, r4, 0x44
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80574178_00001C90:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80574178_00001CC4
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80574178_00001CC4:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    stw r31, 0x1c(r1)
    lwz r0, 0x8(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r30, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x8(r29)
    lwz r31, 0x4(r29)
    slwi r4, r4, 2
    add r5, r31, r4
    subf r5, r31, r5
    mr r4, r31
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r27, r28, 2
    slwi r0, r0, 2
    mr r5, r27
    add r3, r3, r0
    bl memcpy
    mr r3, r31
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x8(r29)
    lwz r3, 0xc(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0xc(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x4(r29)
    stw r0, 0x4(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x8(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_80574178_00001DA4
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80574178_00001DA4
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80574178_00001DA4:
    lwz r3, 0x4(r30)
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
