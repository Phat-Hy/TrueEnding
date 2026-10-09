#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80206B14(void);
extern void fn_80206B68(void);
extern void fn_80206B70(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020ED84(void);
extern void fn_8020EE58(void);
extern void fn_8020EE60(void);
extern void fn_8020EF04(void);
extern void fn_8020EF4C(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_80216AFC(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void strchr(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073FA58[];
extern u8 lbl_8073FA9C[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];

/* Small data declarations */
extern u32 lbl_8087D720;
extern u32 lbl_8087DB60;
extern u32 lbl_8087DB64;
extern u32 lbl_8087DB68;
extern u32 lbl_8087DB6C;
extern u32 lbl_8087F220;
extern u32 lbl_8087F224;
extern u32 lbl_8087F238;
extern u32 lbl_8087F23C;
extern u32 lbl_8087F518;
extern u32 lbl_80882EE8;
extern u32 lbl_80882EEC;
extern u32 lbl_80882EF0;

/* Function declarations */
void fn_802124B4(void);
void fn_80212714(void);
void fn_80212790(void);
void fn_80212840(void);
void fn_80212C34(void);
void fn_80212F68(void);
void fn_802130BC(void);
void fn_802137DC(void);
void fn_80213A7C(void);
void fn_80213A98(void);
void fn_80213B08(void);
void fn_80213B78(void);

asm void fn_802124B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, 0xf
    li r11, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, 0x4240
    mullw r7, r4, r5
    li r0, 0x40
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r9, lbl_8087F224
    lwz r10, lbl_8087F220
    subi r8, r9, 0x100
    mulli r4, r8, 0x138
    mr r6, r8
    mtctr r0
lbl_fn_802124B4_00000048:
    cmpwi r6, 0x0
    blt lbl_fn_802124B4_00000058
    cmpw r9, r6
    bgt lbl_fn_802124B4_00000060
lbl_fn_802124B4_00000058:
    li r5, 0x0
    b lbl_fn_802124B4_00000064
lbl_fn_802124B4_00000060:
    add r5, r10, r4
lbl_fn_802124B4_00000064:
    lwz r0, 0x4(r3)
    lwz r5, 0x4(r5)
    add r0, r0, r7
    cmpw r5, r0
    bne lbl_fn_802124B4_00000080
    li r3, 0x1
    b lbl_fn_802124B4_00000244
lbl_fn_802124B4_00000080:
    addic. r6, r6, 0x1
    addi r4, r4, 0x138
    blt lbl_fn_802124B4_00000094
    cmpw r9, r6
    bgt lbl_fn_802124B4_0000009C
lbl_fn_802124B4_00000094:
    li r5, 0x0
    b lbl_fn_802124B4_000000A0
lbl_fn_802124B4_0000009C:
    add r5, r10, r4
lbl_fn_802124B4_000000A0:
    lwz r0, 0x4(r3)
    lwz r5, 0x4(r5)
    add r0, r0, r7
    cmpw r5, r0
    bne lbl_fn_802124B4_000000BC
    li r3, 0x1
    b lbl_fn_802124B4_00000244
lbl_fn_802124B4_000000BC:
    addic. r6, r6, 0x1
    addi r4, r4, 0x138
    blt lbl_fn_802124B4_000000D0
    cmpw r9, r6
    bgt lbl_fn_802124B4_000000D8
lbl_fn_802124B4_000000D0:
    li r5, 0x0
    b lbl_fn_802124B4_000000DC
lbl_fn_802124B4_000000D8:
    add r5, r10, r4
lbl_fn_802124B4_000000DC:
    lwz r0, 0x4(r3)
    lwz r5, 0x4(r5)
    add r0, r0, r7
    cmpw r5, r0
    bne lbl_fn_802124B4_000000F8
    li r3, 0x1
    b lbl_fn_802124B4_00000244
lbl_fn_802124B4_000000F8:
    addic. r6, r6, 0x1
    addi r4, r4, 0x138
    blt lbl_fn_802124B4_0000010C
    cmpw r9, r6
    bgt lbl_fn_802124B4_00000114
lbl_fn_802124B4_0000010C:
    li r5, 0x0
    b lbl_fn_802124B4_00000118
lbl_fn_802124B4_00000114:
    add r5, r10, r4
lbl_fn_802124B4_00000118:
    lwz r0, 0x4(r3)
    lwz r5, 0x4(r5)
    add r0, r0, r7
    cmpw r5, r0
    bne lbl_fn_802124B4_00000134
    li r3, 0x1
    b lbl_fn_802124B4_00000244
lbl_fn_802124B4_00000134:
    addi r6, r6, 0x1
    addi r4, r4, 0x138
    addi r11, r11, 0x3
    bdnz lbl_fn_802124B4_00000048
    mulli r4, r8, 0x138
    li r0, 0x100
    mtctr r0
lbl_fn_802124B4_00000150:
    cmpwi r8, 0x0
    blt lbl_fn_802124B4_00000160
    cmpw r9, r8
    bgt lbl_fn_802124B4_00000168
lbl_fn_802124B4_00000160:
    li r5, 0x0
    b lbl_fn_802124B4_0000016C
lbl_fn_802124B4_00000168:
    add r5, r10, r4
lbl_fn_802124B4_0000016C:
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bge lbl_fn_802124B4_00000234
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_802124B4_000001D4
    li r29, 0x0
lbl_fn_802124B4_0000018C:
    bl fn_80206B68
    add r3, r3, r29
    subi r3, r3, 0x80
    bl fn_80206B70
    mr r30, r3
    lwz r3, 0x4(r31)
    bl fn_80206C50
    lwz r0, 0x80(r30)
    cmpwi r0, 0x0
    bge lbl_fn_802124B4_000001C4
    cmpwi r3, 0x0
    beq lbl_fn_802124B4_000001C4
    li r3, 0x1
    b lbl_fn_802124B4_00000244
lbl_fn_802124B4_000001C4:
    addi r29, r29, 0x1
    cmplwi r29, 0x80
    blt lbl_fn_802124B4_0000018C
    b lbl_fn_802124B4_0000022C
lbl_fn_802124B4_000001D4:
    lwz r3, 0x4(r31)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_802124B4_0000022C
    li r29, 0x0
lbl_fn_802124B4_000001E8:
    bl fn_8020EE58
    add r3, r3, r29
    subi r3, r3, 0x80
    bl fn_8020EE60
    mr r30, r3
    lwz r3, 0x4(r31)
    bl fn_8020EFEC
    lwz r0, 0x7c(r30)
    cmpwi r0, 0x0
    bge lbl_fn_802124B4_00000220
    cmpwi r3, 0x0
    beq lbl_fn_802124B4_00000220
    li r3, 0x1
    b lbl_fn_802124B4_00000244
lbl_fn_802124B4_00000220:
    addi r29, r29, 0x1
    cmplwi r29, 0x80
    blt lbl_fn_802124B4_000001E8
lbl_fn_802124B4_0000022C:
    li r3, 0x0
    b lbl_fn_802124B4_00000244
lbl_fn_802124B4_00000234:
    addi r8, r8, 0x1
    addi r4, r4, 0x138
    bdnz lbl_fn_802124B4_00000150
    li r3, 0x0
lbl_fn_802124B4_00000244:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80212714(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80212714_000002C8
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80212714_000002A0
    lwz r3, 0x4(r31)
    bl fn_80206C50
    li r0, -0x1
    stw r0, 0x80(r3)
    b lbl_fn_80212714_000002C0
lbl_fn_80212714_000002A0:
    lwz r3, 0x4(r31)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80212714_000002C0
    lwz r3, 0x4(r31)
    bl fn_8020EFEC
    li r0, -0x1
    stw r0, 0x7c(r3)
lbl_fn_80212714_000002C0:
    li r0, -0x1
    stw r0, 0x4(r31)
lbl_fn_80212714_000002C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80212790(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, -0x1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
lbl_fn_80212790_000002FC:
    lwz r0, lbl_8087F224
    lwz r4, lbl_8087F220
    add r3, r0, r29
    subi r0, r3, 0x100
    mulli r0, r0, 0x138
    add r30, r4, r0
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    ble lbl_fn_80212790_00000364
    cmpwi r30, 0x0
    beq lbl_fn_80212790_00000364
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80212790_00000344
    lwz r3, 0x4(r30)
    bl fn_80206C50
    stw r31, 0x80(r3)
    b lbl_fn_80212790_00000360
lbl_fn_80212790_00000344:
    lwz r3, 0x4(r30)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80212790_00000360
    lwz r3, 0x4(r30)
    bl fn_8020EFEC
    stw r31, 0x7c(r3)
lbl_fn_80212790_00000360:
    stw r31, 0x4(r30)
lbl_fn_80212790_00000364:
    addi r29, r29, 0x1
    cmplwi r29, 0x100
    blt lbl_fn_80212790_000002FC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80212840(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lwz r6, 0x80(r4)
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    lis r30, 0x1062
    addi r0, r30, 0x4dd3
    mulhw r0, r0, r6
    stw r29, 0x24(r1)
    mr r29, r5
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r3, 0x78(r4)
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r6
    bl fn_80206B14
    lfs f0, 0x0(r3)
    addi r5, r30, 0x4dd3
    stfs f0, 0x0(r28)
    addi r30, r3, 0x8c
    lwz r4, 0x80(r31)
    addi r0, r28, 0x8c
    lfs f0, 0x4(r3)
    cmplw r30, r0
    stfs f0, 0x4(r28)
    mulhw r0, r5, r4
    mr r31, r3
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r28)
    lfs f0, 0xc(r3)
    srawi r0, r0, 6
    stfs f0, 0xc(r28)
    srwi r4, r0, 31
    add r0, r0, r4
    lfs f0, 0x10(r3)
    add r29, r29, r0
    stfs f0, 0x10(r28)
    lfs f0, 0x14(r3)
    stfs f0, 0x14(r28)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r28)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r28)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r28)
    lwz r0, 0x24(r3)
    stw r0, 0x24(r28)
    lfs f0, 0x28(r3)
    stfs f0, 0x28(r28)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r28)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r28)
    lwz r0, 0x34(r3)
    stw r0, 0x34(r28)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x3c(r28)
    stw r4, 0x38(r28)
    lwz r4, 0x40(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x44(r28)
    stw r4, 0x40(r28)
    lwz r4, 0x48(r3)
    lwz r0, 0x4c(r3)
    stw r0, 0x4c(r28)
    stw r4, 0x48(r28)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r28)
    lwz r4, 0x54(r3)
    lwz r0, 0x58(r3)
    stw r0, 0x58(r28)
    stw r4, 0x54(r28)
    lwz r4, 0x5c(r3)
    lwz r0, 0x60(r3)
    stw r0, 0x60(r28)
    stw r4, 0x5c(r28)
    lwz r4, 0x64(r3)
    lwz r0, 0x68(r3)
    stw r0, 0x68(r28)
    stw r4, 0x64(r28)
    lwz r0, 0x6c(r3)
    stw r0, 0x6c(r28)
    lwz r4, 0x70(r3)
    lwz r0, 0x74(r3)
    stw r0, 0x74(r28)
    stw r4, 0x70(r28)
    lwz r0, 0x78(r3)
    stw r0, 0x78(r28)
    lwz r0, 0x7c(r3)
    stw r0, 0x7c(r28)
    lwz r0, 0x80(r3)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r3)
    stw r0, 0x84(r28)
    lwz r0, 0x88(r3)
    stw r0, 0x88(r28)
    beq lbl_fn_80212840_00000544
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r4, r30
    addi r3, r28, 0x8c
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80212840_00000544:
    lwz r4, 0xac(r31)
    addi r30, r31, 0xf4
    lwz r3, 0xb0(r31)
    addi r0, r28, 0xf4
    stw r3, 0xb0(r28)
    cmplw r30, r0
    stw r4, 0xac(r28)
    lwz r0, 0xb4(r31)
    stw r0, 0xb4(r28)
    lwz r0, 0xb8(r31)
    stw r0, 0xb8(r28)
    lwz r0, 0xbc(r31)
    stw r0, 0xbc(r28)
    lwz r0, 0xc0(r31)
    stw r0, 0xc0(r28)
    lwz r3, 0xc4(r31)
    lwz r0, 0xc8(r31)
    stw r0, 0xc8(r28)
    stw r3, 0xc4(r28)
    lwz r3, 0xcc(r31)
    lwz r0, 0xd0(r31)
    stw r0, 0xd0(r28)
    stw r3, 0xcc(r28)
    lwz r3, 0xd4(r31)
    lwz r0, 0xd8(r31)
    stw r0, 0xd8(r28)
    stw r3, 0xd4(r28)
    lwz r3, 0xdc(r31)
    lwz r0, 0xe0(r31)
    stw r0, 0xe0(r28)
    stw r3, 0xdc(r28)
    lwz r3, 0xe4(r31)
    lwz r0, 0xe8(r31)
    stw r0, 0xe8(r28)
    stw r3, 0xe4(r28)
    lwz r0, 0xec(r31)
    stw r0, 0xec(r28)
    lwz r0, 0xf0(r31)
    stw r0, 0xf0(r28)
    beq lbl_fn_80212840_00000600
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r4, r30
    addi r3, r28, 0xf4
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80212840_00000600:
    addi r30, r31, 0x104
    addi r0, r28, 0x104
    cmplw r30, r0
    beq lbl_fn_80212840_0000062C
    mr r3, r30
    bl strlen
    mr r5, r3
    mr r4, r30
    addi r3, r28, 0x104
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80212840_0000062C:
    lwz r0, 0x114(r31)
    subi r3, r29, 0x1e
    stw r0, 0x114(r28)
    srawi r0, r3, 31
    andc r0, r3, r0
    lwz r5, 0x118(r31)
    cmpwi r0, 0x14
    stw r5, 0x118(r28)
    mulli r4, r29, 0x3e8
    lwz r0, 0x11c(r31)
    stw r0, 0x11c(r28)
    lwz r0, 0x120(r31)
    stw r0, 0x120(r28)
    lwz r0, 0x124(r31)
    stw r0, 0x124(r28)
    lwz r0, 0x128(r31)
    stw r0, 0x128(r28)
    lwz r0, 0x12c(r31)
    stw r0, 0x12c(r28)
    lwz r0, 0x80(r31)
    add r0, r0, r4
    stw r0, 0x80(r28)
    bge lbl_fn_80212840_00000694
    srawi r0, r3, 31
    andc r5, r3, r0
    b lbl_fn_80212840_00000698
lbl_fn_80212840_00000694:
    li r5, 0x14
lbl_fn_80212840_00000698:
    subi r3, r29, 0xf
    srawi r0, r3, 31
    andc r0, r3, r0
    cmpwi r0, 0xf
    bge lbl_fn_80212840_000006B8
    srawi r0, r3, 31
    andc r6, r3, r0
    b lbl_fn_80212840_000006BC
lbl_fn_80212840_000006B8:
    li r6, 0xf
lbl_fn_80212840_000006BC:
    cmpwi r29, 0xf
    li r4, 0xf
    bge lbl_fn_80212840_000006CC
    mr r4, r29
lbl_fn_80212840_000006CC:
    subi r3, r29, 0x32
    lfs f2, 0x0(r31)
    srawi r0, r3, 31
    lfs f1, 0x4(r31)
    andc r0, r3, r0
    lfs f0, lbl_80882EE8
    mulli r3, r0, 0x14
    fadds f1, f2, f1
    mulli r0, r5, 0x32
    fcmpo cr0, f1, f0
    add r0, r3, r0
    mulli r4, r4, 0xc8
    mulli r3, r6, 0x64
    add r3, r4, r3
    add r0, r3, r0
    ble lbl_fn_80212840_00000760
    fdivs f6, f2, f1
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    lfs f0, lbl_80882EEC
    lis r4, lbl_8073FA58@ha
    stw r3, 0xc(r1)
    stw r0, 0x8(r1)
    fsubs f1, f0, f6
    lfd f5, lbl_8073FA58@l(r4)
    lfd f0, 0x8(r1)
    stw r3, 0x14(r1)
    fsubs f4, f0, f5
    lfs f3, 0x0(r28)
    stw r0, 0x10(r1)
    lfs f0, 0x4(r28)
    lfd f2, 0x10(r1)
    fmadds f3, f4, f6, f3
    fsubs f2, f2, f5
    stfs f3, 0x0(r28)
    fmadds f0, f2, f1, f0
    stfs f0, 0x4(r28)
lbl_fn_80212840_00000760:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80212C34(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r30, 0x1062
    lwz r6, 0x7c(r4)
    addi r0, r30, 0x4dd3
    mr r28, r3
    mulhw r0, r0, r6
    lwz r3, 0x78(r4)
    mr r27, r4
    mr r29, r5
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r6
    bl fn_8020ED84
    lfs f0, 0x0(r3)
    addi r5, r30, 0x4dd3
    stfs f0, 0x0(r28)
    addi r31, r3, 0x88
    addi r0, r28, 0x88
    lwz r4, 0x7c(r27)
    lfs f0, 0x4(r3)
    cmplw r31, r0
    stfs f0, 0x4(r28)
    mulhw r0, r5, r4
    mr r30, r3
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r28)
    lfs f0, 0xc(r3)
    srawi r0, r0, 6
    stfs f0, 0xc(r28)
    srwi r4, r0, 31
    add r0, r0, r4
    lfs f0, 0x10(r3)
    add r29, r29, r0
    stfs f0, 0x10(r28)
    lfs f0, 0x14(r3)
    stfs f0, 0x14(r28)
    lfs f0, 0x18(r3)
    stfs f0, 0x18(r28)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1c(r28)
    lwz r0, 0x20(r3)
    stw r0, 0x20(r28)
    lwz r0, 0x24(r3)
    stw r0, 0x24(r28)
    lfs f0, 0x28(r3)
    stfs f0, 0x28(r28)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r28)
    lwz r0, 0x30(r3)
    stw r0, 0x30(r28)
    lwz r0, 0x34(r3)
    stw r0, 0x34(r28)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r0, 0x3c(r28)
    stw r4, 0x38(r28)
    lwz r4, 0x40(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x44(r28)
    stw r4, 0x40(r28)
    lwz r4, 0x48(r3)
    lwz r0, 0x4c(r3)
    stw r0, 0x4c(r28)
    stw r4, 0x48(r28)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r28)
    lwz r4, 0x54(r3)
    lwz r0, 0x58(r3)
    stw r0, 0x58(r28)
    stw r4, 0x54(r28)
    lwz r4, 0x5c(r3)
    lwz r0, 0x60(r3)
    stw r0, 0x60(r28)
    stw r4, 0x5c(r28)
    lwz r4, 0x64(r3)
    lwz r0, 0x68(r3)
    stw r0, 0x68(r28)
    stw r4, 0x64(r28)
    lwz r0, 0x6c(r3)
    stw r0, 0x6c(r28)
    lwz r4, 0x70(r3)
    lwz r0, 0x74(r3)
    stw r0, 0x74(r28)
    stw r4, 0x70(r28)
    lwz r0, 0x78(r3)
    stw r0, 0x78(r28)
    lwz r0, 0x7c(r3)
    stw r0, 0x7c(r28)
    lwz r0, 0x80(r3)
    stw r0, 0x80(r28)
    lwz r0, 0x84(r3)
    stw r0, 0x84(r28)
    beq lbl_fn_80212C34_00000928
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r28, 0x88
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80212C34_00000928:
    lwz r0, 0xa8(r30)
    addi r31, r30, 0xc0
    stw r0, 0xa8(r28)
    addi r0, r28, 0xc0
    cmplw r31, r0
    lwz r3, 0xac(r30)
    lwz r0, 0xb0(r30)
    stw r0, 0xb0(r28)
    stw r3, 0xac(r28)
    lwz r3, 0xb4(r30)
    lwz r0, 0xb8(r30)
    stw r0, 0xb8(r28)
    stw r3, 0xb4(r28)
    lwz r0, 0xbc(r30)
    stw r0, 0xbc(r28)
    beq lbl_fn_80212C34_00000984
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r28, 0xc0
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80212C34_00000984:
    addi r31, r30, 0xd0
    addi r0, r28, 0xd0
    cmplw r31, r0
    beq lbl_fn_80212C34_000009B0
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r28, 0xd0
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80212C34_000009B0:
    lwz r0, 0xe0(r30)
    mulli r31, r29, 0x1e
    stw r0, 0xe0(r28)
    mr r3, r30
    lwz r5, 0xe4(r30)
    mulli r0, r29, 0x3e8
    lwz r4, 0xe8(r30)
    stw r4, 0xe8(r28)
    stw r5, 0xe4(r28)
    lwz r5, 0xec(r30)
    lwz r4, 0xf0(r30)
    stw r4, 0xf0(r28)
    stw r5, 0xec(r28)
    lwz r5, 0xf4(r30)
    lwz r4, 0xf8(r30)
    stw r4, 0xf8(r28)
    stw r5, 0xf4(r28)
    lwz r5, 0xfc(r30)
    lwz r4, 0x100(r30)
    stw r4, 0x100(r28)
    stw r5, 0xfc(r28)
    lwz r5, 0x104(r30)
    lwz r4, 0x108(r30)
    stw r4, 0x108(r28)
    stw r5, 0x104(r28)
    lwz r4, 0x7c(r30)
    add r0, r4, r0
    stw r0, 0x7c(r28)
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_80212C34_00000A30
    add r31, r31, r31
lbl_fn_80212C34_00000A30:
    lfs f2, 0x8(r30)
    lfs f1, 0xc(r30)
    lfs f0, lbl_80882EE8
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80212C34_00000A9C
    fdivs f6, f2, f1
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    lfs f0, lbl_80882EEC
    lis r4, lbl_8073FA58@ha
    stw r3, 0xc(r1)
    stw r0, 0x8(r1)
    fsubs f1, f0, f6
    lfd f5, lbl_8073FA58@l(r4)
    lfd f0, 0x8(r1)
    stw r3, 0x14(r1)
    fsubs f4, f0, f5
    lfs f3, 0x8(r28)
    stw r0, 0x10(r1)
    lfs f0, 0xc(r28)
    lfd f2, 0x10(r1)
    fmadds f3, f4, f6, f3
    fsubs f2, f2, f5
    stfs f3, 0x8(r28)
    fmadds f0, f2, f1, f0
    stfs f0, 0xc(r28)
lbl_fn_80212C34_00000A9C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80212F68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r30, r5
    mr r31, r6
    bne lbl_fn_80212F68_00000AE4
    li r3, 0x0
    b lbl_fn_80212F68_00000BF4
lbl_fn_80212F68_00000AE4:
    bl strlen
    cmplwi r3, 0x3
    blt lbl_fn_80212F68_00000B5C
    lis r29, lbl_8073FA9C@ha
    mr r3, r27
    addi r4, r29, lbl_8073FA9C@l
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_80212F68_00000B28
    addi r4, r29, lbl_8073FA9C@l
    mr r3, r27
    addi r4, r4, 0x3
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80212F68_00000B5C
lbl_fn_80212F68_00000B28:
    lbz r0, 0x1(r27)
    li r3, 0x1
    stw r3, 0x0(r28)
    addi r3, r27, 0x2
    extsb r5, r0
    subfic r4, r5, 0x73
    subi r0, r5, 0x73
    or r0, r4, r0
    srwi r0, r0, 31
    stw r0, 0x0(r30)
    bl fn_80684600
    stw r3, 0x0(r31)
    b lbl_fn_80212F68_00000BF0
lbl_fn_80212F68_00000B5C:
    mr r3, r27
    bl strlen
    cmplwi r3, 0x3
    blt lbl_fn_80212F68_00000BD8
    lis r29, lbl_8073FA9C@ha
    mr r3, r27
    addi r29, r29, lbl_8073FA9C@l
    li r5, 0x2
    addi r4, r29, 0x6
    bl fn_80682544
    cmpwi r3, 0x0
    beq lbl_fn_80212F68_00000BA4
    mr r3, r27
    addi r4, r29, 0x9
    li r5, 0x2
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80212F68_00000BD8
lbl_fn_80212F68_00000BA4:
    lbz r0, 0x1(r27)
    li r3, 0x2
    stw r3, 0x0(r28)
    addi r3, r27, 0x2
    extsb r5, r0
    subfic r4, r5, 0x75
    subi r0, r5, 0x75
    or r0, r4, r0
    srwi r0, r0, 31
    stw r0, 0x0(r30)
    bl fn_80684600
    stw r3, 0x0(r31)
    b lbl_fn_80212F68_00000BF0
lbl_fn_80212F68_00000BD8:
    li r0, 0x0
    stw r0, 0x0(r28)
    mr r3, r27
    stw r0, 0x0(r30)
    bl fn_80684600
    stw r3, 0x0(r31)
lbl_fn_80212F68_00000BF0:
    li r3, 0x1
lbl_fn_80212F68_00000BF4:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802130BC(void)
{
    nofralloc
    stwu r1, -0x690(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x694(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r23, 0x66c(r1)
    stw r3, 0x28(r1)
    addi r3, r1, 0x38
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r3, lbl_8087F518
    addi r5, r1, 0x10
    lwz r4, lbl_80882EF0
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0x28(r1)
    mr r31, r3
    mr r4, r31
    addi r3, r1, 0x28
    lwz r12, 0x8(r12)
    li r23, 0x0
    lwz r5, 0x10(r1)
    mtctr r12
    bctrl
    b lbl_fn_802130BC_00000CC4
lbl_fn_802130BC_00000CAC:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802130BC_00000CC4
    addi r23, r23, 0x1
lbl_fn_802130BC_00000CC4:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802130BC_00000CAC
    lis r3, lbl_8073FA9C@ha
    li r4, 0x1
    addi r3, r3, lbl_8073FA9C@l
    li r7, 0x0
    addi r5, r3, 0xc
    mulli r8, r23, 0x18
    mr r6, r5
    addi r3, r8, 0x10
    bl fn_800846FC
    lis r4, fn_802137DC@ha
    lis r5, fn_80213A98@ha
    mr r7, r23
    li r6, 0x18
    addi r4, r4, fn_802137DC@l
    addi r5, r5, fn_80213A98@l
    bl fn_80695720
    stw r3, lbl_8087F238
    mr r4, r31
    lwz r12, 0x28(r1)
    addi r3, r1, 0x28
    stw r23, lbl_8087F23C
    lwz r5, 0x10(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r23, 0x0
    lis r28, fn_80213A7C@ha
    li r29, 0x8
    li r26, 0x3
    li r27, 0x0
    b lbl_fn_802130BC_000012F8
lbl_fn_802130BC_00000D50:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_802130BC_000012F8
    addi r3, r1, 0x28
    bl fn_8005B3CC
    lwz r0, lbl_8087F238
    add r30, r0, r23
    mr r4, r30
    addi r5, r30, 0x4
    addi r6, r30, 0x8
    bl fn_80216AFC
    addi r3, r1, 0x28
    bl fn_8005B3CC
lbl_fn_802130BC_00000D8C:
    addi r3, r1, 0x28
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r24, r3
    extsb. r0, r0
    beq lbl_fn_802130BC_000012F4
    stw r26, 0x18(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r27, 0x1c(r1)
    stw r27, 0x20(r1)
    stw r27, 0x24(r1)
    bl fn_80212F68
    cmpwi r3, 0x0
    beq lbl_fn_802130BC_00000D8C
    mr r3, r24
    li r4, 0x5f
    bl strchr
    cmpwi r3, 0x0
    beq lbl_fn_802130BC_00000DF4
    addi r3, r3, 0x1
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    addi r6, r1, 0x24
    bl fn_80212F68
lbl_fn_802130BC_00000DF4:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_802130BC_00000E0C
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802130BC_0000105C
lbl_fn_802130BC_00000E0C:
    lwz r0, 0x10(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_802130BC_000012B8
    li r3, 0x90
    li r4, 0x0
    la r5, lbl_8087DB64
    la r6, lbl_8087DB60
    li r7, 0x0
    bl fn_800846FC
    addi r4, r28, fn_80213A7C@l
    li r5, 0x0
    li r6, 0x10
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x14(r30)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_802130BC_00001050
    lwz r0, 0xc(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802130BC_00000E68
    mr r4, r0
lbl_fn_802130BC_00000E68:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802130BC_0000103C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802130BC_00000FEC
    addi r0, r8, 0x7
    mr r7, r25
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802130BC_00000FEC
lbl_fn_802130BC_00000E9C:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x8
    add r8, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x20(r8)
    stw r0, 0x20(r7)
    lwz r0, 0x24(r8)
    stw r0, 0x24(r7)
    lwz r0, 0x28(r8)
    stw r0, 0x28(r7)
    lwz r0, 0x2c(r8)
    stw r0, 0x2c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x30(r8)
    stw r0, 0x30(r7)
    lwz r0, 0x34(r8)
    stw r0, 0x34(r7)
    lwz r0, 0x38(r8)
    stw r0, 0x38(r7)
    lwz r0, 0x3c(r8)
    stw r0, 0x3c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x40(r8)
    stw r0, 0x40(r7)
    lwz r0, 0x44(r8)
    stw r0, 0x44(r7)
    lwz r0, 0x48(r8)
    stw r0, 0x48(r7)
    lwz r0, 0x4c(r8)
    stw r0, 0x4c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x50(r8)
    stw r0, 0x50(r7)
    lwz r0, 0x54(r8)
    stw r0, 0x54(r7)
    lwz r0, 0x58(r8)
    stw r0, 0x58(r7)
    lwz r0, 0x5c(r8)
    stw r0, 0x5c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x60(r8)
    stw r0, 0x60(r7)
    lwz r0, 0x64(r8)
    stw r0, 0x64(r7)
    lwz r0, 0x68(r8)
    stw r0, 0x68(r7)
    lwz r0, 0x6c(r8)
    stw r0, 0x6c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    addi r6, r6, 0x80
    lwz r0, 0x70(r8)
    stw r0, 0x70(r7)
    lwz r0, 0x74(r8)
    stw r0, 0x74(r7)
    lwz r0, 0x78(r8)
    stw r0, 0x78(r7)
    lwz r0, 0x7c(r8)
    stw r0, 0x7c(r7)
    addi r7, r7, 0x80
    bdnz lbl_fn_802130BC_00000E9C
lbl_fn_802130BC_00000FEC:
    slwi r6, r5, 4
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802130BC_0000103C
lbl_fn_802130BC_00001004:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x1
    add r4, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r3)
    addi r6, r6, 0x10
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    addi r3, r3, 0x10
    bdnz lbl_fn_802130BC_00001004
lbl_fn_802130BC_0000103C:
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802130BC_00001050
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802130BC_00001050:
    stw r25, 0x14(r30)
    stw r29, 0x10(r30)
    b lbl_fn_802130BC_000012B8
lbl_fn_802130BC_0000105C:
    lwz r3, 0xc(r30)
    cmplw r3, r0
    blt lbl_fn_802130BC_000012B8
    slwi r25, r3, 1
    cmplw r0, r25
    bgt lbl_fn_802130BC_000012B8
    slwi r3, r25, 4
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087DB64
    la r6, lbl_8087DB60
    li r7, 0x0
    bl fn_800846FC
    mr r7, r25
    addi r4, r28, fn_80213A7C@l
    li r5, 0x0
    li r6, 0x10
    bl fn_80695720
    lwz r0, 0x14(r30)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_802130BC_000012B0
    lwz r0, 0xc(r30)
    mr r4, r25
    cmplw r25, r0
    ble lbl_fn_802130BC_000010C8
    mr r4, r0
lbl_fn_802130BC_000010C8:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802130BC_0000129C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802130BC_0000124C
    addi r0, r8, 0x7
    mr r7, r24
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802130BC_0000124C
lbl_fn_802130BC_000010FC:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x8
    add r8, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x20(r8)
    stw r0, 0x20(r7)
    lwz r0, 0x24(r8)
    stw r0, 0x24(r7)
    lwz r0, 0x28(r8)
    stw r0, 0x28(r7)
    lwz r0, 0x2c(r8)
    stw r0, 0x2c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x30(r8)
    stw r0, 0x30(r7)
    lwz r0, 0x34(r8)
    stw r0, 0x34(r7)
    lwz r0, 0x38(r8)
    stw r0, 0x38(r7)
    lwz r0, 0x3c(r8)
    stw r0, 0x3c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x40(r8)
    stw r0, 0x40(r7)
    lwz r0, 0x44(r8)
    stw r0, 0x44(r7)
    lwz r0, 0x48(r8)
    stw r0, 0x48(r7)
    lwz r0, 0x4c(r8)
    stw r0, 0x4c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x50(r8)
    stw r0, 0x50(r7)
    lwz r0, 0x54(r8)
    stw r0, 0x54(r7)
    lwz r0, 0x58(r8)
    stw r0, 0x58(r7)
    lwz r0, 0x5c(r8)
    stw r0, 0x5c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x60(r8)
    stw r0, 0x60(r7)
    lwz r0, 0x64(r8)
    stw r0, 0x64(r7)
    lwz r0, 0x68(r8)
    stw r0, 0x68(r7)
    lwz r0, 0x6c(r8)
    stw r0, 0x6c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    addi r6, r6, 0x80
    lwz r0, 0x70(r8)
    stw r0, 0x70(r7)
    lwz r0, 0x74(r8)
    stw r0, 0x74(r7)
    lwz r0, 0x78(r8)
    stw r0, 0x78(r7)
    lwz r0, 0x7c(r8)
    stw r0, 0x7c(r7)
    addi r7, r7, 0x80
    bdnz lbl_fn_802130BC_000010FC
lbl_fn_802130BC_0000124C:
    slwi r6, r5, 4
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802130BC_0000129C
lbl_fn_802130BC_00001264:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x1
    add r4, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r3)
    addi r6, r6, 0x10
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    addi r3, r3, 0x10
    bdnz lbl_fn_802130BC_00001264
lbl_fn_802130BC_0000129C:
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802130BC_000012B0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802130BC_000012B0:
    stw r24, 0x14(r30)
    stw r25, 0x10(r30)
lbl_fn_802130BC_000012B8:
    lwz r0, 0xc(r30)
    lwz r4, 0x14(r30)
    slwi r3, r0, 4
    lwz r0, 0x18(r1)
    stwux r0, r3, r4
    lwz r0, 0x1c(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x20(r1)
    stw r0, 0x8(r3)
    lwz r0, 0x24(r1)
    stw r0, 0xc(r3)
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0xc(r30)
    b lbl_fn_802130BC_00000D8C
lbl_fn_802130BC_000012F4:
    addi r23, r23, 0x18
lbl_fn_802130BC_000012F8:
    addi r3, r1, 0x28
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802130BC_00000D50
    lwz r3, lbl_8087F518
    mr r4, r31
    bl fn_8046DD20
    lmw r23, 0x66c(r1)
    lwz r0, 0x694(r1)
    mtlr r0
    addi r1, r1, 0x690
    blr
}

asm void fn_802137DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r8, -0x1
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    la r5, lbl_8087DB6C
    la r6, lbl_8087DB68
    stw r31, 0xc(r1)
    li r7, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r8, 0x0(r3)
    stw r8, 0x4(r3)
    stw r8, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    li r3, 0x30
    bl fn_800846FC
    lis r4, fn_80213A7C@ha
    li r5, 0x0
    addi r4, r4, fn_80213A7C@l
    li r6, 0x10
    li r7, 0x2
    bl fn_80695720
    lwz r0, 0x14(r30)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_802137DC_00001598
    lwz r0, 0xc(r30)
    li r4, 0x2
    cmplwi r0, 0x2
    bge lbl_fn_802137DC_000013B4
    mr r4, r0
lbl_fn_802137DC_000013B4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_802137DC_00001584
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_802137DC_00001538
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_802137DC_00001538
lbl_fn_802137DC_000013E8:
    lwz r0, 0x14(r30)
    addi r5, r5, 0x8
    add r8, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r7)
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x20(r8)
    stw r0, 0x20(r7)
    lwz r0, 0x24(r8)
    stw r0, 0x24(r7)
    lwz r0, 0x28(r8)
    stw r0, 0x28(r7)
    lwz r0, 0x2c(r8)
    stw r0, 0x2c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x30(r8)
    stw r0, 0x30(r7)
    lwz r0, 0x34(r8)
    stw r0, 0x34(r7)
    lwz r0, 0x38(r8)
    stw r0, 0x38(r7)
    lwz r0, 0x3c(r8)
    stw r0, 0x3c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x40(r8)
    stw r0, 0x40(r7)
    lwz r0, 0x44(r8)
    stw r0, 0x44(r7)
    lwz r0, 0x48(r8)
    stw r0, 0x48(r7)
    lwz r0, 0x4c(r8)
    stw r0, 0x4c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x50(r8)
    stw r0, 0x50(r7)
    lwz r0, 0x54(r8)
    stw r0, 0x54(r7)
    lwz r0, 0x58(r8)
    stw r0, 0x58(r7)
    lwz r0, 0x5c(r8)
    stw r0, 0x5c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x60(r8)
    stw r0, 0x60(r7)
    lwz r0, 0x64(r8)
    stw r0, 0x64(r7)
    lwz r0, 0x68(r8)
    stw r0, 0x68(r7)
    lwz r0, 0x6c(r8)
    stw r0, 0x6c(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    addi r6, r6, 0x80
    lwz r0, 0x70(r8)
    stw r0, 0x70(r7)
    lwz r0, 0x74(r8)
    stw r0, 0x74(r7)
    lwz r0, 0x78(r8)
    stw r0, 0x78(r7)
    lwz r0, 0x7c(r8)
    stw r0, 0x7c(r7)
    addi r7, r7, 0x80
    bdnz lbl_fn_802137DC_000013E8
lbl_fn_802137DC_00001538:
    slwi r6, r5, 4
    subf r0, r5, r4
    add r3, r3, r6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_802137DC_00001584
lbl_fn_802137DC_00001550:
    lwz r0, 0x14(r30)
    add r4, r0, r6
    lwzx r0, r6, r0
    stw r0, 0x0(r3)
    addi r6, r6, 0x10
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r3)
    addi r3, r3, 0x10
    bdnz lbl_fn_802137DC_00001550
lbl_fn_802137DC_00001584:
    lwz r3, 0x14(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802137DC_00001598
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802137DC_00001598:
    li r4, 0x2
    li r0, 0x0
    stw r31, 0x14(r30)
    mr r3, r30
    stw r4, 0x10(r30)
    stw r0, 0xc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80213A7C(void)
{
    nofralloc
    li r0, 0x0
    li r4, 0x3
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_80213A98(void)
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
    beq lbl_fn_80213A98_00001638
    addic. r0, r3, 0xc
    beq lbl_fn_80213A98_00001628
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80213A98_00001628
    beq lbl_fn_80213A98_00001628
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80213A98_00001628:
    cmpwi r31, 0x0
    ble lbl_fn_80213A98_00001638
    mr r3, r30
    bl dtor_80084684
lbl_fn_80213A98_00001638:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80213B08(void)
{
    nofralloc
    cmpwi r3, 0x2
    beq lbl_fn_80213B08_00001664
    li r3, 0x0
    blr
lbl_fn_80213B08_00001664:
    lwz r0, lbl_8087F23C
    lwz r3, lbl_8087F238
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80213B08_000016BC
lbl_fn_80213B08_00001678:
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bne lbl_fn_80213B08_000016B4
    cmpwi r0, 0x9
    bnelr
    lwz r6, 0x8(r3)
    cmpw r6, r5
    beqlr
    cmpwi r6, 0xa
    bge lbl_fn_80213B08_000016B4
    addi r0, r6, 0xa
    cmpw r0, r5
    bne lbl_fn_80213B08_000016B4
    blr
    blr
lbl_fn_80213B08_000016B4:
    addi r3, r3, 0x18
    bdnz lbl_fn_80213B08_00001678
lbl_fn_80213B08_000016BC:
    li r3, 0x0
    blr
}

asm void fn_80213B78(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bl fn_80211480
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80213B78_00001704
    li r0, 0x0
    b lbl_fn_80213B78_00001988
lbl_fn_80213B78_00001704:
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80213B78_000017EC
    lwz r3, 0x4(r31)
    bl fn_80206C50
    mr r31, r3
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80213B08
    lwz r4, 0x114(r31)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_80213B78_00001988
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80213B78_00001988
    lwz r0, 0xc(r3)
    li r4, 0x0
    lwz r6, 0x80(r31)
    lwz r5, 0x78(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80213B78_000017D8
lbl_fn_80213B78_00001770:
    lwz r0, 0x14(r3)
    add r7, r0, r4
    lwzx r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_80213B78_000017D0
    lwz r0, 0x4(r7)
    cmpw r0, r5
    bne lbl_fn_80213B78_000017D0
    lwz r4, 0xc(r7)
    cmpwi r4, 0x0
    ble lbl_fn_80213B78_000017BC
    lwz r0, 0x8(r7)
    li r3, 0x0
    cmpw r0, r6
    bgt lbl_fn_80213B78_000017DC
    cmpw r6, r4
    bgt lbl_fn_80213B78_000017DC
    li r3, 0x1
    b lbl_fn_80213B78_000017DC
lbl_fn_80213B78_000017BC:
    lwz r0, 0x8(r7)
    subf r0, r0, r6
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80213B78_000017DC
lbl_fn_80213B78_000017D0:
    addi r4, r4, 0x10
    bdnz lbl_fn_80213B78_00001770
lbl_fn_80213B78_000017D8:
    li r3, 0x0
lbl_fn_80213B78_000017DC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80213B78_00001988
lbl_fn_80213B78_000017EC:
    lwz r3, 0x4(r31)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80213B78_000018C0
    lwz r3, 0x4(r31)
    bl fn_8020EFEC
    mr r31, r3
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80213B08
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80213B78_00001988
    lwz r0, 0xc(r3)
    li r4, 0x0
    lwz r6, 0x7c(r31)
    lwz r5, 0x78(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80213B78_000018AC
lbl_fn_80213B78_00001844:
    lwz r0, 0x14(r3)
    add r7, r0, r4
    lwzx r0, r4, r0
    cmpwi r0, 0x2
    bne lbl_fn_80213B78_000018A4
    lwz r0, 0x4(r7)
    cmpw r0, r5
    bne lbl_fn_80213B78_000018A4
    lwz r4, 0xc(r7)
    cmpwi r4, 0x0
    ble lbl_fn_80213B78_00001890
    lwz r0, 0x8(r7)
    li r3, 0x0
    cmpw r0, r6
    bgt lbl_fn_80213B78_000018B0
    cmpw r6, r4
    bgt lbl_fn_80213B78_000018B0
    li r3, 0x1
    b lbl_fn_80213B78_000018B0
lbl_fn_80213B78_00001890:
    lwz r0, 0x8(r7)
    subf r0, r0, r6
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80213B78_000018B0
lbl_fn_80213B78_000018A4:
    addi r4, r4, 0x10
    bdnz lbl_fn_80213B78_00001844
lbl_fn_80213B78_000018AC:
    li r3, 0x0
lbl_fn_80213B78_000018B0:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80213B78_00001988
lbl_fn_80213B78_000018C0:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    bl fn_80213B08
    lbz r0, 0xc2(r31)
    extsb r4, r0
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    bne lbl_fn_80213B78_00001988
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_fn_80213B78_00001988
    lwz r0, 0xc(r3)
    li r4, 0x0
    lwz r5, 0x4(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80213B78_00001978
lbl_fn_80213B78_00001910:
    lwz r0, 0x14(r3)
    add r6, r0, r4
    lwzx r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_fn_80213B78_00001970
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80213B78_00001970
    lwz r4, 0xc(r6)
    cmpwi r4, 0x0
    ble lbl_fn_80213B78_0000195C
    lwz r0, 0x8(r6)
    li r3, 0x0
    cmpw r0, r5
    bgt lbl_fn_80213B78_0000197C
    cmpw r5, r4
    bgt lbl_fn_80213B78_0000197C
    li r3, 0x1
    b lbl_fn_80213B78_0000197C
lbl_fn_80213B78_0000195C:
    lwz r0, 0x8(r6)
    subf r0, r0, r5
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80213B78_0000197C
lbl_fn_80213B78_00001970:
    addi r4, r4, 0x10
    bdnz lbl_fn_80213B78_00001910
lbl_fn_80213B78_00001978:
    li r3, 0x0
lbl_fn_80213B78_0000197C:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80213B78_00001988:
    lwz r31, 0x1c(r1)
    mr r3, r0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
