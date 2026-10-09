#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800C411C(void);
extern void fn_800DCA6C(void);
extern void fn_80365708(void);
extern void fn_803B27F8(void);
extern void fn_803B29A8(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_80531ED4(void);
extern void fn_80572860(void);
extern void fn_80572E70(void);
extern void fn_80572EDC(void);
extern void fn_80572F44(void);
extern void fn_80573274(void);
extern void fn_80573450(void);
extern void fn_805738BC(void);
extern void fn_80573B18(void);
extern void fn_80573F44(void);
extern void fn_80574178(void);
extern void fn_80682428(void);
extern void fn_806952C4(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80760D18[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80779330[];
extern u8 lbl_80795890[];
extern u8 lbl_807959A8[];
extern u8 lbl_807964C0[];
extern u8 lbl_80796710[];
extern u8 lbl_80796768[];
extern u8 lbl_807C9598[];

/* Small data declarations */
extern u32 lbl_8087F9B4;

/* Function declarations */
void fn_80574564(void);
void fn_80574698(void);
void fn_805746B0(void);
void fn_80574754(void);
void fn_805747EC(void);
void fn_80574884(void);
void fn_8057491C(void);
void fn_80574AF0(void);
void fn_80574D20(void);
void fn_80574EE0(void);
void fn_8057501C(void);
void fn_80575F10(void);

asm void fn_80574564(void)
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
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    stw r7, 0x0(r3)
    stw r0, 0x4(r3)
    beq lbl_fn_80574564_00000068
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r31, 0x8
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80574564_00000068:
    lis r3, lbl_80796768@ha
    li r0, 0x0
    addi r3, r3, lbl_80796768@l
    stw r3, 0x0(r31)
    stw r0, 0x48(r31)
    lbz r0, lbl_8087F9B4
    extsb. r0, r0
    bne lbl_fn_80574564_000000B0
    lis r6, lbl_807C9598@ha
    lis r4, fn_80574698@ha
    lis r3, fn_805746B0@ha
    li r0, 0x1
    addi r3, r3, fn_805746B0@l
    addi r5, r6, lbl_807C9598@l
    addi r4, r4, fn_80574698@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C9598@l(r6)
    stb r0, lbl_8087F9B4
lbl_fn_80574564_000000B0:
    lis r3, lbl_807C9598@ha
    lwz r12, lbl_807C9598@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80574564_000000D4
    addi r3, r31, 0x4c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80574564_000000D4:
    cmpwi r29, 0x0
    beq lbl_fn_80574564_000000E8
    stw r29, 0x4c(r31)
    li r0, 0x1
    b lbl_fn_80574564_000000EC
lbl_fn_80574564_000000E8:
    li r0, 0x0
lbl_fn_80574564_000000EC:
    cmpwi r0, 0x0
    beq lbl_fn_80574564_00000104
    lis r3, lbl_807C9598@ha
    addi r3, r3, lbl_807C9598@l
    stw r3, 0x48(r31)
    b lbl_fn_80574564_0000010C
lbl_fn_80574564_00000104:
    li r0, 0x0
    stw r0, 0x48(r31)
lbl_fn_80574564_0000010C:
    stw r30, 0x5c(r31)
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80574698(void)
{
    nofralloc
    mr r6, r3
    mr r3, r4
    lwz r12, 0x0(r6)
    mr r4, r5
    mtctr r12
    bctr
}

asm void fn_805746B0(void)
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
    bne lbl_fn_805746B0_00000180
    lis r3, lbl_80796710@ha
    addi r3, r3, lbl_80796710@l
    stw r3, 0x0(r4)
    b lbl_fn_805746B0_000001D8
lbl_fn_805746B0_00000180:
    cmpwi r5, 0x0
    bne lbl_fn_805746B0_00000194
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_805746B0_000001D8
lbl_fn_805746B0_00000194:
    cmpwi r5, 0x1
    bne lbl_fn_805746B0_000001A8
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_805746B0_000001D8
lbl_fn_805746B0_000001A8:
    lwz r5, 0x0(r4)
    lis r3, lbl_80796710@ha
    lwz r4, lbl_80796710@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_805746B0_000001D0
    stw r30, 0x0(r31)
    b lbl_fn_805746B0_000001D8
lbl_fn_805746B0_000001D0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805746B0_000001D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80574754(void)
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
    beq lbl_fn_80574754_00000268
    addic. r31, r3, 0x48
    beq lbl_fn_80574754_00000258
    beq lbl_fn_80574754_00000258
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80574754_00000258
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80574754_00000250
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80574754_00000250:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80574754_00000258:
    cmpwi r30, 0x0
    ble lbl_fn_80574754_00000268
    mr r3, r29
    bl dtor_80084684
lbl_fn_80574754_00000268:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805747EC(void)
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
    beq lbl_fn_805747EC_00000300
    addic. r31, r3, 0x48
    beq lbl_fn_805747EC_000002F0
    beq lbl_fn_805747EC_000002F0
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805747EC_000002F0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805747EC_000002E8
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805747EC_000002E8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_805747EC_000002F0:
    cmpwi r30, 0x0
    ble lbl_fn_805747EC_00000300
    mr r3, r29
    bl dtor_80084684
lbl_fn_805747EC_00000300:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80574884(void)
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
    beq lbl_fn_80574884_00000398
    addic. r31, r3, 0x48
    beq lbl_fn_80574884_00000388
    beq lbl_fn_80574884_00000388
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80574884_00000388
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80574884_00000380
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80574884_00000380:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80574884_00000388:
    cmpwi r30, 0x0
    ble lbl_fn_80574884_00000398
    mr r3, r29
    bl dtor_80084684
lbl_fn_80574884_00000398:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8057491C(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    lis r4, lbl_80760D18@ha
    lis r5, fn_80531ED4@ha
    stw r0, 0x344(r1)
    addi r4, r4, lbl_80760D18@l
    addi r5, r5, fn_80531ED4@l
    li r6, -0x1
    stw r31, 0x33c(r1)
    addi r4, r4, 0xa
    stw r30, 0x338(r1)
    stw r29, 0x334(r1)
    stw r28, 0x330(r1)
    mr r28, r3
    addi r3, r1, 0x190
    bl fn_80574564
    lwz r3, 0x8(r28)
    addi r4, r1, 0x190
    bl fn_80574178
    addi r3, r1, 0x190
    li r4, -0x1
    bl fn_80574754
    lis r29, lbl_807959A8@ha
    lis r30, fn_80365708@ha
    addi r29, r29, lbl_807959A8@l
    b lbl_fn_8057491C_00000498
lbl_fn_8057491C_00000420:
    lwz r4, 0x4(r29)
    addi r3, r1, 0x110
    lwz r31, 0x8(r29)
    addi r5, r30, fn_80365708@l
    lwz r12, 0xc(r29)
    addi r6, r1, 0x8
    lwz r11, 0x10(r29)
    lwz r10, 0x14(r29)
    lwz r9, 0x18(r29)
    lwz r8, 0x1c(r29)
    lwz r7, 0x20(r29)
    lwz r0, 0x24(r29)
    stw r4, 0x8(r1)
    lwz r4, 0x0(r29)
    stw r31, 0xc(r1)
    stw r12, 0x10(r1)
    stw r11, 0x14(r1)
    stw r10, 0x18(r1)
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80573F44
    lwz r3, 0x8(r28)
    addi r4, r1, 0x110
    bl fn_80573B18
    addi r3, r1, 0x110
    li r4, -0x1
    bl fn_805747EC
    addi r29, r29, 0x28
lbl_fn_8057491C_00000498:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8057491C_00000420
    lis r30, lbl_80760D18@ha
    addi r3, r1, 0xcc
    addi r30, r30, lbl_80760D18@l
    li r5, 0x1
    addi r4, r30, 0x10
    bl fn_80572E70
    lis r31, fn_803B27F8@ha
    addi r3, r1, 0x290
    addi r4, r30, 0x1c
    addi r6, r1, 0xcc
    addi r5, r31, fn_803B27F8@l
    bl fn_805738BC
    lwz r3, 0x8(r28)
    addi r4, r1, 0x290
    bl fn_80573450
    addi r3, r1, 0x290
    li r4, -0x1
    bl fn_80574884
    addi r3, r1, 0xcc
    li r4, -0x1
    bl fn_803B29A8
    lis r5, fn_80572EDC@ha
    addi r3, r1, 0x70
    addi r4, r30, 0x10
    addi r5, r5, fn_80572EDC@l
    bl fn_80573274
    lwz r3, 0x8(r28)
    addi r4, r1, 0x70
    bl fn_80572F44
    addi r3, r1, 0x70
    li r4, -0x1
    bl fn_800C411C
    addi r3, r1, 0x2c
    addi r4, r30, 0x30
    li r5, 0x1
    bl fn_80572E70
    addi r3, r1, 0x1f0
    addi r4, r30, 0x35
    addi r5, r31, fn_803B27F8@l
    addi r6, r1, 0x2c
    bl fn_805738BC
    lwz r3, 0x8(r28)
    addi r4, r1, 0x1f0
    bl fn_80573450
    addi r3, r1, 0x1f0
    li r4, -0x1
    bl fn_80574884
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_803B29A8
    lwz r0, 0x344(r1)
    lwz r31, 0x33c(r1)
    lwz r30, 0x338(r1)
    lwz r29, 0x334(r1)
    lwz r28, 0x330(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_80574AF0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stmw r22, 0xb8(r1)
    mr r31, r4
    mr r30, r3
    lwz r0, 0x48(r3)
    lwz r28, 0x5c(r3)
    lwz r27, 0x60(r3)
    cmpwi r0, 0x0
    lwz r26, 0x64(r3)
    lwz r25, 0x68(r3)
    lwz r24, 0x6c(r3)
    lwz r23, 0x70(r3)
    lwz r22, 0x74(r3)
    lwz r12, 0x78(r3)
    lwz r11, 0x7c(r3)
    lwz r10, 0x80(r3)
    lwz r9, 0x84(r3)
    lwz r8, 0x88(r3)
    lwz r7, 0x8c(r3)
    lwz r6, 0x90(r3)
    lwz r5, 0x94(r3)
    lwz r4, 0x98(r3)
    lwz r0, 0x9c(r3)
    stw r28, 0x68(r1)
    stw r27, 0x6c(r1)
    stw r26, 0x70(r1)
    stw r25, 0x74(r1)
    stw r24, 0x78(r1)
    stw r23, 0x7c(r1)
    stw r22, 0x80(r1)
    stw r12, 0x84(r1)
    stw r11, 0x88(r1)
    stw r10, 0x8c(r1)
    stw r9, 0x90(r1)
    stw r8, 0x94(r1)
    stw r7, 0x98(r1)
    stw r6, 0x9c(r1)
    stw r5, 0xa0(r1)
    stw r4, 0xa4(r1)
    stw r0, 0xa8(r1)
    bne lbl_fn_80574AF0_00000704
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
    mr r22, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80574AF0_000006A8
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r22, 0xc(r3)
lbl_fn_80574AF0_000006A8:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_80574AF0_000006BC
    bl fn_80084C24
lbl_fn_80574AF0_000006BC:
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
    beq lbl_fn_80574AF0_00000704
    addic. r3, r3, 0x4
    beq lbl_fn_80574AF0_00000704
    beq lbl_fn_80574AF0_00000704
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80574AF0_00000704
    bl fn_806952C4
lbl_fn_80574AF0_00000704:
    lwz r22, 0x68(r1)
    mr r4, r31
    lwz r23, 0x6c(r1)
    addi r3, r30, 0x4c
    lwz r24, 0x70(r1)
    addi r5, r1, 0x24
    lwz r25, 0x74(r1)
    lwz r26, 0x78(r1)
    lwz r27, 0x7c(r1)
    lwz r28, 0x80(r1)
    lwz r29, 0x84(r1)
    lwz r31, 0x88(r1)
    lwz r12, 0x8c(r1)
    lwz r11, 0x90(r1)
    lwz r10, 0x94(r1)
    lwz r9, 0x98(r1)
    lwz r8, 0x9c(r1)
    lwz r7, 0xa0(r1)
    lwz r6, 0xa4(r1)
    lwz r0, 0xa8(r1)
    stw r22, 0x24(r1)
    stw r23, 0x28(r1)
    stw r24, 0x2c(r1)
    stw r25, 0x30(r1)
    stw r26, 0x34(r1)
    stw r27, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r29, 0x40(r1)
    stw r31, 0x44(r1)
    stw r12, 0x48(r1)
    stw r11, 0x4c(r1)
    stw r10, 0x50(r1)
    stw r9, 0x54(r1)
    stw r8, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r6, 0x48(r30)
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
    lmw r22, 0xb8(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80574D20(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r4
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    lwz r0, 0x48(r3)
    lwz r11, 0x5c(r3)
    lwz r10, 0x60(r3)
    cmpwi r0, 0x0
    lwz r9, 0x64(r3)
    lwz r8, 0x68(r3)
    lwz r7, 0x6c(r3)
    lwz r6, 0x70(r3)
    lwz r5, 0x74(r3)
    lwz r4, 0x78(r3)
    lwz r0, 0x7c(r3)
    stw r11, 0x48(r1)
    stw r10, 0x4c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r0, 0x68(r1)
    bne lbl_fn_80574D20_000008FC
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
    mr r29, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80574D20_000008A0
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r29, 0xc(r3)
lbl_fn_80574D20_000008A0:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_80574D20_000008B4
    bl fn_80084C24
lbl_fn_80574D20_000008B4:
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
    beq lbl_fn_80574D20_000008FC
    addic. r3, r3, 0x4
    beq lbl_fn_80574D20_000008FC
    beq lbl_fn_80574D20_000008FC
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80574D20_000008FC
    bl fn_806952C4
lbl_fn_80574D20_000008FC:
    lwz r29, 0x48(r1)
    mr r4, r31
    lwz r12, 0x4c(r1)
    addi r3, r30, 0x4c
    lwz r11, 0x50(r1)
    addi r5, r1, 0x24
    lwz r10, 0x54(r1)
    lwz r9, 0x58(r1)
    lwz r8, 0x5c(r1)
    lwz r7, 0x60(r1)
    lwz r6, 0x64(r1)
    lwz r0, 0x68(r1)
    stw r29, 0x24(r1)
    stw r12, 0x28(r1)
    stw r11, 0x2c(r1)
    stw r10, 0x30(r1)
    stw r9, 0x34(r1)
    stw r8, 0x38(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r6, 0x48(r30)
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80574EE0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    lwz r0, 0x48(r3)
    lwz r30, 0x5c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80574EE0_00000A7C
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
    beq lbl_fn_80574EE0_00000A20
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r31, 0xc(r3)
lbl_fn_80574EE0_00000A20:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_80574EE0_00000A34
    bl fn_80084C24
lbl_fn_80574EE0_00000A34:
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
    beq lbl_fn_80574EE0_00000A7C
    addic. r3, r3, 0x4
    beq lbl_fn_80574EE0_00000A7C
    beq lbl_fn_80574EE0_00000A7C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80574EE0_00000A7C
    bl fn_806952C4
lbl_fn_80574EE0_00000A7C:
    lwz r6, 0x48(r28)
    mr r4, r29
    mr r5, r30
    addi r3, r28, 0x4c
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8057501C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    lis r4, lbl_80795890@ha
    lis r3, 0x5
    li r0, 0x8
    stmw r14, 0x8(r1)
    lis r19, 0x2
    lis r28, 0x6
    addi r4, r4, lbl_80795890@l
    li r21, 0x0
    li r17, 0x1
    li r15, 0x2
    li r20, -0x1
    subi r23, r3, 0x6450
    lis r3, 0x5
    subi r25, r3, 0x6068
    subi r18, r19, 0x7578
    subi r22, r19, 0x7190
    addi r27, r28, 0x2e08
    addi r3, r28, 0x3da8
    li r16, 0x4
    li r24, 0x7
    li r26, 0x6
    stw r0, 0x30(r4)
    li r0, 0x13
    stw r0, 0x58(r4)
    li r0, 0x1d
    stw r15, 0x4(r4)
    stw r16, 0x8(r4)
    stw r17, 0xc(r4)
    stw r18, 0x10(r4)
    stw r20, 0x14(r4)
    stw r17, 0x18(r4)
    stw r21, 0x1c(r4)
    stw r21, 0x20(r4)
    stw r21, 0x24(r4)
    stw r15, 0x2c(r4)
    stw r17, 0x34(r4)
    stw r22, 0x38(r4)
    stw r20, 0x3c(r4)
    stw r17, 0x40(r4)
    stw r21, 0x44(r4)
    stw r21, 0x48(r4)
    stw r21, 0x4c(r4)
    stw r15, 0x54(r4)
    stw r17, 0x5c(r4)
    stw r23, 0x60(r4)
    stw r20, 0x64(r4)
    stw r17, 0x68(r4)
    stw r21, 0x6c(r4)
    stw r21, 0x70(r4)
    stw r21, 0x74(r4)
    stw r15, 0x7c(r4)
    stw r24, 0x80(r4)
    stw r17, 0x84(r4)
    stw r25, 0x88(r4)
    stw r20, 0x8c(r4)
    stw r17, 0x90(r4)
    stw r21, 0x94(r4)
    stw r21, 0x98(r4)
    stw r21, 0x9c(r4)
    stw r15, 0xa4(r4)
    stw r0, 0xa8(r4)
    stw r26, 0xac(r4)
    stw r27, 0xb0(r4)
    stw r20, 0xb4(r4)
    stw r17, 0xb8(r4)
    stw r21, 0xbc(r4)
    stw r21, 0xc0(r4)
    stw r21, 0xc4(r4)
    stw r17, 0xcc(r4)
    stw r15, 0xd0(r4)
    stw r17, 0xd4(r4)
    stw r3, 0xd8(r4)
    stw r20, 0xdc(r4)
    lis r29, lbl_807959A8@ha
    lis r9, fn_80572860@ha
    addi r29, r29, lbl_807959A8@l
    lis r5, 0x9
    addi r0, r5, 0x2ba8
    addi r9, r9, fn_80572860@l
    subi r5, r19, 0x5e08
    li r8, 0x2a
    li r7, 0x29
    li r6, 0x38
    stw r17, 0xe0(r4)
    stw r21, 0xe4(r4)
    stw r21, 0xe8(r4)
    stw r9, 0xec(r4)
    stw r17, 0xf4(r4)
    stw r17, 0xf8(r4)
    stw r17, 0xfc(r4)
    stw r21, 0x100(r4)
    stw r20, 0x104(r4)
    stw r21, 0x108(r4)
    stw r21, 0x10c(r4)
    stw r21, 0x110(r4)
    stw r21, 0x114(r4)
    stw r15, 0x4(r29)
    stw r8, 0x8(r29)
    stw r17, 0xc(r29)
    stw r0, 0x10(r29)
    stw r20, 0x14(r29)
    stw r21, 0x18(r29)
    stw r21, 0x1c(r29)
    stw r21, 0x20(r29)
    stw r21, 0x24(r29)
    stw r15, 0x2c(r29)
    stw r17, 0x30(r29)
    stw r17, 0x34(r29)
    stw r0, 0x38(r29)
    stw r20, 0x3c(r29)
    stw r21, 0x40(r29)
    stw r21, 0x44(r29)
    stw r21, 0x48(r29)
    stw r21, 0x4c(r29)
    stw r15, 0x54(r29)
    stw r7, 0x58(r29)
    stw r15, 0x5c(r29)
    stw r0, 0x60(r29)
    stw r20, 0x64(r29)
    stw r21, 0x68(r29)
    stw r21, 0x6c(r29)
    stw r21, 0x70(r29)
    stw r21, 0x74(r29)
    stw r15, 0x7c(r29)
    stw r6, 0x80(r29)
    stw r17, 0x84(r29)
    stw r5, 0x88(r29)
    stw r20, 0x8c(r29)
    stw r21, 0x90(r29)
    stw r21, 0x94(r29)
    stw r21, 0x98(r29)
    stw r21, 0x9c(r29)
    stw r15, 0xa4(r29)
    lis r31, 0x8
    lis r4, 0x3
    addi r8, r4, 0x20c8
    subi r30, r19, 0x5a20
    li r9, 0x3c
    subi r6, r31, 0x3fa0
    li r7, 0x28
    li r5, 0x43
    li r12, 0x9
    li r4, 0x1b
    stw r9, 0xa8(r29)
    stw r15, 0xac(r29)
    stw r30, 0xb0(r29)
    stw r20, 0xb4(r29)
    stw r21, 0xb8(r29)
    stw r21, 0xbc(r29)
    stw r21, 0xc0(r29)
    stw r21, 0xc4(r29)
    stw r15, 0xcc(r29)
    stw r4, 0xd0(r29)
    stw r17, 0xd4(r29)
    stw r8, 0xd8(r29)
    stw r20, 0xdc(r29)
    stw r21, 0xe0(r29)
    stw r21, 0xe4(r29)
    stw r21, 0xe8(r29)
    stw r21, 0xec(r29)
    stw r15, 0xf4(r29)
    stw r7, 0xf8(r29)
    stw r17, 0xfc(r29)
    stw r6, 0x100(r29)
    stw r20, 0x104(r29)
    stw r21, 0x108(r29)
    stw r21, 0x10c(r29)
    stw r21, 0x110(r29)
    stw r21, 0x114(r29)
    stw r15, 0x11c(r29)
    stw r5, 0x120(r29)
    stw r17, 0x124(r29)
    stw r0, 0x128(r29)
    stw r20, 0x12c(r29)
    stw r21, 0x130(r29)
    stw r21, 0x134(r29)
    stw r21, 0x138(r29)
    stw r21, 0x13c(r29)
    stw r17, 0x144(r29)
    stw r16, 0x148(r29)
    stw r17, 0x14c(r29)
    stw r0, 0x150(r29)
    stw r20, 0x154(r29)
    stw r21, 0x158(r29)
    stw r21, 0x15c(r29)
    stw r21, 0x160(r29)
    stw r21, 0x164(r29)
    stw r15, 0x16c(r29)
    stw r12, 0x170(r29)
    stw r26, 0x174(r29)
    stw r0, 0x178(r29)
    stw r20, 0x17c(r29)
    stw r21, 0x180(r29)
    subi r6, r19, 0x61f0
    li r9, 0x2b
    li r8, 0x42
    li r7, 0x30
    li r5, 0x35
    li r4, 0x36
    stw r21, 0x184(r29)
    stw r21, 0x188(r29)
    stw r21, 0x18c(r29)
    stw r15, 0x194(r29)
    stw r9, 0x198(r29)
    stw r17, 0x19c(r29)
    stw r0, 0x1a0(r29)
    stw r20, 0x1a4(r29)
    stw r21, 0x1a8(r29)
    stw r21, 0x1ac(r29)
    stw r21, 0x1b0(r29)
    stw r21, 0x1b4(r29)
    stw r15, 0x1bc(r29)
    stw r8, 0x1c0(r29)
    stw r17, 0x1c4(r29)
    stw r0, 0x1c8(r29)
    stw r20, 0x1cc(r29)
    stw r21, 0x1d0(r29)
    stw r21, 0x1d4(r29)
    stw r21, 0x1d8(r29)
    stw r21, 0x1dc(r29)
    stw r15, 0x1e4(r29)
    stw r7, 0x1e8(r29)
    stw r17, 0x1ec(r29)
    stw r6, 0x1f0(r29)
    stw r20, 0x1f4(r29)
    stw r21, 0x1f8(r29)
    stw r21, 0x1fc(r29)
    stw r21, 0x200(r29)
    stw r21, 0x204(r29)
    stw r15, 0x20c(r29)
    stw r5, 0x210(r29)
    stw r17, 0x214(r29)
    stw r0, 0x218(r29)
    stw r20, 0x21c(r29)
    stw r21, 0x220(r29)
    stw r21, 0x224(r29)
    stw r21, 0x228(r29)
    stw r21, 0x22c(r29)
    stw r15, 0x234(r29)
    stw r4, 0x238(r29)
    stw r17, 0x23c(r29)
    stw r0, 0x240(r29)
    stw r20, 0x244(r29)
    stw r21, 0x248(r29)
    stw r21, 0x24c(r29)
    stw r21, 0x250(r29)
    stw r21, 0x254(r29)
    stw r15, 0x25c(r29)
    stw r12, 0x260(r29)
    addi r10, r28, 0x35d8
    addi r8, r28, 0x39c0
    addi r0, r28, 0x3e0c
    addi r5, r28, 0x4190
    subi r4, r31, 0x5af8
    li r11, 0x5
    li r9, 0x20
    li r7, 0x21
    li r6, 0x3f
    stw r0, 0x2e0(r29)
    li r0, 0x22
    stw r0, 0x300(r29)
    li r0, 0x23
    stw r11, 0x264(r29)
    stw r10, 0x268(r29)
    stw r20, 0x26c(r29)
    stw r21, 0x270(r29)
    stw r21, 0x274(r29)
    stw r21, 0x278(r29)
    stw r21, 0x27c(r29)
    stw r15, 0x284(r29)
    stw r9, 0x288(r29)
    stw r17, 0x28c(r29)
    stw r8, 0x290(r29)
    stw r20, 0x294(r29)
    stw r21, 0x298(r29)
    stw r21, 0x29c(r29)
    stw r21, 0x2a0(r29)
    stw r21, 0x2a4(r29)
    stw r15, 0x2ac(r29)
    stw r7, 0x2b0(r29)
    stw r17, 0x2b4(r29)
    stw r3, 0x2b8(r29)
    stw r20, 0x2bc(r29)
    stw r21, 0x2c0(r29)
    stw r21, 0x2c4(r29)
    stw r21, 0x2c8(r29)
    stw r21, 0x2cc(r29)
    stw r15, 0x2d4(r29)
    stw r6, 0x2d8(r29)
    stw r17, 0x2dc(r29)
    stw r20, 0x2e4(r29)
    stw r21, 0x2e8(r29)
    stw r21, 0x2ec(r29)
    stw r21, 0x2f0(r29)
    stw r21, 0x2f4(r29)
    stw r15, 0x2fc(r29)
    stw r17, 0x304(r29)
    stw r5, 0x308(r29)
    stw r20, 0x30c(r29)
    stw r21, 0x310(r29)
    stw r21, 0x314(r29)
    stw r21, 0x318(r29)
    stw r21, 0x31c(r29)
    stw r15, 0x324(r29)
    stw r0, 0x328(r29)
    stw r15, 0x32c(r29)
    stw r4, 0x330(r29)
    stw r20, 0x334(r29)
    stw r21, 0x338(r29)
    stw r21, 0x33c(r29)
    subi r7, r31, 0x4b58
    li r8, 0x24
    subi r5, r31, 0x4770
    subi r3, r31, 0x4388
    li r6, 0x25
    li r4, 0x27
    li r0, 0x3a
    stw r21, 0x340(r29)
    stw r21, 0x344(r29)
    stw r15, 0x34c(r29)
    stw r8, 0x350(r29)
    stw r17, 0x354(r29)
    stw r7, 0x358(r29)
    stw r20, 0x35c(r29)
    stw r21, 0x360(r29)
    stw r21, 0x364(r29)
    stw r21, 0x368(r29)
    stw r21, 0x36c(r29)
    stw r15, 0x374(r29)
    stw r8, 0x378(r29)
    stw r24, 0x37c(r29)
    stw r7, 0x380(r29)
    stw r20, 0x384(r29)
    stw r21, 0x388(r29)
    stw r21, 0x38c(r29)
    stw r21, 0x390(r29)
    stw r21, 0x394(r29)
    stw r15, 0x39c(r29)
    stw r6, 0x3a0(r29)
    stw r17, 0x3a4(r29)
    stw r5, 0x3a8(r29)
    stw r20, 0x3ac(r29)
    stw r21, 0x3b0(r29)
    stw r21, 0x3b4(r29)
    stw r21, 0x3b8(r29)
    stw r21, 0x3bc(r29)
    stw r15, 0x3c4(r29)
    stw r4, 0x3c8(r29)
    stw r17, 0x3cc(r29)
    stw r3, 0x3d0(r29)
    stw r20, 0x3d4(r29)
    stw r21, 0x3d8(r29)
    stw r21, 0x3dc(r29)
    stw r21, 0x3e0(r29)
    stw r21, 0x3e4(r29)
    stw r17, 0x3ec(r29)
    stw r26, 0x3f0(r29)
    stw r17, 0x3f4(r29)
    stw r21, 0x3f8(r29)
    stw r20, 0x3fc(r29)
    stw r21, 0x400(r29)
    stw r21, 0x404(r29)
    stw r21, 0x408(r29)
    stw r21, 0x40c(r29)
    stw r15, 0x414(r29)
    stw r0, 0x418(r29)
    stw r17, 0x41c(r29)
    lis r3, 0x3
    li r8, 0xe
    addi r7, r3, 0x18f8
    addi r9, r28, 0x1e68
    li r4, 0x10
    li r3, 0x11
    li r0, 0x8
    stw r0, 0x444(r29)
    li r0, 0xb
    stw r9, 0x420(r29)
    stw r20, 0x424(r29)
    stw r21, 0x428(r29)
    stw r21, 0x42c(r29)
    stw r21, 0x430(r29)
    stw r21, 0x434(r29)
    stw r15, 0x43c(r29)
    stw r8, 0x440(r29)
    stw r21, 0x448(r29)
    stw r20, 0x44c(r29)
    stw r21, 0x450(r29)
    stw r21, 0x454(r29)
    stw r21, 0x458(r29)
    stw r21, 0x45c(r29)
    stw r15, 0x464(r29)
    stw r8, 0x468(r29)
    stw r12, 0x46c(r29)
    stw r21, 0x470(r29)
    stw r20, 0x474(r29)
    stw r21, 0x478(r29)
    stw r21, 0x47c(r29)
    stw r21, 0x480(r29)
    stw r21, 0x484(r29)
    stw r15, 0x48c(r29)
    stw r8, 0x490(r29)
    stw r0, 0x494(r29)
    stw r21, 0x498(r29)
    stw r20, 0x49c(r29)
    stw r21, 0x4a0(r29)
    stw r21, 0x4a4(r29)
    stw r21, 0x4a8(r29)
    stw r21, 0x4ac(r29)
    stw r15, 0x4b4(r29)
    stw r4, 0x4b8(r29)
    stw r17, 0x4bc(r29)
    stw r7, 0x4c0(r29)
    stw r20, 0x4c4(r29)
    stw r21, 0x4c8(r29)
    stw r21, 0x4cc(r29)
    stw r21, 0x4d0(r29)
    stw r21, 0x4d4(r29)
    stw r15, 0x4dc(r29)
    stw r3, 0x4e0(r29)
    stw r17, 0x4e4(r29)
    stw r7, 0x4e8(r29)
    stw r20, 0x4ec(r29)
    stw r21, 0x4f0(r29)
    stw r21, 0x4f4(r29)
    stw r21, 0x4f8(r29)
    lis r3, 0x5
    addi r5, r28, 0x2250
    subi r6, r3, 0x5898
    addi r4, r28, 0x2638
    addi r14, r28, 0x2a20
    subi r3, r31, 0x5710
    li r0, 0x14
    stw r0, 0x508(r29)
    li r0, 0x15
    stw r0, 0x530(r29)
    li r0, 0x16
    stw r0, 0x558(r29)
    li r0, 0x17
    stw r0, 0x580(r29)
    li r0, 0x18
    stw r0, 0x5a8(r29)
    li r0, 0x19
    stw r21, 0x4fc(r29)
    stw r15, 0x504(r29)
    stw r17, 0x50c(r29)
    stw r6, 0x510(r29)
    stw r20, 0x514(r29)
    stw r21, 0x518(r29)
    stw r21, 0x51c(r29)
    stw r21, 0x520(r29)
    stw r21, 0x524(r29)
    stw r15, 0x52c(r29)
    stw r17, 0x534(r29)
    stw r9, 0x538(r29)
    stw r20, 0x53c(r29)
    stw r21, 0x540(r29)
    stw r21, 0x544(r29)
    stw r21, 0x548(r29)
    stw r21, 0x54c(r29)
    stw r15, 0x554(r29)
    stw r17, 0x55c(r29)
    stw r5, 0x560(r29)
    stw r20, 0x564(r29)
    stw r21, 0x568(r29)
    stw r21, 0x56c(r29)
    stw r21, 0x570(r29)
    stw r21, 0x574(r29)
    stw r15, 0x57c(r29)
    stw r17, 0x584(r29)
    stw r4, 0x588(r29)
    stw r20, 0x58c(r29)
    stw r21, 0x590(r29)
    stw r21, 0x594(r29)
    stw r21, 0x598(r29)
    stw r21, 0x59c(r29)
    stw r15, 0x5a4(r29)
    stw r15, 0x5ac(r29)
    stw r14, 0x5b0(r29)
    stw r20, 0x5b4(r29)
    stw r21, 0x5b8(r29)
    stw r21, 0x5bc(r29)
    stw r21, 0x5c0(r29)
    stw r21, 0x5c4(r29)
    stw r15, 0x5cc(r29)
    stw r0, 0x5d0(r29)
    stw r17, 0x5d4(r29)
    stw r3, 0x5d8(r29)
    addi r6, r28, 0x31f0
    li r9, 0x1e
    li r5, 0x1f
    li r4, 0x12
    li r0, 0x19
    stw r0, 0x5f8(r29)
    li r0, 0x1d
    stw r20, 0x5dc(r29)
    stw r21, 0x5e0(r29)
    stw r21, 0x5e4(r29)
    stw r21, 0x5e8(r29)
    stw r21, 0x5ec(r29)
    stw r15, 0x5f4(r29)
    stw r16, 0x5fc(r29)
    stw r3, 0x600(r29)
    stw r20, 0x604(r29)
    stw r21, 0x608(r29)
    stw r21, 0x60c(r29)
    stw r21, 0x610(r29)
    stw r21, 0x614(r29)
    stw r15, 0x61c(r29)
    stw r0, 0x620(r29)
    stw r15, 0x624(r29)
    stw r27, 0x628(r29)
    stw r20, 0x62c(r29)
    stw r21, 0x630(r29)
    stw r21, 0x634(r29)
    stw r21, 0x638(r29)
    stw r21, 0x63c(r29)
    stw r15, 0x644(r29)
    stw r9, 0x648(r29)
    stw r17, 0x64c(r29)
    stw r6, 0x650(r29)
    stw r20, 0x654(r29)
    stw r21, 0x658(r29)
    stw r21, 0x65c(r29)
    stw r21, 0x660(r29)
    stw r21, 0x664(r29)
    stw r15, 0x66c(r29)
    stw r5, 0x670(r29)
    stw r17, 0x674(r29)
    stw r10, 0x678(r29)
    stw r20, 0x67c(r29)
    stw r21, 0x680(r29)
    stw r21, 0x684(r29)
    stw r21, 0x688(r29)
    stw r21, 0x68c(r29)
    stw r15, 0x694(r29)
    stw r4, 0x698(r29)
    stw r17, 0x69c(r29)
    stw r7, 0x6a0(r29)
    stw r20, 0x6a4(r29)
    stw r21, 0x6a8(r29)
    stw r21, 0x6ac(r29)
    stw r21, 0x6b0(r29)
    stw r21, 0x6b4(r29)
    lis r3, 0x9
    subi r6, r31, 0x4f40
    addi r5, r3, 0x2f90
    li r4, 0x1a
    li r3, 0x3
    li r0, 0x13
    stw r15, 0x6bc(r29)
    stw r0, 0x6c0(r29)
    stw r17, 0x6c4(r29)
    stw r23, 0x6c8(r29)
    stw r20, 0x6cc(r29)
    stw r21, 0x6d0(r29)
    stw r21, 0x6d4(r29)
    stw r21, 0x6d8(r29)
    stw r21, 0x6dc(r29)
    stw r15, 0x6e4(r29)
    stw r4, 0x6e8(r29)
    stw r17, 0x6ec(r29)
    stw r6, 0x6f0(r29)
    stw r20, 0x6f4(r29)
    stw r21, 0x6f8(r29)
    stw r21, 0x6fc(r29)
    stw r21, 0x700(r29)
    stw r21, 0x704(r29)
    stw r17, 0x70c(r29)
    stw r17, 0x710(r29)
    stw r17, 0x714(r29)
    stw r21, 0x718(r29)
    stw r20, 0x71c(r29)
    stw r21, 0x720(r29)
    stw r21, 0x724(r29)
    stw r21, 0x728(r29)
    stw r21, 0x72c(r29)
    stw r17, 0x734(r29)
    stw r15, 0x738(r29)
    stw r17, 0x73c(r29)
    stw r21, 0x740(r29)
    stw r20, 0x744(r29)
    stw r21, 0x748(r29)
    stw r21, 0x74c(r29)
    stw r21, 0x750(r29)
    stw r21, 0x754(r29)
    stw r17, 0x75c(r29)
    stw r3, 0x760(r29)
    stw r17, 0x764(r29)
    stw r21, 0x768(r29)
    stw r20, 0x76c(r29)
    stw r21, 0x770(r29)
    stw r21, 0x774(r29)
    stw r21, 0x778(r29)
    stw r21, 0x77c(r29)
    stw r15, 0x784(r29)
    stw r17, 0x788(r29)
    stw r17, 0x78c(r29)
    stw r5, 0x790(r29)
    stw r20, 0x794(r29)
    lis r5, 0x3
    subi r0, r19, 0x5250
    addi r5, r5, 0x1128
    stw r21, 0x798(r29)
    stw r21, 0x79c(r29)
    stw r21, 0x7a0(r29)
    stw r21, 0x7a4(r29)
    stw r15, 0x7ac(r29)
    stw r15, 0x7b0(r29)
    stw r17, 0x7b4(r29)
    stw r5, 0x7b8(r29)
    stw r20, 0x7bc(r29)
    stw r21, 0x7c0(r29)
    stw r21, 0x7c4(r29)
    stw r21, 0x7c8(r29)
    stw r21, 0x7cc(r29)
    stw r15, 0x7d4(r29)
    stw r3, 0x7d8(r29)
    stw r17, 0x7dc(r29)
    stw r25, 0x7e0(r29)
    stw r20, 0x7e4(r29)
    stw r21, 0x7e8(r29)
    stw r21, 0x7ec(r29)
    stw r21, 0x7f0(r29)
    stw r21, 0x7f4(r29)
    stw r15, 0x7fc(r29)
    stw r16, 0x800(r29)
    stw r17, 0x804(r29)
    stw r18, 0x808(r29)
    stw r20, 0x80c(r29)
    stw r21, 0x810(r29)
    stw r21, 0x814(r29)
    stw r21, 0x818(r29)
    stw r21, 0x81c(r29)
    stw r15, 0x824(r29)
    stw r11, 0x828(r29)
    stw r17, 0x82c(r29)
    stw r30, 0x830(r29)
    stw r20, 0x834(r29)
    stw r21, 0x838(r29)
    stw r21, 0x83c(r29)
    stw r21, 0x840(r29)
    stw r21, 0x844(r29)
    stw r15, 0x84c(r29)
    stw r26, 0x850(r29)
    stw r17, 0x854(r29)
    stw r0, 0x858(r29)
    stw r20, 0x85c(r29)
    stw r21, 0x860(r29)
    stw r21, 0x864(r29)
    stw r21, 0x868(r29)
    stw r21, 0x86c(r29)
    stw r15, 0x874(r29)
    lis r5, 0x3
    subi r10, r19, 0x6da8
    addi r6, r5, 0x1ce0
    subi r9, r19, 0x65d8
    li r0, 0xa
    li r7, 0xc
    li r5, 0x8
    stw r5, 0x8a0(r29)
    li r5, 0xb
    stw r24, 0x878(r29)
    stw r17, 0x87c(r29)
    stw r25, 0x880(r29)
    stw r20, 0x884(r29)
    stw r21, 0x888(r29)
    stw r21, 0x88c(r29)
    stw r21, 0x890(r29)
    stw r21, 0x894(r29)
    stw r15, 0x89c(r29)
    stw r17, 0x8a4(r29)
    stw r22, 0x8a8(r29)
    stw r20, 0x8ac(r29)
    stw r21, 0x8b0(r29)
    stw r21, 0x8b4(r29)
    stw r21, 0x8b8(r29)
    stw r21, 0x8bc(r29)
    stw r15, 0x8c4(r29)
    stw r12, 0x8c8(r29)
    stw r17, 0x8cc(r29)
    stw r10, 0x8d0(r29)
    stw r20, 0x8d4(r29)
    stw r21, 0x8d8(r29)
    stw r21, 0x8dc(r29)
    stw r21, 0x8e0(r29)
    stw r21, 0x8e4(r29)
    stw r15, 0x8ec(r29)
    stw r0, 0x8f0(r29)
    stw r17, 0x8f4(r29)
    stw r9, 0x8f8(r29)
    stw r20, 0x8fc(r29)
    stw r21, 0x900(r29)
    stw r21, 0x904(r29)
    stw r21, 0x908(r29)
    stw r21, 0x90c(r29)
    stw r15, 0x914(r29)
    stw r5, 0x918(r29)
    stw r17, 0x91c(r29)
    stw r25, 0x920(r29)
    stw r20, 0x924(r29)
    stw r21, 0x928(r29)
    stw r21, 0x92c(r29)
    stw r21, 0x930(r29)
    stw r21, 0x934(r29)
    stw r15, 0x93c(r29)
    stw r7, 0x940(r29)
    stw r17, 0x944(r29)
    stw r6, 0x948(r29)
    stw r20, 0x94c(r29)
    stw r21, 0x950(r29)
    lis r5, 0x5
    subi r6, r31, 0x5328
    subi r5, r5, 0x6838
    li r7, 0xd
    stw r21, 0x954(r29)
    stw r21, 0x958(r29)
    stw r21, 0x95c(r29)
    stw r15, 0x964(r29)
    stw r7, 0x968(r29)
    stw r17, 0x96c(r29)
    stw r6, 0x970(r29)
    stw r20, 0x974(r29)
    stw r21, 0x978(r29)
    stw r21, 0x97c(r29)
    stw r21, 0x980(r29)
    stw r21, 0x984(r29)
    stw r15, 0x98c(r29)
    stw r8, 0x990(r29)
    stw r17, 0x994(r29)
    stw r5, 0x998(r29)
    stw r20, 0x99c(r29)
    stw r21, 0x9a0(r29)
    stw r21, 0x9a4(r29)
    stw r21, 0x9a8(r29)
    stw r21, 0x9ac(r29)
    stw r15, 0x9b4(r29)
    stw r8, 0x9b8(r29)
    stw r15, 0x9bc(r29)
    stw r5, 0x9c0(r29)
    stw r20, 0x9c4(r29)
    stw r21, 0x9c8(r29)
    stw r21, 0x9cc(r29)
    stw r21, 0x9d0(r29)
    stw r21, 0x9d4(r29)
    stw r15, 0x9dc(r29)
    stw r8, 0x9e0(r29)
    stw r3, 0x9e4(r29)
    stw r5, 0x9e8(r29)
    stw r20, 0x9ec(r29)
    stw r21, 0x9f0(r29)
    stw r21, 0x9f4(r29)
    stw r21, 0x9f8(r29)
    stw r21, 0x9fc(r29)
    stw r15, 0xa04(r29)
    stw r8, 0xa08(r29)
    stw r16, 0xa0c(r29)
    stw r5, 0xa10(r29)
    stw r20, 0xa14(r29)
    stw r21, 0xa18(r29)
    stw r21, 0xa1c(r29)
    stw r21, 0xa20(r29)
    stw r21, 0xa24(r29)
    stw r15, 0xa2c(r29)
    stw r8, 0xa30(r29)
    lis r9, lbl_807964C0@ha
    li r3, 0xf
    addi r9, r9, lbl_807964C0@l
    li r7, 0x3e7
    stw r11, 0xa34(r29)
    stw r5, 0xa38(r29)
    stw r20, 0xa3c(r29)
    stw r21, 0xa40(r29)
    stw r21, 0xa44(r29)
    stw r21, 0xa48(r29)
    stw r21, 0xa4c(r29)
    stw r15, 0xa54(r29)
    stw r8, 0xa58(r29)
    stw r26, 0xa5c(r29)
    stw r5, 0xa60(r29)
    stw r20, 0xa64(r29)
    stw r21, 0xa68(r29)
    stw r21, 0xa6c(r29)
    stw r21, 0xa70(r29)
    stw r21, 0xa74(r29)
    stw r15, 0xa7c(r29)
    stw r8, 0xa80(r29)
    stw r24, 0xa84(r29)
    stw r5, 0xa88(r29)
    stw r20, 0xa8c(r29)
    stw r21, 0xa90(r29)
    stw r21, 0xa94(r29)
    stw r21, 0xa98(r29)
    stw r21, 0xa9c(r29)
    stw r15, 0xaa4(r29)
    stw r3, 0xaa8(r29)
    stw r17, 0xaac(r29)
    stw r21, 0xab0(r29)
    stw r20, 0xab4(r29)
    stw r21, 0xab8(r29)
    stw r21, 0xabc(r29)
    stw r21, 0xac0(r29)
    stw r21, 0xac4(r29)
    stw r15, 0xacc(r29)
    stw r17, 0xad0(r29)
    stw r17, 0xad4(r29)
    stw r21, 0xad8(r29)
    stw r20, 0xadc(r29)
    stw r21, 0xae0(r29)
    stw r21, 0xae4(r29)
    stw r21, 0xae8(r29)
    stw r21, 0xaec(r29)
    stw r17, 0xaf4(r29)
    stw r17, 0xaf8(r29)
    stw r17, 0xafc(r29)
    stw r21, 0xb00(r29)
    stw r20, 0xb04(r29)
    stw r21, 0xb08(r29)
    stw r21, 0xb0c(r29)
    stw r21, 0xb10(r29)
    stw r21, 0xb14(r29)
    stw r15, 0x4(r9)
    stw r7, 0x8(r9)
    stw r17, 0xc(r9)
    stw r21, 0x10(r9)
    stw r20, 0x14(r9)
    stw r21, 0x18(r9)
    stw r21, 0x1c(r9)
    stw r21, 0x20(r9)
    stw r21, 0x24(r9)
    stw r15, 0x2c(r9)
    stw r7, 0x30(r9)
    stw r15, 0x34(r9)
    stw r21, 0x38(r9)
    stw r20, 0x3c(r9)
    stw r21, 0x40(r9)
    stw r21, 0x44(r9)
    stw r21, 0x48(r9)
    stw r21, 0x4c(r9)
    stw r15, 0x54(r9)
    stw r7, 0x58(r9)
    stw r16, 0x5c(r9)
    stw r21, 0x60(r9)
    stw r20, 0x64(r9)
    stw r21, 0x68(r9)
    stw r21, 0x6c(r9)
    li r6, 0x60
    li r5, 0x61
    li r3, 0x62
    stw r3, 0xfc(r9)
    li r3, 0x14
    stw r3, 0x124(r9)
    li r3, 0x18
    stw r3, 0x14c(r9)
    li r3, 0x15
    stw r3, 0x174(r9)
    li r3, 0x1b
    stw r21, 0x70(r9)
    stw r21, 0x74(r9)
    stw r15, 0x7c(r9)
    stw r7, 0x80(r9)
    stw r11, 0x84(r9)
    stw r21, 0x88(r9)
    stw r20, 0x8c(r9)
    stw r21, 0x90(r9)
    stw r21, 0x94(r9)
    stw r21, 0x98(r9)
    stw r21, 0x9c(r9)
    stw r15, 0xa4(r9)
    stw r7, 0xa8(r9)
    stw r6, 0xac(r9)
    stw r21, 0xb0(r9)
    stw r20, 0xb4(r9)
    stw r21, 0xb8(r9)
    stw r21, 0xbc(r9)
    stw r21, 0xc0(r9)
    stw r21, 0xc4(r9)
    stw r15, 0xcc(r9)
    stw r7, 0xd0(r9)
    stw r5, 0xd4(r9)
    stw r21, 0xd8(r9)
    stw r20, 0xdc(r9)
    stw r21, 0xe0(r9)
    stw r21, 0xe4(r9)
    stw r21, 0xe8(r9)
    stw r21, 0xec(r9)
    stw r15, 0xf4(r9)
    stw r7, 0xf8(r9)
    stw r21, 0x100(r9)
    stw r20, 0x104(r9)
    stw r21, 0x108(r9)
    stw r21, 0x10c(r9)
    stw r21, 0x110(r9)
    stw r21, 0x114(r9)
    stw r15, 0x11c(r9)
    stw r7, 0x120(r9)
    stw r21, 0x128(r9)
    stw r20, 0x12c(r9)
    stw r21, 0x130(r9)
    stw r21, 0x134(r9)
    stw r21, 0x138(r9)
    stw r21, 0x13c(r9)
    stw r15, 0x144(r9)
    stw r7, 0x148(r9)
    stw r21, 0x150(r9)
    stw r20, 0x154(r9)
    stw r21, 0x158(r9)
    stw r21, 0x15c(r9)
    stw r21, 0x160(r9)
    stw r21, 0x164(r9)
    stw r15, 0x16c(r9)
    stw r7, 0x170(r9)
    stw r21, 0x178(r9)
    stw r20, 0x17c(r9)
    stw r21, 0x180(r9)
    stw r21, 0x184(r9)
    stw r21, 0x188(r9)
    stw r21, 0x18c(r9)
    stw r15, 0x194(r9)
    stw r7, 0x198(r9)
    stw r4, 0x19c(r9)
    stw r21, 0x1a0(r9)
    stw r20, 0x1a4(r9)
    stw r21, 0x1a8(r9)
    stw r21, 0x1ac(r9)
    stw r21, 0x1b0(r9)
    stw r21, 0x1b4(r9)
    stw r15, 0x1bc(r9)
    stw r7, 0x1c0(r9)
    stw r3, 0x1c4(r9)
    stw r21, 0x1c8(r9)
    stw r20, 0x1cc(r9)
    stw r21, 0x1d0(r9)
    stw r21, 0x1d4(r9)
    stw r21, 0x1d8(r9)
    stw r21, 0x1dc(r9)
    stw r15, 0x1e4(r9)
    stw r7, 0x1e8(r9)
    stw r0, 0x1ec(r9)
    stw r21, 0x1f0(r9)
    stw r20, 0x1f4(r9)
    stw r21, 0x1f8(r9)
    stw r21, 0x1fc(r9)
    stw r21, 0x200(r9)
    stw r21, 0x204(r9)
    stw r17, 0x20c(r9)
    stw r17, 0x210(r9)
    stw r17, 0x214(r9)
    stw r21, 0x218(r9)
    stw r20, 0x21c(r9)
    stw r21, 0x220(r9)
    stw r21, 0x224(r9)
    stw r21, 0x228(r9)
    stw r21, 0x22c(r9)
    lmw r14, 0x8(r1)
    addi r1, r1, 0x50
    blr
}

asm void fn_80575F10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x98(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80575F10_000019D8
    lwz r3, 0x1cc(r3)
    b lbl_fn_80575F10_000019F8
lbl_fn_80575F10_000019D8:
    addi r3, r3, 0x1c4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80575F10_000019F0
    li r3, 0x0
    b lbl_fn_80575F10_000019F8
lbl_fn_80575F10_000019F0:
    addi r3, r31, 0x1c4
    bl fn_8047059C
lbl_fn_80575F10_000019F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
