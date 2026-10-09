#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80011410(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_80017F18(void);
extern void fn_80018078(void);
extern void fn_80018240(void);
extern void fn_80018BAC(void);
extern void fn_8003F440(void);
extern void fn_80057A64(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800EC204(void);
extern void fn_800F52F0(void);
extern void fn_800F52F8(void);
extern void fn_800F72CC(void);
extern void fn_800F7F60(void);
extern void fn_800F7FD8(void);
extern void fn_800F7FF0(void);
extern void fn_80109950(void);
extern void fn_8010C948(void);
extern void fn_801125F8(void);
extern void fn_801162A0(void);
extern void fn_8011BF3C(void);
extern void fn_80121F00(void);
extern void fn_80122560(void);
extern void fn_801255C8(void);
extern void fn_80126214(void);
extern void fn_80127D8C(void);
extern void fn_80128818(void);
extern void fn_80128930(void);
extern void fn_80128A30(void);
extern void fn_80135338(void);
extern void fn_80135380(void);
extern void fn_801370B8(void);
extern void fn_80138E1C(void);
extern void fn_80139550(void);
extern void fn_80139ED0(void);
extern void fn_80139EF4(void);
extern void fn_80139F24(void);
extern void fn_80139F2C(void);
extern void fn_80139F3C(void);
extern void fn_80139F58(void);
extern void fn_8013A13C(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8013C394(void);
extern void fn_8013C3A8(void);
extern void fn_8013C3B4(void);
extern void fn_8013C3DC(void);
extern void fn_8013C3E4(void);
extern void fn_8013C3F4(void);
extern void fn_8013C3FC(void);
extern void fn_8013C404(void);
extern void fn_8013C41C(void);
extern void fn_8013C424(void);
extern void fn_8013C42C(void);
extern void fn_8013C434(void);
extern void fn_8013C43C(void);
extern void fn_8013C444(void);
extern void fn_8013C458(void);
extern void fn_8013C460(void);
extern void fn_8013C470(void);
extern void fn_8013C478(void);
extern void fn_8013C480(void);
extern void fn_8013C504(void);
extern void fn_8013C50C(void);
extern void fn_8013C514(void);
extern void fn_8013C53C(void);
extern void fn_8013C544(void);
extern void fn_8013C554(void);
extern void fn_8015061C(void);
extern void fn_80153B44(void);
extern void fn_80155790(void);
extern void fn_8015F568(void);
extern void fn_8016125C(void);
extern void fn_8016D74C(void);
extern void fn_8016F4D8(void);
extern void fn_8016F530(void);
extern void fn_8016F5EC(void);
extern void fn_80219E6C(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 jumptable_8077A7B0[];
extern u8 lbl_80737808[];
extern u8 lbl_80737A9C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_80881964;
extern u32 lbl_80881968;
extern u32 lbl_8088196C;
extern u32 lbl_80881974;
extern u32 lbl_80881978;
extern u32 lbl_80881980;
extern u32 lbl_80881984;
extern u32 lbl_80881994;
extern u32 lbl_8088199C;
extern u32 lbl_808819A8;
extern u32 lbl_808819B0;
extern u32 lbl_808819B4;
extern u32 lbl_808819B8;
extern u32 lbl_808819BC;
extern u32 lbl_808819C4;
extern u32 lbl_808819D0;
extern u32 lbl_808819D4;
extern u32 lbl_808819D8;
extern u32 lbl_808819DC;
extern u32 lbl_808819E0;
extern u32 lbl_808819E4;
extern u32 lbl_808819E8;
extern u32 lbl_808819EC;
extern u32 lbl_808819F0;
extern u32 lbl_808819F4;
extern u32 lbl_808819F8;
extern u32 lbl_808819FC;

/* Function declarations */
void fn_8013A4E8(void);

asm void fn_8013A4E8(void)
{
    nofralloc
    stwu r1, -0x410(r1)
    mflr r0
    stw r0, 0x414(r1)
    addi r11, r1, 0x3f0
    stfd f31, 0x400(r1)
    psq_st f31, 0x408(r1), 0, 0
    stfd f30, 0x3f0(r1)
    psq_st f30, 0x3f8(r1), 0, 0
    bl _savegpr_27
    lwz r7, 0xf0c(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r7, 0x0
    mr r30, r6
    addi r31, r3, 0xc64
    ble lbl_fn_8013A4E8_0000004C
    subi r0, r7, 0x1
    stw r0, 0xf0c(r3)
lbl_fn_8013A4E8_0000004C:
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8013A4E8_0000011C
    lhz r0, 0xd38(r3)
    extrwi. r0, r0, 1, 20
    beq lbl_fn_8013A4E8_0000011C
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_0000011C
    lwz r3, 0xd1c(r27)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x384
    addi r5, r27, 0x528
    bl fn_80013338
    lfs f0, lbl_8088196C
    stfs f0, 0x388(r1)
    lhz r0, 0xd38(r27)
    extrwi. r0, r0, 1, 21
    beq lbl_fn_8013A4E8_000000B4
    lfs f2, lbl_80881964
    b lbl_fn_8013A4E8_000000B8
lbl_fn_8013A4E8_000000B4:
    lfs f2, lbl_80881968
lbl_fn_8013A4E8_000000B8:
    lfs f1, lbl_8088196C
    addi r3, r1, 0x228
    fmr f3, f1
    bl fn_8000D114
    mr r28, r3
    addi r3, r1, 0x234
    addi r4, r1, 0x384
    bl fn_800F7FD8
    mr r5, r28
    addi r3, r1, 0x240
    addi r4, r1, 0x234
    bl fn_8013C394
    addi r3, r1, 0x384
    addi r4, r1, 0x240
    bl fn_8000D124
    mr r3, r27
    addi r4, r1, 0x384
    bl fn_80155790
    lhz r4, 0xd38(r27)
    li r3, 0x0
    extrwi r0, r4, 1, 21
    cntlzw r0, r0
    rlwimi r4, r0, 5, 21, 21
    sth r4, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E7C
lbl_fn_8013A4E8_0000011C:
    lha r0, 0xd3a(r27)
    cmplwi r0, 0x16
    bgt lbl_fn_8013A4E8_00001E78
    lis r3, jumptable_8077A7B0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8077A7B0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0xd14(r27)
    cmpwi r3, 0x0
    ble lbl_fn_8013A4E8_00000160
    lwz r0, 0xf0c(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_8013A4E8_00000160
    subi r0, r3, 0x1
    stw r0, 0xd14(r27)
lbl_fn_8013A4E8_00000160:
    lwz r0, 0xd14(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_8013A4E8_00000178
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
lbl_fn_8013A4E8_00000178:
    mr r3, r27
    bl fn_8013C3A8
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000214
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_000001D4
    mr r3, r27
    bl fn_80153B44
    cmpwi r3, 0x1
    beq lbl_fn_8013A4E8_000001D4
    lfs f0, lbl_80881964
    addi r3, r1, 0x210
    stfs f0, 0x0(r28)
    addi r4, r27, 0xc14
    bl fn_8013C3B4
    addi r3, r1, 0x21c
    addi r4, r1, 0x210
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x21c
    bl fn_8000D124
    b lbl_fn_8013A4E8_00000264
lbl_fn_8013A4E8_000001D4:
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8013A4E8_00000264
    mr r3, r27
    bl fn_80153B44
    cmpwi r3, 0x2
    beq lbl_fn_8013A4E8_00000264
    lfs f0, lbl_80881964
    addi r3, r1, 0x204
    stfs f0, 0x0(r28)
    addi r4, r27, 0xc14
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x204
    bl fn_8000D124
    b lbl_fn_8013A4E8_00000264
lbl_fn_8013A4E8_00000214:
    lwz r3, 0xd1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000264
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x378
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x378
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_808819C4
    fcmpo cr0, f1, f0
    blt lbl_fn_8013A4E8_00000264
    addi r3, r1, 0x1f8
    addi r4, r1, 0x378
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x1f8
    bl fn_8000D124
lbl_fn_8013A4E8_00000264:
    mr r3, r27
    bl fn_800F7F60
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    mr r3, r27
    li r4, 0x0
    bl fn_801370B8
    mr r28, r3
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpw r3, r28
    bne lbl_fn_8013A4E8_00001E78
    addi r3, r27, 0xb0
    bl fn_8013C3DC
    cmpwi r3, 0x1
    beq lbl_fn_8013A4E8_000002C0
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_8013C3E4
    lfs f0, lbl_808819D0
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000002C0:
    mr r3, r27
    li r4, 0x0
    bl fn_80138E1C
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000328
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fctiwz f0, f1
    lwz r0, 0xd14(r27)
    stfd f0, 0x3c0(r1)
    lwz r3, 0x3c4(r1)
    subf r0, r3, r0
    cmpwi r0, 0x1
    bge lbl_fn_8013A4E8_00000304
    li r0, 0x1
    b lbl_fn_8013A4E8_00000324
lbl_fn_8013A4E8_00000304:
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fctiwz f0, f1
    lwz r0, 0xd14(r27)
    stfd f0, 0x3c8(r1)
    lwz r3, 0x3cc(r1)
    subf r0, r3, r0
lbl_fn_8013A4E8_00000324:
    stw r0, 0xd14(r27)
lbl_fn_8013A4E8_00000328:
    li r3, 0x1
    b lbl_fn_8013A4E8_00001E7C
    mr r3, r31
    bl fn_80126214
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000354
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
lbl_fn_8013A4E8_00000354:
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x36c
    bl fn_8001047C
    addi r3, r1, 0x36c
    bl fn_8000D3A4
    frsp f2, f1
    lfs f0, lbl_808819B8
    stfs f1, 0x0(r28)
    fcmpo cr0, f2, f0
    ble lbl_fn_8013A4E8_000003C4
    addi r3, r1, 0x360
    addi r4, r1, 0x36c
    bl fn_800F7FD8
    addi r3, r1, 0x1ec
    addi r4, r1, 0x360
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x1ec
    bl fn_8000D124
    mr r3, r31
    bl fn_8013C3FC
    mr r4, r3
    lwz r3, 0x1394(r27)
    addi r5, r1, 0x360
    bl fn_80135338
    b lbl_fn_8013A4E8_000003D0
lbl_fn_8013A4E8_000003C4:
    mr r3, r29
    addi r4, r27, 0x534
    bl fn_8000D124
lbl_fn_8013A4E8_000003D0:
    mr r3, r27
    li r4, 0x20
    bl fn_8013C404
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_0000040C
    bl fn_800F52F8
    bl fn_8013C41C
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_0000040C
    mr r3, r31
    bl fn_8013C424
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_0000040C
    lwz r3, 0x1394(r27)
    bl fn_80135380
lbl_fn_8013A4E8_0000040C:
    mr r3, r27
    bl fn_800F7F60
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    mr r3, r27
    li r4, 0x1
    bl fn_80138E1C
    b lbl_fn_8013A4E8_00001E78
    lwz r3, 0xd1c(r27)
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_fn_8013A4E8_00000818
    lwz r4, 0xd14(r27)
    cmpwi r4, 0x0
    ble lbl_fn_8013A4E8_00000478
    subi r0, r4, 0x1
    stw r0, 0xd14(r27)
    beq cr1, lbl_fn_8013A4E8_00000478
    mr r4, r27
    bl fn_8015061C
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000478
    lwz r3, 0xd14(r27)
    subic. r0, r3, 0x2
    stw r0, 0xd14(r27)
    bge lbl_fn_8013A4E8_00000478
    li r0, 0x0
    stw r0, 0xd14(r27)
lbl_fn_8013A4E8_00000478:
    lwz r0, 0xd14(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_8013A4E8_000004F0
    lwz r0, 0x7e8(r27)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8013A4E8_0000049C
    li r0, 0x1
    b lbl_fn_8013A4E8_000004D0
lbl_fn_8013A4E8_0000049C:
    lwz r3, 0xd1c(r27)
    mr r4, r27
    bl fn_8016F4D8
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_000004B8
    li r0, 0x1
    b lbl_fn_8013A4E8_000004D0
lbl_fn_8013A4E8_000004B8:
    lwz r3, 0xd1c(r27)
    li r4, 0x0
    bl fn_8016F530
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8013A4E8_000004D0:
    cmpwi r0, 0x0
    beq lbl_fn_8013A4E8_000004F0
    lhz r0, 0xd38(r27)
    mr r4, r27
    lwz r3, 0xd1c(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    bl fn_8016F530
lbl_fn_8013A4E8_000004F0:
    lwz r3, 0xd1c(r27)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x354
    addi r5, r27, 0x528
    bl fn_80013338
    lfs f1, 0x358(r1)
    bl fn_80122560
    lfs f0, lbl_808819D4
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00000524
    lfs f0, lbl_8088196C
    stfs f0, 0x358(r1)
lbl_fn_8013A4E8_00000524:
    addi r3, r1, 0x354
    bl fn_8000D3A4
    stfs f1, 0x0(r28)
    lwz r3, 0xd1c(r27)
    bl fn_8013C42C
    lfs f0, lbl_80881974
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00000558
    lwz r3, 0xd1c(r27)
    bl fn_8013C42C
    lfs f0, 0x0(r28)
    fsubs f0, f0, f1
    stfs f0, 0x0(r28)
lbl_fn_8013A4E8_00000558:
    lfs f1, 0x0(r28)
    lfs f0, lbl_808819D8
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_00000580
    lfs f0, lbl_8088196C
    mr r3, r29
    stfs f0, 0x0(r28)
    addi r4, r27, 0x534
    bl fn_8000D124
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000580:
    addi r3, r1, 0x354
    bl fn_800F7FF0
    lwz r3, 0x64(r27)
    lfs f0, lbl_80881984
    lfs f1, 0x30(r3)
    lfs f2, 0x0(r28)
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8013A4E8_000005EC
    lfs f0, lbl_80881974
    fcmpo cr0, f2, f0
    bge lbl_fn_8013A4E8_000005BC
    lfs f0, lbl_80881964
    stfs f0, 0x0(r28)
    b lbl_fn_8013A4E8_000005C4
lbl_fn_8013A4E8_000005BC:
    lfs f0, lbl_808819B4
    stfs f0, 0x0(r28)
lbl_fn_8013A4E8_000005C4:
    addi r3, r1, 0x1d4
    addi r4, r1, 0x354
    bl fn_8013C3B4
    addi r3, r1, 0x1e0
    addi r4, r1, 0x1d4
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x1e0
    bl fn_8000D124
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000005EC:
    lfs f0, lbl_8088199C
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8013A4E8_00000620
    lfs f0, lbl_80881964
    addi r3, r1, 0x1c8
    stfs f0, 0x0(r28)
    addi r4, r1, 0x354
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x1c8
    bl fn_8000D124
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000620:
    bl fn_800F52F8
    bl fn_8013C434
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8013A4E8_000007F4
    bl fn_8013A194
    mr r4, r3
    mr r5, r27
    addi r3, r1, 0x348
    bl fn_80109950
    addi r3, r1, 0x33c
    addi r4, r1, 0x348
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x33c
    bl fn_8000D3A4
    frsp f2, f1
    lfs f0, lbl_8088196C
    stfs f1, 0x0(r28)
    fcmpo cr0, f2, f0
    ble lbl_fn_8013A4E8_0000067C
    addi r3, r1, 0x33c
    bl fn_800F7FF0
lbl_fn_8013A4E8_0000067C:
    lfs f1, 0x0(r28)
    lfs f0, lbl_80881978
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_000006CC
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_000006B4
    addi r3, r1, 0x1bc
    addi r4, r1, 0x33c
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x1bc
    bl fn_8000D124
    b lbl_fn_8013A4E8_000006C0
lbl_fn_8013A4E8_000006B4:
    mr r3, r29
    addi r4, r27, 0x534
    bl fn_8000D124
lbl_fn_8013A4E8_000006C0:
    lfs f0, lbl_8088196C
    stfs f0, 0x0(r28)
    b lbl_fn_8013A4E8_000007E0
lbl_fn_8013A4E8_000006CC:
    lfs f0, lbl_808819DC
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_000007C8
    lfs f0, lbl_808819E0
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_0000072C
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x32
    subf r0, r0, r3
    cmpwi r0, 0x1
    bge lbl_fn_8013A4E8_0000072C
    addi r3, r1, 0x1b0
    addi r4, r1, 0x33c
    bl fn_800F7FD8
    mr r3, r27
    addi r4, r1, 0x1b0
    bl fn_80155790
    b lbl_fn_8013A4E8_000007E0
lbl_fn_8013A4E8_0000072C:
    addi r3, r1, 0x1a4
    addi r4, r1, 0x354
    addi r5, r1, 0x33c
    bl fn_8013C394
    lfs f0, 0x1a8(r1)
    lfs f1, lbl_8088196C
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_8013A4E8_0000078C
    fmr f3, f1
    lfs f2, lbl_80881964
    addi r3, r1, 0x180
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x18c
    addi r5, r1, 0x354
    bl fn_8013C394
    addi r3, r1, 0x198
    addi r4, r1, 0x18c
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x198
    bl fn_8000D124
    b lbl_fn_8013A4E8_000007E0
lbl_fn_8013A4E8_0000078C:
    fmr f3, f1
    lfs f2, lbl_80881964
    addi r3, r1, 0x15c
    bl fn_8000D114
    mr r5, r3
    addi r3, r1, 0x168
    addi r4, r1, 0x354
    bl fn_8013C394
    addi r3, r1, 0x174
    addi r4, r1, 0x168
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x174
    bl fn_8000D124
    b lbl_fn_8013A4E8_000007E0
lbl_fn_8013A4E8_000007C8:
    addi r3, r1, 0x150
    addi r4, r1, 0x33c
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x150
    bl fn_8000D124
lbl_fn_8013A4E8_000007E0:
    bl fn_800F52F8
    bl fn_8013C434
    lfs f0, 0x18(r3)
    stfs f0, 0x0(r30)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000007F4:
    lfs f0, lbl_8088196C
    addi r3, r1, 0x144
    stfs f0, 0x0(r28)
    addi r4, r1, 0x354
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x144
    bl fn_8000D124
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000818:
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lwz r3, 0xd1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000A10
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_000008F0
    mr r3, r31
    bl fn_80126214
    lwz r3, 0x4(r31)
    lwz r0, 0x8(r31)
    cmpw r3, r0
    bne lbl_fn_8013A4E8_00000870
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80127D8C
    b lbl_fn_8013A4E8_000008D4
lbl_fn_8013A4E8_00000870:
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x330
    bl fn_8001047C
    addi r3, r1, 0x330
    bl fn_8000D3A4
    frsp f2, f1
    lfs f0, lbl_808819B8
    stfs f1, 0x0(r28)
    fcmpo cr0, f2, f0
    ble lbl_fn_8013A4E8_000008C8
    addi r3, r1, 0x12c
    addi r4, r1, 0x330
    bl fn_800F7FD8
    addi r3, r1, 0x138
    addi r4, r1, 0x12c
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x138
    bl fn_8000D124
    b lbl_fn_8013A4E8_000008D4
lbl_fn_8013A4E8_000008C8:
    mr r3, r29
    addi r4, r27, 0x534
    bl fn_8000D124
lbl_fn_8013A4E8_000008D4:
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    li r0, 0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000008F0:
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_000009E8
    lwz r6, 0xd40(r27)
    addi r3, r1, 0x120
    addi r4, r27, 0xc58
    li r5, 0x0
    addi r0, r6, 0x1
    stw r0, 0xd40(r27)
    bl fn_8011BF3C
    addi r3, r1, 0x324
    addi r4, r1, 0x120
    addi r5, r27, 0x528
    bl fn_80013338
    lfs f1, 0x328(r1)
    bl fn_80122560
    lfs f0, lbl_808819D4
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00000940
    lfs f0, lbl_8088196C
    stfs f0, 0x328(r1)
lbl_fn_8013A4E8_00000940:
    addi r3, r1, 0x324
    bl fn_8000D3A4
    stfs f1, 0x0(r28)
    lwz r3, 0xd1c(r27)
    bl fn_8013C42C
    lfs f0, 0x0(r28)
    mr r3, r27
    fsubs f0, f0, f1
    stfs f0, 0x0(r28)
    bl fn_800F52F0
    lfs f1, 0x110(r3)
    lfs f0, 0x0(r28)
    fcmpo cr0, f0, f1
    ble lbl_fn_8013A4E8_00000994
    addi r3, r1, 0x114
    addi r4, r1, 0x324
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x114
    bl fn_8000D124
    b lbl_fn_8013A4E8_000009B0
lbl_fn_8013A4E8_00000994:
    lfs f0, lbl_8088196C
    mr r3, r29
    stfs f0, 0x0(r28)
    addi r4, r27, 0x534
    bl fn_8000D124
    li r0, 0x2
    sth r0, 0xd3e(r27)
lbl_fn_8013A4E8_000009B0:
    lwz r0, 0xd40(r27)
    cmpwi r0, 0x3c
    ble lbl_fn_8013A4E8_00001E78
    li r0, 0x0
    sth r0, 0xd3e(r27)
    lwz r4, 0xd1c(r27)
    mr r3, r31
    stw r0, 0xd40(r27)
    addi r5, r27, 0x528
    li r6, 0x0
    bl fn_80128930
    mr r3, r31
    bl fn_801255C8
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000009E8:
    cmpwi r0, 0x2
    bne lbl_fn_8013A4E8_00001E78
    lhz r0, 0xd38(r27)
    li r4, 0x3
    sth r4, 0xd3e(r27)
    mr r4, r27
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    bl fn_8016F5EC
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000A10:
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x2
    bne lbl_fn_8013A4E8_00000A24
    li r0, 0x3
    sth r0, 0xd3e(r27)
lbl_fn_8013A4E8_00000A24:
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lwz r0, 0xd1c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_00000A4C
    lwz r0, 0xd28(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8013A4E8_00000B84
lbl_fn_8013A4E8_00000A4C:
    mr r3, r27
    bl fn_8013C3A8
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00000ACC
    lwz r3, 0x648(r27)
    li r28, 0x2
    bl fn_8013C43C
    cmpwi r3, 0x1
    bne lbl_fn_8013A4E8_00000A74
    li r28, 0x1
lbl_fn_8013A4E8_00000A74:
    mr r5, r28
    addi r3, r1, 0x108
    addi r4, r27, 0xc58
    bl fn_8011BF3C
    addi r3, r1, 0x318
    addi r4, r1, 0x108
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x318
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_808819C4
    fcmpo cr0, f1, f0
    blt lbl_fn_8013A4E8_00000ACC
    addi r3, r1, 0x318
    bl fn_800F7FF0
    addi r3, r1, 0xfc
    addi r4, r1, 0x318
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0xfc
    bl fn_8000D124
lbl_fn_8013A4E8_00000ACC:
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_00000AE4
    li r0, 0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000AE4:
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_00000B48
    lwz r4, 0x64(r27)
    lwz r3, 0xd40(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8013A4E8_00000B04
    lfs f0, 0x54(r4)
    b lbl_fn_8013A4E8_00000B08
lbl_fn_8013A4E8_00000B04:
    lfs f0, lbl_8088196C
lbl_fn_8013A4E8_00000B08:
    fctiwz f0, f0
    stfd f0, 0x3c8(r1)
    lwz r0, 0x3cc(r1)
    cmpw r3, r0
    bge lbl_fn_8013A4E8_00000B2C
    lwz r3, 0xd40(r27)
    addi r0, r3, 0x1
    stw r0, 0xd40(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000B2C:
    mr r3, r27
    bl fn_8013C444
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    li r0, 0x2
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000B48:
    lwz r3, 0xd44(r27)
    cmpwi r3, 0x0
    ble lbl_fn_8013A4E8_00000B5C
    subi r0, r3, 0x1
    stw r0, 0xd44(r27)
lbl_fn_8013A4E8_00000B5C:
    lwz r0, 0xd44(r27)
    cmpwi r0, 0x0
    ble lbl_fn_8013A4E8_00000B74
    li r0, 0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000B74:
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00000B84:
    lhz r0, 0xd38(r27)
    li r3, 0x0
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lwz r0, 0xf0c(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_8013A4E8_00001E78
    lwz r4, 0xd34(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8013A4E8_00000CE8
    mr r3, r27
    bl fn_8003F440
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000CE8
    lwz r3, 0xd34(r27)
    lwz r3, 0x0(r3)
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8013A4E8_00000C10
    lwz r0, 0x4(r3)
    cmpwi r0, 0x13b
    bne lbl_fn_8013A4E8_00000C10
    lis r6, lbl_80737A9C@ha
    lwz r4, 0xd34(r27)
    addi r6, r6, lbl_80737A9C@l
    lwz r5, 0xd64(r27)
    addi r7, r6, 0x299
    lfs f1, lbl_808819E4
    mr r3, r27
    li r6, 0x6a
    bl fn_8016125C
    b lbl_fn_8013A4E8_00000CE0
lbl_fn_8013A4E8_00000C10:
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000C4C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x74
    bne lbl_fn_8013A4E8_00000C4C
    lis r6, lbl_80737A9C@ha
    lwz r4, 0xd34(r27)
    addi r6, r6, lbl_80737A9C@l
    lwz r5, 0xd64(r27)
    addi r7, r6, 0x56
    lfs f1, lbl_808819E8
    mr r3, r27
    li r6, 0x13f
    bl fn_8016125C
    b lbl_fn_8013A4E8_00000CE0
lbl_fn_8013A4E8_00000C4C:
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000C88
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1785
    blt lbl_fn_8013A4E8_00000C68
    cmpwi r0, 0x1788
    ble lbl_fn_8013A4E8_00000C70
lbl_fn_8013A4E8_00000C68:
    cmpwi r0, 0x1791
    bne lbl_fn_8013A4E8_00000C88
lbl_fn_8013A4E8_00000C70:
    mr r3, r27
    mr r4, r28
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    b lbl_fn_8013A4E8_00000CE0
lbl_fn_8013A4E8_00000C88:
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000CA0
    lbz r0, 0x2(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8013A4E8_00000CA0
    stw r27, 0xd64(r27)
lbl_fn_8013A4E8_00000CA0:
    lis r4, lbl_807C7030@ha
    addi r3, r1, 0x30c
    addi r4, r4, lbl_807C7030@l
    bl fn_8001047C
    lwz r3, 0xd64(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000CCC
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x30c
    bl fn_8000D124
lbl_fn_8013A4E8_00000CCC:
    lwz r5, 0xd64(r27)
    mr r3, r27
    mr r6, r28
    addi r4, r1, 0x30c
    bl fn_8015F568
lbl_fn_8013A4E8_00000CE0:
    li r3, 0x1
    b lbl_fn_8013A4E8_00001E7C
lbl_fn_8013A4E8_00000CE8:
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lha r0, 0xd3e(r27)
    lfs f2, lbl_80881984
    lfs f1, 0xd60(r27)
    cmpwi r0, 0x0
    lfs f0, lbl_8088199C
    fmuls f30, f2, f1
    fmuls f31, f0, f1
    bne lbl_fn_8013A4E8_00000F74
    mr r3, r27
    bl fn_80139ED0
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00000D64
    mr r3, r27
    bl fn_8013C458
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000D64
    mr r3, r27
    bl fn_8013C458
    bl fn_8013C43C
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00000D64
    mr r3, r27
    li r4, 0x1
    bl fn_8013C460
    lwz r4, 0xd1c(r27)
    mr r3, r27
    bl fn_8013C470
lbl_fn_8013A4E8_00000D64:
    mr r3, r27
    bl fn_8013C478
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00000D80
    lwz r4, 0xd1c(r27)
    mr r3, r27
    bl fn_8013C470
lbl_fn_8013A4E8_00000D80:
    addi r3, r1, 0x300
    bl fn_80057A64
    lwz r3, 0xd1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000DB8
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0xf0
    addi r5, r27, 0xd50
    bl fn_80013338
    addi r3, r1, 0x300
    addi r4, r1, 0xf0
    bl fn_8000D124
    b lbl_fn_8013A4E8_00000DD4
lbl_fn_8013A4E8_00000DB8:
    addi r3, r1, 0xe4
    addi r4, r27, 0x528
    addi r5, r27, 0xd50
    bl fn_80013338
    addi r3, r1, 0x300
    addi r4, r1, 0xe4
    bl fn_8000D124
lbl_fn_8013A4E8_00000DD4:
    addi r3, r1, 0x300
    bl fn_8000D3A4
    lfs f0, lbl_8088196C
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00000DF4
    addi r3, r1, 0x300
    bl fn_800F7FF0
lbl_fn_8013A4E8_00000DF4:
    lfs f0, lbl_808819A8
    fmuls f1, f31, f0
    fcmpo cr0, f1, f30
    ble lbl_fn_8013A4E8_00000E08
    fmr f1, f30
lbl_fn_8013A4E8_00000E08:
    addi r3, r1, 0xd8
    addi r4, r1, 0x300
    bl fn_800F72CC
    addi r3, r1, 0x2f4
    addi r4, r27, 0xd50
    addi r5, r1, 0xd8
    bl fn_80013410
    lfs f0, 0x52c(r27)
    addi r3, r1, 0x2e8
    stfs f0, 0x2f8(r1)
    addi r4, r1, 0x2f4
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x2e8
    bl fn_8000D3A4
    frsp f2, f1
    lfs f0, lbl_8088196C
    stfs f1, 0x0(r28)
    fcmpo cr0, f2, f0
    ble lbl_fn_8013A4E8_00000E60
    addi r3, r1, 0x2e8
    bl fn_800F7FF0
lbl_fn_8013A4E8_00000E60:
    lfs f1, 0x0(r28)
    lfs f0, lbl_80881994
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_00000E88
    lfs f0, lbl_8088196C
    mr r3, r29
    stfs f0, 0x0(r28)
    addi r4, r27, 0x534
    bl fn_8000D124
    b lbl_fn_8013A4E8_0000103C
lbl_fn_8013A4E8_00000E88:
    lfs f0, lbl_808819DC
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_00000EB8
    lfs f0, lbl_8088196C
    addi r3, r1, 0xcc
    stfs f0, 0x0(r28)
    addi r4, r1, 0x2e8
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0xcc
    bl fn_8000D124
    b lbl_fn_8013A4E8_0000103C
lbl_fn_8013A4E8_00000EB8:
    lfs f0, lbl_808819E0
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_00000EE0
    addi r3, r1, 0xc0
    addi r4, r1, 0x2e8
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0xc0
    bl fn_8000D124
    b lbl_fn_8013A4E8_0000103C
lbl_fn_8013A4E8_00000EE0:
    lfs f0, lbl_808819EC
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_00000EFC
    mr r3, r27
    addi r4, r1, 0x2e8
    bl fn_80155790
    b lbl_fn_8013A4E8_0000103C
lbl_fn_8013A4E8_00000EFC:
    lha r3, 0xd3a(r27)
    li r0, 0x1
    sth r0, 0xd3e(r27)
    cmpwi r3, 0x9
    bne lbl_fn_8013A4E8_00000F28
    lwz r4, 0xd24(r27)
    mr r3, r31
    addi r5, r27, 0x528
    li r6, 0x0
    bl fn_80128930
    b lbl_fn_8013A4E8_00000F68
lbl_fn_8013A4E8_00000F28:
    cmpwi r3, 0x8
    bne lbl_fn_8013A4E8_00000F48
    lwz r4, 0xd5c(r27)
    mr r3, r31
    addi r5, r27, 0x528
    li r6, 0x0
    bl fn_80128818
    b lbl_fn_8013A4E8_00000F68
lbl_fn_8013A4E8_00000F48:
    lfs f1, lbl_8088196C
    mr r3, r31
    addi r4, r27, 0xd50
    addi r5, r27, 0x528
    li r6, 0x8
    bl fn_80128A30
    lfs f0, 0xd60(r27)
    stfs f0, 0x28(r31)
lbl_fn_8013A4E8_00000F68:
    mr r3, r31
    bl fn_801255C8
    b lbl_fn_8013A4E8_0000103C
lbl_fn_8013A4E8_00000F74:
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_0000103C
    mr r3, r27
    bl fn_80139ED0
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00000FA4
    mr r3, r27
    li r4, 0x0
    bl fn_8013C460
    mr r3, r27
    li r4, 0x0
    bl fn_8013C470
lbl_fn_8013A4E8_00000FA4:
    mr r3, r31
    bl fn_80126214
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x2dc
    bl fn_8001047C
    addi r3, r1, 0x2dc
    bl fn_801162A0
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00001000
    addi r3, r1, 0x2dc
    bl fn_8000D3A4
    stfs f1, 0x0(r28)
    addi r3, r1, 0x2dc
    bl fn_800F7FF0
    addi r3, r1, 0xb4
    addi r4, r1, 0x2dc
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0xb4
    bl fn_8000D124
lbl_fn_8013A4E8_00001000:
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00001034
    addi r3, r1, 0xa8
    addi r4, r27, 0x528
    addi r5, r27, 0xd50
    bl fn_80013338
    addi r3, r1, 0xa8
    bl fn_801162A0
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_0000103C
lbl_fn_8013A4E8_00001034:
    li r0, 0x0
    sth r0, 0xd3e(r27)
lbl_fn_8013A4E8_0000103C:
    lha r0, 0xd3a(r27)
    cmpwi r0, 0x9
    bne lbl_fn_8013A4E8_00001084
    lwz r3, 0xd24(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001060
    bl fn_8013C480
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_0000106C
lbl_fn_8013A4E8_00001060:
    li r0, -0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_0000106C:
    lwz r3, 0xd24(r27)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r27, 0xd50
    bl fn_8000D124
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001084:
    cmpwi r0, 0xf
    bne lbl_fn_8013A4E8_00001E78
    bl fn_80139EF4
    mr r4, r27
    bl fn_80018BAC
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    li r0, -0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
    lwz r3, 0xd1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001170
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_00001170
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x2d0
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x2d0
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_808819C4
    fcmpo cr0, f1, f0
    blt lbl_fn_8013A4E8_000010F8
    addi r3, r1, 0x2d0
    bl fn_800F7FF0
lbl_fn_8013A4E8_000010F8:
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r3, r0, r4
    lfs f2, lbl_808819B0
    subf r3, r4, r3
    lis r0, 0x4330
    xoris r3, r3, 0x8000
    stw r3, 0x3cc(r1)
    lis r4, lbl_80737808@ha
    lfs f0, lbl_80881964
    stw r0, 0x3c8(r1)
    lfd f3, lbl_80737808@l(r4)
    lfd f1, 0x3c8(r1)
    fsubs f3, f1, f3
    lfs f1, lbl_808819F0
    fmsubs f31, f2, f3, f0
    bl fn_801125F8
    fmuls f1, f1, f31
    addi r3, r1, 0x390
    bl fn_8013A13C
    addi r3, r1, 0x2d0
    addi r4, r1, 0x390
    bl fn_80011410
    mr r3, r27
    addi r4, r1, 0x2d0
    bl fn_80155790
    li r0, 0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001170:
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_00001E78
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_000011A4
    bl fn_80121F00
    bl fn_8013C504
    b lbl_fn_8013A4E8_000011A8
lbl_fn_8013A4E8_000011A4:
    li r3, 0x0
lbl_fn_8013A4E8_000011A8:
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_000011C0
    lwz r4, 0xd5c(r27)
    bl fn_800EC204
    mr r28, r3
    b lbl_fn_8013A4E8_000011C4
lbl_fn_8013A4E8_000011C0:
    li r28, 0x0
lbl_fn_8013A4E8_000011C4:
    cmpwi r28, 0x0
    beq lbl_fn_8013A4E8_000011E0
    addi r3, r27, 0x528
    addi r4, r28, 0x4
    bl fn_8000D124
    lfs f0, 0x14(r28)
    stfs f0, 0x538(r27)
lbl_fn_8013A4E8_000011E0:
    lhz r0, 0xd38(r27)
    li r3, 0x1
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_0000127C
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_0000121C
    bl fn_80121F00
    bl fn_8013C504
    b lbl_fn_8013A4E8_00001220
lbl_fn_8013A4E8_0000121C:
    li r3, 0x0
lbl_fn_8013A4E8_00001220:
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001234
    lwz r4, 0xd5c(r27)
    bl fn_800EC204
    b lbl_fn_8013A4E8_00001238
lbl_fn_8013A4E8_00001234:
    li r3, 0x0
lbl_fn_8013A4E8_00001238:
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001270
    lwz r4, 0xd5c(r27)
    mr r3, r31
    addi r5, r27, 0x528
    li r6, 0x0
    bl fn_80128818
    lfs f0, 0xd60(r27)
    mr r3, r31
    stfs f0, 0x28(r31)
    bl fn_801255C8
    li r0, 0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001270:
    li r0, 0x2
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_0000127C:
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_00001300
    mr r3, r31
    bl fn_80126214
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x2c4
    bl fn_8001047C
    addi r3, r1, 0x2c4
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_808819C4
    fcmpo cr0, f1, f0
    blt lbl_fn_8013A4E8_000012E4
    addi r3, r1, 0x2c4
    bl fn_8000D3A4
    stfs f1, 0x0(r28)
    addi r3, r1, 0x2c4
    bl fn_800F7FF0
    addi r3, r1, 0x9c
    addi r4, r1, 0x2c4
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x9c
    bl fn_8000D124
lbl_fn_8013A4E8_000012E4:
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    li r0, 0x2
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001300:
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_000014D0
    lwz r3, 0xd64(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_000014B8
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_000014B8
    lwz r3, 0xd64(r27)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x90
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x90
    bl fn_8000D3A4
    fmr f31, f1
    mr r3, r31
    bl fn_80126214
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x2b8
    bl fn_8001047C
    addi r3, r1, 0x2b8
    bl fn_801162A0
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00001450
    addi r3, r1, 0x2b8
    bl fn_8000D3A4
    lfs f0, lbl_80881964
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_000013A8
    addi r3, r1, 0x2b8
    bl fn_8000D3A4
    b lbl_fn_8013A4E8_000013AC
lbl_fn_8013A4E8_000013A8:
    fmr f1, f0
lbl_fn_8013A4E8_000013AC:
    stfs f1, 0x0(r28)
    lfs f1, lbl_8088199C
    lfs f5, 0xd60(r27)
    fmuls f0, f1, f5
    fcmpo cr0, f0, f31
    bge lbl_fn_8013A4E8_00001404
    lfs f0, lbl_80881984
    fnmsubs f4, f1, f5, f31
    lfs f2, lbl_808819A8
    fmuls f3, f0, f5
    lfs f1, lbl_80881964
    lfs f0, lbl_808819B0
    fdivs f3, f4, f3
    fmadds f1, f2, f3, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_000013F0
    b lbl_fn_8013A4E8_000013F4
lbl_fn_8013A4E8_000013F0:
    fmr f1, f0
lbl_fn_8013A4E8_000013F4:
    lfs f0, 0x0(r30)
    fmuls f0, f0, f1
    stfs f0, 0x0(r30)
    b lbl_fn_8013A4E8_00001430
lbl_fn_8013A4E8_00001404:
    fcmpo cr0, f5, f31
    bge lbl_fn_8013A4E8_00001430
    lfs f0, lbl_80881980
    fsubs f3, f31, f5
    lfs f1, lbl_808819A8
    fmuls f2, f0, f5
    lfs f0, 0x0(r30)
    fdivs f2, f3, f2
    fmadds f1, f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x0(r30)
lbl_fn_8013A4E8_00001430:
    addi r3, r1, 0x2b8
    bl fn_800F7FF0
    addi r3, r1, 0x84
    addi r4, r1, 0x2b8
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x84
    bl fn_8000D124
lbl_fn_8013A4E8_00001450:
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001474
    lhz r0, 0xd38(r27)
    li r3, 0x2
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
lbl_fn_8013A4E8_00001474:
    lfs f1, lbl_808819F8
    lfs f0, 0xd60(r27)
    fmuls f0, f1, f0
    fcmpo cr0, f31, f0
    ble lbl_fn_8013A4E8_00001E78
    lwz r4, 0xd64(r27)
    mr r3, r31
    addi r5, r27, 0x528
    li r6, 0x0
    bl fn_80128930
    lfs f0, 0xd60(r27)
    mr r3, r31
    stfs f0, 0x28(r31)
    bl fn_801255C8
    li r0, 0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000014B8:
    lhz r0, 0xd38(r27)
    li r3, -0x1
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000014D0:
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_0000158C
    lwz r3, 0xd64(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001574
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001574
    mr r3, r31
    bl fn_80126214
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x2ac
    bl fn_8001047C
    addi r3, r1, 0x2ac
    bl fn_801162A0
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_0000154C
    addi r3, r1, 0x2ac
    bl fn_8000D3A4
    stfs f1, 0x0(r28)
    addi r3, r1, 0x2ac
    bl fn_800F7FF0
    addi r3, r1, 0x78
    addi r4, r1, 0x2ac
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x78
    bl fn_8000D124
lbl_fn_8013A4E8_0000154C:
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    lhz r0, 0xd38(r27)
    li r3, 0x2
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001574:
    lhz r0, 0xd38(r27)
    li r3, -0x1
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_0000158C:
    cmpwi r0, 0x2
    bne lbl_fn_8013A4E8_00001E78
    lwz r3, 0xd64(r27)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x2a0
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x2a0
    bl fn_8000D3A4
    stfs f1, 0x0(r28)
    frsp f1, f1
    lfs f0, 0xd60(r27)
    fcmpo cr0, f1, f0
    bge lbl_fn_8013A4E8_00001604
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_000015F8
    addi r3, r1, 0x60
    addi r4, r1, 0x2a0
    bl fn_800F7FD8
    addi r3, r1, 0x6c
    addi r4, r1, 0x60
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x6c
    bl fn_8000D124
lbl_fn_8013A4E8_000015F8:
    lfs f0, lbl_8088196C
    stfs f0, 0x0(r28)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001604:
    lhz r0, 0xd38(r27)
    li r3, 0x0
    sth r3, 0xd3e(r27)
    mr r3, r31
    rlwinm r0, r0, 0, 18, 16
    lwz r4, 0xd64(r27)
    sth r0, 0xd38(r27)
    addi r5, r27, 0x528
    li r6, 0x0
    bl fn_80128930
    lfs f1, lbl_80881984
    mr r3, r31
    lfs f0, 0xd60(r27)
    fmuls f0, f1, f0
    stfs f0, 0x28(r31)
    bl fn_801255C8
    b lbl_fn_8013A4E8_00001E78
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_000016CC
    addi r3, r1, 0x294
    bl fn_80057A64
    bl fn_80139EF4
    mr r4, r27
    addi r5, r1, 0x294
    addi r6, r1, 0x8
    bl fn_80018240
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_000016B4
    li r0, 0x1
    sth r0, 0xd3e(r27)
    lfs f1, lbl_8088196C
    mr r3, r31
    addi r4, r1, 0x294
    addi r5, r27, 0x528
    li r6, 0x8
    bl fn_80128A30
    lfs f1, lbl_808819B4
    mr r3, r31
    lfs f0, 0x8(r1)
    fmuls f0, f1, f0
    stfs f0, 0x28(r31)
    bl fn_801255C8
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000016B4:
    lhz r0, 0xd38(r27)
    li r3, -0x1
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000016CC:
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_00001E78
    mr r3, r31
    bl fn_80126214
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x288
    bl fn_8001047C
    bl fn_800F52F8
    bl fn_8013C50C
    lfs f0, 0x0(r30)
    addi r3, r1, 0x288
    fmuls f0, f0, f1
    stfs f0, 0x0(r30)
    bl fn_801162A0
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00001744
    addi r3, r1, 0x288
    bl fn_8000D3A4
    stfs f1, 0x0(r28)
    addi r3, r1, 0x288
    bl fn_800F7FF0
    addi r3, r1, 0x54
    addi r4, r1, 0x288
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x54
    bl fn_8000D124
lbl_fn_8013A4E8_00001744:
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    lhz r0, 0xd38(r27)
    li r3, 0x2
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_000017E4
    addi r3, r1, 0x27c
    bl fn_80057A64
    bl fn_80139EF4
    mr r4, r27
    addi r5, r1, 0x27c
    bl fn_80017F18
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_000017CC
    li r0, 0x1
    sth r0, 0xd3e(r27)
    lfs f1, lbl_8088196C
    mr r3, r31
    addi r4, r1, 0x27c
    addi r5, r27, 0x528
    li r6, 0x8
    bl fn_80128A30
    lfs f0, lbl_80881974
    mr r3, r31
    stfs f0, 0x28(r31)
    bl fn_801255C8
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000017CC:
    lhz r0, 0xd38(r27)
    li r3, -0x1
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000017E4:
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_00001E78
    mr r3, r31
    bl fn_80126214
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x270
    bl fn_8001047C
    addi r3, r1, 0x270
    bl fn_801162A0
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00001848
    addi r3, r1, 0x270
    bl fn_8000D3A4
    stfs f1, 0x0(r28)
    addi r3, r1, 0x270
    bl fn_800F7FF0
    addi r3, r1, 0x48
    addi r4, r1, 0x270
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x48
    bl fn_8000D124
lbl_fn_8013A4E8_00001848:
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00001898
    lis r3, 0x8889
    lwz r4, 0xc5c(r27)
    subi r0, r3, 0x7777
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xf
    subf. r0, r0, r4
    bne lbl_fn_8013A4E8_00001E78
    bl fn_80139EF4
    mr r4, r27
    bl fn_80018078
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001898:
    lhz r0, 0xd38(r27)
    li r3, 0x2
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    addi r3, r27, 0xd50
    addi r4, r27, 0x528
    bl fn_8000D124
    bl fn_8013A194
    mr r4, r27
    bl fn_8010C948
    lwz r0, 0xd68(r27)
    stw r3, 0xd64(r27)
    cmpwi r0, 0x0
    stw r3, 0xd24(r27)
    beq lbl_fn_8013A4E8_00001918
    mr r3, r0
    bl fn_8013C514
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001918
    lwz r3, 0xd68(r27)
    bl fn_8013C53C
    mr r4, r3
    addi r3, r27, 0xd50
    bl fn_8000D124
    lwz r3, 0xd68(r27)
    bl fn_8013C544
    lfs f0, lbl_808819BC
    fmuls f0, f0, f1
    stfs f0, 0xd60(r27)
    b lbl_fn_8013A4E8_00001934
lbl_fn_8013A4E8_00001918:
    lwz r3, 0xd64(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001934
    bl fn_8013C38C
    mr r4, r3
    addi r3, r27, 0xd50
    bl fn_8000D124
lbl_fn_8013A4E8_00001934:
    lha r0, 0xd3e(r27)
    lfs f0, 0x52c(r27)
    cmpwi r0, 0x0
    stfs f0, 0xd54(r27)
    bne lbl_fn_8013A4E8_000019FC
    mr r3, r27
    bl fn_80139ED0
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00001970
    mr r3, r27
    li r4, 0x1
    bl fn_8013C460
    lwz r4, 0xd1c(r27)
    mr r3, r27
    bl fn_8013C470
lbl_fn_8013A4E8_00001970:
    addi r3, r1, 0x264
    addi r4, r27, 0xd50
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x264
    bl fn_801162A0
    lfs f0, lbl_8088196C
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_000019A0
    addi r3, r1, 0x264
    bl fn_800F7FF0
lbl_fn_8013A4E8_000019A0:
    lfs f0, 0xd60(r27)
    lfs f1, lbl_80881984
    fmuls f0, f0, f0
    fmuls f0, f1, f0
    fmuls f0, f1, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8013A4E8_000019E4
    addi r3, r1, 0x3c
    addi r4, r1, 0x264
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x3c
    bl fn_8000D124
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000019E4:
    lhz r0, 0xd38(r27)
    li r3, 0x1
    sth r3, 0xd3e(r27)
    rlwinm r0, r0, 0, 18, 16
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_000019FC:
    cmpwi r0, 0x1
    bne lbl_fn_8013A4E8_00001B54
    mr r3, r27
    bl fn_80139ED0
    cmpwi r3, 0x0
    bne lbl_fn_8013A4E8_00001A2C
    mr r3, r27
    li r4, 0x1
    bl fn_8013C460
    lwz r4, 0xd1c(r27)
    mr r3, r27
    bl fn_8013C470
lbl_fn_8013A4E8_00001A2C:
    addi r3, r1, 0x258
    addi r4, r27, 0xd50
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0x258
    bl fn_801162A0
    lfs f0, lbl_8088196C
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00001A5C
    addi r3, r1, 0x258
    bl fn_800F7FF0
lbl_fn_8013A4E8_00001A5C:
    lfs f0, 0xd60(r27)
    lfs f1, lbl_808819FC
    fmuls f2, f0, f0
    fmuls f0, f1, f2
    fmuls f0, f1, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_8013A4E8_00001AA8
    lhz r0, 0xd38(r27)
    li r3, 0x0
    sth r3, 0xd3e(r27)
    addi r3, r1, 0x30
    ori r0, r0, 0x4000
    addi r4, r1, 0x258
    sth r0, 0xd38(r27)
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x30
    bl fn_8000D124
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001AA8:
    fcmpo cr0, f31, f2
    bge lbl_fn_8013A4E8_00001AD4
    lfs f0, lbl_80881964
    addi r3, r1, 0x24
    stfs f0, 0x0(r28)
    addi r4, r1, 0x258
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x24
    bl fn_8000D124
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001AD4:
    lwz r3, 0xd68(r27)
    li r4, 0x2
    lhz r0, 0xd38(r27)
    cmpwi r3, 0x0
    sth r4, 0xd3e(r27)
    rlwinm r0, r0, 0, 18, 16
    sth r0, 0xd38(r27)
    beq lbl_fn_8013A4E8_00001B1C
    bl fn_8013C514
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001B1C
    lfs f1, lbl_8088196C
    mr r3, r31
    addi r4, r27, 0xd50
    addi r5, r27, 0x528
    li r6, 0x8
    bl fn_80128A30
    b lbl_fn_8013A4E8_00001B38
lbl_fn_8013A4E8_00001B1C:
    lwz r4, 0xd64(r27)
    cmpwi r4, 0x0
    beq lbl_fn_8013A4E8_00001B38
    mr r3, r31
    addi r5, r27, 0x528
    li r6, 0x0
    bl fn_80128930
lbl_fn_8013A4E8_00001B38:
    lfs f1, lbl_80881984
    mr r3, r31
    lfs f0, 0xd60(r27)
    fmuls f0, f1, f0
    stfs f0, 0x28(r31)
    bl fn_801255C8
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001B54:
    cmpwi r0, 0x2
    bne lbl_fn_8013A4E8_00001E78
    mr r3, r27
    bl fn_80139ED0
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001B84
    mr r3, r27
    li r4, 0x0
    bl fn_8013C460
    mr r3, r27
    li r4, 0x0
    bl fn_8013C470
lbl_fn_8013A4E8_00001B84:
    mr r3, r31
    bl fn_80126214
    mr r3, r31
    bl fn_80139F58
    mr r4, r3
    addi r3, r1, 0x24c
    bl fn_8001047C
    addi r3, r1, 0x24c
    bl fn_801162A0
    lfs f0, lbl_808819F4
    fcmpo cr0, f1, f0
    ble lbl_fn_8013A4E8_00001BC4
    lfs f0, lbl_80881964
    addi r3, r1, 0x24c
    stfs f0, 0x0(r28)
    bl fn_800F7FF0
lbl_fn_8013A4E8_00001BC4:
    addi r3, r1, 0x18
    addi r4, r1, 0x24c
    bl fn_80011034
    mr r3, r29
    addi r4, r1, 0x18
    bl fn_8000D124
    mr r3, r31
    bl fn_8013C3F4
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001E78
    addi r3, r1, 0xc
    addi r4, r27, 0xd50
    addi r5, r27, 0x528
    bl fn_80013338
    addi r3, r1, 0xc
    bl fn_8000D3A4
    lwz r3, 0xd68(r27)
    fmr f31, f1
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001C78
    bl fn_8013C514
    cmpwi r3, 0x0
    beq lbl_fn_8013A4E8_00001C78
    lfs f0, 0xd60(r27)
    fcmpo cr0, f31, f0
    ble lbl_fn_8013A4E8_00001C60
    lfs f1, lbl_8088196C
    mr r3, r31
    addi r4, r27, 0xd50
    addi r5, r27, 0x528
    li r6, 0x8
    bl fn_80128A30
    lfs f1, lbl_80881984
    mr r3, r31
    lfs f0, 0xd60(r27)
    fmuls f0, f1, f0
    stfs f0, 0x28(r31)
    bl fn_801255C8
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001C60:
    lhz r0, 0xd38(r27)
    li r3, 0x1
    sth r3, 0xd3e(r27)
    rlwinm r0, r0, 0, 18, 16
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001C78:
    lfs f1, lbl_808819B0
    lfs f0, 0xd60(r27)
    fmuls f0, f1, f0
    fcmpo cr0, f31, f0
    ble lbl_fn_8013A4E8_00001CBC
    lwz r4, 0xd64(r27)
    mr r3, r31
    addi r5, r27, 0x528
    li r6, 0x0
    bl fn_80128930
    lfs f1, lbl_80881984
    mr r3, r31
    lfs f0, 0xd60(r27)
    fmuls f0, f1, f0
    stfs f0, 0x28(r31)
    bl fn_801255C8
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001CBC:
    lhz r0, 0xd38(r27)
    li r3, 0x1
    sth r3, 0xd3e(r27)
    rlwinm r0, r0, 0, 18, 16
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
    lha r0, 0xd3e(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8013A4E8_00001D8C
    lha r0, 0xd48(r27)
    cmpwi r0, -0x1
    beq lbl_fn_8013A4E8_00001D74
    lwz r5, 0xd44(r27)
    addi r3, r27, 0xb0
    li r4, 0x1
    subi r0, r5, 0x1
    stw r0, 0xd44(r27)
    bl fn_80139F24
    lfs f1, lbl_80881964
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_80139F3C
    lfs f1, lbl_80881964
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_8013C554
    lhz r0, 0xd38(r27)
    addi r3, r27, 0xb0
    lha r5, 0xd48(r27)
    li r4, 0x0
    extrwi. r0, r0, 1, 18
    lfs f1, lbl_8088196C
    li r6, 0x0
    beq lbl_fn_8013A4E8_00001D54
    lwz r0, 0xd44(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_8013A4E8_00001D54
    li r6, 0x1
lbl_fn_8013A4E8_00001D54:
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lha r3, 0xd3e(r27)
    addi r0, r3, 0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001D74:
    lhz r0, 0xd38(r27)
    li r3, -0x1
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001D8C:
    ble lbl_fn_8013A4E8_00001E78
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f31, f1
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f31
    cror eq, gt, eq
    bne lbl_fn_8013A4E8_00001E78
    lha r0, 0xd3e(r27)
    slwi r0, r0, 1
    add r3, r27, r0
    lha r0, 0xd48(r3)
    cmpwi r0, -0x1
    beq lbl_fn_8013A4E8_00001E64
    lwz r5, 0xd44(r27)
    addi r3, r27, 0xb0
    li r4, 0x1
    subi r0, r5, 0x1
    stw r0, 0xd44(r27)
    bl fn_80139F24
    lfs f1, lbl_80881964
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_80139F3C
    lfs f1, lbl_80881964
    addi r3, r27, 0xb0
    li r4, 0x0
    bl fn_8013C554
    lha r5, 0xd3e(r27)
    addi r3, r27, 0xb0
    lhz r0, 0xd38(r27)
    li r4, 0x0
    slwi r5, r5, 1
    lfs f1, lbl_8088196C
    add r5, r27, r5
    extrwi. r0, r0, 1, 18
    lha r5, 0xd48(r5)
    li r6, 0x0
    beq lbl_fn_8013A4E8_00001E44
    lwz r0, 0xd44(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_8013A4E8_00001E44
    li r6, 0x1
lbl_fn_8013A4E8_00001E44:
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lha r3, 0xd3e(r27)
    addi r0, r3, 0x1
    sth r0, 0xd3e(r27)
    b lbl_fn_8013A4E8_00001E78
lbl_fn_8013A4E8_00001E64:
    lhz r0, 0xd38(r27)
    li r3, -0x1
    sth r3, 0xd3e(r27)
    ori r0, r0, 0x4000
    sth r0, 0xd38(r27)
lbl_fn_8013A4E8_00001E78:
    li r3, 0x1
lbl_fn_8013A4E8_00001E7C:
    addi r11, r1, 0x3f0
    psq_l f31, 0x408(r1), 0, 0
    lfd f31, 0x400(r1)
    psq_l f30, 0x3f8(r1), 0, 0
    lfd f30, 0x3f0(r1)
    bl _restgpr_27
    lwz r0, 0x414(r1)
    mtlr r0
    addi r1, r1, 0x410
    blr
}
