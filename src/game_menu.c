#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000EB8C(void);
extern void fn_8000ECA8(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E4A4(void);
extern void fn_800502A8(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80061824(void);
extern void fn_8006B2D8(void);
extern void fn_8006EF48(void);
extern void fn_80070A70(void);
extern void fn_80070C98(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008A4E0(void);
extern void fn_8008A76C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CD60(void);
extern void fn_800902C0(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_800C0A50(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_8010D770(void);
extern void fn_8014FCC4(void);
extern void fn_8014FCE8(void);
extern void fn_80179A34(void);
extern void fn_801F3FF8(void);
extern void fn_801FECE0(void);
extern void fn_80206B14(void);
extern void fn_802072AC(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80375184(void);
extern void fn_803B6970(void);
extern void fn_803B78B4(void);
extern void fn_803CC6B4(void);
extern void fn_8043F028(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80570A78(void);
extern void fn_805A6A84(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_806868C4(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807773C0[];
extern u8 jumptable_8077742C[];
extern u8 lbl_80730CB4[];
extern u8 lbl_80730DD0[];
extern u8 lbl_80730DF0[];
extern u8 lbl_80730E00[];
extern u8 lbl_80730E14[];
extern u8 lbl_80730E5C[];
extern u8 lbl_80730F08[];
extern u8 lbl_80730F30[];
extern u8 lbl_80766768[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807772E8[];
extern u8 lbl_80777320[];
extern u8 lbl_8077733C[];
extern u8 lbl_80777358[];
extern u8 lbl_80777390[];
extern u8 lbl_807773A8[];
extern u8 lbl_807773B4[];
extern u8 lbl_80777494[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_807774F0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087D6F8;
extern u32 lbl_8087D6FC;
extern u32 lbl_8087D700;
extern u32 lbl_8087D704;
extern u32 lbl_8087D708;
extern u32 lbl_8087D710;
extern u32 lbl_8087EE78;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_808807C8;
extern u32 lbl_80880830;
extern u32 lbl_80880838;
extern u32 lbl_8088083C;
extern u32 lbl_80880840;
extern u32 lbl_80880844;
extern u32 lbl_80880848;
extern u32 lbl_8088084C;
extern u32 lbl_80880850;
extern u32 lbl_80880854;
extern u32 lbl_80880858;
extern u32 lbl_8088085C;
extern u32 lbl_80880860;
extern u32 lbl_80880868;

/* Function declarations */
void fn_80041A50(void);
void fn_80041A80(void);
void fn_80041B8C(void);
void fn_80041B90(void);
void fn_80041C0C(void);
void fn_80041C4C(void);
void fn_80041CE4(void);
void fn_80041D44(void);
void fn_8004203C(void);
void fn_800420F4(void);
void fn_80042108(void);
void fn_8004212C(void);
void fn_80042148(void);
void fn_8004215C(void);
void fn_80042218(void);
void fn_80042240(void);
void fn_80042254(void);
void fn_800422CC(void);
void fn_800422D4(void);
void fn_80042684(void);
void fn_80042694(void);
void fn_8004269C(void);
void fn_80042740(void);
void fn_8004274C(void);
void fn_8004275C(void);
void fn_8004276C(void);
void fn_800427C8(void);
void fn_80042E20(void);
void fn_80042E28(void);
void fn_80042ECC(void);
void fn_80042EDC(void);
void fn_80042EEC(void);
void fn_80043014(void);
void fn_80043128(void);
void fn_8004312C(void);
void fn_80043130(void);
void fn_8004318C(void);
void fn_800431F4(void);
void fn_80043214(void);
void fn_800434A8(void);
void fn_80043508(void);
void fn_8004350C(void);
void fn_800437A4(void);
void fn_80043A24(void);
void fn_80043B34(void);
void fn_80043BDC(void);
void fn_80043BF4(void);
void fn_80043D58(void);
void fn_80043EAC(void);
void fn_800440DC(void);
void fn_80044134(void);
void fn_8004424C(void);
void fn_80044394(void);
void fn_8004439C(void);
void fn_8004476C(void);
void fn_80044780(void);
void fn_80044BB0(void);
void fn_80044BD4(void);
void fn_80044C30(void);
void fn_80044C50(void);
void fn_80044CCC(void);
void fn_80044E0C(void);
void fn_80044E98(void);
void fn_80044F54(void);
void fn_80044FBC(void);
void fn_80045510(void);
void fn_80045694(void);
void fn_800457A0(void);
void fn_800457A4(void);
void fn_800458D4(void);
void fn_800458F4(void);
void fn_80045A24(void);
void fn_80045A68(void);
void fn_80045B98(void);
void fn_80045C88(void);
void fn_80045D7C(void);

asm void fn_80041A50(void)
{
    nofralloc
    lis r4, lbl_807C6B90@ha
    li r5, 0x1
    addi r3, r4, lbl_807C6B90@l
    lfs f0, lbl_808807C8
    li r0, 0x0
    stw r5, lbl_807C6B90@l(r4)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_80041A80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_80041A80_0000011C
    lis r5, lbl_80730CB4@ha
    li r3, 0x98
    addi r5, r5, lbl_80730CB4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80041A80_00000114
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_807772E8@ha
    addi r30, r31, 0x48
    addi r3, r3, lbl_807772E8@l
    stw r3, 0x0(r31)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    mr r3, r30
    mr r4, r29
    stw r0, 0x50(r31)
    stw r0, 0x54(r31)
    lwz r12, 0x0(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_80880830
    stfs f0, 0x58(r31)
    stfs f0, 0x5c(r31)
    stfs f0, 0x60(r31)
    stfs f0, 0x64(r31)
    stfs f0, 0x68(r31)
    stfs f0, 0x6c(r31)
    stfs f0, 0x70(r31)
    stfs f0, 0x74(r31)
    stfs f0, 0x78(r31)
    stfs f0, 0x7c(r31)
    stfs f0, 0x80(r31)
    stfs f0, 0x84(r31)
    stfs f0, 0x88(r31)
    stfs f0, 0x8c(r31)
    stfs f0, 0x90(r31)
    stfs f0, 0x94(r31)
lbl_fn_80041A80_00000114:
    mr r3, r31
    b lbl_fn_80041A80_00000120
lbl_fn_80041A80_0000011C:
    li r3, 0x0
lbl_fn_80041A80_00000120:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80041B8C(void)
{
    nofralloc
    blr
}

asm void fn_80041B90(void)
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
    beq lbl_fn_80041B90_000001A0
    addic. r0, r3, 0x18
    beq lbl_fn_80041B90_00000190
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80041B90_00000184
    lis r4, fn_80041C0C@ha
    addi r4, r4, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_80041B90_00000184:
    li r0, 0x0
    stw r0, 0x1c(r30)
    stw r0, 0x18(r30)
lbl_fn_80041B90_00000190:
    cmpwi r31, 0x0
    ble lbl_fn_80041B90_000001A0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80041B90_000001A0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80041C0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80041C0C_000001E4
    cmpwi r4, 0x0
    ble lbl_fn_80041C0C_000001E4
    bl dtor_80084684
lbl_fn_80041C0C_000001E4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80041C4C(void)
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
    beq lbl_fn_80041C4C_00000278
    addic. r0, r3, 0x50
    beq lbl_fn_80041C4C_0000024C
    lwz r3, 0x54(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80041C4C_00000240
    lis r4, fn_80041B90@ha
    addi r4, r4, fn_80041B90@l
    bl fn_80695A50
lbl_fn_80041C4C_00000240:
    li r0, 0x0
    stw r0, 0x54(r30)
    stw r0, 0x50(r30)
lbl_fn_80041C4C_0000024C:
    addic. r3, r30, 0x48
    beq lbl_fn_80041C4C_0000025C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80041C4C_0000025C:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80041C4C_00000278
    mr r3, r30
    bl dtor_80084684
lbl_fn_80041C4C_00000278:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80041CE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x48
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80041CE4_000002DC
    mr r3, r31
    bl fn_80041D44
    addi r3, r31, 0x48
    bl fn_80473F88
    lwz r0, 0x38(r31)
    li r3, 0x1
    ori r0, r0, 0x4
    stw r0, 0x38(r31)
    b lbl_fn_80041CE4_000002E0
lbl_fn_80041CE4_000002DC:
    li r3, 0x0
lbl_fn_80041CE4_000002E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80041D44(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    stw r31, 0x6cc(r1)
    stw r30, 0x6c8(r1)
    stw r29, 0x6c4(r1)
    stw r28, 0x6c0(r1)
    mr r28, r3
    addi r3, r3, 0x48
    bl fn_8047059C
    mr r30, r3
    addi r3, r28, 0x48
    bl fn_80470580
    mr r4, r3
    mr r5, r30
    addi r3, r1, 0x80
    bl fn_8004203C
    addi r3, r1, 0x34
    bl fn_80042148
    lis r3, lbl_80730CB4@ha
    addi r30, r3, lbl_80730CB4@l
lbl_fn_80041D44_00000348:
    addi r3, r1, 0x80
    bl fn_8005B3CC
    mr r4, r3
    addi r3, r1, 0x28
    bl fn_8003E4A4
    addi r3, r1, 0x28
    bl fn_80042218
    cmpwi r3, 0x0
    bne lbl_fn_80041D44_00000384
    addi r3, r1, 0x28
    li r4, 0x0
    bl fn_8000ECA8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_80041D44_00000394
lbl_fn_80041D44_00000384:
    addi r3, r1, 0x28
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_80041D44_0000055C
lbl_fn_80041D44_00000394:
    addi r3, r1, 0x80
    bl fn_8005B3CC
    mr r31, r3
    addi r4, r30, 0x1
    li r29, 0x0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80041D44_000003BC
    li r29, 0x1
    b lbl_fn_80041D44_000003F0
lbl_fn_80041D44_000003BC:
    mr r3, r31
    addi r4, r30, 0x6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80041D44_000003D8
    li r29, 0x2
    b lbl_fn_80041D44_000003F0
lbl_fn_80041D44_000003D8:
    mr r3, r31
    addi r4, r30, 0xc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80041D44_000003F0
    li r29, 0x3
lbl_fn_80041D44_000003F0:
    addi r3, r1, 0x18
    bl fn_80041B8C
    addi r3, r1, 0x80
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x18(r1)
    addi r3, r1, 0x80
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1c(r1)
    addi r3, r1, 0x80
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x20(r1)
    addi r3, r1, 0x80
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x24(r1)
    addi r3, r1, 0x28
    addi r4, r30, 0x19
    bl fn_8000EB8C
    cmpwi r3, 0x0
    beq lbl_fn_80041D44_00000464
    slwi r0, r29, 4
    addi r4, r1, 0x18
    add r3, r28, r0
    addi r3, r3, 0x58
    bl fn_80042108
    b lbl_fn_80041D44_00000550
lbl_fn_80041D44_00000464:
    addi r3, r1, 0x8
    bl fn_80042240
    b lbl_fn_80041D44_0000049C
lbl_fn_80041D44_00000470:
    addi r3, r1, 0x80
    bl fn_800422CC
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_80043130
    addi r3, r1, 0x8
    addi r4, r1, 0x40
    bl fn_800422D4
    addi r3, r1, 0x40
    li r4, -0x1
    bl fn_80041C0C
lbl_fn_80041D44_0000049C:
    addi r3, r1, 0x80
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_80041D44_00000470
    addi r3, r1, 0x60
    bl fn_80042684
    addi r3, r1, 0x28
    bl fn_8004212C
    bl fn_800DC6B4
    stw r3, 0x60(r1)
    addi r3, r1, 0x68
    addi r4, r1, 0x18
    stw r29, 0x64(r1)
    bl fn_80042108
    addi r3, r1, 0x8
    bl fn_80042694
    mr r4, r3
    addi r3, r1, 0x78
    bl fn_8004269C
    li r29, 0x0
    b lbl_fn_80041D44_0000051C
lbl_fn_80041D44_000004F4:
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_8004275C
    mr r31, r3
    mr r4, r29
    addi r3, r1, 0x78
    bl fn_8004274C
    mr r4, r31
    bl fn_8004276C
    addi r29, r29, 0x1
lbl_fn_80041D44_0000051C:
    addi r3, r1, 0x8
    bl fn_80042694
    cmplw r29, r3
    blt lbl_fn_80041D44_000004F4
    addi r3, r1, 0x34
    addi r4, r1, 0x60
    bl fn_800427C8
    addi r3, r1, 0x60
    li r4, -0x1
    bl fn_80041B90
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_80042254
lbl_fn_80041D44_00000550:
    addi r3, r1, 0x28
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_80041D44_0000055C:
    addi r3, r1, 0x80
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80041D44_00000348
    addi r3, r1, 0x34
    bl fn_80042E20
    mr r4, r3
    addi r3, r28, 0x50
    bl fn_80042E28
    li r29, 0x0
    b lbl_fn_80041D44_000005B0
lbl_fn_80041D44_00000588:
    mr r4, r29
    addi r3, r1, 0x34
    bl fn_80042EDC
    mr r31, r3
    mr r4, r29
    addi r3, r28, 0x50
    bl fn_80042ECC
    mr r4, r31
    bl fn_80042EEC
    addi r29, r29, 0x1
lbl_fn_80041D44_000005B0:
    addi r3, r1, 0x34
    bl fn_80042E20
    cmplw r29, r3
    blt lbl_fn_80041D44_00000588
    addi r3, r1, 0x34
    li r4, -0x1
    bl fn_8004215C
    lwz r0, 0x6d4(r1)
    lwz r31, 0x6cc(r1)
    lwz r30, 0x6c8(r1)
    lwz r29, 0x6c4(r1)
    lwz r28, 0x6c0(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}

asm void fn_8004203C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807772D0@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r6, r6, lbl_807772D0@l
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x400
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x630(r3)
    addi r3, r3, 0x10
    bl memset
    addi r3, r29, 0x610
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    mr r3, r29
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x0(r29)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800420F4(void)
{
    nofralloc
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_80042108(void)
{
    nofralloc
    lfs f3, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    stfs f3, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

asm void fn_8004212C(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8004212C_000006F0
    addi r3, r3, 0x1
    blr
lbl_fn_8004212C_000006F0:
    lwz r3, 0x8(r3)
    blr
}

asm void fn_80042148(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8004215C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    beq lbl_fn_8004215C_000007B0
    beq lbl_fn_8004215C_000007A0
    beq lbl_fn_8004215C_000007A0
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8004215C_000007A0
    lwz r28, 0x4(r3)
    lis r30, fn_80041C0C@ha
    li r31, 0x0
    slwi r4, r28, 5
    subf r0, r28, r28
    stw r0, 0x4(r3)
    add r29, r5, r4
    b lbl_fn_8004215C_00000790
lbl_fn_8004215C_00000760:
    subic. r29, r29, 0x20
    beq lbl_fn_8004215C_0000078C
    addic. r0, r29, 0x18
    beq lbl_fn_8004215C_0000078C
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8004215C_00000784
    addi r4, r30, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_8004215C_00000784:
    stw r31, 0x1c(r29)
    stw r31, 0x18(r29)
lbl_fn_8004215C_0000078C:
    subi r28, r28, 0x1
lbl_fn_8004215C_00000790:
    cmpwi r28, 0x0
    bne lbl_fn_8004215C_00000760
    lwz r3, 0x0(r26)
    bl dtor_80084684
lbl_fn_8004215C_000007A0:
    cmpwi r27, 0x0
    ble lbl_fn_8004215C_000007B0
    mr r3, r26
    bl dtor_80084684
lbl_fn_8004215C_000007B0:
    mr r3, r26
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80042218(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80042218_000007E0
    lbz r0, 0x0(r3)
    clrlwi r0, r0, 25
    b lbl_fn_80042218_000007E4
lbl_fn_80042218_000007E0:
    lwz r0, 0x4(r3)
lbl_fn_80042218_000007E4:
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80042240(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80042254(void)
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
    beq lbl_fn_80042254_00000860
    beq lbl_fn_80042254_00000850
    beq lbl_fn_80042254_00000850
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80042254_00000850
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_80042254_00000850:
    cmpwi r31, 0x0
    ble lbl_fn_80042254_00000860
    mr r3, r30
    bl dtor_80084684
lbl_fn_80042254_00000860:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800422CC(void)
{
    nofralloc
    addi r3, r3, 0x10
    blr
}

asm void fn_800422D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r0, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r0, r5
    bge lbl_fn_800422D4_00000918
    lwz r5, 0x0(r3)
    slwi r0, r0, 5
    add. r5, r5, r0
    beq lbl_fn_800422D4_00000908
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r5)
    lwz r0, 0x14(r4)
    stw r0, 0x14(r5)
    lwz r0, 0x18(r4)
    stw r0, 0x18(r5)
    lwz r0, 0x1c(r4)
    stw r0, 0x1c(r5)
lbl_fn_800422D4_00000908:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_800422D4_00000C14
lbl_fn_800422D4_00000918:
    lis r3, 0x800
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_800422D4_00000950
    lis r4, lbl_80730CB4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80730CB4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x21
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800422D4_00000950:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x800
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_800422D4_000009B8
    lis r4, lbl_80730CB4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80730CB4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x21
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800422D4_000009B8:
    lis r3, 0x2ab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_800422D4_00000A08
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_800422D4_000009FC
    addi r3, r1, 0x8
lbl_fn_800422D4_000009FC:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_800422D4_00000A4C
lbl_fn_800422D4_00000A08:
    lis r3, 0x555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_800422D4_00000A44
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_800422D4_00000A38
    addi r3, r1, 0x8
lbl_fn_800422D4_00000A38:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_800422D4_00000A4C
lbl_fn_800422D4_00000A44:
    lis r3, 0x800
    subi r28, r3, 0x1
lbl_fn_800422D4_00000A4C:
    lis r3, 0x800
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_800422D4_00000A80
    lis r4, lbl_80730CB4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80730CB4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x21
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800422D4_00000A80:
    slwi r3, r28, 5
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_800422D4_00000AB4
    lis r3, __files@ha
    lis r4, lbl_8077733C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077733C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800422D4_00000AB4:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r3, r0, 5
    stw r28, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 5
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_800422D4_00000B1C
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r3)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r30)
    stw r0, 0x1c(r3)
lbl_fn_800422D4_00000B1C:
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    slwi r0, r0, 5
    lwz r4, 0x4(r29)
    lwz r7, 0x0(r29)
    add r6, r3, r0
    slwi r0, r4, 5
    add r5, r7, r0
    addi r0, r5, 0x1f
    subf r0, r7, r0
    srwi r0, r0, 5
    mtctr r0
    cmplw r5, r7
    ble lbl_fn_800422D4_00000BC8
lbl_fn_800422D4_00000B60:
    subic. r6, r6, 0x20
    subi r5, r5, 0x20
    beq lbl_fn_800422D4_00000BAC
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r6)
    stw r0, 0x4(r6)
    lwz r0, 0xc(r5)
    lwz r3, 0x8(r5)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
    lwz r0, 0x14(r5)
    lwz r3, 0x10(r5)
    stw r3, 0x10(r6)
    stw r0, 0x14(r6)
    lwz r0, 0x1c(r5)
    lwz r3, 0x18(r5)
    stw r3, 0x18(r6)
    stw r0, 0x1c(r6)
lbl_fn_800422D4_00000BAC:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_800422D4_00000B60
lbl_fn_800422D4_00000BC8:
    addic. r0, r1, 0x14
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    li r4, 0x0
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_800422D4_00000C14
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800422D4_00000C14
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_800422D4_00000C14:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80042684(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    blr
}

asm void fn_80042694(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8004269C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004269C_00000C84
    lis r4, fn_80041C0C@ha
    mr r3, r0
    addi r4, r4, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_8004269C_00000C84:
    cmpwi r31, 0x0
    stw r31, 0x0(r30)
    beq lbl_fn_8004269C_00000CD0
    slwi r3, r31, 5
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087D704
    la r6, lbl_8087D700
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80042740@ha
    lis r5, fn_80041C0C@ha
    mr r7, r31
    li r6, 0x20
    addi r4, r4, fn_80042740@l
    addi r5, r5, fn_80041C0C@l
    bl fn_80695720
    stw r3, 0x4(r30)
    b lbl_fn_8004269C_00000CD8
lbl_fn_8004269C_00000CD0:
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_8004269C_00000CD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80042740(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    blr
}

asm void fn_8004274C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 5
    add r3, r3, r0
    blr
}

asm void fn_8004275C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 5
    add r3, r3, r0
    blr
}

asm void fn_8004276C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplw r4, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8004276C_00000D5C
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r31
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8004276C_00000D5C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800427C8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_21
    lwz r0, 0x4(r3)
    mr r28, r3
    lwz r5, 0x8(r3)
    mr r29, r4
    cmplw r0, r5
    bge lbl_fn_800427C8_00000EB4
    lwz r3, 0x0(r3)
    slwi r0, r0, 5
    add. r27, r3, r0
    beq lbl_fn_800427C8_00000EA4
    lwz r3, 0x0(r4)
    li r0, 0x0
    stw r3, 0x0(r27)
    lwz r3, 0x4(r4)
    stw r3, 0x4(r27)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r27)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r27)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r27)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r27)
    lwz r23, 0x18(r4)
    stw r0, 0x18(r27)
    stw r0, 0x1c(r27)
    b lbl_fn_800427C8_00000DFC
    bl fn_80695A50
lbl_fn_800427C8_00000DFC:
    cmpwi r23, 0x0
    stw r23, 0x18(r27)
    beq lbl_fn_800427C8_00000E48
    slwi r3, r23, 5
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087D704
    la r6, lbl_8087D700
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80042740@ha
    lis r5, fn_80041C0C@ha
    mr r7, r23
    li r6, 0x20
    addi r4, r4, fn_80042740@l
    addi r5, r5, fn_80041C0C@l
    bl fn_80695720
    stw r3, 0x1c(r27)
    b lbl_fn_800427C8_00000E50
lbl_fn_800427C8_00000E48:
    li r0, 0x0
    stw r0, 0x1c(r27)
lbl_fn_800427C8_00000E50:
    li r26, 0x0
    li r21, 0x0
    b lbl_fn_800427C8_00000E98
lbl_fn_800427C8_00000E5C:
    lwz r3, 0x1c(r29)
    lwz r0, 0x1c(r27)
    add r23, r3, r21
    add r25, r0, r21
    cmplw r23, r25
    beq lbl_fn_800427C8_00000E90
    mr r3, r23
    bl strlen
    mr r5, r3
    mr r3, r25
    mr r4, r23
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800427C8_00000E90:
    addi r21, r21, 0x20
    addi r26, r26, 0x1
lbl_fn_800427C8_00000E98:
    lwz r0, 0x18(r27)
    cmplw r26, r0
    blt lbl_fn_800427C8_00000E5C
lbl_fn_800427C8_00000EA4:
    lwz r3, 0x4(r28)
    addi r0, r3, 0x1
    stw r0, 0x4(r28)
    b lbl_fn_800427C8_000013B8
lbl_fn_800427C8_00000EB4:
    lis r3, 0x800
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_800427C8_00000EEC
    lis r4, lbl_80730CB4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80730CB4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x21
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800427C8_00000EEC:
    lwz r4, 0x4(r28)
    li r6, 0x0
    lis r3, 0x800
    lwz r31, 0x8(r28)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r28, 0x8
    subf r0, r31, r0
    stw r6, 0x14(r1)
    cmplw r3, r0
    stw r6, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r6, 0x24(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_800427C8_00000F54
    lis r4, lbl_80730CB4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80730CB4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x21
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800427C8_00000F54:
    lis r3, 0x2ab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_800427C8_00000FA4
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_800427C8_00000F98
    addi r3, r1, 0x8
lbl_fn_800427C8_00000F98:
    lwz r0, 0x0(r3)
    add r24, r31, r0
    b lbl_fn_800427C8_00000FE8
lbl_fn_800427C8_00000FA4:
    lis r3, 0x555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_800427C8_00000FE0
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_800427C8_00000FD4
    addi r3, r1, 0x8
lbl_fn_800427C8_00000FD4:
    lwz r0, 0x0(r3)
    add r24, r31, r0
    b lbl_fn_800427C8_00000FE8
lbl_fn_800427C8_00000FE0:
    lis r3, 0x800
    subi r24, r3, 0x1
lbl_fn_800427C8_00000FE8:
    lis r3, 0x800
    subi r0, r3, 0x1
    cmplw r24, r0
    ble lbl_fn_800427C8_0000101C
    lis r4, lbl_80730CB4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80730CB4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x21
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800427C8_0000101C:
    slwi r3, r24, 5
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_800427C8_00001050
    lis r3, __files@ha
    lis r4, lbl_80777320@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80777320@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800427C8_00001050:
    lwz r5, 0x4(r28)
    lis r25, fn_80041C0C@ha
    lwz r0, 0x18(r1)
    lis r26, fn_80042740@ha
    slwi r4, r5, 5
    stw r23, 0x14(r1)
    slwi r3, r0, 5
    li r27, 0x0
    add r0, r23, r4
    stw r24, 0x1c(r1)
    add. r30, r3, r0
    stw r5, 0x24(r1)
    beq lbl_fn_800427C8_00001170
    lwz r0, 0x0(r29)
    cmpwi r27, 0x0
    stw r0, 0x0(r30)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r30)
    lfs f0, 0x8(r29)
    stfs f0, 0x8(r30)
    lfs f0, 0xc(r29)
    stfs f0, 0xc(r30)
    lfs f0, 0x10(r29)
    stfs f0, 0x10(r30)
    lfs f0, 0x14(r29)
    stfs f0, 0x14(r30)
    lwz r23, 0x18(r29)
    stw r27, 0x18(r30)
    stw r27, 0x1c(r30)
    beq lbl_fn_800427C8_000010D4
    addi r4, r25, fn_80041C0C@l
    li r3, 0x0
    bl fn_80695A50
lbl_fn_800427C8_000010D4:
    cmpwi r23, 0x0
    stw r23, 0x18(r30)
    beq lbl_fn_800427C8_00001118
    slwi r3, r23, 5
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087D704
    la r6, lbl_8087D700
    li r7, 0x0
    bl fn_800846FC
    mr r7, r23
    addi r4, r26, fn_80042740@l
    addi r5, r25, fn_80041C0C@l
    li r6, 0x20
    bl fn_80695720
    stw r3, 0x1c(r30)
    b lbl_fn_800427C8_0000111C
lbl_fn_800427C8_00001118:
    stw r27, 0x1c(r30)
lbl_fn_800427C8_0000111C:
    li r23, 0x0
    li r21, 0x0
    b lbl_fn_800427C8_00001164
lbl_fn_800427C8_00001128:
    lwz r3, 0x1c(r29)
    lwz r0, 0x1c(r30)
    add r25, r3, r21
    add r24, r0, r21
    cmplw r25, r24
    beq lbl_fn_800427C8_0000115C
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r3, r24
    mr r4, r25
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800427C8_0000115C:
    addi r21, r21, 0x20
    addi r23, r23, 0x1
lbl_fn_800427C8_00001164:
    lwz r0, 0x18(r30)
    cmplw r23, r0
    blt lbl_fn_800427C8_00001128
lbl_fn_800427C8_00001170:
    lwz r4, 0x18(r1)
    lis r26, fn_80042740@ha
    lwz r0, 0x24(r1)
    lis r27, fn_80041C0C@ha
    addi r5, r4, 0x1
    lwz r3, 0x4(r28)
    lwz r29, 0x0(r28)
    slwi r0, r0, 5
    slwi r4, r3, 5
    lwz r3, 0x14(r1)
    stw r5, 0x18(r1)
    add r31, r29, r4
    add r30, r3, r0
    li r25, 0x0
    b lbl_fn_800427C8_000012BC
lbl_fn_800427C8_000011AC:
    subic. r30, r30, 0x20
    subi r31, r31, 0x20
    beq lbl_fn_800427C8_000012A4
    lwz r0, 0x0(r31)
    cmpwi r25, 0x0
    stw r0, 0x0(r30)
    lwz r0, 0x4(r31)
    stw r0, 0x4(r30)
    lfs f0, 0x8(r31)
    stfs f0, 0x8(r30)
    lfs f0, 0xc(r31)
    stfs f0, 0xc(r30)
    lfs f0, 0x10(r31)
    stfs f0, 0x10(r30)
    lfs f0, 0x14(r31)
    stfs f0, 0x14(r30)
    stw r25, 0x18(r30)
    stw r25, 0x1c(r30)
    lwz r23, 0x18(r31)
    beq lbl_fn_800427C8_00001208
    addi r4, r27, fn_80041C0C@l
    li r3, 0x0
    bl fn_80695A50
lbl_fn_800427C8_00001208:
    cmpwi r23, 0x0
    stw r23, 0x18(r30)
    beq lbl_fn_800427C8_0000124C
    slwi r3, r23, 5
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087D704
    la r6, lbl_8087D700
    li r7, 0x0
    bl fn_800846FC
    mr r7, r23
    addi r4, r26, fn_80042740@l
    addi r5, r27, fn_80041C0C@l
    li r6, 0x20
    bl fn_80695720
    stw r3, 0x1c(r30)
    b lbl_fn_800427C8_00001250
lbl_fn_800427C8_0000124C:
    stw r25, 0x1c(r30)
lbl_fn_800427C8_00001250:
    li r24, 0x0
    li r21, 0x0
    b lbl_fn_800427C8_00001298
lbl_fn_800427C8_0000125C:
    lwz r3, 0x1c(r31)
    lwz r0, 0x1c(r30)
    add r22, r3, r21
    add r23, r0, r21
    cmplw r22, r23
    beq lbl_fn_800427C8_00001290
    mr r3, r22
    bl strlen
    mr r5, r3
    mr r3, r23
    mr r4, r22
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800427C8_00001290:
    addi r21, r21, 0x20
    addi r24, r24, 0x1
lbl_fn_800427C8_00001298:
    lwz r0, 0x18(r30)
    cmplw r24, r0
    blt lbl_fn_800427C8_0000125C
lbl_fn_800427C8_000012A4:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_800427C8_000012BC:
    cmplw r31, r29
    bgt lbl_fn_800427C8_000011AC
    lwz r0, 0x24(r1)
    addi r27, r1, 0x14
    lwz r7, 0x0(r28)
    lis r30, fn_80041C0C@ha
    slwi r3, r0, 5
    lwz r5, 0x14(r1)
    lwz r6, 0x4(r28)
    add r25, r7, r3
    lwz r4, 0x18(r1)
    li r29, 0x0
    slwi r0, r6, 5
    lwz r8, 0x8(r28)
    lwz r3, 0x1c(r1)
    add r26, r25, r0
    stw r3, 0x8(r28)
    stw r8, 0x1c(r1)
    stw r5, 0x0(r28)
    stw r7, 0x14(r1)
    stw r4, 0x4(r28)
    stw r6, 0x18(r1)
    b lbl_fn_800427C8_00001344
lbl_fn_800427C8_00001318:
    subic. r26, r26, 0x20
    beq lbl_fn_800427C8_00001344
    addic. r0, r26, 0x18
    beq lbl_fn_800427C8_00001344
    lwz r3, 0x1c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800427C8_0000133C
    addi r4, r30, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_800427C8_0000133C:
    stw r29, 0x1c(r26)
    stw r29, 0x18(r26)
lbl_fn_800427C8_00001344:
    cmplw r26, r25
    bgt lbl_fn_800427C8_00001318
    cmpwi r27, 0x0
    li r29, 0x0
    stw r29, 0x18(r1)
    beq lbl_fn_800427C8_000013B8
    lwz r25, 0x14(r1)
    cmpwi r25, 0x0
    beq lbl_fn_800427C8_000013B8
    li r26, 0x0
    stw r26, 0x18(r1)
    lis r28, fn_80041C0C@ha
    b lbl_fn_800427C8_000013A8
lbl_fn_800427C8_00001378:
    subic. r25, r25, 0x20
    beq lbl_fn_800427C8_000013A4
    addic. r0, r25, 0x18
    beq lbl_fn_800427C8_000013A4
    lwz r3, 0x1c(r25)
    cmpwi r3, 0x0
    beq lbl_fn_800427C8_0000139C
    addi r4, r28, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_800427C8_0000139C:
    stw r29, 0x1c(r25)
    stw r29, 0x18(r25)
lbl_fn_800427C8_000013A4:
    subi r26, r26, 0x1
lbl_fn_800427C8_000013A8:
    cmpwi r26, 0x0
    bne lbl_fn_800427C8_00001378
    lwz r3, 0x14(r1)
    bl dtor_80084684
lbl_fn_800427C8_000013B8:
    addi r11, r1, 0x60
    bl _restgpr_21
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80042E20(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80042E28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80042E28_00001410
    lis r4, fn_80041B90@ha
    mr r3, r0
    addi r4, r4, fn_80041B90@l
    bl fn_80695A50
lbl_fn_80042E28_00001410:
    cmpwi r31, 0x0
    stw r31, 0x0(r30)
    beq lbl_fn_80042E28_0000145C
    slwi r3, r31, 5
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087D6FC
    la r6, lbl_8087D6F8
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80042684@ha
    lis r5, fn_80041B90@ha
    mr r7, r31
    li r6, 0x20
    addi r4, r4, fn_80042684@l
    addi r5, r5, fn_80041B90@l
    bl fn_80695720
    stw r3, 0x4(r30)
    b lbl_fn_80042E28_00001464
lbl_fn_80042E28_0000145C:
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_80042E28_00001464:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80042ECC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 5
    add r3, r3, r0
    blr
}

asm void fn_80042EDC(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 5
    add r3, r3, r0
    blr
}

asm void fn_80042EEC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r9, 0x0(r4)
    stw r0, 0x24(r1)
    lwz r8, 0x4(r4)
    stmw r26, 0x8(r1)
    mr r30, r3
    lwz r7, 0x8(r4)
    mr r31, r4
    lwz r6, 0xc(r4)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    lwz r28, 0x18(r4)
    lwz r10, 0x1c(r3)
    stw r9, 0x0(r3)
    cmpwi r10, 0x0
    stw r8, 0x4(r3)
    stw r7, 0x8(r3)
    stw r6, 0xc(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    beq lbl_fn_80042EEC_00001504
    lis r4, fn_80041C0C@ha
    mr r3, r10
    addi r4, r4, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_80042EEC_00001504:
    cmpwi r28, 0x0
    stw r28, 0x18(r30)
    beq lbl_fn_80042EEC_00001550
    slwi r3, r28, 5
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087D704
    la r6, lbl_8087D700
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80042740@ha
    lis r5, fn_80041C0C@ha
    mr r7, r28
    li r6, 0x20
    addi r4, r4, fn_80042740@l
    addi r5, r5, fn_80041C0C@l
    bl fn_80695720
    stw r3, 0x1c(r30)
    b lbl_fn_80042EEC_00001558
lbl_fn_80042EEC_00001550:
    li r0, 0x0
    stw r0, 0x1c(r30)
lbl_fn_80042EEC_00001558:
    li r28, 0x0
    li r26, 0x0
    b lbl_fn_80042EEC_000015A0
lbl_fn_80042EEC_00001564:
    lwz r3, 0x1c(r31)
    lwz r0, 0x1c(r30)
    add r27, r3, r26
    add r29, r0, r26
    cmplw r27, r29
    beq lbl_fn_80042EEC_00001598
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r3, r29
    mr r4, r27
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80042EEC_00001598:
    addi r26, r26, 0x20
    addi r28, r28, 0x1
lbl_fn_80042EEC_000015A0:
    lwz r0, 0x18(r30)
    cmplw r28, r0
    blt lbl_fn_80042EEC_00001564
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80043014(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    stmw r21, 0x14(r1)
    mr r21, r3
    mr r22, r4
    mr r23, r5
    beq lbl_fn_80043014_000016B8
    lwz r28, 0x50(r3)
    li r25, 0x0
    li r29, 0x0
    b lbl_fn_80043014_000016B0
lbl_fn_80043014_000015F8:
    lwz r0, 0x54(r21)
    add r31, r0, r29
    lwz r0, 0x4(r31)
    cmpw r0, r22
    bne lbl_fn_80043014_000016A8
    lwz r26, 0x18(r31)
    li r24, 0x0
    li r27, 0x0
    b lbl_fn_80043014_000016A0
lbl_fn_80043014_0000161C:
    lwz r0, 0x1c(r31)
    add r30, r0, r27
    mr r3, r30
    bl strlen
    lbzx r0, r23, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80043014_00001688
    add r3, r30, r3
    mr r4, r23
    subf r0, r30, r3
    mtctr r0
    cmplw r30, r3
    beq lbl_fn_80043014_00001684
lbl_fn_80043014_00001658:
    lbz r3, 0x0(r30)
    lbz r0, 0x0(r4)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80043014_00001678
    li r0, 0x0
    b lbl_fn_80043014_00001688
lbl_fn_80043014_00001678:
    addi r30, r30, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_80043014_00001658
lbl_fn_80043014_00001684:
    li r0, 0x1
lbl_fn_80043014_00001688:
    cmpwi r0, 0x0
    beq lbl_fn_80043014_00001698
    addi r3, r31, 0x8
    b lbl_fn_80043014_000016C4
lbl_fn_80043014_00001698:
    addi r27, r27, 0x20
    addi r24, r24, 0x1
lbl_fn_80043014_000016A0:
    cmplw r24, r26
    blt lbl_fn_80043014_0000161C
lbl_fn_80043014_000016A8:
    addi r29, r29, 0x20
    addi r25, r25, 0x1
lbl_fn_80043014_000016B0:
    cmplw r25, r28
    blt lbl_fn_80043014_000015F8
lbl_fn_80043014_000016B8:
    slwi r0, r22, 4
    add r3, r21, r0
    addi r3, r3, 0x58
lbl_fn_80043014_000016C4:
    lmw r21, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80043128(void)
{
    nofralloc
    blr
}

asm void fn_8004312C(void)
{
    nofralloc
    blr
}

asm void fn_80043130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplw r4, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80043130_00001720
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r31
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80043130_00001720:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004318C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087EE78
    cmpwi r0, 0x0
    bne lbl_fn_8004318C_0000178C
    lis r5, lbl_80730E14@ha
    li r3, 0x3e8
    addi r5, r5, lbl_80730E14@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8004318C_00001788
    mr r4, r31
    bl fn_80043214
lbl_fn_8004318C_00001788:
    stw r3, lbl_8087EE78
lbl_fn_8004318C_0000178C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087EE78
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800431F4(void)
{
    nofralloc
    cmpwi r3, 0x2
    bne lbl_fn_800431F4_000017BC
    cmpwi r4, 0x9
    bne lbl_fn_800431F4_000017BC
    li r3, 0x1
    blr
lbl_fn_800431F4_000017BC:
    li r3, 0x0
    blr
}

asm void fn_80043214(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r3
    bl fn_800D1D3C
    addi r5, r31, 0x78
    addi r7, r31, 0x1a4
    lis r3, lbl_80777358@ha
    li r0, 0x0
    addi r3, r3, lbl_80777358@l
    cmplw r5, r7
    stw r3, 0x0(r31)
    stw r0, 0x48(r31)
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    stw r0, 0x54(r31)
    stw r0, 0x58(r31)
    stw r0, 0x5c(r31)
    stw r0, 0x60(r31)
    stw r0, 0x64(r31)
    stw r0, 0x68(r31)
    stw r0, 0x6c(r31)
    stw r0, 0x70(r31)
    stw r0, 0x74(r31)
    bge lbl_fn_80043214_00001960
    addi r0, r31, 0x78
    subi r6, r7, 0xa0
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_80043214_00001848
    li r3, 0x1
lbl_fn_80043214_00001848:
    cmpwi r3, 0x0
    beq lbl_fn_80043214_00001854
    li r0, 0x1
lbl_fn_80043214_00001854:
    cmpwi r0, 0x0
    beq lbl_fn_80043214_00001924
    addi r3, r6, 0x9f
    li r0, 0xa0
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r6
    bge lbl_fn_80043214_00001924
lbl_fn_80043214_0000187C:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    stw r4, 0x14(r5)
    stw r4, 0x18(r5)
    stw r4, 0x1c(r5)
    stw r4, 0x20(r5)
    stw r4, 0x24(r5)
    stw r4, 0x28(r5)
    stw r4, 0x2c(r5)
    stw r4, 0x30(r5)
    stw r4, 0x34(r5)
    stw r4, 0x38(r5)
    stw r4, 0x3c(r5)
    stw r4, 0x40(r5)
    stw r4, 0x44(r5)
    stw r4, 0x48(r5)
    stw r4, 0x4c(r5)
    stw r4, 0x50(r5)
    stw r4, 0x54(r5)
    stw r4, 0x58(r5)
    stw r4, 0x5c(r5)
    stw r4, 0x60(r5)
    stw r4, 0x64(r5)
    stw r4, 0x68(r5)
    stw r4, 0x6c(r5)
    stw r4, 0x70(r5)
    stw r4, 0x74(r5)
    stw r4, 0x78(r5)
    stw r4, 0x7c(r5)
    stw r4, 0x80(r5)
    stw r4, 0x84(r5)
    stw r4, 0x88(r5)
    stw r4, 0x8c(r5)
    stw r4, 0x90(r5)
    stw r4, 0x94(r5)
    stw r4, 0x98(r5)
    stw r4, 0x9c(r5)
    addi r5, r5, 0xa0
    bdnz lbl_fn_80043214_0000187C
lbl_fn_80043214_00001924:
    addi r3, r7, 0x13
    li r0, 0x14
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    bge lbl_fn_80043214_00001960
lbl_fn_80043214_00001944:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    addi r5, r5, 0x14
    bdnz lbl_fn_80043214_00001944
lbl_fn_80043214_00001960:
    li r5, 0x0
    li r0, 0x1
    stw r5, 0x1a4(r31)
    addi r6, r31, 0x2cc
    addi r3, r31, 0x3dc
    stw r5, 0x2a8(r31)
    stw r5, 0x2ac(r31)
    stw r5, 0x2b0(r31)
    stw r5, 0x2b4(r31)
    stw r0, 0x2c8(r31)
lbl_fn_80043214_00001988:
    stw r5, 0x0(r6)
    addi r7, r6, 0xc
    addi r4, r6, 0x44
    stw r5, 0x4(r6)
    cmplw r7, r4
    stw r5, 0x8(r6)
    bge lbl_fn_80043214_000019C8
    addi r0, r4, 0x7
    subf r0, r7, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_80043214_000019C8
lbl_fn_80043214_000019B8:
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x8
    bdnz lbl_fn_80043214_000019B8
lbl_fn_80043214_000019C8:
    addi r6, r6, 0x44
    cmplw r6, r3
    blt lbl_fn_80043214_00001988
    li r0, 0x1
    lis r29, lbl_80730DD0@ha
    stw r0, 0x3dc(r31)
    addi r29, r29, lbl_80730DD0@l
    li r26, 0x0
    li r28, 0x0
    stw r0, 0x3e0(r31)
    li r30, 0x0
lbl_fn_80043214_000019F4:
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80043214_00001A24
    mr r3, r31
    add r27, r31, r28
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x2b8(r27)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    b lbl_fn_80043214_00001A2C
lbl_fn_80043214_00001A24:
    add r3, r31, r28
    stw r30, 0x2b8(r3)
lbl_fn_80043214_00001A2C:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x4
    addi r29, r29, 0x4
    blt lbl_fn_80043214_000019F4
    mr r3, r31
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800434A8(void)
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
    beq lbl_fn_800434A8_00001A9C
    li r0, 0x0
    stw r0, lbl_8087EE78
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_800434A8_00001A9C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800434A8_00001A9C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80043508(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_8004350C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r0, 0x48(r3)
    mr r28, r3
    cmpwi r0, 0x1
    bne lbl_fn_8004350C_00001B40
    li r0, 0x0
    stw r0, 0x2a8(r3)
    addi r5, r3, 0x64
    li r6, 0x0
    stw r0, 0x2ac(r3)
    b lbl_fn_8004350C_00001B34
lbl_fn_8004350C_00001AF8:
    lwz r4, 0x0(r5)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_8004350C_00001B1C
    lwz r4, 0x2a8(r3)
    lwz r0, 0x8(r5)
    add r0, r4, r0
    stw r0, 0x2a8(r3)
    b lbl_fn_8004350C_00001B2C
lbl_fn_8004350C_00001B1C:
    lwz r4, 0x2ac(r3)
    lwz r0, 0x8(r5)
    add r0, r4, r0
    stw r0, 0x2ac(r3)
lbl_fn_8004350C_00001B2C:
    addi r5, r5, 0x14
    addi r6, r6, 0x1
lbl_fn_8004350C_00001B34:
    lwz r0, 0x60(r3)
    cmplw r6, r0
    blt lbl_fn_8004350C_00001AF8
lbl_fn_8004350C_00001B40:
    lwz r4, 0x2b0(r3)
    cmpwi r4, 0x0
    ble lbl_fn_8004350C_00001B54
    subi r0, r4, 0x1
    stw r0, 0x2b0(r3)
lbl_fn_8004350C_00001B54:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8004350C_00001D3C
    li r29, 0x0
    addi r30, r1, 0x8
    mr r26, r29
    li r27, 0x0
    b lbl_fn_8004350C_00001D30
lbl_fn_8004350C_00001B74:
    add r31, r28, r27
    lwz r0, 0x70(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8004350C_00001C6C
    lwz r4, 0x64(r31)
    li r3, 0x0
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_8004350C_00001BAC
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_8004350C_00001BAC
    li r3, 0x1
lbl_fn_8004350C_00001BAC:
    cmpwi r3, 0x0
    beq lbl_fn_8004350C_00001C6C
    lwz r25, 0x1a4(r28)
    cmpwi r25, 0x0
    beq lbl_fn_8004350C_00001C60
    bl fn_80680CF8
    divwu r4, r3, r25
    lwz r6, 0x64(r31)
    addi r0, r28, 0x1a8
    lfs f2, 0x53c(r6)
    psq_l f1, 0x534(r6), 0, 0
    stfs f2, 0x10(r1)
    mullw r4, r4, r25
    psq_st f1, 0x0(r30), 0, 0
    subf r3, r4, r3
    slwi r3, r3, 2
    add r3, r28, r3
    lwzu r7, 0x1a8(r3)
    lfs f0, 0x14(r7)
    subf r0, r0, r3
    lfs f2, 0xc(r7)
    srawi r0, r0, 2
    psq_l f1, 0x4(r7), 0, 0
    addze r4, r0
    psq_st f1, 0x528(r6), 0, 0
    slwi r0, r4, 2
    add r5, r28, r0
    stfs f2, 0x530(r6)
    lfs f2, 0x10(r1)
    stfs f0, 0xc(r1)
    lwz r3, 0x64(r31)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    stw r7, 0x74(r31)
    b lbl_fn_8004350C_00001C4C
lbl_fn_8004350C_00001C3C:
    lwz r0, 0x1ac(r5)
    addi r4, r4, 0x1
    stw r0, 0x1a8(r5)
    addi r5, r5, 0x4
lbl_fn_8004350C_00001C4C:
    lwz r3, 0x1a4(r28)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_8004350C_00001C3C
    stw r0, 0x1a4(r28)
lbl_fn_8004350C_00001C60:
    lwz r0, 0x70(r31)
    clrrwi r0, r0, 1
    stw r0, 0x70(r31)
lbl_fn_8004350C_00001C6C:
    lwz r4, 0x64(r31)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    lwz r7, 0x38(r4)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8004350C_00001C9C
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8004350C_00001C9C
    li r6, 0x1
lbl_fn_8004350C_00001C9C:
    cmpwi r6, 0x0
    beq lbl_fn_8004350C_00001CB8
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8004350C_00001CB8
    li r3, 0x1
lbl_fn_8004350C_00001CB8:
    cmpwi r3, 0x0
    beq lbl_fn_8004350C_00001CEC
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8004350C_00001CE0
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_8004350C_00001CE0
    li r3, 0x1
lbl_fn_8004350C_00001CE0:
    cmpwi r3, 0x0
    bne lbl_fn_8004350C_00001CEC
    li r5, 0x1
lbl_fn_8004350C_00001CEC:
    cmpwi r5, 0x0
    beq lbl_fn_8004350C_00001D28
    lwz r3, 0x74(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8004350C_00001D28
    lwz r0, 0x1a4(r28)
    slwi r0, r0, 2
    add r0, r28, r0
    addic. r4, r0, 0x1a8
    beq lbl_fn_8004350C_00001D18
    stw r3, 0x0(r4)
lbl_fn_8004350C_00001D18:
    lwz r3, 0x1a4(r28)
    addi r0, r3, 0x1
    stw r0, 0x1a4(r28)
    stw r26, 0x74(r31)
lbl_fn_8004350C_00001D28:
    addi r29, r29, 0x1
    addi r27, r27, 0x14
lbl_fn_8004350C_00001D30:
    lwz r0, 0x60(r28)
    cmplw r29, r0
    blt lbl_fn_8004350C_00001B74
lbl_fn_8004350C_00001D3C:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800437A4(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stw r31, 0x22c(r1)
    mr r31, r3
    stw r30, 0x228(r1)
    stw r29, 0x224(r1)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_800437A4_00001E74
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800437A4_00001E74
    lwz r3, 0x2b0(r3)
    lis r0, 0x4330
    lis r4, lbl_80730E00@ha
    stw r0, 0x208(r1)
    xoris r3, r3, 0x8000
    lfd f2, lbl_80730E00@l(r4)
    stw r3, 0x20c(r1)
    lfs f1, lbl_80880838
    lfd f0, 0x208(r1)
    lfs f3, lbl_8088083C
    fsubs f0, f0, f2
    fdivs f0, f0, f1
    fcmpo cr0, f0, f3
    bge lbl_fn_800437A4_00001DDC
    stw r3, 0x214(r1)
    stw r0, 0x210(r1)
    lfd f0, 0x210(r1)
    fsubs f0, f0, f2
    fdivs f3, f0, f1
lbl_fn_800437A4_00001DDC:
    lfs f1, lbl_8088083C
    lis r5, lbl_80777390@ha
    lfs f0, lbl_80880840
    addi r3, r1, 0x8
    fadds f1, f1, f3
    lwz r6, 0x2a8(r31)
    lwz r7, 0x2ac(r31)
    addi r5, r5, lbl_80777390@l
    li r4, 0x100
    fmuls f31, f0, f1
    crclr 6
    bl fn_806868C4
    fmr f1, f31
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_80880844
    addi r4, r1, 0x8
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_80880844
    fmr f4, f31
    lfs f2, lbl_8088084C
    fmr f5, f31
    lfs f0, lbl_80880848
    fmr f6, f3
    fmr f7, f3
    fnmsubs f1, f1, f2, f0
    lwz r3, lbl_8087EEB0
    fmr f8, f3
    lfs f2, lbl_80880850
    addi r4, r1, 0x8
    li r5, -0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_800437A4_00001E74:
    lwz r4, 0x2b8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800437A4_00001E8C
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_800437A4_00001E8C:
    lwz r4, 0x2bc(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800437A4_00001EA4
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_800437A4_00001EA4:
    lwz r4, 0x2c0(r31)
    addi r3, r31, 0x8
    cmpwi r4, 0x0
    beq lbl_fn_800437A4_00001EC0
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_800437A4_00001EC0:
    lwz r4, 0x2bc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800437A4_00001ED8
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_800437A4_00001ED8:
    lwz r0, 0x2b4(r31)
    cmpwi r0, 0x0
    blt lbl_fn_800437A4_00001FB0
    cmpwi r0, 0x5
    bge lbl_fn_800437A4_00001FB0
    cmpwi r0, 0x1
    li r30, 0x0
    li r29, 0x0
    beq lbl_fn_800437A4_00001F18
    cmpwi r0, 0x2
    beq lbl_fn_800437A4_00001F24
    cmpwi r0, 0x3
    beq lbl_fn_800437A4_00001F30
    cmpwi r0, 0x4
    beq lbl_fn_800437A4_00001F3C
    b lbl_fn_800437A4_00001F44
lbl_fn_800437A4_00001F18:
    lwz r30, 0x2b8(r31)
    li r29, -0x1
    b lbl_fn_800437A4_00001F44
lbl_fn_800437A4_00001F24:
    lwz r30, 0x2c0(r31)
    li r29, 0x0
    b lbl_fn_800437A4_00001F44
lbl_fn_800437A4_00001F30:
    lwz r30, 0x2c4(r31)
    li r29, 0x2
    b lbl_fn_800437A4_00001F44
lbl_fn_800437A4_00001F3C:
    lwz r30, 0x2bc(r31)
    li r29, 0x1
lbl_fn_800437A4_00001F44:
    cmpwi r30, 0x0
    beq lbl_fn_800437A4_00001FB0
    lwz r0, 0x38(r30)
    lis r3, lbl_80730E14@ha
    addi r3, r3, lbl_80730E14@l
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r30)
    addi r3, r3, 0x1
    bl fn_800DC6B4
    xoris r4, r29, 0x8000
    lis r0, 0x4330
    stw r4, 0x214(r1)
    lis r5, lbl_80730E00@ha
    lfd f1, lbl_80730E00@l(r5)
    mr r4, r3
    stw r0, 0x210(r1)
    addi r3, r30, 0x58
    lfd f0, 0x210(r1)
    fsubs f1, f0, f1
    bl fn_801FECE0
    lwz r0, 0x2c8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800437A4_00001FB0
    lfs f0, lbl_80880844
    li r0, 0x0
    stfs f0, 0x100(r30)
    stw r0, 0x2c8(r31)
lbl_fn_800437A4_00001FB0:
    lwz r0, 0x244(r1)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    lwz r29, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_80043A24(void)
{
    nofralloc
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80043A24_00001FE8
    lwz r0, 0x10d8(r4)
    b lbl_fn_80043A24_00001FEC
lbl_fn_80043A24_00001FE8:
    li r0, 0x0
lbl_fn_80043A24_00001FEC:
    cmpwi r0, 0x0
    stw r0, 0x4c(r3)
    beqlr
    lwz r5, lbl_8087F048
    cmpwi r5, 0x0
    beqlr
    addis r4, r5, 0x3
    addis r7, r5, 0x1
    lwz r8, 0x63b0(r4)
    li r9, 0x0
    li r5, 0x0
    subi r7, r7, 0x3410
    b lbl_fn_80043A24_00002060
lbl_fn_80043A24_00002020:
    lwz r0, 0x60(r3)
    lwz r6, 0x0(r7)
    mulli r0, r0, 0x14
    add r0, r3, r0
    addic. r4, r0, 0x64
    beq lbl_fn_80043A24_0000204C
    stw r6, 0x0(r4)
    stw r5, 0x4(r4)
    stw r5, 0x8(r4)
    stw r5, 0xc(r4)
    stw r5, 0x10(r4)
lbl_fn_80043A24_0000204C:
    lwz r4, 0x60(r3)
    addi r7, r7, 0x934
    addi r9, r9, 0x1
    addi r0, r4, 0x1
    stw r0, 0x60(r3)
lbl_fn_80043A24_00002060:
    cmpw r9, r8
    bge lbl_fn_80043A24_00002074
    lwz r0, 0x60(r3)
    cmplwi r0, 0x10
    blt lbl_fn_80043A24_00002020
lbl_fn_80043A24_00002074:
    li r0, 0x0
    lis r4, 0x1
    stw r0, 0x1a4(r3)
    subi r5, r4, 0x3cb0
    lwz r6, 0x4c(r3)
    li r9, 0x0
    li r8, 0x0
    b lbl_fn_80043A24_000020D4
lbl_fn_80043A24_00002094:
    lwz r0, 0x7c(r6)
    add r7, r0, r8
    lwzx r0, r8, r0
    cmpw r0, r5
    blt lbl_fn_80043A24_000020CC
    lwz r0, 0x1a4(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r4, r0, 0x1a8
    beq lbl_fn_80043A24_000020C0
    stw r7, 0x0(r4)
lbl_fn_80043A24_000020C0:
    lwz r4, 0x1a4(r3)
    addi r0, r4, 0x1
    stw r0, 0x1a4(r3)
lbl_fn_80043A24_000020CC:
    addi r8, r8, 0x28
    addi r9, r9, 0x1
lbl_fn_80043A24_000020D4:
    lwz r0, 0x78(r6)
    cmplw r9, r0
    blt lbl_fn_80043A24_00002094
    blr
}

asm void fn_80043B34(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    beqlr
    lwz r4, 0x58(r3)
    li r0, 0x1
    stw r0, 0x48(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80043B34_00002144
    addi r4, r3, 0x64
    li r6, 0x0
    b lbl_fn_80043B34_00002134
lbl_fn_80043B34_00002110:
    lwz r5, 0x0(r4)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    bne lbl_fn_80043B34_0000212C
    lwz r0, 0x12a4(r5)
    oris r0, r0, 0x1
    stw r0, 0x12a4(r5)
lbl_fn_80043B34_0000212C:
    addi r4, r4, 0x14
    addi r6, r6, 0x1
lbl_fn_80043B34_00002134:
    lwz r0, 0x60(r3)
    cmplw r6, r0
    blt lbl_fn_80043B34_00002110
    blr
lbl_fn_80043B34_00002144:
    cmpwi r4, 0x1
    bnelr
    addi r4, r3, 0x64
    li r6, 0x0
    b lbl_fn_80043B34_0000217C
lbl_fn_80043B34_00002158:
    lwz r5, 0x0(r4)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    bne lbl_fn_80043B34_00002174
    lwz r0, 0x12a4(r5)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x12a4(r5)
lbl_fn_80043B34_00002174:
    addi r4, r4, 0x14
    addi r6, r6, 0x1
lbl_fn_80043B34_0000217C:
    lwz r0, 0x60(r3)
    cmplw r6, r0
    blt lbl_fn_80043B34_00002158
    blr
}

asm void fn_80043BDC(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bnelr
    li r0, 0x2
    stw r0, 0x48(r3)
    blr
}

asm void fn_80043BF4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    addi r28, r3, 0x64
    lwz r7, 0x60(r3)
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_80043BF4_000021F4
lbl_fn_80043BF4_000021DC:
    lwz r0, 0x0(r28)
    cmplw r0, r5
    bne lbl_fn_80043BF4_000021EC
    b lbl_fn_80043BF4_000021F8
lbl_fn_80043BF4_000021EC:
    addi r28, r28, 0x14
    bdnz lbl_fn_80043BF4_000021DC
lbl_fn_80043BF4_000021F4:
    li r28, 0x0
lbl_fn_80043BF4_000021F8:
    addi r29, r3, 0x64
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_80043BF4_00002220
lbl_fn_80043BF4_00002208:
    lwz r0, 0x0(r29)
    cmplw r0, r6
    bne lbl_fn_80043BF4_00002218
    b lbl_fn_80043BF4_00002224
lbl_fn_80043BF4_00002218:
    addi r29, r29, 0x14
    bdnz lbl_fn_80043BF4_00002208
lbl_fn_80043BF4_00002220:
    li r29, 0x0
lbl_fn_80043BF4_00002224:
    cmpwi r4, 0x1
    bne lbl_fn_80043BF4_000022B0
    lwz r0, 0x3dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80043BF4_00002268
    lis r3, lbl_80730DF0@ha
    slwi r0, r0, 2
    addi r3, r3, lbl_80730DF0@l
    lfs f1, lbl_8088083C
    lwzx r4, r3, r0
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80043BF4_00002268:
    cmpwi r28, 0x0
    beq lbl_fn_80043BF4_0000227C
    lwz r3, 0x4(r28)
    addi r0, r3, 0x1
    stw r0, 0x4(r28)
lbl_fn_80043BF4_0000227C:
    cmpwi r29, 0x0
    beq lbl_fn_80043BF4_000022A8
    lwz r3, 0x8(r29)
    addi r0, r3, 0x1
    stw r0, 0x8(r29)
    lwz r0, 0x58(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80043BF4_000022A8
    lwz r0, 0xc(r29)
    ori r0, r0, 0x1
    stw r0, 0xc(r29)
lbl_fn_80043BF4_000022A8:
    li r0, 0xf
    stw r0, 0x2b0(r30)
lbl_fn_80043BF4_000022B0:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80043BF4_000022C4
    cmpwi r0, 0x3
    bne lbl_fn_80043BF4_000022D4
lbl_fn_80043BF4_000022C4:
    mr r3, r30
    li r4, 0x0
    bl fn_80043D58
    b lbl_fn_80043BF4_000022E8
lbl_fn_80043BF4_000022D4:
    cmpwi r0, 0x2
    bne lbl_fn_80043BF4_000022E8
    mr r3, r30
    li r4, 0x1
    bl fn_80043D58
lbl_fn_80043BF4_000022E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80043D58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x3e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80043D58_0000243C
    lwz r5, lbl_8087F490
    lwz r30, 0x2640(r5)
    cmpwi r30, 0x0
    beq lbl_fn_80043D58_0000243C
    lwz r0, 0x50(r30)
    li r5, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80043D58_00002364
    lfs f1, lbl_80880854
    lfs f0, 0x60(r30)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80043D58_00002368
lbl_fn_80043D58_00002364:
    li r5, 0x1
lbl_fn_80043D58_00002368:
    cmpwi r5, 0x0
    bne lbl_fn_80043D58_00002374
    b lbl_fn_80043D58_0000243C
lbl_fn_80043D58_00002374:
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_80043D58_00002388
    lwz r29, 0x10d8(r5)
    b lbl_fn_80043D58_0000238C
lbl_fn_80043D58_00002388:
    li r29, 0x0
lbl_fn_80043D58_0000238C:
    cmpwi r29, 0x0
    beq lbl_fn_80043D58_0000243C
    mulli r0, r4, 0x44
    add r3, r3, r0
    lwz r31, 0x2cc(r3)
    addi r28, r3, 0x2cc
    cmpwi r31, 0x0
    beq lbl_fn_80043D58_0000243C
    bl fn_80680CF8
    divwu r0, r3, r31
    mullw r0, r0, r31
    subf r0, r0, r3
    mr r3, r29
    slwi r0, r0, 3
    add r31, r28, r0
    lwz r4, 0x4(r31)
    bl fn_803CC6B4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80043D58_000023EC
    lfs f1, lbl_80880854
    mr r3, r30
    li r5, 0x0
    bl fn_803B6970
lbl_fn_80043D58_000023EC:
    li r0, 0x0
    stw r0, 0xb4(r30)
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80043D58_0000243C
    lwz r3, 0x4(r31)
    addi r28, r3, 0x1
    b lbl_fn_80043D58_00002430
lbl_fn_80043D58_0000240C:
    mr r3, r29
    mr r4, r28
    bl fn_803CC6B4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80043D58_0000242C
    mr r3, r30
    bl fn_803B78B4
lbl_fn_80043D58_0000242C:
    addi r28, r28, 0x1
lbl_fn_80043D58_00002430:
    lwz r0, 0x8(r31)
    cmpw r28, r0
    ble lbl_fn_80043D58_0000240C
lbl_fn_80043D58_0000243C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80043EAC(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_27
    lis r8, lbl_80777494@ha
    stw r4, 0x4(r3)
    addi r8, r8, lbl_80777494@l
    mr r31, r3
    stw r8, 0x0(r3)
    mr r27, r7
    li r4, 0x505
    stw r5, 0x8(r3)
    stw r6, 0xc(r3)
    addi r3, r3, 0x10
    bl fn_8008A4E0
    lfs f1, lbl_80880858
    addi r28, r31, 0x27c
    lfs f0, lbl_8088085C
    li r29, 0x0
    li r30, -0x1
    stw r29, 0x224(r31)
    mr r3, r28
    stfs f1, 0x258(r31)
    stfs f1, 0x25c(r31)
    stfs f1, 0x260(r31)
    stfs f0, 0x264(r31)
    stfs f0, 0x268(r31)
    stfs f0, 0x26c(r31)
    stw r27, 0x270(r31)
    stw r30, 0x278(r31)
    bl fn_80473E74
    lfs f1, lbl_80880858
    lis r3, lbl_8078FBB0@ha
    lfs f0, lbl_8088085C
    addi r3, r3, lbl_8078FBB0@l
    li r0, 0x3
    stw r3, 0x0(r28)
    lwz r3, 0x4(r31)
    stw r0, 0x284(r31)
    lwz r4, 0x8(r31)
    stw r30, 0x288(r31)
    stw r29, 0x28c(r31)
    stw r29, 0x29c(r31)
    stw r29, 0x2a0(r31)
    stw r29, 0x2a4(r31)
    stfs f1, 0x254(r31)
    stfs f1, 0x24c(r31)
    stfs f1, 0x248(r31)
    stfs f1, 0x244(r31)
    stfs f1, 0x240(r31)
    stfs f1, 0x238(r31)
    stfs f1, 0x234(r31)
    stfs f1, 0x230(r31)
    stfs f1, 0x22c(r31)
    stfs f0, 0x250(r31)
    stfs f0, 0x23c(r31)
    stfs f0, 0x228(r31)
    bl fn_80206B14
    stw r3, 0x274(r31)
    lwz r3, 0x4(r31)
    lwz r4, 0x8(r31)
    bl fn_802072AC
    lwz r4, 0x274(r31)
    stw r3, 0x2a4(r31)
    addi r30, r4, 0x8c
    mr r3, r30
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80043EAC_00002640
    stw r29, 0x10(r1)
    mr r3, r30
    addi r28, r1, 0x10
    stw r29, 0x14(r1)
    stw r29, 0x18(r1)
    bl strlen
    mr r29, r3
    mr r3, r28
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r30
    add r7, r30, r29
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x1c
    bl fn_8006B2D8
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80043EAC_000025E0
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_80043EAC_000025E0:
    lwz r0, 0x1c(r1)
    lis r4, lbl_80730E5C@ha
    addi r3, r1, 0x28
    srwi. r0, r0, 31
    addi r4, r4, lbl_80730E5C@l
    bne lbl_fn_80043EAC_00002600
    addi r5, r1, 0x1d
    b lbl_fn_80043EAC_00002604
lbl_fn_80043EAC_00002600:
    lwz r5, 0x24(r1)
lbl_fn_80043EAC_00002604:
    crclr 6
    bl sprintf
    lwz r12, 0x27c(r31)
    addi r3, r31, 0x27c
    addi r4, r1, 0x28
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x284(r31)
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80043EAC_00002640
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_80043EAC_00002640:
    li r29, 0x0
    li r28, 0x0
lbl_fn_80043EAC_00002648:
    lwz r0, 0x274(r31)
    add r3, r0, r28
    lwz r3, 0xac(r3)
    bl fn_80219E6C
    addi r29, r29, 0x1
    add r4, r31, r28
    cmpwi r29, 0x3
    stw r3, 0x290(r4)
    addi r28, r28, 0x4
    blt lbl_fn_80043EAC_00002648
    addi r11, r1, 0x140
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_800440DC(void)
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
    beq lbl_fn_800440DC_000026C8
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_800440DC_000026C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_800440DC_000026C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80044134(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80044134_000027DC
    lwz r0, 0x2a0(r3)
    lis r4, lbl_80777494@ha
    addi r4, r4, lbl_80777494@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80044134_0000277C
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80044134_0000277C
    li r0, 0x2
    stw r0, 0xb8(r3)
    addi r4, r29, 0x10
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    stw r0, 0x2a0(r29)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80044134_0000277C
    lwz r3, 0x5590(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80044134_0000277C
    lwz r4, 0x29c(r29)
    bl fn_80570A78
lbl_fn_80044134_0000277C:
    addic. r0, r29, 0x29c
    beq lbl_fn_80044134_000027B0
    lwz r31, 0x29c(r29)
    cmpwi r31, 0x0
    beq lbl_fn_80044134_000027B0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80044134_000027A8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80044134_000027A8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_80044134_000027B0:
    addic. r3, r29, 0x27c
    beq lbl_fn_80044134_000027C0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80044134_000027C0:
    addi r3, r29, 0x10
    li r4, -0x1
    bl fn_8008A76C
    cmpwi r30, 0x0
    ble lbl_fn_80044134_000027DC
    mr r3, r29
    bl dtor_80084684
lbl_fn_80044134_000027DC:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004424C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x284(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004424C_00002830
    cmpwi r0, 0x1
    beq lbl_fn_8004424C_00002850
    cmpwi r0, 0x2
    beq lbl_fn_8004424C_00002868
    b lbl_fn_8004424C_0000292C
lbl_fn_8004424C_00002830:
    addi r3, r3, 0x27c
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8004424C_00002848
    li r3, 0x1
    b lbl_fn_8004424C_00002930
lbl_fn_8004424C_00002848:
    li r0, 0x1
    stw r0, 0x284(r31)
lbl_fn_8004424C_00002850:
    mr r3, r31
    bl fn_8004439C
    addi r3, r31, 0x27c
    bl fn_80473F88
    li r0, 0x2
    stw r0, 0x284(r31)
lbl_fn_8004424C_00002868:
    addi r3, r31, 0x10
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_8004424C_00002880
    li r3, 0x1
    b lbl_fn_8004424C_00002930
lbl_fn_8004424C_00002880:
    lwz r0, 0x29c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8004424C_000028AC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8004424C_000028C8
lbl_fn_8004424C_000028AC:
    lis r5, lbl_807773A8@ha
    lwzu r4, lbl_807773A8@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8004424C_000028C8:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8004424C_00002908
    lwz r3, 0x29c(r31)
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8004424C_00002908
    li r3, 0x1
    b lbl_fn_8004424C_00002930
lbl_fn_8004424C_00002908:
    lis r4, lbl_80730E5C@ha
    addi r3, r31, 0x10
    addi r4, r4, lbl_80730E5C@l
    li r5, 0x0
    addi r4, r4, 0x1b
    bl fn_80092814
    li r0, 0x3
    stw r3, 0x278(r31)
    stw r0, 0x284(r31)
lbl_fn_8004424C_0000292C:
    li r3, 0x0
lbl_fn_8004424C_00002930:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80044394(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_8004439C(void)
{
    nofralloc
    stwu r1, -0x960(r1)
    mflr r0
    stw r0, 0x964(r1)
    li r0, 0x958
    stfd f31, 0x950(r1)
    psq_stx f31, r1, r0, 0, 0
    stw r31, 0x94c(r1)
    mr r31, r3
    addi r3, r3, 0x27c
    stw r30, 0x948(r1)
    stw r29, 0x944(r1)
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x27c
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x308(r1)
    mr r30, r3
    addi r3, r1, 0x318
    stw r0, 0x30c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x310(r1)
    stw r0, 0x314(r1)
    stw r0, 0x938(r1)
    bl memset
    addi r3, r1, 0x918
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x308(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x308
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x308
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x308(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_80730E5C@ha
    lfs f31, lbl_80880860
    addi r30, r30, lbl_80730E5C@l
lbl_fn_8004439C_00002A0C:
    addi r3, r1, 0x308
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_8004439C_00002C44
    addi r4, r30, 0x20
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8004439C_00002A98
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x208
    bl strcpy
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x108
    bl strcpy
    addi r3, r1, 0x108
    addi r4, r30, 0x26
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8004439C_00002A84
    addi r3, r31, 0x10
    addi r4, r1, 0x208
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_8004439C_00002C44
lbl_fn_8004439C_00002A84:
    addi r3, r31, 0x10
    addi r4, r1, 0x208
    addi r5, r1, 0x108
    bl fn_8008AD4C
    b lbl_fn_8004439C_00002C44
lbl_fn_8004439C_00002A98:
    mr r3, r29
    addi r4, r30, 0x27
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8004439C_00002B14
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x208
    bl strcpy
    addi r3, r1, 0x108
    addi r4, r30, 0x26
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8004439C_00002AF4
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r31, 0x10
    addi r4, r1, 0x208
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_8004439C_00002C44
lbl_fn_8004439C_00002AF4:
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r31, 0x10
    addi r4, r1, 0x208
    addi r5, r1, 0x108
    bl fn_80092F1C
    b lbl_fn_8004439C_00002C44
lbl_fn_8004439C_00002B14:
    mr r3, r29
    addi r4, r30, 0x31
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8004439C_00002B7C
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x258(r31)
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x25c(r31)
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    frsp f2, f1
    lfs f0, 0x258(r31)
    lfs f1, 0x25c(r31)
    fmuls f0, f31, f0
    fmuls f1, f31, f1
    fmuls f2, f31, f2
    stfs f0, 0x258(r31)
    stfs f1, 0x25c(r31)
    stfs f2, 0x260(r31)
    b lbl_fn_8004439C_00002C44
lbl_fn_8004439C_00002B7C:
    mr r3, r29
    addi r4, r30, 0x3a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8004439C_00002BC4
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x264(r31)
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x268(r31)
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x26c(r31)
    b lbl_fn_8004439C_00002C44
lbl_fn_8004439C_00002BC4:
    mr r3, r29
    addi r4, r30, 0x40
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8004439C_00002C44
    addi r5, r30, 0x26
    li r3, 0xc
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8004439C_00002BFC
    bl fn_802377B8
lbl_fn_8004439C_00002BFC:
    lwz r29, 0x29c(r31)
    cmpwi r29, 0x0
    stw r3, 0x29c(r31)
    beq lbl_fn_8004439C_00002C2C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_8004439C_00002C24
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8004439C_00002C24:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8004439C_00002C2C:
    lwz r29, 0x29c(r31)
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r29
    bl fn_8023780C
lbl_fn_8004439C_00002C44:
    addi r3, r1, 0x308
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8004439C_00002A0C
    lwz r0, 0x29c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8004439C_00002CF4
    lwz r0, 0x2a4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8004439C_00002CF4
    lis r5, lbl_80730E5C@ha
    li r3, 0xc
    addi r5, r5, lbl_80730E5C@l
    li r4, 0x1
    addi r5, r5, 0x26
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8004439C_00002C98
    bl fn_802377B8
lbl_fn_8004439C_00002C98:
    lwz r29, 0x29c(r31)
    cmpwi r29, 0x0
    stw r3, 0x29c(r31)
    beq lbl_fn_8004439C_00002CC8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_8004439C_00002CC0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8004439C_00002CC0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8004439C_00002CC8:
    lwz r5, 0x2a4(r31)
    lis r4, lbl_80730E5C@ha
    addi r4, r4, lbl_80730E5C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x44
    addi r5, r5, 0x10
    crclr 6
    bl sprintf
    lwz r3, 0x29c(r31)
    addi r4, r1, 0x8
    bl fn_8023780C
lbl_fn_8004439C_00002CF4:
    li r0, 0x958
    psq_lx f31, r1, r0, 0, 0
    lwz r0, 0x964(r1)
    lfd f31, 0x950(r1)
    lwz r31, 0x94c(r1)
    lwz r30, 0x948(r1)
    lwz r29, 0x944(r1)
    mtlr r0
    addi r1, r1, 0x960
    blr
}

asm void fn_8004476C(void)
{
    nofralloc
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_80044780(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    stfd f31, 0x2b0(r1)
    psq_st f31, 0x2b8(r1), 0, 0
    stfd f30, 0x2a0(r1)
    psq_st f30, 0x2a8(r1), 0, 0
    stw r31, 0x29c(r1)
    stw r30, 0x298(r1)
    stw r29, 0x294(r1)
    mr r29, r3
    lwz r0, 0x284(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80044780_00002D7C
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_80044780_00003134
lbl_fn_80044780_00002D7C:
    lwz r6, 0x224(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80044780_00002D8C
    b lbl_fn_80044780_00002D94
lbl_fn_80044780_00002D8C:
    lis r6, lbl_807C7060@ha
    addi r6, r6, lbl_807C7060@l
lbl_fn_80044780_00002D94:
    psq_l f1, 0x0(r6), 0, 0
    addi r31, r1, 0x260
    psq_l f2, 0x8(r6), 0, 0
    mr r3, r31
    psq_l f3, 0x10(r6), 0, 0
    addi r4, r29, 0x228
    psq_l f4, 0x18(r6), 0, 0
    addi r5, r1, 0x230
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    bl fn_805F89F0
    addi r3, r1, 0x230
    lfs f7, lbl_80880858
    lfs f0, lbl_8088085C
    addi r30, r1, 0xe0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    stfs f7, 0x10c(r1)
    stfs f7, 0x104(r1)
    stfs f7, 0x100(r1)
    stfs f7, 0xfc(r1)
    stfs f7, 0xf8(r1)
    stfs f7, 0xf0(r1)
    stfs f7, 0xec(r1)
    stfs f7, 0xe8(r1)
    stfs f7, 0xe4(r1)
    stfs f0, 0x108(r1)
    stfs f0, 0xf4(r1)
    stfs f0, 0xe0(r1)
    lfs f1, 0x25c(r29)
    fcmpu cr0, f7, f1
    beq lbl_fn_80044780_00002EA4
    addi r3, r1, 0x1d0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1d0
    addi r5, r1, 0x200
    bl fn_805F89F0
    addi r3, r1, 0x200
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80044780_00002EA4:
    lfs f0, lbl_80880858
    lfs f1, 0x258(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80044780_00002F04
    addi r3, r1, 0x170
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x170
    addi r5, r1, 0x1a0
    bl fn_805F89F0
    addi r3, r1, 0x1a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80044780_00002F04:
    lfs f0, lbl_80880858
    lfs f1, 0x260(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80044780_00002F64
    addi r3, r1, 0x110
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x110
    addi r5, r1, 0x140
    bl fn_805F89F0
    addi r3, r1, 0x140
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80044780_00002F64:
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r4, r1, 0xb0
    addi r3, r1, 0x80
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lfs f1, 0x264(r29)
    lfs f2, 0x268(r29)
    lfs f3, 0x26c(r29)
    bl fn_805F9160
    addi r3, r1, 0x260
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r4, r1, 0x50
    addi r5, r1, 0x260
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x14
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x18(r29), 0, 0
    psq_st f2, 0x20(r29), 0, 0
    psq_st f3, 0x28(r29), 0, 0
    psq_st f4, 0x30(r29), 0, 0
    psq_st f5, 0x38(r29), 0, 0
    psq_st f6, 0x40(r29), 0, 0
    lfs f8, 0x288(r1)
    lfs f7, 0x278(r1)
    lfs f0, 0x268(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x284(r1)
    fmr f30, f1
    lfs f7, 0x274(r1)
    addi r3, r1, 0x20
    lfs f0, 0x264(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x280(r1)
    fmr f31, f1
    lfs f7, 0x270(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x260(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_80044780_000030A4
    b lbl_fn_80044780_000030A8
lbl_fn_80044780_000030A4:
    fmr f7, f0
lbl_fn_80044780_000030A8:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80044780_000030B8
    b lbl_fn_80044780_000030D0
lbl_fn_80044780_000030B8:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80044780_000030CC
    b lbl_fn_80044780_000030D0
lbl_fn_80044780_000030CC:
    fmr f8, f0
lbl_fn_80044780_000030D0:
    lwz r0, 0x17c(r29)
    stfs f8, 0x64(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80044780_00003134
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r3, r29, 0x10
    addi r5, r1, 0x38
    li r4, 0x0
    bl fn_800902C0
    addic. r3, r1, 0x38
    beq lbl_fn_80044780_00003134
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80044780_00003134
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80044780_0000312C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80044780_0000312C:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_80044780_00003134:
    lwz r0, 0x2c4(r1)
    psq_l f31, 0x2b8(r1), 0, 0
    lfd f31, 0x2b0(r1)
    psq_l f30, 0x2a8(r1), 0, 0
    lfd f30, 0x2a0(r1)
    lwz r31, 0x29c(r1)
    lwz r30, 0x298(r1)
    lwz r29, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}

asm void fn_80044BB0(void)
{
    nofralloc
    lwz r0, 0x284(r3)
    cmpwi r0, 0x3
    bnelr
    lwz r0, 0x17c(r3)
    cmpwi r0, 0x0
    beqlr
    addi r3, r3, 0x10
    b fn_8008CD60
    blr
}

asm void fn_80044BD4(void)
{
    nofralloc
    lwz r0, 0x278(r4)
    cmpwi r0, 0x0
    blt lbl_fn_80044BD4_000031C4
    bge lbl_fn_80044BD4_0000319C
    li r4, 0x0
    b lbl_fn_80044BD4_000031A8
lbl_fn_80044BD4_0000319C:
    mulli r0, r0, 0x30
    lwz r4, 0x4c(r4)
    add r4, r4, r0
lbl_fn_80044BD4_000031A8:
    lfs f0, 0x2c(r4)
    lfs f1, 0x1c(r4)
    lfs f2, 0xc(r4)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
lbl_fn_80044BD4_000031C4:
    lfs f0, 0x44(r4)
    lfs f1, 0x34(r4)
    lfs f2, 0x24(r4)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_80044C30(void)
{
    nofralloc
    cmpwi r4, 0x0
    bge lbl_fn_80044C30_000031F0
    li r3, 0x0
    blr
lbl_fn_80044C30_000031F0:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x290(r3)
    blr
}

asm void fn_80044C50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    lwz r5, 0x2a4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80044C50_00003260
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    lwz r0, 0xc(r5)
    stw r0, 0x14(r1)
    bl fn_80045510
    cmpwi r3, 0x0
    beq lbl_fn_80044C50_00003264
    li r31, 0x1
    b lbl_fn_80044C50_00003264
lbl_fn_80044C50_00003260:
    li r31, 0x1
lbl_fn_80044C50_00003264:
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80044CCC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lwz r0, 0x29c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80044CCC_000032C0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80044CCC_000032DC
lbl_fn_80044CCC_000032C0:
    lis r5, lbl_807773B4@ha
    lwzu r4, lbl_807773B4@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80044CCC_000032DC:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x38
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80044CCC_000033A4
    lwz r0, 0x2a0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80044CCC_000033A4
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80044CCC_000033A4
    li r0, 0x2
    stw r0, 0xb8(r3)
    addi r3, r31, 0x10
    li r4, 0x0
    bl fn_80232B7C
    lwz r4, 0x29c(r31)
    li r0, -0x1
    lfs f0, lbl_80880858
    li r30, 0x1
    lfs f1, lbl_8088085C
    addi r5, r31, 0x10
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    stw r30, 0x2a0(r31)
lbl_fn_80044CCC_000033A4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80044E0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x2a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80044E0C_00003434
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80044E0C_00003434
    li r0, 0x2
    stw r0, 0xb8(r3)
    mr r6, r4
    addi r4, r31, 0x10
    lwz r3, lbl_8087F3C0
    li r5, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    stw r0, 0x2a0(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80044E0C_00003434
    lwz r3, 0x5590(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80044E0C_00003434
    lwz r4, 0x29c(r31)
    bl fn_80570A78
lbl_fn_80044E0C_00003434:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80044E98(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r11, 0x274(r3)
    cmpwi r11, 0x0
    bne lbl_fn_80044E98_00003468
    li r3, 0x0
    b lbl_fn_80044E98_000034F4
lbl_fn_80044E98_00003468:
    cmpwi r4, 0x0
    blt lbl_fn_80044E98_00003478
    cmpwi r4, 0x2
    blt lbl_fn_80044E98_00003480
lbl_fn_80044E98_00003478:
    li r3, 0x0
    b lbl_fn_80044E98_000034F4
lbl_fn_80044E98_00003480:
    cmpwi r9, 0x0
    beq lbl_fn_80044E98_000034C0
    lwz r0, 0x12a4(r9)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_80044E98_000034A4
    lwz r0, 0x7ec(r9)
    clrlwi. r0, r0, 31
    beq lbl_fn_80044E98_000034C0
lbl_fn_80044E98_000034A4:
    mulli r0, r4, 0x14
    add r3, r11, r0
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x10
    bne lbl_fn_80044E98_000034C0
    li r3, 0x0
    b lbl_fn_80044E98_000034F4
lbl_fn_80044E98_000034C0:
    mulli r0, r4, 0x14
    mr r4, r5
    mr r5, r6
    mr r6, r7
    add r3, r11, r0
    mr r7, r8
    mr r8, r9
    mr r9, r10
    addi r3, r3, 0xc4
    bl fn_80044FBC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80044E98_000034F4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80044F54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x274(r3)
    cmpwi r3, 0x0
    bne lbl_fn_80044F54_00003524
    li r3, 0x0
    b lbl_fn_80044F54_0000355C
lbl_fn_80044F54_00003524:
    cmpwi r4, 0x0
    blt lbl_fn_80044F54_00003534
    cmpwi r4, 0x2
    blt lbl_fn_80044F54_0000353C
lbl_fn_80044F54_00003534:
    li r3, 0x0
    b lbl_fn_80044F54_0000355C
lbl_fn_80044F54_0000353C:
    mulli r0, r4, 0x14
    mr r4, r5
    add r3, r3, r0
    addi r3, r3, 0xc4
    bl fn_80045510
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80044F54_0000355C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80044FBC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmpwi r7, 0x0
    stw r0, 0x84(r1)
    stmw r22, 0x58(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    beq lbl_fn_80044FBC_000035A8
    cmpwi r8, 0x0
    bne lbl_fn_80044FBC_000035B0
lbl_fn_80044FBC_000035A8:
    li r3, 0x0
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_000035B0:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80044FBC_000035CC
    mr r4, r31
    bl fn_8010D770
    mr r24, r3
    b lbl_fn_80044FBC_000035D0
lbl_fn_80044FBC_000035CC:
    li r24, 0x0
lbl_fn_80044FBC_000035D0:
    lwz r0, 0x8(r25)
    lwz r23, 0x55c(r29)
    cmplwi r0, 0x1a
    lwz r22, 0x560(r29)
    bgt lbl_fn_80044FBC_00003AA8
    lis r3, jumptable_807773C0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807773C0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r29
    bl fn_8014FCC4
    cmpwi r3, 0x0
    beq lbl_fn_80044FBC_0000361C
    cmpwi r26, 0x0
    beq lbl_fn_80044FBC_00003638
    cmpwi r24, 0x0
    bne lbl_fn_80044FBC_00003638
lbl_fn_80044FBC_0000361C:
    mr r3, r29
    bl fn_8014FCE8
    cmpwi r3, 0x0
    beq lbl_fn_80044FBC_00003640
    subi r0, r26, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80044FBC_00003640
lbl_fn_80044FBC_00003638:
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_00003640:
    cmpwi r23, 0x6
    bne lbl_fn_80044FBC_00003664
    cmpwi r22, 0xb
    beq lbl_fn_80044FBC_0000365C
    subi r0, r22, 0x4b
    cmplwi r0, 0x6
    bgt lbl_fn_80044FBC_00003664
lbl_fn_80044FBC_0000365C:
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_00003664:
    cmpwi r31, 0x0
    beq lbl_fn_80044FBC_00003AA8
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4c0
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    mr r3, r29
    bl fn_8014FCE8
    cmpwi r3, 0x0
    bne lbl_fn_80044FBC_00003AA8
    cmpwi r26, 0x2
    bne lbl_fn_80044FBC_00003AA8
    cmpwi r23, 0x6
    bne lbl_fn_80044FBC_000036B4
    subi r0, r22, 0x4b
    cmplwi r0, 0x6
    ble lbl_fn_80044FBC_00003AA8
    cmpwi r22, 0xb
    beq lbl_fn_80044FBC_00003AA8
lbl_fn_80044FBC_000036B4:
    cmpwi r31, 0x0
    beq lbl_fn_80044FBC_000036C8
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4c0
    beq lbl_fn_80044FBC_00003AA8
lbl_fn_80044FBC_000036C8:
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    ble lbl_fn_80044FBC_00003AA8
    lwz r3, 0x5c(r30)
    lbz r0, 0x120(r3)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    li r11, 0x0
    li r10, 0x3
    li r0, 0x17
    stw r11, 0x44(r1)
    mr r4, r26
    mr r5, r27
    stw r11, 0x48(r1)
    mr r6, r28
    mr r7, r29
    mr r8, r30
    stw r11, 0x50(r1)
    mr r9, r31
    addi r3, r1, 0x44
    stw r11, 0x54(r1)
    stw r11, 0x30(r1)
    stw r11, 0x34(r1)
    stw r11, 0x3c(r1)
    stw r11, 0x40(r1)
    stw r10, 0x4c(r1)
    stw r0, 0x38(r1)
    bl fn_80044FBC
    cmpwi r3, 0x0
    bne lbl_fn_80044FBC_00003AA8
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r8, r30
    mr r9, r31
    addi r3, r1, 0x30
    bl fn_80044FBC
    cmpwi r3, 0x0
    bne lbl_fn_80044FBC_00003AA8
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    ble lbl_fn_80044FBC_000037A4
    lwz r3, 0x5c(r30)
    lbz r0, 0x122(r3)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_80044FBC_000037A4
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_000037A4:
    cmpwi r4, 0x2
    bne lbl_fn_80044FBC_000037BC
    lwz r3, 0x5c(r30)
    lbz r0, 0x122(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80044FBC_000037D4
lbl_fn_80044FBC_000037BC:
    cmpwi r4, 0x3
    bne lbl_fn_80044FBC_00003AA8
    lwz r3, 0x5c(r30)
    lbz r0, 0x122(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80044FBC_00003AA8
lbl_fn_80044FBC_000037D4:
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    li r11, 0x0
    li r10, 0x3
    li r0, 0x17
    stw r11, 0x1c(r1)
    mr r4, r26
    mr r5, r27
    stw r11, 0x20(r1)
    mr r6, r28
    mr r7, r29
    mr r8, r30
    stw r11, 0x28(r1)
    mr r9, r31
    addi r3, r1, 0x1c
    stw r11, 0x2c(r1)
    stw r11, 0x8(r1)
    stw r11, 0xc(r1)
    stw r11, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x24(r1)
    stw r0, 0x10(r1)
    bl fn_80044FBC
    cmpwi r3, 0x0
    bne lbl_fn_80044FBC_00003AA8
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r8, r30
    mr r9, r31
    addi r3, r1, 0x8
    bl fn_80044FBC
    cmpwi r3, 0x0
    bne lbl_fn_80044FBC_00003AA8
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    ble lbl_fn_80044FBC_00003AA8
    lwz r4, 0x5c(r30)
    lbz r0, 0x121(r4)
    extsb r0, r0
    cmpw r3, r0
    bne lbl_fn_80044FBC_00003888
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_00003888:
    cmpwi r3, 0x6
    bne lbl_fn_80044FBC_00003AA8
    cmpwi r0, 0x8
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    lwz r0, 0xc(r25)
    cmpwi r0, 0x1
    beq lbl_fn_80044FBC_000038B8
    cmpwi r0, 0x2
    beq lbl_fn_80044FBC_000038D8
    b lbl_fn_80044FBC_00003AA8
lbl_fn_80044FBC_000038B8:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80044FBC_00003AA8
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1d
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_000038D8:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    lwz r0, 0xfe4(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80044FBC_00003AA8
    lwz r22, 0xfdc(r30)
    cmplw r22, r29
    beq lbl_fn_80044FBC_00003AA8
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_fn_80044FBC_00003918
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_00003918:
    cmpwi r22, 0x0
    beq lbl_fn_80044FBC_00003AA8
    mr r3, r22
    bl fn_8014FCC4
    cmpwi r3, 0x0
    beq lbl_fn_80044FBC_00003AA8
    lwz r3, 0x648(r22)
    lwz r4, 0xc(r25)
    lwz r3, 0x274(r3)
    lwz r3, 0x80(r3)
    subi r0, r3, 0x12c
    cmpw r4, r0
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    cmpwi r23, 0x6
    bne lbl_fn_80044FBC_00003AA8
    subi r0, r22, 0x6
    cmplwi r0, 0x1
    bgt lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    cmpwi r23, 0x6
    bne lbl_fn_80044FBC_00003AA8
    cmpwi r22, 0xa
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    lwz r3, 0x5c(r30)
    lbz r0, 0x123(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    lwz r0, 0xc(r25)
    cmpwi r0, 0x1
    beq lbl_fn_80044FBC_000039B8
    cmpwi r0, 0x2
    beq lbl_fn_80044FBC_000039D0
    b lbl_fn_80044FBC_00003AA8
lbl_fn_80044FBC_000039B8:
    lwz r0, 0x7e0(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_000039D0:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    rlwinm r0, r28, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    clrrwi r3, r28, 31
    addis r0, r3, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    mr r3, r30
    bl fn_80179A34
    lwz r0, 0xc(r25)
    cmpw r0, r3
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    cmpwi r23, 0x6
    bne lbl_fn_80044FBC_00003AA8
    cmpwi r22, 0xb
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    cmpwi r31, 0x0
    beq lbl_fn_80044FBC_00003AA8
    lwz r3, 0x4(r31)
    subi r0, r3, 0x1fa
    cmplwi r0, 0x2
    ble lbl_fn_80044FBC_00003A74
    subi r0, r3, 0x204
    cmplwi r0, 0x2
    bgt lbl_fn_80044FBC_00003AA8
lbl_fn_80044FBC_00003A74:
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    cmpwi r23, 0x6
    bne lbl_fn_80044FBC_00003AA8
    cmpwi r22, 0xe
    bne lbl_fn_80044FBC_00003AA8
    lwz r0, 0x2dc(r29)
    cmpwi r0, 0x15d
    bne lbl_fn_80044FBC_00003AA8
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
    li r3, 0x1
    b lbl_fn_80044FBC_00003AAC
lbl_fn_80044FBC_00003AA8:
    li r3, 0x0
lbl_fn_80044FBC_00003AAC:
    lmw r22, 0x58(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80045510(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    bne lbl_fn_80045510_00003ADC
    li r3, 0x0
    b lbl_fn_80045510_00003C34
lbl_fn_80045510_00003ADC:
    lwz r0, 0x8(r3)
    cmplwi r0, 0x19
    bgt lbl_fn_80045510_00003C30
    lis r3, jumptable_8077742C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8077742C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x1
    b lbl_fn_80045510_00003C34
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80045510_00003C30
    li r3, 0x1
    b lbl_fn_80045510_00003C34
    lfs f1, 0x9fc(r4)
    lfs f0, lbl_8088085C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_80045510_00003B48
    lfs f1, 0xac8(r4)
    lfs f0, lbl_80880858
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80045510_00003C30
lbl_fn_80045510_00003B48:
    li r3, 0x1
    b lbl_fn_80045510_00003C34
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80045510_00003C30
    lwz r0, 0x560(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80045510_00003C30
    li r3, 0x1
    b lbl_fn_80045510_00003C34
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80045510_00003C30
    lwz r0, 0x560(r4)
    cmpwi r0, 0xa
    bne lbl_fn_80045510_00003C30
    li r3, 0x1
    b lbl_fn_80045510_00003C34
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80045510_00003C30
    li r3, 0x1
    b lbl_fn_80045510_00003C34
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80045510_00003C30
    lwz r0, 0x560(r4)
    cmpwi r0, 0xb
    bne lbl_fn_80045510_00003C30
    li r3, 0x1
    b lbl_fn_80045510_00003C34
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80045510_00003BDC
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_80045510_00003C30
lbl_fn_80045510_00003BDC:
    li r3, 0x1
    b lbl_fn_80045510_00003C34
    lwz r0, 0x12d0(r4)
    addi r3, r4, 0x12d4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80045510_00003C30
lbl_fn_80045510_00003BF8:
    lwz r0, 0x4(r3)
    lwz r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80045510_00003C0C
    mr r4, r0
lbl_fn_80045510_00003C0C:
    cmpwi r4, 0x0
    beq lbl_fn_80045510_00003C28
    lwz r0, 0x9c(r4)
    cmpwi r0, 0x32
    blt lbl_fn_80045510_00003C28
    li r3, 0x1
    b lbl_fn_80045510_00003C34
lbl_fn_80045510_00003C28:
    addi r3, r3, 0x14
    bdnz lbl_fn_80045510_00003BF8
lbl_fn_80045510_00003C30:
    li r3, 0x0
lbl_fn_80045510_00003C34:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80045694(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r9, 0x0
    blt lbl_fn_80045694_00003CCC
    lwz r8, 0x274(r3)
    li r9, 0x0
    li r10, 0x0
    addi r8, r8, 0xc4
    lwz r0, 0x8(r8)
    cmpw r0, r4
    bne lbl_fn_80045694_00003C8C
    cmpwi r5, 0x0
    blt lbl_fn_80045694_00003C80
    lwz r0, 0xc(r8)
    cmpw r0, r5
    bne lbl_fn_80045694_00003C8C
lbl_fn_80045694_00003C80:
    mr r9, r8
    li r10, 0x1
    b lbl_fn_80045694_00003CBC
lbl_fn_80045694_00003C8C:
    lwz r8, 0x274(r3)
    addi r8, r8, 0xd8
    lwz r0, 0x8(r8)
    cmpw r0, r4
    bne lbl_fn_80045694_00003CBC
    cmpwi r5, 0x0
    blt lbl_fn_80045694_00003CB4
    lwz r0, 0xc(r8)
    cmpw r0, r5
    bne lbl_fn_80045694_00003CBC
lbl_fn_80045694_00003CB4:
    mr r9, r8
    li r10, 0x1
lbl_fn_80045694_00003CBC:
    cmpwi r10, 0x0
    bne lbl_fn_80045694_00003CCC
    li r3, 0x0
    blr
lbl_fn_80045694_00003CCC:
    cmpwi r6, 0x0
    blt lbl_fn_80045694_00003D48
    lwz r4, 0x274(r3)
    li r9, 0x0
    lwzu r0, 0xc4(r4)
    li r5, 0x0
    cmpw r0, r6
    bne lbl_fn_80045694_00003D0C
    cmpwi r7, 0x0
    blt lbl_fn_80045694_00003D00
    lwz r0, 0x4(r4)
    cmpw r0, r7
    bne lbl_fn_80045694_00003D0C
lbl_fn_80045694_00003D00:
    mr r9, r4
    li r5, 0x1
    b lbl_fn_80045694_00003D38
lbl_fn_80045694_00003D0C:
    lwz r4, 0x274(r3)
    lwzu r0, 0xd8(r4)
    cmpw r0, r6
    bne lbl_fn_80045694_00003D38
    cmpwi r7, 0x0
    blt lbl_fn_80045694_00003D30
    lwz r0, 0x4(r4)
    cmpw r0, r7
    bne lbl_fn_80045694_00003D38
lbl_fn_80045694_00003D30:
    mr r9, r4
    li r5, 0x1
lbl_fn_80045694_00003D38:
    cmpwi r5, 0x0
    bne lbl_fn_80045694_00003D48
    li r3, 0x0
    blr
lbl_fn_80045694_00003D48:
    mr r3, r9
    blr
}

asm void fn_800457A0(void)
{
    nofralloc
    blr
}

asm void fn_800457A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x3
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bge lbl_fn_800457A4_00003D94
    bl fn_80206B14
    cmpwi r3, 0x0
    bne lbl_fn_800457A4_00003D94
    li r3, 0x0
    b lbl_fn_800457A4_00003E70
lbl_fn_800457A4_00003D94:
    cmpwi r27, 0x0
    li r3, 0x0
    beq lbl_fn_800457A4_00003DB4
    cmpwi r27, 0x1
    beq lbl_fn_800457A4_00003DF4
    cmpwi r27, 0x2
    beq lbl_fn_800457A4_00003E34
    b lbl_fn_800457A4_00003E70
lbl_fn_800457A4_00003DB4:
    lis r5, lbl_80730F08@ha
    li r3, 0x2a8
    addi r5, r5, lbl_80730F08@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800457A4_00003E70
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    bl fn_805A6A84
    b lbl_fn_800457A4_00003E70
lbl_fn_800457A4_00003DF4:
    lis r5, lbl_80730F08@ha
    li r3, 0x2ac
    addi r5, r5, lbl_80730F08@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800457A4_00003E70
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    bl fn_8043F028
    b lbl_fn_800457A4_00003E70
lbl_fn_800457A4_00003E34:
    lis r5, lbl_80730F08@ha
    li r3, 0x2ac
    addi r5, r5, lbl_80730F08@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800457A4_00003E70
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    bl fn_8043F028
lbl_fn_800457A4_00003E70:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800458D4(void)
{
    nofralloc
    lis r4, lbl_807774F0@ha
    li r0, 0x0
    addi r4, r4, lbl_807774F0@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_800458F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stmw r18, 0x8(r1)
    mr r18, r3
    mr r19, r4
    beq lbl_fn_800458F4_00003FBC
    addic. r0, r3, 0x8
    beq lbl_fn_800458F4_00003EE8
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800458F4_00003EDC
    bl fn_80084C24
lbl_fn_800458F4_00003EDC:
    li r0, 0x0
    stw r0, 0xc(r18)
    stw r0, 0x8(r18)
lbl_fn_800458F4_00003EE8:
    addic. r0, r18, 0x4
    beq lbl_fn_800458F4_00003FAC
    lwz r24, 0x4(r18)
    cmpwi r24, 0x0
    beq lbl_fn_800458F4_00003FAC
    mr r23, r24
    li r25, 0x0
lbl_fn_800458F4_00003F04:
    lwz r26, 0x34(r23)
    cmpwi r26, 0x0
    beq lbl_fn_800458F4_00003F94
    mr r22, r26
    li r27, 0x0
lbl_fn_800458F4_00003F18:
    lwz r28, 0x34(r22)
    cmpwi r28, 0x0
    beq lbl_fn_800458F4_00003F7C
    mr r21, r28
    li r29, 0x0
lbl_fn_800458F4_00003F2C:
    lwz r30, 0x34(r21)
    cmpwi r30, 0x0
    beq lbl_fn_800458F4_00003F64
    mr r20, r30
    li r31, 0x0
lbl_fn_800458F4_00003F40:
    lwz r3, 0x34(r20)
    li r4, 0x1
    bl fn_80045B98
    addi r31, r31, 0x1
    addi r20, r20, 0x4
    cmpwi r31, 0x4
    blt lbl_fn_800458F4_00003F40
    mr r3, r30
    bl dtor_80084684
lbl_fn_800458F4_00003F64:
    addi r29, r29, 0x1
    addi r21, r21, 0x4
    cmpwi r29, 0x4
    blt lbl_fn_800458F4_00003F2C
    mr r3, r28
    bl dtor_80084684
lbl_fn_800458F4_00003F7C:
    addi r27, r27, 0x1
    addi r22, r22, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_800458F4_00003F18
    mr r3, r26
    bl dtor_80084684
lbl_fn_800458F4_00003F94:
    addi r25, r25, 0x1
    addi r23, r23, 0x4
    cmpwi r25, 0x4
    blt lbl_fn_800458F4_00003F04
    mr r3, r24
    bl dtor_80084684
lbl_fn_800458F4_00003FAC:
    cmpwi r19, 0x0
    ble lbl_fn_800458F4_00003FBC
    mr r3, r18
    bl dtor_80084684
lbl_fn_800458F4_00003FBC:
    mr r3, r18
    lmw r18, 0x8(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80045A24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x4(r3)
    bl fn_80045D7C
    mr r4, r3
    stw r3, 0xc(r1)
    mr r3, r31
    stw r31, 0x8(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80045A68(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    lwz r4, lbl_8087EFA8
    lwz r25, 0xc(r3)
    lwz r0, 0x1d4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80045A68_00004124
    lwz r5, 0x8(r24)
    mr r3, r25
    li r4, 0x0
    bl memset
    lwz r3, lbl_8087EFB4
    lwz r27, 0x4(r24)
    addi r24, r3, 0x204
    addi r4, r27, 0x1c
    mr r3, r24
    bl fn_800502A8
    lwz r0, 0x0(r27)
    cmpwi r3, 0x0
    mr r28, r3
    slwi r0, r0, 2
    stwx r3, r25, r0
    beq lbl_fn_80045A68_00004090
    lwz r3, lbl_8087EFB4
    addi r4, r27, 0x1c
    bl fn_800C0A50
    mr r28, r3
lbl_fn_80045A68_00004090:
    li r29, 0x0
lbl_fn_80045A68_00004094:
    lwz r26, 0x34(r27)
    cmpwi r26, 0x0
    beq lbl_fn_80045A68_00004110
    cmpwi r28, 0x0
    beq lbl_fn_80045A68_00004110
    mr r3, r24
    addi r4, r26, 0x1c
    bl fn_800502A8
    lwz r0, 0x0(r26)
    cmpwi r3, 0x0
    mr r31, r3
    slwi r0, r0, 2
    stwx r3, r25, r0
    beq lbl_fn_80045A68_000040DC
    lwz r3, lbl_8087EFB4
    addi r4, r26, 0x1c
    bl fn_800C0A50
    mr r31, r3
lbl_fn_80045A68_000040DC:
    li r30, 0x0
lbl_fn_80045A68_000040E0:
    lwz r3, 0x34(r26)
    cmpwi r3, 0x0
    beq lbl_fn_80045A68_00004100
    cmpwi r31, 0x0
    beq lbl_fn_80045A68_00004100
    mr r4, r24
    mr r5, r25
    bl fn_80045C88
lbl_fn_80045A68_00004100:
    addi r30, r30, 0x1
    addi r26, r26, 0x4
    cmpwi r30, 0x4
    blt lbl_fn_80045A68_000040E0
lbl_fn_80045A68_00004110:
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmpwi r29, 0x4
    blt lbl_fn_80045A68_00004094
    b lbl_fn_80045A68_00004134
lbl_fn_80045A68_00004124:
    lwz r5, 0x8(r24)
    mr r3, r25
    li r4, 0x1
    bl memset
lbl_fn_80045A68_00004134:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80045B98(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stmw r19, 0xc(r1)
    mr r19, r3
    mr r20, r4
    beq lbl_fn_80045B98_00004220
    mr r25, r19
    li r21, 0x0
lbl_fn_80045B98_00004170:
    lwz r31, 0x34(r25)
    cmpwi r31, 0x0
    beq lbl_fn_80045B98_00004200
    mr r24, r31
    li r30, 0x0
lbl_fn_80045B98_00004184:
    lwz r29, 0x34(r24)
    cmpwi r29, 0x0
    beq lbl_fn_80045B98_000041E8
    mr r23, r29
    li r28, 0x0
lbl_fn_80045B98_00004198:
    lwz r27, 0x34(r23)
    cmpwi r27, 0x0
    beq lbl_fn_80045B98_000041D0
    mr r22, r27
    li r26, 0x0
lbl_fn_80045B98_000041AC:
    lwz r3, 0x34(r22)
    li r4, 0x1
    bl fn_80045B98
    addi r26, r26, 0x1
    addi r22, r22, 0x4
    cmpwi r26, 0x4
    blt lbl_fn_80045B98_000041AC
    mr r3, r27
    bl dtor_80084684
lbl_fn_80045B98_000041D0:
    addi r28, r28, 0x1
    addi r23, r23, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_80045B98_00004198
    mr r3, r29
    bl dtor_80084684
lbl_fn_80045B98_000041E8:
    addi r30, r30, 0x1
    addi r24, r24, 0x4
    cmpwi r30, 0x4
    blt lbl_fn_80045B98_00004184
    mr r3, r31
    bl dtor_80084684
lbl_fn_80045B98_00004200:
    addi r21, r21, 0x1
    addi r25, r25, 0x4
    cmpwi r21, 0x4
    blt lbl_fn_80045B98_00004170
    cmpwi r20, 0x0
    ble lbl_fn_80045B98_00004220
    mr r3, r19
    bl dtor_80084684
lbl_fn_80045B98_00004220:
    mr r3, r19
    lmw r19, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80045C88(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r3, r25
    addi r4, r24, 0x1c
    bl fn_800502A8
    lwz r0, 0x0(r24)
    cmpwi r3, 0x0
    mr r28, r3
    slwi r0, r0, 2
    stwx r3, r26, r0
    beq lbl_fn_80045C88_00004288
    lwz r3, lbl_8087EFB4
    addi r4, r24, 0x1c
    bl fn_800C0A50
    mr r28, r3
lbl_fn_80045C88_00004288:
    li r27, 0x0
lbl_fn_80045C88_0000428C:
    lwz r29, 0x34(r24)
    cmpwi r29, 0x0
    beq lbl_fn_80045C88_00004308
    cmpwi r28, 0x0
    beq lbl_fn_80045C88_00004308
    mr r3, r25
    addi r4, r29, 0x1c
    bl fn_800502A8
    lwz r0, 0x0(r29)
    cmpwi r3, 0x0
    mr r30, r3
    slwi r0, r0, 2
    stwx r3, r26, r0
    beq lbl_fn_80045C88_000042D4
    lwz r3, lbl_8087EFB4
    addi r4, r29, 0x1c
    bl fn_800C0A50
    mr r30, r3
lbl_fn_80045C88_000042D4:
    li r31, 0x0
lbl_fn_80045C88_000042D8:
    lwz r3, 0x34(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80045C88_000042F8
    cmpwi r30, 0x0
    beq lbl_fn_80045C88_000042F8
    mr r4, r25
    mr r5, r26
    bl fn_80045C88
lbl_fn_80045C88_000042F8:
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x4
    blt lbl_fn_80045C88_000042D8
lbl_fn_80045C88_00004308:
    addi r27, r27, 0x1
    addi r24, r24, 0x4
    cmpwi r27, 0x4
    blt lbl_fn_80045C88_0000428C
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80045D7C(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x140
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stfd f28, 0x160(r1)
    psq_st f28, 0x168(r1), 0, 0
    stfd f27, 0x150(r1)
    psq_st f27, 0x158(r1), 0, 0
    stfd f26, 0x140(r1)
    psq_st f26, 0x148(r1), 0, 0
    bl _savegpr_24
    mr r29, r3
    mr r30, r4
    mr r31, r5
    addi r3, r1, 0xa8
    mr r5, r30
    addi r4, r29, 0x1c
    bl fn_80070C98
    addi r3, r1, 0xa8
    lfs f2, 0xb0(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r31, 0xa
    psq_st f1, 0x1c(r29), 0, 0
    stfs f2, 0x24(r29)
    psq_l f1, 0xc(r3), 0, 0
    lfs f2, 0xbc(r1)
    stfs f2, 0x30(r29)
    psq_st f1, 0x28(r29), 0, 0
    bne lbl_fn_80045D7C_000043C0
    mr r3, r29
    b lbl_fn_80045D7C_00004764
lbl_fn_80045D7C_000043C0:
    lfs f0, 0x14(r29)
    addi r27, r1, 0x98
    lfs f6, 0x8(r29)
    li r26, 0x0
    lfs f4, 0x18(r29)
    li r25, -0x1
    fsubs f8, f0, f6
    lfs f3, 0xc(r29)
    lfs f0, 0x10(r29)
    li r24, 0x0
    fsubs f7, f4, f3
    lfs f4, lbl_80880868
    fmuls f11, f8, f4
    lfs f5, 0x4(r29)
    fmuls f10, f7, f4
    stfs f8, 0x60(r1)
    fsubs f9, f0, f5
    lfs f0, 0x14(r30)
    fadds f12, f10, f3
    lfs f3, 0x10(r30)
    fadds f6, f11, f6
    stfs f9, 0x5c(r1)
    fmuls f4, f9, f4
    li r28, 0x0
    fsubs f31, f3, f6
    stfs f7, 0x64(r1)
    fsubs f13, f0, f12
    lfs f0, 0xc(r30)
    fadds f3, f4, f5
    stfs f4, 0x68(r1)
    stfs f11, 0x6c(r1)
    fsubs f0, f0, f3
    stfs f10, 0x70(r1)
    stfs f3, 0x98(r1)
    stfs f6, 0x9c(r1)
    stfs f12, 0xa0(r1)
    stfs f0, 0x8c(r1)
    stfs f31, 0x90(r1)
    stfs f13, 0x94(r1)
lbl_fn_80045D7C_0000445C:
    cmpwi r24, 0x0
    addi r3, r1, 0xc0
    add r3, r3, r28
    beq lbl_fn_80045D7C_00004488
    cmpwi r24, 0x1
    beq lbl_fn_80045D7C_000044B4
    cmpwi r24, 0x2
    beq lbl_fn_80045D7C_000044E8
    cmpwi r24, 0x3
    beq lbl_fn_80045D7C_00004514
    b lbl_fn_80045D7C_00004544
lbl_fn_80045D7C_00004488:
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0xa0(r1)
    stfs f2, 0x8(r3)
    lfs f0, 0x8(r29)
    stfs f0, 0x4(r3)
    lfs f2, 0x18(r29)
    psq_l f1, 0x10(r29), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    b lbl_fn_80045D7C_00004544
lbl_fn_80045D7C_000044B4:
    lfs f0, 0x4(r29)
    stfs f0, 0x0(r3)
    lfs f0, 0xa0(r1)
    stfs f0, 0x8(r3)
    lfs f0, 0x98(r1)
    lfs f3, 0x8(r29)
    stfs f3, 0x4(r3)
    stfs f0, 0xc(r3)
    lfs f0, 0x18(r29)
    stfs f0, 0x14(r3)
    lfs f0, 0x14(r29)
    stfs f0, 0x10(r3)
    b lbl_fn_80045D7C_00004544
lbl_fn_80045D7C_000044E8:
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x8(r3)
    lfs f2, 0xa0(r1)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    lfs f0, 0x14(r29)
    stfs f0, 0x10(r3)
    b lbl_fn_80045D7C_00004544
lbl_fn_80045D7C_00004514:
    lfs f0, 0x98(r1)
    stfs f0, 0x0(r3)
    lfs f0, 0xa0(r1)
    lfs f3, 0xc(r29)
    stfs f3, 0x8(r3)
    lfs f3, 0x8(r29)
    stfs f3, 0x4(r3)
    lfs f3, 0x10(r29)
    stfs f3, 0xc(r3)
    stfs f0, 0x14(r3)
    lfs f0, 0x14(r29)
    stfs f0, 0x10(r3)
lbl_fn_80045D7C_00004544:
    mr r4, r30
    bl fn_80070A70
    cmpwi r3, 0x0
    beq lbl_fn_80045D7C_0000455C
    mr r25, r24
    addi r26, r26, 0x1
lbl_fn_80045D7C_0000455C:
    addi r24, r24, 0x1
    addi r28, r28, 0x18
    cmpwi r24, 0x4
    blt lbl_fn_80045D7C_0000445C
    cmpwi r26, 0x1
    ble lbl_fn_80045D7C_0000457C
    mr r3, r29
    b lbl_fn_80045D7C_00004764
lbl_fn_80045D7C_0000457C:
    slwi r0, r25, 2
    add r3, r29, r0
    lwz r0, 0x34(r3)
    addi r4, r3, 0x34
    cmpwi r0, 0x0
    bne lbl_fn_80045D7C_00004754
    mulli r0, r25, 0x18
    addi r24, r1, 0xc0
    lis r5, lbl_80730F30@ha
    lfs f3, 0x14(r30)
    lfs f5, 0x8(r30)
    li r3, 0x44
    add r24, r24, r0
    fsubs f26, f3, f5
    lfs f0, 0x10(r30)
    addi r5, r5, lbl_80730F30@l
    lfs f4, 0x4(r30)
    mr r6, r5
    lfs f3, 0x14(r24)
    fsubs f27, f0, f4
    lfs f9, 0x8(r24)
    lfs f8, 0x4(r24)
    li r4, 0x6
    fsubs f31, f3, f9
    lfs f3, 0x10(r24)
    lfs f6, lbl_80880868
    fsubs f13, f3, f8
    lfs f0, 0xc(r24)
    li r7, 0x0
    fmuls f29, f26, f6
    lfs f7, 0x0(r24)
    fmuls f30, f27, f6
    fsubs f12, f0, f7
    lfs f3, 0xc(r30)
    fmuls f11, f31, f6
    lfs f0, 0x0(r30)
    fmuls f10, f13, f6
    fadds f5, f29, f5
    fsubs f28, f3, f0
    stfs f12, 0x50(r1)
    fmuls f3, f12, f6
    fadds f9, f11, f9
    stfs f13, 0x54(r1)
    fmuls f12, f28, f6
    fadds f6, f10, f8
    stfs f3, 0x44(r1)
    fadds f3, f3, f7
    fadds f4, f30, f4
    stfs f31, 0x58(r1)
    fadds f0, f12, f0
    stfs f10, 0x48(r1)
    stfs f11, 0x4c(r1)
    stfs f3, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f28, 0x38(r1)
    stfs f27, 0x3c(r1)
    stfs f26, 0x40(r1)
    stfs f12, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f29, 0x34(r1)
    stfs f0, 0x74(r1)
    stfs f4, 0x78(r1)
    stfs f5, 0x7c(r1)
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80045D7C_00004748
    li r0, -0x1
    stw r0, 0x0(r3)
    lfs f0, lbl_80880868
    addi r4, r1, 0x8
    lfs f2, 0x8(r24)
    li r0, 0x0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lfs f2, 0x14(r24)
    psq_l f1, 0xc(r24), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    frsp f7, f2
    stfs f2, 0x18(r3)
    lfs f3, 0x14(r3)
    lfs f5, 0x8(r3)
    lfs f6, 0xc(r3)
    fsubs f8, f3, f5
    lfs f4, 0x10(r3)
    lfs f3, 0x4(r3)
    fsubs f7, f7, f6
    stfs f8, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f8, f8, f0
    stfs f7, 0x1c(r1)
    fmuls f7, f7, f0
    fmuls f0, f4, f0
    stfs f4, 0x14(r1)
    fadds f5, f8, f5
    stfs f0, 0x20(r1)
    fadds f4, f7, f6
    fadds f0, f0, f3
    stfs f5, 0xc(r1)
    fmr f2, f4
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    stfs f2, 0x24(r3)
    frsp f2, f2
    psq_st f1, 0x28(r3), 0, 0
    stfs f2, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stfs f8, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f4, 0x10(r1)
    stw r0, 0x40(r3)
lbl_fn_80045D7C_00004748:
    slwi r0, r25, 2
    add r4, r29, r0
    stwu r3, 0x34(r4)
lbl_fn_80045D7C_00004754:
    lwz r3, 0x0(r4)
    mr r4, r30
    addi r5, r31, 0x1
    bl fn_80045D7C
lbl_fn_80045D7C_00004764:
    addi r11, r1, 0x140
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    psq_l f27, 0x158(r1), 0, 0
    lfd f27, 0x150(r1)
    psq_l f26, 0x148(r1), 0, 0
    lfd f26, 0x140(r1)
    bl _restgpr_24
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}
