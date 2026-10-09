#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80047C74(void);
extern void fn_80047D20(void);
extern void fn_800499F4(void);
extern void fn_80049AAC(void);
extern void fn_8004A388(void);
extern void fn_8004A660(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_80063D3C(void);
extern void fn_800897D8(void);
extern void fn_8008BBD8(void);
extern void fn_800BFAC8(void);
extern void fn_800C7E70(void);
extern void fn_800C81CC(void);
extern void fn_800C8278(void);
extern void fn_800C82FC(void);
extern void fn_800CA028(void);
extern void fn_800CA834(void);
extern void fn_800CA844(void);
extern void fn_800CA8B0(void);
extern void fn_800CA8E0(void);
extern void fn_800CA910(void);
extern void fn_800CAA88(void);
extern void fn_800CACEC(void);
extern void fn_800CB718(void);
extern void fn_800CF5B4(void);
extern void fn_800CF5D0(void);
extern void fn_800D123C(void);
extern void fn_806959D8(void);
extern void fn_80709AD0(void);
extern void fn_8070ABE0(void);
extern void fn_80715D60(void);
extern void fn_80715D70(void);
extern void fn_80715D80(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80734440[];
extern u8 lbl_80779698[];
extern u8 lbl_807C75B0[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFEC;
extern u32 lbl_80881188;
extern u32 lbl_8088118C;
extern u32 lbl_80881190;
extern u32 lbl_808811A4;
extern u32 lbl_808811A8;
extern u32 lbl_808811AC;
extern u32 lbl_808811B0;
extern u32 lbl_808811B4;
extern u32 lbl_808811B8;
extern u32 lbl_808811BC;
extern u32 lbl_808811C0;
extern u32 lbl_808811C4;
extern u32 lbl_808811C8;

/* Function declarations */
void fn_800CDD40(void);
void fn_800CDD4C(void);
void fn_800CDD8C(void);
void fn_800CDF84(void);
void fn_800CE368(void);
void fn_800CE6E0(void);
void fn_800CE9A4(void);
void fn_800CECF0(void);
void fn_800CF45C(void);

asm void fn_800CDD40(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    blr
}

asm void fn_800CDD4C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800CDD4C_00000034
    cmpwi r4, 0x0
    ble lbl_fn_800CDD4C_00000034
    bl dtor_80084684
lbl_fn_800CDD4C_00000034:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CDD8C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    beq lbl_fn_800CDD8C_00000228
    lis r5, lbl_80779698@ha
    li r4, 0x0
    addi r5, r5, lbl_80779698@l
    stw r5, 0x0(r3)
    lis r3, fn_800CB718@ha
    lbz r0, lbl_8087EFEC
    addi r3, r3, fn_800CB718@l
    stw r4, 0x8(r1)
    extsb. r0, r0
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r4, 0x14(r1)
    stw r4, 0x18(r1)
    stw r4, 0x34(r1)
    bne lbl_fn_800CDD8C_000000D4
    lis r6, lbl_807C75B0@ha
    lis r4, fn_800CF5B4@ha
    lis r3, fn_800CF5D0@ha
    li r0, 0x1
    addi r3, r3, fn_800CF5D0@l
    addi r5, r6, lbl_807C75B0@l
    addi r4, r4, fn_800CF5B4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75B0@l(r6)
    stb r0, lbl_8087EFEC
lbl_fn_800CDD8C_000000D4:
    lwz r5, 0x10(r1)
    addi r3, r1, 0x1c
    lwz r4, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CDD8C_00000134
    addic. r0, r1, 0x38
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x30(r1)
    beq lbl_fn_800CDD8C_0000012C
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_800CDD8C_0000012C:
    li r0, 0x1
    b lbl_fn_800CDD8C_00000138
lbl_fn_800CDD8C_00000134:
    li r0, 0x0
lbl_fn_800CDD8C_00000138:
    cmpwi r0, 0x0
    beq lbl_fn_800CDD8C_00000150
    lis r3, lbl_807C75B0@ha
    addi r3, r3, lbl_807C75B0@l
    stw r3, 0x34(r1)
    b lbl_fn_800CDD8C_00000158
lbl_fn_800CDD8C_00000150:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CDD8C_00000158:
    mr r3, r30
    addi r4, r1, 0x34
    li r5, -0x1
    li r6, -0x1
    li r7, -0x1
    bl fn_800D123C
    addic. r3, r1, 0x34
    beq lbl_fn_800CDD8C_000001AC
    lwz r4, 0x34(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CDD8C_000001AC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CDD8C_000001A4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CDD8C_000001A4:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CDD8C_000001AC:
    addic. r0, r30, 0x46e4
    beq lbl_fn_800CDD8C_000001D0
    lwz r4, 0x46e4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800CDD8C_000001D0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_800CDD8C_000001D0
    bl fn_800897D8
lbl_fn_800CDD8C_000001D0:
    addic. r3, r30, 0x34e0
    beq lbl_fn_800CDD8C_000001F4
    beq lbl_fn_800CDD8C_000001F4
    lis r4, fn_800CDD4C@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_800CDD4C@l
    li r5, 0x90
    li r6, 0x20
    bl fn_806959D8
lbl_fn_800CDD8C_000001F4:
    addi r3, r30, 0x2984
    li r4, -0x1
    bl fn_800C7E70
    lis r4, fn_800C81CC@ha
    addi r3, r30, 0x4
    addi r4, r4, fn_800C81CC@l
    li r5, 0x14c
    li r6, 0x20
    bl fn_806959D8
    cmpwi r31, 0x0
    ble lbl_fn_800CDD8C_00000228
    mr r3, r30
    bl dtor_80084684
lbl_fn_800CDD8C_00000228:
    mr r3, r30
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800CDF84(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, 0x0
    lis r4, fn_800CB718@ha
    stw r0, 0x54(r1)
    addi r4, r4, fn_800CB718@l
    stw r31, 0x4c(r1)
    mr r31, r3
    lbz r0, lbl_8087EFEC
    stw r5, 0x8(r1)
    extsb. r0, r0
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stw r5, 0x34(r1)
    bne lbl_fn_800CDF84_000002B0
    lis r6, lbl_807C75B0@ha
    lis r4, fn_800CF5B4@ha
    lis r3, fn_800CF5D0@ha
    li r0, 0x1
    addi r3, r3, fn_800CF5D0@l
    addi r5, r6, lbl_807C75B0@l
    addi r4, r4, fn_800CF5B4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75B0@l(r6)
    stb r0, lbl_8087EFEC
lbl_fn_800CDF84_000002B0:
    lwz r5, 0x10(r1)
    addi r3, r1, 0x1c
    lwz r4, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CDF84_00000310
    addic. r0, r1, 0x38
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x30(r1)
    beq lbl_fn_800CDF84_00000308
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_800CDF84_00000308:
    li r0, 0x1
    b lbl_fn_800CDF84_00000314
lbl_fn_800CDF84_00000310:
    li r0, 0x0
lbl_fn_800CDF84_00000314:
    cmpwi r0, 0x0
    beq lbl_fn_800CDF84_0000032C
    lis r3, lbl_807C75B0@ha
    addi r3, r3, lbl_807C75B0@l
    stw r3, 0x34(r1)
    b lbl_fn_800CDF84_00000334
lbl_fn_800CDF84_0000032C:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CDF84_00000334:
    mr r3, r31
    addi r4, r1, 0x34
    li r5, -0x1
    li r6, -0x1
    li r7, -0x1
    bl fn_800D123C
    addic. r3, r1, 0x34
    beq lbl_fn_800CDF84_00000388
    lwz r4, 0x34(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CDF84_00000388
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CDF84_00000380
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CDF84_00000380:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CDF84_00000388:
    lwz r3, lbl_8087EE90
    lwz r0, 0x34b0(r31)
    stw r0, 0x408(r3)
    lwz r3, lbl_8087EE90
    bl fn_80047C74
    li r0, 0x2
    mr r3, r31
    mtctr r0
lbl_fn_800CDF84_000003A8:
    lwz r0, 0x2a18(r3)
    stw r0, 0x2ad8(r3)
    lwz r0, 0x2a1c(r3)
    stw r0, 0x2adc(r3)
    lfs f0, 0x2a20(r3)
    stfs f0, 0x2ae0(r3)
    lfs f0, 0x2a24(r3)
    stfs f0, 0x2ae4(r3)
    lfs f0, 0x2a28(r3)
    stfs f0, 0x2ae8(r3)
    lfs f0, 0x2a2c(r3)
    stfs f0, 0x2aec(r3)
    lwz r0, 0x2a30(r3)
    stw r0, 0x2af0(r3)
    lwz r0, 0x2a34(r3)
    stw r0, 0x2af4(r3)
    lfs f0, 0x2a38(r3)
    stfs f0, 0x2af8(r3)
    lfs f0, 0x2a3c(r3)
    stfs f0, 0x2afc(r3)
    lfs f0, 0x2a40(r3)
    stfs f0, 0x2b00(r3)
    lfs f0, 0x2a44(r3)
    stfs f0, 0x2b04(r3)
    lwz r0, 0x2a48(r3)
    stw r0, 0x2b08(r3)
    lwz r0, 0x2a4c(r3)
    stw r0, 0x2b0c(r3)
    lfs f0, 0x2a50(r3)
    stfs f0, 0x2b10(r3)
    lfs f0, 0x2a54(r3)
    stfs f0, 0x2b14(r3)
    lfs f0, 0x2a58(r3)
    stfs f0, 0x2b18(r3)
    lfs f0, 0x2a5c(r3)
    stfs f0, 0x2b1c(r3)
    lwz r0, 0x2a60(r3)
    stw r0, 0x2b20(r3)
    lwz r0, 0x2a64(r3)
    stw r0, 0x2b24(r3)
    lfs f0, 0x2a68(r3)
    stfs f0, 0x2b28(r3)
    lfs f0, 0x2a6c(r3)
    stfs f0, 0x2b2c(r3)
    lfs f0, 0x2a70(r3)
    stfs f0, 0x2b30(r3)
    lfs f0, 0x2a74(r3)
    stfs f0, 0x2b34(r3)
    addi r3, r3, 0x60
    bdnz lbl_fn_800CDF84_000003A8
    li r0, 0x8
    mr r3, r31
    mtctr r0
lbl_fn_800CDF84_0000047C:
    lwz r0, 0x2b98(r3)
    stw r0, 0x2e98(r3)
    lwz r0, 0x2b9c(r3)
    stw r0, 0x2e9c(r3)
    lfs f0, 0x2ba0(r3)
    stfs f0, 0x2ea0(r3)
    lfs f0, 0x2ba4(r3)
    stfs f0, 0x2ea4(r3)
    lfs f0, 0x2ba8(r3)
    stfs f0, 0x2ea8(r3)
    lfs f0, 0x2bac(r3)
    stfs f0, 0x2eac(r3)
    lwz r0, 0x2bb0(r3)
    stw r0, 0x2eb0(r3)
    lwz r0, 0x2bb4(r3)
    stw r0, 0x2eb4(r3)
    lfs f0, 0x2bb8(r3)
    stfs f0, 0x2eb8(r3)
    lfs f0, 0x2bbc(r3)
    stfs f0, 0x2ebc(r3)
    lfs f0, 0x2bc0(r3)
    stfs f0, 0x2ec0(r3)
    lfs f0, 0x2bc4(r3)
    stfs f0, 0x2ec4(r3)
    lwz r0, 0x2bc8(r3)
    stw r0, 0x2ec8(r3)
    lwz r0, 0x2bcc(r3)
    stw r0, 0x2ecc(r3)
    lfs f0, 0x2bd0(r3)
    stfs f0, 0x2ed0(r3)
    lfs f0, 0x2bd4(r3)
    stfs f0, 0x2ed4(r3)
    lfs f0, 0x2bd8(r3)
    stfs f0, 0x2ed8(r3)
    lfs f0, 0x2bdc(r3)
    stfs f0, 0x2edc(r3)
    lwz r0, 0x2be0(r3)
    stw r0, 0x2ee0(r3)
    lwz r0, 0x2be4(r3)
    stw r0, 0x2ee4(r3)
    lfs f0, 0x2be8(r3)
    stfs f0, 0x2ee8(r3)
    lfs f0, 0x2bec(r3)
    stfs f0, 0x2eec(r3)
    lfs f0, 0x2bf0(r3)
    stfs f0, 0x2ef0(r3)
    lfs f0, 0x2bf4(r3)
    stfs f0, 0x2ef4(r3)
    addi r3, r3, 0x60
    bdnz lbl_fn_800CDF84_0000047C
    li r0, 0x4
    mtctr r0
lbl_fn_800CDF84_0000054C:
    lwz r0, 0x3198(r31)
    stw r0, 0x3318(r31)
    lwz r0, 0x319c(r31)
    stw r0, 0x331c(r31)
    lfs f0, 0x31a0(r31)
    stfs f0, 0x3320(r31)
    lfs f0, 0x31a4(r31)
    stfs f0, 0x3324(r31)
    lfs f0, 0x31a8(r31)
    stfs f0, 0x3328(r31)
    lfs f0, 0x31ac(r31)
    stfs f0, 0x332c(r31)
    lwz r0, 0x31b0(r31)
    stw r0, 0x3330(r31)
    lwz r0, 0x31b4(r31)
    stw r0, 0x3334(r31)
    lfs f0, 0x31b8(r31)
    stfs f0, 0x3338(r31)
    lfs f0, 0x31bc(r31)
    stfs f0, 0x333c(r31)
    lfs f0, 0x31c0(r31)
    stfs f0, 0x3340(r31)
    lfs f0, 0x31c4(r31)
    stfs f0, 0x3344(r31)
    lwz r0, 0x31c8(r31)
    stw r0, 0x3348(r31)
    lwz r0, 0x31cc(r31)
    stw r0, 0x334c(r31)
    lfs f0, 0x31d0(r31)
    stfs f0, 0x3350(r31)
    lfs f0, 0x31d4(r31)
    stfs f0, 0x3354(r31)
    lfs f0, 0x31d8(r31)
    stfs f0, 0x3358(r31)
    lfs f0, 0x31dc(r31)
    stfs f0, 0x335c(r31)
    lwz r0, 0x31e0(r31)
    stw r0, 0x3360(r31)
    lwz r0, 0x31e4(r31)
    stw r0, 0x3364(r31)
    lfs f0, 0x31e8(r31)
    stfs f0, 0x3368(r31)
    lfs f0, 0x31ec(r31)
    stfs f0, 0x336c(r31)
    lfs f0, 0x31f0(r31)
    stfs f0, 0x3370(r31)
    lfs f0, 0x31f4(r31)
    stfs f0, 0x3374(r31)
    addi r31, r31, 0x60
    bdnz lbl_fn_800CDF84_0000054C
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800CE368(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, 0x0
    lis r4, fn_800CB718@ha
    stw r0, 0x54(r1)
    addi r4, r4, fn_800CB718@l
    stw r31, 0x4c(r1)
    mr r31, r3
    lbz r0, lbl_8087EFEC
    stw r5, 0x8(r1)
    extsb. r0, r0
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stw r5, 0x34(r1)
    bne lbl_fn_800CE368_00000694
    lis r6, lbl_807C75B0@ha
    lis r4, fn_800CF5B4@ha
    lis r3, fn_800CF5D0@ha
    li r0, 0x1
    addi r3, r3, fn_800CF5D0@l
    addi r5, r6, lbl_807C75B0@l
    addi r4, r4, fn_800CF5B4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75B0@l(r6)
    stb r0, lbl_8087EFEC
lbl_fn_800CE368_00000694:
    lwz r5, 0x10(r1)
    addi r3, r1, 0x1c
    lwz r4, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CE368_000006F4
    addic. r0, r1, 0x38
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x30(r1)
    beq lbl_fn_800CE368_000006EC
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_800CE368_000006EC:
    li r0, 0x1
    b lbl_fn_800CE368_000006F8
lbl_fn_800CE368_000006F4:
    li r0, 0x0
lbl_fn_800CE368_000006F8:
    cmpwi r0, 0x0
    beq lbl_fn_800CE368_00000710
    lis r3, lbl_807C75B0@ha
    addi r3, r3, lbl_807C75B0@l
    stw r3, 0x34(r1)
    b lbl_fn_800CE368_00000718
lbl_fn_800CE368_00000710:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CE368_00000718:
    mr r3, r31
    addi r4, r1, 0x34
    li r5, -0x1
    li r6, -0x1
    li r7, -0x1
    bl fn_800D123C
    addic. r3, r1, 0x34
    beq lbl_fn_800CE368_0000076C
    lwz r4, 0x34(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CE368_0000076C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CE368_00000764
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CE368_00000764:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CE368_0000076C:
    lwz r3, lbl_8087EE90
    bl fn_80047D20
    li r0, 0x2
    mr r3, r31
    mtctr r0
lbl_fn_800CE368_00000780:
    lwz r0, 0x2ad8(r3)
    stw r0, 0x2a18(r3)
    lfs f0, 0x2ae0(r3)
    stfs f0, 0x2a20(r3)
    lfs f0, 0x2ae4(r3)
    stfs f0, 0x2a24(r3)
    lfs f0, 0x2ae8(r3)
    stfs f0, 0x2a28(r3)
    lfs f0, 0x2aec(r3)
    stfs f0, 0x2a2c(r3)
    lwz r0, 0x2af0(r3)
    stw r0, 0x2a30(r3)
    lfs f0, 0x2af8(r3)
    stfs f0, 0x2a38(r3)
    lfs f0, 0x2afc(r3)
    stfs f0, 0x2a3c(r3)
    lfs f0, 0x2b00(r3)
    stfs f0, 0x2a40(r3)
    lfs f0, 0x2b04(r3)
    stfs f0, 0x2a44(r3)
    lwz r0, 0x2b08(r3)
    stw r0, 0x2a48(r3)
    lfs f0, 0x2b10(r3)
    stfs f0, 0x2a50(r3)
    lfs f0, 0x2b14(r3)
    stfs f0, 0x2a54(r3)
    lfs f0, 0x2b18(r3)
    stfs f0, 0x2a58(r3)
    lfs f0, 0x2b1c(r3)
    stfs f0, 0x2a5c(r3)
    lwz r0, 0x2b20(r3)
    stw r0, 0x2a60(r3)
    lfs f0, 0x2b28(r3)
    stfs f0, 0x2a68(r3)
    lfs f0, 0x2b2c(r3)
    stfs f0, 0x2a6c(r3)
    lfs f0, 0x2b30(r3)
    stfs f0, 0x2a70(r3)
    lfs f0, 0x2b34(r3)
    stfs f0, 0x2a74(r3)
    addi r3, r3, 0x60
    bdnz lbl_fn_800CE368_00000780
    li r0, 0x8
    mr r3, r31
    mtctr r0
lbl_fn_800CE368_00000834:
    lwz r0, 0x2e98(r3)
    stw r0, 0x2b98(r3)
    lfs f0, 0x2ea0(r3)
    stfs f0, 0x2ba0(r3)
    lfs f0, 0x2ea4(r3)
    stfs f0, 0x2ba4(r3)
    lfs f0, 0x2ea8(r3)
    stfs f0, 0x2ba8(r3)
    lfs f0, 0x2eac(r3)
    stfs f0, 0x2bac(r3)
    lwz r0, 0x2eb0(r3)
    stw r0, 0x2bb0(r3)
    lfs f0, 0x2eb8(r3)
    stfs f0, 0x2bb8(r3)
    lfs f0, 0x2ebc(r3)
    stfs f0, 0x2bbc(r3)
    lfs f0, 0x2ec0(r3)
    stfs f0, 0x2bc0(r3)
    lfs f0, 0x2ec4(r3)
    stfs f0, 0x2bc4(r3)
    lwz r0, 0x2ec8(r3)
    stw r0, 0x2bc8(r3)
    lfs f0, 0x2ed0(r3)
    stfs f0, 0x2bd0(r3)
    lfs f0, 0x2ed4(r3)
    stfs f0, 0x2bd4(r3)
    lfs f0, 0x2ed8(r3)
    stfs f0, 0x2bd8(r3)
    lfs f0, 0x2edc(r3)
    stfs f0, 0x2bdc(r3)
    lwz r0, 0x2ee0(r3)
    stw r0, 0x2be0(r3)
    lfs f0, 0x2ee8(r3)
    stfs f0, 0x2be8(r3)
    lfs f0, 0x2eec(r3)
    stfs f0, 0x2bec(r3)
    lfs f0, 0x2ef0(r3)
    stfs f0, 0x2bf0(r3)
    lfs f0, 0x2ef4(r3)
    stfs f0, 0x2bf4(r3)
    addi r3, r3, 0x60
    bdnz lbl_fn_800CE368_00000834
    li r0, 0x4
    mtctr r0
lbl_fn_800CE368_000008E4:
    lwz r0, 0x3318(r31)
    stw r0, 0x3198(r31)
    lfs f0, 0x3320(r31)
    stfs f0, 0x31a0(r31)
    lfs f0, 0x3324(r31)
    stfs f0, 0x31a4(r31)
    lfs f0, 0x3328(r31)
    stfs f0, 0x31a8(r31)
    lfs f0, 0x332c(r31)
    stfs f0, 0x31ac(r31)
    lwz r0, 0x3330(r31)
    stw r0, 0x31b0(r31)
    lfs f0, 0x3338(r31)
    stfs f0, 0x31b8(r31)
    lfs f0, 0x333c(r31)
    stfs f0, 0x31bc(r31)
    lfs f0, 0x3340(r31)
    stfs f0, 0x31c0(r31)
    lfs f0, 0x3344(r31)
    stfs f0, 0x31c4(r31)
    lwz r0, 0x3348(r31)
    stw r0, 0x31c8(r31)
    lfs f0, 0x3350(r31)
    stfs f0, 0x31d0(r31)
    lfs f0, 0x3354(r31)
    stfs f0, 0x31d4(r31)
    lfs f0, 0x3358(r31)
    stfs f0, 0x31d8(r31)
    lfs f0, 0x335c(r31)
    stfs f0, 0x31dc(r31)
    lwz r0, 0x3360(r31)
    stw r0, 0x31e0(r31)
    lfs f0, 0x3368(r31)
    stfs f0, 0x31e8(r31)
    lfs f0, 0x336c(r31)
    stfs f0, 0x31ec(r31)
    lfs f0, 0x3370(r31)
    stfs f0, 0x31f0(r31)
    lfs f0, 0x3374(r31)
    stfs f0, 0x31f4(r31)
    addi r31, r31, 0x60
    bdnz lbl_fn_800CE368_000008E4
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800CE6E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r29, r3
    lwz r3, lbl_8087EE90
    lwz r4, 0x2a10(r29)
    bl fn_800499F4
    lwz r3, lbl_8087EE90
    lfs f1, 0x2a14(r29)
    bl fn_80049AAC
    lwz r3, lbl_8087EE90
    lwz r4, 0x34bc(r29)
    bl fn_8004A388
    lfs f1, 0x34a4(r29)
    addi r3, r29, 0x2988
    bl fn_80715D70
    lfs f1, 0x34a8(r29)
    addi r3, r29, 0x2988
    bl fn_80715D80
    lfs f1, 0x34ac(r29)
    addi r3, r29, 0x2988
    bl fn_80715D60
    addi r25, r29, 0x4
    li r26, 0x0
lbl_fn_800CE6E0_00000A08:
    mr r3, r25
    bl fn_800C82FC
    mr r3, r25
    bl fn_800C8278
    cmpwi r3, 0x0
    bne lbl_fn_800CE6E0_00000A60
    lwz r0, 0xa4(r25)
    cmpwi r0, 0x0
    bgt lbl_fn_800CE6E0_00000A60
    lwz r0, 0xe8(r25)
    cmpwi r0, 0x0
    bne lbl_fn_800CE6E0_00000A60
    mr r3, r25
    bl fn_800CA844
    lfs f0, 0x34c4(r29)
    fcmpo cr0, f1, f0
    bge lbl_fn_800CE6E0_00000A60
    lwz r3, 0x4(r25)
    cmpwi r3, 0x0
    beq lbl_fn_800CE6E0_00000A60
    li r4, 0x0
    bl fn_80709AD0
lbl_fn_800CE6E0_00000A60:
    addi r26, r26, 0x1
    addi r25, r25, 0x14c
    cmpwi r26, 0x20
    blt lbl_fn_800CE6E0_00000A08
    addi r30, r29, 0x34e4
    lis r31, 0x38e4
    b lbl_fn_800CE6E0_00000C18
lbl_fn_800CE6E0_00000A7C:
    lwz r3, 0x84(r30)
    addi r0, r3, 0x1
    stw r0, 0x84(r30)
    lwz r3, 0x8c(r30)
    bl fn_800CA844
    stfs f1, 0x88(r30)
    lwz r0, 0x84(r30)
    cmpwi r0, 0x78
    blt lbl_fn_800CE6E0_00000B44
    addi r0, r29, 0x34e4
    subi r3, r31, 0x71c7
    subf r0, r0, r30
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r28, r0, r3
    mulli r0, r28, 0x90
    add r26, r29, r0
    addi r25, r26, 0x34e4
    b lbl_fn_800CE6E0_00000B2C
lbl_fn_800CE6E0_00000ACC:
    addi r0, r28, 0x1
    mulli r0, r0, 0x90
    add r3, r29, r0
    addi r27, r3, 0x34e4
    cmplw r27, r25
    beq lbl_fn_800CE6E0_00000B00
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r3, r25
    mr r4, r27
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800CE6E0_00000B00:
    lwz r0, 0x35f4(r26)
    addi r25, r25, 0x90
    stw r0, 0x3564(r26)
    addi r28, r28, 0x1
    lwz r0, 0x35f8(r26)
    stw r0, 0x3568(r26)
    lfs f0, 0x35fc(r26)
    stfs f0, 0x356c(r26)
    lwz r0, 0x3600(r26)
    stw r0, 0x3570(r26)
    addi r26, r26, 0x90
lbl_fn_800CE6E0_00000B2C:
    lwz r3, 0x34e0(r29)
    subi r0, r3, 0x1
    cmplw r28, r0
    blt lbl_fn_800CE6E0_00000ACC
    stw r0, 0x34e0(r29)
    b lbl_fn_800CE6E0_00000C18
lbl_fn_800CE6E0_00000B44:
    lwz r3, 0x8c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800CE6E0_00000C14
    bl fn_800C8278
    cmpwi r3, 0x0
    bne lbl_fn_800CE6E0_00000B70
    lwz r3, 0x8c(r30)
    lwz r4, 0x80(r30)
    lwz r0, 0x98(r3)
    cmplw r4, r0
    beq lbl_fn_800CE6E0_00000C14
lbl_fn_800CE6E0_00000B70:
    addi r0, r29, 0x34e4
    subi r3, r31, 0x71c7
    subf r0, r0, r30
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r28, r0, r3
    mulli r0, r28, 0x90
    add r25, r29, r0
    addi r26, r25, 0x34e4
    b lbl_fn_800CE6E0_00000BFC
lbl_fn_800CE6E0_00000B9C:
    addi r0, r28, 0x1
    mulli r0, r0, 0x90
    add r3, r29, r0
    addi r27, r3, 0x34e4
    cmplw r27, r26
    beq lbl_fn_800CE6E0_00000BD0
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r3, r26
    mr r4, r27
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800CE6E0_00000BD0:
    lwz r0, 0x35f4(r25)
    addi r26, r26, 0x90
    stw r0, 0x3564(r25)
    addi r28, r28, 0x1
    lwz r0, 0x35f8(r25)
    stw r0, 0x3568(r25)
    lfs f0, 0x35fc(r25)
    stfs f0, 0x356c(r25)
    lwz r0, 0x3600(r25)
    stw r0, 0x3570(r25)
    addi r25, r25, 0x90
lbl_fn_800CE6E0_00000BFC:
    lwz r3, 0x34e0(r29)
    subi r0, r3, 0x1
    cmplw r28, r0
    blt lbl_fn_800CE6E0_00000B9C
    stw r0, 0x34e0(r29)
    b lbl_fn_800CE6E0_00000C18
lbl_fn_800CE6E0_00000C14:
    addi r30, r30, 0x90
lbl_fn_800CE6E0_00000C18:
    lwz r0, 0x34e0(r29)
    mulli r0, r0, 0x90
    add r3, r29, r0
    addi r0, r3, 0x34e4
    cmplw r30, r0
    bne lbl_fn_800CE6E0_00000A7C
    lwz r0, 0x34dc(r29)
    cmpwi r0, 0x0
    ble lbl_fn_800CE6E0_00000C4C
    cmpwi r0, 0x7
    beq lbl_fn_800CE6E0_00000C4C
    lwz r3, lbl_8087EE90
    bl fn_8004A660
lbl_fn_800CE6E0_00000C4C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800CE9A4(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    fmr f31, f5
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    fmr f30, f3
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    fmr f29, f2
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    fmr f28, f4
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    fmr f27, f1
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r3
    bl fn_800C8278
    cmpwi r3, 0x0
    bne lbl_fn_800CE9A4_00000F68
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800CE9A4_00000CDC
    b lbl_fn_800CE9A4_00000F68
lbl_fn_800CE9A4_00000CDC:
    lwz r4, 0xa8(r28)
    lis r3, 0x6700
    subi r30, r3, 0x7800
    cmpwi r4, 0x0
    beq lbl_fn_800CE9A4_00000D34
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800CE9A4_00000D34
    cmpwi r0, 0x1
    beq lbl_fn_800CE9A4_00000D14
    cmpwi r0, 0x2
    beq lbl_fn_800CE9A4_00000D20
    b lbl_fn_800CE9A4_00000D2C
    b lbl_fn_800CE9A4_00000D34
lbl_fn_800CE9A4_00000D14:
    lis r3, 0x6601
    subi r30, r3, 0x7701
    b lbl_fn_800CE9A4_00000D34
lbl_fn_800CE9A4_00000D20:
    lis r3, 0x6688
    addi r30, r3, 0xff
    b lbl_fn_800CE9A4_00000D34
lbl_fn_800CE9A4_00000D2C:
    lis r3, 0x6688
    addi r30, r3, 0xff
lbl_fn_800CE9A4_00000D34:
    fmr f1, f27
    lis r4, 0x6689
    fmr f2, f29
    lwz r3, lbl_8087EEB0
    fmr f3, f30
    subi r4, r4, 0x7778
    fmr f4, f28
    fmr f5, f31
    bl fn_80060D58
    lwz r29, lbl_8087EEB0
    mr r3, r28
    bl fn_800CACEC
    fmuls f4, f28, f1
    mr r3, r29
    fmr f1, f27
    mr r4, r30
    fmr f2, f29
    fmr f3, f30
    fmr f5, f31
    bl fn_80060D58
    mr r3, r28
    bl fn_800CACEC
    lfs f0, lbl_808811A4
    lis r29, lbl_80734440@ha
    addi r29, r29, lbl_80734440@l
    addi r3, r1, 0x8
    fmuls f1, f0, f1
    addi r4, r29, 0x1
    crset 6
    bl sprintf
    lfs f1, lbl_808811A8
    fmr f3, f30
    lfs f0, lbl_80881188
    fmr f4, f31
    fadds f1, f1, f27
    lwz r3, lbl_8087EEB0
    fmr f5, f31
    fadds f2, f0, f29
    lfs f6, lbl_8088118C
    fadds f1, f0, f1
    addi r4, r1, 0x8
    lis r5, 0xcc00
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_808811A8
    lis r30, 0xcd00
    fmr f2, f29
    lwz r3, lbl_8087EEB0
    fmr f3, f30
    lfs f6, lbl_8088118C
    fmr f4, f31
    addi r4, r1, 0x8
    fmr f5, f31
    subi r5, r30, 0x1
    fadds f1, f0, f27
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    mr r3, r28
    bl fn_800CA028
    cmpwi r3, 0x0
    beq lbl_fn_800CE9A4_00000EBC
    fadds f2, f27, f28
    lfs f1, lbl_808811AC
    lfs f0, lbl_80881188
    fmr f3, f30
    fmr f4, f31
    lwz r3, lbl_8087EEB0
    fadds f1, f1, f2
    lfs f6, lbl_8088118C
    fmr f5, f31
    addi r4, r29, 0x8
    fadds f2, f0, f29
    lis r5, 0xcc00
    fadds f1, f0, f1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    fadds f1, f27, f28
    lfs f0, lbl_808811AC
    fmr f2, f29
    lwz r3, lbl_8087EEB0
    fmr f3, f30
    lfs f6, lbl_8088118C
    fmr f4, f31
    addi r4, r29, 0x8
    fmr f5, f31
    subi r5, r30, 0x1
    fadds f1, f0, f1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    b lbl_fn_800CE9A4_00000F68
lbl_fn_800CE9A4_00000EBC:
    mr r3, r28
    bl fn_800CA910
    mr r31, r3
    mr r3, r28
    bl fn_800CAA88
    mr r5, r3
    mr r6, r31
    addi r3, r1, 0x8
    addi r4, r29, 0x13
    crclr 6
    bl sprintf
    fadds f2, f27, f28
    lfs f1, lbl_808811AC
    lfs f0, lbl_80881188
    fmr f3, f30
    fmr f4, f31
    lwz r3, lbl_8087EEB0
    fadds f1, f1, f2
    lfs f6, lbl_8088118C
    fmr f5, f31
    addi r4, r1, 0x8
    fadds f2, f0, f29
    lis r5, 0xcc00
    fadds f1, f0, f1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    fadds f1, f27, f28
    lfs f0, lbl_808811AC
    fmr f2, f29
    lwz r3, lbl_8087EEB0
    fmr f3, f30
    lfs f6, lbl_8088118C
    fmr f4, f31
    addi r4, r1, 0x8
    fmr f5, f31
    subi r5, r30, 0x1
    fadds f1, f0, f1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
lbl_fn_800CE9A4_00000F68:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_800CECF0(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x250
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    stfd f28, 0x290(r1)
    psq_st f28, 0x298(r1), 0, 0
    stfd f27, 0x280(r1)
    psq_st f27, 0x288(r1), 0, 0
    stfd f26, 0x270(r1)
    psq_st f26, 0x278(r1), 0, 0
    stfd f25, 0x260(r1)
    psq_st f25, 0x268(r1), 0, 0
    stfd f24, 0x250(r1)
    psq_st f24, 0x258(r1), 0, 0
    bl _savegpr_23
    lwz r0, lbl_8087EEB0
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_800CECF0_000016C4
    lwz r0, 0x34dc(r3)
    lfs f31, lbl_808811B4
    cmpwi r0, 0x1
    lfs f30, lbl_808811B8
    bne lbl_fn_800CECF0_0000108C
    lfs f26, lbl_808811B0
    addi r24, r3, 0x34e4
    lfs f25, lbl_80881190
    b lbl_fn_800CECF0_00001074
lbl_fn_800CECF0_00001038:
    fmr f1, f26
    lwz r3, lbl_8087EEB0
    fmr f2, f25
    lfs f6, lbl_8088118C
    fmr f3, f31
    mr r4, r24
    fmr f4, f30
    li r5, -0x1
    fmr f5, f30
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f25, f25, f30
    addi r24, r24, 0x90
lbl_fn_800CECF0_00001074:
    lwz r0, 0x34e0(r31)
    mulli r0, r0, 0x90
    add r3, r31, r0
    addi r0, r3, 0x34e4
    cmplw r24, r0
    bne lbl_fn_800CECF0_00001038
lbl_fn_800CECF0_0000108C:
    lwz r3, 0x34dc(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_800CECF0_000011C0
    lis r3, lbl_80734440@ha
    lfs f26, lbl_808811B0
    lfs f25, lbl_80881190
    addi r29, r1, 0x14
    addi r28, r3, lbl_80734440@l
    li r24, 0x0
    li r30, 0x0
lbl_fn_800CECF0_000010B8:
    add r3, r31, r30
    addi r25, r3, 0x4
    mr r3, r25
    bl fn_800C8278
    cmpwi r3, 0x0
    bne lbl_fn_800CECF0_000011B0
    lwz r0, 0x9c(r25)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_800CECF0_0000114C
    psq_l f1, 0x70(r25), 0, 0
    mr r3, r25
    lfs f2, 0x78(r25)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_800CA8E0
    fmr f27, f1
    mr r3, r25
    bl fn_800CA8B0
    fmr f29, f1
    mr r3, r25
    bl fn_800CA844
    fmr f28, f1
    mr r3, r25
    bl fn_800CA834
    fmr f4, f28
    mr r5, r3
    fmr f5, f29
    lfs f1, 0x14(r1)
    fmr f6, f27
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    addi r3, r1, 0x120
    addi r4, r28, 0x1e
    crset 6
    bl sprintf
    b lbl_fn_800CECF0_00001178
lbl_fn_800CECF0_0000114C:
    mr r3, r25
    bl fn_800CA844
    fmr f28, f1
    mr r3, r25
    bl fn_800CA834
    fmr f1, f28
    mr r5, r3
    addi r3, r1, 0x120
    addi r4, r28, 0x55
    crset 6
    bl sprintf
lbl_fn_800CECF0_00001178:
    fmr f1, f26
    lwz r3, lbl_8087EEB0
    fmr f2, f25
    lfs f6, lbl_8088118C
    fmr f3, f31
    addi r4, r1, 0x120
    fmr f4, f30
    li r5, -0x1
    fmr f5, f30
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f25, f25, f30
lbl_fn_800CECF0_000011B0:
    addi r24, r24, 0x1
    addi r30, r30, 0x14c
    cmpwi r24, 0x20
    blt lbl_fn_800CECF0_000010B8
lbl_fn_800CECF0_000011C0:
    lwz r0, 0x34dc(r31)
    cmpwi r0, 0x3
    bne lbl_fn_800CECF0_000012D4
    lfs f25, lbl_808811BC
    addi r24, r31, 0x4
    lfs f28, lbl_80881188
    li r25, 0x0
    lfs f29, lbl_8088118C
    lis r28, 0xff01
lbl_fn_800CECF0_000011E4:
    mr r3, r24
    bl fn_800C8278
    cmpwi r3, 0x0
    bne lbl_fn_800CECF0_000012C4
    lwz r0, 0x9c(r24)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_800CECF0_000012C4
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    addi r5, r24, 0x70
    bl fn_800BFAC8
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f29
    blt lbl_fn_800CECF0_000012C4
    fcmpo cr0, f28, f0
    blt lbl_fn_800CECF0_000012C4
    lwz r3, 0x4(r24)
    subi r26, r28, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_800CECF0_00001240
    bl fn_8070ABE0
    b lbl_fn_800CECF0_00001244
lbl_fn_800CECF0_00001240:
    li r3, 0x0
lbl_fn_800CECF0_00001244:
    cmpwi r3, 0x0
    ble lbl_fn_800CECF0_00001250
    li r26, -0x100
lbl_fn_800CECF0_00001250:
    lwz r0, 0x4(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800CECF0_0000126C
    lwz r0, 0xa4(r24)
    cmpwi r0, 0x0
    ble lbl_fn_800CECF0_0000126C
    lis r26, 0xffff
lbl_fn_800CECF0_0000126C:
    lwz r3, lbl_8087EEB0
    mr r5, r26
    lfs f1, lbl_808811A8
    addi r4, r24, 0x70
    lfs f2, lbl_8088118C
    bl fn_80063D3C
    lwz r29, lbl_8087EEB0
    mr r3, r24
    bl fn_800CA834
    lfs f3, lbl_8088118C
    mr r4, r3
    fmr f4, f25
    lfs f1, 0x8(r1)
    fmr f5, f25
    lfs f2, 0xc(r1)
    fmr f6, f3
    mr r3, r29
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_800CECF0_000012C4:
    addi r25, r25, 0x1
    addi r24, r24, 0x14c
    cmpwi r25, 0x20
    blt lbl_fn_800CECF0_000011E4
lbl_fn_800CECF0_000012D4:
    lwz r0, 0x34dc(r31)
    cmpwi r0, 0x4
    beq lbl_fn_800CECF0_000012E8
    cmpwi r0, 0x8
    bne lbl_fn_800CECF0_0000146C
lbl_fn_800CECF0_000012E8:
    lis r3, lbl_80734440@ha
    lfs f27, lbl_808811B0
    lfs f26, lbl_80881190
    addi r24, r31, 0x4
    lfs f25, lbl_808811C0
    addi r28, r3, lbl_80734440@l
    lfs f24, lbl_808811C4
    li r23, 0x0
    lfs f28, lbl_80881188
    lis r29, 0xcd00
    lis r30, 0xcc7f
lbl_fn_800CECF0_00001314:
    mr r3, r24
    bl fn_800C8278
    cmpwi r3, 0x0
    beq lbl_fn_800CECF0_00001340
    mr r5, r23
    addi r3, r1, 0x120
    addi r4, r28, 0x63
    crclr 6
    bl sprintf
    addi r25, r30, 0x7f7f
    b lbl_fn_800CECF0_000013C8
lbl_fn_800CECF0_00001340:
    lwz r3, 0xb0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_800CECF0_00001354
    lwz r27, 0x0(r3)
    b lbl_fn_800CECF0_00001358
lbl_fn_800CECF0_00001354:
    li r27, -0x1
lbl_fn_800CECF0_00001358:
    lwz r3, 0xac(r24)
    cmpwi r3, 0x0
    beq lbl_fn_800CECF0_0000136C
    lwz r26, 0x0(r3)
    b lbl_fn_800CECF0_00001370
lbl_fn_800CECF0_0000136C:
    li r26, -0x1
lbl_fn_800CECF0_00001370:
    lwz r3, 0xa8(r24)
    cmpwi r3, 0x0
    beq lbl_fn_800CECF0_00001384
    lwz r25, 0x0(r3)
    b lbl_fn_800CECF0_00001388
lbl_fn_800CECF0_00001384:
    li r25, -0x1
lbl_fn_800CECF0_00001388:
    mr r3, r24
    bl fn_800CA844
    fmr f29, f1
    mr r3, r24
    bl fn_800CA834
    fmr f1, f29
    mr r6, r3
    mr r5, r23
    mr r7, r25
    mr r8, r26
    mr r9, r27
    addi r3, r1, 0x120
    addi r4, r28, 0x6f
    crset 6
    bl sprintf
    subi r25, r29, 0x1
lbl_fn_800CECF0_000013C8:
    fmr f3, f31
    lwz r3, lbl_8087EEB0
    fmr f4, f30
    lfs f6, lbl_8088118C
    fmr f5, f30
    addi r4, r1, 0x120
    fadds f1, f28, f27
    lis r5, 0xcc00
    fadds f2, f28, f26
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fmr f1, f27
    lwz r3, lbl_8087EEB0
    fmr f2, f26
    lfs f6, lbl_8088118C
    fmr f3, f31
    mr r5, r25
    fmr f4, f30
    addi r4, r1, 0x120
    fmr f5, f30
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0x34dc(r31)
    cmpwi r0, 0x8
    bne lbl_fn_800CECF0_00001458
    fmr f2, f26
    mr r3, r24
    fmr f3, f31
    fmr f4, f24
    fmr f5, f30
    fadds f1, f27, f25
    bl fn_800CE9A4
lbl_fn_800CECF0_00001458:
    addi r23, r23, 0x1
    fadds f26, f26, f30
    cmpwi r23, 0x20
    addi r24, r24, 0x14c
    blt lbl_fn_800CECF0_00001314
lbl_fn_800CECF0_0000146C:
    lwz r0, 0x34dc(r31)
    cmpwi r0, 0x5
    bne lbl_fn_800CECF0_0000156C
    lwz r24, lbl_8087EE90
    li r23, -0x1
    lfs f27, lbl_808811B0
    li r25, 0x0
    lwz r0, 0x394(r24)
    li r30, 0x0
    lfs f26, lbl_80881190
    cmpwi r0, 0x0
    beq lbl_fn_800CECF0_00001514
    lis r29, lbl_80734440@ha
    li r23, -0x1
    addi r29, r29, lbl_80734440@l
    b lbl_fn_800CECF0_00001508
lbl_fn_800CECF0_000014AC:
    lwz r0, 0x39c(r24)
    mr r5, r25
    addi r3, r1, 0x20
    addi r4, r29, 0x9b
    add r6, r0, r30
    crclr 6
    bl sprintf
    fmr f1, f27
    lwz r3, lbl_8087EEB0
    fmr f2, f26
    lfs f6, lbl_8088118C
    fmr f3, f31
    addi r4, r1, 0x20
    fmr f4, f30
    li r5, -0x1
    fmr f5, f30
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f26, f26, f30
    addi r25, r25, 0x1
    addi r30, r30, 0x54
lbl_fn_800CECF0_00001508:
    lwz r0, 0x394(r24)
    cmplw r25, r0
    blt lbl_fn_800CECF0_000014AC
lbl_fn_800CECF0_00001514:
    lwz r6, lbl_8087EE90
    lis r4, lbl_80734440@ha
    addi r4, r4, lbl_80734440@l
    addi r3, r1, 0x20
    lwz r5, 0x8bc(r6)
    addi r4, r4, 0xa5
    lwz r6, 0x8c0(r6)
    crclr 6
    bl sprintf
    fmr f1, f27
    lwz r3, lbl_8087EEB0
    fmr f2, f26
    lfs f6, lbl_8088118C
    fmr f3, f31
    mr r5, r23
    fmr f4, f30
    addi r4, r1, 0x20
    fmr f5, f30
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_800CECF0_0000156C:
    lwz r3, 0x34dc(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    bgt lbl_fn_800CECF0_000016C4
    lis r3, lbl_80734440@ha
    lfs f27, lbl_808811B0
    lfs f26, lbl_80881190
    addi r26, r31, 0x4
    lfs f24, lbl_808811C8
    addi r29, r3, lbl_80734440@l
    lfs f25, lbl_808811C4
    li r23, 0x0
    lfs f29, lbl_80881188
    lis r30, 0xcd00
lbl_fn_800CECF0_000015A4:
    mr r3, r26
    bl fn_800C8278
    cmpwi r3, 0x0
    bne lbl_fn_800CECF0_000016B4
    lwz r0, 0x4(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800CECF0_000016B4
    lwz r0, 0x9c(r26)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_800CECF0_000016B4
    lwz r0, 0x34dc(r31)
    cmpwi r0, 0x6
    bne lbl_fn_800CECF0_0000160C
    mr r3, r26
    bl fn_800CA844
    fmr f28, f1
    mr r3, r26
    bl fn_800CA834
    fmr f1, f28
    mr r5, r3
    addi r3, r1, 0x120
    addi r4, r29, 0x55
    crset 6
    bl sprintf
    b lbl_fn_800CECF0_0000162C
lbl_fn_800CECF0_0000160C:
    lwz r25, 0x98(r26)
    mr r3, r26
    bl fn_800CA844
    mr r5, r25
    addi r3, r1, 0x120
    addi r4, r29, 0xb6
    crset 6
    bl sprintf
lbl_fn_800CECF0_0000162C:
    fmr f3, f31
    lwz r3, lbl_8087EEB0
    fmr f4, f30
    lfs f6, lbl_8088118C
    fmr f5, f30
    addi r4, r1, 0x120
    fadds f1, f29, f27
    lis r5, 0xcc00
    fadds f2, f29, f26
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fmr f1, f27
    lwz r3, lbl_8087EEB0
    fmr f2, f26
    lfs f6, lbl_8088118C
    fmr f3, f31
    addi r4, r1, 0x120
    fmr f4, f30
    subi r5, r30, 0x1
    fmr f5, f30
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fmr f2, f26
    mr r3, r26
    fmr f3, f31
    fmr f4, f25
    fmr f5, f30
    fadds f1, f27, f24
    bl fn_800CE9A4
    fadds f26, f26, f30
lbl_fn_800CECF0_000016B4:
    addi r23, r23, 0x1
    addi r26, r26, 0x14c
    cmpwi r23, 0x20
    blt lbl_fn_800CECF0_000015A4
lbl_fn_800CECF0_000016C4:
    addi r11, r1, 0x250
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    psq_l f28, 0x298(r1), 0, 0
    lfd f28, 0x290(r1)
    psq_l f27, 0x288(r1), 0, 0
    lfd f27, 0x280(r1)
    psq_l f26, 0x278(r1), 0, 0
    lfd f26, 0x270(r1)
    psq_l f25, 0x268(r1), 0, 0
    lfd f25, 0x260(r1)
    psq_l f24, 0x258(r1), 0, 0
    lfd f24, 0x250(r1)
    bl _restgpr_23
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_800CF45C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r7, fn_800CB718@ha
    li r6, 0x0
    stw r0, 0x54(r1)
    addi r7, r7, fn_800CB718@l
    stw r31, 0x4c(r1)
    mr r31, r3
    lbz r0, lbl_8087EFEC
    stw r4, 0x8(r1)
    extsb. r0, r0
    stw r5, 0xc(r1)
    stw r7, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r6, 0x34(r1)
    bne lbl_fn_800CF45C_00001788
    lis r6, lbl_807C75B0@ha
    lis r4, fn_800CF5B4@ha
    lis r3, fn_800CF5D0@ha
    li r0, 0x1
    addi r3, r3, fn_800CF5D0@l
    addi r5, r6, lbl_807C75B0@l
    addi r4, r4, fn_800CF5B4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C75B0@l(r6)
    stb r0, lbl_8087EFEC
lbl_fn_800CF45C_00001788:
    lwz r5, 0x28(r1)
    addi r3, r1, 0x1c
    lwz r4, 0x2c(r1)
    lwz r0, 0x30(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800CF45C_000017E8
    addic. r0, r1, 0x38
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r4, 0x10(r1)
    stw r3, 0x14(r1)
    stw r0, 0x18(r1)
    beq lbl_fn_800CF45C_000017E0
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_800CF45C_000017E0:
    li r0, 0x1
    b lbl_fn_800CF45C_000017EC
lbl_fn_800CF45C_000017E8:
    li r0, 0x0
lbl_fn_800CF45C_000017EC:
    cmpwi r0, 0x0
    beq lbl_fn_800CF45C_00001804
    lis r3, lbl_807C75B0@ha
    addi r3, r3, lbl_807C75B0@l
    stw r3, 0x34(r1)
    b lbl_fn_800CF45C_0000180C
lbl_fn_800CF45C_00001804:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CF45C_0000180C:
    mr r3, r31
    addi r4, r1, 0x34
    li r5, -0x1
    li r6, -0x1
    li r7, -0x1
    bl fn_800D123C
    addic. r3, r1, 0x34
    beq lbl_fn_800CF45C_00001860
    lwz r4, 0x34(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800CF45C_00001860
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800CF45C_00001858
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800CF45C_00001858:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800CF45C_00001860:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
