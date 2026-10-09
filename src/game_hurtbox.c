#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void fn_800DD3FC(void);
extern void fn_800FFE68(void);
extern void fn_8016F3D0(void);
extern void fn_80206C50(void);
extern void fn_80211480(void);
extern void fn_80219E6C(void);
extern void fn_8021AF50(void);
extern void fn_8021BE98(void);
extern void fn_80373148(void);
extern void fn_8047961C(void);
extern void fn_804EB7C8(void);
extern void fn_804EB818(void);
extern void fn_8054D798(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_806868C4(void);
extern void fn_80686A64(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 jumptable_80779D18[];
extern u8 lbl_80735AB0[];
extern u8 lbl_80735EC8[];
extern u8 lbl_80779DF4[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F528;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9C0;
extern u32 lbl_808813D0;
extern u32 lbl_80881478;
extern u32 lbl_808814B8;
extern u32 lbl_80881500;
extern u32 lbl_80881530;
extern u32 lbl_808815D4;
extern u32 lbl_808815D8;

/* Function declarations */
void fn_801088B8(void);
void fn_8010895C(void);
void fn_80108A54(void);
void fn_80108A5C(void);
void fn_80108C10(void);
void fn_80108F38(void);
void fn_801092C8(void);
void fn_80109828(void);
void fn_80109864(void);
void fn_80109950(void);

asm void fn_801088B8(void)
{
    nofralloc
    lwz r0, 0x6d8(r3)
    li r8, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801088B8_00000034
lbl_fn_801088B8_00000018:
    lwz r6, 0x6d4(r3)
    lhax r0, r6, r7
    cmpw r4, r0
    bne lbl_fn_801088B8_0000002C
    addi r8, r8, 0x1
lbl_fn_801088B8_0000002C:
    addi r7, r7, 0x2
    bdnz lbl_fn_801088B8_00000018
lbl_fn_801088B8_00000034:
    cmpwi r8, 0xa
    bgelr
    li r8, 0x0
    li r7, 0x0
    b lbl_fn_801088B8_00000070
lbl_fn_801088B8_00000048:
    lwz r0, 0x6d4(r3)
    addi r8, r8, 0x1
    add r6, r0, r7
    lha r0, 0x2(r6)
    sth r0, 0x0(r6)
    lwz r0, 0x6d0(r3)
    add r6, r0, r7
    addi r7, r7, 0x2
    lha r0, 0x2(r6)
    sth r0, 0x0(r6)
lbl_fn_801088B8_00000070:
    lwz r6, 0x6d8(r3)
    subi r0, r6, 0x1
    cmpw r8, r0
    blt lbl_fn_801088B8_00000048
    lwz r6, 0x6d4(r3)
    slwi r0, r0, 1
    sthx r4, r6, r0
    lwz r4, 0x6d8(r3)
    lwz r3, 0x6d0(r3)
    subi r0, r4, 0x1
    slwi r0, r0, 1
    sthx r5, r3, r0
    blr
}

asm void fn_8010895C(void)
{
    nofralloc
    li r10, 0x0
    li r9, 0x0
    li r8, -0x1
    li r7, 0x0
    b lbl_fn_8010895C_000000E4
lbl_fn_8010895C_000000B8:
    lwz r6, 0x6d4(r3)
    lhax r0, r6, r9
    cmpw r4, r0
    bne lbl_fn_8010895C_000000DC
    sthx r8, r6, r9
    cmpwi r5, 0x0
    lwz r6, 0x6d0(r3)
    sthx r7, r6, r9
    beq lbl_fn_8010895C_000000F0
lbl_fn_8010895C_000000DC:
    addi r9, r9, 0x2
    addi r10, r10, 0x1
lbl_fn_8010895C_000000E4:
    lwz r0, 0x6d8(r3)
    cmpw r10, r0
    blt lbl_fn_8010895C_000000B8
lbl_fn_8010895C_000000F0:
    li r7, 0x1
    li r8, 0x0
    li r5, 0x0
    b lbl_fn_8010895C_0000018C
lbl_fn_8010895C_00000100:
    lwz r4, 0x6d4(r3)
    lhax r6, r4, r5
    cmpwi r6, 0x0
    blt lbl_fn_8010895C_00000124
    lwz r4, 0x6d0(r3)
    lhax r0, r4, r5
    cmpwi r0, 0x0
    ble lbl_fn_8010895C_00000124
    li r7, 0x0
lbl_fn_8010895C_00000124:
    cmpwi r7, 0x0
    bne lbl_fn_8010895C_00000184
    cmpwi r6, 0x0
    blt lbl_fn_8010895C_00000144
    lwz r4, 0x6d0(r3)
    lhax r0, r4, r5
    cmpwi r0, 0x0
    bne lbl_fn_8010895C_00000184
lbl_fn_8010895C_00000144:
    addi r9, r8, 0x1
    slwi r4, r9, 1
    b lbl_fn_8010895C_00000178
lbl_fn_8010895C_00000150:
    lwz r0, 0x6d4(r3)
    addi r9, r9, 0x1
    add r6, r0, r4
    lhax r0, r4, r0
    sth r0, -0x2(r6)
    lwz r0, 0x6d0(r3)
    add r6, r0, r4
    lhax r0, r4, r0
    sth r0, -0x2(r6)
    addi r4, r4, 0x2
lbl_fn_8010895C_00000178:
    lwz r0, 0x6d8(r3)
    cmpw r9, r0
    blt lbl_fn_8010895C_00000150
lbl_fn_8010895C_00000184:
    addi r5, r5, 0x2
    addi r8, r8, 0x1
lbl_fn_8010895C_0000018C:
    lwz r0, 0x6d8(r3)
    cmpw r8, r0
    blt lbl_fn_8010895C_00000100
    blr
}

asm void fn_80108A54(void)
{
    nofralloc
    addi r5, r4, 0x534
    b fn_80108A5C
}

asm void fn_80108A5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r31, 0xfc0(r4)
    mr r28, r3
    lwz r27, lbl_8087F0A8
    mr r29, r4
    cmpwi r31, 0x0
    mr r30, r5
    beq lbl_fn_80108A5C_000002C4
    lwz r7, 0x38(r31)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80108A5C_00000200
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80108A5C_00000200
    li r6, 0x1
lbl_fn_80108A5C_00000200:
    cmpwi r6, 0x0
    beq lbl_fn_80108A5C_0000021C
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80108A5C_0000021C
    li r3, 0x1
lbl_fn_80108A5C_0000021C:
    cmpwi r3, 0x0
    beq lbl_fn_80108A5C_00000250
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80108A5C_00000244
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_80108A5C_00000244
    li r3, 0x1
lbl_fn_80108A5C_00000244:
    cmpwi r3, 0x0
    bne lbl_fn_80108A5C_00000250
    li r5, 0x1
lbl_fn_80108A5C_00000250:
    cmpwi r5, 0x0
    bne lbl_fn_80108A5C_00000260
    li r31, 0x0
    b lbl_fn_80108A5C_000002C4
lbl_fn_80108A5C_00000260:
    lfs f1, 0x530(r31)
    addi r3, r1, 0x8
    lfs f0, 0x530(r4)
    lfs f3, 0x52c(r31)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r4)
    lfs f1, 0x528(r31)
    lfs f0, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, 0x268(r27)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_80108A5C_000002C4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80108A5C_000002C0
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1e
    beq lbl_fn_80108A5C_000002C4
lbl_fn_80108A5C_000002C0:
    li r31, 0x0
lbl_fn_80108A5C_000002C4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80108A5C_00000308
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80108A5C_00000308
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3f
    bne lbl_fn_80108A5C_00000308
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80108A5C_00000308
    li r31, 0x0
lbl_fn_80108A5C_00000308:
    cmpwi r31, 0x0
    bne lbl_fn_80108A5C_0000033C
    lfs f1, 0x264(r27)
    mr r3, r28
    lfs f2, 0x26c(r27)
    mr r4, r29
    mr r5, r30
    li r6, 0x0
    li r7, 0x1
    bl fn_800FFE68
    cmpwi r3, 0x0
    beq lbl_fn_80108A5C_0000033C
    mr r31, r3
lbl_fn_80108A5C_0000033C:
    stw r31, 0xfc0(r29)
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80108C10(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r24, 0x60(r1)
    mr r28, r5
    mr r27, r4
    mr r29, r6
    mr r30, r7
    mr r31, r8
    lwz r3, 0x0(r4)
    subi r5, r3, 0x1
    li r3, 0x0
    cmplwi r5, 0x4
    bgt lbl_fn_80108C10_000003A4
    li r0, 0x1
    slw r0, r0, r5
    andi. r0, r0, 0x19
    beq lbl_fn_80108C10_000003A4
    li r3, 0x1
lbl_fn_80108C10_000003A4:
    cmpwi r3, 0x0
    beq lbl_fn_80108C10_0000066C
    cmpwi r9, 0x0
    beq lbl_fn_80108C10_000003D0
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80108C10_000003D0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80108C10_000003D0
    b lbl_fn_80108C10_0000066C
lbl_fn_80108C10_000003D0:
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    bne lbl_fn_80108C10_00000430
    cmpwi r7, 0x0
    beq lbl_fn_80108C10_00000408
    lwz r0, 0x48(r7)
    cmpwi r0, 0x0
    beq lbl_fn_80108C10_000003F8
    cmpwi r0, 0x3
    bne lbl_fn_80108C10_00000408
lbl_fn_80108C10_000003F8:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80108C10_0000066C
lbl_fn_80108C10_00000408:
    cmpwi r7, 0x0
    beq lbl_fn_80108C10_00000588
    lwz r0, 0x48(r7)
    cmpwi r0, 0x2
    bne lbl_fn_80108C10_00000588
    lwz r3, lbl_8087F9C0
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80108C10_00000588
    b lbl_fn_80108C10_0000066C
lbl_fn_80108C10_00000430:
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_80108C10_00000444
    lwz r26, 0x48(r4)
    b lbl_fn_80108C10_00000448
lbl_fn_80108C10_00000444:
    li r26, 0x0
lbl_fn_80108C10_00000448:
    cmpwi r6, 0x0
    beq lbl_fn_80108C10_00000520
    lwz r0, 0x12a4(r6)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80108C10_00000520
    lwz r4, lbl_8087F610
    lwz r0, 0x540(r4)
    cmpwi r0, 0x2
    beq lbl_fn_80108C10_000004D8
    cmpwi r26, 0x0
    beq lbl_fn_80108C10_00000588
    cmpwi r7, 0x0
    beq lbl_fn_80108C10_000004A4
    mr r3, r30
    mr r4, r26
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_80108C10_000004A4
    lwz r3, lbl_8087F9C0
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80108C10_0000066C
lbl_fn_80108C10_000004A4:
    cmpwi r30, 0x0
    beq lbl_fn_80108C10_00000588
    mr r3, r30
    mr r4, r26
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_80108C10_00000588
    lwz r3, lbl_8087F9C0
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80108C10_00000588
    b lbl_fn_80108C10_0000066C
lbl_fn_80108C10_000004D8:
    mr r4, r30
    bl fn_804EB7C8
    cmpwi r3, 0x0
    beq lbl_fn_80108C10_000004F8
    lwz r3, lbl_8087F9C0
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80108C10_0000066C
lbl_fn_80108C10_000004F8:
    lwz r3, lbl_8087F610
    mr r4, r30
    bl fn_804EB818
    cmpwi r3, 0x0
    beq lbl_fn_80108C10_00000588
    lwz r3, lbl_8087F9C0
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80108C10_00000588
    b lbl_fn_80108C10_0000066C
lbl_fn_80108C10_00000520:
    cmpwi r26, 0x0
    beq lbl_fn_80108C10_00000588
    cmpwi r6, 0x0
    beq lbl_fn_80108C10_00000558
    mr r3, r29
    mr r4, r26
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_80108C10_00000558
    lwz r3, lbl_8087F9C0
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80108C10_0000066C
lbl_fn_80108C10_00000558:
    cmpwi r29, 0x0
    beq lbl_fn_80108C10_00000588
    mr r3, r29
    mr r4, r26
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_80108C10_00000588
    lwz r3, lbl_8087F9C0
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80108C10_0000066C
lbl_fn_80108C10_00000588:
    lwz r26, 0x4(r27)
    li r25, 0x0
    cmpwi r26, 0x0
    bge lbl_fn_80108C10_000005A0
    li r25, 0x1
    neg r26, r26
lbl_fn_80108C10_000005A0:
    cmpwi r29, 0x0
    li r24, 0x1
    beq lbl_fn_80108C10_000005C4
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80108C10_000005C4
    cmpwi r25, 0x1
    beq lbl_fn_80108C10_000005C4
    li r24, 0x0
lbl_fn_80108C10_000005C4:
    rlwinm r3, r31, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80108C10_000005F0
    cmpwi r30, 0x0
    rlwinm r31, r31, 0, 29, 27
    beq lbl_fn_80108C10_000005F0
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80108C10_000005F0
    li r24, 0x0
lbl_fn_80108C10_000005F0:
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x40
    bl memset
    lis r4, lbl_80779DF4@ha
    mr r6, r26
    addi r4, r4, lbl_80779DF4@l
    addi r3, r1, 0x20
    addi r5, r4, 0x26
    li r4, 0x20
    crclr 6
    bl fn_806868C4
    stw r29, 0x8(r1)
    mr r4, r25
    mr r6, r28
    mr r8, r31
    stw r30, 0xc(r1)
    addi r5, r1, 0x20
    li r7, 0x0
    stw r24, 0x10(r1)
    lwz r0, 0x14(r27)
    stw r0, 0x14(r1)
    lwz r0, 0x18(r27)
    stw r0, 0x18(r1)
    lwz r10, 0xc(r27)
    lwz r3, lbl_8087F8A8
    neg r0, r10
    lwz r9, 0x10(r27)
    or r0, r0, r10
    srwi r10, r0, 31
    bl fn_8054D798
lbl_fn_80108C10_0000066C:
    lmw r24, 0x60(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80108F38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x400
    mr r6, r4
    stw r0, 0x24(r1)
    li r7, 0x0
    li r4, 0x3
    beq lbl_fn_80108F38_00000968
    bge lbl_fn_80108F38_0000071C
    cmpwi r5, 0x20
    beq lbl_fn_80108F38_00000834
    bge lbl_fn_80108F38_000006EC
    cmpwi r5, 0x4
    beq lbl_fn_80108F38_000007FC
    bge lbl_fn_80108F38_000006D4
    cmpwi r5, 0x2
    beq lbl_fn_80108F38_000007E0
    bge lbl_fn_80108F38_000009BC
    cmpwi r5, 0x1
    bge lbl_fn_80108F38_000007A8
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000006D4:
    cmpwi r5, 0x10
    beq lbl_fn_80108F38_00000818
    bge lbl_fn_80108F38_000009BC
    cmpwi r5, 0x8
    beq lbl_fn_80108F38_00000930
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000006EC:
    cmpwi r5, 0x100
    beq lbl_fn_80108F38_00000888
    bge lbl_fn_80108F38_00000710
    cmpwi r5, 0x80
    beq lbl_fn_80108F38_0000086C
    bge lbl_fn_80108F38_000009BC
    cmpwi r5, 0x40
    beq lbl_fn_80108F38_00000850
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000710:
    cmpwi r5, 0x200
    beq lbl_fn_80108F38_00000930
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_0000071C:
    lis r0, 0x8
    cmpw r5, r0
    beq lbl_fn_80108F38_00000914
    bge lbl_fn_80108F38_00000768
    lis r3, 0x1
    cmpw r5, r3
    beq lbl_fn_80108F38_000008DC
    bge lbl_fn_80108F38_00000758
    addi r0, r3, -0x8000
    cmpw r5, r0
    beq lbl_fn_80108F38_000008C0
    bge lbl_fn_80108F38_000009BC
    cmpwi r5, 0x4000
    beq lbl_fn_80108F38_000008A4
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000758:
    lis r0, 0x4
    cmpw r5, r0
    beq lbl_fn_80108F38_000008F8
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000768:
    lis r0, 0x100
    cmpw r5, r0
    beq lbl_fn_80108F38_00000984
    bge lbl_fn_80108F38_00000798
    lis r0, 0x80
    cmpw r5, r0
    beq lbl_fn_80108F38_0000094C
    bge lbl_fn_80108F38_000009BC
    lis r0, 0x40
    cmpw r5, r0
    beq lbl_fn_80108F38_000007C4
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000798:
    lis r0, 0x200
    cmpw r5, r0
    beq lbl_fn_80108F38_000009A0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000007A8:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x104(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_000007BC
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000007BC:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000007C4:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x184(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_000007D8
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000007D8:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000007E0:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x10c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_000007F4
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000007F4:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000007FC:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x114(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000810
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000810:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000818:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x11c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_0000082C
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_0000082C:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000834:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x124(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000848
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000848:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000850:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x12c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000864
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000864:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_0000086C:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x134(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000880
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000880:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000888:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x13c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_0000089C
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_0000089C:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000008A4:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x144(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_000008B8
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000008B8:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000008C0:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x14c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_000008D4
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000008D4:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000008DC:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x154(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_000008F0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000008F0:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000008F8:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x15c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_0000090C
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_0000090C:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000914:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x1dc(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000928
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000928:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000930:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x16c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000944
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000944:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_0000094C:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x174(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000960
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000960:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000968:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x17c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_0000097C
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_0000097C:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000984:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x18c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000998
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_00000998:
    la r7, lbl_808813D0
    b lbl_fn_80108F38_000009BC
lbl_fn_80108F38_000009A0:
    lwz r3, lbl_8087F1E4
    lwz r7, 0x194(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_000009B4
    b lbl_fn_80108F38_000009B8
lbl_fn_80108F38_000009B4:
    la r7, lbl_808813D0
lbl_fn_80108F38_000009B8:
    li r4, 0x4
lbl_fn_80108F38_000009BC:
    cmpwi r7, 0x0
    beq lbl_fn_80108F38_00000A00
    li r5, 0x0
    stw r5, 0x8(r1)
    li r3, 0x1
    li r0, -0x1
    stw r5, 0xc(r1)
    mr r5, r7
    li r7, -0xbc
    li r8, 0x0
    stw r3, 0x10(r1)
    li r9, 0x1
    li r10, 0x0
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    lwz r3, lbl_8087F8A8
    bl fn_8054D798
lbl_fn_80108F38_00000A00:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801092C8(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stmw r26, 0x208(r1)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    lwz r3, lbl_8087F0A8
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801092C8_00000F5C
    lwz r0, lbl_8087F528
    cmpwi r0, 0x0
    bne lbl_fn_801092C8_00000A50
    b lbl_fn_801092C8_00000F5C
lbl_fn_801092C8_00000A50:
    mulli r0, r4, 0xc
    lis r4, lbl_80735AB0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80735AB0@l
    add r30, r4, r0
    li r31, 0x0
    li r4, 0x0
    li r5, 0x200
    bl memset
    cmplwi r26, 0x1f
    bgt lbl_fn_801092C8_00000F44
    lis r3, jumptable_80779D18@ha
    slwi r0, r26, 2
    addi r3, r3, jumptable_80779D18@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    subi r0, r28, 0x43
    cmplwi r0, 0x1
    bgt lbl_fn_801092C8_00000AA4
    li r31, 0x1
lbl_fn_801092C8_00000AA4:
    lwz r0, lbl_8087F1E4
    slwi r4, r28, 3
    addi r3, r1, 0x8
    add r4, r0, r4
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000AC4
    b lbl_fn_801092C8_00000AC8
lbl_fn_801092C8_00000AC4:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000AC8:
    bl fn_80686A64
    b lbl_fn_801092C8_00000F44
    mr r3, r28
    li r31, 0x1
    bl fn_80211480
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_801092C8_00000B24
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000B0C
    b lbl_fn_801092C8_00000B10
lbl_fn_801092C8_00000B0C:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000B10:
    lwz r5, 0x8(r5)
    mr r6, r29
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
lbl_fn_801092C8_00000B24:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0xbc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000B3C
    b lbl_fn_801092C8_00000B40
lbl_fn_801092C8_00000B3C:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000B40:
    mr r5, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    mr r3, r28
    li r31, 0x1
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_801092C8_00000BCC
    lwz r3, 0xb8(r3)
    lwz r7, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r3, r0, 3
    addi r4, r7, 0x4
    lwzx r0, r4, r3
    cmpwi r0, 0x0
    beq lbl_fn_801092C8_00000B90
    add r3, r7, r3
    lwz r5, 0x4(r3)
    b lbl_fn_801092C8_00000B94
lbl_fn_801092C8_00000B90:
    la r5, lbl_808813D0
lbl_fn_801092C8_00000B94:
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    slwi r6, r0, 3
    lwzx r0, r4, r6
    cmpwi r0, 0x0
    beq lbl_fn_801092C8_00000BB8
    add r4, r7, r6
    lwz r4, 0x4(r4)
    b lbl_fn_801092C8_00000BBC
lbl_fn_801092C8_00000BB8:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000BBC:
    mr r6, r29
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
lbl_fn_801092C8_00000BCC:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0xbc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000BE4
    b lbl_fn_801092C8_00000BE8
lbl_fn_801092C8_00000BE4:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000BE8:
    mr r5, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    li r31, 0x1
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000C20
    b lbl_fn_801092C8_00000C24
lbl_fn_801092C8_00000C20:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000C24:
    mr r5, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000C58
    b lbl_fn_801092C8_00000C5C
lbl_fn_801092C8_00000C58:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000C5C:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    li r31, 0x1
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000C90
    b lbl_fn_801092C8_00000C94
lbl_fn_801092C8_00000C90:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000C94:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    b lbl_fn_801092C8_00000F5C
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    lwz r5, 0x60(r27)
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000CCC
    b lbl_fn_801092C8_00000CD0
lbl_fn_801092C8_00000CCC:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000CD0:
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    mr r3, r28
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r6, r3
    beq lbl_fn_801092C8_00000D44
    cmpwi r27, 0x0
    beq lbl_fn_801092C8_00000D44
    lwz r5, 0x60(r27)
    cmpwi r5, 0x0
    beq lbl_fn_801092C8_00000D44
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000D2C
    b lbl_fn_801092C8_00000D30
lbl_fn_801092C8_00000D2C:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000D30:
    lwz r5, 0x4(r5)
    lwz r6, 0x8(r6)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
lbl_fn_801092C8_00000D44:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0xc4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000D5C
    b lbl_fn_801092C8_00000D60
lbl_fn_801092C8_00000D5C:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000D60:
    mr r5, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    mr r3, r28
    bl fn_8021AF50
    cmpwi r3, 0x0
    beq lbl_fn_801092C8_00000DE0
    cmpwi r27, 0x0
    beq lbl_fn_801092C8_00000DE0
    lwz r5, 0x60(r27)
    cmpwi r5, 0x0
    beq lbl_fn_801092C8_00000DE0
    lwz r6, 0xc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801092C8_00000DA4
    b lbl_fn_801092C8_00000DA8
lbl_fn_801092C8_00000DA4:
    la r6, lbl_808813D0
lbl_fn_801092C8_00000DA8:
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000DCC
    b lbl_fn_801092C8_00000DD0
lbl_fn_801092C8_00000DCC:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000DD0:
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
lbl_fn_801092C8_00000DE0:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lwz r4, 0xc4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000DF8
    b lbl_fn_801092C8_00000DFC
lbl_fn_801092C8_00000DF8:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000DFC:
    mr r5, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    cmpwi r27, 0x0
    beq lbl_fn_801092C8_00000F44
    lwz r5, 0x60(r27)
    cmpwi r5, 0x0
    beq lbl_fn_801092C8_00000F44
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000E44
    b lbl_fn_801092C8_00000E48
lbl_fn_801092C8_00000E44:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000E48:
    lwz r5, 0x4(r5)
    mr r6, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000E80
    b lbl_fn_801092C8_00000E84
lbl_fn_801092C8_00000E80:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000E84:
    mr r5, r28
    mr r6, r29
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    lwz r5, 0x60(r27)
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000EC0
    b lbl_fn_801092C8_00000EC4
lbl_fn_801092C8_00000EC0:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000EC4:
    lwz r5, 0x4(r5)
    mr r6, r28
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801092C8_00000F44
    mr r3, r28
    bl fn_8021AF50
    cmpwi r27, 0x0
    beq lbl_fn_801092C8_00000F44
    lwz r5, 0x60(r27)
    cmpwi r5, 0x0
    beq lbl_fn_801092C8_00000F44
    cmpwi r3, 0x0
    beq lbl_fn_801092C8_00000F44
    lwz r6, 0xc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801092C8_00000F0C
    b lbl_fn_801092C8_00000F10
lbl_fn_801092C8_00000F0C:
    la r6, lbl_808813D0
lbl_fn_801092C8_00000F10:
    lwz r0, 0x0(r30)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F1E4
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801092C8_00000F34
    b lbl_fn_801092C8_00000F38
lbl_fn_801092C8_00000F34:
    la r4, lbl_808813D0
lbl_fn_801092C8_00000F38:
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
lbl_fn_801092C8_00000F44:
    lwz r3, lbl_8087F528
    mr r7, r31
    lwz r5, 0x4(r30)
    addi r4, r1, 0x8
    lwz r6, 0x8(r30)
    bl fn_8047961C
lbl_fn_801092C8_00000F5C:
    lmw r26, 0x208(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80109828(void)
{
    nofralloc
    lwz r3, lbl_8087F0A8
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    blelr
    lwz r3, lbl_8087F528
    cmpwi r3, 0x0
    bne lbl_fn_80109828_00000F90
    blr
lbl_fn_80109828_00000F90:
    cmpwi r4, 0x0
    beqlr
    li r5, -0x3301
    li r6, 0x0
    li r7, 0x0
    b fn_8047961C
    blr
}

asm void fn_80109864(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    stw r31, 0x41c(r1)
    stw r30, 0x418(r1)
    mr r30, r5
    stw r29, 0x414(r1)
    mr r29, r4
    lwz r3, lbl_8087F0A8
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80109864_0000107C
    lwz r0, lbl_8087F528
    cmpwi r0, 0x0
    bne lbl_fn_80109864_00000FEC
    b lbl_fn_80109864_0000107C
lbl_fn_80109864_00000FEC:
    addi r3, r1, 0x208
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r31, 0x22c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80109864_00001010
    b lbl_fn_80109864_00001014
lbl_fn_80109864_00001010:
    la r31, lbl_808813D0
lbl_fn_80109864_00001014:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x200
    bl memset
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_8021BE98
    cmpwi r3, 0x0
    beq lbl_fn_80109864_00001054
    lwz r5, 0x60(r30)
    mr r4, r31
    addi r3, r1, 0x208
    addi r6, r1, 0x8
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
lbl_fn_80109864_00001054:
    lhz r0, 0x208(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80109864_0000107C
    lis r5, 0xffcd
    lwz r3, lbl_8087F528
    addi r4, r1, 0x208
    li r6, 0x2
    subi r5, r5, 0x3334
    li r7, 0x0
    bl fn_8047961C
lbl_fn_80109864_0000107C:
    lwz r0, 0x424(r1)
    lwz r31, 0x41c(r1)
    lwz r30, 0x418(r1)
    lwz r29, 0x414(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_80109950(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    stfd f26, 0x100(r1)
    psq_st f26, 0x108(r1), 0, 0
    stfd f25, 0xf0(r1)
    psq_st f25, 0xf8(r1), 0, 0
    stfd f24, 0xe0(r1)
    psq_st f24, 0xe8(r1), 0, 0
    stfd f23, 0xd0(r1)
    psq_st f23, 0xd8(r1), 0, 0
    bl _savegpr_22
    lwz r29, 0xd1c(r5)
    mr r26, r3
    mr r27, r5
    cmpwi r29, 0x0
    bne lbl_fn_80109950_0000111C
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80109950_00001664
lbl_fn_80109950_0000111C:
    lwz r30, 0x125c(r29)
    addi r31, r29, 0x125c
    cmplwi r30, 0x1
    bgt lbl_fn_80109950_00001140
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80109950_00001664
lbl_fn_80109950_00001140:
    lwz r0, 0x0(r31)
    addi r7, r31, 0x4
    li r6, 0x0
    slwi r0, r0, 3
    add r4, r31, r0
    addi r4, r4, 0x4
    b lbl_fn_80109950_00001174
lbl_fn_80109950_0000115C:
    lwz r0, 0x4(r7)
    cmplw r0, r5
    bne lbl_fn_80109950_00001170
    li r6, 0x1
    b lbl_fn_80109950_0000117C
lbl_fn_80109950_00001170:
    addi r7, r7, 0x8
lbl_fn_80109950_00001174:
    cmplw r7, r4
    bne lbl_fn_80109950_0000115C
lbl_fn_80109950_0000117C:
    cmpwi r6, 0x0
    bne lbl_fn_80109950_00001198
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80109950_00001664
lbl_fn_80109950_00001198:
    lfs f31, 0x538(r29)
    addi r24, r31, 0x4
    lfs f24, lbl_808814B8
    li r28, 0x0
    lfs f30, lbl_80881478
    li r25, 0x0
    b lbl_fn_80109950_00001248
lbl_fn_80109950_000011B4:
    lwz r4, 0x4(r24)
    addi r3, r1, 0x38
    lfs f0, 0x530(r29)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F9920
    lwz r3, 0x4(r24)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80109950_0000120C
    lfs f30, 0x0(r24)
    mr r28, r3
    b lbl_fn_80109950_00001254
lbl_fn_80109950_0000120C:
    cmpwi r0, 0x2
    bne lbl_fn_80109950_0000122C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x64
    bge lbl_fn_80109950_0000122C
    lfs f30, 0x0(r24)
    mr r28, r3
    b lbl_fn_80109950_00001254
lbl_fn_80109950_0000122C:
    fcmpo cr0, f1, f24
    bge lbl_fn_80109950_00001240
    fmr f24, f1
    lfs f30, 0x0(r24)
    mr r28, r3
lbl_fn_80109950_00001240:
    addi r24, r24, 0x8
    addi r25, r25, 0x1
lbl_fn_80109950_00001248:
    lwz r0, 0x0(r31)
    cmplw r25, r0
    blt lbl_fn_80109950_000011B4
lbl_fn_80109950_00001254:
    lfs f24, lbl_80881478
    addi r24, r31, 0x4
    li r25, 0x0
    b lbl_fn_80109950_00001284
lbl_fn_80109950_00001264:
    lwz r3, 0x4(r24)
    lwz r12, 0x0(r3)
    lwz r12, 0xa0(r12)
    mtctr r12
    bctrl
    fadds f24, f24, f1
    addi r24, r24, 0x8
    addi r25, r25, 0x1
lbl_fn_80109950_00001284:
    lwz r0, 0x0(r31)
    cmplw r25, r0
    blt lbl_fn_80109950_00001264
    lfs f0, lbl_80881530
    fcmpo cr0, f24, f0
    bge lbl_fn_80109950_000012B0
    psq_l f1, 0x528(r27), 0, 0
    lfs f2, 0x530(r27)
    stfs f2, 0x8(r26)
    psq_st f1, 0x0(r26), 0, 0
    b lbl_fn_80109950_00001664
lbl_fn_80109950_000012B0:
    fdivs f29, f0, f24
    cmplw r28, r27
    bne lbl_fn_80109950_000012D0
    psq_l f1, 0x528(r27), 0, 0
    lfs f2, 0x530(r27)
    stfs f2, 0x8(r26)
    psq_st f1, 0x0(r26), 0, 0
    b lbl_fn_80109950_00001664
lbl_fn_80109950_000012D0:
    subic. r23, r30, 0x1
    addi r0, r23, 0x1
    slwi r3, r23, 3
    mtctr r0
    blt lbl_fn_80109950_00001308
lbl_fn_80109950_000012E4:
    add r4, r31, r3
    lwz r0, 0x8(r4)
    cmplw r0, r28
    bne lbl_fn_80109950_000012FC
    subi r23, r23, 0x1
    b lbl_fn_80109950_00001308
lbl_fn_80109950_000012FC:
    subi r23, r23, 0x1
    subi r3, r3, 0x8
    bdnz lbl_fn_80109950_000012E4
lbl_fn_80109950_00001308:
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0xa0(r12)
    mtctr r12
    bctrl
    fmuls f0, f29, f1
    lfs f28, lbl_80881500
    lfs f26, lbl_80881530
    li r22, 0x0
    lfs f27, lbl_808815D4
    lis r25, lbl_80735EC8@ha
    fmuls f23, f28, f0
    lfs f25, lbl_808815D8
    lfs f24, lbl_80881478
lbl_fn_80109950_00001340:
    cmpwi r23, 0x0
    bge lbl_fn_80109950_0000134C
    subi r23, r30, 0x1
lbl_fn_80109950_0000134C:
    slwi r0, r23, 3
    lfd f2, lbl_80735EC8@l(r25)
    add r24, r31, r0
    lfs f0, 0x4(r24)
    fsubs f1, f30, f0
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f27
    ble lbl_fn_80109950_00001374
    fsubs f0, f0, f26
lbl_fn_80109950_00001374:
    fcmpo cr0, f0, f25
    bge lbl_fn_80109950_00001380
    fadds f0, f0, f26
lbl_fn_80109950_00001380:
    fcmpo cr0, f0, f24
    blt lbl_fn_80109950_000013D8
    lwz r3, 0x8(r24)
    lwz r12, 0x0(r3)
    lwz r12, 0xa0(r12)
    mtctr r12
    bctrl
    fmuls f0, f29, f1
    lwz r3, 0x8(r24)
    cmplw r3, r27
    fmadds f23, f28, f0, f23
    bne lbl_fn_80109950_000013B8
    li r22, 0x1
    b lbl_fn_80109950_000013D8
lbl_fn_80109950_000013B8:
    lwz r12, 0x0(r3)
    lwz r12, 0xa0(r12)
    mtctr r12
    bctrl
    fmuls f0, f29, f1
    subi r23, r23, 0x1
    fmadds f23, f28, f0, f23
    b lbl_fn_80109950_00001340
lbl_fn_80109950_000013D8:
    cmpwi r22, 0x0
    beq lbl_fn_80109950_00001490
    fadds f0, f31, f30
    lwz r4, 0x64(r27)
    lis r3, lbl_80735EC8@ha
    lfs f3, lbl_80881478
    lfs f4, 0x30(r4)
    fsubs f1, f0, f23
    stfs f3, 0x2c(r1)
    lfd f2, lbl_80735EC8@l(r3)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_808815D4
    fcmpo cr0, f1, f0
    ble lbl_fn_80109950_00001424
    lfs f0, lbl_80881530
    fsubs f1, f1, f0
lbl_fn_80109950_00001424:
    lfs f0, lbl_808815D8
    fcmpo cr0, f1, f0
    bge lbl_fn_80109950_00001438
    lfs f0, lbl_80881530
    fadds f1, f1, f0
lbl_fn_80109950_00001438:
    addi r3, r1, 0x78
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x530(r29)
    addi r3, r1, 0x20
    lfs f0, 0x34(r1)
    lfs f4, 0x528(r29)
    fadds f2, f3, f0
    lfs f3, 0x2c(r1)
    lfs f0, 0x52c(r27)
    fadds f3, f4, f3
    stfs f0, 0x24(r1)
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x8(r26)
    b lbl_fn_80109950_00001664
lbl_fn_80109950_00001490:
    li r24, 0x0
    li r3, 0x0
    mtctr r30
    cmpwi r30, 0x0
    ble lbl_fn_80109950_000014C8
lbl_fn_80109950_000014A4:
    add r4, r31, r3
    lwz r0, 0x8(r4)
    cmplw r0, r28
    bne lbl_fn_80109950_000014BC
    addi r24, r24, 0x1
    b lbl_fn_80109950_000014C8
lbl_fn_80109950_000014BC:
    addi r24, r24, 0x1
    addi r3, r3, 0x8
    bdnz lbl_fn_80109950_000014A4
lbl_fn_80109950_000014C8:
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0xa0(r12)
    mtctr r12
    bctrl
    fmuls f0, f29, f1
    lfs f24, lbl_80881500
    lfs f26, lbl_80881530
    li r22, 0x0
    lfs f25, lbl_808815D4
    lis r28, lbl_80735EC8@ha
    fmuls f23, f24, f0
    lfs f27, lbl_808815D8
    lfs f28, lbl_80881478
lbl_fn_80109950_00001500:
    cmpw r24, r30
    blt lbl_fn_80109950_0000150C
    li r24, 0x0
lbl_fn_80109950_0000150C:
    slwi r0, r24, 3
    lfd f2, lbl_80735EC8@l(r28)
    add r25, r31, r0
    lfs f0, 0x4(r25)
    fsubs f1, f30, f0
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f25
    ble lbl_fn_80109950_00001534
    fsubs f0, f0, f26
lbl_fn_80109950_00001534:
    fcmpo cr0, f0, f27
    bge lbl_fn_80109950_00001540
    fadds f0, f0, f26
lbl_fn_80109950_00001540:
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    beq lbl_fn_80109950_0000159C
    lwz r3, 0x8(r25)
    lwz r12, 0x0(r3)
    lwz r12, 0xa0(r12)
    mtctr r12
    bctrl
    fmuls f0, f29, f1
    lwz r3, 0x8(r25)
    cmplw r3, r27
    fmadds f23, f24, f0, f23
    bne lbl_fn_80109950_0000157C
    li r22, 0x1
    b lbl_fn_80109950_0000159C
lbl_fn_80109950_0000157C:
    lwz r12, 0x0(r3)
    lwz r12, 0xa0(r12)
    mtctr r12
    bctrl
    fmuls f0, f29, f1
    addi r24, r24, 0x1
    fmadds f23, f24, f0, f23
    b lbl_fn_80109950_00001500
lbl_fn_80109950_0000159C:
    cmpwi r22, 0x0
    beq lbl_fn_80109950_00001654
    fadds f0, f31, f30
    lwz r4, 0x64(r27)
    lis r3, lbl_80735EC8@ha
    lfs f3, lbl_80881478
    lfs f4, 0x30(r4)
    fadds f1, f23, f0
    stfs f3, 0x14(r1)
    lfd f2, lbl_80735EC8@l(r3)
    stfs f3, 0x18(r1)
    stfs f4, 0x1c(r1)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_808815D4
    fcmpo cr0, f1, f0
    ble lbl_fn_80109950_000015E8
    lfs f0, lbl_80881530
    fsubs f1, f1, f0
lbl_fn_80109950_000015E8:
    lfs f0, lbl_808815D8
    fcmpo cr0, f1, f0
    bge lbl_fn_80109950_000015FC
    lfs f0, lbl_80881530
    fadds f1, f1, f0
lbl_fn_80109950_000015FC:
    addi r3, r1, 0x48
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x530(r29)
    addi r3, r1, 0x8
    lfs f0, 0x1c(r1)
    lfs f4, 0x528(r29)
    fadds f2, f3, f0
    lfs f3, 0x14(r1)
    lfs f0, 0x52c(r27)
    fadds f3, f4, f3
    stfs f0, 0xc(r1)
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x8(r26)
    b lbl_fn_80109950_00001664
lbl_fn_80109950_00001654:
    psq_l f1, 0x528(r27), 0, 0
    lfs f2, 0x530(r27)
    stfs f2, 0x8(r26)
    psq_st f1, 0x0(r26), 0, 0
lbl_fn_80109950_00001664:
    addi r11, r1, 0xd0
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    psq_l f26, 0x108(r1), 0, 0
    lfd f26, 0x100(r1)
    psq_l f25, 0xf8(r1), 0, 0
    lfd f25, 0xf0(r1)
    psq_l f24, 0xe8(r1), 0, 0
    lfd f24, 0xe0(r1)
    psq_l f23, 0xd8(r1), 0, 0
    lfd f23, 0xd0(r1)
    bl _restgpr_22
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
