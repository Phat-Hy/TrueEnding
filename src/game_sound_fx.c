#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80013D60(void);
extern void fn_8000D430(void);
extern void fn_8000EC88(void);
extern void fn_8003E4A4(void);
extern void fn_8003EA3C(void);
extern void fn_8003EFB0(void);
extern void fn_80041A28(void);
extern void fn_8004203C(void);
extern void fn_8004212C(void);
extern void fn_80044BD4(void);
extern void fn_80044C30(void);
extern void fn_8005B3CC(void);
extern void fn_8008B140(void);
extern void fn_80097510(void);
extern void fn_80097A20(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800EC1F4(void);
extern void fn_800EC204(void);
extern void fn_800EC24C(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_80105BD8(void);
extern void fn_8011BF94(void);
extern void fn_8011CD84(void);
extern void fn_8011D21C(void);
extern void fn_8012539C(void);
extern void fn_8012D8B8(void);
extern void fn_8013310C(void);
extern void fn_80133B30(void);
extern void fn_80133BD8(void);
extern void fn_80134134(void);
extern void fn_80137B78(void);
extern void fn_801388B8(void);
extern void fn_80139560(void);
extern void fn_801446F0(void);
extern void fn_8014DEE4(void);
extern void fn_8014EEC4(void);
extern void fn_801539E0(void);
extern void fn_8015495C(void);
extern void fn_80155DAC(void);
extern void fn_801561E4(void);
extern void fn_801562A0(void);
extern void fn_8015783C(void);
extern void fn_8015E7A0(void);
extern void fn_8015EB2C(void);
extern void fn_80164DCC(void);
extern void fn_80165C5C(void);
extern void fn_8016DC14(void);
extern void fn_8016F634(void);
extern void fn_80175AEC(void);
extern void fn_801765D8(void);
extern void fn_8017A33C(void);
extern void fn_8017AC44(void);
extern void fn_8017CB2C(void);
extern void fn_802185F4(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80370C6C(void);
extern void fn_803750E4(void);
extern void fn_803754F0(void);
extern void fn_80375D0C(void);
extern void fn_803E2110(void);
extern void fn_804491F4(void);
extern void fn_80449448(void);
extern void fn_80449A18(void);
extern void fn_80473F50(void);
extern void fn_80477694(void);
extern void fn_804776F4(void);
extern void fn_8054D798(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_806868C4(void);

/* External data declarations */
extern u8 lbl_80735238[];
extern u8 lbl_80735250[];
extern u8 lbl_80735324[];
extern u8 lbl_80779CA0[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7828[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_808812D8;
extern u32 lbl_808812DC;
extern u32 lbl_808812E0;
extern u32 lbl_80881330;
extern u32 lbl_80881370;
extern u32 lbl_8088138C;

/* Function declarations */
void fn_800EA9D4(void);
void fn_800EACEC(void);
void fn_800EAECC(void);
void fn_800EAFD4(void);
void fn_800EB270(void);
void fn_800EB488(void);
void fn_800EB49C(void);
void fn_800EB4AC(void);
void fn_800EB7A0(void);
void fn_800EBA5C(void);
void fn_800EBD00(void);
void fn_800EBE84(void);
void fn_800EBF1C(void);

asm void fn_800EA9D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_800EA9D4_00000040
    mr r3, r31
    bl fn_80139560
    li r0, 0x0
    stw r0, 0x1450(r31)
    b lbl_fn_800EA9D4_000002F8
lbl_fn_800EA9D4_00000040:
    lwz r0, 0xf50(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800EA9D4_000002F0
    mr r3, r31
    bl fn_80175AEC
    cmpwi r3, 0x0
    bne lbl_fn_800EA9D4_000002F0
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_800EA9D4_00000074
    lwz r0, 0x560(r31)
    cmpwi r0, 0x65
    beq lbl_fn_800EA9D4_000002F0
lbl_fn_800EA9D4_00000074:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_800EA9D4_00000158
    lwz r0, 0x1450(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800EA9D4_000002F8
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_800EA9D4_000000CC
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C7828@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7828@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_800EA9D4_000000CC:
    lis r29, lbl_807C6BB8@ha
    addi r29, r29, lbl_807C6BB8@l
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800EA9D4_00000134
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_800EA9D4_00000128
lbl_fn_800EA9D4_000000EC:
    lwz r0, 0x0(r29)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_800EA9D4_00000108
    cmpwi r0, 0x5
    bne lbl_fn_800EA9D4_00000120
lbl_fn_800EA9D4_00000108:
    lwz r12, 0x4(r3)
    mr r4, r31
    li r3, 0x5
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_800EA9D4_00000120:
    addi r28, r28, 0x1
    addi r30, r30, 0x8
lbl_fn_800EA9D4_00000128:
    lwz r0, 0x4(r29)
    cmpw r28, r0
    blt lbl_fn_800EA9D4_000000EC
lbl_fn_800EA9D4_00000134:
    lwz r0, 0x5c0(r31)
    mr r3, r31
    li r4, 0x1
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    bl fn_800D246C
    li r0, 0x1
    stw r0, 0x1450(r31)
    b lbl_fn_800EA9D4_000002F8
lbl_fn_800EA9D4_00000158:
    lwz r0, 0x1450(r31)
    cmpwi r0, 0x0
    ble lbl_fn_800EA9D4_000001F8
    subic. r0, r0, 0x1
    stw r0, 0x1450(r31)
    bne lbl_fn_800EA9D4_000002F8
    li r3, 0x2711
    bl fn_80219E6C
    lwz r0, 0x7e0(r31)
    mr r28, r3
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800EA9D4_0000019C
    addi r3, r31, 0x7d4
    li r4, 0x20
    li r5, 0x0
    bl fn_8013310C
lbl_fn_800EA9D4_0000019C:
    lwz r0, 0x24(r1)
    li r12, 0x0
    li r11, -0x1
    lis r8, lbl_807C6B90@ha
    clrlwi r0, r0, 4
    stw r12, 0x8(r1)
    mr r4, r28
    mr r5, r31
    stw r12, 0xc(r1)
    mr r6, r31
    addi r3, r1, 0x8
    addi r8, r8, lbl_807C6B90@l
    stw r12, 0x10(r1)
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    stw r12, 0x14(r1)
    stw r12, 0x18(r1)
    stw r11, 0x1c(r1)
    stw r0, 0x24(r1)
    stw r11, 0x20(r1)
    bl fn_8003EA3C
    b lbl_fn_800EA9D4_000002F8
lbl_fn_800EA9D4_000001F8:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_800EA9D4_00000238
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C7828@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7828@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_800EA9D4_00000238:
    lis r28, lbl_807C6BB8@ha
    addi r28, r28, lbl_807C6BB8@l
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800EA9D4_000002A0
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_800EA9D4_00000294
lbl_fn_800EA9D4_00000258:
    lwz r0, 0x0(r28)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_800EA9D4_00000274
    cmpwi r0, 0x5
    bne lbl_fn_800EA9D4_0000028C
lbl_fn_800EA9D4_00000274:
    lwz r12, 0x4(r3)
    mr r4, r31
    li r3, 0x5
    li r5, 0x0
    mtctr r12
    bctrl
lbl_fn_800EA9D4_0000028C:
    addi r29, r29, 0x1
    addi r30, r30, 0x8
lbl_fn_800EA9D4_00000294:
    lwz r0, 0x4(r28)
    cmpw r29, r0
    blt lbl_fn_800EA9D4_00000258
lbl_fn_800EA9D4_000002A0:
    lwz r0, 0x9f8(r31)
    lwz r3, 0x5c0(r31)
    cmpwi r0, 0x0
    clrrwi r0, r3, 1
    stw r0, 0x5c0(r31)
    bgt lbl_fn_800EA9D4_000002E4
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F430
    li r4, 0x66
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_800EA9D4_000002F8
    lwz r3, lbl_8087F430
    bl fn_80370C6C
    b lbl_fn_800EA9D4_000002F8
lbl_fn_800EA9D4_000002E4:
    li r0, 0x1e
    stw r0, 0x1450(r31)
    b lbl_fn_800EA9D4_000002F8
lbl_fn_800EA9D4_000002F0:
    mr r3, r31
    bl fn_80139560
lbl_fn_800EA9D4_000002F8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800EACEC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_800EACEC_00000350
    mr r3, r31
    bl fn_80139560
    li r0, 0x0
    stw r0, 0x1450(r31)
    b lbl_fn_800EACEC_000004E0
lbl_fn_800EACEC_00000350:
    lwz r0, 0x12a4(r31)
    lwz r3, 0x5c0(r31)
    extrwi. r0, r0, 1, 15
    clrrwi r0, r3, 1
    stw r0, 0x5c0(r31)
    beq lbl_fn_800EACEC_000004CC
    lwz r0, 0xf50(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800EACEC_000004C0
    mr r3, r31
    bl fn_80175AEC
    cmpwi r3, 0x0
    bne lbl_fn_800EACEC_000004C0
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_800EACEC_0000039C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x65
    beq lbl_fn_800EACEC_000004C0
lbl_fn_800EACEC_0000039C:
    lwz r0, 0x1450(r31)
    cmpwi r0, 0x0
    ble lbl_fn_800EACEC_00000498
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800EACEC_000003C4
    li r4, 0xac
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_800EACEC_000003D0
lbl_fn_800EACEC_000003C4:
    lwz r3, 0x1450(r31)
    subi r0, r3, 0x1
    stw r0, 0x1450(r31)
lbl_fn_800EACEC_000003D0:
    lwz r0, 0x1450(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800EACEC_000004E0
    li r3, 0x2711
    bl fn_80219E6C
    lwz r0, 0x7e0(r31)
    mr r30, r3
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800EACEC_00000408
    addi r3, r31, 0x7d4
    li r4, 0x20
    li r5, 0x0
    bl fn_8013310C
lbl_fn_800EACEC_00000408:
    lwz r0, 0x24(r1)
    li r12, 0x0
    li r11, -0x1
    lis r8, lbl_807C6B90@ha
    clrlwi r0, r0, 4
    stw r12, 0x8(r1)
    mr r4, r30
    mr r5, r31
    stw r12, 0xc(r1)
    mr r6, r31
    addi r3, r1, 0x8
    addi r8, r8, lbl_807C6B90@l
    stw r12, 0x10(r1)
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    stw r12, 0x14(r1)
    stw r12, 0x18(r1)
    stw r11, 0x1c(r1)
    stw r0, 0x24(r1)
    stw r11, 0x20(r1)
    bl fn_8003EA3C
    lwz r0, 0x48(r31)
    cmpwi r0, 0x3
    bne lbl_fn_800EACEC_000004E0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800EACEC_000004E0
    li r4, 0x5
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_800EACEC_000004E0
    lwz r3, lbl_8087F430
    li r4, 0x1b7
    bl fn_803750E4
    b lbl_fn_800EACEC_000004E0
lbl_fn_800EACEC_00000498:
    lwz r0, 0x9f8(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_800EACEC_000004B4
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_800EACEC_000004E0
lbl_fn_800EACEC_000004B4:
    li r0, 0x258
    stw r0, 0x1450(r31)
    b lbl_fn_800EACEC_000004E0
lbl_fn_800EACEC_000004C0:
    mr r3, r31
    bl fn_80139560
    b lbl_fn_800EACEC_000004E0
lbl_fn_800EACEC_000004CC:
    lwz r0, 0x12a4(r31)
    mr r3, r31
    oris r0, r0, 0x200
    stw r0, 0x12a4(r31)
    bl fn_800EAECC
lbl_fn_800EACEC_000004E0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800EAECC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x1434(r3)
    cmpwi r4, 0x0
    ble lbl_fn_800EAECC_000005AC
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_800EAECC_0000059C
    cmpwi r4, 0x1e
    bne lbl_fn_800EAECC_00000534
    bl fn_800EB7A0
    b lbl_fn_800EAECC_0000059C
lbl_fn_800EAECC_00000534:
    cmpwi r4, 0xf
    bne lbl_fn_800EAECC_0000059C
    lwz r0, 0x146c(r3)
    cmpwi r0, 0x2c
    beq lbl_fn_800EAECC_00000584
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80105BD8
    lis r4, lbl_80735238@ha
    lfs f1, lbl_808812D8
    addi r4, r4, lbl_80735238@l
    addi r3, r1, 0x8
    lwz r4, 0x8(r4)
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_800EAECC_00000584:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
lbl_fn_800EAECC_0000059C:
    lwz r3, 0x1434(r31)
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    b lbl_fn_800EAECC_000005EC
lbl_fn_800EAECC_000005AC:
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_800EAECC_000005D8
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_800EAECC_000005D0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_800EAECC_000005D8
lbl_fn_800EAECC_000005D0:
    mr r3, r31
    bl fn_800EE360
lbl_fn_800EAECC_000005D8:
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_801765D8
lbl_fn_800EAECC_000005EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EAFD4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_800EAFD4_00000880
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_800EAFD4_00000664
    cmpwi r0, 0x6
    bne lbl_fn_800EAFD4_0000064C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1d
    beq lbl_fn_800EAFD4_00000664
lbl_fn_800EAFD4_0000064C:
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
lbl_fn_800EAFD4_00000664:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_800EAFD4_000006F0
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_800EAFD4_0000069C
    lwz r0, 0x560(r30)
    cmpwi r0, 0x17
    beq lbl_fn_800EAFD4_000006D8
    cmpwi r0, 0x3b
    beq lbl_fn_800EAFD4_000006D8
    cmpwi r0, 0x8e
    beq lbl_fn_800EAFD4_000006D8
lbl_fn_800EAFD4_0000069C:
    lfs f3, 0x30(r31)
    mr r3, r30
    lfs f2, lbl_80881330
    addi r4, r1, 0x8
    lfs f1, 0x2c(r31)
    li r5, -0x1
    lfs f0, 0x28(r31)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    li r6, 0x0
    fmuls f0, f0, f2
    stfs f3, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_8015E7A0
lbl_fn_800EAFD4_000006D8:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_fn_800EAFD4_00000880
lbl_fn_800EAFD4_000006F0:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x3
    bne lbl_fn_800EAFD4_000007E0
    lwz r0, 0x68(r31)
    cmpwi r0, 0x0
    ble lbl_fn_800EAFD4_000007E0
    lis r3, 0x4330
    xoris r0, r0, 0x8000
    lis r4, lbl_80735250@ha
    stw r0, 0x1c(r1)
    lwz r5, 0x940(r30)
    stw r3, 0x18(r1)
    xoris r0, r5, 0x8000
    lfd f5, lbl_80735250@l(r4)
    lfd f0, 0x18(r1)
    stw r0, 0x24(r1)
    fsubs f2, f0, f5
    lfs f4, 0x7d8(r30)
    stw r3, 0x20(r1)
    lfs f0, lbl_80881370
    lfd f1, 0x20(r1)
    fadds f3, f4, f2
    stw r0, 0x2c(r1)
    fsubs f2, f1, f5
    stw r3, 0x28(r1)
    lfd f1, 0x28(r1)
    fdivs f2, f3, f2
    fsubs f1, f1, f5
    fcmpo cr0, f2, f0
    fdivs f1, f4, f1
    ble lbl_fn_800EAFD4_00000784
    fcmpo cr0, f1, f0
    bge lbl_fn_800EAFD4_00000784
    lwz r3, lbl_8087F490
    mr r5, r30
    li r4, 0x3
    bl fn_803E2110
lbl_fn_800EAFD4_00000784:
    lwz r3, lbl_8087F430
    li r4, 0x38a
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_800EAFD4_000007E0
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800EAFD4_000007E0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800EAFD4_000007E0
    lwz r3, lbl_8087F430
    li r4, 0xfa
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_800EAFD4_000007E0
    lwz r29, lbl_8087F430
    lwz r3, 0x50(r30)
    bl fn_80219558
    mr r5, r3
    mr r3, r29
    li r4, 0xfa
    bl fn_80370AE4
lbl_fn_800EAFD4_000007E0:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x2
    bne lbl_fn_800EAFD4_00000880
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_800EAFD4_00000880
    lbz r4, 0xd74(r30)
    extsb r0, r4
    cmpwi r0, 0x2
    blt lbl_fn_800EAFD4_00000880
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800EAFD4_00000838
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800EAFD4_00000838
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x1
    bl fn_8011CD84
    b lbl_fn_800EAFD4_00000880
lbl_fn_800EAFD4_00000838:
    lwz r0, 0xd7c(r30)
    cmpwi r0, 0x0
    blt lbl_fn_800EAFD4_00000880
    extsb r0, r4
    cmpwi r0, 0x2
    blt lbl_fn_800EAFD4_00000880
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_800EAFD4_00000870
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x4
    bl fn_8011CD84
    b lbl_fn_800EAFD4_00000880
lbl_fn_800EAFD4_00000870:
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x1
    bl fn_8011CD84
lbl_fn_800EAFD4_00000880:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800EB270(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x1
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r31, lbl_8087F0A8
    stw r0, 0x58c(r3)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_800EB270_000008DC
    bl fn_800F8548
    stw r3, 0x590(r29)
lbl_fn_800EB270_000008DC:
    cmpwi r30, 0xc8
    bne lbl_fn_800EB270_000008EC
    lwz r4, 0x270(r31)
    b lbl_fn_800EB270_000008F0
lbl_fn_800EB270_000008EC:
    li r4, -0x1
lbl_fn_800EB270_000008F0:
    lwz r0, 0x14a8(r29)
    li r3, 0x0
    cmpwi r30, 0xd0
    stw r4, 0x594(r29)
    rlwinm r0, r0, 0, 3, 1
    stw r3, 0x598(r29)
    stw r0, 0x14a8(r29)
    beq lbl_fn_800EB270_00000918
    cmpwi r30, 0xe5
    bne lbl_fn_800EB270_0000097C
lbl_fn_800EB270_00000918:
    lwz r3, 0x648(r29)
    li r4, 0x0
    li r5, -0x1
    li r0, 0x1
    cmpwi r3, 0x0
    stw r5, 0x594(r29)
    stb r4, 0x59d(r29)
    stb r4, 0x59c(r29)
    stb r0, 0x59f(r29)
    beq lbl_fn_800EB270_00000964
    lwz r12, 0x0(r3)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r6, 0x0
    lwz r12, 0x18(r12)
    mr r5, r4
    li r7, 0xc8
    mtctr r12
    bctrl
lbl_fn_800EB270_00000964:
    mr r3, r30
    bl fn_80219E6C
    lwz r0, 0x638(r29)
    stw r0, 0x63c(r29)
    stw r3, 0x638(r29)
    b lbl_fn_800EB270_00000A98
lbl_fn_800EB270_0000097C:
    lwz r4, 0xd28(r29)
    cmpwi r4, 0x0
    beq lbl_fn_800EB270_000009E4
    lwz r12, 0x0(r4)
    addi r3, r1, 0x8
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r31, r1, 0x14
    psq_st f1, 0x0(r31), 0, 0
    mr r3, r30
    stfs f2, 0x1c(r1)
    bl fn_80219E6C
    lfs f1, lbl_808812DC
    mr r4, r3
    mr r3, r29
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_801562A0
    b lbl_fn_800EB270_00000A98
lbl_fn_800EB270_000009E4:
    lwz r5, 0xd1c(r29)
    cmpwi r5, 0x0
    beq lbl_fn_800EB270_00000A84
    psq_l f1, 0x528(r5), 0, 0
    addi r31, r1, 0x14
    lfs f2, 0x530(r5)
    mr r4, r29
    stfs f2, 0x1c(r1)
    li r3, 0x0
    psq_st f1, 0x0(r31), 0, 0
    bl fn_80041A28
    cmpwi r3, 0x2
    bne lbl_fn_800EB270_00000A50
    addi r3, r29, 0xb0
    li r4, 0x161
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_800EB270_00000A50
    mr r3, r30
    bl fn_80219E6C
    lwz r6, 0xd1c(r29)
    mr r4, r3
    mr r3, r29
    mr r5, r31
    lfs f1, 0x620(r6)
    bl fn_8015783C
    b lbl_fn_800EB270_00000A98
lbl_fn_800EB270_00000A50:
    mr r3, r30
    bl fn_80219E6C
    lwz r6, 0xd1c(r29)
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x14
    lfs f1, 0x620(r6)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_801562A0
    b lbl_fn_800EB270_00000A98
lbl_fn_800EB270_00000A84:
    mr r3, r30
    bl fn_80219E6C
    mr r4, r3
    mr r3, r29
    bl fn_801561E4
lbl_fn_800EB270_00000A98:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800EB488(void)
{
    nofralloc
    psq_l f1, 0x6c(r4), 0, 0
    lfs f2, 0x74(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_800EB49C(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctr
}

asm void fn_800EB4AC(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xe0
    bl _savegpr_27
    lwz r0, 0x55c(r3)
    mr r31, r3
    cmpwi r0, 0x6
    beq lbl_fn_800EB4AC_00000DAC
    lwz r4, 0x648(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800EB4AC_00000DAC
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1
    bne lbl_fn_800EB4AC_00000DAC
    lfs f3, lbl_808812DC
    li r4, 0x79
    lfs f0, lbl_808812D8
    stfs f3, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x98
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    addi r29, r1, 0x8c
    lfs f2, 0x94(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r1, 0x5c
    lwz r4, 0x648(r31)
    stfs f2, 0x70(r1)
    bl fn_80044BD4
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    addi r4, r1, 0x80
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    lwz r4, 0xd28(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800EB4AC_00000C28
    lwz r12, 0x0(r4)
    addi r3, r1, 0x50
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    addi r4, r1, 0x74
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r28, r1, 0x44
    lfs f0, 0x88(r1)
    addi r5, r1, 0x38
    lfs f5, 0x78(r1)
    mr r3, r28
    fsubs f6, f2, f0
    lfs f4, 0x84(r1)
    lfs f3, 0x74(r1)
    mr r4, r28
    lfs f0, 0x80(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0x7c(r1)
    fmr f2, f6
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x40(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x4c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_800EB4AC_00000D08
lbl_fn_800EB4AC_00000C28:
    lwz r27, 0xd1c(r31)
    cmpwi r27, 0x0
    beq lbl_fn_800EB4AC_00000D08
    addi r3, r1, 0x74
    psq_l f1, 0x600(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r28, r1, 0x2c
    lfs f2, 0x608(r27)
    addi r5, r1, 0x20
    lfs f0, 0x88(r1)
    mr r3, r28
    lfs f5, 0x78(r1)
    mr r4, r28
    fsubs f6, f2, f0
    lfs f4, 0x84(r1)
    lfs f3, 0x74(r1)
    lfs f0, 0x80(r1)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x28(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    addi r28, r1, 0x14
    lfs f2, 0x34(r1)
    addi r5, r1, 0x8
    psq_st f1, 0x0(r29), 0, 0
    mr r3, r28
    mr r4, r28
    stfs f2, 0x94(r1)
    lfs f3, 0x5fc(r27)
    lfs f0, 0x5fc(r31)
    lfs f5, 0x5f8(r27)
    fsubs f2, f3, f0
    lfs f4, 0x5f8(r31)
    lfs f3, 0x5f4(r27)
    lfs f0, 0x5f4(r31)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_800EB4AC_00000D08:
    lha r0, 0xd3e(r31)
    addi r3, r1, 0x68
    lfs f2, 0x70(r1)
    addi r4, r31, 0xfa4
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r0, 0x2
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xfac(r31)
    bne lbl_fn_800EB4AC_00000DAC
    lwz r0, 0x640(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_800EB4AC_00000DAC
    lwz r0, 0xfb0(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_800EB4AC_00000DAC
    lwz r3, 0x648(r31)
    li r4, 0x0
    bl fn_80044C30
    cmpwi r3, 0x0
    beq lbl_fn_800EB4AC_00000D60
    lwz r27, 0x4(r3)
    b lbl_fn_800EB4AC_00000D64
lbl_fn_800EB4AC_00000D60:
    li r27, 0x0
lbl_fn_800EB4AC_00000D64:
    addi r3, r31, 0x7d4
    li r4, 0x3d
    bl fn_80134134
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_800EB4AC_00000D98
    lwz r3, 0x0(r3)
    lwz r3, 0x4(r3)
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_800EB4AC_00000D98
    lwz r3, 0x0(r30)
    lwz r27, 0x4(r3)
lbl_fn_800EB4AC_00000D98:
    mr r3, r31
    mr r4, r27
    addi r5, r1, 0x80
    addi r6, r1, 0x8c
    bl fn_80165C5C
lbl_fn_800EB4AC_00000DAC:
    mr r3, r31
    bl fn_80139560
    addi r11, r1, 0xe0
    bl _restgpr_27
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_800EB7A0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    bl _savegpr_27
    lwz r0, lbl_8087F430
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_800EB7A0_00000E08
    mr r3, r0
    bl fn_803754F0
    cmpwi r3, 0x0
    bne lbl_fn_800EB7A0_00001068
lbl_fn_800EB7A0_00000E08:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x280(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800EB7A0_00001068
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_800EB7A0_00001068
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_800EB7A0_00001068
    lwz r0, 0x48(r29)
    cmpwi r0, 0x2
    bne lbl_fn_800EB7A0_00001068
    lwz r3, 0x7e0(r29)
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_800EB7A0_00001068
    rlwinm r3, r3, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_800EB7A0_00001068
    lwz r3, 0x13b0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800EB7A0_00000E88
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_800EB7A0_00000E88
    lwz r0, 0x7e0(r3)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_800EB7A0_00001068
lbl_fn_800EB7A0_00000E88:
    addi r3, r29, 0x7d4
    li r4, 0x0
    bl fn_80133BD8
    lwz r4, lbl_8087F8A0
    mr r31, r3
    lwz r30, 0x93c(r29)
    li r0, 0x0
    lwz r28, 0x48(r4)
    mr r5, r31
    lfs f1, lbl_808812D8
    mr r6, r30
    stw r0, 0x24(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    li r27, 0x4
    stw r0, 0x20(r1)
    li r7, 0x0
    bl fn_804491F4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800EB7A0_00000EE4
    bl fn_80375D0C
    mr r27, r3
lbl_fn_800EB7A0_00000EE4:
    cmpw r31, r27
    ble lbl_fn_800EB7A0_00000F00
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x3
    bne lbl_fn_800EB7A0_00000F00
    mr r27, r31
lbl_fn_800EB7A0_00000F00:
    lwz r5, 0x874(r28)
    mr r6, r27
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    bl fn_80449448
    lwz r3, 0x24(r1)
    li r27, 0x0
    lwz r0, 0x20(r1)
    lfs f3, lbl_808812DC
    add r0, r3, r0
    stw r0, 0x24(r1)
    lfs f1, lbl_808812E0
    lfs f0, 0x5b0(r29)
    lfs f2, 0x5fc(r29)
    fmuls f4, f1, f0
    lfs f1, 0x5f8(r29)
    lfs f0, 0x5f4(r29)
    fadds f2, f2, f3
    stfs f3, 0x28(r1)
    fadds f1, f1, f4
    fadds f0, f0, f3
    stfs f2, 0x3c(r1)
    lfs f31, lbl_808812D8
    stfs f0, 0x34(r1)
    stfs f1, 0x38(r1)
    lwz r0, 0xd94(r29)
    stfs f4, 0x2c(r1)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    stfs f3, 0x30(r1)
    beq lbl_fn_800EB7A0_00000F9C
    addi r3, r29, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    bne lbl_fn_800EB7A0_00000FC0
    lwz r0, 0xd94(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_800EB7A0_00000FC0
lbl_fn_800EB7A0_00000F9C:
    lwz r4, lbl_8087F0A8
    li r27, 0x2
    lwz r3, lbl_8087F430
    lfs f0, 0x30c(r4)
    cmpwi r3, 0x0
    fmuls f31, f31, f0
    beq lbl_fn_800EB7A0_00000FC0
    li r4, 0xeb
    bl fn_803750E4
lbl_fn_800EB7A0_00000FC0:
    mr r3, r29
    bl fn_8017CB2C
    cmpwi r3, 0x0
    beq lbl_fn_800EB7A0_00000FE0
    lwz r3, lbl_8087F0A8
    li r27, 0x2
    lfs f0, 0x310(r3)
    fmuls f31, f31, f0
lbl_fn_800EB7A0_00000FE0:
    lwz r0, lbl_8087F8A8
    cmpwi r0, 0x0
    beq lbl_fn_800EB7A0_0000104C
    lis r5, lbl_80779CA0@ha
    lwz r6, 0x24(r1)
    addi r3, r1, 0x40
    li r4, 0x20
    addi r5, r5, lbl_80779CA0@l
    crclr 6
    bl fn_806868C4
    li r4, 0x0
    stw r4, 0x8(r1)
    li r3, 0x1
    li r0, -0x1
    stw r4, 0xc(r1)
    mr r7, r27
    addi r5, r1, 0x40
    addi r6, r1, 0x34
    stw r3, 0x10(r1)
    li r4, 0x2
    li r8, 0x0
    li r9, 0x1
    stw r0, 0x14(r1)
    li r10, 0x0
    stw r0, 0x18(r1)
    lwz r3, lbl_8087F8A8
    bl fn_8054D798
lbl_fn_800EB7A0_0000104C:
    fmr f1, f31
    lwz r3, lbl_8087F4F0
    lwz r4, 0x13b0(r29)
    mr r5, r31
    mr r6, r30
    li r7, 0x0
    bl fn_80449A18
lbl_fn_800EB7A0_00001068:
    addi r11, r1, 0xe0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    bl _restgpr_27
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_800EBA5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    bl fn_801765D8
    mr r3, r31
    bl fn_801446F0
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_800EBA5C_000010C0
    mr r3, r31
    bl fn_801539E0
lbl_fn_800EBA5C_000010C0:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_800EBA5C_000010D8
    mr r3, r31
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_800EBA5C_000010D8:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_800EBA5C_000010F4
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 19, 17
    stw r0, 0x54c(r31)
lbl_fn_800EBA5C_000010F4:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_800EBA5C_0000110C
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0x12a4(r31)
lbl_fn_800EBA5C_0000110C:
    mr r3, r31
    li r4, 0x0
    bl fn_80164DCC
    lwz r0, 0x54c(r31)
    li r30, 0x0
    lfs f0, lbl_808812D8
    addi r3, r31, 0x7d4
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x54c(r31)
    li r4, 0x0
    stw r30, 0x58c(r31)
    stfs f0, 0x568(r31)
    bl fn_80133B30
    addi r3, r31, 0x7d4
    bl fn_8012D8B8
    lwz r0, 0x954(r31)
    mr r3, r31
    lfs f0, lbl_808812DC
    stw r0, 0x9f8(r31)
    stfs f0, 0xac8(r31)
    bl fn_8016F634
    addi r3, r31, 0xc58
    bl fn_8011BF94
    addi r3, r31, 0x1030
    bl fn_8012539C
    stw r30, 0x28c(r31)
    addi r3, r31, 0xb0
    addi r4, r1, 0x8
    stw r30, 0x8(r1)
    bl fn_8000D430
    addic. r3, r1, 0x8
    beq lbl_fn_800EBA5C_000011C0
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800EBA5C_000011C0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800EBA5C_000011B8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800EBA5C_000011B8:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_800EBA5C_000011C0:
    addi r3, r31, 0xb0
    bl fn_80097510
    mr r5, r31
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_800EBA5C_000011E8
lbl_fn_800EBA5C_000011D8:
    lwz r3, 0x654(r5)
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    stw r4, 0x1ec(r3)
lbl_fn_800EBA5C_000011E8:
    lwz r0, 0x650(r31)
    cmplw r6, r0
    blt lbl_fn_800EBA5C_000011D8
    lwz r3, 0x680(r31)
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_800EBA5C_00001208
    stw r0, 0x200(r3)
lbl_fn_800EBA5C_00001208:
    lwz r3, 0x684(r31)
    addi r4, r31, 0x684
    cmpwi r3, 0x0
    beq lbl_fn_800EBA5C_0000121C
    stw r0, 0x200(r3)
lbl_fn_800EBA5C_0000121C:
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800EBA5C_0000122C
    stw r0, 0x200(r3)
lbl_fn_800EBA5C_0000122C:
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800EBA5C_0000123C
    stw r0, 0x200(r3)
lbl_fn_800EBA5C_0000123C:
    lwz r3, 0xc(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800EBA5C_0000124C
    stw r0, 0x200(r3)
lbl_fn_800EBA5C_0000124C:
    lwz r3, 0x10(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800EBA5C_0000125C
    stw r0, 0x200(r3)
lbl_fn_800EBA5C_0000125C:
    lwz r3, 0x14(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800EBA5C_0000126C
    stw r0, 0x200(r3)
lbl_fn_800EBA5C_0000126C:
    lwz r3, 0x18(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800EBA5C_0000127C
    stw r0, 0x200(r3)
lbl_fn_800EBA5C_0000127C:
    mr r5, r31
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_800EBA5C_0000129C
lbl_fn_800EBA5C_0000128C:
    lwz r3, 0x6a8(r5)
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    stw r4, 0x1e0(r3)
lbl_fn_800EBA5C_0000129C:
    lwz r0, 0x6a4(r31)
    cmplw r6, r0
    blt lbl_fn_800EBA5C_0000128C
    lwz r0, 0x14a8(r31)
    li r30, 0x0
    stw r30, 0x1428(r31)
    mr r3, r31
    rlwinm r0, r0, 0, 5, 3
    li r4, 0x0
    stw r30, 0x142c(r31)
    li r5, 0x1
    stw r0, 0x14a8(r31)
    stw r30, 0xfc0(r31)
    bl fn_8016DC14
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_8017A33C
    lwz r0, 0x12a8(r31)
    mr r3, r31
    li r4, 0x1
    rlwinm r0, r0, 0, 23, 21
    stw r0, 0x12a8(r31)
    bl fn_8017AC44
    lwz r0, 0x12a8(r31)
    stw r30, 0x1208(r31)
    rlwinm r0, r0, 0, 14, 12
    stw r30, 0x610(r31)
    stw r0, 0x12a8(r31)
    stw r30, 0xf1c(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800EBD00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpw r4, r5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_800EBD00_0000143C
    cmpwi r4, 0x1
    bne lbl_fn_800EBD00_000013D4
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    lwz r3, 0x48(r3)
    bl fn_8014EEC4
    li r0, 0x1
    stw r0, 0x3fc(r29)
    lfs f1, lbl_808812D8
    addi r3, r29, 0xb0
    lfs f2, lbl_8088138C
    li r4, 0x0
    li r5, 0x2
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r31, 0x0
lbl_fn_800EBD00_00001398:
    mr r4, r31
    addi r3, r29, 0xb0
    bl fn_80097A20
    addi r31, r31, 0x1
    cmpwi r31, 0x23a
    blt lbl_fn_800EBD00_00001398
    lwz r12, 0x8c(r29)
    lis r4, lbl_80735324@ha
    addi r4, r4, lbl_80735324@l
    addi r3, r29, 0x8c
    lwz r12, 0xc(r12)
    addi r4, r4, 0x34
    mtctr r12
    bctrl
    b lbl_fn_800EBD00_00001428
lbl_fn_800EBD00_000013D4:
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    lwz r3, 0x48(r3)
    bl fn_8014DEE4
    li r31, 0x0
lbl_fn_800EBD00_000013F0:
    mr r4, r31
    addi r3, r29, 0xb0
    bl fn_80097A20
    addi r31, r31, 0x1
    cmpwi r31, 0x23a
    blt lbl_fn_800EBD00_000013F0
    lwz r12, 0x8c(r29)
    lis r4, lbl_80735324@ha
    addi r4, r4, lbl_80735324@l
    addi r3, r29, 0x8c
    lwz r12, 0xc(r12)
    addi r4, r4, 0x5e
    mtctr r12
    bctrl
lbl_fn_800EBD00_00001428:
    mr r3, r29
    bl fn_80137B78
    li r0, 0x2
    stw r0, 0xac(r29)
    b lbl_fn_800EBD00_00001494
lbl_fn_800EBD00_0000143C:
    cmpwi r4, 0x1
    beq lbl_fn_800EBD00_00001494
    bl fn_802185F4
    mr r31, r3
    li r30, 0x0
lbl_fn_800EBD00_00001450:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800EBD00_00001468
    mr r4, r30
    addi r3, r29, 0xb0
    bl fn_80097A20
lbl_fn_800EBD00_00001468:
    addi r30, r30, 0x1
    addi r31, r31, 0x1
    cmpwi r30, 0x23a
    blt lbl_fn_800EBD00_00001450
    lis r4, lbl_80735324@ha
    addi r3, r29, 0x8c
    addi r4, r4, lbl_80735324@l
    addi r4, r4, 0x5e
    bl fn_80477694
    li r0, 0x2
    stw r0, 0xac(r29)
lbl_fn_800EBD00_00001494:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800EBE84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xac(r3)
    cmpwi r0, 0x2
    bne lbl_fn_800EBE84_00001530
    addi r3, r3, 0xb0
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_800EBE84_000014E8
    li r3, 0x1
    b lbl_fn_800EBE84_00001534
lbl_fn_800EBE84_000014E8:
    addi r3, r31, 0x8c
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_800EBE84_00001500
    li r3, 0x1
    b lbl_fn_800EBE84_00001534
lbl_fn_800EBE84_00001500:
    addi r3, r31, 0x8c
    addi r4, r31, 0xb0
    bl fn_804776F4
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_800EBE84_00001528
    addi r3, r31, 0x98
    addi r4, r31, 0xb0
    bl fn_804776F4
lbl_fn_800EBE84_00001528:
    li r0, 0x3
    stw r0, 0xac(r31)
lbl_fn_800EBE84_00001530:
    li r3, 0x0
lbl_fn_800EBE84_00001534:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800EBF1C(void)
{
    nofralloc
    stwu r1, -0x13c0(r1)
    mflr r0
    stw r0, 0x13c4(r1)
    stmw r27, 0x13ac(r1)
    mr r27, r3
    mr r29, r4
    mr r28, r5
    bl fn_801388B8
    mr r4, r29
    addi r3, r1, 0x2c
    bl fn_8003E4A4
    lis r4, lbl_80735324@ha
    addi r3, r1, 0x74
    addi r29, r4, lbl_80735324@l
    li r5, 0x0
    addi r4, r29, 0x83
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x2c
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    li r30, 0x2
    b lbl_fn_800EBF1C_000017B8
lbl_fn_800EBF1C_000015C0:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x85
    li r5, 0x5
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800EBF1C_000016A0
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8003E4A4
    addi r3, r1, 0x20
    bl fn_8000EC88
    mr r31, r3
    addi r3, r1, 0x20
    bl fn_8004212C
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0xd68
    addi r4, r4, 0x5
    bl fn_8004203C
    stb r30, 0xd74(r27)
    addi r3, r1, 0xd68
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xd88(r27)
    addi r3, r1, 0xd68
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xd8c(r27)
    addi r3, r1, 0xd68
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xd7c(r27)
    addi r3, r1, 0xd68
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xd80(r27)
    addi r3, r1, 0xd68
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xd90(r27)
    addi r3, r1, 0xd68
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0xd84(r27)
    mr r3, r27
    li r4, 0x0
    bl fn_800EC1F4
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_800EBF1C_000017B0
lbl_fn_800EBF1C_000016A0:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x8b
    li r5, 0xd
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800EBF1C_0000172C
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8003E4A4
    addi r3, r1, 0x14
    bl fn_8000EC88
    mr r31, r3
    addi r3, r1, 0x14
    bl fn_8004212C
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x734
    addi r4, r4, 0xd
    bl fn_8004203C
    addi r3, r1, 0x734
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    mr r3, r28
    bl fn_800EC204
    stw r3, 0x1464(r27)
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_800EBF1C_000017B0
lbl_fn_800EBF1C_0000172C:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x99
    li r5, 0xe
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800EBF1C_000017B0
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8003E4A4
    addi r3, r1, 0x8
    bl fn_8000EC88
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_8004212C
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x100
    addi r4, r4, 0xe
    bl fn_8004203C
    addi r3, r1, 0x100
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r27, 0x1030
    bl fn_800EC24C
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_800EBF1C_000017B0:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_800EBF1C_000017B8:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_800EBF1C_000015C0
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    lmw r27, 0x13ac(r1)
    lwz r0, 0x13c4(r1)
    mtlr r0
    addi r1, r1, 0x13c0
    blr
}
