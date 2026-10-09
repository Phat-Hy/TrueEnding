#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_800697D8(void);
extern void fn_8008B978(void);
extern void fn_80092814(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_8013310C(void);
extern void fn_8013322C(void);
extern void fn_80161570(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170F20(void);
extern void fn_80171DB0(void);
extern void fn_8021ECD0(void);
extern void fn_8035E858(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370B78(void);
extern void fn_80370BD0(void);
extern void fn_803712BC(void);
extern void fn_80373148(void);
extern void fn_8037D4C0(void);
extern void fn_803935AC(void);
extern void fn_803CC6D0(void);
extern void fn_803E5E64(void);
extern void fn_803EEE10(void);
extern void fn_80444020(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8074ED24[];
extern u8 lbl_8074EF78[];
extern u8 lbl_8074F020[];
extern u8 lbl_8074F088[];
extern u8 lbl_8074F5E8[];
extern u8 lbl_8074F8CC[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B30;
extern u32 lbl_80885B34;
extern u32 lbl_80885B3C;
extern u32 lbl_80885B74;
extern u32 lbl_80885B9C;
extern u32 lbl_80885BA0;
extern u32 lbl_80885BB8;
extern u32 lbl_80885BD0;
extern u32 lbl_80885BD4;
extern u32 lbl_80885BD8;
extern u32 lbl_80885BDC;
extern u32 lbl_80885BE0;

/* Function declarations */
void fn_803A90E8(void);
void fn_803A9138(void);
void fn_803A914C(void);
void fn_803A9558(void);
void fn_803A956C(void);
void fn_803A98C4(void);
void fn_803A98EC(void);
void fn_803A9C40(void);
void fn_803A9DBC(void);
void fn_803AA5E4(void);
void fn_803AA82C(void);
void fn_803AA954(void);

asm void fn_803A90E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r3, lbl_8087F430
    bl fn_803712BC
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    lwz r3, 0x48(r3)
    bl fn_8016E970
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A9138(void)
{
    nofralloc
    li r6, 0x0
    li r0, 0x3c
    stw r6, 0xb8(r3)
    stw r0, 0xc0(r3)
    b fn_803A914C
}

asm void fn_803A914C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r6, lbl_8087F8A0
    mr r28, r3
    mr r29, r4
    mr r30, r5
    cmpwi r6, 0x0
    beq lbl_fn_803A914C_00000098
    lwz r27, 0x48(r6)
    b lbl_fn_803A914C_0000009C
lbl_fn_803A914C_00000098:
    li r27, 0x0
lbl_fn_803A914C_0000009C:
    lwz r0, 0xb8(r3)
    li r31, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803A914C_000000D0
    cmpwi r0, 0x1
    beq lbl_fn_803A914C_00000140
    cmpwi r0, 0x2
    beq lbl_fn_803A914C_00000198
    cmpwi r0, 0x3
    beq lbl_fn_803A914C_00000228
    cmpwi r0, 0x4
    beq lbl_fn_803A914C_000003CC
    b lbl_fn_803A914C_00000438
lbl_fn_803A914C_000000D0:
    lwz r0, 0x10(r5)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803A914C_0000010C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A914C_000000F4
    lwz r3, 0x48(r3)
    b lbl_fn_803A914C_000000F8
lbl_fn_803A914C_000000F4:
    li r3, 0x0
lbl_fn_803A914C_000000F8:
    cmpwi r3, 0x0
    beq lbl_fn_803A914C_0000010C
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x10
    stw r0, 0x54c(r3)
lbl_fn_803A914C_0000010C:
    lwz r0, 0x10(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A914C_00000134
    cmpwi r27, 0x0
    beq lbl_fn_803A914C_00000134
    lwz r4, 0x14(r5)
    mr r3, r27
    li r5, 0x0
    bl fn_8017039C
lbl_fn_803A914C_00000134:
    lwz r3, 0xb8(r28)
    addi r0, r3, 0x1
    stw r0, 0xb8(r28)
lbl_fn_803A914C_00000140:
    lwz r3, 0x10(r30)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A914C_00000164
    cmpwi r27, 0x0
    beq lbl_fn_803A914C_00000164
    lwz r0, 0x105c(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803A914C_00000438
lbl_fn_803A914C_00000164:
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_803A914C_0000018C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A914C_0000018C
    lwz r0, 0x86c(r3)
    lwz r3, 0x868(r3)
    cmpw r3, r0
    bne lbl_fn_803A914C_00000438
lbl_fn_803A914C_0000018C:
    lwz r3, 0xb8(r28)
    addi r0, r3, 0x1
    stw r0, 0xb8(r28)
lbl_fn_803A914C_00000198:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A914C_000001CC
    lwz r0, 0x10(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803A914C_000001CC
    lwz r5, 0xc0(r28)
    lis r4, 0xff00
    lfs f1, lbl_80885B74
    li r6, 0x5
    subi r5, r5, 0x5
    bl fn_80370B78
lbl_fn_803A914C_000001CC:
    lwz r0, 0x10(r30)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_803A914C_00000214
    lwz r3, 0x8(r30)
    lis r5, lbl_8074F020@ha
    lwz r0, 0xc(r30)
    addi r5, r5, lbl_8074F020@l
    slwi r6, r3, 3
    lfs f1, lbl_80885B30
    slwi r4, r0, 2
    addi r3, r1, 0x8
    add r0, r5, r6
    lwzx r4, r4, r0
    bl fn_803935AC
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803A914C_00000214:
    lwz r3, 0xb8(r28)
    li r0, 0x0
    stw r0, 0xbc(r28)
    addi r0, r3, 0x1
    stw r0, 0xb8(r28)
lbl_fn_803A914C_00000228:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803A914C_000003C0
    lwz r3, 0x10(r30)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803A914C_00000250
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A914C_000003C0
lbl_fn_803A914C_00000250:
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A914C_000003A8
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803A914C_000003A8
    lwz r4, 0xbc(r28)
    lis r3, 0x4330
    lwz r0, 0xc0(r28)
    lis r5, lbl_8074F5E8@ha
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    xoris r0, r0, 0x8000
    lfs f7, lbl_80885B10
    stw r3, 0x28(r1)
    lfd f6, lbl_8074F5E8@l(r5)
    lfd f0, 0x28(r1)
    stw r0, 0x34(r1)
    fsubs f5, f0, f6
    lfs f3, lbl_80885B3C
    stw r3, 0x30(r1)
    lfs f0, lbl_80885B34
    lfd f4, 0x30(r1)
    stfs f7, 0xc(r1)
    fsubs f4, f4, f6
    lwz r27, lbl_8087F430
    stfs f7, 0x10(r1)
    fdivs f4, f5, f4
    stfs f7, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f7, 0x20(r1)
    stfs f7, 0x24(r1)
    fmuls f3, f3, f4
    fmuls f1, f3, f0
    bl fn_8068A850
    lfs f5, 0xb8(r27)
    frsp f4, f1
    lfs f0, lbl_80885BB8
    lfs f3, lbl_80885B30
    fdivs f5, f5, f0
    lwz r0, 0x10(r30)
    lfs f0, lbl_80885B34
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    fsubs f3, f3, f4
    fmuls f3, f3, f0
    beq lbl_fn_803A914C_0000033C
    lwz r0, 0xc(r30)
    cmpwi r0, 0x1
    bne lbl_fn_803A914C_00000324
    lfs f0, lbl_80885B14
    fmuls f5, f5, f0
lbl_fn_803A914C_00000324:
    fmuls f0, f3, f5
    lfs f3, lbl_80885B10
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    b lbl_fn_803A914C_00000378
lbl_fn_803A914C_0000033C:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803A914C_00000350
    lfs f0, lbl_80885B14
    fmuls f5, f5, f0
lbl_fn_803A914C_00000350:
    fmuls f3, f3, f5
    lfs f4, lbl_80885B10
    lfs f0, lbl_80885BD0
    stfs f4, 0xc(r1)
    fmuls f0, f0, f3
    stfs f4, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f4, 0x20(r1)
lbl_fn_803A914C_00000378:
    addi r3, r1, 0xc
    addi r4, r27, 0x9a8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x14(r1)
    stfs f2, 0x9b0(r27)
    psq_l f1, 0xc(r3), 0, 0
    psq_st f1, 0xc(r4), 0, 0
    lfs f2, 0x20(r1)
    stfs f2, 0x9bc(r27)
    lfs f0, 0x24(r1)
    stfs f0, 0x9c0(r27)
lbl_fn_803A914C_000003A8:
    lwz r3, 0xbc(r28)
    lwz r0, 0xc0(r28)
    addi r3, r3, 0x1
    stw r3, 0xbc(r28)
    cmpw r3, r0
    blt lbl_fn_803A914C_00000438
lbl_fn_803A914C_000003C0:
    lwz r3, 0xb8(r28)
    addi r0, r3, 0x1
    stw r0, 0xb8(r28)
lbl_fn_803A914C_000003CC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A914C_000003F8
    lfs f0, lbl_80885B10
    stfs f0, 0x9a8(r3)
    stfs f0, 0x9ac(r3)
    stfs f0, 0x9b0(r3)
    stfs f0, 0x9b4(r3)
    stfs f0, 0x9b8(r3)
    stfs f0, 0x9bc(r3)
    stfs f0, 0x9c0(r3)
lbl_fn_803A914C_000003F8:
    lwz r0, 0x10(r30)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803A914C_00000434
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A914C_0000041C
    lwz r3, 0x48(r3)
    b lbl_fn_803A914C_00000420
lbl_fn_803A914C_0000041C:
    li r3, 0x0
lbl_fn_803A914C_00000420:
    cmpwi r3, 0x0
    beq lbl_fn_803A914C_00000434
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_803A914C_00000434:
    li r31, 0x0
lbl_fn_803A914C_00000438:
    lwz r0, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r31, 0x4(r29)
    slwi r0, r0, 2
    addi r11, r1, 0x50
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803A9558(void)
{
    nofralloc
    li r6, 0x0
    li r0, 0x3c
    stw r6, 0xb8(r3)
    stw r0, 0xc0(r3)
    b fn_803A956C
}

asm void fn_803A956C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r0, 0xb8(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    li r30, 0x1
    beq lbl_fn_803A956C_000004C8
    cmpwi r0, 0x1
    beq lbl_fn_803A956C_00000540
    cmpwi r0, 0x2
    beq lbl_fn_803A956C_000006C0
    b lbl_fn_803A956C_000007A4
lbl_fn_803A956C_000004C8:
    lwz r0, 0x10(r5)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803A956C_00000504
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A956C_000004EC
    lwz r3, 0x48(r3)
    b lbl_fn_803A956C_000004F0
lbl_fn_803A956C_000004EC:
    li r3, 0x0
lbl_fn_803A956C_000004F0:
    cmpwi r3, 0x0
    beq lbl_fn_803A956C_00000504
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x10
    stw r0, 0x54c(r3)
lbl_fn_803A956C_00000504:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A956C_0000052C
    lwz r0, 0x54f0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803A956C_0000052C
    lwz r4, 0xc0(r27)
    li r5, 0x0
    lfs f1, lbl_80885BD4
    bl fn_80370BD0
lbl_fn_803A956C_0000052C:
    lwz r3, 0xb8(r27)
    li r0, 0x0
    stw r0, 0xbc(r27)
    addi r0, r3, 0x1
    stw r0, 0xb8(r27)
lbl_fn_803A956C_00000540:
    lwz r31, lbl_8087F430
    cmpwi r31, 0x0
    beq lbl_fn_803A956C_000006B4
    lwz r3, 0x10(r29)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A956C_000006B4
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803A956C_000006B4
    lwz r4, 0xbc(r27)
    lis r3, 0x4330
    lwz r0, 0xc0(r27)
    lis r5, lbl_8074F5E8@ha
    xoris r4, r4, 0x8000
    stw r4, 0x2c(r1)
    xoris r0, r0, 0x8000
    lfs f7, lbl_80885B10
    stw r3, 0x28(r1)
    lfd f6, lbl_8074F5E8@l(r5)
    lfd f0, 0x28(r1)
    stw r0, 0x34(r1)
    fsubs f5, f0, f6
    lfs f3, lbl_80885B3C
    stw r3, 0x30(r1)
    lfs f0, lbl_80885B34
    lfd f4, 0x30(r1)
    stfs f7, 0xc(r1)
    fsubs f4, f4, f6
    stfs f7, 0x10(r1)
    fdivs f4, f5, f4
    stfs f7, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f7, 0x20(r1)
    stfs f7, 0x24(r1)
    fmuls f3, f3, f4
    fmuls f1, f3, f0
    bl fn_8068AD58
    lfs f4, 0xb8(r31)
    frsp f3, f1
    lfs f0, lbl_80885BB8
    lwz r0, 0x10(r29)
    fdivs f4, f4, f0
    lfs f0, lbl_80885B30
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    fsubs f3, f0, f3
    beq lbl_fn_803A956C_00000630
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_fn_803A956C_00000618
    lfs f0, lbl_80885B14
    fmuls f4, f4, f0
lbl_fn_803A956C_00000618:
    fmuls f0, f3, f4
    lfs f3, lbl_80885B10
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    b lbl_fn_803A956C_0000066C
lbl_fn_803A956C_00000630:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_803A956C_00000644
    lfs f0, lbl_80885B14
    fmuls f4, f4, f0
lbl_fn_803A956C_00000644:
    fmuls f3, f3, f4
    lfs f4, lbl_80885B10
    lfs f0, lbl_80885BD0
    stfs f4, 0xc(r1)
    fmuls f0, f0, f3
    stfs f3, 0x10(r1)
    stfs f4, 0x14(r1)
    stfs f4, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f4, 0x20(r1)
lbl_fn_803A956C_0000066C:
    addi r3, r1, 0xc
    addi r4, r31, 0x9a8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x14(r1)
    stfs f2, 0x9b0(r31)
    psq_l f1, 0xc(r3), 0, 0
    psq_st f1, 0xc(r4), 0, 0
    lfs f2, 0x20(r1)
    stfs f2, 0x9bc(r31)
    lfs f0, 0x24(r1)
    stfs f0, 0x9c0(r31)
    lwz r3, 0xbc(r27)
    lwz r0, 0xc0(r27)
    addi r3, r3, 0x1
    stw r3, 0xbc(r27)
    cmpw r3, r0
    blt lbl_fn_803A956C_000007A4
lbl_fn_803A956C_000006B4:
    lwz r3, 0xb8(r27)
    addi r0, r3, 0x1
    stw r0, 0xb8(r27)
lbl_fn_803A956C_000006C0:
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_803A956C_0000071C
    lfs f4, lbl_80885B10
    li r0, 0x1e
    stfs f4, 0x9a8(r5)
    lfs f3, lbl_80885BA0
    stfs f4, 0x9ac(r5)
    lfs f0, lbl_80885BD8
    stfs f4, 0x9b0(r5)
    stfs f4, 0x9b4(r5)
    stfs f4, 0x9b8(r5)
    stfs f4, 0x9bc(r5)
    stfs f4, 0x9c0(r5)
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_803A956C_0000071C:
    lwz r0, 0x10(r29)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_803A956C_00000764
    lwz r3, 0x8(r29)
    lis r5, lbl_8074F088@ha
    lwz r0, 0xc(r29)
    addi r5, r5, lbl_8074F088@l
    slwi r6, r3, 3
    lfs f1, lbl_80885B30
    slwi r4, r0, 2
    addi r3, r1, 0x8
    add r0, r5, r6
    lwzx r4, r4, r0
    bl fn_803935AC
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803A956C_00000764:
    lwz r0, 0x10(r29)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803A956C_000007A0
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A956C_00000788
    lwz r3, 0x48(r3)
    b lbl_fn_803A956C_0000078C
lbl_fn_803A956C_00000788:
    li r3, 0x0
lbl_fn_803A956C_0000078C:
    cmpwi r3, 0x0
    beq lbl_fn_803A956C_000007A0
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_803A956C_000007A0:
    li r30, 0x0
lbl_fn_803A956C_000007A4:
    lwz r0, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r30, 0x4(r28)
    slwi r0, r0, 2
    addi r11, r1, 0x50
    lwzx r0, r3, r0
    add r0, r29, r0
    stw r0, 0x0(r28)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803A98C4(void)
{
    nofralloc
    lwz r0, 0x14(r5)
    li r6, 0x0
    stw r6, 0xb8(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    li r0, 0x19
    bne lbl_fn_803A98C4_000007FC
    li r0, 0x2d
lbl_fn_803A98C4_000007FC:
    stw r0, 0xc0(r3)
    b fn_803A98EC
}

asm void fn_803A98EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r6, lbl_8087F8A0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r6, 0x0
    beq lbl_fn_803A98EC_00000838
    lwz r31, 0x48(r6)
    b lbl_fn_803A98EC_0000083C
lbl_fn_803A98EC_00000838:
    li r31, 0x0
lbl_fn_803A98EC_0000083C:
    lwz r0, 0xb8(r3)
    li r30, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803A98EC_00000860
    cmpwi r0, 0x1
    beq lbl_fn_803A98EC_00000A30
    cmpwi r0, 0x2
    beq lbl_fn_803A98EC_00000A8C
    b lbl_fn_803A98EC_00000B20
lbl_fn_803A98EC_00000860:
    lwz r0, 0x14(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A98EC_00000888
    cmpwi r31, 0x0
    beq lbl_fn_803A98EC_00000888
    lwz r4, 0x18(r5)
    mr r3, r31
    li r5, 0x0
    bl fn_8017039C
lbl_fn_803A98EC_00000888:
    lwz r0, 0x14(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803A98EC_000008BC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A98EC_000008BC
    lwz r5, 0xc0(r27)
    lis r4, 0xff00
    lfs f1, lbl_80885B74
    li r6, 0x5
    subi r5, r5, 0x5
    bl fn_80370B78
lbl_fn_803A98EC_000008BC:
    lwz r0, 0x14(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803A98EC_000008F0
    lwz r3, lbl_8087F430
    li r4, 0x3
    bl fn_80370174
    stw r3, 0xc4(r27)
    li r4, 0x3
    li r5, 0x1
    li r6, 0x0
    lwz r3, lbl_8087F430
    bl fn_80370320
lbl_fn_803A98EC_000008F0:
    lwz r0, 0x14(r29)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803A98EC_00000914
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A98EC_00000914
    li r0, 0x0
    stw r0, 0x5664(r3)
lbl_fn_803A98EC_00000914:
    cmpwi r31, 0x0
    beq lbl_fn_803A98EC_00000948
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_803A98EC_00000948
    lwz r0, 0x560(r31)
    cmpwi r0, 0x54
    beq lbl_fn_803A98EC_0000093C
    cmpwi r0, 0x28
    bne lbl_fn_803A98EC_00000948
lbl_fn_803A98EC_0000093C:
    lwz r0, 0x12a4(r31)
    ori r0, r0, 0x1
    stw r0, 0x12a4(r31)
lbl_fn_803A98EC_00000948:
    lwz r3, 0xb8(r27)
    li r0, 0x0
    stw r0, 0xbc(r27)
    addi r0, r3, 0x1
    stw r0, 0xb8(r27)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A98EC_00000A30
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803A98EC_00000A30
    lwz r0, 0x14(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A98EC_00000A30
    lwz r3, lbl_8087F430
    li r26, 0x0
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803A98EC_000009F4
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x1
    bne lbl_fn_803A98EC_000009B4
    lwz r0, 0x18(r29)
    cmpwi r0, 0x69
    beq lbl_fn_803A98EC_000009F0
lbl_fn_803A98EC_000009B4:
    cmpwi r3, 0x2
    bne lbl_fn_803A98EC_000009C8
    lwz r0, 0x18(r29)
    cmpwi r0, 0x19
    beq lbl_fn_803A98EC_000009F0
lbl_fn_803A98EC_000009C8:
    cmpwi r3, 0x3
    bne lbl_fn_803A98EC_000009DC
    lwz r0, 0x18(r29)
    cmpwi r0, 0x11
    beq lbl_fn_803A98EC_000009F0
lbl_fn_803A98EC_000009DC:
    cmpwi r3, 0x6
    bne lbl_fn_803A98EC_000009F4
    lwz r0, 0x18(r29)
    cmpwi r0, 0x48
    bne lbl_fn_803A98EC_000009F4
lbl_fn_803A98EC_000009F0:
    li r26, 0x1
lbl_fn_803A98EC_000009F4:
    cmpwi r26, 0x0
    beq lbl_fn_803A98EC_00000A30
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803A98EC_00000A20
    lfs f1, lbl_80885B30
    li r4, 0x0
    li r5, 0x2d
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_803A98EC_00000A20:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_803A98EC_00000A30
    bl fn_8035E858
lbl_fn_803A98EC_00000A30:
    lwz r3, 0x14(r29)
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A98EC_00000A4C
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803A98EC_00000A80
lbl_fn_803A98EC_00000A4C:
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803A98EC_00000A74
    lwz r3, 0xbc(r27)
    lwz r0, 0xc0(r27)
    addi r3, r3, 0x1
    stw r3, 0xbc(r27)
    cmpw r3, r0
    blt lbl_fn_803A98EC_00000B20
    b lbl_fn_803A98EC_00000A80
lbl_fn_803A98EC_00000A74:
    lwz r0, 0x105c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A98EC_00000B20
lbl_fn_803A98EC_00000A80:
    lwz r3, 0xb8(r27)
    addi r0, r3, 0x1
    stw r0, 0xb8(r27)
lbl_fn_803A98EC_00000A8C:
    lwz r0, 0x14(r29)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803A98EC_00000AB8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A98EC_00000AB8
    lwz r5, 0xc4(r27)
    li r4, 0x3
    li r6, 0x0
    bl fn_80370320
lbl_fn_803A98EC_00000AB8:
    lwz r0, 0x14(r29)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803A98EC_00000ADC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A98EC_00000ADC
    li r0, 0x1
    stw r0, 0x5664(r3)
lbl_fn_803A98EC_00000ADC:
    lwz r0, 0x14(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A98EC_00000AFC
    cmpwi r31, 0x0
    beq lbl_fn_803A98EC_00000AFC
    mr r3, r31
    bl fn_80171DB0
lbl_fn_803A98EC_00000AFC:
    cmpwi r31, 0x0
    beq lbl_fn_803A98EC_00000B1C
    lwz r0, 0x12a4(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_803A98EC_00000B1C
    lwz r0, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x12a4(r31)
lbl_fn_803A98EC_00000B1C:
    li r30, 0x0
lbl_fn_803A98EC_00000B20:
    lwz r0, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r30, 0x4(r28)
    slwi r0, r0, 2
    addi r11, r1, 0x20
    lwzx r0, r3, r0
    add r0, r29, r0
    stw r0, 0x0(r28)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A9C40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x10(r5)
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    lwz r0, 0x14(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    li r28, 0x0
    beq lbl_fn_803A9C40_00000BB0
    cmpwi r6, 0x1
    beq lbl_fn_803A9C40_00000BDC
    cmpwi r6, 0x2
    beq lbl_fn_803A9C40_00000C18
    cmpwi r6, 0x3
    beq lbl_fn_803A9C40_00000C2C
    b lbl_fn_803A9C40_00000C3C
lbl_fn_803A9C40_00000BB0:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A9C40_00000BC8
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A9C40_00000BD4
lbl_fn_803A9C40_00000BC8:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A9C40_00000BD4:
    mr r28, r3
    b lbl_fn_803A9C40_00000C3C
lbl_fn_803A9C40_00000BDC:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A9C40_00000C3C
    cmpwi r3, 0x0
    beq lbl_fn_803A9C40_00000C3C
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A9C40_00000C3C
    li r28, 0x0
    b lbl_fn_803A9C40_00000C3C
lbl_fn_803A9C40_00000C18:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r28, r3
    b lbl_fn_803A9C40_00000C3C
lbl_fn_803A9C40_00000C2C:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r28, r3
lbl_fn_803A9C40_00000C3C:
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0xb8(r29)
    stw r0, 0xc0(r29)
    beq lbl_fn_803A9C40_00000CA4
    lwz r0, 0x54c(r28)
    addi r3, r28, 0x7d4
    li r4, -0x1
    extrwi r0, r0, 1, 29
    stw r0, 0xc0(r29)
    lwz r0, 0x7e0(r28)
    extrwi r0, r0, 1, 19
    stw r0, 0xc4(r29)
    bl fn_8013322C
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    lwz r0, 0x54c(r28)
    addi r3, r28, 0x7d4
    li r4, 0x1000
    li r5, 0x0
    ori r0, r0, 0x4
    stw r0, 0x54c(r28)
    bl fn_8013310C
lbl_fn_803A9C40_00000CA4:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_803A9DBC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A9DBC(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x160
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    bl _savegpr_24
    lwz r6, 0x10(r5)
    mr r25, r3
    lwz r0, 0x14(r5)
    mr r26, r4
    cmpwi r6, 0x0
    mr r27, r5
    li r30, 0x0
    beq lbl_fn_803A9DBC_00000D2C
    cmpwi r6, 0x1
    beq lbl_fn_803A9DBC_00000D58
    cmpwi r6, 0x2
    beq lbl_fn_803A9DBC_00000D94
    cmpwi r6, 0x3
    beq lbl_fn_803A9DBC_00000DA8
    b lbl_fn_803A9DBC_00000DB8
lbl_fn_803A9DBC_00000D2C:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A9DBC_00000D44
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A9DBC_00000D50
lbl_fn_803A9DBC_00000D44:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A9DBC_00000D50:
    mr r30, r3
    b lbl_fn_803A9DBC_00000DB8
lbl_fn_803A9DBC_00000D58:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A9DBC_00000DB8
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_00000DB8
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A9DBC_00000DB8
    li r30, 0x0
    b lbl_fn_803A9DBC_00000DB8
lbl_fn_803A9DBC_00000D94:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r30, r3
    b lbl_fn_803A9DBC_00000DB8
lbl_fn_803A9DBC_00000DA8:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r30, r3
lbl_fn_803A9DBC_00000DB8:
    lwz r0, 0x9c(r25)
    cmpwi r0, 0x5
    bne lbl_fn_803A9DBC_00000DCC
    lwz r5, 0xa0(r25)
    b lbl_fn_803A9DBC_00000DD0
lbl_fn_803A9DBC_00000DCC:
    li r5, -0x1
lbl_fn_803A9DBC_00000DD0:
    lwz r7, 0x88(r25)
    li r4, 0x0
    li r6, 0x0
    lwz r8, 0xe4(r7)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_803A9DBC_00000E14
lbl_fn_803A9DBC_00000DEC:
    lwz r3, 0xe8(r7)
    lwzx r0, r3, r6
    cmpw r5, r0
    bne lbl_fn_803A9DBC_00000E08
    mulli r0, r4, 0x48
    add r28, r3, r0
    b lbl_fn_803A9DBC_00000E18
lbl_fn_803A9DBC_00000E08:
    addi r6, r6, 0x48
    addi r4, r4, 0x1
    bdnz lbl_fn_803A9DBC_00000DEC
lbl_fn_803A9DBC_00000E14:
    li r28, 0x0
lbl_fn_803A9DBC_00000E18:
    cmpwi r28, 0x0
    beq lbl_fn_803A9DBC_00000E38
    lwz r0, 0x30(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803A9DBC_00000E38
    lwz r0, 0x34(r28)
    cmpwi r0, 0x0
    bgt lbl_fn_803A9DBC_00000E8C
lbl_fn_803A9DBC_00000E38:
    lwz r0, 0x20(r27)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_803A9DBC_00000E8C
    lwz r4, 0x1c(r27)
    li r5, 0x0
    li r6, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_803A9DBC_00000E88
lbl_fn_803A9DBC_00000E60:
    lwz r3, 0xe8(r7)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_803A9DBC_00000E7C
    mulli r0, r5, 0x48
    add r28, r3, r0
    b lbl_fn_803A9DBC_00000E8C
lbl_fn_803A9DBC_00000E7C:
    addi r6, r6, 0x48
    addi r5, r5, 0x1
    bdnz lbl_fn_803A9DBC_00000E60
lbl_fn_803A9DBC_00000E88:
    li r28, 0x0
lbl_fn_803A9DBC_00000E8C:
    cmpwi r28, 0x0
    li r3, 0x0
    beq lbl_fn_803A9DBC_00000EA8
    lwz r0, 0x30(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803A9DBC_00000EA8
    li r3, 0x1
lbl_fn_803A9DBC_00000EA8:
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_00000EB8
    lwz r3, 0x34(r28)
    b lbl_fn_803A9DBC_00000EBC
lbl_fn_803A9DBC_00000EB8:
    li r3, -0x1
lbl_fn_803A9DBC_00000EBC:
    bl fn_8021ECD0
    lwz r0, 0x20(r27)
    mr r31, r3
    li r4, 0x0
    li r5, 0x0
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_803A9DBC_00000EE8
    lwz r4, 0x18(r27)
    lwz r5, 0x1c(r27)
    b lbl_fn_803A9DBC_00000F04
lbl_fn_803A9DBC_00000EE8:
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_00000F04
    cmpwi r28, 0x0
    beq lbl_fn_803A9DBC_00000F04
    lwz r3, 0x4(r3)
    lwz r5, 0x0(r28)
    addi r4, r3, 0x5208
lbl_fn_803A9DBC_00000F04:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_00000F1C
    bl fn_803EEE10
    mr r29, r3
    b lbl_fn_803A9DBC_00000F20
lbl_fn_803A9DBC_00000F1C:
    li r29, 0x0
lbl_fn_803A9DBC_00000F20:
    lwz r0, 0xb8(r25)
    li r28, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_803A9DBC_00000F54
    cmpwi r0, 0x1
    beq lbl_fn_803A9DBC_000011C8
    cmpwi r0, 0x2
    beq lbl_fn_803A9DBC_00001220
    cmpwi r0, 0x3
    beq lbl_fn_803A9DBC_000012C4
    cmpwi r0, 0x4
    beq lbl_fn_803A9DBC_00001308
    b lbl_fn_803A9DBC_00001330
lbl_fn_803A9DBC_00000F54:
    lwz r3, 0x20(r27)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803A9DBC_00000F70
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803A9DBC_00001180
lbl_fn_803A9DBC_00000F70:
    cmpwi r30, 0x0
    beq lbl_fn_803A9DBC_00001180
    cmpwi r29, 0x0
    beq lbl_fn_803A9DBC_00001180
    lfs f3, lbl_80885B10
    addi r3, r1, 0xb8
    lfs f0, lbl_80885B30
    li r4, 0x79
    stfs f3, 0x8c(r1)
    lfs f31, lbl_80885BDC
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    lfs f1, 0x7c(r29)
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0xb8
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x94(r1)
    lfs f8, 0x90(r1)
    lfs f7, 0x8c(r1)
    fmuls f5, f9, f31
    fmuls f6, f8, f31
    lfs f4, 0x74(r29)
    fmuls f10, f7, f31
    lfs f3, 0x70(r29)
    lfs f0, 0x6c(r29)
    lwz r0, 0x20(r27)
    fadds f4, f4, f5
    stfs f10, 0x68(r1)
    fadds f3, f3, f6
    rlwinm r0, r0, 0, 30, 30
    fadds f0, f0, f10
    cmplwi r0, 0x2
    stfs f6, 0x6c(r1)
    stfs f5, 0x70(r1)
    stfs f0, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f4, 0x88(r1)
    bne lbl_fn_803A9DBC_00001144
    li r0, 0x0
    lfs f0, lbl_80885BE0
    stw r0, 0x11c(r1)
    addi r4, r1, 0xe8
    lfs f6, lbl_80885B10
    fmuls f9, f9, f0
    lfs f5, lbl_80885B9C
    fmuls f8, f8, f0
    fmuls f7, f7, f0
    stw r0, 0x120(r1)
    lwz r3, lbl_8087EE98
    stw r0, 0x124(r1)
    addi r5, r1, 0x5c
    addi r6, r1, 0x38
    stw r0, 0x128(r1)
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    lfs f4, 0x74(r29)
    lfs f3, 0x70(r29)
    lfs f0, 0x6c(r29)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x74(r1)
    fadds f0, f0, f6
    stfs f3, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f4, 0x40(r1)
    lfs f0, 0x74(r29)
    lfs f3, 0x70(r29)
    fadds f4, f0, f9
    lfs f0, 0x6c(r29)
    fadds f3, f3, f8
    stfs f5, 0x78(r1)
    fadds f0, f0, f7
    fadds f10, f4, f6
    fadds f5, f3, f5
    stfs f6, 0x7c(r1)
    fadds f6, f0, f6
    stfs f7, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f10, 0x64(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_00001138
    lfs f4, 0x94(r1)
    addi r4, r1, 0x2c
    lfs f0, 0x90(r1)
    addi r3, r1, 0x80
    lfs f3, 0x8c(r1)
    fmuls f4, f4, f31
    fmuls f5, f0, f31
    lfs f0, 0x100(r1)
    fmuls f6, f3, f31
    lfs f3, 0xfc(r1)
    fadds f2, f0, f4
    lfs f0, 0xf8(r1)
    fadds f3, f3, f5
    stfs f6, 0x20(r1)
    fadds f0, f0, f6
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_803A9DBC_00001138:
    lfs f0, 0x52c(r30)
    stfs f0, 0x84(r1)
    b lbl_fn_803A9DBC_00001158
lbl_fn_803A9DBC_00001144:
    psq_l f1, 0x528(r30), 0, 0
    addi r3, r1, 0x80
    lfs f2, 0x530(r30)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_803A9DBC_00001158:
    lfs f3, 0x7c(r29)
    mr r3, r30
    lfs f0, lbl_80885B3C
    addi r4, r1, 0x80
    lfs f2, lbl_80885BB8
    li r5, 0x0
    fadds f1, f0, f3
    bl fn_80170F20
    li r0, 0x0
    stw r0, 0xbc(r25)
lbl_fn_803A9DBC_00001180:
    lwz r0, 0x20(r27)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803A9DBC_000011BC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_000011A4
    lwz r3, 0x48(r3)
    b lbl_fn_803A9DBC_000011A8
lbl_fn_803A9DBC_000011A4:
    li r3, 0x0
lbl_fn_803A9DBC_000011A8:
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_000011BC
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x10
    stw r0, 0x54c(r3)
lbl_fn_803A9DBC_000011BC:
    lwz r3, 0xb8(r25)
    addi r0, r3, 0x1
    stw r0, 0xb8(r25)
lbl_fn_803A9DBC_000011C8:
    lwz r3, 0x20(r27)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803A9DBC_000011E4
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803A9DBC_00001214
lbl_fn_803A9DBC_000011E4:
    cmpwi r30, 0x0
    beq lbl_fn_803A9DBC_00001214
    lwz r0, 0x105c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803A9DBC_00001214
    lwz r3, 0xbc(r25)
    addi r0, r3, 0x1
    stw r0, 0xbc(r25)
    cmpwi r0, 0x5a
    blt lbl_fn_803A9DBC_00001330
    mr r3, r30
    bl fn_80171DB0
lbl_fn_803A9DBC_00001214:
    lwz r3, 0xb8(r25)
    addi r0, r3, 0x1
    stw r0, 0xb8(r25)
lbl_fn_803A9DBC_00001220:
    cmpwi r29, 0x0
    beq lbl_fn_803A9DBC_00001288
    lwz r0, 0xc(r27)
    cmpwi r0, 0x2
    beq lbl_fn_803A9DBC_00001288
    lfs f0, lbl_80885B10
    cmpwi r0, 0x1
    li r0, 0x0
    li r3, 0x3
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stw r0, 0xa4(r1)
    stw r0, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
    bne lbl_fn_803A9DBC_00001270
    li r0, 0x5
    stw r0, 0x98(r1)
lbl_fn_803A9DBC_00001270:
    lwz r12, 0x0(r29)
    mr r3, r29
    addi r4, r1, 0x98
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803A9DBC_00001288:
    cmpwi r30, 0x0
    beq lbl_fn_803A9DBC_000012B8
    lwz r0, 0x8(r27)
    cmpwi r0, 0x1
    bne lbl_fn_803A9DBC_000012B8
    lfs f1, lbl_80885B14
    mr r3, r30
    li r4, 0x65
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
lbl_fn_803A9DBC_000012B8:
    lwz r3, 0xb8(r25)
    addi r0, r3, 0x1
    stw r0, 0xb8(r25)
lbl_fn_803A9DBC_000012C4:
    cmpwi r30, 0x0
    beq lbl_fn_803A9DBC_000012FC
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_803A9DBC_000012FC
    lwz r0, 0x560(r30)
    cmpwi r0, 0x27
    bne lbl_fn_803A9DBC_000012FC
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    blt lbl_fn_803A9DBC_00001330
lbl_fn_803A9DBC_000012FC:
    lwz r3, 0xb8(r25)
    addi r0, r3, 0x1
    stw r0, 0xb8(r25)
lbl_fn_803A9DBC_00001308:
    cmpwi r29, 0x0
    beq lbl_fn_803A9DBC_0000132C
    lwz r0, 0x54(r29)
    cmpwi r0, 0x1
    beq lbl_fn_803A9DBC_00001324
    cmpwi r0, 0x4
    bne lbl_fn_803A9DBC_00001330
lbl_fn_803A9DBC_00001324:
    li r28, 0x0
    b lbl_fn_803A9DBC_00001330
lbl_fn_803A9DBC_0000132C:
    li r28, 0x0
lbl_fn_803A9DBC_00001330:
    cmpwi r28, 0x0
    bne lbl_fn_803A9DBC_000014BC
    lwz r0, 0x20(r27)
    li r24, 0x0
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A9DBC_0000139C
    addi r0, r1, 0x14
    stw r0, 0x8(r1)
    lwz r4, 0x24(r27)
    addi r9, r1, 0x1c
    lwz r3, lbl_8087F4F0
    addi r10, r1, 0x18
    li r5, 0x1
    li r6, -0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_80444020
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_803A9DBC_000013C4
    lwz r3, lbl_8087F490
    lwz r4, 0x1c(r1)
    lwz r5, 0x18(r1)
    lwz r6, 0x14(r1)
    bl fn_803E5E64
    b lbl_fn_803A9DBC_000013C4
lbl_fn_803A9DBC_0000139C:
    cmpwi r31, 0x0
    beq lbl_fn_803A9DBC_000013C4
    lwz r12, 0x0(r29)
    mr r3, r29
    li r24, 0x1
    li r4, 0x1
    lwz r12, 0x68(r12)
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_803A9DBC_000013C4:
    cmpwi r24, 0x0
    beq lbl_fn_803A9DBC_000013F8
    lis r4, lbl_8074EF78@ha
    lfs f1, lbl_80885B30
    addi r4, r4, lbl_8074EF78@l
    addi r3, r1, 0x10
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803A9DBC_000013F8:
    cmpwi r31, 0x0
    beq lbl_fn_803A9DBC_00001424
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_803A9DBC_00001424
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_00001424
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_803A9DBC_00001424:
    lwz r0, 0x20(r27)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803A9DBC_00001460
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_00001448
    lwz r3, 0x48(r3)
    b lbl_fn_803A9DBC_0000144C
lbl_fn_803A9DBC_00001448:
    li r3, 0x0
lbl_fn_803A9DBC_0000144C:
    cmpwi r3, 0x0
    beq lbl_fn_803A9DBC_00001460
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_803A9DBC_00001460:
    cmpwi r30, 0x0
    beq lbl_fn_803A9DBC_000014BC
    lwz r0, 0xc0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_803A9DBC_00001484
    lwz r0, 0x54c(r30)
    ori r0, r0, 0x4
    stw r0, 0x54c(r30)
    b lbl_fn_803A9DBC_00001490
lbl_fn_803A9DBC_00001484:
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x54c(r30)
lbl_fn_803A9DBC_00001490:
    lwz r0, 0xc4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_803A9DBC_000014B0
    addi r3, r30, 0x7d4
    li r4, 0x1000
    li r5, 0x0
    bl fn_8013310C
    b lbl_fn_803A9DBC_000014BC
lbl_fn_803A9DBC_000014B0:
    addi r3, r30, 0x7d4
    li r4, 0x1000
    bl fn_8013322C
lbl_fn_803A9DBC_000014BC:
    lwz r0, 0x0(r27)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r28, 0x4(r26)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r27, r0
    stw r0, 0x0(r26)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    addi r11, r1, 0x160
    bl _restgpr_24
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_803AA5E4(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    addi r11, r1, 0x320
    bl _savegpr_26
    lwz r0, 0x8(r5)
    mr r30, r4
    lwz r4, 0xc(r5)
    mr r31, r5
    cmpwi r0, 0x0
    li r27, 0x0
    beq lbl_fn_803AA5E4_00001548
    cmpwi r0, 0x1
    beq lbl_fn_803AA5E4_00001574
    cmpwi r0, 0x2
    beq lbl_fn_803AA5E4_000015AC
    cmpwi r0, 0x3
    beq lbl_fn_803AA5E4_000015BC
    b lbl_fn_803AA5E4_000015C8
lbl_fn_803AA5E4_00001548:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803AA5E4_00001560
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803AA5E4_0000156C
lbl_fn_803AA5E4_00001560:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803AA5E4_0000156C:
    mr r27, r3
    b lbl_fn_803AA5E4_000015C8
lbl_fn_803AA5E4_00001574:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_803AA5E4_000015C8
    cmpwi r3, 0x0
    beq lbl_fn_803AA5E4_000015C8
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803AA5E4_000015C8
    li r27, 0x0
    b lbl_fn_803AA5E4_000015C8
lbl_fn_803AA5E4_000015AC:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r27, r3
    b lbl_fn_803AA5E4_000015C8
lbl_fn_803AA5E4_000015BC:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r27, r3
lbl_fn_803AA5E4_000015C8:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803AA5E4_000015DC
    lwz r3, 0x10d8(r3)
    b lbl_fn_803AA5E4_000015E0
lbl_fn_803AA5E4_000015DC:
    li r3, 0x0
lbl_fn_803AA5E4_000015E0:
    cmpwi r27, 0x0
    beq lbl_fn_803AA5E4_00001708
    cmpwi r3, 0x0
    beq lbl_fn_803AA5E4_00001708
    lwz r4, 0x30(r31)
    bl fn_803CC6D0
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_803AA5E4_000016E0
    lwz r0, 0x34(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803AA5E4_000016CC
    addi r26, r27, 0xb0
    addi r3, r1, 0x208
    li r4, 0x0
    li r5, 0x100
    bl memset
    addi r3, r1, 0x208
    addi r4, r31, 0x10
    li r5, 0x20
    bl memcpy
    mr r3, r26
    addi r4, r1, 0x208
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_fn_803AA5E4_00001678
    lis r4, lbl_8074F8CC@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_8074F8CC@l
    addi r5, r1, 0x208
    addi r4, r4, 0x171
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x108
    bl fn_800697D8
lbl_fn_803AA5E4_00001678:
    lwz r0, 0x38(r27)
    cmpwi r29, 0x0
    rlwinm r4, r0, 0, 29, 29
    subfic r3, r4, 0x4
    subi r0, r4, 0x4
    or r0, r3, r0
    srwi r0, r0, 31
    stw r0, 0x1c(r28)
    stw r27, 0x8(r28)
    bge lbl_fn_803AA5E4_000016A8
    li r0, 0x0
    b lbl_fn_803AA5E4_000016B4
lbl_fn_803AA5E4_000016A8:
    mulli r0, r29, 0x30
    lwz r3, 0x3c(r26)
    add r0, r3, r0
lbl_fn_803AA5E4_000016B4:
    stw r0, 0xc(r28)
    psq_l f1, 0x38(r31), 0, 0
    psq_st f1, 0x10(r28), 0, 0
    lfs f2, 0x40(r31)
    stfs f2, 0x18(r28)
    b lbl_fn_803AA5E4_00001708
lbl_fn_803AA5E4_000016CC:
    li r0, 0x0
    stw r0, 0x1c(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    b lbl_fn_803AA5E4_00001708
lbl_fn_803AA5E4_000016E0:
    lis r4, lbl_8074F8CC@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074F8CC@l
    addi r5, r1, 0x208
    addi r4, r4, 0x195
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_803AA5E4_00001708:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    addi r11, r1, 0x320
    add r0, r31, r0
    stw r0, 0x0(r30)
    bl _restgpr_26
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}

asm void fn_803AA82C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x8(r5)
    stw r31, 0xc(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0xc(r5)
    li r5, 0x0
    beq lbl_fn_803AA82C_00001790
    cmpwi r0, 0x1
    beq lbl_fn_803AA82C_000017BC
    cmpwi r0, 0x2
    beq lbl_fn_803AA82C_000017F4
    cmpwi r0, 0x3
    beq lbl_fn_803AA82C_00001804
    b lbl_fn_803AA82C_00001810
lbl_fn_803AA82C_00001790:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803AA82C_000017A8
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803AA82C_000017B4
lbl_fn_803AA82C_000017A8:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803AA82C_000017B4:
    mr r5, r3
    b lbl_fn_803AA82C_00001810
lbl_fn_803AA82C_000017BC:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803AA82C_00001810
    cmpwi r3, 0x0
    beq lbl_fn_803AA82C_00001810
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803AA82C_00001810
    li r5, 0x0
    b lbl_fn_803AA82C_00001810
lbl_fn_803AA82C_000017F4:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r5, r3
    b lbl_fn_803AA82C_00001810
lbl_fn_803AA82C_00001804:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r5, r3
lbl_fn_803AA82C_00001810:
    cmpwi r5, 0x0
    beq lbl_fn_803AA82C_00001830
    lwz r0, 0x12a8(r5)
    addi r3, r5, 0xb0
    li r4, 0x0
    oris r0, r0, 0x10
    stw r0, 0x12a8(r5)
    bl fn_8008B978
lbl_fn_803AA82C_00001830:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803AA954(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x8(r5)
    stw r31, 0xc(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0xc(r5)
    li r5, 0x0
    beq lbl_fn_803AA954_000018B8
    cmpwi r0, 0x1
    beq lbl_fn_803AA954_000018E4
    cmpwi r0, 0x2
    beq lbl_fn_803AA954_0000191C
    cmpwi r0, 0x3
    beq lbl_fn_803AA954_0000192C
    b lbl_fn_803AA954_00001938
lbl_fn_803AA954_000018B8:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803AA954_000018D0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803AA954_000018DC
lbl_fn_803AA954_000018D0:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803AA954_000018DC:
    mr r5, r3
    b lbl_fn_803AA954_00001938
lbl_fn_803AA954_000018E4:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803AA954_00001938
    cmpwi r3, 0x0
    beq lbl_fn_803AA954_00001938
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803AA954_00001938
    li r5, 0x0
    b lbl_fn_803AA954_00001938
lbl_fn_803AA954_0000191C:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r5, r3
    b lbl_fn_803AA954_00001938
lbl_fn_803AA954_0000192C:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r5, r3
lbl_fn_803AA954_00001938:
    cmpwi r5, 0x0
    beq lbl_fn_803AA954_00001950
    lwz r0, 0x12a8(r5)
    oris r0, r0, 0x40
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x12a8(r5)
lbl_fn_803AA954_00001950:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
