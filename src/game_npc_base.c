#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80017064(void);
extern void fn_80057A68(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_80097C08(void);
extern void fn_800C61C0(void);
extern void fn_800C622C(void);
extern void fn_800C7CA8(void);
extern void fn_800DCA6C(void);
extern void fn_800F52F8(void);
extern void fn_800F7F60(void);
extern void fn_800F7F80(void);
extern void fn_800F7F90(void);
extern void fn_800F7FD8(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80116BAC(void);
extern void fn_8011D1FC(void);
extern void fn_8011D21C(void);
extern void fn_80121F00(void);
extern void fn_801231D0(void);
extern void fn_80126214(void);
extern void fn_8013537C(void);
extern void fn_801370B8(void);
extern void fn_80138E1C(void);
extern void fn_8013A4E8(void);
extern void fn_8013CB68(void);
extern void fn_801698E4(void);
extern void fn_8016BBCC(void);
extern void fn_8016E970(void);
extern void fn_80171F3C(void);
extern void fn_801750FC(void);
extern void fn_80178018(void);
extern void fn_80178078(void);
extern void fn_80178208(void);
extern void fn_8017B3C0(void);
extern void fn_8017B434(void);
extern void fn_8017C974(void);
extern void fn_801A1BE4(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_8068AEA4(void);
extern void fn_806952C4(void);
extern void fn_80695AD0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_8077A780[];
extern u8 lbl_8077A798[];
extern u8 lbl_8077A7A4[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087F048;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881984;
extern u32 lbl_80881994;
extern u32 lbl_808819A0;
extern u32 lbl_808819A4;
extern u32 lbl_808819A8;
extern u32 lbl_808819AC;
extern u32 lbl_808819B0;
extern u32 lbl_808819B4;
extern u32 lbl_808819B8;
extern u32 lbl_808819BC;
extern u32 lbl_808819C0;
extern u32 lbl_808819C4;
extern u32 lbl_808819C8;
extern u32 lbl_808819CC;

/* Function declarations */
void fn_80139550(void);
void fn_80139560(void);
void fn_80139E90(void);
void fn_80139E9C(void);
void fn_80139EB0(void);
void fn_80139EBC(void);
void fn_80139ED0(void);
void fn_80139EDC(void);
void fn_80139EE8(void);
void fn_80139EF4(void);
void fn_80139EFC(void);
void fn_80139F04(void);
void fn_80139F24(void);
void fn_80139F2C(void);
void fn_80139F3C(void);
void fn_80139F4C(void);
void fn_80139F58(void);
void fn_80139F60(void);
void fn_8013A13C(void);
void fn_8013A144(void);
void fn_8013A150(void);
void fn_8013A158(void);
void fn_8013A16C(void);
void fn_8013A184(void);
void fn_8013A18C(void);
void fn_8013A194(void);
void fn_8013A19C(void);
void fn_8013A1A8(void);
void fn_8013A214(void);
void fn_8013A21C(void);
void fn_8013A248(void);
void fn_8013A258(void);

asm void fn_80139550(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    lfs f1, 0x234(r3)
    blr
}

asm void fn_80139560(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    addi r3, r1, 0x6c
    stw r30, 0x98(r1)
    addi r4, r31, 0x534
    stw r29, 0x94(r1)
    bl fn_8001047C
    lfs f1, lbl_8088196C
    lfs f0, lbl_80881964
    stfs f1, 0x14(r1)
    stfs f0, 0x10(r1)
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 20
    bne lbl_fn_80139560_00000924
    lwz r3, 0x1394(r31)
    bl fn_8013537C
    lwz r3, 0x55c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000084
    cmpwi r3, 0x5
    beq lbl_fn_80139560_00000084
    cmpwi r3, 0x9
    beq lbl_fn_80139560_00000084
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_80139560_00000094
lbl_fn_80139560_00000084:
    addi r3, r1, 0x6c
    addi r4, r31, 0x534
    bl fn_8000D124
    b lbl_fn_80139560_00000700
lbl_fn_80139560_00000094:
    cmpwi r3, 0x1
    bne lbl_fn_80139560_000002D4
    mr r3, r31
    bl fn_8017C974
    cmpwi r3, 0x0
    bne lbl_fn_80139560_000000C8
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_80139560_000000C8
    mr r3, r31
    bl fn_80139E90
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000000D8
lbl_fn_80139560_000000C8:
    addi r3, r1, 0x6c
    addi r4, r31, 0x534
    bl fn_8000D124
    b lbl_fn_80139560_00000700
lbl_fn_80139560_000000D8:
    mr r3, r31
    bl fn_80178078
    stfs f1, 0x14(r1)
    mr r4, r31
    addi r3, r1, 0x54
    bl fn_80178018
    addi r3, r1, 0x6c
    addi r4, r1, 0x54
    bl fn_8000D124
    lfs f0, 0x14(r1)
    lfs f2, lbl_808819A0
    fcmpo cr0, f0, f2
    blt lbl_fn_80139560_00000124
    fsubs f0, f0, f2
    lfs f1, lbl_808819A4
    fdivs f0, f0, f1
    fmuls f0, f0, f0
    fmadds f0, f1, f0, f2
    stfs f0, 0x14(r1)
lbl_fn_80139560_00000124:
    mr r3, r31
    bl fn_80139E9C
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000001BC
    lfs f0, lbl_80881964
    stfs f0, 0x10(r1)
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x1f
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000160
    mr r3, r31
    bl fn_801750FC
    b lbl_fn_80139560_00000700
lbl_fn_80139560_00000160:
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x20
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000700
    lis r5, lbl_80737A9C@ha
    li r3, 0x30
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80139560_000001B0
    mr r4, r31
    bl fn_801A1BE4
    mr r4, r3
lbl_fn_80139560_000001B0:
    mr r3, r31
    bl fn_80178208
    b lbl_fn_80139560_00000924
lbl_fn_80139560_000001BC:
    mr r3, r31
    bl fn_80139EB0
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000001D8
    lfs f0, lbl_80881964
    stfs f0, 0x10(r1)
    b lbl_fn_80139560_00000700
lbl_fn_80139560_000001D8:
    mr r3, r31
    bl fn_80139EBC
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000001F4
    lfs f0, lbl_80881964
    stfs f0, 0x10(r1)
    b lbl_fn_80139560_00000700
lbl_fn_80139560_000001F4:
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000220
    bl fn_80121F00
    li r4, 0x3
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_80139560_00000220
    lfs f0, lbl_808819A0
    stfs f0, 0x10(r1)
    b lbl_fn_80139560_00000700
lbl_fn_80139560_00000220:
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80139560_0000024C
    bl fn_80121F00
    li r4, 0x3
    bl fn_80370174
    cmpwi r3, 0x2
    bne lbl_fn_80139560_0000024C
    lfs f0, lbl_808819A8
    stfs f0, 0x10(r1)
    b lbl_fn_80139560_00000700
lbl_fn_80139560_0000024C:
    mr r3, r31
    bl fn_80139ED0
    cmpwi r3, 0x0
    bne lbl_fn_80139560_00000298
    mr r3, r31
    bl fn_80139EDC
    cmpwi r3, 0x0
    bne lbl_fn_80139560_00000298
    lfs f0, lbl_808819AC
    mr r3, r31
    stfs f0, 0x10(r1)
    bl fn_80139EE8
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000002A0
    lfs f1, 0x10(r1)
    lfs f0, lbl_808819B0
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
    b lbl_fn_80139560_000002A0
lbl_fn_80139560_00000298:
    lfs f0, lbl_80881984
    stfs f0, 0x10(r1)
lbl_fn_80139560_000002A0:
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000700
    bl fn_80121F00
    li r4, 0x3
    bl fn_80370174
    cmpwi r3, 0x3
    bne lbl_fn_80139560_00000700
    lfs f1, 0x10(r1)
    lfs f0, lbl_808819B4
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
    b lbl_fn_80139560_00000700
lbl_fn_80139560_000002D4:
    cmpwi r3, 0x2
    bne lbl_fn_80139560_00000438
    bl fn_80139EF4
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000700
    mr r3, r31
    bl fn_80139EFC
    cmpwi r3, 0x0
    bne lbl_fn_80139560_000003B0
    mr r3, r31
    bl fn_800F7F60
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000003B0
    mr r3, r31
    bl fn_80139F04
    cmpwi r3, 0x0
    bne lbl_fn_80139560_000003B0
    addi r3, r31, 0xb0
    li r4, 0x1
    bl fn_80139F24
    mr r3, r31
    li r4, 0x0
    bl fn_801370B8
    mr r30, r3
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpw r3, r30
    beq lbl_fn_80139560_00000388
    mr r3, r31
    li r4, 0x0
    bl fn_801370B8
    lfs f1, lbl_8088196C
    mr r5, r3
    lfs f2, lbl_80881994
    addi r3, r31, 0xb0
    li r4, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80881964
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F3C
lbl_fn_80139560_00000388:
    mr r3, r31
    li r4, 0x0
    bl fn_80138E1C
    lfs f1, lbl_8088196C
    addi r3, r31, 0x574
    stfs f1, 0x570(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
    b lbl_fn_80139560_00000924
lbl_fn_80139560_000003B0:
    mr r3, r31
    bl fn_80139F04
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000003DC
    mr r3, r31
    bl fn_8017B3C0
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000003DC
    mr r3, r31
    bl fn_8017B434
    b lbl_fn_80139560_00000700
lbl_fn_80139560_000003DC:
    addi r3, r31, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000003FC
    addi r3, r31, 0xd74
    bl fn_8011D21C
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000700
lbl_fn_80139560_000003FC:
    lwz r0, 0xc58(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80139560_00000414
    bl fn_80139EF4
    mr r4, r31
    bl fn_80017064
lbl_fn_80139560_00000414:
    bl fn_80139EF4
    mr r4, r31
    bl fn_80017064
    mr r3, r31
    addi r4, r1, 0x14
    addi r5, r1, 0x6c
    addi r6, r1, 0x10
    bl fn_8013A4E8
    b lbl_fn_80139560_00000700
lbl_fn_80139560_00000438:
    cmpwi r3, 0x7
    bne lbl_fn_80139560_00000550
    addi r3, r31, 0x7d4
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000468
    lfs f0, lbl_8088196C
    addi r3, r1, 0x6c
    stfs f0, 0x14(r1)
    addi r4, r31, 0x534
    bl fn_8000D124
    b lbl_fn_80139560_00000700
lbl_fn_80139560_00000468:
    addi r3, r31, 0x1030
    bl fn_80126214
    addi r3, r31, 0x1030
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x60
    bl fn_8001047C
    addi r3, r1, 0x60
    bl fn_8000D3A4
    frsp f2, f1
    lfs f0, lbl_808819B8
    stfs f1, 0x14(r1)
    fcmpo cr0, f2, f0
    ble lbl_fn_80139560_000004C8
    addi r3, r1, 0x3c
    addi r4, r1, 0x60
    bl fn_800F7FD8
    addi r3, r1, 0x48
    addi r4, r1, 0x3c
    bl fn_80011034
    addi r3, r1, 0x6c
    addi r4, r1, 0x48
    bl fn_8000D124
    b lbl_fn_80139560_000004D4
lbl_fn_80139560_000004C8:
    addi r3, r1, 0x6c
    addi r4, r31, 0x534
    bl fn_8000D124
lbl_fn_80139560_000004D4:
    mr r3, r31
    bl fn_800F7F80
    cmpwi r3, 0x0
    beq lbl_fn_80139560_0000050C
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80139560_0000050C
    bl fn_80121F00
    li r4, 0x3
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_80139560_0000050C
    lfs f0, lbl_808819A0
    stfs f0, 0x10(r1)
lbl_fn_80139560_0000050C:
    addi r3, r31, 0xd74
    bl fn_8013A144
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000700
    lbz r0, 0xd74(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80139560_0000053C
    lfs f1, 0x10(r1)
    lfs f0, lbl_808819A4
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
    b lbl_fn_80139560_00000700
lbl_fn_80139560_0000053C:
    lfs f1, 0x10(r1)
    lfs f0, lbl_808819A0
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
    b lbl_fn_80139560_00000700
lbl_fn_80139560_00000550:
    cmpwi r3, 0x6
    bne lbl_fn_80139560_000006F8
    addi r3, r1, 0x30
    addi r4, r31, 0xf80
    bl fn_8013A1A8
    addi r3, r1, 0x30
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000006D8
    addi r3, r31, 0xf80
    bl fn_8013A214
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000624
    addi r3, r31, 0xf80
    bl fn_8013A214
    mr r4, r3
    addi r3, r1, 0x78
    lwz r12, 0x0(r4)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0xf80
    li r4, 0x0
    bl fn_8013A21C
    addi r3, r1, 0x24
    addi r4, r1, 0x78
    bl fn_800C61C0
    addi r3, r1, 0x24
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80139560_000005E4
    addi r3, r1, 0x78
    bl fn_800C7CA8
lbl_fn_80139560_000005E4:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80139560_00000614
    addi r3, r31, 0xf80
    bl fn_8013A248
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000614
    mr r3, r31
    bl fn_8013A150
    mr r4, r3
    mr r3, r31
    bl fn_8016E970
lbl_fn_80139560_00000614:
    addi r3, r1, 0x78
    li r4, -0x1
    bl fn_800C622C
    b lbl_fn_80139560_000006D8
lbl_fn_80139560_00000624:
    lwz r3, 0x560(r31)
    subi r0, r3, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_80139560_000006C0
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80139560_000006AC
    mr r3, r31
    bl fn_8013A158
    cmpwi r3, 0x0
    beq lbl_fn_80139560_0000069C
    addi r3, r31, 0x7d4
    li r4, 0x100
    bl fn_8013A16C
    cmpwi r3, 0x0
    bne lbl_fn_80139560_0000069C
    addi r3, r31, 0x7d4
    bl fn_80139F4C
    cmpwi r3, 0x0
    bne lbl_fn_80139560_0000069C
    bl fn_800F7F90
    cmpwi r3, 0x0
    bne lbl_fn_80139560_0000069C
    addi r3, r1, 0x18
    addi r4, r31, 0x574
    bl fn_80011034
    mr r3, r31
    addi r4, r1, 0x18
    bl fn_801698E4
lbl_fn_80139560_0000069C:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x54c(r31)
    b lbl_fn_80139560_000006D8
lbl_fn_80139560_000006AC:
    mr r3, r31
    addi r4, r31, 0x528
    addi r5, r31, 0x6b8
    bl fn_80171F3C
    b lbl_fn_80139560_000006D8
lbl_fn_80139560_000006C0:
    cmpwi r3, 0x68
    bne lbl_fn_80139560_000006D8
    mr r3, r31
    addi r4, r31, 0x528
    addi r5, r31, 0x574
    bl fn_80171F3C
lbl_fn_80139560_000006D8:
    lfs f1, 0x580(r31)
    lfs f2, lbl_808819BC
    lfs f0, 0x584(r31)
    fmuls f1, f1, f2
    fmuls f0, f0, f2
    stfs f1, 0x580(r31)
    stfs f0, 0x584(r31)
    b lbl_fn_80139560_00000924
lbl_fn_80139560_000006F8:
    cmpwi r3, 0xa
    beq lbl_fn_80139560_00000924
lbl_fn_80139560_00000700:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x5
    beq lbl_fn_80139560_00000714
    cmpwi r0, 0x1
    bne lbl_fn_80139560_0000074C
lbl_fn_80139560_00000714:
    mr r3, r31
    bl fn_80139E9C
    cmpwi r3, 0x0
    beq lbl_fn_80139560_0000074C
    lwz r3, 0x1208(r31)
    bl fn_8013A184
    cmpwi r3, 0x2
    bne lbl_fn_80139560_00000744
    lwz r3, 0x1208(r31)
    bl fn_8013A18C
    cmpwi r3, 0x0
    bne lbl_fn_80139560_0000074C
lbl_fn_80139560_00000744:
    li r0, 0x0
    stw r0, 0x1208(r31)
lbl_fn_80139560_0000074C:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80139560_00000780
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x6c
    li r5, 0x0
    lwz r12, 0x34(r12)
    lfs f1, 0x14(r1)
    lfs f2, 0x10(r1)
    mtctr r12
    bctrl
    b lbl_fn_80139560_00000798
lbl_fn_80139560_00000780:
    lfs f1, 0x14(r1)
    mr r3, r31
    lfs f2, 0x10(r1)
    addi r4, r1, 0x6c
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_80139560_00000798:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_80139560_000007F4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80139560_000007CC
    mr r3, r31
    addi r4, r31, 0x574
    li r5, 0xf
    li r6, -0x1
    bl fn_8016BBCC
    b lbl_fn_80139560_000007E8
lbl_fn_80139560_000007CC:
    cmpwi r0, 0x2
    bne lbl_fn_80139560_000007E8
    mr r3, r31
    addi r4, r31, 0x574
    li r5, 0x3e8
    li r6, -0x1
    bl fn_8016BBCC
lbl_fn_80139560_000007E8:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x54c(r31)
lbl_fn_80139560_000007F4:
    lwz r4, 0x54c(r31)
    rlwinm r3, r4, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    beq lbl_fn_80139560_00000818
    rlwinm r3, r4, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_80139560_000008A8
lbl_fn_80139560_00000818:
    bl fn_8013A194
    cmpwi r3, 0x0
    beq lbl_fn_80139560_0000089C
    li r3, 0x7de
    bl fn_80219E6C
    lfs f1, 0x13a4(r31)
    mr r29, r3
    lfs f0, lbl_808819C0
    fadds f0, f1, f0
    stfs f0, 0x13a4(r31)
    bl fn_8013A194
    li r4, 0x1
    bl fn_8013A19C
    bl fn_8013A194
    bl fn_800F8548
    mr r30, r3
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_8088196C
    mr r4, r31
    stw r0, 0xc(r1)
    mr r5, r29
    lfs f2, lbl_80881964
    mr r6, r30
    addi r7, r31, 0x13a0
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    bl fn_8013A194
    li r4, 0x0
    bl fn_8013A19C
lbl_fn_80139560_0000089C:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 15, 12
    stw r0, 0x54c(r31)
lbl_fn_80139560_000008A8:
    lwz r0, 0x54c(r31)
    rlwinm r3, r0, 0, 11, 11
    subis r0, r3, 0x10
    cmplwi r0, 0x0
    bne lbl_fn_80139560_00000924
    bl fn_8013A194
    cmpwi r3, 0x0
    beq lbl_fn_80139560_00000918
    li r3, 0x7e8
    bl fn_80219E6C
    mr r29, r3
    bl fn_8013A194
    bl fn_800F8548
    mr r30, r3
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_8088196C
    mr r5, r29
    stw r0, 0xc(r1)
    mr r6, r30
    lfs f2, lbl_80881964
    addi r7, r31, 0x13a0
    addi r8, r31, 0x534
    li r4, 0x0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_80139560_00000918:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x54c(r31)
lbl_fn_80139560_00000924:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80139E90(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 4
    blr
}

asm void fn_80139E9C(void)
{
    nofralloc
    lwz r3, 0x1208(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80139EB0(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 28
    blr
}

asm void fn_80139EBC(void)
{
    nofralloc
    lwz r3, 0xf54(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80139ED0(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 26
    blr
}

asm void fn_80139EDC(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 27
    blr
}

asm void fn_80139EE8(void)
{
    nofralloc
    lwz r0, 0x54c(r3)
    extrwi r3, r0, 1, 25
    blr
}

asm void fn_80139EF4(void)
{
    nofralloc
    lwz r3, lbl_8087EE68
    blr
}

asm void fn_80139EFC(void)
{
    nofralloc
    lwz r3, 0xc54(r3)
    blr
}

asm void fn_80139F04(void)
{
    nofralloc
    lwz r4, 0x1400(r3)
    li r3, 0x2
    subi r0, r4, 0x2
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80139F24(void)
{
    nofralloc
    stw r4, 0x34c(r3)
    blr
}

asm void fn_80139F2C(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    lwz r3, 0x22c(r3)
    blr
}

asm void fn_80139F3C(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    stfs f1, 0x238(r3)
    blr
}

asm void fn_80139F4C(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    extrwi r3, r0, 1, 26
    blr
}

asm void fn_80139F58(void)
{
    nofralloc
    addi r3, r3, 0x58
    blr
}

asm void fn_80139F60(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    lfs f0, lbl_808819C4
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    lfs f2, 0x8(r3)
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80139F60_00000A70
    lfs f3, 0x0(r3)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80139F60_00000A64
    lfs f0, lbl_808819C8
    b lbl_fn_80139F60_00000A68
lbl_fn_80139F60_00000A64:
    lfs f0, lbl_808819CC
lbl_fn_80139F60_00000A68:
    stfs f0, 0x48(r1)
    b lbl_fn_80139F60_00000A80
lbl_fn_80139F60_00000A70:
    lfs f1, 0x0(r3)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80139F60_00000A80:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x50
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088196C
    addi r4, r1, 0x38
    lfs f30, 0x58(r1)
    mr r5, r4
    lfs f31, 0x54(r1)
    addi r3, r1, 0x80
    lfs f13, 0x50(r1)
    lfs f12, 0x68(r1)
    lfs f11, 0x64(r1)
    lfs f10, 0x60(r1)
    lfs f9, 0x78(r1)
    lfs f8, 0x74(r1)
    lfs f7, 0x70(r1)
    lfs f6, 0x7c(r1)
    lfs f5, 0x6c(r1)
    lfs f4, 0x5c(r1)
    lfs f0, lbl_80881964
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f13, 0x80(r1)
    stfs f31, 0x84(r1)
    stfs f30, 0x88(r1)
    stfs f10, 0x90(r1)
    stfs f11, 0x94(r1)
    stfs f12, 0x98(r1)
    stfs f7, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f9, 0xa8(r1)
    stfs f4, 0x8c(r1)
    stfs f5, 0x9c(r1)
    stfs f6, 0xac(r1)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808819C4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80139F60_00000B9C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80139F60_00000B8C
    lfs f0, lbl_808819C8
    b lbl_fn_80139F60_00000B90
lbl_fn_80139F60_00000B8C:
    lfs f0, lbl_808819CC
lbl_fn_80139F60_00000B90:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80139F60_00000BB0
lbl_fn_80139F60_00000B9C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80139F60_00000BB0:
    addi r3, r1, 0x44
    lfs f2, lbl_8088196C
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r0, 0xf4(r1)
    stfs f2, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8013A13C(void)
{
    nofralloc
    li r4, 0x79
    b fn_805F8E70
}

asm void fn_8013A144(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    clrlwi r3, r0, 31
    blr
}

asm void fn_8013A150(void)
{
    nofralloc
    lwz r3, 0x564(r3)
    blr
}

asm void fn_8013A158(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8013A16C(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    and r0, r4, r0
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8013A184(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    blr
}

asm void fn_8013A18C(void)
{
    nofralloc
    lwz r3, 0x9c(r3)
    blr
}

asm void fn_8013A194(void)
{
    nofralloc
    lwz r3, lbl_8087F048
    blr
}

asm void fn_8013A19C(void)
{
    nofralloc
    addis r3, r3, 0x4
    stw r4, -0x1c64(r3)
    blr
}

asm void fn_8013A1A8(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    stwu r1, -0x20(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8013A1A8_00000C88
    lis r6, lbl_80766768@ha
    lwzu r5, lbl_80766768@l(r6)
    stw r5, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    b lbl_fn_8013A1A8_00000CA4
lbl_fn_8013A1A8_00000C88:
    lis r6, lbl_8077A780@ha
    lwzu r5, lbl_8077A780@l(r6)
    stw r5, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
lbl_fn_8013A1A8_00000CA4:
    lwz r5, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r0, 0x10(r1)
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_8013A214(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_8013A21C(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    beqlr
    mr r3, r0
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_8013A248(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_8013A258(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8013A258_00000D48
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_8013A258_00000D64
lbl_fn_8013A258_00000D48:
    lis r5, lbl_8077A798@ha
    lwzu r4, lbl_8077A798@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_8013A258_00000D64:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x30
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013A258_00000F84
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8013A258_00000F84
    lwz r4, 0xf80(r31)
    addi r3, r1, 0x3c
    lwz r12, 0x0(r4)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x3c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8013A258_00000DEC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_8013A258_00000E08
lbl_fn_8013A258_00000DEC:
    lis r5, lbl_8077A7A4@ha
    lwzu r4, lbl_8077A7A4@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_8013A258_00000E08:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x24
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8013A258_00000F20
    lwz r0, 0x3c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8013A258_00000F08
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r31, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8013A258_00000EAC
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r31, 0xc(r3)
lbl_fn_8013A258_00000EAC:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_8013A258_00000EC0
    bl fn_80084C24
lbl_fn_8013A258_00000EC0:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_8013A258_00000F08
    addic. r3, r3, 0x4
    beq lbl_fn_8013A258_00000F08
    beq lbl_fn_8013A258_00000F08
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8013A258_00000F08
    bl fn_806952C4
lbl_fn_8013A258_00000F08:
    lwz r4, 0x3c(r1)
    addi r3, r1, 0x40
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    b lbl_fn_8013A258_00000F48
lbl_fn_8013A258_00000F20:
    lwz r3, 0xf80(r31)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r31)
    beq lbl_fn_8013A258_00000F48
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8013A258_00000F48:
    addic. r3, r1, 0x3c
    beq lbl_fn_8013A258_00000F84
    lwz r4, 0x3c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8013A258_00000F84
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8013A258_00000F7C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8013A258_00000F7C:
    li r0, 0x0
    stw r0, 0x3c(r1)
lbl_fn_8013A258_00000F84:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
