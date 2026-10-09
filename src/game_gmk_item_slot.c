#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void SCGetLanguage(void);
extern void VIGetTvFormat(void);
extern void __register_global_object(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_8004A2CC(void);
extern void fn_8005DFC8(void);
extern void fn_8006BA8C(void);
extern void fn_8006BB6C(void);
extern void fn_80071D74(void);
extern void fn_80071E04(void);
extern void fn_80076760(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800928B0(void);
extern void fn_800A4228(void);
extern void fn_800A555C(void);
extern void fn_800BDB58(void);
extern void fn_800CF7DC(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D594C(void);
extern void fn_800DF0F0(void);
extern void fn_8010ED4C(void);
extern void fn_8010F018(void);
extern void fn_8010F30C(void);
extern void fn_8010F4BC(void);
extern void fn_801100A0(void);
extern void fn_801120B0(void);
extern void fn_80112174(void);
extern void fn_805706C4(void);
extern void fn_805714E0(void);
extern void fn_80571560(void);
extern void fn_805C3C70(void);
extern void fn_805C3D90(void);
extern void fn_805C3E00(void);
extern void fn_805C3E30(void);
extern void fn_805C3E70(void);
extern void fn_805C3EA0(void);
extern void fn_805C3ED0(void);
extern void fn_805C3F40(void);
extern void fn_805C3FA0(void);
extern void fn_805C3FB0(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F95A0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80617DA0(void);
extern void fn_80658240(void);
extern void fn_80660CF0(void);
extern void fn_806823B0(void);
extern void fn_8068A850(void);
extern void fn_80695D84(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 jumptable_8078F290[];
extern u8 lbl_807544C8[];
extern u8 lbl_807544E0[];
extern u8 lbl_80754518[];
extern u8 lbl_80754520[];
extern u8 lbl_8078F258[];
extern u8 lbl_8078F2B8[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8A38[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF68;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F018;
extern u32 lbl_8087F3CC;
extern u32 lbl_8087F3CD;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F9A0;
extern u32 lbl_80886A20;
extern u32 lbl_80886A24;
extern u32 lbl_80886A28;
extern u32 lbl_80886A2C;
extern u32 lbl_80886A30;
extern u32 lbl_80886A34;
extern u32 lbl_80886A38;
extern u32 lbl_80886A3C;
extern u32 lbl_80886A40;
extern u32 lbl_80886A44;
extern u32 lbl_80886A48;
extern u32 lbl_80886A4C;
extern u32 lbl_80886A50;
extern u32 lbl_80886A54;
extern u32 lbl_80886A58;
extern u32 lbl_80886A5C;
extern u32 lbl_80886A60;
extern u32 lbl_80886A64;
extern u32 lbl_80886A68;
extern u32 lbl_80886A6C;
extern u32 lbl_80886A70;
extern u32 lbl_80886A74;
extern u32 lbl_80886A78;
extern u32 lbl_80886A80;
extern u32 lbl_80886A84;
extern u32 lbl_80886A88;
extern u32 lbl_80886A8C;
extern u32 lbl_80886A90;
extern u32 lbl_80886A94;
extern u32 lbl_80886A98;
extern u32 lbl_80886A9C;
extern u32 lbl_80886AA0;
extern u32 lbl_80886AA4;

/* Function declarations */
void fn_80440184(void);
void fn_80440280(void);
void fn_80440360(void);
void fn_8044058C(void);
void fn_804405CC(void);
void fn_804405F8(void);
void fn_804406C4(void);
void fn_8044073C(void);
void fn_80440990(void);
void fn_80440994(void);
void fn_80440B24(void);
void fn_80440B2C(void);
void fn_80440DC0(void);
void fn_80440F64(void);
void fn_804410C0(void);
void fn_80441170(void);
void fn_804411DC(void);
void fn_804413D4(void);
void fn_80441590(void);
void fn_80441610(void);
void fn_8044187C(void);
void fn_80441918(void);

asm void fn_80440184(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0x0(r4)
    stwbrx r0, r0, r4
    slwi r5, r0, 24
    lfs f0, 0x4(r4)
    rlwimi r5, r0, 8, 24, 31
    stfs f0, 0xc(r1)
    rlwimi r5, r0, 24, 16, 23
    rlwimi r5, r0, 8, 8, 15
    lwz r0, 0xc(r1)
    addi r5, r4, 0x4
    stwbrx r0, r0, r5
    addi r5, r4, 0x10
    lfs f0, 0x10(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0x8
    lfs f0, 0x8(r4)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0x14
    lfs f0, 0x14(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0xc
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0x18
    lfs f0, 0x18(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r5
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80440184_000000F4
    li r0, 0x2
    mr r3, r4
    addi r5, r4, 0x1c
    mtctr r0
lbl_fn_80440184_000000B0:
    lwz r0, 0x1c(r3)
    addi r6, r5, 0x4
    stwbrx r0, r0, r5
    lwz r0, 0x20(r3)
    stwbrx r0, r0, r6
    addi r6, r5, 0x8
    lwz r0, 0x24(r3)
    stwbrx r0, r0, r6
    addi r6, r5, 0xc
    addi r5, r5, 0x10
    lwz r0, 0x28(r3)
    addi r3, r3, 0x10
    stwbrx r0, r0, r6
    bdnz lbl_fn_80440184_000000B0
    lwz r0, 0x3c(r4)
    addi r3, r4, 0x3c
    stwbrx r0, r0, r3
lbl_fn_80440184_000000F4:
    addi r1, r1, 0x10
    blr
}

asm void fn_80440280(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    li r0, 0x3
    stw r31, 0x2c(r1)
    li r31, 0x0
    b lbl_fn_80440280_000001C8
lbl_fn_80440280_00000110:
    lwz r6, 0x0(r4)
    addi r3, r4, 0x4
    stwbrx r6, r0, r4
    mr r7, r4
    addi r8, r4, 0x8
    addi r9, r4, 0x14
    lwz r6, 0x4(r4)
    addi r10, r4, 0x20
    addi r11, r4, 0x2c
    addi r12, r4, 0x38
    stwbrx r6, r0, r3
    mtctr r0
lbl_fn_80440280_00000140:
    lfs f0, 0x8(r7)
    stfs f0, 0x1c(r1)
    lwz r3, 0x1c(r1)
    stwbrx r3, r0, r8
    addi r8, r8, 0x4
    lfs f0, 0x14(r7)
    stfs f0, 0x18(r1)
    lwz r3, 0x18(r1)
    stwbrx r3, r0, r9
    addi r9, r9, 0x4
    lfs f0, 0x20(r7)
    stfs f0, 0x14(r1)
    lwz r3, 0x14(r1)
    stwbrx r3, r0, r10
    addi r10, r10, 0x4
    lfs f0, 0x2c(r7)
    stfs f0, 0x10(r1)
    lwz r3, 0x10(r1)
    stwbrx r3, r0, r11
    addi r11, r11, 0x4
    lfs f0, 0x38(r7)
    addi r7, r7, 0x4
    stfs f0, 0xc(r1)
    lwz r3, 0xc(r1)
    stwbrx r3, r0, r12
    addi r12, r12, 0x4
    bdnz lbl_fn_80440280_00000140
    lfs f0, 0x44(r4)
    addi r6, r4, 0x44
    stfs f0, 0x8(r1)
    addi r4, r4, 0x48
    addi r31, r31, 0x1
    lwz r3, 0x8(r1)
    stwbrx r3, r0, r6
lbl_fn_80440280_000001C8:
    cmplw r31, r5
    blt lbl_fn_80440280_00000110
    lwz r31, 0x2c(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_80440360(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    beq lbl_fn_80440360_000003F0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80440360_000002EC
    lwz r0, 0x0(r4)
    addi r5, r4, 0x4
    stwbrx r0, r0, r4
    lfs f0, 0x4(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0x10
    lfs f0, 0x10(r4)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0x8
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0x14
    lfs f0, 0x14(r4)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0xc
    lfs f0, 0xc(r4)
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stwbrx r0, r0, r5
    addi r5, r4, 0x18
    lfs f0, 0x18(r4)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stwbrx r0, r0, r5
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80440360_000002EC
    li r0, 0x2
    mr r3, r31
    addi r5, r4, 0x1c
    mtctr r0
lbl_fn_80440360_000002A8:
    lwz r0, 0x1c(r3)
    addi r6, r5, 0x4
    stwbrx r0, r0, r5
    lwz r0, 0x20(r3)
    stwbrx r0, r0, r6
    addi r6, r5, 0x8
    lwz r0, 0x24(r3)
    stwbrx r0, r0, r6
    addi r6, r5, 0xc
    addi r5, r5, 0x10
    lwz r0, 0x28(r3)
    addi r3, r3, 0x10
    stwbrx r0, r0, r6
    bdnz lbl_fn_80440360_000002A8
    lwz r0, 0x3c(r4)
    addi r3, r4, 0x3c
    stwbrx r0, r0, r3
lbl_fn_80440360_000002EC:
    mr r27, r31
    addi r26, r4, 0x1c
    li r23, 0x0
lbl_fn_80440360_000002F8:
    lwz r0, 0x1c(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80440360_00000388
    add. r29, r26, r0
    stw r29, 0x1c(r27)
    beq lbl_fn_80440360_00000388
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80440360_00000328
    mr r3, r30
    mr r4, r29
    bl fn_80440184
lbl_fn_80440360_00000328:
    mr r25, r29
    addi r24, r29, 0x1c
    li r28, 0x0
lbl_fn_80440360_00000334:
    lwz r0, 0x1c(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80440360_00000350
    add r4, r24, r0
    stw r4, 0x1c(r25)
    mr r3, r30
    bl fn_80440360
lbl_fn_80440360_00000350:
    addi r28, r28, 0x1
    addi r24, r24, 0x4
    cmpwi r28, 0x8
    addi r25, r25, 0x4
    blt lbl_fn_80440360_00000334
    lwz r0, 0x3c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80440360_00000388
    add r4, r29, r0
    mr r3, r30
    addi r4, r4, 0x3c
    stw r4, 0x3c(r29)
    lwz r5, 0x0(r29)
    bl fn_8044058C
lbl_fn_80440360_00000388:
    addi r23, r23, 0x1
    addi r26, r26, 0x4
    cmpwi r23, 0x8
    addi r27, r27, 0x4
    blt lbl_fn_80440360_000002F8
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80440360_000003F0
    add r0, r31, r0
    lwz r4, 0x0(r31)
    addic. r3, r0, 0x3c
    stw r3, 0x3c(r31)
    beq lbl_fn_80440360_000003F0
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_fn_80440360_000003F0
lbl_fn_80440360_000003C8:
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80440360_000003DC
    lwz r0, 0x0(r3)
    stwbrx r0, r0, r3
lbl_fn_80440360_000003DC:
    lwz r0, 0x0(r3)
    add r0, r3, r0
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_fn_80440360_000003C8
lbl_fn_80440360_000003F0:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8044058C(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    mtctr r5
    cmplwi r5, 0x0
    blelr
lbl_fn_8044058C_0000041C:
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8044058C_00000430
    lwz r0, 0x0(r4)
    stwbrx r0, r0, r4
lbl_fn_8044058C_00000430:
    lwz r0, 0x0(r4)
    add r0, r4, r0
    stw r0, 0x0(r4)
    addi r4, r4, 0x4
    bdnz lbl_fn_8044058C_0000041C
    blr
}

asm void fn_804405CC(void)
{
    nofralloc
    lbz r0, lbl_8087F3CC
    extsb. r0, r0
    bne lbl_fn_804405CC_0000045C
    li r0, 0x1
    stb r0, lbl_8087F3CC
lbl_fn_804405CC_0000045C:
    lbz r0, lbl_8087F3CD
    extsb. r0, r0
    bnelr
    li r0, 0x1
    stb r0, lbl_8087F3CD
    blr
}

asm void fn_804405F8(void)
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
    lwz r0, lbl_8087F4E8
    cmpwi r0, 0x0
    bne lbl_fn_804405F8_00000520
    lis r30, lbl_807544E0@ha
    li r3, 0xd4
    addi r5, r30, lbl_807544E0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_804405F8_0000051C
    lis r4, lbl_8078F258@ha
    li r31, 0x0
    addi r4, r4, lbl_8078F258@l
    stw r4, 0x0(r3)
    li r0, 0x1
    stw r31, 0x84(r3)
    stw r0, 0x88(r3)
    stw r31, 0x8c(r3)
    stw r0, 0x90(r3)
    stw r28, 0x94(r3)
    addi r3, r3, 0xa0
    bl fn_800D5738
    stw r31, 0xd0(r29)
    addi r3, r29, 0x4
    addi r4, r29, 0x98
    addi r5, r29, 0x9c
    bl fn_80440F64
    addi r4, r30, lbl_807544E0@l
    addi r3, r29, 0xa0
    addi r4, r4, 0x1
    bl fn_800D594C
lbl_fn_804405F8_0000051C:
    stw r29, lbl_8087F4E8
lbl_fn_804405F8_00000520:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804406C4(void)
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
    beq lbl_fn_804406C4_0000059C
    lis r5, lbl_8078F258@ha
    addi r4, r30, 0x98
    addi r5, r5, lbl_8078F258@l
    stw r5, 0x0(r3)
    addi r3, r3, 0x4
    addi r5, r30, 0x9c
    bl fn_804410C0
    addi r3, r30, 0xa0
    li r4, -0x1
    bl fn_800D5808
    cmpwi r31, 0x0
    ble lbl_fn_804406C4_0000059C
    mr r3, r30
    bl dtor_80084684
lbl_fn_804406C4_0000059C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044073C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8044073C_00000734
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x11
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8044073C_00000640
    lwz r3, lbl_8087EF70
    li r4, 0x1
    li r5, 0x11
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8044073C_00000640
    lwz r3, lbl_8087EF70
    li r4, 0x2
    li r5, 0x11
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_8044073C_00000640
    lwz r3, lbl_8087EF70
    li r4, 0x3
    li r5, 0x11
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8044073C_0000071C
lbl_fn_8044073C_00000640:
    lwz r0, 0x88(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8044073C_000006F4
    lwz r30, lbl_8087EF68
    addi r4, r1, 0x8
    li r29, 0x1
    mr r3, r30
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_8044073C_00000678
    lwz r0, 0x174(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_8044073C_00000678
    li r29, 0x0
lbl_fn_8044073C_00000678:
    cmpwi r29, 0x0
    bne lbl_fn_8044073C_000006F4
    li r0, 0x1
    stw r0, 0x84(r31)
    li r4, 0x1
    li r5, 0x1
    lwz r3, lbl_8087EFE8
    li r6, 0x9
    bl fn_800CF7DC
    lwz r3, lbl_8087EE90
    li r4, 0x1
    li r5, 0x1
    li r6, 0x8
    bl fn_8004A2CC
    addi r3, r31, 0x44
    bl fn_80441170
    lwz r3, lbl_8087F018
    li r4, 0x1
    bl fn_800DF0F0
    lwz r3, lbl_8087F018
    li r0, 0x0
    li r29, 0x0
    stw r0, 0x40e0(r3)
lbl_fn_8044073C_000006D4:
    mr r3, r29
    bl fn_80658240
    addi r29, r29, 0x1
    cmpwi r29, 0x4
    blt lbl_fn_8044073C_000006D4
    li r0, 0x0
    stw r0, 0x8c(r31)
    b lbl_fn_8044073C_0000071C
lbl_fn_8044073C_000006F4:
    lwz r0, 0x8c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8044073C_0000071C
    lwz r0, 0x90(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8044073C_0000071C
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x8c(r31)
    stw r0, 0xd0(r31)
lbl_fn_8044073C_0000071C:
    lwz r0, 0x8c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8044073C_000007F0
    mr r3, r31
    bl fn_80440994
    b lbl_fn_8044073C_000007F0
lbl_fn_8044073C_00000734:
    cmpwi r0, 0x1
    bne lbl_fn_8044073C_000007F0
    addi r3, r3, 0x44
    bl fn_804411DC
    cmpwi r3, 0x0
    blt lbl_fn_8044073C_000007DC
    cmpwi r3, 0x1
    beq lbl_fn_8044073C_00000760
    cmpwi r3, 0x2
    beq lbl_fn_8044073C_00000778
    b lbl_fn_8044073C_00000790
lbl_fn_8044073C_00000760:
    lwz r3, lbl_8087F9A0
    li r4, 0x1
    bl fn_80571560
    li r0, 0x2
    stw r0, 0x84(r31)
    b lbl_fn_8044073C_000007F0
lbl_fn_8044073C_00000778:
    lwz r3, lbl_8087F9A0
    li r4, 0x1
    bl fn_805714E0
    li r0, 0x2
    stw r0, 0x84(r31)
    b lbl_fn_8044073C_000007F0
lbl_fn_8044073C_00000790:
    lwz r3, lbl_8087EFE8
    li r4, 0x0
    li r5, 0x1
    li r6, 0x9
    bl fn_800CF7DC
    lwz r3, lbl_8087EE90
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_8004A2CC
    lwz r3, lbl_8087F018
    li r4, 0x0
    bl fn_800DF0F0
    lwz r3, lbl_8087F018
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x40e0(r3)
    stw r0, 0x84(r31)
    b lbl_fn_8044073C_000007F0
lbl_fn_8044073C_000007DC:
    lwz r3, lbl_8087EFB4
    mr r4, r31
    lfs f1, lbl_80886A20
    li r5, 0x13
    bl fn_800BDB58
lbl_fn_8044073C_000007F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80440990(void)
{
    nofralloc
    b fn_804413D4
}

asm void fn_80440994(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_80886A24
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0xd0(r3)
    stw r0, 0x8(r1)
    cmpwi r4, 0x8
    stw r0, 0x10(r1)
    bge lbl_fn_80440994_00000864
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r3, lbl_807544C8@ha
    lfs f0, lbl_80886A28
    lfd f2, lbl_807544C8@l(r3)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f1, f1, f0
    b lbl_fn_80440994_00000890
lbl_fn_80440994_00000864:
    cmpwi r4, 0x26
    ble lbl_fn_80440994_00000890
    subfic r0, r4, 0x2e
    lis r3, lbl_807544C8@ha
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, lbl_807544C8@l(r3)
    lfd f1, 0x10(r1)
    lfs f0, lbl_80886A28
    fsubs f1, f1, f2
    fmuls f1, f1, f0
lbl_fn_80440994_00000890:
    lfs f0, lbl_80886A2C
    fmuls f1, f0, f1
    bl fn_80695D84
    lwz r7, lbl_8087EEE0
    slwi r0, r3, 24
    oris r4, r0, 0xff
    lwz r0, 0x44(r7)
    ori r4, r4, 0xffff
    cmpwi r0, 0x0
    beq lbl_fn_80440994_000008C0
    lfs f8, lbl_80886A30
    b lbl_fn_80440994_000008C4
lbl_fn_80440994_000008C0:
    lfs f8, lbl_80886A24
lbl_fn_80440994_000008C4:
    lwz r5, 0x3c(r7)
    lis r6, lbl_807544C8@ha
    lhz r3, 0xe(r7)
    li r0, 0x13
    xoris r5, r5, 0x8000
    stw r5, 0xc(r1)
    xoris r3, r3, 0x8000
    lfd f6, lbl_807544C8@l(r6)
    stw r3, 0x14(r1)
    li r6, 0x1
    lhz r3, 0x10(r7)
    lwz r5, 0x40(r7)
    lfd f1, 0x8(r1)
    xoris r3, r3, 0x8000
    xoris r7, r5, 0x8000
    lfd f0, 0x10(r1)
    stw r7, 0xc(r1)
    fsubs f3, f1, f6
    fsubs f1, f0, f6
    lfs f4, lbl_80886A34
    stw r3, 0x14(r1)
    addi r5, r31, 0xa0
    lfd f2, 0x8(r1)
    fdivs f9, f3, f1
    lfd f0, 0x10(r1)
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_80886A38
    stw r0, 0xa0(r3)
    lfs f3, lbl_80886A3C
    fsubs f7, f2, f6
    lwz r3, lbl_8087EEB0
    fsubs f6, f0, f6
    fmuls f0, f8, f9
    fmr f5, f4
    fdivs f6, f7, f6
    fmuls f0, f6, f0
    fmr f2, f1
    fmuls f5, f5, f6
    fdivs f4, f4, f0
    bl fn_8005DFC8
    lwz r3, lbl_8087EEB0
    li r0, 0x12
    stw r0, 0xa0(r3)
    lwz r3, 0xd0(r31)
    addi r0, r3, 0x1
    stw r0, 0xd0(r31)
    cmpwi r0, 0x2e
    ble lbl_fn_80440994_0000098C
    li r0, 0x0
    stw r0, 0x8c(r31)
lbl_fn_80440994_0000098C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80440B24(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80440B2C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lwz r4, lbl_80886A40
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    bl strcpy
    bl SCGetLanguage
    clrlwi r0, r3, 24
    stw r0, 0x1c(r31)
    cmplwi r0, 0x9
    bgt lbl_fn_80440B2C_00000AD4
    lis r3, jumptable_8078F290@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078F290@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    addi r4, r4, 0xd
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    addi r4, r4, 0x1e
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    addi r4, r4, 0x2f
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    addi r4, r4, 0x40
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    addi r4, r4, 0x51
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    addi r4, r4, 0x62
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    addi r4, r4, 0x73
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
    lis r4, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    addi r4, r4, 0x84
    bl fn_806823B0
    b lbl_fn_80440B2C_00000AEC
lbl_fn_80440B2C_00000AD4:
    li r0, 0x0
    lis r4, lbl_80754520@ha
    stw r0, 0x1c(r31)
    addi r3, r1, 0x10
    addi r4, r4, lbl_80754520@l
    bl fn_806823B0
lbl_fn_80440B2C_00000AEC:
    li r29, 0x0
    stw r29, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006BA8C
    mr r28, r3
    bl fn_800827E0
    lis r30, lbl_80754520@ha
    lwz r4, 0x8(r1)
    addi r30, r30, lbl_80754520@l
    li r5, 0x20
    addi r7, r30, 0x95
    li r6, 0x1
    mr r8, r7
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x0(r31)
    mr r4, r28
    lwz r5, 0x8(r1)
    bl memcpy
    mr r3, r28
    li r4, 0x0
    bl fn_8006BB6C
    lwz r28, lbl_80886A40
    addi r3, r1, 0x10
    mr r4, r28
    bl strcpy
    addi r3, r1, 0x10
    addi r4, r30, 0x96
    bl fn_806823B0
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006BA8C
    stw r3, 0x4(r31)
    mr r4, r28
    addi r3, r1, 0x10
    bl strcpy
    addi r3, r1, 0x10
    addi r4, r30, 0xa5
    bl fn_806823B0
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006BA8C
    stw r3, 0x8(r31)
    mr r4, r28
    addi r3, r1, 0x10
    bl strcpy
    addi r3, r1, 0x10
    addi r4, r30, 0xaf
    bl fn_806823B0
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006BA8C
    stw r3, 0xc(r31)
    lis r3, fn_80440B24@ha
    lfs f0, lbl_80886A44
    addi r3, r3, fn_80440B24@l
    lwz r0, 0x8(r1)
    stw r0, 0x28(r31)
    stw r3, 0x14(r31)
    stw r29, 0x18(r31)
    stw r29, 0x20(r31)
    stfs f0, 0x34(r31)
    stfs f0, 0x38(r31)
    stfs f0, 0x30(r31)
    stw r29, 0x10(r31)
    stw r29, 0x2c(r31)
    bl fn_800827E0
    addi r0, r3, 0x8
    stw r0, 0x3c(r31)
    stw r29, 0x24(r31)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80440DC0(void)
{
    nofralloc
    andi. r5, r3, 0xc003
    cmpwi r5, 0x4002
    beq lbl_fn_80440DC0_00000D38
    bge lbl_fn_80440DC0_00000C74
    cmpwi r5, 0x3
    beq lbl_fn_80440DC0_00000CF8
    bge lbl_fn_80440DC0_00000C68
    cmpwi r5, 0x1
    beq lbl_fn_80440DC0_00000CA8
    bge lbl_fn_80440DC0_00000CBC
    b lbl_fn_80440DC0_00000D78
lbl_fn_80440DC0_00000C68:
    cmpwi r5, 0x4000
    beq lbl_fn_80440DC0_00000CD0
    b lbl_fn_80440DC0_00000D78
lbl_fn_80440DC0_00000C74:
    lis r3, 0x1
    subi r0, r3, 0x7fff
    cmpw r5, r0
    beq lbl_fn_80440DC0_00000D18
    bge lbl_fn_80440DC0_00000C98
    addi r0, r3, -0x8000
    cmpw r5, r0
    bge lbl_fn_80440DC0_00000CE4
    b lbl_fn_80440DC0_00000D78
lbl_fn_80440DC0_00000C98:
    subi r0, r3, 0x4000
    cmpw r5, r0
    beq lbl_fn_80440DC0_00000D58
    b lbl_fn_80440DC0_00000D78
lbl_fn_80440DC0_00000CA8:
    lfs f1, 0x4(r4)
    lfs f0, lbl_80886A48
    fsubs f0, f1, f0
    stfs f0, 0x4(r4)
    b lbl_fn_80440DC0_00000D80
lbl_fn_80440DC0_00000CBC:
    lfs f1, 0x0(r4)
    lfs f0, lbl_80886A48
    fsubs f0, f1, f0
    stfs f0, 0x0(r4)
    b lbl_fn_80440DC0_00000D80
lbl_fn_80440DC0_00000CD0:
    lfs f1, 0x4(r4)
    lfs f0, lbl_80886A48
    fadds f0, f1, f0
    stfs f0, 0x4(r4)
    b lbl_fn_80440DC0_00000D80
lbl_fn_80440DC0_00000CE4:
    lfs f1, 0x0(r4)
    lfs f0, lbl_80886A48
    fadds f0, f1, f0
    stfs f0, 0x0(r4)
    b lbl_fn_80440DC0_00000D80
lbl_fn_80440DC0_00000CF8:
    lfs f1, 0x4(r4)
    lfs f2, lbl_80886A4C
    lfs f0, 0x0(r4)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    stfs f1, 0x4(r4)
    stfs f0, 0x0(r4)
    b lbl_fn_80440DC0_00000D80
lbl_fn_80440DC0_00000D18:
    lfs f1, 0x4(r4)
    lfs f2, lbl_80886A4C
    lfs f0, 0x0(r4)
    fsubs f1, f1, f2
    fadds f0, f0, f2
    stfs f1, 0x4(r4)
    stfs f0, 0x0(r4)
    b lbl_fn_80440DC0_00000D80
lbl_fn_80440DC0_00000D38:
    lfs f1, 0x4(r4)
    lfs f2, lbl_80886A4C
    lfs f0, 0x0(r4)
    fadds f1, f1, f2
    fsubs f0, f0, f2
    stfs f1, 0x4(r4)
    stfs f0, 0x0(r4)
    b lbl_fn_80440DC0_00000D80
lbl_fn_80440DC0_00000D58:
    lfs f1, 0x4(r4)
    lfs f2, lbl_80886A4C
    lfs f0, 0x0(r4)
    fadds f1, f1, f2
    fadds f0, f0, f2
    stfs f1, 0x4(r4)
    stfs f0, 0x0(r4)
    b lbl_fn_80440DC0_00000D80
lbl_fn_80440DC0_00000D78:
    li r3, 0x0
    blr
lbl_fn_80440DC0_00000D80:
    lfs f0, 0x0(r4)
    lfs f1, lbl_80886A44
    fcmpo cr0, f0, f1
    ble lbl_fn_80440DC0_00000D94
    b lbl_fn_80440DC0_00000DA8
lbl_fn_80440DC0_00000D94:
    lfs f1, lbl_80886A50
    fcmpo cr0, f0, f1
    bge lbl_fn_80440DC0_00000DA4
    b lbl_fn_80440DC0_00000DA8
lbl_fn_80440DC0_00000DA4:
    fmr f1, f0
lbl_fn_80440DC0_00000DA8:
    lfs f0, 0x4(r4)
    lfs f2, lbl_80886A44
    stfs f1, 0x0(r4)
    fcmpo cr0, f0, f2
    ble lbl_fn_80440DC0_00000DC0
    b lbl_fn_80440DC0_00000DD4
lbl_fn_80440DC0_00000DC0:
    lfs f2, lbl_80886A50
    fcmpo cr0, f0, f2
    bge lbl_fn_80440DC0_00000DD0
    b lbl_fn_80440DC0_00000DD4
lbl_fn_80440DC0_00000DD0:
    fmr f2, f0
lbl_fn_80440DC0_00000DD4:
    stfs f2, 0x4(r4)
    li r3, 0x1
    blr
}

asm void fn_80440F64(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl VIGetTvFormat
    lwz r4, lbl_8087EEE0
    subi r0, r3, 0x1
    cntlzw r0, r0
    mr r3, r27
    lwz r30, 0x44(r4)
    srwi r31, r0, 5
    bl fn_80440B2C
    cmpwi r30, 0x0
    bne lbl_fn_80440F64_00000E38
    lfs f0, lbl_80886A44
    stfs f0, 0x34(r27)
    stfs f0, 0x38(r27)
    b lbl_fn_80440F64_00000E48
lbl_fn_80440F64_00000E38:
    lfs f1, lbl_80886A54
    lfs f0, lbl_80886A44
    stfs f1, 0x34(r27)
    stfs f0, 0x38(r27)
lbl_fn_80440F64_00000E48:
    cmpwi r31, 0x0
    beq lbl_fn_80440F64_00000E5C
    lfs f0, lbl_80886A58
    stfs f0, 0x30(r27)
    b lbl_fn_80440F64_00000E64
lbl_fn_80440F64_00000E5C:
    lfs f0, lbl_80886A5C
    stfs f0, 0x30(r27)
lbl_fn_80440F64_00000E64:
    mr r3, r27
    bl fn_805C3C70
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r4, lbl_80886A40
    addi r3, r1, 0x10
    bl strcpy
    lis r31, lbl_80754520@ha
    addi r3, r1, 0x10
    addi r31, r31, lbl_80754520@l
    addi r4, r31, 0xbb
    bl fn_806823B0
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006BA8C
    mr r30, r3
    bl fn_800827E0
    addi r7, r31, 0x95
    lwz r4, 0x8(r1)
    mr r8, r7
    li r5, 0x20
    li r6, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x0(r28)
    mr r4, r30
    lwz r5, 0x8(r1)
    bl memcpy
    mr r3, r30
    li r4, 0x0
    bl fn_8006BB6C
    bl fn_800827E0
    addi r7, r31, 0x95
    lis r31, 0x2
    mr r8, r7
    li r5, 0x20
    subi r4, r31, 0x7900
    li r6, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x0(r29)
    mr r4, r3
    subi r5, r31, 0x7900
    lwz r3, 0x0(r28)
    bl fn_805C3F40
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804410C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_805C3D90
    bl fn_805C3FA0
    lwz r31, 0x10(r28)
    cmpwi r31, 0x0
    beq lbl_fn_804410C0_00000F84
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
lbl_fn_804410C0_00000F84:
    bl fn_800827E0
    lwz r4, 0x0(r28)
    bl fn_80083AD4
    bl fn_800827E0
    lwz r4, 0x4(r28)
    bl fn_80083AD4
    lwz r3, 0x8(r28)
    li r4, 0x0
    bl fn_8006BB6C
    lwz r3, 0xc(r28)
    li r4, 0x0
    bl fn_8006BB6C
    bl fn_800827E0
    lwz r4, 0x0(r29)
    bl fn_80083AD4
    bl fn_800827E0
    lwz r4, 0x0(r30)
    bl fn_80083AD4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80441170(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805C3E00
    li r3, 0x1
    bl fn_805C3ED0
    lfs f0, lbl_80886A60
    li r0, 0x0
    stfs f0, 0x4(r31)
    stfs f0, 0x8(r31)
    stw r0, 0xc(r31)
    stfs f0, 0x14(r31)
    stfs f0, 0x18(r31)
    stw r0, 0x1c(r31)
    stfs f0, 0x24(r31)
    stfs f0, 0x28(r31)
    stw r0, 0x2c(r31)
    stfs f0, 0x34(r31)
    stfs f0, 0x38(r31)
    stw r0, 0x3c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804411DC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x30
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    bl _savegpr_27
    mr r27, r3
    bl fn_805C3FB0
    lfs f29, lbl_80886A44
    mr r30, r27
    lfs f30, lbl_80886A50
    li r28, 0x0
    lfs f28, lbl_80886A64
    li r29, 0x0
    lfs f31, lbl_80886A60
    li r31, 0x0
lbl_fn_804411DC_000010B4:
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_80660CF0
    addi r0, r3, 0x4
    lwz r4, 0x8(r1)
    cmplwi r0, 0x2
    stw r4, 0xc(r30)
    ble lbl_fn_804411DC_000010E4
    cmpwi r3, -0x7
    beq lbl_fn_804411DC_000010E4
    cmpwi r3, 0x0
    bne lbl_fn_804411DC_000011E4
lbl_fn_804411DC_000010E4:
    lwz r0, lbl_8087F018
    addi r4, r30, 0x4
    add r3, r0, r29
    stw r3, 0x0(r30)
    lwz r3, 0x60(r3)
    bl fn_80440DC0
    lwz r4, 0x0(r30)
    lfs f0, 0x6c(r4)
    lfs f1, 0x70(r4)
    fdivs f2, f0, f28
    fdivs f1, f1, f28
    fcmpo cr0, f2, f29
    ble lbl_fn_804411DC_00001120
    fmr f2, f29
    b lbl_fn_804411DC_0000112C
lbl_fn_804411DC_00001120:
    fcmpo cr0, f2, f30
    bge lbl_fn_804411DC_0000112C
    fmr f2, f30
lbl_fn_804411DC_0000112C:
    fcmpo cr0, f1, f29
    ble lbl_fn_804411DC_0000113C
    fmr f1, f29
    b lbl_fn_804411DC_00001148
lbl_fn_804411DC_0000113C:
    fcmpo cr0, f1, f30
    bge lbl_fn_804411DC_00001148
    fmr f1, f30
lbl_fn_804411DC_00001148:
    fcmpu cr0, f31, f2
    bne lbl_fn_804411DC_00001160
    fcmpu cr0, f31, f1
    bne lbl_fn_804411DC_00001160
    li r0, 0x0
    b lbl_fn_804411DC_000011B4
lbl_fn_804411DC_00001160:
    lfs f0, 0x4(r30)
    fadds f0, f0, f2
    fcmpo cr0, f0, f29
    ble lbl_fn_804411DC_00001178
    fmr f0, f29
    b lbl_fn_804411DC_00001184
lbl_fn_804411DC_00001178:
    fcmpo cr0, f0, f30
    bge lbl_fn_804411DC_00001184
    fmr f0, f30
lbl_fn_804411DC_00001184:
    stfs f0, 0x4(r30)
    lfs f0, 0x8(r30)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f29
    ble lbl_fn_804411DC_000011A0
    fmr f0, f29
    b lbl_fn_804411DC_000011AC
lbl_fn_804411DC_000011A0:
    fcmpo cr0, f0, f30
    bge lbl_fn_804411DC_000011AC
    fmr f0, f30
lbl_fn_804411DC_000011AC:
    stfs f0, 0x8(r30)
    li r0, 0x1
lbl_fn_804411DC_000011B4:
    or. r0, r3, r0
    bne lbl_fn_804411DC_000011E8
    lwz r3, 0x0(r30)
    lbz r0, 0x5e(r3)
    extsb. r0, r0
    ble lbl_fn_804411DC_000011E8
    lfs f0, 0x20(r3)
    stfs f0, 0x4(r30)
    lwz r3, 0x0(r30)
    lfs f0, 0x24(r3)
    stfs f0, 0x8(r30)
    b lbl_fn_804411DC_000011E8
lbl_fn_804411DC_000011E4:
    stw r31, 0x0(r30)
lbl_fn_804411DC_000011E8:
    addi r28, r28, 0x1
    addi r29, r29, 0xf00
    cmpwi r28, 0x4
    addi r30, r30, 0x10
    blt lbl_fn_804411DC_000010B4
    mr r3, r27
    bl fn_805C3E30
    cmpwi r3, 0x0
    blt lbl_fn_804411DC_00001214
    bl fn_805C3EA0
    b lbl_fn_804411DC_00001218
lbl_fn_804411DC_00001214:
    li r3, -0x1
lbl_fn_804411DC_00001218:
    addi r11, r1, 0x30
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804413D4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0xa4(r1)
    lis r0, 0x4330
    stw r31, 0x9c(r1)
    lwz r31, lbl_8087EEE0
    stw r0, 0x88(r1)
    stw r0, 0x90(r1)
    bl fn_80617DA0
    lwz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804413D4_000012B8
    lfs f11, lbl_80886A44
    addi r3, r1, 0x48
    lfs f10, lbl_80886A68
    fneg f9, f11
    lfs f0, lbl_80886A6C
    fmuls f1, f10, f11
    lfs f5, lbl_80886A60
    fmuls f4, f0, f11
    lfs f6, lbl_80886A70
    fmuls f2, f10, f9
    fmuls f3, f0, f9
    bl fn_805F95A0
    b lbl_fn_804413D4_000012E8
lbl_fn_804413D4_000012B8:
    lfs f11, lbl_80886A44
    addi r3, r1, 0x48
    lfs f10, lbl_80886A68
    fneg f9, f11
    lfs f0, lbl_80886A74
    fmuls f1, f10, f11
    lfs f5, lbl_80886A60
    fmuls f4, f0, f11
    lfs f6, lbl_80886A70
    fmuls f2, f10, f9
    fmuls f3, f0, f9
    bl fn_805F95A0
lbl_fn_804413D4_000012E8:
    mr r3, r31
    addi r4, r1, 0x48
    bl fn_80071D74
    bl fn_805C3E70
    mr r3, r31
    bl fn_80071E04
    lwz r0, 0x40(r31)
    lis r4, lbl_80754518@ha
    lwz r5, 0x3c(r31)
    addi r3, r1, 0x8
    xoris r0, r0, 0x8000
    stw r0, 0x8c(r1)
    xoris r0, r5, 0x8000
    lfs f1, lbl_80886A60
    stw r0, 0x94(r1)
    lfd f10, lbl_80754518@l(r4)
    fmr f3, f1
    lfd f9, 0x88(r1)
    fmr f5, f1
    lfd f0, 0x90(r1)
    fsubs f2, f9, f10
    lfs f6, lbl_80886A78
    fsubs f4, f0, f10
    bl fn_805F95A0
    addi r5, r1, 0x8
    addi r4, r1, 0x48
    psq_l f1, 0x0(r5), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f7, 0x30(r5), 0, 0
    psq_l f8, 0x38(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f7, 0x30(r4), 0, 0
    psq_st f8, 0x38(r4), 0, 0
    bl fn_80071D74
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    mr r3, r31
    li r4, 0x8
    li r5, 0x0
    bl fn_80076760
    mr r3, r31
    li r4, 0x9
    li r5, 0x7
    bl fn_80076760
    mr r3, r31
    li r4, 0xa
    li r5, 0x0
    bl fn_80076760
    mr r3, r31
    li r4, 0x4
    li r5, 0x4
    bl fn_80076760
    mr r3, r31
    li r4, 0x5
    li r5, 0x5
    bl fn_80076760
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80441590(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8010ED4C
    lfs f5, lbl_80886A80
    lis r5, lbl_8078F2B8@ha
    li r4, 0x0
    lfs f4, lbl_80886A84
    lfs f3, lbl_80886A88
    addi r5, r5, lbl_8078F2B8@l
    lfs f2, lbl_80886A8C
    li r0, -0x1
    lfs f1, lbl_80886A90
    mr r3, r31
    lfs f0, lbl_80886A94
    stw r5, 0x0(r31)
    stw r4, 0xa0(r31)
    stfs f5, 0xa4(r31)
    stfs f4, 0xa8(r31)
    stfs f3, 0xac(r31)
    stfs f2, 0xb0(r31)
    stfs f1, 0xb4(r31)
    stfs f0, 0xb8(r31)
    stw r4, 0xbc(r31)
    stw r0, 0xc0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80441610(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    li r11, 0x0
    stw r11, 0x84(r3)
    lwz r0, 0x20(r8)
    mr r26, r3
    stw r7, 0x88(r3)
    mr r27, r4
    lfs f1, 0x8(r8)
    cmpwi r0, 0x0
    stw r11, 0x8c(r3)
    mr r28, r5
    lwz r10, 0x0(r8)
    mr r29, r6
    lwz r11, 0x48(r7)
    mr r30, r7
    lfs f6, 0x4(r8)
    mr r31, r9
    lfs f5, 0xc(r8)
    li r7, -0x1
    lfs f4, 0x10(r8)
    lfs f3, 0x14(r8)
    lfs f0, 0x18(r8)
    lwz r8, 0x1c(r8)
    stw r11, 0x90(r3)
    stw r10, 0xa0(r3)
    stfs f6, 0xa4(r3)
    stfs f1, 0xa8(r3)
    stfs f5, 0xac(r3)
    stfs f4, 0xb0(r3)
    stfs f3, 0xb4(r3)
    stfs f0, 0xb8(r3)
    stw r8, 0xbc(r3)
    stw r0, 0xc0(r3)
    ble lbl_fn_80441610_00001528
    mr r7, r0
lbl_fn_80441610_00001528:
    mr r8, r31
    li r9, 0x0
    bl fn_8010F018
    lfs f4, lbl_80886A80
    stfs f4, 0xc4(r26)
    lwz r7, lbl_8087F430
    lwz r0, 0x5590(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80441610_000015F4
    lfs f3, lbl_80886A98
    li r3, 0x0
    lfs f0, lbl_80886A9C
    li r0, 0x2
    stfs f3, 0x34(r1)
    addi r5, r1, 0x50
    addi r6, r1, 0x5c
    addi r4, r1, 0x30
    stw r3, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r3, 0x44(r1)
    stfs f4, 0x48(r1)
    stfs f0, 0x4c(r1)
    stw r0, 0x30(r1)
    lfs f0, 0x0(r27)
    stfs f0, 0x34(r1)
    lwz r0, 0x4(r27)
    stw r0, 0x38(r1)
    lwz r0, 0x8(r27)
    stw r0, 0x3c(r1)
    lwz r0, 0xc(r27)
    stw r0, 0x40(r1)
    lwz r0, 0x10(r27)
    stw r0, 0x44(r1)
    lfs f0, 0x14(r27)
    stfs f0, 0x48(r1)
    lfs f0, 0x18(r27)
    stfs f0, 0x4c(r1)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r6), 0, 0
    lwz r0, 0x88(r26)
    stw r0, 0x68(r1)
    stw r3, 0x6c(r1)
    stw r26, 0x70(r1)
    lwz r3, 0x5590(r7)
    bl fn_805706C4
lbl_fn_80441610_000015F4:
    stw r30, 0x8(r1)
    addi r5, r1, 0x10
    lbz r0, lbl_8087EE74
    addi r6, r1, 0x1c
    lwz r4, 0xc(r27)
    addi r3, r26, 0xa0
    extsb. r0, r0
    lwz r0, 0x4(r4)
    stw r0, 0xc(r1)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    stfs f2, 0x18(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r6), 0, 0
    stw r31, 0x28(r1)
    stw r3, 0x2c(r1)
    bne lbl_fn_80441610_00001678
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r27, 0x1
    lis r5, lbl_807C8A38@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8A38@l
    stw r0, 0x8(r3)
    stw r27, 0xc(r3)
    bl __register_global_object
    stb r27, lbl_8087EE74
lbl_fn_80441610_00001678:
    lis r28, lbl_807C6BB8@ha
    addi r28, r28, lbl_807C6BB8@l
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80441610_000016E0
    li r29, 0x0
    li r27, 0x0
    b lbl_fn_80441610_000016D4
lbl_fn_80441610_00001698:
    lwz r0, 0x0(r28)
    add r3, r0, r27
    lwzx r0, r27, r0
    cmpwi r0, -0x1
    beq lbl_fn_80441610_000016B4
    cmpwi r0, 0xc
    bne lbl_fn_80441610_000016CC
lbl_fn_80441610_000016B4:
    lwz r12, 0x4(r3)
    mr r4, r26
    addi r5, r1, 0x8
    li r3, 0xc
    mtctr r12
    bctrl
lbl_fn_80441610_000016CC:
    addi r29, r29, 0x1
    addi r27, r27, 0x8
lbl_fn_80441610_000016D4:
    lwz r0, 0x4(r28)
    cmpw r29, r0
    blt lbl_fn_80441610_00001698
lbl_fn_80441610_000016E0:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8044187C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    extrwi r0, r0, 1, 29
    xori r31, r0, 0x1
    bl fn_8010F30C
    cmpwi r31, 0x0
    beq lbl_fn_8044187C_0000177C
    lwz r5, lbl_8087F430
    lwz r0, 0x5590(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8044187C_0000177C
    lfs f2, lbl_80886A98
    li r3, 0x0
    lfs f1, lbl_80886A80
    li r0, 0x3
    lfs f0, lbl_80886A9C
    addi r4, r1, 0x8
    stfs f2, 0xc(r1)
    stw r3, 0x10(r1)
    stw r3, 0x14(r1)
    stw r3, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r30, 0x48(r1)
    lwz r3, 0x5590(r5)
    bl fn_805706C4
lbl_fn_8044187C_0000177C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80441918(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lfs f7, lbl_80886A80
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    lfs f0, 0x94(r3)
    lwz r4, lbl_8087EFA8
    fcmpo cr0, f0, f7
    lfs f29, 0x3a4(r4)
    cror eq, gt, eq
    bne lbl_fn_80441918_00001818
    fsubs f0, f0, f29
    stfs f0, 0x94(r3)
    fcmpo cr0, f0, f7
    cror eq, lt, eq
    bne lbl_fn_80441918_00001C98
    lwz r12, 0x0(r3)
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80441918_00001C98
lbl_fn_80441918_00001818:
    lwz r4, 0x68(r3)
    lfs f6, 0x78(r3)
    lfs f0, 0x44(r4)
    fcmpo cr0, f6, f0
    cror eq, gt, eq
    bne lbl_fn_80441918_0000184C
    lwz r12, 0x0(r3)
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80441918_00001C98
lbl_fn_80441918_0000184C:
    lfs f4, 0x28(r3)
    lfs f3, 0x24(r3)
    fmuls f8, f4, f29
    lfs f0, 0x20(r3)
    fmuls f9, f3, f29
    lfs f2, 0x10(r3)
    fmuls f10, f0, f29
    lfs f5, 0x8(r3)
    lfs f4, 0xc(r3)
    fadds f3, f2, f8
    lfs f0, 0x80(r3)
    fadds f5, f5, f10
    psq_l f1, 0x8(r3), 0, 0
    fadds f4, f4, f9
    lwz r5, 0xa0(r3)
    fmadds f0, f0, f29, f6
    psq_st f1, 0x14(r3), 0, 0
    cmpwi r5, 0x0
    stfs f2, 0x1c(r3)
    stfs f10, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f5, 0x8(r3)
    stfs f4, 0xc(r3)
    stfs f3, 0x10(r3)
    stfs f0, 0x78(r3)
    bne lbl_fn_80441918_000018D4
    lwz r12, 0x0(r3)
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80441918_00001C98
lbl_fn_80441918_000018D4:
    lfs f0, 0xb4(r3)
    fcmpo cr0, f0, f7
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80441918_00001C38
    lfs f0, 0xb8(r3)
    fcmpo cr0, f0, f7
    ble lbl_fn_80441918_00001958
    psq_l f1, 0x20(r3), 0, 0
    addi r4, r1, 0x38
    lfs f2, 0x28(r3)
    mr r3, r4
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F98D0
    lfs f4, 0x80(r31)
    addi r3, r1, 0x44
    lfs f3, 0x40(r1)
    lfs f0, 0x3c(r1)
    fmuls f2, f3, f4
    lfs f3, 0x38(r1)
    fmuls f5, f0, f4
    lfs f0, 0xb8(r31)
    fmuls f3, f3, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f0, f29
    stfs f3, 0x44(r1)
    stfs f5, 0x48(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x20(r31), 0, 0
    stfs f2, 0x28(r31)
    stfs f0, 0xb8(r31)
    b lbl_fn_80441918_00001C00
lbl_fn_80441918_00001958:
    lfs f4, 0x5f8(r5)
    lfs f3, 0x604(r5)
    lfs f5, 0x5fc(r5)
    fadds f6, f4, f3
    lfs f0, 0x608(r5)
    lfs f4, 0x5f4(r5)
    fadds f5, f5, f0
    lfs f3, 0x600(r5)
    lfs f0, lbl_80886AA0
    fadds f3, f4, f3
    lwz r4, 0xbc(r3)
    fmuls f7, f5, f0
    fmuls f4, f6, f0
    cmpwi r4, 0x0
    fmuls f0, f3, f0
    stfs f6, 0x30(r1)
    stfs f3, 0x2c(r1)
    stfs f5, 0x34(r1)
    stfs f0, 0x80(r1)
    stfs f4, 0x84(r1)
    stfs f7, 0x88(r1)
    beq lbl_fn_80441918_00001A10
    addi r30, r5, 0xb0
    li r5, 0x0
    mr r3, r30
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80441918_000019D0
    li r5, 0x0
    b lbl_fn_80441918_000019DC
lbl_fn_80441918_000019D0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r5, r3, r0
lbl_fn_80441918_000019DC:
    cmpwi r5, 0x0
    beq lbl_fn_80441918_00001A10
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x20
    lfs f3, 0xc(r5)
    addi r3, r1, 0x80
    stfs f3, 0x20(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_80441918_00001A10:
    lfs f3, 0x88(r1)
    addi r3, r1, 0x74
    lfs f0, 0x10(r31)
    lfs f5, 0x84(r1)
    fsubs f6, f3, f0
    lfs f4, 0xc(r31)
    lfs f0, 0x8(r31)
    lfs f3, 0x80(r1)
    fsubs f4, f5, f4
    stfs f6, 0x7c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
    psq_l f1, 0x20(r31), 0, 0
    addi r30, r1, 0x68
    lfs f2, 0x28(r31)
    mr r3, r30
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9940
    fmr f31, f1
    mr r3, r30
    mr r4, r30
    bl fn_805F98D0
    mr r3, r30
    addi r4, r1, 0x74
    bl fn_805F9990
    lfs f0, 0xc4(r31)
    fmr f28, f1
    fmr f1, f0
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f28, f0
    cror eq, gt, eq
    bne lbl_fn_80441918_00001AF4
    lfs f4, 0x80(r31)
    addi r3, r1, 0x14
    lfs f3, 0x7c(r1)
    lfs f0, 0x78(r1)
    fmuls f2, f3, f4
    lfs f3, 0x74(r1)
    fmuls f5, f0, f4
    lfs f0, lbl_80886A80
    fmuls f3, f3, f4
    stfs f2, 0x1c(r1)
    stfs f3, 0x14(r1)
    stfs f5, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x20(r31), 0, 0
    stfs f2, 0x28(r31)
    stfs f0, 0xc4(r31)
    b lbl_fn_80441918_00001BBC
lbl_fn_80441918_00001AF4:
    mr r4, r30
    addi r3, r1, 0x74
    addi r5, r1, 0x5c
    bl fn_805F99B0
    lfs f3, lbl_80886A80
    li r0, 0x0
    lfs f0, 0x5c(r1)
    fcmpu cr0, f3, f0
    bne lbl_fn_80441918_00001B34
    lfs f0, 0x60(r1)
    fcmpu cr0, f3, f0
    bne lbl_fn_80441918_00001B34
    lfs f0, 0x64(r1)
    fcmpu cr0, f3, f0
    bne lbl_fn_80441918_00001B34
    li r0, 0x1
lbl_fn_80441918_00001B34:
    cmpwi r0, 0x0
    bne lbl_fn_80441918_00001B60
    lfs f0, 0xc4(r31)
    addi r3, r1, 0x90
    addi r4, r1, 0x5c
    fneg f1, f0
    bl fn_805F9050
    addi r4, r1, 0x68
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
lbl_fn_80441918_00001B60:
    lfs f4, 0x80(r31)
    addi r3, r1, 0x8
    lfs f0, 0x70(r1)
    lfs f3, 0x6c(r1)
    fmuls f2, f0, f4
    lfs f0, 0x68(r1)
    fmuls f5, f3, f4
    lfs f6, 0xb0(r31)
    fmuls f4, f0, f4
    lfs f3, lbl_80886A98
    lfs f0, 0xc4(r31)
    stfs f4, 0x8(r1)
    fmadds f0, f3, f6, f0
    stfs f5, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f6, f0
    stfs f2, 0x10(r1)
    psq_st f1, 0x20(r31), 0, 0
    stfs f2, 0x28(r31)
    bge lbl_fn_80441918_00001BB4
    b lbl_fn_80441918_00001BB8
lbl_fn_80441918_00001BB4:
    fmr f6, f0
lbl_fn_80441918_00001BB8:
    stfs f6, 0xc4(r31)
lbl_fn_80441918_00001BBC:
    lwz r0, 0x4(r31)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_80441918_00001C00
    lfs f0, lbl_80886AA4
    fmuls f0, f0, f31
    fcmpo cr0, f30, f0
    bge lbl_fn_80441918_00001C00
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80441918_00001C98
lbl_fn_80441918_00001C00:
    lfs f4, 0xb4(r31)
    lfs f3, 0xa4(r31)
    fsubs f5, f4, f29
    lfs f0, 0x80(r31)
    lwz r3, 0x68(r31)
    fmadds f4, f3, f29, f0
    stfs f5, 0xb4(r31)
    lfs f3, 0xac(r31)
    stfs f4, 0x80(r31)
    lfs f0, 0x4c(r3)
    fadds f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_80441918_00001C38
    stfs f0, 0x80(r31)
lbl_fn_80441918_00001C38:
    mr r3, r31
    bl fn_8010F4BC
    lwz r0, 0x4(r31)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    beq lbl_fn_80441918_00001C98
    lwz r0, 0x84(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80441918_00001C88
    lwz r3, 0x68(r31)
    lbz r0, 0x2(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80441918_00001C7C
    mr r3, r31
    bl fn_801120B0
    b lbl_fn_80441918_00001C98
lbl_fn_80441918_00001C7C:
    mr r3, r31
    bl fn_801100A0
    b lbl_fn_80441918_00001C98
lbl_fn_80441918_00001C88:
    cmpwi r0, 0x1
    bne lbl_fn_80441918_00001C98
    mr r3, r31
    bl fn_80112174
lbl_fn_80441918_00001C98:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}
