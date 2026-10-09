#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800185B4(void);
extern void fn_80018608(void);
extern void fn_80050A1C(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_800FB4B0(void);
extern void fn_80102A40(void);
extern void fn_80105C9C(void);
extern void fn_80105DCC(void);
extern void fn_80105F3C(void);
extern void fn_8010607C(void);
extern void fn_801070C8(void);
extern void fn_80134168(void);
extern void fn_8013CB68(void);
extern void fn_801446F0(void);
extern void fn_8015495C(void);
extern void fn_80164B00(void);
extern void fn_80164DCC(void);
extern void fn_8016DCD4(void);
extern void fn_80210220(void);
extern void fn_80219E6C(void);
extern void fn_8021FD7C(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073B1B0[];
extern u8 lbl_8073B1B8[];
extern u8 lbl_8073B1F8[];
extern u8 lbl_8073B200[];
extern u8 lbl_80780ED0[];
extern u8 lbl_80780F48[];
extern u8 lbl_807810C0[];
extern u8 lbl_80781140[];
extern u8 lbl_807811C0[];
extern u8 lbl_80781240[];
extern u8 lbl_807812C0[];
extern u8 lbl_80781340[];
extern u8 lbl_807813C0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F610;
extern u32 lbl_808824DC;
extern u32 lbl_808824E0;
extern u32 lbl_808824F0;
extern u32 lbl_808824F4;
extern u32 lbl_808824F8;
extern u32 lbl_808824FC;
extern u32 lbl_80882500;
extern u32 lbl_80882504;
extern u32 lbl_80882508;
extern u32 lbl_8088250C;
extern u32 lbl_80882510;
extern u32 lbl_80882518;
extern u32 lbl_8088251C;
extern u32 lbl_80882520;
extern u32 lbl_80882524;
extern u32 lbl_80882528;
extern u32 lbl_8088252C;
extern u32 lbl_80882530;
extern u32 lbl_80882534;
extern u32 lbl_80882538;
extern u32 lbl_8088253C;
extern u32 lbl_80882540;

/* Function declarations */
void fn_801B7218(void);
void fn_801B72B0(void);
void fn_801B72F0(void);
void fn_801B7330(void);
void fn_801B7370(void);
void fn_801B73B0(void);
void fn_801B73F0(void);
void fn_801B74FC(void);
void fn_801B7794(void);
void fn_801B779C(void);
void fn_801B77DC(void);
void fn_801B79D8(void);
void fn_801B7C50(void);
void fn_801B7C90(void);
void fn_801B7CD0(void);
void fn_801B7EB4(void);
void fn_801B7F50(void);
void fn_801B7F90(void);
void fn_801B805C(void);
void fn_801B8244(void);
void fn_801B8360(void);
void fn_801B86CC(void);
void fn_801B8AD0(void);

asm void fn_801B7218(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    lwz r5, 0x4(r3)
    lfs f0, lbl_808824DC
    lfs f3, 0x2e4(r5)
    addi r3, r5, 0xb0
    fcmpo cr0, f3, f0
    bge lbl_fn_801B7218_0000005C
    addi r4, r1, 0x8
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r5)
    lfs f3, 0xc(r1)
    lfs f0, lbl_808824E0
    stfs f2, 0x10(r1)
    fadds f0, f3, f0
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
lbl_fn_801B7218_0000005C:
    lfs f31, 0x234(r3)
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B7218_0000007C
    li r3, 0x1
    b lbl_fn_801B7218_00000080
lbl_fn_801B7218_0000007C:
    li r3, 0x0
lbl_fn_801B7218_00000080:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801B72B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B72B0_000000C0
    cmpwi r4, 0x0
    ble lbl_fn_801B72B0_000000C0
    bl dtor_80084684
lbl_fn_801B72B0_000000C0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B72F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B72F0_00000100
    cmpwi r4, 0x0
    ble lbl_fn_801B72F0_00000100
    bl dtor_80084684
lbl_fn_801B72F0_00000100:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B7330(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B7330_00000140
    cmpwi r4, 0x0
    ble lbl_fn_801B7330_00000140
    bl dtor_80084684
lbl_fn_801B7330_00000140:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B7370(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B7370_00000180
    cmpwi r4, 0x0
    ble lbl_fn_801B7370_00000180
    bl dtor_80084684
lbl_fn_801B7370_00000180:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B73B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B73B0_000001C0
    cmpwi r4, 0x0
    ble lbl_fn_801B73B0_000001C0
    bl dtor_80084684
lbl_fn_801B73B0_000001C0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B73F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80780F48@ha
    li r6, 0x1
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80780F48@l
    li r0, 0x2e
    li r7, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r5, 0x0(r3)
    li r5, 0x1
    stw r4, 0x4(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    addi r31, r3, 0xb0
    bl fn_8015495C
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_808824F0
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r4, 0x0
    lfs f1, lbl_808824F4
    li r5, 0x173
    stfs f0, 0x238(r31)
    li r6, 0x0
    lfs f2, lbl_808824F8
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lwz r5, 0x4(r30)
    lis r4, lbl_8073B1B0@ha
    stfs f1, 0x8(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8073B1B0@l(r4)
    addi r5, r5, 0x528
    lfs f1, lbl_808824F0
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x4(r30)
    bl fn_801446F0
    lwz r3, lbl_8087F048
    mr r5, r31
    lwz r4, 0x4(r30)
    bl fn_80105C9C
    lwz r3, lbl_8087F048
    mr r5, r31
    lwz r4, 0x4(r30)
    li r6, 0x1
    bl fn_80105DCC
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B74FC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_26
    lwz r4, lbl_8087EFA8
    mr r31, r3
    lfs f3, 0x8(r3)
    li r0, 0x0
    lfs f4, 0x3a4(r4)
    lfs f0, lbl_808824F4
    fsubs f3, f3, f4
    stfs f3, 0x8(r3)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801B74FC_00000558
    lwz r3, 0x4(r3)
    bl fn_8016DCD4
    cmpwi r3, 0x0
    beq lbl_fn_801B74FC_00000548
    lwz r27, lbl_8087F0A8
    lwz r3, 0x3cc(r27)
    bl fn_80210220
    lis r4, lbl_8073B1B0@ha
    lwz r5, 0x4(r31)
    addi r4, r4, lbl_8073B1B0@l
    mr r29, r3
    lwz r4, 0x4(r4)
    addi r5, r5, 0x528
    lfs f1, lbl_808824F0
    addi r3, r1, 0x8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x12a4(r3)
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    ble lbl_fn_801B74FC_00000428
    lfs f4, lbl_808824F4
    lis r0, 0x4330
    lfs f0, lbl_808824F0
    li r5, 0x0
    lis r3, lbl_8073B1B8@ha
    stfs f4, 0x54(r1)
    lfd f3, lbl_8073B1B8@l(r3)
    addi r4, r1, 0x50
    stfs f4, 0x58(r1)
    stfs f4, 0x5c(r1)
    stw r5, 0x60(r1)
    stfs f0, 0x50(r1)
    lwz r3, 0x48(r29)
    stw r0, 0x68(r1)
    xoris r3, r3, 0x8000
    stw r3, 0x6c(r1)
    lfd f0, 0x68(r1)
    stw r0, 0x70(r1)
    fsubs f0, f0, f3
    stw r0, 0x78(r1)
    stfs f0, 0x54(r1)
    lwz r0, 0x4c(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f3
    stfs f0, 0x58(r1)
    lwz r0, 0x254(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f0, f0, f3
    stfs f0, 0x5c(r1)
    lwz r3, 0x4(r31)
    bl fn_80164B00
lbl_fn_801B74FC_00000428:
    lwz r3, lbl_8087F048
    li r4, 0x0
    lwz r5, 0x4(r31)
    lwz r6, 0x28(r29)
    lwz r7, 0x2c(r29)
    bl fn_80102A40
    lwz r3, lbl_8087F4A0
    addi r28, r1, 0x44
    lfs f31, lbl_808824F4
    addi r27, r1, 0x24
    lwz r26, 0x48(r3)
    li r29, 0x3
    li r30, 0x0
    b lbl_fn_801B74FC_0000053C
lbl_fn_801B74FC_00000460:
    lwz r0, 0x50(r26)
    cmpwi r0, 0x2b
    beq lbl_fn_801B74FC_00000478
    cmpwi r0, 0x41
    beq lbl_fn_801B74FC_000004CC
    b lbl_fn_801B74FC_00000538
lbl_fn_801B74FC_00000478:
    stw r29, 0x30(r1)
    mr r3, r26
    addi r4, r1, 0x30
    stw r30, 0x34(r1)
    stw r30, 0x38(r1)
    stw r30, 0x3c(r1)
    stw r30, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f31, 0x4c(r1)
    lwz r5, 0x4(r31)
    stw r5, 0x40(r1)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r28), 0, 0
    lwz r12, 0x0(r26)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_801B74FC_00000538
lbl_fn_801B74FC_000004CC:
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_801B74FC_00000538
    stw r29, 0x10(r1)
    mr r3, r26
    addi r4, r1, 0x10
    stw r30, 0x14(r1)
    stw r30, 0x18(r1)
    stw r30, 0x1c(r1)
    stw r30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    lwz r5, 0x4(r31)
    stw r5, 0x20(r1)
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x2c(r1)
    psq_st f1, 0x0(r27), 0, 0
    lwz r12, 0x0(r26)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_801B74FC_00000538:
    lwz r26, 0x5c(r26)
lbl_fn_801B74FC_0000053C:
    cmpwi r26, 0x0
    bne lbl_fn_801B74FC_00000460
    b lbl_fn_801B74FC_00000554
lbl_fn_801B74FC_00000548:
    lwz r3, 0x4(r31)
    li r4, 0x1
    bl fn_80164DCC
lbl_fn_801B74FC_00000554:
    li r0, 0x1
lbl_fn_801B74FC_00000558:
    psq_l f31, 0xa8(r1), 0, 0
    mr r3, r0
    lfd f31, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_26
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_801B7794(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_801B779C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r31)
    bl fn_8010607C
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r31)
    bl fn_80105F3C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B77DC(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    lis r6, lbl_80780ED0@ha
    lfs f0, lbl_808824F0
    stw r0, 0x134(r1)
    addi r6, r6, lbl_80780ED0@l
    li r0, 0x84
    lfs f1, lbl_808824F4
    stw r31, 0x12c(r1)
    mr r31, r3
    lfs f2, lbl_808824F8
    li r7, 0x0
    stw r30, 0x128(r1)
    li r30, 0x1
    li r8, 0x1
    stw r29, 0x124(r1)
    li r29, 0x0
    stw r5, 0x8(r3)
    li r5, 0x17c
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stb r29, 0xc(r3)
    stb r29, 0xd(r3)
    stw r0, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    addi r3, r3, 0xb0
    stw r30, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r3, 0x4(r31)
    bl fn_801446F0
    lwz r3, 0x4(r31)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    lwz r3, 0x4(r31)
    stw r29, 0xfc0(r3)
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801B77DC_000006E4
    stb r30, 0xd(r31)
    lwz r3, 0x8(r31)
    bl fn_80219E6C
    lwz r0, lbl_8087F048
    mr r4, r3
    cmpwi r0, 0x0
    beq lbl_fn_801B77DC_000006E4
    lfs f1, lbl_808824F0
    lis r8, lbl_807C7030@ha
    stfs f1, 0x10(r1)
    addi r8, r8, lbl_807C7030@l
    mr r3, r0
    addi r10, r1, 0x10
    stfs f1, 0x14(r1)
    mr r9, r8
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    lwz r7, 0x4(r31)
    lwz r4, 0xb0(r4)
    addi r7, r7, 0xb0
    bl fn_801070C8
lbl_fn_801B77DC_000006E4:
    lwz r3, 0x4(r31)
    lwz r3, 0x7c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801B77DC_00000764
    li r4, 0x24
    bl fn_8021FD7C
    cmpwi r3, 0x0
    beq lbl_fn_801B77DC_00000764
    lwz r3, 0x4(r31)
    li r4, 0x24
    lwz r3, 0x7c(r3)
    bl fn_8021FD7C
    lis r4, lbl_8073B1F8@ha
    mr r5, r3
    addi r3, r1, 0x20
    addi r4, r4, lbl_8073B1F8@l
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    li r30, 0x0
    bl strlen
    addi r4, r1, 0x1f
    lfs f1, lbl_808824F0
    stbx r30, r4, r3
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801B77DC_00000764:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801B77DC_00000788
    lwz r4, 0x4(r31)
    li r5, 0x24
    lfs f1, lbl_808824F0
    li r6, 0x0
    lfs f2, lbl_808824FC
    bl fn_803EA77C
lbl_fn_801B77DC_00000788:
    lwz r3, 0x8(r31)
    bl fn_80219E6C
    lwz r4, 0x4(r31)
    lwz r0, 0x638(r4)
    stw r0, 0x63c(r4)
    stw r3, 0x638(r4)
    mr r3, r31
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_801B79D8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_26
    lwz r5, 0x4(r3)
    lis r4, 0x4330
    stw r4, 0x10(r1)
    mr r29, r3
    lwz r0, 0x48(r5)
    addi r31, r5, 0xb0
    stw r4, 0x18(r1)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801B79D8_0000084C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_801B79D8_0000084C
    lfs f1, 0x234(r31)
    lfs f0, lbl_80882500
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801B79D8_0000084C
    lfs f0, lbl_80882504
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801B79D8_0000084C
    lwz r4, lbl_8087EFA8
    lfs f0, lbl_808824F8
    lfs f2, 0x3a4(r4)
    lfs f1, lbl_80882508
    fsubs f0, f2, f0
    fcmpo cr0, f1, f0
lbl_fn_801B79D8_0000084C:
    lfs f1, 0x234(r31)
    lfs f0, lbl_8088250C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801B79D8_000009F4
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801B79D8_000009F4
    li r0, 0x1
    stb r0, 0xc(r3)
    lwz r3, 0x8(r3)
    bl fn_80219E6C
    lwz r6, 0x4(r29)
    mr r26, r3
    lfs f31, lbl_808824F0
    li r4, 0x36
    lwz r0, 0x638(r6)
    li r5, -0x1
    stw r0, 0x63c(r6)
    stw r3, 0x638(r6)
    lwz r3, 0x4(r29)
    addi r3, r3, 0x7d4
    bl fn_80134168
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lis r3, lbl_8073B1B8@ha
    lwz r0, 0x5c(r26)
    lfd f3, lbl_8073B1B8@l(r3)
    lfd f0, 0x10(r1)
    xoris r0, r0, 0x8000
    lfs f1, lbl_80882510
    fsubs f2, f0, f3
    stw r0, 0x1c(r1)
    lwz r3, 0x4(r29)
    lfd f0, 0x18(r1)
    fdivs f1, f2, f1
    fadds f31, f31, f1
    fsubs f0, f0, f3
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    stw r0, 0x1c(r1)
    fsubs f1, f0, f3
    lfd f0, 0x18(r1)
    stfs f1, 0xac8(r3)
    fsubs f0, f0, f3
    lwz r3, 0x4(r29)
    stfs f0, 0xacc(r3)
    lwz r27, lbl_8087F048
    mr r3, r27
    bl fn_800F8548
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r6, r3
    mr r3, r27
    lwz r4, 0x4(r29)
    mr r5, r26
    li r8, 0x0
    li r9, 0x1e
    addi r7, r4, 0x528
    li r10, -0x1
    bl fn_800FB4B0
    lwz r3, 0x4(r29)
    lfs f0, lbl_808824F4
    stfs f0, 0x9fc(r3)
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_801B79D8_00000990
    lwz r4, 0x4(r29)
    mr r5, r26
    bl fn_800185B4
    cmpwi r3, 0x0
    beq lbl_fn_801B79D8_00000990
    lwz r3, lbl_8087EE68
    mr r5, r26
    lwz r4, 0x4(r29)
    bl fn_80018608
lbl_fn_801B79D8_00000990:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x304(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801B79D8_000009F4
    lwz r26, lbl_8087F048
    lwz r27, 0x4(r29)
    mr r3, r26
    bl fn_800F8548
    mr r28, r3
    li r3, 0x1f6
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_808824F4
    stw r0, 0xc(r1)
    mr r3, r26
    lfs f2, lbl_808824F0
    mr r6, r28
    lwz r4, 0x4(r29)
    addi r7, r27, 0x528
    addi r8, r27, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_801B79D8_000009F4:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B79D8_00000A14
    li r30, 0x1
lbl_fn_801B79D8_00000A14:
    psq_l f31, 0x48(r1), 0, 0
    mr r3, r30
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801B7C50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B7C50_00000A60
    cmpwi r4, 0x0
    ble lbl_fn_801B7C50_00000A60
    bl dtor_80084684
lbl_fn_801B7C50_00000A60:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B7C90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B7C90_00000AA0
    cmpwi r4, 0x0
    ble lbl_fn_801B7C90_00000AA0
    bl dtor_80084684
lbl_fn_801B7C90_00000AA0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B7CD0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    lwz r4, 0x8(r3)
    lwz r7, 0x4(r3)
    cmpwi r4, 0x0
    addi r8, r7, 0xb0
    ble lbl_fn_801B7CD0_00000BFC
    subi r5, r4, 0x1
    lis r0, 0x4330
    xoris r4, r5, 0x8000
    stw r4, 0x64(r1)
    lis r4, lbl_8073B200@ha
    lfs f6, lbl_80882524
    stw r0, 0x60(r1)
    addi r6, r1, 0x50
    lfd f3, lbl_8073B200@l(r4)
    lfd f0, 0x60(r1)
    lfs f5, 0x1c(r3)
    fsubs f7, f0, f3
    lfs f4, 0x10(r3)
    lfs f3, 0x18(r3)
    fsubs f8, f5, f4
    lfs f0, 0xc(r3)
    fdivs f9, f7, f6
    stfs f8, 0x18(r1)
    lfs f6, 0x20(r3)
    lfs f5, 0x14(r3)
    stw r5, 0x8(r3)
    fsubs f3, f3, f0
    fsubs f7, f6, f5
    fmuls f8, f8, f9
    stfs f3, 0x14(r1)
    fmuls f6, f3, f9
    fmuls f9, f7, f9
    stfs f7, 0x1c(r1)
    fadds f3, f8, f4
    fadds f0, f6, f0
    stfs f6, 0x8(r1)
    fadds f2, f9, f5
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x528(r7), 0, 0
    stfs f2, 0x530(r7)
    lfs f4, 0x3c(r3)
    lfs f0, 0x2c(r3)
    lfs f3, 0x28(r3)
    fmuls f10, f0, f4
    lfs f0, 0x24(r3)
    fmuls f11, f3, f4
    lfs f3, 0x10(r3)
    fmuls f12, f0, f4
    lfs f5, 0xc(r3)
    fadds f6, f3, f11
    lfs f4, 0x18(r3)
    fadds f7, f5, f12
    lfs f0, 0x14(r3)
    lfs f3, 0x1c(r3)
    fadds f4, f4, f12
    fadds f5, f0, f10
    lfs f0, 0x20(r3)
    fadds f3, f3, f11
    stfs f8, 0xc(r1)
    fadds f0, f0, f10
    stfs f9, 0x10(r1)
    stfs f2, 0x58(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f7, 0xc(r3)
    stfs f6, 0x10(r3)
    stfs f5, 0x14(r3)
    stfs f12, 0x38(r1)
    stfs f11, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f4, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f0, 0x20(r3)
lbl_fn_801B7CD0_00000BFC:
    lfs f5, 0x3c(r3)
    addi r5, r1, 0x2c
    lfs f3, 0x28(r3)
    li r4, 0x0
    lfs f0, 0x24(r3)
    fmuls f6, f3, f5
    lwz r6, 0x4(r3)
    fmuls f7, f0, f5
    lfs f4, 0x2c(r3)
    lfs f3, 0x52c(r6)
    mr r3, r8
    fmuls f4, f4, f5
    lfs f0, 0x528(r6)
    fadds f3, f3, f6
    stfs f7, 0x20(r1)
    fadds f5, f0, f7
    lfs f0, 0x530(r6)
    fadds f2, f0, f4
    stfs f5, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lfs f31, 0x234(r8)
    stfs f6, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f2, 0x34(r1)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B7CD0_00000C80
    li r3, 0x1
    b lbl_fn_801B7CD0_00000C84
lbl_fn_801B7CD0_00000C80:
    li r3, 0x0
lbl_fn_801B7CD0_00000C84:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801B7EB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807813C0@ha
    li r5, 0x18
    stw r0, 0x14(r1)
    addi r6, r6, lbl_807813C0@l
    li r0, 0x1
    lfs f0, lbl_80882518
    stw r31, 0xc(r1)
    li r7, 0x0
    lfs f1, lbl_8088251C
    li r8, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, lbl_80882520
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x49
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882518
    lis r4, lbl_80781340@ha
    stfs f0, 0x238(r31)
    addi r4, r4, lbl_80781340@l
    mr r3, r30
    stw r4, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B7F50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801B7F50_00000D60
    cmpwi r4, 0x0
    ble lbl_fn_801B7F50_00000D60
    bl dtor_80084684
lbl_fn_801B7F50_00000D60:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801B7F90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801B7F90_00000DC0
    li r31, 0x1
lbl_fn_801B7F90_00000DC0:
    lwz r4, 0x4(r30)
    lwz r0, 0x54c(r4)
    rlwinm r3, r0, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_801B7F90_00000DE4
    lwz r0, 0x54c(r4)
    ori r0, r0, 0x200
    stw r0, 0x54c(r4)
lbl_fn_801B7F90_00000DE4:
    lfs f1, lbl_80882518
    li r5, 0x1
    lwz r3, 0x4(r30)
    fmr f2, f1
    addi r4, r3, 0x534
    bl fn_8013CB68
    lwz r4, 0x4(r30)
    lwz r0, 0x54c(r4)
    rlwinm r3, r0, 0, 4, 4
    subis r0, r3, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_801B7F90_00000E20
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 23, 21
    stw r0, 0x54c(r4)
lbl_fn_801B7F90_00000E20:
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801B805C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r7, lbl_807813C0@ha
    lfs f0, lbl_80882518
    stw r0, 0x84(r1)
    addi r7, r7, lbl_807813C0@l
    li r0, 0x1
    lfs f1, lbl_8088251C
    stw r31, 0x7c(r1)
    mr r31, r3
    lfs f2, lbl_80882520
    li r8, 0x1
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r6
    li r6, 0x0
    stw r28, 0x70(r1)
    mr r28, r5
    li r5, 0x19
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x4a
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f3, lbl_80882518
    lis r4, lbl_807812C0@ha
    stfs f3, 0x238(r30)
    addi r4, r4, lbl_807812C0@l
    lfs f0, lbl_8088251C
    addi r3, r1, 0x38
    stw r4, 0x0(r31)
    li r4, 0x79
    lwz r5, 0x4(r31)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r4), 0, 0
    li r0, 0x3
    lfs f0, lbl_80882534
    addi r3, r31, 0x18
    psq_st f1, 0x24(r31), 0, 0
    addi r4, r1, 0x20
    lwz r7, 0x4(r31)
    addi r6, r1, 0x2c
    stfs f2, 0x2c(r31)
    addi r5, r31, 0xc
    stfs f0, 0x3c(r31)
    stw r0, 0x8(r31)
    psq_l f1, 0x528(r7), 0, 0
    lfs f2, 0x530(r7)
    stfs f2, 0x20(r31)
    lfs f2, 0x8(r28)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x28(r1)
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    bl fn_80050A1C
    lfs f5, 0x2c(r31)
    lfs f4, lbl_80882538
    lfs f3, 0x28(r31)
    lfs f0, 0x24(r31)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x10(r31)
    fmuls f7, f0, f4
    lfs f4, 0xc(r31)
    lfs f0, 0x14(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x8(r1)
    fadds f0, f0, f5
    lwz r3, 0x4(r31)
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f4, 0xc(r31)
    stfs f3, 0x10(r31)
    stfs f0, 0x14(r31)
    bl fn_801446F0
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B805C_00001008
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B805C_00001008
    lwz r3, lbl_8087F498
    li r5, 0xc
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80882518
    lfs f2, lbl_8088253C
    bl fn_803EA77C
lbl_fn_801B805C_00001008:
    mr r3, r31
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801B8244(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r7, lbl_807813C0@ha
    li r6, 0x1a
    stw r0, 0x64(r1)
    addi r7, r7, lbl_807813C0@l
    li r0, 0x1
    lfs f0, lbl_80882518
    stw r31, 0x5c(r1)
    li r8, 0x1
    lfs f1, lbl_8088251C
    stw r30, 0x58(r1)
    mr r30, r5
    lfs f2, lbl_80882520
    li r5, 0x200
    stw r29, 0x54(r1)
    mr r29, r3
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r6, 0x560(r4)
    li r4, 0x0
    li r6, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f3, lbl_80882518
    lis r4, lbl_80781240@ha
    stfs f3, 0x238(r31)
    addi r4, r4, lbl_80781240@l
    psq_l f1, 0x0(r30), 0, 0
    addi r3, r1, 0x18
    stw r4, 0x0(r29)
    li r4, 0x79
    lwz r5, 0x4(r29)
    lfs f2, 0x8(r30)
    psq_st f1, 0x534(r5), 0, 0
    lfs f0, lbl_8088251C
    stfs f2, 0x53c(r5)
    lwz r5, 0x4(r29)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f0, lbl_80882534
    psq_st f1, 0x24(r29), 0, 0
    lwz r3, 0x4(r29)
    stfs f2, 0x2c(r29)
    stfs f0, 0x3c(r29)
    stw r0, 0x8(r29)
    bl fn_801446F0
    lwz r31, 0x5c(r1)
    mr r3, r29
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801B8360(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r7, lbl_807813C0@ha
    lfs f0, lbl_80882518
    stw r0, 0x114(r1)
    addi r7, r7, lbl_807813C0@l
    li r0, 0x1
    lfs f2, lbl_80882520
    stfd f31, 0x100(r1)
    li r8, 0x1
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    fmr f30, f1
    lfs f1, lbl_8088251C
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r6
    li r6, 0x0
    stw r28, 0xe0(r1)
    mr r28, r5
    li r5, 0x29
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x4e
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f0, lbl_80882518
    lis r4, lbl_807811C0@ha
    stfs f0, 0x238(r30)
    addi r4, r4, lbl_807811C0@l
    lfs f5, 0x8(r29)
    addi r3, r1, 0x8
    lfs f4, 0x8(r28)
    lfs f3, 0x4(r29)
    lfs f0, 0x4(r28)
    fsubs f5, f5, f4
    stw r4, 0x0(r31)
    fsubs f4, f3, f0
    lfs f3, 0x0(r29)
    lfs f0, 0x0(r28)
    stfs f4, 0xc(r1)
    fsubs f0, f3, f0
    stfs f5, 0x10(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    lwz r4, 0x4(r31)
    addi r3, r1, 0x8
    lfs f0, lbl_80882528
    addi r30, r1, 0x14
    psq_l f1, 0x528(r4), 0, 0
    li r0, 0x3
    lfs f2, 0x530(r4)
    stfs f2, 0x20(r31)
    lfs f2, 0x8(r28)
    psq_st f1, 0x18(r31), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0xc(r31), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x14(r31)
    lfs f2, 0x8(r29)
    psq_st f1, 0x30(r31), 0, 0
    stfs f2, 0x38(r31)
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f3, f2
    psq_st f1, 0x24(r31), 0, 0
    stfs f2, 0x2c(r31)
    fabs f4, f3
    stfs f30, 0x3c(r31)
    frsp f4, f4
    stw r0, 0x8(r31)
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f4, f0
    stfs f2, 0x1c(r1)
    bge lbl_fn_801B8360_000012CC
    lfs f3, 0x14(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B8360_000012C0
    lfs f0, lbl_8088252C
    b lbl_fn_801B8360_000012C4
lbl_fn_801B8360_000012C0:
    lfs f0, lbl_80882530
lbl_fn_801B8360_000012C4:
    stfs f0, 0x24(r1)
    b lbl_fn_801B8360_000012E0
lbl_fn_801B8360_000012CC:
    fmr f2, f3
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_801B8360_000012E0:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088251C
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f31, 0xc4(r1)
    lfs f30, 0xb4(r1)
    lfs f0, lbl_80882518
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f30, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80882528
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B8360_000013FC
    lfs f3, 0x30(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B8360_000013EC
    lfs f0, lbl_8088252C
    b lbl_fn_801B8360_000013F0
lbl_fn_801B8360_000013EC:
    lfs f0, lbl_80882530
lbl_fn_801B8360_000013F0:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_801B8360_00001410
lbl_fn_801B8360_000013FC:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_801B8360_00001410:
    addi r3, r1, 0x20
    lfs f2, lbl_8088251C
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r31)
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x4(r31)
    bl fn_801446F0
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B8360_00001480
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B8360_00001480
    lwz r3, lbl_8087F498
    li r5, 0xc
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80882518
    lfs f2, lbl_8088253C
    bl fn_803EA77C
lbl_fn_801B8360_00001480:
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r31
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801B86CC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r7, lbl_807813C0@ha
    lfs f0, lbl_80882518
    stw r0, 0x114(r1)
    addi r7, r7, lbl_807813C0@l
    li r0, 0x1
    lfs f1, lbl_8088251C
    stfd f31, 0x100(r1)
    li r8, 0x1
    lfs f2, lbl_80882520
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r6
    li r6, 0x0
    stw r28, 0xe0(r1)
    mr r28, r5
    li r5, 0x2a
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x4f
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f0, lbl_80882518
    lis r4, lbl_80781140@ha
    stfs f0, 0x238(r30)
    addi r4, r4, lbl_80781140@l
    lfs f5, 0x8(r29)
    addi r3, r1, 0x8
    lfs f4, 0x8(r28)
    lfs f3, 0x4(r29)
    lfs f0, 0x4(r28)
    fsubs f5, f5, f4
    stw r4, 0x0(r31)
    fsubs f4, f3, f0
    lfs f3, 0x0(r29)
    lfs f0, 0x0(r28)
    stfs f4, 0xc(r1)
    fsubs f0, f3, f0
    lfs f31, lbl_80882540
    stfs f5, 0x10(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    lwz r4, 0x4(r31)
    addi r3, r1, 0x8
    lfs f0, lbl_80882528
    addi r30, r1, 0x14
    psq_l f1, 0x528(r4), 0, 0
    li r0, 0x3
    lfs f2, 0x530(r4)
    stfs f2, 0x20(r31)
    lfs f2, 0x8(r28)
    psq_st f1, 0x18(r31), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0xc(r31), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x14(r31)
    lfs f2, 0x8(r29)
    psq_st f1, 0x30(r31), 0, 0
    stfs f2, 0x38(r31)
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f3, f2
    psq_st f1, 0x24(r31), 0, 0
    stfs f2, 0x2c(r31)
    fabs f4, f3
    stfs f31, 0x3c(r31)
    frsp f4, f4
    stw r0, 0x8(r31)
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f4, f0
    stfs f2, 0x1c(r1)
    bge lbl_fn_801B86CC_00001638
    lfs f3, 0x14(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B86CC_0000162C
    lfs f0, lbl_8088252C
    b lbl_fn_801B86CC_00001630
lbl_fn_801B86CC_0000162C:
    lfs f0, lbl_80882530
lbl_fn_801B86CC_00001630:
    stfs f0, 0x24(r1)
    b lbl_fn_801B86CC_0000164C
lbl_fn_801B86CC_00001638:
    fmr f2, f3
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_801B86CC_0000164C:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088251C
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f31, 0xc4(r1)
    lfs f30, 0xb4(r1)
    lfs f0, lbl_80882518
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f30, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80882528
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B86CC_00001768
    lfs f3, 0x30(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B86CC_00001758
    lfs f0, lbl_8088252C
    b lbl_fn_801B86CC_0000175C
lbl_fn_801B86CC_00001758:
    lfs f0, lbl_80882530
lbl_fn_801B86CC_0000175C:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_801B86CC_0000177C
lbl_fn_801B86CC_00001768:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_801B86CC_0000177C:
    addi r3, r1, 0x20
    lfs f2, lbl_8088251C
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r31)
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x4(r31)
    bl fn_801446F0
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B86CC_000017EC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B86CC_000017EC
    lwz r3, lbl_8087F498
    li r5, 0x11
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80882518
    lfs f2, lbl_8088253C
    bl fn_803EA77C
lbl_fn_801B86CC_000017EC:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801B86CC_0000182C
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801B86CC_0000182C
    lwz r3, lbl_8087F498
    li r5, 0x12
    lwz r4, 0x4(r31)
    li r6, 0x2d
    lfs f1, lbl_80882518
    lfs f2, lbl_8088253C
    bl fn_803EA77C
lbl_fn_801B86CC_0000182C:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801B86CC_00001884
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801B86CC_00001884
    li r4, 0xf8
    bl fn_80370174
    addi r0, r3, 0x1
    cmpwi r0, 0x3e7
    bge lbl_fn_801B86CC_00001870
    lwz r3, lbl_8087F430
    li r4, 0xf8
    bl fn_80370174
    addi r5, r3, 0x1
    b lbl_fn_801B86CC_00001874
lbl_fn_801B86CC_00001870:
    li r5, 0x3e7
lbl_fn_801B86CC_00001874:
    lwz r3, lbl_8087F430
    li r4, 0xf8
    li r6, 0x0
    bl fn_80370320
lbl_fn_801B86CC_00001884:
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r31
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801B8AD0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r7, lbl_807813C0@ha
    lfs f0, lbl_80882518
    stw r0, 0x114(r1)
    addi r7, r7, lbl_807813C0@l
    li r0, 0x1
    lfs f1, lbl_8088251C
    stfd f31, 0x100(r1)
    li r8, 0x1
    lfs f2, lbl_80882520
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r6
    li r6, 0x0
    stw r29, 0xe4(r1)
    mr r29, r5
    li r5, 0x2b
    stw r28, 0xe0(r1)
    mr r28, r3
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x50
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80882518
    lis r4, lbl_807810C0@ha
    stfs f0, 0x238(r31)
    addi r4, r4, lbl_807810C0@l
    lfs f5, 0x8(r30)
    addi r3, r1, 0x8
    lfs f4, 0x8(r29)
    lfs f3, 0x4(r30)
    lfs f0, 0x4(r29)
    fsubs f5, f5, f4
    stw r4, 0x0(r28)
    fsubs f4, f3, f0
    lfs f3, 0x0(r30)
    lfs f0, 0x0(r29)
    stfs f4, 0xc(r1)
    fsubs f0, f3, f0
    lfs f31, lbl_80882540
    stfs f5, 0x10(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
    lwz r4, 0x4(r28)
    addi r3, r1, 0x8
    lfs f0, lbl_80882528
    addi r31, r1, 0x14
    psq_l f1, 0x528(r4), 0, 0
    li r0, 0x3
    lfs f2, 0x530(r4)
    stfs f2, 0x20(r28)
    lfs f2, 0x8(r29)
    psq_st f1, 0x18(r28), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0xc(r28), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f2, 0x14(r28)
    lfs f2, 0x8(r30)
    psq_st f1, 0x30(r28), 0, 0
    stfs f2, 0x38(r28)
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f3, f2
    psq_st f1, 0x24(r28), 0, 0
    stfs f2, 0x2c(r28)
    fabs f4, f3
    stfs f31, 0x3c(r28)
    frsp f4, f4
    stw r0, 0x8(r28)
    psq_st f1, 0x0(r31), 0, 0
    fcmpo cr0, f4, f0
    stfs f2, 0x1c(r1)
    bge lbl_fn_801B8AD0_00001A3C
    lfs f3, 0x14(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B8AD0_00001A30
    lfs f0, lbl_8088252C
    b lbl_fn_801B8AD0_00001A34
lbl_fn_801B8AD0_00001A30:
    lfs f0, lbl_80882530
lbl_fn_801B8AD0_00001A34:
    stfs f0, 0x24(r1)
    b lbl_fn_801B8AD0_00001A50
lbl_fn_801B8AD0_00001A3C:
    fmr f2, f3
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_801B8AD0_00001A50:
    lfs f0, 0x24(r1)
    addi r3, r1, 0xa8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088251C
    addi r4, r1, 0x2c
    lfs f4, 0xb0(r1)
    mr r5, r4
    lfs f5, 0xac(r1)
    addi r3, r1, 0x68
    lfs f6, 0xa8(r1)
    lfs f7, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f9, 0xb8(r1)
    lfs f10, 0xd0(r1)
    lfs f11, 0xcc(r1)
    lfs f12, 0xc8(r1)
    lfs f13, 0xd4(r1)
    lfs f31, 0xc4(r1)
    lfs f30, 0xb4(r1)
    lfs f0, lbl_80882518
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f30, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f30, 0x74(r1)
    stfs f31, 0x84(r1)
    stfs f13, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_80882528
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801B8AD0_00001B6C
    lfs f3, 0x30(r1)
    lfs f0, lbl_8088251C
    fcmpo cr0, f3, f0
    ble lbl_fn_801B8AD0_00001B5C
    lfs f0, lbl_8088252C
    b lbl_fn_801B8AD0_00001B60
lbl_fn_801B8AD0_00001B5C:
    lfs f0, lbl_80882530
lbl_fn_801B8AD0_00001B60:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_801B8AD0_00001B80
lbl_fn_801B8AD0_00001B6C:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_801B8AD0_00001B80:
    addi r3, r1, 0x20
    lfs f2, lbl_8088251C
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r28)
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r31), 0, 0
    lwz r3, 0x4(r28)
    bl fn_801446F0
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r28
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}
