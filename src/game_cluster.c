#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80049AE4(void);
extern void fn_80049B08(void);
extern void fn_80049B2C(void);
extern void fn_80049B74(void);
extern void fn_80049CDC(void);
extern void fn_80049E3C(void);
extern void fn_800697D8(void);
extern void fn_80709AB0(void);
extern void fn_80709CC0(void);
extern void fn_8070A030(void);
extern void fn_8070ACB0(void);
extern void fn_8070AD80(void);
extern void fn_8070AD90(void);
extern void fn_80714C50(void);
extern void fn_80718470(void);
extern void fn_807184D0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_807340F0[];
extern u8 lbl_8073416C[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB8;
extern u32 lbl_80881164;
extern u32 lbl_80881168;
extern u32 lbl_8088116C;
extern u32 lbl_80881170;
extern u32 lbl_80881174;

/* Function declarations */
void fn_800C8BA4(void);
void fn_800C9010(void);
void fn_800C93D4(void);
void fn_800C97F8(void);
void fn_800C9C64(void);
void fn_800CA028(void);
void fn_800CA098(void);
void fn_800CA0AC(void);
void fn_800CA144(void);
void fn_800CA1D4(void);
void fn_800CA2FC(void);
void fn_800CA3D4(void);

asm void fn_800C8BA4(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stw r31, 0x23c(r1)
    stw r30, 0x238(r1)
    mr r30, r3
    stw r29, 0x234(r1)
    mr r29, r5
    stw r28, 0x230(r1)
    mr r28, r4
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800C8BA4_00000410
    mr r4, r29
    addi r3, r30, 0xc
    bl fn_80714C50
    lwz r0, 0xd4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800C8BA4_00000064
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
lbl_fn_800C8BA4_00000064:
    lwz r0, 0xd0(r30)
    mr r4, r31
    stw r0, 0x8c(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049E3C
    li r7, 0x0
    stw r7, 0x8(r1)
    ori r0, r7, 0x1
    addi r3, r30, 0xc
    stw r7, 0x20(r1)
    addi r4, r30, 0x4
    subi r5, r31, 0x1
    addi r6, r1, 0x8
    stw r7, 0x24(r1)
    lwz r8, 0x8c(r30)
    stw r8, 0x10(r1)
    stw r0, 0x8(r1)
    stw r7, 0xc(r1)
    bl fn_80718470
    cmpwi r3, 0x0
    stw r3, 0x90(r30)
    beq lbl_fn_800C8BA4_00000124
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_80049CDC
    lwz r4, lbl_8087EEB8
    lwz r0, 0x90(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800C8BA4_00000124
    cmpwi r0, 0x0
    blt lbl_fn_800C8BA4_000000FC
    cmpwi r0, 0xb
    bgt lbl_fn_800C8BA4_000000FC
    lis r4, lbl_807340F0@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_807340F0@l
    lwzx r5, r4, r0
    b lbl_fn_800C8BA4_00000100
lbl_fn_800C8BA4_000000FC:
    lwz r5, lbl_80881164
lbl_fn_800C8BA4_00000100:
    lis r4, lbl_8073416C@ha
    mr r6, r3
    addi r3, r1, 0x128
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x128
    bl fn_800697D8
lbl_fn_800C8BA4_00000124:
    lwz r3, 0xa8(r30)
    li r0, 0x0
    lfs f1, lbl_80881168
    cmpwi r3, 0x0
    stw r0, 0x9c(r30)
    stfs f1, 0xc4(r30)
    beq lbl_fn_800C8BA4_00000148
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C8BA4_00000148:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_0000015C
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C8BA4_0000015C:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_00000170
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C8BA4_00000170:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_00000184
    li r4, 0x0
    bl fn_8070AD90
lbl_fn_800C8BA4_00000184:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_0000019C
    lfs f1, lbl_80881168
    li r4, 0x1
    bl fn_8070AD90
lbl_fn_800C8BA4_0000019C:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_000001B4
    lfs f1, lbl_80881168
    li r4, 0x2
    bl fn_8070AD90
lbl_fn_800C8BA4_000001B4:
    lfs f3, lbl_8088116C
    lfs f0, lbl_80881170
    fcmpo cr0, f3, f0
    bge lbl_fn_800C8BA4_000001C8
    fmr f3, f0
lbl_fn_800C8BA4_000001C8:
    lwz r3, 0xa8(r30)
    frsp f6, f3
    stfs f3, 0xbc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_000001E4
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C8BA4_000001E4:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_000001F8
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C8BA4_000001F8:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_0000020C
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C8BA4_0000020C:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x104(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0xec(r30)
    stfs f5, 0xf0(r30)
    stfs f4, 0xf4(r30)
    stb r0, 0xf8(r30)
    stfs f3, 0xfc(r30)
    stfs f6, 0x100(r30)
    stfs f0, 0x108(r30)
    cror eq, lt, eq
    bne lbl_fn_800C8BA4_00000274
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C8BA4_00000264
    frsp f0, f6
    stfs f5, 0xec(r30)
    stfs f0, 0x104(r30)
    b lbl_fn_800C8BA4_0000026C
lbl_fn_800C8BA4_00000264:
    stfs f3, 0x104(r30)
    stfs f5, 0xec(r30)
lbl_fn_800C8BA4_0000026C:
    li r0, 0x0
    stb r0, 0xf8(r30)
lbl_fn_800C8BA4_00000274:
    lwz r3, 0xa8(r30)
    lfs f6, lbl_80881174
    cmpwi r3, 0x0
    stfs f6, 0xc0(r30)
    beq lbl_fn_800C8BA4_00000290
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C8BA4_00000290:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_000002A4
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C8BA4_000002A4:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_000002B8
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C8BA4_000002B8:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x124(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0x10c(r30)
    stfs f5, 0x110(r30)
    stfs f4, 0x114(r30)
    stb r0, 0x118(r30)
    stfs f3, 0x11c(r30)
    stfs f6, 0x120(r30)
    stfs f0, 0x128(r30)
    cror eq, lt, eq
    bne lbl_fn_800C8BA4_00000320
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C8BA4_00000310
    frsp f0, f6
    stfs f5, 0x10c(r30)
    stfs f0, 0x124(r30)
    b lbl_fn_800C8BA4_00000318
lbl_fn_800C8BA4_00000310:
    stfs f3, 0x124(r30)
    stfs f5, 0x10c(r30)
lbl_fn_800C8BA4_00000318:
    li r0, 0x0
    stb r0, 0x118(r30)
lbl_fn_800C8BA4_00000320:
    lfs f5, lbl_80881168
    li r3, 0x0
    lfs f3, 0x144(r30)
    li r0, 0x1
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stw r3, 0xc8(r30)
    stfs f5, 0xcc(r30)
    stfs f5, 0x12c(r30)
    stfs f5, 0x130(r30)
    stfs f4, 0x134(r30)
    stb r0, 0x138(r30)
    stfs f3, 0x13c(r30)
    stfs f5, 0x140(r30)
    stfs f0, 0x148(r30)
    cror eq, lt, eq
    bne lbl_fn_800C8BA4_00000390
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C8BA4_00000380
    stfs f5, 0x144(r30)
    stfs f5, 0x12c(r30)
    b lbl_fn_800C8BA4_00000388
lbl_fn_800C8BA4_00000380:
    stfs f3, 0x144(r30)
    stfs f5, 0x12c(r30)
lbl_fn_800C8BA4_00000388:
    li r0, 0x0
    stb r0, 0x138(r30)
lbl_fn_800C8BA4_00000390:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_000003A0
    bl fn_8070AD80
lbl_fn_800C8BA4_000003A0:
    lfs f0, lbl_80881168
    li r0, 0x0
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    stw r0, 0xd4(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
    stfs f0, 0xe4(r30)
    b lbl_fn_800C8BA4_000003CC
    stw r0, 0x6c(r30)
    b lbl_fn_800C8BA4_000003D4
lbl_fn_800C8BA4_000003CC:
    li r0, 0x0
    stw r0, 0x6c(r30)
lbl_fn_800C8BA4_000003D4:
    lwz r0, 0x9c(r30)
    li r3, 0x0
    stw r3, 0xd0(r30)
    mr r4, r31
    ori r0, r0, 0x2
    stw r31, 0x98(r30)
    stw r0, 0x9c(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_800C8BA4_0000044C
    lwz r0, 0x9c(r30)
    ori r0, r0, 0x8
    stw r0, 0x9c(r30)
    b lbl_fn_800C8BA4_0000044C
lbl_fn_800C8BA4_00000410:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_800C8BA4_0000044C
    lis r3, lbl_807340F0@ha
    lis r4, lbl_8073416C@ha
    addi r3, r3, lbl_807340F0@l
    mr r6, r28
    lwz r5, 0x8(r3)
    addi r3, r1, 0x28
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x28
    bl fn_800697D8
lbl_fn_800C8BA4_0000044C:
    lwz r0, 0x244(r1)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r29, 0x234(r1)
    lwz r28, 0x230(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_800C9010(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x134(r1)
    ori r0, r5, 0x1
    stw r31, 0x12c(r1)
    mr r31, r4
    stw r30, 0x128(r1)
    mr r30, r3
    stw r5, 0x8(r1)
    stw r5, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0xd0(r3)
    stw r3, 0x10(r1)
    lwz r3, lbl_8087EE90
    stw r0, 0x8(r1)
    stw r5, 0xc(r1)
    bl fn_80049E3C
    lwz r3, lbl_8087EE90
    mr r5, r31
    addi r4, r30, 0x4
    addi r6, r1, 0x8
    bl fn_80049AE4
    cmpwi r3, 0x0
    stw r3, 0x90(r30)
    beq lbl_fn_800C9010_0000053C
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_80049CDC
    lwz r4, lbl_8087EEB8
    lwz r0, 0x90(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800C9010_0000053C
    cmpwi r0, 0x0
    blt lbl_fn_800C9010_00000514
    cmpwi r0, 0xb
    bgt lbl_fn_800C9010_00000514
    lis r4, lbl_807340F0@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_807340F0@l
    lwzx r5, r4, r0
    b lbl_fn_800C9010_00000518
lbl_fn_800C9010_00000514:
    lwz r5, lbl_80881164
lbl_fn_800C9010_00000518:
    lis r4, lbl_8073416C@ha
    mr r6, r3
    addi r3, r1, 0x28
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x28
    bl fn_800697D8
lbl_fn_800C9010_0000053C:
    lwz r3, 0xa8(r30)
    li r0, 0x0
    lfs f1, lbl_80881168
    cmpwi r3, 0x0
    stw r0, 0x9c(r30)
    stfs f1, 0xc4(r30)
    beq lbl_fn_800C9010_00000560
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C9010_00000560:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_00000574
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C9010_00000574:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_00000588
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C9010_00000588:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_0000059C
    li r4, 0x0
    bl fn_8070AD90
lbl_fn_800C9010_0000059C:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_000005B4
    lfs f1, lbl_80881168
    li r4, 0x1
    bl fn_8070AD90
lbl_fn_800C9010_000005B4:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_000005CC
    lfs f1, lbl_80881168
    li r4, 0x2
    bl fn_8070AD90
lbl_fn_800C9010_000005CC:
    lfs f3, lbl_8088116C
    lfs f0, lbl_80881170
    fcmpo cr0, f3, f0
    bge lbl_fn_800C9010_000005E0
    fmr f3, f0
lbl_fn_800C9010_000005E0:
    lwz r3, 0xa8(r30)
    frsp f6, f3
    stfs f3, 0xbc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_000005FC
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C9010_000005FC:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_00000610
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C9010_00000610:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_00000624
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C9010_00000624:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x104(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0xec(r30)
    stfs f5, 0xf0(r30)
    stfs f4, 0xf4(r30)
    stb r0, 0xf8(r30)
    stfs f3, 0xfc(r30)
    stfs f6, 0x100(r30)
    stfs f0, 0x108(r30)
    cror eq, lt, eq
    bne lbl_fn_800C9010_0000068C
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C9010_0000067C
    frsp f0, f6
    stfs f5, 0xec(r30)
    stfs f0, 0x104(r30)
    b lbl_fn_800C9010_00000684
lbl_fn_800C9010_0000067C:
    stfs f3, 0x104(r30)
    stfs f5, 0xec(r30)
lbl_fn_800C9010_00000684:
    li r0, 0x0
    stb r0, 0xf8(r30)
lbl_fn_800C9010_0000068C:
    lwz r3, 0xa8(r30)
    lfs f6, lbl_80881174
    cmpwi r3, 0x0
    stfs f6, 0xc0(r30)
    beq lbl_fn_800C9010_000006A8
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C9010_000006A8:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_000006BC
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C9010_000006BC:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_000006D0
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C9010_000006D0:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x124(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0x10c(r30)
    stfs f5, 0x110(r30)
    stfs f4, 0x114(r30)
    stb r0, 0x118(r30)
    stfs f3, 0x11c(r30)
    stfs f6, 0x120(r30)
    stfs f0, 0x128(r30)
    cror eq, lt, eq
    bne lbl_fn_800C9010_00000738
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C9010_00000728
    frsp f0, f6
    stfs f5, 0x10c(r30)
    stfs f0, 0x124(r30)
    b lbl_fn_800C9010_00000730
lbl_fn_800C9010_00000728:
    stfs f3, 0x124(r30)
    stfs f5, 0x10c(r30)
lbl_fn_800C9010_00000730:
    li r0, 0x0
    stb r0, 0x118(r30)
lbl_fn_800C9010_00000738:
    lfs f5, lbl_80881168
    li r3, 0x0
    lfs f3, 0x144(r30)
    li r0, 0x1
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stw r3, 0xc8(r30)
    stfs f5, 0xcc(r30)
    stfs f5, 0x12c(r30)
    stfs f5, 0x130(r30)
    stfs f4, 0x134(r30)
    stb r0, 0x138(r30)
    stfs f3, 0x13c(r30)
    stfs f5, 0x140(r30)
    stfs f0, 0x148(r30)
    cror eq, lt, eq
    bne lbl_fn_800C9010_000007A8
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C9010_00000798
    stfs f5, 0x144(r30)
    stfs f5, 0x12c(r30)
    b lbl_fn_800C9010_000007A0
lbl_fn_800C9010_00000798:
    stfs f3, 0x144(r30)
    stfs f5, 0x12c(r30)
lbl_fn_800C9010_000007A0:
    li r0, 0x0
    stb r0, 0x138(r30)
lbl_fn_800C9010_000007A8:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_000007B8
    bl fn_8070AD80
lbl_fn_800C9010_000007B8:
    lfs f0, lbl_80881168
    li r0, 0x0
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    stw r0, 0xd4(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
    stfs f0, 0xe4(r30)
    b lbl_fn_800C9010_000007E4
    stw r0, 0x6c(r30)
    b lbl_fn_800C9010_000007EC
lbl_fn_800C9010_000007E4:
    li r0, 0x0
    stw r0, 0x6c(r30)
lbl_fn_800C9010_000007EC:
    li r0, 0x0
    stw r0, 0xd0(r30)
    mr r4, r31
    stw r31, 0x98(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_800C9010_00000818
    lwz r0, 0x9c(r30)
    ori r0, r0, 0x8
    stw r0, 0x9c(r30)
lbl_fn_800C9010_00000818:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_800C93D4(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stw r31, 0x23c(r1)
    stw r30, 0x238(r1)
    mr r30, r3
    stw r29, 0x234(r1)
    mr r29, r4
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800C93D4_00000BFC
    li r5, 0x0
    stw r5, 0x8(r1)
    ori r0, r5, 0x1
    lwz r3, lbl_8087EE90
    stw r5, 0x20(r1)
    mr r4, r31
    stw r5, 0x24(r1)
    lwz r6, 0xd0(r30)
    stw r6, 0x10(r1)
    stw r0, 0x8(r1)
    stw r5, 0xc(r1)
    bl fn_80049E3C
    lwz r3, lbl_8087EE90
    mr r5, r31
    addi r4, r30, 0x4
    addi r6, r1, 0x8
    bl fn_80049B08
    cmpwi r3, 0x0
    stw r3, 0x90(r30)
    beq lbl_fn_800C93D4_0000091C
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_80049CDC
    lwz r4, lbl_8087EEB8
    lwz r0, 0x90(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800C93D4_0000091C
    cmpwi r0, 0x0
    blt lbl_fn_800C93D4_000008F4
    cmpwi r0, 0xb
    bgt lbl_fn_800C93D4_000008F4
    lis r4, lbl_807340F0@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_807340F0@l
    lwzx r5, r4, r0
    b lbl_fn_800C93D4_000008F8
lbl_fn_800C93D4_000008F4:
    lwz r5, lbl_80881164
lbl_fn_800C93D4_000008F8:
    lis r4, lbl_8073416C@ha
    mr r6, r3
    addi r3, r1, 0x128
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x128
    bl fn_800697D8
lbl_fn_800C93D4_0000091C:
    lwz r3, 0xa8(r30)
    li r0, 0x0
    lfs f1, lbl_80881168
    cmpwi r3, 0x0
    stw r0, 0x9c(r30)
    stfs f1, 0xc4(r30)
    beq lbl_fn_800C93D4_00000940
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C93D4_00000940:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_00000954
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C93D4_00000954:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_00000968
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C93D4_00000968:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_0000097C
    li r4, 0x0
    bl fn_8070AD90
lbl_fn_800C93D4_0000097C:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_00000994
    lfs f1, lbl_80881168
    li r4, 0x1
    bl fn_8070AD90
lbl_fn_800C93D4_00000994:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_000009AC
    lfs f1, lbl_80881168
    li r4, 0x2
    bl fn_8070AD90
lbl_fn_800C93D4_000009AC:
    lfs f3, lbl_8088116C
    lfs f0, lbl_80881170
    fcmpo cr0, f3, f0
    bge lbl_fn_800C93D4_000009C0
    fmr f3, f0
lbl_fn_800C93D4_000009C0:
    lwz r3, 0xa8(r30)
    frsp f6, f3
    stfs f3, 0xbc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_000009DC
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C93D4_000009DC:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_000009F0
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C93D4_000009F0:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_00000A04
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C93D4_00000A04:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x104(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0xec(r30)
    stfs f5, 0xf0(r30)
    stfs f4, 0xf4(r30)
    stb r0, 0xf8(r30)
    stfs f3, 0xfc(r30)
    stfs f6, 0x100(r30)
    stfs f0, 0x108(r30)
    cror eq, lt, eq
    bne lbl_fn_800C93D4_00000A6C
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C93D4_00000A5C
    frsp f0, f6
    stfs f5, 0xec(r30)
    stfs f0, 0x104(r30)
    b lbl_fn_800C93D4_00000A64
lbl_fn_800C93D4_00000A5C:
    stfs f3, 0x104(r30)
    stfs f5, 0xec(r30)
lbl_fn_800C93D4_00000A64:
    li r0, 0x0
    stb r0, 0xf8(r30)
lbl_fn_800C93D4_00000A6C:
    lwz r3, 0xa8(r30)
    lfs f6, lbl_80881174
    cmpwi r3, 0x0
    stfs f6, 0xc0(r30)
    beq lbl_fn_800C93D4_00000A88
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C93D4_00000A88:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_00000A9C
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C93D4_00000A9C:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_00000AB0
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C93D4_00000AB0:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x124(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0x10c(r30)
    stfs f5, 0x110(r30)
    stfs f4, 0x114(r30)
    stb r0, 0x118(r30)
    stfs f3, 0x11c(r30)
    stfs f6, 0x120(r30)
    stfs f0, 0x128(r30)
    cror eq, lt, eq
    bne lbl_fn_800C93D4_00000B18
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C93D4_00000B08
    frsp f0, f6
    stfs f5, 0x10c(r30)
    stfs f0, 0x124(r30)
    b lbl_fn_800C93D4_00000B10
lbl_fn_800C93D4_00000B08:
    stfs f3, 0x124(r30)
    stfs f5, 0x10c(r30)
lbl_fn_800C93D4_00000B10:
    li r0, 0x0
    stb r0, 0x118(r30)
lbl_fn_800C93D4_00000B18:
    lfs f5, lbl_80881168
    li r3, 0x0
    lfs f3, 0x144(r30)
    li r0, 0x1
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stw r3, 0xc8(r30)
    stfs f5, 0xcc(r30)
    stfs f5, 0x12c(r30)
    stfs f5, 0x130(r30)
    stfs f4, 0x134(r30)
    stb r0, 0x138(r30)
    stfs f3, 0x13c(r30)
    stfs f5, 0x140(r30)
    stfs f0, 0x148(r30)
    cror eq, lt, eq
    bne lbl_fn_800C93D4_00000B88
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C93D4_00000B78
    stfs f5, 0x144(r30)
    stfs f5, 0x12c(r30)
    b lbl_fn_800C93D4_00000B80
lbl_fn_800C93D4_00000B78:
    stfs f3, 0x144(r30)
    stfs f5, 0x12c(r30)
lbl_fn_800C93D4_00000B80:
    li r0, 0x0
    stb r0, 0x138(r30)
lbl_fn_800C93D4_00000B88:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_00000B98
    bl fn_8070AD80
lbl_fn_800C93D4_00000B98:
    lfs f0, lbl_80881168
    li r0, 0x0
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    stw r0, 0xd4(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
    stfs f0, 0xe4(r30)
    b lbl_fn_800C93D4_00000BC4
    stw r0, 0x6c(r30)
    b lbl_fn_800C93D4_00000BCC
lbl_fn_800C93D4_00000BC4:
    li r0, 0x0
    stw r0, 0x6c(r30)
lbl_fn_800C93D4_00000BCC:
    li r0, 0x0
    stw r0, 0xd0(r30)
    mr r4, r31
    stw r31, 0x98(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_800C93D4_00000C38
    lwz r0, 0x9c(r30)
    ori r0, r0, 0x8
    stw r0, 0x9c(r30)
    b lbl_fn_800C93D4_00000C38
lbl_fn_800C93D4_00000BFC:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_800C93D4_00000C38
    lis r3, lbl_807340F0@ha
    lis r4, lbl_8073416C@ha
    addi r3, r3, lbl_807340F0@l
    mr r6, r29
    lwz r5, 0x8(r3)
    addi r3, r1, 0x28
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x28
    bl fn_800697D8
lbl_fn_800C93D4_00000C38:
    lwz r0, 0x244(r1)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r29, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_800C97F8(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stw r31, 0x23c(r1)
    stw r30, 0x238(r1)
    mr r30, r3
    stw r29, 0x234(r1)
    mr r29, r5
    stw r28, 0x230(r1)
    mr r28, r4
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800C97F8_00001064
    mr r4, r29
    addi r3, r30, 0xc
    bl fn_80714C50
    lwz r0, 0xd4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800C97F8_00000CB8
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
lbl_fn_800C97F8_00000CB8:
    lwz r0, 0xd0(r30)
    mr r4, r31
    stw r0, 0x8c(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049E3C
    li r7, 0x0
    stw r7, 0x8(r1)
    ori r0, r7, 0x1
    addi r3, r30, 0xc
    stw r7, 0x20(r1)
    addi r4, r30, 0x4
    subi r5, r31, 0x1
    addi r6, r1, 0x8
    stw r7, 0x24(r1)
    lwz r8, 0x8c(r30)
    stw r8, 0x10(r1)
    stw r0, 0x8(r1)
    stw r7, 0xc(r1)
    bl fn_807184D0
    cmpwi r3, 0x0
    stw r3, 0x90(r30)
    beq lbl_fn_800C97F8_00000D78
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_80049CDC
    lwz r4, lbl_8087EEB8
    lwz r0, 0x90(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800C97F8_00000D78
    cmpwi r0, 0x0
    blt lbl_fn_800C97F8_00000D50
    cmpwi r0, 0xb
    bgt lbl_fn_800C97F8_00000D50
    lis r4, lbl_807340F0@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_807340F0@l
    lwzx r5, r4, r0
    b lbl_fn_800C97F8_00000D54
lbl_fn_800C97F8_00000D50:
    lwz r5, lbl_80881164
lbl_fn_800C97F8_00000D54:
    lis r4, lbl_8073416C@ha
    mr r6, r3
    addi r3, r1, 0x128
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x128
    bl fn_800697D8
lbl_fn_800C97F8_00000D78:
    lwz r3, 0xa8(r30)
    li r0, 0x0
    lfs f1, lbl_80881168
    cmpwi r3, 0x0
    stw r0, 0x9c(r30)
    stfs f1, 0xc4(r30)
    beq lbl_fn_800C97F8_00000D9C
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C97F8_00000D9C:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000DB0
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C97F8_00000DB0:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000DC4
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C97F8_00000DC4:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000DD8
    li r4, 0x0
    bl fn_8070AD90
lbl_fn_800C97F8_00000DD8:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000DF0
    lfs f1, lbl_80881168
    li r4, 0x1
    bl fn_8070AD90
lbl_fn_800C97F8_00000DF0:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000E08
    lfs f1, lbl_80881168
    li r4, 0x2
    bl fn_8070AD90
lbl_fn_800C97F8_00000E08:
    lfs f3, lbl_8088116C
    lfs f0, lbl_80881170
    fcmpo cr0, f3, f0
    bge lbl_fn_800C97F8_00000E1C
    fmr f3, f0
lbl_fn_800C97F8_00000E1C:
    lwz r3, 0xa8(r30)
    frsp f6, f3
    stfs f3, 0xbc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000E38
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C97F8_00000E38:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000E4C
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C97F8_00000E4C:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000E60
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C97F8_00000E60:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x104(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0xec(r30)
    stfs f5, 0xf0(r30)
    stfs f4, 0xf4(r30)
    stb r0, 0xf8(r30)
    stfs f3, 0xfc(r30)
    stfs f6, 0x100(r30)
    stfs f0, 0x108(r30)
    cror eq, lt, eq
    bne lbl_fn_800C97F8_00000EC8
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C97F8_00000EB8
    frsp f0, f6
    stfs f5, 0xec(r30)
    stfs f0, 0x104(r30)
    b lbl_fn_800C97F8_00000EC0
lbl_fn_800C97F8_00000EB8:
    stfs f3, 0x104(r30)
    stfs f5, 0xec(r30)
lbl_fn_800C97F8_00000EC0:
    li r0, 0x0
    stb r0, 0xf8(r30)
lbl_fn_800C97F8_00000EC8:
    lwz r3, 0xa8(r30)
    lfs f6, lbl_80881174
    cmpwi r3, 0x0
    stfs f6, 0xc0(r30)
    beq lbl_fn_800C97F8_00000EE4
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C97F8_00000EE4:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000EF8
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C97F8_00000EF8:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000F0C
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C97F8_00000F0C:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x124(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0x10c(r30)
    stfs f5, 0x110(r30)
    stfs f4, 0x114(r30)
    stb r0, 0x118(r30)
    stfs f3, 0x11c(r30)
    stfs f6, 0x120(r30)
    stfs f0, 0x128(r30)
    cror eq, lt, eq
    bne lbl_fn_800C97F8_00000F74
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C97F8_00000F64
    frsp f0, f6
    stfs f5, 0x10c(r30)
    stfs f0, 0x124(r30)
    b lbl_fn_800C97F8_00000F6C
lbl_fn_800C97F8_00000F64:
    stfs f3, 0x124(r30)
    stfs f5, 0x10c(r30)
lbl_fn_800C97F8_00000F6C:
    li r0, 0x0
    stb r0, 0x118(r30)
lbl_fn_800C97F8_00000F74:
    lfs f5, lbl_80881168
    li r3, 0x0
    lfs f3, 0x144(r30)
    li r0, 0x1
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stw r3, 0xc8(r30)
    stfs f5, 0xcc(r30)
    stfs f5, 0x12c(r30)
    stfs f5, 0x130(r30)
    stfs f4, 0x134(r30)
    stb r0, 0x138(r30)
    stfs f3, 0x13c(r30)
    stfs f5, 0x140(r30)
    stfs f0, 0x148(r30)
    cror eq, lt, eq
    bne lbl_fn_800C97F8_00000FE4
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C97F8_00000FD4
    stfs f5, 0x144(r30)
    stfs f5, 0x12c(r30)
    b lbl_fn_800C97F8_00000FDC
lbl_fn_800C97F8_00000FD4:
    stfs f3, 0x144(r30)
    stfs f5, 0x12c(r30)
lbl_fn_800C97F8_00000FDC:
    li r0, 0x0
    stb r0, 0x138(r30)
lbl_fn_800C97F8_00000FE4:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_00000FF4
    bl fn_8070AD80
lbl_fn_800C97F8_00000FF4:
    lfs f0, lbl_80881168
    li r0, 0x0
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    stw r0, 0xd4(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
    stfs f0, 0xe4(r30)
    b lbl_fn_800C97F8_00001020
    stw r0, 0x6c(r30)
    b lbl_fn_800C97F8_00001028
lbl_fn_800C97F8_00001020:
    li r0, 0x0
    stw r0, 0x6c(r30)
lbl_fn_800C97F8_00001028:
    lwz r0, 0x9c(r30)
    li r3, 0x0
    stw r3, 0xd0(r30)
    mr r4, r31
    ori r0, r0, 0x2
    stw r31, 0x98(r30)
    stw r0, 0x9c(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_800C97F8_000010A0
    lwz r0, 0x9c(r30)
    ori r0, r0, 0x8
    stw r0, 0x9c(r30)
    b lbl_fn_800C97F8_000010A0
lbl_fn_800C97F8_00001064:
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_800C97F8_000010A0
    lis r3, lbl_807340F0@ha
    lis r4, lbl_8073416C@ha
    addi r3, r3, lbl_807340F0@l
    mr r6, r28
    lwz r5, 0x8(r3)
    addi r3, r1, 0x28
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x28
    bl fn_800697D8
lbl_fn_800C97F8_000010A0:
    lwz r0, 0x244(r1)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r29, 0x234(r1)
    lwz r28, 0x230(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_800C9C64(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x134(r1)
    ori r0, r5, 0x1
    stw r31, 0x12c(r1)
    mr r31, r4
    stw r30, 0x128(r1)
    mr r30, r3
    stw r5, 0x8(r1)
    stw r5, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0xd0(r3)
    stw r3, 0x10(r1)
    lwz r3, lbl_8087EE90
    stw r0, 0x8(r1)
    stw r5, 0xc(r1)
    bl fn_80049E3C
    lwz r3, lbl_8087EE90
    mr r5, r31
    addi r4, r30, 0x4
    addi r6, r1, 0x8
    bl fn_80049B08
    cmpwi r3, 0x0
    stw r3, 0x90(r30)
    beq lbl_fn_800C9C64_00001190
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_80049CDC
    lwz r4, lbl_8087EEB8
    lwz r0, 0x90(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800C9C64_00001190
    cmpwi r0, 0x0
    blt lbl_fn_800C9C64_00001168
    cmpwi r0, 0xb
    bgt lbl_fn_800C9C64_00001168
    lis r4, lbl_807340F0@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_807340F0@l
    lwzx r5, r4, r0
    b lbl_fn_800C9C64_0000116C
lbl_fn_800C9C64_00001168:
    lwz r5, lbl_80881164
lbl_fn_800C9C64_0000116C:
    lis r4, lbl_8073416C@ha
    mr r6, r3
    addi r3, r1, 0x28
    addi r4, r4, lbl_8073416C@l
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x28
    bl fn_800697D8
lbl_fn_800C9C64_00001190:
    lwz r3, 0xa8(r30)
    li r0, 0x0
    lfs f1, lbl_80881168
    cmpwi r3, 0x0
    stw r0, 0x9c(r30)
    stfs f1, 0xc4(r30)
    beq lbl_fn_800C9C64_000011B4
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C9C64_000011B4:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_000011C8
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C9C64_000011C8:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_000011DC
    lfs f0, 0x14(r3)
    fmuls f1, f1, f0
lbl_fn_800C9C64_000011DC:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_000011F0
    li r4, 0x0
    bl fn_8070AD90
lbl_fn_800C9C64_000011F0:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_00001208
    lfs f1, lbl_80881168
    li r4, 0x1
    bl fn_8070AD90
lbl_fn_800C9C64_00001208:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_00001220
    lfs f1, lbl_80881168
    li r4, 0x2
    bl fn_8070AD90
lbl_fn_800C9C64_00001220:
    lfs f3, lbl_8088116C
    lfs f0, lbl_80881170
    fcmpo cr0, f3, f0
    bge lbl_fn_800C9C64_00001234
    fmr f3, f0
lbl_fn_800C9C64_00001234:
    lwz r3, 0xa8(r30)
    frsp f6, f3
    stfs f3, 0xbc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_00001250
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C9C64_00001250:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_00001264
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C9C64_00001264:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_00001278
    lfs f0, 0xc(r3)
    fmuls f6, f6, f0
lbl_fn_800C9C64_00001278:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x104(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0xec(r30)
    stfs f5, 0xf0(r30)
    stfs f4, 0xf4(r30)
    stb r0, 0xf8(r30)
    stfs f3, 0xfc(r30)
    stfs f6, 0x100(r30)
    stfs f0, 0x108(r30)
    cror eq, lt, eq
    bne lbl_fn_800C9C64_000012E0
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C9C64_000012D0
    frsp f0, f6
    stfs f5, 0xec(r30)
    stfs f0, 0x104(r30)
    b lbl_fn_800C9C64_000012D8
lbl_fn_800C9C64_000012D0:
    stfs f3, 0x104(r30)
    stfs f5, 0xec(r30)
lbl_fn_800C9C64_000012D8:
    li r0, 0x0
    stb r0, 0xf8(r30)
lbl_fn_800C9C64_000012E0:
    lwz r3, 0xa8(r30)
    lfs f6, lbl_80881174
    cmpwi r3, 0x0
    stfs f6, 0xc0(r30)
    beq lbl_fn_800C9C64_000012FC
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C9C64_000012FC:
    lwz r3, 0xac(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_00001310
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C9C64_00001310:
    lwz r3, 0xb0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_00001324
    lfs f0, 0x10(r3)
    fsubs f6, f6, f0
lbl_fn_800C9C64_00001324:
    lfs f5, lbl_80881168
    li r0, 0x1
    lfs f3, 0x124(r30)
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stfs f5, 0x10c(r30)
    stfs f5, 0x110(r30)
    stfs f4, 0x114(r30)
    stb r0, 0x118(r30)
    stfs f3, 0x11c(r30)
    stfs f6, 0x120(r30)
    stfs f0, 0x128(r30)
    cror eq, lt, eq
    bne lbl_fn_800C9C64_0000138C
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C9C64_0000137C
    frsp f0, f6
    stfs f5, 0x10c(r30)
    stfs f0, 0x124(r30)
    b lbl_fn_800C9C64_00001384
lbl_fn_800C9C64_0000137C:
    stfs f3, 0x124(r30)
    stfs f5, 0x10c(r30)
lbl_fn_800C9C64_00001384:
    li r0, 0x0
    stb r0, 0x118(r30)
lbl_fn_800C9C64_0000138C:
    lfs f5, lbl_80881168
    li r3, 0x0
    lfs f3, 0x144(r30)
    li r0, 0x1
    fcmpo cr0, f5, f5
    lfs f4, lbl_8088116C
    fsubs f0, f3, f3
    stw r3, 0xc8(r30)
    stfs f5, 0xcc(r30)
    stfs f5, 0x12c(r30)
    stfs f5, 0x130(r30)
    stfs f4, 0x134(r30)
    stb r0, 0x138(r30)
    stfs f3, 0x13c(r30)
    stfs f5, 0x140(r30)
    stfs f0, 0x148(r30)
    cror eq, lt, eq
    bne lbl_fn_800C9C64_000013FC
    fcmpo cr0, f4, f5
    cror eq, gt, eq
    bne lbl_fn_800C9C64_000013EC
    stfs f5, 0x144(r30)
    stfs f5, 0x12c(r30)
    b lbl_fn_800C9C64_000013F4
lbl_fn_800C9C64_000013EC:
    stfs f3, 0x144(r30)
    stfs f5, 0x12c(r30)
lbl_fn_800C9C64_000013F4:
    li r0, 0x0
    stb r0, 0x138(r30)
lbl_fn_800C9C64_000013FC:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_0000140C
    bl fn_8070AD80
lbl_fn_800C9C64_0000140C:
    lfs f0, lbl_80881168
    li r0, 0x0
    psq_l f1, 0x70(r30), 0, 0
    lfs f2, 0x78(r30)
    stw r0, 0xd4(r30)
    psq_st f1, 0xd8(r30), 0, 0
    stfs f2, 0xe0(r30)
    stfs f0, 0xe4(r30)
    b lbl_fn_800C9C64_00001438
    stw r0, 0x6c(r30)
    b lbl_fn_800C9C64_00001440
lbl_fn_800C9C64_00001438:
    li r0, 0x0
    stw r0, 0x6c(r30)
lbl_fn_800C9C64_00001440:
    li r0, 0x0
    stw r0, 0xd0(r30)
    mr r4, r31
    stw r31, 0x98(r30)
    lwz r3, lbl_8087EE90
    bl fn_80049B2C
    cmpwi r3, 0x0
    beq lbl_fn_800C9C64_0000146C
    lwz r0, 0x9c(r30)
    ori r0, r0, 0x8
    stw r0, 0x9c(r30)
lbl_fn_800C9C64_0000146C:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_800CA028(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    li r30, 0x0
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CA028_000014D8
    li r31, 0x0
    beq lbl_fn_800CA028_000014CC
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800CA028_000014CC
    li r31, 0x1
lbl_fn_800CA028_000014CC:
    cmpwi r31, 0x0
    bne lbl_fn_800CA028_000014D8
    li r30, 0x1
lbl_fn_800CA028_000014D8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CA098(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_80709AB0
    blr
}

asm void fn_800CA0AC(void)
{
    nofralloc
    lwz r5, 0xa8(r3)
    frsp f0, f1
    stfs f1, 0xb8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA0AC_00001538
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800CA0AC_00001530
    lfs f1, 0x8(r5)
    b lbl_fn_800CA0AC_00001534
lbl_fn_800CA0AC_00001530:
    lfs f1, lbl_80881168
lbl_fn_800CA0AC_00001534:
    fmuls f0, f0, f1
lbl_fn_800CA0AC_00001538:
    lwz r5, 0xac(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA0AC_00001560
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800CA0AC_00001558
    lfs f1, 0x8(r5)
    b lbl_fn_800CA0AC_0000155C
lbl_fn_800CA0AC_00001558:
    lfs f1, lbl_80881168
lbl_fn_800CA0AC_0000155C:
    fmuls f0, f0, f1
lbl_fn_800CA0AC_00001560:
    lwz r5, 0xb0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA0AC_00001588
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800CA0AC_00001580
    lfs f1, 0x8(r5)
    b lbl_fn_800CA0AC_00001584
lbl_fn_800CA0AC_00001580:
    lfs f1, lbl_80881168
lbl_fn_800CA0AC_00001584:
    fmuls f0, f0, f1
lbl_fn_800CA0AC_00001588:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    fmr f1, f0
    b fn_8070ACB0
    blr
}

asm void fn_800CA144(void)
{
    nofralloc
    lwz r5, 0xa8(r3)
    lfs f1, 0xb8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA144_000015CC
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800CA144_000015C4
    lfs f0, 0x8(r5)
    b lbl_fn_800CA144_000015C8
lbl_fn_800CA144_000015C4:
    lfs f0, lbl_80881168
lbl_fn_800CA144_000015C8:
    fmuls f1, f1, f0
lbl_fn_800CA144_000015CC:
    lwz r5, 0xac(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA144_000015F4
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800CA144_000015EC
    lfs f0, 0x8(r5)
    b lbl_fn_800CA144_000015F0
lbl_fn_800CA144_000015EC:
    lfs f0, lbl_80881168
lbl_fn_800CA144_000015F0:
    fmuls f1, f1, f0
lbl_fn_800CA144_000015F4:
    lwz r5, 0xb0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA144_0000161C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800CA144_00001614
    lfs f0, 0x8(r5)
    b lbl_fn_800CA144_00001618
lbl_fn_800CA144_00001614:
    lfs f0, lbl_80881168
lbl_fn_800CA144_00001618:
    fmuls f1, f1, f0
lbl_fn_800CA144_0000161C:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_8070ACB0
    blr
}

asm void fn_800CA1D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_800CA1D4_00001670
    lwz r0, 0xa0(r3)
    or r0, r0, r5
    stw r0, 0xa0(r3)
    b lbl_fn_800CA1D4_0000167C
lbl_fn_800CA1D4_00001670:
    lwz r0, 0xa0(r3)
    andc r0, r0, r5
    stw r0, 0xa0(r3)
lbl_fn_800CA1D4_0000167C:
    cmpwi r4, 0x0
    beq lbl_fn_800CA1D4_000016DC
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800CA1D4_000016DC
    lwz r3, 0x4(r3)
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_800CA1D4_000016B0
    bl fn_8070A030
    cmpwi r3, 0x0
    beq lbl_fn_800CA1D4_000016B0
    li r31, 0x1
lbl_fn_800CA1D4_000016B0:
    cmpwi r31, 0x0
    bne lbl_fn_800CA1D4_000016DC
    lwz r3, 0x4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800CA1D4_00001738
    neg r0, r29
    mr r5, r30
    or r0, r0, r29
    srwi r4, r0, 31
    bl fn_80709CC0
    b lbl_fn_800CA1D4_00001738
lbl_fn_800CA1D4_000016DC:
    cmpwi r29, 0x0
    bne lbl_fn_800CA1D4_00001738
    lwz r0, 0xa0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800CA1D4_00001738
    lwz r3, 0x4(r28)
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_800CA1D4_00001710
    bl fn_8070A030
    cmpwi r3, 0x0
    beq lbl_fn_800CA1D4_00001710
    li r31, 0x1
lbl_fn_800CA1D4_00001710:
    cmpwi r31, 0x0
    beq lbl_fn_800CA1D4_00001738
    lwz r3, 0x4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800CA1D4_00001738
    neg r0, r29
    mr r5, r30
    or r0, r0, r29
    srwi r4, r0, 31
    bl fn_80709CC0
lbl_fn_800CA1D4_00001738:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800CA2FC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f3
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    fmr f30, f2
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xa8(r3)
    stfs f1, 0xc4(r3)
    frsp f1, f1
    cmpwi r4, 0x0
    beq lbl_fn_800CA2FC_000017A0
    lfs f0, 0x14(r4)
    fmuls f1, f1, f0
lbl_fn_800CA2FC_000017A0:
    lwz r4, 0xac(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800CA2FC_000017B4
    lfs f0, 0x14(r4)
    fmuls f1, f1, f0
lbl_fn_800CA2FC_000017B4:
    lwz r4, 0xb0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800CA2FC_000017C8
    lfs f0, 0x14(r4)
    fmuls f1, f1, f0
lbl_fn_800CA2FC_000017C8:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CA2FC_000017DC
    li r4, 0x0
    bl fn_8070AD90
lbl_fn_800CA2FC_000017DC:
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800CA2FC_000017F4
    fmr f1, f30
    li r4, 0x1
    bl fn_8070AD90
lbl_fn_800CA2FC_000017F4:
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800CA2FC_0000180C
    fmr f1, f31
    li r4, 0x2
    bl fn_8070AD90
lbl_fn_800CA2FC_0000180C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800CA3D4(void)
{
    nofralloc
    lwz r4, 0xa8(r3)
    lfs f1, 0xc4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800CA3D4_00001848
    lfs f0, 0x14(r4)
    fmuls f1, f1, f0
lbl_fn_800CA3D4_00001848:
    lwz r4, 0xac(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800CA3D4_0000185C
    lfs f0, 0x14(r4)
    fmuls f1, f1, f0
lbl_fn_800CA3D4_0000185C:
    lwz r4, 0xb0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800CA3D4_00001870
    lfs f0, 0x14(r4)
    fmuls f1, f1, f0
lbl_fn_800CA3D4_00001870:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    li r4, 0x0
    b fn_8070AD90
    blr
}
