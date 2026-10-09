#include "revolution/types.h"

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80626AC0(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80626F10(void);
extern void fn_80627B50(void);
extern void fn_80627CA0(void);
extern void fn_80627D30(void);
extern void fn_80627D50(void);
extern void fn_80627DE0(void);
extern void fn_80627ED0(void);
extern void fn_80628150(void);
extern void fn_80628160(void);
extern void fn_80628230(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629870(void);
extern void fn_80629EA4(void);
extern void fn_80629ED8(void);
extern void fn_80629F78(void);
extern void fn_80629F88(void);
extern void fn_80629F98(void);
extern void fn_8062EE08(void);
extern void fn_8062F470(void);
extern void fn_806305D8(void);
extern void fn_806307C8(void);
extern void fn_80630B94(void);
extern void fn_80630BA4(void);
extern void fn_80630C7C(void);
extern void fn_80630CD8(void);
extern void fn_80631210(void);
extern void fn_8063132C(void);
extern void fn_80631468(void);
extern void fn_806317D8(void);
extern void fn_80631AB4(void);
extern void fn_80631C3C(void);
extern void fn_80631CE8(void);
extern void fn_8063236C(void);
extern void fn_80632414(void);
extern void fn_80632FFC(void);
extern void fn_80633140(void);
extern void fn_806331C8(void);
extern void fn_80633214(void);
extern void fn_80633504(void);
extern void fn_80633C3C(void);
extern void fn_806340B8(void);
extern void fn_80634240(void);
extern void fn_80634250(void);
extern void fn_80634358(void);
extern void fn_8063450C(void);
extern void fn_806345F4(void);
extern void fn_8063466C(void);
extern void fn_8063472C(void);
extern void fn_806347E4(void);
extern void fn_80634920(void);
extern void fn_80635730(void);
extern void fn_806357EC(void);
extern void fn_806359BC(void);
extern void fn_806371FC(void);
extern void fn_80637274(void);
extern void fn_806372C4(void);
extern void fn_806375F0(void);
extern void fn_806376B4(void);
extern void fn_80637890(void);
extern void fn_8063A18C(void);
extern void fn_8063B494(void);
extern void fn_8063E284(void);
extern void fn_8063F8CC(void);
extern void fn_8063F910(void);
extern void fn_8063F98C(void);
extern void fn_8063FF0C(void);
extern void fn_80642B58(void);
extern void fn_80642C20(void);
extern void fn_80642D3C(void);
extern void fn_8064E72C(void);
extern void fn_8064EB00(void);
extern void fn_8064EB64(void);
extern void fn_8064EB8C(void);
extern void fn_80674430(void);
extern void fn_8068236C(void);

/* External data declarations */
extern u8 lbl_80764C58[];
extern u8 lbl_80764CF8[];
extern u8 lbl_80764D28[];
extern u8 lbl_80764D88[];
extern u8 lbl_80764DA0[];
extern u8 lbl_80764DD4[];
extern u8 lbl_80764E00[];
extern u8 lbl_80764EB8[];
extern u8 lbl_807B3320[];
extern u8 lbl_807B3334[];
extern u8 lbl_807B3358[];
extern u8 lbl_807B3378[];
extern u8 lbl_807B3398[];
extern u8 lbl_807B33D8[];
extern u8 lbl_807B33EC[];
extern u8 lbl_807B341C[];
extern u8 lbl_807B3458[];
extern u8 lbl_807B3498[];
extern u8 lbl_807B34C4[];
extern u8 lbl_8081FB78[];
extern u8 lbl_8081FC08[];
extern u8 lbl_8081FC38[];
extern u8 lbl_8081FCB4[];
extern u8 lbl_8081FDB8[];
extern u8 lbl_8081FDE8[];
extern u8 lbl_80820018[];

/* Small data declarations */
extern u32 lbl_8087EA88;
extern u32 lbl_8087EA8C;
extern u32 lbl_8087EA90;
extern u32 lbl_8087EA94;
extern u32 lbl_8087EA98;
extern u32 lbl_8087EAB0;
extern u32 lbl_8087EAD0;
extern u32 lbl_80880188;
extern u32 lbl_80888858;
extern u32 lbl_8088885A;
extern u32 lbl_80888860;
extern u32 lbl_80888868;
extern u32 lbl_80888890;

/* Function declarations */
void fn_8062A06C(void);
void fn_8062A130(void);
void fn_8062A164(void);
void fn_8062A198(void);
void fn_8062A1CC(void);
void fn_8062A230(void);
void fn_8062A31C(void);
void fn_8062A33C(void);
void fn_8062A350(void);
void fn_8062A36C(void);
void fn_8062A38C(void);
void fn_8062A3A0(void);
void fn_8062A408(void);
void fn_8062A410(void);
void fn_8062A45C(void);
void fn_8062A510(void);
void fn_8062A5B0(void);
void fn_8062A5F0(void);
void fn_8062A634(void);
void fn_8062A744(void);
void fn_8062A7F4(void);
void fn_8062A8B0(void);
void fn_8062A8B8(void);
void fn_8062A900(void);
void fn_8062A970(void);
void fn_8062AA0C(void);
void fn_8062AAE0(void);
void fn_8062AB40(void);
void fn_8062ABC4(void);
void fn_8062ACD8(void);
void fn_8062AEFC(void);
void fn_8062B068(void);
void fn_8062B0CC(void);
void fn_8062B334(void);
void fn_8062B34C(void);
void fn_8062B39C(void);
void fn_8062B424(void);
void fn_8062B470(void);
void fn_8062B4B4(void);
void fn_8062B4FC(void);
void fn_8062B544(void);
void fn_8062B588(void);
void fn_8062B5CC(void);
void fn_8062B628(void);
void fn_8062B640(void);
void fn_8062B7E0(void);
void fn_8062B8C0(void);
void fn_8062B908(void);
void fn_8062B998(void);
void fn_8062B9E4(void);
void fn_8062BA24(void);
void fn_8062BAB0(void);
void fn_8062BB38(void);
void fn_8062BB3C(void);
void fn_8062BC04(void);
void fn_8062BCC4(void);
void fn_8062BDF4(void);
void fn_8062BDFC(void);
void fn_8062BE98(void);
void fn_8062BF1C(void);
void fn_8062BF44(void);
void fn_8062BF80(void);
void fn_8062C074(void);
void fn_8062C0E4(void);
void fn_8062C364(void);
void fn_8062C380(void);
void fn_8062C3EC(void);
void fn_8062C458(void);
void fn_8062C53C(void);
void fn_8062C774(void);
void fn_8062C87C(void);
void fn_8062C900(void);
void fn_8062C91C(void);
void fn_8062C920(void);
void fn_8062C970(void);
void fn_8062C9F8(void);
void fn_8062CA30(void);
void fn_8062CA68(void);
void fn_8062CACC(void);
void fn_8062CB24(void);
void fn_8062CBA8(void);
void fn_8062CBE0(void);
void fn_8062CC6C(void);
void fn_8062CD5C(void);
void fn_8062CDA4(void);
void fn_8062CDDC(void);
void fn_8062CE74(void);
void fn_8062CF3C(void);
void fn_8062CFA4(void);
void fn_8062CFBC(void);
void fn_8062D33C(void);
void fn_8062D6BC(void);
void fn_8062D734(void);
void fn_8062D82C(void);
void fn_8062D94C(void);
void fn_8062D958(void);
void fn_8062DACC(void);
void fn_8062DBD0(void);

asm void fn_8062A06C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8081FB78@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8081FB78@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x80(r6)
    cmpwi r12, 0x0
    beq lbl_fn_8062A06C_00000050
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x1
    mtctr r12
    bctrl
lbl_fn_8062A06C_00000050:
    lis r3, lbl_8081FB78@ha
    addi r3, r3, lbl_8081FB78@l
    lwz r12, 0x84(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8062A06C_0000007C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x1
    mtctr r12
    bctrl
lbl_fn_8062A06C_0000007C:
    lis r3, lbl_8081FB78@ha
    addi r3, r3, lbl_8081FB78@l
    lwz r12, 0x88(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8062A06C_000000A8
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x1
    mtctr r12
    bctrl
lbl_fn_8062A06C_000000A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062A130(void)
{
    nofralloc
    lis r6, lbl_8081FB78@ha
    mr r0, r4
    addi r6, r6, lbl_8081FB78@l
    lwz r12, 0x84(r6)
    mr r6, r5
    cmpwi r12, 0x0
    beqlr
    mr r4, r3
    mr r5, r0
    li r3, 0x5
    mtctr r12
    bctr
    blr
}

asm void fn_8062A164(void)
{
    nofralloc
    lis r6, lbl_8081FB78@ha
    mr r0, r4
    addi r6, r6, lbl_8081FB78@l
    lwz r12, 0x84(r6)
    mr r6, r5
    cmpwi r12, 0x0
    beqlr
    mr r4, r3
    mr r5, r0
    li r3, 0x6
    mtctr r12
    bctr
    blr
}

asm void fn_8062A198(void)
{
    nofralloc
    lis r6, lbl_8081FB78@ha
    mr r0, r4
    addi r6, r6, lbl_8081FB78@l
    lwz r12, 0x84(r6)
    mr r6, r5
    cmpwi r12, 0x0
    beqlr
    mr r4, r3
    mr r5, r0
    li r3, 0x7
    mtctr r12
    bctr
    blr
}

asm void fn_8062A1CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x8c
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8081FB78@ha
    addi r3, r31, lbl_8081FB78@l
    bl memset
    lwz r5, lbl_8087EAB0
    addi r31, r31, lbl_8081FB78@l
    addi r3, r31, 0x68
    li r4, 0x3e8
    lbz r5, 0x3(r5)
    bl fn_8062A410
    bl fn_80628230
    stb r3, 0x7d(r31)
    lwz r3, lbl_8087EAB0
    lbz r0, 0x4(r3)
    stb r0, lbl_80880188
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A230(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, lbl_80880188
    cmplwi r0, 0x4
    blt lbl_fn_8062A230_00000200
    lis r4, lbl_807B3320@ha
    lhz r5, 0x0(r30)
    addi r4, r4, lbl_807B3320@l
    li r3, 0x503
    bl fn_80629830
lbl_fn_8062A230_00000200:
    lis r3, lbl_8081FB78@ha
    lhz r4, 0x0(r30)
    addi r3, r3, lbl_8081FB78@l
    lbz r0, 0x7e(r3)
    srawi r5, r4, 8
    cmpwi r0, 0x0
    beq lbl_fn_8062A230_00000234
    cmplwi r4, 0x101
    bne lbl_fn_8062A230_00000228
    bl fn_8062C900
lbl_fn_8062A230_00000228:
    mr r3, r30
    bl fn_80626D50
    b lbl_fn_8062A230_00000298
lbl_fn_8062A230_00000234:
    clrlwi r0, r5, 24
    cmplwi r0, 0x1a
    bge lbl_fn_8062A230_00000268
    clrlslwi r0, r5, 24, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    beq lbl_fn_8062A230_00000268
    lwz r12, 0x0(r3)
    mr r3, r30
    mtctr r12
    bctrl
    mr r31, r3
    b lbl_fn_8062A230_00000288
lbl_fn_8062A230_00000268:
    lbz r0, lbl_80880188
    cmplwi r0, 0x2
    blt lbl_fn_8062A230_00000288
    lis r4, lbl_807B3334@ha
    clrlwi r5, r5, 24
    addi r4, r4, lbl_807B3334@l
    li r3, 0x501
    bl fn_80629830
lbl_fn_8062A230_00000288:
    clrlwi. r0, r31, 24
    beq lbl_fn_8062A230_00000298
    mr r3, r30
    bl fn_80626D50
lbl_fn_8062A230_00000298:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A31C(void)
{
    nofralloc
    lis r3, lbl_8081FB78@ha
    addi r3, r3, lbl_8081FB78@l
    lbz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bnelr
    addi r3, r3, 0x68
    b fn_8062A45C
    blr
}

asm void fn_8062A33C(void)
{
    nofralloc
    lis r5, lbl_8081FB78@ha
    clrlslwi r0, r3, 24, 2
    addi r5, r5, lbl_8081FB78@l
    stwx r4, r5, r0
    blr
}

asm void fn_8062A350(void)
{
    nofralloc
    lwz r4, lbl_8087EAB0
    lis r6, lbl_8081FB78@ha
    addi r6, r6, lbl_8081FB78@l
    mr r5, r3
    lbz r3, 0x7d(r6)
    lbz r4, 0x2(r4)
    b fn_80626F10
}

asm void fn_8062A36C(void)
{
    nofralloc
    lis r7, lbl_8081FB78@ha
    mr r0, r4
    addi r7, r7, lbl_8081FB78@l
    mr r6, r5
    mr r4, r3
    mr r5, r0
    addi r3, r7, 0x68
    b fn_8062A510
}

asm void fn_8062A38C(void)
{
    nofralloc
    lis r5, lbl_8081FB78@ha
    mr r4, r3
    addi r5, r5, lbl_8081FB78@l
    addi r3, r5, 0x68
    b fn_8062A5B0
}

asm void fn_8062A3A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8081FB78@ha
    addi r31, r31, lbl_8081FB78@l
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_8062A3A0_00000354:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8062A3A0_00000374
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8062A3A0_00000374
    mtctr r12
    bctrl
lbl_fn_8062A3A0_00000374:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x1a
    blt lbl_fn_8062A3A0_00000354
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A408(void)
{
    nofralloc
    stb r3, lbl_80880188
    blr
}

asm void fn_8062A410(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80627D30
    stw r30, 0xc(r29)
    stb r31, 0x10(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062A45C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0xc(r3)
    bl fn_80627D50
    b lbl_fn_8062A45C_00000464
lbl_fn_8062A45C_00000414:
    mr r3, r30
    mr r4, r31
    bl fn_80627ED0
    lwz r12, 0x8(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8062A45C_0000043C
    mr r3, r31
    mtctr r12
    bctrl
    b lbl_fn_8062A45C_00000464
lbl_fn_8062A45C_0000043C:
    lhz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8062A45C_00000464
    li r3, 0x8
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062A45C_00000464
    lhz r0, 0x14(r31)
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062A45C_00000464:
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_8062A45C_0000047C
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8062A45C_00000414
lbl_fn_8062A45C_0000047C:
    cmpwi r31, 0x0
    bne lbl_fn_8062A45C_0000048C
    lbz r3, 0x10(r30)
    bl fn_80627CA0
lbl_fn_8062A45C_0000048C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A510(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8062A510_00000504
    lis r4, 0x6666
    lwz r0, 0xc(r28)
    addi r4, r4, 0x6667
    lbz r3, 0x10(r3)
    mulhw r0, r4, r0
    li r5, 0x1
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_80627B50
lbl_fn_8062A510_00000504:
    mr r3, r28
    mr r4, r29
    bl fn_80627ED0
    sth r30, 0x14(r29)
    mr r3, r28
    mr r4, r29
    stw r31, 0xc(r29)
    bl fn_80627DE0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062A5B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80627ED0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8062A5B0_00000570
    lbz r3, 0x10(r31)
    bl fn_80627CA0
lbl_fn_8062A5B0_00000570:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A5F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062A5F0_000005B4
    mr r3, r0
    bl fn_80626D50
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8062A5F0_000005B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A634(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8081FC38@ha
    li r5, 0x7c
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r4, lbl_8081FC38@l
    li r4, 0x0
    bl memset
    lis r3, lbl_8081FDB8@ha
    li r4, 0x0
    addi r3, r3, lbl_8081FDB8@l
    li r5, 0x2e
    bl memset
    lis r31, lbl_80764C58@ha
    addi r3, r1, 0x8
    addi r4, r31, lbl_80764C58@l
    li r5, 0x3
    bl memcpy
    addi r3, r1, 0x8
    bl fn_80633214
    lis r4, lbl_8081FCB4@ha
    lwz r0, 0x8(r30)
    addi r4, r4, lbl_8081FCB4@l
    lis r3, lbl_80764D88@ha
    stw r0, 0x50(r4)
    addi r3, r3, lbl_80764D88@l
    bl fn_806371FC
    addi r31, r31, lbl_80764C58@l
    lhz r3, 0x8(r31)
    bl fn_80630B94
    lhz r3, 0x6(r31)
    bl fn_80633504
    lhz r3, 0x4(r31)
    bl fn_806307C8
    lis r3, fn_8062C074@ha
    addi r3, r3, fn_8062C074@l
    bl fn_80631210
    lis r3, fn_8062BF1C@ha
    addi r3, r3, fn_8062BF1C@l
    bl fn_80633140
    lis r3, fn_8062C774@ha
    addi r3, r3, fn_8062C774@l
    bl fn_80629F78
    lis r31, fn_8062C53C@ha
    addi r3, r31, fn_8062C53C@l
    bl fn_80629F88
    bl fn_8062CF3C
    lis r3, lbl_8081FC08@ha
    li r4, 0x0
    addi r3, r3, lbl_8081FC08@l
    li r5, 0x2d
    bl memset
    addi r3, r31, fn_8062C53C@l
    bl fn_80629F88
    lis r3, fn_8062C458@ha
    li r4, 0x0
    addi r3, r3, fn_8062C458@l
    bl fn_80642D3C
    bl fn_8063B494
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062A744(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_80888890
    li r4, 0x0
    stw r0, 0x14(r1)
    bl fn_80642C20
    bl fn_8062A3A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80633C3C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806340B8
    bl fn_8062CFA4
    bl fn_80630C7C
    clrlwi. r0, r3, 16
    bne lbl_fn_8062A744_0000074C
    lis r6, fn_8062C364@ha
    lis r3, lbl_8081FCB4@ha
    addi r3, r3, lbl_8081FCB4@l
    li r4, 0x0
    addi r6, r6, fn_8062C364@l
    li r5, 0x3e8
    stw r6, 0x7c(r3)
    addi r3, r3, 0x74
    bl fn_8062A36C
    b lbl_fn_8062A744_00000778
lbl_fn_8062A744_0000074C:
    lis r6, lbl_8081FCB4@ha
    lis r5, fn_8062A7F4@ha
    addi r6, r6, lbl_8081FCB4@l
    li r0, 0x1
    addi r5, r5, fn_8062A7F4@l
    stb r0, 0x72(r6)
    addi r3, r6, 0x74
    li r4, 0x0
    stw r5, 0x7c(r6)
    li r5, 0x1388
    bl fn_8062A36C
lbl_fn_8062A744_00000778:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A7F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, lbl_80880188
    cmplwi r0, 0x4
    blt lbl_fn_8062A7F4_000007B8
    lis r4, lbl_807B3358@ha
    li r3, 0x503
    addi r4, r4, lbl_807B3358@l
    bl fn_80629810
lbl_fn_8062A7F4_000007B8:
    bl fn_80630C7C
    clrlwi. r0, r3, 16
    beq lbl_fn_8062A7F4_00000808
    lis r3, lbl_8081FCB4@ha
    addi r31, r3, lbl_8081FCB4@l
    lbz r0, 0x101(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8062A7F4_00000808
    li r30, 0x0
    b lbl_fn_8062A7F4_000007F4
lbl_fn_8062A7F4_000007E0:
    clrlwi r0, r30, 24
    mulli r0, r0, 0xb
    add r3, r31, r0
    bl fn_806317D8
    addi r30, r30, 0x1
lbl_fn_8062A7F4_000007F4:
    lbz r0, 0x4d(r31)
    clrlwi r3, r30, 24
    cmplw r3, r0
    blt lbl_fn_8062A7F4_000007E0
    b lbl_fn_8062A7F4_0000082C
lbl_fn_8062A7F4_00000808:
    lis r5, lbl_8081FCB4@ha
    li r0, 0x0
    addi r5, r5, lbl_8081FCB4@l
    li r3, 0x1
    lwz r12, 0x50(r5)
    li r4, 0x0
    stb r0, 0x72(r5)
    mtctr r12
    bctrl
lbl_fn_8062A7F4_0000082C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A8B0(void)
{
    nofralloc
    addi r3, r3, 0x8
    b fn_80632FFC
}

asm void fn_8062A8B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r3, 0x8(r3)
    bl fn_80633C3C
    lbz r3, 0x9(r31)
    li r4, 0x0
    li r5, 0x0
    bl fn_806340B8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062A900(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r3, 0x8
    bl fn_8063A18C
    cmpwi r3, 0x0
    beq lbl_fn_8062A900_000008CC
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x8
    bl memcpy
    b lbl_fn_8062A900_000008DC
lbl_fn_8062A900_000008CC:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
lbl_fn_8062A900_000008DC:
    lbz r4, 0xe(r31)
    addi r3, r31, 0x8
    addi r5, r31, 0xf
    addi r6, r1, 0x8
    bl fn_80637890
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062A970(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r3, 0x8
    bl fn_8063A18C
    cmpwi r3, 0x0
    beq lbl_fn_8062A970_0000093C
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x8
    bl memcpy
    b lbl_fn_8062A970_0000094C
lbl_fn_8062A970_0000093C:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
lbl_fn_8062A970_0000094C:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8062A970_00000974
    lbz r5, 0xf(r31)
    addi r3, r31, 0x8
    addi r6, r31, 0x10
    addi r7, r1, 0x8
    li r4, 0x0
    bl fn_806375F0
    b lbl_fn_8062A970_0000098C
lbl_fn_8062A970_00000974:
    addi r3, r31, 0x8
    addi r7, r1, 0x8
    li r4, 0xb
    li r5, 0x0
    li r6, 0x0
    bl fn_806375F0
lbl_fn_8062A970_0000098C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062AA0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r3, 0x8
    bl fn_8063A18C
    cmpwi r3, 0x0
    beq lbl_fn_8062AA0C_000009D8
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x8
    bl memcpy
    b lbl_fn_8062AA0C_000009E8
lbl_fn_8062AA0C_000009D8:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
lbl_fn_8062AA0C_000009E8:
    lbz r0, 0xf(r31)
    cmplwi r0, 0x2
    beq lbl_fn_8062AA0C_00000A50
    cmpwi r0, 0x0
    bne lbl_fn_8062AA0C_00000A3C
    lbz r0, 0xe(r31)
    cmplwi r0, 0x17
    bgt lbl_fn_8062AA0C_00000A3C
    lis r3, lbl_80764D28@ha
    clrlslwi r0, r0, 24, 2
    addi r3, r3, lbl_80764D28@l
    addi r5, r1, 0x8
    lwzx r4, r3, r0
    li r3, 0x1
    rlwinm r0, r4, 0, 19, 26
    rlwinm r6, r4, 29, 22, 29
    subf r0, r0, r4
    lwzx r4, r5, r6
    slw r0, r3, r0
    or r0, r4, r0
    stwx r0, r5, r6
lbl_fn_8062AA0C_00000A3C:
    addi r3, r31, 0x8
    addi r5, r1, 0x8
    li r4, 0x0
    bl fn_806376B4
    b lbl_fn_8062AA0C_00000A60
lbl_fn_8062AA0C_00000A50:
    addi r3, r31, 0x8
    addi r5, r1, 0x8
    li r4, 0xb
    bl fn_806376B4
lbl_fn_8062AA0C_00000A60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062AAE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x0
    bl fn_80634920
    lwz r0, 0x18(r31)
    lis r3, lbl_8081FC38@ha
    lis r4, fn_8062B908@ha
    lis r5, fn_8062B998@ha
    stw r0, lbl_8081FC38@l(r3)
    addi r6, r3, lbl_8081FC38@l
    addi r3, r31, 0x8
    addi r4, r4, fn_8062B908@l
    lwz r0, 0x14(r31)
    addi r5, r5, fn_8062B998@l
    stw r0, 0x8(r6)
    bl fn_80634358
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062AB40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    bl fn_80634920
    bl fn_80634240
    clrlwi. r0, r3, 16
    beq lbl_fn_8062AB40_00000B30
    bl fn_80634250
    lis r4, lbl_8081FC38@ha
    li r3, 0x4
    lwz r12, lbl_8081FC38@l(r4)
    li r4, 0x0
    mtctr r12
    bctrl
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062AB40_00000B48
    li r0, 0x207
    sth r0, 0x0(r3)
    bl fn_8062A350
    b lbl_fn_8062AB40_00000B48
lbl_fn_8062AB40_00000B30:
    lis r3, lbl_8081FC38@ha
    addi r3, r3, lbl_8081FC38@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8062AB40_00000B48
    bl fn_806345F4
lbl_fn_8062AB40_00000B48:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062ABC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8081FC38@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    addi r31, r4, lbl_8081FC38@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x14(r3)
    stw r5, lbl_8081FC38@l(r4)
    lis r4, fn_8062B9E4@ha
    lwz r5, 0x10(r3)
    addi r3, r4, fn_8062B9E4@l
    stw r5, 0x8(r31)
    stw r5, 0xc(r31)
    stb r0, 0x70(r31)
    stw r0, 0x10(r31)
    stb r0, 0x20(r31)
    bl fn_80637274
    addi r3, r31, 0x1a
    addi r4, r30, 0x8
    bl fn_80629EA4
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8062ABC4_00000BCC
    addi r3, r31, 0x1a
    bl fn_8062B640
    b lbl_fn_8062ABC4_00000C54
lbl_fn_8062ABC4_00000BCC:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r4, 0x64c(r3)
    cmplwi r4, 0x7530
    bge lbl_fn_8062ABC4_00000BF0
    addi r5, r4, 0x64
    addi r3, r31, 0x58
    li r4, 0x205
    bl fn_8062A36C
lbl_fn_8062ABC4_00000BF0:
    lis r31, lbl_8081FC38@ha
    lis r4, fn_8062BAB0@ha
    addi r31, r31, lbl_8081FC38@l
    addi r3, r31, 0x1a
    addi r4, r4, fn_8062BAB0@l
    bl fn_8063450C
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_8062ABC4_00000C54
    addi r3, r31, 0x58
    bl fn_8062A38C
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8062ABC4_00000C54
    addi r3, r3, 0x8
    addi r4, r31, 0x1a
    bl fn_80629EA4
    li r3, 0x0
    li r0, 0x204
    stb r3, 0xe(r30)
    mr r3, r30
    sth r0, 0x0(r30)
    bl fn_8062A350
lbl_fn_8062ABC4_00000C54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062ACD8(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_27
    mr r31, r3
    li r27, 0x1
    bl fn_8063472C
    lis r28, lbl_8081FC38@ha
    cmpwi r3, 0x0
    addi r29, r28, lbl_8081FC38@l
    stw r3, 0x4(r29)
    beq lbl_fn_8062ACD8_00000E24
    lwz r0, 0x8(r29)
    li r27, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8062ACD8_00000D24
    addi r3, r3, 0x2
    bl fn_80630BA4
    clrlwi. r0, r3, 24
    beq lbl_fn_8062ACD8_00000CCC
    li r0, 0x0
    stb r0, 0x78(r29)
    b lbl_fn_8062ACD8_00000CD4
lbl_fn_8062ACD8_00000CCC:
    li r0, 0x1
    stb r0, 0x78(r29)
lbl_fn_8062ACD8_00000CD4:
    lis r30, lbl_8081FC38@ha
    lis r3, fn_8062B9E4@ha
    addi r30, r30, lbl_8081FC38@l
    li r29, 0x0
    stb r29, 0x79(r30)
    addi r3, r3, fn_8062B9E4@l
    bl fn_80637274
    lwz r0, 0x8(r30)
    addi r3, r30, 0x1a
    lwz r4, 0x4(r30)
    stb r29, 0x70(r30)
    addi r4, r4, 0x2
    stw r29, 0x10(r30)
    stw r0, 0xc(r30)
    stb r29, 0x20(r30)
    bl fn_80629EA4
    lwz r3, 0x4(r30)
    addi r3, r3, 0x2
    bl fn_8062B640
    b lbl_fn_8062ACD8_00000E24
lbl_fn_8062ACD8_00000D24:
    li r27, 0x1
    li r30, 0x0
    b lbl_fn_8062ACD8_00000E18
lbl_fn_8062ACD8_00000D30:
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8062ACD8_00000D68
    addi r3, r1, 0x8
    addi r4, r4, 0x2
    bl fn_80629EA4
    lwz r12, lbl_8081FC38@l(r28)
    addi r4, r1, 0x8
    stb r30, 0xe(r1)
    li r3, 0x2
    stw r30, 0x108(r1)
    mtctr r12
    bctrl
    b lbl_fn_8062ACD8_00000E0C
lbl_fn_8062ACD8_00000D68:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r4, 0x64c(r3)
    cmplwi r4, 0x7530
    bge lbl_fn_8062ACD8_00000D94
    lis r3, lbl_8081FC38@ha
    addi r5, r4, 0x64
    addi r3, r3, lbl_8081FC38@l
    li r4, 0x205
    addi r3, r3, 0x58
    bl fn_8062A36C
lbl_fn_8062ACD8_00000D94:
    lis r30, lbl_8081FC38@ha
    lis r4, fn_8062BA24@ha
    addi r30, r30, lbl_8081FC38@l
    lwz r3, 0x4(r30)
    addi r4, r4, fn_8062BA24@l
    addi r3, r3, 0x2
    bl fn_8063450C
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_8062ACD8_00000E04
    addi r3, r30, 0x58
    bl fn_8062A38C
    lwz r4, 0x4(r30)
    li r3, 0x110
    addi r28, r4, 0x2
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8062ACD8_00000E04
    mr r4, r28
    addi r3, r3, 0x8
    bl fn_80629EA4
    li r3, 0x0
    li r0, 0x204
    stb r3, 0xe(r29)
    mr r3, r29
    sth r0, 0x0(r29)
    bl fn_8062A350
lbl_fn_8062ACD8_00000E04:
    li r27, 0x0
    b lbl_fn_8062ACD8_00000E24
lbl_fn_8062ACD8_00000E0C:
    lwz r3, 0x4(r29)
    bl fn_806347E4
    stw r3, 0x4(r29)
lbl_fn_8062ACD8_00000E18:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    bne lbl_fn_8062ACD8_00000D30
lbl_fn_8062ACD8_00000E24:
    cmpwi r27, 0x0
    beq lbl_fn_8062ACD8_00000E58
    lis r4, lbl_8081FC38@ha
    li r0, 0x0
    addi r4, r4, lbl_8081FC38@l
    li r3, 0x110
    stw r0, 0x8(r4)
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062ACD8_00000E58
    li r0, 0x207
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062ACD8_00000E58:
    lis r3, lbl_8081FC38@ha
    lbz r0, 0x8(r31)
    lwz r12, lbl_8081FC38@l(r3)
    addi r4, r1, 0x110
    stb r0, 0x110(r1)
    li r3, 0x1
    mtctr r12
    bctrl
    addi r11, r1, 0x230
    bl _restgpr_27
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_8062AEFC(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_27
    lis r28, lbl_8081FC38@ha
    mr r31, r3
    li r27, 0x1
    li r30, 0x0
    addi r29, r28, lbl_8081FC38@l
    b lbl_fn_8062AEFC_00000F94
lbl_fn_8062AEFC_00000EBC:
    lwz r4, 0x4(r29)
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8062AEFC_00000EF8
    addi r3, r1, 0x8
    addi r4, r4, 0x2
    bl fn_80629EA4
    lwz r12, lbl_8081FC38@l(r28)
    addi r4, r1, 0x8
    stb r30, 0xe(r1)
    li r3, 0x2
    stw r30, 0x108(r1)
    mtctr r12
    bctrl
    b lbl_fn_8062AEFC_00000F94
lbl_fn_8062AEFC_00000EF8:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r4, 0x64c(r3)
    cmplwi r4, 0x7530
    bge lbl_fn_8062AEFC_00000F1C
    addi r5, r4, 0x64
    addi r3, r29, 0x58
    li r4, 0x205
    bl fn_8062A36C
lbl_fn_8062AEFC_00000F1C:
    lis r30, lbl_8081FC38@ha
    lis r4, fn_8062BA24@ha
    addi r30, r30, lbl_8081FC38@l
    lwz r3, 0x4(r30)
    addi r4, r4, fn_8062BA24@l
    addi r3, r3, 0x2
    bl fn_8063450C
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_8062AEFC_00000F8C
    addi r3, r30, 0x58
    bl fn_8062A38C
    lwz r4, 0x4(r30)
    li r3, 0x110
    addi r28, r4, 0x2
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8062AEFC_00000F8C
    mr r4, r28
    addi r3, r3, 0x8
    bl fn_80629EA4
    li r3, 0x0
    li r0, 0x204
    stb r3, 0xe(r29)
    mr r3, r29
    sth r0, 0x0(r29)
    bl fn_8062A350
lbl_fn_8062AEFC_00000F8C:
    li r27, 0x0
    b lbl_fn_8062AEFC_00000FA8
lbl_fn_8062AEFC_00000F94:
    lwz r3, 0x4(r29)
    bl fn_806347E4
    cmpwi r3, 0x0
    stw r3, 0x4(r29)
    bne lbl_fn_8062AEFC_00000EBC
lbl_fn_8062AEFC_00000FA8:
    cmpwi r27, 0x0
    beq lbl_fn_8062AEFC_00000FCC
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062AEFC_00000FCC
    li r0, 0x207
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062AEFC_00000FCC:
    lis r3, lbl_8081FC38@ha
    addi r4, r31, 0x8
    lwz r12, lbl_8081FC38@l(r3)
    li r3, 0x2
    mtctr r12
    bctrl
    addi r11, r1, 0x130
    bl _restgpr_27
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8062B068(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062B068_0000102C
    li r0, 0x207
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062B068_0000102C:
    li r0, 0x0
    lis r5, lbl_8081FC38@ha
    stw r0, 0x108(r31)
    addi r4, r31, 0x8
    li r3, 0x2
    lwz r12, lbl_8081FC38@l(r5)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B0CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    lhz r5, 0x8(r3)
    li r3, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_8062B0CC_0000109C
    cmplwi r5, 0xfff0
    beq lbl_fn_8062B0CC_0000109C
    cmplwi r5, 0xfff4
    bne lbl_fn_8062B0CC_000011EC
lbl_fn_8062B0CC_0000109C:
    lis r6, lbl_8081FC38@ha
    lis r4, lbl_80764CF8@ha
    addi r6, r6, lbl_8081FC38@l
    cmplwi r5, 0xfff4
    lbz r5, 0x70(r6)
    addi r4, r4, lbl_80764CF8@l
    subi r0, r5, 0x1
    slwi r0, r0, 1
    lhzx r30, r4, r0
    beq lbl_fn_8062B0CC_000010DC
    lwz r3, 0x14(r6)
    mr r4, r30
    li r5, 0x0
    bl fn_8064EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8062B0CC_0000113C
lbl_fn_8062B0CC_000010DC:
    cmplwi r30, 0x1200
    bne lbl_fn_8062B0CC_0000110C
    cmpwi r3, 0x0
    beq lbl_fn_8062B0CC_00001110
    lis r4, 0x1
    subi r0, r4, 0x7fff
    clrlwi r4, r0, 16
    bl fn_8064EB64
    cmpwi r3, 0x0
    beq lbl_fn_8062B0CC_00001110
    li r29, 0x1
    b lbl_fn_8062B0CC_00001110
lbl_fn_8062B0CC_0000110C:
    li r29, 0x1
lbl_fn_8062B0CC_00001110:
    cmpwi r29, 0x0
    beq lbl_fn_8062B0CC_0000113C
    lis r6, lbl_8081FC38@ha
    li r4, 0x1
    addi r6, r6, lbl_8081FC38@l
    lbz r3, 0x70(r6)
    lwz r5, 0x10(r6)
    subi r0, r3, 0x1
    slw r0, r4, r0
    or r0, r5, r0
    stw r0, 0x10(r6)
lbl_fn_8062B0CC_0000113C:
    lis r30, lbl_8081FC38@ha
    addi r30, r30, lbl_8081FC38@l
    lwz r3, 0x14(r30)
    bl fn_80626D50
    lwz r0, 0xc(r30)
    li r31, 0x0
    stw r31, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8062B0CC_0000116C
    addi r3, r30, 0x1a
    bl fn_8062B640
    b lbl_fn_8062B0CC_000012AC
lbl_fn_8062B0CC_0000116C:
    lis r3, fn_8062B9E4@ha
    addi r3, r3, fn_8062B9E4@l
    bl fn_806372C4
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8062B0CC_000012AC
    li r0, 0x208
    addi r4, r30, 0x1a
    sth r0, 0x0(r3)
    stb r31, 0x10c(r3)
    lwz r0, 0x10(r30)
    stw r0, 0x108(r3)
    addi r3, r3, 0x8
    bl fn_80629EA4
    lbz r0, 0x20(r30)
    addi r31, r30, 0x20
    extsb. r0, r0
    bne lbl_fn_8062B0CC_000011D0
    addi r3, r30, 0x1a
    bl fn_80631CE8
    cmpwi r3, 0x0
    beq lbl_fn_8062B0CC_000011D0
    mr r31, r3
lbl_fn_8062B0CC_000011D0:
    mr r4, r31
    addi r3, r29, 0xe
    li r5, 0x20
    bl fn_8068236C
    mr r3, r29
    bl fn_8062A350
    b lbl_fn_8062B0CC_000012AC
lbl_fn_8062B0CC_000011EC:
    cmplwi r5, 0xfff1
    beq lbl_fn_8062B0CC_00001204
    addi r0, r5, 0xa
    clrlwi r0, r0, 16
    cmplwi r0, 0x1
    bgt lbl_fn_8062B0CC_00001214
lbl_fn_8062B0CC_00001204:
    lis r3, lbl_8081FC38@ha
    li r0, 0x0
    addi r3, r3, lbl_8081FC38@l
    stb r0, 0x78(r3)
lbl_fn_8062B0CC_00001214:
    lis r31, lbl_8081FC38@ha
    addi r31, r31, lbl_8081FC38@l
    lwz r3, 0x14(r31)
    bl fn_80626D50
    li r0, 0x0
    lis r3, fn_8062B9E4@ha
    stw r0, 0x14(r31)
    addi r3, r3, fn_8062B9E4@l
    bl fn_806372C4
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8062B0CC_000012AC
    li r4, 0x208
    li r0, 0x1
    sth r4, 0x0(r3)
    addi r4, r31, 0x1a
    stb r0, 0x10c(r3)
    lwz r0, 0x10(r31)
    stw r0, 0x108(r3)
    addi r3, r3, 0x8
    bl fn_80629EA4
    lbz r0, 0x20(r31)
    addi r30, r31, 0x20
    extsb. r0, r0
    bne lbl_fn_8062B0CC_00001294
    addi r3, r31, 0x1a
    bl fn_80631CE8
    cmpwi r3, 0x0
    beq lbl_fn_8062B0CC_00001294
    mr r30, r3
lbl_fn_8062B0CC_00001294:
    mr r4, r30
    addi r3, r29, 0xe
    li r5, 0x20
    bl fn_8068236C
    mr r3, r29
    bl fn_8062A350
lbl_fn_8062B0CC_000012AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062B334(void)
{
    nofralloc
    lis r4, lbl_8081FC38@ha
    li r3, 0x3
    lwz r12, lbl_8081FC38@l(r4)
    li r4, 0x0
    mtctr r12
    bctr
}

asm void fn_8062B34C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8081FC38@ha
    stw r0, 0x14(r1)
    lwz r12, lbl_8081FC38@l(r4)
    addi r4, r3, 0x8
    li r3, 0x2
    mtctr r12
    bctrl
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062B34C_00001320
    li r0, 0x207
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062B34C_00001320:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B39C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x108(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062B39C_00001360
    lis r5, lbl_8081FC38@ha
    addi r4, r3, 0x8
    lwz r12, lbl_8081FC38@l(r5)
    li r3, 0x2
    mtctr r12
    bctrl
lbl_fn_8062B39C_00001360:
    lis r6, lbl_8081FC38@ha
    addi r6, r6, lbl_8081FC38@l
    lbz r0, 0x78(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8062B39C_00001384
    li r0, 0x0
    stb r0, 0x78(r6)
    bl fn_8062B7E0
    b lbl_fn_8062B39C_000013A8
lbl_fn_8062B39C_00001384:
    lis r5, fn_8062B424@ha
    li r0, 0x1
    addi r5, r5, fn_8062B424@l
    stb r0, 0x79(r6)
    addi r3, r6, 0x40
    li r4, 0x0
    stw r5, 0x48(r6)
    li r5, 0xbb8
    bl fn_8062A36C
lbl_fn_8062B39C_000013A8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B424(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_80880188
    cmplwi r0, 0x4
    blt lbl_fn_8062B424_000013E0
    lis r4, lbl_807B3378@ha
    li r3, 0x503
    addi r4, r4, lbl_807B3378@l
    bl fn_80629810
lbl_fn_8062B424_000013E0:
    lis r3, lbl_8081FC38@ha
    li r0, 0x0
    addi r3, r3, lbl_8081FC38@l
    stb r0, 0x78(r3)
    bl fn_8062B7E0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B470(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8081FC38@ha
    addi r31, r31, lbl_8081FC38@l
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8062B470_00001434
    bl fn_80626D50
    li r0, 0x0
    stw r0, 0x14(r31)
lbl_fn_8062B470_00001434:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B4B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x1c
    bl fn_80626AC0
    lis r6, lbl_8081FC38@ha
    mr r4, r31
    addi r6, r6, lbl_8081FC38@l
    li r5, 0x1c
    stw r3, 0x74(r6)
    bl memcpy
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B4FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x18
    bl fn_80626AC0
    lis r6, lbl_8081FC38@ha
    mr r4, r31
    addi r6, r6, lbl_8081FC38@l
    li r5, 0x18
    stw r3, 0x74(r6)
    bl memcpy
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B544(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8081FC38@ha
    addi r31, r31, lbl_8081FC38@l
    lwz r3, 0x74(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8062B544_00001508
    bl fn_80626D50
    li r0, 0x0
    stw r0, 0x74(r31)
lbl_fn_8062B544_00001508:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B588(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8081FC38@ha
    addi r31, r31, lbl_8081FC38@l
    lwz r3, 0x74(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8062B588_0000154C
    bl fn_8062A350
    li r0, 0x0
    stw r0, 0x74(r31)
lbl_fn_8062B588_0000154C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B5CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8081FC38@ha
    addi r31, r31, lbl_8081FC38@l
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8062B5CC_00001590
    bl fn_80626D50
    li r0, 0x0
    stw r0, 0x14(r31)
lbl_fn_8062B5CC_00001590:
    lis r4, lbl_8081FC38@ha
    li r3, 0x4
    lwz r12, lbl_8081FC38@l(r4)
    li r4, 0x0
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B628(void)
{
    nofralloc
    lis r4, lbl_8081FC38@ha
    li r3, 0x4
    lwz r12, lbl_8081FC38@l(r4)
    li r4, 0x0
    mtctr r12
    bctr
}

asm void fn_8062B640(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    lhz r4, lbl_80888858
    lis r26, lbl_8081FC38@ha
    lhz r0, lbl_8088885A
    lis r25, lbl_80764CF8@ha
    sth r4, 0x8(r1)
    mr r30, r3
    addi r25, r25, lbl_80764CF8@l
    addi r26, r26, lbl_8081FC38@l
    sth r0, 0xa(r1)
    li r31, 0x1
    li r23, 0x1
    li r24, 0x2
    lis r27, fn_8062B8C0@ha
    li r28, 0x0
    li r29, 0x17
    b lbl_fn_8062B640_000016E0
lbl_fn_8062B640_00001628:
    lwz r3, 0xc(r26)
    slw r0, r23, r0
    and. r0, r3, r0
    beq lbl_fn_8062B640_000016D4
    li r3, 0xfa
    bl fn_80626AC0
    cmpwi r3, 0x0
    stw r3, 0x14(r26)
    beq lbl_fn_8062B640_000016D4
    lbz r3, 0x70(r26)
    lwz r4, 0xc(r26)
    slwi r0, r3, 1
    slw r3, r23, r3
    lhzx r0, r25, r0
    andc r3, r4, r3
    stw r3, 0xc(r26)
    cmplwi r0, 0x1200
    sth r24, 0xc(r1)
    sth r0, 0x10(r1)
    bne lbl_fn_8062B640_0000167C
    li r31, 0x2
lbl_fn_8062B640_0000167C:
    lwz r3, 0x14(r26)
    mr r7, r31
    addi r6, r1, 0xc
    addi r8, r1, 0x8
    li r4, 0xfa
    li r5, 0x1
    bl fn_8064E72C
    lwz r4, 0x14(r26)
    mr r3, r30
    addi r5, r27, fn_8062B8C0@l
    bl fn_8064EB00
    clrlwi. r0, r3, 24
    bne lbl_fn_8062B640_000016C4
    lwz r3, 0x14(r26)
    bl fn_80626D50
    stw r28, 0x14(r26)
    stb r29, 0x70(r26)
    b lbl_fn_8062B640_000016D4
lbl_fn_8062B640_000016C4:
    lbz r3, 0x70(r26)
    addi r0, r3, 0x1
    stb r0, 0x70(r26)
    b lbl_fn_8062B640_0000175C
lbl_fn_8062B640_000016D4:
    lbz r3, 0x70(r26)
    addi r0, r3, 0x1
    stb r0, 0x70(r26)
lbl_fn_8062B640_000016E0:
    lbz r0, 0x70(r26)
    cmplwi r0, 0x17
    blt lbl_fn_8062B640_00001628
    blt lbl_fn_8062B640_0000175C
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_8062B640_0000175C
    li r0, 0x208
    addi r4, r26, 0x1a
    sth r0, 0x0(r3)
    lwz r0, 0x10(r26)
    stw r0, 0x108(r3)
    addi r3, r3, 0x8
    bl fn_80629EA4
    lbz r0, 0x20(r26)
    addi r23, r26, 0x20
    extsb. r0, r0
    bne lbl_fn_8062B640_00001744
    addi r3, r26, 0x1a
    bl fn_80631CE8
    cmpwi r3, 0x0
    beq lbl_fn_8062B640_00001744
    mr r23, r3
lbl_fn_8062B640_00001744:
    mr r4, r23
    addi r3, r24, 0xe
    li r5, 0x20
    bl fn_8068236C
    mr r3, r24
    bl fn_8062A350
lbl_fn_8062B640_0000175C:
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8062B7E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_8081FC38@ha
    addi r30, r30, lbl_8081FC38@l
    lwz r3, 0x4(r30)
    bl fn_806347E4
    cmpwi r3, 0x0
    stw r3, 0x4(r30)
    beq lbl_fn_8062B7E0_00001818
    addi r3, r3, 0x2
    bl fn_80630BA4
    clrlwi. r0, r3, 24
    beq lbl_fn_8062B7E0_000017C0
    li r0, 0x0
    stb r0, 0x78(r30)
    b lbl_fn_8062B7E0_000017C8
lbl_fn_8062B7E0_000017C0:
    li r0, 0x1
    stb r0, 0x78(r30)
lbl_fn_8062B7E0_000017C8:
    lis r31, lbl_8081FC38@ha
    lis r3, fn_8062B9E4@ha
    addi r31, r31, lbl_8081FC38@l
    li r30, 0x0
    stb r30, 0x79(r31)
    addi r3, r3, fn_8062B9E4@l
    bl fn_80637274
    lwz r0, 0x8(r31)
    addi r3, r31, 0x1a
    lwz r4, 0x4(r31)
    stb r30, 0x70(r31)
    addi r4, r4, 0x2
    stw r30, 0x10(r31)
    stb r30, 0x20(r31)
    stw r0, 0xc(r31)
    bl fn_80629EA4
    lwz r3, 0x4(r31)
    addi r3, r3, 0x2
    bl fn_8062B640
    b lbl_fn_8062B7E0_0000183C
lbl_fn_8062B7E0_00001818:
    li r0, 0x0
    li r3, 0x110
    stw r0, 0x8(r30)
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062B7E0_0000183C
    li r0, 0x207
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062B7E0_0000183C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B8C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0xa
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062B8C0_00001888
    li r0, 0x206
    sth r0, 0x0(r3)
    sth r31, 0x8(r3)
    bl fn_8062A350
lbl_fn_8062B8C0_00001888:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B908(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    addi r4, r31, 0x2
    bl fn_80629EA4
    addi r3, r1, 0xe
    addi r4, r31, 0x8
    li r5, 0x3
    bl memcpy
    lbz r0, 0xe(r31)
    addi r3, r31, 0x2
    stb r0, 0x11(r1)
    bl fn_8063466C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062B908_000018F0
    li r0, 0x0
    stb r0, 0x12(r1)
lbl_fn_8062B908_000018F0:
    lis r3, lbl_8081FC38@ha
    addi r4, r1, 0x8
    lwz r12, lbl_8081FC38@l(r3)
    li r3, 0x0
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl_fn_8062B908_00001918
    lbz r0, 0x12(r1)
    stb r0, 0x10(r31)
lbl_fn_8062B908_00001918:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8062B998(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062B998_00001964
    li r0, 0x203
    sth r0, 0x0(r3)
    lbz r0, 0x1(r31)
    stb r0, 0x8(r3)
    bl fn_8062A350
lbl_fn_8062B998_00001964:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062B9E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8081FC38@ha
    mr r4, r5
    addi r3, r3, lbl_8081FC38@l
    stw r0, 0x14(r1)
    li r5, 0x1f
    addi r3, r3, 0x20
    bl fn_8068236C
    lis r3, fn_8062B9E4@ha
    addi r3, r3, fn_8062B9E4@l
    bl fn_806372C4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062BA24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8081FC38@ha
    addi r31, r31, lbl_8081FC38@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r31, 0x58
    bl fn_8062A38C
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8062BA24_00001A28
    lwz r4, 0x4(r31)
    addi r3, r3, 0x8
    addi r4, r4, 0x2
    bl fn_80629EA4
    addi r3, r30, 0xe
    addi r4, r29, 0x4
    li r5, 0x20
    bl fn_8068236C
    li r0, 0x204
    mr r3, r30
    sth r0, 0x0(r30)
    bl fn_8062A350
lbl_fn_8062BA24_00001A28:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062BAB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8081FC38@ha
    addi r31, r31, lbl_8081FC38@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r31, 0x58
    bl fn_8062A38C
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8062BAB0_00001AB0
    addi r3, r3, 0x8
    addi r4, r31, 0x1a
    bl fn_80629EA4
    addi r3, r30, 0xe
    addi r4, r29, 0x4
    li r5, 0x20
    bl fn_8068236C
    li r0, 0x204
    mr r3, r30
    sth r0, 0x0(r30)
    bl fn_8062A350
lbl_fn_8062BAB0_00001AB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062BB38(void)
{
    nofralloc
    b fn_806345F4
}

asm void fn_8062BB3C(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x134(r1)
    addi r3, r1, 0x8
    stw r31, 0x12c(r1)
    li r31, 0x1
    stw r30, 0x128(r1)
    mr r30, r7
    stw r29, 0x124(r1)
    mr r29, r5
    bl fn_80629EA4
    mr r4, r29
    addi r3, r1, 0xe
    li r5, 0x20
    bl fn_8068236C
    lis r3, lbl_80764D28@ha
    li r0, 0x17
    addi r3, r3, lbl_80764D28@l
    mtctr r0
lbl_fn_8062BB3C_00001B20:
    clrlslwi r0, r31, 24, 2
    lwzx r0, r3, r0
    cmplw r30, r0
    bne lbl_fn_8062BB3C_00001B38
    stb r31, 0x106(r1)
    b lbl_fn_8062BB3C_00001B40
lbl_fn_8062BB3C_00001B38:
    addi r31, r31, 0x1
    bdnz lbl_fn_8062BB3C_00001B20
lbl_fn_8062BB3C_00001B40:
    lis r3, lbl_8081FCB4@ha
    addi r3, r3, lbl_8081FCB4@l
    lwz r12, 0x50(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8062BB3C_00001B78
    clrlwi r0, r31, 24
    cmplwi r0, 0x17
    bgt lbl_fn_8062BB3C_00001B78
    addi r4, r1, 0x8
    li r3, 0x4
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_8062BB3C_00001B7C
lbl_fn_8062BB3C_00001B78:
    li r3, 0xb
lbl_fn_8062BB3C_00001B7C:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8062BC04(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    lis r31, lbl_8081FCB4@ha
    addi r31, r31, lbl_8081FCB4@l
    stw r30, 0x118(r1)
    mr r30, r3
    addi r3, r1, 0x8
    addi r4, r31, 0xf8
    bl fn_80629EA4
    lbz r4, 0xfe(r31)
    cmpwi r30, 0x0
    lbz r3, 0xff(r31)
    lbz r0, 0x100(r31)
    stb r4, 0x106(r1)
    stb r3, 0x107(r1)
    stb r0, 0x108(r1)
    beq lbl_fn_8062BC04_00001C1C
    lhz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8062BC04_00001C1C
    lhz r0, 0x2(r30)
    addi r3, r1, 0xe
    addi r4, r30, 0x4
    li r5, 0x20
    cmplwi r0, 0x20
    bge lbl_fn_8062BC04_00001C0C
    mr r5, r0
lbl_fn_8062BC04_00001C0C:
    bl memcpy
    li r0, 0x0
    stb r0, 0x2e(r1)
    b lbl_fn_8062BC04_00001C24
lbl_fn_8062BC04_00001C1C:
    li r0, 0x0
    stb r0, 0xe(r1)
lbl_fn_8062BC04_00001C24:
    lis r5, lbl_8081FCB4@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_8081FCB4@l
    li r3, 0x2
    lwz r12, 0x50(r5)
    mtctr r12
    bctrl
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8062BCC4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    lis r31, lbl_8081FCB4@ha
    addi r31, r31, lbl_8081FCB4@l
    stw r30, 0x128(r1)
    mr r30, r5
    stw r29, 0x124(r1)
    mr r29, r4
    stw r28, 0x120(r1)
    mr r28, r3
    lwz r0, 0x50(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8062BCC4_00001C9C
    li r3, 0xb
    b lbl_fn_8062BCC4_00001D68
lbl_fn_8062BCC4_00001C9C:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8062BCC4_00001D0C
    mr r4, r28
    addi r3, r31, 0xf8
    bl fn_80629EA4
    lbz r0, 0x0(r29)
    lis r4, fn_8062BC04@ha
    mr r3, r28
    stb r0, 0xfe(r31)
    addi r4, r4, fn_8062BC04@l
    lbz r0, 0x1(r29)
    stb r0, 0xff(r31)
    lbz r0, 0x2(r29)
    stb r0, 0x100(r31)
    bl fn_8063450C
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_8062BCC4_00001CF0
    li r3, 0x1
    b lbl_fn_8062BCC4_00001D68
lbl_fn_8062BCC4_00001CF0:
    lbz r0, lbl_80880188
    cmplwi r0, 0x2
    blt lbl_fn_8062BCC4_00001D0C
    lis r4, lbl_807B3398@ha
    li r3, 0x501
    addi r4, r4, lbl_807B3398@l
    bl fn_80629810
lbl_fn_8062BCC4_00001D0C:
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_80629EA4
    lbz r0, 0x0(r29)
    mr r4, r30
    addi r3, r1, 0xe
    li r5, 0x20
    stb r0, 0x106(r1)
    lbz r0, 0x1(r29)
    stb r0, 0x107(r1)
    lbz r0, 0x2(r29)
    stb r0, 0x108(r1)
    bl fn_8068236C
    lis r3, lbl_8081FCB4@ha
    li r0, 0x0
    addi r3, r3, lbl_8081FCB4@l
    stb r0, 0x2e(r1)
    lwz r12, 0x50(r3)
    addi r4, r1, 0x8
    li r3, 0x2
    mtctr r12
    bctrl
    li r3, 0x1
lbl_fn_8062BCC4_00001D68:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8062BDF4(void)
{
    nofralloc
    li r3, 0xb
    blr
}

asm void fn_8062BDFC(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x124(r1)
    addi r3, r1, 0x8
    stw r31, 0x11c(r1)
    mr r31, r6
    stw r30, 0x118(r1)
    mr r30, r5
    bl fn_80629EA4
    mr r4, r30
    addi r3, r1, 0xe
    li r5, 0x1f
    bl memcpy
    li r0, 0x0
    mr r4, r31
    stb r0, 0x2d(r1)
    addi r3, r1, 0x107
    li r5, 0x10
    bl memcpy
    lis r3, lbl_8081FCB4@ha
    li r0, 0x1
    addi r3, r3, lbl_8081FCB4@l
    stb r0, 0x106(r1)
    lwz r12, 0x50(r3)
    stb r0, 0x117(r1)
    cmpwi r12, 0x0
    beq lbl_fn_8062BDFC_00001E10
    addi r4, r1, 0x8
    li r3, 0x3
    mtctr r12
    bctrl
lbl_fn_8062BDFC_00001E10:
    lwz r31, 0x11c(r1)
    li r3, 0x1
    lwz r30, 0x118(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8062BE98(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r5
    beq lbl_fn_8062BE98_00001E98
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80629EA4
    mr r4, r31
    addi r3, r1, 0xe
    li r5, 0x1f
    bl memcpy
    lis r3, lbl_8081FCB4@ha
    li r0, 0x0
    addi r3, r3, lbl_8081FCB4@l
    stb r0, 0x2d(r1)
    lwz r12, 0x50(r3)
    stb r0, 0x117(r1)
    cmpwi r12, 0x0
    stb r0, 0x106(r1)
    beq lbl_fn_8062BE98_00001E98
    addi r4, r1, 0x8
    li r3, 0x3
    mtctr r12
    bctrl
lbl_fn_8062BE98_00001E98:
    lwz r31, 0x11c(r1)
    li r3, 0x0
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8062BF1C(void)
{
    nofralloc
    lis r4, lbl_8081FCB4@ha
    addi r4, r4, lbl_8081FCB4@l
    lwz r12, 0x50(r4)
    cmpwi r12, 0x0
    beqlr
    mr r4, r3
    li r3, 0x0
    mtctr r12
    bctr
    blr
}

asm void fn_8062BF44(void)
{
    nofralloc
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062BF44_00001F04
    lis r4, lbl_8081FCB4@ha
    lbz r0, 0x8(r3)
    addi r4, r4, lbl_8081FCB4@l
    stb r0, 0x6c(r4)
    lhz r0, 0xa(r3)
    li r3, 0x0
    sth r0, 0x70(r4)
    b fn_8062BF80
lbl_fn_8062BF44_00001F04:
    lis r3, lbl_8081FCB4@ha
    addi r3, r3, lbl_8081FCB4@l
    addi r3, r3, 0x54
    b fn_8062A38C
}

asm void fn_8062BF80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_8081FCB4@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, lbl_8081FCB4@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x6c(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_8062BF80_00001F74
    li r29, 0x0
    lis r30, fn_8062C380@ha
    b lbl_fn_8062BF80_00001F64
lbl_fn_8062BF80_00001F4C:
    clrlwi r0, r29, 24
    addi r4, r30, fn_8062C380@l
    mulli r0, r0, 0xb
    add r3, r31, r0
    bl fn_8063132C
    addi r29, r29, 0x1
lbl_fn_8062BF80_00001F64:
    lbz r0, 0x4d(r31)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_fn_8062BF80_00001F4C
lbl_fn_8062BF80_00001F74:
    lis r3, lbl_8081FCB4@ha
    addi r30, r3, lbl_8081FCB4@l
    lbz r0, 0x6c(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_8062BF80_00001FBC
    li r29, 0x0
    lis r31, fn_8062C3EC@ha
    b lbl_fn_8062BF80_00001FAC
lbl_fn_8062BF80_00001F94:
    clrlwi r0, r29, 24
    addi r4, r31, fn_8062C3EC@l
    mulli r0, r0, 0xb
    add r3, r30, r0
    bl fn_80631468
    addi r29, r29, 0x1
lbl_fn_8062BF80_00001FAC:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_fn_8062BF80_00001F94
lbl_fn_8062BF80_00001FBC:
    lis r7, lbl_8081FCB4@ha
    addi r7, r7, lbl_8081FCB4@l
    lhz r0, 0x70(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8062BF80_00001FEC
    lis r6, fn_8062BF80@ha
    addi r3, r7, 0x54
    addi r6, r6, fn_8062BF80@l
    li r4, 0x0
    mulli r5, r0, 0x3e8
    stw r6, 0x5c(r7)
    bl fn_8062A36C
lbl_fn_8062BF80_00001FEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062C074(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r7
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x12
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062C074_0000205C
    mr r4, r29
    addi r3, r3, 0xb
    bl fn_80629EA4
    stb r30, 0xa(r31)
    li r0, 0x105
    mr r3, r31
    sth r0, 0x0(r31)
    bl fn_8062A350
lbl_fn_8062C074_0000205C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062C0E4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    addi r31, r3, 0xb
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062C0E4_0000215C
    lis r3, lbl_8081FCB4@ha
    li r29, 0x0
    addi r30, r3, lbl_8081FCB4@l
    b lbl_fn_8062C0E4_000020D0
lbl_fn_8062C0E4_000020B0:
    clrlwi r0, r29, 24
    mr r4, r31
    mulli r0, r0, 0xb
    add r3, r30, r0
    bl fn_80629ED8
    cmpwi r3, 0x0
    beq lbl_fn_8062C0E4_000020E0
    addi r29, r29, 0x1
lbl_fn_8062C0E4_000020D0:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_fn_8062C0E4_000020B0
lbl_fn_8062C0E4_000020E0:
    lis r30, lbl_8081FCB4@ha
    clrlwi r0, r29, 24
    addi r30, r30, lbl_8081FCB4@l
    lbz r3, 0x4d(r30)
    cmplw r0, r3
    bne lbl_fn_8062C0E4_00002114
    mulli r0, r3, 0xb
    mr r4, r31
    add r3, r30, r0
    bl fn_80629EA4
    lbz r3, 0x4d(r30)
    addi r0, r3, 0x1
    stb r0, 0x4d(r30)
lbl_fn_8062C0E4_00002114:
    clrlwi r0, r29, 24
    lis r30, lbl_8081FCB4@ha
    mulli r4, r0, 0xb
    li r3, 0x1
    addi r30, r30, lbl_8081FCB4@l
    li r0, 0x0
    add r5, r30, r4
    stb r3, 0x6(r5)
    mr r4, r31
    addi r3, r1, 0x8
    stb r0, 0x7(r5)
    bl fn_80629EA4
    lwz r12, 0x50(r30)
    addi r4, r1, 0x8
    li r3, 0x5
    mtctr r12
    bctrl
    b lbl_fn_8062C0E4_000022DC
lbl_fn_8062C0E4_0000215C:
    lis r3, lbl_8081FCB4@ha
    li r29, 0x0
    addi r30, r3, lbl_8081FCB4@l
    b lbl_fn_8062C0E4_000021D0
lbl_fn_8062C0E4_0000216C:
    clrlwi r0, r29, 24
    mr r4, r31
    mulli r0, r0, 0xb
    add r3, r30, r0
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062C0E4_000021CC
    lis r3, lbl_8081FCB4@ha
    addi r30, r3, lbl_8081FCB4@l
    b lbl_fn_8062C0E4_000021B8
lbl_fn_8062C0E4_00002194:
    clrlwi r3, r29, 24
    li r5, 0xb
    addi r0, r3, 0x1
    mulli r3, r3, 0xb
    mulli r0, r0, 0xb
    add r3, r30, r3
    add r4, r30, r0
    bl memcpy
    addi r29, r29, 0x1
lbl_fn_8062C0E4_000021B8:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_fn_8062C0E4_00002194
    b lbl_fn_8062C0E4_000021E0
lbl_fn_8062C0E4_000021CC:
    addi r29, r29, 0x1
lbl_fn_8062C0E4_000021D0:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_fn_8062C0E4_0000216C
lbl_fn_8062C0E4_000021E0:
    lis r4, lbl_8081FCB4@ha
    lis r30, lbl_8081FC38@ha
    addi r4, r4, lbl_8081FCB4@l
    addi r30, r30, lbl_8081FC38@l
    lbz r3, 0x4d(r4)
    lbz r0, 0x78(r30)
    subi r3, r3, 0x1
    cmpwi r0, 0x0
    stb r3, 0x4d(r4)
    beq lbl_fn_8062C0E4_00002260
    mr r4, r31
    addi r3, r30, 0x1a
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062C0E4_00002260
    lbz r0, 0x79(r30)
    li r3, 0x0
    stb r3, 0x78(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8062C0E4_00002260
    lbz r0, lbl_80880188
    cmplwi r0, 0x4
    blt lbl_fn_8062C0E4_0000224C
    lis r4, lbl_807B33D8@ha
    li r3, 0x503
    addi r4, r4, lbl_807B33D8@l
    bl fn_80629810
lbl_fn_8062C0E4_0000224C:
    lis r3, lbl_8081FC38@ha
    addi r3, r3, lbl_8081FC38@l
    addi r3, r3, 0x40
    bl fn_8062A38C
    bl fn_8062B7E0
lbl_fn_8062C0E4_00002260:
    lis r30, lbl_8081FCB4@ha
    addi r30, r30, lbl_8081FCB4@l
    lbz r0, 0x72(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8062C0E4_000022AC
    bl fn_80630C7C
    clrlwi. r0, r3, 16
    bne lbl_fn_8062C0E4_000022AC
    li r0, 0x0
    addi r3, r30, 0x74
    stb r0, 0x72(r30)
    bl fn_8062A38C
    lis r5, fn_8062C364@ha
    addi r3, r30, 0x74
    addi r5, r5, fn_8062C364@l
    li r4, 0x0
    stw r5, 0x7c(r30)
    li r5, 0x3e8
    bl fn_8062A36C
lbl_fn_8062C0E4_000022AC:
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_80629EA4
    bl fn_80630CD8
    lis r5, lbl_8081FCB4@ha
    stb r3, 0xe(r1)
    addi r5, r5, lbl_8081FCB4@l
    addi r4, r1, 0x8
    lwz r12, 0x50(r5)
    li r3, 0x6
    mtctr r12
    bctrl
lbl_fn_8062C0E4_000022DC:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8062C364(void)
{
    nofralloc
    lis r5, lbl_8081FCB4@ha
    li r3, 0x1
    addi r5, r5, lbl_8081FCB4@l
    li r4, 0x0
    lwz r12, 0x50(r5)
    mtctr r12
    bctr
}

asm void fn_8062C380(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8062C380_0000236C
    addi r3, r1, 0x8
    addi r4, r31, 0x3
    bl fn_80629EA4
    li r0, 0x1
    lis r3, lbl_8081FCB4@ha
    stb r0, 0xe(r1)
    addi r3, r3, lbl_8081FCB4@l
    lwz r12, 0x50(r3)
    addi r4, r1, 0x8
    lbz r0, 0x2(r31)
    li r3, 0x7
    stb r0, 0xf(r1)
    mtctr r12
    bctrl
lbl_fn_8062C380_0000236C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062C3EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8062C3EC_000023D8
    addi r3, r1, 0x8
    addi r4, r31, 0x3
    bl fn_80629EA4
    li r0, 0x2
    lis r3, lbl_8081FCB4@ha
    stb r0, 0xe(r1)
    addi r3, r3, lbl_8081FCB4@l
    lwz r12, 0x50(r3)
    addi r4, r1, 0x8
    lbz r0, 0x2(r31)
    li r3, 0x7
    stb r0, 0x10(r1)
    mtctr r12
    bctrl
lbl_fn_8062C3EC_000023D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062C458(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r31, lbl_8081FC08@ha
    lwz r27, 0x38(r1)
    addi r31, r31, lbl_8081FC08@l
    mr r25, r3
    mr r26, r10
    li r29, 0x0
    mr r30, r31
    li r28, 0x0
lbl_fn_8062C458_00002420:
    lbz r0, 0x8(r31)
    cmplwi r0, 0x1
    bne lbl_fn_8062C458_000024A0
    mr r3, r30
    mr r4, r25
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062C458_000024A0
    lbz r0, lbl_80880188
    cmplwi r0, 0x4
    blt lbl_fn_8062C458_00002474
    slwi r0, r28, 3
    lis r5, lbl_8081FC08@ha
    addi r5, r5, lbl_8081FC08@l
    lis r4, lbl_807B33EC@ha
    add r0, r0, r28
    li r3, 0x503
    add r5, r5, r0
    addi r4, r4, lbl_807B33EC@l
    lbz r5, 0x6(r5)
    bl fn_80629830
lbl_fn_8062C458_00002474:
    slwi r0, r28, 3
    lis r3, lbl_8081FC08@ha
    addi r3, r3, lbl_8081FC08@l
    mr r4, r26
    add r0, r0, r28
    mr r5, r27
    add r3, r3, r0
    lbz r3, 0x6(r3)
    bl fn_80674430
    mr r29, r3
    b lbl_fn_8062C458_000024B4
lbl_fn_8062C458_000024A0:
    addi r28, r28, 0x1
    addi r30, r30, 0x9
    cmpwi r28, 0x5
    addi r31, r31, 0x9
    blt lbl_fn_8062C458_00002420
lbl_fn_8062C458_000024B4:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8062C53C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bne lbl_fn_8062C53C_00002644
    lwz r3, lbl_8087EA8C
    li r7, 0x1
    lbz r9, 0x1(r3)
    b lbl_fn_8062C53C_00002634
lbl_fn_8062C53C_00002500:
    clrlwi r8, r7, 24
    clrlslwi r0, r7, 24, 2
    subf r0, r8, r0
    add r8, r3, r0
    lbz r0, 0x1(r8)
    cmplw r5, r0
    beq lbl_fn_8062C53C_00002524
    cmplwi r0, 0xff
    bne lbl_fn_8062C53C_00002630
lbl_fn_8062C53C_00002524:
    lbz r0, 0x0(r8)
    cmplw r4, r0
    bne lbl_fn_8062C53C_00002630
    lbz r0, 0x2(r8)
    cmplwi r0, 0x1
    bne lbl_fn_8062C53C_00002630
    lis r8, lbl_8081FDB8@ha
    lbz r11, 0x1(r3)
    lbz r10, lbl_8081FDB8@l(r8)
    addi r9, r8, lbl_8081FDB8@l
    li r31, 0x0
    li r29, 0x1
    b lbl_fn_8062C53C_000025B4
lbl_fn_8062C53C_00002558:
    clrlwi r8, r29, 24
    clrlslwi r0, r29, 24, 2
    subf r0, r8, r0
    add r12, r3, r0
    lbz r0, 0x2(r12)
    cmplwi r0, 0x2
    bne lbl_fn_8062C53C_000025B0
    li r30, 0x0
    b lbl_fn_8062C53C_000025A4
lbl_fn_8062C53C_0000257C:
    clrlwi r8, r30, 24
    clrlslwi r0, r30, 24, 3
    add r8, r0, r8
    lbz r0, 0x0(r12)
    add r8, r9, r8
    lbz r8, 0x7(r8)
    cmplw r8, r0
    bne lbl_fn_8062C53C_000025A0
    li r31, 0x1
lbl_fn_8062C53C_000025A0:
    addi r30, r30, 0x1
lbl_fn_8062C53C_000025A4:
    clrlwi r0, r30, 24
    cmplw r0, r10
    blt lbl_fn_8062C53C_0000257C
lbl_fn_8062C53C_000025B0:
    addi r29, r29, 0x1
lbl_fn_8062C53C_000025B4:
    clrlwi r0, r29, 24
    cmplw r0, r11
    ble lbl_fn_8062C53C_00002558
    cmpwi r31, 0x0
    bne lbl_fn_8062C53C_000026EC
    clrlwi r3, r7, 24
    lis r30, lbl_8081FC08@ha
    subi r3, r3, 0x1
    slwi r0, r3, 3
    addi r30, r30, lbl_8081FC08@l
    add r29, r0, r3
    add r31, r30, r29
    stb r5, 0x7(r31)
    mr r3, r31
    stb r4, 0x6(r31)
    mr r4, r6
    bl fn_80629EA4
    lbz r0, lbl_80880188
    li r3, 0x1
    stb r3, 0x8(r31)
    mr r7, r31
    cmplwi r0, 0x4
    blt lbl_fn_8062C53C_000026EC
    lis r4, lbl_807B341C@ha
    lbz r5, 0x7(r31)
    lbz r6, 0x6(r31)
    addi r4, r4, lbl_807B341C@l
    lbz r7, 0x8(r7)
    li r3, 0x503
    bl fn_80629870
    b lbl_fn_8062C53C_000026EC
lbl_fn_8062C53C_00002630:
    addi r7, r7, 0x1
lbl_fn_8062C53C_00002634:
    clrlwi r0, r7, 24
    cmplw r0, r9
    ble lbl_fn_8062C53C_00002500
    b lbl_fn_8062C53C_000026EC
lbl_fn_8062C53C_00002644:
    cmplwi r3, 0x1
    bne lbl_fn_8062C53C_000026EC
    lwz r7, lbl_8087EA8C
    li r8, 0x1
    lbz r6, 0x1(r7)
    b lbl_fn_8062C53C_000026E0
lbl_fn_8062C53C_0000265C:
    clrlwi r3, r8, 24
    clrlslwi r0, r8, 24, 2
    subf r0, r3, r0
    add r3, r7, r0
    lbz r0, 0x1(r3)
    cmplw r5, r0
    beq lbl_fn_8062C53C_00002680
    cmplwi r0, 0xff
    bne lbl_fn_8062C53C_000026DC
lbl_fn_8062C53C_00002680:
    lbz r0, 0x0(r3)
    cmplw r4, r0
    bne lbl_fn_8062C53C_000026DC
    clrlwi r3, r8, 24
    lbz r0, lbl_80880188
    subi r5, r3, 0x1
    lis r3, lbl_8081FC08@ha
    cmplwi r0, 0x4
    slwi r4, r5, 3
    add r0, r4, r5
    addi r3, r3, lbl_8081FC08@l
    add r3, r3, r0
    li r0, 0x0
    stb r0, 0x8(r3)
    blt lbl_fn_8062C53C_000026EC
    lis r4, lbl_807B3458@ha
    lbz r5, 0x7(r3)
    lbz r6, 0x6(r3)
    addi r4, r4, lbl_807B3458@l
    lbz r7, 0x8(r3)
    li r3, 0x503
    bl fn_80629870
    b lbl_fn_8062C53C_000026EC
lbl_fn_8062C53C_000026DC:
    addi r8, r8, 0x1
lbl_fn_8062C53C_000026E0:
    clrlwi r0, r8, 24
    cmplw r0, r6
    ble lbl_fn_8062C53C_0000265C
lbl_fn_8062C53C_000026EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062C774(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r30, r4
    mr r31, r5
    mr r26, r6
    bne lbl_fn_8062C774_000027F8
    lis r3, lbl_8081FCB4@ha
    li r27, 0x0
    addi r29, r3, lbl_8081FCB4@l
    b lbl_fn_8062C774_000027E8
lbl_fn_8062C774_00002740:
    clrlwi r0, r27, 24
    mr r4, r26
    mulli r28, r0, 0xb
    add r3, r29, r28
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062C774_000027E4
    add r3, r29, r28
    li r0, 0x1
    stb r0, 0x6(r3)
    li r7, 0x1
    lwz r6, lbl_8087EA88
    lbz r4, 0x1(r6)
    b lbl_fn_8062C774_000027D4
lbl_fn_8062C774_00002778:
    clrlwi r3, r7, 24
    clrlslwi r0, r7, 24, 2
    subf r5, r3, r0
    add r3, r6, r5
    lbz r0, 0x1(r3)
    cmplw r31, r0
    beq lbl_fn_8062C774_0000279C
    cmplwi r0, 0xff
    bne lbl_fn_8062C774_000027D0
lbl_fn_8062C774_0000279C:
    lbz r0, 0x0(r3)
    cmplw r30, r0
    bne lbl_fn_8062C774_000027D0
    lis r3, lbl_8081FCB4@ha
    add r4, r6, r5
    addi r3, r3, lbl_8081FCB4@l
    lbz r4, 0x2(r4)
    add r3, r3, r28
    lbz r0, 0x7(r3)
    cmplw r4, r0
    ble lbl_fn_8062C774_000027F8
    stb r4, 0x7(r3)
    b lbl_fn_8062C774_000027F8
lbl_fn_8062C774_000027D0:
    addi r7, r7, 0x1
lbl_fn_8062C774_000027D4:
    clrlwi r0, r7, 24
    cmplw r0, r4
    ble lbl_fn_8062C774_00002778
    b lbl_fn_8062C774_000027F8
lbl_fn_8062C774_000027E4:
    addi r27, r27, 0x1
lbl_fn_8062C774_000027E8:
    lbz r0, 0x4d(r29)
    clrlwi r3, r27, 24
    cmplw r3, r0
    blt lbl_fn_8062C774_00002740
lbl_fn_8062C774_000027F8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062C87C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lhz r4, 0x6(r3)
    lis r3, lbl_8081FCB4@ha
    addi r3, r3, lbl_8081FCB4@l
    clrlwi. r0, r4, 24
    stb r4, 0x101(r3)
    beq lbl_fn_8062C87C_00002864
    lis r31, 0x1
    la r3, lbl_80888890
    subi r0, r31, 0x1
    clrlwi r4, r0, 16
    bl fn_80642C20
    subi r0, r31, 0x1
    li r3, 0x0
    clrlwi r4, r0, 16
    li r5, 0x1
    bl fn_80642B58
    b lbl_fn_8062C87C_00002880
lbl_fn_8062C87C_00002864:
    la r3, lbl_80888890
    li r4, 0x2
    bl fn_80642C20
    li r3, 0x0
    li r4, 0x2
    li r5, 0x1
    bl fn_80642B58
lbl_fn_8062C87C_00002880:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062C900(void)
{
    nofralloc
    lis r5, lbl_8081FCB4@ha
    li r3, 0x1
    addi r5, r5, lbl_8081FCB4@l
    li r4, 0x0
    lwz r12, 0x50(r5)
    mtctr r12
    bctr
}

asm void fn_8062C91C(void)
{
    nofralloc
    blr
}

asm void fn_8062C920(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8081FB78@ha
    li r3, 0x2
    stw r0, 0x14(r1)
    li r0, 0x1
    addi r4, r4, lbl_8081FB78@l
    stb r0, 0x7e(r4)
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_8062C920_000028E8
    li r4, 0x0
    bl fn_8063E284
lbl_fn_8062C920_000028E8:
    lis r3, fn_8062C91C@ha
    addi r3, r3, fn_8062C91C@l
    bl fn_8063236C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062C970(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8081FCB4@ha
    li r5, 0x104
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r4, lbl_8081FCB4@l
    li r4, 0x0
    bl memset
    bl fn_80628150
    li r3, 0x1
    la r4, lbl_80888860
    bl fn_8062A33C
    li r3, 0x2
    la r4, lbl_80888868
    bl fn_8062A33C
    bl fn_80628160
    li r3, 0xc
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062C970_00002974
    li r0, 0x100
    sth r0, 0x0(r3)
    stw r31, 0x8(r3)
    bl fn_8062A350
    li r3, 0x0
    b lbl_fn_8062C970_00002978
lbl_fn_8062C970_00002974:
    li r3, 0x1
lbl_fn_8062C970_00002978:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062C9F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x8
    stw r0, 0x14(r1)
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062C9F8_000029B4
    li r0, 0x101
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062C9F8_000029B4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062CA30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80628150
    bl fn_80632414
    mr r31, r3
    bl fn_80628160
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062CA68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x28
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062CA68_00002A48
    li r0, 0x102
    mr r4, r30
    sth r0, 0x0(r3)
    li r5, 0x20
    addi r3, r3, 0x8
    bl fn_8068236C
    mr r3, r31
    bl fn_8062A350
lbl_fn_8062CA68_00002A48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062CACC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x110
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062CACC_00002AA0
    li r0, 0x103
    sth r0, 0x0(r3)
    stb r30, 0x8(r3)
    stb r31, 0x9(r3)
    bl fn_8062A350
lbl_fn_8062CACC_00002AA0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062CB24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x1c
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062CB24_00002B1C
    li r0, 0x200
    mr r4, r28
    sth r0, 0x0(r3)
    li r5, 0xa
    addi r3, r3, 0x8
    bl memcpy
    stw r29, 0x14(r31)
    mr r3, r31
    stw r30, 0x18(r31)
    bl fn_8062A350
lbl_fn_8062CB24_00002B1C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062CBA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x8
    stw r0, 0x14(r1)
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062CBA8_00002B64
    li r0, 0x201
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062CBA8_00002B64:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062CBE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    li r3, 0x20
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062CBE0_00002BE8
    li r0, 0x107
    mr r4, r27
    sth r0, 0x0(r3)
    addi r3, r3, 0x8
    bl fn_80629EA4
    cmpwi r28, 0x0
    stb r28, 0xe(r31)
    beq lbl_fn_8062CBE0_00002BE0
    stb r29, 0xf(r31)
    mr r4, r30
    mr r5, r29
    addi r3, r31, 0x10
    bl memcpy
lbl_fn_8062CBE0_00002BE0:
    mr r3, r31
    bl fn_8062A350
lbl_fn_8062CBE0_00002BE8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062CC6C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r27, r6
    addi r3, r1, 0x8
    li r31, 0x0
    li r4, 0x0
    li r5, 0x8
    bl memset
    cmpwi r27, 0x0
    beq lbl_fn_8062CC6C_00002CA4
    lis r7, lbl_80764D28@ha
    addi r5, r1, 0x8
    addi r7, r7, lbl_80764D28@l
    li r3, 0x1
    b lbl_fn_8062CC6C_00002C90
lbl_fn_8062CC6C_00002C54:
    clrlwi r0, r31, 24
    slw r4, r3, r0
    and. r0, r30, r4
    beq lbl_fn_8062CC6C_00002C8C
    clrlslwi r0, r31, 24, 2
    andc r30, r30, r4
    lwzx r4, r7, r0
    rlwinm r0, r4, 0, 19, 26
    rlwinm r6, r4, 29, 22, 29
    subf r0, r0, r4
    lwzx r4, r5, r6
    slw r0, r3, r0
    or r0, r4, r0
    stwx r0, r5, r6
lbl_fn_8062CC6C_00002C8C:
    addi r31, r31, 0x1
lbl_fn_8062CC6C_00002C90:
    cmpwi r30, 0x0
    beq lbl_fn_8062CC6C_00002CA4
    clrlwi r0, r31, 24
    cmplwi r0, 0x17
    blt lbl_fn_8062CC6C_00002C54
lbl_fn_8062CC6C_00002CA4:
    bl fn_80628150
    mr r3, r28
    mr r8, r29
    addi r7, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80631AB4
    mr r28, r3
    bl fn_80628160
    clrlwi r0, r28, 24
    addi r11, r1, 0x30
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8062CD5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80628150
    mr r3, r31
    bl fn_80631C3C
    mr r31, r3
    bl fn_80628160
    clrlwi r0, r31, 24
    lwz r31, 0xc(r1)
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062CDA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x8
    stw r0, 0x14(r1)
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_8062CDA4_00002D60
    li r0, 0x10c
    sth r0, 0x0(r3)
    bl fn_8062A350
lbl_fn_8062CDA4_00002D60:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062CDDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80764DA0@ha
    addi r31, r31, lbl_80764DA0@l
    stw r30, 0x18(r1)
    lis r30, lbl_80764DD4@ha
    addi r30, r30, lbl_80764DD4@l
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_fn_8062CDDC_00002DA4:
    lhz r3, 0x0(r28)
    add r0, r29, r30
    clrlwi r4, r3, 24
    clrlslwi r3, r3, 24, 2
    subf r3, r4, r3
    lbzx r0, r3, r0
    cmplwi r0, 0xd
    beq lbl_fn_8062CDDC_00002DE4
    clrlslwi r0, r0, 24, 2
    mr r3, r28
    lwzx r12, r31, r0
    mtctr r12
    bctrl
    addi r29, r29, 0x1
    cmpwi r29, 0x2
    blt lbl_fn_8062CDDC_00002DA4
lbl_fn_8062CDDC_00002DE4:
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062CE74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_8081FC38@ha
    lis r5, lbl_80764EB8@ha
    stw r0, 0x24(r1)
    addi r7, r7, lbl_8081FC38@l
    addi r5, r5, lbl_80764EB8@l
    stw r31, 0x1c(r1)
    lis r31, lbl_80764E00@ha
    addi r31, r31, lbl_80764E00@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    lhz r6, 0x18(r7)
    lhz r0, 0x0(r3)
    slwi r6, r6, 2
    clrlwi r4, r0, 24
    clrlslwi r0, r0, 24, 2
    lwzx r30, r5, r6
    subf r0, r4, r0
    add r3, r30, r0
    lbz r0, 0x2(r3)
    sth r0, 0x18(r7)
lbl_fn_8062CE74_00002E6C:
    lhz r3, 0x0(r28)
    add r0, r29, r30
    clrlwi r4, r3, 24
    clrlslwi r3, r3, 24, 2
    subf r3, r4, r3
    lbzx r0, r3, r0
    cmplwi r0, 0x12
    beq lbl_fn_8062CE74_00002EAC
    clrlslwi r0, r0, 24, 2
    mr r3, r28
    lwzx r12, r31, r0
    mtctr r12
    bctrl
    addi r29, r29, 0x1
    cmpwi r29, 0x2
    blt lbl_fn_8062CE74_00002E6C
lbl_fn_8062CE74_00002EAC:
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062CF3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8081FDB8@ha
    li r4, 0x0
    stw r0, 0x14(r1)
    addi r3, r3, lbl_8081FDB8@l
    li r5, 0x2e
    bl memset
    lwz r3, lbl_8087EA90
    lbz r0, 0x1(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062CF3C_00002F28
    lis r3, fn_8062CFBC@ha
    addi r3, r3, fn_8062CFBC@l
    bl fn_80629F98
    lis r4, lbl_8081FCB4@ha
    lis r5, fn_8062D6BC@ha
    addi r4, r4, lbl_8081FCB4@l
    li r3, 0x3
    addi r4, r4, 0x95
    addi r5, r5, fn_8062D6BC@l
    bl fn_80635730
lbl_fn_8062CF3C_00002F28:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062CFA4(void)
{
    nofralloc
    lis r4, lbl_8081FCB4@ha
    li r3, 0x4
    addi r4, r4, lbl_8081FCB4@l
    li r5, 0x0
    addi r4, r4, 0x95
    b fn_80635730
}

asm void fn_8062CFBC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    addi r3, r1, 0xc
    bl fn_806331C8
    clrlwi. r0, r3, 24
    bne lbl_fn_8062CFBC_00002FEC
    lhz r0, 0x12(r1)
    cmplwi r0, 0xf
    bne lbl_fn_8062CFBC_00002FEC
    lbz r0, 0xc(r1)
    cmplwi r0, 0x3
    bge lbl_fn_8062CFBC_00002FEC
    cmplwi r25, 0x4
    bne lbl_fn_8062CFBC_00002FC8
    lis r5, lbl_80764C58@ha
    mr r3, r28
    addi r5, r5, lbl_80764C58@l
    addi r4, r1, 0x8
    lhz r0, 0x4(r5)
    andi. r0, r0, 0xb
    sth r0, 0x8(r1)
    bl fn_806305D8
    b lbl_fn_8062CFBC_00002FEC
lbl_fn_8062CFBC_00002FC8:
    cmplwi r25, 0x5
    bne lbl_fn_8062CFBC_00002FEC
    lis r5, lbl_80764C58@ha
    mr r3, r28
    addi r5, r5, lbl_80764C58@l
    addi r4, r1, 0x8
    lhz r0, 0x4(r5)
    sth r0, 0x8(r1)
    bl fn_806305D8
lbl_fn_8062CFBC_00002FEC:
    lwz r5, lbl_8087EA90
    li r30, 0x1
    lbz r4, 0x1(r5)
    b lbl_fn_8062CFBC_00003030
lbl_fn_8062CFBC_00002FFC:
    clrlwi r3, r30, 24
    clrlslwi r0, r30, 24, 2
    subf r0, r3, r0
    add r3, r5, r0
    lbzx r0, r5, r0
    cmplw r26, r0
    bne lbl_fn_8062CFBC_0000302C
    lbz r0, 0x1(r3)
    cmplwi r0, 0xff
    beq lbl_fn_8062CFBC_0000303C
    cmplw r27, r0
    beq lbl_fn_8062CFBC_0000303C
lbl_fn_8062CFBC_0000302C:
    addi r30, r30, 0x1
lbl_fn_8062CFBC_00003030:
    clrlwi r0, r30, 24
    cmplw r0, r4
    ble lbl_fn_8062CFBC_00002FFC
lbl_fn_8062CFBC_0000303C:
    lbz r0, 0x1(r5)
    clrlwi r3, r30, 24
    cmplw r3, r0
    bgt lbl_fn_8062CFBC_000032B8
    lis r23, lbl_8081FCB4@ha
    li r31, 0x0
    addi r23, r23, lbl_8081FCB4@l
lbl_fn_8062CFBC_00003058:
    clrlslwi r29, r31, 24, 5
    add r24, r23, r29
    lbz r0, 0xb6(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8062CFBC_00003098
    mr r4, r28
    addi r3, r24, 0xb0
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062CFBC_00003098
    mr r3, r24
    addi r3, r3, 0x98
    bl fn_8062A38C
    li r0, 0x0
    stb r0, 0xb6(r24)
    b lbl_fn_8062CFBC_000030A4
lbl_fn_8062CFBC_00003098:
    addi r31, r31, 0x1
    cmplwi r31, 0x3
    blt lbl_fn_8062CFBC_00003058
lbl_fn_8062CFBC_000030A4:
    clrlwi r4, r30, 24
    clrlslwi r3, r30, 24, 2
    subf r30, r4, r3
    lwz r0, lbl_8087EA90
    lwz r4, lbl_8087EA94
    clrlslwi r31, r25, 24, 3
    add r3, r0, r30
    lbz r0, 0x2(r3)
    mulli r0, r0, 0x4a
    add r0, r4, r0
    add r3, r0, r31
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8062CFBC_000032B8
    lis r23, lbl_8081FDB8@ha
    li r29, 0x0
    addi r24, r23, lbl_8081FDB8@l
    b lbl_fn_8062CFBC_0000312C
lbl_fn_8062CFBC_000030EC:
    clrlwi r3, r29, 24
    clrlslwi r0, r29, 24, 3
    add r0, r0, r3
    add r3, r24, r0
    lbz r0, 0x7(r3)
    cmplw r26, r0
    bne lbl_fn_8062CFBC_00003128
    lbz r0, 0x8(r3)
    cmplw r27, r0
    bne lbl_fn_8062CFBC_00003128
    mr r4, r28
    addi r3, r3, 0x1
    bl fn_80629ED8
    cmpwi r3, 0x0
    beq lbl_fn_8062CFBC_0000313C
lbl_fn_8062CFBC_00003128:
    addi r29, r29, 0x1
lbl_fn_8062CFBC_0000312C:
    lbz r0, lbl_8081FDB8@l(r23)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_fn_8062CFBC_000030EC
lbl_fn_8062CFBC_0000313C:
    lwz r0, lbl_8087EA90
    lwz r4, lbl_8087EA94
    add r3, r0, r30
    lbz r0, 0x2(r3)
    mulli r0, r0, 0x4a
    add r0, r4, r0
    add r3, r0, r31
    lbz r0, 0x2(r3)
    cmplwi r0, 0x10
    bne lbl_fn_8062CFBC_000031D0
    lis r27, lbl_8081FDB8@ha
    clrlwi r3, r29, 24
    lbz r0, lbl_8081FDB8@l(r27)
    cmplw r3, r0
    beq lbl_fn_8062CFBC_0000323C
    addi r26, r27, lbl_8081FDB8@l
    b lbl_fn_8062CFBC_000031B4
lbl_fn_8062CFBC_00003180:
    clrlwi r6, r29, 24
    clrlslwi r4, r29, 24, 3
    addi r3, r6, 0x1
    li r5, 0x9
    slwi r0, r3, 3
    add r4, r4, r6
    add r0, r0, r3
    add r3, r26, r4
    add r4, r26, r0
    addi r3, r3, 0x1
    addi r4, r4, 0x1
    bl memcpy
    addi r29, r29, 0x1
lbl_fn_8062CFBC_000031B4:
    lbz r3, lbl_8081FDB8@l(r27)
    clrlwi r0, r29, 24
    cmplw r0, r3
    blt lbl_fn_8062CFBC_00003180
    subi r0, r3, 0x1
    stb r0, lbl_8081FDB8@l(r27)
    b lbl_fn_8062CFBC_0000323C
lbl_fn_8062CFBC_000031D0:
    lis r30, lbl_8081FDB8@ha
    clrlwi r4, r29, 24
    lbz r0, lbl_8081FDB8@l(r30)
    cmplw r4, r0
    bne lbl_fn_8062CFBC_0000323C
    cmplwi r0, 0x5
    bne lbl_fn_8062CFBC_0000320C
    lbz r0, lbl_80880188
    cmplwi r0, 0x2
    blt lbl_fn_8062CFBC_000032B8
    lis r4, lbl_807B3498@ha
    li r3, 0x501
    addi r4, r4, lbl_807B3498@l
    bl fn_80629810
    b lbl_fn_8062CFBC_000032B8
lbl_fn_8062CFBC_0000320C:
    clrlslwi r3, r29, 24, 3
    addi r0, r30, lbl_8081FDB8@l
    add r3, r3, r4
    mr r4, r28
    add r5, r0, r3
    stb r26, 0x7(r5)
    addi r3, r5, 0x1
    stb r27, 0x8(r5)
    bl fn_80629EA4
    lbz r3, lbl_8081FDB8@l(r30)
    addi r0, r3, 0x1
    stb r0, lbl_8081FDB8@l(r30)
lbl_fn_8062CFBC_0000323C:
    lis r3, lbl_8081FCB4@ha
    li r24, 0x0
    addi r26, r3, lbl_8081FCB4@l
    b lbl_fn_8062CFBC_00003280
lbl_fn_8062CFBC_0000324C:
    clrlwi r0, r24, 24
    mr r4, r28
    mulli r23, r0, 0xb
    add r3, r26, r23
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062CFBC_0000327C
    add r3, r26, r23
    li r0, 0x0
    stb r0, 0x9(r3)
    stb r0, 0xa(r3)
    b lbl_fn_8062CFBC_00003290
lbl_fn_8062CFBC_0000327C:
    addi r24, r24, 0x1
lbl_fn_8062CFBC_00003280:
    lbz r0, 0x4d(r26)
    clrlwi r3, r24, 24
    cmplw r3, r0
    blt lbl_fn_8062CFBC_0000324C
lbl_fn_8062CFBC_00003290:
    lis r6, lbl_8081FDB8@ha
    clrlwi r5, r29, 24
    clrlslwi r0, r29, 24, 3
    mr r3, r28
    addi r6, r6, lbl_8081FDB8@l
    li r4, 0x0
    add r0, r0, r5
    add r5, r6, r0
    stb r25, 0x9(r5)
    bl fn_8062D33C
lbl_fn_8062CFBC_000032B8:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8062D33C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_20
    lis r5, lbl_8081FCB4@ha
    mr r20, r3
    addi r28, r5, lbl_8081FCB4@l
    mr r21, r4
    lbz r0, 0x4d(r28)
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    cmpwi r0, 0x0
    li r24, 0x0
    li r23, 0x0
    li r22, 0x0
    beq lbl_fn_8062D33C_00003638
    li r30, 0x0
    b lbl_fn_8062D33C_0000334C
lbl_fn_8062D33C_00003320:
    clrlwi r0, r30, 24
    mr r4, r20
    mulli r29, r0, 0xb
    add r3, r28, r29
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062D33C_00003348
    add r24, r28, r29
    lbz r25, 0xa(r24)
    b lbl_fn_8062D33C_0000335C
lbl_fn_8062D33C_00003348:
    addi r30, r30, 0x1
lbl_fn_8062D33C_0000334C:
    lbz r0, 0x4d(r28)
    clrlwi r3, r30, 24
    cmplw r3, r0
    blt lbl_fn_8062D33C_00003320
lbl_fn_8062D33C_0000335C:
    cmpwi r24, 0x0
    beq lbl_fn_8062D33C_00003638
    lis r30, lbl_8081FDB8@ha
    li r28, 0x0
    addi r31, r30, lbl_8081FDB8@l
    b lbl_fn_8062D33C_000034A0
lbl_fn_8062D33C_00003374:
    clrlwi r3, r28, 24
    clrlslwi r0, r28, 24, 3
    add r29, r0, r3
    mr r4, r20
    add r3, r31, r29
    addi r3, r3, 0x1
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062D33C_0000349C
    lwz r7, lbl_8087EA90
    add r8, r31, r29
    lbz r3, 0x8(r8)
    li r9, 0x1
    lbz r6, 0x1(r7)
    lbz r4, 0x7(r8)
    b lbl_fn_8062D33C_000033E8
lbl_fn_8062D33C_000033B4:
    clrlwi r5, r9, 24
    clrlslwi r0, r9, 24, 2
    subf r0, r5, r0
    add r5, r7, r0
    lbzx r0, r7, r0
    cmplw r0, r4
    bne lbl_fn_8062D33C_000033E4
    lbz r0, 0x1(r5)
    cmplwi r0, 0xff
    beq lbl_fn_8062D33C_000033F4
    cmplw r0, r3
    beq lbl_fn_8062D33C_000033F4
lbl_fn_8062D33C_000033E4:
    addi r9, r9, 0x1
lbl_fn_8062D33C_000033E8:
    clrlwi r0, r9, 24
    cmplw r0, r6
    ble lbl_fn_8062D33C_000033B4
lbl_fn_8062D33C_000033F4:
    clrlwi r3, r9, 24
    clrlslwi r0, r9, 24, 2
    subf r3, r3, r0
    lbz r0, 0x9(r8)
    add r4, r7, r3
    lwz r3, lbl_8087EA94
    lbz r4, 0x2(r4)
    slwi r0, r0, 3
    mulli r4, r4, 0x4a
    add r5, r3, r4
    add r3, r5, r0
    lbz r0, 0x0(r5)
    lbz r4, 0x2(r3)
    or r23, r23, r0
    and. r0, r25, r4
    bne lbl_fn_8062D33C_00003464
    add r3, r31, r29
    clrlwi r0, r27, 24
    lbz r3, 0x9(r3)
    slwi r3, r3, 3
    add r5, r5, r3
    lbz r3, 0x2(r5)
    cmplw r3, r0
    or r22, r22, r3
    ble lbl_fn_8062D33C_0000349C
    lhz r26, 0x4(r5)
    mr r27, r4
    b lbl_fn_8062D33C_0000349C
lbl_fn_8062D33C_00003464:
    lbz r3, 0x6(r3)
    and. r0, r25, r3
    bne lbl_fn_8062D33C_0000349C
    add r4, r31, r29
    clrlwi r0, r27, 24
    lbz r4, 0x9(r4)
    slwi r4, r4, 3
    add r5, r5, r4
    lbz r4, 0x6(r5)
    cmplw r4, r0
    or r22, r22, r4
    ble lbl_fn_8062D33C_0000349C
    mr r27, r3
    lhz r26, 0x8(r5)
lbl_fn_8062D33C_0000349C:
    addi r28, r28, 0x1
lbl_fn_8062D33C_000034A0:
    lbz r0, lbl_8081FDB8@l(r30)
    clrlwi r3, r28, 24
    cmplw r3, r0
    blt lbl_fn_8062D33C_00003374
    clrlwi. r0, r27, 30
    beq lbl_fn_8062D33C_000034D8
    clrlwi r3, r23, 24
    clrlwi r0, r27, 24
    and. r0, r3, r0
    bne lbl_fn_8062D33C_000034D8
    and r0, r23, r22
    clrlwi. r27, r0, 30
    bne lbl_fn_8062D33C_000034D8
    li r26, 0x0
lbl_fn_8062D33C_000034D8:
    cmpwi r21, 0x0
    bne lbl_fn_8062D33C_0000357C
    cmpwi r26, 0x0
    beq lbl_fn_8062D33C_0000357C
    lis r21, lbl_8081FCB4@ha
    li r0, 0x3
    addi r21, r21, lbl_8081FCB4@l
    li r4, 0x0
    mtctr r0
lbl_fn_8062D33C_000034FC:
    clrlslwi r22, r4, 24, 5
    add r3, r21, r22
    lbz r0, 0xb6(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8062D33C_00003548
    li r0, 0x1
    mr r4, r20
    stb r0, 0xb6(r3)
    addi r3, r3, 0xb0
    bl fn_80629EA4
    lis r4, fn_8062D734@ha
    add r3, r21, r22
    addi r4, r4, fn_8062D734@l
    mr r5, r26
    stw r4, 0xa0(r3)
    addi r3, r3, 0x98
    li r4, 0x0
    bl fn_8062A36C
    b lbl_fn_8062D33C_00003638
lbl_fn_8062D33C_00003548:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    bdnz lbl_fn_8062D33C_000034FC
    cmplwi r0, 0x3
    bne lbl_fn_8062D33C_0000357C
    lbz r0, lbl_80880188
    cmplwi r0, 0x2
    blt lbl_fn_8062D33C_00003638
    lis r4, lbl_807B34C4@ha
    li r3, 0x501
    addi r4, r4, lbl_807B34C4@l
    bl fn_80629810
    b lbl_fn_8062D33C_00003638
lbl_fn_8062D33C_0000357C:
    clrlwi. r0, r27, 24
    beq lbl_fn_8062D33C_00003638
    cmplwi r0, 0x1
    bne lbl_fn_8062D33C_000035CC
    li r0, 0x1
    mr r3, r20
    stb r0, 0x9(r24)
    addi r4, r1, 0x9
    bl fn_806359BC
    lbz r0, 0x9(r1)
    cmplwi r0, 0x3
    beq lbl_fn_8062D33C_00003638
    lis r3, lbl_8081FCB4@ha
    lwz r5, lbl_8087EA98
    addi r3, r3, lbl_8081FCB4@l
    mr r4, r20
    lbz r3, 0x95(r3)
    addi r5, r5, 0xa
    bl fn_806357EC
    b lbl_fn_8062D33C_00003638
lbl_fn_8062D33C_000035CC:
    cmplwi r0, 0x2
    bne lbl_fn_8062D33C_00003610
    li r0, 0x2
    mr r3, r20
    stb r0, 0x9(r24)
    addi r4, r1, 0x8
    bl fn_806359BC
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    beq lbl_fn_8062D33C_00003638
    lis r3, lbl_8081FCB4@ha
    lwz r5, lbl_8087EA98
    addi r3, r3, lbl_8081FCB4@l
    mr r4, r20
    lbz r3, 0x95(r3)
    bl fn_806357EC
    b lbl_fn_8062D33C_00003638
lbl_fn_8062D33C_00003610:
    cmplwi r0, 0x4
    bne lbl_fn_8062D33C_00003638
    lis r3, lbl_8081FCB4@ha
    li r0, 0x0
    addi r3, r3, lbl_8081FCB4@l
    stb r0, 0x14(r1)
    lbz r3, 0x95(r3)
    mr r4, r20
    addi r5, r1, 0xc
    bl fn_806357EC
lbl_fn_8062D33C_00003638:
    addi r11, r1, 0x50
    bl _restgpr_20
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8062D6BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    li r3, 0x14
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062D6BC_000036B0
    li r0, 0x109
    mr r4, r27
    sth r0, 0x0(r3)
    stb r28, 0xe(r3)
    sth r29, 0x10(r3)
    stb r30, 0x12(r3)
    addi r3, r3, 0x8
    bl fn_80629EA4
    mr r3, r31
    bl fn_8062A350
lbl_fn_8062D6BC_000036B0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062D734(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_8081FCB4@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_8081FCB4@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    li r30, 0x0
    lbz r0, 0xb6(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8062D734_0000370C
    addi r0, r4, 0x98
    cmplw r0, r3
    bne lbl_fn_8062D734_0000370C
    li r0, 0x0
    stb r0, 0xb6(r4)
    b lbl_fn_8062D734_00003760
lbl_fn_8062D734_0000370C:
    lbz r0, 0xd6(r4)
    li r30, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8062D734_00003734
    addi r0, r4, 0xb8
    cmplw r0, r3
    bne lbl_fn_8062D734_00003734
    li r0, 0x0
    stb r0, 0xd6(r4)
    b lbl_fn_8062D734_00003760
lbl_fn_8062D734_00003734:
    lbz r0, 0xf6(r4)
    li r30, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_8062D734_0000375C
    addi r0, r4, 0xd8
    cmplw r0, r3
    bne lbl_fn_8062D734_0000375C
    li r0, 0x0
    stb r0, 0xf6(r4)
    b lbl_fn_8062D734_00003760
lbl_fn_8062D734_0000375C:
    li r30, 0x3
lbl_fn_8062D734_00003760:
    cmplwi r30, 0x3
    beq lbl_fn_8062D734_000037A8
    li r3, 0xe
    bl fn_80626AC0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8062D734_000037A8
    lis r4, lbl_8081FCB4@ha
    li r5, 0x10a
    addi r4, r4, lbl_8081FCB4@l
    clrlslwi r0, r30, 24, 5
    sth r5, 0x0(r3)
    add r4, r4, r0
    addi r4, r4, 0xb0
    addi r3, r3, 0x8
    bl fn_80629EA4
    mr r3, r31
    bl fn_8062A350
lbl_fn_8062D734_000037A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8062D82C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_8081FCB4@ha
    mr r31, r3
    addi r30, r30, lbl_8081FCB4@l
    li r27, 0x0
lbl_fn_8062D82C_000037E4:
    clrlslwi r28, r27, 24, 5
    add r29, r30, r28
    lbz r0, 0xb6(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8062D82C_00003824
    addi r3, r29, 0xb0
    addi r4, r31, 0x8
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062D82C_00003824
    mr r3, r29
    addi r3, r3, 0x98
    bl fn_8062A38C
    li r0, 0x0
    stb r0, 0xb6(r29)
    b lbl_fn_8062D82C_00003830
lbl_fn_8062D82C_00003824:
    addi r27, r27, 0x1
    cmplwi r27, 0x3
    blt lbl_fn_8062D82C_000037E4
lbl_fn_8062D82C_00003830:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8062D82C_00003840
    b lbl_fn_8062D82C_000038C8
lbl_fn_8062D82C_00003840:
    lbz r0, 0x12(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8062D82C_000038BC
    lis r3, lbl_8081FCB4@ha
    li r29, 0x0
    addi r30, r3, lbl_8081FCB4@l
    b lbl_fn_8062D82C_000038A8
lbl_fn_8062D82C_0000385C:
    clrlwi r0, r29, 24
    addi r4, r31, 0x8
    mulli r28, r0, 0xb
    add r3, r30, r28
    bl fn_80629ED8
    cmpwi r3, 0x0
    bne lbl_fn_8062D82C_000038A4
    add r5, r30, r28
    lbz r0, 0x9(r5)
    clrlwi. r6, r0, 30
    beq lbl_fn_8062D82C_000038C8
    lbz r0, 0xa(r5)
    addi r3, r31, 0x8
    li r4, 0x0
    or r0, r0, r6
    stb r0, 0xa(r5)
    bl fn_8062D33C
    b lbl_fn_8062D82C_000038C8
lbl_fn_8062D82C_000038A4:
    addi r29, r29, 0x1
lbl_fn_8062D82C_000038A8:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_fn_8062D82C_0000385C
    b lbl_fn_8062D82C_000038C8
lbl_fn_8062D82C_000038BC:
    addi r3, r31, 0x8
    li r4, 0x0
    bl fn_8062D33C
lbl_fn_8062D82C_000038C8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062D94C(void)
{
    nofralloc
    li r4, 0x1
    addi r3, r3, 0x8
    b fn_8062D33C
}

asm void fn_8062D958(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x6
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stb r0, 0x8(r1)
    bl fn_8063F8CC
    lis r31, lbl_8081FDE8@ha
    li r4, 0x0
    addi r3, r31, lbl_8081FDE8@l
    li r5, 0x230
    bl memset
    lbz r4, 0x8(r29)
    la r3, lbl_8087EAD0
    bl fn_8063FF0C
    lis r3, fn_8062EE08@ha
    addi r3, r3, fn_8062EE08@l
    bl fn_8063F910
    clrlwi. r0, r3, 24
    bne lbl_fn_8062D958_00003A28
    lwz r4, 0x30(r29)
    addi r12, r31, lbl_8081FDE8@l
    li r3, 0x0
    li r0, 0x2
    stw r4, 0x224(r12)
    li r29, 0x0
    li r11, 0x1
    li r10, 0xff
    stb r3, 0x8(r1)
    li r9, 0x10
    mtctr r0
lbl_fn_8062D958_00003974:
    clrlslwi r3, r29, 24, 5
    clrlwi r0, r29, 24
    add r31, r12, r3
    addi r8, r29, 0x1
    stb r11, 0x2c(r31)
    add r30, r12, r0
    addi r7, r29, 0x2
    addi r6, r29, 0x3
    stb r10, 0x26(r31)
    addi r5, r29, 0x4
    addi r4, r29, 0x5
    addi r3, r29, 0x6
    stb r29, 0x22(r31)
    addi r0, r29, 0x7
    addi r29, r29, 0x8
    stb r9, 0x214(r30)
    stb r11, 0x4c(r31)
    stb r10, 0x46(r31)
    stb r8, 0x42(r31)
    stb r9, 0x215(r30)
    stb r11, 0x6c(r31)
    stb r10, 0x66(r31)
    stb r7, 0x62(r31)
    stb r9, 0x216(r30)
    stb r11, 0x8c(r31)
    stb r10, 0x86(r31)
    stb r6, 0x82(r31)
    stb r9, 0x217(r30)
    stb r11, 0xac(r31)
    stb r10, 0xa6(r31)
    stb r5, 0xa2(r31)
    stb r9, 0x218(r30)
    stb r11, 0xcc(r31)
    stb r10, 0xc6(r31)
    stb r4, 0xc2(r31)
    stb r9, 0x219(r30)
    stb r11, 0xec(r31)
    stb r10, 0xe6(r31)
    stb r3, 0xe2(r31)
    stb r9, 0x21a(r30)
    stb r11, 0x10c(r31)
    stb r10, 0x106(r31)
    stb r0, 0x102(r31)
    stb r9, 0x21b(r30)
    bdnz lbl_fn_8062D958_00003974
lbl_fn_8062D958_00003A28:
    lis r5, lbl_8081FDE8@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_8081FDE8@l
    li r3, 0x0
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062DACC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_8081FDE8@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, lbl_8081FDE8@l
    stw r30, 0x18(r1)
    lwz r0, 0x224(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8062DACC_00003B4C
    lbz r0, 0x22d(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8062DACC_00003B10
    li r0, 0x0
    stb r0, 0x8(r1)
    bl fn_8063F98C
    clrlwi. r0, r3, 24
    beq lbl_fn_8062DACC_00003AB0
    li r0, 0x6
    stb r0, 0x8(r1)
lbl_fn_8062DACC_00003AB0:
    lis r31, lbl_8081FDE8@ha
    li r30, 0x0
    addi r31, r31, lbl_8081FDE8@l
lbl_fn_8062DACC_00003ABC:
    clrlslwi r0, r30, 24, 5
    add r3, r31, r0
    addi r3, r3, 0x14
    bl fn_8062A5F0
    addi r30, r30, 0x1
    cmplwi r30, 0x10
    blt lbl_fn_8062DACC_00003ABC
    lis r31, lbl_8081FDE8@ha
    addi r31, r31, lbl_8081FDE8@l
    addi r3, r31, 0x228
    bl fn_8062A5F0
    lwz r12, 0x224(r31)
    addi r4, r1, 0x8
    li r3, 0x1
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x0
    li r5, 0x230
    bl memset
    b lbl_fn_8062DACC_00003B4C
lbl_fn_8062DACC_00003B10:
    li r0, 0x1
    li r30, 0x0
    stb r0, 0x22e(r31)
lbl_fn_8062DACC_00003B1C:
    clrlslwi r0, r30, 24, 5
    add r3, r31, r0
    lbz r0, 0x2c(r3)
    cmplwi r0, 0x3
    bne lbl_fn_8062DACC_00003B40
    addi r3, r3, 0x10
    li r4, 0x1701
    li r5, 0x0
    bl fn_8062F470
lbl_fn_8062DACC_00003B40:
    addi r30, r30, 0x1
    cmplwi r30, 0x10
    blt lbl_fn_8062DACC_00003B1C
lbl_fn_8062DACC_00003B4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8062DBD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stb r0, 0x8(r1)
    bl fn_8063F98C
    clrlwi. r0, r3, 24
    beq lbl_fn_8062DBD0_00003B94
    li r0, 0x6
    stb r0, 0x8(r1)
lbl_fn_8062DBD0_00003B94:
    lis r31, lbl_8081FDE8@ha
    li r30, 0x0
    addi r31, r31, lbl_8081FDE8@l
lbl_fn_8062DBD0_00003BA0:
    clrlslwi r0, r30, 24, 5
    add r3, r31, r0
    addi r3, r3, 0x14
    bl fn_8062A5F0
    addi r30, r30, 0x1
    cmplwi r30, 0x10
    blt lbl_fn_8062DBD0_00003BA0
    lis r31, lbl_8081FDE8@ha
    addi r31, r31, lbl_8081FDE8@l
    addi r3, r31, 0x228
    bl fn_8062A5F0
    lwz r12, 0x224(r31)
    addi r4, r1, 0x8
    li r3, 0x1
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x0
    li r5, 0x230
    bl memset
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
