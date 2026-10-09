#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_8060BFB0(void);
extern void fn_8060BFE0(void);
extern void fn_8060C2B0(void);
extern void fn_8060C440(void);
extern void fn_8060C550(void);
extern void fn_8060C600(void);
extern void fn_8060CA80(void);
extern void fn_8060CAB0(void);
extern void fn_8060CCE0(void);
extern void fn_8060CE10(void);
extern void fn_8060CEE0(void);
extern void fn_8060CF70(void);
extern void fn_8060D350(void);
extern void fn_8060D3B0(void);
extern void fn_8060D530(void);
extern void fn_8060D600(void);
extern void fn_8060D6C0(void);
extern void fn_8060D720(void);
extern void fn_8060E080(void);
extern void fn_8060E0E0(void);
extern void fn_8060E280(void);
extern void fn_8060E350(void);
extern void fn_8060E410(void);
extern void fn_8060E470(void);
extern void fn_8060EDF0(void);
extern void fn_8060EE00(void);
extern void fn_8060F060(void);
extern void fn_8060F210(void);
extern void fn_8060F2A0(void);
extern void fn_8060F910(void);
extern void fn_8060F920(void);
extern void fn_8060FBA0(void);
extern void fn_8060FD50(void);
extern void fn_8060FDE0(void);
extern void fn_80619D70(void);
extern void fn_80619E90(void);
extern void fn_80619F30(void);
extern void fn_8061A010(void);
extern void fn_80703F90(void);
extern void fn_80704890(void);
extern void fn_80708AF0(void);
extern void fn_80708B60(void);
extern void fn_80708BB0(void);
extern void fn_80708C10(void);
extern void fn_80710460(void);
extern void fn_807122C0(void);
extern void fn_80712610(void);
extern void fn_80725170(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);

/* External data declarations */
extern u8 lbl_8076CFA0[];
extern u8 lbl_807C5ED8[];
extern u8 lbl_807C5F00[];
extern u8 lbl_807C5F28[];

/* Small data declarations */
extern u32 lbl_808890F0;
extern u32 lbl_808890F4;
extern u32 lbl_808890F8;
extern u32 lbl_808890FC;
extern u32 lbl_80889100;
extern u32 lbl_80889104;
extern u32 lbl_80889108;
extern u32 lbl_8088910C;
extern u32 lbl_80889110;
extern u32 lbl_80889114;
extern u32 lbl_80889118;
extern u32 lbl_8088911C;
extern u32 lbl_80889120;
extern u32 lbl_80889124;
extern u32 lbl_80889128;
extern u32 lbl_8088912C;
extern u32 lbl_80889130;
extern u32 lbl_80889134;
extern u32 lbl_80889138;
extern u32 lbl_8088913C;
extern u32 lbl_80889140;
extern u32 lbl_80889144;
extern u32 lbl_80889148;
extern u32 lbl_80889150;
extern u32 lbl_80889158;
extern u32 lbl_8088915C;
extern u32 lbl_80889160;
extern u32 lbl_80889168;

/* Function declarations */
void pad_03_8070D84C_text(void);
void fn_8070D850(void);
void fn_8070D900(void);
void fn_8070D9D0(void);
void fn_8070DC00(void);
void fn_8070DC10(void);
void fn_8070DC20(void);
void fn_8070DCB0(void);
void fn_8070DCC0(void);
void fn_8070DCD0(void);
void fn_8070DE00(void);
void fn_8070DE80(void);
void fn_8070E080(void);
void fn_8070E120(void);
void fn_8070E190(void);
void fn_8070E220(void);
void fn_8070E230(void);
void fn_8070E240(void);
void fn_8070E370(void);
void fn_8070E3F0(void);
void fn_8070E650(void);
void fn_8070E6F0(void);
void fn_8070E760(void);
void fn_8070E830(void);
void fn_8070E890(void);
void fn_8070E8A0(void);
void fn_8070E8B0(void);
void fn_8070E9E0(void);
void fn_8070EA60(void);
void fn_8070ED80(void);
void fn_8070EE20(void);
void fn_8070EE90(void);
void fn_8070EFE0(void);
void fn_8070F070(void);
void fn_8070F0D0(void);
void fn_8070F130(void);
void fn_8070F180(void);
void fn_8070F1B0(void);
void fn_8070F1D0(void);
void fn_8070F270(void);
void fn_8070F390(void);
void fn_8070F3A0(void);
void fn_8070F3B0(void);
void fn_8070F3C0(void);
void fn_8070F3D0(void);
void fn_8070F3E0(void);
void fn_8070F3F0(void);
void fn_8070F400(void);
void fn_8070F410(void);
void fn_8070F420(void);
void fn_8070F430(void);
void fn_8070F440(void);

asm void pad_03_8070D84C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_8070D850(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    addi r0, r4, 0x1f
    mr r27, r3
    clrrwi r7, r0, 5
    lwz r3, 0x0(r3)
    mr r28, r4
    mr r29, r5
    mr r30, r6
    addi r4, r7, 0x20
    li r5, 0x20
    bl fn_80619D70
    cmpwi r3, 0x0
    bne lbl_fn_8070D850_00000050
    li r3, 0x0
    b lbl_fn_8070D850_00000094
lbl_fn_8070D850_00000050:
    mr r5, r3
    addi r31, r3, 0x20
    beq lbl_fn_8070D850_00000078
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r31, 0x8(r3)
    stw r28, 0xc(r3)
    stw r29, 0x10(r3)
    stw r30, 0x14(r3)
lbl_fn_8070D850_00000078:
    lwz r3, 0xc(r27)
    addi r4, r1, 0x8
    addi r0, r3, 0xc
    stw r0, 0x8(r1)
    addi r3, r3, 0x8
    bl fn_807252A0
    mr r3, r31
lbl_fn_8070D850_00000094:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070D900(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x4(r31)
    bl fn_80619F30
    cmpwi r3, 0x0
    bne lbl_fn_8070D900_000000E4
    li r3, -0x1
    b lbl_fn_8070D900_0000016C
lbl_fn_8070D900_000000E4:
    lwz r3, 0x0(r31)
    li r4, 0x14
    li r5, 0x4
    bl fn_80619D70
    cmpwi r3, 0x0
    bne lbl_fn_8070D900_00000104
    li r0, 0x0
    b lbl_fn_8070D900_00000148
lbl_fn_8070D900_00000104:
    mr r5, r3
    beq lbl_fn_8070D900_00000130
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r4, r3, 0xc
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_fn_8070D900_00000130:
    addi r0, r31, 0x8
    stw r0, 0x8(r1)
    addi r3, r31, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
    li r0, 0x1
lbl_fn_8070D900_00000148:
    cmpwi r0, 0x0
    bne lbl_fn_8070D900_00000164
    lwz r3, 0x0(r31)
    li r4, 0x0
    bl fn_8061A010
    li r3, -0x1
    b lbl_fn_8070D900_0000016C
lbl_fn_8070D900_00000164:
    lwz r3, 0x4(r31)
    subi r3, r3, 0x1
lbl_fn_8070D900_0000016C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070D9D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r31, r3
    mr r27, r4
    bne lbl_fn_8070D9D0_00000298
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070D9D0_00000230
    addi r30, r3, 0x8
    b lbl_fn_8070D9D0_00000224
lbl_fn_8070D9D0_000001BC:
    lwz r28, 0x4(r30)
    cmpwi r28, 0x0
    beq lbl_fn_8070D9D0_00000218
    addi r29, r28, 0xc
    b lbl_fn_8070D9D0_000001FC
lbl_fn_8070D9D0_000001D0:
    lwz r29, 0x4(r29)
    cmpwi r29, 0x0
    beq lbl_fn_8070D9D0_000001FC
    lwz r12, 0x10(r29)
    cmpwi r12, 0x0
    beq lbl_fn_8070D9D0_000001FC
    lwz r3, 0x8(r29)
    lwz r4, 0xc(r29)
    lwz r5, 0x14(r29)
    mtctr r12
    bctrl
lbl_fn_8070D9D0_000001FC:
    lwz r0, 0xc(r28)
    cmplw r29, r0
    bne lbl_fn_8070D9D0_000001D0
    addic. r3, r28, 0x8
    beq lbl_fn_8070D9D0_00000218
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070D9D0_00000218:
    mr r4, r28
    addi r3, r31, 0x4
    bl fn_807252D0
lbl_fn_8070D9D0_00000224:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8070D9D0_000001BC
lbl_fn_8070D9D0_00000230:
    lwz r3, 0x0(r31)
    li r4, 0x3
    bl fn_80619E90
    lwz r3, 0x0(r31)
    li r4, 0x14
    li r5, 0x4
    bl fn_80619D70
    cmpwi r3, 0x0
    beq lbl_fn_8070D9D0_00000390
    mr r5, r3
    beq lbl_fn_8070D9D0_00000280
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r4, r3, 0xc
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_fn_8070D9D0_00000280:
    addi r0, r31, 0x8
    stw r0, 0xc(r1)
    addi r3, r31, 0x4
    addi r4, r1, 0xc
    bl fn_807252A0
    b lbl_fn_8070D9D0_00000390
lbl_fn_8070D9D0_00000298:
    lwz r0, 0x4(r3)
    cmpw r4, r0
    bge lbl_fn_8070D9D0_00000320
    addi r30, r3, 0x8
    b lbl_fn_8070D9D0_00000314
lbl_fn_8070D9D0_000002AC:
    lwz r28, 0x4(r30)
    cmpwi r28, 0x0
    beq lbl_fn_8070D9D0_00000308
    addi r29, r28, 0xc
    b lbl_fn_8070D9D0_000002EC
lbl_fn_8070D9D0_000002C0:
    lwz r29, 0x4(r29)
    cmpwi r29, 0x0
    beq lbl_fn_8070D9D0_000002EC
    lwz r12, 0x10(r29)
    cmpwi r12, 0x0
    beq lbl_fn_8070D9D0_000002EC
    lwz r3, 0x8(r29)
    lwz r4, 0xc(r29)
    lwz r5, 0x14(r29)
    mtctr r12
    bctrl
lbl_fn_8070D9D0_000002EC:
    lwz r0, 0xc(r28)
    cmplw r29, r0
    bne lbl_fn_8070D9D0_000002C0
    addic. r3, r28, 0x8
    beq lbl_fn_8070D9D0_00000308
    li r4, 0x0
    bl fn_80725170
lbl_fn_8070D9D0_00000308:
    mr r4, r28
    addi r3, r31, 0x4
    bl fn_807252D0
lbl_fn_8070D9D0_00000314:
    lwz r0, 0x4(r31)
    cmpw r27, r0
    blt lbl_fn_8070D9D0_000002AC
lbl_fn_8070D9D0_00000320:
    lwz r3, 0x0(r31)
    mr r4, r27
    bl fn_8061A010
    lwz r3, 0x0(r31)
    lwz r4, 0x4(r31)
    bl fn_80619F30
    lwz r3, 0x0(r31)
    li r4, 0x14
    li r5, 0x4
    bl fn_80619D70
    cmpwi r3, 0x0
    beq lbl_fn_8070D9D0_00000390
    mr r5, r3
    beq lbl_fn_8070D9D0_0000037C
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r4, r3, 0xc
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_fn_8070D9D0_0000037C:
    addi r0, r31, 0x8
    stw r0, 0x8(r1)
    addi r3, r31, 0x4
    addi r4, r1, 0x8
    bl fn_807252A0
lbl_fn_8070D9D0_00000390:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070DC00(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    subi r3, r3, 0x1
    blr
}

asm void fn_8070DC10(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x1c(r3)
    subf r3, r3, r0
    blr
}

asm void fn_8070DC20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_807C5ED8@ha
    lfs f1, lbl_808890F8
    stw r0, 0x34(r1)
    li r0, 0x0
    lfs f3, lbl_808890F0
    addi r5, r5, lbl_807C5ED8@l
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f2, lbl_808890F4
    addi r4, r1, 0x8
    lfs f0, lbl_808890FC
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0x0(r3)
    stb r0, 0xc(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f2, 0x20(r3)
    stfs f1, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f1, 0x2c(r3)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_8070DE80
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070DCB0(void)
{
    nofralloc
    addi r3, r3, 0x14
    b fn_80708AF0
}

asm void fn_8070DCC0(void)
{
    nofralloc
    addi r3, r3, 0x14
    b fn_80708B60
}

asm void fn_8070DCD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x30
    bl fn_8060EDF0
    addi r0, r3, 0x87
    addi r3, r30, 0xd0
    clrrwi r31, r0, 5
    bl fn_8060F910
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmplw r3, r31
    bge lbl_fn_8070DCD0_000004C8
    mr r3, r31
lbl_fn_8070DCD0_000004C8:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8070DCD0_000004DC
    li r0, 0x0
    b lbl_fn_8070DCD0_000004E4
lbl_fn_8070DCD0_000004DC:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_fn_8070DCD0_000004E4:
    cmplw r3, r0
    ble lbl_fn_8070DCD0_000004F4
    li r3, 0x0
    b lbl_fn_8070DCD0_00000594
lbl_fn_8070DCD0_000004F4:
    bl fn_80703F90
    bl fn_80704890
    cmpwi r3, 0x2
    bne lbl_fn_8070DCD0_00000544
    li r0, 0x1
    stw r0, 0x10(r30)
    addi r3, r30, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    addi r3, r30, 0xd0
    bl fn_8060F920
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x14
    bl fn_80708C10
    addi r3, r30, 0xd0
    bl fn_8060F910
    b lbl_fn_8070DCD0_00000580
lbl_fn_8070DCD0_00000544:
    li r0, 0x0
    stw r0, 0x10(r30)
    addi r3, r30, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    addi r3, r30, 0x30
    bl fn_8060EE00
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x14
    bl fn_80708C10
    addi r3, r30, 0x30
    bl fn_8060EDF0
lbl_fn_8070DCD0_00000580:
    neg r0, r31
    li r3, 0x1
    or r0, r0, r31
    stb r3, 0xc(r30)
    srwi r3, r0, 31
lbl_fn_8070DCD0_00000594:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070DE00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070DE00_0000061C
    li r0, 0x0
    stb r0, 0xc(r3)
    addi r3, r3, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8070DE00_00000604
    addi r3, r31, 0xd0
    bl fn_8060FD50
    b lbl_fn_8070DE00_0000060C
lbl_fn_8070DE00_00000604:
    addi r3, r31, 0x30
    bl fn_8060F210
lbl_fn_8070DE00_0000060C:
    lwz r4, 0xc(r1)
    addi r3, r31, 0x14
    lwz r5, 0x8(r1)
    bl fn_80708C10
lbl_fn_8070DE00_0000061C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070DE80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f4, 0x0(r4)
    stw r0, 0x14(r1)
    lfs f5, lbl_80889100
    stw r31, 0xc(r1)
    lfs f3, 0x4(r4)
    fcmpo cr0, f4, f5
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, 0x8(r4)
    lfs f1, 0xc(r4)
    lfs f0, 0x10(r4)
    stfs f4, 0x1c(r3)
    stfs f3, 0x20(r3)
    stfs f2, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f0, 0x2c(r3)
    ble lbl_fn_8070DE80_00000684
    b lbl_fn_8070DE80_00000698
lbl_fn_8070DE80_00000684:
    lfs f5, lbl_80889104
    fcmpo cr0, f4, f5
    bge lbl_fn_8070DE80_00000694
    b lbl_fn_8070DE80_00000698
lbl_fn_8070DE80_00000694:
    fmr f5, f4
lbl_fn_8070DE80_00000698:
    lfs f0, 0x4(r4)
    lfs f1, lbl_808890F8
    stfs f5, 0x164(r3)
    fcmpo cr0, f0, f1
    stfs f5, 0xb0(r3)
    ble lbl_fn_8070DE80_000006B4
    b lbl_fn_8070DE80_000006C8
lbl_fn_8070DE80_000006B4:
    lfs f1, lbl_808890FC
    fcmpo cr0, f0, f1
    bge lbl_fn_8070DE80_000006C4
    b lbl_fn_8070DE80_000006C8
lbl_fn_8070DE80_000006C4:
    fmr f1, f0
lbl_fn_8070DE80_000006C8:
    lfs f0, 0x8(r4)
    lfs f2, lbl_80889108
    stfs f1, 0x168(r3)
    fcmpo cr0, f0, f2
    stfs f1, 0xb4(r3)
    ble lbl_fn_8070DE80_000006E4
    b lbl_fn_8070DE80_000006F8
lbl_fn_8070DE80_000006E4:
    lfs f2, lbl_80889104
    fcmpo cr0, f0, f2
    bge lbl_fn_8070DE80_000006F4
    b lbl_fn_8070DE80_000006F8
lbl_fn_8070DE80_000006F4:
    fmr f2, f0
lbl_fn_8070DE80_000006F8:
    lfs f0, 0xc(r4)
    lfs f1, lbl_8088910C
    stfs f2, 0x16c(r3)
    fcmpo cr0, f0, f1
    stfs f2, 0xb8(r3)
    ble lbl_fn_8070DE80_00000714
    b lbl_fn_8070DE80_00000728
lbl_fn_8070DE80_00000714:
    lfs f1, lbl_808890FC
    fcmpo cr0, f0, f1
    bge lbl_fn_8070DE80_00000724
    b lbl_fn_8070DE80_00000728
lbl_fn_8070DE80_00000724:
    fmr f1, f0
lbl_fn_8070DE80_00000728:
    lfs f0, 0x10(r4)
    lfs f2, lbl_808890F8
    stfs f1, 0x170(r3)
    fcmpo cr0, f0, f2
    stfs f1, 0xbc(r3)
    ble lbl_fn_8070DE80_00000744
    b lbl_fn_8070DE80_00000758
lbl_fn_8070DE80_00000744:
    lfs f2, lbl_808890FC
    fcmpo cr0, f0, f2
    bge lbl_fn_8070DE80_00000754
    b lbl_fn_8070DE80_00000758
lbl_fn_8070DE80_00000754:
    fmr f2, f0
lbl_fn_8070DE80_00000758:
    lbz r0, 0xc(r3)
    li r4, 0x0
    lfs f0, lbl_808890FC
    cmpwi r0, 0x0
    stfs f2, 0x17c(r3)
    stfs f2, 0xc8(r3)
    stw r4, 0xc0(r3)
    stw r4, 0xc4(r3)
    stfs f0, 0xcc(r3)
    stw r4, 0x174(r3)
    stw r4, 0x178(r3)
    stfs f0, 0x180(r3)
    bne lbl_fn_8070DE80_00000794
    li r3, 0x1
    b lbl_fn_8070DE80_00000818
lbl_fn_8070DE80_00000794:
    addi r3, r3, 0x30
    bl fn_8060EDF0
    addi r0, r3, 0x87
    addi r3, r30, 0xd0
    clrrwi r31, r0, 5
    bl fn_8060F910
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmplw r3, r31
    bge lbl_fn_8070DE80_000007C0
    mr r3, r31
lbl_fn_8070DE80_000007C0:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8070DE80_000007D4
    li r0, 0x0
    b lbl_fn_8070DE80_000007DC
lbl_fn_8070DE80_000007D4:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_fn_8070DE80_000007DC:
    cmplw r3, r0
    ble lbl_fn_8070DE80_000007EC
    li r3, 0x0
    b lbl_fn_8070DE80_00000818
lbl_fn_8070DE80_000007EC:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8070DE80_00000804
    addi r3, r30, 0xd0
    bl fn_8060FBA0
    b lbl_fn_8070DE80_0000080C
lbl_fn_8070DE80_00000804:
    addi r3, r30, 0x30
    bl fn_8060F060
lbl_fn_8070DE80_0000080C:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8070DE80_00000818:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070E080(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x34(r1)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070E080_000008C4
    subi r0, r8, 0x2
    lwz r3, 0x10(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpw r0, r3
    bne lbl_fn_8070E080_000008C4
    cmpwi r3, 0x1
    bne lbl_fn_8070E080_000008A0
    lwz r0, 0x0(r5)
    addi r3, r1, 0x18
    stw r0, 0x18(r1)
    addi r4, r4, 0xd0
    lwz r0, 0x4(r5)
    stw r0, 0x1c(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x20(r1)
    lwz r0, 0xc(r5)
    stw r0, 0x24(r1)
    bl fn_8060FDE0
    b lbl_fn_8070E080_000008C4
lbl_fn_8070E080_000008A0:
    lwz r0, 0x0(r5)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    addi r4, r4, 0x30
    lwz r0, 0x4(r5)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    bl fn_8060F2A0
lbl_fn_8070E080_000008C4:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070E120(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80703F90
    bl fn_80704890
    subi r3, r3, 0x2
    lwz r0, 0x10(r31)
    cntlzw r3, r3
    srwi r3, r3, 5
    cmpw r0, r3
    beq lbl_fn_8070E120_00000930
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070E120_00000930:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070E190(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_807C5F00@ha
    lfs f2, lbl_80889110
    stw r0, 0x34(r1)
    li r0, 0x0
    lfs f0, lbl_80889118
    addi r5, r5, lbl_807C5F00@l
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f1, lbl_80889114
    addi r4, r1, 0x8
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0x0(r3)
    stb r0, 0xc(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stfs f2, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f2, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_8070E3F0
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070E220(void)
{
    nofralloc
    addi r3, r3, 0x14
    b fn_80708AF0
}

asm void fn_8070E230(void)
{
    nofralloc
    addi r3, r3, 0x14
    b fn_80708B60
}

asm void fn_8070E240(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x30
    bl fn_8060BFB0
    addi r0, r3, 0x87
    addi r3, r30, 0x88
    clrrwi r31, r0, 5
    bl fn_8060CA80
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmplw r3, r31
    bge lbl_fn_8070E240_00000A38
    mr r3, r31
lbl_fn_8070E240_00000A38:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8070E240_00000A4C
    li r0, 0x0
    b lbl_fn_8070E240_00000A54
lbl_fn_8070E240_00000A4C:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_fn_8070E240_00000A54:
    cmplw r3, r0
    ble lbl_fn_8070E240_00000A64
    li r3, 0x0
    b lbl_fn_8070E240_00000B04
lbl_fn_8070E240_00000A64:
    bl fn_80703F90
    bl fn_80704890
    cmpwi r3, 0x2
    bne lbl_fn_8070E240_00000AB4
    li r0, 0x1
    stw r0, 0x10(r30)
    addi r3, r30, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    addi r3, r30, 0x88
    bl fn_8060CAB0
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x14
    bl fn_80708C10
    addi r3, r30, 0x88
    bl fn_8060CA80
    b lbl_fn_8070E240_00000AF0
lbl_fn_8070E240_00000AB4:
    li r0, 0x0
    stw r0, 0x10(r30)
    addi r3, r30, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    addi r3, r30, 0x30
    bl fn_8060BFE0
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x14
    bl fn_80708C10
    addi r3, r30, 0x30
    bl fn_8060BFB0
lbl_fn_8070E240_00000AF0:
    neg r0, r31
    li r3, 0x1
    or r0, r0, r31
    stb r3, 0xc(r30)
    srwi r3, r0, 31
lbl_fn_8070E240_00000B04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070E370(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070E370_00000B8C
    li r0, 0x0
    stb r0, 0xc(r3)
    addi r3, r3, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8070E370_00000B74
    addi r3, r31, 0x88
    bl fn_8060CEE0
    b lbl_fn_8070E370_00000B7C
lbl_fn_8070E370_00000B74:
    addi r3, r31, 0x30
    bl fn_8060C550
lbl_fn_8070E370_00000B7C:
    lwz r4, 0xc(r1)
    addi r3, r31, 0x14
    lwz r5, 0x8(r1)
    bl fn_80708C10
lbl_fn_8070E370_00000B8C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070E3F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0xc(r4)
    stw r0, 0x24(r1)
    lfs f5, lbl_8088911C
    stw r31, 0x1c(r1)
    lfs f4, 0x0(r4)
    fcmpo cr0, f1, f5
    stw r30, 0x18(r1)
    lfs f3, 0x4(r4)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f2, 0x8(r4)
    lfs f0, 0x10(r4)
    stfs f4, 0x1c(r3)
    stfs f3, 0x20(r3)
    stfs f2, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f0, 0x2c(r3)
    bge lbl_fn_8070E3F0_00000BF8
    b lbl_fn_8070E3F0_00000BFC
lbl_fn_8070E3F0_00000BF8:
    fmr f5, f1
lbl_fn_8070E3F0_00000BFC:
    lfs f0, 0x68(r3)
    fcmpu cr0, f5, f0
    mfcr r0
    lfs f1, 0xc(r4)
    lfs f0, 0x0(r4)
    extrwi r0, r0, 1, 2
    stfs f5, 0xc8(r3)
    xori r30, r0, 0x1
    fcmpo cr0, f0, f1
    stfs f5, 0x68(r3)
    ble lbl_fn_8070E3F0_00000C2C
    b lbl_fn_8070E3F0_00000C40
lbl_fn_8070E3F0_00000C2C:
    lfs f1, lbl_8088911C
    fcmpo cr0, f0, f1
    bge lbl_fn_8070E3F0_00000C3C
    b lbl_fn_8070E3F0_00000C40
lbl_fn_8070E3F0_00000C3C:
    fmr f1, f0
lbl_fn_8070E3F0_00000C40:
    lfs f0, 0x4(r4)
    lfs f2, lbl_80889120
    stfs f1, 0xcc(r3)
    fcmpo cr0, f0, f2
    stfs f1, 0x6c(r3)
    ble lbl_fn_8070E3F0_00000C5C
    b lbl_fn_8070E3F0_00000C70
lbl_fn_8070E3F0_00000C5C:
    lfs f2, lbl_80889124
    fcmpo cr0, f0, f2
    bge lbl_fn_8070E3F0_00000C6C
    b lbl_fn_8070E3F0_00000C70
lbl_fn_8070E3F0_00000C6C:
    fmr f2, f0
lbl_fn_8070E3F0_00000C70:
    lfs f0, 0x10(r4)
    lfs f1, lbl_80889118
    stfs f2, 0xd0(r3)
    fcmpo cr0, f0, f1
    stfs f2, 0x70(r3)
    ble lbl_fn_8070E3F0_00000C8C
    b lbl_fn_8070E3F0_00000CA0
lbl_fn_8070E3F0_00000C8C:
    lfs f1, lbl_80889124
    fcmpo cr0, f0, f1
    bge lbl_fn_8070E3F0_00000C9C
    b lbl_fn_8070E3F0_00000CA0
lbl_fn_8070E3F0_00000C9C:
    fmr f1, f0
lbl_fn_8070E3F0_00000CA0:
    lfs f0, 0x8(r4)
    lfs f2, lbl_80889118
    stfs f1, 0xd4(r3)
    fcmpo cr0, f0, f2
    stfs f1, 0x74(r3)
    ble lbl_fn_8070E3F0_00000CBC
    b lbl_fn_8070E3F0_00000CD0
lbl_fn_8070E3F0_00000CBC:
    lfs f2, lbl_80889124
    fcmpo cr0, f0, f2
    bge lbl_fn_8070E3F0_00000CCC
    b lbl_fn_8070E3F0_00000CD0
lbl_fn_8070E3F0_00000CCC:
    fmr f2, f0
lbl_fn_8070E3F0_00000CD0:
    lbz r0, 0xc(r3)
    li r4, 0x0
    lfs f0, lbl_80889124
    cmpwi r0, 0x0
    stfs f2, 0xe0(r3)
    stfs f2, 0x80(r3)
    stw r4, 0x78(r3)
    stw r4, 0x7c(r3)
    stfs f0, 0x84(r3)
    stw r4, 0xd8(r3)
    stw r4, 0xdc(r3)
    stfs f0, 0xe4(r3)
    bne lbl_fn_8070E3F0_00000D0C
    li r3, 0x1
    b lbl_fn_8070E3F0_00000DE4
lbl_fn_8070E3F0_00000D0C:
    addi r3, r3, 0x30
    bl fn_8060BFB0
    addi r0, r3, 0x87
    addi r3, r29, 0x88
    clrrwi r31, r0, 5
    bl fn_8060CA80
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmplw r3, r31
    bge lbl_fn_8070E3F0_00000D38
    mr r3, r31
lbl_fn_8070E3F0_00000D38:
    lwz r4, 0x14(r29)
    cmpwi r4, 0x0
    bne lbl_fn_8070E3F0_00000D4C
    li r0, 0x0
    b lbl_fn_8070E3F0_00000D54
lbl_fn_8070E3F0_00000D4C:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_fn_8070E3F0_00000D54:
    cmplw r3, r0
    ble lbl_fn_8070E3F0_00000D64
    li r3, 0x0
    b lbl_fn_8070E3F0_00000DE4
lbl_fn_8070E3F0_00000D64:
    cmpwi r30, 0x0
    beq lbl_fn_8070E3F0_00000DB4
    addi r3, r29, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    lwz r0, 0x10(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8070E3F0_00000D94
    addi r3, r29, 0x88
    bl fn_8060CCE0
    b lbl_fn_8070E3F0_00000D9C
lbl_fn_8070E3F0_00000D94:
    addi r3, r29, 0x30
    bl fn_8060C2B0
lbl_fn_8070E3F0_00000D9C:
    lwz r4, 0xc(r1)
    mr r30, r3
    lwz r5, 0x8(r1)
    addi r3, r29, 0x14
    bl fn_80708C10
    b lbl_fn_8070E3F0_00000DD8
lbl_fn_8070E3F0_00000DB4:
    lwz r0, 0x10(r29)
    cmpwi r0, 0x1
    bne lbl_fn_8070E3F0_00000DCC
    addi r3, r29, 0x88
    bl fn_8060CE10
    b lbl_fn_8070E3F0_00000DD4
lbl_fn_8070E3F0_00000DCC:
    addi r3, r29, 0x30
    bl fn_8060C440
lbl_fn_8070E3F0_00000DD4:
    mr r30, r3
lbl_fn_8070E3F0_00000DD8:
    neg r0, r30
    or r0, r0, r30
    srwi r3, r0, 31
lbl_fn_8070E3F0_00000DE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070E650(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x34(r1)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070E650_00000E94
    subi r0, r8, 0x2
    lwz r3, 0x10(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpw r0, r3
    bne lbl_fn_8070E650_00000E94
    cmpwi r3, 0x1
    bne lbl_fn_8070E650_00000E70
    lwz r0, 0x0(r5)
    addi r3, r1, 0x18
    stw r0, 0x18(r1)
    addi r4, r4, 0x88
    lwz r0, 0x4(r5)
    stw r0, 0x1c(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x20(r1)
    lwz r0, 0xc(r5)
    stw r0, 0x24(r1)
    bl fn_8060CF70
    b lbl_fn_8070E650_00000E94
lbl_fn_8070E650_00000E70:
    lwz r0, 0x0(r5)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    addi r4, r4, 0x30
    lwz r0, 0x4(r5)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    bl fn_8060C600
lbl_fn_8070E650_00000E94:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070E6F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80703F90
    bl fn_80704890
    subi r3, r3, 0x2
    lwz r0, 0x10(r31)
    cntlzw r3, r3
    srwi r3, r3, 5
    cmpw r0, r3
    beq lbl_fn_8070E6F0_00000F00
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070E6F0_00000F00:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070E760(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C5F28@ha
    lfs f5, lbl_80889128
    stw r0, 0x44(r1)
    li r6, 0x0
    lfs f1, lbl_80889138
    addi r5, r5, lbl_807C5F28@l
    stw r31, 0x3c(r1)
    li r0, 0x5
    lfs f4, lbl_8088912C
    mr r31, r3
    lfs f3, lbl_80889130
    addi r4, r1, 0x8
    lfs f2, lbl_80889134
    lfs f0, lbl_8088913C
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    stw r5, 0x0(r3)
    stb r6, 0xc(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stfs f5, 0x1c(r3)
    stfs f4, 0x20(r3)
    stfs f3, 0x24(r3)
    stfs f2, 0x28(r3)
    stfs f1, 0x2c(r3)
    stw r0, 0x30(r3)
    stfs f5, 0x34(r3)
    stw r6, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stw r0, 0x1c(r1)
    stfs f5, 0x20(r1)
    stw r6, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f1, 0x2c(r1)
    bl fn_8070EA60
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8070E830(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x44
    bl fn_8060D350
    addi r0, r3, 0x87
    addi r3, r31, 0x12c
    clrrwi r31, r0, 5
    bl fn_8060E080
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmplw r3, r31
    bge lbl_fn_8070E830_00001024
    mr r3, r31
lbl_fn_8070E830_00001024:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070E890(void)
{
    nofralloc
    addi r3, r3, 0x14
    b fn_80708AF0
}

asm void fn_8070E8A0(void)
{
    nofralloc
    addi r3, r3, 0x14
    b fn_80708B60
}

asm void fn_8070E8B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x44
    bl fn_8060D350
    addi r0, r3, 0x87
    addi r3, r30, 0x12c
    clrrwi r31, r0, 5
    bl fn_8060E080
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmplw r3, r31
    bge lbl_fn_8070E8B0_000010A8
    mr r3, r31
lbl_fn_8070E8B0_000010A8:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8070E8B0_000010BC
    li r0, 0x0
    b lbl_fn_8070E8B0_000010C4
lbl_fn_8070E8B0_000010BC:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_fn_8070E8B0_000010C4:
    cmplw r3, r0
    ble lbl_fn_8070E8B0_000010D4
    li r3, 0x0
    b lbl_fn_8070E8B0_00001174
lbl_fn_8070E8B0_000010D4:
    bl fn_80703F90
    bl fn_80704890
    cmpwi r3, 0x2
    bne lbl_fn_8070E8B0_00001124
    li r0, 0x1
    stw r0, 0x10(r30)
    addi r3, r30, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    addi r3, r30, 0x12c
    bl fn_8060E0E0
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x14
    bl fn_80708C10
    addi r3, r30, 0x12c
    bl fn_8060E080
    b lbl_fn_8070E8B0_00001160
lbl_fn_8070E8B0_00001124:
    li r0, 0x0
    stw r0, 0x10(r30)
    addi r3, r30, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    addi r3, r30, 0x44
    bl fn_8060D3B0
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x14
    bl fn_80708C10
    addi r3, r30, 0x44
    bl fn_8060D350
lbl_fn_8070E8B0_00001160:
    neg r0, r31
    li r3, 0x1
    or r0, r0, r31
    stb r3, 0xc(r30)
    srwi r3, r0, 31
lbl_fn_8070E8B0_00001174:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070E9E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070E9E0_000011FC
    li r0, 0x0
    stb r0, 0xc(r3)
    addi r3, r3, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8070E9E0_000011E4
    addi r3, r31, 0x12c
    bl fn_8060E410
    b lbl_fn_8070E9E0_000011EC
lbl_fn_8070E9E0_000011E4:
    addi r3, r31, 0x44
    bl fn_8060D6C0
lbl_fn_8070E9E0_000011EC:
    lwz r4, 0xc(r1)
    addi r3, r31, 0x14
    lwz r5, 0x8(r1)
    bl fn_80708C10
lbl_fn_8070E9E0_000011FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070EA60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x18(r4)
    stw r0, 0x24(r1)
    lfs f8, lbl_8088913C
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f7, 0x0(r4)
    fcmpo cr0, f2, f8
    stw r30, 0x18(r1)
    lfs f6, 0x4(r4)
    stw r29, 0x14(r1)
    lfs f5, 0x8(r4)
    lfs f4, 0xc(r4)
    lfs f3, 0x10(r4)
    lwz r5, 0x14(r4)
    lwz r0, 0x1c(r4)
    lfs f1, 0x20(r4)
    lfs f0, 0x24(r4)
    stfs f7, 0x1c(r3)
    stfs f6, 0x20(r3)
    stfs f5, 0x24(r3)
    stfs f4, 0x28(r3)
    stfs f3, 0x2c(r3)
    stw r5, 0x30(r3)
    stfs f2, 0x34(r3)
    stw r0, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f0, 0x40(r3)
    bge lbl_fn_8070EA60_00001290
    b lbl_fn_8070EA60_00001294
lbl_fn_8070EA60_00001290:
    fmr f8, f2
lbl_fn_8070EA60_00001294:
    lfs f0, 0xfc(r3)
    fcmpu cr0, f8, f0
    mfcr r0
    lfs f1, 0x18(r4)
    lfs f0, 0x0(r4)
    extrwi r0, r0, 1, 2
    xori r29, r0, 0x1
    lwz r0, 0x14(r4)
    fcmpo cr0, f0, f1
    stw r0, 0x1fc(r3)
    stw r0, 0xf8(r3)
    stfs f8, 0x200(r3)
    stfs f8, 0xfc(r3)
    ble lbl_fn_8070EA60_000012D0
    b lbl_fn_8070EA60_000012E4
lbl_fn_8070EA60_000012D0:
    lfs f1, lbl_8088913C
    fcmpo cr0, f0, f1
    bge lbl_fn_8070EA60_000012E0
    b lbl_fn_8070EA60_000012E4
lbl_fn_8070EA60_000012E0:
    fmr f1, f0
lbl_fn_8070EA60_000012E4:
    lfs f0, 0x4(r4)
    lfs f2, lbl_8088913C
    lwz r0, 0x1c(r4)
    fcmpo cr0, f0, f2
    stfs f1, 0x204(r3)
    stfs f1, 0x100(r3)
    stw r0, 0x208(r3)
    stw r0, 0x104(r3)
    bge lbl_fn_8070EA60_0000130C
    b lbl_fn_8070EA60_00001310
lbl_fn_8070EA60_0000130C:
    fmr f2, f0
lbl_fn_8070EA60_00001310:
    lfs f0, 0x8(r4)
    lfs f1, lbl_80889138
    stfs f2, 0x20c(r3)
    fcmpo cr0, f0, f1
    stfs f2, 0x108(r3)
    ble lbl_fn_8070EA60_0000132C
    b lbl_fn_8070EA60_00001340
lbl_fn_8070EA60_0000132C:
    lfs f1, lbl_8088913C
    fcmpo cr0, f0, f1
    bge lbl_fn_8070EA60_0000133C
    b lbl_fn_8070EA60_00001340
lbl_fn_8070EA60_0000133C:
    fmr f1, f0
lbl_fn_8070EA60_00001340:
    lfs f0, 0xc(r4)
    lfs f2, lbl_80889138
    stfs f1, 0x210(r3)
    fcmpo cr0, f0, f2
    stfs f1, 0x10c(r3)
    ble lbl_fn_8070EA60_0000135C
    b lbl_fn_8070EA60_00001370
lbl_fn_8070EA60_0000135C:
    lfs f2, lbl_8088913C
    fcmpo cr0, f0, f2
    bge lbl_fn_8070EA60_0000136C
    b lbl_fn_8070EA60_00001370
lbl_fn_8070EA60_0000136C:
    fmr f2, f0
lbl_fn_8070EA60_00001370:
    lfs f0, 0x20(r4)
    lfs f1, lbl_80889138
    stfs f2, 0x214(r3)
    fcmpo cr0, f0, f1
    stfs f2, 0x110(r3)
    ble lbl_fn_8070EA60_0000138C
    b lbl_fn_8070EA60_000013A0
lbl_fn_8070EA60_0000138C:
    lfs f1, lbl_8088913C
    fcmpo cr0, f0, f1
    bge lbl_fn_8070EA60_0000139C
    b lbl_fn_8070EA60_000013A0
lbl_fn_8070EA60_0000139C:
    fmr f1, f0
lbl_fn_8070EA60_000013A0:
    lfs f0, 0x24(r4)
    lfs f2, lbl_80889138
    stfs f1, 0x218(r3)
    fcmpo cr0, f0, f2
    stfs f1, 0x114(r3)
    ble lbl_fn_8070EA60_000013BC
    b lbl_fn_8070EA60_000013D0
lbl_fn_8070EA60_000013BC:
    lfs f2, lbl_8088913C
    fcmpo cr0, f0, f2
    bge lbl_fn_8070EA60_000013CC
    b lbl_fn_8070EA60_000013D0
lbl_fn_8070EA60_000013CC:
    fmr f2, f0
lbl_fn_8070EA60_000013D0:
    lfs f0, 0x10(r4)
    lfs f1, lbl_80889138
    stfs f2, 0x21c(r3)
    fcmpo cr0, f0, f1
    stfs f2, 0x118(r3)
    ble lbl_fn_8070EA60_000013EC
    b lbl_fn_8070EA60_00001400
lbl_fn_8070EA60_000013EC:
    lfs f1, lbl_8088913C
    fcmpo cr0, f0, f1
    bge lbl_fn_8070EA60_000013FC
    b lbl_fn_8070EA60_00001400
lbl_fn_8070EA60_000013FC:
    fmr f1, f0
lbl_fn_8070EA60_00001400:
    lbz r0, 0xc(r3)
    li r4, 0x0
    lfs f0, lbl_8088913C
    cmpwi r0, 0x0
    stfs f1, 0x228(r3)
    stfs f1, 0x124(r3)
    stw r4, 0x11c(r3)
    stw r4, 0x120(r3)
    stfs f0, 0x128(r3)
    stw r4, 0x220(r3)
    stw r4, 0x224(r3)
    stfs f0, 0x22c(r3)
    bne lbl_fn_8070EA60_0000143C
    li r3, 0x1
    b lbl_fn_8070EA60_00001514
lbl_fn_8070EA60_0000143C:
    addi r3, r3, 0x44
    bl fn_8060D350
    addi r0, r3, 0x87
    addi r3, r31, 0x12c
    clrrwi r30, r0, 5
    bl fn_8060E080
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmplw r3, r30
    bge lbl_fn_8070EA60_00001468
    mr r3, r30
lbl_fn_8070EA60_00001468:
    lwz r4, 0x14(r31)
    cmpwi r4, 0x0
    bne lbl_fn_8070EA60_0000147C
    li r0, 0x0
    b lbl_fn_8070EA60_00001484
lbl_fn_8070EA60_0000147C:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_fn_8070EA60_00001484:
    cmplw r3, r0
    ble lbl_fn_8070EA60_00001494
    li r3, 0x0
    b lbl_fn_8070EA60_00001514
lbl_fn_8070EA60_00001494:
    cmpwi r29, 0x0
    beq lbl_fn_8070EA60_000014E4
    addi r3, r31, 0x14
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80708BB0
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8070EA60_000014C4
    addi r3, r31, 0x12c
    bl fn_8060E280
    b lbl_fn_8070EA60_000014CC
lbl_fn_8070EA60_000014C4:
    addi r3, r31, 0x44
    bl fn_8060D530
lbl_fn_8070EA60_000014CC:
    lwz r4, 0xc(r1)
    mr r29, r3
    lwz r5, 0x8(r1)
    addi r3, r31, 0x14
    bl fn_80708C10
    b lbl_fn_8070EA60_00001508
lbl_fn_8070EA60_000014E4:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8070EA60_000014FC
    addi r3, r31, 0x12c
    bl fn_8060E350
    b lbl_fn_8070EA60_00001504
lbl_fn_8070EA60_000014FC:
    addi r3, r31, 0x44
    bl fn_8060D600
lbl_fn_8070EA60_00001504:
    mr r29, r3
lbl_fn_8070EA60_00001508:
    neg r0, r29
    or r0, r0, r29
    srwi r3, r0, 31
lbl_fn_8070EA60_00001514:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070ED80(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x34(r1)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8070ED80_000015C4
    subi r0, r8, 0x2
    lwz r3, 0x10(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpw r0, r3
    bne lbl_fn_8070ED80_000015C4
    cmpwi r3, 0x1
    bne lbl_fn_8070ED80_000015A0
    lwz r0, 0x0(r5)
    addi r3, r1, 0x18
    stw r0, 0x18(r1)
    addi r4, r4, 0x12c
    lwz r0, 0x4(r5)
    stw r0, 0x1c(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x20(r1)
    lwz r0, 0xc(r5)
    stw r0, 0x24(r1)
    bl fn_8060E470
    b lbl_fn_8070ED80_000015C4
lbl_fn_8070ED80_000015A0:
    lwz r0, 0x0(r5)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    addi r4, r4, 0x44
    lwz r0, 0x4(r5)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    bl fn_8060D720
lbl_fn_8070ED80_000015C4:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8070EE20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80703F90
    bl fn_80704890
    subi r3, r3, 0x2
    lwz r0, 0x10(r31)
    cntlzw r3, r3
    srwi r3, r3, 5
    cmpw r0, r3
    beq lbl_fn_8070EE20_00001630
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070EE20_00001630:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070EE90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bl OSDisableInterrupts
    addi r0, r28, 0x3
    addi r4, r30, 0x3
    clrrwi r6, r0, 2
    li r7, 0x0
    subf r0, r28, r6
    clrrwi r4, r4, 2
    subf r0, r0, r29
    divwu. r30, r0, r4
    beq lbl_fn_8070EE90_00001760
    cmplwi r30, 0x8
    subi r5, r30, 0x8
    ble lbl_fn_8070EE90_0000173C
    addi r0, r5, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_8070EE90_0000173C
lbl_fn_8070EE90_000016B8:
    lwz r0, 0x0(r31)
    mr r8, r6
    stw r0, 0x0(r6)
    addi r7, r7, 0x8
    stw r6, 0x0(r31)
    add r6, r6, r4
    mr r5, r6
    stw r8, 0x0(r6)
    stw r6, 0x0(r31)
    add r6, r6, r4
    mr r0, r6
    stw r5, 0x0(r6)
    stw r6, 0x0(r31)
    add r6, r6, r4
    mr r5, r6
    stw r0, 0x0(r6)
    stw r6, 0x0(r31)
    add r6, r6, r4
    mr r0, r6
    stw r5, 0x0(r6)
    stw r6, 0x0(r31)
    add r6, r6, r4
    mr r5, r6
    stw r0, 0x0(r6)
    stw r6, 0x0(r31)
    add r6, r6, r4
    mr r0, r6
    stw r5, 0x0(r6)
    stw r6, 0x0(r31)
    stwux r0, r6, r4
    stw r6, 0x0(r31)
    add r6, r6, r4
    bdnz lbl_fn_8070EE90_000016B8
lbl_fn_8070EE90_0000173C:
    subf r0, r7, r30
    mtctr r0
    cmplw r7, r30
    bge lbl_fn_8070EE90_00001760
lbl_fn_8070EE90_0000174C:
    lwz r0, 0x0(r31)
    stw r0, 0x0(r6)
    stw r6, 0x0(r31)
    add r6, r6, r4
    bdnz lbl_fn_8070EE90_0000174C
lbl_fn_8070EE90_00001760:
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070EFE0(void)
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
    bl OSDisableInterrupts
    lwz r5, 0x0(r29)
    add r4, r30, r31
    b lbl_fn_8070EFE0_000017F0
    nop
lbl_fn_8070EFE0_000017CC:
    cmplw r30, r5
    bgt lbl_fn_8070EFE0_000017E8
    cmplw r5, r4
    bge lbl_fn_8070EFE0_000017E8
    lwz r0, 0x0(r5)
    stw r0, 0x0(r29)
    b lbl_fn_8070EFE0_000017EC
lbl_fn_8070EFE0_000017E8:
    mr r29, r5
lbl_fn_8070EFE0_000017EC:
    lwz r5, 0x0(r5)
lbl_fn_8070EFE0_000017F0:
    cmpwi r5, 0x0
    bne lbl_fn_8070EFE0_000017CC
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8070F070(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    li r31, 0x0
    b lbl_fn_8070F070_00001854
    nop
lbl_fn_8070F070_0000184C:
    lwz r4, 0x0(r4)
    addi r31, r31, 0x1
lbl_fn_8070F070_00001854:
    cmpwi r4, 0x0
    bne lbl_fn_8070F070_0000184C
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070F0D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    bne lbl_fn_8070F0D0_000018B8
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_8070F0D0_000018C8
lbl_fn_8070F0D0_000018B8:
    lwz r0, 0x0(r31)
    stw r0, 0x0(r30)
    bl OSRestoreInterrupts
    mr r3, r31
lbl_fn_8070F0D0_000018C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070F130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r30)
    stw r0, 0x0(r31)
    stw r31, 0x0(r30)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8070F180(void)
{
    nofralloc
    lfs f1, lbl_80889140
    li r4, 0x1
    lfs f0, lbl_80889144
    li r0, 0x0
    stfs f1, 0x0(r3)
    stb r4, 0xc(r3)
    stfs f0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8070F1B0(void)
{
    nofralloc
    lfs f0, lbl_80889140
    li r0, 0x0
    stfs f0, 0x14(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_8070F1D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r6, 0x8(r3)
    lwz r5, 0x10(r3)
    cmplw r5, r6
    bge lbl_fn_8070F1D0_000019B8
    add r0, r5, r4
    cmplw r0, r6
    bgt lbl_fn_8070F1D0_000019AC
    stw r0, 0x10(r3)
    b lbl_fn_8070F1D0_00001A14
lbl_fn_8070F1D0_000019AC:
    subf r0, r5, r6
    stw r6, 0x10(r3)
    subf r4, r0, r4
lbl_fn_8070F1D0_000019B8:
    lis r0, 0x4330
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f4, lbl_80889150
    stw r0, 0x8(r1)
    lfs f2, 0x4(r3)
    lfd f0, 0x8(r1)
    lfs f1, lbl_80889148
    fsubs f3, f0, f4
    lfs f0, 0x14(r3)
    stw r0, 0x18(r1)
    fmuls f2, f2, f3
    fdivs f1, f2, f1
    fadds f1, f0, f1
    fctiwz f0, f1
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f4
    fsubs f0, f1, f0
    stfs f0, 0x14(r3)
lbl_fn_8070F1D0_00001A14:
    addi r1, r1, 0x20
    blr
}

asm void fn_8070F270(void)
{
    nofralloc
    lfs f1, lbl_80889140
    lfs f0, 0x0(r3)
    stwu r1, -0x20(r1)
    fcmpu cr0, f1, f0
    bne lbl_fn_8070F270_00001A3C
    b lbl_fn_8070F270_00001B34
lbl_fn_8070F270_00001A3C:
    lwz r4, 0x10(r3)
    lwz r0, 0x8(r3)
    cmplw r4, r0
    bge lbl_fn_8070F270_00001A50
    b lbl_fn_8070F270_00001B34
lbl_fn_8070F270_00001A50:
    lfs f2, lbl_8088915C
    lfs f1, 0x14(r3)
    lfs f0, lbl_80889158
    fmuls f1, f2, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r5, 0xc(r1)
    cmpwi r5, 0x20
    bge lbl_fn_8070F270_00001A8C
    lis r4, lbl_8076CFA0@ha
    addi r4, r4, lbl_8076CFA0@l
    lbzx r0, r4, r5
    extsb r0, r0
    b lbl_fn_8070F270_00001AEC
lbl_fn_8070F270_00001A8C:
    cmpwi r5, 0x40
    bge lbl_fn_8070F270_00001AAC
    lis r4, lbl_8076CFA0@ha
    subfic r0, r5, 0x40
    addi r4, r4, lbl_8076CFA0@l
    lbzx r0, r4, r0
    extsb r0, r0
    b lbl_fn_8070F270_00001AEC
lbl_fn_8070F270_00001AAC:
    cmpwi r5, 0x60
    bge lbl_fn_8070F270_00001AD0
    lis r4, lbl_8076CFA0@ha
    addi r4, r4, lbl_8076CFA0@l
    add r4, r5, r4
    lbz r0, -0x40(r4)
    neg r0, r0
    extsb r0, r0
    b lbl_fn_8070F270_00001AEC
lbl_fn_8070F270_00001AD0:
    subi r0, r5, 0x60
    lis r4, lbl_8076CFA0@ha
    subfic r0, r0, 0x20
    addi r4, r4, lbl_8076CFA0@l
    lbzx r0, r4, r0
    neg r0, r0
    extsb r0, r0
lbl_fn_8070F270_00001AEC:
    lis r4, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, lbl_80889150
    stw r4, 0x8(r1)
    lbz r0, 0xc(r3)
    lfd f1, 0x8(r1)
    lfs f0, lbl_80889160
    fsubs f1, f1, f2
    stw r0, 0x14(r1)
    lfs f3, 0x0(r3)
    stw r4, 0x10(r1)
    fdivs f1, f1, f0
    lfd f2, lbl_80889168
    lfd f0, 0x10(r1)
    fmuls f1, f1, f3
    fsubs f0, f0, f2
    fmuls f1, f1, f0
lbl_fn_8070F270_00001B34:
    addi r1, r1, 0x20
    blr
}

asm void fn_8070F390(void)
{
    nofralloc
    b fn_80712610
}

asm void fn_8070F3A0(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

asm void fn_8070F3B0(void)
{
    nofralloc
    blr
}

asm void fn_8070F3C0(void)
{
    nofralloc
    blr
}

asm void fn_8070F3D0(void)
{
    nofralloc
    lbz r3, 0xce(r3)
    blr
}

asm void fn_8070F3E0(void)
{
    nofralloc
    lbz r3, 0xcd(r3)
    blr
}

asm void fn_8070F3F0(void)
{
    nofralloc
    lbz r3, 0xcc(r3)
    blr
}

asm void fn_8070F400(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_8070F3B0
}

asm void fn_8070F410(void)
{
    nofralloc
    subi r3, r3, 0xb4
    b fn_807122C0
}

asm void fn_8070F420(void)
{
    nofralloc
    subi r3, r3, 0xc0
    b fn_8070F3A0
}

asm void fn_8070F430(void)
{
    nofralloc
    subi r3, r3, 0xc0
    b fn_8070F390
}

asm void fn_8070F440(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r7, 0x20(r4)
    mr r25, r3
    lwz r31, 0xc4(r4)
    mr r26, r4
    addi r6, r7, 0x1
    stw r6, 0x20(r4)
    mr r27, r5
    li r30, 0x0
    lbz r28, 0x0(r7)
    li r3, 0x0
    li r29, 0x1
    cmplwi r28, 0xa2
    bne lbl_fn_8070F440_00001C58
    lbz r5, 0x24(r4)
    addi r0, r6, 0x1
    stw r0, 0x20(r4)
    neg r0, r5
    or r0, r0, r5
    lbz r28, 0x0(r6)
    srwi r29, r0, 31
lbl_fn_8070F440_00001C58:
    cmplwi r28, 0xa3
    bne lbl_fn_8070F440_00001C78
    lwz r6, 0x20(r4)
    li r30, 0x2
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
    b lbl_fn_8070F440_00001CB4
lbl_fn_8070F440_00001C78:
    cmplwi r28, 0xa4
    bne lbl_fn_8070F440_00001C98
    lwz r6, 0x20(r4)
    li r30, 0x4
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
    b lbl_fn_8070F440_00001CB4
lbl_fn_8070F440_00001C98:
    cmplwi r28, 0xa5
    bne lbl_fn_8070F440_00001CB4
    lwz r6, 0x20(r4)
    li r30, 0x5
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
lbl_fn_8070F440_00001CB4:
    cmplwi r28, 0xa0
    bne lbl_fn_8070F440_00001CD8
    lwz r6, 0x20(r4)
    li r0, 0x4
    li r3, 0x1
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
    b lbl_fn_8070F440_00001CF8
lbl_fn_8070F440_00001CD8:
    cmplwi r28, 0xa1
    bne lbl_fn_8070F440_00001CF8
    lwz r6, 0x20(r4)
    li r0, 0x5
    li r3, 0x1
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
lbl_fn_8070F440_00001CF8:
    rlwinm. r5, r28, 0, 24, 24
    bne lbl_fn_8070F440_00001DD0
    lwz r7, 0x20(r4)
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    addi r6, r7, 0x1
    stwu r6, 0x20(r4)
    mr r6, r26
    lbz r24, 0x0(r7)
    li r7, 0x3
    beq lbl_fn_8070F440_00001D2C
    mr r7, r0
lbl_fn_8070F440_00001D2C:
    bl fn_80710460
    lbz r0, 0x8c(r26)
    cmpwi r29, 0x0
    mr r23, r3
    extsb r0, r0
    add r3, r28, r0
    bne lbl_fn_8070F440_00001D50
    li r3, 0x0
    b lbl_fn_8070F440_00002268
lbl_fn_8070F440_00001D50:
    cmpwi r3, 0x7f
    ble lbl_fn_8070F440_00001D60
    li r5, 0x7f
    b lbl_fn_8070F440_00001D68
lbl_fn_8070F440_00001D60:
    srawi r0, r3, 31
    andc r5, r3, r0
lbl_fn_8070F440_00001D68:
    lbz r0, 0x48(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8070F440_00001DAC
    cmpwi r27, 0x0
    beq lbl_fn_8070F440_00001DAC
    cmpwi r23, 0x0
    mr r3, r25
    mr r4, r26
    mr r6, r24
    li r7, -0x1
    ble lbl_fn_8070F440_00001D98
    mr r7, r23
lbl_fn_8070F440_00001D98:
    lwz r12, 0x0(r3)
    lbz r8, 0x26(r26)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8070F440_00001DAC:
    lbz r0, 0x25(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8070F440_00002264
    cmpwi r23, 0x0
    stw r23, 0x44(r26)
    bne lbl_fn_8070F440_00002264
    li r0, 0x1
    stb r0, 0x4a(r26)
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00001DD0:
    rlwinm r5, r28, 0, 24, 27
    li r23, 0x0
    cmplwi r5, 0x80
    li r27, 0x0
    beq lbl_fn_8070F440_00001E18
    cmplwi r5, 0xb0
    beq lbl_fn_8070F440_00001FF4
    cmplwi r5, 0xc0
    beq lbl_fn_8070F440_00001FF4
    cmplwi r5, 0xd0
    beq lbl_fn_8070F440_00001FF4
    cmplwi r5, 0x90
    beq lbl_fn_8070F440_00002088
    cmplwi r5, 0xe0
    beq lbl_fn_8070F440_000020B8
    cmplwi r5, 0xf0
    beq lbl_fn_8070F440_0000210C
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00001E18:
    cmplwi r28, 0x80
    beq lbl_fn_8070F440_00001E44
    cmplwi r28, 0x81
    beq lbl_fn_8070F440_00001E78
    cmplwi r28, 0x88
    beq lbl_fn_8070F440_00001ECC
    cmplwi r28, 0x89
    beq lbl_fn_8070F440_00001F34
    cmplwi r28, 0x8a
    beq lbl_fn_8070F440_00001F94
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00001E44:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x3
    addi r4, r4, 0x20
    beq lbl_fn_8070F440_00001E64
    mr r7, r0
lbl_fn_8070F440_00001E64:
    bl fn_80710460
    cmpwi r29, 0x0
    beq lbl_fn_8070F440_00002264
    stw r3, 0x44(r26)
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00001E78:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x3
    addi r4, r4, 0x20
    beq lbl_fn_8070F440_00001E98
    mr r7, r0
lbl_fn_8070F440_00001E98:
    bl fn_80710460
    cmpwi r29, 0x0
    mr r6, r3
    beq lbl_fn_8070F440_00002264
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00001ECC:
    lwz r3, 0x20(r4)
    cmpwi r29, 0x0
    addi r5, r3, 0x1
    stw r5, 0x20(r4)
    addi r7, r5, 0x1
    lbz r6, 0x0(r3)
    addi r3, r7, 0x1
    addi r0, r3, 0x1
    stw r7, 0x20(r4)
    lbz r5, 0x0(r5)
    stw r3, 0x20(r4)
    lbz r7, 0x0(r7)
    rlwimi r7, r5, 8, 16, 23
    stw r0, 0x20(r4)
    slwi r7, r7, 8
    lbz r0, 0x0(r3)
    or r7, r7, r0
    beq lbl_fn_8070F440_00002264
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00001F34:
    lwz r5, 0x20(r4)
    cmpwi r29, 0x0
    addi r6, r5, 0x1
    stw r6, 0x20(r4)
    addi r3, r6, 0x1
    lbz r5, 0x0(r5)
    addi r0, r3, 0x1
    stw r3, 0x20(r4)
    lbz r6, 0x0(r6)
    rlwimi r6, r5, 8, 16, 23
    stw r0, 0x20(r4)
    slwi r6, r6, 8
    lbz r0, 0x0(r3)
    or r6, r6, r0
    beq lbl_fn_8070F440_00002264
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00001F94:
    lwz r5, 0x20(r4)
    cmpwi r29, 0x0
    addi r6, r5, 0x1
    stw r6, 0x20(r4)
    addi r3, r6, 0x1
    lbz r5, 0x0(r5)
    addi r0, r3, 0x1
    stw r3, 0x20(r4)
    lbz r6, 0x0(r6)
    rlwimi r6, r5, 8, 16, 23
    stw r0, 0x20(r4)
    slwi r6, r6, 8
    lbz r0, 0x0(r3)
    or r6, r6, r0
    beq lbl_fn_8070F440_00002264
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00001FF4:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x1
    addi r4, r4, 0x20
    beq lbl_fn_8070F440_00002014
    mr r7, r0
lbl_fn_8070F440_00002014:
    bl fn_80710460
    cmpwi r30, 0x0
    mr r24, r3
    beq lbl_fn_8070F440_00002040
    mr r3, r25
    mr r5, r31
    mr r6, r26
    mr r7, r30
    addi r4, r26, 0x20
    bl fn_80710460
    mr r27, r3
lbl_fn_8070F440_00002040:
    cmpwi r29, 0x0
    beq lbl_fn_8070F440_00002264
    subi r0, r28, 0xc3
    mr r3, r25
    cmplwi r0, 0x1
    mr r4, r26
    mr r5, r28
    bgt lbl_fn_8070F440_0000206C
    clrlwi r6, r24, 24
    extsb r6, r6
    b lbl_fn_8070F440_00002070
lbl_fn_8070F440_0000206C:
    clrlwi r6, r24, 24
lbl_fn_8070F440_00002070:
    lwz r12, 0x0(r3)
    mr r7, r27
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00002088:
    cmpwi r29, 0x0
    beq lbl_fn_8070F440_00002264
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r6, 0x0
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_000020B8:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x2
    addi r4, r4, 0x20
    beq lbl_fn_8070F440_000020D8
    mr r7, r0
lbl_fn_8070F440_000020D8:
    bl fn_80710460
    cmpwi r29, 0x0
    extsh r6, r3
    beq lbl_fn_8070F440_00002264
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_0000210C:
    cmplwi r28, 0xfe
    beq lbl_fn_8070F440_00002128
    cmplwi r28, 0xff
    beq lbl_fn_8070F440_00002138
    cmplwi r28, 0xf0
    beq lbl_fn_8070F440_00002148
    b lbl_fn_8070F440_00002238
lbl_fn_8070F440_00002128:
    lwz r3, 0x20(r4)
    addi r0, r3, 0x2
    stw r0, 0x20(r4)
    b lbl_fn_8070F440_00002264
lbl_fn_8070F440_00002138:
    cmpwi r29, 0x0
    beq lbl_fn_8070F440_00002264
    li r3, 0x1
    b lbl_fn_8070F440_00002268
lbl_fn_8070F440_00002148:
    lwz r6, 0x20(r4)
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r24, 0x0(r6)
    rlwinm r5, r24, 0, 24, 27
    cmplwi r5, 0xe0
    beq lbl_fn_8070F440_00002178
    cmplwi r5, 0x80
    beq lbl_fn_8070F440_000021D4
    cmplwi r5, 0x90
    beq lbl_fn_8070F440_000021D4
    b lbl_fn_8070F440_00002238
lbl_fn_8070F440_00002178:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x2
    addi r4, r4, 0x20
    beq lbl_fn_8070F440_00002198
    mr r7, r0
lbl_fn_8070F440_00002198:
    bl fn_80710460
    cmpwi r29, 0x0
    clrlwi r23, r3, 16
    beq lbl_fn_8070F440_00002238
    lwz r12, 0x0(r25)
    slwi r0, r28, 8
    mr r3, r25
    mr r4, r26
    lwz r12, 0x8(r12)
    mr r6, r23
    add r5, r0, r24
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8070F440_00002238
lbl_fn_8070F440_000021D4:
    lwz r7, 0x20(r4)
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    addi r6, r7, 0x1
    stwu r6, 0x20(r4)
    mr r6, r26
    lbz r23, 0x0(r7)
    li r7, 0x2
    beq lbl_fn_8070F440_00002200
    mr r7, r0
lbl_fn_8070F440_00002200:
    bl fn_80710460
    cmpwi r29, 0x0
    extsh r27, r3
    beq lbl_fn_8070F440_00002238
    lwz r12, 0x0(r25)
    slwi r0, r28, 8
    mr r3, r25
    mr r4, r26
    lwz r12, 0x8(r12)
    mr r6, r23
    mr r7, r27
    add r5, r0, r24
    mtctr r12
    bctrl
lbl_fn_8070F440_00002238:
    cmpwi r29, 0x0
    beq lbl_fn_8070F440_00002264
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    mr r6, r23
    mr r7, r27
    mtctr r12
    bctrl
lbl_fn_8070F440_00002264:
    li r3, 0x0
lbl_fn_8070F440_00002268:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
