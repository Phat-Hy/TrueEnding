#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D9E8(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8009EE30(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800F52F0(void);
extern void fn_80116EB8(void);
extern void fn_8012CE4C(void);
extern void fn_801346C8(void);
extern void fn_80134800(void);
extern void fn_801D082C(void);
extern void fn_801D80A0(void);
extern void fn_801D80B4(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801FECE0(void);
extern void fn_80201E78(void);
extern void fn_80202118(void);
extern void fn_80202A6C(void);
extern void fn_80202D00(void);
extern void fn_8020924C(void);
extern void fn_8020A81C(void);
extern void fn_80219544(void);
extern void fn_8021AF50(void);
extern void fn_80372574(void);
extern void fn_803CF734(void);
extern void fn_803D6EF8(void);
extern void fn_803D70B4(void);
extern void fn_803DD160(void);
extern void fn_804A3C24(void);
extern void fn_804A4AEC(void);
extern void fn_804A5E40(void);
extern void fn_8050F940(void);
extern void fn_8050FA80(void);
extern void fn_8050FB3C(void);
extern void fn_8050FC8C(void);
extern void fn_8050FD24(void);
extern void fn_8050FD3C(void);
extern void fn_805113EC(void);
extern void fn_805114D8(void);
extern void fn_805115D4(void);
extern void fn_805118B8(void);
extern void fn_80511DA0(void);
extern void fn_805282AC(void);
extern void fn_805282BC(void);
extern void fn_805282D0(void);
extern void fn_80528314(void);
extern void fn_80528458(void);
extern void fn_80528578(void);
extern void fn_805288C0(void);
extern void fn_805289AC(void);
extern void fn_80528A94(void);
extern void fn_80528BF4(void);
extern void fn_8054A340(void);
extern void fn_805BA358(void);
extern void fn_80682428(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807935E0[];
extern u8 lbl_8075C6A8[];
extern u8 lbl_8075C6C4[];
extern u8 lbl_8075CCF0[];
extern u8 lbl_8075CD60[];
extern u8 lbl_8075CE98[];
extern u8 lbl_8075CED4[];
extern u8 lbl_80793698[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C9110[];

/* Small data declarations */
extern u32 lbl_8087E4A0;
extern u32 lbl_8087F580;
extern u32 lbl_808879F0;
extern u32 lbl_808879F8;
extern u32 lbl_80887A00;
extern u32 lbl_80887A5C;
extern u32 lbl_80887A60;
extern u32 lbl_80887A64;
extern u32 lbl_80887A68;
extern u32 lbl_80887A6C;
extern u32 lbl_80887A70;
extern u32 lbl_80887A74;
extern u32 lbl_80887A78;

/* Function declarations */
void fn_8052624C(void);
void fn_8052635C(void);
void fn_80526660(void);
void fn_80526694(void);
void fn_805266C0(void);
void fn_805268CC(void);
void fn_80526930(void);
void fn_80526BC0(void);
void fn_80526C18(void);
void fn_80526C20(void);
void fn_80526CC0(void);
void fn_80526D98(void);
void fn_80527404(void);
void fn_80527414(void);
void fn_805275EC(void);
void fn_8052770C(void);
void fn_805277C4(void);
void fn_80527920(void);
void fn_8052793C(void);

asm void fn_8052624C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lis r4, lbl_8075C6C4@ha
    lfs f31, lbl_808879F0
    addi r4, r4, lbl_8075C6C4@l
    mr r27, r3
    addi r30, r4, 0x397
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_8052624C_00000088
lbl_fn_8052624C_0000003C:
    lwz r3, 0x50(r27)
    lwzx r3, r3, r29
    cmpwi r3, 0x0
    beq lbl_fn_8052624C_00000080
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8052624C_00000080
    lwz r3, 0x50(r27)
    lwzx r3, r3, r29
    bl fn_80202118
    mr r31, r3
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_8052624C_00000080:
    addi r29, r29, 0x40
    addi r28, r28, 0x1
lbl_fn_8052624C_00000088:
    lwz r0, 0x4c(r27)
    cmpw r28, r0
    blt lbl_fn_8052624C_0000003C
    lis r3, lbl_8075C6C4@ha
    li r28, 0x0
    addi r3, r3, lbl_8075C6C4@l
    addi r30, r3, 0x397
lbl_fn_8052624C_000000A4:
    lwz r3, 0xf0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8052624C_000000E0
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8052624C_000000E0
    lwz r3, 0xf0(r27)
    bl fn_80202118
    mr r31, r3
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_8052624C_000000E0:
    addi r28, r28, 0x1
    addi r27, r27, 0xc
    cmpwi r28, 0x6
    blt lbl_fn_8052624C_000000A4
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8052635C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    mr r28, r3
    lwz r3, 0x18(r3)
    mr r29, r4
    mr r26, r5
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8052635C_000003FC
    cmpwi r26, 0x0
    beq lbl_fn_8052635C_000003FC
    mr r3, r26
    bl fn_80202118
    cmpwi r3, 0x0
    bne lbl_fn_8052635C_00000160
    b lbl_fn_8052635C_000003FC
lbl_fn_8052635C_00000160:
    lis r27, lbl_8075C6C4@ha
    lwz r5, 0x4(r28)
    addi r27, r27, lbl_8075C6C4@l
    addi r3, r1, 0x20
    addi r4, r27, 0x311
    crclr 6
    bl sprintf
    mr r3, r26
    bl fn_80202118
    mr r31, r3
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801F4E8C
    mr r3, r30
    addi r4, r27, 0x2a5
    addi r5, r1, 0x8
    bl fn_801F6E78
    lwz r3, 0x0(r28)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    bgt lbl_fn_8052635C_0000021C
    lfs f0, lbl_808879F0
    cmpwi r29, 0x0
    stfs f0, 0x54(r30)
    beq lbl_fn_8052635C_000001D8
    stfs f0, 0x50(r30)
    b lbl_fn_8052635C_000001E0
lbl_fn_8052635C_000001D8:
    lfs f0, lbl_808879F8
    stfs f0, 0x50(r30)
lbl_fn_8052635C_000001E0:
    lwz r3, 0x8(r28)
    lis r0, 0x4330
    lis r4, lbl_8075C6A8@ha
    lis r5, lbl_8075C6C4@ha
    xoris r3, r3, 0x8000
    stw r3, 0x44(r1)
    lfd f1, lbl_8075C6A8@l(r4)
    addi r5, r5, lbl_8075C6C4@l
    stw r0, 0x40(r1)
    mr r3, r30
    addi r4, r5, 0x355
    lfd f0, 0x40(r1)
    fsubs f1, f0, f1
    bl fn_801F6C80
    b lbl_fn_8052635C_000003FC
lbl_fn_8052635C_0000021C:
    lwz r26, 0x8(r28)
    lwz r3, 0x18(r28)
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8052635C_00000360
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8052635C_00000360
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8052635C_00000290
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_8052635C_00000290
    lwz r3, 0x0(r28)
    subi r0, r3, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_8052635C_00000290
    lwz r3, 0x18(r28)
    bl fn_80202D00
    lfs f1, 0x54(r3)
    lfs f0, lbl_80887A00
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    blt lbl_fn_8052635C_00000290
    li r0, 0x1
    b lbl_fn_8052635C_00000294
lbl_fn_8052635C_00000290:
    li r0, 0x0
lbl_fn_8052635C_00000294:
    cmpwi r0, 0x0
    beq lbl_fn_8052635C_00000308
    lfs f1, 0x54(r31)
    lfs f0, lbl_808879F0
    fcmpo cr0, f1, f0
    ble lbl_fn_8052635C_00000308
    subic. r0, r26, 0x1
    blt lbl_fn_8052635C_000002DC
    lwz r3, 0x1c(r28)
    slwi r0, r0, 3
    add r3, r3, r0
    bl fn_80116EB8
    lis r4, lbl_8075C6C4@ha
    mr r5, r3
    addi r4, r4, lbl_8075C6C4@l
    mr r3, r31
    addi r4, r4, 0x27d
    bl fn_801F837C
lbl_fn_8052635C_000002DC:
    lwz r3, 0x1c(r28)
    slwi r0, r26, 3
    add r3, r3, r0
    bl fn_80116EB8
    lis r4, lbl_8075C6C4@ha
    mr r5, r3
    addi r4, r4, lbl_8075C6C4@l
    mr r3, r31
    addi r4, r4, 0x289
    bl fn_801F837C
    b lbl_fn_8052635C_00000360
lbl_fn_8052635C_00000308:
    lwz r3, 0x1c(r28)
    slwi r0, r26, 3
    add r3, r3, r0
    bl fn_80116EB8
    lis r27, lbl_8075C6C4@ha
    mr r5, r3
    addi r27, r27, lbl_8075C6C4@l
    mr r3, r31
    addi r4, r27, 0x27d
    bl fn_801F837C
    lwz r0, 0xc(r28)
    addi r4, r26, 0x1
    cmpw r4, r0
    bge lbl_fn_8052635C_00000360
    lwz r3, 0x1c(r28)
    slwi r0, r4, 3
    add r3, r3, r0
    bl fn_80116EB8
    mr r5, r3
    mr r3, r31
    addi r4, r27, 0x289
    bl fn_801F837C
lbl_fn_8052635C_00000360:
    cmpwi r30, 0x0
    beq lbl_fn_8052635C_000003FC
    lwz r0, 0x1c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8052635C_000003FC
    lis r31, lbl_8075C6C4@ha
    lfs f1, lbl_808879F0
    addi r31, r31, lbl_8075C6C4@l
    mr r3, r30
    addi r4, r31, 0x347
    bl fn_801F6C80
    lfs f1, lbl_808879F0
    mr r3, r30
    addi r4, r31, 0x34e
    bl fn_801F6C80
    cmpwi r29, 0x0
    beq lbl_fn_8052635C_000003D0
    lwz r0, 0x10(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8052635C_000003D0
    lfs f1, lbl_808879F8
    mr r3, r30
    addi r4, r31, 0x34e
    bl fn_801F6C80
    lfs f1, lbl_808879F8
    mr r3, r30
    addi r4, r31, 0x347
    bl fn_801F6C80
lbl_fn_8052635C_000003D0:
    lwz r0, 0x14(r28)
    lis r4, lbl_8075C6C4@ha
    addi r4, r4, lbl_8075C6C4@l
    mr r3, r30
    cmpwi r0, 0x0
    addi r4, r4, 0x39f
    beq lbl_fn_8052635C_000003F4
    lfs f1, lbl_808879F8
    b lbl_fn_8052635C_000003F8
lbl_fn_8052635C_000003F4:
    lfs f1, lbl_808879F0
lbl_fn_8052635C_000003F8:
    bl fn_801F6C80
lbl_fn_8052635C_000003FC:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80526660(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_80526660_00000438
    bl fn_80084C24
lbl_fn_80526660_00000438:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80526694(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r4, 0x18(r3)
    stw r4, 0x1c(r3)
    blr
}

asm void fn_805266C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r5, 0xb
    stw r0, 0x14(r1)
    slwi r0, r4, 5
    stw r31, 0xc(r1)
    lwz r3, 0x8(r3)
    stwx r5, r3, r0
    add r31, r3, r0
    stw r4, 0x4(r31)
    bgt lbl_fn_805266C0_0000066C
    lis r3, jumptable_807935E0@ha
    slwi r0, r5, 2
    addi r3, r3, jumptable_807935E0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x3a4
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x3ca
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x3f0
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x416
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x43c
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x462
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x488
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x4ae
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x4d4
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x4fa
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_805266C0_0000066C
    lis r4, lbl_8075C6C4@ha
    mr r3, r6
    addi r4, r4, lbl_8075C6C4@l
    li r5, 0x0
    addi r4, r4, 0x517
    bl fn_80202A6C
    stw r3, 0x18(r31)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_805266C0_0000066C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805268CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805268CC_000006CC
    lis r5, lbl_8075CED4@ha
    li r3, 0x600
    addi r5, r5, lbl_8075CED4@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805268CC_000006D0
    mr r4, r31
    bl fn_80526930
    b lbl_fn_805268CC_000006D0
lbl_fn_805268CC_000006CC:
    li r3, 0x0
lbl_fn_805268CC_000006D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80526930(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r31, r3
    bl fn_8050F940
    addi r6, r31, 0xdc
    addi r3, r31, 0x10c
    lis r5, lbl_80793698@ha
    li r4, 0x0
    addi r5, r5, lbl_80793698@l
    cmplw r6, r3
    stw r5, 0x0(r31)
    stw r4, 0xd4(r31)
    stw r4, 0xd8(r31)
    bge lbl_fn_80526930_0000074C
    addi r0, r3, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_80526930_0000074C
lbl_fn_80526930_0000073C:
    stw r4, 0x0(r6)
    stw r4, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_80526930_0000073C
lbl_fn_80526930_0000074C:
    addi r5, r31, 0x1cc
    addi r3, r31, 0x5d4
    lfs f0, lbl_80887A60
    cmplw r5, r3
    li r4, 0x0
    stfs f0, 0x110(r31)
    stw r4, 0x118(r31)
    stw r4, 0x11c(r31)
    stw r4, 0x128(r31)
    bge lbl_fn_80526930_00000798
    addi r3, r3, 0xab
    li r0, 0xac
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80526930_00000798
lbl_fn_80526930_0000078C:
    stw r4, 0x8(r5)
    addi r5, r5, 0xac
    bdnz lbl_fn_80526930_0000078C
lbl_fn_80526930_00000798:
    lwz r0, 0x98(r31)
    lis r3, lbl_8075CED4@ha
    lfs f1, lbl_80887A60
    addi r3, r3, lbl_8075CED4@l
    srwi. r0, r0, 31
    lfs f0, lbl_80887A64
    li r0, 0x0
    stfs f1, 0x5d4(r31)
    addi r30, r3, 0x1
    stw r0, 0x5d8(r31)
    stfs f1, 0x5e4(r31)
    stfs f1, 0x5e8(r31)
    stfs f1, 0x5ec(r31)
    stfs f0, 0x5f0(r31)
    stfs f1, 0x5f4(r31)
    stfs f1, 0x5f8(r31)
    bne lbl_fn_80526930_000007E8
    lbz r0, 0x98(r31)
    clrlwi r29, r0, 25
    b lbl_fn_80526930_000007EC
lbl_fn_80526930_000007E8:
    lwz r29, 0x9c(r31)
lbl_fn_80526930_000007EC:
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r29
    mr r6, r30
    addi r3, r31, 0x98
    add r7, r30, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    li r0, 0x8
    li r3, 0x0
    cmpwi r0, 0x0
    stw r3, 0x7c(r31)
    stw r0, 0x4c(r31)
    ble lbl_fn_80526930_000008B4
    lis r5, lbl_8075CED4@ha
    li r3, 0x210
    addi r5, r5, lbl_8075CED4@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801D082C@ha
    li r5, 0x0
    addi r4, r4, fn_801D082C@l
    li r6, 0x40
    li r7, 0x8
    bl fn_80695720
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    stw r3, 0x50(r31)
    beq lbl_fn_80526930_00000880
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80526930_00000880:
    lis r6, lbl_8075CCF0@ha
    lwz r4, 0x4c(r31)
    lwz r5, 0x50(r31)
    mr r3, r31
    addi r6, r6, lbl_8075CCF0@l
    li r7, 0x0
    li r8, 0x0
    bl fn_8050FB3C
    lwz r4, 0x4c(r31)
    mr r3, r31
    lwz r5, 0x50(r31)
    li r6, 0x1
    bl fn_8050FC8C
lbl_fn_80526930_000008B4:
    lwz r12, 0x5c(r31)
    lis r4, lbl_8075CED4@ha
    addi r30, r4, lbl_8075CED4@l
    addi r3, r31, 0x5c
    lwz r12, 0xc(r12)
    addi r4, r30, 0xe
    mtctr r12
    bctrl
    li r27, 0x0
    li r29, 0x0
lbl_fn_80526930_000008DC:
    mr r3, r31
    add r28, r31, r29
    addi r4, r30, 0x2b
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xd4(r28)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x49
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xd8(r28)
    li r4, 0x1
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r29, r29, 0x8
    cmpwi r27, 0x7
    blt lbl_fn_80526930_000008DC
    lis r4, lbl_8075CED4@ha
    mr r3, r31
    addi r4, r4, lbl_8075CED4@l
    li r5, 0x0
    addi r4, r4, 0x67
    bl fn_801F3FF8
    stw r3, 0x10c(r31)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x0
    stw r0, 0x5dc(r31)
    addi r11, r1, 0x30
    mr r3, r31
    stw r0, 0x5e0(r31)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80526BC0(void)
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
    beq lbl_fn_80526BC0_000009B0
    li r4, 0x0
    bl fn_8050FA80
    cmpwi r31, 0x0
    ble lbl_fn_80526BC0_000009B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80526BC0_000009B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80526C18(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80526C20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8075CCF0@ha
    lwz r8, lbl_80887A5C
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8075CCF0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x50(r3)
    lwz r7, 0x4c(r3)
    bl fn_8050FD3C
    lfs f0, lbl_80887A6C
    mr r31, r29
    stfs f0, 0x58(r29)
    li r30, 0x0
lbl_fn_80526C20_00000A18:
    lwz r3, 0xd4(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xd8(r31)
    li r4, 0x0
    bl fn_800D246C
    addi r30, r30, 0x1
    addi r31, r31, 0x8
    cmpwi r30, 0x7
    blt lbl_fn_80526C20_00000A18
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80526CC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lfs f1, 0x5d4(r31)
    lfs f2, lbl_80887A60
    fcmpo cr0, f1, f2
    ble lbl_fn_80526CC0_00000AC8
    lfs f0, lbl_80887A70
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_80526CC0_00000ABC
    b lbl_fn_80526CC0_00000AC0
lbl_fn_80526CC0_00000ABC:
    fmr f2, f0
lbl_fn_80526CC0_00000AC0:
    stfs f2, 0x5d4(r31)
    b lbl_fn_80526CC0_00000AE8
lbl_fn_80526CC0_00000AC8:
    bge lbl_fn_80526CC0_00000AE8
    lfs f0, lbl_80887A70
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80526CC0_00000AE0
    b lbl_fn_80526CC0_00000AE4
lbl_fn_80526CC0_00000AE0:
    fmr f2, f0
lbl_fn_80526CC0_00000AE4:
    stfs f2, 0x5d4(r31)
lbl_fn_80526CC0_00000AE8:
    lfs f1, 0x110(r31)
    lfs f2, lbl_80887A60
    fcmpo cr0, f1, f2
    ble lbl_fn_80526CC0_00000B18
    lfs f0, lbl_80887A74
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_80526CC0_00000B0C
    b lbl_fn_80526CC0_00000B10
lbl_fn_80526CC0_00000B0C:
    fmr f2, f0
lbl_fn_80526CC0_00000B10:
    stfs f2, 0x110(r31)
    b lbl_fn_80526CC0_00000B38
lbl_fn_80526CC0_00000B18:
    bge lbl_fn_80526CC0_00000B38
    lfs f0, lbl_80887A74
    fadds f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80526CC0_00000B30
    b lbl_fn_80526CC0_00000B34
lbl_fn_80526CC0_00000B30:
    fmr f2, f0
lbl_fn_80526CC0_00000B34:
    stfs f2, 0x110(r31)
lbl_fn_80526CC0_00000B38:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80526D98(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x120
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    bl _savegpr_23
    mr r29, r3
    li r30, 0x0
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_80526D98_00000BB0
    lwz r3, 0x48(r29)
    lwz r0, 0x11f8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80526D98_00000BB0
    li r30, 0x1
lbl_fn_80526D98_00000BB0:
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r30
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r4, 0x48(r29)
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    lwz r0, 0x464(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80526D98_00000BE8
    lis r3, lbl_807C9110@ha
    addi r3, r3, lbl_807C9110@l
lbl_fn_80526D98_00000BE8:
    addi r4, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lis r26, lbl_8075CD60@ha
    lfs f2, 0x8(r3)
    lis r27, lbl_8075CED4@ha
    lfs f0, 0x54(r1)
    addi r3, r1, 0x2c
    lfs f9, 0x5e8(r29)
    addi r25, r1, 0xc8
    lfs f10, 0x5ec(r29)
    addi r26, r26, lbl_8075CD60@l
    fsubs f30, f0, f9
    lfs f0, 0x50(r1)
    lfs f8, 0x5e4(r29)
    fsubs f29, f2, f10
    lfs f7, lbl_80887A70
    addi r27, r27, lbl_8075CED4@l
    fsubs f31, f0, f8
    lfs f28, 0x5d4(r29)
    fmuls f13, f29, f7
    lfs f0, 0x5f8(r29)
    fmuls f12, f30, f7
    stfs f2, 0x58(r1)
    fmuls f11, f31, f7
    lfs f7, 0x5f4(r29)
    fadds f10, f13, f10
    stfs f31, 0x14(r1)
    fmuls f27, f0, f28
    lfs f0, 0x5f0(r29)
    fadds f9, f12, f9
    stfs f30, 0x18(r1)
    fadds f8, f11, f8
    li r24, 0x0
    fmr f2, f10
    stfs f9, 0x30(r1)
    stfs f8, 0x2c(r1)
    fmuls f7, f7, f28
    fmuls f0, f0, f28
    li r31, 0x0
    psq_l f1, 0x0(r3), 0, 0
    li r28, 0x0
    stfs f29, 0x1c(r1)
    stfs f11, 0x8(r1)
    stfs f12, 0xc(r1)
    stfs f13, 0x10(r1)
    stfs f10, 0x34(r1)
    psq_st f1, 0x5e4(r29), 0, 0
    stfs f2, 0x5ec(r29)
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f27, 0x4c(r1)
    b lbl_fn_80526D98_00000E44
lbl_fn_80526D98_00000CBC:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r0, 0x50(r29)
    li r5, 0x0
    lwz r12, 0x60(r12)
    li r6, 0x7
    add r23, r0, r31
    lfs f1, lbl_80887A60
    mr r4, r23
    mtctr r12
    bctrl
    lwz r3, 0x8(r23)
    cmpwi r3, 0x0
    beq lbl_fn_80526D98_00000CFC
    mr r0, r3
    b lbl_fn_80526D98_00000D00
lbl_fn_80526D98_00000CFC:
    li r0, 0x0
lbl_fn_80526D98_00000D00:
    cmpwi r0, 0x0
    beq lbl_fn_80526D98_00000DE8
    cmpwi r3, 0x0
    beq lbl_fn_80526D98_00000D14
    b lbl_fn_80526D98_00000D18
lbl_fn_80526D98_00000D14:
    li r3, 0x0
lbl_fn_80526D98_00000D18:
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    lwzx r0, r26, r28
    psq_st f2, 0x8(r25), 0, 0
    lfs f9, 0xf4(r1)
    cmpwi r0, 0x0
    psq_st f4, 0x18(r25), 0, 0
    lfs f11, 0xd4(r1)
    lfs f10, 0xe4(r1)
    psq_st f1, 0x0(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    lfs f8, 0x5ec(r29)
    lfs f7, 0x5e8(r29)
    fadds f12, f9, f8
    lfs f0, 0x5e4(r29)
    fadds f13, f10, f7
    stfs f11, 0x20(r1)
    fadds f11, f11, f0
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f11, 0x38(r1)
    stfs f13, 0x3c(r1)
    stfs f12, 0x40(r1)
    beq lbl_fn_80526D98_00000DB4
    lfs f8, 0x44(r1)
    lfs f7, 0x48(r1)
    lfs f0, 0x4c(r1)
    fadds f8, f11, f8
    fadds f7, f13, f7
    fadds f0, f12, f0
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x40(r1)
lbl_fn_80526D98_00000DB4:
    lfs f8, 0x38(r1)
    lfs f7, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f8, 0xd4(r1)
    stfs f7, 0xe4(r1)
    stfs f0, 0xf4(r1)
    lwz r3, 0x8(r23)
    cmpwi r3, 0x0
    beq lbl_fn_80526D98_00000DDC
    b lbl_fn_80526D98_00000DE0
lbl_fn_80526D98_00000DDC:
    li r3, 0x0
lbl_fn_80526D98_00000DE0:
    addi r4, r1, 0xc8
    bl fn_8009EE30
lbl_fn_80526D98_00000DE8:
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r23
    addi r5, r27, 0x87
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r23
    addi r5, r27, 0x87
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r23
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    addi r24, r24, 0x1
    addi r31, r31, 0x40
    addi r28, r28, 0x4
lbl_fn_80526D98_00000E44:
    lwz r0, 0x4c(r29)
    cmpw r24, r0
    blt lbl_fn_80526D98_00000CBC
    lwz r0, 0x7c(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80526D98_00000EA4
    lwz r4, 0x5d8(r29)
    cmpwi r4, 0x0
    blt lbl_fn_80526D98_00000EA4
    lwz r0, 0x118(r29)
    mulli r0, r0, 0xac
    add r3, r29, r0
    addi r3, r3, 0x120
    lwz r0, 0x8(r3)
    cmpw r4, r0
    bge lbl_fn_80526D98_00000EA4
    slwi r0, r4, 4
    add r3, r3, r0
    lwz r4, 0x18(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80526D98_00000EA4
    lwz r3, lbl_8087F580
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_80526D98_00000EA4:
    lwz r3, 0x50(r29)
    cmpwi r30, 0x0
    addi r31, r3, 0x100
    beq lbl_fn_80526D98_00001028
    lwz r4, 0x8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80526D98_00000ECC
    lwz r3, 0x4(r4)
    addi r0, r3, 0x10
    b lbl_fn_80526D98_00000ED0
lbl_fn_80526D98_00000ECC:
    li r0, 0x0
lbl_fn_80526D98_00000ED0:
    cmpwi r0, 0x0
    beq lbl_fn_80526D98_00001028
    cmpwi r4, 0x0
    beq lbl_fn_80526D98_00000EE4
    b lbl_fn_80526D98_00000EE8
lbl_fn_80526D98_00000EE4:
    li r4, 0x0
lbl_fn_80526D98_00000EE8:
    cmpwi r4, 0x0
    beq lbl_fn_80526D98_00001028
    lwz r3, 0x118(r29)
    mulli r0, r3, 0xac
    slwi r3, r3, 3
    add r28, r29, r3
    add r4, r29, r0
    lwz r3, 0xd4(r28)
    addi r26, r4, 0x120
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80526D98_00001028
    lis r4, lbl_8075CED4@ha
    addi r3, r1, 0x88
    addi r4, r4, lbl_8075CED4@l
    addi r4, r4, 0x91
    crclr 6
    bl sprintf
    lwz r3, 0xd4(r28)
    bl fn_80202118
    mr r25, r3
    addi r3, r1, 0x88
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r25
    addi r3, r1, 0x70
    bl fn_801F4E8C
    lwz r5, 0x7c(r29)
    mr r3, r29
    mr r6, r31
    addi r7, r1, 0x70
    neg r0, r5
    li r4, 0x0
    or r0, r0, r5
    li r5, 0x0
    srwi r8, r0, 31
    bl fn_805118B8
    lwz r0, 0x7c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80526D98_00001028
    lwz r23, 0x5d8(r29)
    cmpwi r23, 0x0
    blt lbl_fn_80526D98_00000FB8
    lwz r0, 0x8(r26)
    cmpw r23, r0
    bge lbl_fn_80526D98_00000FB8
    slwi r0, r23, 4
    add r3, r26, r0
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80526D98_00000FB8
    li r23, 0x9
lbl_fn_80526D98_00000FB8:
    lis r4, lbl_8075CED4@ha
    addi r3, r1, 0x88
    addi r4, r4, lbl_8075CED4@l
    addi r5, r23, 0x1
    addi r4, r4, 0x9d
    crclr 6
    bl sprintf
    lwz r3, 0xd4(r28)
    bl fn_80202118
    mr r25, r3
    addi r3, r1, 0x88
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r25
    addi r3, r1, 0x5c
    bl fn_801F4E8C
    lwz r3, 0xd4(r28)
    bl fn_80202118
    lis r5, lbl_8075CE98@ha
    mr r4, r3
    slwi r0, r23, 2
    mr r3, r29
    addi r5, r5, lbl_8075CE98@l
    mr r6, r31
    lwzx r5, r5, r0
    addi r7, r1, 0x5c
    li r8, 0x0
    bl fn_805118B8
lbl_fn_80526D98_00001028:
    lwz r3, 0x10c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80526D98_00001170
    lbz r0, 0x96(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80526D98_00001170
    cmpwi r30, 0x0
    beq lbl_fn_80526D98_0000106C
    lwz r0, 0x11c(r29)
    cmplwi r0, 0x2
    blt lbl_fn_80526D98_0000106C
    lwz r0, 0x7c(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80526D98_0000106C
    lfs f0, lbl_80887A68
    stfs f0, 0x104(r3)
    b lbl_fn_80526D98_00001074
lbl_fn_80526D98_0000106C:
    lfs f0, lbl_80887A6C
    stfs f0, 0x104(r3)
lbl_fn_80526D98_00001074:
    lfs f27, 0x110(r29)
    lfs f0, lbl_80887A60
    fcmpo cr0, f27, f0
    ble lbl_fn_80526D98_000010D0
    lwz r4, 0x10c(r29)
    lis r28, lbl_8075CED4@ha
    addi r28, r28, lbl_8075CED4@l
    addi r3, r28, 0xab
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lwz r4, 0x10c(r29)
    addi r3, r28, 0xb2
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A60
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    b lbl_fn_80526D98_00001170
lbl_fn_80526D98_000010D0:
    bge lbl_fn_80526D98_00001128
    lwz r4, 0x10c(r29)
    lis r28, lbl_8075CED4@ha
    addi r28, r28, lbl_8075CED4@l
    addi r3, r28, 0xab
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A60
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lfs f0, 0x110(r29)
    addi r3, r28, 0xb2
    lwz r4, 0x10c(r29)
    fneg f27, f0
    addi r25, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    b lbl_fn_80526D98_00001170
lbl_fn_80526D98_00001128:
    lwz r4, 0x10c(r29)
    lis r28, lbl_8075CED4@ha
    addi r28, r28, lbl_8075CED4@l
    addi r3, r28, 0xab
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A60
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lwz r4, 0x10c(r29)
    addi r3, r28, 0xb2
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887A60
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
lbl_fn_80526D98_00001170:
    mr r3, r29
    bl fn_80528BF4
    addi r11, r1, 0x120
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    bl _restgpr_23
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80527404(void)
{
    nofralloc
    mulli r0, r4, 0xac
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_80527414(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x96(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80527414_00001384
    lwz r0, 0x4c(r3)
    li r6, 0x1
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80527414_00001238
lbl_fn_80527414_00001208:
    lwz r4, 0x50(r3)
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    beq lbl_fn_80527414_00001230
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80527414_00001230
    li r6, 0x0
    b lbl_fn_80527414_00001238
lbl_fn_80527414_00001230:
    addi r5, r5, 0x40
    bdnz lbl_fn_80527414_00001208
lbl_fn_80527414_00001238:
    li r0, 0x7
    mr r5, r31
    mtctr r0
lbl_fn_80527414_00001244:
    lwz r4, 0xd4(r5)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80527414_0000125C
    li r6, 0x0
lbl_fn_80527414_0000125C:
    lwz r4, 0xd8(r5)
    lwz r0, 0x104(r4)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    bne lbl_fn_80527414_00001274
    li r6, 0x0
lbl_fn_80527414_00001274:
    addi r5, r5, 0x8
    bdnz lbl_fn_80527414_00001244
    lwz r3, 0x10c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80527414_00001294
    li r6, 0x0
lbl_fn_80527414_00001294:
    cmpwi r6, 0x0
    beq lbl_fn_80527414_00001384
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80527414_000012CC
lbl_fn_80527414_000012A8:
    lwz r3, 0x50(r31)
    li r4, 0x1
    lfs f1, lbl_80887A60
    li r5, 0x0
    lwzx r3, r3, r30
    lfs f2, lbl_80887A68
    bl fn_805113EC
    addi r30, r30, 0x40
    addi r29, r29, 0x1
lbl_fn_80527414_000012CC:
    lwz r0, 0x4c(r31)
    cmpw r29, r0
    blt lbl_fn_80527414_000012A8
    mr r30, r31
    li r29, 0x0
lbl_fn_80527414_000012E0:
    lwz r3, 0xd4(r30)
    li r4, 0x1
    lfs f1, lbl_80887A78
    li r5, 0x0
    lfs f2, lbl_80887A60
    bl fn_805113EC
    lfs f1, lbl_80887A60
    li r4, 0x1
    lwz r3, 0xd8(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    addi r29, r29, 0x1
    addi r30, r30, 0x8
    cmpwi r29, 0x7
    blt lbl_fn_80527414_000012E0
    lwz r3, 0x10c(r31)
    li r4, 0x1
    lfs f1, lbl_80887A60
    li r5, 0x0
    lfs f2, lbl_80887A68
    bl fn_805115D4
    lwz r3, 0x48(r31)
    lwz r0, 0x11f0(r3)
    cmplw r0, r31
    beq lbl_fn_80527414_00001360
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
lbl_fn_80527414_00001360:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_8052793C
    li r0, 0x0
    stb r0, 0x96(r31)
lbl_fn_80527414_00001384:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805275EC(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    li r7, 0x0
    lis r3, lbl_807C7030@ha
    stw r7, 0x118(r31)
    addi r3, r3, lbl_807C7030@l
    li r8, 0x0
    li r4, 0x14
    stw r7, 0x5d8(r31)
    stw r7, 0x7c(r31)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x5ec(r31)
    psq_st f1, 0x5e4(r31), 0, 0
    stw r7, 0x11c(r31)
    stw r7, 0x10(r1)
    b lbl_fn_805275EC_00001474
lbl_fn_805275EC_00001404:
    stw r8, 0x8(r1)
    lwz r0, 0x48(r31)
    add r3, r0, r7
    lwz r0, 0x1228(r3)
    stw r0, 0xc(r1)
    lwz r0, 0x11c(r31)
    mulli r0, r0, 0xac
    add r0, r31, r0
    addic. r3, r0, 0x120
    beq lbl_fn_805275EC_00001460
    stw r8, 0x0(r3)
    addi r6, r3, 0x8
    addi r5, r1, 0x10
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
    mtctr r4
lbl_fn_805275EC_0000144C:
    lwz r3, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r3, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_805275EC_0000144C
lbl_fn_805275EC_00001460:
    lwz r3, 0x11c(r31)
    addi r8, r8, 0x1
    addi r7, r7, 0x8
    addi r0, r3, 0x1
    stw r0, 0x11c(r31)
lbl_fn_805275EC_00001474:
    lwz r3, 0x48(r31)
    lwz r0, 0x1224(r3)
    cmpw r8, r0
    blt lbl_fn_805275EC_00001404
    lwz r3, 0x5dc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805275EC_0000149C
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x5dc(r31)
lbl_fn_805275EC_0000149C:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x5e0(r31)
    stb r0, 0x96(r31)
    lwz r31, 0xbc(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8052770C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lfs f0, lbl_80887A6C
    li r30, 0x0
    lis r29, lbl_8075CCF0@ha
    lis r31, lbl_8075CED4@ha
    stw r30, 0x7c(r3)
    mr r26, r3
    addi r29, r29, lbl_8075CCF0@l
    addi r31, r31, lbl_8075CED4@l
    stfs f0, 0x58(r3)
    li r27, 0x0
    li r28, 0x0
    stb r30, 0x95(r3)
    b lbl_fn_8052770C_00001530
lbl_fn_8052770C_00001508:
    lwz r3, 0x4(r29)
    addi r4, r31, 0xb9
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8052770C_00001524
    lwz r3, 0x50(r26)
    stwx r30, r3, r28
lbl_fn_8052770C_00001524:
    addi r29, r29, 0xc
    addi r28, r28, 0x40
    addi r27, r27, 0x1
lbl_fn_8052770C_00001530:
    lwz r0, 0x4c(r26)
    cmpw r27, r0
    blt lbl_fn_8052770C_00001508
    lwz r3, 0x5dc(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8052770C_00001554
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x5dc(r26)
lbl_fn_8052770C_00001554:
    li r0, 0x0
    stw r0, 0x5e0(r26)
    addi r11, r1, 0x20
    stb r0, 0x96(r26)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805277C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_80887A68
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x7c(r3)
    stb r0, 0x95(r3)
    cmpwi r4, 0x0
    stfs f0, 0x58(r3)
    beq lbl_fn_805277C4_000015BC
    cmpwi r4, 0x1
    beq lbl_fn_805277C4_0000163C
    cmpwi r4, 0x2
    beq lbl_fn_805277C4_00001644
    b lbl_fn_805277C4_000016C0
lbl_fn_805277C4_000015BC:
    bl fn_805289AC
    mr r3, r31
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_805277C4_000016C0
    lwz r3, 0x48(r31)
    lwz r0, 0x11f8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_805277C4_000016C0
    lwz r3, 0x118(r31)
    cmpwi r3, 0x0
    blt lbl_fn_805277C4_000016C0
    lwz r0, 0x11c(r31)
    cmplw r3, r0
    bge lbl_fn_805277C4_000016C0
    mulli r0, r3, 0xac
    add r3, r31, r0
    lwz r0, 0x128(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805277C4_000016C0
    lis r6, lbl_807C7030@ha
    addi r5, r1, 0x8
    addi r6, r6, lbl_807C7030@l
    lwz r3, lbl_8087F580
    psq_l f1, 0x0(r6), 0, 0
    li r4, 0xf
    lfs f2, 0x8(r6)
    li r6, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    bl fn_804A5E40
    b lbl_fn_805277C4_000016C0
lbl_fn_805277C4_0000163C:
    bl fn_80528A94
    b lbl_fn_805277C4_000016C0
lbl_fn_805277C4_00001644:
    lwz r5, 0x5dc(r3)
    cmpwi r5, 0x0
    bne lbl_fn_805277C4_0000166C
    lwz r4, 0x5e0(r3)
    subic. r0, r4, 0x1
    stw r0, 0x5e0(r3)
    bgt lbl_fn_805277C4_000016C0
    li r4, 0x1
    bl fn_805288C0
    b lbl_fn_805277C4_000016C0
lbl_fn_805277C4_0000166C:
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_805277C4_0000169C
    lwz r0, 0x88(r5)
    cmpwi r0, 0x0
    bne lbl_fn_805277C4_0000169C
    lwz r4, 0x48(r31)
    mr r3, r5
    addi r4, r4, 0x6c
    bl fn_805BA358
    b lbl_fn_805277C4_000016C0
lbl_fn_805277C4_0000169C:
    lwz r0, 0x88(r5)
    cmpwi r0, 0x4
    bne lbl_fn_805277C4_000016C0
    mr r3, r5
    bl fn_800D2338
    li r3, 0x0
    li r0, 0xf
    stw r3, 0x5dc(r31)
    stw r0, 0x5e0(r31)
lbl_fn_805277C4_000016C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80527920(void)
{
    nofralloc
    li r0, 0x0
    li r4, 0x1
    stb r4, 0x95(r3)
    stw r0, 0x118(r3)
    stw r0, 0x5d8(r3)
    stw r0, 0x7c(r3)
    b fn_8052793C
}

asm void fn_8052793C(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x160
    bl _savegpr_19
    mr r31, r3
    bl fn_8000D9E8
    li r4, 0x0
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001724
    bl fn_800F52F0
    b lbl_fn_8052793C_00001730
lbl_fn_8052793C_00001724:
    bl fn_801D80B4
    li r4, 0x0
    bl fn_805282AC
lbl_fn_8052793C_00001730:
    lis r4, lbl_8075CED4@ha
    mr r25, r3
    mr r26, r31
    li r24, 0x0
    addi r28, r4, lbl_8075CED4@l
    li r30, 0x1
    li r27, 0x0
    b lbl_fn_8052793C_00002038
lbl_fn_8052793C_00001750:
    mr r4, r24
    addi r3, r31, 0x11c
    bl fn_80527404
    mr r23, r3
    addi r3, r3, 0x8
    bl fn_803CF734
    lwz r3, 0xd4(r26)
    bl fn_80202118
    mr r22, r3
    lwz r3, 0xd8(r26)
    bl fn_80202D00
    cmpwi r22, 0x0
    mr r21, r3
    beq lbl_fn_8052793C_00002030
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00002030
    bl fn_8000D9E8
    lwz r4, 0x4(r23)
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_8052793C_000017B4
    bl fn_800F52F0
    mr r29, r3
    b lbl_fn_8052793C_000017C4
lbl_fn_8052793C_000017B4:
    bl fn_801D80B4
    lwz r4, 0x4(r23)
    bl fn_805282AC
    mr r29, r3
lbl_fn_8052793C_000017C4:
    lwz r3, 0x4(r23)
    bl fn_80219544
    bl fn_8020924C
    mr r19, r3
    bl fn_801D80B4
    lwz r4, 0x4(r23)
    bl fn_801D80A0
    lwz r3, 0x14(r19)
    bl fn_8020A81C
    mr r4, r3
    mr r3, r22
    bl fn_803DD160
    lwz r5, 0x8(r19)
    mr r3, r22
    addi r4, r28, 0xbb
    bl fn_803D70B4
    lwz r5, 0x8(r19)
    mr r3, r22
    addi r4, r28, 0xc0
    bl fn_803D70B4
    mr r3, r22
    mr r4, r19
    li r5, 0x4
    li r6, 0x2
    bl fn_804A4AEC
    cntlzw r0, r20
    lwz r5, 0x4(r23)
    mr r3, r21
    mr r4, r29
    srwi r6, r0, 5
    bl fn_80511DA0
    stw r27, 0x8(r1)
    mr r4, r29
    addi r3, r1, 0x48
    li r6, 0x0
    lwz r5, 0x4(r23)
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80134800
    lfs f0, 0x48(r1)
    mr r3, r21
    addi r4, r28, 0xc8
    li r6, 0x0
    fctiwz f0, f0
    stfd f0, 0x108(r1)
    lwz r5, 0x10c(r1)
    bl fn_801F8598
    lfs f0, 0x50(r1)
    mr r3, r21
    addi r4, r28, 0xd2
    li r6, 0x0
    fctiwz f0, f0
    stfd f0, 0x110(r1)
    lwz r5, 0x114(r1)
    bl fn_801F8598
    lfs f0, 0x4c(r1)
    mr r3, r21
    addi r4, r28, 0xdc
    li r6, 0x0
    fctiwz f0, f0
    stfd f0, 0x118(r1)
    lwz r5, 0x11c(r1)
    bl fn_801F8598
    lfs f0, 0x54(r1)
    mr r3, r21
    addi r4, r28, 0xe7
    li r6, 0x0
    fctiwz f0, f0
    stfd f0, 0x120(r1)
    lwz r5, 0x124(r1)
    bl fn_801F8598
    lwz r5, 0xdc(r1)
    mr r3, r21
    addi r4, r28, 0xf2
    li r6, 0x0
    bl fn_801F8598
    lfs f1, lbl_80887A60
    mr r3, r21
    addi r4, r28, 0xfc
    bl fn_801F6C80
    lfs f1, lbl_80887A60
    mr r3, r21
    addi r4, r28, 0x10a
    bl fn_801F6C80
    lfs f1, lbl_80887A60
    mr r3, r21
    addi r4, r28, 0x118
    bl fn_801F6C80
    lfs f1, lbl_80887A60
    mr r3, r21
    addi r4, r28, 0x127
    bl fn_801F6C80
    lfs f1, lbl_80887A60
    mr r3, r21
    addi r4, r28, 0x136
    bl fn_801F6C80
    li r19, 0x0
lbl_fn_8052793C_00001950:
    mr r5, r19
    addi r3, r1, 0x28
    addi r4, r28, 0x144
    crclr 6
    bl sprintf
    lfs f1, lbl_80887A60
    mr r3, r22
    addi r4, r1, 0x28
    bl fn_803D6EF8
    addi r19, r19, 0x1
    cmpwi r19, 0x9
    blt lbl_fn_8052793C_00001950
    stw r27, 0x10(r1)
    mr r3, r29
    li r19, 0x0
    li r20, -0x1
    lwz r4, 0x4(r23)
    bl fn_8012CE4C
    lwz r0, 0x4(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8052793C_000019D8
    cmpwi r0, 0x1
    beq lbl_fn_8052793C_00001B28
    cmpwi r0, 0x2
    beq lbl_fn_8052793C_00001C1C
    cmpwi r0, 0x3
    beq lbl_fn_8052793C_00001CD0
    cmpwi r0, 0x4
    beq lbl_fn_8052793C_00001D48
    cmpwi r0, 0x5
    beq lbl_fn_8052793C_00001DE8
    cmpwi r0, 0x6
    beq lbl_fn_8052793C_00001EDC
    b lbl_fn_8052793C_00001F98
lbl_fn_8052793C_000019D8:
    mr r3, r25
    li r4, 0x9
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001A04
    mr r3, r31
    mr r4, r22
    mr r6, r23
    addi r5, r1, 0x10
    bl fn_80528458
lbl_fn_8052793C_00001A04:
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0xa
    li r9, 0x93
    bl fn_80528314
    mr r3, r29
    li r4, 0x3f
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001A5C
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x3f
    li r9, 0x14e
    bl fn_80528314
lbl_fn_8052793C_00001A5C:
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0xd
    li r9, 0x93
    bl fn_80528314
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x9
    li r9, 0x152
    bl fn_80528314
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0xe
    li r9, 0x9d
    bl fn_80528314
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0xf
    li r9, 0xa4
    bl fn_80528314
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x10
    li r9, 0xe1
    bl fn_80528314
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x2
    li r9, 0xbe
    bl fn_80528314
    li r19, 0x1c
    li r20, 0xa7
    b lbl_fn_8052793C_00001F98
lbl_fn_8052793C_00001B28:
    mr r3, r29
    li r4, 0x32
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001B64
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x32
    li r9, -0x1
    bl fn_80528314
    b lbl_fn_8052793C_00001B9C
lbl_fn_8052793C_00001B64:
    mr r3, r29
    li r4, 0x31
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001B9C
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x31
    li r9, -0x1
    bl fn_80528314
lbl_fn_8052793C_00001B9C:
    mr r3, r29
    li r4, 0x1a
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001BD8
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x1a
    li r9, -0x1
    bl fn_80528314
    b lbl_fn_8052793C_00001C10
lbl_fn_8052793C_00001BD8:
    mr r3, r29
    li r4, 0x19
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001C10
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x19
    li r9, -0x1
    bl fn_80528314
lbl_fn_8052793C_00001C10:
    li r19, 0x3c
    li r20, 0xc5
    b lbl_fn_8052793C_00001F98
lbl_fn_8052793C_00001C1C:
    mr r3, r25
    li r4, 0x9
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001C48
    mr r3, r31
    mr r4, r22
    mr r6, r23
    addi r5, r1, 0x10
    bl fn_80528458
lbl_fn_8052793C_00001C48:
    mr r3, r29
    li r4, 0x22
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001C84
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x22
    li r9, -0x1
    bl fn_80528314
    b lbl_fn_8052793C_00001CA4
lbl_fn_8052793C_00001C84:
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x36
    li r9, -0x1
    bl fn_80528314
lbl_fn_8052793C_00001CA4:
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x3
    li r9, -0x1
    bl fn_80528314
    li r19, 0x24
    li r20, 0xc0
    b lbl_fn_8052793C_00001F98
lbl_fn_8052793C_00001CD0:
    mr r3, r25
    li r4, 0x9
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001CFC
    mr r3, r31
    mr r4, r22
    mr r6, r23
    addi r5, r1, 0x10
    bl fn_80528578
lbl_fn_8052793C_00001CFC:
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x36
    li r9, -0x1
    bl fn_80528314
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x3
    li r9, -0x1
    bl fn_80528314
    li r19, 0x35
    li r20, 0xc3
    b lbl_fn_8052793C_00001F98
lbl_fn_8052793C_00001D48:
    mr r3, r29
    li r4, 0x13
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001D84
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x13
    li r9, -0x1
    bl fn_80528314
    b lbl_fn_8052793C_00001DBC
lbl_fn_8052793C_00001D84:
    mr r3, r29
    li r4, 0x12
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001DBC
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x12
    li r9, -0x1
    bl fn_80528314
lbl_fn_8052793C_00001DBC:
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x3b
    li r9, -0x1
    bl fn_80528314
    li r19, 0x29
    li r20, 0xc1
    b lbl_fn_8052793C_00001F98
lbl_fn_8052793C_00001DE8:
    mr r3, r29
    li r4, 0x1a
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001E24
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x1a
    li r9, -0x1
    bl fn_80528314
    b lbl_fn_8052793C_00001E5C
lbl_fn_8052793C_00001E24:
    mr r3, r29
    li r4, 0x19
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001E5C
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x19
    li r9, -0x1
    bl fn_80528314
lbl_fn_8052793C_00001E5C:
    mr r3, r29
    li r4, 0x39
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001E98
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x39
    li r9, -0x1
    bl fn_80528314
    b lbl_fn_8052793C_00001ED0
lbl_fn_8052793C_00001E98:
    mr r3, r29
    li r4, 0x38
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001ED0
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x38
    li r9, -0x1
    bl fn_80528314
lbl_fn_8052793C_00001ED0:
    li r19, 0x1
    li r20, 0xc2
    b lbl_fn_8052793C_00001F98
lbl_fn_8052793C_00001EDC:
    mr r3, r29
    li r4, 0x17
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001F18
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x17
    li r9, -0x1
    bl fn_80528314
    b lbl_fn_8052793C_00001F50
lbl_fn_8052793C_00001F18:
    mr r3, r29
    li r4, 0x16
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00001F50
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x16
    li r9, -0x1
    bl fn_80528314
lbl_fn_8052793C_00001F50:
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x2c
    li r9, -0x1
    bl fn_80528314
    mr r3, r31
    mr r4, r22
    mr r5, r29
    mr r8, r23
    addi r7, r1, 0x10
    li r6, 0x3
    li r9, -0x1
    bl fn_80528314
    li r19, 0x27
    li r20, 0xc4
lbl_fn_8052793C_00001F98:
    mr r3, r29
    mr r4, r19
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8052793C_00002010
    mr r3, r19
    bl fn_8021AF50
    mr r29, r3
    addi r3, r3, 0x8
    bl fn_805282BC
    mr r5, r3
    mr r3, r22
    addi r4, r28, 0x150
    bl fn_803D70B4
    lfs f1, lbl_80887A68
    mr r3, r22
    addi r4, r28, 0x15e
    bl fn_803D6EF8
    lwz r0, 0x10(r1)
    addi r3, r29, 0x10
    stw r0, 0x18(r1)
    bl fn_805282BC
    stw r3, 0x24(r1)
    addi r3, r23, 0x8
    addi r4, r1, 0x18
    stw r30, 0x20(r1)
    stw r20, 0x1c(r1)
    bl fn_805282D0
    b lbl_fn_8052793C_00002030
lbl_fn_8052793C_00002010:
    mr r3, r22
    addi r4, r28, 0x150
    la r5, lbl_8087E4A0
    bl fn_803D70B4
    lfs f1, lbl_80887A60
    mr r3, r22
    addi r4, r28, 0x15e
    bl fn_803D6EF8
lbl_fn_8052793C_00002030:
    addi r26, r26, 0x8
    addi r24, r24, 0x1
lbl_fn_8052793C_00002038:
    addi r3, r31, 0x11c
    bl fn_80372574
    cmplw r24, r3
    blt lbl_fn_8052793C_00001750
    addi r11, r1, 0x160
    bl _restgpr_19
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
