#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_8000DB1C(void);
extern void fn_8005C594(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80112F54(void);
extern void fn_8032AB90(void);
extern void fn_8032ABA4(void);
extern void fn_8032AC1C(void);
extern void fn_8032BE88(void);
extern void fn_803EB038(void);
extern void fn_803EB338(void);
extern void fn_803EB4A8(void);
extern void fn_803EBA54(void);
extern void fn_8048AF9C(void);
extern void fn_805381E0(void);
extern void fn_8054119C(void);
extern void fn_80541214(void);
extern void fn_80541538(void);
extern void fn_80543064(void);
extern void fn_805A38F4(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 jumptable_807900A0[];
extern u8 lbl_80756340[];
extern u8 lbl_80756380[];
extern u8 lbl_80777728[];
extern u8 lbl_80777788[];
extern u8 lbl_80788D00[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E098;
extern u32 lbl_8087E09C;
extern u32 lbl_8087EE90;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F498;
extern u32 lbl_80886F84;
extern u32 lbl_80886F88;
extern u32 lbl_80886F8C;
extern u32 lbl_80886F90;
extern u32 lbl_80886F98;
extern u32 lbl_80886FB8;
extern u32 lbl_80887038;
extern u32 lbl_8088703C;
extern u32 lbl_80887040;

/* Function declarations */
void fn_80489280(void);
void fn_804895E4(void);
void fn_80489948(void);
void fn_80489A2C(void);
void fn_80489A50(void);
void fn_80489C98(void);
void fn_80489D08(void);
void fn_8048A21C(void);
void fn_8048A23C(void);
void fn_8048A264(void);
void fn_8048A290(void);
void fn_8048A2BC(void);
void fn_8048A350(void);
void fn_8048A3A0(void);
void fn_8048A3A8(void);
void fn_8048A584(void);
void fn_8048A968(void);

asm void fn_80489280(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
lbl_fn_80489280_00000024:
    subf r0, r26, r27
    srawi r0, r0, 3
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_80489280_00000350
    cmpwi r7, 0x14
    bgt lbl_fn_80489280_000000BC
    cmplw r26, r27
    beq lbl_fn_80489280_00000350
    subi r0, r27, 0x8
    b lbl_fn_80489280_000000B0
lbl_fn_80489280_00000050:
    cmplw r26, r27
    mr r5, r26
    beq lbl_fn_80489280_00000084
    addi r6, r26, 0x8
    b lbl_fn_80489280_0000007C
lbl_fn_80489280_00000064:
    lwz r4, 0x4(r6)
    lwz r3, 0x4(r5)
    cmpw r4, r3
    bge lbl_fn_80489280_00000078
    mr r5, r6
lbl_fn_80489280_00000078:
    addi r6, r6, 0x8
lbl_fn_80489280_0000007C:
    cmplw r6, r27
    bne lbl_fn_80489280_00000064
lbl_fn_80489280_00000084:
    cmplw r5, r26
    beq lbl_fn_80489280_000000AC
    lwz r4, 0x0(r5)
    lwz r6, 0x4(r5)
    lwz r3, 0x0(r26)
    stw r3, 0x0(r5)
    lwz r3, 0x4(r26)
    stw r3, 0x4(r5)
    stw r4, 0x0(r26)
    stw r6, 0x4(r26)
lbl_fn_80489280_000000AC:
    addi r26, r26, 0x8
lbl_fn_80489280_000000B0:
    cmplw r26, r0
    bne lbl_fn_80489280_00000050
    b lbl_fn_80489280_00000350
lbl_fn_80489280_000000BC:
    lwz r4, lbl_8087E098
    srawi r0, r7, 2
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
    add r3, r26, r0
    blt lbl_fn_80489280_000000FC
    li r6, -0x4
lbl_fn_80489280_000000FC:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E098
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    slwi r0, r0, 3
    add r4, r26, r0
    blt lbl_fn_80489280_00000148
    li r6, -0x4
    stw r6, lbl_8087E098
lbl_fn_80489280_00000148:
    subi r29, r27, 0x8
    mr r6, r28
    mr r5, r29
    bl fn_80489948
    lwz r3, 0x4(r29)
    mr r30, r26
    mr r5, r29
    b lbl_fn_80489280_0000016C
lbl_fn_80489280_00000168:
    addi r30, r30, 0x8
lbl_fn_80489280_0000016C:
    lwz r0, 0x4(r30)
    cmpw r0, r3
    blt lbl_fn_80489280_00000168
lbl_fn_80489280_00000178:
    subi r5, r5, 0x8
    cmplw r30, r5
    beq lbl_fn_80489280_00000190
    lwz r0, 0x4(r5)
    cmpw r0, r3
    bge lbl_fn_80489280_00000178
lbl_fn_80489280_00000190:
    cmplw r30, r5
    bge lbl_fn_80489280_00000214
    lwz r3, 0x0(r30)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
    b lbl_fn_80489280_000001C4
lbl_fn_80489280_000001C0:
    addi r30, r30, 0x8
lbl_fn_80489280_000001C4:
    lwz r3, 0x4(r29)
    lwz r0, 0x4(r30)
    cmpw r0, r3
    blt lbl_fn_80489280_000001C0
lbl_fn_80489280_000001D4:
    lwz r0, -0x4(r5)
    subi r5, r5, 0x8
    cmpw r0, r3
    bge lbl_fn_80489280_000001D4
    cmplw r30, r5
    bge lbl_fn_80489280_00000214
    lwz r3, 0x0(r30)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
    b lbl_fn_80489280_000001C4
lbl_fn_80489280_00000214:
    cmplw r30, r26
    bne lbl_fn_80489280_00000300
    lwz r3, 0x0(r30)
    subi r5, r27, 0x8
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stw r3, 0x0(r29)
    stw r4, 0x4(r29)
    lwz r3, 0x4(r26)
    lwz r0, -0x4(r27)
    cmpw r3, r0
    blt lbl_fn_80489280_00000298
    b lbl_fn_80489280_0000025C
lbl_fn_80489280_00000258:
    addi r30, r30, 0x8
lbl_fn_80489280_0000025C:
    cmplw r30, r27
    beq lbl_fn_80489280_00000270
    lwz r0, 0x4(r30)
    cmpw r3, r0
    bge lbl_fn_80489280_00000258
lbl_fn_80489280_00000270:
    cmplw r30, r5
    bge lbl_fn_80489280_00000298
    lwz r3, 0x0(r30)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r30)
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
lbl_fn_80489280_00000298:
    cmplw r30, r5
    bge lbl_fn_80489280_000002F8
    b lbl_fn_80489280_000002A8
lbl_fn_80489280_000002A4:
    addi r30, r30, 0x8
lbl_fn_80489280_000002A8:
    lwz r3, 0x4(r26)
    lwz r0, 0x4(r30)
    cmpw r3, r0
    bge lbl_fn_80489280_000002A4
lbl_fn_80489280_000002B8:
    lwz r0, -0x4(r5)
    subi r5, r5, 0x8
    cmpw r3, r0
    blt lbl_fn_80489280_000002B8
    cmplw r30, r5
    bge lbl_fn_80489280_000002F8
    lwz r3, 0x0(r30)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
    b lbl_fn_80489280_000002A8
lbl_fn_80489280_000002F8:
    mr r26, r30
    b lbl_fn_80489280_00000024
lbl_fn_80489280_00000300:
    subf r3, r26, r30
    subf r0, r30, r27
    srawi r3, r3, 3
    addze r3, r3
    srawi r0, r0, 3
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_80489280_00000338
    mr r3, r26
    mr r4, r30
    mr r5, r28
    bl fn_804895E4
    mr r26, r30
    b lbl_fn_80489280_00000024
lbl_fn_80489280_00000338:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_804895E4
    mr r27, r30
    b lbl_fn_80489280_00000024
lbl_fn_80489280_00000350:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804895E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
lbl_fn_804895E4_00000388:
    subf r0, r26, r27
    srawi r0, r0, 3
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_804895E4_000006B4
    cmpwi r7, 0x14
    bgt lbl_fn_804895E4_00000420
    cmplw r26, r27
    beq lbl_fn_804895E4_000006B4
    subi r0, r27, 0x8
    b lbl_fn_804895E4_00000414
lbl_fn_804895E4_000003B4:
    cmplw r26, r27
    mr r5, r26
    beq lbl_fn_804895E4_000003E8
    addi r6, r26, 0x8
    b lbl_fn_804895E4_000003E0
lbl_fn_804895E4_000003C8:
    lwz r4, 0x4(r6)
    lwz r3, 0x4(r5)
    cmpw r4, r3
    bge lbl_fn_804895E4_000003DC
    mr r5, r6
lbl_fn_804895E4_000003DC:
    addi r6, r6, 0x8
lbl_fn_804895E4_000003E0:
    cmplw r6, r27
    bne lbl_fn_804895E4_000003C8
lbl_fn_804895E4_000003E8:
    cmplw r5, r26
    beq lbl_fn_804895E4_00000410
    lwz r4, 0x0(r5)
    lwz r6, 0x4(r5)
    lwz r3, 0x0(r26)
    stw r3, 0x0(r5)
    lwz r3, 0x4(r26)
    stw r3, 0x4(r5)
    stw r4, 0x0(r26)
    stw r6, 0x4(r26)
lbl_fn_804895E4_00000410:
    addi r26, r26, 0x8
lbl_fn_804895E4_00000414:
    cmplw r26, r0
    bne lbl_fn_804895E4_000003B4
    b lbl_fn_804895E4_000006B4
lbl_fn_804895E4_00000420:
    lwz r4, lbl_8087E09C
    srawi r0, r7, 2
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
    add r3, r26, r0
    blt lbl_fn_804895E4_00000460
    li r6, -0x4
lbl_fn_804895E4_00000460:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087E09C
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    slwi r0, r0, 3
    add r4, r26, r0
    blt lbl_fn_804895E4_000004AC
    li r6, -0x4
    stw r6, lbl_8087E09C
lbl_fn_804895E4_000004AC:
    subi r29, r27, 0x8
    mr r6, r28
    mr r5, r29
    bl fn_80489948
    lwz r3, 0x4(r29)
    mr r30, r26
    mr r5, r29
    b lbl_fn_804895E4_000004D0
lbl_fn_804895E4_000004CC:
    addi r30, r30, 0x8
lbl_fn_804895E4_000004D0:
    lwz r0, 0x4(r30)
    cmpw r0, r3
    blt lbl_fn_804895E4_000004CC
lbl_fn_804895E4_000004DC:
    subi r5, r5, 0x8
    cmplw r30, r5
    beq lbl_fn_804895E4_000004F4
    lwz r0, 0x4(r5)
    cmpw r0, r3
    bge lbl_fn_804895E4_000004DC
lbl_fn_804895E4_000004F4:
    cmplw r30, r5
    bge lbl_fn_804895E4_00000578
    lwz r3, 0x0(r30)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
    b lbl_fn_804895E4_00000528
lbl_fn_804895E4_00000524:
    addi r30, r30, 0x8
lbl_fn_804895E4_00000528:
    lwz r3, 0x4(r29)
    lwz r0, 0x4(r30)
    cmpw r0, r3
    blt lbl_fn_804895E4_00000524
lbl_fn_804895E4_00000538:
    lwz r0, -0x4(r5)
    subi r5, r5, 0x8
    cmpw r0, r3
    bge lbl_fn_804895E4_00000538
    cmplw r30, r5
    bge lbl_fn_804895E4_00000578
    lwz r3, 0x0(r30)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
    b lbl_fn_804895E4_00000528
lbl_fn_804895E4_00000578:
    cmplw r30, r26
    bne lbl_fn_804895E4_00000664
    lwz r3, 0x0(r30)
    subi r5, r27, 0x8
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stw r3, 0x0(r29)
    stw r4, 0x4(r29)
    lwz r3, 0x4(r26)
    lwz r0, -0x4(r27)
    cmpw r3, r0
    blt lbl_fn_804895E4_000005FC
    b lbl_fn_804895E4_000005C0
lbl_fn_804895E4_000005BC:
    addi r30, r30, 0x8
lbl_fn_804895E4_000005C0:
    cmplw r30, r27
    beq lbl_fn_804895E4_000005D4
    lwz r0, 0x4(r30)
    cmpw r3, r0
    bge lbl_fn_804895E4_000005BC
lbl_fn_804895E4_000005D4:
    cmplw r30, r5
    bge lbl_fn_804895E4_000005FC
    lwz r3, 0x0(r30)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r30)
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
lbl_fn_804895E4_000005FC:
    cmplw r30, r5
    bge lbl_fn_804895E4_0000065C
    b lbl_fn_804895E4_0000060C
lbl_fn_804895E4_00000608:
    addi r30, r30, 0x8
lbl_fn_804895E4_0000060C:
    lwz r3, 0x4(r26)
    lwz r0, 0x4(r30)
    cmpw r3, r0
    bge lbl_fn_804895E4_00000608
lbl_fn_804895E4_0000061C:
    lwz r0, -0x4(r5)
    subi r5, r5, 0x8
    cmpw r3, r0
    blt lbl_fn_804895E4_0000061C
    cmplw r30, r5
    bge lbl_fn_804895E4_0000065C
    lwz r3, 0x0(r30)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r30)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r30)
    addi r30, r30, 0x8
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
    b lbl_fn_804895E4_0000060C
lbl_fn_804895E4_0000065C:
    mr r26, r30
    b lbl_fn_804895E4_00000388
lbl_fn_804895E4_00000664:
    subf r3, r26, r30
    subf r0, r30, r27
    srawi r3, r3, 3
    addze r3, r3
    srawi r0, r0, 3
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_804895E4_0000069C
    mr r3, r26
    mr r4, r30
    mr r5, r28
    bl fn_804895E4
    mr r26, r30
    b lbl_fn_804895E4_00000388
lbl_fn_804895E4_0000069C:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_804895E4
    mr r27, r30
    b lbl_fn_804895E4_00000388
lbl_fn_804895E4_000006B4:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80489948(void)
{
    nofralloc
    lwz r9, 0x4(r5)
    lwz r10, 0x4(r3)
    srawi r7, r9, 31
    lwz r11, 0x4(r4)
    srwi r6, r10, 31
    subfc r0, r10, r9
    adde. r8, r7, r6
    srwi r6, r9, 31
    srawi r7, r11, 31
    subfc r0, r9, r11
    adde r0, r7, r6
    beq lbl_fn_80489948_00000700
    cmpwi r0, 0x0
    bnelr
lbl_fn_80489948_00000700:
    cmpwi r8, 0x0
    bne lbl_fn_80489948_00000734
    cmpwi r0, 0x0
    bne lbl_fn_80489948_00000734
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r6, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r4)
    stw r6, 0x4(r4)
    blr
lbl_fn_80489948_00000734:
    cmpw r11, r10
    bge lbl_fn_80489948_0000075C
    lwz r6, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r7, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    stw r6, 0x0(r4)
    stw r7, 0x4(r4)
lbl_fn_80489948_0000075C:
    cmpwi r8, 0x0
    beq lbl_fn_80489948_00000788
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    stw r3, 0x0(r5)
    stw r6, 0x4(r5)
    blr
lbl_fn_80489948_00000788:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lwz r6, 0x4(r3)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r3)
    stw r4, 0x0(r5)
    stw r6, 0x4(r5)
    blr
}

asm void fn_80489A2C(void)
{
    nofralloc
    li r0, -0x1
    stw r0, 0x2378(r3)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beqlr
    li r4, 0x0
    li r5, 0x1
    b fn_803EB4A8
    blr
}

asm void fn_80489A50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r5
    lwz r6, lbl_8087F0A8
    lwz r0, 0x178(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80489A50_000009FC
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_80489A50_000009FC
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80489A50_00000820
    b lbl_fn_80489A50_000009FC
lbl_fn_80489A50_00000820:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80489A50_0000084C
    bl fn_803EB338
    cmpwi r3, 0x0
    bne lbl_fn_80489A50_000009FC
    lwz r3, lbl_8087F498
    bl fn_803EBA54
    cmpwi r3, 0x0
    bne lbl_fn_80489A50_0000084C
    b lbl_fn_80489A50_000009FC
lbl_fn_80489A50_0000084C:
    lwz r0, 0x70(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80489A50_000009FC
    cmpwi r30, 0x0
    li r3, 0x0
    bne lbl_fn_80489A50_000008A0
    lwz r4, 0x2378(r31)
    cmpwi r4, 0x0
    bge lbl_fn_80489A50_0000087C
    lwz r0, 0x237c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80489A50_00000904
lbl_fn_80489A50_0000087C:
    addic. r4, r4, 0x1
    blt lbl_fn_80489A50_00000904
    lwz r0, 0x1f74(r31)
    cmpw r4, r0
    bge lbl_fn_80489A50_00000904
    slwi r0, r4, 3
    add r3, r31, r0
    lwz r3, 0x1f78(r3)
    b lbl_fn_80489A50_00000904
lbl_fn_80489A50_000008A0:
    lwz r0, 0x1f74(r31)
    addi r4, r31, 0x1f78
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80489A50_00000904
lbl_fn_80489A50_000008B8:
    lwz r0, 0x0(r4)
    cmplw r30, r0
    bne lbl_fn_80489A50_000008F8
    cmpwi r29, 0x0
    bne lbl_fn_80489A50_000008D0
    stw r5, 0x2378(r31)
lbl_fn_80489A50_000008D0:
    lwz r4, 0x2378(r31)
    addic. r4, r4, 0x1
    blt lbl_fn_80489A50_00000904
    lwz r0, 0x1f74(r31)
    cmpw r4, r0
    bge lbl_fn_80489A50_00000904
    slwi r0, r4, 3
    add r3, r31, r0
    lwz r3, 0x1f78(r3)
    b lbl_fn_80489A50_00000904
lbl_fn_80489A50_000008F8:
    addi r4, r4, 0x8
    addi r5, r5, 0x1
    bdnz lbl_fn_80489A50_000008B8
lbl_fn_80489A50_00000904:
    cmpwi r3, 0x0
    beq lbl_fn_80489A50_000009FC
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80489A50_00000920
    lwz r4, 0x2c(r3)
    b lbl_fn_80489A50_00000924
lbl_fn_80489A50_00000920:
    li r4, 0x0
lbl_fn_80489A50_00000924:
    lwz r29, 0x4(r4)
    bl fn_805381E0
    lwz r0, 0x118(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80489A50_00000960
lbl_fn_80489A50_00000940:
    lwz r0, 0x114(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r29, r0
    bne lbl_fn_80489A50_00000958
    b lbl_fn_80489A50_00000964
lbl_fn_80489A50_00000958:
    addi r4, r4, 0x18
    bdnz lbl_fn_80489A50_00000940
lbl_fn_80489A50_00000960:
    li r30, 0x0
lbl_fn_80489A50_00000964:
    cmpwi r30, 0x0
    beq lbl_fn_80489A50_000009FC
    lwz r0, 0x8(r30)
    srwi. r0, r0, 31
    bne lbl_fn_80489A50_00000980
    addi r3, r30, 0x9
    b lbl_fn_80489A50_00000984
lbl_fn_80489A50_00000980:
    lwz r3, 0x10(r30)
lbl_fn_80489A50_00000984:
    li r4, 0x8
    li r5, 0x0
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_80489A50_000009FC
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80489A50_000009FC
    bl fn_803EB338
    cmpwi r3, 0x0
    bne lbl_fn_80489A50_000009FC
    lwz r0, 0x8(r30)
    lwz r3, lbl_8087F498
    srwi. r0, r0, 31
    bne lbl_fn_80489A50_000009C8
    addi r4, r30, 0x9
    b lbl_fn_80489A50_000009CC
lbl_fn_80489A50_000009C8:
    lwz r4, 0x10(r30)
lbl_fn_80489A50_000009CC:
    li r5, 0x0
    bl fn_803EB038
    cmpwi r3, 0x0
    beq lbl_fn_80489A50_000009FC
    lwz r0, 0x237c(r31)
    lwz r3, 0x2378(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x2378(r31)
    bne lbl_fn_80489A50_000009FC
    li r0, 0x1
    stw r0, 0x237c(r31)
lbl_fn_80489A50_000009FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80489C98(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, 0x70(r3)
    stw r0, 0x2390(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80489C98_00000A70
    mr r3, r30
    bl fn_80541214
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80489C98_00000A70
    mr r3, r30
    mr r4, r31
    bl fn_8054119C
    lwz r5, 0x2c(r31)
    mr r4, r3
    mr r3, r30
    bl fn_80541538
lbl_fn_80489C98_00000A70:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80489D08(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80489D08_00000AD8
    mr r3, r0
    li r4, 0x1
    bl fn_8005C594
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_80489D08_00000AD8:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000AF4
    li r4, 0x1
    bl fn_8005C594
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_80489D08_00000AF4:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000B10
    li r4, 0x1
    bl fn_8048AF9C
    li r0, 0x0
    stw r0, 0xc(r30)
lbl_fn_80489D08_00000B10:
    cmplwi r31, 0x7
    bgt lbl_fn_80489D08_00000DF8
    lis r3, jumptable_807900A0@ha
    slwi r0, r31, 2
    addi r3, r3, jumptable_807900A0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r5, lbl_80756380@ha
    li r3, 0x10
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000B60
    lfs f1, lbl_80886F90
    bl fn_8048A21C
lbl_fn_80489D08_00000B60:
    stw r3, 0x4(r30)
    b lbl_fn_80489D08_00000E30
    lis r5, lbl_80756380@ha
    li r3, 0x18
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000BA0
    lfs f1, lbl_80886F90
    lfs f2, lbl_80887038
    lfs f3, lbl_80886F8C
    bl fn_8048A23C
lbl_fn_80489D08_00000BA0:
    stw r3, 0x4(r30)
    b lbl_fn_80489D08_00000E30
    lis r5, lbl_80756380@ha
    li r3, 0x18
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000BE0
    lfs f1, lbl_80886F90
    lfs f2, lbl_80887038
    lfs f3, lbl_80886F8C
    bl fn_8048A23C
lbl_fn_80489D08_00000BE0:
    lis r4, lbl_80756380@ha
    stw r3, 0x4(r30)
    addi r4, r4, lbl_80756380@l
    li r3, 0x10
    addi r5, r4, 0x1c7
    li r7, 0x0
    li r4, 0x1
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000C14
    lfs f1, lbl_80886F98
    bl fn_8048A21C
lbl_fn_80489D08_00000C14:
    stw r3, 0x8(r30)
    b lbl_fn_80489D08_00000E30
    lis r5, lbl_80756380@ha
    li r3, 0x18
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000C54
    lfs f2, lbl_80887038
    lfs f1, lbl_80886F90
    fmr f3, f2
    bl fn_8048A23C
lbl_fn_80489D08_00000C54:
    lis r4, lbl_80756380@ha
    stw r3, 0x4(r30)
    addi r4, r4, lbl_80756380@l
    li r3, 0x10
    addi r5, r4, 0x1c7
    li r7, 0x0
    li r4, 0x1
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000C88
    lfs f1, lbl_80886FB8
    bl fn_8048A21C
lbl_fn_80489D08_00000C88:
    stw r3, 0x8(r30)
    b lbl_fn_80489D08_00000E30
    lis r5, lbl_80756380@ha
    li r3, 0x18
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000CC8
    lfs f1, lbl_80886F90
    lfs f2, lbl_80886F84
    lfs f3, lbl_80886F8C
    bl fn_8048A23C
lbl_fn_80489D08_00000CC8:
    stw r3, 0x4(r30)
    b lbl_fn_80489D08_00000E30
    lis r5, lbl_80756380@ha
    li r3, 0x18
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000D08
    lfs f2, lbl_80886F84
    lfs f1, lbl_80886F90
    fmr f3, f2
    bl fn_8048A23C
lbl_fn_80489D08_00000D08:
    stw r3, 0x4(r30)
    b lbl_fn_80489D08_00000E30
    lis r5, lbl_80756380@ha
    li r3, 0x18
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000D48
    lfs f1, lbl_80886F90
    lfs f2, lbl_80887038
    lfs f3, lbl_80886F88
    bl fn_8048A23C
lbl_fn_80489D08_00000D48:
    lis r4, lbl_80756380@ha
    stw r3, 0x4(r30)
    addi r4, r4, lbl_80756380@l
    li r3, 0x10
    addi r5, r4, 0x1c7
    li r7, 0x0
    li r4, 0x1
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000D7C
    lfs f1, lbl_80886F90
    bl fn_8048A21C
lbl_fn_80489D08_00000D7C:
    stw r3, 0x8(r30)
    b lbl_fn_80489D08_00000E30
    lis r5, lbl_80756380@ha
    li r3, 0x18
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000DBC
    lfs f1, lbl_80886F90
    lfs f2, lbl_80887038
    lfs f3, lbl_80886F84
    bl fn_8048A23C
lbl_fn_80489D08_00000DBC:
    lis r4, lbl_80756380@ha
    stw r3, 0x4(r30)
    addi r4, r4, lbl_80756380@l
    li r3, 0x10
    addi r5, r4, 0x1c7
    li r7, 0x0
    li r4, 0x1
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000DF0
    lfs f1, lbl_80886F90
    bl fn_8048A21C
lbl_fn_80489D08_00000DF0:
    stw r3, 0x8(r30)
    b lbl_fn_80489D08_00000E30
lbl_fn_80489D08_00000DF8:
    cmpwi r31, 0x8
    blt lbl_fn_80489D08_00000E30
    lis r5, lbl_80756380@ha
    li r3, 0x20
    addi r5, r5, lbl_80756380@l
    li r4, 0x1
    addi r5, r5, 0x1c7
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000E2C
    bl fn_8048A264
lbl_fn_80489D08_00000E2C:
    stw r3, 0xc(r30)
lbl_fn_80489D08_00000E30:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000EDC
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80489D08_00000EB0
    lfs f1, lbl_80886F8C
    lfs f2, lbl_80886F90
    bl fn_8048A2BC
    fmr f30, f1
    lwz r3, 0x8(r30)
    lfs f1, lbl_80886F8C
    lfs f2, lbl_80886F90
    bl fn_8048A2BC
    fadds f2, f30, f1
    lwz r3, 0x4(r30)
    lfs f0, lbl_80886F90
    fmr f31, f1
    lwz r12, 0x8(r3)
    fdivs f1, f0, f2
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    fadds f1, f30, f31
    lfs f0, lbl_80886F90
    lwz r3, 0x8(r30)
    fdivs f1, f0, f1
    lwz r12, 0x8(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    b lbl_fn_80489D08_00000F70
lbl_fn_80489D08_00000EB0:
    lfs f1, lbl_80886F8C
    lfs f2, lbl_80886F90
    bl fn_8048A2BC
    lfs f0, lbl_80886F90
    lwz r3, 0x4(r30)
    fdivs f1, f0, f1
    lwz r12, 0x8(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    b lbl_fn_80489D08_00000F70
lbl_fn_80489D08_00000EDC:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80489D08_00000F70
    bl fn_8000DB1C
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000F70
    bl fn_8000DB1C
    bl fn_80112F54
    cmpwi r3, 0x0
    beq lbl_fn_80489D08_00000F70
    subi r4, r31, 0x8
    bl fn_80543064
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80489D08_00000F70
    addi r3, r1, 0x14
    bl fn_8032AB90
    li r29, 0x0
    b lbl_fn_80489D08_00000F48
lbl_fn_80489D08_00000F28:
    mr r4, r31
    mr r5, r29
    addi r3, r1, 0x8
    bl fn_8048A350
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8032AC1C
    addi r29, r29, 0x1
lbl_fn_80489D08_00000F48:
    mr r3, r31
    bl fn_8048A3A0
    cmpw r29, r3
    blt lbl_fn_80489D08_00000F28
    lwz r3, 0xc(r30)
    addi r4, r1, 0x14
    bl fn_8048A3A8
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_8032ABA4
lbl_fn_80489D08_00000F70:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8048A21C(void)
{
    nofralloc
    lis r4, lbl_80777728@ha
    li r0, 0x0
    addi r4, r4, lbl_80777728@l
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f1, 0xc(r3)
    blr
}

asm void fn_8048A23C(void)
{
    nofralloc
    lis r4, lbl_80777788@ha
    li r0, 0x0
    addi r4, r4, lbl_80777788@l
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f2, 0x10(r3)
    stfs f3, 0x14(r3)
    blr
}

asm void fn_8048A264(void)
{
    nofralloc
    lfs f0, lbl_80886F8C
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x8(r3)
    stw r0, 0x10(r3)
    stw r0, 0x18(r3)
    stw r0, 0x4(r3)
    stfs f0, 0xc(r3)
    stw r0, 0x14(r3)
    stw r0, 0x1c(r3)
    blr
}

asm void fn_8048A290(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r5, 0x0
    lfs f0, lbl_80886F8C
    subf r4, r0, r0
    lwz r6, 0x14(r3)
    stw r4, 0x4(r3)
    subf r0, r6, r6
    stfs f0, 0xc(r3)
    stw r0, 0x14(r3)
    stw r5, 0x1c(r3)
    blr
}

asm void fn_8048A2BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    fmr f30, f2
    stw r31, 0xc(r1)
    lwz r12, 0x8(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r12, 0x8(r3)
    fmr f1, f31
    mr r31, r3
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x8(r31)
    fmr f31, f1
    fmr f1, f30
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    fsubs f1, f1, f31
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8048A350(void)
{
    nofralloc
    cmpwi r5, 0x0
    blt lbl_fn_8048A350_00001104
    lwz r0, 0x4(r4)
    cmpw r5, r0
    bge lbl_fn_8048A350_00001104
    mulli r0, r5, 0xc
    lwz r4, 0x0(r4)
    add r4, r4, r0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_8048A350_00001104:
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_8048A3A0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8048A3A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r29, 0x4(r4)
    stw r28, 0x10(r1)
    lwz r28, 0x0(r4)
    bl fn_8048A290
    mr r3, r31
    mr r4, r29
    bl fn_8048A584
    cmpwi r29, 0x0
    li r3, 0x0
    ble lbl_fn_8048A3A8_0000122C
    srwi. r0, r29, 2
    mtctr r0
    beq lbl_fn_8048A3A8_00001204
lbl_fn_8048A3A8_00001178:
    add r4, r28, r3
    lwz r0, 0x0(r31)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r28, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x0(r31)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r28, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x0(r31)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    add r4, r28, r3
    stfs f2, 0x8(r5)
    lwz r0, 0x0(r31)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    stfs f2, 0x8(r5)
    bdnz lbl_fn_8048A3A8_00001178
    andi. r29, r29, 0x3
    beq lbl_fn_8048A3A8_0000122C
lbl_fn_8048A3A8_00001204:
    mtctr r29
lbl_fn_8048A3A8_00001208:
    add r4, r28, r3
    lwz r0, 0x0(r31)
    lfs f2, 0x8(r4)
    add r5, r0, r3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0xc
    stfs f2, 0x8(r5)
    bdnz lbl_fn_8048A3A8_00001208
lbl_fn_8048A3A8_0000122C:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x4
    bge lbl_fn_8048A3A8_00001240
    li r0, 0x0
    b lbl_fn_8048A3A8_00001268
lbl_fn_8048A3A8_00001240:
    lis r3, 0x5555
    subi r4, r4, 0x1
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_8048A3A8_00001268:
    cmpwi r0, 0x0
    beq lbl_fn_8048A3A8_000012E4
    lwz r4, 0x4(r31)
    lis r3, 0xaaab
    lfs f0, lbl_80886F8C
    subi r3, r3, 0x5555
    subi r0, r4, 0x1
    stfs f0, 0xc(r31)
    mulhwu r0, r3, r0
    addi r3, r31, 0x10
    srwi r4, r0, 1
    stw r4, 0x1c(r31)
    bl fn_8032BE88
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8048A3A8_000012D8
lbl_fn_8048A3A8_000012A8:
    lwz r29, 0x10(r31)
    mr r3, r31
    mr r4, r28
    bl fn_8048A968
    stfsx f1, r29, r30
    addi r28, r28, 0x1
    lwz r3, 0x10(r31)
    lfs f3, 0xc(r31)
    lfsx f0, r3, r30
    addi r30, r30, 0x4
    fadds f0, f3, f0
    stfs f0, 0xc(r31)
lbl_fn_8048A3A8_000012D8:
    lwz r0, 0x1c(r31)
    cmpw r28, r0
    blt lbl_fn_8048A3A8_000012A8
lbl_fn_8048A3A8_000012E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8048A584(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    stw r28, 0x50(r1)
    lwz r5, 0x4(r3)
    cmplw r4, r5
    ble lbl_fn_8048A584_000016B8
    lwz r6, 0x8(r3)
    subf r30, r5, r4
    cmplw r30, r6
    bgt lbl_fn_8048A584_0000134C
    subf r0, r30, r6
    cmplw r5, r0
    ble lbl_fn_8048A584_000013F4
lbl_fn_8048A584_0000134C:
    lwz r5, 0x4(r3)
    lis r4, 0x1555
    addi r0, r4, 0x5555
    add r4, r5, r30
    subf r31, r6, r4
    stw r31, 0x8(r1)
    lwz r28, 0x8(r3)
    subf r0, r28, r0
    cmplw r31, r0
    ble lbl_fn_8048A584_00001398
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048A584_00001398:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r28, r0
    bge lbl_fn_8048A584_000013D0
    addi r4, r28, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x10(r1)
    cmplw r0, r31
    b lbl_fn_8048A584_00001440
lbl_fn_8048A584_000013D0:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r28, r0
    bge lbl_fn_8048A584_00001440
    addi r0, r28, 0x1
    srwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplw r0, r31
    b lbl_fn_8048A584_00001440
lbl_fn_8048A584_000013F4:
    mulli r0, r5, 0xc
    lwz r4, 0x0(r3)
    addi r5, r1, 0x20
    add r6, r4, r0
    mtctr r30
    cmpwi r30, 0x0
    beq lbl_fn_8048A584_000016C8
lbl_fn_8048A584_00001410:
    cmpwi r6, 0x0
    beq lbl_fn_8048A584_00001428
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x8(r6)
lbl_fn_8048A584_00001428:
    lwz r4, 0x4(r3)
    addi r6, r6, 0xc
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    bdnz lbl_fn_8048A584_00001410
    b lbl_fn_8048A584_000016C8
lbl_fn_8048A584_00001440:
    li r4, 0x0
    addi r5, r29, 0x8
    lis r3, 0x1555
    stw r4, 0x38(r1)
    addi r0, r3, 0x5555
    stw r4, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    add r3, r3, r30
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x1c(r1)
    ble lbl_fn_8048A584_000014A8
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048A584_000014A8:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_8048A584_000014F8
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_8048A584_000014EC
    addi r3, r1, 0x1c
lbl_fn_8048A584_000014EC:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8048A584_0000153C
lbl_fn_8048A584_000014F8:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_8048A584_00001534
    addi r3, r31, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_8048A584_00001528
    addi r3, r1, 0x1c
lbl_fn_8048A584_00001528:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8048A584_0000153C
lbl_fn_8048A584_00001534:
    lis r3, 0x1555
    addi r31, r3, 0x5555
lbl_fn_8048A584_0000153C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    ble lbl_fn_8048A584_00001570
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048A584_00001570:
    mulli r3, r31, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8048A584_000015A4
    lis r3, __files@ha
    lis r4, lbl_80788D00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8048A584_000015A4:
    lwz r0, 0x3c(r1)
    addi r5, r1, 0x2c
    stw r28, 0x38(r1)
    mulli r3, r0, 0xc
    stw r31, 0x40(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x48(r1)
    mulli r0, r0, 0xc
    add r0, r28, r0
    add r4, r3, r0
    mtctr r30
    cmpwi r30, 0x0
    beq lbl_fn_8048A584_00001604
lbl_fn_8048A584_000015D8:
    cmpwi r4, 0x0
    beq lbl_fn_8048A584_000015F0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x34(r1)
    stfs f2, 0x8(r4)
lbl_fn_8048A584_000015F0:
    lwz r3, 0x3c(r1)
    addi r4, r4, 0xc
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
    bdnz lbl_fn_8048A584_000015D8
lbl_fn_8048A584_00001604:
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r1)
    mulli r4, r3, 0xc
    lwz r7, 0x0(r29)
    lwz r3, 0x38(r1)
    mulli r0, r0, 0xc
    add r6, r7, r4
    add r5, r3, r0
    b lbl_fn_8048A584_0000165C
lbl_fn_8048A584_00001628:
    subic. r5, r5, 0xc
    subi r6, r6, 0xc
    beq lbl_fn_8048A584_00001644
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
lbl_fn_8048A584_00001644:
    lwz r4, 0x48(r1)
    lwz r3, 0x3c(r1)
    subi r0, r4, 0x1
    stw r0, 0x48(r1)
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
lbl_fn_8048A584_0000165C:
    cmplw r7, r6
    blt lbl_fn_8048A584_00001628
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x38
    lwz r3, 0x8(r29)
    lwz r0, 0x40(r1)
    stw r0, 0x8(r29)
    stw r3, 0x40(r1)
    lwz r0, 0x38(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r29)
    stw r4, 0x3c(r1)
    beq lbl_fn_8048A584_000016C8
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8048A584_000016C8
    stw r4, 0x3c(r1)
    bl dtor_80084684
    b lbl_fn_8048A584_000016C8
lbl_fn_8048A584_000016B8:
    bge lbl_fn_8048A584_000016C8
    subf r0, r4, r5
    subf r0, r0, r5
    stw r0, 0x4(r3)
lbl_fn_8048A584_000016C8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8048A968(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    addi r11, r1, 0x230
    stfd f31, 0x340(r1)
    psq_st f31, 0x348(r1), 0, 0
    stfd f30, 0x330(r1)
    psq_st f30, 0x338(r1), 0, 0
    stfd f29, 0x320(r1)
    psq_st f29, 0x328(r1), 0, 0
    stfd f28, 0x310(r1)
    psq_st f28, 0x318(r1), 0, 0
    stfd f27, 0x300(r1)
    psq_st f27, 0x308(r1), 0, 0
    stfd f26, 0x2f0(r1)
    psq_st f26, 0x2f8(r1), 0, 0
    stfd f25, 0x2e0(r1)
    psq_st f25, 0x2e8(r1), 0, 0
    stfd f24, 0x2d0(r1)
    psq_st f24, 0x2d8(r1), 0, 0
    stfd f23, 0x2c0(r1)
    psq_st f23, 0x2c8(r1), 0, 0
    stfd f22, 0x2b0(r1)
    psq_st f22, 0x2b8(r1), 0, 0
    stfd f21, 0x2a0(r1)
    psq_st f21, 0x2a8(r1), 0, 0
    stfd f20, 0x290(r1)
    psq_st f20, 0x298(r1), 0, 0
    stfd f19, 0x280(r1)
    psq_st f19, 0x288(r1), 0, 0
    stfd f18, 0x270(r1)
    psq_st f18, 0x278(r1), 0, 0
    stfd f17, 0x260(r1)
    psq_st f17, 0x268(r1), 0, 0
    stfd f16, 0x250(r1)
    psq_st f16, 0x258(r1), 0, 0
    stfd f15, 0x240(r1)
    psq_st f15, 0x248(r1), 0, 0
    stfd f14, 0x230(r1)
    psq_st f14, 0x238(r1), 0, 0
    bl _savegpr_21
    slwi r0, r4, 2
    lwz r5, 0x0(r3)
    subf r6, r4, r0
    mr r30, r3
    addi r0, r6, 0x3
    lfs f31, lbl_80886F8C
    mulli r25, r0, 0xc
    lfs f29, lbl_80886F90
    addi r0, r6, 0x2
    lfs f30, lbl_8088703C
    fsubs f17, f29, f31
    addi r3, r1, 0x1b8
    add r4, r5, r25
    lfs f0, 0x8(r4)
    mulli r26, r0, 0xc
    lfs f3, 0x4(r4)
    fmuls f8, f0, f31
    lfsx f0, r5, r25
    add r4, r5, r26
    fmuls f7, f3, f31
    fmuls f6, f0, f31
    lfs f0, 0x4(r4)
    fmuls f12, f0, f30
    lfs f3, 0x8(r4)
    lfsx f0, r5, r26
    fmuls f5, f8, f31
    fmuls f13, f3, f30
    stfs f6, 0x1a0(r1)
    fmuls f3, f6, f31
    stfs f7, 0x1a4(r1)
    fmuls f10, f0, f30
    fmuls f4, f7, f31
    stfs f8, 0x1a8(r1)
    fmuls f9, f13, f31
    fmuls f6, f12, f31
    stfs f3, 0x194(r1)
    fmuls f0, f10, f31
    fmuls f14, f5, f31
    stfs f4, 0x198(r1)
    fmuls f27, f4, f31
    fmuls f26, f3, f31
    stfs f5, 0x19c(r1)
    fmuls f8, f9, f31
    fmuls f7, f6, f31
    stfs f26, 0x188(r1)
    fmuls f11, f0, f31
    stfs f27, 0x18c(r1)
    stfs f14, 0x190(r1)
    stfs f10, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f13, 0x184(r1)
    stfs f0, 0x170(r1)
    stfs f6, 0x174(r1)
    stfs f9, 0x178(r1)
    addi r0, r6, 0x1
    fmuls f28, f7, f17
    mulli r27, r0, 0xc
    fmuls f4, f11, f17
    fmuls f5, f8, f17
    stfs f11, 0x164(r1)
    addi r4, r1, 0xe0
    add r7, r5, r27
    lfs f0, 0x8(r7)
    mulli r28, r6, 0xc
    lfsx f6, r5, r27
    addi r24, r1, 0x1d0
    fmuls f0, f0, f30
    lfs f3, 0x4(r7)
    add r5, r5, r28
    lfs f9, 0x8(r5)
    fmuls f3, f3, f30
    fmuls f16, f0, f31
    fmuls f25, f9, f17
    lfs f10, 0x4(r5)
    fmuls f6, f6, f30
    lfs f9, 0x0(r5)
    fmuls f12, f16, f17
    fmuls f22, f25, f17
    fmuls f23, f9, f17
    stfs f7, 0x168(r1)
    fmuls f15, f3, f31
    li r31, 0x0
    fmuls f24, f10, f17
    fmuls f13, f6, f31
    fmuls f9, f12, f17
    stfs f8, 0x16c(r1)
    fmuls f19, f22, f17
    fmuls f11, f15, f17
    stfs f3, 0x150(r1)
    fmuls f21, f24, f17
    fmuls f10, f13, f17
    stfs f5, 0x160(r1)
    fmuls f20, f23, f17
    fadds f7, f19, f9
    stfs f6, 0x14c(r1)
    fmuls f8, f11, f17
    stfs f7, 0x1e8(r1)
    fmuls f18, f21, f17
    fmuls f7, f10, f17
    fmuls f17, f20, f17
    lfs f3, 0x1e8(r1)
    fadds f6, f18, f8
    stfs f0, 0x154(r1)
    fadds f3, f3, f5
    fadds f5, f17, f7
    fadds f0, f6, f28
    stfs f4, 0x158(r1)
    fadds f14, f3, f14
    fadds f4, f5, f4
    stfs f13, 0x140(r1)
    fadds f27, f0, f27
    fmr f2, f14
    stfs f5, 0xf8(r1)
    fadds f13, f4, f26
    stfs f2, 0x1c0(r1)
    frsp f2, f2
    lfs f5, 0x1e8(r1)
    stfs f27, 0xe4(r1)
    stfs f13, 0xe0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f28, 0x15c(r1)
    stfs f15, 0x144(r1)
    stfs f16, 0x148(r1)
    stfs f10, 0x134(r1)
    stfs f11, 0x138(r1)
    stfs f12, 0x13c(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f23, 0x11c(r1)
    stfs f24, 0x120(r1)
    stfs f25, 0x124(r1)
    stfs f20, 0x110(r1)
    stfs f21, 0x114(r1)
    stfs f22, 0x118(r1)
    stfs f17, 0x104(r1)
    stfs f18, 0x108(r1)
    stfs f19, 0x10c(r1)
    stfs f6, 0xfc(r1)
    stfs f5, 0x100(r1)
    stfs f4, 0xec(r1)
    stfs f0, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f14, 0xe8(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x1d8(r1)
    lfs f0, lbl_80887040
    lis r3, lbl_80756340@ha
    stfd f0, 0x1f8(r1)
    addi r23, r1, 0x1ac
    lfd f0, lbl_80756340@l(r3)
    addi r22, r1, 0x14
    stfd f0, 0x1f0(r1)
    addi r21, r1, 0x1c4
    lis r29, 0x4330
lbl_fn_8048A968_000019FC:
    lwz r6, 0x0(r30)
    addi r0, r31, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1e4(r1)
    add r4, r6, r26
    add r3, r6, r25
    stw r29, 0x1e0(r1)
    add r5, r6, r27
    lfs f0, 0x8(r4)
    lfd f4, 0x1e0(r1)
    fmuls f6, f0, f30
    lfd f0, 0x1f0(r1)
    lfs f3, 0x4(r4)
    fsubs f4, f4, f0
    lfsx f0, r6, r26
    fmuls f5, f3, f30
    fmuls f10, f0, f30
    lfd f0, 0x1f8(r1)
    lfs f3, 0x8(r5)
    fmuls f8, f4, f0
    lfs f0, 0x8(r3)
    fmuls f7, f3, f30
    lfs f3, 0x4(r3)
    fmuls f9, f0, f8
    lfsx f0, r6, r25
    fmuls f18, f6, f8
    stfs f10, 0xb0(r1)
    fmuls f3, f3, f8
    fmuls f0, f0, f8
    fmuls f4, f9, f8
    stfs f3, 0xd8(r1)
    fmuls f3, f3, f8
    fmuls f17, f5, f8
    stfs f0, 0xd4(r1)
    fmuls f12, f10, f8
    fmuls f0, f0, f8
    stfs f9, 0xdc(r1)
    fmuls f11, f18, f8
    fmuls f10, f17, f8
    stfs f0, 0xc8(r1)
    fmuls f9, f12, f8
    fmuls f14, f4, f8
    stfs f3, 0xcc(r1)
    fmuls f15, f3, f8
    fsubs f13, f29, f8
    stfs f4, 0xd0(r1)
    fmuls f16, f0, f8
    stfs f15, 0xc0(r1)
    fmuls f4, f11, f13
    fmuls f3, f10, f13
    stfs f16, 0xbc(r1)
    fmuls f0, f9, f13
    stfs f14, 0xc4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xb8(r1)
    stfs f12, 0xa4(r1)
    stfs f17, 0xa8(r1)
    stfs f18, 0xac(r1)
    stfs f9, 0x98(r1)
    stfs f10, 0x9c(r1)
    stfs f11, 0xa0(r1)
    stfs f0, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f4, 0x94(r1)
    lfs f9, 0x4(r5)
    add r3, r6, r28
    lfs f6, 0x0(r5)
    fmuls f5, f7, f8
    fmuls f9, f9, f30
    lfs f12, 0x8(r3)
    fmuls f17, f6, f30
    lfs f11, 0x4(r3)
    lfsx f10, r6, r28
    fmuls f21, f12, f13
    fmuls f6, f9, f8
    stfs f17, 0x80(r1)
    fmuls f22, f11, f13
    lfs f18, 0x1d8(r1)
    fmuls f8, f17, f8
    fmuls f23, f10, f13
    fmuls f12, f5, f13
    stfs f9, 0x84(r1)
    fmuls f11, f6, f13
    lfs f19, 0x1d4(r1)
    fmuls f24, f21, f13
    fmuls f25, f22, f13
    fmuls f17, f8, f13
    stfs f8, 0x74(r1)
    fmuls f26, f23, f13
    lfs f20, 0x1d0(r1)
    fmuls f10, f12, f13
    fmuls f27, f24, f13
    fmuls f9, f11, f13
    stfs f7, 0x88(r1)
    fmuls f28, f25, f13
    addi r3, r1, 0x8
    fmuls f8, f17, f13
    fadds f7, f27, f10
    fmuls f13, f26, f13
    stfs f6, 0x78(r1)
    fadds f6, f28, f9
    stfs f5, 0x7c(r1)
    fadds f4, f7, f4
    fadds f5, f13, f8
    fadds f3, f6, f3
    stfs f17, 0x68(r1)
    fadds f17, f4, f14
    fadds f0, f5, f0
    stfs f11, 0x6c(r1)
    fadds f14, f3, f15
    fmr f2, f17
    stfs f12, 0x70(r1)
    fadds f11, f0, f16
    stfs f2, 0x1b4(r1)
    frsp f2, f2
    stfs f11, 0x14(r1)
    stfs f14, 0x18(r1)
    fsubs f11, f2, f18
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    lfs f14, 0x1c8(r1)
    lfs f12, 0x1c4(r1)
    fsubs f14, f14, f19
    stfs f8, 0x5c(r1)
    fsubs f8, f12, f20
    stfs f9, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f23, 0x50(r1)
    stfs f22, 0x54(r1)
    stfs f21, 0x58(r1)
    stfs f26, 0x44(r1)
    stfs f25, 0x48(r1)
    stfs f24, 0x4c(r1)
    stfs f13, 0x38(r1)
    stfs f28, 0x3c(r1)
    stfs f27, 0x40(r1)
    stfs f5, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f17, 0x1c(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x1cc(r1)
    stfs f8, 0x8(r1)
    stfs f14, 0xc(r1)
    stfs f11, 0x10(r1)
    bl fn_805F9940
    addi r31, r31, 0x1
    fadds f31, f31, f1
    psq_l f1, 0x0(r21), 0, 0
    cmpwi r31, 0x40
    lfs f2, 0x1cc(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x1d8(r1)
    blt lbl_fn_8048A968_000019FC
    fmr f1, f31
    psq_l f31, 0x348(r1), 0, 0
    lfd f31, 0x340(r1)
    psq_l f30, 0x338(r1), 0, 0
    lfd f30, 0x330(r1)
    psq_l f29, 0x328(r1), 0, 0
    lfd f29, 0x320(r1)
    psq_l f28, 0x318(r1), 0, 0
    lfd f28, 0x310(r1)
    psq_l f27, 0x308(r1), 0, 0
    lfd f27, 0x300(r1)
    psq_l f26, 0x2f8(r1), 0, 0
    lfd f26, 0x2f0(r1)
    psq_l f25, 0x2e8(r1), 0, 0
    lfd f25, 0x2e0(r1)
    psq_l f24, 0x2d8(r1), 0, 0
    lfd f24, 0x2d0(r1)
    psq_l f23, 0x2c8(r1), 0, 0
    lfd f23, 0x2c0(r1)
    psq_l f22, 0x2b8(r1), 0, 0
    lfd f22, 0x2b0(r1)
    psq_l f21, 0x2a8(r1), 0, 0
    lfd f21, 0x2a0(r1)
    psq_l f20, 0x298(r1), 0, 0
    lfd f20, 0x290(r1)
    psq_l f19, 0x288(r1), 0, 0
    lfd f19, 0x280(r1)
    psq_l f18, 0x278(r1), 0, 0
    lfd f18, 0x270(r1)
    psq_l f17, 0x268(r1), 0, 0
    lfd f17, 0x260(r1)
    psq_l f16, 0x258(r1), 0, 0
    lfd f16, 0x250(r1)
    psq_l f15, 0x248(r1), 0, 0
    lfd f15, 0x240(r1)
    psq_l f14, 0x238(r1), 0, 0
    lfd f14, 0x230(r1)
    addi r11, r1, 0x230
    bl _restgpr_21
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}
