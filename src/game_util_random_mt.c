#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80049B2C(void);
extern void fn_80049B74(void);
extern void fn_8004AFAC(void);
extern void fn_8004B1EC(void);
extern void fn_8005B3CC(void);
extern void fn_80069BF4(void);
extern void fn_8006A004(void);
extern void fn_80097D7C(void);
extern void fn_800CAA88(void);
extern void fn_800CB58C(void);
extern void fn_800D089C(void);
extern void fn_800D0974(void);
extern void fn_800EAECC(void);
extern void fn_8011CD84(void);
extern void fn_8011D21C(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80151448(void);
extern void fn_8015EB2C(void);
extern void fn_8016F3D0(void);
extern void fn_80171DB0(void);
extern void fn_8017B3C0(void);
extern void fn_8017B434(void);
extern void fn_8017BC4C(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_803605EC(void);
extern void fn_80373148(void);
extern void fn_8037D4C0(void);
extern void fn_803CE160(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80763248[];
extern u8 lbl_80763278[];
extern u8 lbl_807632A0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80797368[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F498;
extern u32 lbl_8087F540;
extern u32 lbl_8087F8A0;
extern u32 lbl_80888220;
extern u32 lbl_80888224;
extern u32 lbl_8088824C;
extern u32 lbl_80888250;
extern u32 lbl_80888254;
extern u32 lbl_80888258;
extern u32 lbl_8088825C;
extern u32 lbl_80888260;
extern u32 lbl_80888264;
extern u32 lbl_80888268;

/* Function declarations */
void fn_805A2FD4(void);
void fn_805A2FD8(void);
void fn_805A32CC(void);
void fn_805A344C(void);
void fn_805A3590(void);
void fn_805A3664(void);
void fn_805A3738(void);
void fn_805A380C(void);
void fn_805A38F4(void);
void fn_805A3C58(void);
void fn_805A3D00(void);
void fn_805A3D6C(void);
void fn_805A3F5C(void);
void fn_805A3FCC(void);
void fn_805A4018(void);
void fn_805A40BC(void);
void fn_805A418C(void);
void fn_805A4258(void);
void fn_805A45FC(void);
void fn_805A4984(void);

asm void fn_805A2FD4(void)
{
    nofralloc
    blr
}

asm void fn_805A2FD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    stw r4, 0x48(r3)
    bne lbl_fn_805A2FD8_000000D4
    cmpwi cr1, r4, 0x1
    bne cr1, lbl_fn_805A2FD8_000000D4
    lwz r5, 0xf4(r3)
    li r4, -0x64
    lwz r3, lbl_8087F448
    cmpwi r5, 0x0
    lfs f1, lbl_80888220
    ble lbl_fn_805A2FD8_00000050
    b lbl_fn_805A2FD8_00000078
lbl_fn_805A2FD8_00000050:
    li r5, 0x0
    bne cr1, lbl_fn_805A2FD8_00000068
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A2FD8_00000068
    li r5, 0x1
lbl_fn_805A2FD8_00000068:
    neg r0, r5
    or r0, r0, r5
    srawi r0, r0, 31
    rlwinm r5, r0, 0, 26, 29
lbl_fn_805A2FD8_00000078:
    li r6, 0x0
    li r7, 0x0
    bl fn_8037D4C0
    lwz r3, lbl_8087F448
    lis r4, lbl_80763248@ha
    li r30, 0x1
    addi r5, r31, 0x78
    lwz r0, 0x78(r3)
    addi r4, r4, lbl_80763248@l
    stw r0, 0xf8(r31)
    li r6, 0x0
    lwz r3, lbl_8087EFE8
    stw r30, 0x34d0(r3)
    lwz r0, 0x4c(r31)
    lwz r3, 0xf8(r31)
    slwi r0, r0, 4
    lwzx r4, r4, r0
    bl fn_8004AFAC
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d0(r3)
    stw r30, 0xfc(r31)
    b lbl_fn_805A2FD8_000002E0
lbl_fn_805A2FD8_000000D4:
    cmpwi r0, 0x1
    bne lbl_fn_805A2FD8_000002E0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A2FD8_000002E0
    lwz r0, 0xf8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A2FD8_000002E0
    lwz r5, 0xf4(r3)
    li r4, -0xc8
    lwz r3, lbl_8087F448
    cmpwi r5, 0x0
    lfs f1, lbl_80888220
    ble lbl_fn_805A2FD8_00000114
    mr r0, r5
    b lbl_fn_805A2FD8_00000144
lbl_fn_805A2FD8_00000114:
    lwz r0, 0x48(r31)
    li r6, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A2FD8_00000134
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A2FD8_00000134
    li r6, 0x1
lbl_fn_805A2FD8_00000134:
    neg r0, r6
    or r0, r0, r6
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 26, 29
lbl_fn_805A2FD8_00000144:
    cmpwi r0, 0x0
    ble lbl_fn_805A2FD8_0000018C
    cmpwi r5, 0x0
    ble lbl_fn_805A2FD8_00000158
    b lbl_fn_805A2FD8_00000190
lbl_fn_805A2FD8_00000158:
    lwz r0, 0x48(r31)
    li r5, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A2FD8_00000178
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A2FD8_00000178
    li r5, 0x1
lbl_fn_805A2FD8_00000178:
    neg r0, r5
    or r0, r0, r5
    srawi r0, r0, 31
    rlwinm r5, r0, 0, 26, 29
    b lbl_fn_805A2FD8_00000190
lbl_fn_805A2FD8_0000018C:
    li r5, 0x5a
lbl_fn_805A2FD8_00000190:
    li r6, 0x0
    li r7, 0x0
    bl fn_8037D4C0
    lwz r4, 0xf4(r31)
    lwz r3, 0xf8(r31)
    cmpwi r4, 0x0
    ble lbl_fn_805A2FD8_000001B0
    b lbl_fn_805A2FD8_000001E0
lbl_fn_805A2FD8_000001B0:
    lwz r0, 0x48(r31)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A2FD8_000001D0
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A2FD8_000001D0
    li r4, 0x1
lbl_fn_805A2FD8_000001D0:
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A2FD8_000001E0:
    bl fn_8004B1EC
    lwz r0, 0xf0(r31)
    li r3, 0x0
    stw r3, 0xf8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805A2FD8_000002E0
    lwz r0, 0x48(r31)
    stw r3, 0xf0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_805A2FD8_000002D8
    lwz r4, lbl_8087F418
    cmpwi r4, 0x0
    beq lbl_fn_805A2FD8_000002D8
    cmpwi r3, 0x0
    beq lbl_fn_805A2FD8_0000027C
    lwz r0, 0x18c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805A2FD8_000002D8
    lwz r4, 0xf4(r31)
    cmpwi r4, 0x0
    ble lbl_fn_805A2FD8_00000238
    b lbl_fn_805A2FD8_00000264
lbl_fn_805A2FD8_00000238:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x1
    bne lbl_fn_805A2FD8_00000254
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A2FD8_00000254
    li r3, 0x1
lbl_fn_805A2FD8_00000254:
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A2FD8_00000264:
    lwz r3, lbl_8087F418
    li r0, 0x1
    stw r0, 0x18c(r3)
    lfs f1, 0x190(r3)
    bl fn_803605EC
    b lbl_fn_805A2FD8_000002D8
lbl_fn_805A2FD8_0000027C:
    lwz r0, 0x18c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805A2FD8_000002D8
    lwz r4, 0xf4(r31)
    cmpwi r4, 0x0
    ble lbl_fn_805A2FD8_00000298
    b lbl_fn_805A2FD8_000002C4
lbl_fn_805A2FD8_00000298:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x1
    bne lbl_fn_805A2FD8_000002B4
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805A2FD8_000002B4
    li r3, 0x1
lbl_fn_805A2FD8_000002B4:
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A2FD8_000002C4:
    lwz r3, lbl_8087F418
    li r0, 0x0
    stw r0, 0x18c(r3)
    lfs f1, 0x188(r3)
    bl fn_803605EC
lbl_fn_805A2FD8_000002D8:
    li r0, 0x1
    stw r0, 0xf0(r31)
lbl_fn_805A2FD8_000002E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A32CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r0, 0x48(r3)
    lwz r5, 0x4c(r3)
    cmpwi r0, 0x1
    stw r4, 0x4c(r3)
    bne lbl_fn_805A32CC_0000045C
    cmpw r5, r4
    beq lbl_fn_805A32CC_0000045C
    lwz r3, 0xf8(r3)
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_805A32CC_000003B0
    lwzu r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A32CC_000003B0
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_805A32CC_000003B0
    lwz r3, 0xf8(r30)
    lwz r3, 0x8(r3)
    bl fn_800CAA88
    lwz r4, 0xf4(r30)
    addi r31, r3, 0x85
    lwz r3, 0xf8(r30)
    cmpwi r4, 0x0
    ble lbl_fn_805A32CC_0000037C
    b lbl_fn_805A32CC_000003AC
lbl_fn_805A32CC_0000037C:
    lwz r0, 0x48(r30)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A32CC_0000039C
    lwz r0, 0xfc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805A32CC_0000039C
    li r4, 0x1
lbl_fn_805A32CC_0000039C:
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A32CC_000003AC:
    bl fn_8004B1EC
lbl_fn_805A32CC_000003B0:
    lwz r0, 0x4c(r30)
    lwz r5, 0xf4(r30)
    mulli r4, r0, -0x64
    lwz r3, lbl_8087F448
    cmpwi r5, 0x0
    lfs f1, lbl_80888220
    subi r4, r4, 0x3e8
    ble lbl_fn_805A32CC_000003D4
    b lbl_fn_805A32CC_00000404
lbl_fn_805A32CC_000003D4:
    lwz r0, 0x48(r30)
    li r5, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A32CC_000003F4
    lwz r0, 0xfc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805A32CC_000003F4
    li r5, 0x1
lbl_fn_805A32CC_000003F4:
    neg r0, r5
    or r0, r0, r5
    srawi r0, r0, 31
    rlwinm r5, r0, 0, 26, 29
lbl_fn_805A32CC_00000404:
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
    lwz r3, lbl_8087F448
    lis r4, lbl_80763248@ha
    li r29, 0x1
    mr r6, r31
    lwz r0, 0x78(r3)
    addi r4, r4, lbl_80763248@l
    stw r0, 0xf8(r30)
    addi r5, r30, 0x78
    lwz r3, lbl_8087EFE8
    stw r29, 0x34d0(r3)
    lwz r0, 0x4c(r30)
    lwz r3, 0xf8(r30)
    slwi r0, r0, 4
    lwzx r4, r4, r0
    bl fn_8004AFAC
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d0(r3)
    stw r29, 0xfc(r30)
lbl_fn_805A32CC_0000045C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A344C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f8, lbl_80888220
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805A344C_00000490
    b lbl_fn_805A344C_000004C0
lbl_fn_805A344C_00000490:
    lwz r0, 0x48(r3)
    li r5, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A344C_000004B0
    lwz r0, 0xfc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A344C_000004B0
    li r5, 0x1
lbl_fn_805A344C_000004B0:
    neg r0, r5
    or r0, r0, r5
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 26, 29
lbl_fn_805A344C_000004C0:
    xoris r6, r0, 0x8000
    addi r8, r3, 0x78
    lis r5, 0x4330
    stw r6, 0x1c(r1)
    lfs f2, 0x80(r3)
    lis r7, lbl_80763278@ha
    stfs f2, 0x68(r3)
    addi r9, r3, 0x60
    psq_l f1, 0x0(r8), 0, 0
    li r0, 0x1
    stw r5, 0x18(r1)
    addi r6, r1, 0x8
    lfd f3, lbl_80763278@l(r7)
    addi r7, r3, 0x6c
    psq_st f1, 0x0(r9), 0, 0
    lfd f0, 0x18(r1)
    lfs f6, lbl_80888224
    fsubs f7, f0, f3
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r4), 0, 0
    lfs f5, 0x80(r3)
    lfs f4, 0x68(r3)
    fcmpo cr0, f7, f6
    lfs f3, 0x7c(r3)
    fsubs f5, f5, f4
    lfs f0, 0x64(r3)
    stfs f2, 0x74(r3)
    fsubs f4, f3, f0
    lfs f3, 0x78(r3)
    lfs f0, 0x60(r3)
    fmr f2, f5
    stfs f4, 0xc(r1)
    fsubs f0, f3, f0
    psq_st f1, 0x0(r7), 0, 0
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x50(r3)
    stfs f7, 0x54(r3)
    stfs f8, 0x58(r3)
    stb r0, 0x5c(r3)
    stfs f5, 0x10(r1)
    psq_st f1, 0x84(r3), 0, 0
    stfs f2, 0x8c(r3)
    cror eq, lt, eq
    bne lbl_fn_805A344C_000005B4
    fcmpo cr0, f8, f6
    cror eq, gt, eq
    bne lbl_fn_805A344C_00000598
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x8(r8)
    stfs f7, 0x50(r3)
    b lbl_fn_805A344C_000005AC
lbl_fn_805A344C_00000598:
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r9)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x8(r8)
    stfs f6, 0x50(r3)
lbl_fn_805A344C_000005AC:
    li r0, 0x0
    stb r0, 0x5c(r3)
lbl_fn_805A344C_000005B4:
    addi r1, r1, 0x20
    blr
}

asm void fn_805A3590(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805A3590_000005D0
    b lbl_fn_805A3590_00000600
lbl_fn_805A3590_000005D0:
    lwz r0, 0x48(r3)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A3590_000005F0
    lwz r0, 0xfc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A3590_000005F0
    li r4, 0x1
lbl_fn_805A3590_000005F0:
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 26, 29
lbl_fn_805A3590_00000600:
    xoris r0, r0, 0x8000
    lis r4, 0x4330
    stw r0, 0xc(r1)
    lis r5, lbl_80763278@ha
    lfd f5, lbl_80763278@l(r5)
    li r0, 0x1
    stw r4, 0x8(r1)
    lfs f2, 0xa8(r3)
    lfd f3, 0x8(r1)
    lfs f4, lbl_80888224
    fsubs f0, f2, f2
    fsubs f5, f3, f5
    lfs f3, lbl_80888220
    stfs f4, 0x90(r3)
    fcmpo cr0, f5, f4
    stfs f5, 0x94(r3)
    stfs f3, 0x98(r3)
    stb r0, 0x9c(r3)
    stfs f2, 0xa0(r3)
    stfs f1, 0xa4(r3)
    stfs f0, 0xac(r3)
    cror eq, lt, eq
    bne lbl_fn_805A3590_00000688
    fcmpo cr0, f3, f4
    cror eq, gt, eq
    bne lbl_fn_805A3590_00000678
    frsp f0, f1
    stfs f5, 0x90(r3)
    stfs f0, 0xa8(r3)
    b lbl_fn_805A3590_00000680
lbl_fn_805A3590_00000678:
    stfs f2, 0xa8(r3)
    stfs f4, 0x90(r3)
lbl_fn_805A3590_00000680:
    li r0, 0x0
    stb r0, 0x9c(r3)
lbl_fn_805A3590_00000688:
    addi r1, r1, 0x10
    blr
}

asm void fn_805A3664(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805A3664_000006A4
    b lbl_fn_805A3664_000006D4
lbl_fn_805A3664_000006A4:
    lwz r0, 0x48(r3)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A3664_000006C4
    lwz r0, 0xfc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A3664_000006C4
    li r4, 0x1
lbl_fn_805A3664_000006C4:
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 26, 29
lbl_fn_805A3664_000006D4:
    xoris r0, r0, 0x8000
    lis r4, 0x4330
    stw r0, 0xc(r1)
    lis r5, lbl_80763278@ha
    lfd f5, lbl_80763278@l(r5)
    li r0, 0x1
    stw r4, 0x8(r1)
    lfs f2, 0xc8(r3)
    lfd f3, 0x8(r1)
    lfs f4, lbl_80888224
    fsubs f0, f2, f2
    fsubs f5, f3, f5
    lfs f3, lbl_80888220
    stfs f4, 0xb0(r3)
    fcmpo cr0, f5, f4
    stfs f5, 0xb4(r3)
    stfs f3, 0xb8(r3)
    stb r0, 0xbc(r3)
    stfs f2, 0xc0(r3)
    stfs f1, 0xc4(r3)
    stfs f0, 0xcc(r3)
    cror eq, lt, eq
    bne lbl_fn_805A3664_0000075C
    fcmpo cr0, f3, f4
    cror eq, gt, eq
    bne lbl_fn_805A3664_0000074C
    frsp f0, f1
    stfs f5, 0xb0(r3)
    stfs f0, 0xc8(r3)
    b lbl_fn_805A3664_00000754
lbl_fn_805A3664_0000074C:
    stfs f2, 0xc8(r3)
    stfs f4, 0xb0(r3)
lbl_fn_805A3664_00000754:
    li r0, 0x0
    stb r0, 0xbc(r3)
lbl_fn_805A3664_0000075C:
    addi r1, r1, 0x10
    blr
}

asm void fn_805A3738(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_805A3738_00000778
    b lbl_fn_805A3738_000007A8
lbl_fn_805A3738_00000778:
    lwz r0, 0x48(r3)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A3738_00000798
    lwz r0, 0xfc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A3738_00000798
    li r4, 0x1
lbl_fn_805A3738_00000798:
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 26, 29
lbl_fn_805A3738_000007A8:
    xoris r0, r0, 0x8000
    lis r4, 0x4330
    stw r0, 0xc(r1)
    lis r5, lbl_80763278@ha
    lfd f5, lbl_80763278@l(r5)
    li r0, 0x1
    stw r4, 0x8(r1)
    lfs f2, 0xe8(r3)
    lfd f3, 0x8(r1)
    lfs f4, lbl_80888224
    fsubs f0, f2, f2
    fsubs f5, f3, f5
    lfs f3, lbl_80888220
    stfs f4, 0xd0(r3)
    fcmpo cr0, f5, f4
    stfs f5, 0xd4(r3)
    stfs f3, 0xd8(r3)
    stb r0, 0xdc(r3)
    stfs f2, 0xe0(r3)
    stfs f1, 0xe4(r3)
    stfs f0, 0xec(r3)
    cror eq, lt, eq
    bne lbl_fn_805A3738_00000830
    fcmpo cr0, f3, f4
    cror eq, gt, eq
    bne lbl_fn_805A3738_00000820
    frsp f0, f1
    stfs f5, 0xd0(r3)
    stfs f0, 0xe8(r3)
    b lbl_fn_805A3738_00000828
lbl_fn_805A3738_00000820:
    stfs f2, 0xe8(r3)
    stfs f4, 0xd0(r3)
lbl_fn_805A3738_00000828:
    li r0, 0x0
    stb r0, 0xdc(r3)
lbl_fn_805A3738_00000830:
    addi r1, r1, 0x10
    blr
}

asm void fn_805A380C(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    stw r4, 0xf0(r3)
    cmpwi r0, 0x1
    bnelr
    lwz r5, lbl_8087F418
    cmpwi r5, 0x0
    beqlr
    cmpwi r4, 0x0
    beq lbl_fn_805A380C_000008BC
    lwz r0, 0x18c(r5)
    cmpwi r0, 0x0
    bnelr
    lwz r4, 0xf4(r3)
    cmpwi r4, 0x0
    ble lbl_fn_805A380C_00000878
    b lbl_fn_805A380C_000008A8
lbl_fn_805A380C_00000878:
    lwz r0, 0x48(r3)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A380C_00000898
    lwz r0, 0xfc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A380C_00000898
    li r4, 0x1
lbl_fn_805A380C_00000898:
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A380C_000008A8:
    lwz r3, lbl_8087F418
    li r0, 0x1
    stw r0, 0x18c(r3)
    lfs f1, 0x190(r3)
    b fn_803605EC
lbl_fn_805A380C_000008BC:
    lwz r0, 0x18c(r5)
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0xf4(r3)
    cmpwi r4, 0x0
    ble lbl_fn_805A380C_000008D8
    b lbl_fn_805A380C_00000908
lbl_fn_805A380C_000008D8:
    lwz r0, 0x48(r3)
    li r4, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_805A380C_000008F8
    lwz r0, 0xfc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A380C_000008F8
    li r4, 0x1
lbl_fn_805A380C_000008F8:
    neg r0, r4
    or r0, r0, r4
    srawi r0, r0, 31
    rlwinm r4, r0, 0, 26, 29
lbl_fn_805A380C_00000908:
    lwz r3, lbl_8087F418
    li r0, 0x0
    stw r0, 0x18c(r3)
    lfs f1, 0x188(r3)
    b fn_803605EC
    blr
}

asm void fn_805A38F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    mr r29, r5
    stw r28, 0x30(r1)
    mr r28, r4
    bne lbl_fn_805A38F4_00000958
    li r3, 0x1
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000958:
    lwz r0, lbl_8087EE90
    cmpwi r0, 0x0
    beq lbl_fn_805A38F4_00000970
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    bne lbl_fn_805A38F4_00000978
lbl_fn_805A38F4_00000970:
    li r3, 0x1
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000978:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805A38F4_00000990
    bl fn_80373148
    cmpwi r3, 0x0
    bne lbl_fn_805A38F4_000009B0
lbl_fn_805A38F4_00000990:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_805A38F4_000009A8
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805A38F4_000009B0
lbl_fn_805A38F4_000009A8:
    li r3, 0x1
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_000009B0:
    lwz r3, lbl_8087EE90
    mr r4, r30
    bl fn_80049B74
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_805A38F4_000009D8
    lwz r3, lbl_8087EE90
    bl fn_80049B2C
    cmpwi r3, 0x0
    bne lbl_fn_805A38F4_000009E0
lbl_fn_805A38F4_000009D8:
    li r3, 0x1
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_000009E0:
    addi r31, r1, 0x8
    li r30, 0x0
lbl_fn_805A38F4_000009E8:
    cmpwi r30, 0x1
    bne lbl_fn_805A38F4_00000A08
    lwz r3, lbl_8087EFE8
    mr r4, r30
    li r5, 0x1
    bl fn_800D089C
    stw r3, 0x0(r31)
    b lbl_fn_805A38F4_00000A1C
lbl_fn_805A38F4_00000A08:
    lwz r3, lbl_8087EFE8
    mr r4, r30
    li r5, 0x0
    bl fn_800D089C
    stw r3, 0x0(r31)
lbl_fn_805A38F4_00000A1C:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x9
    blt lbl_fn_805A38F4_000009E8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE160
    cmpwi r3, 0x0
    bne lbl_fn_805A38F4_00000BBC
    cmpwi r28, 0x1
    beq lbl_fn_805A38F4_00000A78
    cmpwi r28, 0x2
    beq lbl_fn_805A38F4_00000AC4
    cmpwi r28, 0x3
    beq lbl_fn_805A38F4_00000B10
    cmpwi r28, 0x4
    beq lbl_fn_805A38F4_00000B34
    cmpwi r28, 0x7
    beq lbl_fn_805A38F4_00000B34
    cmpwi r28, 0x8
    beq lbl_fn_805A38F4_00000B90
    b lbl_fn_805A38F4_00000C60
lbl_fn_805A38F4_00000A78:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x1
    ble lbl_fn_805A38F4_00000A8C
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000A8C:
    bne lbl_fn_805A38F4_00000C60
    cmpwi r29, 0x1
    beq lbl_fn_805A38F4_00000AA0
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000AA0:
    lwz r4, 0x14(r1)
    lwz r0, 0x10(r1)
    lwz r3, 0x24(r1)
    add r0, r4, r0
    add r0, r3, r0
    cmpwi r0, 0x1
    ble lbl_fn_805A38F4_00000C60
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000AC4:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x1
    ble lbl_fn_805A38F4_00000AD8
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000AD8:
    bne lbl_fn_805A38F4_00000C60
    cmpwi r29, 0x1
    beq lbl_fn_805A38F4_00000AEC
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000AEC:
    lwz r4, 0x14(r1)
    lwz r0, 0xc(r1)
    lwz r3, 0x24(r1)
    add r0, r4, r0
    add r0, r3, r0
    cmpwi r0, 0x1
    ble lbl_fn_805A38F4_00000C60
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000B10:
    lwz r4, 0x24(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x18(r1)
    add r0, r4, r0
    add r0, r3, r0
    cmpwi r0, 0x1
    ble lbl_fn_805A38F4_00000C60
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000B34:
    lwz r4, 0x24(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x18(r1)
    add r0, r4, r0
    add. r0, r3, r0
    ble lbl_fn_805A38F4_00000C60
    cmpwi r28, 0x4
    bne lbl_fn_805A38F4_00000B88
    lwz r3, lbl_8087EFE8
    li r4, 0x3
    li r5, 0x0
    bl fn_800D0974
    lwz r3, lbl_8087EFE8
    li r4, 0x4
    li r5, 0x0
    bl fn_800D0974
    lwz r3, lbl_8087EFE8
    li r4, 0x7
    li r5, 0x0
    bl fn_800D0974
    b lbl_fn_805A38F4_00000C60
lbl_fn_805A38F4_00000B88:
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000B90:
    lwz r3, lbl_8087F498
    lwz r4, 0x28(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805A38F4_00000BA8
    lwz r0, 0x10c(r3)
    b lbl_fn_805A38F4_00000BAC
lbl_fn_805A38F4_00000BA8:
    li r0, 0x1
lbl_fn_805A38F4_00000BAC:
    cmpw r4, r0
    blt lbl_fn_805A38F4_00000C60
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000BBC:
    cmpwi r28, 0x1
    beq lbl_fn_805A38F4_00000BD8
    cmpwi r28, 0x2
    beq lbl_fn_805A38F4_00000C00
    cmpwi r28, 0x8
    beq lbl_fn_805A38F4_00000C34
    b lbl_fn_805A38F4_00000C60
lbl_fn_805A38F4_00000BD8:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    ble lbl_fn_805A38F4_00000BEC
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000BEC:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x1
    ble lbl_fn_805A38F4_00000C60
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000C00:
    lwz r3, 0x10(r1)
    lwz r0, 0xc(r1)
    add r0, r3, r0
    cmpwi r0, 0x1
    ble lbl_fn_805A38F4_00000C1C
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000C1C:
    cmpwi r3, 0x1
    bne lbl_fn_805A38F4_00000C60
    cmpwi r29, 0x1
    beq lbl_fn_805A38F4_00000C60
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000C34:
    lwz r3, lbl_8087F498
    lwz r4, 0x28(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805A38F4_00000C4C
    lwz r0, 0x10c(r3)
    b lbl_fn_805A38F4_00000C50
lbl_fn_805A38F4_00000C4C:
    li r0, 0x1
lbl_fn_805A38F4_00000C50:
    cmpw r4, r0
    ble lbl_fn_805A38F4_00000C60
    li r3, 0x0
    b lbl_fn_805A38F4_00000C64
lbl_fn_805A38F4_00000C60:
    li r3, 0x1
lbl_fn_805A38F4_00000C64:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805A3C58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r3, lbl_80797368@ha
    addi r31, r29, 0x14b4
    addi r3, r3, lbl_80797368@l
    stw r3, 0x0(r29)
    mr r3, r31
    stw r30, 0x14b0(r29)
    bl fn_80473E74
    lwz r3, 0x14cc(r29)
    li r5, 0x0
    lwz r0, 0x7ec(r29)
    lis r6, lbl_8078FBB0@ha
    clrlwi r4, r3, 4
    stw r5, 0x14bc(r29)
    ori r0, r0, 0x41d1
    addi r6, r6, lbl_8078FBB0@l
    oris r4, r4, 0x800
    stw r6, 0x0(r31)
    oris r0, r0, 0x201
    mr r3, r29
    stw r5, 0x14c0(r29)
    stw r5, 0x14c4(r29)
    stw r5, 0x14c8(r29)
    stw r4, 0x14cc(r29)
    stw r5, 0x14d0(r29)
    stw r0, 0x7ec(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A3D00(void)
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
    beq lbl_fn_805A3D00_00000D7C
    addic. r3, r3, 0x14b4
    beq lbl_fn_805A3D00_00000D60
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805A3D00_00000D60:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_805A3D00_00000D7C
    mr r3, r30
    bl dtor_80084684
lbl_fn_805A3D00_00000D7C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A3D6C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r31, r4
    beq lbl_fn_805A3D6C_00000DC0
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_fn_805A3D6C_00000DC8
lbl_fn_805A3D6C_00000DC0:
    li r3, 0x0
    b lbl_fn_805A3D6C_00000F74
lbl_fn_805A3D6C_00000DC8:
    lis r29, lbl_807632A0@ha
    mr r3, r5
    addi r4, r29, lbl_807632A0@l
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_805A3D6C_00000F70
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r28, r1, 0x24
    addi r3, r3, 0x8
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    bl strlen
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    add r4, r30, r27
    stb r0, 0x10(r1)
    addi r7, r4, 0x8
    mr r3, r28
    addi r6, r30, 0x8
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r29, lbl_807632A0@l
    addi r29, r3, 0x9
    mr r3, r29
    bl strlen
    mr r6, r3
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    mr r5, r3
    cmplwi r0, 0xffff
    beq lbl_fn_805A3D6C_00000F1C
    addi r6, r5, 0x4
    mr r4, r28
    addi r3, r1, 0x18
    li r5, 0x0
    bl fn_80069BF4
    lwz r0, 0x24(r1)
    srwi. r3, r0, 31
    bne lbl_fn_805A3D6C_00000EB0
    lwz r4, 0x18(r1)
    srwi. r0, r4, 31
    bne lbl_fn_805A3D6C_00000EB0
    lwz r3, 0x1c(r1)
    lwz r0, 0x20(r1)
    stw r4, 0x24(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    b lbl_fn_805A3D6C_00000F08
lbl_fn_805A3D6C_00000EB0:
    cmpwi r3, 0x0
    beq lbl_fn_805A3D6C_00000EC0
    lwz r5, 0x28(r1)
    b lbl_fn_805A3D6C_00000EC8
lbl_fn_805A3D6C_00000EC0:
    lbz r0, 0x24(r1)
    clrlwi r5, r0, 25
lbl_fn_805A3D6C_00000EC8:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_805A3D6C_00000EE4
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_805A3D6C_00000EEC
lbl_fn_805A3D6C_00000EE4:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_805A3D6C_00000EEC:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x24
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_805A3D6C_00000F08:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805A3D6C_00000F1C
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_805A3D6C_00000F1C:
    cmpwi r31, 0x0
    beq lbl_fn_805A3D6C_00000F54
    lwz r0, 0x24(r1)
    lis r4, lbl_807632A0@ha
    addi r4, r4, lbl_807632A0@l
    mr r3, r31
    srwi. r0, r0, 31
    addi r4, r4, 0xe
    bne lbl_fn_805A3D6C_00000F48
    addi r5, r1, 0x25
    b lbl_fn_805A3D6C_00000F4C
lbl_fn_805A3D6C_00000F48:
    lwz r5, 0x2c(r1)
lbl_fn_805A3D6C_00000F4C:
    crclr 6
    bl sprintf
lbl_fn_805A3D6C_00000F54:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_805A3D6C_00000F68
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_805A3D6C_00000F68:
    li r3, 0x1
    b lbl_fn_805A3D6C_00000F74
lbl_fn_805A3D6C_00000F70:
    li r3, 0x0
lbl_fn_805A3D6C_00000F74:
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805A3F5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A3F5C_00000FDC
    addi r3, r3, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    beq lbl_fn_805A3F5C_00000FDC
    lwz r3, 0xd1c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805A3F5C_00000FDC
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A3F5C_00000FDC
    li r31, 0x1
lbl_fn_805A3F5C_00000FDC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A3FCC(void)
{
    nofralloc
    lwz r3, 0x14cc(r3)
    extrwi. r0, r3, 1, 2
    beq lbl_fn_805A3FCC_0000100C
    li r3, 0x0
    blr
lbl_fn_805A3FCC_0000100C:
    extrwi. r0, r3, 1, 3
    beq lbl_fn_805A3FCC_0000103C
    lfs f2, 0x10(r4)
    lfs f3, lbl_8088824C
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_805A3FCC_0000103C:
    li r3, 0x1
    blr
}

asm void fn_805A4018(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_805A4018_000010D0
    lwz r12, 0x0(r3)
    lwz r12, 0x10c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805A4018_000010D0
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_805A4018_000010B8
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_805A4018_000010D0
lbl_fn_805A4018_000010B8:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
lbl_fn_805A4018_000010D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A40BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 6
    bne lbl_fn_805A40BC_0000117C
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_805A40BC_00001140
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    bge lbl_fn_805A40BC_00001140
    lbz r0, 0x2f4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805A40BC_0000115C
lbl_fn_805A40BC_00001140:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_805A40BC_0000117C
    mr r3, r31
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_805A40BC_0000117C
lbl_fn_805A40BC_0000115C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x1450(r31)
    b lbl_fn_805A40BC_0000119C
lbl_fn_805A40BC_0000117C:
    lwz r4, 0x5c0(r31)
    mr r3, r31
    lwz r0, 0x12a4(r31)
    clrrwi r4, r4, 1
    stw r4, 0x5c0(r31)
    oris r0, r0, 0x200
    stw r0, 0x12a4(r31)
    bl fn_800EAECC
lbl_fn_805A40BC_0000119C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A418C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_805A418C_0000126C
    addi r3, r3, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    bne lbl_fn_805A418C_0000126C
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_805A418C_00001220
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_805A418C_00001220
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x1
    bl fn_8011CD84
    b lbl_fn_805A418C_0000126C
lbl_fn_805A418C_00001220:
    lwz r0, 0xd7c(r30)
    cmpwi r0, 0x0
    blt lbl_fn_805A418C_0000126C
    lbz r0, 0xd74(r30)
    extsb r0, r0
    cmpwi r0, 0x2
    blt lbl_fn_805A418C_0000126C
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_805A418C_0000125C
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x4
    bl fn_8011CD84
    b lbl_fn_805A418C_0000126C
lbl_fn_805A418C_0000125C:
    mr r4, r30
    addi r3, r30, 0xd74
    li r5, 0x1
    bl fn_8011CD84
lbl_fn_805A418C_0000126C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A4258(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    lfs f31, lbl_8088824C
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    lfs f30, lbl_80888250
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    addi r30, r1, 0x74
    stw r29, 0xf4(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_805A4258_0000130C
    lwz r0, 0x1400(r3)
    cmplwi r0, 0x2
    blt lbl_fn_805A4258_000015D0
    bl fn_8017B3C0
    cmpwi r3, 0x0
    beq lbl_fn_805A4258_000015D0
    mr r3, r31
    bl fn_8017B434
    b lbl_fn_805A4258_000015D0
lbl_fn_805A4258_0000130C:
    cmpwi r0, 0x7
    bne lbl_fn_805A4258_000015C0
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    addi r29, r1, 0x68
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0x1090(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80888254
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_805A4258_00001528
    addi r30, r1, 0x50
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80888258
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_805A4258_000013B8
    lfs f3, 0x5c(r1)
    lfs f0, lbl_8088824C
    fcmpo cr0, f3, f0
    ble lbl_fn_805A4258_000013AC
    lfs f0, lbl_8088825C
    b lbl_fn_805A4258_000013B0
lbl_fn_805A4258_000013AC:
    lfs f0, lbl_80888260
lbl_fn_805A4258_000013B0:
    stfs f0, 0x48(r1)
    b lbl_fn_805A4258_000013CC
lbl_fn_805A4258_000013B8:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_805A4258_000013CC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088824C
    addi r4, r1, 0x38
    lfs f28, 0x88(r1)
    mr r5, r4
    lfs f29, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80888250
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f29, 0xb4(r1)
    stfs f28, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80888258
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_805A4258_000014E8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088824C
    fcmpo cr0, f3, f0
    ble lbl_fn_805A4258_000014D8
    lfs f0, lbl_8088825C
    b lbl_fn_805A4258_000014DC
lbl_fn_805A4258_000014D8:
    lfs f0, lbl_80888260
lbl_fn_805A4258_000014DC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_805A4258_000014FC
lbl_fn_805A4258_000014E8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_805A4258_000014FC:
    lfs f2, lbl_8088824C
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_805A4258_00001538
lbl_fn_805A4258_00001528:
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
lbl_fn_805A4258_00001538:
    lwz r0, 0xd94(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_805A4258_00001550
    lfs f0, lbl_80888264
    fmuls f30, f30, f0
lbl_fn_805A4258_00001550:
    lwz r0, 0x1400(r31)
    cmplwi r0, 0x2
    blt lbl_fn_805A4258_000015D0
    lwz r0, 0x140c(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    blt lbl_fn_805A4258_0000157C
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_805A4258_0000157C
    li r3, 0x1
lbl_fn_805A4258_0000157C:
    cmpwi r3, 0x0
    beq lbl_fn_805A4258_000015D0
    lwz r0, 0x105c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805A4258_0000159C
    mr r3, r31
    bl fn_8017B434
    b lbl_fn_805A4258_000015D0
lbl_fn_805A4258_0000159C:
    mr r3, r31
    bl fn_8017B3C0
    cmpwi r3, 0x0
    bne lbl_fn_805A4258_000015D0
    mr r3, r31
    bl fn_80171DB0
    mr r3, r31
    bl fn_8017BC4C
    b lbl_fn_805A4258_000015D0
lbl_fn_805A4258_000015C0:
    cmpwi r0, 0x6
    bne lbl_fn_805A4258_000015D0
    bl fn_8013A258
    b lbl_fn_805A4258_000015EC
lbl_fn_805A4258_000015D0:
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0x74
    fmuls f2, f0, f30
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_805A4258_000015EC:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_805A45FC(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lfs f4, lbl_8088824C
    li r4, 0x79
    stw r0, 0xe4(r1)
    lfs f0, lbl_80888250
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    fmr f30, f1
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    fmr f29, f2
    stfd f28, 0xa0(r1)
    psq_st f28, 0xa8(r1), 0, 0
    fmr f28, f3
    stw r31, 0x9c(r1)
    li r31, 0x0
    stw r30, 0x98(r1)
    mr r30, r3
    stw r29, 0x94(r1)
    stfs f4, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x30
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    fmr f1, f28
    addi r3, r1, 0x60
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_80888268
    fmuls f1, f0, f29
    bl fn_8068A850
    lwz r3, lbl_8087F8A0
    frsp f31, f1
    cmpwi r3, 0x0
    beq lbl_fn_805A45FC_00001824
    lwz r29, 0x48(r3)
    lfs f28, lbl_8088824C
    b lbl_fn_805A45FC_0000181C
lbl_fn_805A45FC_000016F0:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805A45FC_0000171C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_805A45FC_0000171C
    li r5, 0x1
lbl_fn_805A45FC_0000171C:
    cmpwi r5, 0x0
    beq lbl_fn_805A45FC_00001738
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805A45FC_00001738
    li r3, 0x1
lbl_fn_805A45FC_00001738:
    cmpwi r3, 0x0
    beq lbl_fn_805A45FC_0000176C
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805A45FC_00001760
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_805A45FC_00001760
    li r3, 0x1
lbl_fn_805A45FC_00001760:
    cmpwi r3, 0x0
    bne lbl_fn_805A45FC_0000176C
    li r4, 0x1
lbl_fn_805A45FC_0000176C:
    cmpwi r4, 0x0
    beq lbl_fn_805A45FC_00001818
    lwz r0, 0x54c(r29)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_805A45FC_00001818
    mr r3, r29
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_805A45FC_00001818
    lfs f1, 0x530(r29)
    addi r3, r1, 0x14
    lfs f0, 0x530(r30)
    lfs f3, 0x52c(r29)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x528(r29)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    fmr f29, f1
    fcmpo cr0, f1, f28
    ble lbl_fn_805A45FC_000017EC
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
lbl_fn_805A45FC_000017EC:
    fmuls f0, f30, f30
    fcmpo cr0, f29, f0
    bgt lbl_fn_805A45FC_00001818
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_805F9990
    fcmpo cr0, f1, f31
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805A45FC_00001818
    addi r31, r31, 0x1
lbl_fn_805A45FC_00001818:
    lwz r29, 0x14ac(r29)
lbl_fn_805A45FC_0000181C:
    cmpwi r29, 0x0
    bne lbl_fn_805A45FC_000016F0
lbl_fn_805A45FC_00001824:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_805A45FC_00001970
    lwz r29, 0x48(r3)
    lfs f29, lbl_8088824C
    b lbl_fn_805A45FC_00001968
lbl_fn_805A45FC_0000183C:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_805A45FC_00001868
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_805A45FC_00001868
    li r5, 0x1
lbl_fn_805A45FC_00001868:
    cmpwi r5, 0x0
    beq lbl_fn_805A45FC_00001884
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_805A45FC_00001884
    li r3, 0x1
lbl_fn_805A45FC_00001884:
    cmpwi r3, 0x0
    beq lbl_fn_805A45FC_000018B8
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_805A45FC_000018AC
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_805A45FC_000018AC
    li r3, 0x1
lbl_fn_805A45FC_000018AC:
    cmpwi r3, 0x0
    bne lbl_fn_805A45FC_000018B8
    li r4, 0x1
lbl_fn_805A45FC_000018B8:
    cmpwi r4, 0x0
    beq lbl_fn_805A45FC_00001964
    lwz r0, 0x54c(r29)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_805A45FC_00001964
    mr r3, r29
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_805A45FC_00001964
    lfs f1, 0x530(r29)
    addi r3, r1, 0x8
    lfs f0, 0x530(r30)
    lfs f3, 0x52c(r29)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r30)
    lfs f1, 0x528(r29)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fmr f28, f1
    fcmpo cr0, f1, f29
    ble lbl_fn_805A45FC_00001938
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_805F98D0
lbl_fn_805A45FC_00001938:
    fmuls f0, f30, f30
    fcmpo cr0, f28, f0
    bgt lbl_fn_805A45FC_00001964
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    bl fn_805F9990
    fcmpo cr0, f1, f31
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805A45FC_00001964
    addi r31, r31, 0x1
lbl_fn_805A45FC_00001964:
    lwz r29, 0x14ac(r29)
lbl_fn_805A45FC_00001968:
    cmpwi r29, 0x0
    bne lbl_fn_805A45FC_0000183C
lbl_fn_805A45FC_00001970:
    psq_l f31, 0xd8(r1), 0, 0
    mr r3, r31
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    psq_l f28, 0xa8(r1), 0, 0
    lfd f28, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_805A4984(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    mr r3, r31
    stw r30, 0x8(r1)
    mr r30, r4
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r3, r31
    extsb r4, r0
    subi r0, r4, 0x47
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x0(r30)
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
