#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSIsThreadSuspended(void);
extern void OSResumeThread(void);
extern void OSWakeupThread(void);
extern void __register_global_object(void);
extern void fn_804D818C(void);
extern void fn_8050DDE0(void);
extern void fn_8050E098(void);
extern void fn_8050EAE8(void);
extern void fn_8050EAEC(void);
extern void fn_8050EB8C(void);
extern void fn_8050F19C(void);
extern void fn_80686A64(void);
extern void fn_806A8E40(void);
extern void fn_806A8E80(void);
extern void fn_806AC070(void);
extern void fn_806B0180(void);
extern void fn_806B0950(void);
extern void fn_806B0CF0(void);
extern void fn_806B0E30(void);
extern void fn_806B0EB0(void);
extern void fn_806B1170(void);
extern void fn_806B1250(void);
extern void fn_806B3C20(void);
extern void fn_806B3C40(void);
extern void fn_806B3CC0(void);
extern void fn_806CD870(void);
extern void fn_806CDA90(void);
extern void fn_806CDD00(void);
extern void fn_806CDE00(void);
extern void fn_806CDE80(void);
extern void fn_806CDF30(void);
extern void fn_806CDF60(void);
extern void fn_806CDF90(void);
extern void fn_806CDFC0(void);
extern void fn_806CDFF0(void);
extern void fn_806CE060(void);
extern void fn_806CFE90(void);
extern void fn_806CFEA0(void);
extern void fn_806D42E0(void);

/* External data declarations */
extern u8 jumptable_80792E44[];
extern u8 lbl_8075B098[];
extern u8 lbl_80791B0C[];
extern u8 lbl_807C8FC8[];
extern u8 lbl_807C8FD8[];
extern u8 lbl_807C8FE0[];

/* Small data declarations */
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F628;
extern u32 lbl_8087F62C;

/* Function declarations */
void fn_8050A730(void);
void fn_8050A7F8(void);
void fn_8050A8A8(void);
void fn_8050A964(void);
void fn_8050A984(void);
void fn_8050A994(void);
void fn_8050AA70(void);
void fn_8050AA90(void);
void fn_8050AA9C(void);
void fn_8050AAD4(void);
void fn_8050AAE0(void);
void fn_8050AAE4(void);
void fn_8050AB5C(void);
void fn_8050ADA8(void);
void fn_8050ADF4(void);
void fn_8050AE40(void);
void fn_8050B01C(void);
void fn_8050B1A8(void);
void fn_8050B1AC(void);
void fn_8050B1E0(void);
void fn_8050B228(void);
void fn_8050B65C(void);
void fn_8050B674(void);
void fn_8050B760(void);
void fn_8050B780(void);
void fn_8050B7F0(void);
void fn_8050B96C(void);
void fn_8050BA6C(void);
void fn_8050BAC8(void);
void fn_8050BDC8(void);
void fn_8050C0B8(void);
void fn_8050C12C(void);

asm void fn_8050A730(void)
{
    nofralloc
    lwz r5, lbl_8087F628
    lwz r0, 0x270(r5)
    cmplw r3, r0
    bgelr
    lbz r0, 0x0(r4)
    cmplw r0, r3
    bnelr
    mulli r6, r3, 0x34
    add r3, r5, r6
    lwz r0, 0x280(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8050A730_00000048
    lwz r0, 0xc(r4)
    srwi. r0, r0, 31
    beq lbl_fn_8050A730_00000048
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    beqlr
lbl_fn_8050A730_00000048:
    add r5, r5, r6
    lbz r0, 0x0(r4)
    lwz r7, 0x27c(r5)
    lwz r3, 0x4(r4)
    stb r0, 0x274(r5)
    lwz r0, 0x8(r4)
    stw r3, 0x278(r5)
    lwz r3, 0xc(r4)
    stw r0, 0x27c(r5)
    lwz r0, 0x10(r4)
    stw r3, 0x280(r5)
    lwz r3, 0x14(r4)
    stw r0, 0x284(r5)
    lwz r0, 0x18(r4)
    stw r3, 0x288(r5)
    lwz r3, 0x1c(r4)
    stw r0, 0x28c(r5)
    lwz r0, 0x20(r4)
    stw r3, 0x290(r5)
    lwz r3, 0x24(r4)
    stw r0, 0x294(r5)
    lwz r0, 0x28(r4)
    stw r3, 0x298(r5)
    lwz r3, 0x2c(r4)
    stw r0, 0x29c(r5)
    lwz r0, 0x30(r4)
    stw r3, 0x2a0(r5)
    stw r0, 0x2a4(r5)
    lwz r0, lbl_8087F628
    add r3, r0, r6
    stw r7, 0x27c(r3)
    blr
}

asm void fn_8050A7F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8087F628
    lwz r3, 0x1f8(r31)
    extrwi r0, r3, 1, 10
    cmplwi r0, 0x1
    beq lbl_fn_8050A7F8_00000164
    extrwi r0, r3, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_8050A7F8_00000164
    extrwi. r0, r3, 1, 9
    beq lbl_fn_8050A7F8_00000164
    bl fn_806B3CC0
    cmpwi r3, 0x1
    bne lbl_fn_8050A7F8_0000011C
    lwz r0, 0x1f8(r31)
    extrwi r0, r0, 1, 8
    cmplwi r0, 0x1
    beq lbl_fn_8050A7F8_00000164
lbl_fn_8050A7F8_0000011C:
    lwz r0, 0x1f8(r31)
    addis r3, r31, 0x1
    oris r0, r0, 0x80
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x1f8(r31)
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050A7F8_00000164
    lis r4, fn_8050B1AC@ha
    li r3, 0x1
    addi r4, r4, fn_8050B1AC@l
    li r5, 0x0
    bl fn_806B3C40
    cmpwi r3, 0x0
    bne lbl_fn_8050A7F8_00000164
    lwz r0, 0x1f8(r31)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
lbl_fn_8050A7F8_00000164:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050A8A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8087F628
    lwz r3, 0x1f8(r31)
    extrwi r0, r3, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_8050A8A8_00000220
    extrwi. r0, r3, 1, 9
    beq lbl_fn_8050A8A8_00000220
    bl fn_806B3CC0
    cmpwi r3, 0x0
    bne lbl_fn_8050A8A8_000001BC
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 8
    beq lbl_fn_8050A8A8_00000220
lbl_fn_8050A8A8_000001BC:
    lwz r0, 0x1f8(r31)
    addis r3, r31, 0x1
    rlwinm r0, r0, 0, 10, 7
    stw r0, 0x1f8(r31)
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050A8A8_00000220
    lis r4, fn_8050B1AC@ha
    li r3, 0x0
    addi r4, r4, fn_8050B1AC@l
    li r5, 0x0
    bl fn_806B3C40
    lwz r4, lbl_8087F628
    cmpwi r3, 0x0
    lwz r0, 0x1f8(r4)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r4)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x1f8(r3)
    bne lbl_fn_8050A8A8_00000220
    lwz r0, 0x1f8(r31)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r31)
lbl_fn_8050A8A8_00000220:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050A964(void)
{
    nofralloc
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi r0, r0, 1, 7
    cmplwi r0, 0x1
    bnelr
    li r0, 0xc
    stw r0, 0xc8(r3)
    blr
}

asm void fn_8050A984(void)
{
    nofralloc
    lwz r3, lbl_8087F628
    li r0, 0xb
    stw r0, 0xc8(r3)
    blr
}

asm void fn_8050A994(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r31, 0x0(r4)
    stw r30, 0x8(r1)
    lwz r5, lbl_8087F628
    lwz r0, 0x270(r5)
    cmplw r3, r0
    bge lbl_fn_8050A994_00000328
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050A994_000002BC
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050A994_000002B0
    li r30, 0x0
    b lbl_fn_8050A994_000002D8
lbl_fn_8050A994_000002B0:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_8050A994_000002D8
lbl_fn_8050A994_000002BC:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050A994_000002D0
    li r3, 0x0
    b lbl_fn_8050A994_000002D4
lbl_fn_8050A994_000002D0:
    bl fn_806A8E40
lbl_fn_8050A994_000002D4:
    clrlwi r30, r3, 24
lbl_fn_8050A994_000002D8:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050A994_0000030C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050A994_00000300
    li r0, 0x0
    b lbl_fn_8050A994_00000310
lbl_fn_8050A994_00000300:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_8050A994_00000310
lbl_fn_8050A994_0000030C:
    li r0, 0x0
lbl_fn_8050A994_00000310:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_8050A994_00000328
    mr r3, r31
    bl fn_806B0CF0
lbl_fn_8050A994_00000328:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050AA70(void)
{
    nofralloc
    lwz r4, lbl_8087F628
    lwz r0, 0x210(r4)
    add r0, r0, r3
    stw r0, 0x210(r4)
    lwz r3, 0x220(r4)
    addi r0, r3, 0x1
    stw r0, 0x220(r4)
    blr
}

asm void fn_8050AA90(void)
{
    nofralloc
    clrlwi r4, r4, 24
    li r5, 0x0
    b fn_8050AA70
}

asm void fn_8050AA9C(void)
{
    nofralloc
    lwz r7, lbl_8087F628
    lwz r0, 0x230(r7)
    add r0, r0, r5
    stw r0, 0x230(r7)
    lwz r6, 0x240(r7)
    addi r0, r6, 0x1
    stw r0, 0x240(r7)
    lwz r6, lbl_8087F628
    lwz r12, 0xa0(r6)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

asm void fn_8050AAD4(void)
{
    nofralloc
    clrlwi r3, r3, 24
    li r6, 0x0
    b fn_8050AA9C
}

asm void fn_8050AAE0(void)
{
    nofralloc
    blr
}

asm void fn_8050AAE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807C8FD8@ha
    stw r0, 0x14(r1)
    addi r6, r7, lbl_807C8FD8@l
    stw r31, 0xc(r1)
    lwz r5, lbl_8087F628
    stw r3, lbl_807C8FD8@l(r7)
    addis r31, r5, 0x1
    stw r4, 0x4(r6)
    subi r3, r31, 0x4128
    bl OSIsThreadSuspended
    cmpwi r3, 0x1
    bne lbl_fn_8050AAE4_000003F4
    subi r3, r31, 0x4128
    bl OSResumeThread
lbl_fn_8050AAE4_000003F4:
    lis r3, lbl_807C8FD8@ha
    li r0, 0x3
    addi r3, r3, lbl_807C8FD8@l
    stw r3, -0x3e10(r31)
    subi r3, r31, 0x3dfc
    stw r0, -0x3e08(r31)
    bl OSWakeupThread
    li r0, 0x0
    stw r0, -0x3e0c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050AB5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8050AB5C_00000664
    cmpwi r4, 0x0
    bne lbl_fn_8050AB5C_0000065C
    bl fn_806D42E0
    cmpwi r3, 0x2
    bne lbl_fn_8050AB5C_000004FC
    lwz r7, lbl_8087F628
    addis r4, r7, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_8050AB5C_000004B4
    mr r6, r7
    li r5, 0x0
    b lbl_fn_8050AB5C_000004A0
lbl_fn_8050AB5C_00000484:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_8050AB5C_000004A0:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8050AB5C_00000484
    stw r0, -0x4180(r4)
lbl_fn_8050AB5C_000004B4:
    addis r3, r7, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_8050AB5C_000004DC
    li r0, 0x7
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8050AB5C_000004DC:
    addis r4, r7, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    addi r3, r3, 0x1
    stw r3, -0x4180(r4)
    lwz r3, lbl_8087F628
    stw r0, 0xc8(r3)
    b lbl_fn_8050AB5C_00000664
lbl_fn_8050AB5C_000004FC:
    lwz r5, lbl_8087F628
    lis r3, fn_8050ADA8@ha
    addi r3, r3, fn_8050ADA8@l
    li r4, 0x0
    lwz r0, 0x1f8(r5)
    oris r0, r0, 0x4000
    stw r0, 0x1f8(r5)
    bl fn_806AC070
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8050AB5C_00000630
    lwz r0, 0x1f8(r3)
    lis r4, fn_8050AE40@ha
    lis r6, fn_8050B1A8@ha
    lis r8, fn_8050ADF4@ha
    oris r0, r0, 0x1000
    stw r0, 0x1f8(r3)
    addi r4, r4, fn_8050AE40@l
    addi r6, r6, fn_8050B1A8@l
    addi r8, r8, fn_8050ADF4@l
    li r3, 0x0
    li r5, 0x0
    li r7, 0x0
    li r9, 0x0
    bl fn_806B0180
    cmpwi r3, 0x0
    bne lbl_fn_8050AB5C_00000604
    lwz r7, lbl_8087F628
    addis r4, r7, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_8050AB5C_000005BC
    mr r6, r7
    li r5, 0x0
    b lbl_fn_8050AB5C_000005A8
lbl_fn_8050AB5C_0000058C:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_8050AB5C_000005A8:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8050AB5C_0000058C
    stw r0, -0x4180(r4)
lbl_fn_8050AB5C_000005BC:
    addis r3, r7, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_8050AB5C_000005E4
    li r0, 0xa
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8050AB5C_000005E4:
    addis r4, r7, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    addi r3, r3, 0x1
    stw r3, -0x4180(r4)
    lwz r3, lbl_8087F628
    stw r0, 0xc8(r3)
    b lbl_fn_8050AB5C_00000630
lbl_fn_8050AB5C_00000604:
    lwz r3, lbl_8087F628
    addi r3, r3, 0x430
    bl fn_8050F19C
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x800
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x1f8(r3)
lbl_fn_8050AB5C_00000630:
    lwz r3, lbl_8087F628
    stw r31, 0xe38(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x2000
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0x1f8(r3)
    b lbl_fn_8050AB5C_00000664
lbl_fn_8050AB5C_0000065C:
    li r0, 0x3
    stw r0, 0xc8(r3)
lbl_fn_8050AB5C_00000664:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050ADA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F628
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8050ADA8_000006B4
    addi r3, r3, 0x430
    bl fn_8050EAEC
    lwz r3, lbl_8087F628
    li r4, 0x9f0
    lwz r12, 0xb4(r3)
    addi r3, r3, 0x430
    mtctr r12
    bctrl
lbl_fn_8050ADA8_000006B4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050ADF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F628
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8050ADF4_00000700
    addi r3, r3, 0x430
    bl fn_8050EAEC
    lwz r3, lbl_8087F628
    li r4, 0x9f0
    lwz r12, 0xb4(r3)
    addi r3, r3, 0x430
    mtctr r12
    bctrl
lbl_fn_8050ADF4_00000700:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050AE40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_8050AE40_00000848
    cmpwi r4, 0x0
    beq lbl_fn_8050AE40_0000075C
    lwz r3, lbl_8087F628
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8050AE40_0000075C
    addi r3, r3, 0x430
    bl fn_8050EAEC
    lwz r3, lbl_8087F628
    li r4, 0x9f0
    lwz r12, 0xb4(r3)
    addi r3, r3, 0x430
    mtctr r12
    bctrl
lbl_fn_8050AE40_0000075C:
    lwz r3, lbl_8087F628
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8050AE40_000008DC
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x400
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    addi r3, r3, 0x430
    bl fn_8050EB8C
    lwz r3, lbl_8087F628
    addi r3, r3, 0x430
    bl fn_8050EAE8
    cmpwi r3, 0x0
    beq lbl_fn_8050AE40_000007F8
    lwz r3, lbl_8087F628
    addi r3, r3, 0x430
    bl fn_806CFE90
    cmpwi r3, 0x0
    beq lbl_fn_8050AE40_000007B8
    lwz r3, lbl_8087F628
    addi r3, r3, 0x430
    bl fn_806CFEA0
lbl_fn_8050AE40_000007B8:
    lwz r3, lbl_8087F628
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8050AE40_000007E8
    addi r3, r3, 0x430
    bl fn_8050EAEC
    lwz r3, lbl_8087F628
    li r4, 0x9f0
    lwz r12, 0xb4(r3)
    addi r3, r3, 0x430
    mtctr r12
    bctrl
lbl_fn_8050AE40_000007E8:
    lwz r3, lbl_8087F628
    li r0, 0x7
    stw r0, 0xc8(r3)
    b lbl_fn_8050AE40_00000804
lbl_fn_8050AE40_000007F8:
    lwz r3, lbl_8087F628
    li r0, 0x8
    stw r0, 0xc8(r3)
lbl_fn_8050AE40_00000804:
    lwz r4, lbl_8087F628
    lwz r0, 0xc8(r4)
    lwz r3, 0x1f8(r4)
    cmpwi r0, 0x8
    extrwi r0, r3, 1, 13
    blt lbl_fn_8050AE40_000008DC
    cmpwi r0, 0x0
    rlwimi r3, r0, 18, 13, 13
    stw r3, 0x1f8(r4)
    beq lbl_fn_8050AE40_0000083C
    lis r3, 0x199a
    subi r3, r3, 0x6667
    bl fn_806CE060
    b lbl_fn_8050AE40_000008DC
lbl_fn_8050AE40_0000083C:
    li r3, 0x3a98
    bl fn_806CE060
    b lbl_fn_8050AE40_000008DC
lbl_fn_8050AE40_00000848:
    lwz r7, lbl_8087F628
    addis r4, r7, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_8050AE40_00000898
    mr r6, r7
    li r5, 0x0
    b lbl_fn_8050AE40_00000884
lbl_fn_8050AE40_00000868:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_8050AE40_00000884:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8050AE40_00000868
    stw r0, -0x4180(r4)
lbl_fn_8050AE40_00000898:
    addis r3, r7, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_8050AE40_000008C0
    li r0, 0xc
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8050AE40_000008C0:
    addis r4, r7, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    addi r3, r3, 0x1
    stw r3, -0x4180(r4)
    lwz r3, lbl_8087F628
    stw r0, 0xc8(r3)
lbl_fn_8050AE40_000008DC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050B01C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B01C_00000938
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B01C_0000092C
    li r30, 0x0
    b lbl_fn_8050B01C_00000954
lbl_fn_8050B01C_0000092C:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_8050B01C_00000954
lbl_fn_8050B01C_00000938:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B01C_0000094C
    li r3, 0x0
    b lbl_fn_8050B01C_00000950
lbl_fn_8050B01C_0000094C:
    bl fn_806A8E40
lbl_fn_8050B01C_00000950:
    clrlwi r30, r3, 24
lbl_fn_8050B01C_00000954:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B01C_00000988
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B01C_0000097C
    li r0, 0x0
    b lbl_fn_8050B01C_0000098C
lbl_fn_8050B01C_0000097C:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_8050B01C_0000098C
lbl_fn_8050B01C_00000988:
    li r0, 0x0
lbl_fn_8050B01C_0000098C:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_8050B01C_00000A60
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B01C_000009D0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B01C_000009C4
    li r0, 0x0
    b lbl_fn_8050B01C_000009D4
lbl_fn_8050B01C_000009C4:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_8050B01C_000009D4
lbl_fn_8050B01C_000009D0:
    li r0, 0x0
lbl_fn_8050B01C_000009D4:
    clrlwi r0, r0, 24
    cmplw r31, r0
    beq lbl_fn_8050B01C_00000A60
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x0
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_8050B01C_00000A1C
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8FC8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8FC8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_8050B01C_00000A1C:
    li r3, 0x0
    li r4, 0x3
    li r0, 0x10
    stw r3, lbl_8087F5FC
    lwz r3, lbl_8087F62C
    addi r6, r1, 0xc
    sth r4, 0x8(r1)
    li r4, -0x1
    li r5, 0x10
    li r7, 0x1
    sth r0, 0xa(r1)
    stb r31, 0xc(r1)
    bl fn_8050E098
    lwz r3, lbl_8087F62C
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_8050B01C_00000A60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050B1A8(void)
{
    nofralloc
    blr
}

asm void fn_8050B1AC(void)
{
    nofralloc
    cmpwi r3, 0x0
    bnelr
    lwz r3, lbl_8087F628
    neg r0, r4
    or r4, r0, r4
    lwz r0, 0x1f8(r3)
    oris r0, r0, 0x40
    stw r0, 0x1f8(r3)
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    rlwimi r0, r4, 22, 10, 10
    stw r0, 0x1f8(r3)
    blr
}

asm void fn_8050B1E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8087F628
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8050B1E0_00000AE4
    stw r31, 0x8(r3)
lbl_fn_8050B1E0_00000AE4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050B228(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    bne lbl_fn_8050B228_00000E5C
    cmpwi r4, 0x0
    bne lbl_fn_8050B228_00000DB4
    lwz r3, lbl_8087F628
    li r28, 0x0
    li r27, 0x0
    li r29, 0x0
    lwz r0, 0x264(r3)
    stw r0, 0x270(r3)
    b lbl_fn_8050B228_00000B54
lbl_fn_8050B228_00000B34:
    add r30, r4, r27
    li r4, 0x0
    addi r3, r30, 0x284
    li r5, 0x20
    bl memset
    stw r29, 0x2a4(r30)
    addi r27, r27, 0x34
    addi r28, r28, 0x1
lbl_fn_8050B228_00000B54:
    lwz r4, lbl_8087F628
    lwz r0, 0x270(r4)
    cmplw r28, r0
    blt lbl_fn_8050B228_00000B34
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B228_00000B94
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B228_00000B88
    li r0, 0x0
    b lbl_fn_8050B228_00000BB0
lbl_fn_8050B228_00000B88:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050B228_00000BB0
lbl_fn_8050B228_00000B94:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B228_00000BA8
    li r3, 0x0
    b lbl_fn_8050B228_00000BAC
lbl_fn_8050B228_00000BA8:
    bl fn_806A8E40
lbl_fn_8050B228_00000BAC:
    clrlwi r0, r3, 24
lbl_fn_8050B228_00000BB0:
    lwz r3, lbl_8087F628
    clrlwi r4, r0, 24
    lwz r0, 0x270(r3)
    cmplw r4, r0
    ble lbl_fn_8050B228_00000C58
    addis r5, r3, 0x1
    lwz r0, -0x4180(r5)
    cmplwi r0, 0x8
    blt lbl_fn_8050B228_00000C10
    mr r7, r3
    li r6, 0x0
    b lbl_fn_8050B228_00000BFC
lbl_fn_8050B228_00000BE0:
    addis r4, r7, 0x1
    addi r7, r7, 0x8
    lwz r0, -0x4174(r4)
    addi r6, r6, 0x1
    stw r0, -0x417c(r4)
    lwz r0, -0x4170(r4)
    stw r0, -0x4178(r4)
lbl_fn_8050B228_00000BFC:
    lwz r4, -0x4180(r5)
    subi r0, r4, 0x1
    cmplw r6, r0
    blt lbl_fn_8050B228_00000BE0
    stw r0, -0x4180(r5)
lbl_fn_8050B228_00000C10:
    addis r4, r3, 0x1
    lwz r0, -0x4180(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    subic. r4, r0, 0x417c
    beq lbl_fn_8050B228_00000C38
    li r0, 0xd
    stw r0, 0x0(r4)
    li r0, 0x0
    stw r0, 0x4(r4)
lbl_fn_8050B228_00000C38:
    addis r4, r3, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    addi r3, r3, 0x1
    stw r3, -0x4180(r4)
    lwz r3, lbl_8087F628
    stw r0, 0xc8(r3)
    b lbl_fn_8050B228_00000F18
lbl_fn_8050B228_00000C58:
    bl fn_8050BDC8
    lwz r31, lbl_8087F628
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B228_00000D24
    addi r3, r1, 0x8
    bl fn_806B0EB0
    mr r29, r3
    addis r30, r31, 0x1
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_8050B228_00000D1C
lbl_fn_8050B228_00000C8C:
    lbz r0, -0x3deb(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8050B228_00000CB8
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B228_00000CAC
    li r0, 0x0
    b lbl_fn_8050B228_00000CD4
lbl_fn_8050B228_00000CAC:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050B228_00000CD4
lbl_fn_8050B228_00000CB8:
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B228_00000CCC
    li r3, 0x0
    b lbl_fn_8050B228_00000CD0
lbl_fn_8050B228_00000CCC:
    bl fn_806A8E40
lbl_fn_8050B228_00000CD0:
    clrlwi r0, r3, 24
lbl_fn_8050B228_00000CD4:
    lwz r3, 0x8(r1)
    clrlwi r0, r0, 24
    lbzx r3, r3, r27
    cmplw r3, r0
    bne lbl_fn_8050B228_00000CF0
    addi r28, r28, 0x1
    b lbl_fn_8050B228_00000D18
lbl_fn_8050B228_00000CF0:
    subf r0, r28, r27
    li r5, 0x1000
    slwi r0, r0, 12
    add r4, r31, r0
    addi r4, r4, 0x3e80
    bl fn_806CDE00
    lwz r3, 0x8(r1)
    li r4, 0x3a98
    lbzx r3, r3, r27
    bl fn_806CDFF0
lbl_fn_8050B228_00000D18:
    addi r27, r27, 0x1
lbl_fn_8050B228_00000D1C:
    cmpw r27, r29
    blt lbl_fn_8050B228_00000C8C
lbl_fn_8050B228_00000D24:
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B228_00000D88
    lis r3, fn_8050AA70@ha
    li r4, 0x0
    addi r3, r3, fn_8050AA70@l
    bl fn_806CDF30
    lis r3, fn_8050AA9C@ha
    li r4, 0x0
    addi r3, r3, fn_8050AA9C@l
    bl fn_806CDF60
    lis r3, fn_8050B01C@ha
    li r4, 0x0
    addi r3, r3, fn_8050B01C@l
    bl fn_806CDF90
    lis r3, fn_8050AAE0@ha
    li r4, 0x0
    addi r3, r3, fn_8050AAE0@l
    bl fn_806B0950
    lis r3, fn_8050B1E0@ha
    li r4, 0x0
    addi r3, r3, fn_8050B1E0@l
    bl fn_806CDFC0
lbl_fn_8050B228_00000D88:
    lwz r27, lbl_8087F628
    bl fn_806B3C20
    stw r3, 0x26c(r27)
    li r0, 0xb
    lwz r4, lbl_8087F628
    lwz r3, 0x1f8(r4)
    oris r3, r3, 0x100
    stw r3, 0x1f8(r4)
    lwz r3, lbl_8087F628
    stw r0, 0xc8(r3)
    b lbl_fn_8050B228_00000EF0
lbl_fn_8050B228_00000DB4:
    cmpwi r5, 0x0
    bne lbl_fn_8050B228_00000DC4
    cmpwi r6, 0x0
    beq lbl_fn_8050B228_00000EF0
lbl_fn_8050B228_00000DC4:
    lwz r7, lbl_8087F628
    addis r4, r7, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_8050B228_00000E14
    mr r6, r7
    li r5, 0x0
    b lbl_fn_8050B228_00000E00
lbl_fn_8050B228_00000DE4:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_8050B228_00000E00:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8050B228_00000DE4
    stw r0, -0x4180(r4)
lbl_fn_8050B228_00000E14:
    addis r3, r7, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_8050B228_00000E3C
    li r0, 0xe
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8050B228_00000E3C:
    addis r4, r7, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    addi r3, r3, 0x1
    stw r3, -0x4180(r4)
    lwz r3, lbl_8087F628
    stw r0, 0xc8(r3)
    b lbl_fn_8050B228_00000EF0
lbl_fn_8050B228_00000E5C:
    lwz r7, lbl_8087F628
    addis r4, r7, 0x1
    lwz r0, -0x4180(r4)
    cmplwi r0, 0x8
    blt lbl_fn_8050B228_00000EAC
    mr r6, r7
    li r5, 0x0
    b lbl_fn_8050B228_00000E98
lbl_fn_8050B228_00000E7C:
    addis r3, r6, 0x1
    addi r6, r6, 0x8
    lwz r0, -0x4174(r3)
    addi r5, r5, 0x1
    stw r0, -0x417c(r3)
    lwz r0, -0x4170(r3)
    stw r0, -0x4178(r3)
lbl_fn_8050B228_00000E98:
    lwz r3, -0x4180(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_8050B228_00000E7C
    stw r0, -0x4180(r4)
lbl_fn_8050B228_00000EAC:
    addis r3, r7, 0x1
    lwz r0, -0x4180(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    subic. r3, r0, 0x417c
    beq lbl_fn_8050B228_00000ED4
    li r0, 0xf
    stw r0, 0x0(r3)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8050B228_00000ED4:
    addis r4, r7, 0x1
    li r0, 0x3
    lwz r3, -0x4180(r4)
    addi r3, r3, 0x1
    stw r3, -0x4180(r4)
    lwz r3, lbl_8087F628
    stw r0, 0xc8(r3)
lbl_fn_8050B228_00000EF0:
    lwz r3, lbl_8087F628
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8050B228_00000F18
    subic. r0, r0, 0x1
    stw r0, 0x8(r3)
    bne lbl_fn_8050B228_00000F18
    lwz r3, lbl_8087F628
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8050B228_00000F18:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8050B65C(void)
{
    nofralloc
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    b fn_8050B228
}

asm void fn_8050B674(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    lwz r31, lbl_8087F628
    addis r3, r31, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B674_0000101C
    addi r3, r1, 0x8
    bl fn_806B0EB0
    mr r29, r3
    addis r30, r31, 0x1
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_8050B674_00001014
lbl_fn_8050B674_00000F84:
    lbz r0, -0x3deb(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8050B674_00000FB0
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B674_00000FA4
    li r0, 0x0
    b lbl_fn_8050B674_00000FCC
lbl_fn_8050B674_00000FA4:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050B674_00000FCC
lbl_fn_8050B674_00000FB0:
    lwz r0, 0x1f8(r31)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B674_00000FC4
    li r3, 0x0
    b lbl_fn_8050B674_00000FC8
lbl_fn_8050B674_00000FC4:
    bl fn_806A8E40
lbl_fn_8050B674_00000FC8:
    clrlwi r0, r3, 24
lbl_fn_8050B674_00000FCC:
    lwz r3, 0x8(r1)
    clrlwi r0, r0, 24
    lbzx r3, r3, r27
    cmplw r3, r0
    bne lbl_fn_8050B674_00000FE8
    addi r28, r28, 0x1
    b lbl_fn_8050B674_00001010
lbl_fn_8050B674_00000FE8:
    subf r0, r28, r27
    li r5, 0x1000
    slwi r0, r0, 12
    add r4, r31, r0
    addi r4, r4, 0x3e80
    bl fn_806CDE00
    lwz r3, 0x8(r1)
    li r4, 0x3a98
    lbzx r3, r3, r27
    bl fn_806CDFF0
lbl_fn_8050B674_00001010:
    addi r27, r27, 0x1
lbl_fn_8050B674_00001014:
    cmpw r27, r29
    blt lbl_fn_8050B674_00000F84
lbl_fn_8050B674_0000101C:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8050B760(void)
{
    nofralloc
    lwz r5, lbl_8087F628
    lwz r12, 0xa8(r5)
    cmpwi r12, 0x0
    beq lbl_fn_8050B760_00001048
    mtctr r12
    bctr
lbl_fn_8050B760_00001048:
    li r3, 0x1
    blr
}

asm void fn_8050B780(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r5, lbl_8087F628
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 8
    beq lbl_fn_8050B780_00001074
    li r3, 0x0
    b lbl_fn_8050B780_000010B0
lbl_fn_8050B780_00001074:
    lwz r12, 0xac(r5)
    li r5, 0x1
    cmpwi r12, 0x0
    beq lbl_fn_8050B780_00001090
    mtctr r12
    bctrl
    mr r5, r3
lbl_fn_8050B780_00001090:
    cmpwi r5, 0x1
    bne lbl_fn_8050B780_000010AC
    lwz r3, lbl_8087F628
    addis r4, r3, 0x1
    lwz r3, -0x3df0(r4)
    addi r0, r3, 0x1
    stw r0, -0x3df0(r4)
lbl_fn_8050B780_000010AC:
    mr r3, r5
lbl_fn_8050B780_000010B0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050B7F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r27, r4
    mr r31, r5
    mr r28, r6
    mr r29, r7
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050B7F0_000010F8
    li r3, -0x4
    b lbl_fn_8050B7F0_00001228
lbl_fn_8050B7F0_000010F8:
    addis r3, r3, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B7F0_00001120
    mr r3, r28
    bl fn_806B1170
    cmpwi r3, 0x0
    bne lbl_fn_8050B7F0_00001120
    li r3, -0x1
    b lbl_fn_8050B7F0_00001228
lbl_fn_8050B7F0_00001120:
    cmpwi r29, 0x0
    bne lbl_fn_8050B7F0_00001164
    addis r3, r30, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B7F0_0000114C
    mr r3, r28
    mr r4, r27
    mr r5, r31
    bl fn_806CDD00
    b lbl_fn_8050B7F0_00001214
lbl_fn_8050B7F0_0000114C:
    mr r3, r28
    mr r4, r27
    mr r5, r31
    li r6, 0x0
    bl fn_806A8E80
    b lbl_fn_8050B7F0_00001214
lbl_fn_8050B7F0_00001164:
    addis r3, r30, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B7F0_0000118C
    mr r3, r28
    bl fn_806CD870
    cmpwi r3, 0x0
    bne lbl_fn_8050B7F0_0000118C
    li r3, -0x2
    b lbl_fn_8050B7F0_00001228
lbl_fn_8050B7F0_0000118C:
    lwz r0, 0x3e6c(r30)
    mr r4, r27
    mr r5, r31
    mulli r0, r0, 0x404
    add r3, r30, r0
    addi r3, r3, 0xe40
    bl memcpy
    addis r3, r30, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050B7F0_000011D8
    lwz r0, 0x3e6c(r30)
    mr r3, r28
    mr r5, r31
    mulli r0, r0, 0x404
    add r4, r30, r0
    addi r4, r4, 0xe40
    bl fn_806CDA90
    b lbl_fn_8050B7F0_000011F8
lbl_fn_8050B7F0_000011D8:
    lwz r0, 0x3e6c(r30)
    mr r3, r28
    mr r5, r31
    li r6, 0x1
    mulli r0, r0, 0x404
    add r4, r30, r0
    addi r4, r4, 0xe40
    bl fn_806A8E80
lbl_fn_8050B7F0_000011F8:
    lwz r4, 0x3e6c(r30)
    addi r0, r4, 0x1
    stw r0, 0x3e6c(r30)
    cmpwi r0, 0xc
    blt lbl_fn_8050B7F0_00001214
    li r0, 0x0
    stw r0, 0x3e6c(r30)
lbl_fn_8050B7F0_00001214:
    neg r4, r3
    li r0, -0x3
    or r3, r4, r3
    srawi r3, r3, 31
    andc r3, r0, r3
lbl_fn_8050B7F0_00001228:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050B96C(void)
{
    nofralloc
    cmplwi r4, 0xe
    bgt lbl_fn_8050B96C_0000132C
    lis r3, jumptable_80792E44@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_80792E44@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x2d
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x35
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x40
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x46
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x4f
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x59
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x65
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x70
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x75
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x7d
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x84
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x89
    blr
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x91
    blr
lbl_fn_8050B96C_0000132C:
    lis r3, lbl_8075B098@ha
    addi r3, r3, lbl_8075B098@l
    addi r3, r3, 0x9c
    blr
}

asm void fn_8050BA6C(void)
{
    nofralloc
    lwz r4, lbl_8087F628
    addis r4, r4, 0x1
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8050BA6C_00001354
    b fn_806B0EB0
lbl_fn_8050BA6C_00001354:
    lis r4, lbl_807C8FE0@ha
    li r5, 0x0
    addi r4, r4, lbl_807C8FE0@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    b lbl_fn_8050BA6C_0000137C
lbl_fn_8050BA6C_00001370:
    stb r5, 0x0(r4)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
lbl_fn_8050BA6C_0000137C:
    lwz r0, -0x3de8(r3)
    cmpw r5, r0
    blt lbl_fn_8050BA6C_00001370
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    lwz r3, -0x3de8(r3)
    blr
}

asm void fn_8050BAC8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r27, r3
    addis r31, r3, 0x1
    li r29, 0x1
    li r28, 0x0
    li r26, 0x0
    b lbl_fn_8050BAC8_000015BC
lbl_fn_8050BAC8_000013C0:
    add r30, r27, r26
    lbz r0, 0x274(r30)
    cmpw r0, r28
    beq lbl_fn_8050BAC8_000013D8
    stb r28, 0x274(r30)
    li r29, 0x0
lbl_fn_8050BAC8_000013D8:
    lbz r0, -0x3deb(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8050BAC8_00001404
    lwz r0, 0x1f8(r27)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BAC8_000013F8
    li r0, 0x0
    b lbl_fn_8050BAC8_00001420
lbl_fn_8050BAC8_000013F8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050BAC8_00001420
lbl_fn_8050BAC8_00001404:
    lwz r0, 0x1f8(r27)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BAC8_00001418
    li r3, 0x0
    b lbl_fn_8050BAC8_0000141C
lbl_fn_8050BAC8_00001418:
    bl fn_806A8E40
lbl_fn_8050BAC8_0000141C:
    clrlwi r0, r3, 24
lbl_fn_8050BAC8_00001420:
    clrlwi r3, r28, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_8050BAC8_000015B4
    addis r4, r27, 0x1
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8050BAC8_00001448
    bl fn_806B1170
    b lbl_fn_8050BAC8_0000144C
lbl_fn_8050BAC8_00001448:
    li r3, 0x1
lbl_fn_8050BAC8_0000144C:
    lwz r0, 0x280(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8050BAC8_00001464
    cmpwi r3, 0x0
    beq lbl_fn_8050BAC8_00001474
lbl_fn_8050BAC8_00001464:
    cmpwi r0, 0x0
    bne lbl_fn_8050BAC8_0000148C
    cmpwi r3, 0x0
    beq lbl_fn_8050BAC8_0000148C
lbl_fn_8050BAC8_00001474:
    neg r4, r3
    lwz r0, 0x280(r30)
    or r3, r4, r3
    li r29, 0x0
    rlwimi r0, r3, 0, 0, 0
    stw r0, 0x280(r30)
lbl_fn_8050BAC8_0000148C:
    addis r3, r27, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050BAC8_000014BC
    lwz r0, 0x1f8(r27)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BAC8_000014B0
    li r3, 0x0
    b lbl_fn_8050BAC8_000014C0
lbl_fn_8050BAC8_000014B0:
    bl fn_806B1250
    clrlwi r3, r3, 24
    b lbl_fn_8050BAC8_000014C0
lbl_fn_8050BAC8_000014BC:
    li r3, 0x0
lbl_fn_8050BAC8_000014C0:
    lwz r0, 0x280(r30)
    clrlwi r4, r28, 24
    clrlwi r3, r3, 24
    extrwi r5, r0, 1, 1
    subf r0, r4, r3
    cntlzw r0, r0
    cmplwi r5, 0x1
    srwi r4, r0, 5
    bne lbl_fn_8050BAC8_000014EC
    cmpwi r4, 0x0
    beq lbl_fn_8050BAC8_000014FC
lbl_fn_8050BAC8_000014EC:
    cmpwi r5, 0x0
    bne lbl_fn_8050BAC8_00001514
    cmpwi r4, 0x0
    beq lbl_fn_8050BAC8_00001514
lbl_fn_8050BAC8_000014FC:
    neg r3, r4
    lwz r0, 0x280(r30)
    or r3, r3, r4
    li r29, 0x0
    rlwimi r0, r3, 31, 1, 1
    stw r0, 0x280(r30)
lbl_fn_8050BAC8_00001514:
    addis r3, r27, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050BAC8_00001544
    lwz r0, 0x1f8(r27)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BAC8_00001538
    li r3, 0x0
    b lbl_fn_8050BAC8_00001560
lbl_fn_8050BAC8_00001538:
    bl fn_806B0E30
    clrlwi r3, r3, 24
    b lbl_fn_8050BAC8_00001560
lbl_fn_8050BAC8_00001544:
    lwz r0, 0x1f8(r27)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BAC8_00001558
    li r3, 0x0
    b lbl_fn_8050BAC8_0000155C
lbl_fn_8050BAC8_00001558:
    bl fn_806A8E40
lbl_fn_8050BAC8_0000155C:
    clrlwi r3, r3, 24
lbl_fn_8050BAC8_00001560:
    lwz r0, 0x280(r30)
    clrlwi r4, r28, 24
    clrlwi r3, r3, 24
    extrwi r5, r0, 1, 2
    subf r0, r4, r3
    cntlzw r0, r0
    cmplwi r5, 0x1
    srwi r4, r0, 5
    bne lbl_fn_8050BAC8_0000158C
    cmpwi r4, 0x0
    beq lbl_fn_8050BAC8_0000159C
lbl_fn_8050BAC8_0000158C:
    cmpwi r5, 0x0
    bne lbl_fn_8050BAC8_000015B4
    cmpwi r4, 0x0
    beq lbl_fn_8050BAC8_000015B4
lbl_fn_8050BAC8_0000159C:
    neg r3, r4
    lwz r0, 0x280(r30)
    or r3, r3, r4
    li r29, 0x0
    rlwimi r0, r3, 30, 2, 2
    stw r0, 0x280(r30)
lbl_fn_8050BAC8_000015B4:
    addi r28, r28, 0x1
    addi r26, r26, 0x34
lbl_fn_8050BAC8_000015BC:
    lwz r0, 0x270(r27)
    cmpw r28, r0
    blt lbl_fn_8050BAC8_000013C0
    lwz r4, 0xcc(r27)
    lwz r3, 0x258(r27)
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_8050BAC8_00001680
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8050BAC8_00001674
lbl_fn_8050BAC8_000015EC:
    add r3, r27, r30
    lwz r0, 0x280(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8050BAC8_0000166C
    addis r3, r27, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050BAC8_0000162C
    lwz r0, 0x1f8(r27)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BAC8_00001620
    li r0, 0x0
    b lbl_fn_8050BAC8_00001648
lbl_fn_8050BAC8_00001620:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050BAC8_00001648
lbl_fn_8050BAC8_0000162C:
    lwz r0, 0x1f8(r27)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BAC8_00001640
    li r3, 0x0
    b lbl_fn_8050BAC8_00001644
lbl_fn_8050BAC8_00001640:
    bl fn_806A8E40
lbl_fn_8050BAC8_00001644:
    clrlwi r0, r3, 24
lbl_fn_8050BAC8_00001648:
    clrlwi r3, r28, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    beq lbl_fn_8050BAC8_0000166C
    addis r4, r27, 0x1
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8050BAC8_0000166C
    bl fn_806CDE80
lbl_fn_8050BAC8_0000166C:
    addi r28, r28, 0x1
    addi r30, r30, 0x34
lbl_fn_8050BAC8_00001674:
    lwz r0, 0x270(r27)
    cmpw r28, r0
    blt lbl_fn_8050BAC8_000015EC
lbl_fn_8050BAC8_00001680:
    mr r3, r29
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050BDC8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8050BDC8_000016E4
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BDC8_000016D8
    li r0, 0x0
    b lbl_fn_8050BDC8_00001700
lbl_fn_8050BDC8_000016D8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050BDC8_00001700
lbl_fn_8050BDC8_000016E4:
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BDC8_000016F8
    li r3, 0x0
    b lbl_fn_8050BDC8_000016FC
lbl_fn_8050BDC8_000016F8:
    bl fn_806A8E40
lbl_fn_8050BDC8_000016FC:
    clrlwi r0, r3, 24
lbl_fn_8050BDC8_00001700:
    lwz r12, 0x0(r30)
    mr r3, r30
    clrlwi r4, r0, 24
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8050BDC8_0000172C
    li r3, 0x0
    b lbl_fn_8050BDC8_0000196C
lbl_fn_8050BDC8_0000172C:
    addis r3, r30, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050BDC8_0000175C
    lwz r0, 0x1f8(r30)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BDC8_00001750
    li r0, 0x0
    b lbl_fn_8050BDC8_00001778
lbl_fn_8050BDC8_00001750:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050BDC8_00001778
lbl_fn_8050BDC8_0000175C:
    lwz r0, 0x1f8(r30)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BDC8_00001770
    li r3, 0x0
    b lbl_fn_8050BDC8_00001774
lbl_fn_8050BDC8_00001770:
    bl fn_806A8E40
lbl_fn_8050BDC8_00001774:
    clrlwi r0, r3, 24
lbl_fn_8050BDC8_00001778:
    stb r0, 0x0(r31)
    addis r3, r30, 0x1
    lwz r0, 0xe38(r30)
    stw r0, 0x4(r31)
    lwz r0, 0xc(r31)
    oris r0, r0, 0x8000
    stw r0, 0xc(r31)
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050BDC8_000017C0
    lwz r0, 0x1f8(r30)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BDC8_000017B4
    li r29, 0x0
    b lbl_fn_8050BDC8_000017DC
lbl_fn_8050BDC8_000017B4:
    bl fn_806B0E30
    clrlwi r29, r3, 24
    b lbl_fn_8050BDC8_000017DC
lbl_fn_8050BDC8_000017C0:
    lwz r0, 0x1f8(r30)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BDC8_000017D4
    li r3, 0x0
    b lbl_fn_8050BDC8_000017D8
lbl_fn_8050BDC8_000017D4:
    bl fn_806A8E40
lbl_fn_8050BDC8_000017D8:
    clrlwi r29, r3, 24
lbl_fn_8050BDC8_000017DC:
    addis r3, r30, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050BDC8_0000180C
    lwz r0, 0x1f8(r30)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050BDC8_00001800
    li r0, 0x0
    b lbl_fn_8050BDC8_00001810
lbl_fn_8050BDC8_00001800:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_8050BDC8_00001810
lbl_fn_8050BDC8_0000180C:
    li r0, 0x0
lbl_fn_8050BDC8_00001810:
    clrlwi r3, r29, 24
    clrlwi r0, r0, 24
    subf r3, r3, r0
    lwz r0, 0xc(r31)
    cntlzw r4, r3
    rlwimi r0, r4, 25, 1, 1
    addi r3, r31, 0x10
    oris r5, r0, 0x2000
    stw r5, 0xc(r31)
    addi r4, r30, 0x5f0
    lwz r0, 0x1f8(r30)
    extrwi r0, r0, 1, 10
    xori r0, r0, 0x1
    rlwimi r5, r0, 28, 3, 3
    stw r5, 0xc(r31)
    lwz r0, 0x1f8(r30)
    rlwimi r5, r0, 7, 4, 4
    stw r5, 0xc(r31)
    bl fn_80686A64
    lwz r0, 0xe30(r30)
    lis r4, lbl_80791B0C@ha
    stw r0, 0x30(r31)
    li r5, 0x0
    li r3, 0x2
    li r0, 0xff
    sth r3, 0x8(r1)
    addi r3, r1, 0x1c
    addi r4, r4, lbl_80791B0C@l
    sth r5, 0xa(r1)
    stb r0, 0xc(r1)
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stw r5, 0x3c(r1)
    bl fn_80686A64
    lbz r0, lbl_8087F5F8
    extsb. r0, r0
    bne lbl_fn_8050BDC8_000018C8
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8FC8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8FC8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_8050BDC8_000018C8:
    li r3, 0x0
    li r4, 0x36
    li r0, 0x6
    stw r3, lbl_8087F5FC
    lwz r3, lbl_8087F62C
    addi r6, r1, 0xc
    sth r4, 0x8(r1)
    li r4, -0x1
    li r5, 0x6
    li r7, 0x0
    sth r0, 0xa(r1)
    lbz r0, 0x0(r31)
    stb r0, 0xc(r1)
    lwz r0, 0x4(r31)
    stw r0, 0x10(r1)
    lwz r0, 0x8(r31)
    stw r0, 0x14(r1)
    lwz r0, 0xc(r31)
    stw r0, 0x18(r1)
    rlwinm r0, r0, 0, 3, 1
    lwz r9, 0x10(r31)
    lwz r8, 0x14(r31)
    stw r8, 0x20(r1)
    stw r9, 0x1c(r1)
    lwz r9, 0x18(r31)
    lwz r8, 0x1c(r31)
    stw r8, 0x28(r1)
    stw r9, 0x24(r1)
    lwz r9, 0x20(r31)
    lwz r8, 0x24(r31)
    stw r8, 0x30(r1)
    stw r9, 0x2c(r1)
    lwz r9, 0x28(r31)
    lwz r8, 0x2c(r31)
    stw r8, 0x38(r1)
    stw r9, 0x34(r1)
    lwz r8, 0x30(r31)
    stw r8, 0x3c(r1)
    stw r0, 0x18(r1)
    bl fn_8050E098
    li r3, 0x1
lbl_fn_8050BDC8_0000196C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8050C0B8(void)
{
    nofralloc
    addis r3, r3, 0x1
    lwz r0, -0x4134(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8050C0B8_000019D4
    bge lbl_fn_8050C0B8_000019AC
    cmpwi r0, 0x0
    beq lbl_fn_8050C0B8_000019C4
    bge lbl_fn_8050C0B8_000019CC
    b lbl_fn_8050C0B8_000019F4
lbl_fn_8050C0B8_000019AC:
    cmpwi r0, 0x6
    beq lbl_fn_8050C0B8_000019E4
    blt lbl_fn_8050C0B8_000019DC
    cmpwi r0, 0x9
    bge lbl_fn_8050C0B8_000019F4
    b lbl_fn_8050C0B8_000019EC
lbl_fn_8050C0B8_000019C4:
    li r3, 0x0
    blr
lbl_fn_8050C0B8_000019CC:
    li r3, 0x1
    blr
lbl_fn_8050C0B8_000019D4:
    li r3, 0x1
    blr
lbl_fn_8050C0B8_000019DC:
    li r3, 0x2
    blr
lbl_fn_8050C0B8_000019E4:
    li r3, 0x3
    blr
lbl_fn_8050C0B8_000019EC:
    li r3, 0x4
    blr
lbl_fn_8050C0B8_000019F4:
    li r3, 0x0
    blr
}

asm void fn_8050C12C(void)
{
    nofralloc
    addis r6, r3, 0x1
    lwz r0, -0x4180(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8050C12C_00001A14
    li r3, 0x0
    blr
lbl_fn_8050C12C_00001A14:
    lwz r3, -0x4180(r6)
    li r0, 0x0
    subi r3, r3, 0x1
    slwi r3, r3, 3
    add r5, r6, r3
    lwz r3, -0x417c(r5)
    lwz r5, -0x4178(r5)
    stw r0, -0x4180(r6)
    stw r5, 0x0(r4)
    blr
}
