#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8001A510(void);
extern void fn_8001A65C(void);
extern void fn_8001A8A4(void);
extern void fn_8001AC54(void);
extern void fn_8001AD80(void);
extern void fn_8001AEDC(void);
extern void fn_8001B5DC(void);
extern void fn_8001B634(void);
extern void fn_8001BB04(void);
extern void fn_8001BC38(void);
extern void fn_8001BC80(void);
extern void fn_8001BD14(void);
extern void fn_8001BE00(void);
extern void fn_8001BEB0(void);
extern void fn_8001C068(void);
extern void fn_8003CDB0(void);
extern void fn_8003D084(void);
extern void fn_8003DBA4(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8072FF60[];
extern u8 lbl_807307A0[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];
extern u8 lbl_807C6B30[];

/* Small data declarations */
extern u32 lbl_80880798;
extern u32 lbl_808807B4;

/* Function declarations */
void fn_8002806C(void);
void fn_80028178(void);
void fn_800281A0(void);
void fn_800282D4(void);
void fn_8002836C(void);
void fn_800284B4(void);
void fn_8002868C(void);
void fn_80028710(void);
void fn_800289B4(void);
void fn_80028AE4(void);
void fn_80028BCC(void);
void fn_80028CD8(void);
void fn_80028D00(void);
void fn_80028E34(void);
void fn_80028E64(void);
void fn_80028F3C(void);
void fn_80029018(void);
void fn_8002922C(void);
void fn_800292B0(void);
void fn_80029424(void);
void fn_80029500(void);
void fn_8002962C(void);
void fn_8002973C(void);
void fn_80029784(void);
void fn_80029848(void);
void fn_800298F0(void);
void fn_80029A14(void);
void fn_80029A84(void);
void fn_80029AFC(void);
void fn_80029B68(void);
void fn_80029D18(void);
void fn_80029D7C(void);
void fn_8002A1FC(void);
void fn_8002A42C(void);
void fn_8002A6F0(void);
void fn_8002A774(void);
void fn_8002A968(void);
void fn_8002AB7C(void);
void fn_8002AC64(void);
void fn_8002AD40(void);
void fn_8002AE78(void);
void fn_8002AE98(void);
void fn_8002B358(void);
void fn_8002B434(void);
void fn_8002B4C8(void);
void fn_8002B53C(void);
void fn_8002B788(void);
void fn_8002B818(void);
void fn_8002B88C(void);
void fn_8002B8FC(void);

asm void fn_8002806C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8002806C_00000080
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002806C_00000078
    li r8, 0x0
    li r0, 0xb4
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_8002806C_000000F8
lbl_fn_8002806C_00000078:
    li r3, -0x1
    b lbl_fn_8002806C_000000F8
lbl_fn_8002806C_00000080:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002806C_000000A4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x6
    b lbl_fn_8002806C_000000A8
lbl_fn_8002806C_000000A4:
    li r0, -0x1
lbl_fn_8002806C_000000A8:
    cmpwi r0, 0x6
    bne lbl_fn_8002806C_000000F4
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8002806C_000000D0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002806C_000000F8
lbl_fn_8002806C_000000D0:
    cmpwi r3, 0x6
    bne lbl_fn_8002806C_000000EC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002806C_000000F8
lbl_fn_8002806C_000000EC:
    li r3, -0x1
    b lbl_fn_8002806C_000000F8
lbl_fn_8002806C_000000F4:
    li r3, -0x1
lbl_fn_8002806C_000000F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80028178(void)
{
    nofralloc
    lis r6, lbl_807C6A40@ha
    li r0, 0x1
    addi r5, r6, lbl_807C6A40@l
    li r3, 0x1e
    li r4, 0x5a
    stw r3, 0x1c(r5)
    li r3, 0x1
    stw r4, 0x20(r5)
    stw r0, lbl_807C6A40@l(r6)
    blr
}

asm void fn_800281A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r9, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r7, r9, lbl_807C6A40@l
    lwz r0, 0x18(r7)
    cmpwi r0, 0x0
    bne lbl_fn_800281A0_000001D8
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_800281A0_000001D0
    li r0, 0x0
    li r8, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0xc(r7)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r8, lbl_807C6A40@l(r9)
    stw r0, 0x24(r1)
    stw r0, 0x20(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_800281A0_00000258
lbl_fn_800281A0_000001D0:
    li r3, -0x1
    b lbl_fn_800281A0_00000258
lbl_fn_800281A0_000001D8:
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_800281A0_00000254
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0xc(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, lbl_807C6A40@l(r9)
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_800281A0_00000258
lbl_fn_800281A0_00000254:
    li r3, -0x1
lbl_fn_800281A0_00000258:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800282D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800282D4_000002EC
    lfs f1, 0x1c(r3)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800282D4_000002E4
    li r8, 0x0
    li r0, 0x3
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x6
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800282D4_000002F0
lbl_fn_800282D4_000002E4:
    li r3, -0x1
    b lbl_fn_800282D4_000002F0
lbl_fn_800282D4_000002EC:
    li r3, -0x1
lbl_fn_800282D4_000002F0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002836C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002836C_00000338
    li r0, -0x1
    b lbl_fn_8002836C_00000344
lbl_fn_8002836C_00000338:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002836C_00000344:
    cmpwi r0, 0x1
    bne lbl_fn_8002836C_00000354
    li r3, -0x1
    b lbl_fn_8002836C_0000042C
lbl_fn_8002836C_00000354:
    lis r4, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r30, r4, lbl_807C68C0@l
    lfs f1, 0x1c(r30)
    fcmpo cr1, f1, f0
    mfcr r0
    extrwi. r0, r0, 1, 4
    beq lbl_fn_8002836C_00000428
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8002836C_000003EC
    mfcr r0
    extrwi. r0, r0, 1, 4
    beq lbl_fn_8002836C_000003B0
    lwz r3, lbl_807C68C0@l(r4)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8002836C_000003B0
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_8002836C_000003B4
lbl_fn_8002836C_000003B0:
    li r0, 0x0
lbl_fn_8002836C_000003B4:
    cmpwi r0, 0x0
    beq lbl_fn_8002836C_000003E4
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002836C_0000042C
lbl_fn_8002836C_000003E4:
    li r3, -0x1
    b lbl_fn_8002836C_0000042C
lbl_fn_8002836C_000003EC:
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8002836C_00000408
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_8002836C_0000042C
lbl_fn_8002836C_00000408:
    cmpwi r3, 0x6
    bne lbl_fn_8002836C_00000420
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_8002836C_0000042C
lbl_fn_8002836C_00000420:
    li r3, -0x1
    b lbl_fn_8002836C_0000042C
lbl_fn_8002836C_00000428:
    li r3, -0x1
lbl_fn_8002836C_0000042C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800284B4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    stw r30, 0x48(r1)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800284B4_000004CC
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800284B4_000004C4
    li r8, 0x0
    li r0, 0x5a
    stw r8, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r8, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x0
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_800284B4_00000608
lbl_fn_800284B4_000004C4:
    li r3, -0x1
    b lbl_fn_800284B4_00000608
lbl_fn_800284B4_000004CC:
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
    bge lbl_fn_800284B4_00000544
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x4
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x5
    b lbl_fn_800284B4_000005CC
lbl_fn_800284B4_00000544:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800284B4_000005C8
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800284B4_00000588
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800284B4_00000588:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_800284B4_000005CC
lbl_fn_800284B4_000005C8:
    li r0, -0x1
lbl_fn_800284B4_000005CC:
    cmpwi r0, 0x5
    bne lbl_fn_800284B4_000005E8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_800284B4_00000608
lbl_fn_800284B4_000005E8:
    cmpwi r0, 0x7
    bne lbl_fn_800284B4_00000604
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_800284B4_00000608
lbl_fn_800284B4_00000604:
    li r3, -0x1
lbl_fn_800284B4_00000608:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8002868C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80028D00
    cmpwi r3, 0x0
    bne lbl_fn_8002868C_0000064C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x0
    b lbl_fn_8002868C_00000694
lbl_fn_8002868C_0000064C:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002868C_00000668
    li r0, -0x1
    b lbl_fn_8002868C_00000674
lbl_fn_8002868C_00000668:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002868C_00000674:
    cmpwi r0, 0x1
    bne lbl_fn_8002868C_00000690
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002868C_00000694
lbl_fn_8002868C_00000690:
    li r3, -0x1
lbl_fn_8002868C_00000694:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80028710(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lis r29, lbl_807C6A40@ha
    addi r3, r29, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80028710_00000730
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80028710_00000728
    li r8, 0x0
    li r0, 0x5a
    stw r8, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r8, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x0
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x9
    b lbl_fn_80028710_0000092C
lbl_fn_80028710_00000728:
    li r3, -0x1
    b lbl_fn_80028710_0000092C
lbl_fn_80028710_00000730:
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80028710_0000079C
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80028710_00000794
    lwz r0, 0x20(r30)
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r0, 0x5
    b lbl_fn_80028710_000007D4
lbl_fn_80028710_00000794:
    li r0, -0x1
    b lbl_fn_80028710_000007D4
lbl_fn_80028710_0000079C:
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r0, 0x1
lbl_fn_80028710_000007D4:
    cmpwi r0, 0x5
    bne lbl_fn_80028710_000007F0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80028710_0000092C
lbl_fn_80028710_000007F0:
    cmpwi r0, 0x6
    bne lbl_fn_80028710_00000890
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_807C6A40@ha
    addi r30, r5, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0xc(r30)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_80028710_00000820
    li r3, -0x1
    b lbl_fn_80028710_0000092C
lbl_fn_80028710_00000820:
    lfs f1, 0x1c(r30)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80028710_00000854
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_80028710_00000854
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_80028710_00000858
lbl_fn_80028710_00000854:
    li r0, 0x0
lbl_fn_80028710_00000858:
    cmpwi r0, 0x0
    beq lbl_fn_80028710_00000888
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80028710_0000092C
lbl_fn_80028710_00000888:
    li r3, -0x1
    b lbl_fn_80028710_0000092C
lbl_fn_80028710_00000890:
    cmpwi r0, 0x1
    bne lbl_fn_80028710_000008AC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80028710_0000092C
lbl_fn_80028710_000008AC:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x48(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80028710_00000928
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x4
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80028710_0000092C
lbl_fn_80028710_00000928:
    li r3, -0x1
lbl_fn_80028710_0000092C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800289B4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x34(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x2c(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x18(r1)
    slwi r0, r4, 1
    lfs f2, 0x1c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_800289B4_000009A8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_800289B4_000009F8
lbl_fn_800289B4_000009A8:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800289B4_000009F4
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r0, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x5
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x8
    stw r31, lbl_807C6A40@l(r3)
    b lbl_fn_800289B4_000009F8
lbl_fn_800289B4_000009F4:
    li r0, -0x1
lbl_fn_800289B4_000009F8:
    cmpwi r0, 0x6
    bne lbl_fn_800289B4_00000A44
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_800289B4_00000A20
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800289B4_00000A64
lbl_fn_800289B4_00000A20:
    cmpwi r3, 0x6
    bne lbl_fn_800289B4_00000A3C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800289B4_00000A64
lbl_fn_800289B4_00000A3C:
    li r3, -0x1
    b lbl_fn_800289B4_00000A64
lbl_fn_800289B4_00000A44:
    cmpwi r0, 0x8
    bne lbl_fn_800289B4_00000A60
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_800289B4_00000A64
lbl_fn_800289B4_00000A60:
    li r3, -0x1
lbl_fn_800289B4_00000A64:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80028AE4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80028AE4_00000B24
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80028AE4_00000AD8
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80028AE4_00000AD8:
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
    b lbl_fn_80028AE4_00000B28
lbl_fn_80028AE4_00000B24:
    li r0, -0x1
lbl_fn_80028AE4_00000B28:
    cmpwi r0, 0x5
    bne lbl_fn_80028AE4_00000B44
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80028AE4_00000B48
lbl_fn_80028AE4_00000B44:
    li r3, -0x1
lbl_fn_80028AE4_00000B48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80028BCC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80028BCC_00000BE0
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80028BCC_00000BD8
    li r8, 0x0
    li r0, 0x5a
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_80028BCC_00000C58
lbl_fn_80028BCC_00000BD8:
    li r3, -0x1
    b lbl_fn_80028BCC_00000C58
lbl_fn_80028BCC_00000BE0:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80028BCC_00000C04
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x6
    b lbl_fn_80028BCC_00000C08
lbl_fn_80028BCC_00000C04:
    li r0, -0x1
lbl_fn_80028BCC_00000C08:
    cmpwi r0, 0x6
    bne lbl_fn_80028BCC_00000C54
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_80028BCC_00000C30
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80028BCC_00000C58
lbl_fn_80028BCC_00000C30:
    cmpwi r3, 0x6
    bne lbl_fn_80028BCC_00000C4C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80028BCC_00000C58
lbl_fn_80028BCC_00000C4C:
    li r3, -0x1
    b lbl_fn_80028BCC_00000C58
lbl_fn_80028BCC_00000C54:
    li r3, -0x1
lbl_fn_80028BCC_00000C58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80028CD8(void)
{
    nofralloc
    lis r6, lbl_807C6A40@ha
    li r0, 0x1
    addi r5, r6, lbl_807C6A40@l
    li r3, 0x1e
    li r4, 0x5a
    stw r3, 0x1c(r5)
    li r3, 0x1
    stw r4, 0x20(r5)
    stw r0, lbl_807C6A40@l(r6)
    blr
}

asm void fn_80028D00(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r9, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r7, r9, lbl_807C6A40@l
    lwz r0, 0x18(r7)
    cmpwi r0, 0x0
    bne lbl_fn_80028D00_00000D38
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80028D00_00000D30
    li r0, 0x0
    li r8, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0xc(r7)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r8, lbl_807C6A40@l(r9)
    stw r0, 0x24(r1)
    stw r0, 0x20(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_80028D00_00000DB8
lbl_fn_80028D00_00000D30:
    li r3, -0x1
    b lbl_fn_80028D00_00000DB8
lbl_fn_80028D00_00000D38:
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80028D00_00000DB4
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0xc(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, lbl_807C6A40@l(r9)
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_80028D00_00000DB8
lbl_fn_80028D00_00000DB4:
    li r3, -0x1
lbl_fn_80028D00_00000DB8:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80028E34(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    lis r6, lbl_807C6A40@ha
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x1
    addi r5, r6, lbl_807C6A40@l
    lwz r3, 0x30(r3)
    li r4, 0x0
    stw r3, 0x1c(r5)
    li r3, 0x1
    stw r4, 0x20(r5)
    stw r0, lbl_807C6A40@l(r6)
    blr
}

asm void fn_80028E64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80028E64_00000E2C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_80028E64_00000EBC
lbl_fn_80028E64_00000E2C:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80028E64_00000E98
    lfs f1, 0x1c(r3)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80028E64_00000E98
    li r8, 0x0
    li r0, 0x3
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x6
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x9
    b lbl_fn_80028E64_00000E9C
lbl_fn_80028E64_00000E98:
    li r0, -0x1
lbl_fn_80028E64_00000E9C:
    cmpwi r0, 0x9
    bne lbl_fn_80028E64_00000EB8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80028E64_00000EBC
lbl_fn_80028E64_00000EB8:
    li r3, -0x1
lbl_fn_80028E64_00000EBC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80028F3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80028F3C_00000F70
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80028F3C_00000F30
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80028F3C_00000F30:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80028F3C_00000F74
lbl_fn_80028F3C_00000F70:
    li r0, -0x1
lbl_fn_80028F3C_00000F74:
    cmpwi r0, 0x7
    bne lbl_fn_80028F3C_00000F90
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80028F3C_00000F94
lbl_fn_80028F3C_00000F90:
    li r3, -0x1
lbl_fn_80028F3C_00000F94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80029018(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80029018_00001118
    lis r3, lbl_807C68C0@ha
    addi r31, r3, lbl_807C68C0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80029018_00001088
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BD14
    lfs f0, 0x1c(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_80029018_0000104C
    lwz r8, 0x20(r31)
    cmpwi r8, 0x0
    beq lbl_fn_80029018_00001038
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r3, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x3
    stw r0, 0x20(r1)
    stw r8, 0x24(r1)
    bl fn_8001AEDC
lbl_fn_80029018_00001038:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80029018_0000108C
lbl_fn_80029018_0000104C:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r0, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x6
    stw r0, 0x30(r1)
    stw r31, 0x34(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_80029018_0000108C
lbl_fn_80029018_00001088:
    li r0, -0x1
lbl_fn_80029018_0000108C:
    cmpwi r0, 0x6
    bne lbl_fn_80029018_000010F4
    bl fn_8003CDB0
    cmpwi r3, 0x6
    bne lbl_fn_80029018_000010B4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80029018_000011A8
lbl_fn_80029018_000010B4:
    cmpwi r3, 0x4
    bne lbl_fn_80029018_000010D0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80029018_000011A8
lbl_fn_80029018_000010D0:
    cmpwi r3, 0x9
    bne lbl_fn_80029018_000010EC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80029018_000011A8
lbl_fn_80029018_000010EC:
    li r3, -0x1
    b lbl_fn_80029018_000011A8
lbl_fn_80029018_000010F4:
    cmpwi r0, 0x9
    bne lbl_fn_80029018_00001110
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80029018_000011A8
lbl_fn_80029018_00001110:
    li r3, -0x1
    b lbl_fn_80029018_000011A8
lbl_fn_80029018_00001118:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80029018_00001184
    lfs f1, 0x1c(r3)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80029018_00001184
    li r8, 0x0
    li r0, 0x3
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x6
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_80029018_00001188
lbl_fn_80029018_00001184:
    li r0, -0x1
lbl_fn_80029018_00001188:
    cmpwi r0, 0x9
    bne lbl_fn_80029018_000011A4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80029018_000011A8
lbl_fn_80029018_000011A4:
    li r3, -0x1
lbl_fn_80029018_000011A8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002922C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80029500
    cmpwi r3, 0x0
    bne lbl_fn_8002922C_000011EC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x0
    b lbl_fn_8002922C_00001234
lbl_fn_8002922C_000011EC:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002922C_00001208
    li r0, -0x1
    b lbl_fn_8002922C_00001214
lbl_fn_8002922C_00001208:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002922C_00001214:
    cmpwi r0, 0x1
    bne lbl_fn_8002922C_00001230
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002922C_00001234
lbl_fn_8002922C_00001230:
    li r3, -0x1
lbl_fn_8002922C_00001234:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800292B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800292B0_00001274
    li r0, -0x1
    b lbl_fn_800292B0_00001280
lbl_fn_800292B0_00001274:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800292B0_00001280:
    cmpwi r0, 0x1
    bne lbl_fn_800292B0_00001290
    li r3, -0x1
    b lbl_fn_800292B0_000013A0
lbl_fn_800292B0_00001290:
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_800292B0_0000139C
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800292B0_00001310
    bl fn_8003CDB0
    cmpwi r3, 0x4
    bne lbl_fn_800292B0_000012D8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_800292B0_000013A0
lbl_fn_800292B0_000012D8:
    cmpwi r3, 0x6
    bne lbl_fn_800292B0_000012F0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_800292B0_000013A0
lbl_fn_800292B0_000012F0:
    cmpwi r3, 0x9
    bne lbl_fn_800292B0_00001308
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_800292B0_000013A0
lbl_fn_800292B0_00001308:
    li r3, -0x1
    b lbl_fn_800292B0_000013A0
lbl_fn_800292B0_00001310:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800292B0_00001374
    lfs f1, 0x1c(r30)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800292B0_00001374
    li r8, 0x0
    li r0, 0x3
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x6
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x9
    b lbl_fn_800292B0_00001378
lbl_fn_800292B0_00001374:
    li r0, -0x1
lbl_fn_800292B0_00001378:
    cmpwi r0, 0x9
    bne lbl_fn_800292B0_00001394
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800292B0_000013A0
lbl_fn_800292B0_00001394:
    li r3, -0x1
    b lbl_fn_800292B0_000013A0
lbl_fn_800292B0_0000139C:
    li r3, -0x1
lbl_fn_800292B0_000013A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80029424(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80029424_00001458
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80029424_00001418
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80029424_00001418:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80029424_0000145C
lbl_fn_80029424_00001458:
    li r0, -0x1
lbl_fn_80029424_0000145C:
    cmpwi r0, 0x7
    bne lbl_fn_80029424_00001478
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80029424_0000147C
lbl_fn_80029424_00001478:
    li r3, -0x1
lbl_fn_80029424_0000147C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80029500(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r6, r7, lbl_807C6A40@l
    lwz r0, 0x18(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80029500_00001534
    lwz r3, 0x1c(r6)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80029500_0000152C
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x18(r6)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, lbl_807C6A40@l(r7)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r0, 0x24(r1)
    stw r0, 0x20(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_80029500_000015B0
lbl_fn_80029500_0000152C:
    li r3, -0x1
    b lbl_fn_80029500_000015B0
lbl_fn_80029500_00001534:
    lwz r3, 0x1c(r6)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80029500_000015AC
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x18(r6)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, lbl_807C6A40@l(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_80029500_000015B0
lbl_fn_80029500_000015AC:
    li r3, -0x1
lbl_fn_80029500_000015B0:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002962C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002962C_000015E8
    li r0, -0x1
    b lbl_fn_8002962C_000015F4
lbl_fn_8002962C_000015E8:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002962C_000015F4:
    cmpwi r0, 0x1
    bne lbl_fn_8002962C_00001604
    li r3, -0x1
    b lbl_fn_8002962C_000016C0
lbl_fn_8002962C_00001604:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r3, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r3)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002962C_000016BC
    bl fn_80029B68
    cmpwi r3, 0x3
    bne lbl_fn_8002962C_00001644
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    b lbl_fn_8002962C_000016C0
lbl_fn_8002962C_00001644:
    cmpwi r3, 0x7
    bne lbl_fn_8002962C_00001660
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002962C_000016C0
lbl_fn_8002962C_00001660:
    cmpwi r3, 0x5
    bne lbl_fn_8002962C_0000167C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002962C_000016C0
lbl_fn_8002962C_0000167C:
    cmpwi r3, 0x8
    bne lbl_fn_8002962C_00001698
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8002962C_000016C0
lbl_fn_8002962C_00001698:
    cmpwi r3, 0x1
    bne lbl_fn_8002962C_000016B4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002962C_000016C0
lbl_fn_8002962C_000016B4:
    li r3, -0x1
    b lbl_fn_8002962C_000016C0
lbl_fn_8002962C_000016BC:
    li r3, -0x1
lbl_fn_8002962C_000016C0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002973C(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    lis r8, lbl_807C6A40@ha
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x1
    addi r7, r8, lbl_807C6A40@l
    lwz r9, 0x7c(r3)
    li r4, 0x0
    lwz r6, 0x80(r3)
    lwz r5, 0x84(r3)
    li r3, 0x1
    stw r9, 0x18(r7)
    stw r6, 0x1c(r7)
    stw r5, 0x20(r7)
    stw r4, 0x24(r7)
    stw r4, 0x28(r7)
    stw r4, 0x2c(r7)
    stw r0, lbl_807C6A40@l(r8)
    blr
}

asm void fn_80029784(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    lwz r3, lbl_807C68C0@l(r4)
    addi r4, r4, lbl_807C68C0@l
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80029784_00001744
    cmpwi r4, 0x0
    bne lbl_fn_80029784_0000174C
lbl_fn_80029784_00001744:
    li r6, 0x0
    b lbl_fn_80029784_0000175C
lbl_fn_80029784_0000174C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r6, 0x1c(r1)
lbl_fn_80029784_0000175C:
    lis r5, lbl_807C6A40@ha
    li r3, 0x1
    addi r4, r5, lbl_807C6A40@l
    stw r3, lbl_807C6A40@l(r5)
    lwz r0, 0x10(r4)
    stw r6, 0x3c(r4)
    cmpwi r0, 0x1
    blt lbl_fn_80029784_00001784
    li r0, -0x1
    b lbl_fn_80029784_0000178C
lbl_fn_80029784_00001784:
    stw r3, lbl_807C6A40@l(r5)
    li r0, 0x1
lbl_fn_80029784_0000178C:
    cmpwi r0, 0x1
    bne lbl_fn_80029784_000017C8
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
    li r3, 0x1
    b lbl_fn_80029784_000017CC
lbl_fn_80029784_000017C8:
    li r3, -0x1
lbl_fn_80029784_000017CC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80029848(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r5, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80029848_0000184C
    li r0, 0x0
    li r31, 0x2
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x6
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    addi r4, r3, lbl_807C6A40@l
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    stw r31, 0x24(r4)
    b lbl_fn_80029848_00001870
lbl_fn_80029848_0000184C:
    lis r4, lbl_807307A0@ha
    lwz r3, lbl_807C68C0@l(r5)
    addi r4, r4, lbl_807307A0@l
    addi r4, r4, 0x3f5
    bl fn_8001C068
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, -0x1
lbl_fn_80029848_00001870:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800298F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800298F0_000018D0
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_800298F0_000018D0
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_800298F0_000018D4
lbl_fn_800298F0_000018D0:
    li r0, 0x0
lbl_fn_800298F0_000018D4:
    cmpwi r0, 0x0
    beq lbl_fn_800298F0_00001930
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
    addi r4, r3, lbl_807C6A40@l
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    stw r0, 0x24(r4)
    b lbl_fn_800298F0_00001994
lbl_fn_800298F0_00001930:
    lis r4, lbl_807307A0@ha
    lis r3, lbl_807C68C0@ha
    addi r4, r4, lbl_807307A0@l
    lwz r3, lbl_807C68C0@l(r3)
    addi r4, r4, 0x3e0
    bl fn_8001C068
    lis r31, lbl_807C6A40@ha
    li r8, 0x0
    li r3, 0x1
    li r0, 0x2
    stw r3, lbl_807C6A40@l(r31)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x14(r1)
    addi r7, r1, 0x14
    li r3, 0x6
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    addi r3, r31, lbl_807C6A40@l
    li r0, 0x3
    stw r0, 0x24(r3)
    li r3, 0x1
lbl_fn_800298F0_00001994:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80029A14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807307A0@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r3, r3, lbl_807307A0@l
    addi r4, r1, 0x8
    addi r8, r3, 0x40a
    stw r0, 0x14(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x14
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r5, 0x1
    addi r4, r3, lbl_807C6A40@l
    li r0, 0x5
    stw r5, lbl_807C6A40@l(r3)
    li r3, 0x1
    stw r0, 0x24(r4)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80029A84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    li r8, 0x5
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r31, 0x1c(r1)
    addi r7, r1, 0x14
    stw r30, 0x18(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r0, 0x18(r31)
    stw r3, 0x14(r1)
    stw r3, 0x10(r1)
    li r3, 0xc
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    stw r0, 0x28(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80029AFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    lwz r0, lbl_807C68C0@l(r3)
    addi r7, r1, 0x14
    stw r8, 0x14(r1)
    li r3, 0x7
    stw r8, 0x10(r1)
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r5, 0x1
    addi r4, r3, lbl_807C6A40@l
    li r0, 0x6
    stw r5, lbl_807C6A40@l(r3)
    li r3, 0x1
    stw r0, 0x24(r4)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80029B68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r6, lbl_807C6A40@l
    lwz r3, 0x28(r31)
    cmpwi r3, 0x1
    blt lbl_fn_80029B68_00001B50
    addi r3, r3, 0x1
    li r0, 0x1
    cmpwi r3, 0x50
    stw r3, 0x28(r31)
    stw r0, lbl_807C6A40@l(r6)
    blt lbl_fn_80029B68_00001B48
    li r0, 0x0
    stw r0, 0x28(r31)
    li r3, 0x1
    b lbl_fn_80029B68_00001C98
lbl_fn_80029B68_00001B48:
    li r3, 0x1
    b lbl_fn_80029B68_00001C98
lbl_fn_80029B68_00001B50:
    lwz r4, 0x24(r31)
    cmpwi r4, 0x1
    blt lbl_fn_80029B68_00001C30
    lis r3, lbl_807C68C0@ha
    addi r5, r3, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80029B68_00001C20
    cmpwi r4, 0x5
    bge lbl_fn_80029B68_00001BBC
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x24(r31)
    stw r0, lbl_807C6A40@l(r6)
    bl fn_80680CF8
    slwi r0, r3, 29
    srwi r4, r3, 31
    subf r0, r4, r0
    li r3, 0x8
    rotlwi r0, r0, 3
    add r4, r0, r4
    addi r0, r4, 0x1
    stw r0, 0x2c(r31)
    cmpwi r0, 0x6
    bgt lbl_fn_80029B68_00001C98
    li r3, 0x3
    b lbl_fn_80029B68_00001C98
lbl_fn_80029B68_00001BBC:
    lwz r3, lbl_807C68C0@l(r3)
    li r4, 0x0
    li r0, 0x1
    stw r4, 0x24(r31)
    cmpwi r3, 0x0
    lwz r4, 0x20(r5)
    stw r0, lbl_807C6A40@l(r6)
    beq lbl_fn_80029B68_00001BE4
    cmpwi r4, 0x0
    bne lbl_fn_80029B68_00001BEC
lbl_fn_80029B68_00001BE4:
    li r4, 0x0
    b lbl_fn_80029B68_00001BFC
lbl_fn_80029B68_00001BEC:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
lbl_fn_80029B68_00001BFC:
    lis r3, lbl_807C6A40@ha
    addi r3, r3, lbl_807C6A40@l
    lwz r0, 0x1c(r3)
    cmpw r4, r0
    bgt lbl_fn_80029B68_00001C18
    li r3, 0x7
    b lbl_fn_80029B68_00001C98
lbl_fn_80029B68_00001C18:
    li r3, 0x3
    b lbl_fn_80029B68_00001C98
lbl_fn_80029B68_00001C20:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r6)
    li r3, 0x1
    b lbl_fn_80029B68_00001C98
lbl_fn_80029B68_00001C30:
    lis r4, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r4)
    addi r4, r4, lbl_807C68C0@l
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80029B68_00001C50
    cmpwi r4, 0x0
    bne lbl_fn_80029B68_00001C58
lbl_fn_80029B68_00001C50:
    li r5, 0x0
    b lbl_fn_80029B68_00001C68
lbl_fn_80029B68_00001C58:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r5, 0xc(r1)
lbl_fn_80029B68_00001C68:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x1c(r3)
    cmpw r5, r0
    bgt lbl_fn_80029B68_00001C8C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r3, 0x7
    b lbl_fn_80029B68_00001C98
lbl_fn_80029B68_00001C8C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r3, 0x3
lbl_fn_80029B68_00001C98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80029D18(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_807C68C0@ha
    lis r5, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r6, lbl_807C68C0@l
    addi r4, r5, lbl_807C6A40@l
    li r0, 0x5a
    stw r31, 0xc(r1)
    li r31, 0x1
    lwz r3, 0x30(r3)
    stw r3, 0x1c(r4)
    lwz r3, lbl_807C68C0@l(r6)
    stw r0, 0x20(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80029D18_00001CF8
    li r31, 0x7
lbl_fn_80029D18_00001CF8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80029D7C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_80029D7C_00001D80
    lwz r0, 0x64(r30)
    li r8, 0x0
    stw r8, 0x68(r1)
    addi r4, r1, 0x74
    addi r5, r1, 0x70
    addi r6, r1, 0x6c
    stw r8, 0x6c(r1)
    addi r7, r1, 0x68
    li r3, 0x2
    stw r8, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x4
    b lbl_fn_80029D7C_00001DD0
lbl_fn_80029D7C_00001D80:
    cmpwi r3, 0x1
    bne lbl_fn_80029D7C_00001DCC
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x78(r1)
    addi r4, r1, 0x84
    addi r5, r1, 0x80
    addi r6, r1, 0x7c
    stw r8, 0x7c(r1)
    addi r7, r1, 0x78
    li r3, 0x0
    stw r8, 0x80(r1)
    stw r0, 0x84(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
    b lbl_fn_80029D7C_00001DD0
lbl_fn_80029D7C_00001DCC:
    li r0, -0x1
lbl_fn_80029D7C_00001DD0:
    cmpwi r0, 0x1
    bne lbl_fn_80029D7C_00001DEC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001DEC:
    cmpwi r0, 0x4
    bne lbl_fn_80029D7C_00001E08
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001E08:
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80029D7C_00001F58
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80029D7C_00001E84
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80029D7C_00001E7C
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r0, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x6
    stw r0, 0x50(r1)
    stw r31, 0x54(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_80029D7C_00001EBC
lbl_fn_80029D7C_00001E7C:
    li r0, -0x1
    b lbl_fn_80029D7C_00001EBC
lbl_fn_80029D7C_00001E84:
    li r0, 0x0
    stw r0, 0x58(r1)
    addi r4, r1, 0x64
    addi r5, r1, 0x60
    stw r0, 0x5c(r1)
    addi r6, r1, 0x5c
    addi r7, r1, 0x58
    li r3, 0x0
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_80029D7C_00001EBC:
    cmpwi r0, 0x9
    bne lbl_fn_80029D7C_00001ED8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001ED8:
    cmpwi r0, 0x6
    bne lbl_fn_80029D7C_00001F34
    bl fn_8003CDB0
    cmpwi r3, 0x9
    bne lbl_fn_80029D7C_00001F00
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001F00:
    cmpwi r3, 0x6
    bne lbl_fn_80029D7C_00001F10
    li r3, -0x1
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001F10:
    cmpwi r3, 0x4
    bne lbl_fn_80029D7C_00001F2C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001F2C:
    li r3, -0x1
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001F34:
    cmpwi r0, 0x1
    bne lbl_fn_80029D7C_00001F50
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001F50:
    li r3, -0x1
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00001F58:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80029D7C_00001FC4
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80029D7C_00001FBC
    lwz r0, 0x20(r31)
    li r8, 0x0
    stw r8, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r8, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x4
    stw r8, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x5
    b lbl_fn_80029D7C_00001FFC
lbl_fn_80029D7C_00001FBC:
    li r0, -0x1
    b lbl_fn_80029D7C_00001FFC
lbl_fn_80029D7C_00001FC4:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_80029D7C_00001FFC:
    cmpwi r0, 0x5
    bne lbl_fn_80029D7C_00002018
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00002018:
    cmpwi r0, 0x1
    bne lbl_fn_80029D7C_00002034
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00002034:
    cmpwi r0, 0x6
    bne lbl_fn_80029D7C_000020F8
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_807C6A40@ha
    addi r31, r5, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0xc(r31)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_80029D7C_00002064
    li r3, -0x1
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00002064:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80029D7C_00002098
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_80029D7C_00002098
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_80029D7C_0000209C
lbl_fn_80029D7C_00002098:
    li r0, 0x0
lbl_fn_80029D7C_0000209C:
    cmpwi r0, 0x0
    beq lbl_fn_80029D7C_000020F0
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
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_000020F0:
    li r3, -0x1
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_000020F8:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x88(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x8c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x88(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80029D7C_00002174
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x4
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80029D7C_00002178
lbl_fn_80029D7C_00002174:
    li r3, -0x1
lbl_fn_80029D7C_00002178:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8002A1FC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    stw r30, 0x48(r1)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8002A1FC_0000226C
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8002A1FC_00002244
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002A1FC_00002204
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002A1FC_00002204:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r31, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8002A1FC_00002248
lbl_fn_8002A1FC_00002244:
    li r0, -0x1
lbl_fn_8002A1FC_00002248:
    cmpwi r0, 0x7
    bne lbl_fn_8002A1FC_00002264
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002A1FC_000023A8
lbl_fn_8002A1FC_00002264:
    li r3, -0x1
    b lbl_fn_8002A1FC_000023A8
lbl_fn_8002A1FC_0000226C:
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
    bge lbl_fn_8002A1FC_000022E4
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x4
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x5
    b lbl_fn_8002A1FC_0000236C
lbl_fn_8002A1FC_000022E4:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002A1FC_00002368
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002A1FC_00002328
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002A1FC_00002328:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8002A1FC_0000236C
lbl_fn_8002A1FC_00002368:
    li r0, -0x1
lbl_fn_8002A1FC_0000236C:
    cmpwi r0, 0x5
    bne lbl_fn_8002A1FC_00002388
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002A1FC_000023A8
lbl_fn_8002A1FC_00002388:
    cmpwi r0, 0x7
    bne lbl_fn_8002A1FC_000023A4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002A1FC_000023A8
lbl_fn_8002A1FC_000023A4:
    li r3, -0x1
lbl_fn_8002A1FC_000023A8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8002A42C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002A42C_00002430
    lwz r0, 0x64(r30)
    li r8, 0x0
    stw r8, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r8, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x2
    stw r8, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x4
    b lbl_fn_8002A42C_00002480
lbl_fn_8002A42C_00002430:
    cmpwi r3, 0x1
    bne lbl_fn_8002A42C_0000247C
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    addi r6, r1, 0x3c
    stw r8, 0x3c(r1)
    addi r7, r1, 0x38
    li r3, 0x0
    stw r8, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
    b lbl_fn_8002A42C_00002480
lbl_fn_8002A42C_0000247C:
    li r0, -0x1
lbl_fn_8002A42C_00002480:
    cmpwi r0, 0x1
    bne lbl_fn_8002A42C_0000249C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_0000249C:
    cmpwi r0, 0x4
    bne lbl_fn_8002A42C_000024B8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_000024B8:
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8002A42C_000025F4
    lis r3, lbl_807C68C0@ha
    addi r31, r3, lbl_807C68C0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8002A42C_00002580
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BD14
    lfs f0, 0x1c(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_8002A42C_00002544
    lwz r8, 0x20(r31)
    cmpwi r8, 0x0
    beq lbl_fn_8002A42C_00002530
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r3, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x3
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
lbl_fn_8002A42C_00002530:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002A42C_00002584
lbl_fn_8002A42C_00002544:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r0, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x6
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_8002A42C_00002584
lbl_fn_8002A42C_00002580:
    li r0, -0x1
lbl_fn_8002A42C_00002584:
    cmpwi r0, 0x9
    bne lbl_fn_8002A42C_000025A0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_000025A0:
    cmpwi r0, 0x6
    bne lbl_fn_8002A42C_000025EC
    bl fn_8003CDB0
    cmpwi r3, 0x6
    bne lbl_fn_8002A42C_000025C8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_000025C8:
    cmpwi r3, 0x4
    bne lbl_fn_8002A42C_000025E4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_000025E4:
    li r3, -0x1
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_000025EC:
    li r3, -0x1
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_000025F4:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002A42C_00002618
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_8002A42C_0000261C
lbl_fn_8002A42C_00002618:
    li r0, -0x1
lbl_fn_8002A42C_0000261C:
    cmpwi r0, 0x6
    bne lbl_fn_8002A42C_00002668
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8002A42C_00002644
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_00002644:
    cmpwi r3, 0x4
    bne lbl_fn_8002A42C_00002660
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_00002660:
    li r3, -0x1
    b lbl_fn_8002A42C_0000266C
lbl_fn_8002A42C_00002668:
    li r3, -0x1
lbl_fn_8002A42C_0000266C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8002A6F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8002AD40
    cmpwi r3, 0x0
    bne lbl_fn_8002A6F0_000026B0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x0
    b lbl_fn_8002A6F0_000026F8
lbl_fn_8002A6F0_000026B0:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002A6F0_000026CC
    li r0, -0x1
    b lbl_fn_8002A6F0_000026D8
lbl_fn_8002A6F0_000026CC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002A6F0_000026D8:
    cmpwi r0, 0x1
    bne lbl_fn_8002A6F0_000026F4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002A6F0_000026F8
lbl_fn_8002A6F0_000026F4:
    li r3, -0x1
lbl_fn_8002A6F0_000026F8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002A774(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002A774_00002734
    li r0, -0x1
    b lbl_fn_8002A774_00002740
lbl_fn_8002A774_00002734:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002A774_00002740:
    cmpwi r0, 0x1
    bne lbl_fn_8002A774_00002750
    li r3, -0x1
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_00002750:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8002A774_000028E4
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002A774_000028DC
    lwz r3, 0x20(r31)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002A774_000027C8
    lwz r0, 0x64(r31)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x2
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x4
    b lbl_fn_8002A774_00002818
lbl_fn_8002A774_000027C8:
    cmpwi r3, 0x1
    bne lbl_fn_8002A774_00002814
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r8, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x0
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
    b lbl_fn_8002A774_00002818
lbl_fn_8002A774_00002814:
    li r0, -0x1
lbl_fn_8002A774_00002818:
    cmpwi r0, 0x1
    bne lbl_fn_8002A774_00002834
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_00002834:
    cmpwi r0, 0x4
    bne lbl_fn_8002A774_00002850
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_00002850:
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8002A774_000028A0
    bl fn_8003CDB0
    cmpwi r3, 0x6
    bne lbl_fn_8002A774_00002880
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_00002880:
    cmpwi r3, 0x4
    bne lbl_fn_8002A774_00002898
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_00002898:
    li r3, -0x1
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_000028A0:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8002A774_000028BC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_000028BC:
    cmpwi r3, 0x4
    bne lbl_fn_8002A774_000028D4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_000028D4:
    li r3, -0x1
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_000028DC:
    li r3, -0x1
    b lbl_fn_8002A774_000028E8
lbl_fn_8002A774_000028E4:
    li r3, -0x1
lbl_fn_8002A774_000028E8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002A968(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002A968_00002968
    lwz r0, 0x64(r31)
    li r8, 0x0
    stw r8, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r8, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x2
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x4
    b lbl_fn_8002A968_000029B8
lbl_fn_8002A968_00002968:
    cmpwi r3, 0x1
    bne lbl_fn_8002A968_000029B4
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r8, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x0
    stw r8, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
    b lbl_fn_8002A968_000029B8
lbl_fn_8002A968_000029B4:
    li r0, -0x1
lbl_fn_8002A968_000029B8:
    cmpwi r0, 0x4
    bne lbl_fn_8002A968_000029D4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002A968_00002AFC
lbl_fn_8002A968_000029D4:
    cmpwi r0, 0x1
    bne lbl_fn_8002A968_000029F0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002A968_00002AFC
lbl_fn_8002A968_000029F0:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x38(r1)
    slwi r0, r4, 1
    lfd f1, lbl_8072FF60@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8002A968_00002A40
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002A968_00002A90
lbl_fn_8002A968_00002A40:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002A968_00002A8C
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r0, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x5
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x8
    stw r31, lbl_807C6A40@l(r3)
    b lbl_fn_8002A968_00002A90
lbl_fn_8002A968_00002A8C:
    li r0, -0x1
lbl_fn_8002A968_00002A90:
    cmpwi r0, 0x8
    bne lbl_fn_8002A968_00002AAC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8002A968_00002AFC
lbl_fn_8002A968_00002AAC:
    cmpwi r0, 0x6
    bne lbl_fn_8002A968_00002AF8
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8002A968_00002AD4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002A968_00002AFC
lbl_fn_8002A968_00002AD4:
    cmpwi r3, 0x6
    bne lbl_fn_8002A968_00002AF0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002A968_00002AFC
lbl_fn_8002A968_00002AF0:
    li r3, -0x1
    b lbl_fn_8002A968_00002AFC
lbl_fn_8002A968_00002AF8:
    li r3, -0x1
lbl_fn_8002A968_00002AFC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8002AB7C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8002AB7C_00002BBC
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002AB7C_00002B70
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002AB7C_00002B70:
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
    b lbl_fn_8002AB7C_00002BC0
lbl_fn_8002AB7C_00002BBC:
    li r0, -0x1
lbl_fn_8002AB7C_00002BC0:
    cmpwi r0, 0x5
    bne lbl_fn_8002AB7C_00002BDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002AB7C_00002BE0
lbl_fn_8002AB7C_00002BDC:
    li r3, -0x1
lbl_fn_8002AB7C_00002BE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002AC64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8002AC64_00002C98
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002AC64_00002C58
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002AC64_00002C58:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8002AC64_00002C9C
lbl_fn_8002AC64_00002C98:
    li r0, -0x1
lbl_fn_8002AC64_00002C9C:
    cmpwi r0, 0x7
    bne lbl_fn_8002AC64_00002CB8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002AC64_00002CBC
lbl_fn_8002AC64_00002CB8:
    li r3, -0x1
lbl_fn_8002AC64_00002CBC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002AD40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r9, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r7, r9, lbl_807C6A40@l
    lwz r0, 0x18(r7)
    cmpwi r0, 0x0
    bne lbl_fn_8002AD40_00002D78
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8002AD40_00002D70
    li r0, 0x0
    li r8, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0xc(r7)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r8, lbl_807C6A40@l(r9)
    stw r0, 0x24(r1)
    stw r0, 0x20(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_8002AD40_00002DFC
lbl_fn_8002AD40_00002D70:
    li r3, -0x1
    b lbl_fn_8002AD40_00002DFC
lbl_fn_8002AD40_00002D78:
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_8002AD40_00002DF8
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0xc(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, lbl_807C6A40@l(r9)
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_8002AD40_00002DFC
lbl_fn_8002AD40_00002DF8:
    li r3, -0x1
lbl_fn_8002AD40_00002DFC:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002AE78(void)
{
    nofralloc
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0xe0(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
    blr
}

asm void fn_8002AE98(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0xa8(r1)
    addi r3, r31, 0x180
    stw r29, 0xa4(r1)
    stw r28, 0xa0(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002AE98_00002E68
    li r0, -0x1
    b lbl_fn_8002AE98_00002E74
lbl_fn_8002AE98_00002E68:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r0, 0x1
lbl_fn_8002AE98_00002E74:
    cmpwi r0, 0x1
    bne lbl_fn_8002AE98_00002E84
    li r3, -0x1
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_00002E84:
    addi r29, r31, 0x0
    lwz r3, 0x20(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002AE98_000032C8
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8002AE98_000032C0
    lwz r3, 0x0(r31)
    li r4, 0x0
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_8002AE98_00002EC0
    li r3, -0x1
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_00002EC0:
    addi r30, r31, 0x180
    lwz r3, 0xe0(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002AE98_00002FF0
    lwz r3, 0xe0(r30)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002AE98_00002F24
    lwz r0, 0x64(r29)
    li r8, 0x0
    stw r8, 0x78(r1)
    addi r4, r1, 0x84
    addi r5, r1, 0x80
    addi r6, r1, 0x7c
    stw r8, 0x7c(r1)
    addi r7, r1, 0x78
    li r3, 0x2
    stw r8, 0x80(r1)
    stw r0, 0x84(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r0, 0x4
    b lbl_fn_8002AE98_00002F70
lbl_fn_8002AE98_00002F24:
    cmpwi r3, 0x1
    bne lbl_fn_8002AE98_00002F6C
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x88(r1)
    addi r4, r1, 0x94
    addi r5, r1, 0x90
    addi r6, r1, 0x8c
    stw r8, 0x8c(r1)
    addi r7, r1, 0x88
    li r3, 0x0
    stw r8, 0x90(r1)
    stw r0, 0x94(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r0, 0x1
    b lbl_fn_8002AE98_00002F70
lbl_fn_8002AE98_00002F6C:
    li r0, -0x1
lbl_fn_8002AE98_00002F70:
    cmpwi r0, 0x4
    bne lbl_fn_8002AE98_00002F88
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x4
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_00002F88:
    cmpwi r0, 0x1
    bne lbl_fn_8002AE98_00002FA0
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_00002FA0:
    addi r3, r31, 0x180
    lwz r8, 0xe0(r3)
    cmpwi r8, 0x0
    beq lbl_fn_8002AE98_00002FE0
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x74(r1)
    addi r4, r1, 0x68
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    stw r3, 0x70(r1)
    addi r7, r1, 0x74
    li r3, 0x3
    stw r0, 0x6c(r1)
    stw r8, 0x68(r1)
    bl fn_8001AEDC
lbl_fn_8002AE98_00002FE0:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x6
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_00002FF0:
    addi r30, r31, 0x270
    addi r3, r30, 0x8
    bl fn_8001A510
    addi r28, r30, 0x8
    mr r3, r28
    bl fn_8001A65C
    mr r5, r28
    li r3, 0x0
    li r4, 0x0
    bl fn_8001A8A4
    mr r3, r28
    bl fn_8001AC54
    cmpwi r3, 0x5a
    bge lbl_fn_8002AE98_000031AC
    mr r3, r28
    bl fn_8001A510
    mr r3, r28
    bl fn_8001A65C
    mr r5, r28
    li r3, 0x0
    li r4, 0x0
    bl fn_8001A8A4
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8002AE98_00003060
    stw r0, 0x4(r30)
    li r0, 0x1
    b lbl_fn_8002AE98_0000306C
lbl_fn_8002AE98_00003060:
    li r0, 0x0
    stw r0, 0x4(r30)
    li r0, 0x0
lbl_fn_8002AE98_0000306C:
    cmpwi r0, 0x0
    beq lbl_fn_8002AE98_00003094
    addi r4, r31, 0x270
    li r0, 0x1
    addi r3, r31, 0x180
    lwz r4, 0x4(r4)
    stw r4, 0xe0(r3)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_00003094:
    lwz r3, 0x0(r31)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8002AE98_000030E4
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x64(r1)
    addi r4, r1, 0x58
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    stw r8, 0x60(r1)
    addi r7, r1, 0x64
    li r3, 0x0
    stw r8, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_000030E4:
    addi r30, r31, 0x0
    lfs f0, lbl_80880798
    lfs f1, 0x1c(r30)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002AE98_0000311C
    lwz r3, 0x0(r31)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8002AE98_0000311C
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_8002AE98_00003120
lbl_fn_8002AE98_0000311C:
    li r0, 0x0
lbl_fn_8002AE98_00003120:
    cmpwi r0, 0x0
    beq lbl_fn_8002AE98_0000316C
    addi r3, r31, 0x0
    li r8, 0x0
    lwz r0, 0x64(r3)
    addi r4, r1, 0x48
    stw r8, 0x54(r1)
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    stw r8, 0x50(r1)
    li r3, 0x2
    stw r8, 0x4c(r1)
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x4
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_0000316C:
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r8, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x0
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_000031AC:
    lwz r3, 0x0(r31)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8002AE98_000031FC
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r8, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x0
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_000031FC:
    lfs f1, 0x1c(r29)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002AE98_00003230
    lwz r3, 0x0(r31)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_8002AE98_00003230
    stw r3, 0x64(r29)
    li r0, 0x1
    b lbl_fn_8002AE98_00003234
lbl_fn_8002AE98_00003230:
    li r0, 0x0
lbl_fn_8002AE98_00003234:
    cmpwi r0, 0x0
    beq lbl_fn_8002AE98_00003280
    addi r3, r31, 0x0
    li r8, 0x0
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x24(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x20(r1)
    li r3, 0x2
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x4
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_00003280:
    li r8, 0x0
    li r0, 0x1e
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
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_000032C0:
    li r3, -0x1
    b lbl_fn_8002AE98_000032CC
lbl_fn_8002AE98_000032C8:
    li r3, -0x1
lbl_fn_8002AE98_000032CC:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8002B358(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8002B358_0000338C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002B358_0000334C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002B358_0000334C:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8002B358_00003390
lbl_fn_8002B358_0000338C:
    li r0, -0x1
lbl_fn_8002B358_00003390:
    cmpwi r0, 0x7
    bne lbl_fn_8002B358_000033AC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002B358_000033B0
lbl_fn_8002B358_000033AC:
    li r3, -0x1
lbl_fn_8002B358_000033B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002B434(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002B434_00003428
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
    b lbl_fn_8002B434_0000342C
lbl_fn_8002B434_00003428:
    li r0, -0x1
lbl_fn_8002B434_0000342C:
    cmpwi r0, 0x1
    bne lbl_fn_8002B434_00003448
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002B434_0000344C
lbl_fn_8002B434_00003448:
    li r3, -0x1
lbl_fn_8002B434_0000344C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002B4C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002B4C8_000034BC
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
    b lbl_fn_8002B4C8_000034C0
lbl_fn_8002B4C8_000034BC:
    li r3, -0x1
lbl_fn_8002B4C8_000034C0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002B53C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    lis r30, lbl_807C6A40@ha
    stw r29, 0x64(r1)
    addi r29, r30, lbl_807C6A40@l
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002B53C_000036C8
    lwz r3, 0xe0(r29)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002B53C_00003558
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x38(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x44
    stw r8, 0x3c(r1)
    addi r5, r1, 0x40
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    stw r8, 0x40(r1)
    li r3, 0x2
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x4
    b lbl_fn_8002B53C_000035A4
lbl_fn_8002B53C_00003558:
    cmpwi r3, 0x1
    bne lbl_fn_8002B53C_000035A0
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r8, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x0
    stw r8, 0x50(r1)
    stw r0, 0x54(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
    b lbl_fn_8002B53C_000035A4
lbl_fn_8002B53C_000035A0:
    li r0, -0x1
lbl_fn_8002B53C_000035A4:
    cmpwi r0, 0x1
    bne lbl_fn_8002B53C_000035C0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002B53C_00003700
lbl_fn_8002B53C_000035C0:
    cmpwi r0, 0x4
    bne lbl_fn_8002B53C_000035DC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002B53C_00003700
lbl_fn_8002B53C_000035DC:
    lis r29, lbl_807C6A40@ha
    lis r31, lbl_807C68C0@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, lbl_807C68C0@l(r31)
    lwz r5, 0xe0(r30)
    li r4, 0x0
    bl fn_8001BB04
    cmpwi r3, 0x0
    beq lbl_fn_8002B53C_00003660
    lwz r3, lbl_807C68C0@l(r31)
    li r4, 0x0
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_8002B53C_00003658
    lwz r0, 0xe0(r30)
    li r31, 0x0
    stw r31, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r31, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x7
    stw r0, 0x2c(r1)
    stw r31, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x9
    stw r31, 0xe0(r30)
    b lbl_fn_8002B53C_00003700
lbl_fn_8002B53C_00003658:
    li r3, -0x1
    b lbl_fn_8002B53C_00003700
lbl_fn_8002B53C_00003660:
    addi r3, r31, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002B53C_000036C0
    lwz r8, 0xe0(r30)
    cmpwi r8, 0x0
    beq lbl_fn_8002B53C_000036AC
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
lbl_fn_8002B53C_000036AC:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002B53C_00003700
lbl_fn_8002B53C_000036C0:
    li r3, -0x1
    b lbl_fn_8002B53C_00003700
lbl_fn_8002B53C_000036C8:
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
lbl_fn_8002B53C_00003700:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8002B788(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002B788_00003744
    li r0, -0x1
    b lbl_fn_8002B788_00003750
lbl_fn_8002B788_00003744:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002B788_00003750:
    cmpwi r0, 0x1
    bne lbl_fn_8002B788_00003798
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
    b lbl_fn_8002B788_0000379C
lbl_fn_8002B788_00003798:
    li r3, -0x1
lbl_fn_8002B788_0000379C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002B818(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    lis r10, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    li r8, 0x0
    addi r4, r4, lbl_807C68C0@l
    li r9, 0x1
    lwz r0, 0x80(r4)
    addi r3, r10, lbl_807C6A40@l
    lwz r4, 0x7c(r4)
    addi r5, r1, 0xc
    stw r4, 0x18(r3)
    addi r4, r1, 0x8
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r9, 0x1c(r3)
    li r3, 0x0
    stw r9, lbl_807C6A40@l(r10)
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r1)
    li r3, 0x3
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002B88C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C6B30@ha
    li r9, 0x0
    stw r0, 0x24(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r31, 0x1c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r8, 0x18(r4)
    addi r4, r1, 0x8
    lwz r0, lbl_807C6B30@l(r3)
    li r3, 0xd
    stw r9, 0x14(r1)
    stw r9, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002B8FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x18(r1)
    addi r3, r31, 0x0
    li r30, -0x1
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002B8FC_00003948
    lwz r3, 0x270(r31)
    lwz r4, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8002B8FC_000038D8
    cmpwi r4, 0x0
    bne lbl_fn_8002B8FC_000038E0
lbl_fn_8002B8FC_000038D8:
    li r6, 0x0
    b lbl_fn_8002B8FC_000038F0
lbl_fn_8002B8FC_000038E0:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r6, 0xc(r1)
lbl_fn_8002B8FC_000038F0:
    addi r3, r31, 0x0
    lis r4, 0x4330
    lwz r0, 0x7c(r3)
    lis r5, lbl_8072FF60@ha
    xoris r3, r6, 0x8000
    stw r4, 0x10(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r5)
    stw r0, 0x14(r1)
    lfs f0, lbl_808807B4
    lfd f1, 0x10(r1)
    stw r3, 0xc(r1)
    fsubs f1, f1, f3
    stw r4, 0x8(r1)
    lfd f2, 0x8(r1)
    fmuls f0, f0, f1
    fsubs f1, f2, f3
    fcmpo cr0, f1, f0
    ble lbl_fn_8002B8FC_00003948
    li r0, 0x1
    stw r0, 0x180(r31)
    li r30, 0x3
lbl_fn_8002B8FC_00003948:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
