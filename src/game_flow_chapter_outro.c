#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void fn_8000D124(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_800A555C(void);
extern void fn_8012A190(void);
extern void fn_8012A1B8(void);
extern void fn_80139F2C(void);
extern void fn_8013C38C(void);
extern void fn_8013C3A8(void);
extern void fn_80147A00(void);
extern void fn_80370A78(void);
extern void fn_803CFC58(void);
extern void fn_804AE3BC(void);
extern void fn_804CF374(void);
extern void fn_804CF424(void);
extern void fn_804CF468(void);
extern void fn_804D1698(void);
extern void fn_804D5F10(void);
extern void fn_804D5F44(void);
extern void fn_804D619C(void);
extern void fn_804D64A8(void);
extern void fn_804D8110(void);
extern void fn_804D818C(void);
extern void fn_804DD1AC(void);
extern void fn_804E8094(void);
extern void fn_804E80A4(void);
extern void fn_804E80AC(void);
extern void fn_804E80BC(void);
extern void fn_804E80C4(void);
extern void fn_804E80CC(void);
extern void fn_804E81C8(void);
extern void fn_804E81D0(void);
extern void fn_804E8244(void);
extern void fn_804E824C(void);
extern void fn_804E82C0(void);
extern void fn_804E82C8(void);
extern void fn_804EB3D0(void);
extern void fn_804EB874(void);
extern void fn_80506530(void);
extern void fn_8050E098(void);
extern void fn_80680CF8(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);

/* External data declarations */
extern u8 jumptable_807911B4[];
extern u8 lbl_80790F78[];
extern u8 lbl_807C8AE8[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F430;
extern u32 lbl_8087F5D4;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F628;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887574;

/* Function declarations */
void fn_804E6510(void);
void fn_804E651C(void);
void fn_804E67A0(void);
void fn_804E6DD4(void);
void fn_804E7438(void);
void fn_804E762C(void);
void fn_804E7AC4(void);

asm void fn_804E6510(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 16
    blr
}

asm void fn_804E651C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E651C_0000005C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E651C_00000050
    li r0, 0x0
    b lbl_fn_804E651C_00000078
lbl_fn_804E651C_00000050:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E651C_00000078
lbl_fn_804E651C_0000005C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E651C_00000070
    li r3, 0x0
    b lbl_fn_804E651C_00000074
lbl_fn_804E651C_00000070:
    bl fn_806A8E40
lbl_fn_804E651C_00000074:
    clrlwi r0, r3, 24
lbl_fn_804E651C_00000078:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E651C_000000C0
lbl_fn_804E651C_00000090:
    lwz r0, 0x5e4(r30)
    add r31, r0, r3
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E651C_000000B8
    lbz r0, 0xcc(r31)
    cmplw r4, r0
    bne lbl_fn_804E651C_000000B8
    b lbl_fn_804E651C_000000C4
lbl_fn_804E651C_000000B8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E651C_00000090
lbl_fn_804E651C_000000C0:
    li r31, 0x0
lbl_fn_804E651C_000000C4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804E651C_000000DC
    li r4, 0xfb
    bl fn_80370A78
    b lbl_fn_804E651C_000000E0
lbl_fn_804E651C_000000DC:
    li r3, 0x0
lbl_fn_804E651C_000000E0:
    subi r0, r3, 0x3
    lis r4, 0x8889
    cntlzw r3, r0
    lwz r0, 0xd0(r31)
    rlwimi r0, r3, 7, 19, 19
    stw r0, 0xd0(r31)
    subi r0, r4, 0x7777
    lis r3, lbl_80790F78@ha
    lwz r4, 0x5cc(r30)
    addi r3, r3, lbl_80790F78@l
    mulhwu r0, r0, r4
    srwi r0, r0, 4
    mulli r0, r0, 0x1e
    subf r0, r0, r4
    slwi r0, r0, 2
    lwzx r29, r3, r0
    rlwinm r0, r29, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_804E651C_00000134
    mr r3, r30
    bl fn_804E7AC4
lbl_fn_804E651C_00000134:
    rlwinm r0, r29, 0, 29, 29
    cmpwi r0, 0x4
    bne lbl_fn_804E651C_00000148
    mr r3, r30
    bl fn_804E762C
lbl_fn_804E651C_00000148:
    rlwinm r0, r29, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_804E651C_0000015C
    mr r3, r30
    bl fn_804E6DD4
lbl_fn_804E651C_0000015C:
    lwz r3, lbl_8087F5D4
    cmpwi r3, 0x0
    beq lbl_fn_804E651C_00000274
    lwz r0, 0x94(r3)
    cmpwi r0, 0x4
    bne lbl_fn_804E651C_00000274
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_804E651C_00000274
    lwz r3, 0x12a4(r4)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_804E651C_00000274
    srwi. r0, r3, 31
    beq lbl_fn_804E651C_000001B4
    li r3, 0x0
    beq lbl_fn_804E651C_000001AC
    lwz r0, 0xc48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804E651C_000001AC
    li r3, 0x1
lbl_fn_804E651C_000001AC:
    cmpwi r3, 0x0
    bne lbl_fn_804E651C_00000274
lbl_fn_804E651C_000001B4:
    lwz r3, lbl_8087EF70
    li r29, -0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804E651C_000001E8
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E651C_00000254
    li r29, 0x0
    b lbl_fn_804E651C_00000254
lbl_fn_804E651C_000001E8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804E651C_00000218
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804E651C_00000254
    li r29, 0x0
    b lbl_fn_804E651C_00000254
lbl_fn_804E651C_00000218:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804E651C_00000238
    li r29, 0x1
    b lbl_fn_804E651C_00000254
lbl_fn_804E651C_00000238:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804E651C_00000254
    li r29, 0x2
lbl_fn_804E651C_00000254:
    cmplwi r29, 0x4
    bgt lbl_fn_804E651C_00000274
    lwz r0, lbl_8087F628
    mr r3, r30
    add r4, r0, r29
    lbz r4, 0xcd8(r4)
    extsb r4, r4
    bl fn_804E82C8
lbl_fn_804E651C_00000274:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804E67A0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    li r0, 0x1
    stmw r24, 0xd0(r1)
    mr r26, r3
    lwz r4, 0x540(r3)
    stw r0, 0x5ac(r3)
    cmplwi r4, 0x1
    ble lbl_fn_804E67A0_000002C4
    cmpwi r4, 0x2
    beq lbl_fn_804E67A0_000002CC
    b lbl_fn_804E67A0_000002D4
lbl_fn_804E67A0_000002C4:
    li r0, 0x9
    b lbl_fn_804E67A0_000002D8
lbl_fn_804E67A0_000002CC:
    li r0, 0x5
    b lbl_fn_804E67A0_000002D8
lbl_fn_804E67A0_000002D4:
    li r0, 0xa
lbl_fn_804E67A0_000002D8:
    lwz r5, 0x55c(r3)
    cmpw r5, r0
    blt lbl_fn_804E67A0_00000324
    cmplwi r4, 0x1
    ble lbl_fn_804E67A0_000002F8
    cmpwi r4, 0x2
    beq lbl_fn_804E67A0_00000300
    b lbl_fn_804E67A0_00000308
lbl_fn_804E67A0_000002F8:
    li r25, 0x9
    b lbl_fn_804E67A0_0000030C
lbl_fn_804E67A0_00000300:
    li r25, 0x5
    b lbl_fn_804E67A0_0000030C
lbl_fn_804E67A0_00000308:
    li r25, 0xa
lbl_fn_804E67A0_0000030C:
    bl fn_80680CF8
    divw r0, r3, r25
    mullw r0, r0, r25
    subf r0, r0, r3
    stw r0, 0x560(r26)
    b lbl_fn_804E67A0_00000328
lbl_fn_804E67A0_00000324:
    stw r5, 0x560(r3)
lbl_fn_804E67A0_00000328:
    li r0, 0x0
    stw r0, 0xa0(r1)
    li r29, 0x5
    stw r0, 0x74(r1)
    stw r0, 0x48(r1)
    lwz r0, 0x540(r26)
    cmpwi r0, 0x1
    beq lbl_fn_804E67A0_0000034C
    li r29, 0x6
lbl_fn_804E67A0_0000034C:
    li r4, 0x0
    mtctr r29
    cmplwi r29, 0x0
    ble lbl_fn_804E67A0_00000388
lbl_fn_804E67A0_0000035C:
    lwz r0, 0xa0(r1)
    addi r3, r1, 0xa4
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_804E67A0_00000374
    stw r4, 0x0(r3)
lbl_fn_804E67A0_00000374:
    lwz r3, 0xa0(r1)
    addi r4, r4, 0x1
    addi r0, r3, 0x1
    stw r0, 0xa0(r1)
    bdnz lbl_fn_804E67A0_0000035C
lbl_fn_804E67A0_00000388:
    addi r27, r1, 0xa4
    li r30, 0x0
    b lbl_fn_804E67A0_00000414
lbl_fn_804E67A0_00000394:
    lwz r25, 0xa0(r1)
    bl fn_80680CF8
    divwu r0, r3, r25
    lwz r4, 0x74(r1)
    addi r5, r1, 0x78
    slwi r4, r4, 2
    add. r5, r5, r4
    mullw r0, r0, r25
    subf r3, r0, r3
    slwi r0, r3, 2
    beq lbl_fn_804E67A0_000003C8
    lwzx r0, r27, r0
    stw r0, 0x0(r5)
lbl_fn_804E67A0_000003C8:
    slwi r0, r3, 2
    lwz r3, 0x74(r1)
    srawi r0, r0, 2
    addi r4, r1, 0xa0
    addze r5, r0
    addi r3, r3, 0x1
    slwi r0, r5, 2
    stw r3, 0x74(r1)
    add r4, r4, r0
    b lbl_fn_804E67A0_000003FC
lbl_fn_804E67A0_000003F0:
    lwz r0, 0x8(r4)
    addi r5, r5, 0x1
    stwu r0, 0x4(r4)
lbl_fn_804E67A0_000003FC:
    lwz r3, 0xa0(r1)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_804E67A0_000003F0
    stw r0, 0xa0(r1)
    addi r30, r30, 0x1
lbl_fn_804E67A0_00000414:
    cmplw r30, r29
    blt lbl_fn_804E67A0_00000394
    li r4, 0x0
    mtctr r29
    cmplwi r29, 0x0
    ble lbl_fn_804E67A0_00000458
lbl_fn_804E67A0_0000042C:
    lwz r0, 0xa0(r1)
    addi r3, r1, 0xa4
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_804E67A0_00000444
    stw r4, 0x0(r3)
lbl_fn_804E67A0_00000444:
    lwz r3, 0xa0(r1)
    addi r4, r4, 0x1
    addi r0, r3, 0x1
    stw r0, 0xa0(r1)
    bdnz lbl_fn_804E67A0_0000042C
lbl_fn_804E67A0_00000458:
    addi r27, r1, 0xa4
    li r30, 0x0
    b lbl_fn_804E67A0_000004E4
lbl_fn_804E67A0_00000464:
    lwz r25, 0xa0(r1)
    bl fn_80680CF8
    divwu r0, r3, r25
    lwz r4, 0x48(r1)
    addi r5, r1, 0x4c
    slwi r4, r4, 2
    add. r5, r5, r4
    mullw r0, r0, r25
    subf r3, r0, r3
    slwi r0, r3, 2
    beq lbl_fn_804E67A0_00000498
    lwzx r0, r27, r0
    stw r0, 0x0(r5)
lbl_fn_804E67A0_00000498:
    slwi r0, r3, 2
    lwz r3, 0x48(r1)
    srawi r0, r0, 2
    addi r4, r1, 0xa0
    addze r5, r0
    addi r3, r3, 0x1
    slwi r0, r5, 2
    stw r3, 0x48(r1)
    add r4, r4, r0
    b lbl_fn_804E67A0_000004CC
lbl_fn_804E67A0_000004C0:
    lwz r0, 0x8(r4)
    addi r5, r5, 0x1
    stwu r0, 0x4(r4)
lbl_fn_804E67A0_000004CC:
    lwz r3, 0xa0(r1)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_804E67A0_000004C0
    stw r0, 0xa0(r1)
    addi r30, r30, 0x1
lbl_fn_804E67A0_000004E4:
    cmplw r30, r29
    blt lbl_fn_804E67A0_00000464
    mr r29, r26
    li r24, 0x0
    li r25, 0x0
    li r28, 0x4
    li r27, 0x8
lbl_fn_804E67A0_00000500:
    stw r25, 0x58c(r29)
    mr r4, r24
    addi r3, r26, 0x69c
    bl fn_80506530
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_804E67A0_000006A0
    mr r4, r30
    li r31, 0x0
    li r5, 0x0
    mtctr r28
lbl_fn_804E67A0_0000052C:
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804E67A0_000005D8
    lwz r3, 0x8(r4)
    lwz r0, 0x84(r4)
    cmpwi r3, 0x0
    add r31, r31, r0
    beq lbl_fn_804E67A0_000005D8
    lwz r3, 0xc(r4)
    lwz r0, 0x88(r4)
    cmpwi r3, 0x0
    add r31, r31, r0
    beq lbl_fn_804E67A0_000005D8
    lwz r3, 0x10(r4)
    lwz r0, 0x8c(r4)
    cmpwi r3, 0x0
    add r31, r31, r0
    beq lbl_fn_804E67A0_000005D8
    lwz r3, 0x14(r4)
    lwz r0, 0x90(r4)
    cmpwi r3, 0x0
    add r31, r31, r0
    beq lbl_fn_804E67A0_000005D8
    lwz r3, 0x18(r4)
    lwz r0, 0x94(r4)
    cmpwi r3, 0x0
    add r31, r31, r0
    beq lbl_fn_804E67A0_000005D8
    lwz r3, 0x1c(r4)
    lwz r0, 0x98(r4)
    cmpwi r3, 0x0
    add r31, r31, r0
    beq lbl_fn_804E67A0_000005D8
    lwz r3, 0x20(r4)
    lwz r0, 0x9c(r4)
    cmpwi r3, 0x0
    add r31, r31, r0
    beq lbl_fn_804E67A0_000005D8
    lwz r0, 0xa0(r4)
    addi r4, r4, 0x20
    addi r5, r5, 0x7
    add r31, r31, r0
    bdnz lbl_fn_804E67A0_0000052C
lbl_fn_804E67A0_000005D8:
    cmpwi r31, 0x0
    ble lbl_fn_804E67A0_000006A0
    bl fn_80680CF8
    divw r0, r3, r31
    li r5, 0x0
    mullw r0, r0, r31
    subf r4, r0, r3
    mtctr r27
lbl_fn_804E67A0_000005F8:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804E67A0_000006A0
    lwz r3, 0x84(r30)
    cmpw r4, r3
    bge lbl_fn_804E67A0_00000618
    stw r5, 0x58c(r29)
    b lbl_fn_804E67A0_000006A0
lbl_fn_804E67A0_00000618:
    lwz r0, 0x8(r30)
    subf r4, r3, r4
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804E67A0_000006A0
    lwz r3, 0x88(r30)
    cmpw r4, r3
    bge lbl_fn_804E67A0_00000640
    stw r5, 0x58c(r29)
    b lbl_fn_804E67A0_000006A0
lbl_fn_804E67A0_00000640:
    lwz r0, 0xc(r30)
    subf r4, r3, r4
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804E67A0_000006A0
    lwz r3, 0x8c(r30)
    cmpw r4, r3
    bge lbl_fn_804E67A0_00000668
    stw r5, 0x58c(r29)
    b lbl_fn_804E67A0_000006A0
lbl_fn_804E67A0_00000668:
    lwz r0, 0x10(r30)
    subf r4, r3, r4
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804E67A0_000006A0
    lwz r3, 0x90(r30)
    cmpw r4, r3
    bge lbl_fn_804E67A0_00000690
    stw r5, 0x58c(r29)
    b lbl_fn_804E67A0_000006A0
lbl_fn_804E67A0_00000690:
    subf r4, r3, r4
    addi r30, r30, 0x10
    addi r5, r5, 0x1
    bdnz lbl_fn_804E67A0_000005F8
lbl_fn_804E67A0_000006A0:
    addi r24, r24, 0x1
    addi r29, r29, 0x4
    cmpwi r24, 0x3
    blt lbl_fn_804E67A0_00000500
    bl fn_80680CF8
    stw r3, 0x598(r26)
    mr r29, r26
    addi r31, r1, 0x74
    addi r25, r1, 0x48
    li r28, 0x0
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_804E67A0_000007FC
lbl_fn_804E67A0_000006D4:
    lwz r0, 0x5e4(r26)
    add r3, r0, r30
    lwz r3, 0xd0(r3)
    srwi r0, r3, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E67A0_00000758
    extrwi r0, r3, 4, 6
    cmplwi r0, 0x2
    bne lbl_fn_804E67A0_00000728
    lwz r0, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804E67A0_0000071C
    lwz r4, 0x74(r1)
    slwi r3, r4, 2
    subi r0, r4, 0x1
    lwzx r3, r31, r3
    stw r0, 0x74(r1)
    b lbl_fn_804E67A0_00000720
lbl_fn_804E67A0_0000071C:
    li r3, 0x0
lbl_fn_804E67A0_00000720:
    stw r3, 0x56c(r29)
    b lbl_fn_804E67A0_000007F0
lbl_fn_804E67A0_00000728:
    lwz r0, 0x48(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804E67A0_0000074C
    lwz r4, 0x48(r1)
    slwi r3, r4, 2
    subi r0, r4, 0x1
    lwzx r3, r25, r3
    stw r0, 0x48(r1)
    b lbl_fn_804E67A0_00000750
lbl_fn_804E67A0_0000074C:
    li r3, 0x0
lbl_fn_804E67A0_00000750:
    stw r3, 0x56c(r29)
    b lbl_fn_804E67A0_000007F0
lbl_fn_804E67A0_00000758:
    add r3, r26, r28
    addis r24, r3, 0x1
    lbz r4, -0x667c(r24)
    cmpwi r4, 0x0
    beq lbl_fn_804E67A0_000007F0
    mr r3, r26
    bl fn_804DD1AC
    cmpwi r3, 0x0
    beq lbl_fn_804E67A0_00000790
    lbz r4, -0x667c(r24)
    mr r3, r26
    bl fn_804DD1AC
    cmpwi r3, 0x2
    bne lbl_fn_804E67A0_000007C0
lbl_fn_804E67A0_00000790:
    lwz r0, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804E67A0_000007B4
    lwz r4, 0x74(r1)
    slwi r3, r4, 2
    subi r0, r4, 0x1
    lwzx r3, r31, r3
    stw r0, 0x74(r1)
    b lbl_fn_804E67A0_000007B8
lbl_fn_804E67A0_000007B4:
    li r3, 0x0
lbl_fn_804E67A0_000007B8:
    stw r3, 0x56c(r29)
    b lbl_fn_804E67A0_000007EC
lbl_fn_804E67A0_000007C0:
    lwz r0, 0x48(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804E67A0_000007E4
    lwz r4, 0x48(r1)
    slwi r3, r4, 2
    subi r0, r4, 0x1
    lwzx r3, r25, r3
    stw r0, 0x48(r1)
    b lbl_fn_804E67A0_000007E8
lbl_fn_804E67A0_000007E4:
    li r3, 0x0
lbl_fn_804E67A0_000007E8:
    stw r3, 0x56c(r29)
lbl_fn_804E67A0_000007EC:
    addi r28, r28, 0x1
lbl_fn_804E67A0_000007F0:
    addi r30, r30, 0xd5c
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_804E67A0_000007FC:
    lwz r0, 0x5e8(r26)
    cmplw r27, r0
    blt lbl_fn_804E67A0_000006D4
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1004
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804E67A0_00000844
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E67A0_00000844:
    li r3, 0x0
    li r0, 0x3e
    stw r3, lbl_8087F5FC
    addi r24, r1, 0xc
    addi r3, r24, 0xc
    addi r4, r26, 0x56c
    sth r0, 0x8(r1)
    li r5, 0x20
    lwz r0, 0x560(r26)
    stw r0, 0xc(r1)
    lwz r0, 0x564(r26)
    stw r0, 0x10(r1)
    lwz r0, 0x568(r26)
    stw r0, 0x14(r1)
    bl memcpy
    addi r3, r24, 0x2c
    addi r4, r26, 0x58c
    li r5, 0xc
    bl memcpy
    lwz r0, 0x598(r26)
    stw r0, 0x44(r1)
    bl fn_804AE3BC
    mr r6, r24
    li r4, -0x1
    li r5, 0x1004
    li r7, 0x1
    bl fn_8050E098
    lmw r24, 0xd0(r1)
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_804E6DD4(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x180
    bl _savegpr_14
    lwz r4, lbl_8087F628
    mr r30, r3
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E6DD4_00000910
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E6DD4_00000904
    li r0, 0x0
    b lbl_fn_804E6DD4_0000092C
lbl_fn_804E6DD4_00000904:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E6DD4_0000092C
lbl_fn_804E6DD4_00000910:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E6DD4_00000924
    li r3, 0x0
    b lbl_fn_804E6DD4_00000928
lbl_fn_804E6DD4_00000924:
    bl fn_806A8E40
lbl_fn_804E6DD4_00000928:
    clrlwi r0, r3, 24
lbl_fn_804E6DD4_0000092C:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E6DD4_00000974
lbl_fn_804E6DD4_00000944:
    lwz r0, 0x5e4(r30)
    add r15, r0, r3
    lwz r0, 0xd0(r15)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E6DD4_0000096C
    lbz r0, 0xcc(r15)
    cmplw r4, r0
    bne lbl_fn_804E6DD4_0000096C
    b lbl_fn_804E6DD4_00000978
lbl_fn_804E6DD4_0000096C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E6DD4_00000944
lbl_fn_804E6DD4_00000974:
    li r15, 0x0
lbl_fn_804E6DD4_00000978:
    lwz r5, lbl_8087F8A0
    li r4, 0x2
    lbz r0, lbl_8087F5F8
    li r3, 0x1015
    lwz r14, 0x48(r5)
    extsb. r0, r0
    sth r4, 0x28(r1)
    sth r3, 0x2a(r1)
    bne lbl_fn_804E6DD4_000009BC
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E6DD4_000009BC:
    lwz r5, lbl_8087F628
    li r3, 0x0
    li r0, 0xc
    stw r3, lbl_8087F5FC
    addis r4, r5, 0x1
    addi r16, r1, 0x2c
    sth r0, 0x28(r1)
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804E6DD4_00000A00
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E6DD4_000009F4
    b lbl_fn_804E6DD4_00000A18
lbl_fn_804E6DD4_000009F4:
    bl fn_806B0E30
    clrlwi r3, r3, 24
    b lbl_fn_804E6DD4_00000A18
lbl_fn_804E6DD4_00000A00:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E6DD4_00000A10
    b lbl_fn_804E6DD4_00000A14
lbl_fn_804E6DD4_00000A10:
    bl fn_806A8E40
lbl_fn_804E6DD4_00000A14:
    clrlwi r3, r3, 24
lbl_fn_804E6DD4_00000A18:
    stb r3, 0x35(r1)
    lbz r3, 0x34(r1)
    lfs f0, 0x7d8(r14)
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r0, 0x2c(r1)
    lwz r0, 0xdc(r15)
    sth r0, 0x30(r1)
    lwz r0, 0xe0(r15)
    stb r0, 0x32(r1)
    lwz r0, 0xe4(r15)
    stb r0, 0x33(r1)
    lwz r0, 0x7e0(r14)
    extrwi r0, r0, 1, 26
    xori r0, r0, 0x1
    rlwimi r3, r0, 7, 24, 24
    stb r3, 0x34(r1)
    lwz r0, 0xd0(r15)
    rlwimi r3, r0, 25, 25, 25
    stb r3, 0x34(r1)
    lwz r0, 0xd0(r15)
    rlwimi r3, r0, 25, 26, 26
    stb r3, 0x34(r1)
    bl fn_804AE3BC
    mr r6, r16
    li r4, -0x1
    li r5, 0x1015
    li r7, 0x0
    bl fn_8050E098
    addi r23, r1, 0x1c
    li r22, 0x0
    li r24, 0x0
    lis r18, fn_804D818C@ha
    lis r17, lbl_807C8AE8@ha
    li r16, 0x1
    li r20, 0x2
    li r19, 0x101c
    li r15, 0x0
    li r14, 0xc
    b lbl_fn_804E6DD4_00000C3C
lbl_fn_804E6DD4_00000ABC:
    lwz r0, 0x5e4(r30)
    add. r21, r0, r24
    beq lbl_fn_804E6DD4_00000AE4
    lbz r0, 0xcc(r21)
    cmplwi r0, 0xff
    beq lbl_fn_804E6DD4_00000AE4
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804E6DD4_00000AE4
    li r0, 0x1
    b lbl_fn_804E6DD4_00000AE8
lbl_fn_804E6DD4_00000AE4:
    li r0, 0x0
lbl_fn_804E6DD4_00000AE8:
    cmpwi r0, 0x0
    beq lbl_fn_804E6DD4_00000C34
    cmpwi r22, 0x0
    blt lbl_fn_804E6DD4_00000B04
    cmpw r22, r3
    bge lbl_fn_804E6DD4_00000B04
    b lbl_fn_804E6DD4_00000B08
lbl_fn_804E6DD4_00000B04:
    li r21, 0x0
lbl_fn_804E6DD4_00000B08:
    lwz r0, 0xd0(r21)
    srwi. r0, r0, 31
    beq lbl_fn_804E6DD4_00000C34
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E6DD4_00000B48
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E6DD4_00000B3C
    li r0, 0x0
    b lbl_fn_804E6DD4_00000B64
lbl_fn_804E6DD4_00000B3C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E6DD4_00000B64
lbl_fn_804E6DD4_00000B48:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E6DD4_00000B5C
    li r3, 0x0
    b lbl_fn_804E6DD4_00000B60
lbl_fn_804E6DD4_00000B5C:
    bl fn_806A8E40
lbl_fn_804E6DD4_00000B60:
    clrlwi r0, r3, 24
lbl_fn_804E6DD4_00000B64:
    lbz r3, 0xcc(r21)
    clrlwi r0, r0, 24
    clrlwi r3, r3, 28
    cmpw r3, r0
    bne lbl_fn_804E6DD4_00000C34
    lwz r3, 0x0(r21)
    cmpwi r3, 0x0
    beq lbl_fn_804E6DD4_00000C34
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804E6DD4_00000C34
    lbz r0, lbl_8087F5F8
    sth r20, 0x18(r1)
    extsb. r0, r0
    sth r19, 0x1a(r1)
    bne lbl_fn_804E6DD4_00000BBC
    addi r4, r18, fn_804D818C@l
    addi r5, r17, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r16, lbl_8087F5F8
lbl_fn_804E6DD4_00000BBC:
    stw r15, lbl_8087F5FC
    lbz r0, 0x24(r1)
    sth r14, 0x18(r1)
    lbz r3, 0xcc(r21)
    stb r3, 0x25(r1)
    lwz r3, 0x0(r21)
    lfs f0, 0x7d8(r3)
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r3, 0xf4(r1)
    stw r3, 0x1c(r1)
    lwz r3, 0xdc(r21)
    sth r3, 0x20(r1)
    lwz r3, 0xe0(r21)
    stb r3, 0x22(r1)
    lwz r3, 0xe4(r21)
    stb r3, 0x23(r1)
    lwz r3, 0x0(r21)
    lwz r3, 0x7e0(r3)
    extrwi r3, r3, 1, 26
    xori r3, r3, 0x1
    rlwimi r0, r3, 7, 24, 24
    rlwinm r0, r0, 0, 28, 26
    stb r0, 0x24(r1)
    bl fn_804AE3BC
    mr r6, r23
    li r4, -0x1
    li r5, 0x101c
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804E6DD4_00000C34:
    addi r22, r22, 0x1
    addi r24, r24, 0xd5c
lbl_fn_804E6DD4_00000C3C:
    lwz r3, 0x5e8(r30)
    cmpw r22, r3
    blt lbl_fn_804E6DD4_00000ABC
    li r31, 0x0
    li r29, 0x0
    b lbl_fn_804E6DD4_00000F04
lbl_fn_804E6DD4_00000C54:
    lwz r0, 0x5f0(r30)
    add r16, r0, r29
    lwz r0, 0xb0(r16)
    lwz r15, 0x74(r16)
    srwi. r3, r0, 31
    stw r15, 0x12c(r1)
    lwz r15, 0x78(r16)
    lwz r3, 0x6c(r16)
    stw r15, 0xf8(r1)
    lwz r15, 0x7c(r16)
    stw r15, 0xfc(r1)
    lwz r15, 0x80(r16)
    stw r3, 0xa4(r1)
    lwz r3, 0x12c(r1)
    stw r15, 0x100(r1)
    lwz r15, 0x84(r16)
    stw r3, 0xac(r1)
    lwz r3, 0xf8(r1)
    stw r15, 0x104(r1)
    lwz r15, 0x88(r16)
    stw r3, 0xb0(r1)
    lwz r3, 0xfc(r1)
    stw r15, 0x108(r1)
    lwz r15, 0x8c(r16)
    stw r3, 0xb4(r1)
    lwz r3, 0x100(r1)
    stw r15, 0x10c(r1)
    lwz r15, 0x90(r16)
    stw r3, 0xb8(r1)
    lwz r3, 0x104(r1)
    stw r15, 0x110(r1)
    lwz r15, 0x94(r16)
    stw r3, 0xbc(r1)
    lwz r3, 0x108(r1)
    stw r15, 0x114(r1)
    lwz r15, 0x98(r16)
    stw r3, 0xc0(r1)
    lwz r3, 0x10c(r1)
    stw r15, 0x118(r1)
    lwz r15, 0x9c(r16)
    stw r3, 0xc4(r1)
    lwz r3, 0x110(r1)
    stw r15, 0x11c(r1)
    lwz r15, 0xa0(r16)
    stw r3, 0xc8(r1)
    lwz r3, 0x114(r1)
    stw r15, 0x120(r1)
    lwz r15, 0xa4(r16)
    stw r3, 0xcc(r1)
    lwz r3, 0x118(r1)
    stw r15, 0x124(r1)
    lwz r15, 0xa8(r16)
    stw r3, 0xd0(r1)
    lwz r3, 0x11c(r1)
    stw r15, 0x128(r1)
    lwz r17, 0x0(r16)
    stw r3, 0xd4(r1)
    lwz r3, 0x120(r1)
    stw r3, 0xd8(r1)
    lwz r3, 0x124(r1)
    lwz r18, 0x4(r16)
    lwz r19, 0x8(r16)
    lwz r20, 0xc(r16)
    lwz r21, 0x10(r16)
    lwz r22, 0x14(r16)
    lwz r23, 0x18(r16)
    lwz r24, 0x1c(r16)
    lwz r25, 0x20(r16)
    lwz r26, 0x24(r16)
    lwz r27, 0x28(r16)
    lwz r28, 0x2c(r16)
    lwz r12, 0x30(r16)
    lwz r11, 0x34(r16)
    lwz r10, 0x38(r16)
    lfs f5, 0x3c(r16)
    lfs f4, 0x40(r16)
    lfs f3, 0x44(r16)
    lfs f2, 0x48(r16)
    lfs f1, 0x4c(r16)
    lfs f0, 0x50(r16)
    lwz r9, 0x54(r16)
    lwz r8, 0x58(r16)
    lwz r7, 0x5c(r16)
    lwz r6, 0x60(r16)
    lwz r5, 0x64(r16)
    lwz r4, 0x68(r16)
    lwz r14, 0x70(r16)
    lwz r15, 0xac(r16)
    stw r3, 0xdc(r1)
    lwz r3, 0x128(r1)
    stw r17, 0x38(r1)
    stw r18, 0x3c(r1)
    stw r19, 0x40(r1)
    stw r20, 0x44(r1)
    stw r21, 0x48(r1)
    stw r22, 0x4c(r1)
    stw r23, 0x50(r1)
    stw r24, 0x54(r1)
    stw r25, 0x58(r1)
    stw r26, 0x5c(r1)
    stw r27, 0x60(r1)
    stw r28, 0x64(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r10, 0x70(r1)
    stfs f5, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f2, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r8, 0x90(r1)
    stw r7, 0x94(r1)
    stw r6, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r14, 0xa8(r1)
    stw r3, 0xe0(r1)
    stw r15, 0xe4(r1)
    stw r0, 0xe8(r1)
    beq lbl_fn_804E6DD4_00000EFC
    cmpwi r17, 0x0
    beq lbl_fn_804E6DD4_00000EFC
    lwz r0, 0x38(r17)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_804E6DD4_00000E60
    lwz r0, 0x12a4(r17)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_804E6DD4_00000EFC
lbl_fn_804E6DD4_00000E60:
    lbz r3, lbl_8087F5F8
    li r0, 0x2
    sth r0, 0x8(r1)
    extsb. r0, r3
    li r0, 0x101c
    sth r0, 0xa(r1)
    bne lbl_fn_804E6DD4_00000E9C
    lis r3, fn_804D818C@ha
    addi r4, r3, fn_804D818C@l
    lis r3, lbl_807C8AE8@ha
    addi r5, r3, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E6DD4_00000E9C:
    li r0, 0x0
    stw r0, lbl_8087F5FC
    li r0, 0xc
    lwz r4, 0x38(r1)
    sth r0, 0x8(r1)
    lbz r0, 0x14(r1)
    stb r31, 0x15(r1)
    lfs f0, 0x7d8(r4)
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r3, 0xf4(r1)
    stw r3, 0xc(r1)
    lwz r3, 0x7e0(r4)
    extrwi r3, r3, 1, 26
    xori r3, r3, 0x1
    rlwimi r0, r3, 7, 24, 24
    ori r0, r0, 0x10
    stb r0, 0x14(r1)
    bl fn_804AE3BC
    addi r6, r1, 0xc
    li r4, -0x1
    li r5, 0x101c
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804E6DD4_00000EFC:
    addi r31, r31, 0x1
    addi r29, r29, 0xb4
lbl_fn_804E6DD4_00000F04:
    lwz r0, 0x5f4(r30)
    cmpw r31, r0
    blt lbl_fn_804E6DD4_00000C54
    addi r11, r1, 0x180
    bl _restgpr_14
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_804E7438(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_14
    lwz r15, 0x80(r4)
    stw r15, 0x34(r1)
    lwz r15, 0x84(r4)
    lwz r0, 0x78(r4)
    stw r15, 0x8(r1)
    lwz r15, 0x88(r4)
    stw r15, 0xc(r1)
    lwz r15, 0x8c(r4)
    stw r0, 0x78(r3)
    lwz r0, 0x34(r1)
    stw r15, 0x10(r1)
    lwz r15, 0x90(r4)
    stw r0, 0x80(r3)
    lwz r0, 0x8(r1)
    stw r15, 0x14(r1)
    lwz r15, 0x94(r4)
    stw r0, 0x84(r3)
    lwz r0, 0xc(r1)
    stw r15, 0x18(r1)
    lwz r15, 0x98(r4)
    stw r0, 0x88(r3)
    lwz r0, 0x10(r1)
    stw r15, 0x1c(r1)
    lwz r15, 0x9c(r4)
    stw r0, 0x8c(r3)
    lwz r0, 0x14(r1)
    stw r15, 0x20(r1)
    lwz r15, 0xa0(r4)
    stw r0, 0x90(r3)
    lwz r0, 0x18(r1)
    stw r15, 0x24(r1)
    lwz r15, 0xa4(r4)
    stw r0, 0x94(r3)
    lwz r0, 0x1c(r1)
    stw r15, 0x28(r1)
    lwz r15, 0xa8(r4)
    stw r0, 0x98(r3)
    lwz r0, 0x20(r1)
    stw r15, 0x2c(r1)
    lwz r15, 0xac(r4)
    stw r0, 0x9c(r3)
    lwz r0, 0x24(r1)
    stw r0, 0xa0(r3)
    lwz r0, 0x28(r1)
    lwz r16, 0x0(r4)
    lwz r17, 0x4(r4)
    lwz r18, 0x8(r4)
    lwz r19, 0xc(r4)
    lwz r20, 0x10(r4)
    lwz r21, 0x14(r4)
    lwz r22, 0x18(r4)
    lwz r23, 0x1c(r4)
    lwz r24, 0x20(r4)
    lwz r25, 0x24(r4)
    lwz r26, 0x28(r4)
    lwz r27, 0x2c(r4)
    lwz r28, 0x30(r4)
    lwz r29, 0x34(r4)
    lwz r30, 0x38(r4)
    lfs f5, 0x3c(r4)
    lfs f4, 0x40(r4)
    lfs f3, 0x44(r4)
    lfs f2, 0x48(r4)
    lfs f1, 0x4c(r4)
    lfs f0, 0x50(r4)
    lwz r31, 0x54(r4)
    lwz r12, 0x58(r4)
    lwz r11, 0x5c(r4)
    lwz r10, 0x60(r4)
    lwz r9, 0x64(r4)
    lwz r8, 0x68(r4)
    lwz r7, 0x6c(r4)
    lwz r6, 0x70(r4)
    lwz r5, 0x74(r4)
    lwz r14, 0x7c(r4)
    lwz r4, 0xb0(r4)
    stw r0, 0xa4(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0xa8(r3)
    mr r0, r15
    stw r15, 0x30(r1)
    stw r16, 0x0(r3)
    stw r17, 0x4(r3)
    stw r18, 0x8(r3)
    stw r19, 0xc(r3)
    stw r20, 0x10(r3)
    stw r21, 0x14(r3)
    stw r22, 0x18(r3)
    stw r23, 0x1c(r3)
    stw r24, 0x20(r3)
    stw r25, 0x24(r3)
    stw r26, 0x28(r3)
    stw r27, 0x2c(r3)
    stw r28, 0x30(r3)
    stw r29, 0x34(r3)
    stw r30, 0x38(r3)
    stfs f5, 0x3c(r3)
    stfs f4, 0x40(r3)
    stfs f3, 0x44(r3)
    stfs f2, 0x48(r3)
    stfs f1, 0x4c(r3)
    stfs f0, 0x50(r3)
    stw r31, 0x54(r3)
    stw r12, 0x58(r3)
    stw r11, 0x5c(r3)
    stw r10, 0x60(r3)
    stw r9, 0x64(r3)
    stw r8, 0x68(r3)
    stw r7, 0x6c(r3)
    stw r6, 0x70(r3)
    stw r5, 0x74(r3)
    stw r14, 0x7c(r3)
    stw r0, 0xac(r3)
    stw r4, 0xb0(r3)
    addi r11, r1, 0x80
    bl _restgpr_14
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804E762C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stmw r15, 0x8c(r1)
    mr r31, r3
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E762C_00001164
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E762C_00001158
    li r0, 0x0
    b lbl_fn_804E762C_00001180
lbl_fn_804E762C_00001158:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E762C_00001180
lbl_fn_804E762C_00001164:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E762C_00001178
    li r3, 0x0
    b lbl_fn_804E762C_0000117C
lbl_fn_804E762C_00001178:
    bl fn_806A8E40
lbl_fn_804E762C_0000117C:
    clrlwi r0, r3, 24
lbl_fn_804E762C_00001180:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E762C_000011C4
lbl_fn_804E762C_00001198:
    lwz r0, 0x5e4(r31)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E762C_000011BC
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    beq lbl_fn_804E762C_000011C4
lbl_fn_804E762C_000011BC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E762C_00001198
lbl_fn_804E762C_000011C4:
    lwz r5, lbl_8087F8A0
    li r4, 0x2
    lbz r0, lbl_8087F5F8
    li r3, 0x1014
    lwz r15, 0x48(r5)
    extsb. r0, r0
    sth r4, 0x40(r1)
    sth r3, 0x42(r1)
    bne lbl_fn_804E762C_00001208
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E762C_00001208:
    lwz r5, lbl_8087F628
    li r3, 0x0
    li r0, 0x17
    stw r3, lbl_8087F5FC
    addis r4, r5, 0x1
    addi r16, r1, 0x44
    sth r0, 0x40(r1)
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804E762C_0000124C
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E762C_00001240
    b lbl_fn_804E762C_00001264
lbl_fn_804E762C_00001240:
    bl fn_806B0E30
    clrlwi r3, r3, 24
    b lbl_fn_804E762C_00001264
lbl_fn_804E762C_0000124C:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E762C_0000125C
    b lbl_fn_804E762C_00001260
lbl_fn_804E762C_0000125C:
    bl fn_806A8E40
lbl_fn_804E762C_00001260:
    clrlwi r3, r3, 24
lbl_fn_804E762C_00001264:
    stb r3, 0x58(r1)
    mr r3, r16
    mr r4, r15
    bl fn_804CF468
    bl fn_804AE3BC
    mr r6, r16
    li r4, -0x1
    li r5, 0x1014
    li r7, 0x0
    bl fn_8050E098
    addi r22, r1, 0x28
    li r21, 0x0
    li r15, 0x0
    lis r23, fn_804D818C@ha
    lis r19, lbl_807C8AE8@ha
    li r18, 0x1
    li r25, 0x2
    li r24, 0x101a
    li r17, 0x0
    li r16, 0x17
    b lbl_fn_804E762C_00001400
lbl_fn_804E762C_000012B8:
    lwz r0, 0x5e4(r31)
    add. r20, r0, r15
    beq lbl_fn_804E762C_000012E0
    lbz r0, 0xcc(r20)
    cmplwi r0, 0xff
    beq lbl_fn_804E762C_000012E0
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804E762C_000012E0
    li r0, 0x1
    b lbl_fn_804E762C_000012E4
lbl_fn_804E762C_000012E0:
    li r0, 0x0
lbl_fn_804E762C_000012E4:
    cmpwi r0, 0x0
    beq lbl_fn_804E762C_000013F8
    cmpwi r21, 0x0
    blt lbl_fn_804E762C_00001300
    cmpw r21, r3
    bge lbl_fn_804E762C_00001300
    b lbl_fn_804E762C_00001304
lbl_fn_804E762C_00001300:
    li r20, 0x0
lbl_fn_804E762C_00001304:
    lwz r0, 0xd0(r20)
    srwi. r0, r0, 31
    beq lbl_fn_804E762C_000013F8
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E762C_00001344
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E762C_00001338
    li r0, 0x0
    b lbl_fn_804E762C_00001360
lbl_fn_804E762C_00001338:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E762C_00001360
lbl_fn_804E762C_00001344:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E762C_00001358
    li r3, 0x0
    b lbl_fn_804E762C_0000135C
lbl_fn_804E762C_00001358:
    bl fn_806A8E40
lbl_fn_804E762C_0000135C:
    clrlwi r0, r3, 24
lbl_fn_804E762C_00001360:
    lbz r3, 0xcc(r20)
    clrlwi r0, r0, 24
    clrlwi r3, r3, 28
    cmpw r3, r0
    bne lbl_fn_804E762C_000013F8
    lwz r3, 0x0(r20)
    cmpwi r3, 0x0
    beq lbl_fn_804E762C_000013F8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804E762C_000013F8
    lbz r0, lbl_8087F5F8
    sth r25, 0x24(r1)
    extsb. r0, r0
    sth r24, 0x26(r1)
    bne lbl_fn_804E762C_000013B8
    addi r4, r23, fn_804D818C@l
    addi r5, r19, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r18, lbl_8087F5F8
lbl_fn_804E762C_000013B8:
    stw r17, lbl_8087F5FC
    mr r3, r22
    sth r16, 0x24(r1)
    lbz r0, 0xcc(r20)
    stb r0, 0x3c(r1)
    lwz r4, 0x0(r20)
    bl fn_804CF468
    lbz r0, 0x3a(r1)
    rlwinm r0, r0, 0, 31, 29
    stb r0, 0x3a(r1)
    bl fn_804AE3BC
    mr r6, r22
    li r4, -0x1
    li r5, 0x101a
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804E762C_000013F8:
    addi r21, r21, 0x1
    addi r15, r15, 0xd5c
lbl_fn_804E762C_00001400:
    lwz r3, 0x5e8(r31)
    cmpw r21, r3
    blt lbl_fn_804E762C_000012B8
    addi r17, r1, 0x60
    addi r16, r1, 0xc
    li r19, 0x0
    li r15, 0x0
    lis r24, fn_804D818C@ha
    lis r25, lbl_807C8AE8@ha
    li r26, 0x1
    li r22, 0x2
    li r23, 0x101b
    li r27, 0x0
    li r28, 0x27
    lis r21, jumptable_807911B4@ha
    li r29, 0x101a
    li r30, 0x17
    b lbl_fn_804E762C_00001594
lbl_fn_804E762C_00001448:
    lwz r0, 0x5f0(r31)
    add r20, r0, r15
    lwz r0, 0xb0(r20)
    srwi. r0, r0, 31
    beq lbl_fn_804E762C_0000158C
    lwz r18, 0x0(r20)
    cmpwi r18, 0x0
    beq lbl_fn_804E762C_0000158C
    lwz r0, 0x38(r18)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_804E762C_00001484
    lwz r0, 0x12a4(r18)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_804E762C_0000158C
lbl_fn_804E762C_00001484:
    lwz r3, 0x146c(r18)
    subi r0, r3, 0x13
    cmplwi r0, 0x15
    bgt lbl_fn_804E762C_00001528
    addi r3, r21, jumptable_807911B4@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, lbl_8087F5F8
    sth r22, 0x5c(r1)
    extsb. r0, r0
    sth r23, 0x5e(r1)
    bne lbl_fn_804E762C_000014D0
    addi r4, r24, fn_804D818C@l
    addi r5, r25, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r26, lbl_8087F5F8
lbl_fn_804E762C_000014D0:
    stw r27, lbl_8087F5FC
    mr r3, r17
    sth r28, 0x5c(r1)
    stb r19, 0x74(r1)
    lwz r4, 0x0(r20)
    bl fn_804CF468
    lbz r0, 0x72(r1)
    mr r3, r18
    addi r4, r17, 0x15
    ori r0, r0, 0x2
    stb r0, 0x72(r1)
    lwz r12, 0x0(r18)
    lwz r12, 0x110(r12)
    mtctr r12
    bctrl
    bl fn_804AE3BC
    mr r6, r17
    li r4, -0x1
    li r5, 0x101b
    li r7, 0x0
    bl fn_8050E098
    b lbl_fn_804E762C_0000158C
lbl_fn_804E762C_00001528:
    lbz r0, lbl_8087F5F8
    sth r22, 0x8(r1)
    extsb. r0, r0
    sth r29, 0xa(r1)
    bne lbl_fn_804E762C_00001550
    addi r4, r24, fn_804D818C@l
    addi r5, r25, lbl_807C8AE8@l
    la r3, lbl_8087F5FC
    bl __register_global_object
    stb r26, lbl_8087F5F8
lbl_fn_804E762C_00001550:
    stw r27, lbl_8087F5FC
    mr r3, r16
    sth r30, 0x8(r1)
    stb r19, 0x20(r1)
    lwz r4, 0x0(r20)
    bl fn_804CF468
    lbz r0, 0x1e(r1)
    ori r0, r0, 0x2
    stb r0, 0x1e(r1)
    bl fn_804AE3BC
    mr r6, r16
    li r4, -0x1
    li r5, 0x101a
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804E762C_0000158C:
    addi r19, r19, 0x1
    addi r15, r15, 0xb4
lbl_fn_804E762C_00001594:
    lwz r0, 0x5f4(r31)
    cmpw r19, r0
    blt lbl_fn_804E762C_00001448
    lmw r15, 0x8c(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_804E7AC4(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x1e0
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    bl _savegpr_25
    mr r31, r3
    bl fn_804EB874
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r29, r3
    bl fn_8000DD0C
    bl fn_804CF424
    mr r30, r3
    mr r3, r29
    bl fn_8000DD0C
    mr r4, r30
    bl fn_80139F2C
    cmpwi r3, 0x0
    blt lbl_fn_804E7AC4_00001760
    addi r3, r1, 0xd0
    li r4, 0x1017
    bl fn_804E81D0
    addi r3, r1, 0xd0
    bl fn_804E8244
    mr r27, r3
    mr r3, r29
    bl fn_8013C38C
    mr r4, r3
    mr r3, r27
    bl fn_8000D124
    mr r3, r29
    li r4, 0x1
    bl fn_804E8094
    mr r28, r3
    mr r3, r29
    li r4, 0x0
    bl fn_804E8094
    mr r4, r3
    mr r5, r28
    addi r3, r1, 0x20
    bl fn_80013338
    addi r3, r27, 0xc
    addi r4, r1, 0x20
    bl fn_8000D124
    mr r3, r29
    bl fn_8013C3A8
    cmpwi r3, 0x0
    beq lbl_fn_804E7AC4_00001698
    mr r3, r29
    bl fn_804E80A4
    cmpwi r3, 0x3
    bge lbl_fn_804E7AC4_00001698
    lfs f1, lbl_80887574
    addi r3, r27, 0xc
    bl fn_8012A190
lbl_fn_804E7AC4_00001698:
    mr r3, r29
    bl fn_8012A1B8
    lfs f0, 0x4(r3)
    mr r3, r29
    stfs f0, 0x24(r27)
    li r4, 0x1
    bl fn_804E80AC
    fmr f31, f1
    mr r3, r29
    li r4, 0x0
    bl fn_804E80AC
    fsubs f1, f1, f31
    bl fn_800133B0
    stfs f1, 0x28(r27)
    mr r3, r29
    bl fn_804E80BC
    mulli r28, r3, 0x2c
    mr r3, r29
    bl fn_8000DD0C
    bl fn_80147A00
    add r4, r3, r28
    addi r3, r1, 0x44
    addi r4, r4, 0x4
    bl fn_8001047C
    mr r3, r29
    bl fn_804E80C4
    lfs f0, 0x4c(r1)
    addi r3, r27, 0x18
    addi r4, r1, 0x44
    fsubs f0, f0, f1
    stfs f0, 0x4c(r1)
    bl fn_804E80CC
    mr r3, r29
    bl fn_804E81C8
    mr r4, r3
    addi r3, r27, 0x1e
    bl fn_804E80CC
    mr r3, r29
    bl fn_8000DD0C
    mr r4, r3
    mr r5, r30
    addi r3, r27, 0x2c
    bl fn_804CF374
    bl fn_804D1698
    bl fn_804AE3BC
    mr r6, r27
    li r4, -0x1
    li r5, 0x1017
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804E7AC4_00001760:
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_804E7AC4_00001960
lbl_fn_804E7AC4_0000176C:
    mr r3, r31
    mr r4, r27
    bl fn_804EB3D0
    cmpwi r3, 0x0
    beq lbl_fn_804E7AC4_0000195C
    mr r3, r31
    mr r4, r27
    bl fn_804D5F10
    lwz r0, 0xd0(r3)
    mr r28, r3
    srwi. r0, r0, 31
    beq lbl_fn_804E7AC4_0000195C
    bl fn_804D1698
    bl fn_804D619C
    lbz r0, 0xcc(r28)
    clrlwi r3, r3, 24
    clrlwi r0, r0, 28
    cmpw r0, r3
    bne lbl_fn_804E7AC4_0000195C
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_804E7AC4_0000195C
    bl fn_803CFC58
    cmpwi r3, 0x0
    bne lbl_fn_804E7AC4_0000195C
    lwz r3, 0x0(r28)
    bl fn_8000DD0C
    bl fn_804CF424
    mr r26, r3
    lwz r3, 0x0(r28)
    bl fn_8000DD0C
    mr r4, r26
    bl fn_80139F2C
    cmpwi r3, 0x0
    blt lbl_fn_804E7AC4_0000195C
    addi r3, r1, 0x90
    li r4, 0x101e
    bl fn_804E824C
    addi r3, r1, 0x90
    bl fn_804E82C0
    mr r25, r3
    lwz r3, 0x0(r28)
    bl fn_8013C38C
    mr r4, r3
    mr r3, r25
    bl fn_8000D124
    lwz r3, 0x0(r28)
    li r4, 0x1
    bl fn_804E8094
    mr r30, r3
    lwz r3, 0x0(r28)
    li r4, 0x0
    bl fn_804E8094
    mr r4, r3
    mr r5, r30
    addi r3, r1, 0x14
    bl fn_80013338
    addi r3, r25, 0xc
    addi r4, r1, 0x14
    bl fn_8000D124
    lwz r3, 0x0(r28)
    bl fn_8013C3A8
    cmpwi r3, 0x0
    beq lbl_fn_804E7AC4_00001888
    lwz r3, 0x0(r28)
    bl fn_804E80A4
    cmpwi r3, 0x3
    bge lbl_fn_804E7AC4_00001888
    lfs f1, lbl_80887574
    addi r3, r25, 0xc
    bl fn_8012A190
lbl_fn_804E7AC4_00001888:
    lwz r3, 0x0(r28)
    bl fn_8012A1B8
    lfs f0, 0x4(r3)
    li r4, 0x1
    stfs f0, 0x24(r25)
    lwz r3, 0x0(r28)
    bl fn_804E80AC
    fmr f31, f1
    lwz r3, 0x0(r28)
    li r4, 0x0
    bl fn_804E80AC
    fsubs f1, f1, f31
    bl fn_800133B0
    stfs f1, 0x28(r25)
    lwz r3, 0x0(r28)
    bl fn_804E80BC
    mulli r30, r3, 0x2c
    lwz r3, 0x0(r28)
    bl fn_8000DD0C
    bl fn_80147A00
    add r4, r3, r30
    addi r3, r1, 0x38
    addi r4, r4, 0x4
    bl fn_8001047C
    lwz r3, 0x0(r28)
    bl fn_804E80C4
    lfs f0, 0x40(r1)
    addi r3, r25, 0x18
    addi r4, r1, 0x38
    fsubs f0, f0, f1
    stfs f0, 0x40(r1)
    bl fn_804E80CC
    lwz r3, 0x0(r28)
    bl fn_804E81C8
    mr r4, r3
    addi r3, r25, 0x1e
    bl fn_804E80CC
    lwz r3, 0x0(r28)
    bl fn_8000DD0C
    mr r4, r3
    mr r5, r26
    addi r3, r25, 0x31
    bl fn_804CF374
    lbz r0, 0xcc(r28)
    stw r0, 0x2c(r25)
    stb r29, 0x30(r25)
    bl fn_804D1698
    bl fn_804AE3BC
    mr r6, r25
    li r4, -0x1
    li r5, 0x101e
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804E7AC4_0000195C:
    addi r27, r27, 0x1
lbl_fn_804E7AC4_00001960:
    addi r3, r31, 0x5e4
    bl fn_804D5F44
    cmpw r27, r3
    blt lbl_fn_804E7AC4_0000176C
    li r25, 0x0
    li r30, 0x1
    b lbl_fn_804E7AC4_00001B54
lbl_fn_804E7AC4_0000197C:
    mr r4, r25
    addi r3, r31, 0x5f0
    bl fn_804D64A8
    mr r4, r3
    addi r3, r1, 0x10c
    bl fn_804E7438
    lwz r0, 0x1bc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804E7AC4_00001B50
    lwz r3, 0x10c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804E7AC4_00001B50
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_804E7AC4_000019C8
    lwz r3, 0x10c(r1)
    bl fn_804E6510
    cmpwi r3, 0x0
    beq lbl_fn_804E7AC4_00001B50
lbl_fn_804E7AC4_000019C8:
    lwz r3, 0x10c(r1)
    bl fn_8000DD0C
    bl fn_804CF424
    mr r26, r3
    lwz r3, 0x10c(r1)
    bl fn_8000DD0C
    mr r4, r26
    bl fn_80139F2C
    cmpwi r3, 0x0
    blt lbl_fn_804E7AC4_00001B50
    addi r3, r1, 0x50
    li r4, 0x101e
    bl fn_804E824C
    addi r3, r1, 0x50
    bl fn_804E82C0
    mr r27, r3
    lwz r3, 0x10c(r1)
    bl fn_8013C38C
    mr r4, r3
    mr r3, r27
    bl fn_8000D124
    lwz r3, 0x10c(r1)
    li r4, 0x1
    bl fn_804E8094
    mr r29, r3
    lwz r3, 0x10c(r1)
    li r4, 0x0
    bl fn_804E8094
    mr r4, r3
    mr r5, r29
    addi r3, r1, 0x8
    bl fn_80013338
    addi r3, r27, 0xc
    addi r4, r1, 0x8
    bl fn_8000D124
    lwz r3, 0x10c(r1)
    bl fn_8013C3A8
    cmpwi r3, 0x0
    beq lbl_fn_804E7AC4_00001A80
    lwz r3, 0x10c(r1)
    bl fn_804E80A4
    cmpwi r3, 0x3
    bge lbl_fn_804E7AC4_00001A80
    lfs f1, lbl_80887574
    addi r3, r27, 0xc
    bl fn_8012A190
lbl_fn_804E7AC4_00001A80:
    lwz r3, 0x10c(r1)
    bl fn_8012A1B8
    lfs f0, 0x4(r3)
    li r4, 0x1
    stfs f0, 0x24(r27)
    lwz r3, 0x10c(r1)
    bl fn_804E80AC
    fmr f31, f1
    lwz r3, 0x10c(r1)
    li r4, 0x0
    bl fn_804E80AC
    fsubs f1, f1, f31
    bl fn_800133B0
    stfs f1, 0x28(r27)
    lwz r3, 0x10c(r1)
    bl fn_804E80BC
    mulli r29, r3, 0x2c
    lwz r3, 0x10c(r1)
    bl fn_8000DD0C
    bl fn_80147A00
    add r4, r3, r29
    addi r3, r1, 0x2c
    addi r4, r4, 0x4
    bl fn_8001047C
    lwz r3, 0x10c(r1)
    bl fn_804E80C4
    lfs f0, 0x34(r1)
    addi r3, r27, 0x18
    addi r4, r1, 0x2c
    fsubs f0, f0, f1
    stfs f0, 0x34(r1)
    bl fn_804E80CC
    lwz r3, 0x10c(r1)
    bl fn_804E81C8
    mr r4, r3
    addi r3, r27, 0x1e
    bl fn_804E80CC
    lwz r3, 0x10c(r1)
    bl fn_8000DD0C
    mr r4, r3
    mr r5, r26
    addi r3, r27, 0x31
    bl fn_804CF374
    stw r25, 0x2c(r27)
    stb r30, 0x30(r27)
    bl fn_804D1698
    bl fn_804AE3BC
    mr r6, r27
    li r4, -0x1
    li r5, 0x101e
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804E7AC4_00001B50:
    addi r25, r25, 0x1
lbl_fn_804E7AC4_00001B54:
    addi r3, r31, 0x5f0
    bl fn_804D8110
    cmpw r25, r3
    blt lbl_fn_804E7AC4_0000197C
    addi r11, r1, 0x1e0
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    bl _restgpr_25
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}
