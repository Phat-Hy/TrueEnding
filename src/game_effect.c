#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8001A464(void);
extern void fn_8001A65C(void);
extern void fn_8001A788(void);
extern void fn_8001AD80(void);
extern void fn_8001ADE8(void);
extern void fn_8001AEDC(void);
extern void fn_8001B5DC(void);
extern void fn_8001B634(void);
extern void fn_8001B714(void);
extern void fn_8001B984(void);
extern void fn_8001BC38(void);
extern void fn_8001BCB4(void);
extern void fn_8001BD14(void);
extern void fn_8001BE00(void);
extern void fn_8001BEB0(void);
extern void fn_8001BF44(void);
extern void fn_8001BF58(void);
extern void fn_8001BF64(void);
extern void fn_800844D8(void);
extern void fn_8067E23C(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8072FF60[];
extern u8 lbl_8072FF68[];
extern u8 lbl_807307A0[];
extern u8 lbl_80777290[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];

/* Small data declarations */
extern u32 lbl_80880798;
extern u32 lbl_808807AC;
extern u32 lbl_808807B0;
extern u32 lbl_808807B8;

/* Function declarations */
void fn_80039950(void);
void fn_80039D24(void);
void fn_80039E74(void);
void fn_8003A044(void);
void fn_8003A0D4(void);
void fn_8003A580(void);
void fn_8003A5C8(void);
void fn_8003A988(void);
void fn_8003AAD8(void);
void fn_8003ACA8(void);
void fn_8003AD38(void);
void fn_8003B2A4(void);
void fn_8003B2F4(void);
void fn_8003B680(void);
void fn_8003B7D0(void);
void fn_8003B9A0(void);
void fn_8003BA30(void);
void fn_8003BEB0(void);
void fn_8003C074(void);
void fn_8003C0C4(void);
void fn_8003C454(void);
void fn_8003C5A4(void);
void fn_8003C774(void);
void fn_8003C804(void);
void fn_8003CBE0(void);
void fn_8003CC44(void);
void fn_8003CCD4(void);
void fn_8003CDA8(void);
void fn_8003CDB0(void);
void fn_8003D084(void);
void fn_8003D298(void);
void fn_8003D3F8(void);
void fn_8003D6E8(void);
void fn_8003DBA4(void);
void fn_8003DD50(void);
void fn_8003DEE0(void);
void fn_8003E120(void);
void fn_8003E4A4(void);
void fn_8003E530(void);

asm void fn_80039950(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lis r0, 0x4330
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    lis r28, lbl_807C68C0@ha
    addi r31, r28, lbl_807C68C0@l
    stw r0, 0x58(r1)
    lwz r3, 0x20(r31)
    stw r0, 0x60(r1)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80039950_00000398
    lis r30, lbl_807C6A40@ha
    addi r29, r30, lbl_807C6A40@l
    lwz r0, 0x18(r29)
    cmpwi r0, 0x4
    bne lbl_fn_80039950_000001C8
    lwz r0, 0x30(r31)
    lis r3, lbl_8072FF60@ha
    lfd f1, lbl_8072FF60@l(r3)
    slwi r0, r0, 1
    lfs f2, 0x1c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80039950_00000090
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_80039950_000000DC
lbl_fn_80039950_00000090:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80039950_000000D8
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r0, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x5
    stw r0, 0x50(r1)
    stw r29, 0x54(r1)
    bl fn_8001AEDC
    stw r29, lbl_807C6A40@l(r30)
    li r0, 0x8
    b lbl_fn_80039950_000000DC
lbl_fn_80039950_000000D8:
    li r0, -0x1
lbl_fn_80039950_000000DC:
    cmpwi r0, 0x6
    bne lbl_fn_80039950_000001A4
    lis r4, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    addi r4, r4, lbl_807C68C0@l
    lfd f2, lbl_8072FF60@l(r3)
    lwz r0, 0x30(r4)
    lwz r8, 0x20(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfs f0, lbl_808807AC
    cmpwi r8, 0x0
    lfd f1, 0x60(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r9, 0x6c(r1)
    beq lbl_fn_80039950_00000190
    cmpwi r9, 0x0
    beq lbl_fn_80039950_00000160
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x3
    stw r9, 0x2c(r1)
    stw r8, 0x28(r1)
    bl fn_8001AEDC
    b lbl_fn_80039950_00000190
lbl_fn_80039950_00000160:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r3, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x3
    stw r0, 0x3c(r1)
    stw r8, 0x38(r1)
    bl fn_8001AEDC
lbl_fn_80039950_00000190:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80039950_000003B4
lbl_fn_80039950_000001A4:
    cmpwi r0, 0x8
    bne lbl_fn_80039950_000001C0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80039950_000003B4
lbl_fn_80039950_000001C0:
    li r3, -0x1
    b lbl_fn_80039950_000003B4
lbl_fn_80039950_000001C8:
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80039950_00000380
    lwz r3, lbl_807C68C0@l(r28)
    lwz r4, 0xe0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80039950_000001F0
    cmpwi r4, 0x0
    bne lbl_fn_80039950_000001F8
lbl_fn_80039950_000001F0:
    li r3, 0x0
    b lbl_fn_80039950_00000208
lbl_fn_80039950_000001F8:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r3, 0x6c(r1)
lbl_fn_80039950_00000208:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_80039950_00000248
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1e
    ble lbl_fn_80039950_00000248
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_80039950_000003B4
lbl_fn_80039950_00000248:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80039950_00000268
    cmpwi r4, 0x0
    bne lbl_fn_80039950_00000270
lbl_fn_80039950_00000268:
    li r0, 0x0
    b lbl_fn_80039950_00000280
lbl_fn_80039950_00000270:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r0, 0x6c(r1)
lbl_fn_80039950_00000280:
    lis r3, lbl_807C68C0@ha
    xoris r4, r0, 0x8000
    addi r3, r3, lbl_807C68C0@l
    lis r5, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    stw r4, 0x5c(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r5)
    stw r0, 0x64(r1)
    lfd f2, 0x58(r1)
    lfd f1, 0x60(r1)
    lfs f0, lbl_808807B0
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80039950_00000310
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x5
    stw r0, 0x1c(r1)
    stw r29, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    addi r4, r3, lbl_807C6A40@l
    stw r29, lbl_807C6A40@l(r3)
    lwz r0, 0x28(r4)
    li r3, 0x8
    stw r0, 0x3c(r4)
    b lbl_fn_80039950_000003B4
lbl_fn_80039950_00000310:
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, 0x3c(r30)
    cmpwi r3, 0x0
    bgt lbl_fn_80039950_00000368
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x5
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x28(r30)
    li r3, 0x8
    stw r31, lbl_807C6A40@l(r29)
    stw r0, 0x3c(r30)
    b lbl_fn_80039950_000003B4
lbl_fn_80039950_00000368:
    subi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x3c(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_80039950_000003B4
lbl_fn_80039950_00000380:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r30)
    b lbl_fn_80039950_000003B4
lbl_fn_80039950_00000398:
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0x18(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
lbl_fn_80039950_000003B4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80039D24(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x34(r1)
    addi r4, r4, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lwz r3, lbl_807C68C0@l(r3)
    lwz r4, 0xe0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80039D24_0000040C
    cmpwi r4, 0x0
    bne lbl_fn_80039D24_00000414
lbl_fn_80039D24_0000040C:
    li r3, 0x0
    b lbl_fn_80039D24_00000424
lbl_fn_80039D24_00000414:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_80039D24_00000424:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_80039D24_00000450
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_80039D24_0000050C
lbl_fn_80039D24_00000450:
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80039D24_000004E8
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80039D24_0000049C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80039D24_0000049C:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80039D24_000004EC
lbl_fn_80039D24_000004E8:
    li r0, -0x1
lbl_fn_80039D24_000004EC:
    cmpwi r0, 0x5
    bne lbl_fn_80039D24_00000508
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80039D24_0000050C
lbl_fn_80039D24_00000508:
    li r3, -0x1
lbl_fn_80039D24_0000050C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80039E74(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x48(r1)
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80039E74_000005A8
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80039E74_000005A0
    lwz r0, 0x20(r31)
    li r8, 0x0
    stw r8, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r8, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x4
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_80039E74_000005E4
lbl_fn_80039E74_000005A0:
    li r0, -0x1
    b lbl_fn_80039E74_000005E4
lbl_fn_80039E74_000005A8:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_80039E74_000005E4:
    cmpwi r0, 0x5
    bne lbl_fn_80039E74_00000600
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80039E74_000006DC
lbl_fn_80039E74_00000600:
    cmpwi r0, 0x1
    bne lbl_fn_80039E74_0000061C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80039E74_000006DC
lbl_fn_80039E74_0000061C:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x38(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80039E74_000006D8
    lwz r3, 0x54(r5)
    lwz r4, 0x50(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80039E74_0000068C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80039E74_0000068C:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x14(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x8
    stw r5, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r31, 0xc(r1)
    li r3, 0x4
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80039E74_000006DC
lbl_fn_80039E74_000006D8:
    li r3, -0x1
lbl_fn_80039E74_000006DC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8003A044(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003A044_0000071C
    li r0, -0x1
    b lbl_fn_8003A044_00000728
lbl_fn_8003A044_0000071C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003A044_00000728:
    cmpwi r0, 0x1
    bne lbl_fn_8003A044_00000770
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003A044_00000774
lbl_fn_8003A044_00000770:
    li r3, -0x1
lbl_fn_8003A044_00000774:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003A0D4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x88(r1)
    addi r3, r31, 0x180
    stw r29, 0x84(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003A0D4_000007BC
    li r0, -0x1
    b lbl_fn_8003A0D4_000007C8
lbl_fn_8003A0D4_000007BC:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r0, 0x1
lbl_fn_8003A0D4_000007C8:
    cmpwi r0, 0x1
    bne lbl_fn_8003A0D4_000007D8
    li r3, -0x1
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_000007D8:
    addi r29, r31, 0x180
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8003A0D4_00000874
    addi r30, r31, 0x270
    addi r3, r30, 0x8
    bl fn_8001A464
    addi r29, r30, 0x8
    mr r3, r29
    bl fn_8001A65C
    mr r3, r29
    bl fn_8001A788
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8003A0D4_00000820
    stw r0, 0x4(r30)
    li r0, 0x1
    b lbl_fn_8003A0D4_0000082C
lbl_fn_8003A0D4_00000820:
    li r0, 0x0
    stw r0, 0x4(r30)
    li r0, 0x0
lbl_fn_8003A0D4_0000082C:
    cmpwi r0, 0x0
    beq lbl_fn_8003A0D4_00000858
    addi r3, r31, 0x270
    li r0, 0x1
    addi r4, r31, 0x180
    lwz r3, 0x4(r3)
    stw r3, 0xe0(r4)
    li r3, -0x1
    stw r0, 0x180(r31)
    stw r0, 0x18(r4)
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000858:
    addi r3, r31, 0x180
    li r4, 0x4
    li r0, 0x1
    stw r4, 0x18(r3)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000874:
    cmpwi r0, 0x1
    bne lbl_fn_8003A0D4_000008F8
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003A0D4_000008E0
    lwz r30, 0xe0(r29)
    li r3, 0x0
    lwz r0, 0x1c(r29)
    addi r4, r1, 0x58
    stw r3, 0x64(r1)
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    addi r7, r1, 0x64
    stw r3, 0x60(r1)
    li r3, 0x9
    stw r0, 0x5c(r1)
    stw r30, 0x58(r1)
    bl fn_8001AEDC
    addi r3, r31, 0x0
    li r4, 0x1
    li r0, 0x2
    stw r30, 0x28(r3)
    li r3, -0x1
    stw r4, 0x180(r31)
    stw r0, 0x18(r29)
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_000008E0:
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_000008F8:
    cmpwi r0, 0x2
    bne lbl_fn_8003A0D4_00000AB8
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003A0D4_00000AA0
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003A0D4_00000A98
    lwz r3, 0x20(r30)
    lwz r4, 0xe0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8003A0D4_0000093C
    cmpwi r4, 0x0
    bne lbl_fn_8003A0D4_00000944
lbl_fn_8003A0D4_0000093C:
    li r3, 0x0
    b lbl_fn_8003A0D4_00000954
lbl_fn_8003A0D4_00000944:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r3, 0x6c(r1)
lbl_fn_8003A0D4_00000954:
    addi r5, r31, 0x180
    lwz r0, 0x20(r5)
    cmpw r3, r0
    bge lbl_fn_8003A0D4_000009BC
    addi r3, r31, 0x0
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1e
    ble lbl_fn_8003A0D4_000009BC
    lwz r0, 0x20(r3)
    li r8, 0x0
    li r4, 0x3
    stw r4, 0x18(r5)
    li r3, 0x1
    addi r5, r1, 0x4c
    stw r3, 0x180(r31)
    addi r4, r1, 0x48
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    stw r8, 0x54(r1)
    li r3, 0x4
    stw r8, 0x50(r1)
    stw r8, 0x4c(r1)
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_000009BC:
    addi r3, r31, 0x0
    lwz r4, 0x0(r31)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8003A0D4_000009D8
    cmpwi r4, 0x0
    bne lbl_fn_8003A0D4_000009E0
lbl_fn_8003A0D4_000009D8:
    li r5, 0x0
    b lbl_fn_8003A0D4_000009F0
lbl_fn_8003A0D4_000009E0:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r5, 0x6c(r1)
lbl_fn_8003A0D4_000009F0:
    addi r3, r31, 0x0
    lis r4, 0x4330
    lwz r0, 0x30(r3)
    lis r6, lbl_8072FF60@ha
    xoris r5, r5, 0x8000
    lis r3, lbl_8072FF68@ha
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f3, lbl_8072FF60@l(r6)
    stw r4, 0x70(r1)
    lfd f0, lbl_8072FF68@l(r3)
    lfd f1, 0x70(r1)
    stw r5, 0x6c(r1)
    fsub f1, f1, f3
    stw r4, 0x68(r1)
    lfd f2, 0x68(r1)
    fmul f0, f0, f1
    fsub f1, f2, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_8003A0D4_00000A90
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r0, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x5
    stw r0, 0x3c(r1)
    stw r30, 0x38(r1)
    bl fn_8001AEDC
    addi r4, r31, 0x180
    li r5, 0x3
    lwz r0, 0x28(r4)
    li r3, 0x8
    stw r30, 0x180(r31)
    stw r5, 0x18(r4)
    stw r0, 0x3c(r4)
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000A90:
    li r3, -0x1
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000A98:
    li r3, -0x1
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000AA0:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000AB8:
    cmpwi r0, 0x3
    bne lbl_fn_8003A0D4_00000B2C
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003A0D4_00000B14
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r8, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x4
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x5
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000B14:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000B2C:
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003A0D4_00000C10
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8003A0D4_00000C08
    lwz r3, 0x30(r30)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lwz r8, 0x20(r30)
    xoris r3, r3, 0x8000
    stw r3, 0x74(r1)
    lfd f2, lbl_8072FF60@l(r4)
    cmpwi r8, 0x0
    stw r0, 0x70(r1)
    lfs f0, lbl_808807AC
    lfd f1, 0x70(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r9, 0x6c(r1)
    beq lbl_fn_8003A0D4_00000BF8
    cmpwi r9, 0x0
    beq lbl_fn_8003A0D4_00000BC8
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x3
    stw r9, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    b lbl_fn_8003A0D4_00000BF8
lbl_fn_8003A0D4_00000BC8:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x3
    stw r0, 0x1c(r1)
    stw r8, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_8003A0D4_00000BF8:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x6
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000C08:
    li r3, -0x1
    b lbl_fn_8003A0D4_00000C14
lbl_fn_8003A0D4_00000C10:
    li r3, -0x1
lbl_fn_8003A0D4_00000C14:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8003A580(void)
{
    nofralloc
    lis r5, lbl_807C68C0@ha
    lis r9, lbl_807C6A40@ha
    addi r5, r5, lbl_807C68C0@l
    li r0, 0x1
    addi r8, r9, lbl_807C6A40@l
    lwz r10, 0x7c(r5)
    lwz r7, 0x80(r5)
    li r4, 0x0
    lwz r6, 0x84(r5)
    li r3, 0x1
    lwz r5, 0x88(r5)
    stw r10, 0x1c(r8)
    stw r7, 0x20(r8)
    stw r6, 0x24(r8)
    stw r5, 0x28(r8)
    stw r4, 0x3c(r8)
    stw r0, lbl_807C6A40@l(r9)
    blr
}

asm void fn_8003A5C8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lis r0, 0x4330
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    lis r28, lbl_807C68C0@ha
    addi r31, r28, lbl_807C68C0@l
    stw r0, 0x58(r1)
    lwz r3, 0x20(r31)
    stw r0, 0x60(r1)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003A5C8_00000FFC
    lis r30, lbl_807C6A40@ha
    addi r29, r30, lbl_807C6A40@l
    lwz r0, 0x18(r29)
    cmpwi r0, 0x4
    bne lbl_fn_8003A5C8_00000E40
    lwz r0, 0x30(r31)
    lis r3, lbl_8072FF60@ha
    lfd f1, lbl_8072FF60@l(r3)
    slwi r0, r0, 1
    lfs f2, 0x1c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8003A5C8_00000D08
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_8003A5C8_00000D54
lbl_fn_8003A5C8_00000D08:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8003A5C8_00000D50
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r0, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x5
    stw r0, 0x50(r1)
    stw r29, 0x54(r1)
    bl fn_8001AEDC
    stw r29, lbl_807C6A40@l(r30)
    li r0, 0x8
    b lbl_fn_8003A5C8_00000D54
lbl_fn_8003A5C8_00000D50:
    li r0, -0x1
lbl_fn_8003A5C8_00000D54:
    cmpwi r0, 0x6
    bne lbl_fn_8003A5C8_00000E1C
    lis r4, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    addi r4, r4, lbl_807C68C0@l
    lfd f2, lbl_8072FF60@l(r3)
    lwz r0, 0x30(r4)
    lwz r8, 0x20(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfs f0, lbl_808807AC
    cmpwi r8, 0x0
    lfd f1, 0x60(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r9, 0x6c(r1)
    beq lbl_fn_8003A5C8_00000E08
    cmpwi r9, 0x0
    beq lbl_fn_8003A5C8_00000DD8
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x3
    stw r9, 0x2c(r1)
    stw r8, 0x28(r1)
    bl fn_8001AEDC
    b lbl_fn_8003A5C8_00000E08
lbl_fn_8003A5C8_00000DD8:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r3, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x3
    stw r0, 0x3c(r1)
    stw r8, 0x38(r1)
    bl fn_8001AEDC
lbl_fn_8003A5C8_00000E08:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8003A5C8_00001018
lbl_fn_8003A5C8_00000E1C:
    cmpwi r0, 0x8
    bne lbl_fn_8003A5C8_00000E38
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8003A5C8_00001018
lbl_fn_8003A5C8_00000E38:
    li r3, -0x1
    b lbl_fn_8003A5C8_00001018
lbl_fn_8003A5C8_00000E40:
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003A5C8_00000FE4
    lwz r3, lbl_807C68C0@l(r28)
    lwz r4, 0xe0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8003A5C8_00000E68
    cmpwi r4, 0x0
    bne lbl_fn_8003A5C8_00000E70
lbl_fn_8003A5C8_00000E68:
    li r3, 0x0
    b lbl_fn_8003A5C8_00000E80
lbl_fn_8003A5C8_00000E70:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r3, 0x6c(r1)
lbl_fn_8003A5C8_00000E80:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_8003A5C8_00000EAC
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_8003A5C8_00001018
lbl_fn_8003A5C8_00000EAC:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8003A5C8_00000ECC
    cmpwi r4, 0x0
    bne lbl_fn_8003A5C8_00000ED4
lbl_fn_8003A5C8_00000ECC:
    li r0, 0x0
    b lbl_fn_8003A5C8_00000EE4
lbl_fn_8003A5C8_00000ED4:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r0, 0x6c(r1)
lbl_fn_8003A5C8_00000EE4:
    lis r3, lbl_807C68C0@ha
    xoris r4, r0, 0x8000
    addi r3, r3, lbl_807C68C0@l
    lis r5, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    stw r4, 0x5c(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r5)
    stw r0, 0x64(r1)
    lfd f2, 0x58(r1)
    lfd f1, 0x60(r1)
    lfs f0, lbl_808807B0
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003A5C8_00000F74
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x5
    stw r0, 0x1c(r1)
    stw r29, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    addi r4, r3, lbl_807C6A40@l
    stw r29, lbl_807C6A40@l(r3)
    lwz r0, 0x28(r4)
    li r3, 0x8
    stw r0, 0x3c(r4)
    b lbl_fn_8003A5C8_00001018
lbl_fn_8003A5C8_00000F74:
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, 0x3c(r30)
    cmpwi r3, 0x0
    bgt lbl_fn_8003A5C8_00000FCC
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x5
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x28(r30)
    li r3, 0x8
    stw r31, lbl_807C6A40@l(r29)
    stw r0, 0x3c(r30)
    b lbl_fn_8003A5C8_00001018
lbl_fn_8003A5C8_00000FCC:
    subi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x3c(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_8003A5C8_00001018
lbl_fn_8003A5C8_00000FE4:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r30)
    b lbl_fn_8003A5C8_00001018
lbl_fn_8003A5C8_00000FFC:
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0x18(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
lbl_fn_8003A5C8_00001018:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8003A988(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x34(r1)
    addi r4, r4, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lwz r3, lbl_807C68C0@l(r3)
    lwz r4, 0xe0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8003A988_00001070
    cmpwi r4, 0x0
    bne lbl_fn_8003A988_00001078
lbl_fn_8003A988_00001070:
    li r3, 0x0
    b lbl_fn_8003A988_00001088
lbl_fn_8003A988_00001078:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_8003A988_00001088:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_8003A988_000010B4
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_8003A988_00001170
lbl_fn_8003A988_000010B4:
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8003A988_0000114C
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8003A988_00001100
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8003A988_00001100:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8003A988_00001150
lbl_fn_8003A988_0000114C:
    li r0, -0x1
lbl_fn_8003A988_00001150:
    cmpwi r0, 0x5
    bne lbl_fn_8003A988_0000116C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003A988_00001170
lbl_fn_8003A988_0000116C:
    li r3, -0x1
lbl_fn_8003A988_00001170:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8003AAD8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x48(r1)
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003AAD8_0000120C
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8003AAD8_00001204
    lwz r0, 0x20(r31)
    li r8, 0x0
    stw r8, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r8, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x4
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8003AAD8_00001248
lbl_fn_8003AAD8_00001204:
    li r0, -0x1
    b lbl_fn_8003AAD8_00001248
lbl_fn_8003AAD8_0000120C:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_8003AAD8_00001248:
    cmpwi r0, 0x5
    bne lbl_fn_8003AAD8_00001264
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003AAD8_00001340
lbl_fn_8003AAD8_00001264:
    cmpwi r0, 0x1
    bne lbl_fn_8003AAD8_00001280
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003AAD8_00001340
lbl_fn_8003AAD8_00001280:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x38(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003AAD8_0000133C
    lwz r3, 0x54(r5)
    lwz r4, 0x50(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8003AAD8_000012F0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8003AAD8_000012F0:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x14(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x8
    stw r5, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r31, 0xc(r1)
    li r3, 0x4
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003AAD8_00001340
lbl_fn_8003AAD8_0000133C:
    li r3, -0x1
lbl_fn_8003AAD8_00001340:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8003ACA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003ACA8_00001380
    li r0, -0x1
    b lbl_fn_8003ACA8_0000138C
lbl_fn_8003ACA8_00001380:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003ACA8_0000138C:
    cmpwi r0, 0x1
    bne lbl_fn_8003ACA8_000013D4
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003ACA8_000013D8
lbl_fn_8003ACA8_000013D4:
    li r3, -0x1
lbl_fn_8003ACA8_000013D8:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003AD38(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x98(r1)
    addi r3, r31, 0x180
    stw r29, 0x94(r1)
    lwz r0, 0x10(r3)
    stw r4, 0x78(r1)
    cmpwi r0, 0x1
    stw r4, 0x80(r1)
    blt lbl_fn_8003AD38_0000142C
    li r0, -0x1
    b lbl_fn_8003AD38_00001438
lbl_fn_8003AD38_0000142C:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r0, 0x1
lbl_fn_8003AD38_00001438:
    cmpwi r0, 0x1
    bne lbl_fn_8003AD38_00001448
    li r3, -0x1
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001448:
    addi r5, r31, 0x180
    lwz r0, 0x64(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8003AD38_00001484
    addi r4, r31, 0x0
    li r3, 0x1
    lwz r4, 0x58(r4)
    stw r4, 0x64(r5)
    subf. r0, r4, r4
    stw r3, 0x180(r31)
    ble lbl_fn_8003AD38_000014A8
    li r0, 0x3
    stw r4, 0x64(r5)
    stw r0, 0x18(r5)
    b lbl_fn_8003AD38_000014A8
lbl_fn_8003AD38_00001484:
    addi r3, r31, 0x0
    lwz r4, 0x58(r3)
    subf. r0, r4, r0
    ble lbl_fn_8003AD38_000014A8
    li r3, 0x1
    li r0, 0x3
    stw r4, 0x64(r5)
    stw r3, 0x180(r31)
    stw r0, 0x18(r5)
lbl_fn_8003AD38_000014A8:
    addi r29, r31, 0x180
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8003AD38_00001544
    addi r30, r31, 0x270
    addi r3, r30, 0x8
    bl fn_8001A464
    addi r29, r30, 0x8
    mr r3, r29
    bl fn_8001A65C
    mr r3, r29
    bl fn_8001A788
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8003AD38_000014F0
    stw r0, 0x4(r30)
    li r0, 0x1
    b lbl_fn_8003AD38_000014FC
lbl_fn_8003AD38_000014F0:
    li r0, 0x0
    stw r0, 0x4(r30)
    li r0, 0x0
lbl_fn_8003AD38_000014FC:
    cmpwi r0, 0x0
    beq lbl_fn_8003AD38_00001528
    addi r3, r31, 0x270
    li r0, 0x1
    addi r4, r31, 0x180
    lwz r3, 0x4(r3)
    stw r3, 0xe0(r4)
    li r3, -0x1
    stw r0, 0x180(r31)
    stw r0, 0x18(r4)
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001528:
    addi r3, r31, 0x180
    li r4, 0x4
    li r0, 0x1
    stw r4, 0x18(r3)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001544:
    cmpwi r0, 0x1
    bne lbl_fn_8003AD38_000015C8
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003AD38_000015B0
    lwz r30, 0xe0(r29)
    li r3, 0x0
    lwz r0, 0x1c(r29)
    addi r4, r1, 0x68
    stw r3, 0x74(r1)
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    addi r7, r1, 0x74
    stw r3, 0x70(r1)
    li r3, 0x9
    stw r0, 0x6c(r1)
    stw r30, 0x68(r1)
    bl fn_8001AEDC
    addi r3, r31, 0x0
    li r4, 0x1
    li r0, 0x2
    stw r30, 0x28(r3)
    li r3, -0x1
    stw r4, 0x180(r31)
    stw r0, 0x18(r29)
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_000015B0:
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_000015C8:
    cmpwi r0, 0x2
    bne lbl_fn_8003AD38_00001770
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003AD38_00001758
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003AD38_00001750
    lwz r3, 0x20(r30)
    lwz r4, 0xe0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8003AD38_0000160C
    cmpwi r4, 0x0
    bne lbl_fn_8003AD38_00001614
lbl_fn_8003AD38_0000160C:
    li r3, 0x0
    b lbl_fn_8003AD38_00001624
lbl_fn_8003AD38_00001614:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r3, 0x8c(r1)
lbl_fn_8003AD38_00001624:
    addi r5, r31, 0x180
    lwz r0, 0x20(r5)
    cmpw r3, r0
    bge lbl_fn_8003AD38_00001680
    addi r3, r31, 0x0
    li r8, 0x0
    lwz r0, 0x20(r3)
    li r4, 0x3
    stw r4, 0x18(r5)
    li r3, 0x1
    addi r4, r1, 0x58
    addi r5, r1, 0x5c
    stw r3, 0x180(r31)
    addi r6, r1, 0x60
    addi r7, r1, 0x64
    li r3, 0x4
    stw r8, 0x64(r1)
    stw r8, 0x60(r1)
    stw r8, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001680:
    addi r3, r31, 0x0
    lwz r4, 0x0(r31)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8003AD38_0000169C
    cmpwi r4, 0x0
    bne lbl_fn_8003AD38_000016A4
lbl_fn_8003AD38_0000169C:
    li r5, 0x0
    b lbl_fn_8003AD38_000016B4
lbl_fn_8003AD38_000016A4:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r5, 0x8c(r1)
lbl_fn_8003AD38_000016B4:
    addi r3, r31, 0x0
    lis r4, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    xoris r3, r5, 0x8000
    stw r3, 0x7c(r1)
    lis r3, lbl_8072FF68@ha
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r4)
    stw r0, 0x84(r1)
    lfd f2, 0x78(r1)
    lfd f1, 0x80(r1)
    lfd f0, lbl_8072FF68@l(r3)
    fsub f2, f2, f3
    fsub f1, f1, f3
    fmul f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003AD38_00001748
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x54(r1)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    stw r0, 0x50(r1)
    addi r7, r1, 0x54
    li r3, 0x5
    stw r0, 0x4c(r1)
    stw r30, 0x48(r1)
    bl fn_8001AEDC
    addi r4, r31, 0x180
    li r5, 0x3
    lwz r0, 0x28(r4)
    li r3, 0x8
    stw r30, 0x180(r31)
    stw r5, 0x18(r4)
    stw r0, 0x3c(r4)
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001748:
    li r3, -0x1
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001750:
    li r3, -0x1
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001758:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001770:
    cmpwi r0, 0x3
    bne lbl_fn_8003AD38_00001858
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003AD38_00001840
    lwz r0, 0x30(r30)
    lis r3, lbl_8072FF60@ha
    lwz r8, 0x20(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f2, lbl_8072FF60@l(r3)
    cmpwi r8, 0x0
    lfd f1, 0x78(r1)
    lfs f0, lbl_808807AC
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x88(r1)
    lwz r9, 0x8c(r1)
    beq lbl_fn_8003AD38_00001830
    cmpwi r9, 0x0
    beq lbl_fn_8003AD38_00001800
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x3
    stw r9, 0x2c(r1)
    stw r8, 0x28(r1)
    bl fn_8001AEDC
    b lbl_fn_8003AD38_00001830
lbl_fn_8003AD38_00001800:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r3, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x3
    stw r0, 0x3c(r1)
    stw r8, 0x38(r1)
    bl fn_8001AEDC
lbl_fn_8003AD38_00001830:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x6
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001840:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001858:
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003AD38_00001934
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8003AD38_0000192C
    lwz r0, 0x30(r30)
    lis r3, lbl_8072FF60@ha
    lwz r8, 0x20(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f2, lbl_8072FF60@l(r3)
    cmpwi r8, 0x0
    lfd f1, 0x80(r1)
    lfs f0, lbl_808807AC
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x88(r1)
    lwz r9, 0x8c(r1)
    beq lbl_fn_8003AD38_0000191C
    cmpwi r9, 0x0
    beq lbl_fn_8003AD38_000018EC
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x3
    stw r9, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    b lbl_fn_8003AD38_0000191C
lbl_fn_8003AD38_000018EC:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x3
    stw r0, 0x1c(r1)
    stw r8, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_8003AD38_0000191C:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x6
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_0000192C:
    li r3, -0x1
    b lbl_fn_8003AD38_00001938
lbl_fn_8003AD38_00001934:
    li r3, -0x1
lbl_fn_8003AD38_00001938:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8003B2A4(void)
{
    nofralloc
    lis r5, lbl_807C68C0@ha
    lis r10, lbl_807C6A40@ha
    addi r5, r5, lbl_807C68C0@l
    li r0, 0x1
    addi r9, r10, lbl_807C6A40@l
    lwz r11, 0x7c(r5)
    lwz r8, 0x80(r5)
    li r4, 0x0
    lwz r7, 0x84(r5)
    li r3, 0x1
    lwz r6, 0x88(r5)
    lwz r5, 0x90(r5)
    stw r11, 0x1c(r9)
    stw r8, 0x20(r9)
    stw r7, 0x24(r9)
    stw r6, 0x28(r9)
    stw r5, 0x30(r9)
    stw r4, 0x3c(r9)
    stw r0, lbl_807C6A40@l(r10)
    blr
}

asm void fn_8003B2F4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    lis r0, 0x4330
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    lis r28, lbl_807C68C0@ha
    addi r29, r28, lbl_807C68C0@l
    stw r0, 0x38(r1)
    lwz r3, 0x20(r29)
    stw r0, 0x40(r1)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003B2F4_00001CF4
    lis r31, lbl_807C6A40@ha
    addi r30, r31, lbl_807C6A40@l
    lwz r0, 0x18(r30)
    cmpwi r0, 0x4
    bne lbl_fn_8003B2F4_00001B78
    lwz r0, 0x30(r29)
    lis r3, lbl_8072FF60@ha
    lfd f1, lbl_8072FF60@l(r3)
    slwi r0, r0, 1
    lfs f2, 0x1c(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8003B2F4_00001A34
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x6
    b lbl_fn_8003B2F4_00001A80
lbl_fn_8003B2F4_00001A34:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8003B2F4_00001A7C
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r0, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x5
    stw r0, 0x30(r1)
    stw r30, 0x34(r1)
    bl fn_8001AEDC
    stw r30, lbl_807C6A40@l(r31)
    li r0, 0x8
    b lbl_fn_8003B2F4_00001A80
lbl_fn_8003B2F4_00001A7C:
    li r0, -0x1
lbl_fn_8003B2F4_00001A80:
    cmpwi r0, 0x6
    bne lbl_fn_8003B2F4_00001B48
    lis r4, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    addi r4, r4, lbl_807C68C0@l
    lfd f2, lbl_8072FF60@l(r3)
    lwz r0, 0x30(r4)
    lwz r8, 0x20(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    lfs f0, lbl_808807AC
    cmpwi r8, 0x0
    lfd f1, 0x40(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r9, 0x4c(r1)
    beq lbl_fn_8003B2F4_00001B34
    cmpwi r9, 0x0
    beq lbl_fn_8003B2F4_00001B04
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x3
    stw r9, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    b lbl_fn_8003B2F4_00001B34
lbl_fn_8003B2F4_00001B04:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x3
    stw r0, 0x1c(r1)
    stw r8, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_8003B2F4_00001B34:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8003B2F4_00001D10
lbl_fn_8003B2F4_00001B48:
    cmpwi r0, 0x8
    bne lbl_fn_8003B2F4_00001B70
    bl fn_8003BEB0
    cmpwi r3, 0x8
    bne lbl_fn_8003B2F4_00001D10
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8003B2F4_00001D10
lbl_fn_8003B2F4_00001B70:
    li r3, -0x1
    b lbl_fn_8003B2F4_00001D10
lbl_fn_8003B2F4_00001B78:
    lwz r3, 0xe0(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003B2F4_00001CDC
    lwz r3, lbl_807C68C0@l(r28)
    lwz r4, 0xe0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8003B2F4_00001BA0
    cmpwi r4, 0x0
    bne lbl_fn_8003B2F4_00001BA8
lbl_fn_8003B2F4_00001BA0:
    li r3, 0x0
    b lbl_fn_8003B2F4_00001BB8
lbl_fn_8003B2F4_00001BA8:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x48(r1)
    lwz r3, 0x4c(r1)
lbl_fn_8003B2F4_00001BB8:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_8003B2F4_00001BE4
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_8003B2F4_00001D10
lbl_fn_8003B2F4_00001BE4:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8003B2F4_00001C04
    cmpwi r4, 0x0
    bne lbl_fn_8003B2F4_00001C0C
lbl_fn_8003B2F4_00001C04:
    li r0, 0x0
    b lbl_fn_8003B2F4_00001C1C
lbl_fn_8003B2F4_00001C0C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
lbl_fn_8003B2F4_00001C1C:
    lis r3, lbl_807C68C0@ha
    xoris r4, r0, 0x8000
    addi r3, r3, lbl_807C68C0@l
    lis r5, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    stw r4, 0x3c(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r5)
    stw r0, 0x44(r1)
    lfd f2, 0x38(r1)
    lfd f1, 0x40(r1)
    lfs f0, lbl_808807B0
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003B2F4_00001C8C
    bl fn_8003BEB0
    cmpwi r3, 0x8
    bne lbl_fn_8003B2F4_00001D10
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    addi r4, r3, lbl_807C6A40@l
    stw r0, lbl_807C6A40@l(r3)
    lwz r0, 0x28(r4)
    li r3, 0x8
    stw r0, 0x3c(r4)
    b lbl_fn_8003B2F4_00001D10
lbl_fn_8003B2F4_00001C8C:
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r3, 0x3c(r31)
    cmpwi r3, 0x0
    bgt lbl_fn_8003B2F4_00001CC4
    bl fn_8003BEB0
    cmpwi r3, 0x8
    bne lbl_fn_8003B2F4_00001D10
    lwz r3, 0x28(r31)
    li r0, 0x1
    stw r3, 0x3c(r31)
    li r3, 0x8
    stw r0, lbl_807C6A40@l(r30)
    b lbl_fn_8003B2F4_00001D10
lbl_fn_8003B2F4_00001CC4:
    subi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x3c(r31)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r30)
    b lbl_fn_8003B2F4_00001D10
lbl_fn_8003B2F4_00001CDC:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r30)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r31)
    b lbl_fn_8003B2F4_00001D10
lbl_fn_8003B2F4_00001CF4:
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0x18(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
lbl_fn_8003B2F4_00001D10:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8003B680(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x34(r1)
    addi r4, r4, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lwz r3, lbl_807C68C0@l(r3)
    lwz r4, 0xe0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8003B680_00001D68
    cmpwi r4, 0x0
    bne lbl_fn_8003B680_00001D70
lbl_fn_8003B680_00001D68:
    li r3, 0x0
    b lbl_fn_8003B680_00001D80
lbl_fn_8003B680_00001D70:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_8003B680_00001D80:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_8003B680_00001DAC
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_8003B680_00001E68
lbl_fn_8003B680_00001DAC:
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8003B680_00001E44
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8003B680_00001DF8
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8003B680_00001DF8:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8003B680_00001E48
lbl_fn_8003B680_00001E44:
    li r0, -0x1
lbl_fn_8003B680_00001E48:
    cmpwi r0, 0x5
    bne lbl_fn_8003B680_00001E64
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003B680_00001E68
lbl_fn_8003B680_00001E64:
    li r3, -0x1
lbl_fn_8003B680_00001E68:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8003B7D0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x48(r1)
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003B7D0_00001F04
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8003B7D0_00001EFC
    lwz r0, 0x20(r31)
    li r8, 0x0
    stw r8, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r8, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x4
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8003B7D0_00001F40
lbl_fn_8003B7D0_00001EFC:
    li r0, -0x1
    b lbl_fn_8003B7D0_00001F40
lbl_fn_8003B7D0_00001F04:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_8003B7D0_00001F40:
    cmpwi r0, 0x5
    bne lbl_fn_8003B7D0_00001F5C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003B7D0_00002038
lbl_fn_8003B7D0_00001F5C:
    cmpwi r0, 0x1
    bne lbl_fn_8003B7D0_00001F78
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003B7D0_00002038
lbl_fn_8003B7D0_00001F78:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x38(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003B7D0_00002034
    lwz r3, 0x54(r5)
    lwz r4, 0x50(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8003B7D0_00001FE8
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8003B7D0_00001FE8:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x14(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x8
    stw r5, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r31, 0xc(r1)
    li r3, 0x4
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003B7D0_00002038
lbl_fn_8003B7D0_00002034:
    li r3, -0x1
lbl_fn_8003B7D0_00002038:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8003B9A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003B9A0_00002078
    li r0, -0x1
    b lbl_fn_8003B9A0_00002084
lbl_fn_8003B9A0_00002078:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003B9A0_00002084:
    cmpwi r0, 0x1
    bne lbl_fn_8003B9A0_000020CC
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003B9A0_000020D0
lbl_fn_8003B9A0_000020CC:
    li r3, -0x1
lbl_fn_8003B9A0_000020D0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003BA30(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x78(r1)
    addi r3, r31, 0x180
    stw r29, 0x74(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003BA30_00002118
    li r0, -0x1
    b lbl_fn_8003BA30_00002124
lbl_fn_8003BA30_00002118:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r0, 0x1
lbl_fn_8003BA30_00002124:
    cmpwi r0, 0x1
    bne lbl_fn_8003BA30_00002134
    li r3, -0x1
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_00002134:
    addi r29, r31, 0x180
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8003BA30_000021D0
    addi r30, r31, 0x270
    addi r3, r30, 0x8
    bl fn_8001A464
    addi r29, r30, 0x8
    mr r3, r29
    bl fn_8001A65C
    mr r3, r29
    bl fn_8001A788
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8003BA30_0000217C
    stw r0, 0x4(r30)
    li r0, 0x1
    b lbl_fn_8003BA30_00002188
lbl_fn_8003BA30_0000217C:
    li r0, 0x0
    stw r0, 0x4(r30)
    li r0, 0x0
lbl_fn_8003BA30_00002188:
    cmpwi r0, 0x0
    beq lbl_fn_8003BA30_000021B4
    addi r3, r31, 0x270
    li r0, 0x1
    addi r4, r31, 0x180
    lwz r3, 0x4(r3)
    stw r3, 0xe0(r4)
    li r3, -0x1
    stw r0, 0x180(r31)
    stw r0, 0x18(r4)
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_000021B4:
    addi r3, r31, 0x180
    li r4, 0x4
    li r0, 0x1
    stw r4, 0x18(r3)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_000021D0:
    cmpwi r0, 0x1
    bne lbl_fn_8003BA30_00002254
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003BA30_0000223C
    lwz r30, 0xe0(r29)
    li r3, 0x0
    lwz r0, 0x1c(r29)
    addi r4, r1, 0x48
    stw r3, 0x54(r1)
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    stw r3, 0x50(r1)
    li r3, 0x9
    stw r0, 0x4c(r1)
    stw r30, 0x48(r1)
    bl fn_8001AEDC
    addi r3, r31, 0x0
    li r4, 0x1
    li r0, 0x2
    stw r30, 0x28(r3)
    li r3, -0x1
    stw r4, 0x180(r31)
    stw r0, 0x18(r29)
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_0000223C:
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_00002254:
    cmpwi r0, 0x2
    bne lbl_fn_8003BA30_000023E8
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003BA30_000023D0
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003BA30_000023C8
    lwz r3, 0x20(r30)
    lwz r4, 0xe0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8003BA30_00002298
    cmpwi r4, 0x0
    bne lbl_fn_8003BA30_000022A0
lbl_fn_8003BA30_00002298:
    li r3, 0x0
    b lbl_fn_8003BA30_000022B0
lbl_fn_8003BA30_000022A0:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x58(r1)
    lwz r3, 0x5c(r1)
lbl_fn_8003BA30_000022B0:
    addi r5, r31, 0x180
    lwz r0, 0x20(r5)
    cmpw r3, r0
    bge lbl_fn_8003BA30_0000230C
    addi r3, r31, 0x0
    li r8, 0x0
    lwz r0, 0x20(r3)
    li r4, 0x3
    stw r4, 0x18(r5)
    li r3, 0x1
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    stw r3, 0x180(r31)
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    li r3, 0x4
    stw r8, 0x44(r1)
    stw r8, 0x40(r1)
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_0000230C:
    addi r3, r31, 0x0
    lwz r4, 0x0(r31)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8003BA30_00002328
    cmpwi r4, 0x0
    bne lbl_fn_8003BA30_00002330
lbl_fn_8003BA30_00002328:
    li r5, 0x0
    b lbl_fn_8003BA30_00002340
lbl_fn_8003BA30_00002330:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x58(r1)
    lwz r5, 0x5c(r1)
lbl_fn_8003BA30_00002340:
    addi r3, r31, 0x0
    lis r4, 0x4330
    lwz r0, 0x30(r3)
    lis r6, lbl_8072FF60@ha
    xoris r5, r5, 0x8000
    lis r3, lbl_8072FF68@ha
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfd f3, lbl_8072FF60@l(r6)
    stw r4, 0x60(r1)
    lfd f0, lbl_8072FF68@l(r3)
    lfd f1, 0x60(r1)
    stw r5, 0x5c(r1)
    fsub f1, f1, f3
    stw r4, 0x58(r1)
    lfd f2, 0x58(r1)
    fmul f0, f0, f1
    fsub f1, f2, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_8003BA30_000023C0
    addi r30, r31, 0x180
    li r3, 0x3
    li r0, 0x1
    stw r3, 0x18(r30)
    stw r0, 0x180(r31)
    bl fn_8003BEB0
    cmpwi r3, 0x8
    bne lbl_fn_8003BA30_00002544
    lwz r0, 0x28(r30)
    li r3, 0x8
    stw r0, 0x3c(r30)
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_000023C0:
    li r3, -0x1
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_000023C8:
    li r3, -0x1
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_000023D0:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_000023E8:
    cmpwi r0, 0x3
    bne lbl_fn_8003BA30_0000245C
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003BA30_00002444
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r8, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x4
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x5
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_00002444:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r29)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_0000245C:
    addi r30, r31, 0x0
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003BA30_00002540
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8003BA30_00002538
    lwz r3, 0x30(r30)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lwz r8, 0x20(r30)
    xoris r3, r3, 0x8000
    stw r3, 0x64(r1)
    lfd f2, lbl_8072FF60@l(r4)
    cmpwi r8, 0x0
    stw r0, 0x60(r1)
    lfs f0, lbl_808807AC
    lfd f1, 0x60(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r9, 0x5c(r1)
    beq lbl_fn_8003BA30_00002528
    cmpwi r9, 0x0
    beq lbl_fn_8003BA30_000024F8
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x3
    stw r9, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    b lbl_fn_8003BA30_00002528
lbl_fn_8003BA30_000024F8:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x3
    stw r0, 0x1c(r1)
    stw r8, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_8003BA30_00002528:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x6
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_00002538:
    li r3, -0x1
    b lbl_fn_8003BA30_00002544
lbl_fn_8003BA30_00002540:
    li r3, -0x1
lbl_fn_8003BA30_00002544:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8003BEB0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    bl fn_80680CF8
    lis r4, 0xa57f
    lis r28, lbl_807C6A40@ha
    subi r0, r4, 0x4afd
    mulhw r4, r0, r3
    addi r29, r28, lbl_807C6A40@l
    lwz r0, 0x30(r29)
    add r4, r4, r3
    srawi r4, r4, 6
    srwi r5, r4, 31
    add r4, r4, r5
    mulli r4, r4, 0x63
    subf r3, r4, r3
    cmpw r3, r0
    bge lbl_fn_8003BEB0_000026CC
    lis r30, lbl_807C68C0@ha
    lwz r4, 0x64(r29)
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_8003BEB0_00002690
    lwz r3, lbl_807C68C0@l(r30)
    lwz r4, 0x64(r29)
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_8003BEB0_00002654
    addi r3, r30, lbl_807C68C0@l
    li r31, 0x0
    lwz r8, 0x20(r3)
    addi r4, r1, 0x38
    lwz r0, 0x64(r29)
    addi r5, r1, 0x3c
    stw r31, 0x44(r1)
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    li r3, 0x7
    stw r31, 0x40(r1)
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    lwz r3, 0x64(r29)
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r28)
    addi r4, r3, 0x1
    lwz r3, lbl_807C68C0@l(r30)
    stw r4, 0x64(r29)
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_8003BEB0_00002648
    li r3, 0x8
    b lbl_fn_8003BEB0_00002704
lbl_fn_8003BEB0_00002648:
    stw r31, 0x64(r29)
    li r3, 0x8
    b lbl_fn_8003BEB0_00002704
lbl_fn_8003BEB0_00002654:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r0, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x5
    stw r0, 0x2c(r1)
    stw r31, 0x28(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r28)
    li r3, 0x8
    b lbl_fn_8003BEB0_00002704
lbl_fn_8003BEB0_00002690:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x5
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r28)
    li r3, 0x8
    b lbl_fn_8003BEB0_00002704
lbl_fn_8003BEB0_000026CC:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x5
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r28)
    li r3, 0x8
lbl_fn_8003BEB0_00002704:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8003C074(void)
{
    nofralloc
    lis r5, lbl_807C68C0@ha
    lis r10, lbl_807C6A40@ha
    addi r5, r5, lbl_807C68C0@l
    li r0, 0x1
    addi r9, r10, lbl_807C6A40@l
    lwz r11, 0x7c(r5)
    lwz r8, 0x80(r5)
    li r4, 0x0
    lwz r7, 0x84(r5)
    li r3, 0x1
    lwz r6, 0x88(r5)
    lwz r5, 0x8c(r5)
    stw r11, 0x1c(r9)
    stw r8, 0x20(r9)
    stw r7, 0x24(r9)
    stw r6, 0x28(r9)
    stw r5, 0x2c(r9)
    stw r4, 0x3c(r9)
    stw r0, lbl_807C6A40@l(r10)
    blr
}

asm void fn_8003C0C4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lis r0, 0x4330
    stw r31, 0x7c(r1)
    lis r31, lbl_807C68C0@ha
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    addi r29, r31, lbl_807C68C0@l
    stw r0, 0x58(r1)
    lwz r3, 0x20(r29)
    stw r0, 0x60(r1)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003C0C4_00002ACC
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8003C0C4_00002938
    lwz r0, 0x30(r29)
    lis r3, lbl_8072FF60@ha
    lfd f1, lbl_8072FF60@l(r3)
    slwi r0, r0, 1
    lfs f2, 0x1c(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8003C0C4_00002800
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_8003C0C4_0000284C
lbl_fn_8003C0C4_00002800:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8003C0C4_00002848
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r0, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x5
    stw r0, 0x50(r1)
    stw r29, 0x54(r1)
    bl fn_8001AEDC
    stw r29, lbl_807C6A40@l(r30)
    li r0, 0x8
    b lbl_fn_8003C0C4_0000284C
lbl_fn_8003C0C4_00002848:
    li r0, -0x1
lbl_fn_8003C0C4_0000284C:
    cmpwi r0, 0x6
    bne lbl_fn_8003C0C4_00002914
    lis r4, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    addi r4, r4, lbl_807C68C0@l
    lfd f2, lbl_8072FF60@l(r3)
    lwz r0, 0x30(r4)
    lwz r8, 0x20(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfs f0, lbl_808807AC
    cmpwi r8, 0x0
    lfd f1, 0x60(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r9, 0x6c(r1)
    beq lbl_fn_8003C0C4_00002900
    cmpwi r9, 0x0
    beq lbl_fn_8003C0C4_000028D0
    li r0, 0x0
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r0, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x3
    stw r9, 0x2c(r1)
    stw r8, 0x28(r1)
    bl fn_8001AEDC
    b lbl_fn_8003C0C4_00002900
lbl_fn_8003C0C4_000028D0:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r3, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x3
    stw r0, 0x3c(r1)
    stw r8, 0x38(r1)
    bl fn_8001AEDC
lbl_fn_8003C0C4_00002900:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8003C0C4_00002AE8
lbl_fn_8003C0C4_00002914:
    cmpwi r0, 0x8
    bne lbl_fn_8003C0C4_00002930
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8003C0C4_00002AE8
lbl_fn_8003C0C4_00002930:
    li r3, -0x1
    b lbl_fn_8003C0C4_00002AE8
lbl_fn_8003C0C4_00002938:
    lwz r3, 0x2c(r3)
    lwz r4, lbl_807C68C0@l(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8003C0C4_00002950
    cmpwi r4, 0x0
    bne lbl_fn_8003C0C4_00002958
lbl_fn_8003C0C4_00002950:
    li r3, 0x0
    b lbl_fn_8003C0C4_00002968
lbl_fn_8003C0C4_00002958:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r3, 0x6c(r1)
lbl_fn_8003C0C4_00002968:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_8003C0C4_00002994
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_8003C0C4_00002AE8
lbl_fn_8003C0C4_00002994:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8003C0C4_000029B4
    cmpwi r4, 0x0
    bne lbl_fn_8003C0C4_000029BC
lbl_fn_8003C0C4_000029B4:
    li r0, 0x0
    b lbl_fn_8003C0C4_000029CC
lbl_fn_8003C0C4_000029BC:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r0, 0x6c(r1)
lbl_fn_8003C0C4_000029CC:
    lis r3, lbl_807C68C0@ha
    xoris r4, r0, 0x8000
    addi r3, r3, lbl_807C68C0@l
    lis r5, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    stw r4, 0x5c(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r5)
    stw r0, 0x64(r1)
    lfd f2, 0x58(r1)
    lfd f1, 0x60(r1)
    lfs f0, lbl_808807B0
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fmuls f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003C0C4_00002A5C
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x5
    stw r0, 0x1c(r1)
    stw r29, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    addi r4, r3, lbl_807C6A40@l
    stw r29, lbl_807C6A40@l(r3)
    lwz r0, 0x28(r4)
    li r3, 0x8
    stw r0, 0x3c(r4)
    b lbl_fn_8003C0C4_00002AE8
lbl_fn_8003C0C4_00002A5C:
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, 0x3c(r30)
    cmpwi r3, 0x0
    bgt lbl_fn_8003C0C4_00002AB4
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x5
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x28(r30)
    li r3, 0x8
    stw r31, lbl_807C6A40@l(r29)
    stw r0, 0x3c(r30)
    b lbl_fn_8003C0C4_00002AE8
lbl_fn_8003C0C4_00002AB4:
    subi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x3c(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_8003C0C4_00002AE8
lbl_fn_8003C0C4_00002ACC:
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0x18(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
lbl_fn_8003C0C4_00002AE8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8003C454(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    lis r4, lbl_807C68C0@ha
    stw r0, 0x34(r1)
    addi r3, r3, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lwz r3, 0x2c(r3)
    lwz r4, lbl_807C68C0@l(r4)
    cmpwi r3, 0x0
    ble lbl_fn_8003C454_00002B3C
    cmpwi r4, 0x0
    bne lbl_fn_8003C454_00002B44
lbl_fn_8003C454_00002B3C:
    li r3, 0x0
    b lbl_fn_8003C454_00002B54
lbl_fn_8003C454_00002B44:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_8003C454_00002B54:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_8003C454_00002B80
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_8003C454_00002C3C
lbl_fn_8003C454_00002B80:
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8003C454_00002C18
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8003C454_00002BCC
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8003C454_00002BCC:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8003C454_00002C1C
lbl_fn_8003C454_00002C18:
    li r0, -0x1
lbl_fn_8003C454_00002C1C:
    cmpwi r0, 0x5
    bne lbl_fn_8003C454_00002C38
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003C454_00002C3C
lbl_fn_8003C454_00002C38:
    li r3, -0x1
lbl_fn_8003C454_00002C3C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8003C5A4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x48(r1)
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003C5A4_00002CD8
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8003C5A4_00002CD0
    lwz r0, 0x20(r31)
    li r8, 0x0
    stw r8, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r8, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x4
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8003C5A4_00002D14
lbl_fn_8003C5A4_00002CD0:
    li r0, -0x1
    b lbl_fn_8003C5A4_00002D14
lbl_fn_8003C5A4_00002CD8:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_8003C5A4_00002D14:
    cmpwi r0, 0x5
    bne lbl_fn_8003C5A4_00002D30
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003C5A4_00002E0C
lbl_fn_8003C5A4_00002D30:
    cmpwi r0, 0x1
    bne lbl_fn_8003C5A4_00002D4C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003C5A4_00002E0C
lbl_fn_8003C5A4_00002D4C:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x38(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003C5A4_00002E08
    lwz r3, 0x54(r5)
    lwz r4, 0x50(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8003C5A4_00002DBC
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8003C5A4_00002DBC:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x14(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x8
    stw r5, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r31, 0xc(r1)
    li r3, 0x4
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003C5A4_00002E0C
lbl_fn_8003C5A4_00002E08:
    li r3, -0x1
lbl_fn_8003C5A4_00002E0C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8003C774(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003C774_00002E4C
    li r0, -0x1
    b lbl_fn_8003C774_00002E58
lbl_fn_8003C774_00002E4C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003C774_00002E58:
    cmpwi r0, 0x1
    bne lbl_fn_8003C774_00002EA0
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003C774_00002EA4
lbl_fn_8003C774_00002EA0:
    li r3, -0x1
lbl_fn_8003C774_00002EA4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003C804(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x94(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003C804_00002EE8
    li r0, -0x1
    b lbl_fn_8003C804_00002EF4
lbl_fn_8003C804_00002EE8:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003C804_00002EF4:
    cmpwi r0, 0x1
    bne lbl_fn_8003C804_00002F04
    li r3, -0x1
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_00002F04:
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8003C804_00002F2C
    li r0, 0x1
    stw r0, 0x18(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_00002F2C:
    cmpwi r0, 0x1
    bne lbl_fn_8003C804_00002F80
    lwz r8, 0x1c(r30)
    li r3, 0x0
    lwz r0, 0x2c(r30)
    addi r4, r1, 0x58
    stw r3, 0x64(r1)
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    addi r7, r1, 0x64
    stw r3, 0x60(r1)
    li r3, 0x8
    stw r8, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    li r3, 0x1
    li r0, 0x2
    stw r3, lbl_807C6A40@l(r29)
    li r3, -0x1
    stw r0, 0x18(r30)
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_00002F80:
    cmpwi r0, 0x2
    bne lbl_fn_8003C804_0000310C
    lwz r3, 0x2c(r30)
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    cmpwi r3, 0x0
    lwz r4, 0x20(r4)
    ble lbl_fn_8003C804_00002FA8
    cmpwi r4, 0x0
    bne lbl_fn_8003C804_00002FB0
lbl_fn_8003C804_00002FA8:
    li r3, 0x0
    b lbl_fn_8003C804_00002FC0
lbl_fn_8003C804_00002FB0:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r3, 0x6c(r1)
lbl_fn_8003C804_00002FC0:
    lis r7, lbl_807C6A40@ha
    addi r5, r7, lbl_807C6A40@l
    lwz r0, 0x20(r5)
    cmpw r3, r0
    bge lbl_fn_8003C804_00003024
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r4, 0x3
    lwz r0, 0x20(r3)
    li r3, 0x1
    stw r4, 0x18(r5)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    stw r3, lbl_807C6A40@l(r7)
    addi r7, r1, 0x54
    li r3, 0x4
    stw r8, 0x54(r1)
    stw r8, 0x50(r1)
    stw r8, 0x4c(r1)
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_00003024:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8003C804_00003044
    cmpwi r4, 0x0
    bne lbl_fn_8003C804_0000304C
lbl_fn_8003C804_00003044:
    li r5, 0x0
    b lbl_fn_8003C804_0000305C
lbl_fn_8003C804_0000304C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r5, 0x6c(r1)
lbl_fn_8003C804_0000305C:
    lis r3, lbl_807C68C0@ha
    lis r4, 0x4330
    addi r3, r3, lbl_807C68C0@l
    lis r6, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    xoris r5, r5, 0x8000
    lis r3, lbl_8072FF68@ha
    stw r4, 0x70(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r6)
    stw r0, 0x74(r1)
    lfd f0, lbl_8072FF68@l(r3)
    lfd f1, 0x70(r1)
    stw r5, 0x6c(r1)
    fsub f1, f1, f3
    stw r4, 0x68(r1)
    lfd f2, 0x68(r1)
    fmul f0, f0, f1
    fsub f1, f2, f3
    fcmpo cr0, f1, f0
    bge lbl_fn_8003C804_00003104
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r0, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x5
    stw r0, 0x3c(r1)
    stw r31, 0x38(r1)
    bl fn_8001AEDC
    lis r5, lbl_807C6A40@ha
    li r3, 0x3
    addi r4, r5, lbl_807C6A40@l
    stw r31, lbl_807C6A40@l(r5)
    lwz r0, 0x28(r4)
    stw r3, 0x18(r4)
    li r3, 0x8
    stw r0, 0x3c(r4)
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_00003104:
    li r3, -0x1
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_0000310C:
    cmpwi r0, 0x3
    bne lbl_fn_8003C804_00003184
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003C804_0000316C
    lwz r0, 0x20(r31)
    li r8, 0x0
    stw r8, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r8, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x4
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x5
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_0000316C:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_00003184:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003C804_00003270
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8003C804_00003268
    lwz r3, 0x30(r31)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lwz r8, 0x20(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x74(r1)
    lfd f2, lbl_8072FF60@l(r4)
    cmpwi r8, 0x0
    stw r0, 0x70(r1)
    lfs f0, lbl_808807AC
    lfd f1, 0x70(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r9, 0x6c(r1)
    beq lbl_fn_8003C804_00003254
    cmpwi r9, 0x0
    beq lbl_fn_8003C804_00003224
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x3
    stw r9, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    b lbl_fn_8003C804_00003254
lbl_fn_8003C804_00003224:
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x3
    stw r0, 0x1c(r1)
    stw r8, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_8003C804_00003254:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_00003268:
    li r3, -0x1
    b lbl_fn_8003C804_00003274
lbl_fn_8003C804_00003270:
    li r3, -0x1
lbl_fn_8003C804_00003274:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8003CBE0(void)
{
    nofralloc
    lis r5, lbl_807C68C0@ha
    stwu r1, -0x20(r1)
    addi r5, r5, lbl_807C68C0@l
    lis r3, 0x4330
    lwz r6, 0x30(r5)
    lis r4, lbl_8072FF60@ha
    stw r3, 0x8(r1)
    lis r5, lbl_807C6A40@ha
    xoris r3, r6, 0x8000
    lfd f2, lbl_8072FF60@l(r4)
    stw r3, 0xc(r1)
    li r0, 0x1
    lfs f0, lbl_808807B8
    addi r4, r5, lbl_807C6A40@l
    lfd f1, 0x8(r1)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x1c(r4)
    addi r1, r1, 0x20
    blr
}

asm void fn_8003CC44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003CC44_0000331C
    li r0, -0x1
    b lbl_fn_8003CC44_00003328
lbl_fn_8003CC44_0000331C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003CC44_00003328:
    cmpwi r0, 0x1
    bne lbl_fn_8003CC44_00003370
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003CC44_00003374
lbl_fn_8003CC44_00003370:
    li r3, -0x1
lbl_fn_8003CC44_00003374:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003CCD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x1c(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003CCD4_000033B0
    li r0, -0x1
    b lbl_fn_8003CCD4_000033BC
lbl_fn_8003CCD4_000033B0:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003CCD4_000033BC:
    cmpwi r0, 0x1
    bne lbl_fn_8003CCD4_000033CC
    li r3, -0x1
    b lbl_fn_8003CCD4_00003444
lbl_fn_8003CCD4_000033CC:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8003CCD4_00003440
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8003CCD4_00003438
    lis r31, lbl_807C6A40@ha
    li r8, 0x0
    addi r3, r31, lbl_807C6A40@l
    stw r8, 0x8(r1)
    lwz r0, 0x1c(r3)
    addi r4, r1, 0x14
    stw r8, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r8, 0x10(r1)
    li r3, 0x11
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0xd
    b lbl_fn_8003CCD4_00003444
lbl_fn_8003CCD4_00003438:
    li r3, -0x1
    b lbl_fn_8003CCD4_00003444
lbl_fn_8003CCD4_00003440:
    li r3, -0x1
lbl_fn_8003CCD4_00003444:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003CDA8(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8003CDB0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    lis r30, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BD14
    addi r31, r30, lbl_807C68C0@l
    lfs f2, 0x1c(r31)
    fcmpo cr0, f2, f1
    bge lbl_fn_8003CDB0_00003640
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8003CDB0_000034E0
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x64(r1)
    addi r4, r1, 0x58
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    stw r0, 0x60(r1)
    addi r7, r1, 0x64
    li r3, 0x6
    stw r0, 0x5c(r1)
    stw r31, 0x58(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8003CDB0_0000371C
lbl_fn_8003CDB0_000034E0:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003CDB0_00003514
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B714
    cmpwi r3, 0x0
    ble lbl_fn_8003CDB0_00003514
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003CDB0_00003518
lbl_fn_8003CDB0_00003514:
    li r0, 0x0
lbl_fn_8003CDB0_00003518:
    cmpwi r0, 0x0
    beq lbl_fn_8003CDB0_0000356C
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x54(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x48
    stw r8, 0x50(r1)
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    stw r8, 0x4c(r1)
    li r3, 0x2
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003CDB0_0000371C
lbl_fn_8003CDB0_0000356C:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003CDB0_000035A8
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8003CDB0_000035A8
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003CDB0_000035AC
lbl_fn_8003CDB0_000035A8:
    li r0, 0x0
lbl_fn_8003CDB0_000035AC:
    cmpwi r0, 0x0
    beq lbl_fn_8003CDB0_00003600
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x44(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x38
    stw r8, 0x40(r1)
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    stw r8, 0x3c(r1)
    li r3, 0x2
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003CDB0_0000371C
lbl_fn_8003CDB0_00003600:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r0, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x6
    stw r0, 0x2c(r1)
    stw r31, 0x28(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8003CDB0_0000371C
lbl_fn_8003CDB0_00003640:
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003CDB0_00003670
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8003CDB0_00003670
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003CDB0_00003674
lbl_fn_8003CDB0_00003670:
    li r0, 0x0
lbl_fn_8003CDB0_00003674:
    cmpwi r0, 0x0
    beq lbl_fn_8003CDB0_000036C8
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x24(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x1c(r1)
    li r3, 0x2
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003CDB0_0000371C
lbl_fn_8003CDB0_000036C8:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r8, 0x20(r3)
    cmpwi r8, 0x0
    beq lbl_fn_8003CDB0_0000370C
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r3, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x3
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
lbl_fn_8003CDB0_0000370C:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
lbl_fn_8003CDB0_0000371C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8003D084(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lis r30, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r30)
    mr r4, r3
    bl fn_8001BF44
    cmpwi r3, 0x0
    beq lbl_fn_8003D084_0000382C
    addi r31, r30, lbl_807C68C0@l
    lfs f0, lbl_80880798
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D084_0000379C
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8003D084_0000379C
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D084_000037A0
lbl_fn_8003D084_0000379C:
    li r0, 0x0
lbl_fn_8003D084_000037A0:
    cmpwi r0, 0x0
    beq lbl_fn_8003D084_000037BC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D084_00003930
lbl_fn_8003D084_000037BC:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D084_000037F8
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B714
    cmpwi r3, 0x0
    ble lbl_fn_8003D084_000037F8
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D084_000037FC
lbl_fn_8003D084_000037F8:
    li r0, 0x0
lbl_fn_8003D084_000037FC:
    cmpwi r0, 0x0
    beq lbl_fn_8003D084_00003818
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D084_00003930
lbl_fn_8003D084_00003818:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003D084_00003930
lbl_fn_8003D084_0000382C:
    lwz r3, lbl_807C68C0@l(r30)
    mr r4, r31
    bl fn_8001BF44
    cmpwi r3, 0x0
    beq lbl_fn_8003D084_0000392C
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8003D084_00003864
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003D084_00003930
lbl_fn_8003D084_00003864:
    addi r31, r30, lbl_807C68C0@l
    lfs f0, lbl_80880798
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D084_0000389C
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8003D084_0000389C
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D084_000038A0
lbl_fn_8003D084_0000389C:
    li r0, 0x0
lbl_fn_8003D084_000038A0:
    cmpwi r0, 0x0
    beq lbl_fn_8003D084_000038BC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D084_00003930
lbl_fn_8003D084_000038BC:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D084_000038F8
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B714
    cmpwi r3, 0x0
    ble lbl_fn_8003D084_000038F8
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D084_000038FC
lbl_fn_8003D084_000038F8:
    li r0, 0x0
lbl_fn_8003D084_000038FC:
    cmpwi r0, 0x0
    beq lbl_fn_8003D084_00003918
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D084_00003930
lbl_fn_8003D084_00003918:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003D084_00003930
lbl_fn_8003D084_0000392C:
    li r3, -0x1
lbl_fn_8003D084_00003930:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8003D298(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r31, lbl_807C68C0@l(r5)
    mr r3, r31
    bl fn_8001BF64
    cmpwi r3, 0x0
    ble lbl_fn_8003D298_000039B8
    mr r3, r31
    bl fn_8001BF58
    cmpwi r3, 0x0
    beq lbl_fn_8003D298_000039A4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0xa
    b lbl_fn_8003D298_000039BC
lbl_fn_8003D298_000039A4:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
    b lbl_fn_8003D298_000039BC
lbl_fn_8003D298_000039B8:
    li r0, -0x1
lbl_fn_8003D298_000039BC:
    cmpwi r0, 0xa
    bne lbl_fn_8003D298_00003A20
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x58(r3)
    cmpw r0, r29
    bge lbl_fn_8003D298_00003A18
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0xe
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0xa
    b lbl_fn_8003D298_00003A8C
lbl_fn_8003D298_00003A18:
    li r3, -0x1
    b lbl_fn_8003D298_00003A8C
lbl_fn_8003D298_00003A20:
    cmpwi r0, 0x1
    bne lbl_fn_8003D298_00003A88
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x58(r3)
    cmpw r0, r30
    bge lbl_fn_8003D298_00003A80
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003D298_00003A8C
lbl_fn_8003D298_00003A80:
    li r3, -0x1
    b lbl_fn_8003D298_00003A8C
lbl_fn_8003D298_00003A88:
    li r3, -0x1
lbl_fn_8003D298_00003A8C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8003D3F8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r3, lbl_8072FF60@ha
    stw r0, 0x84(r1)
    lis r0, 0x4330
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    lis r30, lbl_807C68C0@ha
    addi r31, r30, lbl_807C68C0@l
    lwz r4, 0x44(r31)
    stw r0, 0x68(r1)
    xoris r0, r4, 0x8000
    lfs f2, 0x1c(r31)
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003D3F8_00003C10
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8003D3F8_00003B44
    li r0, 0x0
    stw r0, 0x64(r1)
    addi r4, r1, 0x58
    addi r5, r1, 0x5c
    stw r0, 0x60(r1)
    addi r6, r1, 0x60
    addi r7, r1, 0x64
    li r3, 0x7
    stw r0, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8003D3F8_00003D80
lbl_fn_8003D3F8_00003B44:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D3F8_00003B78
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8003D3F8_00003B78
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D3F8_00003B7C
lbl_fn_8003D3F8_00003B78:
    li r0, 0x0
lbl_fn_8003D3F8_00003B7C:
    cmpwi r0, 0x0
    beq lbl_fn_8003D3F8_00003BD0
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x54(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x48
    stw r8, 0x50(r1)
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    stw r8, 0x4c(r1)
    li r3, 0x2
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D3F8_00003D80
lbl_fn_8003D3F8_00003BD0:
    li r0, 0x0
    stw r0, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    stw r0, 0x40(r1)
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    li r3, 0x7
    stw r0, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8003D3F8_00003D80
lbl_fn_8003D3F8_00003C10:
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D3F8_00003C40
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8003D3F8_00003C40
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D3F8_00003C44
lbl_fn_8003D3F8_00003C40:
    li r0, 0x0
lbl_fn_8003D3F8_00003C44:
    cmpwi r0, 0x0
    beq lbl_fn_8003D3F8_00003C98
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x34(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x28
    stw r8, 0x30(r1)
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    stw r8, 0x2c(r1)
    li r3, 0x2
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D3F8_00003D80
lbl_fn_8003D3F8_00003C98:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D3F8_00003CD4
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B714
    cmpwi r3, 0x0
    ble lbl_fn_8003D3F8_00003CD4
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D3F8_00003CD8
lbl_fn_8003D3F8_00003CD4:
    li r0, 0x0
lbl_fn_8003D3F8_00003CD8:
    cmpwi r0, 0x0
    beq lbl_fn_8003D3F8_00003D2C
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x24(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x1c(r1)
    li r3, 0x2
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D3F8_00003D80
lbl_fn_8003D3F8_00003D2C:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r8, 0x20(r3)
    cmpwi r8, 0x0
    beq lbl_fn_8003D3F8_00003D70
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r3, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x3
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
lbl_fn_8003D3F8_00003D70:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
lbl_fn_8003D3F8_00003D80:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8003D6E8(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r3, 0x4330
    lis r4, lbl_8072FF60@ha
    stw r0, 0x94(r1)
    lfd f1, lbl_8072FF60@l(r4)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    lis r30, lbl_807C68C0@ha
    addi r31, r30, lbl_807C68C0@l
    lwz r0, 0x44(r31)
    stw r3, 0x78(r1)
    xoris r0, r0, 0x8000
    lfs f2, 0x1c(r31)
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8003D6E8_0000411C
    lwz r4, 0x30(r31)
    stw r3, 0x78(r1)
    slwi r0, r4, 1
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8003D6E8_00003EB8
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8003D6E8_00003E24
    li r3, -0x1
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_00003E24:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D6E8_00003E58
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8003D6E8_00003E58
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D6E8_00003E5C
lbl_fn_8003D6E8_00003E58:
    li r0, 0x0
lbl_fn_8003D6E8_00003E5C:
    cmpwi r0, 0x0
    beq lbl_fn_8003D6E8_00003EB0
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x74(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x68
    stw r8, 0x70(r1)
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    addi r7, r1, 0x74
    stw r8, 0x6c(r1)
    li r3, 0x2
    stw r0, 0x68(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_00003EB0:
    li r3, -0x1
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_00003EB8:
    xoris r0, r4, 0x8000
    stw r0, 0x7c(r1)
    stw r3, 0x78(r1)
    lfd f0, 0x78(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8003D6E8_0000408C
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D6E8_00003F08
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B984
    cmpwi r3, 0x0
    ble lbl_fn_8003D6E8_00003F08
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D6E8_00003F0C
lbl_fn_8003D6E8_00003F08:
    li r0, 0x0
lbl_fn_8003D6E8_00003F0C:
    cmpwi r0, 0x0
    beq lbl_fn_8003D6E8_00003F60
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x64(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x58
    stw r8, 0x60(r1)
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    addi r7, r1, 0x64
    stw r8, 0x5c(r1)
    li r3, 0x2
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_00003F60:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D6E8_00003F9C
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B714
    cmpwi r3, 0x0
    ble lbl_fn_8003D6E8_00003F9C
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D6E8_00003FA0
lbl_fn_8003D6E8_00003F9C:
    li r0, 0x0
lbl_fn_8003D6E8_00003FA0:
    cmpwi r0, 0x0
    beq lbl_fn_8003D6E8_00003FF4
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x54(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x48
    stw r8, 0x50(r1)
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    stw r8, 0x4c(r1)
    li r3, 0x2
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_00003FF4:
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r30, r0, r4
    add r0, r4, r0
    subf. r31, r30, r0
    ble lbl_fn_8003D6E8_00004034
    bl fn_80680CF8
    divw r0, r3, r31
    mullw r0, r0, r31
    subf r0, r0, r3
    add r30, r30, r0
lbl_fn_8003D6E8_00004034:
    lis r3, lbl_807C68C0@ha
    li r6, 0x0
    srwi r0, r30, 31
    stw r6, 0x44(r1)
    addi r3, r3, lbl_807C68C0@l
    addi r4, r1, 0x38
    add r5, r0, r30
    lwz r0, 0x20(r3)
    srawi r3, r5, 1
    stw r6, 0x40(r1)
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r3, 0x3c(r1)
    addi r7, r1, 0x44
    li r3, 0x4
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_0000408C:
    lwz r3, 0x54(r31)
    lwz r4, 0x50(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r30, r0, r4
    add r0, r4, r0
    subf. r31, r30, r0
    ble lbl_fn_8003D6E8_000040C4
    bl fn_80680CF8
    divw r0, r3, r31
    mullw r0, r0, r31
    subf r0, r0, r3
    add r30, r30, r0
lbl_fn_8003D6E8_000040C4:
    lis r3, lbl_807C68C0@ha
    li r6, 0x0
    srwi r0, r30, 31
    stw r6, 0x34(r1)
    addi r3, r3, lbl_807C68C0@l
    addi r4, r1, 0x28
    add r5, r0, r30
    lwz r0, 0x20(r3)
    srawi r3, r5, 1
    stw r6, 0x30(r1)
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r3, 0x2c(r1)
    addi r7, r1, 0x34
    li r3, 0x4
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_0000411C:
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D6E8_0000414C
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8003D6E8_0000414C
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D6E8_00004150
lbl_fn_8003D6E8_0000414C:
    li r0, 0x0
lbl_fn_8003D6E8_00004150:
    cmpwi r0, 0x0
    beq lbl_fn_8003D6E8_000041A4
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x24(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x1c(r1)
    li r3, 0x2
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_000041A4:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003D6E8_000041E0
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B714
    cmpwi r3, 0x0
    ble lbl_fn_8003D6E8_000041E0
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003D6E8_000041E4
lbl_fn_8003D6E8_000041E0:
    li r0, 0x0
lbl_fn_8003D6E8_000041E4:
    cmpwi r0, 0x0
    beq lbl_fn_8003D6E8_00004238
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x14(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x8
    stw r8, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0xc(r1)
    li r3, 0x2
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003D6E8_0000423C
lbl_fn_8003D6E8_00004238:
    li r3, -0x1
lbl_fn_8003D6E8_0000423C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8003DBA4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r3, lbl_8072FF60@ha
    stw r0, 0x54(r1)
    lis r0, 0x4330
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lis r30, lbl_807C68C0@ha
    addi r31, r30, lbl_807C68C0@l
    lwz r4, 0x34(r31)
    stw r0, 0x38(r1)
    xoris r0, r4, 0x8000
    lfs f2, 0x1c(r31)
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    blt lbl_fn_8003DBA4_000042B0
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8003DBA4_00004308
lbl_fn_8003DBA4_000042B0:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r8, 0x20(r3)
    cmpwi r8, 0x0
    beq lbl_fn_8003DBA4_000042F4
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r3, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x3
    stw r0, 0x2c(r1)
    stw r8, 0x28(r1)
    bl fn_8001AEDC
lbl_fn_8003DBA4_000042F4:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8003DBA4_000043E8
lbl_fn_8003DBA4_00004308:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003DBA4_0000433C
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8003DBA4_0000433C
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8003DBA4_00004340
lbl_fn_8003DBA4_0000433C:
    li r0, 0x0
lbl_fn_8003DBA4_00004340:
    cmpwi r0, 0x0
    beq lbl_fn_8003DBA4_00004394
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x24(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x1c(r1)
    li r3, 0x2
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8003DBA4_000043E8
lbl_fn_8003DBA4_00004394:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r8, 0x20(r3)
    cmpwi r8, 0x0
    beq lbl_fn_8003DBA4_000043D8
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r3, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x3
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
lbl_fn_8003DBA4_000043D8:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
lbl_fn_8003DBA4_000043E8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8003DD50(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r25, 0x24(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    lwz r8, 0x0(r3)
    addis r0, r8, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_8003DD50_00004458
    lis r4, lbl_807307A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807307A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x454
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8003DD50_00004458:
    li r3, 0x1c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_8003DD50_0000448C
    lis r3, __files@ha
    lis r4, lbl_80777290@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80777290@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8003DD50_0000448C:
    addic. r25, r26, 0xc
    addi r0, r27, 0x4
    stw r0, 0x10(r1)
    stw r26, 0x14(r1)
    beq lbl_fn_8003DD50_00004510
    lwz r3, 0x0(r31)
    srwi. r0, r3, 31
    bne lbl_fn_8003DD50_000044C4
    stw r3, 0x0(r25)
    lwz r0, 0x4(r31)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r25)
    b lbl_fn_8003DD50_00004508
lbl_fn_8003DD50_000044C4:
    li r0, 0x0
    stw r0, 0x0(r25)
    lwz r4, 0x4(r31)
    mr r3, r25
    stw r0, 0x4(r25)
    stw r0, 0x8(r25)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r25
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x8(r31)
    li r4, 0x0
    lwz r0, 0x4(r31)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8003DD50_00004508:
    lwz r0, 0xc(r31)
    stw r0, 0xc(r25)
lbl_fn_8003DD50_00004510:
    lwz r25, 0x14(r1)
    li r0, 0x0
    stw r0, 0x4(r25)
    addic. r3, r25, 0x8
    stw r0, 0x14(r1)
    stw r0, 0x0(r25)
    beq lbl_fn_8003DD50_00004530
    stw r28, 0x0(r3)
lbl_fn_8003DD50_00004530:
    cmpwi r29, 0x0
    beq lbl_fn_8003DD50_00004540
    stw r25, 0x0(r28)
    b lbl_fn_8003DD50_00004544
lbl_fn_8003DD50_00004540:
    stw r25, 0x4(r28)
lbl_fn_8003DD50_00004544:
    lwz r5, 0x0(r27)
    mr r3, r25
    lwz r4, 0x4(r27)
    addi r0, r5, 0x1
    stw r0, 0x0(r27)
    bl fn_8003E120
    cmpwi r30, 0x0
    beq lbl_fn_8003DD50_00004568
    stw r25, 0x8(r27)
lbl_fn_8003DD50_00004568:
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8003DD50_00004578
    bl dtor_80084684
lbl_fn_8003DD50_00004578:
    mr r3, r25
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8003DEE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r29, 0x0(r4)
    cmpwi r29, 0x0
    beq lbl_fn_8003DEE0_0000469C
    lwz r28, 0x0(r29)
    cmpwi r28, 0x0
    beq lbl_fn_8003DEE0_00004618
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8003DEE0_000045DC
    bl fn_8003DEE0
lbl_fn_8003DEE0_000045DC:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8003DEE0_000045F0
    mr r3, r30
    bl fn_8003DEE0
lbl_fn_8003DEE0_000045F0:
    addic. r3, r28, 0xc
    beq lbl_fn_8003DEE0_00004610
    beq lbl_fn_8003DEE0_00004610
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003DEE0_00004610
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003DEE0_00004610:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8003DEE0_00004618:
    lwz r28, 0x4(r29)
    cmpwi r28, 0x0
    beq lbl_fn_8003DEE0_00004674
    lwz r4, 0x0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8003DEE0_00004638
    mr r3, r30
    bl fn_8003DEE0
lbl_fn_8003DEE0_00004638:
    lwz r4, 0x4(r28)
    cmpwi r4, 0x0
    beq lbl_fn_8003DEE0_0000464C
    mr r3, r30
    bl fn_8003DEE0
lbl_fn_8003DEE0_0000464C:
    addic. r3, r28, 0xc
    beq lbl_fn_8003DEE0_0000466C
    beq lbl_fn_8003DEE0_0000466C
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003DEE0_0000466C
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003DEE0_0000466C:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8003DEE0_00004674:
    addic. r3, r29, 0xc
    beq lbl_fn_8003DEE0_00004694
    beq lbl_fn_8003DEE0_00004694
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003DEE0_00004694
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003DEE0_00004694:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8003DEE0_0000469C:
    lwz r28, 0x4(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8003DEE0_00004788
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_8003DEE0_00004704
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8003DEE0_000046C8
    mr r3, r30
    bl fn_8003DEE0
lbl_fn_8003DEE0_000046C8:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8003DEE0_000046DC
    mr r3, r30
    bl fn_8003DEE0
lbl_fn_8003DEE0_000046DC:
    addic. r3, r29, 0xc
    beq lbl_fn_8003DEE0_000046FC
    beq lbl_fn_8003DEE0_000046FC
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003DEE0_000046FC
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003DEE0_000046FC:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8003DEE0_00004704:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_8003DEE0_00004760
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8003DEE0_00004724
    mr r3, r30
    bl fn_8003DEE0
lbl_fn_8003DEE0_00004724:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8003DEE0_00004738
    mr r3, r30
    bl fn_8003DEE0
lbl_fn_8003DEE0_00004738:
    addic. r3, r29, 0xc
    beq lbl_fn_8003DEE0_00004758
    beq lbl_fn_8003DEE0_00004758
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003DEE0_00004758
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003DEE0_00004758:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8003DEE0_00004760:
    addic. r3, r28, 0xc
    beq lbl_fn_8003DEE0_00004780
    beq lbl_fn_8003DEE0_00004780
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003DEE0_00004780
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003DEE0_00004780:
    mr r3, r28
    bl dtor_80084684
lbl_fn_8003DEE0_00004788:
    addic. r3, r31, 0xc
    beq lbl_fn_8003DEE0_000047A8
    beq lbl_fn_8003DEE0_000047A8
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8003DEE0_000047A8
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8003DEE0_000047A8:
    mr r3, r31
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

asm void fn_8003E120(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_8003E120_00004B24
lbl_fn_8003E120_000047E0:
    lwz r0, 0x8(r5)
    clrrwi r6, r0, 1
    lwz r7, 0x0(r6)
    cmplw r5, r7
    bne lbl_fn_8003E120_00004990
    lwz r6, 0x4(r6)
    cmpwi r6, 0x0
    beq lbl_fn_8003E120_00004848
    lwz r0, 0x8(r6)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8003E120_00004848
    lwz r0, 0x8(r5)
    clrrwi r0, r0, 1
    stw r0, 0x8(r5)
    lwz r0, 0x8(r6)
    clrrwi r0, r0, 1
    stw r0, 0x8(r6)
    lwz r0, 0x8(r3)
    clrrwi r3, r0, 1
    lwz r0, 0x8(r3)
    clrrwi r3, r0, 1
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_8003E120_00004B24
lbl_fn_8003E120_00004848:
    lwz r7, 0x4(r5)
    cmplw r3, r7
    bne lbl_fn_8003E120_000048D0
    cmplw r4, r5
    mr r3, r5
    bne lbl_fn_8003E120_00004864
    mr r4, r7
lbl_fn_8003E120_00004864:
    lwz r0, 0x0(r7)
    stw r0, 0x4(r5)
    lwz r6, 0x0(r7)
    cmpwi r6, 0x0
    beq lbl_fn_8003E120_00004888
    lwz r0, 0x8(r6)
    clrlwi r0, r0, 31
    or r0, r5, r0
    stw r0, 0x8(r6)
lbl_fn_8003E120_00004888:
    lwz r0, 0x8(r7)
    lwz r6, 0x8(r5)
    clrlwi r0, r0, 31
    rlwimi r0, r6, 0, 0, 30
    stw r0, 0x8(r7)
    lwz r0, 0x8(r5)
    clrrwi r6, r0, 1
    lwz r0, 0x0(r6)
    cmplw r5, r0
    bne lbl_fn_8003E120_000048B8
    stw r7, 0x0(r6)
    b lbl_fn_8003E120_000048BC
lbl_fn_8003E120_000048B8:
    stw r7, 0x4(r6)
lbl_fn_8003E120_000048BC:
    stw r5, 0x0(r7)
    lwz r0, 0x8(r5)
    clrlwi r0, r0, 31
    or r0, r7, r0
    stw r0, 0x8(r5)
lbl_fn_8003E120_000048D0:
    lwz r0, 0x8(r3)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    clrrwi r0, r0, 1
    stw r0, 0x8(r5)
    lwz r0, 0x8(r3)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    ori r0, r0, 0x1
    stw r0, 0x8(r5)
    lwz r0, 0x8(r3)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    clrrwi r7, r0, 1
    cmplw r4, r7
    lwz r6, 0x0(r7)
    bne lbl_fn_8003E120_00004920
    mr r4, r6
lbl_fn_8003E120_00004920:
    lwz r0, 0x4(r6)
    stw r0, 0x0(r7)
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    beq lbl_fn_8003E120_00004944
    lwz r0, 0x8(r5)
    clrlwi r0, r0, 31
    or r0, r7, r0
    stw r0, 0x8(r5)
lbl_fn_8003E120_00004944:
    lwz r0, 0x8(r6)
    lwz r5, 0x8(r7)
    clrlwi r0, r0, 31
    rlwimi r0, r5, 0, 0, 30
    stw r0, 0x8(r6)
    lwz r0, 0x8(r7)
    clrrwi r5, r0, 1
    lwz r0, 0x0(r5)
    cmplw r7, r0
    bne lbl_fn_8003E120_00004974
    stw r6, 0x0(r5)
    b lbl_fn_8003E120_00004978
lbl_fn_8003E120_00004974:
    stw r6, 0x4(r5)
lbl_fn_8003E120_00004978:
    stw r7, 0x4(r6)
    lwz r0, 0x8(r7)
    clrlwi r0, r0, 31
    or r0, r6, r0
    stw r0, 0x8(r7)
    b lbl_fn_8003E120_00004B24
lbl_fn_8003E120_00004990:
    cmpwi r7, 0x0
    beq lbl_fn_8003E120_000049E0
    lwz r0, 0x8(r7)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8003E120_000049E0
    lwz r0, 0x8(r5)
    clrrwi r0, r0, 1
    stw r0, 0x8(r5)
    lwz r0, 0x8(r7)
    clrrwi r0, r0, 1
    stw r0, 0x8(r7)
    lwz r0, 0x8(r3)
    clrrwi r3, r0, 1
    lwz r0, 0x8(r3)
    clrrwi r3, r0, 1
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_8003E120_00004B24
lbl_fn_8003E120_000049E0:
    lwz r7, 0x0(r5)
    cmplw r3, r7
    bne lbl_fn_8003E120_00004A68
    cmplw r4, r5
    mr r3, r5
    bne lbl_fn_8003E120_000049FC
    mr r4, r7
lbl_fn_8003E120_000049FC:
    lwz r0, 0x4(r7)
    stw r0, 0x0(r5)
    lwz r6, 0x4(r7)
    cmpwi r6, 0x0
    beq lbl_fn_8003E120_00004A20
    lwz r0, 0x8(r6)
    clrlwi r0, r0, 31
    or r0, r5, r0
    stw r0, 0x8(r6)
lbl_fn_8003E120_00004A20:
    lwz r0, 0x8(r7)
    lwz r6, 0x8(r5)
    clrlwi r0, r0, 31
    rlwimi r0, r6, 0, 0, 30
    stw r0, 0x8(r7)
    lwz r0, 0x8(r5)
    clrrwi r6, r0, 1
    lwz r0, 0x0(r6)
    cmplw r5, r0
    bne lbl_fn_8003E120_00004A50
    stw r7, 0x0(r6)
    b lbl_fn_8003E120_00004A54
lbl_fn_8003E120_00004A50:
    stw r7, 0x4(r6)
lbl_fn_8003E120_00004A54:
    stw r5, 0x4(r7)
    lwz r0, 0x8(r5)
    clrlwi r0, r0, 31
    or r0, r7, r0
    stw r0, 0x8(r5)
lbl_fn_8003E120_00004A68:
    lwz r0, 0x8(r3)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    clrrwi r0, r0, 1
    stw r0, 0x8(r5)
    lwz r0, 0x8(r3)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    ori r0, r0, 0x1
    stw r0, 0x8(r5)
    lwz r0, 0x8(r3)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    clrrwi r7, r0, 1
    cmplw r4, r7
    lwz r6, 0x4(r7)
    bne lbl_fn_8003E120_00004AB8
    mr r4, r6
lbl_fn_8003E120_00004AB8:
    lwz r0, 0x0(r6)
    stw r0, 0x4(r7)
    lwz r5, 0x0(r6)
    cmpwi r5, 0x0
    beq lbl_fn_8003E120_00004ADC
    lwz r0, 0x8(r5)
    clrlwi r0, r0, 31
    or r0, r7, r0
    stw r0, 0x8(r5)
lbl_fn_8003E120_00004ADC:
    lwz r0, 0x8(r6)
    lwz r5, 0x8(r7)
    clrlwi r0, r0, 31
    rlwimi r0, r5, 0, 0, 30
    stw r0, 0x8(r6)
    lwz r0, 0x8(r7)
    clrrwi r5, r0, 1
    lwz r0, 0x0(r5)
    cmplw r7, r0
    bne lbl_fn_8003E120_00004B0C
    stw r6, 0x0(r5)
    b lbl_fn_8003E120_00004B10
lbl_fn_8003E120_00004B0C:
    stw r6, 0x4(r5)
lbl_fn_8003E120_00004B10:
    stw r7, 0x0(r6)
    lwz r0, 0x8(r7)
    clrlwi r0, r0, 31
    or r0, r6, r0
    stw r0, 0x8(r7)
lbl_fn_8003E120_00004B24:
    cmplw r3, r4
    beq lbl_fn_8003E120_00004B44
    lwz r0, 0x8(r3)
    clrrwi r5, r0, 1
    lwz r0, 0x8(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_8003E120_000047E0
lbl_fn_8003E120_00004B44:
    lwz r0, 0x8(r4)
    clrrwi r0, r0, 1
    stw r0, 0x8(r4)
    blr
}

asm void fn_8003E4A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    mr r3, r30
    bl strlen
    mr r31, r3
    mr r3, r29
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r29
    stb r0, 0xc(r1)
    mr r6, r30
    add r7, r30, r31
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003E530(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r22, 0x18(r1)
    li r30, 0x0
    li r31, 0x1
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    addi r27, r3, 0x4
    addi r28, r4, 0x1
    stw r30, 0x0(r5)
    lwz r26, 0x4(r3)
    stb r31, 0x0(r6)
    stb r31, 0x0(r7)
    b lbl_fn_8003E530_00004D18
lbl_fn_8003E530_00004C24:
    lwz r0, 0xc(r26)
    mr r27, r26
    srwi. r0, r0, 31
    bne lbl_fn_8003E530_00004C44
    lbz r0, 0xc(r26)
    addi r4, r26, 0xd
    clrlwi r29, r0, 25
    b lbl_fn_8003E530_00004C4C
lbl_fn_8003E530_00004C44:
    lwz r4, 0x14(r26)
    lwz r29, 0x10(r26)
lbl_fn_8003E530_00004C4C:
    stw r29, 0x10(r1)
    lwz r0, 0x0(r22)
    srwi. r0, r0, 31
    bne lbl_fn_8003E530_00004C68
    lbz r0, 0x0(r22)
    clrlwi r5, r0, 25
    b lbl_fn_8003E530_00004C6C
lbl_fn_8003E530_00004C68:
    lwz r5, 0x4(r22)
lbl_fn_8003E530_00004C6C:
    stw r5, 0x14(r1)
    lwz r0, 0x0(r22)
    srwi. r0, r0, 31
    bne lbl_fn_8003E530_00004C8C
    lbz r0, 0x0(r22)
    mr r3, r28
    clrlwi r0, r0, 25
    b lbl_fn_8003E530_00004C94
lbl_fn_8003E530_00004C8C:
    lwz r3, 0x8(r22)
    lwz r0, 0x4(r22)
lbl_fn_8003E530_00004C94:
    cmplw r5, r0
    stw r0, 0xc(r1)
    addi r5, r1, 0xc
    bge lbl_fn_8003E530_00004CA8
    addi r5, r1, 0x14
lbl_fn_8003E530_00004CA8:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    cmplw r29, r0
    bge lbl_fn_8003E530_00004CC0
    addi r5, r1, 0x10
lbl_fn_8003E530_00004CC0:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8003E530_00004CF4
    lwz r0, 0x8(r1)
    cmplw r0, r29
    bge lbl_fn_8003E530_00004CE4
    li r3, -0x1
    b lbl_fn_8003E530_00004CF4
lbl_fn_8003E530_00004CE4:
    bne lbl_fn_8003E530_00004CF0
    li r3, 0x0
    b lbl_fn_8003E530_00004CF4
lbl_fn_8003E530_00004CF0:
    li r3, 0x1
lbl_fn_8003E530_00004CF4:
    cmpwi r3, 0x0
    bge lbl_fn_8003E530_00004D08
    lwz r26, 0x0(r26)
    stb r31, 0x0(r24)
    b lbl_fn_8003E530_00004D18
lbl_fn_8003E530_00004D08:
    stw r26, 0x0(r23)
    lwz r26, 0x4(r26)
    stb r30, 0x0(r24)
    stb r30, 0x0(r25)
lbl_fn_8003E530_00004D18:
    cmpwi r26, 0x0
    bne lbl_fn_8003E530_00004C24
    mr r3, r27
    lmw r22, 0x18(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
