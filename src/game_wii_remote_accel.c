#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_18(void);
extern void _savegpr_14(void);
extern void _savegpr_18(void);
extern void dtor_80084684(void);
extern void fn_8010DB54(void);
extern void fn_802291BC(void);
extern void fn_802297AC(void);
extern void fn_80370B78(void);
extern void fn_8047F6E4(void);
extern void fn_8047F850(void);
extern void fn_8047F88C(void);
extern void fn_8047F8B0(void);
extern void fn_8047F8C0(void);
extern void fn_8047F984(void);
extern void fn_8047F994(void);
extern void fn_80481A20(void);
extern void fn_80484FBC(void);
extern void fn_80486F50(void);
extern void fn_804870F4(void);
extern void fn_80488D6C(void);
extern void fn_80488DB8(void);
extern void fn_80489A50(void);
extern void fn_8048F184(void);
extern void fn_8048F9B0(void);
extern void fn_8048FC7C(void);
extern void fn_8053B02C(void);
extern void fn_8053E8CC(void);
extern void fn_8053EF74(void);
extern void fn_8053F6F0(void);
extern void fn_80540120(void);
extern void fn_8054119C(void);
extern void fn_80541214(void);
extern void fn_80541524(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075E7F8[];
extern u8 lbl_807C9140[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F540;
extern u32 lbl_8087F8B0;
extern u32 lbl_8087F8B4;
extern u32 lbl_8087F8B8;
extern u32 lbl_8087F8BC;
extern u32 lbl_8087F8C0;
extern u32 lbl_8087F8C4;
extern u32 lbl_8087F8C8;
extern u32 lbl_8087F8CC;
extern u32 lbl_8087F8D0;
extern u32 lbl_8087F8D4;
extern u32 lbl_8087F8D8;
extern u32 lbl_8087F8DC;
extern u32 lbl_8087F8E0;
extern u32 lbl_8087F8E4;
extern u32 lbl_8087F8E8;
extern u32 lbl_8087F8EC;
extern u32 lbl_8087F8F0;
extern u32 lbl_8087F8F4;
extern u32 lbl_8087F8F8;
extern u32 lbl_8087F8FC;
extern u32 lbl_8087F900;
extern u32 lbl_8087F904;
extern u32 lbl_8087F908;
extern u32 lbl_8087F90C;
extern u32 lbl_8087F910;
extern u32 lbl_8087F914;
extern u32 lbl_8087F918;
extern u32 lbl_8087F91C;
extern u32 lbl_8087F920;
extern u32 lbl_8087F924;
extern u32 lbl_8087F928;
extern u32 lbl_8087F92C;
extern u32 lbl_8087F930;
extern u32 lbl_8087F934;
extern u32 lbl_8087F938;
extern u32 lbl_8087F93C;
extern u32 lbl_8087F940;
extern u32 lbl_8087F944;
extern u32 lbl_8087F948;
extern u32 lbl_8087F94C;
extern u32 lbl_8087F950;
extern u32 lbl_8087F954;
extern u32 lbl_8087F958;
extern u32 lbl_8087F95C;
extern u32 lbl_8087F960;
extern u32 lbl_8087F964;
extern u32 lbl_8087F968;
extern u32 lbl_8087F96C;
extern u32 lbl_8087F970;
extern u32 lbl_8087F9C0;
extern u32 lbl_80887E20;
extern u32 lbl_80887E24;
extern u32 lbl_80887E28;

/* Function declarations */
void fn_8054F384(void);
void fn_8054F9E0(void);
void fn_8054FAD8(void);
void fn_8054FB14(void);
void fn_8054FBCC(void);
void fn_8054FBE4(void);
void fn_8054FFE4(void);
void fn_805501E0(void);
void fn_80550258(void);
void fn_80550A7C(void);
void fn_80550CE4(void);

asm void fn_8054F384(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F970
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000028
    beq lbl_fn_8054F384_00000020
    bl dtor_80084684
lbl_fn_8054F384_00000020:
    li r0, 0x0
    stw r0, lbl_8087F970
lbl_fn_8054F384_00000028:
    lwz r3, lbl_8087F96C
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000044
    beq lbl_fn_8054F384_0000003C
    bl dtor_80084684
lbl_fn_8054F384_0000003C:
    li r0, 0x0
    stw r0, lbl_8087F96C
lbl_fn_8054F384_00000044:
    lwz r3, lbl_8087F960
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000060
    beq lbl_fn_8054F384_00000058
    bl dtor_80084684
lbl_fn_8054F384_00000058:
    li r0, 0x0
    stw r0, lbl_8087F960
lbl_fn_8054F384_00000060:
    lwz r3, lbl_8087F95C
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_0000007C
    beq lbl_fn_8054F384_00000074
    bl dtor_80084684
lbl_fn_8054F384_00000074:
    li r0, 0x0
    stw r0, lbl_8087F95C
lbl_fn_8054F384_0000007C:
    lwz r3, lbl_8087F958
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000098
    beq lbl_fn_8054F384_00000090
    bl dtor_80084684
lbl_fn_8054F384_00000090:
    li r0, 0x0
    stw r0, lbl_8087F958
lbl_fn_8054F384_00000098:
    lwz r3, lbl_8087F954
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000000B4
    beq lbl_fn_8054F384_000000AC
    bl dtor_80084684
lbl_fn_8054F384_000000AC:
    li r0, 0x0
    stw r0, lbl_8087F954
lbl_fn_8054F384_000000B4:
    lwz r3, lbl_8087F950
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000000D0
    beq lbl_fn_8054F384_000000C8
    bl dtor_80084684
lbl_fn_8054F384_000000C8:
    li r0, 0x0
    stw r0, lbl_8087F950
lbl_fn_8054F384_000000D0:
    lwz r3, lbl_8087F94C
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000000EC
    beq lbl_fn_8054F384_000000E4
    bl dtor_80084684
lbl_fn_8054F384_000000E4:
    li r0, 0x0
    stw r0, lbl_8087F94C
lbl_fn_8054F384_000000EC:
    lwz r3, lbl_8087F948
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000108
    beq lbl_fn_8054F384_00000100
    bl dtor_80084684
lbl_fn_8054F384_00000100:
    li r0, 0x0
    stw r0, lbl_8087F948
lbl_fn_8054F384_00000108:
    lwz r3, lbl_8087F944
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000124
    beq lbl_fn_8054F384_0000011C
    bl dtor_80084684
lbl_fn_8054F384_0000011C:
    li r0, 0x0
    stw r0, lbl_8087F944
lbl_fn_8054F384_00000124:
    lwz r3, lbl_8087F940
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000140
    beq lbl_fn_8054F384_00000138
    bl dtor_80084684
lbl_fn_8054F384_00000138:
    li r0, 0x0
    stw r0, lbl_8087F940
lbl_fn_8054F384_00000140:
    lwz r3, lbl_8087F93C
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_0000015C
    beq lbl_fn_8054F384_00000154
    bl dtor_80084684
lbl_fn_8054F384_00000154:
    li r0, 0x0
    stw r0, lbl_8087F93C
lbl_fn_8054F384_0000015C:
    lwz r3, lbl_8087F968
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000178
    beq lbl_fn_8054F384_00000170
    bl dtor_80084684
lbl_fn_8054F384_00000170:
    li r0, 0x0
    stw r0, lbl_8087F968
lbl_fn_8054F384_00000178:
    lwz r3, lbl_8087F964
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000194
    beq lbl_fn_8054F384_0000018C
    bl dtor_80084684
lbl_fn_8054F384_0000018C:
    li r0, 0x0
    stw r0, lbl_8087F964
lbl_fn_8054F384_00000194:
    lwz r3, lbl_8087F938
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000001B0
    beq lbl_fn_8054F384_000001A8
    bl dtor_80084684
lbl_fn_8054F384_000001A8:
    li r0, 0x0
    stw r0, lbl_8087F938
lbl_fn_8054F384_000001B0:
    lwz r3, lbl_8087F934
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000001CC
    beq lbl_fn_8054F384_000001C4
    bl dtor_80084684
lbl_fn_8054F384_000001C4:
    li r0, 0x0
    stw r0, lbl_8087F934
lbl_fn_8054F384_000001CC:
    lwz r3, lbl_8087F930
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000001E8
    beq lbl_fn_8054F384_000001E0
    bl dtor_80084684
lbl_fn_8054F384_000001E0:
    li r0, 0x0
    stw r0, lbl_8087F930
lbl_fn_8054F384_000001E8:
    lwz r3, lbl_8087F92C
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000204
    beq lbl_fn_8054F384_000001FC
    bl dtor_80084684
lbl_fn_8054F384_000001FC:
    li r0, 0x0
    stw r0, lbl_8087F92C
lbl_fn_8054F384_00000204:
    lwz r3, lbl_8087F928
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000220
    beq lbl_fn_8054F384_00000218
    bl dtor_80084684
lbl_fn_8054F384_00000218:
    li r0, 0x0
    stw r0, lbl_8087F928
lbl_fn_8054F384_00000220:
    lwz r3, lbl_8087F924
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_0000023C
    beq lbl_fn_8054F384_00000234
    bl dtor_80084684
lbl_fn_8054F384_00000234:
    li r0, 0x0
    stw r0, lbl_8087F924
lbl_fn_8054F384_0000023C:
    lwz r3, lbl_8087F920
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000258
    beq lbl_fn_8054F384_00000250
    bl dtor_80084684
lbl_fn_8054F384_00000250:
    li r0, 0x0
    stw r0, lbl_8087F920
lbl_fn_8054F384_00000258:
    lwz r3, lbl_8087F91C
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000274
    beq lbl_fn_8054F384_0000026C
    bl dtor_80084684
lbl_fn_8054F384_0000026C:
    li r0, 0x0
    stw r0, lbl_8087F91C
lbl_fn_8054F384_00000274:
    lwz r3, lbl_8087F918
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000290
    beq lbl_fn_8054F384_00000288
    bl dtor_80084684
lbl_fn_8054F384_00000288:
    li r0, 0x0
    stw r0, lbl_8087F918
lbl_fn_8054F384_00000290:
    lwz r3, lbl_8087F914
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000002AC
    beq lbl_fn_8054F384_000002A4
    bl dtor_80084684
lbl_fn_8054F384_000002A4:
    li r0, 0x0
    stw r0, lbl_8087F914
lbl_fn_8054F384_000002AC:
    lwz r3, lbl_8087F90C
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000002C8
    beq lbl_fn_8054F384_000002C0
    bl dtor_80084684
lbl_fn_8054F384_000002C0:
    li r0, 0x0
    stw r0, lbl_8087F90C
lbl_fn_8054F384_000002C8:
    lwz r3, lbl_8087F910
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000002E4
    beq lbl_fn_8054F384_000002DC
    bl dtor_80084684
lbl_fn_8054F384_000002DC:
    li r0, 0x0
    stw r0, lbl_8087F910
lbl_fn_8054F384_000002E4:
    lwz r3, lbl_8087F908
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000300
    beq lbl_fn_8054F384_000002F8
    bl dtor_80084684
lbl_fn_8054F384_000002F8:
    li r0, 0x0
    stw r0, lbl_8087F908
lbl_fn_8054F384_00000300:
    lwz r3, lbl_8087F904
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_0000031C
    beq lbl_fn_8054F384_00000314
    bl dtor_80084684
lbl_fn_8054F384_00000314:
    li r0, 0x0
    stw r0, lbl_8087F904
lbl_fn_8054F384_0000031C:
    lwz r3, lbl_8087F8F4
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000338
    beq lbl_fn_8054F384_00000330
    bl dtor_80084684
lbl_fn_8054F384_00000330:
    li r0, 0x0
    stw r0, lbl_8087F8F4
lbl_fn_8054F384_00000338:
    lwz r3, lbl_8087F8F0
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000354
    beq lbl_fn_8054F384_0000034C
    bl dtor_80084684
lbl_fn_8054F384_0000034C:
    li r0, 0x0
    stw r0, lbl_8087F8F0
lbl_fn_8054F384_00000354:
    lwz r3, lbl_8087F8EC
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000370
    beq lbl_fn_8054F384_00000368
    bl dtor_80084684
lbl_fn_8054F384_00000368:
    li r0, 0x0
    stw r0, lbl_8087F8EC
lbl_fn_8054F384_00000370:
    lwz r3, lbl_8087F8E8
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_0000038C
    beq lbl_fn_8054F384_00000384
    bl dtor_80084684
lbl_fn_8054F384_00000384:
    li r0, 0x0
    stw r0, lbl_8087F8E8
lbl_fn_8054F384_0000038C:
    lwz r3, lbl_8087F8E4
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000003A8
    beq lbl_fn_8054F384_000003A0
    bl dtor_80084684
lbl_fn_8054F384_000003A0:
    li r0, 0x0
    stw r0, lbl_8087F8E4
lbl_fn_8054F384_000003A8:
    lwz r3, lbl_8087F8E0
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000003C4
    beq lbl_fn_8054F384_000003BC
    bl dtor_80084684
lbl_fn_8054F384_000003BC:
    li r0, 0x0
    stw r0, lbl_8087F8E0
lbl_fn_8054F384_000003C4:
    lwz r3, lbl_8087F8DC
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000003E0
    beq lbl_fn_8054F384_000003D8
    bl dtor_80084684
lbl_fn_8054F384_000003D8:
    li r0, 0x0
    stw r0, lbl_8087F8DC
lbl_fn_8054F384_000003E0:
    lwz r3, lbl_8087F8D8
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000003FC
    beq lbl_fn_8054F384_000003F4
    bl dtor_80084684
lbl_fn_8054F384_000003F4:
    li r0, 0x0
    stw r0, lbl_8087F8D8
lbl_fn_8054F384_000003FC:
    lwz r3, lbl_8087F8D4
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000418
    beq lbl_fn_8054F384_00000410
    bl dtor_80084684
lbl_fn_8054F384_00000410:
    li r0, 0x0
    stw r0, lbl_8087F8D4
lbl_fn_8054F384_00000418:
    lwz r3, lbl_8087F8D0
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000434
    beq lbl_fn_8054F384_0000042C
    bl dtor_80084684
lbl_fn_8054F384_0000042C:
    li r0, 0x0
    stw r0, lbl_8087F8D0
lbl_fn_8054F384_00000434:
    lwz r3, lbl_8087F8CC
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000450
    beq lbl_fn_8054F384_00000448
    bl dtor_80084684
lbl_fn_8054F384_00000448:
    li r0, 0x0
    stw r0, lbl_8087F8CC
lbl_fn_8054F384_00000450:
    lwz r3, lbl_8087F8C8
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_0000046C
    beq lbl_fn_8054F384_00000464
    bl dtor_80084684
lbl_fn_8054F384_00000464:
    li r0, 0x0
    stw r0, lbl_8087F8C8
lbl_fn_8054F384_0000046C:
    lwz r3, lbl_8087F8C4
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000488
    beq lbl_fn_8054F384_00000480
    bl dtor_80084684
lbl_fn_8054F384_00000480:
    li r0, 0x0
    stw r0, lbl_8087F8C4
lbl_fn_8054F384_00000488:
    lwz r3, lbl_8087F8C0
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000004A4
    beq lbl_fn_8054F384_0000049C
    bl dtor_80084684
lbl_fn_8054F384_0000049C:
    li r0, 0x0
    stw r0, lbl_8087F8C0
lbl_fn_8054F384_000004A4:
    lwz r3, lbl_8087F8BC
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000004C0
    beq lbl_fn_8054F384_000004B8
    bl dtor_80084684
lbl_fn_8054F384_000004B8:
    li r0, 0x0
    stw r0, lbl_8087F8BC
lbl_fn_8054F384_000004C0:
    lwz r3, lbl_8087F8B8
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000004DC
    beq lbl_fn_8054F384_000004D4
    bl dtor_80084684
lbl_fn_8054F384_000004D4:
    li r0, 0x0
    stw r0, lbl_8087F8B8
lbl_fn_8054F384_000004DC:
    lwz r3, lbl_8087F8B4
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_000004F8
    beq lbl_fn_8054F384_000004F0
    bl dtor_80084684
lbl_fn_8054F384_000004F0:
    li r0, 0x0
    stw r0, lbl_8087F8B4
lbl_fn_8054F384_000004F8:
    lwz r3, lbl_8087F8B0
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000514
    beq lbl_fn_8054F384_0000050C
    bl dtor_80084684
lbl_fn_8054F384_0000050C:
    li r0, 0x0
    stw r0, lbl_8087F8B0
lbl_fn_8054F384_00000514:
    lwz r3, lbl_8087F900
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000530
    beq lbl_fn_8054F384_00000528
    bl dtor_80084684
lbl_fn_8054F384_00000528:
    li r0, 0x0
    stw r0, lbl_8087F900
lbl_fn_8054F384_00000530:
    lwz r3, lbl_8087F8FC
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_0000054C
    beq lbl_fn_8054F384_00000544
    bl dtor_80084684
lbl_fn_8054F384_00000544:
    li r0, 0x0
    stw r0, lbl_8087F8FC
lbl_fn_8054F384_0000054C:
    lwz r3, lbl_8087F8F8
    cmpwi r3, 0x0
    beq lbl_fn_8054F384_00000568
    beq lbl_fn_8054F384_00000560
    bl dtor_80084684
lbl_fn_8054F384_00000560:
    li r0, 0x0
    stw r0, lbl_8087F8F8
lbl_fn_8054F384_00000568:
    lis r3, lbl_807C9140@ha
    li r0, 0x0
    stwu r0, lbl_807C9140@l(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x60(r3)
    stw r0, 0x64(r3)
    stw r0, 0x68(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    stw r0, 0x74(r3)
    stw r0, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x80(r3)
    stw r0, 0x84(r3)
    stw r0, 0x88(r3)
    stw r0, 0x8c(r3)
    stw r0, 0x90(r3)
    stw r0, 0x94(r3)
    stw r0, 0x98(r3)
    stw r0, 0x9c(r3)
    stw r0, 0xa0(r3)
    stw r0, 0xa4(r3)
    stw r0, 0xa8(r3)
    stw r0, 0xac(r3)
    stw r0, 0xb0(r3)
    stw r0, 0xb4(r3)
    stw r0, 0xb8(r3)
    stw r0, 0xbc(r3)
    stw r0, 0xc0(r3)
    stw r0, 0xc4(r3)
    stw r0, 0xc8(r3)
    stw r0, 0xcc(r3)
    stw r0, 0xd0(r3)
    stw r0, 0xd4(r3)
    stw r0, 0xd8(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054F9E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x194(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8054F9E0_0000068C
    lwz r0, 0x98(r3)
    oris r0, r0, 0x30
    stw r0, 0x98(r3)
    b lbl_fn_8054F9E0_00000728
lbl_fn_8054F9E0_0000068C:
    cmpwi r0, 0x5
    bne lbl_fn_8054F9E0_000006A8
    bl fn_8053F6F0
    lwz r0, 0x98(r31)
    oris r0, r0, 0x10
    stw r0, 0x98(r31)
    b lbl_fn_8054F9E0_00000728
lbl_fn_8054F9E0_000006A8:
    cmpwi r0, 0x6
    bne lbl_fn_8054F9E0_000006C0
    lwz r0, 0x98(r3)
    oris r0, r0, 0x10
    stw r0, 0x98(r3)
    b lbl_fn_8054F9E0_00000728
lbl_fn_8054F9E0_000006C0:
    cmpwi r0, 0x8
    beq lbl_fn_8054F9E0_000006D0
    cmpwi r0, 0xe
    bne lbl_fn_8054F9E0_00000718
lbl_fn_8054F9E0_000006D0:
    mr r3, r31
    bl fn_80540120
    cmpwi r3, 0x0
    beq lbl_fn_8054F9E0_000006FC
    lfs f0, lbl_80887E20
    mr r3, r31
    stfs f0, 0x198(r31)
    li r4, 0x9
    stfs f0, 0x19c(r31)
    bl fn_8053E8CC
    b lbl_fn_8054F9E0_00000728
lbl_fn_8054F9E0_000006FC:
    mr r3, r31
    li r4, 0x6
    bl fn_8053E8CC
    lwz r0, 0x98(r31)
    oris r0, r0, 0x10
    stw r0, 0x98(r31)
    b lbl_fn_8054F9E0_00000728
lbl_fn_8054F9E0_00000718:
    cmpwi r0, 0xc
    bne lbl_fn_8054F9E0_00000728
    li r4, 0xa
    bl fn_8053E8CC
lbl_fn_8054F9E0_00000728:
    lwz r0, 0x38(r31)
    lfs f1, lbl_80887E24
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r31)
    lwz r3, lbl_8087F540
    bl fn_8047F984
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054FAD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8054FAD8_00000774
    li r4, 0xb
    bl fn_8053E8CC
lbl_fn_8054FAD8_00000774:
    lwz r3, lbl_8087F540
    lfs f1, lbl_80887E20
    bl fn_8047F984
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054FB14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    beq lbl_fn_8054FB14_000007C0
    cmpwi r0, 0xc
    bne lbl_fn_8054FB14_000007EC
lbl_fn_8054FB14_000007C0:
    mr r3, r30
    bl fn_80550A7C
    lfs f0, lbl_80887E20
    li r0, -0x1
    stfs f0, 0x198(r30)
    mr r3, r30
    li r4, 0x7
    stfs f0, 0x19c(r30)
    stw r0, 0x1a4(r30)
    bl fn_8053E8CC
    b lbl_fn_8054FB14_00000810
lbl_fn_8054FB14_000007EC:
    cmpwi r0, 0xe
    bne lbl_fn_8054FB14_00000810
    lfs f0, lbl_80887E20
    li r0, -0x1
    stfs f0, 0x198(r3)
    li r4, 0xe
    stfs f0, 0x19c(r3)
    stw r0, 0x1a4(r3)
    bl fn_8053E8CC
lbl_fn_8054FB14_00000810:
    lwz r3, lbl_8087F540
    lfs f1, lbl_80887E24
    bl fn_8047F984
    cmpwi r31, 0x0
    beq lbl_fn_8054FB14_00000830
    lwz r0, 0x98(r30)
    oris r0, r0, 0x1
    stw r0, 0x98(r30)
lbl_fn_8054FB14_00000830:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054FBCC(void)
{
    nofralloc
    lwz r0, 0x98(r3)
    extrwi r0, r0, 1, 15
    cmplwi r0, 0x1
    bnelr
    b fn_8053EF74
    blr
}

asm void fn_8054FBE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x1b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054FBE4_00000C40
    cmpwi r0, 0x1
    bne lbl_fn_8054FBE4_00000AF0
    lwz r5, 0x1b4(r3)
    lwz r0, 0x1a0(r3)
    cmpw r5, r0
    beq lbl_fn_8054FBE4_000009F8
    cmpwi r4, 0x0
    beq lbl_fn_8054FBE4_000008B0
    bl fn_80550A7C
lbl_fn_8054FBE4_000008B0:
    lwz r4, 0x1a0(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    blt lbl_fn_8054FBE4_000008D0
    lwz r0, 0xbc(r31)
    cmpw r4, r0
    bge lbl_fn_8054FBE4_000008D0
    li r3, 0x1
lbl_fn_8054FBE4_000008D0:
    cmpwi r3, 0x0
    beq lbl_fn_8054FBE4_000008E8
    lwz r3, 0xb8(r31)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    b lbl_fn_8054FBE4_000008EC
lbl_fn_8054FBE4_000008E8:
    li r3, 0x0
lbl_fn_8054FBE4_000008EC:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8054FBE4_00000940
    lwz r4, 0x1b4(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    blt lbl_fn_8054FBE4_00000918
    lwz r0, 0xbc(r31)
    cmpw r4, r0
    bge lbl_fn_8054FBE4_00000918
    li r3, 0x1
lbl_fn_8054FBE4_00000918:
    cmpwi r3, 0x0
    beq lbl_fn_8054FBE4_00000930
    lwz r3, 0xb8(r31)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    b lbl_fn_8054FBE4_00000934
lbl_fn_8054FBE4_00000930:
    li r3, 0x0
lbl_fn_8054FBE4_00000934:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8054FBE4_000009A4
lbl_fn_8054FBE4_00000940:
    lwz r28, lbl_8087F540
    lwz r29, 0xc0(r28)
    addi r30, r28, 0xbc
    cmplw r29, r30
    beq lbl_fn_8054FBE4_00000994
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r29)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r3)
    b lbl_fn_8054FBE4_0000098C
lbl_fn_8054FBE4_00000974:
    mr r3, r29
    lwz r29, 0x4(r29)
    bl dtor_80084684
    lwz r3, 0xb8(r28)
    subi r0, r3, 0x1
    stw r0, 0xb8(r28)
lbl_fn_8054FBE4_0000098C:
    cmplw r29, r30
    bne lbl_fn_8054FBE4_00000974
lbl_fn_8054FBE4_00000994:
    lwz r3, lbl_8087F540
    li r4, 0x1
    li r5, 0x1
    bl fn_8047F994
lbl_fn_8054FBE4_000009A4:
    lwz r0, 0x1b4(r31)
    stw r0, 0x1a0(r31)
    lwz r28, lbl_8087F540
    addi r3, r28, 0x1f38
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8054FBE4_000009F8
    lwz r0, 0x1f5c(r28)
    lwz r3, lbl_8087F540
    cmpwi r0, 0x0
    beq lbl_fn_8054FBE4_000009DC
    li r0, 0x0
    stw r0, 0x1f5c(r28)
    b lbl_fn_8054FBE4_000009F8
lbl_fn_8054FBE4_000009DC:
    lwz r0, 0x1f1c(r3)
    clrrwi r3, r0, 31
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8054FBE4_000009F8
    mr r3, r28
    bl fn_80488D6C
lbl_fn_8054FBE4_000009F8:
    lwz r4, 0x1b8(r31)
    lis r0, 0x4330
    lis r3, lbl_8075E7F8@ha
    stw r0, 0x8(r1)
    xoris r5, r4, 0x8000
    lfd f2, lbl_8075E7F8@l(r3)
    stw r5, 0xc(r1)
    li r6, 0x0
    mr r4, r6
    li r3, 0x0
    lfd f0, 0x8(r1)
    stw r5, 0x14(r1)
    fsubs f1, f0, f2
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    stfs f1, 0x19c(r31)
    fsubs f0, f0, f2
    stfs f0, 0x198(r31)
    b lbl_fn_8054FBE4_00000A64
lbl_fn_8054FBE4_00000A44:
    lwz r0, 0x164(r31)
    add. r5, r0, r3
    beq lbl_fn_8054FBE4_00000A5C
    stw r4, 0xb8(r5)
    stw r4, 0xbc(r5)
    stw r4, 0xc0(r5)
lbl_fn_8054FBE4_00000A5C:
    addi r6, r6, 0x1
    addi r3, r3, 0x1c0
lbl_fn_8054FBE4_00000A64:
    lwz r0, 0x168(r31)
    cmpw r6, r0
    blt lbl_fn_8054FBE4_00000A44
    lwz r0, 0x190(r31)
    cmpwi r0, 0x5e7
    beq lbl_fn_8054FBE4_00000AE0
    cmpwi r0, 0x841
    beq lbl_fn_8054FBE4_00000AE0
    cmpwi r0, 0xe14
    bne lbl_fn_8054FBE4_00000AB0
    mr r3, r31
    bl fn_80541214
    cmpwi r3, 0x0
    beq lbl_fn_8054FBE4_00000AB0
    mr r3, r31
    bl fn_80541214
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054FBE4_00000AE0
lbl_fn_8054FBE4_00000AB0:
    lwz r0, 0x190(r31)
    cmpwi r0, 0x151e
    bne lbl_fn_8054FBE4_00000C38
    mr r3, r31
    bl fn_80541214
    cmpwi r3, 0x0
    beq lbl_fn_8054FBE4_00000C38
    mr r3, r31
    bl fn_80541214
    lwz r0, 0xc(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8054FBE4_00000C38
lbl_fn_8054FBE4_00000AE0:
    lwz r0, 0x98(r31)
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x98(r31)
    b lbl_fn_8054FBE4_00000C38
lbl_fn_8054FBE4_00000AF0:
    lwz r5, 0x1b4(r3)
    lwz r0, 0x1a0(r3)
    cmpw r5, r0
    beq lbl_fn_8054FBE4_00000C10
    cmpwi r4, 0x0
    beq lbl_fn_8054FBE4_00000B0C
    bl fn_80550A7C
lbl_fn_8054FBE4_00000B0C:
    lwz r4, 0x1a0(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    blt lbl_fn_8054FBE4_00000B2C
    lwz r0, 0xbc(r31)
    cmpw r4, r0
    bge lbl_fn_8054FBE4_00000B2C
    li r3, 0x1
lbl_fn_8054FBE4_00000B2C:
    cmpwi r3, 0x0
    beq lbl_fn_8054FBE4_00000B44
    lwz r3, 0xb8(r31)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    b lbl_fn_8054FBE4_00000B48
lbl_fn_8054FBE4_00000B44:
    li r3, 0x0
lbl_fn_8054FBE4_00000B48:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8054FBE4_00000B9C
    lwz r4, 0x1b4(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    blt lbl_fn_8054FBE4_00000B74
    lwz r0, 0xbc(r31)
    cmpw r4, r0
    bge lbl_fn_8054FBE4_00000B74
    li r3, 0x1
lbl_fn_8054FBE4_00000B74:
    cmpwi r3, 0x0
    beq lbl_fn_8054FBE4_00000B8C
    lwz r3, 0xb8(r31)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    b lbl_fn_8054FBE4_00000B90
lbl_fn_8054FBE4_00000B8C:
    li r3, 0x0
lbl_fn_8054FBE4_00000B90:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8054FBE4_00000C00
lbl_fn_8054FBE4_00000B9C:
    lwz r28, lbl_8087F540
    lwz r29, 0xc0(r28)
    addi r30, r28, 0xbc
    cmplw r29, r30
    beq lbl_fn_8054FBE4_00000BF0
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r29)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r3)
    b lbl_fn_8054FBE4_00000BE8
lbl_fn_8054FBE4_00000BD0:
    mr r3, r29
    lwz r29, 0x4(r29)
    bl dtor_80084684
    lwz r3, 0xb8(r28)
    subi r0, r3, 0x1
    stw r0, 0xb8(r28)
lbl_fn_8054FBE4_00000BE8:
    cmplw r29, r30
    bne lbl_fn_8054FBE4_00000BD0
lbl_fn_8054FBE4_00000BF0:
    lwz r3, lbl_8087F540
    li r4, 0x1
    li r5, 0x1
    bl fn_8047F994
lbl_fn_8054FBE4_00000C00:
    lwz r0, 0x1b4(r31)
    lfs f0, lbl_80887E20
    stw r0, 0x1a0(r31)
    stfs f0, 0x19c(r31)
lbl_fn_8054FBE4_00000C10:
    lwz r4, 0x1b8(r31)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_8075E7F8@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8075E7F8@l(r3)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    stfs f0, 0x198(r31)
lbl_fn_8054FBE4_00000C38:
    li r0, 0x0
    stw r0, 0x1b0(r31)
lbl_fn_8054FBE4_00000C40:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8054FFE4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80541214
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8054FFE4_00000E38
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8054FFE4_00000CAC
    cmpwi r0, 0x3
    bne lbl_fn_8054FFE4_00000E38
lbl_fn_8054FFE4_00000CAC:
    lwz r5, 0x1a4(r31)
    lwz r0, 0x1a0(r31)
    lwz r4, 0x1c(r3)
    cmpw r5, r0
    beq lbl_fn_8054FFE4_00000D28
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054FFE4_00000CE8
    cmpwi r0, 0x1
    beq lbl_fn_8054FFE4_00000CF4
    cmpwi r0, 0x2
    beq lbl_fn_8054FFE4_00000D08
    cmpwi r0, 0x3
    beq lbl_fn_8054FFE4_00000D20
    b lbl_fn_8054FFE4_00000D28
lbl_fn_8054FFE4_00000CE8:
    lwz r3, lbl_8087F540
    bl fn_8047F8B0
    b lbl_fn_8054FFE4_00000D28
lbl_fn_8054FFE4_00000CF4:
    lwz r3, lbl_8087F540
    lis r5, 0xff00
    li r6, 0x0
    bl fn_8047F850
    b lbl_fn_8054FFE4_00000D28
lbl_fn_8054FFE4_00000D08:
    lis r6, 0x100
    lwz r3, lbl_8087F540
    li r5, -0x1
    subi r6, r6, 0x1
    bl fn_8047F850
    b lbl_fn_8054FFE4_00000D28
lbl_fn_8054FFE4_00000D20:
    lwz r3, lbl_8087F540
    bl fn_8047F88C
lbl_fn_8054FFE4_00000D28:
    lwz r29, 0x24(r30)
    lis r3, lbl_8075E7F8@ha
    lwz r0, 0x2c(r30)
    lfd f2, lbl_8075E7F8@l(r3)
    subf r0, r29, r0
    lfs f1, 0x198(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8054FFE4_00000DBC
    stw r0, 0x14(r1)
    lfs f1, 0x19c(r31)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_8054FFE4_00000DBC
    lwz r0, 0x20(r30)
    cmpwi r0, 0x1
    beq lbl_fn_8054FFE4_00000D8C
    cmpwi r0, 0x2
    beq lbl_fn_8054FFE4_00000DA4
    b lbl_fn_8054FFE4_00000DBC
lbl_fn_8054FFE4_00000D8C:
    lwz r3, lbl_8087F540
    mr r4, r29
    li r5, 0x0
    lis r6, 0xff00
    bl fn_8047F850
    b lbl_fn_8054FFE4_00000DBC
lbl_fn_8054FFE4_00000DA4:
    lis r5, 0x100
    lwz r3, lbl_8087F540
    mr r4, r29
    li r6, -0x1
    subi r5, r5, 0x1
    bl fn_8047F850
lbl_fn_8054FFE4_00000DBC:
    cmpwi r29, 0x0
    beq lbl_fn_8054FFE4_00000E30
    srwi r0, r29, 31
    lis r3, lbl_8075E7F8@ha
    add r4, r0, r29
    lwz r0, 0x2c(r30)
    srawi r4, r4, 1
    lfd f2, lbl_8075E7F8@l(r3)
    subf r0, r4, r0
    lfs f1, 0x198(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8054FFE4_00000E30
    stw r0, 0x14(r1)
    lfs f1, 0x19c(r31)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f1, f0
    bge lbl_fn_8054FFE4_00000E30
    lwz r0, 0x20(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8054FFE4_00000E30
    lwz r3, lbl_8087F540
    mr r4, r29
    bl fn_8047F88C
lbl_fn_8054FFE4_00000E30:
    lwz r3, lbl_8087F540
    bl fn_8047F6E4
lbl_fn_8054FFE4_00000E38:
    lwz r0, 0x1a0(r31)
    stw r0, 0x1a4(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805501E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x1c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805501E0_00000E9C
    cmpwi r4, 0x0
    beq lbl_fn_805501E0_00000E9C
    lwz r3, lbl_8087F540
    li r4, 0x1
    bl fn_8047F8C0
    b lbl_fn_805501E0_00000EB8
lbl_fn_805501E0_00000E9C:
    cmpwi r0, 0x0
    beq lbl_fn_805501E0_00000EB8
    cmpwi r4, 0x0
    bne lbl_fn_805501E0_00000EB8
    lwz r3, lbl_8087F540
    li r4, 0x0
    bl fn_8047F8C0
lbl_fn_805501E0_00000EB8:
    stw r31, 0x1c0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80550258(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x60
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    bl _savegpr_14
    lwz r4, 0x98(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r15, r3
    oris r4, r4, 0x4
    stw r4, 0x98(r3)
    lwz r5, lbl_8087F9C0
    stw r0, 0x10(r1)
    cmpwi r5, 0x0
    beq lbl_fn_80550258_00000F44
    lwz r0, 0x84(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80550258_00000F44
    rlwinm r0, r4, 0, 14, 12
    stw r0, 0x98(r3)
lbl_fn_80550258_00000F44:
    lwz r3, 0x1c0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80550258_00000FE4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1f
    bne lbl_fn_80550258_00000F80
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80550258_00000F70
    lwz r3, 0x2c(r3)
    b lbl_fn_80550258_00000F74
lbl_fn_80550258_00000F70:
    li r3, 0x0
lbl_fn_80550258_00000F74:
    lwz r3, 0x4(r3)
    bl fn_8010DB54
    b lbl_fn_80550258_00000F90
lbl_fn_80550258_00000F80:
    lis r3, lbl_807C9140@ha
    slwi r0, r0, 2
    addi r3, r3, lbl_807C9140@l
    lwzx r3, r3, r0
lbl_fn_80550258_00000F90:
    cmpwi r3, 0x0
    bne lbl_fn_80550258_00000FA0
    li r0, 0x0
    b lbl_fn_80550258_00000FE8
lbl_fn_80550258_00000FA0:
    lwz r12, 0x0(r3)
    lwz r4, 0x1c0(r15)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_fn_80550258_00000FC4
    li r0, 0x1
    b lbl_fn_80550258_00000FE8
lbl_fn_80550258_00000FC4:
    lwz r0, 0x1c0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80550258_00000FDC
    lwz r3, lbl_8087F540
    li r4, 0x0
    bl fn_8047F8C0
lbl_fn_80550258_00000FDC:
    li r0, 0x0
    stw r0, 0x1c0(r15)
lbl_fn_80550258_00000FE4:
    li r0, 0x0
lbl_fn_80550258_00000FE8:
    cmpwi r0, 0x0
    bne lbl_fn_80550258_000016C0
    mr r3, r15
    li r4, 0x1
    bl fn_8054FBE4
    lwz r3, lbl_8087F540
    lfs f1, 0x198(r15)
    lfs f2, 0xb4(r3)
    lfs f0, 0x19c(r15)
    fadds f1, f1, f2
    stfs f1, 0x198(r15)
    fcmpo cr0, f0, f1
    ble lbl_fn_80550258_00001024
    lfs f0, lbl_80887E20
    stfs f0, 0x19c(r15)
lbl_fn_80550258_00001024:
    mr r3, r15
    bl fn_8054FFE4
    lwz r0, 0x50(r15)
    cmpwi r0, 0x1
    beq lbl_fn_80550258_00001040
    cmpwi r0, 0x3
    bne lbl_fn_80550258_00001060
lbl_fn_80550258_00001040:
    lwz r3, lbl_8087F540
    bl fn_80481A20
    lwz r3, lbl_8087F540
    li r4, 0x0
    li r5, 0x0
    bl fn_80489A50
    lwz r3, lbl_8087F540
    bl fn_80488DB8
lbl_fn_80550258_00001060:
    mr r3, r15
    bl fn_80541214
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_80550258_000016B8
    lis r3, lbl_8075E7F8@ha
    lis r25, lbl_807C9140@ha
    lfd f31, lbl_8075E7F8@l(r3)
    addi r25, r25, lbl_807C9140@l
    lfs f29, lbl_80887E28
    li r19, 0x0
    li r31, 0x0
    li r14, 0x0
    b lbl_fn_80550258_000014D8
lbl_fn_80550258_00001098:
    cmpwi r19, 0x0
    li r0, 0x0
    blt lbl_fn_80550258_000010B0
    cmpw r19, r3
    bge lbl_fn_80550258_000010B0
    li r0, 0x1
lbl_fn_80550258_000010B0:
    cmpwi r0, 0x0
    beq lbl_fn_80550258_000010C4
    lwz r3, 0x3c(r20)
    lwzx r23, r3, r31
    b lbl_fn_80550258_000010C8
lbl_fn_80550258_000010C4:
    li r23, 0x0
lbl_fn_80550258_000010C8:
    lwz r0, 0x14(r23)
    cmpwi r0, 0x0
    beq lbl_fn_80550258_000014D0
    lwz r0, 0xc(r23)
    cmpwi r0, 0x3
    bne lbl_fn_80550258_00001124
    lwz r0, 0x168(r15)
    li r3, 0x0
    lwz r4, 0x10(r23)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80550258_00001118
lbl_fn_80550258_000010F8:
    lwz r0, 0x164(r15)
    add r5, r0, r3
    lwz r0, 0x14(r5)
    cmpw r4, r0
    bne lbl_fn_80550258_00001110
    b lbl_fn_80550258_0000111C
lbl_fn_80550258_00001110:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_80550258_000010F8
lbl_fn_80550258_00001118:
    li r5, 0x0
lbl_fn_80550258_0000111C:
    stw r5, 0x1bc(r15)
    b lbl_fn_80550258_00001128
lbl_fn_80550258_00001124:
    stw r14, 0x1bc(r15)
lbl_fn_80550258_00001128:
    li r18, 0x0
    li r30, 0x0
    b lbl_fn_80550258_000014C4
lbl_fn_80550258_00001134:
    cmpwi r18, 0x0
    li r0, 0x0
    blt lbl_fn_80550258_0000114C
    cmpw r18, r3
    bge lbl_fn_80550258_0000114C
    li r0, 0x1
lbl_fn_80550258_0000114C:
    cmpwi r0, 0x0
    beq lbl_fn_80550258_00001160
    lwz r3, 0x18(r23)
    lwzx r22, r3, r30
    b lbl_fn_80550258_00001164
lbl_fn_80550258_00001160:
    li r22, 0x0
lbl_fn_80550258_00001164:
    lwz r0, 0x10(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80550258_000014BC
    li r17, 0x0
    li r29, 0x0
    b lbl_fn_80550258_000014B0
lbl_fn_80550258_0000117C:
    cmpwi r17, 0x0
    li r0, 0x0
    blt lbl_fn_80550258_00001194
    cmpw r17, r3
    bge lbl_fn_80550258_00001194
    li r0, 0x1
lbl_fn_80550258_00001194:
    cmpwi r0, 0x0
    beq lbl_fn_80550258_000011A8
    lwz r3, 0x14(r22)
    lwzx r21, r3, r29
    b lbl_fn_80550258_000011AC
lbl_fn_80550258_000011A8:
    li r21, 0x0
lbl_fn_80550258_000011AC:
    stw r17, 0x3c(r21)
    lwz r0, 0xc(r21)
    cmpwi r0, 0x1f
    bne lbl_fn_80550258_000011E0
    lwz r0, 0x30(r21)
    cmpwi r0, 0x0
    ble lbl_fn_80550258_000011D0
    lwz r3, 0x2c(r21)
    b lbl_fn_80550258_000011D4
lbl_fn_80550258_000011D0:
    li r3, 0x0
lbl_fn_80550258_000011D4:
    lwz r3, 0x4(r3)
    bl fn_8010DB54
    b lbl_fn_80550258_000011E8
lbl_fn_80550258_000011E0:
    slwi r0, r0, 2
    lwzx r3, r25, r0
lbl_fn_80550258_000011E8:
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_80550258_000014A8
    lwz r5, 0x10(r21)
    li r0, 0x0
    lwz r3, 0x18(r21)
    xoris r4, r5, 0x8000
    stw r4, 0xc(r1)
    add r3, r5, r3
    lfs f0, 0x19c(r15)
    xoris r3, r3, 0x8000
    stw r3, 0x14(r1)
    lwz r5, 0x14(r21)
    fsubs f0, f0, f29
    lwz r4, 0x1c(r21)
    lfd f1, 0x10(r1)
    xoris r3, r5, 0x8000
    lfd f2, 0x8(r1)
    subf r4, r4, r5
    xoris r4, r4, 0x8000
    stw r3, 0x14(r1)
    fsubs f30, f2, f31
    stw r4, 0xc(r1)
    fsubs f3, f1, f31
    lfd f1, 0x10(r1)
    lfd f2, 0x8(r1)
    fcmpo cr0, f30, f0
    fsubs f28, f1, f31
    fsubs f2, f2, f31
    cror eq, gt, eq
    bne lbl_fn_80550258_00001274
    lfs f0, 0x198(r15)
    fcmpo cr0, f30, f0
    bge lbl_fn_80550258_00001274
    li r0, 0x1
lbl_fn_80550258_00001274:
    lfs f0, 0x19c(r15)
    li r26, 0x0
    fsubs f0, f0, f29
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80550258_0000129C
    lfs f0, 0x198(r15)
    fcmpo cr0, f3, f0
    bge lbl_fn_80550258_0000129C
    li r26, 0x1
lbl_fn_80550258_0000129C:
    lfs f0, 0x19c(r15)
    li r27, 0x0
    fsubs f0, f0, f29
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80550258_000012C4
    lfs f0, 0x198(r15)
    fcmpo cr0, f2, f0
    bge lbl_fn_80550258_000012C4
    li r27, 0x1
lbl_fn_80550258_000012C4:
    lfs f0, 0x19c(r15)
    li r28, 0x0
    fsubs f0, f0, f29
    fcmpo cr0, f28, f0
    cror eq, gt, eq
    bne lbl_fn_80550258_000012EC
    lfs f0, 0x198(r15)
    fcmpo cr0, f28, f0
    bge lbl_fn_80550258_000012EC
    li r28, 0x1
lbl_fn_80550258_000012EC:
    cmpwi r0, 0x0
    li r16, 0x0
    beq lbl_fn_80550258_00001390
    cmpwi r28, 0x0
    beq lbl_fn_80550258_00001390
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    li r5, 0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r16, r3
    mr r3, r24
    mr r4, r21
    lwz r12, 0xc(r12)
    li r5, 0x2
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    li r5, 0x3
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80550258_0000145C
lbl_fn_80550258_00001390:
    cmpwi r0, 0x0
    beq lbl_fn_80550258_000013B4
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80550258_000013B4:
    cmpwi r26, 0x0
    beq lbl_fn_80550258_000013D8
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    li r5, 0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80550258_000013D8:
    lfs f0, 0x19c(r15)
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    bne lbl_fn_80550258_00001414
    lfs f0, 0x198(r15)
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_80550258_00001414
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    mr r16, r3
lbl_fn_80550258_00001414:
    cmpwi r27, 0x0
    beq lbl_fn_80550258_00001438
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    li r5, 0x2
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80550258_00001438:
    cmpwi r28, 0x0
    beq lbl_fn_80550258_0000145C
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r21
    li r5, 0x3
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80550258_0000145C:
    cmpwi r16, 0x3
    bne lbl_fn_80550258_000014A8
    lwz r0, 0x1c0(r15)
    cmpwi r0, 0x0
    bne lbl_fn_80550258_00001488
    cmpwi r21, 0x0
    beq lbl_fn_80550258_00001488
    lwz r3, lbl_8087F540
    li r4, 0x1
    bl fn_8047F8C0
    b lbl_fn_80550258_000014A4
lbl_fn_80550258_00001488:
    cmpwi r0, 0x0
    beq lbl_fn_80550258_000014A4
    cmpwi r21, 0x0
    bne lbl_fn_80550258_000014A4
    lwz r3, lbl_8087F540
    li r4, 0x0
    bl fn_8047F8C0
lbl_fn_80550258_000014A4:
    stw r21, 0x1c0(r15)
lbl_fn_80550258_000014A8:
    addi r17, r17, 0x1
    addi r29, r29, 0x8
lbl_fn_80550258_000014B0:
    lwz r3, 0x18(r22)
    cmpw r17, r3
    blt lbl_fn_80550258_0000117C
lbl_fn_80550258_000014BC:
    addi r18, r18, 0x1
    addi r30, r30, 0x8
lbl_fn_80550258_000014C4:
    lwz r3, 0x1c(r23)
    cmpw r18, r3
    blt lbl_fn_80550258_00001134
lbl_fn_80550258_000014D0:
    addi r19, r19, 0x1
    addi r31, r31, 0x8
lbl_fn_80550258_000014D8:
    lwz r3, 0x40(r20)
    cmpw r19, r3
    blt lbl_fn_80550258_00001098
    mr r3, r15
    li r4, 0x0
    bl fn_8054FBE4
    lwz r0, 0x50(r15)
    cmpwi r0, 0x1
    beq lbl_fn_80550258_00001504
    cmpwi r0, 0x3
    bne lbl_fn_80550258_00001510
lbl_fn_80550258_00001504:
    lwz r3, lbl_8087F540
    mr r4, r20
    bl fn_8048F9B0
lbl_fn_80550258_00001510:
    mr r3, r15
    bl fn_80541214
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_fn_80550258_000016B8
    lwz r0, 0x2c(r3)
    lis r3, lbl_8075E7F8@ha
    lfd f1, lbl_8075E7F8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f2, 0x198(r15)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80550258_000016B8
    stw r0, 0x14(r1)
    lwz r0, 0x98(r15)
    lfd f0, 0x10(r1)
    extrwi r0, r0, 1, 8
    fsubs f0, f0, f1
    cmplwi r0, 0x1
    stfs f0, 0x198(r15)
    bne lbl_fn_80550258_00001584
    lwz r3, 0x280(r15)
    cmpwi r3, 0x0
    beq lbl_fn_80550258_000016B8
    bl fn_802291BC
    cmpwi r3, 0x0
    bne lbl_fn_80550258_000016B8
lbl_fn_80550258_00001584:
    mr r3, r16
    bl fn_8053B02C
    cmpwi r3, -0x1
    beq lbl_fn_80550258_00001668
    mr r3, r16
    bl fn_8053B02C
    lwz r0, 0xbc(r15)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80550258_000015D0
lbl_fn_80550258_000015B0:
    lwz r4, 0xb8(r15)
    lwzx r4, r4, r5
    lwz r0, 0xc(r4)
    cmpw r3, r0
    bne lbl_fn_80550258_000015C8
    b lbl_fn_80550258_000015D4
lbl_fn_80550258_000015C8:
    addi r5, r5, 0x8
    bdnz lbl_fn_80550258_000015B0
lbl_fn_80550258_000015D0:
    li r4, 0x0
lbl_fn_80550258_000015D4:
    mr r3, r15
    bl fn_8054119C
    mr r4, r3
    mr r3, r15
    li r5, 0x0
    bl fn_80541524
    lwz r0, 0x50(r15)
    cmpwi r0, 0x1
    beq lbl_fn_80550258_00001600
    cmpwi r0, 0x3
    bne lbl_fn_80550258_00001638
lbl_fn_80550258_00001600:
    lwz r3, lbl_8087F540
    bl fn_80484FBC
    lwz r3, lbl_8087F540
    bl fn_804870F4
    lwz r3, lbl_8087F540
    bl fn_80486F50
    lwz r3, lbl_8087F540
    li r4, 0x0
    bl fn_8048F184
    lwz r3, lbl_8087F540
    li r4, 0x1
    bl fn_8048F184
    lwz r3, lbl_8087F540
    bl fn_8048FC7C
lbl_fn_80550258_00001638:
    lwz r3, 0x280(r15)
    cmpwi r3, 0x0
    beq lbl_fn_80550258_00001648
    bl fn_802297AC
lbl_fn_80550258_00001648:
    lwz r14, 0xc(r16)
    mr r3, r16
    bl fn_8053B02C
    cmpw r3, r14
    beq lbl_fn_80550258_000016B8
    mr r3, r15
    bl fn_80550258
    b lbl_fn_80550258_000016B8
lbl_fn_80550258_00001668:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80550258_000016AC
    lwz r0, 0x190(r15)
    cmpwi r0, 0x19d
    bne lbl_fn_80550258_000016AC
    lwz r3, lbl_8087F430
    li r4, -0x1
    lfs f1, lbl_80887E20
    li r5, 0x0
    li r6, 0x0
    bl fn_80370B78
    mr r3, r15
    li r4, 0xb
    bl fn_8053E8CC
    b lbl_fn_80550258_000016B8
lbl_fn_80550258_000016AC:
    mr r3, r15
    li r4, 0xd
    bl fn_8053E8CC
lbl_fn_80550258_000016B8:
    lfs f0, 0x198(r15)
    stfs f0, 0x19c(r15)
lbl_fn_80550258_000016C0:
    addi r11, r1, 0x60
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80550A7C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_18
    mr r22, r3
    bl fn_80541214
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80550A7C_00001940
    lis r3, lbl_8075E7F8@ha
    lis r31, lbl_807C9140@ha
    lfd f31, lbl_8075E7F8@l(r3)
    addi r31, r31, lbl_807C9140@l
    li r25, 0x0
    li r21, 0x0
    lis r18, 0x4330
    li r30, 0x0
    b lbl_fn_80550A7C_00001934
lbl_fn_80550A7C_0000174C:
    cmpwi r25, 0x0
    li r0, 0x0
    blt lbl_fn_80550A7C_00001764
    cmpw r25, r3
    bge lbl_fn_80550A7C_00001764
    li r0, 0x1
lbl_fn_80550A7C_00001764:
    cmpwi r0, 0x0
    beq lbl_fn_80550A7C_00001778
    lwz r3, 0x3c(r29)
    lwzx r28, r3, r21
    b lbl_fn_80550A7C_0000177C
lbl_fn_80550A7C_00001778:
    li r28, 0x0
lbl_fn_80550A7C_0000177C:
    lwz r0, 0x14(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80550A7C_00001940
    lwz r0, 0xc(r28)
    cmpwi r0, 0x3
    bne lbl_fn_80550A7C_000017D8
    lwz r0, 0x168(r22)
    li r3, 0x0
    lwz r5, 0x10(r28)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80550A7C_000017CC
lbl_fn_80550A7C_000017AC:
    lwz r0, 0x164(r22)
    add r4, r0, r3
    lwz r0, 0x14(r4)
    cmpw r5, r0
    bne lbl_fn_80550A7C_000017C4
    b lbl_fn_80550A7C_000017D0
lbl_fn_80550A7C_000017C4:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_80550A7C_000017AC
lbl_fn_80550A7C_000017CC:
    li r4, 0x0
lbl_fn_80550A7C_000017D0:
    stw r4, 0x1bc(r22)
    b lbl_fn_80550A7C_000017DC
lbl_fn_80550A7C_000017D8:
    stw r30, 0x1bc(r22)
lbl_fn_80550A7C_000017DC:
    li r24, 0x0
    li r20, 0x0
    b lbl_fn_80550A7C_00001920
lbl_fn_80550A7C_000017E8:
    cmpwi r24, 0x0
    li r0, 0x0
    blt lbl_fn_80550A7C_00001800
    cmpw r24, r3
    bge lbl_fn_80550A7C_00001800
    li r0, 0x1
lbl_fn_80550A7C_00001800:
    cmpwi r0, 0x0
    beq lbl_fn_80550A7C_00001814
    lwz r3, 0x18(r28)
    lwzx r27, r3, r20
    b lbl_fn_80550A7C_00001818
lbl_fn_80550A7C_00001814:
    li r27, 0x0
lbl_fn_80550A7C_00001818:
    lwz r0, 0x10(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80550A7C_00001940
    li r23, 0x0
    li r19, 0x0
    b lbl_fn_80550A7C_0000190C
lbl_fn_80550A7C_00001830:
    cmpwi r23, 0x0
    li r0, 0x0
    blt lbl_fn_80550A7C_00001848
    cmpw r23, r3
    bge lbl_fn_80550A7C_00001848
    li r0, 0x1
lbl_fn_80550A7C_00001848:
    cmpwi r0, 0x0
    beq lbl_fn_80550A7C_0000185C
    lwz r3, 0x14(r27)
    lwzx r26, r3, r19
    b lbl_fn_80550A7C_00001860
lbl_fn_80550A7C_0000185C:
    li r26, 0x0
lbl_fn_80550A7C_00001860:
    lwz r0, 0xc(r26)
    cmpwi r0, 0x1f
    bne lbl_fn_80550A7C_00001890
    lwz r0, 0x30(r26)
    cmpwi r0, 0x0
    ble lbl_fn_80550A7C_00001880
    lwz r3, 0x2c(r26)
    b lbl_fn_80550A7C_00001884
lbl_fn_80550A7C_00001880:
    li r3, 0x0
lbl_fn_80550A7C_00001884:
    lwz r3, 0x4(r3)
    bl fn_8010DB54
    b lbl_fn_80550A7C_00001898
lbl_fn_80550A7C_00001890:
    slwi r0, r0, 2
    lwzx r3, r31, r0
lbl_fn_80550A7C_00001898:
    cmpwi r3, 0x0
    beq lbl_fn_80550A7C_00001904
    lwz r4, 0x10(r26)
    lwz r0, 0x14(r26)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x19c(r22)
    stw r18, 0x8(r1)
    lfd f1, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f1, f31
    stw r18, 0x10(r1)
    lfd f1, 0x10(r1)
    fcmpo cr0, f2, f0
    fsubs f1, f1, f31
    cror eq, lt, eq
    bne lbl_fn_80550A7C_00001904
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80550A7C_00001904
    lwz r12, 0x0(r3)
    mr r4, r26
    li r5, 0x4
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80550A7C_00001904:
    addi r23, r23, 0x1
    addi r19, r19, 0x8
lbl_fn_80550A7C_0000190C:
    lwz r3, 0x18(r27)
    cmpw r23, r3
    blt lbl_fn_80550A7C_00001830
    addi r24, r24, 0x1
    addi r20, r20, 0x8
lbl_fn_80550A7C_00001920:
    lwz r3, 0x1c(r28)
    cmpw r24, r3
    blt lbl_fn_80550A7C_000017E8
    addi r25, r25, 0x1
    addi r21, r21, 0x8
lbl_fn_80550A7C_00001934:
    lwz r3, 0x40(r29)
    cmpw r25, r3
    blt lbl_fn_80550A7C_0000174C
lbl_fn_80550A7C_00001940:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_18
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80550CE4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x50
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    bl _savegpr_18
    lis r4, lbl_8075E7F8@ha
    lis r0, 0x4330
    lis r30, lbl_807C9140@ha
    stw r0, 0x8(r1)
    lfd f30, lbl_8075E7F8@l(r4)
    mr r21, r3
    stw r0, 0x10(r1)
    addi r30, r30, lbl_807C9140@l
    lfs f31, lbl_80887E20
    li r26, 0x0
    li r31, 0x0
    b lbl_fn_80550CE4_00001D3C
lbl_fn_80550CE4_000019B4:
    mr r3, r21
    bl fn_80541214
    lwz r0, 0x2c(r3)
    mr r25, r3
    li r24, 0x0
    li r20, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f30
    stfs f0, 0x198(r21)
    b lbl_fn_80550CE4_00001C00
lbl_fn_80550CE4_000019E4:
    cmpwi r24, 0x0
    li r0, 0x0
    blt lbl_fn_80550CE4_000019FC
    cmpw r24, r3
    bge lbl_fn_80550CE4_000019FC
    li r0, 0x1
lbl_fn_80550CE4_000019FC:
    cmpwi r0, 0x0
    beq lbl_fn_80550CE4_00001A10
    lwz r3, 0x3c(r25)
    lwzx r29, r3, r20
    b lbl_fn_80550CE4_00001A14
lbl_fn_80550CE4_00001A10:
    li r29, 0x0
lbl_fn_80550CE4_00001A14:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80550CE4_00001D50
    lwz r0, 0xc(r29)
    cmpwi r0, 0x3
    bne lbl_fn_80550CE4_00001A70
    lwz r0, 0x168(r21)
    li r3, 0x0
    lwz r4, 0x10(r29)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80550CE4_00001A64
lbl_fn_80550CE4_00001A44:
    lwz r0, 0x164(r21)
    add r5, r0, r3
    lwz r0, 0x14(r5)
    cmpw r4, r0
    bne lbl_fn_80550CE4_00001A5C
    b lbl_fn_80550CE4_00001A68
lbl_fn_80550CE4_00001A5C:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_80550CE4_00001A44
lbl_fn_80550CE4_00001A64:
    li r5, 0x0
lbl_fn_80550CE4_00001A68:
    stw r5, 0x1bc(r21)
    b lbl_fn_80550CE4_00001A74
lbl_fn_80550CE4_00001A70:
    stw r31, 0x1bc(r21)
lbl_fn_80550CE4_00001A74:
    li r23, 0x0
    li r19, 0x0
    b lbl_fn_80550CE4_00001BEC
lbl_fn_80550CE4_00001A80:
    cmpwi r23, 0x0
    li r0, 0x0
    blt lbl_fn_80550CE4_00001A98
    cmpw r23, r3
    bge lbl_fn_80550CE4_00001A98
    li r0, 0x1
lbl_fn_80550CE4_00001A98:
    cmpwi r0, 0x0
    beq lbl_fn_80550CE4_00001AAC
    lwz r3, 0x18(r29)
    lwzx r28, r3, r19
    b lbl_fn_80550CE4_00001AB0
lbl_fn_80550CE4_00001AAC:
    li r28, 0x0
lbl_fn_80550CE4_00001AB0:
    lwz r0, 0x10(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80550CE4_00001D50
    li r22, 0x0
    li r18, 0x0
    b lbl_fn_80550CE4_00001BD8
lbl_fn_80550CE4_00001AC8:
    cmpwi r22, 0x0
    li r0, 0x0
    blt lbl_fn_80550CE4_00001AE0
    cmpw r22, r3
    bge lbl_fn_80550CE4_00001AE0
    li r0, 0x1
lbl_fn_80550CE4_00001AE0:
    cmpwi r0, 0x0
    beq lbl_fn_80550CE4_00001AF4
    lwz r3, 0x14(r28)
    lwzx r27, r3, r18
    b lbl_fn_80550CE4_00001AF8
lbl_fn_80550CE4_00001AF4:
    li r27, 0x0
lbl_fn_80550CE4_00001AF8:
    lwz r0, 0xc(r27)
    cmpwi r0, 0x1f
    bne lbl_fn_80550CE4_00001B28
    lwz r0, 0x30(r27)
    cmpwi r0, 0x0
    ble lbl_fn_80550CE4_00001B18
    lwz r3, 0x2c(r27)
    b lbl_fn_80550CE4_00001B1C
lbl_fn_80550CE4_00001B18:
    li r3, 0x0
lbl_fn_80550CE4_00001B1C:
    lwz r3, 0x4(r3)
    bl fn_8010DB54
    b lbl_fn_80550CE4_00001B30
lbl_fn_80550CE4_00001B28:
    slwi r0, r0, 2
    lwzx r3, r30, r0
lbl_fn_80550CE4_00001B30:
    cmpwi r3, 0x0
    beq lbl_fn_80550CE4_00001BD0
    lwz r4, 0x10(r27)
    lwz r0, 0x14(r27)
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x19c(r21)
    lfd f1, 0x10(r1)
    stw r0, 0xc(r1)
    fsubs f2, f1, f30
    lfd f1, 0x8(r1)
    fcmpo cr0, f2, f0
    fsubs f1, f1, f30
    cror eq, lt, eq
    bne lbl_fn_80550CE4_00001B80
    lfs f0, 0x198(r21)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_80550CE4_00001BB8
lbl_fn_80550CE4_00001B80:
    lfs f0, 0x19c(r21)
    fcmpo cr0, f2, f0
    ble lbl_fn_80550CE4_00001B9C
    lfs f0, 0x198(r21)
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    beq lbl_fn_80550CE4_00001BB8
lbl_fn_80550CE4_00001B9C:
    lfs f0, 0x19c(r21)
    fcmpo cr0, f1, f0
    ble lbl_fn_80550CE4_00001BD0
    lfs f0, 0x198(r21)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80550CE4_00001BD0
lbl_fn_80550CE4_00001BB8:
    lwz r12, 0x0(r3)
    mr r4, r27
    li r5, 0x5
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80550CE4_00001BD0:
    addi r22, r22, 0x1
    addi r18, r18, 0x8
lbl_fn_80550CE4_00001BD8:
    lwz r3, 0x18(r28)
    cmpw r22, r3
    blt lbl_fn_80550CE4_00001AC8
    addi r23, r23, 0x1
    addi r19, r19, 0x8
lbl_fn_80550CE4_00001BEC:
    lwz r3, 0x1c(r29)
    cmpw r23, r3
    blt lbl_fn_80550CE4_00001A80
    addi r24, r24, 0x1
    addi r20, r20, 0x8
lbl_fn_80550CE4_00001C00:
    lwz r3, 0x40(r25)
    cmpw r24, r3
    blt lbl_fn_80550CE4_000019E4
    mr r3, r25
    bl fn_8053B02C
    cmpwi r3, -0x1
    beq lbl_fn_80550CE4_00001C74
    mr r3, r25
    bl fn_8053B02C
    lwz r0, 0xbc(r21)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80550CE4_00001C58
lbl_fn_80550CE4_00001C38:
    lwz r4, 0xb8(r21)
    lwzx r4, r4, r5
    lwz r0, 0xc(r4)
    cmpw r3, r0
    bne lbl_fn_80550CE4_00001C50
    b lbl_fn_80550CE4_00001C5C
lbl_fn_80550CE4_00001C50:
    addi r5, r5, 0x8
    bdnz lbl_fn_80550CE4_00001C38
lbl_fn_80550CE4_00001C58:
    li r4, 0x0
lbl_fn_80550CE4_00001C5C:
    mr r3, r21
    bl fn_8054119C
    mr r4, r3
    mr r3, r21
    li r5, 0x0
    bl fn_80541524
lbl_fn_80550CE4_00001C74:
    lwz r0, 0x1b0(r21)
    cmpwi r0, 0x0
    beq lbl_fn_80550CE4_00001D38
    cmpwi r0, 0x1
    bne lbl_fn_80550CE4_00001D00
    lwz r3, 0x1b4(r21)
    lwz r0, 0x1a0(r21)
    cmpw r3, r0
    beq lbl_fn_80550CE4_00001C9C
    stw r3, 0x1a0(r21)
lbl_fn_80550CE4_00001C9C:
    lwz r0, 0x1b8(r21)
    li r5, 0x0
    li r3, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r0, 0xc(r1)
    lfd f1, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f1, f30
    fsubs f0, f0, f30
    stfs f1, 0x19c(r21)
    stfs f0, 0x198(r21)
    b lbl_fn_80550CE4_00001CF0
lbl_fn_80550CE4_00001CD0:
    lwz r0, 0x164(r21)
    add. r4, r0, r3
    beq lbl_fn_80550CE4_00001CE8
    stw r31, 0xb8(r4)
    stw r31, 0xbc(r4)
    stw r31, 0xc0(r4)
lbl_fn_80550CE4_00001CE8:
    addi r5, r5, 0x1
    addi r3, r3, 0x1c0
lbl_fn_80550CE4_00001CF0:
    lwz r0, 0x168(r21)
    cmpw r5, r0
    blt lbl_fn_80550CE4_00001CD0
    b lbl_fn_80550CE4_00001D30
lbl_fn_80550CE4_00001D00:
    lwz r3, 0x1b4(r21)
    lwz r0, 0x1a0(r21)
    cmpw r3, r0
    beq lbl_fn_80550CE4_00001D18
    stw r3, 0x1a0(r21)
    stfs f31, 0x19c(r21)
lbl_fn_80550CE4_00001D18:
    lwz r0, 0x1b8(r21)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f30
    stfs f0, 0x198(r21)
lbl_fn_80550CE4_00001D30:
    stw r31, 0x1b0(r21)
    b lbl_fn_80550CE4_00001D3C
lbl_fn_80550CE4_00001D38:
    li r26, 0x1
lbl_fn_80550CE4_00001D3C:
    cmpwi r26, 0x0
    beq lbl_fn_80550CE4_000019B4
    mr r3, r21
    li r4, 0xd
    bl fn_8053E8CC
lbl_fn_80550CE4_00001D50:
    addi r11, r1, 0x50
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    bl _restgpr_18
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
