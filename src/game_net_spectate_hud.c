#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800081C0(void);
extern void fn_80010374(void);
extern void fn_80011964(void);
extern void fn_80012A1C(void);
extern void fn_800844D8(void);
extern void fn_800928B0(void);
extern void fn_80539CF0(void);
extern void fn_8053A16C(void);
extern void fn_80541BDC(void);
extern void fn_80541C98(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8075D928[];
extern u8 lbl_8075D94C[];
extern u8 lbl_80793B0C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E4B8;
extern u32 lbl_80887C68;
extern u32 lbl_80887C6C;
extern u32 lbl_80887C70;
extern u32 lbl_80887C74;
extern u32 lbl_80887C78;

/* Function declarations */
void fn_805381A4(void);
void fn_805381B0(void);
void fn_805381BC(void);
void fn_805381CC(void);
void fn_805381E0(void);
void fn_805381F4(void);
void fn_805382C0(void);
void fn_805384D0(void);
void fn_805389BC(void);
void fn_80538B1C(void);
void fn_80538C18(void);
void fn_80538CE4(void);
void fn_80538DC8(void);
void fn_80538FD8(void);
void fn_805391E8(void);
void fn_805392C0(void);
void fn_80539334(void);
void fn_805393A8(void);
void fn_805393FC(void);
void fn_8053985C(void);
void fn_80539874(void);

asm void fn_805381A4(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    blr
}

asm void fn_805381B0(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    blr
}

asm void fn_805381BC(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    blr
}

asm void fn_805381CC(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    blr
}

asm void fn_805381E0(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    lwz r3, 0x8(r3)
    blr
}

asm void fn_805381F4(void)
{
    nofralloc
    cmpwi r5, 0x0
    li r6, 0x0
    blt lbl_fn_805381F4_0000006C
    lwz r0, 0x30(r4)
    cmpw r5, r0
    bge lbl_fn_805381F4_0000006C
    li r6, 0x1
lbl_fn_805381F4_0000006C:
    cmpwi r6, 0x0
    beq lbl_fn_805381F4_00000084
    lwz r6, 0x2c(r4)
    slwi r0, r5, 3
    add r7, r6, r0
    b lbl_fn_805381F4_00000088
lbl_fn_805381F4_00000084:
    li r7, 0x0
lbl_fn_805381F4_00000088:
    lfs f0, 0x4(r7)
    addic. r6, r5, 0x1
    stfs f0, 0x0(r3)
    li r7, 0x0
    blt lbl_fn_805381F4_000000AC
    lwz r0, 0x30(r4)
    cmpw r6, r0
    bge lbl_fn_805381F4_000000AC
    li r7, 0x1
lbl_fn_805381F4_000000AC:
    cmpwi r7, 0x0
    beq lbl_fn_805381F4_000000C8
    addi r0, r5, 0x1
    lwz r6, 0x2c(r4)
    slwi r0, r0, 3
    add r7, r6, r0
    b lbl_fn_805381F4_000000CC
lbl_fn_805381F4_000000C8:
    li r7, 0x0
lbl_fn_805381F4_000000CC:
    lfs f0, 0x4(r7)
    addic. r6, r5, 0x2
    stfs f0, 0x4(r3)
    li r7, 0x0
    blt lbl_fn_805381F4_000000F0
    lwz r0, 0x30(r4)
    cmpw r6, r0
    bge lbl_fn_805381F4_000000F0
    li r7, 0x1
lbl_fn_805381F4_000000F0:
    cmpwi r7, 0x0
    beq lbl_fn_805381F4_0000010C
    addi r0, r5, 0x2
    lwz r4, 0x2c(r4)
    slwi r0, r0, 3
    add r4, r4, r0
    b lbl_fn_805381F4_00000110
lbl_fn_805381F4_0000010C:
    li r4, 0x0
lbl_fn_805381F4_00000110:
    lfs f0, 0x4(r4)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_805382C0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r6, 0x8(r4)
    cmpwi r5, 0x0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lwz r3, 0x8(r6)
    lwz r3, 0x8(r3)
    lwz r6, 0x8(r3)
    blt lbl_fn_805382C0_00000160
    lwz r3, 0x30(r4)
    cmpw r5, r3
    bge lbl_fn_805382C0_00000160
    li r0, 0x1
lbl_fn_805382C0_00000160:
    cmpwi r0, 0x0
    beq lbl_fn_805382C0_00000178
    lwz r3, 0x2c(r4)
    slwi r0, r5, 3
    add r3, r3, r0
    b lbl_fn_805382C0_0000017C
lbl_fn_805382C0_00000178:
    li r3, 0x0
lbl_fn_805382C0_0000017C:
    lwz r0, 0x168(r6)
    lwz r7, 0x4(r3)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805382C0_000001B4
lbl_fn_805382C0_00000194:
    lwz r0, 0x164(r6)
    add r30, r0, r3
    lwz r0, 0x14(r30)
    cmpw r7, r0
    bne lbl_fn_805382C0_000001AC
    b lbl_fn_805382C0_000001B8
lbl_fn_805382C0_000001AC:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_805382C0_00000194
lbl_fn_805382C0_000001B4:
    li r30, 0x0
lbl_fn_805382C0_000001B8:
    addic. r0, r5, 0x1
    li r3, 0x0
    blt lbl_fn_805382C0_000001D4
    lwz r7, 0x30(r4)
    cmpw r0, r7
    bge lbl_fn_805382C0_000001D4
    li r3, 0x1
lbl_fn_805382C0_000001D4:
    cmpwi r3, 0x0
    beq lbl_fn_805382C0_000001F0
    addi r0, r5, 0x1
    lwz r3, 0x2c(r4)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_805382C0_000001F4
lbl_fn_805382C0_000001F0:
    li r3, 0x0
lbl_fn_805382C0_000001F4:
    lfs f0, 0x4(r3)
    addic. r0, r5, 0x2
    stfs f0, 0x14(r1)
    li r3, 0x0
    blt lbl_fn_805382C0_00000218
    lwz r7, 0x30(r4)
    cmpw r0, r7
    bge lbl_fn_805382C0_00000218
    li r3, 0x1
lbl_fn_805382C0_00000218:
    cmpwi r3, 0x0
    beq lbl_fn_805382C0_00000234
    addi r0, r5, 0x2
    lwz r3, 0x2c(r4)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_805382C0_00000238
lbl_fn_805382C0_00000234:
    li r3, 0x0
lbl_fn_805382C0_00000238:
    lfs f0, 0x4(r3)
    addic. r0, r5, 0x3
    stfs f0, 0x18(r1)
    li r3, 0x0
    blt lbl_fn_805382C0_0000025C
    lwz r7, 0x30(r4)
    cmpw r0, r7
    bge lbl_fn_805382C0_0000025C
    li r3, 0x1
lbl_fn_805382C0_0000025C:
    cmpwi r3, 0x0
    beq lbl_fn_805382C0_00000278
    addi r0, r5, 0x3
    lwz r3, 0x2c(r4)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_805382C0_0000027C
lbl_fn_805382C0_00000278:
    li r3, 0x0
lbl_fn_805382C0_0000027C:
    lfs f0, 0x4(r3)
    stfs f0, 0x1c(r1)
    lwz r0, 0x20(r30)
    cmpwi r0, 0x6
    bne lbl_fn_805382C0_000002A4
    mr r3, r31
    mr r4, r6
    addi r5, r1, 0x14
    bl fn_80541BDC
    b lbl_fn_805382C0_00000314
lbl_fn_805382C0_000002A4:
    mr r3, r30
    bl fn_80011964
    addi r3, r1, 0x20
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_80010374
    lfs f3, 0x14(r1)
    addi r3, r1, 0x14
    lfs f0, 0x8(r1)
    lfs f5, 0x18(r1)
    fadds f6, f3, f0
    lfs f4, 0xc(r1)
    lfs f3, 0x1c(r1)
    lfs f0, 0x10(r1)
    fadds f4, f5, f4
    stfs f6, 0x14(r1)
    fadds f2, f3, f0
    stfs f4, 0x18(r1)
    stfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_805382C0_00000314:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805384D0(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x180
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    bl _savegpr_27
    lwz r6, 0x8(r4)
    mr r29, r3
    cmpwi r5, 0x0
    mr r30, r4
    lwz r3, 0x8(r6)
    mr r31, r5
    li r0, 0x0
    lwz r3, 0x8(r3)
    lwz r6, 0x8(r3)
    blt lbl_fn_805384D0_00000388
    lwz r3, 0x30(r4)
    cmpw r5, r3
    bge lbl_fn_805384D0_00000388
    li r0, 0x1
lbl_fn_805384D0_00000388:
    cmpwi r0, 0x0
    beq lbl_fn_805384D0_000003A0
    lwz r3, 0x2c(r4)
    slwi r0, r5, 3
    add r7, r3, r0
    b lbl_fn_805384D0_000003A4
lbl_fn_805384D0_000003A0:
    li r7, 0x0
lbl_fn_805384D0_000003A4:
    lwz r0, 0x168(r6)
    li r3, 0x0
    lwz r7, 0x4(r7)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805384D0_000003DC
lbl_fn_805384D0_000003BC:
    lwz r0, 0x164(r6)
    add r28, r0, r3
    lwz r0, 0x14(r28)
    cmpw r7, r0
    bne lbl_fn_805384D0_000003D4
    b lbl_fn_805384D0_000003E0
lbl_fn_805384D0_000003D4:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_805384D0_000003BC
lbl_fn_805384D0_000003DC:
    li r28, 0x0
lbl_fn_805384D0_000003E0:
    addic. r0, r5, 0x2
    li r3, 0x0
    blt lbl_fn_805384D0_000003FC
    lwz r7, 0x30(r4)
    cmpw r0, r7
    bge lbl_fn_805384D0_000003FC
    li r3, 0x1
lbl_fn_805384D0_000003FC:
    cmpwi r3, 0x0
    beq lbl_fn_805384D0_00000418
    addi r0, r5, 0x2
    lwz r3, 0x2c(r4)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_805384D0_0000041C
lbl_fn_805384D0_00000418:
    li r3, 0x0
lbl_fn_805384D0_0000041C:
    lfs f0, 0x4(r3)
    addic. r0, r5, 0x3
    stfs f0, 0x80(r1)
    li r3, 0x0
    blt lbl_fn_805384D0_00000440
    lwz r7, 0x30(r4)
    cmpw r0, r7
    bge lbl_fn_805384D0_00000440
    li r3, 0x1
lbl_fn_805384D0_00000440:
    cmpwi r3, 0x0
    beq lbl_fn_805384D0_0000045C
    addi r0, r5, 0x3
    lwz r3, 0x2c(r4)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_805384D0_00000460
lbl_fn_805384D0_0000045C:
    li r3, 0x0
lbl_fn_805384D0_00000460:
    lfs f0, 0x4(r3)
    addic. r0, r5, 0x4
    stfs f0, 0x84(r1)
    li r3, 0x0
    blt lbl_fn_805384D0_00000484
    lwz r7, 0x30(r4)
    cmpw r0, r7
    bge lbl_fn_805384D0_00000484
    li r3, 0x1
lbl_fn_805384D0_00000484:
    cmpwi r3, 0x0
    beq lbl_fn_805384D0_000004A0
    addi r0, r5, 0x4
    lwz r3, 0x2c(r4)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_805384D0_000004A4
lbl_fn_805384D0_000004A0:
    li r3, 0x0
lbl_fn_805384D0_000004A4:
    lfs f0, 0x4(r3)
    stfs f0, 0x88(r1)
    lwz r0, 0x20(r28)
    cmpwi r0, 0x6
    bne lbl_fn_805384D0_000004CC
    mr r3, r29
    mr r4, r6
    addi r5, r1, 0x80
    bl fn_80541BDC
    b lbl_fn_805384D0_000007F0
lbl_fn_805384D0_000004CC:
    mr r3, r28
    bl fn_80012A1C
    addic. r0, r31, 0x1
    mr r27, r3
    li r4, 0x0
    blt lbl_fn_805384D0_000004F4
    lwz r5, 0x30(r30)
    cmpw r0, r5
    bge lbl_fn_805384D0_000004F4
    li r4, 0x1
lbl_fn_805384D0_000004F4:
    cmpwi r4, 0x0
    beq lbl_fn_805384D0_00000510
    addi r0, r31, 0x1
    lwz r4, 0x2c(r30)
    slwi r0, r0, 3
    add r4, r4, r0
    b lbl_fn_805384D0_00000514
lbl_fn_805384D0_00000510:
    li r4, 0x0
lbl_fn_805384D0_00000514:
    cmpwi r3, 0x0
    lwz r4, 0x4(r4)
    beq lbl_fn_805384D0_0000077C
    cmpwi r4, 0x0
    beq lbl_fn_805384D0_0000077C
    mr r3, r27
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_805384D0_00000544
    li r30, 0x0
    b lbl_fn_805384D0_00000550
lbl_fn_805384D0_00000544:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r30, r3, r0
lbl_fn_805384D0_00000550:
    cmpwi r30, 0x0
    beq lbl_fn_805384D0_000007DC
    lfs f2, 0x28(r30)
    addi r3, r1, 0x68
    lfs f3, 0x24(r30)
    addi r28, r1, 0x74
    frsp f4, f2
    stfs f3, 0x6c(r1)
    lfs f0, 0x20(r30)
    stfs f0, 0x68(r1)
    fabs f3, f4
    lfs f0, lbl_80887C70
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    frsp f3, f3
    psq_st f1, 0x0(r28), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x7c(r1)
    bge lbl_fn_805384D0_000005C0
    lfs f3, 0x74(r1)
    lfs f0, lbl_80887C68
    fcmpo cr0, f3, f0
    ble lbl_fn_805384D0_000005B4
    lfs f0, lbl_80887C74
    b lbl_fn_805384D0_000005B8
lbl_fn_805384D0_000005B4:
    lfs f0, lbl_80887C78
lbl_fn_805384D0_000005B8:
    stfs f0, 0x48(r1)
    b lbl_fn_805384D0_000005D4
lbl_fn_805384D0_000005C0:
    fmr f2, f4
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_805384D0_000005D4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887C68
    addi r4, r1, 0x38
    lfs f30, 0x98(r1)
    mr r5, r4
    lfs f31, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80887C6C
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f30, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80887C70
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_805384D0_000006F0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80887C68
    fcmpo cr0, f3, f0
    ble lbl_fn_805384D0_000006E0
    lfs f0, lbl_80887C74
    b lbl_fn_805384D0_000006E4
lbl_fn_805384D0_000006E0:
    lfs f0, lbl_80887C78
lbl_fn_805384D0_000006E4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_805384D0_00000704
lbl_fn_805384D0_000006F0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_805384D0_00000704:
    addi r3, r1, 0x44
    lfs f2, lbl_80887C68
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x130
    psq_st f1, 0x0(r28), 0, 0
    li r4, 0x79
    lfs f1, 0x78(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x7c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x130
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x2c(r30)
    lfs f6, 0x1c(r30)
    lfs f7, 0xc(r30)
    lfs f4, 0x80(r1)
    lfs f3, 0x84(r1)
    lfs f0, 0x88(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f7, 0x5c(r1)
    fadds f0, f0, f5
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f4, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    b lbl_fn_805384D0_000007DC
lbl_fn_805384D0_0000077C:
    mr r3, r28
    bl fn_80011964
    addi r3, r1, 0x100
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x100
    mr r5, r4
    bl fn_805F93C0
    mr r4, r28
    addi r3, r1, 0x50
    bl fn_80010374
    lfs f3, 0x80(r1)
    lfs f0, 0x50(r1)
    lfs f5, 0x84(r1)
    fadds f6, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x88(r1)
    lfs f0, 0x58(r1)
    fadds f4, f5, f4
    stfs f6, 0x80(r1)
    fadds f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x88(r1)
lbl_fn_805384D0_000007DC:
    addi r3, r1, 0x80
    lfs f2, 0x88(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
lbl_fn_805384D0_000007F0:
    addi r11, r1, 0x180
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    bl _restgpr_27
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_805389BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lwz r5, 0x8(r3)
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r5, 0x8(r5)
    lwz r5, 0x8(r5)
    lwz r5, 0x8(r5)
    blt lbl_fn_805389BC_00000868
    lwz r6, 0x30(r3)
    cmpw r4, r6
    bge lbl_fn_805389BC_00000868
    li r0, 0x1
lbl_fn_805389BC_00000868:
    cmpwi r0, 0x0
    beq lbl_fn_805389BC_00000880
    lwz r3, 0x2c(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    b lbl_fn_805389BC_00000884
lbl_fn_805389BC_00000880:
    li r3, 0x0
lbl_fn_805389BC_00000884:
    lwz r0, 0x168(r5)
    li r4, 0x0
    lwz r6, 0x4(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805389BC_000008BC
lbl_fn_805389BC_0000089C:
    lwz r0, 0x164(r5)
    add r3, r0, r4
    lwz r0, 0x14(r3)
    cmpw r6, r0
    bne lbl_fn_805389BC_000008B4
    b lbl_fn_805389BC_000008C0
lbl_fn_805389BC_000008B4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805389BC_0000089C
lbl_fn_805389BC_000008BC:
    li r3, 0x0
lbl_fn_805389BC_000008C0:
    lis r5, lbl_807C7030@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_807C7030@l
    li r29, 0x0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_805389BC_00000954
    addic. r4, r31, 0x1
    li r5, 0x0
    blt lbl_fn_805389BC_0000090C
    lwz r0, 0x30(r30)
    cmpw r4, r0
    bge lbl_fn_805389BC_0000090C
    li r5, 0x1
lbl_fn_805389BC_0000090C:
    cmpwi r5, 0x0
    beq lbl_fn_805389BC_00000928
    addi r0, r31, 0x1
    lwz r4, 0x2c(r30)
    slwi r0, r0, 3
    add r4, r4, r0
    b lbl_fn_805389BC_0000092C
lbl_fn_805389BC_00000928:
    li r4, 0x0
lbl_fn_805389BC_0000092C:
    lwz r4, 0x4(r4)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_805389BC_00000948
    li r29, 0x0
    b lbl_fn_805389BC_00000954
lbl_fn_805389BC_00000948:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r29, r3, r0
lbl_fn_805389BC_00000954:
    lwz r31, 0x2c(r1)
    mr r3, r29
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80538B1C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    li r6, 0x0
    stw r0, 0x24(r1)
    blt lbl_fn_80538B1C_000009A0
    lwz r0, 0x30(r4)
    cmpw r5, r0
    bge lbl_fn_80538B1C_000009A0
    li r6, 0x1
lbl_fn_80538B1C_000009A0:
    cmpwi r6, 0x0
    beq lbl_fn_80538B1C_000009B8
    lwz r6, 0x2c(r4)
    slwi r0, r5, 3
    add r7, r6, r0
    b lbl_fn_80538B1C_000009BC
lbl_fn_80538B1C_000009B8:
    li r7, 0x0
lbl_fn_80538B1C_000009BC:
    lfs f0, 0x4(r7)
    addic. r6, r5, 0x1
    stfs f0, 0x8(r1)
    li r7, 0x0
    blt lbl_fn_80538B1C_000009E0
    lwz r0, 0x30(r4)
    cmpw r6, r0
    bge lbl_fn_80538B1C_000009E0
    li r7, 0x1
lbl_fn_80538B1C_000009E0:
    cmpwi r7, 0x0
    beq lbl_fn_80538B1C_000009FC
    addi r0, r5, 0x1
    lwz r6, 0x2c(r4)
    slwi r0, r0, 3
    add r7, r6, r0
    b lbl_fn_80538B1C_00000A00
lbl_fn_80538B1C_000009FC:
    li r7, 0x0
lbl_fn_80538B1C_00000A00:
    lfs f0, 0x4(r7)
    addic. r6, r5, 0x2
    stfs f0, 0xc(r1)
    li r7, 0x0
    blt lbl_fn_80538B1C_00000A24
    lwz r0, 0x30(r4)
    cmpw r6, r0
    bge lbl_fn_80538B1C_00000A24
    li r7, 0x1
lbl_fn_80538B1C_00000A24:
    cmpwi r7, 0x0
    beq lbl_fn_80538B1C_00000A40
    addi r0, r5, 0x2
    lwz r5, 0x2c(r4)
    slwi r0, r0, 3
    add r5, r5, r0
    b lbl_fn_80538B1C_00000A44
lbl_fn_80538B1C_00000A40:
    li r5, 0x0
lbl_fn_80538B1C_00000A44:
    lfs f0, 0x4(r5)
    addi r5, r1, 0x8
    stfs f0, 0x10(r1)
    lwz r4, 0x8(r4)
    lwz r4, 0x8(r4)
    lwz r4, 0x8(r4)
    lwz r4, 0x8(r4)
    bl fn_80541C98
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80538C18(void)
{
    nofralloc
    cmpwi r5, 0x0
    li r6, 0x0
    blt lbl_fn_80538C18_00000A90
    lwz r0, 0x30(r4)
    cmpw r5, r0
    bge lbl_fn_80538C18_00000A90
    li r6, 0x1
lbl_fn_80538C18_00000A90:
    cmpwi r6, 0x0
    beq lbl_fn_80538C18_00000AA8
    lwz r6, 0x2c(r4)
    slwi r0, r5, 3
    add r7, r6, r0
    b lbl_fn_80538C18_00000AAC
lbl_fn_80538C18_00000AA8:
    li r7, 0x0
lbl_fn_80538C18_00000AAC:
    lfs f0, 0x4(r7)
    addic. r6, r5, 0x1
    stfs f0, 0x0(r3)
    li r7, 0x0
    blt lbl_fn_80538C18_00000AD0
    lwz r0, 0x30(r4)
    cmpw r6, r0
    bge lbl_fn_80538C18_00000AD0
    li r7, 0x1
lbl_fn_80538C18_00000AD0:
    cmpwi r7, 0x0
    beq lbl_fn_80538C18_00000AEC
    addi r0, r5, 0x1
    lwz r6, 0x2c(r4)
    slwi r0, r0, 3
    add r7, r6, r0
    b lbl_fn_80538C18_00000AF0
lbl_fn_80538C18_00000AEC:
    li r7, 0x0
lbl_fn_80538C18_00000AF0:
    lfs f0, 0x4(r7)
    addic. r6, r5, 0x2
    stfs f0, 0x4(r3)
    li r7, 0x0
    blt lbl_fn_80538C18_00000B14
    lwz r0, 0x30(r4)
    cmpw r6, r0
    bge lbl_fn_80538C18_00000B14
    li r7, 0x1
lbl_fn_80538C18_00000B14:
    cmpwi r7, 0x0
    beq lbl_fn_80538C18_00000B30
    addi r0, r5, 0x2
    lwz r4, 0x2c(r4)
    slwi r0, r0, 3
    add r4, r4, r0
    b lbl_fn_80538C18_00000B34
lbl_fn_80538C18_00000B30:
    li r4, 0x0
lbl_fn_80538C18_00000B34:
    lfs f0, 0x4(r4)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_80538CE4(void)
{
    nofralloc
    cmpwi r4, 0x0
    lfs f0, 0x0(r5)
    li r6, 0x0
    blt lbl_fn_80538CE4_00000B60
    lwz r0, 0x30(r3)
    cmpw r4, r0
    bge lbl_fn_80538CE4_00000B60
    li r6, 0x1
lbl_fn_80538CE4_00000B60:
    cmpwi r6, 0x0
    beq lbl_fn_80538CE4_00000B78
    lwz r6, 0x2c(r3)
    slwi r0, r4, 3
    add r8, r6, r0
    b lbl_fn_80538CE4_00000B7C
lbl_fn_80538CE4_00000B78:
    li r8, 0x0
lbl_fn_80538CE4_00000B7C:
    li r0, 0x3
    stw r0, 0x0(r8)
    addic. r6, r4, 0x1
    lfs f1, 0x4(r5)
    stfs f0, 0x4(r8)
    li r7, 0x0
    blt lbl_fn_80538CE4_00000BA8
    lwz r0, 0x30(r3)
    cmpw r6, r0
    bge lbl_fn_80538CE4_00000BA8
    li r7, 0x1
lbl_fn_80538CE4_00000BA8:
    cmpwi r7, 0x0
    beq lbl_fn_80538CE4_00000BC4
    addi r0, r4, 0x1
    lwz r6, 0x2c(r3)
    slwi r0, r0, 3
    add r7, r6, r0
    b lbl_fn_80538CE4_00000BC8
lbl_fn_80538CE4_00000BC4:
    li r7, 0x0
lbl_fn_80538CE4_00000BC8:
    li r0, 0x3
    stw r0, 0x0(r7)
    addic. r6, r4, 0x2
    lfs f0, 0x8(r5)
    stfs f1, 0x4(r7)
    li r5, 0x0
    blt lbl_fn_80538CE4_00000BF4
    lwz r0, 0x30(r3)
    cmpw r6, r0
    bge lbl_fn_80538CE4_00000BF4
    li r5, 0x1
lbl_fn_80538CE4_00000BF4:
    cmpwi r5, 0x0
    beq lbl_fn_80538CE4_00000C10
    addi r0, r4, 0x2
    lwz r3, 0x2c(r3)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_80538CE4_00000C14
lbl_fn_80538CE4_00000C10:
    li r3, 0x0
lbl_fn_80538CE4_00000C14:
    li r0, 0x3
    stw r0, 0x0(r3)
    stfs f0, 0x4(r3)
    blr
}

asm void fn_80538DC8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    blt lbl_fn_80538DC8_00000C5C
    lwz r5, 0x30(r3)
    cmpw r4, r5
    bge lbl_fn_80538DC8_00000C5C
    li r0, 0x1
lbl_fn_80538DC8_00000C5C:
    cmpwi r0, 0x0
    beq lbl_fn_80538DC8_00000C74
    lwz r5, 0x2c(r3)
    slwi r0, r4, 3
    add r5, r5, r0
    b lbl_fn_80538DC8_00000C78
lbl_fn_80538DC8_00000C74:
    li r5, 0x0
lbl_fn_80538DC8_00000C78:
    lfs f0, 0x4(r5)
    addic. r0, r4, 0x1
    stfs f0, 0x14(r1)
    li r5, 0x0
    blt lbl_fn_80538DC8_00000C9C
    lwz r6, 0x30(r3)
    cmpw r0, r6
    bge lbl_fn_80538DC8_00000C9C
    li r5, 0x1
lbl_fn_80538DC8_00000C9C:
    cmpwi r5, 0x0
    beq lbl_fn_80538DC8_00000CB8
    addi r0, r4, 0x1
    lwz r5, 0x2c(r3)
    slwi r0, r0, 3
    add r5, r5, r0
    b lbl_fn_80538DC8_00000CBC
lbl_fn_80538DC8_00000CB8:
    li r5, 0x0
lbl_fn_80538DC8_00000CBC:
    lfs f0, 0x4(r5)
    addic. r0, r4, 0x2
    stfs f0, 0x18(r1)
    li r5, 0x0
    blt lbl_fn_80538DC8_00000CE0
    lwz r6, 0x30(r3)
    cmpw r0, r6
    bge lbl_fn_80538DC8_00000CE0
    li r5, 0x1
lbl_fn_80538DC8_00000CE0:
    cmpwi r5, 0x0
    beq lbl_fn_80538DC8_00000CFC
    addi r0, r4, 0x2
    lwz r4, 0x2c(r3)
    slwi r0, r0, 3
    add r4, r4, r0
    b lbl_fn_80538DC8_00000D00
lbl_fn_80538DC8_00000CFC:
    li r4, 0x0
lbl_fn_80538DC8_00000D00:
    lfs f0, 0x4(r4)
    addi r5, r1, 0x14
    stfs f0, 0x1c(r1)
    lwz r4, 0x8(r3)
    addi r3, r1, 0x8
    lwz r4, 0x8(r4)
    lwz r4, 0x8(r4)
    lwz r4, 0x8(r4)
    bl fn_80541BDC
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x14
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r31, 0x0
    li r3, 0x0
    stfs f2, 0x1c(r1)
    lfs f0, 0x14(r1)
    blt lbl_fn_80538DC8_00000D5C
    lwz r0, 0x30(r30)
    cmpw r31, r0
    bge lbl_fn_80538DC8_00000D5C
    li r3, 0x1
lbl_fn_80538DC8_00000D5C:
    cmpwi r3, 0x0
    beq lbl_fn_80538DC8_00000D74
    lwz r3, 0x2c(r30)
    slwi r0, r31, 3
    add r5, r3, r0
    b lbl_fn_80538DC8_00000D78
lbl_fn_80538DC8_00000D74:
    li r5, 0x0
lbl_fn_80538DC8_00000D78:
    li r0, 0x4
    stw r0, 0x0(r5)
    addic. r3, r31, 0x1
    li r4, 0x0
    stfs f0, 0x4(r5)
    lfs f0, 0x18(r1)
    blt lbl_fn_80538DC8_00000DA4
    lwz r0, 0x30(r30)
    cmpw r3, r0
    bge lbl_fn_80538DC8_00000DA4
    li r4, 0x1
lbl_fn_80538DC8_00000DA4:
    cmpwi r4, 0x0
    beq lbl_fn_80538DC8_00000DC0
    addi r0, r31, 0x1
    lwz r3, 0x2c(r30)
    slwi r0, r0, 3
    add r5, r3, r0
    b lbl_fn_80538DC8_00000DC4
lbl_fn_80538DC8_00000DC0:
    li r5, 0x0
lbl_fn_80538DC8_00000DC4:
    li r0, 0x5
    stw r0, 0x0(r5)
    addic. r3, r31, 0x2
    li r4, 0x0
    stfs f0, 0x4(r5)
    lfs f0, 0x1c(r1)
    blt lbl_fn_80538DC8_00000DF0
    lwz r0, 0x30(r30)
    cmpw r3, r0
    bge lbl_fn_80538DC8_00000DF0
    li r4, 0x1
lbl_fn_80538DC8_00000DF0:
    cmpwi r4, 0x0
    beq lbl_fn_80538DC8_00000E0C
    addi r0, r31, 0x2
    lwz r3, 0x2c(r30)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_80538DC8_00000E10
lbl_fn_80538DC8_00000E0C:
    li r3, 0x0
lbl_fn_80538DC8_00000E10:
    li r0, 0x6
    stw r0, 0x0(r3)
    stfs f0, 0x4(r3)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80538FD8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    blt lbl_fn_80538FD8_00000E6C
    lwz r5, 0x30(r3)
    cmpw r4, r5
    bge lbl_fn_80538FD8_00000E6C
    li r0, 0x1
lbl_fn_80538FD8_00000E6C:
    cmpwi r0, 0x0
    beq lbl_fn_80538FD8_00000E84
    lwz r5, 0x2c(r3)
    slwi r0, r4, 3
    add r5, r5, r0
    b lbl_fn_80538FD8_00000E88
lbl_fn_80538FD8_00000E84:
    li r5, 0x0
lbl_fn_80538FD8_00000E88:
    lfs f0, 0x4(r5)
    addic. r0, r4, 0x1
    stfs f0, 0x14(r1)
    li r5, 0x0
    blt lbl_fn_80538FD8_00000EAC
    lwz r6, 0x30(r3)
    cmpw r0, r6
    bge lbl_fn_80538FD8_00000EAC
    li r5, 0x1
lbl_fn_80538FD8_00000EAC:
    cmpwi r5, 0x0
    beq lbl_fn_80538FD8_00000EC8
    addi r0, r4, 0x1
    lwz r5, 0x2c(r3)
    slwi r0, r0, 3
    add r5, r5, r0
    b lbl_fn_80538FD8_00000ECC
lbl_fn_80538FD8_00000EC8:
    li r5, 0x0
lbl_fn_80538FD8_00000ECC:
    lfs f0, 0x4(r5)
    addic. r0, r4, 0x2
    stfs f0, 0x18(r1)
    li r5, 0x0
    blt lbl_fn_80538FD8_00000EF0
    lwz r6, 0x30(r3)
    cmpw r0, r6
    bge lbl_fn_80538FD8_00000EF0
    li r5, 0x1
lbl_fn_80538FD8_00000EF0:
    cmpwi r5, 0x0
    beq lbl_fn_80538FD8_00000F0C
    addi r0, r4, 0x2
    lwz r4, 0x2c(r3)
    slwi r0, r0, 3
    add r4, r4, r0
    b lbl_fn_80538FD8_00000F10
lbl_fn_80538FD8_00000F0C:
    li r4, 0x0
lbl_fn_80538FD8_00000F10:
    lfs f0, 0x4(r4)
    addi r5, r1, 0x14
    stfs f0, 0x1c(r1)
    lwz r4, 0x8(r3)
    addi r3, r1, 0x8
    lwz r4, 0x8(r4)
    lwz r4, 0x8(r4)
    lwz r4, 0x8(r4)
    bl fn_80541C98
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x14
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r31, 0x0
    li r3, 0x0
    stfs f2, 0x1c(r1)
    lfs f0, 0x14(r1)
    blt lbl_fn_80538FD8_00000F6C
    lwz r0, 0x30(r30)
    cmpw r31, r0
    bge lbl_fn_80538FD8_00000F6C
    li r3, 0x1
lbl_fn_80538FD8_00000F6C:
    cmpwi r3, 0x0
    beq lbl_fn_80538FD8_00000F84
    lwz r3, 0x2c(r30)
    slwi r0, r31, 3
    add r6, r3, r0
    b lbl_fn_80538FD8_00000F88
lbl_fn_80538FD8_00000F84:
    li r6, 0x0
lbl_fn_80538FD8_00000F88:
    li r5, 0x1
    stw r5, 0x0(r6)
    addic. r3, r31, 0x1
    li r4, 0x0
    stfs f0, 0x4(r6)
    lfs f0, 0x18(r1)
    blt lbl_fn_80538FD8_00000FB4
    lwz r0, 0x30(r30)
    cmpw r3, r0
    bge lbl_fn_80538FD8_00000FB4
    mr r4, r5
lbl_fn_80538FD8_00000FB4:
    cmpwi r4, 0x0
    beq lbl_fn_80538FD8_00000FD0
    addi r0, r31, 0x1
    lwz r3, 0x2c(r30)
    slwi r0, r0, 3
    add r6, r3, r0
    b lbl_fn_80538FD8_00000FD4
lbl_fn_80538FD8_00000FD0:
    li r6, 0x0
lbl_fn_80538FD8_00000FD4:
    li r5, 0x1
    stw r5, 0x0(r6)
    addic. r3, r31, 0x2
    li r4, 0x0
    stfs f0, 0x4(r6)
    lfs f0, 0x1c(r1)
    blt lbl_fn_80538FD8_00001000
    lwz r0, 0x30(r30)
    cmpw r3, r0
    bge lbl_fn_80538FD8_00001000
    mr r4, r5
lbl_fn_80538FD8_00001000:
    cmpwi r4, 0x0
    beq lbl_fn_80538FD8_0000101C
    addi r0, r31, 0x2
    lwz r3, 0x2c(r30)
    slwi r0, r0, 3
    add r3, r3, r0
    b lbl_fn_80538FD8_00001020
lbl_fn_80538FD8_0000101C:
    li r3, 0x0
lbl_fn_80538FD8_00001020:
    li r0, 0x1
    stw r0, 0x0(r3)
    stfs f0, 0x4(r3)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805391E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0xc(r3)
    bl fn_800081C0
    lwz r0, 0x14(r3)
    li r8, 0x0
    lwz r5, 0x18(r3)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805391E8_00001100
lbl_fn_805391E8_00001084:
    lwz r7, 0x1c(r3)
    cmpwi cr1, r7, 0x0
    blt cr1, lbl_fn_805391E8_000010DC
    cmpw r8, r7
    blt lbl_fn_805391E8_000010DC
    lwz r5, 0x24(r3)
    li r4, 0x0
    blt cr1, lbl_fn_805391E8_000010B4
    lwz r0, 0x30(r30)
    cmpw r7, r0
    bge lbl_fn_805391E8_000010B4
    li r4, 0x1
lbl_fn_805391E8_000010B4:
    cmpwi r4, 0x0
    beq lbl_fn_805391E8_000010CC
    lwz r4, 0x2c(r30)
    slwi r0, r7, 3
    add r4, r4, r0
    b lbl_fn_805391E8_000010D0
lbl_fn_805391E8_000010CC:
    li r4, 0x0
lbl_fn_805391E8_000010D0:
    lwz r0, 0x4(r4)
    slwi r0, r0, 2
    lwzx r5, r5, r0
lbl_fn_805391E8_000010DC:
    add r4, r5, r6
    lwz r0, 0x4(r4)
    cmplw r31, r0
    bne lbl_fn_805391E8_000010F4
    mr r3, r8
    b lbl_fn_805391E8_00001104
lbl_fn_805391E8_000010F4:
    addi r6, r6, 0x18
    addi r8, r8, 0x1
    bdnz lbl_fn_805391E8_00001084
lbl_fn_805391E8_00001100:
    li r3, -0x1
lbl_fn_805391E8_00001104:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805392C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805391E8
    cmpwi r3, -0x1
    beq lbl_fn_805392C0_00001178
    cmpwi r3, 0x0
    li r4, 0x0
    blt lbl_fn_805392C0_00001158
    lwz r0, 0x30(r31)
    cmpw r3, r0
    bge lbl_fn_805392C0_00001158
    li r4, 0x1
lbl_fn_805392C0_00001158:
    cmpwi r4, 0x0
    beq lbl_fn_805392C0_00001170
    lwz r4, 0x2c(r31)
    slwi r0, r3, 3
    add r3, r4, r0
    b lbl_fn_805392C0_0000117C
lbl_fn_805392C0_00001170:
    li r3, 0x0
    b lbl_fn_805392C0_0000117C
lbl_fn_805392C0_00001178:
    li r3, 0x0
lbl_fn_805392C0_0000117C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80539334(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805391E8
    cmpwi r3, -0x1
    beq lbl_fn_80539334_000011EC
    cmpwi r3, 0x0
    li r4, 0x0
    blt lbl_fn_80539334_000011CC
    lwz r0, 0x30(r31)
    cmpw r3, r0
    bge lbl_fn_80539334_000011CC
    li r4, 0x1
lbl_fn_80539334_000011CC:
    cmpwi r4, 0x0
    beq lbl_fn_80539334_000011E4
    lwz r4, 0x2c(r31)
    slwi r0, r3, 3
    add r3, r4, r0
    b lbl_fn_80539334_000011F0
lbl_fn_80539334_000011E4:
    li r3, 0x0
    b lbl_fn_80539334_000011F0
lbl_fn_80539334_000011EC:
    li r3, 0x0
lbl_fn_80539334_000011F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805393A8(void)
{
    nofralloc
    lwz r6, 0x10(r3)
    lis r5, 0x4330
    stwu r1, -0x20(r1)
    lwz r0, 0x14(r3)
    lis r3, lbl_8075D928@ha
    subf r4, r6, r4
    lfd f2, lbl_8075D928@l(r3)
    xoris r3, r4, 0x8000
    subf r0, r6, r0
    xoris r0, r0, 0x8000
    stw r5, 0x8(r1)
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    stw r5, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    addi r1, r1, 0x20
    blr
}

asm void fn_805393FC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f1, 0x0(r4)
    stw r0, 0x54(r1)
    lfs f2, lbl_80887C6C
    stw r31, 0x4c(r1)
    lfs f0, 0x4(r4)
    fcmpo cr0, f2, f1
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    cror eq, lt, eq
    bne lbl_fn_805393FC_00001298
    b lbl_fn_805393FC_0000129C
lbl_fn_805393FC_00001298:
    fmr f2, f1
lbl_fn_805393FC_0000129C:
    lfs f1, lbl_80887C68
    fcmpo cr0, f1, f2
    cror eq, gt, eq
    bne lbl_fn_805393FC_000012B0
    b lbl_fn_805393FC_000012B4
lbl_fn_805393FC_000012B0:
    fmr f1, f2
lbl_fn_805393FC_000012B4:
    lfs f0, 0x24(r1)
    lfs f2, lbl_80887C6C
    stfs f1, 0x20(r1)
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_805393FC_000012D0
    b lbl_fn_805393FC_000012D4
lbl_fn_805393FC_000012D0:
    fmr f2, f0
lbl_fn_805393FC_000012D4:
    lfs f0, lbl_80887C68
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bne lbl_fn_805393FC_000012E8
    b lbl_fn_805393FC_000012EC
lbl_fn_805393FC_000012E8:
    fmr f0, f2
lbl_fn_805393FC_000012EC:
    lwz r0, 0x24(r3)
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r4, 0x0
    lfs f1, 0x20(r1)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805393FC_0000132C
lbl_fn_805393FC_0000130C:
    lwz r5, 0x20(r3)
    lfsx f0, r5, r4
    fcmpu cr0, f1, f0
    bne lbl_fn_805393FC_00001320
    b lbl_fn_805393FC_00001330
lbl_fn_805393FC_00001320:
    addi r6, r6, 0x1
    addi r4, r4, 0x8
    bdnz lbl_fn_805393FC_0000130C
lbl_fn_805393FC_0000132C:
    li r6, -0x1
lbl_fn_805393FC_00001330:
    cmpwi r6, -0x1
    bne lbl_fn_805393FC_00001604
    lwz r5, 0x24(r3)
    lwz r4, 0x28(r3)
    cmplw r5, r4
    bge lbl_fn_805393FC_00001374
    addi r5, r5, 0x1
    lwz r4, 0x20(r3)
    subi r0, r5, 0x1
    stw r5, 0x24(r3)
    slwi r0, r0, 3
    lfs f1, 0x20(r1)
    stfsx f1, r4, r0
    add r3, r4, r0
    lfs f0, 0x24(r1)
    stfs f0, 0x4(r3)
    b lbl_fn_805393FC_0000161C
lbl_fn_805393FC_00001374:
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_805393FC_000013A8
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805393FC_000013A8:
    li r5, 0x0
    addi r4, r30, 0x28
    lis r3, 0x2000
    stw r5, 0x28(r1)
    subi r0, r3, 0x1
    stw r5, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r5, 0x38(r1)
    lwz r3, 0x24(r30)
    lwz r31, 0x28(r30)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x18(r1)
    ble lbl_fn_805393FC_0000140C
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805393FC_0000140C:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_805393FC_0000145C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x18(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_805393FC_00001450
    addi r3, r1, 0x18
lbl_fn_805393FC_00001450:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_805393FC_000014A0
lbl_fn_805393FC_0000145C:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_805393FC_00001498
    addi r3, r31, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x14(r1)
    cmplw r3, r0
    addi r3, r1, 0x14
    bge lbl_fn_805393FC_0000148C
    addi r3, r1, 0x18
lbl_fn_805393FC_0000148C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_805393FC_000014A0
lbl_fn_805393FC_00001498:
    lis r3, 0x2000
    subi r31, r3, 0x1
lbl_fn_805393FC_000014A0:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_805393FC_000014D0
    lis r3, __files@ha
    lis r4, lbl_8075D94C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075D94C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805393FC_000014D0:
    slwi r3, r31, 3
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_805393FC_00001504
    lis r3, __files@ha
    lis r4, lbl_80793B0C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80793B0C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805393FC_00001504:
    lwz r0, 0x2c(r1)
    stw r29, 0x28(r1)
    slwi r3, r0, 3
    lfs f1, 0x20(r1)
    stw r31, 0x30(r1)
    lfs f0, 0x24(r1)
    lwz r0, 0x24(r30)
    stw r0, 0x38(r1)
    slwi r0, r0, 3
    add r0, r29, r0
    stfsux f1, r3, r0
    stfs f0, 0x4(r3)
    lwz r3, 0x2c(r1)
    lwz r0, 0x38(r1)
    addi r3, r3, 0x1
    stw r3, 0x2c(r1)
    lwz r3, 0x28(r1)
    slwi r0, r0, 3
    lwz r4, 0x24(r30)
    add r5, r3, r0
    lwz r7, 0x20(r30)
    slwi r0, r4, 3
    add r6, r7, r0
    addi r0, r6, 0x7
    subf r0, r7, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_805393FC_000015B0
lbl_fn_805393FC_00001578:
    subic. r5, r5, 0x8
    subi r6, r6, 0x8
    beq lbl_fn_805393FC_00001594
    lfs f0, 0x0(r6)
    stfs f0, 0x0(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
lbl_fn_805393FC_00001594:
    lwz r4, 0x38(r1)
    lwz r3, 0x2c(r1)
    subi r0, r4, 0x1
    stw r0, 0x38(r1)
    addi r0, r3, 0x1
    stw r0, 0x2c(r1)
    bdnz lbl_fn_805393FC_00001578
lbl_fn_805393FC_000015B0:
    li r4, 0x0
    stw r4, 0x24(r30)
    addic. r0, r1, 0x28
    lwz r3, 0x28(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x28(r30)
    stw r3, 0x30(r1)
    lwz r0, 0x28(r1)
    lwz r3, 0x20(r30)
    stw r0, 0x20(r30)
    stw r3, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r30)
    stw r4, 0x2c(r1)
    beq lbl_fn_805393FC_0000161C
    lwz r3, 0x28(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805393FC_0000161C
    stw r4, 0x2c(r1)
    bl dtor_80084684
    b lbl_fn_805393FC_0000161C
lbl_fn_805393FC_00001604:
    lwz r3, 0x20(r3)
    slwi r0, r6, 3
    lfs f1, 0x20(r1)
    stfsux f1, r3, r0
    lfs f0, 0x24(r1)
    stfs f0, 0x4(r3)
lbl_fn_805393FC_0000161C:
    lwz r0, 0x24(r30)
    lis r5, fn_8053985C@ha
    lwz r4, 0x20(r30)
    addi r3, r1, 0x8
    slwi r0, r0, 3
    stw r4, 0x8(r1)
    add r0, r4, r0
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    addi r5, r5, fn_8053985C@l
    bl fn_80539874
    lwz r0, 0x24(r30)
    li r3, 0x0
    lfs f1, 0x24(r1)
    li r4, 0x0
    lfs f2, 0x20(r1)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805393FC_00001698
lbl_fn_805393FC_00001668:
    lwz r0, 0x20(r30)
    lfsx f0, r4, r0
    add r5, r0, r4
    fcmpu cr0, f2, f0
    bne lbl_fn_805393FC_0000168C
    lfs f0, 0x4(r5)
    fcmpu cr0, f1, f0
    bne lbl_fn_805393FC_0000168C
    b lbl_fn_805393FC_0000169C
lbl_fn_805393FC_0000168C:
    addi r3, r3, 0x1
    addi r4, r4, 0x8
    bdnz lbl_fn_805393FC_00001668
lbl_fn_805393FC_00001698:
    li r3, -0x1
lbl_fn_805393FC_0000169C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8053985C(void)
{
    nofralloc
    lfs f1, 0x0(r3)
    lfs f0, 0x0(r4)
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
    blr
}

asm void fn_80539874(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    lis r6, 0x6666
    stw r5, 0x8(r1)
    mr r28, r3
    mr r29, r4
    addi r31, r6, 0x6667
lbl_fn_80539874_000016F8:
    lwz r30, 0x0(r28)
    lwz r27, 0x0(r29)
    subf r0, r30, r27
    srawi r0, r0, 3
    addze r8, r0
    cmpwi r8, 0x1
    ble lbl_fn_80539874_00001B34
    cmpwi r8, 0x14
    bgt lbl_fn_80539874_000017B4
    cmplw r30, r27
    beq lbl_fn_80539874_00001B34
    subi r26, r27, 0x8
    cmplw r30, r26
    beq lbl_fn_80539874_00001B34
    b lbl_fn_80539874_000017A8
lbl_fn_80539874_00001734:
    cmplw r30, r27
    mr r29, r30
    beq lbl_fn_80539874_00001774
    addi r28, r30, 0x8
    b lbl_fn_80539874_0000176C
lbl_fn_80539874_00001748:
    lwz r12, 0x8(r1)
    mr r3, r28
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539874_00001768
    mr r29, r28
lbl_fn_80539874_00001768:
    addi r28, r28, 0x8
lbl_fn_80539874_0000176C:
    cmplw r28, r27
    bne lbl_fn_80539874_00001748
lbl_fn_80539874_00001774:
    cmplw r29, r30
    beq lbl_fn_80539874_000017A4
    lfs f2, 0x0(r29)
    lfs f1, 0x4(r29)
    lfs f0, 0x0(r30)
    stfs f0, 0x0(r29)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r29)
    stfs f2, 0x0(r30)
    stfs f2, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x4(r30)
lbl_fn_80539874_000017A4:
    addi r30, r30, 0x8
lbl_fn_80539874_000017A8:
    cmplw r30, r26
    bne lbl_fn_80539874_00001734
    b lbl_fn_80539874_00001B34
lbl_fn_80539874_000017B4:
    lwz r4, lbl_8087E4B8
    srawi r0, r8, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 3
    add r7, r30, r0
    blt lbl_fn_80539874_000017F4
    li r6, -0x4
lbl_fn_80539874_000017F4:
    mulhw r3, r31, r6
    addi r0, r6, 0x1
    slwi r4, r8, 2
    stw r0, lbl_8087E4B8
    cmpwi r0, 0x5
    lwz r5, 0x0(r28)
    subf r0, r8, r4
    srawi r0, r0, 2
    addze r4, r0
    srawi r0, r3, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r4, r0
    slwi r0, r0, 3
    add r0, r5, r0
    blt lbl_fn_80539874_00001844
    li r6, -0x4
    stw r6, lbl_8087E4B8
lbl_fn_80539874_00001844:
    lwz r6, 0x0(r29)
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    addi r5, r1, 0x1c
    subi r26, r6, 0x8
    stw r26, 0x1c(r1)
    addi r6, r1, 0x8
    stw r0, 0x20(r1)
    stw r7, 0x24(r1)
    bl fn_8053A16C
    lwz r30, 0x0(r28)
    mr r27, r26
    b lbl_fn_80539874_0000187C
lbl_fn_80539874_00001878:
    addi r30, r30, 0x8
lbl_fn_80539874_0000187C:
    lwz r12, 0x8(r1)
    mr r3, r30
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80539874_00001878
lbl_fn_80539874_00001898:
    subi r27, r27, 0x8
    cmplw r30, r27
    beq lbl_fn_80539874_000018C0
    lwz r12, 0x8(r1)
    mr r3, r27
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539874_00001898
lbl_fn_80539874_000018C0:
    cmplw r30, r27
    bge lbl_fn_80539874_0000197C
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r27)
    stfs f0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f2, 0x0(r27)
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x4(r27)
    b lbl_fn_80539874_000018FC
lbl_fn_80539874_000018F8:
    addi r30, r30, 0x8
lbl_fn_80539874_000018FC:
    lwz r12, 0x8(r1)
    mr r3, r30
    mr r4, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80539874_000018F8
lbl_fn_80539874_00001918:
    lwz r12, 0x8(r1)
    subi r27, r27, 0x8
    mr r4, r26
    mr r3, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539874_00001918
    xor r0, r27, r30
    cntlzw r0, r0
    slw r0, r27, r0
    srwi. r0, r0, 31
    beq lbl_fn_80539874_0000197C
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r27)
    stfs f0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f2, 0x0(r27)
    stfs f2, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x4(r27)
    b lbl_fn_80539874_000018FC
lbl_fn_80539874_0000197C:
    lwz r6, 0x0(r28)
    cmplw r30, r6
    bne lbl_fn_80539874_00001AD0
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r26)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r26)
    stfs f0, 0x4(r30)
    stfs f2, 0x0(r26)
    stfs f1, 0x4(r26)
    lwz r3, 0x0(r29)
    lwz r12, 0x8(r1)
    subi r27, r3, 0x8
    stfs f2, 0x38(r1)
    lwz r3, 0x0(r28)
    mr r4, r27
    stfs f1, 0x3c(r1)
    mtctr r12
    addi r30, r30, 0x8
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80539874_00001A38
    b lbl_fn_80539874_000019E0
lbl_fn_80539874_000019DC:
    addi r30, r30, 0x8
lbl_fn_80539874_000019E0:
    lwz r0, 0x0(r29)
    cmplw r30, r0
    beq lbl_fn_80539874_00001A08
    lwz r12, 0x8(r1)
    mr r4, r30
    lwz r3, 0x0(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539874_000019DC
lbl_fn_80539874_00001A08:
    cmplw r30, r27
    bge lbl_fn_80539874_00001A38
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r27)
    stfs f0, 0x4(r30)
    stfs f2, 0x0(r27)
    stfs f2, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x4(r27)
lbl_fn_80539874_00001A38:
    cmplw r30, r27
    bge lbl_fn_80539874_00001AC8
    b lbl_fn_80539874_00001A48
lbl_fn_80539874_00001A44:
    addi r30, r30, 0x8
lbl_fn_80539874_00001A48:
    lwz r12, 0x8(r1)
    mr r4, r30
    lwz r3, 0x0(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80539874_00001A44
lbl_fn_80539874_00001A64:
    lwz r12, 0x8(r1)
    subi r27, r27, 0x8
    lwz r3, 0x0(r28)
    mr r4, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80539874_00001A64
    xor r0, r27, r30
    cntlzw r0, r0
    slw r0, r27, r0
    srwi. r0, r0, 31
    beq lbl_fn_80539874_00001AC8
    lfs f2, 0x0(r30)
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r27)
    stfs f0, 0x0(r30)
    lfs f0, 0x4(r27)
    stfs f0, 0x4(r30)
    addi r30, r30, 0x8
    stfs f2, 0x0(r27)
    stfs f2, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x4(r27)
    b lbl_fn_80539874_00001A48
lbl_fn_80539874_00001AC8:
    stw r30, 0x0(r28)
    b lbl_fn_80539874_000016F8
lbl_fn_80539874_00001AD0:
    subf r0, r6, r30
    lwz r3, 0x0(r29)
    srawi r0, r0, 3
    addze r4, r0
    subf r0, r30, r3
    srawi r0, r0, 3
    addze r0, r0
    cmpw r4, r0
    bge lbl_fn_80539874_00001B14
    stw r30, 0x14(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    stw r6, 0x18(r1)
    bl fn_80539CF0
    stw r30, 0x0(r28)
    b lbl_fn_80539874_000016F8
lbl_fn_80539874_00001B14:
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    stw r30, 0x10(r1)
    bl fn_80539CF0
    stw r30, 0x0(r29)
    b lbl_fn_80539874_000016F8
lbl_fn_80539874_00001B34:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
