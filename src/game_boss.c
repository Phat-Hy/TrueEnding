#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005ED6C(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800C1660(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5A3C(void);
extern void fn_800D5B58(void);
extern void fn_8046CC90(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_8046F4D4(void);
extern void fn_805F9EF0(void);
extern void fn_805FA270(void);
extern void fn_805FA390(void);
extern void fn_805FA5D0(void);
extern void fn_80680770(void);
extern void fn_8068093C(void);
extern void fn_8068236C(void);
extern void fn_806827C4(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);
extern void fn_80695D84(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80731390[];
extern u8 lbl_80731398[];
extern u8 lbl_80731408[];
extern u8 lbl_80731410[];
extern u8 lbl_80731450[];
extern u8 lbl_80731460[];
extern u8 lbl_8073148C[];
extern u8 lbl_80777B08[];
extern u8 lbl_80777B48[];
extern u8 lbl_80777B88[];
extern u8 lbl_80777BC0[];
extern u8 lbl_80777BD8[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EEC0;
extern u32 lbl_8087EEC4;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F518;
extern u32 lbl_808809E8;
extern u32 lbl_808809F0;
extern u32 lbl_808809F4;
extern u32 lbl_808809F8;
extern u32 lbl_808809FC;
extern u32 lbl_80880A00;
extern u32 lbl_80880A08;
extern u32 lbl_80880A0C;
extern u32 lbl_80880A10;

/* Function declarations */
void fn_80068DB0(void);
void fn_80069060(void);
void fn_80069288(void);
void fn_8006945C(void);
void fn_8006969C(void);
void fn_800696B4(void);
void fn_800696C8(void);
void fn_8006974C(void);
void fn_80069758(void);
void fn_80069798(void);
void fn_800697D8(void);
void fn_800698DC(void);
void fn_80069BF4(void);
void fn_80069D48(void);
void fn_80069E50(void);
void fn_8006A004(void);
void fn_8006A09C(void);
void fn_8006A0F4(void);
void fn_8006A204(void);
void fn_8006A250(void);
void fn_8006A318(void);
void fn_8006A374(void);
void fn_8006A5A8(void);
void fn_8006A6BC(void);
void fn_8006A72C(void);
void fn_8006A734(void);
void fn_8006A900(void);
void fn_8006A940(void);
void fn_8006A944(void);
void fn_8006A94C(void);
void fn_8006A950(void);
void fn_8006A9A4(void);
void fn_8006AA20(void);
void fn_8006AB54(void);
void fn_8006AC08(void);
void fn_8006AD24(void);
void fn_8006AF38(void);
void fn_8006AFF8(void);
void fn_8006B0C8(void);
void fn_8006B174(void);
void fn_8006B2D8(void);
void fn_8006B404(void);
void fn_8006B46C(void);
void fn_8006B53C(void);
void fn_8006B594(void);
void fn_8006BA30(void);
void fn_8006BA38(void);
void fn_8006BA54(void);
void fn_8006BA6C(void);
void fn_8006BA74(void);
void fn_8006BA8C(void);
void fn_8006BB6C(void);
void fn_8006BBCC(void);
void fn_8006BC64(void);
void fn_8006BD78(void);

asm void fn_80068DB0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    stmw r21, 0x34(r1)
    li r25, 0x10
    lbz r26, 0x0(r6)
    lbz r29, 0x0(r5)
    lbz r27, 0x1(r6)
    slwi r0, r26, 2
    slwi r9, r29, 2
    lbz r30, 0x1(r5)
    lbz r28, 0x2(r6)
    subf r21, r29, r9
    lbz r31, 0x2(r5)
    add r12, r0, r26
    slwi r11, r30, 2
    slwi r10, r27, 2
    add r12, r21, r12
    slwi r6, r31, 2
    subf r22, r30, r11
    add r21, r10, r27
    srawi r12, r12, 3
    subf r24, r31, r6
    addze r12, r12
    add r21, r22, r21
    slwi r5, r28, 2
    add r23, r9, r29
    add r22, r5, r28
    srawi r21, r21, 3
    addze r9, r21
    add r11, r11, r30
    add r22, r24, r22
    subf r24, r26, r0
    srawi r22, r22, 3
    subf r10, r27, r10
    addze r0, r22
    add r24, r23, r24
    srawi r24, r24, 3
    add r10, r11, r10
    addze r24, r24
    add r6, r6, r31
    srawi r10, r10, 3
    subf r5, r28, r5
    addze r10, r10
    stb r26, 0x18(r1)
    add r6, r6, r5
    addi r5, r1, 0x8
    srawi r6, r6, 3
    stb r27, 0x19(r1)
    addze r6, r6
    stb r28, 0x1a(r1)
    stb r29, 0x1b(r1)
    stb r30, 0x1c(r1)
    stb r31, 0x1d(r1)
    stb r12, 0x1e(r1)
    stb r9, 0x1f(r1)
    stb r0, 0x20(r1)
    stb r24, 0x21(r1)
    stb r10, 0x22(r1)
    stb r6, 0x23(r1)
    mtctr r25
lbl_fn_80068DB0_000000EC:
    lbz r22, 0x0(r7)
    li r0, 0x0
    lbz r23, 0x2(r7)
    lbz r9, 0x1b(r1)
    subf r11, r26, r22
    lbz r6, 0x1d(r1)
    subf r24, r28, r23
    subf r29, r9, r22
    lbz r21, 0x1(r7)
    subf r30, r6, r23
    lbz r10, 0x1c(r1)
    mullw r9, r24, r24
    subf r12, r27, r21
    subf r25, r10, r21
    mullw r6, r11, r11
    add r11, r9, r6
    mullw r12, r12, r12
    mullw r10, r30, r30
    add r11, r12, r11
    mullw r6, r29, r29
    mullw r9, r25, r25
    add r6, r10, r6
    add r6, r9, r6
    cmpw r6, r11
    bge lbl_fn_80068DB0_00000158
    li r0, 0x1
    mr r11, r6
lbl_fn_80068DB0_00000158:
    lbz r9, 0x1e(r1)
    lbz r6, 0x20(r1)
    lbz r10, 0x1f(r1)
    subf r29, r9, r22
    subf r30, r6, r23
    subf r25, r10, r21
    mullw r10, r30, r30
    mullw r6, r29, r29
    mullw r9, r25, r25
    add r6, r10, r6
    add r6, r9, r6
    cmpw r6, r11
    bge lbl_fn_80068DB0_00000194
    li r0, 0x2
    mr r11, r6
lbl_fn_80068DB0_00000194:
    lbz r9, 0x21(r1)
    lbz r6, 0x23(r1)
    lbz r10, 0x22(r1)
    subf r29, r9, r22
    subf r30, r6, r23
    subf r25, r10, r21
    mullw r10, r30, r30
    mullw r6, r29, r29
    mullw r9, r25, r25
    add r6, r10, r6
    add r6, r9, r6
    cmpw r6, r11
    bge lbl_fn_80068DB0_000001CC
    li r0, 0x3
lbl_fn_80068DB0_000001CC:
    stb r0, 0x0(r5)
    addi r7, r7, 0x4
    addi r5, r5, 0x1
    bdnz lbl_fn_80068DB0_000000EC
    lbz r7, 0x11(r1)
    extrwi r5, r4, 8, 16
    lbz r6, 0x9(r1)
    extrwi r0, r3, 8, 16
    lbz r12, 0xa(r1)
    slwi r10, r7, 2
    lbz r9, 0xd(r1)
    slwi r25, r6, 2
    lbz r7, 0x8(r1)
    slwi r29, r12, 4
    lbz r11, 0xe(r1)
    slwi r9, r9, 2
    or r28, r7, r25
    lbz r12, 0xc(r1)
    lbz r6, 0x15(r1)
    slwi r26, r11, 4
    or r25, r12, r9
    lbz r7, 0x12(r1)
    lbz r11, 0x10(r1)
    slwi r6, r6, 2
    slwi r12, r7, 4
    lbz r7, 0x14(r1)
    or r10, r11, r10
    lbz r9, 0x16(r1)
    lbz r30, 0xb(r1)
    or r6, r7, r6
    lbz r27, 0xf(r1)
    slwi r9, r9, 4
    lbz r11, 0x13(r1)
    slwi r30, r30, 6
    lbz r7, 0x17(r1)
    or r28, r29, r28
    or r28, r30, r28
    slwi r27, r27, 6
    or r25, r26, r25
    or r10, r12, r10
    or r12, r27, r25
    slwi r11, r11, 6
    or r6, r9, r6
    slwi r7, r7, 6
    or r9, r11, r10
    stb r4, 0x0(r8)
    or r4, r7, r6
    stb r5, 0x1(r8)
    stb r3, 0x2(r8)
    stb r0, 0x3(r8)
    stb r28, 0x4(r8)
    stb r12, 0x5(r8)
    stb r9, 0x6(r8)
    stb r4, 0x7(r8)
    lmw r21, 0x34(r1)
    addi r1, r1, 0x60
    blr
}

asm void fn_80069060(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    li r11, 0x0
    li r10, 0x10
    stmw r24, 0x30(r1)
    stb r11, 0x21(r1)
    stb r11, 0x22(r1)
    stb r11, 0x23(r1)
    lbz r25, 0x0(r5)
    lbz r9, 0x1(r5)
    lbz r0, 0x2(r5)
    srwi r28, r25, 1
    lbz r31, 0x0(r6)
    srwi r26, r9, 1
    lbz r29, 0x2(r6)
    srwi r12, r0, 1
    lbz r30, 0x1(r6)
    srwi r27, r31, 1
    add r27, r28, r27
    srwi r5, r29, 1
    srwi r6, r30, 1
    stb r25, 0x18(r1)
    add r26, r26, r6
    li r28, 0x3
    add r6, r12, r5
    addi r5, r1, 0x8
    stb r9, 0x19(r1)
    stb r0, 0x1a(r1)
    stb r31, 0x1b(r1)
    stb r30, 0x1c(r1)
    stb r29, 0x1d(r1)
    stb r27, 0x1e(r1)
    stb r26, 0x1f(r1)
    stb r6, 0x20(r1)
    mtctr r10
lbl_fn_80069060_00000338:
    lbz r6, 0x3(r7)
    cmplwi r6, 0x7f
    bge lbl_fn_80069060_0000034C
    stb r28, 0x0(r5)
    b lbl_fn_80069060_000003F8
lbl_fn_80069060_0000034C:
    lbz r30, 0x2(r7)
    li r6, 0x0
    lbz r10, 0x1d(r1)
    lbz r29, 0x0(r7)
    subf r26, r0, r30
    subf r24, r10, r30
    lbz r10, 0x18(r1)
    lbz r11, 0x1b(r1)
    mullw r26, r26, r26
    subf r10, r10, r29
    lbz r25, 0x1(r7)
    lbz r12, 0x1c(r1)
    subf r11, r11, r29
    subf r27, r9, r25
    mullw r10, r10, r10
    subf r31, r12, r25
    add r26, r26, r10
    mullw r10, r11, r11
    mullw r12, r24, r24
    mullw r27, r27, r27
    add r10, r12, r10
    mullw r11, r31, r31
    add r26, r27, r26
    add r10, r11, r10
    cmpw r10, r26
    bge lbl_fn_80069060_000003BC
    li r6, 0x1
    mr r26, r10
lbl_fn_80069060_000003BC:
    lbz r11, 0x1e(r1)
    lbz r10, 0x20(r1)
    lbz r12, 0x1f(r1)
    subf r11, r11, r29
    subf r24, r10, r30
    subf r31, r12, r25
    mullw r10, r11, r11
    mullw r12, r24, r24
    mullw r11, r31, r31
    add r10, r12, r10
    add r10, r11, r10
    cmpw r10, r26
    bge lbl_fn_80069060_000003F4
    li r6, 0x2
lbl_fn_80069060_000003F4:
    stb r6, 0x0(r5)
lbl_fn_80069060_000003F8:
    addi r7, r7, 0x4
    addi r5, r5, 0x1
    bdnz lbl_fn_80069060_00000338
    lbz r7, 0x11(r1)
    extrwi r5, r3, 8, 16
    lbz r6, 0x9(r1)
    extrwi r0, r4, 8, 16
    lbz r12, 0xa(r1)
    slwi r10, r7, 2
    lbz r9, 0xd(r1)
    slwi r28, r6, 2
    lbz r7, 0x8(r1)
    slwi r27, r12, 4
    lbz r11, 0xe(r1)
    slwi r9, r9, 2
    or r28, r7, r28
    lbz r12, 0xc(r1)
    lbz r6, 0x15(r1)
    slwi r30, r11, 4
    or r31, r12, r9
    lbz r7, 0x12(r1)
    lbz r11, 0x10(r1)
    slwi r6, r6, 2
    slwi r12, r7, 4
    lbz r7, 0x14(r1)
    or r10, r11, r10
    lbz r9, 0x16(r1)
    lbz r26, 0xb(r1)
    or r6, r7, r6
    lbz r29, 0xf(r1)
    slwi r9, r9, 4
    lbz r11, 0x13(r1)
    slwi r26, r26, 6
    lbz r7, 0x17(r1)
    or r28, r27, r28
    or r28, r26, r28
    slwi r29, r29, 6
    or r31, r30, r31
    or r10, r12, r10
    or r12, r29, r31
    slwi r11, r11, 6
    or r6, r9, r6
    slwi r7, r7, 6
    or r9, r11, r10
    stb r3, 0x0(r8)
    or r3, r7, r6
    stb r5, 0x1(r8)
    stb r4, 0x2(r8)
    stb r0, 0x3(r8)
    stb r28, 0x4(r8)
    stb r12, 0x5(r8)
    stb r9, 0x6(r8)
    stb r3, 0x7(r8)
    lmw r24, 0x30(r1)
    addi r1, r1, 0x50
    blr
}

asm void fn_80069288(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lbz r8, 0x0(r3)
    li r5, 0xf
    stw r0, 0x14(r1)
    addi r9, r3, 0x4
    lbz r7, 0x1(r3)
    li r0, 0x0
    lbz r6, 0x2(r3)
    stb r8, 0xc(r1)
    stb r7, 0xd(r1)
    stb r6, 0xe(r1)
    stb r8, 0x8(r1)
    stb r7, 0x9(r1)
    stb r6, 0xa(r1)
    mtctr r5
lbl_fn_80069288_00000518:
    lbz r7, 0xc(r1)
    lbz r5, 0x0(r9)
    cmplw r5, r7
    bge lbl_fn_80069288_0000052C
    mr r7, r5
lbl_fn_80069288_0000052C:
    lbz r6, 0xd(r1)
    lbz r5, 0x1(r9)
    stb r7, 0xc(r1)
    cmplw r5, r6
    bge lbl_fn_80069288_00000544
    mr r6, r5
lbl_fn_80069288_00000544:
    lbz r7, 0xe(r1)
    lbz r5, 0x2(r9)
    stb r6, 0xd(r1)
    cmplw r5, r7
    bge lbl_fn_80069288_0000055C
    mr r7, r5
lbl_fn_80069288_0000055C:
    lbz r8, 0x8(r1)
    lbz r5, 0x0(r9)
    stb r7, 0xe(r1)
    cmplw r5, r8
    ble lbl_fn_80069288_00000574
    mr r8, r5
lbl_fn_80069288_00000574:
    lbz r6, 0x9(r1)
    lbz r5, 0x1(r9)
    stb r8, 0x8(r1)
    cmplw r5, r6
    ble lbl_fn_80069288_0000058C
    mr r6, r5
lbl_fn_80069288_0000058C:
    lbz r7, 0xa(r1)
    lbz r5, 0x2(r9)
    stb r6, 0x9(r1)
    cmplw r5, r7
    ble lbl_fn_80069288_000005A4
    mr r7, r5
lbl_fn_80069288_000005A4:
    cmpwi r0, 0x0
    stb r7, 0xa(r1)
    li r0, 0x0
    bne lbl_fn_80069288_000005C0
    lbz r5, 0x3(r9)
    cmplwi r5, 0x7f
    bge lbl_fn_80069288_000005C4
lbl_fn_80069288_000005C0:
    li r0, 0x1
lbl_fn_80069288_000005C4:
    addi r9, r9, 0x4
    bdnz lbl_fn_80069288_00000518
    lbz r6, 0xc(r1)
    lbz r5, 0x8(r1)
    rlwinm r8, r6, 8, 16, 20
    lbz r6, 0xd(r1)
    rlwinm r12, r5, 8, 16, 20
    lbz r5, 0x9(r1)
    rlwimi r8, r6, 3, 21, 26
    lbz r7, 0xe(r1)
    lbz r6, 0xa(r1)
    rlwimi r12, r5, 3, 21, 26
    rlwimi r8, r7, 29, 27, 31
    rlwimi r12, r6, 29, 27, 31
    cmplw r8, r12
    mr r11, r8
    ble lbl_fn_80069288_00000644
    mr r11, r12
    mr r12, r8
    lbz r9, 0xc(r1)
    lbz r7, 0x8(r1)
    lbz r8, 0xd(r1)
    lbz r6, 0x9(r1)
    lbz r10, 0xe(r1)
    lbz r5, 0xa(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r9, 0x8(r1)
    stb r8, 0x9(r1)
    stb r10, 0xa(r1)
    b lbl_fn_80069288_00000658
lbl_fn_80069288_00000644:
    clrlwi r6, r8, 16
    clrlwi r5, r12, 16
    cmplw r6, r5
    bne lbl_fn_80069288_00000658
    li r0, 0x1
lbl_fn_80069288_00000658:
    cmpwi r0, 0x0
    beq lbl_fn_80069288_00000680
    mr r7, r3
    mr r8, r4
    clrlwi r3, r11, 16
    clrlwi r4, r12, 16
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_80069060
    b lbl_fn_80069288_0000069C
lbl_fn_80069288_00000680:
    mr r7, r3
    mr r8, r4
    clrlwi r3, r11, 16
    clrlwi r4, r12, 16
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl fn_80068DB0
lbl_fn_80069288_0000069C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006945C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    srawi r0, r4, 2
    stmw r21, 0x54(r1)
    addze r25, r0
    srawi r0, r5, 2
    mr r30, r3
    mr r31, r6
    slwi r23, r4, 2
    addze r24, r0
    li r22, 0x0
    li r27, 0x0
    li r28, 0x0
    li r29, 0x2
    b lbl_fn_8006945C_000008D0
lbl_fn_8006945C_000006EC:
    mullw r26, r23, r27
    li r21, 0x0
    b lbl_fn_8006945C_000008C0
lbl_fn_8006945C_000006F8:
    mr r7, r26
    addi r8, r1, 0x8
    li r9, 0x0
    mtctr r29
lbl_fn_8006945C_00000708:
    stb r28, 0x0(r8)
    add r6, r30, r7
    addi r10, r7, 0x4
    lbz r5, 0x3(r6)
    stb r28, 0x1(r8)
    add r7, r7, r23
    lbz r4, 0x0(r6)
    stb r28, 0x2(r8)
    lbz r3, 0x1(r6)
    stb r5, 0x3(r8)
    lbz r0, 0x2(r6)
    add r6, r30, r10
    stb r4, 0x0(r8)
    lbzx r4, r30, r10
    addi r10, r10, 0x4
    stb r3, 0x1(r8)
    lbz r3, 0x1(r6)
    stb r0, 0x2(r8)
    lbz r0, 0x2(r6)
    stb r5, 0x3(r8)
    lbz r5, 0x3(r6)
    add r6, r30, r10
    stb r28, 0x4(r8)
    stb r28, 0x5(r8)
    stb r28, 0x6(r8)
    stb r5, 0x7(r8)
    stb r4, 0x4(r8)
    lbzx r4, r30, r10
    addi r10, r10, 0x4
    stb r3, 0x5(r8)
    lbz r3, 0x1(r6)
    stb r0, 0x6(r8)
    lbz r0, 0x2(r6)
    stb r5, 0x7(r8)
    lbz r5, 0x3(r6)
    add r6, r30, r10
    stb r28, 0x9(r8)
    stb r28, 0xa(r8)
    stb r5, 0xb(r8)
    stb r4, 0x8(r8)
    lbzx r4, r30, r10
    stb r3, 0x9(r8)
    lbz r3, 0x1(r6)
    stb r0, 0xa(r8)
    lbz r0, 0x2(r6)
    stb r5, 0xb(r8)
    lbz r5, 0x3(r6)
    stb r4, 0xc(r8)
    stb r3, 0xd(r8)
    stb r0, 0xe(r8)
    stb r5, 0xf(r8)
    stb r28, 0x10(r8)
    add r6, r30, r7
    addi r10, r7, 0x4
    lbz r5, 0x3(r6)
    stb r28, 0x11(r8)
    add r7, r7, r23
    lbz r4, 0x0(r6)
    addi r9, r9, 0x1
    stb r28, 0x12(r8)
    lbz r3, 0x1(r6)
    stb r5, 0x13(r8)
    lbz r0, 0x2(r6)
    add r6, r30, r10
    stb r4, 0x10(r8)
    lbzx r4, r30, r10
    addi r10, r10, 0x4
    stb r3, 0x11(r8)
    lbz r3, 0x1(r6)
    stb r0, 0x12(r8)
    lbz r0, 0x2(r6)
    stb r5, 0x13(r8)
    lbz r5, 0x3(r6)
    add r6, r30, r10
    stb r28, 0x15(r8)
    stb r28, 0x16(r8)
    stb r5, 0x17(r8)
    stb r4, 0x14(r8)
    lbzx r4, r30, r10
    addi r10, r10, 0x4
    stb r3, 0x15(r8)
    lbz r3, 0x1(r6)
    stb r0, 0x16(r8)
    lbz r0, 0x2(r6)
    stb r5, 0x17(r8)
    lbz r5, 0x3(r6)
    add r6, r30, r10
    stb r28, 0x19(r8)
    stb r28, 0x1a(r8)
    stb r5, 0x1b(r8)
    stb r4, 0x18(r8)
    lbzx r4, r30, r10
    stb r3, 0x19(r8)
    lbz r3, 0x1(r6)
    stb r0, 0x1a(r8)
    lbz r0, 0x2(r6)
    stb r5, 0x1b(r8)
    lbz r5, 0x3(r6)
    stb r4, 0x1c(r8)
    stb r3, 0x1d(r8)
    stb r0, 0x1e(r8)
    stb r5, 0x1f(r8)
    addi r8, r8, 0x20
    bdnz lbl_fn_8006945C_00000708
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_80069288
    addi r31, r31, 0x8
    addi r26, r26, 0x10
    addi r21, r21, 0x1
lbl_fn_8006945C_000008C0:
    cmpw r21, r25
    blt lbl_fn_8006945C_000006F8
    addi r27, r27, 0x4
    addi r22, r22, 0x1
lbl_fn_8006945C_000008D0:
    cmpw r22, r24
    blt lbl_fn_8006945C_000006EC
    lmw r21, 0x54(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8006969C(void)
{
    nofralloc
    lhz r4, lbl_808809E8
    subfic r3, r4, 0x1
    subi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_800696B4(void)
{
    nofralloc
    lhz r3, lbl_808809E8
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_800696C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    bne lbl_fn_800696C8_00000988
    lis r5, lbl_80731398@ha
    li r3, 0x2204
    addi r5, r5, lbl_80731398@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800696C8_00000984
    li r0, 0x0
    stw r0, 0x0(r3)
    lis r4, fn_8006974C@ha
    lis r5, fn_80069798@ha
    addi r4, r4, fn_8006974C@l
    li r6, 0x88
    addi r5, r5, fn_80069798@l
    li r7, 0x40
    addi r3, r3, 0x4
    bl fn_806958E0
lbl_fn_800696C8_00000984:
    stw r31, lbl_8087EEB8
lbl_fn_800696C8_00000988:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006974C(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    blr
}

asm void fn_80069758(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80069758_000009D0
    cmpwi r4, 0x0
    ble lbl_fn_80069758_000009D0
    bl dtor_80084684
lbl_fn_80069758_000009D0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80069798(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80069798_00000A10
    cmpwi r4, 0x0
    ble lbl_fn_80069798_00000A10
    bl dtor_80084684
lbl_fn_80069798_00000A10:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800697D8(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r4
    lwz r0, 0x0(r3)
    cmplwi r0, 0x40
    bge lbl_fn_800697D8_00000B10
    li r30, 0x0
    li r4, 0x12c
    lis r0, 0xffff
    stb r30, 0x8(r1)
    mr r3, r29
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
    bl strlen
    cmplwi r3, 0x7f
    blt lbl_fn_800697D8_00000A94
    mr r4, r29
    addi r3, r1, 0x8
    li r5, 0x7e
    bl fn_8068236C
    stb r30, 0x86(r1)
    b lbl_fn_800697D8_00000ABC
lbl_fn_800697D8_00000A94:
    addi r30, r1, 0x8
    cmplw r29, r30
    beq lbl_fn_800697D8_00000ABC
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800697D8_00000ABC:
    lwz r0, 0x0(r31)
    mulli r0, r0, 0x88
    add r0, r31, r0
    addic. r6, r0, 0x4
    beq lbl_fn_800697D8_00000B04
    li r0, 0x10
    subi r5, r6, 0x4
    addi r4, r1, 0x4
    mtctr r0
lbl_fn_800697D8_00000AE0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_800697D8_00000AE0
    lwz r0, 0x88(r1)
    stw r0, 0x80(r6)
    lwz r0, 0x8c(r1)
    stw r0, 0x84(r6)
lbl_fn_800697D8_00000B04:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_800697D8_00000B10:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_800698DC(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stmw r25, 0xe4(r1)
    li r30, 0x0
    lis r29, lbl_80731398@ha
    mr r31, r3
    addi r29, r29, lbl_80731398@l
    mr r25, r4
    addi r28, r29, 0x1
    addi r27, r1, 0x40
    mr r3, r28
    stw r30, 0x40(r1)
    stw r30, 0x44(r1)
    stw r30, 0x48(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r27
    stb r0, 0x20(r1)
    mr r6, r28
    add r7, r28, r26
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    stw r30, 0x34(r1)
    mr r3, r25
    addi r27, r1, 0x34
    stw r30, 0x38(r1)
    stw r30, 0x3c(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r25
    add r7, r25, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r28, r29, 0xd
    mr r3, r28
    bl strlen
    mr r6, r3
    mr r3, r27
    mr r4, r28
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    mr r5, r3
    cmplwi r0, 0xffff
    beq lbl_fn_800698DC_00000CCC
    mr r4, r27
    addi r3, r1, 0x28
    addi r5, r5, 0x7
    li r6, -0x1
    bl fn_80069BF4
    lwz r0, 0x34(r1)
    srwi. r3, r0, 31
    bne lbl_fn_800698DC_00000C60
    lwz r4, 0x28(r1)
    srwi. r0, r4, 31
    bne lbl_fn_800698DC_00000C60
    lwz r3, 0x2c(r1)
    lwz r0, 0x30(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    b lbl_fn_800698DC_00000CB8
lbl_fn_800698DC_00000C60:
    cmpwi r3, 0x0
    beq lbl_fn_800698DC_00000C70
    lwz r5, 0x38(r1)
    b lbl_fn_800698DC_00000C78
lbl_fn_800698DC_00000C70:
    lbz r0, 0x34(r1)
    clrlwi r5, r0, 25
lbl_fn_800698DC_00000C78:
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    bne lbl_fn_800698DC_00000C94
    lbz r0, 0x28(r1)
    addi r6, r1, 0x29
    clrlwi r4, r0, 25
    b lbl_fn_800698DC_00000C9C
lbl_fn_800698DC_00000C94:
    lwz r6, 0x30(r1)
    lwz r4, 0x2c(r1)
lbl_fn_800698DC_00000C9C:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r1, 0x34
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_800698DC_00000CB8:
    lwz r0, 0x28(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800698DC_00000CCC
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_800698DC_00000CCC:
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    bne lbl_fn_800698DC_00000CE4
    lbz r0, 0x40(r1)
    clrlwi r4, r0, 25
    b lbl_fn_800698DC_00000CE8
lbl_fn_800698DC_00000CE4:
    lwz r4, 0x44(r1)
lbl_fn_800698DC_00000CE8:
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    bne lbl_fn_800698DC_00000D04
    lbz r0, 0x34(r1)
    addi r6, r1, 0x35
    clrlwi r5, r0, 25
    b lbl_fn_800698DC_00000D0C
lbl_fn_800698DC_00000D04:
    lwz r6, 0x3c(r1)
    lwz r5, 0x38(r1)
lbl_fn_800698DC_00000D0C:
    lbz r0, 0xc(r1)
    add r7, r6, r5
    stb r0, 0x8(r1)
    addi r3, r1, 0x40
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    bne lbl_fn_800698DC_00000D3C
    addi r26, r1, 0x41
    b lbl_fn_800698DC_00000D40
lbl_fn_800698DC_00000D3C:
    lwz r26, 0x48(r1)
lbl_fn_800698DC_00000D40:
    lwz r0, 0x0(r31)
    cmplwi r0, 0x40
    bge lbl_fn_800698DC_00000E08
    li r30, 0x0
    li r4, 0x12c
    lis r0, 0xffff
    stb r30, 0x50(r1)
    mr r3, r26
    stw r4, 0xd0(r1)
    stw r0, 0xd4(r1)
    bl strlen
    cmplwi r3, 0x7f
    blt lbl_fn_800698DC_00000D8C
    mr r4, r26
    addi r3, r1, 0x50
    li r5, 0x7e
    bl fn_8068236C
    stb r30, 0xce(r1)
    b lbl_fn_800698DC_00000DB4
lbl_fn_800698DC_00000D8C:
    addi r30, r1, 0x50
    cmplw r26, r30
    beq lbl_fn_800698DC_00000DB4
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r26
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800698DC_00000DB4:
    lwz r0, 0x0(r31)
    mulli r0, r0, 0x88
    add r0, r31, r0
    addic. r6, r0, 0x4
    beq lbl_fn_800698DC_00000DFC
    li r0, 0x10
    subi r5, r6, 0x4
    addi r4, r1, 0x4c
    mtctr r0
lbl_fn_800698DC_00000DD8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_800698DC_00000DD8
    lwz r0, 0xd0(r1)
    stw r0, 0x80(r6)
    lwz r0, 0xd4(r1)
    stw r0, 0x84(r6)
lbl_fn_800698DC_00000DFC:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_800698DC_00000E08:
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800698DC_00000E1C
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_800698DC_00000E1C:
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800698DC_00000E30
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_800698DC_00000E30:
    lmw r25, 0xe4(r1)
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80069BF4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    stw r6, 0x1c(r1)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_80069BF4_00000E98
    lbz r0, 0x0(r4)
    clrlwi r3, r0, 25
    b lbl_fn_80069BF4_00000E9C
lbl_fn_80069BF4_00000E98:
    lwz r3, 0x4(r4)
lbl_fn_80069BF4_00000E9C:
    cmplw r5, r3
    bgt lbl_fn_80069BF4_00000EC8
    lwz r0, 0x1c(r1)
    subf r4, r5, r3
    stw r4, 0x10(r1)
    addi r3, r1, 0x1c
    cmplw r4, r0
    bge lbl_fn_80069BF4_00000EC0
    addi r3, r1, 0x10
lbl_fn_80069BF4_00000EC0:
    lwz r4, 0x0(r3)
    b lbl_fn_80069BF4_00000ECC
lbl_fn_80069BF4_00000EC8:
    li r4, 0x0
lbl_fn_80069BF4_00000ECC:
    mr r3, r30
    bl fn_80013DC4
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r1)
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    bne lbl_fn_80069BF4_00000EF8
    lbz r0, 0x0(r28)
    addi r29, r28, 0x1
    clrlwi r28, r0, 25
    b lbl_fn_80069BF4_00000F00
lbl_fn_80069BF4_00000EF8:
    lwz r29, 0x8(r28)
    lwz r28, 0x4(r28)
lbl_fn_80069BF4_00000F00:
    cmplw r31, r28
    ble lbl_fn_80069BF4_00000F2C
    lis r4, lbl_80731398@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80731398@l
    addi r3, r3, __files@l
    addi r4, r4, 0x15
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80069BF4_00000F2C:
    lwz r0, 0x1c(r1)
    subf r3, r31, r28
    stw r3, 0x18(r1)
    add r29, r29, r31
    cmplw r3, r0
    addi r3, r1, 0x14
    bge lbl_fn_80069BF4_00000F4C
    addi r3, r1, 0x18
lbl_fn_80069BF4_00000F4C:
    lwz r4, 0x0(r3)
    mr r3, r30
    lbz r0, 0x8(r1)
    mr r6, r29
    stw r4, 0x14(r1)
    add r7, r29, r4
    addi r8, r1, 0xc
    li r4, 0x0
    stb r0, 0xc(r1)
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80069D48(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r4
    lwz r0, 0x0(r3)
    cmplwi r0, 0x40
    bge lbl_fn_80069D48_00001084
    lis r3, 0xff01
    li r30, 0x0
    subi r0, r3, 0x1
    li r4, 0x12c
    stb r30, 0x8(r1)
    mr r3, r29
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
    bl strlen
    cmplwi r3, 0x7f
    blt lbl_fn_80069D48_00001008
    mr r4, r29
    addi r3, r1, 0x8
    li r5, 0x7e
    bl fn_8068236C
    stb r30, 0x86(r1)
    b lbl_fn_80069D48_00001030
lbl_fn_80069D48_00001008:
    addi r30, r1, 0x8
    cmplw r29, r30
    beq lbl_fn_80069D48_00001030
    mr r3, r29
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r29
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80069D48_00001030:
    lwz r0, 0x0(r31)
    mulli r0, r0, 0x88
    add r0, r31, r0
    addic. r6, r0, 0x4
    beq lbl_fn_80069D48_00001078
    li r0, 0x10
    subi r5, r6, 0x4
    addi r4, r1, 0x4
    mtctr r0
lbl_fn_80069D48_00001054:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80069D48_00001054
    lwz r0, 0x88(r1)
    stw r0, 0x80(r6)
    lwz r0, 0x8c(r1)
    stw r0, 0x84(r6)
lbl_fn_80069D48_00001078:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_80069D48_00001084:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80069E50(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x30
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r30, r3
    beq lbl_fn_80069E50_00001158
    lis r4, lbl_80731390@ha
    lfs f30, lbl_808809F8
    lfd f29, lbl_80731390@l(r4)
    mr r26, r30
    lfs f31, lbl_808809F4
    addi r25, r3, 0x4
    li r27, 0x0
    lis r29, 0x4330
    b lbl_fn_80069E50_0000114C
lbl_fn_80069E50_000010FC:
    stw r27, 0xc(r1)
    fmr f4, f30
    fmr f5, f30
    lwz r3, lbl_8087EEB0
    stw r29, 0x8(r1)
    mr r4, r25
    lfs f1, lbl_808809F0
    lfd f0, 0x8(r1)
    lfs f3, lbl_808809FC
    li r6, 0x1
    fsubs f0, f0, f29
    lwz r5, 0x88(r26)
    lfs f6, lbl_80880A00
    li r7, 0x1
    li r8, 0x0
    fmadds f2, f30, f0, f31
    bl fn_800616C0
    addi r25, r25, 0x88
    addi r26, r26, 0x88
    addi r27, r27, 0x1
lbl_fn_80069E50_0000114C:
    lwz r0, 0x0(r30)
    cmplw r27, r0
    blt lbl_fn_80069E50_000010FC
lbl_fn_80069E50_00001158:
    addi r31, r30, 0x4
    lis r29, 0x7878
    b lbl_fn_80069E50_0000120C
lbl_fn_80069E50_00001164:
    lwz r3, 0x80(r31)
    subic. r0, r3, 0x1
    stw r0, 0x80(r31)
    bgt lbl_fn_80069E50_00001208
    addi r0, r30, 0x4
    addi r3, r29, 0x7879
    subf r0, r0, r31
    mulhw r0, r3, r0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r28, r0, r3
    mulli r0, r28, 0x88
    add r25, r30, r0
    addi r26, r25, 0x4
    b lbl_fn_80069E50_000011F0
lbl_fn_80069E50_000011A0:
    addi r0, r28, 0x1
    mulli r0, r0, 0x88
    add r3, r30, r0
    addi r27, r3, 0x4
    cmplw r27, r26
    beq lbl_fn_80069E50_000011D4
    mr r3, r27
    bl strlen
    mr r5, r3
    mr r3, r26
    mr r4, r27
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80069E50_000011D4:
    lwz r0, 0x10c(r25)
    addi r26, r26, 0x88
    stw r0, 0x84(r25)
    addi r28, r28, 0x1
    lwz r0, 0x110(r25)
    stw r0, 0x88(r25)
    addi r25, r25, 0x88
lbl_fn_80069E50_000011F0:
    lwz r3, 0x0(r30)
    subi r0, r3, 0x1
    cmplw r28, r0
    blt lbl_fn_80069E50_000011A0
    stw r0, 0x0(r30)
    b lbl_fn_80069E50_0000120C
lbl_fn_80069E50_00001208:
    addi r31, r31, 0x88
lbl_fn_80069E50_0000120C:
    lwz r0, 0x0(r30)
    mulli r0, r0, 0x88
    add r3, r30, r0
    addi r0, r3, 0x4
    cmplw r31, r0
    bne lbl_fn_80069E50_00001164
    addi r11, r1, 0x30
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8006A004(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8006A004_00001270
    lbz r0, 0x0(r3)
    addi r7, r3, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_8006A004_00001278
lbl_fn_8006A004_00001270:
    lwz r7, 0x8(r3)
    lwz r0, 0x4(r3)
lbl_fn_8006A004_00001278:
    cmplw r5, r0
    bgt lbl_fn_8006A004_000012E4
    add r9, r4, r6
    subf r8, r5, r0
    add r10, r7, r5
    subf r0, r4, r9
    b lbl_fn_8006A004_000012DC
lbl_fn_8006A004_00001294:
    mr r11, r10
    mr r12, r4
    mtctr r0
    cmplw r4, r9
    bge lbl_fn_8006A004_000012CC
lbl_fn_8006A004_000012A8:
    lbz r5, 0x0(r12)
    lbz r3, 0x0(r11)
    extsb r5, r5
    extsb r3, r3
    cmpw r5, r3
    bne lbl_fn_8006A004_000012D4
    addi r12, r12, 0x1
    addi r11, r11, 0x1
    bdnz lbl_fn_8006A004_000012A8
lbl_fn_8006A004_000012CC:
    subf r3, r7, r10
    blr
lbl_fn_8006A004_000012D4:
    addi r10, r10, 0x1
    subi r8, r8, 0x1
lbl_fn_8006A004_000012DC:
    cmplw r8, r6
    bge lbl_fn_8006A004_00001294
lbl_fn_8006A004_000012E4:
    li r3, -0x1
    blr
}

asm void fn_8006A09C(void)
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
    beq lbl_fn_8006A09C_00001328
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8006A09C_00001328
    mr r3, r30
    bl dtor_80084684
lbl_fn_8006A09C_00001328:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006A0F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8006A0F4_00001374
    lwz r4, 0x4c(r3)
    lwz r0, 0x50(r3)
    add r0, r4, r0
    stw r0, 0x4c(r3)
lbl_fn_8006A0F4_00001374:
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8006A0F4_000013AC
    lwz r5, 0x5c(r3)
    lwz r0, 0x54(r3)
    lwz r6, 0x4c(r3)
    add r0, r5, r0
    lwz r4, 0x58(r3)
    srawi r5, r6, 31
    add r0, r4, r0
    srwi r4, r0, 31
    subfc r0, r0, r6
    adde r0, r5, r4
    b lbl_fn_8006A0F4_000013BC
lbl_fn_8006A0F4_000013AC:
    lwz r0, 0x4c(r3)
    li r4, 0x1
    cntlzw r0, r0
    rlwnm r0, r4, r0, 31, 31
lbl_fn_8006A0F4_000013BC:
    cmpwi r0, 0x0
    beq lbl_fn_8006A0F4_00001440
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8006A0F4_000013EC
    lwz r5, 0x5c(r3)
    lwz r0, 0x54(r3)
    lwz r4, 0x58(r3)
    add r0, r5, r0
    add r0, r4, r0
    stw r0, 0x4c(r3)
    b lbl_fn_8006A0F4_000013F4
lbl_fn_8006A0F4_000013EC:
    li r0, 0x0
    stw r0, 0x4c(r3)
lbl_fn_8006A0F4_000013F4:
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8006A0F4_0000140C
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8006A0F4_0000140C:
    lwz r0, 0x64(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8006A0F4_00001424
    lwz r0, 0x38(r31)
    ori r0, r0, 0x4
    stw r0, 0x38(r31)
lbl_fn_8006A0F4_00001424:
    lwz r0, 0x68(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8006A0F4_00001438
    mr r3, r31
    bl fn_800D2338
lbl_fn_8006A0F4_00001438:
    li r0, 0x0
    stw r0, 0x48(r31)
lbl_fn_8006A0F4_00001440:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006A204(void)
{
    nofralloc
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8006A204_0000148C
    lwz r4, 0x5c(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x4c(r3)
    add r0, r4, r0
    lwz r3, 0x58(r3)
    srawi r4, r5, 31
    add r0, r3, r0
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    blr
lbl_fn_8006A204_0000148C:
    lwz r0, 0x4c(r3)
    li r3, 0x1
    cntlzw r0, r0
    rlwnm r3, r3, r0, 31, 31
    blr
}

asm void fn_8006A250(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r7, lbl_80731450@ha
    mr r29, r5
    addi r5, r7, lbl_80731450@l
    mr r27, r3
    mr r28, r4
    mr r30, r6
    mr r6, r5
    li r3, 0x80
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8006A250_0000154C
    mr r4, r27
    bl fn_800D1D3C
    lis r4, lbl_80777B88@ha
    lis r3, lbl_80777B48@ha
    addi r4, r4, lbl_80777B88@l
    stw r4, 0x0(r31)
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x48(r31)
    addi r3, r3, lbl_80777B48@l
    lfs f0, lbl_80880A08
    stw r4, 0x4c(r31)
    stw r0, 0x50(r31)
    stw r28, 0x54(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r4, 0x60(r31)
    stw r4, 0x64(r31)
    stw r4, 0x68(r31)
    stw r29, 0x6c(r31)
    stw r30, 0x70(r31)
    stfs f0, 0x74(r31)
    stw r3, 0x0(r31)
    stw r4, 0x78(r31)
lbl_fn_8006A250_0000154C:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006A318(void)
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
    beq lbl_fn_8006A318_000015A8
    beq lbl_fn_8006A318_00001598
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_8006A318_00001598:
    cmpwi r31, 0x0
    ble lbl_fn_8006A318_000015A8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8006A318_000015A8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006A374(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x48(r3)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    mr r31, r3
    cmpwi r0, 0x0
    stw r4, 0x10(r1)
    beq lbl_fn_8006A374_000017D8
    lwz r4, 0x58(r3)
    lwz r5, 0x4c(r3)
    cmpw r5, r4
    bge lbl_fn_8006A374_00001614
    lwz r4, 0x6c(r3)
    b lbl_fn_8006A374_00001760
lbl_fn_8006A374_00001614:
    lwz r6, 0x54(r3)
    add r0, r6, r4
    cmpw r5, r0
    blt lbl_fn_8006A374_0000162C
    lwz r4, 0x70(r3)
    b lbl_fn_8006A374_00001760
lbl_fn_8006A374_0000162C:
    subf r4, r4, r5
    xoris r0, r6, 0x8000
    stw r0, 0x14(r1)
    xoris r0, r4, 0x8000
    lis r4, lbl_80731408@ha
    lwz r28, 0x70(r3)
    stw r0, 0xc(r1)
    lis r30, lbl_80731410@ha
    lfd f3, lbl_80731408@l(r4)
    srwi r0, r28, 24
    lfd f0, 0x10(r1)
    lfd f2, 0x8(r1)
    fsubs f1, f0, f3
    stw r0, 0x14(r1)
    fsubs f3, f2, f3
    lwz r29, 0x6c(r3)
    lfd f2, lbl_80731410@l(r30)
    lfd f0, 0x10(r1)
    fdivs f31, f3, f1
    srwi r0, r29, 24
    stw r0, 0xc(r1)
    lfs f3, lbl_80880A0C
    lfd f1, 0x8(r1)
    fsubs f0, f0, f2
    fsubs f3, f3, f31
    fsubs f1, f1, f2
    fmuls f0, f31, f0
    fmadds f1, f3, f1, f0
    bl fn_80695D84
    extrwi r0, r28, 8, 8
    stw r0, 0x14(r1)
    extrwi r0, r29, 8, 8
    lfs f1, lbl_80880A0C
    lfd f2, lbl_80731410@l(r30)
    slwi r27, r3, 8
    lfd f0, 0x10(r1)
    fsubs f3, f1, f31
    stw r0, 0xc(r1)
    fsubs f0, f0, f2
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f31, f0
    fmadds f1, f3, f1, f0
    bl fn_80695D84
    extrwi r0, r28, 8, 16
    stw r0, 0x14(r1)
    extrwi r0, r29, 8, 16
    lfs f1, lbl_80880A0C
    lfd f2, lbl_80731410@l(r30)
    or r27, r27, r3
    lfd f0, 0x10(r1)
    fsubs f3, f1, f31
    stw r0, 0xc(r1)
    slwi r27, r27, 8
    fsubs f0, f0, f2
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f31, f0
    fmadds f1, f3, f1, f0
    bl fn_80695D84
    clrlwi r0, r28, 24
    stw r0, 0x14(r1)
    clrlwi r0, r29, 24
    lfs f1, lbl_80880A0C
    lfd f2, lbl_80731410@l(r30)
    or r27, r27, r3
    lfd f0, 0x10(r1)
    fsubs f3, f1, f31
    stw r0, 0xc(r1)
    slwi r27, r27, 8
    fsubs f0, f0, f2
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f31, f0
    fmadds f1, f3, f1, f0
    bl fn_80695D84
    or r4, r27, r3
lbl_fn_8006A374_00001760:
    lwz r0, 0x78(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8006A374_00001778
    lwz r3, lbl_8087EEB0
    li r0, 0x13
    stw r0, 0xa0(r3)
lbl_fn_8006A374_00001778:
    lwz r6, lbl_8087EEE0
    lis r5, lbl_80731408@ha
    lfs f1, lbl_80880A10
    lwz r3, 0x3c(r6)
    lwz r0, 0x40(r6)
    fmr f2, f1
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_80731408@l(r5)
    stw r0, 0x14(r1)
    lfd f3, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f4, f3, f5
    lwz r3, lbl_8087EEB0
    fsubs f5, f0, f5
    lfs f3, 0x74(r31)
    bl fn_80060D58
    lwz r0, 0x78(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8006A374_000017D8
    lwz r3, lbl_8087EEB0
    li r0, 0x12
    stw r0, 0xa0(r3)
lbl_fn_8006A374_000017D8:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8006A5A8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r30, lbl_80731450@ha
    mr r26, r5
    addi r5, r30, lbl_80731450@l
    mr r31, r3
    mr r25, r4
    mr r27, r6
    mr r28, r7
    mr r6, r5
    li r3, 0xb0
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8006A5A8_000018F0
    mr r4, r31
    bl fn_800D1D3C
    lis r3, lbl_80777B88@ha
    lis r4, lbl_80777B08@ha
    addi r3, r3, lbl_80777B88@l
    stw r3, 0x0(r29)
    li r31, 0x0
    li r5, 0x1
    stw r31, 0x48(r29)
    addi r4, r4, lbl_80777B08@l
    lfs f0, lbl_80880A08
    li r0, 0xe
    stw r31, 0x4c(r29)
    addi r3, r29, 0x7c
    stw r5, 0x50(r29)
    stw r25, 0x54(r29)
    stw r31, 0x58(r29)
    stw r31, 0x5c(r29)
    stw r31, 0x60(r29)
    stw r31, 0x64(r29)
    stw r31, 0x68(r29)
    stw r26, 0x6c(r29)
    stw r27, 0x70(r29)
    stfs f0, 0x74(r29)
    stw r4, 0x0(r29)
    stw r0, 0x78(r29)
    bl fn_800D5738
    cmpwi r28, 0x0
    stw r31, 0xac(r29)
    beq lbl_fn_8006A5A8_000018E8
    lwz r7, lbl_8087EEE0
    addi r5, r30, lbl_80731450@l
    addi r8, r5, 0x1
    addi r3, r29, 0x7c
    lwz r4, 0x3c(r7)
    li r6, 0x6
    lwz r5, 0x40(r7)
    li r7, 0x0
    bl fn_800D5B58
    b lbl_fn_8006A5A8_000018F0
lbl_fn_8006A5A8_000018E8:
    addi r3, r29, 0x7c
    bl fn_800D5A3C
lbl_fn_8006A5A8_000018F0:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8006A6BC(void)
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
    beq lbl_fn_8006A6BC_00001960
    li r4, -0x1
    addi r3, r3, 0x7c
    bl fn_800D5808
    cmpwi r30, 0x0
    beq lbl_fn_8006A6BC_00001950
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_8006A6BC_00001950:
    cmpwi r31, 0x0
    ble lbl_fn_8006A6BC_00001960
    mr r3, r30
    bl dtor_80084684
lbl_fn_8006A6BC_00001960:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006A72C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8006A734(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x48(r3)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    mr r31, r3
    cmpwi r0, 0x0
    stw r4, 0x10(r1)
    beq lbl_fn_8006A734_00001B30
    lwz r4, 0x58(r3)
    lwz r5, 0x4c(r3)
    cmpw r5, r4
    bge lbl_fn_8006A734_000019D4
    lwz r4, 0x6c(r3)
    b lbl_fn_8006A734_00001B20
lbl_fn_8006A734_000019D4:
    lwz r6, 0x54(r3)
    add r0, r6, r4
    cmpw r5, r0
    blt lbl_fn_8006A734_000019EC
    lwz r4, 0x70(r3)
    b lbl_fn_8006A734_00001B20
lbl_fn_8006A734_000019EC:
    subf r4, r4, r5
    xoris r0, r6, 0x8000
    stw r0, 0x14(r1)
    xoris r0, r4, 0x8000
    lis r4, lbl_80731408@ha
    lwz r28, 0x70(r3)
    stw r0, 0xc(r1)
    lis r30, lbl_80731410@ha
    lfd f3, lbl_80731408@l(r4)
    srwi r0, r28, 24
    lfd f0, 0x10(r1)
    lfd f2, 0x8(r1)
    fsubs f1, f0, f3
    stw r0, 0x14(r1)
    fsubs f3, f2, f3
    lwz r29, 0x6c(r3)
    lfd f2, lbl_80731410@l(r30)
    lfd f0, 0x10(r1)
    fdivs f31, f3, f1
    srwi r0, r29, 24
    stw r0, 0xc(r1)
    lfs f3, lbl_80880A0C
    lfd f1, 0x8(r1)
    fsubs f0, f0, f2
    fsubs f3, f3, f31
    fsubs f1, f1, f2
    fmuls f0, f31, f0
    fmadds f1, f3, f1, f0
    bl fn_80695D84
    extrwi r0, r28, 8, 8
    stw r0, 0x14(r1)
    extrwi r0, r29, 8, 8
    lfs f1, lbl_80880A0C
    lfd f2, lbl_80731410@l(r30)
    slwi r27, r3, 8
    lfd f0, 0x10(r1)
    fsubs f3, f1, f31
    stw r0, 0xc(r1)
    fsubs f0, f0, f2
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f31, f0
    fmadds f1, f3, f1, f0
    bl fn_80695D84
    extrwi r0, r28, 8, 16
    stw r0, 0x14(r1)
    extrwi r0, r29, 8, 16
    lfs f1, lbl_80880A0C
    lfd f2, lbl_80731410@l(r30)
    or r27, r27, r3
    lfd f0, 0x10(r1)
    fsubs f3, f1, f31
    stw r0, 0xc(r1)
    slwi r27, r27, 8
    fsubs f0, f0, f2
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f31, f0
    fmadds f1, f3, f1, f0
    bl fn_80695D84
    clrlwi r0, r28, 24
    stw r0, 0x14(r1)
    clrlwi r0, r29, 24
    lfs f1, lbl_80880A0C
    lfd f2, lbl_80731410@l(r30)
    or r27, r27, r3
    lfd f0, 0x10(r1)
    fsubs f3, f1, f31
    stw r0, 0xc(r1)
    slwi r27, r27, 8
    fsubs f0, f0, f2
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f31, f0
    fmadds f1, f3, f1, f0
    bl fn_80695D84
    or r4, r27, r3
lbl_fn_8006A734_00001B20:
    lwz r3, lbl_8087EEB0
    addi r5, r31, 0x7c
    lfs f1, 0x74(r31)
    bl fn_8005ED6C
lbl_fn_8006A734_00001B30:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8006A900(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r4, r31, 0x7c
    lwz r3, lbl_8087EFB4
    lwz r5, 0x78(r31)
    bl fn_800C1660
    li r0, 0x1
    stw r0, 0xac(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006A940(void)
{
    nofralloc
    b fn_8006A0F4
}

asm void fn_8006A944(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8006A94C(void)
{
    nofralloc
    blr
}

asm void fn_8006A950(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl strlen
    li r0, 0x2f
    mtctr r3
    cmplwi r3, 0x0
    ble lbl_fn_8006A950_00001BE0
lbl_fn_8006A950_00001BC8:
    lbz r3, 0x0(r31)
    cmpwi r3, 0x5c
    bne lbl_fn_8006A950_00001BD8
    stb r0, 0x0(r31)
lbl_fn_8006A950_00001BD8:
    addi r31, r31, 0x1
    bdnz lbl_fn_8006A950_00001BC8
lbl_fn_8006A950_00001BE0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006A9A4(void)
{
    nofralloc
    addi r7, r3, 0x1
    li r8, 0x0
    li r5, 0x2f
    b lbl_fn_8006A9A4_00001C48
lbl_fn_8006A9A4_00001C04:
    cntlzw r0, r4
    srwi. r6, r0, 5
    beq lbl_fn_8006A9A4_00001C18
    mr r4, r7
    b lbl_fn_8006A9A4_00001C1C
lbl_fn_8006A9A4_00001C18:
    lwz r4, 0x8(r3)
lbl_fn_8006A9A4_00001C1C:
    lbzx r0, r4, r8
    extsb r0, r0
    cmpwi r0, 0x5c
    bne lbl_fn_8006A9A4_00001C44
    cmpwi r6, 0x0
    beq lbl_fn_8006A9A4_00001C3C
    mr r4, r7
    b lbl_fn_8006A9A4_00001C40
lbl_fn_8006A9A4_00001C3C:
    lwz r4, 0x8(r3)
lbl_fn_8006A9A4_00001C40:
    stbx r5, r4, r8
lbl_fn_8006A9A4_00001C44:
    addi r8, r8, 0x1
lbl_fn_8006A9A4_00001C48:
    lwz r0, 0x0(r3)
    srwi. r4, r0, 31
    beq lbl_fn_8006A9A4_00001C5C
    lwz r0, 0x4(r3)
    b lbl_fn_8006A9A4_00001C64
lbl_fn_8006A9A4_00001C5C:
    lbz r0, 0x0(r3)
    clrlwi r0, r0, 25
lbl_fn_8006A9A4_00001C64:
    cmplw r8, r0
    blt lbl_fn_8006A9A4_00001C04
    blr
}

asm void fn_8006AA20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    stw r31, 0x1c(r1)
    bl fn_8006AB54
    lwz r3, lbl_8087F518
    cmpwi r3, 0x0
    beq lbl_fn_8006AA20_00001CD8
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006AA20_00001CAC
    addi r4, r1, 0x9
    b lbl_fn_8006AA20_00001CB0
lbl_fn_8006AA20_00001CAC:
    lwz r4, 0x10(r1)
lbl_fn_8006AA20_00001CB0:
    bl fn_8046F4D4
    cmpwi r3, 0x0
    beq lbl_fn_8006AA20_00001CD8
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006AA20_00001CD0
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_8006AA20_00001CD0:
    li r3, 0x1
    b lbl_fn_8006AA20_00001D90
lbl_fn_8006AA20_00001CD8:
    addi r7, r1, 0x9
    li r6, 0x0
    li r4, 0x2f
    b lbl_fn_8006AA20_00001D2C
lbl_fn_8006AA20_00001CE8:
    cntlzw r0, r3
    srwi. r5, r0, 5
    beq lbl_fn_8006AA20_00001CFC
    mr r3, r7
    b lbl_fn_8006AA20_00001D00
lbl_fn_8006AA20_00001CFC:
    lwz r3, 0x10(r1)
lbl_fn_8006AA20_00001D00:
    lbzx r0, r3, r6
    extsb r0, r0
    cmpwi r0, 0x5c
    bne lbl_fn_8006AA20_00001D28
    cmpwi r5, 0x0
    beq lbl_fn_8006AA20_00001D20
    mr r3, r7
    b lbl_fn_8006AA20_00001D24
lbl_fn_8006AA20_00001D20:
    lwz r3, 0x10(r1)
lbl_fn_8006AA20_00001D24:
    stbx r4, r3, r6
lbl_fn_8006AA20_00001D28:
    addi r6, r6, 0x1
lbl_fn_8006AA20_00001D2C:
    lwz r0, 0x8(r1)
    srwi. r3, r0, 31
    beq lbl_fn_8006AA20_00001D40
    lwz r0, 0xc(r1)
    b lbl_fn_8006AA20_00001D48
lbl_fn_8006AA20_00001D40:
    lbz r0, 0x8(r1)
    clrlwi r0, r0, 25
lbl_fn_8006AA20_00001D48:
    cmplw r6, r0
    blt lbl_fn_8006AA20_00001CE8
    cmpwi r3, 0x0
    bne lbl_fn_8006AA20_00001D60
    addi r3, r1, 0x9
    b lbl_fn_8006AA20_00001D64
lbl_fn_8006AA20_00001D60:
    lwz r3, 0x10(r1)
lbl_fn_8006AA20_00001D64:
    bl fn_805F9EF0
    lwz r0, 0x8(r1)
    subfic r4, r3, -0x1
    addi r3, r3, 0x1
    srwi. r0, r0, 31
    or r0, r4, r3
    srwi r31, r0, 31
    beq lbl_fn_8006AA20_00001D8C
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_8006AA20_00001D8C:
    mr r3, r31
lbl_fn_8006AA20_00001D90:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006AB54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    addi r31, r1, 0x10
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    mr r3, r29
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    bl strlen
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r3, r28
    mr r4, r31
    bl fn_8046CC90
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006AB54_00001E38
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8006AB54_00001E38:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8006AC08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, -0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_8006AC08_00001E94
    lbz r0, 0x0(r4)
    addi r6, r4, 0x1
    clrlwi r5, r0, 25
    b lbl_fn_8006AC08_00001E9C
lbl_fn_8006AC08_00001E94:
    lwz r6, 0x8(r4)
    lwz r5, 0x4(r4)
lbl_fn_8006AC08_00001E9C:
    cmpwi r5, 0x0
    beq lbl_fn_8006AC08_00001EE0
    subi r5, r5, 0x1
    li r0, -0x1
    cmplw r5, r0
    bge lbl_fn_8006AC08_00001EB8
    mr r7, r5
lbl_fn_8006AC08_00001EB8:
    add r5, r6, r7
lbl_fn_8006AC08_00001EBC:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x2e
    bne lbl_fn_8006AC08_00001ED0
    subf r5, r6, r5
    b lbl_fn_8006AC08_00001EE4
lbl_fn_8006AC08_00001ED0:
    cmplw r5, r6
    ble lbl_fn_8006AC08_00001EE0
    subi r5, r5, 0x1
    b lbl_fn_8006AC08_00001EBC
lbl_fn_8006AC08_00001EE0:
    li r5, -0x1
lbl_fn_8006AC08_00001EE4:
    addis r0, r5, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_8006AC08_00001F04
    mr r3, r31
    addi r5, r5, 0x1
    li r6, -0x1
    bl fn_80069BF4
    b lbl_fn_8006AC08_00001F58
lbl_fn_8006AC08_00001F04:
    lis r30, lbl_8073148C@ha
    li r0, 0x0
    stw r0, 0x0(r3)
    addi r30, r30, lbl_8073148C@l
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r30
    bl strlen
    mr r29, r3
    mr r3, r31
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r30
    add r7, r30, r29
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
lbl_fn_8006AC08_00001F58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006AD24(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, -0x1
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    mr r30, r4
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_8006AD24_00001FB0
    lbz r0, 0x0(r3)
    addi r4, r3, 0x1
    clrlwi r3, r0, 25
    b lbl_fn_8006AD24_00001FB8
lbl_fn_8006AD24_00001FB0:
    lwz r4, 0x8(r3)
    lwz r3, 0x4(r3)
lbl_fn_8006AD24_00001FB8:
    cmpwi r3, 0x0
    beq lbl_fn_8006AD24_00001FFC
    subi r3, r3, 0x1
    li r0, -0x1
    cmplw r3, r0
    bge lbl_fn_8006AD24_00001FD4
    mr r5, r3
lbl_fn_8006AD24_00001FD4:
    add r3, r4, r5
lbl_fn_8006AD24_00001FD8:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2e
    bne lbl_fn_8006AD24_00001FEC
    subf r5, r4, r3
    b lbl_fn_8006AD24_00002000
lbl_fn_8006AD24_00001FEC:
    cmplw r3, r4
    ble lbl_fn_8006AD24_00001FFC
    subi r3, r3, 0x1
    b lbl_fn_8006AD24_00001FD8
lbl_fn_8006AD24_00001FFC:
    li r5, -0x1
lbl_fn_8006AD24_00002000:
    addis r0, r5, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_8006AD24_000020E4
    addi r6, r5, 0x1
    mr r4, r31
    addi r3, r1, 0x30
    li r5, 0x0
    bl fn_80069BF4
    mr r5, r30
    addi r3, r1, 0x24
    addi r4, r1, 0x30
    bl fn_8006AFF8
    lwz r0, 0x0(r31)
    srwi. r4, r0, 31
    bne lbl_fn_8006AD24_00002060
    lwz r3, 0x24(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8006AD24_00002060
    lwz r0, 0x28(r1)
    stw r0, 0x4(r31)
    stw r3, 0x0(r31)
    lwz r0, 0x2c(r1)
    stw r0, 0x8(r31)
    b lbl_fn_8006AD24_000020B8
lbl_fn_8006AD24_00002060:
    cmpwi r4, 0x0
    beq lbl_fn_8006AD24_00002070
    lwz r5, 0x4(r31)
    b lbl_fn_8006AD24_00002078
lbl_fn_8006AD24_00002070:
    lbz r0, 0x0(r31)
    clrlwi r5, r0, 25
lbl_fn_8006AD24_00002078:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006AD24_00002094
    lbz r0, 0x24(r1)
    addi r6, r1, 0x25
    clrlwi r4, r0, 25
    b lbl_fn_8006AD24_0000209C
lbl_fn_8006AD24_00002094:
    lwz r6, 0x2c(r1)
    lwz r4, 0x28(r1)
lbl_fn_8006AD24_0000209C:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    mr r3, r31
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8006AD24_000020B8:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006AD24_000020CC
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_8006AD24_000020CC:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006AD24_0000216C
    lwz r3, 0x38(r1)
    bl dtor_80084684
    b lbl_fn_8006AD24_0000216C
lbl_fn_8006AD24_000020E4:
    lis r4, lbl_8073148C@ha
    mr r5, r30
    addi r4, r4, lbl_8073148C@l
    addi r3, r1, 0x18
    addi r4, r4, 0x1c
    bl fn_8006AF38
    lwz r0, 0x0(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8006AD24_00002114
    lbz r0, 0x0(r31)
    clrlwi r4, r0, 25
    b lbl_fn_8006AD24_00002118
lbl_fn_8006AD24_00002114:
    lwz r4, 0x4(r31)
lbl_fn_8006AD24_00002118:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006AD24_00002134
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r5, r0, 25
    b lbl_fn_8006AD24_0000213C
lbl_fn_8006AD24_00002134:
    lwz r6, 0x20(r1)
    lwz r5, 0x1c(r1)
lbl_fn_8006AD24_0000213C:
    lbz r0, 0xc(r1)
    add r7, r6, r5
    stb r0, 0x8(r1)
    mr r3, r31
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006AD24_0000216C
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8006AD24_0000216C:
    mr r3, r31
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8006AF38(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stmw r27, 0x1c(r1)
    mr r28, r4
    mr r27, r3
    mr r30, r5
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r28
    bl strlen
    lwz r0, 0x0(r30)
    mr r31, r3
    srwi. r0, r0, 31
    bne lbl_fn_8006AF38_000021DC
    lbz r0, 0x0(r30)
    addi r29, r30, 0x1
    clrlwi r30, r0, 25
    b lbl_fn_8006AF38_000021E4
lbl_fn_8006AF38_000021DC:
    lwz r29, 0x8(r30)
    lwz r30, 0x4(r30)
lbl_fn_8006AF38_000021E4:
    mr r3, r27
    add r4, r31, r30
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r27
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r31
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lbz r0, 0xc(r1)
    mr r4, r31
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r30
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8006AFF8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stmw r27, 0x1c(r1)
    mr r27, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_8006AFF8_00002288
    lbz r0, 0x0(r4)
    addi r29, r4, 0x1
    clrlwi r31, r0, 25
    b lbl_fn_8006AFF8_00002290
lbl_fn_8006AFF8_00002288:
    lwz r29, 0x8(r4)
    lwz r31, 0x4(r4)
lbl_fn_8006AFF8_00002290:
    lwz r0, 0x0(r5)
    srwi. r0, r0, 31
    bne lbl_fn_8006AFF8_000022AC
    lbz r0, 0x0(r5)
    addi r28, r5, 0x1
    clrlwi r30, r0, 25
    b lbl_fn_8006AFF8_000022B4
lbl_fn_8006AFF8_000022AC:
    lwz r28, 0x8(r5)
    lwz r30, 0x4(r5)
lbl_fn_8006AFF8_000022B4:
    mr r3, r27
    add r4, r31, r30
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r27
    stb r0, 0x10(r1)
    mr r6, r29
    add r7, r29, r31
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lbz r0, 0xc(r1)
    mr r4, r31
    stb r0, 0x8(r1)
    mr r6, r28
    add r7, r28, r30
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8006B0C8(void)
{
    nofralloc
    lwz r0, 0x0(r4)
    addi r9, r4, 0x1
    li r8, 0x0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi r10, r0, 5
    cntlzw r0, r10
    srwi r7, r0, 5
    b lbl_fn_8006B0C8_00002398
lbl_fn_8006B0C8_00002344:
    cmpwi r7, 0x0
    beq lbl_fn_8006B0C8_00002358
    lbz r0, 0x0(r4)
    clrlwi r5, r0, 25
    b lbl_fn_8006B0C8_0000235C
lbl_fn_8006B0C8_00002358:
    lwz r5, 0x4(r4)
lbl_fn_8006B0C8_0000235C:
    cmpwi r7, 0x0
    subi r0, r5, 0x1
    subf r6, r8, r0
    beq lbl_fn_8006B0C8_00002374
    mr r5, r9
    b lbl_fn_8006B0C8_00002378
lbl_fn_8006B0C8_00002374:
    lwz r5, 0x8(r4)
lbl_fn_8006B0C8_00002378:
    lbzx r0, r5, r6
    extsb r0, r0
    cmpwi r0, 0x5c
    beq lbl_fn_8006B0C8_000023BC
    cmpwi r0, 0x2f
    bne lbl_fn_8006B0C8_00002394
    b lbl_fn_8006B0C8_000023BC
lbl_fn_8006B0C8_00002394:
    addi r8, r8, 0x1
lbl_fn_8006B0C8_00002398:
    cmpwi r10, 0x0
    beq lbl_fn_8006B0C8_000023A8
    lwz r0, 0x4(r4)
    b lbl_fn_8006B0C8_000023B0
lbl_fn_8006B0C8_000023A8:
    lbz r0, 0x0(r4)
    clrlwi r0, r0, 25
lbl_fn_8006B0C8_000023B0:
    cmplw r8, r0
    blt lbl_fn_8006B0C8_00002344
    li r6, -0x1
lbl_fn_8006B0C8_000023BC:
    li r5, 0x0
    b fn_80069BF4
}

asm void fn_8006B174(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addi r9, r4, 0x1
    li r8, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x0(r4)
    srwi r10, r0, 31
    cntlzw r0, r10
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi r11, r0, 5
    cntlzw r0, r11
    srwi r6, r0, 5
    b lbl_fn_8006B174_00002460
lbl_fn_8006B174_0000240C:
    cmpwi r6, 0x0
    beq lbl_fn_8006B174_00002420
    lbz r0, 0x0(r4)
    clrlwi r5, r0, 25
    b lbl_fn_8006B174_00002424
lbl_fn_8006B174_00002420:
    lwz r5, 0x4(r4)
lbl_fn_8006B174_00002424:
    cmpwi r6, 0x0
    subi r0, r5, 0x1
    subf r7, r8, r0
    beq lbl_fn_8006B174_0000243C
    mr r5, r9
    b lbl_fn_8006B174_00002440
lbl_fn_8006B174_0000243C:
    lwz r5, 0x8(r4)
lbl_fn_8006B174_00002440:
    lbzx r0, r5, r7
    extsb r0, r0
    cmpwi r0, 0x5c
    beq lbl_fn_8006B174_00002484
    cmpwi r0, 0x2f
    bne lbl_fn_8006B174_0000245C
    b lbl_fn_8006B174_00002484
lbl_fn_8006B174_0000245C:
    addi r8, r8, 0x1
lbl_fn_8006B174_00002460:
    cmpwi r11, 0x0
    beq lbl_fn_8006B174_00002470
    lwz r0, 0x4(r4)
    b lbl_fn_8006B174_00002478
lbl_fn_8006B174_00002470:
    lbz r0, 0x0(r4)
    clrlwi r0, r0, 25
lbl_fn_8006B174_00002478:
    cmplw r8, r0
    blt lbl_fn_8006B174_0000240C
    li r7, -0x1
lbl_fn_8006B174_00002484:
    addis r0, r7, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_8006B174_000024FC
    cmpwi r10, 0x0
    bne lbl_fn_8006B174_000024B4
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    b lbl_fn_8006B174_00002510
lbl_fn_8006B174_000024B4:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r30
    lwz r4, 0x4(r4)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r31)
    lwz r0, 0x4(r31)
    add r7, r6, r0
    bl fn_80013F78
    b lbl_fn_8006B174_00002510
lbl_fn_8006B174_000024FC:
    mr r3, r30
    mr r4, r31
    addi r5, r7, 0x1
    li r6, -0x1
    bl fn_80069BF4
lbl_fn_8006B174_00002510:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006B2D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r8, -0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x0(r4)
    srwi. r7, r0, 31
    bne lbl_fn_8006B2D8_00002564
    lbz r0, 0x0(r4)
    addi r6, r4, 0x1
    clrlwi r5, r0, 25
    b lbl_fn_8006B2D8_0000256C
lbl_fn_8006B2D8_00002564:
    lwz r6, 0x8(r4)
    lwz r5, 0x4(r4)
lbl_fn_8006B2D8_0000256C:
    cmpwi r5, 0x0
    beq lbl_fn_8006B2D8_000025B0
    subi r5, r5, 0x1
    li r0, -0x1
    cmplw r5, r0
    bge lbl_fn_8006B2D8_00002588
    mr r8, r5
lbl_fn_8006B2D8_00002588:
    add r5, r6, r8
lbl_fn_8006B2D8_0000258C:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x2e
    bne lbl_fn_8006B2D8_000025A0
    subf r6, r6, r5
    b lbl_fn_8006B2D8_000025B4
lbl_fn_8006B2D8_000025A0:
    cmplw r5, r6
    ble lbl_fn_8006B2D8_000025B0
    subi r5, r5, 0x1
    b lbl_fn_8006B2D8_0000258C
lbl_fn_8006B2D8_000025B0:
    li r6, -0x1
lbl_fn_8006B2D8_000025B4:
    addis r0, r6, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_8006B2D8_000025D4
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl fn_80069BF4
    b lbl_fn_8006B2D8_0000263C
lbl_fn_8006B2D8_000025D4:
    cmpwi r7, 0x0
    bne lbl_fn_8006B2D8_000025F8
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    b lbl_fn_8006B2D8_0000263C
lbl_fn_8006B2D8_000025F8:
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r30
    lwz r4, 0x4(r4)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r31)
    lwz r0, 0x4(r31)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8006B2D8_0000263C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006B404(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80731460@ha
    addi r31, r31, lbl_80731460@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x18(r31)
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8006B404_000026A0
    lwz r0, lbl_8087EEC0
    li r5, 0x3
    slwi r0, r0, 2
    lwzx r4, r31, r0
    bl fn_8068236C
    mr r3, r30
    b lbl_fn_8006B404_000026A4
lbl_fn_8006B404_000026A0:
    mr r3, r30
lbl_fn_8006B404_000026A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006B46C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    addi r3, r1, 0x10
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_8006B46C_000026EC
    addi r4, r4, 0x1
    b lbl_fn_8006B46C_000026F0
lbl_fn_8006B46C_000026EC:
    lwz r4, 0x8(r4)
lbl_fn_8006B46C_000026F0:
    bl strcpy
    lis r31, lbl_80731460@ha
    addi r3, r1, 0x10
    addi r31, r31, lbl_80731460@l
    lwz r4, 0x18(r31)
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_8006B46C_00002724
    lwz r0, lbl_8087EEC0
    li r5, 0x3
    slwi r0, r0, 2
    lwzx r4, r31, r0
    bl fn_8068236C
lbl_fn_8006B46C_00002724:
    li r0, 0x0
    stw r0, 0x0(r30)
    addi r3, r1, 0x10
    stw r0, 0x4(r30)
    stw r0, 0x8(r30)
    bl strlen
    mr r31, r3
    mr r3, r30
    mr r4, r31
    bl fn_80013DC4
    addi r6, r1, 0x10
    lbz r0, 0xc(r1)
    mr r7, r6
    stb r0, 0x8(r1)
    mr r3, r30
    addi r8, r1, 0x8
    add r7, r7, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8006B53C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8087EEC4
    lwz r31, lbl_8087EEC0
    cmpwi r0, 0x0
    blt lbl_fn_8006B53C_000027B8
    cmpwi r0, 0x6
    bge lbl_fn_8006B53C_000027B8
    stw r0, lbl_8087EEC0
lbl_fn_8006B53C_000027B8:
    bl fn_8006B46C
    cmpwi r31, 0x0
    blt lbl_fn_8006B53C_000027D0
    cmpwi r31, 0x6
    bge lbl_fn_8006B53C_000027D0
    stw r31, lbl_8087EEC0
lbl_fn_8006B53C_000027D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006B594(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lwz r6, 0x0(r4)
    stw r0, 0x84(r1)
    srwi. r0, r6, 31
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    bne lbl_fn_8006B594_0000282C
    lwz r5, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_8006B594_0000286C
lbl_fn_8006B594_0000282C:
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r4, 0x4(r4)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r5, 0x54(r1)
    mr r3, r31
    stb r5, 0x50(r1)
    addi r8, r1, 0x50
    lwz r6, 0x8(r28)
    li r4, 0x0
    lwz r0, 0x4(r28)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8006B594_0000286C:
    lwz r4, lbl_8087EEC0
    li r0, 0x0
    lis r3, lbl_80731460@ha
    stw r0, 0x58(r1)
    slwi r4, r4, 2
    addi r29, r1, 0x58
    addi r3, r3, lbl_80731460@l
    stw r0, 0x5c(r1)
    lwzx r30, r3, r4
    stw r0, 0x60(r1)
    mr r3, r30
    bl strlen
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x4c(r1)
    mr r3, r29
    stb r0, 0x48(r1)
    mr r6, r30
    add r7, r30, r28
    addi r8, r1, 0x48
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x58(r1)
    lis r3, lbl_8073148C@ha
    addi r3, r3, lbl_8073148C@l
    srwi. r0, r0, 31
    addi r29, r3, 0x1c
    bne lbl_fn_8006B594_000028F4
    lbz r0, 0x58(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8006B594_000028F8
lbl_fn_8006B594_000028F4:
    lwz r28, 0x5c(r1)
lbl_fn_8006B594_000028F8:
    lbz r0, 0x44(r1)
    mr r3, r29
    stb r0, 0x40(r1)
    bl strlen
    mr r0, r3
    mr r4, r28
    mr r6, r29
    addi r3, r1, 0x58
    add r7, r29, r0
    addi r8, r1, 0x40
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006B594_00002944
    lbz r0, 0x58(r1)
    addi r4, r1, 0x59
    clrlwi r6, r0, 25
    b lbl_fn_8006B594_0000294C
lbl_fn_8006B594_00002944:
    lwz r4, 0x60(r1)
    lwz r6, 0x5c(r1)
lbl_fn_8006B594_0000294C:
    mr r3, r31
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    mr r29, r3
    cmplwi r0, 0xffff
    beq lbl_fn_8006B594_000029BC
    lwz r0, 0x58(r1)
    lis r30, lbl_8073148C@ha
    addi r30, r30, lbl_8073148C@l
    srwi. r0, r0, 31
    bne lbl_fn_8006B594_00002988
    lbz r0, 0x58(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8006B594_0000298C
lbl_fn_8006B594_00002988:
    lwz r28, 0x5c(r1)
lbl_fn_8006B594_0000298C:
    lbz r0, 0x3c(r1)
    mr r3, r30
    stb r0, 0x38(r1)
    bl strlen
    mr r0, r3
    mr r3, r31
    mr r4, r29
    mr r6, r30
    subi r5, r28, 0x1
    add r7, r30, r0
    addi r8, r1, 0x38
    bl fn_80013F78
lbl_fn_8006B594_000029BC:
    lwz r0, 0x58(r1)
    lis r3, lbl_80731460@ha
    lwz r4, lbl_8087EEC4
    addi r3, r3, lbl_80731460@l
    srwi. r0, r0, 31
    slwi r0, r4, 2
    lwzx r29, r3, r0
    bne lbl_fn_8006B594_000029E8
    lbz r0, 0x58(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8006B594_000029EC
lbl_fn_8006B594_000029E8:
    lwz r28, 0x5c(r1)
lbl_fn_8006B594_000029EC:
    lbz r0, 0x34(r1)
    mr r3, r29
    stb r0, 0x30(r1)
    bl strlen
    mr r0, r3
    mr r5, r28
    mr r6, r29
    addi r3, r1, 0x58
    add r7, r29, r0
    addi r8, r1, 0x30
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x58(r1)
    lis r3, lbl_8073148C@ha
    addi r3, r3, lbl_8073148C@l
    srwi. r0, r0, 31
    addi r29, r3, 0x1c
    bne lbl_fn_8006B594_00002A40
    lbz r0, 0x58(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8006B594_00002A44
lbl_fn_8006B594_00002A40:
    lwz r28, 0x5c(r1)
lbl_fn_8006B594_00002A44:
    lbz r0, 0x2c(r1)
    mr r3, r29
    stb r0, 0x28(r1)
    bl strlen
    mr r0, r3
    mr r4, r28
    mr r6, r29
    addi r3, r1, 0x58
    add r7, r29, r0
    addi r8, r1, 0x28
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006B594_00002A90
    lbz r0, 0x58(r1)
    addi r4, r1, 0x59
    clrlwi r6, r0, 25
    b lbl_fn_8006B594_00002A98
lbl_fn_8006B594_00002A90:
    lwz r4, 0x60(r1)
    lwz r6, 0x5c(r1)
lbl_fn_8006B594_00002A98:
    mr r3, r31
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    mr r29, r3
    cmplwi r0, 0xffff
    beq lbl_fn_8006B594_00002B08
    lwz r0, 0x58(r1)
    lis r30, lbl_8073148C@ha
    addi r30, r30, lbl_8073148C@l
    srwi. r0, r0, 31
    bne lbl_fn_8006B594_00002AD4
    lbz r0, 0x58(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8006B594_00002AD8
lbl_fn_8006B594_00002AD4:
    lwz r28, 0x5c(r1)
lbl_fn_8006B594_00002AD8:
    lbz r0, 0x24(r1)
    mr r3, r30
    stb r0, 0x20(r1)
    bl strlen
    mr r0, r3
    mr r3, r31
    mr r4, r29
    mr r6, r30
    subi r5, r28, 0x1
    add r7, r30, r0
    addi r8, r1, 0x20
    bl fn_80013F78
lbl_fn_8006B594_00002B08:
    lwz r0, 0x58(r1)
    lis r3, lbl_80731460@ha
    addi r3, r3, lbl_80731460@l
    srwi. r0, r0, 31
    lwz r29, 0x18(r3)
    bne lbl_fn_8006B594_00002B2C
    lbz r0, 0x58(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8006B594_00002B30
lbl_fn_8006B594_00002B2C:
    lwz r28, 0x5c(r1)
lbl_fn_8006B594_00002B30:
    lbz r0, 0x1c(r1)
    mr r3, r29
    stb r0, 0x18(r1)
    bl strlen
    mr r0, r3
    mr r5, r28
    mr r6, r29
    addi r3, r1, 0x58
    add r7, r29, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x58(r1)
    lis r3, lbl_8073148C@ha
    addi r3, r3, lbl_8073148C@l
    srwi. r0, r0, 31
    addi r29, r3, 0x1c
    bne lbl_fn_8006B594_00002B84
    lbz r0, 0x58(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8006B594_00002B88
lbl_fn_8006B594_00002B84:
    lwz r28, 0x5c(r1)
lbl_fn_8006B594_00002B88:
    lbz r0, 0x14(r1)
    mr r3, r29
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r4, r28
    mr r6, r29
    addi r3, r1, 0x58
    add r7, r29, r0
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8006B594_00002BD4
    lbz r0, 0x58(r1)
    addi r4, r1, 0x59
    clrlwi r6, r0, 25
    b lbl_fn_8006B594_00002BDC
lbl_fn_8006B594_00002BD4:
    lwz r4, 0x60(r1)
    lwz r6, 0x5c(r1)
lbl_fn_8006B594_00002BDC:
    mr r3, r31
    li r5, 0x0
    bl fn_8006A004
    addis r0, r3, 0x1
    mr r29, r3
    cmplwi r0, 0xffff
    beq lbl_fn_8006B594_00002C4C
    lwz r0, 0x58(r1)
    lis r30, lbl_8073148C@ha
    addi r30, r30, lbl_8073148C@l
    srwi. r0, r0, 31
    bne lbl_fn_8006B594_00002C18
    lbz r0, 0x58(r1)
    clrlwi r28, r0, 25
    b lbl_fn_8006B594_00002C1C
lbl_fn_8006B594_00002C18:
    lwz r28, 0x5c(r1)
lbl_fn_8006B594_00002C1C:
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r3, r31
    mr r4, r29
    mr r6, r30
    subi r5, r28, 0x1
    add r7, r30, r0
    addi r8, r1, 0x8
    bl fn_80013F78
lbl_fn_8006B594_00002C4C:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006B594_00002C60
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_8006B594_00002C60:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8006BA30(void)
{
    nofralloc
    lwz r3, lbl_8087EEC0
    blr
}

asm void fn_8006BA38(void)
{
    nofralloc
    lwz r0, lbl_8087EEC0
    lis r3, lbl_80731460@ha
    addi r3, r3, lbl_80731460@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    addi r3, r3, 0x1
    blr
}

asm void fn_8006BA54(void)
{
    nofralloc
    cmpwi r3, 0x0
    bltlr
    cmpwi r3, 0x6
    bgelr
    stw r3, lbl_8087EEC0
    blr
}

asm void fn_8006BA6C(void)
{
    nofralloc
    lwz r3, lbl_8087EEC4
    blr
}

asm void fn_8006BA74(void)
{
    nofralloc
    cmpwi r3, 0x0
    bltlr
    cmpwi r3, 0x6
    bgelr
    stw r3, lbl_8087EEC4
    blr
}

asm void fn_8006BA8C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    lwz r0, lbl_8087F518
    cmpwi r0, 0x0
    beq lbl_fn_8006BA8C_00002D24
    cmpwi r5, 0x0
    bne lbl_fn_8006BA8C_00002D24
    mr r4, r6
    mr r3, r0
    mr r5, r30
    li r6, 0x20
    bl fn_8046DC5C
    b lbl_fn_8006BA8C_00002DA4
lbl_fn_8006BA8C_00002D24:
    mr r3, r6
    addi r4, r1, 0x8
    li r31, 0x0
    bl fn_805FA270
    cmpwi r3, 0x0
    beq lbl_fn_8006BA8C_00002DA0
    lwz r0, 0x3c(r1)
    stw r0, 0x0(r30)
    bl fn_800827E0
    lwz r4, 0x0(r30)
    lis r7, lbl_8073148C@ha
    addi r7, r7, lbl_8073148C@l
    li r5, 0x20
    addi r0, r4, 0x1f
    li r6, 0x1
    mr r8, r7
    li r9, 0x0
    clrrwi r4, r0, 5
    li r10, 0x0
    bl fn_800839EC
    lwz r5, 0x0(r30)
    mr r31, r3
    mr r4, r31
    addi r3, r1, 0x8
    addi r0, r5, 0x1f
    li r6, 0x0
    clrrwi r5, r0, 5
    li r7, 0x2
    bl fn_805FA5D0
    addi r3, r1, 0x8
    bl fn_805FA390
lbl_fn_8006BA8C_00002DA0:
    mr r3, r31
lbl_fn_8006BA8C_00002DA4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8006BB6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F518
    cmpwi r0, 0x0
    beq lbl_fn_8006BB6C_00002DF4
    cmpwi r4, 0x0
    bne lbl_fn_8006BB6C_00002DF4
    mr r3, r0
    mr r4, r31
    bl fn_8046DD20
    b lbl_fn_8006BB6C_00002E08
lbl_fn_8006BB6C_00002DF4:
    cmpwi r3, 0x0
    beq lbl_fn_8006BB6C_00002E08
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
lbl_fn_8006BB6C_00002E08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006BBCC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80777BC0@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r4, r4, lbl_80777BC0@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    stw r0, 0x10(r3)
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    b lbl_fn_8006BBCC_00002E8C
lbl_fn_8006BBCC_00002E64:
    subic. r30, r30, 0x10
    beq lbl_fn_8006BBCC_00002E88
    addic. r0, r30, 0x4
    beq lbl_fn_8006BBCC_00002E88
    lwz r0, 0x4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8006BBCC_00002E88
    lwz r3, 0xc(r30)
    bl dtor_80084684
lbl_fn_8006BBCC_00002E88:
    subi r31, r31, 0x1
lbl_fn_8006BBCC_00002E8C:
    cmpwi r31, 0x0
    bne lbl_fn_8006BBCC_00002E64
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006BC64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_8006BC64_00002FB0
    lwz r28, 0xc(r3)
    lis r7, lbl_80777BC0@ha
    lwz r5, 0x8(r3)
    addi r7, r7, lbl_80777BC0@l
    slwi r4, r28, 4
    subf r0, r28, r28
    li r6, 0x0
    stw r7, 0x0(r3)
    add r29, r5, r4
    stw r6, 0x4(r3)
    stw r0, 0xc(r3)
    b lbl_fn_8006BC64_00002F2C
lbl_fn_8006BC64_00002F04:
    subic. r29, r29, 0x10
    beq lbl_fn_8006BC64_00002F28
    addic. r0, r29, 0x4
    beq lbl_fn_8006BC64_00002F28
    lwz r0, 0x4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8006BC64_00002F28
    lwz r3, 0xc(r29)
    bl dtor_80084684
lbl_fn_8006BC64_00002F28:
    subi r28, r28, 0x1
lbl_fn_8006BC64_00002F2C:
    cmpwi r28, 0x0
    bne lbl_fn_8006BC64_00002F04
    addic. r28, r30, 0x8
    beq lbl_fn_8006BC64_00002FA0
    beq lbl_fn_8006BC64_00002FA0
    beq lbl_fn_8006BC64_00002FA0
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8006BC64_00002FA0
    lwz r27, 0x4(r28)
    slwi r3, r27, 4
    subf r0, r27, r27
    stw r0, 0x4(r28)
    add r29, r4, r3
    b lbl_fn_8006BC64_00002F90
lbl_fn_8006BC64_00002F68:
    subic. r29, r29, 0x10
    beq lbl_fn_8006BC64_00002F8C
    addic. r0, r29, 0x4
    beq lbl_fn_8006BC64_00002F8C
    lwz r0, 0x4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8006BC64_00002F8C
    lwz r3, 0xc(r29)
    bl dtor_80084684
lbl_fn_8006BC64_00002F8C:
    subi r27, r27, 0x1
lbl_fn_8006BC64_00002F90:
    cmpwi r27, 0x0
    bne lbl_fn_8006BC64_00002F68
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_8006BC64_00002FA0:
    cmpwi r31, 0x0
    ble lbl_fn_8006BC64_00002FB0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8006BC64_00002FB0:
    mr r3, r30
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8006BD78(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stmw r27, 0x1cc(r1)
    mr r30, r3
    bne cr1, lbl_fn_8006BD78_00003000
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_8006BD78_00003000:
    stw r3, 0x8(r1)
    addi r11, r1, 0x1e8
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r4, 0xc(r1)
    addi r29, r1, 0xa8
    addi r3, r1, 0xc8
    stw r5, 0x10(r1)
    mr r5, r29
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0xa8(r1)
    stw r11, 0xac(r1)
    stw r0, 0xb0(r1)
    bl fn_8068093C
    li r0, 0x0
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stw r0, 0xa4(r1)
    lbz r0, 0x9c(r1)
    clrlwi r27, r0, 25
    lbz r0, 0x84(r1)
    addi r3, r1, 0xc8
    stb r0, 0x80(r1)
    bl strlen
    addi r6, r1, 0xc8
    mr r0, r3
    mr r7, r6
    mr r5, r27
    addi r3, r1, 0x9c
    addi r8, r1, 0x80
    add r7, r7, r0
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0xc(r30)
    lwz r4, 0x10(r30)
    cmplw r0, r4
    bge lbl_fn_8006BD78_00003134
    lwz r3, 0x8(r30)
    slwi r0, r0, 4
    add. r27, r3, r0
    beq lbl_fn_8006BD78_00003124
    lwz r0, 0x98(r1)
    stw r0, 0x0(r27)
    lwz r3, 0x9c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8006BD78_000030E0
    lwz r0, 0xa0(r1)
    stw r3, 0x4(r27)
    stw r0, 0x8(r27)
    lwz r0, 0xa4(r1)
    stw r0, 0xc(r27)
    b lbl_fn_8006BD78_00003124
lbl_fn_8006BD78_000030E0:
    li r0, 0x0
    stw r0, 0x4(r27)
    addi r3, r27, 0x4
    stw r0, 0x8(r27)
    stw r0, 0xc(r27)
    lwz r4, 0xa0(r1)
    bl fn_80013DC4
    lbz r5, 0x68(r1)
    addi r3, r27, 0x4
    stb r5, 0x6c(r1)
    addi r8, r1, 0x6c
    lwz r6, 0xa4(r1)
    li r4, 0x0
    lwz r0, 0xa0(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8006BD78_00003124:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    b lbl_fn_8006BD78_00003510
lbl_fn_8006BD78_00003134:
    lis r3, 0x1000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8006BD78_0000316C
    lis r4, lbl_8073148C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8073148C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1e
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8006BD78_0000316C:
    li r5, 0x0
    addi r4, r30, 0x10
    lis r3, 0x1000
    stw r5, 0xb4(r1)
    subi r0, r3, 0x1
    stw r5, 0xb8(r1)
    stw r5, 0xbc(r1)
    stw r4, 0xc0(r1)
    stw r5, 0xc4(r1)
    lwz r3, 0xc(r30)
    lwz r31, 0x10(r30)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x90(r1)
    ble lbl_fn_8006BD78_000031D4
    lis r4, lbl_8073148C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8073148C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1e
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8006BD78_000031D4:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8006BD78_00003224
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x90(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x88
    srwi r4, r4, 2
    stw r4, 0x88(r1)
    cmplw r4, r0
    bge lbl_fn_8006BD78_00003218
    addi r3, r1, 0x90
lbl_fn_8006BD78_00003218:
    lwz r0, 0x0(r3)
    add r29, r31, r0
    b lbl_fn_8006BD78_00003268
lbl_fn_8006BD78_00003224:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8006BD78_00003260
    addi r3, r31, 0x1
    lwz r0, 0x90(r1)
    srwi r3, r3, 1
    stw r3, 0x8c(r1)
    cmplw r3, r0
    addi r3, r1, 0x8c
    bge lbl_fn_8006BD78_00003254
    addi r3, r1, 0x90
lbl_fn_8006BD78_00003254:
    lwz r0, 0x0(r3)
    add r29, r31, r0
    b lbl_fn_8006BD78_00003268
lbl_fn_8006BD78_00003260:
    lis r3, 0x1000
    subi r29, r3, 0x1
lbl_fn_8006BD78_00003268:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r29, r0
    ble lbl_fn_8006BD78_0000329C
    lis r4, lbl_8073148C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8073148C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1e
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8006BD78_0000329C:
    slwi r3, r29, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8006BD78_000032D0
    lis r3, __files@ha
    lis r4, lbl_80777BD8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80777BD8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8006BD78_000032D0:
    lwz r3, 0xb8(r1)
    li r0, 0x0
    stw r31, 0xb4(r1)
    slwi r4, r3, 4
    stw r29, 0xbc(r1)
    lwz r3, 0xc(r30)
    stw r3, 0xc4(r1)
    slwi r3, r3, 4
    add r3, r31, r3
    add. r29, r4, r3
    beq lbl_fn_8006BD78_00003368
    lwz r3, 0x98(r1)
    stw r3, 0x0(r29)
    lwz r4, 0x9c(r1)
    srwi. r3, r4, 31
    bne lbl_fn_8006BD78_00003328
    lwz r0, 0xa0(r1)
    stw r4, 0x4(r29)
    stw r0, 0x8(r29)
    lwz r0, 0xa4(r1)
    stw r0, 0xc(r29)
    b lbl_fn_8006BD78_00003368
lbl_fn_8006BD78_00003328:
    stw r0, 0x4(r29)
    addi r3, r29, 0x4
    stw r0, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r4, 0xa0(r1)
    bl fn_80013DC4
    lbz r5, 0x7c(r1)
    addi r3, r29, 0x4
    stb r5, 0x78(r1)
    addi r8, r1, 0x78
    lwz r6, 0xa4(r1)
    li r4, 0x0
    lwz r0, 0xa0(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8006BD78_00003368:
    lwz r3, 0xb8(r1)
    li r29, 0x0
    lwz r0, 0xc4(r1)
    addi r3, r3, 0x1
    stw r3, 0xb8(r1)
    lwz r3, 0xb4(r1)
    slwi r0, r0, 4
    lwz r4, 0xc(r30)
    lwz r31, 0x8(r30)
    add r28, r3, r0
    slwi r0, r4, 4
    add r27, r31, r0
    b lbl_fn_8006BD78_0000342C
lbl_fn_8006BD78_0000339C:
    subic. r28, r28, 0x10
    subi r27, r27, 0x10
    beq lbl_fn_8006BD78_00003414
    lwz r0, 0x0(r27)
    stw r0, 0x0(r28)
    lwz r3, 0x4(r27)
    srwi. r0, r3, 31
    bne lbl_fn_8006BD78_000033D4
    lwz r0, 0x8(r27)
    stw r3, 0x4(r28)
    stw r0, 0x8(r28)
    lwz r0, 0xc(r27)
    stw r0, 0xc(r28)
    b lbl_fn_8006BD78_00003414
lbl_fn_8006BD78_000033D4:
    stw r29, 0x4(r28)
    addi r3, r28, 0x4
    stw r29, 0x8(r28)
    stw r29, 0xc(r28)
    lwz r4, 0x8(r27)
    bl fn_80013DC4
    lbz r0, 0x74(r1)
    addi r3, r28, 0x4
    stb r0, 0x70(r1)
    addi r8, r1, 0x70
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0xc(r27)
    lwz r0, 0x8(r27)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8006BD78_00003414:
    lwz r4, 0xc4(r1)
    lwz r3, 0xb8(r1)
    subi r0, r4, 0x1
    stw r0, 0xc4(r1)
    addi r0, r3, 0x1
    stw r0, 0xb8(r1)
lbl_fn_8006BD78_0000342C:
    cmplw r27, r31
    bgt lbl_fn_8006BD78_0000339C
    lwz r3, 0x10(r30)
    addi r27, r1, 0xb4
    lwz r0, 0xbc(r1)
    stw r0, 0x10(r30)
    stw r3, 0xbc(r1)
    lwz r0, 0xb4(r1)
    lwz r3, 0x8(r30)
    stw r0, 0x8(r30)
    stw r3, 0xb4(r1)
    lwz r0, 0xb8(r1)
    lwz r5, 0xc(r30)
    stw r0, 0xc(r30)
    slwi r0, r5, 4
    lwz r3, 0xc4(r1)
    lwz r4, 0xb4(r1)
    slwi r3, r3, 4
    stw r5, 0xb8(r1)
    add r29, r4, r3
    add r28, r29, r0
    b lbl_fn_8006BD78_000034A8
lbl_fn_8006BD78_00003484:
    subic. r28, r28, 0x10
    beq lbl_fn_8006BD78_000034A8
    addic. r0, r28, 0x4
    beq lbl_fn_8006BD78_000034A8
    lwz r0, 0x4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8006BD78_000034A8
    lwz r3, 0xc(r28)
    bl dtor_80084684
lbl_fn_8006BD78_000034A8:
    cmplw r28, r29
    bgt lbl_fn_8006BD78_00003484
    cmpwi r27, 0x0
    li r0, 0x0
    stw r0, 0xb8(r1)
    beq lbl_fn_8006BD78_00003510
    lwz r28, 0xb4(r1)
    cmpwi r28, 0x0
    beq lbl_fn_8006BD78_00003510
    li r27, 0x0
    stw r27, 0xb8(r1)
    b lbl_fn_8006BD78_00003500
lbl_fn_8006BD78_000034D8:
    subic. r28, r28, 0x10
    beq lbl_fn_8006BD78_000034FC
    addic. r0, r28, 0x4
    beq lbl_fn_8006BD78_000034FC
    lwz r0, 0x4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8006BD78_000034FC
    lwz r3, 0xc(r28)
    bl dtor_80084684
lbl_fn_8006BD78_000034FC:
    subi r27, r27, 0x1
lbl_fn_8006BD78_00003500:
    cmpwi r27, 0x0
    bne lbl_fn_8006BD78_000034D8
    lwz r3, 0xb4(r1)
    bl dtor_80084684
lbl_fn_8006BD78_00003510:
    lwz r3, 0x4(r30)
    addic. r0, r1, 0x9c
    addi r29, r3, 0x1
    stw r29, 0x4(r30)
    beq lbl_fn_8006BD78_00003538
    lwz r0, 0x9c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006BD78_00003538
    lwz r3, 0xa4(r1)
    bl dtor_80084684
lbl_fn_8006BD78_00003538:
    mr r3, r29
    lmw r27, 0x1cc(r1)
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
