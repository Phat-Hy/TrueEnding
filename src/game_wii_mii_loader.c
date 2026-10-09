#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80069BF4(void);
extern void fn_8006B174(void);
extern void fn_8006B2D8(void);
extern void fn_8006D008(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B130(void);
extern void fn_80091C10(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_8009373C(void);
extern void fn_80093D98(void);
extern void fn_80093EEC(void);
extern void fn_80095D44(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_8020C4C8(void);
extern void fn_8020C5D4(void);
extern void fn_8020CC64(void);
extern void fn_8020DE0C(void);
extern void fn_8020EF4C(void);
extern void fn_80219558(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F18(void);
extern void fn_80481668(void);
extern void fn_804EB654(void);
extern void fn_80563800(void);
extern void fn_80563840(void);
extern void fn_80563880(void);
extern void fn_805660E0(void);
extern void fn_805F89F0(void);
extern void fn_805F9160(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695AD0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075FB78[];
extern u8 lbl_80766768[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80795660[];
extern u8 lbl_8079566C[];
extern u8 lbl_80795678[];
extern u8 lbl_80795684[];
extern u8 lbl_80795690[];
extern u8 lbl_8079569C[];
extern u8 lbl_807956A8[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F610;
extern u32 lbl_80887F38;

/* Function declarations */
void fn_80564344(void);
void fn_8056503C(void);
void fn_8056504C(void);
void fn_8056505C(void);
void fn_80565068(void);
void fn_8056542C(void);
void fn_8056556C(void);
void fn_805657D0(void);
void fn_805659B8(void);
void fn_80565B9C(void);

asm void fn_80564344(void)
{
    nofralloc
    stwu r1, -0x740(r1)
    mflr r0
    stw r0, 0x744(r1)
    stmw r20, 0x710(r1)
    mr r22, r3
    addi r3, r3, 0x418
    bl fn_8047059C
    mr r24, r3
    addi r3, r22, 0x418
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r27, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0xd4(r1)
    mr r23, r3
    addi r3, r1, 0xe4
    stw r27, 0xd8(r1)
    li r4, 0x0
    li r5, 0x400
    stw r27, 0xdc(r1)
    stw r27, 0xe0(r1)
    stw r27, 0x704(r1)
    bl memset
    addi r3, r1, 0x6e4
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xd4(r1)
    mr r4, r23
    mr r5, r24
    addi r3, r1, 0xd4
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0xd4
    addi r4, r4, lbl_807774B8@l
    stw r4, 0xd4(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_8075FB78@ha
    stw r27, 0xc8(r1)
    addi r23, r1, 0xc9
    addi r24, r1, 0xbd
    stw r27, 0xcc(r1)
    addi r26, r1, 0x99
    addi r25, r1, 0x81
    addi r31, r30, lbl_8075FB78@l
    stw r27, 0xd0(r1)
    li r28, 0x61
    li r29, 0x62
    stw r27, 0xbc(r1)
    stw r27, 0xc0(r1)
    stw r27, 0xc4(r1)
lbl_fn_80564344_000000D8:
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r20, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80564344_00000940
    addi r4, r31, 0x3b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80564344_000007CC
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    lwz r0, 0xc8(r1)
    mr r27, r3
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000124
    lbz r0, 0xc8(r1)
    clrlwi r21, r0, 25
    b lbl_fn_80564344_00000128
lbl_fn_80564344_00000124:
    lwz r21, 0xcc(r1)
lbl_fn_80564344_00000128:
    lbz r0, 0x64(r1)
    mr r3, r27
    stb r0, 0x60(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r27
    addi r3, r1, 0xc8
    add r7, r27, r0
    addi r8, r1, 0x60
    li r4, 0x0
    bl fn_80013F78
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    lwz r0, 0xbc(r1)
    mr r27, r3
    srwi. r0, r0, 31
    bne lbl_fn_80564344_0000017C
    lbz r0, 0xbc(r1)
    clrlwi r21, r0, 25
    b lbl_fn_80564344_00000180
lbl_fn_80564344_0000017C:
    lwz r21, 0xc0(r1)
lbl_fn_80564344_00000180:
    lbz r0, 0x5c(r1)
    mr r3, r27
    stb r0, 0x58(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r27
    addi r3, r1, 0xbc
    add r7, r27, r0
    addi r8, r1, 0x58
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x14(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80564344_0000072C
    lwz r3, 0x40c(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    mr r27, r3
    addi r3, r1, 0xa4
    addi r4, r1, 0xc8
    bl fn_8006B174
    addi r3, r1, 0x98
    addi r4, r1, 0xa4
    bl fn_8006B2D8
    lwz r0, 0xc8(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r3, r0, 5
    bne lbl_fn_80564344_00000224
    lwz r4, 0x98(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80564344_00000224
    lwz r3, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r4, 0xc8(r1)
    stw r3, 0xcc(r1)
    stw r0, 0xd0(r1)
    b lbl_fn_80564344_0000027C
lbl_fn_80564344_00000224:
    cmpwi r3, 0x0
    beq lbl_fn_80564344_00000234
    lwz r5, 0xcc(r1)
    b lbl_fn_80564344_0000023C
lbl_fn_80564344_00000234:
    lbz r0, 0xc8(r1)
    clrlwi r5, r0, 25
lbl_fn_80564344_0000023C:
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000258
    lbz r0, 0x98(r1)
    mr r6, r26
    clrlwi r4, r0, 25
    b lbl_fn_80564344_00000260
lbl_fn_80564344_00000258:
    lwz r6, 0xa0(r1)
    lwz r4, 0x9c(r1)
lbl_fn_80564344_00000260:
    lbz r0, 0x54(r1)
    add r7, r6, r4
    stb r0, 0x50(r1)
    addi r3, r1, 0xc8
    addi r8, r1, 0x50
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80564344_0000027C:
    lwz r0, 0x98(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_00000290
    lwz r3, 0xa0(r1)
    bl dtor_80084684
lbl_fn_80564344_00000290:
    lwz r0, 0xa4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_000002A4
    lwz r3, 0xac(r1)
    bl dtor_80084684
lbl_fn_80564344_000002A4:
    lwz r0, 0x0(r22)
    cmplwi r0, 0x3
    bgt lbl_fn_80564344_00000328
    cmpwi r27, 0x0
    beq lbl_fn_80564344_000002EC
    cmpwi r27, 0x4
    beq lbl_fn_80564344_000002EC
    cmpwi r27, 0x2
    beq lbl_fn_80564344_000002EC
    cmpwi r27, 0x6
    beq lbl_fn_80564344_000002EC
    cmpwi r27, 0x3
    beq lbl_fn_80564344_0000030C
    cmpwi r27, 0x5
    beq lbl_fn_80564344_0000030C
    cmpwi r27, 0x1
    beq lbl_fn_80564344_0000030C
    b lbl_fn_80564344_00000328
lbl_fn_80564344_000002EC:
    lwz r0, 0xc8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000300
    mr r3, r23
    b lbl_fn_80564344_00000304
lbl_fn_80564344_00000300:
    lwz r3, 0xd0(r1)
lbl_fn_80564344_00000304:
    stb r28, 0x8(r3)
    b lbl_fn_80564344_00000328
lbl_fn_80564344_0000030C:
    lwz r0, 0xc8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000320
    mr r3, r23
    b lbl_fn_80564344_00000324
lbl_fn_80564344_00000320:
    lwz r3, 0xd0(r1)
lbl_fn_80564344_00000324:
    stb r29, 0x8(r3)
lbl_fn_80564344_00000328:
    lwz r0, 0xc8(r1)
    addi r21, r31, 0x41
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000344
    lbz r0, 0xc8(r1)
    clrlwi r20, r0, 25
    b lbl_fn_80564344_00000348
lbl_fn_80564344_00000344:
    lwz r20, 0xcc(r1)
lbl_fn_80564344_00000348:
    lbz r0, 0x4c(r1)
    mr r3, r21
    stb r0, 0x48(r1)
    bl strlen
    mr r0, r3
    mr r4, r20
    mr r6, r21
    addi r3, r1, 0xc8
    add r7, r21, r0
    addi r8, r1, 0x48
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_0000038C
    mr r3, r24
    b lbl_fn_80564344_00000390
lbl_fn_80564344_0000038C:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_00000390:
    addi r4, r30, lbl_8075FB78@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80564344_0000072C
    addi r3, r1, 0x8c
    addi r4, r1, 0xbc
    bl fn_8006B174
    addi r3, r1, 0x80
    addi r4, r1, 0x8c
    bl fn_8006B2D8
    lwz r0, 0xbc(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r3, r0, 5
    bne lbl_fn_80564344_000003F8
    lwz r4, 0x80(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80564344_000003F8
    lwz r3, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r4, 0xbc(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    b lbl_fn_80564344_00000450
lbl_fn_80564344_000003F8:
    cmpwi r3, 0x0
    beq lbl_fn_80564344_00000408
    lwz r5, 0xc0(r1)
    b lbl_fn_80564344_00000410
lbl_fn_80564344_00000408:
    lbz r0, 0xbc(r1)
    clrlwi r5, r0, 25
lbl_fn_80564344_00000410:
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_0000042C
    lbz r0, 0x80(r1)
    mr r6, r25
    clrlwi r4, r0, 25
    b lbl_fn_80564344_00000434
lbl_fn_80564344_0000042C:
    lwz r6, 0x88(r1)
    lwz r4, 0x84(r1)
lbl_fn_80564344_00000434:
    lbz r0, 0x44(r1)
    add r7, r6, r4
    stb r0, 0x40(r1)
    addi r3, r1, 0xbc
    addi r8, r1, 0x40
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80564344_00000450:
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_00000464
    lwz r3, 0x88(r1)
    bl dtor_80084684
lbl_fn_80564344_00000464:
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_00000478
    lwz r3, 0x94(r1)
    bl dtor_80084684
lbl_fn_80564344_00000478:
    lwz r0, 0x0(r22)
    cmplwi r0, 0x1
    ble lbl_fn_80564344_00000498
    cmpwi r0, 0x2
    blt lbl_fn_80564344_000006DC
    cmpwi r0, 0x3
    ble lbl_fn_80564344_00000664
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_00000498:
    cmpwi r27, 0x0
    beq lbl_fn_80564344_000004D4
    cmpwi r27, 0x4
    beq lbl_fn_80564344_000004D4
    cmpwi r27, 0x2
    beq lbl_fn_80564344_000004F4
    cmpwi r27, 0x3
    beq lbl_fn_80564344_00000564
    cmpwi r27, 0x6
    beq lbl_fn_80564344_000005D4
    cmpwi r27, 0x5
    beq lbl_fn_80564344_00000644
    cmpwi r27, 0x1
    beq lbl_fn_80564344_00000644
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_000004D4:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_000004E8
    mr r3, r24
    b lbl_fn_80564344_000004EC
lbl_fn_80564344_000004E8:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_000004EC:
    stb r28, 0x8(r3)
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_000004F4:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000508
    mr r3, r24
    b lbl_fn_80564344_0000050C
lbl_fn_80564344_00000508:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_0000050C:
    stb r28, 0x8(r3)
    addi r21, r31, 0x48
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_0000052C
    lbz r0, 0xbc(r1)
    clrlwi r20, r0, 25
    b lbl_fn_80564344_00000530
lbl_fn_80564344_0000052C:
    lwz r20, 0xc0(r1)
lbl_fn_80564344_00000530:
    lbz r0, 0x3c(r1)
    mr r3, r21
    stb r0, 0x38(r1)
    bl strlen
    mr r0, r3
    mr r4, r20
    mr r6, r21
    addi r3, r1, 0xbc
    add r7, r21, r0
    addi r8, r1, 0x38
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_00000564:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000578
    mr r3, r24
    b lbl_fn_80564344_0000057C
lbl_fn_80564344_00000578:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_0000057C:
    stb r29, 0x8(r3)
    addi r21, r31, 0x4c
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_0000059C
    lbz r0, 0xbc(r1)
    clrlwi r20, r0, 25
    b lbl_fn_80564344_000005A0
lbl_fn_80564344_0000059C:
    lwz r20, 0xc0(r1)
lbl_fn_80564344_000005A0:
    lbz r0, 0x34(r1)
    mr r3, r21
    stb r0, 0x30(r1)
    bl strlen
    mr r0, r3
    mr r4, r20
    mr r6, r21
    addi r3, r1, 0xbc
    add r7, r21, r0
    addi r8, r1, 0x30
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_000005D4:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_000005E8
    mr r3, r24
    b lbl_fn_80564344_000005EC
lbl_fn_80564344_000005E8:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_000005EC:
    stb r28, 0x8(r3)
    addi r21, r31, 0x50
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_0000060C
    lbz r0, 0xbc(r1)
    clrlwi r20, r0, 25
    b lbl_fn_80564344_00000610
lbl_fn_80564344_0000060C:
    lwz r20, 0xc0(r1)
lbl_fn_80564344_00000610:
    lbz r0, 0x2c(r1)
    mr r3, r21
    stb r0, 0x28(r1)
    bl strlen
    mr r0, r3
    mr r4, r20
    mr r6, r21
    addi r3, r1, 0xbc
    add r7, r21, r0
    addi r8, r1, 0x28
    li r5, 0x0
    bl fn_80013F78
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_00000644:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000658
    mr r3, r24
    b lbl_fn_80564344_0000065C
lbl_fn_80564344_00000658:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_0000065C:
    stb r29, 0x8(r3)
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_00000664:
    cmpwi r27, 0x0
    beq lbl_fn_80564344_000006A0
    cmpwi r27, 0x4
    beq lbl_fn_80564344_000006A0
    cmpwi r27, 0x2
    beq lbl_fn_80564344_000006A0
    cmpwi r27, 0x6
    beq lbl_fn_80564344_000006A0
    cmpwi r27, 0x3
    beq lbl_fn_80564344_000006C0
    cmpwi r27, 0x5
    beq lbl_fn_80564344_000006C0
    cmpwi r27, 0x1
    beq lbl_fn_80564344_000006C0
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_000006A0:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_000006B4
    mr r3, r24
    b lbl_fn_80564344_000006B8
lbl_fn_80564344_000006B4:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_000006B8:
    stb r28, 0x8(r3)
    b lbl_fn_80564344_000006DC
lbl_fn_80564344_000006C0:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_000006D4
    mr r3, r24
    b lbl_fn_80564344_000006D8
lbl_fn_80564344_000006D4:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_000006D8:
    stb r29, 0x8(r3)
lbl_fn_80564344_000006DC:
    lwz r0, 0xbc(r1)
    addi r21, r31, 0x54
    srwi. r0, r0, 31
    bne lbl_fn_80564344_000006F8
    lbz r0, 0xbc(r1)
    clrlwi r20, r0, 25
    b lbl_fn_80564344_000006FC
lbl_fn_80564344_000006F8:
    lwz r20, 0xc0(r1)
lbl_fn_80564344_000006FC:
    lbz r0, 0x24(r1)
    mr r3, r21
    stb r0, 0x20(r1)
    bl strlen
    mr r0, r3
    mr r4, r20
    mr r6, r21
    addi r3, r1, 0xbc
    add r7, r21, r0
    addi r8, r1, 0x20
    li r5, 0x0
    bl fn_80013F78
lbl_fn_80564344_0000072C:
    lwz r0, 0xbc(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r27, r0, 5
    beq lbl_fn_80564344_00000758
    mr r3, r24
    b lbl_fn_80564344_0000075C
lbl_fn_80564344_00000758:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_0000075C:
    addi r4, r30, lbl_8075FB78@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80564344_00000794
    lwz r0, 0xc8(r1)
    addi r3, r22, 0x24
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000784
    mr r4, r23
    b lbl_fn_80564344_00000788
lbl_fn_80564344_00000784:
    lwz r4, 0xd0(r1)
lbl_fn_80564344_00000788:
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_80564344_00000940
lbl_fn_80564344_00000794:
    cmpwi r27, 0x0
    beq lbl_fn_80564344_000007A4
    mr r5, r24
    b lbl_fn_80564344_000007A8
lbl_fn_80564344_000007A4:
    lwz r5, 0xc4(r1)
lbl_fn_80564344_000007A8:
    lwz r0, 0xc8(r1)
    addi r3, r22, 0x24
    srwi. r0, r0, 31
    bne lbl_fn_80564344_000007C0
    mr r4, r23
    b lbl_fn_80564344_000007C4
lbl_fn_80564344_000007C0:
    lwz r4, 0xd0(r1)
lbl_fn_80564344_000007C4:
    bl fn_8008AD4C
    b lbl_fn_80564344_00000940
lbl_fn_80564344_000007CC:
    mr r3, r20
    addi r4, r31, 0x5e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80564344_000008FC
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    lwz r0, 0xc8(r1)
    mr r21, r3
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000804
    lbz r0, 0xc8(r1)
    clrlwi r20, r0, 25
    b lbl_fn_80564344_00000808
lbl_fn_80564344_00000804:
    lwz r20, 0xcc(r1)
lbl_fn_80564344_00000808:
    lbz r0, 0x1c(r1)
    mr r3, r21
    stb r0, 0x18(r1)
    bl strlen
    mr r0, r3
    mr r5, r20
    mr r6, r21
    addi r3, r1, 0xc8
    add r7, r21, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0xbc(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r27, r0, 5
    beq lbl_fn_80564344_00000864
    mr r3, r24
    b lbl_fn_80564344_00000868
lbl_fn_80564344_00000864:
    lwz r3, 0xc4(r1)
lbl_fn_80564344_00000868:
    addi r4, r30, lbl_8075FB78@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80564344_000008B0
    lwz r0, 0xc8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_0000088C
    mr r20, r23
    b lbl_fn_80564344_00000890
lbl_fn_80564344_0000088C:
    lwz r20, 0xd0(r1)
lbl_fn_80564344_00000890:
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    bl fn_800DC288
    mr r4, r20
    addi r3, r22, 0x24
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_80564344_00000940
lbl_fn_80564344_000008B0:
    cmpwi r27, 0x0
    beq lbl_fn_80564344_000008C0
    mr r20, r24
    b lbl_fn_80564344_000008C4
lbl_fn_80564344_000008C0:
    lwz r20, 0xc4(r1)
lbl_fn_80564344_000008C4:
    lwz r0, 0xc8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_000008D8
    mr r21, r23
    b lbl_fn_80564344_000008DC
lbl_fn_80564344_000008D8:
    lwz r21, 0xd0(r1)
lbl_fn_80564344_000008DC:
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    bl fn_800DC288
    mr r4, r21
    mr r5, r20
    addi r3, r22, 0x24
    bl fn_80092F1C
    b lbl_fn_80564344_00000940
lbl_fn_80564344_000008FC:
    mr r3, r20
    addi r4, r31, 0x68
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80564344_00000940
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x400(r22)
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x404(r22)
    addi r3, r1, 0xd4
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x408(r22)
lbl_fn_80564344_00000940:
    addi r3, r1, 0xd4
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80564344_000000D8
    lwz r0, 0x0(r22)
    cmpwi r0, 0x4
    bge lbl_fn_80564344_00000CBC
    lis r5, lbl_8075FB78@ha
    li r3, 0x10e0
    addi r5, r5, lbl_8075FB78@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_fn_80564344_000009F8
    lis r4, fn_8056503C@ha
    lis r5, fn_80563880@ha
    addi r4, r4, fn_8056503C@l
    li r6, 0x44
    addi r5, r5, fn_80563880@l
    li r7, 0x10
    bl fn_806958E0
    lis r4, fn_8056504C@ha
    lis r5, fn_80563840@ha
    addi r3, r21, 0x440
    li r6, 0x54
    addi r4, r4, fn_8056504C@l
    addi r5, r5, fn_80563840@l
    li r7, 0x18
    bl fn_806958E0
    lis r24, fn_8056505C@ha
    lis r23, fn_80563800@ha
    addi r3, r21, 0xc20
    li r6, 0x64
    addi r4, r24, fn_8056505C@l
    addi r5, r23, fn_80563800@l
    li r7, 0x8
    bl fn_806958E0
    addi r3, r21, 0xf40
    addi r4, r24, fn_8056505C@l
    addi r5, r23, fn_80563800@l
    li r6, 0x64
    li r7, 0x4
    bl fn_806958E0
lbl_fn_80564344_000009F8:
    lwz r24, 0x430(r22)
    cmpwi r24, 0x0
    stw r21, 0x430(r22)
    beq lbl_fn_80564344_00000A6C
    lis r23, fn_80563800@ha
    addi r3, r24, 0xf40
    addi r4, r23, fn_80563800@l
    li r5, 0x64
    li r6, 0x4
    bl fn_806959D8
    addi r3, r24, 0xc20
    addi r4, r23, fn_80563800@l
    li r5, 0x64
    li r6, 0x8
    bl fn_806959D8
    lis r4, fn_80563840@ha
    addi r3, r24, 0x440
    addi r4, r4, fn_80563840@l
    li r5, 0x54
    li r6, 0x18
    bl fn_806959D8
    lis r4, fn_80563880@ha
    mr r3, r24
    addi r4, r4, fn_80563880@l
    li r5, 0x44
    li r6, 0x10
    bl fn_806959D8
    mr r3, r24
    bl dtor_80084684
lbl_fn_80564344_00000A6C:
    lwz r20, 0x430(r22)
    addi r3, r22, 0x428
    bl fn_8047059C
    mr r23, r3
    addi r3, r22, 0x428
    bl fn_80470580
    mr r4, r3
    mr r3, r20
    mr r5, r23
    bl fn_8020C5D4
    lwz r3, 0x40c(r22)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r0, 0x18(r22)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80564344_00000CAC
    cmpwi r3, 0x7
    bge lbl_fn_80564344_00000CAC
    lwz r0, 0x424(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80564344_00000CAC
    lwz r0, 0xc(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80564344_00000CAC
    lwz r0, 0x10(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80564344_00000CAC
    lwz r0, 0x14(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80564344_00000CAC
    addi r3, r22, 0x428
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0xb0(r1)
    mr r21, r3
    addi r23, r1, 0xb0
    stw r0, 0xb4(r1)
    stw r0, 0xb8(r1)
    bl strlen
    mr r20, r3
    mr r3, r23
    mr r4, r20
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r23
    stb r0, 0x10(r1)
    mr r6, r21
    add r7, r21, r20
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r23
    addi r3, r1, 0x74
    bl fn_8006B174
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    bl fn_8006B2D8
    lwz r0, 0xb0(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r3, r0, 5
    bne lbl_fn_80564344_00000B98
    lwz r4, 0x68(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80564344_00000B98
    lwz r3, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r4, 0xb0(r1)
    stw r3, 0xb4(r1)
    stw r0, 0xb8(r1)
    b lbl_fn_80564344_00000BF0
lbl_fn_80564344_00000B98:
    cmpwi r3, 0x0
    beq lbl_fn_80564344_00000BA8
    lwz r5, 0xb4(r1)
    b lbl_fn_80564344_00000BB0
lbl_fn_80564344_00000BA8:
    lbz r0, 0xb0(r1)
    clrlwi r5, r0, 25
lbl_fn_80564344_00000BB0:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000BCC
    lbz r0, 0x68(r1)
    addi r6, r1, 0x69
    clrlwi r4, r0, 25
    b lbl_fn_80564344_00000BD4
lbl_fn_80564344_00000BCC:
    lwz r6, 0x70(r1)
    lwz r4, 0x6c(r1)
lbl_fn_80564344_00000BD4:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0xb0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80564344_00000BF0:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_00000C04
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_80564344_00000C04:
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_00000C18
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_80564344_00000C18:
    lwz r0, 0xb0(r1)
    lwz r3, 0x430(r22)
    srwi. r0, r0, 31
    bne lbl_fn_80564344_00000C30
    addi r4, r1, 0xb1
    b lbl_fn_80564344_00000C34
lbl_fn_80564344_00000C30:
    lwz r4, 0xb8(r1)
lbl_fn_80564344_00000C34:
    bl fn_8020DE0C
    lwz r4, lbl_8087F4F0
    cmpwi r4, 0x0
    beq lbl_fn_80564344_00000C98
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_80564344_00000C7C
    lwz r4, 0x40c(r22)
    lwz r5, 0x0(r22)
    bl fn_804EB654
    lwz r4, 0x424(r22)
    lwz r0, 0x8(r3)
    addi r3, r3, 0xc
    stw r0, 0x0(r4)
    lwz r4, 0x430(r22)
    lwz r5, 0x424(r22)
    bl fn_8020C4C8
    b lbl_fn_80564344_00000C98
lbl_fn_80564344_00000C7C:
    addis r3, r4, 0x1
    slwi r0, r31, 6
    add r3, r3, r0
    lwz r4, 0x430(r22)
    lwz r5, 0x424(r22)
    subi r3, r3, 0x2c80
    bl fn_8020C4C8
lbl_fn_80564344_00000C98:
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_00000CAC
    lwz r3, 0xb8(r1)
    bl dtor_80084684
lbl_fn_80564344_00000CAC:
    lwz r4, 0x430(r22)
    addi r3, r22, 0x24
    lwz r5, 0x424(r22)
    bl fn_8020CC64
lbl_fn_80564344_00000CBC:
    lwz r0, 0xbc(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_00000CD0
    lwz r3, 0xc4(r1)
    bl dtor_80084684
lbl_fn_80564344_00000CD0:
    lwz r0, 0xc8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80564344_00000CE4
    lwz r3, 0xd0(r1)
    bl dtor_80084684
lbl_fn_80564344_00000CE4:
    lmw r20, 0x710(r1)
    lwz r0, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x740
    blr
}

asm void fn_8056503C(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    stb r0, 0x20(r3)
    blr
}

asm void fn_8056504C(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    stb r0, 0x20(r3)
    blr
}

asm void fn_8056505C(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    blr
}

asm void fn_80565068(void)
{
    nofralloc
    stwu r1, -0x7a0(r1)
    mflr r0
    stw r0, 0x7a4(r1)
    addi r11, r1, 0x790
    stfd f31, 0x790(r1)
    psq_st f31, 0x798(r1), 0, 0
    bl _savegpr_27
    mr r31, r3
    addi r3, r3, 0x418
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x418
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x120(r1)
    mr r29, r3
    addi r3, r1, 0x130
    stw r0, 0x124(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x128(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x750(r1)
    bl memset
    addi r3, r1, 0x730
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x120(r1)
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x120
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x120
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x120(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_8075FB78@ha
    lfs f31, lbl_80887F38
    addi r29, r30, lbl_8075FB78@l
lbl_fn_80565068_00000DDC:
    addi r3, r1, 0x120
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r27, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80565068_00000EFC
    addi r4, r29, 0x6e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80565068_00000E88
    addi r3, r1, 0x120
    bl fn_8005B9CC
    mr r27, r3
    mr r4, r29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80565068_00000E28
    li r3, -0x1
    b lbl_fn_80565068_00000E38
lbl_fn_80565068_00000E28:
    mr r4, r27
    addi r3, r31, 0x24
    li r5, 0x0
    bl fn_80092814
lbl_fn_80565068_00000E38:
    mr r28, r3
    addi r3, r1, 0x120
    bl fn_8005B9CC
    mr r27, r3
    addi r4, r30, lbl_8075FB78@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80565068_00000E60
    li r3, -0x1
    b lbl_fn_80565068_00000E70
lbl_fn_80565068_00000E60:
    mr r4, r27
    addi r3, r31, 0x24
    li r5, 0x0
    bl fn_80092814
lbl_fn_80565068_00000E70:
    mr r5, r3
    mr r4, r28
    addi r3, r31, 0x24
    bl fn_80095D44
    stfs f31, 0xd0(r31)
    b lbl_fn_80565068_00000EFC
lbl_fn_80565068_00000E88:
    mr r3, r27
    addi r4, r29, 0x80
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80565068_00000ED0
    addi r3, r1, 0x120
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x20
    bl strcpy
    addi r3, r1, 0x120
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r5, r3
    addi r3, r31, 0x24
    addi r4, r1, 0x20
    bl fn_8009373C
    b lbl_fn_80565068_00000EFC
lbl_fn_80565068_00000ED0:
    mr r3, r27
    addi r4, r29, 0x8d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80565068_00000EFC
    addi r3, r1, 0x120
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x24
    li r5, 0x0
    bl fn_80093D98
lbl_fn_80565068_00000EFC:
    addi r3, r1, 0x120
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80565068_00000DDC
    lwz r0, 0x0(r31)
    cmpwi r0, 0x4
    bge lbl_fn_80565068_000010C8
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80565068_000010C8
    lwz r3, 0x424(r31)
    li r0, -0x1
    stw r0, 0x438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80565068_00000F40
    lwz r0, 0x0(r3)
    stw r0, 0x438(r31)
lbl_fn_80565068_00000F40:
    lwz r0, 0x430(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80565068_00000F6C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x754(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x758(r1)
    stw r0, 0x75c(r1)
    b lbl_fn_80565068_00000F88
lbl_fn_80565068_00000F6C:
    lis r5, lbl_80795660@ha
    lwzu r4, lbl_80795660@l(r5)
    stw r4, 0x754(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x758(r1)
    stw r0, 0x75c(r1)
lbl_fn_80565068_00000F88:
    lwz r5, 0x754(r1)
    addi r3, r1, 0x14
    lwz r4, 0x758(r1)
    lwz r0, 0x75c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80565068_00000FF8
    li r5, 0x0
    li r6, 0x0
    li r3, 0x1
    b lbl_fn_80565068_00000FE8
lbl_fn_80565068_00000FC0:
    add r4, r4, r6
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80565068_00000FE0
    lwz r4, 0x438(r31)
    slw r0, r3, r5
    andc r0, r4, r0
    stw r0, 0x438(r31)
lbl_fn_80565068_00000FE0:
    addi r6, r6, 0x44
    addi r5, r5, 0x1
lbl_fn_80565068_00000FE8:
    lwz r4, 0x430(r31)
    lwz r0, 0x10d0(r4)
    cmpw r5, r0
    blt lbl_fn_80565068_00000FC0
lbl_fn_80565068_00000FF8:
    mr r3, r31
    bl fn_8056542C
    mr r3, r31
    bl fn_8056556C
    lwz r0, 0x430(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80565068_00001034
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x760(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x764(r1)
    stw r0, 0x768(r1)
    b lbl_fn_80565068_00001050
lbl_fn_80565068_00001034:
    lis r5, lbl_8079566C@ha
    lwzu r4, lbl_8079566C@l(r5)
    stw r4, 0x760(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x764(r1)
    stw r0, 0x768(r1)
lbl_fn_80565068_00001050:
    lwz r5, 0x760(r1)
    addi r3, r1, 0x8
    lwz r4, 0x764(r1)
    lwz r0, 0x768(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80565068_000010C8
    li r29, 0x0
    li r28, 0x0
    li r30, 0x1
    b lbl_fn_80565068_000010B8
lbl_fn_80565068_00001088:
    lwz r0, 0x438(r31)
    add r4, r3, r28
    slw r5, r30, r29
    addi r3, r31, 0x24
    and r0, r5, r0
    addi r4, r4, 0x20
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_8009373C
    addi r28, r28, 0x44
    addi r29, r29, 0x1
lbl_fn_80565068_000010B8:
    lwz r3, 0x430(r31)
    lwz r0, 0x10d0(r3)
    cmpw r29, r0
    blt lbl_fn_80565068_00001088
lbl_fn_80565068_000010C8:
    addi r11, r1, 0x790
    psq_l f31, 0x798(r1), 0, 0
    lfd f31, 0x790(r1)
    bl _restgpr_27
    lwz r0, 0x7a4(r1)
    mtlr r0
    addi r1, r1, 0x7a0
    blr
}

asm void fn_8056542C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r3, 0x24
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    bl fn_80093EEC
    lwz r0, 0x430(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8056542C_00001140
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_8056542C_0000115C
lbl_fn_8056542C_00001140:
    lis r5, lbl_80795678@ha
    lwzu r4, lbl_80795678@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_8056542C_0000115C:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8056542C_00001208
    li r28, 0x0
    li r29, 0x0
    li r30, 0x1
    b lbl_fn_8056542C_000011F8
lbl_fn_8056542C_00001194:
    add r6, r29, r4
    li r5, 0x1
    li r8, 0x0
    li r3, 0x0
    b lbl_fn_8056542C_000011D4
lbl_fn_8056542C_000011A8:
    add r7, r6, r3
    lwz r0, 0x438(r31)
    lwz r7, 0xc40(r7)
    slw r7, r30, r7
    and r0, r7, r0
    cmplw r7, r0
    bne lbl_fn_8056542C_000011CC
    li r5, 0x0
    b lbl_fn_8056542C_000011E0
lbl_fn_8056542C_000011CC:
    addi r3, r3, 0x4
    addi r8, r8, 0x1
lbl_fn_8056542C_000011D4:
    lwz r0, 0xc80(r6)
    cmpw r8, r0
    blt lbl_fn_8056542C_000011A8
lbl_fn_8056542C_000011E0:
    add r4, r4, r29
    addi r3, r31, 0x24
    addi r4, r4, 0xc20
    bl fn_80093D98
    addi r29, r29, 0x64
    addi r28, r28, 0x1
lbl_fn_8056542C_000011F8:
    lwz r4, 0x430(r31)
    lwz r0, 0x10d8(r4)
    cmpw r28, r0
    blt lbl_fn_8056542C_00001194
lbl_fn_8056542C_00001208:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8056556C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r25, 0x44(r1)
    mr r28, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8056556C_00001478
    lwz r0, 0x430(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8056556C_00001478
    lwz r3, 0x40c(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8056556C_00001264
    b lbl_fn_8056556C_00001478
lbl_fn_8056556C_00001264:
    addi r31, r3, 0xb0
    mr r3, r31
    bl fn_8008B130
    li r0, 0x0
    stw r0, 0x1c(r1)
    mr r27, r3
    addi r29, r1, 0x1c
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r30, r3
    mr r3, r29
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    mr r6, r27
    add r7, r27, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r29
    addi r3, r1, 0x10
    bl fn_8006B174
    addi r3, r1, 0x34
    addi r4, r1, 0x10
    li r5, 0x0
    li r6, 0x6
    bl fn_80069BF4
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8056556C_000012F4
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8056556C_000012F4:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8056556C_00001308
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8056556C_00001308:
    mr r3, r31
    li r4, 0x1
    bl fn_80093EEC
    addi r25, r1, 0x29
    li r30, 0x0
    li r26, 0x0
    li r27, 0x1
    b lbl_fn_8056556C_000013C8
lbl_fn_8056556C_00001328:
    add r5, r26, r4
    li r29, 0x1
    li r7, 0x0
    li r3, 0x0
    b lbl_fn_8056556C_00001368
lbl_fn_8056556C_0000133C:
    add r6, r5, r3
    lwz r0, 0x438(r28)
    lwz r6, 0xf60(r6)
    slw r6, r27, r6
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_fn_8056556C_00001360
    li r29, 0x0
    b lbl_fn_8056556C_00001374
lbl_fn_8056556C_00001360:
    addi r3, r3, 0x4
    addi r7, r7, 0x1
lbl_fn_8056556C_00001368:
    lwz r0, 0xfa0(r5)
    cmpw r7, r0
    blt lbl_fn_8056556C_0000133C
lbl_fn_8056556C_00001374:
    add r5, r4, r26
    addi r3, r1, 0x28
    addi r4, r1, 0x34
    addi r5, r5, 0xf40
    bl fn_8006D008
    lwz r0, 0x28(r1)
    mr r3, r31
    srwi. r0, r0, 31
    bne lbl_fn_8056556C_000013A0
    mr r4, r25
    b lbl_fn_8056556C_000013A4
lbl_fn_8056556C_000013A0:
    lwz r4, 0x30(r1)
lbl_fn_8056556C_000013A4:
    mr r5, r29
    bl fn_80093D98
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8056556C_000013C0
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_8056556C_000013C0:
    addi r26, r26, 0x64
    addi r30, r30, 0x1
lbl_fn_8056556C_000013C8:
    lwz r4, 0x430(r28)
    lwz r0, 0x10dc(r4)
    cmpw r30, r0
    blt lbl_fn_8056556C_00001328
    lwz r3, 0x40c(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_8056556C_00001410
    lwz r3, 0x414(r28)
    bl fn_8020EF4C
    lis r4, lbl_8075FB78@ha
    cntlzw r0, r3
    addi r4, r4, lbl_8075FB78@l
    mr r3, r31
    srwi r5, r0, 5
    addi r4, r4, 0x9b
    bl fn_8009373C
lbl_fn_8056556C_00001410:
    lwz r3, 0x40c(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x1
    bne lbl_fn_8056556C_00001464
    lwz r3, 0x414(r28)
    bl fn_8020EF4C
    lis r29, lbl_8075FB78@ha
    cntlzw r0, r3
    addi r29, r29, lbl_8075FB78@l
    mr r3, r31
    srwi r5, r0, 5
    addi r4, r29, 0xa3
    bl fn_8009373C
    lwz r3, 0x414(r28)
    bl fn_8020EF4C
    cntlzw r0, r3
    mr r3, r31
    srwi r5, r0, 5
    addi r4, r29, 0xb1
    bl fn_8009373C
lbl_fn_8056556C_00001464:
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8056556C_00001478
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_8056556C_00001478:
    lmw r25, 0x44(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_805657D0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x54(r1)
    li r0, -0x1
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    stw r4, 0x8(r3)
    stw r5, 0x424(r3)
    stw r0, 0x438(r3)
    beq lbl_fn_805657D0_000014CC
    lwz r0, 0x0(r5)
    stw r0, 0x438(r3)
lbl_fn_805657D0_000014CC:
    lwz r0, 0x430(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805657D0_000014F8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_805657D0_00001514
lbl_fn_805657D0_000014F8:
    lis r5, lbl_80795684@ha
    lwzu r4, lbl_80795684@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_805657D0_00001514:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x14
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_805657D0_00001584
    li r5, 0x0
    li r6, 0x0
    li r3, 0x1
    b lbl_fn_805657D0_00001574
lbl_fn_805657D0_0000154C:
    add r4, r4, r6
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805657D0_0000156C
    lwz r4, 0x438(r31)
    slw r0, r3, r5
    andc r0, r4, r0
    stw r0, 0x438(r31)
lbl_fn_805657D0_0000156C:
    addi r6, r6, 0x44
    addi r5, r5, 0x1
lbl_fn_805657D0_00001574:
    lwz r4, 0x430(r31)
    lwz r0, 0x10d0(r4)
    cmpw r5, r0
    blt lbl_fn_805657D0_0000154C
lbl_fn_805657D0_00001584:
    mr r3, r31
    bl fn_8056542C
    mr r3, r31
    bl fn_8056556C
    lwz r0, 0x430(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805657D0_000015C0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_805657D0_000015DC
lbl_fn_805657D0_000015C0:
    lis r5, lbl_80795690@ha
    lwzu r4, lbl_80795690@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_805657D0_000015DC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_805657D0_00001654
    li r29, 0x0
    li r28, 0x0
    li r30, 0x1
    b lbl_fn_805657D0_00001644
lbl_fn_805657D0_00001614:
    lwz r0, 0x438(r31)
    add r4, r3, r28
    slw r5, r30, r29
    addi r3, r31, 0x24
    and r0, r5, r0
    addi r4, r4, 0x20
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_8009373C
    addi r28, r28, 0x44
    addi r29, r29, 0x1
lbl_fn_805657D0_00001644:
    lwz r3, 0x430(r31)
    lwz r0, 0x10d0(r3)
    cmpw r29, r0
    blt lbl_fn_805657D0_00001614
lbl_fn_805657D0_00001654:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805659B8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, -0x1
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    lwz r4, 0x424(r3)
    stw r0, 0x438(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805659B8_000016B0
    lwz r0, 0x0(r4)
    stw r0, 0x438(r3)
lbl_fn_805659B8_000016B0:
    lwz r0, 0x430(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805659B8_000016DC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_805659B8_000016F8
lbl_fn_805659B8_000016DC:
    lis r5, lbl_8079569C@ha
    lwzu r4, lbl_8079569C@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_805659B8_000016F8:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x8
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_805659B8_00001768
    li r5, 0x0
    li r6, 0x0
    li r3, 0x1
    b lbl_fn_805659B8_00001758
lbl_fn_805659B8_00001730:
    add r4, r4, r6
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805659B8_00001750
    lwz r4, 0x438(r31)
    slw r0, r3, r5
    andc r0, r4, r0
    stw r0, 0x438(r31)
lbl_fn_805659B8_00001750:
    addi r6, r6, 0x44
    addi r5, r5, 0x1
lbl_fn_805659B8_00001758:
    lwz r4, 0x430(r31)
    lwz r0, 0x10d0(r4)
    cmpw r5, r0
    blt lbl_fn_805659B8_00001730
lbl_fn_805659B8_00001768:
    mr r3, r31
    bl fn_8056542C
    mr r3, r31
    bl fn_8056556C
    lwz r0, 0x430(r31)
    cmpwi r0, 0x0
    bne lbl_fn_805659B8_000017A4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_805659B8_000017C0
lbl_fn_805659B8_000017A4:
    lis r5, lbl_807956A8@ha
    lwzu r4, lbl_807956A8@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_805659B8_000017C0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_805659B8_00001838
    li r28, 0x0
    li r29, 0x0
    li r30, 0x1
    b lbl_fn_805659B8_00001828
lbl_fn_805659B8_000017F8:
    lwz r0, 0x438(r31)
    add r4, r3, r29
    slw r5, r30, r28
    addi r3, r31, 0x24
    and r0, r5, r0
    addi r4, r4, 0x20
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_8009373C
    addi r29, r29, 0x44
    addi r28, r28, 0x1
lbl_fn_805659B8_00001828:
    lwz r3, 0x430(r31)
    lwz r0, 0x10d0(r3)
    cmpw r28, r0
    blt lbl_fn_805659B8_000017F8
lbl_fn_805659B8_00001838:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80565B9C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    lwz r0, 0x190(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80565B9C_00001BCC
    lwz r0, 0x0(r3)
    cmplwi r0, 0x3
    ble lbl_fn_80565B9C_000018A4
    cmpwi r0, 0x4
    beq lbl_fn_80565B9C_000019D0
    b lbl_fn_80565B9C_00001BCC
lbl_fn_80565B9C_000018A4:
    lwz r4, 0x40c(r3)
    addi r31, r4, 0xb8
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f6, 0x54(r3), 0, 0
    psq_st f1, 0x2c(r3), 0, 0
    psq_st f2, 0x34(r3), 0, 0
    psq_st f3, 0x3c(r3), 0, 0
    psq_st f4, 0x44(r3), 0, 0
    psq_st f5, 0x4c(r3), 0, 0
    addi r3, r1, 0x44
    lfs f8, 0xe0(r4)
    lfs f7, 0xd0(r4)
    lfs f0, 0xc0(r4)
    stfs f0, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    bl fn_805F9940
    lfs f8, 0x24(r31)
    fmr f31, f1
    lfs f7, 0x14(r31)
    addi r3, r1, 0x50
    lfs f0, 0x4(r31)
    stfs f0, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f8, 0x58(r1)
    bl fn_805F9940
    lfs f8, 0x20(r31)
    fmr f30, f1
    lfs f7, 0x10(r31)
    addi r3, r1, 0x5c
    lfs f0, 0x0(r31)
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f8, 0x64(r1)
    bl fn_805F9940
    frsp f7, f30
    stfs f1, 0x38(r1)
    frsp f0, f31
    stfs f30, 0x3c(r1)
    fcmpo cr0, f7, f0
    stfs f31, 0x40(r1)
    ble lbl_fn_80565B9C_00001964
    b lbl_fn_80565B9C_00001968
lbl_fn_80565B9C_00001964:
    fmr f7, f0
lbl_fn_80565B9C_00001968:
    lfs f8, 0x38(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80565B9C_00001978
    b lbl_fn_80565B9C_00001990
lbl_fn_80565B9C_00001978:
    lfs f8, 0x3c(r1)
    lfs f0, 0x40(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80565B9C_0000198C
    b lbl_fn_80565B9C_00001990
lbl_fn_80565B9C_0000198C:
    fmr f8, f0
lbl_fn_80565B9C_00001990:
    lwz r4, 0x40c(r30)
    addi r3, r30, 0x24
    stfs f8, 0x78(r30)
    li r6, 0x0
    lwz r5, 0x3fc(r30)
    addi r4, r4, 0xb0
    bl fn_80091C10
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80565B9C_000019C4
    bl fn_80481668
    cmpwi r3, 0x0
    bne lbl_fn_80565B9C_00001BCC
lbl_fn_80565B9C_000019C4:
    mr r3, r30
    bl fn_805660E0
    b lbl_fn_80565B9C_00001BCC
lbl_fn_80565B9C_000019D0:
    lwz r0, 0x3f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80565B9C_00001A1C
    lwz r3, 0x40c(r3)
    lis r4, lbl_8075FB78@ha
    addi r4, r4, lbl_8075FB78@l
    li r5, 0x0
    addi r31, r3, 0xb0
    mr r3, r31
    addi r4, r4, 0xda
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80565B9C_00001A0C
    li r0, 0x0
    b lbl_fn_80565B9C_00001A18
lbl_fn_80565B9C_00001A0C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r0, r3, r0
lbl_fn_80565B9C_00001A18:
    stw r0, 0x3f4(r30)
lbl_fn_80565B9C_00001A1C:
    lwz r4, 0x3f4(r30)
    addi r31, r1, 0xe0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lfs f1, 0x400(r30)
    lfs f2, 0x404(r30)
    lfs f3, 0x408(r30)
    bl fn_805F9160
    mr r3, r31
    addi r4, r1, 0xb0
    addi r5, r1, 0x80
    bl fn_805F89F0
    addi r4, r1, 0x80
    addi r3, r1, 0x14
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
    psq_st f1, 0x2c(r30), 0, 0
    psq_st f2, 0x34(r30), 0, 0
    psq_st f3, 0x3c(r30), 0, 0
    psq_st f4, 0x44(r30), 0, 0
    psq_st f5, 0x4c(r30), 0, 0
    psq_st f6, 0x54(r30), 0, 0
    lfs f8, 0x108(r1)
    lfs f7, 0xf8(r1)
    lfs f0, 0xe8(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x104(r1)
    fmr f30, f1
    lfs f7, 0xf4(r1)
    addi r3, r1, 0x20
    lfs f0, 0xe4(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x100(r1)
    fmr f31, f1
    lfs f7, 0xf0(r1)
    addi r3, r1, 0x2c
    lfs f0, 0xe0(r1)
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
    ble lbl_fn_80565B9C_00001B4C
    b lbl_fn_80565B9C_00001B50
lbl_fn_80565B9C_00001B4C:
    fmr f7, f0
lbl_fn_80565B9C_00001B50:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80565B9C_00001B60
    b lbl_fn_80565B9C_00001B78
lbl_fn_80565B9C_00001B60:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80565B9C_00001B74
    b lbl_fn_80565B9C_00001B78
lbl_fn_80565B9C_00001B74:
    fmr f8, f0
lbl_fn_80565B9C_00001B78:
    stfs f8, 0x78(r30)
    li r0, 0x0
    addi r3, r30, 0x24
    addi r4, r1, 0x68
    stw r0, 0x68(r1)
    bl fn_8000D430
    addic. r3, r1, 0x68
    beq lbl_fn_80565B9C_00001BCC
    lwz r4, 0x68(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80565B9C_00001BCC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80565B9C_00001BC4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80565B9C_00001BC4:
    li r0, 0x0
    stw r0, 0x68(r1)
lbl_fn_80565B9C_00001BCC:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}
