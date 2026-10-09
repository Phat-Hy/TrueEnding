#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_8006BA30(void);
extern void fn_800A58D0(void);
extern void fn_800C63D8(void);
extern void fn_800C73B0(void);
extern void fn_800C755C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_801F4728(void);
extern void fn_801F4E8C(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_804A53D4(void);
extern void fn_804AC734(void);
extern void fn_804F7F1C(void);
extern void fn_80686A48(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8075AA90[];
extern u8 lbl_8075AEDC[];
extern u8 lbl_80792AE0[];

/* Small data declarations */
extern u32 lbl_8087E440;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F628;
extern u32 lbl_8087F860;
extern u32 lbl_808813D0;
extern u32 lbl_80887760;
extern u32 lbl_80887764;
extern u32 lbl_80887768;
extern u32 lbl_8088776C;
extern u32 lbl_80887770;
extern u32 lbl_80887774;

/* Function declarations */
void fn_80503B08(void);
void fn_80503B10(void);
void fn_80503D3C(void);
void fn_80503F68(void);
void fn_80504194(void);
void fn_805043C0(void);
void fn_805045EC(void);
void fn_80504818(void);
void fn_80504A44(void);
void fn_80504AB8(void);
void fn_80504C04(void);
void fn_80504D50(void);
void fn_80505084(void);
void fn_805053FC(void);
void fn_8050541C(void);

asm void fn_80503B08(void)
{
    nofralloc
    stw r4, 0x2420(r3)
    blr
}

asm void fn_80503B10(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r5
    stw r0, 0x0(r3)
    lwz r0, 0x2428(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80503B10_0000005C
    stw r0, 0x0(r3)
    addi r3, r4, 0x242c
    addi r4, r6, 0x4
    li r5, 0x0
    lwz r6, 0x2428(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503B10_0000005C:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_80503B10_0000008C
    stw r6, 0x8(r1)
    addi r3, r30, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503B10_0000008C:
    addi r3, r31, 0x2428
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80503B10_000001E0
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503B10_000000D0
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503B10_000000D0:
    addi r3, r31, 0x2428
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80503B10_0000013C
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503B10_00000114
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503B10_0000010C
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503B10_0000010C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80503B10_00000114:
    lwz r6, 0x2428(r31)
    cmpwi r6, 0x0
    beq lbl_fn_80503B10_0000013C
    stw r6, 0x8(r1)
    addi r3, r31, 0x242c
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503B10_0000013C:
    addi r3, r1, 0x1c
    addi r0, r31, 0x2428
    cmplw r3, r0
    beq lbl_fn_80503B10_000001AC
    lwz r3, 0x2428(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80503B10_00000180
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503B10_00000178
    addi r3, r31, 0x242c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503B10_00000178:
    li r0, 0x0
    stw r0, 0x2428(r31)
lbl_fn_80503B10_00000180:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80503B10_000001AC
    stw r0, 0x2428(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x242c
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503B10_000001AC:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503B10_000001E0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503B10_000001D8
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503B10_000001D8:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_80503B10_000001E0:
    addic. r3, r1, 0x8
    beq lbl_fn_80503B10_0000021C
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80503B10_0000021C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80503B10_00000214
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503B10_00000214:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80503B10_0000021C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80503D3C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r5
    stw r0, 0x0(r3)
    lwz r0, 0x243c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80503D3C_00000288
    stw r0, 0x0(r3)
    addi r3, r4, 0x2440
    addi r4, r6, 0x4
    li r5, 0x0
    lwz r6, 0x243c(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503D3C_00000288:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_80503D3C_000002B8
    stw r6, 0x8(r1)
    addi r3, r30, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503D3C_000002B8:
    addi r3, r31, 0x243c
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80503D3C_0000040C
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503D3C_000002FC
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503D3C_000002FC:
    addi r3, r31, 0x243c
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80503D3C_00000368
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503D3C_00000340
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503D3C_00000338
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503D3C_00000338:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80503D3C_00000340:
    lwz r6, 0x243c(r31)
    cmpwi r6, 0x0
    beq lbl_fn_80503D3C_00000368
    stw r6, 0x8(r1)
    addi r3, r31, 0x2440
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503D3C_00000368:
    addi r3, r1, 0x1c
    addi r0, r31, 0x243c
    cmplw r3, r0
    beq lbl_fn_80503D3C_000003D8
    lwz r3, 0x243c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80503D3C_000003AC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503D3C_000003A4
    addi r3, r31, 0x2440
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503D3C_000003A4:
    li r0, 0x0
    stw r0, 0x243c(r31)
lbl_fn_80503D3C_000003AC:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80503D3C_000003D8
    stw r0, 0x243c(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x2440
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503D3C_000003D8:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503D3C_0000040C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503D3C_00000404
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503D3C_00000404:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_80503D3C_0000040C:
    addic. r3, r1, 0x8
    beq lbl_fn_80503D3C_00000448
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80503D3C_00000448
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80503D3C_00000440
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503D3C_00000440:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80503D3C_00000448:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80503F68(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r5
    stw r0, 0x0(r3)
    lwz r0, 0x2450(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80503F68_000004B4
    stw r0, 0x0(r3)
    addi r3, r4, 0x2454
    addi r4, r6, 0x4
    li r5, 0x0
    lwz r6, 0x2450(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503F68_000004B4:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_80503F68_000004E4
    stw r6, 0x8(r1)
    addi r3, r30, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503F68_000004E4:
    addi r3, r31, 0x2450
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80503F68_00000638
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503F68_00000528
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503F68_00000528:
    addi r3, r31, 0x2450
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80503F68_00000594
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503F68_0000056C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503F68_00000564
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503F68_00000564:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80503F68_0000056C:
    lwz r6, 0x2450(r31)
    cmpwi r6, 0x0
    beq lbl_fn_80503F68_00000594
    stw r6, 0x8(r1)
    addi r3, r31, 0x2454
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503F68_00000594:
    addi r3, r1, 0x1c
    addi r0, r31, 0x2450
    cmplw r3, r0
    beq lbl_fn_80503F68_00000604
    lwz r3, 0x2450(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80503F68_000005D8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503F68_000005D0
    addi r3, r31, 0x2454
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503F68_000005D0:
    li r0, 0x0
    stw r0, 0x2450(r31)
lbl_fn_80503F68_000005D8:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80503F68_00000604
    stw r0, 0x2450(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x2454
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80503F68_00000604:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80503F68_00000638
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80503F68_00000630
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503F68_00000630:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_80503F68_00000638:
    addic. r3, r1, 0x8
    beq lbl_fn_80503F68_00000674
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80503F68_00000674
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80503F68_0000066C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80503F68_0000066C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80503F68_00000674:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80504194(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r5
    stw r0, 0x0(r3)
    lwz r0, 0x2464(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80504194_000006E0
    stw r0, 0x0(r3)
    addi r3, r4, 0x2468
    addi r4, r6, 0x4
    li r5, 0x0
    lwz r6, 0x2464(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504194_000006E0:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_80504194_00000710
    stw r6, 0x8(r1)
    addi r3, r30, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504194_00000710:
    addi r3, r31, 0x2464
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80504194_00000864
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80504194_00000754
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504194_00000754:
    addi r3, r31, 0x2464
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80504194_000007C0
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80504194_00000798
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80504194_00000790
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80504194_00000790:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80504194_00000798:
    lwz r6, 0x2464(r31)
    cmpwi r6, 0x0
    beq lbl_fn_80504194_000007C0
    stw r6, 0x8(r1)
    addi r3, r31, 0x2468
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504194_000007C0:
    addi r3, r1, 0x1c
    addi r0, r31, 0x2464
    cmplw r3, r0
    beq lbl_fn_80504194_00000830
    lwz r3, 0x2464(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80504194_00000804
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80504194_000007FC
    addi r3, r31, 0x2468
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80504194_000007FC:
    li r0, 0x0
    stw r0, 0x2464(r31)
lbl_fn_80504194_00000804:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80504194_00000830
    stw r0, 0x2464(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x2468
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504194_00000830:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80504194_00000864
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80504194_0000085C
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80504194_0000085C:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_80504194_00000864:
    addic. r3, r1, 0x8
    beq lbl_fn_80504194_000008A0
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80504194_000008A0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80504194_00000898
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80504194_00000898:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80504194_000008A0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805043C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r5
    stw r0, 0x0(r3)
    lwz r0, 0x2478(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805043C0_0000090C
    stw r0, 0x0(r3)
    addi r3, r4, 0x247c
    addi r4, r6, 0x4
    li r5, 0x0
    lwz r6, 0x2478(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805043C0_0000090C:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_805043C0_0000093C
    stw r6, 0x8(r1)
    addi r3, r30, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805043C0_0000093C:
    addi r3, r31, 0x2478
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_805043C0_00000A90
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805043C0_00000980
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805043C0_00000980:
    addi r3, r31, 0x2478
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_805043C0_000009EC
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805043C0_000009C4
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805043C0_000009BC
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805043C0_000009BC:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_805043C0_000009C4:
    lwz r6, 0x2478(r31)
    cmpwi r6, 0x0
    beq lbl_fn_805043C0_000009EC
    stw r6, 0x8(r1)
    addi r3, r31, 0x247c
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805043C0_000009EC:
    addi r3, r1, 0x1c
    addi r0, r31, 0x2478
    cmplw r3, r0
    beq lbl_fn_805043C0_00000A5C
    lwz r3, 0x2478(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805043C0_00000A30
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805043C0_00000A28
    addi r3, r31, 0x247c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805043C0_00000A28:
    li r0, 0x0
    stw r0, 0x2478(r31)
lbl_fn_805043C0_00000A30:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805043C0_00000A5C
    stw r0, 0x2478(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x247c
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805043C0_00000A5C:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805043C0_00000A90
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805043C0_00000A88
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805043C0_00000A88:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_805043C0_00000A90:
    addic. r3, r1, 0x8
    beq lbl_fn_805043C0_00000ACC
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805043C0_00000ACC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805043C0_00000AC4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805043C0_00000AC4:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_805043C0_00000ACC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805045EC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r5
    stw r0, 0x0(r3)
    lwz r0, 0x248c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805045EC_00000B38
    stw r0, 0x0(r3)
    addi r3, r4, 0x2490
    addi r4, r6, 0x4
    li r5, 0x0
    lwz r6, 0x248c(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805045EC_00000B38:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_805045EC_00000B68
    stw r6, 0x8(r1)
    addi r3, r30, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805045EC_00000B68:
    addi r3, r31, 0x248c
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_805045EC_00000CBC
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805045EC_00000BAC
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805045EC_00000BAC:
    addi r3, r31, 0x248c
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_805045EC_00000C18
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805045EC_00000BF0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805045EC_00000BE8
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805045EC_00000BE8:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_805045EC_00000BF0:
    lwz r6, 0x248c(r31)
    cmpwi r6, 0x0
    beq lbl_fn_805045EC_00000C18
    stw r6, 0x8(r1)
    addi r3, r31, 0x2490
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805045EC_00000C18:
    addi r3, r1, 0x1c
    addi r0, r31, 0x248c
    cmplw r3, r0
    beq lbl_fn_805045EC_00000C88
    lwz r3, 0x248c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805045EC_00000C5C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805045EC_00000C54
    addi r3, r31, 0x2490
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805045EC_00000C54:
    li r0, 0x0
    stw r0, 0x248c(r31)
lbl_fn_805045EC_00000C5C:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805045EC_00000C88
    stw r0, 0x248c(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x2490
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_805045EC_00000C88:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805045EC_00000CBC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_805045EC_00000CB4
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805045EC_00000CB4:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_805045EC_00000CBC:
    addic. r3, r1, 0x8
    beq lbl_fn_805045EC_00000CF8
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805045EC_00000CF8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_805045EC_00000CF0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_805045EC_00000CF0:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_805045EC_00000CF8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80504818(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r5
    stw r0, 0x0(r3)
    lwz r0, 0x24a0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80504818_00000D64
    stw r0, 0x0(r3)
    addi r3, r4, 0x24a4
    addi r4, r6, 0x4
    li r5, 0x0
    lwz r6, 0x24a0(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504818_00000D64:
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    beq lbl_fn_80504818_00000D94
    stw r6, 0x8(r1)
    addi r3, r30, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504818_00000D94:
    addi r3, r31, 0x24a0
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80504818_00000EE8
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80504818_00000DD8
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504818_00000DD8:
    addi r3, r31, 0x24a0
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_80504818_00000E44
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80504818_00000E1C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80504818_00000E14
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80504818_00000E14:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80504818_00000E1C:
    lwz r6, 0x24a0(r31)
    cmpwi r6, 0x0
    beq lbl_fn_80504818_00000E44
    stw r6, 0x8(r1)
    addi r3, r31, 0x24a4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504818_00000E44:
    addi r3, r1, 0x1c
    addi r0, r31, 0x24a0
    cmplw r3, r0
    beq lbl_fn_80504818_00000EB4
    lwz r3, 0x24a0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80504818_00000E88
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80504818_00000E80
    addi r3, r31, 0x24a4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80504818_00000E80:
    li r0, 0x0
    stw r0, 0x24a0(r31)
lbl_fn_80504818_00000E88:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80504818_00000EB4
    stw r0, 0x24a0(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0x24a4
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80504818_00000EB4:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80504818_00000EE8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80504818_00000EE0
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80504818_00000EE0:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_80504818_00000EE8:
    addic. r3, r1, 0x8
    beq lbl_fn_80504818_00000F24
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80504818_00000F24
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80504818_00000F1C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80504818_00000F1C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80504818_00000F24:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80504A44(void)
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
    beq lbl_fn_80504A44_00000F94
    addic. r3, r3, 0xf8
    li r0, 0x0
    stw r0, lbl_8087F860
    beq lbl_fn_80504A44_00000F78
    li r4, 0x0
    bl fn_800C63D8
lbl_fn_80504A44_00000F78:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80504A44_00000F94
    mr r3, r30
    bl dtor_80084684
lbl_fn_80504A44_00000F94:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80504AB8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80504AB8_000010D4
    bl fn_804F7F1C
    cmpwi r3, 0x0
    bne lbl_fn_80504AB8_000010D4
    lwz r31, 0x48(r29)
    cmpwi r31, 0x0
    beq lbl_fn_80504AB8_00001018
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887760
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_80504AB8_00001018:
    lwz r31, 0x4c(r29)
    cmpwi r31, 0x0
    beq lbl_fn_80504AB8_00001044
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887760
    stfs f0, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r31)
lbl_fn_80504AB8_00001044:
    lfs f31, lbl_80887760
    mr r31, r29
    li r30, 0x0
lbl_fn_80504AB8_00001050:
    lwz r3, 0x50(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x50(r31)
    addi r30, r30, 0x1
    cmpwi r30, 0x26
    stfs f31, 0x104(r3)
    lwz r3, 0x50(r31)
    addi r31, r31, 0x4
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    blt lbl_fn_80504AB8_00001050
    lfs f31, lbl_80887760
    mr r31, r29
    li r30, 0x0
lbl_fn_80504AB8_00001090:
    lwz r3, 0xe8(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0xe8(r31)
    addi r30, r30, 0x1
    cmpwi r30, 0x4
    stfs f31, 0x104(r3)
    lwz r3, 0xe8(r31)
    addi r31, r31, 0x4
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    blt lbl_fn_80504AB8_00001090
    mr r3, r29
    bl fn_80504C04
    li r3, 0x1
    b lbl_fn_80504AB8_000010D8
lbl_fn_80504AB8_000010D4:
    li r3, 0x0
lbl_fn_80504AB8_000010D8:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80504C04(void)
{
    nofralloc
    stwu r1, -0x880(r1)
    mflr r0
    li r6, 0x0
    addi r4, r3, 0xf8
    stw r0, 0x884(r1)
    li r0, 0x100
    addi r5, r1, 0x54
    stmw r24, 0x860(r1)
    mr r31, r3
    stw r6, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r6, 0x24(r1)
    stw r6, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r6, 0x34(r1)
    stw r6, 0x38(r1)
    stw r6, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r6, 0x44(r1)
    stw r6, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r6, 0x54(r1)
    mtctr r0
lbl_fn_80504C04_00001164:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80504C04_00001164
    li r24, 0x0
    lis r27, lbl_8075AEDC@ha
    mr r28, r24
    addi r29, r1, 0x58
    addi r27, r27, lbl_8075AEDC@l
    li r30, 0x0
    la r26, lbl_8087E440
lbl_fn_80504C04_00001194:
    addi r3, r1, 0x18
    addi r4, r27, 0xb0
    addi r5, r24, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x58
    bl fn_80686A48
    cmplw r24, r3
    bge lbl_fn_80504C04_00001204
    stw r28, 0x8(r1)
    addi r3, r1, 0x18
    lhzx r0, r29, r30
    stw r28, 0xc(r1)
    stw r28, 0x10(r1)
    stw r28, 0x14(r1)
    sth r0, 0x8(r1)
    sth r28, 0xa(r1)
    lwz r4, 0x4c(r31)
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    addi r5, r1, 0x8
    bl fn_801FEE08
    lwz r3, 0x25b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x25b4(r31)
    b lbl_fn_80504C04_00001224
lbl_fn_80504C04_00001204:
    lwz r4, 0x4c(r31)
    addi r3, r1, 0x18
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r26
    bl fn_801FEE08
lbl_fn_80504C04_00001224:
    addi r24, r24, 0x1
    addi r30, r30, 0x2
    cmpwi r24, 0x8
    blt lbl_fn_80504C04_00001194
    lmw r24, 0x860(r1)
    lwz r0, 0x884(r1)
    mtlr r0
    addi r1, r1, 0x880
    blr
}

asm void fn_80504D50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x25ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80504D50_000012A0
    cmpwi r0, 0x1
    beq lbl_fn_80504D50_000013C4
    cmpwi r0, 0x2
    beq lbl_fn_80504D50_000014FC
    cmpwi r0, 0x3
    beq lbl_fn_80504D50_00001510
    cmpwi r0, 0x4
    beq lbl_fn_80504D50_00001530
    b lbl_fn_80504D50_00001554
lbl_fn_80504D50_000012A0:
    lwz r6, 0x48(r3)
    li r0, 0x5
    li r4, 0x0
    lwz r5, 0x38(r6)
    ori r5, r5, 0x4
    stw r5, 0x38(r6)
    lwz r6, 0x4c(r3)
    lwz r5, 0x38(r6)
    ori r5, r5, 0x4
    stw r5, 0x38(r6)
    mtctr r0
lbl_fn_80504D50_000012CC:
    lwz r5, 0x50(r31)
    addi r4, r4, 0x7
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0x54(r31)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0x58(r31)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0x5c(r31)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0x60(r31)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0x64(r31)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r5, 0x68(r31)
    addi r31, r31, 0x1c
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    bdnz lbl_fn_80504D50_000012CC
    slwi r0, r4, 2
    add r5, r3, r0
    lwz r4, 0x50(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x54(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x58(r5)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xe8(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xec(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xf0(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r3, 0xf4(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_80504D50_00001554
lbl_fn_80504D50_000013C4:
    li r4, 0x2
    li r0, 0x1
    stw r4, 0x25ac(r3)
    stw r0, 0x25b8(r3)
    addi r3, r3, 0xf8
    bl fn_800C73B0
    lwz r30, 0x48(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80504D50_00001408
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887764
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_80504D50_00001408:
    lwz r30, 0x4c(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80504D50_00001434
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887764
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_80504D50_00001434:
    lwz r3, 0x48(r31)
    mr r29, r31
    lfs f31, lbl_80887764
    li r28, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_80504D50_00001460:
    lwz r30, 0x50(r29)
    cmpwi r30, 0x0
    beq lbl_fn_80504D50_00001488
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_80504D50_00001488:
    lwz r3, 0x50(r29)
    addi r28, r28, 0x1
    cmpwi r28, 0x26
    addi r29, r29, 0x4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    blt lbl_fn_80504D50_00001460
    lfs f31, lbl_80887764
    li r28, 0x0
lbl_fn_80504D50_000014B0:
    lwz r30, 0xe8(r31)
    cmpwi r30, 0x0
    beq lbl_fn_80504D50_000014D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_80504D50_000014D8:
    lwz r3, 0xe8(r31)
    addi r28, r28, 0x1
    cmpwi r28, 0x4
    addi r31, r31, 0x4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    blt lbl_fn_80504D50_000014B0
    b lbl_fn_80504D50_00001554
lbl_fn_80504D50_000014FC:
    lwzu r12, 0xf8(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80504D50_00001554
lbl_fn_80504D50_00001510:
    lwz r4, 0x4c(r3)
    lfs f0, lbl_80887760
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    bne lbl_fn_80504D50_00001554
    li r0, 0x0
    stw r0, 0x25ac(r3)
    b lbl_fn_80504D50_00001554
lbl_fn_80504D50_00001530:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80504D50_00001554
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_80504D50_00001554
    li r0, 0x2
    stw r0, 0x25ac(r31)
lbl_fn_80504D50_00001554:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80505084(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_22
    lwz r0, 0x25ac(r3)
    lis r4, lbl_80792AE0@ha
    mr r31, r3
    cmpwi r0, 0x0
    addi r4, r4, lbl_80792AE0@l
    beq lbl_fn_80505084_000018DC
    lis r29, lbl_8075AEDC@ha
    mr r25, r31
    addi r29, r29, lbl_8075AEDC@l
    addi r26, r4, 0x98
    addi r24, r4, 0x130
    addi r23, r4, 0x0
    addi r28, r29, 0xbb
    li r22, 0x0
lbl_fn_80505084_000015C8:
    addi r3, r1, 0x48
    addi r4, r29, 0xbf
    addi r5, r22, 0x1
    crclr 6
    bl sprintf
    lwz r30, 0x4c(r31)
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lwz r3, 0x50(r25)
    addi r4, r29, 0xc9
    addi r5, r1, 0x30
    bl fn_801F4728
    bl fn_8006BA30
    cmpwi r3, 0x3
    bne lbl_fn_80505084_0000161C
    lwz r30, 0x0(r26)
    b lbl_fn_80505084_00001630
lbl_fn_80505084_0000161C:
    cmpwi r3, 0x2
    bne lbl_fn_80505084_0000162C
    lwz r30, 0x0(r24)
    b lbl_fn_80505084_00001630
lbl_fn_80505084_0000162C:
    lwz r30, 0x0(r23)
lbl_fn_80505084_00001630:
    lwz r4, 0x50(r25)
    mr r3, r28
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r30
    bl fn_801FEE08
    addi r22, r22, 0x1
    addi r26, r26, 0x4
    cmpwi r22, 0x26
    addi r24, r24, 0x4
    addi r23, r23, 0x4
    addi r25, r25, 0x4
    blt lbl_fn_80505084_000015C8
    lis r29, lbl_8075AEDC@ha
    lis r25, lbl_8075AA90@ha
    addi r29, r29, lbl_8075AEDC@l
    mr r26, r31
    addi r25, r25, lbl_8075AA90@l
    li r22, 0x0
    addi r30, r29, 0xd4
lbl_fn_80505084_00001688:
    addi r3, r1, 0x48
    addi r4, r29, 0xe2
    addi r5, r22, 0x1
    crclr 6
    bl sprintf
    lwz r28, 0x4c(r31)
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lwz r3, 0xe8(r26)
    addi r4, r29, 0xed
    addi r5, r1, 0x1c
    bl fn_801F4728
    lwz r0, 0x0(r25)
    lwz r3, lbl_8087F1E4
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r27, 0x4(r3)
    cmpwi r27, 0x0
    beq lbl_fn_80505084_000016E8
    b lbl_fn_80505084_000016EC
lbl_fn_80505084_000016E8:
    la r27, lbl_808813D0
lbl_fn_80505084_000016EC:
    lwz r4, 0xe8(r26)
    mr r3, r30
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r27
    bl fn_801FEE08
    addi r22, r22, 0x1
    addi r25, r25, 0x4
    cmpwi r22, 0x4
    addi r26, r26, 0x4
    blt lbl_fn_80505084_00001688
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80505084_0000178C
    lwz r3, 0xe8(r31)
    lis r29, lbl_8075AEDC@ha
    la r30, lbl_8087E440
    addi r29, r29, lbl_8075AEDC@l
    addi r27, r3, 0x58
    addi r28, r30, 0x4
    addi r3, r29, 0xf8
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    lwz r4, 0xf4(r31)
    addi r28, r30, 0xc
    addi r3, r29, 0xf8
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    b lbl_fn_80505084_000017E0
lbl_fn_80505084_0000178C:
    lwz r3, 0xe8(r31)
    lis r30, lbl_8075AEDC@ha
    la r29, lbl_8087E440
    addi r30, r30, lbl_8075AEDC@l
    addi r27, r3, 0x58
    addi r28, r29, 0xc
    addi r3, r30, 0xf8
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    lwz r4, 0xf4(r31)
    addi r28, r29, 0x4
    addi r3, r30, 0xf8
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
lbl_fn_80505084_000017E0:
    lwz r5, 0x25b0(r31)
    lis r30, lbl_8075AEDC@ha
    addi r30, r30, lbl_8075AEDC@l
    addi r3, r1, 0x48
    addi r4, r30, 0x106
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r28, 0x4c(r31)
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    lwz r3, lbl_8087F628
    addi r3, r3, 0x5f0
    bl fn_80686A48
    cmpwi r3, 0x0
    bne lbl_fn_80505084_00001894
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x112
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887768
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x11a
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887768
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FED24
    b lbl_fn_80505084_000018DC
lbl_fn_80505084_00001894:
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x112
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088776C
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x11a
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887770
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_801FED24
lbl_fn_80505084_000018DC:
    addi r11, r1, 0xb0
    bl _restgpr_22
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_805053FC(void)
{
    nofralloc
    lwz r0, 0x25ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805053FC_00001908
    cmpwi r0, 0x3
    bnelr
lbl_fn_805053FC_00001908:
    li r0, 0x1
    stw r0, 0x25ac(r3)
    blr
}

asm void fn_8050541C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x25ac(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8050541C_0000193C
    cmpwi r0, 0x1
    bne lbl_fn_8050541C_000019F8
lbl_fn_8050541C_0000193C:
    li r0, 0x3
    stw r0, 0x25ac(r3)
    addi r3, r3, 0xf8
    bl fn_800C755C
    lwz r3, 0x48(r31)
    li r0, 0x5
    lfs f0, lbl_80887774
    mr r4, r31
    stfs f0, 0x104(r3)
    li r5, 0x0
    lwz r3, 0x4c(r31)
    stfs f0, 0x104(r3)
    mtctr r0
lbl_fn_8050541C_00001970:
    lwz r3, 0x50(r4)
    addi r5, r5, 0x7
    stfs f0, 0x104(r3)
    lwz r3, 0x54(r4)
    stfs f0, 0x104(r3)
    lwz r3, 0x58(r4)
    stfs f0, 0x104(r3)
    lwz r3, 0x5c(r4)
    stfs f0, 0x104(r3)
    lwz r3, 0x60(r4)
    stfs f0, 0x104(r3)
    lwz r3, 0x64(r4)
    stfs f0, 0x104(r3)
    lwz r3, 0x68(r4)
    addi r4, r4, 0x1c
    stfs f0, 0x104(r3)
    bdnz lbl_fn_8050541C_00001970
    slwi r0, r5, 2
    lfs f0, lbl_80887774
    add r4, r31, r0
    lwz r3, 0x50(r4)
    stfs f0, 0x104(r3)
    lwz r3, 0x54(r4)
    stfs f0, 0x104(r3)
    lwz r3, 0x58(r4)
    stfs f0, 0x104(r3)
    lwz r3, 0xe8(r31)
    stfs f0, 0x104(r3)
    lwz r3, 0xec(r31)
    stfs f0, 0x104(r3)
    lwz r3, 0xf0(r31)
    stfs f0, 0x104(r3)
    lwz r3, 0xf4(r31)
    stfs f0, 0x104(r3)
lbl_fn_8050541C_000019F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
