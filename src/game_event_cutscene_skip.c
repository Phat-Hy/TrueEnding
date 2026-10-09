#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_8004829C(void);
extern void fn_8004895C(void);
extern void fn_80049654(void);
extern void fn_8004B1EC(void);
extern void fn_8006A204(void);
extern void fn_8006A900(void);
extern void fn_8006AA20(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_800C3094(void);
extern void fn_800CB480(void);
extern void fn_800CF680(void);
extern void fn_800D0180(void);
extern void fn_800D0198(void);
extern void fn_800D0DB0(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC980(void);
extern void fn_8014F2B4(void);
extern void fn_8016DF3C(void);
extern void fn_8016E970(void);
extern void fn_801839FC(void);
extern void fn_80183D00(void);
extern void fn_8021771C(void);
extern void fn_80219544(void);
extern void fn_80334B38(void);
extern void fn_80365464(void);
extern void fn_80370B78(void);
extern void fn_80373148(void);
extern void fn_8037C8C4(void);
extern void fn_803BEBAC(void);
extern void fn_803C3894(void);
extern void fn_803CA530(void);
extern void fn_803E836C(void);
extern void fn_803EB4A8(void);
extern void fn_803EDFBC(void);
extern void fn_80442F10(void);
extern void fn_8047EFD8(void);
extern void fn_8047F580(void);
extern void fn_80488B5C(void);
extern void fn_8048EC7C(void);
extern void fn_80491440(void);
extern void fn_8049D52C(void);
extern void fn_8049D68C(void);
extern void fn_8049D704(void);
extern void fn_8053E8CC(void);
extern void fn_8054119C(void);
extern void fn_80541214(void);
extern void fn_80541538(void);
extern void fn_80541D00(void);
extern void fn_805477CC(void);
extern void fn_80547C2C(void);
extern void fn_80549D90(void);
extern void fn_80549F18(void);
extern void fn_80550CE4(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_80709AD0(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80756330[];
extern u8 lbl_80756380[];
extern u8 lbl_80775A88[];
extern u8 lbl_807901BC[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C75C0[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087EFEE;
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F558;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886F8C;
extern u32 lbl_80886F90;
extern u32 lbl_80886FBC;
extern u32 lbl_80886FDC;
extern u32 lbl_80886FF4;

/* Function declarations */
void fn_8047F6B0(void);
void fn_8047F6E4(void);
void fn_8047F730(void);
void fn_8047F850(void);
void fn_8047F88C(void);
void fn_8047F8A4(void);
void fn_8047F8B0(void);
void fn_8047F8C0(void);
void fn_8047F91C(void);
void fn_8047F984(void);
void fn_8047F994(void);
void fn_8047FABC(void);
void fn_8047FAD0(void);
void fn_8047FCC0(void);
void fn_8047FF70(void);
void fn_804803A4(void);
void fn_80480438(void);
void fn_80480468(void);
void fn_804805AC(void);
void fn_804805B4(void);
void fn_804805CC(void);
void fn_804805F0(void);

asm void fn_8047F6B0(void)
{
    nofralloc
    lwz r0, 0x1aa0(r3)
    stw r4, 0x1aa4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8047F6B0_0000001C
    li r0, 0x1
    stw r0, 0x1aa0(r3)
    b lbl_fn_8047F6B0_0000002C
lbl_fn_8047F6B0_0000001C:
    cmpwi r0, 0x2
    bne lbl_fn_8047F6B0_0000002C
    li r0, 0x3
    stw r0, 0x1aa0(r3)
lbl_fn_8047F6B0_0000002C:
    lwz r3, 0x1aa0(r3)
    blr
}

asm void fn_8047F6E4(void)
{
    nofralloc
    lwz r0, 0x1aac(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x1aa0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8047F6E4_00000058
    li r0, 0x1
    stw r0, 0x1aa0(r3)
    b lbl_fn_8047F6E4_00000068
lbl_fn_8047F6E4_00000058:
    cmpwi r0, 0x2
    bne lbl_fn_8047F6E4_00000068
    li r0, 0x3
    stw r0, 0x1aa0(r3)
lbl_fn_8047F6E4_00000068:
    lwz r0, 0x1aa0(r3)
    cmpwi r0, 0x3
    bnelr
    li r0, 0x0
    stw r0, 0x1aac(r3)
    blr
}

asm void fn_8047F730(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8047F730_000000AC
    lwz r31, 0x5624(r4)
    b lbl_fn_8047F730_000000B0
lbl_fn_8047F730_000000AC:
    lwz r31, 0x1a9c(r3)
lbl_fn_8047F730_000000B0:
    lwz r0, 0x1aa0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8047F730_00000108
    li r0, 0x0
    stw r0, 0x5c(r31)
    lis r4, 0x100
    li r6, -0x1
    stw r0, 0x58(r31)
    subi r5, r4, 0x1
    li r4, 0x12
    li r0, 0x1
    stw r6, 0x6c(r31)
    stw r5, 0x70(r31)
    stw r4, 0x78(r31)
    lwz r4, 0x1aa4(r3)
    mr r3, r31
    stw r4, 0x54(r31)
    stw r0, 0x50(r31)
    bl fn_8006A900
    li r0, 0x2
    stw r0, 0x1aa0(r30)
    b lbl_fn_8047F730_00000188
lbl_fn_8047F730_00000108:
    cmpwi r0, 0x3
    bne lbl_fn_8047F730_00000140
    lwz r0, 0x38(r31)
    li r5, 0x0
    lfs f0, lbl_80886FF4
    li r4, 0x1
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r31)
    li r0, 0x4
    stw r5, 0x4c(r31)
    stfs f0, 0x74(r31)
    stw r4, 0x48(r31)
    stw r0, 0x1aa0(r3)
    b lbl_fn_8047F730_00000188
lbl_fn_8047F730_00000140:
    cmpwi r0, 0x4
    bne lbl_fn_8047F730_00000188
    lfs f1, 0xb4(r3)
    mr r3, r31
    lfs f0, lbl_80886FDC
    fadds f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x50(r31)
    bl fn_8006A204
    cmpwi r3, 0x0
    beq lbl_fn_8047F730_00000188
    li r0, 0x1
    stw r0, 0x50(r31)
    li r0, 0x0
    stw r0, 0x48(r31)
    stw r0, 0x1aa0(r30)
lbl_fn_8047F730_00000188:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8047F850(void)
{
    nofralloc
    lwz r8, 0x1aa8(r3)
    li r7, 0x0
    li r0, 0x1
    stw r4, 0x54(r8)
    lwz r4, 0x1aa8(r3)
    stw r5, 0x6c(r4)
    lwz r4, 0x1aa8(r3)
    stw r6, 0x70(r4)
    lwz r4, 0x1aa8(r3)
    stw r7, 0x4c(r4)
    lwz r4, 0x1aa8(r3)
    stw r0, 0x48(r4)
    lwz r3, 0x1aa8(r3)
    stw r7, 0x58(r3)
    blr
}

asm void fn_8047F88C(void)
{
    nofralloc
    cmpwi r4, 0x0
    blelr
    li r0, 0x1
    stw r0, 0x1aac(r3)
    stw r4, 0x1aa4(r3)
    blr
}

asm void fn_8047F8A4(void)
{
    nofralloc
    lwz r3, 0x1aa8(r3)
    stfs f1, 0x74(r3)
    blr
}

asm void fn_8047F8B0(void)
{
    nofralloc
    lwz r3, 0x1aa8(r3)
    li r0, 0x0
    stw r0, 0x48(r3)
    blr
}

asm void fn_8047F8C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x1aa8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8047F8C0_00000240
    mr r3, r0
    bl fn_800D246C
lbl_fn_8047F8C0_00000240:
    lwz r3, 0x1a9c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8047F8C0_00000254
    mr r4, r31
    bl fn_800D246C
lbl_fn_8047F8C0_00000254:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047F91C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x70(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8047F91C_000002BC
    mr r3, r31
    bl fn_80550CE4
    lwz r4, 0x190(r31)
    mr r3, r30
    li r5, 0x0
    bl fn_8047EFD8
    mr r3, r31
    li r4, 0xe
    bl fn_8053E8CC
    mr r3, r30
    bl fn_8048EC7C
lbl_fn_8047F91C_000002BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047F984(void)
{
    nofralloc
    stfs f1, 0xb4(r3)
    lwz r3, lbl_8087EFA8
    stfs f1, 0x3a4(r3)
    blr
}

asm void fn_8047F994(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r31, r3
    mr r27, r4
    mr r28, r5
    bne lbl_fn_8047F994_0000035C
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8047F994_0000035C
    lwz r4, 0x70(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8047F994_0000035C
    lwz r0, 0x190(r4)
    cmpwi r0, 0x19d
    bne lbl_fn_8047F994_0000035C
    lwz r3, lbl_8087F430
    li r4, -0x1
    lfs f1, lbl_80886F8C
    li r5, 0x0
    li r6, 0x0
    bl fn_80370B78
    lwz r3, 0x70(r31)
    li r4, 0xb
    bl fn_8053E8CC
    b lbl_fn_8047F994_000003F4
lbl_fn_8047F994_0000035C:
    addi r29, r3, 0xbc
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8047F994_00000394
    lis r3, __files@ha
    lis r4, lbl_807901BC@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807901BC@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047F994_00000394:
    addic. r3, r30, 0x8
    addi r0, r31, 0xbc
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    beq lbl_fn_8047F994_000003AC
    stw r27, 0x0(r3)
lbl_fn_8047F994_000003AC:
    lwz r3, 0x0(r29)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r5)
    stw r5, 0x0(r29)
    stw r29, 0x4(r5)
    lwz r3, 0xb8(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0xb8(r31)
    b lbl_fn_8047F994_000003E4
    bl dtor_80084684
lbl_fn_8047F994_000003E4:
    cmpwi r28, 0x0
    beq lbl_fn_8047F994_000003F4
    mr r3, r31
    bl fn_8047FCC0
lbl_fn_8047F994_000003F4:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8047FABC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_80709AD0
    blr
}

asm void fn_8047FAD0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f2, lbl_80886FBC
    stw r0, 0x64(r1)
    li r0, 0x1
    lfs f1, lbl_80886F90
    stw r31, 0x5c(r1)
    li r31, 0x0
    lfs f0, lbl_80886F8C
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r4, lbl_8087EFA8
    stw r31, 0x48(r1)
    stw r0, 0x240(r4)
    stw r31, 0x244(r4)
    stw r31, 0x248(r4)
    stfs f1, 0x24c(r4)
    stfs f0, 0x250(r4)
    stw r31, 0x254(r4)
    stw r31, 0x258(r4)
    stfs f2, 0x25c(r4)
    stfs f2, 0x260(r4)
    lfs f3, 0x1a58(r3)
    stfs f3, 0xb4(r3)
    lwz r4, lbl_8087EFA8
    stw r31, 0x4c(r1)
    stfs f3, 0x3a4(r4)
    stw r0, 0xc4(r3)
    addi r3, r3, 0x1f38
    stfs f2, 0x50(r1)
    stfs f2, 0x54(r1)
    stw r0, 0x34(r1)
    stw r31, 0x38(r1)
    stw r31, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8047FAD0_000004D4
    addi r3, r30, 0x1f20
    li r4, 0x1e
    bl fn_8004B1EC
    addi r3, r30, 0x1f28
    bl fn_800CB480
    stw r31, 0x1f34(r30)
lbl_fn_8047FAD0_000004D4:
    lbz r0, lbl_8087EFEE
    lis r3, fn_8047FABC@ha
    addi r3, r3, fn_8047FABC@l
    li r4, 0xa
    extsb. r0, r0
    stw r3, 0x18(r1)
    li r0, 0x0
    stw r4, 0x1c(r1)
    stw r0, 0x20(r1)
    bne lbl_fn_8047FAD0_00000524
    lis r6, lbl_807C75C0@ha
    lis r4, fn_800D0180@ha
    lis r3, fn_800D0198@ha
    li r0, 0x1
    addi r3, r3, fn_800D0198@l
    addi r5, r6, lbl_807C75C0@l
    addi r4, r4, fn_800D0180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75C0@l(r6)
    stb r0, lbl_8087EFEE
lbl_fn_8047FAD0_00000524:
    lwz r4, 0x18(r1)
    addi r3, r1, 0x10
    lwz r0, 0x1c(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8047FAD0_00000570
    addic. r0, r1, 0x24
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_8047FAD0_00000568
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_8047FAD0_00000568:
    li r0, 0x1
    b lbl_fn_8047FAD0_00000574
lbl_fn_8047FAD0_00000570:
    li r0, 0x0
lbl_fn_8047FAD0_00000574:
    cmpwi r0, 0x0
    beq lbl_fn_8047FAD0_0000058C
    lis r3, lbl_807C75C0@ha
    addi r3, r3, lbl_807C75C0@l
    stw r3, 0x20(r1)
    b lbl_fn_8047FAD0_00000594
lbl_fn_8047FAD0_0000058C:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_8047FAD0_00000594:
    lwz r3, lbl_8087EFE8
    addi r4, r1, 0x20
    li r5, 0x2
    bl fn_800D0DB0
    addic. r3, r1, 0x20
    beq lbl_fn_8047FAD0_000005E0
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8047FAD0_000005E0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8047FAD0_000005D8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047FAD0_000005D8:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_8047FAD0_000005E0:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8047FAD0_000005F8
    li r4, 0x1
    li r5, 0x0
    bl fn_803EB4A8
lbl_fn_8047FAD0_000005F8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8047FCC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lfs f31, lbl_80886F90
    mr r31, r3
    li r30, 0x0
    b lbl_fn_8047FCC0_00000894
lbl_fn_8047FCC0_0000063C:
    lwz r3, 0xc0(r31)
    lwz r27, 0x8(r3)
    lwz r4, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0xb8(r31)
    cmpwi r27, 0x2
    subi r0, r3, 0x1
    stw r0, 0xb8(r31)
    bne lbl_fn_8047FCC0_000006B0
    lwz r29, 0x70(r31)
    cmpwi r29, 0x0
    beq lbl_fn_8047FCC0_00000894
    mr r3, r29
    bl fn_80550CE4
    lwz r4, 0x190(r29)
    mr r3, r31
    li r5, 0x0
    bl fn_8047EFD8
    mr r3, r29
    li r4, 0xe
    bl fn_8053E8CC
    mr r3, r31
    bl fn_8048EC7C
    b lbl_fn_8047FCC0_00000894
lbl_fn_8047FCC0_000006B0:
    cmpwi r27, 0x0
    bne lbl_fn_8047FCC0_000007B8
    lwz r28, 0x70(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8047FCC0_00000894
    lwz r0, 0x50(r28)
    cmpwi r0, 0x1
    bne lbl_fn_8047FCC0_00000894
    lwz r0, 0x194(r28)
    cmpwi r0, 0xa
    bne lbl_fn_8047FCC0_00000894
    mr r3, r28
    bl fn_80541214
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8047FCC0_00000704
    cmpwi r0, 0x2
    beq lbl_fn_8047FCC0_00000744
    cmpwi r0, 0x3
    beq lbl_fn_8047FCC0_00000780
    b lbl_fn_8047FCC0_00000788
lbl_fn_8047FCC0_00000704:
    lwz r27, 0x70(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8047FCC0_00000788
    mr r3, r27
    bl fn_80541214
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8047FCC0_00000788
    mr r3, r27
    mr r4, r29
    bl fn_8054119C
    lwz r5, 0x2c(r29)
    mr r4, r3
    mr r3, r27
    bl fn_80541538
    b lbl_fn_8047FCC0_00000788
lbl_fn_8047FCC0_00000744:
    lwz r27, 0x70(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8047FCC0_00000788
    mr r3, r27
    bl fn_80550CE4
    lwz r4, 0x190(r27)
    mr r3, r31
    li r5, 0x0
    bl fn_8047EFD8
    mr r3, r27
    li r4, 0xe
    bl fn_8053E8CC
    mr r3, r31
    bl fn_8048EC7C
    b lbl_fn_8047FCC0_00000788
lbl_fn_8047FCC0_00000780:
    mr r3, r31
    bl fn_8047FAD0
lbl_fn_8047FCC0_00000788:
    mr r3, r28
    bl fn_80541214
    mr r4, r3
    lwz r3, lbl_8087EFE8
    lwz r6, 0x10(r4)
    li r4, 0x3
    li r5, 0xa
    subi r0, r6, 0x3
    cntlzw r0, r0
    srwi r6, r0, 5
    bl fn_800CF680
    b lbl_fn_8047FCC0_00000894
lbl_fn_8047FCC0_000007B8:
    cmpwi r27, 0x1
    bne lbl_fn_8047FCC0_00000894
    lwz r0, 0xc4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8047FCC0_00000894
    lwz r4, lbl_8087EFA8
    addi r3, r31, 0x1f38
    lwz r0, 0x1b68(r31)
    stw r0, 0x240(r4)
    lwz r0, 0x1b6c(r31)
    stw r0, 0x244(r4)
    lwz r0, 0x1b70(r31)
    stw r0, 0x248(r4)
    lfs f0, 0x1b74(r31)
    stfs f0, 0x24c(r4)
    lfs f0, 0x1b78(r31)
    stfs f0, 0x250(r4)
    lwz r0, 0x1b7c(r31)
    stw r0, 0x254(r4)
    lwz r0, 0x1b80(r31)
    stw r0, 0x258(r4)
    lfs f0, 0x1b84(r31)
    stfs f0, 0x25c(r4)
    lfs f0, 0x1b88(r31)
    stfs f0, 0x260(r4)
    stfs f31, 0xb4(r31)
    lwz r4, lbl_8087EFA8
    stfs f31, 0x3a4(r4)
    stw r30, 0xc4(r31)
    lwz r27, 0x70(r31)
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8047FCC0_00000894
    cmpwi r27, 0x0
    beq lbl_fn_8047FCC0_00000888
    lwz r0, 0x190(r27)
    cmpwi r0, 0x151b
    bne lbl_fn_8047FCC0_00000888
    mr r3, r27
    bl fn_80541214
    cmpwi r3, 0x0
    beq lbl_fn_8047FCC0_00000888
    mr r3, r27
    bl fn_80541214
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    beq lbl_fn_8047FCC0_00000894
    mr r3, r27
    bl fn_80541214
    lwz r0, 0xc(r3)
    cmpwi r0, 0x8
    beq lbl_fn_8047FCC0_00000894
lbl_fn_8047FCC0_00000888:
    mr r3, r31
    li r4, 0x3c
    bl fn_80488B5C
lbl_fn_8047FCC0_00000894:
    lwz r0, 0xb8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8047FCC0_0000063C
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8047FF70(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_27
    subis r7, r5, 0x3
    fmr f31, f1
    subi r0, r7, 0xcdc
    mr r29, r3
    cmplwi r0, 0x63
    mr r27, r4
    mr r31, r6
    bgt lbl_fn_8047FF70_00000934
    lis r3, 0x51ec
    lwz r4, lbl_8087F4F0
    subi r0, r3, 0x7ae1
    mulhw r0, r0, r5
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x64
    subf r0, r0, r5
    slwi r0, r0, 2
    add r3, r4, r0
    lwz r3, 0x64a0(r3)
    bl fn_80219544
    mr r5, r3
lbl_fn_8047FF70_00000934:
    cmpwi r27, 0x0
    bne lbl_fn_8047FF70_00000960
    lwz r0, 0x1a64(r29)
    lwz r3, lbl_8087F8A0
    cmpwi r0, 0x0
    lwz r30, 0x54(r3)
    beq lbl_fn_8047FF70_000009C0
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    b lbl_fn_8047FF70_000009C0
lbl_fn_8047FF70_00000960:
    lwz r3, lbl_8087F890
    mr r4, r5
    bl fn_80547C2C
    mr r30, r3
    mr r4, r27
    bl fn_8016DF3C
    lwz r0, 0x5c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8047FF70_000009C0
    li r27, 0x0
    li r28, 0x0
lbl_fn_8047FF70_0000098C:
    lwz r0, 0x5c(r30)
    mr r3, r30
    li r6, -0x1
    add r4, r0, r27
    add r5, r0, r28
    lbz r4, 0xd4(r4)
    lwz r5, 0xd8(r5)
    extsb r4, r4
    bl fn_8014F2B4
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_8047FF70_0000098C
lbl_fn_8047FF70_000009C0:
    cmpwi r30, 0x0
    bne lbl_fn_8047FF70_000009D0
    li r3, 0x0
    b lbl_fn_8047FF70_00000CD4
lbl_fn_8047FF70_000009D0:
    psq_l f1, 0x0(r31), 0, 0
    addi r5, r1, 0x14
    lfs f0, lbl_80886F8C
    mr r3, r30
    psq_st f1, 0x528(r30), 0, 0
    li r4, 0x9
    lfs f2, 0x8(r31)
    stfs f2, 0x530(r30)
    fmr f2, f0
    stfs f0, 0x14(r1)
    stfs f31, 0x18(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r30), 0, 0
    stfs f2, 0x53c(r30)
    lwz r0, 0x958(r30)
    stfs f0, 0x1c(r1)
    ori r0, r0, 0x1
    stw r0, 0x958(r30)
    bl fn_8016E970
    lwz r0, 0x5c0(r30)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r30)
    lwz r3, 0x1a74(r29)
    lwz r4, 0x1a78(r29)
    cmplw r3, r4
    bge lbl_fn_8047FF70_00000A54
    addi r3, r3, 0x1
    stw r3, 0x1a74(r29)
    subi r0, r3, 0x1
    lwz r3, 0x1a70(r29)
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_8047FF70_00000CD0
lbl_fn_8047FF70_00000A54:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8047FF70_00000A8C
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047FF70_00000A8C:
    li r5, 0x0
    addi r4, r29, 0x1a78
    lis r3, 0x4000
    stw r5, 0x20(r1)
    subi r0, r3, 0x1
    stw r5, 0x24(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r5, 0x30(r1)
    lwz r3, 0x1a74(r29)
    lwz r31, 0x1a78(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_8047FF70_00000AF4
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047FF70_00000AF4:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8047FF70_00000B44
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
    bge lbl_fn_8047FF70_00000B38
    addi r3, r1, 0x8
lbl_fn_8047FF70_00000B38:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8047FF70_00000B88
lbl_fn_8047FF70_00000B44:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8047FF70_00000B80
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8047FF70_00000B74
    addi r3, r1, 0x8
lbl_fn_8047FF70_00000B74:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8047FF70_00000B88
lbl_fn_8047FF70_00000B80:
    lis r3, 0x4000
    subi r28, r3, 0x1
lbl_fn_8047FF70_00000B88:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_8047FF70_00000BBC
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047FF70_00000BBC:
    slwi r3, r28, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8047FF70_00000BF0
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047FF70_00000BF0:
    lwz r0, 0x24(r1)
    stw r31, 0x20(r1)
    slwi r3, r0, 2
    stw r28, 0x28(r1)
    lwz r0, 0x1a74(r29)
    stw r0, 0x30(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    stwx r30, r3, r0
    lwz r3, 0x24(r1)
    lwz r0, 0x30(r1)
    addi r3, r3, 0x1
    stw r3, 0x24(r1)
    lwz r3, 0x20(r1)
    lwz r4, 0x1a74(r29)
    lwz r28, 0x1a70(r29)
    slwi r4, r4, 2
    add r5, r28, r4
    subf r5, r28, r5
    mr r4, r28
    srawi r5, r5, 2
    addze r31, r5
    subf r0, r31, r0
    stw r0, 0x30(r1)
    slwi r27, r31, 2
    slwi r0, r0, 2
    mr r5, r27
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x24(r1)
    li r4, 0x0
    addic. r3, r1, 0x20
    add r0, r0, r31
    stw r0, 0x24(r1)
    stw r4, 0x1a74(r29)
    lwz r3, 0x1a78(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x1a78(r29)
    stw r3, 0x28(r1)
    lwz r0, 0x20(r1)
    lwz r3, 0x1a70(r29)
    stw r0, 0x1a70(r29)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1a74(r29)
    stw r4, 0x24(r1)
    beq lbl_fn_8047FF70_00000CD0
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047FF70_00000CD0
    stw r4, 0x24(r1)
    bl dtor_80084684
lbl_fn_8047FF70_00000CD0:
    mr r3, r30
lbl_fn_8047FF70_00000CD4:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_804803A4(void)
{
    nofralloc
    lwz r0, 0x1de4(r3)
    cmpwi r0, 0x0
    blt lbl_fn_804803A4_00000D08
    li r3, 0x0
    blr
lbl_fn_804803A4_00000D08:
    lwz r0, 0x1a64(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804803A4_00000D44
lbl_fn_804803A4_00000D1C:
    lwz r5, 0x1a60(r3)
    lwzx r5, r5, r4
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804803A4_00000D3C
    li r3, 0x0
    blr
lbl_fn_804803A4_00000D3C:
    addi r4, r4, 0x4
    bdnz lbl_fn_804803A4_00000D1C
lbl_fn_804803A4_00000D44:
    lwz r0, 0x1a74(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804803A4_00000D80
lbl_fn_804803A4_00000D58:
    lwz r5, 0x1a70(r3)
    lwzx r5, r5, r4
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_804803A4_00000D78
    li r3, 0x0
    blr
lbl_fn_804803A4_00000D78:
    addi r4, r4, 0x4
    bdnz lbl_fn_804803A4_00000D58
lbl_fn_804803A4_00000D80:
    li r3, 0x1
    blr
}

asm void fn_80480438(void)
{
    nofralloc
    lwz r0, 0x1a64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80480438_00000DA0
    lwz r3, 0x1a60(r3)
    lwz r3, 0x0(r3)
    blr
lbl_fn_80480438_00000DA0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80480438_00000DB0
    b fn_80373148
lbl_fn_80480438_00000DB0:
    li r3, 0x0
    blr
}

asm void fn_80480468(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r7, 0x0
    li r8, 0x0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r6, 0x58(r4)
    stw r6, 0x10(r1)
    lwz r9, 0x1dec(r3)
    lbz r0, 0x12(r1)
    cmpw r9, r0
    bne lbl_fn_80480468_00000E0C
    stw r6, 0xc(r1)
    lwz r4, 0x1df0(r3)
    lhz r0, 0xc(r1)
    cmpw r4, r0
    bne lbl_fn_80480468_00000E0C
    li r8, 0x1
lbl_fn_80480468_00000E0C:
    cmpwi r8, 0x0
    beq lbl_fn_80480468_00000E2C
    stw r6, 0x8(r1)
    lwz r3, 0x1df4(r3)
    lbz r0, 0xb(r1)
    cmpw r3, r0
    bne lbl_fn_80480468_00000E2C
    li r7, 0x1
lbl_fn_80480468_00000E2C:
    cmpwi r7, 0x0
    beq lbl_fn_80480468_00000E40
    cmpwi r9, 0x1
    beq lbl_fn_80480468_00000E40
    oris r31, r5, 0x1000
lbl_fn_80480468_00000E40:
    cmpwi r31, 0x0
    beq lbl_fn_80480468_00000ED8
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_80480468_00000E68
lbl_fn_80480468_00000E54:
    lwz r3, 0x1a70(r29)
    lwzx r3, r3, r28
    bl fn_800D2338
    addi r27, r27, 0x1
    addi r28, r28, 0x4
lbl_fn_80480468_00000E68:
    lwz r0, 0x1a74(r29)
    cmpw r27, r0
    blt lbl_fn_80480468_00000E54
    rlwinm. r0, r31, 0, 3, 3
    lwz r0, 0x1a74(r29)
    subf r0, r0, r0
    stw r0, 0x1a74(r29)
    bne lbl_fn_80480468_00000ED8
    lwz r3, 0x1a6c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80480468_00000EA0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x1a6c(r29)
lbl_fn_80480468_00000EA0:
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_80480468_00000EC0
lbl_fn_80480468_00000EAC:
    lwz r3, 0x1a60(r29)
    lwzx r3, r3, r28
    bl fn_800D2338
    addi r27, r27, 0x1
    addi r28, r28, 0x4
lbl_fn_80480468_00000EC0:
    lwz r0, 0x1a64(r29)
    cmpw r27, r0
    blt lbl_fn_80480468_00000EAC
    lwz r0, 0x1a64(r29)
    subf r0, r0, r0
    stw r0, 0x1a64(r29)
lbl_fn_80480468_00000ED8:
    li r0, 0x2
    stw r0, 0x1de4(r29)
    stw r30, 0x1de8(r29)
    stw r31, 0x1df8(r29)
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804805AC(void)
{
    nofralloc
    lwz r3, 0x58(r3)
    blr
}

asm void fn_804805B4(void)
{
    nofralloc
    lwz r4, 0x1a74(r3)
    li r0, 0x0
    stw r0, 0x23b8(r3)
    subf r0, r4, r4
    stw r0, 0x1a74(r3)
    b fn_8047F580
}

asm void fn_804805CC(void)
{
    nofralloc
    lis r9, lbl_80756380@ha
    mr r7, r5
    addi r9, r9, lbl_80756380@l
    mr r8, r6
    mr r5, r4
    mr r6, r4
    addi r4, r9, 0x1ec
    crclr 6
    b fn_800DC980
}

asm void fn_804805F0(void)
{
    nofralloc
    stwu r1, -0x300(r1)
    mflr r0
    stw r0, 0x304(r1)
    addi r11, r1, 0x300
    bl _savegpr_14
    lwz r0, 0x58(r4)
    mr r15, r3
    stw r0, 0x3c(r1)
    mr r16, r4
    mr r17, r5
    stw r0, 0x38(r1)
    lbz r21, 0x3e(r1)
    stw r0, 0x34(r1)
    lhz r20, 0x38(r1)
    mr r3, r21
    lbz r19, 0x37(r1)
    mr r4, r20
    mr r5, r19
    bl fn_8021771C
    rlwinm. r0, r17, 0, 27, 27
    stw r3, 0x2a8(r1)
    beq lbl_fn_804805F0_00001114
    rlwinm. r0, r17, 0, 3, 3
    bne lbl_fn_804805F0_00001114
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_00001114
    mr r4, r21
    mr r5, r20
    mr r6, r19
    addi r3, r1, 0xa8
    bl fn_8049D52C
    lis r14, lbl_80756380@ha
    addi r3, r1, 0x1a8
    addi r14, r14, lbl_80756380@l
    addi r5, r1, 0xa8
    addi r4, r14, 0x20c
    crclr 6
    bl sprintf
    addi r3, r1, 0x1a8
    addi r4, r1, 0x40
    li r5, 0x0
    bl fn_8006BA8C
    mr r18, r3
    mr r3, r15
    mr r4, r21
    mr r5, r20
    mr r6, r19
    bl fn_803BEBAC
    stw r3, 0x1a6c(r15)
    mr r4, r18
    li r6, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1a6c(r15)
    lwz r5, 0x40(r1)
    bl fn_803C3894
    mr r3, r18
    li r4, 0x0
    bl fn_8006BB6C
    cmpwi r21, 0x1
    bne lbl_fn_804805F0_000010F8
    lwz r3, lbl_8087F0A8
    lwz r0, 0x190(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804805F0_000010F8
    addi r3, r1, 0x1a8
    addi r4, r14, 0x21e
    crclr 6
    bl sprintf
    addi r3, r1, 0x1a8
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_0000109C
    addi r3, r1, 0x1a8
    addi r4, r1, 0x40
    li r5, 0x0
    bl fn_8006BA8C
    mr r14, r3
    lwz r3, 0x1a6c(r15)
    lwz r5, 0x40(r1)
    mr r4, r14
    li r6, 0x1
    bl fn_803C3894
    mr r3, r14
    li r4, 0x0
    bl fn_8006BB6C
lbl_fn_804805F0_0000109C:
    lis r4, lbl_80756380@ha
    addi r3, r1, 0x1a8
    addi r4, r4, lbl_80756380@l
    addi r4, r4, 0x239
    crclr 6
    bl sprintf
    addi r3, r1, 0x1a8
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_000010F8
    addi r3, r1, 0x1a8
    addi r4, r1, 0x40
    li r5, 0x0
    bl fn_8006BA8C
    mr r14, r3
    lwz r3, 0x1a6c(r15)
    lwz r5, 0x40(r1)
    mr r4, r14
    li r6, 0x2
    bl fn_803C3894
    mr r3, r14
    li r4, 0x0
    bl fn_8006BB6C
lbl_fn_804805F0_000010F8:
    lwz r0, lbl_8087F4A0
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_0000110C
    mr r3, r15
    bl fn_803EDFBC
lbl_fn_804805F0_0000110C:
    lwz r3, 0x1a6c(r15)
    bl fn_803CA530
lbl_fn_804805F0_00001114:
    rlwinm. r0, r17, 0, 23, 23
    beq lbl_fn_804805F0_00001B44
    rlwinm. r0, r17, 0, 3, 3
    bne lbl_fn_804805F0_00001B44
    lwz r0, 0x2a8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804805F0_00001B44
    rlwinm. r0, r17, 0, 22, 22
    bne lbl_fn_804805F0_00001B44
    lwz r3, lbl_8087F558
    li r22, 0x0
    li r14, 0x0
    addi r18, r3, 0x48
    b lbl_fn_804805F0_00001164
lbl_fn_804805F0_0000114C:
    add r4, r18, r14
    lwz r3, lbl_8087F558
    lwz r4, 0x4(r4)
    bl fn_80491440
    addi r22, r22, 0x1
    addi r14, r14, 0x4
lbl_fn_804805F0_00001164:
    lwz r0, 0x0(r18)
    cmpw r22, r0
    blt lbl_fn_804805F0_0000114C
    cmpwi r21, 0x1
    bne lbl_fn_804805F0_00001804
    lis r4, lbl_80756380@ha
    mr r5, r20
    addi r4, r4, lbl_80756380@l
    mr r6, r19
    addi r3, r1, 0x5c
    addi r4, r4, 0x253
    crclr 6
    bl fn_800DC980
    lwz r0, 0x5c(r1)
    mr r3, r15
    srwi. r0, r0, 31
    bne lbl_fn_804805F0_000011B0
    addi r4, r1, 0x5d
    b lbl_fn_804805F0_000011B4
lbl_fn_804805F0_000011B0:
    lwz r4, 0x64(r1)
lbl_fn_804805F0_000011B4:
    bl fn_8049D68C
    lwz r5, 0x1a64(r15)
    mr r18, r3
    lwz r4, 0x1a68(r15)
    cmplw r5, r4
    bge lbl_fn_804805F0_000011E8
    addi r4, r5, 0x1
    stw r4, 0x1a64(r15)
    subi r0, r4, 0x1
    lwz r4, 0x1a60(r15)
    slwi r0, r0, 2
    stwx r3, r4, r0
    b lbl_fn_804805F0_00001440
lbl_fn_804805F0_000011E8:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_804805F0_00001220
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_00001220:
    lwz r4, 0x1a64(r15)
    li r6, 0x0
    lis r3, 0x4000
    lwz r14, 0x1a68(r15)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r14, r4
    addi r5, r15, 0x1a68
    subf r0, r14, r0
    stw r6, 0x90(r1)
    cmplw r3, r0
    stw r6, 0x94(r1)
    stw r6, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r6, 0xa0(r1)
    stw r3, 0x28(r1)
    ble lbl_fn_804805F0_00001288
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_00001288:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r14, r0
    bge lbl_fn_804805F0_000012D8
    addi r5, r14, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x28(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x30
    srwi r4, r4, 2
    stw r4, 0x30(r1)
    cmplw r4, r0
    bge lbl_fn_804805F0_000012CC
    addi r3, r1, 0x28
lbl_fn_804805F0_000012CC:
    lwz r0, 0x0(r3)
    add r22, r14, r0
    b lbl_fn_804805F0_0000131C
lbl_fn_804805F0_000012D8:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r14, r0
    bge lbl_fn_804805F0_00001314
    addi r3, r14, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x2c(r1)
    cmplw r3, r0
    addi r3, r1, 0x2c
    bge lbl_fn_804805F0_00001308
    addi r3, r1, 0x28
lbl_fn_804805F0_00001308:
    lwz r0, 0x0(r3)
    add r22, r14, r0
    b lbl_fn_804805F0_0000131C
lbl_fn_804805F0_00001314:
    lis r3, 0x4000
    subi r22, r3, 0x1
lbl_fn_804805F0_0000131C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r22, r0
    ble lbl_fn_804805F0_00001350
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_00001350:
    slwi r3, r22, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r14, r3
    bne lbl_fn_804805F0_00001384
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_00001384:
    lwz r5, 0x1a64(r15)
    lwz r3, 0x94(r1)
    slwi r0, r5, 2
    stw r22, 0x98(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r14, r0
    stw r3, 0x94(r1)
    stwx r18, r4, r0
    lwz r0, 0x1a64(r15)
    lwz r18, 0x1a60(r15)
    slwi r0, r0, 2
    add r0, r18, r0
    mr r4, r18
    subf r0, r18, r0
    srawi r0, r0, 2
    addze r22, r0
    subf r0, r22, r5
    stw r0, 0xa0(r1)
    slwi r23, r22, 2
    slwi r0, r0, 2
    mr r5, r23
    add r3, r14, r0
    bl memcpy
    mr r3, r18
    mr r5, r23
    li r4, 0x0
    bl memset
    addic. r0, r1, 0x90
    lwz r0, 0x94(r1)
    lwz r3, 0x1a60(r15)
    li r5, 0x0
    lwz r7, 0x1a68(r15)
    lwz r4, 0x98(r1)
    add r6, r0, r22
    mr r0, r14
    stw r4, 0x1a68(r15)
    stw r7, 0x98(r1)
    stw r0, 0x1a60(r15)
    stw r3, 0x90(r1)
    stw r6, 0x1a64(r15)
    stw r5, 0x94(r1)
    beq lbl_fn_804805F0_00001440
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_00001440
    stw r5, 0x94(r1)
    bl dtor_80084684
lbl_fn_804805F0_00001440:
    lwz r3, 0x1a60(r15)
    addi r25, r1, 0x51
    addi r24, r1, 0x5d
    addi r14, r1, 0x7c
    lwz r3, 0x0(r3)
    li r18, 0x0
    li r26, 0x0
    li r31, 0x0
    stw r21, 0x48(r3)
    lis r29, 0x4000
    li r30, 0x0
    lwz r3, 0x1a60(r15)
    lwz r3, 0x0(r3)
    stw r20, 0x4c(r3)
    lwz r3, 0x1a60(r15)
    lwz r3, 0x0(r3)
    stw r19, 0x50(r3)
    b lbl_fn_804805F0_000017DC
lbl_fn_804805F0_00001488:
    lwz r6, 0x5c(r16)
    addi r0, r31, 0x4
    mr r4, r20
    addi r3, r1, 0x50
    lwzx r5, r6, r0
    lwzx r6, r6, r31
    bl fn_804805CC
    lwz r0, 0x5c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_804805F0_000014D4
    lwz r4, 0x50(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804805F0_000014D4
    lwz r3, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_804805F0_0000152C
lbl_fn_804805F0_000014D4:
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_000014E4
    lwz r5, 0x60(r1)
    b lbl_fn_804805F0_000014EC
lbl_fn_804805F0_000014E4:
    lbz r0, 0x5c(r1)
    clrlwi r5, r0, 25
lbl_fn_804805F0_000014EC:
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804805F0_00001508
    lbz r0, 0x50(r1)
    mr r6, r25
    clrlwi r4, r0, 25
    b lbl_fn_804805F0_00001510
lbl_fn_804805F0_00001508:
    lwz r6, 0x58(r1)
    lwz r4, 0x54(r1)
lbl_fn_804805F0_00001510:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x5c
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804805F0_0000152C:
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804805F0_00001540
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_804805F0_00001540:
    lwz r0, 0x5c(r1)
    mr r3, r15
    srwi. r0, r0, 31
    bne lbl_fn_804805F0_00001558
    mr r4, r24
    b lbl_fn_804805F0_0000155C
lbl_fn_804805F0_00001558:
    lwz r4, 0x64(r1)
lbl_fn_804805F0_0000155C:
    bl fn_8049D68C
    lwz r5, 0x1a64(r15)
    mr r22, r3
    lwz r4, 0x1a68(r15)
    cmplw r5, r4
    bge lbl_fn_804805F0_00001590
    addi r5, r5, 0x1
    lwz r4, 0x1a60(r15)
    slwi r0, r5, 2
    stw r5, 0x1a64(r15)
    add r4, r4, r0
    stw r3, -0x4(r4)
    b lbl_fn_804805F0_000017D0
lbl_fn_804805F0_00001590:
    subi r0, r29, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_804805F0_000015C4
    lis r3, lbl_80756380@ha
    addi r3, r3, lbl_80756380@l
    addi r4, r3, 0x1c8
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_000015C4:
    lwz r3, 0x1a64(r15)
    addi r4, r15, 0x1a68
    lwz r23, 0x1a68(r15)
    subi r0, r29, 0x1
    addi r3, r3, 0x1
    stw r30, 0x7c(r1)
    subf r3, r23, r3
    subf r0, r23, r0
    cmplw r3, r0
    stw r30, 0x80(r1)
    stw r30, 0x84(r1)
    stw r4, 0x88(r1)
    stw r30, 0x8c(r1)
    stw r3, 0x1c(r1)
    ble lbl_fn_804805F0_00001624
    lis r3, lbl_80756380@ha
    addi r3, r3, lbl_80756380@l
    addi r4, r3, 0x1c8
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_00001624:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r23, r0
    bge lbl_fn_804805F0_00001674
    lis r3, 0xcccd
    addi r4, r23, 0x1
    subi r5, r3, 0x3333
    lwz r0, 0x1c(r1)
    slwi r3, r4, 2
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x24
    srwi r4, r4, 2
    stw r4, 0x24(r1)
    cmplw r4, r0
    bge lbl_fn_804805F0_00001668
    addi r3, r1, 0x1c
lbl_fn_804805F0_00001668:
    lwz r0, 0x0(r3)
    add r23, r23, r0
    b lbl_fn_804805F0_000016B4
lbl_fn_804805F0_00001674:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r23, r0
    bge lbl_fn_804805F0_000016B0
    addi r3, r23, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x20(r1)
    cmplw r3, r0
    addi r3, r1, 0x20
    bge lbl_fn_804805F0_000016A4
    addi r3, r1, 0x1c
lbl_fn_804805F0_000016A4:
    lwz r0, 0x0(r3)
    add r23, r23, r0
    b lbl_fn_804805F0_000016B4
lbl_fn_804805F0_000016B0:
    subi r23, r29, 0x1
lbl_fn_804805F0_000016B4:
    subi r0, r29, 0x1
    cmplw r23, r0
    ble lbl_fn_804805F0_000016E4
    lis r3, lbl_80756380@ha
    addi r3, r3, lbl_80756380@l
    addi r4, r3, 0x1c8
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_000016E4:
    slwi r3, r23, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_804805F0_00001718
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_00001718:
    lwz r0, 0x1a64(r15)
    lwz r3, 0x80(r1)
    slwi r6, r0, 2
    stw r23, 0x84(r1)
    addi r4, r3, 0x1
    slwi r5, r3, 2
    add r3, r27, r6
    stw r4, 0x80(r1)
    stwx r22, r5, r3
    lwz r3, 0x1a64(r15)
    lwz r23, 0x1a60(r15)
    slwi r3, r3, 2
    add r3, r23, r3
    mr r4, r23
    subf r3, r23, r3
    srawi r3, r3, 2
    addze r28, r3
    subf r0, r28, r0
    stw r0, 0x8c(r1)
    slwi r22, r28, 2
    slwi r0, r0, 2
    mr r5, r22
    add r3, r27, r0
    bl memcpy
    mr r3, r23
    mr r5, r22
    li r4, 0x0
    bl memset
    lwz r0, 0x80(r1)
    cmpwi r14, 0x0
    lwz r3, 0x1a60(r15)
    add r5, r0, r28
    mr r0, r27
    lwz r6, 0x1a68(r15)
    lwz r4, 0x84(r1)
    stw r4, 0x1a68(r15)
    stw r6, 0x84(r1)
    stw r0, 0x1a60(r15)
    stw r3, 0x7c(r1)
    stw r5, 0x1a64(r15)
    stw r30, 0x80(r1)
    beq lbl_fn_804805F0_000017D0
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_000017D0
    stw r30, 0x80(r1)
    bl dtor_80084684
lbl_fn_804805F0_000017D0:
    addi r26, r26, 0x2
    addi r31, r31, 0x8
    addi r18, r18, 0x1
lbl_fn_804805F0_000017DC:
    lwz r0, 0x60(r16)
    srwi r0, r0, 1
    cmpw r18, r0
    blt lbl_fn_804805F0_00001488
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804805F0_00001AA0
    lwz r3, 0x64(r1)
    bl dtor_80084684
    b lbl_fn_804805F0_00001AA0
lbl_fn_804805F0_00001804:
    mr r3, r15
    mr r4, r21
    mr r5, r20
    mr r6, r19
    bl fn_8049D704
    lwz r5, 0x1a64(r15)
    mr r18, r3
    lwz r4, 0x1a68(r15)
    cmplw r5, r4
    bge lbl_fn_804805F0_00001848
    addi r4, r5, 0x1
    stw r4, 0x1a64(r15)
    subi r0, r4, 0x1
    lwz r4, 0x1a60(r15)
    slwi r0, r0, 2
    stwx r3, r4, r0
    b lbl_fn_804805F0_00001AA0
lbl_fn_804805F0_00001848:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_804805F0_00001880
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_00001880:
    lwz r4, 0x1a64(r15)
    li r6, 0x0
    lis r3, 0x4000
    lwz r14, 0x1a68(r15)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r14, r4
    addi r5, r15, 0x1a68
    subf r0, r14, r0
    stw r6, 0x68(r1)
    cmplw r3, r0
    stw r6, 0x6c(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    stw r6, 0x78(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_804805F0_000018E8
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_000018E8:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r14, r0
    bge lbl_fn_804805F0_00001938
    addi r5, r14, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x18
    srwi r4, r4, 2
    stw r4, 0x18(r1)
    cmplw r4, r0
    bge lbl_fn_804805F0_0000192C
    addi r3, r1, 0x10
lbl_fn_804805F0_0000192C:
    lwz r0, 0x0(r3)
    add r22, r14, r0
    b lbl_fn_804805F0_0000197C
lbl_fn_804805F0_00001938:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r14, r0
    bge lbl_fn_804805F0_00001974
    addi r3, r14, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0x14(r1)
    cmplw r3, r0
    addi r3, r1, 0x14
    bge lbl_fn_804805F0_00001968
    addi r3, r1, 0x10
lbl_fn_804805F0_00001968:
    lwz r0, 0x0(r3)
    add r22, r14, r0
    b lbl_fn_804805F0_0000197C
lbl_fn_804805F0_00001974:
    lis r3, 0x4000
    subi r22, r3, 0x1
lbl_fn_804805F0_0000197C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r22, r0
    ble lbl_fn_804805F0_000019B0
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_000019B0:
    slwi r3, r22, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r14, r3
    bne lbl_fn_804805F0_000019E4
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804805F0_000019E4:
    lwz r5, 0x1a64(r15)
    lwz r3, 0x6c(r1)
    slwi r0, r5, 2
    stw r22, 0x70(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r14, r0
    stw r3, 0x6c(r1)
    stwx r18, r4, r0
    lwz r0, 0x1a64(r15)
    lwz r18, 0x1a60(r15)
    slwi r0, r0, 2
    add r0, r18, r0
    mr r4, r18
    subf r0, r18, r0
    srawi r0, r0, 2
    addze r22, r0
    subf r0, r22, r5
    stw r0, 0x78(r1)
    slwi r23, r22, 2
    slwi r0, r0, 2
    mr r5, r23
    add r3, r14, r0
    bl memcpy
    mr r3, r18
    mr r5, r23
    li r4, 0x0
    bl memset
    addic. r0, r1, 0x68
    lwz r0, 0x6c(r1)
    lwz r3, 0x1a60(r15)
    li r5, 0x0
    lwz r7, 0x1a68(r15)
    lwz r4, 0x70(r1)
    add r6, r0, r22
    mr r0, r14
    stw r4, 0x1a68(r15)
    stw r7, 0x70(r1)
    stw r0, 0x1a60(r15)
    stw r3, 0x68(r1)
    stw r6, 0x1a64(r15)
    stw r5, 0x6c(r1)
    beq lbl_fn_804805F0_00001AA0
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_00001AA0
    stw r5, 0x6c(r1)
    bl dtor_80084684
lbl_fn_804805F0_00001AA0:
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_00001ADC
    bl fn_8004895C
    lwz r3, lbl_8087EE90
    bl fn_80049654
    lis r7, lbl_80756330@ha
    lwzu r6, lbl_80756330@l(r7)
    lwz r3, lbl_8087EE90
    addi r4, r1, 0x48
    lwz r0, 0x4(r7)
    li r5, 0x2
    stw r6, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_8004829C
lbl_fn_804805F0_00001ADC:
    lwz r0, 0x2a8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804805F0_00001AF4
    mr r3, r0
    lwz r3, 0x68(r3)
    bl fn_800C3094
lbl_fn_804805F0_00001AF4:
    lwz r0, lbl_8087F0A0
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001B08
    mr r3, r15
    bl fn_801839FC
lbl_fn_804805F0_00001B08:
    lwz r3, lbl_8087F0A0
    mr r4, r21
    mr r5, r20
    mr r6, r19
    bl fn_80183D00
    lwz r0, lbl_8087F448
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001B30
    mr r3, r15
    bl fn_8037C8C4
lbl_fn_804805F0_00001B30:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001B44
    mr r3, r15
    bl fn_803E836C
lbl_fn_804805F0_00001B44:
    rlwinm. r0, r17, 0, 17, 17
    beq lbl_fn_804805F0_00001B98
    lwz r0, lbl_8087F8A0
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001B60
    mr r3, r15
    bl fn_80549D90
lbl_fn_804805F0_00001B60:
    lwz r0, lbl_8087F4F0
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001B70
    bl fn_80442F10
lbl_fn_804805F0_00001B70:
    lwz r3, lbl_8087F8A0
    mr r4, r21
    bl fn_80549F18
    lis r6, lbl_807C7030@ha
    lfs f1, lbl_80886F8C
    mr r3, r15
    li r4, 0x0
    addi r6, r6, lbl_807C7030@l
    li r5, 0x1
    bl fn_8047FF70
lbl_fn_804805F0_00001B98:
    rlwinm. r0, r17, 0, 19, 19
    beq lbl_fn_804805F0_00001E20
    lwz r0, lbl_8087F890
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001BB4
    mr r3, r15
    bl fn_805477CC
lbl_fn_804805F0_00001BB4:
    lwz r0, lbl_8087F408
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001BC8
    mr r3, r15
    bl fn_80334B38
lbl_fn_804805F0_00001BC8:
    lwz r0, lbl_8087F428
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001BDC
    mr r3, r15
    bl fn_80365464
lbl_fn_804805F0_00001BDC:
    lwz r0, lbl_8087F4F0
    cmpwi r0, 0x0
    bne lbl_fn_804805F0_00001BEC
    bl fn_80442F10
lbl_fn_804805F0_00001BEC:
    lwz r14, 0x1a6c(r15)
    cmpwi r14, 0x0
    beq lbl_fn_804805F0_00001E20
    rlwinm. r0, r17, 0, 18, 18
    beq lbl_fn_804805F0_00001D3C
    li r18, 0x0
    li r17, 0x0
    b lbl_fn_804805F0_00001C5C
lbl_fn_804805F0_00001C0C:
    lwz r5, 0x84(r14)
    mr r3, r16
    li r4, 0x1
    lwzx r5, r5, r17
    bl fn_80541D00
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_00001C54
    lwz r0, 0x84(r14)
    mr r3, r15
    li r4, 0x1
    add r7, r0, r17
    lwz r5, 0x20(r7)
    addi r6, r7, 0x4
    lfs f1, 0x14(r7)
    bl fn_8047FF70
    lwz r4, 0x84(r14)
    lwzx r0, r4, r17
    stw r0, 0x58(r3)
lbl_fn_804805F0_00001C54:
    addi r18, r18, 0x1
    addi r17, r17, 0x148
lbl_fn_804805F0_00001C5C:
    lwz r0, 0x80(r14)
    cmpw r18, r0
    blt lbl_fn_804805F0_00001C0C
    li r18, 0x0
    li r17, 0x0
    b lbl_fn_804805F0_00001CC4
lbl_fn_804805F0_00001C74:
    lwz r5, 0x8c(r14)
    mr r3, r16
    li r4, 0x2
    lwzx r5, r5, r17
    bl fn_80541D00
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_00001CBC
    lwz r0, 0x8c(r14)
    mr r3, r15
    li r4, 0x2
    add r7, r0, r17
    lwz r5, 0x20(r7)
    addi r6, r7, 0x4
    lfs f1, 0x14(r7)
    bl fn_8047FF70
    lwz r4, 0x8c(r14)
    lwzx r0, r4, r17
    stw r0, 0x58(r3)
lbl_fn_804805F0_00001CBC:
    addi r18, r18, 0x1
    addi r17, r17, 0x148
lbl_fn_804805F0_00001CC4:
    lwz r0, 0x88(r14)
    cmpw r18, r0
    blt lbl_fn_804805F0_00001C74
    li r18, 0x0
    li r17, 0x0
    b lbl_fn_804805F0_00001D2C
lbl_fn_804805F0_00001CDC:
    lwz r5, 0x94(r14)
    mr r3, r16
    li r4, 0x3
    lwzx r5, r5, r17
    bl fn_80541D00
    cmpwi r3, 0x0
    beq lbl_fn_804805F0_00001D24
    lwz r0, 0x94(r14)
    mr r3, r15
    li r4, 0x3
    add r7, r0, r17
    lwz r5, 0x20(r7)
    addi r6, r7, 0x4
    lfs f1, 0x14(r7)
    bl fn_8047FF70
    lwz r4, 0x94(r14)
    lwzx r0, r4, r17
    stw r0, 0x58(r3)
lbl_fn_804805F0_00001D24:
    addi r18, r18, 0x1
    addi r17, r17, 0x148
lbl_fn_804805F0_00001D2C:
    lwz r0, 0x90(r14)
    cmpw r18, r0
    blt lbl_fn_804805F0_00001CDC
    b lbl_fn_804805F0_00001E20
lbl_fn_804805F0_00001D3C:
    li r17, 0x0
    li r16, 0x0
    b lbl_fn_804805F0_00001D7C
lbl_fn_804805F0_00001D48:
    lwz r0, 0x84(r14)
    mr r3, r15
    li r4, 0x1
    add r7, r0, r16
    lwz r5, 0x20(r7)
    addi r6, r7, 0x4
    lfs f1, 0x14(r7)
    bl fn_8047FF70
    lwz r4, 0x84(r14)
    addi r17, r17, 0x1
    lwzx r0, r4, r16
    addi r16, r16, 0x148
    stw r0, 0x58(r3)
lbl_fn_804805F0_00001D7C:
    lwz r0, 0x80(r14)
    cmpw r17, r0
    blt lbl_fn_804805F0_00001D48
    li r17, 0x0
    li r16, 0x0
    b lbl_fn_804805F0_00001DC8
lbl_fn_804805F0_00001D94:
    lwz r0, 0x8c(r14)
    mr r3, r15
    li r4, 0x2
    add r7, r0, r16
    lwz r5, 0x20(r7)
    addi r6, r7, 0x4
    lfs f1, 0x14(r7)
    bl fn_8047FF70
    lwz r4, 0x8c(r14)
    addi r17, r17, 0x1
    lwzx r0, r4, r16
    addi r16, r16, 0x148
    stw r0, 0x58(r3)
lbl_fn_804805F0_00001DC8:
    lwz r0, 0x88(r14)
    cmpw r17, r0
    blt lbl_fn_804805F0_00001D94
    li r17, 0x0
    li r16, 0x0
    b lbl_fn_804805F0_00001E14
lbl_fn_804805F0_00001DE0:
    lwz r0, 0x94(r14)
    mr r3, r15
    li r4, 0x3
    add r7, r0, r16
    lwz r5, 0x20(r7)
    addi r6, r7, 0x4
    lfs f1, 0x14(r7)
    bl fn_8047FF70
    lwz r4, 0x94(r14)
    addi r17, r17, 0x1
    lwzx r0, r4, r16
    addi r16, r16, 0x148
    stw r0, 0x58(r3)
lbl_fn_804805F0_00001E14:
    lwz r0, 0x90(r14)
    cmpw r17, r0
    blt lbl_fn_804805F0_00001DE0
lbl_fn_804805F0_00001E20:
    addi r11, r1, 0x300
    bl _restgpr_14
    lwz r0, 0x304(r1)
    mtlr r0
    addi r1, r1, 0x300
    blr
}
