#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _savegpr_14(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_80041C0C(void);
extern void fn_80042740(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800928B0(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB36C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB480(void);
extern void fn_800CB518(void);
extern void fn_800CB5C8(void);
extern void fn_800CB688(void);
extern void fn_800CB6B0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800EF73C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8021823C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_803F1A38(void);
extern void fn_805A38F4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80752040[];
extern u8 lbl_80752060[];
extern u8 lbl_80752068[];
extern u8 lbl_80752084[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078CB40[];
extern u8 lbl_8078CB78[];

/* Small data declarations */
extern u32 lbl_8087D700;
extern u32 lbl_8087D704;
extern u32 lbl_8087D710;
extern u32 lbl_8087DF18;
extern u32 lbl_8087DF1C;
extern u32 lbl_8087DF20;
extern u32 lbl_8087DF24;
extern u32 lbl_8087DF28;
extern u32 lbl_8087DF2C;
extern u32 lbl_8087DF30;
extern u32 lbl_8087DF34;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885F90;
extern u32 lbl_80885F94;
extern u32 lbl_80885F98;
extern u32 lbl_80885F9C;
extern u32 lbl_80885FA0;
extern u32 lbl_80885FA4;
extern u32 lbl_80885FA8;

/* Function declarations */
void fn_803EFCA8(void);
void fn_803EFD60(void);
void fn_803EFD9C(void);
void fn_803EFDA4(void);
void fn_803EFDAC(void);
void fn_803EFDB4(void);
void fn_803EFDD0(void);
void fn_803EFDE4(void);
void fn_803EFE5C(void);
void fn_803EFE64(void);
void fn_803F0280(void);
void fn_803F0328(void);
void fn_803F03D8(void);
void fn_803F0488(void);
void fn_803F0538(void);
void fn_803F05E8(void);
void fn_803F05F0(void);
void fn_803F05FC(void);
void fn_803F0604(void);
void fn_803F0614(void);
void fn_803F0624(void);
void fn_803F0634(void);
void fn_803F063C(void);
void fn_803F0688(void);
void fn_803F069C(void);
void fn_803F06B0(void);
void fn_803F0764(void);
void fn_803F10AC(void);
void fn_803F11F8(void);
void fn_803F1310(void);
void fn_803F13D4(void);
void fn_803F1418(void);
void fn_803F1474(void);
void fn_803F1508(void);

asm void fn_803EFCA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807774D8@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r6, r6, lbl_807774D8@l
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x400
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x630(r3)
    addi r3, r3, 0x10
    bl memset
    addi r3, r29, 0x610
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    mr r3, r29
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x0(r29)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EFD60(void)
{
    nofralloc
    lfs f1, lbl_80885F90
    li r4, -0x1
    li r0, 0x0
    lfs f0, lbl_80885F94
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    blr
}

asm void fn_803EFD9C(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_803EFDA4(void)
{
    nofralloc
    lwz r3, 0x4c(r3)
    blr
}

asm void fn_803EFDAC(void)
{
    nofralloc
    lwz r3, 0x50(r3)
    blr
}

asm void fn_803EFDB4(void)
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

asm void fn_803EFDD0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_803EFDE4(void)
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
    beq lbl_fn_803EFDE4_00000198
    beq lbl_fn_803EFDE4_00000188
    beq lbl_fn_803EFDE4_00000188
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803EFDE4_00000188
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_803EFDE4_00000188:
    cmpwi r31, 0x0
    ble lbl_fn_803EFDE4_00000198
    mr r3, r30
    bl dtor_80084684
lbl_fn_803EFDE4_00000198:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EFE5C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803EFE64(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r0, 0x4(r3)
    lwz r31, 0x8(r3)
    cmplw r0, r31
    bge lbl_fn_803EFE64_00000258
    mulli r0, r0, 0x28
    lwz r5, 0x0(r3)
    add. r5, r5, r0
    beq lbl_fn_803EFE64_00000248
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    psq_l f1, 0x10(r4), 0, 0
    psq_st f1, 0x10(r5), 0, 0
    lfs f2, 0x18(r4)
    stfs f2, 0x18(r5)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r5)
    lwz r0, 0x20(r4)
    stw r0, 0x20(r5)
    lwz r0, 0x24(r4)
    stw r0, 0x24(r5)
lbl_fn_803EFE64_00000248:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_803EFE64_000005B8
lbl_fn_803EFE64_00000258:
    lis r3, 0x666
    li r4, 0x1
    addi r0, r3, 0x6666
    stw r4, 0x1c(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_803EFE64_00000298
    lis r4, lbl_80752084@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80752084@l
    addi r3, r3, __files@l
    addi r4, r4, 0x23
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803EFE64_00000298:
    lis r3, 0x222
    addi r0, r3, 0x2222
    cmplw r31, r0
    bge lbl_fn_803EFE64_000002D0
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_803EFE64_000002F0
lbl_fn_803EFE64_000002D0:
    lis r3, 0x444
    addi r0, r3, 0x4444
    cmplw r31, r0
    bge lbl_fn_803EFE64_000002F0
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_803EFE64_000002F0:
    li r4, 0x0
    addi r5, r29, 0x8
    lis r3, 0x666
    stw r4, 0x20(r1)
    addi r0, r3, 0x6666
    stw r4, 0x24(r1)
    stw r4, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_803EFE64_00000358
    lis r4, lbl_80752084@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80752084@l
    addi r3, r3, __files@l
    addi r4, r4, 0x23
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803EFE64_00000358:
    lis r3, 0x222
    addi r0, r3, 0x2222
    cmplw r31, r0
    bge lbl_fn_803EFE64_000003A8
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_803EFE64_0000039C
    addi r3, r1, 0x8
lbl_fn_803EFE64_0000039C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803EFE64_000003EC
lbl_fn_803EFE64_000003A8:
    lis r3, 0x444
    addi r0, r3, 0x4444
    cmplw r31, r0
    bge lbl_fn_803EFE64_000003E4
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_803EFE64_000003D8
    addi r3, r1, 0x8
lbl_fn_803EFE64_000003D8:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803EFE64_000003EC
lbl_fn_803EFE64_000003E4:
    lis r3, 0x666
    addi r28, r3, 0x6666
lbl_fn_803EFE64_000003EC:
    lis r3, 0x666
    addi r0, r3, 0x6666
    cmplw r28, r0
    ble lbl_fn_803EFE64_00000420
    lis r4, lbl_80752084@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80752084@l
    addi r3, r3, __files@l
    addi r4, r4, 0x23
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803EFE64_00000420:
    mulli r3, r28, 0x28
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_803EFE64_00000454
    lis r3, __files@ha
    lis r4, lbl_8078CB78@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078CB78@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803EFE64_00000454:
    lwz r0, 0x24(r1)
    stw r31, 0x20(r1)
    mulli r3, r0, 0x28
    stw r28, 0x28(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x30(r1)
    mulli r0, r0, 0x28
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_803EFE64_000004C4
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r3)
    psq_l f1, 0x10(r30), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    lfs f2, 0x18(r30)
    stfs f2, 0x18(r3)
    lfs f0, 0x1c(r30)
    stfs f0, 0x1c(r3)
    lwz r0, 0x20(r30)
    stw r0, 0x20(r3)
    lwz r0, 0x24(r30)
    stw r0, 0x24(r3)
lbl_fn_803EFE64_000004C4:
    lwz r3, 0x24(r1)
    lwz r0, 0x30(r1)
    addi r3, r3, 0x1
    stw r3, 0x24(r1)
    mulli r0, r0, 0x28
    lwz r3, 0x20(r1)
    lwz r4, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r4, r4, 0x28
    add r6, r3, r0
    add r5, r7, r4
    b lbl_fn_803EFE64_00000560
lbl_fn_803EFE64_000004F4:
    subic. r6, r6, 0x28
    subi r5, r5, 0x28
    beq lbl_fn_803EFE64_00000548
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r6)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    lfs f0, 0x1c(r5)
    stfs f0, 0x1c(r6)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r6)
    lwz r0, 0x24(r5)
    stw r0, 0x24(r6)
lbl_fn_803EFE64_00000548:
    lwz r4, 0x30(r1)
    lwz r3, 0x24(r1)
    subi r0, r4, 0x1
    stw r0, 0x30(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
lbl_fn_803EFE64_00000560:
    cmplw r7, r5
    blt lbl_fn_803EFE64_000004F4
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x20
    lwz r3, 0x8(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r29)
    stw r3, 0x28(r1)
    lwz r0, 0x20(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r29)
    stw r4, 0x24(r1)
    beq lbl_fn_803EFE64_000005B8
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803EFE64_000005B8
    stw r4, 0x24(r1)
    bl dtor_80084684
lbl_fn_803EFE64_000005B8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803F0280(void)
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
    beq lbl_fn_803F0280_00000614
    beq lbl_fn_803F0280_00000614
    subi r3, r6, 0x10
    bl fn_80084C24
lbl_fn_803F0280_00000614:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803F0280_0000065C
    mulli r3, r30, 0x28
    mr r4, r31
    la r5, lbl_8087DF34
    la r6, lbl_8087DF30
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803EFD60@ha
    mr r7, r30
    addi r4, r4, fn_803EFD60@l
    li r5, 0x0
    li r6, 0x28
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803F0280_00000664
lbl_fn_803F0280_0000065C:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803F0280_00000664:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F0328(void)
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
    beq lbl_fn_803F0328_000006C0
    lis r4, fn_802375C4@ha
    mr r3, r0
    addi r4, r4, fn_802375C4@l
    bl fn_80695A50
lbl_fn_803F0328_000006C0:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803F0328_0000070C
    mulli r3, r30, 0xc
    mr r4, r31
    la r5, lbl_8087DF2C
    la r6, lbl_8087DF28
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80237518@ha
    lis r5, fn_802375C4@ha
    mr r7, r30
    li r6, 0xc
    addi r4, r4, fn_80237518@l
    addi r5, r5, fn_802375C4@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803F0328_00000714
lbl_fn_803F0328_0000070C:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803F0328_00000714:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F03D8(void)
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
    beq lbl_fn_803F03D8_00000770
    lis r4, fn_800EF73C@ha
    mr r3, r0
    addi r4, r4, fn_800EF73C@l
    bl fn_80695A50
lbl_fn_803F03D8_00000770:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803F03D8_000007BC
    mulli r3, r30, 0xc
    mr r4, r31
    la r5, lbl_8087DF24
    la r6, lbl_8087DF20
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    mr r7, r30
    li r6, 0xc
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803F03D8_000007C4
lbl_fn_803F03D8_000007BC:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803F03D8_000007C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F0488(void)
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
    beq lbl_fn_803F0488_00000820
    lis r4, fn_800CB3A0@ha
    mr r3, r0
    addi r4, r4, fn_800CB3A0@l
    bl fn_80695A50
lbl_fn_803F0488_00000820:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803F0488_0000086C
    slwi r3, r30, 2
    mr r4, r31
    addi r3, r3, 0x10
    la r5, lbl_8087DF1C
    la r6, lbl_8087DF18
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800CB360@ha
    lis r5, fn_800CB3A0@ha
    mr r7, r30
    li r6, 0x4
    addi r4, r4, fn_800CB360@l
    addi r5, r5, fn_800CB3A0@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803F0488_00000874
lbl_fn_803F0488_0000086C:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803F0488_00000874:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F0538(void)
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
    beq lbl_fn_803F0538_000008D0
    lis r4, fn_80041C0C@ha
    mr r3, r0
    addi r4, r4, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_803F0538_000008D0:
    cmpwi r30, 0x0
    stw r30, 0x0(r29)
    beq lbl_fn_803F0538_0000091C
    slwi r3, r30, 5
    mr r4, r31
    addi r3, r3, 0x10
    la r5, lbl_8087D704
    la r6, lbl_8087D700
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80042740@ha
    lis r5, fn_80041C0C@ha
    mr r7, r30
    li r6, 0x20
    addi r4, r4, fn_80042740@l
    addi r5, r5, fn_80041C0C@l
    bl fn_80695720
    stw r3, 0x4(r29)
    b lbl_fn_803F0538_00000924
lbl_fn_803F0538_0000091C:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_803F0538_00000924:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F05E8(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_803F05F0(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

asm void fn_803F05FC(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_803F0604(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803F0614(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803F0624(void)
{
    nofralloc
    mulli r0, r4, 0x28
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803F0634(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_803F063C(void)
{
    nofralloc
    lwz r9, 0x0(r4)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r6, 0xc(r4)
    psq_l f1, 0x10(r4), 0, 0
    lfs f2, 0x18(r4)
    lfs f0, 0x1c(r4)
    lwz r5, 0x20(r4)
    lwz r0, 0x24(r4)
    stw r9, 0x0(r3)
    stw r8, 0x4(r3)
    stw r7, 0x8(r3)
    stw r6, 0xc(r3)
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    stfs f0, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    blr
}

asm void fn_803F0688(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    addi r0, r4, 0x28
    stw r0, 0x0(r3)
    mr r3, r4
    blr
}

asm void fn_803F069C(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    lwz r3, 0x0(r3)
    mulli r0, r0, 0x28
    add r3, r3, r0
    blr
}

asm void fn_803F06B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_803F06B0_00000A54
lbl_fn_803F06B0_00000A30:
    lwz r0, 0xc(r29)
    add r3, r0, r31
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_803F06B0_00000A4C
    li r3, 0x1
    b lbl_fn_803F06B0_00000AA0
lbl_fn_803F06B0_00000A4C:
    addi r31, r31, 0xc
    addi r30, r30, 0x1
lbl_fn_803F06B0_00000A54:
    lwz r0, 0x8(r29)
    cmplw r30, r0
    blt lbl_fn_803F06B0_00000A30
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_803F06B0_00000A90
lbl_fn_803F06B0_00000A6C:
    lwz r0, 0x14(r29)
    add r3, r0, r31
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_803F06B0_00000A88
    li r3, 0x1
    b lbl_fn_803F06B0_00000AA0
lbl_fn_803F06B0_00000A88:
    addi r31, r31, 0xc
    addi r30, r30, 0x1
lbl_fn_803F06B0_00000A90:
    lwz r0, 0x10(r29)
    cmplw r30, r0
    blt lbl_fn_803F06B0_00000A6C
    li r3, 0x0
lbl_fn_803F06B0_00000AA0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F0764(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stfd f26, 0x1c0(r1)
    psq_st f26, 0x1c8(r1), 0, 0
    stfd f25, 0x1b0(r1)
    psq_st f25, 0x1b8(r1), 0, 0
    bl _savegpr_14
    cmpwi r4, 0x0
    lis r0, 0x4330
    stw r0, 0x148(r1)
    mr r15, r3
    mr r16, r4
    stw r0, 0x150(r1)
    beq lbl_fn_803F0764_000013B4
    lwz r12, 0x0(r16)
    mr r3, r16
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_803F0764_00000B44
    b lbl_fn_803F0764_000013B4
lbl_fn_803F0764_00000B44:
    lwz r0, 0x2c(r15)
    cmpwi r0, 0x0
    bne lbl_fn_803F0764_00000B60
    mr r3, r15
    li r4, 0x1
    bl fn_803F10AC
    b lbl_fn_803F0764_000013B4
lbl_fn_803F0764_00000B60:
    lwz r12, 0x0(r16)
    mr r3, r16
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r19, 0x22c(r3)
    mr r20, r3
    lfs f26, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    lwz r3, lbl_8087EFA8
    fmr f27, f1
    lfs f3, 0x238(r20)
    lfs f4, 0x3a4(r3)
    lfs f0, lbl_80885F90
    fmuls f25, f3, f4
    lbz r22, 0x244(r20)
    fcmpo cr0, f25, f0
    cror eq, lt, eq
    beq lbl_fn_803F0764_000013B4
    lwz r0, 0x28(r15)
    cmpw r0, r19
    beq lbl_fn_803F0764_00000BCC
    mr r3, r15
    li r4, 0x0
    bl fn_803F10AC
    stw r19, 0x28(r15)
lbl_fn_803F0764_00000BCC:
    lis r3, lbl_80752060@ha
    li r18, 0x0
    lfs f30, lbl_80885F90
    mr r27, r18
    lfs f31, lbl_80885F94
    mr r14, r18
    lfd f29, lbl_80752060@l(r3)
    addi r26, r1, 0x84
    lfs f28, lbl_80885F98
    addi r25, r1, 0x78
    stw r18, 0x160(r1)
    addi r24, r1, 0x60
    li r31, 0x0
    li r28, -0x1
    stw r18, 0x164(r1)
    li r29, 0x1
    b lbl_fn_803F0764_000013A8
lbl_fn_803F0764_00000C10:
    lwz r0, 0x4(r15)
    add r23, r0, r31
    lwzx r0, r31, r0
    cmpw r0, r19
    bne lbl_fn_803F0764_000013A0
    lwz r3, 0x4(r23)
    xoris r0, r3, 0x8000
    stw r0, 0x14c(r1)
    lfd f0, 0x148(r1)
    fsubs f0, f0, f29
    fsubs f0, f0, f26
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f28
    blt lbl_fn_803F0764_00000CD0
    stw r0, 0x154(r1)
    lfd f0, 0x150(r1)
    fsubs f0, f0, f29
    fcmpo cr0, f26, f0
    bge lbl_fn_803F0764_00000C88
    stw r0, 0x14c(r1)
    fadds f3, f26, f25
    lfd f0, 0x148(r1)
    fsubs f0, f0, f29
    fcmpo cr0, f3, f0
    ble lbl_fn_803F0764_00000C88
    cmpwi r22, 0x0
    beq lbl_fn_803F0764_00000CD0
    fcmpo cr0, f3, f27
    blt lbl_fn_803F0764_00000CD0
lbl_fn_803F0764_00000C88:
    fcmpo cr0, f26, f30
    cror eq, gt, eq
    bne lbl_fn_803F0764_000013A0
    fsubs f0, f26, f25
    fcmpo cr0, f0, f30
    bge lbl_fn_803F0764_000013A0
    xoris r0, r3, 0x8000
    stw r0, 0x154(r1)
    fadds f3, f27, f0
    lfd f0, 0x150(r1)
    fsubs f0, f0, f29
    fcmpo cr0, f3, f0
    blt lbl_fn_803F0764_00000CD0
    stw r0, 0x14c(r1)
    lfd f0, 0x148(r1)
    fsubs f0, f0, f29
    fcmpo cr0, f0, f26
    bge lbl_fn_803F0764_000013A0
lbl_fn_803F0764_00000CD0:
    lwz r3, 0x8(r23)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_803F0764_00000E24
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_803F0764_00000ED0
    cmpwi r3, 0x0
    beq lbl_fn_803F0764_00000D08
    cmpwi r3, 0x5
    beq lbl_fn_803F0764_0000106C
    cmpwi r3, 0x6
    beq lbl_fn_803F0764_00001254
    b lbl_fn_803F0764_000013A0
lbl_fn_803F0764_00000D08:
    lwz r4, 0x20(r23)
    mr r3, r20
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_803F0764_00000D28
    li r17, 0x0
    b lbl_fn_803F0764_00000D34
lbl_fn_803F0764_00000D28:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r20)
    add r17, r3, r0
lbl_fn_803F0764_00000D34:
    cmpwi r17, 0x0
    beq lbl_fn_803F0764_00000D8C
    mr r3, r15
    mr r4, r19
    bl fn_80232B7C
    lwz r0, 0xc(r23)
    mr r7, r17
    lwz r4, 0xc(r15)
    addi r8, r23, 0x10
    lwz r3, lbl_8087F3C0
    mulli r0, r0, 0xc
    li r5, -0x1
    stw r27, 0x8(r1)
    li r6, 0x5
    add r4, r4, r0
    li r9, 0x0
    stw r28, 0xc(r1)
    li r10, 0x0
    stw r29, 0x10(r1)
    lfs f1, 0x1c(r23)
    bl fn_8023A680
    b lbl_fn_803F0764_00000E1C
lbl_fn_803F0764_00000D8C:
    lfs f3, 0x74(r16)
    addi r5, r1, 0x9c
    lfs f0, 0x18(r23)
    mr r3, r15
    lfs f5, 0x70(r16)
    mr r4, r19
    fadds f6, f3, f0
    lfs f4, 0x14(r23)
    lfs f3, 0x6c(r16)
    lfs f0, 0x10(r23)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0xac(r1)
    stfs f0, 0xa8(r1)
    stfs f6, 0xb0(r1)
    psq_l f1, 0x78(r16), 0, 0
    lfs f2, 0x80(r16)
    stfs f2, 0xa4(r1)
    psq_st f1, 0x0(r5), 0, 0
    bl fn_80232B7C
    lwz r0, 0xc(r23)
    addi r9, r1, 0x9c
    lwz r4, 0xc(r15)
    addi r8, r1, 0xa8
    lwz r3, lbl_8087F3C0
    mulli r0, r0, 0xc
    li r5, -0x1
    stw r14, 0x8(r1)
    li r6, 0x0
    add r4, r4, r0
    li r7, 0x0
    stw r28, 0xc(r1)
    li r10, 0x0
    stw r29, 0x10(r1)
    lfs f1, 0x1c(r23)
    bl fn_8023A680
lbl_fn_803F0764_00000E1C:
    stw r29, 0x24(r23)
    b lbl_fn_803F0764_000013A0
lbl_fn_803F0764_00000E24:
    cmpwi r3, 0x1
    beq lbl_fn_803F0764_00000E38
    lwz r0, 0x24(r23)
    cmpwi r0, 0x0
    bne lbl_fn_803F0764_000013A0
lbl_fn_803F0764_00000E38:
    stfs f30, 0x90(r1)
    stfs f30, 0x94(r1)
    stfs f30, 0x98(r1)
    lwz r0, 0x8(r23)
    cmpwi r0, 0x2
    bne lbl_fn_803F0764_00000E58
    lwz r3, lbl_8087F3C0
    stw r29, 0xb8(r3)
lbl_fn_803F0764_00000E58:
    mr r3, r15
    mr r4, r19
    bl fn_80232B7C
    lwz r0, 0xc(r23)
    mr r5, r20
    lfs f1, 0x1c(r23)
    addi r7, r23, 0x10
    lwz r4, 0x14(r15)
    mulli r0, r0, 0xc
    lwz r3, lbl_8087F3C0
    addi r8, r1, 0x90
    stfs f31, 0x20(r1)
    addi r9, r1, 0x20
    add r4, r4, r0
    stfs f31, 0x24(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x8(r23)
    cmpwi r0, 0x2
    bne lbl_fn_803F0764_00000EC8
    lwz r3, lbl_8087F3C0
    lwz r0, 0x160(r1)
    stw r0, 0xb8(r3)
lbl_fn_803F0764_00000EC8:
    stw r29, 0x24(r23)
    b lbl_fn_803F0764_000013A0
lbl_fn_803F0764_00000ED0:
    lwz r0, 0x30(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803F0764_000013A0
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_803F0764_000013A0
    cmpwi r3, 0x3
    beq lbl_fn_803F0764_00000EFC
    lwz r0, 0x24(r23)
    cmpwi r0, 0x0
    bne lbl_fn_803F0764_000013A0
lbl_fn_803F0764_00000EFC:
    psq_l f1, 0x10(r23), 0, 0
    addi r3, r1, 0x118
    lfs f2, 0x18(r23)
    li r4, 0x79
    stfs f2, 0x8c(r1)
    psq_st f1, 0x0(r26), 0, 0
    lfs f1, 0x7c(r16)
    bl fn_805F8E70
    mr r4, r26
    mr r5, r26
    addi r3, r1, 0x118
    bl fn_805F93C0
    lwz r4, 0x20(r23)
    mr r3, r20
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_803F0764_00000F4C
    li r3, 0x0
    b lbl_fn_803F0764_00000F58
lbl_fn_803F0764_00000F4C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r20)
    add r3, r3, r0
lbl_fn_803F0764_00000F58:
    cmpwi r3, 0x0
    beq lbl_fn_803F0764_00000FA0
    lfs f5, 0x2c(r3)
    lfs f6, 0x1c(r3)
    lfs f7, 0xc(r3)
    lfs f4, 0x84(r1)
    lfs f3, 0x88(r1)
    lfs f0, 0x8c(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f7, 0x54(r1)
    fadds f0, f0, f5
    stfs f6, 0x58(r1)
    stfs f5, 0x5c(r1)
    stfs f4, 0x84(r1)
    stfs f3, 0x88(r1)
    stfs f0, 0x8c(r1)
    b lbl_fn_803F0764_00000FD0
lbl_fn_803F0764_00000FA0:
    lfs f3, 0x84(r1)
    lfs f0, 0x6c(r16)
    lfs f4, 0x88(r1)
    fadds f0, f3, f0
    lfs f3, 0x8c(r1)
    stfs f0, 0x84(r1)
    lfs f0, 0x70(r16)
    fadds f0, f4, f0
    stfs f0, 0x88(r1)
    lfs f0, 0x74(r16)
    fadds f0, f3, f0
    stfs f0, 0x8c(r1)
lbl_fn_803F0764_00000FD0:
    lwz r0, 0xc(r23)
    li r4, 0x7
    lwz r3, 0x24(r15)
    li r5, 0x0
    slwi r0, r0, 5
    add r3, r3, r0
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_803F0764_00001064
    lwz r4, lbl_8087EFE8
    li r0, 0x7
    addi r3, r1, 0x18
    addi r5, r1, 0x84
    stw r0, 0x34d0(r4)
    li r6, 0x0
    li r7, -0x1
    lwz r0, 0xc(r23)
    lwz r4, 0x24(r15)
    slwi r0, r0, 5
    lfs f1, 0x1c(r23)
    add r4, r4, r0
    bl fn_800C344C
    lwz r3, lbl_8087EFE8
    lwz r0, 0x164(r1)
    stw r0, 0x34d0(r3)
    lwz r0, 0x8(r23)
    cmpwi r0, 0x4
    bne lbl_fn_803F0764_00001058
    lwz r0, 0xc(r23)
    addi r4, r1, 0x18
    lwz r3, 0x1c(r15)
    slwi r0, r0, 2
    add r3, r3, r0
    bl fn_800CB440
lbl_fn_803F0764_00001058:
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803F0764_00001064:
    stw r29, 0x24(r23)
    b lbl_fn_803F0764_000013A0
lbl_fn_803F0764_0000106C:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803F0764_000013A0
    lwz r0, lbl_8087F8A0
    cmpwi r0, 0x0
    beq lbl_fn_803F0764_000013A0
    psq_l f1, 0x10(r23), 0, 0
    addi r3, r1, 0xe8
    lfs f2, 0x18(r23)
    li r4, 0x79
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r25), 0, 0
    lfs f1, 0x7c(r16)
    bl fn_805F8E70
    mr r4, r25
    mr r5, r25
    addi r3, r1, 0xe8
    bl fn_805F93C0
    lwz r4, 0x20(r23)
    mr r3, r20
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_803F0764_000010D4
    li r3, 0x0
    b lbl_fn_803F0764_000010E0
lbl_fn_803F0764_000010D4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r20)
    add r3, r3, r0
lbl_fn_803F0764_000010E0:
    cmpwi r3, 0x0
    beq lbl_fn_803F0764_00001128
    lfs f5, 0x2c(r3)
    lfs f6, 0x1c(r3)
    lfs f7, 0xc(r3)
    lfs f4, 0x78(r1)
    lfs f3, 0x7c(r1)
    lfs f0, 0x80(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f7, 0x48(r1)
    fadds f0, f0, f5
    stfs f6, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f4, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f0, 0x80(r1)
    b lbl_fn_803F0764_00001158
lbl_fn_803F0764_00001128:
    lfs f3, 0x78(r1)
    lfs f0, 0x6c(r16)
    lfs f4, 0x7c(r1)
    fadds f0, f3, f0
    lfs f3, 0x80(r1)
    stfs f0, 0x78(r1)
    lfs f0, 0x70(r16)
    fadds f0, f4, f0
    stfs f0, 0x7c(r1)
    lfs f0, 0x74(r16)
    fadds f0, f3, f0
    stfs f0, 0x80(r1)
lbl_fn_803F0764_00001158:
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x3c
    lfs f0, 0x18(r23)
    lwz r5, 0x48(r4)
    addi r4, r1, 0x6c
    fctiwz f5, f0
    lfs f3, 0x7c(r1)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x70(r1)
    stfd f5, 0x158(r1)
    fsubs f5, f3, f0
    lfs f4, 0x80(r1)
    lfs f3, 0x78(r1)
    lfs f0, 0x6c(r1)
    fsubs f4, f4, f2
    stfs f2, 0x74(r1)
    fsubs f0, f3, f0
    lwz r17, 0x15c(r1)
    stfs f5, 0x40(r1)
    stfs f0, 0x3c(r1)
    stfs f4, 0x44(r1)
    bl fn_805F9940
    lfs f0, 0x1c(r23)
    fcmpo cr0, f0, f30
    ble lbl_fn_803F0764_00001208
    fdivs f0, f1, f0
    fcmpo cr0, f0, f30
    ble lbl_fn_803F0764_000011D4
    b lbl_fn_803F0764_000011D8
lbl_fn_803F0764_000011D4:
    fmr f0, f30
lbl_fn_803F0764_000011D8:
    fcmpo cr0, f0, f31
    bge lbl_fn_803F0764_000011FC
    lfs f0, 0x1c(r23)
    fdivs f0, f1, f0
    fcmpo cr0, f0, f30
    ble lbl_fn_803F0764_000011F4
    b lbl_fn_803F0764_00001200
lbl_fn_803F0764_000011F4:
    fmr f0, f30
    b lbl_fn_803F0764_00001200
lbl_fn_803F0764_000011FC:
    fmr f0, f31
lbl_fn_803F0764_00001200:
    fsubs f4, f31, f0
    b lbl_fn_803F0764_0000120C
lbl_fn_803F0764_00001208:
    lfs f4, lbl_80885F94
lbl_fn_803F0764_0000120C:
    fcmpo cr0, f4, f30
    ble lbl_fn_803F0764_0000124C
    lwz r4, lbl_8087F430
    lfs f3, 0x14(r23)
    lwz r0, 0x96c(r4)
    lfs f0, 0x10(r23)
    fmuls f3, f3, f4
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    fmuls f0, f0, f4
    subf r0, r3, r0
    stw r0, 0x96c(r4)
    stw r17, 0x970(r4)
    stfs f0, 0x974(r4)
    stfs f3, 0x978(r4)
lbl_fn_803F0764_0000124C:
    stw r29, 0x24(r23)
    b lbl_fn_803F0764_000013A0
lbl_fn_803F0764_00001254:
    psq_l f1, 0x10(r23), 0, 0
    addi r3, r1, 0xb8
    lfs f2, 0x18(r23)
    li r4, 0x79
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r24), 0, 0
    lfs f1, 0x7c(r16)
    bl fn_805F8E70
    mr r4, r24
    mr r5, r24
    addi r3, r1, 0xb8
    bl fn_805F93C0
    lwz r4, 0x20(r23)
    mr r3, r20
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_803F0764_000012A4
    li r3, 0x0
    b lbl_fn_803F0764_000012B0
lbl_fn_803F0764_000012A4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r20)
    add r3, r3, r0
lbl_fn_803F0764_000012B0:
    cmpwi r3, 0x0
    beq lbl_fn_803F0764_000012F8
    lfs f5, 0x2c(r3)
    lfs f6, 0x1c(r3)
    lfs f7, 0xc(r3)
    lfs f4, 0x60(r1)
    lfs f3, 0x64(r1)
    lfs f0, 0x68(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f7, 0x30(r1)
    fadds f0, f0, f5
    stfs f6, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f4, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    b lbl_fn_803F0764_00001328
lbl_fn_803F0764_000012F8:
    lfs f3, 0x60(r1)
    lfs f0, 0x6c(r16)
    lfs f4, 0x64(r1)
    fadds f0, f3, f0
    lfs f3, 0x68(r1)
    stfs f0, 0x60(r1)
    lfs f0, 0x70(r16)
    fadds f0, f4, f0
    stfs f0, 0x64(r1)
    lfs f0, 0x74(r16)
    fadds f0, f3, f0
    stfs f0, 0x68(r1)
lbl_fn_803F0764_00001328:
    lwz r0, 0xc(r23)
    lwz r3, 0x24(r15)
    slwi r0, r0, 5
    add r3, r3, r0
    bl fn_80684600
    lwz r21, lbl_8087F048
    mr r17, r3
    cmpwi r21, 0x0
    beq lbl_fn_803F0764_0000139C
    cmpwi r3, 0x0
    ble lbl_fn_803F0764_0000139C
    mr r3, r21
    bl fn_800F8548
    mr r30, r3
    mr r3, r17
    bl fn_80219E6C
    stw r28, 0x8(r1)
    mr r5, r3
    lfs f2, lbl_80885F94
    mr r3, r21
    stw r28, 0xc(r1)
    mr r6, r30
    addi r7, r1, 0x60
    addi r8, r16, 0x78
    lfs f1, 0x1c(r23)
    li r4, 0x0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_803F0764_0000139C:
    stw r29, 0x24(r23)
lbl_fn_803F0764_000013A0:
    addi r18, r18, 0x1
    addi r31, r31, 0x28
lbl_fn_803F0764_000013A8:
    lwz r0, 0x0(r15)
    cmplw r18, r0
    blt lbl_fn_803F0764_00000C10
lbl_fn_803F0764_000013B4:
    addi r11, r1, 0x1b0
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    psq_l f26, 0x1c8(r1), 0, 0
    lfd f26, 0x1c0(r1)
    psq_l f25, 0x1b8(r1), 0, 0
    lfd f25, 0x1b0(r1)
    bl _restgpr_14
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_803F10AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_fn_803F10AC_00001494
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803F10AC_00001440
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F10AC_0000145C
lbl_fn_803F10AC_00001440:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_803F10AC_0000145C
    lwz r5, 0x28(r31)
    mr r4, r31
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_803F10AC_0000145C:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_803F10AC_00001484
lbl_fn_803F10AC_00001468:
    lwz r0, 0x1c(r31)
    li r4, 0x0
    li r5, 0x0
    add r3, r0, r30
    bl fn_800CB5C8
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_803F10AC_00001484:
    lwz r0, 0x18(r31)
    cmplw r29, r0
    blt lbl_fn_803F10AC_00001468
    b lbl_fn_803F10AC_000014FC
lbl_fn_803F10AC_00001494:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803F10AC_000014AC
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F10AC_000014C8
lbl_fn_803F10AC_000014AC:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_803F10AC_000014C8
    lwz r5, 0x28(r31)
    mr r4, r31
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_803F10AC_000014C8:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_803F10AC_000014F0
lbl_fn_803F10AC_000014D4:
    lwz r0, 0x1c(r31)
    li r4, 0xf
    li r5, 0x0
    add r3, r0, r30
    bl fn_800CB5C8
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_803F10AC_000014F0:
    lwz r0, 0x18(r31)
    cmplw r29, r0
    blt lbl_fn_803F10AC_000014D4
lbl_fn_803F10AC_000014FC:
    li r6, 0x0
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_803F10AC_00001520
lbl_fn_803F10AC_0000150C:
    lwz r0, 0x4(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    addi r5, r5, 0x28
    stw r4, 0x24(r3)
lbl_fn_803F10AC_00001520:
    lwz r0, 0x0(r31)
    cmplw r6, r0
    blt lbl_fn_803F10AC_0000150C
    li r0, -0x1
    stw r0, 0x28(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F11F8(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_24
    lis r5, lbl_80752084@ha
    mr r24, r3
    addi r30, r5, lbl_80752084@l
    mr r3, r4
    addi r4, r30, 0x37
    bl fn_8008937C
    lis r31, lbl_80752040@ha
    mr r27, r3
    li r26, 0x0
    li r28, 0x0
    addi r31, r31, lbl_80752040@l
    b lbl_fn_803F11F8_00001644
lbl_fn_803F11F8_00001594:
    lwz r0, 0x4(r24)
    lwzx r3, r28, r0
    add r29, r0, r28
    bl fn_8021823C
    lwz r0, 0x8(r29)
    mr r5, r3
    addi r3, r1, 0x8
    addi r4, r30, 0x3e
    slwi r0, r0, 2
    lwzx r6, r31, r0
    crclr 6
    bl sprintf
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x45
    addi r5, r29, 0x4
    li r6, 0x0
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885F9C
    mr r3, r25
    lfs f2, lbl_80885FA0
    addi r4, r30, 0x4b
    lfs f3, lbl_80885F94
    addi r5, r29, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80885F90
    mr r3, r25
    lfs f2, lbl_80885FA0
    addi r4, r30, 0x52
    lfs f3, lbl_80885FA4
    addi r5, r29, 0x1c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r28, r28, 0x28
    addi r26, r26, 0x1
lbl_fn_803F11F8_00001644:
    lwz r0, 0x0(r24)
    cmplw r26, r0
    blt lbl_fn_803F11F8_00001594
    addi r11, r1, 0x130
    bl _restgpr_24
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_803F1310(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_803F1310_00001710
    lis r5, lbl_80752084@ha
    li r3, 0x160
    addi r5, r5, lbl_80752084@l
    li r4, 0xc
    addi r5, r5, 0x58
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803F1310_00001708
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_8078CB40@ha
    lis r4, fn_803F13D4@ha
    addi r3, r3, lbl_8078CB40@l
    stw r3, 0x0(r31)
    lis r5, fn_803F1418@ha
    li r8, 0x0
    stw r30, 0x48(r31)
    li r0, 0x1
    addi r3, r31, 0x60
    addi r4, r4, fn_803F13D4@l
    stw r8, 0x4c(r31)
    addi r5, r5, fn_803F1418@l
    li r6, 0x10
    li r7, 0x10
    stw r0, 0x50(r31)
    stw r0, 0x54(r31)
    stw r8, 0x58(r31)
    stw r8, 0x5c(r31)
    bl fn_806958E0
lbl_fn_803F1310_00001708:
    mr r3, r31
    b lbl_fn_803F1310_00001714
lbl_fn_803F1310_00001710:
    li r3, 0x0
lbl_fn_803F1310_00001714:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F13D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    addi r3, r3, 0xc
    bl fn_800CB360
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F1418(void)
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
    beq lbl_fn_803F1418_000017B0
    li r4, -0x1
    addi r3, r3, 0xc
    bl fn_800CB3A0
    cmpwi r31, 0x0
    ble lbl_fn_803F1418_000017B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_803F1418_000017B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F1474(void)
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
    beq lbl_fn_803F1474_00001844
    lis r5, lbl_8078CB40@ha
    li r4, 0x0
    addi r5, r5, lbl_8078CB40@l
    stw r5, 0x0(r3)
    bl fn_803F1A38
    addic. r3, r30, 0x5c
    beq lbl_fn_803F1474_00001828
    beq lbl_fn_803F1474_00001828
    lis r4, fn_803F1418@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_803F1418@l
    li r5, 0x10
    li r6, 0x10
    bl fn_806959D8
lbl_fn_803F1474_00001828:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803F1474_00001844
    mr r3, r30
    bl dtor_80084684
lbl_fn_803F1474_00001844:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F1508(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_22
    lwz r4, 0x58(r3)
    mr r26, r3
    cmpwi r4, 0x0
    ble lbl_fn_803F1508_000018A4
    subi r0, r4, 0x1
    stw r0, 0x58(r3)
    lwz r4, 0x48(r3)
    lwz r0, 0x54(r4)
    stw r0, 0x4c(r3)
    b lbl_fn_803F1508_00001998
lbl_fn_803F1508_000018A4:
    lwz r4, 0x48(r3)
    lwz r30, 0x4c(r3)
    lwz r29, 0x54(r4)
    cmpw r30, r29
    beq lbl_fn_803F1508_00001998
    li r4, 0x0
    bl fn_803F1A38
    li r31, 0x0
    lwz r28, lbl_8087F4A0
    mr r24, r31
    li r27, 0x0
    b lbl_fn_803F1508_00001988
lbl_fn_803F1508_000018D4:
    lwz r0, 0x64(r28)
    lwz r3, 0x48(r26)
    add r22, r0, r27
    lwzx r0, r27, r0
    lwz r3, 0x48(r3)
    cmpw r0, r3
    bne lbl_fn_803F1508_00001980
    lwz r0, 0x8(r22)
    cmpw r0, r29
    bne lbl_fn_803F1508_00001980
    lwz r0, 0x4(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803F1508_00001910
    cmpw r0, r30
    bne lbl_fn_803F1508_00001980
lbl_fn_803F1508_00001910:
    lwz r0, 0x5c(r26)
    cmplwi r0, 0x10
    bge lbl_fn_803F1508_00001980
    stw r24, 0x30(r1)
    addi r3, r1, 0x3c
    stw r24, 0x34(r1)
    stw r24, 0x38(r1)
    bl fn_800CB360
    stw r22, 0x30(r1)
    lwz r0, 0x5c(r26)
    slwi r0, r0, 4
    add r0, r26, r0
    addic. r5, r0, 0x60
    beq lbl_fn_803F1508_00001968
    stw r22, 0x0(r5)
    addi r3, r5, 0xc
    addi r4, r1, 0x3c
    lwz r0, 0x34(r1)
    stw r0, 0x4(r5)
    lwz r0, 0x38(r1)
    stw r0, 0x8(r5)
    bl fn_800CB36C
lbl_fn_803F1508_00001968:
    lwz r5, 0x5c(r26)
    addi r3, r1, 0x3c
    li r4, -0x1
    addi r0, r5, 0x1
    stw r0, 0x5c(r26)
    bl fn_800CB3A0
lbl_fn_803F1508_00001980:
    addi r31, r31, 0x1
    addi r27, r27, 0x4c
lbl_fn_803F1508_00001988:
    lwz r0, 0x5c(r28)
    cmplw r31, r0
    blt lbl_fn_803F1508_000018D4
    stw r29, 0x4c(r26)
lbl_fn_803F1508_00001998:
    lwz r0, 0x50(r26)
    cmpwi r0, 0x0
    bne lbl_fn_803F1508_000019B4
    mr r3, r26
    li r4, 0x1
    bl fn_803F1A38
    b lbl_fn_803F1508_00001D70
lbl_fn_803F1508_000019B4:
    lis r3, lbl_80752068@ha
    addi r27, r26, 0x60
    lfd f31, lbl_80752068@l(r3)
    addi r29, r1, 0x20
    lis r31, 0x4330
    li r30, 0x7
    li r24, 0x0
    li r25, 0x1
    b lbl_fn_803F1508_00001D58
lbl_fn_803F1508_000019D8:
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_803F1508_00001D54
    lwz r28, 0x0(r27)
    cmpwi r28, 0x0
    beq lbl_fn_803F1508_00001A00
    lwz r3, 0x8(r28)
    lwz r0, 0x4c(r26)
    cmpw r3, r0
    bne lbl_fn_803F1508_00001D54
lbl_fn_803F1508_00001A00:
    lwz r0, 0x54(r26)
    cmpwi r0, 0x0
    beq lbl_fn_803F1508_00001D48
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_803F1508_00001D48
    cmpwi r28, 0x0
    beq lbl_fn_803F1508_00001D48
    lwz r3, 0xc(r28)
    lwz r0, 0x4(r27)
    cmpw r3, r0
    bgt lbl_fn_803F1508_00001D48
    addi r3, r1, 0x10
    bl fn_800CB360
    addi r3, r28, 0x10
    li r4, 0x7
    li r5, 0x0
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_803F1508_00001D1C
    lwz r0, 0x5c(r26)
    addi r22, r26, 0x60
    slwi r0, r0, 4
    add r3, r26, r0
    addi r4, r3, 0x60
    b lbl_fn_803F1508_00001AA0
lbl_fn_803F1508_00001A68:
    cmplw r27, r22
    beq lbl_fn_803F1508_00001A9C
    lwz r3, 0x0(r22)
    lwz r0, 0x44(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803F1508_00001A9C
    addi r3, r1, 0x10
    addi r4, r22, 0xc
    bl fn_800CB440
    addi r3, r22, 0xc
    bl fn_800CB480
    b lbl_fn_803F1508_00001AA8
lbl_fn_803F1508_00001A9C:
    addi r22, r22, 0x10
lbl_fn_803F1508_00001AA0:
    cmplw r22, r4
    bne lbl_fn_803F1508_00001A68
lbl_fn_803F1508_00001AA8:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_803F1508_00001CB8
    addi r22, r26, 0x60
    b lbl_fn_803F1508_00001AE4
lbl_fn_803F1508_00001ABC:
    lwz r3, 0x0(r22)
    lwz r0, 0x44(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803F1508_00001AE0
    addi r3, r22, 0xc
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_803F1508_00001AE0:
    addi r22, r22, 0x10
lbl_fn_803F1508_00001AE4:
    lwz r0, 0x5c(r26)
    slwi r0, r0, 4
    add r3, r26, r0
    addi r0, r3, 0x60
    cmplw r22, r0
    bne lbl_fn_803F1508_00001ABC
    lwz r3, lbl_8087EFE8
    stw r30, 0x34d0(r3)
    lwz r0, 0x44(r28)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803F1508_00001C88
    psq_l f1, 0x30(r28), 0, 0
    addi r3, r1, 0x40
    lfs f2, 0x38(r28)
    li r4, 0x79
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r29), 0, 0
    lwz r5, 0x48(r26)
    lfs f1, 0x7c(r5)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x40
    bl fn_805F93C0
    lwz r3, 0x48(r26)
    li r22, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F1508_00001BAC
    lwz r3, 0x48(r26)
    lwz r22, 0x40(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r23, r3
    mr r4, r22
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_803F1508_00001BA0
    li r22, 0x0
    b lbl_fn_803F1508_00001BAC
lbl_fn_803F1508_00001BA0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r22, r3, r0
lbl_fn_803F1508_00001BAC:
    cmpwi r22, 0x0
    beq lbl_fn_803F1508_00001BF4
    lfs f5, 0x2c(r22)
    lfs f6, 0x1c(r22)
    lfs f7, 0xc(r22)
    lfs f4, 0x20(r1)
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f7, 0x14(r1)
    fadds f0, f0, f5
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    b lbl_fn_803F1508_00001C28
lbl_fn_803F1508_00001BF4:
    lwz r3, 0x48(r26)
    lfs f3, 0x20(r1)
    lfs f0, 0x6c(r3)
    lfs f4, 0x24(r1)
    fadds f0, f3, f0
    lfs f3, 0x28(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x70(r3)
    fadds f0, f4, f0
    stfs f0, 0x24(r1)
    lfs f0, 0x74(r3)
    fadds f0, f3, f0
    stfs f0, 0x28(r1)
lbl_fn_803F1508_00001C28:
    lfs f1, 0x3c(r28)
    addi r3, r1, 0xc
    addi r4, r28, 0x10
    addi r5, r1, 0x20
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_800CB440
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803F1508_00001CB8
    stw r0, 0x74(r1)
    addi r3, r1, 0x10
    li r4, 0x1
    stw r31, 0x70(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    bl fn_800CB6B0
    b lbl_fn_803F1508_00001CB8
lbl_fn_803F1508_00001C88:
    lfs f1, 0x3c(r28)
    addi r3, r1, 0x8
    addi r4, r28, 0x10
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803F1508_00001CB8:
    lwz r0, 0x44(r28)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803F1508_00001CD4
    addi r3, r1, 0x10
    li r4, 0x1e
    bl fn_800CB518
lbl_fn_803F1508_00001CD4:
    lwz r0, 0x44(r28)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803F1508_00001CF4
    lfs f1, lbl_80885FA8
    addi r3, r1, 0x10
    li r4, 0xf0
    bl fn_800CB688
lbl_fn_803F1508_00001CF4:
    lwz r0, 0x44(r28)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_803F1508_00001D14
    lfs f1, lbl_80885FA4
    addi r3, r1, 0x10
    li r4, 0xf0
    bl fn_800CB688
lbl_fn_803F1508_00001D14:
    lwz r3, lbl_8087EFE8
    stw r24, 0x34d0(r3)
lbl_fn_803F1508_00001D1C:
    lwz r0, 0x44(r28)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803F1508_00001D38
    addi r3, r27, 0xc
    addi r4, r1, 0x10
    bl fn_800CB440
lbl_fn_803F1508_00001D38:
    stw r25, 0x8(r27)
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803F1508_00001D48:
    lwz r3, 0x4(r27)
    addi r0, r3, 0x1
    stw r0, 0x4(r27)
lbl_fn_803F1508_00001D54:
    addi r27, r27, 0x10
lbl_fn_803F1508_00001D58:
    lwz r0, 0x5c(r26)
    slwi r0, r0, 4
    add r3, r26, r0
    addi r0, r3, 0x60
    cmplw r27, r0
    bne lbl_fn_803F1508_000019D8
lbl_fn_803F1508_00001D70:
    addi r11, r1, 0xa0
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    bl _restgpr_22
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
