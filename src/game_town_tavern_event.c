#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80088FAC(void);
extern void fn_8008937C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D58A4(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_801F3FF8(void);
extern void fn_801F4FF4(void);
extern void fn_801F64D0(void);
extern void fn_801F8994(void);
extern void fn_80202A6C(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_8023772C(void);
extern void fn_803B5470(void);
extern void fn_803B612C(void);

/* External data declarations */
extern u8 lbl_807506A0[];
extern u8 lbl_807C8628[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087F494;
extern u32 lbl_8087F610;
extern u32 lbl_80885D58;
extern u32 lbl_80885D60;
extern u32 lbl_80885DE0;
extern u32 lbl_80885DE4;

/* Function declarations */
void fn_803CFC58(void);
void fn_803CFC64(void);
void fn_803CFC6C(void);
void fn_803CFC74(void);
void fn_803CFC78(void);
void fn_803D022C(void);
void fn_803D0B20(void);
void fn_803D11B4(void);
void fn_803D1574(void);

asm void fn_803CFC58(void)
{
    nofralloc
    lwz r0, 0x38(r3)
    extrwi r3, r0, 1, 29
    blr
}

asm void fn_803CFC64(void)
{
    nofralloc
    lfs f1, 0x100(r3)
    blr
}

asm void fn_803CFC6C(void)
{
    nofralloc
    lfs f1, 0xa0(r3)
    blr
}

asm void fn_803CFC74(void)
{
    nofralloc
    blr
}

asm void fn_803CFC78(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807506A0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807C8628@ha
    addi r30, r30, lbl_807C8628@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x2664(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803CFC78_00000080
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803CFC78_00000080
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x2664(r28)
    mr r29, r3
    b lbl_fn_803CFC78_00000084
lbl_fn_803CFC78_00000080:
    li r29, 0x0
lbl_fn_803CFC78_00000084:
    lis r31, lbl_807506A0@ha
    mr r3, r29
    addi r31, r31, lbl_807506A0@l
    la r5, lbl_8087F494
    addi r4, r31, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x16
    fmr f3, f2
    addi r5, r30, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x22
    fmr f3, f2
    addi r5, r30, 0x10
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x2c
    fmr f3, f2
    addi r5, r30, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x37
    fmr f3, f2
    addi r5, r30, 0x30
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x44
    fmr f3, f2
    addi r5, r30, 0x40
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x4f
    fmr f3, f2
    addi r5, r30, 0x50
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x5a
    fmr f3, f2
    addi r5, r30, 0x60
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x64
    fmr f3, f2
    addi r5, r30, 0x70
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x6e
    fmr f3, f2
    addi r5, r30, 0x80
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x77
    fmr f3, f2
    addi r5, r30, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x83
    fmr f3, f2
    addi r5, r30, 0xb0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x8d
    fmr f3, f2
    addi r5, r30, 0xa0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x97
    fmr f3, f2
    addi r5, r30, 0xc0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0xa1
    fmr f3, f2
    addi r5, r30, 0xd0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0xab
    fmr f3, f2
    addi r5, r30, 0xe0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0xb5
    fmr f3, f2
    addi r5, r30, 0xf0
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    mr r3, r29
    addi r4, r31, 0xc0
    bl fn_8008937C
    lfs f2, lbl_80885D60
    mr r30, r3
    lfs f1, lbl_80885D58
    addi r4, r31, 0xce
    fmr f3, f2
    addi r5, r28, 0x2698
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0xd4
    fmr f3, f2
    addi r5, r28, 0x26a8
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0xda
    fmr f3, f2
    addi r5, r28, 0x2678
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0xe3
    fmr f3, f2
    addi r5, r28, 0x2688
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0xec
    fmr f3, f2
    addi r5, r28, 0x26b8
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0xf4
    fmr f3, f2
    addi r5, r28, 0x26c8
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0xfc
    fmr f3, f2
    addi r5, r28, 0x26d8
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0x104
    fmr f3, f2
    addi r5, r28, 0x26e8
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0x10d
    fmr f3, f2
    addi r5, r28, 0x26f8
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0x117
    fmr f3, f2
    addi r5, r28, 0x2708
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r30
    lfs f1, lbl_80885D58
    addi r4, r31, 0x121
    fmr f3, f2
    addi r5, r28, 0x2718
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    mr r3, r29
    addi r4, r31, 0x129
    addi r5, r28, 0xd78
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0x137
    addi r5, r28, 0xd7c
    li r6, 0x0
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r31, 0x148
    addi r5, r28, 0xd80
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x159
    fmr f3, f2
    addi r5, r28, 0x288c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f2, lbl_80885D60
    mr r3, r29
    lfs f1, lbl_80885D58
    addi r4, r31, 0x162
    fmr f3, f2
    addi r5, r28, 0x289c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088FAC
    lfs f1, lbl_80885D58
    mr r3, r29
    lfs f2, lbl_80885D60
    addi r4, r31, 0x171
    lfs f3, lbl_80885DE0
    addi r5, r28, 0x2668
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885D58
    mr r3, r29
    lfs f2, lbl_80885D60
    addi r4, r31, 0x183
    lfs f3, lbl_80885DE0
    addi r5, r28, 0x266c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885D58
    mr r3, r29
    lfs f2, lbl_80885DE4
    addi r4, r31, 0x195
    lfs f3, lbl_80885DE0
    addi r5, r28, 0x2670
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885D58
    mr r3, r29
    lfs f2, lbl_80885DE4
    addi r4, r31, 0x1a7
    lfs f3, lbl_80885DE0
    addi r5, r28, 0x2674
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803D022C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r17, 0x14(r1)
    lis r20, lbl_807506A0@ha
    addi r20, r20, lbl_807506A0@l
    mr r19, r3
    addi r4, r20, 0x1b9
    bl fn_801F64D0
    stw r3, 0x5c(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x1da
    bl fn_801F64D0
    stw r3, 0x60(r19)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_803D022C_00000640
    lwz r0, 0x5a8(r3)
    clrlwi. r0, r0, 24
    bne lbl_fn_803D022C_00000640
    li r0, 0x0
    stw r0, 0x64(r19)
    b lbl_fn_803D022C_00000660
lbl_fn_803D022C_00000640:
    lis r4, lbl_807506A0@ha
    mr r3, r19
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x1ff
    bl fn_801F64D0
    stw r3, 0x64(r19)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_803D022C_00000660:
    lis r4, lbl_807506A0@ha
    mr r3, r19
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x21e
    bl fn_801F64D0
    stw r3, 0x68(r19)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_803D022C_000006A4
    lwz r0, 0x5a8(r3)
    clrlwi. r0, r0, 24
    bne lbl_fn_803D022C_000006A4
    li r0, 0x0
    stw r0, 0x6c(r19)
    b lbl_fn_803D022C_000006C4
lbl_fn_803D022C_000006A4:
    lis r4, lbl_807506A0@ha
    mr r3, r19
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x249
    bl fn_801F64D0
    stw r3, 0x6c(r19)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_803D022C_000006C4:
    lis r4, lbl_807506A0@ha
    mr r3, r19
    addi r30, r4, lbl_807506A0@l
    addi r4, r30, 0x26a
    bl fn_801F64D0
    stw r3, 0x70(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r30, 0x28b
    bl fn_801F64D0
    stw r3, 0x74(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r30, 0x2b6
    bl fn_801F64D0
    stw r3, 0x78(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r30, 0x2dd
    bl fn_801F64D0
    stw r3, 0x7c(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r22, r19
    mr r21, r19
    addi r29, r30, 0x2fe
    addi r28, r30, 0x31f
    addi r27, r30, 0x344
    addi r26, r30, 0x36f
    addi r25, r30, 0x390
    addi r24, r30, 0x3b1
    addi r23, r30, 0x3db
    li r20, 0x0
    li r31, 0x0
lbl_fn_803D022C_00000758:
    mr r3, r19
    mr r4, r29
    bl fn_801F64D0
    stw r3, 0xbc(r22)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    mr r4, r28
    bl fn_801F64D0
    stw r3, 0xc0(r22)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_803D022C_000007A8
    lwz r0, 0x5a8(r3)
    clrlwi. r0, r0, 24
    bne lbl_fn_803D022C_000007A8
    stw r31, 0xc4(r22)
    b lbl_fn_803D022C_000007C0
lbl_fn_803D022C_000007A8:
    mr r3, r19
    addi r4, r30, 0x403
    bl fn_801F64D0
    stw r3, 0xc4(r22)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_803D022C_000007C0:
    mr r3, r19
    mr r4, r27
    bl fn_801F64D0
    stw r3, 0xc8(r22)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_803D022C_000007F8
    lwz r0, 0x5a8(r3)
    clrlwi. r0, r0, 24
    bne lbl_fn_803D022C_000007F8
    stw r31, 0xcc(r22)
    b lbl_fn_803D022C_00000810
lbl_fn_803D022C_000007F8:
    mr r3, r19
    addi r4, r30, 0x422
    bl fn_801F64D0
    stw r3, 0xcc(r22)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_803D022C_00000810:
    mr r3, r19
    mr r4, r26
    bl fn_801F64D0
    stw r3, 0xd0(r22)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    mr r4, r25
    bl fn_801F64D0
    stw r3, 0xdc(r22)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    mr r4, r24
    bl fn_801F64D0
    stw r3, 0x32c(r21)
    li r4, 0x0
    bl fn_800D246C
    mr r3, r19
    mr r4, r23
    bl fn_801F64D0
    stw r3, 0x330(r21)
    li r4, 0x0
    bl fn_800D246C
    mr r18, r21
    li r17, 0x0
lbl_fn_803D022C_00000878:
    cmpwi r17, 0x0
    bne lbl_fn_803D022C_0000088C
    lwz r0, 0x32c(r21)
    stw r0, 0x318(r18)
    b lbl_fn_803D022C_000008B8
lbl_fn_803D022C_0000088C:
    cmpwi r17, 0x1
    bne lbl_fn_803D022C_000008B0
    mr r3, r19
    addi r4, r30, 0x443
    bl fn_801F64D0
    stw r3, 0x318(r18)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_803D022C_000008B8
lbl_fn_803D022C_000008B0:
    lwz r0, 0x330(r21)
    stw r0, 0x318(r18)
lbl_fn_803D022C_000008B8:
    addi r17, r17, 0x1
    addi r18, r18, 0x4
    cmpwi r17, 0x5
    blt lbl_fn_803D022C_00000878
    addi r20, r20, 0x1
    addi r21, r21, 0x20
    cmpwi r20, 0x6
    addi r22, r22, 0x60
    blt lbl_fn_803D022C_00000758
    lis r20, lbl_807506A0@ha
    mr r3, r19
    addi r20, r20, lbl_807506A0@l
    li r5, 0x0
    addi r4, r20, 0x46f
    bl fn_801F3FF8
    stw r3, 0x3ec(r19)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x3ec(r19)
    addi r21, r20, 0x48c
    mr r22, r19
    addi r20, r20, 0x4a4
    lwz r0, 0xfc(r3)
    li r17, 0x0
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r3)
lbl_fn_803D022C_00000920:
    mr r3, r19
    mr r4, r21
    bl fn_801F64D0
    stw r3, 0x574(r22)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    mr r4, r20
    bl fn_801F64D0
    stw r3, 0x594(r22)
    li r4, 0x1
    bl fn_800D246C
    addi r17, r17, 0x1
    addi r22, r22, 0x4
    cmpwi r17, 0x8
    blt lbl_fn_803D022C_00000920
    lis r20, lbl_807506A0@ha
    mr r3, r19
    addi r20, r20, lbl_807506A0@l
    li r5, 0x0
    addi r4, r20, 0x48c
    bl fn_801F3FF8
    stw r3, 0x5b8(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x4c2
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x3d8(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r21, r19
    addi r20, r20, 0x4e2
    li r17, 0x0
lbl_fn_803D022C_000009AC:
    mr r3, r19
    mr r4, r20
    bl fn_801F64D0
    stw r3, 0x3dc(r21)
    li r4, 0x1
    bl fn_800D246C
    addi r17, r17, 0x1
    addi r21, r21, 0x4
    cmpwi r17, 0x4
    blt lbl_fn_803D022C_000009AC
    lis r3, lbl_807506A0@ha
    mr r21, r19
    addi r3, r3, lbl_807506A0@l
    li r17, 0x0
    addi r20, r3, 0x4ff
lbl_fn_803D022C_000009E8:
    mr r3, r19
    mr r4, r20
    bl fn_801F64D0
    stw r3, 0x6fc(r21)
    li r4, 0x1
    bl fn_800D246C
    addi r17, r17, 0x1
    addi r21, r21, 0x4
    cmpwi r17, 0x6
    blt lbl_fn_803D022C_000009E8
    lis r20, lbl_807506A0@ha
    mr r3, r19
    addi r20, r20, lbl_807506A0@l
    li r5, 0x0
    addi r4, r20, 0x522
    bl fn_801F3FF8
    stw r3, 0x714(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x542
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x71c(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x522
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x718(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x542
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x720(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x562
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x72c(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x589
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x730(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r21, r19
    addi r20, r20, 0x5ab
    li r17, 0x0
lbl_fn_803D022C_00000ACC:
    mr r3, r19
    mr r4, r20
    bl fn_801F64D0
    stw r3, 0x8a0(r21)
    li r4, 0x1
    bl fn_800D246C
    addi r17, r17, 0x1
    addi r21, r21, 0x4
    cmpwi r17, 0xc
    blt lbl_fn_803D022C_00000ACC
    lis r4, lbl_807506A0@ha
    mr r3, r19
    addi r20, r4, lbl_807506A0@l
    li r5, 0x0
    addi r4, r20, 0x5cc
    bl fn_801F3FF8
    stw r3, 0xa84(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x5ee
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xa88(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x613
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x73c(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x632
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x740(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x651
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x744(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x676
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x7b8(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x695
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x7bc(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x6b4
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x814(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x6dc
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x81c(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x704
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x824(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x651
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x82c(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x72d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x818(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x756
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x820(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x77f
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x828(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x7a9
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x830(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x7cf
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x83c(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x7f9
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x840(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    bl fn_803B5470
    stw r3, 0x263c(r19)
    mr r3, r19
    bl fn_803B612C
    stw r3, 0x2640(r19)
    mr r21, r19
    li r17, 0x0
lbl_fn_803D022C_00000CF8:
    mr r3, r19
    addi r4, r20, 0x820
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb38(r21)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x845
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb3c(r21)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x86c
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb40(r21)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x899
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb44(r21)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x8c6
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb48(r21)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x8f1
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb4c(r21)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x91c
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb50(r21)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x949
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xb54(r21)
    li r4, 0x1
    bl fn_800D246C
    addi r17, r17, 0x1
    addi r21, r21, 0x20
    cmpwi r17, 0x8
    blt lbl_fn_803D022C_00000CF8
    lis r20, lbl_807506A0@ha
    mr r3, r19
    addi r20, r20, lbl_807506A0@l
    li r5, 0x0
    addi r4, r20, 0x976
    bl fn_801F3FF8
    stw r3, 0x2654(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x997
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xd70(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x9c4
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xd74(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0x9f1
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xdb4(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0xa11
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xdb8(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0xa2f
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xdbc(r19)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r19
    addi r4, r20, 0xa4f
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xdc0(r19)
    li r4, 0x1
    bl fn_800D246C
    lmw r17, 0x14(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803D0B20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r3
    lwz r0, 0xdc8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803D0B20_00001548
    lis r4, lbl_807506A0@ha
    li r0, 0x1
    stw r0, 0xdc8(r3)
    addi r30, r4, lbl_807506A0@l
    addi r4, r30, 0xa6a
    addi r3, r3, 0xdd4
    bl fn_800D5908
    addi r3, r31, 0xe04
    addi r4, r30, 0xa8a
    bl fn_800D5908
    addi r3, r31, 0xe34
    addi r4, r30, 0xab0
    bl fn_800D5908
    addi r3, r31, 0xe64
    addi r4, r30, 0xacf
    bl fn_800D5908
    mr r27, r31
    li r29, 0x0
lbl_fn_803D0B20_00000F30:
    mr r28, r27
    li r26, 0x0
lbl_fn_803D0B20_00000F38:
    mr r3, r31
    addi r4, r30, 0xaf4
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x5bc(r28)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x5
    blt lbl_fn_803D0B20_00000F38
    addi r29, r29, 0x1
    addi r27, r27, 0x14
    cmpwi r29, 0x10
    blt lbl_fn_803D0B20_00000F30
    lis r3, lbl_807506A0@ha
    mr r27, r31
    addi r3, r3, lbl_807506A0@l
    li r26, 0x0
    addi r30, r3, 0xb14
    addi r29, r3, 0xb35
    addi r28, r3, 0xb56
lbl_fn_803D0B20_00000F90:
    mr r3, r31
    mr r4, r30
    bl fn_801F64D0
    stw r3, 0xa90(r27)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    mr r4, r29
    bl fn_801F8994
    stw r3, 0xab8(r27)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    mr r4, r28
    bl fn_801F8994
    stw r3, 0xae0(r27)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r27, r27, 0x4
    cmpwi r26, 0xa
    blt lbl_fn_803D0B20_00000F90
    lis r3, lbl_807506A0@ha
    mr r29, r31
    addi r3, r3, lbl_807506A0@l
    li r26, 0x0
    addi r28, r3, 0xb7c
    li r30, 0x0
lbl_fn_803D0B20_00001000:
    mr r3, r31
    mr r4, r28
    bl fn_801F4FF4
    stw r3, 0xf14(r29)
    li r4, 0x1
    bl fn_800D246C
    stw r30, 0xf94(r29)
    stw r26, 0x1014(r29)
    addi r26, r26, 0x1
    cmpwi r26, 0x20
    addi r29, r29, 0x4
    blt lbl_fn_803D0B20_00001000
    lis r3, lbl_807506A0@ha
    mr r29, r31
    addi r3, r3, lbl_807506A0@l
    li r26, 0x0
    addi r28, r3, 0xb9e
    li r30, 0x0
lbl_fn_803D0B20_00001048:
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    stw r3, 0x10b4(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    stw r30, 0x10d4(r29)
    cmpwi r26, 0x8
    addi r29, r29, 0x4
    blt lbl_fn_803D0B20_00001048
    lis r30, lbl_807506A0@ha
    mr r3, r31
    addi r30, r30, lbl_807506A0@l
    li r5, 0x0
    addi r4, r30, 0xbc2
    bl fn_801F3FF8
    stw r3, 0x10f4(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xbdd
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x10f8(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xbff
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x844(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xc20
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x870(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xc42
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x848(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r29, r31
    addi r28, r30, 0xc42
    li r26, 0x0
lbl_fn_803D0B20_00001114:
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    stw r3, 0x84c(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r29, r29, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_803D0B20_00001114
    lis r30, lbl_807506A0@ha
    mr r3, r31
    addi r30, r30, lbl_807506A0@l
    li r5, 0x0
    addi r4, r30, 0xc42
    bl fn_801F3FF8
    stw r3, 0x874(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r29, r31
    addi r28, r30, 0xc42
    li r26, 0x0
lbl_fn_803D0B20_0000116C:
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    stw r3, 0x878(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r29, r29, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_803D0B20_0000116C
    lis r4, lbl_807506A0@ha
    mr r3, r31
    addi r30, r4, lbl_807506A0@l
    li r5, 0x0
    addi r4, r30, 0xc63
    bl fn_801F3FF8
    stw r3, 0xb08(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xc83
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb0c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xca3
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb10(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xcc9
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb14(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xcef
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb18(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xd0d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb1c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xd2d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb20(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xd52
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb24(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r28, r31
    li r26, 0x0
lbl_fn_803D0B20_00001284:
    mr r3, r31
    addi r4, r30, 0xd6d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xb28(r28)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_803D0B20_00001284
    lis r30, lbl_807506A0@ha
    mr r3, r31
    addi r30, r30, lbl_807506A0@l
    li r5, 0x0
    addi r4, r30, 0xd8d
    bl fn_801F3FF8
    stw r3, 0x1104(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xdb8
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1108(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xddc
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1110(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xe00
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1114(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xe26
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1140(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xe4e
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1144(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xe76
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x1148(r31)
    li r4, 0x1
    bl fn_800D246C
    addi r3, r31, 0x1158
    addi r4, r30, 0xe9a
    bl fn_80237654
    addi r3, r31, 0x1164
    addi r4, r30, 0xeb4
    bl fn_80237654
    addi r3, r31, 0x1554
    addi r4, r30, 0xece
    bl fn_80237654
    addi r3, r31, 0x1584
    addi r4, r30, 0xee8
    bl fn_80237654
    addi r3, r31, 0x1560
    addi r4, r30, 0xf02
    bl fn_80237654
    addi r3, r31, 0x1590
    addi r4, r30, 0xf1c
    bl fn_80237654
    addi r3, r31, 0x156c
    addi r4, r30, 0xf36
    bl fn_80237654
    addi r3, r31, 0x159c
    addi r4, r30, 0xf50
    bl fn_80237654
    addi r3, r31, 0x1578
    addi r4, r30, 0xf6a
    bl fn_80237654
    addi r3, r31, 0x15a8
    addi r4, r30, 0xf84
    bl fn_80237654
    mr r3, r31
    addi r4, r30, 0x997
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2544(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x9c4
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2548(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xf9e
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x254c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xfbb
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2550(r31)
    mr r3, r31
    addi r4, r30, 0xfe0
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2554(r31)
    mr r3, r31
    addi r4, r30, 0x1002
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2558(r31)
    mr r28, r31
    li r26, 0x0
lbl_fn_803D0B20_0000148C:
    lwz r3, 0x2550(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803D0B20_000014A0
    li r4, 0x1
    bl fn_800D246C
lbl_fn_803D0B20_000014A0:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x3
    blt lbl_fn_803D0B20_0000148C
    lis r30, lbl_807506A0@ha
    mr r3, r31
    addi r30, r30, lbl_807506A0@l
    li r5, 0x0
    addi r4, r30, 0x1023
    bl fn_801F3FF8
    stw r3, 0x2564(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r29, r31
    addi r28, r30, 0x1045
    li r26, 0x0
lbl_fn_803D0B20_000014E0:
    mr r3, r31
    mr r4, r28
    bl fn_801F8994
    stw r3, 0x2610(r29)
    li r4, 0x1
    bl fn_800D246C
    addi r26, r26, 0x1
    addi r29, r29, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_803D0B20_000014E0
    lis r30, lbl_807506A0@ha
    mr r3, r31
    addi r30, r30, lbl_807506A0@l
    li r5, 0x0
    addi r4, r30, 0x1060
    bl fn_801F3FF8
    stw r3, 0x2628(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x107c
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xdc4(r31)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_803D0B20_00001548:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803D11B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r3
    lwz r0, 0xdc8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D11B4_00001908
    li r30, 0x0
    stw r30, 0xdc8(r3)
    addi r3, r3, 0xdd4
    bl fn_800D58A4
    addi r3, r31, 0xe04
    bl fn_800D58A4
    addi r3, r31, 0xe34
    bl fn_800D58A4
    addi r3, r31, 0xe64
    bl fn_800D58A4
    mr r29, r31
    li r27, 0x0
lbl_fn_803D11B4_000015AC:
    mr r28, r29
    li r26, 0x0
lbl_fn_803D11B4_000015B4:
    lwz r3, 0x5bc(r28)
    bl fn_800D2338
    addi r26, r26, 0x1
    stw r30, 0x5bc(r28)
    cmpwi r26, 0x5
    addi r28, r28, 0x4
    blt lbl_fn_803D11B4_000015B4
    addi r27, r27, 0x1
    addi r29, r29, 0x14
    cmpwi r27, 0x10
    blt lbl_fn_803D11B4_000015AC
    mr r29, r31
    li r26, 0x0
    li r30, 0x0
lbl_fn_803D11B4_000015EC:
    lwz r3, 0xa90(r29)
    bl fn_800D2338
    stw r30, 0xa90(r29)
    lwz r3, 0xab8(r29)
    bl fn_800D2338
    stw r30, 0xab8(r29)
    lwz r3, 0xae0(r29)
    bl fn_800D2338
    addi r26, r26, 0x1
    stw r30, 0xae0(r29)
    cmpwi r26, 0xa
    addi r29, r29, 0x4
    blt lbl_fn_803D11B4_000015EC
    mr r29, r31
    li r26, 0x0
    li r30, 0x0
lbl_fn_803D11B4_0000162C:
    lwz r3, 0xf14(r29)
    bl fn_800D2338
    stw r30, 0xf14(r29)
    stw r30, 0xf94(r29)
    stw r26, 0x1014(r29)
    addi r26, r26, 0x1
    cmpwi r26, 0x20
    addi r29, r29, 0x4
    blt lbl_fn_803D11B4_0000162C
    mr r29, r31
    li r26, 0x0
    li r30, 0x0
lbl_fn_803D11B4_0000165C:
    lwz r3, 0x10b4(r29)
    bl fn_800D2338
    addi r26, r26, 0x1
    stw r30, 0x10b4(r29)
    cmpwi r26, 0x8
    stw r30, 0x10d4(r29)
    addi r29, r29, 0x4
    blt lbl_fn_803D11B4_0000165C
    lwz r3, 0x10f4(r31)
    bl fn_800D2338
    li r30, 0x0
    stw r30, 0x10f4(r31)
    lwz r3, 0x10f8(r31)
    bl fn_800D2338
    stw r30, 0x10f8(r31)
    lwz r3, 0x844(r31)
    bl fn_800D2338
    stw r30, 0x844(r31)
    lwz r3, 0x870(r31)
    bl fn_800D2338
    stw r30, 0x870(r31)
    lwz r3, 0x848(r31)
    bl fn_800D2338
    stw r30, 0x848(r31)
    mr r29, r31
    li r26, 0x0
lbl_fn_803D11B4_000016C4:
    lwz r3, 0x84c(r29)
    bl fn_800D2338
    addi r26, r26, 0x1
    stw r30, 0x84c(r29)
    cmpwi r26, 0x4
    addi r29, r29, 0x4
    blt lbl_fn_803D11B4_000016C4
    lwz r3, 0x874(r31)
    bl fn_800D2338
    li r30, 0x0
    stw r30, 0x874(r31)
    mr r29, r31
    li r26, 0x0
lbl_fn_803D11B4_000016F8:
    lwz r3, 0x878(r29)
    bl fn_800D2338
    addi r26, r26, 0x1
    stw r30, 0x878(r29)
    cmpwi r26, 0x4
    addi r29, r29, 0x4
    blt lbl_fn_803D11B4_000016F8
    lwz r3, 0xb08(r31)
    bl fn_800D2338
    li r30, 0x0
    stw r30, 0xb08(r31)
    lwz r3, 0xb0c(r31)
    bl fn_800D2338
    stw r30, 0xb0c(r31)
    lwz r3, 0xb10(r31)
    bl fn_800D2338
    stw r30, 0xb10(r31)
    lwz r3, 0xb14(r31)
    bl fn_800D2338
    stw r30, 0xb14(r31)
    lwz r3, 0xb18(r31)
    bl fn_800D2338
    stw r30, 0xb18(r31)
    lwz r3, 0xb1c(r31)
    bl fn_800D2338
    stw r30, 0xb1c(r31)
    lwz r3, 0xb20(r31)
    bl fn_800D2338
    stw r30, 0xb20(r31)
    lwz r3, 0xb24(r31)
    bl fn_800D2338
    stw r30, 0xb24(r31)
    mr r29, r31
    li r26, 0x0
lbl_fn_803D11B4_00001780:
    lwz r3, 0xb28(r29)
    bl fn_800D2338
    addi r26, r26, 0x1
    stw r30, 0xb28(r29)
    cmpwi r26, 0x4
    addi r29, r29, 0x4
    blt lbl_fn_803D11B4_00001780
    lwz r3, 0x1104(r31)
    bl fn_800D2338
    li r30, 0x0
    stw r30, 0x1104(r31)
    lwz r3, 0x1108(r31)
    bl fn_800D2338
    stw r30, 0x1108(r31)
    lwz r3, 0x1110(r31)
    bl fn_800D2338
    stw r30, 0x1110(r31)
    lwz r3, 0x1114(r31)
    bl fn_800D2338
    stw r30, 0x1114(r31)
    lwz r3, 0x1140(r31)
    stw r30, 0x111c(r31)
    stw r30, 0x112c(r31)
    bl fn_800D2338
    stw r30, 0x1140(r31)
    lwz r3, 0x1144(r31)
    bl fn_800D2338
    stw r30, 0x1144(r31)
    lwz r3, 0x1148(r31)
    bl fn_800D2338
    stw r30, 0x1148(r31)
    addi r3, r31, 0x1158
    bl fn_8023772C
    addi r3, r31, 0x1164
    bl fn_8023772C
    addi r29, r31, 0x1554
    addi r30, r31, 0x1584
    li r26, 0x0
lbl_fn_803D11B4_00001818:
    mr r3, r29
    bl fn_8023772C
    mr r3, r30
    bl fn_8023772C
    addi r26, r26, 0x1
    addi r30, r30, 0xc
    cmpwi r26, 0x4
    addi r29, r29, 0xc
    blt lbl_fn_803D11B4_00001818
    lwz r3, 0x2544(r31)
    bl fn_800D2338
    li r30, 0x0
    stw r30, 0x2544(r31)
    lwz r3, 0x2548(r31)
    bl fn_800D2338
    stw r30, 0x2548(r31)
    lwz r3, 0x254c(r31)
    bl fn_800D2338
    stw r30, 0x254c(r31)
    mr r29, r31
    li r26, 0x0
lbl_fn_803D11B4_0000186C:
    lwz r3, 0x2550(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803D11B4_00001880
    bl fn_800D2338
    stw r30, 0x2550(r29)
lbl_fn_803D11B4_00001880:
    addi r26, r26, 0x1
    addi r29, r29, 0x4
    cmpwi r26, 0x3
    blt lbl_fn_803D11B4_0000186C
    lwz r3, 0x2564(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803D11B4_000018A8
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x2564(r31)
lbl_fn_803D11B4_000018A8:
    mr r29, r31
    li r26, 0x0
    li r30, 0x0
lbl_fn_803D11B4_000018B4:
    lwz r3, 0x2610(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803D11B4_000018C8
    bl fn_800D2338
    stw r30, 0x2610(r29)
lbl_fn_803D11B4_000018C8:
    addi r26, r26, 0x1
    addi r29, r29, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_803D11B4_000018B4
    lwz r3, 0x2628(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803D11B4_000018F0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x2628(r31)
lbl_fn_803D11B4_000018F0:
    lwz r3, 0xdc4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803D11B4_00001908
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xdc4(r31)
lbl_fn_803D11B4_00001908:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803D1574(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    li r29, 0x0
    lwz r0, 0xdc8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D1574_000019C8
    addi r3, r3, 0xdd4
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_803D1574_00001980
    addi r3, r27, 0xe04
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_803D1574_00001980
    addi r3, r27, 0xe34
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_803D1574_00001980
    addi r3, r27, 0xe64
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_803D1574_00001984
lbl_fn_803D1574_00001980:
    li r29, 0x1
lbl_fn_803D1574_00001984:
    addi r31, r27, 0x1554
    addi r30, r27, 0x1584
    li r28, 0x0
lbl_fn_803D1574_00001990:
    mr r3, r31
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_803D1574_000019B0
    mr r3, r30
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_803D1574_000019B4
lbl_fn_803D1574_000019B0:
    li r29, 0x1
lbl_fn_803D1574_000019B4:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0x4
    addi r31, r31, 0xc
    blt lbl_fn_803D1574_00001990
lbl_fn_803D1574_000019C8:
    mr r3, r27
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_803D1574_000019DC
    li r29, 0x1
lbl_fn_803D1574_000019DC:
    mr r3, r29
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
