#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8004ED34(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_80095D44(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DC288(void);
extern void fn_8011F8F4(void);
extern void fn_8011FC10(void);
extern void fn_80144710(void);
extern void fn_80148B38(void);
extern void fn_802180A8(void);
extern void fn_80219558(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_802378C4(void);
extern void fn_80239DAC(void);
extern void fn_8023A02C(void);
extern void fn_8023A8B4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803EBE74(void);
extern void fn_803EC0F8(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_803F10AC(void);
extern void fn_803F1DA4(void);
extern void fn_803F1E18(void);
extern void fn_803F3334(void);
extern void fn_803F3360(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80752CC0[];
extern u8 lbl_80752D90[];
extern u8 lbl_80752DB8[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80777668[];
extern u8 lbl_8078D8B0[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF40;
extern u32 lbl_8087DF44;
extern u32 lbl_8087DF48;
extern u32 lbl_8087DF4C;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808863E0;
extern u32 lbl_80886410;
extern u32 lbl_80886414;
extern u32 lbl_80886418;
extern u32 lbl_8088641C;
extern u32 lbl_80886420;

/* Function declarations */
void fn_804128A8(void);
void fn_80412968(void);
void fn_80412AF4(void);
void fn_80412AFC(void);
void fn_80412B80(void);
void fn_80412D94(void);
void fn_80412DA8(void);
void fn_80412E5C(void);
void fn_80412E94(void);
void fn_80412EA0(void);
void fn_80412F08(void);
void fn_80412F18(void);
void fn_80412F28(void);
void fn_80412FFC(void);
void fn_804130B8(void);
void fn_804131A4(void);
void fn_804137C4(void);
void fn_804137F4(void);
void fn_804139D8(void);
void fn_80413AAC(void);
void fn_80413B1C(void);
void fn_80413BD4(void);

asm void fn_804128A8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_808863E0
    cmplwi r4, 0x2
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    ble lbl_fn_804128A8_00000054
    subi r0, r4, 0x3
    cmplwi r0, 0x2
    ble lbl_fn_804128A8_00000074
    cmpwi r4, 0x6
    beq lbl_fn_804128A8_00000094
    b lbl_fn_804128A8_000000B0
lbl_fn_804128A8_00000054:
    li r0, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_804128A8_000000B0
lbl_fn_804128A8_00000074:
    li r0, 0x5
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_804128A8_000000B0
lbl_fn_804128A8_00000094:
    li r0, 0x6
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_804128A8_000000B0:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80412968(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80752CC0@ha
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r5, r5, lbl_80752CC0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r0, 0x698(r3)
    lwz r0, 0x4c(r3)
    b lbl_fn_80412968_00000120
lbl_fn_80412968_000000F8:
    cmpw r0, r3
    bne lbl_fn_80412968_00000118
    lis r3, lbl_80752CC0@ha
    slwi r0, r4, 3
    addi r3, r3, lbl_80752CC0@l
    add r3, r3, r0
    lwz r4, 0x4(r3)
    b lbl_fn_80412968_00000130
lbl_fn_80412968_00000118:
    addi r5, r5, 0x8
    addi r4, r4, 0x1
lbl_fn_80412968_00000120:
    lwz r3, 0x0(r5)
    cmpwi r3, 0x0
    bge lbl_fn_80412968_000000F8
    li r4, -0x1
lbl_fn_80412968_00000130:
    cmpwi r4, 0x0
    blt lbl_fn_80412968_00000230
    lwz r3, lbl_8087F430
    bl fn_80370A78
    mr r30, r3
    bl fn_80219558
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_fn_80412968_00000194
    lwz r3, lbl_8087F408
    mr r4, r30
    bl fn_8011FC10
    cmpwi r3, 0x0
    stw r3, 0x698(r29)
    bne lbl_fn_80412968_00000178
    li r0, 0x0
    stw r0, 0x694(r29)
    b lbl_fn_80412968_00000230
lbl_fn_80412968_00000178:
    li r0, 0x1
    stw r0, 0x694(r29)
    li r4, 0x6f
    li r5, 0x1
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    b lbl_fn_80412968_00000230
lbl_fn_80412968_00000194:
    lwz r3, lbl_8087F8A0
    mr r4, r30
    bl fn_8011F8F4
    cmpwi r3, 0x0
    stw r3, 0x698(r29)
    beq lbl_fn_80412968_00000228
    cmpwi r31, 0x2
    li r0, 0x2
    stw r0, 0x694(r29)
    beq lbl_fn_80412968_000001D8
    cmpwi r31, 0x6
    beq lbl_fn_80412968_000001EC
    cmpwi r31, 0x4
    beq lbl_fn_80412968_00000200
    cmpwi r31, 0xb
    beq lbl_fn_80412968_00000214
    b lbl_fn_80412968_00000230
lbl_fn_80412968_000001D8:
    lwz r3, lbl_8087F430
    li r4, 0x1e
    li r5, 0x0
    bl fn_80370AE4
    b lbl_fn_80412968_00000230
lbl_fn_80412968_000001EC:
    lwz r3, lbl_8087F430
    li r4, 0x1f
    li r5, 0x0
    bl fn_80370AE4
    b lbl_fn_80412968_00000230
lbl_fn_80412968_00000200:
    lwz r3, lbl_8087F430
    li r4, 0x20
    li r5, 0x0
    bl fn_80370AE4
    b lbl_fn_80412968_00000230
lbl_fn_80412968_00000214:
    lwz r3, lbl_8087F430
    li r4, 0x21
    li r5, 0x0
    bl fn_80370AE4
    b lbl_fn_80412968_00000230
lbl_fn_80412968_00000228:
    li r0, 0x0
    stw r0, 0x694(r29)
lbl_fn_80412968_00000230:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80412AF4(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_80412AFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80412AFC_000002B8
    lis r5, lbl_80752DB8@ha
    li r3, 0x2348
    addi r5, r5, lbl_80752DB8@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80412AFC_000002BC
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80412B80
    b lbl_fn_80412AFC_000002BC
lbl_fn_80412AFC_000002B8:
    li r3, 0x0
lbl_fn_80412AFC_000002BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80412B80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_803EC568
    lis r3, lbl_8078D8B0@ha
    li r30, 0x0
    addi r3, r3, lbl_8078D8B0@l
    lis r4, fn_80412E94@ha
    lis r5, fn_800971D4@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0xfc
    addi r4, r4, fn_80412E94@l
    stw r30, 0xf4(r31)
    addi r5, r5, fn_800971D4@l
    li r6, 0x3d0
    li r7, 0x8
    stw r30, 0xf8(r31)
    bl fn_806958E0
    addi r5, r31, 0x1fb0
    addi r3, r31, 0x203c
    lfs f1, lbl_80886410
    cmplw r5, r3
    lfs f0, lbl_80886414
    li r4, -0x1
    stw r4, 0x1f9c(r31)
    stfs f1, 0x1fa0(r31)
    stb r30, 0x1fa4(r31)
    stb r30, 0x1fa5(r31)
    stfs f1, 0x1fa8(r31)
    stfs f0, 0x1fac(r31)
    bge lbl_fn_80412B80_00000398
    addi r3, r3, 0x13
    li r0, 0x14
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80412B80_00000398
lbl_fn_80412B80_00000378:
    stw r4, 0x0(r5)
    stfs f1, 0x4(r5)
    stb r30, 0x8(r5)
    stb r30, 0x9(r5)
    stfs f1, 0xc(r5)
    stfs f0, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_80412B80_00000378
lbl_fn_80412B80_00000398:
    lis r4, fn_80412D94@ha
    lis r5, fn_80412DA8@ha
    addi r3, r31, 0x203c
    li r6, 0xc
    addi r4, r4, fn_80412D94@l
    addi r5, r5, fn_80412DA8@l
    li r7, 0x8
    bl fn_806958E0
    lis r4, fn_80412E5C@ha
    lis r5, fn_80412EA0@ha
    addi r3, r31, 0x209c
    li r6, 0x10
    addi r4, r4, fn_80412E5C@l
    addi r5, r5, fn_80412EA0@l
    li r7, 0x8
    bl fn_806958E0
    addi r6, r31, 0x2124
    addi r3, r31, 0x215c
    cmplw r6, r3
    li r5, -0x1
    li r4, 0x0
    stw r5, 0x211c(r31)
    stw r4, 0x2120(r31)
    bge lbl_fn_80412B80_0000041C
    addi r0, r3, 0x7
    subf r0, r6, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_80412B80_0000041C
lbl_fn_80412B80_0000040C:
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    addi r6, r6, 0x8
    bdnz lbl_fn_80412B80_0000040C
lbl_fn_80412B80_0000041C:
    addi r5, r31, 0x2184
    addi r3, r31, 0x2280
    cmplw r5, r3
    li r4, 0x0
    stw r4, 0x215c(r31)
    stw r4, 0x2160(r31)
    bge lbl_fn_80412B80_0000045C
    addi r3, r3, 0x23
    li r0, 0x24
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_80412B80_0000045C
lbl_fn_80412B80_00000450:
    stw r4, 0x0(r5)
    addi r5, r5, 0x24
    bdnz lbl_fn_80412B80_00000450
lbl_fn_80412B80_0000045C:
    li r0, -0x1
    li r30, 0x0
    lis r4, fn_80412F08@ha
    lis r5, fn_803F1DA4@ha
    stw r0, 0x2280(r31)
    addi r3, r31, 0x22c4
    addi r4, r4, fn_80412F08@l
    addi r5, r5, fn_803F1DA4@l
    stb r30, 0x2284(r31)
    li r6, 0x8
    li r7, 0x8
    bl fn_806958E0
    lis r4, fn_80412F18@ha
    lis r5, fn_803F1E18@ha
    addi r3, r31, 0x2304
    li r6, 0x8
    addi r4, r4, fn_80412F18@l
    addi r5, r5, fn_803F1E18@l
    li r7, 0x8
    bl fn_806958E0
    stw r30, 0x54(r31)
    addi r3, r31, 0x1f7c
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r31, 0x22a4
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80412D94(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80412DA8(void)
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
    beq lbl_fn_80412DA8_00000594
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80412DA8_00000554
    beq lbl_fn_80412DA8_0000054C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80412DA8_0000054C:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_80412DA8_00000554:
    lwz r31, 0x8(r29)
    cmpwi r31, 0x0
    beq lbl_fn_80412DA8_00000584
    beq lbl_fn_80412DA8_0000057C
    beq lbl_fn_80412DA8_00000574
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80412DA8_00000574:
    mr r3, r31
    bl dtor_80084684
lbl_fn_80412DA8_0000057C:
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_fn_80412DA8_00000584:
    cmpwi r30, 0x0
    ble lbl_fn_80412DA8_00000594
    mr r3, r29
    bl dtor_80084684
lbl_fn_80412DA8_00000594:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80412E5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802377B8
    li r0, 0x0
    stw r0, 0xc(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80412E94(void)
{
    nofralloc
    li r4, 0x8
    li r5, 0x20
    b fn_80096E94
}

asm void fn_80412EA0(void)
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
    beq lbl_fn_80412EA0_00000644
    beq lbl_fn_80412EA0_00000634
    bl fn_8023781C
    addic. r3, r30, 0x4
    beq lbl_fn_80412EA0_00000634
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80412EA0_00000634:
    cmpwi r31, 0x0
    ble lbl_fn_80412EA0_00000644
    mr r3, r30
    bl dtor_80084684
lbl_fn_80412EA0_00000644:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80412F08(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_80412F18(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_80412F28(void)
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
    beq lbl_fn_80412F28_00000738
    lis r4, fn_803F1E18@ha
    li r5, 0x8
    addi r4, r4, fn_803F1E18@l
    li r6, 0x8
    addi r3, r3, 0x2304
    bl fn_806959D8
    lis r4, fn_803F1DA4@ha
    addi r3, r30, 0x22c4
    addi r4, r4, fn_803F1DA4@l
    li r5, 0x8
    li r6, 0x8
    bl fn_806959D8
    lis r4, fn_80412EA0@ha
    addi r3, r30, 0x209c
    addi r4, r4, fn_80412EA0@l
    li r5, 0x10
    li r6, 0x8
    bl fn_806959D8
    lis r4, fn_80412DA8@ha
    addi r3, r30, 0x203c
    addi r4, r4, fn_80412DA8@l
    li r5, 0xc
    li r6, 0x8
    bl fn_806959D8
    lis r4, fn_800971D4@ha
    addi r3, r30, 0xfc
    addi r4, r4, fn_800971D4@l
    li r5, 0x3d0
    li r6, 0x8
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_80412F28_00000738
    mr r3, r30
    bl dtor_80084684
lbl_fn_80412F28_00000738:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80412FFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_80412FFC_000007F8
    mr r31, r27
    mr r29, r27
    addi r30, r27, 0xfc
    li r28, 0x0
lbl_fn_80412FFC_00000784:
    lwz r0, 0x1f7c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80412FFC_000007D8
    mr r3, r27
    mr r4, r30
    bl fn_803EDB18
    addi r3, r27, 0x2284
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80412FFC_000007D8
    lwz r0, 0x1ac(r29)
    cmpwi r0, 0x0
    bge lbl_fn_80412FFC_000007D8
    mr r3, r30
    addi r4, r27, 0x2284
    li r5, 0x0
    bl fn_80092814
    mr r4, r3
    mr r3, r30
    li r5, -0x1
    bl fn_80095D44
lbl_fn_80412FFC_000007D8:
    addi r28, r28, 0x1
    addi r30, r30, 0x3d0
    cmpwi r28, 0x8
    addi r29, r29, 0x3d0
    addi r31, r31, 0x4
    blt lbl_fn_80412FFC_00000784
    li r3, 0x1
    b lbl_fn_80412FFC_000007FC
lbl_fn_80412FFC_000007F8:
    li r3, 0x0
lbl_fn_80412FFC_000007FC:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804130B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886410
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804130B8_00000860
    stw r0, 0x8(r1)
    b lbl_fn_804130B8_00000874
lbl_fn_804130B8_00000860:
    lwz r3, 0x2280(r3)
    cmpwi r3, 0x0
    blt lbl_fn_804130B8_00000870
    mr r0, r3
lbl_fn_804130B8_00000870:
    stw r0, 0x8(r1)
lbl_fn_804130B8_00000874:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804130B8_000008E0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_804130B8_000008E0:
    mr r3, r31
    bl fn_804137F4
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804131A4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x120
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    bl _savegpr_23
    lwz r0, 0x215c(r3)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_804131A4_00000978
    lwz r5, 0x54(r3)
    li r0, 0x0
    stw r0, 0x215c(r3)
    addi r4, r1, 0x80
    slwi r5, r5, 3
    lfs f0, lbl_80886410
    add r5, r3, r5
    lwz r5, 0x211c(r5)
    stw r5, 0x80(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_804131A4_00000978:
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r6, 0x54(r25)
    mr r27, r3
    lwz r7, 0xf4(r25)
    mulli r5, r6, 0x14
    slwi r0, r6, 4
    cmpw r6, r7
    add r3, r25, r0
    mulli r4, r6, 0xc
    slwi r0, r6, 3
    add r28, r25, r5
    addi r26, r3, 0x209c
    add r29, r25, r4
    add r30, r25, r0
    beq lbl_fn_804131A4_00000C0C
    slwi r0, r6, 2
    slwi r4, r7, 4
    add r3, r25, r0
    lwz r0, 0x1f7c(r3)
    mulli r3, r7, 0xc
    add r24, r25, r4
    cmpwi r0, 0x0
    add r31, r25, r3
    beq lbl_fn_804131A4_00000A2C
    mulli r0, r6, 0x3d0
    lwz r5, 0x1f9c(r28)
    lfs f1, 0x1fa0(r28)
    li r4, 0x0
    lbz r6, 0x1fa4(r28)
    li r8, 0x1
    add r3, r25, r0
    lbz r7, 0x1fa5(r28)
    lfs f2, lbl_80886418
    addi r3, r3, 0xfc
    bl fn_80097C08
    lwz r0, 0x54(r25)
    lfs f0, 0x1fa8(r28)
    mulli r0, r0, 0x3d0
    add r3, r25, r0
    stfs f0, 0x330(r3)
    b lbl_fn_804131A4_00000A38
lbl_fn_804131A4_00000A2C:
    addi r3, r25, 0xb0
    li r4, 0x0
    bl fn_803F10AC
lbl_fn_804131A4_00000A38:
    lwz r3, 0x203c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804131A4_00000A50
    lwz r0, 0x8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x8(r3)
lbl_fn_804131A4_00000A50:
    lwz r3, 0x203c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804131A4_00000A68
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
lbl_fn_804131A4_00000A68:
    lwz r0, 0x20a8(r24)
    mr r4, r25
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    clrlwi r0, r0, 31
    xori r6, r0, 0x1
    bl fn_80239DAC
    lwz r0, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_fn_804131A4_00000BCC
    mr r3, r26
    bl fn_802378C4
    cmpwi r3, 0x0
    bgt lbl_fn_804131A4_00000AAC
    lwz r3, lbl_8087F3C0
    li r0, 0x1
    stw r0, 0xb8(r3)
lbl_fn_804131A4_00000AAC:
    mr r3, r25
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, 0x54(r25)
    slwi r0, r4, 2
    add r3, r25, r0
    lwz r0, 0x1f7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804131A4_00000B40
    lfs f0, lbl_80886410
    mulli r4, r4, 0x3d0
    lfs f1, lbl_80886414
    li r11, -0x1
    stfs f0, 0x2c(r1)
    li r0, 0x1
    lwz r3, lbl_8087F3C0
    stfs f0, 0x30(r1)
    add r5, r25, r4
    mr r4, r26
    addi r7, r1, 0x20
    stfs f0, 0x34(r1)
    addi r5, r5, 0xfc
    addi r8, r1, 0x2c
    addi r9, r1, 0x38
    stfs f0, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    b lbl_fn_804131A4_00000B8C
lbl_fn_804131A4_00000B40:
    lfs f1, 0x90(r25)
    li r11, -0x1
    lfs f0, lbl_80886414
    li r0, 0x1
    stfs f0, 0x10(r1)
    mr r4, r26
    lwz r3, lbl_8087F3C0
    addi r7, r25, 0x6c
    stfs f0, 0x14(r1)
    addi r8, r25, 0x78
    addi r9, r1, 0x10
    li r5, 0x0
    stfs f0, 0x18(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x1c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_804131A4_00000B8C:
    lwz r0, 0xc(r26)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_804131A4_00000BB0
    lwz r3, lbl_8087F3C0
    mr r4, r25
    li r5, 0x0
    li r6, 0x8
    bl fn_8023A02C
lbl_fn_804131A4_00000BB0:
    mr r3, r26
    bl fn_802378C4
    cmpwi r3, 0x0
    bgt lbl_fn_804131A4_00000BCC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_804131A4_00000BCC:
    lwz r3, 0x2044(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804131A4_00000BE4
    lwz r0, 0x8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x8(r3)
lbl_fn_804131A4_00000BE4:
    lwz r3, 0x2044(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804131A4_00000BFC
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
lbl_fn_804131A4_00000BFC:
    lwz r3, 0x54(r25)
    li r0, 0x0
    stw r3, 0xf4(r25)
    stw r0, 0xf8(r25)
lbl_fn_804131A4_00000C0C:
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804131A4_00000C48
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r25
    bl fn_803ED5D0
lbl_fn_804131A4_00000C48:
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804131A4_00000C88
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r25
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_804131A4_00000C88:
    mr r3, r25
    bl fn_804137F4
    mr r3, r25
    bl fn_804139D8
    cmpwi r27, 0x0
    beq lbl_fn_804131A4_00000D7C
    lwz r0, 0x211c(r30)
    cmpwi r0, 0x0
    blt lbl_fn_804131A4_00000D7C
    lwz r0, 0x2044(r29)
    cmpwi r0, 0x0
    bne lbl_fn_804131A4_00000D7C
    lwz r24, 0x2120(r30)
    cmpwi r24, 0x0
    ble lbl_fn_804131A4_00000D40
    mr r3, r27
    li r4, 0x0
    bl fn_80097D7C
    xoris r3, r24, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80752D90@ha
    stw r3, 0xf4(r1)
    lfd f3, lbl_80752D90@l(r4)
    stw r0, 0xf0(r1)
    lfd f0, 0xf0(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804131A4_00000D28
    stw r3, 0xf4(r1)
    lfs f4, 0x234(r27)
    stw r0, 0xf0(r1)
    lfd f0, 0xf0(r1)
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_804131A4_00000D7C
    li r0, 0x1
    stw r0, 0x215c(r25)
    b lbl_fn_804131A4_00000D7C
lbl_fn_804131A4_00000D28:
    lwz r0, 0xf8(r25)
    cmpw r0, r24
    blt lbl_fn_804131A4_00000D7C
    li r0, 0x1
    stw r0, 0x215c(r25)
    b lbl_fn_804131A4_00000D7C
lbl_fn_804131A4_00000D40:
    mr r3, r27
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80886410
    fcmpo cr0, f1, f0
    ble lbl_fn_804131A4_00000D7C
    lfs f31, 0x234(r27)
    mr r3, r27
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_804131A4_00000D7C
    li r0, 0x1
    stw r0, 0x215c(r25)
lbl_fn_804131A4_00000D7C:
    cmpwi r27, 0x0
    beq lbl_fn_804131A4_00000EF0
    lwz r0, lbl_8087F8A0
    cmpwi r0, 0x0
    beq lbl_fn_804131A4_00000EF0
    lwz r0, 0x203c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804131A4_00000EF0
    lwz r0, 0x54(r25)
    slwi r0, r0, 2
    add r3, r25, r0
    lwz r0, 0x22a4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804131A4_00000EF0
    lfs f31, 0x234(r27)
    mr r3, r27
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    bge lbl_fn_804131A4_00000EF0
    lwz r3, lbl_8087F8A0
    addi r24, r1, 0x48
    lfs f31, lbl_8088641C
    addi r27, r1, 0x68
    lwz r23, 0x48(r3)
    addi r28, r1, 0x74
    addi r30, r1, 0xa4
    addi r31, r1, 0x54
    li r26, 0x0
    b lbl_fn_804131A4_00000EE8
lbl_fn_804131A4_00000DF4:
    lfs f2, 0x530(r23)
    mr r5, r27
    psq_l f1, 0x528(r23), 0, 0
    mr r6, r28
    psq_st f1, 0x0(r27), 0, 0
    addi r4, r1, 0xa0
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    psq_st f1, 0x0(r28), 0, 0
    li r8, 0x0
    lfs f3, 0x6c(r1)
    li r9, 0x0
    lfs f0, 0x78(r1)
    fadds f3, f3, f31
    stfs f2, 0x50(r1)
    fsubs f0, f0, f31
    stfs f2, 0x70(r1)
    frsp f2, f2
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x7c(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x78(r1)
    stw r26, 0xd4(r1)
    stw r26, 0xd8(r1)
    stw r26, 0xdc(r1)
    stw r26, 0xe0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_804131A4_00000EE4
    lwz r3, 0xd8(r1)
    lwz r0, 0x203c(r29)
    cmplw r3, r0
    bne lbl_fn_804131A4_00000EE4
    lfs f2, 0xac(r1)
    mr r3, r23
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x528(r23), 0, 0
    stfs f2, 0x530(r23)
    bl fn_80144710
    stw r26, 0x54(r1)
    addi r3, r23, 0xb0
    addi r4, r1, 0x54
    bl fn_8000D430
    cmpwi r31, 0x0
    beq lbl_fn_804131A4_00000ED8
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804131A4_00000ED8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_804131A4_00000ED4
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804131A4_00000ED4:
    stw r26, 0x54(r1)
lbl_fn_804131A4_00000ED8:
    lfs f1, lbl_80886410
    mr r3, r23
    bl fn_80148B38
lbl_fn_804131A4_00000EE4:
    lwz r23, 0x14ac(r23)
lbl_fn_804131A4_00000EE8:
    cmpwi r23, 0x0
    bne lbl_fn_804131A4_00000DF4
lbl_fn_804131A4_00000EF0:
    lwz r3, 0xf8(r25)
    addi r0, r3, 0x1
    stw r0, 0xf8(r25)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    addi r11, r1, 0x120
    bl _restgpr_23
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_804137C4(void)
{
    nofralloc
    lwz r5, 0x54(r3)
    slwi r0, r5, 2
    add r4, r3, r0
    lwz r0, 0x1f7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804137C4_00000F44
    mulli r0, r5, 0x3d0
    add r3, r3, r0
    addi r3, r3, 0xfc
    blr
lbl_fn_804137C4_00000F44:
    li r3, 0x0
    blr
}

asm void fn_804137F4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r0, 0x54(r29)
    cmpwi r3, 0x0
    mr r30, r3
    mulli r0, r0, 0xc
    add r31, r29, r0
    beq lbl_fn_804137F4_00001014
    lwz r3, 0x203c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804137F4_00001014
    lwz r4, 0x2040(r31)
    cmpwi r4, 0x0
    beq lbl_fn_804137F4_00000FE0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    b lbl_fn_804137F4_00001014
lbl_fn_804137F4_00000FE0:
    psq_l f2, 0x10(r30), 0, 0
    psq_l f3, 0x18(r30), 0, 0
    psq_l f4, 0x20(r30), 0, 0
    psq_l f5, 0x28(r30), 0, 0
    psq_l f6, 0x30(r30), 0, 0
    psq_l f1, 0x8(r30), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
lbl_fn_804137F4_00001014:
    lwz r31, 0x2044(r31)
    cmpwi r31, 0x0
    beq lbl_fn_804137F4_00001114
    cmpwi r30, 0x0
    beq lbl_fn_804137F4_00001048
    lfs f0, 0x34(r30)
    addi r5, r1, 0x2c
    lfs f7, 0x24(r30)
    lfs f8, 0x14(r30)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f0, 0x34(r1)
    b lbl_fn_804137F4_0000106C
lbl_fn_804137F4_00001048:
    lis r3, lbl_807C7060@ha
    addi r5, r1, 0x20
    addi r3, r3, lbl_807C7060@l
    lfs f0, 0x2c(r3)
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_fn_804137F4_0000106C:
    lfs f0, 0x7c(r29)
    addi r4, r1, 0x48
    psq_l f1, 0x0(r5), 0, 0
    addi r3, r1, 0x58
    psq_st f1, 0x0(r4), 0, 0
    fmr f1, f0
    lfs f2, 0x8(r5)
    li r4, 0x79
    stfs f2, 0x50(r1)
    bl fn_805F8E70
    psq_l f1, 0x4c(r31), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0x54(r31)
    mr r5, r4
    stfs f2, 0x10(r1)
    addi r3, r1, 0x58
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f7, 0x50(r1)
    addi r4, r1, 0x14
    lfs f0, 0x10(r1)
    addi r3, r1, 0x38
    lfs f9, 0x4c(r1)
    fadds f10, f7, f0
    lfs f8, 0xc(r1)
    lfs f7, 0x48(r1)
    lfs f0, 0x8(r1)
    fadds f8, f9, f8
    fmr f2, f10
    fadds f7, f7, f0
    lfs f0, 0x58(r31)
    stfs f8, 0x18(r1)
    stfs f7, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    frsp f2, f2
    psq_st f1, 0x3c(r31), 0, 0
    stfs f2, 0x44(r31)
    stfs f10, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r31)
lbl_fn_804137F4_00001114:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804139D8(void)
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
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_804139D8_000011E4
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_804139D8_00001190
lbl_fn_804139D8_00001178:
    lwz r0, 0x22c8(r3)
    mr r4, r30
    add r3, r0, r31
    bl fn_803EBE74
    addi r31, r31, 0x1c
    addi r29, r29, 0x1
lbl_fn_804139D8_00001190:
    lwz r0, 0x54(r28)
    slwi r0, r0, 3
    add r3, r28, r0
    lwz r0, 0x22c4(r3)
    cmplw r29, r0
    blt lbl_fn_804139D8_00001178
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_804139D8_000011CC
lbl_fn_804139D8_000011B4:
    lwz r0, 0x2308(r3)
    mr r4, r30
    add r3, r0, r31
    bl fn_803EC0F8
    addi r31, r31, 0x8
    addi r29, r29, 0x1
lbl_fn_804139D8_000011CC:
    lwz r0, 0x54(r28)
    slwi r0, r0, 3
    add r3, r28, r0
    lwz r0, 0x2304(r3)
    cmplw r29, r0
    blt lbl_fn_804139D8_000011B4
lbl_fn_804139D8_000011E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80413AAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80413AAC_00001260
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80413AAC_00001260
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_80413AAC_00001260:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80413B1C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0xfc
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    addi r29, r3, 0x209c
    stw r28, 0x10(r1)
    li r28, 0x0
lbl_fn_80413B1C_000012A0:
    mr r3, r31
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_80413B1C_000012B8
    li r3, 0x1
    b lbl_fn_80413B1C_0000130C
lbl_fn_80413B1C_000012B8:
    lwz r3, 0x203c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80413B1C_000012D8
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_80413B1C_000012D8
    li r3, 0x1
    b lbl_fn_80413B1C_0000130C
lbl_fn_80413B1C_000012D8:
    mr r3, r29
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_80413B1C_000012F0
    li r3, 0x1
    b lbl_fn_80413B1C_0000130C
lbl_fn_80413B1C_000012F0:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    cmpwi r28, 0x8
    addi r29, r29, 0x10
    addi r31, r31, 0x3d0
    blt lbl_fn_80413B1C_000012A0
    li r3, 0x0
lbl_fn_80413B1C_0000130C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80413BD4(void)
{
    nofralloc
    stwu r1, -0x7a0(r1)
    mflr r0
    stw r0, 0x7a4(r1)
    addi r11, r1, 0x790
    stfd f31, 0x790(r1)
    psq_st f31, 0x798(r1), 0, 0
    bl _savegpr_14
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r15, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r19, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r14, r3
    addi r3, r1, 0x118
    stw r19, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r19, 0x110(r1)
    stw r19, 0x114(r1)
    stw r19, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r14
    mr r5, r15
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r20, lbl_80752DB8@ha
    lis r22, lbl_80777668@ha
    lfs f31, lbl_80886420
    addi r20, r20, lbl_80752DB8@l
    mr r24, r19
    addi r22, r22, lbl_80777668@l
    li r17, 0x0
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    li r16, 0x0
    li r15, 0x0
    lis r14, fn_803F3334@ha
    li r23, 0x1
lbl_fn_80413BD4_0000141C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r18, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80413BD4_00001958
    addi r4, r20, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_0000158C
    cmpwi r16, 0x0
    beq lbl_fn_80413BD4_000014B8
    add r18, r31, r25
    lwz r3, 0x22c8(r18)
    cmpwi r3, 0x0
    beq lbl_fn_80413BD4_00001468
    beq lbl_fn_80413BD4_00001468
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80413BD4_00001468:
    add r3, r31, r25
    cmpwi r16, 0x0
    stw r16, 0x22c4(r3)
    beq lbl_fn_80413BD4_000014B0
    mulli r3, r16, 0x1c
    li r4, 0x1
    la r5, lbl_8087DF4C
    la r6, lbl_8087DF48
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r16
    addi r4, r14, fn_803F3334@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    stw r3, 0x22c8(r18)
    b lbl_fn_80413BD4_000014B4
lbl_fn_80413BD4_000014B0:
    stw r19, 0x22c8(r18)
lbl_fn_80413BD4_000014B4:
    li r16, 0x0
lbl_fn_80413BD4_000014B8:
    cmpwi r15, 0x0
    beq lbl_fn_80413BD4_00001530
    add r18, r31, r25
    lwz r3, 0x2308(r18)
    cmpwi r3, 0x0
    beq lbl_fn_80413BD4_000014DC
    beq lbl_fn_80413BD4_000014DC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80413BD4_000014DC:
    add r3, r31, r25
    cmpwi r15, 0x0
    stw r15, 0x2304(r3)
    beq lbl_fn_80413BD4_00001528
    slwi r3, r15, 3
    li r4, 0x1
    addi r3, r3, 0x10
    la r5, lbl_8087DF44
    la r6, lbl_8087DF40
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3360@ha
    mr r7, r15
    addi r4, r4, fn_803F3360@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0x2308(r18)
    b lbl_fn_80413BD4_0000152C
lbl_fn_80413BD4_00001528:
    stw r19, 0x2308(r18)
lbl_fn_80413BD4_0000152C:
    li r15, 0x0
lbl_fn_80413BD4_00001530:
    addi r30, r30, 0x3d0
    addi r3, r1, 0x108
    add r4, r31, r30
    addi r17, r17, 0x1
    addi r18, r4, 0xfc
    addi r29, r29, 0x24
    addi r28, r28, 0x14
    addi r27, r27, 0x10
    addi r26, r26, 0xc
    addi r25, r25, 0x8
    addi r24, r24, 0x4
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r31
    mr r4, r18
    addi r5, r1, 0x108
    bl fn_803EC7A0
    add r3, r31, r24
    stw r23, 0x1f7c(r3)
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_0000158C:
    mr r3, r18
    addi r4, r20, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_000015D8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    add r3, r31, r30
    addi r4, r1, 0x8
    addi r3, r3, 0xfc
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_000015D8:
    mr r3, r18
    addi r4, r20, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_00001684
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    add r18, r31, r28
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    stw r3, 0x1f9c(r18)
    add r3, r31, r30
    addi r5, r1, 0x8
    addi r3, r3, 0xfc
    bl fn_80097A88
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1fa0(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    subi r0, r3, 0x1
    addi r3, r1, 0x108
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x1fa4(r18)
    bl fn_8005B9CC
    bl fn_80684600
    subi r0, r3, 0x1
    addi r3, r1, 0x108
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x1fa5(r18)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1fa8(r18)
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_00001684:
    mr r3, r18
    addi r4, r20, 0x18
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_000016DC
    mr r5, r20
    mr r6, r20
    add r18, r31, r26
    li r3, 0x88
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80413BD4_000016C0
    bl fn_80057F28
lbl_fn_80413BD4_000016C0:
    stw r3, 0x203c(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    lwz r3, 0x203c(r18)
    bl fn_80058078
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_000016DC:
    mr r3, r18
    addi r4, r20, 0x25
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_000017B0
    mr r5, r20
    mr r6, r20
    add r21, r31, r26
    li r3, 0x5c
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_80413BD4_00001724
    li r4, 0x0
    bl fn_80056DB8
    stw r22, 0x0(r18)
lbl_fn_80413BD4_00001724:
    stw r18, 0x2044(r21)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4c(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x50(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x54(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x58(r18)
    lis r3, 0x8
    addi r3, r3, 0x8f8
    lfs f2, 0x54(r18)
    psq_l f1, 0x4c(r18), 0, 0
    psq_st f1, 0x3c(r18), 0, 0
    stfs f2, 0x44(r18)
    lfs f0, 0x58(r18)
    stfs f0, 0x48(r18)
    lwz r0, 0x48(r31)
    cmpwi r0, 0x6dd8
    bne lbl_fn_80413BD4_00001798
    ori r3, r3, 0x6
lbl_fn_80413BD4_00001798:
    stw r3, 0x20(r18)
    lwz r0, 0x8(r18)
    ori r0, r0, 0x8
    stw r0, 0x8(r18)
    stw r31, 0xc(r18)
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_000017B0:
    mr r3, r18
    addi r4, r20, 0x32
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_0000184C
    add r4, r31, r27
    addi r3, r1, 0x108
    addi r18, r4, 0x209c
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r18
    bl fn_8023780C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r21, r3
    b lbl_fn_80413BD4_0000183C
lbl_fn_80413BD4_000017F0:
    mr r3, r21
    addi r4, r20, 0x36
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_00001810
    lwz r0, 0xc(r18)
    ori r0, r0, 0x1
    stw r0, 0xc(r18)
lbl_fn_80413BD4_00001810:
    mr r3, r21
    addi r4, r20, 0x4a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_00001830
    lwz r0, 0xc(r18)
    ori r0, r0, 0x2
    stw r0, 0xc(r18)
lbl_fn_80413BD4_00001830:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r21, r3
lbl_fn_80413BD4_0000183C:
    lbz r0, 0x0(r21)
    extsb. r0, r0
    bne lbl_fn_80413BD4_000017F0
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_0000184C:
    mr r3, r18
    addi r4, r20, 0x56
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_000018FC
    add r18, r31, r29
    addi r3, r1, 0x108
    stw r23, 0x2160(r18)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2164(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2168(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x216c(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2170(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2174(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x2178(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x217c(r18)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f0, f31, f1
    li r0, 0x6
    stfs f0, 0x2180(r18)
    stw r0, 0xe8(r31)
    stw r19, 0xec(r31)
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_000018FC:
    mr r3, r18
    addi r4, r20, 0x64
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_00001918
    addi r16, r16, 0x1
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_00001918:
    mr r3, r18
    addi r4, r20, 0x6d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_00001934
    addi r15, r15, 0x1
    b lbl_fn_80413BD4_00001958
lbl_fn_80413BD4_00001934:
    mr r3, r18
    addi r4, r20, 0x75
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_00001958
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x2280(r31)
lbl_fn_80413BD4_00001958:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80413BD4_0000141C
    cmpwi r16, 0x0
    beq lbl_fn_80413BD4_000019E4
    slwi r18, r17, 3
    add r14, r31, r18
    lwz r3, 0x22c8(r14)
    cmpwi r3, 0x0
    beq lbl_fn_80413BD4_00001990
    beq lbl_fn_80413BD4_00001990
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80413BD4_00001990:
    add r3, r31, r18
    cmpwi r16, 0x0
    stw r16, 0x22c4(r3)
    beq lbl_fn_80413BD4_000019DC
    mulli r3, r16, 0x1c
    li r4, 0x1
    la r5, lbl_8087DF4C
    la r6, lbl_8087DF48
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3334@ha
    mr r7, r16
    addi r4, r4, fn_803F3334@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    stw r3, 0x22c8(r14)
    b lbl_fn_80413BD4_000019E4
lbl_fn_80413BD4_000019DC:
    li r0, 0x0
    stw r0, 0x22c8(r14)
lbl_fn_80413BD4_000019E4:
    cmpwi r15, 0x0
    beq lbl_fn_80413BD4_00001A60
    slwi r16, r17, 3
    add r14, r31, r16
    lwz r3, 0x2308(r14)
    cmpwi r3, 0x0
    beq lbl_fn_80413BD4_00001A0C
    beq lbl_fn_80413BD4_00001A0C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80413BD4_00001A0C:
    add r3, r31, r16
    cmpwi r15, 0x0
    stw r15, 0x2304(r3)
    beq lbl_fn_80413BD4_00001A58
    slwi r3, r15, 3
    li r4, 0x1
    addi r3, r3, 0x10
    la r5, lbl_8087DF44
    la r6, lbl_8087DF40
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3360@ha
    mr r7, r15
    addi r4, r4, fn_803F3360@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0x2308(r14)
    b lbl_fn_80413BD4_00001A60
lbl_fn_80413BD4_00001A58:
    li r0, 0x0
    stw r0, 0x2308(r14)
lbl_fn_80413BD4_00001A60:
    addi r11, r1, 0x790
    psq_l f31, 0x798(r1), 0, 0
    lfd f31, 0x790(r1)
    bl _restgpr_14
    lwz r0, 0x7a4(r1)
    mtlr r0
    addi r1, r1, 0x7a0
    blr
}
