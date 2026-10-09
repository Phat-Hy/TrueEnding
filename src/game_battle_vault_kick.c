#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008BBD8(void);
extern void fn_8008CD60(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D3FA4(void);
extern void fn_80206B9C(void);
extern void fn_80211480(void);
extern void fn_802180A8(void);
extern void fn_8021E444(void);
extern void fn_8021E5A4(void);
extern void fn_8021ECD0(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370174(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_8040F9C0(void);
extern void fn_8040F9EC(void);
extern void fn_80445130(void);
extern void fn_80448F9C(void);
extern void fn_8044909C(void);
extern void fn_8044D710(void);
extern void fn_8044D884(void);
extern void fn_8044D9BC(void);
extern void fn_8044E1BC(void);
extern void fn_8044E418(void);
extern void fn_8044E610(void);
extern void fn_8044E644(void);
extern void fn_8044F2D4(void);
extern void fn_8044F434(void);
extern void fn_80450778(void);
extern void fn_80450B84(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805991E4(void);
extern void fn_8059B670(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80752AFC[];
extern u8 lbl_80752B34[];
extern u8 lbl_80752C00[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D598[];
extern u8 lbl_8078D630[];
extern u8 lbl_8078D650[];
extern u8 lbl_807C8898[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4B0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80886388;
extern u32 lbl_8088638C;
extern u32 lbl_80886390;
extern u32 lbl_80886394;
extern u32 lbl_80886398;
extern u32 lbl_8088639C;
extern u32 lbl_808863A0;
extern u32 lbl_808863A4;

/* Function declarations */
void fn_8040DA48(void);
void fn_8040DADC(void);
void fn_8040DC30(void);
void fn_8040DD20(void);
void fn_8040DDE0(void);
void fn_8040DE48(void);
void fn_8040E244(void);
void fn_8040E2B0(void);
void fn_8040E31C(void);
void fn_8040E4E8(void);
void fn_8040E620(void);
void fn_8040EB2C(void);
void fn_8040EBD8(void);
void fn_8040EBE0(void);
void fn_8040EC28(void);
void fn_8040EC30(void);
void fn_8040ED00(void);
void fn_8040EE00(void);
void fn_8040EEB4(void);
void fn_8040EF00(void);
void fn_8040F018(void);

asm void fn_8040DA48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, 0x630(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8040DA48_00000078
    lwz r0, 0x634(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8040DA48_00000078
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8040DA48_0000006C
lbl_fn_8040DA48_00000044:
    lwz r3, lbl_8087F0A8
    lwz r4, 0x60c(r29)
    lwz r0, 0x18(r3)
    add r3, r4, r31
    cmpwi r0, 0x0
    beq lbl_fn_8040DA48_00000064
    addi r3, r3, 0x4
    bl fn_8008CD60
lbl_fn_8040DA48_00000064:
    addi r30, r30, 0x1
    addi r31, r31, 0x434
lbl_fn_8040DA48_0000006C:
    lwz r0, 0x610(r29)
    cmpw r30, r0
    blt lbl_fn_8040DA48_00000044
lbl_fn_8040DA48_00000078:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040DADC(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r27, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r27, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80752AFC@ha
    mr r29, r27
    addi r30, r27, 0x1f5
    addi r31, r31, lbl_80752AFC@l
lbl_fn_8040DADC_00000144:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8040DADC_000001C4
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040DADC_00000184
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r27, 0xf5
    bl strcpy
    b lbl_fn_8040DADC_000001C4
lbl_fn_8040DADC_00000184:
    mr r3, r28
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040DADC_000001C4
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r30
    bl strcpy
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_802180A8
    stw r3, 0x5f8(r29)
    addi r30, r30, 0x100
    addi r29, r29, 0x4
lbl_fn_8040DADC_000001C4:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8040DADC_00000144
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8040DC30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8040DC30_000002B4
    lis r5, lbl_80752B34@ha
    li r3, 0x658
    addi r5, r5, lbl_80752B34@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8040DC30_000002AC
    mr r4, r28
    mr r5, r29
    mr r6, r31
    bl fn_803EC568
    lis r4, lbl_8078D598@ha
    addi r3, r30, 0xf4
    addi r4, r4, lbl_8078D598@l
    stw r4, 0x0(r30)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r30, 0x4c4
    bl fn_80057F28
    addi r3, r30, 0x54c
    bl fn_802377B8
    li r31, 0x0
    stw r31, 0x558(r30)
    li r0, -0x1
    addi r3, r30, 0x560
    stw r0, 0x55c(r30)
    bl fn_8044D710
    li r0, 0x1
    stw r0, 0x654(r30)
    mr r4, r30
    addi r3, r30, 0x560
    stw r31, 0x54(r30)
    bl fn_8044D9BC
lbl_fn_8040DC30_000002AC:
    mr r3, r30
    b lbl_fn_8040DC30_000002B8
lbl_fn_8040DC30_000002B4:
    li r3, 0x0
lbl_fn_8040DC30_000002B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040DD20(void)
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
    beq lbl_fn_8040DD20_00000378
    li r4, -0x1
    addi r3, r3, 0x560
    bl fn_8044D884
    addic. r31, r29, 0x54c
    beq lbl_fn_8040DD20_0000032C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8040DD20_0000032C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8040DD20_0000032C:
    addic. r31, r29, 0x4c4
    beq lbl_fn_8040DD20_00000350
    addic. r3, r31, 0x3c
    beq lbl_fn_8040DD20_00000344
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8040DD20_00000344:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8040DD20_00000350:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8040DD20_00000378
    mr r3, r29
    bl dtor_80084684
lbl_fn_8040DD20_00000378:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040DDE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8040DDE0_000003E8
    mr r3, r31
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8040DDE0_000003E8
    addi r3, r31, 0x560
    bl fn_8044E1BC
    cmpwi r3, 0x0
    bne lbl_fn_8040DDE0_000003E8
    li r0, 0x1
    stw r0, 0x54(r31)
    li r3, 0x1
    b lbl_fn_8040DDE0_000003EC
lbl_fn_8040DDE0_000003E8:
    li r3, 0x0
lbl_fn_8040DDE0_000003EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040DE48(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8040DE48_0000043C
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_8040DE48_000004DC
lbl_fn_8040DE48_0000043C:
    cmpwi r0, 0x2
    bne lbl_fn_8040DE48_000004DC
    lfs f0, lbl_8088638C
    li r0, 0x0
    li r4, 0x3
    stw r4, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8040DE48_00000484
    li r0, 0x5
    stw r0, 0x68(r1)
lbl_fn_8040DE48_00000484:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x68
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040DE48_000004DC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8040DE48_000004DC:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8040DE48_00000504
    cmpwi r0, 0x4
    beq lbl_fn_8040DE48_00000504
    cmpwi r0, 0x3
    beq lbl_fn_8040DE48_00000510
    cmpwi r0, 0x5
    beq lbl_fn_8040DE48_00000620
    b lbl_fn_8040DE48_00000728
lbl_fn_8040DE48_00000504:
    addi r3, r31, 0x560
    bl fn_8044F434
    b lbl_fn_8040DE48_00000728
lbl_fn_8040DE48_00000510:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040DE48_0000054C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8040DE48_0000054C:
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8040DE48_00000728
    addi r3, r31, 0x560
    bl fn_8044E610
    cmpwi r3, 0x0
    beq lbl_fn_8040DE48_0000059C
    lwz r0, 0x654(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8040DE48_00000590
    addi r3, r31, 0x560
    bl fn_8044E644
    b lbl_fn_8040DE48_00000728
lbl_fn_8040DE48_00000590:
    addi r3, r31, 0x560
    bl fn_8044F2D4
    b lbl_fn_8040DE48_00000728
lbl_fn_8040DE48_0000059C:
    lwz r4, 0x564(r31)
    li r0, 0x1
    li r3, 0x0
    cmpwi r4, 0x3
    blt lbl_fn_8040DE48_000005BC
    cmpwi r4, 0x5
    bge lbl_fn_8040DE48_000005BC
    li r3, 0x1
lbl_fn_8040DE48_000005BC:
    cmpwi r3, 0x0
    bne lbl_fn_8040DE48_000005D0
    cmpwi r4, 0x7
    beq lbl_fn_8040DE48_000005D0
    li r0, 0x0
lbl_fn_8040DE48_000005D0:
    cmpwi r0, 0x0
    bne lbl_fn_8040DE48_00000728
    lfs f0, lbl_8088638C
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x48(r1)
    mr r3, r31
    addi r4, r1, 0x48
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_8040DE48_00000728
lbl_fn_8040DE48_00000620:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040DE48_0000065C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8040DE48_0000065C:
    addi r3, r31, 0xf4
    li r4, 0x1
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8040DE48_000006D4
    lfs f31, 0x328(r31)
    addi r3, r31, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8040DE48_00000728
    lfs f0, lbl_8088638C
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x28(r1)
    mr r3, r31
    addi r4, r1, 0x28
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_8040DE48_00000728
lbl_fn_8040DE48_000006D4:
    lfs f7, 0x328(r31)
    lfs f0, lbl_8088638C
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8040DE48_00000728
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8040DE48_00000728:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040DE48_00000768
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8040DE48_00000768:
    addi r3, r31, 0x4c4
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r0, 0x54(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8040DE48_000007BC
    lwz r0, 0x4cc(r31)
    ori r0, r0, 0x1
    stw r0, 0x4cc(r31)
    b lbl_fn_8040DE48_000007C8
lbl_fn_8040DE48_000007BC:
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
lbl_fn_8040DE48_000007C8:
    lwz r3, 0x54(r31)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_8040DE48_000007E0
    addi r3, r31, 0x560
    bl fn_8044F434
lbl_fn_8040DE48_000007E0:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8040E244(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8040E244_00000854
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040E244_00000854
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_8040E244_00000854:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040E2B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8040E2B0_000008B4
    addi r3, r30, 0x4c4
    bl fn_800580BC
    cmpwi r3, 0x0
    bne lbl_fn_8040E2B0_000008B4
    addi r3, r30, 0x54c
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8040E2B0_000008B8
lbl_fn_8040E2B0_000008B4:
    li r31, 0x1
lbl_fn_8040E2B0_000008B8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040E31C(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r31, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80752B34@ha
    addi r31, r31, lbl_80752B34@l
lbl_fn_8040E31C_00000984:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8040E31C_00000A74
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040E31C_000009D8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0xf4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_8040E31C_00000A74
lbl_fn_8040E31C_000009D8:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040E31C_00000A20
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0xf4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_8040E31C_00000A74
lbl_fn_8040E31C_00000A20:
    mr r3, r30
    addi r4, r31, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040E31C_00000A4C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x4c4
    bl fn_80058078
    b lbl_fn_8040E31C_00000A74
lbl_fn_8040E31C_00000A4C:
    mr r3, r30
    addi r4, r31, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8040E31C_00000A74
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x54c
    bl fn_8023780C
lbl_fn_8040E31C_00000A74:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8040E31C_00000984
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_8040E4E8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040E4E8_00000AF0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8040E4E8_00000AF0:
    addi r3, r31, 0x4c4
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r0, 0x54(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8040E4E8_00000B44
    lwz r0, 0x4cc(r31)
    ori r0, r0, 0x1
    stw r0, 0x4cc(r31)
    b lbl_fn_8040E4E8_00000B50
lbl_fn_8040E4E8_00000B44:
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
lbl_fn_8040E4E8_00000B50:
    lwz r3, lbl_8087F430
    li r0, 0x0
    lfs f0, lbl_8088638C
    li r4, 0x1
    cmpwi r3, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    beq lbl_fn_8040E4E8_00000BAC
    lwz r4, 0x558(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8040E4E8_00000BAC
    lwz r4, 0xc(r4)
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8040E4E8_00000BAC
    li r0, 0x4
    stw r0, 0x8(r1)
lbl_fn_8040E4E8_00000BAC:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8040E620(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    bne lbl_fn_8040E620_00000C04
    li r3, 0x0
    b lbl_fn_8040E620_000010CC
lbl_fn_8040E620_00000C04:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8040E620_00000C34
    cmpwi r0, 0x1
    beq lbl_fn_8040E620_00000C48
    cmpwi r0, 0x3
    beq lbl_fn_8040E620_00000D88
    cmpwi r0, 0x4
    beq lbl_fn_8040E620_00000F88
    cmpwi r0, 0x5
    beq lbl_fn_8040E620_00001018
    b lbl_fn_8040E620_000010B0
lbl_fn_8040E620_00000C34:
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_8040E620_000010C4
lbl_fn_8040E620_00000C48:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lwz r5, lbl_8087F3C0
    li r29, 0x1
    mr r3, r30
    li r4, 0x0
    stw r29, 0xb8(r5)
    bl fn_80232B7C
    lfs f0, lbl_8088638C
    li r0, -0x1
    lfs f1, lbl_80886390
    addi r4, r30, 0x54c
    stfs f0, 0x28(r1)
    addi r5, r30, 0xf4
    addi r7, r1, 0x1c
    addi r8, r1, 0x28
    stfs f0, 0x2c(r1)
    addi r9, r1, 0x38
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r5, lbl_8087F3C0
    li r0, 0x0
    addi r3, r30, 0xf4
    li r4, 0x2
    stw r0, 0xb8(r5)
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_00000D1C
    lfs f1, lbl_80886390
    addi r3, r30, 0xf4
    lfs f2, lbl_80886394
    li r4, 0x0
    li r5, 0x2
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8040E620_00000D40
lbl_fn_8040E620_00000D1C:
    lfs f1, lbl_80886390
    addi r3, r30, 0xf4
    lfs f2, lbl_80886394
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8040E620_00000D40:
    lfs f0, lbl_80886390
    mr r3, r30
    stfs f0, 0x32c(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_000010C4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED5D0
    b lbl_fn_8040E620_000010C4
lbl_fn_8040E620_00000D88:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lfs f1, lbl_80886390
    addi r3, r30, 0xf4
    lfs f2, lbl_80886394
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80886390
    addi r3, r1, 0x10
    stfs f1, 0x32c(r30)
    addi r5, r30, 0x6c
    lwz r4, lbl_80886388
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r29, 0x0
    stw r29, 0x18(r1)
    li r28, 0x0
    stw r29, 0x14(r1)
    lwz r3, 0x558(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_00000E14
    lwz r3, 0x8(r3)
    bl fn_8021E444
    mr r29, r3
lbl_fn_8040E620_00000E14:
    cmpwi r29, 0x0
    beq lbl_fn_8040E620_00000EA8
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_00000E34
    bl fn_8044909C
    mr r0, r3
    b lbl_fn_8040E620_00000E38
lbl_fn_8040E620_00000E34:
    li r0, 0x0
lbl_fn_8040E620_00000E38:
    mr r3, r29
    ori r4, r0, 0x1
    bl fn_8021E5A4
    cmpwi r3, 0x0
    stw r3, 0x55c(r30)
    blt lbl_fn_8040E620_00000EA8
    mulli r0, r3, 0xc
    lwz r3, 0x4(r29)
    li r4, 0x0
    li r5, 0x1
    lwzux r0, r3, r0
    stw r0, 0x18(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x14(r1)
    lwz r3, 0x558(r30)
    lwz r3, 0x8(r3)
    bl fn_80450B84
    stw r3, 0x654(r30)
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_00000E9C
    addi r4, r1, 0x18
    addi r5, r1, 0x14
    li r6, 0x1
    bl fn_80445130
lbl_fn_8040E620_00000E9C:
    lwz r3, 0x18(r1)
    bl fn_80211480
    mr r28, r3
lbl_fn_8040E620_00000EA8:
    cmpwi r28, 0x0
    beq lbl_fn_8040E620_000010C4
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    ble lbl_fn_8040E620_000010C4
    lwz r3, 0x18(r1)
    li r27, 0x1
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_00000F14
    lwz r3, lbl_8087F4F0
    li r27, 0x0
    lwz r4, 0x18(r1)
    bl fn_80448F9C
    mr r29, r3
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpw r29, r0
    ble lbl_fn_8040E620_00000F14
    li r27, 0x1
lbl_fn_8040E620_00000F14:
    lwz r3, 0x558(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_00000F28
    lwz r10, 0x8(r3)
    b lbl_fn_8040E620_00000F2C
lbl_fn_8040E620_00000F28:
    li r10, 0x0
lbl_fn_8040E620_00000F2C:
    lfs f4, lbl_8088638C
    mr r7, r28
    lfs f3, lbl_80886398
    mr r9, r27
    lfs f2, 0x74(r30)
    addi r3, r30, 0x560
    lfs f1, 0x70(r30)
    addi r4, r1, 0x54
    lfs f0, 0x6c(r30)
    fadds f2, f2, f4
    fadds f1, f1, f3
    stfs f4, 0x48(r1)
    fadds f0, f0, f4
    lwz r8, 0x14(r1)
    stfs f3, 0x4c(r1)
    li r5, 0x1e
    stfs f4, 0x50(r1)
    li r6, 0xf
    stfs f0, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f2, 0x5c(r1)
    bl fn_8044E418
    b lbl_fn_8040E620_000010C4
lbl_fn_8040E620_00000F88:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    lfs f1, lbl_80886390
    addi r3, r30, 0xf4
    lfs f2, lbl_80886394
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    addi r3, r30, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80886390
    mr r3, r30
    stfs f1, 0x328(r30)
    stfs f0, 0x32c(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_000010C4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_803ED5D0
    b lbl_fn_8040E620_000010C4
lbl_fn_8040E620_00001018:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r30, 0xf4
    li r4, 0x1
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8040E620_00001070
    lfs f1, lbl_80886390
    addi r3, r30, 0xf4
    lfs f2, lbl_80886394
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80886390
    stfs f0, 0x32c(r30)
    b lbl_fn_8040E620_000010C4
lbl_fn_8040E620_00001070:
    lfs f1, lbl_80886390
    addi r3, r30, 0xf4
    lfs f2, lbl_80886394
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    addi r3, r30, 0xf4
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088639C
    stfs f1, 0x328(r30)
    stfs f0, 0x32c(r30)
    b lbl_fn_8040E620_000010C4
lbl_fn_8040E620_000010B0:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8040E620_000010C4:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_8040E620_000010CC:
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8040EB2C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_8088638C
    li r5, 0x0
    stw r0, 0x34(r1)
    subi r0, r4, 0x2
    cmplwi r0, 0x2
    stw r31, 0x2c(r1)
    li r0, 0x1
    mr r31, r3
    stw r0, 0x8(r1)
    stw r5, 0xc(r1)
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    ble lbl_fn_8040EB2C_0000113C
    cmpwi r4, 0x6
    beq lbl_fn_8040EB2C_00001148
    b lbl_fn_8040EB2C_00001150
lbl_fn_8040EB2C_0000113C:
    li r0, 0x4
    stw r0, 0x8(r1)
    b lbl_fn_8040EB2C_00001150
lbl_fn_8040EB2C_00001148:
    li r0, 0x6
    stw r0, 0x8(r1)
lbl_fn_8040EB2C_00001150:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8040EB2C_0000117C
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_8040EB2C_0000117C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8040EBD8(void)
{
    nofralloc
    lwz r3, 0x55c(r3)
    blr
}

asm void fn_8040EBE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bne lbl_fn_8040EBE0_000011C4
    mr r3, r5
    bl fn_8021ECD0
    stw r3, 0x558(r31)
    b lbl_fn_8040EBE0_000011CC
lbl_fn_8040EBE0_000011C4:
    addi r3, r3, 0x560
    bl fn_80450778
lbl_fn_8040EBE0_000011CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040EC28(void)
{
    nofralloc
    addi r3, r3, 0xf4
    blr
}

asm void fn_8040EC30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8040EC30_00001294
    lis r5, lbl_80752C00@ha
    li r3, 0x568
    addi r5, r5, lbl_80752C00@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8040EC30_0000128C
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_803EC568
    lis r4, lbl_8078D650@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078D650@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x4c4
    bl fn_80057F28
    addi r3, r31, 0x54c
    bl fn_802377B8
    li r0, 0x0
    stw r0, 0x558(r31)
    stw r0, 0x55c(r31)
    stw r0, 0x54(r31)
lbl_fn_8040EC30_0000128C:
    mr r3, r31
    b lbl_fn_8040EC30_00001298
lbl_fn_8040EC30_00001294:
    li r3, 0x0
lbl_fn_8040EC30_00001298:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040ED00(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8040ED00_00001398
    lis r5, lbl_80752C00@ha
    li r3, 0x568
    addi r5, r5, lbl_80752C00@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8040ED00_00001390
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r4, lbl_8078D650@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078D650@l
    stw r4, 0x0(r31)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r31, 0x4c4
    bl fn_80057F28
    addi r3, r31, 0x54c
    bl fn_802377B8
    li r0, 0x0
    stw r0, 0x558(r31)
    lfs f0, lbl_808863A0
    addi r3, r1, 0x8
    stw r0, 0x55c(r31)
    lfs f3, 0x14(r30)
    stw r0, 0x560(r31)
    psq_l f1, 0x4(r30), 0, 0
    stw r0, 0x54(r31)
    lfs f2, 0xc(r30)
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
    fmr f2, f0
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    stfs f0, 0x10(r1)
    stfs f2, 0x80(r31)
lbl_fn_8040ED00_00001390:
    mr r3, r31
    b lbl_fn_8040ED00_0000139C
lbl_fn_8040ED00_00001398:
    li r3, 0x0
lbl_fn_8040ED00_0000139C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8040EE00(void)
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
    beq lbl_fn_8040EE00_0000144C
    addic. r31, r3, 0x54c
    beq lbl_fn_8040EE00_00001400
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8040EE00_00001400
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8040EE00_00001400:
    addic. r31, r29, 0x4c4
    beq lbl_fn_8040EE00_00001424
    addic. r3, r31, 0x3c
    beq lbl_fn_8040EE00_00001418
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8040EE00_00001418:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8040EE00_00001424:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_800971D4
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_8040EE00_0000144C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8040EE00_0000144C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040EEB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8040EEB4_000014A0
    mr r3, r31
    addi r4, r31, 0xf4
    bl fn_803EDB18
    li r3, 0x1
    b lbl_fn_8040EEB4_000014A4
lbl_fn_8040EEB4_000014A0:
    li r3, 0x0
lbl_fn_8040EEB4_000014A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040EF00(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040EF00_0000151C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8040EF00_0000151C:
    addi r3, r31, 0x4c4
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r4, 0x4cc(r31)
    li r3, 0x0
    stw r3, 0x560(r31)
    li r0, 0x2
    ori r4, r4, 0x1
    lfs f0, lbl_808863A0
    stw r4, 0x4cc(r31)
    stw r0, 0x8(r1)
    stw r3, 0xc(r1)
    stw r3, 0x10(r1)
    stw r3, 0x14(r1)
    stw r3, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r0, 0x58(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8040EF00_000015A4
    li r0, 0x1
    stw r0, 0x8(r1)
lbl_fn_8040EF00_000015A4:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8040F018(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stw r31, 0x13c(r1)
    stw r30, 0x138(r1)
    mr r30, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8040F018_00001604
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8040F018_00001604:
    lwz r3, 0x560(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8040F018_00001618
    subi r0, r3, 0x1
    stw r0, 0x560(r30)
lbl_fn_8040F018_00001618:
    lwz r0, 0x54(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8040F018_000018CC
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8040F018_000018CC
    lwz r0, 0x560(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_8040F018_000018CC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040F018_000018CC
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8040F018_000018CC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8040F018_00001678
    lwz r31, 0x48(r3)
    b lbl_fn_8040F018_0000167C
lbl_fn_8040F018_00001678:
    li r31, 0x0
lbl_fn_8040F018_0000167C:
    cmpwi r31, 0x0
    beq lbl_fn_8040F018_000018CC
    lwz r0, 0x558(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8040F018_000018CC
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    beq lbl_fn_8040F018_000018CC
    lbz r0, lbl_8087F4B0
    lis r4, lbl_8078D630@ha
    lwzu r9, lbl_8078D630@l(r4)
    li r3, 0x0
    extsb. r0, r0
    stw r9, 0x68(r1)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r9, 0x38(r1)
    stw r8, 0x3c(r1)
    stw r7, 0x40(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r9, 0x74(r1)
    stw r8, 0x78(r1)
    stw r7, 0x7c(r1)
    stw r9, 0x80(r1)
    stw r8, 0x84(r1)
    stw r7, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r8, 0x90(r1)
    stw r7, 0x94(r1)
    stw r9, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r30, 0x64(r1)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r7, 0x10(r1)
    stw r30, 0x14(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r30, 0x54(r1)
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r30, 0x34(r1)
    stw r9, 0x108(r1)
    stw r8, 0x10c(r1)
    stw r7, 0x110(r1)
    stw r30, 0x114(r1)
    stw r3, 0x118(r1)
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r30, 0xa4(r1)
    bne lbl_fn_8040F018_000017C0
    lis r6, lbl_807C8898@ha
    lis r4, fn_8040F9C0@ha
    lis r3, fn_8040F9EC@ha
    li r0, 0x1
    addi r3, r3, fn_8040F9EC@l
    addi r5, r6, lbl_807C8898@l
    addi r4, r4, fn_8040F9C0@l
    stw r9, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r7, 0x100(r1)
    stw r30, 0x104(r1)
    stw r9, 0xc8(r1)
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r30, 0xd4(r1)
    stw r9, 0xd8(r1)
    stw r8, 0xdc(r1)
    stw r7, 0xe0(r1)
    stw r30, 0xe4(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C8898@l(r6)
    stb r0, lbl_8087F4B0
lbl_fn_8040F018_000017C0:
    lwz r6, 0x28(r1)
    addi r3, r1, 0xa8
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0xe8(r1)
    stw r5, 0xec(r1)
    stw r4, 0xf0(r1)
    stw r0, 0xf4(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r0, 0xb4(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8040F018_00001844
    addic. r0, r1, 0x11c
    lwz r5, 0xa8(r1)
    lwz r4, 0xac(r1)
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r5, 0xb8(r1)
    stw r4, 0xbc(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    beq lbl_fn_8040F018_0000183C
    stw r5, 0x11c(r1)
    stw r4, 0x120(r1)
    stw r3, 0x124(r1)
    stw r0, 0x128(r1)
lbl_fn_8040F018_0000183C:
    li r0, 0x1
    b lbl_fn_8040F018_00001848
lbl_fn_8040F018_00001844:
    li r0, 0x0
lbl_fn_8040F018_00001848:
    cmpwi r0, 0x0
    beq lbl_fn_8040F018_00001860
    lis r3, lbl_807C8898@ha
    addi r3, r3, lbl_807C8898@l
    stw r3, 0x118(r1)
    b lbl_fn_8040F018_00001868
lbl_fn_8040F018_00001860:
    li r0, 0x0
    stw r0, 0x118(r1)
lbl_fn_8040F018_00001868:
    lwz r3, lbl_8087F9E8
    mr r5, r31
    lwz r4, 0x558(r30)
    mr r6, r31
    lfs f1, lbl_808863A4
    addi r7, r30, 0x6c
    addi r8, r30, 0x78
    addi r9, r1, 0x118
    bl fn_8059B670
    addic. r4, r1, 0x118
    stw r3, 0x55c(r30)
    beq lbl_fn_8040F018_000018CC
    lwz r3, 0x118(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8040F018_000018CC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8040F018_000018C4
    addi r3, r4, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8040F018_000018C4:
    li r0, 0x0
    stw r0, 0x118(r1)
lbl_fn_8040F018_000018CC:
    lwz r0, 0x54(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8040F018_000018F4
    lwz r3, 0x55c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8040F018_000018F4
    li r0, 0x0
    stw r0, 0x560(r30)
    beq lbl_fn_8040F018_000018F4
    bl fn_805991E4
lbl_fn_8040F018_000018F4:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8040F018_00001934
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8040F018_00001934:
    addi r3, r30, 0x4c4
    psq_l f1, 0xfc(r30), 0, 0
    psq_l f2, 0x104(r30), 0, 0
    psq_l f3, 0x10c(r30), 0, 0
    psq_l f4, 0x114(r30), 0, 0
    psq_l f5, 0x11c(r30), 0, 0
    psq_l f6, 0x124(r30), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r0, 0x144(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}
