#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80017E90(void);
extern void fn_80017EB0(void);
extern void fn_800697D8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800FDE60(void);
extern void fn_8011CD84(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_801333E4(void);
extern void fn_80133B30(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_801539E0(void);
extern void fn_80183930(void);
extern void fn_80219558(void);
extern void fn_8036554C(void);
extern void fn_80370174(void);
extern void fn_80370A78(void);
extern void fn_80370BD0(void);
extern void fn_80371334(void);
extern void fn_80373148(void);
extern void fn_8039BF04(void);
extern void fn_803CAABC(void);
extern void fn_803EBAC8(void);
extern void fn_803EEE10(void);
extern void fn_8047EA34(void);
extern void fn_8047EFD8(void);
extern void fn_8047F420(void);
extern void fn_8047F498(void);
extern void fn_8047F510(void);
extern void fn_805AE458(void);
extern void fn_805AE5EC(void);
extern void fn_805AE750(void);
extern void fn_805AE868(void);
extern void fn_805AE9BC(void);
extern void fn_805AE9D4(void);
extern void fn_805AEA0C(void);
extern void fn_805AEA44(void);
extern void fn_805B38B8(void);
extern void fn_805B3A6C(void);
extern void fn_805B3C20(void);
extern void fn_805B3CE0(void);
extern void fn_805B3E68(void);
extern void fn_805B3F24(void);
extern void fn_805B3FD4(void);
extern void fn_805B4D94(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8078AF44[];
extern u8 lbl_8074ED24[];
extern u8 lbl_8074EF78[];
extern u8 lbl_8074F5E8[];
extern u8 lbl_8074F5F0[];
extern u8 lbl_8074F8CC[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F098;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA00;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B24;
extern u32 lbl_80885B30;
extern u32 lbl_80885B3C;
extern u32 lbl_80885B48;
extern u32 lbl_80885B74;
extern u32 lbl_80885B78;
extern u32 lbl_80885B7C;
extern u32 lbl_80885B80;
extern u32 lbl_80885B84;
extern u32 lbl_80885B88;
extern u32 lbl_80885B8C;
extern u32 lbl_80885B90;
extern u32 lbl_80885B94;

/* Function declarations */
void fn_8039FBFC(void);
void fn_803A0040(void);
void fn_803A02C8(void);
void fn_803A03A0(void);
void fn_803A03C8(void);
void fn_803A04B8(void);
void fn_803A04C0(void);
void fn_803A0520(void);
void fn_803A064C(void);
void fn_803A08D4(void);
void fn_803A0AB8(void);
void fn_803A0B1C(void);
void fn_803A0B80(void);
void fn_803A0BE4(void);
void fn_803A0C48(void);
void fn_803A0CAC(void);
void fn_803A0D10(void);
void fn_803A0D74(void);
void fn_803A0F4C(void);
void fn_803A11D8(void);

asm void fn_8039FBFC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    lis r0, 0x4330
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r5
    stw r0, 0x20(r1)
    stw r0, 0x28(r1)
    beq lbl_fn_8039FBFC_00000428
    lwz r3, lbl_8087F430
    lwz r31, 0x18(r5)
    cmpwi r3, 0x0
    lwz r0, 0x14(r5)
    bne lbl_fn_8039FBFC_00000050
    li r31, 0x0
    b lbl_fn_8039FBFC_0000009C
lbl_fn_8039FBFC_00000050:
    cmpwi r0, 0x2
    bne lbl_fn_8039FBFC_00000068
    mr r4, r31
    bl fn_80370174
    mr r31, r3
    b lbl_fn_8039FBFC_0000009C
lbl_fn_8039FBFC_00000068:
    cmpwi r0, 0x1
    bne lbl_fn_8039FBFC_00000080
    mr r4, r31
    bl fn_80370A78
    mr r31, r3
    b lbl_fn_8039FBFC_0000009C
lbl_fn_8039FBFC_00000080:
    cmpwi r0, 0x3
    bne lbl_fn_8039FBFC_0000009C
    bl fn_80680CF8
    divw r0, r3, r31
    mullw r0, r0, r31
    subf r3, r0, r3
    addi r31, r3, 0x1
lbl_fn_8039FBFC_0000009C:
    lwz r0, 0x10(r29)
    cmplwi r0, 0x11
    bgt lbl_fn_8039FBFC_00000428
    lis r3, jumptable_8078AF44@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078AF44@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x940(r30)
    lis r29, lbl_8074F5E8@ha
    lfd f2, lbl_8074F5E8@l(r29)
    addi r3, r30, 0x7d4
    mullw r0, r31, r0
    lfs f0, lbl_80885B78
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f1, 0x20(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    stfs f0, 0x7d8(r30)
    bl fn_801333E4
    xoris r0, r31, 0x8000
    stw r0, 0x2c(r1)
    lfd f2, lbl_8074F5E8@l(r29)
    lfd f0, 0x28(r1)
    lfs f1, lbl_80885B10
    fsubs f0, f0, f2
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8039FBFC_00000144
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8039FBFC_00000144
    lfs f0, lbl_80885B30
    mr r5, r30
    stfs f1, 0x10(r1)
    addi r6, r1, 0x10
    li r4, 0x0
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_800FDE60
lbl_fn_8039FBFC_00000144:
    xoris r0, r31, 0x8000
    stw r0, 0x24(r1)
    lis r3, lbl_8074F5E8@ha
    lfs f0, lbl_80885B7C
    lfd f2, lbl_8074F5E8@l(r3)
    lfd f1, 0x20(r1)
    fsubs f1, f1, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_8039FBFC_00000428
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8039FBFC_00000428
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8039FBFC_00000428
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8039FBFC_00000428
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x43
    bne lbl_fn_8039FBFC_00000428
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8039FBFC_00000428
    addi r3, r30, 0x7d4
    bl fn_8012D8B8
    b lbl_fn_8039FBFC_00000428
    xoris r0, r31, 0x8000
    stw r0, 0x2c(r1)
    lis r3, lbl_8074F5E8@ha
    lfs f0, lbl_80885B78
    lfd f2, lbl_8074F5E8@l(r3)
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    stfs f0, 0x568(r30)
    b lbl_fn_8039FBFC_00000428
    cmpwi r31, 0x0
    beq lbl_fn_8039FBFC_00000208
    lwz r0, 0x958(r30)
    ori r0, r0, 0x1
    stw r0, 0x958(r30)
    b lbl_fn_8039FBFC_00000428
lbl_fn_8039FBFC_00000208:
    lwz r0, 0x958(r30)
    clrrwi r0, r0, 1
    stw r0, 0x958(r30)
    b lbl_fn_8039FBFC_00000428
    stw r31, 0xd18(r30)
    b lbl_fn_8039FBFC_00000428
    stw r31, 0xd0c(r30)
    b lbl_fn_8039FBFC_00000428
    cmpwi r31, 0x0
    beq lbl_fn_8039FBFC_00000240
    lwz r0, 0xd30(r30)
    ori r0, r0, 0x1
    stw r0, 0xd30(r30)
    b lbl_fn_8039FBFC_00000428
lbl_fn_8039FBFC_00000240:
    lwz r0, 0xd30(r30)
    clrrwi r0, r0, 1
    stw r0, 0xd30(r30)
    b lbl_fn_8039FBFC_00000428
    cmpwi r31, 0x0
    beq lbl_fn_8039FBFC_0000027C
    lwz r0, 0x650(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8039FBFC_0000027C
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_8039FBFC_00000428
lbl_fn_8039FBFC_0000027C:
    mr r3, r30
    li r4, 0x0
    bl fn_8014EEC4
    b lbl_fn_8039FBFC_00000428
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8039FBFC_00000428
    mr r4, r30
    mr r5, r31
    addi r3, r30, 0xd74
    bl fn_8011CD84
    b lbl_fn_8039FBFC_00000428
    cmpwi r31, 0x0
    beq lbl_fn_8039FBFC_000002C4
    lwz r0, 0x54c(r30)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r30)
    b lbl_fn_8039FBFC_00000428
lbl_fn_8039FBFC_000002C4:
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r30)
    b lbl_fn_8039FBFC_00000428
    cmpwi r31, 0x5
    stw r31, 0x9f8(r30)
    bge lbl_fn_8039FBFC_00000428
    li r0, 0x0
    stw r0, 0xad4(r30)
    b lbl_fn_8039FBFC_00000428
    lwz r0, 0x874(r30)
    lis r3, lbl_8074F5E8@ha
    lfd f2, lbl_8074F5E8@l(r3)
    addi r3, r30, 0x7d4
    subf r0, r0, r31
    lfs f0, 0x984(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f1, 0x20(r1)
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x984(r30)
    bl fn_8012B3E8
    addi r3, r30, 0x7d4
    bl fn_8012B988
    addi r3, r30, 0x7d4
    bl fn_8012D8B8
    b lbl_fn_8039FBFC_00000428
    mr r4, r31
    addi r3, r30, 0x7d4
    bl fn_80133B30
    addi r3, r30, 0x7d4
    bl fn_8012D8B8
    b lbl_fn_8039FBFC_00000428
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8039FBFC_00000428
    cmpwi r31, 0x1
    bne lbl_fn_8039FBFC_000003A8
    lwz r0, 0x38(r30)
    li r3, 0x3
    stb r3, 0xd75(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8039FBFC_00000428
    lis r4, lbl_8074EF78@ha
    lfs f1, lbl_80885B30
    addi r4, r4, lbl_8074EF78@l
    addi r3, r1, 0xc
    lwz r4, 0x18(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8039FBFC_00000428
lbl_fn_8039FBFC_000003A8:
    cmpwi r31, 0x2
    bne lbl_fn_8039FBFC_000003F8
    lwz r0, 0x38(r30)
    li r3, 0x1
    stb r3, 0xd75(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8039FBFC_00000428
    lis r4, lbl_8074EF78@ha
    lfs f1, lbl_80885B30
    addi r4, r4, lbl_8074EF78@l
    addi r3, r1, 0x8
    lwz r4, 0x1c(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8039FBFC_00000428
lbl_fn_8039FBFC_000003F8:
    li r0, 0x0
    stb r0, 0xd75(r30)
    b lbl_fn_8039FBFC_00000428
    lwz r0, 0xf14(r30)
    stw r0, 0xf18(r30)
    stw r31, 0xf14(r30)
    b lbl_fn_8039FBFC_00000428
    neg r3, r31
    lwz r0, 0x12a8(r30)
    or r3, r3, r31
    rlwimi r0, r3, 15, 17, 17
    stw r0, 0x12a8(r30)
lbl_fn_8039FBFC_00000428:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803A0040(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x8(r5)
    mr r29, r4
    lwz r3, lbl_8087F8A0
    mr r30, r5
    cmpwi r0, 0x0
    lwz r31, 0x48(r3)
    beq lbl_fn_803A0040_00000494
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_803A0040_000004CC
lbl_fn_803A0040_00000494:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_803A0040_000004AC
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_803A0040_000004AC:
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_803A0040_000004C0
    mr r3, r31
    bl fn_801539E0
lbl_fn_803A0040_000004C0:
    mr r3, r31
    li r4, 0x0
    bl fn_8014EEC4
lbl_fn_803A0040_000004CC:
    lwz r4, 0xc(r30)
    lis r0, 0x4330
    lis r5, lbl_8074F5E8@ha
    lwz r3, lbl_8087F408
    xoris r4, r4, 0x8000
    stw r4, 0x24(r1)
    lfd f1, lbl_8074F5E8@l(r5)
    stw r0, 0x20(r1)
    lwz r28, 0x8(r30)
    lfd f0, 0x20(r1)
    lwz r27, 0x48(r3)
    fsubs f0, f0, f1
    fmuls f31, f0, f0
    b lbl_fn_803A0040_000005A0
lbl_fn_803A0040_00000504:
    lfs f1, 0x530(r27)
    addi r3, r1, 0x14
    lfs f0, 0x530(r31)
    lfs f3, 0x52c(r27)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r27)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803A0040_0000059C
    cmpwi r28, 0x0
    beq lbl_fn_803A0040_00000564
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_803A0040_0000059C
lbl_fn_803A0040_00000564:
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_803A0040_0000057C
    lwz r0, 0x12a4(r27)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r27)
lbl_fn_803A0040_0000057C:
    lwz r0, 0x12a4(r27)
    srwi. r0, r0, 31
    beq lbl_fn_803A0040_00000590
    mr r3, r27
    bl fn_801539E0
lbl_fn_803A0040_00000590:
    mr r3, r27
    li r4, 0x0
    bl fn_8014EEC4
lbl_fn_803A0040_0000059C:
    lwz r27, 0x14ac(r27)
lbl_fn_803A0040_000005A0:
    cmpwi r27, 0x0
    bne lbl_fn_803A0040_00000504
    lwz r4, 0xc(r30)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lis r3, lbl_8074F5E8@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8074F5E8@l(r3)
    stw r0, 0x24(r1)
    lwz r27, 0x8(r30)
    lfd f0, 0x20(r1)
    lwz r3, lbl_8087F428
    fsubs f31, f0, f1
    bl fn_8036554C
    fmuls f31, f31, f31
    mr r28, r3
    b lbl_fn_803A0040_00000680
lbl_fn_803A0040_000005E4:
    lfs f1, 0x530(r28)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f3, 0x52c(r28)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x528(r28)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_803A0040_0000067C
    cmpwi r27, 0x0
    beq lbl_fn_803A0040_00000644
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    b lbl_fn_803A0040_0000067C
lbl_fn_803A0040_00000644:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_803A0040_0000065C
    lwz r0, 0x12a4(r28)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r28)
lbl_fn_803A0040_0000065C:
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_803A0040_00000670
    mr r3, r28
    bl fn_801539E0
lbl_fn_803A0040_00000670:
    mr r3, r28
    li r4, 0x0
    bl fn_8014EEC4
lbl_fn_803A0040_0000067C:
    lwz r28, 0x14ac(r28)
lbl_fn_803A0040_00000680:
    cmpwi r28, 0x0
    bne lbl_fn_803A0040_000005E4
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803A02C8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    lwz r4, 0x8(r5)
    lwz r3, lbl_8087F4A0
    lwz r5, 0xc(r5)
    bl fn_803EEE10
    cmpwi r3, 0x0
    beq lbl_fn_803A02C8_00000768
    lwz r0, 0x14(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A02C8_00000754
    lfs f0, lbl_80885B10
    li r0, 0x0
    lwz r5, 0x10(r31)
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803A02C8_00000768
lbl_fn_803A02C8_00000754:
    lwz r12, 0x0(r3)
    lwz r4, 0x10(r31)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
lbl_fn_803A02C8_00000768:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803A03A0(void)
{
    nofralloc
    lwz r6, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r4)
    slwi r0, r6, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803A03C8(void)
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
    lwz r6, lbl_8087F4A0
    lwz r3, 0x48(r6)
    b lbl_fn_803A03C8_00000874
lbl_fn_803A03C8_000007FC:
    lwz r4, 0x8(r5)
    lwz r0, 0x48(r3)
    cmpw r4, r0
    bne lbl_fn_803A03C8_00000870
    lwz r4, 0xc(r5)
    lwz r0, 0x4c(r3)
    cmpw r4, r0
    bne lbl_fn_803A03C8_00000870
    lwz r5, 0x10(r5)
    li r8, 0x0
    subi r4, r5, 0x1
    cmplwi r4, 0x2
    ble lbl_fn_803A03C8_00000840
    cmpwi r5, 0x0
    bne lbl_fn_803A03C8_00000854
    lwz r8, 0x54(r3)
    b lbl_fn_803A03C8_00000854
lbl_fn_803A03C8_00000840:
    lwz r12, 0x0(r3)
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    mr r8, r3
lbl_fn_803A03C8_00000854:
    lwz r4, 0x14(r31)
    mr r3, r29
    lwz r5, 0x18(r31)
    li r6, 0x0
    li r7, 0x0
    bl fn_8039BF04
    b lbl_fn_803A03C8_0000087C
lbl_fn_803A03C8_00000870:
    lwz r3, 0x5c(r3)
lbl_fn_803A03C8_00000874:
    cmpwi r3, 0x0
    bne lbl_fn_803A03C8_000007FC
lbl_fn_803A03C8_0000087C:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A04B8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_803A04C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, 0x88(r3)
    bl fn_803CAABC
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A0520(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x8(r5)
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803A0520_00000978
    cmpwi r6, 0x1
    beq lbl_fn_803A0520_000009A4
    cmpwi r6, 0x2
    beq lbl_fn_803A0520_000009E0
    cmpwi r6, 0x3
    beq lbl_fn_803A0520_000009F4
    b lbl_fn_803A0520_00000A04
lbl_fn_803A0520_00000978:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A0520_00000990
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A0520_0000099C
lbl_fn_803A0520_00000990:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A0520_0000099C:
    mr r4, r3
    b lbl_fn_803A0520_00000A04
lbl_fn_803A0520_000009A4:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r4, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A0520_00000A04
    cmpwi r3, 0x0
    beq lbl_fn_803A0520_00000A04
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A0520_00000A04
    li r4, 0x0
    b lbl_fn_803A0520_00000A04
lbl_fn_803A0520_000009E0:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r4, r3
    b lbl_fn_803A0520_00000A04
lbl_fn_803A0520_000009F4:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r4, r3
lbl_fn_803A0520_00000A04:
    mr r3, r29
    mr r5, r31
    bl fn_8039FBFC
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A064C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    lwz r6, 0x8(r5)
    stw r0, 0x134(r1)
    cmpwi r6, 0x3
    stmw r25, 0x114(r1)
    mr r29, r4
    mr r30, r5
    li r31, 0x0
    bne lbl_fn_803A064C_00000A84
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    ble lbl_fn_803A064C_00000B34
lbl_fn_803A064C_00000A84:
    cmpwi r6, 0x0
    lwz r4, 0xc(r5)
    li r31, 0x0
    beq lbl_fn_803A064C_00000AB0
    cmpwi r6, 0x1
    beq lbl_fn_803A064C_00000ADC
    cmpwi r6, 0x2
    beq lbl_fn_803A064C_00000B14
    cmpwi r6, 0x3
    beq lbl_fn_803A064C_00000B24
    b lbl_fn_803A064C_00000C1C
lbl_fn_803A064C_00000AB0:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A064C_00000AC8
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A064C_00000AD4
lbl_fn_803A064C_00000AC8:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A064C_00000AD4:
    mr r31, r3
    b lbl_fn_803A064C_00000C1C
lbl_fn_803A064C_00000ADC:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A064C_00000C1C
    cmpwi r3, 0x0
    beq lbl_fn_803A064C_00000C1C
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A064C_00000C1C
    li r31, 0x0
    b lbl_fn_803A064C_00000C1C
lbl_fn_803A064C_00000B14:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r31, r3
    b lbl_fn_803A064C_00000C1C
lbl_fn_803A064C_00000B24:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r31, r3
    b lbl_fn_803A064C_00000C1C
lbl_fn_803A064C_00000B34:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A064C_00000C1C
    lwz r25, 0x48(r3)
    li r31, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    b lbl_fn_803A064C_00000BE4
lbl_fn_803A064C_00000B58:
    lwz r0, 0x48(r25)
    cmpwi r0, 0x0
    beq lbl_fn_803A064C_00000BE0
    lwz r0, 0x38(r25)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A064C_00000BE0
    lwz r0, 0x54c(r25)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803A064C_00000BE0
    lwz r3, 0x50(r25)
    bl fn_80219558
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_803A064C_00000BC4
    cmpwi r3, 0x4
    beq lbl_fn_803A064C_00000BB4
    cmpwi r3, 0x6
    beq lbl_fn_803A064C_00000BBC
    cmpwi r3, 0x1
    beq lbl_fn_803A064C_00000BC4
    b lbl_fn_803A064C_00000BCC
lbl_fn_803A064C_00000BB4:
    mr r31, r25
    b lbl_fn_803A064C_00000BE0
lbl_fn_803A064C_00000BBC:
    mr r28, r25
    b lbl_fn_803A064C_00000BE0
lbl_fn_803A064C_00000BC4:
    mr r27, r25
    b lbl_fn_803A064C_00000BE0
lbl_fn_803A064C_00000BCC:
    lwz r3, 0x5c(r25)
    lbz r0, 0x122(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803A064C_00000BE0
    mr r26, r25
lbl_fn_803A064C_00000BE0:
    lwz r25, 0x14ac(r25)
lbl_fn_803A064C_00000BE4:
    cmpwi r25, 0x0
    bne lbl_fn_803A064C_00000B58
    cmpwi r31, 0x0
    beq lbl_fn_803A064C_00000BF8
    b lbl_fn_803A064C_00000C1C
lbl_fn_803A064C_00000BF8:
    cmpwi r28, 0x0
    beq lbl_fn_803A064C_00000C08
    mr r31, r28
    b lbl_fn_803A064C_00000C1C
lbl_fn_803A064C_00000C08:
    cmpwi r27, 0x0
    beq lbl_fn_803A064C_00000C18
    mr r31, r27
    b lbl_fn_803A064C_00000C1C
lbl_fn_803A064C_00000C18:
    mr r31, r26
lbl_fn_803A064C_00000C1C:
    cmpwi r31, 0x0
    beq lbl_fn_803A064C_00000C3C
    lwz r3, lbl_8087EE68
    mr r4, r31
    lwz r5, 0x10(r30)
    lwz r6, 0x14(r30)
    bl fn_80017EB0
    b lbl_fn_803A064C_00000CA0
lbl_fn_803A064C_00000C3C:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803A064C_00000CA0
    lis r3, 0x1062
    lwz r9, 0x10(r30)
    addi r0, r3, 0x4dd3
    lis r4, lbl_8074F8CC@ha
    mulhw r0, r0, r9
    lwz r7, 0x14(r30)
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r1, 0x8
    addi r4, r4, 0xe2
    srawi r6, r0, 6
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_803A064C_00000CA0:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lmw r25, 0x114(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_803A08D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x8(r5)
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_803A08D4_00000D30
    cmpwi r6, 0x1
    beq lbl_fn_803A08D4_00000D5C
    cmpwi r6, 0x2
    beq lbl_fn_803A08D4_00000D98
    cmpwi r6, 0x3
    beq lbl_fn_803A08D4_00000DAC
    b lbl_fn_803A08D4_00000DBC
lbl_fn_803A08D4_00000D30:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A08D4_00000D48
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A08D4_00000D54
lbl_fn_803A08D4_00000D48:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A08D4_00000D54:
    mr r29, r3
    b lbl_fn_803A08D4_00000DBC
lbl_fn_803A08D4_00000D5C:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A08D4_00000DBC
    cmpwi r3, 0x0
    beq lbl_fn_803A08D4_00000DBC
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A08D4_00000DBC
    li r29, 0x0
    b lbl_fn_803A08D4_00000DBC
lbl_fn_803A08D4_00000D98:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r29, r3
    b lbl_fn_803A08D4_00000DBC
lbl_fn_803A08D4_00000DAC:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r29, r3
lbl_fn_803A08D4_00000DBC:
    lwz r0, 0x10(r31)
    li r5, 0x0
    lwz r4, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A08D4_00000DEC
    cmpwi r0, 0x1
    beq lbl_fn_803A08D4_00000E18
    cmpwi r0, 0x2
    beq lbl_fn_803A08D4_00000E50
    cmpwi r0, 0x3
    beq lbl_fn_803A08D4_00000E60
    b lbl_fn_803A08D4_00000E6C
lbl_fn_803A08D4_00000DEC:
    lwz r0, 0xdc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803A08D4_00000E04
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A08D4_00000E10
lbl_fn_803A08D4_00000E04:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A08D4_00000E10:
    mr r5, r3
    b lbl_fn_803A08D4_00000E6C
lbl_fn_803A08D4_00000E18:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A08D4_00000E6C
    cmpwi r3, 0x0
    beq lbl_fn_803A08D4_00000E6C
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A08D4_00000E6C
    li r5, 0x0
    b lbl_fn_803A08D4_00000E6C
lbl_fn_803A08D4_00000E50:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r5, r3
    b lbl_fn_803A08D4_00000E6C
lbl_fn_803A08D4_00000E60:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r5, r3
lbl_fn_803A08D4_00000E6C:
    lwz r3, lbl_8087EE68
    mr r4, r29
    bl fn_80017E90
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A0AB8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B38B8
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A0B1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B3A6C
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A0B80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B3CE0
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A0BE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B3E68
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A0C48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B3C20
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A0CAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B3F24
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A0D10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r31
    lwz r3, lbl_8087FA00
    bl fn_805B3FD4
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A0D74(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r0, 0xc(r5)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    bne lbl_fn_803A0D74_0000121C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A0D74_000011B8
    lwz r7, 0x48(r3)
    b lbl_fn_803A0D74_000011BC
lbl_fn_803A0D74_000011B8:
    li r7, 0x0
lbl_fn_803A0D74_000011BC:
    cmpwi r7, 0x0
    beq lbl_fn_803A0D74_00001314
    lwz r0, 0x10(r5)
    cmpwi r0, 0x4
    beq lbl_fn_803A0D74_000011DC
    cmpwi r0, 0x5
    beq lbl_fn_803A0D74_000011FC
    b lbl_fn_803A0D74_00001314
lbl_fn_803A0D74_000011DC:
    lwz r4, 0x14(r5)
    mr r3, r27
    lwz r8, 0xd18(r7)
    li r6, 0x0
    lwz r5, 0x18(r5)
    li r7, 0x0
    bl fn_8039BF04
    b lbl_fn_803A0D74_00001314
lbl_fn_803A0D74_000011FC:
    lwz r4, 0x14(r5)
    mr r3, r27
    lwz r8, 0xd0c(r7)
    li r6, 0x0
    lwz r5, 0x18(r5)
    li r7, 0x0
    bl fn_8039BF04
    b lbl_fn_803A0D74_00001314
lbl_fn_803A0D74_0000121C:
    lwz r4, 0x8(r5)
    mr r5, r0
    lwz r3, lbl_8087FA00
    bl fn_805B4D94
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803A0D74_00001314
    lwz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803A0D74_00001278
    cmpwi r0, 0x1
    beq lbl_fn_803A0D74_000012AC
    cmpwi r0, 0x2
    beq lbl_fn_803A0D74_000012C0
    cmpwi r0, 0x3
    beq lbl_fn_803A0D74_000012D4
    cmpwi r0, 0x4
    beq lbl_fn_803A0D74_000012DC
    cmpwi r0, 0x5
    beq lbl_fn_803A0D74_000012E4
    cmpwi r0, 0x6
    beq lbl_fn_803A0D74_000012EC
    b lbl_fn_803A0D74_00001338
lbl_fn_803A0D74_00001278:
    bl fn_805AE458
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r30, 0xc(r1)
    cmpwi r30, 0x0
    bne lbl_fn_803A0D74_000012F8
    mr r3, r31
    bl fn_805AE458
    lfs f0, lbl_80885B10
    fcmpo cr0, f1, f0
    ble lbl_fn_803A0D74_000012F8
    li r30, 0x1
    b lbl_fn_803A0D74_000012F8
lbl_fn_803A0D74_000012AC:
    bl fn_805AE5EC
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r30, 0xc(r1)
    b lbl_fn_803A0D74_000012F8
lbl_fn_803A0D74_000012C0:
    bl fn_805AE750
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r30, 0xc(r1)
    b lbl_fn_803A0D74_000012F8
lbl_fn_803A0D74_000012D4:
    lbz r30, 0x23f(r3)
    b lbl_fn_803A0D74_000012F8
lbl_fn_803A0D74_000012DC:
    lbz r30, 0x240(r3)
    b lbl_fn_803A0D74_000012F8
lbl_fn_803A0D74_000012E4:
    lbz r30, 0x241(r3)
    b lbl_fn_803A0D74_000012F8
lbl_fn_803A0D74_000012EC:
    lbz r30, 0x242(r3)
    b lbl_fn_803A0D74_000012F8
    b lbl_fn_803A0D74_00001338
lbl_fn_803A0D74_000012F8:
    lwz r4, 0x14(r29)
    mr r3, r27
    lwz r5, 0x18(r29)
    mr r8, r30
    li r6, 0x0
    li r7, 0x0
    bl fn_8039BF04
lbl_fn_803A0D74_00001314:
    lwz r4, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r28)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r29, r0
    stw r0, 0x0(r28)
lbl_fn_803A0D74_00001338:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803A0F4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bne lbl_fn_803A0F4C_00001490
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A0F4C_00001394
    lwz r28, 0x48(r3)
    b lbl_fn_803A0F4C_00001398
lbl_fn_803A0F4C_00001394:
    li r28, 0x0
lbl_fn_803A0F4C_00001398:
    cmpwi r28, 0x0
    beq lbl_fn_803A0F4C_00001598
    lwz r0, 0x10(r5)
    cmpwi r0, 0x4
    beq lbl_fn_803A0F4C_000013B8
    cmpwi r0, 0x5
    beq lbl_fn_803A0F4C_00001424
    b lbl_fn_803A0F4C_00001598
lbl_fn_803A0F4C_000013B8:
    lwz r3, lbl_8087F430
    lwz r29, 0x18(r5)
    cmpwi r3, 0x0
    lwz r0, 0x14(r5)
    bne lbl_fn_803A0F4C_000013D4
    li r3, 0x0
    b lbl_fn_803A0F4C_0000141C
lbl_fn_803A0F4C_000013D4:
    cmpwi r0, 0x2
    bne lbl_fn_803A0F4C_000013E8
    mr r4, r29
    bl fn_80370174
    b lbl_fn_803A0F4C_0000141C
lbl_fn_803A0F4C_000013E8:
    cmpwi r0, 0x1
    bne lbl_fn_803A0F4C_000013FC
    mr r4, r29
    bl fn_80370A78
    b lbl_fn_803A0F4C_0000141C
lbl_fn_803A0F4C_000013FC:
    cmpwi r0, 0x3
    bne lbl_fn_803A0F4C_00001418
    bl fn_80680CF8
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r3, r0, r3
    addi r29, r3, 0x1
lbl_fn_803A0F4C_00001418:
    mr r3, r29
lbl_fn_803A0F4C_0000141C:
    stw r3, 0xd18(r28)
    b lbl_fn_803A0F4C_00001598
lbl_fn_803A0F4C_00001424:
    lwz r3, lbl_8087F430
    lwz r29, 0x18(r5)
    cmpwi r3, 0x0
    lwz r0, 0x14(r5)
    bne lbl_fn_803A0F4C_00001440
    li r3, 0x0
    b lbl_fn_803A0F4C_00001488
lbl_fn_803A0F4C_00001440:
    cmpwi r0, 0x2
    bne lbl_fn_803A0F4C_00001454
    mr r4, r29
    bl fn_80370174
    b lbl_fn_803A0F4C_00001488
lbl_fn_803A0F4C_00001454:
    cmpwi r0, 0x1
    bne lbl_fn_803A0F4C_00001468
    mr r4, r29
    bl fn_80370A78
    b lbl_fn_803A0F4C_00001488
lbl_fn_803A0F4C_00001468:
    cmpwi r0, 0x3
    bne lbl_fn_803A0F4C_00001484
    bl fn_80680CF8
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r3, r0, r3
    addi r29, r3, 0x1
lbl_fn_803A0F4C_00001484:
    mr r3, r29
lbl_fn_803A0F4C_00001488:
    stw r3, 0xd0c(r28)
    b lbl_fn_803A0F4C_00001598
lbl_fn_803A0F4C_00001490:
    lwz r4, 0x8(r5)
    mr r5, r0
    lwz r3, lbl_8087FA00
    bl fn_805B4D94
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_803A0F4C_00001598
    lwz r3, lbl_8087F430
    lwz r29, 0x18(r31)
    cmpwi r3, 0x0
    lwz r0, 0x14(r31)
    bne lbl_fn_803A0F4C_000014C8
    li r29, 0x0
    b lbl_fn_803A0F4C_00001514
lbl_fn_803A0F4C_000014C8:
    cmpwi r0, 0x2
    bne lbl_fn_803A0F4C_000014E0
    mr r4, r29
    bl fn_80370174
    mr r29, r3
    b lbl_fn_803A0F4C_00001514
lbl_fn_803A0F4C_000014E0:
    cmpwi r0, 0x1
    bne lbl_fn_803A0F4C_000014F8
    mr r4, r29
    bl fn_80370A78
    mr r29, r3
    b lbl_fn_803A0F4C_00001514
lbl_fn_803A0F4C_000014F8:
    cmpwi r0, 0x3
    bne lbl_fn_803A0F4C_00001514
    bl fn_80680CF8
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r3, r0, r3
    addi r29, r3, 0x1
lbl_fn_803A0F4C_00001514:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A0F4C_00001544
    cmpwi r0, 0x3
    beq lbl_fn_803A0F4C_00001554
    cmpwi r0, 0x4
    beq lbl_fn_803A0F4C_00001564
    cmpwi r0, 0x5
    beq lbl_fn_803A0F4C_00001574
    cmpwi r0, 0x6
    beq lbl_fn_803A0F4C_00001584
    b lbl_fn_803A0F4C_000015BC
lbl_fn_803A0F4C_00001544:
    mr r3, r28
    mr r4, r29
    bl fn_805AE868
    b lbl_fn_803A0F4C_00001598
lbl_fn_803A0F4C_00001554:
    mr r3, r28
    mr r4, r29
    bl fn_805AE9BC
    b lbl_fn_803A0F4C_00001598
lbl_fn_803A0F4C_00001564:
    mr r3, r28
    mr r4, r29
    bl fn_805AE9D4
    b lbl_fn_803A0F4C_00001598
lbl_fn_803A0F4C_00001574:
    mr r3, r28
    mr r4, r29
    bl fn_805AEA0C
    b lbl_fn_803A0F4C_00001598
lbl_fn_803A0F4C_00001584:
    mr r3, r28
    mr r4, r29
    bl fn_805AEA44
    b lbl_fn_803A0F4C_00001598
    b lbl_fn_803A0F4C_000015BC
lbl_fn_803A0F4C_00001598:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
lbl_fn_803A0F4C_000015BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A11D8(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x100
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    stfd f25, 0x110(r1)
    psq_st f25, 0x118(r1), 0, 0
    stfd f24, 0x100(r1)
    psq_st f24, 0x108(r1), 0, 0
    bl _savegpr_26
    lwz r7, lbl_8087F430
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r7, 0x0
    mr r29, r6
    li r30, 0x0
    beq lbl_fn_803A11D8_00001658
    lwz r31, 0x10d8(r7)
    b lbl_fn_803A11D8_0000165C
lbl_fn_803A11D8_00001658:
    li r31, 0x0
lbl_fn_803A11D8_0000165C:
    lwz r3, lbl_8087F540
    mr r4, r26
    bl fn_8047F420
    cmpwi r3, 0x0
    beq lbl_fn_803A11D8_00001964
    lwz r3, lbl_8087F540
    lwz r4, 0x70(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803A11D8_0000168C
    lwz r4, 0x190(r4)
    li r5, 0x0
    bl fn_8047EFD8
lbl_fn_803A11D8_0000168C:
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A11D8_0000169C
    bl fn_80183930
lbl_fn_803A11D8_0000169C:
    lwz r3, lbl_8087F430
    bl fn_80371334
    cmpwi r26, 0xec5
    bne lbl_fn_803A11D8_000016B8
    lwz r3, lbl_8087EFA8
    li r0, 0x0
    stw r0, 0x144(r3)
lbl_fn_803A11D8_000016B8:
    cmpwi r26, 0x151e
    bne lbl_fn_803A11D8_000016D0
    lwz r3, lbl_8087EFB4
    li r0, 0x0
    lwz r3, 0x10(r3)
    stw r0, 0x4(r3)
lbl_fn_803A11D8_000016D0:
    cmpwi r26, 0x23f1
    bne lbl_fn_803A11D8_00001960
    lis r4, 0x6
    lwz r3, lbl_8087F408
    addi r4, r4, 0x1a84
    bl fn_8011FC10
    cmpwi r3, 0x0
    beq lbl_fn_803A11D8_00001960
    lwz r4, lbl_8087F8A0
    lfs f12, 0x530(r3)
    lwz r4, 0x48(r4)
    lfs f11, 0x52c(r3)
    lfs f0, 0x530(r4)
    lfs f10, 0x52c(r4)
    lfs f9, 0x528(r3)
    fsubs f12, f12, f0
    lfs f0, 0x528(r4)
    fsubs f10, f11, f10
    addi r3, r1, 0x68
    fsubs f0, f9, f0
    stfs f10, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f12, 0x70(r1)
    bl fn_805F9920
    lfs f0, lbl_80885B80
    fcmpo cr0, f1, f0
    ble lbl_fn_803A11D8_00001960
    lfs f2, 0x70(r1)
    addi r30, r1, 0x68
    lfs f0, lbl_80885B24
    fabs f9, f2
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_803A11D8_0000177C
    lfs f9, 0x68(r1)
    lfs f0, lbl_80885B10
    fcmpo cr0, f9, f0
    ble lbl_fn_803A11D8_00001770
    lfs f0, lbl_80885B84
    b lbl_fn_803A11D8_00001774
lbl_fn_803A11D8_00001770:
    lfs f0, lbl_80885B88
lbl_fn_803A11D8_00001774:
    stfs f0, 0xc(r1)
    b lbl_fn_803A11D8_0000178C
lbl_fn_803A11D8_0000177C:
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_803A11D8_0000178C:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f9, lbl_80885B10
    addi r4, r1, 0x14
    lfs f10, 0xc0(r1)
    mr r5, r4
    lfs f11, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f12, 0xb8(r1)
    lfs f13, 0xd0(r1)
    lfs f31, 0xcc(r1)
    lfs f30, 0xc8(r1)
    lfs f29, 0xe0(r1)
    lfs f28, 0xdc(r1)
    lfs f27, 0xd8(r1)
    lfs f26, 0xe4(r1)
    lfs f25, 0xd4(r1)
    lfs f24, 0xc4(r1)
    lfs f0, lbl_80885B30
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f9, 0xa8(r1)
    stfs f9, 0xac(r1)
    stfs f9, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x78(r1)
    stfs f11, 0x7c(r1)
    stfs f10, 0x80(r1)
    stfs f30, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x88(r1)
    stfs f31, 0x8c(r1)
    stfs f13, 0x90(r1)
    stfs f27, 0x2c(r1)
    stfs f28, 0x30(r1)
    stfs f29, 0x34(r1)
    stfs f27, 0x98(r1)
    stfs f28, 0x9c(r1)
    stfs f29, 0xa0(r1)
    stfs f24, 0x20(r1)
    stfs f25, 0x24(r1)
    stfs f26, 0x28(r1)
    stfs f24, 0x84(r1)
    stfs f25, 0x94(r1)
    stfs f26, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80885B24
    fabs f9, f2
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_803A11D8_000018A8
    lfs f9, 0x18(r1)
    lfs f0, lbl_80885B10
    fcmpo cr0, f9, f0
    ble lbl_fn_803A11D8_00001898
    lfs f0, lbl_80885B84
    b lbl_fn_803A11D8_0000189C
lbl_fn_803A11D8_00001898:
    lfs f0, lbl_80885B88
lbl_fn_803A11D8_0000189C:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_803A11D8_000018BC
lbl_fn_803A11D8_000018A8:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_803A11D8_000018BC:
    addi r3, r1, 0x8
    lfs f2, lbl_80885B10
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x68(r1)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_803A11D8_000018F8
    lfs f10, lbl_80885B30
    b lbl_fn_803A11D8_000018FC
lbl_fn_803A11D8_000018F8:
    lfs f10, lbl_80885B14
lbl_fn_803A11D8_000018FC:
    lfs f9, lbl_80885B8C
    lis r3, lbl_8074F5F0@ha
    lfs f0, 0x6c(r1)
    lfd f2, lbl_8074F5F0@l(r3)
    fmadds f1, f9, f10, f0
    bl fn_8068AEA8
    frsp f9, f1
    lfs f0, lbl_80885B3C
    fcmpo cr0, f9, f0
    ble lbl_fn_803A11D8_0000192C
    lfs f0, lbl_80885B90
    fsubs f9, f9, f0
lbl_fn_803A11D8_0000192C:
    lfs f0, lbl_80885B94
    fcmpo cr0, f9, f0
    bge lbl_fn_803A11D8_00001940
    lfs f0, lbl_80885B90
    fadds f9, f9, f0
lbl_fn_803A11D8_00001940:
    stfs f9, 0x6c(r1)
    addi r3, r1, 0x68
    lwz r4, lbl_8087F8A0
    lfs f2, 0x70(r1)
    lwz r4, 0x48(r4)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
lbl_fn_803A11D8_00001960:
    li r30, 0x1
lbl_fn_803A11D8_00001964:
    lis r4, lbl_807C7030@ha
    cmpwi r31, 0x0
    addi r4, r4, lbl_807C7030@l
    addi r3, r1, 0x5c
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r3), 0, 0
    lfs f24, lbl_80885B10
    stfs f2, 0x64(r1)
    beq lbl_fn_803A11D8_000019D4
    lwz r0, 0x78(r31)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A11D8_000019CC
lbl_fn_803A11D8_000019A4:
    lwz r3, 0x7c(r31)
    lwzx r0, r3, r5
    cmpw r28, r0
    bne lbl_fn_803A11D8_000019C0
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_803A11D8_000019D8
lbl_fn_803A11D8_000019C0:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_803A11D8_000019A4
lbl_fn_803A11D8_000019CC:
    li r3, 0x0
    b lbl_fn_803A11D8_000019D8
lbl_fn_803A11D8_000019D4:
    li r3, 0x0
lbl_fn_803A11D8_000019D8:
    cmpwi r3, 0x0
    beq lbl_fn_803A11D8_000019F8
    lfs f2, 0xc(r3)
    addi r4, r1, 0x5c
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f24, 0x14(r3)
    stfs f2, 0x64(r1)
lbl_fn_803A11D8_000019F8:
    cmpwi r30, 0x0
    beq lbl_fn_803A11D8_00001A70
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_803A11D8_00001A70
    li r4, 0xf
    li r5, 0x1
    bl fn_803EBAC8
    lwz r3, lbl_8087F540
    mr r4, r26
    bl fn_8047F420
    cmpwi r3, 0x0
    bne lbl_fn_803A11D8_00001A40
    lwz r3, lbl_8087F540
    mr r4, r26
    bl fn_8047F498
    cmpwi r3, 0x0
    beq lbl_fn_803A11D8_00001A64
lbl_fn_803A11D8_00001A40:
    lwz r3, lbl_8087F540
    mr r4, r26
    bl fn_8047F510
    cmpwi r3, 0x0
    bne lbl_fn_803A11D8_00001A64
    lwz r3, lbl_8087F498
    li r0, 0x2
    stw r0, 0x10c(r3)
    b lbl_fn_803A11D8_00001A70
lbl_fn_803A11D8_00001A64:
    lwz r3, lbl_8087F498
    li r0, 0x1
    stw r0, 0x10c(r3)
lbl_fn_803A11D8_00001A70:
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x50
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f24
    lwz r3, lbl_8087F540
    mr r4, r26
    stfs f2, 0x58(r1)
    mr r6, r27
    bl fn_8047EA34
    lwz r3, lbl_8087F540
    lwz r0, 0x50(r29)
    stw r0, 0x240c(r3)
    lfs f0, 0x54(r29)
    stfs f0, 0x2410(r3)
    lwz r0, 0x44(r29)
    lwz r3, lbl_8087F540
    lfs f0, 0x58(r29)
    cmpwi r0, 0x2
    stfs f0, 0x2414(r3)
    lfs f0, 0x5c(r29)
    stfs f0, 0x2418(r3)
    bne lbl_fn_803A11D8_00001D30
    lwz r4, lbl_8087F540
    lwz r7, lbl_8087F430
    lwz r3, 0x1a38(r4)
    lwz r0, 0x6c(r7)
    mulli r3, r3, 0x65c
    lfs f0, lbl_80885B48
    add r4, r4, r3
    stw r0, 0x50c(r4)
    lwz r0, 0x70(r7)
    stw r0, 0x510(r4)
    lfs f2, 0x7c(r7)
    psq_l f1, 0x74(r7), 0, 0
    psq_st f1, 0x514(r4), 0, 0
    stfs f2, 0x51c(r4)
    lfs f2, 0x88(r7)
    psq_l f1, 0x80(r7), 0, 0
    psq_st f1, 0x520(r4), 0, 0
    stfs f2, 0x528(r4)
    lfs f2, 0x94(r7)
    psq_l f1, 0x8c(r7), 0, 0
    psq_st f1, 0x52c(r4), 0, 0
    stfs f2, 0x534(r4)
    lfs f2, 0xa0(r7)
    psq_l f1, 0x98(r7), 0, 0
    psq_st f1, 0x538(r4), 0, 0
    stfs f2, 0x540(r4)
    lfs f9, 0xa4(r7)
    stfs f9, 0x544(r4)
    lfs f9, 0xa8(r7)
    stfs f9, 0x548(r4)
    lfs f9, 0xac(r7)
    stfs f9, 0x54c(r4)
    lfs f9, 0xb0(r7)
    stfs f9, 0x550(r4)
    lfs f9, 0xb4(r7)
    stfs f9, 0x554(r4)
    lfs f9, 0xb8(r7)
    stfs f9, 0x558(r4)
    lfs f9, 0xbc(r7)
    stfs f9, 0x55c(r4)
    lfs f9, 0xc0(r7)
    stfs f9, 0x560(r4)
    psq_l f2, 0xcc(r7), 0, 0
    psq_l f3, 0xd4(r7), 0, 0
    psq_l f4, 0xdc(r7), 0, 0
    psq_l f5, 0xe4(r7), 0, 0
    psq_l f6, 0xec(r7), 0, 0
    psq_l f1, 0xc4(r7), 0, 0
    psq_st f1, 0x564(r4), 0, 0
    psq_st f2, 0x56c(r4), 0, 0
    psq_st f3, 0x574(r4), 0, 0
    psq_st f4, 0x57c(r4), 0, 0
    psq_st f5, 0x584(r4), 0, 0
    psq_st f6, 0x58c(r4), 0, 0
    psq_l f2, 0xfc(r7), 0, 0
    psq_l f3, 0x104(r7), 0, 0
    psq_l f4, 0x10c(r7), 0, 0
    psq_l f5, 0x114(r7), 0, 0
    psq_l f6, 0x11c(r7), 0, 0
    psq_l f7, 0x124(r7), 0, 0
    psq_l f8, 0x12c(r7), 0, 0
    psq_l f1, 0xf4(r7), 0, 0
    psq_st f1, 0x594(r4), 0, 0
    psq_st f2, 0x59c(r4), 0, 0
    psq_st f3, 0x5a4(r4), 0, 0
    psq_st f4, 0x5ac(r4), 0, 0
    psq_st f5, 0x5b4(r4), 0, 0
    psq_st f6, 0x5bc(r4), 0, 0
    psq_st f7, 0x5c4(r4), 0, 0
    psq_st f8, 0x5cc(r4), 0, 0
    lfs f9, 0x134(r7)
    addi r6, r4, 0x6a0
    stfs f9, 0x5d4(r4)
    addi r5, r7, 0x200
    addi r0, r4, 0x700
    lfs f9, 0x138(r7)
    stfs f9, 0x5d8(r4)
    psq_l f2, 0x144(r7), 0, 0
    psq_l f3, 0x14c(r7), 0, 0
    psq_l f4, 0x154(r7), 0, 0
    psq_l f5, 0x15c(r7), 0, 0
    psq_l f6, 0x164(r7), 0, 0
    psq_l f1, 0x13c(r7), 0, 0
    psq_st f1, 0x5dc(r4), 0, 0
    psq_st f2, 0x5e4(r4), 0, 0
    psq_st f3, 0x5ec(r4), 0, 0
    psq_st f4, 0x5f4(r4), 0, 0
    psq_st f5, 0x5fc(r4), 0, 0
    psq_st f6, 0x604(r4), 0, 0
    psq_l f2, 0x174(r7), 0, 0
    psq_l f3, 0x17c(r7), 0, 0
    psq_l f4, 0x184(r7), 0, 0
    psq_l f5, 0x18c(r7), 0, 0
    psq_l f6, 0x194(r7), 0, 0
    psq_l f1, 0x16c(r7), 0, 0
    psq_st f1, 0x60c(r4), 0, 0
    psq_st f2, 0x614(r4), 0, 0
    psq_st f3, 0x61c(r4), 0, 0
    psq_st f4, 0x624(r4), 0, 0
    psq_st f5, 0x62c(r4), 0, 0
    psq_st f6, 0x634(r4), 0, 0
    lwz r3, 0x19c(r7)
    stw r3, 0x63c(r4)
    lfs f9, 0x1a0(r7)
    stfs f9, 0x640(r4)
    lfs f9, 0x1a4(r7)
    stfs f9, 0x644(r4)
    lfs f2, 0x1b0(r7)
    psq_l f1, 0x1a8(r7), 0, 0
    psq_st f1, 0x648(r4), 0, 0
    stfs f2, 0x650(r4)
    lfs f9, 0x1b4(r7)
    stfs f9, 0x654(r4)
    lfs f2, 0x1c0(r7)
    psq_l f1, 0x1b8(r7), 0, 0
    psq_st f1, 0x658(r4), 0, 0
    stfs f2, 0x660(r4)
    lfs f9, 0x1c4(r7)
    stfs f9, 0x664(r4)
    lfs f2, 0x1d0(r7)
    psq_l f1, 0x1c8(r7), 0, 0
    psq_st f1, 0x668(r4), 0, 0
    stfs f2, 0x670(r4)
    lfs f9, 0x1d4(r7)
    stfs f9, 0x674(r4)
    lfs f2, 0x1e0(r7)
    psq_l f1, 0x1d8(r7), 0, 0
    psq_st f1, 0x678(r4), 0, 0
    stfs f2, 0x680(r4)
    lfs f9, 0x1e4(r7)
    stfs f9, 0x684(r4)
    lfs f2, 0x1f0(r7)
    psq_l f1, 0x1e8(r7), 0, 0
    psq_st f1, 0x688(r4), 0, 0
    stfs f2, 0x690(r4)
    lfs f2, 0x1fc(r7)
    psq_l f1, 0x1f4(r7), 0, 0
    psq_st f1, 0x694(r4), 0, 0
    stfs f2, 0x69c(r4)
lbl_fn_803A11D8_00001CFC:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f9, 0xc(r5)
    addi r5, r5, 0x10
    stfs f9, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_803A11D8_00001CFC
    stfs f0, 0x704(r4)
    lfs f0, lbl_80885B10
    stfs f0, 0x700(r4)
lbl_fn_803A11D8_00001D30:
    lwz r3, lbl_8087F430
    lwz r0, 0x54f0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803A11D8_00001D5C
    cmpwi r26, 0x1fb
    lfs f1, lbl_80885B74
    li r4, 0x14
    li r5, 0x3
    bne lbl_fn_803A11D8_00001D58
    li r5, 0xf
lbl_fn_803A11D8_00001D58:
    bl fn_80370BD0
lbl_fn_803A11D8_00001D5C:
    psq_l f31, 0x178(r1), 0, 0
    mr r3, r30
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    psq_l f25, 0x118(r1), 0, 0
    lfd f25, 0x110(r1)
    psq_l f24, 0x108(r1), 0, 0
    lfd f24, 0x100(r1)
    addi r11, r1, 0x100
    bl _restgpr_26
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}
