#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void IOS_Ioctlv(void);
extern void IOS_Open(void);
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E120(void);
extern void fn_8006969C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80507794(void);
extern void fn_805077F4(void);
extern void fn_8061C8A0(void);
extern void fn_8061D4C0(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80764040[];
extern u8 lbl_807640B0[];
extern u8 lbl_807640B8[];
extern u8 lbl_807640C0[];
extern u8 lbl_80797A08[];

/* Small data declarations */
extern u32 __esFd_8087E708;
extern u32 lbl_8087E700;
extern u32 lbl_8087E701;
extern u32 lbl_8087E710;
extern u32 lbl_808884B8;
extern u32 lbl_808884BC;
extern u32 lbl_808884C0;

/* Function declarations */
void fn_805BE380(void);
void fn_805BE900(void);
void fn_805BEA38(void);
void fn_805BEAD0(void);
void fn_805BEB18(void);
void fn_805BEB58(void);
void fn_805BEC6C(void);
void fn_805BEC74(void);
void fn_805BECA4(void);
void fn_805BED54(void);
void fn_805BEE08(void);
void fn_805BEEC8(void);
void fn_805BEFD0(void);
void fn_805BEFE8(void);
void fn_805BF168(void);
void fn_805BF1EC(void);
void fn_805BF208(void);
void fn_805BF218(void);
void fn_805BF414(void);
void fn_805BF4B8(void);
void fn_805BF594(void);
void fn_805BF664(void);
void fn_805BF798(void);
void fn_805BF8F8(void);
void fn_805BFA58(void);
void ESP_InitLib(void);
void ESP_CloseLib(void);
void fn_805BFB70(void);
void fn_805BFC10(void);
void ESP_DiGetTicketView(void);

asm void fn_805BE380(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r29, r4
    lwz r4, 0x0(r4)
    mr r28, r3
    mr r30, r5
    addi r3, r1, 0x30
    bl fn_805BEC6C
    addi r3, r1, 0x30
    li r31, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000054
    lwz r3, 0x30(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r31, r3, 0xc
lbl_fn_805BE380_00000054:
    lwz r4, 0x30(r1)
    addi r3, r1, 0x30
    li r27, 0x8
    lwzx r0, r4, r31
    slwi r31, r0, 24
    rlwimi r31, r0, 8, 24, 31
    rlwimi r31, r0, 24, 16, 23
    rlwimi r31, r0, 8, 8, 15
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000094
    lwz r3, 0x30(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000094:
    lwz r5, 0x30(r1)
    lis r4, lbl_80764040@ha
    addi r0, r31, 0x3
    li r3, 0xf4
    add r27, r5, r27
    addi r4, r4, lbl_80764040@l
    addi r5, r4, 0x14
    clrrwi r0, r0, 2
    addi r27, r27, 0x4
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    add r27, r27, r0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805BE380_000000F8
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    bne lbl_fn_805BE380_000000EC
    addi r4, r30, 0x1
    b lbl_fn_805BE380_000000F0
lbl_fn_805BE380_000000EC:
    lwz r4, 0x8(r30)
lbl_fn_805BE380_000000F0:
    bl fn_805BEEC8
    mr r31, r3
lbl_fn_805BE380_000000F8:
    stw r31, 0x4(r29)
    addi r6, r1, 0x18
    addi r7, r1, 0x1c
    addi r3, r1, 0x30
    lfs f0, 0x4(r27)
    stfs f0, 0x24(r1)
    lfs f0, 0x8(r27)
    stfs f0, 0x28(r1)
    lfs f0, 0xc(r27)
    lwz r5, 0x24(r1)
    stfs f0, 0x2c(r1)
    lwz r4, 0x28(r1)
    stwbrx r5, r0, r6
    addi r5, r1, 0x20
    lwz r0, 0x2c(r1)
    lfs f0, 0x18(r1)
    stwbrx r4, r0, r7
    stfs f0, 0x4(r31)
    lfs f0, 0x1c(r1)
    stwbrx r0, r0, r5
    stfs f0, 0x8(r31)
    lfs f0, 0x20(r1)
    stfs f0, 0xc(r31)
    bl fn_805BED54
    stw r3, 0x30(r1)
    addi r3, r1, 0x30
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000184
    lwz r3, 0x30(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000184:
    lwz r0, 0x30(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x0
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x30
    bl fn_805BECA4
    stw r3, 0x30(r1)
    addi r3, r1, 0x30
    bl fn_805BED54
    stw r3, 0x14(r1)
    addi r3, r1, 0x14
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_000001DC
    lwz r3, 0x14(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_000001DC:
    lwz r0, 0x14(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x1
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x14
    bl fn_805BECA4
    stw r3, 0x14(r1)
    addi r3, r1, 0x14
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000228
    lwz r3, 0x14(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000228:
    lwz r0, 0x14(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x2
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x14
    bl fn_805BECA4
    stw r3, 0x14(r1)
    addi r3, r1, 0x14
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000274
    lwz r3, 0x14(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000274:
    lwz r0, 0x14(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x3
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x30
    bl fn_805BECA4
    stw r3, 0x30(r1)
    addi r3, r1, 0x30
    bl fn_805BED54
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_000002CC
    lwz r3, 0x10(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_000002CC:
    lwz r0, 0x10(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x4
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x10
    bl fn_805BECA4
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000318
    lwz r3, 0x10(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000318:
    lwz r0, 0x10(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x5
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x10
    bl fn_805BECA4
    stw r3, 0x10(r1)
    addi r3, r1, 0x10
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000364
    lwz r3, 0x10(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000364:
    lwz r0, 0x10(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x6
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x30
    bl fn_805BECA4
    stw r3, 0x30(r1)
    addi r3, r1, 0x30
    bl fn_805BED54
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_000003BC
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_000003BC:
    lwz r0, 0xc(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x7
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0xc
    bl fn_805BECA4
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000408
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000408:
    lwz r0, 0xc(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x8
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0xc
    bl fn_805BECA4
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000454
    lwz r3, 0xc(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000454:
    lwz r0, 0xc(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0x9
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x30
    bl fn_805BECA4
    stw r3, 0x30(r1)
    addi r3, r1, 0x30
    bl fn_805BED54
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_000004AC
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_000004AC:
    lwz r0, 0x8(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0xa
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x8
    bl fn_805BECA4
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_000004F8
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_000004F8:
    lwz r0, 0x8(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0xb
    add r4, r0, r27
    bl fn_805BE900
    addi r3, r1, 0x8
    bl fn_805BECA4
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    li r27, 0x8
    bl fn_805BEC74
    cmpwi r3, 0x0
    beq lbl_fn_805BE380_00000544
    lwz r3, 0x8(r1)
    lwz r3, 0x8(r3)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    addi r27, r3, 0xc
lbl_fn_805BE380_00000544:
    lwz r0, 0x8(r1)
    mr r3, r28
    mr r5, r31
    li r6, 0xc
    add r4, r0, r27
    bl fn_805BE900
    mr r3, r31
    bl fn_805BF664
    addi r11, r1, 0x50
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805BE900(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lwz r3, 0x4(r4)
    mr r28, r5
    lwz r0, 0x0(r4)
    mr r29, r6
    slwi r26, r3, 24
    addi r31, r4, 0x8
    rlwimi r26, r3, 8, 24, 31
    slwi r25, r0, 24
    rlwimi r26, r3, 24, 16, 23
    li r30, 0x0
    rlwimi r26, r3, 8, 8, 15
    rlwimi r25, r0, 8, 24, 31
    rlwimi r25, r0, 24, 16, 23
    rlwimi r25, r0, 8, 8, 15
    clrrwi r27, r26, 2
    b lbl_fn_805BE900_00000698
lbl_fn_805BE900_000005D4:
    lfs f0, 0x0(r31)
    cmplwi r26, 0x8
    lfs f1, 0x4(r31)
    addi r4, r1, 0x34
    stfs f0, 0x1c(r1)
    addi r5, r1, 0x30
    stfs f1, 0x18(r1)
    lwz r0, 0x1c(r1)
    lwz r3, 0x18(r1)
    stwbrx r0, r0, r4
    stwbrx r3, r0, r5
    ble lbl_fn_805BE900_0000067C
    lfs f0, 0x8(r31)
    addi r8, r1, 0x2c
    lfs f2, 0xc(r31)
    addi r9, r1, 0x28
    stfs f2, 0x10(r1)
    addi r10, r1, 0x24
    lfs f3, 0x10(r31)
    mr r3, r28
    lfs f4, 0x14(r31)
    mr r4, r29
    stfs f0, 0x14(r1)
    lwz r5, 0x10(r1)
    stfs f3, 0xc(r1)
    lwz r0, 0x14(r1)
    stwbrx r0, r0, r8
    addi r0, r1, 0x20
    lwz r6, 0xc(r1)
    stfs f4, 0x8(r1)
    lfs f1, 0x34(r1)
    lwz r7, 0x8(r1)
    stwbrx r5, r0, r9
    lfs f2, 0x30(r1)
    stwbrx r6, r0, r10
    lfs f3, 0x2c(r1)
    stwbrx r7, r0, r0
    lfs f4, 0x28(r1)
    lfs f5, 0x24(r1)
    lfs f6, 0x20(r1)
    bl fn_805BF4B8
    b lbl_fn_805BE900_00000690
lbl_fn_805BE900_0000067C:
    lfs f1, 0x34(r1)
    mr r3, r28
    lfs f2, 0x30(r1)
    mr r4, r29
    bl fn_805BF594
lbl_fn_805BE900_00000690:
    add r31, r31, r27
    addi r30, r30, 0x1
lbl_fn_805BE900_00000698:
    cmplw r30, r25
    blt lbl_fn_805BE900_000005D4
    addi r11, r1, 0x60
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805BEA38(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r30, 0x4(r4)
    mr r25, r5
    lwz r31, 0x0(r4)
    mr r26, r6
    addi r28, r4, 0x8
    clrrwi r29, r30, 2
    li r27, 0x0
    b lbl_fn_805BEA38_00000730
lbl_fn_805BEA38_000006EC:
    cmplwi r30, 0x8
    lfs f1, 0x0(r28)
    lfs f2, 0x4(r28)
    ble lbl_fn_805BEA38_0000071C
    lfs f3, 0x8(r28)
    mr r3, r25
    lfs f4, 0xc(r28)
    mr r4, r26
    lfs f5, 0x10(r28)
    lfs f6, 0x14(r28)
    bl fn_805BF4B8
    b lbl_fn_805BEA38_00000728
lbl_fn_805BEA38_0000071C:
    mr r3, r25
    mr r4, r26
    bl fn_805BF594
lbl_fn_805BEA38_00000728:
    add r28, r28, r29
    addi r27, r27, 0x1
lbl_fn_805BEA38_00000730:
    cmplw r27, r31
    blt lbl_fn_805BEA38_000006EC
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805BEAD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    bl fn_805BEB58
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805BEB18(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805BEB18_000007C0
    cmpwi r4, 0x0
    ble lbl_fn_805BEB18_000007C0
    bl dtor_80084684
lbl_fn_805BEB18_000007C0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805BEB58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_807640B0@ha
    lis r4, lbl_807640B8@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r30, lbl_807640B0@l(r5)
    stw r29, 0x14(r1)
    lwz r29, lbl_807640B8@l(r4)
    stw r28, 0x10(r1)
    lwz r6, 0x0(r3)
    lwz r28, 0x0(r6)
    bl fn_8006969C
    cmpwi r3, 0x0
    beq lbl_fn_805BEB58_00000844
    slwi r3, r30, 24
    slwi r0, r29, 24
    rlwimi r3, r30, 8, 24, 31
    rlwimi r0, r29, 8, 24, 31
    rlwimi r3, r30, 24, 16, 23
    rlwimi r3, r30, 8, 8, 15
    rlwimi r0, r29, 24, 16, 23
    rlwimi r0, r29, 8, 8, 15
    mr r30, r3
    mr r29, r0
lbl_fn_805BEB58_00000844:
    cmplw r28, r30
    bne lbl_fn_805BEB58_00000860
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x8(r31)
    stw r0, 0xc(r31)
    b lbl_fn_805BEB58_000008C0
lbl_fn_805BEB58_00000860:
    cmplw r28, r29
    bne lbl_fn_805BEB58_000008B8
    lwz r3, 0x0(r31)
    li r0, 0x1
    stw r0, 0x8(r31)
    addi r6, r3, 0x4
    stw r0, 0xc(r31)
    b lbl_fn_805BEB58_000008A8
lbl_fn_805BEB58_00000880:
    lwz r3, 0x0(r6)
    addi r5, r6, 0x4
    stwbrx r3, r0, r6
    addi r4, r6, 0x6
    lhz r0, 0x4(r6)
    sthbrx r0, r0, r5
    lhz r0, 0x6(r6)
    sthbrx r0, r0, r4
    lwz r0, 0x0(r6)
    add r6, r6, r0
lbl_fn_805BEB58_000008A8:
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_fn_805BEB58_00000880
    b lbl_fn_805BEB58_000008C0
lbl_fn_805BEB58_000008B8:
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_fn_805BEB58_000008C0:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x4
    stw r0, 0x10(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BEC6C(void)
{
    nofralloc
    stw r4, 0x0(r3)
    blr
}

asm void fn_805BEC74(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805BEC74_00000908
    lhz r0, 0x6(r3)
    b lbl_fn_805BEC74_0000090C
lbl_fn_805BEC74_00000908:
    li r0, 0x0
lbl_fn_805BEC74_0000090C:
    clrlwi. r0, r0, 31
    beq lbl_fn_805BEC74_0000091C
    li r3, 0x1
    blr
lbl_fn_805BEC74_0000091C:
    li r3, 0x0
    blr
}

asm void fn_805BECA4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_805BECA4_00000944
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BECA4_00000944
    li r4, 0x1
lbl_fn_805BECA4_00000944:
    cmpwi r4, 0x0
    beq lbl_fn_805BECA4_000009CC
    cmpwi r3, 0x0
    beq lbl_fn_805BECA4_0000095C
    lhz r5, 0x4(r3)
    b lbl_fn_805BECA4_00000960
lbl_fn_805BECA4_0000095C:
    li r5, 0x0
lbl_fn_805BECA4_00000960:
    lwz r0, 0x0(r3)
    li r4, 0x0
    add. r3, r3, r0
    beq lbl_fn_805BECA4_00000980
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BECA4_00000980
    li r4, 0x1
lbl_fn_805BECA4_00000980:
    cmpwi r4, 0x0
    beq lbl_fn_805BECA4_000009CC
    cmpwi r3, 0x0
    beq lbl_fn_805BECA4_00000998
    lhz r0, 0x4(r3)
    b lbl_fn_805BECA4_0000099C
lbl_fn_805BECA4_00000998:
    li r0, 0x0
lbl_fn_805BECA4_0000099C:
    cmplw r5, r0
    beqlr
    cmpwi r3, 0x0
    beq lbl_fn_805BECA4_000009B4
    lhz r0, 0x4(r3)
    b lbl_fn_805BECA4_000009B8
lbl_fn_805BECA4_000009B4:
    li r0, 0x0
lbl_fn_805BECA4_000009B8:
    cmplw r5, r0
    bgt lbl_fn_805BECA4_000009CC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805BECA4_00000960
lbl_fn_805BECA4_000009CC:
    li r3, 0x0
    blr
}

asm void fn_805BED54(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_805BED54_000009F4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BED54_000009F4
    li r4, 0x1
lbl_fn_805BED54_000009F4:
    cmpwi r4, 0x0
    beq lbl_fn_805BED54_00000A80
    cmpwi r3, 0x0
    beq lbl_fn_805BED54_00000A0C
    lhz r4, 0x4(r3)
    b lbl_fn_805BED54_00000A10
lbl_fn_805BED54_00000A0C:
    li r4, 0x0
lbl_fn_805BED54_00000A10:
    addi r5, r4, 0x1
lbl_fn_805BED54_00000A14:
    lwz r0, 0x0(r3)
    li r4, 0x0
    add. r3, r3, r0
    beq lbl_fn_805BED54_00000A34
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805BED54_00000A34
    li r4, 0x1
lbl_fn_805BED54_00000A34:
    cmpwi r4, 0x0
    beq lbl_fn_805BED54_00000A80
    cmpwi r3, 0x0
    beq lbl_fn_805BED54_00000A4C
    lhz r0, 0x4(r3)
    b lbl_fn_805BED54_00000A50
lbl_fn_805BED54_00000A4C:
    li r0, 0x0
lbl_fn_805BED54_00000A50:
    cmplw r5, r0
    beqlr
    cmpwi r3, 0x0
    beq lbl_fn_805BED54_00000A68
    lhz r0, 0x4(r3)
    b lbl_fn_805BED54_00000A6C
lbl_fn_805BED54_00000A68:
    li r0, 0x0
lbl_fn_805BED54_00000A6C:
    cmplw r5, r0
    bgt lbl_fn_805BED54_00000A80
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805BED54_00000A14
lbl_fn_805BED54_00000A80:
    li r3, 0x0
    blr
}

asm void fn_805BEE08(void)
{
    nofralloc
    lwz r7, 0x0(r3)
    cmpwi r7, 0x0
    mr r8, r7
    beq lbl_fn_805BEE08_00000AA0
    lhz r3, 0x4(r7)
    b lbl_fn_805BEE08_00000AA4
lbl_fn_805BEE08_00000AA0:
    li r3, 0x0
lbl_fn_805BEE08_00000AA4:
    cntlzw r0, r7
    addi r9, r3, 0x1
    srwi r5, r0, 5
    li r3, 0x0
lbl_fn_805BEE08_00000AB4:
    cmpwi r5, 0x0
    beq lbl_fn_805BEE08_00000AC4
    li r0, 0x0
    b lbl_fn_805BEE08_00000AC8
lbl_fn_805BEE08_00000AC4:
    lwz r0, 0x0(r7)
lbl_fn_805BEE08_00000AC8:
    add. r6, r8, r0
    li r4, 0x0
    beq lbl_fn_805BEE08_00000AE4
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805BEE08_00000AE4
    li r4, 0x1
lbl_fn_805BEE08_00000AE4:
    cmpwi r4, 0x0
    beqlr
    cmpwi r6, 0x0
    beq lbl_fn_805BEE08_00000AFC
    lhz r0, 0x4(r6)
    b lbl_fn_805BEE08_00000B00
lbl_fn_805BEE08_00000AFC:
    li r0, 0x0
lbl_fn_805BEE08_00000B00:
    cmplw r9, r0
    bgtlr
    cmpwi r6, 0x0
    beq lbl_fn_805BEE08_00000B18
    lhz r0, 0x4(r6)
    b lbl_fn_805BEE08_00000B1C
lbl_fn_805BEE08_00000B18:
    li r0, 0x0
lbl_fn_805BEE08_00000B1C:
    cmplw r9, r0
    bne lbl_fn_805BEE08_00000B28
    addi r3, r3, 0x1
lbl_fn_805BEE08_00000B28:
    cmpwi r6, 0x0
    beq lbl_fn_805BEE08_00000B38
    lwz r0, 0x0(r6)
    b lbl_fn_805BEE08_00000B3C
lbl_fn_805BEE08_00000B38:
    li r0, 0x0
lbl_fn_805BEE08_00000B3C:
    add r8, r8, r0
    b lbl_fn_805BEE08_00000AB4
    blr
}

asm void fn_805BEEC8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_808884B8
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    beq lbl_fn_805BEEC8_00000BA4
    mr r3, r30
    b lbl_fn_805BEEC8_00000BAC
lbl_fn_805BEEC8_00000BA4:
    lis r3, lbl_807640C0@ha
    addi r3, r3, lbl_807640C0@l
lbl_fn_805BEEC8_00000BAC:
    bl strlen
    mr r31, r3
    addi r3, r29, 0x18
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    cmpwi r30, 0x0
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    beq lbl_fn_805BEEC8_00000BDC
    mr r7, r30
    b lbl_fn_805BEEC8_00000BE4
lbl_fn_805BEEC8_00000BDC:
    lis r7, lbl_807640C0@ha
    addi r7, r7, lbl_807640C0@l
lbl_fn_805BEEC8_00000BE4:
    cmpwi r30, 0x0
    addi r3, r29, 0x18
    li r4, 0x0
    li r5, 0x0
    beq lbl_fn_805BEEC8_00000C00
    mr r6, r30
    b lbl_fn_805BEEC8_00000C08
lbl_fn_805BEEC8_00000C00:
    lis r6, lbl_807640C0@ha
    addi r6, r6, lbl_807640C0@l
lbl_fn_805BEEC8_00000C08:
    add r7, r7, r31
    bl fn_80013F78
    lis r4, fn_805BEFD0@ha
    lis r5, fn_805BEFE8@ha
    addi r3, r29, 0x24
    li r6, 0x10
    addi r4, r4, fn_805BEFD0@l
    addi r5, r5, fn_805BEFE8@l
    li r7, 0xd
    bl fn_806958E0
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BEFD0(void)
{
    nofralloc
    li r4, 0x0
    addi r0, r3, 0x4
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_805BEFE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_805BEFE8_00000DD0
    beq lbl_fn_805BEFE8_00000DC0
    beq lbl_fn_805BEFE8_00000DC0
    beq lbl_fn_805BEFE8_00000DC0
    beq lbl_fn_805BEFE8_00000DC0
    lwz r31, 0x4(r3)
    cmpwi r31, 0x0
    beq lbl_fn_805BEFE8_00000DC0
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_805BEFE8_00000D2C
    lwz r29, 0x0(r30)
    cmpwi r29, 0x0
    beq lbl_fn_805BEFE8_00000CE8
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_805BEFE8_00000CCC
    bl fn_805BF8F8
lbl_fn_805BEFE8_00000CCC:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_805BEFE8_00000CE0
    mr r3, r27
    bl fn_805BF8F8
lbl_fn_805BEFE8_00000CE0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_805BEFE8_00000CE8:
    lwz r29, 0x4(r30)
    cmpwi r29, 0x0
    beq lbl_fn_805BEFE8_00000D24
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_805BEFE8_00000D08
    mr r3, r27
    bl fn_805BF8F8
lbl_fn_805BEFE8_00000D08:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_805BEFE8_00000D1C
    mr r3, r27
    bl fn_805BF8F8
lbl_fn_805BEFE8_00000D1C:
    mr r3, r29
    bl dtor_80084684
lbl_fn_805BEFE8_00000D24:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BEFE8_00000D2C:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_805BEFE8_00000DB8
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_805BEFE8_00000D74
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BEFE8_00000D58
    mr r3, r27
    bl fn_805BF8F8
lbl_fn_805BEFE8_00000D58:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BEFE8_00000D6C
    mr r3, r27
    bl fn_805BF8F8
lbl_fn_805BEFE8_00000D6C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BEFE8_00000D74:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_805BEFE8_00000DB0
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BEFE8_00000D94
    mr r3, r27
    bl fn_805BF8F8
lbl_fn_805BEFE8_00000D94:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BEFE8_00000DA8
    mr r3, r27
    bl fn_805BF8F8
lbl_fn_805BEFE8_00000DA8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BEFE8_00000DB0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_805BEFE8_00000DB8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805BEFE8_00000DC0:
    cmpwi r28, 0x0
    ble lbl_fn_805BEFE8_00000DD0
    mr r3, r27
    bl dtor_80084684
lbl_fn_805BEFE8_00000DD0:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BF168(void)
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
    beq lbl_fn_805BF168_00000E50
    lis r4, fn_805BEFE8@ha
    li r5, 0x10
    addi r4, r4, fn_805BEFE8@l
    li r6, 0xd
    addi r3, r3, 0x24
    bl fn_806959D8
    addic. r0, r30, 0x18
    beq lbl_fn_805BF168_00000E40
    lwz r0, 0x18(r30)
    srwi. r0, r0, 31
    beq lbl_fn_805BF168_00000E40
    lwz r3, 0x20(r30)
    bl dtor_80084684
lbl_fn_805BF168_00000E40:
    cmpwi r31, 0x0
    ble lbl_fn_805BF168_00000E50
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BF168_00000E50:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805BF1EC(void)
{
    nofralloc
    slwi r0, r4, 4
    add r3, r3, r0
    lwz r3, 0x24(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_805BF208(void)
{
    nofralloc
    slwi r0, r4, 4
    add r4, r3, r0
    addi r4, r4, 0x24
    b fn_805BF218
}

asm void fn_805BF218(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805BF218_00000EB8
    lfs f1, lbl_808884B8
    b lbl_fn_805BF218_00001084
lbl_fn_805BF218_00000EB8:
    lwz r5, 0xc(r4)
    lfs f0, 0xc(r5)
    fcmpo cr0, f1, f0
    bge lbl_fn_805BF218_00000ED0
    lfs f1, 0x10(r5)
    b lbl_fn_805BF218_00001084
lbl_fn_805BF218_00000ED0:
    lwz r3, 0x4(r4)
    addi r7, r4, 0x4
    b lbl_fn_805BF218_00000F00
lbl_fn_805BF218_00000EDC:
    lfs f0, 0xc(r3)
    fcmpo cr0, f0, f1
    mfcr r0
    srwi. r0, r0, 31
    bne lbl_fn_805BF218_00000EFC
    mr r7, r3
    lwz r3, 0x0(r3)
    b lbl_fn_805BF218_00000F00
lbl_fn_805BF218_00000EFC:
    lwz r3, 0x4(r3)
lbl_fn_805BF218_00000F00:
    cmpwi r3, 0x0
    bne lbl_fn_805BF218_00000EDC
    addi r3, r4, 0x4
    cmplw r7, r3
    bne lbl_fn_805BF218_00000F74
    lfs f1, lbl_808884B8
    b lbl_fn_805BF218_00000F68
lbl_fn_805BF218_00000F1C:
    lwz r4, 0x4(r5)
    lfs f1, 0x10(r5)
    cmpwi r4, 0x0
    beq lbl_fn_805BF218_00000F50
    b lbl_fn_805BF218_00000F34
lbl_fn_805BF218_00000F30:
    mr r4, r0
lbl_fn_805BF218_00000F34:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805BF218_00000F30
    mr r5, r4
    b lbl_fn_805BF218_00000F68
    b lbl_fn_805BF218_00000F50
lbl_fn_805BF218_00000F4C:
    mr r5, r4
lbl_fn_805BF218_00000F50:
    lwz r0, 0x8(r5)
    clrrwi r4, r0, 1
    lwz r0, 0x0(r4)
    cmplw r5, r0
    bne lbl_fn_805BF218_00000F4C
    mr r5, r4
lbl_fn_805BF218_00000F68:
    cmplw r5, r3
    bne lbl_fn_805BF218_00000F1C
    b lbl_fn_805BF218_00001084
lbl_fn_805BF218_00000F74:
    lfs f0, 0xc(r7)
    fcmpu cr0, f1, f0
    bne lbl_fn_805BF218_00000F88
    lfs f1, 0x10(r7)
    b lbl_fn_805BF218_00001084
lbl_fn_805BF218_00000F88:
    lwz r4, 0x0(r7)
    mr r3, r7
    cmpwi r4, 0x0
    beq lbl_fn_805BF218_00000FBC
    b lbl_fn_805BF218_00000FA0
lbl_fn_805BF218_00000F9C:
    mr r4, r0
lbl_fn_805BF218_00000FA0:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805BF218_00000F9C
    mr r3, r4
    b lbl_fn_805BF218_00000FD4
    b lbl_fn_805BF218_00000FBC
lbl_fn_805BF218_00000FB8:
    mr r3, r4
lbl_fn_805BF218_00000FBC:
    lwz r0, 0x8(r3)
    clrrwi r4, r0, 1
    lwz r0, 0x0(r4)
    cmplw r3, r0
    beq lbl_fn_805BF218_00000FB8
    mr r3, r4
lbl_fn_805BF218_00000FD4:
    lbz r0, 0x24(r3)
    lfs f3, 0xc(r3)
    cmpwi r0, 0x0
    lfs f4, 0xc(r7)
    lfs f5, 0x10(r3)
    lfs f6, 0x10(r7)
    beq lbl_fn_805BF218_00000FFC
    lbz r0, 0x24(r7)
    cmpwi r0, 0x0
    bne lbl_fn_805BF218_00001014
lbl_fn_805BF218_00000FFC:
    fsubs f2, f1, f3
    fsubs f1, f4, f3
    fsubs f0, f6, f5
    fdivs f1, f2, f1
    fmadds f1, f1, f0, f5
    b lbl_fn_805BF218_00001084
lbl_fn_805BF218_00001014:
    lfs f2, lbl_808884B8
    lfs f0, 0x1c(r3)
    fcmpu cr0, f2, f0
    bne lbl_fn_805BF218_00001038
    lfs f0, 0x20(r3)
    fcmpu cr0, f2, f0
    bne lbl_fn_805BF218_00001038
    fmr f1, f5
    b lbl_fn_805BF218_00001084
lbl_fn_805BF218_00001038:
    lfs f2, 0x20(r3)
    addi r4, r1, 0x18
    lfs f0, 0x1c(r3)
    addi r3, r1, 0x28
    stfs f0, 0x20(r1)
    addi r5, r1, 0x8
    li r6, 0x1
    stfs f3, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f2, 0x24(r1)
    lfs f2, 0x18(r7)
    lfs f0, 0x14(r7)
    stfs f0, 0x10(r1)
    stfs f4, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f2, 0x14(r1)
    bl fn_80507794
    addi r3, r1, 0x28
    bl fn_805077F4
lbl_fn_805BF218_00001084:
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805BF414(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    slwi r0, r5, 4
    add r5, r3, r0
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r7
    stw r30, 0x10(r1)
    mr r30, r6
    stw r29, 0xc(r1)
    mr r29, r4
    addi r4, r5, 0x24
    stw r28, 0x8(r1)
    mr r28, r3
    bl fn_805BF218
    stfs f1, 0x0(r29)
    slwi r0, r30, 4
    add r4, r28, r0
    fmr f1, f31
    mr r3, r28
    addi r4, r4, 0x24
    bl fn_805BF218
    stfs f1, 0x4(r29)
    slwi r0, r31, 4
    add r4, r28, r0
    fmr f1, f31
    mr r3, r28
    addi r4, r4, 0x24
    bl fn_805BF218
    stfs f1, 0x8(r29)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r29, 0xc(r1)
    lwz r28, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BF4B8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    frsp f10, f2
    stw r0, 0x54(r1)
    slwi r0, r4, 4
    add r3, r3, r0
    frsp f9, f3
    stw r31, 0x4c(r1)
    frsp f8, f4
    li r0, 0x1
    frsp f7, f5
    addi r31, r3, 0x24
    frsp f0, f6
    stfs f2, 0x10(r1)
    stfs f3, 0x14(r1)
    mr r3, r31
    addi r4, r1, 0x28
    addi r5, r1, 0xc
    stfs f4, 0x18(r1)
    addi r6, r1, 0x9
    addi r7, r1, 0x8
    stfs f5, 0x1c(r1)
    stfs f6, 0x20(r1)
    stb r0, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f8, 0x34(r1)
    stfs f7, 0x38(r1)
    stfs f0, 0x3c(r1)
    stb r0, 0x40(r1)
    bl fn_805BFA58
    lwz r5, 0xc(r1)
    mr r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_805BF4B8_000011E0
    lfs f1, 0xc(r5)
    lfs f0, 0x28(r1)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805BF4B8_000011FC
lbl_fn_805BF4B8_000011E0:
    lbz r5, 0x9(r1)
    mr r3, r31
    lbz r6, 0x8(r1)
    addi r7, r1, 0x28
    bl fn_805BF798
    lbz r3, lbl_8087E700
    b lbl_fn_805BF4B8_00001200
lbl_fn_805BF4B8_000011FC:
    lbz r3, lbl_8087E701
lbl_fn_805BF4B8_00001200:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805BF594(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f3, lbl_808884B8
    frsp f0, f2
    stw r0, 0x54(r1)
    slwi r0, r4, 4
    add r3, r3, r0
    addi r4, r1, 0x28
    stw r31, 0x4c(r1)
    li r0, 0x0
    addi r31, r3, 0x24
    stfs f2, 0x10(r1)
    mr r3, r31
    addi r5, r1, 0xc
    addi r6, r1, 0x9
    stfs f3, 0x14(r1)
    addi r7, r1, 0x8
    stfs f3, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f3, 0x20(r1)
    stb r0, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stb r0, 0x40(r1)
    bl fn_805BFA58
    lwz r5, 0xc(r1)
    mr r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_805BF594_000012B0
    lfs f1, 0xc(r5)
    lfs f0, 0x28(r1)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_805BF594_000012CC
lbl_fn_805BF594_000012B0:
    lbz r5, 0x9(r1)
    mr r3, r31
    lbz r6, 0x8(r1)
    addi r7, r1, 0x28
    bl fn_805BF798
    lbz r3, lbl_8087E700
    b lbl_fn_805BF594_000012D0
lbl_fn_805BF594_000012CC:
    lbz r3, lbl_8087E701
lbl_fn_805BF594_000012D0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805BF664(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r0, 0xd
    lfs f0, lbl_808884BC
    li r4, 0x0
    lfs f1, lbl_808884C0
    stfs f0, 0xc(r1)
    stfs f1, 0x8(r1)
    mtctr r0
lbl_fn_805BF664_00001304:
    add r5, r3, r4
    lwz r0, 0x24(r5)
    cmpwi r0, 0x0
    beq lbl_fn_805BF664_000013F0
    beq lbl_fn_805BF664_000013F0
    cmplwi r0, 0x1
    bne lbl_fn_805BF664_00001364
    lwz r5, 0x30(r5)
    frsp f2, f0
    lfs f0, 0xc(r5)
    addi r6, r5, 0xc
    fcmpo cr0, f2, f0
    bge lbl_fn_805BF664_0000133C
    addi r6, r1, 0xc
lbl_fn_805BF664_0000133C:
    lfs f0, 0x0(r6)
    frsp f1, f1
    stfs f0, 0xc(r1)
    lfsu f2, 0xc(r5)
    fcmpo cr0, f2, f1
    bge lbl_fn_805BF664_00001358
    addi r5, r1, 0x8
lbl_fn_805BF664_00001358:
    lfs f1, 0x0(r5)
    stfs f1, 0x8(r1)
    b lbl_fn_805BF664_000013F0
lbl_fn_805BF664_00001364:
    addi r6, r5, 0x28
    lwz r5, 0x30(r5)
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_805BF664_0000139C
    lwz r6, 0x0(r6)
    b lbl_fn_805BF664_00001384
lbl_fn_805BF664_00001380:
    mr r6, r0
lbl_fn_805BF664_00001384:
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    bne lbl_fn_805BF664_00001380
    b lbl_fn_805BF664_000013B4
    b lbl_fn_805BF664_0000139C
lbl_fn_805BF664_00001398:
    mr r6, r7
lbl_fn_805BF664_0000139C:
    lwz r0, 0x8(r6)
    clrrwi r7, r0, 1
    lwz r0, 0x0(r7)
    cmplw r6, r0
    beq lbl_fn_805BF664_00001398
    mr r6, r7
lbl_fn_805BF664_000013B4:
    frsp f2, f0
    lfsu f0, 0xc(r5)
    fcmpo cr0, f2, f0
    bge lbl_fn_805BF664_000013C8
    addi r5, r1, 0xc
lbl_fn_805BF664_000013C8:
    lfs f0, 0x0(r5)
    frsp f1, f1
    stfs f0, 0xc(r1)
    addi r5, r6, 0xc
    lfs f2, 0xc(r6)
    fcmpo cr0, f2, f1
    bge lbl_fn_805BF664_000013E8
    addi r5, r1, 0x8
lbl_fn_805BF664_000013E8:
    lfs f1, 0x0(r5)
    stfs f1, 0x8(r1)
lbl_fn_805BF664_000013F0:
    addi r4, r4, 0x10
    bdnz lbl_fn_805BF664_00001304
    frsp f1, f0
    stfs f1, 0x10(r3)
    lfs f0, 0x8(r1)
    stfs f0, 0x14(r3)
    fsubs f0, f0, f1
    stfs f0, 0x0(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_805BF798(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r8, 0x0(r3)
    mr r31, r3
    mr r26, r4
    mr r27, r5
    addis r0, r8, 0x1
    mr r28, r6
    cmplwi r0, 0xffff
    mr r29, r7
    bne lbl_fn_805BF798_00001474
    lis r4, lbl_807640C0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807640C0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805BF798_00001474:
    li r3, 0x28
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_805BF798_000014A8
    lis r3, __files@ha
    lis r4, lbl_80797A08@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80797A08@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805BF798_000014A8:
    addic. r3, r30, 0xc
    addi r0, r31, 0x4
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    beq lbl_fn_805BF798_000014F4
    lfs f0, 0x0(r29)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r29)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r29)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r29)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r29)
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r29)
    stfs f0, 0x14(r3)
    lbz r0, 0x18(r29)
    stb r0, 0x18(r3)
lbl_fn_805BF798_000014F4:
    lwz r30, 0xc(r1)
    li r0, 0x0
    stw r0, 0x4(r30)
    addic. r3, r30, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x0(r30)
    beq lbl_fn_805BF798_00001514
    stw r26, 0x0(r3)
lbl_fn_805BF798_00001514:
    cmpwi r27, 0x0
    beq lbl_fn_805BF798_00001524
    stw r30, 0x0(r26)
    b lbl_fn_805BF798_00001528
lbl_fn_805BF798_00001524:
    stw r30, 0x4(r26)
lbl_fn_805BF798_00001528:
    lwz r5, 0x0(r31)
    mr r3, r30
    lwz r4, 0x4(r31)
    addi r0, r5, 0x1
    stw r0, 0x0(r31)
    bl fn_8003E120
    cmpwi r28, 0x0
    beq lbl_fn_805BF798_0000154C
    stw r30, 0xc(r31)
lbl_fn_805BF798_0000154C:
    lwz r3, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805BF798_0000155C
    bl dtor_80084684
lbl_fn_805BF798_0000155C:
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805BF8F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_fn_805BF8F8_00001624
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_805BF8F8_000015E0
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BF8F8_000015C4
    bl fn_805BF8F8
lbl_fn_805BF8F8_000015C4:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BF8F8_000015D8
    mr r3, r28
    bl fn_805BF8F8
lbl_fn_805BF8F8_000015D8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BF8F8_000015E0:
    lwz r30, 0x4(r31)
    cmpwi r30, 0x0
    beq lbl_fn_805BF8F8_0000161C
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BF8F8_00001600
    mr r3, r28
    bl fn_805BF8F8
lbl_fn_805BF8F8_00001600:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805BF8F8_00001614
    mr r3, r28
    bl fn_805BF8F8
lbl_fn_805BF8F8_00001614:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BF8F8_0000161C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805BF8F8_00001624:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_805BF8F8_000016B0
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_fn_805BF8F8_0000166C
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805BF8F8_00001650
    mr r3, r28
    bl fn_805BF8F8
lbl_fn_805BF8F8_00001650:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805BF8F8_00001664
    mr r3, r28
    bl fn_805BF8F8
lbl_fn_805BF8F8_00001664:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805BF8F8_0000166C:
    lwz r31, 0x4(r30)
    cmpwi r31, 0x0
    beq lbl_fn_805BF8F8_000016A8
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805BF8F8_0000168C
    mr r3, r28
    bl fn_805BF8F8
lbl_fn_805BF8F8_0000168C:
    lwz r4, 0x4(r31)
    cmpwi r4, 0x0
    beq lbl_fn_805BF8F8_000016A0
    mr r3, r28
    bl fn_805BF8F8
lbl_fn_805BF8F8_000016A0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_805BF8F8_000016A8:
    mr r3, r30
    bl dtor_80084684
lbl_fn_805BF8F8_000016B0:
    mr r3, r29
    bl dtor_80084684
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805BFA58(void)
{
    nofralloc
    li r8, 0x0
    stw r8, 0x0(r5)
    li r0, 0x1
    addi r9, r3, 0x4
    lwz r10, 0x4(r3)
    stb r0, 0x0(r6)
    stb r0, 0x0(r7)
    b lbl_fn_805BFA58_00001730
lbl_fn_805BFA58_000016F8:
    lfs f1, 0x0(r4)
    mr r9, r10
    lfs f0, 0xc(r10)
    fcmpo cr0, f1, f0
    mfcr r3
    srwi. r3, r3, 31
    beq lbl_fn_805BFA58_00001720
    lwz r10, 0x0(r10)
    stb r0, 0x0(r6)
    b lbl_fn_805BFA58_00001730
lbl_fn_805BFA58_00001720:
    stw r10, 0x0(r5)
    lwz r10, 0x4(r10)
    stb r8, 0x0(r6)
    stb r8, 0x0(r7)
lbl_fn_805BFA58_00001730:
    cmpwi r10, 0x0
    bne lbl_fn_805BFA58_000016F8
    mr r3, r9
    blr
}

asm void ESP_InitLib(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r0, __esFd_8087E708
    cmpwi r0, 0x0
    bge lbl_ESP_InitLib_0000177C
    la r3, lbl_8087E710
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, __esFd_8087E708
    bge lbl_ESP_InitLib_0000177C
    mr r31, r3
lbl_ESP_InitLib_0000177C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void ESP_CloseLib(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    lwz r3, __esFd_8087E708
    cmpwi r3, 0x0
    blt lbl_ESP_CloseLib_000017D4
    bl fn_8061C8A0
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_ESP_CloseLib_000017D4
    li r0, -0x1
    stw r0, __esFd_8087E708
lbl_ESP_CloseLib_000017D4:
    lwz r0, 0x14(r1)
    mr r3, r4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805BFB70(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x120
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r9, r1, 0x20
    lwz r6, __esFd_8087E708
    cmpwi r6, 0x0
    bge lbl_fn_805BFB70_00001824
    li r3, -0x3f9
    b lbl_fn_805BFB70_00001870
lbl_fn_805BFB70_00001824:
    clrlwi. r0, r5, 27
    beq lbl_fn_805BFB70_00001834
    li r3, -0x3f9
    b lbl_fn_805BFB70_00001870
lbl_fn_805BFB70_00001834:
    stw r4, 0x24(r1)
    li r8, 0x8
    li r0, 0xd8
    li r4, 0x8
    stw r3, 0x20(r1)
    mr r3, r6
    li r6, 0x0
    stw r5, 0xf8(r1)
    li r5, 0x2
    stw r9, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r0, 0xfc(r1)
    bl fn_8061D4C0
    li r0, -0x1
    stw r0, __esFd_8087E708
lbl_fn_805BFB70_00001870:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_805BFC10(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    addi r10, r1, 0x20
    addi r11, r1, 0x40
    stw r31, -0x4(r12)
    mr r31, r6
    lwz r9, __esFd_8087E708
    cmpwi r9, 0x0
    blt lbl_fn_805BFC10_000018D4
    li r8, 0x0
    cmplw r6, r8
    bne lbl_fn_805BFC10_000018DC
lbl_fn_805BFC10_000018D4:
    li r3, -0x3f9
    b lbl_fn_805BFC10_0000198C
lbl_fn_805BFC10_000018DC:
    clrlwi. r0, r5, 27
    beq lbl_fn_805BFC10_000018EC
    li r3, -0x3f9
    b lbl_fn_805BFC10_0000198C
lbl_fn_805BFC10_000018EC:
    cmplw r5, r8
    stw r4, 0x24(r1)
    stw r3, 0x20(r1)
    bne lbl_fn_805BFC10_0000193C
    li r5, 0x8
    li r0, 0x4
    stw r5, 0xf4(r1)
    mr r3, r9
    li r4, 0x12
    li r5, 0x1
    stw r10, 0xf0(r1)
    li r6, 0x1
    stw r11, 0xf8(r1)
    stw r0, 0xfc(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    bne lbl_fn_805BFC10_0000198C
    lwz r0, 0x40(r1)
    stw r0, 0x0(r31)
    b lbl_fn_805BFC10_0000198C
lbl_fn_805BFC10_0000193C:
    lwz r3, 0x0(r6)
    cmpwi r3, 0x0
    bne lbl_fn_805BFC10_00001950
    li r3, -0x3f9
    b lbl_fn_805BFC10_0000198C
lbl_fn_805BFC10_00001950:
    mulli r0, r3, 0xd8
    stw r5, 0x100(r1)
    li r6, 0x8
    li r8, 0x4
    stw r3, 0x40(r1)
    mr r3, r9
    stw r6, 0xf4(r1)
    li r4, 0x13
    li r5, 0x2
    li r6, 0x1
    stw r10, 0xf0(r1)
    stw r11, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r0, 0x104(r1)
    bl IOS_Ioctlv
lbl_fn_805BFC10_0000198C:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void ESP_DiGetTicketView(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x120
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    addi r7, r1, 0xf0
    lwz r0, __esFd_8087E708
    cmpwi r0, 0x0
    blt lbl_ESP_DiGetTicketView_000019E4
    li r5, 0x0
    cmplw r4, r5
    bne lbl_ESP_DiGetTicketView_000019EC
lbl_ESP_DiGetTicketView_000019E4:
    li r3, -0x3f9
    b lbl_ESP_DiGetTicketView_00001A40
lbl_ESP_DiGetTicketView_000019EC:
    clrlwi. r0, r3, 27
    bne lbl_ESP_DiGetTicketView_000019FC
    clrlwi. r0, r4, 27
    beq lbl_ESP_DiGetTicketView_00001A04
lbl_ESP_DiGetTicketView_000019FC:
    li r3, -0x3f9
    b lbl_ESP_DiGetTicketView_00001A40
lbl_ESP_DiGetTicketView_00001A04:
    cmplw r3, r5
    stw r3, 0xf0(r1)
    bne lbl_ESP_DiGetTicketView_00001A18
    stw r5, 0xf4(r1)
    b lbl_ESP_DiGetTicketView_00001A20
lbl_ESP_DiGetTicketView_00001A18:
    li r0, 0x2a4
    stw r0, 0xf4(r1)
lbl_ESP_DiGetTicketView_00001A20:
    stw r4, 0xf8(r1)
    li r0, 0xd8
    lwz r3, __esFd_8087E708
    li r4, 0x1b
    stw r0, 0xfc(r1)
    li r5, 0x1
    li r6, 0x1
    bl IOS_Ioctlv
lbl_ESP_DiGetTicketView_00001A40:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}
