#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800502A8(void);
extern void fn_8005B9CC(void);
extern void fn_8006AA20(void);
extern void fn_8006B0C8(void);
extern void fn_8006B174(void);
extern void fn_8006B2D8(void);
extern void fn_80070C98(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008A4E0(void);
extern void fn_8008A76C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_800902C0(void);
extern void fn_80092A4C(void);
extern void fn_80095300(void);
extern void fn_8009E690(void);
extern void fn_800C16B4(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800D4558(void);
extern void fn_800D4DB8(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_80239DAC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804714A4(void);
extern void fn_804714B0(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473EFC(void);
extern void fn_80473F18(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80490884(void);
extern void fn_80490B0C(void);
extern void fn_80490DE8(void);
extern void fn_80490E38(void);
extern void fn_80490EA0(void);
extern void fn_804962B0(void);
extern void fn_804963A4(void);
extern void fn_805F9420(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80756A8C[];
extern u8 lbl_80756B84[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807905D8[];

/* Small data declarations */
extern u32 lbl_8087E0C8;
extern u32 lbl_8087E0CC;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087FA20;
extern u32 lbl_808870F8;
extern u32 lbl_80887100;
extern u32 lbl_80887104;
extern u32 lbl_80887108;

/* Function declarations */
void fn_80499D60(void);
void fn_80499E14(void);
void fn_80499FE4(void);
void fn_8049A018(void);
void fn_8049A09C(void);
void fn_8049A6B8(void);
void fn_8049A7D8(void);
void fn_8049AA1C(void);
void fn_8049AAFC(void);
void fn_8049AC18(void);
void fn_8049B1F0(void);
void fn_8049B72C(void);

asm void fn_80499D60(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    addi r30, r1, 0x8
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_80499D60_00000090
lbl_fn_80499D60_0000002C:
    lwz r5, 0x6c(r27)
    mr r3, r28
    mr r4, r30
    lwzx r5, r5, r31
    psq_l f1, 0x8(r5), 0, 0
    lfs f2, 0x10(r5)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r1)
    bl fn_804962B0
    cmpwi r3, 0x0
    beq lbl_fn_80499D60_00000074
    lwz r4, 0x6c(r27)
    addi r0, r3, 0x4c
    lwzx r3, r4, r31
    stw r0, 0x64(r3)
    b lbl_fn_80499D60_00000088
lbl_fn_80499D60_00000074:
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r4, 0x6c(r27)
    lwzx r4, r4, r31
    stw r3, 0x64(r4)
lbl_fn_80499D60_00000088:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_fn_80499D60_00000090:
    lwz r0, 0x68(r27)
    cmplw r29, r0
    blt lbl_fn_80499D60_0000002C
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80499E14(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r31, r3
    mr r26, r4
    mr r27, r5
    addi r3, r3, 0x58
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x10(r1)
    mr r30, r3
    addi r29, r1, 0x10
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    bl strlen
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    mr r6, r30
    add r7, r30, r28
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r29
    addi r3, r1, 0x1c
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80499E14_00000148
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_80499E14_00000148:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80499E14_0000015C
    addi r3, r1, 0x1d
    b lbl_fn_80499E14_00000160
lbl_fn_80499E14_0000015C:
    lwz r3, 0x24(r1)
lbl_fn_80499E14_00000160:
    bl fn_800DC6B4
    cmplw r26, r3
    beq lbl_fn_80499E14_00000184
    lis r3, lbl_80756A8C@ha
    addi r3, r3, lbl_80756A8C@l
    addi r3, r3, 0x85
    bl fn_800DC6B4
    cmplw r26, r3
    bne lbl_fn_80499E14_0000025C
lbl_fn_80499E14_00000184:
    neg r0, r27
    or r0, r0, r27
    srwi. r0, r0, 31
    stb r0, 0x120(r31)
    beq lbl_fn_80499E14_00000210
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80499E14_00000204
    li r0, 0x1
    stw r0, 0x54(r31)
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_80499E14_000001F8
lbl_fn_80499E14_000001B8:
    lwz r0, 0x64(r31)
    add r3, r0, r28
    lwz r30, 0x90(r3)
    cmpwi r30, 0x0
    ble lbl_fn_80499E14_000001E0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r4, r0, r3
    b lbl_fn_80499E14_000001E4
lbl_fn_80499E14_000001E0:
    li r4, 0x0
lbl_fn_80499E14_000001E4:
    lwz r0, 0x64(r31)
    addi r29, r29, 0x1
    add r3, r0, r28
    addi r28, r28, 0xa0
    stw r4, 0x98(r3)
lbl_fn_80499E14_000001F8:
    lwz r0, 0x60(r31)
    cmplw r29, r0
    blt lbl_fn_80499E14_000001B8
lbl_fn_80499E14_00000204:
    mr r3, r31
    bl fn_800D4DB8
    b lbl_fn_80499E14_0000025C
lbl_fn_80499E14_00000210:
    li r0, 0x0
    stw r0, 0x54(r31)
    li r29, 0x0
    li r28, 0x0
    lwz r30, lbl_8087F3C0
    b lbl_fn_80499E14_00000248
lbl_fn_80499E14_00000228:
    lwz r0, 0x64(r31)
    mr r3, r30
    li r5, 0x0
    li r6, 0x0
    add r4, r0, r28
    bl fn_80239DAC
    addi r28, r28, 0xa0
    addi r29, r29, 0x1
lbl_fn_80499E14_00000248:
    lwz r0, 0x60(r31)
    cmplw r29, r0
    blt lbl_fn_80499E14_00000228
    mr r3, r31
    bl fn_800D4558
lbl_fn_80499E14_0000025C:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80499E14_00000270
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_80499E14_00000270:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80499FE4(void)
{
    nofralloc
    lbz r0, 0x121(r3)
    li r5, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80499FE4_000002B0
    lfs f1, lbl_808870F8
    lfs f0, 0x4(r4)
    lfs f2, 0x130(r3)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_80499FE4_000002B0
    li r5, 0x1
lbl_fn_80499FE4_000002B0:
    mr r3, r5
    blr
}

asm void fn_8049A018(void)
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
    beq lbl_fn_8049A018_0000031C
    lis r5, lbl_80756B84@ha
    li r3, 0x350
    addi r5, r5, lbl_80756B84@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049A018_00000320
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8049A09C
    b lbl_fn_8049A018_00000320
lbl_fn_8049A018_0000031C:
    li r3, 0x0
lbl_fn_8049A018_00000320:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049A09C(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x280
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    bl _savegpr_27
    mr r29, r3
    mr r30, r6
    bl fn_804963A4
    lis r3, lbl_807905D8@ha
    addi r28, r29, 0x50
    addi r3, r3, lbl_807905D8@l
    stw r3, 0x0(r29)
    mr r3, r28
    bl fn_80473E74
    lis r31, lbl_80756B84@ha
    lfs f0, lbl_80887100
    addi r31, r31, lbl_80756B84@l
    addi r0, r29, 0x9c
    lis r4, lbl_8078FBB0@ha
    li r3, 0x0
    addi r4, r4, lbl_8078FBB0@l
    cmplw r31, r0
    stw r4, 0x0(r28)
    stfs f0, 0x58(r29)
    stb r3, 0x5c(r29)
    beq lbl_fn_8049A09C_000003C8
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r29, 0x9c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8049A09C_000003C8:
    addi r3, r29, 0xdc
    bl fn_800D5738
    li r0, 0x9
    stw r0, 0x10c(r29)
    addi r3, r29, 0x110
    li r4, 0x9
    bl fn_8008A4E0
    lwz r0, 0x340(r29)
    li r4, 0x0
    stw r4, 0x324(r29)
    mr r3, r30
    clrlwi r0, r0, 3
    oris r0, r0, 0x1000
    stw r4, 0x344(r29)
    rlwinm r0, r0, 0, 6, 3
    stw r0, 0x340(r29)
    stw r4, 0x348(r29)
    bl fn_8005B9CC
    lwz r12, 0x50(r29)
    mr r31, r3
    addi r3, r29, 0x50
    lwz r12, 0xc(r12)
    mr r4, r31
    mtctr r12
    bctrl
    addi r3, r29, 0x50
    bl fn_80473F18
    addi r0, r29, 0x5c
    mr r28, r3
    cmplw r3, r0
    beq lbl_fn_8049A09C_0000045C
    bl strlen
    mr r5, r3
    mr r4, r28
    addi r3, r29, 0x5c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8049A09C_0000045C:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x5b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049A09C_0000056C
    li r0, 0x0
    stw r0, 0x54(r1)
    mr r3, r31
    addi r28, r1, 0x54
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r28
    stb r0, 0x10(r1)
    mr r6, r31
    add r7, r31, r27
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x48
    bl fn_8006B174
    addi r3, r1, 0x3c
    addi r4, r1, 0x48
    bl fn_8006B2D8
    lwz r0, 0x3c(r1)
    lis r4, lbl_80756B84@ha
    addi r4, r4, lbl_80756B84@l
    addi r3, r1, 0x160
    srwi. r0, r0, 31
    addi r4, r4, 0x1
    bne lbl_fn_8049A09C_000004F8
    addi r5, r1, 0x3d
    b lbl_fn_8049A09C_000004FC
lbl_fn_8049A09C_000004F8:
    lwz r5, 0x44(r1)
lbl_fn_8049A09C_000004FC:
    crclr 6
    bl sprintf
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049A09C_00000518
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_8049A09C_00000518:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049A09C_0000052C
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8049A09C_0000052C:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049A09C_00000540
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_8049A09C_00000540:
    addi r3, r1, 0x160
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_8049A09C_0000056C
    lwz r0, 0x340(r29)
    addi r3, r29, 0x110
    addi r4, r1, 0x160
    li r5, 0x0
    oris r0, r0, 0x800
    stw r0, 0x340(r29)
    bl fn_8008AD4C
lbl_fn_8049A09C_0000056C:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x5b4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049A09C_000006D0
    li r0, 0x0
    stw r0, 0x30(r1)
    mr r3, r31
    addi r28, r1, 0x30
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r31
    add r7, r31, r27
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x24
    bl fn_8006B174
    addi r3, r1, 0x18
    addi r4, r1, 0x24
    bl fn_8006B2D8
    lwz r0, 0x18(r1)
    lis r4, lbl_80756B84@ha
    addi r4, r4, lbl_80756B84@l
    addi r3, r1, 0x60
    srwi. r0, r0, 31
    addi r4, r4, 0x14
    bne lbl_fn_8049A09C_00000608
    addi r5, r1, 0x19
    b lbl_fn_8049A09C_0000060C
lbl_fn_8049A09C_00000608:
    lwz r5, 0x20(r1)
lbl_fn_8049A09C_0000060C:
    crclr 6
    bl sprintf
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049A09C_00000628
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8049A09C_00000628:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049A09C_0000063C
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_8049A09C_0000063C:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049A09C_00000650
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8049A09C_00000650:
    addi r3, r1, 0x60
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_8049A09C_000006D0
    lwz r0, 0x340(r29)
    lis r5, lbl_80756B84@ha
    addi r5, r5, lbl_80756B84@l
    li r3, 0x214
    oris r0, r0, 0x400
    stw r0, 0x340(r29)
    mr r6, r5
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049A09C_00000698
    li r4, 0x9
    bl fn_8008A4E0
lbl_fn_8049A09C_00000698:
    lwz r0, 0x324(r29)
    cmpwi r0, 0x0
    stw r3, 0x324(r29)
    beq lbl_fn_8049A09C_000006C0
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8049A09C_000006C0:
    lwz r3, 0x324(r29)
    addi r4, r1, 0x60
    li r5, 0x0
    bl fn_8008AD4C
lbl_fn_8049A09C_000006D0:
    mr r3, r30
    bl fn_8005B9CC
    lis r28, lbl_80756B84@ha
    lfs f31, lbl_80887104
    mr r27, r3
    addi r31, r28, lbl_80756B84@l
lbl_fn_8049A09C_000006E8:
    mr r3, r27
    addi r4, r31, 0x27
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_00000710
    lwz r0, 0x340(r29)
    stfs f31, 0x58(r29)
    oris r0, r0, 0x2000
    stw r0, 0x340(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_00000710:
    mr r3, r27
    addi r4, r31, 0x35
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_00000744
    lwz r0, 0x340(r29)
    mr r3, r30
    oris r0, r0, 0x2000
    stw r0, 0x340(r29)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x58(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_00000744:
    mr r3, r27
    addi r4, r31, 0x45
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_0000078C
    mr r3, r30
    bl fn_8005B9CC
    addi r0, r29, 0x9c
    mr r27, r3
    cmplw r3, r0
    beq lbl_fn_8049A09C_000008CC
    bl strlen
    mr r5, r3
    mr r4, r27
    addi r3, r29, 0x9c
    addi r5, r5, 0x1
    bl memcpy
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_0000078C:
    mr r3, r27
    addi r4, r31, 0x4a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_000007B0
    lwz r0, 0x10c(r29)
    ori r0, r0, 0x400
    stw r0, 0x10c(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_000007B0:
    mr r3, r27
    addi r4, r31, 0x52
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_000007D4
    lwz r0, 0x10c(r29)
    ori r0, r0, 0x800
    stw r0, 0x10c(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_000007D4:
    mr r3, r27
    addi r4, r31, 0x5a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_000007F8
    lwz r0, 0x10c(r29)
    ori r0, r0, 0x1400
    stw r0, 0x10c(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_000007F8:
    mr r3, r27
    addi r4, r31, 0x68
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_0000081C
    lwz r0, 0x10c(r29)
    ori r0, r0, 0x1800
    stw r0, 0x10c(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_0000081C:
    mr r3, r27
    addi r4, r31, 0x76
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_00000840
    lwz r0, 0x10c(r29)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x10c(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_00000840:
    mr r3, r27
    addi r4, r31, 0x80
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_00000864
    lwz r0, 0x10c(r29)
    ori r0, r0, 0x8
    stw r0, 0x10c(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_00000864:
    mr r3, r27
    addi r4, r31, 0x90
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_00000888
    lwz r0, 0x10c(r29)
    oris r0, r0, 0x20
    stw r0, 0x10c(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_00000888:
    mr r3, r27
    addi r4, r31, 0x9d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_000008AC
    lwz r0, 0x10c(r29)
    oris r0, r0, 0x10
    stw r0, 0x10c(r29)
    b lbl_fn_8049A09C_000008CC
lbl_fn_8049A09C_000008AC:
    mr r3, r27
    addi r4, r31, 0xa7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_000008CC
    lwz r0, 0x10c(r29)
    ori r0, r0, 0x8000
    stw r0, 0x10c(r29)
lbl_fn_8049A09C_000008CC:
    mr r3, r30
    bl fn_8005B9CC
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8049A09C_000008F4
    mr r4, r27
    addi r3, r28, lbl_80756B84@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049A09C_000006E8
lbl_fn_8049A09C_000008F4:
    lwz r0, 0x340(r29)
    extlwi r0, r0, 2, 2
    srawi. r0, r0, 31
    bne lbl_fn_8049A09C_00000934
    lis r4, lbl_80756B84@ha
    addi r3, r29, 0x5c
    addi r4, r4, lbl_80756B84@l
    addi r4, r4, 0xb8
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8049A09C_00000934
    lwz r0, 0x340(r29)
    lfs f0, lbl_80887104
    oris r0, r0, 0x2000
    stw r0, 0x340(r29)
    stfs f0, 0x58(r29)
lbl_fn_8049A09C_00000934:
    psq_l f31, 0x288(r1), 0, 0
    mr r3, r29
    lfd f31, 0x280(r1)
    addi r11, r1, 0x280
    bl _restgpr_27
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_8049A6B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_8049A6B8_00000A60
    lis r4, lbl_807905D8@ha
    li r29, 0x0
    addi r4, r4, lbl_807905D8@l
    stw r4, 0x0(r3)
    li r30, 0x0
    b lbl_fn_8049A6B8_000009BC
lbl_fn_8049A6B8_00000990:
    lwz r3, 0x348(r27)
    lwzx r31, r3, r30
    cmpwi r31, 0x0
    beq lbl_fn_8049A6B8_000009B4
    mr r3, r31
    li r4, -0x1
    bl fn_8009E690
    mr r3, r31
    bl dtor_80084684
lbl_fn_8049A6B8_000009B4:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_8049A6B8_000009BC:
    lwz r0, 0x344(r27)
    cmplw r29, r0
    blt lbl_fn_8049A6B8_00000990
    addic. r0, r27, 0x344
    beq lbl_fn_8049A6B8_000009EC
    lwz r3, 0x348(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8049A6B8_000009E0
    bl fn_80084C24
lbl_fn_8049A6B8_000009E0:
    li r0, 0x0
    stw r0, 0x348(r27)
    stw r0, 0x344(r27)
lbl_fn_8049A6B8_000009EC:
    addic. r0, r27, 0x324
    beq lbl_fn_8049A6B8_00000A14
    lwz r3, 0x324(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8049A6B8_00000A14
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8049A6B8_00000A14:
    addi r3, r27, 0x110
    li r4, -0x1
    bl fn_8008A76C
    addi r3, r27, 0xdc
    li r4, -0x1
    bl fn_800D5808
    addic. r3, r27, 0x50
    beq lbl_fn_8049A6B8_00000A3C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8049A6B8_00000A3C:
    cmpwi r27, 0x0
    beq lbl_fn_8049A6B8_00000A50
    mr r3, r27
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_8049A6B8_00000A50:
    cmpwi r28, 0x0
    ble lbl_fn_8049A6B8_00000A60
    mr r3, r27
    bl dtor_80084684
lbl_fn_8049A6B8_00000A60:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049A7D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r3, 0x50
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8049A7D8_00000AB0
    li r3, 0x0
    b lbl_fn_8049A7D8_00000C9C
lbl_fn_8049A7D8_00000AB0:
    lwz r3, 0x340(r31)
    srawi. r0, r3, 31
    bne lbl_fn_8049A7D8_00000AD4
    oris r0, r3, 0x8000
    stw r0, 0x340(r31)
    mr r3, r31
    bl fn_8049B1F0
    addi r3, r31, 0x50
    bl fn_80473F88
lbl_fn_8049A7D8_00000AD4:
    addi r3, r31, 0xdc
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_8049A7D8_00000AEC
    li r3, 0x0
    b lbl_fn_8049A7D8_00000C9C
lbl_fn_8049A7D8_00000AEC:
    lwz r3, 0x340(r31)
    extlwi r0, r3, 2, 5
    srawi. r0, r0, 31
    bne lbl_fn_8049A7D8_00000B7C
    extlwi r0, r3, 2, 1
    srawi. r0, r0, 31
    bne lbl_fn_8049A7D8_00000B7C
    lwz r0, 0x104(r31)
    oris r3, r3, 0x4000
    stw r3, 0x340(r31)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8049A7D8_00000B40
    addi r3, r31, 0xdc
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8049A7D8_00000B44
    addi r3, r31, 0xfc
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8049A7D8_00000B44
lbl_fn_8049A7D8_00000B40:
    li r30, 0x1
lbl_fn_8049A7D8_00000B44:
    cmpwi r30, 0x0
    beq lbl_fn_8049A7D8_00000B7C
    addi r4, r31, 0xdc
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_8049A7D8_00000B70
lbl_fn_8049A7D8_00000B5C:
    lwz r3, 0x348(r31)
    addi r6, r6, 0x1
    lwzx r3, r3, r5
    addi r5, r5, 0x4
    stw r4, 0x7c(r3)
lbl_fn_8049A7D8_00000B70:
    lwz r0, 0x344(r31)
    cmplw r6, r0
    blt lbl_fn_8049A7D8_00000B5C
lbl_fn_8049A7D8_00000B7C:
    lwz r0, 0x340(r31)
    li r29, 0x1
    extlwi r0, r0, 2, 5
    srawi. r0, r0, 31
    beq lbl_fn_8049A7D8_00000BC4
    lwz r3, 0x324(r31)
    bl fn_8008B140
    lwz r0, 0x340(r31)
    cntlzw r3, r3
    srwi r3, r3, 5
    li r29, 0x0
    extlwi r0, r0, 2, 5
    srawi. r0, r0, 31
    beq lbl_fn_8049A7D8_00000C08
    cmpwi r3, 0x0
    beq lbl_fn_8049A7D8_00000C08
    li r29, 0x1
    b lbl_fn_8049A7D8_00000C08
lbl_fn_8049A7D8_00000BC4:
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8049A7D8_00000BFC
lbl_fn_8049A7D8_00000BD0:
    cmpwi r29, 0x0
    li r29, 0x0
    beq lbl_fn_8049A7D8_00000BF4
    lwz r3, 0x348(r31)
    lwzx r3, r3, r30
    bl fn_80490DE8
    cmpwi r3, 0x0
    beq lbl_fn_8049A7D8_00000BF4
    li r29, 0x1
lbl_fn_8049A7D8_00000BF4:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_8049A7D8_00000BFC:
    lwz r0, 0x344(r31)
    cmplw r28, r0
    blt lbl_fn_8049A7D8_00000BD0
lbl_fn_8049A7D8_00000C08:
    lwz r0, 0x340(r31)
    extlwi r0, r0, 2, 4
    srawi. r0, r0, 31
    beq lbl_fn_8049A7D8_00000C38
    cmpwi r29, 0x0
    li r29, 0x0
    beq lbl_fn_8049A7D8_00000C38
    addi r3, r31, 0x110
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8049A7D8_00000C38
    li r29, 0x1
lbl_fn_8049A7D8_00000C38:
    cmpwi r29, 0x0
    beq lbl_fn_8049A7D8_00000C98
    mr r3, r31
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8049A7D8_00000C98
    lwz r12, 0x0(r31)
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x0
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    addi r4, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r4), 0, 0
    li r3, 0x1
    psq_st f1, 0x328(r31), 0, 0
    stfs f2, 0x330(r31)
    psq_l f1, 0xc(r4), 0, 0
    lfs f2, 0x1c(r1)
    stfs f2, 0x33c(r31)
    psq_st f1, 0x334(r31), 0, 0
    b lbl_fn_8049A7D8_00000C9C
lbl_fn_8049A7D8_00000C98:
    li r3, 0x0
lbl_fn_8049A7D8_00000C9C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8049AA1C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r4, 0x340(r3)
    extlwi r0, r4, 2, 3
    srawi. r0, r0, 31
    beq lbl_fn_8049AA1C_00000D80
    extlwi r0, r4, 2, 5
    srawi. r0, r0, 31
    beq lbl_fn_8049AA1C_00000D54
    lwz r3, 0x324(r3)
    bl fn_80092A4C
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r5, r1, 0x8
    li r4, 0x0
    lwz r3, 0x324(r29)
    bl fn_800902C0
    addic. r3, r1, 0x8
    beq lbl_fn_8049AA1C_00000D80
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8049AA1C_00000D80
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8049AA1C_00000D48
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049AA1C_00000D48:
    li r0, 0x0
    stw r0, 0x8(r1)
    b lbl_fn_8049AA1C_00000D80
lbl_fn_8049AA1C_00000D54:
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8049AA1C_00000D74
lbl_fn_8049AA1C_00000D60:
    lwz r3, 0x348(r29)
    lwzx r3, r3, r31
    bl fn_80490E38
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8049AA1C_00000D74:
    lwz r0, 0x344(r29)
    cmplw r30, r0
    blt lbl_fn_8049AA1C_00000D60
lbl_fn_8049AA1C_00000D80:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8049AAFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r4, 0x340(r3)
    extlwi r0, r4, 2, 3
    srawi. r0, r0, 31
    beq lbl_fn_8049AAFC_00000E98
    extlwi r0, r4, 2, 4
    li r31, 0x1
    srawi. r0, r0, 31
    beq lbl_fn_8049AAFC_00000DF8
    lwz r4, lbl_8087F0A8
    lwz r0, 0x5b0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8049AAFC_00000DF8
    li r31, 0x0
    addi r3, r3, 0x110
    bl fn_8008CD60
lbl_fn_8049AAFC_00000DF8:
    lwz r0, 0x340(r30)
    extlwi r0, r0, 2, 5
    srawi. r0, r0, 31
    beq lbl_fn_8049AAFC_00000E14
    lwz r3, 0x324(r30)
    bl fn_8008CD60
    b lbl_fn_8049AAFC_00000E98
lbl_fn_8049AAFC_00000E14:
    lwz r3, lbl_8087FA20
    li r29, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_8049AAFC_00000E50
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8049AAFC_00000E50
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x328
    addi r3, r3, 0x204
    bl fn_800502A8
    cmpwi r3, 0x0
    bne lbl_fn_8049AAFC_00000E50
    li r29, 0x0
lbl_fn_8049AAFC_00000E50:
    cmpwi r29, 0x0
    beq lbl_fn_8049AAFC_00000E98
    lwz r3, lbl_8087F0A8
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049AAFC_00000E98
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_8049AAFC_00000E8C
lbl_fn_8049AAFC_00000E74:
    lwz r3, 0x348(r30)
    mr r4, r31
    lwzx r3, r3, r29
    bl fn_80490EA0
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_8049AAFC_00000E8C:
    lwz r0, 0x344(r30)
    cmplw r28, r0
    blt lbl_fn_8049AAFC_00000E74
lbl_fn_8049AAFC_00000E98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049AC18(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    bl _savegpr_14
    lfs f11, lbl_80887104
    addi r5, r1, 0xa4
    lfs f10, lbl_80887108
    addi r6, r1, 0x98
    fmr f2, f11
    stfs f11, 0xa4(r1)
    mr r15, r3
    mr r16, r4
    stfs f11, 0xa8(r1)
    addi r30, r1, 0x110
    stfs f2, 0x8(r3)
    fmr f2, f10
    psq_l f1, 0x0(r5), 0, 0
    addi r29, r1, 0xf8
    stfs f10, 0x98(r1)
    addi r14, r1, 0x20
    addi r19, r1, 0x128
    stfs f10, 0x9c(r1)
    addi r20, r1, 0x134
    addi r21, r1, 0x140
    addi r22, r1, 0x14c
    psq_st f1, 0x0(r3), 0, 0
    addi r23, r1, 0x158
    psq_l f1, 0x0(r6), 0, 0
    addi r24, r1, 0x164
    stfs f11, 0xac(r1)
    addi r25, r1, 0x170
    addi r26, r1, 0x17c
    addi r27, r1, 0x8
    stfs f10, 0xa0(r1)
    addi r28, r1, 0x14
    addi r18, r1, 0xe0
    li r17, 0x0
    psq_st f1, 0xc(r3), 0, 0
    li r31, 0x0
    stfs f2, 0x14(r3)
    b lbl_fn_8049AC18_00001404
lbl_fn_8049AC18_00000F78:
    lwz r3, 0x348(r16)
    lwzx r4, r3, r31
    lwz r4, 0x4(r4)
    lwz r5, 0x17c(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8049AC18_000013FC
    lfs f2, 0x18(r5)
    mr r4, r19
    psq_l f1, 0x10(r5), 0, 0
    mr r5, r19
    psq_st f1, 0x0(r30), 0, 0
    frsp f10, f2
    li r6, 0x8
    stfs f2, 0x118(r1)
    lfs f12, 0x110(r1)
    lwzx r7, r3, r31
    lfs f11, 0x114(r1)
    lwz r7, 0x4(r7)
    stfs f2, 0x94(r1)
    lwz r8, 0x17c(r7)
    addi r7, r1, 0x8c
    psq_st f1, 0x0(r7), 0, 0
    addi r7, r1, 0x11c
    lfs f2, 0x24(r8)
    psq_l f1, 0x1c(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    frsp f29, f2
    addi r7, r1, 0x80
    lfs f30, 0x120(r1)
    lfs f31, 0x11c(r1)
    fmr f13, f29
    stfs f2, 0x124(r1)
    lwzx r3, r3, r31
    psq_st f1, 0x0(r7), 0, 0
    addi r7, r1, 0x2c
    addi r3, r3, 0x30
    stfs f2, 0x88(r1)
    fmr f2, f29
    stfs f31, 0x20(r1)
    stfs f30, 0x24(r1)
    psq_l f1, 0x0(r14), 0, 0
    stfs f12, 0x2c(r1)
    stfs f30, 0x30(r1)
    psq_st f1, 0x0(r19), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x38
    stfs f31, 0x38(r1)
    stfs f11, 0x3c(r1)
    psq_st f1, 0x0(r20), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x44
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    psq_st f1, 0x0(r21), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x50
    stfs f31, 0x50(r1)
    stfs f30, 0x54(r1)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x5c
    stfs f12, 0x5c(r1)
    stfs f30, 0x60(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x68
    stfs f31, 0x68(r1)
    stfs f11, 0x6c(r1)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x74
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x130(r1)
    stfs f2, 0x13c(r1)
    stfs f2, 0x148(r1)
    stfs f2, 0x154(r1)
    fmr f2, f10
    stfs f29, 0x28(r1)
    stfs f13, 0x34(r1)
    stfs f13, 0x40(r1)
    stfs f13, 0x4c(r1)
    stfs f10, 0x58(r1)
    stfs f2, 0x160(r1)
    stfs f10, 0x64(r1)
    stfs f2, 0x16c(r1)
    stfs f10, 0x70(r1)
    stfs f2, 0x178(r1)
    stfs f10, 0x7c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x184(r1)
    bl fn_805F9420
    psq_l f1, 0x0(r19), 0, 0
    mr r5, r20
    lfs f2, 0x130(r1)
    mr r3, r27
    psq_st f1, 0x0(r27), 0, 0
    mr r4, r28
    psq_lu f0, 0x0(r5), 0, 0
    mr r6, r27
    stfs f2, 0x10(r1)
    mr r7, r28
    psq_lu f4, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    ps_sub f8, f0, f4
    lfs f1, 0x8(r5)
    stfs f2, 0x1c(r1)
    lfs f5, 0x8(r3)
    psq_lu f2, 0x0(r4), 0, 0
    ps_sel f8, f8, f0, f4
    fsub f9, f1, f5
    ps_sub f6, f0, f2
    lfs f3, 0x8(r4)
    fsub f7, f1, f3
    ps_sel f6, f6, f2, f0
    fsel f9, f9, f1, f5
    fsel f7, f7, f3, f1
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r27
    mr r4, r28
    mr r5, r21
    stfs f9, 0x8(r6)
    mr r6, r27
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r28
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r27
    mr r4, r28
    mr r5, r22
    stfs f9, 0x8(r6)
    mr r6, r27
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r28
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r27
    mr r4, r28
    mr r5, r23
    stfs f9, 0x8(r6)
    mr r6, r27
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r28
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    stfs f9, 0x8(r6)
    mr r3, r27
    mr r4, r28
    mr r5, r24
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f2, 0x0(r4), 0, 0
    mr r6, r27
    psq_lu f4, 0x0(r3), 0, 0
    mr r7, r28
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r27
    mr r4, r28
    mr r5, r25
    stfs f9, 0x8(r6)
    mr r6, r27
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r28
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r27
    mr r4, r28
    mr r5, r26
    stfs f9, 0x8(r6)
    mr r6, r27
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r28
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r4, r15
    psq_l f1, 0x0(r28), 0, 0
    mr r5, r30
    lfs f2, 0x1c(r1)
    addi r3, r1, 0xe0
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x100(r1)
    lfs f2, 0x10(r1)
    psq_st f1, 0xc(r29), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f9, 0x8(r6)
    stfs f2, 0x10c(r1)
    lfs f2, 0x100(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0xc(r29), 0, 0
    stfs f2, 0x118(r1)
    lfs f2, 0x10c(r1)
    psq_st f1, 0xc(r30), 0, 0
    stfs f2, 0x124(r1)
    bl fn_80070C98
    psq_l f1, 0x0(r18), 0, 0
    lfs f2, 0xe8(r1)
    stfs f2, 0x8(r15)
    psq_st f1, 0x0(r15), 0, 0
    psq_l f1, 0xc(r18), 0, 0
    lfs f2, 0xf4(r1)
    stfs f2, 0x14(r15)
    psq_st f1, 0xc(r15), 0, 0
lbl_fn_8049AC18_000013FC:
    addi r17, r17, 0x1
    addi r31, r31, 0x4
lbl_fn_8049AC18_00001404:
    lwz r0, 0x344(r16)
    cmplw r17, r0
    blt lbl_fn_8049AC18_00000F78
    lwz r0, 0x340(r16)
    extlwi r0, r0, 2, 5
    srawi. r0, r0, 31
    beq lbl_fn_8049AC18_00001460
    lwz r4, 0x324(r16)
    addi r3, r1, 0xb0
    bl fn_80095300
    mr r4, r15
    addi r3, r1, 0xc8
    addi r5, r1, 0xb0
    bl fn_80070C98
    addi r3, r1, 0xc8
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r15), 0, 0
    stfs f2, 0x8(r15)
    psq_l f1, 0xc(r3), 0, 0
    lfs f2, 0xdc(r1)
    stfs f2, 0x14(r15)
    psq_st f1, 0xc(r15), 0, 0
lbl_fn_8049AC18_00001460:
    addi r11, r1, 0x1d0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    bl _restgpr_14
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8049B1F0(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stmw r25, 0x174(r1)
    mr r27, r3
    addi r3, r3, 0x50
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8049B1F0_000019B8
    addi r3, r1, 0x28
    bl fn_804714A4
    li r0, 0x0
    stw r0, 0x50(r1)
    addi r3, r27, 0x50
    bl fn_8047059C
    mr r26, r3
    addi r3, r27, 0x50
    bl fn_80470580
    mr r4, r3
    mr r5, r26
    addi r3, r1, 0x28
    addi r6, r1, 0x50
    li r7, 0x0
    bl fn_804714B0
    addic. r3, r1, 0x50
    beq lbl_fn_8049B1F0_0000152C
    lwz r4, 0x50(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8049B1F0_0000152C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8049B1F0_00001524
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8049B1F0_00001524:
    li r0, 0x0
    stw r0, 0x50(r1)
lbl_fn_8049B1F0_0000152C:
    addi r3, r27, 0x50
    bl fn_80470580
    mr r31, r3
    addi r3, r27, 0x50
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x2c(r1)
    mr r26, r3
    addi r28, r1, 0x2c
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl strlen
    mr r29, r3
    mr r3, r28
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r28
    stb r0, 0x20(r1)
    mr r6, r26
    add r7, r26, r29
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x44
    bl fn_8006B0C8
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049B1F0_000015B0
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8049B1F0_000015B0:
    lis r26, lbl_80756B84@ha
    addi r3, r27, 0x9c
    addi r26, r26, lbl_80756B84@l
    bl strlen
    lbzx r0, r26, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8049B1F0_00001620
    add r3, r27, r3
    addi r4, r27, 0x9c
    addi r3, r3, 0x9c
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_8049B1F0_0000161C
lbl_fn_8049B1F0_000015F0:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_8049B1F0_00001610
    li r0, 0x0
    b lbl_fn_8049B1F0_00001620
lbl_fn_8049B1F0_00001610:
    addi r4, r4, 0x1
    addi r26, r26, 0x1
    bdnz lbl_fn_8049B1F0_000015F0
lbl_fn_8049B1F0_0000161C:
    li r0, 0x1
lbl_fn_8049B1F0_00001620:
    cmpwi r0, 0x0
    beq lbl_fn_8049B1F0_000017A8
    lis r4, lbl_80756B84@ha
    lwz r3, 0x20(r31)
    addi r4, r4, lbl_80756B84@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8049B1F0_000017A8
    lwz r4, 0x44(r1)
    srwi. r0, r4, 31
    bne lbl_fn_8049B1F0_00001664
    lwz r3, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8049B1F0_000016AC
lbl_fn_8049B1F0_00001664:
    li r0, 0x0
    addi r26, r1, 0x38
    stw r0, 0x38(r1)
    mr r3, r26
    lwz r4, 0x48(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80013DC4
    lbz r5, 0x1c(r1)
    mr r3, r26
    stb r5, 0x18(r1)
    addi r8, r1, 0x18
    lwz r6, 0x4c(r1)
    li r4, 0x0
    lwz r0, 0x48(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8049B1F0_000016AC:
    lwz r0, 0x38(r1)
    lis r3, lbl_80756B84@ha
    addi r3, r3, lbl_80756B84@l
    srwi. r0, r0, 31
    addi r26, r3, 0xbf
    bne lbl_fn_8049B1F0_000016D0
    lbz r0, 0x38(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8049B1F0_000016D4
lbl_fn_8049B1F0_000016D0:
    lwz r28, 0x3c(r1)
lbl_fn_8049B1F0_000016D4:
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r4, r28
    mr r6, r26
    addi r3, r1, 0x38
    add r7, r26, r0
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x38(r1)
    lwz r26, 0x20(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8049B1F0_00001720
    lbz r0, 0x38(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8049B1F0_00001724
lbl_fn_8049B1F0_00001720:
    lwz r28, 0x3c(r1)
lbl_fn_8049B1F0_00001724:
    lbz r0, 0xc(r1)
    mr r3, r26
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r4, r28
    mr r6, r26
    addi r3, r1, 0x38
    add r7, r26, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8049B1F0_00001768
    addi r26, r1, 0x39
    b lbl_fn_8049B1F0_0000176C
lbl_fn_8049B1F0_00001768:
    lwz r26, 0x40(r1)
lbl_fn_8049B1F0_0000176C:
    addi r0, r27, 0x9c
    cmplw r26, r0
    beq lbl_fn_8049B1F0_00001794
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r27, 0x9c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8049B1F0_00001794:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049B1F0_000017A8
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8049B1F0_000017A8:
    lis r26, lbl_80756B84@ha
    addi r3, r27, 0x9c
    addi r26, r26, lbl_80756B84@l
    bl strlen
    lbzx r0, r26, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8049B1F0_00001818
    add r3, r27, r3
    addi r4, r27, 0x9c
    addi r3, r3, 0x9c
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    beq lbl_fn_8049B1F0_00001814
lbl_fn_8049B1F0_000017E8:
    lbz r3, 0x0(r4)
    lbz r0, 0x0(r26)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_8049B1F0_00001808
    li r0, 0x0
    b lbl_fn_8049B1F0_00001818
lbl_fn_8049B1F0_00001808:
    addi r4, r4, 0x1
    addi r26, r26, 0x1
    bdnz lbl_fn_8049B1F0_000017E8
lbl_fn_8049B1F0_00001814:
    li r0, 0x1
lbl_fn_8049B1F0_00001818:
    cmpwi r0, 0x0
    bne lbl_fn_8049B1F0_0000182C
    addi r3, r27, 0xdc
    addi r4, r27, 0x9c
    bl fn_800D5908
lbl_fn_8049B1F0_0000182C:
    lwz r0, 0x340(r27)
    extlwi r0, r0, 2, 5
    srawi. r0, r0, 31
    beq lbl_fn_8049B1F0_00001854
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049B1F0_000019B8
    lwz r3, 0x4c(r1)
    bl dtor_80084684
    b lbl_fn_8049B1F0_000019B8
lbl_fn_8049B1F0_00001854:
    lwz r3, 0x348(r27)
    lwz r26, 0x24(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8049B1F0_00001868
    bl fn_80084C24
lbl_fn_8049B1F0_00001868:
    cmpwi r26, 0x0
    stw r26, 0x344(r27)
    beq lbl_fn_8049B1F0_00001894
    slwi r3, r26, 2
    li r4, 0x6
    la r5, lbl_8087E0CC
    la r6, lbl_8087E0C8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x348(r27)
    b lbl_fn_8049B1F0_0000189C
lbl_fn_8049B1F0_00001894:
    li r0, 0x0
    stw r0, 0x348(r27)
lbl_fn_8049B1F0_0000189C:
    lis r26, lbl_80756B84@ha
    li r28, 0x0
    addi r26, r26, lbl_80756B84@l
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_8049B1F0_00001998
lbl_fn_8049B1F0_000018B4:
    lwz r3, 0x10(r31)
    subis r0, r3, 0x6c6f
    cmplwi r0, 0x6373
    bne lbl_fn_8049B1F0_000018D0
    lwz r0, 0x28(r31)
    add r25, r0, r30
    b lbl_fn_8049B1F0_000018D8
lbl_fn_8049B1F0_000018D0:
    lwz r0, 0x28(r31)
    add r25, r0, r29
lbl_fn_8049B1F0_000018D8:
    lwz r5, 0x2c(r25)
    addi r3, r1, 0x68
    addi r4, r26, 0xca
    lwz r5, 0x0(r5)
    crclr 6
    bl sprintf
    lwz r3, 0x10(r31)
    subis r0, r3, 0x6c6f
    cmplwi r0, 0x6373
    bne lbl_fn_8049B1F0_00001944
    lwz r0, 0x28(r31)
    mr r5, r26
    mr r6, r26
    li r3, 0x90
    add r25, r0, r30
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049B1F0_00001934
    mr r5, r25
    addi r4, r1, 0x68
    bl fn_80490B0C
lbl_fn_8049B1F0_00001934:
    lwz r4, 0x348(r27)
    slwi r5, r28, 2
    stwx r3, r4, r5
    b lbl_fn_8049B1F0_0000197C
lbl_fn_8049B1F0_00001944:
    mr r5, r26
    mr r6, r26
    li r3, 0x90
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049B1F0_00001970
    mr r5, r25
    addi r4, r1, 0x68
    bl fn_80490884
lbl_fn_8049B1F0_00001970:
    lwz r4, 0x348(r27)
    slwi r5, r28, 2
    stwx r3, r4, r5
lbl_fn_8049B1F0_0000197C:
    lwz r3, 0x348(r27)
    addi r30, r30, 0x3c
    lwz r0, 0x10c(r27)
    addi r29, r29, 0x30
    lwzx r3, r3, r5
    addi r28, r28, 0x1
    stw r0, 0x6c(r3)
lbl_fn_8049B1F0_00001998:
    lwz r0, 0x24(r31)
    cmpw r28, r0
    blt lbl_fn_8049B1F0_000018B4
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049B1F0_000019B8
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_8049B1F0_000019B8:
    lmw r25, 0x174(r1)
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_8049B72C(void)
{
    nofralloc
    lwz r0, 0x340(r3)
    extlwi r0, r0, 2, 5
    srawi. r0, r0, 31
    beq lbl_fn_8049B72C_000019EC
    lwz r5, 0x324(r3)
    lwz r0, 0x4(r5)
    or r0, r0, r4
    stw r0, 0x4(r5)
lbl_fn_8049B72C_000019EC:
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_8049B72C_00001A0C
lbl_fn_8049B72C_000019F8:
    lwz r5, 0x348(r3)
    addi r7, r7, 0x1
    lwzx r5, r5, r6
    addi r6, r6, 0x4
    stw r4, 0x6c(r5)
lbl_fn_8049B72C_00001A0C:
    lwz r0, 0x344(r3)
    cmplw r7, r0
    blt lbl_fn_8049B72C_000019F8
    stw r4, 0x10c(r3)
    blr
}
