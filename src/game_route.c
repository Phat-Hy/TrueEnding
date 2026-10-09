#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_80084320(void);
extern void fn_8008510C(void);
extern void fn_800DC288(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80732140[];
extern u8 lbl_80732148[];
extern u8 lbl_807321F0[];
extern u8 lbl_80778610[];
extern u8 lbl_80778658[];
extern u8 lbl_807786A0[];
extern u8 lbl_807786E8[];
extern u8 lbl_80778730[];
extern u8 lbl_80778778[];
extern u8 lbl_807787C0[];
extern u8 lbl_80778808[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_80880BD0;
extern u32 lbl_80880BD4;
extern u32 lbl_80880BD8;
extern u32 lbl_80880BDC;
extern u32 lbl_80880BE0;
extern u32 lbl_80880BE4;

/* Function declarations */
void fn_80086560(void);
void fn_800867A8(void);
void fn_800867B4(void);
void fn_80086844(void);
void fn_8008689C(void);
void fn_80086AE4(void);
void fn_80086AF0(void);
void fn_80086B88(void);
void fn_80086BE0(void);
void fn_80086E30(void);
void fn_80086E70(void);
void fn_80087040(void);
void fn_80087098(void);
void fn_80087270(void);
void fn_8008730C(void);
void fn_80087320(void);
void fn_800874C8(void);
void fn_800875EC(void);
void fn_800875F8(void);
void fn_8008771C(void);
void fn_80087858(void);
void fn_80087994(void);
void fn_80087AA0(void);
void fn_80087BB4(void);
void fn_80087E9C(void);

asm void fn_80086560(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r7, 0x4330
    stw r0, 0x64(r1)
    lwz r0, 0x10(r4)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    mr r28, r5
    lwz r8, 0x0(r6)
    stw r7, 0x28(r1)
    cmpw r8, r0
    stw r7, 0x30(r1)
    bge lbl_fn_80086560_00000220
    lwz r0, 0xc(r4)
    cmpw r0, r8
    bgt lbl_fn_80086560_00000214
    subf r0, r0, r8
    lis r3, lbl_80732140@ha
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lwz r0, 0x14(r4)
    lfd f1, lbl_80732140@l(r3)
    lfd f0, 0x28(r1)
    cmpw r0, r8
    lfs f5, lbl_80880BD0
    fsubs f1, f0, f1
    lfs f0, 0x4(r4)
    fmadds f31, f5, f1, f0
    bne lbl_fn_80086560_000000C4
    lwz r0, 0x18(r4)
    fmr f2, f31
    lis r5, 0xff81
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x0(r4)
    lfs f3, lbl_80880BD4
    lfs f4, 0x8(r4)
    subi r0, r5, 0x7f01
    beq lbl_fn_80086560_000000BC
    addi r0, r5, -0x8000
lbl_fn_80086560_000000BC:
    mr r4, r0
    bl fn_80060D58
lbl_fn_80086560_000000C4:
    xoris r0, r28, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80732140@ha
    lfs f4, lbl_80880BD0
    lfd f3, lbl_80732140@l(r3)
    fmr f2, f31
    lfd f1, 0x30(r1)
    fmr f5, f4
    lfs f0, 0x0(r30)
    addi r4, r29, 0x4
    fsubs f1, f1, f3
    lwz r3, lbl_8087EEB0
    li r5, -0x1
    lfs f3, lbl_80880BD4
    li r6, 0x0
    fmadds f1, f4, f1, f0
    lfs f6, lbl_80880BD8
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x14(r30)
    lwz r0, 0x0(r31)
    cmpw r3, r0
    bne lbl_fn_80086560_00000194
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80086560_00000194
    addi r3, r29, 0x68
    bl strlen
    stw r3, 0x2c(r1)
    lis r3, lbl_80732148@ha
    lfd f6, lbl_80732148@l(r3)
    fmr f2, f31
    lfd f0, 0x28(r1)
    addi r4, r29, 0x68
    lfs f3, 0x0(r30)
    li r5, -0x1
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    li r6, 0x0
    lfs f4, lbl_80880BD0
    li r7, 0x0
    fadds f1, f3, f1
    lfs f0, lbl_80880BDC
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f3, lbl_80880BD4
    lfs f6, lbl_80880BD8
    bl fn_800616C0
    b lbl_fn_80086560_00000214
lbl_fn_80086560_00000194:
    lwz r4, 0x58(r29)
    lis r6, lbl_807321F0@ha
    addi r6, r6, lbl_807321F0@l
    addi r3, r1, 0x8
    lwz r5, 0x0(r4)
    addi r4, r6, 0x6
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    stw r3, 0x34(r1)
    lis r3, lbl_80732148@ha
    lfd f6, lbl_80732148@l(r3)
    fmr f2, f31
    lfd f0, 0x30(r1)
    addi r4, r1, 0x8
    lfs f3, 0x0(r30)
    li r5, -0x1
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    li r6, 0x0
    lfs f4, lbl_80880BD0
    li r7, 0x0
    fadds f1, f3, f1
    lfs f0, lbl_80880BDC
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f3, lbl_80880BD4
    lfs f6, lbl_80880BD8
    bl fn_800616C0
lbl_fn_80086560_00000214:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_80086560_00000220:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800867A8(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x68(r3)
    blr
}

asm void fn_800867B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x68
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_800867B4_00000288
    addi r3, r31, 0x68
    bl fn_800DC288
    lwz r3, 0x58(r31)
    stfs f1, 0x0(r3)
lbl_fn_800867B4_00000288:
    lwz r3, 0x58(r31)
    lfs f0, 0x5c(r31)
    lfs f1, 0x0(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_800867B4_000002A4
    stfs f0, 0x0(r3)
    b lbl_fn_800867B4_000002B4
lbl_fn_800867B4_000002A4:
    lfs f0, 0x60(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_800867B4_000002B4
    stfs f0, 0x0(r3)
lbl_fn_800867B4_000002B4:
    lwz r12, 0x54(r31)
    cmpwi r12, 0x0
    beq lbl_fn_800867B4_000002D0
    addi r4, r31, 0x58
    lwz r3, 0x50(r31)
    mtctr r12
    bctrl
lbl_fn_800867B4_000002D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80086844(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x68
    bl fn_8008510C
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80086844_00000328
    lwz r12, 0x54(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80086844_00000328
    addi r4, r31, 0x58
    lwz r3, 0x50(r31)
    mtctr r12
    bctrl
lbl_fn_80086844_00000328:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008689C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r7, 0x4330
    stw r0, 0x64(r1)
    lwz r0, 0x10(r4)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    mr r28, r5
    lwz r8, 0x0(r6)
    stw r7, 0x28(r1)
    cmpw r8, r0
    stw r7, 0x30(r1)
    bge lbl_fn_8008689C_0000055C
    lwz r0, 0xc(r4)
    cmpw r0, r8
    bgt lbl_fn_8008689C_00000550
    subf r0, r0, r8
    lis r3, lbl_80732140@ha
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lwz r0, 0x14(r4)
    lfd f1, lbl_80732140@l(r3)
    lfd f0, 0x28(r1)
    cmpw r0, r8
    lfs f5, lbl_80880BD0
    fsubs f1, f0, f1
    lfs f0, 0x4(r4)
    fmadds f31, f5, f1, f0
    bne lbl_fn_8008689C_00000400
    lwz r0, 0x18(r4)
    fmr f2, f31
    lis r5, 0xff81
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x0(r4)
    lfs f3, lbl_80880BD4
    lfs f4, 0x8(r4)
    subi r0, r5, 0x7f01
    beq lbl_fn_8008689C_000003F8
    addi r0, r5, -0x8000
lbl_fn_8008689C_000003F8:
    mr r4, r0
    bl fn_80060D58
lbl_fn_8008689C_00000400:
    xoris r0, r28, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80732140@ha
    lfs f4, lbl_80880BD0
    lfd f3, lbl_80732140@l(r3)
    fmr f2, f31
    lfd f1, 0x30(r1)
    fmr f5, f4
    lfs f0, 0x0(r30)
    addi r4, r29, 0x4
    fsubs f1, f1, f3
    lwz r3, lbl_8087EEB0
    li r5, -0x1
    lfs f3, lbl_80880BD4
    li r6, 0x0
    fmadds f1, f4, f1, f0
    lfs f6, lbl_80880BD8
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x14(r30)
    lwz r0, 0x0(r31)
    cmpw r3, r0
    bne lbl_fn_8008689C_000004D0
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8008689C_000004D0
    addi r3, r29, 0x68
    bl strlen
    stw r3, 0x2c(r1)
    lis r3, lbl_80732148@ha
    lfd f6, lbl_80732148@l(r3)
    fmr f2, f31
    lfd f0, 0x28(r1)
    addi r4, r29, 0x68
    lfs f3, 0x0(r30)
    li r5, -0x1
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    li r6, 0x0
    lfs f4, lbl_80880BD0
    li r7, 0x0
    fadds f1, f3, f1
    lfs f0, lbl_80880BDC
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f3, lbl_80880BD4
    lfs f6, lbl_80880BD8
    bl fn_800616C0
    b lbl_fn_8008689C_00000550
lbl_fn_8008689C_000004D0:
    lwz r4, 0x58(r29)
    lis r5, lbl_807321F0@ha
    addi r5, r5, lbl_807321F0@l
    addi r3, r1, 0x8
    lfs f1, 0x0(r4)
    addi r4, r5, 0xb
    crset 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    stw r3, 0x34(r1)
    lis r3, lbl_80732148@ha
    lfd f6, lbl_80732148@l(r3)
    fmr f2, f31
    lfd f0, 0x30(r1)
    addi r4, r1, 0x8
    lfs f3, 0x0(r30)
    li r5, -0x1
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    li r6, 0x0
    lfs f4, lbl_80880BD0
    li r7, 0x0
    fadds f1, f3, f1
    lfs f0, lbl_80880BDC
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f3, lbl_80880BD4
    lfs f6, lbl_80880BD8
    bl fn_800616C0
lbl_fn_8008689C_00000550:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_8008689C_0000055C:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80086AE4(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x68(r3)
    blr
}

asm void fn_80086AF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x68
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80086AF0_000005CC
    addi r3, r31, 0x68
    bl fn_800DC288
    lfs f0, lbl_80880BE0
    lwz r3, 0x58(r31)
    fmuls f0, f0, f1
    stfs f0, 0x0(r3)
lbl_fn_80086AF0_000005CC:
    lwz r3, 0x58(r31)
    lfs f0, 0x5c(r31)
    lfs f1, 0x0(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_80086AF0_000005E8
    stfs f0, 0x0(r3)
    b lbl_fn_80086AF0_000005F8
lbl_fn_80086AF0_000005E8:
    lfs f0, 0x60(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_80086AF0_000005F8
    stfs f0, 0x0(r3)
lbl_fn_80086AF0_000005F8:
    lwz r12, 0x54(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80086AF0_00000614
    addi r4, r31, 0x58
    lwz r3, 0x50(r31)
    mtctr r12
    bctrl
lbl_fn_80086AF0_00000614:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80086B88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x68
    bl fn_8008510C
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80086B88_0000066C
    lwz r12, 0x54(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80086B88_0000066C
    addi r4, r31, 0x58
    lwz r3, 0x50(r31)
    mtctr r12
    bctrl
lbl_fn_80086B88_0000066C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80086BE0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r7, 0x4330
    stw r0, 0x64(r1)
    lwz r0, 0x10(r4)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    mr r28, r5
    lwz r8, 0x0(r6)
    stw r7, 0x28(r1)
    cmpw r8, r0
    stw r7, 0x30(r1)
    bge lbl_fn_80086BE0_000008A8
    lwz r0, 0xc(r4)
    cmpw r0, r8
    bgt lbl_fn_80086BE0_0000089C
    subf r0, r0, r8
    lis r3, lbl_80732140@ha
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lwz r0, 0x14(r4)
    lfd f1, lbl_80732140@l(r3)
    lfd f0, 0x28(r1)
    cmpw r0, r8
    lfs f5, lbl_80880BD0
    fsubs f1, f0, f1
    lfs f0, 0x4(r4)
    fmadds f31, f5, f1, f0
    bne lbl_fn_80086BE0_00000744
    lwz r0, 0x18(r4)
    fmr f2, f31
    lis r5, 0xff81
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x0(r4)
    lfs f3, lbl_80880BD4
    lfs f4, 0x8(r4)
    subi r0, r5, 0x7f01
    beq lbl_fn_80086BE0_0000073C
    addi r0, r5, -0x8000
lbl_fn_80086BE0_0000073C:
    mr r4, r0
    bl fn_80060D58
lbl_fn_80086BE0_00000744:
    xoris r0, r28, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80732140@ha
    lfs f4, lbl_80880BD0
    lfd f3, lbl_80732140@l(r3)
    fmr f2, f31
    lfd f1, 0x30(r1)
    fmr f5, f4
    lfs f0, 0x0(r30)
    addi r4, r29, 0x4
    fsubs f1, f1, f3
    lwz r3, lbl_8087EEB0
    li r5, -0x1
    lfs f3, lbl_80880BD4
    li r6, 0x0
    fmadds f1, f4, f1, f0
    lfs f6, lbl_80880BD8
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x14(r30)
    lwz r0, 0x0(r31)
    cmpw r3, r0
    bne lbl_fn_80086BE0_00000814
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80086BE0_00000814
    addi r3, r29, 0x68
    bl strlen
    stw r3, 0x2c(r1)
    lis r3, lbl_80732148@ha
    lfd f6, lbl_80732148@l(r3)
    fmr f2, f31
    lfd f0, 0x28(r1)
    addi r4, r29, 0x68
    lfs f3, 0x0(r30)
    li r5, -0x1
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    li r6, 0x0
    lfs f4, lbl_80880BD0
    li r7, 0x0
    fadds f1, f3, f1
    lfs f0, lbl_80880BDC
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f3, lbl_80880BD4
    lfs f6, lbl_80880BD8
    bl fn_800616C0
    b lbl_fn_80086BE0_0000089C
lbl_fn_80086BE0_00000814:
    lwz r3, 0x58(r29)
    lis r4, lbl_807321F0@ha
    addi r4, r4, lbl_807321F0@l
    lfs f0, lbl_80880BE4
    lfs f1, 0x0(r3)
    addi r3, r1, 0x8
    addi r4, r4, 0xb
    fmuls f1, f0, f1
    crset 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    stw r3, 0x34(r1)
    lis r3, lbl_80732148@ha
    lfd f6, lbl_80732148@l(r3)
    fmr f2, f31
    lfd f0, 0x30(r1)
    addi r4, r1, 0x8
    lfs f3, 0x0(r30)
    li r5, -0x1
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    li r6, 0x0
    lfs f4, lbl_80880BD0
    li r7, 0x0
    fadds f1, f3, f1
    lfs f0, lbl_80880BDC
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f3, lbl_80880BD4
    lfs f6, lbl_80880BD8
    bl fn_800616C0
lbl_fn_80086BE0_0000089C:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_80086BE0_000008A8:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80086E30(void)
{
    nofralloc
    lwz r4, 0x58(r3)
    lwz r0, 0x0(r4)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x0(r4)
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r12, 0x54(r3)
    cmpwi r12, 0x0
    beqlr
    addi r4, r3, 0x58
    lwz r3, 0x50(r3)
    mtctr r12
    bctr
    blr
}

asm void fn_80086E70(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    lwz r0, 0x10(r4)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r5
    stw r28, 0x40(r1)
    mr r28, r3
    lwz r7, 0x0(r6)
    cmpw r7, r0
    bge lbl_fn_80086E70_00000AB8
    lwz r0, 0xc(r4)
    cmpw r0, r7
    bgt lbl_fn_80086E70_00000AAC
    subf r0, r0, r7
    lis r3, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lis r5, lbl_80732140@ha
    lwz r0, 0x14(r4)
    stw r3, 0x28(r1)
    lfd f1, lbl_80732140@l(r5)
    cmpw r0, r7
    lfd f0, 0x28(r1)
    lfs f5, lbl_80880BD0
    fsubs f1, f0, f1
    lfs f0, 0x4(r4)
    fmadds f31, f5, f1, f0
    bne lbl_fn_80086E70_000009BC
    fmr f2, f31
    lwz r3, lbl_8087EEB0
    lfs f1, 0x0(r4)
    lis r5, 0xff81
    lfs f4, 0x8(r4)
    subi r4, r5, 0x7f01
    lfs f3, lbl_80880BD4
    bl fn_80060D58
lbl_fn_80086E70_000009BC:
    xoris r3, r29, 0x8000
    lis r0, 0x4330
    stw r3, 0x2c(r1)
    lis r4, lbl_80732140@ha
    lfd f3, lbl_80732140@l(r4)
    fmr f2, f31
    stw r0, 0x28(r1)
    addi r4, r28, 0x4
    lfs f4, lbl_80880BD0
    li r5, -0x1
    lfd f1, 0x28(r1)
    lfs f0, 0x0(r30)
    fmr f5, f4
    fsubs f1, f1, f3
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80880BD4
    li r6, 0x0
    lfs f6, lbl_80880BD8
    fmadds f1, f4, f1, f0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r4, 0x58(r28)
    lis r6, lbl_807321F0@ha
    addi r6, r6, lbl_807321F0@l
    addi r3, r1, 0x8
    lwz r0, 0x0(r4)
    addi r4, r6, 0x10
    addi r5, r6, 0x18
    cmpwi r0, 0x0
    beq lbl_fn_80086E70_00000A3C
    addi r5, r6, 0x13
lbl_fn_80086E70_00000A3C:
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    stw r3, 0x34(r1)
    lis r0, 0x4330
    lis r3, lbl_80732148@ha
    lfs f4, lbl_80880BD0
    stw r0, 0x30(r1)
    fmr f2, f31
    lfd f6, lbl_80732148@l(r3)
    fmr f5, f4
    lfd f0, 0x30(r1)
    addi r4, r1, 0x8
    lfs f3, 0x0(r30)
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    lfs f0, lbl_80880BDC
    li r5, -0x1
    fadds f1, f3, f1
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80880BD4
    li r6, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f6, lbl_80880BD8
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80086E70_00000AAC:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_80086E70_00000AB8:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80087040(void)
{
    nofralloc
    lwz r6, 0x58(r3)
    lwz r5, 0x5c(r3)
    lwz r4, 0x0(r6)
    and r0, r5, r4
    cmplw r5, r0
    bne lbl_fn_80087040_00000B04
    andc r0, r4, r5
    stw r0, 0x0(r6)
    b lbl_fn_80087040_00000B0C
lbl_fn_80087040_00000B04:
    or r0, r4, r5
    stw r0, 0x0(r6)
lbl_fn_80087040_00000B0C:
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r12, 0x54(r3)
    cmpwi r12, 0x0
    beqlr
    addi r4, r3, 0x58
    lwz r3, 0x50(r3)
    mtctr r12
    bctr
    blr
}

asm void fn_80087098(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    lwz r0, 0x10(r4)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    mr r28, r5
    lwz r7, 0x0(r6)
    cmpw r7, r0
    bge lbl_fn_80087098_00000CE8
    lwz r0, 0xc(r4)
    cmpw r0, r7
    bgt lbl_fn_80087098_00000CDC
    subf r0, r0, r7
    lis r3, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lis r5, lbl_80732140@ha
    lwz r0, 0x14(r4)
    stw r3, 0x28(r1)
    lfd f1, lbl_80732140@l(r5)
    cmpw r0, r7
    lfd f0, 0x28(r1)
    lfs f5, lbl_80880BD0
    fsubs f1, f0, f1
    lfs f0, 0x4(r4)
    fmadds f31, f5, f1, f0
    bne lbl_fn_80087098_00000BE4
    fmr f2, f31
    lwz r3, lbl_8087EEB0
    lfs f1, 0x0(r4)
    lis r5, 0xff81
    lfs f4, 0x8(r4)
    subi r4, r5, 0x7f01
    lfs f3, lbl_80880BD4
    bl fn_80060D58
lbl_fn_80087098_00000BE4:
    xoris r3, r28, 0x8000
    lis r0, 0x4330
    stw r3, 0x2c(r1)
    lis r4, lbl_80732140@ha
    lfd f3, lbl_80732140@l(r4)
    fmr f2, f31
    stw r0, 0x28(r1)
    addi r4, r29, 0x4
    lfs f4, lbl_80880BD0
    li r5, -0x1
    lfd f1, 0x28(r1)
    lfs f0, 0x0(r30)
    fmr f5, f4
    fsubs f1, f1, f3
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80880BD4
    li r6, 0x0
    lfs f6, lbl_80880BD8
    fmadds f1, f4, f1, f0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x58(r29)
    lis r6, lbl_807321F0@ha
    addi r6, r6, lbl_807321F0@l
    lwz r7, 0x5c(r29)
    lwz r0, 0x0(r3)
    addi r3, r1, 0x8
    addi r4, r6, 0x10
    addi r5, r6, 0x18
    and r0, r7, r0
    cmplw r7, r0
    bne lbl_fn_80087098_00000C6C
    addi r5, r6, 0x13
lbl_fn_80087098_00000C6C:
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    stw r3, 0x34(r1)
    lis r0, 0x4330
    lis r3, lbl_80732148@ha
    lfs f4, lbl_80880BD0
    stw r0, 0x30(r1)
    fmr f2, f31
    lfd f6, lbl_80732148@l(r3)
    fmr f5, f4
    lfd f0, 0x30(r1)
    addi r4, r1, 0x8
    lfs f3, 0x0(r30)
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    lfs f0, lbl_80880BDC
    li r5, -0x1
    fadds f1, f3, f1
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80880BD4
    li r6, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f6, lbl_80880BD8
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80087098_00000CDC:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_80087098_00000CE8:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80087270(void)
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
    beq lbl_fn_80087270_00000D8C
    lis r4, lbl_80778610@ha
    lwz r5, 0x58(r3)
    addi r4, r4, lbl_80778610@l
    stw r4, 0x0(r3)
    b lbl_fn_80087270_00000D74
lbl_fn_80087270_00000D4C:
    cmpwi r5, 0x0
    lwz r31, 0x44(r5)
    beq lbl_fn_80087270_00000D70
    lwz r12, 0x0(r5)
    mr r3, r5
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80087270_00000D70:
    mr r5, r31
lbl_fn_80087270_00000D74:
    cmpwi r5, 0x0
    bne lbl_fn_80087270_00000D4C
    cmpwi r30, 0x0
    ble lbl_fn_80087270_00000D8C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80087270_00000D8C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8008730C(void)
{
    nofralloc
    lwz r0, 0x60(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x60(r3)
    blr
}

asm void fn_80087320(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lwz r0, 0x10(r4)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    lwz r7, 0x0(r6)
    cmpw r7, r0
    bge lbl_fn_80087320_00000F40
    lwz r0, 0xc(r4)
    cmpw r0, r7
    bgt lbl_fn_80087320_00000EF4
    subf r0, r0, r7
    lis r3, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lis r5, lbl_80732140@ha
    lwz r0, 0x14(r4)
    stw r3, 0x28(r1)
    lfd f1, lbl_80732140@l(r5)
    cmpw r0, r7
    lfd f0, 0x28(r1)
    lfs f5, lbl_80880BD0
    fsubs f1, f0, f1
    lfs f0, 0x4(r4)
    fmadds f31, f5, f1, f0
    bne lbl_fn_80087320_00000E6C
    fmr f2, f31
    lwz r3, lbl_8087EEB0
    lfs f1, 0x0(r4)
    lis r5, 0xff81
    lfs f4, 0x8(r4)
    subi r4, r5, 0x7f01
    lfs f3, lbl_80880BD4
    bl fn_80060D58
lbl_fn_80087320_00000E6C:
    lwz r0, 0x60(r28)
    lis r4, lbl_807321F0@ha
    addi r4, r4, lbl_807321F0@l
    addi r6, r28, 0x4
    cmpwi r0, 0x0
    addi r3, r1, 0x8
    addi r4, r4, 0x1e
    li r5, 0x2b
    beq lbl_fn_80087320_00000E94
    li r5, 0x2d
lbl_fn_80087320_00000E94:
    crclr 6
    bl sprintf
    xoris r3, r30, 0x8000
    lis r0, 0x4330
    stw r3, 0x2c(r1)
    lis r4, lbl_80732140@ha
    lfd f3, lbl_80732140@l(r4)
    fmr f2, f31
    stw r0, 0x28(r1)
    addi r4, r1, 0x8
    lfs f4, lbl_80880BD0
    li r5, -0x1
    lfd f1, 0x28(r1)
    lfs f0, 0x0(r29)
    fmr f5, f4
    fsubs f1, f1, f3
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80880BD4
    li r6, 0x0
    lfs f6, lbl_80880BD8
    fmadds f1, f4, f1, f0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80087320_00000EF4:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    lwz r0, 0x60(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80087320_00000F40
    lwz r28, 0x58(r28)
    b lbl_fn_80087320_00000F38
lbl_fn_80087320_00000F14:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    mr r6, r31
    lwz r12, 0x18(r12)
    addi r5, r30, 0x1
    mtctr r12
    bctrl
    lwz r28, 0x44(r28)
lbl_fn_80087320_00000F38:
    cmpwi r28, 0x0
    bne lbl_fn_80087320_00000F14
lbl_fn_80087320_00000F40:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800874C8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r11, lbl_807321F0@ha
    stw r0, 0x34(r1)
    addi r11, r11, lbl_807321F0@l
    stmw r23, 0xc(r1)
    mr r25, r5
    mr r23, r3
    mr r24, r4
    mr r27, r7
    addi r5, r11, 0x23
    mr r26, r6
    mr r28, r8
    mr r29, r9
    mr r30, r10
    mr r6, r5
    li r3, 0xa8
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800874C8_00001030
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r24, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_800874C8_00000FF8
    mr r3, r24
    bl strlen
    mr r5, r3
    mr r4, r24
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800874C8_00000FF8:
    li r0, 0x0
    stw r0, 0x44(r31)
    lis r3, lbl_807787C0@ha
    stw r23, 0x48(r31)
    addi r3, r3, lbl_807787C0@l
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    stw r0, 0x54(r31)
    stw r3, 0x0(r31)
    stw r25, 0x58(r31)
    stw r26, 0x5c(r31)
    stw r27, 0x60(r31)
    stw r28, 0x64(r31)
    stb r0, 0x68(r31)
lbl_fn_800874C8_00001030:
    cmpwi r31, 0x0
    beq lbl_fn_800874C8_00001078
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r23)
    cmpwi r0, 0x0
    bne lbl_fn_800874C8_0000106C
    stw r31, 0x58(r23)
    stw r31, 0x5c(r23)
    b lbl_fn_800874C8_00001078
lbl_fn_800874C8_0000106C:
    lwz r3, 0x5c(r23)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r23)
lbl_fn_800874C8_00001078:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800875EC(void)
{
    nofralloc
    stw r4, 0x54(r3)
    stw r5, 0x50(r3)
    blr
}

asm void fn_800875F8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r11, lbl_807321F0@ha
    stw r0, 0x34(r1)
    addi r11, r11, lbl_807321F0@l
    stmw r23, 0xc(r1)
    mr r25, r5
    mr r23, r3
    mr r24, r4
    mr r27, r7
    addi r5, r11, 0x23
    mr r26, r6
    mr r28, r8
    mr r29, r9
    mr r30, r10
    mr r6, r5
    li r3, 0xa8
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800875F8_00001160
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r24, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_800875F8_00001128
    mr r3, r24
    bl strlen
    mr r5, r3
    mr r4, r24
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800875F8_00001128:
    li r0, 0x0
    stw r0, 0x44(r31)
    lis r3, lbl_80778778@ha
    stw r23, 0x48(r31)
    addi r3, r3, lbl_80778778@l
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    stw r0, 0x54(r31)
    stw r3, 0x0(r31)
    stw r25, 0x58(r31)
    stw r26, 0x5c(r31)
    stw r27, 0x60(r31)
    stw r28, 0x64(r31)
    stb r0, 0x68(r31)
lbl_fn_800875F8_00001160:
    cmpwi r31, 0x0
    beq lbl_fn_800875F8_000011A8
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r23)
    cmpwi r0, 0x0
    bne lbl_fn_800875F8_0000119C
    stw r31, 0x58(r23)
    stw r31, 0x5c(r23)
    b lbl_fn_800875F8_000011A8
lbl_fn_800875F8_0000119C:
    lwz r3, 0x5c(r23)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r23)
lbl_fn_800875F8_000011A8:
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8008771C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x44(r1)
    addi r8, r8, lbl_807321F0@l
    stfd f31, 0x38(r1)
    fmr f31, f3
    stfd f30, 0x30(r1)
    fmr f30, f2
    stfd f29, 0x28(r1)
    fmr f29, f1
    stmw r26, 0x10(r1)
    mr r28, r5
    mr r26, r3
    mr r27, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0xa8
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8008771C_00001290
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r27, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_8008771C_00001258
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8008771C_00001258:
    li r0, 0x0
    stw r0, 0x44(r31)
    lis r3, lbl_80778730@ha
    stw r26, 0x48(r31)
    addi r3, r3, lbl_80778730@l
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    stw r0, 0x54(r31)
    stw r3, 0x0(r31)
    stw r28, 0x58(r31)
    stfs f29, 0x5c(r31)
    stfs f30, 0x60(r31)
    stfs f31, 0x64(r31)
    stb r0, 0x68(r31)
lbl_fn_8008771C_00001290:
    cmpwi r31, 0x0
    beq lbl_fn_8008771C_000012D8
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8008771C_000012CC
    stw r31, 0x58(r26)
    stw r31, 0x5c(r26)
    b lbl_fn_8008771C_000012D8
lbl_fn_8008771C_000012CC:
    lwz r3, 0x5c(r26)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r26)
lbl_fn_8008771C_000012D8:
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    lfd f29, 0x28(r1)
    lmw r26, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80087858(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x44(r1)
    addi r8, r8, lbl_807321F0@l
    stfd f31, 0x38(r1)
    fmr f31, f3
    stfd f30, 0x30(r1)
    fmr f30, f2
    stfd f29, 0x28(r1)
    fmr f29, f1
    stmw r26, 0x10(r1)
    mr r28, r5
    mr r26, r3
    mr r27, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0xa8
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80087858_000013CC
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r27, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087858_00001394
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087858_00001394:
    li r0, 0x0
    stw r0, 0x44(r31)
    lis r3, lbl_80778658@ha
    stw r26, 0x48(r31)
    addi r3, r3, lbl_80778658@l
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    stw r0, 0x54(r31)
    stw r3, 0x0(r31)
    stw r28, 0x58(r31)
    stfs f29, 0x5c(r31)
    stfs f30, 0x60(r31)
    stfs f31, 0x64(r31)
    stb r0, 0x68(r31)
lbl_fn_80087858_000013CC:
    cmpwi r31, 0x0
    beq lbl_fn_80087858_00001414
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80087858_00001408
    stw r31, 0x58(r26)
    stw r31, 0x5c(r26)
    b lbl_fn_80087858_00001414
lbl_fn_80087858_00001408:
    lwz r3, 0x5c(r26)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r26)
lbl_fn_80087858_00001414:
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    lfd f29, 0x28(r1)
    lmw r26, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80087994(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x24(r1)
    addi r8, r8, lbl_807321F0@l
    stmw r26, 0x8(r1)
    mr r28, r5
    mr r26, r3
    mr r27, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0x5c
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80087994_000014E4
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r27, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087994_000014B8
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087994_000014B8:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_807786E8@ha
    li r0, 0x1
    stw r26, 0x48(r31)
    addi r3, r3, lbl_807786E8@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r28, 0x58(r31)
lbl_fn_80087994_000014E4:
    cmpwi r31, 0x0
    beq lbl_fn_80087994_0000152C
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80087994_00001520
    stw r31, 0x58(r26)
    stw r31, 0x5c(r26)
    b lbl_fn_80087994_0000152C
lbl_fn_80087994_00001520:
    lwz r3, 0x5c(r26)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r26)
lbl_fn_80087994_0000152C:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80087AA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r9, lbl_807321F0@ha
    stw r0, 0x34(r1)
    addi r9, r9, lbl_807321F0@l
    stmw r25, 0x14(r1)
    mr r27, r5
    mr r25, r3
    mr r26, r4
    mr r29, r7
    addi r5, r9, 0x23
    mr r28, r6
    mr r30, r8
    mr r6, r5
    li r3, 0x60
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80087AA0_000015F8
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r26, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087AA0_000015C8
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087AA0_000015C8:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_807786A0@ha
    li r0, 0x1
    stw r25, 0x48(r31)
    addi r3, r3, lbl_807786A0@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r27, 0x58(r31)
    stw r28, 0x5c(r31)
lbl_fn_80087AA0_000015F8:
    cmpwi r31, 0x0
    beq lbl_fn_80087AA0_00001640
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r25)
    cmpwi r0, 0x0
    bne lbl_fn_80087AA0_00001634
    stw r31, 0x58(r25)
    stw r31, 0x5c(r25)
    b lbl_fn_80087AA0_00001640
lbl_fn_80087AA0_00001634:
    lwz r3, 0x5c(r25)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r25)
lbl_fn_80087AA0_00001640:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80087BB4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x44(r1)
    addi r8, r8, lbl_807321F0@l
    stfd f31, 0x38(r1)
    fmr f31, f3
    stfd f30, 0x30(r1)
    fmr f30, f2
    stfd f29, 0x28(r1)
    fmr f29, f1
    stmw r25, 0xc(r1)
    mr r28, r5
    mr r27, r3
    mr r25, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0x64
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80087BB4_00001724
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087BB4_000016F0
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087BB4_000016F0:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_80778610@ha
    li r0, 0x1
    stw r27, 0x48(r31)
    addi r3, r3, lbl_80778610@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
lbl_fn_80087BB4_00001724:
    cmpwi r31, 0x0
    beq lbl_fn_80087BB4_0000191C
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r26, r8, 0x24
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80087BB4_000017C8
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r26, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087BB4_00001790
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r25, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087BB4_00001790:
    li r0, 0x0
    stw r0, 0x44(r25)
    lis r3, lbl_80778730@ha
    stw r31, 0x48(r25)
    addi r3, r3, lbl_80778730@l
    stw r0, 0x4c(r25)
    stw r0, 0x50(r25)
    stw r0, 0x54(r25)
    stw r3, 0x0(r25)
    stw r28, 0x58(r25)
    stfs f29, 0x5c(r25)
    stfs f30, 0x60(r25)
    stfs f31, 0x64(r25)
    stb r0, 0x68(r25)
lbl_fn_80087BB4_000017C8:
    cmpwi r25, 0x0
    beq lbl_fn_80087BB4_00001810
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80087BB4_00001804
    stw r25, 0x58(r31)
    stw r25, 0x5c(r31)
    b lbl_fn_80087BB4_00001810
lbl_fn_80087BB4_00001804:
    lwz r3, 0x5c(r31)
    stw r25, 0x44(r3)
    stw r25, 0x5c(r31)
lbl_fn_80087BB4_00001810:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x26
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80087BB4_000018B0
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087BB4_00001874
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087BB4_00001874:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x4
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80087BB4_000018B0:
    cmpwi r26, 0x0
    beq lbl_fn_80087BB4_000018F8
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80087BB4_000018EC
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80087BB4_000018F8
lbl_fn_80087BB4_000018EC:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80087BB4_000018F8:
    lwz r0, 0x58(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80087BB4_00001910
    stw r31, 0x58(r27)
    stw r31, 0x5c(r27)
    b lbl_fn_80087BB4_0000191C
lbl_fn_80087BB4_00001910:
    lwz r3, 0x5c(r27)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r27)
lbl_fn_80087BB4_0000191C:
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    lfd f29, 0x28(r1)
    lmw r25, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80087E9C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, lbl_807321F0@ha
    stw r0, 0x44(r1)
    addi r8, r8, lbl_807321F0@l
    stfd f31, 0x38(r1)
    fmr f31, f3
    stfd f30, 0x30(r1)
    fmr f30, f2
    stfd f29, 0x28(r1)
    fmr f29, f1
    stmw r25, 0xc(r1)
    mr r28, r5
    mr r27, r3
    mr r25, r4
    mr r30, r7
    addi r5, r8, 0x23
    mr r29, r6
    li r3, 0x64
    mr r6, r5
    li r4, 0xe
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80087E9C_00001A0C
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087E9C_000019D8
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r31, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087E9C_000019D8:
    li r4, 0x0
    stw r4, 0x44(r31)
    lis r3, lbl_80778610@ha
    li r0, 0x1
    stw r27, 0x48(r31)
    addi r3, r3, lbl_80778610@l
    stw r0, 0x4c(r31)
    stw r4, 0x50(r31)
    stw r4, 0x54(r31)
    stw r3, 0x0(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
lbl_fn_80087E9C_00001A0C:
    cmpwi r31, 0x0
    beq lbl_fn_80087E9C_00001CEC
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r26, r8, 0x24
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80087E9C_00001AB0
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r26, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087E9C_00001A78
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r25, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087E9C_00001A78:
    li r0, 0x0
    stw r0, 0x44(r25)
    lis r3, lbl_80778730@ha
    stw r31, 0x48(r25)
    addi r3, r3, lbl_80778730@l
    stw r0, 0x4c(r25)
    stw r0, 0x50(r25)
    stw r0, 0x54(r25)
    stw r3, 0x0(r25)
    stw r28, 0x58(r25)
    stfs f29, 0x5c(r25)
    stfs f30, 0x60(r25)
    stfs f31, 0x64(r25)
    stb r0, 0x68(r25)
lbl_fn_80087E9C_00001AB0:
    cmpwi r25, 0x0
    beq lbl_fn_80087E9C_00001AF8
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80087E9C_00001AEC
    stw r25, 0x58(r31)
    stw r25, 0x5c(r31)
    b lbl_fn_80087E9C_00001AF8
lbl_fn_80087E9C_00001AEC:
    lwz r3, 0x5c(r31)
    stw r25, 0x44(r3)
    stw r25, 0x5c(r31)
lbl_fn_80087E9C_00001AF8:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x26
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80087E9C_00001B98
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087E9C_00001B5C
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087E9C_00001B5C:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x4
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80087E9C_00001B98:
    cmpwi r26, 0x0
    beq lbl_fn_80087E9C_00001BE0
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80087E9C_00001BD4
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80087E9C_00001BE0
lbl_fn_80087E9C_00001BD4:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80087E9C_00001BE0:
    lis r8, lbl_807321F0@ha
    li r3, 0xa8
    addi r8, r8, lbl_807321F0@l
    li r4, 0xe
    addi r5, r8, 0x23
    li r7, 0x0
    mr r6, r5
    addi r25, r8, 0x28
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80087E9C_00001C80
    addi r0, r3, 0x4
    lis r4, lbl_80778808@ha
    cmplw r25, r0
    addi r4, r4, lbl_80778808@l
    stw r4, 0x0(r3)
    beq lbl_fn_80087E9C_00001C44
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r26, 0x4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80087E9C_00001C44:
    li r4, 0x0
    stw r4, 0x44(r26)
    lis r3, lbl_80778730@ha
    addi r0, r28, 0x8
    stw r31, 0x48(r26)
    addi r3, r3, lbl_80778730@l
    stw r4, 0x4c(r26)
    stw r4, 0x50(r26)
    stw r4, 0x54(r26)
    stw r3, 0x0(r26)
    stw r0, 0x58(r26)
    stfs f29, 0x5c(r26)
    stfs f30, 0x60(r26)
    stfs f31, 0x64(r26)
    stb r4, 0x68(r26)
lbl_fn_80087E9C_00001C80:
    cmpwi r26, 0x0
    beq lbl_fn_80087E9C_00001CC8
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r29
    mr r5, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80087E9C_00001CBC
    stw r26, 0x58(r31)
    stw r26, 0x5c(r31)
    b lbl_fn_80087E9C_00001CC8
lbl_fn_80087E9C_00001CBC:
    lwz r3, 0x5c(r31)
    stw r26, 0x44(r3)
    stw r26, 0x5c(r31)
lbl_fn_80087E9C_00001CC8:
    lwz r0, 0x58(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80087E9C_00001CE0
    stw r31, 0x58(r27)
    stw r31, 0x5c(r27)
    b lbl_fn_80087E9C_00001CEC
lbl_fn_80087E9C_00001CE0:
    lwz r3, 0x5c(r27)
    stw r31, 0x44(r3)
    stw r31, 0x5c(r27)
lbl_fn_80087E9C_00001CEC:
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    lfd f29, 0x28(r1)
    lmw r25, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
