#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _savegpr_18(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8000D9E8(void);
extern void fn_8000D9F8(void);
extern void fn_8000DB1C(void);
extern void fn_8000DCF4(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_80013404(void);
extern void fn_80013410(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_8006EF48(void);
extern void fn_8006FA4C(void);
extern void fn_8008B964(void);
extern void fn_800A58D0(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_800E0000(void);
extern void fn_800F52F0(void);
extern void fn_800F52F8(void);
extern void fn_800F530C(void);
extern void fn_800F7260(void);
extern void fn_800F72CC(void);
extern void fn_800F7F80(void);
extern void fn_800F7F90(void);
extern void fn_800F7FB4(void);
extern void fn_800F7FF0(void);
extern void fn_800F84BC(void);
extern void fn_800F8524(void);
extern void fn_8010D320(void);
extern void fn_8010F6FC(void);
extern void fn_801125F8(void);
extern void fn_80113CCC(void);
extern void fn_801156BC(void);
extern void fn_801156C4(void);
extern void fn_801162A0(void);
extern void fn_80116BAC(void);
extern void fn_80116E6C(void);
extern void fn_80121F00(void);
extern void fn_80122550(void);
extern void fn_801231B0(void);
extern void fn_80124C6C(void);
extern void fn_80139ED0(void);
extern void fn_80139EFC(void);
extern void fn_80139F4C(void);
extern void fn_80139F60(void);
extern void fn_8013A13C(void);
extern void fn_8013A158(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_8013C3A8(void);
extern void fn_8013C42C(void);
extern void fn_8013C43C(void);
extern void fn_8013C458(void);
extern void fn_8013C480(void);
extern void fn_8013C504(void);
extern void fn_80140518(void);
extern void fn_8014052C(void);
extern void fn_801479D8(void);
extern void fn_80151210(void);
extern void fn_801799BC(void);
extern void fn_80179FA8(void);
extern void fn_80198C00(void);
extern void fn_801A03E0(void);
extern void fn_801A03E8(void);
extern void fn_801A03EC(void);
extern void fn_801A0408(void);
extern void fn_801F19B4(void);
extern void fn_801F33D4(void);
extern void fn_801F4484(void);
extern void fn_801F465C(void);
extern void fn_801F48C8(void);
extern void fn_801F4CB4(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C80(void);
extern void fn_801F6D7C(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_80202D00(void);
extern void fn_802168BC(void);
extern void fn_80216908(void);
extern void fn_80244CA0(void);
extern void fn_80244CAC(void);
extern void fn_80267B20(void);
extern void fn_80267B28(void);
extern void fn_802A36B0(void);
extern void fn_802A4094(void);
extern void fn_802A7910(void);
extern void fn_802A7964(void);
extern void fn_802F0988(void);
extern void fn_802F0990(void);
extern void fn_8030B408(void);
extern void fn_80315644(void);
extern void fn_80318F90(void);
extern void fn_80323C2C(void);
extern void fn_80339F04(void);
extern void fn_8036554C(void);
extern void fn_80366DA4(void);
extern void fn_80366DAC(void);
extern void fn_80366E08(void);
extern void fn_80370174(void);
extern void fn_80372574(void);
extern void fn_803761A4(void);
extern void fn_8038B648(void);
extern void fn_803CC900(void);
extern void fn_803CE854(void);
extern void fn_803CE8A8(void);
extern void fn_803CF734(void);
extern void fn_803CF740(void);
extern void fn_803CF74C(void);
extern void fn_803CF78C(void);
extern void fn_803CFC58(void);
extern void fn_803CFC64(void);
extern void fn_803CFC6C(void);
extern void fn_803D2134(void);
extern void fn_803D213C(void);
extern void fn_803D2148(void);
extern void fn_803D215C(void);
extern void fn_803D218C(void);
extern void fn_803D2A54(void);
extern void fn_803D2A60(void);
extern void fn_803D6DE4(void);
extern void fn_803D6DF4(void);
extern void fn_803D6E1C(void);
extern void fn_803D6E24(void);
extern void fn_803D6E2C(void);
extern void fn_803D6E3C(void);
extern void fn_803D6E70(void);
extern void fn_803D6E7C(void);
extern void fn_803D6EA0(void);
extern void fn_803D6EAC(void);
extern void fn_803D6EB8(void);
extern void fn_803D6EC0(void);
extern void fn_803D6ED4(void);
extern void fn_803D6EDC(void);
extern void fn_803D6EEC(void);
extern void fn_803D6EF0(void);
extern void fn_803D6EF8(void);
extern void fn_803D6F44(void);
extern void fn_803D6F60(void);
extern void fn_803D6F68(void);
extern void fn_803D6F70(void);
extern void fn_803D6F78(void);
extern void fn_803D6FD4(void);
extern void fn_803D6FDC(void);
extern void fn_803D6FE4(void);
extern void fn_803D6FEC(void);
extern void fn_803D7000(void);
extern void fn_803D7014(void);
extern void fn_803D7028(void);
extern void fn_803D703C(void);
extern void fn_803D7044(void);
extern void fn_803D7058(void);
extern void fn_803D7060(void);
extern void fn_803D7074(void);
extern void fn_803D707C(void);
extern void fn_803D7084(void);
extern void fn_803D70A0(void);
extern void fn_803D70A8(void);
extern void fn_803D70B4(void);
extern void fn_803D7100(void);
extern void fn_803D7108(void);
extern void fn_803D7110(void);
extern void fn_803D7124(void);
extern void fn_803D7158(void);
extern void fn_803D716C(void);
extern void fn_803D7174(void);
extern void fn_803D717C(void);
extern void fn_803D7184(void);
extern void fn_803D718C(void);
extern void fn_803D7194(void);
extern void fn_803D719C(void);
extern void fn_803D71A8(void);
extern void fn_803D71BC(void);
extern void fn_803D71C4(void);
extern void fn_803D71CC(void);
extern void fn_803D71D4(void);
extern void fn_803D71DC(void);
extern void fn_803D71F4(void);
extern void fn_803D7204(void);
extern void fn_803D7224(void);
extern void fn_803D7234(void);
extern void fn_803D7260(void);
extern void fn_803D7270(void);
extern void fn_803D7280(void);
extern void fn_803D72C0(void);
extern void fn_803D72FC(void);
extern void fn_803D731C(void);
extern void fn_803D732C(void);
extern void fn_803D733C(void);
extern void fn_803D737C(void);
extern void fn_803D7384(void);
extern void fn_803D738C(void);
extern void fn_803D739C(void);
extern void fn_803D73A4(void);
extern void fn_803D73B4(void);
extern void fn_803D73C8(void);
extern void fn_803D7828(void);
extern void fn_803D7830(void);
extern void fn_803D7840(void);
extern void fn_803DF648(void);
extern void fn_803E0E10(void);
extern void fn_803E3468(void);
extern void fn_803E4100(void);
extern void fn_803E6C88(void);
extern void fn_803E6CBC(void);
extern void fn_80481654(void);
extern void fn_804EB014(void);
extern void fn_804EB7C8(void);
extern void fn_80686A64(void);

/* External data declarations */
extern u8 lbl_80750618[];
extern u8 lbl_80750650[];
extern u8 lbl_807506A0[];
extern u8 lbl_8078C638[];

/* Small data declarations */
extern u32 lbl_8087DEE8;
extern u32 lbl_8087DEEC;
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885D68;
extern u32 lbl_80885DDC;
extern u32 lbl_80885DE0;
extern u32 lbl_80885DE4;
extern u32 lbl_80885DEC;
extern u32 lbl_80885DF0;
extern u32 lbl_80885DF4;
extern u32 lbl_80885DF8;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E00;
extern u32 lbl_80885E04;
extern u32 lbl_80885E08;
extern u32 lbl_80885E0C;
extern u32 lbl_80885E10;
extern u32 lbl_80885E14;
extern u32 lbl_80885E18;
extern u32 lbl_80885E1C;
extern u32 lbl_80885E20;
extern u32 lbl_80885E24;
extern u32 lbl_80885E28;
extern u32 lbl_80885E2C;
extern u32 lbl_80885E30;
extern u32 lbl_80885E34;
extern u32 lbl_80885E38;
extern u32 lbl_80885E3C;
extern u32 lbl_80885E40;
extern u32 lbl_80885E44;
extern u32 lbl_80885E48;
extern u32 lbl_80885E4C;
extern u32 lbl_80885E50;
extern u32 lbl_80885E54;
extern u32 lbl_80885E58;
extern u32 lbl_80885E5C;
extern u32 lbl_80885E60;
extern u32 lbl_80885E64;
extern u32 lbl_80885E68;
extern u32 lbl_80885E6C;
extern u32 lbl_80885E70;
extern u32 lbl_80885E74;
extern u32 lbl_80885E78;
extern u32 lbl_80885E7C;

/* Function declarations */
void fn_803D2A6C(void);

asm void fn_803D2A6C(void)
{
    nofralloc
    stwu r1, -0xb30(r1)
    mflr r0
    stw r0, 0xb34(r1)
    li r0, 0xb28
    addi r11, r1, 0xab0
    stfd f31, 0xb20(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0xb18
    stfd f30, 0xb10(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0xb08
    stfd f29, 0xb00(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0xaf8
    stfd f28, 0xaf0(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0xae8
    stfd f27, 0xae0(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0xad8
    stfd f26, 0xad0(r1)
    psq_stx f26, r1, r0, 0, 0
    li r0, 0xac8
    stfd f25, 0xac0(r1)
    psq_stx f25, r1, r0, 0, 0
    li r0, 0xab8
    stfd f24, 0xab0(r1)
    psq_stx f24, r1, r0, 0, 0
    bl _savegpr_18
    lis r0, 0x4330
    mr r24, r3
    stw r0, 0xa60(r1)
    lwz r3, 0x68(r3)
    stw r0, 0xa68(r1)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000009C
    lwz r3, 0x68(r24)
    bl fn_803D2A60
lbl_fn_803D2A6C_0000009C:
    lwz r3, 0x6c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000000BC
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000000BC
    lwz r3, 0x6c(r24)
    bl fn_803D2A60
lbl_fn_803D2A6C_000000BC:
    lwz r3, 0x70(r24)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000000D4
    lwz r3, 0x70(r24)
    bl fn_803D2A60
lbl_fn_803D2A6C_000000D4:
    lwz r3, 0x5c(r24)
    bl fn_80244CAC
    lwz r3, 0x60(r24)
    bl fn_80244CAC
    lwz r3, 0x64(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000000F4
    bl fn_80244CAC
lbl_fn_803D2A6C_000000F4:
    lwz r3, 0x68(r24)
    bl fn_80244CAC
    lwz r3, 0x6c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000010C
    bl fn_80244CAC
lbl_fn_803D2A6C_0000010C:
    lwz r3, 0x70(r24)
    bl fn_80244CAC
    lwz r3, 0x74(r24)
    bl fn_80244CAC
    lwz r3, 0x78(r24)
    bl fn_80244CAC
    lwz r3, 0x7c(r24)
    bl fn_80244CAC
    mr r21, r24
    mr r22, r24
    li r19, 0x0
lbl_fn_803D2A6C_00000138:
    lwz r3, 0xc8(r21)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000150
    lwz r3, 0xc8(r21)
    bl fn_803D2A60
lbl_fn_803D2A6C_00000150:
    lwz r3, 0xcc(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000170
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000170
    lwz r3, 0xcc(r21)
    bl fn_803D2A60
lbl_fn_803D2A6C_00000170:
    lwz r3, 0xd0(r21)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000188
    lwz r3, 0xd0(r21)
    bl fn_803D2A60
lbl_fn_803D2A6C_00000188:
    lwz r3, 0xbc(r21)
    bl fn_80244CAC
    lwz r3, 0xc0(r21)
    bl fn_80244CAC
    lwz r3, 0xc4(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000001A8
    bl fn_80244CAC
lbl_fn_803D2A6C_000001A8:
    lwz r3, 0xc8(r21)
    bl fn_80244CAC
    lwz r3, 0xcc(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000001C0
    bl fn_80244CAC
lbl_fn_803D2A6C_000001C0:
    lwz r3, 0xd0(r21)
    bl fn_80244CAC
    lwz r3, 0xdc(r21)
    bl fn_80244CAC
    mr r23, r22
    li r20, 0x0
lbl_fn_803D2A6C_000001D8:
    lwz r3, 0x318(r23)
    bl fn_80244CAC
    addi r20, r20, 0x1
    addi r23, r23, 0x4
    cmpwi r20, 0x5
    blt lbl_fn_803D2A6C_000001D8
    addi r19, r19, 0x1
    addi r22, r22, 0x20
    cmpwi r19, 0x6
    addi r21, r21, 0x60
    blt lbl_fn_803D2A6C_00000138
    mr r21, r24
    li r19, 0x0
lbl_fn_803D2A6C_0000020C:
    lwz r3, 0x574(r21)
    bl fn_80244CAC
    lwz r3, 0x594(r21)
    bl fn_80244CAC
    addi r19, r19, 0x1
    addi r21, r21, 0x4
    cmpwi r19, 0x8
    blt lbl_fn_803D2A6C_0000020C
    lwz r3, 0x5b8(r24)
    bl fn_80244CAC
    lwz r3, 0x3d8(r24)
    bl fn_80244CAC
    mr r21, r24
    li r19, 0x0
lbl_fn_803D2A6C_00000244:
    lwz r3, 0x3dc(r21)
    bl fn_80244CAC
    addi r19, r19, 0x1
    addi r21, r21, 0x4
    cmpwi r19, 0x4
    blt lbl_fn_803D2A6C_00000244
    mr r21, r24
    li r19, 0x0
lbl_fn_803D2A6C_00000264:
    lwz r3, 0x6fc(r21)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000027C
    lwz r3, 0x6fc(r21)
    bl fn_803D2A60
lbl_fn_803D2A6C_0000027C:
    lwz r3, 0x6fc(r21)
    bl fn_80244CAC
    addi r19, r19, 0x1
    addi r21, r21, 0x4
    cmpwi r19, 0x6
    blt lbl_fn_803D2A6C_00000264
    lwz r3, 0x714(r24)
    bl fn_80244CAC
    lwz r3, 0x71c(r24)
    bl fn_80244CAC
    lwz r3, 0x718(r24)
    bl fn_80244CAC
    lwz r3, 0x720(r24)
    bl fn_80244CAC
    lwz r3, 0x72c(r24)
    bl fn_80244CAC
    lwz r3, 0x730(r24)
    bl fn_80244CAC
    mr r21, r24
    li r19, 0x0
lbl_fn_803D2A6C_000002CC:
    lwz r3, 0x8a0(r21)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000002E4
    lwz r3, 0x8a0(r21)
    bl fn_803D2A60
lbl_fn_803D2A6C_000002E4:
    lwz r3, 0x8a0(r21)
    bl fn_80244CAC
    addi r19, r19, 0x1
    addi r21, r21, 0x4
    cmpwi r19, 0xc
    blt lbl_fn_803D2A6C_000002CC
    lwz r3, 0xa84(r24)
    bl fn_80244CAC
    lwz r3, 0xa88(r24)
    bl fn_80244CAC
    lwz r3, 0x73c(r24)
    bl fn_80244CAC
    lwz r3, 0x740(r24)
    bl fn_80244CAC
    lwz r3, 0x744(r24)
    bl fn_80244CAC
    lwz r3, 0x7b8(r24)
    bl fn_80244CAC
    lwz r3, 0x7bc(r24)
    bl fn_80244CAC
    mr r21, r24
    li r19, 0x0
lbl_fn_803D2A6C_0000033C:
    lwz r3, 0x814(r21)
    bl fn_80244CAC
    lwz r3, 0x81c(r21)
    bl fn_80244CAC
    lwz r3, 0x824(r21)
    bl fn_80244CAC
    lwz r3, 0x82c(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000364
    bl fn_80244CAC
lbl_fn_803D2A6C_00000364:
    addi r19, r19, 0x1
    addi r21, r21, 0x4
    cmpwi r19, 0x2
    blt lbl_fn_803D2A6C_0000033C
    lwz r3, 0x83c(r24)
    bl fn_80244CAC
    lwz r3, 0x840(r24)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000394
    lwz r3, 0x840(r24)
    bl fn_803D2A54
lbl_fn_803D2A6C_00000394:
    lwz r3, 0x840(r24)
    bl fn_80244CAC
    addi r3, r24, 0x85c
    bl fn_803CF734
    lwz r3, 0x844(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000003B4
    bl fn_80244CAC
lbl_fn_803D2A6C_000003B4:
    lwz r3, 0x870(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000003DC
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000003D4
    lwz r3, 0x870(r24)
    bl fn_803D2A54
lbl_fn_803D2A6C_000003D4:
    lwz r3, 0x870(r24)
    bl fn_80244CAC
lbl_fn_803D2A6C_000003DC:
    lwz r3, 0x848(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000045C
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000003FC
    lwz r3, 0x848(r24)
    bl fn_803D2A54
lbl_fn_803D2A6C_000003FC:
    lwz r3, 0x848(r24)
    bl fn_80244CAC
    mr r21, r24
    li r19, 0x0
lbl_fn_803D2A6C_0000040C:
    lwz r3, 0x84c(r21)
    bl fn_803D2A60
    lwz r3, 0x84c(r21)
    bl fn_80244CAC
    addi r19, r19, 0x1
    addi r21, r21, 0x4
    cmpwi r19, 0x4
    blt lbl_fn_803D2A6C_0000040C
    lwz r3, 0x874(r24)
    bl fn_80244CAC
    mr r21, r24
    li r19, 0x0
lbl_fn_803D2A6C_0000043C:
    lwz r3, 0x878(r21)
    bl fn_803D2A60
    lwz r3, 0x878(r21)
    bl fn_80244CAC
    addi r19, r19, 0x1
    addi r21, r21, 0x4
    cmpwi r19, 0x4
    blt lbl_fn_803D2A6C_0000043C
lbl_fn_803D2A6C_0000045C:
    mr r21, r24
    li r19, 0x0
lbl_fn_803D2A6C_00000464:
    lwz r3, 0xb38(r21)
    bl fn_80244CAC
    lwz r3, 0xb3c(r21)
    bl fn_80244CAC
    lwz r3, 0xb40(r21)
    bl fn_80244CAC
    lwz r3, 0xb44(r21)
    bl fn_80244CAC
    lwz r3, 0xb48(r21)
    bl fn_80244CAC
    lwz r3, 0xb4c(r21)
    bl fn_80244CAC
    lwz r3, 0xb50(r21)
    bl fn_80244CAC
    lwz r3, 0xb54(r21)
    bl fn_80244CAC
    addi r19, r19, 0x1
    addi r21, r21, 0x20
    cmpwi r19, 0x8
    blt lbl_fn_803D2A6C_00000464
    lwz r3, 0x2654(r24)
    bl fn_80244CAC
    lwz r3, 0xd70(r24)
    bl fn_80244CAC
    lwz r3, 0xd74(r24)
    bl fn_80244CAC
    lwz r3, 0xdb4(r24)
    bl fn_80244CAC
    lwz r3, 0xdb8(r24)
    bl fn_80244CAC
    lwz r3, 0xdbc(r24)
    bl fn_80244CAC
    lwz r3, 0xdc0(r24)
    bl fn_80244CAC
    mr r3, r24
    bl fn_803D6DE4
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00004300
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000518
    bl fn_800F7F90
    bl fn_803D6DF4
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00004300
lbl_fn_803D2A6C_00000518:
    li r21, 0x0
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0x8
    bne lbl_fn_803D2A6C_0000054C
    bl fn_8000DB1C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000054C
    bl fn_8000DB1C
    bl fn_80481654
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000054C
    li r21, 0x1
lbl_fn_803D2A6C_0000054C:
    li r29, 0x0
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0x8
    bne lbl_fn_803D2A6C_00000580
    bl fn_8000DB1C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000057C
    bl fn_8000DB1C
    bl fn_80481654
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00000580
lbl_fn_803D2A6C_0000057C:
    li r29, 0x1
lbl_fn_803D2A6C_00000580:
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r31, r3
    bl fn_80121F00
    bl fn_80122550
    cmpwi r21, 0x0
    mr r28, r3
    beq lbl_fn_803D2A6C_0000067C
    mr r3, r24
    bl fn_803E4100
    lis r21, lbl_807506A0@ha
    lfs f26, lbl_80885DE0
    mr r22, r24
    li r19, 0x0
    addi r21, r21, lbl_807506A0@l
    b lbl_fn_803D2A6C_00000660
lbl_fn_803D2A6C_000005C0:
    lwz r3, 0x8a0(r22)
    bl fn_803D6E2C
    mr r4, r19
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    mr r4, r3
    lwz r3, 0x8a0(r22)
    lfs f1, 0xc(r4)
    addi r4, r21, 0x10a2
    li r5, 0x0
    bl fn_801F6D7C
    mr r4, r19
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    mr r4, r3
    lwz r3, 0x8a0(r22)
    lfs f1, 0x10(r4)
    addi r4, r21, 0x10a2
    li r5, 0x1
    bl fn_801F6D7C
    mr r4, r19
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0x18(r3)
    addi r4, r21, 0x10ad
    lwz r3, 0x8a0(r22)
    li r5, 0x2
    fmuls f1, f26, f0
    bl fn_801F6D7C
    mr r4, r19
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0x1c(r3)
    addi r4, r21, 0x10ad
    lwz r3, 0x8a0(r22)
    li r5, 0x3
    fmuls f1, f26, f0
    bl fn_801F6D7C
    addi r22, r22, 0x4
    addi r19, r19, 0x1
lbl_fn_803D2A6C_00000660:
    addi r3, r24, 0x8d0
    bl fn_80372574
    cmplw r19, r3
    blt lbl_fn_803D2A6C_000005C0
    addi r3, r24, 0x8d0
    bl fn_803CF734
    b lbl_fn_803D2A6C_00002C30
lbl_fn_803D2A6C_0000067C:
    cmpwi r29, 0x0
    bne lbl_fn_803D2A6C_00000694
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00002C30
lbl_fn_803D2A6C_00000694:
    bl fn_80121F00
    li r4, 0x2b
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_803D2A6C_00000704
    addi r3, r1, 0x5e4
    bl fn_803D6E3C
    lfs f4, lbl_80885D60
    li r0, 0x1
    stw r0, 0x5e4(r1)
    addi r3, r1, 0x5ec
    lfs f1, lbl_80885DEC
    stfs f4, 0x5fc(r1)
    lfs f2, lbl_80885DF0
    lfs f3, lbl_80885DF4
    bl fn_8030B408
    lfs f1, lbl_80885DF8
    addi r3, r1, 0x55c
    lfs f0, lbl_80885D58
    addi r4, r1, 0x5e4
    stfs f1, 0x604(r1)
    stfs f0, 0x600(r1)
    bl fn_80366E08
    mr r21, r3
    bl fn_802F0990
    mr r4, r21
    bl fn_80366DAC
    b lbl_fn_803D2A6C_00000930
lbl_fn_803D2A6C_00000704:
    bl fn_80121F00
    bl fn_803D6E70
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00000930
    mr r3, r31
    bl fn_800F52F0
    lwz r0, 0x16c(r3)
    lis r3, lbl_80750650@ha
    lfd f1, lbl_80750650@l(r3)
    mr r3, r31
    xoris r0, r0, 0x8000
    stw r0, 0xa64(r1)
    lfd f0, 0xa60(r1)
    fsubs f26, f0, f1
    bl fn_800F52F0
    lfs f0, 0x4(r3)
    mr r3, r31
    fdivs f26, f0, f26
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_803D2A6C_0000076C
    mr r3, r31
    bl fn_80267B28
    cmpwi r3, 0x1c
    bne lbl_fn_803D2A6C_0000076C
    lfs f26, lbl_80885D58
lbl_fn_803D2A6C_0000076C:
    fmadds f1, f26, f26, f26
    lfs f0, lbl_80885DFC
    la r3, lbl_8087DEE8
    la r4, lbl_8087DEEC
    fmuls f1, f0, f1
    bl fn_800F8524
    lfs f2, 0x4c(r24)
    lfs f0, lbl_80885D58
    fsubs f26, f1, f2
    fcmpo cr0, f26, f0
    ble lbl_fn_803D2A6C_000007D4
    bl fn_802F0990
    bl fn_802F0988
    lfs f0, lbl_80885E00
    fmuls f0, f0, f1
    fcmpo cr0, f26, f0
    bge lbl_fn_803D2A6C_000007B4
    b lbl_fn_803D2A6C_000007C4
lbl_fn_803D2A6C_000007B4:
    bl fn_802F0990
    bl fn_802F0988
    lfs f0, lbl_80885E00
    fmuls f26, f0, f1
lbl_fn_803D2A6C_000007C4:
    lfs f0, 0x4c(r24)
    fadds f0, f0, f26
    stfs f0, 0x4c(r24)
    b lbl_fn_803D2A6C_00000810
lbl_fn_803D2A6C_000007D4:
    bge lbl_fn_803D2A6C_00000810
    bl fn_802F0990
    bl fn_802F0988
    lfs f0, lbl_80885E04
    fmuls f0, f0, f1
    fcmpo cr0, f26, f0
    ble lbl_fn_803D2A6C_000007F4
    b lbl_fn_803D2A6C_00000804
lbl_fn_803D2A6C_000007F4:
    bl fn_802F0990
    bl fn_802F0988
    lfs f0, lbl_80885E04
    fmuls f26, f0, f1
lbl_fn_803D2A6C_00000804:
    lfs f0, 0x4c(r24)
    fadds f0, f0, f26
    stfs f0, 0x4c(r24)
lbl_fn_803D2A6C_00000810:
    lfs f1, lbl_80885D5C
    lfs f0, 0x4c(r24)
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00000824
    b lbl_fn_803D2A6C_00000828
lbl_fn_803D2A6C_00000824:
    fmr f1, f0
lbl_fn_803D2A6C_00000828:
    lfs f2, lbl_80885D60
    fcmpo cr0, f2, f1
    bge lbl_fn_803D2A6C_00000838
    b lbl_fn_803D2A6C_00000850
lbl_fn_803D2A6C_00000838:
    lfs f2, lbl_80885D5C
    lfs f0, 0x4c(r24)
    fcmpo cr0, f2, f0
    ble lbl_fn_803D2A6C_0000084C
    b lbl_fn_803D2A6C_00000850
lbl_fn_803D2A6C_0000084C:
    fmr f2, f0
lbl_fn_803D2A6C_00000850:
    stfs f2, 0x4c(r24)
    bl fn_802F0990
    bl fn_80366DA4
    mr r4, r3
    addi r3, r1, 0x5c0
    bl fn_80366E08
    lfs f1, 0x4c(r24)
    lfs f0, lbl_80885E08
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x5c0(r1)
    bl fn_802F0990
    bl fn_802F0988
    lfs f2, 0x48(r24)
    lfs f0, lbl_80885E0C
    fadds f1, f2, f1
    stfs f1, 0x48(r24)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803D2A6C_000008B4
    fsubs f0, f1, f0
    stfs f0, 0x48(r24)
lbl_fn_803D2A6C_000008B4:
    lfs f2, 0x48(r24)
    lfs f1, lbl_80885E0C
    lfs f0, lbl_80885E10
    fdivs f1, f2, f1
    fmuls f1, f0, f1
    bl fn_803D6E7C
    lfs f2, lbl_80885E00
    fmr f26, f1
    lfs f0, lbl_80885E14
    fmadds f1, f2, f1, f0
    bl fn_801125F8
    lfs f2, lbl_80885E18
    addi r3, r1, 0x5c8
    stfs f1, 0x5d8(r1)
    fmr f3, f2
    lfs f1, lbl_80885D58
    lfs f4, lbl_80885D60
    bl fn_8030B408
    lfs f2, lbl_80885E00
    addi r3, r1, 0x538
    lfs f1, 0x4c(r24)
    addi r4, r1, 0x5c0
    lfs f0, lbl_80885D58
    fmadds f1, f2, f26, f1
    stfs f0, 0x5dc(r1)
    stfs f1, 0x5e0(r1)
    bl fn_80366E08
    mr r21, r3
    bl fn_802F0990
    mr r4, r21
    bl fn_80366DAC
lbl_fn_803D2A6C_00000930:
    lfs f25, lbl_80885E1C
    mr r3, r31
    li r19, 0x0
    bl fn_80179FA8
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000B60
    bl fn_801A03E0
    bl fn_801A0408
    stw r3, 0x18(r1)
    lfs f31, lbl_80885E0C
    lfs f30, lbl_80885D58
    lfs f27, lbl_80885D60
    lfs f26, lbl_80885E24
    lfs f28, lbl_80885E20
    b lbl_fn_803D2A6C_00000B58
lbl_fn_803D2A6C_0000096C:
    addi r3, r24, 0x85c
    bl fn_803D7204
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00000B60
    lwz r3, 0x18(r1)
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00000B4C
    lwz r3, 0x18(r1)
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000B4C
    lwz r3, 0x18(r1)
    bl fn_803D6EA0
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00000B4C
    lwz r3, 0x18(r1)
    bl fn_803D6EAC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000B4C
    lwz r3, 0x18(r1)
    bl fn_8013A158
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000B4C
    mr r3, r31
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x488
    bl fn_8001047C
    mr r3, r31
    bl fn_8013C42C
    lfs f0, 0x48c(r1)
    lwz r3, 0x18(r1)
    fadds f0, f0, f1
    stfs f0, 0x48c(r1)
    bl fn_803D6EB8
    lfs f24, lbl_80885E1C
    mr r20, r3
    li r21, -0x1
    li r22, 0x0
    b lbl_fn_803D2A6C_00000B28
lbl_fn_803D2A6C_00000A14:
    mr r3, r20
    mr r4, r22
    bl fn_803D7224
    mr r4, r3
    addi r3, r1, 0x47c
    addi r4, r4, 0x4
    addi r5, r1, 0x488
    bl fn_80013338
    lfs f1, 0x480(r1)
    bl fn_80013404
    fsubs f0, f1, f31
    fcmpo cr0, f30, f0
    ble lbl_fn_803D2A6C_00000A50
    fmr f2, f30
    b lbl_fn_803D2A6C_00000A5C
lbl_fn_803D2A6C_00000A50:
    lfs f1, 0x480(r1)
    bl fn_80013404
    fsubs f2, f1, f31
lbl_fn_803D2A6C_00000A5C:
    lfs f1, 0x47c(r1)
    addi r3, r1, 0x2b4
    lfs f3, 0x484(r1)
    bl fn_8000D114
    bl fn_8000D3A4
    fmr f29, f1
    mr r3, r20
    mr r4, r22
    bl fn_803D7224
    lfs f0, 0x10(r3)
    addi r3, r1, 0x47c
    fsubs f29, f29, f0
    bl fn_803D6EC0
    fcmpo cr0, f1, f28
    ble lbl_fn_803D2A6C_00000AD4
    lfs f1, 0x47c(r1)
    addi r3, r1, 0x470
    lfs f2, lbl_80885D58
    lfs f3, 0x484(r1)
    bl fn_8000D114
    addi r3, r1, 0x470
    bl fn_800F7FF0
    mr r4, r31
    addi r3, r1, 0x2a8
    bl fn_8014052C
    addi r3, r1, 0x470
    addi r4, r1, 0x2a8
    bl fn_801A03E8
    fsubs f0, f27, f1
    fmadds f29, f26, f0, f29
lbl_fn_803D2A6C_00000AD4:
    fcmpo cr0, f29, f31
    bge lbl_fn_803D2A6C_00000B24
    fcmpo cr0, f25, f29
    ble lbl_fn_803D2A6C_00000AF4
    fmr f25, f29
    addi r3, r24, 0x85c
    bl fn_80372574
    mr r19, r3
lbl_fn_803D2A6C_00000AF4:
    lwz r3, 0x18(r1)
    lwz r0, 0x770(r24)
    cmplw r3, r0
    bne lbl_fn_803D2A6C_00000B14
    lfs f25, lbl_80885D58
    addi r3, r24, 0x85c
    bl fn_80372574
    mr r19, r3
lbl_fn_803D2A6C_00000B14:
    fcmpo cr0, f29, f24
    bge lbl_fn_803D2A6C_00000B24
    fmr f24, f29
    mr r21, r22
lbl_fn_803D2A6C_00000B24:
    addi r22, r22, 0x1
lbl_fn_803D2A6C_00000B28:
    mr r3, r20
    bl fn_803D6ED4
    cmplw r22, r3
    blt lbl_fn_803D2A6C_00000A14
    cmpwi r21, 0x0
    blt lbl_fn_803D2A6C_00000B4C
    addi r3, r24, 0x85c
    addi r4, r1, 0x18
    bl fn_803D7234
lbl_fn_803D2A6C_00000B4C:
    lwz r3, 0x18(r1)
    bl fn_801A03EC
    stw r3, 0x18(r1)
lbl_fn_803D2A6C_00000B58:
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_0000096C
lbl_fn_803D2A6C_00000B60:
    addi r3, r24, 0x85c
    bl fn_803D6EDC
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00000C54
    lwz r0, 0x764(r24)
    cmpwi r0, 0x1
    beq lbl_fn_803D2A6C_00000B88
    cmpwi r0, 0xa
    beq lbl_fn_803D2A6C_00000B90
    b lbl_fn_803D2A6C_00000C54
lbl_fn_803D2A6C_00000B88:
    li r0, 0xe
    stw r0, 0x764(r24)
lbl_fn_803D2A6C_00000B90:
    lwz r3, 0x870(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000C54
    bl fn_803D6E2C
    mr r3, r31
    bl fn_8013C38C
    mr r21, r3
    mr r4, r19
    addi r3, r24, 0x85c
    bl fn_803D7260
    lwz r3, 0x0(r3)
    bl fn_8013C38C
    mr r4, r3
    mr r5, r21
    addi r3, r1, 0x464
    bl fn_80013338
    addi r3, r1, 0x464
    bl fn_800F7FF0
    addi r3, r1, 0x464
    bl fn_80139F60
    bl fn_80121F00
    bl fn_80122550
    bl fn_803D6EEC
    bl fn_80116E6C
    lfs f1, 0x4(r3)
    lfs f0, 0x468(r1)
    fsubs f1, f1, f0
    stfs f1, 0x14(r1)
    bl fn_802A7964
    bl fn_802A7910
    stfs f1, 0x14(r1)
    lis r21, lbl_807506A0@ha
    addi r21, r21, lbl_807506A0@l
    lwz r3, 0x870(r24)
    addi r4, r21, 0x10b8
    bl fn_803D6EF0
    li r4, 0x0
    li r5, 0x0
    bl fn_803D7270
    stfs f1, 0x10(r1)
    addi r3, r1, 0x10
    lfs f1, lbl_80885E28
    addi r4, r1, 0x14
    bl fn_800F8524
    stfs f1, 0x14(r1)
    frsp f1, f1
    addi r4, r21, 0x10b8
    lwz r3, 0x870(r24)
    bl fn_803D6EF8
lbl_fn_803D2A6C_00000C54:
    lwz r3, 0x764(r24)
    li r19, 0x0
    lwz r0, 0x748(r24)
    cmpw r3, r0
    beq lbl_fn_803D2A6C_00000CA0
    addi r3, r24, 0x780
    addi r4, r24, 0x748
    li r19, 0x1
    li r5, 0x1c
    bl memcpy
    lwz r0, 0x764(r24)
    cmpwi r0, 0x6
    bne lbl_fn_803D2A6C_00000CA0
    lwz r0, 0x768(r24)
    cmpwi r0, 0x2
    bne lbl_fn_803D2A6C_00000CA0
    lwz r0, 0x2660(r24)
    ori r0, r0, 0x20
    stw r0, 0x2660(r24)
lbl_fn_803D2A6C_00000CA0:
    lwz r0, 0x764(r24)
    cmpwi r0, 0x0
    blt lbl_fn_803D2A6C_00000CD8
    lwz r0, 0x768(r24)
    cmpwi r0, 0xc
    beq lbl_fn_803D2A6C_00000CD8
    cmpwi r0, 0xd
    beq lbl_fn_803D2A6C_00000CD8
    lwz r4, 0x73c(r24)
    mr r3, r24
    lwz r5, 0x744(r24)
    addi r6, r24, 0x764
    li r7, 0x0
    bl fn_803E3468
lbl_fn_803D2A6C_00000CD8:
    lwz r0, 0x780(r24)
    cmpwi r0, 0x0
    blt lbl_fn_803D2A6C_00000D10
    lwz r0, 0x784(r24)
    cmpwi r0, 0xc
    beq lbl_fn_803D2A6C_00000D10
    cmpwi r0, 0xd
    beq lbl_fn_803D2A6C_00000D10
    lwz r4, 0x740(r24)
    mr r3, r24
    addi r6, r24, 0x780
    li r5, 0x0
    li r7, 0x0
    bl fn_803E3468
lbl_fn_803D2A6C_00000D10:
    cmpwi r19, 0x0
    beq lbl_fn_803D2A6C_00000D58
    lwz r3, 0x73c(r24)
    bl fn_803D2A54
    lwz r3, 0x740(r24)
    bl fn_803D2A54
    lwz r0, 0x77c(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x814(r3)
    bl fn_803D6F44
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000D58
    lwz r0, 0x77c(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x814(r3)
    bl fn_803D2A54
lbl_fn_803D2A6C_00000D58:
    lwz r3, 0x7c0(r24)
    li r30, 0x0
    lwz r0, 0x7f8(r24)
    cmpw r3, r0
    beq lbl_fn_803D2A6C_00000D80
    addi r3, r24, 0x7dc
    addi r4, r24, 0x7f8
    li r30, 0x1
    li r5, 0x1c
    bl memcpy
lbl_fn_803D2A6C_00000D80:
    lwz r0, 0x7c0(r24)
    li r19, 0x0
    cmpwi r0, 0x0
    blt lbl_fn_803D2A6C_00000E6C
    lwz r4, 0x7b8(r24)
    mr r3, r24
    addi r6, r24, 0x7c0
    li r5, 0x0
    li r7, 0x0
    bl fn_803E3468
    bl fn_800F52F8
    bl fn_803D6F60
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00000E6C
    lwz r0, 0x7c0(r24)
    cmpwi r0, 0x11
    bne lbl_fn_803D2A6C_00000E6C
    lwz r3, 0x83c(r24)
    li r19, 0x1
    bl fn_803D6F44
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000DE8
    lwz r3, 0x840(r24)
    bl fn_803D6E2C
    b lbl_fn_803D2A6C_00000E6C
lbl_fn_803D2A6C_00000DE8:
    lwz r3, 0x83c(r24)
    bl fn_803CFC64
    lfs f0, lbl_80885D58
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00000E64
    lwz r3, 0x83c(r24)
    lfs f1, lbl_80885D60
    bl fn_803D6F68
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000E64
    bl fn_80121F00
    bl fn_8013C504
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000E64
    bl fn_80121F00
    bl fn_8013C504
    bl fn_80244CA0
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000E64
    bl fn_80121F00
    bl fn_8013C504
    bl fn_803CC900
    cmpwi r3, 0x0
    ble lbl_fn_803D2A6C_00000E64
    lwz r3, 0x2660(r24)
    li r0, 0x1
    stw r0, 0x265c(r24)
    ori r0, r3, 0x10
    stw r0, 0x2660(r24)
lbl_fn_803D2A6C_00000E64:
    lwz r3, 0x83c(r24)
    bl fn_803D6E2C
lbl_fn_803D2A6C_00000E6C:
    cmpwi r19, 0x0
    bne lbl_fn_803D2A6C_00000E98
    lwz r3, 0x838(r24)
    subic. r0, r3, 0x1
    stw r0, 0x838(r24)
    bge lbl_fn_803D2A6C_00000EA0
    li r0, 0x0
    stw r0, 0x838(r24)
    lwz r3, 0x83c(r24)
    bl fn_803D2A54
    b lbl_fn_803D2A6C_00000EA0
lbl_fn_803D2A6C_00000E98:
    li r0, 0x5a
    stw r0, 0x838(r24)
lbl_fn_803D2A6C_00000EA0:
    lwz r0, 0x7dc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_803D2A6C_00000EC4
    lwz r4, 0x7bc(r24)
    mr r3, r24
    addi r6, r24, 0x7dc
    li r5, 0x0
    li r7, 0x0
    bl fn_803E3468
lbl_fn_803D2A6C_00000EC4:
    cmpwi r30, 0x0
    beq lbl_fn_803D2A6C_00000EDC
    lwz r3, 0x7b8(r24)
    bl fn_803D2A54
    lwz r3, 0x7bc(r24)
    bl fn_803D2A54
lbl_fn_803D2A6C_00000EDC:
    mr r3, r28
    bl fn_803D6F70
    cmpwi r3, 0x6
    beq lbl_fn_803D2A6C_00001414
    mr r3, r28
    bl fn_803D6F70
    cmpwi r3, 0x5
    beq lbl_fn_803D2A6C_00001414
    lwz r0, 0x764(r24)
    cmpwi r0, 0xa
    bne lbl_fn_803D2A6C_0000100C
    lwz r3, 0x844(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000100C
    lwz r0, 0x770(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_0000100C
    bl fn_803D6E2C
    lwz r3, 0x770(r24)
    bl fn_8000DD0C
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x10c1
    bl fn_800132EC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000F58
    mr r4, r3
    addi r3, r1, 0x29c
    bl fn_8000D0F8
    addi r4, r1, 0x29c
    b lbl_fn_803D2A6C_00000F68
lbl_fn_803D2A6C_00000F58:
    lwz r3, 0x770(r24)
    bl fn_80198C00
    bl fn_80315644
    addi r4, r3, 0xc
lbl_fn_803D2A6C_00000F68:
    addi r3, r1, 0x458
    bl fn_8001047C
    lfs f1, 0x45c(r1)
    lfs f0, lbl_80885DDC
    fadds f0, f1, f0
    stfs f0, 0x45c(r1)
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x44c
    addi r5, r1, 0x458
    bl fn_800BFAC8
    lfs f1, 0x454(r1)
    lfs f0, lbl_80885D58
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803D2A6C_0000100C
    lfs f0, lbl_80885D60
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_0000100C
    lwz r3, 0x848(r24)
    bl fn_803D6E2C
    lwz r3, 0x848(r24)
    bl fn_803D6F44
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00000FDC
    lwz r3, 0x848(r24)
    lfs f1, lbl_80885D68
    bl fn_803D6F68
lbl_fn_803D2A6C_00000FDC:
    lis r21, lbl_807506A0@ha
    lwz r3, 0x848(r24)
    addi r21, r21, lbl_807506A0@l
    lfs f1, 0x44c(r1)
    addi r4, r21, 0x10a2
    li r5, 0x0
    bl fn_803D6F78
    lwz r3, 0x848(r24)
    addi r4, r21, 0x10a2
    lfs f1, 0x450(r1)
    li r5, 0x1
    bl fn_803D6F78
lbl_fn_803D2A6C_0000100C:
    mr r3, r31
    bl fn_8013C3A8
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000118C
    mr r3, r31
    bl fn_8038B648
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_0000118C
    mr r3, r31
    bl fn_80139ED0
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_0000118C
    mr r3, r31
    bl fn_8013C458
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000118C
    mr r3, r31
    bl fn_8013C458
    bl fn_8013C43C
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_0000118C
    bl fn_80121F00
    bl fn_803761A4
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000118C
    lis r3, lbl_807506A0@ha
    lfs f28, lbl_80885DDC
    lfs f26, lbl_80885D60
    mr r22, r24
    lfs f27, lbl_80885D58
    addi r21, r3, lbl_807506A0@l
    li r19, 0x0
    b lbl_fn_803D2A6C_0000117C
lbl_fn_803D2A6C_00001090:
    mr r4, r19
    addi r3, r24, 0x85c
    bl fn_803D7260
    lwz r3, 0x0(r3)
    lwz r0, 0x770(r24)
    cmplw r3, r0
    beq lbl_fn_803D2A6C_00001174
    mr r4, r19
    addi r3, r24, 0x85c
    bl fn_803D7260
    lwz r3, 0x0(r3)
    bl fn_8000DD0C
    addi r4, r21, 0x10c1
    bl fn_800132EC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000010E4
    mr r4, r3
    addi r3, r1, 0x290
    bl fn_8000D0F8
    addi r4, r1, 0x290
    b lbl_fn_803D2A6C_00001100
lbl_fn_803D2A6C_000010E4:
    mr r4, r19
    addi r3, r24, 0x85c
    bl fn_803D7260
    lwz r3, 0x0(r3)
    bl fn_80198C00
    bl fn_80315644
    addi r4, r3, 0xc
lbl_fn_803D2A6C_00001100:
    addi r3, r1, 0x440
    bl fn_8001047C
    lfs f0, 0x444(r1)
    fadds f0, f0, f28
    stfs f0, 0x444(r1)
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x434
    addi r5, r1, 0x440
    bl fn_800BFAC8
    lfs f0, 0x43c(r1)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_803D2A6C_00001174
    fcmpo cr0, f0, f26
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00001174
    lwz r3, 0x84c(r22)
    bl fn_803D6E2C
    lwz r3, 0x84c(r22)
    addi r4, r21, 0x10a2
    lfs f1, 0x434(r1)
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x84c(r22)
    addi r4, r21, 0x10a2
    lfs f1, 0x438(r1)
    li r5, 0x1
    bl fn_801F6D7C
lbl_fn_803D2A6C_00001174:
    addi r22, r22, 0x4
    addi r19, r19, 0x1
lbl_fn_803D2A6C_0000117C:
    addi r3, r24, 0x85c
    bl fn_80372574
    cmplw r19, r3
    blt lbl_fn_803D2A6C_00001090
lbl_fn_803D2A6C_0000118C:
    mr r3, r31
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_803D2A6C_00001414
    mr r3, r31
    bl fn_80267B28
    cmpwi r3, 0xf
    bne lbl_fn_803D2A6C_00001414
    mr r3, r31
    bl fn_80318F90
    mr r19, r3
    li r4, 0x0
    bl fn_803D6FD4
    mr r3, r31
    bl fn_803D6FDC
    mr r4, r3
    addi r3, r1, 0x428
    addi r4, r4, 0xc
    bl fn_8001047C
    addi r3, r1, 0x608
    bl fn_803D7280
    bl fn_801A03E0
    bl fn_801A0408
    mr r20, r3
    b lbl_fn_803D2A6C_0000126C
lbl_fn_803D2A6C_000011F0:
    mr r3, r20
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001260
    addi r3, r1, 0x41c
    bl fn_80057A64
    lwz r12, 0x0(r20)
    mr r3, r20
    addi r4, r1, 0x41c
    lwz r12, 0xb0(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001250
    addi r3, r1, 0x274
    addi r4, r1, 0x41c
    bl fn_8001047C
    mr r4, r3
    mr r5, r20
    addi r3, r1, 0x280
    bl fn_803D71DC
    addi r3, r1, 0x608
    addi r4, r1, 0x280
    bl fn_803D72C0
lbl_fn_803D2A6C_00001250:
    addi r3, r1, 0x608
    bl fn_803D72FC
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00001274
lbl_fn_803D2A6C_00001260:
    mr r3, r20
    bl fn_801A03EC
    mr r20, r3
lbl_fn_803D2A6C_0000126C:
    cmpwi r20, 0x0
    bne lbl_fn_803D2A6C_000011F0
lbl_fn_803D2A6C_00001274:
    lfs f24, lbl_80885E2C
    li r20, -0x1
    lfs f26, lbl_80885E34
    li r21, 0x0
    lfs f27, lbl_80885E30
    b lbl_fn_803D2A6C_000012EC
lbl_fn_803D2A6C_0000128C:
    mr r4, r21
    addi r3, r1, 0x608
    bl fn_803D731C
    mr r4, r3
    addi r3, r1, 0x410
    bl fn_8001047C
    addi r3, r1, 0x268
    addi r4, r1, 0x428
    addi r5, r1, 0x410
    bl fn_80013338
    addi r3, r1, 0x268
    bl fn_803D6EC0
    lfs f2, 0x42c(r1)
    lfs f0, 0x414(r1)
    fsubs f0, f2, f0
    fcmpo cr0, f0, f27
    ble lbl_fn_803D2A6C_000012E8
    fcmpo cr0, f0, f26
    bge lbl_fn_803D2A6C_000012E8
    fcmpo cr0, f1, f24
    bge lbl_fn_803D2A6C_000012E8
    mr r20, r21
    fmr f24, f1
lbl_fn_803D2A6C_000012E8:
    addi r21, r21, 0x1
lbl_fn_803D2A6C_000012EC:
    addi r3, r1, 0x608
    bl fn_80372574
    cmplw r21, r3
    blt lbl_fn_803D2A6C_0000128C
    cmpwi r20, 0x0
    blt lbl_fn_803D2A6C_0000137C
    lwz r3, 0x874(r24)
    bl fn_803D6E2C
    mr r4, r20
    addi r3, r1, 0x608
    bl fn_803D731C
    mr r21, r3
    bl fn_8008B964
    mr r4, r3
    mr r5, r21
    addi r3, r1, 0x404
    bl fn_800BFAC8
    lis r21, lbl_807506A0@ha
    lwz r3, 0x874(r24)
    addi r21, r21, lbl_807506A0@l
    lfs f1, 0x404(r1)
    addi r4, r21, 0x10a2
    li r5, 0x0
    bl fn_803D6F78
    lwz r3, 0x874(r24)
    addi r4, r21, 0x10a2
    lfs f1, 0x408(r1)
    li r5, 0x1
    bl fn_803D6F78
    mr r4, r20
    addi r3, r1, 0x608
    bl fn_803D731C
    mr r4, r3
    mr r3, r19
    lwz r4, 0xc(r4)
    bl fn_803D6FD4
lbl_fn_803D2A6C_0000137C:
    lis r21, lbl_807506A0@ha
    mr r23, r24
    addi r21, r21, lbl_807506A0@l
    li r19, 0x0
    li r25, 0x0
    b lbl_fn_803D2A6C_00001404
lbl_fn_803D2A6C_00001394:
    cmplw r20, r25
    beq lbl_fn_803D2A6C_000013F8
    lwz r3, 0x878(r23)
    bl fn_803D6E2C
    mr r4, r25
    addi r3, r1, 0x608
    bl fn_803D731C
    mr r22, r3
    bl fn_8008B964
    mr r4, r3
    mr r5, r22
    addi r3, r1, 0x3f8
    bl fn_800BFAC8
    lwz r3, 0x878(r23)
    addi r4, r21, 0x10a2
    lfs f1, 0x3f8(r1)
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x878(r23)
    addi r4, r21, 0x10a2
    lfs f1, 0x3fc(r1)
    li r5, 0x1
    bl fn_801F6D7C
    addi r23, r23, 0x4
    addi r19, r19, 0x1
lbl_fn_803D2A6C_000013F8:
    cmpwi r19, 0x4
    bge lbl_fn_803D2A6C_00001414
    addi r25, r25, 0x1
lbl_fn_803D2A6C_00001404:
    addi r3, r1, 0x608
    bl fn_80372574
    cmplw r25, r3
    blt lbl_fn_803D2A6C_00001394
lbl_fn_803D2A6C_00001414:
    mr r3, r31
    addi r4, r24, 0x50
    li r5, -0x1
    bl fn_803E0E10
    lwz r0, 0x728(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_000014E4
    bl fn_800F52F8
    bl fn_801231B0
    bl fn_801156C4
    bl fn_803D6FE4
    lwz r0, 0x724(r24)
    mr r21, r3
    cmpwi r0, 0x0
    bne lbl_fn_803D2A6C_000014A8
    lwz r3, 0x714(r24)
    bl fn_803D213C
    lwz r3, 0x71c(r24)
    bl fn_803D2A54
    lwz r3, 0x718(r24)
    bl fn_803D213C
    lwz r3, 0x720(r24)
    bl fn_803D2A54
    slwi r0, r21, 2
    add r3, r24, r0
    lwz r3, 0x714(r3)
    bl fn_803D2A54
    lis r3, lbl_80750618@ha
    lfs f1, lbl_80885D60
    lwz r4, lbl_80750618@l(r3)
    addi r3, r1, 0xc
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803D2A6C_000014A8:
    slwi r22, r21, 2
    add r21, r24, r22
    lwz r3, 0x714(r21)
    bl fn_803D6F44
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_000014CC
    lwz r3, 0x714(r21)
    bl fn_803D6E2C
    b lbl_fn_803D2A6C_000014D4
lbl_fn_803D2A6C_000014CC:
    lwz r3, 0x71c(r21)
    bl fn_803D6E2C
lbl_fn_803D2A6C_000014D4:
    lwz r3, 0x724(r24)
    addi r0, r3, 0x1
    stw r0, 0x724(r24)
    b lbl_fn_803D2A6C_000014EC
lbl_fn_803D2A6C_000014E4:
    li r0, 0x0
    stw r0, 0x724(r24)
lbl_fn_803D2A6C_000014EC:
    lwz r0, 0x738(r24)
    li r3, 0x0
    stw r3, 0x728(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00001630
    lfs f1, lbl_80885D58
    addi r3, r1, 0x3e8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_803D6FEC
    bl fn_800F52F8
    bl fn_80116BAC
    mr r4, r3
    addi r3, r1, 0x258
    li r5, 0x0
    bl fn_80124C6C
    addi r3, r1, 0x3e8
    addi r4, r1, 0x258
    bl fn_803D7000
    addi r3, r1, 0x248
    addi r4, r1, 0x3e8
    bl fn_803D7014
    lis r21, lbl_807506A0@ha
    mr r5, r3
    addi r21, r21, lbl_807506A0@l
    lwz r3, 0x72c(r24)
    addi r4, r21, 0x10c6
    bl fn_801F48C8
    addi r3, r1, 0x238
    addi r4, r1, 0x3e8
    bl fn_803D7014
    mr r5, r3
    lwz r3, 0x72c(r24)
    addi r4, r21, 0x10cc
    bl fn_801F48C8
    addi r3, r1, 0x228
    addi r4, r1, 0x3e8
    bl fn_803D7014
    mr r5, r3
    lwz r3, 0x730(r24)
    addi r4, r21, 0x10c6
    bl fn_801F48C8
    addi r3, r1, 0x218
    addi r4, r1, 0x3e8
    bl fn_803D7014
    mr r5, r3
    lwz r3, 0x730(r24)
    addi r4, r21, 0x10cc
    bl fn_801F48C8
    lwz r0, 0x734(r24)
    cmpwi r0, 0x0
    bne lbl_fn_803D2A6C_000015F8
    lwz r3, 0x730(r24)
    bl fn_803D2A54
    lwz r3, 0x72c(r24)
    bl fn_803D2A54
    lis r3, lbl_80750618@ha
    lfs f1, lbl_80885D60
    lwz r4, lbl_80750618@l(r3)
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803D2A6C_000015F8:
    lwz r3, 0x72c(r24)
    bl fn_803CFC64
    lfs f0, lbl_80885D68
    fcmpo cr0, f1, f0
    bge lbl_fn_803D2A6C_00001618
    lwz r3, 0x72c(r24)
    bl fn_803D6E2C
    b lbl_fn_803D2A6C_00001620
lbl_fn_803D2A6C_00001618:
    lwz r3, 0x730(r24)
    bl fn_803D6E2C
lbl_fn_803D2A6C_00001620:
    lwz r3, 0x734(r24)
    addi r0, r3, 0x1
    stw r0, 0x734(r24)
    b lbl_fn_803D2A6C_00001634
lbl_fn_803D2A6C_00001630:
    stw r3, 0x734(r24)
lbl_fn_803D2A6C_00001634:
    li r0, 0x0
    stw r0, 0x738(r24)
    addi r3, r1, 0x3dc
    bl fn_80057A64
    addi r3, r1, 0x3d0
    bl fn_80057A64
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r19, r3
    bl fn_8000DD0C
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x10c1
    bl fn_800132EC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001688
    mr r4, r3
    addi r3, r1, 0x208
    bl fn_8000D0F8
    addi r4, r1, 0x208
    b lbl_fn_803D2A6C_00001698
lbl_fn_803D2A6C_00001688:
    mr r3, r19
    bl fn_80198C00
    bl fn_80315644
    addi r4, r3, 0xc
lbl_fn_803D2A6C_00001698:
    addi r3, r1, 0x3dc
    bl fn_8000D124
    lfs f1, 0x3e0(r1)
    lfs f0, lbl_80885D68
    fadds f0, f1, f0
    stfs f0, 0x3e0(r1)
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x1fc
    addi r5, r1, 0x3dc
    bl fn_800BFAC8
    addi r3, r1, 0x3d0
    addi r4, r1, 0x1fc
    bl fn_8000D124
    mr r3, r19
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000016F4
    mr r3, r19
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000181C
lbl_fn_803D2A6C_000016F4:
    mr r3, r19
    bl fn_803D7028
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000181C
    bl fn_801156C4
    bl fn_803D703C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000181C
    lwz r3, 0x5b8(r24)
    bl fn_803D6E2C
    lis r21, lbl_807506A0@ha
    lwz r3, 0x5b8(r24)
    addi r21, r21, lbl_807506A0@l
    lfs f1, 0x3d0(r1)
    addi r4, r21, 0x10a2
    li r5, 0x0
    bl fn_803D6F78
    lwz r3, 0x5b8(r24)
    addi r4, r21, 0x10a2
    lfs f1, 0x3d4(r1)
    li r5, 0x1
    bl fn_803D6F78
    mr r3, r19
    bl fn_800F52F0
    lwz r0, 0x16c(r3)
    lis r3, lbl_80750650@ha
    lfd f1, lbl_80750650@l(r3)
    mr r3, r19
    xoris r0, r0, 0x8000
    stw r0, 0xa6c(r1)
    lfd f0, 0xa68(r1)
    fsubs f26, f0, f1
    bl fn_800F52F0
    lfs f0, 0x4(r3)
    addi r4, r21, 0x10d6
    lwz r3, 0x5b8(r24)
    fdivs f1, f0, f26
    bl fn_803D6EF8
    lwz r3, 0x5b8(r24)
    addi r4, r21, 0x10dd
    lfs f1, lbl_80885E38
    bl fn_803D6EF8
    lwz r3, 0x5b8(r24)
    addi r4, r21, 0x10e4
    lfs f1, lbl_80885E3C
    bl fn_803D6EF8
    lwz r3, 0x5b8(r24)
    addi r4, r21, 0x10eb
    lfs f1, lbl_80885E34
    bl fn_803D6EF8
    mr r3, r19
    bl fn_801799BC
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_803D2A6C_000017E8
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803D2A6C_000017E8
    rlwinm r0, r3, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_803D2A6C_00001804
lbl_fn_803D2A6C_000017E8:
    lis r4, lbl_807506A0@ha
    lwz r3, 0x5b8(r24)
    addi r4, r4, lbl_807506A0@l
    lfs f1, lbl_80885D60
    addi r4, r4, 0x10f2
    bl fn_803D6EF8
    b lbl_fn_803D2A6C_0000181C
lbl_fn_803D2A6C_00001804:
    lwz r3, 0x5b8(r24)
    bl fn_803D2A54
    lwz r3, 0x5b8(r24)
    addi r4, r21, 0x10f2
    lfs f1, lbl_80885D58
    bl fn_803D6EF8
lbl_fn_803D2A6C_0000181C:
    mr r3, r28
    bl fn_803D6F70
    cmpwi r3, 0x6
    bne lbl_fn_803D2A6C_00001838
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001BEC
lbl_fn_803D2A6C_00001838:
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001864
    bl fn_80121F00
    bl fn_803D7058
    bl fn_803D7044
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00001864
    mr r3, r24
    li r4, 0x1
    bl fn_803DF648
lbl_fn_803D2A6C_00001864:
    lis r4, lbl_80750650@ha
    lis r3, lbl_807506A0@ha
    lfd f26, lbl_80750650@l(r4)
    addi r31, r3, lbl_807506A0@l
    lfs f29, lbl_80885D58
    li r27, 0x0
    lfs f27, lbl_80885E44
    li r23, 0x0
    lfs f28, lbl_80885E40
    li r30, -0x1
    li r22, 0x0
    b lbl_fn_803D2A6C_00001BD4
lbl_fn_803D2A6C_00001894:
    mr r4, r27
    addi r3, r24, 0x2f0
    bl fn_803D732C
    lwz r26, 0x0(r3)
    mr r4, r27
    addi r3, r24, 0x2f0
    lwz r25, 0x8(r26)
    bl fn_803D732C
    mr r4, r3
    mr r3, r25
    lwz r4, 0x0(r4)
    mr r5, r27
    bl fn_803E0E10
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000191C
    bl fn_800F7F90
    bl fn_803D6E1C
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_000018F4
    bl fn_800F7F90
    bl fn_803D7060
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_0000191C
lbl_fn_803D2A6C_000018F4:
    add r21, r24, r23
    lwz r0, 0x334(r21)
    cmpwi r0, 0x0
    blt lbl_fn_803D2A6C_00001BCC
    slwi r0, r0, 2
    add r3, r21, r0
    lwz r3, 0x318(r3)
    bl fn_803D215C
    stw r30, 0x334(r21)
    b lbl_fn_803D2A6C_00001BCC
lbl_fn_803D2A6C_0000191C:
    mr r3, r25
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001978
    add r21, r24, r23
    lwz r0, 0x334(r21)
    cmpwi r0, 0x0
    blt lbl_fn_803D2A6C_00001978
    lwz r3, 0x31c(r21)
    bl fn_803D733C
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_0000195C
    lwz r3, 0x31c(r21)
    bl fn_803D215C
    stw r30, 0x334(r21)
lbl_fn_803D2A6C_0000195C:
    lwz r3, 0x318(r21)
    bl fn_803D733C
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00001978
    lwz r3, 0x318(r21)
    bl fn_803D215C
    stw r30, 0x334(r21)
lbl_fn_803D2A6C_00001978:
    bl fn_800F52F8
    bl fn_803D6F60
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00001B60
    add r20, r24, r23
    lwz r21, 0x334(r20)
    cmpwi r21, 0x0
    blt lbl_fn_803D2A6C_00001AD0
    slwi r0, r21, 2
    add r3, r20, r0
    lwz r18, 0x318(r3)
    mr r3, r18
    bl fn_803D6E2C
    xoris r0, r27, 0x8000
    stw r0, 0xa64(r1)
    mr r3, r18
    addi r4, r31, 0x109d
    lfd f0, 0xa60(r1)
    fsubs f1, f0, f26
    bl fn_801F6C80
    cmpwi r21, 0x0
    bne lbl_fn_803D2A6C_00001ABC
    mr r3, r25
    bl fn_803D707C
    fmr f30, f1
    mr r3, r25
    bl fn_803D7074
    fsubs f0, f1, f30
    fctiwz f0, f0
    stfd f0, 0xa70(r1)
    lwz r19, 0xa74(r1)
    mr r3, r19
    bl fn_803CE8A8
    mr r21, r3
    mr r3, r19
    bl fn_803CE854
    cmpwi r3, 0x0
    mr r19, r3
    bge lbl_fn_803D2A6C_00001A1C
    li r19, 0x0
lbl_fn_803D2A6C_00001A1C:
    mr r3, r18
    mr r5, r19
    addi r4, r31, 0x10f7
    li r6, 0x0
    bl fn_801F8598
    mr r3, r18
    mr r5, r19
    addi r4, r31, 0x10fb
    li r6, 0x0
    bl fn_801F8598
    mr r3, r18
    mr r5, r19
    addi r4, r31, 0x1101
    li r6, 0x0
    bl fn_801F8598
    mr r3, r18
    bl fn_803D737C
    fmr f31, f1
    mr r3, r18
    bl fn_801F6C2C
    fmr f30, f1
    mr r3, r25
    bl fn_803D707C
    fcmpo cr0, f1, f29
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00001A98
    fcmpo cr0, f31, f30
    bge lbl_fn_803D2A6C_00001A98
    mr r3, r18
    bl fn_803D215C
    b lbl_fn_803D2A6C_00001ABC
lbl_fn_803D2A6C_00001A98:
    fcmpo cr0, f31, f28
    blt lbl_fn_803D2A6C_00001ABC
    xoris r0, r21, 0x8000
    stw r0, 0xa6c(r1)
    mr r3, r18
    lfd f0, 0xa68(r1)
    fsubs f0, f0, f26
    fsubs f1, f27, f0
    bl fn_803D7384
lbl_fn_803D2A6C_00001ABC:
    mr r3, r18
    bl fn_803D733C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001AD0
    stw r30, 0x334(r20)
lbl_fn_803D2A6C_00001AD0:
    add r20, r24, r23
    li r18, 0x0
    b lbl_fn_803D2A6C_00001B4C
lbl_fn_803D2A6C_00001ADC:
    mr r4, r18
    addi r3, r24, 0x30c
    bl fn_803D738C
    lwz r0, 0x4(r3)
    cmplw r0, r25
    bne lbl_fn_803D2A6C_00001B48
    mr r4, r18
    addi r3, r24, 0x30c
    bl fn_803D738C
    lwz r19, 0x0(r3)
    stw r19, 0x334(r20)
    slwi r0, r19, 2
    add r21, r20, r0
    lwz r3, 0x318(r21)
    bl fn_803D2A60
    bl fn_803D70A0
    addi r4, r19, 0xe3
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x318(r21)
    addi r4, r31, 0x1107
    bl fn_801F837C
    cmpwi r19, 0x1
    bne lbl_fn_803D2A6C_00001B48
    lwz r0, 0x2660(r24)
    ori r0, r0, 0x40
    stw r0, 0x2660(r24)
lbl_fn_803D2A6C_00001B48:
    addi r18, r18, 0x1
lbl_fn_803D2A6C_00001B4C:
    addi r3, r24, 0x30c
    bl fn_803D739C
    cmplw r18, r3
    blt lbl_fn_803D2A6C_00001ADC
    b lbl_fn_803D2A6C_00001B68
lbl_fn_803D2A6C_00001B60:
    add r3, r24, r23
    stw r30, 0x334(r3)
lbl_fn_803D2A6C_00001B68:
    lwz r0, 0x4(r26)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00001B94
    lwz r3, 0x0(r26)
    li r0, 0x14
    addi r3, r3, 0x1
    cmpwi r3, 0x14
    bge lbl_fn_803D2A6C_00001B8C
    mr r0, r3
lbl_fn_803D2A6C_00001B8C:
    stw r0, 0x0(r26)
    b lbl_fn_803D2A6C_00001BB0
lbl_fn_803D2A6C_00001B94:
    lwz r3, 0x0(r26)
    subi r3, r3, 0x1
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    stw r0, 0x0(r26)
lbl_fn_803D2A6C_00001BB0:
    lwz r0, 0x4(r26)
    cmpwi r0, 0x0
    bne lbl_fn_803D2A6C_00001BCC
    lwz r0, 0x0(r26)
    cmpwi r0, 0x0
    bgt lbl_fn_803D2A6C_00001BCC
    stw r22, 0x8(r26)
lbl_fn_803D2A6C_00001BCC:
    addi r27, r27, 0x1
    addi r23, r23, 0x20
lbl_fn_803D2A6C_00001BD4:
    addi r3, r24, 0x2f0
    bl fn_80372574
    cmplw r27, r3
    blt lbl_fn_803D2A6C_00001894
    addi r3, r24, 0x30c
    bl fn_803CF78C
lbl_fn_803D2A6C_00001BEC:
    mr r3, r28
    bl fn_803D6F70
    cmpwi r3, 0x6
    beq lbl_fn_803D2A6C_00001E2C
    li r18, 0x0
    bl fn_801A03E0
    bl fn_801A0408
    lis r5, lbl_80750650@ha
    lis r4, lbl_807506A0@ha
    lfd f29, lbl_80750650@l(r5)
    mr r19, r3
    lfs f27, lbl_80885D60
    mr r21, r24
    lfs f28, lbl_80885D58
    addi r23, r4, lbl_807506A0@l
    b lbl_fn_803D2A6C_00001E24
lbl_fn_803D2A6C_00001C2C:
    mr r3, r19
    bl fn_800F52F0
    lwz r0, 0x16c(r3)
    mr r25, r3
    lwz r4, 0x170(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xa64(r1)
    lfs f1, 0x4(r3)
    cmpwi r4, 0x0
    lfd f0, 0xa60(r1)
    fsubs f0, f0, f29
    fdivs f24, f1, f0
    mr r3, r19
    bl fn_803D70A8
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001E18
    mr r3, r19
    li r20, 0x1
    bl fn_803CFC58
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00001CB8
    mr r3, r19
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00001CB8
    mr r3, r19
    bl fn_803D6EA0
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00001CB8
    mr r3, r19
    bl fn_800F530C
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803D2A6C_00001CBC
lbl_fn_803D2A6C_00001CB8:
    li r20, 0x0
lbl_fn_803D2A6C_00001CBC:
    cmpwi r20, 0x0
    bne lbl_fn_803D2A6C_00001D4C
    mr r3, r19
    bl fn_800F7FB4
    cmpwi r3, 0x5
    bne lbl_fn_803D2A6C_00001D4C
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001D4C
    mr r3, r19
    bl fn_8000D9F8
    subis r0, r3, 0x4
    cmplwi r0, 0x9a85
    bne lbl_fn_803D2A6C_00001D20
    bl fn_80121F00
    li r4, 0x4ba
    bl fn_80370174
    cmpwi r3, 0x1e
    beq lbl_fn_803D2A6C_00001D1C
    bl fn_80121F00
    li r4, 0x4c2
    bl fn_80370174
    cmpwi r3, 0xe
    bne lbl_fn_803D2A6C_00001D20
lbl_fn_803D2A6C_00001D1C:
    li r20, 0x1
lbl_fn_803D2A6C_00001D20:
    bl fn_80121F00
    li r4, 0x4ba
    bl fn_80370174
    cmpwi r3, 0x1f
    beq lbl_fn_803D2A6C_00001D48
    bl fn_80121F00
    li r4, 0x4c2
    bl fn_80370174
    cmpwi r3, 0xf
    bne lbl_fn_803D2A6C_00001D4C
lbl_fn_803D2A6C_00001D48:
    li r20, 0x1
lbl_fn_803D2A6C_00001D4C:
    bl fn_800F52F8
    bl fn_803D6F60
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803D2A6C_00001D64
    li r20, 0x0
lbl_fn_803D2A6C_00001D64:
    cmpwi r20, 0x0
    beq lbl_fn_803D2A6C_00001E18
    cmpwi r18, 0x0
    bne lbl_fn_803D2A6C_00001DA8
    lwz r3, 0x3d8(r24)
    bl fn_803D6E2C
    mr r3, r19
    bl fn_803D7100
    mr r4, r3
    lwz r3, 0x3d8(r24)
    lwz r5, 0x8(r4)
    addi r4, r23, 0x1110
    bl fn_803D70B4
    lwz r3, 0x3d8(r24)
    addi r4, r23, 0x111a
    lfs f1, lbl_80885D60
    bl fn_803D6EF8
lbl_fn_803D2A6C_00001DA8:
    cmpwi r18, 0x1
    bne lbl_fn_803D2A6C_00001DC0
    lwz r3, 0x3d8(r24)
    addi r4, r23, 0x111a
    lfs f1, lbl_80885D58
    bl fn_803D6EF8
lbl_fn_803D2A6C_00001DC0:
    lwz r3, 0x3dc(r21)
    bl fn_803D6E2C
    fmr f1, f24
    lwz r3, 0x3dc(r21)
    addi r4, r23, 0x10d6
    bl fn_801F6C80
    lfs f0, 0x174(r25)
    fcmpo cr0, f0, f28
    ble lbl_fn_803D2A6C_00001E00
    fcmpo cr0, f24, f27
    bge lbl_fn_803D2A6C_00001E00
    fmr f1, f27
    lwz r3, 0x3dc(r21)
    addi r4, r23, 0x10f2
    bl fn_801F6C80
    b lbl_fn_803D2A6C_00001E10
lbl_fn_803D2A6C_00001E00:
    lwz r3, 0x3dc(r21)
    addi r4, r23, 0x10f2
    lfs f1, lbl_80885D58
    bl fn_801F6C80
lbl_fn_803D2A6C_00001E10:
    addi r21, r21, 0x4
    addi r18, r18, 0x1
lbl_fn_803D2A6C_00001E18:
    mr r3, r19
    bl fn_801A03EC
    mr r19, r3
lbl_fn_803D2A6C_00001E24:
    cmpwi r19, 0x0
    bne lbl_fn_803D2A6C_00001C2C
lbl_fn_803D2A6C_00001E2C:
    addi r3, r24, 0x8d0
    bl fn_803D6EDC
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00001E70
    bl fn_8013A194
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00001E70
    addi r3, r24, 0x8d0
    li r4, 0x0
    bl fn_803D71F4
    mr r4, r3
    addi r3, r1, 0x1f0
    bl fn_8001047C
    mr r23, r3
    bl fn_8013A194
    mr r4, r23
    bl fn_8010D320
lbl_fn_803D2A6C_00001E70:
    lis r23, lbl_807506A0@ha
    lfs f27, lbl_80885DE0
    lfs f28, lbl_80885D60
    mr r21, r24
    lfs f29, lbl_80885D58
    addi r23, r23, lbl_807506A0@l
    lfs f30, lbl_80885E4C
    li r18, 0x0
    lfs f31, lbl_80885E48
    b lbl_fn_803D2A6C_00001FC8
lbl_fn_803D2A6C_00001E98:
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0xc(r3)
    fcmpo cr0, f0, f31
    blt lbl_fn_803D2A6C_00001FC0
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0xc(r3)
    fcmpo cr0, f30, f0
    blt lbl_fn_803D2A6C_00001FC0
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0x10(r3)
    fcmpo cr0, f0, f31
    blt lbl_fn_803D2A6C_00001FC0
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0x10(r3)
    fcmpo cr0, f30, f0
    blt lbl_fn_803D2A6C_00001FC0
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0x14(r3)
    fcmpo cr0, f0, f29
    blt lbl_fn_803D2A6C_00001FC0
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0x14(r3)
    fcmpo cr0, f28, f0
    blt lbl_fn_803D2A6C_00001FC0
    lwz r3, 0x8a0(r21)
    bl fn_803D6E2C
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    mr r4, r3
    lwz r3, 0x8a0(r21)
    lfs f1, 0xc(r4)
    addi r4, r23, 0x10a2
    li r5, 0x0
    bl fn_801F6D7C
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    mr r4, r3
    lwz r3, 0x8a0(r21)
    lfs f1, 0x10(r4)
    addi r4, r23, 0x10a2
    li r5, 0x1
    bl fn_801F6D7C
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0x18(r3)
    addi r4, r23, 0x10ad
    lwz r3, 0x8a0(r21)
    li r5, 0x2
    fmuls f1, f27, f0
    bl fn_801F6D7C
    mr r4, r18
    addi r3, r24, 0x8d0
    bl fn_803D71F4
    lfs f0, 0x1c(r3)
    addi r4, r23, 0x10ad
    lwz r3, 0x8a0(r21)
    li r5, 0x3
    fmuls f1, f27, f0
    bl fn_801F6D7C
lbl_fn_803D2A6C_00001FC0:
    addi r21, r21, 0x4
    addi r18, r18, 0x1
lbl_fn_803D2A6C_00001FC8:
    addi r3, r24, 0x8d0
    bl fn_80372574
    cmplw r18, r3
    blt lbl_fn_803D2A6C_00001E98
    addi r3, r24, 0x8d0
    bl fn_803CF734
    lwz r3, 0xa84(r24)
    bl fn_803D6F44
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00001FF8
    lwz r3, 0xa84(r24)
    bl fn_803D6E2C
lbl_fn_803D2A6C_00001FF8:
    lwz r3, 0xa88(r24)
    bl fn_803D6F44
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00002154
    addi r3, r1, 0x3c4
    addi r4, r24, 0x888
    bl fn_8001047C
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x1e4
    addi r5, r1, 0x3c4
    bl fn_800BFAC8
    addi r3, r1, 0x3c4
    addi r4, r1, 0x1e4
    bl fn_8000D124
    addi r3, r1, 0x3b8
    addi r4, r24, 0x894
    bl fn_8001047C
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x1d8
    addi r5, r1, 0x3b8
    bl fn_800BFAC8
    addi r3, r1, 0x3b8
    addi r4, r1, 0x1d8
    bl fn_8000D124
    lfs f3, 0x3c4(r1)
    addi r3, r1, 0x28
    lfs f2, 0x3b8(r1)
    lfs f1, 0x3c8(r1)
    lfs f0, 0x3bc(r1)
    fadds f3, f3, f2
    lfs f2, lbl_80885DFC
    fadds f0, f1, f0
    fmuls f1, f2, f3
    fmuls f2, f2, f0
    bl fn_800F84BC
    lfs f1, 0x3c8(r1)
    lfs f0, 0x3bc(r1)
    fsubs f1, f1, f0
    bl fn_80013404
    lfs f3, lbl_80885DFC
    lfs f2, 0x3c4(r1)
    lfs f0, 0x3b8(r1)
    fmuls f27, f3, f1
    fsubs f1, f2, f0
    bl fn_80013404
    lfs f0, lbl_80885DFC
    fmr f2, f27
    addi r3, r1, 0x20
    fmuls f1, f0, f1
    bl fn_800F84BC
    lfs f1, 0x20(r1)
    lfs f2, lbl_80885E50
    lfs f0, 0x24(r1)
    fadds f1, f1, f2
    fadds f0, f0, f2
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r3, 0xa88(r24)
    bl fn_803D6E2C
    lis r23, lbl_807506A0@ha
    lwz r3, 0xa88(r24)
    addi r23, r23, lbl_807506A0@l
    lfs f1, 0x28(r1)
    addi r4, r23, 0x10a2
    li r5, 0x0
    bl fn_803D6F78
    lwz r3, 0xa88(r24)
    addi r4, r23, 0x10a2
    lfs f1, 0x2c(r1)
    li r5, 0x1
    bl fn_803D6F78
    lfs f1, lbl_80885DE0
    addi r4, r23, 0x10ad
    lfs f0, 0x20(r1)
    li r5, 0x2
    lwz r3, 0xa88(r24)
    fmuls f1, f1, f0
    bl fn_803D6F78
    lfs f1, lbl_80885DE0
    addi r4, r23, 0x10ad
    lfs f0, 0x24(r1)
    li r5, 0x3
    lwz r3, 0xa88(r24)
    fmuls f1, f1, f0
    bl fn_803D6F78
lbl_fn_803D2A6C_00002154:
    lwz r0, 0xd8c(r24)
    cmpwi r0, 0x0
    ble lbl_fn_803D2A6C_00002194
    lwz r0, 0xd84(r24)
    cmpwi r0, 0x0
    bne lbl_fn_803D2A6C_00002194
    lwz r3, 0xd70(r24)
    bl fn_803D2A54
    lwz r3, 0xd74(r24)
    bl fn_803D2A54
    lwz r0, 0xd8c(r24)
    li r4, 0x0
    li r3, 0x1
    stw r4, 0xd78(r24)
    stw r3, 0xd84(r24)
    stw r0, 0xd88(r24)
lbl_fn_803D2A6C_00002194:
    lwz r0, 0xd84(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00002428
    lfs f1, lbl_80885D58
    addi r3, r1, 0x3a8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_803D6FEC
    bl fn_801156BC
    li r4, 0x0
    bl fn_800A58D0
    addi r3, r1, 0x580
    li r4, 0x0
    li r5, 0x40
    bl memset
    lwz r0, 0xd88(r24)
    cmpwi r0, 0x1
    beq lbl_fn_803D2A6C_000021EC
    cmpwi r0, 0x2
    beq lbl_fn_803D2A6C_0000222C
    b lbl_fn_803D2A6C_00002268
lbl_fn_803D2A6C_000021EC:
    bl fn_803D70A0
    li r4, 0x1c3
    bl fn_803D7084
    mr r4, r3
    addi r3, r1, 0x580
    bl fn_80686A64
    bl fn_800F52F8
    bl fn_80116BAC
    mr r4, r3
    addi r3, r1, 0x1c8
    li r5, 0x0
    bl fn_80124C6C
    addi r3, r1, 0x3a8
    addi r4, r1, 0x1c8
    bl fn_803D7000
    b lbl_fn_803D2A6C_00002268
lbl_fn_803D2A6C_0000222C:
    bl fn_803D70A0
    li r4, 0x1c4
    bl fn_803D7084
    mr r4, r3
    addi r3, r1, 0x580
    bl fn_80686A64
    bl fn_800F52F8
    bl fn_80116BAC
    mr r4, r3
    addi r3, r1, 0x1b8
    li r5, 0x8
    bl fn_80124C6C
    addi r3, r1, 0x3a8
    addi r4, r1, 0x1b8
    bl fn_803D7000
lbl_fn_803D2A6C_00002268:
    lis r23, lbl_807506A0@ha
    lwz r3, 0xd70(r24)
    addi r23, r23, lbl_807506A0@l
    addi r5, r1, 0x580
    addi r4, r23, 0x1122
    bl fn_803D70B4
    lwz r3, 0xd70(r24)
    addi r4, r23, 0x1130
    addi r5, r1, 0x580
    bl fn_803D70B4
    lwz r3, 0xd74(r24)
    addi r4, r23, 0x1122
    addi r5, r1, 0x580
    bl fn_803D70B4
    lwz r3, 0xd74(r24)
    addi r4, r23, 0x1130
    addi r5, r1, 0x580
    bl fn_803D70B4
    addi r3, r1, 0x1a8
    addi r4, r1, 0x3a8
    bl fn_803D7014
    mr r5, r3
    lwz r3, 0xd70(r24)
    addi r4, r23, 0x10c6
    bl fn_801F48C8
    addi r3, r1, 0x198
    addi r4, r1, 0x3a8
    bl fn_803D7014
    mr r5, r3
    lwz r3, 0xd70(r24)
    addi r4, r23, 0x10cc
    bl fn_801F48C8
    addi r3, r1, 0x188
    addi r4, r1, 0x3a8
    bl fn_803D7014
    mr r5, r3
    lwz r3, 0xd74(r24)
    addi r4, r23, 0x10c6
    bl fn_801F48C8
    addi r3, r1, 0x178
    addi r4, r1, 0x3a8
    bl fn_803D7014
    mr r5, r3
    lwz r3, 0xd74(r24)
    addi r4, r23, 0x10cc
    bl fn_801F48C8
    lwz r3, 0xd74(r24)
    bl fn_803CFC6C
    lfs f0, lbl_80885D60
    lwz r3, 0xd74(r24)
    fsubs f27, f1, f0
    bl fn_803CFC64
    fcmpo cr0, f1, f27
    cror eq, gt, eq
    bne lbl_fn_803D2A6C_00002358
    lwz r3, 0xd74(r24)
    bl fn_803D2A54
    lwz r3, 0xd78(r24)
    addi r0, r3, 0x1
    stw r0, 0xd78(r24)
lbl_fn_803D2A6C_00002358:
    lwz r3, 0xd78(r24)
    lwz r0, 0xd7c(r24)
    cmpw r3, r0
    blt lbl_fn_803D2A6C_00002374
    lwz r0, 0xd80(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_000023B8
lbl_fn_803D2A6C_00002374:
    lwz r3, 0xd70(r24)
    bl fn_803CFC64
    lfs f0, lbl_80885E54
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00002394
    lwz r3, 0xd70(r24)
    bl fn_803D6E2C
lbl_fn_803D2A6C_00002394:
    lwz r3, 0xd70(r24)
    bl fn_803CFC64
    lfs f0, lbl_80885E54
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803D2A6C_00002428
    lwz r3, 0xd74(r24)
    bl fn_803D6E2C
    b lbl_fn_803D2A6C_00002428
lbl_fn_803D2A6C_000023B8:
    lwz r3, 0xd70(r24)
    bl fn_803CFC64
    lfs f0, lbl_80885E54
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_000023DC
    lwz r3, 0xd70(r24)
    lfs f1, lbl_80885E24
    bl fn_803D6F68
lbl_fn_803D2A6C_000023DC:
    lwz r3, 0xd70(r24)
    bl fn_803CFC6C
    fmr f27, f1
    lwz r3, 0xd70(r24)
    bl fn_803CFC64
    fcmpo cr0, f1, f27
    bge lbl_fn_803D2A6C_00002404
    lwz r3, 0xd70(r24)
    bl fn_803D6E2C
    b lbl_fn_803D2A6C_00002420
lbl_fn_803D2A6C_00002404:
    li r0, 0x0
    stw r0, 0xd84(r24)
    lwz r3, 0xd74(r24)
    stw r0, 0xd88(r24)
    stw r0, 0xd80(r24)
    stw r0, 0xd78(r24)
    bl fn_803D2A54
lbl_fn_803D2A6C_00002420:
    li r0, 0x0
    stw r0, 0xd8c(r24)
lbl_fn_803D2A6C_00002428:
    mr r3, r28
    bl fn_803D6F70
    cmpwi r3, 0x6
    beq lbl_fn_803D2A6C_00002ADC
    mr r3, r28
    bl fn_803D6F70
    cmpwi r3, 0x5
    beq lbl_fn_803D2A6C_00002ADC
    lis r3, lbl_807506A0@ha
    lfs f28, lbl_80885D58
    lfs f27, lbl_80885E5C
    mr r30, r24
    lfs f30, lbl_80885E54
    addi r23, r3, lbl_807506A0@l
    li r25, 0x0
lbl_fn_803D2A6C_00002464:
    addi r3, r24, 0xc38
    li r26, 0x0
    li r27, 0x0
    bl fn_80372574
    cmpw r25, r3
    bge lbl_fn_803D2A6C_00002A6C
    mr r4, r25
    addi r3, r24, 0xc38
    bl fn_803D73A4
    lfs f24, lbl_80885D58
    mr r31, r3
    bl fn_80121F00
    bl fn_80122550
    bl fn_803D6EEC
    bl fn_80113CCC
    mr r4, r3
    addi r3, r1, 0x398
    addi r5, r31, 0x4
    bl fn_80013338
    addi r3, r1, 0x398
    bl fn_8000D3A4
    fmr f25, f1
    addi r3, r1, 0x398
    bl fn_800F7FF0
    fcmpo cr0, f25, f30
    blt lbl_fn_803D2A6C_00002ACC
    lwz r0, 0x0(r31)
    cmpwi r0, 0x5
    beq lbl_fn_803D2A6C_000024FC
    cmpwi r0, 0x2
    beq lbl_fn_803D2A6C_00002518
    cmpwi r0, 0x1
    beq lbl_fn_803D2A6C_00002528
    cmpwi r0, 0x3
    beq lbl_fn_803D2A6C_00002528
    cmpwi r0, 0x4
    beq lbl_fn_803D2A6C_00002538
    b lbl_fn_803D2A6C_00002544
lbl_fn_803D2A6C_000024FC:
    lwz r26, 0xb38(r30)
    lwz r27, 0xb3c(r30)
    mr r3, r26
    bl fn_80202D00
    bl fn_801F6C2C
    fmr f24, f1
    b lbl_fn_803D2A6C_00002544
lbl_fn_803D2A6C_00002518:
    lwz r26, 0xb40(r30)
    lwz r27, 0xb44(r30)
    lfs f24, lbl_80885D68
    b lbl_fn_803D2A6C_00002544
lbl_fn_803D2A6C_00002528:
    lwz r26, 0xb50(r30)
    lwz r27, 0xb54(r30)
    lfs f24, lbl_80885D68
    b lbl_fn_803D2A6C_00002544
lbl_fn_803D2A6C_00002538:
    lwz r26, 0xb48(r30)
    lwz r27, 0xb4c(r30)
    lfs f24, lbl_80885D68
lbl_fn_803D2A6C_00002544:
    cmpwi r26, 0x0
    beq lbl_fn_803D2A6C_000027AC
    cmpwi r27, 0x0
    beq lbl_fn_803D2A6C_000027AC
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_000025F4
    lwz r0, 0x0(r31)
    cmpwi r0, 0x5
    bne lbl_fn_803D2A6C_000025B8
    mr r3, r27
    bl fn_80202D00
    li r4, 0x0
    bl fn_803D2148
    mr r3, r27
    bl fn_80202D00
    bl fn_801F6C2C
    fmr f29, f1
    mr r3, r27
    bl fn_80202D00
    bl fn_803D737C
    fcmpo cr0, f1, f29
    bge lbl_fn_803D2A6C_000025A8
    mr r3, r27
    bl fn_803D6E2C
lbl_fn_803D2A6C_000025A8:
    mr r3, r26
    bl fn_80202D00
    bl fn_803D2A60
    b lbl_fn_803D2A6C_000027AC
lbl_fn_803D2A6C_000025B8:
    mr r3, r26
    bl fn_80202D00
    bl fn_803D737C
    fcmpo cr0, f1, f24
    bge lbl_fn_803D2A6C_000025DC
    mr r3, r26
    bl fn_80202D00
    fmr f1, f24
    bl fn_803D7384
lbl_fn_803D2A6C_000025DC:
    mr r3, r26
    bl fn_803D6E2C
    mr r3, r27
    bl fn_80202D00
    bl fn_803D2A60
    b lbl_fn_803D2A6C_000027AC
lbl_fn_803D2A6C_000025F4:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00002688
    lwz r0, 0x0(r31)
    cmpwi r0, 0x5
    bne lbl_fn_803D2A6C_0000264C
    mr r3, r27
    bl fn_80202D00
    li r4, 0x0
    bl fn_803D2148
    mr r3, r27
    bl fn_80202D00
    bl fn_801F6C2C
    fmr f29, f1
    mr r3, r27
    bl fn_80202D00
    bl fn_803D737C
    fcmpo cr0, f1, f29
    bge lbl_fn_803D2A6C_000027AC
    mr r3, r27
    bl fn_803D6E2C
    b lbl_fn_803D2A6C_000027AC
lbl_fn_803D2A6C_0000264C:
    mr r3, r26
    bl fn_80202D00
    bl fn_801F6C2C
    fmr f29, f1
    mr r3, r26
    bl fn_80202D00
    bl fn_803D737C
    fcmpo cr0, f1, f29
    bge lbl_fn_803D2A6C_00002678
    mr r3, r26
    bl fn_803D6E2C
lbl_fn_803D2A6C_00002678:
    mr r3, r27
    bl fn_80202D00
    bl fn_803D2A60
    b lbl_fn_803D2A6C_000027AC
lbl_fn_803D2A6C_00002688:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x5
    beq lbl_fn_803D2A6C_000026B4
    mr r3, r26
    bl fn_80202D00
    bl fn_803D737C
    fcmpo cr0, f1, f24
    ble lbl_fn_803D2A6C_000026B4
    mr r3, r26
    bl fn_80202D00
    bl fn_803D2A60
lbl_fn_803D2A6C_000026B4:
    addi r3, r24, 0xc38
    bl fn_80372574
    mr r18, r3
    li r19, 0x0
    b lbl_fn_803D2A6C_000026E8
lbl_fn_803D2A6C_000026C8:
    mr r4, r19
    addi r3, r24, 0xc38
    bl fn_803D73A4
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_000026E4
    subi r18, r18, 0x1
lbl_fn_803D2A6C_000026E4:
    addi r19, r19, 0x1
lbl_fn_803D2A6C_000026E8:
    addi r3, r24, 0xc38
    bl fn_80372574
    cmplw r19, r3
    blt lbl_fn_803D2A6C_000026C8
    lwz r0, 0x0(r31)
    cmpwi r0, 0x5
    bne lbl_fn_803D2A6C_0000273C
    lwz r0, 0xd6c(r24)
    cmpwi r0, 0x0
    ble lbl_fn_803D2A6C_0000273C
    cmpw r0, r18
    blt lbl_fn_803D2A6C_0000273C
    mr r3, r26
    bl fn_80202D00
    bl fn_803D737C
    fcmpu cr0, f28, f1
    bne lbl_fn_803D2A6C_0000273C
    mr r3, r26
    bl fn_80202D00
    fmr f1, f24
    bl fn_803D7384
lbl_fn_803D2A6C_0000273C:
    mr r3, r26
    bl fn_80202D00
    bl fn_803D737C
    fcmpo cr0, f1, f24
    bge lbl_fn_803D2A6C_0000277C
    lwz r3, 0x814(r24)
    bl fn_803D6F44
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00002770
    lwz r3, 0x814(r24)
    bl fn_803CFC58
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000027AC
lbl_fn_803D2A6C_00002770:
    mr r3, r26
    bl fn_803D6E2C
    b lbl_fn_803D2A6C_000027AC
lbl_fn_803D2A6C_0000277C:
    mr r3, r26
    bl fn_80202D00
    bl fn_803D737C
    fcmpo cr0, f1, f24
    cror eq, gt, eq
    bne lbl_fn_803D2A6C_000027AC
    mr r3, r27
    bl fn_80202D00
    li r4, 0x1
    bl fn_803D2148
    mr r3, r27
    bl fn_803D6E2C
lbl_fn_803D2A6C_000027AC:
    lfs f1, lbl_80885E58
    addi r3, r1, 0x168
    addi r4, r1, 0x398
    bl fn_800F72CC
    addi r3, r1, 0x38c
    addi r4, r31, 0x4
    addi r5, r1, 0x168
    bl fn_80013410
    stfs f28, 0x39c(r1)
    addi r3, r1, 0x398
    bl fn_800F7FF0
    cmpwi r27, 0x0
    beq lbl_fn_803D2A6C_00002858
    mr r3, r27
    bl fn_803D7108
    lfs f1, lbl_80885D58
    mr r31, r3
    lfs f3, lbl_80885D60
    addi r3, r1, 0x15c
    fmr f2, f1
    bl fn_8000D114
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x380
    bl fn_8010F6FC
    addi r3, r1, 0x150
    addi r4, r1, 0x380
    addi r5, r1, 0x398
    bl fn_80013410
    addi r3, r1, 0x398
    addi r4, r1, 0x150
    bl fn_8000D124
    addi r3, r1, 0x398
    bl fn_800F7FF0
    addi r3, r1, 0x144
    addi r4, r1, 0x380
    addi r5, r1, 0x398
    bl fn_80013410
    addi r3, r1, 0x398
    addi r4, r1, 0x144
    bl fn_8000D124
    addi r3, r1, 0x398
    bl fn_800F7FF0
lbl_fn_803D2A6C_00002858:
    addi r3, r1, 0x374
    addi r4, r1, 0x398
    bl fn_80011034
    lfs f1, 0x2668(r24)
    addi r3, r1, 0x368
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, 0x266c(r24)
    addi r3, r1, 0x35c
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f0, 0x2674(r24)
    fcmpo cr0, f0, f25
    bge lbl_fn_803D2A6C_0000289C
    b lbl_fn_803D2A6C_000028A0
lbl_fn_803D2A6C_0000289C:
    fmr f0, f25
lbl_fn_803D2A6C_000028A0:
    lfs f26, 0x2670(r24)
    fcmpo cr0, f26, f0
    ble lbl_fn_803D2A6C_000028B0
    b lbl_fn_803D2A6C_000028C4
lbl_fn_803D2A6C_000028B0:
    lfs f26, 0x2674(r24)
    fcmpo cr0, f26, f25
    bge lbl_fn_803D2A6C_000028C0
    b lbl_fn_803D2A6C_000028C4
lbl_fn_803D2A6C_000028C0:
    fmr f26, f25
lbl_fn_803D2A6C_000028C4:
    lfs f2, 0x2674(r24)
    addi r3, r1, 0x350
    lfs f0, 0x2670(r24)
    lfs f1, lbl_80885D60
    fsubs f0, f2, f0
    fmr f2, f1
    fmr f3, f1
    fdivs f24, f26, f0
    bl fn_8000D114
    fmr f1, f24
    addi r3, r1, 0x138
    addi r4, r1, 0x35c
    addi r5, r1, 0x368
    bl fn_800F7260
    addi r3, r1, 0x350
    addi r4, r1, 0x138
    bl fn_8000D124
    cmpwi r26, 0x0
    beq lbl_fn_803D2A6C_000029B8
    mr r3, r26
    addi r4, r1, 0x38c
    bl fn_803D7110
    lfs f1, 0x378(r1)
    addi r3, r1, 0x508
    bl fn_8013A13C
    mr r3, r26
    addi r4, r1, 0x508
    bl fn_803D7124
    mr r3, r26
    addi r4, r1, 0x350
    bl fn_803D7158
    mr r3, r26
    bl fn_80202D00
    lfs f1, lbl_80885D58
    addi r4, r23, 0x113e
    li r5, 0x0
    bl fn_801F6D7C
    mr r3, r26
    bl fn_80202D00
    lfs f1, lbl_80885D58
    addi r4, r23, 0x113e
    li r5, 0x1
    bl fn_801F6D7C
    mr r3, r26
    bl fn_80202D00
    fmr f1, f26
    addi r4, r23, 0x113e
    li r5, 0x4
    bl fn_801F6D7C
    mr r3, r26
    bl fn_80202D00
    lfs f0, 0x378(r1)
    addi r4, r23, 0x1146
    fdivs f1, f0, f27
    bl fn_801F6C80
    mr r3, r26
    bl fn_80202D00
    lfs f0, 0x378(r1)
    addi r4, r23, 0x114c
    fdivs f1, f0, f27
    bl fn_801F6C80
lbl_fn_803D2A6C_000029B8:
    cmpwi r27, 0x0
    beq lbl_fn_803D2A6C_00002ACC
    mr r3, r27
    addi r4, r1, 0x38c
    bl fn_803D7110
    lfs f1, 0x378(r1)
    addi r3, r1, 0x4d8
    bl fn_8013A13C
    mr r3, r27
    addi r4, r1, 0x4d8
    bl fn_803D7124
    mr r3, r27
    addi r4, r1, 0x350
    bl fn_803D7158
    mr r3, r27
    bl fn_80202D00
    lfs f1, lbl_80885D58
    addi r4, r23, 0x113e
    li r5, 0x0
    bl fn_801F6D7C
    mr r3, r27
    bl fn_80202D00
    lfs f1, lbl_80885D58
    addi r4, r23, 0x113e
    li r5, 0x1
    bl fn_801F6D7C
    mr r3, r27
    bl fn_80202D00
    fmr f1, f26
    addi r4, r23, 0x113e
    li r5, 0x4
    bl fn_801F6D7C
    mr r3, r27
    bl fn_80202D00
    lfs f0, 0x378(r1)
    addi r4, r23, 0x1146
    fdivs f1, f0, f27
    bl fn_801F6C80
    mr r3, r27
    bl fn_80202D00
    lfs f0, 0x378(r1)
    addi r4, r23, 0x114c
    fdivs f1, f0, f27
    bl fn_801F6C80
    b lbl_fn_803D2A6C_00002ACC
lbl_fn_803D2A6C_00002A6C:
    lwz r3, 0xb38(r30)
    bl fn_80202D00
    bl fn_803D2A60
    lwz r3, 0xb3c(r30)
    bl fn_80202D00
    bl fn_803D2A60
    lwz r3, 0xb40(r30)
    bl fn_80202D00
    bl fn_803D2A60
    lwz r3, 0xb44(r30)
    bl fn_80202D00
    bl fn_803D2A60
    lwz r3, 0xb50(r30)
    bl fn_80202D00
    bl fn_803D2A60
    lwz r3, 0xb54(r30)
    bl fn_80202D00
    bl fn_803D2A60
    lwz r3, 0xb48(r30)
    bl fn_80202D00
    bl fn_803D2A60
    lwz r3, 0xb4c(r30)
    bl fn_80202D00
    bl fn_803D2A60
lbl_fn_803D2A6C_00002ACC:
    addi r25, r25, 0x1
    addi r30, r30, 0x20
    cmpwi r25, 0x8
    blt lbl_fn_803D2A6C_00002464
lbl_fn_803D2A6C_00002ADC:
    addi r3, r24, 0xc38
    bl fn_80372574
    stw r3, 0xd6c(r24)
    li r18, 0x0
    b lbl_fn_803D2A6C_00002B18
lbl_fn_803D2A6C_00002AF0:
    mr r4, r18
    addi r3, r24, 0xc38
    bl fn_803D73A4
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00002B14
    lwz r3, 0xd6c(r24)
    subi r0, r3, 0x1
    stw r0, 0xd6c(r24)
lbl_fn_803D2A6C_00002B14:
    addi r18, r18, 0x1
lbl_fn_803D2A6C_00002B18:
    addi r3, r24, 0xc38
    bl fn_80372574
    cmplw r18, r3
    blt lbl_fn_803D2A6C_00002AF0
    lwz r0, 0x2644(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00002C30
    lwz r3, 0x2654(r24)
    bl fn_803D6E2C
    lwz r3, 0x2650(r24)
    lwz r0, 0x264c(r24)
    cmpw r3, r0
    ble lbl_fn_803D2A6C_00002B7C
    lwz r3, 0x2654(r24)
    lfs f1, lbl_80885D5C
    bl fn_803D2134
    lwz r3, 0x2654(r24)
    bl fn_803CFC64
    lfs f0, lbl_80885D58
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00002BA4
    li r0, 0x0
    stw r0, 0x2644(r24)
    b lbl_fn_803D2A6C_00002BA4
lbl_fn_803D2A6C_00002B7C:
    lwz r3, 0x2654(r24)
    lfs f1, lbl_80885D60
    bl fn_803D2134
    lwz r3, 0x2654(r24)
    bl fn_803D6F44
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00002BA4
    lwz r3, 0x2650(r24)
    addi r0, r3, 0x1
    stw r0, 0x2650(r24)
lbl_fn_803D2A6C_00002BA4:
    lwz r3, 0x2648(r24)
    bl fn_802168BC
    mr r18, r3
    lwz r3, 0x2648(r24)
    bl fn_80216908
    cmpwi r18, 0x0
    mr r25, r3
    beq lbl_fn_803D2A6C_00002C30
    bl fn_803D716C
    lfs f1, lbl_80885E60
    mr r4, r18
    lfs f2, lbl_80885D58
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lis r23, lbl_807506A0@ha
    fmr f24, f1
    addi r23, r23, lbl_807506A0@l
    lwz r3, 0x2654(r24)
    mr r5, r18
    addi r4, r23, 0x1152
    bl fn_803D70B4
    fmr f1, f24
    lwz r3, 0x2654(r24)
    addi r4, r23, 0x115a
    bl fn_803D6EF8
    xoris r0, r25, 0x8000
    stw r0, 0xa64(r1)
    lis r4, lbl_80750650@ha
    lwz r3, 0x2654(r24)
    lfd f1, lbl_80750650@l(r4)
    addi r4, r23, 0x1164
    lfd f0, 0xa60(r1)
    fsubs f1, f0, f1
    bl fn_803D6EF8
lbl_fn_803D2A6C_00002C30:
    cmpwi r29, 0x0
    bne lbl_fn_803D2A6C_00002C88
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00002C88
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0x7
    beq lbl_fn_803D2A6C_00002C88
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0x9
    beq lbl_fn_803D2A6C_00002C88
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0xa
    beq lbl_fn_803D2A6C_00002C88
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0xe
    bne lbl_fn_803D2A6C_00002F18
lbl_fn_803D2A6C_00002C88:
    lwz r3, 0xdc0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00002CA8
    bl fn_803D6F44
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00002CA8
    lwz r3, 0xdc0(r24)
    bl fn_803D6E2C
lbl_fn_803D2A6C_00002CA8:
    lwz r3, 0xdb4(r24)
    bl fn_803D6E2C
    lwz r0, 0xd90(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00002EBC
    addi r3, r1, 0x344
    bl fn_803D73B4
    addi r3, r1, 0x860
    li r18, 0x0
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r0, 0xd94(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00002CF8
    cmpwi r0, 0x1
    beq lbl_fn_803D2A6C_00002D08
    cmpwi r0, 0x2
    beq lbl_fn_803D2A6C_00002D68
    b lbl_fn_803D2A6C_00002DAC
lbl_fn_803D2A6C_00002CF8:
    addi r3, r24, 0xd98
    bl fn_801F19B4
    mr r18, r3
    b lbl_fn_803D2A6C_00002DAC
lbl_fn_803D2A6C_00002D08:
    lwz r3, 0xda4(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00002DAC
    lwz r0, 0xda8(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00002DAC
    lis r4, lbl_8078C638@ha
    lwz r5, 0x8(r3)
    addi r3, r1, 0x660
    addi r4, r4, lbl_8078C638@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x12c
    addi r4, r1, 0x660
    bl fn_803E6CBC
    addi r3, r1, 0x344
    addi r4, r1, 0x12c
    bl fn_803D73C8
    addi r3, r1, 0x12c
    li r4, -0x1
    bl fn_8006FA4C
    lwz r3, 0xda8(r24)
    lwz r18, 0xc(r3)
    b lbl_fn_803D2A6C_00002DAC
lbl_fn_803D2A6C_00002D68:
    lwz r3, 0xdac(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00002DAC
    lwz r12, 0x0(r3)
    addi r4, r1, 0x860
    lwz r12, 0xb8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00002DA8
    lis r4, lbl_8078C638@ha
    addi r3, r1, 0x860
    addi r4, r4, lbl_8078C638@l
    addi r4, r4, 0xc
    crclr 6
    bl fn_800DD3FC
lbl_fn_803D2A6C_00002DA8:
    addi r18, r1, 0x860
lbl_fn_803D2A6C_00002DAC:
    cmpwi r18, 0x0
    beq lbl_fn_803D2A6C_00002EA4
    lfs f1, lbl_80885DE4
    mr r4, r18
    lfs f2, lbl_80885E64
    addi r3, r1, 0x344
    lfs f3, lbl_80885D58
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    bl fn_800E0000
    lis r23, lbl_8078C638@ha
    addi r23, r23, lbl_8078C638@l
    b lbl_fn_803D2A6C_00002E08
lbl_fn_803D2A6C_00002DE4:
    addi r3, r1, 0x120
    addi r4, r23, 0x1c
    bl fn_803E6CBC
    addi r3, r1, 0x344
    addi r4, r1, 0x120
    bl fn_803D73C8
    addi r3, r1, 0x120
    li r4, -0x1
    bl fn_8006FA4C
lbl_fn_803D2A6C_00002E08:
    addi r3, r1, 0x344
    bl fn_803D7828
    cmplwi r3, 0x3
    blt lbl_fn_803D2A6C_00002DE4
    lwz r3, 0xdb4(r24)
    lfs f1, lbl_80885D60
    bl fn_803D2134
    addi r3, r1, 0x344
    li r4, 0x0
    bl fn_803D7830
    bl fn_801F19B4
    lis r23, lbl_807506A0@ha
    mr r5, r3
    addi r23, r23, lbl_807506A0@l
    lwz r3, 0xdb4(r24)
    addi r4, r23, 0x1169
    bl fn_803D70B4
    addi r3, r1, 0x344
    li r4, 0x1
    bl fn_803D7830
    bl fn_801F19B4
    mr r5, r3
    lwz r3, 0xdb4(r24)
    addi r4, r23, 0x116f
    bl fn_803D70B4
    addi r3, r1, 0x344
    li r4, 0x2
    bl fn_803D7830
    bl fn_801F19B4
    mr r5, r3
    lwz r3, 0xdb4(r24)
    addi r4, r23, 0x1175
    bl fn_803D70B4
    lis r5, lbl_8078C638@ha
    lwz r3, 0xdb4(r24)
    addi r5, r5, lbl_8078C638@l
    addi r4, r23, 0x117b
    addi r5, r5, 0x1c
    bl fn_803D70B4
lbl_fn_803D2A6C_00002EA4:
    li r0, 0x2
    stw r0, 0xdb0(r24)
    addi r3, r1, 0x344
    li r4, -0x1
    bl fn_801F33D4
    b lbl_fn_803D2A6C_00002EEC
lbl_fn_803D2A6C_00002EBC:
    lwz r3, 0xdb0(r24)
    cmpwi r3, 0x0
    ble lbl_fn_803D2A6C_00002EE0
    subi r0, r3, 0x1
    stw r0, 0xdb0(r24)
    lwz r3, 0xdb4(r24)
    lfs f1, lbl_80885D60
    bl fn_803D2134
    b lbl_fn_803D2A6C_00002EEC
lbl_fn_803D2A6C_00002EE0:
    lwz r3, 0xdb4(r24)
    lfs f1, lbl_80885D5C
    bl fn_803D2134
lbl_fn_803D2A6C_00002EEC:
    lwz r3, 0xdb4(r24)
    bl fn_803CFC64
    lfs f0, lbl_80885E68
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803D2A6C_00002F10
    fmr f1, f0
    lwz r3, 0xdb4(r24)
    bl fn_803D6F68
lbl_fn_803D2A6C_00002F10:
    li r0, 0x0
    stw r0, 0xd90(r24)
lbl_fn_803D2A6C_00002F18:
    cmpwi r29, 0x0
    bne lbl_fn_803D2A6C_00002F50
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00002F50
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0x7
    beq lbl_fn_803D2A6C_00002F50
    bl fn_80121F00
    bl fn_803D6E24
    cmpwi r3, 0xe
    bne lbl_fn_803D2A6C_000042F8
lbl_fn_803D2A6C_00002F50:
    lwz r0, 0x3ec(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_0000309C
    lis r3, lbl_80750650@ha
    lis r4, lbl_807506A0@ha
    lfs f30, lbl_80885D68
    addi r23, r4, lbl_807506A0@l
    lfd f27, lbl_80750650@l(r3)
    li r18, 0x0
    lfs f28, lbl_80885D60
    lfs f29, lbl_80885D58
    b lbl_fn_803D2A6C_0000308C
lbl_fn_803D2A6C_00002F80:
    mr r4, r18
    addi r3, r24, 0x3f0
    bl fn_803D7840
    mr r25, r3
    lwz r3, 0x8(r3)
    bl fn_8000DD0C
    addi r4, r23, 0x10c1
    bl fn_800132EC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00002FBC
    mr r4, r3
    addi r3, r1, 0x114
    bl fn_8000D0F8
    addi r4, r1, 0x114
    b lbl_fn_803D2A6C_00002FCC
lbl_fn_803D2A6C_00002FBC:
    lwz r3, 0x8(r25)
    bl fn_80198C00
    bl fn_80315644
    addi r4, r3, 0xc
lbl_fn_803D2A6C_00002FCC:
    addi r3, r1, 0x338
    bl fn_8001047C
    lfs f0, 0x33c(r1)
    fadds f0, f0, f30
    stfs f0, 0x33c(r1)
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x32c
    addi r5, r1, 0x338
    bl fn_800BFAC8
    lfs f0, 0x334(r1)
    fcmpo cr0, f29, f0
    bge lbl_fn_803D2A6C_00003088
    fcmpo cr0, f0, f28
    bge lbl_fn_803D2A6C_00003088
    lwz r0, 0x4(r25)
    lwz r3, 0x3ec(r24)
    xoris r0, r0, 0x8000
    stw r0, 0xa6c(r1)
    lfd f0, 0xa68(r1)
    fsubs f1, f0, f27
    bl fn_803D6F68
    lwz r3, 0x3ec(r24)
    addi r4, r23, 0x10a2
    lfs f1, 0x32c(r1)
    li r5, 0x0
    bl fn_803D6F78
    lwz r3, 0x3ec(r24)
    addi r4, r23, 0x10a2
    lfs f1, 0x330(r1)
    li r5, 0x1
    bl fn_803D6F78
    lwz r3, 0x3ec(r24)
    addi r4, r23, 0x1181
    lwz r5, 0x0(r25)
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, 0x3ec(r24)
    addi r4, r23, 0x1188
    lwz r5, 0x0(r25)
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, 0x3ec(r24)
    bl fn_801F4484
    lwz r3, 0x3ec(r24)
    li r4, 0x1
    bl fn_801F465C
lbl_fn_803D2A6C_00003088:
    addi r18, r18, 0x1
lbl_fn_803D2A6C_0000308C:
    addi r3, r24, 0x3f0
    bl fn_80372574
    cmplw r18, r3
    blt lbl_fn_803D2A6C_00002F80
lbl_fn_803D2A6C_0000309C:
    bl fn_801156C4
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000030BC
    bl fn_801156C4
    bl fn_803D7174
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00003814
lbl_fn_803D2A6C_000030BC:
    addi r3, r1, 0x320
    bl fn_80057A64
    bl fn_8000D9E8
    bl fn_8000DCF4
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000030EC
    bl fn_8000D9E8
    bl fn_8000DCF4
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x320
    bl fn_8000D124
lbl_fn_803D2A6C_000030EC:
    lfs f26, lbl_80885E1C
    li r18, 0x0
    stfs f26, 0x4b8(r1)
    stw r18, 0x498(r1)
    stfs f26, 0x4bc(r1)
    stw r18, 0x49c(r1)
    stfs f26, 0x4c0(r1)
    stw r18, 0x4a0(r1)
    stfs f26, 0x4c4(r1)
    stw r18, 0x4a4(r1)
    stfs f26, 0x4c8(r1)
    stw r18, 0x4a8(r1)
    stfs f26, 0x4cc(r1)
    stw r18, 0x4ac(r1)
    stfs f26, 0x4d0(r1)
    stw r18, 0x4b0(r1)
    stfs f26, 0x4d4(r1)
    stw r18, 0x4b4(r1)
    bl fn_801A03E0
    bl fn_801A0408
    lfs f27, lbl_80885E2C
    mr r19, r3
    addi r23, r1, 0x4b8
    addi r25, r1, 0x498
    b lbl_fn_803D2A6C_00003374
lbl_fn_803D2A6C_00003150:
    mr r3, r19
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003368
    mr r3, r19
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003368
    mr r3, r19
    bl fn_803D6EA0
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003368
    mr r3, r19
    bl fn_800F530C
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00003368
    mr r3, r19
    bl fn_803D6EAC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003368
    mr r3, r19
    bl fn_803D70A8
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003368
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000031D8
    bl fn_800F7F90
    mr r4, r19
    bl fn_804EB014
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003368
lbl_fn_803D2A6C_000031D8:
    mr r3, r19
    bl fn_8013C38C
    mr r5, r3
    addi r3, r1, 0x108
    addi r4, r1, 0x320
    bl fn_80013338
    addi r3, r1, 0x108
    bl fn_801162A0
    fmr f28, f1
    mr r3, r19
    bl fn_803D717C
    fmuls f28, f28, f1
    mr r3, r24
    mr r4, r19
    bl fn_803E6C88
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003220
    lfs f28, lbl_80885DE0
lbl_fn_803D2A6C_00003220:
    li r20, 0x0
    bl fn_803D7184
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000325C
    bl fn_803D7184
    bl fn_803D718C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_0000325C
    bl fn_803D7184
    bl fn_803D7194
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803D2A6C_000032A4
    li r20, 0x1
    b lbl_fn_803D2A6C_000032A4
lbl_fn_803D2A6C_0000325C:
    mr r3, r28
    bl fn_803D6F70
    cmpwi r3, 0x6
    bne lbl_fn_803D2A6C_00003278
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000032A4
lbl_fn_803D2A6C_00003278:
    fcmpo cr0, f28, f27
    blt lbl_fn_803D2A6C_000032A0
    mr r3, r19
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_803D2A6C_000032A4
    mr r3, r19
    bl fn_80267B28
    cmpwi r3, 0x16
    bne lbl_fn_803D2A6C_000032A4
lbl_fn_803D2A6C_000032A0:
    li r20, 0x1
lbl_fn_803D2A6C_000032A4:
    cmpwi r20, 0x0
    beq lbl_fn_803D2A6C_00003368
    fcmpo cr0, f28, f26
    bge lbl_fn_803D2A6C_00003368
    slwi r0, r18, 2
    li r18, 0x7
    stfsx f28, r23, r0
    lfs f1, 0x4d0(r1)
    lfs f0, 0x4d4(r1)
    stwx r19, r25, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_000032D8
    li r18, 0x6
lbl_fn_803D2A6C_000032D8:
    slwi r0, r18, 2
    lfs f1, 0x4cc(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_000032F0
    li r18, 0x5
lbl_fn_803D2A6C_000032F0:
    slwi r0, r18, 2
    lfs f1, 0x4c8(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003308
    li r18, 0x4
lbl_fn_803D2A6C_00003308:
    slwi r0, r18, 2
    lfs f1, 0x4c4(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003320
    li r18, 0x3
lbl_fn_803D2A6C_00003320:
    slwi r0, r18, 2
    lfs f1, 0x4c0(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003338
    li r18, 0x2
lbl_fn_803D2A6C_00003338:
    slwi r0, r18, 2
    lfs f1, 0x4bc(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003350
    li r18, 0x1
lbl_fn_803D2A6C_00003350:
    slwi r0, r18, 2
    lfs f1, 0x4b8(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003368
    li r18, 0x0
lbl_fn_803D2A6C_00003368:
    mr r3, r19
    bl fn_801A03EC
    mr r19, r3
lbl_fn_803D2A6C_00003374:
    cmpwi r19, 0x0
    bne lbl_fn_803D2A6C_00003150
    bl fn_8000D9E8
    bl fn_802A36B0
    lfs f27, lbl_80885E2C
    mr r19, r3
    addi r23, r1, 0x4b8
    addi r25, r1, 0x498
    b lbl_fn_803D2A6C_0000358C
lbl_fn_803D2A6C_00003398:
    mr r3, r19
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003580
    mr r3, r19
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003580
    mr r3, r19
    bl fn_80339F04
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003580
    mr r3, r19
    bl fn_803D6EAC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003580
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000033FC
    bl fn_800F7F90
    mr r4, r19
    bl fn_804EB014
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003580
lbl_fn_803D2A6C_000033FC:
    mr r3, r19
    bl fn_8013C38C
    mr r5, r3
    addi r3, r1, 0xfc
    addi r4, r1, 0x320
    bl fn_80013338
    addi r3, r1, 0xfc
    bl fn_801162A0
    fmr f28, f1
    mr r3, r19
    bl fn_803D717C
    fmuls f28, f28, f1
    li r20, 0x0
    bl fn_803D7184
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003468
    bl fn_803D7184
    bl fn_803D718C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003468
    bl fn_803D7184
    bl fn_803D7194
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803D2A6C_000034BC
    li r20, 0x1
    b lbl_fn_803D2A6C_000034BC
lbl_fn_803D2A6C_00003468:
    mr r3, r28
    bl fn_803D6F70
    cmpwi r3, 0x6
    bne lbl_fn_803D2A6C_00003484
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000034BC
lbl_fn_803D2A6C_00003484:
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000034BC
    fcmpo cr0, f28, f27
    blt lbl_fn_803D2A6C_000034B8
    mr r3, r19
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_803D2A6C_000034BC
    mr r3, r19
    bl fn_80267B28
    cmpwi r3, 0x16
    bne lbl_fn_803D2A6C_000034BC
lbl_fn_803D2A6C_000034B8:
    li r20, 0x1
lbl_fn_803D2A6C_000034BC:
    cmpwi r20, 0x0
    beq lbl_fn_803D2A6C_00003580
    fcmpo cr0, f28, f26
    bge lbl_fn_803D2A6C_00003580
    slwi r0, r18, 2
    li r18, 0x7
    stfsx f28, r23, r0
    lfs f1, 0x4d0(r1)
    lfs f0, 0x4d4(r1)
    stwx r19, r25, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_000034F0
    li r18, 0x6
lbl_fn_803D2A6C_000034F0:
    slwi r0, r18, 2
    lfs f1, 0x4cc(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003508
    li r18, 0x5
lbl_fn_803D2A6C_00003508:
    slwi r0, r18, 2
    lfs f1, 0x4c8(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003520
    li r18, 0x4
lbl_fn_803D2A6C_00003520:
    slwi r0, r18, 2
    lfs f1, 0x4c4(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003538
    li r18, 0x3
lbl_fn_803D2A6C_00003538:
    slwi r0, r18, 2
    lfs f1, 0x4c0(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003550
    li r18, 0x2
lbl_fn_803D2A6C_00003550:
    slwi r0, r18, 2
    lfs f1, 0x4bc(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003568
    li r18, 0x1
lbl_fn_803D2A6C_00003568:
    slwi r0, r18, 2
    lfs f1, 0x4b8(r1)
    lfsx f0, r23, r0
    fcmpo cr0, f1, f0
    ble lbl_fn_803D2A6C_00003580
    li r18, 0x0
lbl_fn_803D2A6C_00003580:
    mr r3, r19
    bl fn_802A4094
    mr r19, r3
lbl_fn_803D2A6C_0000358C:
    cmpwi r19, 0x0
    bne lbl_fn_803D2A6C_00003398
    addi r3, r1, 0x314
    bl fn_80057A64
    addi r3, r1, 0x308
    bl fn_80057A64
    lis r3, lbl_80750650@ha
    lis r4, lbl_807506A0@ha
    lfs f27, lbl_80885D68
    mr r22, r24
    lfd f30, lbl_80750650@l(r3)
    addi r21, r1, 0x498
    lfs f31, lbl_80885D60
    addi r23, r4, lbl_807506A0@l
    lfs f28, lbl_80885D58
    li r18, 0x0
lbl_fn_803D2A6C_000035CC:
    lwz r3, 0x0(r21)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003800
    bl fn_8000DD0C
    addi r4, r23, 0x10c1
    bl fn_800132EC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003600
    mr r4, r3
    addi r3, r1, 0xf0
    bl fn_8000D0F8
    addi r4, r1, 0xf0
    b lbl_fn_803D2A6C_00003610
lbl_fn_803D2A6C_00003600:
    lwz r3, 0x0(r21)
    bl fn_80198C00
    bl fn_80315644
    addi r4, r3, 0xc
lbl_fn_803D2A6C_00003610:
    addi r3, r1, 0x314
    bl fn_8000D124
    lfs f0, 0x318(r1)
    fadds f0, f0, f27
    stfs f0, 0x318(r1)
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0xe4
    addi r5, r1, 0x314
    bl fn_800BFAC8
    addi r3, r1, 0x308
    addi r4, r1, 0xe4
    bl fn_8000D124
    lfs f0, 0x310(r1)
    fcmpo cr0, f28, f0
    bge lbl_fn_803D2A6C_00003800
    fcmpo cr0, f0, f31
    bge lbl_fn_803D2A6C_00003800
    lwz r3, 0x574(r22)
    bl fn_803D6E2C
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10a2
    lfs f1, 0x308(r1)
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10a2
    lfs f1, 0x30c(r1)
    li r5, 0x1
    bl fn_801F6D7C
    lwz r3, 0x574(r22)
    addi r4, r23, 0x1192
    lfs f1, lbl_80885D58
    bl fn_801F6C80
    lwz r3, 0x0(r21)
    bl fn_800F52F0
    lwz r0, 0x16c(r3)
    lwz r3, 0x0(r21)
    xoris r0, r0, 0x8000
    stw r0, 0xa64(r1)
    lfd f0, 0xa60(r1)
    fsubs f29, f0, f30
    bl fn_800F52F0
    lfs f0, 0x244(r3)
    addi r4, r23, 0x10d6
    lwz r3, 0x574(r22)
    fdivs f1, f0, f29
    bl fn_801F6C80
    lwz r3, 0x0(r21)
    bl fn_800F7F80
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_000036F0
    lwz r3, 0x0(r21)
    bl fn_80140518
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003724
lbl_fn_803D2A6C_000036F0:
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10dd
    lfs f1, lbl_80885E38
    bl fn_801F6C80
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10e4
    lfs f1, lbl_80885E3C
    bl fn_801F6C80
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10eb
    lfs f1, lbl_80885E34
    bl fn_801F6C80
    b lbl_fn_803D2A6C_00003774
lbl_fn_803D2A6C_00003724:
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10dd
    lfs f1, lbl_80885E6C
    bl fn_801F6C80
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10e4
    lfs f1, lbl_80885E70
    bl fn_801F6C80
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10eb
    lfs f1, lbl_80885E70
    bl fn_801F6C80
    lwz r3, 0x0(r21)
    bl fn_803D719C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003774
    lwz r3, 0x574(r22)
    addi r4, r23, 0x1192
    lfs f1, lbl_80885D60
    bl fn_801F6C80
lbl_fn_803D2A6C_00003774:
    lwz r3, 0x0(r21)
    bl fn_801799BC
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_803D2A6C_00003794
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803D2A6C_000037A8
lbl_fn_803D2A6C_00003794:
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10f2
    lfs f1, lbl_80885D60
    bl fn_801F6C80
    b lbl_fn_803D2A6C_000037C0
lbl_fn_803D2A6C_000037A8:
    lwz r3, 0x574(r22)
    bl fn_803D2A60
    lwz r3, 0x574(r22)
    addi r4, r23, 0x10f2
    lfs f1, lbl_80885D58
    bl fn_801F6C80
lbl_fn_803D2A6C_000037C0:
    lwz r3, 0x0(r21)
    bl fn_803D719C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003800
    lwz r3, 0x594(r22)
    bl fn_803D6E2C
    lwz r3, 0x594(r22)
    addi r4, r23, 0x10a2
    lfs f1, 0x308(r1)
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x594(r22)
    addi r4, r23, 0x10a2
    lfs f1, 0x30c(r1)
    li r5, 0x1
    bl fn_801F6D7C
lbl_fn_803D2A6C_00003800:
    addi r18, r18, 0x1
    addi r22, r22, 0x4
    cmpwi r18, 0x8
    addi r21, r21, 0x4
    blt lbl_fn_803D2A6C_000035CC
lbl_fn_803D2A6C_00003814:
    bl fn_800F52F8
    bl fn_803D6F60
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00003C94
    addi r3, r1, 0x2fc
    li r18, 0x0
    bl fn_80057A64
    addi r3, r1, 0x2f0
    bl fn_80057A64
    bl fn_80323C2C
    bl fn_8036554C
    lis r4, lbl_807506A0@ha
    lfs f31, lbl_80885DDC
    lfs f29, lbl_80885D60
    mr r19, r3
    lfs f30, lbl_80885D58
    mr r21, r24
    addi r23, r4, lbl_807506A0@l
    b lbl_fn_803D2A6C_00003A44
lbl_fn_803D2A6C_00003864:
    mr r3, r19
    bl fn_803D6EA0
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003A38
    mr r3, r19
    bl fn_80139EFC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003A38
    mr r3, r19
    bl fn_803CFC58
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003A38
    mr r3, r19
    bl fn_8000DD0C
    addi r4, r23, 0x119b
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0xd8
    bl fn_8000D0F8
    addi r3, r1, 0x2fc
    addi r4, r1, 0xd8
    bl fn_8000D124
    lfs f0, 0x300(r1)
    fadds f0, f0, f31
    stfs f0, 0x300(r1)
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0xcc
    addi r5, r1, 0x2fc
    bl fn_800BFAC8
    addi r3, r1, 0x2f0
    addi r4, r1, 0xcc
    bl fn_8000D124
    lfs f0, 0x2f8(r1)
    fcmpo cr0, f30, f0
    bge lbl_fn_803D2A6C_00003A28
    fcmpo cr0, f0, f29
    bge lbl_fn_803D2A6C_00003A28
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x10a2
    lfs f1, 0x2f0(r1)
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x10a2
    lfs f1, 0x2f4(r1)
    li r5, 0x1
    bl fn_801F6D7C
    mr r3, r19
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003A28
    lwz r3, 0x6fc(r21)
    bl fn_803D6E2C
    lwz r3, 0x6fc(r21)
    lfs f1, lbl_80885D60
    bl fn_803D218C
    lwz r3, 0x6fc(r21)
    bl fn_803D733C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003968
    lwz r3, 0x6fc(r21)
    lfs f1, lbl_80885E70
    bl fn_803D7384
lbl_fn_803D2A6C_00003968:
    mr r3, r19
    bl fn_800F52F0
    lwz r0, 0x224(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803D2A6C_000039D4
    bl fn_803D70A0
    li r4, 0xe8
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11a0
    bl fn_801F837C
    bl fn_803D70A0
    li r4, 0xe8
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11ab
    bl fn_801F837C
    bl fn_803D70A0
    li r4, 0xe8
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11b9
    bl fn_801F837C
    b lbl_fn_803D2A6C_00003A28
lbl_fn_803D2A6C_000039D4:
    bl fn_803D70A0
    li r4, 0xe9
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11a0
    bl fn_801F837C
    bl fn_803D70A0
    li r4, 0xe9
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11ab
    bl fn_801F837C
    bl fn_803D70A0
    li r4, 0xe9
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11b9
    bl fn_801F837C
lbl_fn_803D2A6C_00003A28:
    addi r18, r18, 0x1
    addi r21, r21, 0x4
    cmplwi r18, 0x6
    bge lbl_fn_803D2A6C_00003A4C
lbl_fn_803D2A6C_00003A38:
    mr r3, r19
    bl fn_802A4094
    mr r19, r3
lbl_fn_803D2A6C_00003A44:
    cmpwi r19, 0x0
    bne lbl_fn_803D2A6C_00003864
lbl_fn_803D2A6C_00003A4C:
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003C94
    bl fn_801A03E0
    bl fn_801A0408
    lis r4, lbl_807506A0@ha
    slwi r0, r18, 2
    lfs f29, lbl_80885DDC
    mr r19, r3
    lfs f31, lbl_80885D60
    add r21, r24, r0
    lfs f30, lbl_80885D58
    addi r23, r4, lbl_807506A0@l
    b lbl_fn_803D2A6C_00003C8C
lbl_fn_803D2A6C_00003A84:
    bl fn_800F7F90
    mr r4, r19
    bl fn_804EB7C8
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003C80
    bl fn_800F7F90
    mr r4, r19
    bl fn_804EB014
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003C80
    mr r3, r19
    bl fn_803D6EA0
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003C80
    mr r3, r19
    bl fn_80139EFC
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003C80
    mr r3, r19
    bl fn_803CFC58
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003C80
    mr r3, r19
    bl fn_8000DD0C
    addi r4, r23, 0x119b
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0xc0
    bl fn_8000D0F8
    addi r3, r1, 0x2fc
    addi r4, r1, 0xc0
    bl fn_8000D124
    lfs f0, 0x300(r1)
    fadds f0, f0, f29
    stfs f0, 0x300(r1)
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0xb4
    addi r5, r1, 0x2fc
    bl fn_800BFAC8
    addi r3, r1, 0x2f0
    addi r4, r1, 0xb4
    bl fn_8000D124
    lfs f0, 0x2f8(r1)
    fcmpo cr0, f30, f0
    bge lbl_fn_803D2A6C_00003C70
    fcmpo cr0, f0, f31
    bge lbl_fn_803D2A6C_00003C70
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x10a2
    lfs f1, 0x2f0(r1)
    li r5, 0x0
    bl fn_801F6D7C
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x10a2
    lfs f1, 0x2f4(r1)
    li r5, 0x1
    bl fn_801F6D7C
    mr r3, r19
    bl fn_800F52F0
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003C70
    lwz r3, 0x6fc(r21)
    bl fn_803D6E2C
    lwz r3, 0x6fc(r21)
    lfs f1, lbl_80885D60
    bl fn_803D218C
    lwz r3, 0x6fc(r21)
    bl fn_803D733C
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003BB0
    lwz r3, 0x6fc(r21)
    lfs f1, lbl_80885E70
    bl fn_803D7384
lbl_fn_803D2A6C_00003BB0:
    mr r3, r19
    bl fn_800F52F0
    lwz r0, 0x224(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803D2A6C_00003C1C
    bl fn_803D70A0
    li r4, 0xe8
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11a0
    bl fn_801F837C
    bl fn_803D70A0
    li r4, 0xe8
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11ab
    bl fn_801F837C
    bl fn_803D70A0
    li r4, 0xe8
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11b9
    bl fn_801F837C
    b lbl_fn_803D2A6C_00003C70
lbl_fn_803D2A6C_00003C1C:
    bl fn_803D70A0
    li r4, 0xe9
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11a0
    bl fn_801F837C
    bl fn_803D70A0
    li r4, 0xe9
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11ab
    bl fn_801F837C
    bl fn_803D70A0
    li r4, 0xe9
    bl fn_803D7084
    mr r5, r3
    lwz r3, 0x6fc(r21)
    addi r4, r23, 0x11b9
    bl fn_801F837C
lbl_fn_803D2A6C_00003C70:
    addi r18, r18, 0x1
    addi r21, r21, 0x4
    cmplwi r18, 0x6
    bge lbl_fn_803D2A6C_00003C94
lbl_fn_803D2A6C_00003C80:
    mr r3, r19
    bl fn_801A03EC
    mr r19, r3
lbl_fn_803D2A6C_00003C8C:
    cmpwi r19, 0x0
    bne lbl_fn_803D2A6C_00003A84
lbl_fn_803D2A6C_00003C94:
    lwz r0, 0x834(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00003CF4
    lwz r0, 0x7b4(r24)
    mr r3, r24
    addi r6, r24, 0x79c
    li r5, 0x0
    slwi r0, r0, 2
    li r7, 0x1
    add r4, r24, r0
    lwz r4, 0x824(r4)
    bl fn_803E3468
    lwz r0, 0x7b4(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x824(r3)
    bl fn_803D6F44
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003E5C
    li r0, 0x0
    stw r0, 0x834(r24)
    mr r3, r24
    bl fn_803CF74C
    b lbl_fn_803D2A6C_00003E5C
lbl_fn_803D2A6C_00003CF4:
    lwz r0, 0x764(r24)
    cmpwi r0, 0x6
    bne lbl_fn_803D2A6C_00003DA0
    mr r3, r24
    bl fn_803D71A8
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003DA0
    lwz r0, 0x77c(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x814(r3)
    bl fn_803CFC64
    lfs f0, lbl_80885E24
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00003D58
    lwz r0, 0x77c(r24)
    mr r3, r24
    addi r6, r24, 0x764
    li r5, 0x0
    slwi r0, r0, 2
    li r7, 0x1
    add r4, r24, r0
    lwz r4, 0x814(r4)
    bl fn_803E3468
lbl_fn_803D2A6C_00003D58:
    lwz r0, 0x77c(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x814(r3)
    bl fn_803CFC64
    lfs f0, lbl_80885E24
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803D2A6C_00003DA0
    lwz r0, 0x77c(r24)
    mr r3, r24
    addi r6, r24, 0x764
    li r7, 0x1
    slwi r0, r0, 2
    add r5, r24, r0
    lwz r4, 0x81c(r5)
    lwz r5, 0x82c(r5)
    bl fn_803E3468
lbl_fn_803D2A6C_00003DA0:
    lwz r0, 0x780(r24)
    cmpwi r0, 0x6
    bne lbl_fn_803D2A6C_00003E5C
    mr r3, r24
    bl fn_803D71A8
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003E2C
    lwz r0, 0x798(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x814(r3)
    bl fn_803CFC64
    lfs f0, lbl_80885E24
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00003DF8
    lwz r0, 0x798(r24)
    lfs f1, lbl_80885E54
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x814(r3)
    bl fn_803D6F68
lbl_fn_803D2A6C_00003DF8:
    mr r3, r24
    bl fn_803D71A8
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00003E2C
    lwz r0, 0x798(r24)
    mr r3, r24
    addi r6, r24, 0x780
    li r5, 0x0
    slwi r0, r0, 2
    li r7, 0x1
    add r4, r24, r0
    lwz r4, 0x814(r4)
    bl fn_803E3468
lbl_fn_803D2A6C_00003E2C:
    lwz r0, 0x764(r24)
    cmpwi r0, 0x6
    beq lbl_fn_803D2A6C_00003E5C
    lwz r0, 0x798(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x814(r3)
    bl fn_803D6F44
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003E5C
    mr r3, r24
    bl fn_803CF74C
lbl_fn_803D2A6C_00003E5C:
    lfs f1, lbl_80885D58
    addi r3, r24, 0xd60
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
    lwz r0, 0xd3c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803D2A6C_00003F50
    addi r3, r1, 0x2e4
    addi r4, r24, 0xd44
    bl fn_8001047C
    lwz r3, 0xd50(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00003F2C
    bl fn_8000DD0C
    lis r4, lbl_807506A0@ha
    addi r4, r4, lbl_807506A0@l
    addi r4, r4, 0x10c1
    bl fn_800132EC
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_803D2A6C_00003EF0
    lfs f1, lbl_80885D58
    addi r3, r1, 0xa8
    lfs f2, lbl_80885D68
    fmr f3, f1
    bl fn_8000D114
    mr r23, r3
    mr r4, r18
    addi r3, r1, 0x9c
    bl fn_8000D0F8
    mr r5, r23
    addi r3, r1, 0x90
    addi r4, r1, 0x9c
    bl fn_80013410
    addi r4, r1, 0x90
    b lbl_fn_803D2A6C_00003F24
lbl_fn_803D2A6C_00003EF0:
    lfs f1, lbl_80885D58
    addi r3, r1, 0x84
    lfs f2, lbl_80885E74
    fmr f3, f1
    bl fn_8000D114
    mr r23, r3
    lwz r3, 0xd50(r24)
    bl fn_8013C38C
    mr r4, r3
    mr r5, r23
    addi r3, r1, 0x78
    bl fn_80013410
    addi r4, r1, 0x78
lbl_fn_803D2A6C_00003F24:
    addi r3, r1, 0x2e4
    bl fn_8000D124
lbl_fn_803D2A6C_00003F2C:
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x6c
    addi r5, r1, 0x2e4
    bl fn_800BFAC8
    addi r3, r24, 0xd60
    addi r4, r1, 0x6c
    bl fn_8000D124
    b lbl_fn_803D2A6C_00003FA4
lbl_fn_803D2A6C_00003F50:
    bl fn_803D71C4
    bl fn_803D71BC
    xoris r0, r3, 0x8000
    stw r0, 0xa6c(r1)
    lis r23, lbl_80750650@ha
    lfs f0, lbl_80885DFC
    lfd f2, lbl_80750650@l(r23)
    lfd f1, 0xa68(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0xd60(r24)
    bl fn_803D71C4
    bl fn_803D71CC
    xoris r0, r3, 0x8000
    stw r0, 0xa64(r1)
    lfd f2, lbl_80750650@l(r23)
    lfd f1, 0xa60(r1)
    lfs f0, lbl_80885DFC
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0xd64(r24)
lbl_fn_803D2A6C_00003FA4:
    lwz r3, 0x768(r24)
    lfs f24, lbl_80885D58
    subi r0, r3, 0xc
    cmplwi r0, 0x1
    bgt lbl_fn_803D2A6C_00003FBC
    lfs f24, lbl_80885E78
lbl_fn_803D2A6C_00003FBC:
    lwz r0, 0x77c(r24)
    lis r31, lbl_807506A0@ha
    addi r31, r31, lbl_807506A0@l
    lfs f1, 0xd60(r24)
    slwi r0, r0, 2
    li r5, 0x0
    add r3, r24, r0
    addi r4, r31, 0x113e
    lwz r3, 0x814(r3)
    bl fn_803D6F78
    lwz r0, 0x77c(r24)
    addi r4, r31, 0x113e
    lfs f0, 0xd64(r24)
    li r5, 0x1
    slwi r0, r0, 2
    add r3, r24, r0
    fadds f1, f0, f24
    lwz r3, 0x814(r3)
    bl fn_803D6F78
    lwz r0, 0x77c(r24)
    addi r4, r31, 0x113e
    lfs f1, 0xd60(r24)
    li r5, 0x0
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x81c(r3)
    bl fn_803D6F78
    lwz r0, 0x77c(r24)
    addi r4, r31, 0x113e
    lfs f0, 0xd64(r24)
    li r5, 0x1
    slwi r0, r0, 2
    add r3, r24, r0
    fadds f1, f0, f24
    lwz r3, 0x81c(r3)
    bl fn_803D6F78
    lwz r0, 0x77c(r24)
    addi r4, r31, 0x113e
    lfs f1, 0xd60(r24)
    li r5, 0x0
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x824(r3)
    bl fn_803D6F78
    lwz r0, 0x77c(r24)
    addi r4, r31, 0x113e
    lfs f0, 0xd64(r24)
    li r5, 0x1
    slwi r0, r0, 2
    add r3, r24, r0
    fadds f1, f0, f24
    lwz r3, 0x824(r3)
    bl fn_803D6F78
    lwz r0, 0x77c(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    lwz r3, 0x82c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000040DC
    lfs f1, 0xd60(r24)
    addi r4, r31, 0x113e
    li r5, 0x0
    bl fn_803D6F78
    lwz r0, 0x77c(r24)
    addi r4, r31, 0x113e
    lfs f0, 0xd64(r24)
    li r5, 0x1
    slwi r0, r0, 2
    add r3, r24, r0
    fadds f1, f0, f24
    lwz r3, 0x82c(r3)
    bl fn_803D6F78
lbl_fn_803D2A6C_000040DC:
    lwz r3, 0xdb8(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00004218
    bl fn_803D6F44
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_00004218
    lwz r3, 0xdb8(r24)
    bl fn_803D6E2C
    bl fn_8000D9E8
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00004118
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r25, r3
    b lbl_fn_803D2A6C_0000411C
lbl_fn_803D2A6C_00004118:
    li r25, 0x0
lbl_fn_803D2A6C_0000411C:
    cmpwi r25, 0x0
    beq lbl_fn_803D2A6C_00004218
    lfs f1, lbl_80885D58
    addi r3, r1, 0x60
    lfs f2, lbl_80885E60
    fmr f3, f1
    bl fn_8000D114
    mr r23, r3
    mr r3, r25
    bl fn_8013C38C
    mr r4, r3
    mr r5, r23
    addi r3, r1, 0x2d8
    bl fn_80013410
    mr r3, r25
    bl fn_803D71D4
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000041B0
    mr r3, r25
    bl fn_801479D8
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000041B0
    lfs f1, lbl_80885D58
    addi r3, r1, 0x48
    lfs f2, lbl_80885E7C
    fmr f3, f1
    bl fn_8000D114
    mr r23, r3
    mr r3, r25
    bl fn_8013C38C
    mr r4, r3
    mr r5, r23
    addi r3, r1, 0x54
    bl fn_80013410
    addi r3, r1, 0x2d8
    addi r4, r1, 0x54
    bl fn_8000D124
lbl_fn_803D2A6C_000041B0:
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x2cc
    addi r5, r1, 0x2d8
    bl fn_800BFAC8
    lfs f0, lbl_80885D58
    lfs f1, 0x2d4(r1)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00004218
    lfs f0, lbl_80885D60
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_00004218
    lis r23, lbl_807506A0@ha
    lwz r3, 0xdb8(r24)
    addi r23, r23, lbl_807506A0@l
    lfs f1, 0x2cc(r1)
    addi r4, r23, 0x11c7
    li r5, 0x0
    bl fn_803D6F78
    lwz r3, 0xdb8(r24)
    addi r4, r23, 0x11c7
    lfs f1, 0x2d0(r1)
    li r5, 0x1
    bl fn_803D6F78
lbl_fn_803D2A6C_00004218:
    lwz r3, 0xdbc(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_000042F8
    bl fn_803D6F44
    cmpwi r3, 0x0
    bne lbl_fn_803D2A6C_000042F8
    lwz r3, 0xdbc(r24)
    bl fn_803D6E2C
    bl fn_8000D9E8
    cmpwi r3, 0x0
    beq lbl_fn_803D2A6C_00004254
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r25, r3
    b lbl_fn_803D2A6C_00004258
lbl_fn_803D2A6C_00004254:
    li r25, 0x0
lbl_fn_803D2A6C_00004258:
    cmpwi r25, 0x0
    beq lbl_fn_803D2A6C_000042F8
    lfs f1, lbl_80885D58
    addi r3, r1, 0x30
    lfs f2, lbl_80885E60
    fmr f3, f1
    bl fn_8000D114
    mr r23, r3
    mr r3, r25
    bl fn_8013C38C
    mr r4, r3
    mr r5, r23
    addi r3, r1, 0x3c
    bl fn_80013410
    bl fn_8008B964
    mr r4, r3
    addi r3, r1, 0x2c0
    addi r5, r1, 0x3c
    bl fn_800BFAC8
    lfs f0, lbl_80885D58
    lfs f1, 0x2c8(r1)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_000042F8
    lfs f0, lbl_80885D60
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803D2A6C_000042F8
    lis r23, lbl_807506A0@ha
    lwz r3, 0xdbc(r24)
    addi r23, r23, lbl_807506A0@l
    lfs f1, 0x2c0(r1)
    addi r4, r23, 0x11c7
    li r5, 0x0
    bl fn_803D6F78
    lwz r3, 0xdbc(r24)
    addi r4, r23, 0x11c7
    lfs f1, 0x2c4(r1)
    li r5, 0x1
    bl fn_803D6F78
lbl_fn_803D2A6C_000042F8:
    bl fn_80151210
    bl fn_803CF740
lbl_fn_803D2A6C_00004300:
    li r0, 0xb28
    addi r11, r1, 0xab0
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0xb20(r1)
    li r0, 0xb18
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0xb10(r1)
    li r0, 0xb08
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0xb00(r1)
    li r0, 0xaf8
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0xaf0(r1)
    li r0, 0xae8
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0xae0(r1)
    li r0, 0xad8
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0xad0(r1)
    li r0, 0xac8
    psq_lx f25, r1, r0, 0, 0
    lfd f25, 0xac0(r1)
    li r0, 0xab8
    psq_lx f24, r1, r0, 0, 0
    lfd f24, 0xab0(r1)
    bl _restgpr_18
    lwz r0, 0xb34(r1)
    mtlr r0
    addi r1, r1, 0xb30
    blr
}
