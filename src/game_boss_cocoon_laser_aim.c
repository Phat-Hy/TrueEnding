#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800698DC(void);
extern void fn_8006AC08(void);
extern void fn_8006BD78(void);
extern void fn_8006EF48(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800A4450(void);
extern void fn_800A5B38(void);
extern void fn_800DC6B4(void);
extern void fn_801F3FF8(void);
extern void fn_801F4E8C(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_80470604(void);
extern void fn_804730D4(void);
extern void fn_804730E4(void);
extern void fn_80473E74(void);
extern void fn_80473EFC(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80473FCC(void);
extern void fn_805F9EF0(void);
extern void fn_8067E23C(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075561C[];
extern u8 lbl_80755B88[];
extern u8 lbl_80755BF0[];
extern u8 lbl_80779810[];
extern u8 lbl_8078FBA8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807BB380[];

/* Small data declarations */
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F518;
extern u32 lbl_80886EC0;
extern u32 lbl_80886EC4;
extern u32 lbl_80886ED8;

/* Function declarations */
void fn_8046EBC4(void);
void fn_8046EC7C(void);
void fn_8046ECC8(void);
void fn_8046ECDC(void);
void fn_8046EED8(void);
void fn_8046EF08(void);
void fn_8046F014(void);
void fn_8046F2C4(void);
void fn_8046F460(void);
void fn_8046F4D4(void);
void fn_8046F544(void);
void fn_8046F5B4(void);
void fn_8046F5CC(void);
void fn_8046F834(void);
void fn_8046F8B8(void);
void fn_8046F96C(void);
void fn_8046FA18(void);
void fn_8046FBB0(void);
void fn_8046FD1C(void);
void fn_8046FD2C(void);
void fn_8046FD7C(void);
void fn_80470198(void);
void fn_804701F8(void);
void fn_80470264(void);
void fn_804702BC(void);
void fn_80470364(void);
void fn_8047043C(void);
void fn_80470528(void);
void fn_8047054C(void);
void fn_80470564(void);
void fn_80470580(void);
void fn_8047059C(void);
void fn_804705B8(void);

asm void fn_8046EBC4(void)
{
    nofralloc
    lwz r7, 0x0(r3)
    lwz r6, 0x0(r5)
    lwz r9, 0x48(r7)
    lwz r8, 0x48(r6)
    lwz r6, 0x0(r4)
    subf r0, r9, r8
    orc r7, r8, r9
    lwz r10, 0x48(r6)
    srwi r0, r0, 1
    subf r0, r0, r7
    srwi. r7, r0, 31
    orc r6, r10, r8
    subf r0, r8, r10
    srwi r0, r0, 1
    subf r0, r0, r6
    srwi r0, r0, 31
    beq lbl_fn_8046EBC4_0000004C
    cmpwi r0, 0x0
    bnelr
lbl_fn_8046EBC4_0000004C:
    cmpwi r7, 0x0
    bne lbl_fn_8046EBC4_00000070
    cmpwi r0, 0x0
    bne lbl_fn_8046EBC4_00000070
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    stw r5, 0x0(r4)
    blr
lbl_fn_8046EBC4_00000070:
    cmplw r10, r9
    bge lbl_fn_8046EBC4_00000088
    lwz r6, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    stw r6, 0x0(r4)
lbl_fn_8046EBC4_00000088:
    cmpwi r7, 0x0
    beq lbl_fn_8046EBC4_000000A4
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    stw r3, 0x0(r5)
    blr
lbl_fn_8046EBC4_000000A4:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    stw r4, 0x0(r5)
    blr
}

asm void fn_8046EC7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x3ee0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8046EC7C_000000F0
    lis r4, lbl_8075561C@ha
    li r5, 0x0
    addi r4, r4, lbl_8075561C@l
    addi r4, r4, 0x16f
    bl fn_801F3FF8
    stw r3, 0x3ee0(r31)
lbl_fn_8046EC7C_000000F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046ECC8(void)
{
    nofralloc
    lwz r3, 0x3ee0(r3)
    lwz r0, 0x38(r3)
    extrwi r0, r0, 1, 30
    xori r3, r0, 0x1
    blr
}

asm void fn_8046ECDC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lis r30, lbl_8075561C@ha
    lwz r5, 0x3ee0(r3)
    addi r30, r30, lbl_8075561C@l
    mr r31, r3
    mr r27, r4
    addi r29, r5, 0x58
    addi r3, r30, 0x164
    bl fn_800DC6B4
    lfs f1, lbl_80886EC0
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r3, 0x3ee0(r31)
    addi r4, r30, 0x18b
    addi r3, r3, 0x58
    bl fn_801FEC74
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8046ECDC_00000228
    lwz r29, 0x3ee0(r31)
    addi r3, r30, 0x196
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x14
    bl fn_801F4E8C
    mr r4, r28
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, 0x1c(r1)
    bne lbl_fn_8046ECDC_000001CC
    addi r4, r1, 0xa
    b lbl_fn_8046ECDC_000001D0
lbl_fn_8046ECDC_000001CC:
    lwz r4, 0x10(r1)
lbl_fn_8046ECDC_000001D0:
    lfs f2, lbl_80886EC0
    li r5, 0x1
    li r6, 0x4
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_8046ECDC_000001F8
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_8046ECDC_000001F8:
    lwz r4, 0x3ee0(r31)
    lis r3, lbl_8075561C@ha
    addi r3, r3, lbl_8075561C@l
    addi r3, r3, 0x1a3
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f0, lbl_80886ED8
    mr r4, r3
    mr r3, r28
    li r5, 0x0
    fadds f1, f0, f31
    bl fn_801FED24
lbl_fn_8046ECDC_00000228:
    cmpwi r27, 0x0
    beq lbl_fn_8046ECDC_000002E0
    lwz r0, 0x3eec(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8046ECDC_000002A0
    li r0, 0x0
    stw r0, 0x3ef0(r31)
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_8046ECDC_0000028C
    bl fn_800A5B38
    cmpwi r3, 0x1
    bgt lbl_fn_8046ECDC_0000028C
    lwz r4, 0x3ee0(r31)
    lis r3, lbl_8075561C@ha
    addi r3, r3, lbl_8075561C@l
    addi r3, r3, 0x164
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886EC4
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    li r0, 0x1
    stw r0, 0x3ef0(r31)
lbl_fn_8046ECDC_0000028C:
    li r3, 0x1
    li r0, 0x3c
    stw r3, 0x3eec(r31)
    stw r0, 0x3ee8(r31)
    b lbl_fn_8046ECDC_000002E0
lbl_fn_8046ECDC_000002A0:
    lwz r0, 0x3ef0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8046ECDC_000002B4
    lfs f31, lbl_80886EC4
    b lbl_fn_8046ECDC_000002B8
lbl_fn_8046ECDC_000002B4:
    lfs f31, lbl_80886EC0
lbl_fn_8046ECDC_000002B8:
    lwz r4, 0x3ee0(r31)
    lis r3, lbl_8075561C@ha
    addi r3, r3, lbl_8075561C@l
    addi r3, r3, 0x164
    addi r28, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
lbl_fn_8046ECDC_000002E0:
    lwz r0, 0x3ef4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8046ECDC_000002F4
    li r0, 0xa
    stw r0, 0x3ee4(r31)
lbl_fn_8046ECDC_000002F4:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8046EED8(void)
{
    nofralloc
    li r5, 0x0
    stw r5, 0x3ee4(r3)
    lwz r4, 0x3ee0(r3)
    lfs f0, lbl_80886EC0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x3ee0(r3)
    stfs f0, 0x100(r4)
    stw r5, 0x3eec(r3)
    stw r5, 0x3ef0(r3)
    blr
}

asm void fn_8046EF08(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r28, r4
    mr r31, r5
    li r29, 0x1
    bne lbl_fn_8046EF08_00000370
    ori r29, r29, 0x2
lbl_fn_8046EF08_00000370:
    lis r5, lbl_8075561C@ha
    li r3, 0x7c
    addi r5, r5, lbl_8075561C@l
    li r4, 0x2
    addi r5, r5, 0x153
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8046EF08_000003B0
    mr r4, r28
    mr r5, r31
    mr r6, r29
    bl fn_8046FA18
    mr r30, r3
lbl_fn_8046EF08_000003B0:
    addi r29, r27, 0x4024
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8046EF08_000003E8
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8046EF08_000003E8:
    addic. r3, r31, 0x8
    addi r0, r27, 0x4024
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    beq lbl_fn_8046EF08_00000400
    stw r30, 0x0(r3)
lbl_fn_8046EF08_00000400:
    lwz r3, 0x0(r29)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r5)
    stw r5, 0x0(r29)
    stw r29, 0x4(r5)
    lwz r3, 0x4020(r27)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x4020(r27)
    b lbl_fn_8046EF08_00000438
    bl dtor_80084684
lbl_fn_8046EF08_00000438:
    mr r3, r30
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046F014(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, lbl_8075561C@ha
    li r4, 0x2
    stw r0, 0x34(r1)
    addi r7, r7, lbl_8075561C@l
    addi r5, r7, 0x153
    stw r31, 0x2c(r1)
    mr r31, r3
    li r3, 0x7c
    mr r6, r5
    stw r30, 0x28(r1)
    addi r30, r7, 0x1be
    stw r29, 0x24(r1)
    addi r29, r7, 0x1aa
    li r7, 0x0
    stw r28, 0x20(r1)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8046F014_000004B8
    mr r4, r30
    mr r5, r29
    li r6, 0x0
    bl fn_8046FA18
    mr r28, r3
lbl_fn_8046F014_000004B8:
    addi r30, r31, 0x4030
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8046F014_000004F0
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8046F014_000004F0:
    addic. r3, r29, 0x8
    addi r0, r31, 0x4030
    stw r0, 0x18(r1)
    stw r29, 0x1c(r1)
    beq lbl_fn_8046F014_00000508
    stw r28, 0x0(r3)
lbl_fn_8046F014_00000508:
    lwz r3, 0x0(r30)
    li r4, 0x0
    lwz r5, 0x1c(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r5)
    stw r5, 0x0(r30)
    stw r30, 0x4(r5)
    lwz r3, 0x402c(r31)
    stw r4, 0x1c(r1)
    addi r0, r3, 0x1
    stw r0, 0x402c(r31)
    b lbl_fn_8046F014_00000540
    bl dtor_80084684
lbl_fn_8046F014_00000540:
    lis r8, lbl_8075561C@ha
    li r3, 0x7c
    addi r8, r8, lbl_8075561C@l
    li r4, 0x2
    addi r5, r8, 0x153
    li r7, 0x0
    mr r6, r5
    addi r30, r8, 0x1d1
    addi r29, r8, 0x1e5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8046F014_00000588
    mr r4, r29
    mr r5, r30
    li r6, 0x0
    bl fn_8046FA18
    mr r28, r3
lbl_fn_8046F014_00000588:
    addi r30, r31, 0x4030
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8046F014_000005C0
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8046F014_000005C0:
    addic. r3, r29, 0x8
    addi r0, r31, 0x4030
    stw r0, 0x10(r1)
    stw r29, 0x14(r1)
    beq lbl_fn_8046F014_000005D8
    stw r28, 0x0(r3)
lbl_fn_8046F014_000005D8:
    lwz r3, 0x0(r30)
    li r4, 0x0
    lwz r5, 0x14(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r5)
    stw r5, 0x0(r30)
    stw r30, 0x4(r5)
    lwz r3, 0x402c(r31)
    stw r4, 0x14(r1)
    addi r0, r3, 0x1
    stw r0, 0x402c(r31)
    b lbl_fn_8046F014_00000610
    bl dtor_80084684
lbl_fn_8046F014_00000610:
    lis r8, lbl_8075561C@ha
    li r3, 0x7c
    addi r8, r8, lbl_8075561C@l
    li r4, 0x2
    addi r5, r8, 0x153
    li r7, 0x0
    mr r6, r5
    addi r30, r8, 0x1f8
    addi r29, r8, 0x208
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8046F014_00000658
    mr r4, r29
    mr r5, r30
    li r6, 0x0
    bl fn_8046FA18
    mr r28, r3
lbl_fn_8046F014_00000658:
    addi r30, r31, 0x4030
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8046F014_00000690
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8046F014_00000690:
    addic. r3, r29, 0x8
    addi r0, r31, 0x4030
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_8046F014_000006A8
    stw r28, 0x0(r3)
lbl_fn_8046F014_000006A8:
    lwz r3, 0x0(r30)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r5)
    stw r5, 0x0(r30)
    stw r30, 0x4(r5)
    lwz r3, 0x402c(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x402c(r31)
    b lbl_fn_8046F014_000006E0
    bl dtor_80084684
lbl_fn_8046F014_000006E0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046F2C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_8075561C@ha
    addi r31, r31, lbl_8075561C@l
    stw r30, 0x8(r1)
    mr r30, r3
    addi r4, r31, 0x217
    addi r5, r31, 0x227
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x238
    addi r5, r31, 0x248
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x259
    addi r5, r31, 0x26e
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x284
    addi r5, r31, 0x29f
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x2bb
    addi r5, r31, 0x2d4
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x2ee
    addi r5, r31, 0x302
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x317
    addi r5, r31, 0x330
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x34a
    addi r5, r31, 0x35e
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x373
    addi r5, r31, 0x383
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x394
    addi r5, r31, 0x3a7
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x3bb
    addi r5, r31, 0x3ce
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x3e2
    addi r5, r31, 0x3f5
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x409
    addi r5, r31, 0x41c
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x430
    addi r5, r31, 0x443
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x457
    addi r5, r31, 0x46a
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x47e
    addi r5, r31, 0x491
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x4a5
    addi r5, r31, 0x4b8
    li r6, 0x1
    bl fn_8046EF08
    mr r3, r30
    addi r4, r31, 0x4cc
    addi r5, r31, 0x4df
    li r6, 0x1
    bl fn_8046EF08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046F460(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, 0x0(r4)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x2f
    bne lbl_fn_8046F460_000008C0
    addi r4, r4, 0x1
lbl_fn_8046F460_000008C0:
    mr r3, r4
    bl fn_800DC6B4
    lwz r4, 0x4028(r31)
    addi r6, r31, 0x4024
    b lbl_fn_8046F460_000008F0
lbl_fn_8046F460_000008D4:
    lwz r5, 0x8(r4)
    lwz r0, 0x28(r5)
    cmplw r3, r0
    bne lbl_fn_8046F460_000008EC
    mr r3, r5
    b lbl_fn_8046F460_000008FC
lbl_fn_8046F460_000008EC:
    lwz r4, 0x4(r4)
lbl_fn_8046F460_000008F0:
    cmplw r4, r6
    bne lbl_fn_8046F460_000008D4
    li r3, 0x0
lbl_fn_8046F460_000008FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046F4D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x4030
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r31, 0x4034(r3)
    b lbl_fn_8046F4D4_00000958
lbl_fn_8046F4D4_00000938:
    lwz r3, 0x8(r31)
    mr r4, r29
    bl fn_8046FBB0
    cmpwi r3, -0x1
    beq lbl_fn_8046F4D4_00000954
    li r3, 0x1
    b lbl_fn_8046F4D4_00000964
lbl_fn_8046F4D4_00000954:
    lwz r31, 0x4(r31)
lbl_fn_8046F4D4_00000958:
    cmplw r31, r30
    bne lbl_fn_8046F4D4_00000938
    li r3, 0x0
lbl_fn_8046F4D4_00000964:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046F544(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r30, r3, 0x4030
    li r29, 0x0
    lwz r31, 0x4034(r3)
    b lbl_fn_8046F544_000009D0
lbl_fn_8046F544_000009B0:
    lwz r3, 0x8(r31)
    mr r4, r25
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_8046FD7C
    add r29, r29, r3
    lwz r31, 0x4(r31)
lbl_fn_8046F544_000009D0:
    cmplw r31, r30
    bne lbl_fn_8046F544_000009B0
    mr r3, r29
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046F5B4(void)
{
    nofralloc
    lwz r5, 0x50(r3)
    lis r6, lbl_8078FBA8@ha
    mr r3, r4
    addi r4, r6, lbl_8078FBA8@l
    crclr 6
    b sprintf
}

asm void fn_8046F5CC(void)
{
    nofralloc
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    bne lbl_fn_8046F5CC_00000A3C
    lwz r0, 0x48(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r5, r0, 0x4c
    beq lbl_fn_8046F5CC_00000A2C
    stw r4, 0x0(r5)
lbl_fn_8046F5CC_00000A2C:
    lwz r4, 0x48(r3)
    addi r0, r4, 0x1
    stw r0, 0x48(r3)
    blr
lbl_fn_8046F5CC_00000A3C:
    lwz r8, 0x48(r4)
    subi r9, r5, 0x1
    li r7, 0x0
    b lbl_fn_8046F5CC_00000A94
lbl_fn_8046F5CC_00000A4C:
    add r5, r7, r9
    srwi r0, r5, 31
    add r6, r0, r5
    extlwi r0, r6, 30, 1
    add r5, r3, r0
    srawi r6, r6, 1
    lwz r5, 0x4c(r5)
    lwz r0, 0x48(r5)
    cmplw r8, r0
    ble lbl_fn_8046F5CC_00000A78
    addi r7, r6, 0x1
lbl_fn_8046F5CC_00000A78:
    slwi r0, r6, 2
    add r5, r3, r0
    lwz r5, 0x4c(r5)
    lwz r0, 0x48(r5)
    cmplw r8, r0
    bgt lbl_fn_8046F5CC_00000A94
    subi r9, r6, 0x1
lbl_fn_8046F5CC_00000A94:
    cmpw r7, r9
    blt lbl_fn_8046F5CC_00000A4C
    slwi r7, r7, 2
    add r6, r3, r7
    lwz r5, 0x4c(r6)
    lwz r0, 0x48(r5)
    cmplw r8, r0
    bge lbl_fn_8046F5CC_00000B8C
    srawi r0, r7, 2
    lwz r8, 0x48(r3)
    addze r6, r0
    cmplw cr1, r8, r6
    ble cr1, lbl_fn_8046F5CC_00000B70
    subf r0, r6, r8
    addi r7, r6, 0x8
    cmplwi r0, 0x8
    ble lbl_fn_8046F5CC_00000B48
    blt cr1, lbl_fn_8046F5CC_00000B48
    addi r0, r8, 0x7
    slwi r5, r8, 2
    subf r0, r7, r0
    srwi r0, r0, 3
    add r5, r3, r5
    mtctr r0
    cmplw r8, r7
    ble lbl_fn_8046F5CC_00000B48
lbl_fn_8046F5CC_00000AFC:
    lwz r0, 0x48(r5)
    subi r8, r8, 0x8
    stw r0, 0x4c(r5)
    lwz r0, 0x44(r5)
    stw r0, 0x48(r5)
    lwz r0, 0x40(r5)
    stw r0, 0x44(r5)
    lwz r0, 0x3c(r5)
    stw r0, 0x40(r5)
    lwz r0, 0x38(r5)
    stw r0, 0x3c(r5)
    lwz r0, 0x34(r5)
    stw r0, 0x38(r5)
    lwz r0, 0x30(r5)
    stw r0, 0x34(r5)
    lwz r0, 0x2c(r5)
    stw r0, 0x30(r5)
    subi r5, r5, 0x20
    bdnz lbl_fn_8046F5CC_00000AFC
lbl_fn_8046F5CC_00000B48:
    slwi r5, r8, 2
    subf r0, r6, r8
    add r5, r3, r5
    mtctr r0
    cmplw r8, r6
    ble lbl_fn_8046F5CC_00000B70
lbl_fn_8046F5CC_00000B60:
    lwz r0, 0x48(r5)
    stw r0, 0x4c(r5)
    subi r5, r5, 0x4
    bdnz lbl_fn_8046F5CC_00000B60
lbl_fn_8046F5CC_00000B70:
    slwi r0, r6, 2
    add r5, r3, r0
    stw r4, 0x4c(r5)
    lwz r4, 0x48(r3)
    addi r0, r4, 0x1
    stw r0, 0x48(r3)
    blr
lbl_fn_8046F5CC_00000B8C:
    addi r5, r3, 0x4c
    addi r0, r6, 0x50
    subf r0, r5, r0
    lwz r8, 0x48(r3)
    srawi r0, r0, 2
    addze r6, r0
    cmplw cr1, r8, r6
    ble cr1, lbl_fn_8046F5CC_00000C54
    subf r0, r6, r8
    addi r7, r6, 0x8
    cmplwi r0, 0x8
    ble lbl_fn_8046F5CC_00000C2C
    blt cr1, lbl_fn_8046F5CC_00000C2C
    addi r0, r8, 0x7
    slwi r5, r8, 2
    subf r0, r7, r0
    srwi r0, r0, 3
    add r5, r3, r5
    mtctr r0
    cmplw r8, r7
    ble lbl_fn_8046F5CC_00000C2C
lbl_fn_8046F5CC_00000BE0:
    lwz r0, 0x48(r5)
    subi r8, r8, 0x8
    stw r0, 0x4c(r5)
    lwz r0, 0x44(r5)
    stw r0, 0x48(r5)
    lwz r0, 0x40(r5)
    stw r0, 0x44(r5)
    lwz r0, 0x3c(r5)
    stw r0, 0x40(r5)
    lwz r0, 0x38(r5)
    stw r0, 0x3c(r5)
    lwz r0, 0x34(r5)
    stw r0, 0x38(r5)
    lwz r0, 0x30(r5)
    stw r0, 0x34(r5)
    lwz r0, 0x2c(r5)
    stw r0, 0x30(r5)
    subi r5, r5, 0x20
    bdnz lbl_fn_8046F5CC_00000BE0
lbl_fn_8046F5CC_00000C2C:
    slwi r5, r8, 2
    subf r0, r6, r8
    add r5, r3, r5
    mtctr r0
    cmplw r8, r6
    ble lbl_fn_8046F5CC_00000C54
lbl_fn_8046F5CC_00000C44:
    lwz r0, 0x48(r5)
    stw r0, 0x4c(r5)
    subi r5, r5, 0x4
    bdnz lbl_fn_8046F5CC_00000C44
lbl_fn_8046F5CC_00000C54:
    slwi r0, r6, 2
    add r5, r3, r0
    stw r4, 0x4c(r5)
    lwz r4, 0x48(r3)
    addi r0, r4, 0x1
    stw r0, 0x48(r3)
    blr
}

asm void fn_8046F834(void)
{
    nofralloc
    lwz r3, 0x0(r4)
    li r7, 0x0
    subi r8, r3, 0x1
    b lbl_fn_8046F834_00000CE4
lbl_fn_8046F834_00000C80:
    add r3, r7, r8
    srwi r0, r3, 31
    add r3, r0, r3
    extlwi r0, r3, 30, 1
    add r6, r4, r0
    srawi r9, r3, 1
    lwz r3, 0x4(r6)
    lwz r0, 0x48(r3)
    cmplw r5, r0
    ble lbl_fn_8046F834_00000CB0
    addi r7, r9, 0x1
    b lbl_fn_8046F834_00000CE4
lbl_fn_8046F834_00000CB0:
    bge lbl_fn_8046F834_00000CBC
    subi r8, r9, 0x1
    b lbl_fn_8046F834_00000CE4
lbl_fn_8046F834_00000CBC:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8046F834_00000CDC
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8046F834_00000CDC
    li r3, 0x0
    blr
lbl_fn_8046F834_00000CDC:
    lwz r3, 0x4(r6)
    blr
lbl_fn_8046F834_00000CE4:
    cmpw r7, r8
    ble lbl_fn_8046F834_00000C80
    li r3, 0x0
    blr
}

asm void fn_8046F8B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    li r29, 0x0
    mr r30, r25
    li r28, 0x0
    li r31, 0x0
    b lbl_fn_8046F8B8_00000D8C
lbl_fn_8046F8B8_00000D24:
    lwz r5, 0x48(r25)
    b lbl_fn_8046F8B8_00000D34
lbl_fn_8046F8B8_00000D2C:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_8046F8B8_00000D34:
    cmplw r29, r5
    bge lbl_fn_8046F8B8_00000D50
    lwz r3, 0x4c(r30)
    lwz r4, 0x0(r26)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bgt lbl_fn_8046F8B8_00000D2C
lbl_fn_8046F8B8_00000D50:
    cmplw r29, r5
    lwz r4, 0x0(r26)
    bge lbl_fn_8046F8B8_00000D80
    lwz r3, 0x4c(r30)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bne lbl_fn_8046F8B8_00000D80
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8046F8B8_00000D80
    bl fn_804730D4
    b lbl_fn_8046F8B8_00000D84
lbl_fn_8046F8B8_00000D80:
    stw r31, 0x0(r26)
lbl_fn_8046F8B8_00000D84:
    addi r28, r28, 0x1
    addi r26, r26, 0x4
lbl_fn_8046F8B8_00000D8C:
    cmplw r28, r27
    blt lbl_fn_8046F8B8_00000D24
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046F96C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    mr r31, r26
    li r29, 0x0
    b lbl_fn_8046F96C_00000E38
lbl_fn_8046F96C_00000DD4:
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8046F96C_00000E30
    lwz r5, 0x48(r26)
    b lbl_fn_8046F96C_00000DF0
lbl_fn_8046F96C_00000DE8:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8046F96C_00000DF0:
    cmplw r30, r5
    bge lbl_fn_8046F96C_00000E08
    lwz r3, 0x4c(r31)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bgt lbl_fn_8046F96C_00000DE8
lbl_fn_8046F96C_00000E08:
    cmplw r30, r5
    bge lbl_fn_8046F96C_00000E40
    lwz r3, 0x4c(r31)
    lwz r0, 0x48(r3)
    cmplw r4, r0
    bne lbl_fn_8046F96C_00000E30
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8046F96C_00000E30
    bl fn_804730E4
lbl_fn_8046F96C_00000E30:
    addi r29, r29, 0x1
    addi r27, r27, 0x4
lbl_fn_8046F96C_00000E38:
    cmplw r29, r28
    blt lbl_fn_8046F96C_00000DD4
lbl_fn_8046F96C_00000E40:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8046FA18(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    addi r28, r3, 0x8
    mr r29, r3
    mr r30, r4
    mr r24, r5
    mr r31, r6
    mr r3, r28
    bl fn_80473E74
    lis r27, lbl_8078FBB0@ha
    addi r26, r29, 0x10
    addi r27, r27, lbl_8078FBB0@l
    stw r27, 0x0(r28)
    mr r3, r26
    bl fn_80473E74
    addi r25, r29, 0x1c
    li r28, 0x0
    stw r27, 0x0(r26)
    mr r3, r25
    stw r28, 0x18(r29)
    bl fn_80473E74
    lbz r0, 0x0(r30)
    stw r27, 0x0(r25)
    cmpwi r0, 0x2f
    stw r28, 0x2c(r29)
    stb r28, 0x30(r29)
    stw r28, 0x70(r29)
    stw r28, 0x74(r29)
    stw r28, 0x78(r29)
    bne lbl_fn_8046FA18_00000EDC
    addi r25, r30, 0x1
    b lbl_fn_8046FA18_00000EE0
lbl_fn_8046FA18_00000EDC:
    mr r25, r30
lbl_fn_8046FA18_00000EE0:
    addi r0, r29, 0x30
    cmplw r25, r0
    beq lbl_fn_8046FA18_00000F08
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r29, 0x30
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8046FA18_00000F08:
    addi r3, r29, 0x30
    bl fn_800DC6B4
    rlwinm. r0, r31, 0, 30, 30
    stw r3, 0x28(r29)
    beq lbl_fn_8046FA18_00000F44
    lwz r12, 0x8(r29)
    addi r3, r29, 0x8
    mr r4, r24
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r29)
    stw r0, 0x4(r29)
    b lbl_fn_8046FA18_00000FC0
lbl_fn_8046FA18_00000F44:
    mr r4, r24
    addi r3, r29, 0x8
    bl fn_80473FCC
    li r0, 0x1
    stw r0, 0x78(r29)
    addi r3, r29, 0x8
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8046FA18_00000F78
    addi r3, r29, 0x8
    bl fn_8047059C
    cmpwi r3, 0x0
    bne lbl_fn_8046FA18_00000F8C
lbl_fn_8046FA18_00000F78:
    li r0, 0x0
    stw r0, 0x0(r29)
    mr r3, r29
    stw r0, 0x4(r29)
    b lbl_fn_8046FA18_00000FD8
lbl_fn_8046FA18_00000F8C:
    addi r3, r29, 0x8
    bl fn_80470580
    lwz r0, 0x0(r3)
    addi r3, r29, 0x8
    stw r0, 0x0(r29)
    bl fn_80470580
    lwz r0, 0x0(r29)
    addi r3, r3, 0x4
    stw r3, 0x4(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_8046FA18_00000FC0
    mr r3, r29
    b lbl_fn_8046FA18_00000FD8
lbl_fn_8046FA18_00000FC0:
    clrlwi. r0, r31, 31
    bne lbl_fn_8046FA18_00000FD4
    mr r3, r30
    bl fn_805F9EF0
    stw r3, 0x24(r29)
lbl_fn_8046FA18_00000FD4:
    mr r3, r29
lbl_fn_8046FA18_00000FD8:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8046FBB0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    lwz r0, 0x78(r3)
    stw r31, 0x10c(r1)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8046FBB0_00001018
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8046FBB0_00001020
lbl_fn_8046FBB0_00001018:
    li r3, -0x1
    b lbl_fn_8046FBB0_00001144
lbl_fn_8046FBB0_00001020:
    lbz r0, 0x0(r4)
    addi r7, r1, 0x8
    extsb r0, r0
    cmpwi r0, 0x2f
    beq lbl_fn_8046FBB0_0000103C
    cmpwi r0, 0x5c
    bne lbl_fn_8046FBB0_00001040
lbl_fn_8046FBB0_0000103C:
    addi r4, r4, 0x1
lbl_fn_8046FBB0_00001040:
    lis r5, lbl_807BB380@ha
    li r6, 0x2f
    addi r5, r5, lbl_807BB380@l
    b lbl_fn_8046FBB0_000010A8
lbl_fn_8046FBB0_00001050:
    extsb r0, r3
    cmpwi r0, 0x5c
    bne lbl_fn_8046FBB0_0000106C
    stb r6, 0x0(r7)
    addi r7, r7, 0x1
    addi r4, r4, 0x1
    b lbl_fn_8046FBB0_000010A8
lbl_fn_8046FBB0_0000106C:
    lbz r0, 0x0(r4)
    li r3, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_fn_8046FBB0_00001088
    li r3, 0x0
lbl_fn_8046FBB0_00001088:
    cmpwi r3, 0x0
    beq lbl_fn_8046FBB0_00001094
    b lbl_fn_8046FBB0_000010A0
lbl_fn_8046FBB0_00001094:
    lwz r3, 0x38(r5)
    lwz r3, 0x10(r3)
    lbzx r0, r3, r0
lbl_fn_8046FBB0_000010A0:
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
lbl_fn_8046FBB0_000010A8:
    lbz r3, 0x0(r4)
    extsb. r0, r3
    bne lbl_fn_8046FBB0_00001050
    li r0, 0x0
    stb r0, 0x0(r7)
    addi r3, r1, 0x8
    bl fn_800DC6B4
    lwz r6, 0x0(r31)
    li r7, 0x0
    lwz r5, 0x4(r31)
    srwi r0, r6, 31
    add r0, r0, r6
    srawi r8, r0, 1
lbl_fn_8046FBB0_000010DC:
    add r8, r8, r7
    slwi r0, r8, 4
    lwzx r0, r5, r0
    cmplw r0, r3
    bne lbl_fn_8046FBB0_000010F8
    mr r3, r8
    b lbl_fn_8046FBB0_00001144
lbl_fn_8046FBB0_000010F8:
    bge lbl_fn_8046FBB0_00001100
    mr r7, r8
lbl_fn_8046FBB0_00001100:
    cmplw r0, r3
    blt lbl_fn_8046FBB0_0000110C
    mr r6, r8
lbl_fn_8046FBB0_0000110C:
    subf r4, r7, r6
    srwi r0, r4, 31
    add r0, r0, r4
    srawi. r8, r0, 1
    bgt lbl_fn_8046FBB0_000010DC
    bne lbl_fn_8046FBB0_00001140
    lwz r4, 0x4(r31)
    slwi r0, r8, 4
    lwzx r0, r4, r0
    cmplw r3, r0
    bne lbl_fn_8046FBB0_00001140
    li r3, 0x0
    b lbl_fn_8046FBB0_00001144
lbl_fn_8046FBB0_00001140:
    li r3, -0x1
lbl_fn_8046FBB0_00001144:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8046FD1C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 4
    add r3, r3, r0
    blr
}

asm void fn_8046FD2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x10
    bl fn_80470564
    lwz r4, 0x4(r30)
    slwi r0, r31, 4
    lwz r31, 0xc(r1)
    add r4, r4, r0
    lwz r30, 0x8(r1)
    lwz r0, 0x4(r4)
    add r3, r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8046FD7C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stmw r15, 0x13c(r1)
    mr r28, r3
    mr r21, r4
    mr r24, r5
    mr r22, r6
    mr r23, r7
    li r27, 0x0
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8046FD7C_000015BC
    addi r3, r3, 0x1c
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8046FD7C_000015BC
    lbz r0, 0x0(r24)
    cmpwi r0, 0x2f
    bne lbl_fn_8046FD7C_0000120C
    addi r24, r24, 0x1
lbl_fn_8046FD7C_0000120C:
    addi r3, r28, 0x1c
    bl fn_80470580
    lwz r5, 0x8(r3)
    addi r26, r3, 0x10
    lwz r0, 0xc(r3)
    mr r18, r26
    mulli r4, r5, 0x18
    lis r17, lbl_80755B88@ha
    slwi r3, r5, 2
    slwi r0, r0, 2
    add r26, r26, r4
    mr r20, r24
    mr r19, r26
    mr r25, r18
    add r26, r26, r3
    addi r17, r17, lbl_80755B88@l
    mr r30, r26
    add r26, r26, r0
    b lbl_fn_8046FD7C_000012E4
lbl_fn_8046FD7C_00001258:
    mr r3, r20
    addi r4, r17, 0x4
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8046FD7C_00001274
    subf r29, r20, r3
    b lbl_fn_8046FD7C_00001280
lbl_fn_8046FD7C_00001274:
    mr r3, r20
    bl strlen
    mr r29, r3
lbl_fn_8046FD7C_00001280:
    lwz r31, 0x8(r25)
    lwz r0, 0xc(r25)
    li r25, 0x0
    slwi r3, r31, 2
    add r15, r19, r3
    add r16, r31, r0
    b lbl_fn_8046FD7C_000012CC
lbl_fn_8046FD7C_0000129C:
    lwz r0, 0x0(r15)
    mr r4, r20
    mr r5, r29
    add r3, r26, r0
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8046FD7C_000012C4
    mulli r0, r31, 0x18
    add r25, r18, r0
    b lbl_fn_8046FD7C_000012D4
lbl_fn_8046FD7C_000012C4:
    addi r15, r15, 0x4
    addi r31, r31, 0x1
lbl_fn_8046FD7C_000012CC:
    cmpw r31, r16
    blt lbl_fn_8046FD7C_0000129C
lbl_fn_8046FD7C_000012D4:
    lbzux r0, r20, r29
    cmpwi r0, 0x2f
    bne lbl_fn_8046FD7C_000012E4
    addi r20, r20, 0x1
lbl_fn_8046FD7C_000012E4:
    cmpwi r25, 0x0
    beq lbl_fn_8046FD7C_000012F8
    lbz r0, 0x0(r20)
    extsb. r0, r0
    bne lbl_fn_8046FD7C_00001258
lbl_fn_8046FD7C_000012F8:
    cmpwi r25, 0x0
    beq lbl_fn_8046FD7C_000015BC
    lbz r0, 0x0(r20)
    extsb. r0, r0
    bne lbl_fn_8046FD7C_000015BC
    lwz r20, 0x8(r25)
    lis r17, lbl_80755B88@ha
    clrlwi r16, r23, 31
    li r18, 0x1
    slwi r0, r20, 2
    addi r17, r17, lbl_80755B88@l
    add r15, r19, r0
    b lbl_fn_8046FD7C_000013A0
lbl_fn_8046FD7C_0000132C:
    lwz r0, 0x0(r15)
    mr r3, r21
    add r19, r26, r0
    mr r4, r19
    crclr 6
    bl fn_8006BD78
    lwz r3, 0x4(r21)
    cmpwi r16, 0x0
    lwz r4, 0x8(r21)
    addi r27, r27, 0x1
    subi r0, r3, 0x1
    slwi r0, r0, 4
    stwx r18, r4, r0
    beq lbl_fn_8046FD7C_00001398
    mr r5, r24
    mr r6, r19
    addi r3, r1, 0x38
    addi r4, r17, 0x6
    crclr 6
    bl sprintf
    mr r3, r28
    mr r4, r21
    mr r6, r22
    mr r7, r23
    addi r5, r1, 0x38
    bl fn_8046FD7C
    add r27, r27, r3
lbl_fn_8046FD7C_00001398:
    addi r15, r15, 0x4
    addi r20, r20, 0x1
lbl_fn_8046FD7C_000013A0:
    lwz r3, 0x8(r25)
    lwz r0, 0xc(r25)
    add r0, r3, r0
    cmpw r20, r0
    blt lbl_fn_8046FD7C_0000132C
    lwz r24, 0x10(r25)
    cntlzw r0, r22
    lis r17, lbl_80755B88@ha
    addi r28, r1, 0x21
    slwi r3, r24, 2
    srwi r29, r0, 5
    add r30, r30, r3
    addi r17, r17, lbl_80755B88@l
    addi r31, r1, 0x2c
    li r18, 0x0
    li r20, 0x2
    b lbl_fn_8046FD7C_000015A8
lbl_fn_8046FD7C_000013E4:
    lwz r0, 0x0(r30)
    cmpwi r29, 0x0
    mr r19, r29
    li r16, 0x0
    add r23, r26, r0
    li r15, 0x0
    bne lbl_fn_8046FD7C_00001414
    mr r3, r22
    addi r4, r17, 0xc
    bl fn_80682428
    cntlzw r0, r3
    srwi r19, r0, 5
lbl_fn_8046FD7C_00001414:
    cmpwi r19, 0x0
    bne lbl_fn_8046FD7C_00001538
    stw r18, 0x2c(r1)
    mr r3, r23
    stw r18, 0x30(r1)
    stw r18, 0x34(r1)
    bl strlen
    mr r15, r3
    mr r3, r31
    mr r4, r15
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r23
    add r7, r23, r15
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r31
    addi r3, r1, 0x20
    li r16, 0x1
    bl fn_8006AC08
    mr r3, r22
    li r15, 0x1
    bl strlen
    lwz r0, 0x20(r1)
    mr r19, r3
    stw r3, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046FD7C_000014A0
    lbz r0, 0x20(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8046FD7C_000014A4
lbl_fn_8046FD7C_000014A0:
    lwz r4, 0x24(r1)
lbl_fn_8046FD7C_000014A4:
    lwz r0, 0x20(r1)
    stw r4, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8046FD7C_000014C4
    lbz r0, 0x20(r1)
    mr r3, r28
    clrlwi r0, r0, 25
    b lbl_fn_8046FD7C_000014CC
lbl_fn_8046FD7C_000014C4:
    lwz r3, 0x28(r1)
    lwz r0, 0x24(r1)
lbl_fn_8046FD7C_000014CC:
    cmplw r4, r0
    stw r0, 0x14(r1)
    addi r4, r1, 0x14
    bge lbl_fn_8046FD7C_000014E0
    addi r4, r1, 0x1c
lbl_fn_8046FD7C_000014E0:
    lwz r0, 0x0(r4)
    mr r4, r22
    stw r0, 0x10(r1)
    addi r5, r1, 0x10
    cmplw r19, r0
    bge lbl_fn_8046FD7C_000014FC
    addi r5, r1, 0x18
lbl_fn_8046FD7C_000014FC:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8046FD7C_00001530
    lwz r0, 0x10(r1)
    cmplw r0, r19
    bge lbl_fn_8046FD7C_00001520
    li r3, -0x1
    b lbl_fn_8046FD7C_00001530
lbl_fn_8046FD7C_00001520:
    bne lbl_fn_8046FD7C_0000152C
    li r3, 0x0
    b lbl_fn_8046FD7C_00001530
lbl_fn_8046FD7C_0000152C:
    li r3, 0x1
lbl_fn_8046FD7C_00001530:
    cntlzw r0, r3
    srwi r19, r0, 5
lbl_fn_8046FD7C_00001538:
    cmpwi r15, 0x0
    beq lbl_fn_8046FD7C_00001554
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046FD7C_00001554
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8046FD7C_00001554:
    cmpwi r16, 0x0
    beq lbl_fn_8046FD7C_00001570
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8046FD7C_00001570
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8046FD7C_00001570:
    cmpwi r19, 0x0
    beq lbl_fn_8046FD7C_000015A0
    mr r3, r21
    mr r4, r23
    crclr 6
    bl fn_8006BD78
    lwz r3, 0x4(r21)
    addi r27, r27, 0x1
    lwz r4, 0x8(r21)
    subi r0, r3, 0x1
    slwi r0, r0, 4
    stwx r20, r4, r0
lbl_fn_8046FD7C_000015A0:
    addi r30, r30, 0x4
    addi r24, r24, 0x1
lbl_fn_8046FD7C_000015A8:
    lwz r3, 0x10(r25)
    lwz r0, 0x14(r25)
    add r0, r3, r0
    cmpw r24, r0
    blt lbl_fn_8046FD7C_000013E4
lbl_fn_8046FD7C_000015BC:
    mr r3, r27
    lmw r15, 0x13c(r1)
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_80470198(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x2c(r3)
    addi r0, r4, 0x1
    stw r0, 0x2c(r3)
    addi r3, r3, 0x10
    bl fn_80473EFC
    cmpwi r3, 0x0
    beq lbl_fn_80470198_00001614
    addi r3, r31, 0x10
    bl fn_80473EFC
    cmpwi r3, 0x4
    bne lbl_fn_80470198_00001620
lbl_fn_80470198_00001614:
    addi r3, r31, 0x10
    addi r4, r31, 0x30
    bl fn_80473FCC
lbl_fn_80470198_00001620:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804701F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x2c(r3)
    addi r0, r4, 0x1
    stw r0, 0x2c(r3)
    addi r3, r3, 0x10
    bl fn_80473EFC
    cmpwi r3, 0x0
    beq lbl_fn_804701F8_00001674
    addi r3, r31, 0x10
    bl fn_80473EFC
    cmpwi r3, 0x4
    bne lbl_fn_804701F8_0000168C
lbl_fn_804701F8_00001674:
    lwz r12, 0x10(r31)
    addi r3, r31, 0x10
    addi r4, r31, 0x30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_804701F8_0000168C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80470264(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x10
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80470264_000016D8
    lwz r0, 0x78(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80470264_000016DC
lbl_fn_80470264_000016D8:
    li r31, 0x1
lbl_fn_80470264_000016DC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804702BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804702BC_00001788
    addi r3, r3, 0x8
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804702BC_00001780
    li r0, 0x1
    stw r0, 0x78(r31)
    addi r3, r31, 0x8
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_804702BC_00001750
    addi r3, r31, 0x8
    bl fn_8047059C
    cmpwi r3, 0x0
    bne lbl_fn_804702BC_00001760
lbl_fn_804702BC_00001750:
    li r0, 0x0
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    b lbl_fn_804702BC_00001780
lbl_fn_804702BC_00001760:
    addi r3, r31, 0x8
    bl fn_80470580
    lwz r0, 0x0(r3)
    addi r3, r31, 0x8
    stw r0, 0x0(r31)
    bl fn_80470580
    addi r0, r3, 0x4
    stw r0, 0x4(r31)
lbl_fn_804702BC_00001780:
    li r3, 0x1
    b lbl_fn_804702BC_0000178C
lbl_fn_804702BC_00001788:
    li r3, 0x0
lbl_fn_804702BC_0000178C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80470364(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stmw r27, 0x10c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    lwz r8, 0x0(r3)
    cmpwi r8, 0x0
    beq lbl_fn_80470364_000017DC
    lwz r4, 0x2c(r8)
    subi r0, r4, 0x1
    stw r0, 0x2c(r8)
lbl_fn_80470364_000017DC:
    li r0, 0x0
    stw r0, 0x0(r3)
    mr r4, r28
    lwz r3, lbl_8087F518
    bl fn_8046F460
    cmpwi r3, 0x0
    stw r3, 0x0(r27)
    bne lbl_fn_80470364_00001834
    cmpwi r30, 0x0
    beq lbl_fn_80470364_00001834
    lis r4, lbl_80755BF0@ha
    mr r5, r28
    addi r3, r1, 0x8
    addi r4, r4, lbl_80755BF0@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F518
    mr r4, r28
    mr r6, r31
    addi r5, r1, 0x8
    bl fn_8046EF08
    stw r3, 0x0(r27)
lbl_fn_80470364_00001834:
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80470364_00001858
    bl fn_804701F8
    lwz r3, 0x0(r27)
    stw r29, 0x70(r3)
    lwz r3, 0x0(r27)
    stw r30, 0x74(r3)
    b lbl_fn_80470364_00001864
lbl_fn_80470364_00001858:
    lwz r3, lbl_8087EEB8
    mr r4, r28
    bl fn_800698DC
lbl_fn_80470364_00001864:
    lmw r27, 0x10c(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8047043C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r6
    stw r30, 0x118(r1)
    mr r30, r5
    stw r29, 0x114(r1)
    mr r29, r4
    stw r28, 0x110(r1)
    mr r28, r3
    lwz r7, 0x0(r3)
    cmpwi r7, 0x0
    beq lbl_fn_8047043C_000018BC
    lwz r4, 0x2c(r7)
    subi r0, r4, 0x1
    stw r0, 0x2c(r7)
lbl_fn_8047043C_000018BC:
    li r0, 0x0
    stw r0, 0x0(r3)
    mr r4, r29
    lwz r3, lbl_8087F518
    bl fn_8046F460
    cmpwi r3, 0x0
    stw r3, 0x0(r28)
    bne lbl_fn_8047043C_00001914
    cmpwi r31, 0x0
    beq lbl_fn_8047043C_00001914
    lis r4, lbl_80755BF0@ha
    mr r5, r29
    addi r3, r1, 0x8
    addi r4, r4, lbl_80755BF0@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087F518
    mr r4, r29
    addi r5, r1, 0x8
    li r6, 0x1
    bl fn_8046EF08
    stw r3, 0x0(r28)
lbl_fn_8047043C_00001914:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8047043C_00001938
    bl fn_80470198
    lwz r3, 0x0(r28)
    stw r30, 0x70(r3)
    lwz r3, 0x0(r28)
    stw r31, 0x74(r3)
    b lbl_fn_8047043C_00001944
lbl_fn_8047043C_00001938:
    lwz r3, lbl_8087EEB8
    mr r4, r29
    bl fn_800698DC
lbl_fn_8047043C_00001944:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80470528(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80470528_0000197C
    lwz r4, 0x2c(r5)
    subi r0, r4, 0x1
    stw r0, 0x2c(r5)
lbl_fn_80470528_0000197C:
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_8047054C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8047054C_00001998
    b fn_80470264
lbl_fn_8047054C_00001998:
    li r3, 0x0
    blr
}

asm void fn_80470564(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80470564_000019B4
    lwz r3, 0x54(r3)
    blr
lbl_fn_80470564_000019B4:
    li r3, 0x0
    blr
}

asm void fn_80470580(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80470580_000019D0
    lwz r3, 0x54(r3)
    blr
lbl_fn_80470580_000019D0:
    li r3, 0x0
    blr
}

asm void fn_8047059C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8047059C_000019EC
    lwz r3, 0x50(r3)
    blr
lbl_fn_8047059C_000019EC:
    li r3, 0x0
    blr
}

asm void fn_804705B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80470604
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
