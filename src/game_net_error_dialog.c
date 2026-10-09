#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_26(void);
extern void fn_800629F0(void);
extern void fn_8006EF48(void);
extern void fn_8009EE30(void);
extern void fn_800BFAC8(void);
extern void fn_800DC6B4(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_801FEEFC(void);
extern void fn_80202118(void);
extern void fn_80202D00(void);
extern void fn_802168BC(void);
extern void fn_8021771C(void);
extern void fn_80370174(void);
extern void fn_804A5E40(void);
extern void fn_8050FD24(void);
extern void fn_8051125C(void);
extern void fn_80521014(void);
extern void fn_805F89F0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);

/* External data declarations */
extern u8 lbl_8075BE80[];
extern u8 lbl_8075BF40[];
extern u8 lbl_80793590[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F580;
extern u32 lbl_80887904;
extern u32 lbl_80887908;
extern u32 lbl_8088790C;
extern u32 lbl_80887918;
extern u32 lbl_80887940;
extern u32 lbl_80887968;
extern u32 lbl_80887984;
extern u32 lbl_80887988;
extern u32 lbl_8088798C;
extern u32 lbl_80887990;
extern u32 lbl_80887994;
extern u32 lbl_80887998;
extern u32 lbl_8088799C;
extern u32 lbl_808879A0;
extern u32 lbl_808879A4;
extern u32 lbl_808879A8;
extern u32 lbl_808879AC;
extern u32 lbl_808879B0;
extern u32 lbl_808879B4;
extern u32 lbl_808879B8;

/* Function declarations */
void fn_8051CF7C(void);
void fn_8051D868(void);

asm void fn_8051CF7C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_26
    lfs f4, 0x19bc(r3)
    mr r28, r3
    lfs f3, lbl_80887908
    lfs f0, lbl_80887988
    fadds f3, f4, f3
    stfs f3, 0x19bc(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_8051CF7C_00000044
    lfs f0, lbl_8088790C
    stfs f0, 0x19bc(r3)
lbl_fn_8051CF7C_00000044:
    mr r3, r28
    bl fn_80521014
    cmpwi r3, 0x0
    bne lbl_fn_8051CF7C_000008CC
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r3, 0x48(r28)
    li r8, 0x0
    lfs f0, lbl_8088798C
    lfs f3, 0x458(r3)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8051CF7C_00000094
    lwz r0, 0x11f0(r3)
    cmplw r0, r28
    bne lbl_fn_8051CF7C_00000094
    li r8, 0x1
lbl_fn_8051CF7C_00000094:
    lfs f3, lbl_80887904
    li r9, 0x0
    lfs f5, lbl_80887990
    li r3, 0x0
    lfs f0, lbl_80887908
    b lbl_fn_8051CF7C_0000018C
lbl_fn_8051CF7C_000000AC:
    lwz r0, 0x3ed0(r28)
    add r5, r28, r3
    mr r7, r28
    lwz r4, 0x19d0(r5)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8051CF7C_000000F4
lbl_fn_8051CF7C_000000CC:
    lwz r0, 0x3ed8(r7)
    cmpw r4, r0
    bne lbl_fn_8051CF7C_000000E8
    mulli r0, r6, 0x1c
    add r4, r28, r0
    addi r0, r4, 0x3ed4
    b lbl_fn_8051CF7C_000000F8
lbl_fn_8051CF7C_000000E8:
    addi r7, r7, 0x1c
    addi r6, r6, 0x1
    bdnz lbl_fn_8051CF7C_000000CC
lbl_fn_8051CF7C_000000F4:
    li r0, 0x0
lbl_fn_8051CF7C_000000F8:
    cmpwi r0, 0x0
    beq lbl_fn_8051CF7C_0000012C
    lwz r0, 0x1998(r28)
    cmpwi r0, 0x4
    beq lbl_fn_8051CF7C_0000012C
    cmpwi r0, 0x5
    beq lbl_fn_8051CF7C_0000012C
    lwz r4, 0x19a8(r28)
    lwz r0, 0x19e0(r5)
    cmpw r4, r0
    bne lbl_fn_8051CF7C_0000012C
    cmpwi r8, 0x0
    bne lbl_fn_8051CF7C_00000140
lbl_fn_8051CF7C_0000012C:
    add r4, r28, r3
    lfs f4, 0x19f8(r4)
    fsubs f4, f4, f5
    stfsu f4, 0x19f8(r4)
    b lbl_fn_8051CF7C_00000150
lbl_fn_8051CF7C_00000140:
    add r4, r28, r3
    lfs f4, 0x19f8(r4)
    fadds f4, f4, f5
    stfsu f4, 0x19f8(r4)
lbl_fn_8051CF7C_00000150:
    lfs f4, 0x0(r4)
    fcmpo cr0, f3, f4
    ble lbl_fn_8051CF7C_00000160
    fmr f4, f3
lbl_fn_8051CF7C_00000160:
    fcmpo cr0, f0, f4
    bge lbl_fn_8051CF7C_00000170
    fmr f4, f0
    b lbl_fn_8051CF7C_00000180
lbl_fn_8051CF7C_00000170:
    lfs f4, 0x0(r4)
    fcmpo cr0, f3, f4
    ble lbl_fn_8051CF7C_00000180
    fmr f4, f3
lbl_fn_8051CF7C_00000180:
    stfs f4, 0x0(r4)
    addi r9, r9, 0x1
    addi r3, r3, 0x94
lbl_fn_8051CF7C_0000018C:
    lwz r0, 0x4c(r28)
    cmpw r9, r0
    blt lbl_fn_8051CF7C_000000AC
    cmpwi r8, 0x0
    beq lbl_fn_8051CF7C_000001D4
    lwz r0, 0x1998(r28)
    cmpwi r0, 0x5
    bne lbl_fn_8051CF7C_000001C0
    lfs f3, 0x19b8(r28)
    lfs f0, lbl_80887994
    fsubs f0, f3, f0
    stfs f0, 0x19b8(r28)
    b lbl_fn_8051CF7C_000001E4
lbl_fn_8051CF7C_000001C0:
    lfs f3, 0x19b8(r28)
    lfs f0, lbl_80887994
    fadds f0, f3, f0
    stfs f0, 0x19b8(r28)
    b lbl_fn_8051CF7C_000001E4
lbl_fn_8051CF7C_000001D4:
    lfs f3, 0x19b8(r28)
    lfs f0, lbl_80887994
    fsubs f0, f3, f0
    stfs f0, 0x19b8(r28)
lbl_fn_8051CF7C_000001E4:
    lfs f3, lbl_80887904
    lfs f0, 0x19b8(r28)
    fcmpo cr0, f3, f0
    ble lbl_fn_8051CF7C_000001F8
    b lbl_fn_8051CF7C_000001FC
lbl_fn_8051CF7C_000001F8:
    fmr f3, f0
lbl_fn_8051CF7C_000001FC:
    lfs f4, lbl_80887908
    fcmpo cr0, f4, f3
    bge lbl_fn_8051CF7C_0000020C
    b lbl_fn_8051CF7C_00000224
lbl_fn_8051CF7C_0000020C:
    lfs f4, lbl_80887904
    lfs f0, 0x19b8(r28)
    fcmpo cr0, f4, f0
    ble lbl_fn_8051CF7C_00000220
    b lbl_fn_8051CF7C_00000224
lbl_fn_8051CF7C_00000220:
    fmr f4, f0
lbl_fn_8051CF7C_00000224:
    lwz r0, 0x19cc(r28)
    mr r5, r28
    stfs f4, 0x19b8(r28)
    li r4, 0x0
    lwz r3, 0x19a4(r28)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8051CF7C_0000026C
lbl_fn_8051CF7C_00000244:
    lwz r0, 0x19d0(r5)
    cmpw r3, r0
    bne lbl_fn_8051CF7C_00000260
    mulli r0, r4, 0x94
    add r3, r28, r0
    addi r31, r3, 0x19d0
    b lbl_fn_8051CF7C_00000270
lbl_fn_8051CF7C_00000260:
    addi r5, r5, 0x94
    addi r4, r4, 0x1
    bdnz lbl_fn_8051CF7C_00000244
lbl_fn_8051CF7C_0000026C:
    li r31, 0x0
lbl_fn_8051CF7C_00000270:
    cmpwi r31, 0x0
    beq lbl_fn_8051CF7C_00000734
    lwz r0, 0x1998(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8051CF7C_00000734
    lwz r0, 0x3ed0(r28)
    mr r5, r28
    lwz r29, 0x1904(r28)
    li r30, 0x0
    lwz r3, 0x0(r31)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8051CF7C_000002D0
lbl_fn_8051CF7C_000002A8:
    lwz r0, 0x3ed8(r5)
    cmpw r3, r0
    bne lbl_fn_8051CF7C_000002C4
    mulli r0, r4, 0x1c
    add r3, r28, r0
    addi r27, r3, 0x3ed4
    b lbl_fn_8051CF7C_000002D4
lbl_fn_8051CF7C_000002C4:
    addi r5, r5, 0x1c
    addi r4, r4, 0x1
    bdnz lbl_fn_8051CF7C_000002A8
lbl_fn_8051CF7C_000002D0:
    li r27, 0x0
lbl_fn_8051CF7C_000002D4:
    lwz r3, lbl_8087F430
    lwz r4, 0x4(r31)
    bl fn_80370174
    cmpwi r27, 0x0
    beq lbl_fn_8051CF7C_000003A4
    cmpwi r3, 0x64
    li r0, 0x0
    blt lbl_fn_8051CF7C_000002F8
    li r0, 0x1
lbl_fn_8051CF7C_000002F8:
    lwz r3, 0x4(r27)
    cmpwi r3, 0xcb
    bne lbl_fn_8051CF7C_00000308
    li r0, 0x1
lbl_fn_8051CF7C_00000308:
    cmpwi r0, 0x0
    beq lbl_fn_8051CF7C_000003A4
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8051CF7C_000003A4
    cmpwi r3, 0xcb
    bne lbl_fn_8051CF7C_00000388
    lwz r3, lbl_8087F430
    lis r4, 0x6
    addi r0, r4, 0x1a80
    lwz r5, 0x10d0(r3)
    cmpw r5, r0
    bge lbl_fn_8051CF7C_00000344
    li r0, 0x1
    b lbl_fn_8051CF7C_00000374
lbl_fn_8051CF7C_00000344:
    lis r4, 0x9
    addi r0, r4, 0x27c0
    cmpw r5, r0
    bge lbl_fn_8051CF7C_00000370
    li r4, 0xc8
    bl fn_80370174
    cntlzw r0, r3
    extrwi r0, r0, 1, 26
    neg r3, r0
    addi r0, r3, 0x2
    b lbl_fn_8051CF7C_00000374
lbl_fn_8051CF7C_00000370:
    li r0, 0x4
lbl_fn_8051CF7C_00000374:
    cmpwi r0, 0x5
    li r30, 0x5
    bgt lbl_fn_8051CF7C_000003A4
    mr r30, r0
    b lbl_fn_8051CF7C_000003A4
lbl_fn_8051CF7C_00000388:
    lwz r3, 0xc(r27)
    li r5, 0x1
    lwz r4, 0x10(r27)
    bl fn_8021771C
    cmpwi r3, 0x0
    beq lbl_fn_8051CF7C_000003A4
    lwz r30, 0xc8(r3)
lbl_fn_8051CF7C_000003A4:
    lis r27, lbl_8075BF40@ha
    addi r26, r29, 0x58
    addi r27, r27, lbl_8075BF40@l
    addi r3, r27, 0x213
    bl fn_800DC6B4
    lfs f1, lbl_80887904
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8051CF7C_000003EC
    addi r3, r27, 0x213
    bl fn_800DC6B4
    lfs f1, lbl_80887908
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
lbl_fn_8051CF7C_000003EC:
    cmpwi r29, 0x0
    beq lbl_fn_8051CF7C_000006A4
    lwz r4, lbl_8087F430
    lwz r3, 0x0(r31)
    lwz r26, 0x10d0(r4)
    bl fn_802168BC
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8051CF7C_000004B0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x193
    bne lbl_fn_8051CF7C_00000438
    subis r0, r26, 0x3
    cmplwi r0, 0x20c8
    bne lbl_fn_8051CF7C_00000468
    li r3, 0x276
    bl fn_802168BC
    mr r27, r3
    b lbl_fn_8051CF7C_00000468
lbl_fn_8051CF7C_00000438:
    cmpwi r0, 0x1f4
    bne lbl_fn_8051CF7C_00000468
    lis r3, 0x3
    addi r0, r3, 0x1128
    cmpw r26, r0
    blt lbl_fn_8051CF7C_00000468
    addi r0, r3, 0x1510
    cmpw r26, r0
    bgt lbl_fn_8051CF7C_00000468
    li r3, 0x1f8
    bl fn_802168BC
    mr r27, r3
lbl_fn_8051CF7C_00000468:
    lis r3, lbl_8075BF40@ha
    addi r26, r29, 0x58
    addi r3, r3, lbl_8075BF40@l
    addi r3, r3, 0x21a
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    lwz r3, lbl_8087EEC8
    mr r4, r27
    lfs f1, lbl_80887998
    li r5, 0x1
    lfs f2, lbl_80887904
    li r6, 0x1
    bl fn_8006EF48
    stfs f1, 0x1900(r28)
    b lbl_fn_8051CF7C_000004E4
lbl_fn_8051CF7C_000004B0:
    lis r3, lbl_8075BF40@ha
    lis r27, lbl_80793590@ha
    addi r3, r3, lbl_8075BF40@l
    addi r26, r29, 0x58
    addi r27, r27, lbl_80793590@l
    addi r3, r3, 0x21a
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r26
    mr r5, r27
    bl fn_801FEE08
    lfs f0, lbl_8088799C
    stfs f0, 0x1900(r28)
lbl_fn_8051CF7C_000004E4:
    lis r3, lbl_8075BF40@ha
    lfs f31, 0x1900(r28)
    addi r3, r3, lbl_8075BF40@l
    addi r26, r29, 0x58
    addi r3, r3, 0x224
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8051CF7C_00000528
    lfs f3, 0x1900(r28)
    lfs f0, lbl_808879A0
    fadds f0, f3, f0
    stfs f0, 0x1900(r28)
lbl_fn_8051CF7C_00000528:
    cmpwi r30, 0x1
    blt lbl_fn_8051CF7C_00000558
    lis r3, lbl_8075BF40@ha
    addi r26, r29, 0x58
    addi r3, r3, lbl_8075BF40@l
    addi r3, r3, 0x22e
    bl fn_800DC6B4
    lfs f1, lbl_80887908
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    b lbl_fn_8051CF7C_0000057C
lbl_fn_8051CF7C_00000558:
    lis r3, lbl_8075BF40@ha
    addi r26, r29, 0x58
    addi r3, r3, lbl_8075BF40@l
    addi r3, r3, 0x22e
    bl fn_800DC6B4
    lfs f1, lbl_80887904
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
lbl_fn_8051CF7C_0000057C:
    lis r27, lbl_8075BF40@ha
    addi r26, r29, 0x58
    addi r27, r27, lbl_8075BF40@l
    addi r3, r27, 0x23b
    bl fn_800DC6B4
    lfs f1, lbl_80887908
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    addi r3, r27, 0x23f
    bl fn_800DC6B4
    lfs f1, lbl_80887904
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    addi r3, r27, 0x243
    bl fn_800DC6B4
    lfs f1, lbl_80887904
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    addi r3, r27, 0x247
    bl fn_800DC6B4
    lfs f1, lbl_80887904
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    addi r3, r27, 0x24b
    bl fn_800DC6B4
    lfs f1, lbl_80887904
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
    cmpwi r30, 0x5
    blt lbl_fn_8051CF7C_00000620
    addi r3, r27, 0x24b
    bl fn_800DC6B4
    lfs f1, lbl_80887908
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
lbl_fn_8051CF7C_00000620:
    cmpwi r30, 0x4
    blt lbl_fn_8051CF7C_0000064C
    lis r3, lbl_8075BF40@ha
    addi r26, r29, 0x58
    addi r3, r3, lbl_8075BF40@l
    addi r3, r3, 0x247
    bl fn_800DC6B4
    lfs f1, lbl_80887908
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
lbl_fn_8051CF7C_0000064C:
    cmpwi r30, 0x3
    blt lbl_fn_8051CF7C_00000678
    lis r3, lbl_8075BF40@ha
    addi r26, r29, 0x58
    addi r3, r3, lbl_8075BF40@l
    addi r3, r3, 0x243
    bl fn_800DC6B4
    lfs f1, lbl_80887908
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
lbl_fn_8051CF7C_00000678:
    cmpwi r30, 0x2
    blt lbl_fn_8051CF7C_000006A4
    lis r3, lbl_8075BF40@ha
    addi r26, r29, 0x58
    addi r3, r3, lbl_8075BF40@l
    addi r3, r3, 0x23f
    bl fn_800DC6B4
    lfs f1, lbl_80887908
    mr r4, r3
    mr r3, r26
    bl fn_801FECE0
lbl_fn_8051CF7C_000006A4:
    lfs f3, 0x18fc(r28)
    lfs f0, lbl_80887918
    fadds f0, f3, f0
    stfs f0, 0x18fc(r28)
    lwz r3, 0x18(r31)
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    bne lbl_fn_8051CF7C_000006C8
    li r5, 0x0
lbl_fn_8051CF7C_000006C8:
    lfs f0, 0x4c(r5)
    addi r4, r1, 0x2c
    lfs f3, 0x3c(r5)
    addi r3, r28, 0x18f0
    lfs f2, 0x5c(r5)
    stfs f0, 0x30(r1)
    lfs f6, lbl_80887968
    frsp f0, f2
    stfs f3, 0x2c(r1)
    lfs f5, lbl_80887904
    psq_l f1, 0x0(r4), 0, 0
    lfs f4, 0x18fc(r28)
    fadds f0, f0, f5
    psq_st f1, 0x0(r3), 0, 0
    fmuls f6, f6, f4
    lfs f3, 0x18f4(r28)
    lfs f4, 0x18f0(r28)
    fadds f3, f3, f5
    stfs f2, 0x34(r1)
    fadds f4, f4, f6
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f4, 0x18f0(r28)
    stfs f3, 0x18f4(r28)
    stfs f0, 0x18f8(r28)
    b lbl_fn_8051CF7C_00000744
lbl_fn_8051CF7C_00000734:
    lfs f3, 0x18fc(r28)
    lfs f0, lbl_80887918
    fsubs f0, f3, f0
    stfs f0, 0x18fc(r28)
lbl_fn_8051CF7C_00000744:
    lfs f3, lbl_80887904
    lfs f0, 0x18fc(r28)
    fcmpo cr0, f3, f0
    ble lbl_fn_8051CF7C_00000758
    b lbl_fn_8051CF7C_0000075C
lbl_fn_8051CF7C_00000758:
    fmr f3, f0
lbl_fn_8051CF7C_0000075C:
    lfs f4, lbl_80887908
    fcmpo cr0, f4, f3
    bge lbl_fn_8051CF7C_0000076C
    b lbl_fn_8051CF7C_00000784
lbl_fn_8051CF7C_0000076C:
    lfs f4, lbl_80887904
    lfs f0, 0x18fc(r28)
    fcmpo cr0, f4, f0
    ble lbl_fn_8051CF7C_00000780
    b lbl_fn_8051CF7C_00000784
lbl_fn_8051CF7C_00000780:
    fmr f4, f0
lbl_fn_8051CF7C_00000784:
    lwz r0, 0x1998(r28)
    stfs f4, 0x18fc(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8051CF7C_00000828
    lwz r0, 0xdc(r28)
    cmpwi r0, 0x1
    bne lbl_fn_8051CF7C_000007D0
    lis r6, lbl_807C7030@ha
    addi r5, r1, 0x14
    addi r6, r6, lbl_807C7030@l
    lwz r3, lbl_8087F580
    psq_l f1, 0x0(r6), 0, 0
    li r4, 0x2
    lfs f2, 0x8(r6)
    li r6, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_804A5E40
    b lbl_fn_8051CF7C_000007FC
lbl_fn_8051CF7C_000007D0:
    lis r6, lbl_807C7030@ha
    addi r5, r1, 0x8
    addi r6, r6, lbl_807C7030@l
    lwz r3, lbl_8087F580
    psq_l f1, 0x0(r6), 0, 0
    li r4, 0x1
    lfs f2, 0x8(r6)
    li r6, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    bl fn_804A5E40
lbl_fn_8051CF7C_000007FC:
    lwz r3, 0x1994(r28)
    lfs f0, lbl_80887908
    stfs f0, 0x104(r3)
    lfs f0, lbl_808879A4
    lwz r3, 0x1994(r28)
    lfs f3, 0x100(r3)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8051CF7C_00000834
    stfs f0, 0x100(r3)
    b lbl_fn_8051CF7C_00000834
lbl_fn_8051CF7C_00000828:
    lwz r3, 0x1994(r28)
    lfs f0, lbl_80887984
    stfs f0, 0x104(r3)
lbl_fn_8051CF7C_00000834:
    lfs f3, 0x4814(r28)
    addi r3, r1, 0x38
    lfs f0, 0x4808(r28)
    addi r5, r1, 0x44
    lfs f5, 0x4810(r28)
    fadds f6, f3, f0
    lfs f4, 0x4804(r28)
    lfs f3, 0x480c(r28)
    lfs f0, 0x4800(r28)
    fadds f4, f5, f4
    lwz r4, lbl_8087EFB4
    fadds f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f6, 0x4c(r1)
    bl fn_800BFAC8
    lwz r4, 0x1994(r28)
    lis r29, lbl_8075BF40@ha
    addi r29, r29, lbl_8075BF40@l
    lfs f31, 0x38(r1)
    addi r3, r29, 0x24f
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x1994(r28)
    addi r3, r29, 0x24f
    lfs f31, 0x3c(r1)
    addi r26, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r26
    li r5, 0x1
    bl fn_801FED24
lbl_fn_8051CF7C_000008CC:
    addi r11, r1, 0x70
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8051D868(void)
{
    nofralloc
    stwu r1, -0x490(r1)
    mflr r0
    stw r0, 0x494(r1)
    addi r11, r1, 0x430
    stfd f31, 0x480(r1)
    psq_st f31, 0x488(r1), 0, 0
    stfd f30, 0x470(r1)
    psq_st f30, 0x478(r1), 0, 0
    stfd f29, 0x460(r1)
    psq_st f29, 0x468(r1), 0, 0
    stfd f28, 0x450(r1)
    psq_st f28, 0x458(r1), 0, 0
    stfd f27, 0x440(r1)
    psq_st f27, 0x448(r1), 0, 0
    stfd f26, 0x430(r1)
    psq_st f26, 0x438(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x4c(r3)
    mr r27, r3
    cmpwi r0, 0x0
    ble lbl_fn_8051D868_00001C90
    li r0, 0x10
    mr r4, r27
    li r6, 0x0
    mtctr r0
lbl_fn_8051D868_00000950:
    lwz r5, 0xe0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8051D868_00000968
    lwz r0, 0x104(r5)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r5)
lbl_fn_8051D868_00000968:
    lwz r5, 0x8e0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8051D868_00000980
    lwz r0, 0x104(r5)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r5)
lbl_fn_8051D868_00000980:
    lwz r5, 0x10e0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8051D868_00000998
    lwz r0, 0x104(r5)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r5)
lbl_fn_8051D868_00000998:
    lwz r5, 0x120(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8051D868_000009B0
    lwz r0, 0x104(r5)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r5)
lbl_fn_8051D868_000009B0:
    lwz r5, 0x920(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8051D868_000009C8
    lwz r0, 0x104(r5)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r5)
lbl_fn_8051D868_000009C8:
    lwz r5, 0x1120(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8051D868_000009E0
    lwz r0, 0x104(r5)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r5)
lbl_fn_8051D868_000009E0:
    addi r4, r4, 0x80
    addi r6, r6, 0x1
    bdnz lbl_fn_8051D868_00000950
    lwz r4, 0x18e8(r3)
    li r14, 0x0
    lfs f0, lbl_8088798C
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x18ec(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x18e0(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r4, 0x18e4(r3)
    lwz r0, 0x104(r4)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r4)
    lwz r3, 0x48(r3)
    lfs f7, 0x458(r3)
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8051D868_00000A4C
    li r14, 0x1
lbl_fn_8051D868_00000A4C:
    mr r3, r27
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000A7C
    lwz r3, 0x48(r27)
    lwz r0, 0x11f8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8051D868_00000A7C
    lwz r3, 0x18ec(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8051D868_00000A7C:
    mr r3, r27
    bl fn_80521014
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000E10
    lis r15, lbl_8075BF40@ha
    lfs f30, lbl_80887904
    addi r17, r1, 0x2f0
    addi r16, r1, 0x350
    addi r15, r15, lbl_8075BF40@l
    li r18, 0x0
    li r14, 0x0
    b lbl_fn_8051D868_00000C40
lbl_fn_8051D868_00000AAC:
    lwz r0, 0x50(r27)
    lwzx r3, r14, r0
    add r19, r0, r14
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000ACC
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
lbl_fn_8051D868_00000ACC:
    lwz r3, 0x8(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000C38
    lwz r0, 0x88(r3)
    cmpwi r19, 0x0
    clrlwi r0, r0, 1
    stw r0, 0x88(r3)
    beq lbl_fn_8051D868_00000C04
    lwz r4, 0x8(r19)
    cmpwi r4, 0x0
    beq lbl_fn_8051D868_00000B00
    mr r0, r4
    b lbl_fn_8051D868_00000B04
lbl_fn_8051D868_00000B00:
    li r0, 0x0
lbl_fn_8051D868_00000B04:
    cmpwi r0, 0x0
    beq lbl_fn_8051D868_00000C04
    cmpwi r4, 0x0
    beq lbl_fn_8051D868_00000B18
    b lbl_fn_8051D868_00000B1C
lbl_fn_8051D868_00000B18:
    li r4, 0x0
lbl_fn_8051D868_00000B1C:
    psq_l f1, 0x30(r4), 0, 0
    addi r3, r1, 0x320
    psq_l f2, 0x38(r4), 0, 0
    psq_l f3, 0x40(r4), 0, 0
    psq_l f4, 0x48(r4), 0, 0
    psq_l f5, 0x50(r4), 0, 0
    psq_l f6, 0x58(r4), 0, 0
    psq_st f6, 0x28(r17), 0, 0
    lfs f8, 0x31c(r1)
    psq_st f1, 0x0(r17), 0, 0
    fmr f1, f30
    psq_st f2, 0x8(r17), 0, 0
    fmr f2, f1
    lfs f0, 0x2fc(r1)
    psq_st f4, 0x18(r17), 0, 0
    lfs f7, 0x30c(r1)
    psq_st f3, 0x10(r17), 0, 0
    fmr f3, f1
    psq_st f5, 0x20(r17), 0, 0
    stfs f0, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f30, 0x2fc(r1)
    stfs f30, 0x30c(r1)
    stfs f30, 0x31c(r1)
    stfs f30, 0x74(r1)
    stfs f30, 0x78(r1)
    stfs f30, 0x7c(r1)
    bl fn_805F9160
    mr r3, r17
    addi r4, r1, 0x320
    addi r5, r1, 0x350
    bl fn_805F89F0
    psq_l f2, 0x8(r16), 0, 0
    psq_l f4, 0x18(r16), 0, 0
    psq_l f6, 0x28(r16), 0, 0
    psq_l f1, 0x0(r16), 0, 0
    psq_l f3, 0x10(r16), 0, 0
    psq_l f5, 0x20(r16), 0, 0
    psq_st f2, 0x8(r17), 0, 0
    lfs f8, 0x68(r1)
    psq_st f4, 0x18(r17), 0, 0
    lfs f7, 0x6c(r1)
    psq_st f6, 0x28(r17), 0, 0
    lfs f0, 0x70(r1)
    psq_st f1, 0x0(r17), 0, 0
    psq_st f3, 0x10(r17), 0, 0
    psq_st f5, 0x20(r17), 0, 0
    stfs f8, 0x2fc(r1)
    stfs f7, 0x30c(r1)
    stfs f0, 0x31c(r1)
    lwz r3, 0x8(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000BF8
    b lbl_fn_8051D868_00000BFC
lbl_fn_8051D868_00000BF8:
    li r3, 0x0
lbl_fn_8051D868_00000BFC:
    addi r4, r1, 0x2f0
    bl fn_8009EE30
lbl_fn_8051D868_00000C04:
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r19
    addi r5, r15, 0x258
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r19
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
lbl_fn_8051D868_00000C38:
    addi r18, r18, 0x1
    addi r14, r14, 0x40
lbl_fn_8051D868_00000C40:
    lwz r0, 0x4c(r27)
    cmpw r18, r0
    blt lbl_fn_8051D868_00000AAC
    lis r15, lbl_8075BF40@ha
    lfs f30, lbl_80887904
    addi r17, r1, 0x260
    addi r16, r1, 0x2c0
    addi r15, r15, lbl_8075BF40@l
    li r18, 0x0
    li r14, 0x0
    b lbl_fn_8051D868_00000E00
lbl_fn_8051D868_00000C6C:
    lwz r0, 0x1910(r27)
    lwzx r3, r14, r0
    add r19, r0, r14
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000C8C
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
lbl_fn_8051D868_00000C8C:
    lwz r3, 0x8(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000DF8
    lwz r0, 0x88(r3)
    cmpwi r19, 0x0
    clrlwi r0, r0, 1
    stw r0, 0x88(r3)
    beq lbl_fn_8051D868_00000DC4
    lwz r4, 0x8(r19)
    cmpwi r4, 0x0
    beq lbl_fn_8051D868_00000CC0
    mr r0, r4
    b lbl_fn_8051D868_00000CC4
lbl_fn_8051D868_00000CC0:
    li r0, 0x0
lbl_fn_8051D868_00000CC4:
    cmpwi r0, 0x0
    beq lbl_fn_8051D868_00000DC4
    cmpwi r4, 0x0
    beq lbl_fn_8051D868_00000CD8
    b lbl_fn_8051D868_00000CDC
lbl_fn_8051D868_00000CD8:
    li r4, 0x0
lbl_fn_8051D868_00000CDC:
    psq_l f1, 0x30(r4), 0, 0
    addi r3, r1, 0x290
    psq_l f2, 0x38(r4), 0, 0
    psq_l f3, 0x40(r4), 0, 0
    psq_l f4, 0x48(r4), 0, 0
    psq_l f5, 0x50(r4), 0, 0
    psq_l f6, 0x58(r4), 0, 0
    psq_st f6, 0x28(r17), 0, 0
    lfs f8, 0x28c(r1)
    psq_st f1, 0x0(r17), 0, 0
    fmr f1, f30
    psq_st f2, 0x8(r17), 0, 0
    fmr f2, f1
    lfs f0, 0x26c(r1)
    psq_st f4, 0x18(r17), 0, 0
    lfs f7, 0x27c(r1)
    psq_st f3, 0x10(r17), 0, 0
    fmr f3, f1
    psq_st f5, 0x20(r17), 0, 0
    stfs f0, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f30, 0x26c(r1)
    stfs f30, 0x27c(r1)
    stfs f30, 0x28c(r1)
    stfs f30, 0x5c(r1)
    stfs f30, 0x60(r1)
    stfs f30, 0x64(r1)
    bl fn_805F9160
    mr r3, r17
    addi r4, r1, 0x290
    addi r5, r1, 0x2c0
    bl fn_805F89F0
    psq_l f2, 0x8(r16), 0, 0
    psq_l f4, 0x18(r16), 0, 0
    psq_l f6, 0x28(r16), 0, 0
    psq_l f1, 0x0(r16), 0, 0
    psq_l f3, 0x10(r16), 0, 0
    psq_l f5, 0x20(r16), 0, 0
    psq_st f2, 0x8(r17), 0, 0
    lfs f8, 0x50(r1)
    psq_st f4, 0x18(r17), 0, 0
    lfs f7, 0x54(r1)
    psq_st f6, 0x28(r17), 0, 0
    lfs f0, 0x58(r1)
    psq_st f1, 0x0(r17), 0, 0
    psq_st f3, 0x10(r17), 0, 0
    psq_st f5, 0x20(r17), 0, 0
    stfs f8, 0x26c(r1)
    stfs f7, 0x27c(r1)
    stfs f0, 0x28c(r1)
    lwz r3, 0x8(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000DB8
    b lbl_fn_8051D868_00000DBC
lbl_fn_8051D868_00000DB8:
    li r3, 0x0
lbl_fn_8051D868_00000DBC:
    addi r4, r1, 0x260
    bl fn_8009EE30
lbl_fn_8051D868_00000DC4:
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r19
    addi r5, r15, 0x258
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r19
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
lbl_fn_8051D868_00000DF8:
    addi r18, r18, 0x1
    addi r14, r14, 0x40
lbl_fn_8051D868_00000E00:
    lwz r0, 0x190c(r27)
    cmpw r18, r0
    blt lbl_fn_8051D868_00000C6C
    b lbl_fn_8051D868_00001C90
lbl_fn_8051D868_00000E10:
    lis r3, lbl_8075BF40@ha
    lis r21, lbl_807C7030@ha
    lfs f30, lbl_80887904
    addi r18, r1, 0x3b0
    lfs f31, lbl_80887908
    addi r22, r21, lbl_807C7030@l
    addi r16, r1, 0x1d0
    addi r17, r1, 0x230
    addi r23, r3, lbl_8075BF40@l
    addi r31, r1, 0x110
    addi r30, r1, 0x1a0
    li r29, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_8051D868_00001668
lbl_fn_8051D868_00000E4C:
    lwz r0, 0x50(r27)
    add r20, r27, r26
    lwz r6, 0x3ed0(r27)
    mr r5, r27
    add r28, r0, r25
    lwz r3, 0x19d0(r20)
    li r4, 0x0
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_fn_8051D868_00000E9C
lbl_fn_8051D868_00000E74:
    lwz r0, 0x3ed8(r5)
    cmpw r3, r0
    bne lbl_fn_8051D868_00000E90
    mulli r0, r4, 0x1c
    add r3, r27, r0
    addi r19, r3, 0x3ed4
    b lbl_fn_8051D868_00000EA0
lbl_fn_8051D868_00000E90:
    addi r5, r5, 0x1c
    addi r4, r4, 0x1
    bdnz lbl_fn_8051D868_00000E74
lbl_fn_8051D868_00000E9C:
    li r19, 0x0
lbl_fn_8051D868_00000EA0:
    cmpwi r19, 0x0
    beq lbl_fn_8051D868_00000EB8
    lwz r3, 0x19a8(r27)
    lwz r0, 0x19e0(r20)
    cmpw r3, r0
    beq lbl_fn_8051D868_00000EEC
lbl_fn_8051D868_00000EB8:
    lwz r3, 0x8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000ED0
    lwz r0, 0x88(r3)
    oris r0, r0, 0x8000
    stw r0, 0x88(r3)
lbl_fn_8051D868_00000ED0:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_0000165C
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    b lbl_fn_8051D868_0000165C
lbl_fn_8051D868_00000EEC:
    lwz r3, 0x8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000F04
    lwz r0, 0x88(r3)
    clrlwi r0, r0, 1
    stw r0, 0x88(r3)
lbl_fn_8051D868_00000F04:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000F1C
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
lbl_fn_8051D868_00000F1C:
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r28
    li r5, 0x0
    lwz r12, 0x60(r12)
    li r6, 0x7
    lfs f1, lbl_80887904
    mtctr r12
    bctrl
    lwz r3, 0x8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00000F50
    b lbl_fn_8051D868_00000F54
lbl_fn_8051D868_00000F50:
    li r3, 0x0
lbl_fn_8051D868_00000F54:
    psq_l f1, 0x30(r3), 0, 0
    psq_l f2, 0x38(r3), 0, 0
    psq_l f3, 0x40(r3), 0, 0
    psq_l f4, 0x48(r3), 0, 0
    psq_l f5, 0x50(r3), 0, 0
    psq_l f6, 0x58(r3), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    lfs f11, 0x8(r22)
    psq_st f2, 0x8(r18), 0, 0
    lfs f9, 0x4(r22)
    psq_st f4, 0x18(r18), 0, 0
    lfs f7, lbl_807C7030@l(r21)
    psq_st f1, 0x0(r18), 0, 0
    lfs f12, 0x3dc(r1)
    psq_st f3, 0x10(r18), 0, 0
    lfs f13, 0x3cc(r1)
    psq_st f5, 0x20(r18), 0, 0
    lfs f29, 0x3bc(r1)
    lfs f10, 0x191c(r27)
    lfs f8, 0x1918(r27)
    fsubs f27, f11, f10
    lfs f0, 0x1914(r27)
    fsubs f26, f9, f8
    lfs f9, 0x19b8(r27)
    fsubs f11, f7, f0
    stfs f27, 0x4c(r1)
    fmuls f27, f27, f9
    stfs f11, 0x44(r1)
    fmuls f7, f11, f9
    fmuls f28, f26, f9
    stfs f26, 0x48(r1)
    fadds f11, f27, f10
    fadds f9, f7, f0
    stfs f7, 0x38(r1)
    fadds f10, f28, f8
    fadds f0, f12, f11
    stfs f28, 0x3c(r1)
    fadds f8, f29, f9
    fadds f7, f13, f10
    stfs f0, 0x3dc(r1)
    stfs f8, 0x3bc(r1)
    stfs f7, 0x3cc(r1)
    lwz r3, 0x8(r28)
    stfs f27, 0x40(r1)
    cmpwi r3, 0x0
    stfs f9, 0x134(r1)
    stfs f10, 0x138(r1)
    stfs f11, 0x13c(r1)
    stfs f8, 0x1ac(r1)
    stfs f7, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    beq lbl_fn_8051D868_00001028
    b lbl_fn_8051D868_0000102C
lbl_fn_8051D868_00001028:
    li r3, 0x0
lbl_fn_8051D868_0000102C:
    addi r4, r1, 0x3b0
    bl fn_8009EE30
    lwz r0, 0x50(r27)
    add r3, r27, r26
    lfs f0, 0x19f8(r3)
    add. r15, r0, r25
    beq lbl_fn_8051D868_00001160
    lwz r4, 0x8(r15)
    cmpwi r4, 0x0
    beq lbl_fn_8051D868_0000105C
    mr r0, r4
    b lbl_fn_8051D868_00001060
lbl_fn_8051D868_0000105C:
    li r0, 0x0
lbl_fn_8051D868_00001060:
    cmpwi r0, 0x0
    beq lbl_fn_8051D868_00001160
    cmpwi r4, 0x0
    beq lbl_fn_8051D868_00001074
    b lbl_fn_8051D868_00001078
lbl_fn_8051D868_00001074:
    li r4, 0x0
lbl_fn_8051D868_00001078:
    psq_l f1, 0x30(r4), 0, 0
    addi r3, r1, 0x200
    psq_l f2, 0x38(r4), 0, 0
    psq_l f3, 0x40(r4), 0, 0
    psq_l f4, 0x48(r4), 0, 0
    psq_l f5, 0x50(r4), 0, 0
    psq_l f6, 0x58(r4), 0, 0
    psq_st f6, 0x28(r16), 0, 0
    lfs f9, 0x1fc(r1)
    psq_st f1, 0x0(r16), 0, 0
    fmr f1, f0
    psq_st f2, 0x8(r16), 0, 0
    fmr f2, f1
    lfs f7, 0x1dc(r1)
    psq_st f4, 0x18(r16), 0, 0
    lfs f8, 0x1ec(r1)
    psq_st f3, 0x10(r16), 0, 0
    fmr f3, f1
    psq_st f5, 0x20(r16), 0, 0
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f30, 0x1dc(r1)
    stfs f30, 0x1ec(r1)
    stfs f30, 0x1fc(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9160
    mr r3, r16
    addi r4, r1, 0x200
    addi r5, r1, 0x230
    bl fn_805F89F0
    psq_l f2, 0x8(r17), 0, 0
    psq_l f4, 0x18(r17), 0, 0
    psq_l f6, 0x28(r17), 0, 0
    psq_l f1, 0x0(r17), 0, 0
    psq_l f3, 0x10(r17), 0, 0
    psq_l f5, 0x20(r17), 0, 0
    psq_st f2, 0x8(r16), 0, 0
    lfs f8, 0x20(r1)
    psq_st f4, 0x18(r16), 0, 0
    lfs f7, 0x24(r1)
    psq_st f6, 0x28(r16), 0, 0
    lfs f0, 0x28(r1)
    psq_st f1, 0x0(r16), 0, 0
    psq_st f3, 0x10(r16), 0, 0
    psq_st f5, 0x20(r16), 0, 0
    stfs f8, 0x1dc(r1)
    stfs f7, 0x1ec(r1)
    stfs f0, 0x1fc(r1)
    lwz r3, 0x8(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001154
    b lbl_fn_8051D868_00001158
lbl_fn_8051D868_00001154:
    li r3, 0x0
lbl_fn_8051D868_00001158:
    addi r4, r1, 0x1d0
    bl fn_8009EE30
lbl_fn_8051D868_00001160:
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r28
    addi r5, r23, 0x258
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r28
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001238
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001238
    lwz r3, 0x0(r28)
    addi r15, r23, 0x262
    bl fn_80202118
    mr r24, r3
    mr r3, r15
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r24, 0x58
    li r5, 0x0
    bl fn_801FEEFC
    lwz r3, 0x0(r28)
    addi r15, r23, 0x26c
    bl fn_80202118
    mr r24, r3
    mr r3, r15
    bl fn_800DC6B4
    lfs f1, lbl_80887904
    mr r4, r3
    addi r3, r24, 0x58
    bl fn_801FECE0
    cmpwi r19, 0x0
    beq lbl_fn_8051D868_00001238
    lwz r0, 0x8(r19)
    cmpwi r0, 0x1
    bne lbl_fn_8051D868_00001238
    lwz r3, 0x0(r28)
    addi r19, r23, 0x262
    bl fn_80202118
    mr r15, r3
    mr r3, r19
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r15, 0x58
    li r5, -0x1
    bl fn_801FEEFC
lbl_fn_8051D868_00001238:
    lwz r3, 0x19ec(r20)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001474
    lwz r3, 0x0(r3)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    lwz r3, 0x19ec(r20)
    lwz r3, 0x0(r3)
    bl fn_80202D00
    lfs f1, lbl_808879A8
    addi r4, r23, 0x271
    bl fn_801F6C80
    lwz r3, 0x19ec(r20)
    lwz r3, 0x0(r3)
    bl fn_80202D00
    lfs f1, lbl_808879AC
    addi r4, r23, 0x277
    bl fn_801F6C80
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r5, r23, 0x258
    lwz r4, 0x19ec(r20)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r4, 0x19ec(r20)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x19a4(r27)
    lwz r0, 0x19d0(r20)
    cmpw r3, r0
    bne lbl_fn_8051D868_00001474
    lwz r0, 0x1998(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051D868_00001474
    lwz r3, 0x18e0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001380
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001380
    lwz r3, 0x18e0(r27)
    addi r15, r23, 0x271
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    lwz r3, 0x18e0(r27)
    bl fn_80202118
    mr r19, r3
    mr r3, r15
    bl fn_800DC6B4
    lfs f1, lbl_808879A8
    mr r4, r3
    addi r3, r19, 0x58
    bl fn_801FECE0
    lwz r3, 0x18e0(r27)
    addi r19, r23, 0x277
    bl fn_80202118
    mr r15, r3
    mr r3, r19
    bl fn_800DC6B4
    lfs f1, lbl_808879AC
    mr r4, r3
    addi r3, r15, 0x58
    bl fn_801FECE0
    stfs f31, 0x11c(r1)
    mr r3, r27
    addi r6, r1, 0x128
    addi r7, r1, 0x11c
    stfs f31, 0x120(r1)
    addi r8, r23, 0x258
    stfs f31, 0x124(r1)
    stfs f30, 0x128(r1)
    stfs f30, 0x12c(r1)
    stfs f30, 0x130(r1)
    lwz r4, 0x19e8(r20)
    lwz r5, 0x18e0(r27)
    bl fn_8051125C
lbl_fn_8051D868_00001380:
    lwz r3, 0x19e8(r20)
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001474
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001474
    lwz r3, 0x18e8(r27)
    addi r15, r23, 0x27d
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x19e8(r20)
    lwz r3, 0x0(r3)
    bl fn_80202118
    mr r19, r3
    mr r3, r15
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r19
    addi r3, r1, 0x1b8
    bl fn_801F4E8C
    lfs f7, 0x1bc(r1)
    addi r4, r1, 0x1a0
    lfs f0, 0x1b8(r1)
    mr r5, r4
    stfs f0, 0x1a0(r1)
    stfs f7, 0x1a4(r1)
    stfs f30, 0x1a8(r1)
    lwz r3, 0x19e8(r20)
    lwz r3, 0x0(r3)
    addi r3, r3, 0x8c
    bl fn_805F93C0
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x110
    addi r5, r1, 0x1a0
    bl fn_800BFAC8
    psq_l f1, 0x0(r31), 0, 0
    addi r3, r23, 0x287
    lfs f2, 0x118(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1a8(r1)
    lfs f26, 0x1a0(r1)
    lwz r4, 0x18e8(r27)
    addi r15, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r15
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x18e8(r27)
    addi r3, r23, 0x287
    lfs f26, 0x1a4(r1)
    addi r15, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r15
    li r5, 0x1
    bl fn_801FED24
lbl_fn_8051D868_00001474:
    lwz r3, 0x19f0(r20)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_000015BC
    lwz r3, 0x0(r3)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    lwz r3, 0x19f0(r20)
    lwz r3, 0x0(r3)
    bl fn_80202D00
    lfs f1, lbl_808879A8
    addi r4, r23, 0x271
    bl fn_801F6C80
    lwz r3, 0x19f0(r20)
    lwz r3, 0x0(r3)
    bl fn_80202D00
    lfs f1, lbl_808879AC
    addi r4, r23, 0x277
    bl fn_801F6C80
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r5, r23, 0x258
    lwz r4, 0x19f0(r20)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r4, 0x19f0(r20)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x19a4(r27)
    lwz r0, 0x19d0(r20)
    cmpw r3, r0
    bne lbl_fn_8051D868_000015BC
    lwz r0, 0x1998(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051D868_000015BC
    lwz r3, 0x18e4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_000015BC
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_000015BC
    lwz r3, 0x18e4(r27)
    addi r15, r23, 0x271
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    lwz r3, 0x18e4(r27)
    bl fn_80202118
    mr r19, r3
    mr r3, r15
    bl fn_800DC6B4
    lfs f1, lbl_808879A8
    mr r4, r3
    addi r3, r19, 0x58
    bl fn_801FECE0
    lwz r3, 0x18e4(r27)
    addi r19, r23, 0x277
    bl fn_80202118
    mr r15, r3
    mr r3, r19
    bl fn_800DC6B4
    lfs f1, lbl_808879AC
    mr r4, r3
    addi r3, r15, 0x58
    bl fn_801FECE0
    stfs f31, 0xf8(r1)
    mr r3, r27
    addi r6, r1, 0x104
    addi r7, r1, 0xf8
    stfs f31, 0xfc(r1)
    addi r8, r23, 0x258
    stfs f31, 0x100(r1)
    stfs f30, 0x104(r1)
    stfs f30, 0x108(r1)
    stfs f30, 0x10c(r1)
    lwz r4, 0x19e8(r20)
    lwz r5, 0x18e4(r27)
    bl fn_8051125C
lbl_fn_8051D868_000015BC:
    lwz r3, 0x19f4(r20)
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_0000165C
    lwz r3, 0x0(r3)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
    lwz r3, 0x19f4(r20)
    lwz r3, 0x0(r3)
    bl fn_80202D00
    stfs f30, 0x54(r3)
    lwz r3, 0x19f4(r20)
    lwz r3, 0x0(r3)
    bl fn_80202D00
    stfs f30, 0x50(r3)
    lwz r3, 0x19f4(r20)
    lwz r3, 0x0(r3)
    bl fn_80202D00
    lfs f1, lbl_808879A8
    addi r4, r23, 0x271
    bl fn_801F6C80
    lwz r3, 0x19f4(r20)
    lwz r3, 0x0(r3)
    bl fn_80202D00
    lfs f1, lbl_808879AC
    addi r4, r23, 0x277
    bl fn_801F6C80
    lwz r12, 0x0(r27)
    mr r3, r27
    addi r5, r23, 0x258
    lwz r4, 0x19f4(r20)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r4, 0x19f4(r20)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
lbl_fn_8051D868_0000165C:
    addi r29, r29, 0x1
    addi r26, r26, 0x94
    addi r25, r25, 0x40
lbl_fn_8051D868_00001668:
    lwz r0, 0x4c(r27)
    cmpw r29, r0
    blt lbl_fn_8051D868_00000E4C
    lwz r3, lbl_8087F430
    lis r15, lbl_8075BE80@ha
    lis r25, lbl_807C7030@ha
    lis r23, lbl_8075BF40@ha
    lwz r17, 0x10d0(r3)
    addi r15, r15, lbl_8075BE80@l
    addi r16, r1, 0x380
    addi r24, r25, lbl_807C7030@l
    addi r23, r23, lbl_8075BF40@l
    li r18, 0x0
    li r20, 0x0
    li r21, 0x0
    li r22, 0x0
    b lbl_fn_8051D868_00001868
lbl_fn_8051D868_000016AC:
    lwz r0, 0x1910(r27)
    add r19, r0, r20
    lwz r5, 0x8(r19)
    cmpwi r5, 0x0
    beq lbl_fn_8051D868_00001858
    add r4, r15, r22
    lwz r0, 0x4(r4)
    cmpw r0, r17
    bgt lbl_fn_8051D868_000016EC
    lwz r0, 0x8(r4)
    cmpw r0, r17
    ble lbl_fn_8051D868_000016EC
    lwz r3, 0x19a8(r27)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    beq lbl_fn_8051D868_000016FC
lbl_fn_8051D868_000016EC:
    lwz r0, 0x88(r5)
    oris r0, r0, 0x8000
    stw r0, 0x88(r5)
    b lbl_fn_8051D868_00001708
lbl_fn_8051D868_000016FC:
    lwz r0, 0x88(r5)
    clrlwi r0, r0, 1
    stw r0, 0x88(r5)
lbl_fn_8051D868_00001708:
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r19
    li r5, 0x0
    lwz r12, 0x60(r12)
    li r6, 0x7
    lfs f1, lbl_80887904
    mtctr r12
    bctrl
    lwz r4, 0x8(r19)
    cmpwi r4, 0x0
    beq lbl_fn_8051D868_0000173C
    b lbl_fn_8051D868_00001740
lbl_fn_8051D868_0000173C:
    li r4, 0x0
lbl_fn_8051D868_00001740:
    psq_l f1, 0x30(r4), 0, 0
    add r3, r27, r21
    psq_l f2, 0x38(r4), 0, 0
    psq_l f3, 0x40(r4), 0, 0
    psq_l f4, 0x48(r4), 0, 0
    psq_l f5, 0x50(r4), 0, 0
    psq_l f6, 0x58(r4), 0, 0
    psq_st f6, 0x28(r16), 0, 0
    lfs f11, 0x8(r24)
    psq_st f2, 0x8(r16), 0, 0
    lfs f9, 0x4(r24)
    psq_st f4, 0x18(r16), 0, 0
    lfs f7, lbl_807C7030@l(r25)
    psq_st f1, 0x0(r16), 0, 0
    lfs f12, 0x3ac(r1)
    psq_st f3, 0x10(r16), 0, 0
    lfs f13, 0x39c(r1)
    psq_st f5, 0x20(r16), 0, 0
    lfs f26, 0x38c(r1)
    lfs f10, 0x191c(r3)
    lfs f8, 0x1918(r3)
    fsubs f27, f11, f10
    lfs f0, 0x1914(r3)
    fsubs f29, f9, f8
    lfs f9, 0x19b8(r27)
    fsubs f11, f7, f0
    stfs f27, 0x1c(r1)
    fmuls f28, f27, f9
    stfs f11, 0x14(r1)
    fmuls f7, f11, f9
    fmuls f27, f29, f9
    stfs f29, 0x18(r1)
    fadds f11, f28, f10
    fadds f9, f7, f0
    stfs f7, 0x8(r1)
    fadds f10, f27, f8
    fadds f0, f12, f11
    stfs f27, 0xc(r1)
    fadds f8, f26, f9
    fadds f7, f13, f10
    stfs f0, 0x3ac(r1)
    stfs f8, 0x38c(r1)
    stfs f7, 0x39c(r1)
    lwz r3, 0x8(r19)
    stfs f28, 0x10(r1)
    cmpwi r3, 0x0
    stfs f9, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f8, 0x194(r1)
    stfs f7, 0x198(r1)
    stfs f0, 0x19c(r1)
    beq lbl_fn_8051D868_00001818
    b lbl_fn_8051D868_0000181C
lbl_fn_8051D868_00001818:
    li r3, 0x0
lbl_fn_8051D868_0000181C:
    addi r4, r1, 0x380
    bl fn_8009EE30
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r19
    addi r5, r23, 0x258
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r4, r19
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
lbl_fn_8051D868_00001858:
    addi r18, r18, 0x1
    addi r20, r20, 0x40
    addi r21, r21, 0x14
    addi r22, r22, 0xc
lbl_fn_8051D868_00001868:
    lwz r0, 0x190c(r27)
    cmpw r18, r0
    blt lbl_fn_8051D868_000016AC
    lfs f7, 0x18fc(r27)
    lfs f0, lbl_80887904
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8051D868_0000189C
    lwz r3, 0x1904(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8051D868_00001970
lbl_fn_8051D868_0000189C:
    stfs f7, 0x188(r1)
    addi r3, r1, 0x17c
    lwz r4, lbl_8087EFB4
    addi r5, r27, 0x18f0
    stfs f7, 0x18c(r1)
    stfs f7, 0x190(r1)
    bl fn_800BFAC8
    lwz r4, 0x1904(r27)
    lis r15, lbl_8075BF40@ha
    addi r15, r15, lbl_8075BF40@l
    lwz r0, 0x38(r4)
    addi r3, r15, 0x292
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x1904(r27)
    lfs f26, 0x17c(r1)
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r16
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x1904(r27)
    addi r3, r15, 0x292
    lfs f26, 0x180(r1)
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r16
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x1904(r27)
    addi r3, r15, 0x292
    lfs f26, 0x188(r1)
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r16
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x1904(r27)
    addi r3, r15, 0x292
    lfs f26, 0x18c(r1)
    addi r15, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r15
    li r5, 0x3
    bl fn_801FED24
lbl_fn_8051D868_00001970:
    mr r3, r27
    bl fn_8050FD24
    cmpwi r3, 0x0
    beq lbl_fn_8051D868_00001B94
    cmpwi r14, 0x0
    beq lbl_fn_8051D868_00001B30
    lwz r3, 0xdc(r27)
    lfs f11, lbl_80887904
    cmpwi r3, 0x0
    stfs f11, 0x170(r1)
    stfs f11, 0x174(r1)
    stfs f11, 0x178(r1)
    bne lbl_fn_8051D868_00001A24
    lwz r0, 0x19a8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051D868_00001A24
    lwz r4, lbl_8087F430
    lis r3, 0x6
    addi r0, r3, 0x1e68
    lwz r3, 0x10d0(r4)
    cmpw r3, r0
    blt lbl_fn_8051D868_00001AE8
    lwz r3, 0x48(r27)
    fadds f9, f11, f11
    lfs f10, lbl_80887940
    lwz r0, 0x136c(r3)
    fadds f0, f11, f10
    stfs f11, 0xe0(r1)
    cmpwi r0, 0x0
    stfs f10, 0xe4(r1)
    stfs f11, 0xe8(r1)
    stfs f9, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f9, 0x178(r1)
    bne lbl_fn_8051D868_00001AE8
    fadds f7, f0, f11
    stfs f11, 0xd4(r1)
    fadds f8, f9, f11
    fadds f0, f9, f10
    stfs f11, 0xd8(r1)
    stfs f10, 0xdc(r1)
    stfs f8, 0x170(r1)
    stfs f7, 0x174(r1)
    stfs f0, 0x178(r1)
    b lbl_fn_8051D868_00001AE8
lbl_fn_8051D868_00001A24:
    cmpwi r3, 0x1
    bne lbl_fn_8051D868_00001A70
    addi r4, r27, 0x480c
    addi r3, r1, 0x170
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x4814(r27)
    lfs f0, 0x486c(r27)
    lfs f10, 0x170(r1)
    lfs f9, 0x4864(r27)
    fadds f0, f2, f0
    lfs f8, 0x174(r1)
    fadds f9, f10, f9
    lfs f7, 0x4868(r27)
    stfs f0, 0x178(r1)
    fadds f0, f8, f7
    stfs f9, 0x170(r1)
    stfs f0, 0x174(r1)
    b lbl_fn_8051D868_00001AE8
lbl_fn_8051D868_00001A70:
    cmpwi r3, 0x2
    bne lbl_fn_8051D868_00001AE8
    lfs f0, 0x19c0(r27)
    addi r4, r27, 0x480c
    lfs f9, lbl_808879A4
    addi r3, r1, 0x170
    psq_l f1, 0x0(r4), 0, 0
    fneg f7, f0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_808879B0
    lfs f2, 0x4814(r27)
    fmuls f12, f0, f7
    lfs f8, 0x486c(r27)
    lfs f10, 0x170(r1)
    fadds f0, f2, f8
    lfs f7, 0x4864(r27)
    lfs f11, 0x174(r1)
    fadds f8, f10, f7
    lfs f10, 0x4868(r27)
    lfs f7, lbl_80887904
    fadds f0, f0, f12
    stfs f7, 0xcc(r1)
    fadds f10, f11, f10
    fadds f8, f8, f9
    stfs f9, 0xc8(r1)
    fadds f7, f10, f7
    stfs f12, 0xd0(r1)
    stfs f8, 0x170(r1)
    stfs f7, 0x174(r1)
    stfs f0, 0x178(r1)
lbl_fn_8051D868_00001AE8:
    lwz r5, 0x48(r27)
    addi r4, r1, 0x170
    lfs f2, 0x178(r1)
    addi r3, r1, 0xbc
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r5, 0x12d4
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r1, 0xb0
    stfs f2, 0x8(r4)
    lwz r4, 0x48(r27)
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r4, 0x12e0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xb8(r1)
    stfs f2, 0x12e8(r4)
    b lbl_fn_8051D868_00001BF4
lbl_fn_8051D868_00001B30:
    lfs f0, lbl_80887904
    addi r4, r1, 0x164
    lwz r5, 0x48(r27)
    addi r3, r1, 0xa4
    fmr f2, f0
    stfs f0, 0x164(r1)
    addi r5, r5, 0x12d4
    addi r6, r1, 0x98
    stfs f0, 0x168(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    frsp f2, f2
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    fmr f2, f0
    lwz r4, 0x48(r27)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    addi r4, r4, 0x12e0
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, 0x16c(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r4)
    b lbl_fn_8051D868_00001BF4
lbl_fn_8051D868_00001B94:
    lfs f0, lbl_80887904
    addi r4, r1, 0x158
    lwz r5, 0x48(r27)
    addi r3, r1, 0x8c
    fmr f2, f0
    stfs f0, 0x158(r1)
    addi r5, r5, 0x12d4
    addi r6, r1, 0x80
    stfs f0, 0x15c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    frsp f2, f2
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    fmr f2, f0
    lwz r4, 0x48(r27)
    stfs f2, 0x88(r1)
    frsp f2, f2
    addi r4, r4, 0x12e0
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, 0x160(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r4)
lbl_fn_8051D868_00001BF4:
    lwz r0, 0x48a8(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8051D868_00001C90
    lfs f9, 0x48b8(r27)
    addi r4, r1, 0x140
    lfs f7, 0x48b0(r27)
    addi r5, r1, 0x14c
    lfs f8, 0x48b4(r27)
    lis r6, 0xffff
    fsubs f11, f9, f7
    lfs f10, lbl_808879B4
    fadds f7, f9, f7
    lfs f0, 0x48ac(r27)
    lfs f1, lbl_80887904
    li r7, 0x0
    fsubs f9, f8, f0
    stfs f1, 0x148(r1)
    fadds f0, f8, f0
    lfs f8, lbl_808879B8
    fmuls f12, f10, f7
    stfs f8, 0x154(r1)
    fmuls f11, f10, f11
    stfs f12, 0x144(r1)
    fmuls f9, f10, f9
    lwz r3, lbl_8087EEB0
    fmuls f7, f10, f0
    stfs f11, 0x150(r1)
    stfs f9, 0x14c(r1)
    stfs f7, 0x140(r1)
    lfs f0, 0x4800(r27)
    fadds f0, f7, f0
    stfs f0, 0x140(r1)
    lfs f0, 0x4804(r27)
    fadds f0, f12, f0
    stfs f0, 0x144(r1)
    lfs f0, 0x4808(r27)
    fadds f0, f1, f0
    stfs f0, 0x148(r1)
    bl fn_800629F0
lbl_fn_8051D868_00001C90:
    addi r11, r1, 0x430
    psq_l f31, 0x488(r1), 0, 0
    lfd f31, 0x480(r1)
    psq_l f30, 0x478(r1), 0, 0
    lfd f30, 0x470(r1)
    psq_l f29, 0x468(r1), 0, 0
    lfd f29, 0x460(r1)
    psq_l f28, 0x458(r1), 0, 0
    lfd f28, 0x450(r1)
    psq_l f27, 0x448(r1), 0, 0
    lfd f27, 0x440(r1)
    psq_l f26, 0x438(r1), 0, 0
    lfd f26, 0x430(r1)
    bl _restgpr_14
    lwz r0, 0x494(r1)
    mtlr r0
    addi r1, r1, 0x490
    blr
}
