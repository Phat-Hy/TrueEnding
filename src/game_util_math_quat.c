#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006F2F0(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_8011728C(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7590(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF4C(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_8021C6A4(void);
extern void fn_80370174(void);
extern void fn_804444E8(void);
extern void fn_80444BE8(void);
extern void fn_80444C48(void);
extern void fn_80444C50(void);
extern void fn_804A24C4(void);
extern void fn_804A251C(void);
extern void fn_804A26DC(void);
extern void fn_804A2724(void);
extern void fn_804A3C24(void);
extern void fn_804A4930(void);
extern void fn_804A55FC(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807611F0[];
extern u8 lbl_80761220[];
extern u8 lbl_80761228[];
extern u8 lbl_80761230[];
extern u8 lbl_80761278[];
extern u8 lbl_807612E4[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80796824[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F578;
extern u32 lbl_8087F580;
extern u32 lbl_808813D0;
extern u32 lbl_808880C0;
extern u32 lbl_808880C4;
extern u32 lbl_808880C8;
extern u32 lbl_808880CC;
extern u32 lbl_808880D4;
extern u32 lbl_808880D8;
extern u32 lbl_808880DC;
extern u32 lbl_808880E0;
extern u32 lbl_808880E4;

/* Function declarations */
void fn_8058057C(void);
void fn_80580584(void);
void fn_80580694(void);
void fn_805807A8(void);
void fn_80580B54(void);
void fn_80580D84(void);
void fn_80580DB4(void);
void fn_80580DE4(void);
void fn_8058100C(void);
void fn_805811E0(void);
void fn_80581574(void);
void fn_80581664(void);
void fn_80581678(void);
void fn_80581820(void);
void fn_80581968(void);
void fn_80581A58(void);

asm void fn_8058057C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80580584(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    bl fn_805807A8
    lwz r0, 0x32fc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80580584_00000078
    lwz r3, 0xdc(r30)
    cmpw r3, r0
    bge lbl_fn_80580584_00000078
    mulli r0, r3, 0x5c
    mr r3, r30
    add r31, r30, r0
    lwz r4, 0x3300(r31)
    bl fn_8058100C
    lwz r0, 0x3348(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80580584_00000068
    lwz r4, 0x3300(r31)
    mr r3, r30
    bl fn_805811E0
lbl_fn_80580584_00000068:
    lwz r4, 0x3300(r31)
    mr r3, r30
    lwz r5, 0x3348(r31)
    bl fn_80581574
lbl_fn_80580584_00000078:
    lwz r0, 0x32fc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80580584_00000098
    lwz r3, 0xd8(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_80580584_00000100
lbl_fn_80580584_00000098:
    lwz r5, 0xe0(r30)
    lis r4, lbl_807612E4@ha
    lwz r0, 0xdc(r30)
    addi r4, r4, lbl_807612E4@l
    lwz r31, 0xa8(r30)
    addi r3, r1, 0x20
    subf r5, r5, r0
    addi r4, r4, 0x27e
    slwi r0, r5, 2
    add r6, r30, r0
    addi r5, r5, 0x1
    lwz r30, 0xac(r6)
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    mr r4, r30
    addi r6, r1, 0x8
    li r5, 0x0
    li r7, 0x0
    bl fn_804A55FC
lbl_fn_80580584_00000100:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80580694(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    mr r29, r3
    bl fn_805807A8
    lwz r0, 0x32fc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80580694_0000018C
    lwz r3, 0xdc(r29)
    cmpw r3, r0
    bge lbl_fn_80580694_0000018C
    mulli r0, r3, 0x5c
    mr r3, r29
    add r31, r29, r0
    lwz r4, 0x3300(r31)
    bl fn_8058100C
    lwz r0, 0x3348(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80580694_0000017C
    lwz r4, 0x3300(r31)
    mr r3, r29
    bl fn_805811E0
lbl_fn_80580694_0000017C:
    lwz r4, 0x3300(r31)
    mr r3, r29
    lwz r5, 0x3348(r31)
    bl fn_80581574
lbl_fn_80580694_0000018C:
    lwz r5, 0xe0(r29)
    lis r4, lbl_807612E4@ha
    lwz r0, 0xdc(r29)
    addi r4, r4, lbl_807612E4@l
    lwz r31, 0xa8(r29)
    addi r3, r1, 0x20
    subf r5, r5, r0
    addi r4, r4, 0x27e
    slwi r0, r5, 2
    add r6, r29, r0
    addi r5, r5, 0x1
    lwz r30, 0xac(r6)
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lwz r3, lbl_8087F580
    mr r4, r30
    addi r6, r1, 0x8
    li r5, 0x0
    li r7, 0x1
    bl fn_804A55FC
    lwz r5, 0xe0(r29)
    addis r3, r29, 0x2
    lwz r4, 0xdc(r29)
    li r0, 0x1
    stw r0, 0x5b14(r3)
    subf r0, r5, r4
    stw r0, 0x5b18(r3)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_805807A8(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xe0
    bl _savegpr_20
    lwz r5, 0xa8(r3)
    lis r21, lbl_807612E4@ha
    addi r21, r21, lbl_807612E4@l
    lwz r27, lbl_8087F4F0
    lwz r0, 0x38(r5)
    mr r25, r3
    addi r4, r21, 0x28c
    li r6, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0xd4(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, lbl_8087F4F0
    lwz r3, 0xd4(r3)
    lwz r5, 0x6000(r5)
    bl fn_801F4CB4
    lwz r0, 0x32fc(r25)
    lwz r3, 0xdc(r25)
    cmpw r3, r0
    bge lbl_fn_805807A8_000002E4
    mulli r0, r3, 0x5c
    add r3, r25, r0
    lwz r0, 0x3348(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805807A8_000002D0
    lwz r4, 0x3300(r3)
    mr r3, r27
    bl fn_804444E8
    mr r5, r3
    lwz r3, 0xd4(r25)
    addi r4, r21, 0x294
    li r6, 0x0
    bl fn_801F4CB4
    b lbl_fn_805807A8_000002E4
lbl_fn_805807A8_000002D0:
    lwz r3, 0xd4(r25)
    addi r4, r21, 0x294
    li r5, 0x1
    li r6, 0x0
    bl fn_801F4CB4
lbl_fn_805807A8_000002E4:
    addis r4, r25, 0x2
    lis r3, lbl_807612E4@ha
    addi r30, r3, lbl_807612E4@l
    li r0, 0x1
    stw r0, 0x6c(r25)
    addi r3, r30, 0x29c
    lwz r23, 0x32fc(r25)
    lwz r22, 0x5b0c(r4)
    lwz r21, 0xa8(r25)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r21
    addi r3, r1, 0x28
    bl fn_801F4E8C
    lwz r3, 0x68(r25)
    addi r4, r30, 0x2a9
    addi r5, r1, 0x28
    bl fn_801F6E78
    lwz r3, 0x68(r25)
    addi r4, r30, 0x2b1
    lfs f1, lbl_808880D4
    bl fn_801F6C80
    lwz r3, 0x68(r25)
    mr r4, r22
    mr r5, r23
    li r6, 0xa
    bl fn_804A4930
    lfs f0, lbl_808880C4
    lis r22, lbl_80796824@ha
    stfs f0, 0x50(r1)
    addi r23, r22, lbl_80796824@l
    addi r29, r1, 0x18
    addis r31, r25, 0x2
    stfs f0, 0x54(r1)
    li r26, 0x0
    li r24, 0x0
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
lbl_fn_805807A8_00000380:
    addi r3, r1, 0x68
    addi r4, r30, 0x2bc
    addi r5, r26, 0x1
    crclr 6
    bl sprintf
    lwz r21, 0xa8(r25)
    addi r3, r1, 0x68
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r21
    addi r3, r1, 0x3c
    bl fn_801F4E8C
    lfs f6, 0x3c(r1)
    add r28, r25, r24
    lfs f5, 0x40(r1)
    addi r4, r30, 0x2a9
    lfs f4, 0x44(r1)
    addi r5, r1, 0x50
    lfs f3, 0x48(r1)
    lfs f0, 0x4c(r1)
    stfs f6, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f0, 0x60(r1)
    lwz r3, 0xac(r28)
    bl fn_801F6E78
    lwz r3, 0x5b0c(r31)
    lwz r0, 0x32fc(r25)
    add r3, r26, r3
    cmpw r3, r0
    bge lbl_fn_805807A8_000005B0
    mulli r0, r3, 0x5c
    add r21, r25, r0
    lwz r3, 0x3300(r21)
    bl fn_80211480
    lwz r0, 0x3348(r21)
    mr r20, r3
    cmpwi r0, 0x0
    beq lbl_fn_805807A8_00000464
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2c9
    lwz r5, 0x8(r20)
    bl fn_801F837C
    lwz r4, 0x3300(r21)
    mr r3, r27
    bl fn_804444E8
    mr r5, r3
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2d2
    li r6, 0x0
    bl fn_801F8598
    lwz r3, lbl_8087F4F0
    mr r4, r20
    bl fn_80444BE8
    mr r20, r3
    b lbl_fn_805807A8_000004D8
lbl_fn_805807A8_00000464:
    lwz r3, 0x3300(r21)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_805807A8_000004AC
    lwz r3, 0xb8(r3)
    addi r4, r30, 0x2c9
    lwz r5, lbl_8087F1E4
    addi r0, r3, 0xeb
    lwz r3, 0xac(r28)
    slwi r0, r0, 3
    add r5, r5, r0
    lwz r5, 0x4(r5)
    cmpwi r5, 0x0
    beq lbl_fn_805807A8_000004A0
    b lbl_fn_805807A8_000004A4
lbl_fn_805807A8_000004A0:
    la r5, lbl_808813D0
lbl_fn_805807A8_000004A4:
    bl fn_801F837C
    b lbl_fn_805807A8_000004BC
lbl_fn_805807A8_000004AC:
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2c9
    addi r5, r22, lbl_80796824@l
    bl fn_801F837C
lbl_fn_805807A8_000004BC:
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2d2
    addi r5, r23, 0xe
    bl fn_801F837C
    lwz r3, lbl_8087F4F0
    bl fn_80444C48
    mr r20, r3
lbl_fn_805807A8_000004D8:
    lwz r0, 0x3350(r21)
    cmpwi r0, 0x0
    beq lbl_fn_805807A8_00000520
    lfs f1, lbl_808880D8
    addi r4, r30, 0x2d6
    lwz r3, 0xac(r28)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2de
    lfs f1, lbl_808880C4
    bl fn_801F6C80
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2e8
    lfs f1, lbl_808880C0
    bl fn_801F6C80
    b lbl_fn_805807A8_00000558
lbl_fn_805807A8_00000520:
    lfs f1, lbl_808880DC
    addi r4, r30, 0x2d6
    lwz r3, 0xac(r28)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2de
    lfs f1, lbl_808880C0
    bl fn_801F6C80
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2e8
    lfs f1, lbl_808880C4
    bl fn_801F6C80
lbl_fn_805807A8_00000558:
    lwz r3, 0xac(r28)
    addi r4, r30, 0x2f2
    lwz r5, 0x3304(r21)
    li r6, 0x0
    bl fn_801F8598
    lwz r4, lbl_8087F4F0
    mr r5, r20
    addi r3, r1, 0x18
    bl fn_80444C50
    addi r5, r1, 0x8
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    add r21, r25, r24
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r30, 0x2f8
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0xac(r21)
    bl fn_801F7590
    lwz r3, 0xac(r21)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_805807A8_000005B0:
    addi r26, r26, 0x1
    addi r24, r24, 0x4
    cmpwi r26, 0xa
    blt lbl_fn_805807A8_00000380
    addi r11, r1, 0xe0
    bl _restgpr_20
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80580B54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r30, lbl_8087EF70
    mr r3, r30
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80580B54_00000624
    mr r3, r30
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80580B54_00000674
lbl_fn_80580B54_00000624:
    addis r4, r31, 0x2
    lwz r3, 0x5b24(r4)
    lwz r4, 0x5b28(r4)
    addi r0, r3, 0x1
    cmpw r0, r4
    bge lbl_fn_80580B54_00000640
    mr r4, r0
lbl_fn_80580B54_00000640:
    addis r6, r31, 0x2
    li r5, 0x5
    li r0, 0x1
    stw r4, 0x5b24(r6)
    addi r3, r1, 0x14
    li r4, 0x3
    stw r5, 0x5b1c(r6)
    stw r0, 0x5b20(r6)
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80580B54_000007F0
lbl_fn_80580B54_00000674:
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80580B54_000006A4
    mr r3, r30
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80580B54_000006F4
lbl_fn_80580B54_000006A4:
    addis r4, r31, 0x2
    li r3, 0x1
    lwz r4, 0x5b24(r4)
    subi r0, r4, 0x1
    cmpwi r0, 0x1
    ble lbl_fn_80580B54_000006C0
    mr r3, r0
lbl_fn_80580B54_000006C0:
    addis r6, r31, 0x2
    li r5, 0x5
    li r0, 0x2
    stw r3, 0x5b24(r6)
    addi r3, r1, 0x10
    li r4, 0x3
    stw r5, 0x5b1c(r6)
    stw r0, 0x5b20(r6)
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80580B54_000007F0
lbl_fn_80580B54_000006F4:
    mr r3, r30
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80580B54_00000724
    mr r3, r30
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80580B54_00000774
lbl_fn_80580B54_00000724:
    addis r4, r31, 0x2
    lwz r3, 0x5b24(r4)
    lwz r4, 0x5b28(r4)
    addi r0, r3, 0xa
    cmpw r0, r4
    bge lbl_fn_80580B54_00000740
    mr r4, r0
lbl_fn_80580B54_00000740:
    addis r6, r31, 0x2
    li r5, 0x5
    li r0, 0x1
    stw r4, 0x5b24(r6)
    addi r3, r1, 0xc
    li r4, 0x3
    stw r5, 0x5b1c(r6)
    stw r0, 0x5b20(r6)
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80580B54_000007F0
lbl_fn_80580B54_00000774:
    mr r3, r30
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80580B54_000007A4
    mr r3, r30
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80580B54_000007F0
lbl_fn_80580B54_000007A4:
    addis r4, r31, 0x2
    li r3, 0x1
    lwz r4, 0x5b24(r4)
    subi r0, r4, 0xa
    cmpwi r0, 0x1
    ble lbl_fn_80580B54_000007C0
    mr r3, r0
lbl_fn_80580B54_000007C0:
    addis r6, r31, 0x2
    li r5, 0x5
    li r0, 0x2
    stw r3, 0x5b24(r6)
    addi r3, r1, 0x8
    li r4, 0x3
    stw r5, 0x5b1c(r6)
    stw r0, 0x5b20(r6)
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80580B54_000007F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80580D84(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580D84_00000828
    lfs f0, lbl_808880C4
    stfs f0, 0x100(r3)
lbl_fn_80580D84_00000828:
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_80580DB4(void)
{
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DB4_00000858
    lfs f0, lbl_808880C4
    stfs f0, 0x50(r3)
lbl_fn_80580DB4_00000858:
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_80580DE4(void)
{
    nofralloc
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_00000898
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_0000088C
    lfs f0, lbl_808880C4
    stfs f0, 0x100(r4)
lbl_fn_80580DE4_0000088C:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_00000898:
    lwz r4, 0xd8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_000008C8
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_000008BC
    lfs f0, lbl_808880C4
    stfs f0, 0x100(r4)
lbl_fn_80580DE4_000008BC:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_000008C8:
    lwz r4, 0x90(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_000008F8
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_000008EC
    lfs f0, lbl_808880C4
    stfs f0, 0x100(r4)
lbl_fn_80580DE4_000008EC:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_000008F8:
    lwz r4, 0x94(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_00000928
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_0000091C
    lfs f0, lbl_808880C4
    stfs f0, 0x100(r4)
lbl_fn_80580DE4_0000091C:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_00000928:
    lwz r4, 0x98(r3)
    lfs f0, lbl_808880C4
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_00000958
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_0000094C
    stfs f0, 0x50(r4)
lbl_fn_80580DE4_0000094C:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_00000958:
    lwz r4, 0x9c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_00000984
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_00000978
    stfs f0, 0x50(r4)
lbl_fn_80580DE4_00000978:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_00000984:
    lwz r5, 0xa8(r3)
    li r0, 0x2
    lfs f0, lbl_808880C4
    li r6, 0x0
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    mtctr r0
lbl_fn_80580DE4_000009A4:
    lwz r4, 0xac(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_000009D0
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_000009C4
    stfs f0, 0x50(r4)
lbl_fn_80580DE4_000009C4:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_000009D0:
    lwz r4, 0xb0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_000009FC
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_000009F0
    stfs f0, 0x50(r4)
lbl_fn_80580DE4_000009F0:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_000009FC:
    lwz r4, 0xb4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_00000A28
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_00000A1C
    stfs f0, 0x50(r4)
lbl_fn_80580DE4_00000A1C:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_00000A28:
    lwz r4, 0xb8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_00000A54
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_00000A48
    stfs f0, 0x50(r4)
lbl_fn_80580DE4_00000A48:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_00000A54:
    lwz r4, 0xbc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80580DE4_00000A80
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80580DE4_00000A74
    stfs f0, 0x50(r4)
lbl_fn_80580DE4_00000A74:
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80580DE4_00000A80:
    addi r3, r3, 0x14
    addi r6, r6, 0x4
    bdnz lbl_fn_80580DE4_000009A4
    blr
}

asm void fn_8058100C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_27
    mr r30, r3
    lwz r3, lbl_8087F578
    mr r27, r4
    bl fn_804A24C4
    cmpwi r3, 0x0
    beq lbl_fn_8058100C_00000C44
    lwz r3, 0x90(r30)
    mr r4, r27
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F4F0
    bl fn_804444E8
    mr r29, r3
    lwz r3, lbl_8087F578
    mr r4, r27
    bl fn_804A2724
    mr r31, r3
    lwz r3, lbl_8087F578
    mr r4, r27
    bl fn_804A251C
    lwz r0, 0x4c(r30)
    cmpwi r0, 0x4
    bne lbl_fn_8058100C_00000B40
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80761220@ha
    stw r3, 0x2c(r1)
    lfd f2, lbl_80761220@l(r4)
    stw r0, 0x28(r1)
    lfs f0, lbl_808880E0
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r3, 0x34(r1)
lbl_fn_8058100C_00000B40:
    cmpwi r29, 0x0
    li r27, 0x0
    ble lbl_fn_8058100C_00000B58
    cmpwi r31, 0x0
    ble lbl_fn_8058100C_00000B58
    subf r27, r31, r3
lbl_fn_8058100C_00000B58:
    cmpwi r27, 0x0
    bge lbl_fn_8058100C_00000BEC
    slwi r0, r27, 1
    lis r29, lbl_807612E4@ha
    subf r27, r0, r27
    addi r3, r1, 0x8
    addi r29, r29, lbl_807612E4@l
    mr r5, r27
    addi r4, r29, 0x2ff
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    stw r3, 0x34(r1)
    lis r0, 0x4330
    lis r5, lbl_80761228@ha
    lwz r4, 0x90(r30)
    stw r0, 0x30(r1)
    addi r3, r29, 0x303
    lfd f1, lbl_80761228@l(r5)
    addi r28, r4, 0x58
    lfd f0, 0x30(r1)
    fsubs f31, f0, f1
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    lwz r4, 0x90(r30)
    addi r3, r29, 0x30d
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808880C0
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    b lbl_fn_8058100C_00000C14
lbl_fn_8058100C_00000BEC:
    lwz r4, 0x90(r30)
    lis r3, lbl_807612E4@ha
    addi r3, r3, lbl_807612E4@l
    addi r3, r3, 0x30d
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808880C4
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
lbl_fn_8058100C_00000C14:
    lis r29, lbl_807612E4@ha
    lwz r3, 0x90(r30)
    addi r29, r29, lbl_807612E4@l
    mr r5, r31
    addi r4, r29, 0x313
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, 0x90(r30)
    mr r5, r27
    addi r4, r29, 0x31b
    li r6, 0x0
    bl fn_801F4CB4
lbl_fn_8058100C_00000C44:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805811E0(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    addi r11, r1, 0x2e0
    bl _savegpr_21
    lis r31, lbl_807611F0@ha
    mr r21, r4
    mr r27, r3
    mr r3, r21
    addi r31, r31, lbl_807611F0@l
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_805811E0_00000FE0
    mr r3, r21
    bl fn_8020EFEC
    cmpwi r3, 0x0
    bne lbl_fn_805811E0_00000CB8
    mr r3, r21
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_805811E0_00000FE0
lbl_fn_805811E0_00000CB8:
    lwz r3, 0x94(r27)
    lis r26, lbl_807612E4@ha
    lfs f0, lbl_808880C4
    mr r23, r27
    lwz r0, 0x38(r3)
    addi r26, r26, lbl_807612E4@l
    li r22, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
lbl_fn_805811E0_00000CF0:
    addi r3, r1, 0x48
    addi r4, r26, 0x322
    addi r5, r22, 0x1
    crclr 6
    bl sprintf
    lwz r28, 0x94(r27)
    addi r3, r1, 0x48
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addi r4, r26, 0x2a9
    lfs f3, 0xc(r1)
    addi r5, r1, 0x30
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    lwz r3, 0x98(r23)
    bl fn_801F6E78
    addi r22, r22, 0x1
    addi r23, r23, 0x4
    cmpwi r22, 0x2
    blt lbl_fn_805811E0_00000CF0
    mr r3, r21
    bl fn_8020EFEC
    mr r29, r3
    mr r3, r21
    bl fn_80206C50
    lis r26, lbl_807612E4@ha
    mr r22, r3
    mr r25, r27
    addi r23, r29, 0xe4
    addi r24, r3, 0xc4
    addi r26, r26, lbl_807612E4@l
    li r28, 0x0
lbl_fn_805811E0_00000D98:
    cmpwi r29, 0x0
    li r4, 0x0
    beq lbl_fn_805811E0_00000DAC
    mr r4, r23
    b lbl_fn_805811E0_00000DB8
lbl_fn_805811E0_00000DAC:
    cmpwi r22, 0x0
    beq lbl_fn_805811E0_00000DB8
    mr r4, r24
lbl_fn_805811E0_00000DB8:
    cmpwi r4, 0x0
    beq lbl_fn_805811E0_00000DF0
    addi r3, r1, 0x88
    bl fn_8021C6A4
    cmpwi r3, 0x0
    beq lbl_fn_805811E0_00000DF0
    lwz r3, 0x98(r25)
    addi r4, r26, 0x330
    addi r5, r1, 0x88
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x98(r25)
    bl fn_801F837C
lbl_fn_805811E0_00000DF0:
    addi r28, r28, 0x1
    addi r24, r24, 0x14
    cmpwi r28, 0x2
    addi r25, r25, 0x4
    addi r23, r23, 0x14
    blt lbl_fn_805811E0_00000D98
    cmpwi r29, 0x0
    li r28, 0x0
    beq lbl_fn_805811E0_00000E3C
    mr r3, r29
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_805811E0_00000E34
    lwz r4, 0x7c(r29)
    li r3, 0x1
    bl fn_8020ED84
    mr r28, r3
lbl_fn_805811E0_00000E34:
    li r30, 0x0
    b lbl_fn_805811E0_00000E44
lbl_fn_805811E0_00000E3C:
    mr r29, r22
    li r30, 0x1
lbl_fn_805811E0_00000E44:
    addi r3, r1, 0x1c
    li r4, 0x0
    li r5, 0x14
    bl memset
    cmpwi r29, 0x0
    beq lbl_fn_805811E0_00000EB4
    lfs f0, 0x0(r29)
    li r0, 0x0
    fctiwz f0, f0
    stfd f0, 0x288(r1)
    lwz r3, 0x28c(r1)
    stw r3, 0x1c(r1)
    lfs f0, 0x8(r29)
    fctiwz f0, f0
    stw r0, 0x24(r1)
    stfd f0, 0x290(r1)
    lwz r0, 0x294(r1)
    stw r0, 0x20(r1)
    lfs f0, 0xc(r29)
    fctiwz f0, f0
    stfd f0, 0x298(r1)
    lwz r0, 0x29c(r1)
    stw r0, 0x28(r1)
    lfs f0, 0x4(r29)
    fctiwz f0, f0
    stfd f0, 0x2a0(r1)
    lwz r0, 0x2a4(r1)
    stw r0, 0x2c(r1)
lbl_fn_805811E0_00000EB4:
    cmpwi r28, 0x0
    beq lbl_fn_805811E0_00000F2C
    lfs f0, 0x0(r28)
    lwz r6, 0x1c(r1)
    fctiwz f0, f0
    lwz r5, 0x20(r1)
    lwz r4, 0x28(r1)
    stfd f0, 0x2a0(r1)
    lwz r3, 0x2c(r1)
    lwz r0, 0x2a4(r1)
    add r0, r6, r0
    stw r0, 0x1c(r1)
    lfs f0, 0x8(r28)
    fctiwz f0, f0
    stfd f0, 0x298(r1)
    lwz r0, 0x29c(r1)
    add r0, r5, r0
    stw r0, 0x20(r1)
    lfs f0, 0xc(r28)
    fctiwz f0, f0
    stfd f0, 0x290(r1)
    lwz r0, 0x294(r1)
    add r0, r4, r0
    stw r0, 0x28(r1)
    lfs f0, 0x4(r28)
    fctiwz f0, f0
    stfd f0, 0x288(r1)
    lwz r0, 0x28c(r1)
    add r0, r3, r0
    stw r0, 0x2c(r1)
lbl_fn_805811E0_00000F2C:
    lis r26, lbl_807612E4@ha
    addi r24, r31, 0x14
    addi r23, r31, 0x20
    addi r29, r31, 0x0
    addi r26, r26, lbl_807612E4@l
    addi r28, r1, 0x1c
    li r21, 0x0
lbl_fn_805811E0_00000F48:
    cmpwi r30, 0x0
    beq lbl_fn_805811E0_00000F58
    lwz r31, 0x0(r24)
    b lbl_fn_805811E0_00000F5C
lbl_fn_805811E0_00000F58:
    lwz r31, 0x0(r23)
lbl_fn_805811E0_00000F5C:
    mr r5, r21
    addi r3, r1, 0x48
    addi r4, r26, 0x33a
    crclr 6
    bl sprintf
    slwi r22, r31, 2
    li r3, 0x0
    lwzx r4, r29, r22
    bl fn_80116FC0
    lwz r4, 0x94(r27)
    mr r31, r3
    addi r3, r1, 0x48
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r31
    bl fn_801FEE08
    mr r5, r21
    addi r3, r1, 0x48
    addi r4, r26, 0x344
    crclr 6
    bl sprintf
    lwz r3, 0x94(r27)
    addi r4, r1, 0x48
    lwzx r5, r28, r22
    li r6, 0x0
    bl fn_801F4CB4
    addi r21, r21, 0x1
    addi r23, r23, 0x4
    cmpwi r21, 0x3
    addi r24, r24, 0x4
    blt lbl_fn_805811E0_00000F48
lbl_fn_805811E0_00000FE0:
    addi r11, r1, 0x2e0
    bl _restgpr_21
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_80581574(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    bl fn_80211480
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80581574_000010D0
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80581574_00001088
    cmpwi r30, 0x0
    beq lbl_fn_80581574_00001064
    lwz r3, 0x4(r31)
    bl fn_80206C50
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80581574_000010D0
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0x88(r4)
    bl fn_804A3C24
    b lbl_fn_80581574_000010D0
lbl_fn_80581574_00001064:
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x15b
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_80581574_000010D0
lbl_fn_80581574_00001088:
    lwz r3, 0x4(r31)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80581574_000010C0
    lwz r3, 0x4(r31)
    bl fn_8020EFEC
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80581574_000010D0
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0x84(r4)
    bl fn_804A3C24
    b lbl_fn_80581574_000010D0
lbl_fn_80581574_000010C0:
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0xc(r31)
    bl fn_804A3C24
lbl_fn_80581574_000010D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80581664(void)
{
    nofralloc
    addis r3, r3, 0x2
    li r0, 0x1
    stw r0, 0x5b14(r3)
    stw r4, 0x5b18(r3)
    blr
}

asm void fn_80581678(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    addis r6, r3, 0x2
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    lwz r3, 0x5b2c(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r0, 0x5b14(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80581678_00001274
    lwz r5, 0x5b2c(r6)
    lis r30, lbl_807612E4@ha
    addi r30, r30, lbl_807612E4@l
    addi r3, r1, 0x20
    lwz r0, 0x38(r5)
    addi r4, r30, 0x27e
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x5b18(r6)
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lwz r29, 0xa8(r31)
    addi r3, r1, 0x20
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    addis r3, r31, 0x2
    lfs f31, 0x8(r1)
    lwz r4, 0x5b2c(r3)
    addi r3, r30, 0x2a9
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    addis r3, r31, 0x2
    lfs f31, 0xc(r1)
    lwz r4, 0x5b2c(r3)
    addi r3, r30, 0x2a9
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    addis r5, r31, 0x2
    addi r4, r30, 0x2d2
    lwz r3, 0x5b2c(r5)
    li r6, 0x0
    lwz r5, 0x5b24(r5)
    bl fn_801F4CB4
    addis r6, r31, 0x2
    lwz r5, 0x5b1c(r6)
    cmpwi r5, 0x0
    ble lbl_fn_80581678_00001248
    lwz r4, 0x5b20(r6)
    lis r0, 0x4330
    lis r3, lbl_80761220@ha
    subi r5, r5, 0x1
    addi r4, r4, 0x5
    stw r0, 0x60(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_80761220@l(r3)
    stw r0, 0x64(r1)
    lwz r3, 0x5b2c(r6)
    lfd f0, 0x60(r1)
    stw r5, 0x5b1c(r6)
    fsubs f0, f0, f1
    stfs f0, 0x100(r3)
    b lbl_fn_80581678_00001274
lbl_fn_80581678_00001248:
    lwz r3, 0x5b2c(r6)
    lfs f0, lbl_808880E4
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80581678_00001268
    stfs f0, 0x100(r3)
    b lbl_fn_80581678_00001274
lbl_fn_80581678_00001268:
    lfs f0, lbl_808880C0
    fadds f0, f0, f1
    stfs f0, 0x100(r3)
lbl_fn_80581678_00001274:
    addis r3, r31, 0x2
    li r0, 0x0
    stw r0, 0x5b14(r3)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80581820(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    stw r30, 0x208(r1)
    mr r30, r3
    lwz r7, 0x74(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80581820_000013D4
    cmpwi r4, 0x0
    beq lbl_fn_80581820_000013BC
    li r0, 0x1
    stw r5, 0x7c(r3)
    cmpwi r6, 0x0
    lfs f0, lbl_808880CC
    stw r0, 0x78(r3)
    stfs f0, 0x104(r7)
    beq lbl_fn_80581820_00001358
    lis r3, lbl_80761230@ha
    slwi r0, r5, 2
    addi r3, r3, lbl_80761230@l
    lwz r4, lbl_8087F1E4
    lwzx r0, r3, r0
    addi r3, r1, 0x8
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80581820_0000131C
    b lbl_fn_80581820_00001320
lbl_fn_80581820_0000131C:
    la r4, lbl_808813D0
lbl_fn_80581820_00001320:
    mr r5, r6
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x74(r30)
    lis r3, lbl_807612E4@ha
    addi r3, r3, lbl_807612E4@l
    addi r3, r3, 0x355
    addi r31, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_801FEE08
    b lbl_fn_80581820_000013D4
lbl_fn_80581820_00001358:
    lis r3, lbl_80761230@ha
    slwi r0, r5, 2
    addi r3, r3, lbl_80761230@l
    lwz r4, lbl_8087F1E4
    lwzx r0, r3, r0
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r31, 0x4(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80581820_00001384
    b lbl_fn_80581820_00001388
lbl_fn_80581820_00001384:
    la r31, lbl_808813D0
lbl_fn_80581820_00001388:
    cmpwi r31, 0x0
    beq lbl_fn_80581820_000013D4
    lwz r4, 0x74(r30)
    lis r3, lbl_807612E4@ha
    addi r3, r3, lbl_807612E4@l
    addi r3, r3, 0x355
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    b lbl_fn_80581820_000013D4
lbl_fn_80581820_000013BC:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x7c(r3)
    lfs f0, lbl_808880C8
    stw r0, 0x78(r3)
    stfs f0, 0x104(r7)
lbl_fn_80581820_000013D4:
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80581968(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r7, 0x80(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80581968_000014C4
    cmpwi r4, 0x0
    beq lbl_fn_80581968_000014A8
    cmpwi r6, 0x0
    li r0, 0x0
    stw r0, 0x8c(r3)
    beq lbl_fn_80581968_0000142C
    li r0, 0x1
    stw r0, 0x8c(r3)
lbl_fn_80581968_0000142C:
    li r0, 0x1
    stw r0, 0x84(r3)
    lis r4, lbl_80761278@ha
    lwz r6, 0x80(r3)
    stw r5, 0x88(r3)
    slwi r0, r5, 2
    lfs f0, lbl_808880CC
    addi r4, r4, lbl_80761278@l
    lwzx r0, r4, r0
    stfs f0, 0x104(r6)
    slwi r0, r0, 3
    lwz r4, lbl_8087F1E4
    add r4, r4, r0
    lwz r31, 0x4(r4)
    cmpwi r31, 0x0
    beq lbl_fn_80581968_00001470
    b lbl_fn_80581968_00001474
lbl_fn_80581968_00001470:
    la r31, lbl_808813D0
lbl_fn_80581968_00001474:
    cmpwi r31, 0x0
    beq lbl_fn_80581968_000014C4
    lwz r4, 0x80(r3)
    lis r3, lbl_807612E4@ha
    addi r3, r3, lbl_807612E4@l
    addi r3, r3, 0x361
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r31
    bl fn_801FEE08
    b lbl_fn_80581968_000014C4
lbl_fn_80581968_000014A8:
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x8c(r3)
    lfs f0, lbl_808880C8
    stw r0, 0x88(r3)
    stw r4, 0x84(r3)
    stfs f0, 0x104(r7)
lbl_fn_80581968_000014C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80581A58(void)
{
    nofralloc
    stwu r1, -0x710(r1)
    mflr r0
    stw r0, 0x714(r1)
    addi r11, r1, 0x6d0
    stfd f31, 0x700(r1)
    psq_st f31, 0x708(r1), 0, 0
    stfd f30, 0x6f0(r1)
    psq_st f30, 0x6f8(r1), 0, 0
    stfd f29, 0x6e0(r1)
    psq_st f29, 0x6e8(r1), 0, 0
    stfd f28, 0x6d0(r1)
    psq_st f28, 0x6d8(r1), 0, 0
    bl _savegpr_24
    lis r6, lbl_807772D0@ha
    li r24, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r6, 0x6c(r1)
    mr r25, r3
    mr r27, r4
    mr r26, r5
    stw r24, 0x70(r1)
    addi r3, r1, 0x7c
    li r4, 0x0
    stw r24, 0x74(r1)
    li r5, 0x400
    stw r24, 0x78(r1)
    stw r24, 0x69c(r1)
    bl memset
    addi r3, r1, 0x67c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x6c
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x6c(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    stw r24, 0x8(r1)
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0x40
    stw r24, 0xc(r1)
    bl memset
    lwz r3, lbl_8087F578
    li r0, 0x1
    lfs f0, lbl_808880C0
    li r4, 0x64
    cmpwi r3, 0x0
    stfs f0, 0x50(r1)
    stw r24, 0x54(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r24, 0x64(r1)
    stw r0, 0x68(r1)
    beq lbl_fn_80581A58_000015C0
    bl fn_804A26DC
lbl_fn_80581A58_000015C0:
    li r0, 0x0
    stw r0, 0xf8(r25)
    li r4, 0x0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80581A58_000015DC
    lwz r4, 0x10d0(r3)
lbl_fn_80581A58_000015DC:
    addis r3, r25, 0x2
    lwz r0, 0x5b4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80581A58_000015F0
    stw r4, 0x5b4c(r3)
lbl_fn_80581A58_000015F0:
    lwz r12, 0x6c(r1)
    mr r4, r27
    mr r5, r26
    addi r3, r1, 0x6c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80761220@ha
    lis r27, lbl_807612E4@ha
    lfs f29, lbl_808880C0
    addi r27, r27, lbl_807612E4@l
    lfs f30, lbl_808880C4
    li r28, 0x0
    lfd f31, lbl_80761220@l(r3)
    li r29, 0x64
    li r30, 0x1
    lis r31, 0x4330
lbl_fn_80581A58_00001634:
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    mr r24, r3
    addi r4, r27, 0x36b
    li r5, 0x1
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_80581A58_00001A18
    mr r3, r24
    addi r4, r27, 0x36d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80581A58_0000167C
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x60(r25)
    b lbl_fn_80581A58_00001A18
lbl_fn_80581A58_0000167C:
    mr r3, r24
    addi r4, r27, 0x26c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80581A58_000016A4
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x64(r25)
    b lbl_fn_80581A58_00001A18
lbl_fn_80581A58_000016A4:
    lbz r0, 0x0(r24)
    extsb. r0, r0
    bne lbl_fn_80581A58_00001A18
    stfs f29, 0x50(r1)
    addi r3, r1, 0x6c
    stw r28, 0x54(r1)
    stw r29, 0x58(r1)
    stw r30, 0x5c(r1)
    stw r28, 0x64(r1)
    stw r30, 0x68(r1)
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x8(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80581A58_00001A18
    addis r3, r25, 0x2
    mr r4, r26
    lwz r3, 0x5b00(r3)
    bl fn_8011728C
    cmpwi r3, 0x0
    beq lbl_fn_80581A58_00001A18
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_800DC288
    frsp f0, f1
    stfs f1, 0x50(r1)
    fcmpo cr0, f0, f30
    cror eq, lt, eq
    bne lbl_fn_80581A58_00001724
    stfs f29, 0x50(r1)
lbl_fn_80581A58_00001724:
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r24, r3
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r24, 0x0
    mr r4, r3
    beq lbl_fn_80581A58_00001768
    addis r5, r25, 0x2
    lwz r0, 0x5b4c(r5)
    cmpw r0, r24
    bge lbl_fn_80581A58_00001768
    lwz r0, 0x5b54(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80581A58_00001A18
lbl_fn_80581A58_00001768:
    cmpwi r3, 0x0
    beq lbl_fn_80581A58_00001790
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80581A58_00001790
    addis r3, r25, 0x2
    lwz r0, 0x5b58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80581A58_00001A18
lbl_fn_80581A58_00001790:
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_800DC12C
    mr r24, r3
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r24, 0x0
    mr r4, r3
    beq lbl_fn_80581A58_000017FC
    addis r5, r25, 0x2
    lwz r0, 0x5b4c(r5)
    cmpw r0, r24
    blt lbl_fn_80581A58_000017FC
    lwz r0, 0x5b54(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80581A58_000017FC
    cmpwi r3, 0x0
    beq lbl_fn_80581A58_000017EC
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80581A58_000017FC
lbl_fn_80581A58_000017EC:
    addis r3, r25, 0x2
    lwz r0, 0x5b58(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80581A58_00001A18
lbl_fn_80581A58_000017FC:
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_800DC12C
    cntlzw r0, r3
    addi r3, r1, 0x6c
    srwi r0, r0, 5
    stw r0, 0x5c(r1)
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    stw r3, 0x60(r1)
    bgt lbl_fn_80581A58_00001830
    stw r30, 0x60(r1)
lbl_fn_80581A58_00001830:
    lwz r24, lbl_8087EEC8
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    mr r5, r3
    mr r3, r24
    addi r4, r1, 0x10
    li r6, 0x20
    bl fn_8006F2F0
    addi r3, r1, 0x6c
    bl fn_8005B3CC
    bl fn_800DC12C
    cmpwi r3, 0x0
    ble lbl_fn_80581A58_0000189C
    lwz r0, 0x60(r1)
    stw r31, 0x6a0(r1)
    mullw r0, r3, r0
    lfs f0, 0x50(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x6a4(r1)
    lfd f1, 0x6a0(r1)
    fsubs f1, f1, f31
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x6a8(r1)
    lwz r0, 0x6ac(r1)
    stw r0, 0xc(r1)
    b lbl_fn_80581A58_00001930
lbl_fn_80581A58_0000189C:
    cmpwi r26, 0x0
    lfs f28, 0x50(r1)
    lwz r24, 0x60(r1)
    bne lbl_fn_80581A58_000018B4
    li r0, 0x0
    b lbl_fn_80581A58_0000192C
lbl_fn_80581A58_000018B4:
    lha r0, 0xbc(r26)
    cmpwi r0, 0x9
    bne lbl_fn_80581A58_00001900
    lwz r3, lbl_8087F578
    cmpwi r3, 0x0
    beq lbl_fn_80581A58_00001900
    lwz r4, 0x4(r26)
    bl fn_804A251C
    mullw r0, r24, r3
    stw r31, 0x6a8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x6ac(r1)
    lfd f0, 0x6a8(r1)
    fsubs f0, f0, f31
    fmuls f0, f28, f0
    fctiwz f0, f0
    stfd f0, 0x6a0(r1)
    lwz r0, 0x6a4(r1)
    b lbl_fn_80581A58_0000192C
lbl_fn_80581A58_00001900:
    lwz r0, 0xc8(r26)
    stw r31, 0x6a8(r1)
    mullw r0, r0, r24
    xoris r0, r0, 0x8000
    stw r0, 0x6ac(r1)
    lfd f0, 0x6a8(r1)
    fsubs f0, f0, f31
    fmuls f0, f28, f0
    fctiwz f0, f0
    stfd f0, 0x6a0(r1)
    lwz r0, 0x6a4(r1)
lbl_fn_80581A58_0000192C:
    stw r0, 0xc(r1)
lbl_fn_80581A58_00001930:
    lwz r0, 0xf8(r25)
    mulli r0, r0, 0x64
    add r0, r25, r0
    addic. r3, r0, 0xfc
    beq lbl_fn_80581A58_00001A0C
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x14(r1)
    lwz r4, 0x10(r1)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, 0x1c(r1)
    lwz r4, 0x18(r1)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, 0x24(r1)
    lwz r4, 0x20(r1)
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x2c(r1)
    lwz r4, 0x28(r1)
    stw r4, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, 0x34(r1)
    lwz r4, 0x30(r1)
    stw r4, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, 0x3c(r1)
    lwz r4, 0x38(r1)
    stw r4, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0x44(r1)
    lwz r4, 0x40(r1)
    stw r4, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x4c(r1)
    lwz r4, 0x48(r1)
    stw r4, 0x40(r3)
    stw r0, 0x44(r3)
    lfs f0, 0x50(r1)
    stfs f0, 0x48(r3)
    lwz r0, 0x54(r1)
    stw r0, 0x4c(r3)
    lwz r0, 0x58(r1)
    stw r0, 0x50(r3)
    lwz r0, 0x5c(r1)
    stw r0, 0x54(r3)
    lwz r0, 0x60(r1)
    stw r0, 0x58(r3)
    lwz r0, 0x64(r1)
    stw r0, 0x5c(r3)
    lwz r0, 0x68(r1)
    stw r0, 0x60(r3)
lbl_fn_80581A58_00001A0C:
    lwz r3, 0xf8(r25)
    addi r0, r3, 0x1
    stw r0, 0xf8(r25)
lbl_fn_80581A58_00001A18:
    addi r3, r1, 0x6c
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80581A58_00001634
    addi r11, r1, 0x6d0
    psq_l f31, 0x708(r1), 0, 0
    lfd f31, 0x700(r1)
    psq_l f30, 0x6f8(r1), 0, 0
    lfd f30, 0x6f0(r1)
    psq_l f29, 0x6e8(r1), 0, 0
    lfd f29, 0x6e0(r1)
    psq_l f28, 0x6d8(r1), 0, 0
    lfd f28, 0x6d0(r1)
    bl _restgpr_24
    lwz r0, 0x714(r1)
    mtlr r0
    addi r1, r1, 0x710
    blr
}
