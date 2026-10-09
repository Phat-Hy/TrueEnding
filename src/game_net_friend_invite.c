#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSSleepTicks(void);
extern void __register_global_object(void);
extern void _restgpr_20(void);
extern void _savegpr_20(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8003EFB0(void);
extern void fn_8004895C(void);
extern void fn_80049654(void);
extern void fn_8004B338(void);
extern void fn_800827E0(void);
extern void fn_80083AD4(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_80089ACC(void);
extern void fn_800A555C(void);
extern void fn_800C310C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB58C(void);
extern void fn_800CB5C8(void);
extern void fn_800CE368(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D8814(void);
extern void fn_800EC1F4(void);
extern void fn_800F52F0(void);
extern void fn_800F530C(void);
extern void fn_800F7F90(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_801125F8(void);
extern void fn_80112960(void);
extern void fn_80114AA0(void);
extern void fn_801156BC(void);
extern void fn_80122550(void);
extern void fn_8012B3E8(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_80139F4C(void);
extern void fn_8013C504(void);
extern void fn_8014DEE4(void);
extern void fn_8016E4C4(void);
extern void fn_80176ACC(void);
extern void fn_8017A300(void);
extern void fn_80198C00(void);
extern void fn_80206B14(void);
extern void fn_8020A3E4(void);
extern void fn_8020A81C(void);
extern void fn_8020ED84(void);
extern void fn_80232B7C(void);
extern void fn_802375C4(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239798(void);
extern void fn_80239DAC(void);
extern void fn_80244CA0(void);
extern void fn_80244CAC(void);
extern void fn_8026607C(void);
extern void fn_80266FA4(void);
extern void fn_80266FB4(void);
extern void fn_802F0990(void);
extern void fn_803396FC(void);
extern void fn_80364E7C(void);
extern void fn_8036503C(void);
extern void fn_80365320(void);
extern void fn_8036635C(void);
extern void fn_80370AE4(void);
extern void fn_8037308C(void);
extern void fn_80373118(void);
extern void fn_80373148(void);
extern void fn_8037D4C0(void);
extern void fn_8037EF30(void);
extern void fn_8037F688(void);
extern void fn_803BE590(void);
extern void fn_803CFC58(void);
extern void fn_803D6E1C(void);
extern void fn_803D6E70(void);
extern void fn_803D7100(void);
extern void fn_803EFDAC(void);
extern void fn_8046ECDC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_804814F0(void);
extern void fn_8049D68C(void);
extern void fn_804AC734(void);
extern void fn_804AE3BC(void);
extern void fn_804AF520(void);
extern void fn_804B50C0(void);
extern void fn_804B6204(void);
extern void fn_804B691C(void);
extern void fn_804B6944(void);
extern void fn_804B9D40(void);
extern void fn_804BA350(void);
extern void fn_804BBB60(void);
extern void fn_804BC628(void);
extern void fn_804C2268(void);
extern void fn_804C2F98(void);
extern void fn_804C2F9C(void);
extern void fn_804C35F0(void);
extern void fn_804C5638(void);
extern void fn_804C5E1C(void);
extern void fn_804C5E9C(void);
extern void fn_804C6888(void);
extern void fn_804C7C34(void);
extern void fn_804C8204(void);
extern void fn_804C8740(void);
extern void fn_804CDE1C(void);
extern void fn_804CF190(void);
extern void fn_804CF194(void);
extern void fn_804CF634(void);
extern void fn_804D0090(void);
extern void fn_804D00B8(void);
extern void fn_804D00DC(void);
extern void fn_804D0140(void);
extern void fn_804D0164(void);
extern void fn_804D0304(void);
extern void fn_804D5F08(void);
extern void fn_804D5F10(void);
extern void fn_804D5F3C(void);
extern void fn_804D5F44(void);
extern void fn_804D5F4C(void);
extern void fn_804D5F5C(void);
extern void fn_804D5F6C(void);
extern void fn_804D5F80(void);
extern void fn_804D5F9C(void);
extern void fn_804D5FA4(void);
extern void fn_804D5FAC(void);
extern void fn_804D5FB4(void);
extern void fn_804D5FBC(void);
extern void fn_804D5FC4(void);
extern void fn_804D5FCC(void);
extern void fn_804D5FD4(void);
extern void fn_804D5FDC(void);
extern void fn_804D5FE4(void);
extern void fn_804D5FF0(void);
extern void fn_804D6000(void);
extern void fn_804D6010(void);
extern void fn_804D6018(void);
extern void fn_804D6024(void);
extern void fn_804D6028(void);
extern void fn_804D6030(void);
extern void fn_804D6038(void);
extern void fn_804D6040(void);
extern void fn_804D604C(void);
extern void fn_804D6054(void);
extern void fn_804D605C(void);
extern void fn_804D60E8(void);
extern void fn_804D60F0(void);
extern void fn_804D610C(void);
extern void fn_804D6114(void);
extern void fn_804D6140(void);
extern void fn_804D6148(void);
extern void fn_804D6150(void);
extern void fn_804D6164(void);
extern void fn_804D616C(void);
extern void fn_804D6194(void);
extern void fn_804D619C(void);
extern void fn_804D6204(void);
extern void fn_804D620C(void);
extern void fn_804D6214(void);
extern void fn_804D621C(void);
extern void fn_804D6224(void);
extern void fn_804D622C(void);
extern void fn_804D627C(void);
extern void fn_804D62E8(void);
extern void fn_804D62FC(void);
extern void fn_804D6304(void);
extern void fn_804D634C(void);
extern void fn_804D6358(void);
extern void fn_804D6360(void);
extern void fn_804D6368(void);
extern void fn_804D6370(void);
extern void fn_804D6378(void);
extern void fn_804D6380(void);
extern void fn_804D6388(void);
extern void fn_804D6394(void);
extern void fn_804D63AC(void);
extern void fn_804D63D4(void);
extern void fn_804D63DC(void);
extern void fn_804D63E4(void);
extern void fn_804D63EC(void);
extern void fn_804D63FC(void);
extern void fn_804D6404(void);
extern void fn_804D640C(void);
extern void fn_804D6414(void);
extern void fn_804D6424(void);
extern void fn_804D6488(void);
extern void fn_804D6490(void);
extern void fn_804D64A0(void);
extern void fn_804D64A8(void);
extern void fn_804D64B8(void);
extern void fn_804D64CC(void);
extern void fn_804D65A0(void);
extern void fn_804D65A8(void);
extern void fn_804D65B0(void);
extern void fn_804D65C4(void);
extern void fn_804D65CC(void);
extern void fn_804D65D8(void);
extern void fn_804D65E0(void);
extern void fn_804D6648(void);
extern void fn_804D6650(void);
extern void fn_804D6668(void);
extern void fn_804D6684(void);
extern void fn_804D668C(void);
extern void fn_804D807C(void);
extern void fn_804D8100(void);
extern void fn_804D8110(void);
extern void fn_804D8118(void);
extern void fn_804D81CC(void);
extern void fn_804D81D4(void);
extern void fn_804D8248(void);
extern void fn_804D8250(void);
extern void fn_804D8614(void);
extern void fn_804D87B4(void);
extern void fn_804D8914(void);
extern void fn_804D90E4(void);
extern void fn_804D97F4(void);
extern void fn_804D9970(void);
extern void fn_804D9BF8(void);
extern void fn_804DA2D4(void);
extern void fn_804DA350(void);
extern void fn_804DA39C(void);
extern void fn_804DA490(void);
extern void fn_804DA4A4(void);
extern void fn_804DB3B8(void);
extern void fn_804DBD0C(void);
extern void fn_804DC35C(void);
extern void fn_804DC378(void);
extern void fn_804DC454(void);
extern void fn_804DC688(void);
extern void fn_804DE888(void);
extern void fn_804DF120(void);
extern void fn_804DF314(void);
extern void fn_804DF408(void);
extern void fn_804E4490(void);
extern void fn_804E49A8(void);
extern void fn_804E5BC8(void);
extern void fn_804E651C(void);
extern void fn_804E67A0(void);
extern void fn_804E9364(void);
extern void fn_804E9C68(void);
extern void fn_804EA60C(void);
extern void fn_804EA8BC(void);
extern void fn_804EAA54(void);
extern void fn_804EAA88(void);
extern void fn_804EAFD4(void);
extern void fn_804EB1B0(void);
extern void fn_804EB3D0(void);
extern void fn_804EB5DC(void);
extern void fn_804EB874(void);
extern void fn_804ED76C(void);
extern void fn_804EDB10(void);
extern void fn_804EDCD0(void);
extern void fn_804EE044(void);
extern void fn_804F5A98(void);
extern void fn_804F5A9C(void);
extern void fn_804F5B0C(void);
extern void fn_804F5CA0(void);
extern void fn_804F5E3C(void);
extern void fn_804F5FD0(void);
extern void fn_804F60E4(void);
extern void fn_804F7ECC(void);
extern void fn_804F7EF4(void);
extern void fn_804F7F1C(void);
extern void fn_804F7F38(void);
extern void fn_804FA94C(void);
extern void fn_804FAA80(void);
extern void fn_804FAB44(void);
extern void fn_804FAD4C(void);
extern void fn_804FB224(void);
extern void fn_804FB474(void);
extern void fn_804FB554(void);
extern void fn_804FB66C(void);
extern void fn_804FB678(void);
extern void fn_804FB96C(void);
extern void fn_804FC0D8(void);
extern void fn_8050128C(void);
extern void fn_80502100(void);
extern void fn_8050270C(void);
extern void fn_8050284C(void);
extern void fn_80505DD4(void);
extern void fn_805061CC(void);
extern void fn_80506D98(void);
extern void fn_80507314(void);
extern void fn_80508CF0(void);
extern void fn_80509300(void);
extern void fn_80509A9C(void);
extern void fn_80509AFC(void);
extern void fn_80509C8C(void);
extern void fn_80509F0C(void);
extern void fn_8050A3D4(void);
extern void fn_8050A638(void);
extern void fn_8050BDC8(void);
extern void fn_8050C0B8(void);
extern void fn_8050C2F8(void);
extern void fn_8050C844(void);
extern void fn_8050C89C(void);
extern void fn_8050C9D8(void);
extern void fn_8050CB28(void);
extern void fn_8050CCD4(void);
extern void fn_8050CEA0(void);
extern void fn_8050CF18(void);
extern void fn_8050CF20(void);
extern void fn_8050CF94(void);
extern void fn_8050DDE0(void);
extern void fn_8050DE60(void);
extern void fn_8050E098(void);
extern void fn_8050E61C(void);
extern void fn_8050EAEC(void);
extern void fn_8050EB30(void);
extern void fn_8050F8C8(void);
extern void fn_80686A48(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807910B0[];
extern u8 jumptable_807910D0[];
extern u8 lbl_80759748[];
extern u8 lbl_80759E48[];
extern u8 lbl_807916E0[];
extern u8 lbl_80791718[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8F48[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F018;
extern u32 lbl_8087F420;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F588;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5A4;
extern u32 lbl_8087F5A8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F614;
extern u32 lbl_8087F618;
extern u32 lbl_8087F628;
extern u32 lbl_8087F62C;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887570;
extern u32 lbl_80887590;
extern u32 lbl_80887594;
extern u32 lbl_80887598;
extern u32 lbl_8088759C;
extern u32 lbl_808875A0;
extern u32 lbl_808875C0;
extern u32 lbl_808875C4;
extern u32 lbl_808875CC;
extern u32 lbl_808875D0;
extern u32 lbl_808875D4;
extern u32 lbl_808875D8;

/* Function declarations */
void fn_804D1400(void);
void fn_804D1414(void);
void fn_804D147C(void);
void fn_804D14BC(void);
void fn_804D1698(void);
void fn_804D16A0(void);
void fn_804D16D0(void);
void fn_804D16D8(void);
void fn_804D16E0(void);
void fn_804D16E8(void);
void fn_804D16F4(void);
void fn_804D16FC(void);
void fn_804D1F70(void);
void fn_804D1FDC(void);
void fn_804D201C(void);
void fn_804D24AC(void);
void fn_804D24B4(void);
void fn_804D250C(void);
void fn_804D25D4(void);

asm void fn_804D1400(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_804D1414(void)
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
    beq lbl_fn_804D1414_00000060
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804D1414_00000050
    lis r4, fn_804D147C@ha
    addi r4, r4, fn_804D147C@l
    bl fn_80695A50
lbl_fn_804D1414_00000050:
    cmpwi r31, 0x0
    ble lbl_fn_804D1414_00000060
    mr r3, r30
    bl dtor_80084684
lbl_fn_804D1414_00000060:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D147C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_804D147C_000000A4
    cmpwi r4, 0x0
    ble lbl_fn_804D147C_000000A4
    bl dtor_80084684
lbl_fn_804D147C_000000A4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D14BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_804D14BC_00000280
    lis r4, lbl_80791718@ha
    lwz r26, 0xc(r3)
    addi r4, r4, lbl_80791718@l
    stw r4, 0x0(r3)
    addi r28, r3, 0x8
    li r29, 0x0
    b lbl_fn_804D14BC_00000134
lbl_fn_804D14BC_000000F8:
    lwz r27, 0x28(r26)
    cmpwi r27, 0x0
    beq lbl_fn_804D14BC_00000114
    bl fn_800827E0
    mr r4, r27
    bl fn_80083AD4
    stw r29, 0x28(r26)
lbl_fn_804D14BC_00000114:
    lwz r27, 0x2c(r26)
    cmpwi r27, 0x0
    beq lbl_fn_804D14BC_00000130
    bl fn_800827E0
    mr r4, r27
    bl fn_80083AD4
    stw r29, 0x2c(r26)
lbl_fn_804D14BC_00000130:
    lwz r26, 0x4(r26)
lbl_fn_804D14BC_00000134:
    cmplw r26, r28
    bne lbl_fn_804D14BC_000000F8
    lwz r25, 0xc(r30)
    cmplw r25, r28
    beq lbl_fn_804D14BC_000001CC
    lwz r4, 0x0(r28)
    li r29, 0x0
    lwz r3, 0x0(r25)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r25)
    stw r0, 0x0(r3)
    b lbl_fn_804D14BC_000001C4
lbl_fn_804D14BC_0000016C:
    addic. r27, r25, 0x20
    beq lbl_fn_804D14BC_000001AC
    lwz r26, 0x8(r27)
    cmpwi r26, 0x0
    beq lbl_fn_804D14BC_00000190
    bl fn_800827E0
    mr r4, r26
    bl fn_80083AD4
    stw r29, 0x8(r27)
lbl_fn_804D14BC_00000190:
    lwz r26, 0xc(r27)
    cmpwi r26, 0x0
    beq lbl_fn_804D14BC_000001AC
    bl fn_800827E0
    mr r4, r26
    bl fn_80083AD4
    stw r29, 0xc(r27)
lbl_fn_804D14BC_000001AC:
    mr r3, r25
    lwz r25, 0x4(r25)
    bl dtor_80084684
    lwz r3, 0x4(r30)
    subi r0, r3, 0x1
    stw r0, 0x4(r30)
lbl_fn_804D14BC_000001C4:
    cmplw r25, r28
    bne lbl_fn_804D14BC_0000016C
lbl_fn_804D14BC_000001CC:
    addic. r28, r30, 0x4
    beq lbl_fn_804D14BC_00000270
    beq lbl_fn_804D14BC_00000270
    beq lbl_fn_804D14BC_00000270
    lwz r24, 0x8(r28)
    addi r25, r28, 0x4
    cmplw r24, r25
    beq lbl_fn_804D14BC_00000270
    lwz r4, 0x0(r25)
    li r29, 0x0
    lwz r3, 0x0(r24)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r24)
    stw r0, 0x0(r3)
    b lbl_fn_804D14BC_00000268
lbl_fn_804D14BC_00000210:
    addic. r27, r24, 0x20
    beq lbl_fn_804D14BC_00000250
    lwz r26, 0x8(r27)
    cmpwi r26, 0x0
    beq lbl_fn_804D14BC_00000234
    bl fn_800827E0
    mr r4, r26
    bl fn_80083AD4
    stw r29, 0x8(r27)
lbl_fn_804D14BC_00000234:
    lwz r26, 0xc(r27)
    cmpwi r26, 0x0
    beq lbl_fn_804D14BC_00000250
    bl fn_800827E0
    mr r4, r26
    bl fn_80083AD4
    stw r29, 0xc(r27)
lbl_fn_804D14BC_00000250:
    mr r3, r24
    lwz r24, 0x4(r24)
    bl dtor_80084684
    lwz r3, 0x0(r28)
    subi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_804D14BC_00000268:
    cmplw r24, r25
    bne lbl_fn_804D14BC_00000210
lbl_fn_804D14BC_00000270:
    cmpwi r31, 0x0
    ble lbl_fn_804D14BC_00000280
    mr r3, r30
    bl dtor_80084684
lbl_fn_804D14BC_00000280:
    mr r3, r30
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804D1698(void)
{
    nofralloc
    lwz r3, lbl_8087F628
    blr
}

asm void fn_804D16A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_804FB224
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D16D0(void)
{
    nofralloc
    lwz r3, lbl_8087F59C
    blr
}

asm void fn_804D16D8(void)
{
    nofralloc
    lwz r3, lbl_8087F5A8
    blr
}

asm void fn_804D16E0(void)
{
    nofralloc
    lwz r3, lbl_8087F588
    blr
}

asm void fn_804D16E8(void)
{
    nofralloc
    addis r3, r3, 0x1
    subi r3, r3, 0x4130
    blr
}

asm void fn_804D16F4(void)
{
    nofralloc
    lwz r3, lbl_8087F420
    blr
}

asm void fn_804D16FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x7c
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    stw r30, 0x0(r3)
    addi r3, r3, 0x34
    bl memset
    lhz r0, 0xec(r31)
    li r29, -0x1
    stw r29, 0xe8(r31)
    addi r3, r31, 0x114
    rlwinm r0, r0, 0, 17, 15
    li r4, 0x0
    sth r0, 0xec(r31)
    li r5, 0x20
    stw r29, 0xf0(r31)
    stw r29, 0xf4(r31)
    stw r29, 0xf8(r31)
    stw r29, 0xfc(r31)
    stw r29, 0x100(r31)
    stw r29, 0x104(r31)
    stw r29, 0x108(r31)
    stw r29, 0x10c(r31)
    stw r29, 0x110(r31)
    bl memset
    addi r6, r31, 0x14c
    addi r0, r31, 0x3b8
    lfs f1, lbl_808875CC
    cmplw r6, r0
    lfs f0, lbl_80887590
    stw r29, 0x134(r31)
    sth r29, 0x138(r31)
    sth r30, 0x13a(r31)
    stfs f1, 0x13c(r31)
    stfs f0, 0x140(r31)
    stfs f0, 0x144(r31)
    stfs f1, 0x148(r31)
    bge lbl_fn_804D16FC_00000518
    addi r5, r31, 0x318
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804D16FC_000003C0
    li r3, 0x1
lbl_fn_804D16FC_000003C0:
    cmpwi r3, 0x0
    beq lbl_fn_804D16FC_000003CC
    li r0, 0x1
lbl_fn_804D16FC_000003CC:
    cmpwi r0, 0x0
    beq lbl_fn_804D16FC_000004C8
    addi r3, r5, 0x9f
    li r0, 0xa0
    subf r3, r6, r3
    lfs f1, lbl_808875CC
    divwu r3, r3, r0
    lfs f0, lbl_80887590
    li r4, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_804D16FC_000004C8
lbl_fn_804D16FC_00000400:
    sth r4, 0x0(r6)
    sth r0, 0x2(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f1, 0x10(r6)
    sth r4, 0x14(r6)
    sth r0, 0x16(r6)
    stfs f1, 0x18(r6)
    stfs f0, 0x1c(r6)
    stfs f0, 0x20(r6)
    stfs f1, 0x24(r6)
    sth r4, 0x28(r6)
    sth r0, 0x2a(r6)
    stfs f1, 0x2c(r6)
    stfs f0, 0x30(r6)
    stfs f0, 0x34(r6)
    stfs f1, 0x38(r6)
    sth r4, 0x3c(r6)
    sth r0, 0x3e(r6)
    stfs f1, 0x40(r6)
    stfs f0, 0x44(r6)
    stfs f0, 0x48(r6)
    stfs f1, 0x4c(r6)
    sth r4, 0x50(r6)
    sth r0, 0x52(r6)
    stfs f1, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f0, 0x5c(r6)
    stfs f1, 0x60(r6)
    sth r4, 0x64(r6)
    sth r0, 0x66(r6)
    stfs f1, 0x68(r6)
    stfs f0, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f1, 0x74(r6)
    sth r4, 0x78(r6)
    sth r0, 0x7a(r6)
    stfs f1, 0x7c(r6)
    stfs f0, 0x80(r6)
    stfs f0, 0x84(r6)
    stfs f1, 0x88(r6)
    sth r4, 0x8c(r6)
    sth r0, 0x8e(r6)
    stfs f1, 0x90(r6)
    stfs f0, 0x94(r6)
    stfs f0, 0x98(r6)
    stfs f1, 0x9c(r6)
    addi r6, r6, 0xa0
    bdnz lbl_fn_804D16FC_00000400
lbl_fn_804D16FC_000004C8:
    addi r4, r31, 0x3b8
    li r0, 0x14
    addi r3, r4, 0x13
    lfs f1, lbl_808875CC
    subf r3, r6, r3
    lfs f0, lbl_80887590
    divwu r3, r3, r0
    li r5, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_804D16FC_00000518
lbl_fn_804D16FC_000004F8:
    sth r5, 0x0(r6)
    sth r0, 0x2(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f1, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_804D16FC_000004F8
lbl_fn_804D16FC_00000518:
    lhz r0, 0x400(r31)
    li r29, -0x1
    li r30, 0x0
    stw r30, 0x3b8(r31)
    rlwinm r0, r0, 0, 17, 15
    addi r3, r31, 0x428
    sth r30, 0x3bc(r31)
    li r4, 0x0
    li r5, 0x20
    stw r29, 0x3fc(r31)
    sth r0, 0x400(r31)
    stw r29, 0x404(r31)
    stw r29, 0x408(r31)
    stw r29, 0x40c(r31)
    stw r29, 0x410(r31)
    stw r29, 0x414(r31)
    stw r29, 0x418(r31)
    stw r29, 0x41c(r31)
    stw r29, 0x420(r31)
    stw r29, 0x424(r31)
    bl memset
    addi r6, r31, 0x460
    addi r0, r31, 0x6cc
    lfs f1, lbl_808875CC
    cmplw r6, r0
    lfs f0, lbl_80887590
    stw r29, 0x448(r31)
    sth r29, 0x44c(r31)
    sth r30, 0x44e(r31)
    stfs f1, 0x450(r31)
    stfs f0, 0x454(r31)
    stfs f0, 0x458(r31)
    stfs f1, 0x45c(r31)
    bge lbl_fn_804D16FC_0000070C
    addi r5, r31, 0x62c
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804D16FC_000005B4
    li r3, 0x1
lbl_fn_804D16FC_000005B4:
    cmpwi r3, 0x0
    beq lbl_fn_804D16FC_000005C0
    li r0, 0x1
lbl_fn_804D16FC_000005C0:
    cmpwi r0, 0x0
    beq lbl_fn_804D16FC_000006BC
    addi r3, r5, 0x9f
    li r0, 0xa0
    subf r3, r6, r3
    lfs f1, lbl_808875CC
    divwu r3, r3, r0
    lfs f0, lbl_80887590
    li r4, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_804D16FC_000006BC
lbl_fn_804D16FC_000005F4:
    sth r4, 0x0(r6)
    sth r0, 0x2(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f1, 0x10(r6)
    sth r4, 0x14(r6)
    sth r0, 0x16(r6)
    stfs f1, 0x18(r6)
    stfs f0, 0x1c(r6)
    stfs f0, 0x20(r6)
    stfs f1, 0x24(r6)
    sth r4, 0x28(r6)
    sth r0, 0x2a(r6)
    stfs f1, 0x2c(r6)
    stfs f0, 0x30(r6)
    stfs f0, 0x34(r6)
    stfs f1, 0x38(r6)
    sth r4, 0x3c(r6)
    sth r0, 0x3e(r6)
    stfs f1, 0x40(r6)
    stfs f0, 0x44(r6)
    stfs f0, 0x48(r6)
    stfs f1, 0x4c(r6)
    sth r4, 0x50(r6)
    sth r0, 0x52(r6)
    stfs f1, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f0, 0x5c(r6)
    stfs f1, 0x60(r6)
    sth r4, 0x64(r6)
    sth r0, 0x66(r6)
    stfs f1, 0x68(r6)
    stfs f0, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f1, 0x74(r6)
    sth r4, 0x78(r6)
    sth r0, 0x7a(r6)
    stfs f1, 0x7c(r6)
    stfs f0, 0x80(r6)
    stfs f0, 0x84(r6)
    stfs f1, 0x88(r6)
    sth r4, 0x8c(r6)
    sth r0, 0x8e(r6)
    stfs f1, 0x90(r6)
    stfs f0, 0x94(r6)
    stfs f0, 0x98(r6)
    stfs f1, 0x9c(r6)
    addi r6, r6, 0xa0
    bdnz lbl_fn_804D16FC_000005F4
lbl_fn_804D16FC_000006BC:
    addi r4, r31, 0x6cc
    li r0, 0x14
    addi r3, r4, 0x13
    lfs f1, lbl_808875CC
    subf r3, r6, r3
    lfs f0, lbl_80887590
    divwu r3, r3, r0
    li r5, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_804D16FC_0000070C
lbl_fn_804D16FC_000006EC:
    sth r5, 0x0(r6)
    sth r0, 0x2(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f1, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_804D16FC_000006EC
lbl_fn_804D16FC_0000070C:
    lhz r0, 0x714(r31)
    li r29, -0x1
    li r30, 0x0
    stw r30, 0x6cc(r31)
    rlwinm r0, r0, 0, 17, 15
    addi r3, r31, 0x73c
    sth r30, 0x6d0(r31)
    li r4, 0x0
    li r5, 0x20
    stw r29, 0x710(r31)
    sth r0, 0x714(r31)
    stw r29, 0x718(r31)
    stw r29, 0x71c(r31)
    stw r29, 0x720(r31)
    stw r29, 0x724(r31)
    stw r29, 0x728(r31)
    stw r29, 0x72c(r31)
    stw r29, 0x730(r31)
    stw r29, 0x734(r31)
    stw r29, 0x738(r31)
    bl memset
    addi r6, r31, 0x774
    addi r0, r31, 0x9e0
    lfs f1, lbl_808875CC
    cmplw r6, r0
    lfs f0, lbl_80887590
    stw r29, 0x75c(r31)
    sth r29, 0x760(r31)
    sth r30, 0x762(r31)
    stfs f1, 0x764(r31)
    stfs f0, 0x768(r31)
    stfs f0, 0x76c(r31)
    stfs f1, 0x770(r31)
    bge lbl_fn_804D16FC_00000900
    addi r5, r31, 0x940
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804D16FC_000007A8
    li r3, 0x1
lbl_fn_804D16FC_000007A8:
    cmpwi r3, 0x0
    beq lbl_fn_804D16FC_000007B4
    li r0, 0x1
lbl_fn_804D16FC_000007B4:
    cmpwi r0, 0x0
    beq lbl_fn_804D16FC_000008B0
    addi r3, r5, 0x9f
    li r0, 0xa0
    subf r3, r6, r3
    lfs f1, lbl_808875CC
    divwu r3, r3, r0
    lfs f0, lbl_80887590
    li r4, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_804D16FC_000008B0
lbl_fn_804D16FC_000007E8:
    sth r4, 0x0(r6)
    sth r0, 0x2(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f1, 0x10(r6)
    sth r4, 0x14(r6)
    sth r0, 0x16(r6)
    stfs f1, 0x18(r6)
    stfs f0, 0x1c(r6)
    stfs f0, 0x20(r6)
    stfs f1, 0x24(r6)
    sth r4, 0x28(r6)
    sth r0, 0x2a(r6)
    stfs f1, 0x2c(r6)
    stfs f0, 0x30(r6)
    stfs f0, 0x34(r6)
    stfs f1, 0x38(r6)
    sth r4, 0x3c(r6)
    sth r0, 0x3e(r6)
    stfs f1, 0x40(r6)
    stfs f0, 0x44(r6)
    stfs f0, 0x48(r6)
    stfs f1, 0x4c(r6)
    sth r4, 0x50(r6)
    sth r0, 0x52(r6)
    stfs f1, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f0, 0x5c(r6)
    stfs f1, 0x60(r6)
    sth r4, 0x64(r6)
    sth r0, 0x66(r6)
    stfs f1, 0x68(r6)
    stfs f0, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f1, 0x74(r6)
    sth r4, 0x78(r6)
    sth r0, 0x7a(r6)
    stfs f1, 0x7c(r6)
    stfs f0, 0x80(r6)
    stfs f0, 0x84(r6)
    stfs f1, 0x88(r6)
    sth r4, 0x8c(r6)
    sth r0, 0x8e(r6)
    stfs f1, 0x90(r6)
    stfs f0, 0x94(r6)
    stfs f0, 0x98(r6)
    stfs f1, 0x9c(r6)
    addi r6, r6, 0xa0
    bdnz lbl_fn_804D16FC_000007E8
lbl_fn_804D16FC_000008B0:
    addi r4, r31, 0x9e0
    li r0, 0x14
    addi r3, r4, 0x13
    lfs f1, lbl_808875CC
    subf r3, r6, r3
    lfs f0, lbl_80887590
    divwu r3, r3, r0
    li r5, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_804D16FC_00000900
lbl_fn_804D16FC_000008E0:
    sth r5, 0x0(r6)
    sth r0, 0x2(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f1, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_804D16FC_000008E0
lbl_fn_804D16FC_00000900:
    lhz r0, 0xa28(r31)
    li r29, -0x1
    li r30, 0x0
    stw r30, 0x9e0(r31)
    rlwinm r0, r0, 0, 17, 15
    addi r3, r31, 0xa50
    sth r30, 0x9e4(r31)
    li r4, 0x0
    li r5, 0x20
    stw r29, 0xa24(r31)
    sth r0, 0xa28(r31)
    stw r29, 0xa2c(r31)
    stw r29, 0xa30(r31)
    stw r29, 0xa34(r31)
    stw r29, 0xa38(r31)
    stw r29, 0xa3c(r31)
    stw r29, 0xa40(r31)
    stw r29, 0xa44(r31)
    stw r29, 0xa48(r31)
    stw r29, 0xa4c(r31)
    bl memset
    addi r6, r31, 0xa88
    addi r0, r31, 0xcf4
    lfs f1, lbl_808875CC
    cmplw r6, r0
    lfs f0, lbl_80887590
    stw r29, 0xa70(r31)
    sth r29, 0xa74(r31)
    sth r30, 0xa76(r31)
    stfs f1, 0xa78(r31)
    stfs f0, 0xa7c(r31)
    stfs f0, 0xa80(r31)
    stfs f1, 0xa84(r31)
    bge lbl_fn_804D16FC_00000AF4
    addi r5, r31, 0xc54
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_804D16FC_0000099C
    li r3, 0x1
lbl_fn_804D16FC_0000099C:
    cmpwi r3, 0x0
    beq lbl_fn_804D16FC_000009A8
    li r0, 0x1
lbl_fn_804D16FC_000009A8:
    cmpwi r0, 0x0
    beq lbl_fn_804D16FC_00000AA4
    addi r3, r5, 0x9f
    li r0, 0xa0
    subf r3, r6, r3
    lfs f1, lbl_808875CC
    divwu r3, r3, r0
    lfs f0, lbl_80887590
    li r4, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r5
    bge lbl_fn_804D16FC_00000AA4
lbl_fn_804D16FC_000009DC:
    sth r4, 0x0(r6)
    sth r0, 0x2(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f1, 0x10(r6)
    sth r4, 0x14(r6)
    sth r0, 0x16(r6)
    stfs f1, 0x18(r6)
    stfs f0, 0x1c(r6)
    stfs f0, 0x20(r6)
    stfs f1, 0x24(r6)
    sth r4, 0x28(r6)
    sth r0, 0x2a(r6)
    stfs f1, 0x2c(r6)
    stfs f0, 0x30(r6)
    stfs f0, 0x34(r6)
    stfs f1, 0x38(r6)
    sth r4, 0x3c(r6)
    sth r0, 0x3e(r6)
    stfs f1, 0x40(r6)
    stfs f0, 0x44(r6)
    stfs f0, 0x48(r6)
    stfs f1, 0x4c(r6)
    sth r4, 0x50(r6)
    sth r0, 0x52(r6)
    stfs f1, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f0, 0x5c(r6)
    stfs f1, 0x60(r6)
    sth r4, 0x64(r6)
    sth r0, 0x66(r6)
    stfs f1, 0x68(r6)
    stfs f0, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f1, 0x74(r6)
    sth r4, 0x78(r6)
    sth r0, 0x7a(r6)
    stfs f1, 0x7c(r6)
    stfs f0, 0x80(r6)
    stfs f0, 0x84(r6)
    stfs f1, 0x88(r6)
    sth r4, 0x8c(r6)
    sth r0, 0x8e(r6)
    stfs f1, 0x90(r6)
    stfs f0, 0x94(r6)
    stfs f0, 0x98(r6)
    stfs f1, 0x9c(r6)
    addi r6, r6, 0xa0
    bdnz lbl_fn_804D16FC_000009DC
lbl_fn_804D16FC_00000AA4:
    addi r4, r31, 0xcf4
    li r0, 0x14
    addi r3, r4, 0x13
    lfs f1, lbl_808875CC
    subf r3, r6, r3
    lfs f0, lbl_80887590
    divwu r3, r3, r0
    li r5, -0x1
    li r0, 0x0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_804D16FC_00000AF4
lbl_fn_804D16FC_00000AD4:
    sth r5, 0x0(r6)
    sth r0, 0x2(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f1, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_804D16FC_00000AD4
lbl_fn_804D16FC_00000AF4:
    li r30, -0x1
    li r29, 0x0
    li r0, 0xff
    stw r29, 0xcf4(r31)
    addi r3, r31, 0xdc
    li r4, 0x0
    sth r29, 0xcf8(r31)
    stw r30, 0xd38(r31)
    stw r30, 0xd3c(r31)
    stw r30, 0xd40(r31)
    stw r30, 0xd44(r31)
    stb r0, 0xcc(r31)
    bl fn_8050128C
    stw r29, 0xd0(r31)
    mr r3, r31
    stw r29, 0xb0(r31)
    stw r29, 0xd48(r31)
    sth r30, 0xd50(r31)
    stw r29, 0xd4c(r31)
    stb r29, 0xd53(r31)
    stw r30, 0xd54(r31)
    stw r29, 0xd58(r31)
    stw r29, 0xd8(r31)
    stw r29, 0xd4(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804D1F70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0xff
    stw r31, 0xc(r1)
    mr r31, r3
    stb r0, 0xcc(r3)
    addi r3, r3, 0xdc
    bl fn_8050128C
    li r3, 0x0
    li r0, -0x1
    stw r3, 0xd0(r31)
    stw r3, 0xb0(r31)
    stw r3, 0xd48(r31)
    sth r0, 0xd50(r31)
    stw r3, 0xd4c(r31)
    stb r3, 0xd53(r31)
    stw r0, 0xd54(r31)
    stw r3, 0xd58(r31)
    stw r3, 0xd8(r31)
    stw r3, 0xd4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D1FDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_804D1FDC_00000C04
    cmpwi r4, 0x0
    ble lbl_fn_804D1FDC_00000C04
    bl dtor_80084684
lbl_fn_804D1FDC_00000C04:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D201C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_804D201C_00001094
    lis r4, lbl_807916E0@ha
    addi r4, r4, lbl_807916E0@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087EE90
    bl fn_80049654
    lwz r3, lbl_8087EE90
    bl fn_8004895C
    lwz r3, lbl_8087EFE8
    bl fn_800CE368
    li r0, 0x0
    li r27, 0x64
    mullw r26, r0, r27
    lis r3, 0x1062
    lwz r4, lbl_8087F9C0
    li r0, 0x1
    addi r29, r3, 0x4dd3
    stw r0, 0x7c(r4)
    lis r28, 0x8000
    b lbl_fn_804D201C_00000CA8
lbl_fn_804D201C_00000C88:
    lwz r0, 0xf8(r28)
    srwi r0, r0, 2
    mulhwu r0, r29, r0
    srwi r3, r0, 6
    mulhwu r0, r3, r27
    mulli r4, r3, 0x64
    add r3, r0, r26
    bl OSSleepTicks
lbl_fn_804D201C_00000CA8:
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    lwz r0, -0x3e0c(r3)
    subi r3, r3, 0x4130
    cmpwi r0, 0x0
    beq lbl_fn_804D201C_00000C88
    bl fn_8050CEA0
    li r0, 0x0
    li r28, 0x64
    mullw r29, r0, r28
    lis r3, 0x1062
    lis r27, 0x8000
    addi r26, r3, 0x4dd3
    b lbl_fn_804D201C_00000D00
lbl_fn_804D201C_00000CE0:
    lwz r0, 0xf8(r27)
    srwi r0, r0, 2
    mulhwu r0, r26, r0
    srwi r3, r0, 6
    mulhwu r0, r3, r28
    mulli r4, r3, 0x64
    add r3, r0, r29
    bl OSSleepTicks
lbl_fn_804D201C_00000D00:
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    subi r3, r3, 0x4130
    bl fn_8050CF18
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00000CE0
    lwz r3, lbl_8087F5A4
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00000D34
    beq lbl_fn_804D201C_00000D2C
    bl dtor_80084684
lbl_fn_804D201C_00000D2C:
    li r0, 0x0
    stw r0, lbl_8087F5A4
lbl_fn_804D201C_00000D34:
    lwz r3, lbl_8087F628
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F618
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00000D74
    beq lbl_fn_804D201C_00000D6C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_804D201C_00000D6C:
    li r0, 0x0
    stw r0, lbl_8087F618
lbl_fn_804D201C_00000D74:
    lbz r0, lbl_8087EE74
    li r6, 0x0
    stw r6, lbl_8087F62C
    extsb. r0, r0
    stw r6, lbl_8087F628
    bne lbl_fn_804D201C_00000DBC
    lis r3, lbl_807C6BB8@ha
    stwu r6, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8F48@ha
    stw r6, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    stw r6, 0x8(r3)
    addi r5, r5, lbl_807C8F48@l
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_804D201C_00000DBC:
    lis r5, lbl_807C6BB8@ha
    li r4, 0x0
    addi r5, r5, lbl_807C6BB8@l
    stw r4, lbl_8087F610
    lwz r0, 0x4(r5)
    addis r3, r30, 0x1
    subf r0, r0, r0
    stw r0, 0x4(r5)
    lwz r0, -0x668c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D201C_00000DEC
    stw r4, -0x668c(r3)
lbl_fn_804D201C_00000DEC:
    addis r3, r30, 0x1
    lwz r0, -0x6890(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D201C_00000E04
    li r0, 0x0
    stw r0, -0x6890(r3)
lbl_fn_804D201C_00000E04:
    lwz r3, lbl_8087F420
    li r0, 0x0
    stw r0, 0xc(r3)
    lwz r3, lbl_8087F018
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00000E20
    stw r0, 0x40e0(r3)
lbl_fn_804D201C_00000E20:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00000E40
    lwz r0, 0x88(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D201C_00000E40
    li r0, 0x1
    stw r0, 0x88(r3)
lbl_fn_804D201C_00000E40:
    addis r26, r30, 0x1
    subic. r26, r26, 0x665c
    beq lbl_fn_804D201C_00000EA4
    beq lbl_fn_804D201C_00000EA4
    beq lbl_fn_804D201C_00000EA4
    lwz r28, 0x8(r26)
    addi r27, r26, 0x4
    cmplw r28, r27
    beq lbl_fn_804D201C_00000EA4
    lwz r4, 0x0(r27)
    lwz r3, 0x0(r28)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r3)
    b lbl_fn_804D201C_00000E9C
lbl_fn_804D201C_00000E84:
    mr r3, r28
    lwz r28, 0x4(r28)
    bl dtor_80084684
    lwz r3, 0x0(r26)
    subi r0, r3, 0x1
    stw r0, 0x0(r26)
lbl_fn_804D201C_00000E9C:
    cmplw r28, r27
    bne lbl_fn_804D201C_00000E84
lbl_fn_804D201C_00000EA4:
    addis r26, r30, 0x1
    subic. r26, r26, 0x6698
    beq lbl_fn_804D201C_00000EC8
    mr r3, r26
    bl fn_8023781C
    addic. r3, r26, 0x4
    beq lbl_fn_804D201C_00000EC8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804D201C_00000EC8:
    addis r3, r30, 0x1
    li r4, -0x1
    subi r3, r3, 0x688c
    bl fn_8004B338
    addis r3, r30, 0x1
    li r4, -0x1
    subi r3, r3, 0x6940
    bl fn_802375C4
    addis r26, r30, 0x1
    subic. r26, r26, 0x694c
    beq lbl_fn_804D201C_00000F0C
    mr r3, r26
    bl fn_8023781C
    addic. r3, r26, 0x4
    beq lbl_fn_804D201C_00000F0C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804D201C_00000F0C:
    addic. r3, r30, 0x2b80
    beq lbl_fn_804D201C_00000F38
    addic. r3, r3, 0x8
    beq lbl_fn_804D201C_00000F38
    beq lbl_fn_804D201C_00000F38
    lis r4, fn_804D1FDC@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_804D1FDC@l
    li r5, 0xd5c
    li r6, 0x8
    bl fn_806959D8
lbl_fn_804D201C_00000F38:
    addi r3, r30, 0x2b78
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r30, 0x2b74
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r30, 0x2b70
    li r4, -0x1
    bl fn_800CB3A0
    addic. r3, r30, 0x2b68
    beq lbl_fn_804D201C_00000F6C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804D201C_00000F6C:
    addic. r3, r30, 0x2b60
    beq lbl_fn_804D201C_00000F7C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804D201C_00000F7C:
    addic. r3, r30, 0x2b58
    beq lbl_fn_804D201C_00000F8C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804D201C_00000F8C:
    addic. r3, r30, 0x2b50
    beq lbl_fn_804D201C_00000F9C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804D201C_00000F9C:
    addic. r26, r30, 0x2a50
    beq lbl_fn_804D201C_00000FD4
    lwz r3, 0xfc(r26)
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00000FB4
    bl fn_80084C24
lbl_fn_804D201C_00000FB4:
    li r0, 0x0
    lis r4, fn_804D1414@ha
    stw r0, 0xfc(r26)
    mr r3, r26
    addi r4, r4, fn_804D1414@l
    li r5, 0xc
    li r6, 0x15
    bl fn_806959D8
lbl_fn_804D201C_00000FD4:
    addic. r26, r30, 0x610
    beq lbl_fn_804D201C_00000FFC
    beq lbl_fn_804D201C_00000FFC
    lwz r3, 0x4(r26)
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00000FF0
    bl fn_80084C24
lbl_fn_804D201C_00000FF0:
    li r0, 0x0
    stw r0, 0x4(r26)
    stw r0, 0x0(r26)
lbl_fn_804D201C_00000FFC:
    addic. r4, r30, 0x5f0
    beq lbl_fn_804D201C_00001028
    beq lbl_fn_804D201C_00001028
    beq lbl_fn_804D201C_00001028
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00001028
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_804D201C_00001028:
    addic. r4, r30, 0x5e4
    beq lbl_fn_804D201C_00001054
    beq lbl_fn_804D201C_00001054
    beq lbl_fn_804D201C_00001054
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00001054
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_804D201C_00001054:
    addic. r0, r30, 0x510
    beq lbl_fn_804D201C_00001078
    lwz r4, 0x510(r30)
    cmpwi r4, 0x0
    beq lbl_fn_804D201C_00001078
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_804D201C_00001078
    bl fn_800897D8
lbl_fn_804D201C_00001078:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804D201C_00001094
    mr r3, r30
    bl dtor_80084684
lbl_fn_804D201C_00001094:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804D24AC(void)
{
    nofralloc
    lwz r3, 0x324(r3)
    blr
}

asm void fn_804D24B4(void)
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
    beq lbl_fn_804D24B4_000010F0
    li r4, 0x0
    bl fn_80508CF0
    cmpwi r31, 0x0
    ble lbl_fn_804D24B4_000010F0
    mr r3, r30
    bl dtor_80084684
lbl_fn_804D24B4_000010F0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D250C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, 0x2
    stw r0, 0x14(r1)
    subi r0, r5, 0x7961
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x2b7c(r3)
    li r3, 0x0
    stw r0, 0x58(r4)
    bl fn_800C310C
    cmpwi r3, 0x0
    bne lbl_fn_804D250C_000011B8
    addis r3, r30, 0x1
    subi r3, r3, 0x6698
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_804D250C_000011B8
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804D250C_000011B8
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, lbl_8087F59C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F59C
    li r0, 0x2
    li r31, 0x0
    li r4, 0x0
    stw r0, 0x299c(r3)
    stw r31, 0x29a4(r3)
    stw r31, 0x29a0(r3)
    stw r31, 0x29a8(r3)
    lwz r3, lbl_8087F588
    bl fn_800D246C
    lwz r4, 0x2b7c(r30)
    li r3, 0x1
    stw r31, 0x58(r4)
    b lbl_fn_804D250C_000011BC
lbl_fn_804D250C_000011B8:
    li r3, 0x0
lbl_fn_804D250C_000011BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804D25D4(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    bl _savegpr_20
    mr r24, r3
    addi r3, r3, 0x4fc
    bl fn_804D5F08
    cmpwi r3, 0x1e
    bne lbl_fn_804D25D4_000012B4
    mr r3, r24
    bl fn_803D6E1C
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000012B4
    li r21, 0x0
    b lbl_fn_804D25D4_000012A4
lbl_fn_804D25D4_00001224:
    mr r3, r24
    mr r4, r21
    bl fn_804D5F10
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_804D25D4_000012A0
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_000012A0
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000012A0
    bl fn_803D6E70
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00001270
    lwz r3, 0x0(r22)
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804D25D4_00001270:
    lwz r3, 0x0(r22)
    bl fn_803CFC58
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_000012A0
    lwz r3, 0x0(r22)
    bl fn_80176ACC
    lwz r3, 0x0(r22)
    li r4, 0x0
    bl fn_804D5F5C
    lwz r3, 0x0(r22)
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804D25D4_000012A0:
    addi r21, r21, 0x1
lbl_fn_804D25D4_000012A4:
    mr r3, r24
    bl fn_804D5F3C
    cmpw r21, r3
    blt lbl_fn_804D25D4_00001224
lbl_fn_804D25D4_000012B4:
    li r21, 0x0
    b lbl_fn_804D25D4_00001338
lbl_fn_804D25D4_000012BC:
    mr r3, r24
    mr r4, r21
    bl fn_804D5F10
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_804D25D4_00001334
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00001334
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001334
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x1
    beq lbl_fn_804D25D4_00001310
    lwz r3, 0x0(r22)
    bl fn_804CF634
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001324
lbl_fn_804D25D4_00001310:
    lwz r3, 0x0(r22)
    bl fn_80198C00
    li r4, 0x0
    bl fn_804D0090
    b lbl_fn_804D25D4_00001334
lbl_fn_804D25D4_00001324:
    lwz r3, 0x0(r22)
    bl fn_80198C00
    li r4, 0x1
    bl fn_804D0090
lbl_fn_804D25D4_00001334:
    addi r21, r21, 0x1
lbl_fn_804D25D4_00001338:
    mr r3, r24
    bl fn_804D5F3C
    cmpw r21, r3
    blt lbl_fn_804D25D4_000012BC
    mr r3, r24
    bl fn_804D5F6C
    mr r3, r24
    bl fn_804F5FD0
    bl fn_804D1698
    bl fn_80509300
    bl fn_804D6684
    bl fn_8050C2F8
    bl fn_804D1698
    bl fn_804D5F80
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000013BC
    addis r3, r24, 0x1
    lbz r0, -0x6688(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_000013A4
    bl fn_800F7F90
    bl fn_804DC688
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_000013A4
    addis r3, r24, 0x1
    li r0, 0x1
    stb r0, -0x6688(r3)
lbl_fn_804D25D4_000013A4:
    bl fn_804D1698
    bl fn_804AE3BC
    bl fn_8050DE60
    mr r3, r24
    bl fn_804F5A98
    b lbl_fn_804D25D4_000013C8
lbl_fn_804D25D4_000013BC:
    addis r3, r24, 0x1
    li r0, 0x0
    stb r0, -0x6688(r3)
lbl_fn_804D25D4_000013C8:
    bl fn_804D1698
    bl fn_804D5F9C
    cmpwi r3, 0x3
    beq lbl_fn_804D25D4_000013E8
    bl fn_804D6684
    bl fn_804D5FA4
    cmpwi r3, 0x2
    bne lbl_fn_804D25D4_00001438
lbl_fn_804D25D4_000013E8:
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, -0x1
    beq lbl_fn_804D25D4_00001438
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, 0x2b
    beq lbl_fn_804D25D4_00001438
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, -0x2
    beq lbl_fn_804D25D4_00001438
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, -0x3
    beq lbl_fn_804D25D4_00001438
    mr r3, r24
    li r4, -0x2
    li r5, 0x16
    bl fn_804FB474
lbl_fn_804D25D4_00001438:
    li r0, 0x0
    stw r0, 0x4f8(r24)
    addi r3, r24, 0x4fc
    bl fn_804D5F08
    cmpwi r3, 0xc
    bne lbl_fn_804D25D4_00001460
    lwz r3, 0x514(r24)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001460
    bl fn_8050284C
lbl_fn_804D25D4_00001460:
    lwz r0, 0x5e0(r24)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_00001470
    bl fn_804D0164
lbl_fn_804D25D4_00001470:
    addi r3, r24, 0x4fc
    bl fn_804D5F08
    addi r0, r3, 0x3
    cmplwi r0, 0x2e
    bgt lbl_fn_804D25D4_00004898
    lis r3, jumptable_807910D0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807910D0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addis r3, r24, 0x1
    lwz r0, -0x68b0(r3)
    cmpwi r0, 0x8b
    beq lbl_fn_804D25D4_000014B8
    mr r3, r24
    li r4, 0x0
    bl fn_804DC454
lbl_fn_804D25D4_000014B8:
    addis r3, r24, 0x1
    lwz r4, -0x68ac(r3)
    cmpwi r4, 0x0
    blt lbl_fn_804D25D4_000014D0
    mr r3, r24
    bl fn_804FAD4C
lbl_fn_804D25D4_000014D0:
    addis r3, r24, 0x1
    li r0, -0x1
    stw r0, -0x68ac(r3)
    bl fn_804D16D0
    li r4, 0x16
    bl fn_804AF520
    li r27, 0x0
    bl fn_804D1698
    bl fn_8050C0B8
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_804D25D4_0000151C
    addis r3, r24, 0x1
    li r27, 0x1
    lwz r0, -0x68a8(r3)
    cmpwi r0, 0x16
    beq lbl_fn_804D25D4_0000151C
    li r0, 0x16
    stw r0, -0x68a8(r3)
lbl_fn_804D25D4_0000151C:
    addis r3, r24, 0x1
    lwz r0, -0x68a8(r3)
    cmpwi r0, 0x16
    bne lbl_fn_804D25D4_000015B8
    bl fn_804D16D8
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001540
    bl fn_804D16D8
    bl fn_804B6944
lbl_fn_804D25D4_00001540:
    bl fn_804D5FB4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001554
    bl fn_804D5FB4
    bl fn_804B9D40
lbl_fn_804D25D4_00001554:
    bl fn_804D5FBC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001568
    bl fn_804D5FBC
    bl fn_804BBB60
lbl_fn_804D25D4_00001568:
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000157C
    bl fn_804D5FC4
    bl fn_804C2F98
lbl_fn_804D25D4_0000157C:
    bl fn_804D5FCC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001590
    bl fn_804D5FCC
    bl fn_804C5638
lbl_fn_804D25D4_00001590:
    bl fn_804D5FD4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000015A4
    bl fn_804D5FD4
    bl fn_804C8740
lbl_fn_804D25D4_000015A4:
    bl fn_804D5FDC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000015B8
    bl fn_804D5FDC
    bl fn_804CF190
lbl_fn_804D25D4_000015B8:
    bl fn_804D1698
    bl fn_804D16E8
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001624
    bl fn_804D1698
    bl fn_804D16E8
    bl fn_8050CF94
    li r0, 0x0
    li r23, 0x64
    mullw r22, r0, r23
    lis r3, 0x1062
    lis r25, 0x8000
    addi r26, r3, 0x4dd3
    b lbl_fn_804D25D4_00001610
lbl_fn_804D25D4_000015F0:
    lwz r0, 0xf8(r25)
    srwi r0, r0, 2
    mulhwu r0, r26, r0
    srwi r3, r0, 6
    mulhwu r0, r3, r23
    mulli r4, r3, 0x64
    add r3, r0, r22
    bl OSSleepTicks
lbl_fn_804D25D4_00001610:
    bl fn_804D1698
    bl fn_804D16E8
    bl fn_804D24AC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000015F0
lbl_fn_804D25D4_00001624:
    addi r3, r24, 0x4fc
    li r4, -0x1
    bl fn_804D16A0
    li r21, 0x1
    bl fn_804D1698
    bl fn_804D5FE4
    cmpwi r3, 0x3
    bne lbl_fn_804D25D4_00001648
    li r21, 0x3
lbl_fn_804D25D4_00001648:
    bl fn_804D1698
    bl fn_804D5FF0
    bl fn_804D1698
    bl fn_80509F0C
    mr r3, r24
    mr r4, r21
    bl fn_804DBD0C
    cmpwi r27, 0x0
    bne lbl_fn_804D25D4_00001690
    addis r3, r24, 0x1
    lwz r0, -0x68a8(r3)
    cmpwi r0, 0x16
    bne lbl_fn_804D25D4_00004898
    lwz r0, -0x68b0(r3)
    cmpwi r0, 0xa1
    beq lbl_fn_804D25D4_00004898
    cmpwi r0, 0xa2
    beq lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00001690:
    bl fn_804D1698
    bl fn_80509AFC
    b lbl_fn_804D25D4_00004898
    li r21, 0x0
    bl fn_804D16E0
    bl fn_804D6000
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000016C8
    bl fn_804D16E0
    bl fn_804AC734
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000016CC
    li r21, 0x1
    b lbl_fn_804D25D4_000016CC
lbl_fn_804D25D4_000016C8:
    li r21, 0x1
lbl_fn_804D25D4_000016CC:
    cmplwi r21, 0x1
    bne lbl_fn_804D25D4_00004898
    mr r3, r24
    li r4, 0x2
    bl fn_804DBD0C
    mr r3, r24
    li r4, 0x1
    bl fn_804DF120
    addis r3, r24, 0x1
    lwz r0, -0x68a8(r3)
    cmpwi r0, 0x16
    bne lbl_fn_804D25D4_0000170C
    addi r3, r24, 0x4fc
    li r4, -0x2
    bl fn_804D16A0
    b lbl_fn_804D25D4_00001718
lbl_fn_804D25D4_0000170C:
    addi r3, r24, 0x4fc
    li r4, -0x3
    bl fn_804D16A0
lbl_fn_804D25D4_00001718:
    mr r3, r24
    li r4, 0x0
    bl fn_804D6010
    b lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0xa
    bl fn_804D16A0
    bl fn_804D16D0
    addis r4, r24, 0x1
    lwz r4, -0x68a8(r4)
    bl fn_804AF520
    addis r3, r24, 0x1
    li r0, -0x1
    stw r0, -0x68a8(r3)
    mr r3, r24
    bl fn_804FB678
    b lbl_fn_804D25D4_00004898
    bl fn_804D1698
    bl fn_804D16E8
    bl fn_804D24AC
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0x7
    bl fn_804D16A0
    addis r3, r24, 0x1
    li r4, -0x1
    lwz r0, -0x68b0(r3)
    stw r4, -0x68a8(r3)
    cmpwi r0, 0x8b
    bne lbl_fn_804D25D4_000017A4
    bl fn_804D16D0
    li r4, 0x5
    bl fn_804AF520
    b lbl_fn_804D25D4_000017B8
lbl_fn_804D25D4_000017A4:
    bl fn_804D16D0
    li r4, 0x2
    bl fn_804AF520
    mr r3, r24
    bl fn_804FB678
lbl_fn_804D25D4_000017B8:
    bl fn_804D16D0
    bl fn_804D6018
    b lbl_fn_804D25D4_00004898
    mr r3, r24
    bl fn_80502100
    stw r3, 0x514(r24)
    bl fn_8050270C
    bl fn_804D1698
    bl fn_804D6028
    bl fn_804D6024
    li r4, 0x9f0
    bl fn_804F7ECC
    mr r3, r24
    li r4, 0x1
    bl fn_804D6030
    b lbl_fn_804D25D4_00004898
    bl fn_804F7F1C
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00004898
    bl fn_804D1698
    bl fn_804D6028
    bl fn_8050EB30
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001840
    bl fn_804D16F4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001830
    bl fn_804D16F4
    li r4, 0xc
    bl fn_80364E7C
lbl_fn_804D25D4_00001830:
    mr r3, r24
    li r4, 0x2
    bl fn_804D6030
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00001840:
    mr r3, r24
    li r4, 0x3
    bl fn_804D6030
    b lbl_fn_804D25D4_00004898
    bl fn_804D16F4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001864
    bl fn_804D16F4
    bl fn_8036503C
lbl_fn_804D25D4_00001864:
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001934
    bl fn_804D16F4
    bl fn_804D6038
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000018E8
    bl fn_804D16F4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000018A0
    bl fn_804D16F4
    bl fn_80365320
lbl_fn_804D25D4_000018A0:
    lis r4, lbl_80759E48@ha
    addis r3, r24, 0x1
    addi r4, r4, lbl_80759E48@l
    li r0, 0x1
    stw r0, -0x68a0(r3)
    addi r3, r1, 0x14
    lfs f1, lbl_80887590
    addi r4, r4, 0x15f
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r24
    li r4, 0x3
    bl fn_804D6030
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_000018E8:
    bl fn_804D16F4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000018FC
    bl fn_804D16F4
    bl fn_80365320
lbl_fn_804D25D4_000018FC:
    lis r4, lbl_80759E48@ha
    lfs f1, lbl_80887590
    addi r4, r4, lbl_80759E48@l
    addi r3, r1, 0x10
    addi r4, r4, 0x16c
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r24
    bl fn_800D2338
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00001934:
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    bl fn_804D16F4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001960
    bl fn_804D16F4
    bl fn_80365320
lbl_fn_804D25D4_00001960:
    lis r4, lbl_80759E48@ha
    lfs f1, lbl_80887590
    addi r4, r4, lbl_80759E48@l
    addi r3, r1, 0xc
    addi r4, r4, 0x16c
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r24
    bl fn_800D2338
    b lbl_fn_804D25D4_00004898
    mr r3, r24
    bl fn_80505DD4
    lis r4, lbl_80759E48@ha
    mr r3, r24
    addi r4, r4, lbl_80759E48@l
    addi r4, r4, 0x179
    bl fn_8049D68C
    addis r5, r24, 0x1
    li r4, 0x1
    stw r3, -0x6890(r5)
    bl fn_800D246C
    lwz r12, 0x2b58(r24)
    addi r3, r24, 0x2b58
    lwz r4, lbl_80887598
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x2b60(r24)
    addi r3, r24, 0x2b60
    lwz r4, lbl_8088759C
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x2b68(r24)
    addi r3, r24, 0x2b68
    lwz r4, lbl_808875A0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x2b50(r24)
    addi r3, r24, 0x2b50
    lwz r4, lbl_80887594
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addis r3, r24, 0x1
    li r0, 0x0
    stw r0, -0x6640(r3)
    li r3, 0x6
    bl fn_804D0140
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001A50
    li r3, 0x5
    bl fn_804D0140
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00001A60
lbl_fn_804D25D4_00001A50:
    li r3, 0x5a
    bl fn_804D00DC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001A6C
lbl_fn_804D25D4_00001A60:
    addis r3, r24, 0x1
    li r0, 0x1
    stw r0, -0x6640(r3)
lbl_fn_804D25D4_00001A6C:
    addis r4, r24, 0x1
    lwz r0, -0x68a0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00001A8C
    li r3, 0x1
    li r0, 0x0
    stw r3, -0x6640(r4)
    stw r0, -0x68a0(r4)
lbl_fn_804D25D4_00001A8C:
    lis r10, fn_804EE044@ha
    lis r9, fn_804ED76C@ha
    lis r8, fn_804EDB10@ha
    lis r7, fn_804EDCD0@ha
    lis r6, fn_804F7ECC@ha
    lis r5, fn_804F7EF4@ha
    lis r4, fn_804F7F1C@ha
    lis r3, fn_804F7F38@ha
    addis r11, r24, 0x1
    addi r10, r10, fn_804EE044@l
    addi r9, r9, fn_804ED76C@l
    addi r8, r8, fn_804EDB10@l
    addi r7, r7, fn_804EDCD0@l
    addi r6, r6, fn_804F7ECC@l
    addi r5, r5, fn_804F7EF4@l
    addi r4, r4, fn_804F7F1C@l
    addi r3, r3, fn_804F7F38@l
    li r0, 0x0
    stw r0, -0x663c(r11)
    stw r10, -0x6638(r11)
    stw r9, -0x6634(r11)
    stw r8, -0x6630(r11)
    stw r7, -0x662c(r11)
    stw r6, -0x6628(r11)
    stw r5, -0x6624(r11)
    stw r4, -0x6620(r11)
    stw r3, -0x661c(r11)
    bl fn_804D1698
    bl fn_804D16E8
    addis r5, r24, 0x1
    li r4, 0x1
    subi r5, r5, 0x6640
    bl fn_8050CF20
    addi r3, r24, 0x4fc
    li r4, 0x4
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
    bl fn_8020A3E4
    li r4, 0x0
    bl fn_8046ECDC
    bl fn_804D1698
    bl fn_804D16E8
    bl fn_804D24AC
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0x5
    bl fn_804D16A0
    mr r3, r24
    li r4, 0x0
    bl fn_804D6040
    mr r3, r24
    li r4, 0x0
    bl fn_804D6010
    bl fn_804D1698
    bl fn_804D6028
    mr r21, r3
    bl fn_804D604C
    mr r4, r3
    mr r3, r21
    lwz r4, 0x8(r4)
    bl fn_804D6054
    mr r3, r24
    bl fn_804D605C
    b lbl_fn_804D25D4_00004898
    addi r3, r24, 0x2b58
    li r21, 0x1
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00001BD4
    addi r3, r24, 0x2b60
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00001BD4
    addi r3, r24, 0x2b68
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00001BD4
    addi r3, r24, 0x2b50
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001BD8
lbl_fn_804D25D4_00001BD4:
    li r21, 0x0
lbl_fn_804D25D4_00001BD8:
    mr r3, r24
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00001BEC
    li r21, 0x0
lbl_fn_804D25D4_00001BEC:
    cmpwi r21, 0x0
    beq lbl_fn_804D25D4_00001DA0
    addi r3, r24, 0x2b60
    bl fn_8047059C
    mr r22, r3
    addi r3, r24, 0x2b60
    bl fn_80470580
    mr r4, r3
    mr r5, r22
    addi r3, r24, 0x69c
    bl fn_805061CC
    addi r3, r24, 0x2b68
    bl fn_8047059C
    mr r22, r3
    addi r3, r24, 0x2b68
    bl fn_80470580
    mr r4, r3
    mr r5, r22
    addi r3, r24, 0x2a50
    bl fn_80506D98
    addi r3, r24, 0x2b50
    bl fn_8047059C
    mr r22, r3
    addi r3, r24, 0x2b50
    bl fn_80470580
    mr r4, r3
    mr r5, r22
    addi r3, r24, 0x610
    bl fn_80507314
    addi r3, r24, 0x2b58
    bl fn_80473F88
    addi r3, r24, 0x2b60
    bl fn_80473F88
    addi r3, r24, 0x2b68
    bl fn_80473F88
    addi r3, r24, 0x2b50
    bl fn_80473F88
    addi r3, r24, 0x4fc
    li r4, 0x7
    bl fn_804D16A0
    bl fn_804D1698
    bl fn_804D6028
    bl fn_804D60E8
    bl fn_80686A48
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001CB4
    bl fn_804D16D0
    li r4, 0x2
    bl fn_804AF520
    b lbl_fn_804D25D4_00001CC0
lbl_fn_804D25D4_00001CB4:
    bl fn_804D16D0
    li r4, 0x5
    bl fn_804AF520
lbl_fn_804D25D4_00001CC0:
    bl fn_804D16D0
    li r4, 0xf
    bl fn_804D60F0
    addis r3, r24, 0x1
    li r4, 0x0
    lwz r3, -0x6890(r3)
    bl fn_800D246C
    bl fn_800F7FA0
    addis r4, r24, 0x1
    li r5, 0x0
    li r6, 0x1
    subi r4, r4, 0x6698
    bl fn_8026607C
    lwz r3, 0x514(r24)
    bl fn_804D610C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001D48
    lwz r3, 0x514(r24)
    bl fn_804D610C
    bl fn_804D6140
    li r4, 0x0
    bl fn_804D6114
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001D3C
    lwz r3, 0x514(r24)
    bl fn_804D610C
    bl fn_804D6140
    li r4, 0x0
    bl fn_804D6114
    lwz r0, 0xa0(r3)
    stw r0, 0x550(r24)
lbl_fn_804D25D4_00001D3C:
    lwz r3, 0x514(r24)
    bl fn_804D610C
    bl fn_803BE590
lbl_fn_804D25D4_00001D48:
    addis r3, r24, 0x1
    lwz r0, -0x6640(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00001D78
    bl fn_804D1698
    bl fn_804D6028
    bl fn_8050EAEC
    bl fn_804D1698
    bl fn_804D6028
    bl fn_804D6024
    li r4, 0x9f0
    bl fn_804F7EF4
lbl_fn_804D25D4_00001D78:
    bl fn_804814F0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00001DA0
    bl fn_804814F0
    lfs f1, lbl_808875D0
    li r4, 0x548
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_804D25D4_00001DA0:
    bl fn_8020A3E4
    li r4, 0x0
    bl fn_8046ECDC
    b lbl_fn_804D25D4_00004898
    bl fn_804D16D0
    bl fn_804D6148
    cmpwi r3, 0x7
    bne lbl_fn_804D25D4_00001DD0
    mr r3, r24
    li r4, 0x8
    bl fn_804D6030
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00001DD0:
    bl fn_804D16D0
    bl fn_804D6150
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    lfs f1, lbl_80887570
    addi r3, r1, 0x40
    lfs f4, lbl_80887590
    fmr f2, f1
    fmr f3, f1
    bl fn_800D8814
    mr r22, r3
    bl fn_802F0990
    mr r4, r22
    bl fn_804D0304
    mr r3, r24
    bl fn_800D2338
    b lbl_fn_804D25D4_00004898
    bl fn_804D1698
    bl fn_80509A9C
    addi r3, r24, 0x4fc
    li r4, 0x9
    bl fn_804D16A0
    addis r3, r24, 0x1
    li r0, 0x0
    stw r0, -0x6894(r3)
    b lbl_fn_804D25D4_00004898
    bl fn_804D1698
    bl fn_804D5F80
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    addi r3, r24, 0x2b58
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00004898
    addi r3, r24, 0x2b60
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0xa
    bl fn_804D16A0
    li r0, 0x0
    stw r0, 0x53c(r24)
    bl fn_804D1698
    li r4, 0x0
    bl fn_804D6164
    bl fn_804D16D0
    li r4, 0x9
    bl fn_804AF520
    b lbl_fn_804D25D4_00004898
    li r0, 0x0
    stw r0, 0x53c(r24)
    bl fn_804D1698
    li r4, 0x1
    bl fn_804D6164
    bl fn_804D1698
    li r4, 0x0
    bl fn_8050A638
    b lbl_fn_804D25D4_00004898
    li r22, 0x0
    stw r22, 0x53c(r24)
    bl fn_804D1698
    li r4, 0x1
    bl fn_804D6164
    bl fn_804D1698
    li r4, 0x0
    bl fn_8050A638
    li r7, 0x0
    addis r5, r24, 0x1
    addis r3, r7, 0x1
    addi r8, r24, 0x4
    subi r6, r3, 0x658c
    li r0, -0x1
    stbx r7, r24, r6
    li r7, 0x1
    addis r3, r7, 0x1
    mr r4, r5
    subi r6, r3, 0x658c
    li r7, 0x2
    addis r3, r7, 0x1
    stbx r22, r24, r6
    subi r6, r3, 0x658c
    mr r7, r8
    stbx r22, r24, r6
    mr r3, r5
    mr r6, r8
    li r21, 0x0
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    stw r0, -0x660c(r5)
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    stw r0, -0x65ec(r4)
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    stw r0, -0x65cc(r3)
    bl fn_804D1698
    bl fn_804D616C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002040
    li r21, 0x1
    b lbl_fn_804D25D4_00002070
lbl_fn_804D25D4_00002040:
    bl fn_804D1698
    bl fn_804D6194
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00002070
    bl fn_804D1698
    bl fn_804D619C
    clrlwi. r0, r3, 24
    bne lbl_fn_804D25D4_00002070
    li r21, 0x1
    bl fn_804D1698
    bl fn_804D16E8
    bl fn_8050CF94
lbl_fn_804D25D4_00002070:
    cmplwi r21, 0x1
    li r21, 0x0
    li r25, 0x0
    bne lbl_fn_804D25D4_000021C4
    bl fn_804D1698
    bl fn_804D6204
    mr r4, r3
    addi r3, r24, 0x5e4
    bl fn_804D668C
    mr r3, r24
    bl fn_804DF314
    mr r3, r24
    bl fn_804FB66C
    mr r3, r24
    li r4, 0x0
    bl fn_804D620C
    li r21, 0x1
    bl fn_804D1698
    bl fn_804D619C
    mr r23, r3
    addi r3, r24, 0x5e4
    bl fn_804D5F44
    clrlwi r4, r23, 24
    cmplw r4, r3
    blt lbl_fn_804D25D4_000020E8
    mr r3, r24
    li r4, 0x9e
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804D25D4_000022C4
lbl_fn_804D25D4_000020E8:
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    stb r23, 0xcc(r3)
    addi r3, r24, 0x5e4
    clrlwi r4, r23, 24
    li r22, 0x1
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    rlwimi r0, r22, 31, 0, 0
    stw r0, 0xd0(r3)
    addi r3, r24, 0x5e4
    clrlwi r4, r23, 24
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    rlwimi r0, r22, 30, 1, 1
    stw r0, 0xd0(r3)
    clrlwi r4, r23, 24
    addi r3, r24, 0x5e4
    li r23, 0x0
    bl fn_804D5F4C
    stb r23, 0xd53(r3)
    addi r3, r24, 0x4fc
    li r4, 0xc
    bl fn_804D16A0
    li r22, 0xff
    bl fn_800F7F90
    addis r3, r3, 0x1
    stb r22, -0x6687(r3)
    stw r23, 0x544(r24)
    bl fn_804D1698
    bl fn_804D6214
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_0000219C
    mr r3, r24
    bl fn_804DC35C
    bl fn_804D1698
    bl fn_804D6194
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_0000218C
    bl fn_804D1698
    bl fn_8050BDC8
lbl_fn_804D25D4_0000218C:
    bl fn_804D16D0
    li r4, 0xd
    bl fn_804AF520
    b lbl_fn_804D25D4_000021B8
lbl_fn_804D25D4_0000219C:
    bl fn_804D16D0
    bl fn_804D6148
    cmpwi r3, 0xc
    bne lbl_fn_804D25D4_000021B8
    bl fn_804D16D0
    li r4, 0xd
    bl fn_804AF520
lbl_fn_804D25D4_000021B8:
    li r0, 0x0
    stw r0, 0x5cc(r24)
    b lbl_fn_804D25D4_000022C4
lbl_fn_804D25D4_000021C4:
    addis r4, r24, 0x1
    lwz r3, -0x6614(r4)
    subic. r0, r3, 0x1
    stw r0, -0x6614(r4)
    bgt lbl_fn_804D25D4_000022C4
    bl fn_804D1698
    bl fn_804D16E8
    bl fn_804D621C
    cmpwi r3, 0x8
    beq lbl_fn_804D25D4_00002200
    bl fn_804D1698
    bl fn_804D16E8
    bl fn_804D24AC
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000022C4
lbl_fn_804D25D4_00002200:
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000022C4
    bl fn_804D1698
    bl fn_804D6224
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000022C4
    bl fn_804D1698
    bl fn_804D6214
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00002244
    bl fn_800F7F90
    li r4, 0x0
    bl fn_804DC454
lbl_fn_804D25D4_00002244:
    bl fn_804D1698
    bl fn_804D16E8
    bl fn_8050CF94
    bl fn_800F7F90
    bl fn_804EAA54
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00002268
    li r25, 0x1
    b lbl_fn_804D25D4_00002274
lbl_fn_804D25D4_00002268:
    bl fn_804D16D0
    li r4, 0xa
    bl fn_804AF520
lbl_fn_804D25D4_00002274:
    bl fn_804D16D0
    bl fn_804D6018
    lis r4, lbl_80759E48@ha
    lfs f1, lbl_80887590
    addi r4, r4, lbl_80759E48@l
    addi r3, r1, 0x8
    addi r4, r4, 0x16c
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r24
    li r4, 0x0
    bl fn_804DBD0C
    addi r3, r24, 0x4fc
    li r4, 0xa
    bl fn_804D16A0
    li r21, 0x1
lbl_fn_804D25D4_000022C4:
    cmpwi r21, 0x0
    beq lbl_fn_804D25D4_00004898
    bl fn_804D1698
    bl fn_804D6214
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00004898
    cmpwi r25, 0x0
    beq lbl_fn_804D25D4_000022F4
    bl fn_804D5FBC
    li r4, 0x1
    bl fn_804BA350
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_000022F4:
    bl fn_804D5FBC
    li r4, 0x9
    bl fn_804BA350
    b lbl_fn_804D25D4_00004898
    mr r3, r24
    bl fn_804EB874
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_804D25D4_000027E0
    lwz r3, 0x548(r24)
    lwz r0, 0x540(r24)
    cmpw r3, r0
    beq lbl_fn_804D25D4_00002330
    mr r3, r24
    bl fn_804DC35C
lbl_fn_804D25D4_00002330:
    bl fn_804D1698
    bl fn_804D6214
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000023B4
    bl fn_804D1698
    bl fn_804D622C
    mr r22, r3
    bl fn_800F7F90
    addis r3, r3, 0x1
    lbz r0, -0x6687(r3)
    cmplwi r0, 0xff
    beq lbl_fn_804D25D4_000023AC
    bl fn_804D1698
    bl fn_804D6194
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000023AC
    addis r3, r24, 0x1
    clrlwi r4, r22, 24
    lbz r0, -0x6687(r3)
    cmplw r4, r0
    bne lbl_fn_804D25D4_00002398
    bl fn_804D1698
    lbz r4, 0xcc(r27)
    bl fn_804D627C
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000023AC
lbl_fn_804D25D4_00002398:
    mr r3, r24
    li r4, 0xa0
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_000023AC:
    addis r3, r24, 0x1
    stb r22, -0x6687(r3)
lbl_fn_804D25D4_000023B4:
    lwz r4, 0x5cc(r24)
    lwz r3, 0x5d0(r24)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    cmpwi r0, 0x1
    beq lbl_fn_804D25D4_000023E0
    bl fn_804D1698
    bl fn_804D5F9C
    cmpwi r3, 0xd
    bne lbl_fn_804D25D4_00002478
lbl_fn_804D25D4_000023E0:
    cmpwi r27, 0x0
    beq lbl_fn_804D25D4_00002420
    bl fn_804D1698
    lbz r4, 0xcc(r27)
    bl fn_804D627C
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00002410
    mr r3, r24
    mr r4, r27
    li r5, 0x2
    bl fn_804D8250
    b lbl_fn_804D25D4_00002420
lbl_fn_804D25D4_00002410:
    mr r3, r24
    mr r5, r27
    li r4, 0x0
    bl fn_804FAA80
lbl_fn_804D25D4_00002420:
    li r21, 0x0
    b lbl_fn_804D25D4_00002468
lbl_fn_804D25D4_00002428:
    mr r4, r21
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    mr r22, r3
    srwi. r0, r0, 31
    beq lbl_fn_804D25D4_00002464
    bl fn_804D1698
    lbz r4, 0xcc(r22)
    bl fn_804D627C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002464
    lbz r0, 0xcc(r22)
    stw r0, 0x59c(r24)
    b lbl_fn_804D25D4_00002478
lbl_fn_804D25D4_00002464:
    addi r21, r21, 0x1
lbl_fn_804D25D4_00002468:
    addi r3, r24, 0x5e4
    bl fn_804D5F44
    cmplw r21, r3
    blt lbl_fn_804D25D4_00002428
lbl_fn_804D25D4_00002478:
    bl fn_804D1698
    bl fn_804D5F9C
    cmpwi r3, 0xd
    bne lbl_fn_804D25D4_000024DC
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000259C
    bl fn_804D5FC4
    bl fn_804D62E8
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000024CC
    addi r3, r24, 0x4fc
    li r4, 0xe
    bl fn_804D16A0
    addis r3, r24, 0x1
    li r0, 0x78
    stw r0, -0x6660(r3)
    mr r3, r24
    li r4, 0x3
    bl fn_804DC454
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_000024CC:
    bl fn_804D5FC4
    li r4, 0x1
    bl fn_804D62FC
    b lbl_fn_804D25D4_0000259C
lbl_fn_804D25D4_000024DC:
    bl fn_804D1698
    lbz r4, 0xcc(r27)
    bl fn_804D627C
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_0000259C
    bl fn_804D1698
    bl fn_804D6304
    lwz r0, 0x504(r24)
    mr r22, r3
    cmpw r3, r0
    beq lbl_fn_804D25D4_00002598
    cmpwi r3, 0x1
    bgt lbl_fn_804D25D4_00002558
    bl fn_804D1698
    bl fn_804D634C
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_0000254C
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000254C
    bl fn_804D5FC4
    bl fn_804D6358
    cmpwi r3, 0x7
    blt lbl_fn_804D25D4_0000254C
    mr r3, r24
    li r4, 0x9e
    li r5, 0x9
    bl fn_804FB474
lbl_fn_804D25D4_0000254C:
    li r0, -0x1
    sth r0, 0x508(r24)
    b lbl_fn_804D25D4_0000257C
lbl_fn_804D25D4_00002558:
    cmpw r0, r3
    bge lbl_fn_804D25D4_0000257C
    li r3, 0xe2d
    li r0, 0x0
    sth r3, 0x508(r24)
    mr r3, r24
    li r4, 0x0
    sth r0, 0x50a(r24)
    bl fn_804FC0D8
lbl_fn_804D25D4_0000257C:
    bl fn_804D1698
    bl fn_804D6194
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00002598
    mr r3, r24
    li r4, 0x1
    bl fn_804DC454
lbl_fn_804D25D4_00002598:
    stw r22, 0x504(r24)
lbl_fn_804D25D4_0000259C:
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000025D8
    lha r21, 0x508(r24)
    cmpwi r21, -0x1
    beq lbl_fn_804D25D4_000025D8
    bl fn_804D5FC4
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r21
    add r0, r0, r21
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_804C2268
lbl_fn_804D25D4_000025D8:
    bl fn_804D1698
    bl fn_804D6360
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_0000261C
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002604
    bl fn_804D5FC4
    bl fn_804C2F9C
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00002610
lbl_fn_804D25D4_00002604:
    lhz r0, 0x508(r24)
    cmplwi r0, 0x383
    bgt lbl_fn_804D25D4_0000261C
lbl_fn_804D25D4_00002610:
    li r0, 0x1
    stw r0, 0x53c(r24)
    b lbl_fn_804D25D4_00002624
lbl_fn_804D25D4_0000261C:
    li r0, 0x0
    stw r0, 0x53c(r24)
lbl_fn_804D25D4_00002624:
    bl fn_804D1698
    lbz r4, 0xcc(r27)
    bl fn_804D627C
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000026A0
    bl fn_804D1698
    bl fn_804D6214
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000026A0
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002660
    bl fn_804D5FC4
    bl fn_804D6358
    b lbl_fn_804D25D4_00002664
lbl_fn_804D25D4_00002660:
    li r3, 0x0
lbl_fn_804D25D4_00002664:
    cmpwi r3, 0x8
    beq lbl_fn_804D25D4_000026A0
    cmpwi r3, 0x9
    beq lbl_fn_804D25D4_000026A0
    bl fn_804D1698
    bl fn_804D6194
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_000026A0
    lwz r0, 0x53c(r24)
    mr r3, r24
    li r4, 0x1
    cmpwi r0, 0x1
    bne lbl_fn_804D25D4_0000269C
    li r4, 0x5
lbl_fn_804D25D4_0000269C:
    bl fn_804DC378
lbl_fn_804D25D4_000026A0:
    lwz r21, 0x53c(r24)
    cmpwi r21, 0x0
    beq lbl_fn_804D25D4_000026C8
    bl fn_804D1698
    mr r4, r21
    bl fn_804D6164
    bl fn_804D1698
    lwz r4, 0x53c(r24)
    bl fn_8050A638
    b lbl_fn_804D25D4_000026E0
lbl_fn_804D25D4_000026C8:
    bl fn_804D1698
    li r4, 0x1
    bl fn_804D6164
    bl fn_804D1698
    li r4, 0x0
    bl fn_8050A638
lbl_fn_804D25D4_000026E0:
    lha r0, 0x508(r24)
    cmpwi r0, 0x0
    ble lbl_fn_804D25D4_00002778
    li r0, 0x1
    stb r0, lbl_8087F614
    bl fn_800F7F90
    bl fn_804EB1B0
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00002744
    bl fn_804D1698
    bl fn_804D6360
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00002744
    lha r3, 0x50a(r24)
    cmpwi r3, 0x0
    ble lbl_fn_804D25D4_0000272C
    subi r0, r3, 0x1
    sth r0, 0x50a(r24)
    b lbl_fn_804D25D4_00002744
lbl_fn_804D25D4_0000272C:
    mr r3, r24
    li r4, 0x0
    bl fn_804FC0D8
    lha r3, 0x508(r24)
    subi r0, r3, 0x1
    sth r0, 0x508(r24)
lbl_fn_804D25D4_00002744:
    lha r0, 0x508(r24)
    cmpwi r0, 0x384
    bge lbl_fn_804D25D4_000027E0
    bl fn_804D5FDC
    bl fn_804D6368
    cmpwi r3, 0x4
    beq lbl_fn_804D25D4_000027E0
    cmpwi r3, 0x5
    beq lbl_fn_804D25D4_000027E0
    bl fn_804D5FDC
    li r4, 0x4
    bl fn_804CDE1C
    b lbl_fn_804D25D4_000027E0
lbl_fn_804D25D4_00002778:
    bne lbl_fn_804D25D4_000027E0
    bl fn_800F7F90
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000027BC
    lbz r0, lbl_8087F614
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_000027BC
    bl fn_804D5FC4
    bl fn_804D6358
    cmpwi r3, 0x6
    bge lbl_fn_804D25D4_000027B4
    bl fn_804D5FC4
    li r4, 0x6
    bl fn_804BC628
lbl_fn_804D25D4_000027B4:
    li r0, 0x0
    stb r0, lbl_8087F614
lbl_fn_804D25D4_000027BC:
    addis r4, r24, 0x1
    lwz r3, -0x68a4(r4)
    subic. r0, r3, 0x1
    stw r0, -0x68a4(r4)
    bgt lbl_fn_804D25D4_000027E0
    mr r3, r24
    li r4, 0x9e
    li r5, 0x9
    bl fn_804FB474
lbl_fn_804D25D4_000027E0:
    lwz r0, 0x540(r24)
    addis r3, r24, 0x1
    li r4, 0x0
    stb r4, -0x6618(r3)
    mr r3, r24
    stw r0, 0x548(r24)
    bl fn_804E9364
    mr r3, r24
    bl fn_804FB554
    b lbl_fn_804D25D4_00004898
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002834
    bl fn_804D5FC4
    bl fn_804D6378
    bl fn_804D6380
    mr r22, r3
    bl fn_804D5FC4
    bl fn_804D6378
    addi r4, r22, 0x1
    bl fn_804D6370
lbl_fn_804D25D4_00002834:
    mr r3, r24
    li r4, 0x1
    bl fn_804DA2D4
    mr r3, r24
    bl fn_804E9364
    mr r3, r24
    bl fn_804D8614
    addi r3, r24, 0x4fc
    li r4, 0xf
    bl fn_804D16A0
    bl fn_804814F0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    bl fn_804814F0
    lfs f1, lbl_80887590
    li r4, 0x1b5b
    li r5, 0xa
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00004898
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000028B4
    bl fn_804D5FC4
    bl fn_804D6378
    bl fn_804D6380
    mr r22, r3
    bl fn_804D5FC4
    bl fn_804D6378
    addi r4, r22, 0x1
    bl fn_804D6370
lbl_fn_804D25D4_000028B4:
    mr r3, r24
    li r4, 0x1
    bl fn_804DA2D4
    mr r3, r24
    bl fn_804E9364
    addis r3, r24, 0x1
    lbz r0, -0x658c(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_000028F0
    mr r3, r24
    bl fn_804D8914
    addi r3, r24, 0x4fc
    li r4, 0x10
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_000028F0:
    mr r3, r24
    bl fn_804D87B4
    b lbl_fn_804D25D4_00004898
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002928
    bl fn_804D5FC4
    bl fn_804D6378
    bl fn_804D6380
    mr r22, r3
    bl fn_804D5FC4
    bl fn_804D6378
    addi r4, r22, 0x1
    bl fn_804D6370
lbl_fn_804D25D4_00002928:
    mr r3, r24
    li r4, 0x1
    bl fn_804DA2D4
    mr r3, r24
    bl fn_804E9364
    addis r3, r24, 0x1
    lbz r0, -0x658b(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00002964
    mr r3, r24
    bl fn_804D97F4
    addi r3, r24, 0x4fc
    li r4, 0x11
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00002964:
    mr r3, r24
    bl fn_804D90E4
    b lbl_fn_804D25D4_00004898
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000299C
    bl fn_804D5FC4
    bl fn_804D6378
    bl fn_804D6380
    mr r22, r3
    bl fn_804D5FC4
    bl fn_804D6378
    addi r4, r22, 0x1
    bl fn_804D6370
lbl_fn_804D25D4_0000299C:
    mr r3, r24
    li r4, 0x1
    bl fn_804DA2D4
    mr r3, r24
    bl fn_804E9364
    addis r3, r24, 0x1
    lbz r0, -0x658a(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00002A04
    bl fn_804D1698
    bl fn_804D619C
    mr r22, r3
    bl fn_804D1698
    clrlwi r4, r22, 24
    bl fn_804D627C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000029F4
    mr r3, r24
    li r4, 0x12c
    bl fn_804D6388
    mr r3, r24
    bl fn_804E67A0
lbl_fn_804D25D4_000029F4:
    addi r3, r24, 0x4fc
    li r4, 0xd
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00002A04:
    mr r3, r24
    bl fn_804D9970
    b lbl_fn_804D25D4_00004898
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002A3C
    bl fn_804D5FC4
    bl fn_804D6378
    bl fn_804D6380
    mr r22, r3
    bl fn_804D5FC4
    bl fn_804D6378
    addi r4, r22, 0x1
    bl fn_804D6370
lbl_fn_804D25D4_00002A3C:
    mr r3, r24
    li r4, 0x0
    bl fn_804DA2D4
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00002A5C
    bl fn_8020A3E4
    li r4, 0x0
    bl fn_8046ECDC
lbl_fn_804D25D4_00002A5C:
    mr r3, r24
    bl fn_804E9364
    lwz r0, 0x5ac(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00002AA8
    addi r3, r24, 0x4fc
    li r4, 0x12
    bl fn_804D16A0
    bl fn_800F7FA0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    bl fn_800F7FA0
    mr r4, r24
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    bl fn_800F7FA0
    bl fn_800D2338
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00002AA8:
    mr r3, r24
    bl fn_804D6394
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00004898
    mr r3, r24
    li r4, 0x9e
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804D25D4_00004898
    mr r3, r24
    bl fn_804E9364
    mr r3, r24
    bl fn_804EB874
    mr r22, r3
    mr r3, r24
    li r4, 0x0
    bl fn_804DA2D4
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00002B58
    bl fn_800F7FA0
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00002B58
    mr r3, r24
    bl fn_804DE888
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00002B24
    mr r3, r24
    li r4, 0x9f
    li r5, 0x16
    bl fn_804FB474
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00002B24:
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, 0x2b
    beq lbl_fn_804D25D4_00002B58
    addi r3, r24, 0x4fc
    li r4, 0x13
    bl fn_804D16A0
    bl fn_804D16D0
    li r4, 0x15
    bl fn_804AF520
    mr r3, r24
    li r4, 0x708
    bl fn_804D6388
lbl_fn_804D25D4_00002B58:
    lwz r0, 0xb0(r22)
    cmpwi r0, -0x1
    bne lbl_fn_804D25D4_00004898
    mr r3, r24
    li r4, 0x9e
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804D25D4_00004898
    bl fn_8020A3E4
    li r4, 0x0
    bl fn_8046ECDC
    mr r3, r24
    bl fn_804E9364
    mr r3, r24
    bl fn_804DF408
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00002E44
    mr r3, r24
    bl fn_804EB874
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_804D25D4_00002BD0
    bl fn_8000D9E8
    bl fn_8000DCF4
    stw r3, 0x0(r22)
    li r4, 0x1
    bl fn_804D63AC
    lwz r0, 0xd0(r22)
    oris r0, r0, 0x800
    stw r0, 0xd0(r22)
lbl_fn_804D25D4_00002BD0:
    li r0, -0x1
    stw r0, 0x608(r24)
    li r27, 0x0
    b lbl_fn_804D25D4_00002D44
lbl_fn_804D25D4_00002BE0:
    mr r4, r27
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    mr r23, r3
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00002D40
    lwz r4, 0x0(r23)
    mr r3, r24
    li r5, 0x1
    li r6, 0x0
    bl fn_804EAA88
    lhz r0, 0xec(r23)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_804D25D4_00002D40
    mr r3, r24
    bl fn_804D63D4
    cmpwi r3, 0x2
    beq lbl_fn_804D25D4_00002D2C
    lwz r3, 0x0(r23)
    bl fn_804D63DC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002D2C
    li r25, 0x0
    li r21, 0x0
lbl_fn_804D25D4_00002C48:
    lwz r3, 0x0(r23)
    bl fn_804D63DC
    add r3, r3, r21
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804D25D4_00002CA8
    lwz r3, 0x0(r23)
    bl fn_804D63DC
    add r22, r3, r21
    lwz r3, 0x0(r23)
    bl fn_804D63DC
    add r3, r3, r25
    lwz r4, 0xd8(r22)
    lbz r0, 0xd4(r3)
    extsb r3, r0
    bl fn_80206B14
    mr r22, r3
    lwz r3, 0x0(r23)
    bl fn_80266FA4
    mr r4, r25
    bl fn_80266FB4
    lwz r3, 0x0(r3)
    mr r4, r22
    bl fn_804D63E4
lbl_fn_804D25D4_00002CA8:
    addi r25, r25, 0x1
    addi r21, r21, 0x4
    cmpwi r25, 0x4
    blt lbl_fn_804D25D4_00002C48
    li r25, 0x0
    li r21, 0x0
lbl_fn_804D25D4_00002CC0:
    lwz r3, 0x0(r23)
    bl fn_804D63DC
    add r3, r3, r21
    lwz r0, 0x108(r3)
    cmpwi r0, 0x0
    blt lbl_fn_804D25D4_00002D1C
    lwz r3, 0x0(r23)
    mr r4, r25
    bl fn_804D63EC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002D1C
    lwz r3, 0x0(r23)
    bl fn_804D63DC
    add r4, r3, r21
    mr r3, r25
    lwz r4, 0x108(r4)
    bl fn_8020ED84
    mr r22, r3
    lwz r3, 0x0(r23)
    mr r4, r25
    bl fn_804D63EC
    mr r4, r22
    bl fn_804D63FC
lbl_fn_804D25D4_00002D1C:
    addi r25, r25, 0x1
    addi r21, r21, 0x4
    cmpwi r25, 0x5
    blt lbl_fn_804D25D4_00002CC0
lbl_fn_804D25D4_00002D2C:
    lwz r3, 0x0(r23)
    bl fn_800F52F0
    lhz r0, 0xec(r23)
    extrwi r4, r0, 8, 18
    bl fn_804D6404
lbl_fn_804D25D4_00002D40:
    addi r27, r27, 0x1
lbl_fn_804D25D4_00002D44:
    addi r3, r24, 0x5e4
    bl fn_804D5F44
    cmplw r27, r3
    blt lbl_fn_804D25D4_00002BE0
    lwz r3, 0x5e0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002D74
    bl fn_80122550
    lfs f1, lbl_808875CC
    li r4, 0x1
    li r5, 0x1
    bl fn_8037EF30
lbl_fn_804D25D4_00002D74:
    bl fn_804814F0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002DF4
    lwz r0, 0x540(r24)
    cmpwi r0, 0x2
    beq lbl_fn_804D25D4_00002DAC
    bl fn_804814F0
    lfs f1, lbl_808875D0
    li r4, 0x66
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00002DF4
lbl_fn_804D25D4_00002DAC:
    lwz r0, 0x560(r24)
    cmpwi r0, 0x1
    bne lbl_fn_804D25D4_00002DD8
    bl fn_804814F0
    lfs f1, lbl_808875D0
    li r4, 0xc9
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00002DF4
lbl_fn_804D25D4_00002DD8:
    bl fn_804814F0
    lfs f1, lbl_808875D0
    li r4, 0x8ad
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_804D25D4_00002DF4:
    bl fn_804D640C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00002E0C
    bl fn_804D640C
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804D25D4_00002E0C:
    addi r3, r24, 0x4fc
    li r4, 0x1a
    bl fn_804D16A0
    addi r3, r1, 0x18
    li r4, 0x1010
    bl fn_804D6414
    bl fn_804D1698
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1010
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00002E44:
    mr r3, r24
    bl fn_804D6394
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00002E68
    mr r3, r24
    li r4, 0x9e
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00002E68:
    lwz r3, 0x5e0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    bl fn_80244CA0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    lwz r3, 0x5e0(r24)
    bl fn_80373118
    b lbl_fn_804D25D4_00004898
    bl fn_8020A3E4
    li r4, 0x0
    bl fn_8046ECDC
    bl fn_804D16D0
    li r4, 0xf
    bl fn_804AF520
    mr r3, r24
    bl fn_804E9364
    mr r3, r24
    bl fn_804E651C
    mr r3, r24
    bl fn_804D6394
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00002ED8
    mr r3, r24
    li r4, 0x9e
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00002ED8:
    mr r3, r24
    bl fn_804EB5DC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    mr r3, r24
    bl fn_804EB874
    mr r22, r3
    bl fn_804D1698
    lbz r4, 0xcc(r22)
    bl fn_804D627C
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00002F50
    bl fn_804D1698
    bl fn_804D1698
    bl fn_804D622C
    clrlwi r22, r3, 24
    bl fn_804AE3BC
    mr r4, r22
    li r5, 0x1044
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    bl fn_804D1698
    bl fn_804D1698
    bl fn_804D622C
    clrlwi r22, r3, 24
    bl fn_804AE3BC
    mr r4, r22
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804D25D4_00002F50:
    mr r3, r24
    li r4, 0x384
    bl fn_804D6388
    addi r3, r24, 0x4fc
    li r4, 0x1b
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
    bl fn_8020A3E4
    li r4, 0x0
    bl fn_8046ECDC
    mr r3, r24
    bl fn_804E9364
    mr r3, r24
    bl fn_804D6394
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00002FA4
    mr r3, r24
    li r4, 0x9e
    li r5, 0x9
    bl fn_804FB474
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00002FA4:
    mr r3, r24
    bl fn_804EB874
    mr r22, r3
    bl fn_804D1698
    lbz r4, 0xcc(r22)
    bl fn_804D627C
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00004898
    li r21, 0x0
    li r23, 0x0
    li r25, 0x0
    b lbl_fn_804D25D4_00003054
lbl_fn_804D25D4_00002FD4:
    mr r4, r25
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00003050
    mr r4, r25
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lbz r3, 0xcc(r3)
    lbz r0, 0xcc(r22)
    cmplw r0, r3
    beq lbl_fn_804D25D4_00003050
    mr r3, r24
    mr r4, r25
    bl fn_804EB3D0
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00003050
    mr r4, r25
    addi r3, r24, 0x5e4
    addi r23, r23, 0x1
    bl fn_804D5F4C
    lbz r0, 0xcc(r3)
    slwi r3, r0, 2
    addis r3, r3, 0x1
    subi r0, r3, 0x65cc
    lwzx r0, r24, r0
    cmpwi r0, 0x1
    bne lbl_fn_804D25D4_00003050
    addi r21, r21, 0x1
lbl_fn_804D25D4_00003050:
    addi r25, r25, 0x1
lbl_fn_804D25D4_00003054:
    addi r3, r24, 0x5e4
    bl fn_804D5F44
    cmplw r25, r3
    blt lbl_fn_804D25D4_00002FD4
    cmpw r23, r21
    bne lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0x1d
    bl fn_804D16A0
    bl fn_804D16D0
    li r4, 0x10
    bl fn_804AF520
    bl fn_804D16D8
    li r4, 0x0
    bl fn_800D246C
    bl fn_804D16D8
    li r4, 0x1
    bl fn_804B50C0
    bl fn_804D16D8
    lwz r4, 0x564(r24)
    bl fn_804B6204
    bl fn_804D1698
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1045
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    bl fn_804D1698
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
    b lbl_fn_804D25D4_00004898
    mr r3, r24
    bl fn_804E9364
    lwz r3, 0x558(r24)
    cmpwi r3, 0x32
    blt lbl_fn_804D25D4_00003110
    addi r3, r24, 0x4fc
    li r4, 0x1c
    bl fn_804D16A0
    li r0, 0x0
    stw r0, 0x558(r24)
    mr r3, r24
    bl fn_804DA350
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_00003110:
    addi r0, r3, 0x1
    stw r0, 0x558(r24)
    b lbl_fn_804D25D4_00004898
    mr r3, r24
    bl fn_804E9364
    addis r4, r24, 0x1
    addi r6, r24, 0x4
    li r27, 0x0
    stw r27, -0x660c(r4)
    addis r4, r6, 0x1
    addi r6, r6, 0x4
    stw r27, -0x660c(r4)
    addis r4, r6, 0x1
    addi r6, r6, 0x4
    addis r3, r24, 0x1
    stw r27, -0x660c(r4)
    addis r4, r6, 0x1
    addi r6, r6, 0x4
    addi r5, r24, 0x4
    stw r27, -0x660c(r4)
    addis r4, r6, 0x1
    addi r6, r6, 0x4
    stw r27, -0x660c(r4)
    addis r4, r6, 0x1
    addi r6, r6, 0x4
    stw r27, -0x660c(r4)
    addis r4, r6, 0x1
    addi r6, r6, 0x4
    stw r27, -0x660c(r4)
    addis r4, r6, 0x1
    stw r27, -0x660c(r4)
    stw r27, -0x65ec(r3)
    addis r3, r5, 0x1
    addi r5, r5, 0x4
    stw r27, -0x65ec(r3)
    addis r3, r5, 0x1
    addi r5, r5, 0x4
    stw r27, -0x65ec(r3)
    addis r3, r5, 0x1
    addi r5, r5, 0x4
    stw r27, -0x65ec(r3)
    addis r3, r5, 0x1
    addi r5, r5, 0x4
    stw r27, -0x65ec(r3)
    addis r3, r5, 0x1
    addi r5, r5, 0x4
    stw r27, -0x65ec(r3)
    addis r3, r5, 0x1
    addi r5, r5, 0x4
    stw r27, -0x65ec(r3)
    addis r3, r5, 0x1
    stw r27, -0x65ec(r3)
    bl fn_804CF194
    stw r4, 0x5bc(r24)
    li r4, 0x1e
    stw r3, 0x5b8(r24)
    addi r3, r24, 0x4fc
    stw r27, 0x534(r24)
    bl fn_804D16A0
    lwz r0, 0x540(r24)
    stw r0, 0x544(r24)
    bl fn_804D1698
    bl fn_804D6028
    li r4, 0x1
    bl fn_8050F8C8
    bl fn_804D1698
    bl fn_804D6028
    bl fn_8050EAEC
    bl fn_804D1698
    bl fn_804D6028
    bl fn_804D6024
    li r4, 0x9f0
    bl fn_804F7EF4
    li r3, 0xfb
    li r4, 0x2
    bl fn_804D00B8
    mr r3, r24
    bl fn_804E9C68
    mr r3, r24
    bl fn_804EB874
    lis r4, lbl_80759748@ha
    lis r30, lbl_80759E48@ha
    lfd f31, lbl_80759748@l(r4)
    mr r26, r3
    addi r30, r30, lbl_80759E48@l
    addi r31, r1, 0x68
    li r25, 0x0
    lis r29, 0x4330
    li r22, 0x1
    b lbl_fn_804D25D4_00003548
lbl_fn_804D25D4_00003278:
    mr r4, r25
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    mr r28, r3
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00003544
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00003544
    mr r3, r24
    bl fn_804D6424
    mr r23, r3
    lwz r3, 0x0(r28)
    bl fn_800F52F0
    stw r23, 0x224(r3)
    lwz r0, 0x604(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_0000346C
    lwz r3, 0x0(r28)
    bl fn_800F52F0
    lwz r0, 0x540(r24)
    lwz r3, 0x160(r3)
    cmplwi r0, 0x1
    ble lbl_fn_804D25D4_000032F0
    cmpwi r0, 0x2
    bne lbl_fn_804D25D4_00003314
    subfic r0, r3, 0x50
    b lbl_fn_804D25D4_000032F4
lbl_fn_804D25D4_000032F0:
    subfic r0, r3, 0x3c
lbl_fn_804D25D4_000032F4:
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lwz r3, 0x0(r28)
    stw r29, 0x168(r1)
    lfd f0, 0x168(r1)
    fsubs f30, f0, f31
    bl fn_800F52F0
    stfs f30, 0x1b0(r3)
lbl_fn_804D25D4_00003314:
    bl fn_804D1698
    lwz r12, 0x0(r3)
    lbz r4, 0xcc(r28)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_804D25D4_00003378
    mr r3, r24
    mr r4, r25
    bl fn_804EB3D0
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00003378
    lwz r3, 0x0(r28)
    bl fn_803D7100
    mr r4, r3
    addi r3, r28, 0x4
    bl fn_804D807C
    addi r0, r23, 0x10
    stw r0, 0x8(r28)
    addi r4, r28, 0x4
    stw r0, 0xc(r28)
    lwz r3, 0x0(r28)
    bl fn_804D6488
lbl_fn_804D25D4_00003378:
    lwz r3, 0x0(r28)
    bl fn_804D63DC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003410
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x0
    blt lbl_fn_804D25D4_00003410
    lwz r3, 0x0(r28)
    bl fn_803D7100
    mr r4, r3
    addi r3, r1, 0x68
    lwz r5, 0x14(r4)
    addi r4, r30, 0x18a
    crclr 6
    bl sprintf
    addi r3, r1, 0x68
    bl strlen
    lwz r0, 0x540(r24)
    cmpwi r0, 0x1
    bne lbl_fn_804D25D4_000033DC
    add r4, r3, r31
    lbz r3, -0x3(r4)
    addi r0, r3, 0x1
    stb r0, -0x3(r4)
    b lbl_fn_804D25D4_000033F4
lbl_fn_804D25D4_000033DC:
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_000033F4
    add r4, r3, r31
    lbz r3, -0x3(r4)
    addi r0, r3, 0x2
    stb r0, -0x3(r4)
lbl_fn_804D25D4_000033F4:
    addi r3, r1, 0x68
    bl fn_8020A81C
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_804D25D4_00003410
    lwz r3, 0x0(r28)
    bl fn_8017A300
lbl_fn_804D25D4_00003410:
    li r20, 0x0
    li r21, 0x0
lbl_fn_804D25D4_00003418:
    lwz r3, 0x0(r28)
    bl fn_804D63DC
    add r23, r3, r21
    lwz r3, 0x0(r28)
    bl fn_800F52F0
    mr r4, r20
    addi r5, r23, 0xe8
    bl fn_803396FC
    addi r20, r20, 0x1
    addi r21, r21, 0x8
    cmpwi r20, 0x4
    blt lbl_fn_804D25D4_00003418
    lwz r3, 0x0(r28)
    bl fn_800F52F0
    bl fn_8012B3E8
    lwz r3, 0x0(r28)
    bl fn_800F52F0
    bl fn_8012B988
    lwz r3, 0x0(r28)
    bl fn_800F52F0
    bl fn_8012D8B8
lbl_fn_804D25D4_0000346C:
    lwz r3, 0x0(r28)
    bl fn_800F530C
    stw r22, 0xc0(r3)
    lwz r3, 0x0(r28)
    bl fn_800F530C
    stw r27, 0xb4(r3)
    li r4, 0x0
    lwz r3, 0x0(r28)
    bl fn_800EC1F4
    lwz r0, 0xd0(r28)
    lwz r3, 0x0(r28)
    extrwi r4, r0, 4, 6
    bl fn_804D6490
    lwz r0, 0xb0(r28)
    cmpwi r0, 0xc
    beq lbl_fn_804D25D4_000034B4
    cmpwi r0, 0x15
    bne lbl_fn_804D25D4_00003544
lbl_fn_804D25D4_000034B4:
    lwz r3, 0x5e0(r24)
    bl fn_8013C504
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003544
    bl fn_804D64A0
    mr r20, r3
    li r21, 0x0
    b lbl_fn_804D25D4_00003534
lbl_fn_804D25D4_000034D4:
    mr r3, r20
    mr r4, r21
    bl fn_804D8100
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00003530
    lwz r0, 0xd0(r28)
    extrwi r4, r0, 4, 6
    cmplwi r4, 0x1
    bne lbl_fn_804D25D4_00003508
    lwz r0, 0x24(r3)
    cmpwi r0, 0x32
    bgt lbl_fn_804D25D4_0000351C
lbl_fn_804D25D4_00003508:
    cmplwi r4, 0x2
    bne lbl_fn_804D25D4_00003530
    lwz r0, 0x24(r3)
    cmpwi r0, 0x32
    bge lbl_fn_804D25D4_00003530
lbl_fn_804D25D4_0000351C:
    lwz r23, 0x24(r3)
    lwz r3, 0x0(r28)
    bl fn_800F530C
    stw r23, 0xb8(r3)
    b lbl_fn_804D25D4_00003544
lbl_fn_804D25D4_00003530:
    addi r21, r21, 0x1
lbl_fn_804D25D4_00003534:
    mr r3, r20
    bl fn_80089ACC
    cmplw r21, r3
    blt lbl_fn_804D25D4_000034D4
lbl_fn_804D25D4_00003544:
    addi r25, r25, 0x1
lbl_fn_804D25D4_00003548:
    addi r3, r24, 0x5e4
    bl fn_804D5F44
    cmpw r25, r3
    blt lbl_fn_804D25D4_00003278
    mr r3, r24
    bl fn_804D63D4
    cmpwi r3, 0x2
    bne lbl_fn_804D25D4_000035A0
    lwz r3, 0x5e0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000035A0
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000035A0
    lwz r3, 0x5e0(r24)
    bl fn_80373148
    bl fn_803EFDAC
    cmpwi r3, 0x6
    bne lbl_fn_804D25D4_000035A0
    mr r3, r24
    li r4, 0x1
    bl fn_804DA4A4
lbl_fn_804D25D4_000035A0:
    mr r3, r24
    bl fn_804D63D4
    cmpwi r3, 0x2
    bne lbl_fn_804D25D4_000035E8
    lwz r3, 0x5e0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000035E8
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000035E8
    lwz r3, 0x5e0(r24)
    bl fn_80373148
    bl fn_803EFDAC
    cmpwi r3, 0x7
    bne lbl_fn_804D25D4_000035E8
    li r3, 0x4
    bl fn_8050E61C
    b lbl_fn_804D25D4_000035F0
lbl_fn_804D25D4_000035E8:
    li r3, 0x3
    bl fn_8050E61C
lbl_fn_804D25D4_000035F0:
    cmpwi r26, 0x0
    beq lbl_fn_804D25D4_0000360C
    lwz r3, 0x0(r26)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000360C
    li r4, 0x0
    bl fn_804D63AC
lbl_fn_804D25D4_0000360C:
    lis r3, lbl_80759748@ha
    li r20, 0x0
    lfd f30, lbl_80759748@l(r3)
    li r29, 0x38
    lis r28, 0x4330
    li r27, 0x1
    li r25, 0x0
    b lbl_fn_804D25D4_000036EC
lbl_fn_804D25D4_0000362C:
    mr r4, r20
    addi r3, r24, 0x5f0
    bl fn_804D64A8
    lwz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_000036E8
    mr r3, r0
    bl fn_804D63DC
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x0
    blt lbl_fn_804D25D4_0000367C
    xoris r0, r29, 0x8000
    stw r0, 0x16c(r1)
    lwz r3, 0x0(r30)
    stw r28, 0x168(r1)
    lfd f0, 0x168(r1)
    fsubs f31, f0, f30
    bl fn_800F52F0
    stfs f31, 0x1b0(r3)
lbl_fn_804D25D4_0000367C:
    lwz r3, 0x0(r30)
    bl fn_800F52F0
    bl fn_8012B3E8
    lwz r3, 0x0(r30)
    bl fn_800F52F0
    bl fn_8012B988
    lwz r3, 0x0(r30)
    bl fn_800F52F0
    bl fn_8012D8B8
    lwz r3, 0x0(r30)
    bl fn_800F530C
    stw r27, 0xc0(r3)
    lwz r3, 0x0(r30)
    bl fn_800F530C
    stw r25, 0xb4(r3)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    lwz r3, 0x0(r30)
    bl fn_8014DEE4
    lwz r3, 0x0(r30)
    bl fn_803CFC58
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000036E8
    lwz r3, 0x0(r30)
    li r4, 0x1
    bl fn_8016E4C4
lbl_fn_804D25D4_000036E8:
    addi r20, r20, 0x1
lbl_fn_804D25D4_000036EC:
    addi r3, r24, 0x5f0
    bl fn_804D8110
    cmpw r20, r3
    blt lbl_fn_804D25D4_0000362C
    addis r4, r24, 0x1
    li r0, 0x0
    stw r0, 0x604(r24)
    mr r3, r24
    stw r0, 0x5ac(r24)
    stb r0, -0x6589(r4)
    bl fn_804E9364
    bl fn_804D1698
    lbz r4, 0xcc(r26)
    bl fn_804D627C
    cmpwi r3, 0x1
    beq lbl_fn_804D25D4_00004898
    addi r3, r1, 0x1c
    li r4, 0x1046
    bl fn_804D8118
    addi r3, r1, 0x1c
    bl fn_804D81CC
    mr r20, r3
    mr r3, r26
    bl fn_804D64B8
    stb r3, 0x0(r20)
    bl fn_804D1698
    bl fn_804D1698
    bl fn_804D622C
    clrlwi r25, r3, 24
    bl fn_804AE3BC
    mr r4, r25
    mr r6, r20
    li r5, 0x1046
    li r7, 0x1
    bl fn_8050E098
    bl fn_800F7F90
    lbz r4, 0xcc(r26)
    li r5, 0x96
    lbz r6, 0x0(r20)
    bl fn_804F5A9C
    bl fn_804CF194
    addis r5, r24, 0x1
    stw r4, -0x6584(r5)
    stw r3, -0x6588(r5)
    lbz r0, 0x0(r20)
    stb r0, -0x6580(r5)
    b lbl_fn_804D25D4_00004898
    mr r3, r24
    bl fn_804E9364
    mr r3, r24
    bl fn_804EB874
    addis r4, r24, 0x1
    mr r31, r3
    lbz r0, -0x6589(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_000038A4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000038A4
    bl fn_804D1698
    lbz r4, 0xcc(r31)
    bl fn_804D627C
    cmpwi r3, 0x1
    beq lbl_fn_804D25D4_000038A4
    bl fn_800F7F90
    addis r4, r24, 0x1
    lbz r4, -0x6580(r4)
    bl fn_804F5E3C
    addi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_fn_804D25D4_00003818
    bl fn_800F7F90
    addis r4, r24, 0x1
    lbz r4, -0x6580(r4)
    bl fn_804F5CA0
    b lbl_fn_804D25D4_000038A4
lbl_fn_804D25D4_00003818:
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000038A4
    bl fn_804CF194
    addis r7, r24, 0x1
    mr r28, r4
    lwz r5, -0x6584(r7)
    mr r27, r3
    lwz r0, -0x6588(r7)
    subfc r6, r5, r4
    lbz r4, -0x6580(r7)
    subfe r5, r0, r3
    mr r3, r24
    mr r0, r5
    rotrwi r26, r6, 1
    rlwimi r0, r6, 0, 31, 31
    rlwimi r26, r5, 31, 0, 0
    srawi r25, r0, 1
    addze r26, r26
    addze r25, r25
    bl fn_804F5B0C
    lwz r0, 0x4(r3)
    lwz r3, 0x0(r3)
    addc r0, r0, r26
    adde r3, r3, r25
    subfc r0, r0, r28
    stw r0, 0x5bc(r24)
    subfe r0, r3, r27
    stw r0, 0x5b8(r24)
    bl fn_800F7F90
    addis r4, r24, 0x1
    lbz r4, -0x6580(r4)
    bl fn_804F5CA0
    addis r3, r24, 0x1
    li r0, 0x1
    stb r0, -0x6589(r3)
lbl_fn_804D25D4_000038A4:
    mr r3, r24
    bl fn_803D6E1C
    cmplwi r3, 0x7
    bgt lbl_fn_804D25D4_0000414C
    lis r4, jumptable_807910B0@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_807910B0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r0, 0x5e0(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_000038F0
    mr r3, r24
    bl fn_804DB3B8
    mulli r5, r3, 0x1e
    lwz r3, 0x5e0(r24)
    li r4, 0xff
    bl fn_80370AE4
lbl_fn_804D25D4_000038F0:
    mr r3, r24
    bl fn_804D63D4
    cmpwi r3, 0x2
    beq lbl_fn_804D25D4_00003960
    mr r3, r24
    bl fn_804D64CC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003960
    bl fn_804814F0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003960
    addis r3, r24, 0x1
    lwz r0, -0x6898(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_00003960
    bl fn_804814F0
    lfs f1, lbl_80887590
    li r4, 0x8b8
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    mr r3, r24
    li r4, 0x6
    bl fn_804DA490
    addis r3, r24, 0x1
    li r0, 0x1
    stw r0, -0x6898(r3)
lbl_fn_804D25D4_00003960:
    bl fn_8000D9E8
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000414C
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r4, r3
    mr r3, r24
    bl fn_804FB96C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000414C
    addis r3, r24, 0x1
    li r0, 0x1
    stb r0, -0x660d(r3)
    b lbl_fn_804D25D4_0000414C
    bl fn_8036635C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000039BC
    bl fn_8036635C
    bl fn_803CFC58
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000039BC
    bl fn_8036635C
    bl fn_80244CAC
lbl_fn_804D25D4_000039BC:
    lwz r0, 0xd0(r31)
    extrwi. r0, r0, 1, 5
    bne lbl_fn_804D25D4_000039FC
    mr r3, r24
    li r4, 0x0
    bl fn_804EA8BC
    li r3, 0xfb
    li r4, 0x3
    bl fn_804D00B8
    addis r3, r24, 0x1
    li r0, 0x384
    stw r0, -0x6660(r3)
    mr r3, r24
    li r4, 0x12c
    bl fn_804D6388
    b lbl_fn_804D25D4_0000414C
lbl_fn_804D25D4_000039FC:
    mr r3, r24
    bl fn_804D6394
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00003A1C
    mr r3, r24
    li r4, 0x3
    bl fn_804D6010
    b lbl_fn_804D25D4_0000414C
lbl_fn_804D25D4_00003A1C:
    mr r22, r24
    li r20, 0x0
    li r21, 0x0
    li r23, 0x0
    b lbl_fn_804D25D4_00003A9C
lbl_fn_804D25D4_00003A30:
    mr r4, r23
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00003A94
    mr r4, r23
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lbz r3, 0xcc(r3)
    lbz r0, 0xcc(r31)
    cmplw r0, r3
    beq lbl_fn_804D25D4_00003A94
    mr r3, r24
    mr r4, r23
    bl fn_804EB3D0
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00003A94
    addis r3, r22, 0x1
    addi r21, r21, 0x1
    lwz r0, -0x660c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D25D4_00003A94
    addi r20, r20, 0x1
lbl_fn_804D25D4_00003A94:
    addi r22, r22, 0x4
    addi r23, r23, 0x1
lbl_fn_804D25D4_00003A9C:
    addi r3, r24, 0x5e4
    bl fn_804D5F44
    cmplw r23, r3
    blt lbl_fn_804D25D4_00003A30
    cmpw r21, r20
    bne lbl_fn_804D25D4_0000414C
    bl fn_804D1698
    lbz r4, 0xcc(r31)
    bl fn_804D627C
    cmpwi r3, 0x1
    beq lbl_fn_804D25D4_00003B10
    bl fn_804D1698
    bl fn_804D1698
    bl fn_804D622C
    clrlwi r25, r3, 24
    bl fn_804AE3BC
    mr r4, r25
    li r5, 0x1042
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    bl fn_804D1698
    bl fn_804D1698
    bl fn_804D622C
    clrlwi r25, r3, 24
    bl fn_804AE3BC
    mr r4, r25
    li r5, 0x1
    bl fn_8050DDE0
lbl_fn_804D25D4_00003B10:
    mr r3, r24
    li r4, 0x2
    bl fn_804D6010
    mr r3, r24
    li r4, 0x12c
    bl fn_804D6388
    b lbl_fn_804D25D4_0000414C
    mr r3, r24
    bl fn_804D6394
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_00003B4C
    mr r3, r24
    li r4, 0x3
    bl fn_804D6010
    b lbl_fn_804D25D4_0000414C
lbl_fn_804D25D4_00003B4C:
    bl fn_804D1698
    lbz r4, 0xcc(r31)
    bl fn_804D627C
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_0000414C
    mr r22, r24
    li r20, 0x0
    li r21, 0x0
    li r23, 0x0
    b lbl_fn_804D25D4_00003BE0
lbl_fn_804D25D4_00003B74:
    mr r4, r23
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00003BD8
    mr r4, r23
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lbz r3, 0xcc(r3)
    lbz r0, 0xcc(r31)
    cmplw r0, r3
    beq lbl_fn_804D25D4_00003BD8
    mr r3, r24
    mr r4, r23
    bl fn_804EB3D0
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00003BD8
    addis r3, r22, 0x1
    addi r21, r21, 0x1
    lwz r0, -0x65ec(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D25D4_00003BD8
    addi r20, r20, 0x1
lbl_fn_804D25D4_00003BD8:
    addi r22, r22, 0x4
    addi r23, r23, 0x1
lbl_fn_804D25D4_00003BE0:
    addi r3, r24, 0x5e4
    bl fn_804D5F44
    cmplw r23, r3
    blt lbl_fn_804D25D4_00003B74
    cmpw r21, r20
    bne lbl_fn_804D25D4_0000414C
    addi r3, r1, 0x50
    li r4, 0x1043
    bl fn_804D81D4
    addi r3, r1, 0x50
    bl fn_804D8248
    mr r20, r3
    li r21, 0x0
    mr r22, r20
    li r25, 0x0
lbl_fn_804D25D4_00003C1C:
    mr r3, r24
    mr r4, r21
    bl fn_804D5F10
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003C50
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D25D4_00003C50
    addi r3, r3, 0xdc
    bl fn_804D65A0
    sth r3, 0x0(r22)
    b lbl_fn_804D25D4_00003C54
lbl_fn_804D25D4_00003C50:
    sth r25, 0x0(r22)
lbl_fn_804D25D4_00003C54:
    addi r21, r21, 0x1
    addi r22, r22, 0x2
    cmpwi r21, 0x8
    blt lbl_fn_804D25D4_00003C1C
    lwz r0, 0x2b80(r24)
    stw r0, 0x10(r20)
    bl fn_804D1698
    bl fn_804AE3BC
    mr r6, r20
    li r4, -0x1
    li r5, 0x1043
    li r7, 0x1
    bl fn_8050E098
    bl fn_804D1698
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
    mr r3, r24
    li r4, 0x3
    bl fn_804D6010
    b lbl_fn_804D25D4_0000414C
    bl fn_804D1698
    bl fn_804D6028
    li r4, 0x0
    bl fn_8050F8C8
    lwz r4, 0x540(r24)
    addis r3, r24, 0x1
    li r0, 0x0
    stw r0, -0x6684(r3)
    cmplwi r4, 0x1
    stw r0, -0x6680(r3)
    bgt lbl_fn_804D25D4_00003D08
    li r0, 0x1
    stw r0, -0x6684(r3)
    mr r3, r24
    li r4, 0x4
    bl fn_804D6010
    bl fn_804D5FD4
    li r4, 0x1
    bl fn_804D65A8
    addis r3, r24, 0x1
    li r0, 0x384
    stw r0, -0x6660(r3)
    b lbl_fn_804D25D4_00003D48
lbl_fn_804D25D4_00003D08:
    cmpwi r4, 0x2
    bne lbl_fn_804D25D4_00003D48
    li r0, 0x1
    stw r0, -0x6684(r3)
    mr r3, r24
    li r4, 0x4
    bl fn_804D6010
    bl fn_804D5FD4
    li r4, 0x1
    bl fn_804D65A8
    addis r3, r24, 0x1
    li r0, 0x1c2
    stw r0, -0x6660(r3)
    bl fn_804D16D8
    li r4, 0x3
    bl fn_804B50C0
lbl_fn_804D25D4_00003D48:
    mr r3, r24
    bl fn_804DA39C
    bl fn_804D5FCC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003D78
    bl fn_804D5FCC
    bl fn_804D65B0
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00003D78
    bl fn_804D5FCC
    li r4, 0x3
    bl fn_804C35F0
lbl_fn_804D25D4_00003D78:
    mr r3, r24
    li r4, 0x96
    bl fn_804D6388
    b lbl_fn_804D25D4_0000414C
    mr r3, r24
    bl fn_804D6394
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_0000414C
    addis r4, r24, 0x1
    lwz r0, -0x6680(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_00003EAC
    lwz r0, -0x6684(r4)
    li r3, 0x1
    stw r3, -0x6680(r4)
    cmpwi r0, 0x1
    bne lbl_fn_804D25D4_00003DC8
    mr r3, r24
    bl fn_804E4490
    b lbl_fn_804D25D4_00003DE8
lbl_fn_804D25D4_00003DC8:
    bl fn_804D1698
    bl fn_804D6028
    bl fn_8050EAEC
    bl fn_804D1698
    bl fn_804D6028
    bl fn_804D6024
    li r4, 0x9f0
    bl fn_804F7EF4
lbl_fn_804D25D4_00003DE8:
    bl fn_804814F0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003E74
    lwz r0, 0x2b84(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00003E08
    cmpwi r0, 0x3
    bne lbl_fn_804D25D4_00003E28
lbl_fn_804D25D4_00003E08:
    bl fn_804814F0
    lfs f1, lbl_808875D4
    li r4, 0x8cb
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00003E74
lbl_fn_804D25D4_00003E28:
    cmpwi r0, 0x1
    beq lbl_fn_804D25D4_00003E38
    cmpwi r0, 0x4
    bne lbl_fn_804D25D4_00003E58
lbl_fn_804D25D4_00003E38:
    bl fn_804814F0
    lfs f1, lbl_808875D4
    li r4, 0x3f5
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00003E74
lbl_fn_804D25D4_00003E58:
    bl fn_804814F0
    lfs f1, lbl_808875D4
    li r4, 0x1f6
    li r5, 0xf
    li r6, 0x1
    li r7, 0x21fc
    bl fn_8037D4C0
lbl_fn_804D25D4_00003E74:
    bl fn_804D5FD4
    bl fn_804C5E1C
    bl fn_804D5FD4
    addis r5, r24, 0x1
    lis r4, 0x8889
    lwz r0, -0x6660(r5)
    subi r4, r4, 0x7777
    mulhw r4, r4, r0
    add r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r4, r0, r4
    addi r4, r4, 0x1
    bl fn_804C6888
lbl_fn_804D25D4_00003EAC:
    mr r3, r24
    li r4, 0x5
    bl fn_804D6010
    b lbl_fn_804D25D4_0000414C
    li r25, 0x0
    bl fn_800F7F90
    addis r3, r3, 0x1
    stb r25, -0x6664(r3)
    bl fn_804D5FD4
    bl fn_804C8204
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_0000414C
    bl fn_804D5FD4
    bl fn_804D65C4
    addis r4, r24, 0x1
    mr r25, r3
    lwz r3, -0x6660(r4)
    subi r0, r3, 0x1
    stw r0, -0x6660(r4)
    bl fn_804D5FD4
    addis r5, r24, 0x1
    lis r4, 0x8889
    lwz r0, -0x6660(r5)
    subi r4, r4, 0x7777
    mulhw r4, r4, r0
    add r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r4, r0, r4
    addi r4, r4, 0x1
    bl fn_804C6888
    addis r3, r24, 0x1
    lwz r3, -0x6660(r3)
    cmpwi r3, 0x2ee
    bge lbl_fn_804D25D4_0000414C
    cmpwi r25, 0x7
    beq lbl_fn_804D25D4_00003FC0
    subi r0, r25, 0x5
    cmplwi r0, 0x1
    bgt lbl_fn_804D25D4_00003FC0
    bl fn_804D5FD4
    li r4, 0x0
    bl fn_804D65A8
    li r20, 0x0
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003F7C
    li r20, 0x1
    b lbl_fn_804D25D4_00003F90
lbl_fn_804D25D4_00003F7C:
    addis r3, r24, 0x1
    lwz r0, -0x6660(r3)
    cmpwi r0, 0x1c2
    bge lbl_fn_804D25D4_00003F90
    li r20, 0x1
lbl_fn_804D25D4_00003F90:
    cmplwi r20, 0x1
    bne lbl_fn_804D25D4_0000414C
    addis r3, r24, 0x1
    li r0, 0x1c2
    stw r0, -0x6660(r3)
    bl fn_804D5FD4
    li r4, 0x7
    bl fn_804C5E9C
    bl fn_804D5FD4
    li r4, 0x1
    bl fn_804D65A8
    b lbl_fn_804D25D4_0000414C
lbl_fn_804D25D4_00003FC0:
    cmpwi r3, 0x168
    bge lbl_fn_804D25D4_0000414C
    bl fn_804D5FCC
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00003FE4
    bl fn_804D5FCC
    bl fn_804D65B0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004098
lbl_fn_804D25D4_00003FE4:
    cmpwi r25, 0x6
    beq lbl_fn_804D25D4_00004098
    cmpwi r25, 0x5
    beq lbl_fn_804D25D4_00004098
    addis r3, r24, 0x1
    lwz r0, -0x6660(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804D25D4_0000401C
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004098
lbl_fn_804D25D4_0000401C:
    mr r3, r24
    bl fn_8037308C
    lwz r0, 0x6b08(r3)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00004078
    mr r3, r24
    li r4, 0x6
    bl fn_804D6010
    lwz r4, 0x6b00(r25)
    mr r3, r24
    lwz r5, 0x6b0c(r25)
    lwz r6, 0x6b10(r25)
    bl fn_804D9BF8
    bl fn_804D5FD4
    li r4, 0x8
    bl fn_804C5E9C
    bl fn_804D5FD4
    lwz r4, 0x6b00(r25)
    li r5, -0x1
    li r6, 0x0
    bl fn_804C7C34
    b lbl_fn_804D25D4_00004098
lbl_fn_804D25D4_00004078:
    mr r3, r24
    li r4, 0x7
    bl fn_804D6010
    mr r3, r24
    bl fn_804E49A8
    bl fn_804D5FD4
    li r4, 0x9
    bl fn_804C5E9C
lbl_fn_804D25D4_00004098:
    bl fn_804D5FD4
    li r4, 0x0
    bl fn_804D65A8
    b lbl_fn_804D25D4_0000414C
    bl fn_804D5FD4
    bl fn_804D65CC
    cmplwi r3, 0x1
    bne lbl_fn_804D25D4_0000414C
    mr r3, r24
    li r4, 0x7
    bl fn_804D6010
    mr r3, r24
    bl fn_804E49A8
    bl fn_804D5FD4
    li r4, 0x9
    bl fn_804C5E9C
    b lbl_fn_804D25D4_0000414C
    lwz r3, 0x514(r24)
    bl fn_8050284C
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_0000414C
    bl fn_804D5FD4
    bl fn_804D65C4
    cmpwi r3, 0x9
    bne lbl_fn_804D25D4_0000410C
    bl fn_804D5FD4
    li r4, 0xa
    bl fn_804C5E9C
    b lbl_fn_804D25D4_0000414C
lbl_fn_804D25D4_0000410C:
    cmpwi r3, 0xc
    bne lbl_fn_804D25D4_0000414C
    addi r3, r24, 0x4fc
    li r4, 0x1f
    bl fn_804D16A0
    addis r3, r24, 0x1
    li r0, 0x1
    stb r0, -0x6618(r3)
    mr r3, r24
    li r4, 0x0
    bl fn_804D6010
    bl fn_804D5FD4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000414C
    bl fn_804D5FD4
    bl fn_800D2338
lbl_fn_804D25D4_0000414C:
    mr r3, r24
    bl fn_804E5BC8
    mr r3, r24
    bl fn_804FB554
    b lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0x21
    bl fn_804D16A0
    bl fn_804D16D8
    li r4, 0x4
    bl fn_804B50C0
    bl fn_804D16D8
    bl fn_804B691C
    bl fn_804D16D8
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_804D25D4_00004898
    addis r3, r24, 0x1
    lwz r3, -0x668c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000041B0
    bl fn_800D2338
    addis r3, r24, 0x1
    li r0, 0x0
    stw r0, -0x668c(r3)
lbl_fn_804D25D4_000041B0:
    bl fn_804D1698
    bl fn_80509C8C
    addis r3, r24, 0x1
    lbz r0, -0x6618(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_000041D8
    mr r3, r24
    li r4, 0x1
    bl fn_804DF120
    b lbl_fn_804D25D4_000041E4
lbl_fn_804D25D4_000041D8:
    mr r3, r24
    li r4, 0x0
    bl fn_804DF120
lbl_fn_804D25D4_000041E4:
    lwz r0, 0x540(r24)
    cmpwi r0, 0x2
    bne lbl_fn_804D25D4_00004200
    mr r3, r24
    li r4, -0x1
    li r5, 0x0
    bl fn_804EA60C
lbl_fn_804D25D4_00004200:
    bl fn_804D0164
    addis r3, r24, 0x1
    lbz r0, -0x6618(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_00004220
    mr r3, r24
    li r4, 0x0
    bl fn_804DBD0C
lbl_fn_804D25D4_00004220:
    addi r3, r24, 0x4fc
    li r4, 0x22
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
    bl fn_800F7FA0
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000046D8
    addis r3, r24, 0x1
    subi r3, r3, 0x6698
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000046D8
    mr r3, r24
    li r4, 0x240
    li r5, 0x480
    li r6, 0x8
    li r7, 0x180
    bl fn_80239798
    bl fn_800F7FA0
    mr r4, r24
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    addis r4, r24, 0x1
    li r5, 0x0
    li r6, 0x1
    subi r4, r4, 0x6698
    bl fn_8026607C
    addis r3, r24, 0x1
    lbz r0, -0x6618(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_000042D4
    mr r3, r24
    li r4, 0x0
    bl fn_804DC454
    bl fn_804D16D0
    li r4, 0x9
    bl fn_804AF520
    bl fn_804D16D0
    bl fn_804D6018
    bl fn_804D16D0
    li r4, 0xf
    bl fn_804D60F0
    li r25, 0xa
    b lbl_fn_804D25D4_000045A8
lbl_fn_804D25D4_000042D4:
    mr r3, r24
    li r25, 0xc
    li r4, 0x0
    bl fn_804D6010
    mr r3, r24
    bl fn_804DC35C
    bl fn_804D16D0
    bl fn_804D6018
    bl fn_804D16D0
    li r4, 0xf
    bl fn_804D60F0
    li r4, 0x0
    addi r8, r24, 0x4
    addis r3, r4, 0x1
    li r27, 0x0
    subi r6, r3, 0x658c
    addis r5, r24, 0x1
    stbx r4, r24, r6
    li r4, 0x1
    addis r3, r4, 0x1
    li r0, -0x1
    subi r6, r3, 0x658c
    li r4, 0x2
    addis r3, r4, 0x1
    stbx r27, r24, r6
    subi r6, r3, 0x658c
    mr r4, r5
    stbx r27, r24, r6
    mr r7, r8
    mr r3, r5
    mr r6, r8
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    li r20, 0x0
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    li r26, 0x2
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    addi r8, r8, 0x4
    stw r0, -0x660c(r5)
    addis r5, r8, 0x1
    stw r0, -0x660c(r5)
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    addi r7, r7, 0x4
    stw r0, -0x65ec(r4)
    addis r4, r7, 0x1
    stw r0, -0x65ec(r4)
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    addi r6, r6, 0x4
    stw r0, -0x65cc(r3)
    addis r3, r6, 0x1
    stw r0, -0x65cc(r3)
    b lbl_fn_804D25D4_000044F8
lbl_fn_804D25D4_00004458:
    mr r4, r20
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    rlwimi r0, r27, 28, 3, 3
    stw r0, 0xd0(r3)
    mr r4, r20
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    stb r27, 0xd53(r3)
    mr r3, r24
    mr r4, r20
    bl fn_804EB3D0
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000044A4
    mr r4, r20
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    bl fn_804D1F70
lbl_fn_804D25D4_000044A4:
    mr r4, r20
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    rlwimi r0, r26, 10, 20, 21
    stw r0, 0xd0(r3)
    mr r3, r24
    bl fn_804D63D4
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_000044F4
    bl fn_804D1698
    bl fn_804D6214
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000044F4
    mr r4, r20
    addi r3, r24, 0x5e4
    bl fn_804D5F4C
    lwz r0, 0xd0(r3)
    rlwimi r0, r27, 22, 6, 9
    stw r0, 0xd0(r3)
lbl_fn_804D25D4_000044F4:
    addi r20, r20, 0x1
lbl_fn_804D25D4_000044F8:
    addi r3, r24, 0x5e4
    bl fn_804D5F44
    cmpw r20, r3
    blt lbl_fn_804D25D4_00004458
    mr r3, r24
    bl fn_804EB874
    lwz r4, 0xd4(r3)
    mr r20, r3
    lwz r0, 0xd0(r3)
    rlwimi r0, r4, 0, 6, 9
    stw r0, 0xd0(r3)
    lwz r0, 0xd8(r3)
    stw r0, 0xb0(r3)
    mr r3, r24
    bl fn_804EB1B0
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00004568
    lwz r4, 0xd8(r20)
    mr r3, r24
    li r5, 0x0
    bl fn_804FA94C
    lwz r0, 0xd0(r20)
    mr r3, r24
    mr r5, r20
    li r6, 0x0
    extrwi r4, r0, 4, 6
    li r7, 0x1
    bl fn_804FAB44
lbl_fn_804D25D4_00004568:
    addis r3, r24, 0x1
    li r4, 0x0
    li r5, 0x8
    subi r3, r3, 0x667c
    bl memset
    addis r3, r24, 0x1
    li r4, 0xff
    li r5, 0x8
    subi r3, r3, 0x6674
    bl memset
    bl fn_804D1698
    li r4, 0x0
    bl fn_8050A3D4
    bl fn_804D16D0
    li r4, 0xd
    bl fn_804AF520
lbl_fn_804D25D4_000045A8:
    lfs f1, lbl_80887570
    addi r3, r1, 0x30
    lfs f2, lbl_808875C0
    fmr f3, f1
    bl fn_8000D114
    mr r4, r3
    addis r3, r24, 0x1
    subi r3, r3, 0x688c
    bl fn_80114AA0
    lfs f1, lbl_80887570
    addi r3, r1, 0x24
    lfs f2, lbl_808875C0
    lfs f3, lbl_808875C4
    bl fn_8000D114
    mr r4, r3
    addis r3, r24, 0x1
    subi r3, r3, 0x688c
    bl fn_80112960
    lfs f1, lbl_808875D8
    bl fn_801125F8
    addis r3, r24, 0x1
    subi r3, r3, 0x688c
    bl fn_8037F688
    bl fn_804814F0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_0000462C
    bl fn_804814F0
    lfs f1, lbl_808875D0
    li r4, 0x548
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_804D25D4_0000462C:
    addis r3, r24, 0x1
    lbz r0, -0x6610(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00004654
    lbz r0, -0x660f(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00004654
    lbz r0, -0x660e(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_00004690
lbl_fn_804D25D4_00004654:
    mr r3, r24
    bl fn_804EAFD4
    cmpwi r3, 0x1
    ble lbl_fn_804D25D4_00004690
    mr r3, r24
    li r4, 0x9d
    li r5, 0x16
    bl fn_804FB474
    bl fn_804D16D0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000046D8
    bl fn_804D16D0
    li r4, 0x4
    bl fn_804D65D8
    b lbl_fn_804D25D4_000046D8
lbl_fn_804D25D4_00004690:
    addis r3, r24, 0x1
    lbz r0, -0x660d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_000046CC
    mr r3, r24
    li r4, 0x9f
    li r5, 0x16
    bl fn_804FB474
    bl fn_804D16D0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_000046D8
    bl fn_804D16D0
    li r4, 0x4
    bl fn_804D65D8
    b lbl_fn_804D25D4_000046D8
lbl_fn_804D25D4_000046CC:
    mr r4, r25
    addi r3, r24, 0x4fc
    bl fn_804D16A0
lbl_fn_804D25D4_000046D8:
    mr r3, r24
    bl fn_804E9364
    b lbl_fn_804D25D4_00004898
    bl fn_804D6684
    li r4, 0x3
    bl fn_8050C844
    cmpwi r3, 0x1
    bne lbl_fn_804D25D4_00004734
    bl fn_804D1698
    bl fn_804D6028
    mr r20, r3
    bl fn_804D604C
    mr r26, r3
    mr r3, r20
    bl fn_804D60E8
    mr r25, r3
    bl fn_804D6684
    lwz r5, 0x8(r26)
    mr r6, r25
    li r4, 0x0
    li r7, 0x20
    bl fn_8050CCD4
    b lbl_fn_804D25D4_00004740
lbl_fn_804D25D4_00004734:
    bl fn_804D6684
    li r4, 0x5
    bl fn_804D65E0
lbl_fn_804D25D4_00004740:
    addi r3, r24, 0x4fc
    li r4, 0x24
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
    bl fn_804D6684
    bl fn_804D5FA4
    cmpwi r3, 0x5
    bne lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0x25
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0x27
    bl fn_804D16A0
    bl fn_804D16D0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004898
    bl fn_804D16D0
    bl fn_804D6648
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000047A8
    addi r3, r24, 0x4fc
    li r4, 0x27
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_000047A8:
    bl fn_804D16D0
    bl fn_804D6648
    cmpwi r3, 0x2
    bne lbl_fn_804D25D4_000047C8
    addi r3, r24, 0x4fc
    li r4, 0x28
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
lbl_fn_804D25D4_000047C8:
    addi r3, r24, 0x4fc
    li r4, 0x26
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    bl fn_804D5F08
    cmpwi r3, 0x26
    bne lbl_fn_804D25D4_0000480C
    bl fn_804D6684
    addis r4, r24, 0x1
    lis r7, fn_804F60E4@ha
    lwz r4, -0x68b4(r4)
    addi r7, r7, fn_804F60E4@l
    li r5, 0x1e
    li r6, 0x0
    bl fn_8050C89C
    b lbl_fn_804D25D4_00004860
lbl_fn_804D25D4_0000480C:
    addi r3, r24, 0x4fc
    bl fn_804D5F08
    cmpwi r3, 0x28
    bne lbl_fn_804D25D4_00004840
    bl fn_804D6684
    addis r4, r24, 0x1
    lis r7, fn_804F60E4@ha
    lwz r4, -0x68b4(r4)
    addi r7, r7, fn_804F60E4@l
    li r5, 0x41
    li r6, 0x0
    bl fn_8050CB28
    b lbl_fn_804D25D4_00004860
lbl_fn_804D25D4_00004840:
    bl fn_804D6684
    addis r4, r24, 0x1
    lis r7, fn_804F60E4@ha
    lwz r4, -0x68b4(r4)
    addi r7, r7, fn_804F60E4@l
    li r5, 0x1e
    li r6, 0x0
    bl fn_8050C9D8
lbl_fn_804D25D4_00004860:
    addi r3, r24, 0x4fc
    li r4, 0x29
    bl fn_804D16A0
    b lbl_fn_804D25D4_00004898
    bl fn_804D6684
    bl fn_804D5FA4
    cmpwi r3, 0x8
    bne lbl_fn_804D25D4_00004898
    addi r3, r24, 0x4fc
    li r4, 0x2a
    bl fn_804D16A0
    bl fn_804D16D0
    li r4, 0x12
    bl fn_804AF520
lbl_fn_804D25D4_00004898:
    addis r3, r24, 0x1
    lwz r0, -0x6894(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_000048D4
    mr r3, r24
    bl fn_804D6650
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000048D4
    addis r3, r24, 0x1
    li r0, 0x0
    stw r0, -0x6894(r3)
    mr r3, r24
    li r4, 0xe6
    li r5, 0x16
    bl fn_804FB474
lbl_fn_804D25D4_000048D4:
    addi r3, r24, 0x2b70
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_000048F4
    addi r3, r24, 0x2b70
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_804D25D4_000048F4:
    lis r3, 0x1b4f
    lwz r4, 0x5cc(r24)
    subi r0, r3, 0x7e4b
    mulhw r0, r0, r4
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x12c
    subf. r0, r0, r4
    bne lbl_fn_804D25D4_00004AD4
    bl fn_804814F0
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004AD4
    bl fn_804814F0
    bl fn_804D6668
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00004AD4
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, 0x7
    blt lbl_fn_804D25D4_00004958
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, 0xb
    ble lbl_fn_804D25D4_000049A4
lbl_fn_804D25D4_00004958:
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, 0xc
    bne lbl_fn_804D25D4_00004984
    bl fn_804D5FC4
    cmpwi r3, 0x0
    beq lbl_fn_804D25D4_00004984
    bl fn_804D5FC4
    bl fn_804D6358
    cmpwi r3, 0x7
    blt lbl_fn_804D25D4_000049A4
lbl_fn_804D25D4_00004984:
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, 0x23
    blt lbl_fn_804D25D4_000049C4
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, 0x2a
    bgt lbl_fn_804D25D4_000049C4
lbl_fn_804D25D4_000049A4:
    bl fn_804814F0
    lfs f1, lbl_808875D0
    li r4, 0x548
    li r5, 0x1e
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00004AD4
lbl_fn_804D25D4_000049C4:
    addi r3, r24, 0x4fc
    bl fn_804D5FAC
    cmpwi r3, 0x1e
    bne lbl_fn_804D25D4_00004AD4
    mr r3, r24
    bl fn_804D63D4
    cmpwi r3, 0x2
    beq lbl_fn_804D25D4_00004AD4
    mr r3, r24
    bl fn_803D6E1C
    cmpwi r3, 0x0
    bne lbl_fn_804D25D4_00004A44
    addis r3, r24, 0x1
    lwz r0, -0x6898(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D25D4_00004A24
    bl fn_804814F0
    lfs f1, lbl_808875D0
    li r4, 0x66
    li r5, 0x1e
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00004AD4
lbl_fn_804D25D4_00004A24:
    bl fn_804814F0
    lfs f1, lbl_80887590
    li r4, 0x8b8
    li r5, 0x1e
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00004AD4
lbl_fn_804D25D4_00004A44:
    mr r3, r24
    bl fn_803D6E1C
    cmpwi r3, 0x5
    bne lbl_fn_804D25D4_00004AD4
    lwz r0, 0x2b84(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804D25D4_00004A68
    cmpwi r0, 0x3
    bne lbl_fn_804D25D4_00004A88
lbl_fn_804D25D4_00004A68:
    bl fn_804814F0
    lfs f1, lbl_808875D4
    li r4, 0x8cb
    li r5, 0x1e
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00004AD4
lbl_fn_804D25D4_00004A88:
    cmpwi r0, 0x1
    beq lbl_fn_804D25D4_00004A98
    cmpwi r0, 0x4
    bne lbl_fn_804D25D4_00004AB8
lbl_fn_804D25D4_00004A98:
    bl fn_804814F0
    lfs f1, lbl_808875D4
    li r4, 0x3f5
    li r5, 0x1e
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    b lbl_fn_804D25D4_00004AD4
lbl_fn_804D25D4_00004AB8:
    bl fn_804814F0
    lfs f1, lbl_808875D4
    li r4, 0x1f6
    li r5, 0x1e
    li r6, 0x1
    li r7, 0x21fc
    bl fn_8037D4C0
lbl_fn_804D25D4_00004AD4:
    lwz r3, 0x5cc(r24)
    addi r0, r3, 0x1
    stw r0, 0x5cc(r24)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    addi r11, r1, 0x1a0
    bl _restgpr_20
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
