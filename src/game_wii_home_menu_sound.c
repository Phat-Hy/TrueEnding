#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSReturnToMenu(void);
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_8006A0F4(void);
extern void fn_8006A250(void);
extern void fn_80084320(void);
extern void fn_800A4228(void);
extern void fn_800A555C(void);
extern void fn_800A5920(void);
extern void fn_800A59F0(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_8011770C(void);
extern void fn_8012B028(void);
extern void fn_80134800(void);
extern void fn_801F3FF8(void);
extern void fn_801F4AA0(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F64D0(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801FEE08(void);
extern void fn_801FEF40(void);
extern void fn_8020924C(void);
extern void fn_80216544(void);
extern void fn_8021771C(void);
extern void fn_80217D9C(void);
extern void fn_80219544(void);
extern void fn_80370174(void);
extern void fn_804A436C(void);
extern void fn_804A53D4(void);
extern void fn_8054A340(void);
extern void fn_805C3F10(void);
extern void fn_805F3780(void);
extern void fn_805F38A0(void);
extern void fn_805F3C50(void);
extern void fn_805F68F0(void);
extern void fn_805F69E0(void);
extern void fn_806036E0(void);
extern void fn_80603730(void);
extern void fn_80603FF0(void);
extern void fn_80604FB0(void);
extern void fn_80605140(void);
extern void fn_80612B10(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8075FFB8[];
extern u8 lbl_8075FFD0[];
extern u8 lbl_80795850[];

/* Small data declarations */
extern u32 lbl_8087EF68;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFC0;
extern u32 lbl_8087F068;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F420;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F530;
extern u32 lbl_8087F580;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80888058;
extern u32 lbl_80888060;
extern u32 lbl_80888064;
extern u32 lbl_80888068;
extern u32 lbl_8088806C;
extern u32 lbl_80888070;
extern u32 lbl_80888074;
extern u32 lbl_80888078;
extern u32 lbl_8088807C;
extern u32 lbl_80888080;
extern u32 lbl_80888084;

/* Function declarations */
void fn_80570CFC(void);
void fn_805714E0(void);
void fn_80571560(void);
void fn_805715C8(void);
void fn_80571630(void);
void fn_805716B4(void);
void fn_80571804(void);
void fn_8057185C(void);
void fn_80571980(void);
void fn_80571A2C(void);
void fn_80571C68(void);
void fn_80571DBC(void);
void fn_80571FDC(void);
void fn_80572198(void);
void fn_80572294(void);
void fn_80572454(void);

asm void fn_80570CFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x24(r3)
    cmpwi cr1, r0, 0x0
    bne cr1, lbl_fn_80570CFC_00000108
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000094
    li r4, 0x0
    stw r4, 0x28(r3)
    beq cr1, lbl_fn_80570CFC_00000048
    li r0, 0x1
    stw r0, 0x28(r3)
    b lbl_fn_80570CFC_00000094
lbl_fn_80570CFC_00000048:
    li r0, 0x1
    stw r0, 0x0(r3)
    stw r4, 0x8(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_00000064
    stw r0, 0x20(r3)
lbl_fn_80570CFC_00000064:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_00000078
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570CFC_00000078:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_00000094
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
lbl_fn_80570CFC_00000094:
    lwz r0, 0x2c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000108
    lwz r0, 0x24(r31)
    li r3, 0x0
    stw r3, 0x2c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_000000C0
    li r0, 0x1
    stw r0, 0x2c(r31)
    b lbl_fn_80570CFC_00000108
lbl_fn_80570CFC_000000C0:
    li r0, 0x1
    stw r0, 0x4(r31)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000000D8
    stw r0, 0x20(r3)
lbl_fn_80570CFC_000000D8:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000000EC
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570CFC_000000EC:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_00000108
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
lbl_fn_80570CFC_00000108:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_0000014C
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_000007CC
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_000007CC
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80570CFC_000007CC
    li r3, 0x0
    bl fn_805F38A0
    b lbl_fn_80570CFC_000007CC
lbl_fn_80570CFC_0000014C:
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000164
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000250
lbl_fn_80570CFC_00000164:
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80570CFC_0000019C
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_0000019C
    lwz r0, 0x84(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80570CFC_0000019C
    lwz r0, 0x38(r4)
    ori r0, r0, 0x22
    stw r0, 0x38(r4)
    lwz r3, 0x18(r31)
    bl fn_8006A0F4
lbl_fn_80570CFC_0000019C:
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_000001C4
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80570CFC_000007CC
    lwz r3, 0x4c(r4)
    lwz r0, 0x54(r4)
    cmpw r3, r0
    ble lbl_fn_80570CFC_000007CC
lbl_fn_80570CFC_000001C4:
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000001E0
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80570CFC_000007CC
lbl_fn_80570CFC_000001E0:
    li r3, 0x0
    bl fn_806036E0
    li r3, 0x0
    bl fn_80603730
    li r3, 0x0
    bl fn_80612B10
    li r3, 0x1
    bl fn_80605140
    bl fn_80604FB0
    bl fn_80603FF0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000220
    li r3, 0x0
    bl fn_805F38A0
    b lbl_fn_80570CFC_000007CC
lbl_fn_80570CFC_00000220:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000234
    bl OSReturnToMenu
    b lbl_fn_80570CFC_000007CC
lbl_fn_80570CFC_00000234:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000248
    bl fn_805F3C50
    b lbl_fn_80570CFC_000007CC
lbl_fn_80570CFC_00000248:
    bl fn_805F3780
    b lbl_fn_80570CFC_000007CC
lbl_fn_80570CFC_00000250:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_000003F0
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_00000304
    lwz r3, 0x84(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80570CFC_00000304
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_000002A4
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80570CFC_000006FC
    li r3, 0x0
    bl fn_805F38A0
    b lbl_fn_80570CFC_000006FC
lbl_fn_80570CFC_000002A4:
    bl fn_805C3F10
    li r30, 0x1
    stw r30, 0x14(r31)
    li r3, 0x0
    bl fn_805F68F0
    li r3, 0x0
    bl fn_805F69E0
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000002D0
    stw r30, 0x20(r3)
lbl_fn_80570CFC_000002D0:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000002E4
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570CFC_000002E4:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000006FC
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
    b lbl_fn_80570CFC_000006FC
lbl_fn_80570CFC_00000304:
    lwz r3, lbl_8087F530
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000003D4
    lwz r5, lbl_8087F420
    cmpwi r5, 0x0
    beq lbl_fn_80570CFC_000003D4
    lwz r0, 0x18(r5)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000344
    lwz r0, 0x1c(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000344
    lwz r0, 0x34(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000348
lbl_fn_80570CFC_00000344:
    li r4, 0x1
lbl_fn_80570CFC_00000348:
    cmpwi r4, 0x0
    bne lbl_fn_80570CFC_000003D4
    li r4, 0x14
    li r5, 0x0
    lis r6, 0xff00
    bl fn_8006A250
    stw r3, 0x18(r31)
    lis r4, 0x5
    subi r0, r4, 0x6c20
    lfs f0, lbl_80888058
    stw r0, 0x5c(r3)
    li r0, 0x1
    lwz r3, 0x18(r31)
    stfs f0, 0x74(r3)
    lwz r3, 0x18(r31)
    stw r0, 0x78(r3)
    lwz r3, 0x18(r31)
    stw r0, 0x48(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000003A0
    stw r0, 0x20(r3)
lbl_fn_80570CFC_000003A0:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000003B4
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570CFC_000003B4:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000003DC
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
    b lbl_fn_80570CFC_000003DC
lbl_fn_80570CFC_000003D4:
    li r0, 0x1
    stw r0, 0x20(r31)
lbl_fn_80570CFC_000003DC:
    li r3, 0x0
    bl fn_805F68F0
    li r3, 0x0
    bl fn_805F69E0
    b lbl_fn_80570CFC_000006FC
lbl_fn_80570CFC_000003F0:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000510
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000424
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_80570CFC_000006FC
    bl OSReturnToMenu
    b lbl_fn_80570CFC_000006FC
lbl_fn_80570CFC_00000424:
    lwz r3, lbl_8087F530
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000004F4
    lwz r5, lbl_8087F420
    cmpwi r5, 0x0
    beq lbl_fn_80570CFC_000004F4
    lwz r0, 0x18(r5)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000464
    lwz r0, 0x1c(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000464
    lwz r0, 0x34(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000468
lbl_fn_80570CFC_00000464:
    li r4, 0x1
lbl_fn_80570CFC_00000468:
    cmpwi r4, 0x0
    bne lbl_fn_80570CFC_000004F4
    li r4, 0x14
    li r5, 0x0
    lis r6, 0xff00
    bl fn_8006A250
    stw r3, 0x18(r31)
    lis r4, 0x5
    subi r0, r4, 0x6c20
    lfs f0, lbl_80888058
    stw r0, 0x5c(r3)
    li r0, 0x1
    lwz r3, 0x18(r31)
    stfs f0, 0x74(r3)
    lwz r3, 0x18(r31)
    stw r0, 0x78(r3)
    lwz r3, 0x18(r31)
    stw r0, 0x48(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000004C0
    stw r0, 0x20(r3)
lbl_fn_80570CFC_000004C0:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000004D4
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570CFC_000004D4:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000004FC
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
    b lbl_fn_80570CFC_000004FC
lbl_fn_80570CFC_000004F4:
    li r0, 0x1
    stw r0, 0x20(r31)
lbl_fn_80570CFC_000004FC:
    li r3, 0x0
    bl fn_805F68F0
    li r3, 0x0
    bl fn_805F69E0
    b lbl_fn_80570CFC_000006FC
lbl_fn_80570CFC_00000510:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_00000608
    lwz r3, lbl_8087F530
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000005EC
    lwz r5, lbl_8087F420
    cmpwi r5, 0x0
    beq lbl_fn_80570CFC_000005EC
    lwz r0, 0x18(r5)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_0000055C
    lwz r0, 0x1c(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_0000055C
    lwz r0, 0x34(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000560
lbl_fn_80570CFC_0000055C:
    li r4, 0x1
lbl_fn_80570CFC_00000560:
    cmpwi r4, 0x0
    bne lbl_fn_80570CFC_000005EC
    li r4, 0x14
    li r5, 0x0
    lis r6, 0xff00
    bl fn_8006A250
    stw r3, 0x18(r31)
    lis r4, 0x5
    subi r0, r4, 0x6c20
    lfs f0, lbl_80888058
    stw r0, 0x5c(r3)
    li r0, 0x1
    lwz r3, 0x18(r31)
    stfs f0, 0x74(r3)
    lwz r3, 0x18(r31)
    stw r0, 0x78(r3)
    lwz r3, 0x18(r31)
    stw r0, 0x48(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000005B8
    stw r0, 0x20(r3)
lbl_fn_80570CFC_000005B8:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000005CC
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570CFC_000005CC:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000005F4
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
    b lbl_fn_80570CFC_000005F4
lbl_fn_80570CFC_000005EC:
    li r0, 0x1
    stw r0, 0x20(r31)
lbl_fn_80570CFC_000005F4:
    li r3, 0x0
    bl fn_805F68F0
    li r3, 0x0
    bl fn_805F69E0
    b lbl_fn_80570CFC_000006FC
lbl_fn_80570CFC_00000608:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_000006FC
    lwz r3, lbl_8087F530
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000006E4
    lwz r5, lbl_8087F420
    cmpwi r5, 0x0
    beq lbl_fn_80570CFC_000006E4
    lwz r0, 0x18(r5)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000654
    lwz r0, 0x1c(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000654
    lwz r0, 0x34(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80570CFC_00000658
lbl_fn_80570CFC_00000654:
    li r4, 0x1
lbl_fn_80570CFC_00000658:
    cmpwi r4, 0x0
    bne lbl_fn_80570CFC_000006E4
    li r4, 0x14
    li r5, 0x0
    lis r6, 0xff00
    bl fn_8006A250
    stw r3, 0x18(r31)
    lis r4, 0x5
    subi r0, r4, 0x6c20
    lfs f0, lbl_80888058
    stw r0, 0x5c(r3)
    li r0, 0x1
    lwz r3, 0x18(r31)
    stfs f0, 0x74(r3)
    lwz r3, 0x18(r31)
    stw r0, 0x78(r3)
    lwz r3, 0x18(r31)
    stw r0, 0x48(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000006B0
    stw r0, 0x20(r3)
lbl_fn_80570CFC_000006B0:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000006C4
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570CFC_000006C4:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000006EC
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
    b lbl_fn_80570CFC_000006EC
lbl_fn_80570CFC_000006E4:
    li r0, 0x1
    stw r0, 0x20(r31)
lbl_fn_80570CFC_000006EC:
    li r3, 0x0
    bl fn_805F68F0
    li r3, 0x0
    bl fn_805F69E0
lbl_fn_80570CFC_000006FC:
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_000007CC
    lwz r3, 0x1c(r31)
    li r4, 0x0
    li r5, 0x1
    addi r0, r3, 0x1
    stw r0, 0x1c(r31)
    lwz r3, lbl_8087EF70
    bl fn_800A5920
    cmpwi r3, 0x0
    bne lbl_fn_80570CFC_00000740
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A59F0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_00000748
lbl_fn_80570CFC_00000740:
    li r0, 0x0
    stw r0, 0x1c(r31)
lbl_fn_80570CFC_00000748:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_000007CC
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x1518
    ble lbl_fn_80570CFC_000007CC
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80570CFC_0000077C
    li r0, 0x1
    stw r0, 0x28(r31)
    b lbl_fn_80570CFC_000007CC
lbl_fn_80570CFC_0000077C:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x0(r31)
    stw r0, 0x8(r31)
    lwz r4, lbl_8087F420
    cmpwi r4, 0x0
    beq lbl_fn_80570CFC_0000079C
    stw r3, 0x20(r4)
lbl_fn_80570CFC_0000079C:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000007B0
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80570CFC_000007B0:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80570CFC_000007CC
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
lbl_fn_80570CFC_000007CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805714E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805714E0_00000808
    li r0, 0x1
    stw r0, 0x28(r3)
    b lbl_fn_805714E0_00000854
lbl_fn_805714E0_00000808:
    li r0, 0x1
    stw r0, 0x0(r3)
    stw r4, 0x8(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_805714E0_00000824
    stw r0, 0x20(r3)
lbl_fn_805714E0_00000824:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_805714E0_00000838
    li r4, 0x1
    bl fn_800D246C
lbl_fn_805714E0_00000838:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_805714E0_00000854
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
lbl_fn_805714E0_00000854:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80571560(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r0, 0xc(r3)
    stw r4, 0x8(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_80571560_0000088C
    stw r0, 0x20(r3)
lbl_fn_80571560_0000088C:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_80571560_000008A0
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80571560_000008A0:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80571560_000008BC
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
lbl_fn_80571560_000008BC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805715C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r0, 0x10(r3)
    stw r4, 0x8(r3)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_805715C8_000008F4
    stw r0, 0x20(r3)
lbl_fn_805715C8_000008F4:
    lwz r3, lbl_8087EFC0
    cmpwi r3, 0x0
    beq lbl_fn_805715C8_00000908
    li r4, 0x1
    bl fn_800D246C
lbl_fn_805715C8_00000908:
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_805715C8_00000924
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
lbl_fn_805715C8_00000924:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80571630(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80571630_00000998
    lis r5, lbl_8075FFD0@ha
    li r3, 0xd0
    addi r5, r5, lbl_8075FFD0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80571630_0000099C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_805716B4
    b lbl_fn_80571630_0000099C
lbl_fn_80571630_00000998:
    li r3, 0x0
lbl_fn_80571630_0000099C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805716B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D1D3C
    addi r5, r28, 0x78
    addi r6, r28, 0xa8
    lis r4, lbl_80795850@ha
    li r3, 0x0
    addi r4, r4, lbl_80795850@l
    cmplw r5, r6
    stw r4, 0x0(r28)
    stw r3, 0x6c(r28)
    stw r3, 0x70(r28)
    stb r3, 0x74(r28)
    stb r3, 0x75(r28)
    bge lbl_fn_805716B4_00000A3C
    addi r0, r6, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_805716B4_00000A3C
lbl_fn_805716B4_00000A28:
    stw r3, 0x0(r5)
    stb r3, 0x4(r5)
    stb r3, 0x5(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_805716B4_00000A28
lbl_fn_805716B4_00000A3C:
    lis r31, lbl_8075FFD0@ha
    li r0, 0x0
    addi r31, r31, lbl_8075FFD0@l
    stw r0, 0xac(r28)
    mr r3, r28
    li r5, 0x0
    stw r0, 0xb0(r28)
    addi r4, r31, 0x1
    stb r29, 0xb4(r28)
    stw r30, 0xb8(r28)
    stw r0, 0xc4(r28)
    stw r0, 0xc8(r28)
    bl fn_801F3FF8
    stw r3, 0x48(r28)
    li r4, 0x1
    bl fn_800D246C
    addi r31, r31, 0x26
    li r29, 0x0
    li r30, 0x0
lbl_fn_805716B4_00000A88:
    mr r3, r28
    mr r4, r31
    bl fn_801F64D0
    add r5, r28, r30
    li r4, 0x1
    stw r3, 0x4c(r5)
    bl fn_800D246C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x7
    blt lbl_fn_805716B4_00000A88
    lis r4, lbl_8075FFD0@ha
    mr r3, r28
    addi r4, r4, lbl_8075FFD0@l
    li r5, 0x0
    addi r4, r4, 0x4b
    bl fn_801F3FF8
    stw r3, 0x68(r28)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x0
    stw r0, 0xa8(r28)
    mr r3, r28
    stw r0, 0xbc(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80571804(void)
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
    beq lbl_fn_80571804_00000B44
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80571804_00000B44
    mr r3, r30
    bl dtor_80084684
lbl_fn_80571804_00000B44:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8057185C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8057185C_00000C60
    lwz r3, 0x48(r28)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x48(r28)
    li r4, 0x0
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x48(r28)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x48(r28)
    addi r3, r3, 0x58
    bl fn_801FEF40
    mr r30, r28
    li r29, 0x0
    li r31, 0x0
lbl_fn_8057185C_00000BD4:
    lwz r3, 0x4c(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x4c(r30)
    addi r29, r29, 0x1
    cmpwi r29, 0x7
    stb r31, 0x4d(r3)
    lwz r3, 0x4c(r30)
    addi r30, r30, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_8057185C_00000BD4
    lwz r3, 0x68(r28)
    li r4, 0x0
    bl fn_800D246C
    lwz r5, 0x68(r28)
    mr r3, r28
    li r4, 0x0
    lwz r0, 0xfc(r5)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r5)
    lwz r5, 0x68(r28)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    bl fn_80571C68
    addi r3, r1, 0x8
    li r4, 0x1e
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r3, 0x1
    b lbl_fn_8057185C_00000C64
lbl_fn_8057185C_00000C60:
    li r3, 0x0
lbl_fn_8057185C_00000C64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80571980(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80571980_00000CC8
    cmpwi r0, 0x2
    beq lbl_fn_80571980_00000CDC
    cmpwi r0, 0x3
    beq lbl_fn_80571980_00000CE4
    cmpwi r0, 0x4
    beq lbl_fn_80571980_00000CEC
    cmpwi r0, 0x5
    beq lbl_fn_80571980_00000CF4
    b lbl_fn_80571980_00000D1C
lbl_fn_80571980_00000CC8:
    bl fn_80572294
    mr r3, r31
    li r4, 0x2
    bl fn_80571C68
    b lbl_fn_80571980_00000D1C
lbl_fn_80571980_00000CDC:
    bl fn_80571DBC
    b lbl_fn_80571980_00000D1C
lbl_fn_80571980_00000CE4:
    bl fn_80571FDC
    b lbl_fn_80571980_00000D1C
lbl_fn_80571980_00000CEC:
    bl fn_80572198
    b lbl_fn_80571980_00000D1C
lbl_fn_80571980_00000CF4:
    lwz r3, lbl_8087F068
    cmpwi r3, 0x0
    beq lbl_fn_80571980_00000D1C
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_80571980_00000D1C
    bl fn_800D2338
    mr r3, r31
    li r4, 0x1
    bl fn_80571C68
lbl_fn_80571980_00000D1C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80571A2C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r3
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x50(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x60(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x64(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80571A2C_00000DFC
    cmpwi r0, 0x2
    beq lbl_fn_80571A2C_00000E04
    cmpwi r0, 0x3
    beq lbl_fn_80571A2C_00000E84
    cmpwi r0, 0x4
    beq lbl_fn_80571A2C_00000EF0
    b lbl_fn_80571A2C_00000F58
lbl_fn_80571A2C_00000DFC:
    bl fn_80572454
    b lbl_fn_80571A2C_00000F58
lbl_fn_80571A2C_00000E04:
    bl fn_80572454
    lwz r5, 0xac(r31)
    lwz r0, 0x6c(r31)
    cmpw r5, r0
    blt lbl_fn_80571A2C_00000E34
    lis r4, lbl_8075FFD0@ha
    addi r3, r1, 0xc8
    addi r4, r4, lbl_8075FFD0@l
    addi r4, r4, 0x70
    crclr 6
    bl sprintf
    b lbl_fn_80571A2C_00000E4C
lbl_fn_80571A2C_00000E34:
    lis r4, lbl_8075FFD0@ha
    addi r3, r1, 0xc8
    addi r4, r4, lbl_8075FFD0@l
    addi r4, r4, 0x7b
    crclr 6
    bl sprintf
lbl_fn_80571A2C_00000E4C:
    lwz r31, 0x48(r31)
    addi r3, r1, 0xc8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    b lbl_fn_80571A2C_00000F58
lbl_fn_80571A2C_00000E84:
    bl fn_80572454
    lwz r5, 0x68(r31)
    lis r4, lbl_8075FFD0@ha
    addi r4, r4, lbl_8075FFD0@l
    addi r3, r1, 0x88
    lwz r0, 0x38(r5)
    addi r4, r4, 0x8a
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0xc4(r31)
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r31, 0x68(r31)
    addi r3, r1, 0x88
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
    b lbl_fn_80571A2C_00000F58
lbl_fn_80571A2C_00000EF0:
    bl fn_80572454
    lwz r5, 0x68(r31)
    lis r4, lbl_8075FFD0@ha
    addi r4, r4, lbl_8075FFD0@l
    addi r3, r1, 0x48
    lwz r0, 0x38(r5)
    addi r4, r4, 0x8a
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0xc4(r31)
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r31, 0x68(r31)
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    addi r6, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl fn_804A53D4
lbl_fn_80571A2C_00000F58:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80571C68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0xbc(r3)
    stw r0, 0xc0(r3)
    stw r4, 0xbc(r3)
    beq lbl_fn_80571C68_00000FAC
    cmpwi r4, 0x4
    beq lbl_fn_80571C68_00001044
    cmpwi r4, 0x5
    beq lbl_fn_80571C68_00001090
    b lbl_fn_80571C68_000010A8
lbl_fn_80571C68_00000FAC:
    lwz r0, 0xb8(r3)
    li r4, 0x0
    stw r4, 0xc4(r3)
    cmpwi r0, 0x13a
    bne lbl_fn_80571C68_00001000
    lis r4, 0x89
    li r3, 0x0
    addi r4, r4, 0x54d8
    bl fn_80116FC0
    lwz r4, 0x68(r31)
    lis r5, lbl_8075FFD0@ha
    addi r5, r5, lbl_8075FFD0@l
    mr r31, r3
    addi r3, r5, 0x99
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    b lbl_fn_80571C68_000010A8
lbl_fn_80571C68_00001000:
    lwz r3, lbl_8087F1E4
    lwz r30, 0xdc4(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80571C68_00001014
    b lbl_fn_80571C68_00001018
lbl_fn_80571C68_00001014:
    la r30, lbl_808813D0
lbl_fn_80571C68_00001018:
    lwz r4, 0x68(r31)
    lis r3, lbl_8075FFD0@ha
    addi r3, r3, lbl_8075FFD0@l
    addi r3, r3, 0x99
    addi r31, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_801FEE08
    b lbl_fn_80571C68_000010A8
lbl_fn_80571C68_00001044:
    li r0, 0x0
    stw r0, 0xc4(r3)
    lwz r3, lbl_8087F1E4
    lwz r30, 0xdcc(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80571C68_00001060
    b lbl_fn_80571C68_00001064
lbl_fn_80571C68_00001060:
    la r30, lbl_808813D0
lbl_fn_80571C68_00001064:
    lwz r4, 0x68(r31)
    lis r3, lbl_8075FFD0@ha
    addi r3, r3, lbl_8075FFD0@l
    addi r3, r3, 0x99
    addi r31, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_801FEE08
    b lbl_fn_80571C68_000010A8
lbl_fn_80571C68_00001090:
    bl fn_8011770C
    lwz r3, lbl_8087F068
    cmpwi r3, 0x0
    beq lbl_fn_80571C68_000010A8
    li r0, 0x1
    stw r0, 0x4b0(r3)
lbl_fn_80571C68_000010A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80571DBC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r6, 0x1
    li r7, 0x3
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r4, 0x6c(r3)
    addi r3, r3, 0xac
    lwz r30, lbl_8087EF70
    addi r4, r4, 0x1
    mr r5, r4
    bl fn_804A436C
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80571DBC_00001138
    mr r3, r31
    li r4, 0x1
    bl fn_80571C68
    addi r3, r1, 0x20
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80571DBC_000012C8
lbl_fn_80571DBC_00001138:
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80571DBC_000012C8
    lwz r4, 0x6c(r31)
    mr r3, r31
    li r30, 0x0
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_fn_80571DBC_00001180
lbl_fn_80571DBC_00001168:
    lbz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80571DBC_00001178
    addi r30, r30, 0x1
lbl_fn_80571DBC_00001178:
    addi r3, r3, 0x8
    bdnz lbl_fn_80571DBC_00001168
lbl_fn_80571DBC_00001180:
    lwz r0, 0xac(r31)
    cmpw r0, r4
    blt lbl_fn_80571DBC_000011F0
    lwz r0, 0xa8(r31)
    cmpw r0, r30
    ble lbl_fn_80571DBC_000011A0
    cmpw r4, r30
    bgt lbl_fn_80571DBC_000011D4
lbl_fn_80571DBC_000011A0:
    mr r3, r31
    li r4, 0x3
    bl fn_80571C68
    addi r3, r1, 0x1c
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x68(r31)
    lfs f0, lbl_80888060
    stfs f0, 0x104(r3)
    b lbl_fn_80571DBC_000012C8
lbl_fn_80571DBC_000011D4:
    addi r3, r1, 0x18
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80571DBC_000012C8
lbl_fn_80571DBC_000011F0:
    slwi r0, r0, 3
    add r3, r31, r0
    lbz r0, 0x75(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80571DBC_00001220
    addi r3, r1, 0x14
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80571DBC_000012C8
lbl_fn_80571DBC_00001220:
    lbz r0, 0x74(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80571DBC_000012A8
    lwz r0, 0xa8(r31)
    cmpw r0, r30
    ble lbl_fn_80571DBC_00001240
    cmpw r4, r30
    bgt lbl_fn_80571DBC_0000125C
lbl_fn_80571DBC_00001240:
    addi r3, r1, 0x10
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80571DBC_000012C8
lbl_fn_80571DBC_0000125C:
    li r0, 0x1
    stb r0, 0x74(r3)
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0xa8(r31)
    addi r3, r30, 0x1
    cmpw r0, r3
    ble lbl_fn_80571DBC_00001298
    lwz r0, 0x6c(r31)
    cmpw r0, r3
    bgt lbl_fn_80571DBC_000012C8
lbl_fn_80571DBC_00001298:
    lwz r0, 0x6c(r31)
    stw r0, 0xac(r31)
    stw r0, 0xc4(r31)
    b lbl_fn_80571DBC_000012C8
lbl_fn_80571DBC_000012A8:
    li r0, 0x0
    stb r0, 0x74(r3)
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80571DBC_000012C8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80571FDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x2
    li r5, 0x2
    stw r0, 0x24(r1)
    li r6, 0x1
    li r7, 0x3
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0xc4
    lwz r31, lbl_8087EF70
    bl fn_804A436C
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80571FDC_00001360
    mr r3, r30
    li r4, 0x2
    bl fn_80571C68
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x48(r30)
    lfs f0, lbl_80888060
    stfs f0, 0x104(r3)
    b lbl_fn_80571FDC_00001484
lbl_fn_80571FDC_00001360:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80571FDC_00001484
    lwz r0, 0xc4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80571FDC_00001454
    li r6, 0x0
    li r4, 0x0
    li r5, 0x18
lbl_fn_80571FDC_00001390:
    lwz r0, 0x6c(r30)
    mr r3, r30
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80571FDC_000013D0
lbl_fn_80571FDC_000013A8:
    lwz r0, 0x70(r3)
    cmplw r6, r0
    bne lbl_fn_80571FDC_000013C8
    lbz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80571FDC_000013C8
    li r7, 0x1
    b lbl_fn_80571FDC_000013D0
lbl_fn_80571FDC_000013C8:
    addi r3, r3, 0x8
    bdnz lbl_fn_80571FDC_000013A8
lbl_fn_80571FDC_000013D0:
    cmpwi r7, 0x0
    beq lbl_fn_80571FDC_000013EC
    lwz r0, lbl_8087F4F0
    add r3, r0, r4
    addi r4, r4, 0x4
    stw r6, 0x64a0(r3)
    b lbl_fn_80571FDC_000013FC
lbl_fn_80571FDC_000013EC:
    lwz r0, lbl_8087F4F0
    add r3, r0, r5
    subi r5, r5, 0x4
    stw r6, 0x64a0(r3)
lbl_fn_80571FDC_000013FC:
    addi r6, r6, 0x1
    cmplwi r6, 0x7
    blt lbl_fn_80571FDC_00001390
    lbz r0, 0xb4(r30)
    li r3, 0x1
    stw r3, 0xb0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80571FDC_0000142C
    mr r3, r30
    li r4, 0x4
    bl fn_80571C68
    b lbl_fn_80571FDC_00001438
lbl_fn_80571FDC_0000142C:
    mr r3, r30
    li r4, 0x1
    bl fn_80571C68
lbl_fn_80571FDC_00001438:
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80571FDC_00001484
lbl_fn_80571FDC_00001454:
    mr r3, r30
    li r4, 0x2
    bl fn_80571C68
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x48(r30)
    lfs f0, lbl_80888060
    stfs f0, 0x104(r3)
lbl_fn_80571FDC_00001484:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80572198(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x2
    li r5, 0x2
    stw r0, 0x24(r1)
    li r6, 0x1
    li r7, 0x3
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0xc4
    lwz r31, lbl_8087EF70
    bl fn_804A436C
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80572198_00001510
    mr r3, r30
    li r4, 0x1
    bl fn_80571C68
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80572198_00001580
lbl_fn_80572198_00001510:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80572198_00001580
    lwz r0, 0xc4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80572198_0000155C
    mr r3, r30
    li r4, 0x5
    bl fn_80571C68
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80572198_00001580
lbl_fn_80572198_0000155C:
    mr r3, r30
    li r4, 0x1
    bl fn_80571C68
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80572198_00001580:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80572294(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x6c(r3)
    stw r0, 0xa8(r3)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80572294_000015E8
    lwz r31, 0x10d0(r3)
    li r4, 0x63
    bl fn_80370174
    mr r30, r3
lbl_fn_80572294_000015E8:
    mr r3, r31
    bl fn_80217D9C
    cmpwi r3, 0x0
    beq lbl_fn_80572294_00001700
    lwz r0, 0x6c(r29)
    slwi r0, r0, 3
    add r0, r29, r0
    addic. r4, r0, 0x70
    beq lbl_fn_80572294_00001620
    li r0, 0x0
    stw r0, 0x0(r4)
    li r0, 0x1
    stb r0, 0x4(r4)
    stb r0, 0x5(r4)
lbl_fn_80572294_00001620:
    lwz r4, 0x6c(r29)
    li r0, 0x2
    li r6, 0x1
    li r5, 0x0
    addi r4, r4, 0x1
    stw r4, 0x6c(r29)
    mtctr r0
lbl_fn_80572294_0000163C:
    add r4, r3, r6
    lbz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80572294_00001678
    lwz r0, 0x6c(r29)
    slwi r0, r0, 3
    add r0, r29, r0
    addic. r4, r0, 0x70
    beq lbl_fn_80572294_0000166C
    stw r6, 0x0(r4)
    stb r5, 0x4(r4)
    stb r5, 0x5(r4)
lbl_fn_80572294_0000166C:
    lwz r4, 0x6c(r29)
    addi r0, r4, 0x1
    stw r0, 0x6c(r29)
lbl_fn_80572294_00001678:
    addi r6, r6, 0x1
    add r4, r3, r6
    lbz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80572294_000016B8
    lwz r0, 0x6c(r29)
    slwi r0, r0, 3
    add r0, r29, r0
    addic. r4, r0, 0x70
    beq lbl_fn_80572294_000016AC
    stw r6, 0x0(r4)
    stb r5, 0x4(r4)
    stb r5, 0x5(r4)
lbl_fn_80572294_000016AC:
    lwz r4, 0x6c(r29)
    addi r0, r4, 0x1
    stw r0, 0x6c(r29)
lbl_fn_80572294_000016B8:
    addi r6, r6, 0x1
    add r4, r3, r6
    lbz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80572294_000016F8
    lwz r0, 0x6c(r29)
    slwi r0, r0, 3
    add r0, r29, r0
    addic. r4, r0, 0x70
    beq lbl_fn_80572294_000016EC
    stw r6, 0x0(r4)
    stb r5, 0x4(r4)
    stb r5, 0x5(r4)
lbl_fn_80572294_000016EC:
    lwz r4, 0x6c(r29)
    addi r0, r4, 0x1
    stw r0, 0x6c(r29)
lbl_fn_80572294_000016F8:
    addi r6, r6, 0x1
    bdnz lbl_fn_80572294_0000163C
lbl_fn_80572294_00001700:
    lwz r3, 0xb8(r29)
    mr r4, r31
    mr r5, r30
    bl fn_80216544
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_80572294_0000173C
    lbz r4, 0x1(r5)
    lbz r3, 0x0(r3)
    lbz r5, 0x2(r5)
    bl fn_8021771C
    cmpwi r3, 0x0
    beq lbl_fn_80572294_0000173C
    lwz r0, 0x54(r3)
    stw r0, 0xa8(r29)
lbl_fn_80572294_0000173C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80572454(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x170
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    stfd f28, 0x170(r1)
    psq_st f28, 0x178(r1), 0, 0
    bl _savegpr_22
    lwz r4, 0x48(r3)
    mr r27, r3
    mr r5, r27
    li r22, 0x0
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r0, 0x6c(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80572454_000017D0
lbl_fn_80572454_000017B8:
    lbz r0, 0x74(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80572454_000017C8
    addi r22, r22, 0x1
lbl_fn_80572454_000017C8:
    addi r5, r5, 0x8
    bdnz lbl_fn_80572454_000017B8
lbl_fn_80572454_000017D0:
    lis r24, lbl_8075FFD0@ha
    lwz r3, 0x48(r3)
    addi r24, r24, lbl_8075FFD0@l
    mr r5, r22
    addi r4, r24, 0xa3
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, 0x48(r27)
    addi r4, r24, 0xb0
    lwz r5, 0xa8(r27)
    li r6, 0x0
    bl fn_801F4CB4
    lwz r0, 0xa8(r27)
    cmpw r22, r0
    blt lbl_fn_80572454_00001834
    lwz r3, 0x48(r27)
    addi r4, r24, 0xbd
    lfs f1, lbl_80888064
    lfs f2, lbl_80888068
    lfs f3, lbl_8088806C
    bl fn_801F4AA0
    lwz r3, 0x48(r27)
    lfs f0, lbl_80888070
    stfs f0, 0x100(r3)
    b lbl_fn_80572454_00001858
lbl_fn_80572454_00001834:
    lfs f1, lbl_80888074
    addi r4, r24, 0xbd
    lwz r3, 0x48(r27)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lwz r3, 0x48(r27)
    lfs f0, lbl_80888078
    stfs f0, 0x100(r3)
lbl_fn_80572454_00001858:
    lfs f0, lbl_8088807C
    lis r3, lbl_8075FFB8@ha
    lis r4, lbl_8075FFD0@ha
    li r28, 0x0
    stfs f0, 0x24(r1)
    mr r29, r27
    lfd f28, lbl_8075FFB8@l(r3)
    mr r24, r28
    stfs f0, 0x28(r1)
    addi r30, r4, lbl_8075FFD0@l
    lfs f29, lbl_80888060
    li r26, 0x0
    stfs f0, 0x2c(r1)
    lis r25, 0x4330
    lfs f31, lbl_80888084
    stfs f0, 0x30(r1)
    lfs f30, lbl_80888080
    stfs f0, 0x34(r1)
lbl_fn_80572454_000018A0:
    lwz r0, 0x6c(r27)
    cmpw r28, r0
    bge lbl_fn_80572454_00001A60
    mr r5, r28
    addi r3, r1, 0x38
    addi r4, r30, 0xca
    crclr 6
    bl sprintf
    lwz r31, 0x48(r27)
    addi r3, r1, 0x38
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_801F4E8C
    lfs f4, 0x10(r1)
    addi r4, r30, 0xd5
    lfs f3, 0x14(r1)
    addi r5, r1, 0x24
    lfs f2, 0x18(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r3, 0x4c(r29)
    bl fn_801F6E78
    add r31, r27, r26
    lwz r3, 0x70(r31)
    bl fn_80219544
    bl fn_8020924C
    lwz r5, 0x4c(r29)
    mr r6, r3
    addi r4, r30, 0xde
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r3, 0x4c(r29)
    lwz r5, 0x8(r6)
    bl fn_801F837C
    lwz r3, lbl_8087F8A0
    lwz r4, 0x70(r31)
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_80572454_00001964
    addi r23, r3, 0x7d4
    b lbl_fn_80572454_00001978
lbl_fn_80572454_00001964:
    lwz r0, 0x70(r31)
    lwz r3, lbl_8087F4F0
    mulli r0, r0, 0x43c
    add r3, r3, r0
    addi r23, r3, 0x64ec
lbl_fn_80572454_00001978:
    stw r24, 0x8(r1)
    mr r4, r23
    addi r3, r1, 0x78
    li r6, 0x0
    lwz r5, 0x70(r31)
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80134800
    lwz r3, 0x4c(r29)
    addi r4, r30, 0xe6
    lwz r5, 0xf0(r1)
    li r6, 0x0
    bl fn_801F8598
    lwz r22, 0x1ac(r23)
    mr r3, r23
    bl fn_8012B028
    add r0, r22, r3
    stw r25, 0x138(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x13c(r1)
    lfd f0, 0x138(r1)
    fsubs f0, f0, f28
    fcmpo cr0, f29, f0
    ble lbl_fn_80572454_000019E8
    fmr f1, f29
    b lbl_fn_80572454_00001A0C
lbl_fn_80572454_000019E8:
    lwz r22, 0x1ac(r23)
    mr r3, r23
    bl fn_8012B028
    add r0, r22, r3
    stw r25, 0x138(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x13c(r1)
    lfd f0, 0x138(r1)
    fsubs f1, f0, f28
lbl_fn_80572454_00001A0C:
    xoris r0, r22, 0x8000
    stw r0, 0x13c(r1)
    lwz r0, 0xf0(r1)
    stw r25, 0x138(r1)
    cmpwi r0, 0x63
    lfd f0, 0x138(r1)
    fsubs f0, f0, f28
    fdivs f1, f0, f1
    blt lbl_fn_80572454_00001A34
    lfs f1, lbl_8088807C
lbl_fn_80572454_00001A34:
    lwz r3, 0x4c(r29)
    addi r4, r30, 0xec
    bl fn_801F6C80
    lbz r0, 0x74(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80572454_00001A58
    lwz r3, 0x4c(r29)
    stfs f30, 0x54(r3)
    b lbl_fn_80572454_00001A60
lbl_fn_80572454_00001A58:
    lwz r3, 0x4c(r29)
    stfs f31, 0x54(r3)
lbl_fn_80572454_00001A60:
    addi r28, r28, 0x1
    addi r26, r26, 0x8
    cmpwi r28, 0x7
    addi r29, r29, 0x4
    blt lbl_fn_80572454_000018A0
    addi r11, r1, 0x170
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    psq_l f28, 0x178(r1), 0, 0
    lfd f28, 0x170(r1)
    bl _restgpr_22
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
