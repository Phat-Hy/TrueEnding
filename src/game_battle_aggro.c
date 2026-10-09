#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80017064(void);
extern void fn_80044E0C(void);
extern void fn_8004ECC0(void);
extern void fn_800697D8(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_8011BEB8(void);
extern void fn_8011C044(void);
extern void fn_801255C8(void);
extern void fn_80128508(void);
extern void fn_801286F0(void);
extern void fn_80128818(void);
extern void fn_80128930(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8016E970(void);
extern void fn_801718F8(void);
extern void fn_80370174(void);
extern void fn_803C17FC(void);
extern void fn_803C1840(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077C124[];
extern u8 lbl_8077C130[];
extern u8 lbl_8077C13C[];
extern u8 lbl_8077C148[];
extern u8 lbl_8077C154[];
extern u8 lbl_8077C160[];
extern u8 lbl_8077C16C[];
extern u8 lbl_8077C178[];
extern u8 lbl_807C7B28[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881978;
extern u32 lbl_808819B0;
extern u32 lbl_808819DC;

/* Function declarations */
void fn_8016F368(void);
void fn_8016F3D0(void);
void fn_8016F4D8(void);
void fn_8016F530(void);
void fn_8016F5EC(void);
void fn_8016F634(void);
void fn_8016F67C(void);
void fn_8016F824(void);
void fn_8016FDCC(void);
void fn_8017039C(void);
void fn_80170A20(void);

asm void fn_8016F368(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    li r3, 0x1
    li r5, 0x1
    cmpw r6, r4
    beq lbl_fn_8016F368_00000038
    cmpwi r6, 0x0
    li r0, 0x0
    bne lbl_fn_8016F368_0000002C
    cmpwi r4, 0x3
    bne lbl_fn_8016F368_0000002C
    li r0, 0x1
lbl_fn_8016F368_0000002C:
    cmpwi r0, 0x0
    bne lbl_fn_8016F368_00000038
    li r5, 0x0
lbl_fn_8016F368_00000038:
    cmpwi r5, 0x0
    bnelr
    cmpwi r6, 0x3
    li r0, 0x0
    bne lbl_fn_8016F368_00000058
    cmpwi r4, 0x0
    bne lbl_fn_8016F368_00000058
    li r0, 0x1
lbl_fn_8016F368_00000058:
    cmpwi r0, 0x0
    bnelr
    li r3, 0x0
    blr
}

asm void fn_8016F3D0(void)
{
    nofralloc
    cmpwi r5, 0x0
    beq lbl_fn_8016F3D0_000000D0
    cmplw r3, r4
    beq lbl_fn_8016F3D0_000000D0
    lwz r6, lbl_8087F610
    cmpwi r6, 0x0
    beq lbl_fn_8016F3D0_00000098
    lwz r0, 0x540(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8016F3D0_00000098
    li r3, 0x0
    blr
lbl_fn_8016F3D0_00000098:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8016F3D0_000000C8
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8016F3D0_000000C8
    lwz r6, lbl_8087F0A8
    lwz r0, 0xcc(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8016F3D0_000000D0
lbl_fn_8016F3D0_000000C8:
    li r3, 0x0
    blr
lbl_fn_8016F3D0_000000D0:
    cmpwi r5, 0x0
    beq lbl_fn_8016F3D0_00000100
    lwz r5, 0xf14(r3)
    cmpwi r5, 0x0
    blt lbl_fn_8016F3D0_00000100
    lwz r0, 0xf14(r4)
    cmpwi r0, 0x0
    blt lbl_fn_8016F3D0_00000100
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_8016F3D0_00000100:
    lwz r6, 0x48(r3)
    li r5, 0x1
    lwz r4, 0x48(r4)
    li r3, 0x1
    cmpw r6, r4
    beq lbl_fn_8016F3D0_0000013C
    cmpwi r6, 0x0
    li r0, 0x0
    bne lbl_fn_8016F3D0_00000130
    cmpwi r4, 0x3
    bne lbl_fn_8016F3D0_00000130
    li r0, 0x1
lbl_fn_8016F3D0_00000130:
    cmpwi r0, 0x0
    bne lbl_fn_8016F3D0_0000013C
    li r3, 0x0
lbl_fn_8016F3D0_0000013C:
    cmpwi r3, 0x0
    bne lbl_fn_8016F3D0_00000168
    cmpwi r6, 0x3
    li r0, 0x0
    bne lbl_fn_8016F3D0_0000015C
    cmpwi r4, 0x0
    bne lbl_fn_8016F3D0_0000015C
    li r0, 0x1
lbl_fn_8016F3D0_0000015C:
    cmpwi r0, 0x0
    bne lbl_fn_8016F3D0_00000168
    li r5, 0x0
lbl_fn_8016F3D0_00000168:
    mr r3, r5
    blr
}

asm void fn_8016F4D8(void)
{
    nofralloc
    lwz r0, 0x12a8(r3)
    li r7, 0x0
    lwz r6, 0x1028(r3)
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r5, r0, 5
    b lbl_fn_8016F4D8_000001A8
lbl_fn_8016F4D8_0000018C:
    lwz r0, 0xfe8(r3)
    cmplw r0, r4
    bne lbl_fn_8016F4D8_000001A0
    li r3, 0x1
    blr
lbl_fn_8016F4D8_000001A0:
    addi r3, r3, 0x4
    addi r7, r7, 0x1
lbl_fn_8016F4D8_000001A8:
    cmpwi r5, 0x0
    mr r0, r6
    bne lbl_fn_8016F4D8_000001B8
    slwi r0, r6, 1
lbl_fn_8016F4D8_000001B8:
    cmpw r7, r0
    blt lbl_fn_8016F4D8_0000018C
    li r3, 0x0
    blr
}

asm void fn_8016F530(void)
{
    nofralloc
    lwz r0, 0x12a8(r3)
    mr r6, r3
    lwz r7, 0x1028(r3)
    li r5, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r8, r0, 5
    b lbl_fn_8016F530_00000204
lbl_fn_8016F530_000001E8:
    lwz r0, 0xfe8(r6)
    cmplw r0, r4
    bne lbl_fn_8016F530_000001FC
    li r0, 0x1
    b lbl_fn_8016F530_00000220
lbl_fn_8016F530_000001FC:
    addi r6, r6, 0x4
    addi r5, r5, 0x1
lbl_fn_8016F530_00000204:
    cmpwi r8, 0x0
    mr r0, r7
    bne lbl_fn_8016F530_00000214
    slwi r0, r7, 1
lbl_fn_8016F530_00000214:
    cmpw r5, r0
    blt lbl_fn_8016F530_000001E8
    li r0, 0x0
lbl_fn_8016F530_00000220:
    cmpwi r0, 0x0
    beq lbl_fn_8016F530_00000230
    li r3, 0x1
    blr
lbl_fn_8016F530_00000230:
    mr r5, r3
    li r6, 0x0
    b lbl_fn_8016F530_00000264
lbl_fn_8016F530_0000023C:
    lwz r0, 0xfe8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8016F530_0000025C
    slwi r0, r6, 2
    add r5, r3, r0
    li r3, 0x1
    stw r4, 0xfe8(r5)
    blr
lbl_fn_8016F530_0000025C:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
lbl_fn_8016F530_00000264:
    cmpwi r8, 0x0
    mr r0, r7
    bne lbl_fn_8016F530_00000274
    slwi r0, r7, 1
lbl_fn_8016F530_00000274:
    cmpw r6, r0
    blt lbl_fn_8016F530_0000023C
    li r3, 0x0
    blr
}

asm void fn_8016F5EC(void)
{
    nofralloc
    li r0, 0x10
    mr r5, r3
    li r6, 0x0
    mtctr r0
lbl_fn_8016F5EC_00000294:
    lwz r0, 0xfe8(r5)
    cmplw r0, r4
    bne lbl_fn_8016F5EC_000002B8
    slwi r0, r6, 2
    li r5, 0x0
    add r4, r3, r0
    li r3, 0x1
    stw r5, 0xfe8(r4)
    blr
lbl_fn_8016F5EC_000002B8:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_8016F5EC_00000294
    li r3, 0x0
    blr
}

asm void fn_8016F634(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0xfe8(r3)
    stw r0, 0xfec(r3)
    stw r0, 0xff0(r3)
    stw r0, 0xff4(r3)
    stw r0, 0xff8(r3)
    stw r0, 0xffc(r3)
    stw r0, 0x1000(r3)
    stw r0, 0x1004(r3)
    stw r0, 0x1008(r3)
    stw r0, 0x100c(r3)
    stw r0, 0x1010(r3)
    stw r0, 0x1014(r3)
    stw r0, 0x1018(r3)
    stw r0, 0x101c(r3)
    stw r0, 0x1020(r3)
    stw r0, 0x1024(r3)
    blr
}

asm void fn_8016F67C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f3, lbl_8088196C
    li r4, 0x79
    stw r0, 0x84(r1)
    lfs f0, lbl_80881964
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x48
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f3, lbl_808819B0
    addi r31, r1, 0x20
    lfs f0, 0x620(r30)
    mr r5, r31
    lfs f5, 0x2c(r1)
    addi r4, r1, 0x38
    fadds f6, f3, f0
    lfs f4, 0x30(r1)
    lfs f3, 0x34(r1)
    addi r6, r1, 0x14
    lfs f0, lbl_80881978
    lis r7, 0x8000
    fmuls f7, f5, f6
    lwz r3, lbl_8087EE98
    fmuls f4, f4, f6
    li r8, 0x0
    fmuls f6, f3, f6
    stfs f7, 0x2c(r1)
    stfs f4, 0x30(r1)
    li r9, 0x0
    stfs f6, 0x34(r1)
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r31), 0, 0
    lfs f3, 0x52c(r30)
    lfs f5, 0x530(r30)
    fadds f8, f3, f4
    lfs f4, 0x528(r30)
    lfs f3, 0x24(r1)
    fadds f5, f5, f6
    fadds f4, f4, f7
    fadds f3, f3, f0
    fadds f0, f8, f0
    stfs f4, 0x14(r1)
    stfs f5, 0x1c(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x18(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_8016F67C_000004A0
    psq_l f1, 0x528(r30), 0, 0
    addi r3, r1, 0x8
    lfs f2, 0x530(r30)
    addi r6, r1, 0x14
    stfs f2, 0x28(r1)
    mr r5, r31
    lfs f4, 0x30(r1)
    addi r4, r1, 0x38
    psq_st f1, 0x0(r31), 0, 0
    lis r7, 0x8000
    lfs f0, 0x2c(r1)
    li r8, 0x0
    lfs f5, 0x52c(r30)
    li r9, 0x0
    lfs f3, 0x528(r30)
    fadds f5, f5, f4
    lfs f4, 0x530(r30)
    fadds f3, f3, f0
    lfs f0, 0x34(r1)
    stfs f5, 0xc(r1)
    fadds f2, f4, f0
    stfs f3, 0x8(r1)
    lfs f3, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f4, lbl_808819DC
    lfs f0, 0x18(r1)
    fadds f3, f3, f4
    stfs f2, 0x10(r1)
    fadds f0, f0, f4
    lwz r3, lbl_8087EE98
    stfs f2, 0x1c(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x18(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_8016F67C_000004A0
    li r3, 0x1
    b lbl_fn_8016F67C_000004A4
lbl_fn_8016F67C_000004A0:
    li r3, 0x0
lbl_fn_8016F67C_000004A4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8016F824(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stw r31, 0x16c(r1)
    mr r31, r4
    stw r30, 0x168(r1)
    mr r30, r3
    stw r29, 0x164(r1)
    stw r28, 0x160(r1)
    mr r28, r5
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    beq lbl_fn_8016F824_000004F8
    lwz r3, 0x10d8(r6)
    b lbl_fn_8016F824_000004FC
lbl_fn_8016F824_000004F8:
    li r3, 0x0
lbl_fn_8016F824_000004FC:
    cmpwi r3, 0x0
    beq lbl_fn_8016F824_00000A44
    cmpwi r4, 0x0
    ble lbl_fn_8016F824_000009C4
    mr r4, r31
    bl fn_803C17FC
    mr r4, r3
    mr r6, r28
    addi r3, r30, 0x1030
    addi r5, r30, 0x528
    bl fn_80128508
    addi r3, r30, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_8016F824_000009C4
    addi r3, r30, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8016F824_0000068C
    lwz r0, 0x12a4(r30)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8016F824_000005B4
    lwz r3, 0xc38(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8016F824_000005B4
    lwz r0, 0xc3c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8016F824_000005B4
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r30)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8016F824_000005B4:
    lwz r4, 0x48(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8016F824_000005E8
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016F824_000005E8
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8016F824_000005E8
    li r0, 0x1
    b lbl_fn_8016F824_00000608
lbl_fn_8016F824_000005E8:
    cmpwi r4, 0x0
    bne lbl_fn_8016F824_00000604
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8016F824_00000604
    li r0, 0x1
    b lbl_fn_8016F824_00000608
lbl_fn_8016F824_00000604:
    li r0, 0x0
lbl_fn_8016F824_00000608:
    cmpwi r0, 0x0
    beq lbl_fn_8016F824_0000068C
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8016F824_0000066C
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016F824_00000638
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016F824_00000638:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016F824_0000064C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016F824_0000064C:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r30)
    mr r3, r30
    stw r0, 0x648(r30)
    stw r0, 0x64c(r30)
    bl fn_8014C228
    b lbl_fn_8016F824_0000068C
lbl_fn_8016F824_0000066C:
    lwz r0, 0x674(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8016F824_0000068C
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8016F824_0000068C:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8016F824_000006A4
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r30)
lbl_fn_8016F824_000006A4:
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_8016F824_0000074C
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8016F824_000006EC
lbl_fn_8016F824_000006D0:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_8016F824_000006E4
    li r0, 0x1
    b lbl_fn_8016F824_00000708
lbl_fn_8016F824_000006E4:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8016F824_000006EC:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8016F824_000006FC
    slwi r0, r6, 1
lbl_fn_8016F824_000006FC:
    cmpw r4, r0
    blt lbl_fn_8016F824_000006D0
    li r0, 0x0
lbl_fn_8016F824_00000708:
    cmpwi r0, 0x0
    beq lbl_fn_8016F824_0000074C
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8016F824_00000720:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_8016F824_00000740
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8016F824_0000074C
lbl_fn_8016F824_00000740:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8016F824_00000720
lbl_fn_8016F824_0000074C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8016F824_0000076C
    mr r4, r30
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80105B3C
lbl_fn_8016F824_0000076C:
    lwz r0, 0x12a8(r30)
    addi r3, r30, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r30)
    stfs f0, 0xfb8(r30)
    stfs f0, 0xfbc(r30)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r30
    bl fn_80017064
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x7
    beq lbl_fn_8016F824_00000958
    cmpwi r0, 0x6
    beq lbl_fn_8016F824_000007BC
    cmpwi r0, 0x8
    beq lbl_fn_8016F824_000007BC
    stw r0, 0x564(r30)
lbl_fn_8016F824_000007BC:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016F824_00000958
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8016F824_000007F4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x140(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x144(r1)
    stw r0, 0x148(r1)
    b lbl_fn_8016F824_00000810
lbl_fn_8016F824_000007F4:
    lis r5, lbl_8077C124@ha
    lwzu r4, lbl_8077C124@l(r5)
    stw r4, 0x140(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x144(r1)
    stw r0, 0x148(r1)
lbl_fn_8016F824_00000810:
    lwz r5, 0x140(r1)
    addi r3, r1, 0x14
    lwz r4, 0x144(r1)
    lwz r0, 0x148(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016F824_0000084C
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016F824_0000084C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8016F824_00000928
    cmpwi r0, 0x8
    beq lbl_fn_8016F824_00000864
    stw r0, 0x564(r30)
lbl_fn_8016F824_00000864:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016F824_00000928
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8016F824_0000089C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x150(r1)
    stw r0, 0x154(r1)
    b lbl_fn_8016F824_000008B8
lbl_fn_8016F824_0000089C:
    lis r5, lbl_8077C130@ha
    lwzu r4, lbl_8077C130@l(r5)
    stw r4, 0x14c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x150(r1)
    stw r0, 0x154(r1)
lbl_fn_8016F824_000008B8:
    lwz r5, 0x14c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016F824_000008F4
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016F824_000008F4:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8016F824_00000928
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016F824_00000928:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8016F824_00000958
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016F824_00000958:
    lwz r3, 0x1208(r30)
    li r0, 0x7
    stw r0, 0x55c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016F824_00000A44
    beq lbl_fn_8016F824_00000A44
    lfs f0, lbl_8088196C
    li r28, 0x0
    li r0, 0x3
    stw r28, 0x24(r1)
    addi r4, r1, 0x20
    stw r28, 0x28(r1)
    stw r28, 0x2c(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r0, 0x20(r1)
    stw r30, 0x30(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r30)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r28, 0x1208(r30)
    b lbl_fn_8016F824_00000A44
lbl_fn_8016F824_000009C4:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8016F824_00000A44
    lis r3, 0x51ec
    lwz r8, 0x50(r30)
    subi r0, r3, 0x7ae1
    lis r28, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r29, lbl_80737A9C@ha
    addi r3, r28, lbl_807C7B28@l
    addi r4, r29, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    addi r4, r29, lbl_80737A9C@l
    lwz r5, 0x58(r30)
    mr r7, r31
    addi r3, r1, 0x40
    addi r4, r4, 0x501
    addi r6, r28, lbl_807C7B28@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x40
    bl fn_800697D8
lbl_fn_8016F824_00000A44:
    lwz r0, 0x174(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    lwz r29, 0x164(r1)
    lwz r28, 0x160(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8016FDCC(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stw r31, 0x16c(r1)
    mr r31, r4
    stw r30, 0x168(r1)
    mr r30, r3
    stw r29, 0x164(r1)
    stw r28, 0x160(r1)
    mr r28, r5
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    beq lbl_fn_8016FDCC_00000AA0
    lwz r3, 0x10d8(r6)
    b lbl_fn_8016FDCC_00000AA4
lbl_fn_8016FDCC_00000AA0:
    li r3, 0x0
lbl_fn_8016FDCC_00000AA4:
    cmpwi r3, 0x0
    beq lbl_fn_8016FDCC_00001014
    cmpwi r4, 0x0
    ble lbl_fn_8016FDCC_00000F94
    mr r4, r31
    bl fn_803C1840
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8016FDCC_00000AE4
    lwz r0, 0xc38(r30)
    cmpw r0, r3
    beq lbl_fn_8016FDCC_00001014
    lwz r0, 0xc3c(r30)
    cmpw r0, r3
    bne lbl_fn_8016FDCC_00000AE4
    b lbl_fn_8016FDCC_00001014
lbl_fn_8016FDCC_00000AE4:
    mr r4, r3
    mr r6, r28
    addi r3, r30, 0x1030
    addi r5, r30, 0x528
    bl fn_801286F0
    addi r3, r30, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_8016FDCC_00000F94
    addi r3, r30, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8016FDCC_00000C5C
    lwz r0, 0x12a4(r30)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8016FDCC_00000B84
    lwz r3, 0xc38(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8016FDCC_00000B84
    lwz r0, 0xc3c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8016FDCC_00000B84
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r30)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8016FDCC_00000B84:
    lwz r4, 0x48(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8016FDCC_00000BB8
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016FDCC_00000BB8
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8016FDCC_00000BB8
    li r0, 0x1
    b lbl_fn_8016FDCC_00000BD8
lbl_fn_8016FDCC_00000BB8:
    cmpwi r4, 0x0
    bne lbl_fn_8016FDCC_00000BD4
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8016FDCC_00000BD4
    li r0, 0x1
    b lbl_fn_8016FDCC_00000BD8
lbl_fn_8016FDCC_00000BD4:
    li r0, 0x0
lbl_fn_8016FDCC_00000BD8:
    cmpwi r0, 0x0
    beq lbl_fn_8016FDCC_00000C5C
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8016FDCC_00000C3C
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016FDCC_00000C08
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016FDCC_00000C08:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016FDCC_00000C1C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016FDCC_00000C1C:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r30)
    mr r3, r30
    stw r0, 0x648(r30)
    stw r0, 0x64c(r30)
    bl fn_8014C228
    b lbl_fn_8016FDCC_00000C5C
lbl_fn_8016FDCC_00000C3C:
    lwz r0, 0x674(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8016FDCC_00000C5C
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8016FDCC_00000C5C:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8016FDCC_00000C74
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r30)
lbl_fn_8016FDCC_00000C74:
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_8016FDCC_00000D1C
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8016FDCC_00000CBC
lbl_fn_8016FDCC_00000CA0:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_8016FDCC_00000CB4
    li r0, 0x1
    b lbl_fn_8016FDCC_00000CD8
lbl_fn_8016FDCC_00000CB4:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8016FDCC_00000CBC:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8016FDCC_00000CCC
    slwi r0, r6, 1
lbl_fn_8016FDCC_00000CCC:
    cmpw r4, r0
    blt lbl_fn_8016FDCC_00000CA0
    li r0, 0x0
lbl_fn_8016FDCC_00000CD8:
    cmpwi r0, 0x0
    beq lbl_fn_8016FDCC_00000D1C
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8016FDCC_00000CF0:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_8016FDCC_00000D10
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8016FDCC_00000D1C
lbl_fn_8016FDCC_00000D10:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8016FDCC_00000CF0
lbl_fn_8016FDCC_00000D1C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8016FDCC_00000D3C
    mr r4, r30
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80105B3C
lbl_fn_8016FDCC_00000D3C:
    lwz r0, 0x12a8(r30)
    addi r3, r30, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r30)
    stfs f0, 0xfb8(r30)
    stfs f0, 0xfbc(r30)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r30
    bl fn_80017064
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x7
    beq lbl_fn_8016FDCC_00000F28
    cmpwi r0, 0x6
    beq lbl_fn_8016FDCC_00000D8C
    cmpwi r0, 0x8
    beq lbl_fn_8016FDCC_00000D8C
    stw r0, 0x564(r30)
lbl_fn_8016FDCC_00000D8C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016FDCC_00000F28
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8016FDCC_00000DC4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x140(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x144(r1)
    stw r0, 0x148(r1)
    b lbl_fn_8016FDCC_00000DE0
lbl_fn_8016FDCC_00000DC4:
    lis r5, lbl_8077C13C@ha
    lwzu r4, lbl_8077C13C@l(r5)
    stw r4, 0x140(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x144(r1)
    stw r0, 0x148(r1)
lbl_fn_8016FDCC_00000DE0:
    lwz r5, 0x140(r1)
    addi r3, r1, 0x14
    lwz r4, 0x144(r1)
    lwz r0, 0x148(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016FDCC_00000E1C
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016FDCC_00000E1C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8016FDCC_00000EF8
    cmpwi r0, 0x8
    beq lbl_fn_8016FDCC_00000E34
    stw r0, 0x564(r30)
lbl_fn_8016FDCC_00000E34:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016FDCC_00000EF8
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8016FDCC_00000E6C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x150(r1)
    stw r0, 0x154(r1)
    b lbl_fn_8016FDCC_00000E88
lbl_fn_8016FDCC_00000E6C:
    lis r5, lbl_8077C148@ha
    lwzu r4, lbl_8077C148@l(r5)
    stw r4, 0x14c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x150(r1)
    stw r0, 0x154(r1)
lbl_fn_8016FDCC_00000E88:
    lwz r5, 0x14c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016FDCC_00000EC4
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016FDCC_00000EC4:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8016FDCC_00000EF8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016FDCC_00000EF8:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8016FDCC_00000F28
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016FDCC_00000F28:
    lwz r3, 0x1208(r30)
    li r0, 0x7
    stw r0, 0x55c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016FDCC_00001014
    beq lbl_fn_8016FDCC_00001014
    lfs f0, lbl_8088196C
    li r28, 0x0
    li r0, 0x3
    stw r28, 0x24(r1)
    addi r4, r1, 0x20
    stw r28, 0x28(r1)
    stw r28, 0x2c(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r0, 0x20(r1)
    stw r30, 0x30(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r30)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r28, 0x1208(r30)
    b lbl_fn_8016FDCC_00001014
lbl_fn_8016FDCC_00000F94:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8016FDCC_00001014
    lis r3, 0x51ec
    lwz r8, 0x50(r30)
    subi r0, r3, 0x7ae1
    lis r28, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r29, lbl_80737A9C@ha
    addi r3, r28, lbl_807C7B28@l
    addi r4, r29, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    addi r4, r29, lbl_80737A9C@l
    lwz r5, 0x58(r30)
    mr r7, r31
    addi r3, r1, 0x40
    addi r4, r4, 0x539
    addi r6, r28, lbl_807C7B28@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x40
    bl fn_800697D8
lbl_fn_8016FDCC_00001014:
    lwz r0, 0x174(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    lwz r29, 0x164(r1)
    lwz r28, 0x160(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8017039C(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    addi r11, r1, 0x270
    bl _savegpr_27
    lwz r27, 0x13fc(r3)
    mr r30, r3
    mr r31, r4
    mr r6, r5
    cmpwi r27, 0x0
    beq lbl_fn_8017039C_0000114C
    lwz r3, 0x13fc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_00001074
    bl fn_8017039C
    b lbl_fn_8017039C_000016A0
lbl_fn_8017039C_00001074:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_00001088
    lwz r0, 0x10d8(r3)
    b lbl_fn_8017039C_0000108C
lbl_fn_8017039C_00001088:
    li r0, 0x0
lbl_fn_8017039C_0000108C:
    cmpwi r0, 0x0
    beq lbl_fn_8017039C_000016A0
    cmpwi r4, 0x0
    ble lbl_fn_8017039C_000010C8
    mr r4, r31
    addi r3, r27, 0x1030
    addi r5, r27, 0x528
    bl fn_80128818
    addi r3, r27, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_000010C8
    mr r3, r27
    bl fn_801718F8
    b lbl_fn_8017039C_000016A0
lbl_fn_8017039C_000010C8:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8017039C_000016A0
    lis r3, 0x51ec
    lwz r8, 0x50(r27)
    subi r0, r3, 0x7ae1
    lis r29, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r28, lbl_80737A9C@ha
    addi r3, r29, lbl_807C7B28@l
    addi r4, r28, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    addi r4, r28, lbl_80737A9C@l
    lwz r5, 0x58(r27)
    mr r7, r31
    addi r3, r1, 0x40
    addi r4, r4, 0x571
    addi r6, r29, lbl_807C7B28@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x40
    bl fn_800697D8
    b lbl_fn_8017039C_000016A0
lbl_fn_8017039C_0000114C:
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_8017039C_00001160
    lwz r0, 0x10d8(r5)
    b lbl_fn_8017039C_00001164
lbl_fn_8017039C_00001160:
    li r0, 0x0
lbl_fn_8017039C_00001164:
    cmpwi r0, 0x0
    beq lbl_fn_8017039C_000016A0
    cmpwi r4, 0x0
    ble lbl_fn_8017039C_00001620
    addi r5, r3, 0x528
    mr r4, r31
    addi r3, r3, 0x1030
    bl fn_80128818
    addi r3, r30, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_00001620
    addi r3, r30, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8017039C_000012E8
    lwz r0, 0x12a4(r30)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8017039C_00001210
    lwz r3, 0xc38(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8017039C_00001210
    lwz r0, 0xc3c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8017039C_00001210
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r30)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8017039C_00001210:
    lwz r4, 0x48(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8017039C_00001244
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8017039C_00001244
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8017039C_00001244
    li r0, 0x1
    b lbl_fn_8017039C_00001264
lbl_fn_8017039C_00001244:
    cmpwi r4, 0x0
    bne lbl_fn_8017039C_00001260
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8017039C_00001260
    li r0, 0x1
    b lbl_fn_8017039C_00001264
lbl_fn_8017039C_00001260:
    li r0, 0x0
lbl_fn_8017039C_00001264:
    cmpwi r0, 0x0
    beq lbl_fn_8017039C_000012E8
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8017039C_000012C8
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_00001294
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8017039C_00001294:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_000012A8
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8017039C_000012A8:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r30)
    mr r3, r30
    stw r0, 0x648(r30)
    stw r0, 0x64c(r30)
    bl fn_8014C228
    b lbl_fn_8017039C_000012E8
lbl_fn_8017039C_000012C8:
    lwz r0, 0x674(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8017039C_000012E8
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8017039C_000012E8:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8017039C_00001300
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r30)
lbl_fn_8017039C_00001300:
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_8017039C_000013A8
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8017039C_00001348
lbl_fn_8017039C_0000132C:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_8017039C_00001340
    li r0, 0x1
    b lbl_fn_8017039C_00001364
lbl_fn_8017039C_00001340:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8017039C_00001348:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8017039C_00001358
    slwi r0, r6, 1
lbl_fn_8017039C_00001358:
    cmpw r4, r0
    blt lbl_fn_8017039C_0000132C
    li r0, 0x0
lbl_fn_8017039C_00001364:
    cmpwi r0, 0x0
    beq lbl_fn_8017039C_000013A8
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8017039C_0000137C:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_8017039C_0000139C
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8017039C_000013A8
lbl_fn_8017039C_0000139C:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8017039C_0000137C
lbl_fn_8017039C_000013A8:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_000013C8
    mr r4, r30
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80105B3C
lbl_fn_8017039C_000013C8:
    lwz r0, 0x12a8(r30)
    addi r3, r30, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r30)
    stfs f0, 0xfb8(r30)
    stfs f0, 0xfbc(r30)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r30
    bl fn_80017064
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x7
    beq lbl_fn_8017039C_000015B4
    cmpwi r0, 0x6
    beq lbl_fn_8017039C_00001418
    cmpwi r0, 0x8
    beq lbl_fn_8017039C_00001418
    stw r0, 0x564(r30)
lbl_fn_8017039C_00001418:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8017039C_000015B4
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8017039C_00001450
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x240(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x244(r1)
    stw r0, 0x248(r1)
    b lbl_fn_8017039C_0000146C
lbl_fn_8017039C_00001450:
    lis r5, lbl_8077C154@ha
    lwzu r4, lbl_8077C154@l(r5)
    stw r4, 0x240(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x244(r1)
    stw r0, 0x248(r1)
lbl_fn_8017039C_0000146C:
    lwz r5, 0x240(r1)
    addi r3, r1, 0x14
    lwz r4, 0x244(r1)
    lwz r0, 0x248(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_000014A8
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017039C_000014A8:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8017039C_00001584
    cmpwi r0, 0x8
    beq lbl_fn_8017039C_000014C0
    stw r0, 0x564(r30)
lbl_fn_8017039C_000014C0:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8017039C_00001584
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8017039C_000014F8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x24c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x250(r1)
    stw r0, 0x254(r1)
    b lbl_fn_8017039C_00001514
lbl_fn_8017039C_000014F8:
    lis r5, lbl_8077C160@ha
    lwzu r4, lbl_8077C160@l(r5)
    stw r4, 0x24c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x250(r1)
    stw r0, 0x254(r1)
lbl_fn_8017039C_00001514:
    lwz r5, 0x24c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x250(r1)
    lwz r0, 0x254(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_00001550
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8017039C_00001550:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8017039C_00001584
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017039C_00001584:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8017039C_000015B4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8017039C_000015B4:
    lwz r3, 0x1208(r30)
    li r0, 0x7
    stw r0, 0x55c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8017039C_000016A0
    beq lbl_fn_8017039C_000016A0
    lfs f0, lbl_8088196C
    li r28, 0x0
    li r0, 0x3
    stw r28, 0x24(r1)
    addi r4, r1, 0x20
    stw r28, 0x28(r1)
    stw r28, 0x2c(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r0, 0x20(r1)
    stw r30, 0x30(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r30)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r28, 0x1208(r30)
    b lbl_fn_8017039C_000016A0
lbl_fn_8017039C_00001620:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_8017039C_000016A0
    lis r3, 0x51ec
    lwz r8, 0x50(r30)
    subi r0, r3, 0x7ae1
    lis r28, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r29, lbl_80737A9C@ha
    addi r3, r28, lbl_807C7B28@l
    addi r4, r29, lbl_80737A9C@l
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r7
    subf r6, r0, r8
    crclr 6
    bl sprintf
    addi r4, r29, lbl_80737A9C@l
    lwz r5, 0x58(r30)
    mr r7, r31
    addi r3, r1, 0x140
    addi r4, r4, 0x571
    addi r6, r28, lbl_807C7B28@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x140
    bl fn_800697D8
lbl_fn_8017039C_000016A0:
    addi r11, r1, 0x270
    bl _restgpr_27
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_80170A20(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    mr r6, r5
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    fmr f31, f1
    stw r31, 0x5c(r1)
    mr r31, r3
    addi r3, r3, 0x1030
    stw r30, 0x58(r1)
    addi r5, r31, 0x528
    bl fn_80128930
    lfs f0, lbl_80881964
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_80170A20_00001700
    stfs f31, 0x1058(r31)
lbl_fn_80170A20_00001700:
    addi r3, r31, 0x1030
    bl fn_801255C8
    cmpwi r3, 0x0
    beq lbl_fn_80170A20_00001B98
    addi r3, r31, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80170A20_00001864
    lwz r0, 0x12a4(r31)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80170A20_0000178C
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80170A20_0000178C
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80170A20_0000178C
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r31)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_80170A20_0000178C:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80170A20_000017C0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80170A20_000017C0
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80170A20_000017C0
    li r0, 0x1
    b lbl_fn_80170A20_000017E0
lbl_fn_80170A20_000017C0:
    cmpwi r4, 0x0
    bne lbl_fn_80170A20_000017DC
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80170A20_000017DC
    li r0, 0x1
    b lbl_fn_80170A20_000017E0
lbl_fn_80170A20_000017DC:
    li r0, 0x0
lbl_fn_80170A20_000017E0:
    cmpwi r0, 0x0
    beq lbl_fn_80170A20_00001864
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80170A20_00001844
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80170A20_00001810
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80170A20_00001810:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80170A20_00001824
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80170A20_00001824:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80170A20_00001864
lbl_fn_80170A20_00001844:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80170A20_00001864
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80170A20_00001864:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80170A20_0000187C
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_80170A20_0000187C:
    lwz r7, 0xd1c(r31)
    cmpwi r7, 0x0
    beq lbl_fn_80170A20_00001924
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80170A20_000018C4
lbl_fn_80170A20_000018A8:
    lwz r0, 0xfe8(r5)
    cmplw r0, r31
    bne lbl_fn_80170A20_000018BC
    li r0, 0x1
    b lbl_fn_80170A20_000018E0
lbl_fn_80170A20_000018BC:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80170A20_000018C4:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_80170A20_000018D4
    slwi r0, r6, 1
lbl_fn_80170A20_000018D4:
    cmpw r4, r0
    blt lbl_fn_80170A20_000018A8
    li r0, 0x0
lbl_fn_80170A20_000018E0:
    cmpwi r0, 0x0
    beq lbl_fn_80170A20_00001924
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_80170A20_000018F8:
    lwz r0, 0xfe8(r4)
    cmplw r0, r31
    bne lbl_fn_80170A20_00001918
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_80170A20_00001924
lbl_fn_80170A20_00001918:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80170A20_000018F8
lbl_fn_80170A20_00001924:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80170A20_00001944
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_80170A20_00001944:
    lwz r0, 0x12a8(r31)
    addi r3, r31, 0xc58
    lfs f0, lbl_8088196C
    li r4, 0x0
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    bl fn_8011C044
    lwz r3, lbl_8087EE68
    mr r4, r31
    bl fn_80017064
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_80170A20_00001B30
    cmpwi r0, 0x6
    beq lbl_fn_80170A20_00001994
    cmpwi r0, 0x8
    beq lbl_fn_80170A20_00001994
    stw r0, 0x564(r31)
lbl_fn_80170A20_00001994:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80170A20_00001B30
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80170A20_000019CC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    b lbl_fn_80170A20_000019E8
lbl_fn_80170A20_000019CC:
    lis r5, lbl_8077C16C@ha
    lwzu r4, lbl_8077C16C@l(r5)
    stw r4, 0x40(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
lbl_fn_80170A20_000019E8:
    lwz r5, 0x40(r1)
    addi r3, r1, 0x14
    lwz r4, 0x44(r1)
    lwz r0, 0x48(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80170A20_00001A24
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80170A20_00001A24:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80170A20_00001B00
    cmpwi r0, 0x8
    beq lbl_fn_80170A20_00001A3C
    stw r0, 0x564(r31)
lbl_fn_80170A20_00001A3C:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80170A20_00001B00
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80170A20_00001A74
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    b lbl_fn_80170A20_00001A90
lbl_fn_80170A20_00001A74:
    lis r5, lbl_8077C178@ha
    lwzu r4, lbl_8077C178@l(r5)
    stw r4, 0x4c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
lbl_fn_80170A20_00001A90:
    lwz r5, 0x4c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80170A20_00001ACC
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80170A20_00001ACC:
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r31)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_80170A20_00001B00
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80170A20_00001B00:
    lwz r3, 0xf80(r31)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r31)
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_80170A20_00001B30
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80170A20_00001B30:
    lwz r3, 0x1208(r31)
    li r0, 0x7
    stw r0, 0x55c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80170A20_00001B98
    beq lbl_fn_80170A20_00001B98
    lfs f0, lbl_8088196C
    li r30, 0x0
    li r0, 0x3
    stw r30, 0x24(r1)
    addi r4, r1, 0x20
    stw r30, 0x28(r1)
    stw r30, 0x2c(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stw r0, 0x20(r1)
    stw r31, 0x30(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r31)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r30, 0x1208(r31)
lbl_fn_80170A20_00001B98:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
