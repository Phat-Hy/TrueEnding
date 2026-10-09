#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __va_arg(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_806540A0(void);
extern void fn_806572D0(void);
extern void fn_80657AF0(void);
extern void fn_80658170(void);
extern void fn_80658220(void);
extern void fn_8065F530(void);
extern void fn_80660B90(void);
extern void fn_80660C50(void);
extern void fn_80661300(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 jumptable_80779950[];
extern u8 lbl_80734DC8[];
extern u8 lbl_80734DD0[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F018;
extern u32 lbl_80881298;
extern u32 lbl_8088129C;
extern u32 lbl_808812A0;
extern u32 lbl_808812A4;
extern u32 lbl_808812A8;
extern u32 lbl_808812AC;
extern u32 lbl_808812B0;
extern u32 lbl_808812B4;
extern u32 lbl_808812B8;
extern u32 lbl_808812BC;
extern u32 lbl_808812C0;
extern u32 lbl_808812C4;

/* Function declarations */
void fn_800DD8A8(void);
void fn_800DDA34(void);
void fn_800DDA70(void);
void fn_800DDAC4(void);
void fn_800DDB14(void);
void fn_800DDB4C(void);
void fn_800DDD18(void);
void fn_800DEB04(void);
void fn_800DEEDC(void);
void fn_800DEF04(void);
void fn_800DEF2C(void);
void fn_800DEF54(void);
void fn_800DEF7C(void);
void fn_800DEF94(void);
void fn_800DEFAC(void);

asm void fn_800DD8A8(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stmw r27, 0x17c(r1)
    mr r30, r3
    mr r31, r4
    mr r27, r5
    bne cr1, lbl_fn_800DD8A8_00000040
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_800DD8A8_00000040:
    addi r11, r1, 0x198
    addi r0, r1, 0x8
    lis r12, 0x300
    stw r3, 0x8(r1)
    addi r29, r1, 0x78
    li r28, 0x0
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_800DD8A8_000000A0
lbl_fn_800DD8A8_00000084:
    addi r3, r1, 0x68
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    addi r28, r28, 0x1
    stw r0, 0x0(r29)
    addi r29, r29, 0x4
lbl_fn_800DD8A8_000000A0:
    cmpw r28, r27
    blt lbl_fn_800DD8A8_00000084
    mr r7, r30
    addi r5, r1, 0x78
    li r3, 0x0
    li r6, 0x25
    b lbl_fn_800DD8A8_00000154
lbl_fn_800DD8A8_000000BC:
    cmplwi r0, 0x25
    beq lbl_fn_800DD8A8_000000D8
    lhz r0, 0x0(r31)
    addi r31, r31, 0x2
    sth r0, 0x0(r7)
    addi r7, r7, 0x2
    b lbl_fn_800DD8A8_00000154
lbl_fn_800DD8A8_000000D8:
    li r4, 0x0
    addi r31, r31, 0x2
    b lbl_fn_800DD8A8_00000128
lbl_fn_800DD8A8_000000E4:
    lhz r0, 0x0(r31)
    cmpwi r0, 0x25
    beq lbl_fn_800DD8A8_000000FC
    cmpwi r0, 0x73
    beq lbl_fn_800DD8A8_0000010C
    b lbl_fn_800DD8A8_00000120
lbl_fn_800DD8A8_000000FC:
    sth r6, 0xf8(r1)
    addi r4, r1, 0xf8
    sth r3, 0xfa(r1)
    b lbl_fn_800DD8A8_00000128
lbl_fn_800DD8A8_0000010C:
    lhzu r0, 0x2(r31)
    slwi r0, r0, 2
    add r4, r5, r0
    lwz r4, -0xc0(r4)
    b lbl_fn_800DD8A8_00000128
lbl_fn_800DD8A8_00000120:
    sth r3, 0xf8(r1)
    addi r4, r1, 0xf8
lbl_fn_800DD8A8_00000128:
    cmpwi r4, 0x0
    beq lbl_fn_800DD8A8_000000E4
    addi r31, r31, 0x2
    b lbl_fn_800DD8A8_00000148
lbl_fn_800DD8A8_00000138:
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    sth r0, 0x0(r7)
    addi r7, r7, 0x2
lbl_fn_800DD8A8_00000148:
    lhz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800DD8A8_00000138
lbl_fn_800DD8A8_00000154:
    lhz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800DD8A8_000000BC
    li r4, 0x0
    sth r4, 0x0(r7)
    subf r3, r30, r7
    lmw r27, 0x17c(r1)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_800DDA34(void)
{
    nofralloc
    lwz r5, lbl_8087F018
    cmpwi r5, 0x0
    beqlr
    cmpwi r4, 0x0
    bne lbl_fn_800DDA34_000001B4
    slwi r0, r3, 2
    li r4, 0x1
    add r3, r5, r0
    stw r4, 0x40c0(r3)
    blr
lbl_fn_800DDA34_000001B4:
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r5, r0
    stw r4, 0x40c0(r3)
    blr
}

asm void fn_800DDA70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F018
    cmpwi r0, 0x0
    bne lbl_fn_800DDA70_0000020C
    lis r5, lbl_80734DD0@ha
    li r3, 0x40f8
    addi r5, r5, lbl_80734DD0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800DDA70_00000208
    bl fn_800DDB4C
lbl_fn_800DDA70_00000208:
    stw r3, lbl_8087F018
lbl_fn_800DDA70_0000020C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DDAC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800827E0
    lis r7, lbl_80734DD0@ha
    mr r4, r31
    addi r7, r7, lbl_80734DD0@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DDB14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DDB4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, fn_800DDB14@ha
    li r6, 0x5
    stw r0, 0x24(r1)
    li r0, 0x0
    li r5, 0xf
    addi r4, r4, fn_800DDB14@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r5, 0x3c10(r3)
    lis r5, fn_800DDAC4@ha
    stw r6, 0x3c14(r3)
    stw r0, 0x40a8(r3)
    stw r0, 0x40bc(r3)
    stw r6, 0x40f0(r3)
    addi r3, r5, fn_800DDAC4@l
    bl fn_8065F530
    bl fn_80657AF0
    li r30, 0x0
    lis r31, fn_800DDA34@ha
lbl_fn_800DDB4C_00000300:
    mr r3, r30
    addi r4, r31, fn_800DDA34@l
    bl fn_80658170
    mr r3, r30
    bl fn_80658220
    addi r30, r30, 0x1
    cmpwi r30, 0x4
    blt lbl_fn_800DDB4C_00000300
    lwz r0, 0x40f0(r29)
    clrlwi r3, r0, 24
    bl fn_80660C50
    addi r3, r29, 0x3c00
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0x3c18
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0x3c28
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0x3c38
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0x3c48
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0x3c58
    li r4, 0x0
    li r5, 0x190
    bl memset
    addi r3, r29, 0x3de8
    li r4, 0x0
    li r5, 0xb0
    bl memset
    addi r3, r29, 0x3e98
    li r4, 0x0
    li r5, 0xb0
    bl memset
    addi r3, r29, 0x3f48
    li r4, 0x0
    li r5, 0x140
    bl memset
    addi r3, r29, 0x40ac
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0x40c0
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r0, 0x1
    stw r0, 0x40d0(r29)
    addi r3, r29, 0x40e0
    li r4, 0x0
    stw r0, 0x40d4(r29)
    li r5, 0x10
    stw r0, 0x40d8(r29)
    stw r0, 0x40dc(r29)
    bl memset
    mr r3, r29
    li r4, 0x0
    li r5, 0x3c00
    bl memset
    li r31, 0x0
lbl_fn_800DDB4C_00000414:
    mr r3, r31
    bl fn_806540A0
    addi r31, r31, 0x1
    cmpwi r31, 0x4
    blt lbl_fn_800DDB4C_00000414
    mr r30, r29
    li r31, 0x0
lbl_fn_800DDB4C_00000430:
    mr r3, r31
    mr r4, r30
    li r5, 0x10
    bl fn_806572D0
    addi r31, r31, 0x1
    addi r30, r30, 0xf00
    cmpwi r31, 0x4
    blt lbl_fn_800DDB4C_00000430
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DDD18(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    stfd f26, 0x90(r1)
    psq_st f26, 0x98(r1), 0, 0
    stfd f25, 0x80(r1)
    psq_st f25, 0x88(r1), 0, 0
    stfd f24, 0x70(r1)
    psq_st f24, 0x78(r1), 0, 0
    bl _savegpr_14
    lwz r10, 0x40c0(r3)
    mr r15, r3
    lwz r9, 0x40c4(r3)
    li r4, 0x0
    lwz r7, 0x40c8(r3)
    neg r0, r10
    lwz r5, 0x40cc(r3)
    neg r8, r9
    neg r6, r7
    or r10, r0, r10
    or r6, r6, r7
    neg r0, r5
    or r0, r0, r5
    or r8, r8, r9
    srwi r7, r10, 31
    srwi r6, r6, 31
    srwi r5, r8, 31
    srwi r0, r0, 31
    stb r5, 0x9(r1)
    li r5, 0x10
    addi r3, r3, 0x3c28
    stb r7, 0x8(r1)
    stb r6, 0xa(r1)
    stb r0, 0xb(r1)
    bl memset
    addi r3, r15, 0x3c38
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r15, 0x3c48
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r15, 0x3e98
    addi r4, r15, 0x3de8
    li r5, 0xb0
    bl memcpy
    mr r16, r15
    li r14, 0x0
lbl_fn_800DDD18_00000560:
    mr r3, r14
    mr r4, r16
    li r5, 0x10
    bl fn_806572D0
    addi r14, r14, 0x1
    addi r16, r16, 0xf00
    cmpwi r14, 0x4
    blt lbl_fn_800DDD18_00000560
    lis r3, lbl_80734DC8@ha
    lfs f25, lbl_80881298
    lfd f28, lbl_80734DC8@l(r3)
    mr r24, r15
    lfs f29, lbl_808812B0
    mr r22, r15
    lfs f30, lbl_8088129C
    mr r21, r15
    lfs f31, lbl_808812A0
    mr r20, r15
    lfs f26, lbl_808812A4
    mr r19, r15
    lfs f27, lbl_808812AC
    mr r17, r15
    lfs f24, lbl_808812B4
    addi r23, r1, 0x8
    li r16, 0x0
    li r18, 0x0
    li r28, 0x0
    li r27, 0x1
    li r29, -0x1
    lis r26, 0x1
    lis r25, jumptable_80779950@ha
    lis r30, 0x4330
    li r31, 0x5
    li r14, 0x14
lbl_fn_800DDD18_000005E8:
    lbz r0, 0x0(r23)
    lwz r3, 0x3c00(r24)
    cmpwi r0, 0x0
    clrrwi r0, r3, 1
    stw r0, 0x3c00(r24)
    bne lbl_fn_800DDD18_0000079C
    lbz r0, 0x5d(r22)
    extsb. r0, r0
    bne lbl_fn_800DDD18_0000079C
    cmpwi r16, 0x0
    bne lbl_fn_800DDD18_000011A4
    mr r5, r21
    li r6, 0x0
    mtctr r31
lbl_fn_800DDD18_00000620:
    lwz r0, 0x3c18(r24)
    slw r4, r27, r6
    and r3, r4, r0
    cmplw r4, r3
    bne lbl_fn_800DDD18_00000640
    lwz r0, 0x3c38(r24)
    or r0, r0, r4
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_00000640:
    stw r29, 0x3c58(r5)
    addi r6, r6, 0x1
    lwz r0, 0x3c18(r24)
    andc r0, r0, r4
    slw r4, r27, r6
    and r3, r4, r0
    stw r0, 0x3c18(r24)
    cmplw r4, r3
    bne lbl_fn_800DDD18_00000670
    lwz r0, 0x3c38(r24)
    or r0, r0, r4
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_00000670:
    stw r29, 0x3c5c(r5)
    addi r6, r6, 0x1
    lwz r0, 0x3c18(r24)
    andc r0, r0, r4
    slw r4, r27, r6
    and r3, r4, r0
    stw r0, 0x3c18(r24)
    cmplw r4, r3
    bne lbl_fn_800DDD18_000006A0
    lwz r0, 0x3c38(r24)
    or r0, r0, r4
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_000006A0:
    stw r29, 0x3c60(r5)
    addi r6, r6, 0x1
    lwz r0, 0x3c18(r24)
    andc r0, r0, r4
    slw r4, r27, r6
    and r3, r4, r0
    stw r0, 0x3c18(r24)
    cmplw r4, r3
    bne lbl_fn_800DDD18_000006D0
    lwz r0, 0x3c38(r24)
    or r0, r0, r4
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_000006D0:
    stw r29, 0x3c64(r5)
    addi r6, r6, 0x1
    lwz r0, 0x3c18(r24)
    andc r0, r0, r4
    slw r4, r27, r6
    and r3, r4, r0
    stw r0, 0x3c18(r24)
    cmplw r4, r3
    bne lbl_fn_800DDD18_00000700
    lwz r0, 0x3c38(r24)
    or r0, r0, r4
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_00000700:
    stw r29, 0x3c68(r5)
    addi r5, r5, 0x14
    addi r6, r6, 0x1
    lwz r0, 0x3c18(r24)
    andc r0, r0, r4
    stw r0, 0x3c18(r24)
    bdnz lbl_fn_800DDD18_00000620
    stfs f25, 0x3de8(r20)
    stfs f25, 0x3dec(r20)
    stfs f25, 0x3df0(r20)
    stfs f25, 0x3df4(r20)
    stfs f25, 0x3df8(r20)
    stfs f25, 0x3dfc(r20)
    stfs f25, 0x3e00(r20)
    stfs f25, 0x3e04(r20)
    stfs f25, 0x3e08(r20)
    stfs f25, 0x3e0c(r20)
    stfs f25, 0x3e10(r20)
    stfs f25, 0x3f48(r19)
    stfs f25, 0x3f4c(r19)
    stfs f25, 0x3f50(r19)
    stfs f25, 0x3f54(r19)
    stfs f25, 0x3f58(r19)
    stfs f25, 0x3f5c(r19)
    stfs f25, 0x3f60(r19)
    stfs f25, 0x3f64(r19)
    stfs f25, 0x3f68(r19)
    stfs f25, 0x3f6c(r19)
    stfs f25, 0x3f70(r19)
    stfs f25, 0x3f74(r19)
    stfs f25, 0x3f78(r19)
    stfs f25, 0x3f7c(r19)
    stfs f25, 0x3f80(r19)
    stfs f25, 0x3f84(r19)
    stfs f25, 0x3f88(r19)
    stfs f25, 0x3f8c(r19)
    stfs f25, 0x3f90(r19)
    stfs f25, 0x3f94(r19)
    b lbl_fn_800DDD18_000011A4
lbl_fn_800DDD18_0000079C:
    lbz r0, 0x5c(r22)
    cmplwi r0, 0x2
    bne lbl_fn_800DDD18_00000CD0
    lwz r0, 0x3c00(r24)
    mr r3, r21
    li r4, 0x0
    li r5, 0x0
    ori r0, r0, 0x1
    stw r0, 0x3c00(r24)
    lfs f0, 0x6c(r22)
    stfs f0, 0x3de8(r20)
    lfs f0, 0x70(r22)
    stfs f0, 0x3dec(r20)
    lfs f0, 0x74(r22)
    stfs f0, 0x3df0(r20)
    lfs f0, 0x78(r22)
    stfs f0, 0x3df4(r20)
    stfs f25, 0x3df8(r20)
    stfs f25, 0x3dfc(r20)
    stfs f25, 0x3e00(r20)
    stfs f25, 0x3e04(r20)
    stfs f25, 0x3e08(r20)
    stfs f25, 0x3e0c(r20)
lbl_fn_800DDD18_000007F8:
    cmplwi r4, 0x13
    bgt lbl_fn_800DDD18_00000A20
    addi r6, r25, jumptable_80779950@l
    lwzx r6, r6, r5
    mtctr r6
    bctr
    li r6, 0x2
    b lbl_fn_800DDD18_0000088C
    addi r6, r26, -0x8000
    b lbl_fn_800DDD18_0000088C
    li r6, 0x4000
    b lbl_fn_800DDD18_0000088C
    li r6, 0x1
    b lbl_fn_800DDD18_0000088C
    li r6, 0x8
    b lbl_fn_800DDD18_0000088C
    li r6, 0x400
    b lbl_fn_800DDD18_0000088C
    li r6, 0x1000
    b lbl_fn_800DDD18_0000088C
    li r6, 0x40
    b lbl_fn_800DDD18_0000088C
    li r6, 0x10
    b lbl_fn_800DDD18_0000088C
    li r6, 0x20
    b lbl_fn_800DDD18_0000088C
    li r6, 0x80
    b lbl_fn_800DDD18_0000088C
    li r6, 0x800
    b lbl_fn_800DDD18_0000088C
    li r6, 0x2000
    b lbl_fn_800DDD18_0000088C
    li r6, 0x200
    b lbl_fn_800DDD18_0000088C
    li r6, 0x80
    b lbl_fn_800DDD18_0000088C
    li r6, 0x4
lbl_fn_800DDD18_0000088C:
    cmpwi r4, 0xf
    bne lbl_fn_800DDD18_00000964
    lwz r0, 0x60(r22)
    and r0, r6, r0
    cmplw r6, r0
    beq lbl_fn_800DDD18_000008B8
    lwz r6, 0x0(r22)
    slw r0, r27, r4
    and r6, r0, r6
    cmplw r0, r6
    bne lbl_fn_800DDD18_00000934
lbl_fn_800DDD18_000008B8:
    lwz r6, 0x3c18(r24)
    slw r0, r27, r4
    and r6, r0, r6
    cmplw r0, r6
    beq lbl_fn_800DDD18_000008E8
    lwz r6, 0x3c28(r24)
    or r6, r6, r0
    stw r6, 0x3c28(r24)
    lwz r6, 0x3c48(r24)
    or r6, r6, r0
    stw r6, 0x3c48(r24)
    stw r28, 0x3c58(r3)
lbl_fn_800DDD18_000008E8:
    lwz r8, 0x3c58(r3)
    lwz r6, 0x3c10(r15)
    cmpw r8, r6
    ble lbl_fn_800DDD18_00000918
    lwz r7, 0x3c14(r15)
    divw r6, r8, r7
    mullw r6, r6, r7
    subf. r6, r6, r8
    bne lbl_fn_800DDD18_00000918
    lwz r6, 0x3c48(r24)
    or r6, r6, r0
    stw r6, 0x3c48(r24)
lbl_fn_800DDD18_00000918:
    lwz r6, 0x3c58(r3)
    addi r6, r6, 0x1
    stw r6, 0x3c58(r3)
    lwz r6, 0x3c18(r24)
    or r0, r6, r0
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000A20
lbl_fn_800DDD18_00000934:
    lwz r6, 0x3c18(r24)
    and r6, r0, r6
    cmplw r0, r6
    bne lbl_fn_800DDD18_00000950
    lwz r6, 0x3c38(r24)
    or r6, r6, r0
    stw r6, 0x3c38(r24)
lbl_fn_800DDD18_00000950:
    stw r29, 0x3c58(r3)
    lwz r6, 0x3c18(r24)
    andc r0, r6, r0
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000A20
lbl_fn_800DDD18_00000964:
    lwz r0, 0x60(r22)
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_800DDD18_000009F0
    lwz r6, 0x3c18(r24)
    slw r0, r27, r4
    and r6, r0, r6
    cmplw r0, r6
    beq lbl_fn_800DDD18_000009A4
    lwz r6, 0x3c28(r24)
    or r6, r6, r0
    stw r6, 0x3c28(r24)
    lwz r6, 0x3c48(r24)
    or r6, r6, r0
    stw r6, 0x3c48(r24)
    stw r28, 0x3c58(r3)
lbl_fn_800DDD18_000009A4:
    lwz r8, 0x3c58(r3)
    lwz r6, 0x3c10(r15)
    cmpw r8, r6
    ble lbl_fn_800DDD18_000009D4
    lwz r7, 0x3c14(r15)
    divw r6, r8, r7
    mullw r6, r6, r7
    subf. r6, r6, r8
    bne lbl_fn_800DDD18_000009D4
    lwz r6, 0x3c48(r24)
    or r6, r6, r0
    stw r6, 0x3c48(r24)
lbl_fn_800DDD18_000009D4:
    lwz r6, 0x3c58(r3)
    addi r6, r6, 0x1
    stw r6, 0x3c58(r3)
    lwz r6, 0x3c18(r24)
    or r0, r6, r0
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000A20
lbl_fn_800DDD18_000009F0:
    lwz r0, 0x3c18(r24)
    slw r6, r27, r4
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_800DDD18_00000A10
    lwz r0, 0x3c38(r24)
    or r0, r0, r6
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_00000A10:
    stw r29, 0x3c58(r3)
    lwz r0, 0x3c18(r24)
    andc r0, r0, r6
    stw r0, 0x3c18(r24)
lbl_fn_800DDD18_00000A20:
    addi r4, r4, 0x1
    addi r5, r5, 0x4
    cmpwi r4, 0x14
    addi r3, r3, 0x4
    blt lbl_fn_800DDD18_000007F8
    lwz r0, 0x3c18(r24)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_800DDD18_00000A50
    lfs f0, lbl_8088129C
    b lbl_fn_800DDD18_00000A54
lbl_fn_800DDD18_00000A50:
    lfs f0, lbl_80881298
lbl_fn_800DDD18_00000A54:
    stfs f0, 0x3f88(r19)
    lwz r0, 0x3c18(r24)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_800DDD18_00000A74
    lfs f0, lbl_8088129C
    b lbl_fn_800DDD18_00000A78
lbl_fn_800DDD18_00000A74:
    lfs f0, lbl_80881298
lbl_fn_800DDD18_00000A78:
    stfs f0, 0x3f8c(r19)
    lwz r0, 0x3c18(r24)
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_800DDD18_00000A98
    lfs f0, lbl_8088129C
    b lbl_fn_800DDD18_00000A9C
lbl_fn_800DDD18_00000A98:
    lfs f0, lbl_80881298
lbl_fn_800DDD18_00000A9C:
    stfs f0, 0x3f90(r19)
    lwz r0, 0x3c18(r24)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_800DDD18_00000ABC
    lfs f0, lbl_8088129C
    b lbl_fn_800DDD18_00000AC0
lbl_fn_800DDD18_00000ABC:
    lfs f0, lbl_80881298
lbl_fn_800DDD18_00000AC0:
    stfs f0, 0x3f94(r19)
    lfs f0, 0x3f88(r19)
    fcmpo cr0, f0, f31
    ble lbl_fn_800DDD18_00000BBC
    lwz r0, 0x3c18(r24)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_800DDD18_00000B00
    lwz r0, 0x3c28(r24)
    oris r0, r0, 0x1
    stw r0, 0x3c28(r24)
    lwz r0, 0x3c48(r24)
    oris r0, r0, 0x1
    stw r0, 0x3c48(r24)
    stw r28, 0x3c98(r21)
lbl_fn_800DDD18_00000B00:
    lwz r4, 0x3c98(r21)
    lwz r0, 0x3c10(r15)
    cmpw r4, r0
    ble lbl_fn_800DDD18_00000B30
    lwz r3, 0x3c14(r15)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_800DDD18_00000B30
    lwz r0, 0x3c48(r24)
    oris r0, r0, 0x1
    stw r0, 0x3c48(r24)
lbl_fn_800DDD18_00000B30:
    lwz r3, 0x3c98(r21)
    addi r0, r3, 0x1
    stw r0, 0x3c98(r21)
    lwz r0, 0x3c18(r24)
    oris r0, r0, 0x1
    stw r0, 0x3c18(r24)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_800DDD18_00000B70
    lwz r0, 0x3c28(r24)
    ori r0, r0, 0x4000
    stw r0, 0x3c28(r24)
    lwz r0, 0x3c48(r24)
    ori r0, r0, 0x4000
    stw r0, 0x3c48(r24)
    stw r28, 0x3c90(r21)
lbl_fn_800DDD18_00000B70:
    lwz r4, 0x3c90(r21)
    lwz r0, 0x3c10(r15)
    cmpw r4, r0
    ble lbl_fn_800DDD18_00000BA0
    lwz r3, 0x3c14(r15)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_800DDD18_00000BA0
    lwz r0, 0x3c48(r24)
    ori r0, r0, 0x4000
    stw r0, 0x3c48(r24)
lbl_fn_800DDD18_00000BA0:
    lwz r3, 0x3c90(r21)
    addi r0, r3, 0x1
    stw r0, 0x3c90(r21)
    lwz r0, 0x3c18(r24)
    ori r0, r0, 0x4000
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000C14
lbl_fn_800DDD18_00000BBC:
    lwz r0, 0x3c18(r24)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_800DDD18_00000BDC
    lwz r0, 0x3c38(r24)
    oris r0, r0, 0x1
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_00000BDC:
    stw r29, 0x3c98(r21)
    lwz r3, 0x3c18(r24)
    rlwinm r0, r3, 0, 17, 17
    rlwinm r3, r3, 0, 16, 14
    cmplwi r0, 0x4000
    stw r3, 0x3c18(r24)
    bne lbl_fn_800DDD18_00000C04
    lwz r0, 0x3c38(r24)
    ori r0, r0, 0x4000
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_00000C04:
    stw r29, 0x3c90(r21)
    lwz r0, 0x3c18(r24)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0x3c18(r24)
lbl_fn_800DDD18_00000C14:
    lfs f0, 0x3f8c(r19)
    fcmpo cr0, f0, f31
    ble lbl_fn_800DDD18_00000C9C
    lwz r0, 0x3c18(r24)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    beq lbl_fn_800DDD18_00000C50
    lwz r0, 0x3c28(r24)
    oris r0, r0, 0x2
    stw r0, 0x3c28(r24)
    lwz r0, 0x3c48(r24)
    oris r0, r0, 0x2
    stw r0, 0x3c48(r24)
    stw r28, 0x3c9c(r21)
lbl_fn_800DDD18_00000C50:
    lwz r4, 0x3c9c(r21)
    lwz r0, 0x3c10(r15)
    cmpw r4, r0
    ble lbl_fn_800DDD18_00000C80
    lwz r3, 0x3c14(r15)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_800DDD18_00000C80
    lwz r0, 0x3c48(r24)
    oris r0, r0, 0x2
    stw r0, 0x3c48(r24)
lbl_fn_800DDD18_00000C80:
    lwz r3, 0x3c9c(r21)
    addi r0, r3, 0x1
    stw r0, 0x3c9c(r21)
    lwz r0, 0x3c18(r24)
    oris r0, r0, 0x2
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000F60
lbl_fn_800DDD18_00000C9C:
    lwz r0, 0x3c18(r24)
    rlwinm r3, r0, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_800DDD18_00000CBC
    lwz r0, 0x3c38(r24)
    oris r0, r0, 0x2
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_00000CBC:
    stw r29, 0x3c9c(r21)
    lwz r0, 0x3c18(r24)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000F60
lbl_fn_800DDD18_00000CD0:
    lwz r0, 0x3c00(r24)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x3c00(r24)
    lbz r0, 0x5c(r22)
    cmplwi r0, 0x1
    bne lbl_fn_800DDD18_00000D14
    lfs f0, 0x60(r22)
    stfs f0, 0x3de8(r20)
    lfs f0, 0x64(r22)
    stfs f0, 0x3dec(r20)
    lfs f0, 0x68(r22)
    stfs f0, 0x3e04(r20)
    lfs f0, 0x6c(r22)
    stfs f0, 0x3e08(r20)
    lfs f0, 0x70(r22)
    stfs f0, 0x3e0c(r20)
    b lbl_fn_800DDD18_00000D28
lbl_fn_800DDD18_00000D14:
    stfs f25, 0x3de8(r20)
    stfs f25, 0x3dec(r20)
    stfs f25, 0x3e04(r20)
    stfs f25, 0x3e08(r20)
    stfs f25, 0x3e0c(r20)
lbl_fn_800DDD18_00000D28:
    stfs f25, 0x3df0(r20)
    stfs f25, 0x3df4(r20)
    lfs f0, 0xc(r22)
    stfs f0, 0x3df8(r20)
    lfs f0, 0x10(r22)
    stfs f0, 0x3dfc(r20)
    lfs f0, 0x14(r22)
    stfs f0, 0x3e00(r20)
    lbz r0, 0x5c(r22)
    cmplwi r0, 0x1
    beq lbl_fn_800DDD18_00000D60
    lwz r0, 0x40e0(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800DDD18_00000E6C
lbl_fn_800DDD18_00000D60:
    mr r3, r21
    li r4, 0x0
    mtctr r14
lbl_fn_800DDD18_00000D6C:
    cmpwi r4, 0x10
    slw r0, r27, r4
    blt lbl_fn_800DDD18_00000DA8
    lwz r5, 0x3c18(r24)
    and r5, r0, r5
    cmplw r0, r5
    bne lbl_fn_800DDD18_00000D94
    lwz r5, 0x3c38(r24)
    or r5, r5, r0
    stw r5, 0x3c38(r24)
lbl_fn_800DDD18_00000D94:
    stw r29, 0x3c58(r3)
    lwz r5, 0x3c18(r24)
    andc r0, r5, r0
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000E5C
lbl_fn_800DDD18_00000DA8:
    lwz r5, 0x0(r22)
    and r5, r0, r5
    cmplw r0, r5
    bne lbl_fn_800DDD18_00000E30
    lwz r5, 0x3c18(r24)
    and r5, r0, r5
    cmplw r0, r5
    beq lbl_fn_800DDD18_00000DE4
    lwz r5, 0x3c28(r24)
    or r5, r5, r0
    stw r5, 0x3c28(r24)
    lwz r5, 0x3c48(r24)
    or r5, r5, r0
    stw r5, 0x3c48(r24)
    stw r28, 0x3c58(r3)
lbl_fn_800DDD18_00000DE4:
    lwz r7, 0x3c58(r3)
    lwz r5, 0x3c10(r15)
    cmpw r7, r5
    ble lbl_fn_800DDD18_00000E14
    lwz r6, 0x3c14(r15)
    divw r5, r7, r6
    mullw r5, r5, r6
    subf. r5, r5, r7
    bne lbl_fn_800DDD18_00000E14
    lwz r5, 0x3c48(r24)
    or r5, r5, r0
    stw r5, 0x3c48(r24)
lbl_fn_800DDD18_00000E14:
    lwz r5, 0x3c58(r3)
    addi r5, r5, 0x1
    stw r5, 0x3c58(r3)
    lwz r5, 0x3c18(r24)
    or r0, r5, r0
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000E5C
lbl_fn_800DDD18_00000E30:
    lwz r5, 0x3c18(r24)
    and r5, r0, r5
    cmplw r0, r5
    bne lbl_fn_800DDD18_00000E4C
    lwz r5, 0x3c38(r24)
    or r5, r5, r0
    stw r5, 0x3c38(r24)
lbl_fn_800DDD18_00000E4C:
    stw r29, 0x3c58(r3)
    lwz r5, 0x3c18(r24)
    andc r0, r5, r0
    stw r0, 0x3c18(r24)
lbl_fn_800DDD18_00000E5C:
    addi r3, r3, 0x4
    addi r4, r4, 0x1
    bdnz lbl_fn_800DDD18_00000D6C
    b lbl_fn_800DDD18_00000F20
lbl_fn_800DDD18_00000E6C:
    lwz r0, 0x0(r22)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_800DDD18_00000EF4
    lwz r0, 0x3c18(r24)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    beq lbl_fn_800DDD18_00000EA8
    lwz r0, 0x3c28(r24)
    ori r0, r0, 0x8000
    stw r0, 0x3c28(r24)
    lwz r0, 0x3c48(r24)
    ori r0, r0, 0x8000
    stw r0, 0x3c48(r24)
    stw r28, 0x3c94(r21)
lbl_fn_800DDD18_00000EA8:
    lwz r4, 0x3c94(r21)
    lwz r0, 0x3c10(r15)
    cmpw r4, r0
    ble lbl_fn_800DDD18_00000ED8
    lwz r3, 0x3c14(r15)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_fn_800DDD18_00000ED8
    lwz r0, 0x3c48(r24)
    ori r0, r0, 0x8000
    stw r0, 0x3c48(r24)
lbl_fn_800DDD18_00000ED8:
    lwz r3, 0x3c94(r21)
    addi r0, r3, 0x1
    stw r0, 0x3c94(r21)
    lwz r0, 0x3c18(r24)
    ori r0, r0, 0x8000
    stw r0, 0x3c18(r24)
    b lbl_fn_800DDD18_00000F20
lbl_fn_800DDD18_00000EF4:
    lwz r0, 0x3c18(r24)
    rlwinm r0, r0, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_800DDD18_00000F10
    lwz r0, 0x3c38(r24)
    ori r0, r0, 0x8000
    stw r0, 0x3c38(r24)
lbl_fn_800DDD18_00000F10:
    stw r29, 0x3c94(r21)
    lwz r0, 0x3c18(r24)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x3c18(r24)
lbl_fn_800DDD18_00000F20:
    lwz r0, 0x3c18(r24)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_800DDD18_00000F38
    lfs f0, lbl_8088129C
    b lbl_fn_800DDD18_00000F3C
lbl_fn_800DDD18_00000F38:
    lfs f0, lbl_80881298
lbl_fn_800DDD18_00000F3C:
    stfs f0, 0x3f6c(r19)
    lwz r0, 0x3c18(r24)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_800DDD18_00000F58
    lfs f0, lbl_8088129C
    b lbl_fn_800DDD18_00000F5C
lbl_fn_800DDD18_00000F58:
    lfs f0, lbl_80881298
lbl_fn_800DDD18_00000F5C:
    stfs f0, 0x3f68(r19)
lbl_fn_800DDD18_00000F60:
    lfs f0, 0x3de8(r20)
    fabs f0, f0
    frsp f0, f0
    fsubs f1, f0, f26
    fcmpo cr0, f25, f1
    ble lbl_fn_800DDD18_00000F7C
    fmr f1, f25
lbl_fn_800DDD18_00000F7C:
    lfs f0, 0x3de8(r20)
    fcmpo cr0, f0, f25
    ble lbl_fn_800DDD18_00000F90
    lfs f2, lbl_8088129C
    b lbl_fn_800DDD18_00000F94
lbl_fn_800DDD18_00000F90:
    lfs f2, lbl_808812A8
lbl_fn_800DDD18_00000F94:
    fdivs f0, f1, f27
    fmuls f0, f2, f0
    stfs f0, 0x3de8(r20)
    lfs f0, 0x3dec(r20)
    fabs f0, f0
    frsp f0, f0
    fsubs f1, f0, f26
    fcmpo cr0, f25, f1
    ble lbl_fn_800DDD18_00000FBC
    fmr f1, f25
lbl_fn_800DDD18_00000FBC:
    lfs f0, 0x3dec(r20)
    fcmpo cr0, f0, f25
    ble lbl_fn_800DDD18_00000FD0
    lfs f2, lbl_8088129C
    b lbl_fn_800DDD18_00000FD4
lbl_fn_800DDD18_00000FD0:
    lfs f2, lbl_808812A8
lbl_fn_800DDD18_00000FD4:
    fdivs f0, f1, f27
    fmuls f0, f2, f0
    stfs f0, 0x3dec(r20)
    lfs f0, 0x3df0(r20)
    fabs f0, f0
    frsp f0, f0
    fsubs f1, f0, f26
    fcmpo cr0, f25, f1
    ble lbl_fn_800DDD18_00000FFC
    fmr f1, f25
lbl_fn_800DDD18_00000FFC:
    lfs f0, 0x3df0(r20)
    fcmpo cr0, f0, f25
    ble lbl_fn_800DDD18_00001010
    lfs f2, lbl_8088129C
    b lbl_fn_800DDD18_00001014
lbl_fn_800DDD18_00001010:
    lfs f2, lbl_808812A8
lbl_fn_800DDD18_00001014:
    fdivs f0, f1, f27
    fmuls f0, f2, f0
    stfs f0, 0x3df0(r20)
    lfs f0, 0x3df4(r20)
    fabs f0, f0
    frsp f0, f0
    fsubs f1, f0, f26
    fcmpo cr0, f25, f1
    ble lbl_fn_800DDD18_0000103C
    fmr f1, f25
lbl_fn_800DDD18_0000103C:
    lfs f0, 0x3df4(r20)
    fcmpo cr0, f0, f25
    ble lbl_fn_800DDD18_00001050
    lfs f2, lbl_8088129C
    b lbl_fn_800DDD18_00001054
lbl_fn_800DDD18_00001050:
    lfs f2, lbl_808812A8
lbl_fn_800DDD18_00001054:
    fdivs f0, f1, f27
    mr r3, r15
    mr r4, r16
    li r5, 0x0
    li r6, 0x14
    li r7, 0x15
    fmuls f0, f2, f0
    stfs f0, 0x3df4(r20)
    bl fn_800DEB04
    mr r3, r15
    mr r4, r16
    li r5, 0x1
    li r6, 0x16
    li r7, 0x17
    bl fn_800DEB04
    add r3, r22, r18
    lbz r0, 0x5e(r3)
    extsb r0, r0
    cmpwi r0, 0x2
    blt lbl_fn_800DDD18_0000117C
    lwz r4, lbl_8087EEE0
    lfs f0, 0x20(r22)
    lwz r3, 0x3c(r4)
    lwz r0, 0x40(r4)
    fmadds f0, f29, f0, f30
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    xoris r0, r0, 0x8000
    stw r30, 0x10(r1)
    lfd f1, 0x10(r1)
    stw r0, 0x1c(r1)
    fsubs f2, f1, f28
    stw r30, 0x18(r1)
    fmuls f0, f2, f0
    lfd f1, 0x18(r1)
    fsubs f1, f1, f28
    fmuls f0, f31, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_800DDD18_000010F4
    fmr f0, f2
lbl_fn_800DDD18_000010F4:
    fcmpo cr0, f25, f0
    ble lbl_fn_800DDD18_00001104
    fmr f2, f25
    b lbl_fn_800DDD18_00001124
lbl_fn_800DDD18_00001104:
    lfs f0, 0x20(r22)
    fmadds f0, f29, f0, f30
    fmuls f0, f2, f0
    fmuls f0, f31, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_800DDD18_00001120
    b lbl_fn_800DDD18_00001124
lbl_fn_800DDD18_00001120:
    fmr f2, f0
lbl_fn_800DDD18_00001124:
    stfs f2, 0x4088(r17)
    lfs f0, 0x24(r22)
    fmadds f0, f29, f0, f30
    fmuls f0, f1, f0
    fmuls f0, f31, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_800DDD18_00001144
    fmr f0, f1
lbl_fn_800DDD18_00001144:
    fcmpo cr0, f25, f0
    ble lbl_fn_800DDD18_00001154
    fmr f1, f25
    b lbl_fn_800DDD18_00001174
lbl_fn_800DDD18_00001154:
    lfs f0, 0x24(r22)
    fmadds f0, f29, f0, f30
    fmuls f0, f1, f0
    fmuls f0, f31, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_800DDD18_00001170
    b lbl_fn_800DDD18_00001174
lbl_fn_800DDD18_00001170:
    fmr f1, f0
lbl_fn_800DDD18_00001174:
    stfs f1, 0x408c(r17)
    b lbl_fn_800DDD18_00001180
lbl_fn_800DDD18_0000117C:
    stfs f24, 0x4088(r17)
lbl_fn_800DDD18_00001180:
    lwz r3, 0x40ac(r24)
    cmpwi r3, 0x0
    ble lbl_fn_800DDD18_000011A4
    subic. r0, r3, 0x1
    stw r0, 0x40ac(r24)
    bgt lbl_fn_800DDD18_000011A4
    mr r3, r16
    li r4, 0x0
    bl fn_80661300
lbl_fn_800DDD18_000011A4:
    addi r16, r16, 0x1
    addi r23, r23, 0x1
    cmpwi r16, 0x4
    addi r22, r22, 0xf00
    addi r21, r21, 0x64
    addi r20, r20, 0x2c
    addi r19, r19, 0x50
    addi r18, r18, 0xf0
    addi r17, r17, 0x8
    addi r24, r24, 0x4
    blt lbl_fn_800DDD18_000005E8
    li r14, 0x0
lbl_fn_800DDD18_000011D4:
    lwz r0, 0x40d0(r15)
    cmpwi r0, 0x0
    bne lbl_fn_800DDD18_000011F4
    lwz r0, 0x40c0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_800DDD18_000011F4
    mr r3, r14
    bl fn_80660B90
lbl_fn_800DDD18_000011F4:
    addi r14, r14, 0x1
    addi r15, r15, 0x4
    cmpwi r14, 0x4
    blt lbl_fn_800DDD18_000011D4
    addi r11, r1, 0x70
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    psq_l f26, 0x98(r1), 0, 0
    lfd f26, 0x90(r1)
    psq_l f25, 0x88(r1), 0, 0
    lfd f25, 0x80(r1)
    psq_l f24, 0x78(r1), 0, 0
    lfd f24, 0x70(r1)
    bl _restgpr_14
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_800DEB04(void)
{
    nofralloc
    mulli r8, r4, 0x2c
    stwu r1, -0x10(r1)
    slwi r0, r5, 2
    lfs f0, lbl_808812B8
    stw r31, 0xc(r1)
    add r5, r3, r8
    add r5, r5, r0
    lfs f1, 0x3de8(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_800DEB04_00001410
    slwi r8, r4, 2
    add r5, r3, r8
    lwz r9, 0x3c18(r5)
    and r0, r6, r9
    cmplw r6, r0
    beq lbl_fn_800DEB04_000012A8
    lfs f0, lbl_808812BC
    fcmpo cr0, f1, f0
    bge lbl_fn_800DEB04_0000138C
lbl_fn_800DEB04_000012A8:
    li r0, 0x1
    slw r0, r0, r6
    and r9, r0, r9
    cmplw r0, r9
    beq lbl_fn_800DEB04_000012F0
    add r31, r3, r8
    slwi r9, r6, 2
    lwz r12, 0x3c28(r31)
    mulli r10, r4, 0x64
    li r11, 0x0
    or r12, r12, r0
    stw r12, 0x3c28(r31)
    add r10, r3, r10
    lwz r12, 0x3c48(r31)
    add r9, r10, r9
    or r10, r12, r0
    stw r10, 0x3c48(r31)
    stw r11, 0x3c58(r9)
lbl_fn_800DEB04_000012F0:
    mulli r9, r4, 0x64
    slwi r10, r6, 2
    lwz r4, 0x3c10(r3)
    add r6, r3, r9
    addi r11, r6, 0x3c58
    lwzx r9, r11, r10
    cmpw r9, r4
    ble lbl_fn_800DEB04_00001334
    lwz r6, 0x3c14(r3)
    divw r4, r9, r6
    mullw r4, r4, r6
    subf. r4, r4, r9
    bne lbl_fn_800DEB04_00001334
    add r6, r3, r8
    lwz r4, 0x3c48(r6)
    or r4, r4, r0
    stw r4, 0x3c48(r6)
lbl_fn_800DEB04_00001334:
    lwzx r9, r11, r10
    add r6, r3, r8
    li r4, 0x1
    addi r3, r9, 0x1
    stwx r3, r11, r10
    slw r4, r4, r7
    lwz r3, 0x3c18(r6)
    or r0, r3, r0
    stw r0, 0x3c18(r6)
    and r0, r4, r0
    cmplw r4, r0
    bne lbl_fn_800DEB04_00001370
    lwz r0, 0x3c38(r6)
    or r0, r0, r4
    stw r0, 0x3c38(r6)
lbl_fn_800DEB04_00001370:
    slwi r0, r7, 2
    li r3, -0x1
    stwx r3, r11, r0
    lwz r0, 0x3c18(r5)
    andc r0, r0, r4
    stw r0, 0x3c18(r5)
    b lbl_fn_800DEB04_00001628
lbl_fn_800DEB04_0000138C:
    li r0, 0x1
    slw r10, r0, r6
    and r0, r10, r9
    cmplw r10, r0
    bne lbl_fn_800DEB04_000013AC
    lwz r0, 0x3c38(r5)
    or r0, r0, r10
    stw r0, 0x3c38(r5)
lbl_fn_800DEB04_000013AC:
    mulli r9, r4, 0x64
    slwi r4, r6, 2
    li r6, -0x1
    li r0, 0x1
    add r9, r3, r9
    add r3, r3, r8
    addi r9, r9, 0x3c58
    slw r8, r0, r7
    stwx r6, r9, r4
    lwz r0, 0x3c18(r3)
    andc r0, r0, r10
    stw r0, 0x3c18(r3)
    and r0, r8, r0
    cmplw r8, r0
    bne lbl_fn_800DEB04_000013F4
    lwz r0, 0x3c38(r3)
    or r0, r0, r8
    stw r0, 0x3c38(r3)
lbl_fn_800DEB04_000013F4:
    slwi r0, r7, 2
    li r3, -0x1
    stwx r3, r9, r0
    lwz r0, 0x3c18(r5)
    andc r0, r0, r8
    stw r0, 0x3c18(r5)
    b lbl_fn_800DEB04_00001628
lbl_fn_800DEB04_00001410:
    lfs f0, lbl_808812A0
    fcmpo cr0, f1, f0
    ble lbl_fn_800DEB04_0000159C
    slwi r8, r4, 2
    add r5, r3, r8
    lwz r9, 0x3c18(r5)
    and r0, r7, r9
    cmplw r7, r0
    beq lbl_fn_800DEB04_00001440
    lfs f0, lbl_808812C0
    fcmpo cr0, f1, f0
    ble lbl_fn_800DEB04_00001518
lbl_fn_800DEB04_00001440:
    li r0, 0x1
    slw r10, r0, r6
    and r0, r10, r9
    cmplw r10, r0
    bne lbl_fn_800DEB04_00001464
    add r9, r3, r8
    lwz r0, 0x3c38(r9)
    or r0, r0, r10
    stw r0, 0x3c38(r9)
lbl_fn_800DEB04_00001464:
    mulli r4, r4, 0x64
    li r0, 0x1
    slwi r6, r6, 2
    li r9, -0x1
    add r4, r3, r4
    add r11, r3, r8
    addi r4, r4, 0x3c58
    slw r0, r0, r7
    stwx r9, r4, r6
    lwz r6, 0x3c18(r11)
    andc r6, r6, r10
    stw r6, 0x3c18(r11)
    and r6, r0, r6
    cmplw r0, r6
    beq lbl_fn_800DEB04_000014C4
    lwz r10, 0x3c28(r11)
    slwi r6, r7, 2
    li r9, 0x0
    or r10, r10, r0
    stw r10, 0x3c28(r11)
    lwz r10, 0x3c48(r11)
    or r10, r10, r0
    stw r10, 0x3c48(r11)
    stwx r9, r4, r6
lbl_fn_800DEB04_000014C4:
    slwi r9, r7, 2
    lwz r6, 0x3c10(r3)
    lwzx r10, r4, r9
    cmpw r10, r6
    ble lbl_fn_800DEB04_000014FC
    lwz r7, 0x3c14(r3)
    divw r6, r10, r7
    mullw r6, r6, r7
    subf. r6, r6, r10
    bne lbl_fn_800DEB04_000014FC
    add r6, r3, r8
    lwz r3, 0x3c48(r6)
    or r3, r3, r0
    stw r3, 0x3c48(r6)
lbl_fn_800DEB04_000014FC:
    lwzx r3, r4, r9
    addi r3, r3, 0x1
    stwx r3, r4, r9
    lwz r3, 0x3c18(r5)
    or r0, r3, r0
    stw r0, 0x3c18(r5)
    b lbl_fn_800DEB04_00001628
lbl_fn_800DEB04_00001518:
    li r0, 0x1
    slw r10, r0, r6
    and r0, r10, r9
    cmplw r10, r0
    bne lbl_fn_800DEB04_00001538
    lwz r0, 0x3c38(r5)
    or r0, r0, r10
    stw r0, 0x3c38(r5)
lbl_fn_800DEB04_00001538:
    mulli r9, r4, 0x64
    slwi r4, r6, 2
    li r6, -0x1
    li r0, 0x1
    add r9, r3, r9
    add r3, r3, r8
    addi r9, r9, 0x3c58
    slw r8, r0, r7
    stwx r6, r9, r4
    lwz r0, 0x3c18(r3)
    andc r0, r0, r10
    stw r0, 0x3c18(r3)
    and r0, r8, r0
    cmplw r8, r0
    bne lbl_fn_800DEB04_00001580
    lwz r0, 0x3c38(r3)
    or r0, r0, r8
    stw r0, 0x3c38(r3)
lbl_fn_800DEB04_00001580:
    slwi r0, r7, 2
    li r3, -0x1
    stwx r3, r9, r0
    lwz r0, 0x3c18(r5)
    andc r0, r0, r8
    stw r0, 0x3c18(r5)
    b lbl_fn_800DEB04_00001628
lbl_fn_800DEB04_0000159C:
    slwi r11, r4, 2
    li r5, 0x1
    add r9, r3, r11
    lwz r0, 0x3c18(r9)
    slw r10, r5, r6
    and r0, r10, r0
    cmplw r10, r0
    bne lbl_fn_800DEB04_000015C8
    lwz r0, 0x3c38(r9)
    or r0, r0, r10
    stw r0, 0x3c38(r9)
lbl_fn_800DEB04_000015C8:
    mulli r8, r4, 0x64
    slwi r4, r6, 2
    li r5, -0x1
    li r0, 0x1
    add r6, r3, r8
    add r3, r3, r11
    addi r8, r6, 0x3c58
    stwx r5, r8, r4
    slw r6, r0, r7
    lwz r0, 0x3c18(r3)
    andc r0, r0, r10
    stw r0, 0x3c18(r3)
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_800DEB04_00001610
    lwz r0, 0x3c38(r3)
    or r0, r0, r6
    stw r0, 0x3c38(r3)
lbl_fn_800DEB04_00001610:
    slwi r0, r7, 2
    li r3, -0x1
    stwx r3, r8, r0
    lwz r0, 0x3c18(r9)
    andc r0, r0, r6
    stw r0, 0x3c18(r9)
lbl_fn_800DEB04_00001628:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_800DEEDC(void)
{
    nofralloc
    slwi r0, r4, 2
    li r4, 0x1
    add r3, r3, r0
    lwz r0, 0x3c28(r3)
    slw r3, r4, r5
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_800DEF04(void)
{
    nofralloc
    slwi r0, r4, 2
    li r4, 0x1
    add r3, r3, r0
    lwz r0, 0x3c38(r3)
    slw r3, r4, r5
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_800DEF2C(void)
{
    nofralloc
    slwi r0, r4, 2
    li r4, 0x1
    add r3, r3, r0
    lwz r0, 0x3c48(r3)
    slw r3, r4, r5
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_800DEF54(void)
{
    nofralloc
    slwi r0, r4, 2
    li r4, 0x1
    add r3, r3, r0
    lwz r0, 0x3c18(r3)
    slw r3, r4, r5
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_800DEF7C(void)
{
    nofralloc
    mulli r4, r4, 0x50
    slwi r0, r5, 2
    add r3, r3, r4
    add r3, r3, r0
    lfs f1, 0x3f48(r3)
    blr
}

asm void fn_800DEF94(void)
{
    nofralloc
    mulli r4, r4, 0x2c
    slwi r0, r5, 2
    add r3, r3, r4
    add r3, r3, r0
    lfs f1, 0x3de8(r3)
    blr
}

asm void fn_800DEFAC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    cmpwi r5, 0x0
    blt lbl_fn_800DEFAC_000017EC
    cmpwi r5, 0x3
    bgt lbl_fn_800DEFAC_000017EC
    cmplwi r5, 0x1
    lfs f4, lbl_808812C4
    bgt lbl_fn_800DEFAC_00001774
    mulli r0, r4, 0x2c
    add r3, r3, r0
    lfs f0, 0x3dec(r3)
    lfs f2, 0x3de8(r3)
    fmuls f3, f4, f0
    lfs f1, 0x3e9c(r3)
    lfs f0, 0x3e98(r3)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    stfs f3, 0x1c(r1)
    fmuls f0, f4, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0x14(r1)
    b lbl_fn_800DEFAC_000017AC
lbl_fn_800DEFAC_00001774:
    mulli r0, r4, 0x2c
    add r3, r3, r0
    lfs f0, 0x3df4(r3)
    lfs f2, 0x3df0(r3)
    fmuls f3, f4, f0
    lfs f1, 0x3ea4(r3)
    lfs f0, 0x3ea0(r3)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    stfs f3, 0x1c(r1)
    fmuls f0, f4, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0x14(r1)
lbl_fn_800DEFAC_000017AC:
    lfs f2, 0x1c(r1)
    lfs f0, 0x14(r1)
    lfs f1, 0x18(r1)
    fsubs f2, f2, f0
    lfs f0, 0x10(r1)
    fsubs f1, f1, f0
    stfs f2, 0xc(r1)
    fmuls f0, f2, f2
    stfs f1, 0x8(r1)
    fmadds f1, f1, f1, f0
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    ble lbl_fn_800DEFAC_0000182C
    li r3, 0x1
    b lbl_fn_800DEFAC_00001830
lbl_fn_800DEFAC_000017EC:
    mulli r0, r4, 0x2c
    slwi r4, r5, 2
    add r0, r3, r0
    add r3, r0, r4
    lfs f2, 0x3de8(r3)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f1
    ble lbl_fn_800DEFAC_0000182C
    lfs f1, 0x3e98(r3)
    lfs f0, lbl_80881298
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_800DEFAC_0000182C
    li r3, 0x1
    b lbl_fn_800DEFAC_00001830
lbl_fn_800DEFAC_0000182C:
    li r3, 0x0
lbl_fn_800DEFAC_00001830:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
