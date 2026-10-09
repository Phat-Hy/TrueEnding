#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003EA3C(void);
extern void fn_80056E40(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80084320(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800DC288(void);
extern void fn_800EAECC(void);
extern void fn_800EB49C(void);
extern void fn_800EE360(void);
extern void fn_8011CD84(void);
extern void fn_8011FC10(void);
extern void fn_8013655C(void);
extern void fn_80139560(void);
extern void fn_80151448(void);
extern void fn_80152D10(void);
extern void fn_8015495C(void);
extern void fn_8015E7A0(void);
extern void fn_8015EB2C(void);
extern void fn_8016EB48(void);
extern void fn_801765D8(void);
extern void fn_80178208(void);
extern void fn_8017C904(void);
extern void fn_8019A3F4(void);
extern void fn_8019A580(void);
extern void fn_8019AFE8(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807434DC[];
extern u8 lbl_80743508[];
extern u8 lbl_8074367C[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807840A8[];
extern u8 lbl_80784210[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8088322C;
extern u32 lbl_80883230;
extern u32 lbl_80883234;
extern u32 lbl_80883238;
extern u32 lbl_8088323C;
extern u32 lbl_80883240;
extern u32 lbl_80883244;
extern u32 lbl_80883248;
extern u32 lbl_8088324C;
extern u32 lbl_80883250;
extern u32 lbl_80883254;
extern u32 lbl_80883258;
extern u32 lbl_8088325C;
extern u32 lbl_80883260;
extern u32 lbl_80883268;
extern u32 lbl_8088326C;
extern u32 lbl_80883270;
extern u32 lbl_80883274;
extern u32 lbl_80883278;
extern u32 lbl_8088327C;

/* Function declarations */
void fn_80249588(void);
void fn_80249C14(void);
void fn_80249D40(void);
void fn_80249F98(void);
void fn_8024A004(void);
void fn_8024A090(void);
void fn_8024A134(void);
void fn_8024A1E0(void);
void fn_8024A4A0(void);
void fn_8024A608(void);
void fn_8024A650(void);
void fn_8024AB20(void);
void fn_8024AD30(void);

asm void fn_80249588(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x6c
    bne lbl_fn_80249588_00000210
    lwz r7, 0x14fc(r3)
    cmpwi r7, 0x0
    bne lbl_fn_80249588_000000B4
    li r0, 0x0
    stw r0, 0x58c(r3)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80249588_000001CC
    lis r5, lbl_807434DC@ha
    li r3, 0x20
    addi r5, r5, lbl_807434DC@l
    li r4, 0x0
    addi r5, r5, 0x5
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80249588_000000A0
    lwz r4, 0x14fc(r31)
    bl fn_8019AFE8
    mr r4, r3
lbl_fn_80249588_000000A0:
    lwz r3, 0x14fc(r31)
    bl fn_80178208
    li r0, 0x0
    stw r0, 0x14fc(r31)
    b lbl_fn_80249588_000001CC
lbl_fn_80249588_000000B4:
    lwz r0, 0x55c(r7)
    cmpwi r0, 0x6
    bne lbl_fn_80249588_000000CC
    lwz r0, 0x560(r7)
    cmpwi r0, 0x71
    beq lbl_fn_80249588_000001CC
lbl_fn_80249588_000000CC:
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883238
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80249588_000001CC
    lwz r8, 0x38(r7)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80249588_0000010C
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_80249588_0000010C
    li r6, 0x1
lbl_fn_80249588_0000010C:
    cmpwi r6, 0x0
    beq lbl_fn_80249588_00000128
    lwz r0, 0x7e0(r7)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80249588_00000128
    li r4, 0x1
lbl_fn_80249588_00000128:
    cmpwi r4, 0x0
    beq lbl_fn_80249588_0000015C
    lwz r0, 0x55c(r7)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80249588_00000150
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_80249588_00000150
    li r4, 0x1
lbl_fn_80249588_00000150:
    cmpwi r4, 0x0
    bne lbl_fn_80249588_0000015C
    li r5, 0x1
lbl_fn_80249588_0000015C:
    cmpwi r5, 0x0
    beq lbl_fn_80249588_000001AC
    lis r5, lbl_807434DC@ha
    li r3, 0x1c
    addi r5, r5, lbl_807434DC@l
    li r4, 0x3
    addi r5, r5, 0x5
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80249588_000001A0
    lwz r4, 0x14fc(r31)
    mr r5, r31
    bl fn_8019A3F4
    mr r4, r3
lbl_fn_80249588_000001A0:
    lwz r3, 0x14fc(r31)
    bl fn_80178208
    b lbl_fn_80249588_000001CC
lbl_fn_80249588_000001AC:
    li r0, 0x0
    stw r0, 0x14fc(r3)
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x58c(r3)
    mr r3, r31
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80249588_000001CC:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80249588_00000660
    lfs f1, lbl_8088322C
    addi r3, r31, 0xb0
    lfs f2, lbl_80883230
    li r4, 0x0
    li r5, 0x6f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80249588_00000660
lbl_fn_80249588_00000210:
    cmpwi r0, 0x6f
    bne lbl_fn_80249588_00000444
    lwz r5, 0xd1c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80249588_00000400
    lfs f4, 0x530(r5)
    addi r4, r1, 0x8c
    lfs f0, 0x530(r3)
    addi r30, r1, 0x74
    lfs f3, lbl_8088322C
    fsubs f2, f4, f0
    lfs f5, 0x528(r5)
    lfs f4, 0x528(r3)
    stfs f3, 0x90(r1)
    fsubs f4, f5, f4
    lfs f0, lbl_8088323C
    frsp f5, f2
    stfs f2, 0x94(r1)
    stfs f4, 0x8c(r1)
    fabs f4, f5
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f4, f4
    stfs f2, 0x7c(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80249588_00000298
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80249588_0000028C
    lfs f0, lbl_80883240
    b lbl_fn_80249588_00000290
lbl_fn_80249588_0000028C:
    lfs f0, lbl_80883244
lbl_fn_80249588_00000290:
    stfs f0, 0x48(r1)
    b lbl_fn_80249588_000002AC
lbl_fn_80249588_00000298:
    fmr f2, f5
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80249588_000002AC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088322C
    addi r4, r1, 0x38
    lfs f30, 0xd0(r1)
    mr r5, r4
    lfs f31, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80883234
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xf8(r1)
    stfs f31, 0xfc(r1)
    stfs f30, 0x100(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088323C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80249588_000003C8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088322C
    fcmpo cr0, f3, f0
    ble lbl_fn_80249588_000003B8
    lfs f0, lbl_80883240
    b lbl_fn_80249588_000003BC
lbl_fn_80249588_000003B8:
    lfs f0, lbl_80883244
lbl_fn_80249588_000003BC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80249588_000003DC
lbl_fn_80249588_000003C8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80249588_000003DC:
    lfs f2, lbl_8088322C
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    stfs f2, 0x7c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_80249588_00000400:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80249588_00000660
    lfs f1, lbl_8088322C
    addi r3, r31, 0xb0
    lfs f2, lbl_80883230
    li r4, 0x0
    li r5, 0x70
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80249588_00000660
lbl_fn_80249588_00000444:
    cmpwi r0, 0x70
    bne lbl_fn_80249588_000005F4
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883248
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80249588_000005B8
    lwz r0, 0x14fc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80249588_000005B8
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80249588_00000480
    addi r3, r4, 0x528
    b lbl_fn_80249588_00000504
lbl_fn_80249588_00000480:
    lfs f3, lbl_8088322C
    li r4, 0x79
    lfs f0, lbl_80883234
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x98
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x70(r1)
    addi r3, r1, 0x50
    lfs f5, lbl_80883248
    lfs f3, 0x6c(r1)
    fmuls f6, f4, f5
    lfs f4, 0x530(r31)
    fmuls f7, f3, f5
    lfs f0, 0x68(r1)
    lfs f3, 0x52c(r31)
    fmuls f5, f0, f5
    lfs f0, 0x528(r31)
    fadds f4, f4, f6
    fadds f3, f3, f7
    stfs f5, 0x5c(r1)
    fadds f0, f0, f5
    stfs f7, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f4, 0x58(r1)
lbl_fn_80249588_00000504:
    lfs f2, 0x8(r3)
    addi r30, r1, 0x80
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_8088324C
    lfs f3, 0x84(r1)
    stfs f2, 0x88(r1)
    fadds f0, f3, f0
    stfs f0, 0x84(r1)
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80249588_000005B8
    lis r5, lbl_807434DC@ha
    li r3, 0x24
    addi r5, r5, lbl_807434DC@l
    li r4, 0x3
    addi r5, r5, 0x5
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80249588_00000580
    li r3, 0x69f
    bl fn_80219E6C
    lwz r4, 0x14fc(r31)
    mr r6, r3
    mr r3, r29
    mr r5, r30
    bl fn_8019A580
    mr r29, r3
lbl_fn_80249588_00000580:
    lwz r3, 0x14fc(r31)
    mr r4, r29
    bl fn_80178208
    li r0, 0x0
    stw r0, 0x14fc(r31)
    li r4, 0xe6
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80249588_000005B8
    lwz r3, lbl_8087F430
    li r4, 0xe6
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80249588_000005B8:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80249588_00000660
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    b lbl_fn_80249588_00000660
lbl_fn_80249588_000005F4:
    li r0, 0x0
    stw r0, 0x58c(r3)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r0, 0x14fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80249588_00000660
    lis r5, lbl_807434DC@ha
    li r3, 0x20
    addi r5, r5, lbl_807434DC@l
    li r4, 0x0
    addi r5, r5, 0x5
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80249588_00000650
    lwz r4, 0x14fc(r31)
    bl fn_8019AFE8
    mr r4, r3
lbl_fn_80249588_00000650:
    lwz r3, 0x14fc(r31)
    bl fn_80178208
    li r0, 0x0
    stw r0, 0x14fc(r31)
lbl_fn_80249588_00000660:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80249C14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f5, lbl_8088322C
    stw r0, 0x24(r1)
    addi r5, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lfs f2, 0x18(r4)
    psq_l f1, 0x10(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmuls f0, f2, f5
    stfs f2, 0x10(r1)
    lfs f4, 0x10(r4)
    lfs f3, 0x14(r4)
    fmuls f4, f4, f5
    stfs f0, 0x18(r4)
    fmuls f0, f3, f5
    stfs f4, 0x10(r4)
    stfs f0, 0x14(r4)
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80249C14_000007A0
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80249C14_00000724
    lwz r0, 0x560(r30)
    cmpwi r0, 0x17
    beq lbl_fn_80249C14_00000738
lbl_fn_80249C14_00000724:
    mr r3, r30
    addi r4, r1, 0x8
    li r5, -0x1
    li r6, 0x0
    bl fn_8015E7A0
lbl_fn_80249C14_00000738:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14fc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80249C14_000007A0
    lis r5, lbl_807434DC@ha
    li r3, 0x20
    addi r5, r5, lbl_807434DC@l
    li r4, 0x0
    addi r5, r5, 0x5
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80249C14_00000790
    lwz r4, 0x14fc(r30)
    bl fn_8019AFE8
    mr r4, r3
lbl_fn_80249C14_00000790:
    lwz r3, 0x14fc(r30)
    bl fn_80178208
    li r0, 0x0
    stw r0, 0x14fc(r30)
lbl_fn_80249C14_000007A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80249D40(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r4, lbl_807434DC@ha
    stw r0, 0x94(r1)
    addi r4, r4, lbl_807434DC@l
    addi r5, r1, 0x50
    stw r31, 0x8c(r1)
    mr r31, r3
    addi r4, r4, 0x6
    stw r30, 0x88(r1)
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x5b0(r3)
    fadds f0, f3, f0
    stfs f5, 0x54(r1)
    lfs f3, 0x530(r3)
    stfs f0, 0x50(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    fadds f2, f3, f0
    psq_st f1, 0x614(r3), 0, 0
    lfs f0, 0x618(r3)
    stfs f4, 0x620(r3)
    fadds f0, f0, f4
    stfs f2, 0x58(r1)
    stfs f2, 0x61c(r3)
    stfs f0, 0x618(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80249D40_0000084C
    li r30, 0x0
    b lbl_fn_80249D40_00000858
lbl_fn_80249D40_0000084C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r30, r3, r0
lbl_fn_80249D40_00000858:
    lis r4, lbl_807434DC@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807434DC@l
    li r5, 0x0
    addi r4, r4, 0xe
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80249D40_00000880
    li r3, 0x0
    b lbl_fn_80249D40_0000088C
lbl_fn_80249D40_00000880:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_80249D40_0000088C:
    lfs f6, 0x2c(r3)
    lis r4, lbl_807434DC@ha
    lfs f3, 0x2c(r30)
    addi r7, r1, 0x44
    lfs f7, 0x1c(r3)
    addi r6, r1, 0x74
    lfs f4, 0x1c(r30)
    fadds f9, f3, f6
    lfs f8, 0xc(r3)
    addi r4, r4, lbl_807434DC@l
    lfs f5, 0xc(r30)
    fadds f10, f4, f7
    lfs f0, lbl_80883250
    fadds f11, f5, f8
    stfs f8, 0x20(r1)
    fmuls f2, f9, f0
    addi r3, r31, 0xb0
    fmuls f8, f10, f0
    stfs f7, 0x24(r1)
    fmuls f0, f11, f0
    stfs f8, 0x48(r1)
    li r5, 0x0
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f6, 0x28(r1)
    stfs f5, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f11, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80249D40_00000928
    li r5, 0x0
    b lbl_fn_80249D40_00000934
lbl_fn_80249D40_00000928:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80249D40_00000934:
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x14
    lfs f0, 0xc(r5)
    addi r6, r1, 0x68
    lfs f4, 0x2c(r5)
    addi r4, r1, 0x74
    stfs f0, 0x14(r1)
    cmpwi r5, 0x0
    fmr f2, f4
    lfs f0, lbl_80883248
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    lfs f2, 0x7c(r1)
    stfs f4, 0x1c(r1)
    stfs f0, 0x6c(r1)
    lwz r0, 0x5c0(r31)
    psq_st f1, 0x5f4(r31), 0, 0
    lfs f0, 0x620(r31)
    clrlwi r0, r0, 1
    stfs f2, 0x5fc(r31)
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x70(r1)
    stfs f2, 0x608(r31)
    psq_st f1, 0x600(r31), 0, 0
    stfs f0, 0x60c(r31)
    stw r0, 0x5c0(r31)
    beq lbl_fn_80249D40_000009D0
    lfs f0, 0x2c(r5)
    addi r6, r1, 0x8
    lfs f3, 0x1c(r5)
    lfs f4, 0xc(r5)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
lbl_fn_80249D40_000009D0:
    lfs f2, 0x8(r6)
    addi r4, r31, 0x14ec
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r1, 0x5c
    lfs f0, lbl_80883254
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x14f4(r31)
    stfs f0, 0x14f8(r31)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r0, 0x94(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80249F98(void)
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
    beq lbl_fn_80249F98_00000A60
    addic. r3, r3, 0x14b0
    beq lbl_fn_80249F98_00000A44
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80249F98_00000A44:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_80249F98_00000A60
    mr r3, r30
    bl dtor_80084684
lbl_fn_80249F98_00000A60:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8024A004(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8035B694
    lis r3, lbl_807840A8@ha
    li r30, 0x0
    addi r3, r3, lbl_807840A8@l
    stw r3, 0x0(r29)
    addi r3, r29, 0x14b8
    stw r30, 0x14b0(r29)
    stw r30, 0x14b4(r29)
    bl fn_802377B8
    addi r3, r29, 0x14c4
    bl fn_802377B8
    lis r31, lbl_80743508@ha
    stw r30, 0x14d0(r29)
    addi r3, r29, 0x14b8
    addi r4, r31, lbl_80743508@l
    bl fn_8023780C
    addi r4, r31, lbl_80743508@l
    addi r3, r29, 0x14c4
    addi r4, r4, 0x15
    bl fn_8023780C
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8024A090(void)
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
    beq lbl_fn_8024A090_00000B8C
    addic. r31, r3, 0x14c4
    beq lbl_fn_8024A090_00000B50
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024A090_00000B50
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024A090_00000B50:
    addic. r31, r29, 0x14b8
    beq lbl_fn_8024A090_00000B70
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024A090_00000B70
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024A090_00000B70:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8024A090_00000B8C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8024A090_00000B8C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8024A134(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_8024A134_00000BD8
    li r31, 0x0
lbl_fn_8024A134_00000BD8:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8024A134_00000BF8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8024A134_00000BF8
    li r31, 0x0
lbl_fn_8024A134_00000BF8:
    cmpwi r31, 0x0
    beq lbl_fn_8024A134_00000C3C
    lwz r4, 0x5c(r30)
    lwz r3, 0x1438(r30)
    lwz r0, 0x98(r4)
    cmpwi r3, 0x0
    stw r0, 0x14b0(r30)
    beq lbl_fn_8024A134_00000C30
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8024A134_00000C30:
    lwz r0, 0x14a8(r30)
    oris r0, r0, 0x100
    stw r0, 0x14a8(r30)
lbl_fn_8024A134_00000C3C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8024A1E0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8024A1E0_00000D58
    mr r3, r0
    bl fn_8017C904
    lis r4, lbl_80743508@ha
    addi r4, r4, lbl_80743508@l
    addi r4, r4, 0x2a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024A1E0_00000D58
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883258
    li r3, -0x1
    lfs f1, lbl_8088325C
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x14c4
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r0, 0x12a4(r30)
    mr r3, r30
    lwz r5, 0x5c0(r30)
    oris r0, r0, 0x200
    lwz r4, 0x5c(r30)
    clrrwi r5, r5, 1
    stw r5, 0x5c0(r30)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r30)
    lwz r0, 0x98(r4)
    stw r0, 0x14b0(r30)
    bl fn_801765D8
    b lbl_fn_8024A1E0_00000F00
lbl_fn_8024A1E0_00000D58:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x2
    beq lbl_fn_8024A1E0_00000D7C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
lbl_fn_8024A1E0_00000D7C:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8024A1E0_00000DE8
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8024A1E0_00000DA4
    lwz r0, 0x560(r30)
    cmpwi r0, 0x3b
    beq lbl_fn_8024A1E0_00000DE0
lbl_fn_8024A1E0_00000DA4:
    lfs f3, 0x30(r31)
    mr r3, r30
    lfs f2, lbl_80883260
    addi r4, r1, 0x38
    lfs f1, 0x2c(r31)
    li r5, 0x2e
    lfs f0, 0x28(r31)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    li r6, 0x0
    fmuls f0, f0, f2
    stfs f3, 0x40(r1)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    bl fn_8015E7A0
lbl_fn_8024A1E0_00000DE0:
    mr r3, r30
    bl fn_800EB49C
lbl_fn_8024A1E0_00000DE8:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8024A1E0_00000E14
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8024A1E0_00000E14
    li r5, 0x1
lbl_fn_8024A1E0_00000E14:
    cmpwi r5, 0x0
    beq lbl_fn_8024A1E0_00000E30
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8024A1E0_00000E30
    li r3, 0x1
lbl_fn_8024A1E0_00000E30:
    cmpwi r3, 0x0
    beq lbl_fn_8024A1E0_00000E64
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8024A1E0_00000E58
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_8024A1E0_00000E58
    li r3, 0x1
lbl_fn_8024A1E0_00000E58:
    cmpwi r3, 0x0
    bne lbl_fn_8024A1E0_00000E64
    li r4, 0x1
lbl_fn_8024A1E0_00000E64:
    cmpwi r4, 0x0
    beq lbl_fn_8024A1E0_00000F00
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8024A1E0_00000F00
    lbz r4, 0xd74(r30)
    extsb r0, r4
    cmpwi r0, 0x2
    blt lbl_fn_8024A1E0_00000F00
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8024A1E0_00000EB8
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8024A1E0_00000EB8
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x1
    bl fn_8011CD84
    b lbl_fn_8024A1E0_00000F00
lbl_fn_8024A1E0_00000EB8:
    lwz r0, 0xd7c(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8024A1E0_00000F00
    extsb r0, r4
    cmpwi r0, 0x2
    blt lbl_fn_8024A1E0_00000F00
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8024A1E0_00000EF0
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x4
    bl fn_8011CD84
    b lbl_fn_8024A1E0_00000F00
lbl_fn_8024A1E0_00000EF0:
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x1
    bl fn_8011CD84
lbl_fn_8024A1E0_00000F00:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8024A4A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_8024A4A0_00000F58
    mr r3, r31
    bl fn_80139560
    lwz r0, 0x560(r31)
    cmpwi r0, 0x3b
    bne lbl_fn_8024A4A0_0000106C
    li r0, 0x0
    stw r0, 0x14b0(r31)
    b lbl_fn_8024A4A0_0000106C
lbl_fn_8024A4A0_00000F58:
    lwz r0, 0x14b0(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8024A4A0_00001004
    lfs f0, lbl_80883258
    addi r3, r31, 0xb0
    stfs f0, 0x2e8(r31)
    li r4, 0x0
    bl fn_80097D7C
    lwz r0, 0x14b4(r31)
    stfs f1, 0x2e4(r31)
    cmpwi r0, 0x0
    bge lbl_fn_8024A4A0_00000FF4
    lwz r0, 0x24(r1)
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x8(r1)
    clrlwi r0, r0, 4
    li r3, 0x2712
    stw r5, 0xc(r1)
    stw r5, 0x10(r1)
    stw r5, 0x14(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r0, 0x24(r1)
    stw r4, 0x20(r1)
    bl fn_80219E6C
    lis r8, lbl_807C6B90@ha
    mr r4, r3
    mr r5, r31
    mr r6, r31
    addi r3, r1, 0x8
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r3, 0x14b0(r31)
    subi r0, r3, 0x1
    stw r0, 0x14b0(r31)
lbl_fn_8024A4A0_00000FF4:
    lwz r3, 0x14b4(r31)
    subi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8024A4A0_0000106C
lbl_fn_8024A4A0_00001004:
    lwz r0, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r3, 0x5c0(r31)
    cmpwi r0, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r3, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_8024A4A0_0000103C
    oris r0, r4, 0x200
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_800EAECC
    b lbl_fn_8024A4A0_00001060
lbl_fn_8024A4A0_0000103C:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    lwz r4, 0x5c(r31)
    mr r3, r31
    lwz r0, 0x98(r4)
    stw r0, 0x14b0(r31)
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
lbl_fn_8024A4A0_00001060:
    lwz r0, 0x5c0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
lbl_fn_8024A4A0_0000106C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8024A608(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80152D10
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8024A608_000010AC
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_8024A608_000010AC:
    li r0, 0x0
    sth r0, 0x1470(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8024A650(void)
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
    lis r3, lbl_80784210@ha
    li r28, 0x0
    addi r3, r3, lbl_80784210@l
    stw r3, 0x0(r29)
    addi r3, r29, 0x14ec
    stw r28, 0x14b0(r29)
    stw r28, 0x14b4(r29)
    stw r28, 0x14b8(r29)
    stw r28, 0x14bc(r29)
    stw r28, 0x14c0(r29)
    stw r28, 0x14c4(r29)
    stw r28, 0x14c8(r29)
    stw r28, 0x14d0(r29)
    stw r28, 0x14d4(r29)
    stw r28, 0x14d8(r29)
    bl fn_802377B8
    addi r3, r29, 0x14f8
    bl fn_802377B8
    addi r3, r29, 0x1504
    bl fn_802377B8
    addi r3, r29, 0x1510
    bl fn_802377B8
    addi r3, r29, 0x151c
    bl fn_802377B8
    addi r3, r29, 0x1528
    bl fn_80237518
    addi r3, r29, 0x1534
    bl fn_80237518
    addi r3, r29, 0x1540
    bl fn_802377B8
    addi r3, r29, 0x154c
    bl fn_802377B8
    addi r3, r29, 0x1558
    bl fn_802377B8
    addi r3, r29, 0x1564
    bl fn_802377B8
    addi r3, r29, 0x1570
    bl fn_802377B8
    addi r3, r29, 0x157c
    bl fn_802377B8
    addi r27, r29, 0x1588
    mr r3, r27
    bl fn_80473E74
    lfs f5, lbl_80883268
    lis r10, lbl_8078FBB0@ha
    li r5, 0x1e
    li r4, 0x258
    li r0, 0xa
    li r6, 0x3c
    li r7, -0x1
    lfs f4, lbl_8088326C
    lfs f3, lbl_80883270
    addi r10, r10, lbl_8078FBB0@l
    lfs f2, lbl_80883274
    li r9, 0x2710
    lfs f1, lbl_80883278
    li r8, 0x1
    lfs f0, lbl_8088327C
    lis r3, lbl_8074367C@ha
    stw r10, 0x0(r27)
    addi r31, r3, lbl_8074367C@l
    mr r3, r31
    addi r27, r1, 0x38
    stw r9, 0x161c(r29)
    stw r8, 0x1620(r29)
    stfs f5, 0x1644(r29)
    stfs f4, 0x1648(r29)
    stw r7, 0x1654(r29)
    stw r7, 0x1658(r29)
    stfs f3, 0x1660(r29)
    stfs f2, 0x1664(r29)
    stfs f1, 0x1668(r29)
    stfs f0, 0x166c(r29)
    stfs f4, 0x16c0(r29)
    stfs f5, 0x16c8(r29)
    stw r7, 0x16cc(r29)
    stw r7, 0x16d0(r29)
    stw r7, 0x16d4(r29)
    stw r6, 0x168c(r29)
    stw r5, 0x16a4(r29)
    stw r4, 0x1674(r29)
    stw r0, 0x1628(r29)
    stw r6, 0x1690(r29)
    stw r5, 0x16a8(r29)
    stw r4, 0x1678(r29)
    stw r0, 0x162c(r29)
    stw r6, 0x1694(r29)
    stw r5, 0x16ac(r29)
    stw r4, 0x167c(r29)
    stw r0, 0x1630(r29)
    stw r6, 0x1698(r29)
    stw r5, 0x16b0(r29)
    stw r4, 0x1680(r29)
    stw r0, 0x1634(r29)
    stw r6, 0x169c(r29)
    stw r5, 0x16b4(r29)
    stw r4, 0x1684(r29)
    stw r0, 0x1638(r29)
    stw r6, 0x16a0(r29)
    stw r5, 0x16b8(r29)
    stw r4, 0x1688(r29)
    stw r0, 0x163c(r29)
    stw r28, 0x1590(r29)
    stw r28, 0x1624(r29)
    stw r28, 0x1640(r29)
    stw r28, 0x164c(r29)
    stw r28, 0x1670(r29)
    stw r28, 0x16bc(r29)
    stw r28, 0x16c4(r29)
    stw r28, 0x16d8(r29)
    stw r28, 0x16e4(r29)
    stw r28, 0x16e8(r29)
    stw r28, 0x16ec(r29)
    stw r28, 0x14dc(r29)
    stw r28, 0x14e4(r29)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r31
    add r7, r31, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r31, 0x18
    stw r28, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r28, 0x30(r1)
    mr r3, r27
    stw r28, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
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
    stw r28, 0x48(r1)
    li r4, 0x0
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r28, 0x674(r1)
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
lbl_fn_8024A650_000013C8:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8024A650_00001460
    addi r4, r31, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8024A650_00001460
    mr r3, r26
    addi r4, r31, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8024A650_00001450
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8024A650_0000141C
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_8024A650_00001420
lbl_fn_8024A650_0000141C:
    lwz r25, 0x30(r1)
lbl_fn_8024A650_00001420:
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
lbl_fn_8024A650_00001450:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8024A650_000013C8
lbl_fn_8024A650_00001460:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r29, 0x1588
    srwi. r0, r0, 31
    bne lbl_fn_8024A650_00001488
    addi r4, r1, 0x21
    b lbl_fn_8024A650_0000148C
lbl_fn_8024A650_00001488:
    lwz r4, 0x28(r1)
lbl_fn_8024A650_0000148C:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_8074367C@ha
    addi r3, r29, 0x14ec
    addi r30, r30, lbl_8074367C@l
    addi r4, r30, 0x35
    bl fn_8023780C
    addi r3, r29, 0x14f8
    addi r4, r30, 0x4a
    bl fn_8023780C
    addi r3, r29, 0x1504
    addi r4, r30, 0x65
    bl fn_8023780C
    addi r3, r29, 0x1510
    addi r4, r30, 0x80
    bl fn_8023780C
    addi r3, r29, 0x151c
    addi r4, r30, 0x9b
    bl fn_8023780C
    addi r3, r29, 0x1540
    addi r4, r30, 0xb6
    bl fn_8023780C
    addi r3, r29, 0x154c
    addi r4, r30, 0xd1
    bl fn_8023780C
    addi r3, r29, 0x1558
    addi r4, r30, 0xec
    bl fn_8023780C
    addi r3, r29, 0x1564
    addi r4, r30, 0x107
    bl fn_8023780C
    addi r3, r29, 0x1570
    addi r4, r30, 0x121
    bl fn_8023780C
    addi r3, r29, 0x1534
    addi r4, r30, 0x13c
    bl fn_80237654
    addi r3, r29, 0x1528
    addi r4, r30, 0x155
    bl fn_80237654
    addi r3, r29, 0x157c
    addi r4, r30, 0x16e
    bl fn_8023780C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8024A650_00001554
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8024A650_00001554:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8024A650_00001568
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8024A650_00001568:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8024A650_0000157C
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8024A650_0000157C:
    addi r11, r1, 0x6a0
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_8024AB20(void)
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
    beq lbl_fn_8024AB20_00001788
    addic. r0, r3, 0x16e8
    beq lbl_fn_8024AB20_000015E4
    lwz r4, 0x16e8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8024AB20_000015E4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8024AB20_000015E4
    bl fn_800897D8
lbl_fn_8024AB20_000015E4:
    addic. r3, r29, 0x1588
    beq lbl_fn_8024AB20_000015F4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_000015F4:
    addic. r31, r29, 0x157c
    beq lbl_fn_8024AB20_00001614
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_00001614
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_00001614:
    addic. r31, r29, 0x1570
    beq lbl_fn_8024AB20_00001634
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_00001634
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_00001634:
    addic. r31, r29, 0x1564
    beq lbl_fn_8024AB20_00001654
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_00001654
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_00001654:
    addic. r31, r29, 0x1558
    beq lbl_fn_8024AB20_00001674
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_00001674
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_00001674:
    addic. r31, r29, 0x154c
    beq lbl_fn_8024AB20_00001694
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_00001694
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_00001694:
    addic. r31, r29, 0x1540
    beq lbl_fn_8024AB20_000016B4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_000016B4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_000016B4:
    addi r3, r29, 0x1534
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0x1528
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x151c
    beq lbl_fn_8024AB20_000016EC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_000016EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_000016EC:
    addic. r31, r29, 0x1510
    beq lbl_fn_8024AB20_0000170C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_0000170C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_0000170C:
    addic. r31, r29, 0x1504
    beq lbl_fn_8024AB20_0000172C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_0000172C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_0000172C:
    addic. r31, r29, 0x14f8
    beq lbl_fn_8024AB20_0000174C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_0000174C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_0000174C:
    addic. r31, r29, 0x14ec
    beq lbl_fn_8024AB20_0000176C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8024AB20_0000176C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8024AB20_0000176C:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8024AB20_00001788
    mr r3, r29
    bl dtor_80084684
lbl_fn_8024AB20_00001788:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8024AD30(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    stw r0, 0x684(r1)
    addi r11, r1, 0x660
    stfd f31, 0x670(r1)
    psq_st f31, 0x678(r1), 0, 0
    stfd f30, 0x660(r1)
    psq_st f30, 0x668(r1), 0, 0
    bl _savegpr_27
    mr r29, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    lwz r3, 0x1438(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8024AD30_000017F8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8024AD30_00001F3C
lbl_fn_8024AD30_000017F8:
    addi r3, r29, 0x1588
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x14ec
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x14f8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x1504
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x1510
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x151c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x1540
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x154c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x1558
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x1564
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x1570
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x1534
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x1528
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    addi r3, r29, 0x157c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F3C
    lwz r0, 0x7ec(r29)
    addi r3, r29, 0x1588
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0x820d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r29)
    lwz r4, lbl_8087F430
    lwz r30, 0x10d8(r4)
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8024AD30_00001F10
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8024AD30_00001F10
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8024AD30_00001F10
    addi r3, r29, 0x1588
    bl fn_8047059C
    mr r31, r3
    addi r3, r29, 0x1588
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r28, r3
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
    mr r4, r28
    mr r5, r31
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_8074367C@ha
    lfs f31, lbl_80883268
    lfs f30, lbl_8088326C
    addi r31, r31, lbl_8074367C@l
    li r28, 0x1
lbl_fn_8024AD30_000019C0:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    mr r27, r3
    addi r4, r31, 0x184
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_000019F4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14c8(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_000019F4:
    mr r3, r27
    addi r4, r31, 0x193
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001A20
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d0(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001A20:
    mr r3, r27
    addi r4, r31, 0x1a1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001A4C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d4(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001A4C:
    mr r3, r27
    addi r4, r31, 0x1b2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001A78
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14d8(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001A78:
    mr r3, r27
    addi r4, r31, 0x1c5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001AA4
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14cc(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001AA4:
    mr r3, r27
    addi r4, r31, 0x1d2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001AE0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    stw r3, 0x1620(r29)
    beq lbl_fn_8024AD30_00001AD8
    stfs f30, 0x1648(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001AD8:
    stfs f31, 0x1648(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001AE0:
    mr r3, r27
    addi r4, r31, 0x1e0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001B28
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    slwi r4, r3, 1
    addi r3, r1, 0x8
    subi r27, r4, 0x1
    bl fn_8005B3CC
    bl fn_80684600
    slwi r0, r27, 2
    add r4, r29, r0
    stw r3, 0x1624(r4)
    stw r3, 0x1628(r4)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001B28:
    mr r3, r27
    addi r4, r31, 0x1f0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001B50
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1660(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001B50:
    mr r3, r27
    addi r4, r31, 0x1fc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001B78
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x161c(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001B78:
    mr r3, r27
    addi r4, r31, 0x208
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001BA0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1664(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001BA0:
    mr r3, r27
    addi r4, r31, 0x216
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001BC8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1668(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001BC8:
    mr r3, r27
    addi r4, r31, 0x221
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001BF0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x166c(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001BF0:
    mr r3, r27
    addi r4, r31, 0x22b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001C18
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x568(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001C18:
    mr r3, r27
    addi r4, r31, 0x235
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001C48
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    lwz r0, 0x12a4(r29)
    rlwimi r0, r3, 22, 9, 9
    stw r0, 0x12a4(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001C48:
    mr r3, r27
    addi r4, r31, 0x23a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001C90
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    slwi r4, r3, 1
    addi r3, r1, 0x8
    subi r27, r4, 0x1
    bl fn_8005B3CC
    bl fn_80684600
    slwi r0, r27, 2
    add r4, r29, r0
    stw r3, 0x1688(r4)
    stw r3, 0x168c(r4)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001C90:
    mr r3, r27
    addi r4, r31, 0x244
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001CD8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    slwi r4, r3, 1
    addi r3, r1, 0x8
    subi r27, r4, 0x1
    bl fn_8005B3CC
    bl fn_80684600
    slwi r0, r27, 2
    add r4, r29, r0
    stw r3, 0x16a0(r4)
    stw r3, 0x16a4(r4)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001CD8:
    mr r3, r27
    addi r4, r31, 0x253
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001D20
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    slwi r4, r3, 1
    addi r3, r1, 0x8
    subi r27, r4, 0x1
    bl fn_8005B3CC
    bl fn_80684600
    slwi r0, r27, 2
    add r4, r29, r0
    stw r3, 0x1670(r4)
    stw r3, 0x1674(r4)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001D20:
    mr r3, r27
    addi r4, r31, 0x25e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001D48
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x16bc(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001D48:
    mr r3, r27
    addi r4, r31, 0x26f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001D70
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x16c0(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001D70:
    mr r3, r27
    addi r4, r31, 0x27f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001E1C
lbl_fn_8024AD30_00001D84:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_8024AD30_00001F00
    lwz r0, 0x78(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8024AD30_00001DD8
lbl_fn_8024AD30_00001DB0:
    lwz r6, 0x7c(r30)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_8024AD30_00001DCC
    mulli r0, r4, 0x28
    add r3, r6, r0
    b lbl_fn_8024AD30_00001DDC
lbl_fn_8024AD30_00001DCC:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8024AD30_00001DB0
lbl_fn_8024AD30_00001DD8:
    li r3, 0x0
lbl_fn_8024AD30_00001DDC:
    cmpwi r3, 0x0
    beq lbl_fn_8024AD30_00001D84
    lwz r0, 0x1590(r29)
    addi r4, r29, 0x1590
    mulli r0, r0, 0xc
    add r0, r4, r0
    addic. r5, r0, 0x4
    beq lbl_fn_8024AD30_00001E0C
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
lbl_fn_8024AD30_00001E0C:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    b lbl_fn_8024AD30_00001D84
lbl_fn_8024AD30_00001E1C:
    mr r3, r27
    addi r4, r31, 0x28b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001E44
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x16cc(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001E44:
    mr r3, r27
    addi r4, r31, 0x29e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001E6C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x16d0(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001E6C:
    mr r3, r27
    addi r4, r31, 0x2af
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001E94
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x16d4(r29)
    b lbl_fn_8024AD30_00001F00
lbl_fn_8024AD30_00001E94:
    mr r3, r27
    addi r4, r31, 0x2c0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_00001F00
    li r27, 0x0
lbl_fn_8024AD30_00001EAC:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    cmpwi r3, 0x0
    beq lbl_fn_8024AD30_00001EF4
    stw r28, 0x16e4(r3)
    lwz r0, 0x16d8(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0x16dc
    beq lbl_fn_8024AD30_00001EE8
    stw r3, 0x0(r4)
lbl_fn_8024AD30_00001EE8:
    lwz r3, 0x16d8(r29)
    addi r0, r3, 0x1
    stw r0, 0x16d8(r29)
lbl_fn_8024AD30_00001EF4:
    addi r27, r27, 0x1
    cmplwi r27, 0x2
    blt lbl_fn_8024AD30_00001EAC
lbl_fn_8024AD30_00001F00:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8024AD30_000019C0
lbl_fn_8024AD30_00001F10:
    lwz r3, 0x1438(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8024AD30_00001F34
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r29)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8024AD30_00001F34:
    li r3, 0x1
    b lbl_fn_8024AD30_00001F40
lbl_fn_8024AD30_00001F3C:
    li r3, 0x0
lbl_fn_8024AD30_00001F40:
    addi r11, r1, 0x660
    psq_l f31, 0x678(r1), 0, 0
    lfd f31, 0x670(r1)
    psq_l f30, 0x668(r1), 0, 0
    lfd f30, 0x660(r1)
    bl _restgpr_27
    lwz r0, 0x684(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}
