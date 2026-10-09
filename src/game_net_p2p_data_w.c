#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_8009EE30(void);
extern void fn_800A03E4(void);
extern void fn_800A0548(void);
extern void fn_800A08D4(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801D0960(void);
extern void fn_80201E78(void);
extern void fn_802020B4(void);
extern void fn_80202A6C(void);
extern void fn_80202CA4(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_8050F2F4(void);
extern void fn_805F89F0(void);
extern void fn_805F9160(void);
extern void fn_805F9190(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80695A50(void);
extern void fn_806ABCF0(void);
extern void fn_806CF0E0(void);
extern void fn_806CF160(void);
extern void fn_806CF1B0(void);
extern void fn_806CFAC0(void);
extern void fn_806D0030(void);
extern void fn_806D0060(void);

/* External data declarations */
extern u8 lbl_8075B2B8[];
extern u8 lbl_80790000[];
extern u8 lbl_807931A0[];
extern u8 lbl_807931B4[];
extern u8 lbl_807932B8[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F880;
extern u32 lbl_808877C8;
extern u32 lbl_808877CC;
extern u32 lbl_808877D0;

/* Function declarations */
void fn_8050F5AC(void);
void fn_8050F668(void);
void fn_8050F728(void);
void fn_8050F738(void);
void fn_8050F758(void);
void fn_8050F768(void);
void fn_8050F7DC(void);
void fn_8050F85C(void);
void fn_8050F86C(void);
void fn_8050F8A4(void);
void fn_8050F8B4(void);
void fn_8050F8C8(void);
void fn_8050F940(void);
void fn_8050FA80(void);
void fn_8050FB3C(void);
void fn_8050FC08(void);
void fn_8050FC8C(void);
void fn_8050FD24(void);
void fn_8050FD3C(void);
void fn_8050FE48(void);
void fn_80510080(void);
void fn_805100FC(void);
void fn_80510100(void);
void fn_80510130(void);
void fn_80510568(void);
void fn_80510724(void);
void fn_805109D0(void);
void fn_80510CB4(void);
void fn_80510D68(void);
void fn_80510E98(void);

asm void fn_8050F5AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r3, 0x40
    stw r29, 0x14(r1)
    mr r29, r4
    stw r0, lbl_8087F880
lbl_fn_8050F5AC_0000002C:
    lwz r3, lbl_8087F880
    cmplwi r29, 0x1
    addi r0, r3, 0x1
    stw r0, lbl_8087F880
    bne lbl_fn_8050F5AC_00000074
    mr r3, r30
    bl fn_806CF1B0
    cmpwi r3, 0x3
    bne lbl_fn_8050F5AC_00000068
    mr r3, r30
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_8050F5AC_00000068
    li r0, 0x1
    b lbl_fn_8050F5AC_0000006C
lbl_fn_8050F5AC_00000068:
    li r0, 0x0
lbl_fn_8050F5AC_0000006C:
    cmpwi r0, 0x0
    beq lbl_fn_8050F5AC_00000088
lbl_fn_8050F5AC_00000074:
    mr r3, r30
    bl fn_806CFAC0
    cmpwi r3, 0x0
    beq lbl_fn_8050F5AC_00000088
    b lbl_fn_8050F5AC_0000009C
lbl_fn_8050F5AC_00000088:
    addi r31, r31, 0x1
    addi r30, r30, 0xc
    cmplwi r31, 0x20
    blt lbl_fn_8050F5AC_0000002C
    li r31, -0x1
lbl_fn_8050F5AC_0000009C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050F668(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r30, lbl_8087F880
    mulli r0, r30, 0xc
    add r3, r3, r0
    addi r31, r3, 0x40
    b lbl_fn_8050F668_00000154
lbl_fn_8050F668_000000EC:
    lwz r3, lbl_8087F880
    cmplwi r29, 0x1
    addi r0, r3, 0x1
    stw r0, lbl_8087F880
    bne lbl_fn_8050F668_00000134
    mr r3, r31
    bl fn_806CF1B0
    cmpwi r3, 0x3
    bne lbl_fn_8050F668_00000128
    mr r3, r31
    bl fn_806CF0E0
    cmpwi r3, 0x0
    beq lbl_fn_8050F668_00000128
    li r0, 0x1
    b lbl_fn_8050F668_0000012C
lbl_fn_8050F668_00000128:
    li r0, 0x0
lbl_fn_8050F668_0000012C:
    cmpwi r0, 0x0
    beq lbl_fn_8050F668_0000014C
lbl_fn_8050F668_00000134:
    mr r3, r31
    bl fn_806CFAC0
    cmpwi r3, 0x0
    beq lbl_fn_8050F668_0000014C
    mr r3, r30
    b lbl_fn_8050F668_00000160
lbl_fn_8050F668_0000014C:
    addi r31, r31, 0xc
    addi r30, r30, 0x1
lbl_fn_8050F668_00000154:
    cmplwi r30, 0x20
    blt lbl_fn_8050F668_000000EC
    li r3, -0x1
lbl_fn_8050F668_00000160:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050F728(void)
{
    nofralloc
    slwi r0, r4, 5
    add r3, r3, r0
    addi r3, r3, 0x1f0
    blr
}

asm void fn_8050F738(void)
{
    nofralloc
    slwi r0, r4, 5
    lis r4, lbl_807931B4@ha
    add r3, r3, r0
    addi r4, r4, lbl_807931B4@l
    addi r3, r3, 0x1f0
    addi r4, r4, 0x1a
    crclr 6
    b fn_800DD3FC
}

asm void fn_8050F758(void)
{
    nofralloc
    mulli r0, r4, 0xc
    add r4, r3, r0
    addi r4, r4, 0x40
    b fn_806D0060
}

asm void fn_8050F768(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    mulli r0, r4, 0xc
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    add r3, r3, r0
    addi r3, r3, 0x40
    bl fn_806D0030
    or. r0, r4, r3
    stw r4, 0xc(r1)
    stw r3, 0x8(r1)
    bne lbl_fn_8050F768_00000210
    slwi r0, r31, 4
    addi r3, r1, 0x8
    add r4, r30, r0
    li r5, 0x8
    addi r4, r4, 0x5f0
    bl memcpy
lbl_fn_8050F768_00000210:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050F7DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mulli r0, r4, 0xc
    li r4, 0x0
    add r3, r3, r0
    addi r3, r3, 0x40
    bl fn_806ABCF0
    clrlwi r3, r3, 24
    subi r0, r3, 0x2
    cmplwi r0, 0x3
    ble lbl_fn_8050F7DC_0000028C
    cmpwi r3, 0x0
    beq lbl_fn_8050F7DC_0000027C
    cmpwi r3, 0x1
    beq lbl_fn_8050F7DC_00000284
    cmpwi r3, 0x6
    beq lbl_fn_8050F7DC_00000294
    b lbl_fn_8050F7DC_0000029C
lbl_fn_8050F7DC_0000027C:
    li r3, 0x0
    b lbl_fn_8050F7DC_000002A0
lbl_fn_8050F7DC_00000284:
    li r3, 0x1
    b lbl_fn_8050F7DC_000002A0
lbl_fn_8050F7DC_0000028C:
    li r3, 0x2
    b lbl_fn_8050F7DC_000002A0
lbl_fn_8050F7DC_00000294:
    li r3, 0x3
    b lbl_fn_8050F7DC_000002A0
lbl_fn_8050F7DC_0000029C:
    li r3, -0x1
lbl_fn_8050F7DC_000002A0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050F85C(void)
{
    nofralloc
    mulli r0, r4, 0xc
    add r4, r3, r0
    addi r4, r4, 0x40
    b fn_8050F2F4
}

asm void fn_8050F86C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mulli r0, r4, 0xc
    add r3, r3, r0
    addi r3, r3, 0x40
    bl fn_806CF1B0
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050F8A4(void)
{
    nofralloc
    mulli r0, r4, 0xc
    add r3, r3, r0
    addi r3, r3, 0x40
    b fn_806CF160
}

asm void fn_8050F8B4(void)
{
    nofralloc
    lis r3, lbl_807931A0@ha
    slwi r0, r4, 2
    addi r3, r3, lbl_807931A0@l
    lwzx r3, r3, r0
    blr
}

asm void fn_8050F8C8(void)
{
    nofralloc
    cmplwi r4, 0x1
    bne lbl_fn_8050F8C8_00000344
    lwz r4, 0x1e8(r3)
    addi r0, r4, 0x5
    stw r0, 0x1e8(r3)
    cmpwi r0, 0x80
    blelr
    li r0, 0x80
    stw r0, 0x1e8(r3)
    blr
lbl_fn_8050F8C8_00000344:
    lwz r5, 0x1ec(r3)
    lis r4, 0xcccd
    subi r0, r4, 0x3333
    addi r4, r5, 0x1
    stw r4, 0x1ec(r3)
    mulhwu r0, r0, r4
    srwi r0, r0, 3
    mulli r0, r0, 0xa
    subf. r0, r0, r4
    bne lbl_fn_8050F8C8_00000378
    lwz r4, 0x1e8(r3)
    subi r0, r4, 0xa
    stw r0, 0x1e8(r3)
lbl_fn_8050F8C8_00000378:
    lwz r4, 0x1e8(r3)
    subic. r0, r4, 0x5
    stw r0, 0x1e8(r3)
    bgelr
    li r0, 0x0
    stw r0, 0x1e8(r3)
    blr
}

asm void fn_8050F940(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D1D3C
    lfs f0, lbl_808877C8
    lis r3, lbl_807932B8@ha
    li r31, 0x0
    addi r30, r28, 0x5c
    addi r3, r3, lbl_807932B8@l
    stw r3, 0x0(r28)
    mr r3, r30
    stw r29, 0x48(r28)
    stw r31, 0x4c(r28)
    stw r31, 0x50(r28)
    stw r31, 0x54(r28)
    stfs f0, 0x58(r28)
    bl fn_80473E74
    lwz r4, 0x50(r28)
    lis r3, lbl_80790000@ha
    lfs f1, lbl_808877CC
    addi r3, r3, lbl_80790000@l
    lfs f0, lbl_808877D0
    cmpwi r4, 0x0
    li r0, 0x1
    stw r3, 0x0(r30)
    stfs f1, 0x64(r28)
    stfs f1, 0x68(r28)
    stfs f1, 0x6c(r28)
    stfs f1, 0x70(r28)
    stfs f1, 0x74(r28)
    stfs f1, 0x78(r28)
    stw r31, 0x7c(r28)
    stw r31, 0x80(r28)
    stw r31, 0x84(r28)
    stw r31, 0x88(r28)
    stw r31, 0x8c(r28)
    stw r31, 0x90(r28)
    stb r0, 0x94(r28)
    stb r31, 0x95(r28)
    stb r31, 0x96(r28)
    stw r31, 0x98(r28)
    stw r31, 0x9c(r28)
    stw r31, 0xa0(r28)
    stfs f1, 0xa4(r28)
    stfs f1, 0xa8(r28)
    stfs f1, 0xac(r28)
    stfs f0, 0xb0(r28)
    stfs f0, 0xb4(r28)
    stfs f0, 0xb8(r28)
    stfs f0, 0xbc(r28)
    stfs f0, 0xc0(r28)
    stfs f0, 0xc4(r28)
    stfs f1, 0xc8(r28)
    stfs f1, 0xcc(r28)
    stfs f1, 0xd0(r28)
    stw r31, 0x50(r28)
    beq lbl_fn_8050F940_00000498
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8050F940_00000498:
    lwz r3, 0x54(r28)
    li r0, 0x0
    lis r4, fn_801D0960@ha
    stw r0, 0x54(r28)
    addi r4, r4, fn_801D0960@l
    bl fn_80695A50
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050FA80(void)
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
    beq lbl_fn_8050FA80_00000574
    addic. r0, r3, 0x98
    beq lbl_fn_8050FA80_00000514
    lwz r0, 0x98(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8050FA80_00000514
    lwz r3, 0xa0(r3)
    bl dtor_80084684
lbl_fn_8050FA80_00000514:
    addic. r3, r30, 0x5c
    beq lbl_fn_8050FA80_00000524
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8050FA80_00000524:
    addic. r0, r30, 0x54
    beq lbl_fn_8050FA80_0000053C
    lis r4, fn_801D0960@ha
    lwz r3, 0x54(r30)
    addi r4, r4, fn_801D0960@l
    bl fn_80695A50
lbl_fn_8050FA80_0000053C:
    addic. r0, r30, 0x50
    beq lbl_fn_8050FA80_00000558
    lwz r3, 0x50(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8050FA80_00000558
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8050FA80_00000558:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8050FA80_00000574
    mr r3, r30
    bl dtor_80084684
lbl_fn_8050FA80_00000574:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050FB3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    lis r30, lbl_8075B2B8@ha
    mr r23, r3
    mr r24, r4
    mr r28, r5
    mr r29, r6
    mr r25, r7
    mr r26, r8
    addi r30, r30, lbl_8075B2B8@l
    li r27, 0x0
    li r31, 0x0
    b lbl_fn_8050FB3C_00000640
lbl_fn_8050FB3C_000005CC:
    lwz r3, 0x4(r29)
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8050FB3C_000005E8
    stw r31, 0x0(r28)
    b lbl_fn_8050FB3C_00000634
lbl_fn_8050FB3C_000005E8:
    extsh r0, r26
    sth r26, 0x4(r28)
    cmpwi r0, 0x1
    bne lbl_fn_8050FB3C_00000618
    lwz r4, 0x4(r29)
    mr r3, r23
    mr r5, r25
    bl fn_80202A6C
    stw r3, 0x0(r28)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_8050FB3C_00000634
lbl_fn_8050FB3C_00000618:
    lwz r4, 0x4(r29)
    mr r3, r23
    mr r5, r25
    bl fn_80201E78
    stw r3, 0x0(r28)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8050FB3C_00000634:
    addi r29, r29, 0xc
    addi r28, r28, 0x40
    addi r27, r27, 0x1
lbl_fn_8050FB3C_00000640:
    cmpw r27, r24
    blt lbl_fn_8050FB3C_000005CC
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8050FC08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    lis r31, lbl_8075B2B8@ha
    mr r26, r4
    mr r29, r5
    mr r30, r6
    addi r31, r31, lbl_8075B2B8@l
    li r27, 0x0
    b lbl_fn_8050FC08_000006C4
lbl_fn_8050FC08_00000688:
    lwz r28, 0x4(r30)
    addi r4, r31, 0x1
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8050FC08_000006B8
    mr r3, r29
    mr r4, r28
    bl fn_800A03E4
    lwz r3, 0x0(r30)
    bl fn_800DC6B4
    stw r3, 0xc(r29)
lbl_fn_8050FC08_000006B8:
    addi r30, r30, 0x8
    addi r29, r29, 0x54
    addi r27, r27, 0x1
lbl_fn_8050FC08_000006C4:
    cmpw r27, r26
    blt lbl_fn_8050FC08_00000688
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050FC8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r4
    b lbl_fn_8050FC8C_00000750
lbl_fn_8050FC8C_00000710:
    lha r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8050FC8C_00000734
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8050FC8C_00000748
    mr r4, r29
    bl fn_80202CA4
    b lbl_fn_8050FC8C_00000748
lbl_fn_8050FC8C_00000734:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8050FC8C_00000748
    mr r4, r29
    bl fn_802020B4
lbl_fn_8050FC8C_00000748:
    addi r31, r31, 0x40
    addi r30, r30, 0x1
lbl_fn_8050FC8C_00000750:
    cmpw r30, r28
    blt lbl_fn_8050FC8C_00000710
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050FD24(void)
{
    nofralloc
    lwz r4, 0x48(r3)
    lwz r0, 0x11f0(r4)
    subf r0, r0, r3
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8050FD3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r7, 0x0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r22, r3
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    ble lbl_fn_8050FD3C_00000888
    lwz r29, 0x70(r4)
    b lbl_fn_8050FD3C_00000824
lbl_fn_8050FD3C_000007C4:
    lwz r0, 0x48(r29)
    cmpwi r0, 0x4
    bne lbl_fn_8050FD3C_00000820
    mr r31, r24
    mr r30, r23
    addi r28, r29, 0x5c
    li r27, 0x0
    b lbl_fn_8050FD3C_00000818
lbl_fn_8050FD3C_000007E4:
    mr r3, r28
    mr r4, r26
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8050FD3C_0000080C
    mr r3, r22
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8050FE48
lbl_fn_8050FD3C_0000080C:
    addi r31, r31, 0xc
    addi r30, r30, 0x40
    addi r27, r27, 0x1
lbl_fn_8050FD3C_00000818:
    cmpw r27, r25
    blt lbl_fn_8050FD3C_000007E4
lbl_fn_8050FD3C_00000820:
    lwz r29, 0x4c(r29)
lbl_fn_8050FD3C_00000824:
    cmpwi r29, 0x0
    bne lbl_fn_8050FD3C_000007C4
    li r27, 0x0
    b lbl_fn_8050FD3C_00000880
lbl_fn_8050FD3C_00000834:
    lha r0, 0x4(r23)
    cmpwi r0, 0x1
    bne lbl_fn_8050FD3C_00000858
    lwz r3, 0x0(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8050FD3C_0000086C
    li r4, 0x0
    bl fn_800D246C
    b lbl_fn_8050FD3C_0000086C
lbl_fn_8050FD3C_00000858:
    lwz r3, 0x0(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8050FD3C_0000086C
    li r4, 0x0
    bl fn_800D246C
lbl_fn_8050FD3C_0000086C:
    lbz r0, 0x8(r24)
    addi r27, r27, 0x1
    stb r0, 0x3c(r23)
    addi r23, r23, 0x40
    addi r24, r24, 0xc
lbl_fn_8050FD3C_00000880:
    cmpw r27, r25
    blt lbl_fn_8050FD3C_00000834
lbl_fn_8050FD3C_00000888:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8050FE48(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_21
    lis r3, lbl_8075B2B8@ha
    mr r24, r4
    mr r25, r5
    mr r26, r6
    addi r31, r3, lbl_8075B2B8@l
    addi r30, r1, 0x20
    addi r28, r1, 0x8
    addi r29, r1, 0x14
    li r27, 0x0
    li r23, 0x0
    b lbl_fn_8050FE48_00000AB0
lbl_fn_8050FE48_000008DC:
    lwz r4, 0x348(r24)
    lwz r3, 0x0(r26)
    lwzx r22, r4, r23
    lwz r21, 0x8c(r22)
    bl fn_800DC6B4
    cmplw r21, r3
    bne lbl_fn_8050FE48_00000AA8
    cmpwi r22, 0x0
    stw r22, 0x8(r25)
    beq lbl_fn_8050FE48_00000910
    lwz r3, 0x4(r22)
    addi r0, r3, 0x10
    b lbl_fn_8050FE48_00000914
lbl_fn_8050FE48_00000910:
    li r0, 0x0
lbl_fn_8050FE48_00000914:
    cmpwi r0, 0x0
    beq lbl_fn_8050FE48_00000A64
    cmpwi r22, 0x0
    beq lbl_fn_8050FE48_00000930
    lwz r3, 0x4(r22)
    addi r22, r3, 0x10
    b lbl_fn_8050FE48_00000934
lbl_fn_8050FE48_00000930:
    li r22, 0x0
lbl_fn_8050FE48_00000934:
    mr r3, r22
    addi r4, r31, 0x3
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8050FE48_00000954
    li r0, 0x0
    b lbl_fn_8050FE48_00000960
lbl_fn_8050FE48_00000954:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r22)
    add r0, r3, r0
lbl_fn_8050FE48_00000960:
    cmpwi r0, 0x0
    beq lbl_fn_8050FE48_00000A64
    lwz r3, 0x8(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8050FE48_00000980
    lwz r3, 0x4(r3)
    addi r22, r3, 0x10
    b lbl_fn_8050FE48_00000984
lbl_fn_8050FE48_00000980:
    li r22, 0x0
lbl_fn_8050FE48_00000984:
    mr r3, r22
    addi r4, r31, 0x3
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8050FE48_000009A4
    li r3, 0x0
    b lbl_fn_8050FE48_000009B0
lbl_fn_8050FE48_000009A4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r22)
    add r3, r3, r0
lbl_fn_8050FE48_000009B0:
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    psq_l f2, 0x8(r3), 0, 0
    mr r5, r30
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    lwz r3, 0x8(r25)
    addi r3, r3, 0x30
    bl fn_805F89F0
    lha r0, 0x4(r25)
    cmpwi r0, 0x1
    bne lbl_fn_8050FE48_00000A34
    lwz r3, 0x0(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8050FE48_00000A64
    lfs f0, 0x3c(r1)
    lfs f7, 0x2c(r1)
    lfs f2, 0x4c(r1)
    stfs f7, 0x14(r1)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0xbc(r3), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0xc4(r3)
    b lbl_fn_8050FE48_00000A64
lbl_fn_8050FE48_00000A34:
    lwz r3, 0x0(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8050FE48_00000A64
    lfs f0, 0x3c(r1)
    lfs f7, 0x2c(r1)
    lfs f2, 0x4c(r1)
    stfs f7, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0xbc(r3), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc4(r3)
lbl_fn_8050FE48_00000A64:
    lwz r3, 0x8(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8050FE48_00000A74
    b lbl_fn_8050FE48_00000A78
lbl_fn_8050FE48_00000A74:
    li r3, 0x0
lbl_fn_8050FE48_00000A78:
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x34(r25), 0, 0
    psq_st f1, 0xc(r25), 0, 0
    psq_st f2, 0x14(r25), 0, 0
    psq_st f3, 0x1c(r25), 0, 0
    psq_st f4, 0x24(r25), 0, 0
    psq_st f5, 0x2c(r25), 0, 0
lbl_fn_8050FE48_00000AA8:
    addi r27, r27, 0x1
    addi r23, r23, 0x4
lbl_fn_8050FE48_00000AB0:
    lwz r0, 0x344(r24)
    cmpw r27, r0
    blt lbl_fn_8050FE48_000008DC
    addi r11, r1, 0x80
    bl _restgpr_21
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80510080(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_80510080_00000B00
    li r31, 0x0
lbl_fn_80510080_00000B00:
    addi r3, r30, 0x5c
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80510080_00000B14
    li r31, 0x0
lbl_fn_80510080_00000B14:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80510080_00000B34
    li r31, 0x0
lbl_fn_80510080_00000B34:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805100FC(void)
{
    nofralloc
    blr
}

asm void fn_80510100(void)
{
    nofralloc
    lwz r7, 0x8(r4)
    mr r6, r5
    cmpwi r7, 0x0
    beq lbl_fn_80510100_00000B70
    lwz r5, 0x4(r7)
    addi r5, r5, 0x10
    b lbl_fn_80510100_00000B74
lbl_fn_80510100_00000B70:
    li r5, 0x0
lbl_fn_80510100_00000B74:
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctr
}

asm void fn_80510130(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stfd f27, 0x140(r1)
    psq_st f27, 0x148(r1), 0, 0
    stfd f26, 0x130(r1)
    psq_st f26, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    mr r31, r6
    stw r30, 0x128(r1)
    mr r30, r5
    stw r29, 0x124(r1)
    mr r29, r4
    stw r28, 0x120(r1)
    beq lbl_fn_80510130_00000F6C
    lwz r6, 0x8(r4)
    cmpwi r6, 0x0
    bne lbl_fn_80510130_00000BF8
    li r0, 0x0
    b lbl_fn_80510130_00000BFC
lbl_fn_80510130_00000BF8:
    mr r0, r6
lbl_fn_80510130_00000BFC:
    cmpwi r0, 0x0
    beq lbl_fn_80510130_00000D94
    cmpwi r6, 0x0
    bne lbl_fn_80510130_00000C10
    li r6, 0x0
lbl_fn_80510130_00000C10:
    psq_l f1, 0x30(r6), 0, 0
    addi r28, r1, 0xf0
    psq_l f2, 0x38(r6), 0, 0
    addi r5, r1, 0x2c
    psq_l f3, 0x40(r6), 0, 0
    addi r4, r1, 0x50
    psq_l f4, 0x48(r6), 0, 0
    psq_l f5, 0x50(r6), 0, 0
    psq_l f6, 0x58(r6), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    lfs f0, lbl_808877CC
    psq_st f2, 0x8(r28), 0, 0
    lfs f10, 0x11c(r1)
    psq_st f4, 0x18(r28), 0, 0
    lfs f12, 0xfc(r1)
    psq_st f1, 0x0(r28), 0, 0
    lfs f11, 0x10c(r1)
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    lfs f8, 0xa4(r3)
    lfs f7, 0xa8(r3)
    fadds f13, f12, f8
    lfs f9, 0xac(r3)
    fadds f29, f11, f7
    lfs f8, 0xcc(r3)
    fadds f9, f10, f9
    lfs f7, 0xc8(r3)
    lfs f30, 0xd0(r3)
    fsubs f11, f29, f8
    lfs f12, 0xc0(r3)
    fsubs f28, f13, f7
    fsubs f9, f9, f30
    lfs f10, 0xc4(r3)
    lfs f31, 0xbc(r3)
    fmuls f11, f11, f12
    stfs f13, 0x50(r1)
    fmuls f13, f28, f31
    fmuls f9, f9, f10
    stfs f0, 0xfc(r1)
    fadds f27, f11, f8
    fadds f26, f13, f7
    stfs f0, 0x10c(r1)
    fadds f28, f9, f30
    stfs f0, 0x11c(r1)
    lfs f7, 0xb4(r3)
    fmr f2, f28
    lfs f0, 0xb0(r3)
    lfs f8, 0xb8(r3)
    fmuls f7, f7, f12
    fmuls f0, f0, f31
    stfs f2, 0x58(r1)
    fmuls f3, f8, f10
    addi r3, r1, 0x90
    stfs f26, 0x2c(r1)
    fmr f2, f7
    stfs f27, 0x30(r1)
    stfs f29, 0x54(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fmr f1, f0
    stfs f13, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f28, 0x34(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f3, 0x28(r1)
    bl fn_805F9160
    mr r3, r28
    addi r4, r1, 0x90
    addi r5, r1, 0x60
    bl fn_805F89F0
    addi r3, r1, 0x60
    lfs f8, 0x50(r1)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    lfs f7, 0x54(r1)
    psq_st f6, 0x28(r28), 0, 0
    lfs f0, 0x58(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stfs f8, 0xfc(r1)
    stfs f7, 0x10c(r1)
    stfs f0, 0x11c(r1)
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    bne lbl_fn_80510130_00000D8C
    li r3, 0x0
lbl_fn_80510130_00000D8C:
    addi r4, r1, 0xf0
    bl fn_8009EE30
lbl_fn_80510130_00000D94:
    lwz r6, 0x8(r29)
    cmpwi r6, 0x0
    beq lbl_fn_80510130_00000F6C
    bne lbl_fn_80510130_00000DAC
    li r0, 0x0
    b lbl_fn_80510130_00000DB0
lbl_fn_80510130_00000DAC:
    mr r0, r6
lbl_fn_80510130_00000DB0:
    cmpwi r0, 0x0
    beq lbl_fn_80510130_00000F6C
    cmpwi r30, 0x0
    beq lbl_fn_80510130_00000F6C
    lwz r3, lbl_8087EFB4
    cmpwi r6, 0x0
    addi r28, r3, 0x15c
    bne lbl_fn_80510130_00000DD4
    li r6, 0x0
lbl_fn_80510130_00000DD4:
    lfs f0, 0x5c(r6)
    addi r4, r1, 0x38
    lfs f7, 0x4c(r6)
    mr r5, r4
    lfs f8, 0x3c(r6)
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x40(r1)
    lwz r3, 0x8(r29)
    addi r3, r3, 0x30
    bl fn_805F93C0
    addi r4, r1, 0x38
    mr r3, r28
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x40(r1)
    fneg f0, f0
    stfs f0, 0x98(r30)
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80510130_00000F6C
    lfs f7, lbl_808877CC
    mr r3, r30
    lfs f0, lbl_808877D0
    mr r4, r31
    stfs f7, 0xec(r1)
    li r5, 0x0
    stfs f7, 0xe4(r1)
    stfs f7, 0xe0(r1)
    stfs f7, 0xdc(r1)
    stfs f7, 0xd8(r1)
    stfs f7, 0xd0(r1)
    stfs f7, 0xcc(r1)
    stfs f7, 0xc8(r1)
    stfs f7, 0xc4(r1)
    stfs f0, 0xe8(r1)
    stfs f0, 0xd4(r1)
    stfs f0, 0xc0(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80510130_00000E80
    li r0, 0x0
    b lbl_fn_80510130_00000E8C
lbl_fn_80510130_00000E80:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r0, r3, r0
lbl_fn_80510130_00000E8C:
    cmpwi r0, 0x0
    beq lbl_fn_80510130_00000F04
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80510130_00000EB4
    li r3, 0x0
    b lbl_fn_80510130_00000EC0
lbl_fn_80510130_00000EB4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_80510130_00000EC0:
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xc0
    psq_l f2, 0x8(r3), 0, 0
    mr r5, r4
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lwz r3, 0x8(r29)
    addi r3, r3, 0x30
    bl fn_805F89F0
lbl_fn_80510130_00000F04:
    lha r0, 0x4(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80510130_00000F40
    lfs f0, 0xdc(r1)
    addi r3, r1, 0x14
    lfs f7, 0xcc(r1)
    lfs f2, 0xec(r1)
    stfs f7, 0x14(r1)
    lwz r4, 0x0(r29)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xbc(r4), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0xc4(r4)
    b lbl_fn_80510130_00000F6C
lbl_fn_80510130_00000F40:
    lfs f0, 0xdc(r1)
    addi r3, r1, 0x8
    lfs f7, 0xcc(r1)
    lfs f2, 0xec(r1)
    stfs f7, 0x8(r1)
    lwz r4, 0x0(r29)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xbc(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc4(r4)
lbl_fn_80510130_00000F6C:
    lwz r0, 0x194(r1)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    lfd f28, 0x150(r1)
    psq_l f27, 0x148(r1), 0, 0
    lfd f27, 0x140(r1)
    psq_l f26, 0x138(r1), 0, 0
    lfd f26, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80510568(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80510568_00001150
    lwz r31, 0x8(r4)
    cmpwi r31, 0x0
    bne lbl_fn_80510568_00001004
    li r0, 0x0
    b lbl_fn_80510568_00001008
lbl_fn_80510568_00001004:
    mr r0, r31
lbl_fn_80510568_00001008:
    cmpwi r0, 0x0
    beq lbl_fn_80510568_00001150
    lha r0, 0x4(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80510568_000010B8
    cmpwi r31, 0x0
    bne lbl_fn_80510568_00001028
    li r31, 0x0
lbl_fn_80510568_00001028:
    lfs f0, 0x58(r31)
    addi r3, r1, 0x44
    lfs f3, 0x48(r31)
    lfs f4, 0x38(r31)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_805F9940
    lfs f0, 0x54(r31)
    fmr f31, f1
    lfs f3, 0x44(r31)
    addi r3, r1, 0x38
    lfs f4, 0x34(r31)
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_805F9940
    lfs f0, 0x50(r31)
    fmr f30, f1
    lfs f3, 0x40(r31)
    addi r3, r1, 0x2c
    lfs f4, 0x30(r31)
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9940
    stfs f30, 0x60(r1)
    addi r3, r1, 0x5c
    lwz r4, 0x0(r30)
    frsp f2, f31
    stfs f1, 0x5c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xf8(r4), 0, 0
    stfs f31, 0x64(r1)
    stfs f2, 0x100(r4)
    b lbl_fn_80510568_00001150
lbl_fn_80510568_000010B8:
    cmpwi r31, 0x0
    bne lbl_fn_80510568_000010C4
    li r31, 0x0
lbl_fn_80510568_000010C4:
    lfs f0, 0x58(r31)
    addi r3, r1, 0x20
    lfs f3, 0x48(r31)
    lfs f4, 0x38(r31)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x54(r31)
    fmr f30, f1
    lfs f3, 0x44(r31)
    addi r3, r1, 0x14
    lfs f4, 0x34(r31)
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x50(r31)
    fmr f31, f1
    lfs f3, 0x40(r31)
    addi r3, r1, 0x8
    lfs f4, 0x30(r31)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    stfs f31, 0x54(r1)
    addi r3, r1, 0x50
    lwz r4, 0x0(r30)
    frsp f2, f30
    stfs f1, 0x50(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xf8(r4), 0, 0
    stfs f30, 0x58(r1)
    stfs f2, 0x100(r4)
lbl_fn_80510568_00001150:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80510724(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r4
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    mr r29, r5
    lwz r6, 0x8(r4)
    cmpwi cr1, r6, 0x0
    beq cr1, lbl_fn_80510724_000013F8
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80510724_000013F8
    bne cr1, lbl_fn_80510724_000011CC
    li r0, 0x0
    b lbl_fn_80510724_000011D4
lbl_fn_80510724_000011CC:
    lwz r3, 0x4(r6)
    addi r0, r3, 0x10
lbl_fn_80510724_000011D4:
    cmpwi r0, 0x0
    beq lbl_fn_80510724_000013F8
    cmpwi r6, 0x0
    bne lbl_fn_80510724_000011EC
    li r30, 0x0
    b lbl_fn_80510724_000011F4
lbl_fn_80510724_000011EC:
    lwz r3, 0x4(r6)
    addi r30, r3, 0x10
lbl_fn_80510724_000011F4:
    mr r3, r30
    mr r4, r29
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80510724_00001214
    li r0, 0x0
    b lbl_fn_80510724_00001220
lbl_fn_80510724_00001214:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r0, r3, r0
lbl_fn_80510724_00001220:
    cmpwi r0, 0x0
    beq lbl_fn_80510724_000013F8
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    bne lbl_fn_80510724_0000123C
    li r30, 0x0
    b lbl_fn_80510724_00001244
lbl_fn_80510724_0000123C:
    lwz r3, 0x4(r3)
    addi r30, r3, 0x10
lbl_fn_80510724_00001244:
    mr r3, r30
    mr r4, r29
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80510724_00001264
    li r3, 0x0
    b lbl_fn_80510724_00001270
lbl_fn_80510724_00001264:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_80510724_00001270:
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0xa8
    psq_l f2, 0x8(r3), 0, 0
    mr r4, r30
    psq_l f3, 0x10(r3), 0, 0
    mr r5, r30
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    lwz r3, 0x8(r31)
    addi r3, r3, 0x30
    bl fn_805F89F0
    lfs f0, lbl_808877CC
    addi r3, r1, 0x2c
    lfs f7, 0xd0(r1)
    lfs f8, 0xc0(r1)
    lfs f9, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xc4(r1)
    stfs f0, 0xd4(r1)
    stfs f9, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f7, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0xcc(r1)
    fmr f30, f1
    lfs f7, 0xbc(r1)
    addi r3, r1, 0x20
    lfs f8, 0xac(r1)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0xc8(r1)
    fmr f31, f1
    lfs f7, 0xb8(r1)
    addi r3, r1, 0x14
    lfs f8, 0xa8(r1)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    frsp f8, f30
    lfs f9, lbl_808877D0
    frsp f7, f31
    stfs f1, 0x38(r1)
    frsp f0, f1
    addi r3, r1, 0x48
    fdivs f3, f9, f8
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f3, 0x10(r1)
    fdivs f2, f9, f7
    stfs f2, 0xc(r1)
    fdivs f1, f9, f0
    stfs f1, 0x8(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0x48
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lha r0, 0x4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80510724_000013DC
    lwz r3, 0x0(r31)
    psq_st f1, 0xc8(r3), 0, 0
    psq_st f2, 0xd0(r3), 0, 0
    psq_st f3, 0xd8(r3), 0, 0
    psq_st f4, 0xe0(r3), 0, 0
    psq_st f5, 0xe8(r3), 0, 0
    psq_st f6, 0xf0(r3), 0, 0
    b lbl_fn_80510724_000013F8
lbl_fn_80510724_000013DC:
    lwz r3, 0x0(r31)
    psq_st f1, 0xc8(r3), 0, 0
    psq_st f2, 0xd0(r3), 0, 0
    psq_st f3, 0xd8(r3), 0, 0
    psq_st f4, 0xe0(r3), 0, 0
    psq_st f5, 0xe8(r3), 0, 0
    psq_st f6, 0xf0(r3), 0, 0
lbl_fn_80510724_000013F8:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_805109D0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    mr r31, r6
    stw r30, 0x128(r1)
    mr r30, r5
    stw r29, 0x124(r1)
    mr r29, r4
    beq lbl_fn_805109D0_000016EC
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    bne lbl_fn_805109D0_00001464
    li r0, 0x0
    b lbl_fn_805109D0_00001468
lbl_fn_805109D0_00001464:
    mr r0, r3
lbl_fn_805109D0_00001468:
    cmpwi r0, 0x0
    bne lbl_fn_805109D0_00001474
    b lbl_fn_805109D0_000016EC
lbl_fn_805109D0_00001474:
    cmpwi r5, 0x0
    li r6, 0x1
    beq lbl_fn_805109D0_0000148C
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_805109D0_00001490
lbl_fn_805109D0_0000148C:
    li r6, 0x0
lbl_fn_805109D0_00001490:
    cmpwi r6, 0x0
    beq lbl_fn_805109D0_000016D4
    lwz r0, 0x8(r5)
    lfs f0, lbl_808877D0
    cmpwi r0, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x1c(r1)
    beq lbl_fn_805109D0_000016EC
    lfs f0, 0x50(r5)
    mr r3, r30
    fadds f0, f0, f1
    stfs f0, 0x50(r5)
    bl fn_800A08D4
    lfs f0, 0x50(r30)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_805109D0_000014E4
    mr r3, r30
    bl fn_800A08D4
    stfs f1, 0x50(r30)
lbl_fn_805109D0_000014E4:
    lfs f7, 0x50(r30)
    lfs f0, lbl_808877CC
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_805109D0_000014FC
    stfs f0, 0x50(r30)
lbl_fn_805109D0_000014FC:
    lwz r5, 0xc(r30)
    mr r3, r30
    lfs f1, 0x50(r30)
    addi r4, r30, 0x10
    addi r6, r30, 0x3c
    bl fn_800A0548
    rlwinm r0, r31, 0, 30, 30
    lfs f7, lbl_808877CC
    lfs f0, lbl_808877D0
    cmplwi r0, 0x2
    stfs f7, 0x11c(r1)
    stfs f7, 0x114(r1)
    stfs f7, 0x110(r1)
    stfs f7, 0x10c(r1)
    stfs f7, 0x108(r1)
    stfs f7, 0x100(r1)
    stfs f7, 0xfc(r1)
    stfs f7, 0xf8(r1)
    stfs f7, 0xf4(r1)
    stfs f0, 0x118(r1)
    stfs f0, 0x104(r1)
    stfs f0, 0xf0(r1)
    bne lbl_fn_805109D0_000015A8
    lfs f0, 0x2c(r30)
    fcmpu cr0, f7, f0
    beq lbl_fn_805109D0_000015A8
    addi r3, r1, 0xc0
    addi r4, r30, 0x20
    bl fn_805F9190
    addi r4, r1, 0xc0
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
lbl_fn_805109D0_000015A8:
    rlwinm r0, r31, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_805109D0_00001610
    lfs f1, 0x30(r30)
    addi r3, r1, 0x60
    lfs f2, 0x34(r30)
    lfs f3, 0x38(r30)
    bl fn_805F9160
    addi r3, r1, 0xf0
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
lbl_fn_805109D0_00001610:
    clrlwi r0, r31, 31
    cmplwi r0, 0x1
    bne lbl_fn_805109D0_00001634
    lfs f0, 0x14(r30)
    stfs f0, 0xfc(r1)
    lfs f0, 0x18(r30)
    stfs f0, 0x10c(r1)
    lfs f0, 0x1c(r30)
    stfs f0, 0x11c(r1)
lbl_fn_805109D0_00001634:
    addi r3, r29, 0xc
    addi r4, r1, 0xf0
    addi r5, r1, 0x90
    bl fn_805F89F0
    addi r4, r1, 0x90
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    bne lbl_fn_805109D0_0000168C
    li r3, 0x0
lbl_fn_805109D0_0000168C:
    addi r4, r1, 0xf0
    bl fn_8009EE30
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805109D0_000016EC
    lha r0, 0x4(r29)
    cmpwi r0, 0x1
    bne lbl_fn_805109D0_000016C0
    lfs f2, 0x38(r30)
    psq_l f1, 0x30(r30), 0, 0
    psq_st f1, 0xf8(r3), 0, 0
    stfs f2, 0x100(r3)
    b lbl_fn_805109D0_000016EC
lbl_fn_805109D0_000016C0:
    lfs f2, 0x38(r30)
    psq_l f1, 0x30(r30), 0, 0
    psq_st f1, 0xf8(r3), 0, 0
    stfs f2, 0x100(r3)
    b lbl_fn_805109D0_000016EC
lbl_fn_805109D0_000016D4:
    cmpwi r3, 0x0
    beq lbl_fn_805109D0_000016E0
    b lbl_fn_805109D0_000016E4
lbl_fn_805109D0_000016E0:
    li r3, 0x0
lbl_fn_805109D0_000016E4:
    addi r4, r4, 0xc
    bl fn_8009EE30
lbl_fn_805109D0_000016EC:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80510CB4(void)
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
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80510CB4_0000179C
    lis r31, lbl_8075B2B8@ha
    li r29, 0x0
    addi r31, r31, lbl_8075B2B8@l
    li r30, 0x0
    b lbl_fn_80510CB4_00001790
lbl_fn_80510CB4_00001748:
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r0, 0x50(r28)
    addi r5, r31, 0x3
    lwz r12, 0x58(r12)
    add r4, r0, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r0, 0x50(r28)
    addi r5, r31, 0x3
    lwz r12, 0x54(r12)
    add r4, r0, r30
    mtctr r12
    bctrl
    addi r30, r30, 0x40
    addi r29, r29, 0x1
lbl_fn_80510CB4_00001790:
    lwz r0, 0x4c(r28)
    cmpw r29, r0
    blt lbl_fn_80510CB4_00001748
lbl_fn_80510CB4_0000179C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80510D68(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80510D68_000018D8
    lwz r31, lbl_8087EF70
    li r4, 0x0
    lwz r30, 0x80(r3)
    li r5, 0x1a
    mr r3, r31
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80510D68_0000181C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80510D68_00001850
lbl_fn_80510D68_0000181C:
    lwz r3, 0x80(r27)
    subic. r0, r3, 0x1
    stw r0, 0x80(r27)
    bge lbl_fn_80510D68_000018B4
    cmpwi r28, 0x0
    beq lbl_fn_80510D68_00001844
    lwz r3, 0x84(r27)
    subi r0, r3, 0x1
    stw r0, 0x80(r27)
    b lbl_fn_80510D68_000018B4
lbl_fn_80510D68_00001844:
    li r0, 0x0
    stw r0, 0x80(r27)
    b lbl_fn_80510D68_000018B4
lbl_fn_80510D68_00001850:
    mr r3, r31
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80510D68_00001880
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80510D68_000018B4
lbl_fn_80510D68_00001880:
    lwz r3, 0x80(r27)
    lwz r4, 0x84(r27)
    addi r0, r3, 0x1
    stw r0, 0x80(r27)
    cmpw r0, r4
    blt lbl_fn_80510D68_000018B4
    cmpwi r28, 0x0
    beq lbl_fn_80510D68_000018AC
    li r0, 0x0
    stw r0, 0x80(r27)
    b lbl_fn_80510D68_000018B4
lbl_fn_80510D68_000018AC:
    subi r0, r4, 0x1
    stw r0, 0x80(r27)
lbl_fn_80510D68_000018B4:
    lwz r0, 0x80(r27)
    cmpw r0, r30
    beq lbl_fn_80510D68_000018D8
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80510D68_000018D8:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80510E98(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r28, r4
    mr r29, r5
    mr r27, r3
    li r4, 0x0
    li r5, 0x17
    lwz r31, lbl_8087EF70
    lwz r30, 0x80(r3)
    mr r3, r31
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80510E98_00001940
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80510E98_00001974
lbl_fn_80510E98_00001940:
    lwz r3, 0x80(r27)
    subic. r0, r3, 0x1
    stw r0, 0x80(r27)
    bge lbl_fn_80510E98_000019D8
    cmpwi r28, 0x0
    beq lbl_fn_80510E98_00001968
    lwz r3, 0x84(r27)
    subi r0, r3, 0x1
    stw r0, 0x80(r27)
    b lbl_fn_80510E98_000019D8
lbl_fn_80510E98_00001968:
    li r0, 0x0
    stw r0, 0x80(r27)
    b lbl_fn_80510E98_000019D8
lbl_fn_80510E98_00001974:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80510E98_000019A4
    mr r3, r31
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80510E98_000019D8
lbl_fn_80510E98_000019A4:
    lwz r3, 0x80(r27)
    lwz r4, 0x84(r27)
    addi r0, r3, 0x1
    stw r0, 0x80(r27)
    cmpw r0, r4
    blt lbl_fn_80510E98_000019D8
    cmpwi r28, 0x0
    beq lbl_fn_80510E98_000019D0
    li r0, 0x0
    stw r0, 0x80(r27)
    b lbl_fn_80510E98_000019D8
lbl_fn_80510E98_000019D0:
    subi r0, r4, 0x1
    stw r0, 0x80(r27)
lbl_fn_80510E98_000019D8:
    lwz r0, 0x80(r27)
    cmpw r0, r30
    beq lbl_fn_80510E98_000019FC
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80510E98_000019FC:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
