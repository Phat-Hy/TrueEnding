#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_27(void);
extern void _savegpr_16(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80014798(void);
extern void fn_8004318C(void);
extern void fn_800431F4(void);
extern void fn_8006AA20(void);
extern void fn_8006AD24(void);
extern void fn_8006B2D8(void);
extern void fn_8006CA80(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_800C3094(void);
extern void fn_800C3118(void);
extern void fn_800C317C(void);
extern void fn_800C31EC(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC500(void);
extern void fn_80117E34(void);
extern void fn_80183D00(void);
extern void fn_8021771C(void);
extern void fn_8035E858(void);
extern void fn_8035F33C(void);
extern void fn_80366364(void);
extern void fn_8037D4C0(void);
extern void fn_80393610(void);
extern void fn_80393BEC(void);
extern void fn_803B3C10(void);
extern void fn_803CD918(void);
extern void fn_803CE160(void);
extern void fn_80470364(void);
extern void fn_80470528(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_8049D52C(void);
extern void fn_8049D704(void);
extern void fn_805A2244(void);
extern void fn_805A2408(void);
extern void fn_80682428(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807500DC[];
extern u8 lbl_8078BC48[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F418;
extern u32 lbl_8087F420;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9F0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885CB8;

/* Function declarations */
void fn_803BEA7C(void);
void fn_803BEAB4(void);
void fn_803BEB54(void);
void fn_803BEBAC(void);
void fn_803BEC40(void);
void fn_803BF818(void);
void fn_803BF824(void);
void fn_803BF898(void);
void fn_803BF8EC(void);
void fn_803BF960(void);
void fn_803BF9D4(void);

asm void fn_803BEA7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r0, r3, 0xb4
    subf r4, r3, r0
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800DC500
    stw r3, 0xb4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BEAB4(void)
{
    nofralloc
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803BEAB4_0000007C
    lwz r0, 0x0(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803BEAB4_00000074
    lwz r0, 0x4(r3)
    cmpwi r0, 0x9
    blt lbl_fn_803BEAB4_00000074
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803BEAB4_00000074
    li r4, 0x1
lbl_fn_803BEAB4_00000074:
    mr r3, r4
    blr
lbl_fn_803BEAB4_0000007C:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x9
    blt lbl_fn_803BEAB4_000000B8
    lwz r0, 0x0(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803BEAB4_000000B0
    cmpwi r5, 0x6
    blt lbl_fn_803BEAB4_000000B0
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803BEAB4_000000B0
    li r4, 0x1
lbl_fn_803BEAB4_000000B0:
    mr r3, r4
    blr
lbl_fn_803BEAB4_000000B8:
    lwz r0, 0x0(r3)
    li r3, 0x0
    cmpwi r0, 0x0
    beqlr
    cmpwi r5, 0x6
    bltlr
    li r3, 0x1
    blr
}

asm void fn_803BEB54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0xd
    blt lbl_fn_803BEB54_00000118
    addi r0, r3, 0xb4
    subf r4, r3, r0
    bl fn_800DC500
    lwz r0, 0xb4(r31)
    cmplw r0, r3
    beq lbl_fn_803BEB54_00000118
    li r3, 0x1
    b lbl_fn_803BEB54_0000011C
lbl_fn_803BEB54_00000118:
    li r3, 0x0
lbl_fn_803BEB54_0000011C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BEBAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_803BEBAC_000001A0
    lis r5, lbl_807500DC@ha
    li r3, 0x9b8
    addi r5, r5, lbl_807500DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803BEBAC_000001A4
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_803BEC40
    b lbl_fn_803BEBAC_000001A4
lbl_fn_803BEBAC_000001A0:
    li r3, 0x0
lbl_fn_803BEBAC_000001A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803BEC40(void)
{
    nofralloc
    stwu r1, -0x520(r1)
    mflr r0
    stw r0, 0x524(r1)
    addi r11, r1, 0x520
    bl _savegpr_16
    mr r17, r3
    mr r18, r5
    mr r19, r6
    mr r20, r7
    bl fn_800D1D3C
    lis r3, lbl_8078BC48@ha
    li r21, 0x0
    addi r3, r3, lbl_8078BC48@l
    lis r4, fn_8006CA80@ha
    lis r5, fn_80014798@ha
    stw r3, 0x0(r17)
    addi r3, r17, 0x4c
    addi r4, r4, fn_8006CA80@l
    stw r21, 0x48(r17)
    addi r5, r5, fn_80014798@l
    li r6, 0x8
    li r7, 0x3
    bl fn_806958E0
    addi r22, r17, 0x12c
    stw r21, 0x68(r17)
    mr r3, r22
    stw r21, 0x6c(r17)
    stw r21, 0x70(r17)
    stw r21, 0x74(r17)
    stw r21, 0x78(r17)
    stw r21, 0x7c(r17)
    stw r21, 0x80(r17)
    stw r21, 0x84(r17)
    stw r21, 0x88(r17)
    stw r21, 0x8c(r17)
    stw r21, 0x90(r17)
    stw r21, 0x94(r17)
    stw r21, 0x98(r17)
    stw r21, 0x9c(r17)
    stw r21, 0xa0(r17)
    stw r21, 0xa4(r17)
    stw r21, 0xa8(r17)
    stw r21, 0xac(r17)
    stw r21, 0xb0(r17)
    stw r21, 0xb4(r17)
    stw r21, 0xb8(r17)
    stw r21, 0xbc(r17)
    stw r21, 0xc0(r17)
    stw r21, 0xc4(r17)
    stw r21, 0xc8(r17)
    stw r21, 0xcc(r17)
    stw r21, 0xd0(r17)
    stw r21, 0xd4(r17)
    stw r21, 0xd8(r17)
    stw r21, 0xdc(r17)
    stw r21, 0xe0(r17)
    stw r21, 0xe4(r17)
    stw r21, 0xe8(r17)
    stw r21, 0xec(r17)
    stw r21, 0xf0(r17)
    stw r21, 0xf4(r17)
    stw r21, 0xf8(r17)
    stw r21, 0xfc(r17)
    stw r21, 0x100(r17)
    stw r21, 0x104(r17)
    stw r21, 0x108(r17)
    stw r21, 0x10c(r17)
    stw r21, 0x110(r17)
    stw r21, 0x114(r17)
    stw r21, 0x118(r17)
    stw r21, 0x11c(r17)
    stw r21, 0x120(r17)
    stw r21, 0x124(r17)
    stw r21, 0x128(r17)
    bl fn_80473E74
    lfs f0, lbl_80885CB8
    lis r3, lbl_8078FBB0@ha
    addi r3, r3, lbl_8078FBB0@l
    li r0, -0x1
    lis r4, fn_803BF818@ha
    lis r5, fn_80117E34@ha
    stw r3, 0x0(r22)
    addi r3, r17, 0x998
    addi r4, r4, fn_803BF818@l
    addi r5, r5, fn_80117E34@l
    stw r0, 0x138(r17)
    li r6, 0x4
    li r7, 0x6
    stfs f0, 0x13c(r17)
    stw r21, 0x140(r17)
    stw r21, 0x144(r17)
    stw r21, 0x148(r17)
    stw r21, 0x14c(r17)
    stw r21, 0x150(r17)
    stw r21, 0x154(r17)
    stw r21, 0x158(r17)
    stw r21, 0x15c(r17)
    stw r21, 0x160(r17)
    stw r21, 0x164(r17)
    stw r21, 0x168(r17)
    stw r21, 0x16c(r17)
    stw r21, 0x170(r17)
    stw r21, 0x174(r17)
    stw r21, 0x178(r17)
    stw r21, 0x17c(r17)
    stw r21, 0x180(r17)
    stw r21, 0x184(r17)
    stw r21, 0x188(r17)
    stw r21, 0x18c(r17)
    stw r21, 0x190(r17)
    stw r21, 0x994(r17)
    bl fn_806958E0
    stw r21, 0x9b0(r17)
    mr r4, r18
    mr r5, r19
    mr r6, r20
    addi r3, r1, 0xc0
    bl fn_8049D52C
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_000004F8
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_000003BC
    li r0, 0x1
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
lbl_fn_803BEC40_000003BC:
    lis r4, lbl_807500DC@ha
    addi r3, r1, 0x3e0
    addi r4, r4, lbl_807500DC@l
    addi r5, r1, 0xc0
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    addi r3, r1, 0x3e0
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000424
    lwz r3, lbl_8087F0A8
    lwz r0, 0x5b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803BEC40_00000400
    cmpwi r18, 0x1
    bne lbl_fn_803BEC40_00000424
lbl_fn_803BEC40_00000400:
    subfic r3, r18, 0x1
    subi r0, r18, 0x1
    or r0, r3, r0
    addi r4, r1, 0x3e0
    addi r3, r17, 0x994
    li r6, 0x1
    srwi r5, r0, 31
    li r7, 0x1
    bl fn_80470364
lbl_fn_803BEC40_00000424:
    lis r3, lbl_807500DC@ha
    li r22, 0x0
    li r16, 0x0
    addi r21, r3, lbl_807500DC@l
lbl_fn_803BEC40_00000434:
    cmpwi r22, 0x0
    bne lbl_fn_803BEC40_00000454
    addi r3, r1, 0x3e0
    addi r4, r21, 0xe
    addi r5, r1, 0xc0
    crclr 6
    bl sprintf
    b lbl_fn_803BEC40_0000046C
lbl_fn_803BEC40_00000454:
    mr r6, r22
    addi r3, r1, 0x3e0
    addi r4, r21, 0x1f
    addi r5, r1, 0xc0
    crclr 6
    bl sprintf
lbl_fn_803BEC40_0000046C:
    addi r3, r1, 0x3e0
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_000004A8
    add r3, r17, r16
    addi r4, r1, 0x3e0
    addi r3, r3, 0x998
    li r5, 0x0
    li r6, 0x1
    li r7, 0x1
    bl fn_80470364
    addi r22, r22, 0x1
    addi r16, r16, 0x4
    cmplwi r22, 0x6
    blt lbl_fn_803BEC40_00000434
lbl_fn_803BEC40_000004A8:
    cmpwi r18, 0x1
    bne lbl_fn_803BEC40_000004E0
    lis r21, lbl_807500DC@ha
    addi r21, r21, lbl_807500DC@l
    addi r3, r21, 0x32
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_000004E0
    addi r3, r17, 0x9ac
    addi r4, r21, 0x32
    li r5, 0x0
    li r6, 0x1
    li r7, 0x1
    bl fn_80470364
lbl_fn_803BEC40_000004E0:
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_000004F8
    li r0, 0x0
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
lbl_fn_803BEC40_000004F8:
    mr r4, r18
    mr r5, r19
    mr r6, r20
    addi r3, r1, 0x1e0
    bl fn_8049D52C
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000538
    lis r4, lbl_807500DC@ha
    addi r3, r1, 0x2e0
    addi r4, r4, lbl_807500DC@l
    addi r5, r1, 0x1e0
    addi r4, r4, 0x44
    crclr 6
    bl sprintf
    li r0, 0x1
    b lbl_fn_803BEC40_0000053C
lbl_fn_803BEC40_00000538:
    li r0, 0x0
lbl_fn_803BEC40_0000053C:
    cmpwi r0, 0x0
    beq lbl_fn_803BEC40_00000B4C
    lwz r12, 0x4c(r17)
    addi r3, r17, 0x4c
    addi r4, r1, 0x2e0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r18, 0x1
    bne lbl_fn_803BEC40_000006E8
    lwz r3, lbl_8087F0A8
    lwz r0, 0x190(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803BEC40_000006E8
    lis r3, lbl_807500DC@ha
    li r0, 0x0
    addi r3, r3, lbl_807500DC@l
    stw r0, 0xb0(r1)
    addi r21, r3, 0x56
    addi r22, r1, 0xb0
    stw r0, 0xb4(r1)
    mr r3, r21
    stw r0, 0xb8(r1)
    bl strlen
    mr r23, r3
    mr r3, r22
    mr r4, r23
    bl fn_80013DC4
    lbz r0, 0x54(r1)
    mr r3, r22
    stb r0, 0x50(r1)
    mr r6, r21
    add r7, r21, r23
    addi r8, r1, 0x50
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_000005E4
    addi r3, r1, 0xb1
    b lbl_fn_803BEC40_000005E8
lbl_fn_803BEC40_000005E4:
    lwz r3, 0xb8(r1)
lbl_fn_803BEC40_000005E8:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000628
    cmpwi r19, 0x3
    beq lbl_fn_803BEC40_00000628
    lwz r0, 0xb0(r1)
    addi r3, r17, 0x54
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_00000614
    addi r4, r1, 0xb1
    b lbl_fn_803BEC40_00000618
lbl_fn_803BEC40_00000614:
    lwz r4, 0xb8(r1)
lbl_fn_803BEC40_00000618:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803BEC40_00000628:
    lwz r0, 0xb0(r1)
    lis r3, lbl_807500DC@ha
    addi r3, r3, lbl_807500DC@l
    srwi. r0, r0, 31
    addi r21, r3, 0x71
    bne lbl_fn_803BEC40_0000064C
    lbz r0, 0xb0(r1)
    clrlwi r22, r0, 25
    b lbl_fn_803BEC40_00000650
lbl_fn_803BEC40_0000064C:
    lwz r22, 0xb4(r1)
lbl_fn_803BEC40_00000650:
    lbz r0, 0x4c(r1)
    mr r3, r21
    stb r0, 0x48(r1)
    bl strlen
    mr r0, r3
    mr r5, r22
    mr r6, r21
    addi r3, r1, 0xb0
    add r7, r21, r0
    addi r8, r1, 0x48
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_00000694
    addi r3, r1, 0xb1
    b lbl_fn_803BEC40_00000698
lbl_fn_803BEC40_00000694:
    lwz r3, 0xb8(r1)
lbl_fn_803BEC40_00000698:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_000006D0
    lwz r0, 0xb0(r1)
    addi r3, r17, 0x5c
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_000006BC
    addi r4, r1, 0xb1
    b lbl_fn_803BEC40_000006C0
lbl_fn_803BEC40_000006BC:
    lwz r4, 0xb8(r1)
lbl_fn_803BEC40_000006C0:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803BEC40_000006D0:
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803BEC40_0000090C
    lwz r3, 0xb8(r1)
    bl dtor_80084684
    b lbl_fn_803BEC40_0000090C
lbl_fn_803BEC40_000006E8:
    lis r3, lbl_807500DC@ha
    lbz r28, 0x44(r1)
    addi r3, r3, lbl_807500DC@l
    lbz r29, 0x3c(r1)
    lbz r30, 0x34(r1)
    addi r26, r3, 0x8b
    lbz r31, 0x2c(r1)
    addi r25, r3, 0x90
    addi r23, r1, 0x75
    addi r22, r1, 0xa5
    li r21, 0x1
    li r24, 0x8
    li r27, 0x0
lbl_fn_803BEC40_0000071C:
    stw r27, 0x80(r1)
    addi r3, r1, 0x2e0
    stw r27, 0x84(r1)
    stw r27, 0x88(r1)
    bl strlen
    mr r16, r3
    addi r3, r1, 0x80
    mr r4, r16
    bl fn_80013DC4
    addi r6, r1, 0x2e0
    stb r28, 0x40(r1)
    mr r7, r6
    addi r3, r1, 0x80
    add r7, r7, r16
    addi r8, r1, 0x40
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r1, 0xa4
    addi r4, r1, 0x80
    bl fn_8006B2D8
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803BEC40_00000784
    lwz r3, 0x88(r1)
    bl dtor_80084684
lbl_fn_803BEC40_00000784:
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_0000079C
    lbz r0, 0xa4(r1)
    clrlwi r16, r0, 25
    b lbl_fn_803BEC40_000007A0
lbl_fn_803BEC40_0000079C:
    lwz r16, 0xa8(r1)
lbl_fn_803BEC40_000007A0:
    stb r29, 0x38(r1)
    mr r3, r26
    bl strlen
    mr r0, r3
    mr r4, r16
    mr r6, r26
    addi r3, r1, 0xa4
    add r7, r26, r0
    addi r8, r1, 0x38
    li r5, 0x0
    bl fn_80013F78
    addi r0, r21, 0x1
    stw r0, 0x58(r1)
    addi r3, r1, 0x74
    addi r4, r1, 0x58
    bl fn_80393BEC
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_000007F8
    lbz r0, 0xa4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_803BEC40_000007FC
lbl_fn_803BEC40_000007F8:
    lwz r4, 0xa8(r1)
lbl_fn_803BEC40_000007FC:
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_00000818
    lbz r0, 0x74(r1)
    mr r6, r23
    clrlwi r0, r0, 25
    b lbl_fn_803BEC40_00000820
lbl_fn_803BEC40_00000818:
    lwz r6, 0x7c(r1)
    lwz r0, 0x78(r1)
lbl_fn_803BEC40_00000820:
    stb r30, 0x30(r1)
    addi r3, r1, 0xa4
    add r7, r6, r0
    addi r8, r1, 0x30
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803BEC40_0000084C
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_803BEC40_0000084C:
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_00000864
    lbz r0, 0xa4(r1)
    clrlwi r16, r0, 25
    b lbl_fn_803BEC40_00000868
lbl_fn_803BEC40_00000864:
    lwz r16, 0xa8(r1)
lbl_fn_803BEC40_00000868:
    stb r31, 0x28(r1)
    mr r3, r25
    bl strlen
    mr r0, r3
    mr r4, r16
    mr r6, r25
    addi r3, r1, 0xa4
    add r7, r25, r0
    addi r8, r1, 0x28
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_000008A8
    mr r3, r22
    b lbl_fn_803BEC40_000008AC
lbl_fn_803BEC40_000008A8:
    lwz r3, 0xac(r1)
lbl_fn_803BEC40_000008AC:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_000008E8
    lwz r0, 0xa4(r1)
    add r3, r17, r24
    addi r3, r3, 0x4c
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_000008D4
    mr r4, r22
    b lbl_fn_803BEC40_000008D8
lbl_fn_803BEC40_000008D4:
    lwz r4, 0xac(r1)
lbl_fn_803BEC40_000008D8:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803BEC40_000008E8:
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803BEC40_000008FC
    lwz r3, 0xac(r1)
    bl dtor_80084684
lbl_fn_803BEC40_000008FC:
    addi r21, r21, 0x1
    addi r24, r24, 0x8
    cmplwi r21, 0x3
    blt lbl_fn_803BEC40_0000071C
lbl_fn_803BEC40_0000090C:
    li r21, 0x0
    stw r21, 0x98(r1)
    addi r22, r1, 0x98
    addi r3, r1, 0x2e0
    stw r21, 0x9c(r1)
    stw r21, 0xa0(r1)
    bl strlen
    mr r16, r3
    mr r3, r22
    mr r4, r16
    bl fn_80013DC4
    addi r6, r1, 0x2e0
    lbz r0, 0x24(r1)
    mr r7, r6
    stb r0, 0x20(r1)
    mr r3, r22
    addi r8, r1, 0x20
    add r7, r7, r16
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_807500DC@ha
    stw r21, 0x68(r1)
    addi r3, r3, lbl_807500DC@l
    addi r24, r1, 0x68
    addi r23, r3, 0x94
    stw r21, 0x6c(r1)
    mr r3, r23
    stw r21, 0x70(r1)
    bl strlen
    mr r16, r3
    mr r3, r24
    mr r4, r16
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r24
    stb r0, 0x18(r1)
    mr r6, r23
    add r7, r23, r16
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r3, r22
    mr r4, r24
    bl fn_8006AD24
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803BEC40_000009D8
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_803BEC40_000009D8:
    lwz r0, 0x98(r1)
    mr r3, r17
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_000009F0
    addi r4, r1, 0x99
    b lbl_fn_803BEC40_000009F4
lbl_fn_803BEC40_000009F0:
    lwz r4, 0xa0(r1)
lbl_fn_803BEC40_000009F4:
    mr r5, r18
    mr r6, r19
    bl fn_80393610
    stw r3, 0x134(r17)
    li r4, 0x1
    bl fn_800D246C
    li r21, 0x0
    stw r21, 0x8c(r1)
    addi r22, r1, 0x8c
    addi r3, r1, 0x2e0
    stw r21, 0x90(r1)
    stw r21, 0x94(r1)
    bl strlen
    mr r16, r3
    mr r3, r22
    mr r4, r16
    bl fn_80013DC4
    addi r6, r1, 0x2e0
    lbz r0, 0x14(r1)
    mr r7, r6
    stb r0, 0x10(r1)
    mr r3, r22
    addi r8, r1, 0x10
    add r7, r7, r16
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_807500DC@ha
    stw r21, 0x5c(r1)
    addi r3, r3, lbl_807500DC@l
    addi r24, r1, 0x5c
    addi r23, r3, 0x97
    stw r21, 0x60(r1)
    mr r3, r23
    stw r21, 0x64(r1)
    bl strlen
    mr r16, r3
    mr r3, r24
    mr r4, r16
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r24
    stb r0, 0x8(r1)
    mr r6, r23
    add r7, r23, r16
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r3, r22
    mr r4, r24
    bl fn_8006AD24
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803BEC40_00000AD8
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_803BEC40_00000AD8:
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_00000AEC
    addi r3, r1, 0x8d
    b lbl_fn_803BEC40_00000AF0
lbl_fn_803BEC40_00000AEC:
    lwz r3, 0x94(r1)
lbl_fn_803BEC40_00000AF0:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000B24
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000B24
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803BEC40_00000B1C
    addi r4, r1, 0x8d
    b lbl_fn_803BEC40_00000B20
lbl_fn_803BEC40_00000B1C:
    lwz r4, 0x94(r1)
lbl_fn_803BEC40_00000B20:
    bl fn_8035F33C
lbl_fn_803BEC40_00000B24:
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803BEC40_00000B38
    lwz r3, 0x94(r1)
    bl dtor_80084684
lbl_fn_803BEC40_00000B38:
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803BEC40_00000B4C
    lwz r3, 0xa0(r1)
    bl dtor_80084684
lbl_fn_803BEC40_00000B4C:
    mr r4, r18
    mr r5, r19
    mr r6, r20
    addi r3, r1, 0xe0
    bl fn_8049D52C
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000B8C
    lis r4, lbl_807500DC@ha
    addi r3, r1, 0x2e0
    addi r4, r4, lbl_807500DC@l
    addi r5, r1, 0xe0
    addi r4, r4, 0x9d
    crclr 6
    bl sprintf
    li r0, 0x1
    b lbl_fn_803BEC40_00000B90
lbl_fn_803BEC40_00000B8C:
    li r0, 0x0
lbl_fn_803BEC40_00000B90:
    cmpwi r0, 0x0
    beq lbl_fn_803BEC40_00000BA4
    addi r3, r17, 0x11c
    addi r4, r1, 0x2e0
    bl fn_803B3C10
lbl_fn_803BEC40_00000BA4:
    mr r3, r17
    mr r4, r18
    mr r5, r19
    mr r6, r20
    bl fn_8049D704
    stw r3, 0x64(r17)
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000BD0
    li r0, 0x1
    stw r0, 0x128(r3)
lbl_fn_803BEC40_00000BD0:
    lwz r3, lbl_8087F0A0
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000BEC
    mr r4, r18
    mr r5, r19
    mr r6, r20
    bl fn_80183D00
lbl_fn_803BEC40_00000BEC:
    mr r3, r18
    mr r4, r19
    mr r5, r20
    bl fn_803CE160
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000CC0
    cmpwi r18, 0x1
    bne lbl_fn_803BEC40_00000CC0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000C20
    lwz r4, 0x10d0(r3)
    b lbl_fn_803BEC40_00000C24
lbl_fn_803BEC40_00000C20:
    li r4, 0x0
lbl_fn_803BEC40_00000C24:
    cmpwi r19, 0x3
    bne lbl_fn_803BEC40_00000C40
    lis r3, lbl_807500DC@ha
    addi r3, r3, lbl_807500DC@l
    addi r3, r3, 0xb5
    bl fn_800C3094
    b lbl_fn_803BEC40_00000CC0
lbl_fn_803BEC40_00000C40:
    cmpwi r4, 0x0
    blt lbl_fn_803BEC40_00000C6C
    lis r3, 0x6
    addi r0, r3, 0x1a80
    cmpw r4, r0
    bge lbl_fn_803BEC40_00000C6C
    lis r3, lbl_807500DC@ha
    addi r3, r3, lbl_807500DC@l
    addi r3, r3, 0xc4
    bl fn_800C3094
    b lbl_fn_803BEC40_00000CC0
lbl_fn_803BEC40_00000C6C:
    lis r3, 0x6
    addi r0, r3, 0x1a80
    cmpw r4, r0
    blt lbl_fn_803BEC40_00000CA0
    lis r3, 0x9
    addi r0, r3, 0x27c0
    cmpw r4, r0
    bge lbl_fn_803BEC40_00000CA0
    lis r3, lbl_807500DC@ha
    addi r3, r3, lbl_807500DC@l
    addi r3, r3, 0xd3
    bl fn_800C3094
    b lbl_fn_803BEC40_00000CC0
lbl_fn_803BEC40_00000CA0:
    lis r3, 0x9
    addi r0, r3, 0x27c0
    cmpw r4, r0
    blt lbl_fn_803BEC40_00000CC0
    lis r3, lbl_807500DC@ha
    addi r3, r3, lbl_807500DC@l
    addi r3, r3, 0xe2
    bl fn_800C3094
lbl_fn_803BEC40_00000CC0:
    mr r3, r18
    mr r4, r19
    mr r5, r20
    bl fn_8021771C
    cmpwi r3, 0x0
    stw r3, 0x144(r17)
    beq lbl_fn_803BEC40_00000CF8
    lwz r3, 0x68(r3)
    bl fn_800C3118
    cmpwi r3, 0x0
    bne lbl_fn_803BEC40_00000CF8
    lwz r3, 0x144(r17)
    lwz r3, 0x68(r3)
    bl fn_800C3094
lbl_fn_803BEC40_00000CF8:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000D2C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803BEC40_00000D2C
    cmpwi r18, 0x1
    bne lbl_fn_803BEC40_00000D24
    li r0, 0x2
    stw r0, 0x10c(r3)
    b lbl_fn_803BEC40_00000D2C
lbl_fn_803BEC40_00000D24:
    li r0, 0x1
    stw r0, 0x10c(r3)
lbl_fn_803BEC40_00000D2C:
    mr r3, r18
    mr r4, r19
    mr r5, r20
    bl fn_800431F4
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000D4C
    mr r3, r17
    bl fn_8004318C
lbl_fn_803BEC40_00000D4C:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803BEC40_00000D78
    mr r3, r18
    mr r4, r19
    mr r5, r20
    bl fn_805A2408
    cmpwi r3, 0x0
    beq lbl_fn_803BEC40_00000D78
    lwz r3, lbl_8087F430
    bl fn_805A2244
lbl_fn_803BEC40_00000D78:
    li r0, 0x0
    stw r0, 0x190(r17)
    addi r11, r1, 0x520
    mr r3, r17
    bl _restgpr_16
    lwz r0, 0x524(r1)
    mtlr r0
    addi r1, r1, 0x520
    blr
}

asm void fn_803BF818(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_803BF824(void)
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
    beq lbl_fn_803BF824_00000E00
    addic. r0, r3, 0x140
    beq lbl_fn_803BF824_00000DF0
    lwz r3, 0x144(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803BF824_00000DE4
    bl fn_80084C24
lbl_fn_803BF824_00000DE4:
    li r0, 0x0
    stw r0, 0x144(r30)
    stw r0, 0x140(r30)
lbl_fn_803BF824_00000DF0:
    cmpwi r31, 0x0
    ble lbl_fn_803BF824_00000E00
    mr r3, r30
    bl dtor_80084684
lbl_fn_803BF824_00000E00:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BF898(void)
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
    beq lbl_fn_803BF898_00000E54
    bl fn_803CD918
    cmpwi r31, 0x0
    ble lbl_fn_803BF898_00000E54
    mr r3, r30
    bl dtor_80084684
lbl_fn_803BF898_00000E54:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BF8EC(void)
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
    beq lbl_fn_803BF8EC_00000EC8
    addic. r0, r3, 0x24
    beq lbl_fn_803BF8EC_00000EB8
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803BF8EC_00000EAC
    bl fn_80084C24
lbl_fn_803BF8EC_00000EAC:
    li r0, 0x0
    stw r0, 0x28(r30)
    stw r0, 0x24(r30)
lbl_fn_803BF8EC_00000EB8:
    cmpwi r31, 0x0
    ble lbl_fn_803BF8EC_00000EC8
    mr r3, r30
    bl dtor_80084684
lbl_fn_803BF8EC_00000EC8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BF960(void)
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
    beq lbl_fn_803BF960_00000F3C
    addic. r0, r3, 0x18
    beq lbl_fn_803BF960_00000F2C
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803BF960_00000F20
    bl fn_80084C24
lbl_fn_803BF960_00000F20:
    li r0, 0x0
    stw r0, 0x1c(r30)
    stw r0, 0x18(r30)
lbl_fn_803BF960_00000F2C:
    cmpwi r31, 0x0
    ble lbl_fn_803BF960_00000F3C
    mr r3, r30
    bl dtor_80084684
lbl_fn_803BF960_00000F3C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803BF9D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r30, r3
    mr r31, r4
    beq lbl_fn_803BF9D4_00001718
    lwz r5, 0x9c(r3)
    lis r4, lbl_8078BC48@ha
    addi r4, r4, lbl_8078BC48@l
    stw r4, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_803BF9D4_00000FA0
    beq lbl_fn_803BF9D4_00000FA0
    subi r3, r5, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00000FA0:
    lwz r3, 0xa4(r30)
    li r0, 0x0
    stw r0, 0x9c(r30)
    cmpwi r3, 0x0
    stw r0, 0x98(r30)
    beq lbl_fn_803BF9D4_00000FC4
    lis r4, fn_803BF898@ha
    addi r4, r4, fn_803BF898@l
    bl fn_80695A50
lbl_fn_803BF9D4_00000FC4:
    lwz r3, 0xb0(r30)
    li r0, 0x0
    stw r0, 0xa4(r30)
    cmpwi r3, 0x0
    stw r0, 0xa0(r30)
    beq lbl_fn_803BF9D4_00000FE8
    beq lbl_fn_803BF9D4_00000FE8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00000FE8:
    li r0, 0x0
    stw r0, 0xb0(r30)
    stw r0, 0xac(r30)
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001004
    bl fn_8035E858
lbl_fn_803BF9D4_00001004:
    lwz r0, 0x38(r30)
    li r28, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803BF9D4_0000107C
    lwz r0, 0x144(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803BF9D4_0000107C
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_803BF9D4_0000107C
    lwz r0, 0x5538(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803BF9D4_0000107C
    lwz r3, 0x5514(r5)
    lwz r4, 0x5518(r5)
    lwz r5, 0x551c(r5)
    bl fn_8021771C
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_0000107C
    lwz r0, 0x44(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803BF9D4_0000107C
    lwz r5, 0x144(r30)
    lwz r4, 0x68(r3)
    lwz r3, 0x68(r5)
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803BF9D4_0000107C
    li r28, 0x0
lbl_fn_803BF9D4_0000107C:
    lwz r0, 0x144(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803BF9D4_00001094
    cmpwi r28, 0x0
    beq lbl_fn_803BF9D4_00001094
    bl fn_800C317C
lbl_fn_803BF9D4_00001094:
    bl fn_800C31EC
    lwz r0, lbl_8087F9F0
    cmpwi r0, 0x0
    beq lbl_fn_803BF9D4_000010D4
    lwz r5, lbl_8087F430
    lwz r0, 0x5538(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803BF9D4_000010CC
    lwz r3, 0x5514(r5)
    lwz r4, 0x5518(r5)
    lwz r5, 0x551c(r5)
    bl fn_805A2408
    cmpwi r3, 0x0
    bne lbl_fn_803BF9D4_000010D4
lbl_fn_803BF9D4_000010CC:
    lwz r3, lbl_8087F9F0
    bl fn_800D2338
lbl_fn_803BF9D4_000010D4:
    li r27, 0x0
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_803BF9D4_00001124
lbl_fn_803BF9D4_000010E4:
    lwz r0, 0xe0(r30)
    add r3, r0, r28
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_0000111C
    beq lbl_fn_803BF9D4_00001110
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_803BF9D4_00001110:
    lwz r0, 0xe0(r30)
    add r3, r0, r28
    stw r29, 0x4(r3)
lbl_fn_803BF9D4_0000111C:
    addi r28, r28, 0x20
    addi r27, r27, 0x1
lbl_fn_803BF9D4_00001124:
    lwz r0, 0xdc(r30)
    cmplw r27, r0
    blt lbl_fn_803BF9D4_000010E4
    lwz r4, 0x140(r30)
    cmpwi r4, 0x0
    beq lbl_fn_803BF9D4_0000118C
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_0000118C
    lwz r0, 0x84(r3)
    lwz r4, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803BF9D4_00001160
    lwz r0, 0xc4(r3)
    b lbl_fn_803BF9D4_00001164
lbl_fn_803BF9D4_00001160:
    lwz r0, 0x8c(r3)
lbl_fn_803BF9D4_00001164:
    cmpw r4, r0
    bne lbl_fn_803BF9D4_0000118C
    lfs f1, lbl_80885CB8
    li r4, 0x0
    li r5, 0x3c
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    li r0, 0x0
    stw r0, 0x140(r30)
lbl_fn_803BF9D4_0000118C:
    lis r4, fn_80117E34@ha
    addi r3, r30, 0x998
    addi r4, r4, fn_80117E34@l
    li r5, 0x4
    li r6, 0x6
    bl fn_806959D8
    addic. r3, r30, 0x994
    beq lbl_fn_803BF9D4_000011B0
    bl fn_80470528
lbl_fn_803BF9D4_000011B0:
    addic. r0, r30, 0x188
    beq lbl_fn_803BF9D4_000011D4
    lwz r3, 0x18c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000011C8
    bl fn_80084C24
lbl_fn_803BF9D4_000011C8:
    li r0, 0x0
    stw r0, 0x18c(r30)
    stw r0, 0x188(r30)
lbl_fn_803BF9D4_000011D4:
    addic. r0, r30, 0x180
    beq lbl_fn_803BF9D4_000011F8
    lwz r3, 0x184(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000011EC
    bl fn_80084C24
lbl_fn_803BF9D4_000011EC:
    li r0, 0x0
    stw r0, 0x184(r30)
    stw r0, 0x180(r30)
lbl_fn_803BF9D4_000011F8:
    addic. r0, r30, 0x178
    beq lbl_fn_803BF9D4_00001224
    lwz r3, 0x17c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001218
    beq lbl_fn_803BF9D4_00001218
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00001218:
    li r0, 0x0
    stw r0, 0x17c(r30)
    stw r0, 0x178(r30)
lbl_fn_803BF9D4_00001224:
    addic. r0, r30, 0x170
    beq lbl_fn_803BF9D4_00001250
    lwz r3, 0x174(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001244
    beq lbl_fn_803BF9D4_00001244
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00001244:
    li r0, 0x0
    stw r0, 0x174(r30)
    stw r0, 0x170(r30)
lbl_fn_803BF9D4_00001250:
    addic. r0, r30, 0x168
    beq lbl_fn_803BF9D4_0000127C
    lwz r3, 0x16c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001270
    beq lbl_fn_803BF9D4_00001270
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00001270:
    li r0, 0x0
    stw r0, 0x16c(r30)
    stw r0, 0x168(r30)
lbl_fn_803BF9D4_0000127C:
    addic. r0, r30, 0x160
    beq lbl_fn_803BF9D4_000012A8
    lwz r3, 0x164(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_0000129C
    beq lbl_fn_803BF9D4_0000129C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_0000129C:
    li r0, 0x0
    stw r0, 0x164(r30)
    stw r0, 0x160(r30)
lbl_fn_803BF9D4_000012A8:
    addic. r0, r30, 0x158
    beq lbl_fn_803BF9D4_000012D4
    lwz r3, 0x15c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000012C8
    beq lbl_fn_803BF9D4_000012C8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_000012C8:
    li r0, 0x0
    stw r0, 0x15c(r30)
    stw r0, 0x158(r30)
lbl_fn_803BF9D4_000012D4:
    addic. r0, r30, 0x150
    beq lbl_fn_803BF9D4_000012F8
    lwz r3, 0x154(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000012EC
    bl fn_80084C24
lbl_fn_803BF9D4_000012EC:
    li r0, 0x0
    stw r0, 0x154(r30)
    stw r0, 0x150(r30)
lbl_fn_803BF9D4_000012F8:
    addic. r0, r30, 0x148
    beq lbl_fn_803BF9D4_0000131C
    lwz r3, 0x14c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001310
    bl fn_80084C24
lbl_fn_803BF9D4_00001310:
    li r0, 0x0
    stw r0, 0x14c(r30)
    stw r0, 0x148(r30)
lbl_fn_803BF9D4_0000131C:
    addic. r29, r30, 0x11c
    beq lbl_fn_803BF9D4_00001384
    addic. r3, r29, 0x10
    beq lbl_fn_803BF9D4_00001334
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803BF9D4_00001334:
    addic. r0, r29, 0x8
    beq lbl_fn_803BF9D4_00001360
    lwz r3, 0xc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001354
    lis r4, fn_80366364@ha
    addi r4, r4, fn_80366364@l
    bl fn_80695A50
lbl_fn_803BF9D4_00001354:
    li r0, 0x0
    stw r0, 0xc(r29)
    stw r0, 0x8(r29)
lbl_fn_803BF9D4_00001360:
    cmpwi r29, 0x0
    beq lbl_fn_803BF9D4_00001384
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001378
    bl fn_80084C24
lbl_fn_803BF9D4_00001378:
    li r0, 0x0
    stw r0, 0x4(r29)
    stw r0, 0x0(r29)
lbl_fn_803BF9D4_00001384:
    addic. r0, r30, 0x114
    beq lbl_fn_803BF9D4_000013B0
    lwz r3, 0x118(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000013A4
    beq lbl_fn_803BF9D4_000013A4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_000013A4:
    li r0, 0x0
    stw r0, 0x118(r30)
    stw r0, 0x114(r30)
lbl_fn_803BF9D4_000013B0:
    addic. r0, r30, 0x10c
    beq lbl_fn_803BF9D4_000013DC
    lwz r3, 0x110(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000013D0
    beq lbl_fn_803BF9D4_000013D0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_000013D0:
    li r0, 0x0
    stw r0, 0x110(r30)
    stw r0, 0x10c(r30)
lbl_fn_803BF9D4_000013DC:
    addic. r0, r30, 0x104
    beq lbl_fn_803BF9D4_00001408
    lwz r3, 0x108(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000013FC
    beq lbl_fn_803BF9D4_000013FC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_000013FC:
    li r0, 0x0
    stw r0, 0x108(r30)
    stw r0, 0x104(r30)
lbl_fn_803BF9D4_00001408:
    addic. r0, r30, 0xfc
    beq lbl_fn_803BF9D4_00001434
    lwz r3, 0x100(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001428
    beq lbl_fn_803BF9D4_00001428
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00001428:
    li r0, 0x0
    stw r0, 0x100(r30)
    stw r0, 0xfc(r30)
lbl_fn_803BF9D4_00001434:
    addic. r0, r30, 0xf4
    beq lbl_fn_803BF9D4_00001460
    lwz r3, 0xf8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001454
    beq lbl_fn_803BF9D4_00001454
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00001454:
    li r0, 0x0
    stw r0, 0xf8(r30)
    stw r0, 0xf4(r30)
lbl_fn_803BF9D4_00001460:
    addic. r0, r30, 0xec
    beq lbl_fn_803BF9D4_0000148C
    lwz r3, 0xf0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001480
    lis r4, fn_803BF960@ha
    addi r4, r4, fn_803BF960@l
    bl fn_80695A50
lbl_fn_803BF9D4_00001480:
    li r0, 0x0
    stw r0, 0xf0(r30)
    stw r0, 0xec(r30)
lbl_fn_803BF9D4_0000148C:
    addic. r0, r30, 0xe4
    beq lbl_fn_803BF9D4_000014B8
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000014AC
    lis r4, fn_803BF8EC@ha
    addi r4, r4, fn_803BF8EC@l
    bl fn_80695A50
lbl_fn_803BF9D4_000014AC:
    li r0, 0x0
    stw r0, 0xe8(r30)
    stw r0, 0xe4(r30)
lbl_fn_803BF9D4_000014B8:
    addic. r0, r30, 0xdc
    beq lbl_fn_803BF9D4_000014E4
    lwz r3, 0xe0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000014D8
    beq lbl_fn_803BF9D4_000014D8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_000014D8:
    li r0, 0x0
    stw r0, 0xe0(r30)
    stw r0, 0xdc(r30)
lbl_fn_803BF9D4_000014E4:
    addic. r0, r30, 0xd4
    beq lbl_fn_803BF9D4_00001510
    lwz r3, 0xd8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001504
    beq lbl_fn_803BF9D4_00001504
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00001504:
    li r0, 0x0
    stw r0, 0xd8(r30)
    stw r0, 0xd4(r30)
lbl_fn_803BF9D4_00001510:
    addic. r0, r30, 0xcc
    beq lbl_fn_803BF9D4_00001534
    lwz r3, 0xd0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001528
    bl fn_80084C24
lbl_fn_803BF9D4_00001528:
    li r0, 0x0
    stw r0, 0xd0(r30)
    stw r0, 0xcc(r30)
lbl_fn_803BF9D4_00001534:
    addic. r0, r30, 0xc4
    beq lbl_fn_803BF9D4_00001560
    lwz r3, 0xc8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001554
    beq lbl_fn_803BF9D4_00001554
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00001554:
    li r0, 0x0
    stw r0, 0xc8(r30)
    stw r0, 0xc4(r30)
lbl_fn_803BF9D4_00001560:
    addic. r0, r30, 0xbc
    beq lbl_fn_803BF9D4_00001584
    lwz r3, 0xc0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001578
    bl fn_80084C24
lbl_fn_803BF9D4_00001578:
    li r0, 0x0
    stw r0, 0xc0(r30)
    stw r0, 0xbc(r30)
lbl_fn_803BF9D4_00001584:
    addic. r0, r30, 0xb4
    beq lbl_fn_803BF9D4_000015B0
    lwz r3, 0xb8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000015A4
    beq lbl_fn_803BF9D4_000015A4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_000015A4:
    li r0, 0x0
    stw r0, 0xb8(r30)
    stw r0, 0xb4(r30)
lbl_fn_803BF9D4_000015B0:
    addic. r0, r30, 0xac
    beq lbl_fn_803BF9D4_000015DC
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000015D0
    beq lbl_fn_803BF9D4_000015D0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_000015D0:
    li r0, 0x0
    stw r0, 0xb0(r30)
    stw r0, 0xac(r30)
lbl_fn_803BF9D4_000015DC:
    addic. r0, r30, 0xa0
    beq lbl_fn_803BF9D4_00001608
    lwz r3, 0xa4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000015FC
    lis r4, fn_803BF898@ha
    addi r4, r4, fn_803BF898@l
    bl fn_80695A50
lbl_fn_803BF9D4_000015FC:
    li r0, 0x0
    stw r0, 0xa4(r30)
    stw r0, 0xa0(r30)
lbl_fn_803BF9D4_00001608:
    addic. r0, r30, 0x98
    beq lbl_fn_803BF9D4_00001634
    lwz r3, 0x9c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001628
    beq lbl_fn_803BF9D4_00001628
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_00001628:
    li r0, 0x0
    stw r0, 0x9c(r30)
    stw r0, 0x98(r30)
lbl_fn_803BF9D4_00001634:
    addic. r0, r30, 0x90
    beq lbl_fn_803BF9D4_00001660
    lwz r3, 0x94(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001654
    lis r4, fn_803BF824@ha
    addi r4, r4, fn_803BF824@l
    bl fn_80695A50
lbl_fn_803BF9D4_00001654:
    li r0, 0x0
    stw r0, 0x94(r30)
    stw r0, 0x90(r30)
lbl_fn_803BF9D4_00001660:
    addic. r0, r30, 0x88
    beq lbl_fn_803BF9D4_0000168C
    lwz r3, 0x8c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_00001680
    lis r4, fn_803BF824@ha
    addi r4, r4, fn_803BF824@l
    bl fn_80695A50
lbl_fn_803BF9D4_00001680:
    li r0, 0x0
    stw r0, 0x8c(r30)
    stw r0, 0x88(r30)
lbl_fn_803BF9D4_0000168C:
    addic. r0, r30, 0x80
    beq lbl_fn_803BF9D4_000016B8
    lwz r3, 0x84(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000016AC
    lis r4, fn_803BF824@ha
    addi r4, r4, fn_803BF824@l
    bl fn_80695A50
lbl_fn_803BF9D4_000016AC:
    li r0, 0x0
    stw r0, 0x84(r30)
    stw r0, 0x80(r30)
lbl_fn_803BF9D4_000016B8:
    addic. r0, r30, 0x78
    beq lbl_fn_803BF9D4_000016E4
    lwz r3, 0x7c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803BF9D4_000016D8
    beq lbl_fn_803BF9D4_000016D8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803BF9D4_000016D8:
    li r0, 0x0
    stw r0, 0x7c(r30)
    stw r0, 0x78(r30)
lbl_fn_803BF9D4_000016E4:
    lis r4, fn_80014798@ha
    addi r3, r30, 0x4c
    addi r4, r4, fn_80014798@l
    li r5, 0x8
    li r6, 0x3
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803BF9D4_00001718
    mr r3, r30
    bl dtor_80084684
lbl_fn_803BF9D4_00001718:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
