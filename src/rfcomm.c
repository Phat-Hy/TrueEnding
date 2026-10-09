#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80626AA0(void);
extern void fn_80626C60(void);
extern void fn_80626D50(void);
extern void fn_80627180(void);
extern void fn_80627400(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_80629870(void);
extern void fn_80629890(void);
extern void fn_80629E20(void);
extern void fn_80629E90(void);
extern void fn_80631070(void);
extern void fn_806380C0(void);
extern void fn_806384E4(void);
extern void fn_80642174(void);
extern void fn_806423A0(void);
extern void fn_806425D4(void);
extern void fn_80642764(void);
extern void fn_8064281C(void);
extern void fn_806428EC(void);
extern void fn_80642990(void);
extern void fn_80642A34(void);
extern void fn_8067E23C(void);

/* External data declarations */
extern u8 jumptable_807B7B08[];
extern u8 jumptable_807B7BA0[];
extern u8 jumptable_807B7C20[];
extern u8 jumptable_807B7C68[];
extern u8 jumptable_807B7CEC[];
extern u8 jumptable_807B7D44[];
extern u8 jumptable_807B7E18[];
extern u8 jumptable_807B7E80[];
extern u8 jumptable_807B7F18[];
extern u8 jumptable_807B7FB8[];
extern u8 jumptable_807B801C[];
extern u8 jumptable_807B8084[];
extern u8 lbl_80764FA8[];
extern u8 lbl_807B7550[];
extern u8 lbl_807B7588[];
extern u8 lbl_807B75A0[];
extern u8 lbl_807B75C0[];
extern u8 lbl_807B75D0[];
extern u8 lbl_807B75F0[];
extern u8 lbl_807B7610[];
extern u8 lbl_807B763C[];
extern u8 lbl_807B7660[];
extern u8 lbl_807B7690[];
extern u8 lbl_807B76F0[];
extern u8 lbl_807B7700[];
extern u8 lbl_807B7740[];
extern u8 lbl_807B7750[];
extern u8 lbl_807B7764[];
extern u8 lbl_807B7778[];
extern u8 lbl_807B7788[];
extern u8 lbl_807B77A0[];
extern u8 lbl_807B77C4[];
extern u8 lbl_807B77F8[];
extern u8 lbl_807B780C[];
extern u8 lbl_807B7824[];
extern u8 lbl_807B7850[];
extern u8 lbl_807B7880[];
extern u8 lbl_807B7980[];
extern u8 lbl_807B7998[];
extern u8 lbl_807B79C8[];
extern u8 lbl_807B7B78[];
extern u8 lbl_807B7CA4[];
extern u8 lbl_807B7CC8[];
extern u8 lbl_807B7D1C[];
extern u8 lbl_807B7D80[];
extern u8 lbl_807B7DA4[];
extern u8 lbl_807B7DC0[];
extern u8 lbl_807B7DD4[];
extern u8 lbl_807B7DF4[];
extern u8 lbl_807B7E54[];
extern u8 lbl_807B7FF8[];
extern u8 lbl_807B8058[];
extern u8 lbl_807B80C0[];
extern u8 lbl_807B80E8[];
extern u8 lbl_807B81C0[];
extern u8 lbl_807B81D0[];
extern u8 lbl_807B81F0[];
extern u8 lbl_807B8214[];
extern u8 lbl_807B8238[];
extern u8 lbl_808238C8[];

/* Small data declarations */
extern u32 lbl_8087EB08;
extern u32 lbl_8087EB10;

/* Function declarations */
void fn_806482EC(void);
void fn_8064844C(void);
void fn_806484E8(void);
void fn_80648698(void);
void fn_8064879C(void);
void fn_806488DC(void);
void fn_80648A20(void);
void fn_80648B70(void);
void fn_80648C88(void);
void fn_80648E00(void);
void fn_80648EC4(void);
void fn_80648F8C(void);
void fn_80648FF4(void);
void fn_80649094(void);
void fn_8064912C(void);
void fn_8064932C(void);
void fn_8064945C(void);
void fn_80649554(void);
void fn_806496E8(void);
void fn_80649864(void);
void fn_80649940(void);
void fn_80649994(void);
void fn_80649A1C(void);
void fn_80649A8C(void);
void fn_80649AF4(void);
void fn_80649CC0(void);
void fn_80649D3C(void);
void fn_80649DC8(void);
void fn_80649ECC(void);
void fn_80649FD4(void);
void fn_8064A0DC(void);
void fn_8064A0E0(void);
void fn_8064A204(void);
void fn_8064A4A4(void);
void fn_8064A5D8(void);
void fn_8064A5F4(void);
void fn_8064A638(void);
void fn_8064A84C(void);
void fn_8064AA08(void);
void fn_8064AB30(void);
void fn_8064ACA4(void);
void fn_8064ADC4(void);
void fn_8064AEDC(void);
void fn_8064B054(void);
void fn_8064B148(void);
void fn_8064B238(void);
void fn_8064B2C8(void);
void fn_8064B43C(void);
void fn_8064B5D8(void);
void fn_8064B794(void);
void fn_8064B8E4(void);
void fn_8064BAD0(void);
void fn_8064BBEC(void);
void fn_8064BCD4(void);
void fn_8064BFE0(void);
void fn_8064C14C(void);
void fn_8064C1D8(void);
void fn_8064C1DC(void);
void fn_8064C1E4(void);
void fn_8064C248(void);
void fn_8064C2AC(void);
void fn_8064C334(void);
void fn_8064C3D8(void);
void fn_8064C404(void);
void fn_8064C46C(void);
void fn_8064C4DC(void);
void fn_8064C5BC(void);
void fn_8064C5E4(void);
void fn_8064C6A0(void);
void fn_8064C6C0(void);
void fn_8064C764(void);
void fn_8064C808(void);
void fn_8064C8A0(void);
void fn_8064C8CC(void);
void fn_8064C904(void);
void fn_8064C9B4(void);
void fn_8064CA64(void);
void fn_8064CB28(void);
void fn_8064CBD8(void);
void fn_8064CD70(void);
void fn_8064CE58(void);
void fn_8064CEDC(void);
void fn_8064CF60(void);
void fn_8064D080(void);
void fn_8064D130(void);
void fn_8064D24C(void);
void fn_8064D2F4(void);
void fn_8064D3B4(void);
void fn_8064D928(void);
void fn_8064DF4C(void);
void fn_8064DF84(void);
void fn_8064DFD0(void);
void fn_8064E128(void);
void fn_8064E1B0(void);
void fn_8064E224(void);
void fn_8064E27C(void);
void fn_8064E2FC(void);
void fn_8064E354(void);
void fn_8064E418(void);
void fn_8064E454(void);
void fn_8064E4A8(void);
void fn_8064E600(void);
void fn_8064E68C(void);
void fn_8064E6C8(void);

asm void fn_806482EC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r5, lbl_808238C8@ha
    mr r29, r3
    addi r5, r5, lbl_808238C8@l
    mr r30, r4
    lbz r0, 0x414(r5)
    li r31, 0x1
    cmplwi r0, 0x4
    blt lbl_fn_806482EC_0000004C
    lis r3, 0x9
    lis r4, lbl_807B7588@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7588@l
    bl fn_80629830
lbl_fn_806482EC_0000004C:
    lis r22, lbl_808238C8@ha
    li r20, 0x0
    addi r22, r22, lbl_808238C8@l
    lis r23, 0x9
    lis r24, lbl_807B75A0@ha
    li r26, 0xc
    addi r21, r22, 0x68
    li r25, 0x18
    lis r28, 0x1
    li r27, 0x0
lbl_fn_806482EC_00000074:
    lwz r0, 0x6c(r21)
    cmplw r0, r29
    bne lbl_fn_806482EC_00000128
    cmpwi r30, 0x0
    li r31, 0x0
    bne lbl_fn_806482EC_000000A0
    lbz r4, 0xd(r21)
    mr r3, r29
    lhz r5, 0x12(r21)
    bl fn_8064C4DC
    b lbl_fn_806482EC_00000128
lbl_fn_806482EC_000000A0:
    lbz r0, 0x414(r22)
    cmplwi r0, 0x2
    blt lbl_fn_806482EC_000000BC
    mr r5, r30
    addi r3, r23, 0x1
    addi r4, r24, lbl_807B75A0@l
    bl fn_80629830
lbl_fn_806482EC_000000BC:
    cmplwi r30, 0x4
    bne lbl_fn_806482EC_000000CC
    stb r25, 0xe(r21)
    b lbl_fn_806482EC_000000D0
lbl_fn_806482EC_000000CC:
    stb r26, 0xe(r21)
lbl_fn_806482EC_000000D0:
    mr r3, r29
    bl fn_8064E128
    stw r27, 0x6c(r21)
    lwz r12, 0x8c(r21)
    cmpwi r12, 0x0
    beq lbl_fn_806482EC_00000104
    lwz r0, 0x88(r21)
    rlwinm. r0, r0, 0, 16, 16
    beq lbl_fn_806482EC_00000104
    addi r3, r28, -0x8000
    lbz r4, 0x0(r21)
    mtctr r12
    bctrl
lbl_fn_806482EC_00000104:
    lwz r12, 0x90(r21)
    cmpwi r12, 0x0
    beq lbl_fn_806482EC_00000120
    lbz r4, 0x0(r21)
    li r3, 0xc
    mtctr r12
    bctrl
lbl_fn_806482EC_00000120:
    mr r3, r21
    bl fn_80649864
lbl_fn_806482EC_00000128:
    addi r20, r20, 0x1
    addi r21, r21, 0xa4
    cmpwi r20, 0x5
    blt lbl_fn_806482EC_00000074
    cmpwi r31, 0x0
    beq lbl_fn_806482EC_00000148
    mr r3, r29
    bl fn_8064E354
lbl_fn_806482EC_00000148:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8064844C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_808238C8@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_808238C8@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_8064844C_0000019C
    lis r3, 0x9
    lis r4, lbl_807B75C0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B75C0@l
    bl fn_80629810
lbl_fn_8064844C_0000019C:
    lis r3, lbl_808238C8@ha
    li r0, 0x5
    addi r3, r3, lbl_808238C8@l
    addi r3, r3, 0x68
    mtctr r0
lbl_fn_8064844C_000001B0:
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8064844C_000001C4
    cmplw r0, r31
    bne lbl_fn_8064844C_000001D4
lbl_fn_8064844C_000001C4:
    mr r3, r31
    li r4, 0x0
    bl fn_8064C3D8
    b lbl_fn_8064844C_000001E8
lbl_fn_8064844C_000001D4:
    addi r3, r3, 0xa4
    bdnz lbl_fn_8064844C_000001B0
    mr r3, r31
    li r4, 0x1
    bl fn_8064C3D8
lbl_fn_8064844C_000001E8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806484E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r4
    mr r30, r3
    mr r26, r5
    mr r27, r6
    mr r28, r7
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r29, r3
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_806484E8_0000025C
    lis r3, 0x9
    lis r4, lbl_807B75D0@ha
    mr r5, r31
    mr r6, r26
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B75D0@l
    bl fn_80629850
lbl_fn_806484E8_0000025C:
    cmpwi r29, 0x0
    bne lbl_fn_806484E8_000002C8
    mr r3, r31
    bl fn_80649994
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_806484E8_000002BC
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl fn_8064CA64
    mr r3, r30
    bl fn_8064E354
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_806484E8_00000394
    lis r3, 0x9
    lis r4, lbl_807B75F0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B75F0@l
    bl fn_80629810
    b lbl_fn_806484E8_00000394
lbl_fn_806484E8_000002BC:
    lbz r0, 0x0(r3)
    add r3, r30, r31
    stb r0, 0x24(r3)
lbl_fn_806484E8_000002C8:
    addi r3, r29, 0x6
    addi r4, r30, 0x62
    li r5, 0x6
    bl memcpy
    mr r3, r29
    bl fn_806496E8
    stw r30, 0x6c(r29)
    lhz r0, 0x12(r29)
    cmplw r0, r26
    bge lbl_fn_806484E8_000002F4
    mr r26, r0
lbl_fn_806484E8_000002F4:
    sth r26, 0x12(r29)
    sth r26, 0x14(r29)
    lbz r0, 0x72(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806484E8_00000324
    cmpwi r27, 0x0
    bne lbl_fn_806484E8_0000031C
    li r0, 0x1
    stb r0, 0x72(r30)
    b lbl_fn_806484E8_00000324
lbl_fn_806484E8_0000031C:
    li r0, 0x2
    stb r0, 0x72(r30)
lbl_fn_806484E8_00000324:
    cmpwi r27, 0x0
    bne lbl_fn_806484E8_00000338
    li r6, 0x0
    li r7, 0x0
    b lbl_fn_806484E8_00000384
lbl_fn_806484E8_00000338:
    lbz r0, 0x72(r30)
    cmplwi r0, 0x2
    bne lbl_fn_806484E8_0000037C
    cmpwi r28, 0x0
    sth r28, 0x98(r29)
    bne lbl_fn_806484E8_00000358
    li r0, 0x1
    stb r0, 0x24(r29)
lbl_fn_806484E8_00000358:
    lhz r3, 0x9c(r29)
    li r6, 0xe0
    li r0, 0x7
    cmplwi r3, 0x7
    bge lbl_fn_806484E8_00000370
    mr r0, r3
lbl_fn_806484E8_00000370:
    clrlwi r7, r0, 24
    sth r7, 0x9a(r29)
    b lbl_fn_806484E8_00000384
lbl_fn_806484E8_0000037C:
    li r6, 0x0
    li r7, 0x0
lbl_fn_806484E8_00000384:
    lhz r5, 0x12(r29)
    mr r3, r30
    mr r4, r31
    bl fn_8064C5BC
lbl_fn_806484E8_00000394:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80648698(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r27, r4
    mr r26, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r31, r3
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80648698_00000414
    lis r3, 0x9
    lis r4, lbl_807B7610@ha
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r8, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7610@l
    bl fn_80629890
lbl_fn_80648698_00000414:
    cmpwi r31, 0x0
    beq lbl_fn_80648698_00000498
    lbz r0, 0x72(r26)
    cmpwi r0, 0x0
    bne lbl_fn_80648698_00000444
    cmplwi r29, 0xe0
    bne lbl_fn_80648698_0000043C
    li r0, 0x2
    stb r0, 0x72(r26)
    b lbl_fn_80648698_00000444
lbl_fn_80648698_0000043C:
    li r0, 0x1
    stb r0, 0x72(r26)
lbl_fn_80648698_00000444:
    lhz r0, 0x12(r31)
    cmplw r0, r28
    bge lbl_fn_80648698_00000454
    mr r28, r0
lbl_fn_80648698_00000454:
    sth r28, 0x12(r31)
    sth r28, 0x14(r31)
    lbz r0, 0x72(r26)
    cmplwi r0, 0x2
    bne lbl_fn_80648698_0000047C
    cmpwi r30, 0x0
    sth r30, 0x98(r31)
    bne lbl_fn_80648698_0000047C
    li r0, 0x1
    stb r0, 0x24(r31)
lbl_fn_80648698_0000047C:
    lbz r0, 0x2(r31)
    cmplwi r0, 0x1
    bne lbl_fn_80648698_00000498
    lbz r4, 0xd(r31)
    mr r3, r26
    lhz r5, 0x12(r31)
    bl fn_8064C404
lbl_fn_80648698_00000498:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064879C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r31, r3
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_8064879C_00000510
    lis r3, 0x9
    lis r4, lbl_807B763C@ha
    mr r5, r29
    mr r6, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B763C@l
    bl fn_80629850
lbl_fn_8064879C_00000510:
    cmpwi r31, 0x0
    bne lbl_fn_8064879C_00000550
    mr r3, r29
    bl fn_80649994
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8064879C_00000544
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    li r6, 0x1
    bl fn_8064C46C
    b lbl_fn_8064879C_000005D0
lbl_fn_8064879C_00000544:
    lbz r0, 0x0(r3)
    add r3, r28, r29
    stb r0, 0x24(r3)
lbl_fn_8064879C_00000550:
    cmpwi r30, 0x0
    beq lbl_fn_8064879C_00000568
    lhz r0, 0x14(r31)
    cmplw r30, r0
    bge lbl_fn_8064879C_00000568
    sth r30, 0x14(r31)
lbl_fn_8064879C_00000568:
    mr r3, r28
    bl fn_8064E224
    lhz r5, 0x12(r31)
    mr r3, r28
    mr r4, r29
    li r6, 0x0
    bl fn_8064C46C
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8064879C_000005AC
    lwz r0, 0x88(r31)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8064879C_000005AC
    lbz r4, 0x0(r31)
    li r3, 0x200
    mtctr r12
    bctrl
lbl_fn_8064879C_000005AC:
    lwz r12, 0x90(r31)
    cmpwi r12, 0x0
    beq lbl_fn_8064879C_000005C8
    lbz r4, 0x0(r31)
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_8064879C_000005C8:
    li r0, 0x2
    stb r0, 0x2(r31)
lbl_fn_8064879C_000005D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806488DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r4
    mr r27, r3
    mr r29, r5
    mr r30, r6
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r31, r3
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_806488DC_00000650
    lis r3, 0x9
    lis r4, lbl_807B7660@ha
    mr r5, r28
    mr r6, r29
    mr r7, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7660@l
    bl fn_80629870
lbl_fn_806488DC_00000650:
    cmpwi r31, 0x0
    beq lbl_fn_806488DC_0000071C
    cmpwi r30, 0x0
    beq lbl_fn_806488DC_00000678
    li r0, 0xc
    mr r3, r31
    stb r0, 0xe(r31)
    li r4, 0xc
    bl fn_80649554
    b lbl_fn_806488DC_0000071C
lbl_fn_806488DC_00000678:
    cmpwi r29, 0x0
    beq lbl_fn_806488DC_00000690
    lhz r0, 0x14(r31)
    cmplw r29, r0
    bge lbl_fn_806488DC_00000690
    sth r29, 0x14(r31)
lbl_fn_806488DC_00000690:
    mr r3, r27
    bl fn_8064E224
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806488DC_000006C0
    lwz r0, 0x88(r31)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_806488DC_000006C0
    lbz r4, 0x0(r31)
    li r3, 0x200
    mtctr r12
    bctrl
lbl_fn_806488DC_000006C0:
    lwz r12, 0x90(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806488DC_000006DC
    lbz r4, 0x0(r31)
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_806488DC_000006DC:
    li r0, 0x2
    stb r0, 0x2(r31)
    lhz r0, 0x4(r31)
    cmplwi r0, 0x1103
    beq lbl_fn_806488DC_000006F8
    cmplwi r0, 0x1111
    bne lbl_fn_806488DC_0000070C
lbl_fn_806488DC_000006F8:
    lwz r3, 0x6c(r31)
    li r5, 0x0
    lbz r4, 0xd(r31)
    bl fn_8064C5E4
    b lbl_fn_806488DC_0000071C
lbl_fn_806488DC_0000070C:
    lwz r3, 0x6c(r31)
    addi r5, r31, 0x5a
    lbz r4, 0xd(r31)
    bl fn_8064C6C0
lbl_fn_806488DC_0000071C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80648A20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    mr r30, r3
    mr r31, r5
    mr r28, r6
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r29, r3
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80648A20_00000788
    lis r3, 0x9
    lis r4, lbl_807B7690@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7690@l
    bl fn_80629810
lbl_fn_80648A20_00000788:
    cmpwi r29, 0x0
    bne lbl_fn_80648A20_00000810
    mr r3, r27
    bl fn_80649994
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80648A20_00000804
    lbz r7, 0x0(r31)
    mr r4, r27
    lbz r0, 0x1(r31)
    mr r5, r31
    li r6, 0x0
    stb r7, 0x51(r3)
    stb r0, 0x52(r3)
    lbz r7, 0x2(r31)
    lbz r0, 0x3(r31)
    stb r7, 0x53(r3)
    stb r0, 0x54(r3)
    lbz r7, 0x4(r31)
    lbz r0, 0x5(r31)
    stb r7, 0x55(r3)
    stb r0, 0x56(r3)
    lbz r7, 0x6(r31)
    lbz r0, 0x7(r31)
    stb r7, 0x57(r3)
    stb r0, 0x58(r3)
    lbz r0, 0x8(r31)
    stb r0, 0x59(r3)
    mr r3, r30
    bl fn_8064C6A0
    b lbl_fn_80648A20_0000086C
lbl_fn_80648A20_00000804:
    lbz r0, 0x0(r3)
    add r3, r30, r27
    stb r0, 0x24(r3)
lbl_fn_80648A20_00000810:
    lbz r7, 0x0(r31)
    mr r3, r30
    lbz r0, 0x1(r31)
    mr r4, r27
    mr r5, r31
    mr r6, r28
    stb r7, 0x51(r29)
    stb r0, 0x52(r29)
    lbz r7, 0x2(r31)
    lbz r0, 0x3(r31)
    stb r7, 0x53(r29)
    stb r0, 0x54(r29)
    lbz r7, 0x4(r31)
    lbz r0, 0x5(r31)
    stb r7, 0x55(r29)
    stb r0, 0x56(r29)
    lbz r7, 0x6(r31)
    lbz r0, 0x7(r31)
    stb r7, 0x57(r29)
    stb r0, 0x58(r29)
    lbz r0, 0x8(r31)
    stb r0, 0x59(r29)
    bl fn_8064C6A0
lbl_fn_80648A20_0000086C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80648B70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B7550@ha
    addi r31, r31, lbl_807B7550@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r30, r3
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80648B70_000008DC
    lis r3, 0x9
    addi r4, r31, 0x150
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_80648B70_000008DC:
    cmpwi r30, 0x0
    bne lbl_fn_80648B70_0000090C
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80648B70_0000097C
    lis r3, 0x9
    addi r4, r31, 0x160
    addi r3, r3, 0x1
    bl fn_80629810
    b lbl_fn_80648B70_0000097C
lbl_fn_80648B70_0000090C:
    cmpwi r29, 0x0
    beq lbl_fn_80648B70_00000938
    li r0, 0xe
    mr r3, r28
    stb r0, 0xe(r30)
    lbz r4, 0xd(r30)
    bl fn_8064C8A0
    mr r3, r30
    li r4, 0xe
    bl fn_80649554
    b lbl_fn_80648B70_0000097C
lbl_fn_80648B70_00000938:
    lbz r0, 0x64(r30)
    clrlwi. r0, r0, 31
    bne lbl_fn_80648B70_00000958
    lwz r3, 0x6c(r30)
    addi r5, r30, 0x5a
    lbz r4, 0xd(r30)
    bl fn_8064C6C0
    b lbl_fn_80648B70_0000097C
lbl_fn_80648B70_00000958:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_80648B70_0000097C
    lis r3, 0x9
    addi r4, r31, 0x178
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_80648B70_0000097C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80648C88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r31, r3
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80648C88_000009E8
    lis r3, 0x9
    lis r4, lbl_807B76F0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B76F0@l
    bl fn_80629810
lbl_fn_80648C88_000009E8:
    cmpwi r31, 0x0
    beq lbl_fn_80648C88_00000AF8
    lbz r4, 0x5f(r31)
    mr r3, r31
    lbz r5, 0x0(r30)
    bl fn_80649A8C
    lbz r0, 0x0(r30)
    mr r29, r3
    stb r0, 0x5f(r31)
    lbz r0, 0x1(r30)
    stb r0, 0x60(r31)
    lbz r0, 0x2(r30)
    stb r0, 0x61(r31)
    lbz r0, 0x3(r30)
    stb r0, 0x62(r31)
    lbz r0, 0x4(r30)
    stb r0, 0x63(r31)
    lbz r4, 0x64(r31)
    clrlwi. r0, r4, 31
    bne lbl_fn_80648C88_00000A4C
    lwz r3, 0x6c(r31)
    addi r5, r31, 0x5a
    lbz r4, 0xd(r31)
    bl fn_8064C6C0
    b lbl_fn_80648C88_00000A74
lbl_fn_80648C88_00000A4C:
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_80648C88_00000A60
    lwz r0, 0x88(r31)
    rlwinm r0, r0, 0, 22, 22
    or r29, r3, r0
lbl_fn_80648C88_00000A60:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_fn_80648C88_00000A74
    mr r3, r31
    bl fn_8064945C
    or r29, r29, r3
lbl_fn_80648C88_00000A74:
    lbz r0, 0x64(r31)
    ori r0, r0, 0xc
    stb r0, 0x64(r31)
    lbz r0, 0x1(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80648C88_00000A98
    lwz r0, 0x88(r31)
    rlwinm r0, r0, 0, 25, 25
    or r29, r29, r0
lbl_fn_80648C88_00000A98:
    cmpwi r29, 0x0
    beq lbl_fn_80648C88_00000ABC
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80648C88_00000ABC
    mr r3, r29
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_fn_80648C88_00000ABC:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80648C88_00000AF8
    lbz r0, 0x5f(r31)
    lis r3, 0x9
    lis r4, lbl_807B7700@ha
    extrwi r8, r0, 1, 28
    extrwi r7, r0, 1, 29
    extrwi r6, r0, 1, 30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7700@l
    clrlwi r5, r0, 31
    bl fn_80629890
lbl_fn_80648C88_00000AF8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80648E00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r31, r3
    addi r4, r4, lbl_808238C8@l
    li r30, 0x0
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80648E00_00000B5C
    lis r3, 0x9
    lis r4, lbl_807B7740@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7740@l
    bl fn_80629810
lbl_fn_80648E00_00000B5C:
    cmpwi r31, 0x0
    beq lbl_fn_80648E00_00000BC0
    lbz r3, 0x64(r31)
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_fn_80648E00_00000B88
    ori r3, r3, 0x2
    rlwinm. r0, r3, 0, 29, 29
    stb r3, 0x64(r31)
    beq lbl_fn_80648E00_00000B88
    lwz r0, 0x88(r31)
    rlwinm r30, r0, 0, 22, 22
lbl_fn_80648E00_00000B88:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_80648E00_00000B9C
    mr r3, r31
    bl fn_8064945C
    or r30, r30, r3
lbl_fn_80648E00_00000B9C:
    cmpwi r30, 0x0
    beq lbl_fn_80648E00_00000BC0
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80648E00_00000BC0
    mr r3, r30
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_fn_80648E00_00000BC0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80648EC4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r31, r3
    addi r4, r4, lbl_808238C8@l
    li r30, 0x0
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80648EC4_00000C28
    lis r3, 0x9
    lis r4, lbl_807B7750@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7750@l
    bl fn_80629810
lbl_fn_80648EC4_00000C28:
    cmpwi r31, 0x0
    beq lbl_fn_80648EC4_00000C84
    lbz r3, 0xf(r31)
    rlwinm. r0, r29, 0, 30, 30
    or r0, r3, r29
    stb r0, 0xf(r31)
    beq lbl_fn_80648EC4_00000C48
    ori r30, r30, 0x2000
lbl_fn_80648EC4_00000C48:
    clrlwi. r0, r29, 31
    beq lbl_fn_80648EC4_00000C54
    ori r30, r30, 0x40
lbl_fn_80648EC4_00000C54:
    rlwinm. r0, r29, 0, 24, 29
    beq lbl_fn_80648EC4_00000C60
    ori r30, r30, 0x80
lbl_fn_80648EC4_00000C60:
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80648EC4_00000C84
    lwz r0, 0x88(r31)
    and. r3, r0, r30
    beq lbl_fn_80648EC4_00000C84
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_fn_80648EC4_00000C84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80648F8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r31, r3
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80648F8C_00000CE0
    lis r3, 0x9
    lis r4, lbl_807B7764@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7764@l
    bl fn_80629810
lbl_fn_80648F8C_00000CE0:
    cmpwi r31, 0x0
    beq lbl_fn_80648F8C_00000CF4
    mr r3, r31
    li r4, 0x13
    bl fn_80649554
lbl_fn_80648F8C_00000CF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80648FF4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_808238C8@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_808238C8@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80648FF4_00000D4C
    lis r3, 0x9
    lis r4, lbl_807B7778@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7778@l
    bl fn_80629810
lbl_fn_80648FF4_00000D4C:
    lis r3, lbl_808238C8@ha
    li r30, 0x0
    addi r3, r3, lbl_808238C8@l
    addi r31, r3, 0x68
lbl_fn_80648FF4_00000D5C:
    lwz r0, 0x6c(r31)
    cmplw r0, r29
    bne lbl_fn_80648FF4_00000D74
    mr r3, r31
    li r4, 0x10
    bl fn_80649554
lbl_fn_80648FF4_00000D74:
    addi r30, r30, 0x1
    addi r31, r31, 0xa4
    cmpwi r30, 0x5
    blt lbl_fn_80648FF4_00000D5C
    mr r3, r29
    bl fn_8064E128
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80649094(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_808238C8@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_808238C8@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80649094_00000DEC
    lis r3, 0x9
    lis r4, lbl_807B7788@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7788@l
    bl fn_80629810
lbl_fn_80649094_00000DEC:
    lis r3, lbl_808238C8@ha
    li r30, 0x0
    addi r3, r3, lbl_808238C8@l
    addi r31, r3, 0x68
lbl_fn_80649094_00000DFC:
    lwz r0, 0x6c(r31)
    cmplw r0, r29
    bne lbl_fn_80649094_00000E14
    mr r3, r31
    li r4, 0x12
    bl fn_80649554
lbl_fn_80649094_00000E14:
    addi r30, r30, 0x1
    addi r31, r31, 0xa4
    cmpwi r30, 0x5
    blt lbl_fn_80649094_00000DFC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064912C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r4
    mr r27, r3
    mr r29, r5
    bl fn_80649940
    lis r4, lbl_808238C8@ha
    mr r31, r3
    addi r4, r4, lbl_808238C8@l
    li r30, 0x0
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_8064912C_00000E98
    lis r3, 0x9
    lis r4, lbl_807B77A0@ha
    lhz r5, 0x2(r29)
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B77A0@l
    bl fn_80629830
lbl_fn_8064912C_00000E98:
    cmpwi r31, 0x0
    bne lbl_fn_8064912C_00000EAC
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_8064912C_00001028
lbl_fn_8064912C_00000EAC:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064912C_00000EF4
    mr r3, r31
    li r4, 0x1
    li r5, 0x1
    bl fn_80649AF4
    lhz r0, 0x4(r29)
    lwz r12, 0x94(r31)
    add r4, r29, r0
    lbz r3, 0x0(r31)
    addi r4, r4, 0x8
    lhz r5, 0x2(r29)
    mtctr r12
    bctrl
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_8064912C_00001028
lbl_fn_8064912C_00000EF4:
    lhz r4, 0x2(r29)
    lwz r0, 0x40(r31)
    add r0, r0, r4
    cmplwi r0, 0x2ee0
    bgt lbl_fn_8064912C_00000F1C
    lhz r3, 0x38(r31)
    lhz r0, 0xa0(r31)
    addi r3, r3, 0x1
    cmpw r3, r0
    ble lbl_fn_8064912C_00000F60
lbl_fn_8064912C_00000F1C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064912C_00000F44
    lis r3, 0x9
    lis r4, lbl_807B77C4@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B77C4@l
    bl fn_80629810
lbl_fn_8064912C_00000F44:
    mr r3, r29
    bl fn_80626D50
    mr r3, r27
    mr r4, r28
    li r5, 0x2
    bl fn_8064C808
    b lbl_fn_8064912C_00001028
lbl_fn_8064912C_00000F60:
    lbz r5, 0x4e(r31)
    cmpwi r5, 0x0
    beq lbl_fn_8064912C_00000FAC
    lwz r0, 0x88(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_8064912C_00000FAC
    lhz r0, 0x4(r29)
    add r3, r29, r0
    addi r3, r3, 0x8
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8064912C_00000FAC
lbl_fn_8064912C_00000F90:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    cmplw r0, r5
    bne lbl_fn_8064912C_00000FA8
    ori r30, r30, 0x2
    b lbl_fn_8064912C_00000FAC
lbl_fn_8064912C_00000FA8:
    bdnz lbl_fn_8064912C_00000F90
lbl_fn_8064912C_00000FAC:
    mr r4, r29
    addi r3, r31, 0x30
    bl fn_80627180
    lwz r6, 0x40(r31)
    mr r3, r31
    lhz r0, 0x2(r29)
    li r4, 0x0
    li r5, 0x0
    add r0, r6, r0
    stw r0, 0x40(r31)
    bl fn_80649AF4
    lbz r0, 0x3d(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064912C_00000FF8
    rlwinm. r0, r30, 0, 30, 30
    beq lbl_fn_8064912C_00001028
    li r0, 0x1
    stb r0, 0x65(r31)
    b lbl_fn_8064912C_00001028
lbl_fn_8064912C_00000FF8:
    lwz r12, 0x8c(r31)
    ori r30, r30, 0x1
    lwz r0, 0x88(r31)
    cmpwi r12, 0x0
    and r30, r30, r0
    beq lbl_fn_8064912C_00001028
    cmpwi r30, 0x0
    beq lbl_fn_8064912C_00001028
    mr r3, r30
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_fn_8064912C_00001028:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064932C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_808238C8@ha
    mr r26, r3
    addi r6, r6, lbl_808238C8@l
    mr r27, r4
    lbz r0, 0x414(r6)
    mr r28, r5
    li r29, 0x0
    cmplwi r0, 0x4
    blt lbl_fn_8064932C_0000108C
    lis r3, 0x9
    lis r4, lbl_807B77F8@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B77F8@l
    bl fn_80629830
lbl_fn_8064932C_0000108C:
    cmpwi r27, 0x0
    bne lbl_fn_8064932C_0000109C
    stb r28, 0x71(r26)
    b lbl_fn_8064932C_000010C0
lbl_fn_8064932C_0000109C:
    mr r3, r26
    mr r4, r27
    bl fn_80649940
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8064932C_00001158
    cntlzw r0, r28
    extrwi r0, r0, 8, 19
    stb r0, 0x24(r3)
lbl_fn_8064932C_000010C0:
    lis r3, lbl_808238C8@ha
    li r28, 0x0
    addi r3, r3, lbl_808238C8@l
    addi r30, r3, 0x68
lbl_fn_8064932C_000010D0:
    cmpwi r27, 0x0
    bne lbl_fn_8064932C_00001100
    lbz r0, 0x1(r30)
    mr r29, r30
    cmpwi r0, 0x0
    beq lbl_fn_8064932C_00001148
    lwz r0, 0x6c(r30)
    cmplw r0, r26
    bne lbl_fn_8064932C_00001148
    lbz r0, 0x68(r30)
    cmplwi r0, 0x4
    bne lbl_fn_8064932C_00001148
lbl_fn_8064932C_00001100:
    mr r3, r29
    bl fn_80649A1C
    mr r31, r3
    mr r3, r29
    bl fn_8064945C
    lwz r12, 0x8c(r29)
    or r3, r31, r3
    lwz r0, 0x88(r29)
    cmpwi r12, 0x0
    and r3, r3, r0
    beq lbl_fn_8064932C_00001140
    cmpwi r3, 0x0
    beq lbl_fn_8064932C_00001140
    lbz r4, 0x0(r29)
    mtctr r12
    bctrl
lbl_fn_8064932C_00001140:
    cmpwi r27, 0x0
    bne lbl_fn_8064932C_00001158
lbl_fn_8064932C_00001148:
    addi r28, r28, 0x1
    addi r30, r30, 0xa4
    cmpwi r28, 0x5
    blt lbl_fn_8064932C_000010D0
lbl_fn_8064932C_00001158:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064945C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x28(r3)
    mr r26, r3
    li r28, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8064945C_00001248
    lis r29, lbl_808238C8@ha
    lis r30, 0x9
    addi r29, r29, lbl_808238C8@l
    lis r31, lbl_807B780C@ha
    b lbl_fn_8064945C_00001218
lbl_fn_8064945C_000011AC:
    addi r3, r26, 0x18
    bl fn_80627400
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8064945C_00001210
    lbz r0, 0x414(r29)
    cmplwi r0, 0x4
    blt lbl_fn_8064945C_000011D8
    addi r3, r30, 0x3
    addi r4, r31, lbl_807B780C@l
    bl fn_80629810
lbl_fn_8064945C_000011D8:
    lhz r4, 0x2(r27)
    mr r5, r27
    lwz r0, 0x28(r26)
    lwz r3, 0x6c(r26)
    subf r0, r4, r0
    lbz r4, 0xd(r26)
    stw r0, 0x28(r26)
    bl fn_8064C8CC
    lwz r0, 0x28(r26)
    ori r28, r28, 0x4000
    cmpwi r0, 0x0
    bne lbl_fn_8064945C_00001218
    ori r28, r28, 0x4
    b lbl_fn_8064945C_0000123C
lbl_fn_8064945C_00001210:
    ori r28, r28, 0x4
    b lbl_fn_8064945C_0000123C
lbl_fn_8064945C_00001218:
    lbz r0, 0x24(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8064945C_0000123C
    lwz r3, 0x6c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8064945C_0000123C
    lbz r0, 0x71(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8064945C_000011AC
lbl_fn_8064945C_0000123C:
    mr r3, r26
    bl fn_80649A1C
    or r28, r28, r3
lbl_fn_8064945C_00001248:
    lwz r0, 0x88(r26)
    addi r11, r1, 0x20
    and r3, r28, r0
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80649554(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r5, 0x2(r3)
    lwz r29, 0x6c(r3)
    cmplwi r5, 0x1
    bne lbl_fn_80649554_00001314
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80649554_00001314
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80649554_000012D4
    lis r3, 0x9
    lis r4, lbl_807B7824@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7824@l
    bl fn_80629810
lbl_fn_80649554_000012D4:
    mr r3, r31
    bl fn_8064E2FC
    li r30, 0x0
    cmpwi r29, 0x0
    stb r30, 0x68(r31)
    beq lbl_fn_80649554_00001304
    lbz r0, 0xd(r31)
    mr r3, r29
    add r4, r29, r0
    stb r30, 0x24(r4)
    bl fn_8064E354
    stw r30, 0x6c(r31)
lbl_fn_80649554_00001304:
    lbz r0, 0xd(r31)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xd(r31)
    b lbl_fn_80649554_000013DC
lbl_fn_80649554_00001314:
    cmplwi r5, 0x3
    beq lbl_fn_80649554_0000135C
    cmpwi r5, 0x0
    beq lbl_fn_80649554_0000135C
    lbz r5, 0xf(r3)
    li r0, -0xc
    lbz r4, 0x5f(r3)
    ori r6, r5, 0x10
    and r5, r4, r0
    stb r6, 0xf(r3)
    stb r5, 0x5f(r3)
    mr r3, r31
    bl fn_80649A8C
    lwz r0, 0x88(r31)
    mr r30, r3
    rlwinm. r0, r0, 0, 16, 16
    beq lbl_fn_80649554_0000135C
    ori r30, r3, 0x8000
lbl_fn_80649554_0000135C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80649554_0000138C
    lis r3, 0x9
    lis r4, lbl_807B7850@ha
    lbz r5, 0x2(r31)
    mr r6, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7850@l
    bl fn_80629850
lbl_fn_80649554_0000138C:
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80649554_000013B0
    cmpwi r30, 0x0
    beq lbl_fn_80649554_000013B0
    mr r3, r30
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_fn_80649554_000013B0:
    lwz r12, 0x90(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80649554_000013CC
    mr r3, r28
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_fn_80649554_000013CC:
    li r0, 0x0
    mr r3, r31
    stb r0, 0x68(r31)
    bl fn_80649864
lbl_fn_80649554_000013DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806496E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807B7880@ha
    addi r31, r31, lbl_807B7880@l
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r5, 0x12(r3)
    cmpwi r5, 0x0
    bne lbl_fn_806496E8_000014E4
    addi r3, r3, 0x6
    bl fn_80631070
    clrlwi. r5, r3, 16
    bne lbl_fn_806496E8_00001468
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_806496E8_0000145C
    lis r3, 0x9
    addi r4, r31, 0x0
    addi r3, r3, 0x1
    bl fn_80629810
lbl_fn_806496E8_0000145C:
    li r0, 0x7f
    sth r0, 0x12(r30)
    b lbl_fn_806496E8_00001508
lbl_fn_806496E8_00001468:
    cmplwi r5, 0x69f
    bgt lbl_fn_806496E8_000014B0
    li r0, 0x69f
    lis r4, lbl_808238C8@ha
    divw r0, r0, r5
    addi r4, r4, lbl_808238C8@l
    mullw r3, r0, r3
    subi r5, r3, 0xa
    sth r5, 0x12(r30)
    lbz r0, 0x414(r4)
    cmplwi r0, 0x5
    blt lbl_fn_806496E8_00001508
    lis r3, 0x9
    addi r4, r31, 0x20
    addi r3, r3, 0x4
    clrlwi r5, r5, 16
    bl fn_80629830
    b lbl_fn_806496E8_00001508
lbl_fn_806496E8_000014B0:
    li r0, 0x695
    lis r3, lbl_808238C8@ha
    sth r0, 0x12(r30)
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x5
    blt lbl_fn_806496E8_00001508
    lis r3, 0x9
    addi r4, r31, 0x58
    addi r3, r3, 0x4
    li r5, 0x695
    bl fn_80629830
    b lbl_fn_806496E8_00001508
lbl_fn_806496E8_000014E4:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x5
    blt lbl_fn_806496E8_00001508
    lis r3, 0x9
    addi r4, r31, 0x90
    addi r3, r3, 0x4
    bl fn_80629830
lbl_fn_806496E8_00001508:
    lhz r7, 0x12(r30)
    li r3, 0x1f40
    li r4, 0x1388
    li r0, 0x2ee0
    divw r5, r3, r7
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    divw r6, r4, r7
    sth r5, 0x9c(r30)
    divw r7, r0, r7
    sth r6, 0x9e(r30)
    sth r7, 0xa0(r30)
    lbz r0, 0x414(r3)
    cmplwi r0, 0x5
    blt lbl_fn_806496E8_00001560
    lis r3, 0x9
    addi r4, r31, 0xb8
    addi r3, r3, 0x4
    clrlwi r5, r5, 16
    clrlwi r6, r6, 16
    clrlwi r7, r7, 16
    bl fn_80629870
lbl_fn_806496E8_00001560:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80649864(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_fn_80649864_00001594
lbl_fn_80649864_00001590:
    bl fn_80626D50
lbl_fn_80649864_00001594:
    addi r3, r31, 0x30
    bl fn_80627400
    cmpwi r3, 0x0
    bne lbl_fn_80649864_00001590
    li r0, 0x0
    stw r0, 0x40(r31)
    b lbl_fn_80649864_000015B4
lbl_fn_80649864_000015B0:
    bl fn_80626D50
lbl_fn_80649864_000015B4:
    addi r3, r31, 0x18
    bl fn_80627400
    cmpwi r3, 0x0
    bne lbl_fn_80649864_000015B0
    lbz r0, 0x68(r31)
    li r3, 0x0
    stw r3, 0x28(r31)
    cmpwi r0, 0x0
    stb r3, 0x2(r31)
    bne lbl_fn_80649864_00001640
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x5
    blt lbl_fn_80649864_00001604
    lis r3, 0x9
    lis r4, lbl_807B7980@ha
    addi r3, r3, 0x4
    addi r4, r4, lbl_807B7980@l
    bl fn_80629810
lbl_fn_80649864_00001604:
    lwz r3, 0x6c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80649864_00001628
    lbz r0, 0xd(r31)
    li r4, 0x0
    add r3, r3, r0
    stb r4, 0x24(r3)
    lwz r3, 0x6c(r31)
    bl fn_8064E354
lbl_fn_80649864_00001628:
    mr r3, r31
    bl fn_8064E2FC
    mr r3, r31
    li r4, 0x0
    li r5, 0xa4
    bl memset
lbl_fn_80649864_00001640:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80649940(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_80649940_00001664
    li r3, 0x0
    blr
lbl_fn_80649940_00001664:
    cmplwi r4, 0x3d
    ble lbl_fn_80649940_00001674
    li r3, 0x0
    blr
lbl_fn_80649940_00001674:
    add r3, r3, r4
    lbz r3, 0x24(r3)
    cmpwi r3, 0x0
    bne lbl_fn_80649940_0000168C
    li r3, 0x0
    blr
lbl_fn_80649940_0000168C:
    subi r0, r3, 0x1
    lis r3, lbl_808238C8@ha
    mulli r0, r0, 0xa4
    addi r3, r3, lbl_808238C8@l
    add r3, r3, r0
    addi r3, r3, 0x68
    blr
}

asm void fn_80649994(void)
{
    nofralloc
    lis r5, lbl_808238C8@ha
    li r0, 0x5
    clrlwi r6, r3, 31
    subi r7, r3, 0x1
    addi r5, r5, lbl_808238C8@l
    li r8, 0x0
    mtctr r0
lbl_fn_80649994_000016C4:
    clrlwi r0, r8, 16
    mulli r0, r0, 0xa4
    add r4, r5, r0
    lbz r0, 0x69(r4)
    addi r9, r4, 0x68
    cmpwi r0, 0x0
    beq lbl_fn_80649994_00001720
    lwz r0, 0x6c(r9)
    cmpwi r0, 0x0
    bne lbl_fn_80649994_00001720
    lbz r4, 0xd(r9)
    cmplw r4, r3
    bne lbl_fn_80649994_00001700
    mr r3, r9
    blr
lbl_fn_80649994_00001700:
    cmpwi r6, 0x0
    beq lbl_fn_80649994_00001720
    cmpw r4, r7
    bne lbl_fn_80649994_00001720
    addi r0, r4, 0x1
    mr r3, r9
    stb r0, 0xd(r9)
    blr
lbl_fn_80649994_00001720:
    addi r8, r8, 0x1
    bdnz lbl_fn_80649994_000016C4
    li r3, 0x0
    blr
}

asm void fn_80649A1C(void)
{
    nofralloc
    lbz r0, 0x24(r3)
    li r5, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80649A1C_00001770
    lwz r4, 0x6c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80649A1C_00001770
    lbz r0, 0x71(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80649A1C_00001770
    lwz r0, 0x28(r3)
    cmplwi r0, 0x1f40
    bgt lbl_fn_80649A1C_00001770
    lhz r0, 0x20(r3)
    cmplwi r0, 0x10
    ble lbl_fn_80649A1C_00001774
lbl_fn_80649A1C_00001770:
    li r5, 0x1
lbl_fn_80649A1C_00001774:
    lbz r0, 0x25(r3)
    cmplw r0, r5
    bne lbl_fn_80649A1C_00001788
    li r3, 0x0
    blr
lbl_fn_80649A1C_00001788:
    cmpwi r5, 0x0
    stb r5, 0x25(r3)
    lis r3, 0x3
    beqlr
    lis r3, 0x1
    blr
}

asm void fn_80649A8C(void)
{
    nofralloc
    xor r4, r5, r4
    li r6, 0x0
    clrlwi. r0, r4, 31
    beq lbl_fn_80649A8C_000017C0
    clrlwi. r0, r5, 31
    ori r6, r6, 0x10
    beq lbl_fn_80649A8C_000017C0
    ori r6, r6, 0x800
lbl_fn_80649A8C_000017C0:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_fn_80649A8C_000017D8
    rlwinm. r0, r5, 0, 30, 30
    ori r6, r6, 0x8
    beq lbl_fn_80649A8C_000017D8
    ori r6, r6, 0x400
lbl_fn_80649A8C_000017D8:
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_fn_80649A8C_000017E4
    ori r6, r6, 0x100
lbl_fn_80649A8C_000017E4:
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_fn_80649A8C_000017FC
    rlwinm. r0, r5, 0, 28, 28
    ori r6, r6, 0x20
    beq lbl_fn_80649A8C_000017FC
    ori r6, r6, 0x1000
lbl_fn_80649A8C_000017FC:
    lwz r0, 0x88(r3)
    and r3, r0, r6
    blr
}

asm void fn_80649AF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r6, 0x6c(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80649AF4_000019C0
    lbz r0, 0x72(r6)
    cmplwi r0, 0x2
    bne lbl_fn_80649AF4_000018E0
    cmpwi r4, 0x0
    beq lbl_fn_80649AF4_000018AC
    lhz r0, 0x9a(r3)
    cmplw r5, r0
    ble lbl_fn_80649AF4_00001854
    li r0, 0x0
    sth r0, 0x9a(r3)
    b lbl_fn_80649AF4_0000185C
lbl_fn_80649AF4_00001854:
    subf r0, r5, r0
    sth r0, 0x9a(r3)
lbl_fn_80649AF4_0000185C:
    lhz r4, 0x9a(r3)
    lhz r0, 0x9e(r3)
    cmplw r4, r0
    bgt lbl_fn_80649AF4_000019C0
    lbz r0, 0x3d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80649AF4_000019C0
    lhz r0, 0x9c(r3)
    cmplw r0, r4
    ble lbl_fn_80649AF4_000019C0
    subf r0, r4, r0
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    clrlwi r5, r0, 24
    bl fn_8064D2F4
    lhz r3, 0x9c(r31)
    li r0, 0x0
    stb r0, 0x3c(r31)
    sth r3, 0x9a(r31)
    b lbl_fn_80649AF4_000019C0
lbl_fn_80649AF4_000018AC:
    lwz r0, 0x94(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80649AF4_000018C4
    li r0, 0x1
    stb r0, 0x3c(r3)
    b lbl_fn_80649AF4_000019C0
lbl_fn_80649AF4_000018C4:
    lhz r4, 0x38(r3)
    lhz r0, 0x9c(r3)
    cmplw r4, r0
    blt lbl_fn_80649AF4_000019C0
    li r0, 0x1
    stb r0, 0x3c(r3)
    b lbl_fn_80649AF4_000019C0
lbl_fn_80649AF4_000018E0:
    cmpwi r4, 0x0
    beq lbl_fn_80649AF4_00001934
    lbz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80649AF4_000019C0
    lwz r0, 0x40(r3)
    cmplwi r0, 0x1388
    bge lbl_fn_80649AF4_000019C0
    lhz r0, 0x38(r3)
    cmplwi r0, 0x8
    bge lbl_fn_80649AF4_000019C0
    lbz r0, 0x3d(r3)
    li r4, 0x0
    stb r4, 0x3c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80649AF4_000019C0
    lbz r4, 0xd(r31)
    mr r3, r6
    li r5, 0x1
    bl fn_8064C764
    b lbl_fn_80649AF4_000019C0
lbl_fn_80649AF4_00001934:
    lwz r0, 0x94(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80649AF4_0000195C
    li r0, 0x1
    lbz r4, 0xd(r31)
    stb r0, 0x3c(r3)
    mr r3, r6
    li r5, 0x0
    bl fn_8064C764
    b lbl_fn_80649AF4_000019C0
lbl_fn_80649AF4_0000195C:
    lwz r0, 0x40(r3)
    cmplwi r0, 0x1f40
    bgt lbl_fn_80649AF4_00001974
    lhz r0, 0x38(r3)
    cmplwi r0, 0x10
    ble lbl_fn_80649AF4_000019C0
lbl_fn_80649AF4_00001974:
    lbz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80649AF4_000019C0
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_80649AF4_000019A8
    lis r3, 0x9
    lis r4, lbl_807B7998@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7998@l
    bl fn_80629810
lbl_fn_80649AF4_000019A8:
    li r0, 0x1
    lwz r3, 0x6c(r31)
    stb r0, 0x3c(r31)
    li r5, 0x0
    lbz r4, 0xd(r31)
    bl fn_8064C764
lbl_fn_80649AF4_000019C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80649CC0(void)
{
    nofralloc
    lis r3, fn_80649D3C@ha
    lis r4, lbl_808238C8@ha
    addi r3, r3, fn_80649D3C@l
    lis r11, fn_80649DC8@ha
    addi r4, r4, lbl_808238C8@l
    lis r10, fn_80649ECC@ha
    lis r9, fn_80649FD4@ha
    lis r8, fn_8064A0E0@ha
    lis r7, fn_8064A0DC@ha
    lis r6, fn_8064A204@ha
    lis r5, fn_8064A4A4@ha
    stwu r3, 0x14(r4)
    li r0, 0x0
    addi r11, r11, fn_80649DC8@l
    addi r10, r10, fn_80649ECC@l
    addi r9, r9, fn_80649FD4@l
    addi r8, r8, fn_8064A0E0@l
    addi r7, r7, fn_8064A0DC@l
    addi r6, r6, fn_8064A204@l
    addi r5, r5, fn_8064A4A4@l
    stw r11, 0x4(r4)
    li r3, 0x3
    stw r0, 0x8(r4)
    stw r10, 0xc(r4)
    stw r9, 0x10(r4)
    stw r8, 0x14(r4)
    stw r0, 0x18(r4)
    stw r7, 0x1c(r4)
    stw r6, 0x20(r4)
    stw r5, 0x24(r4)
    b fn_80642174
}

asm void fn_80649D3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    stb r6, 0x8(r1)
    bl fn_8064DFD0
    subi r0, r31, 0x40
    lis r4, lbl_808238C8@ha
    addi r4, r4, lbl_808238C8@l
    cmpwi r3, 0x0
    slwi r0, r0, 2
    add r4, r4, r0
    stw r3, 0x3c(r4)
    bne lbl_fn_80649D3C_00001AB4
    lbz r4, 0x8(r1)
    mr r3, r30
    mr r5, r31
    li r6, 0x4
    li r7, 0x0
    bl fn_806425D4
    b lbl_fn_80649D3C_00001AC4
lbl_fn_80649D3C_00001AB4:
    sth r31, 0x68(r3)
    addi r5, r1, 0x8
    li r4, 0xa
    bl fn_8064A5F4
lbl_fn_80649D3C_00001AC4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80649DC8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_807B79C8@ha
    addi r31, r31, lbl_807B79C8@l
    stw r30, 0x18(r1)
    mr r30, r3
    sth r4, 0x8(r1)
    blt lbl_fn_80649DC8_00001B38
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80649DC8_00001B30
    mr r5, r30
    addi r4, r31, 0x0
    lis r3, 0x9
    bl fn_80629830
lbl_fn_80649DC8_00001B30:
    li r4, 0x0
    b lbl_fn_80649DC8_00001B84
lbl_fn_80649DC8_00001B38:
    lis r5, lbl_808238C8@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_808238C8@l
    add r4, r5, r0
    lwz r4, 0x3c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80649DC8_00001B84
    lhz r6, 0x68(r4)
    cmplw r6, r3
    beq lbl_fn_80649DC8_00001B84
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_fn_80649DC8_00001B80
    lis r3, 0x9
    mr r5, r30
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_80649DC8_00001B80:
    li r4, 0x0
lbl_fn_80649DC8_00001B84:
    cmpwi r4, 0x0
    bne lbl_fn_80649DC8_00001BB4
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80649DC8_00001BC8
    mr r5, r30
    addi r4, r31, 0x54
    lis r3, 0x9
    bl fn_80629830
    b lbl_fn_80649DC8_00001BC8
lbl_fn_80649DC8_00001BB4:
    sth r30, 0x68(r4)
    mr r3, r4
    addi r5, r1, 0x8
    li r4, 0x9
    bl fn_8064A5F4
lbl_fn_80649DC8_00001BC8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80649ECC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_807B79C8@ha
    addi r31, r31, lbl_807B79C8@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    blt lbl_fn_80649ECC_00001C40
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80649ECC_00001C38
    mr r5, r29
    addi r4, r31, 0x0
    lis r3, 0x9
    bl fn_80629830
lbl_fn_80649ECC_00001C38:
    li r4, 0x0
    b lbl_fn_80649ECC_00001C8C
lbl_fn_80649ECC_00001C40:
    lis r5, lbl_808238C8@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_808238C8@l
    add r4, r5, r0
    lwz r4, 0x3c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80649ECC_00001C8C
    lhz r6, 0x68(r4)
    cmplw r6, r3
    beq lbl_fn_80649ECC_00001C8C
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_fn_80649ECC_00001C88
    lis r3, 0x9
    mr r5, r29
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_80649ECC_00001C88:
    li r4, 0x0
lbl_fn_80649ECC_00001C8C:
    cmpwi r4, 0x0
    bne lbl_fn_80649ECC_00001CBC
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80649ECC_00001CCC
    mr r5, r29
    addi r4, r31, 0x70
    lis r3, 0x9
    bl fn_80629830
    b lbl_fn_80649ECC_00001CCC
lbl_fn_80649ECC_00001CBC:
    mr r3, r4
    mr r5, r30
    li r4, 0xc
    bl fn_8064A5F4
lbl_fn_80649ECC_00001CCC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80649FD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_807B79C8@ha
    addi r31, r31, lbl_807B79C8@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    blt lbl_fn_80649FD4_00001D48
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80649FD4_00001D40
    mr r5, r29
    addi r4, r31, 0x0
    lis r3, 0x9
    bl fn_80629830
lbl_fn_80649FD4_00001D40:
    li r4, 0x0
    b lbl_fn_80649FD4_00001D94
lbl_fn_80649FD4_00001D48:
    lis r5, lbl_808238C8@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_808238C8@l
    add r4, r5, r0
    lwz r4, 0x3c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80649FD4_00001D94
    lhz r6, 0x68(r4)
    cmplw r6, r3
    beq lbl_fn_80649FD4_00001D94
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_fn_80649FD4_00001D90
    lis r3, 0x9
    mr r5, r29
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_80649FD4_00001D90:
    li r4, 0x0
lbl_fn_80649FD4_00001D94:
    cmpwi r4, 0x0
    bne lbl_fn_80649FD4_00001DC4
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_80649FD4_00001DD4
    mr r5, r29
    addi r4, r31, 0x8c
    lis r3, 0x9
    bl fn_80629830
    b lbl_fn_80649FD4_00001DD4
lbl_fn_80649FD4_00001DC4:
    mr r3, r4
    mr r5, r30
    li r4, 0xb
    bl fn_8064A5F4
lbl_fn_80649FD4_00001DD4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064A0DC(void)
{
    nofralloc
    blr
}

asm void fn_8064A0E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_807B79C8@ha
    addi r31, r31, lbl_807B79C8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    blt lbl_fn_8064A0E0_00001E58
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064A0E0_00001E50
    mr r5, r28
    addi r4, r31, 0x0
    lis r3, 0x9
    bl fn_80629830
lbl_fn_8064A0E0_00001E50:
    li r30, 0x0
    b lbl_fn_8064A0E0_00001EA4
lbl_fn_8064A0E0_00001E58:
    lis r5, lbl_808238C8@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_808238C8@l
    add r4, r5, r0
    lwz r30, 0x3c(r4)
    cmpwi r30, 0x0
    beq lbl_fn_8064A0E0_00001EA4
    lhz r6, 0x68(r30)
    cmplw r6, r3
    beq lbl_fn_8064A0E0_00001EA4
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_fn_8064A0E0_00001EA0
    lis r3, 0x9
    mr r5, r28
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_8064A0E0_00001EA0:
    li r30, 0x0
lbl_fn_8064A0E0_00001EA4:
    cmpwi r29, 0x0
    beq lbl_fn_8064A0E0_00001EB4
    mr r3, r28
    bl fn_80642990
lbl_fn_8064A0E0_00001EB4:
    cmpwi r30, 0x0
    bne lbl_fn_8064A0E0_00001EE8
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064A0E0_00001EF8
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r31, 0xa8
    bl fn_80629830
    b lbl_fn_8064A0E0_00001EF8
lbl_fn_8064A0E0_00001EE8:
    mr r3, r30
    li r4, 0xe
    li r5, 0x0
    bl fn_8064A5F4
lbl_fn_8064A0E0_00001EF8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064A204(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    subi r0, r3, 0x40
    lis r29, lbl_807B79C8@ha
    cmpwi r0, 0xa
    mr r27, r3
    mr r31, r4
    addi r29, r29, lbl_807B79C8@l
    blt lbl_fn_8064A204_00001F74
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064A204_00001F6C
    mr r5, r27
    addi r4, r29, 0x0
    lis r3, 0x9
    bl fn_80629830
lbl_fn_8064A204_00001F6C:
    li r28, 0x0
    b lbl_fn_8064A204_00001FC0
lbl_fn_8064A204_00001F74:
    lis r5, lbl_808238C8@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_808238C8@l
    add r4, r5, r0
    lwz r28, 0x3c(r4)
    cmpwi r28, 0x0
    beq lbl_fn_8064A204_00001FC0
    lhz r6, 0x68(r28)
    cmplw r6, r3
    beq lbl_fn_8064A204_00001FC0
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_fn_8064A204_00001FBC
    lis r3, 0x9
    mr r5, r27
    addi r4, r29, 0x1c
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_8064A204_00001FBC:
    li r28, 0x0
lbl_fn_8064A204_00001FC0:
    cmpwi r28, 0x0
    bne lbl_fn_8064A204_00001FFC
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064A204_00001FF0
    lis r3, 0x9
    mr r5, r27
    addi r3, r3, 0x1
    addi r4, r29, 0xc8
    bl fn_80629830
lbl_fn_8064A204_00001FF0:
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064A204_000021A0
lbl_fn_8064A204_00001FFC:
    lis r30, lbl_808238C8@ha
    mr r3, r28
    mr r5, r31
    addi r4, r30, lbl_808238C8@l
    bl fn_8064D3B4
    clrlwi r4, r3, 24
    mr r29, r3
    cmplwi r4, 0x32
    bne lbl_fn_8064A204_0000202C
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064A204_000021A0
lbl_fn_8064A204_0000202C:
    lbz r0, lbl_808238C8@l(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8064A204_00002068
    cmplwi r4, 0x4
    bne lbl_fn_8064A204_00002050
    mr r3, r28
    mr r4, r31
    bl fn_8064D928
    b lbl_fn_8064A204_000021A0
lbl_fn_8064A204_00002050:
    mr r3, r28
    li r5, 0x0
    bl fn_8064A5F4
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064A204_000021A0
lbl_fn_8064A204_00002068:
    mr r3, r28
    mr r4, r0
    bl fn_80649940
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8064A204_0000208C
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8064A204_0000213C
lbl_fn_8064A204_0000208C:
    clrlwi. r0, r29, 24
    beq lbl_fn_8064A204_000020F4
    lbz r4, 0x6d(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8064A204_000020B4
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8064A204_000020D0
lbl_fn_8064A204_000020B4:
    cmpwi r4, 0x0
    bne lbl_fn_8064A204_000020E8
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8064A204_000020E8
lbl_fn_8064A204_000020D0:
    lis r4, lbl_808238C8@ha
    mr r3, r28
    addi r5, r4, lbl_808238C8@l
    lbz r4, lbl_808238C8@l(r4)
    lbz r5, 0x4(r5)
    bl fn_8064CA64
lbl_fn_8064A204_000020E8:
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064A204_000021A0
lbl_fn_8064A204_000020F4:
    lis r30, lbl_808238C8@ha
    lbz r3, lbl_808238C8@l(r30)
    bl fn_80649994
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8064A204_00002128
    lbz r4, lbl_808238C8@l(r30)
    mr r3, r28
    li r5, 0x1
    bl fn_8064CA64
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064A204_000021A0
lbl_fn_8064A204_00002128:
    lbz r0, lbl_808238C8@l(r30)
    lbz r5, 0x0(r3)
    add r4, r28, r0
    stb r5, 0x24(r4)
    stw r28, 0x6c(r3)
lbl_fn_8064A204_0000213C:
    clrlwi r4, r29, 24
    cmplwi r4, 0x4
    bne lbl_fn_8064A204_0000218C
    lhz r0, 0x2(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064A204_00002164
    mr r3, r27
    mr r5, r31
    bl fn_8064B238
    b lbl_fn_8064A204_0000216C
lbl_fn_8064A204_00002164:
    mr r3, r31
    bl fn_80626D50
lbl_fn_8064A204_0000216C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r4, 0x5(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8064A204_000021A0
    mr r3, r27
    bl fn_8064E600
    b lbl_fn_8064A204_000021A0
lbl_fn_8064A204_0000218C:
    mr r3, r27
    li r5, 0x0
    bl fn_8064B238
    mr r3, r31
    bl fn_80626D50
lbl_fn_8064A204_000021A0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064A4A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_807B79C8@ha
    addi r31, r31, lbl_807B79C8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    blt lbl_fn_8064A4A4_0000221C
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064A4A4_00002214
    mr r5, r28
    addi r4, r31, 0x0
    lis r3, 0x9
    bl fn_80629830
lbl_fn_8064A4A4_00002214:
    li r30, 0x0
    b lbl_fn_8064A4A4_00002268
lbl_fn_8064A4A4_0000221C:
    lis r5, lbl_808238C8@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_808238C8@l
    add r4, r5, r0
    lwz r30, 0x3c(r4)
    cmpwi r30, 0x0
    beq lbl_fn_8064A4A4_00002268
    lhz r6, 0x68(r30)
    cmplw r6, r3
    beq lbl_fn_8064A4A4_00002268
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_fn_8064A4A4_00002264
    lis r3, 0x9
    mr r5, r28
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl fn_80629850
lbl_fn_8064A4A4_00002264:
    li r30, 0x0
lbl_fn_8064A4A4_00002268:
    cmpwi r30, 0x0
    bne lbl_fn_8064A4A4_00002298
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064A4A4_000022CC
    mr r5, r28
    addi r4, r31, 0xe4
    lis r3, 0x9
    bl fn_80629830
    b lbl_fn_8064A4A4_000022CC
lbl_fn_8064A4A4_00002298:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064A4A4_000022C0
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r31, 0x114
    bl fn_80629830
lbl_fn_8064A4A4_000022C0:
    mr r3, r30
    mr r4, r29
    bl fn_8064C2AC
lbl_fn_8064A4A4_000022CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064A5D8(void)
{
    nofralloc
    subi r0, r4, 0x40
    lis r4, lbl_808238C8@ha
    addi r4, r4, lbl_808238C8@l
    slwi r0, r0, 2
    add r4, r4, r0
    stw r3, 0x3c(r4)
    blr
}

asm void fn_8064A5F4(void)
{
    nofralloc
    lbz r0, 0x6c(r3)
    cmplwi r0, 0x6
    bgtlr
    lis r6, jumptable_807B7B08@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_807B7B08@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    b fn_8064A638
    b fn_8064A84C
    b fn_8064AA08
    b fn_8064AB30
    b fn_8064ACA4
    b fn_8064ADC4
    b fn_8064AEDC
    blr
}

asm void fn_8064A638(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, lbl_808238C8@ha
    stw r0, 0x64(r1)
    addi r6, r6, lbl_808238C8@l
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lis r30, jumptable_807B7B08@ha
    addi r30, r30, jumptable_807B7B08@l
    stw r29, 0x54(r1)
    mr r29, r5
    stw r28, 0x50(r1)
    mr r28, r4
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_fn_8064A638_000023A4
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r30, 0x1c
    bl fn_80629830
lbl_fn_8064A638_000023A4:
    cmplwi r28, 0xc
    bgt lbl_fn_8064A638_00002514
    lis r3, jumptable_807B7BA0@ha
    slwi r0, r28, 2
    addi r3, r3, jumptable_807B7BA0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x29a
    addi r4, r31, 0x62
    sth r0, 0x6a(r31)
    li r3, 0x3
    bl fn_806423A0
    clrlwi. r4, r3, 16
    sth r3, 0x68(r31)
    bne lbl_fn_8064A638_000023F4
    mr r3, r31
    li r4, 0x1
    bl fn_806482EC
    b lbl_fn_8064A638_00002540
lbl_fn_8064A638_000023F4:
    mr r3, r31
    bl fn_8064A5D8
    li r0, 0x1
    stb r0, 0x6c(r31)
    b lbl_fn_8064A638_00002540
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064A638_00002540
    lbz r5, 0x6c(r31)
    mr r6, r28
    addi r4, r30, 0x3c
    lis r3, 0x9
    bl fn_80629850
    b lbl_fn_8064A638_00002540
    lbz r0, 0x6d(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064A638_0000245C
    lbz r4, 0x0(r29)
    addi r3, r31, 0x62
    lhz r5, 0x68(r31)
    li r6, 0x1
    li r7, 0x0
    bl fn_806425D4
    b lbl_fn_8064A638_00002540
lbl_fn_8064A638_0000245C:
    mr r3, r31
    li r4, 0x78
    bl fn_8064E1B0
    lbz r4, 0x0(r29)
    addi r3, r31, 0x62
    lhz r5, 0x68(r31)
    li r6, 0x0
    li r7, 0x0
    bl fn_806425D4
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064A638_000024A4
    lis r3, 0x9
    addi r4, r30, 0x58
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_8064A638_000024A4:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x3c
    bl memset
    li r0, 0x0
    li r4, 0x1
    li r3, 0x69b
    stb r4, 0xa(r1)
    addi r4, r1, 0x8
    sth r3, 0xc(r1)
    stb r0, 0x28(r1)
    stb r0, 0xe(r1)
    lhz r3, 0x68(r31)
    bl fn_80642764
    li r0, 0x2
    stb r0, 0x6c(r31)
    b lbl_fn_8064A638_00002540
    b lbl_fn_8064A638_00002540
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl fn_8064CA64
    b lbl_fn_8064A638_00002540
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_8064CA64
    b lbl_fn_8064A638_00002540
lbl_fn_8064A638_00002514:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064A638_00002540
    lis r3, 0x9
    lbz r6, 0x6c(r31)
    mr r5, r28
    addi r4, r30, 0x70
    addi r3, r3, 0x3
    bl fn_80629850
lbl_fn_8064A638_00002540:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8064A84C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, lbl_808238C8@ha
    stw r0, 0x64(r1)
    addi r6, r6, lbl_808238C8@l
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lis r30, jumptable_807B7B08@ha
    addi r30, r30, jumptable_807B7B08@l
    stw r29, 0x54(r1)
    mr r29, r5
    stw r28, 0x50(r1)
    mr r28, r4
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_fn_8064A84C_000025B8
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r30, 0xcc
    bl fn_80629830
lbl_fn_8064A84C_000025B8:
    cmpwi r28, 0x9
    beq lbl_fn_8064A84C_00002614
    bge lbl_fn_8064A84C_000025DC
    cmpwi r28, 0x6
    beq lbl_fn_8064A84C_000025E8
    bge lbl_fn_8064A84C_000026D0
    cmpwi r28, 0x5
    bge lbl_fn_8064A84C_000026B4
    b lbl_fn_8064A84C_000026D0
lbl_fn_8064A84C_000025DC:
    cmpwi r28, 0xe
    beq lbl_fn_8064A84C_000026A0
    b lbl_fn_8064A84C_000026D0
lbl_fn_8064A84C_000025E8:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064A84C_000026FC
    lbz r5, 0x6c(r31)
    mr r6, r28
    addi r4, r30, 0x3c
    lis r3, 0x9
    bl fn_80629850
    b lbl_fn_8064A84C_000026FC
lbl_fn_8064A84C_00002614:
    lhz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8064A84C_00002638
    li r0, 0x0
    mr r3, r31
    stb r0, 0x6c(r31)
    lhz r4, 0x0(r29)
    bl fn_806482EC
    b lbl_fn_8064A84C_000026FC
lbl_fn_8064A84C_00002638:
    li r0, 0x2
    lis r3, lbl_808238C8@ha
    stb r0, 0x6c(r31)
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064A84C_00002664
    lis r3, 0x9
    addi r4, r30, 0x58
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_8064A84C_00002664:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x3c
    bl memset
    li r0, 0x0
    li r4, 0x1
    li r3, 0x69b
    stb r4, 0xa(r1)
    addi r4, r1, 0x8
    sth r3, 0xc(r1)
    stb r0, 0x28(r1)
    stb r0, 0xe(r1)
    lhz r3, 0x68(r31)
    bl fn_80642764
    b lbl_fn_8064A84C_000026FC
lbl_fn_8064A84C_000026A0:
    li r0, 0x0
    mr r3, r31
    stb r0, 0x6c(r31)
    bl fn_80648FF4
    b lbl_fn_8064A84C_000026FC
lbl_fn_8064A84C_000026B4:
    li r0, 0x0
    lhz r3, 0x68(r31)
    stb r0, 0x6c(r31)
    bl fn_806428EC
    mr r3, r31
    bl fn_80648FF4
    b lbl_fn_8064A84C_000026FC
lbl_fn_8064A84C_000026D0:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064A84C_000026FC
    lis r3, 0x9
    lbz r6, 0x6c(r31)
    mr r5, r28
    addi r4, r30, 0x70
    addi r3, r3, 0x3
    bl fn_80629850
lbl_fn_8064A84C_000026FC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8064AA08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_808238C8@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_808238C8@l
    stw r31, 0x1c(r1)
    lis r31, jumptable_807B7B08@ha
    addi r31, r31, jumptable_807B7B08@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_fn_8064AA08_00002774
    lis r3, 0x9
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r31, 0xf4
    bl fn_80629830
lbl_fn_8064AA08_00002774:
    subi r0, r29, 0x6
    cmplwi r0, 0x8
    bgt lbl_fn_8064AA08_000027F8
    lis r3, jumptable_807B7C20@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B7C20@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064AA08_00002824
    lbz r5, 0x6c(r28)
    mr r6, r29
    addi r4, r31, 0x3c
    lis r3, 0x9
    bl fn_80629850
    b lbl_fn_8064AA08_00002824
    mr r3, r28
    mr r4, r30
    bl fn_8064B148
    b lbl_fn_8064AA08_00002824
    mr r3, r28
    mr r4, r30
    bl fn_8064B054
    b lbl_fn_8064AA08_00002824
    li r0, 0x0
    mr r3, r28
    stb r0, 0x6c(r28)
    bl fn_80648FF4
    b lbl_fn_8064AA08_00002824
lbl_fn_8064AA08_000027F8:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064AA08_00002824
    lis r3, 0x9
    lbz r6, 0x6c(r28)
    mr r5, r29
    addi r4, r31, 0x70
    addi r3, r3, 0x3
    bl fn_80629850
lbl_fn_8064AA08_00002824:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064AB30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_808238C8@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_808238C8@l
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lis r30, jumptable_807B7B08@ha
    addi r30, r30, jumptable_807B7B08@l
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_fn_8064AB30_0000289C
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r30, 0x13c
    bl fn_80629830
lbl_fn_8064AB30_0000289C:
    cmplwi r28, 0xe
    bgt lbl_fn_8064AB30_0000296C
    lis r3, jumptable_807B7C68@ha
    slwi r0, r28, 2
    addi r3, r3, jumptable_807B7C68@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064AB30_00002998
    lbz r5, 0x6c(r31)
    mr r6, r28
    addi r4, r30, 0x3c
    lis r3, 0x9
    bl fn_80629850
    b lbl_fn_8064AB30_00002998
    mr r3, r31
    mr r4, r29
    bl fn_8064B148
    b lbl_fn_8064AB30_00002998
    mr r3, r31
    mr r4, r29
    bl fn_8064B054
    b lbl_fn_8064AB30_00002998
    li r0, 0x0
    mr r3, r31
    stb r0, 0x6c(r31)
    bl fn_80648FF4
    b lbl_fn_8064AB30_00002998
    mr r3, r31
    bl fn_8064E224
    li r3, 0x5
    li r0, 0x1
    stb r3, 0x6c(r31)
    mr r3, r31
    li r4, 0x0
    stb r0, 0x71(r31)
    bl fn_806482EC
    b lbl_fn_8064AB30_00002998
    mr r3, r31
    bl fn_8064E224
    li r0, 0x0
    lhz r3, 0x68(r31)
    stb r0, 0x6c(r31)
    bl fn_806428EC
    mr r3, r31
    li r4, 0x1
    bl fn_806482EC
    b lbl_fn_8064AB30_00002998
lbl_fn_8064AB30_0000296C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064AB30_00002998
    lis r3, 0x9
    lbz r6, 0x6c(r31)
    mr r5, r28
    addi r4, r30, 0x70
    addi r3, r3, 0x3
    bl fn_80629850
lbl_fn_8064AB30_00002998:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064ACA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_808238C8@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_808238C8@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_fn_8064ACA4_00002A08
    lis r3, 0x9
    lis r4, lbl_807B7CA4@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7CA4@l
    bl fn_80629830
lbl_fn_8064ACA4_00002A08:
    cmpwi r30, 0x7
    beq lbl_fn_8064ACA4_00002A4C
    bge lbl_fn_8064ACA4_00002A20
    cmpwi r30, 0x0
    beq lbl_fn_8064ACA4_00002A40
    b lbl_fn_8064ACA4_00002A8C
lbl_fn_8064ACA4_00002A20:
    cmpwi r30, 0xe
    beq lbl_fn_8064ACA4_00002A2C
    b lbl_fn_8064ACA4_00002A8C
lbl_fn_8064ACA4_00002A2C:
    li r0, 0x0
    mr r3, r29
    stb r0, 0x6c(r29)
    bl fn_80648FF4
    b lbl_fn_8064ACA4_00002ABC
lbl_fn_8064ACA4_00002A40:
    mr r3, r29
    bl fn_8064844C
    b lbl_fn_8064ACA4_00002ABC
lbl_fn_8064ACA4_00002A4C:
    lhz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064ACA4_00002A6C
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    bl fn_8064CA64
    b lbl_fn_8064ACA4_00002ABC
lbl_fn_8064ACA4_00002A6C:
    mr r3, r29
    li r4, 0x0
    bl fn_8064C9B4
    li r3, 0x5
    li r0, 0x1
    stb r3, 0x6c(r29)
    stb r0, 0x71(r29)
    b lbl_fn_8064ACA4_00002ABC
lbl_fn_8064ACA4_00002A8C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064ACA4_00002ABC
    lis r3, 0x9
    lis r4, lbl_807B7B78@ha
    lbz r6, 0x6c(r29)
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7B78@l
    bl fn_80629850
lbl_fn_8064ACA4_00002ABC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064ADC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808238C8@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_808238C8@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_fn_8064ADC4_00002B20
    lis r3, 0x9
    lis r4, lbl_807B7CC8@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7CC8@l
    bl fn_80629830
lbl_fn_8064ADC4_00002B20:
    subi r0, r31, 0x3
    cmplwi r0, 0xb
    bgt lbl_fn_8064ADC4_00002BA8
    lis r3, jumptable_807B7CEC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807B7CEC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    li r4, 0x3
    bl fn_8064E1B0
    li r0, 0x6
    mr r3, r30
    stb r0, 0x6c(r30)
    li r4, 0x0
    bl fn_8064CB28
    b lbl_fn_8064ADC4_00002BD8
    li r0, 0x0
    mr r3, r30
    stb r0, 0x6c(r30)
    bl fn_80648FF4
    b lbl_fn_8064ADC4_00002BD8
    mr r3, r30
    li r4, 0x0
    bl fn_8064C9B4
    lbz r0, 0x6d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8064ADC4_00002B9C
    lhz r3, 0x68(r30)
    bl fn_806428EC
lbl_fn_8064ADC4_00002B9C:
    mr r3, r30
    bl fn_80648FF4
    b lbl_fn_8064ADC4_00002BD8
lbl_fn_8064ADC4_00002BA8:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064ADC4_00002BD8
    lis r3, 0x9
    lis r4, lbl_807B7B78@ha
    lbz r6, 0x6c(r30)
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7B78@l
    bl fn_80629850
lbl_fn_8064ADC4_00002BD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064AEDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_808238C8@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_808238C8@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_fn_8064AEDC_00002C40
    lis r3, 0x9
    lis r4, lbl_807B7D1C@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7D1C@l
    bl fn_80629830
lbl_fn_8064AEDC_00002C40:
    cmplwi r30, 0xe
    bgt lbl_fn_8064AEDC_00002D1C
    lis r3, jumptable_807B7D44@ha
    slwi r0, r30, 2
    addi r3, r3, jumptable_807B7D44@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lhz r3, 0x68(r29)
    bl fn_806428EC
    lbz r0, 0x70(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8064AEDC_00002CC0
    addi r4, r29, 0x62
    li r3, 0x3
    bl fn_806423A0
    clrlwi. r4, r3, 16
    sth r3, 0x68(r29)
    bne lbl_fn_8064AEDC_00002C9C
    mr r3, r29
    li r4, 0x1
    bl fn_806482EC
    b lbl_fn_8064AEDC_00002D4C
lbl_fn_8064AEDC_00002C9C:
    mr r3, r29
    bl fn_8064A5D8
    li r3, 0x0
    li r0, 0x1
    stb r3, 0x70(r29)
    stb r3, 0x6e(r29)
    stb r3, 0x6f(r29)
    stb r0, 0x6c(r29)
    b lbl_fn_8064AEDC_00002D4C
lbl_fn_8064AEDC_00002CC0:
    mr r3, r29
    bl fn_8064E128
    b lbl_fn_8064AEDC_00002D4C
    mr r3, r29
    li r4, 0x0
    bl fn_8064C9B4
    b lbl_fn_8064AEDC_00002D4C
    mr r3, r31
    bl fn_80626D50
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8064CA64
    b lbl_fn_8064AEDC_00002D4C
    li r0, 0x1
    stb r0, 0x70(r29)
    b lbl_fn_8064AEDC_00002D4C
    li r0, 0x0
    mr r3, r29
    stb r0, 0x6c(r29)
    bl fn_80648FF4
    b lbl_fn_8064AEDC_00002D4C
    b lbl_fn_8064AEDC_00002D4C
lbl_fn_8064AEDC_00002D1C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064AEDC_00002D4C
    lis r3, 0x9
    lis r4, lbl_807B7B78@ha
    lbz r6, 0x6c(r29)
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7B78@l
    bl fn_80629850
lbl_fn_8064AEDC_00002D4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064B054(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808238C8@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_808238C8@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_fn_8064B054_00002DC4
    cmpwi r31, 0x0
    lis r3, 0x9
    lis r4, lbl_807B7D80@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7D80@l
    beq lbl_fn_8064B054_00002DBC
    lhz r6, 0x0(r31)
    b lbl_fn_8064B054_00002DC0
lbl_fn_8064B054_00002DBC:
    li r6, 0x0
lbl_fn_8064B054_00002DC0:
    bl fn_80629850
lbl_fn_8064B054_00002DC4:
    lhz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8064B054_00002DF8
    lbz r0, 0x6d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8064B054_00002DEC
    mr r3, r30
    bl fn_806482EC
    lhz r3, 0x68(r30)
    bl fn_806428EC
lbl_fn_8064B054_00002DEC:
    mr r3, r30
    bl fn_8064E128
    b lbl_fn_8064B054_00002E44
lbl_fn_8064B054_00002DF8:
    lbz r0, 0x6c(r30)
    li r3, 0x1
    stb r3, 0x6e(r30)
    cmplwi r0, 0x2
    bne lbl_fn_8064B054_00002E44
    lbz r0, 0x6f(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8064B054_00002E44
    lbz r0, 0x6d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8064B054_00002E3C
    li r0, 0x3
    mr r3, r30
    stb r0, 0x6c(r30)
    li r4, 0x0
    bl fn_8064C904
    b lbl_fn_8064B054_00002E44
lbl_fn_8064B054_00002E3C:
    li r0, 0x4
    stb r0, 0x6c(r30)
lbl_fn_8064B054_00002E44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064B148(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808238C8@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_808238C8@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_fn_8064B148_00002EA4
    lis r3, 0x9
    lis r4, lbl_807B7DA4@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B7DA4@l
    bl fn_80629830
lbl_fn_8064B148_00002EA4:
    lbz r0, 0x2(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064B148_00002EC0
    lhz r3, 0x4(r31)
    subi r0, r3, 0x6
    sth r0, 0x6a(r30)
    b lbl_fn_8064B148_00002EC8
lbl_fn_8064B148_00002EC0:
    li r0, 0x29a
    sth r0, 0x6a(r30)
lbl_fn_8064B148_00002EC8:
    li r0, 0x0
    mr r4, r31
    stb r0, 0x2(r31)
    stb r0, 0x20(r31)
    stb r0, 0x6(r31)
    sth r0, 0x0(r31)
    lhz r3, 0x68(r30)
    bl fn_8064281C
    lbz r0, 0x6c(r30)
    li r3, 0x1
    stb r3, 0x6f(r30)
    cmplwi r0, 0x2
    bne lbl_fn_8064B148_00002F34
    lbz r0, 0x6e(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8064B148_00002F34
    lbz r0, 0x6d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8064B148_00002F2C
    li r0, 0x3
    mr r3, r30
    stb r0, 0x6c(r30)
    li r4, 0x0
    bl fn_8064C904
    b lbl_fn_8064B148_00002F34
lbl_fn_8064B148_00002F2C:
    li r0, 0x4
    stb r0, 0x6c(r30)
lbl_fn_8064B148_00002F34:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064B238(void)
{
    nofralloc
    cmpwi r3, 0x0
    mr r6, r4
    bne lbl_fn_8064B238_00002F88
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    bltlr
    lis r3, 0x9
    lis r4, lbl_807B7DC0@ha
    mr r5, r6
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7DC0@l
    b fn_80629830
    blr
lbl_fn_8064B238_00002F88:
    lbz r0, 0x68(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8064B238_00002FCC
    bge lbl_fn_8064B238_00002FB0
    cmpwi r0, 0x1
    beq lbl_fn_8064B238_00002FC4
    bge lbl_fn_8064B238_00002FC8
    cmpwi r0, 0x0
    bge lbl_fn_8064B238_00002FC0
    blr
lbl_fn_8064B238_00002FB0:
    cmpwi r0, 0x5
    beq lbl_fn_8064B238_00002FD4
    bgelr
    b lbl_fn_8064B238_00002FD0
lbl_fn_8064B238_00002FC0:
    b fn_8064B2C8
lbl_fn_8064B238_00002FC4:
    b fn_8064B43C
lbl_fn_8064B238_00002FC8:
    b fn_8064B794
lbl_fn_8064B238_00002FCC:
    b fn_8064B5D8
lbl_fn_8064B238_00002FD0:
    b fn_8064B8E4
lbl_fn_8064B238_00002FD4:
    b fn_8064BAD0
    blr
}

asm void fn_8064B2C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xe
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bgt lbl_fn_8064B2C8_0000310C
    lis r6, jumptable_807B7E18@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_807B7E18@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lbz r0, 0xd(r30)
    li r5, 0x2
    lis r8, fn_8064E454@ha
    stb r5, 0x68(r3)
    lwz r4, 0x6c(r3)
    mr r9, r30
    srwi r7, r0, 1
    addi r8, r8, fn_8064E454@l
    addi r3, r4, 0x62
    li r4, 0x3
    li r5, 0x1
    li r6, 0x3
    bl fn_806380C0
    b lbl_fn_8064B2C8_00003138
    b lbl_fn_8064B2C8_00003138
    mr r3, r5
    bl fn_80626D50
    b lbl_fn_8064B2C8_0000310C
    lbz r0, 0xd(r30)
    li r5, 0x3
    lis r8, fn_8064E454@ha
    stb r5, 0x68(r3)
    lwz r4, 0x6c(r3)
    mr r9, r30
    srwi r7, r0, 1
    addi r8, r8, fn_8064E454@l
    addi r3, r4, 0x62
    li r4, 0x3
    li r5, 0x0
    li r6, 0x3
    bl fn_806380C0
    b lbl_fn_8064B2C8_00003138
    b lbl_fn_8064B2C8_00003138
    bl fn_8064E4A8
    b lbl_fn_8064B2C8_00003138
    mr r3, r5
    bl fn_80626D50
    lwz r3, 0x6c(r30)
    li r5, 0x0
    lbz r4, 0xd(r30)
    bl fn_8064CA64
    b lbl_fn_8064B2C8_00003138
    lwz r3, 0x6c(r3)
    li r5, 0x0
    lbz r4, 0xd(r30)
    bl fn_8064CA64
    b lbl_fn_8064B2C8_00003138
    lwz r3, 0x6c(r3)
    bl fn_80649094
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064B2C8_00003138
    lis r4, lbl_807B7DD4@ha
    lbz r5, 0x68(r30)
    mr r6, r31
    lis r3, 0x9
    addi r4, r4, lbl_807B7DD4@l
    bl fn_80629850
    b lbl_fn_8064B2C8_00003138
lbl_fn_8064B2C8_0000310C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064B2C8_00003138
    lis r3, 0x9
    lis r4, lbl_807B7DF4@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7DF4@l
    bl fn_80629830
lbl_fn_8064B2C8_00003138:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064B43C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xe
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bgt lbl_fn_8064B43C_000032A8
    lis r6, jumptable_807B7E80@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_807B7E80@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064B43C_000032D4
    lis r4, lbl_807B7DD4@ha
    lbz r5, 0x68(r30)
    mr r6, r31
    lis r3, 0x9
    addi r4, r4, lbl_807B7DD4@l
    bl fn_80629850
    b lbl_fn_8064B43C_000032D4
    li r4, 0x3
    bl fn_8064E27C
    lwz r3, 0x6c(r30)
    lbz r4, 0xd(r30)
    bl fn_8064CB28
    li r3, 0x0
    li r0, 0x5
    stb r3, 0x69(r30)
    stb r0, 0x68(r30)
    b lbl_fn_8064B43C_000032D4
    bl fn_8064E4A8
    b lbl_fn_8064B43C_000032D4
    mr r3, r5
    bl fn_80626D50
    b lbl_fn_8064B43C_000032A8
    bl fn_8064E2FC
    li r0, 0x4
    lwz r3, 0x6c(r30)
    stb r0, 0x68(r30)
    li r6, 0x0
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r3)
    bl fn_806488DC
    b lbl_fn_8064B43C_000032D4
    lwz r3, 0x6c(r3)
    li r6, 0x1
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r3)
    bl fn_806488DC
    mr r3, r30
    bl fn_8064E4A8
    b lbl_fn_8064B43C_000032D4
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    bl fn_8064C9B4
    lwz r3, 0x6c(r30)
    li r6, 0x1
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r3)
    bl fn_806488DC
    mr r3, r30
    bl fn_8064E4A8
    b lbl_fn_8064B43C_000032D4
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    bl fn_8064C9B4
    b lbl_fn_8064B43C_000032D4
    mr r3, r5
    bl fn_80626D50
    b lbl_fn_8064B43C_000032D4
    li r0, 0x0
    lwz r5, 0x6c(r3)
    stb r0, 0x68(r3)
    li r6, 0x1
    mr r3, r5
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r5)
    bl fn_806488DC
    b lbl_fn_8064B43C_000032D4
lbl_fn_8064B43C_000032A8:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064B43C_000032D4
    lis r3, 0x9
    lis r4, lbl_807B7E54@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7E54@l
    bl fn_80629830
lbl_fn_8064B43C_000032D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064B5D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807B7DC0@ha
    cmplwi r4, 0xf
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807B7DC0@l
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bgt lbl_fn_8064B5D8_00003468
    lis r6, jumptable_807B7F18@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_807B7F18@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8064B5D8_00003364
    lwz r3, 0x6c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8064B5D8_00003490
    lbz r4, 0xd(r30)
    li r5, 0x1
    bl fn_8064CA64
    mr r3, r30
    li r4, 0xf
    bl fn_80649554
    b lbl_fn_8064B5D8_00003490
lbl_fn_8064B5D8_00003364:
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r3)
    bl fn_8064879C
    b lbl_fn_8064B5D8_00003490
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064B5D8_00003490
    lbz r5, 0x68(r30)
    mr r6, r4
    addi r4, r7, 0x14
    lis r3, 0x9
    bl fn_80629850
    b lbl_fn_8064B5D8_00003490
    lwz r3, 0x6c(r3)
    addi r3, r3, 0x62
    bl fn_806384E4
    mr r3, r30
    bl fn_8064E4A8
    b lbl_fn_8064B5D8_00003490
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064B5D8_000033DC
    addi r4, r7, 0xfc
    lis r3, 0x9
    bl fn_80629810
lbl_fn_8064B5D8_000033DC:
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064B5D8_00003490
    b lbl_fn_8064B5D8_00003490
    lwz r3, 0x6c(r3)
    addi r3, r3, 0x62
    bl fn_806384E4
    li r0, 0x0
    lwz r3, 0x6c(r30)
    stb r0, 0x68(r30)
    lbz r4, 0xd(r30)
    bl fn_8064C9B4
    lwz r3, 0x6c(r30)
    lbz r4, 0xd(r30)
    bl fn_80648F8C
    b lbl_fn_8064B5D8_00003490
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064B5D8_00003490
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8064B5D8_00003450
    lwz r3, 0x6c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8064B5D8_00003490
    lbz r4, 0xd(r30)
    li r5, 0x1
    bl fn_8064CA64
    b lbl_fn_8064B5D8_00003490
lbl_fn_8064B5D8_00003450:
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    bl fn_8064C9B4
    li r0, 0x4
    stb r0, 0x68(r30)
    b lbl_fn_8064B5D8_00003490
lbl_fn_8064B5D8_00003468:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064B5D8_00003490
    lis r3, 0x9
    mr r5, r4
    addi r3, r3, 0x1
    addi r4, r7, 0x128
    bl fn_80629830
lbl_fn_8064B5D8_00003490:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064B794(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_807B7DC0@ha
    cmplwi r4, 0xf
    stw r0, 0x14(r1)
    addi r7, r7, lbl_807B7DC0@l
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bgt lbl_fn_8064B794_000035B8
    lis r6, jumptable_807B7FB8@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_807B7FB8@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8064B794_00003518
    lwz r3, 0x6c(r3)
    li r5, 0x0
    lbz r4, 0xd(r30)
    li r6, 0x70
    bl fn_806488DC
    mr r3, r30
    bl fn_8064E4A8
    b lbl_fn_8064B794_000035E0
lbl_fn_8064B794_00003518:
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    bl fn_8064C904
    mr r3, r30
    li r4, 0x3c
    bl fn_8064E27C
    li r0, 0x1
    stb r0, 0x68(r30)
    b lbl_fn_8064B794_000035E0
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064B794_000035E0
    lbz r5, 0x68(r30)
    mr r6, r4
    addi r4, r7, 0x14
    lis r3, 0x9
    bl fn_80629850
    b lbl_fn_8064B794_000035E0
    lwz r3, 0x6c(r3)
    addi r3, r3, 0x62
    bl fn_806384E4
    mr r3, r30
    bl fn_8064E4A8
    b lbl_fn_8064B794_000035E0
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064B794_000035A0
    addi r4, r7, 0x198
    lis r3, 0x9
    bl fn_80629810
lbl_fn_8064B794_000035A0:
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064B794_000035E0
    mr r3, r31
    bl fn_80626D50
    b lbl_fn_8064B794_000035E0
lbl_fn_8064B794_000035B8:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064B794_000035E0
    lis r3, 0x9
    mr r5, r4
    addi r3, r3, 0x1
    addi r4, r7, 0x1c8
    bl fn_80629830
lbl_fn_8064B794_000035E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064B8E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xe
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bgt lbl_fn_8064B8E4_000037A0
    lis r6, jumptable_807B801C@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_807B801C@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064B8E4_000037CC
    lis r4, lbl_807B7DD4@ha
    lbz r5, 0x68(r31)
    mr r6, r30
    lis r3, 0x9
    addi r4, r4, lbl_807B7DD4@l
    bl fn_80629850
    b lbl_fn_8064B8E4_000037CC
    li r4, 0x3
    bl fn_8064E27C
    lwz r3, 0x6c(r31)
    lbz r4, 0xd(r31)
    bl fn_8064CB28
    li r3, 0x0
    li r0, 0x5
    stb r3, 0x69(r31)
    stb r0, 0x68(r31)
    b lbl_fn_8064B8E4_000037CC
    bl fn_8064E4A8
    b lbl_fn_8064B8E4_000037CC
    lwz r4, 0x6c(r3)
    lbz r0, 0x72(r4)
    cmplwi r0, 0x2
    bne lbl_fn_8064B8E4_000036E8
    lhz r4, 0x2(r5)
    lhz r0, 0x14(r3)
    cmplw r4, r0
    bge lbl_fn_8064B8E4_000036E8
    lbz r0, 0x3d(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8064B8E4_000036E8
    lhz r0, 0x9a(r3)
    lhz r4, 0x9c(r3)
    cmplw r4, r0
    ble lbl_fn_8064B8E4_000036E8
    subf r0, r0, r4
    clrlwi r0, r0, 24
    sth r0, 0x6(r5)
    lhz r0, 0x9c(r3)
    sth r0, 0x9a(r3)
    b lbl_fn_8064B8E4_000036F0
lbl_fn_8064B8E4_000036E8:
    li r0, 0x0
    sth r0, 0x6(r5)
lbl_fn_8064B8E4_000036F0:
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    bl fn_8064CBD8
    mr r3, r31
    bl fn_8064E68C
    b lbl_fn_8064B8E4_000037CC
    b lbl_fn_8064B8E4_000037CC
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    bl fn_8064C9B4
    b lbl_fn_8064B8E4_000037CC
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    bl fn_80648F8C
    mr r3, r31
    bl fn_8064E4A8
    b lbl_fn_8064B8E4_000037CC
    li r0, 0x0
    lbz r4, 0xd(r31)
    stb r0, 0x68(r3)
    lwz r3, 0x6c(r3)
    bl fn_8064C9B4
    lwz r3, 0x6c(r31)
    lbz r4, 0xd(r31)
    bl fn_80648F8C
    b lbl_fn_8064B8E4_000037CC
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    bl fn_8064912C
    b lbl_fn_8064B8E4_000037CC
    lwz r3, 0x6c(r3)
    bl fn_80649094
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064B8E4_000037CC
    lis r4, lbl_807B7DD4@ha
    lbz r5, 0x68(r31)
    mr r6, r30
    lis r3, 0x9
    addi r4, r4, lbl_807B7DD4@l
    bl fn_80629850
    b lbl_fn_8064B8E4_000037CC
lbl_fn_8064B8E4_000037A0:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064B8E4_000037CC
    lis r3, 0x9
    lis r4, lbl_807B7FF8@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B7FF8@l
    bl fn_80629830
lbl_fn_8064B8E4_000037CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064BAD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xe
    mr r6, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bgt lbl_fn_8064BAD0_000038C0
    lis r7, jumptable_807B8084@ha
    slwi r0, r4, 2
    addi r7, r7, jumptable_807B8084@l
    lwzx r7, r7, r0
    mtctr r7
    bctr
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064BAD0_000038EC
    lis r4, lbl_807B7DD4@ha
    lbz r5, 0x68(r31)
    lis r3, 0x9
    addi r4, r4, lbl_807B7DD4@l
    bl fn_80629850
    b lbl_fn_8064BAD0_000038EC
    bl fn_8064E4A8
    b lbl_fn_8064BAD0_000038EC
    mr r3, r5
    bl fn_80626D50
    b lbl_fn_8064BAD0_000038EC
    lwz r3, 0x6c(r3)
    li r0, 0x1
    stb r0, 0x74(r3)
    mr r3, r31
    bl fn_8064E4A8
    b lbl_fn_8064BAD0_000038EC
    lwz r3, 0x6c(r3)
    li r5, 0x1
    lbz r4, 0xd(r31)
    bl fn_8064CA64
    b lbl_fn_8064BAD0_000038EC
    lwz r3, 0x6c(r3)
    li r5, 0x1
    lbz r4, 0xd(r31)
    bl fn_8064CA64
    b lbl_fn_8064BAD0_000038EC
    mr r3, r5
    bl fn_80626D50
    lwz r3, 0x6c(r31)
    li r5, 0x0
    lbz r4, 0xd(r31)
    bl fn_8064CA64
    b lbl_fn_8064BAD0_000038EC
    bl fn_8064E4A8
    b lbl_fn_8064BAD0_000038EC
lbl_fn_8064BAD0_000038C0:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064BAD0_000038EC
    lis r3, 0x9
    lis r4, lbl_807B8058@ha
    mr r5, r6
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B8058@l
    bl fn_80629830
lbl_fn_8064BAD0_000038EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064BBEC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r31, 0x0(r5)
    beq lbl_fn_8064BBEC_00003988
    lbz r0, 0x6c(r3)
    cmplwi r0, 0x6
    beq lbl_fn_8064BBEC_00003950
    lhz r5, 0xe(r5)
    mr r4, r31
    lbz r6, 0xa(r30)
    lbz r7, 0x11(r30)
    bl fn_806484E8
    b lbl_fn_8064BBEC_000039CC
lbl_fn_8064BBEC_00003950:
    mr r4, r31
    li r5, 0x0
    bl fn_8064CA64
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8064BBEC_000039CC
    lis r3, 0x9
    lis r4, lbl_807B80C0@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_807B80C0@l
    bl fn_80629810
    b lbl_fn_8064BBEC_000039CC
lbl_fn_8064BBEC_00003988:
    mr r4, r31
    bl fn_80649940
    cmpwi r3, 0x0
    beq lbl_fn_8064BBEC_000039CC
    lbz r4, 0x69(r3)
    clrlwi. r0, r4, 31
    bne lbl_fn_8064BBEC_000039A8
    b lbl_fn_8064BBEC_000039CC
lbl_fn_8064BBEC_000039A8:
    rlwinm r0, r4, 0, 24, 30
    stb r0, 0x69(r3)
    bl fn_8064E2FC
    lhz r5, 0xe(r30)
    mr r3, r29
    lbz r6, 0xa(r30)
    mr r4, r31
    lbz r7, 0x11(r30)
    bl fn_80648698
lbl_fn_8064BBEC_000039CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064BCD4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    mr r29, r3
    stw r28, 0x20(r1)
    mr r28, r4
    lbz r4, 0x0(r6)
    bl fn_80649940
    cmpwi r3, 0x0
    bne lbl_fn_8064BCD4_00003A60
    cmpwi r28, 0x0
    beq lbl_fn_8064BCD4_00003CD4
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x9
    bl memset
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_8064C334
    lbz r4, 0x0(r30)
    mr r3, r29
    lhz r6, 0x12(r30)
    addi r5, r1, 0x8
    bl fn_80648A20
    b lbl_fn_8064BCD4_00003CD4
lbl_fn_8064BCD4_00003A60:
    cmpwi r28, 0x0
    beq lbl_fn_8064BCD4_00003AD4
    cmpwi r31, 0x0
    beq lbl_fn_8064BCD4_00003AD4
    lbz r4, 0x51(r3)
    addi r6, r3, 0x51
    lbz r0, 0x52(r3)
    li r5, 0x0
    li r7, 0x0
    stb r4, 0x8(r1)
    stb r0, 0x9(r1)
    lbz r4, 0x53(r3)
    lbz r0, 0x54(r3)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    lbz r4, 0x55(r3)
    lbz r0, 0x56(r3)
    stb r4, 0xc(r1)
    stb r0, 0xd(r1)
    lbz r4, 0x57(r3)
    lbz r0, 0x58(r3)
    stb r4, 0xe(r1)
    stb r0, 0xf(r1)
    lbz r0, 0x59(r3)
    mr r3, r29
    stb r0, 0x10(r1)
    lbz r4, 0x0(r30)
    bl fn_8064D130
    b lbl_fn_8064BCD4_00003CD4
lbl_fn_8064BCD4_00003AD4:
    lbz r5, 0x51(r3)
    mr r4, r30
    lbz r0, 0x52(r3)
    stb r5, 0x8(r1)
    stb r0, 0x9(r1)
    lbz r5, 0x53(r3)
    lbz r0, 0x54(r3)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lbz r5, 0x55(r3)
    lbz r0, 0x56(r3)
    stb r5, 0xc(r1)
    stb r0, 0xd(r1)
    lbz r5, 0x57(r3)
    lbz r0, 0x58(r3)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lbz r0, 0x59(r3)
    addi r3, r1, 0x8
    stb r0, 0x10(r1)
    bl fn_8064C334
    cmpwi r28, 0x0
    beq lbl_fn_8064BCD4_00003B48
    lbz r4, 0x0(r30)
    mr r3, r29
    lhz r6, 0x12(r30)
    addi r5, r1, 0x8
    bl fn_80648A20
    b lbl_fn_8064BCD4_00003CD4
lbl_fn_8064BCD4_00003B48:
    lbz r4, 0x0(r30)
    mr r3, r29
    bl fn_80649940
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8064BCD4_00003CD4
    lbz r0, 0x69(r3)
    rlwinm. r0, r0, 0, 29, 30
    bne lbl_fn_8064BCD4_00003B70
    b lbl_fn_8064BCD4_00003CD4
lbl_fn_8064BCD4_00003B70:
    bl fn_8064E2FC
    lbz r3, 0x69(r31)
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_fn_8064BCD4_00003C2C
    rlwinm r0, r3, 0, 31, 29
    stb r0, 0x69(r31)
    lbz r3, 0x8(r1)
    lbz r0, 0x9(r1)
    stb r3, 0x51(r31)
    stb r0, 0x52(r31)
    lbz r3, 0xa(r1)
    lbz r0, 0xb(r1)
    stb r3, 0x53(r31)
    stb r0, 0x54(r31)
    lbz r3, 0xc(r1)
    lbz r0, 0xd(r1)
    stb r3, 0x55(r31)
    stb r0, 0x56(r31)
    lbz r3, 0xe(r1)
    lbz r0, 0xf(r1)
    stb r3, 0x57(r31)
    stb r0, 0x58(r31)
    lbz r0, 0x10(r1)
    stb r0, 0x59(r31)
    lbz r0, 0xd(r1)
    cmplwi r0, 0xc
    beq lbl_fn_8064BCD4_00003BE4
    cmplwi r0, 0x30
    bne lbl_fn_8064BCD4_00003BF0
lbl_fn_8064BCD4_00003BE4:
    li r0, 0x3f7f
    sth r0, 0x12(r30)
    b lbl_fn_8064BCD4_00003C34
lbl_fn_8064BCD4_00003BF0:
    li r0, 0xc
    mr r3, r29
    stb r0, 0x56(r31)
    addi r6, r31, 0x51
    li r5, 0x1
    li r7, 0xc00
    lbz r0, 0x69(r31)
    ori r0, r0, 0x4
    stb r0, 0x69(r31)
    lbz r4, 0x0(r30)
    bl fn_8064D130
    mr r3, r31
    li r4, 0x3c
    bl fn_8064E27C
    b lbl_fn_8064BCD4_00003CD4
lbl_fn_8064BCD4_00003C2C:
    rlwinm r0, r3, 0, 30, 28
    stb r0, 0x69(r31)
lbl_fn_8064BCD4_00003C34:
    lhz r3, 0x12(r30)
    rlwinm r0, r3, 0, 20, 21
    cmpwi r0, 0xc00
    beq lbl_fn_8064BCD4_00003C50
    rlwinm r0, r3, 0, 18, 19
    cmpwi r0, 0x3000
    bne lbl_fn_8064BCD4_00003C68
lbl_fn_8064BCD4_00003C50:
    lbz r4, 0xd(r31)
    mr r3, r29
    addi r5, r1, 0x8
    li r6, 0x0
    bl fn_80648B70
    b lbl_fn_8064BCD4_00003CD4
lbl_fn_8064BCD4_00003C68:
    lbz r0, 0x56(r31)
    cmplwi r0, 0xc
    bne lbl_fn_8064BCD4_00003CB0
    li r0, 0x30
    mr r3, r29
    stb r0, 0x56(r31)
    addi r6, r31, 0x51
    li r5, 0x1
    li r7, 0x3000
    lbz r0, 0x69(r31)
    ori r0, r0, 0x4
    stb r0, 0x69(r31)
    lbz r4, 0x0(r30)
    bl fn_8064D130
    mr r3, r31
    li r4, 0x3c
    bl fn_8064E27C
    b lbl_fn_8064BCD4_00003CD4
lbl_fn_8064BCD4_00003CB0:
    cmplwi r0, 0x30
    bne lbl_fn_8064BCD4_00003CD4
    li r0, 0x0
    mr r3, r29
    stb r0, 0x56(r31)
    addi r5, r1, 0x8
    li r6, 0x0
    lbz r4, 0xd(r31)
    bl fn_80648B70
lbl_fn_8064BCD4_00003CD4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8064BFE0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r4
    lbz r27, 0x9(r5)
    lbz r4, 0x0(r5)
    mr r28, r3
    mr r30, r5
    bl fn_80649940
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8064BFE0_00003E48
    rlwinm. r0, r27, 0, 29, 29
    li r0, 0x0
    stb r0, 0x8(r1)
    beq lbl_fn_8064BFE0_00003D44
    ori r0, r0, 0x1
    stb r0, 0x8(r1)
lbl_fn_8064BFE0_00003D44:
    rlwinm. r0, r27, 0, 28, 28
    beq lbl_fn_8064BFE0_00003D58
    lbz r0, 0x8(r1)
    ori r0, r0, 0x2
    stb r0, 0x8(r1)
lbl_fn_8064BFE0_00003D58:
    rlwinm. r0, r27, 0, 25, 25
    beq lbl_fn_8064BFE0_00003D6C
    lbz r0, 0x8(r1)
    ori r0, r0, 0x4
    stb r0, 0x8(r1)
lbl_fn_8064BFE0_00003D6C:
    rlwinm. r0, r27, 0, 24, 24
    beq lbl_fn_8064BFE0_00003D80
    lbz r0, 0x8(r1)
    ori r0, r0, 0x8
    stb r0, 0x8(r1)
lbl_fn_8064BFE0_00003D80:
    extrwi r0, r27, 1, 30
    stb r0, 0xc(r1)
    lbz r0, 0xa(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8064BFE0_00003D9C
    lbz r5, 0xb(r30)
    b lbl_fn_8064BFE0_00003DA0
lbl_fn_8064BFE0_00003D9C:
    li r5, 0x0
lbl_fn_8064BFE0_00003DA0:
    li r4, 0x0
    li r0, 0x1
    cmpwi r29, 0x0
    stb r5, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    beq lbl_fn_8064BFE0_00003E1C
    lbz r4, 0x0(r30)
    mr r3, r28
    addi r6, r1, 0x8
    li r5, 0x0
    bl fn_8064CF60
    lwz r3, 0x6c(r31)
    lbz r0, 0x72(r3)
    cmplwi r0, 0x2
    beq lbl_fn_8064BFE0_00003E08
    lbz r3, 0xc(r1)
    stb r3, 0x63(r31)
    lbz r0, 0x24(r31)
    cmplw r3, r0
    beq lbl_fn_8064BFE0_00003E08
    cntlzw r0, r3
    lbz r4, 0x0(r30)
    mr r3, r28
    extrwi r5, r0, 8, 19
    bl fn_8064932C
lbl_fn_8064BFE0_00003E08:
    lbz r4, 0x0(r30)
    mr r3, r28
    addi r5, r1, 0x8
    bl fn_80648C88
    b lbl_fn_8064BFE0_00003E48
lbl_fn_8064BFE0_00003E1C:
    lbz r4, 0x69(r3)
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_fn_8064BFE0_00003E48
    rlwinm r0, r4, 0, 29, 27
    stb r0, 0x69(r3)
    mr r3, r31
    bl fn_8064E2FC
    lwz r3, 0x6c(r31)
    addi r5, r1, 0x8
    lbz r4, 0xd(r31)
    bl fn_80648E00
lbl_fn_8064BFE0_00003E48:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8064C14C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8064C14C_00003EA8
    lbz r4, 0x0(r5)
    lbz r5, 0x9(r5)
    bl fn_80648EC4
    lbz r4, 0x0(r31)
    mr r3, r30
    lbz r6, 0x9(r31)
    li r5, 0x0
    bl fn_8064D080
    b lbl_fn_8064C14C_00003ED4
lbl_fn_8064C14C_00003EA8:
    lbz r4, 0x0(r5)
    bl fn_80649940
    cmpwi r3, 0x0
    beq lbl_fn_8064C14C_00003ED4
    lbz r4, 0x69(r3)
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_fn_8064C14C_00003EC8
    b lbl_fn_8064C14C_00003ED4
lbl_fn_8064C14C_00003EC8:
    rlwinm r0, r4, 0, 28, 26
    stb r0, 0x69(r3)
    bl fn_8064E2FC
lbl_fn_8064C14C_00003ED4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064C1D8(void)
{
    nofralloc
    blr
}

asm void fn_8064C1DC(void)
{
    nofralloc
    mr r3, r4
    b fn_80626D50
}

asm void fn_8064C1E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8064C1E4_00003F48
    lis r5, lbl_808238C8@ha
    li r0, 0x0
    addi r5, r5, lbl_808238C8@l
    li r4, 0x0
    stb r0, 0x64(r5)
    bl fn_8064CE58
    lbz r0, 0x73(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8064C1E4_00003F48
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl fn_8064932C
lbl_fn_8064C1E4_00003F48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064C248(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8064C248_00003FAC
    lis r4, lbl_808238C8@ha
    li r0, 0x1
    addi r4, r4, lbl_808238C8@l
    stb r0, 0x64(r4)
    lbz r0, 0x73(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8064C248_00003FA0
    li r4, 0x0
    li r5, 0x0
    bl fn_8064932C
lbl_fn_8064C248_00003FA0:
    mr r3, r31
    li r4, 0x0
    bl fn_8064CEDC
lbl_fn_8064C248_00003FAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064C2AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stb r4, 0x73(r3)
    bne lbl_fn_8064C2AC_00003FF0
    li r4, 0x0
    bl fn_8064E6C8
lbl_fn_8064C2AC_00003FF0:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8064C2AC_00004030
    cmpwi r31, 0x0
    bne lbl_fn_8064C2AC_00004020
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_8064932C
    b lbl_fn_8064C2AC_00004030
lbl_fn_8064C2AC_00004020:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_8064932C
lbl_fn_8064C2AC_00004030:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064C334(void)
{
    nofralloc
    lhz r0, 0x12(r4)
    clrlwi. r0, r0, 31
    beq lbl_fn_8064C334_0000405C
    lbz r0, 0xa(r4)
    stb r0, 0x0(r3)
lbl_fn_8064C334_0000405C:
    lhz r0, 0x12(r4)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_8064C334_00004070
    lbz r0, 0xb(r4)
    stb r0, 0x1(r3)
lbl_fn_8064C334_00004070:
    lhz r0, 0x12(r4)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_8064C334_00004084
    lbz r0, 0xc(r4)
    stb r0, 0x2(r3)
lbl_fn_8064C334_00004084:
    lhz r0, 0x12(r4)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_8064C334_00004098
    lbz r0, 0xd(r4)
    stb r0, 0x3(r3)
lbl_fn_8064C334_00004098:
    lhz r0, 0x12(r4)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_8064C334_000040AC
    lbz r0, 0xe(r4)
    stb r0, 0x4(r3)
lbl_fn_8064C334_000040AC:
    lhz r0, 0x12(r4)
    rlwinm. r0, r0, 0, 18, 23
    beq lbl_fn_8064C334_000040C0
    lbz r0, 0xf(r4)
    stb r0, 0x5(r3)
lbl_fn_8064C334_000040C0:
    lhz r0, 0x12(r4)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_fn_8064C334_000040D4
    lbz r0, 0x10(r4)
    stb r0, 0x7(r3)
lbl_fn_8064C334_000040D4:
    lhz r0, 0x12(r4)
    rlwinm. r0, r0, 0, 25, 25
    beqlr
    lbz r0, 0x11(r4)
    stb r0, 0x8(r3)
    blr
}

asm void fn_8064C3D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r5, r1, 0x8
    sth r4, 0x8(r1)
    li r4, 0x7
    bl fn_8064A5F4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064C404(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80649940
    lbz r0, 0x6c(r30)
    cmplwi r0, 0x5
    beq lbl_fn_8064C404_0000415C
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_806488DC
    b lbl_fn_8064C404_00004168
lbl_fn_8064C404_0000415C:
    li r4, 0x9
    li r5, 0x0
    bl fn_8064B238
lbl_fn_8064C404_00004168:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064C46C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    sth r6, 0x8(r1)
    bl fn_80649940
    lbz r0, 0x6c(r30)
    cmplwi r0, 0x5
    beq lbl_fn_8064C46C_000041CC
    lhz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8064C46C_000041CC
    mr r3, r30
    mr r4, r31
    bl fn_80648F8C
    b lbl_fn_8064C46C_000041D8
lbl_fn_8064C46C_000041CC:
    addi r5, r1, 0x8
    li r4, 0xb
    bl fn_8064B238
lbl_fn_8064C46C_000041D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064C4DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80649940
    lbz r0, 0x6c(r28)
    mr r31, r3
    cmplwi r0, 0x5
    beq lbl_fn_8064C4DC_00004238
    li r0, 0xd
    stb r0, 0xe(r3)
    b lbl_fn_8064C4DC_000042B0
lbl_fn_8064C4DC_00004238:
    lbz r4, 0x72(r28)
    li r0, 0x2
    cmpwi r4, 0x0
    beq lbl_fn_8064C4DC_0000424C
    mr r0, r4
lbl_fn_8064C4DC_0000424C:
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bne lbl_fn_8064C4DC_0000427C
    lhz r4, 0x9c(r3)
    li r7, 0xf0
    li r0, 0x7
    cmplwi r4, 0x7
    bge lbl_fn_8064C4DC_00004270
    mr r0, r4
lbl_fn_8064C4DC_00004270:
    clrlwi r8, r0, 24
    sth r8, 0x9a(r3)
    b lbl_fn_8064C4DC_00004284
lbl_fn_8064C4DC_0000427C:
    li r7, 0x0
    li r8, 0x0
lbl_fn_8064C4DC_00004284:
    lbz r0, 0x69(r3)
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    ori r0, r0, 0x1
    stb r0, 0x69(r3)
    mr r3, r28
    bl fn_8064CD70
    mr r3, r31
    li r4, 0x3c
    bl fn_8064E27C
lbl_fn_8064C4DC_000042B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064C5BC(void)
{
    nofralloc
    lbz r0, 0x6c(r3)
    mr r9, r6
    mr r8, r7
    cmplwi r0, 0x5
    bnelr
    mr r6, r5
    mr r7, r9
    li r5, 0x0
    b fn_8064CD70
    blr
}

asm void fn_8064C5E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80649940
    lbz r0, 0x6c(r28)
    mr r31, r3
    cmplwi r0, 0x5
    beq lbl_fn_8064C5E4_0000434C
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    li r6, 0x1
    bl fn_80648B70
    b lbl_fn_8064C5E4_00004394
lbl_fn_8064C5E4_0000434C:
    cmpwi r30, 0x0
    bne lbl_fn_8064C5E4_00004364
    lbz r0, 0x69(r3)
    ori r0, r0, 0x2
    stb r0, 0x69(r3)
    b lbl_fn_8064C5E4_00004370
lbl_fn_8064C5E4_00004364:
    lbz r0, 0x69(r3)
    ori r0, r0, 0x4
    stb r0, 0x69(r3)
lbl_fn_8064C5E4_00004370:
    mr r3, r28
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    li r7, 0x3f7f
    bl fn_8064D130
    mr r3, r31
    li r4, 0x3c
    bl fn_8064E27C
lbl_fn_8064C5E4_00004394:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064C6A0(void)
{
    nofralloc
    lbz r0, 0x6c(r3)
    mr r7, r6
    cmplwi r0, 0x5
    bnelr
    mr r6, r5
    li r5, 0x0
    b fn_8064D130
    blr
}

asm void fn_8064C6C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80649940
    lbz r0, 0x2(r3)
    mr r31, r3
    cmplwi r0, 0x2
    bne lbl_fn_8064C6C0_00004458
    lbz r0, 0x68(r3)
    cmplwi r0, 0x4
    beq lbl_fn_8064C6C0_00004420
    b lbl_fn_8064C6C0_00004458
lbl_fn_8064C6C0_00004420:
    lbz r0, 0x64(r3)
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    ori r0, r0, 0x1
    stb r0, 0x64(r3)
    lbz r0, 0x69(r3)
    ori r0, r0, 0x8
    stb r0, 0x69(r3)
    mr r3, r28
    bl fn_8064CF60
    mr r3, r31
    li r4, 0x3c
    bl fn_8064E27C
lbl_fn_8064C6C0_00004458:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064C764(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80649940
    lbz r0, 0x2(r3)
    mr r31, r3
    cmplwi r0, 0x2
    bne lbl_fn_8064C764_000044FC
    lbz r0, 0x68(r3)
    cmplwi r0, 0x4
    beq lbl_fn_8064C764_000044C4
    b lbl_fn_8064C764_000044FC
lbl_fn_8064C764_000044C4:
    cntlzw r0, r30
    mr r4, r29
    extrwi r0, r0, 8, 19
    addi r6, r31, 0x5a
    stb r0, 0x5e(r3)
    li r5, 0x1
    lbz r0, 0x69(r3)
    ori r0, r0, 0x8
    stb r0, 0x69(r3)
    mr r3, r28
    bl fn_8064CF60
    mr r3, r31
    li r4, 0x3c
    bl fn_8064E27C
lbl_fn_8064C764_000044FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064C808(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_80649940
    lbz r0, 0x2(r3)
    mr r31, r3
    cmplwi r0, 0x2
    bne lbl_fn_8064C808_00004594
    lbz r0, 0x68(r3)
    cmplwi r0, 0x4
    beq lbl_fn_8064C808_00004568
    b lbl_fn_8064C808_00004594
lbl_fn_8064C808_00004568:
    lbz r0, 0x69(r3)
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    ori r0, r0, 0x10
    stb r0, 0x69(r3)
    mr r3, r28
    bl fn_8064D080
    mr r3, r31
    li r4, 0x3c
    bl fn_8064E27C
lbl_fn_8064C808_00004594:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064C8A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80649940
    li r4, 0xc
    li r5, 0x0
    bl fn_8064B238
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064C8CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    bl fn_80649940
    mr r5, r31
    li r4, 0xe
    bl fn_8064B238
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064C904(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r27, r3
    mr r28, r4
    li r3, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_8064C904_00004648
    li r3, 0x0
lbl_fn_8064C904_00004648:
    clrlslwi r29, r3, 25, 1
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8064C904_000046B0
    li r0, 0x9
    addi r31, r3, 0x11
    sth r0, 0x4(r3)
    ori r3, r29, 0x1
    clrlslwi r0, r28, 24, 2
    li r5, 0x3f
    or r3, r3, r0
    mr r4, r31
    stb r3, 0x0(r31)
    li r0, 0x1
    li r3, 0x3
    stb r5, 0x1(r31)
    stb r0, 0x2(r31)
    bl fn_8064DF4C
    stb r3, 0x3(r31)
    li r0, 0x4
    mr r3, r27
    mr r4, r30
    sth r0, 0x2(r30)
    bl fn_8064E6C8
lbl_fn_8064C904_000046B0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064C9B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r27, r3
    mr r28, r4
    li r3, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8064C9B4_000046F8
    li r3, 0x0
lbl_fn_8064C9B4_000046F8:
    clrlslwi r29, r3, 25, 1
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8064C9B4_00004760
    li r0, 0x9
    addi r31, r3, 0x11
    sth r0, 0x4(r3)
    ori r3, r29, 0x1
    clrlslwi r0, r28, 24, 2
    li r5, 0x73
    or r3, r3, r0
    mr r4, r31
    stb r3, 0x0(r31)
    li r0, 0x1
    li r3, 0x3
    stb r5, 0x1(r31)
    stb r0, 0x2(r31)
    bl fn_8064DF4C
    stb r3, 0x3(r31)
    li r0, 0x4
    mr r3, r27
    mr r4, r30
    sth r0, 0x2(r30)
    bl fn_8064E6C8
lbl_fn_8064C9B4_00004760:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064CA64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r31, r3
    mr r27, r4
    mr r30, r5
    cmpwi r0, 0x0
    li r0, 0x1
    beq lbl_fn_8064CA64_000047AC
    li r0, 0x0
lbl_fn_8064CA64_000047AC:
    clrlslwi r28, r0, 25, 1
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8064CA64_00004824
    neg r0, r30
    li r4, 0x9
    or r0, r0, r30
    sth r4, 0x4(r3)
    addi r30, r3, 0x11
    ori r5, r28, 0x1
    srawi r3, r0, 31
    clrlslwi r4, r27, 24, 2
    or r4, r5, r4
    li r0, 0x1
    rlwinm r3, r3, 0, 27, 27
    stb r4, 0x0(r30)
    ori r3, r3, 0xf
    mr r4, r30
    stb r3, 0x1(r30)
    li r3, 0x3
    stb r0, 0x2(r30)
    bl fn_8064DF4C
    stb r3, 0x3(r30)
    li r0, 0x4
    mr r3, r31
    mr r4, r29
    sth r0, 0x2(r29)
    bl fn_8064E6C8
lbl_fn_8064CA64_00004824:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064CB28(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r27, r3
    mr r28, r4
    li r3, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_8064CB28_0000486C
    li r3, 0x0
lbl_fn_8064CB28_0000486C:
    clrlslwi r29, r3, 25, 1
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8064CB28_000048D4
    li r0, 0x9
    addi r31, r3, 0x11
    sth r0, 0x4(r3)
    ori r3, r29, 0x1
    clrlslwi r0, r28, 24, 2
    li r5, 0x53
    or r3, r3, r0
    mr r4, r31
    stb r3, 0x0(r31)
    li r0, 0x1
    li r3, 0x3
    stb r5, 0x1(r31)
    stb r0, 0x2(r31)
    bl fn_8064DF4C
    stb r3, 0x3(r31)
    li r0, 0x4
    mr r3, r27
    mr r4, r30
    sth r0, 0x2(r30)
    bl fn_8064E6C8
lbl_fn_8064CB28_000048D4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064CBD8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lbz r0, 0x6d(r3)
    cmpwi r0, 0x0
    li r0, 0x1
    bne lbl_fn_8064CBD8_00004928
    li r0, 0x0
lbl_fn_8064CBD8_00004928:
    lhz r3, 0x4(r5)
    clrlslwi r6, r0, 25, 1
    lhz r0, 0x2(r5)
    subi r3, r3, 0x3
    cmplwi r0, 0x7f
    sth r3, 0x4(r5)
    ble lbl_fn_8064CBD8_00004950
    clrlwi r3, r3, 16
    subi r0, r3, 0x1
    sth r0, 0x4(r5)
lbl_fn_8064CBD8_00004950:
    cmpwi r4, 0x0
    beq lbl_fn_8064CBD8_00004964
    lhz r0, 0x6(r5)
    clrlwi r0, r0, 24
    b lbl_fn_8064CBD8_00004968
lbl_fn_8064CBD8_00004964:
    li r0, 0x0
lbl_fn_8064CBD8_00004968:
    cmpwi r0, 0x0
    beq lbl_fn_8064CBD8_0000497C
    lhz r3, 0x4(r5)
    subi r3, r3, 0x1
    sth r3, 0x4(r5)
lbl_fn_8064CBD8_0000497C:
    neg r3, r0
    lhz r7, 0x4(r5)
    or r3, r3, r0
    ori r6, r6, 0x1
    clrlslwi r4, r4, 24, 2
    add r7, r5, r7
    or r4, r6, r4
    srawi r3, r3, 31
    rlwinm r3, r3, 0, 27, 27
    stb r4, 0x8(r7)
    ori r3, r3, 0xef
    addi r4, r7, 0xa
    stb r3, 0x9(r7)
    lhz r3, 0x2(r5)
    cmplwi r3, 0x7f
    bgt lbl_fn_8064CBD8_000049DC
    clrlslwi r3, r3, 16, 1
    ori r3, r3, 0x1
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    lhz r3, 0x2(r5)
    addi r3, r3, 0x3
    sth r3, 0x2(r5)
    b lbl_fn_8064CBD8_00004A00
lbl_fn_8064CBD8_000049DC:
    clrlslwi r3, r3, 25, 1
    stb r3, 0x0(r4)
    lhz r3, 0x2(r5)
    srawi r3, r3, 7
    stb r3, 0x1(r4)
    addi r4, r4, 0x2
    lhz r3, 0x2(r5)
    addi r3, r3, 0x4
    sth r3, 0x2(r5)
lbl_fn_8064CBD8_00004A00:
    cmpwi r0, 0x0
    beq lbl_fn_8064CBD8_00004A18
    stb r0, 0x0(r4)
    lhz r3, 0x2(r5)
    addi r0, r3, 0x1
    sth r0, 0x2(r5)
lbl_fn_8064CBD8_00004A18:
    lhz r4, 0x2(r5)
    li r3, 0x2
    lhz r6, 0x4(r5)
    addi r0, r4, 0x1
    add r6, r5, r6
    sth r0, 0x2(r5)
    add r28, r6, r4
    addi r4, r6, 0x8
    bl fn_8064DF4C
    cmpwi r30, 0x0
    stb r3, 0x8(r28)
    bne lbl_fn_8064CBD8_00004A58
    mr r3, r29
    mr r4, r31
    bl fn_8064E6C8
    b lbl_fn_8064CBD8_00004A64
lbl_fn_8064CBD8_00004A58:
    lhz r3, 0x68(r29)
    mr r4, r31
    bl fn_80642A34
lbl_fn_8064CBD8_00004A64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064CD70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r30, r3
    mr r26, r4
    mr r27, r5
    mr r31, r6
    mr r28, r7
    mr r29, r8
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_8064CD70_00004B54
    neg r0, r27
    li r4, 0xc
    or r0, r0, r27
    sth r4, 0x4(r3)
    srawi r4, r0, 31
    cmpwi r27, 0x0
    rlwinm r4, r4, 0, 30, 30
    li r0, 0x11
    ori r4, r4, 0x81
    addi r8, r3, 0x18
    stb r4, 0x14(r3)
    stb r0, 0x15(r3)
    stb r26, 0x16(r3)
    stb r28, 0x17(r3)
    beq lbl_fn_8064CD70_00004B0C
    li r0, 0x0
    stb r0, 0x0(r8)
    addi r8, r8, 0x1
    b lbl_fn_8064CD70_00004B20
lbl_fn_8064CD70_00004B0C:
    lis r4, lbl_808238C8@ha
    addi r4, r4, lbl_808238C8@l
    lbz r0, 0xb(r4)
    stb r0, 0x0(r8)
    addi r8, r8, 0x1
lbl_fn_8064CD70_00004B20:
    li r7, 0x0
    extrwi r6, r31, 8, 16
    stb r7, 0x0(r8)
    li r0, 0xa
    mr r5, r3
    li r4, 0x0
    stb r31, 0x1(r8)
    stb r6, 0x2(r8)
    stb r7, 0x3(r8)
    stb r29, 0x4(r8)
    sth r0, 0x2(r3)
    mr r3, r30
    bl fn_8064CBD8
lbl_fn_8064CD70_00004B54:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064CE58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_8064CE58_00004BD8
    neg r0, r31
    li r4, 0xc
    or r0, r0, r31
    sth r4, 0x4(r3)
    srawi r4, r0, 31
    li r6, 0x2
    rlwinm r4, r4, 0, 30, 30
    li r0, 0x1
    ori r4, r4, 0xa1
    mr r5, r3
    stb r4, 0x14(r3)
    li r4, 0x0
    stb r0, 0x15(r3)
    sth r6, 0x2(r3)
    mr r3, r30
    bl fn_8064CBD8
lbl_fn_8064CE58_00004BD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064CEDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_8064CEDC_00004C5C
    neg r0, r31
    li r4, 0xc
    or r0, r0, r31
    sth r4, 0x4(r3)
    srawi r4, r0, 31
    li r6, 0x2
    rlwinm r4, r4, 0, 30, 30
    li r0, 0x1
    ori r4, r4, 0x61
    mr r5, r3
    stb r4, 0x14(r3)
    li r4, 0x0
    stb r0, 0x15(r3)
    sth r6, 0x2(r3)
    mr r3, r30
    bl fn_8064CBD8
lbl_fn_8064CEDC_00004C5C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064CF60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lbz r31, 0x0(r6)
    mr r28, r3
    lbz r30, 0x1(r6)
    mr r26, r4
    mr r27, r5
    mr r29, r6
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_8064CF60_00004D7C
    neg r0, r27
    neg r4, r30
    or r0, r0, r27
    li r6, 0xc
    or r5, r4, r30
    sth r6, 0x4(r3)
    srawi r0, r0, 31
    clrlslwi r4, r26, 24, 2
    rlwinm r0, r0, 0, 30, 30
    srwi r5, r5, 31
    ori r0, r0, 0xe1
    cmpwi r30, 0x0
    addi r9, r5, 0x2
    stb r0, 0x14(r3)
    clrlslwi r5, r9, 24, 1
    clrlwi r0, r31, 31
    ori r6, r5, 0x1
    ori r5, r4, 0x3
    stb r6, 0x15(r3)
    extrwi r4, r31, 1, 30
    neg r8, r0
    stb r5, 0x16(r3)
    neg r4, r4
    extrwi r0, r31, 1, 29
    lbz r7, 0x4(r29)
    rlwinm r10, r4, 0, 28, 28
    neg r6, r0
    extrwi r0, r31, 1, 28
    neg r4, r7
    or r4, r4, r7
    neg r5, r0
    srawi r4, r4, 31
    ori r0, r10, 0x1
    rlwinm r4, r4, 0, 30, 30
    addi r7, r3, 0x18
    rlwimi r4, r8, 0, 29, 29
    rlwimi r4, r6, 0, 25, 25
    rlwimi r4, r5, 0, 24, 24
    or r0, r4, r0
    stb r0, 0x17(r3)
    beq lbl_fn_8064CF60_00004D60
    clrlslwi r0, r30, 24, 4
    ori r0, r0, 0x3
    stb r0, 0x0(r7)
lbl_fn_8064CF60_00004D60:
    clrlwi r4, r9, 24
    mr r5, r3
    addi r0, r4, 0x2
    sth r0, 0x2(r3)
    li r4, 0x0
    mr r3, r28
    bl fn_8064CBD8
lbl_fn_8064CF60_00004D7C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064D080(void)
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
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_8064D080_00004E24
    neg r0, r30
    li r5, 0xc
    or r4, r0, r30
    sth r5, 0x4(r3)
    srawi r4, r4, 31
    clrlslwi r0, r29, 24, 2
    rlwinm r5, r4, 0, 30, 30
    ori r6, r31, 0x1
    ori r5, r5, 0x51
    ori r7, r0, 0x3
    stb r5, 0x14(r3)
    li r4, 0x5
    li r0, 0x4
    mr r5, r3
    stb r4, 0x15(r3)
    li r4, 0x0
    stb r7, 0x16(r3)
    stb r6, 0x17(r3)
    sth r0, 0x2(r3)
    mr r3, r28
    bl fn_8064CBD8
lbl_fn_8064D080_00004E24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064D130(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    mr r31, r7
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_8064D130_00004F48
    neg r0, r28
    li r4, 0xc
    or r0, r0, r28
    sth r4, 0x4(r3)
    srawi r0, r0, 31
    cmpwi r30, 0x0
    rlwinm r0, r0, 0, 30, 30
    addi r4, r3, 0x15
    ori r0, r0, 0x91
    stb r0, 0x14(r3)
    bne lbl_fn_8064D130_00004EC8
    li r6, 0x3
    clrlslwi r0, r27, 24, 2
    stb r6, 0x0(r4)
    ori r0, r0, 0x3
    stb r0, 0x1(r4)
    sth r6, 0x2(r3)
    b lbl_fn_8064D130_00004F3C
lbl_fn_8064D130_00004EC8:
    li r6, 0x11
    clrlslwi r0, r27, 24, 2
    stb r6, 0x0(r4)
    ori r7, r0, 0x3
    extrwi r6, r31, 8, 16
    li r0, 0xa
    stb r7, 0x1(r4)
    lbz r7, 0x0(r30)
    stb r7, 0x2(r4)
    lbz r7, 0x2(r30)
    lbz r9, 0x3(r30)
    lbz r10, 0x4(r30)
    slwi r7, r7, 2
    lbz r8, 0x1(r30)
    slwi r9, r9, 3
    slwi r10, r10, 4
    or r7, r8, r7
    or r7, r9, r7
    or r7, r10, r7
    stb r7, 0x3(r4)
    lbz r7, 0x5(r30)
    stb r7, 0x4(r4)
    lbz r7, 0x7(r30)
    stb r7, 0x5(r4)
    lbz r7, 0x8(r30)
    stb r7, 0x6(r4)
    stb r31, 0x7(r4)
    stb r6, 0x8(r4)
    sth r0, 0x2(r3)
lbl_fn_8064D130_00004F3C:
    mr r3, r29
    li r4, 0x0
    bl fn_8064CBD8
lbl_fn_8064D130_00004F48:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064D24C(void)
{
    nofralloc
    lhz r0, 0x4(r5)
    cmplwi r0, 0x10
    bge lbl_fn_8064D24C_00004FB8
    lhz r6, 0x2(r5)
    add r0, r5, r0
    li r8, 0x0
    add r7, r0, r6
    add r6, r5, r6
    addi r7, r7, 0x7
    addi r9, r6, 0x17
    b lbl_fn_8064D24C_00004FA0
lbl_fn_8064D24C_00004F8C:
    lbz r0, 0x0(r7)
    addi r8, r8, 0x1
    subi r7, r7, 0x1
    stb r0, 0x0(r9)
    subi r9, r9, 0x1
lbl_fn_8064D24C_00004FA0:
    lhz r0, 0x2(r5)
    clrlwi r6, r8, 16
    cmplw r6, r0
    blt lbl_fn_8064D24C_00004F8C
    li r0, 0x10
    sth r0, 0x4(r5)
lbl_fn_8064D24C_00004FB8:
    neg r0, r4
    lhz r6, 0x4(r5)
    or r0, r0, r4
    subi r4, r6, 0x2
    srawi r0, r0, 31
    sth r4, 0x4(r5)
    clrlwi r6, r4, 16
    li r4, 0x0
    rlwinm r0, r0, 0, 30, 30
    add r6, r5, r6
    ori r0, r0, 0x21
    stb r0, 0x8(r6)
    lhz r0, 0x2(r5)
    slwi r0, r0, 1
    ori r0, r0, 0x1
    stb r0, 0x9(r6)
    lhz r6, 0x2(r5)
    addi r0, r6, 0x2
    sth r0, 0x2(r5)
    b fn_8064CBD8
}

asm void fn_8064D2F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    li r0, 0x1
    bne lbl_fn_8064D2F4_0000503C
    li r0, 0x0
lbl_fn_8064D2F4_0000503C:
    clrlslwi r30, r0, 25, 1
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8064D2F4_000050B0
    li r5, 0x9
    ori r4, r30, 0x1
    clrlslwi r0, r28, 24, 2
    sth r5, 0x4(r3)
    or r0, r4, r0
    li r4, 0xff
    stb r0, 0x11(r3)
    li r0, 0x1
    addi r30, r31, 0x15
    stb r4, 0x12(r3)
    stb r0, 0x13(r3)
    stb r29, 0x14(r3)
    li r3, 0x2
    lhz r0, 0x4(r31)
    add r4, r31, r0
    addi r4, r4, 0x8
    bl fn_8064DF4C
    stb r3, 0x0(r30)
    li r0, 0x5
    mr r3, r27
    mr r4, r31
    sth r0, 0x2(r31)
    bl fn_8064E6C8
lbl_fn_8064D2F4_000050B0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064D3B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807B80E8@ha
    addi r31, r31, lbl_807B80E8@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r0, 0x4(r5)
    lhz r8, 0x2(r5)
    add r6, r5, r0
    addi r7, r6, 0x8
    cmplwi r8, 0x3
    mr r0, r7
    bge lbl_fn_8064D3B4_00005138
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_00005130
    mr r5, r8
    addi r4, r31, 0x0
    lis r3, 0x9
    bl fn_80629830
lbl_fn_8064D3B4_00005130:
    li r3, 0x32
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005138:
    lbz r8, 0x0(r7)
    rlwinm r6, r8, 0, 30, 30
    clrlwi. r9, r8, 31
    srawi r6, r6, 1
    stb r6, 0x2(r4)
    lbz r6, 0x0(r7)
    addi r7, r7, 0x1
    srawi r8, r6, 2
    stb r8, 0x0(r4)
    bne lbl_fn_8064D3B4_00005178
    lbz r6, 0x0(r7)
    clrlwi r8, r8, 24
    addi r7, r7, 0x1
    slwi r6, r6, 6
    add r6, r8, r6
    stb r6, 0x0(r4)
lbl_fn_8064D3B4_00005178:
    lbz r6, 0x0(r7)
    rlwinm r6, r6, 0, 28, 26
    stb r6, 0x1(r4)
    lbz r6, 0x0(r7)
    rlwinm r6, r6, 0, 27, 27
    srawi r6, r6, 4
    stb r6, 0x4(r4)
    lbz r6, 0x1(r7)
    addi r7, r7, 0x2
    clrlwi. r10, r6, 31
    srawi r8, r6, 1
    bne lbl_fn_8064D3B4_000051BC
    lbz r6, 0x0(r7)
    addi r7, r7, 0x1
    slwi r6, r6, 7
    add r6, r8, r6
    clrlwi r8, r6, 16
lbl_fn_8064D3B4_000051BC:
    cntlzw r6, r10
    cntlzw r9, r9
    srwi r11, r6, 5
    lhz r6, 0x4(r5)
    srwi r10, r9, 5
    lhz r9, 0x2(r5)
    add r11, r10, r11
    addi r10, r11, 0x4
    add r6, r11, r6
    subf r9, r10, r9
    addi r6, r6, 0x3
    sth r9, 0x2(r5)
    sth r6, 0x4(r5)
    lbz r6, 0x72(r3)
    cmplwi r6, 0x2
    bne lbl_fn_8064D3B4_00005248
    lbz r6, 0x1(r4)
    cmplwi r6, 0xef
    bne lbl_fn_8064D3B4_00005248
    lbz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8064D3B4_00005248
    lbz r6, 0x4(r4)
    cmplwi r6, 0x1
    bne lbl_fn_8064D3B4_00005248
    lbz r6, 0x0(r7)
    addi r7, r7, 0x1
    stb r6, 0x5(r4)
    lhz r9, 0x2(r5)
    lhz r6, 0x4(r5)
    subi r9, r9, 0x1
    addi r6, r6, 0x1
    sth r9, 0x2(r5)
    sth r6, 0x4(r5)
    b lbl_fn_8064D3B4_00005250
lbl_fn_8064D3B4_00005248:
    li r6, 0x0
    stb r6, 0x5(r4)
lbl_fn_8064D3B4_00005250:
    lhz r5, 0x2(r5)
    clrlwi r6, r8, 16
    cmplw r5, r6
    beq lbl_fn_8064D3B4_00005288
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_00005280
    addi r4, r31, 0x10
    lis r3, 0x9
    bl fn_80629850
lbl_fn_8064D3B4_00005280:
    li r3, 0x32
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005288:
    lbz r9, 0x1(r4)
    lbzx r5, r7, r6
    cmpwi r9, 0x43
    beq lbl_fn_8064D3B4_000054A0
    bge lbl_fn_8064D3B4_000052B4
    cmpwi r9, 0x2f
    beq lbl_fn_8064D3B4_000052CC
    bge lbl_fn_8064D3B4_0000561C
    cmpwi r9, 0xf
    beq lbl_fn_8064D3B4_0000540C
    b lbl_fn_8064D3B4_0000561C
lbl_fn_8064D3B4_000052B4:
    cmpwi r9, 0xef
    beq lbl_fn_8064D3B4_00005540
    bge lbl_fn_8064D3B4_0000561C
    cmpwi r9, 0x63
    beq lbl_fn_8064D3B4_0000536C
    b lbl_fn_8064D3B4_0000561C
lbl_fn_8064D3B4_000052CC:
    lbz r6, 0x6d(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8064D3B4_000052E4
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    bne lbl_fn_8064D3B4_0000533C
lbl_fn_8064D3B4_000052E4:
    cmpwi r6, 0x0
    bne lbl_fn_8064D3B4_000052F8
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_0000533C
lbl_fn_8064D3B4_000052F8:
    lbz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_0000533C
    clrlwi. r3, r8, 16
    bne lbl_fn_8064D3B4_0000533C
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_00005328
    cmplwi r3, 0x2
    blt lbl_fn_8064D3B4_0000533C
    cmplwi r3, 0x3d
    bgt lbl_fn_8064D3B4_0000533C
lbl_fn_8064D3B4_00005328:
    mr r4, r0
    li r3, 0x3
    bl fn_8064DF84
    clrlwi. r0, r3, 24
    bne lbl_fn_8064D3B4_00005364
lbl_fn_8064D3B4_0000533C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_0000535C
    addi r4, r31, 0x24
    lis r3, 0x9
    bl fn_80629810
lbl_fn_8064D3B4_0000535C:
    li r3, 0x32
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005364:
    li r3, 0x0
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_0000536C:
    lbz r6, 0x6d(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8064D3B4_00005384
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_000053DC
lbl_fn_8064D3B4_00005384:
    cmpwi r6, 0x0
    bne lbl_fn_8064D3B4_00005398
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    bne lbl_fn_8064D3B4_000053DC
lbl_fn_8064D3B4_00005398:
    lbz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_000053DC
    clrlwi. r3, r8, 16
    bne lbl_fn_8064D3B4_000053DC
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_000053C8
    cmplwi r3, 0x2
    blt lbl_fn_8064D3B4_000053DC
    cmplwi r3, 0x3d
    bgt lbl_fn_8064D3B4_000053DC
lbl_fn_8064D3B4_000053C8:
    mr r4, r0
    li r3, 0x3
    bl fn_8064DF84
    clrlwi. r0, r3, 24
    bne lbl_fn_8064D3B4_00005404
lbl_fn_8064D3B4_000053DC:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_000053FC
    lis r3, 0x9
    la r4, lbl_8087EB08
    bl fn_80629810
lbl_fn_8064D3B4_000053FC:
    li r3, 0x32
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005404:
    li r3, 0x1
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_0000540C:
    lbz r6, 0x6d(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8064D3B4_00005424
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_00005470
lbl_fn_8064D3B4_00005424:
    cmpwi r6, 0x0
    bne lbl_fn_8064D3B4_00005438
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    bne lbl_fn_8064D3B4_00005470
lbl_fn_8064D3B4_00005438:
    clrlwi. r3, r8, 16
    bne lbl_fn_8064D3B4_00005470
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_0000545C
    cmplwi r3, 0x2
    blt lbl_fn_8064D3B4_00005470
    cmplwi r3, 0x3d
    bgt lbl_fn_8064D3B4_00005470
lbl_fn_8064D3B4_0000545C:
    mr r4, r0
    li r3, 0x3
    bl fn_8064DF84
    clrlwi. r0, r3, 24
    bne lbl_fn_8064D3B4_00005498
lbl_fn_8064D3B4_00005470:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_00005490
    lis r3, 0x9
    la r4, lbl_8087EB10
    bl fn_80629810
lbl_fn_8064D3B4_00005490:
    li r3, 0x32
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005498:
    li r3, 0x2
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_000054A0:
    lbz r6, 0x6d(r3)
    cmpwi r6, 0x0
    beq lbl_fn_8064D3B4_000054B8
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    bne lbl_fn_8064D3B4_00005510
lbl_fn_8064D3B4_000054B8:
    cmpwi r6, 0x0
    bne lbl_fn_8064D3B4_000054CC
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_00005510
lbl_fn_8064D3B4_000054CC:
    lbz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_00005510
    clrlwi. r3, r8, 16
    bne lbl_fn_8064D3B4_00005510
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_000054FC
    cmplwi r3, 0x2
    blt lbl_fn_8064D3B4_00005510
    cmplwi r3, 0x3d
    bgt lbl_fn_8064D3B4_00005510
lbl_fn_8064D3B4_000054FC:
    mr r4, r0
    li r3, 0x3
    bl fn_8064DF84
    clrlwi. r0, r3, 24
    bne lbl_fn_8064D3B4_00005538
lbl_fn_8064D3B4_00005510:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_00005530
    addi r4, r31, 0x30
    lis r3, 0x9
    bl fn_80629810
lbl_fn_8064D3B4_00005530:
    li r3, 0x32
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005538:
    li r3, 0x3
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005540:
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_00005584
    cmplwi r3, 0x2
    blt lbl_fn_8064D3B4_0000555C
    cmplwi r3, 0x3d
    ble lbl_fn_8064D3B4_00005584
lbl_fn_8064D3B4_0000555C:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_0000557C
    addi r4, r31, 0x3c
    lis r3, 0x9
    bl fn_80629810
lbl_fn_8064D3B4_0000557C:
    li r3, 0x32
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005584:
    mr r4, r0
    li r3, 0x2
    bl fn_8064DF84
    clrlwi. r0, r3, 24
    bne lbl_fn_8064D3B4_000055C0
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_000055B8
    addi r4, r31, 0x54
    lis r3, 0x9
    bl fn_80629810
lbl_fn_8064D3B4_000055B8:
    li r3, 0x32
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_000055C0:
    lbz r3, 0x6d(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8064D3B4_000055D8
    lbz r0, 0x2(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8064D3B4_000055EC
lbl_fn_8064D3B4_000055D8:
    cmpwi r3, 0x0
    bne lbl_fn_8064D3B4_00005614
    lbz r0, 0x2(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8064D3B4_00005614
lbl_fn_8064D3B4_000055EC:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D3B4_0000560C
    addi r4, r31, 0x64
    lis r3, 0x9
    bl fn_80629810
lbl_fn_8064D3B4_0000560C:
    li r3, 0x4
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_00005614:
    li r3, 0x4
    b lbl_fn_8064D3B4_00005620
lbl_fn_8064D3B4_0000561C:
    li r3, 0x32
lbl_fn_8064D3B4_00005620:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064D928(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_807B80E8@ha
    stw r0, 0x24(r1)
    addi r7, r7, lbl_807B80E8@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_808238C8@ha
    addi r30, r30, lbl_808238C8@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lhz r0, 0x4(r4)
    lhz r6, 0x2(r4)
    add r5, r4, r0
    lbz r0, 0x8(r5)
    clrlwi. r0, r0, 31
    stb r0, 0x3(r30)
    lbz r0, 0x8(r5)
    extrwi r31, r0, 1, 30
    stb r31, 0x2(r30)
    lbz r0, 0x8(r5)
    rlwinm r0, r0, 0, 24, 29
    stb r0, 0x1(r30)
    beq lbl_fn_8064D928_000056AC
    cmpwi r6, 0x0
    bne lbl_fn_8064D928_000056DC
lbl_fn_8064D928_000056AC:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D928_000056D0
    lbz r5, 0x3(r30)
    addi r4, r7, 0x78
    lis r3, 0x9
    bl fn_80629850
lbl_fn_8064D928_000056D0:
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_000056DC:
    lbz r3, 0x9(r5)
    addis r6, r6, 0x1
    addi r5, r5, 0xa
    clrlwi. r0, r3, 31
    srawi r8, r3, 1
    subi r6, r6, 0x2
    bne lbl_fn_8064D928_00005710
    lbz r0, 0x0(r5)
    subi r6, r6, 0x1
    addi r5, r5, 0x1
    slwi r0, r0, 7
    add r0, r8, r0
    clrlwi r8, r0, 24
lbl_fn_8064D928_00005710:
    clrlwi r0, r8, 24
    clrlwi r3, r6, 16
    cmpw r0, r3
    beq lbl_fn_8064D928_0000574C
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D928_00005740
    addi r4, r7, 0x98
    lis r3, 0x9
    bl fn_80629810
lbl_fn_8064D928_00005740:
    mr r3, r29
    bl fn_80626D50
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_0000574C:
    lbz r0, 0x1(r30)
    cmpwi r0, 0x80
    beq lbl_fn_8064D928_000057B0
    bge lbl_fn_8064D928_0000578C
    cmpwi r0, 0x50
    beq lbl_fn_8064D928_00005B3C
    bge lbl_fn_8064D928_00005780
    cmpwi r0, 0x20
    beq lbl_fn_8064D928_00005884
    bge lbl_fn_8064D928_00005BD0
    cmpwi r0, 0x10
    beq lbl_fn_8064D928_000059D4
    b lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_00005780:
    cmpwi r0, 0x60
    beq lbl_fn_8064D928_000058F8
    b lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_0000578C:
    cmpwi r0, 0xa0
    beq lbl_fn_8064D928_000058D8
    bge lbl_fn_8064D928_000057A4
    cmpwi r0, 0x90
    beq lbl_fn_8064D928_00005A24
    b lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_000057A4:
    cmpwi r0, 0xe0
    beq lbl_fn_8064D928_00005918
    b lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_000057B0:
    cmplwi r3, 0x8
    bne lbl_fn_8064D928_00005BD0
    lbz r0, 0x0(r5)
    clrlwi. r4, r0, 26
    stb r4, 0x0(r30)
    lbz r0, 0x1(r5)
    clrlwi r0, r0, 28
    stb r0, 0x9(r30)
    lbz r0, 0x1(r5)
    rlwinm r0, r0, 0, 24, 27
    stb r0, 0xa(r30)
    lbz r0, 0x2(r5)
    clrlwi r0, r0, 26
    stb r0, 0xb(r30)
    lbz r0, 0x3(r5)
    stb r0, 0xc(r30)
    lbz r0, 0x5(r5)
    lbz r3, 0x4(r5)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0xe(r30)
    lbz r0, 0x6(r5)
    stb r0, 0x10(r30)
    lbz r0, 0x7(r5)
    clrlwi r0, r0, 29
    stb r0, 0x11(r30)
    beq lbl_fn_8064D928_00005844
    beq lbl_fn_8064D928_00005830
    cmplwi r4, 0x2
    blt lbl_fn_8064D928_00005844
    cmplwi r4, 0x3d
    bgt lbl_fn_8064D928_00005844
lbl_fn_8064D928_00005830:
    lhz r0, 0xe(r30)
    cmplwi r0, 0x17
    blt lbl_fn_8064D928_00005844
    cmplwi r0, 0x7fff
    ble lbl_fn_8064D928_00005868
lbl_fn_8064D928_00005844:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D928_00005BD0
    addi r4, r7, 0xa8
    lis r3, 0x9
    bl fn_80629810
    b lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_00005868:
    mr r3, r29
    bl fn_80626D50
    mr r3, r28
    mr r4, r31
    mr r5, r30
    bl fn_8064BBEC
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_00005884:
    cmpwi r3, 0x0
    beq lbl_fn_8064D928_00005BD0
    stw r5, 0x8(r30)
    cmpwi r31, 0x0
    sth r6, 0xc(r30)
    lhz r5, 0x4(r4)
    lhz r3, 0x2(r4)
    addi r5, r5, 0x2
    subi r0, r3, 0x2
    sth r5, 0x4(r4)
    sth r0, 0x2(r4)
    beq lbl_fn_8064D928_000058C8
    mr r3, r28
    mr r5, r29
    li r4, 0x0
    bl fn_8064D24C
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_000058C8:
    mr r3, r28
    mr r4, r29
    bl fn_8064C1DC
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_000058D8:
    cmpwi r3, 0x0
    bne lbl_fn_8064D928_00005BD0
    mr r3, r29
    bl fn_80626D50
    mr r3, r28
    mr r4, r31
    bl fn_8064C1E4
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_000058F8:
    cmpwi r3, 0x0
    bne lbl_fn_8064D928_00005BD0
    mr r3, r29
    bl fn_80626D50
    mr r3, r28
    mr r4, r31
    bl fn_8064C248
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_00005918:
    lbz r4, 0x0(r5)
    rlwinm r3, r4, 0, 30, 30
    clrlwi. r0, r4, 31
    srawi r0, r3, 1
    srawi r3, r4, 2
    stb r3, 0x0(r30)
    beq lbl_fn_8064D928_00005958
    clrlwi. r0, r0, 24
    beq lbl_fn_8064D928_00005958
    clrlwi. r0, r3, 24
    beq lbl_fn_8064D928_00005958
    beq lbl_fn_8064D928_0000597C
    cmplwi r0, 0x2
    blt lbl_fn_8064D928_00005958
    cmplwi r0, 0x3d
    ble lbl_fn_8064D928_0000597C
lbl_fn_8064D928_00005958:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D928_00005BD0
    addi r4, r7, 0xb8
    lis r3, 0x9
    bl fn_80629810
    b lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_0000597C:
    clrlwi r0, r8, 24
    lbz r3, 0x1(r5)
    cmplwi r0, 0x3
    stb r3, 0x9(r30)
    bne lbl_fn_8064D928_000059AC
    lbz r0, 0x2(r5)
    rlwinm r0, r0, 0, 30, 30
    stb r0, 0xa(r30)
    lbz r0, 0x2(r5)
    extrwi r0, r0, 4, 24
    stb r0, 0xb(r30)
    b lbl_fn_8064D928_000059B8
lbl_fn_8064D928_000059AC:
    li r0, 0x0
    stb r0, 0xa(r30)
    stb r0, 0xb(r30)
lbl_fn_8064D928_000059B8:
    mr r3, r29
    bl fn_80626D50
    mr r3, r28
    mr r4, r31
    mr r5, r30
    bl fn_8064BFE0
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_000059D4:
    cmplwi r3, 0x1
    bne lbl_fn_8064D928_00005BD0
    cmpwi r31, 0x0
    beq lbl_fn_8064D928_00005BD0
    lbz r0, 0x0(r5)
    mr r3, r29
    clrlwi r0, r0, 31
    stb r0, 0x8(r30)
    lbz r0, 0x0(r5)
    rlwinm r0, r0, 0, 30, 30
    srawi r0, r0, 1
    stb r0, 0x9(r30)
    lbz r0, 0x0(r5)
    srawi r0, r0, 2
    stb r0, 0xa(r30)
    bl fn_80626D50
    mr r3, r28
    mr r4, r30
    bl fn_8064C1D8
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_00005A24:
    cmplwi r3, 0x1
    beq lbl_fn_8064D928_00005A34
    cmplwi r3, 0x8
    bne lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_00005A34:
    lbz r4, 0x0(r5)
    rlwinm r3, r4, 0, 30, 30
    clrlwi. r0, r4, 31
    srawi r0, r3, 1
    srawi r3, r4, 2
    stb r3, 0x0(r30)
    beq lbl_fn_8064D928_00005A74
    clrlwi. r0, r0, 24
    beq lbl_fn_8064D928_00005A74
    clrlwi. r0, r3, 24
    beq lbl_fn_8064D928_00005A74
    beq lbl_fn_8064D928_00005A98
    cmplwi r0, 0x2
    blt lbl_fn_8064D928_00005A74
    cmplwi r0, 0x3d
    ble lbl_fn_8064D928_00005A98
lbl_fn_8064D928_00005A74:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D928_00005BD0
    addi r4, r7, 0xc8
    lis r3, 0x9
    bl fn_80629810
    b lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_00005A98:
    clrlwi r3, r6, 16
    subi r0, r3, 0x1
    cntlzw r0, r0
    extrwi. r0, r0, 8, 19
    stb r0, 0x9(r30)
    bne lbl_fn_8064D928_00005B1C
    lbz r0, 0x1(r5)
    stb r0, 0xa(r30)
    lbz r0, 0x2(r5)
    clrlwi r0, r0, 30
    stb r0, 0xb(r30)
    lbz r0, 0x2(r5)
    extrwi r0, r0, 1, 29
    stb r0, 0xc(r30)
    lbz r0, 0x2(r5)
    extrwi r0, r0, 1, 28
    stb r0, 0xd(r30)
    lbz r0, 0x2(r5)
    extrwi r0, r0, 2, 26
    stb r0, 0xe(r30)
    lbz r0, 0x3(r5)
    clrlwi r0, r0, 26
    stb r0, 0xf(r30)
    lbz r0, 0x4(r5)
    stb r0, 0x10(r30)
    lbz r0, 0x5(r5)
    stb r0, 0x11(r30)
    lbz r0, 0x7(r5)
    lbz r3, 0x6(r5)
    slwi r0, r0, 8
    add r0, r3, r0
    andi. r0, r0, 0x3f7f
    sth r0, 0x12(r30)
lbl_fn_8064D928_00005B1C:
    mr r3, r29
    bl fn_80626D50
    lbz r5, 0x9(r30)
    mr r3, r28
    mr r4, r31
    mr r6, r30
    bl fn_8064BCD4
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_00005B3C:
    cmplwi r3, 0x2
    bne lbl_fn_8064D928_00005BD0
    lbz r6, 0x0(r5)
    rlwinm r3, r6, 0, 30, 30
    clrlwi. r0, r6, 31
    srawi r4, r3, 1
    srawi r3, r6, 2
    stb r3, 0x0(r30)
    lbz r0, 0x1(r5)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0x9(r30)
    beq lbl_fn_8064D928_00005B90
    clrlwi. r0, r4, 24
    beq lbl_fn_8064D928_00005B90
    clrlwi. r0, r3, 24
    beq lbl_fn_8064D928_00005B90
    beq lbl_fn_8064D928_00005BB4
    cmplwi r0, 0x2
    blt lbl_fn_8064D928_00005B90
    cmplwi r0, 0x3d
    ble lbl_fn_8064D928_00005BB4
lbl_fn_8064D928_00005B90:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_fn_8064D928_00005BD0
    addi r4, r7, 0xc8
    lis r3, 0x9
    bl fn_80629810
    b lbl_fn_8064D928_00005BD0
lbl_fn_8064D928_00005BB4:
    mr r3, r29
    bl fn_80626D50
    mr r3, r28
    mr r4, r31
    mr r5, r30
    bl fn_8064C14C
    b lbl_fn_8064D928_00005C40
lbl_fn_8064D928_00005BD0:
    mr r3, r29
    bl fn_80626D50
    cmpwi r31, 0x0
    beq lbl_fn_8064D928_00005C40
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_8064D928_00005C40
    li r0, 0xc
    lis r7, lbl_808238C8@ha
    sth r0, 0x4(r3)
    li r0, 0x11
    li r8, 0x3
    addi r7, r7, lbl_808238C8@l
    stb r0, 0x14(r3)
    mr r5, r3
    li r4, 0x0
    stb r8, 0x15(r3)
    lbz r0, 0x2(r7)
    lbz r6, 0x3(r7)
    slwi r0, r0, 1
    lbz r7, 0x1(r7)
    or r0, r6, r0
    or r0, r7, r0
    stb r0, 0x16(r3)
    sth r8, 0x2(r3)
    mr r3, r28
    bl fn_8064CBD8
lbl_fn_8064D928_00005C40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064DF4C(void)
{
    nofralloc
    lis r5, lbl_80764FA8@ha
    li r6, 0xff
    addi r5, r5, lbl_80764FA8@l
    b lbl_fn_8064DF4C_00005C80
lbl_fn_8064DF4C_00005C70:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    xor r0, r6, r0
    lbzx r6, r5, r0
lbl_fn_8064DF4C_00005C80:
    clrlwi. r0, r3, 16
    subi r3, r3, 0x1
    bne lbl_fn_8064DF4C_00005C70
    subfic r0, r6, 0xff
    clrlwi r3, r0, 24
    blr
}

asm void fn_8064DF84(void)
{
    nofralloc
    lis r6, lbl_80764FA8@ha
    li r7, 0xff
    addi r6, r6, lbl_80764FA8@l
    b lbl_fn_8064DF84_00005CB8
lbl_fn_8064DF84_00005CA8:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    xor r0, r7, r0
    lbzx r7, r6, r0
lbl_fn_8064DF84_00005CB8:
    clrlwi. r0, r3, 16
    subi r3, r3, 0x1
    bne lbl_fn_8064DF84_00005CA8
    lis r3, lbl_80764FA8@ha
    xor r0, r7, r5
    addi r3, r3, lbl_80764FA8@l
    lbzx r3, r3, r0
    subi r0, r3, 0xcf
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    blr
}

asm void fn_8064DFD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_808238C8@ha
    mr r27, r3
    addi r31, r5, lbl_808238C8@l
    mr r28, r4
    lbz r0, 0x408(r31)
    addi r3, r31, 0x3fe
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8064DFD0_00005D74
    mr r4, r27
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8064DFD0_00005D74
    lbz r0, 0x414(r31)
    cmplwi r0, 0x4
    blt lbl_fn_8064DFD0_00005D50
    lis r3, 0x9
    lis r4, lbl_807B81C0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B81C0@l
    bl fn_80629810
lbl_fn_8064DFD0_00005D50:
    mulli r0, r30, 0x78
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    add r3, r3, r0
    addi r31, r3, 0x39c
    mr r3, r31
    bl fn_80629E90
    mr r3, r31
    b lbl_fn_8064DFD0_00005E24
lbl_fn_8064DFD0_00005D74:
    lis r31, lbl_808238C8@ha
    addi r31, r31, lbl_808238C8@l
    lbz r3, 0x65(r31)
    addi r30, r3, 0x1
    cmpwi r30, 0x1
    blt lbl_fn_8064DFD0_00005D90
    li r30, 0x0
lbl_fn_8064DFD0_00005D90:
    mulli r0, r30, 0x78
    add r3, r31, r0
    lbz r0, 0x408(r3)
    addi r29, r3, 0x39c
    cmpwi r0, 0x0
    bne lbl_fn_8064DFD0_00005E20
    mr r3, r29
    li r4, 0x0
    li r5, 0x78
    bl memset
    mr r4, r27
    addi r3, r29, 0x62
    li r5, 0x6
    bl memcpy
    addi r3, r29, 0x18
    bl fn_80626AA0
    stb r28, 0x6d(r29)
    lbz r0, 0x414(r31)
    cmplwi r0, 0x4
    blt lbl_fn_8064DFD0_00005DF8
    lis r3, 0x9
    lis r4, lbl_807B81D0@ha
    addi r3, r3, 0x3
    li r5, 0x3c
    addi r4, r4, lbl_807B81D0@l
    bl fn_80629830
lbl_fn_8064DFD0_00005DF8:
    stw r29, 0x10(r29)
    mr r3, r29
    li r4, 0xb
    li r5, 0x3c
    bl fn_80629E20
    lis r4, lbl_808238C8@ha
    mr r3, r29
    addi r4, r4, lbl_808238C8@l
    stb r30, 0x65(r4)
    b lbl_fn_8064DFD0_00005E24
lbl_fn_8064DFD0_00005E20:
    li r3, 0x0
lbl_fn_8064DFD0_00005E24:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064E128(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_808238C8@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_808238C8@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_8064E128_00005E78
    lis r3, 0x9
    lis r4, lbl_807B81C0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B81C0@l
    bl fn_80629810
lbl_fn_8064E128_00005E78:
    mr r3, r31
    bl fn_80629E90
    b lbl_fn_8064E128_00005E88
lbl_fn_8064E128_00005E84:
    bl fn_80626D50
lbl_fn_8064E128_00005E88:
    addi r3, r31, 0x18
    bl fn_80627400
    cmpwi r3, 0x0
    bne lbl_fn_8064E128_00005E84
    mr r3, r31
    li r4, 0x0
    li r5, 0x78
    bl memset
    li r0, 0x0
    stb r0, 0x6c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064E1B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_808238C8@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_808238C8@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_fn_8064E1B0_00005F0C
    lis r3, 0x9
    lis r4, lbl_807B81D0@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B81D0@l
    bl fn_80629830
lbl_fn_8064E1B0_00005F0C:
    stw r30, 0x10(r30)
    mr r3, r30
    mr r5, r31
    li r4, 0xb
    bl fn_80629E20
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064E224(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_808238C8@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_808238C8@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_8064E224_00005F74
    lis r3, 0x9
    lis r4, lbl_807B81C0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B81C0@l
    bl fn_80629810
lbl_fn_8064E224_00005F74:
    mr r3, r31
    bl fn_80629E90
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064E27C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_808238C8@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_808238C8@l
    stw r31, 0x1c(r1)
    addi r31, r3, 0x70
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_fn_8064E27C_00005FE0
    lis r3, 0x9
    lis r4, lbl_807B81F0@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B81F0@l
    bl fn_80629830
lbl_fn_8064E27C_00005FE0:
    stw r29, 0x10(r31)
    mr r3, r31
    mr r5, r30
    li r4, 0xc
    bl fn_80629E20
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064E2FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_808238C8@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_808238C8@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_fn_8064E2FC_0000604C
    lis r3, 0x9
    lis r4, lbl_807B8214@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B8214@l
    bl fn_80629810
lbl_fn_8064E2FC_0000604C:
    addi r3, r31, 0x70
    bl fn_80629E90
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064E354(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r0, 0x3d
    stw r31, 0xc(r1)
    mr r31, r3
    mtctr r0
lbl_fn_8064E354_00006088:
    clrlwi r0, r5, 16
    add r4, r3, r0
    lbz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8064E354_000060A8
    li r0, 0x0
    stb r0, 0x74(r3)
    b lbl_fn_8064E354_00006118
lbl_fn_8064E354_000060A8:
    addi r5, r5, 0x1
    bdnz lbl_fn_8064E354_00006088
    lbz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8064E354_000060D8
    li r0, 0x0
    li r4, 0x8
    stb r0, 0x74(r3)
    mr r3, r31
    li r5, 0x0
    bl fn_8064A5F4
    b lbl_fn_8064E354_00006118
lbl_fn_8064E354_000060D8:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064E354_00006104
    lis r3, 0x9
    lis r4, lbl_807B81D0@ha
    addi r3, r3, 0x3
    li r5, 0x2
    addi r4, r4, lbl_807B81D0@l
    bl fn_80629830
lbl_fn_8064E354_00006104:
    stw r31, 0x10(r31)
    mr r3, r31
    li r4, 0xb
    li r5, 0x2
    bl fn_80629E20
lbl_fn_8064E354_00006118:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064E418(void)
{
    nofralloc
    lhz r0, 0x14(r3)
    cmpwi r0, 0xc
    beq lbl_fn_8064E418_00006154
    bgelr
    cmpwi r0, 0xb
    bltlr
    lwz r3, 0x10(r3)
    li r4, 0x5
    li r5, 0x0
    b fn_8064A5F4
lbl_fn_8064E418_00006154:
    lwz r3, 0x10(r3)
    li r4, 0x5
    li r5, 0x0
    b fn_8064B238
    blr
}

asm void fn_8064E454(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stb r5, 0x8(r1)
    lbz r0, 0x1(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8064E454_000061AC
    lbz r0, 0x68(r4)
    cmplwi r0, 0x2
    beq lbl_fn_8064E454_0000619C
    cmplwi r0, 0x3
    beq lbl_fn_8064E454_0000619C
    b lbl_fn_8064E454_000061AC
lbl_fn_8064E454_0000619C:
    mr r3, r4
    addi r5, r1, 0x8
    li r4, 0xf
    bl fn_8064B238
lbl_fn_8064E454_000061AC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064E4A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_808238C8@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_808238C8@l
    stw r31, 0x1c(r1)
    lis r31, lbl_807B81C0@ha
    addi r31, r31, lbl_807B81C0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r4)
    lwz r30, 0x6c(r3)
    cmplwi r0, 0x5
    blt lbl_fn_8064E4A8_00006208
    lis r3, 0x9
    addi r4, r31, 0x68
    addi r3, r3, 0x4
    bl fn_80629810
lbl_fn_8064E4A8_00006208:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064E4A8_0000622C
    lis r3, 0x9
    addi r4, r31, 0x54
    addi r3, r3, 0x3
    bl fn_80629810
lbl_fn_8064E4A8_0000622C:
    addi r3, r29, 0x70
    bl fn_80629E90
    li r4, 0x0
    cmpwi r30, 0x0
    stb r4, 0x68(r29)
    beq lbl_fn_8064E4A8_000062EC
    lbz r3, 0xd(r29)
    li r0, 0x3d
    li r5, 0x0
    add r3, r30, r3
    stb r4, 0x24(r3)
    stb r4, 0xd(r29)
    mtctr r0
lbl_fn_8064E4A8_00006260:
    clrlwi r0, r5, 16
    add r3, r30, r0
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8064E4A8_00006280
    li r0, 0x0
    stb r0, 0x74(r30)
    b lbl_fn_8064E4A8_000062EC
lbl_fn_8064E4A8_00006280:
    addi r5, r5, 0x1
    bdnz lbl_fn_8064E4A8_00006260
    lbz r0, 0x74(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8064E4A8_000062B0
    li r0, 0x0
    mr r3, r30
    stb r0, 0x74(r30)
    li r4, 0x8
    li r5, 0x0
    bl fn_8064A5F4
    b lbl_fn_8064E4A8_000062EC
lbl_fn_8064E4A8_000062B0:
    lis r3, lbl_808238C8@ha
    addi r3, r3, lbl_808238C8@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8064E4A8_000062D8
    lis r3, 0x9
    addi r4, r31, 0x10
    addi r3, r3, 0x3
    li r5, 0x2
    bl fn_80629830
lbl_fn_8064E4A8_000062D8:
    stw r30, 0x10(r30)
    mr r3, r30
    li r4, 0xb
    li r5, 0x2
    bl fn_80629E20
lbl_fn_8064E4A8_000062EC:
    mr r3, r29
    li r4, 0x13
    bl fn_80649554
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8064E600(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x6c(r3)
    lbz r0, 0x72(r5)
    cmplwi r0, 0x2
    bne lbl_fn_8064E600_0000638C
    lhz r0, 0x98(r3)
    lis r5, lbl_808238C8@ha
    addi r5, r5, lbl_808238C8@l
    add r6, r0, r4
    sth r6, 0x98(r3)
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_fn_8064E600_00006370
    lis r3, 0x9
    lis r4, lbl_807B8238@ha
    addi r3, r3, 0x3
    clrlwi r5, r6, 16
    addi r4, r4, lbl_807B8238@l
    bl fn_80629830
lbl_fn_8064E600_00006370:
    lbz r0, 0x24(r31)
    cmplwi r0, 0x1
    bne lbl_fn_8064E600_0000638C
    lwz r3, 0x6c(r31)
    li r5, 0x1
    lbz r4, 0xd(r31)
    bl fn_8064932C
lbl_fn_8064E600_0000638C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8064E68C(void)
{
    nofralloc
    lwz r4, 0x6c(r3)
    lbz r0, 0x72(r4)
    cmplwi r0, 0x2
    bnelr
    lhz r4, 0x98(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8064E68C_000063C4
    subi r0, r4, 0x1
    sth r0, 0x98(r3)
lbl_fn_8064E68C_000063C4:
    lhz r0, 0x98(r3)
    cmpwi r0, 0x0
    bnelr
    li r0, 0x1
    stb r0, 0x24(r3)
    blr
}

asm void fn_8064E6C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8064E6C8_00006420
    addi r3, r3, 0x18
    bl fn_80627180
    b lbl_fn_8064E6C8_00006420
lbl_fn_8064E6C8_00006404:
    addi r3, r31, 0x18
    bl fn_80627400
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8064E6C8_0000642C
    lhz r3, 0x68(r31)
    bl fn_80642A34
lbl_fn_8064E6C8_00006420:
    lbz r0, 0x73(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8064E6C8_00006404
lbl_fn_8064E6C8_0000642C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
