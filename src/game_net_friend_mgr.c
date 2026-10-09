#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006EF48(void);
extern void fn_80084320(void);
extern void fn_800A4450(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_80117228(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F4E8C(void);
extern void fn_801FEC74(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_8020924C(void);
extern void fn_804A3C24(void);
extern void fn_804A53D4(void);
extern void fn_804A5CD8(void);
extern void fn_804AC79C(void);
extern void fn_804AC7EC(void);
extern void fn_804AC96C(void);
extern void fn_804ACAF8(void);
extern void fn_804ACD10(void);
extern void fn_804ACDBC(void);
extern void fn_804AD000(void);
extern void fn_804C54FC(void);
extern void fn_804CEF84(void);
extern void fn_804CF078(void);
extern void fn_804D8250(void);
extern void fn_804D9C18(void);
extern void fn_804EB1B0(void);
extern void fn_804EB874(void);
extern void fn_804FB624(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_807592E0[];
extern u8 lbl_80759374[];
extern u8 lbl_807595E0[];
extern u8 lbl_807595F0[];
extern u8 lbl_80759610[];
extern u8 lbl_80790F30[];
extern u8 lbl_80790F70[];

/* Small data declarations */
extern u32 lbl_8087E140;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F5E8;
extern u32 lbl_8087F5F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_80887548;
extern u32 lbl_8088754C;
extern u32 lbl_80887550;
extern u32 lbl_80887554;
extern u32 lbl_80887558;
extern u32 lbl_8088755C;
extern u32 lbl_80887560;
extern u32 lbl_80887564;
extern u32 lbl_80887568;
extern u32 lbl_8088756C;

/* Function declarations */
void fn_804CD2F8(void);
void fn_804CD94C(void);
void fn_804CD97C(void);
void fn_804CD9E4(void);
void fn_804CDB7C(void);
void fn_804CDBFC(void);
void fn_804CDE1C(void);
void fn_804CE118(void);
void fn_804CE11C(void);
void fn_804CE120(void);
void fn_804CE2EC(void);
void fn_804CE61C(void);
void fn_804CE82C(void);
void fn_804CEAA0(void);
void fn_804CECEC(void);

asm void fn_804CD2F8(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x244(r1)
    stmw r21, 0x214(r1)
    mr r24, r3
    mr r25, r4
    beq lbl_fn_804CD2F8_00000640
    ble lbl_fn_804CD2F8_0000002C
    lwz r28, 0x10c(r3)
    b lbl_fn_804CD2F8_00000030
lbl_fn_804CD2F8_0000002C:
    lwz r28, 0xf0(r3)
lbl_fn_804CD2F8_00000030:
    lwz r0, 0x164(r3)
    lwz r3, lbl_8087F610
    cmpwi r0, 0x0
    addi r7, r3, 0x2a50
    blt lbl_fn_804CD2F8_0000004C
    cmpwi r0, 0x15
    ble lbl_fn_804CD2F8_00000054
lbl_fn_804CD2F8_0000004C:
    li r30, 0x0
    b lbl_fn_804CD2F8_00000100
lbl_fn_804CD2F8_00000054:
    bge lbl_fn_804CD2F8_00000064
    mulli r0, r0, 0xc
    lwzx r30, r7, r0
    b lbl_fn_804CD2F8_00000100
lbl_fn_804CD2F8_00000064:
    lwz r5, 0x0(r7)
    lwz r3, 0xc(r7)
    lwz r0, 0x18(r7)
    add r6, r5, r3
    lwz r3, 0x24(r7)
    add r6, r6, r0
    lwz r0, 0x30(r7)
    add r6, r6, r3
    lwz r5, 0x3c(r7)
    add r6, r6, r0
    lwz r3, 0x48(r7)
    add r6, r6, r5
    lwz r0, 0x54(r7)
    add r6, r6, r3
    lwz r3, 0x60(r7)
    add r6, r6, r0
    lwz r0, 0x6c(r7)
    add r6, r6, r3
    lwz r5, 0x78(r7)
    add r6, r6, r0
    lwz r3, 0x84(r7)
    add r6, r6, r5
    lwz r0, 0x90(r7)
    add r6, r6, r3
    lwz r3, 0x9c(r7)
    add r6, r6, r0
    lwz r0, 0xa8(r7)
    add r6, r6, r3
    lwz r5, 0xb4(r7)
    add r6, r6, r0
    lwz r3, 0xc0(r7)
    add r6, r6, r5
    lwz r0, 0xcc(r7)
    add r6, r6, r3
    lwz r3, 0xd8(r7)
    add r6, r6, r0
    lwz r0, 0xe4(r7)
    add r6, r6, r3
    add r30, r6, r0
lbl_fn_804CD2F8_00000100:
    li r0, 0x40
    addi r5, r1, 0x4
    li r3, 0x0
    mtctr r0
lbl_fn_804CD2F8_00000110:
    stw r3, 0x4(r5)
    stwu r3, 0x8(r5)
    bdnz lbl_fn_804CD2F8_00000110
    cmpwi r4, 0x0
    ble lbl_fn_804CD2F8_000003B4
    lis r23, lbl_807592E0@ha
    li r27, 0x0
    addi r23, r23, lbl_807592E0@l
    li r22, 0x1
    li r31, -0x1
    b lbl_fn_804CD2F8_000003A8
lbl_fn_804CD2F8_0000013C:
    addi r26, r28, 0x1
    lwz r8, 0xf4(r24)
    lwz r7, 0xf8(r24)
    mulli r29, r26, 0x1c
    lwz r6, 0xfc(r24)
    lwz r5, 0x100(r24)
    lwz r4, 0x104(r24)
    lwz r3, 0x108(r24)
    lwz r0, 0x10c(r24)
    stw r8, 0xf0(r24)
    stw r7, 0xf4(r24)
    stw r6, 0xf8(r24)
    stw r5, 0xfc(r24)
    stw r4, 0x100(r24)
    stw r3, 0x104(r24)
    stw r0, 0x108(r24)
    stw r31, 0x10c(r24)
    b lbl_fn_804CD2F8_0000039C
lbl_fn_804CD2F8_00000184:
    lwz r0, 0x164(r24)
    mr r5, r26
    lwz r3, lbl_8087F610
    cmpwi r0, 0x0
    addi r3, r3, 0x2a50
    blt lbl_fn_804CD2F8_000001A4
    cmpwi r0, 0x15
    ble lbl_fn_804CD2F8_000001AC
lbl_fn_804CD2F8_000001A4:
    li r21, 0x0
    b lbl_fn_804CD2F8_000002CC
lbl_fn_804CD2F8_000001AC:
    bge lbl_fn_804CD2F8_000001DC
    cmpwi r26, 0x0
    blt lbl_fn_804CD2F8_000001C8
    mulli r0, r0, 0xc
    lwzux r0, r3, r0
    cmpw r0, r26
    bgt lbl_fn_804CD2F8_000001D0
lbl_fn_804CD2F8_000001C8:
    li r21, 0x0
    b lbl_fn_804CD2F8_000002CC
lbl_fn_804CD2F8_000001D0:
    lwz r0, 0x8(r3)
    add r21, r0, r29
    b lbl_fn_804CD2F8_000002CC
lbl_fn_804CD2F8_000001DC:
    cmpwi r26, 0x0
    bge lbl_fn_804CD2F8_000001EC
    li r21, 0x0
    b lbl_fn_804CD2F8_000002CC
lbl_fn_804CD2F8_000001EC:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CD2F8_00000204
lbl_fn_804CD2F8_000001F8:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CD2F8_00000204:
    cmpwi r4, 0x14
    bge lbl_fn_804CD2F8_00000218
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CD2F8_000001F8
lbl_fn_804CD2F8_00000218:
    cmpwi r4, 0x14
    bge lbl_fn_804CD2F8_000002C8
    cmpwi r4, 0x0
    blt lbl_fn_804CD2F8_00000230
    cmpwi r4, 0x15
    ble lbl_fn_804CD2F8_00000238
lbl_fn_804CD2F8_00000230:
    li r3, 0x0
    b lbl_fn_804CD2F8_000002C0
lbl_fn_804CD2F8_00000238:
    bge lbl_fn_804CD2F8_00000270
    cmpwi r5, 0x0
    blt lbl_fn_804CD2F8_00000258
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CD2F8_00000260
lbl_fn_804CD2F8_00000258:
    li r3, 0x0
    b lbl_fn_804CD2F8_000002C0
lbl_fn_804CD2F8_00000260:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CD2F8_000002C0
lbl_fn_804CD2F8_00000270:
    cmpwi r5, 0x0
    bge lbl_fn_804CD2F8_00000280
    li r3, 0x0
    b lbl_fn_804CD2F8_000002C0
lbl_fn_804CD2F8_00000280:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CD2F8_00000298
lbl_fn_804CD2F8_0000028C:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CD2F8_00000298:
    cmpwi r4, 0x14
    bge lbl_fn_804CD2F8_000002AC
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CD2F8_0000028C
lbl_fn_804CD2F8_000002AC:
    cmpwi r4, 0x14
    bge lbl_fn_804CD2F8_000002BC
    bl fn_804C54FC
    b lbl_fn_804CD2F8_000002C0
lbl_fn_804CD2F8_000002BC:
    li r3, 0x0
lbl_fn_804CD2F8_000002C0:
    mr r21, r3
    b lbl_fn_804CD2F8_000002CC
lbl_fn_804CD2F8_000002C8:
    li r21, 0x0
lbl_fn_804CD2F8_000002CC:
    cmpwi cr1, r21, 0x0
    beq cr1, lbl_fn_804CD2F8_00000394
    lwz r3, 0x4(r21)
    lwz r0, 0x168(r24)
    srwi r3, r3, 8
    slw r0, r22, r0
    and. r0, r3, r0
    beq lbl_fn_804CD2F8_00000394
    beq cr1, lbl_fn_804CD2F8_000002FC
    lwz r3, 0x10(r21)
    cmpwi r3, 0x0
    bne lbl_fn_804CD2F8_00000304
lbl_fn_804CD2F8_000002FC:
    li r0, 0x0
    b lbl_fn_804CD2F8_0000031C
lbl_fn_804CD2F8_00000304:
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_804CD2F8_00000318
    lwz r0, 0x4(r3)
    b lbl_fn_804CD2F8_0000031C
lbl_fn_804CD2F8_00000318:
    la r0, lbl_8087E140
lbl_fn_804CD2F8_0000031C:
    cmpwi r0, 0x0
    bne lbl_fn_804CD2F8_00000370
    lwz r0, 0x8(r21)
    srwi r0, r0, 24
    cmpwi r0, 0x13
    bne lbl_fn_804CD2F8_00000338
    b lbl_fn_804CD2F8_00000388
lbl_fn_804CD2F8_00000338:
    cmpwi r0, 0x0
    blt lbl_fn_804CD2F8_00000388
    cmplwi r0, 0x16
    bge lbl_fn_804CD2F8_00000388
    slwi r0, r0, 2
    lwzx r3, r23, r0
    cmpwi r3, 0x0
    ble lbl_fn_804CD2F8_00000360
    bl fn_8020924C
    b lbl_fn_804CD2F8_00000388
lbl_fn_804CD2F8_00000360:
    lwz r0, lbl_8087F86C
    cmpwi r0, 0x0
    beq lbl_fn_804CD2F8_00000388
    b lbl_fn_804CD2F8_00000388
lbl_fn_804CD2F8_00000370:
    cmpwi r21, 0x0
    beq lbl_fn_804CD2F8_00000388
    lwz r3, 0x10(r21)
    cmpwi r3, 0x0
    beq lbl_fn_804CD2F8_00000388
    bl fn_8020924C
lbl_fn_804CD2F8_00000388:
    stw r26, 0x10c(r24)
    mr r28, r26
    b lbl_fn_804CD2F8_000003A4
lbl_fn_804CD2F8_00000394:
    addi r29, r29, 0x1c
    addi r26, r26, 0x1
lbl_fn_804CD2F8_0000039C:
    cmpw r26, r30
    blt lbl_fn_804CD2F8_00000184
lbl_fn_804CD2F8_000003A4:
    addi r27, r27, 0x1
lbl_fn_804CD2F8_000003A8:
    cmpw r27, r25
    blt lbl_fn_804CD2F8_0000013C
    b lbl_fn_804CD2F8_00000640
lbl_fn_804CD2F8_000003B4:
    lis r25, lbl_807592E0@ha
    neg r26, r4
    addi r25, r25, lbl_807592E0@l
    li r29, 0x1
    li r31, -0x1
    b lbl_fn_804CD2F8_00000638
lbl_fn_804CD2F8_000003CC:
    subi r27, r28, 0x1
    lwz r8, 0x108(r24)
    lwz r7, 0x104(r24)
    mulli r30, r27, 0x1c
    lwz r6, 0x100(r24)
    lwz r5, 0xfc(r24)
    lwz r4, 0xf8(r24)
    lwz r3, 0xf4(r24)
    lwz r0, 0xf0(r24)
    stw r8, 0x10c(r24)
    stw r7, 0x108(r24)
    stw r6, 0x104(r24)
    stw r5, 0x100(r24)
    stw r4, 0xfc(r24)
    stw r3, 0xf8(r24)
    stw r0, 0xf4(r24)
    stw r31, 0xf0(r24)
    b lbl_fn_804CD2F8_0000062C
lbl_fn_804CD2F8_00000414:
    lwz r0, 0x164(r24)
    mr r5, r27
    lwz r3, lbl_8087F610
    cmpwi r0, 0x0
    addi r3, r3, 0x2a50
    blt lbl_fn_804CD2F8_00000434
    cmpwi r0, 0x15
    ble lbl_fn_804CD2F8_0000043C
lbl_fn_804CD2F8_00000434:
    li r21, 0x0
    b lbl_fn_804CD2F8_0000055C
lbl_fn_804CD2F8_0000043C:
    bge lbl_fn_804CD2F8_0000046C
    cmpwi r27, 0x0
    blt lbl_fn_804CD2F8_00000458
    mulli r0, r0, 0xc
    lwzux r0, r3, r0
    cmpw r0, r27
    bgt lbl_fn_804CD2F8_00000460
lbl_fn_804CD2F8_00000458:
    li r21, 0x0
    b lbl_fn_804CD2F8_0000055C
lbl_fn_804CD2F8_00000460:
    lwz r0, 0x8(r3)
    add r21, r0, r30
    b lbl_fn_804CD2F8_0000055C
lbl_fn_804CD2F8_0000046C:
    cmpwi r27, 0x0
    bge lbl_fn_804CD2F8_0000047C
    li r21, 0x0
    b lbl_fn_804CD2F8_0000055C
lbl_fn_804CD2F8_0000047C:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CD2F8_00000494
lbl_fn_804CD2F8_00000488:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CD2F8_00000494:
    cmpwi r4, 0x14
    bge lbl_fn_804CD2F8_000004A8
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CD2F8_00000488
lbl_fn_804CD2F8_000004A8:
    cmpwi r4, 0x14
    bge lbl_fn_804CD2F8_00000558
    cmpwi r4, 0x0
    blt lbl_fn_804CD2F8_000004C0
    cmpwi r4, 0x15
    ble lbl_fn_804CD2F8_000004C8
lbl_fn_804CD2F8_000004C0:
    li r3, 0x0
    b lbl_fn_804CD2F8_00000550
lbl_fn_804CD2F8_000004C8:
    bge lbl_fn_804CD2F8_00000500
    cmpwi r5, 0x0
    blt lbl_fn_804CD2F8_000004E8
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CD2F8_000004F0
lbl_fn_804CD2F8_000004E8:
    li r3, 0x0
    b lbl_fn_804CD2F8_00000550
lbl_fn_804CD2F8_000004F0:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CD2F8_00000550
lbl_fn_804CD2F8_00000500:
    cmpwi r5, 0x0
    bge lbl_fn_804CD2F8_00000510
    li r3, 0x0
    b lbl_fn_804CD2F8_00000550
lbl_fn_804CD2F8_00000510:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CD2F8_00000528
lbl_fn_804CD2F8_0000051C:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CD2F8_00000528:
    cmpwi r4, 0x14
    bge lbl_fn_804CD2F8_0000053C
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CD2F8_0000051C
lbl_fn_804CD2F8_0000053C:
    cmpwi r4, 0x14
    bge lbl_fn_804CD2F8_0000054C
    bl fn_804C54FC
    b lbl_fn_804CD2F8_00000550
lbl_fn_804CD2F8_0000054C:
    li r3, 0x0
lbl_fn_804CD2F8_00000550:
    mr r21, r3
    b lbl_fn_804CD2F8_0000055C
lbl_fn_804CD2F8_00000558:
    li r21, 0x0
lbl_fn_804CD2F8_0000055C:
    cmpwi cr1, r21, 0x0
    beq cr1, lbl_fn_804CD2F8_00000624
    lwz r3, 0x4(r21)
    lwz r0, 0x168(r24)
    srwi r3, r3, 8
    slw r0, r29, r0
    and. r0, r3, r0
    beq lbl_fn_804CD2F8_00000624
    beq cr1, lbl_fn_804CD2F8_0000058C
    lwz r3, 0x10(r21)
    cmpwi r3, 0x0
    bne lbl_fn_804CD2F8_00000594
lbl_fn_804CD2F8_0000058C:
    li r0, 0x0
    b lbl_fn_804CD2F8_000005AC
lbl_fn_804CD2F8_00000594:
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_804CD2F8_000005A8
    lwz r0, 0x4(r3)
    b lbl_fn_804CD2F8_000005AC
lbl_fn_804CD2F8_000005A8:
    la r0, lbl_8087E140
lbl_fn_804CD2F8_000005AC:
    cmpwi r0, 0x0
    bne lbl_fn_804CD2F8_00000600
    lwz r0, 0x8(r21)
    srwi r0, r0, 24
    cmpwi r0, 0x13
    bne lbl_fn_804CD2F8_000005C8
    b lbl_fn_804CD2F8_00000618
lbl_fn_804CD2F8_000005C8:
    cmpwi r0, 0x0
    blt lbl_fn_804CD2F8_00000618
    cmplwi r0, 0x16
    bge lbl_fn_804CD2F8_00000618
    slwi r0, r0, 2
    lwzx r3, r25, r0
    cmpwi r3, 0x0
    ble lbl_fn_804CD2F8_000005F0
    bl fn_8020924C
    b lbl_fn_804CD2F8_00000618
lbl_fn_804CD2F8_000005F0:
    lwz r0, lbl_8087F86C
    cmpwi r0, 0x0
    beq lbl_fn_804CD2F8_00000618
    b lbl_fn_804CD2F8_00000618
lbl_fn_804CD2F8_00000600:
    cmpwi r21, 0x0
    beq lbl_fn_804CD2F8_00000618
    lwz r3, 0x10(r21)
    cmpwi r3, 0x0
    beq lbl_fn_804CD2F8_00000618
    bl fn_8020924C
lbl_fn_804CD2F8_00000618:
    stw r27, 0xf0(r24)
    mr r28, r27
    b lbl_fn_804CD2F8_00000634
lbl_fn_804CD2F8_00000624:
    subi r30, r30, 0x1c
    subi r27, r27, 0x1
lbl_fn_804CD2F8_0000062C:
    cmpwi r27, 0x0
    bge lbl_fn_804CD2F8_00000414
lbl_fn_804CD2F8_00000634:
    subi r26, r26, 0x1
lbl_fn_804CD2F8_00000638:
    cmpwi r26, 0x0
    bgt lbl_fn_804CD2F8_000003CC
lbl_fn_804CD2F8_00000640:
    lmw r21, 0x214(r1)
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_804CD94C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80759374@ha
    addi r3, r3, lbl_80759374@l
    stw r0, 0x14(r1)
    addi r3, r3, 0x25b
    bl fn_800DC6B4
    lwz r0, 0x14(r1)
    stw r3, lbl_8087F5E8
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804CD97C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F5F0
    cmpwi r0, 0x0
    bne lbl_fn_804CD97C_000006D4
    lis r5, lbl_80759610@ha
    li r3, 0xa0
    addi r5, r5, lbl_80759610@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804CD97C_000006D0
    mr r4, r31
    bl fn_804CD9E4
lbl_fn_804CD97C_000006D0:
    stw r3, lbl_8087F5F0
lbl_fn_804CD97C_000006D4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F5F0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804CD9E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_80790F30@ha
    lis r4, lbl_80759610@ha
    li r0, 0x0
    stw r0, 0x5c(r31)
    addi r3, r3, lbl_80790F30@l
    addi r4, r4, lbl_80759610@l
    stw r3, 0x0(r31)
    mr r3, r31
    addi r4, r4, 0x1
    li r5, 0x0
    stw r0, 0x60(r31)
    stw r0, 0x64(r31)
    stw r0, 0x68(r31)
    stw r0, 0x78(r31)
    stw r0, 0x7c(r31)
    bl fn_801F3FF8
    lwz r0, 0x7c(r31)
    stw r3, 0x48(r31)
    cmplwi r0, 0x8
    bge lbl_fn_804CD9E4_00000778
    lwz r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x80
    beq lbl_fn_804CD9E4_0000076C
    stw r3, 0x0(r4)
lbl_fn_804CD9E4_0000076C:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
lbl_fn_804CD9E4_00000778:
    lis r4, lbl_80759610@ha
    mr r3, r31
    addi r4, r4, lbl_80759610@l
    li r5, 0x0
    addi r4, r4, 0x24
    bl fn_801F3FF8
    lwz r0, 0x7c(r31)
    stw r3, 0x58(r31)
    cmplwi r0, 0x8
    bge lbl_fn_804CD9E4_000007C4
    lwz r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x80
    beq lbl_fn_804CD9E4_000007B8
    stw r3, 0x0(r4)
lbl_fn_804CD9E4_000007B8:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
lbl_fn_804CD9E4_000007C4:
    lis r29, lbl_80759610@ha
    li r26, 0x0
    addi r29, r29, lbl_80759610@l
    li r28, 0x0
    li r30, 0x0
lbl_fn_804CD9E4_000007D8:
    mr r3, r31
    add r27, r31, r28
    addi r4, r29, 0x47
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x4c(r27)
    lwz r0, 0x7c(r31)
    cmplwi r0, 0x8
    bge lbl_fn_804CD9E4_00000820
    lwz r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x80
    beq lbl_fn_804CD9E4_00000814
    stw r3, 0x0(r4)
lbl_fn_804CD9E4_00000814:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
lbl_fn_804CD9E4_00000820:
    addi r26, r26, 0x1
    stw r30, 0x6c(r27)
    cmpwi r26, 0x3
    addi r28, r28, 0x4
    blt lbl_fn_804CD9E4_000007D8
    addi r29, r31, 0x80
    b lbl_fn_804CD9E4_00000854
lbl_fn_804CD9E4_0000083C:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804CD9E4_00000850
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804CD9E4_00000850:
    addi r29, r29, 0x4
lbl_fn_804CD9E4_00000854:
    lwz r0, 0x7c(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x80
    cmplw r29, r0
    bne lbl_fn_804CD9E4_0000083C
    mr r3, r31
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804CDB7C(void)
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
    beq lbl_fn_804CDB7C_000008E8
    lis r5, lbl_80790F30@ha
    li r4, 0x0
    addi r5, r5, lbl_80790F30@l
    stw r5, 0x0(r3)
    stw r4, 0x7c(r3)
    lwz r0, lbl_8087F5F0
    cmpwi r0, 0x0
    beq lbl_fn_804CDB7C_000008CC
    stw r4, lbl_8087F5F0
lbl_fn_804CDB7C_000008CC:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804CDB7C_000008E8
    mr r3, r30
    bl dtor_80084684
lbl_fn_804CDB7C_000008E8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804CDBFC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_27
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804CDBFC_00000B00
    lfs f0, lbl_80887548
    li r5, 0x0
    li r3, 0x0
    b lbl_fn_804CDBFC_00000954
lbl_fn_804CDBFC_00000940:
    add r4, r31, r3
    addi r5, r5, 0x1
    lwz r4, 0x80(r4)
    addi r3, r3, 0x4
    stfs f0, 0x104(r4)
lbl_fn_804CDBFC_00000954:
    lwz r0, 0x7c(r31)
    cmplw r5, r0
    blt lbl_fn_804CDBFC_00000940
    addi r30, r31, 0x80
    b lbl_fn_804CDBFC_00000980
lbl_fn_804CDBFC_00000968:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804CDBFC_0000097C
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804CDBFC_0000097C:
    addi r30, r30, 0x4
lbl_fn_804CDBFC_00000980:
    lwz r0, 0x7c(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x80
    cmplw r30, r0
    bne lbl_fn_804CDBFC_00000968
    mr r3, r31
    bl fn_804CECEC
    lfs f0, lbl_80887548
    lis r30, lbl_80759610@ha
    stfs f0, 0x14(r1)
    mr r27, r31
    lfs f31, lbl_8088754C
    addi r30, r30, lbl_80759610@l
    stfs f0, 0x18(r1)
    li r28, 0x0
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
lbl_fn_804CDBFC_000009CC:
    addi r3, r1, 0x40
    addi r4, r30, 0x6a
    addi r5, r28, 0x1
    crclr 6
    bl sprintf
    lwz r29, 0x48(r31)
    addi r3, r1, 0x40
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x28
    bl fn_801F4E8C
    lfs f3, 0x28(r1)
    addi r4, r30, 0x7b
    lfs f2, 0x2c(r1)
    addi r5, r1, 0x14
    lfs f1, 0x30(r1)
    lfs f0, 0x34(r1)
    stfs f3, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f31, 0x24(r1)
    lwz r3, 0x4c(r27)
    bl fn_801F4728
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_804CDBFC_000009CC
    lwz r3, 0x58(r31)
    lis r4, lbl_80759610@ha
    addi r4, r4, lbl_80759610@l
    addi r4, r4, 0x87
    addi r3, r3, 0x58
    bl fn_801FEC74
    cmpwi r3, 0x0
    beq lbl_fn_804CDBFC_00000AEC
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80887550
    bne lbl_fn_804CDBFC_00000A90
    addi r4, r1, 0xa
    b lbl_fn_804CDBFC_00000A94
lbl_fn_804CDBFC_00000A90:
    lwz r4, 0x10(r1)
lbl_fn_804CDBFC_00000A94:
    lfs f2, lbl_80887548
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_804CDBFC_00000ABC
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_804CDBFC_00000ABC:
    lwz r4, 0x58(r31)
    lis r3, lbl_80759610@ha
    addi r3, r3, lbl_80759610@l
    addi r3, r3, 0x95
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f0, lbl_80887554
    mr r4, r3
    mr r3, r28
    li r5, 0x0
    fsubs f1, f0, f31
    bl fn_801FED24
lbl_fn_804CDBFC_00000AEC:
    li r0, 0x5
    stw r0, 0x5c(r31)
    li r3, 0x1
    stw r0, 0x60(r31)
    b lbl_fn_804CDBFC_00000B04
lbl_fn_804CDBFC_00000B00:
    li r3, 0x0
lbl_fn_804CDBFC_00000B04:
    addi r11, r1, 0xa0
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804CDE1C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_27
    lwz r5, 0x5c(r3)
    mr r31, r3
    cmpw r5, r4
    beq lbl_fn_804CDE1C_00000E00
    cmpwi r4, 0x0
    blt lbl_fn_804CDE1C_00000E00
    lwz r27, 0x68(r3)
    li r0, 0x0
    cmpwi r5, 0x3
    stw r5, 0x60(r3)
    stw r0, 0x68(r3)
    stw r4, 0x5c(r3)
    bne lbl_fn_804CDE1C_00000B84
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
lbl_fn_804CDE1C_00000B84:
    lwz r0, 0x5c(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804CDE1C_00000BB4
    cmpwi r0, 0x2
    beq lbl_fn_804CDE1C_00000D30
    cmpwi r0, 0x3
    beq lbl_fn_804CDE1C_00000D38
    cmpwi r0, 0x4
    beq lbl_fn_804CDE1C_00000D84
    cmpwi r0, 0x5
    beq lbl_fn_804CDE1C_00000DF4
    b lbl_fn_804CDE1C_00000E00
lbl_fn_804CDE1C_00000BB4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r30, 0x48(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804CDE1C_00000BF4
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887558
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804CDE1C_00000BF4:
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804CDE1C_00000C20
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887558
    stfs f0, 0x104(r30)
    lwz r0, 0xfc(r30)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r30)
lbl_fn_804CDE1C_00000C20:
    mr r3, r31
    bl fn_804CECEC
    lfs f0, lbl_80887548
    lis r30, lbl_80759610@ha
    stfs f0, 0x8(r1)
    mr r27, r31
    lfs f31, lbl_8088754C
    addi r30, r30, lbl_80759610@l
    stfs f0, 0xc(r1)
    li r28, 0x0
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
lbl_fn_804CDE1C_00000C54:
    addi r3, r1, 0x30
    addi r4, r30, 0x6a
    addi r5, r28, 0x1
    crclr 6
    bl sprintf
    lwz r29, 0x48(r31)
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f3, 0x1c(r1)
    addi r4, r30, 0x7b
    lfs f2, 0x20(r1)
    addi r5, r1, 0x8
    lfs f1, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f31, 0x18(r1)
    lwz r3, 0x4c(r27)
    bl fn_801F4728
    addi r28, r28, 0x1
    addi r27, r27, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_804CDE1C_00000C54
    lwz r4, 0x58(r31)
    lis r30, lbl_80759610@ha
    addi r30, r30, lbl_80759610@l
    li r0, 0x0
    stw r0, 0x68(r31)
    addi r3, r30, 0x9d
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088755C
    mr r4, r3
    mr r3, r28
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x58(r31)
    addi r3, r30, 0x95
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088755C
    mr r4, r3
    mr r3, r28
    li r5, 0x4
    bl fn_801FED24
    lwz r3, lbl_8087F580
    lfs f1, lbl_80887560
    bl fn_804A5CD8
    b lbl_fn_804CDE1C_00000E00
lbl_fn_804CDE1C_00000D30:
    stw r27, 0x68(r31)
    b lbl_fn_804CDE1C_00000E00
lbl_fn_804CDE1C_00000D38:
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887558
    li r5, 0x1
    li r6, 0x0
    bl fn_804AC96C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F588
    lwz r4, 0xdf4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804CDE1C_00000D70
    b lbl_fn_804CDE1C_00000D74
lbl_fn_804CDE1C_00000D70:
    la r4, lbl_808813D0
lbl_fn_804CDE1C_00000D74:
    li r5, 0x0
    bl fn_804AD000
    stw r27, 0x68(r31)
    b lbl_fn_804CDE1C_00000E00
lbl_fn_804CDE1C_00000D84:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r28, 0x48(r31)
    cmpwi r28, 0x0
    beq lbl_fn_804CDE1C_00000DC4
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887564
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804CDE1C_00000DC4:
    lwz r28, 0x58(r31)
    cmpwi r28, 0x0
    beq lbl_fn_804CDE1C_00000E00
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887564
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
    b lbl_fn_804CDE1C_00000E00
lbl_fn_804CDE1C_00000DF4:
    mr r3, r31
    li r4, 0x0
    bl fn_804CF078
lbl_fn_804CDE1C_00000E00:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804CE118(void)
{
    nofralloc
    blr
}

asm void fn_804CE11C(void)
{
    nofralloc
    blr
}

asm void fn_804CE120(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x64(r3)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_fn_804CE120_00000E60
    li r0, 0x0
    stw r0, 0x64(r3)
    b lbl_fn_804CE120_00000FD4
lbl_fn_804CE120_00000E60:
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804CE120_00000E90
    cmpwi r0, 0x2
    beq lbl_fn_804CE120_00000F54
    cmpwi r0, 0x6
    beq lbl_fn_804CE120_00000F5C
    cmpwi r0, 0x3
    beq lbl_fn_804CE120_00000F64
    cmpwi r0, 0x4
    beq lbl_fn_804CE120_00000FB8
    b lbl_fn_804CE120_00000FD4
lbl_fn_804CE120_00000E90:
    lwz r4, 0x48(r3)
    lfs f0, lbl_80887568
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804CE120_00000EB0
    li r4, 0x2
    bl fn_804CDE1C
lbl_fn_804CE120_00000EB0:
    lfs f0, lbl_80887548
    lis r31, lbl_80759610@ha
    stfs f0, 0x1c(r1)
    mr r28, r27
    lfs f31, lbl_8088754C
    addi r31, r31, lbl_80759610@l
    stfs f0, 0x20(r1)
    li r30, 0x0
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_804CE120_00000EDC:
    addi r3, r1, 0x30
    addi r4, r31, 0x6a
    addi r5, r30, 0x1
    crclr 6
    bl sprintf
    lwz r29, 0x48(r27)
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f3, 0x8(r1)
    addi r4, r31, 0x7b
    lfs f2, 0xc(r1)
    addi r5, r1, 0x1c
    lfs f1, 0x10(r1)
    lfs f0, 0x14(r1)
    stfs f3, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f31, 0x2c(r1)
    lwz r3, 0x4c(r28)
    bl fn_801F4728
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_804CE120_00000EDC
    b lbl_fn_804CE120_00000FD4
lbl_fn_804CE120_00000F54:
    bl fn_804CE61C
    b lbl_fn_804CE120_00000FD4
lbl_fn_804CE120_00000F5C:
    bl fn_804CE61C
    b lbl_fn_804CE120_00000FD4
lbl_fn_804CE120_00000F64:
    lwz r3, lbl_8087F588
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804CE120_00000FD4
    bl fn_804AC79C
    cmpwi r3, 0x0
    beq lbl_fn_804CE120_00000F98
    mr r3, r27
    bl fn_804CEF84
    mr r3, r27
    li r4, 0x2
    bl fn_804CDE1C
    b lbl_fn_804CE120_00000FD4
lbl_fn_804CE120_00000F98:
    lwz r3, lbl_8087F588
    bl fn_804AC7EC
    cmpwi r3, 0x0
    beq lbl_fn_804CE120_00000FD4
    mr r3, r27
    li r4, 0x2
    bl fn_804CDE1C
    b lbl_fn_804CE120_00000FD4
lbl_fn_804CE120_00000FB8:
    lwz r4, 0x48(r3)
    lfs f0, lbl_80887548
    lfs f1, 0x100(r4)
    fcmpu cr0, f0, f1
    bne lbl_fn_804CE120_00000FD4
    li r4, 0x5
    bl fn_804CDE1C
lbl_fn_804CE120_00000FD4:
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804CE2EC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x1a
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r27, r4
    mr r26, r3
    li r29, 0x0
    lwz r31, 0x68(r3)
    lwz r30, lbl_8087EF70
    slwi r0, r31, 2
    add r4, r3, r0
    mr r3, r30
    lwz r28, 0x6c(r4)
    li r4, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804CE2EC_00001054
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804CE2EC_00001070
lbl_fn_804CE2EC_00001054:
    lwz r3, 0x68(r26)
    subic. r0, r3, 0x1
    stw r0, 0x68(r26)
    bge lbl_fn_804CE2EC_000011D4
    li r0, 0x2
    stw r0, 0x68(r26)
    b lbl_fn_804CE2EC_000011D4
lbl_fn_804CE2EC_00001070:
    mr r3, r30
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804CE2EC_000010A0
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804CE2EC_000010C0
lbl_fn_804CE2EC_000010A0:
    lwz r3, 0x68(r26)
    addi r0, r3, 0x1
    stw r0, 0x68(r26)
    cmpwi r0, 0x3
    blt lbl_fn_804CE2EC_000011D4
    li r0, 0x0
    stw r0, 0x68(r26)
    b lbl_fn_804CE2EC_000011D4
lbl_fn_804CE2EC_000010C0:
    mr r3, r30
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804CE2EC_000010F0
    mr r3, r30
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804CE2EC_0000114C
lbl_fn_804CE2EC_000010F0:
    lwz r0, 0x68(r26)
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x6c(r4)
    subi r0, r3, 0x1
    stw r0, 0x6c(r4)
    lwz r0, 0x68(r26)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    bge lbl_fn_804CE2EC_00001128
    subi r0, r27, 0x1
    stw r0, 0x6c(r3)
lbl_fn_804CE2EC_00001128:
    lwz r4, 0x68(r26)
    mr r3, r26
    mr r6, r28
    li r7, -0x1
    slwi r0, r4, 2
    add r5, r26, r0
    lwz r5, 0x6c(r5)
    bl fn_804CE82C
    b lbl_fn_804CE2EC_000011D4
lbl_fn_804CE2EC_0000114C:
    mr r3, r30
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_804CE2EC_0000117C
    mr r3, r30
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_804CE2EC_000011D4
lbl_fn_804CE2EC_0000117C:
    lwz r0, 0x68(r26)
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x6c(r4)
    addi r0, r3, 0x1
    stw r0, 0x6c(r4)
    lwz r0, 0x68(r26)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x6c(r3)
    cmpw r0, r27
    blt lbl_fn_804CE2EC_000011B4
    li r0, 0x0
    stw r0, 0x6c(r3)
lbl_fn_804CE2EC_000011B4:
    lwz r4, 0x68(r26)
    mr r3, r26
    mr r5, r28
    li r7, 0x1
    slwi r0, r4, 2
    add r6, r26, r0
    lwz r6, 0x6c(r6)
    bl fn_804CE82C
lbl_fn_804CE2EC_000011D4:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi cr1, r0, 0x2
    beq cr1, lbl_fn_804CE2EC_00001268
    lwz r0, 0x68(r26)
    cmpwi r0, 0x1
    bne lbl_fn_804CE2EC_00001268
    bne cr1, lbl_fn_804CE2EC_000011FC
    li r4, 0x2
    b lbl_fn_804CE2EC_0000120C
lbl_fn_804CE2EC_000011FC:
    lwz r4, 0x70(r26)
    neg r0, r4
    or r0, r0, r4
    srwi r4, r0, 31
lbl_fn_804CE2EC_0000120C:
    bl fn_804FB624
    lwz r4, 0x6c(r26)
    addi r0, r3, 0x1
    cmpw r4, r0
    blt lbl_fn_804CE2EC_00001268
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804CE2EC_00001238
    li r4, 0x2
    b lbl_fn_804CE2EC_00001248
lbl_fn_804CE2EC_00001238:
    lwz r4, 0x70(r26)
    neg r0, r4
    or r0, r0, r4
    srwi r4, r0, 31
lbl_fn_804CE2EC_00001248:
    bl fn_804FB624
    stw r3, 0x6c(r26)
    mr r6, r3
    mr r3, r26
    mr r5, r28
    li r4, 0x0
    li r7, 0x1
    bl fn_804CE82C
lbl_fn_804CE2EC_00001268:
    lwz r0, 0x68(r26)
    cmpw r0, r31
    bne lbl_fn_804CE2EC_00001288
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x6c(r3)
    cmpw r28, r0
    beq lbl_fn_804CE2EC_000012A0
lbl_fn_804CE2EC_00001288:
    addi r3, r1, 0x10
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804CE2EC_000012A0:
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804CE2EC_000012D8
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    li r29, 0x1
    b lbl_fn_804CE2EC_0000130C
lbl_fn_804CE2EC_000012D8:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804CE2EC_0000130C
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r29, 0x2
lbl_fn_804CE2EC_0000130C:
    mr r3, r29
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804CE61C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x5c(r3)
    mr r27, r3
    lwz r29, lbl_8087EF70
    cmpwi r0, 0x6
    bne lbl_fn_804CE61C_00001398
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_804CE61C_00001388
    lwz r28, lbl_8087F610
    mr r3, r28
    bl fn_804EB874
    mr r4, r3
    mr r3, r28
    li r5, 0x0
    bl fn_804D9C18
    cmplwi r3, 0x1
    bne lbl_fn_804CE61C_00001474
lbl_fn_804CE61C_00001388:
    mr r3, r27
    li r4, 0x4
    bl fn_804CDE1C
    b lbl_fn_804CE61C_00001474
lbl_fn_804CE61C_00001398:
    lwz r0, 0x68(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804CE61C_000013AC
    li r4, 0x2
    b lbl_fn_804CE61C_000013EC
lbl_fn_804CE61C_000013AC:
    cmpwi r0, 0x2
    bne lbl_fn_804CE61C_000013BC
    li r4, 0x4
    b lbl_fn_804CE61C_000013EC
lbl_fn_804CE61C_000013BC:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804CE61C_000013D4
    li r4, 0x2
    b lbl_fn_804CE61C_000013E4
lbl_fn_804CE61C_000013D4:
    lwz r4, 0x70(r27)
    neg r0, r4
    or r0, r0, r4
    srwi r4, r0, 31
lbl_fn_804CE61C_000013E4:
    bl fn_804FB624
    addi r4, r3, 0x1
lbl_fn_804CE61C_000013EC:
    mr r3, r27
    bl fn_804CE2EC
    cmpwi r3, 0x2
    bne lbl_fn_804CE61C_00001438
    lwz r3, lbl_8087F610
    bl fn_804EB1B0
    cmpwi r3, 0x1
    bne lbl_fn_804CE61C_00001428
    lwz r28, lbl_8087F610
    mr r3, r28
    bl fn_804EB874
    mr r4, r3
    mr r3, r28
    li r5, 0x0
    bl fn_804D8250
lbl_fn_804CE61C_00001428:
    mr r3, r27
    li r4, 0x6
    bl fn_804CDE1C
    b lbl_fn_804CE61C_00001474
lbl_fn_804CE61C_00001438:
    mr r3, r29
    li r4, 0x0
    li r5, 0xc
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_804CE61C_00001474
    addi r3, r1, 0x8
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r27
    li r4, 0x3
    bl fn_804CDE1C
lbl_fn_804CE61C_00001474:
    lfs f0, lbl_80887548
    lis r31, lbl_80759610@ha
    stfs f0, 0xc(r1)
    mr r28, r27
    lfs f31, lbl_8088754C
    addi r31, r31, lbl_80759610@l
    stfs f0, 0x10(r1)
    li r29, 0x0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_804CE61C_000014A0:
    addi r3, r1, 0x38
    addi r4, r31, 0x6a
    addi r5, r29, 0x1
    crclr 6
    bl sprintf
    lwz r30, 0x48(r27)
    addi r3, r1, 0x38
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x20
    bl fn_801F4E8C
    lfs f3, 0x20(r1)
    addi r4, r31, 0x7b
    lfs f2, 0x24(r1)
    addi r5, r1, 0xc
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f31, 0x1c(r1)
    lwz r3, 0x4c(r28)
    bl fn_801F4728
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_804CE61C_000014A0
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_27
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804CE82C(void)
{
    nofralloc
    stwu r1, -0x430(r1)
    mflr r0
    stw r0, 0x434(r1)
    addi r11, r1, 0x430
    bl _savegpr_27
    li r0, 0x40
    mr r30, r6
    mr r31, r7
    mr r28, r3
    mr r29, r4
    addi r7, r1, 0x204
    li r6, 0x0
    mtctr r0
lbl_fn_804CE82C_00001568:
    stw r6, 0x4(r7)
    stwu r6, 0x8(r7)
    bdnz lbl_fn_804CE82C_00001568
    li r0, 0x40
    addi r7, r1, 0x4
    li r6, 0x0
    mtctr r0
lbl_fn_804CE82C_00001584:
    stw r6, 0x4(r7)
    stwu r6, 0x8(r7)
    bdnz lbl_fn_804CE82C_00001584
    cmpwi r4, 0x0
    bne lbl_fn_804CE82C_000015C4
    lis r27, lbl_80790F70@ha
    addi r3, r1, 0x208
    addi r4, r27, lbl_80790F70@l
    crclr 6
    bl fn_800DD3FC
    mr r5, r30
    addi r3, r1, 0x8
    addi r4, r27, lbl_80790F70@l
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804CE82C_000016D4
lbl_fn_804CE82C_000015C4:
    cmpwi r4, 0x1
    bne lbl_fn_804CE82C_00001660
    cmpwi r5, 0x0
    bne lbl_fn_804CE82C_000015F0
    lwz r3, lbl_8087F86C
    lwz r4, 0x714(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804CE82C_000015E8
    b lbl_fn_804CE82C_00001608
lbl_fn_804CE82C_000015E8:
    la r4, lbl_808813D0
    b lbl_fn_804CE82C_00001608
lbl_fn_804CE82C_000015F0:
    lwz r3, lbl_8087F86C
    lwz r4, 0x70c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804CE82C_00001604
    b lbl_fn_804CE82C_00001608
lbl_fn_804CE82C_00001604:
    la r4, lbl_808813D0
lbl_fn_804CE82C_00001608:
    addi r3, r1, 0x208
    crclr 6
    bl fn_800DD3FC
    cmpwi r30, 0x0
    bne lbl_fn_804CE82C_00001638
    lwz r3, lbl_8087F86C
    lwz r4, 0x714(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804CE82C_00001630
    b lbl_fn_804CE82C_00001650
lbl_fn_804CE82C_00001630:
    la r4, lbl_808813D0
    b lbl_fn_804CE82C_00001650
lbl_fn_804CE82C_00001638:
    lwz r3, lbl_8087F86C
    lwz r4, 0x70c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804CE82C_0000164C
    b lbl_fn_804CE82C_00001650
lbl_fn_804CE82C_0000164C:
    la r4, lbl_808813D0
lbl_fn_804CE82C_00001650:
    addi r3, r1, 0x8
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_804CE82C_000016D4
lbl_fn_804CE82C_00001660:
    lwz r0, 0x78(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804CE82C_000016D4
    lwz r4, lbl_8087F86C
    addi r3, r1, 0x208
    lwz r4, 0x71c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804CE82C_00001684
    b lbl_fn_804CE82C_00001688
lbl_fn_804CE82C_00001684:
    la r4, lbl_808813D0
lbl_fn_804CE82C_00001688:
    lis r6, lbl_807595E0@ha
    slwi r0, r5, 2
    addi r6, r6, lbl_807595E0@l
    lwzx r5, r6, r0
    crclr 6
    bl fn_800DD3FC
    lwz r4, lbl_8087F86C
    addi r3, r1, 0x8
    lwz r4, 0x71c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804CE82C_000016B8
    b lbl_fn_804CE82C_000016BC
lbl_fn_804CE82C_000016B8:
    la r4, lbl_808813D0
lbl_fn_804CE82C_000016BC:
    lis r5, lbl_807595E0@ha
    slwi r0, r30, 2
    addi r5, r5, lbl_807595E0@l
    lwzx r5, r5, r0
    crclr 6
    bl fn_800DD3FC
lbl_fn_804CE82C_000016D4:
    slwi r0, r29, 2
    add r29, r28, r0
    lwz r27, 0x4c(r29)
    cmpwi r27, 0x0
    beq lbl_fn_804CE82C_00001724
    mr r3, r27
    li r4, 0x0
    bl fn_800D246C
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    lis r4, lbl_807595F0@ha
    stw r3, 0x40c(r1)
    lfd f1, lbl_807595F0@l(r4)
    stw r0, 0x408(r1)
    lfd f0, 0x408(r1)
    fsubs f0, f0, f1
    stfs f0, 0x104(r27)
    lwz r0, 0xfc(r27)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r27)
lbl_fn_804CE82C_00001724:
    lwz r4, 0x4c(r29)
    lis r28, lbl_80759610@ha
    addi r28, r28, lbl_80759610@l
    addi r3, r28, 0xa5
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x208
    bl fn_801FEE08
    lwz r4, 0x4c(r29)
    addi r3, r28, 0xb4
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x8
    bl fn_801FEE08
    cmpwi r31, 0x0
    ble lbl_fn_804CE82C_00001784
    lwz r3, 0x4c(r29)
    lfs f0, lbl_80887548
    stfs f0, 0x100(r3)
    b lbl_fn_804CE82C_00001790
lbl_fn_804CE82C_00001784:
    lwz r3, 0x4c(r29)
    lfs f0, lbl_80887568
    stfs f0, 0x100(r3)
lbl_fn_804CE82C_00001790:
    addi r11, r1, 0x430
    bl _restgpr_27
    lwz r0, 0x434(r1)
    mtlr r0
    addi r1, r1, 0x430
    blr
}

asm void fn_804CEAA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r6, 0x0
    li r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    b lbl_fn_804CEAA0_000017E8
lbl_fn_804CEAA0_000017CC:
    add r5, r3, r4
    addi r6, r6, 0x1
    lwz r5, 0x80(r5)
    addi r4, r4, 0x4
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_804CEAA0_000017E8:
    lwz r0, 0x7c(r3)
    cmplw r6, r0
    blt lbl_fn_804CEAA0_000017CC
    lwz r4, 0x5c(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    ble lbl_fn_804CEAA0_00001818
    cmpwi r4, 0x6
    beq lbl_fn_804CEAA0_00001818
    cmpwi r4, 0x4
    beq lbl_fn_804CEAA0_00001994
    b lbl_fn_804CEAA0_000019DC
lbl_fn_804CEAA0_00001818:
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x50(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r0, lbl_8087F580
    cmpwi r0, 0x0
    beq lbl_fn_804CEAA0_00001918
    lwz r4, lbl_8087F588
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_804CEAA0_00001918
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804CEAA0_00001918
    lfs f0, lbl_80887548
    lis r3, lbl_80759610@ha
    stfs f0, 0x1c(r1)
    addi r3, r3, lbl_80759610@l
    addi r3, r3, 0xc2
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    lwz r0, 0x68(r31)
    slwi r0, r0, 2
    add r4, r31, r0
    lwz r30, 0x4c(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addi r6, r1, 0x1c
    lfs f3, 0xc(r1)
    li r4, 0x0
    lfs f2, 0x10(r1)
    li r5, 0x0
    lfs f1, 0x14(r1)
    li r7, 0x0
    lfs f0, lbl_8088756C
    stfs f4, 0x1c(r1)
    lwz r3, lbl_8087F580
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_804A53D4
lbl_fn_804CEAA0_00001918:
    lwz r0, 0x78(r31)
    cmpwi r0, 0x2
    bne lbl_fn_804CEAA0_0000195C
    lwz r3, 0x68(r31)
    lwz r4, lbl_8087F86C
    addi r0, r3, 0xd6
    lwz r3, lbl_8087F580
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804CEAA0_0000194C
    b lbl_fn_804CEAA0_00001950
lbl_fn_804CEAA0_0000194C:
    la r4, lbl_808813D0
lbl_fn_804CEAA0_00001950:
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_804CEAA0_000019DC
lbl_fn_804CEAA0_0000195C:
    lwz r3, 0x68(r31)
    lwz r4, lbl_8087F86C
    addi r0, r3, 0xd3
    lwz r3, lbl_8087F580
    slwi r0, r0, 3
    add r4, r4, r0
    lwz r4, 0x4c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804CEAA0_00001984
    b lbl_fn_804CEAA0_00001988
lbl_fn_804CEAA0_00001984:
    la r4, lbl_808813D0
lbl_fn_804CEAA0_00001988:
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_804CEAA0_000019DC
lbl_fn_804CEAA0_00001994:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    li r5, 0x0
    li r3, 0x0
    b lbl_fn_804CEAA0_000019D0
lbl_fn_804CEAA0_000019B4:
    add r4, r31, r3
    addi r5, r5, 0x1
    lwz r4, 0x80(r4)
    addi r3, r3, 0x4
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
lbl_fn_804CEAA0_000019D0:
    lwz r0, 0x7c(r31)
    cmplw r5, r0
    blt lbl_fn_804CEAA0_000019B4
lbl_fn_804CEAA0_000019DC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804CECEC(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    li r5, 0x0
    lfs f0, lbl_80887548
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    lwz r4, lbl_8087F610
    stw r5, 0x70(r1)
    lwz r0, 0x540(r4)
    stw r0, 0x78(r3)
    lwz r3, lbl_8087F86C
    stw r5, 0x74(r1)
    lwz r30, 0x724(r3)
    stw r5, 0x78(r1)
    cmpwi r30, 0x0
    stw r5, 0x7c(r1)
    stw r5, 0x80(r1)
    stw r5, 0x84(r1)
    stw r5, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r5, 0x90(r1)
    stw r5, 0x94(r1)
    stw r5, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r5, 0xa0(r1)
    stw r5, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r5, 0xac(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x54(r1)
    beq lbl_fn_804CECEC_00001A8C
    b lbl_fn_804CECEC_00001A90
lbl_fn_804CECEC_00001A8C:
    la r30, lbl_808813D0
lbl_fn_804CECEC_00001A90:
    lwz r4, 0x4c(r31)
    lis r3, lbl_80759610@ha
    addi r3, r3, lbl_80759610@l
    addi r3, r3, 0xd2
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    lwz r0, 0x78(r31)
    lwz r3, 0x5a4(r3)
    cmpwi r0, 0x2
    stw r3, 0x6c(r31)
    bne lbl_fn_804CECEC_00001B2C
    lwz r3, lbl_8087F86C
    lwz r29, 0x72c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804CECEC_00001AE4
    b lbl_fn_804CECEC_00001AE8
lbl_fn_804CECEC_00001AE4:
    la r29, lbl_808813D0
lbl_fn_804CECEC_00001AE8:
    lwz r4, 0x50(r31)
    lis r3, lbl_80759610@ha
    addi r3, r3, lbl_80759610@l
    addi r3, r3, 0xd2
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    lwz r3, 0x5b0(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stw r0, 0x70(r31)
    b lbl_fn_804CECEC_00001C40
lbl_fn_804CECEC_00001B2C:
    lwz r3, lbl_8087F86C
    lwz r29, 0x734(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804CECEC_00001B40
    b lbl_fn_804CECEC_00001B44
lbl_fn_804CECEC_00001B40:
    la r29, lbl_808813D0
lbl_fn_804CECEC_00001B44:
    lwz r4, 0x50(r31)
    lis r3, lbl_80759610@ha
    addi r3, r3, lbl_80759610@l
    addi r3, r3, 0xd2
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    lwz r3, 0x78(r31)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stw r0, 0x70(r31)
    lwz r3, lbl_8087F86C
    lwz r29, 0x73c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804CECEC_00001B94
    b lbl_fn_804CECEC_00001B98
lbl_fn_804CECEC_00001B94:
    la r29, lbl_808813D0
lbl_fn_804CECEC_00001B98:
    lwz r4, 0x54(r31)
    lis r3, lbl_80759610@ha
    addi r3, r3, lbl_80759610@l
    addi r3, r3, 0xd2
    addi r30, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_801FEE08
    li r0, 0x1
    stw r0, 0x74(r31)
    lis r3, 0x8889
    lis r6, lbl_807595E0@ha
    lwz r4, lbl_8087F610
    subi r5, r3, 0x7777
    lwzu r0, lbl_807595E0@l(r6)
    li r7, 0x0
    lwz r3, 0x564(r4)
    mulhw r4, r5, r3
    add r3, r4, r3
    srawi r3, r3, 5
    srwi r4, r3, 31
    add r3, r3, r4
    cmpw r3, r0
    bne lbl_fn_804CECEC_00001C04
    stw r7, 0x74(r31)
lbl_fn_804CECEC_00001C04:
    lwz r0, 0x4(r6)
    li r7, 0x1
    cmpw r3, r0
    bne lbl_fn_804CECEC_00001C18
    stw r7, 0x74(r31)
lbl_fn_804CECEC_00001C18:
    lwz r0, 0x8(r6)
    li r7, 0x2
    cmpw r3, r0
    bne lbl_fn_804CECEC_00001C2C
    stw r7, 0x74(r31)
lbl_fn_804CECEC_00001C2C:
    lwz r0, 0xc(r6)
    li r7, 0x3
    cmpw r3, r0
    bne lbl_fn_804CECEC_00001C40
    stw r7, 0x74(r31)
lbl_fn_804CECEC_00001C40:
    mr r29, r31
    li r30, 0x0
lbl_fn_804CECEC_00001C48:
    lwz r5, 0x6c(r29)
    mr r3, r31
    mr r4, r30
    li r7, 0x0
    mr r6, r5
    bl fn_804CE82C
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_804CECEC_00001C48
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
