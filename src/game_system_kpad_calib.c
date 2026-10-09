#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void fn_8000D430(void);
extern void fn_8004ED34(void);
extern void fn_800697D8(void);
extern void fn_8006A250(void);
extern void fn_8006A900(void);
extern void fn_80097C08(void);
extern void fn_80097E80(void);
extern void fn_800A5B30(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800F1378(void);
extern void fn_801346C8(void);
extern void fn_80148B38(void);
extern void fn_8014DEE4(void);
extern void fn_80154344(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_8016EB48(void);
extern void fn_80179D44(void);
extern void fn_801E97DC(void);
extern void fn_80216544(void);
extern void fn_80219160(void);
extern void fn_80219558(void);
extern void fn_8021F09C(void);
extern void fn_8036F268(void);
extern void fn_803701E0(void);
extern void fn_803743AC(void);
extern void fn_80374D64(void);
extern void fn_80376324(void);
extern void fn_80376B68(void);
extern void fn_80378610(void);
extern void fn_8037865C(void);
extern void fn_803786F0(void);
extern void fn_803786FC(void);
extern void fn_803792F0(void);
extern void fn_8037C690(void);
extern void fn_8037D4C0(void);
extern void fn_80389838(void);
extern void fn_803AB96C(void);
extern void fn_803B57B0(void);
extern void fn_803B57EC(void);
extern void fn_803B6C88(void);
extern void fn_803C1560(void);
extern void fn_803E43B8(void);
extern void fn_803E4434(void);
extern void fn_803EA77C(void);
extern void fn_803EAC3C(void);
extern void fn_803EB4A8(void);
extern void fn_8044D028(void);
extern void fn_80450B28(void);
extern void fn_80450B44(void);
extern void fn_804786F8(void);
extern void fn_8047E528(void);
extern void fn_8048169C(void);
extern void fn_804A2F98(void);
extern void fn_804A2FBC(void);
extern void fn_8054E520(void);
extern void fn_8056B3D8(void);
extern void fn_80570A18(void);
extern void fn_80570A44(void);
extern void fn_80570A68(void);
extern void fn_80572B70(void);
extern void fn_805AA738(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_806055A0(void);
extern void fn_8068AEA8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8074DBF0[];
extern u8 lbl_8074DC1C[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F040;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F580;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9AC;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_8087FA20;
extern u32 lbl_80885708;
extern u32 lbl_8088570C;
extern u32 lbl_8088572C;
extern u32 lbl_8088574C;
extern u32 lbl_80885750;
extern u32 lbl_80885764;
extern u32 lbl_80885768;
extern u32 lbl_8088576C;
extern u32 lbl_8088579C;
extern u32 lbl_808857B4;
extern u32 lbl_808857C8;
extern u32 lbl_808857CC;
extern u32 lbl_808857D0;

/* Function declarations */
void fn_80370320(void);
void fn_80370A78(void);
void fn_80370AE4(void);
void fn_80370B78(void);
void fn_80370BD0(void);
void fn_80370C2C(void);
void fn_80370C6C(void);
void fn_80370CD0(void);
void fn_80370F8C(void);
void fn_80371164(void);
void fn_803712BC(void);
void fn_80371320(void);
void fn_80371334(void);
void fn_80371664(void);
void fn_80371674(void);
void fn_8037177C(void);
void fn_80371790(void);

asm void fn_80370320(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_26
    cmplwi r4, 0xfff
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    ble lbl_fn_80370320_00000064
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80370320_00000740
    lis r4, lbl_8074DC1C@ha
    mr r5, r27
    addi r4, r4, lbl_8074DC1C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x164
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
    b lbl_fn_80370320_00000740
lbl_fn_80370320_00000064:
    cmpwi r4, 0x0
    beq lbl_fn_80370320_00000740
    lwz r0, 0x1550(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80370320_000000AC
    cmpwi r4, 0x88
    beq lbl_fn_80370320_00000740
    cmpwi r4, 0x11e
    beq lbl_fn_80370320_00000740
    cmpwi r4, 0x11f
    beq lbl_fn_80370320_00000740
    cmpwi r4, 0x6
    beq lbl_fn_80370320_00000740
    cmpwi r4, 0xd0
    beq lbl_fn_80370320_00000740
    cmpwi r4, 0x5
    bne lbl_fn_80370320_000000AC
    b lbl_fn_80370320_00000740
lbl_fn_80370320_000000AC:
    lwz r6, lbl_8087F0A8
    lwz r0, 0x194(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80370320_000000D0
    cmpwi r4, 0x11f
    beq lbl_fn_80370320_00000740
    cmpwi r4, 0x6
    bne lbl_fn_80370320_000000D0
    b lbl_fn_80370320_00000740
lbl_fn_80370320_000000D0:
    slwi r0, r4, 2
    add r31, r3, r0
    lwz r29, 0x10e4(r31)
    stw r5, 0x10e4(r31)
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80370320_0000010C
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80370320_0000010C
    mr r5, r27
    mr r6, r29
    mr r7, r28
    li r4, 0x1
    bl fn_803AB96C
lbl_fn_80370320_0000010C:
    cmpwi r30, 0x0
    bne lbl_fn_80370320_00000740
    cmpw r29, r28
    beq lbl_fn_80370320_000005BC
    lwz r0, lbl_8087F4F0
    cmpwi r0, 0x0
    beq lbl_fn_80370320_000005BC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80370320_000005BC
    cmpwi r27, 0x5
    lwz r30, 0x54(r3)
    bne lbl_fn_80370320_00000168
    cntlzw r0, r28
    mr r3, r30
    srwi r5, r0, 5
    li r4, 0xa
    bl fn_803701E0
    cntlzw r0, r28
    mr r3, r30
    srwi r5, r0, 5
    li r4, 0xd
    bl fn_803701E0
lbl_fn_80370320_00000168:
    cmpwi r27, 0x88
    bne lbl_fn_80370320_000002D8
    cntlzw r0, r28
    mr r3, r30
    srwi r5, r0, 5
    li r4, 0x9
    bl fn_803701E0
    cmpwi r30, 0x0
    beq lbl_fn_80370320_000002D8
    lwz r0, 0x9c0(r30)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_80370320_000002D8
    lwz r3, lbl_8087F4F0
    li r5, 0x0
    lfs f0, lbl_8088570C
    li r0, 0x9
    addis r4, r3, 0x1
    mr r3, r26
    stw r30, -0x20d0(r4)
    lwz r6, 0x97c(r30)
    stw r6, -0x20cc(r4)
    lwz r6, 0x980(r30)
    stw r6, -0x20c8(r4)
    lfs f1, 0x984(r30)
    stfs f1, -0x20c4(r4)
    lfs f1, 0x988(r30)
    stfs f1, -0x20c0(r4)
    lfs f1, 0x98c(r30)
    stfs f1, -0x20bc(r4)
    lfs f1, 0x990(r30)
    stfs f1, -0x20b8(r4)
    lfs f1, 0x994(r30)
    stfs f1, -0x20b4(r4)
    lfs f1, 0x998(r30)
    stfs f1, -0x20b0(r4)
    lwz r6, 0x99c(r30)
    stw r6, -0x20ac(r4)
    lwz r6, 0x9a4(r30)
    lwz r7, 0x9a0(r30)
    stw r7, -0x20a8(r4)
    stw r6, -0x20a4(r4)
    lwz r6, 0x9ac(r30)
    lwz r7, 0x9a8(r30)
    stw r7, -0x20a0(r4)
    stw r6, -0x209c(r4)
    lwz r6, 0x9b4(r30)
    lwz r7, 0x9b0(r30)
    stw r7, -0x2098(r4)
    stw r6, -0x2094(r4)
    lwz r6, 0x9bc(r30)
    lwz r7, 0x9b8(r30)
    stw r7, -0x2090(r4)
    stw r6, -0x208c(r4)
    lwz r6, 0x9c4(r30)
    lwz r7, 0x9c0(r30)
    stw r7, -0x2088(r4)
    stw r6, -0x2084(r4)
    lwz r6, 0x9cc(r30)
    lwz r7, 0x9c8(r30)
    stw r7, -0x2080(r4)
    stw r6, -0x207c(r4)
    lwz r6, 0x9d4(r30)
    lwz r7, 0x9d0(r30)
    stw r7, -0x2078(r4)
    stw r6, -0x2074(r4)
    lwz r6, 0x9dc(r30)
    lwz r7, 0x9d8(r30)
    stw r7, -0x2070(r4)
    stw r6, -0x206c(r4)
    lwz r6, 0x9e4(r30)
    lwz r7, 0x9e0(r30)
    stw r7, -0x2068(r4)
    stw r6, -0x2064(r4)
    lwz r6, 0x9ec(r30)
    lwz r7, 0x9e8(r30)
    stw r7, -0x2060(r4)
    stw r6, -0x205c(r4)
    lwz r6, 0x9f4(r30)
    lwz r7, 0x9f0(r30)
    stw r7, -0x2058(r4)
    stw r6, -0x2054(r4)
    stfs f0, -0x20c4(r4)
    stw r5, -0x2044(r4)
    stw r5, -0x2050(r4)
    stw r5, -0x2048(r4)
    lwz r4, lbl_8087F4F0
    addis r4, r4, 0x1
    stw r0, -0x2040(r4)
    bl fn_80371790
    mr r3, r26
    bl fn_80374D64
lbl_fn_80370320_000002D8:
    cmpwi r27, 0x11e
    bne lbl_fn_80370320_0000044C
    cntlzw r0, r28
    mr r3, r30
    srwi r5, r0, 5
    li r4, 0x3d
    bl fn_803701E0
    cmpwi r30, 0x0
    beq lbl_fn_80370320_0000044C
    lwz r0, 0x9c4(r30)
    rlwinm r3, r0, 0, 2, 2
    subis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_fn_80370320_0000044C
    lwz r3, lbl_8087F4F0
    li r5, 0x0
    lfs f0, lbl_8088570C
    li r0, 0x3d
    addis r4, r3, 0x1
    mr r3, r26
    stw r30, -0x20d0(r4)
    lwz r6, 0x97c(r30)
    stw r6, -0x20cc(r4)
    lwz r6, 0x980(r30)
    stw r6, -0x20c8(r4)
    lfs f1, 0x984(r30)
    stfs f1, -0x20c4(r4)
    lfs f1, 0x988(r30)
    stfs f1, -0x20c0(r4)
    lfs f1, 0x98c(r30)
    stfs f1, -0x20bc(r4)
    lfs f1, 0x990(r30)
    stfs f1, -0x20b8(r4)
    lfs f1, 0x994(r30)
    stfs f1, -0x20b4(r4)
    lfs f1, 0x998(r30)
    stfs f1, -0x20b0(r4)
    lwz r6, 0x99c(r30)
    stw r6, -0x20ac(r4)
    lwz r6, 0x9a4(r30)
    lwz r7, 0x9a0(r30)
    stw r7, -0x20a8(r4)
    stw r6, -0x20a4(r4)
    lwz r6, 0x9ac(r30)
    lwz r7, 0x9a8(r30)
    stw r7, -0x20a0(r4)
    stw r6, -0x209c(r4)
    lwz r6, 0x9b4(r30)
    lwz r7, 0x9b0(r30)
    stw r7, -0x2098(r4)
    stw r6, -0x2094(r4)
    lwz r6, 0x9bc(r30)
    lwz r7, 0x9b8(r30)
    stw r7, -0x2090(r4)
    stw r6, -0x208c(r4)
    lwz r6, 0x9c4(r30)
    lwz r7, 0x9c0(r30)
    stw r7, -0x2088(r4)
    stw r6, -0x2084(r4)
    lwz r6, 0x9cc(r30)
    lwz r7, 0x9c8(r30)
    stw r7, -0x2080(r4)
    stw r6, -0x207c(r4)
    lwz r6, 0x9d4(r30)
    lwz r7, 0x9d0(r30)
    stw r7, -0x2078(r4)
    stw r6, -0x2074(r4)
    lwz r6, 0x9dc(r30)
    lwz r7, 0x9d8(r30)
    stw r7, -0x2070(r4)
    stw r6, -0x206c(r4)
    lwz r6, 0x9e4(r30)
    lwz r7, 0x9e0(r30)
    stw r7, -0x2068(r4)
    stw r6, -0x2064(r4)
    lwz r6, 0x9ec(r30)
    lwz r7, 0x9e8(r30)
    stw r7, -0x2060(r4)
    stw r6, -0x205c(r4)
    lwz r6, 0x9f4(r30)
    lwz r7, 0x9f0(r30)
    stw r7, -0x2058(r4)
    stw r6, -0x2054(r4)
    stfs f0, -0x20c4(r4)
    stw r5, -0x2044(r4)
    stw r5, -0x2050(r4)
    stw r5, -0x2048(r4)
    lwz r4, lbl_8087F4F0
    addis r4, r4, 0x1
    stw r0, -0x2040(r4)
    bl fn_80371790
    mr r3, r26
    bl fn_80374D64
lbl_fn_80370320_0000044C:
    cmpwi r27, 0x11f
    bne lbl_fn_80370320_000005BC
    cntlzw r0, r28
    mr r3, r30
    srwi r5, r0, 5
    li r4, 0x2
    bl fn_803701E0
    cmpwi r30, 0x0
    beq lbl_fn_80370320_000005BC
    lwz r0, 0x9c0(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80370320_000005BC
    lwz r3, lbl_8087F4F0
    li r5, 0x0
    lfs f0, lbl_8088570C
    li r0, 0x2
    addis r4, r3, 0x1
    mr r3, r26
    stw r30, -0x20d0(r4)
    lwz r6, 0x97c(r30)
    stw r6, -0x20cc(r4)
    lwz r6, 0x980(r30)
    stw r6, -0x20c8(r4)
    lfs f1, 0x984(r30)
    stfs f1, -0x20c4(r4)
    lfs f1, 0x988(r30)
    stfs f1, -0x20c0(r4)
    lfs f1, 0x98c(r30)
    stfs f1, -0x20bc(r4)
    lfs f1, 0x990(r30)
    stfs f1, -0x20b8(r4)
    lfs f1, 0x994(r30)
    stfs f1, -0x20b4(r4)
    lfs f1, 0x998(r30)
    stfs f1, -0x20b0(r4)
    lwz r6, 0x99c(r30)
    stw r6, -0x20ac(r4)
    lwz r6, 0x9a4(r30)
    lwz r7, 0x9a0(r30)
    stw r7, -0x20a8(r4)
    stw r6, -0x20a4(r4)
    lwz r6, 0x9ac(r30)
    lwz r7, 0x9a8(r30)
    stw r7, -0x20a0(r4)
    stw r6, -0x209c(r4)
    lwz r6, 0x9b4(r30)
    lwz r7, 0x9b0(r30)
    stw r7, -0x2098(r4)
    stw r6, -0x2094(r4)
    lwz r6, 0x9bc(r30)
    lwz r7, 0x9b8(r30)
    stw r7, -0x2090(r4)
    stw r6, -0x208c(r4)
    lwz r6, 0x9c4(r30)
    lwz r7, 0x9c0(r30)
    stw r7, -0x2088(r4)
    stw r6, -0x2084(r4)
    lwz r6, 0x9cc(r30)
    lwz r7, 0x9c8(r30)
    stw r7, -0x2080(r4)
    stw r6, -0x207c(r4)
    lwz r6, 0x9d4(r30)
    lwz r7, 0x9d0(r30)
    stw r7, -0x2078(r4)
    stw r6, -0x2074(r4)
    lwz r6, 0x9dc(r30)
    lwz r7, 0x9d8(r30)
    stw r7, -0x2070(r4)
    stw r6, -0x206c(r4)
    lwz r6, 0x9e4(r30)
    lwz r7, 0x9e0(r30)
    stw r7, -0x2068(r4)
    stw r6, -0x2064(r4)
    lwz r6, 0x9ec(r30)
    lwz r7, 0x9e8(r30)
    stw r7, -0x2060(r4)
    stw r6, -0x205c(r4)
    lwz r6, 0x9f4(r30)
    lwz r7, 0x9f0(r30)
    stw r7, -0x2058(r4)
    stw r6, -0x2054(r4)
    stfs f0, -0x20c4(r4)
    stw r5, -0x2044(r4)
    stw r5, -0x2050(r4)
    stw r5, -0x2048(r4)
    lwz r4, lbl_8087F4F0
    addis r4, r4, 0x1
    stw r0, -0x2040(r4)
    bl fn_80371790
    mr r3, r26
    bl fn_80374D64
lbl_fn_80370320_000005BC:
    subi r0, r27, 0x8c
    cmplwi r0, 0xd2
    ble lbl_fn_80370320_000005D4
    subi r0, r27, 0x1ae
    cmplwi r0, 0x32
    bgt lbl_fn_80370320_00000680
lbl_fn_80370320_000005D4:
    cmpw r29, r28
    beq lbl_fn_80370320_00000680
    cmpwi r28, 0x0
    beq lbl_fn_80370320_00000680
    mr r3, r27
    bl fn_8021F09C
    cmpwi r3, 0x0
    beq lbl_fn_80370320_00000680
    lwz r4, lbl_8087F9C0
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80370320_0000060C
    cmpwi r27, 0x1b3
    bne lbl_fn_80370320_00000680
lbl_fn_80370320_0000060C:
    lwz r0, 0x1550(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80370320_00000624
    subi r0, r27, 0x1b8
    cmplwi r0, 0x1
    bgt lbl_fn_80370320_00000680
lbl_fn_80370320_00000624:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80370320_00000640
    mr r3, r26
    mr r4, r27
    bl fn_80376324
    b lbl_fn_80370320_00000680
lbl_fn_80370320_00000640:
    lwz r0, 0x56f4(r26)
    cmplwi r0, 0x8
    bge lbl_fn_80370320_00000670
    lwz r3, 0x5718(r26)
    lwz r0, 0x56f4(r26)
    add r0, r3, r0
    clrlslwi r0, r0, 29, 2
    add r3, r26, r0
    stw r27, 0x56f8(r3)
    lwz r3, 0x56f4(r26)
    addi r0, r3, 0x1
    stw r0, 0x56f4(r26)
lbl_fn_80370320_00000670:
    lwz r3, lbl_8087F490
    mr r5, r27
    li r4, 0x1
    bl fn_803E43B8
lbl_fn_80370320_00000680:
    cmpwi r27, 0xac
    bne lbl_fn_80370320_000006A0
    cmpwi r28, 0x0
    beq lbl_fn_80370320_000006A0
    lwz r3, lbl_8087F490
    li r4, 0x1
    li r5, -0x1
    bl fn_803E4434
lbl_fn_80370320_000006A0:
    cmpwi r27, 0x6d
    bne lbl_fn_80370320_000006B8
    cmpwi r28, 0x0
    beq lbl_fn_80370320_000006B8
    lwz r3, lbl_8087F120
    bl fn_801E97DC
lbl_fn_80370320_000006B8:
    cmpwi r27, 0x25
    bne lbl_fn_80370320_00000740
    cmpwi r28, 0x0
    bne lbl_fn_80370320_00000740
    cmpwi r29, 0x0
    beq lbl_fn_80370320_00000740
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80370320_000006E4
    lwz r26, 0x48(r3)
    b lbl_fn_80370320_000006E8
lbl_fn_80370320_000006E4:
    li r26, 0x0
lbl_fn_80370320_000006E8:
    cmpwi r26, 0x0
    beq lbl_fn_80370320_00000740
    stw r29, 0x10e4(r31)
    li r3, 0x0
    lwz r0, 0x12a4(r26)
    srwi. r0, r0, 31
    beq lbl_fn_80370320_00000714
    lwz r0, 0xc48(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80370320_00000714
    li r3, 0x1
lbl_fn_80370320_00000714:
    cmpwi r3, 0x0
    beq lbl_fn_80370320_00000724
    mr r3, r26
    bl fn_80154344
lbl_fn_80370320_00000724:
    lwz r0, 0x12a4(r26)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80370320_0000073C
    mr r3, r26
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_80370320_0000073C:
    stw r28, 0x10e4(r31)
lbl_fn_80370320_00000740:
    addi r11, r1, 0x120
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80370A78(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    cmplwi r4, 0xff
    stw r0, 0x114(r1)
    ble lbl_fn_80370A78_000007A8
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80370A78_000007A0
    lis r6, lbl_8074DC1C@ha
    mr r5, r4
    addi r6, r6, lbl_8074DC1C@l
    addi r3, r1, 0x8
    addi r4, r6, 0x18a
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80370A78_000007A0:
    li r3, 0x0
    b lbl_fn_80370A78_000007B4
lbl_fn_80370A78_000007A8:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x50e4(r3)
lbl_fn_80370A78_000007B4:
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80370AE4(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    cmplwi r4, 0xff
    mr r7, r5
    stw r0, 0x114(r1)
    ble lbl_fn_80370AE4_00000814
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80370AE4_00000848
    lis r6, lbl_8074DC1C@ha
    mr r5, r4
    addi r6, r6, lbl_8074DC1C@l
    addi r3, r1, 0x8
    addi r4, r6, 0xa4
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
    b lbl_fn_80370AE4_00000848
lbl_fn_80370AE4_00000814:
    slwi r0, r4, 2
    add r8, r3, r0
    lwz r6, 0x50e4(r8)
    stw r5, 0x50e4(r8)
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80370AE4_00000848
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80370AE4_00000848
    mr r5, r4
    li r4, 0x0
    bl fn_803AB96C
lbl_fn_80370AE4_00000848:
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80370B78(void)
{
    nofralloc
    lwz r9, 0x5620(r3)
    li r10, 0x1
    stw r10, 0x54f0(r3)
    lis r7, 0x3b9b
    subi r0, r7, 0x3601
    clrlwi r8, r4, 8
    stw r10, 0x4c(r9)
    lwz r7, 0x5620(r3)
    stw r8, 0x6c(r7)
    lwz r7, 0x5620(r3)
    stw r4, 0x70(r7)
    lwz r4, 0x5620(r3)
    stw r6, 0x58(r4)
    lwz r4, 0x5620(r3)
    stw r0, 0x5c(r4)
    lwz r4, 0x5620(r3)
    stw r5, 0x54(r4)
    lwz r4, 0x5620(r3)
    stfs f1, 0x74(r4)
    lwz r3, 0x5620(r3)
    stw r10, 0x48(r3)
    blr
}

asm void fn_80370BD0(void)
{
    nofralloc
    lwz r9, 0x5620(r3)
    li r6, 0x2
    li r8, 0x1
    li r0, 0x0
    lwz r10, 0x70(r9)
    stw r6, 0x54f0(r3)
    clrlwi r7, r10, 8
    stw r8, 0x4c(r9)
    lwz r6, 0x5620(r3)
    stw r10, 0x6c(r6)
    lwz r6, 0x5620(r3)
    stw r7, 0x70(r6)
    lwz r6, 0x5620(r3)
    stw r5, 0x58(r6)
    lwz r5, 0x5620(r3)
    stw r0, 0x5c(r5)
    lwz r5, 0x5620(r3)
    stw r4, 0x54(r5)
    lwz r4, 0x5620(r3)
    stfs f1, 0x74(r4)
    lwz r3, 0x5620(r3)
    stw r8, 0x48(r3)
    blr
}

asm void fn_80370C2C(void)
{
    nofralloc
    lwz r4, 0x5620(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80370C2C_00000944
    lwz r3, 0x58(r4)
    lwz r0, 0x54(r4)
    lwz r4, 0x4c(r4)
    add r0, r3, r0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
lbl_fn_80370C2C_00000944:
    li r3, 0x1
    blr
}

asm void fn_80370C6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x10d8(r3)
    lwz r4, 0x64(r4)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x3
    beq lbl_fn_80370C6C_0000099C
    cmpwi r0, 0x4
    bne lbl_fn_80370C6C_00000980
    b lbl_fn_80370C6C_0000099C
lbl_fn_80370C6C_00000980:
    lwz r4, 0x5624(r3)
    li r0, 0x12
    stw r0, 0x78(r4)
    lwz r3, 0x5624(r3)
    bl fn_8006A900
    li r0, 0x1
    stw r0, 0x566c(r31)
lbl_fn_80370C6C_0000099C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80370CD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, lbl_8087F448
    cmpwi r0, 0x0
    beq lbl_fn_80370CD0_000009F0
    lfs f1, lbl_8088570C
    mr r3, r0
    li r4, 0x0
    li r5, 0x1e
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_80370CD0_000009F0:
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_80370CD0_00000A14
    lwz r3, 0x258(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80370CD0_00000A14
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80370CD0_00000A14:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_80370CD0_00000A80
    lwz r0, 0x5638(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80370CD0_00000A80
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80370CD0_00000A80
    lwz r30, 0x48(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80370CD0_00000A80
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_80370CD0_00000A80
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_80370CD0_00000A80
    lwz r3, lbl_8087F498
    li r4, 0x0
    lfs f1, lbl_80885708
    li r5, 0x26
    lfs f2, lbl_8088572C
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_80370CD0_00000A80:
    lwz r3, lbl_8087F8A0
    li r0, 0x0
    lwz r3, 0x48(r3)
    b lbl_fn_80370CD0_00000A98
lbl_fn_80370CD0_00000A90:
    stw r0, 0xd18(r3)
    lwz r3, 0x14ac(r3)
lbl_fn_80370CD0_00000A98:
    cmpwi r3, 0x0
    bne lbl_fn_80370CD0_00000A90
    lwz r3, lbl_8087F408
    li r0, 0x0
    lwz r3, 0x48(r3)
    b lbl_fn_80370CD0_00000AB8
lbl_fn_80370CD0_00000AB0:
    stw r0, 0xd18(r3)
    lwz r3, 0x14ac(r3)
lbl_fn_80370CD0_00000AB8:
    cmpwi r3, 0x0
    bne lbl_fn_80370CD0_00000AB0
    lwz r0, 0x54e4(r31)
    cmpwi r0, 0x8
    bne lbl_fn_80370CD0_00000AF0
    lwz r3, lbl_8087F540
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F540
    bl fn_8048169C
    lwz r3, lbl_8087F540
    bl fn_8047E528
lbl_fn_80370CD0_00000AF0:
    lwz r3, lbl_8087F490
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    bl fn_803B57EC
    lwz r3, lbl_8087F490
    li r4, 0x1
    lwz r3, 0x2640(r3)
    bl fn_803B6C88
    lwz r3, lbl_8087F048
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EE68
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F8A0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F9E8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x10d8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80370CD0_00000B98
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80370CD0_00000B98:
    lwz r3, 0x56f0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80370CD0_00000BB0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x56f0(r31)
lbl_fn_80370CD0_00000BB0:
    lwz r0, 0x1430(r31)
    li r3, 0x0
    stw r3, 0x56f4(r31)
    li r4, 0x0
    cmpwi r0, 0x0
    stw r3, 0x571c(r31)
    beq lbl_fn_80370CD0_00000BD0
    li r4, 0x1
lbl_fn_80370CD0_00000BD0:
    mr r3, r31
    bl fn_80376B68
    lwz r4, 0x5624(r31)
    li r9, 0x0
    lis r3, 0x100
    li r8, -0x1
    stw r9, 0x4c(r4)
    subi r7, r3, 0x1
    li r6, 0x2
    li r5, 0x1e
    lwz r3, 0x5624(r31)
    li r4, 0x1
    lfs f1, lbl_808857C8
    li r0, 0x6
    stw r8, 0x6c(r3)
    lfs f0, lbl_80885750
    lwz r3, 0x5624(r31)
    stw r7, 0x70(r3)
    lwz r3, 0x5624(r31)
    stw r6, 0x58(r3)
    lwz r3, 0x5624(r31)
    stw r9, 0x5c(r3)
    lwz r3, 0x5624(r31)
    stw r5, 0x54(r3)
    lwz r3, 0x5624(r31)
    stw r4, 0x50(r3)
    lwz r3, 0x5624(r31)
    stfs f1, 0x74(r3)
    lwz r3, 0x5624(r31)
    stw r4, 0x48(r3)
    lwz r3, 0x5624(r31)
    stfs f0, 0x74(r3)
    stw r0, 0x54e4(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80370F8C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80370F8C_00000CA4
    lwz r4, 0x154c(r3)
    addi r0, r4, 0x1
    stw r0, 0x574c(r3)
lbl_fn_80370F8C_00000CA4:
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_80370F8C_00000CC8
    lwz r3, 0x258(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80370F8C_00000CC8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_80370F8C_00000CC8:
    lwz r3, lbl_8087F490
    li r4, 0x1
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F048
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EE68
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F8A0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F9E8
    li r4, 0x1
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F490
    li r4, 0x1
    lwz r3, 0x2640(r3)
    bl fn_803B6C88
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80370F8C_00000D70
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80370F8C_00000D70
    bl fn_805AA738
    lwz r3, lbl_8087F430
    bl fn_803743AC
lbl_fn_80370F8C_00000D70:
    lwz r3, lbl_8087F540
    li r4, 0x0
    lfs f1, lbl_80885708
    li r5, 0x3c
    lwz r0, 0x38(r3)
    li r6, 0x1
    li r7, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F448
    bl fn_8037D4C0
    cmpwi r31, 0x0
    bne lbl_fn_80370F8C_00000E10
    cmpwi r30, 0x0
    beq lbl_fn_80370F8C_00000DDC
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r9, r30
    li r4, 0x0
    lwz r3, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    li r10, 0x12
    bl fn_8036F268
    b lbl_fn_80370F8C_00000E28
lbl_fn_80370F8C_00000DDC:
    li r0, 0x0
    stw r0, 0x8(r1)
    li r4, 0x0
    li r5, 0x0
    lwz r8, 0x562c(r29)
    li r6, 0x0
    lwz r3, lbl_8087F430
    li r7, 0x0
    addi r9, r8, 0xb8
    li r8, 0x1
    li r10, 0x12
    bl fn_8036F268
    b lbl_fn_80370F8C_00000E28
lbl_fn_80370F8C_00000E10:
    lwz r3, 0x10d8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80370F8C_00000E28
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_80370F8C_00000E28:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80371164(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, 0x3
    stw r0, 0x24(r1)
    addi r0, r5, 0x1128
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r4, 0x10d0(r3)
    cmpw r4, r0
    blt lbl_fn_80371164_00000E84
    addi r0, r5, 0x20c8
    cmpw r4, r0
    bge lbl_fn_80371164_00000E84
    li r6, 0x193
    b lbl_fn_80371164_00000EB0
lbl_fn_80371164_00000E84:
    lis r5, 0x3
    addi r0, r5, 0x20c8
    cmpw r4, r0
    blt lbl_fn_80371164_00000EAC
    lis r5, 0x5
    subi r0, r5, 0x6838
    cmpw r4, r0
    bge lbl_fn_80371164_00000EAC
    li r6, 0x198
    b lbl_fn_80371164_00000EB0
lbl_fn_80371164_00000EAC:
    li r6, 0xc9
lbl_fn_80371164_00000EB0:
    lwz r5, 0x10d8(r3)
    li r30, 0x0
    cmpwi r5, 0x0
    beq lbl_fn_80371164_00000EC8
    lwz r0, 0x64(r5)
    b lbl_fn_80371164_00000ECC
lbl_fn_80371164_00000EC8:
    li r0, 0x0
lbl_fn_80371164_00000ECC:
    cmpwi r0, 0x0
    beq lbl_fn_80371164_00000F24
    cmpwi r5, 0x0
    beq lbl_fn_80371164_00000EE4
    lwz r3, 0x64(r5)
    b lbl_fn_80371164_00000EE8
lbl_fn_80371164_00000EE4:
    li r3, 0x0
lbl_fn_80371164_00000EE8:
    cmpwi r5, 0x0
    lwz r0, 0x48(r3)
    beq lbl_fn_80371164_00000EFC
    lwz r3, 0x64(r5)
    b lbl_fn_80371164_00000F00
lbl_fn_80371164_00000EFC:
    li r3, 0x0
lbl_fn_80371164_00000F00:
    cmpwi r0, 0x2
    lwz r0, 0x4c(r3)
    bne lbl_fn_80371164_00000F24
    cmpwi r0, 0x16
    beq lbl_fn_80371164_00000F1C
    cmpwi r0, 0x14
    bne lbl_fn_80371164_00000F24
lbl_fn_80371164_00000F1C:
    li r6, 0x138
    li r30, 0x1
lbl_fn_80371164_00000F24:
    lwz r5, lbl_8087F430
    mr r3, r6
    lwz r5, 0x1270(r5)
    bl fn_80216544
    cmpwi r3, 0x0
    mr r7, r3
    beq lbl_fn_80371164_00000F84
    li r0, 0x1
    stw r0, 0x5668(r31)
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x8(r1)
    mr r3, r31
    lbz r4, 0x0(r7)
    lbz r5, 0x1(r7)
    lbz r6, 0x2(r7)
    beq lbl_fn_80371164_00000F70
    li r7, 0xc8
    b lbl_fn_80371164_00000F74
lbl_fn_80371164_00000F70:
    lwz r7, 0x4(r7)
lbl_fn_80371164_00000F74:
    li r8, 0x1
    li r9, 0x0
    li r10, 0x12
    bl fn_8036F268
lbl_fn_80371164_00000F84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803712BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x5
    lis r5, 0xff00
    stw r0, 0x14(r1)
    lis r6, 0xff00
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x20(r3)
    bl fn_8006A250
    li r0, 0x1
    stw r0, 0x48(r3)
    lis r4, lbl_8074DC1C@ha
    stw r0, 0x68(r3)
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0x1af
    lwz r3, lbl_8087F9AC
    bl fn_80572B70
    mr r3, r31
    bl fn_800D2338
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80371320(void)
{
    nofralloc
    lwz r3, 0x10e0(r3)
    cmpwi r3, 0x0
    beqlr
    stw r4, 0x50(r3)
    blr
}

asm void fn_80371334(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x94(r1)
    li r0, 0x8
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    stw r0, 0x54e4(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F490
    li r4, 0x1
    lwz r3, 0x2640(r3)
    bl fn_803B6C88
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_80371334_00001078
    lwz r3, 0x258(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80371334_00001078
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80371334_00001078:
    lwz r3, 0x5590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80371334_000010A0
    li r4, 0x1
    bl fn_80570A18
    lwz r3, 0x5590(r31)
    bl fn_80570A68
    li r0, 0x0
    stw r0, 0x5594(r31)
    stw r0, 0x55a4(r31)
lbl_fn_80371334_000010A0:
    lfs f0, lbl_8088570C
    li r30, 0x0
    stw r30, 0x5650(r31)
    stw r30, 0x5654(r31)
    stfs f0, 0x5658(r31)
    stw r30, 0x565c(r31)
    lwz r3, lbl_8087F580
    bl fn_804A2F98
    lwz r3, lbl_8087F048
    addis r3, r3, 0x1
    stw r30, -0x3454(r3)
    lwz r3, lbl_8087F8A8
    bl fn_8054E520
    lwz r3, 0x56f0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80371334_000010E8
    bl fn_800D2338
    stw r30, 0x56f0(r31)
lbl_fn_80371334_000010E8:
    lwz r3, lbl_8087F9E8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    bl fn_80450B28
    lwz r3, lbl_8087F040
    bl fn_800F1378
    lwz r4, lbl_8087EFA8
    li r9, 0x0
    stw r9, 0x60(r1)
    lwz r10, 0x378(r4)
    lfs f12, 0x37c(r4)
    lfs f11, 0x380(r4)
    lfs f10, 0x384(r4)
    lfs f9, 0x388(r4)
    lfs f8, 0x38c(r4)
    lfs f7, 0x390(r4)
    lfs f6, 0x394(r4)
    stfs f12, 0x10(r1)
    stw r9, 0x374(r4)
    lwz r0, 0x10(r1)
    stw r10, 0x378(r4)
    stfs f11, 0x14(r1)
    stw r0, 0x37c(r4)
    lwz r3, 0x14(r1)
    stfs f10, 0x18(r1)
    stw r3, 0x380(r4)
    lwz r0, 0x18(r1)
    stfs f9, 0x1c(r1)
    stw r0, 0x384(r4)
    lwz r0, 0x1c(r1)
    stw r0, 0x388(r4)
    stfs f8, 0x38c(r4)
    stfs f7, 0x390(r4)
    stfs f6, 0x394(r4)
    lwz r8, lbl_8087EFA8
    lwz r11, 0x10d8(r31)
    lwz r7, 0xd4(r8)
    lwz r6, 0xd8(r8)
    cmpwi r11, 0x0
    lwz r5, 0xdc(r8)
    lwz r4, 0xe0(r8)
    lfs f5, 0xe4(r8)
    lfs f4, 0xe8(r8)
    lfs f3, 0xec(r8)
    lfs f2, 0xf0(r8)
    lwz r3, 0xf4(r8)
    lwz r0, 0xf8(r8)
    lfs f1, 0xfc(r8)
    lfs f0, 0x100(r8)
    stw r10, 0x64(r1)
    stfs f12, 0x68(r1)
    stfs f11, 0x6c(r1)
    stfs f10, 0x70(r1)
    stfs f9, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f7, 0x7c(r1)
    stfs f6, 0x80(r1)
    stw r9, 0x8(r1)
    stw r10, 0xc(r1)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f6, 0x28(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f0, 0x5c(r1)
    beq lbl_fn_80371334_0000121C
    lwz r9, 0x64(r11)
lbl_fn_80371334_0000121C:
    lfs f2, 0xf0(r9)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x30(r1)
    stw r0, 0xd4(r4)
    lwz r0, 0x34(r1)
    stw r0, 0xd8(r4)
    lwz r0, 0x38(r1)
    stw r0, 0xdc(r4)
    lwz r0, 0x3c(r1)
    stw r0, 0xe0(r4)
    lfs f0, 0x40(r1)
    stfs f0, 0xe4(r4)
    lfs f0, 0x44(r1)
    stfs f0, 0xe8(r4)
    lfs f0, 0x48(r1)
    stfs f0, 0xec(r4)
    lwz r3, 0x50(r1)
    stfs f2, 0xf0(r4)
    lwz r0, 0x54(r1)
    stw r3, 0xf4(r4)
    lfs f1, 0x58(r1)
    stw r0, 0xf8(r4)
    lfs f0, 0x5c(r1)
    stfs f1, 0xfc(r4)
    stfs f0, 0x100(r4)
    lwz r3, lbl_8087F498
    stfs f2, 0x4c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80371334_000012A8
    li r4, 0x0
    li r5, 0x0
    bl fn_803EB4A8
    lwz r3, lbl_8087F498
    li r4, 0x0
    bl fn_803EAC3C
lbl_fn_80371334_000012A8:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80371334_00001300
    lwz r30, 0x48(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80371334_00001300
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80371334_00001300
    lwz r0, 0x560(r30)
    cmpwi r0, 0xd
    bne lbl_fn_80371334_00001300
    mr r3, r30
    bl fn_8016DA4C
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r4, 0x870(r31)
    addi r3, r31, 0x6c
    bl fn_80389838
lbl_fn_80371334_00001300:
    lwz r3, lbl_8087F4E8
    li r30, 0x0
    li r4, 0xa
    stw r30, 0x88(r3)
    lwz r3, lbl_8087EF70
    bl fn_800A5B30
    li r3, 0x1
    bl fn_806055A0
    stw r30, 0x5768(r31)
    stw r30, 0x5774(r31)
    stw r30, 0x5770(r31)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80371664(void)
{
    nofralloc
    addis r3, r3, 0x1
    li r0, 0x0
    stw r0, -0x3454(r3)
    blr
}

asm void fn_80371674(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x54e4(r3)
    lwz r4, lbl_8087FA20
    cmpwi r4, 0x0
    beq lbl_fn_80371674_00001398
    lwz r4, 0x258(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80371674_00001398
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
lbl_fn_80371674_00001398:
    lwz r3, 0x5590(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80371674_000013B8
    li r4, 0x0
    bl fn_80570A18
    lwz r3, 0x5590(r30)
    li r4, 0x0
    bl fn_80570A44
lbl_fn_80371674_000013B8:
    li r31, 0x0
    stw r31, 0x5650(r30)
    stw r31, 0x5654(r30)
    lwz r3, lbl_8087F580
    bl fn_804A2FBC
    lwz r0, 0x96c(r30)
    lfs f0, lbl_8088570C
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    stw r31, 0x970(r30)
    subf r0, r3, r0
    stw r0, 0x96c(r30)
    stfs f0, 0x974(r30)
    stfs f0, 0x978(r30)
    stw r31, 0x5674(r30)
    lwz r3, lbl_8087F9E8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    bl fn_80450B44
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80371674_00001424
    li r4, 0x0
    li r5, 0x0
    bl fn_803EB4A8
lbl_fn_80371674_00001424:
    lwz r3, lbl_8087F4E8
    li r0, 0x1
    li r4, 0x5
    stw r0, 0x88(r3)
    lwz r3, lbl_8087EF70
    bl fn_800A5B30
    li r3, 0x0
    bl fn_806055A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037177C(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x5768(r3)
    stw r0, 0x5774(r3)
    stw r0, 0x5770(r3)
    blr
}

asm void fn_80371790(void)
{
    nofralloc
    stwu r1, -0x8c0(r1)
    mflr r0
    stw r0, 0x8c4(r1)
    li r0, 0x8b8
    addi r11, r1, 0x820
    stfd f31, 0x8b0(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x8a8
    stfd f30, 0x8a0(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x898
    stfd f29, 0x890(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0x888
    stfd f28, 0x880(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0x878
    stfd f27, 0x870(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0x868
    stfd f26, 0x860(r1)
    psq_stx f26, r1, r0, 0, 0
    li r0, 0x858
    stfd f25, 0x850(r1)
    psq_stx f25, r1, r0, 0, 0
    li r0, 0x848
    stfd f24, 0x840(r1)
    psq_stx f24, r1, r0, 0, 0
    li r0, 0x838
    stfd f23, 0x830(r1)
    psq_stx f23, r1, r0, 0, 0
    li r0, 0x828
    stfd f22, 0x820(r1)
    psq_stx f22, r1, r0, 0, 0
    bl _savegpr_14
    lwz r4, lbl_8087F4F0
    li r0, 0x0
    stw r0, 0x7bc(r1)
    mr r15, r3
    addi r0, r4, 0x601c
    addi r3, r3, 0xd18
    stw r0, 0x7c0(r1)
    li r0, 0x0
    stw r0, 0x7b8(r1)
    bl fn_803786F0
    li r16, 0x0
    stw r16, 0x330(r1)
    addi r17, r1, 0x334
    addi r14, r1, 0x7b4
lbl_fn_80371790_00001534:
    stw r16, 0x0(r17)
    addi r3, r17, 0x4
    li r4, 0x0
    li r5, 0x7c
    bl memset
    stw r16, 0x80(r17)
    stw r16, 0x84(r17)
    stw r16, 0x88(r17)
    stw r16, 0x8c(r17)
    addi r17, r17, 0x90
    cmplw r17, r14
    blt lbl_fn_80371790_00001534
    lwz r3, 0x7c0(r1)
    li r5, 0x0
    addi r4, r3, 0x4
    b lbl_fn_80371790_000016BC
lbl_fn_80371790_00001574:
    lwz r0, 0x330(r1)
    addi r3, r1, 0x334
    mulli r0, r0, 0x90
    add. r3, r3, r0
    beq lbl_fn_80371790_000016A8
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lwz r0, 0x24(r4)
    stw r0, 0x24(r3)
    lwz r0, 0x2c(r4)
    lwz r6, 0x28(r4)
    stw r6, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, 0x34(r4)
    lwz r6, 0x30(r4)
    stw r6, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0x3c(r4)
    lwz r6, 0x38(r4)
    stw r6, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x44(r4)
    lwz r6, 0x40(r4)
    stw r6, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x4c(r4)
    lwz r6, 0x48(r4)
    stw r6, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x54(r4)
    lwz r6, 0x50(r4)
    stw r6, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x5c(r4)
    lwz r6, 0x58(r4)
    stw r6, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, 0x64(r4)
    lwz r6, 0x60(r4)
    stw r6, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x6c(r4)
    lwz r6, 0x68(r4)
    stw r6, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x74(r4)
    lwz r6, 0x70(r4)
    stw r6, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x7c(r4)
    lwz r6, 0x78(r4)
    stw r6, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x80(r4)
    stw r0, 0x80(r3)
    lwz r0, 0x84(r4)
    stw r0, 0x84(r3)
    lwz r0, 0x88(r4)
    stw r0, 0x88(r3)
    lwz r0, 0x8c(r4)
    stw r0, 0x8c(r3)
lbl_fn_80371790_000016A8:
    lwz r3, 0x330(r1)
    addi r4, r4, 0x90
    addi r5, r5, 0x1
    addi r0, r3, 0x1
    stw r0, 0x330(r1)
lbl_fn_80371790_000016BC:
    lwz r3, 0x7c0(r1)
    lwz r0, 0x0(r3)
    cmplw r5, r0
    blt lbl_fn_80371790_00001574
    lwz r3, lbl_8087F4F0
    addis r4, r3, 0x1
    lwz r0, -0x20d0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80371790_00001820
    lwz r0, 0x330(r1)
    addi r3, r1, 0x334
    mulli r0, r0, 0x90
    add. r3, r3, r0
    beq lbl_fn_80371790_00001814
    lwz r0, -0x20d0(r4)
    stw r0, 0x0(r3)
    lwz r0, -0x20cc(r4)
    stw r0, 0x4(r3)
    lwz r0, -0x20c8(r4)
    stw r0, 0x8(r3)
    lfs f0, -0x20c4(r4)
    stfs f0, 0xc(r3)
    lfs f0, -0x20c0(r4)
    stfs f0, 0x10(r3)
    lfs f0, -0x20bc(r4)
    stfs f0, 0x14(r3)
    lfs f0, -0x20b8(r4)
    stfs f0, 0x18(r3)
    lfs f0, -0x20b4(r4)
    stfs f0, 0x1c(r3)
    lfs f0, -0x20b0(r4)
    stfs f0, 0x20(r3)
    lwz r0, -0x20ac(r4)
    stw r0, 0x24(r3)
    lwz r0, -0x20a4(r4)
    lwz r5, -0x20a8(r4)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x209c(r4)
    lwz r5, -0x20a0(r4)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, -0x2094(r4)
    lwz r5, -0x2098(r4)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, -0x208c(r4)
    lwz r5, -0x2090(r4)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, -0x2084(r4)
    lwz r5, -0x2088(r4)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, -0x207c(r4)
    lwz r5, -0x2080(r4)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, -0x2074(r4)
    lwz r5, -0x2078(r4)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x206c(r4)
    lwz r5, -0x2070(r4)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, -0x2064(r4)
    lwz r5, -0x2068(r4)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, -0x205c(r4)
    lwz r5, -0x2060(r4)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, -0x2054(r4)
    lwz r5, -0x2058(r4)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, -0x2050(r4)
    stw r0, 0x80(r3)
    lwz r0, -0x204c(r4)
    stw r0, 0x84(r3)
    lwz r0, -0x2048(r4)
    stw r0, 0x88(r3)
    lwz r0, -0x2044(r4)
    stw r0, 0x8c(r3)
lbl_fn_80371790_00001814:
    lwz r3, 0x330(r1)
    addi r0, r3, 0x1
    stw r0, 0x330(r1)
lbl_fn_80371790_00001820:
    lwz r3, 0x5590(r15)
    cmpwi r3, 0x0
    beq lbl_fn_80371790_00001848
    li r4, 0x1
    bl fn_80570A18
    lwz r3, 0x5590(r15)
    bl fn_80570A68
    li r0, 0x0
    stw r0, 0x5594(r15)
    stw r0, 0x55a4(r15)
lbl_fn_80371790_00001848:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80371790_00001860
    lwz r3, 0x558c(r15)
    bl fn_8056B3D8
lbl_fn_80371790_00001860:
    li r0, 0x0
    stw r0, 0x7b4(r1)
    lfs f27, lbl_808857D0
    addi r26, r1, 0x80
    lfs f28, lbl_8088570C
    addi r27, r1, 0x68
    stw r0, 0x7c4(r1)
    addi r25, r1, 0x300
    lfs f29, lbl_80885708
    addi r23, r1, 0x130
    stw r0, 0x7c8(r1)
    addi r14, r1, 0x1f0
    lfs f30, lbl_8088574C
    addi r24, r1, 0x190
    lfs f31, lbl_8088579C
    addi r22, r1, 0xa0
    lfs f23, lbl_80885768
    li r31, 0x0
    lfs f22, lbl_80885764
    lis r28, 0x8000
    lfs f24, lbl_8088576C
    lis r29, lbl_8074DBF0@ha
    b lbl_fn_80371790_0000200C
lbl_fn_80371790_000018BC:
    addi r21, r1, 0x334
    add r21, r21, r31
    lwz r0, 0x8c(r21)
    cmpwi r0, 0x0
    bgt lbl_fn_80371790_000018E8
    lwz r4, lbl_8087F4F0
    lwz r3, 0x0(r21)
    addis r4, r4, 0x1
    lwz r0, -0x20d0(r4)
    cmplw r3, r0
    bne lbl_fn_80371790_00001FFC
lbl_fn_80371790_000018E8:
    lwz r20, 0x0(r21)
    li r3, 0x0
    lwz r4, 0x38(r20)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80371790_00001910
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_80371790_00001910
    li r3, 0x1
lbl_fn_80371790_00001910:
    cmpwi r3, 0x0
    beq lbl_fn_80371790_00001FFC
    lwz r0, 0x7b8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80371790_00001928
    stw r20, 0x7b8(r1)
lbl_fn_80371790_00001928:
    lwz r3, lbl_8087F0A8
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80371790_00001954
    mr r4, r20
    addi r3, r15, 0xd18
    addi r5, r20, 0x528
    addi r6, r20, 0x534
    li r7, 0x0
    bl fn_8037865C
    b lbl_fn_80371790_00001FF0
lbl_fn_80371790_00001954:
    mr r3, r20
    bl fn_80179D44
    mr r5, r3
    lwz r3, 0x10d8(r15)
    lfs f1, lbl_808857CC
    addi r4, r20, 0x528
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    subi r0, r3, 0x1
    lwz r3, 0x10d8(r15)
    mulli r0, r0, 0x30
    li r16, 0x0
    lwz r3, 0x9c(r3)
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    addi r3, r1, 0x74
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x534(r20), 0, 0
    lfs f2, 0x53c(r20)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80371790_000019B8:
    psq_l f1, 0x0(r26), 0, 0
    addi r3, r1, 0x2a8
    psq_st f1, 0x0(r27), 0, 0
    li r4, 0x79
    lfs f2, 0x88(r1)
    lfs f0, 0x6c(r1)
    lfs f1, 0x78(r1)
    fadds f0, f0, f27
    stfs f2, 0x70(r1)
    stfs f0, 0x6c(r1)
    stfs f28, 0x5c(r1)
    stfs f28, 0x60(r1)
    stfs f29, 0x64(r1)
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0x2a8
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x64(r1)
    mr r5, r27
    lfs f7, 0x60(r1)
    addi r6, r1, 0x50
    fmuls f9, f8, f30
    lfs f0, 0x5c(r1)
    fmuls f10, f7, f30
    lfs f8, 0x70(r1)
    fmuls f11, f0, f30
    lfs f7, 0x6c(r1)
    lfs f0, 0x68(r1)
    fadds f8, f8, f9
    fadds f7, f7, f10
    stfs f11, 0x44(r1)
    fadds f0, f0, f11
    lwz r3, lbl_8087EE98
    stfs f10, 0x48(r1)
    addi r7, r28, 0x8
    stfs f9, 0x4c(r1)
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f8, 0x58(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80371790_00001AAC
    lfs f0, 0x78(r1)
    lfd f2, lbl_8074DBF0@l(r29)
    fadds f1, f31, f0
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f22
    ble lbl_fn_80371790_00001A90
    fsubs f0, f0, f23
lbl_fn_80371790_00001A90:
    fcmpo cr0, f0, f24
    bge lbl_fn_80371790_00001A9C
    fadds f0, f0, f23
lbl_fn_80371790_00001A9C:
    addi r16, r16, 0x1
    stfs f0, 0x78(r1)
    cmpwi r16, 0x4
    blt lbl_fn_80371790_000019B8
lbl_fn_80371790_00001AAC:
    lwz r3, 0x50(r20)
    li r19, 0x0
    cmpwi r3, 0x1
    bne lbl_fn_80371790_00001B40
    bl fn_80219558
    mr r18, r3
    li r17, 0x1
    b lbl_fn_80371790_00001B34
lbl_fn_80371790_00001ACC:
    lwz r0, 0x874(r20)
    mr r3, r18
    subf r4, r17, r0
    bl fn_80219160
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80371790_00001B28
    li r16, 0x0
lbl_fn_80371790_00001AEC:
    add r3, r30, r16
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80371790_00001B1C
    mr r4, r16
    addi r3, r20, 0x7d4
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_80371790_00001B1C
    li r19, 0x1
    b lbl_fn_80371790_00001B28
lbl_fn_80371790_00001B1C:
    addi r16, r16, 0x1
    cmpwi r16, 0x80
    blt lbl_fn_80371790_00001AEC
lbl_fn_80371790_00001B28:
    cmpwi r19, 0x0
    bne lbl_fn_80371790_00001B40
    addi r17, r17, 0x1
lbl_fn_80371790_00001B34:
    lwz r0, 0x8c(r21)
    cmpw r17, r0
    ble lbl_fn_80371790_00001ACC
lbl_fn_80371790_00001B40:
    lwz r3, 0x50(r20)
    bl fn_80219558
    lwz r0, 0x7c0(r1)
    li r17, 0x0
    add r4, r0, r31
    lwz r0, 0x874(r20)
    lwz r4, 0x90(r4)
    subf r4, r4, r0
    bl fn_80219160
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_fn_80371790_00001BAC
    li r18, 0x0
lbl_fn_80371790_00001B74:
    add r3, r16, r18
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80371790_00001BA0
    mr r4, r18
    addi r3, r20, 0x7d4
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_80371790_00001BA0
    addi r17, r17, 0x1
lbl_fn_80371790_00001BA0:
    addi r18, r18, 0x1
    cmpwi r18, 0x80
    blt lbl_fn_80371790_00001B74
lbl_fn_80371790_00001BAC:
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    lwz r0, -0x2040(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80371790_00001BC8
    li r19, 0x1
    addi r17, r17, 0x1
lbl_fn_80371790_00001BC8:
    mr r3, r20
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_8014DEE4
    cmpwi r19, 0x0
    beq lbl_fn_80371790_00001C0C
    lfs f1, lbl_80885708
    addi r3, r20, 0xb0
    lfs f2, lbl_808857B4
    li r4, 0x0
    li r5, 0x177
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80371790_00001C9C
lbl_fn_80371790_00001C0C:
    lwz r3, 0x5c(r20)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80371790_00001C44
    lfs f1, lbl_80885708
    addi r3, r20, 0xb0
    lfs f2, lbl_808857B4
    li r4, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80371790_00001C9C
lbl_fn_80371790_00001C44:
    lwz r0, 0x50(r20)
    cmpwi r0, 0x1
    bne lbl_fn_80371790_00001C78
    lfs f1, lbl_80885708
    addi r3, r20, 0xb0
    lfs f2, lbl_808857B4
    li r4, 0x0
    li r5, 0x5
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80371790_00001C9C
lbl_fn_80371790_00001C78:
    lfs f1, lbl_80885708
    addi r3, r20, 0xb0
    lfs f2, lbl_808857B4
    li r4, 0x0
    li r5, 0x3
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80371790_00001C9C:
    li r0, 0x1
    stw r0, 0x3fc(r20)
    addi r3, r1, 0x300
    stfs f29, 0x2fc(r20)
    stfs f29, 0x2e8(r20)
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_805F90D0
    lfs f1, 0x78(r1)
    stfs f28, 0x15c(r1)
    fcmpu cr0, f28, f1
    stfs f28, 0x154(r1)
    stfs f28, 0x150(r1)
    stfs f28, 0x14c(r1)
    stfs f28, 0x148(r1)
    stfs f28, 0x140(r1)
    stfs f28, 0x13c(r1)
    stfs f28, 0x138(r1)
    stfs f28, 0x134(r1)
    stfs f29, 0x158(r1)
    stfs f29, 0x144(r1)
    stfs f29, 0x130(r1)
    beq lbl_fn_80371790_00001D4C
    addi r3, r1, 0x220
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x220
    addi r5, r1, 0x250
    bl fn_805F89F0
    addi r3, r1, 0x250
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80371790_00001D4C:
    lfs f1, 0x74(r1)
    fcmpu cr0, f28, f1
    beq lbl_fn_80371790_00001DA4
    addi r3, r1, 0x1c0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x1c0
    addi r5, r1, 0x1f0
    bl fn_805F89F0
    psq_l f1, 0x0(r14), 0, 0
    psq_l f2, 0x8(r14), 0, 0
    psq_l f3, 0x10(r14), 0, 0
    psq_l f4, 0x18(r14), 0, 0
    psq_l f5, 0x20(r14), 0, 0
    psq_l f6, 0x28(r14), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80371790_00001DA4:
    lfs f1, 0x7c(r1)
    fcmpu cr0, f28, f1
    beq lbl_fn_80371790_00001DFC
    addi r3, r1, 0x160
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x160
    addi r5, r1, 0x190
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80371790_00001DFC:
    mr r3, r25
    mr r4, r23
    addi r5, r1, 0x100
    bl fn_805F89F0
    addi r4, r1, 0x100
    addi r3, r1, 0x100
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    lfs f1, 0x540(r20)
    lfs f2, 0x544(r20)
    lfs f3, 0x548(r20)
    bl fn_805F9160
    addi r3, r1, 0x300
    addi r4, r1, 0xd0
    addi r5, r1, 0xa0
    bl fn_805F89F0
    psq_l f2, 0x8(r22), 0, 0
    addi r3, r1, 0x14
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f1, 0xb8(r20), 0, 0
    psq_st f2, 0xc0(r20), 0, 0
    psq_st f3, 0xc8(r20), 0, 0
    psq_st f4, 0xd0(r20), 0, 0
    psq_st f5, 0xd8(r20), 0, 0
    psq_st f6, 0xe0(r20), 0, 0
    lfs f8, 0x328(r1)
    lfs f7, 0x318(r1)
    lfs f0, 0x308(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x324(r1)
    fmr f25, f1
    lfs f7, 0x314(r1)
    addi r3, r1, 0x20
    lfs f0, 0x304(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x320(r1)
    fmr f26, f1
    lfs f7, 0x310(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x300(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f26
    stfs f1, 0x8(r1)
    frsp f0, f25
    stfs f26, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f25, 0x10(r1)
    ble lbl_fn_80371790_00001F38
    b lbl_fn_80371790_00001F3C
lbl_fn_80371790_00001F38:
    fmr f7, f0
lbl_fn_80371790_00001F3C:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80371790_00001F4C
    b lbl_fn_80371790_00001F64
lbl_fn_80371790_00001F4C:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80371790_00001F60
    b lbl_fn_80371790_00001F64
lbl_fn_80371790_00001F60:
    fmr f8, f0
lbl_fn_80371790_00001F64:
    stfs f8, 0x104(r20)
    addi r3, r20, 0xb0
    li r4, 0x1
    bl fn_80097E80
    lwz r0, 0x7c4(r1)
    addi r3, r20, 0xb0
    stw r0, 0x8c(r1)
    addi r4, r1, 0x8c
    bl fn_8000D430
    addic. r0, r1, 0x8c
    beq lbl_fn_80371790_00001FC8
    lwz r3, 0x8c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80371790_00001FC8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80371790_00001FC0
    mr r3, r0
    li r5, 0x1
    addi r3, r3, 0x4
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80371790_00001FC0:
    lwz r0, 0x7c8(r1)
    stw r0, 0x8c(r1)
lbl_fn_80371790_00001FC8:
    lfs f1, lbl_8088572C
    mr r3, r20
    bl fn_80148B38
    stfs f28, 0x2e4(r20)
    mr r4, r20
    mr r7, r17
    addi r3, r15, 0xd18
    addi r5, r1, 0x80
    addi r6, r1, 0x74
    bl fn_8037865C
lbl_fn_80371790_00001FF0:
    lwz r3, 0x7bc(r1)
    addi r3, r3, 0x1
    stw r3, 0x7bc(r1)
lbl_fn_80371790_00001FFC:
    lwz r3, 0x7b4(r1)
    addi r31, r31, 0x90
    addi r3, r3, 0x1
    stw r3, 0x7b4(r1)
lbl_fn_80371790_0000200C:
    lwz r3, 0x330(r1)
    lwz r0, 0x7b4(r1)
    cmplw r0, r3
    blt lbl_fn_80371790_000018BC
    addi r3, r15, 0x56dc
    bl fn_804786F8
    mr r4, r3
    addi r3, r15, 0xd18
    li r5, 0x0
    bl fn_8037C690
    lwz r0, 0x7bc(r1)
    cmpwi r0, 0x0
    bgt lbl_fn_80371790_0000204C
    lwz r3, lbl_8087F4F0
    bl fn_8044D028
    b lbl_fn_80371790_000021C4
lbl_fn_80371790_0000204C:
    lfs f0, lbl_8088570C
    addi r3, r15, 0xd18
    lwz r5, 0x7b8(r1)
    addi r6, r1, 0x38
    stfs f0, 0x38(r1)
    li r4, 0x5
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_80378610
    addi r3, r15, 0xd18
    li r4, 0x0
    bl fn_803786FC
    addi r3, r15, 0xd18
    bl fn_803792F0
    li r0, 0x9
    stw r0, 0x54e4(r15)
    li r4, 0x1
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    bl fn_803B57B0
    lwz r3, lbl_8087F490
    li r4, 0x1
    lwz r3, 0x2640(r3)
    bl fn_803B6C88
    lwz r3, lbl_8087F580
    bl fn_804A2F98
    lwz r3, lbl_8087F048
    li r14, 0x0
    addis r3, r3, 0x1
    stw r14, -0x3454(r3)
    lwz r3, lbl_8087F8A8
    bl fn_8054E520
    lwz r5, lbl_8087EFA8
    stw r14, 0x2d8(r1)
    lwz r4, 0x378(r5)
    lfs f12, 0x37c(r5)
    lfs f11, 0x380(r5)
    lfs f10, 0x384(r5)
    lfs f9, 0x388(r5)
    lfs f8, 0x38c(r5)
    lfs f7, 0x390(r5)
    lfs f0, 0x394(r5)
    stfs f12, 0x288(r1)
    stw r14, 0x374(r5)
    lwz r0, 0x288(r1)
    stw r4, 0x378(r5)
    stfs f11, 0x28c(r1)
    stw r0, 0x37c(r5)
    lwz r3, 0x28c(r1)
    stfs f10, 0x290(r1)
    stw r3, 0x380(r5)
    lwz r0, 0x290(r1)
    stfs f9, 0x294(r1)
    stw r0, 0x384(r5)
    lwz r0, 0x294(r1)
    stw r0, 0x388(r5)
    stfs f8, 0x38c(r5)
    stfs f7, 0x390(r5)
    stfs f0, 0x394(r5)
    lwz r3, lbl_8087F0A8
    stw r4, 0x2dc(r1)
    lwz r0, 0xd0(r3)
    stfs f12, 0x2e0(r1)
    cmpwi r0, 0x1
    stfs f11, 0x2e4(r1)
    stfs f10, 0x2e8(r1)
    stfs f9, 0x2ec(r1)
    stfs f8, 0x2f0(r1)
    stfs f7, 0x2f4(r1)
    stfs f0, 0x2f8(r1)
    stw r14, 0x280(r1)
    stw r4, 0x284(r1)
    stfs f8, 0x298(r1)
    stfs f7, 0x29c(r1)
    stfs f0, 0x2a0(r1)
    bne lbl_fn_80371790_0000218C
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_80371790_0000219C
lbl_fn_80371790_0000218C:
    lwz r3, lbl_8087F8A0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80371790_0000219C:
    lwz r3, lbl_8087F428
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x10d8(r15)
    bl fn_800D246C
lbl_fn_80371790_000021C4:
    li r0, 0x8b8
    addi r11, r1, 0x820
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x8b0(r1)
    li r0, 0x8a8
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x8a0(r1)
    li r0, 0x898
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x890(r1)
    li r0, 0x888
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0x880(r1)
    li r0, 0x878
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0x870(r1)
    li r0, 0x868
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0x860(r1)
    li r0, 0x858
    psq_lx f25, r1, r0, 0, 0
    lfd f25, 0x850(r1)
    li r0, 0x848
    psq_lx f24, r1, r0, 0, 0
    lfd f24, 0x840(r1)
    li r0, 0x838
    psq_lx f23, r1, r0, 0, 0
    lfd f23, 0x830(r1)
    li r0, 0x828
    psq_lx f22, r1, r0, 0, 0
    lfd f22, 0x820(r1)
    bl _restgpr_14
    lwz r0, 0x8c4(r1)
    mtlr r0
    addi r1, r1, 0x8c0
    blr
}
