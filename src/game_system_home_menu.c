#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000EB8C(void);
extern void fn_8000ECA8(void);
extern void fn_8003E4A4(void);
extern void fn_8004203C(void);
extern void fn_800422CC(void);
extern void fn_80049B74(void);
extern void fn_8004A1D4(void);
extern void fn_8004AD9C(void);
extern void fn_8004ADF4(void);
extern void fn_8004AE84(void);
extern void fn_8004B0E4(void);
extern void fn_8004B158(void);
extern void fn_8004B1EC(void);
extern void fn_80051CD8(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_800616C0(void);
extern void fn_800629F0(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80089ACC(void);
extern void fn_800BFAC8(void);
extern void fn_800C31EC(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB480(void);
extern void fn_800CB538(void);
extern void fn_800CB58C(void);
extern void fn_800CB5B4(void);
extern void fn_800CB5C8(void);
extern void fn_800CB69C(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800F52F8(void);
extern void fn_8020A780(void);
extern void fn_8023781C(void);
extern void fn_8035B78C(void);
extern void fn_8035FBF8(void);
extern void fn_8035FC00(void);
extern void fn_8035FC08(void);
extern void fn_8035FC10(void);
extern void fn_8035FD40(void);
extern void fn_8035FE88(void);
extern void fn_8035FF34(void);
extern void fn_8035FF44(void);
extern void fn_8035FF94(void);
extern void fn_80360CDC(void);
extern void fn_8036102C(void);
extern void fn_8036111C(void);
extern void fn_80361414(void);
extern void fn_80362278(void);
extern void fn_803626A8(void);
extern void fn_80362CC4(void);
extern void fn_80362FA4(void);
extern void fn_80363108(void);
extern void fn_80370174(void);
extern void fn_80370A78(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_805A38F4(void);
extern void fn_805F9920(void);
extern void fn_80684600(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8074B538[];
extern u8 lbl_80789CB8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_80885670;
extern u32 lbl_80885674;
extern u32 lbl_80885678;
extern u32 lbl_8088567C;
extern u32 lbl_80885680;
extern u32 lbl_80885684;
extern u32 lbl_80885688;
extern u32 lbl_8088568C;

/* Function declarations */
void fn_8035DE10(void);
void fn_8035DF08(void);
void fn_8035DF48(void);
void fn_8035DFB8(void);
void fn_8035E244(void);
void fn_8035E2A0(void);
void fn_8035E314(void);
void fn_8035E514(void);
void fn_8035E524(void);
void fn_8035E550(void);
void fn_8035E5B8(void);
void fn_8035E720(void);
void fn_8035E730(void);
void fn_8035E7CC(void);
void fn_8035E858(void);
void fn_8035EA2C(void);
void fn_8035ECCC(void);
void fn_8035F33C(void);
void fn_8035F3D4(void);

asm void fn_8035DE10(void)
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
    beq lbl_fn_8035DE10_000000D8
    addic. r0, r3, 0x15b4
    beq lbl_fn_8035DE10_0000004C
    lwz r4, 0x15b4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8035DE10_0000004C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8035DE10_0000004C
    bl fn_800897D8
lbl_fn_8035DE10_0000004C:
    addic. r31, r29, 0x1510
    beq lbl_fn_8035DE10_0000006C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8035DE10_0000006C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035DE10_0000006C:
    addic. r31, r29, 0x1504
    beq lbl_fn_8035DE10_0000008C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8035DE10_0000008C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035DE10_0000008C:
    addic. r31, r29, 0x14f8
    beq lbl_fn_8035DE10_000000AC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8035DE10_000000AC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035DE10_000000AC:
    addic. r3, r29, 0x14b0
    beq lbl_fn_8035DE10_000000BC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035DE10_000000BC:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8035DE10_000000D8
    mr r3, r29
    bl dtor_80084684
lbl_fn_8035DE10_000000D8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035DF08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8035DF08_00000120
    cmpwi r4, 0x0
    ble lbl_fn_8035DF08_00000120
    bl dtor_80084684
lbl_fn_8035DF08_00000120:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035DF48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8035DF48_00000190
    lwz r0, lbl_8087F418
    cmpwi r0, 0x0
    bne lbl_fn_8035DF48_00000190
    lis r5, lbl_8074B538@ha
    li r3, 0x1b0
    addi r5, r5, lbl_8074B538@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8035DF48_0000018C
    mr r4, r31
    bl fn_8035DFB8
lbl_fn_8035DF48_0000018C:
    stw r3, lbl_8087F418
lbl_fn_8035DF48_00000190:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F418
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035DFB8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_800D1D3C
    lis r3, lbl_80789CB8@ha
    addi r30, r31, 0x48
    addi r3, r3, lbl_80789CB8@l
    stw r3, 0x0(r31)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r29, 0x0
    addi r3, r3, lbl_8078FBB0@l
    lis r4, fn_8004AD9C@ha
    lis r5, fn_8004ADF4@ha
    stw r3, 0x0(r30)
    addi r3, r31, 0x8c
    addi r4, r4, fn_8004AD9C@l
    stw r29, 0x50(r31)
    addi r5, r5, fn_8004ADF4@l
    li r6, 0x14
    li r7, 0x2
    stw r29, 0x54(r31)
    stw r29, 0x58(r31)
    stw r29, 0x5c(r31)
    stw r29, 0x60(r31)
    stw r29, 0x64(r31)
    stw r29, 0x68(r31)
    stw r29, 0x6c(r31)
    stw r29, 0x70(r31)
    stw r29, 0x74(r31)
    stw r29, 0x78(r31)
    stw r29, 0x7c(r31)
    stw r29, 0x80(r31)
    stw r29, 0x84(r31)
    stw r29, 0x88(r31)
    bl fn_806958E0
    lfs f1, lbl_80885670
    li r30, 0x1
    lfs f0, lbl_80885674
    addi r3, r31, 0xc0
    stw r29, 0xb4(r31)
    li r4, 0x0
    li r5, 0x20
    stw r29, 0xb8(r31)
    stw r29, 0xbc(r31)
    stw r29, 0xe0(r31)
    stfs f1, 0xe4(r31)
    stfs f0, 0xe8(r31)
    stw r29, 0xec(r31)
    stw r29, 0xf0(r31)
    stfs f1, 0xf4(r31)
    stw r29, 0xf8(r31)
    stw r30, 0xfc(r31)
    bl memset
    lfs f1, lbl_80885670
    addi r3, r31, 0x100
    lfs f0, lbl_80885674
    li r4, 0x0
    stw r29, 0x120(r31)
    li r5, 0x20
    stfs f1, 0x124(r31)
    stfs f0, 0x128(r31)
    stw r29, 0x12c(r31)
    stw r29, 0x130(r31)
    stfs f1, 0x134(r31)
    stw r29, 0x138(r31)
    stw r30, 0x13c(r31)
    bl memset
    lfs f1, lbl_80885670
    addi r3, r31, 0x140
    lfs f0, lbl_80885674
    li r4, 0x0
    stw r29, 0x160(r31)
    li r5, 0x20
    stfs f1, 0x164(r31)
    stfs f0, 0x168(r31)
    stw r29, 0x16c(r31)
    stw r29, 0x170(r31)
    stfs f1, 0x174(r31)
    stw r29, 0x178(r31)
    stw r30, 0x17c(r31)
    bl memset
    lfs f1, lbl_80885670
    addi r3, r31, 0x194
    lfs f0, lbl_80885678
    stw r29, 0x180(r31)
    stfs f1, 0x184(r31)
    stfs f1, 0x188(r31)
    stw r29, 0x18c(r31)
    stfs f0, 0x190(r31)
    bl fn_800CB360
    lis r3, lbl_8074B538@ha
    cmpwi r29, 0x0
    addi r3, r3, lbl_8074B538@l
    stw r29, 0x198(r31)
    addi r4, r3, 0x1
    stw r29, 0x19c(r31)
    stw r29, 0x1a0(r31)
    stw r29, 0x1a4(r31)
    stw r29, 0x1a8(r31)
    stw r29, 0x1ac(r31)
    bne lbl_fn_8035DFB8_00000370
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8035DFB8_00000370
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1a8(r31)
    b lbl_fn_8035DFB8_00000374
lbl_fn_8035DFB8_00000370:
    li r3, 0x0
lbl_fn_8035DFB8_00000374:
    cmpwi r3, 0x0
    stw r3, 0x1ac(r31)
    beq lbl_fn_8035DFB8_000003CC
    lis r30, lbl_8074B538@ha
    addi r5, r31, 0x1a4
    addi r30, r30, lbl_8074B538@l
    li r6, 0x0
    addi r4, r30, 0x7
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lwz r3, 0x1ac(r31)
    addi r4, r30, 0x12
    lfs f1, lbl_80885674
    addi r5, r31, 0x190
    lfs f2, lbl_8088567C
    li r6, 0x0
    lfs f3, lbl_80885680
    li r7, 0x0
    bl fn_8008771C
lbl_fn_8035DFB8_000003CC:
    lwz r5, 0xbc(r31)
    li r6, 0x1
    stw r6, 0x98(r31)
    mr r3, r31
    addi r0, r5, 0x1
    srwi r4, r0, 31
    stw r6, 0xac(r31)
    clrlwi r0, r0, 31
    xor r0, r0, r4
    subf r0, r4, r0
    stw r0, 0xbc(r31)
    mulli r4, r5, 0x14
    add r5, r31, r4
    mulli r0, r0, 0x14
    addi r5, r5, 0x8c
    stw r5, 0xb4(r31)
    add r4, r31, r0
    addi r0, r4, 0x8c
    stw r0, 0xb8(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035E244(void)
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
    beq lbl_fn_8035E244_00000474
    li r4, -0x1
    addi r3, r3, 0x58
    bl fn_800CB3A0
    cmpwi r31, 0x0
    ble lbl_fn_8035E244_00000474
    mr r3, r30
    bl dtor_80084684
lbl_fn_8035E244_00000474:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035E2A0(void)
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
    beq lbl_fn_8035E2A0_000004E8
    addic. r0, r3, 0xa4
    beq lbl_fn_8035E2A0_000004D8
    lwz r4, 0xa4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8035E2A0_000004D8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8035E2A0_000004D8
    bl fn_800897D8
lbl_fn_8035E2A0_000004D8:
    cmpwi r31, 0x0
    ble lbl_fn_8035E2A0_000004E8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8035E2A0_000004E8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035E314(void)
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
    stw r28, 0x10(r1)
    beq lbl_fn_8035E314_000006E0
    lis r4, lbl_80789CB8@ha
    li r28, 0x0
    addi r4, r4, lbl_80789CB8@l
    stw r4, 0x0(r3)
    li r29, 0x0
    b lbl_fn_8035E314_00000568
lbl_fn_8035E314_00000548:
    lwz r0, 0x58(r30)
    li r4, 0x0
    li r5, 0x0
    add r3, r0, r29
    addi r3, r3, 0x58
    bl fn_800CB5C8
    addi r29, r29, 0x5c
    addi r28, r28, 0x1
lbl_fn_8035E314_00000568:
    lwz r0, 0x54(r30)
    cmplw r28, r0
    blt lbl_fn_8035E314_00000548
    li r28, 0x0
    li r29, 0x0
lbl_fn_8035E314_0000057C:
    add r3, r30, r29
    li r4, 0x0
    addi r3, r3, 0x8c
    bl fn_8004B1EC
    addi r28, r28, 0x1
    addi r29, r29, 0x14
    cmplwi r28, 0x2
    blt lbl_fn_8035E314_0000057C
    lwz r3, 0x58(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8035E314_000005B4
    lis r4, fn_8035E244@ha
    addi r4, r4, fn_8035E244@l
    bl fn_80695A50
lbl_fn_8035E314_000005B4:
    lwz r3, 0x60(r30)
    li r0, 0x0
    stw r0, 0x58(r30)
    cmpwi r3, 0x0
    stw r0, 0x54(r30)
    beq lbl_fn_8035E314_000005D8
    lis r4, fn_8035E2A0@ha
    addi r4, r4, fn_8035E2A0@l
    bl fn_80695A50
lbl_fn_8035E314_000005D8:
    addic. r0, r30, 0x1a8
    li r0, 0x0
    stw r0, 0x60(r30)
    stw r0, 0x5c(r30)
    stw r0, lbl_8087F418
    beq lbl_fn_8035E314_0000060C
    lwz r4, 0x1a8(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8035E314_0000060C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8035E314_0000060C
    bl fn_800897D8
lbl_fn_8035E314_0000060C:
    addi r3, r30, 0x194
    li r4, -0x1
    bl fn_800CB3A0
    lis r4, fn_8004ADF4@ha
    addi r3, r30, 0x8c
    addi r4, r4, fn_8004ADF4@l
    li r5, 0x14
    li r6, 0x2
    bl fn_806959D8
    addic. r0, r30, 0x64
    beq lbl_fn_8035E314_0000065C
    lwz r3, 0x68(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8035E314_00000650
    beq lbl_fn_8035E314_00000650
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8035E314_00000650:
    li r0, 0x0
    stw r0, 0x68(r30)
    stw r0, 0x64(r30)
lbl_fn_8035E314_0000065C:
    addic. r0, r30, 0x5c
    beq lbl_fn_8035E314_00000688
    lwz r3, 0x60(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8035E314_0000067C
    lis r4, fn_8035E2A0@ha
    addi r4, r4, fn_8035E2A0@l
    bl fn_80695A50
lbl_fn_8035E314_0000067C:
    li r0, 0x0
    stw r0, 0x60(r30)
    stw r0, 0x5c(r30)
lbl_fn_8035E314_00000688:
    addic. r0, r30, 0x54
    beq lbl_fn_8035E314_000006B4
    lwz r3, 0x58(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8035E314_000006A8
    lis r4, fn_8035E244@ha
    addi r4, r4, fn_8035E244@l
    bl fn_80695A50
lbl_fn_8035E314_000006A8:
    li r0, 0x0
    stw r0, 0x58(r30)
    stw r0, 0x54(r30)
lbl_fn_8035E314_000006B4:
    addic. r3, r30, 0x48
    beq lbl_fn_8035E314_000006C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8035E314_000006C4:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8035E314_000006E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8035E314_000006E0:
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

asm void fn_8035E514(void)
{
    nofralloc
    mulli r0, r4, 0x5c
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_8035E524(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800D3FA4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035E550(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x19c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035E550_00000784
    addi r3, r3, 0x194
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_8035E550_00000784
    addi r3, r31, 0x194
    bl fn_800CB480
    bl fn_800C31EC
    li r0, 0x0
    stw r0, 0x19c(r31)
lbl_fn_8035E550_00000784:
    mr r3, r31
    bl fn_8035EA2C
    mr r3, r31
    bl fn_8035ECCC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035E5B8(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x140
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x1a4(r3)
    mr r24, r3
    cmpwi r0, 0x0
    ble lbl_fn_8035E5B8_000008E8
    lis r31, lbl_8074B538@ha
    lfs f31, lbl_80885670
    lfs f30, lbl_80885674
    addi r31, r31, lbl_8074B538@l
    li r25, 0x0
    li r26, 0x0
    lis r29, lbl_807C7030@ha
    lis r30, 0xff7f
    b lbl_fn_8035E5B8_000008DC
lbl_fn_8035E5B8_00000800:
    lwz r0, 0x60(r24)
    addi r4, r29, lbl_807C7030@l
    lwz r7, 0x84(r24)
    addi r6, r30, 0x407f
    add r27, r0, r26
    lwzx r0, r26, r0
    lwz r3, lbl_8087EEB0
    addi r5, r27, 0x60
    subf r0, r7, r0
    lfs f1, lbl_80885674
    cntlzw r0, r0
    srwi. r28, r0, 5
    beq lbl_fn_8035E5B8_00000838
    li r6, -0x7f01
lbl_fn_8035E5B8_00000838:
    addi r7, r27, 0x6c
    bl fn_800629F0
    lfs f0, 0x98(r27)
    addi r3, r1, 0x14
    lfs f1, 0x88(r27)
    addi r5, r1, 0x8
    lfs f2, 0x78(r27)
    stfs f2, 0x8(r1)
    lwz r4, lbl_8087EFB4
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_800BFAC8
    lfs f0, 0x1c(r1)
    fcmpo cr0, f30, f0
    bge lbl_fn_8035E5B8_000008D4
    fcmpo cr0, f0, f31
    bge lbl_fn_8035E5B8_000008D4
    lwz r5, 0x0(r27)
    addi r3, r1, 0x20
    addi r4, r31, 0x1f
    addi r6, r27, 0xc
    crclr 6
    bl sprintf
    lfs f4, lbl_80885684
    cmpwi r28, 0x0
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x20
    fmr f5, f4
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    addi r5, r30, 0x7f7f
    lfs f3, lbl_80885674
    beq lbl_fn_8035E5B8_000008C0
    li r5, -0x1
lbl_fn_8035E5B8_000008C0:
    lfs f6, lbl_80885674
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_8035E5B8_000008D4:
    addi r26, r26, 0xa8
    addi r25, r25, 0x1
lbl_fn_8035E5B8_000008DC:
    lwz r0, 0x5c(r24)
    cmplw r25, r0
    blt lbl_fn_8035E5B8_00000800
lbl_fn_8035E5B8_000008E8:
    addi r11, r1, 0x140
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    bl _restgpr_24
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8035E720(void)
{
    nofralloc
    mulli r0, r4, 0xa8
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_8035E730(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8035E730_00000978
    addi r3, r3, 0x48
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8035E730_00000958
    li r3, 0x1
    b lbl_fn_8035E730_000009A8
lbl_fn_8035E730_00000958:
    mr r3, r31
    bl fn_8035F3D4
    addi r3, r31, 0x48
    bl fn_80473F88
    li r0, 0x3
    stw r0, 0x50(r31)
    li r3, 0x1
    b lbl_fn_8035E730_000009A8
lbl_fn_8035E730_00000978:
    cmpwi r0, 0x3
    bne lbl_fn_8035E730_000009A4
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8035E730_00000994
    li r3, 0x1
    b lbl_fn_8035E730_000009A8
lbl_fn_8035E730_00000994:
    li r0, 0x4
    stw r0, 0x50(r31)
    li r3, 0x0
    b lbl_fn_8035E730_000009A8
lbl_fn_8035E730_000009A4:
    li r3, 0x0
lbl_fn_8035E730_000009A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035E7CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8035E7CC_00000A2C
    li r0, 0x5
    stw r0, 0x50(r3)
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8035E7CC_00000A18
lbl_fn_8035E7CC_000009F8:
    lwz r3, 0x58(r29)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_fn_8035E7CC_00000A10
    li r4, 0x0
    bl fn_800D246C
lbl_fn_8035E7CC_00000A10:
    addi r31, r31, 0x5c
    addi r30, r30, 0x1
lbl_fn_8035E7CC_00000A18:
    lwz r0, 0x54(r29)
    cmplw r30, r0
    blt lbl_fn_8035E7CC_000009F8
    li r0, 0x1
    stw r0, 0x6c(r29)
lbl_fn_8035E7CC_00000A2C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035E858(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x1
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    li r30, 0x0
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    li r28, 0x0
    stw r0, 0x50(r3)
    b lbl_fn_8035E858_00000AB4
lbl_fn_8035E858_00000A7C:
    lwz r0, 0x58(r31)
    li r4, 0x3c
    li r5, 0x0
    add r3, r0, r30
    lwzx r29, r30, r0
    addi r3, r3, 0x58
    bl fn_800CB5C8
    cmpwi r29, 0x0
    beq lbl_fn_8035E858_00000AAC
    mr r3, r29
    li r4, 0x0
    bl fn_8036102C
lbl_fn_8035E858_00000AAC:
    addi r28, r28, 0x1
    addi r30, r30, 0x5c
lbl_fn_8035E858_00000AB4:
    lwz r0, 0x54(r31)
    cmplw r28, r0
    blt lbl_fn_8035E858_00000A7C
    lwz r3, 0x84(r31)
    li r30, 0x0
    li r0, -0x1
    stw r30, 0x6c(r31)
    stw r3, 0x88(r31)
    stw r0, 0x84(r31)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x158(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035E858_00000BC4
    lwz r3, 0xb4(r31)
    li r4, 0x3c
    bl fn_8004B1EC
    lwz r3, 0xb4(r31)
    addi r3, r3, 0x8
    bl fn_800CB480
    lwz r28, 0x130(r31)
    li r0, 0x1
    lfs f1, lbl_80885670
    addi r3, r1, 0x8
    lfs f0, lbl_80885674
    li r4, 0x0
    stw r30, 0x28(r1)
    li r5, 0x20
    stfs f1, 0x2c(r1)
    stfs f0, 0x30(r1)
    stw r30, 0x34(r1)
    stw r30, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r0, 0x44(r1)
    bl memset
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x104(r31)
    stw r3, 0x100(r31)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x10c(r31)
    stw r3, 0x108(r31)
    lwz r3, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x114(r31)
    stw r3, 0x110(r31)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x11c(r31)
    stw r3, 0x118(r31)
    lwz r0, 0x28(r1)
    stw r0, 0x120(r31)
    lfs f0, 0x2c(r1)
    stfs f0, 0x124(r31)
    lfs f0, 0x30(r1)
    stfs f0, 0x128(r31)
    lwz r0, 0x34(r1)
    stw r0, 0x12c(r31)
    lwz r0, 0x38(r1)
    stw r0, 0x130(r31)
    lfs f0, 0x3c(r1)
    stfs f0, 0x134(r31)
    lwz r0, 0x40(r1)
    stw r0, 0x138(r31)
    lwz r0, 0x44(r1)
    stw r0, 0x13c(r31)
    stw r28, 0x130(r31)
lbl_fn_8035E858_00000BC4:
    lwz r3, 0x180(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_8035E858_00000BFC
    lwz r3, 0xb8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8035E858_00000BF4
    li r4, 0x0
    bl fn_8004B1EC
    lwz r3, 0xb8(r31)
    addi r3, r3, 0x8
    bl fn_800CB480
lbl_fn_8035E858_00000BF4:
    li r0, 0x0
    stw r0, 0x180(r31)
lbl_fn_8035E858_00000BFC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8035EA2C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x70
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    bl _savegpr_23
    lwz r4, 0x74(r3)
    mr r31, r3
    cmpwi r4, 0x0
    ble lbl_fn_8035EA2C_00000CAC
    subic. r0, r4, 0x1
    stw r0, 0x74(r3)
    bgt lbl_fn_8035EA2C_00000CAC
    li r0, 0x5
    stw r0, 0x50(r3)
    li r28, 0x0
    li r26, 0x0
    b lbl_fn_8035EA2C_00000C98
lbl_fn_8035EA2C_00000C78:
    lwz r3, 0x58(r31)
    lwzx r3, r3, r26
    cmpwi r3, 0x0
    beq lbl_fn_8035EA2C_00000C90
    li r4, 0x0
    bl fn_800D246C
lbl_fn_8035EA2C_00000C90:
    addi r26, r26, 0x5c
    addi r28, r28, 0x1
lbl_fn_8035EA2C_00000C98:
    lwz r0, 0x54(r31)
    cmplw r28, r0
    blt lbl_fn_8035EA2C_00000C78
    li r0, 0x1
    stw r0, 0x6c(r31)
lbl_fn_8035EA2C_00000CAC:
    lwz r0, 0x6c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8035EA2C_00000E8C
    lwz r0, 0x180(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8035EA2C_00000CD0
    lwz r0, 0x180(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8035EA2C_00000E8C
lbl_fn_8035EA2C_00000CD0:
    lwz r0, 0x7c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8035EA2C_00000E8C
    li r25, 0x0
    lfs f30, lbl_80885688
    lfs f31, lbl_8088568C
    mr r28, r25
    addi r27, r1, 0x34
    addi r26, r1, 0x18
    li r24, 0x0
    li r30, 0x0
    li r29, 0x1
    b lbl_fn_8035EA2C_00000E14
lbl_fn_8035EA2C_00000D04:
    lwz r0, 0x60(r31)
    add r23, r0, r30
    lwz r0, 0x4c(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8035EA2C_00000D60
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8035EA2C_00000D60
    lwz r0, 0x50(r23)
    cmpwi r0, 0x1
    bne lbl_fn_8035EA2C_00000D3C
    lwz r4, 0x54(r23)
    bl fn_80370174
    b lbl_fn_8035EA2C_00000D44
lbl_fn_8035EA2C_00000D3C:
    lwz r4, 0x54(r23)
    bl fn_80370A78
lbl_fn_8035EA2C_00000D44:
    lwz r0, 0x58(r23)
    cmpw r3, r0
    bne lbl_fn_8035EA2C_00000D58
    stw r29, 0x5c(r23)
    b lbl_fn_8035EA2C_00000D64
lbl_fn_8035EA2C_00000D58:
    stw r28, 0x5c(r23)
    b lbl_fn_8035EA2C_00000D64
lbl_fn_8035EA2C_00000D60:
    stw r29, 0x5c(r23)
lbl_fn_8035EA2C_00000D64:
    lwz r0, 0x5c(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8035EA2C_00000E0C
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8035EA2C_00000E0C
    addi r4, r3, 0x29f4
    lfs f4, 0x98(r23)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x28
    psq_st f1, 0x0(r27), 0, 0
    lfs f2, 0x8(r4)
    lfs f5, 0x88(r23)
    lfs f6, 0x78(r23)
    fsubs f7, f2, f4
    lfs f3, 0x38(r1)
    lfs f0, 0x34(r1)
    fsubs f3, f3, f5
    stfs f2, 0x3c(r1)
    fsubs f0, f0, f6
    stfs f6, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f0, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f7, 0x30(r1)
    bl fn_805F9920
    fcmpo cr0, f30, f1
    fmr f29, f1
    ble lbl_fn_8035EA2C_00000E0C
    psq_l f1, 0x0(r27), 0, 0
    mr r3, r26
    lfs f2, 0x3c(r1)
    addi r4, r23, 0x60
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x20(r1)
    stfs f31, 0x24(r1)
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_8035EA2C_00000E0C
    fmr f30, f29
    mr r25, r23
lbl_fn_8035EA2C_00000E0C:
    addi r24, r24, 0x1
    addi r30, r30, 0xa8
lbl_fn_8035EA2C_00000E14:
    lwz r0, 0x5c(r31)
    cmplw r24, r0
    blt lbl_fn_8035EA2C_00000D04
    cmpwi r25, 0x0
    beq lbl_fn_8035EA2C_00000E6C
    lwz r4, 0x0(r25)
    lwz r0, 0x84(r31)
    cmpw r0, r4
    bne lbl_fn_8035EA2C_00000E58
    lwz r3, 0xb4(r31)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035EA2C_00000E8C
    lwz r3, 0xb8(r31)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035EA2C_00000E8C
lbl_fn_8035EA2C_00000E58:
    mr r3, r31
    li r5, 0x3c
    li r6, 0x1
    bl fn_8035FF94
    b lbl_fn_8035EA2C_00000E8C
lbl_fn_8035EA2C_00000E6C:
    lwz r0, 0x84(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8035EA2C_00000E8C
    mr r3, r31
    li r4, 0x0
    li r5, 0x3c
    li r6, 0x1
    bl fn_8035FF94
lbl_fn_8035EA2C_00000E8C:
    addi r11, r1, 0x70
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    bl _restgpr_23
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8035ECCC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    lwz r0, 0x180(r3)
    mr r31, r3
    cmpwi r0, 0x1
    bne lbl_fn_8035ECCC_000010C4
    lwz r4, 0x160(r3)
    lwz r0, 0x120(r3)
    cmpw r0, r4
    beq lbl_fn_8035ECCC_00000F70
    cmpwi r4, 0x0
    ble lbl_fn_8035ECCC_00000F58
    lwz r0, 0x17c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035ECCC_00000F58
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035ECCC_00000F58
    li r4, 0x2
    li r5, 0x1
    addi r3, r3, 0x140
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_8035ECCC_00001514
    li r0, 0x2
    stw r0, 0x180(r31)
    addi r4, r31, 0x140
    li r5, 0x0
    lwz r3, lbl_8087EFE8
    stw r0, 0x34d0(r3)
    lwz r3, 0xb8(r31)
    bl fn_8004AE84
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d0(r3)
    b lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_00000F58:
    li r0, 0x3
    stw r0, 0x180(r3)
    lwz r3, 0xb4(r3)
    lwz r4, 0x178(r31)
    bl fn_8004B1EC
    b lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_00000F70:
    lwz r5, 0xb4(r3)
    li r0, 0x6
    lfs f1, 0x164(r3)
    stw r0, 0x180(r3)
    addi r3, r5, 0x8
    lwz r4, 0x178(r31)
    bl fn_800CB5B4
    lwz r3, 0xb4(r31)
    lfs f1, 0x168(r31)
    lwz r4, 0x178(r31)
    addi r3, r3, 0x8
    bl fn_800CB69C
    lwz r14, 0x170(r31)
    lwz r0, 0x130(r31)
    cmpw r0, r14
    beq lbl_fn_8035ECCC_00000FC0
    lwz r3, lbl_8087EE90
    mr r4, r14
    bl fn_8004A1D4
    stw r14, 0x130(r31)
lbl_fn_8035ECCC_00000FC0:
    lwz r28, 0x100(r31)
    lwz r27, 0x104(r31)
    lwz r26, 0x108(r31)
    lwz r25, 0x10c(r31)
    lwz r24, 0x110(r31)
    lwz r23, 0x114(r31)
    lwz r22, 0x118(r31)
    lwz r21, 0x11c(r31)
    lwz r20, 0x120(r31)
    lfs f5, 0x124(r31)
    lfs f4, 0x128(r31)
    lwz r19, 0x12c(r31)
    lwz r18, 0x130(r31)
    lfs f3, 0x134(r31)
    lwz r17, 0x138(r31)
    lwz r16, 0x13c(r31)
    lwz r15, 0x140(r31)
    lwz r14, 0x144(r31)
    lwz r12, 0x148(r31)
    lwz r11, 0x14c(r31)
    lwz r10, 0x150(r31)
    lwz r9, 0x154(r31)
    lwz r8, 0x158(r31)
    lwz r7, 0x15c(r31)
    lwz r6, 0x160(r31)
    lfs f2, 0x164(r31)
    lfs f1, 0x168(r31)
    lwz r5, 0x16c(r31)
    lwz r4, 0x170(r31)
    lfs f0, 0x174(r31)
    lwz r3, 0x178(r31)
    lwz r0, 0x17c(r31)
    stw r28, 0xc0(r31)
    stw r27, 0xc4(r31)
    stw r26, 0xc8(r31)
    stw r25, 0xcc(r31)
    stw r24, 0xd0(r31)
    stw r23, 0xd4(r31)
    stw r22, 0xd8(r31)
    stw r21, 0xdc(r31)
    stw r20, 0xe0(r31)
    stfs f5, 0xe4(r31)
    stfs f4, 0xe8(r31)
    stw r19, 0xec(r31)
    stw r18, 0xf0(r31)
    stfs f3, 0xf4(r31)
    stw r17, 0xf8(r31)
    stw r16, 0xfc(r31)
    stw r15, 0x100(r31)
    stw r14, 0x104(r31)
    stw r12, 0x108(r31)
    stw r11, 0x10c(r31)
    stw r10, 0x110(r31)
    stw r9, 0x114(r31)
    stw r8, 0x118(r31)
    stw r7, 0x11c(r31)
    stw r6, 0x120(r31)
    stfs f2, 0x124(r31)
    stfs f1, 0x128(r31)
    stw r5, 0x12c(r31)
    stw r4, 0x130(r31)
    stfs f0, 0x134(r31)
    stw r3, 0x138(r31)
    stw r0, 0x13c(r31)
    b lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_000010C4:
    cmpwi r0, 0x2
    bne lbl_fn_8035ECCC_00001294
    lwz r3, 0xb8(r3)
    bl fn_8004B0E4
    cmpwi r3, 0x0
    bne lbl_fn_8035ECCC_00001514
    lwz r0, 0x17c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8035ECCC_00001100
    li r0, 0x5
    stw r0, 0x180(r31)
    lwz r3, 0xb4(r31)
    lwz r4, 0x178(r31)
    bl fn_8004B1EC
    b lbl_fn_8035ECCC_00001108
lbl_fn_8035ECCC_00001100:
    li r0, 0x4
    stw r0, 0x180(r31)
lbl_fn_8035ECCC_00001108:
    lwz r3, 0xb8(r31)
    lfs f1, 0x164(r31)
    lwz r4, 0x178(r31)
    bl fn_8004B158
    lwz r3, 0xb8(r31)
    li r4, 0x0
    lfs f1, 0x168(r31)
    addi r3, r3, 0x8
    bl fn_800CB69C
    lwz r14, 0x170(r31)
    lwz r0, 0x130(r31)
    cmpw r0, r14
    beq lbl_fn_8035ECCC_0000114C
    lwz r3, lbl_8087EE90
    mr r4, r14
    bl fn_8004A1D4
    stw r14, 0x130(r31)
lbl_fn_8035ECCC_0000114C:
    lwz r4, 0xbc(r31)
    lwz r15, 0x100(r31)
    addi r0, r4, 0x1
    lwz r16, 0x104(r31)
    srwi r3, r0, 31
    lwz r17, 0x108(r31)
    clrlwi r0, r0, 31
    lwz r18, 0x10c(r31)
    xor r0, r0, r3
    lwz r19, 0x110(r31)
    subf r0, r3, r0
    lwz r20, 0x114(r31)
    mulli r3, r0, 0x14
    lwz r21, 0x118(r31)
    lwz r22, 0x11c(r31)
    lwz r23, 0x120(r31)
    mulli r4, r4, 0x14
    lfs f5, 0x124(r31)
    add r3, r31, r3
    lfs f4, 0x128(r31)
    lwz r24, 0x12c(r31)
    addi r3, r3, 0x8c
    stw r3, 0x8(r1)
    add r4, r31, r4
    addi r14, r4, 0x8c
    lwz r25, 0x130(r31)
    lfs f3, 0x134(r31)
    lwz r26, 0x138(r31)
    lwz r27, 0x13c(r31)
    lwz r28, 0x140(r31)
    lwz r29, 0x144(r31)
    lwz r30, 0x148(r31)
    lwz r12, 0x14c(r31)
    lwz r11, 0x150(r31)
    lwz r10, 0x154(r31)
    lwz r9, 0x158(r31)
    lwz r8, 0x15c(r31)
    lwz r7, 0x160(r31)
    lfs f2, 0x164(r31)
    lfs f1, 0x168(r31)
    lwz r6, 0x16c(r31)
    lwz r5, 0x170(r31)
    lfs f0, 0x174(r31)
    lwz r4, 0x178(r31)
    lwz r3, 0x17c(r31)
    stw r0, 0xbc(r31)
    lwz r0, 0x8(r1)
    stw r15, 0xc0(r31)
    stw r16, 0xc4(r31)
    stw r17, 0xc8(r31)
    stw r18, 0xcc(r31)
    stw r19, 0xd0(r31)
    stw r20, 0xd4(r31)
    stw r21, 0xd8(r31)
    stw r22, 0xdc(r31)
    stw r23, 0xe0(r31)
    stfs f5, 0xe4(r31)
    stfs f4, 0xe8(r31)
    stw r24, 0xec(r31)
    stw r25, 0xf0(r31)
    stfs f3, 0xf4(r31)
    stw r26, 0xf8(r31)
    stw r27, 0xfc(r31)
    stw r28, 0x100(r31)
    stw r29, 0x104(r31)
    stw r30, 0x108(r31)
    stw r12, 0x10c(r31)
    stw r11, 0x110(r31)
    stw r10, 0x114(r31)
    stw r9, 0x118(r31)
    stw r8, 0x11c(r31)
    stw r7, 0x120(r31)
    stfs f2, 0x124(r31)
    stfs f1, 0x128(r31)
    stw r6, 0x12c(r31)
    stw r5, 0x130(r31)
    stfs f0, 0x134(r31)
    stw r4, 0x138(r31)
    stw r3, 0x13c(r31)
    stw r14, 0xb4(r31)
    stw r0, 0xb8(r31)
    b lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_00001294:
    cmpwi r0, 0x3
    bne lbl_fn_8035ECCC_00001494
    lwz r3, 0xb4(r3)
    lwzu r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035ECCC_000012B8
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_000012B8:
    lwz r3, 0xb4(r31)
    addi r3, r3, 0x8
    bl fn_800CB480
    lwz r0, 0x160(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8035ECCC_00001324
    lwz r0, 0x7c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8035ECCC_00001324
    addi r3, r31, 0x140
    li r4, 0x2
    li r5, 0x0
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_8035ECCC_00001514
    li r0, 0x2
    stw r0, 0x180(r31)
    addi r4, r31, 0x140
    li r5, 0x0
    lwz r3, lbl_8087EFE8
    stw r0, 0x34d0(r3)
    lwz r3, 0xb8(r31)
    bl fn_8004AE84
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d0(r3)
    b lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_00001324:
    lwz r14, 0x170(r31)
    li r3, 0x6
    lwz r0, 0x130(r31)
    stw r3, 0x180(r31)
    cmpw r0, r14
    beq lbl_fn_8035ECCC_0000134C
    lwz r3, lbl_8087EE90
    mr r4, r14
    bl fn_8004A1D4
    stw r14, 0x130(r31)
lbl_fn_8035ECCC_0000134C:
    lwz r4, 0xbc(r31)
    lwz r29, 0x100(r31)
    addi r0, r4, 0x1
    lwz r28, 0x104(r31)
    srwi r3, r0, 31
    lwz r27, 0x108(r31)
    clrlwi r0, r0, 31
    lwz r26, 0x10c(r31)
    xor r0, r0, r3
    lwz r25, 0x110(r31)
    subf r0, r3, r0
    lwz r24, 0x114(r31)
    mulli r3, r0, 0x14
    lwz r23, 0x118(r31)
    lwz r22, 0x11c(r31)
    lwz r21, 0x120(r31)
    mulli r4, r4, 0x14
    lfs f5, 0x124(r31)
    add r3, r31, r3
    lfs f4, 0x128(r31)
    lwz r20, 0x12c(r31)
    addi r3, r3, 0x8c
    stw r3, 0xc(r1)
    add r4, r31, r4
    addi r30, r4, 0x8c
    lwz r19, 0x130(r31)
    lfs f3, 0x134(r31)
    lwz r18, 0x138(r31)
    lwz r17, 0x13c(r31)
    lwz r16, 0x140(r31)
    lwz r15, 0x144(r31)
    lwz r14, 0x148(r31)
    lwz r12, 0x14c(r31)
    lwz r11, 0x150(r31)
    lwz r10, 0x154(r31)
    lwz r9, 0x158(r31)
    lwz r8, 0x15c(r31)
    lwz r7, 0x160(r31)
    lfs f2, 0x164(r31)
    lfs f1, 0x168(r31)
    lwz r6, 0x16c(r31)
    lwz r5, 0x170(r31)
    lfs f0, 0x174(r31)
    lwz r4, 0x178(r31)
    lwz r3, 0x17c(r31)
    stw r0, 0xbc(r31)
    lwz r0, 0xc(r1)
    stw r29, 0xc0(r31)
    stw r28, 0xc4(r31)
    stw r27, 0xc8(r31)
    stw r26, 0xcc(r31)
    stw r25, 0xd0(r31)
    stw r24, 0xd4(r31)
    stw r23, 0xd8(r31)
    stw r22, 0xdc(r31)
    stw r21, 0xe0(r31)
    stfs f5, 0xe4(r31)
    stfs f4, 0xe8(r31)
    stw r20, 0xec(r31)
    stw r19, 0xf0(r31)
    stfs f3, 0xf4(r31)
    stw r18, 0xf8(r31)
    stw r17, 0xfc(r31)
    stw r16, 0x100(r31)
    stw r15, 0x104(r31)
    stw r14, 0x108(r31)
    stw r12, 0x10c(r31)
    stw r11, 0x110(r31)
    stw r10, 0x114(r31)
    stw r9, 0x118(r31)
    stw r8, 0x11c(r31)
    stw r7, 0x120(r31)
    stfs f2, 0x124(r31)
    stfs f1, 0x128(r31)
    stw r6, 0x12c(r31)
    stw r5, 0x130(r31)
    stfs f0, 0x134(r31)
    stw r4, 0x138(r31)
    stw r3, 0x13c(r31)
    stw r30, 0xb4(r31)
    stw r0, 0xb8(r31)
    b lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_00001494:
    cmpwi r0, 0x4
    bne lbl_fn_8035ECCC_000014BC
    lwz r3, 0xb4(r3)
    addi r3, r3, 0x8
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_8035ECCC_00001514
    li r0, 0x6
    stw r0, 0x180(r31)
    b lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_000014BC:
    cmpwi r0, 0x5
    bne lbl_fn_8035ECCC_00001504
    lwz r3, 0xb4(r3)
    addi r3, r3, 0x8
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_8035ECCC_00001514
    lwz r3, 0xb8(r31)
    addi r3, r3, 0x8
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_8035ECCC_00001514
    lwz r3, 0xb8(r31)
    addi r3, r3, 0x8
    bl fn_800CB480
    li r0, 0x6
    stw r0, 0x180(r31)
    b lbl_fn_8035ECCC_00001514
lbl_fn_8035ECCC_00001504:
    cmpwi r0, 0x6
    bne lbl_fn_8035ECCC_00001514
    li r0, 0x0
    stw r0, 0x180(r3)
lbl_fn_8035ECCC_00001514:
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8035F33C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_8035F33C_00001578
lbl_fn_8035F33C_0000155C:
    lwz r3, 0x58(r28)
    lwzx r3, r3, r30
    cmpwi r3, 0x0
    beq lbl_fn_8035F33C_00001570
    bl fn_800D2338
lbl_fn_8035F33C_00001570:
    addi r30, r30, 0x5c
    addi r31, r31, 0x1
lbl_fn_8035F33C_00001578:
    lwz r0, 0x54(r28)
    cmplw r31, r0
    blt lbl_fn_8035F33C_0000155C
    li r0, 0x2
    stw r0, 0x50(r28)
    addi r3, r28, 0x48
    mr r4, r29
    lwz r12, 0x48(r28)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035F3D4(void)
{
    nofralloc
    stwu r1, -0x680(r1)
    mflr r0
    stw r0, 0x684(r1)
    stmw r25, 0x664(r1)
    mr r28, r3
    addi r3, r3, 0x48
    bl fn_8047059C
    mr r26, r3
    addi r3, r28, 0x48
    bl fn_80470580
    mr r4, r3
    mr r5, r26
    addi r3, r1, 0x20
    bl fn_8004203C
    lis r26, lbl_8074B538@ha
    li r27, 0x0
    addi r26, r26, lbl_8074B538@l
    li r29, 0x0
lbl_fn_8035F3D4_0000160C:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r26, 0x2c
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001734
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8020A780
    addi r3, r1, 0x14
    addi r4, r26, 0x32
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001670
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    add r27, r27, r3
    b lbl_fn_8035F3D4_00001734
lbl_fn_8035F3D4_00001670:
    addi r3, r1, 0x14
    addi r4, r26, 0x3d
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001698
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    add r27, r27, r3
    b lbl_fn_8035F3D4_00001734
lbl_fn_8035F3D4_00001698:
    addi r3, r1, 0x14
    addi r4, r26, 0x47
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_000016C0
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    add r27, r27, r3
    b lbl_fn_8035F3D4_00001734
lbl_fn_8035F3D4_000016C0:
    addi r3, r1, 0x14
    addi r4, r26, 0x53
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_000016E8
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    add r27, r27, r3
    b lbl_fn_8035F3D4_00001734
lbl_fn_8035F3D4_000016E8:
    addi r3, r1, 0x14
    addi r4, r26, 0x5c
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001710
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    add r27, r27, r3
    b lbl_fn_8035F3D4_00001734
lbl_fn_8035F3D4_00001710:
    addi r3, r1, 0x14
    addi r4, r26, 0x68
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001734
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    add r29, r29, r3
lbl_fn_8035F3D4_00001734:
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_0000160C
    mr r4, r27
    addi r3, r28, 0x54
    bl fn_8035FC10
    mr r4, r29
    addi r3, r28, 0x5c
    bl fn_8035FD40
    addi r3, r28, 0x48
    li r30, 0x0
    li r29, 0x0
    bl fn_8047059C
    mr r26, r3
    addi r3, r28, 0x48
    bl fn_80470580
    lwz r12, 0x20(r1)
    mr r4, r3
    mr r5, r26
    addi r3, r1, 0x20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8074B538@ha
    li r26, 0x0
    addi r31, r3, lbl_8074B538@l
lbl_fn_8035F3D4_000017AC:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8003E4A4
    addi r3, r1, 0x8
    addi r4, r31, 0x2c
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x72
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001858
    b lbl_fn_8035F3D4_00001848
lbl_fn_8035F3D4_00001800:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x79
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001858
    addi r3, r1, 0x8
    addi r4, r31, 0x7d
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001848
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
lbl_fn_8035F3D4_00001848:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001800
lbl_fn_8035F3D4_00001858:
    addi r3, r1, 0x8
    addi r4, r31, 0x32
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001904
    b lbl_fn_8035F3D4_000018F0
lbl_fn_8035F3D4_00001870:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x79
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8035F3D4_000018F0
    mr r4, r30
    addi r3, r28, 0x54
    bl fn_8035E514
    mr r27, r3
    mr r3, r28
    mr r4, r30
    bl fn_8036111C
    cmpwi r3, 0x0
    stw r3, 0x0(r27)
    beq lbl_fn_8035F3D4_000018EC
    addi r4, r1, 0x20
    bl fn_80360CDC
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8035F3D4_000018EC:
    addi r30, r30, 0x1
lbl_fn_8035F3D4_000018F0:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001870
    b lbl_fn_8035F3D4_00001D44
lbl_fn_8035F3D4_00001904:
    addi r3, r1, 0x8
    addi r4, r31, 0x3d
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_000019B0
    b lbl_fn_8035F3D4_0000199C
lbl_fn_8035F3D4_0000191C:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x79
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8035F3D4_0000199C
    mr r4, r30
    addi r3, r28, 0x54
    bl fn_8035E514
    mr r27, r3
    mr r3, r28
    mr r4, r30
    bl fn_80361414
    cmpwi r3, 0x0
    stw r3, 0x0(r27)
    beq lbl_fn_8035F3D4_00001998
    addi r4, r1, 0x20
    bl fn_80360CDC
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8035F3D4_00001998:
    addi r30, r30, 0x1
lbl_fn_8035F3D4_0000199C:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_0000191C
    b lbl_fn_8035F3D4_00001D44
lbl_fn_8035F3D4_000019B0:
    addi r3, r1, 0x8
    addi r4, r31, 0x47
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001A5C
    b lbl_fn_8035F3D4_00001A48
lbl_fn_8035F3D4_000019C8:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x79
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8035F3D4_00001A48
    mr r4, r30
    addi r3, r28, 0x54
    bl fn_8035E514
    mr r27, r3
    mr r3, r28
    mr r4, r30
    bl fn_80362278
    cmpwi r3, 0x0
    stw r3, 0x0(r27)
    beq lbl_fn_8035F3D4_00001A44
    addi r4, r1, 0x20
    bl fn_80360CDC
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8035F3D4_00001A44:
    addi r30, r30, 0x1
lbl_fn_8035F3D4_00001A48:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_000019C8
    b lbl_fn_8035F3D4_00001D44
lbl_fn_8035F3D4_00001A5C:
    addi r3, r1, 0x8
    addi r4, r31, 0x53
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001B08
    b lbl_fn_8035F3D4_00001AF4
lbl_fn_8035F3D4_00001A74:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x79
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8035F3D4_00001AF4
    mr r4, r30
    addi r3, r28, 0x54
    bl fn_8035E514
    mr r27, r3
    mr r3, r28
    mr r4, r30
    bl fn_803626A8
    cmpwi r3, 0x0
    stw r3, 0x0(r27)
    beq lbl_fn_8035F3D4_00001AF0
    addi r4, r1, 0x20
    bl fn_80360CDC
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8035F3D4_00001AF0:
    addi r30, r30, 0x1
lbl_fn_8035F3D4_00001AF4:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001A74
    b lbl_fn_8035F3D4_00001D44
lbl_fn_8035F3D4_00001B08:
    addi r3, r1, 0x8
    addi r4, r31, 0x5c
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001BB4
    b lbl_fn_8035F3D4_00001BA0
lbl_fn_8035F3D4_00001B20:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x79
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8035F3D4_00001BA0
    mr r4, r30
    addi r3, r28, 0x54
    bl fn_8035E514
    mr r27, r3
    mr r3, r28
    mr r4, r30
    bl fn_80362CC4
    cmpwi r3, 0x0
    stw r3, 0x0(r27)
    beq lbl_fn_8035F3D4_00001B9C
    addi r4, r1, 0x20
    bl fn_80360CDC
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8035F3D4_00001B9C:
    addi r30, r30, 0x1
lbl_fn_8035F3D4_00001BA0:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001B20
    b lbl_fn_8035F3D4_00001D44
lbl_fn_8035F3D4_00001BB4:
    addi r3, r1, 0x8
    addi r4, r31, 0x68
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001C7C
    b lbl_fn_8035F3D4_00001C68
lbl_fn_8035F3D4_00001BCC:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x79
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8035F3D4_00001C68
    mr r4, r29
    addi r3, r28, 0x5c
    addi r29, r29, 0x1
    bl fn_8035E720
    mr r27, r3
    addi r4, r1, 0x20
    bl fn_80362FA4
    bl fn_800F52F8
    bl fn_8035FBF8
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001C44
    lwz r4, 0x1ac(r28)
    mr r3, r27
    bl fn_80363108
lbl_fn_8035F3D4_00001C44:
    bl fn_8035FC00
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001C64
    bl fn_8035FC00
    addi r4, r27, 0xc
    bl fn_80049B74
    stw r3, 0x4(r27)
    b lbl_fn_8035F3D4_00001C68
lbl_fn_8035F3D4_00001C64:
    stw r26, 0x4(r27)
lbl_fn_8035F3D4_00001C68:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001BCC
    b lbl_fn_8035F3D4_00001D44
lbl_fn_8035F3D4_00001C7C:
    addi r3, r1, 0x8
    addi r4, r31, 0x85
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    addi r3, r28, 0x64
    li r25, 0x0
    bl fn_8035FE88
    b lbl_fn_8035F3D4_00001D34
lbl_fn_8035F3D4_00001CB0:
    addi r3, r1, 0x20
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8020A780
    addi r3, r1, 0x8
    addi r4, r31, 0x79
    bl fn_8000EB8C
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001D44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8035F3D4_00001D34
    addi r3, r1, 0x20
    bl fn_800422CC
    bl fn_80684600
    mr r27, r3
    mr r4, r25
    addi r3, r28, 0x64
    bl fn_8035FF34
    stw r27, 0x0(r3)
    addi r3, r1, 0x20
    bl fn_8005B3CC
    bl fn_80684600
    mr r27, r3
    mr r4, r25
    addi r3, r28, 0x64
    bl fn_8035FF34
    stw r27, 0x4(r3)
    addi r25, r25, 0x1
lbl_fn_8035F3D4_00001D34:
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_00001CB0
lbl_fn_8035F3D4_00001D44:
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8035F3D4_000017AC
    li r25, 0x0
    b lbl_fn_8035F3D4_00001DC4
lbl_fn_8035F3D4_00001D68:
    mr r4, r25
    addi r3, r28, 0x64
    bl fn_8035FF34
    mr r29, r3
    mr r3, r28
    lwz r4, 0x0(r29)
    bl fn_8035FF44
    lwz r4, 0x4(r29)
    mr r26, r3
    mr r3, r28
    bl fn_8035FF44
    cmpwi r26, 0x0
    mr r27, r3
    beq lbl_fn_8035F3D4_00001DAC
    mr r3, r26
    li r4, 0x1
    bl fn_8035FC08
lbl_fn_8035F3D4_00001DAC:
    cmpwi r27, 0x0
    beq lbl_fn_8035F3D4_00001DC0
    mr r3, r27
    li r4, 0x1
    bl fn_8035FC08
lbl_fn_8035F3D4_00001DC0:
    addi r25, r25, 0x1
lbl_fn_8035F3D4_00001DC4:
    addi r3, r28, 0x64
    bl fn_80089ACC
    cmplw r25, r3
    blt lbl_fn_8035F3D4_00001D68
    lmw r25, 0x664(r1)
    lwz r0, 0x684(r1)
    mtlr r0
    addi r1, r1, 0x680
    blr
}
