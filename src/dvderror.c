#include "revolution/types.h"
#include "revolution/os.h"

/* External symbols */
extern u8 lbl_807D1060[];
extern u32 lbl_8087FD9C;
extern void (*lbl_8087FDA0)(s32, s32);
extern u32 lbl_8087FD98;
extern u8 lbl_807AA178[];
extern u8 lbl_807AA194[];
extern u8 lbl_807D10EC[];
extern u8 __ErrorInfo[];
extern void fn_805FF7A0(void);
extern void fn_805FF770(s32);
extern void DCFlushRange(void*, u32);
extern s32 fn_8061E8C0(void*, void*, s32, void*, void*);
extern s32 fn_8061FBE0(void*, void*, void*);
extern s32 fn_8061E9E0(void*, s32, s32, void*, void*);
extern s32 fn_8061E7D0(void*, void*, s32, void*, void*);
extern s32 NANDPrivateOpenAsync(void*, void*, s32, void*, void*);
extern s32 fn_8061E3F0(void*, s32, s32, void*, void*);
extern s32 fn_80602720(void);
extern s32 fn_80602710(void);
extern s32 fn_8061ECE0(void*, s32, s32, void*, void*);
extern s32 fn_80602A10(void*);
extern OSTime OSGetTime(void);
extern void fn_80695FFC(void);
extern s32 fn_806028A0(void*);
extern s32 fn_80682544(const void*, const void*, u32);

/* Function declarations */
void fn_805FF800(void);
void fn_805FF900(void);
void fn_805FFA60(void);
void fn_805FFB20(void);
void fn_805FFC10(void);
void fn_805FFCB0(void);
void fn_805FFDB0(void);
void fn_805FFED0(void);
void fn_805FFF70(void);
void fn_80600010(void);
void fn_806000A0(void);
void fn_80600120(void);
void fn_80600190(void);

asm void fn_805FF800(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807D1060@ha
    addi r31, r31, lbl_807D1060@l
    lwz r4, lbl_8087FD9C
    addi r5, r4, 0x1
    slwi r0, r5, 7
    cmplw r3, r0
    bne lbl_fn_805FF800_cc
    cmpwi r4, 0x0
    bne lbl_fn_805FF800_60
    lis r4, 0x2492
    addi r3, r31, 0x160
    addi r0, r4, 0x4925
    mulhwu r4, r0, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi r0, r0, 2
    mulli r0, r0, 0x7
    subf r0, r0, r5
    stw r0, 0x18(r3)
lbl_fn_805FF800_60:
    addi r3, r31, 0x160
    li r4, 0x80
    bl DCFlushRange
    lis r6, fn_805FF7A0@ha
    addi r3, r31, 0x0
    addi r4, r31, 0x160
    addi r7, r31, 0x8c
    addi r6, r6, fn_805FF7A0@l
    li r5, 0x80
    bl fn_8061E8C0
    cmpwi r3, 0x0
    beq lbl_fn_805FF800_e8
    lis r4, fn_805FF770@ha
    addi r3, r31, 0x0
    addi r4, r4, fn_805FF770@l
    addi r5, r31, 0x8c
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_805FF800_e8
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FF800_e8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FF800_e8
lbl_fn_805FF800_cc:
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FF800_e8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FF800_e8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FF900(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x80
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807D1060@ha
    addi r31, r31, lbl_807D1060@l
    bne lbl_fn_805FF900_224
    lwz r4, lbl_8087FD9C
    lis r6, fn_805FF800@ha
    addi r3, r31, 0x0
    addi r7, r31, 0x8c
    addi r0, r4, 0x1
    addi r6, r6, fn_805FF800@l
    slwi r4, r0, 7
    li r5, 0x0
    bl fn_8061E9E0
    cmpwi r3, 0x0
    beq lbl_fn_805FF900_240
    lwz r4, lbl_8087FD9C
    addi r5, r4, 0x1
    slwi r3, r5, 7
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_805FF900_204
    cmpwi r4, 0x0
    bne lbl_fn_805FF900_198
    lis r4, 0x2492
    addi r3, r31, 0x160
    addi r0, r4, 0x4925
    mulhwu r4, r0, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi r0, r0, 2
    mulli r0, r0, 0x7
    subf r0, r0, r5
    stw r0, 0x18(r3)
lbl_fn_805FF900_198:
    addi r3, r31, 0x160
    li r4, 0x80
    bl DCFlushRange
    lis r6, fn_805FF7A0@ha
    addi r3, r31, 0x0
    addi r4, r31, 0x160
    addi r7, r31, 0x8c
    addi r6, r6, fn_805FF7A0@l
    li r5, 0x80
    bl fn_8061E8C0
    cmpwi r3, 0x0
    beq lbl_fn_805FF900_240
    lis r4, fn_805FF770@ha
    addi r3, r31, 0x0
    addi r4, r4, fn_805FF770@l
    addi r5, r31, 0x8c
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_805FF900_240
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FF900_240
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FF900_240
lbl_fn_805FF900_204:
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FF900_240
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FF900_240
lbl_fn_805FF900_224:
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FF900_240
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FF900_240:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FFA60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x80
    lis r7, lbl_807D1060@ha
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807D1060@l
    bne lbl_fn_805FFA60_2f0
    addi r4, r7, 0x1e0
    lis r3, 0x2492
    lwz r5, 0x18(r4)
    addi r0, r3, 0x4925
    lis r6, fn_805FF900@ha
    addi r3, r7, 0x0
    addi r9, r5, 0x1
    addi r7, r7, 0x8c
    mulhwu r8, r0, r9
    addi r6, r6, fn_805FF900@l
    li r5, 0x80
    subf r0, r8, r9
    srwi r0, r0, 1
    add r0, r0, r8
    srwi r0, r0, 2
    mulli r0, r0, 0x7
    subf r0, r0, r9
    stw r0, 0x18(r4)
    bl fn_8061E8C0
    cmpwi r3, 0x0
    beq lbl_fn_805FFA60_30c
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFA60_30c
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FFA60_30c
lbl_fn_805FFA60_2f0:
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFA60_30c
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FFA60_30c:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FFB20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x80
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807D1060@ha
    addi r31, r31, lbl_807D1060@l
    bne lbl_fn_805FFB20_390
    addi r3, r31, 0x1e0
    lis r6, fn_805FFA60@ha
    lwz r0, 0x18(r3)
    addi r3, r31, 0x0
    stw r0, lbl_8087FD9C
    addi r6, r6, fn_805FFA60@l
    addi r7, r31, 0x8c
    li r4, 0x80
    li r5, 0x0
    bl fn_8061E9E0
    cmpwi r3, 0x0
    beq lbl_fn_805FFB20_3f4
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFB20_3f4
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FFB20_3f4
lbl_fn_805FFB20_390:
    addi r4, r31, 0x160
    li r0, 0x1
    lis r6, fn_805FF7A0@ha
    stw r0, 0x18(r4)
    addi r3, r31, 0x0
    addi r7, r31, 0x8c
    addi r6, r6, fn_805FF7A0@l
    li r5, 0x80
    bl fn_8061E8C0
    cmpwi r3, 0x0
    beq lbl_fn_805FFB20_3f4
    lis r4, fn_805FF770@ha
    addi r3, r31, 0x0
    addi r4, r4, fn_805FF770@l
    addi r5, r31, 0x8c
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_805FFB20_3f4
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFB20_3f4
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FFB20_3f4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FFC10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    lis r7, lbl_807D1060@ha
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807D1060@l
    bne lbl_fn_805FFC10_484
    addi r5, r7, 0x160
    li r3, 0x0
    li r0, 0x1
    lis r6, fn_805FF900@ha
    stw r3, lbl_8087FD9C
    addi r3, r7, 0x0
    addi r4, r7, 0x1e0
    addi r6, r6, fn_805FF900@l
    stw r0, 0x18(r5)
    addi r7, r7, 0x8c
    li r5, 0x80
    bl fn_8061E8C0
    cmpwi r3, 0x0
    beq lbl_fn_805FFC10_4a0
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFC10_4a0
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FFC10_4a0
lbl_fn_805FFC10_484:
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFC10_4a0
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FFC10_4a0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FFCB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x80
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807D1060@ha
    addi r31, r31, lbl_807D1060@l
    bne lbl_fn_805FFCB0_55c
    lis r6, fn_805FFB20@ha
    addi r3, r31, 0x0
    addi r4, r31, 0x1e0
    addi r7, r31, 0x8c
    addi r6, r6, fn_805FFB20@l
    li r5, 0x80
    bl fn_8061E7D0
    cmpwi r3, 0x0
    beq lbl_fn_805FFCB0_59c
    addi r4, r31, 0x160
    li r0, 0x1
    lis r6, fn_805FF7A0@ha
    stw r0, 0x18(r4)
    addi r3, r31, 0x0
    addi r7, r31, 0x8c
    addi r6, r6, fn_805FF7A0@l
    li r5, 0x80
    bl fn_8061E8C0
    cmpwi r3, 0x0
    beq lbl_fn_805FFCB0_59c
    lis r4, fn_805FF770@ha
    addi r3, r31, 0x0
    addi r4, r4, fn_805FF770@l
    addi r5, r31, 0x8c
    bl fn_8061FBE0
    cmpwi r3, 0x0
    beq lbl_fn_805FFCB0_59c
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFCB0_59c
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FFCB0_59c
lbl_fn_805FFCB0_55c:
    lis r6, fn_805FFC10@ha
    addi r3, r31, 0x0
    addi r6, r6, fn_805FFC10@l
    addi r7, r31, 0x8c
    li r4, 0x0
    li r5, 0x0
    bl fn_8061E9E0
    cmpwi r3, 0x0
    beq lbl_fn_805FFCB0_59c
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFCB0_59c
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FFCB0_59c:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FFDB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807D1060@ha
    addi r31, r31, lbl_807D1060@l
    bne lbl_fn_805FFDB0_69c
    lwz r0, lbl_8087FD98
    cmpwi r0, 0x0
    beq lbl_fn_805FFDB0_644
    lis r6, fn_805FFCB0@ha
    addi r3, r31, 0x0
    addi r6, r6, fn_805FFCB0@l
    addi r7, r31, 0x8c
    li r4, 0x80
    li r5, 0x0
    bl fn_8061E9E0
    cmpwi r3, 0x0
    beq lbl_fn_805FFDB0_6b8
    lis r6, fn_805FFC10@ha
    addi r3, r31, 0x0
    addi r6, r6, fn_805FFC10@l
    addi r7, r31, 0x8c
    li r4, 0x0
    li r5, 0x0
    bl fn_8061E9E0
    cmpwi r3, 0x0
    beq lbl_fn_805FFDB0_6b8
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFDB0_6b8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FFDB0_6b8
lbl_fn_805FFDB0_644:
    addi r5, r31, 0x160
    li r3, 0x0
    li r0, 0x1
    lis r6, fn_805FF900@ha
    stw r3, lbl_8087FD9C
    addi r3, r31, 0x0
    addi r4, r31, 0x1e0
    addi r6, r6, fn_805FF900@l
    stw r0, 0x18(r5)
    addi r7, r31, 0x8c
    li r5, 0x80
    bl fn_8061E8C0
    cmpwi r3, 0x0
    beq lbl_fn_805FFDB0_6b8
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFDB0_6b8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FFDB0_6b8
lbl_fn_805FFDB0_69c:
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFDB0_6b8
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FFDB0_6b8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FFED0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_805FFED0_6f4
    cmpwi r3, -0x6
    bne lbl_fn_805FFED0_744
    li r0, 0x1
    stw r0, lbl_8087FD98
lbl_fn_805FFED0_6f4:
    lis r3, lbl_807AA178@ha
    lis r4, lbl_807D1060@ha
    lis r6, fn_805FFDB0@ha
    lis r7, lbl_807D10EC@ha
    addi r3, r3, lbl_807AA178@l
    addi r4, r4, lbl_807D1060@l
    addi r6, r6, fn_805FFDB0@l
    addi r7, r7, lbl_807D10EC@l
    li r5, 0x3
    bl NANDPrivateOpenAsync
    cmpwi r3, 0x0
    beq lbl_fn_805FFED0_760
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFED0_760
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FFED0_760
lbl_fn_805FFED0_744:
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFED0_760
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FFED0_760:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805FFF70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_805FFF70_78c
    cmpwi r3, -0x6
    bne lbl_fn_805FFF70_7d8
lbl_fn_805FFF70_78c:
    lis r3, lbl_807AA178@ha
    lis r6, fn_805FFED0@ha
    lis r7, lbl_807D10EC@ha
    li r4, 0x3f
    addi r3, r3, lbl_807AA178@l
    addi r6, r6, fn_805FFED0@l
    addi r7, r7, lbl_807D10EC@l
    li r5, 0x0
    bl fn_8061E3F0
    cmpwi r3, 0x0
    beq lbl_fn_805FFF70_7f4
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFF70_7f4
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_fn_805FFF70_7f4
lbl_fn_805FFF70_7d8:
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_805FFF70_7f4
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_805FFF70_7f4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80600010(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x1
    stw r0, 0x14(r1)
    bne lbl_fn_80600010_838
    bl fn_80602720
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r3, 0x14(r4)
    b lbl_fn_80600010_848
lbl_fn_80600010_838:
    lis r3, __ErrorInfo@ha
    li r0, -0x1
    addi r3, r3, __ErrorInfo@l
    stw r0, 0x14(r3)
lbl_fn_80600010_848:
    lis r3, lbl_807AA194@ha
    lis r6, fn_805FFF70@ha
    lis r7, lbl_807D10EC@ha
    li r4, 0x3f
    addi r3, r3, lbl_807AA194@l
    addi r6, r6, fn_805FFF70@l
    addi r7, r7, lbl_807D10EC@l
    li r5, 0x0
    bl fn_8061ECE0
    cmpwi r3, 0x0
    beq lbl_fn_80600010_890
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_80600010_890
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_80600010_890:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806000A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x1
    stw r0, 0x14(r1)
    bne lbl_fn_806000A0_8c8
    bl fn_80602710
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r3, 0x10(r4)
    b lbl_fn_806000A0_8d8
lbl_fn_806000A0_8c8:
    lis r3, __ErrorInfo@ha
    li r0, -0x1
    addi r3, r3, __ErrorInfo@l
    stw r0, 0x10(r3)
lbl_fn_806000A0_8d8:
    lis r3, fn_80600010@ha
    addi r3, r3, fn_80600010@l
    bl fn_80602A10
    cmpwi r3, 0x0
    bne lbl_fn_806000A0_908
    lwz r12, lbl_8087FDA0
    cmpwi r12, 0x0
    beq lbl_fn_806000A0_908
    li r3, 0x2
    li r4, 0x0
    mtctr r12
    bctrl
lbl_fn_806000A0_908:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80600120(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, __ErrorInfo@ha
    addi r31, r31, __ErrorInfo@l
    stw r30, 0x8(r1)
    mr r30, r4
    stw r3, 0x8(r31)
    bl OSGetTime
    lis r6, 0x8000
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r6, r0, 2
    bl fn_80695FFC
    lis r3, fn_806000A0@ha
    stw r4, 0xc(r31)
    addi r3, r3, fn_806000A0@l
    stw r30, lbl_8087FDA0
    bl fn_806028A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80600190(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, 0x0(r3)
    stw r31, 0xc(r1)
    mr r31, r4
    extsb. r0, r0
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80600190_9dc
    lbz r0, 0x0(r4)
    extsb. r0, r0
    beq lbl_fn_80600190_9dc
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_80600190_9dc
    li r3, 0x0
    b lbl_fn_80600190_a68
lbl_fn_80600190_9dc:
    lbz r0, 0x4(r30)
    extsb. r0, r0
    beq lbl_fn_80600190_a0c
    lbz r0, 0x4(r31)
    extsb. r0, r0
    beq lbl_fn_80600190_a0c
    addi r3, r30, 0x4
    addi r4, r31, 0x4
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_80600190_a14
lbl_fn_80600190_a0c:
    li r3, 0x0
    b lbl_fn_80600190_a68
lbl_fn_80600190_a14:
    lbz r3, 0x6(r30)
    cmplwi r3, 0xff
    beq lbl_fn_80600190_a3c
    lbz r0, 0x6(r31)
    cmplwi r0, 0xff
    beq lbl_fn_80600190_a3c
    cmplw r3, r0
    beq lbl_fn_80600190_a3c
    li r3, 0x0
    b lbl_fn_80600190_a68
lbl_fn_80600190_a3c:
    lbz r3, 0x7(r30)
    cmplwi r3, 0xff
    beq lbl_fn_80600190_a64
    lbz r0, 0x7(r31)
    cmplwi r0, 0xff
    beq lbl_fn_80600190_a64
    cmplw r3, r0
    beq lbl_fn_80600190_a64
    li r3, 0x0
    b lbl_fn_80600190_a68
lbl_fn_80600190_a64:
    li r3, 0x1
lbl_fn_80600190_a68:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
