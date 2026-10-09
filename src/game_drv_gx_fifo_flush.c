#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void IOS_Ioctlv(void);
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_805D2E00(void);
extern void fn_805D9D10(void);
extern void fn_805D9D80(void);
extern void fn_805D9DF0(void);
extern void fn_805D9E10(void);
extern void fn_805F8CA0(void);
extern void fn_805F90D0(void);
extern void fn_805F93C0(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_806149C0(void);
extern void fn_80614A80(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80617340(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80618350(void);
extern void fn_8061A0F0(void);
extern void fn_8061A100(void);

/* External data declarations */
extern u8 lbl_80764138[];
extern u8 lbl_80764140[];
extern u8 lbl_80797A50[];
extern u8 lbl_80797A98[];
extern u8 lbl_80797B40[];
extern u8 lbl_80797BE0[];
extern u8 lbl_80797C50[];
extern u8 lbl_807C9F80[];
extern u8 lbl_807CA1C8[];
extern u8 lbl_807CA200[];
extern u8 lbl_807CA208[];
extern u8 lbl_807CA218[];

/* Small data declarations */
extern u32 __esFd_8087E708;

/* Function declarations */
void ESP_DiGetTmd(void);
void ESP_GetDataDir(void);
void ESP_GetTitleId(void);
void fn_805C0010(void);
void fn_805C00E0(void);
void fn_805C0120(void);
void fn_805C0140(void);
void fn_805C0290(void);
void fn_805C02B0(void);
void fn_805C02F0(void);
void fn_805C03A0(void);
void fn_805C0570(void);
void fn_805C0780(void);
void fn_805C0790(void);
void fn_805C07A0(void);
void fn_805C07B0(void);
void fn_805C07D0(void);
void fn_805C07E0(void);
void fn_805C07F0(void);
void fn_805C0800(void);
void fn_805C0810(void);
void fn_805C0820(void);
void fn_805C08E0(void);
void fn_805C0950(void);
void fn_805C0980(void);
void fn_805C0A50(void);
void fn_805C0A60(void);
void fn_805C0B00(void);
void fn_805C0B30(void);
void fn_805C0CE0(void);
void fn_805C0CF0(void);
void fn_805C0D20(void);
void fn_805C0D90(void);
void fn_805C0DA0(void);
void fn_805C0E10(void);
void fn_805C0E20(void);
void fn_805C0EA0(void);
void fn_805C0EB0(void);
void fn_805C1010(void);
void fn_805C1050(void);
void fn_805C1090(void);
void fn_805C10C0(void);
void fn_805C10E0(void);
void fn_805C1380(void);
void fn_805C1390(void);
void fn_805C13A0(void);
void fn_805C13C0(void);
void fn_805C14E0(void);
void fn_805C1560(void);
void fn_805C1630(void);
void fn_805C1760(void);
void fn_805C1770(void);

asm void ESP_DiGetTmd(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r9, r1, 0x20
    stw r31, -0x4(r12)
    mr r31, r4
    lwz r6, __esFd_8087E708
    cmpwi r6, 0x0
    blt lbl_ESP_DiGetTmd_00000040
    li r5, 0x0
    cmplw r4, r5
    bne lbl_ESP_DiGetTmd_00000048
lbl_ESP_DiGetTmd_00000040:
    li r3, -0x3f9
    b lbl_ESP_DiGetTmd_000000D4
lbl_ESP_DiGetTmd_00000048:
    clrlwi. r0, r3, 27
    beq lbl_ESP_DiGetTmd_00000058
    li r3, -0x3f9
    b lbl_ESP_DiGetTmd_000000D4
lbl_ESP_DiGetTmd_00000058:
    cmplw r3, r5
    bne lbl_ESP_DiGetTmd_00000094
    li r0, 0x4
    stw r9, 0xf0(r1)
    mr r3, r6
    li r4, 0x39
    stw r0, 0xf4(r1)
    li r5, 0x0
    li r6, 0x1
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bne lbl_ESP_DiGetTmd_000000D4
    lwz r0, 0x20(r1)
    stw r0, 0x0(r31)
    b lbl_ESP_DiGetTmd_000000D4
lbl_ESP_DiGetTmd_00000094:
    lwz r8, 0x0(r4)
    cmpwi r8, 0x0
    bne lbl_ESP_DiGetTmd_000000A8
    li r3, -0x3f9
    b lbl_ESP_DiGetTmd_000000D4
lbl_ESP_DiGetTmd_000000A8:
    stw r3, 0xf8(r1)
    li r0, 0x4
    mr r3, r6
    li r4, 0x3a
    stw r8, 0x20(r1)
    li r5, 0x1
    li r6, 0x1
    stw r9, 0xf0(r1)
    stw r0, 0xf4(r1)
    stw r8, 0xfc(r1)
    bl IOS_Ioctlv
lbl_ESP_DiGetTmd_000000D4:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void ESP_GetDataDir(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x120
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r9, r1, 0x20
    lwz r6, __esFd_8087E708
    cmpwi r6, 0x0
    blt lbl_ESP_GetDataDir_00000128
    li r0, 0x0
    cmplw r5, r0
    bne lbl_ESP_GetDataDir_00000130
lbl_ESP_GetDataDir_00000128:
    li r3, -0x3f9
    b lbl_ESP_GetDataDir_00000174
lbl_ESP_GetDataDir_00000130:
    clrlwi. r0, r5, 27
    beq lbl_ESP_GetDataDir_00000140
    li r3, -0x3f9
    b lbl_ESP_GetDataDir_00000174
lbl_ESP_GetDataDir_00000140:
    stw r4, 0x24(r1)
    li r8, 0x8
    li r0, 0x1e
    li r4, 0x1d
    stw r3, 0x20(r1)
    mr r3, r6
    li r6, 0x1
    stw r5, 0xf8(r1)
    li r5, 0x1
    stw r9, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r0, 0xfc(r1)
    bl IOS_Ioctlv
lbl_ESP_GetDataDir_00000174:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void ESP_GetTitleId(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    stw r31, -0x4(r12)
    mr r31, r3
    lwz r4, __esFd_8087E708
    cmpwi r4, 0x0
    blt lbl_ESP_GetTitleId_000001CC
    li r0, 0x0
    cmplw r3, r0
    bne lbl_ESP_GetTitleId_000001D4
lbl_ESP_GetTitleId_000001CC:
    li r3, -0x3f9
    b lbl_ESP_GetTitleId_00000210
lbl_ESP_GetTitleId_000001D4:
    addi r3, r1, 0x20
    li r0, 0x8
    stw r3, 0xf0(r1)
    mr r3, r4
    li r4, 0x20
    li r5, 0x0
    stw r0, 0xf4(r1)
    li r6, 0x1
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bne lbl_ESP_GetTitleId_00000210
    lwz r0, 0x20(r1)
    lwz r4, 0x24(r1)
    stw r4, 0x4(r31)
    stw r0, 0x0(r31)
lbl_ESP_GetTitleId_00000210:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_805C0010(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r9, r1, 0x20
    addi r10, r1, 0x40
    stw r31, -0x4(r12)
    mr r31, r6
    lwz r0, __esFd_8087E708
    cmpwi r0, 0x0
    bge lbl_fn_805C0010_00000270
    li r3, -0x3f9
    b lbl_fn_805C0010_000002E8
lbl_fn_805C0010_00000270:
    clrlwi. r0, r5, 27
    beq lbl_fn_805C0010_00000280
    li r3, -0x3f9
    b lbl_fn_805C0010_000002E8
lbl_fn_805C0010_00000280:
    li r0, 0x0
    li r8, 0x8
    cmplw r5, r0
    stw r4, 0x24(r1)
    stw r3, 0x20(r1)
    stw r9, 0xf0(r1)
    stw r8, 0xf4(r1)
    bne lbl_fn_805C0010_000002AC
    stw r0, 0xf8(r1)
    stw r0, 0xfc(r1)
    b lbl_fn_805C0010_000002C0
lbl_fn_805C0010_000002AC:
    stw r5, 0xf8(r1)
    lwz r0, 0x0(r6)
    stw r0, 0x40(r1)
    slwi r0, r0, 3
    stw r0, 0xfc(r1)
lbl_fn_805C0010_000002C0:
    li r0, 0x4
    stw r10, 0x100(r1)
    lwz r3, __esFd_8087E708
    li r4, 0x16
    stw r0, 0x104(r1)
    li r5, 0x1
    li r6, 0x2
    bl IOS_Ioctlv
    lwz r0, 0x40(r1)
    stw r0, 0x0(r31)
lbl_fn_805C0010_000002E8:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_805C00E0(void)
{
    nofralloc
    cmpwi r4, 0x1
    li r0, 0x0
    stw r4, 0x18(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    stfs f3, 0x10(r3)
    stw r0, 0x14(r3)
    stb r0, 0x1c(r3)
    bne lbl_fn_805C00E0_0000032C
    frsp f0, f1
    b lbl_fn_805C00E0_00000330
lbl_fn_805C00E0_0000032C:
    frsp f0, f2
lbl_fn_805C00E0_00000330:
    stfs f0, 0xc(r3)
    blr
}

asm void fn_805C0120(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805C0120_00000354
    lfs f0, 0x4(r3)
    b lbl_fn_805C0120_00000358
lbl_fn_805C0120_00000354:
    lfs f0, 0x8(r3)
lbl_fn_805C0120_00000358:
    stfs f0, 0xc(r3)
    blr
}

asm void fn_805C0140(void)
{
    nofralloc
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bnelr
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805C0140_00000394
    cmpwi r0, 0x1
    beq lbl_fn_805C0140_000003D0
    cmpwi r0, 0x2
    beq lbl_fn_805C0140_00000400
    cmpwi r0, 0x3
    beq lbl_fn_805C0140_00000434
    blr
lbl_fn_805C0140_00000394:
    lis r4, lbl_80764138@ha
    lfs f3, 0x4(r3)
    lfs f2, lbl_80764138@l(r4)
    lfs f1, 0xc(r3)
    lfs f0, 0x10(r3)
    fsubs f2, f3, f2
    fadds f0, f1, f0
    stfs f0, 0xc(r3)
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bnelr
    li r0, 0x0
    stfs f2, 0xc(r3)
    stw r0, 0x14(r3)
    blr
lbl_fn_805C0140_000003D0:
    lfs f2, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f0, 0x8(r3)
    fsubs f1, f2, f1
    stfs f1, 0xc(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r0, 0x0
    stfs f0, 0xc(r3)
    stw r0, 0x14(r3)
    blr
lbl_fn_805C0140_00000400:
    lfs f2, 0xc(r3)
    lfs f0, 0x10(r3)
    lfs f1, 0x4(r3)
    fadds f2, f2, f0
    stfs f2, 0xc(r3)
    fcmpo cr0, f2, f1
    cror eq, gt, eq
    bnelr
    lfs f0, 0x8(r3)
    fsubs f0, f1, f0
    fsubs f0, f2, f0
    stfs f0, 0xc(r3)
    blr
lbl_fn_805C0140_00000434:
    lbz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C0140_0000047C
    lis r4, lbl_80764138@ha
    lfs f3, 0x4(r3)
    lfs f2, lbl_80764138@l(r4)
    lfs f1, 0xc(r3)
    lfs f0, 0x10(r3)
    fsubs f2, f3, f2
    fadds f0, f1, f0
    stfs f0, 0xc(r3)
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bnelr
    li r0, 0x1
    stfs f2, 0xc(r3)
    stb r0, 0x1c(r3)
    blr
lbl_fn_805C0140_0000047C:
    lfs f2, 0xc(r3)
    lfs f1, 0x10(r3)
    lfs f0, 0x8(r3)
    fsubs f1, f2, f1
    stfs f1, 0xc(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r0, 0x0
    stfs f0, 0xc(r3)
    stb r0, 0x1c(r3)
    blr
}

asm void fn_805C0290(void)
{
    nofralloc
    lis r4, lbl_80797A50@ha
    li r0, 0x0
    addi r4, r4, lbl_80797A50@l
    stw r4, 0x0(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    blr
}

asm void fn_805C02B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805C02B0_000004F8
    cmpwi r4, 0x0
    ble lbl_fn_805C02B0_000004F8
    bl dtor_80084684
lbl_fn_805C02B0_000004F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C02F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805C02F0_00000560
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x24(r28)
    li r29, 0x1
    lfs f0, 0xc(r28)
    stfs f0, 0x10(r3)
    b lbl_fn_805C02F0_00000564
lbl_fn_805C02F0_00000560:
    li r29, 0x0
lbl_fn_805C02F0_00000564:
    lwz r3, 0x20(r28)
    lwz r31, 0x10(r3)
    addi r30, r3, 0x10
    b lbl_fn_805C02F0_00000598
lbl_fn_805C02F0_00000574:
    lwz r3, 0x8(r31)
    mr r5, r29
    lwz r4, 0x24(r28)
    li r6, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_fn_805C02F0_00000598:
    cmplw r31, r30
    bne lbl_fn_805C02F0_00000574
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C03A0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    fmr f31, f5
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    fmr f30, f4
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    fmr f29, f3
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    fmr f28, f2
    stfd f27, 0x40(r1)
    psq_st f27, 0x48(r1), 0, 0
    fmr f27, f1
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xb
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    bl fn_80614A80
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x4
    bl fn_80617340
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x5
    bl fn_80617D50
    lis r4, lbl_80764140@ha
    addi r3, r1, 0x8
    lfs f1, lbl_80764140@l(r4)
    fmr f2, f1
    fmr f3, f1
    bl fn_805F90D0
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80618350
    mr r3, r30
    li r4, 0x0
    bl fn_806149C0
    li r3, 0xa8
    li r4, 0x0
    li r5, 0x2
    bl fn_80614790
    lis r3, 0xcc01
    stfs f27, -0x8000(r3)
    stfs f28, -0x8000(r3)
    stfs f31, -0x8000(r3)
    lwz r0, 0x0(r31)
    stw r0, -0x8000(r3)
    stfs f29, -0x8000(r3)
    stfs f30, -0x8000(r3)
    stfs f31, -0x8000(r3)
    lwz r0, 0x0(r31)
    stw r0, -0x8000(r3)
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    psq_l f27, 0x48(r1), 0, 0
    lfd f27, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_805C0570(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f2
    stfd f30, 0x20(r1)
    fmr f30, f1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r8
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805C0570_0000096C
    lwz r12, 0x0(r28)
    fmr f1, f30
    fmr f2, f31
    mr r3, r28
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805C0570_000008E8
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805C0570_0000087C
    lwz r12, 0x0(r28)
    fmr f1, f30
    fmr f2, f31
    mr r3, r28
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x28(r28)
    mr r6, r30
    li r5, 0x3
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_805C0570_000008E0
lbl_fn_805C0570_0000087C:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    li r5, 0x1
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x28(r28)
    mr r6, r30
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_fn_805C0570_000008E0:
    li r31, 0x1
    b lbl_fn_805C0570_0000096C
lbl_fn_805C0570_000008E8:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805C0570_0000096C
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r4, r3
    lwz r3, 0x28(r28)
    mr r6, r30
    li r5, 0x2
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_fn_805C0570_0000096C:
    lfd f31, 0x28(r1)
    mr r3, r31
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805C0780(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805C0790(void)
{
    nofralloc
    add r3, r3, r4
    lbz r3, 0x4(r3)
    blr
}

asm void fn_805C07A0(void)
{
    nofralloc
    blr
}

asm void fn_805C07B0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_805C07D0(void)
{
    nofralloc
    blr
}

asm void fn_805C07E0(void)
{
    nofralloc
    lwz r3, 0x20(r3)
    blr
}

asm void fn_805C07F0(void)
{
    nofralloc
    add r3, r3, r4
    stb r5, 0x4(r3)
    blr
}

asm void fn_805C0800(void)
{
    nofralloc
    blr
}

asm void fn_805C0810(void)
{
    nofralloc
    blr
}

asm void fn_805C0820(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_805C0820_00000ADC
    lis r5, lbl_80797BE0@ha
    li r4, 0x0
    addi r5, r5, lbl_80797BE0@l
    stw r5, 0x0(r3)
    addi r3, r3, 0x8
    bl fn_805D9DF0
    mr r31, r3
    b lbl_fn_805C0820_00000AC4
lbl_fn_805C0820_00000A88:
    mr r4, r31
    addi r3, r29, 0x8
    bl fn_805D9D80
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805C0820_00000AAC
    mr r4, r31
    bl fn_8061A100
    b lbl_fn_805C0820_00000AB4
lbl_fn_805C0820_00000AAC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805C0820_00000AB4:
    addi r3, r29, 0x8
    li r4, 0x0
    bl fn_805D9DF0
    mr r31, r3
lbl_fn_805C0820_00000AC4:
    cmpwi r31, 0x0
    bne lbl_fn_805C0820_00000A88
    cmpwi r30, 0x0
    ble lbl_fn_805C0820_00000ADC
    mr r3, r29
    bl dtor_80084684
lbl_fn_805C0820_00000ADC:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C08E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_805C08E0_00000B44
lbl_fn_805C08E0_00000B20:
    addi r3, r30, 0x8
    clrlwi r4, r31, 16
    bl fn_805D9E10
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_fn_805C08E0_00000B44:
    lhz r0, 0x10(r30)
    cmplw r31, r0
    blt lbl_fn_805C08E0_00000B20
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C0950(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x18(r3)
    stb r0, 0x4(r3)
    stb r0, 0x5(r3)
    stb r0, 0x6(r3)
    stb r0, 0x7(r3)
    stb r0, 0x8(r3)
    stb r0, 0x9(r3)
    stb r0, 0xa(r3)
    stb r0, 0xb(r3)
    blr
}

asm void fn_805C0980(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r31, r3
    mr r3, r30
    mr r4, r29
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805C0980_00000C24
    li r4, 0x10
    bl fn_8061A0F0
    cmpwi r3, 0x0
    beq lbl_fn_805C0980_00000C14
    stw r31, 0x0(r3)
    stw r30, 0x4(r3)
lbl_fn_805C0980_00000C14:
    mr r4, r3
    addi r3, r29, 0x8
    bl fn_805D9D10
    b lbl_fn_805C0980_00000C48
lbl_fn_805C0980_00000C24:
    li r3, 0x10
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_805C0980_00000C3C
    stw r31, 0x0(r3)
    stw r30, 0x4(r3)
lbl_fn_805C0980_00000C3C:
    mr r4, r3
    addi r3, r29, 0x8
    bl fn_805D9D10
lbl_fn_805C0980_00000C48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C0A50(void)
{
    nofralloc
    stw r4, 0x28(r3)
    blr
}

asm void fn_805C0A60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x8
    bl fn_805D9DF0
    mr r31, r3
    b lbl_fn_805C0A60_00000CD0
lbl_fn_805C0A60_00000CB4:
    lwz r0, 0x4(r31)
    cmplw r0, r30
    beq lbl_fn_805C0A60_00000CD8
    mr r4, r31
    addi r3, r29, 0x8
    bl fn_805D9DF0
    mr r31, r3
lbl_fn_805C0A60_00000CD0:
    cmpwi r31, 0x0
    bne lbl_fn_805C0A60_00000CB4
lbl_fn_805C0A60_00000CD8:
    mr r4, r31
    addi r3, r29, 0x8
    bl fn_805D9D80
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805C0A60_00000CFC
    mr r4, r31
    bl fn_8061A100
    b lbl_fn_805C0A60_00000D04
lbl_fn_805C0A60_00000CFC:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805C0A60_00000D04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C0B00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    clrlwi r4, r4, 16
    addi r3, r3, 0x8
    stw r0, 0x14(r1)
    bl fn_805D9E10
    lwz r0, 0x14(r1)
    lwz r3, 0x4(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C0B30(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x58(r1)
    stfd f30, 0x50(r1)
    bl _savegpr_22
    fmr f30, f1
    mr r22, r3
    fmr f31, f2
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_805C0B30_00000E0C
lbl_fn_805C0B30_00000D9C:
    addi r3, r22, 0x8
    clrlwi r4, r28, 16
    bl fn_805D9E10
    mr r31, r3
    lwz r3, 0x4(r3)
    fmr f1, f30
    mr r4, r23
    lwz r12, 0x0(r3)
    fmr f2, f31
    mr r5, r24
    mr r6, r25
    lwz r12, 0x48(r12)
    mr r7, r26
    mr r8, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805C0B30_00000E08
    lwz r3, 0x4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805C0B30_00000E04
    lwz r29, 0x4(r31)
lbl_fn_805C0B30_00000E04:
    li r30, 0x1
lbl_fn_805C0B30_00000E08:
    addi r28, r28, 0x1
lbl_fn_805C0B30_00000E0C:
    lhz r0, 0x10(r22)
    cmplw r28, r0
    blt lbl_fn_805C0B30_00000D9C
    cmpwi r29, 0x0
    beq lbl_fn_805C0B30_00000ED0
    cmpwi r24, 0x0
    beq lbl_fn_805C0B30_00000E78
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r24
    addi r5, r1, 0x14
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r22)
    mr r4, r3
    mr r3, r22
    mr r6, r27
    lwz r12, 0x34(r12)
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_805C0B30_00000E78:
    cmpwi r26, 0x0
    beq lbl_fn_805C0B30_00000ED0
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r26
    addi r5, r1, 0x8
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r22)
    mr r4, r3
    mr r3, r22
    mr r6, r27
    lwz r12, 0x34(r12)
    li r5, 0x5
    mtctr r12
    bctrl
lbl_fn_805C0B30_00000ED0:
    lfd f31, 0x58(r1)
    mr r3, r30
    lfd f30, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805C0CE0(void)
{
    nofralloc
    lbz r3, 0x24(r3)
    blr
}

asm void fn_805C0CF0(void)
{
    nofralloc
    lwz r0, 0x1c(r3)
    and. r0, r4, r0
    beqlr
    lfs f0, 0x0(r5)
    li r0, 0x1
    stfs f0, 0xc(r3)
    lfs f0, 0x4(r5)
    stfs f0, 0x10(r3)
    lfs f0, 0x8(r5)
    stfs f0, 0x14(r3)
    stb r0, 0x18(r3)
    blr
}

asm void fn_805C0D20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_805C0D20_00000F84
lbl_fn_805C0D20_00000F60:
    addi r3, r30, 0x8
    clrlwi r4, r31, 16
    bl fn_805D9E10
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_fn_805C0D20_00000F84:
    lhz r0, 0x10(r30)
    cmplw r31, r0
    blt lbl_fn_805C0D20_00000F60
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C0D90(void)
{
    nofralloc
    blr
}

asm void fn_805C0DA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_805C0DA0_00001004
lbl_fn_805C0DA0_00000FE0:
    addi r3, r30, 0x8
    clrlwi r4, r31, 16
    bl fn_805D9E10
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_fn_805C0DA0_00001004:
    lhz r0, 0x10(r30)
    cmplw r31, r0
    blt lbl_fn_805C0DA0_00000FE0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C0E10(void)
{
    nofralloc
    blr
}

asm void fn_805C0E20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_805C0E20_00001090
lbl_fn_805C0E20_00001068:
    addi r3, r29, 0x8
    clrlwi r4, r31, 16
    bl fn_805D9E10
    lwz r3, 0x4(r3)
    mr r4, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_fn_805C0E20_00001090:
    lhz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_fn_805C0E20_00001068
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C0EA0(void)
{
    nofralloc
    stb r4, 0x24(r3)
    blr
}

asm void fn_805C0EB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_805C0EB0_00001204
    lis r5, lbl_80797B40@ha
    li r4, 0x0
    addi r5, r5, lbl_80797B40@l
    stw r5, 0x0(r3)
    addi r3, r3, 0x18
    bl fn_805D9DF0
    mr r31, r3
    b lbl_fn_805C0EB0_00001180
lbl_fn_805C0EB0_00001118:
    mr r4, r31
    addi r3, r29, 0x18
    bl fn_805D9D80
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805C0EB0_00001148
    lwz r4, 0x4(r31)
    bl fn_8061A100
    lwz r3, 0x14(r29)
    mr r4, r31
    bl fn_8061A100
    b lbl_fn_805C0EB0_00001170
lbl_fn_805C0EB0_00001148:
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805C0EB0_00001168
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_805C0EB0_00001168:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805C0EB0_00001170:
    addi r3, r29, 0x18
    li r4, 0x0
    bl fn_805D9DF0
    mr r31, r3
lbl_fn_805C0EB0_00001180:
    cmpwi r31, 0x0
    bne lbl_fn_805C0EB0_00001118
    cmpwi r29, 0x0
    beq lbl_fn_805C0EB0_000011F4
    lis r4, lbl_80797BE0@ha
    addi r3, r29, 0x8
    addi r4, r4, lbl_80797BE0@l
    stw r4, 0x0(r29)
    li r4, 0x0
    bl fn_805D9DF0
    mr r31, r3
    b lbl_fn_805C0EB0_000011EC
lbl_fn_805C0EB0_000011B0:
    mr r4, r31
    addi r3, r29, 0x8
    bl fn_805D9D80
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_805C0EB0_000011D4
    mr r4, r31
    bl fn_8061A100
    b lbl_fn_805C0EB0_000011DC
lbl_fn_805C0EB0_000011D4:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805C0EB0_000011DC:
    addi r3, r29, 0x8
    li r4, 0x0
    bl fn_805D9DF0
    mr r31, r3
lbl_fn_805C0EB0_000011EC:
    cmpwi r31, 0x0
    bne lbl_fn_805C0EB0_000011B0
lbl_fn_805C0EB0_000011F4:
    cmpwi r30, 0x0
    ble lbl_fn_805C0EB0_00001204
    mr r3, r29
    bl dtor_80084684
lbl_fn_805C0EB0_00001204:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C1010(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805C1010_00001258
    cmpwi r4, 0x0
    ble lbl_fn_805C1010_00001258
    bl dtor_80084684
lbl_fn_805C1010_00001258:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C1050(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805C1050_00001298
    cmpwi r4, 0x0
    ble lbl_fn_805C1050_00001298
    bl dtor_80084684
lbl_fn_805C1050_00001298:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805C1090(void)
{
    nofralloc
    lis r5, lbl_807C9F80@ha
    li r0, 0x0
    stw r0, lbl_807C9F80@l(r5)
    lwz r4, 0x10(r4)
    lwz r12, 0x0(r3)
    addi r4, r4, 0x10
    lwz r12, 0x5c(r12)
    mtctr r12
    bctr
}

asm void fn_805C10C0(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r4, 0x10(r4)
    lwz r12, 0x5c(r12)
    addi r4, r4, 0x10
    mtctr r12
    bctr
}

asm void fn_805C10E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r23, lbl_80797C50@ha
    lis r25, lbl_80797A98@ha
    lis r31, lbl_807CA208@ha
    lis r30, lbl_807CA218@ha
    lwz r27, 0x4(r4)
    mr r28, r3
    addi r23, r23, lbl_80797C50@l
    addi r25, r25, lbl_80797A98@l
    addi r31, r31, lbl_807CA208@l
    addi r30, r30, lbl_807CA218@l
    addi r26, r4, 0x4
    lis r22, lbl_807C9F80@ha
    li r24, 0x0
    b lbl_fn_805C10E0_00001578
lbl_fn_805C10E0_0000134C:
    lwz r3, 0x14(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805C10E0_000013CC
    li r4, 0x30
    bl fn_8061A0F0
    mr r29, r3
    lwz r3, 0x14(r28)
    li r4, 0x10
    bl fn_8061A0F0
    cmpwi r29, 0x0
    mr r21, r3
    beq lbl_fn_805C10E0_000013B4
    lwz r0, lbl_807C9F80@l(r22)
    mr r3, r29
    stw r23, 0x0(r29)
    stb r24, 0x18(r29)
    stw r24, 0x1c(r29)
    stw r0, 0x20(r29)
    stb r24, 0x24(r29)
    stw r24, 0x28(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r25, 0x0(r29)
    stw r24, 0x2c(r29)
lbl_fn_805C10E0_000013B4:
    cmpwi r21, 0x0
    beq lbl_fn_805C10E0_00001430
    subi r0, r27, 0x4
    stw r0, 0x0(r21)
    stw r29, 0x4(r21)
    b lbl_fn_805C10E0_00001430
lbl_fn_805C10E0_000013CC:
    li r3, 0x30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_805C10E0_00001410
    lwz r0, lbl_807C9F80@l(r22)
    stw r23, 0x0(r3)
    stb r24, 0x18(r3)
    stw r24, 0x1c(r3)
    stw r0, 0x20(r3)
    stb r24, 0x24(r3)
    stw r24, 0x28(r3)
    lwz r12, 0xc(r23)
    mtctr r12
    bctrl
    stw r25, 0x0(r29)
    stw r24, 0x2c(r29)
lbl_fn_805C10E0_00001410:
    li r3, 0x10
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_805C10E0_0000142C
    subi r0, r27, 0x4
    stw r0, 0x0(r3)
    stw r29, 0x4(r3)
lbl_fn_805C10E0_0000142C:
    mr r21, r3
lbl_fn_805C10E0_00001430:
    mr r4, r21
    addi r3, r28, 0x18
    bl fn_805D9D10
    lwz r4, lbl_807C9F80@l(r22)
    subi r21, r27, 0x4
    mr r3, r29
    addi r0, r4, 0x1
    stw r0, lbl_807C9F80@l(r22)
    mr r4, r21
    lwz r12, 0x0(r29)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805C10E0_00001494
    nop
lbl_fn_805C10E0_00001480:
    cmplw r3, r31
    bne lbl_fn_805C10E0_00001490
    li r0, 0x1
    b lbl_fn_805C10E0_000014A0
lbl_fn_805C10E0_00001490:
    lwz r3, 0x0(r3)
lbl_fn_805C10E0_00001494:
    cmpwi r3, 0x0
    bne lbl_fn_805C10E0_00001480
    li r0, 0x0
lbl_fn_805C10E0_000014A0:
    cmpwi r0, 0x0
    beq lbl_fn_805C10E0_000014B0
    mr r0, r21
    b lbl_fn_805C10E0_000014B4
lbl_fn_805C10E0_000014B0:
    li r0, 0x0
lbl_fn_805C10E0_000014B4:
    cmpwi r0, 0x0
    beq lbl_fn_805C10E0_000014D4
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_fn_805C10E0_000014D4:
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805C10E0_00001504
    nop
lbl_fn_805C10E0_000014F0:
    cmplw r3, r30
    bne lbl_fn_805C10E0_00001500
    li r0, 0x1
    b lbl_fn_805C10E0_00001510
lbl_fn_805C10E0_00001500:
    lwz r3, 0x0(r3)
lbl_fn_805C10E0_00001504:
    cmpwi r3, 0x0
    bne lbl_fn_805C10E0_000014F0
    li r0, 0x0
lbl_fn_805C10E0_00001510:
    cmpwi r0, 0x0
    beq lbl_fn_805C10E0_00001520
    mr r0, r21
    b lbl_fn_805C10E0_00001524
lbl_fn_805C10E0_00001520:
    li r0, 0x0
lbl_fn_805C10E0_00001524:
    cmpwi r0, 0x0
    beq lbl_fn_805C10E0_00001544
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x1
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_fn_805C10E0_00001544:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r3, r28
    addi r4, r21, 0x10
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    lwz r27, 0x0(r27)
lbl_fn_805C10E0_00001578:
    cmplw r27, r26
    bne lbl_fn_805C10E0_0000134C
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805C1380(void)
{
    nofralloc
    stw r4, 0x2c(r3)
    blr
}

asm void fn_805C1390(void)
{
    nofralloc
    lis r3, lbl_807CA200@ha
    addi r3, r3, lbl_807CA200@l
    blr
}

asm void fn_805C13A0(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r4, 0x10(r4)
    lwz r12, 0x60(r12)
    addi r4, r4, 0x10
    mtctr r12
    bctr
}

asm void fn_805C13C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r31, 0x4(r4)
    mr r26, r3
    addi r30, r4, 0x4
    lis r29, lbl_807C9F80@ha
    b lbl_fn_805C13C0_000016DC
lbl_fn_805C13C0_00001608:
    addi r3, r26, 0x18
    li r4, 0x0
    bl fn_805D9DF0
    mr r27, r3
    subi r28, r31, 0x4
    b lbl_fn_805C13C0_0000163C
lbl_fn_805C13C0_00001620:
    lwz r0, 0x0(r27)
    cmplw r0, r28
    beq lbl_fn_805C13C0_00001644
    mr r4, r27
    addi r3, r26, 0x18
    bl fn_805D9DF0
    mr r27, r3
lbl_fn_805C13C0_0000163C:
    cmpwi r27, 0x0
    bne lbl_fn_805C13C0_00001620
lbl_fn_805C13C0_00001644:
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r4, 0x4(r27)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    mr r4, r27
    addi r3, r26, 0x18
    bl fn_805D9D80
    lwz r3, lbl_807C9F80@l(r29)
    subi r0, r3, 0x1
    stw r0, lbl_807C9F80@l(r29)
    lwz r3, 0x14(r26)
    cmpwi r3, 0x0
    beq lbl_fn_805C13C0_00001698
    lwz r4, 0x4(r27)
    bl fn_8061A100
    lwz r3, 0x14(r26)
    mr r4, r27
    bl fn_8061A100
    b lbl_fn_805C13C0_000016C0
lbl_fn_805C13C0_00001698:
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_805C13C0_000016B8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_805C13C0_000016B8:
    mr r3, r27
    bl dtor_80084684
lbl_fn_805C13C0_000016C0:
    lwz r12, 0x0(r26)
    mr r3, r26
    addi r4, r28, 0x10
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_fn_805C13C0_000016DC:
    cmplw r31, r30
    bne lbl_fn_805C13C0_00001608
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C14E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_805C14E0_0000174C
lbl_fn_805C14E0_00001728:
    addi r3, r29, 0x18
    clrlwi r4, r31, 16
    bl fn_805D9E10
    lwz r0, 0x0(r3)
    cmplw r0, r30
    bne lbl_fn_805C14E0_00001748
    lwz r3, 0x4(r3)
    b lbl_fn_805C14E0_0000175C
lbl_fn_805C14E0_00001748:
    addi r31, r31, 0x1
lbl_fn_805C14E0_0000174C:
    lhz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_fn_805C14E0_00001728
    li r3, 0x0
lbl_fn_805C14E0_0000175C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C1560(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r29, lbl_807CA1C8@ha
    mr r26, r3
    mr r27, r4
    li r28, 0x0
    addi r29, r29, lbl_807CA1C8@l
    b lbl_fn_805C1560_0000182C
lbl_fn_805C1560_000017AC:
    addi r3, r26, 0x18
    clrlwi r4, r28, 16
    bl fn_805D9E10
    lwz r30, 0x0(r3)
    mr r31, r3
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_805C1560_000017EC
lbl_fn_805C1560_000017D8:
    cmplw r3, r29
    bne lbl_fn_805C1560_000017E8
    li r0, 0x1
    b lbl_fn_805C1560_000017F8
lbl_fn_805C1560_000017E8:
    lwz r3, 0x0(r3)
lbl_fn_805C1560_000017EC:
    cmpwi r3, 0x0
    bne lbl_fn_805C1560_000017D8
    li r0, 0x0
lbl_fn_805C1560_000017F8:
    cmpwi r0, 0x0
    beq lbl_fn_805C1560_00001804
    b lbl_fn_805C1560_00001808
lbl_fn_805C1560_00001804:
    li r30, 0x0
lbl_fn_805C1560_00001808:
    cmpwi r30, 0x0
    beq lbl_fn_805C1560_00001828
    lwz r3, 0x4(r31)
    mr r4, r27
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
lbl_fn_805C1560_00001828:
    addi r28, r28, 0x1
lbl_fn_805C1560_0000182C:
    lhz r0, 0x10(r26)
    cmplw r28, r0
    blt lbl_fn_805C1560_000017AC
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805C1630(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    fmr f30, f1
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805C1630_00001894
    li r3, 0x0
    b lbl_fn_805C1630_00001954
lbl_fn_805C1630_00001894:
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_805C1630_000018BC
    li r3, 0x0
    b lbl_fn_805C1630_00001954
lbl_fn_805C1630_000018BC:
    lwz r3, 0x2c(r30)
    addi r4, r1, 0x38
    addi r3, r3, 0x84
    bl fn_805F8CA0
    lis r3, lbl_80764140@ha
    stfs f30, 0x8(r1)
    lfs f0, lbl_80764140@l(r3)
    addi r3, r1, 0x38
    stfs f31, 0xc(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0x28
    stfs f0, 0x10(r1)
    bl fn_805F93C0
    lwz r4, 0x2c(r30)
    mr r5, r31
    addi r3, r1, 0x18
    bl fn_805D2E00
    lfs f0, 0x18(r1)
    lfs f1, 0x28(r1)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_805C1630_00001950
    lfs f0, 0x20(r1)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_805C1630_00001950
    lfs f0, 0x24(r1)
    lfs f1, 0x2c(r1)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_805C1630_00001950
    lfs f0, 0x1c(r1)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_805C1630_00001950
    li r3, 0x1
    b lbl_fn_805C1630_00001954
lbl_fn_805C1630_00001950:
    li r3, 0x0
lbl_fn_805C1630_00001954:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_805C1760(void)
{
    nofralloc
    lwz r3, 0x24(r3)
    blr
}

asm void fn_805C1770(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    lis r31, lbl_80764140@ha
    addi r31, r31, lbl_80764140@l
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r3, 0x28(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805C1770_00001AEC
    lwz r3, 0x2c(r30)
    lwz r0, 0x4(r31)
    lfs f1, 0x4c(r3)
    lfs f0, 0x50(r3)
    lfs f31, 0x90(r3)
    lfs f30, 0xa0(r3)
    stfs f1, 0x10(r1)
    stw r0, 0x8(r1)
    lbz r0, 0x4(r30)
    stfs f0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805C1770_00001A1C
    li r3, 0x0
    li r0, 0xff
    stb r3, 0x8(r1)
    stb r0, 0xa(r1)
lbl_fn_805C1770_00001A1C:
    lfs f1, 0x8(r31)
    addi r4, r1, 0x8
    lfs f0, 0x14(r1)
    li r3, 0x8
    lfs f2, 0x10(r1)
    fmuls f0, f0, f1
    lfs f5, 0x0(r31)
    fmuls f3, f2, f1
    fsubs f2, f30, f0
    fsubs f1, f31, f3
    fadds f3, f31, f3
    fmr f4, f2
    bl fn_805C03A0
    lfs f1, 0x10(r1)
    addi r4, r1, 0x8
    lfs f2, 0x8(r31)
    li r3, 0x8
    lfs f0, 0x14(r1)
    fmuls f1, f1, f2
    lfs f5, 0x0(r31)
    fmuls f0, f0, f2
    fadds f1, f31, f1
    fsubs f2, f30, f0
    fadds f4, f30, f0
    fmr f3, f1
    bl fn_805C03A0
    lfs f1, 0x8(r31)
    addi r4, r1, 0x8
    lfs f0, 0x14(r1)
    li r3, 0x8
    lfs f2, 0x10(r1)
    fmuls f0, f0, f1
    lfs f5, 0x0(r31)
    fmuls f3, f2, f1
    fadds f2, f30, f0
    fadds f1, f31, f3
    fsubs f3, f31, f3
    fmr f4, f2
    bl fn_805C03A0
    lfs f1, 0x10(r1)
    addi r4, r1, 0x8
    lfs f2, 0x8(r31)
    li r3, 0x8
    lfs f0, 0x14(r1)
    fmuls f1, f1, f2
    lfs f5, 0x0(r31)
    fmuls f0, f0, f2
    fsubs f1, f31, f1
    fadds f2, f30, f0
    fsubs f4, f30, f0
    fmr f3, f1
    bl fn_805C03A0
lbl_fn_805C1770_00001AEC:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
