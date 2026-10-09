#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_22(void);
extern void _savegpr_20(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80056DB8(void);
extern void fn_800697D8(void);
extern void fn_8006AD24(void);
extern void fn_8007A75C(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_80096E94(void);
extern void fn_800CB360(void);
extern void fn_800D1D3C(void);
extern void fn_8011BD14(void);
extern void fn_8011D24C(void);
extern void fn_80120F5C(void);
extern void fn_801210B4(void);
extern void fn_80125320(void);
extern void fn_8012980C(void);
extern void fn_8012B0B0(void);
extern void fn_8012C6D4(void);
extern void fn_8012D628(void);
extern void fn_8012D714(void);
extern void fn_8013459C(void);
extern void fn_80204E04(void);
extern void fn_80206B14(void);
extern void fn_8020787C(void);
extern void fn_8020924C(void);
extern void fn_802092C0(void);
extern void fn_8020A81C(void);
extern void fn_8020A888(void);
extern void fn_8020ED84(void);
extern void fn_802180A8(void);
extern void fn_80218260(void);
extern void fn_80219EB4(void);
extern void fn_80219EBC(void);
extern void fn_8021FC00(void);
extern void fn_8036823C(void);
extern void fn_80370174(void);
extern void fn_804444E8(void);
extern void fn_804446BC(void);
extern void fn_80473E74(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80737348[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80777630[];
extern u8 lbl_8077C460[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_8078FEF0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7B28[];

/* Small data declarations */
extern u32 lbl_8087EEB8;
extern u32 lbl_8087F128;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087FA20;
extern u32 lbl_80881900;
extern u32 lbl_80881904;
extern u32 lbl_8088191C;
extern u32 lbl_8088194C;
extern u32 lbl_80881950;
extern u32 lbl_80881958;
extern u32 lbl_80881964;
extern u32 lbl_80881968;
extern u32 lbl_8088196C;
extern u32 lbl_80881970;
extern u32 lbl_80881974;
extern u32 lbl_80881978;
extern u32 lbl_8088197C;
extern u32 lbl_80881980;
extern u32 lbl_80881984;
extern u32 lbl_80881988;

/* Function declarations */
void fn_801346C8(void);
void fn_80134724(void);
void fn_80134774(void);
void fn_801347C8(void);
void fn_80134800(void);
void fn_80135284(void);
void fn_801352F8(void);
void fn_80135338(void);
void fn_8013537C(void);
void fn_80135380(void);
void fn_80135384(void);
void fn_8013539C(void);
void fn_801354B4(void);

asm void fn_801346C8(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_801346C8_00000010
    cmpwi r4, 0x80
    blt lbl_fn_801346C8_00000018
lbl_fn_801346C8_00000010:
    li r3, 0x0
    blr
lbl_fn_801346C8_00000018:
    srawi r0, r4, 5
    slwi r6, r4, 27
    srwi r5, r4, 31
    li r7, 0x1
    addze r0, r0
    subf r4, r5, r6
    slwi r0, r0, 2
    rotlwi r4, r4, 5
    add r3, r3, r0
    add r4, r4, r5
    lwz r0, 0x1ec(r3)
    slw r3, r7, r4
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80134724(void)
{
    nofralloc
    lwz r0, 0x430(r3)
    add r5, r0, r4
    neg r0, r5
    andc r4, r0, r5
    srawi r0, r4, 31
    and r0, r5, r0
    cmpwi r0, 0x4
    bge lbl_fn_80134724_00000088
    srawi r0, r4, 31
    and r0, r5, r0
    b lbl_fn_80134724_0000008C
lbl_fn_80134724_00000088:
    li r0, 0x4
lbl_fn_80134724_0000008C:
    lfs f0, lbl_80881900
    cmpwi r0, 0x0
    stw r0, 0x430(r3)
    stfs f0, 0x434(r3)
    blelr
    lfs f0, lbl_8088194C
    stfs f0, 0x438(r3)
    blr
}

asm void fn_80134774(void)
{
    nofralloc
    cmpwi r4, 0x0
    bltlr
    cmpwi r4, 0x4
    bgelr
    cmpwi r5, 0x0
    beq lbl_fn_80134774_000000E0
    li r0, 0x1
    lbz r5, 0x230(r3)
    slw r0, r0, r4
    clrlwi r0, r0, 24
    or r0, r5, r0
    stb r0, 0x230(r3)
    blr
lbl_fn_80134774_000000E0:
    li r0, 0x1
    lbz r5, 0x230(r3)
    slw r0, r0, r4
    nor r0, r0, r0
    clrlwi r0, r0, 24
    and r0, r5, r0
    stb r0, 0x230(r3)
    blr
}

asm void fn_801347C8(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_801347C8_00000130
    cmpwi r4, 0x4
    bge lbl_fn_801347C8_00000130
    li r5, 0x1
    lbz r0, 0x230(r3)
    slw r3, r5, r4
    and r0, r3, r0
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_801347C8_00000130:
    li r3, 0x0
    blr
}

asm void fn_80134800(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x60
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    stfd f25, 0x60(r1)
    psq_st f25, 0x68(r1), 0, 0
    bl _savegpr_20
    lfs f1, lbl_80881900
    li r0, 0x0
    lfs f0, lbl_80881904
    lis r11, 0x4330
    li r31, 0x1
    mr r24, r5
    stw r11, 0x8(r1)
    mr r22, r3
    lwz r30, 0xd8(r1)
    mr r23, r4
    stw r11, 0x10(r1)
    mr r25, r6
    mr r26, r7
    mr r27, r8
    stfs f1, 0x0(r3)
    mr r28, r9
    mr r29, r10
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f1, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x54(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x58(r3)
    stfs f1, 0x40(r3)
    stfs f1, 0x5c(r3)
    stfs f1, 0x44(r3)
    stfs f1, 0x60(r3)
    stfs f1, 0x48(r3)
    stfs f1, 0x64(r3)
    stfs f1, 0x4c(r3)
    stfs f1, 0x68(r3)
    stfs f1, 0x50(r3)
    stfs f1, 0x6c(r3)
    stw r31, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x80(r3)
    stw r0, 0x84(r3)
    stw r0, 0x88(r3)
    stfs f1, 0x8c(r3)
    stfs f1, 0x90(r3)
    stw r0, 0x94(r3)
    stw r0, 0x98(r3)
    stw r0, 0x9c(r3)
    mr r3, r24
    bl fn_8020A888
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_80134800_00000274
    b lbl_fn_80134800_00000B6C
lbl_fn_80134800_00000274:
    lfs f0, 0x0(r3)
    mr r4, r22
    stfs f0, 0x0(r22)
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r22)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r22)
    lfs f0, 0xc(r3)
    stfs f0, 0xc(r22)
    lfs f0, 0x10(r3)
    stfs f0, 0x10(r22)
    lfs f0, 0x14(r3)
    stfs f0, 0x14(r22)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r22)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r22)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r22)
    lwz r0, 0x24(r3)
    stw r0, 0x24(r22)
    lfs f0, 0x28(r3)
    stfs f0, 0x28(r22)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r22)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r22)
    lwz r0, 0x34(r3)
    stw r0, 0x34(r22)
    lwz r6, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x3c(r22)
    stw r6, 0x38(r22)
    lwz r6, 0x40(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x44(r22)
    stw r6, 0x40(r22)
    lwz r6, 0x48(r3)
    lwz r0, 0x4c(r3)
    stw r0, 0x4c(r22)
    stw r6, 0x48(r22)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r22)
    lwz r6, 0x54(r3)
    lwz r0, 0x58(r3)
    stw r0, 0x58(r22)
    stw r6, 0x54(r22)
    lwz r6, 0x5c(r3)
    lwz r0, 0x60(r3)
    stw r0, 0x60(r22)
    stw r6, 0x5c(r22)
    lwz r6, 0x64(r3)
    lwz r0, 0x68(r3)
    stw r0, 0x68(r22)
    stw r6, 0x64(r22)
    lwz r0, 0x6c(r3)
    stw r0, 0x6c(r22)
    lwz r6, 0x70(r3)
    lwz r0, 0x74(r3)
    stw r0, 0x74(r22)
    stw r6, 0x70(r22)
    lwz r0, 0x78(r3)
    stw r0, 0x78(r22)
    lwz r6, 0x7c(r3)
    stw r6, 0x7c(r22)
    lwz r6, 0x80(r3)
    stw r6, 0x80(r22)
    lwz r6, 0x84(r3)
    stw r6, 0x84(r22)
    lwz r6, 0x88(r3)
    stw r6, 0x88(r22)
    lfs f0, 0x8c(r3)
    stfs f0, 0x8c(r22)
    lfs f0, 0x90(r3)
    stfs f0, 0x90(r22)
    lwz r6, 0x94(r3)
    stw r6, 0x94(r22)
    lwz r6, 0x98(r3)
    stw r6, 0x98(r22)
    lwz r6, 0x9c(r3)
    stw r6, 0x9c(r22)
    lwz r7, 0xa0(r3)
    lwz r6, 0xa4(r3)
    stw r6, 0xa4(r22)
    stw r7, 0xa0(r22)
    lwz r7, 0xa8(r3)
    lwz r6, 0xac(r3)
    stw r6, 0xac(r22)
    stw r7, 0xa8(r22)
    lwz r7, 0xb0(r3)
    lwz r6, 0xb4(r3)
    stw r6, 0xb4(r22)
    stw r7, 0xb0(r22)
    lwz r7, 0xb8(r3)
    lwz r6, 0xbc(r3)
    mr r3, r23
    stw r6, 0xbc(r22)
    stw r7, 0xb8(r22)
    lfs f0, 0x1b0(r23)
    lwz r7, 0xc(r23)
    fctiwz f0, f0
    lwz r6, 0x1c(r23)
    extrwi r8, r7, 1, 21
    lwz r7, 0xc8(r5)
    neg r5, r8
    stfd f0, 0x18(r1)
    clrlwi r5, r5, 30
    lwz r8, 0x1c(r1)
    subf r6, r5, r6
    add r5, r0, r8
    bl fn_8012C6D4
    lfs f0, 0x1b4(r23)
    lwz r3, 0x84(r22)
    fctiwz f0, f0
    lfs f4, 0x0(r22)
    lfs f3, 0x4(r22)
    stfd f0, 0x20(r1)
    lfs f2, 0x8(r22)
    lwz r0, 0x24(r1)
    lfs f1, 0xc(r22)
    add r0, r3, r0
    stw r0, 0x84(r22)
    lwz r4, 0x94(r22)
    lfs f0, 0x1b8(r23)
    lwz r3, 0x78(r22)
    fadds f0, f4, f0
    stfs f0, 0x0(r22)
    lfs f0, 0x1bc(r23)
    fadds f0, f3, f0
    stfs f0, 0x4(r22)
    lfs f0, 0x1c0(r23)
    fadds f0, f2, f0
    stfs f0, 0x8(r22)
    lfs f0, 0x1c4(r23)
    fadds f0, f1, f0
    stfs f0, 0xc(r22)
    lwz r0, 0x1c8(r23)
    add r0, r4, r0
    stw r0, 0x94(r22)
    lwz r5, 0xc(r23)
    lwz r0, 0x1c(r23)
    extrwi r4, r5, 1, 21
    rlwinm r5, r5, 0, 21, 21
    neg r4, r4
    add r6, r3, r0
    clrlwi r0, r4, 30
    subf r0, r0, r6
    cmpwi r0, 0x1
    bge lbl_fn_80134800_000004CC
    b lbl_fn_80134800_000004E4
lbl_fn_80134800_000004CC:
    subi r3, r5, 0x400
    subfic r0, r5, 0x400
    nor r0, r3, r0
    srawi r0, r0, 31
    clrlwi r0, r0, 30
    subf r31, r0, r6
lbl_fn_80134800_000004E4:
    stw r31, 0x78(r22)
    cmpwi r24, 0x3
    slwi r0, r24, 6
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    add r3, r3, r0
    subi r31, r3, 0x7d70
    bne lbl_fn_80134800_00000588
    cmpwi r25, 0x1
    lwz r4, 0x20(r31)
    bne lbl_fn_80134800_0000051C
    cmpwi r26, 0x0
    bne lbl_fn_80134800_0000051C
    mr r4, r27
lbl_fn_80134800_0000051C:
    cmpwi r28, 0x1
    bne lbl_fn_80134800_00000530
    cmpwi r29, 0x0
    bne lbl_fn_80134800_00000530
    mr r4, r30
lbl_fn_80134800_00000530:
    li r3, 0x0
    bl fn_80206B14
    cmpwi r25, 0x1
    lwz r4, 0x28(r31)
    mr r21, r3
    bne lbl_fn_80134800_00000554
    cmpwi r26, 0x1
    bne lbl_fn_80134800_00000554
    mr r4, r27
lbl_fn_80134800_00000554:
    cmpwi r28, 0x1
    bne lbl_fn_80134800_00000568
    cmpwi r29, 0x1
    bne lbl_fn_80134800_00000568
    mr r4, r30
lbl_fn_80134800_00000568:
    li r3, 0x0
    bl fn_80206B14
    mr r6, r3
    mr r3, r23
    mr r4, r22
    mr r5, r21
    bl fn_8012D714
    b lbl_fn_80134800_000005CC
lbl_fn_80134800_00000588:
    cmpwi r25, 0x1
    lwz r4, 0x20(r31)
    bne lbl_fn_80134800_000005A0
    cmpwi r26, 0x0
    bne lbl_fn_80134800_000005A0
    mr r4, r27
lbl_fn_80134800_000005A0:
    cmpwi r28, 0x1
    bne lbl_fn_80134800_000005B4
    cmpwi r29, 0x0
    bne lbl_fn_80134800_000005B4
    mr r4, r30
lbl_fn_80134800_000005B4:
    li r3, 0x0
    bl fn_80206B14
    mr r5, r3
    mr r3, r23
    mr r4, r22
    bl fn_8012D628
lbl_fn_80134800_000005CC:
    lwz r3, lbl_8087F610
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80134800_00000604
    lwz r4, 0x540(r3)
    li r3, 0x1
    cmpwi r4, 0x0
    beq lbl_fn_80134800_000005F8
    cmpwi r4, 0x1
    beq lbl_fn_80134800_000005F8
    li r3, 0x0
lbl_fn_80134800_000005F8:
    cmpwi r3, 0x0
    beq lbl_fn_80134800_00000604
    li r0, 0x1
lbl_fn_80134800_00000604:
    cmpwi r0, 0x0
    bne lbl_fn_80134800_00000668
    mr r21, r31
    li r20, 0x0
lbl_fn_80134800_00000614:
    cmpwi r25, 0x2
    lwz r4, 0x0(r21)
    bne lbl_fn_80134800_0000062C
    cmpw r26, r20
    bne lbl_fn_80134800_0000062C
    mr r4, r27
lbl_fn_80134800_0000062C:
    cmpwi r28, 0x2
    bne lbl_fn_80134800_00000640
    cmpw r29, r20
    bne lbl_fn_80134800_00000640
    mr r4, r30
lbl_fn_80134800_00000640:
    mr r3, r20
    bl fn_8020ED84
    mr r5, r3
    mr r3, r23
    mr r4, r22
    bl fn_8012D628
    addi r20, r20, 0x1
    addi r21, r21, 0x8
    cmpwi r20, 0x4
    blt lbl_fn_80134800_00000614
lbl_fn_80134800_00000668:
    lfs f31, lbl_80881900
    lis r3, lbl_80737348@ha
    lfd f26, lbl_80737348@l(r3)
    mr r23, r31
    fmr f30, f31
    lfs f25, lbl_80881950
    fmr f29, f31
    li r20, 0x0
    fmr f28, f31
    fmr f27, f31
lbl_fn_80134800_00000690:
    cmpwi r20, 0x1
    bne lbl_fn_80134800_000006A0
    cmpwi r24, 0x3
    bne lbl_fn_80134800_0000076C
lbl_fn_80134800_000006A0:
    cmpwi r25, 0x1
    lwz r4, 0x20(r23)
    bne lbl_fn_80134800_000006B8
    cmpw r26, r20
    bne lbl_fn_80134800_000006B8
    mr r4, r27
lbl_fn_80134800_000006B8:
    cmpwi r28, 0x1
    bne lbl_fn_80134800_000006CC
    cmpw r29, r20
    bne lbl_fn_80134800_000006CC
    mr r4, r30
lbl_fn_80134800_000006CC:
    li r3, 0x0
    bl fn_80206B14
    cmpwi r3, 0x0
    beq lbl_fn_80134800_0000075C
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x20
    bne lbl_fn_80134800_0000071C
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80134800_0000071C
    lwz r0, 0xc8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f26
    fsubs f0, f0, f26
    fmadds f29, f25, f1, f29
    fmadds f27, f25, f0, f27
lbl_fn_80134800_0000071C:
    lwzu r0, 0xd8(r3)
    cmpwi r0, 0x20
    bne lbl_fn_80134800_0000075C
    lwz r0, 0x8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80134800_0000075C
    lwz r0, 0x4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f26
    fsubs f0, f0, f26
    fmadds f29, f25, f1, f29
    fmadds f27, f25, f0, f27
lbl_fn_80134800_0000075C:
    addi r20, r20, 0x1
    addi r23, r23, 0x8
    cmpwi r20, 0x2
    blt lbl_fn_80134800_00000690
lbl_fn_80134800_0000076C:
    lis r3, lbl_80737348@ha
    lfs f26, lbl_80881950
    lfd f25, lbl_80737348@l(r3)
    li r20, 0x0
lbl_fn_80134800_0000077C:
    cmpwi r25, 0x2
    lwz r4, 0x0(r31)
    bne lbl_fn_80134800_00000794
    cmpw r26, r20
    bne lbl_fn_80134800_00000794
    mr r4, r27
lbl_fn_80134800_00000794:
    cmpwi r28, 0x2
    bne lbl_fn_80134800_000007A8
    cmpw r29, r20
    bne lbl_fn_80134800_000007A8
    mr r4, r30
lbl_fn_80134800_000007A8:
    mr r3, r20
    bl fn_8020ED84
    cmpwi r3, 0x0
    beq lbl_fn_80134800_00000890
    lwz r4, 0xe4(r3)
    cmpwi r4, 0x24
    bne lbl_fn_80134800_000007F8
    lwz r0, 0xec(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80134800_000007F8
    lwz r0, 0xe8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f25
    fsubs f0, f0, f25
    fmadds f30, f26, f1, f30
    fmadds f28, f26, f0, f28
lbl_fn_80134800_000007F8:
    cmpwi r4, 0x3a
    bne lbl_fn_80134800_00000824
    lwz r0, 0xec(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80134800_00000824
    lwz r0, 0xe8(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f25
    fmadds f31, f26, f0, f31
lbl_fn_80134800_00000824:
    lwzu r4, 0xf8(r3)
    cmpwi r4, 0x24
    bne lbl_fn_80134800_00000864
    lwz r0, 0x8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80134800_00000864
    lwz r0, 0x4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f25
    fsubs f0, f0, f25
    fmadds f30, f26, f1, f30
    fmadds f28, f26, f0, f28
lbl_fn_80134800_00000864:
    cmpwi r4, 0x3a
    bne lbl_fn_80134800_00000890
    lwz r0, 0x8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80134800_00000890
    lwz r0, 0x4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f25
    fmadds f31, f26, f0, f31
lbl_fn_80134800_00000890:
    addi r20, r20, 0x1
    addi r31, r31, 0x8
    cmpwi r20, 0x4
    blt lbl_fn_80134800_0000077C
    lwz r5, 0x84(r22)
    lis r3, lbl_80737348@ha
    lfs f0, 0x8(r22)
    li r4, 0x1
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    fmuls f30, f30, f0
    lfs f2, 0xc(r22)
    lfd f1, lbl_80737348@l(r3)
    lfd f0, 0x10(r1)
    fmuls f28, f28, f2
    lfs f2, 0x0(r22)
    fsubs f0, f0, f1
    lfs f1, 0x4(r22)
    fmuls f29, f29, f2
    fmuls f27, f27, f1
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    add r5, r5, r0
    stw r5, 0x84(r22)
    cmpwi r5, 0x1
    ble lbl_fn_80134800_00000904
    mr r4, r5
lbl_fn_80134800_00000904:
    lis r3, 0x2
    subi r0, r3, 0x7961
    cmpw r4, r0
    bge lbl_fn_80134800_00000924
    cmpwi r5, 0x1
    li r0, 0x1
    ble lbl_fn_80134800_00000924
    mr r0, r5
lbl_fn_80134800_00000924:
    lfs f1, 0x8(r22)
    lfs f0, lbl_80881904
    fadds f1, f1, f30
    stw r0, 0x84(r22)
    fcmpo cr0, f1, f0
    ble lbl_fn_80134800_00000940
    b lbl_fn_80134800_00000944
lbl_fn_80134800_00000940:
    fmr f1, f0
lbl_fn_80134800_00000944:
    lfs f2, lbl_8088191C
    fcmpo cr0, f1, f2
    bge lbl_fn_80134800_0000096C
    lfs f1, 0x8(r22)
    lfs f0, lbl_80881904
    fadds f2, f1, f30
    fcmpo cr0, f2, f0
    ble lbl_fn_80134800_00000968
    b lbl_fn_80134800_0000096C
lbl_fn_80134800_00000968:
    fmr f2, f0
lbl_fn_80134800_0000096C:
    lfs f1, 0x0(r22)
    lfs f0, lbl_80881904
    fadds f1, f1, f29
    stfs f2, 0x8(r22)
    fcmpo cr0, f1, f0
    ble lbl_fn_80134800_00000988
    b lbl_fn_80134800_0000098C
lbl_fn_80134800_00000988:
    fmr f1, f0
lbl_fn_80134800_0000098C:
    lfs f2, lbl_8088191C
    fcmpo cr0, f1, f2
    bge lbl_fn_80134800_000009B4
    lfs f1, 0x0(r22)
    lfs f0, lbl_80881904
    fadds f2, f1, f29
    fcmpo cr0, f2, f0
    ble lbl_fn_80134800_000009B0
    b lbl_fn_80134800_000009B4
lbl_fn_80134800_000009B0:
    fmr f2, f0
lbl_fn_80134800_000009B4:
    lfs f1, 0xc(r22)
    lfs f0, lbl_80881904
    fadds f1, f1, f28
    stfs f2, 0x0(r22)
    fcmpo cr0, f1, f0
    ble lbl_fn_80134800_000009D0
    b lbl_fn_80134800_000009D4
lbl_fn_80134800_000009D0:
    fmr f1, f0
lbl_fn_80134800_000009D4:
    lfs f2, lbl_8088191C
    fcmpo cr0, f1, f2
    bge lbl_fn_80134800_000009FC
    lfs f1, 0xc(r22)
    lfs f0, lbl_80881904
    fadds f2, f1, f28
    fcmpo cr0, f2, f0
    ble lbl_fn_80134800_000009F8
    b lbl_fn_80134800_000009FC
lbl_fn_80134800_000009F8:
    fmr f2, f0
lbl_fn_80134800_000009FC:
    lfs f1, 0x4(r22)
    lfs f0, lbl_80881904
    fadds f1, f1, f27
    stfs f2, 0xc(r22)
    fcmpo cr0, f1, f0
    ble lbl_fn_80134800_00000A18
    b lbl_fn_80134800_00000A1C
lbl_fn_80134800_00000A18:
    fmr f1, f0
lbl_fn_80134800_00000A1C:
    lfs f2, lbl_8088191C
    fcmpo cr0, f1, f2
    bge lbl_fn_80134800_00000A44
    lfs f1, 0x4(r22)
    lfs f0, lbl_80881904
    fadds f2, f1, f27
    fcmpo cr0, f2, f0
    ble lbl_fn_80134800_00000A40
    b lbl_fn_80134800_00000A44
lbl_fn_80134800_00000A40:
    fmr f2, f0
lbl_fn_80134800_00000A44:
    lwz r4, 0x94(r22)
    lis r3, lbl_80737348@ha
    lfd f1, lbl_80737348@l(r3)
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lfs f3, lbl_80881904
    lfd f0, 0x8(r1)
    stfs f2, 0x4(r22)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f3
    ble lbl_fn_80134800_00000A7C
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f3, f0, f1
lbl_fn_80134800_00000A7C:
    lfs f2, lbl_8088191C
    fcmpo cr0, f3, f2
    bge lbl_fn_80134800_00000AB8
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_80737348@ha
    lfs f2, lbl_80881904
    lfd f1, lbl_80737348@l(r3)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f2
    ble lbl_fn_80134800_00000AB8
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f1
lbl_fn_80134800_00000AB8:
    fctiwz f0, f2
    lis r3, 0x2
    lwz r4, 0x84(r22)
    subi r0, r3, 0x7961
    stfd f0, 0x20(r1)
    cmpw r4, r0
    lwz r3, 0x24(r1)
    stw r3, 0x94(r22)
    bge lbl_fn_80134800_00000AE0
    mr r0, r4
lbl_fn_80134800_00000AE0:
    lfs f1, 0x8(r22)
    lfs f0, lbl_8088191C
    stw r0, 0x84(r22)
    fcmpo cr0, f1, f0
    bge lbl_fn_80134800_00000AF8
    b lbl_fn_80134800_00000AFC
lbl_fn_80134800_00000AF8:
    fmr f1, f0
lbl_fn_80134800_00000AFC:
    lfs f2, 0x0(r22)
    lfs f0, lbl_8088191C
    stfs f1, 0x8(r22)
    fcmpo cr0, f2, f0
    bge lbl_fn_80134800_00000B14
    b lbl_fn_80134800_00000B18
lbl_fn_80134800_00000B14:
    fmr f2, f0
lbl_fn_80134800_00000B18:
    lfs f1, 0xc(r22)
    lfs f0, lbl_8088191C
    stfs f2, 0x0(r22)
    fcmpo cr0, f1, f0
    bge lbl_fn_80134800_00000B30
    b lbl_fn_80134800_00000B34
lbl_fn_80134800_00000B30:
    fmr f1, f0
lbl_fn_80134800_00000B34:
    lfs f2, 0x4(r22)
    lfs f0, lbl_8088191C
    stfs f1, 0xc(r22)
    fcmpo cr0, f2, f0
    bge lbl_fn_80134800_00000B4C
    b lbl_fn_80134800_00000B50
lbl_fn_80134800_00000B4C:
    fmr f2, f0
lbl_fn_80134800_00000B50:
    lwz r3, 0x94(r22)
    li r0, 0x270f
    stfs f2, 0x4(r22)
    cmpwi r3, 0x270f
    bge lbl_fn_80134800_00000B68
    mr r0, r3
lbl_fn_80134800_00000B68:
    stw r0, 0x94(r22)
lbl_fn_80134800_00000B6C:
    addi r11, r1, 0x60
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    psq_l f25, 0x68(r1), 0, 0
    lfd f25, 0x60(r1)
    bl _restgpr_20
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80135284(void)
{
    nofralloc
    lfs f0, lbl_80881958
    li r0, 0x0
    lis r5, lbl_807C7030@ha
    stw r4, 0x0(r3)
    addi r5, r5, lbl_807C7030@l
    stfs f0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x54(r3), 0, 0
    stfs f2, 0x5c(r3)
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x60(r3), 0, 0
    stfs f2, 0x68(r3)
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x6c(r3), 0, 0
    stfs f2, 0x74(r3)
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x84(r3), 0, 0
    stfs f2, 0x8c(r3)
    blr
}

asm void fn_801352F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801352F8_00000C58
    cmpwi r4, 0x0
    ble lbl_fn_801352F8_00000C58
    bl dtor_80084684
lbl_fn_801352F8_00000C58:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80135338(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x4(r3), 0, 0
    psq_l f1, 0xc(r4), 0, 0
    stfs f2, 0xc(r3)
    lfs f2, 0x14(r4)
    psq_st f1, 0x10(r3), 0, 0
    lfs f3, 0x18(r4)
    stfs f2, 0x18(r3)
    lfs f0, 0x1c(r4)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f3, 0x1c(r3)
    stfs f0, 0x20(r3)
    psq_st f1, 0x24(r3), 0, 0
    stfs f2, 0x2c(r3)
    blr
}

asm void fn_8013537C(void)
{
    nofralloc
    blr
}

asm void fn_80135380(void)
{
    nofralloc
    blr
}

asm void fn_80135384(void)
{
    nofralloc
    lfs f1, 0x0(r3)
    lfs f0, 0x0(r4)
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
    blr
}

asm void fn_8013539C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x64
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r3, lbl_8087F430
    bl fn_80370174
    bl fn_8020787C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8013539C_00000D14
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8013539C_00000D8C
lbl_fn_8013539C_00000D14:
    bl fn_80219EB4
    mr r30, r3
    bl fn_80219EBC
    mr r31, r3
    li r29, 0x0
    b lbl_fn_8013539C_00000D68
lbl_fn_8013539C_00000D2C:
    lwz r3, lbl_8087F4F0
    li r4, 0x5
    lwz r5, 0x4(r30)
    bl fn_804446BC
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8013539C_00000D60
    lwz r3, lbl_8087F4F0
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_8013539C_00000D60
    li r3, 0x1
    b lbl_fn_8013539C_00000DD0
lbl_fn_8013539C_00000D60:
    addi r30, r30, 0xd0
    addi r29, r29, 0x1
lbl_fn_8013539C_00000D68:
    cmpw r29, r31
    blt lbl_fn_8013539C_00000D2C
    lwz r3, lbl_8087F4F0
    li r4, 0x19c
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_8013539C_00000DCC
    li r3, 0x1
    b lbl_fn_8013539C_00000DD0
lbl_fn_8013539C_00000D8C:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8013539C_00000DC0
lbl_fn_8013539C_00000D98:
    lwz r4, 0x8(r31)
    lwz r3, lbl_8087F4F0
    lwzx r4, r4, r30
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_8013539C_00000DB8
    li r3, 0x1
    b lbl_fn_8013539C_00000DD0
lbl_fn_8013539C_00000DB8:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_8013539C_00000DC0:
    lwz r0, 0x4(r31)
    cmplw r29, r0
    blt lbl_fn_8013539C_00000D98
lbl_fn_8013539C_00000DCC:
    li r3, 0x0
lbl_fn_8013539C_00000DD0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801354B4(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x290
    bl _savegpr_22
    mr r29, r3
    mr r22, r4
    mr r30, r5
    mr r31, r6
    bl fn_800D1D3C
    lis r3, lbl_8077C460@ha
    li r25, 0x0
    addi r3, r3, lbl_8077C460@l
    addi r26, r29, 0x84
    stw r3, 0x0(r29)
    mr r3, r26
    stw r30, 0x48(r29)
    stw r30, 0x4c(r29)
    stw r31, 0x50(r29)
    stw r25, 0x54(r29)
    stw r25, 0x58(r29)
    stw r25, 0x5c(r29)
    stw r25, 0x60(r29)
    stw r25, 0x64(r29)
    stw r25, 0x7c(r29)
    stw r25, 0x80(r29)
    bl fn_80473E74
    lis r28, lbl_8078FBB0@ha
    addi r24, r29, 0x8c
    addi r28, r28, lbl_8078FBB0@l
    stw r28, 0x0(r26)
    mr r3, r24
    bl fn_80473E74
    lis r27, lbl_8078FEF0@ha
    lis r26, fn_802180A8@ha
    addi r27, r27, lbl_8078FEF0@l
    addi r23, r29, 0x98
    addi r26, r26, fn_802180A8@l
    stw r27, 0x0(r24)
    mr r3, r23
    stw r26, 0x8(r24)
    bl fn_80473E74
    addi r24, r29, 0xa4
    stw r27, 0x0(r23)
    mr r3, r24
    stw r26, 0x8(r23)
    bl fn_80473E74
    cmpwi r31, 0x1
    stw r28, 0x0(r24)
    stw r25, 0xac(r29)
    bne lbl_fn_801354B4_00000EC0
    li r5, 0x23a
    b lbl_fn_801354B4_00000F14
lbl_fn_801354B4_00000EC0:
    lwz r0, lbl_8087F128
    cmplw r22, r0
    bne lbl_fn_801354B4_00000ED4
    li r5, 0xef
    b lbl_fn_801354B4_00000F14
lbl_fn_801354B4_00000ED4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801354B4_00000EF4
    bl fn_8036823C
    cmpwi r3, 0x0
    beq lbl_fn_801354B4_00000EF4
    li r0, 0x1
    b lbl_fn_801354B4_00000F04
lbl_fn_801354B4_00000EF4:
    lwz r3, lbl_8087FA20
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801354B4_00000F04:
    cmpwi r0, 0x0
    li r5, 0x23a
    beq lbl_fn_801354B4_00000F14
    li r5, 0x13f
lbl_fn_801354B4_00000F14:
    lis r4, 0x80
    addi r3, r29, 0xb0
    addi r4, r4, 0x504
    bl fn_80096E94
    lfs f1, lbl_8088196C
    li r26, 0x0
    lfs f3, lbl_80881964
    addi r23, r29, 0x5b8
    lfs f2, lbl_80881968
    li r0, 0x2
    lfs f0, lbl_80881970
    li r27, -0x1
    stw r26, 0x480(r29)
    mr r3, r23
    li r4, 0x1
    stw r0, 0x510(r29)
    stfs f3, 0x514(r29)
    stw r26, 0x518(r29)
    stfs f2, 0x51c(r29)
    stw r27, 0x520(r29)
    stfs f1, 0x528(r29)
    stfs f1, 0x52c(r29)
    stfs f1, 0x530(r29)
    stfs f1, 0x534(r29)
    stfs f1, 0x538(r29)
    stfs f1, 0x53c(r29)
    stfs f3, 0x540(r29)
    stfs f3, 0x544(r29)
    stfs f3, 0x548(r29)
    stw r26, 0x54c(r29)
    stfs f1, 0x550(r29)
    stfs f1, 0x554(r29)
    stfs f1, 0x558(r29)
    stw r26, 0x55c(r29)
    stw r26, 0x560(r29)
    stw r26, 0x564(r29)
    stfs f3, 0x568(r29)
    stfs f0, 0x56c(r29)
    stfs f1, 0x570(r29)
    stfs f1, 0x574(r29)
    stfs f1, 0x578(r29)
    stfs f1, 0x57c(r29)
    stfs f1, 0x580(r29)
    stfs f1, 0x584(r29)
    stfs f1, 0x588(r29)
    stw r26, 0x58c(r29)
    stw r26, 0x590(r29)
    stw r26, 0x594(r29)
    stw r26, 0x598(r29)
    stb r26, 0x59c(r29)
    stb r26, 0x59d(r29)
    stb r26, 0x59e(r29)
    stb r26, 0x59f(r29)
    stfs f3, 0x5a0(r29)
    bl fn_80056DB8
    lfs f0, lbl_8088196C
    lis r3, lbl_80777630@ha
    addi r3, r3, lbl_80777630@l
    li r28, 0x1
    stw r3, 0x0(r23)
    addi r3, r29, 0x7d4
    stw r26, 0x610(r29)
    stw r26, 0x624(r29)
    stw r26, 0x628(r29)
    stw r26, 0x62c(r29)
    stw r26, 0x630(r29)
    stw r27, 0x634(r29)
    stw r26, 0x638(r29)
    stw r26, 0x63c(r29)
    stw r26, 0x640(r29)
    stw r28, 0x644(r29)
    stw r26, 0x648(r29)
    stw r26, 0x64c(r29)
    stw r26, 0x650(r29)
    stw r27, 0x674(r29)
    stw r26, 0x678(r29)
    stw r26, 0x67c(r29)
    stw r27, 0x6a0(r29)
    stw r26, 0x6a4(r29)
    stfs f0, 0x6b8(r29)
    stfs f0, 0x6bc(r29)
    stfs f0, 0x6c0(r29)
    stw r26, 0x6d0(r29)
    bl fn_8012B0B0
    lfs f0, lbl_8088196C
    li r0, 0x4
    stw r26, 0xc10(r29)
    addi r3, r29, 0xc58
    stfs f0, 0xc14(r29)
    stfs f0, 0xc18(r29)
    stfs f0, 0xc1c(r29)
    stw r26, 0xc38(r29)
    stw r26, 0xc3c(r29)
    stw r0, 0xc40(r29)
    stw r26, 0xc48(r29)
    stw r26, 0xc4c(r29)
    stw r30, 0xc50(r29)
    stw r28, 0xc54(r29)
    bl fn_8011BD14
    lfs f0, lbl_8088196C
    li r4, 0x2710
    li r0, 0x12c
    stw r27, 0xf14(r29)
    addi r3, r29, 0x1030
    stw r27, 0xf18(r29)
    stw r26, 0xf1c(r29)
    stw r26, 0xf50(r29)
    stw r26, 0xf54(r29)
    stw r26, 0xf58(r29)
    stw r4, 0xf5c(r29)
    stfs f0, 0xf60(r29)
    stfs f0, 0xf64(r29)
    stfs f0, 0xf68(r29)
    stfs f0, 0xf6c(r29)
    stfs f0, 0xf70(r29)
    stfs f0, 0xf74(r29)
    stfs f0, 0xf78(r29)
    stw r26, 0xf7c(r29)
    stw r26, 0xf80(r29)
    stw r26, 0xf84(r29)
    stfs f0, 0xf88(r29)
    stfs f0, 0xf8c(r29)
    stfs f0, 0xf90(r29)
    stw r27, 0xf94(r29)
    stw r0, 0xf98(r29)
    stw r26, 0xf9c(r29)
    stw r26, 0xfa0(r29)
    stfs f0, 0xfa4(r29)
    stfs f0, 0xfa8(r29)
    stfs f0, 0xfac(r29)
    stw r26, 0xfb0(r29)
    stw r26, 0xfb4(r29)
    stfs f0, 0xfb8(r29)
    stfs f0, 0xfbc(r29)
    stw r26, 0xfc0(r29)
    stw r26, 0xfc4(r29)
    stfs f0, 0xfc8(r29)
    stfs f0, 0xfcc(r29)
    stfs f0, 0xfd0(r29)
    stfs f0, 0xfd4(r29)
    stw r26, 0xfd8(r29)
    stw r26, 0xfdc(r29)
    stw r26, 0xfe0(r29)
    stw r26, 0xfe4(r29)
    stw r28, 0x1028(r29)
    stw r26, 0x102c(r29)
    bl fn_80125320
    addi r3, r29, 0x10d8
    bl fn_8012980C
    addi r3, r29, 0x1154
    bl fn_8007A75C
    addi r3, r29, 0x1188
    bl fn_8011D24C
    stw r26, 0x1208(r29)
    addi r3, r29, 0x1220
    stw r26, 0x121c(r29)
    bl fn_80120F5C
    addi r3, r29, 0x1268
    addi r4, r29, 0x12a0
    lfs f1, lbl_80881964
    cmplw r3, r4
    lfs f0, lbl_8088196C
    stw r26, 0x1254(r29)
    stfs f1, 0x1258(r29)
    stw r26, 0x125c(r29)
    stfs f0, 0x1260(r29)
    stw r26, 0x1264(r29)
    bge lbl_fn_801354B4_000011D8
    addi r0, r4, 0x7
    subf r0, r3, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801354B4_000011D8
lbl_fn_801354B4_000011C8:
    stfs f0, 0x0(r3)
    stw r26, 0x4(r3)
    addi r3, r3, 0x8
    bdnz lbl_fn_801354B4_000011C8
lbl_fn_801354B4_000011D8:
    lwz r4, 0x12a4(r29)
    li r7, 0x0
    lwz r0, 0x12a8(r29)
    li r3, 0x64
    clrlwi r4, r4, 2
    lfs f0, lbl_8088196C
    clrlwi r5, r0, 11
    li r0, -0x1
    oris r4, r4, 0x2000
    addi r8, r29, 0x12e8
    rlwinm r6, r4, 0, 5, 2
    oris r5, r5, 0x10
    rlwinm r6, r6, 0, 7, 5
    li r4, 0x2
    rlwinm r5, r5, 0, 17, 12
    stw r4, 0x12ac(r29)
    oris r6, r6, 0x100
    addi r9, r29, 0x1374
    ori r5, r5, 0x4000
    stw r7, 0x12a0(r29)
    rlwinm r4, r5, 0, 21, 17
    rlwinm r6, r6, 0, 14, 7
    oris r5, r6, 0x3
    cmplw r8, r9
    ori r4, r4, 0x400
    stw r7, 0x12b0(r29)
    rlwinm r5, r5, 0, 17, 15
    rlwinm r4, r4, 0, 24, 21
    stw r3, 0x12b4(r29)
    ori r5, r5, 0x6000
    clrrwi r5, r5, 13
    ori r4, r4, 0x80
    stw r3, 0x12b8(r29)
    clrrwi r3, r4, 7
    stw r5, 0x12a4(r29)
    stw r3, 0x12a8(r29)
    stw r0, 0x12bc(r29)
    stw r7, 0x12c0(r29)
    stw r7, 0x12c4(r29)
    stw r7, 0x12c8(r29)
    stfs f0, 0x12cc(r29)
    stw r7, 0x12d0(r29)
    stw r7, 0x12d4(r29)
    stw r7, 0x12d8(r29)
    stw r7, 0x12dc(r29)
    sth r7, 0x12e0(r29)
    stb r7, 0x12e2(r29)
    stw r7, 0x12e4(r29)
    bge lbl_fn_801354B4_000012D4
    addi r3, r9, 0x13
    li r0, 0x14
    subf r3, r8, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_801354B4_000012D4
lbl_fn_801354B4_000012B4:
    stw r7, 0x0(r8)
    stw r7, 0x4(r8)
    stw r7, 0x8(r8)
    sth r7, 0xc(r8)
    stb r7, 0xe(r8)
    stw r7, 0x10(r8)
    addi r8, r8, 0x14
    bdnz lbl_fn_801354B4_000012B4
lbl_fn_801354B4_000012D4:
    li r28, 0x0
    stw r28, 0x1374(r29)
    stw r28, 0x137c(r29)
    stw r28, 0x1380(r29)
    stw r28, 0x1384(r29)
    sth r28, 0x1388(r29)
    sth r28, 0x138a(r29)
    stw r28, 0x138c(r29)
    bl fn_80680CF8
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    lfs f0, lbl_8088196C
    rotlwi r0, r0, 2
    lfs f1, lbl_80881964
    add r3, r0, r3
    stw r3, 0x1390(r29)
    li r0, 0x4
    stw r28, 0x1398(r29)
    addi r3, r29, 0x1414
    stw r28, 0x139c(r29)
    stw r28, 0x13ac(r29)
    stw r28, 0x13b0(r29)
    stfs f1, 0x13b4(r29)
    stfs f0, 0x13d8(r29)
    stfs f0, 0x13dc(r29)
    stfs f0, 0x13e0(r29)
    stfs f0, 0x13e4(r29)
    stfs f0, 0x13e8(r29)
    stfs f0, 0x13ec(r29)
    stfs f0, 0x13f0(r29)
    stw r0, 0x13f4(r29)
    stw r28, 0x13f8(r29)
    stw r28, 0x13fc(r29)
    stw r28, 0x1400(r29)
    stw r28, 0x1404(r29)
    stw r28, 0x1408(r29)
    bl fn_800CB360
    lwz r3, 0x48(r29)
    li r0, 0x1
    lfs f1, lbl_8088196C
    lfs f0, lbl_80881974
    cmpwi r3, 0x1
    stw r28, 0x1418(r29)
    stfs f1, 0x141c(r29)
    stfs f0, 0x1420(r29)
    beq lbl_fn_801354B4_0000139C
    cmpwi r3, 0x4
    beq lbl_fn_801354B4_0000139C
    li r0, 0x0
lbl_fn_801354B4_0000139C:
    cmpwi r0, 0x0
    beq lbl_fn_801354B4_000013AC
    li r0, 0x0
    stw r0, 0xc54(r29)
lbl_fn_801354B4_000013AC:
    cmpwi r30, 0x5
    beq lbl_fn_801354B4_000014A0
    cmpwi r31, -0x1
    beq lbl_fn_801354B4_000014A0
    lwz r3, 0x50(r29)
    bl fn_8020924C
    cmpwi r3, 0x0
    stw r3, 0x60(r29)
    bne lbl_fn_801354B4_00001454
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_801354B4_00001448
    lis r3, 0x51ec
    lwz r8, 0x50(r29)
    subi r0, r3, 0x7ae1
    lis r31, lbl_807C7B28@ha
    mulhw r0, r0, r8
    lis r30, lbl_80737A9C@ha
    addi r3, r31, lbl_807C7B28@l
    addi r4, r30, lbl_80737A9C@l
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
    addi r4, r30, lbl_80737A9C@l
    addi r3, r1, 0x168
    addi r4, r4, 0xc
    addi r5, r31, lbl_807C7B28@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x168
    bl fn_800697D8
lbl_fn_801354B4_00001448:
    li r3, 0x0
    bl fn_8020924C
    stw r3, 0x60(r29)
lbl_fn_801354B4_00001454:
    lwz r4, 0x60(r29)
    addi r3, r1, 0x68
    lwz r4, 0x10(r4)
    bl fn_802092C0
    cmpwi r3, 0x0
    beq lbl_fn_801354B4_0000148C
    li r0, 0x1
    stw r0, 0xac(r29)
    addi r3, r29, 0x84
    addi r4, r1, 0x68
    lwz r12, 0x84(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801354B4_0000148C:
    lwz r3, 0x60(r29)
    lwz r3, 0x14(r3)
    bl fn_8020A81C
    stw r3, 0x5c(r29)
    b lbl_fn_801354B4_000014AC
lbl_fn_801354B4_000014A0:
    li r3, 0x0
    bl fn_8020A81C
    stw r3, 0x5c(r29)
lbl_fn_801354B4_000014AC:
    lwz r3, 0xc50(r29)
    lwz r4, 0xc54(r29)
    bl fn_80204E04
    lwz r4, 0x60(r29)
    stw r3, 0x68(r29)
    cmpwi r4, 0x0
    beq lbl_fn_801354B4_000014D4
    lwz r3, 0x28(r4)
    bl fn_8021FC00
    stw r3, 0x7c(r29)
lbl_fn_801354B4_000014D4:
    lwz r4, 0x5c(r29)
    li r0, 0x0
    lwz r3, 0x5c0(r29)
    lfs f4, 0x134(r4)
    lwz r4, 0x62c(r29)
    ori r3, r3, 0x2
    lfs f3, lbl_8088196C
    oris r3, r3, 0x8000
    lfs f2, lbl_80881964
    cmpwi r4, 0x0
    lfs f1, lbl_80881978
    lfs f0, lbl_8088197C
    stfs f4, 0x568(r29)
    stfs f3, 0xf4c(r29)
    stfs f3, 0xf44(r29)
    stfs f3, 0xf40(r29)
    stfs f3, 0xf3c(r29)
    stfs f3, 0xf38(r29)
    stfs f3, 0xf30(r29)
    stfs f3, 0xf2c(r29)
    stfs f3, 0xf28(r29)
    stfs f3, 0xf24(r29)
    stfs f2, 0xf48(r29)
    stfs f2, 0xf34(r29)
    stfs f2, 0xf20(r29)
    stfs f1, 0x5b0(r29)
    stfs f0, 0x5b4(r29)
    stfs f3, 0x5a4(r29)
    stfs f3, 0x5a8(r29)
    stfs f3, 0x5ac(r29)
    stw r3, 0x5c0(r29)
    stw r29, 0x5c4(r29)
    stw r0, 0x624(r29)
    stw r0, 0x628(r29)
    beq lbl_fn_801354B4_00001574
    beq lbl_fn_801354B4_0000156C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_801354B4_0000156C:
    li r0, 0x0
    stw r0, 0x62c(r29)
lbl_fn_801354B4_00001574:
    lwz r3, 0x60(r29)
    lfs f5, lbl_8088196C
    lfs f4, lbl_80881978
    cmpwi r3, 0x0
    lfs f3, lbl_80881980
    lfs f2, lbl_80881984
    lfs f1, lbl_80881964
    lfs f0, lbl_80881988
    stfs f5, 0x614(r29)
    stfs f5, 0x618(r29)
    stfs f5, 0x61c(r29)
    stfs f4, 0x620(r29)
    stfs f3, 0x500(r29)
    stfs f2, 0x504(r29)
    stfs f1, 0x508(r29)
    stfs f0, 0x50c(r29)
    beq lbl_fn_801354B4_0000172C
    lis r30, lbl_80737A9C@ha
    lwz r3, 0x1c(r3)
    addi r30, r30, lbl_80737A9C@l
    addi r4, r30, 0x24
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_801354B4_0000172C
    li r0, 0x0
    addi r23, r30, 0x25
    stw r0, 0x5c(r1)
    mr r3, r23
    addi r24, r1, 0x5c
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl strlen
    mr r25, r3
    mr r3, r24
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x34(r1)
    mr r3, r24
    stb r0, 0x30(r1)
    mr r6, r23
    add r7, r23, r25
    addi r8, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x5c(r1)
    lwz r3, 0x60(r29)
    srwi. r0, r0, 31
    lwz r23, 0x1c(r3)
    bne lbl_fn_801354B4_00001648
    lbz r0, 0x5c(r1)
    clrlwi r24, r0, 25
    b lbl_fn_801354B4_0000164C
lbl_fn_801354B4_00001648:
    lwz r24, 0x60(r1)
lbl_fn_801354B4_0000164C:
    lbz r0, 0x2c(r1)
    mr r3, r23
    stb r0, 0x28(r1)
    bl strlen
    mr r0, r3
    mr r4, r24
    mr r6, r23
    addi r3, r1, 0x5c
    add r7, r23, r0
    addi r8, r1, 0x28
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80737A9C@ha
    li r0, 0x0
    addi r3, r3, lbl_80737A9C@l
    stw r0, 0x44(r1)
    addi r23, r3, 0x37
    addi r24, r1, 0x44
    stw r0, 0x48(r1)
    mr r3, r23
    stw r0, 0x4c(r1)
    bl strlen
    mr r25, r3
    mr r3, r24
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r24
    stb r0, 0x20(r1)
    mr r6, r23
    add r7, r23, r25
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r24
    addi r3, r1, 0x5c
    bl fn_8006AD24
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801354B4_000016F8
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_801354B4_000016F8:
    lwz r0, 0x5c(r1)
    addi r3, r29, 0x1220
    srwi. r0, r0, 31
    bne lbl_fn_801354B4_00001710
    addi r4, r1, 0x5d
    b lbl_fn_801354B4_00001714
lbl_fn_801354B4_00001710:
    lwz r4, 0x64(r1)
lbl_fn_801354B4_00001714:
    bl fn_801210B4
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801354B4_0000172C
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_801354B4_0000172C:
    lwz r3, 0x60(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801354B4_000018B4
    lwz r3, 0x20(r3)
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_801354B4_000018B4
    lis r3, lbl_80737A9C@ha
    li r0, 0x0
    addi r3, r3, lbl_80737A9C@l
    stw r0, 0x50(r1)
    addi r23, r3, 0x3b
    addi r24, r1, 0x50
    stw r0, 0x54(r1)
    mr r3, r23
    stw r0, 0x58(r1)
    bl strlen
    mr r25, r3
    mr r3, r24
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r24
    stb r0, 0x18(r1)
    mr r6, r23
    add r7, r23, r25
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x50(r1)
    lwz r3, 0x60(r29)
    srwi. r0, r0, 31
    lwz r23, 0x20(r3)
    bne lbl_fn_801354B4_000017C4
    lbz r0, 0x50(r1)
    clrlwi r24, r0, 25
    b lbl_fn_801354B4_000017C8
lbl_fn_801354B4_000017C4:
    lwz r24, 0x54(r1)
lbl_fn_801354B4_000017C8:
    lbz r0, 0x14(r1)
    mr r3, r23
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r4, r24
    mr r6, r23
    addi r3, r1, 0x50
    add r7, r23, r0
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_80737A9C@ha
    li r0, 0x0
    addi r3, r3, lbl_80737A9C@l
    stw r0, 0x38(r1)
    addi r23, r3, 0x50
    addi r24, r1, 0x38
    stw r0, 0x3c(r1)
    mr r3, r23
    stw r0, 0x40(r1)
    bl strlen
    mr r25, r3
    mr r3, r24
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r24
    stb r0, 0x8(r1)
    mr r6, r23
    add r7, r23, r25
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r24
    addi r3, r1, 0x50
    bl fn_8006AD24
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801354B4_00001874
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_801354B4_00001874:
    lwz r0, 0x50(r1)
    addi r3, r29, 0xa4
    srwi. r0, r0, 31
    bne lbl_fn_801354B4_0000188C
    addi r4, r1, 0x51
    b lbl_fn_801354B4_00001890
lbl_fn_801354B4_0000188C:
    lwz r4, 0x58(r1)
lbl_fn_801354B4_00001890:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801354B4_000018B4
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_801354B4_000018B4:
    li r0, 0x0
    stw r0, 0x680(r29)
    addi r3, r29, 0xfe8
    li r4, 0x0
    stw r0, 0x684(r29)
    li r5, 0x40
    stw r0, 0x688(r29)
    stw r0, 0x68c(r29)
    stw r0, 0x690(r29)
    stw r0, 0x694(r29)
    stw r0, 0x698(r29)
    stw r0, 0x69c(r29)
    bl memset
    addi r3, r29, 0x120c
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r29, 0x68
    li r4, 0x0
    li r5, 0x14
    bl memset
    lwz r0, 0x12a4(r29)
    lis r3, fn_80218260@ha
    addi r3, r3, fn_80218260@l
    stw r3, 0x1184(r29)
    oris r0, r0, 0x400
    stw r0, 0x12a4(r29)
    addi r3, r29, 0x7d4
    stw r29, 0xac4(r29)
    bl fn_8013459C
    lis r5, lbl_80737A9C@ha
    li r3, 0x90
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x3
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801354B4_0000195C
    mr r4, r29
    bl fn_80135284
lbl_fn_801354B4_0000195C:
    stw r3, 0x1394(r29)
    addi r3, r29, 0x13b8
    li r4, 0x0
    li r5, 0x18
    stw r29, 0x10d4(r29)
    stw r29, 0xd08(r29)
    bl memset
    addi r3, r29, 0x13d0
    li r4, 0x0
    li r5, 0x8
    bl memset
    addi r11, r1, 0x290
    mr r3, r29
    bl _restgpr_22
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}
