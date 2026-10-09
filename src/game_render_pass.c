#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D760(void);
extern void fn_8000D9E8(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_8007708C(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092954(void);
extern void fn_80097C08(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_8013655C(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80178A6C(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8029DB54(void);
extern void fn_8029DB58(void);
extern void fn_8029DBE0(void);
extern void fn_8029E950(void);
extern void fn_8029F3F4(void);
extern void fn_8029F3FC(void);
extern void fn_8029F738(void);
extern void fn_8029FAC0(void);
extern void fn_8029FD34(void);
extern void fn_802A057C(void);
extern void fn_802A0818(void);
extern void fn_802A0B00(void);
extern void fn_802A118C(void);
extern void fn_802A16A4(void);
extern void fn_802A17CC(void);
extern void fn_802A19B0(void);
extern void fn_802A1BFC(void);
extern void fn_802A2070(void);
extern void fn_802A2494(void);
extern void fn_802A254C(void);
extern void fn_802A2600(void);
extern void fn_802A36B0(void);
extern void fn_802A36B8(void);
extern void fn_802A3D6C(void);
extern void fn_802A7970(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_8037D4C0(void);
extern void fn_803C1560(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805A3D00(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068B100(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80785AE8[];
extern u8 lbl_80745C50[];
extern u8 lbl_80745FC0[];
extern u8 lbl_80745FE4[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80777630[];
extern u8 lbl_80785D28[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_80883D28;
extern u32 lbl_80883D30;
extern u32 lbl_80883D60;
extern u32 lbl_80883D68;
extern u32 lbl_80883D6C;
extern u32 lbl_80883D74;
extern u32 lbl_80883D84;
extern u32 lbl_80883D88;
extern u32 lbl_80883E20;
extern u32 lbl_80883E24;
extern u32 lbl_80883E28;
extern u32 lbl_80883E2C;
extern u32 lbl_80883E30;
extern u32 lbl_80883E38;
extern u32 lbl_80883E3C;
extern u32 lbl_80883E40;
extern u32 lbl_80883E44;
extern u32 lbl_80883E48;

/* Function declarations */
void fn_802A4094(void);
void fn_802A409C(void);
void fn_802A40A8(void);
void fn_802A4120(void);
void fn_802A4168(void);
void fn_802A4170(void);
void fn_802A4184(void);
void fn_802A4194(void);
void fn_802A42CC(void);
void fn_802A4454(void);
void fn_802A4478(void);
void fn_802A4628(void);
void fn_802A46E0(void);
void fn_802A46E4(void);
void fn_802A4968(void);
void fn_802A49BC(void);
void fn_802A49C4(void);
void fn_802A49C8(void);
void fn_802A4A04(void);
void fn_802A4BBC(void);
void fn_802A5054(void);
void fn_802A51F4(void);

asm void fn_802A4094(void)
{
    nofralloc
    lwz r3, 0x14ac(r3)
    blr
}

asm void fn_802A409C(void)
{
    nofralloc
    lwz r0, 0x14a8(r3)
    extrwi r3, r0, 1, 6
    blr
}

asm void fn_802A40A8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    fmr f30, f1
    fmr f31, f2
    bl fn_80680CF8
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80745C50@ha
    stw r3, 0xc(r1)
    lfd f3, lbl_80745C50@l(r4)
    fsubs f0, f31, f30
    stw r0, 0x8(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f2, 0x8(r1)
    lfs f1, lbl_80883E20
    fsubs f2, f2, f3
    lfd f31, 0x20(r1)
    fdivs f1, f2, f1
    fmadds f1, f0, f1, f30
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802A4120(void)
{
    nofralloc
    lfs f5, lbl_80883D28
    li r4, 0x0
    lfs f4, lbl_80883E24
    li r0, -0x1
    lfs f3, lbl_80883D6C
    lfs f2, lbl_80883E28
    lfs f1, lbl_80883E2C
    lfs f0, lbl_80883D68
    stw r4, 0x0(r3)
    stfs f5, 0x4(r3)
    stfs f4, 0x8(r3)
    stfs f3, 0xc(r3)
    stfs f2, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    blr
}

asm void fn_802A4168(void)
{
    nofralloc
    lwz r3, 0x4c(r3)
    blr
}

asm void fn_802A4170(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_802A4184(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_802A4194(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r0, 0x15ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A4194_0000013C
    li r3, 0x0
    b lbl_fn_802A4194_00000210
lbl_fn_802A4194_0000013C:
    lfs f31, lbl_80883E30
    li r31, -0x1
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_802A4194_000001B0
lbl_fn_802A4194_00000150:
    lwz r3, 0x15a8(r28)
    lfs f2, 0x530(r28)
    lwzx r3, r3, r29
    lfs f0, 0x528(r28)
    lfs f3, 0xc(r3)
    lfs f1, 0x4(r3)
    fsubs f3, f3, f2
    lfs f2, 0x8(r3)
    fsubs f4, f1, f0
    lfs f1, 0x52c(r28)
    stfs f3, 0x10(r1)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x8(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0xc(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    bge lbl_fn_802A4194_000001A8
    fmr f31, f0
    mr r31, r30
lbl_fn_802A4194_000001A8:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_802A4194_000001B0:
    lwz r0, 0x15ac(r28)
    cmplw r30, r0
    blt lbl_fn_802A4194_00000150
    lwz r4, lbl_8087F430
    mr r3, r28
    lwz r30, 0x15a8(r28)
    slwi r31, r31, 2
    lwz r29, 0x10d8(r4)
    bl fn_80179D44
    lwzx r4, r30, r31
    mr r5, r3
    lfs f1, lbl_80883E24
    mr r3, r29
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r4, 0x9c(r29)
    mulli r0, r0, 0x30
    li r3, 0x1
    add r0, r4, r0
    stw r0, 0x156c(r28)
lbl_fn_802A4194_00000210:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802A42CC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x15ac(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_802A42CC_0000026C
    li r3, 0x0
    b lbl_fn_802A42CC_000003A0
lbl_fn_802A42CC_0000026C:
    lfs f31, lbl_80883D28
    addi r29, r1, 0x14
    li r28, -0x1
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_802A42CC_000002F4
lbl_fn_802A42CC_00000284:
    lwz r3, 0x15a8(r31)
    lwz r4, 0x14d4(r31)
    lwzx r3, r3, r30
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    lfs f0, 0xc(r3)
    psq_st f1, 0x0(r29), 0, 0
    fsubs f5, f0, f2
    lfs f3, 0x4(r3)
    lfs f0, 0x14(r1)
    lfs f4, 0x8(r3)
    fsubs f6, f3, f0
    lfs f3, 0x18(r1)
    fmuls f0, f5, f5
    stfs f2, 0x1c(r1)
    fsubs f3, f4, f3
    stfs f6, 0x8(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0xc(r1)
    stfs f5, 0x10(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    ble lbl_fn_802A42CC_000002EC
    fmr f31, f0
    mr r28, r27
lbl_fn_802A42CC_000002EC:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
lbl_fn_802A42CC_000002F4:
    lwz r0, 0x15ac(r31)
    cmplw r27, r0
    blt lbl_fn_802A42CC_00000284
    cmpwi r28, 0x0
    blt lbl_fn_802A42CC_00000310
    cmpw r28, r0
    blt lbl_fn_802A42CC_00000318
lbl_fn_802A42CC_00000310:
    li r3, 0x0
    b lbl_fn_802A42CC_000003A0
lbl_fn_802A42CC_00000318:
    mr r3, r31
    li r4, 0x1
    bl fn_802A4194
    lwz r4, lbl_8087F430
    slwi r30, r28, 2
    lwz r29, 0x15a8(r31)
    mr r3, r31
    lwz r28, 0x10d8(r4)
    bl fn_80179D44
    lwzx r4, r29, r30
    mr r5, r3
    lfs f1, lbl_80883E24
    mr r3, r28
    addi r4, r4, 0x4
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r4, 0x156c(r31)
    mulli r0, r0, 0x30
    lwz r3, 0x9c(r28)
    cmpwi r4, 0x0
    add r0, r3, r0
    stw r0, 0x1570(r31)
    beq lbl_fn_802A42CC_00000388
    cmpwi r0, 0x0
    bne lbl_fn_802A42CC_00000390
lbl_fn_802A42CC_00000388:
    li r3, 0x0
    b lbl_fn_802A42CC_000003A0
lbl_fn_802A42CC_00000390:
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r3, r0, 31
lbl_fn_802A42CC_000003A0:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802A4454(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x14bc(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x1650(r3)
    sth r0, 0x8(r4)
    lwz r0, 0x1660(r3)
    stw r0, 0xc(r4)
    blr
}

asm void fn_802A4478(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lwz r0, 0x0(r4)
    stw r31, 0x2c(r1)
    cmpwi r0, 0x2
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    bne lbl_fn_802A4478_00000518
    lwz r0, 0x1674(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802A4478_00000518
    li r30, 0x1
    stw r30, 0x1674(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl fn_80178A6C
    mr r3, r28
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r28
    bl fn_8016DA4C
    li r31, 0x0
    li r0, 0x2
    stw r0, 0x58c(r28)
    stw r31, 0x14d8(r28)
    stw r31, 0x14dc(r28)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r4, 0x6
    stw r3, 0x590(r28)
    mr r3, r28
    stfs f0, 0x155c(r28)
    stw r31, 0x15fc(r28)
    bl fn_8016E970
    lfs f0, lbl_80883D30
    li r0, 0x17
    stw r0, 0x560(r28)
    addi r3, r28, 0xb0
    lfs f1, lbl_80883D28
    li r4, 0x0
    stw r30, 0x3fc(r28)
    li r5, 0x1e1
    lfs f2, lbl_80883D60
    li r6, 0x0
    stfs f0, 0x2fc(r28)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r28)
    bl fn_80097C08
    lfs f3, 0x1640(r28)
    addi r3, r1, 0x8
    lfs f0, 0x530(r28)
    addi r4, r28, 0x1560
    lfs f5, 0x163c(r28)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r28)
    lfs f3, 0x1638(r28)
    lfs f0, 0x528(r28)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1568(r28)
lbl_fn_802A4478_00000518:
    lwz r0, 0x1650(r28)
    cmpwi r0, 0x0
    bne lbl_fn_802A4478_00000554
    lha r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_802A4478_00000554
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_802A4478_00000554
    lfs f1, lbl_80883D30
    li r4, 0x8b8
    li r5, 0xf
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_802A4478_00000554:
    lwz r5, 0x0(r29)
    lwz r4, 0x4(r29)
    lha r3, 0x8(r29)
    lwz r0, 0xc(r29)
    stw r5, 0x58c(r28)
    stw r4, 0x14bc(r28)
    stw r3, 0x1650(r28)
    stw r0, 0x1660(r28)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802A4628(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14d8(r3)
    stw r31, 0x14dc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883D28
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stfs f0, 0x155c(r30)
    stw r31, 0x15fc(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f2, lbl_80883D30
    li r0, 0x1
    lfs f0, lbl_80883D88
    addi r3, r30, 0xb0
    stfs f2, 0x2fc(r30)
    li r4, 0x0
    lfs f1, lbl_80883D28
    li r5, 0x2
    stw r0, 0x3fc(r30)
    li r6, 0x1
    lfs f2, lbl_80883D60
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, -0x2
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A46E0(void)
{
    nofralloc
    blr
}

asm void fn_802A46E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_8000D9E8
    bl fn_802A36B0
    lwz r0, 0x15c8(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_802A46E4_0000069C
    mr r3, r31
    bl fn_802A36B8
    cmpwi r3, 0x0
    beq lbl_fn_802A46E4_0000069C
    li r0, 0x0
    stw r0, 0x15c8(r31)
    stw r0, 0x15c4(r31)
lbl_fn_802A46E4_0000069C:
    lwz r0, 0xd1c(r31)
    stw r0, 0x14d4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802A46E4_000006B0
    stw r30, 0x14d4(r31)
lbl_fn_802A46E4_000006B0:
    lwz r0, 0xd18(r31)
    lwz r3, 0x14dc(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14dc(r31)
    beq lbl_fn_802A46E4_000006D4
    lwz r0, 0x14d4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802A46E4_000006E4
lbl_fn_802A46E4_000006D4:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802A46E4_00000834
lbl_fn_802A46E4_000006E4:
    beq lbl_fn_802A46E4_00000834
    lwz r0, 0x58c(r31)
    cmplwi r0, 0x13
    bgt lbl_fn_802A46E4_00000808
    lis r3, jumptable_80785AE8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80785AE8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f1, lbl_80883D74
    mr r3, r31
    bl fn_8029DBE0
    mr r3, r31
    bl fn_8029F3FC
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_8029FAC0
    b lbl_fn_802A46E4_00000834
    lfs f1, lbl_80883D30
    mr r3, r31
    bl fn_8029DBE0
    mr r3, r31
    bl fn_8029F738
    b lbl_fn_802A46E4_00000834
    lfs f1, lbl_80883D30
    mr r3, r31
    bl fn_8029DBE0
    mr r3, r31
    bl fn_8029FD34
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A057C
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A0818
    lwz r3, 0x1610(r31)
    addi r0, r3, 0x1
    stw r0, 0x1610(r31)
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A0B00
    lwz r3, 0x1610(r31)
    addi r0, r3, 0x1
    stw r0, 0x1610(r31)
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A118C
    lwz r3, 0x1610(r31)
    addi r0, r3, 0x1
    stw r0, 0x1610(r31)
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A16A4
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A17CC
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A19B0
    lwz r3, 0x1610(r31)
    addi r0, r3, 0x1
    stw r0, 0x1610(r31)
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A1BFC
    b lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_802A2070
    lwz r3, 0x1610(r31)
    addi r0, r3, 0x1
    stw r0, 0x1610(r31)
    b lbl_fn_802A46E4_00000834
lbl_fn_802A46E4_00000808:
    lfs f1, lbl_80883D30
    mr r3, r31
    bl fn_8029DBE0
    mr r3, r31
    bl fn_8029DB58
    mr r3, r31
    bl fn_8029F3F4
    cmpwi r3, 0x0
    beq lbl_fn_802A46E4_00000834
    mr r3, r31
    bl fn_8029E950
lbl_fn_802A46E4_00000834:
    mr r3, r31
    bl fn_8029DB54
    lwz r0, 0x1688(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802A46E4_000008BC
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x54
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_802A46E4_00000868
    mr r3, r31
    bl fn_802A2600
lbl_fn_802A46E4_00000868:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4c
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_802A46E4_00000888
    mr r3, r31
    bl fn_802A254C
lbl_fn_802A46E4_00000888:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4d
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_802A46E4_000008BC
    lwz r4, 0x14fc(r31)
    mr r3, r31
    bl fn_802A3D6C
    cmpwi r3, 0x0
    beq lbl_fn_802A46E4_000008BC
    mr r3, r31
    bl fn_802A2494
lbl_fn_802A46E4_000008BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A4968(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802A4968_00000910
    mulli r0, r4, 0x1a
    add r4, r3, r0
    addi r4, r4, 0x34
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_802A4968_00000910
    li r31, 0x1
lbl_fn_802A4968_00000910:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802A49BC(void)
{
    nofralloc
    lwz r3, lbl_8087EEF0
    blr
}

asm void fn_802A49C4(void)
{
    nofralloc
    blr
}

asm void fn_802A49C8(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_802A49C8_00000948
    li r3, 0x0
    blr
lbl_fn_802A49C8_00000948:
    cmpwi r0, 0xe
    bne lbl_fn_802A49C8_00000958
    li r3, 0x1
    blr
lbl_fn_802A49C8_00000958:
    lfs f1, 0x52c(r3)
    lfs f0, lbl_80883D84
    fcmpo cr0, f1, f0
    mfcr r3
    extrwi r3, r3, 1, 1
    blr
}

asm void fn_802A4A04(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_802A4A04_00000B08
    addic. r0, r3, 0x1684
    beq lbl_fn_802A4A04_000009BC
    lwz r4, 0x1684(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802A4A04_000009BC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802A4A04_000009BC
    bl fn_800897D8
lbl_fn_802A4A04_000009BC:
    addic. r3, r30, 0x167c
    beq lbl_fn_802A4A04_000009CC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802A4A04_000009CC:
    addic. r29, r30, 0x1668
    beq lbl_fn_802A4A04_000009EC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_802A4A04_000009EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802A4A04_000009EC:
    addic. r4, r30, 0x1624
    beq lbl_fn_802A4A04_00000A1C
    beq lbl_fn_802A4A04_00000A1C
    beq lbl_fn_802A4A04_00000A1C
    beq lbl_fn_802A4A04_00000A1C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802A4A04_00000A1C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802A4A04_00000A1C:
    addic. r4, r30, 0x1600
    beq lbl_fn_802A4A04_00000A48
    beq lbl_fn_802A4A04_00000A48
    beq lbl_fn_802A4A04_00000A48
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802A4A04_00000A48
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802A4A04_00000A48:
    addic. r4, r30, 0x15ec
    beq lbl_fn_802A4A04_00000A74
    beq lbl_fn_802A4A04_00000A74
    beq lbl_fn_802A4A04_00000A74
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802A4A04_00000A74
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802A4A04_00000A74:
    addic. r4, r30, 0x15b4
    beq lbl_fn_802A4A04_00000AA4
    beq lbl_fn_802A4A04_00000AA4
    beq lbl_fn_802A4A04_00000AA4
    beq lbl_fn_802A4A04_00000AA4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802A4A04_00000AA4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802A4A04_00000AA4:
    addic. r4, r30, 0x15a8
    beq lbl_fn_802A4A04_00000AD4
    beq lbl_fn_802A4A04_00000AD4
    beq lbl_fn_802A4A04_00000AD4
    beq lbl_fn_802A4A04_00000AD4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802A4A04_00000AD4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802A4A04_00000AD4:
    lis r4, fn_8000D760@ha
    addi r3, r30, 0x1508
    addi r4, r4, fn_8000D760@l
    li r5, 0xc
    li r6, 0x6
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_805A3D00
    cmpwi r31, 0x0
    ble lbl_fn_802A4A04_00000B08
    mr r3, r30
    bl dtor_80084684
lbl_fn_802A4A04_00000B08:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802A4BBC(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r30, r5
    lwz r5, 0x20(r5)
    mr r29, r3
    bl fn_8035B694
    lfs f0, lbl_80883E38
    lis r3, lbl_80785D28@ha
    li r31, 0x0
    li r0, -0x1
    addi r3, r3, lbl_80785D28@l
    li r4, 0x258
    li r28, 0x1
    stw r3, 0x0(r29)
    addi r3, r29, 0x14fc
    stw r31, 0x14b8(r29)
    stw r4, 0x14bc(r29)
    stw r31, 0x14c0(r29)
    stw r28, 0x14c4(r29)
    stw r31, 0x14c8(r29)
    stw r31, 0x14cc(r29)
    stw r31, 0x14d0(r29)
    stw r0, 0x14d4(r29)
    stw r0, 0x14d8(r29)
    stfs f0, 0x14dc(r29)
    stw r31, 0x14e0(r29)
    stw r31, 0x14e4(r29)
    stw r31, 0x14e8(r29)
    stw r31, 0x14ec(r29)
    stw r31, 0x14f0(r29)
    stw r31, 0x14f4(r29)
    bl fn_802377B8
    addi r3, r29, 0x1508
    bl fn_80237518
    addi r3, r29, 0x1514
    bl fn_802377B8
    addi r3, r29, 0x1520
    bl fn_802377B8
    addi r3, r29, 0x152c
    bl fn_802377B8
    addi r3, r29, 0x1538
    bl fn_800CB360
    lfs f0, lbl_80883E44
    addi r3, r29, 0x1654
    lfs f2, lbl_80883E3C
    lfs f1, lbl_80883E40
    stw r31, 0x153c(r29)
    stw r31, 0x1580(r29)
    stfs f2, 0x15d0(r29)
    stw r31, 0x15e4(r29)
    stfs f1, 0x15e8(r29)
    stw r28, 0x15ec(r29)
    stfs f0, 0x15f4(r29)
    stfs f0, 0x15f8(r29)
    stfs f0, 0x15fc(r29)
    stfs f0, 0x1600(r29)
    stfs f0, 0x1604(r29)
    stfs f0, 0x1608(r29)
    stfs f0, 0x160c(r29)
    stfs f0, 0x1610(r29)
    stw r31, 0x1644(r29)
    stw r28, 0x1648(r29)
    bl fn_802377B8
    addi r27, r29, 0x168c
    li r4, 0x64
    li r0, 0x65
    stw r4, 0x1680(r29)
    mr r3, r27
    li r4, 0x1
    stw r31, 0x167c(r29)
    stw r0, 0x1684(r29)
    stw r31, 0x1688(r29)
    bl fn_80056DB8
    lis r28, lbl_80777630@ha
    addi r26, r29, 0x16e4
    addi r28, r28, lbl_80777630@l
    stw r28, 0x0(r27)
    mr r3, r26
    li r4, 0x1
    bl fn_80056DB8
    addi r27, r29, 0x173c
    stw r28, 0x0(r26)
    mr r3, r27
    li r4, 0x1
    bl fn_80056DB8
    addi r26, r29, 0x1794
    stw r28, 0x0(r27)
    mr r3, r26
    li r4, 0x1
    bl fn_80056DB8
    addi r27, r29, 0x17ec
    stw r28, 0x0(r26)
    mr r3, r27
    li r4, 0x1
    bl fn_80056DB8
    addi r26, r29, 0x1844
    stw r28, 0x0(r27)
    mr r3, r26
    bl fn_80473E74
    lwz r5, 0x12a4(r29)
    lis r3, lbl_8078FBB0@ha
    lfs f1, lbl_80883E40
    addi r3, r3, lbl_8078FBB0@l
    lfs f0, lbl_80883E44
    oris r5, r5, 0x40
    lwz r0, 0x958(r29)
    lis r28, lbl_80745FE4@ha
    stw r3, 0x0(r26)
    addi r3, r29, 0x14fc
    ori r0, r0, 0x10
    addi r4, r28, lbl_80745FE4@l
    stw r31, 0x184c(r29)
    stw r31, 0x1850(r29)
    stw r31, 0x1854(r29)
    stw r5, 0x12a4(r29)
    stw r0, 0x958(r29)
    stfs f1, 0x1640(r29)
    stfs f1, 0x1638(r29)
    stfs f1, 0x1634(r29)
    stfs f1, 0x1630(r29)
    stfs f1, 0x162c(r29)
    stfs f1, 0x1624(r29)
    stfs f1, 0x1620(r29)
    stfs f1, 0x161c(r29)
    stfs f1, 0x1618(r29)
    stfs f0, 0x163c(r29)
    stfs f0, 0x1628(r29)
    stfs f0, 0x1614(r29)
    bl fn_8023780C
    addi r28, r28, lbl_80745FE4@l
    addi r3, r29, 0x1508
    addi r4, r28, 0xe
    bl fn_80237654
    addi r3, r29, 0x1514
    addi r4, r28, 0x1c
    bl fn_8023780C
    addi r3, r29, 0x1520
    addi r4, r28, 0x2a
    bl fn_8023780C
    addi r3, r29, 0x152c
    addi r4, r28, 0x37
    bl fn_8023780C
    addi r3, r29, 0x1654
    addi r4, r28, 0x44
    bl fn_8023780C
    addi r26, r28, 0x51
    stw r31, 0x38(r1)
    addi r27, r1, 0x38
    stw r31, 0x3c(r1)
    mr r3, r26
    stw r31, 0x40(r1)
    bl strlen
    mr r25, r3
    mr r3, r27
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r26
    add r7, r26, r25
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r28, 0x69
    stw r31, 0x2c(r1)
    addi r27, r1, 0x2c
    stw r31, 0x30(r1)
    mr r3, r26
    stw r31, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r27
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r27
    stb r0, 0x10(r1)
    mr r6, r26
    add r7, r26, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r30, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r31, 0x48(r1)
    li r4, 0x0
    stw r31, 0x4c(r1)
    stw r31, 0x50(r1)
    stw r31, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r30, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_802A4BBC_00000E94:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802A4BBC_00000F2C
    addi r4, r28, 0x7c
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_802A4BBC_00000F2C
    mr r3, r26
    addi r4, r28, 0x7d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802A4BBC_00000F1C
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802A4BBC_00000EE8
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802A4BBC_00000EEC
lbl_fn_802A4BBC_00000EE8:
    lwz r25, 0x30(r1)
lbl_fn_802A4BBC_00000EEC:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_802A4BBC_00000F1C:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802A4BBC_00000E94
lbl_fn_802A4BBC_00000F2C:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r29, 0x1844
    srwi. r0, r0, 31
    bne lbl_fn_802A4BBC_00000F54
    addi r4, r1, 0x21
    b lbl_fn_802A4BBC_00000F58
lbl_fn_802A4BBC_00000F54:
    lwz r4, 0x28(r1)
lbl_fn_802A4BBC_00000F58:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802A4BBC_00000F7C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802A4BBC_00000F7C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802A4BBC_00000F90
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802A4BBC_00000F90:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802A4BBC_00000FA4
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802A4BBC_00000FA4:
    addi r11, r1, 0x6a0
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802A5054(void)
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
    beq lbl_fn_802A5054_00001140
    addic. r0, r3, 0x184c
    beq lbl_fn_802A5054_0000100C
    lwz r4, 0x184c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802A5054_0000100C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802A5054_0000100C
    bl fn_800897D8
lbl_fn_802A5054_0000100C:
    addic. r3, r29, 0x1844
    beq lbl_fn_802A5054_0000101C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802A5054_0000101C:
    addic. r3, r29, 0x17ec
    beq lbl_fn_802A5054_0000102C
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802A5054_0000102C:
    addic. r3, r29, 0x1794
    beq lbl_fn_802A5054_0000103C
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802A5054_0000103C:
    addic. r3, r29, 0x173c
    beq lbl_fn_802A5054_0000104C
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802A5054_0000104C:
    addic. r3, r29, 0x16e4
    beq lbl_fn_802A5054_0000105C
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802A5054_0000105C:
    addic. r3, r29, 0x168c
    beq lbl_fn_802A5054_0000106C
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802A5054_0000106C:
    addic. r31, r29, 0x1654
    beq lbl_fn_802A5054_0000108C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802A5054_0000108C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802A5054_0000108C:
    addi r3, r29, 0x1538
    li r4, -0x1
    bl fn_800CB3A0
    addic. r31, r29, 0x152c
    beq lbl_fn_802A5054_000010B8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802A5054_000010B8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802A5054_000010B8:
    addic. r31, r29, 0x1520
    beq lbl_fn_802A5054_000010D8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802A5054_000010D8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802A5054_000010D8:
    addic. r31, r29, 0x1514
    beq lbl_fn_802A5054_000010F8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802A5054_000010F8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802A5054_000010F8:
    addi r3, r29, 0x1508
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x14fc
    beq lbl_fn_802A5054_00001124
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802A5054_00001124
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802A5054_00001124:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_802A5054_00001140
    mr r3, r29
    bl dtor_80084684
lbl_fn_802A5054_00001140:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802A51F4(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    stw r0, 0x684(r1)
    lis r0, 0x4330
    stw r31, 0x67c(r1)
    stw r30, 0x678(r1)
    mr r30, r3
    stw r29, 0x674(r1)
    stw r28, 0x670(r1)
    stw r0, 0x658(r1)
    stw r0, 0x660(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001964
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802A51F4_000011B4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802A51F4_00001964
lbl_fn_802A51F4_000011B4:
    addi r3, r30, 0x14fc
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001964
    addi r3, r30, 0x1508
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001964
    addi r3, r30, 0x1514
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001964
    addi r3, r30, 0x1520
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001964
    addi r3, r30, 0x152c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001964
    addi r3, r30, 0x1654
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001964
    addi r3, r30, 0x1844
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001964
    lwz r5, 0x5c0(r30)
    mr r3, r30
    lwz r4, 0x1694(r30)
    clrlwi r8, r5, 1
    lwz r0, 0x16ec(r30)
    ori r7, r4, 0x3
    lwz r5, 0x1744(r30)
    ori r6, r0, 0x3
    lwz r4, 0x179c(r30)
    lwz r0, 0x17f4(r30)
    ori r5, r5, 0x3
    ori r4, r4, 0x3
    stw r8, 0x5c0(r30)
    ori r0, r0, 0x3
    stw r7, 0x1694(r30)
    stw r30, 0x1698(r30)
    stw r6, 0x16ec(r30)
    stw r30, 0x16f0(r30)
    stw r5, 0x1744(r30)
    stw r30, 0x1748(r30)
    stw r4, 0x179c(r30)
    stw r30, 0x17a0(r30)
    stw r0, 0x17f4(r30)
    stw r30, 0x17f8(r30)
    bl fn_802A7970
    li r29, 0x0
    stw r29, 0x153c(r30)
    addi r3, r30, 0x1844
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_802A51F4_000017C8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802A51F4_000017C8
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802A51F4_000017C8
    addi r3, r30, 0x1844
    bl fn_8047059C
    mr r28, r3
    addi r3, r30, 0x1844
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    mr r31, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x20(r1)
    addi r3, r1, 0x30
    li r5, 0x400
    stw r29, 0x24(r1)
    li r4, 0x0
    stw r29, 0x28(r1)
    stw r29, 0x2c(r1)
    stw r29, 0x650(r1)
    bl memset
    addi r3, r1, 0x630
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x20(r1)
    mr r4, r31
    mr r5, r28
    addi r3, r1, 0x20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x20
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x20(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_80745FE4@ha
    li r29, 0x1
    addi r31, r31, lbl_80745FE4@l
lbl_fn_802A51F4_0000134C:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r28, r3
    addi r4, r31, 0x86
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_0000137C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x164c(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_0000137C:
    mr r3, r28
    addi r4, r31, 0x90
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000013A4
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1660(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_000013A4:
    mr r3, r28
    addi r4, r31, 0x99
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000013CC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14bc(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_000013CC:
    mr r3, r28
    addi r4, r31, 0xa2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000013F4
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1650(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_000013F4:
    mr r3, r28
    addi r4, r31, 0xb0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001498
lbl_fn_802A51F4_00001408:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802A51F4_0000145C
lbl_fn_802A51F4_00001434:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802A51F4_00001450
    mulli r0, r5, 0x28
    add r4, r7, r0
    b lbl_fn_802A51F4_00001460
lbl_fn_802A51F4_00001450:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802A51F4_00001434
lbl_fn_802A51F4_0000145C:
    li r4, 0x0
lbl_fn_802A51F4_00001460:
    cmpwi r4, 0x0
    beq lbl_fn_802A51F4_0000148C
    lwz r0, 0x153c(r30)
    slwi r0, r0, 2
    add r0, r30, r0
    addic. r5, r0, 0x1540
    beq lbl_fn_802A51F4_00001480
    stw r4, 0x0(r5)
lbl_fn_802A51F4_00001480:
    lwz r4, 0x153c(r30)
    addi r0, r4, 0x1
    stw r0, 0x153c(r30)
lbl_fn_802A51F4_0000148C:
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001408
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_00001498:
    mr r3, r28
    addi r4, r31, 0xbc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_0000153C
lbl_fn_802A51F4_000014AC:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802A51F4_00001500
lbl_fn_802A51F4_000014D8:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802A51F4_000014F4
    mulli r0, r5, 0x28
    add r4, r7, r0
    b lbl_fn_802A51F4_00001504
lbl_fn_802A51F4_000014F4:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802A51F4_000014D8
lbl_fn_802A51F4_00001500:
    li r4, 0x0
lbl_fn_802A51F4_00001504:
    cmpwi r4, 0x0
    beq lbl_fn_802A51F4_00001530
    lwz r0, 0x1580(r30)
    slwi r0, r0, 2
    add r0, r30, r0
    addic. r5, r0, 0x1584
    beq lbl_fn_802A51F4_00001524
    stw r4, 0x0(r5)
lbl_fn_802A51F4_00001524:
    lwz r4, 0x1580(r30)
    addi r0, r4, 0x1
    stw r0, 0x1580(r30)
lbl_fn_802A51F4_00001530:
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000014AC
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_0000153C:
    mr r3, r28
    addi r4, r31, 0xc6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001568
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1664(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_00001568:
    mr r3, r28
    addi r4, r31, 0xcf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001594
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1668(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_00001594:
    mr r3, r28
    addi r4, r31, 0xd6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000015C0
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x166c(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_000015C0:
    mr r3, r28
    addi r4, r31, 0xdd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000015EC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1670(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_000015EC:
    mr r3, r28
    addi r4, r31, 0xe5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001618
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1674(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_00001618:
    mr r3, r28
    addi r4, r31, 0xec
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001644
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1678(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_00001644:
    mr r3, r28
    addi r4, r31, 0xf4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001670
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x167c(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_00001670:
    mr r3, r28
    addi r4, r31, 0x101
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000016A4
    addi r3, r1, 0x20
    bl fn_8005B3CC
    addi r4, r31, 0x10c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000017B8
    stw r29, 0x1854(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_000016A4:
    mr r3, r28
    addi r4, r31, 0x10f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000016CC
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1680(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_000016CC:
    mr r3, r28
    addi r4, r31, 0x118
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000016F4
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1684(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_000016F4:
    mr r3, r28
    addi r4, r31, 0x123
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_0000171C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x1688(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_0000171C:
    mr r3, r28
    addi r4, r31, 0x12c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001744
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x15d0(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_00001744:
    mr r3, r28
    addi r4, r31, 0x138
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_0000176C
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14dc(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_0000176C:
    mr r3, r28
    addi r4, r31, 0x149
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_00001794
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14e4(r30)
    b lbl_fn_802A51F4_000017B8
lbl_fn_802A51F4_00001794:
    mr r3, r28
    addi r4, r31, 0x157
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_000017B8
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x14ec(r30)
lbl_fn_802A51F4_000017B8:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802A51F4_0000134C
lbl_fn_802A51F4_000017C8:
    lwz r0, 0x7ec(r30)
    lwz r4, 0x1580(r30)
    ori r3, r0, 0x1c0
    lwz r0, 0x54c(r30)
    oris r3, r3, 0x1
    cmpwi r4, 0x0
    ori r3, r3, 0xc219
    ori r0, r0, 0x200
    oris r3, r3, 0x380
    stw r3, 0x7ec(r30)
    stw r0, 0x54c(r30)
    beq lbl_fn_802A51F4_00001810
    lwz r4, 0x1584(r30)
    addi r3, r30, 0x15c4
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x15cc(r30)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_802A51F4_00001810:
    lis r31, lbl_80745FE4@ha
    addi r3, r30, 0xb0
    addi r31, r31, lbl_80745FE4@l
    addi r4, r31, 0x16a
    bl fn_80092954
    lwz r0, 0x18(r3)
    lis r6, lbl_80745FC0@ha
    stw r0, 0x8(r1)
    addi r4, r31, 0x176
    lwz r0, 0x184c(r30)
    lbz r3, 0x8(r1)
    stw r3, 0x65c(r1)
    cmpwi r0, 0x0
    lbz r5, 0x9(r1)
    stw r5, 0x664(r1)
    lfd f3, 0x658(r1)
    lfd f7, lbl_80745FC0@l(r6)
    lfd f0, 0x660(r1)
    lbz r3, 0xa(r1)
    fsubs f3, f3, f7
    lbz r0, 0xb(r1)
    fsubs f4, f0, f7
    lfs f6, lbl_80883E48
    stw r0, 0x664(r1)
    fdivs f5, f3, f6
    stw r3, 0x65c(r1)
    lfd f0, 0x660(r1)
    lfd f3, 0x658(r1)
    stfs f5, 0x10(r1)
    fdivs f4, f4, f6
    stfs f5, 0x15f4(r30)
    stfs f4, 0x14(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    stfs f4, 0x15f8(r30)
    fdivs f3, f3, f6
    stfs f3, 0x18(r1)
    fdivs f0, f0, f6
    stfs f3, 0x15fc(r30)
    stfs f0, 0x1c(r1)
    stfs f0, 0x1600(r30)
    bne lbl_fn_802A51F4_000018D8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802A51F4_000018D8
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x184c(r30)
    mr r28, r3
    b lbl_fn_802A51F4_000018DC
lbl_fn_802A51F4_000018D8:
    li r28, 0x0
lbl_fn_802A51F4_000018DC:
    lis r31, lbl_80745FE4@ha
    mr r3, r28
    addi r31, r31, lbl_80745FE4@l
    addi r5, r30, 0x1850
    addi r4, r31, 0x17c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r31, 0x101
    addi r5, r30, 0x1854
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r31, 0x186
    addi r5, r30, 0x1858
    li r6, 0x5
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802A51F4_0000195C
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802A51F4_0000195C:
    li r3, 0x1
    b lbl_fn_802A51F4_00001968
lbl_fn_802A51F4_00001964:
    li r3, 0x0
lbl_fn_802A51F4_00001968:
    lwz r0, 0x684(r1)
    lwz r31, 0x67c(r1)
    lwz r30, 0x678(r1)
    lwz r29, 0x674(r1)
    lwz r28, 0x670(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}
