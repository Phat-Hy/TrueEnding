#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006EF48(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800A4450(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_801170C8(void);
extern void fn_80117228(void);
extern void fn_801F3FF8(void);
extern void fn_801F48C8(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F64D0(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7590(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020EF04(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_8021154C(void);
extern void fn_80211648(void);
extern void fn_80212714(void);
extern void fn_80370174(void);
extern void fn_804444E8(void);
extern void fn_80444564(void);
extern void fn_80444804(void);
extern void fn_80444BE8(void);
extern void fn_80444C48(void);
extern void fn_80444C50(void);
extern void fn_8044D56C(void);
extern void fn_804A3C24(void);
extern void fn_804A55FC(void);
extern void fn_804A7DD4(void);
extern void fn_8057F284(void);
extern void fn_805807A8(void);
extern void fn_8058100C(void);
extern void fn_805811E0(void);
extern void fn_80581574(void);
extern void fn_80581820(void);
extern void fn_80581968(void);
extern void fn_80581FDC(void);
extern void fn_805846C4(void);
extern void fn_80584754(void);
extern void fn_8058480C(void);
extern void fn_80584DDC(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80761AB0[];
extern u8 lbl_80761D5C[];
extern u8 lbl_80796A00[];
extern u8 lbl_80796A44[];

/* Small data declarations */
extern u32 lbl_8087E690;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_8087F9E0;
extern u32 lbl_808813D0;
extern u32 lbl_80888130;
extern u32 lbl_80888134;
extern u32 lbl_80888138;
extern u32 lbl_8088813C;
extern u32 lbl_80888140;
extern u32 lbl_80888144;
extern u32 lbl_80888148;
extern u32 lbl_8088814C;
extern u32 lbl_80888150;
extern u32 lbl_80888154;

/* Function declarations */
void fn_805895B8(void);
void fn_805897D8(void);
void fn_8058995C(void);
void fn_80589AF8(void);
void fn_80589DE4(void);
void fn_8058A0F4(void);
void fn_8058A394(void);
void fn_8058A3A8(void);
void fn_8058A3B0(void);
void fn_8058AAC0(void);
void fn_8058ABF8(void);
void fn_8058AC94(void);

asm void fn_805895B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    bl fn_8058480C
    addis r6, r31, 0x2
    li r4, 0x0
    lwz r3, 0x5b04(r6)
    li r5, 0x4
    lwz r0, 0x5b0c(r6)
    stw r3, 0x5c20(r6)
    stw r0, 0x5c24(r6)
    lwz r30, lbl_8087EF70
    mr r3, r30
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_805895B8_000001C0
    addis r3, r31, 0x2
    lwz r4, lbl_8087F4F0
    lwz r0, 0x5c20(r3)
    lwz r3, 0x5c28(r3)
    slwi r0, r0, 4
    add r30, r3, r0
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805895B8_000000BC
    lwz r3, 0x4(r30)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_805895B8_00000098
    bl fn_80211648
    cmpwi r3, 0x0
    bne lbl_fn_805895B8_00000098
    li r30, 0x3
    b lbl_fn_805895B8_000000D8
lbl_fn_805895B8_00000098:
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r30)
    bl fn_804444E8
    cmpwi r3, 0x0
    bgt lbl_fn_805895B8_000000B4
    li r30, 0x10
    b lbl_fn_805895B8_000000D8
lbl_fn_805895B8_000000B4:
    li r30, 0x6
    b lbl_fn_805895B8_000000D8
lbl_fn_805895B8_000000BC:
    lwz r0, 0x6000(r4)
    lwz r4, 0x8(r30)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r30, r0, 31
lbl_fn_805895B8_000000D8:
    cmpwi r30, 0x0
    bne lbl_fn_805895B8_00000128
    addi r3, r1, 0x14
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0x3
    li r6, 0x0
    bl fn_80581968
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x3
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_805895B8_00000208
lbl_fn_805895B8_00000128:
    cmpwi r30, 0x6
    bne lbl_fn_805895B8_00000178
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x1
    li r5, 0x4
    li r6, 0x0
    bl fn_80581968
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x3
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_805895B8_00000208
lbl_fn_805895B8_00000178:
    addi r3, r1, 0xc
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    mr r5, r30
    li r4, 0x1
    li r6, 0x0
    bl fn_80581820
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_805895B8_00000208
lbl_fn_805895B8_000001C0:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_805895B8_00000208
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x4
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_805895B8_00000208:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805897D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r4, r3, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r3, 0x5b9c(r4)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_805897D8_0000038C
    lwz r30, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r30
    bl fn_800A555C
    cmpwi r3, 0x0
    bne lbl_fn_805897D8_00000290
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_805897D8_0000038C
lbl_fn_805897D8_00000290:
    addis r4, r31, 0x2
    li r5, 0x1
    lwz r0, 0x5c20(r4)
    lwz r3, 0x5c28(r4)
    slwi r0, r0, 4
    add r3, r3, r0
    stw r5, 0xc(r3)
    lwz r0, 0x5c20(r4)
    lwz r4, 0x5c28(r4)
    slwi r0, r0, 4
    lwz r3, lbl_8087F4F0
    add r4, r4, r0
    lwz r4, 0x4(r4)
    bl fn_80444564
    addis r7, r31, 0x2
    mr r30, r3
    lwz r0, 0x5c20(r7)
    li r8, 0x0
    lwz r6, 0x5c28(r7)
    li r9, 0x0
    slwi r5, r0, 4
    b lbl_fn_805897D8_0000030C
lbl_fn_805897D8_000002E8:
    lwz r4, 0x5c28(r7)
    lwzx r0, r6, r5
    lwzx r3, r4, r9
    cmpw r3, r0
    ble lbl_fn_805897D8_00000304
    subi r0, r3, 0x1
    stwx r0, r4, r9
lbl_fn_805897D8_00000304:
    addi r9, r9, 0x10
    addi r8, r8, 0x1
lbl_fn_805897D8_0000030C:
    lwz r0, 0x5c2c(r7)
    cmplw r8, r0
    blt lbl_fn_805897D8_000002E8
    lwz r3, lbl_8087F4F0
    lwzx r4, r6, r5
    bl fn_8044D56C
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    cmpwi r30, 0xa
    blt lbl_fn_805897D8_00000374
    mr r3, r31
    li r4, 0x1
    li r5, 0x11
    li r6, 0x0
    bl fn_80581820
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_805897D8_0000038C
lbl_fn_805897D8_00000374:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_805897D8_0000038C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8058995C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r4, 0xe8(r3)
    cmpwi r4, 0x4
    bne lbl_fn_8058995C_000003E0
    addis r3, r3, 0x2
    lwz r3, 0x5b68(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8058995C_00000528
lbl_fn_8058995C_000003E0:
    cmpwi r4, 0x5
    bne lbl_fn_8058995C_000003F0
    bl fn_805807A8
    b lbl_fn_8058995C_00000528
lbl_fn_8058995C_000003F0:
    cmpwi r4, 0x6
    bne lbl_fn_8058995C_00000470
    bl fn_805807A8
    lwz r0, 0x32fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8058995C_00000444
    lwz r3, 0xdc(r31)
    cmpw r3, r0
    bge lbl_fn_8058995C_00000444
    mulli r0, r3, 0x5c
    mr r3, r31
    add r30, r31, r0
    lwz r4, 0x3300(r30)
    bl fn_8058100C
    lwz r4, 0x3300(r30)
    mr r3, r31
    bl fn_805811E0
    lwz r4, 0x3300(r30)
    mr r3, r31
    lwz r5, 0x3348(r30)
    bl fn_80581574
lbl_fn_8058995C_00000444:
    lwz r7, 0xe0(r31)
    mr r3, r31
    lwz r6, 0xdc(r31)
    li r8, 0x1
    lwz r4, 0xa8(r31)
    subf r0, r7, r6
    slwi r0, r0, 2
    add r5, r31, r0
    lwz r5, 0xac(r5)
    bl fn_805846C4
    b lbl_fn_8058995C_00000528
lbl_fn_8058995C_00000470:
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_fn_8058995C_00000528
    bl fn_80589AF8
    addis r3, r31, 0x2
    lwz r5, 0x5c20(r3)
    lwz r0, 0x5c2c(r3)
    cmpw r5, r0
    bge lbl_fn_8058995C_000004AC
    lwz r4, 0x5c28(r3)
    slwi r0, r5, 4
    mr r3, r31
    li r5, 0x1
    add r4, r4, r0
    bl fn_80589DE4
lbl_fn_8058995C_000004AC:
    addis r3, r31, 0x2
    lis r4, lbl_80761AB0@ha
    lwz r5, 0x5c24(r3)
    addi r4, r4, lbl_80761AB0@l
    lwz r0, 0x5c20(r3)
    addi r3, r1, 0x20
    addi r4, r4, 0xd9
    subf r5, r5, r0
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addis r4, r31, 0x2
    addi r3, r1, 0x20
    lwz r30, 0x5b70(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    addis r8, r31, 0x2
    lwz r3, lbl_8087F580
    lwz r4, 0x5c24(r8)
    addi r6, r1, 0x8
    lwz r0, 0x5c20(r8)
    li r5, 0x0
    li r7, 0x1
    subf r0, r4, r0
    slwi r0, r0, 2
    add r4, r8, r0
    lwz r4, 0x5b74(r4)
    bl fn_804A55FC
lbl_fn_8058995C_00000528:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80589AF8(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_21
    addis r5, r3, 0x2
    mr r26, r3
    lwz r4, 0x5b70(r5)
    li r7, 0xa
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r6, 0x5c2c(r5)
    lwz r4, 0x5b70(r5)
    lwz r5, 0x5b0c(r5)
    bl fn_80584754
    lfs f0, lbl_80888134
    lis r3, lbl_80761AB0@ha
    stfs f0, 0x3c(r1)
    addi r30, r3, lbl_80761AB0@l
    addis r31, r26, 0x2
    addi r29, r1, 0x18
    stfs f0, 0x40(r1)
    li r27, 0x0
    li r25, 0x0
    la r24, lbl_8087E690
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
lbl_fn_80589AF8_000005B4:
    addi r3, r1, 0x50
    addi r4, r30, 0xe7
    addi r5, r27, 0x1
    crclr 6
    bl sprintf
    lwz r28, 0x5b70(r31)
    addi r3, r1, 0x50
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r28
    addi r3, r1, 0x28
    bl fn_801F4E8C
    lfs f6, 0x28(r1)
    add r3, r26, r25
    lfs f5, 0x2c(r1)
    addis r28, r3, 0x2
    lfs f4, 0x30(r1)
    addi r4, r30, 0xf4
    lfs f3, 0x34(r1)
    addi r5, r1, 0x3c
    lfs f0, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r3, 0x5b74(r28)
    bl fn_801F6E78
    lfs f1, lbl_80888138
    addi r4, r30, 0xfc
    lwz r3, 0x5b74(r28)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    lwz r3, 0x5b0c(r31)
    lwz r0, 0x5c2c(r31)
    add r4, r27, r3
    cmpw r4, r0
    bge lbl_fn_80589AF8_00000804
    lwz r3, 0x5c28(r31)
    slwi r0, r4, 4
    add r23, r3, r0
    lwz r3, 0x4(r23)
    bl fn_80211480
    lwz r0, 0xc(r23)
    mr r21, r3
    cmpwi r0, 0x0
    beq lbl_fn_80589AF8_00000714
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x104
    lwz r5, 0x8(r21)
    bl fn_801F837C
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x10d
    lfs f1, lbl_80888134
    bl fn_801F6C80
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x117
    lfs f1, lbl_80888130
    bl fn_801F6C80
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x121
    la r5, lbl_8087E690
    bl fn_801F837C
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x127
    addi r5, r24, 0x2
    bl fn_801F837C
    lwz r3, lbl_8087F4F0
    mr r4, r21
    bl fn_80444BE8
    mr r22, r3
    mr r3, r21
    bl fn_80211648
    cmpwi r3, 0x0
    beq lbl_fn_80589AF8_000006F8
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r23)
    bl fn_804444E8
    cmpwi r3, 0x0
    bgt lbl_fn_80589AF8_000007BC
lbl_fn_80589AF8_000006F8:
    lfs f1, lbl_8088813C
    addi r4, r30, 0xfc
    lwz r3, 0x5b74(r28)
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    b lbl_fn_80589AF8_000007BC
lbl_fn_80589AF8_00000714:
    lwz r3, 0x4(r23)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_80589AF8_0000075C
    lwz r3, 0xb8(r3)
    addi r4, r30, 0x104
    lwz r5, lbl_8087F1E4
    addi r0, r3, 0xeb
    lwz r3, 0x5b74(r28)
    slwi r0, r0, 3
    add r5, r5, r0
    lwz r5, 0x4(r5)
    cmpwi r5, 0x0
    beq lbl_fn_80589AF8_00000750
    b lbl_fn_80589AF8_00000754
lbl_fn_80589AF8_00000750:
    la r5, lbl_808813D0
lbl_fn_80589AF8_00000754:
    bl fn_801F837C
    b lbl_fn_80589AF8_0000076C
lbl_fn_80589AF8_0000075C:
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x104
    addi r5, r24, 0x6
    bl fn_801F837C
lbl_fn_80589AF8_0000076C:
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x10d
    lfs f1, lbl_80888130
    bl fn_801F6C80
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x117
    lfs f1, lbl_80888134
    bl fn_801F6C80
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x121
    lwz r5, 0x8(r23)
    li r6, 0x0
    bl fn_801F8598
    lwz r3, 0x5b74(r28)
    addi r4, r30, 0x127
    addi r5, r24, 0x2
    bl fn_801F837C
    lwz r3, lbl_8087F4F0
    bl fn_80444C48
    mr r22, r3
lbl_fn_80589AF8_000007BC:
    lwz r4, lbl_8087F4F0
    mr r5, r22
    addi r3, r1, 0x18
    bl fn_80444C50
    addi r5, r1, 0x8
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    addis r3, r25, 0x2
    psq_st f1, 0x0(r5), 0, 0
    addi r23, r3, 0x5b74
    addi r4, r30, 0x12b
    psq_st f2, 0x8(r5), 0, 0
    lwzx r3, r26, r23
    bl fn_801F7590
    lwzx r3, r26, r23
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_80589AF8_00000804:
    addi r27, r27, 0x1
    addi r25, r25, 0x4
    cmpwi r27, 0xa
    blt lbl_fn_80589AF8_000005B4
    addi r11, r1, 0xc0
    bl _restgpr_21
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80589DE4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_26
    addis r8, r3, 0x2
    lis r6, lbl_80761AB0@ha
    lwz r7, 0x5b6c(r8)
    mr r31, r5
    mr r29, r3
    addi r6, r6, lbl_80761AB0@l
    lwz r0, 0x38(r7)
    mr r30, r4
    addi r4, r6, 0x132
    li r6, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r7)
    lwz r5, lbl_8087F4F0
    lwz r3, 0x5b6c(r8)
    lwz r5, 0x6000(r5)
    bl fn_801F4CB4
    lwz r3, 0x4(r30)
    bl fn_80211480
    lwz r0, 0xc(r30)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80589DE4_000008B4
    cmpwi r3, 0x0
    beq lbl_fn_80589DE4_000008E4
    bl fn_80211648
    cmpwi r3, 0x0
    bne lbl_fn_80589DE4_000008E4
lbl_fn_80589DE4_000008B4:
    addis r3, r29, 0x2
    lis r5, lbl_80761AB0@ha
    lwz r4, 0x5b6c(r3)
    addi r5, r5, lbl_80761AB0@l
    addi r3, r5, 0x13a
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888134
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    b lbl_fn_80589DE4_00000944
lbl_fn_80589DE4_000008E4:
    addis r3, r29, 0x2
    lis r28, lbl_80761AB0@ha
    lwz r4, 0x5b6c(r3)
    addi r28, r28, lbl_80761AB0@l
    addi r3, r28, 0x13a
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888130
    mr r4, r3
    mr r3, r27
    bl fn_801FECE0
    lfs f1, lbl_80888130
    mr r3, r29
    mr r4, r26
    li r5, 0x1
    fmr f2, f1
    fmr f3, f1
    bl fn_80584DDC
    addis r4, r29, 0x2
    mr r5, r3
    lwz r3, 0x5b6c(r4)
    addi r4, r28, 0x121
    li r6, 0x0
    bl fn_801F4CB4
lbl_fn_80589DE4_00000944:
    addis r3, r29, 0x2
    lis r4, lbl_80761AB0@ha
    lwz r3, 0x5b6c(r3)
    addi r4, r4, lbl_80761AB0@l
    addi r4, r4, 0x143
    addi r3, r3, 0x58
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x14
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80888140
    bne lbl_fn_80589DE4_00000990
    addi r4, r1, 0x16
    b lbl_fn_80589DE4_00000994
lbl_fn_80589DE4_00000990:
    lwz r4, 0x1c(r1)
lbl_fn_80589DE4_00000994:
    lfs f2, lbl_80888134
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x14(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_80589DE4_000009BC
    lwz r3, 0x1c(r1)
    bl dtor_80084684
lbl_fn_80589DE4_000009BC:
    addis r3, r29, 0x2
    lis r28, lbl_80761AB0@ha
    lwz r4, 0x5b6c(r3)
    addi r28, r28, lbl_80761AB0@l
    addi r3, r28, 0x151
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888144
    mr r4, r3
    lfs f0, lbl_80888148
    mr r3, r27
    fsubs f1, f1, f31
    li r5, 0x0
    fsubs f1, f1, f0
    bl fn_801FED24
    addis r3, r29, 0x2
    addi r4, r28, 0x159
    lwz r3, 0x5b6c(r3)
    addi r3, r3, 0x58
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80888140
    bne lbl_fn_80589DE4_00000A3C
    addi r4, r1, 0xa
    b lbl_fn_80589DE4_00000A40
lbl_fn_80589DE4_00000A3C:
    lwz r4, 0x10(r1)
lbl_fn_80589DE4_00000A40:
    lfs f2, lbl_80888134
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_80589DE4_00000A68
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_80589DE4_00000A68:
    addis r3, r29, 0x2
    lis r5, lbl_80761AB0@ha
    lwz r4, 0x5b6c(r3)
    addi r5, r5, lbl_80761AB0@l
    addi r3, r5, 0x167
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888144
    mr r4, r3
    lfs f0, lbl_80888148
    mr r3, r27
    fsubs f1, f1, f31
    li r5, 0x0
    fsubs f1, f1, f0
    bl fn_801FED24
    cmpwi r31, 0x0
    beq lbl_fn_80589DE4_00000B1C
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80589DE4_00000AE0
    lwz r3, 0x4(r30)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80589DE4_00000B00
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0xc(r4)
    bl fn_804A3C24
    b lbl_fn_80589DE4_00000B00
lbl_fn_80589DE4_00000AE0:
    lwz r27, lbl_8087F580
    li r3, 0x1
    li r4, 0x15b
    bl fn_80116FC0
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_80589DE4_00000B00:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x488(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80589DE4_00000B1C
    lwz r3, lbl_8087F580
    lwz r4, 0x4(r30)
    bl fn_804A7DD4
lbl_fn_80589DE4_00000B1C:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8058A0F4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_27
    addis r5, r3, 0x2
    mr r30, r3
    lwz r3, 0x5b9c(r5)
    mr r27, r4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x4(r4)
    bl fn_80211480
    mr r31, r3
    lwz r3, 0x4(r27)
    bl fn_80206C50
    cmpwi r3, 0x0
    li r0, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    beq lbl_fn_8058A0F4_00000C2C
    lwz r3, 0xb8(r3)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r3, r0, 3
    addi r5, r4, 0x4
    lwzx r0, r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_8058A0F4_00000BCC
    add r3, r4, r3
    lwz r28, 0x4(r3)
    b lbl_fn_8058A0F4_00000BD0
lbl_fn_8058A0F4_00000BCC:
    la r28, lbl_808813D0
lbl_fn_8058A0F4_00000BD0:
    lwz r0, 0x40(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8058A0F4_00000BF8
    lbz r0, 0x40(r1)
    clrlwi r29, r0, 25
    b lbl_fn_8058A0F4_00000BFC
lbl_fn_8058A0F4_00000BF8:
    lwz r29, 0x44(r1)
lbl_fn_8058A0F4_00000BFC:
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r29
    mr r6, r28
    addi r3, r1, 0x40
    addi r8, r1, 0x8
    add r7, r28, r0
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_8058A0F4_00000C2C:
    lwz r0, 0x40(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8058A0F4_00000C50
    addi r5, r1, 0x42
    b lbl_fn_8058A0F4_00000C54
lbl_fn_8058A0F4_00000C50:
    lwz r5, 0x48(r1)
lbl_fn_8058A0F4_00000C54:
    li r3, 0x0
    li r4, 0x2760
    bl fn_801170C8
    addis r4, r30, 0x2
    lis r29, lbl_80761AB0@ha
    lwz r4, 0x5b9c(r4)
    addi r29, r29, lbl_80761AB0@l
    mr r28, r3
    addi r3, r29, 0x16f
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    addis r3, r30, 0x2
    lwz r28, 0x8(r31)
    lwz r4, 0x5b9c(r3)
    addi r3, r29, 0x176
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
    lwz r3, lbl_8087F4F0
    mr r4, r31
    bl fn_80444BE8
    lwz r4, lbl_8087F4F0
    mr r5, r3
    addi r3, r1, 0x30
    bl fn_80444C50
    addi r4, r1, 0x30
    addi r5, r1, 0x20
    psq_l f1, 0x0(r4), 0, 0
    addis r3, r30, 0x2
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r29, 0x17c
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x5b9c(r3)
    bl fn_801F48C8
    addis r3, r30, 0x2
    addi r4, r29, 0x185
    lwz r3, 0x5b9c(r3)
    addi r3, r3, 0x58
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x10(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80888140
    bne lbl_fn_8058A0F4_00000D40
    addi r4, r1, 0x12
    b lbl_fn_8058A0F4_00000D44
lbl_fn_8058A0F4_00000D40:
    lwz r4, 0x18(r1)
lbl_fn_8058A0F4_00000D44:
    lfs f2, lbl_80888134
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x10(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_8058A0F4_00000D6C
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8058A0F4_00000D6C:
    addis r3, r30, 0x2
    lis r5, lbl_80761AB0@ha
    lwz r4, 0x5b9c(r3)
    addi r5, r5, lbl_80761AB0@l
    addi r3, r5, 0x151
    addi r27, r4, 0x58
    bl fn_800DC6B4
    lfs f3, lbl_8088814C
    mr r4, r3
    lfs f0, lbl_80888148
    mr r3, r27
    fsubs f3, f3, f31
    li r5, 0x0
    fsubs f1, f3, f0
    bl fn_801FED24
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8058A0F4_00000DBC
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_8058A0F4_00000DBC:
    addi r11, r1, 0x70
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8058A394(void)
{
    nofralloc
    lwz r0, 0xe4(r3)
    cmpwi r0, 0x5
    bnelr
    b fn_80581FDC
    blr
}

asm void fn_8058A3A8(void)
{
    nofralloc
    li r3, 0x3
    blr
}

asm void fn_8058A3B0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r25, 0x24(r1)
    mr r27, r3
    mr r29, r4
    mr r28, r5
    lwz r0, 0x4(r3)
    lwz r30, 0x8(r3)
    cmplw r0, r30
    blt lbl_fn_8058A3B0_00000E84
    lis r3, 0x1000
    subi r0, r3, 0x1
    subf r0, r30, r0
    cmplwi r0, 0x1
    bge lbl_fn_8058A3B0_00000E5C
    lis r4, lbl_80761AB0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80761AB0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x196
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8058A3B0_00000E5C:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r30, r0
    bge lbl_fn_8058A3B0_00000E70
    b lbl_fn_8058A3B0_00000FBC
lbl_fn_8058A3B0_00000E70:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r30, r0
    bge lbl_fn_8058A3B0_00000FBC
    b lbl_fn_8058A3B0_00000FBC
lbl_fn_8058A3B0_00000E84:
    cmplw r4, r5
    lwz r6, 0x0(r3)
    slwi r0, r0, 4
    add r7, r6, r0
    bgt lbl_fn_8058A3B0_00000EA4
    cmplw r5, r7
    bge lbl_fn_8058A3B0_00000EA4
    addi r28, r5, 0x10
lbl_fn_8058A3B0_00000EA4:
    lwz r6, 0x4(r3)
    addi r5, r7, 0xf
    cmplw r7, r4
    addi r0, r6, 0x1
    subf r5, r4, r5
    stw r0, 0x4(r3)
    addi r3, r7, 0x10
    srwi r5, r5, 4
    ble lbl_fn_8058A3B0_00000F98
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_8058A3B0_00000F68
lbl_fn_8058A3B0_00000ED4:
    lwz r0, -0x10(r7)
    stw r0, -0x10(r3)
    lwz r0, -0xc(r7)
    stw r0, -0xc(r3)
    lwz r0, -0x8(r7)
    stw r0, -0x8(r3)
    lwz r0, -0x4(r7)
    stw r0, -0x4(r3)
    lwz r0, -0x20(r7)
    stw r0, -0x20(r3)
    lwz r0, -0x1c(r7)
    stw r0, -0x1c(r3)
    lwz r0, -0x18(r7)
    stw r0, -0x18(r3)
    lwz r0, -0x14(r7)
    stw r0, -0x14(r3)
    lwz r0, -0x30(r7)
    stw r0, -0x30(r3)
    lwz r0, -0x2c(r7)
    stw r0, -0x2c(r3)
    lwz r0, -0x28(r7)
    stw r0, -0x28(r3)
    lwz r0, -0x24(r7)
    stw r0, -0x24(r3)
    lwz r0, -0x40(r7)
    stw r0, -0x40(r3)
    lwz r0, -0x3c(r7)
    stw r0, -0x3c(r3)
    lwz r0, -0x38(r7)
    stw r0, -0x38(r3)
    lwz r0, -0x34(r7)
    subi r7, r7, 0x40
    stw r0, -0x34(r3)
    subi r3, r3, 0x40
    bdnz lbl_fn_8058A3B0_00000ED4
    andi. r5, r5, 0x3
    beq lbl_fn_8058A3B0_00000F98
lbl_fn_8058A3B0_00000F68:
    mtctr r5
lbl_fn_8058A3B0_00000F6C:
    lwz r0, -0x10(r7)
    stw r0, -0x10(r3)
    lwz r0, -0xc(r7)
    stw r0, -0xc(r3)
    lwz r0, -0x8(r7)
    stw r0, -0x8(r3)
    lwz r0, -0x4(r7)
    subi r7, r7, 0x10
    stw r0, -0x4(r3)
    subi r3, r3, 0x10
    bdnz lbl_fn_8058A3B0_00000F6C
lbl_fn_8058A3B0_00000F98:
    lwz r6, 0x0(r28)
    lwz r5, 0x4(r28)
    lwz r3, 0x8(r28)
    lwz r0, 0xc(r28)
    stw r6, 0x0(r4)
    stw r5, 0x4(r4)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    b lbl_fn_8058A3B0_000014F0
lbl_fn_8058A3B0_00000FBC:
    lwz r30, 0x0(r27)
    li r0, 0x1
    lis r3, 0x1000
    stw r0, 0x10(r1)
    subf r0, r30, r29
    srawi r4, r0, 4
    lwz r31, 0x8(r27)
    subi r0, r3, 0x1
    addze r29, r4
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_8058A3B0_00001010
    lis r4, lbl_80761AB0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80761AB0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x196
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8058A3B0_00001010:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8058A3B0_0000105C
    addi r5, r31, 0x1
    lis r4, 0xcccd
    slwi r0, r5, 2
    addi r3, r1, 0x8
    subf r0, r5, r0
    subi r4, r4, 0x3333
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    stw r0, 0x8(r1)
    cmplwi r0, 0x1
    bge lbl_fn_8058A3B0_00001050
    addi r3, r1, 0x10
lbl_fn_8058A3B0_00001050:
    lwz r0, 0x0(r3)
    add r26, r31, r0
    b lbl_fn_8058A3B0_0000109C
lbl_fn_8058A3B0_0000105C:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8058A3B0_00001094
    addi r0, r31, 0x1
    addi r3, r1, 0xc
    srwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplwi r0, 0x1
    bge lbl_fn_8058A3B0_00001088
    addi r3, r1, 0x10
lbl_fn_8058A3B0_00001088:
    lwz r0, 0x0(r3)
    add r26, r31, r0
    b lbl_fn_8058A3B0_0000109C
lbl_fn_8058A3B0_00001094:
    lis r3, 0x1000
    subi r26, r3, 0x1
lbl_fn_8058A3B0_0000109C:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_8058A3B0_000010D0
    lis r4, lbl_80761AB0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80761AB0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x196
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8058A3B0_000010D0:
    slwi r3, r26, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_8058A3B0_00001104
    lis r3, __files@ha
    lis r4, lbl_80796A00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80796A00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8058A3B0_00001104:
    stw r25, 0x0(r27)
    slwi r31, r29, 4
    lwz r3, 0x0(r28)
    add r4, r25, r31
    stw r26, 0x8(r27)
    cmpwi r30, 0x0
    lwz r0, 0x4(r28)
    stwx r3, r25, r31
    lwz r3, 0x8(r28)
    stw r0, 0x4(r4)
    lwz r0, 0xc(r28)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    beq lbl_fn_8058A3B0_000014DC
    add r5, r30, r31
    lwz r4, 0x0(r27)
    cmplw cr1, r30, r5
    mr r3, r30
    bge cr1, lbl_fn_8058A3B0_00001304
    addi r9, r31, 0xf
    subi r6, r5, 0x80
    srawi r0, r9, 4
    addze r0, r0
    cmpwi r0, 0x8
    ble lbl_fn_8058A3B0_000012C0
    li r7, 0x0
    bgt cr1, lbl_fn_8058A3B0_00001194
    clrrwi. r0, r31, 31
    li r8, 0x1
    bne lbl_fn_8058A3B0_00001188
    clrrwi. r0, r9, 31
    beq lbl_fn_8058A3B0_00001188
    li r8, 0x0
lbl_fn_8058A3B0_00001188:
    cmpwi r8, 0x0
    beq lbl_fn_8058A3B0_00001194
    li r7, 0x1
lbl_fn_8058A3B0_00001194:
    cmpwi r7, 0x0
    beq lbl_fn_8058A3B0_000012C0
    addi r0, r6, 0x7f
    subf r0, r30, r0
    srwi r0, r0, 7
    mtctr r0
    cmplw r30, r6
    bge lbl_fn_8058A3B0_000012C0
lbl_fn_8058A3B0_000011B4:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    lwz r0, 0x10(r3)
    stw r0, 0x10(r4)
    lwz r0, 0x14(r3)
    stw r0, 0x14(r4)
    lwz r0, 0x18(r3)
    stw r0, 0x18(r4)
    lwz r0, 0x1c(r3)
    stw r0, 0x1c(r4)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r4)
    lwz r0, 0x24(r3)
    stw r0, 0x24(r4)
    lwz r0, 0x28(r3)
    stw r0, 0x28(r4)
    lwz r0, 0x2c(r3)
    stw r0, 0x2c(r4)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r4)
    lwz r0, 0x34(r3)
    stw r0, 0x34(r4)
    lwz r0, 0x38(r3)
    stw r0, 0x38(r4)
    lwz r0, 0x3c(r3)
    stw r0, 0x3c(r4)
    lwz r0, 0x40(r3)
    stw r0, 0x40(r4)
    lwz r0, 0x44(r3)
    stw r0, 0x44(r4)
    lwz r0, 0x48(r3)
    stw r0, 0x48(r4)
    lwz r0, 0x4c(r3)
    stw r0, 0x4c(r4)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r4)
    lwz r0, 0x54(r3)
    stw r0, 0x54(r4)
    lwz r0, 0x58(r3)
    stw r0, 0x58(r4)
    lwz r0, 0x5c(r3)
    stw r0, 0x5c(r4)
    lwz r0, 0x60(r3)
    stw r0, 0x60(r4)
    lwz r0, 0x64(r3)
    stw r0, 0x64(r4)
    lwz r0, 0x68(r3)
    stw r0, 0x68(r4)
    lwz r0, 0x6c(r3)
    stw r0, 0x6c(r4)
    lwz r0, 0x70(r3)
    stw r0, 0x70(r4)
    lwz r0, 0x74(r3)
    stw r0, 0x74(r4)
    lwz r0, 0x78(r3)
    stw r0, 0x78(r4)
    lwz r0, 0x7c(r3)
    addi r3, r3, 0x80
    stw r0, 0x7c(r4)
    addi r4, r4, 0x80
    bdnz lbl_fn_8058A3B0_000011B4
lbl_fn_8058A3B0_000012C0:
    addi r0, r5, 0xf
    subf r0, r3, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r3, r5
    bge lbl_fn_8058A3B0_00001304
lbl_fn_8058A3B0_000012D8:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    addi r3, r3, 0x10
    stw r0, 0xc(r4)
    addi r4, r4, 0x10
    bdnz lbl_fn_8058A3B0_000012D8
lbl_fn_8058A3B0_00001304:
    lwz r0, 0x4(r27)
    addi r3, r4, 0x10
    slwi r0, r0, 4
    add r4, r30, r0
    cmplw cr1, r5, r4
    bge cr1, lbl_fn_8058A3B0_000014D4
    subf r8, r5, r4
    subi r6, r4, 0x80
    addi r9, r8, 0xf
    srawi r0, r9, 4
    addze r0, r0
    cmpwi r0, 0x8
    ble lbl_fn_8058A3B0_00001490
    li r7, 0x0
    bgt cr1, lbl_fn_8058A3B0_00001364
    clrrwi. r0, r8, 31
    li r8, 0x1
    bne lbl_fn_8058A3B0_00001358
    clrrwi. r0, r9, 31
    beq lbl_fn_8058A3B0_00001358
    li r8, 0x0
lbl_fn_8058A3B0_00001358:
    cmpwi r8, 0x0
    beq lbl_fn_8058A3B0_00001364
    li r7, 0x1
lbl_fn_8058A3B0_00001364:
    cmpwi r7, 0x0
    beq lbl_fn_8058A3B0_00001490
    addi r0, r6, 0x7f
    subf r0, r5, r0
    srwi r0, r0, 7
    mtctr r0
    cmplw r5, r6
    bge lbl_fn_8058A3B0_00001490
lbl_fn_8058A3B0_00001384:
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r3)
    lwz r0, 0x18(r5)
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r5)
    stw r0, 0x1c(r3)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r3)
    lwz r0, 0x24(r5)
    stw r0, 0x24(r3)
    lwz r0, 0x28(r5)
    stw r0, 0x28(r3)
    lwz r0, 0x2c(r5)
    stw r0, 0x2c(r3)
    lwz r0, 0x30(r5)
    stw r0, 0x30(r3)
    lwz r0, 0x34(r5)
    stw r0, 0x34(r3)
    lwz r0, 0x38(r5)
    stw r0, 0x38(r3)
    lwz r0, 0x3c(r5)
    stw r0, 0x3c(r3)
    lwz r0, 0x40(r5)
    stw r0, 0x40(r3)
    lwz r0, 0x44(r5)
    stw r0, 0x44(r3)
    lwz r0, 0x48(r5)
    stw r0, 0x48(r3)
    lwz r0, 0x4c(r5)
    stw r0, 0x4c(r3)
    lwz r0, 0x50(r5)
    stw r0, 0x50(r3)
    lwz r0, 0x54(r5)
    stw r0, 0x54(r3)
    lwz r0, 0x58(r5)
    stw r0, 0x58(r3)
    lwz r0, 0x5c(r5)
    stw r0, 0x5c(r3)
    lwz r0, 0x60(r5)
    stw r0, 0x60(r3)
    lwz r0, 0x64(r5)
    stw r0, 0x64(r3)
    lwz r0, 0x68(r5)
    stw r0, 0x68(r3)
    lwz r0, 0x6c(r5)
    stw r0, 0x6c(r3)
    lwz r0, 0x70(r5)
    stw r0, 0x70(r3)
    lwz r0, 0x74(r5)
    stw r0, 0x74(r3)
    lwz r0, 0x78(r5)
    stw r0, 0x78(r3)
    lwz r0, 0x7c(r5)
    addi r5, r5, 0x80
    stw r0, 0x7c(r3)
    addi r3, r3, 0x80
    bdnz lbl_fn_8058A3B0_00001384
lbl_fn_8058A3B0_00001490:
    addi r0, r4, 0xf
    subf r0, r5, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_8058A3B0_000014D4
lbl_fn_8058A3B0_000014A8:
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r5)
    addi r5, r5, 0x10
    stw r0, 0xc(r3)
    addi r3, r3, 0x10
    bdnz lbl_fn_8058A3B0_000014A8
lbl_fn_8058A3B0_000014D4:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8058A3B0_000014DC:
    lwz r3, 0x4(r27)
    lwz r0, 0x0(r27)
    addi r3, r3, 0x1
    stw r3, 0x4(r27)
    add r29, r0, r31
lbl_fn_8058A3B0_000014F0:
    mr r3, r29
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8058AAC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    li r26, 0x0
    li r30, -0x1
    lis r28, 0xf
lbl_fn_8058AAC0_00001524:
    lwz r3, lbl_8087F4F0
    mr r4, r26
    bl fn_80444804
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8058AAC0_00001620
    lwz r4, 0x0(r3)
    addi r0, r28, 0x4240
    cmpw r4, r0
    blt lbl_fn_8058AAC0_00001620
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8058AAC0_00001620
    li r25, 0x0
    li r24, 0x0
    li r31, 0x0
lbl_fn_8058AAC0_00001564:
    lwz r4, lbl_8087F4F0
    lwz r3, 0x0(r27)
    addis r0, r4, 0x1
    add r29, r0, r31
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_8058AAC0_000015B4
    lwz r3, 0x0(r27)
    bl fn_8020EFEC
    cmpwi r3, 0x0
    beq lbl_fn_8058AAC0_000015F8
    lwz r3, 0x7c(r3)
    lwz r0, -0x7d70(r29)
    cmpw r0, r3
    beq lbl_fn_8058AAC0_000015AC
    lwz r0, -0x7d68(r29)
    cmpw r0, r3
    bne lbl_fn_8058AAC0_000015F8
lbl_fn_8058AAC0_000015AC:
    li r25, 0x1
    b lbl_fn_8058AAC0_00001608
lbl_fn_8058AAC0_000015B4:
    lwz r3, 0x0(r27)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8058AAC0_000015F8
    lwz r3, 0x0(r27)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_8058AAC0_000015F8
    lwz r3, 0x80(r3)
    lwz r0, -0x7d50(r29)
    cmpw r0, r3
    beq lbl_fn_8058AAC0_000015F0
    lwz r0, -0x7d48(r29)
    cmpw r0, r3
    bne lbl_fn_8058AAC0_000015F8
lbl_fn_8058AAC0_000015F0:
    li r25, 0x1
    b lbl_fn_8058AAC0_00001608
lbl_fn_8058AAC0_000015F8:
    addi r24, r24, 0x1
    addi r31, r31, 0x40
    cmplwi r24, 0x7
    blt lbl_fn_8058AAC0_00001564
lbl_fn_8058AAC0_00001608:
    cmpwi r25, 0x0
    bne lbl_fn_8058AAC0_00001620
    lwz r3, 0x0(r27)
    bl fn_80211480
    bl fn_80212714
    stw r30, 0x0(r27)
lbl_fn_8058AAC0_00001620:
    addi r26, r26, 0x1
    cmplwi r26, 0x600
    blt lbl_fn_8058AAC0_00001524
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8058ABF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, lbl_8087F9E0
    cmpwi r0, 0x0
    bne lbl_fn_8058ABF8_000016B8
    lis r5, lbl_80761D5C@ha
    lis r3, 0x2
    addi r5, r5, lbl_80761D5C@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x6118
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8058ABF8_000016B4
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_8058AC94
lbl_fn_8058ABF8_000016B4:
    stw r3, lbl_8087F9E0
lbl_fn_8058ABF8_000016B8:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F9E0
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8058AC94(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r0, r6
    mr r27, r7
    mr r6, r5
    mr r31, r3
    mr r7, r0
    li r5, 0x2
    bl fn_8057F284
    addis r3, r31, 0x2
    lis r4, lbl_80796A44@ha
    stw r27, 0x5b68(r3)
    addi r4, r4, lbl_80796A44@l
    addi r3, r3, 0x5bf0
    stw r4, 0x0(r31)
    bl fn_8021154C
    addis r29, r31, 0x2
    lfs f1, lbl_80888150
    addi r6, r29, 0x5e00
    li r5, 0x0
    lfs f0, lbl_80888154
    addi r0, r29, 0x5e14
    li r3, 0x3
    stfs f1, 0x5d28(r29)
    cmplw r6, r0
    stfs f1, 0x5d2c(r29)
    stfs f1, 0x5d30(r29)
    stfs f1, 0x5d34(r29)
    stfs f0, 0x5d38(r29)
    stfs f0, 0x5d3c(r29)
    stfs f1, 0x5d40(r29)
    stfs f1, 0x5d44(r29)
    stw r5, 0x5d48(r29)
    stw r5, 0x5d4c(r29)
    stfs f1, 0x5d50(r29)
    stfs f1, 0x5d54(r29)
    stw r5, 0x5d58(r29)
    stw r5, 0x5d5c(r29)
    stfs f1, 0x5d60(r29)
    stfs f1, 0x5d7c(r29)
    stfs f1, 0x5d64(r29)
    stfs f1, 0x5d80(r29)
    stfs f1, 0x5d68(r29)
    stfs f1, 0x5d84(r29)
    stfs f1, 0x5d6c(r29)
    stfs f1, 0x5d88(r29)
    stfs f1, 0x5d70(r29)
    stfs f1, 0x5d8c(r29)
    stfs f1, 0x5d74(r29)
    stfs f1, 0x5d90(r29)
    stfs f1, 0x5d78(r29)
    stfs f1, 0x5d94(r29)
    stw r3, 0x5da0(r29)
    stw r5, 0x5da8(r29)
    stb r5, 0x5db4(r29)
    stw r5, 0x5de4(r29)
    stw r5, 0x5de8(r29)
    stw r5, 0x5dec(r29)
    stw r5, 0x5df0(r29)
    stw r5, 0x5df4(r29)
    stw r5, 0x5df8(r29)
    stw r5, 0x5dfc(r29)
    bge lbl_fn_8058AC94_00001820
    addi r4, r29, 0x5e14
    li r0, 0x14
    addi r3, r4, 0x13
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_8058AC94_00001820
lbl_fn_8058AC94_00001804:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    stw r5, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_8058AC94_00001804
lbl_fn_8058AC94_00001820:
    li r30, 0x0
    li r0, 0x1
    stw r30, 0x5e14(r29)
    addi r3, r29, 0x5dd4
    li r4, 0x0
    li r5, 0xc
    stw r30, 0x5e18(r29)
    stb r30, 0x5e1c(r29)
    stb r30, 0x5e2c(r29)
    stw r30, 0x5e3c(r29)
    stw r30, 0x5e40(r29)
    stw r30, 0x5e44(r29)
    stw r30, 0x5e48(r29)
    stw r30, 0x5e4c(r29)
    stw r30, 0x5e50(r29)
    stw r30, 0x5e54(r29)
    stw r0, 0x5d48(r29)
    bl memset
    addis r28, r31, 0x2
    lfs f1, lbl_80888150
    addi r4, r28, 0x5f50
    lfs f0, lbl_80888154
    addi r3, r28, 0x5f64
    li r0, 0x5
    cmplw r4, r3
    stw r30, 0x5dac(r29)
    stw r30, 0x5db0(r29)
    stfs f1, 0x5e58(r28)
    stfs f1, 0x5e5c(r28)
    stfs f1, 0x5e60(r28)
    stfs f1, 0x5e64(r28)
    stfs f0, 0x5e68(r28)
    stfs f0, 0x5e6c(r28)
    stfs f1, 0x5e70(r28)
    stfs f1, 0x5e74(r28)
    stw r30, 0x5e78(r28)
    stw r30, 0x5e7c(r28)
    stfs f1, 0x5e80(r28)
    stfs f1, 0x5e84(r28)
    stw r30, 0x5e88(r28)
    stw r30, 0x5e8c(r28)
    stfs f1, 0x5e90(r28)
    stfs f1, 0x5eac(r28)
    stfs f1, 0x5e94(r28)
    stfs f1, 0x5eb0(r28)
    stfs f1, 0x5e98(r28)
    stfs f1, 0x5eb4(r28)
    stfs f1, 0x5e9c(r28)
    stfs f1, 0x5eb8(r28)
    stfs f1, 0x5ea0(r28)
    stfs f1, 0x5ebc(r28)
    stfs f1, 0x5ea4(r28)
    stfs f1, 0x5ec0(r28)
    stfs f1, 0x5ea8(r28)
    stfs f1, 0x5ec4(r28)
    stw r0, 0x5ed0(r28)
    stw r30, 0x5ed4(r28)
    stb r30, 0x5ee0(r28)
    stw r30, 0x5f14(r28)
    stb r30, 0x5f18(r28)
    stb r30, 0x5f28(r28)
    stw r30, 0x5f38(r28)
    stw r30, 0x5f3c(r28)
    stw r30, 0x5f40(r28)
    stw r30, 0x5f44(r28)
    stw r30, 0x5f48(r28)
    stw r30, 0x5f4c(r28)
    bge lbl_fn_8058AC94_00001964
    addi r3, r3, 0x13
    li r0, 0x14
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_8058AC94_00001964
lbl_fn_8058AC94_00001948:
    stw r30, 0x0(r4)
    stw r30, 0x4(r4)
    stw r30, 0x8(r4)
    stw r30, 0xc(r4)
    stw r30, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_fn_8058AC94_00001948
lbl_fn_8058AC94_00001964:
    addi r3, r28, 0x5f04
    li r4, 0x0
    li r5, 0x10
    bl memset
    addis r29, r31, 0x2
    lfs f1, lbl_80888150
    addi r6, r29, 0x605c
    li r5, 0x0
    lfs f0, lbl_80888154
    addi r0, r29, 0x6070
    li r3, 0x5
    stw r5, 0x5ed8(r28)
    cmplw r6, r0
    stw r5, 0x5edc(r28)
    stfs f1, 0x5f64(r29)
    stfs f1, 0x5f68(r29)
    stfs f1, 0x5f6c(r29)
    stfs f1, 0x5f70(r29)
    stfs f0, 0x5f74(r29)
    stfs f0, 0x5f78(r29)
    stfs f1, 0x5f7c(r29)
    stfs f1, 0x5f80(r29)
    stw r5, 0x5f84(r29)
    stw r5, 0x5f88(r29)
    stfs f1, 0x5f8c(r29)
    stfs f1, 0x5f90(r29)
    stw r5, 0x5f94(r29)
    stw r5, 0x5f98(r29)
    stfs f1, 0x5f9c(r29)
    stfs f1, 0x5fb8(r29)
    stfs f1, 0x5fa0(r29)
    stfs f1, 0x5fbc(r29)
    stfs f1, 0x5fa4(r29)
    stfs f1, 0x5fc0(r29)
    stfs f1, 0x5fa8(r29)
    stfs f1, 0x5fc4(r29)
    stfs f1, 0x5fac(r29)
    stfs f1, 0x5fc8(r29)
    stfs f1, 0x5fb0(r29)
    stfs f1, 0x5fcc(r29)
    stfs f1, 0x5fb4(r29)
    stfs f1, 0x5fd0(r29)
    stw r3, 0x5fdc(r29)
    stw r5, 0x5fe0(r29)
    stb r5, 0x5fec(r29)
    stw r5, 0x6020(r29)
    stb r5, 0x6024(r29)
    stb r5, 0x6034(r29)
    stw r5, 0x6044(r29)
    stw r5, 0x6048(r29)
    stw r5, 0x604c(r29)
    stw r5, 0x6050(r29)
    stw r5, 0x6054(r29)
    stw r5, 0x6058(r29)
    bge lbl_fn_8058AC94_00001A7C
    addi r4, r29, 0x6070
    li r0, 0x14
    addi r3, r4, 0x13
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r6, r4
    bge lbl_fn_8058AC94_00001A7C
lbl_fn_8058AC94_00001A60:
    stw r5, 0x0(r6)
    stw r5, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    stw r5, 0x10(r6)
    addi r6, r6, 0x14
    bdnz lbl_fn_8058AC94_00001A60
lbl_fn_8058AC94_00001A7C:
    addi r3, r29, 0x6010
    li r4, 0x0
    li r5, 0x10
    bl memset
    addis r4, r31, 0x2
    li r30, 0x0
    lwz r0, 0x5b68(r4)
    li r3, -0x1
    stw r30, 0x5fe4(r29)
    cmpwi r0, 0x1
    stw r30, 0x5fe8(r29)
    stw r30, 0x6070(r4)
    stw r30, 0x6074(r4)
    stw r30, 0x6078(r4)
    stw r30, 0x607c(r4)
    stw r3, 0x6080(r4)
    stw r30, 0x6084(r4)
    stw r30, 0x6088(r4)
    stw r30, 0x60a4(r4)
    stw r30, 0x60a8(r4)
    stw r30, 0x60ac(r4)
    stw r30, 0x60b0(r4)
    stw r3, 0x6108(r4)
    stw r3, 0x610c(r4)
    stw r3, 0x6110(r4)
    bne lbl_fn_8058AC94_00001B00
    lwz r3, lbl_8087F430
    li r4, 0xd7
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_8058AC94_00001B00
    addis r3, r31, 0x2
    stw r30, 0x5b68(r3)
lbl_fn_8058AC94_00001B00:
    addis r3, r31, 0x2
    li r4, 0x0
    li r5, 0xc
    addi r3, r3, 0x608c
    bl memset
    addis r3, r31, 0x2
    li r4, 0x0
    li r5, 0xc
    addi r3, r3, 0x6098
    bl memset
    addis r3, r31, 0x2
    lwz r3, 0x5b68(r3)
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8058AC94_00001BA8
    cmpwi r3, 0x0
    beq lbl_fn_8058AC94_00001B50
    cmpwi r3, 0x1
    beq lbl_fn_8058AC94_00001B7C
    b lbl_fn_8058AC94_00001BD0
lbl_fn_8058AC94_00001B50:
    lis r4, lbl_80761D5C@ha
    mr r3, r31
    addi r4, r4, lbl_80761D5C@l
    li r5, 0x0
    addi r4, r4, 0x1
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b6c(r5)
    bl fn_800D246C
    b lbl_fn_8058AC94_00001BD0
lbl_fn_8058AC94_00001B7C:
    lis r4, lbl_80761D5C@ha
    mr r3, r31
    addi r4, r4, lbl_80761D5C@l
    li r5, 0x0
    addi r4, r4, 0x29
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b6c(r5)
    bl fn_800D246C
    b lbl_fn_8058AC94_00001BD0
lbl_fn_8058AC94_00001BA8:
    lis r4, lbl_80761D5C@ha
    mr r3, r31
    addi r4, r4, lbl_80761D5C@l
    li r5, 0x0
    addi r4, r4, 0x4f
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b6c(r5)
    bl fn_800D246C
lbl_fn_8058AC94_00001BD0:
    lis r30, lbl_80761D5C@ha
    mr r3, r31
    addi r30, r30, lbl_80761D5C@l
    li r5, 0x0
    addi r4, r30, 0x7d
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b70(r5)
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xa4
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b74(r5)
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0xcb
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5b78(r5)
    bl fn_800D246C
    addi r28, r30, 0xf5
    li r30, 0x0
    li r29, 0x0
lbl_fn_8058AC94_00001C44:
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    addis r5, r29, 0x2
    li r4, 0x1
    addi r0, r5, 0x5b7c
    stwx r3, r31, r0
    bl fn_800D246C
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_8058AC94_00001C44
    lis r30, lbl_80761D5C@ha
    mr r3, r31
    addi r30, r30, lbl_80761D5C@l
    addi r4, r30, 0xf5
    bl fn_801F64D0
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5ba4(r5)
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x117
    bl fn_801F64D0
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5bb8(r5)
    bl fn_800D246C
    addi r28, r30, 0x140
    addi r29, r30, 0x16a
    li r27, 0x0
    li r30, 0x0
lbl_fn_8058AC94_00001CC4:
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    addis r5, r30, 0x2
    li r4, 0x1
    addi r0, r5, 0x5ba8
    stwx r3, r31, r0
    bl fn_800D246C
    mr r3, r31
    mr r4, r29
    bl fn_801F64D0
    addis r5, r30, 0x2
    li r4, 0x1
    addi r0, r5, 0x5bb0
    stwx r3, r31, r0
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x2
    blt lbl_fn_8058AC94_00001CC4
    lis r3, lbl_80761D5C@ha
    li r27, 0x0
    addi r3, r3, lbl_80761D5C@l
    li r29, 0x0
    addi r28, r3, 0xf5
lbl_fn_8058AC94_00001D28:
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    addis r5, r29, 0x2
    li r4, 0x1
    addi r0, r5, 0x5bbc
    stwx r3, r31, r0
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_8058AC94_00001D28
    lis r3, lbl_80761D5C@ha
    li r27, 0x0
    addi r3, r3, lbl_80761D5C@l
    li r30, 0x0
    addi r28, r3, 0x194
    addi r29, r3, 0x1bb
lbl_fn_8058AC94_00001D70:
    mr r3, r31
    mr r4, r28
    bl fn_801F64D0
    addis r5, r30, 0x2
    li r4, 0x1
    addi r0, r5, 0x5bc8
    stwx r3, r31, r0
    bl fn_800D246C
    mr r3, r31
    mr r4, r29
    bl fn_801F64D0
    addis r5, r30, 0x2
    li r4, 0x1
    addi r0, r5, 0x5bd4
    stwx r3, r31, r0
    bl fn_800D246C
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_8058AC94_00001D70
    lis r30, lbl_80761D5C@ha
    addis r3, r31, 0x2
    addi r30, r30, lbl_80761D5C@l
    li r0, 0x0
    stw r0, 0x5be0(r3)
    mr r3, r31
    addi r4, r30, 0x1e4
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5be4(r5)
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x202
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5be8(r5)
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x227
    li r5, 0x0
    bl fn_801F3FF8
    addis r5, r31, 0x2
    li r4, 0x1
    stw r3, 0x5bec(r5)
    bl fn_800D246C
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
