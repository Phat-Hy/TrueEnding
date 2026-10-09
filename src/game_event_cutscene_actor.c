#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DVDInit(void);
extern void NWC24SuspendScheduler(void);
extern void OSGetTime(void);
extern void OSInit(void);
extern void OSReport(const char* msg, ...);
extern void SCGetLanguage(void);
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800463A8(void);
extern void fn_80047DCC(void);
extern void fn_8004C9B4(void);
extern void fn_8004D124(void);
extern void fn_8004D258(void);
extern void fn_8005DD60(void);
extern void fn_8005DED8(void);
extern void fn_800696C8(void);
extern void fn_80069E50(void);
extern void fn_8006BA54(void);
extern void fn_8006F72C(void);
extern void fn_80071220(void);
extern void fn_800713D4(void);
extern void fn_80071D60(void);
extern void fn_800827E0(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_80089620(void);
extern void fn_8008BBD8(void);
extern void fn_800A2C48(void);
extern void fn_800A5508(void);
extern void fn_800A5554(void);
extern void fn_800A8FF0(void);
extern void fn_800B95C4(void);
extern void fn_800BC798(void);
extern void fn_800BD94C(void);
extern void fn_800BD9C0(void);
extern void fn_800BDBC8(void);
extern void fn_800BFAC4(void);
extern void fn_800C622C(void);
extern void fn_800CCBA4(void);
extern void fn_800CE6E0(void);
extern void fn_800CECF0(void);
extern void fn_800CFDF0(void);
extern void fn_800CFFB8(void);
extern void fn_800D0684(void);
extern void fn_800D1D3C(void);
extern void fn_800D2494(void);
extern void fn_800D2AD8(void);
extern void fn_800D2D7C(void);
extern void fn_800DBF68(void);
extern void fn_800DCA6C(void);
extern void fn_80185AD4(void);
extern void fn_80186520(void);
extern void fn_80187C44(void);
extern void fn_801F0D80(void);
extern void fn_80207F80(void);
extern void fn_80239794(void);
extern void fn_80363CE4(void);
extern void fn_803B3D2C(void);
extern void fn_804405F8(void);
extern void fn_8044073C(void);
extern void fn_8046D7D8(void);
extern void fn_8046F014(void);
extern void fn_8046F2C4(void);
extern void fn_8047043C(void);
extern void fn_80470528(void);
extern void fn_8047B594(void);
extern void fn_8047B5A0(void);
extern void fn_8047B5CC(void);
extern void fn_8047B684(void);
extern void fn_8047B6B0(void);
extern void fn_80570C54(void);
extern void fn_80570CFC(void);
extern void fn_805728C0(void);
extern void fn_8057E8C8(void);
extern void fn_8057EAF4(void);
extern void fn_805A6B58(void);
extern void fn_805A6BD8(void);
extern void fn_805A6BDC(void);
extern void fn_805A6D14(void);
extern void fn_805F30F0(void);
extern void fn_80603AA0(void);
extern void fn_80682428(void);
extern void fn_806846C4(void);
extern void fn_806846FC(void);
extern void fn_80686A48(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075626C[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80790060[];
extern u8 lbl_80790068[];
extern u8 lbl_80790074[];
extern u8 lbl_80790080[];
extern u8 lbl_807C8A68[];
extern u8 lbl_807C8A98[];
extern u8 lbl_807C8AA0[];
extern u8 lbl_807C8AA8[];

/* Small data declarations */
extern u32 lbl_8087E078;
extern u32 lbl_8087E07C;
extern u32 lbl_8087E080;
extern u32 lbl_8087E084;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EE94;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F018;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F420;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F518;
extern u32 lbl_8087F530;
extern u32 lbl_8087F534;
extern u32 lbl_8087F538;
extern u32 lbl_8087F539;
extern u32 lbl_8087F53A;
extern u32 lbl_8087F540;
extern u32 lbl_8087F9A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_808813D0;
extern u32 lbl_80886F14;
extern u32 lbl_80886F1C;
extern u32 lbl_80886F38;
extern u32 lbl_80886F64;
extern u32 lbl_80886F68;
extern u32 lbl_80886F70;
extern u32 lbl_80886F74;
extern u32 lbl_80886F78;

/* Function declarations */
void fn_8047961C(void);
void fn_80479940(void);
void fn_80479998(void);
void fn_804799CC(void);
void main(void);
void fn_80479EA0(void);
void fn_8047A158(void);
void fn_8047A410(void);
void fn_8047A424(void);
void fn_8047A4C8(void);
void fn_8047AEBC(void);

asm void fn_8047961C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x150
    bl _savegpr_24
    lwz r8, lbl_8087F0A8
    mr r25, r3
    mr r26, r4
    mr r27, r5
    lwz r0, 0x6c(r8)
    mr r28, r6
    cmpwi r0, 0x0
    ble lbl_fn_8047961C_0000030C
    lwz r0, 0x70(r8)
    cmpw r7, r0
    blt lbl_fn_8047961C_0000030C
    cmpwi r4, 0x0
    beq lbl_fn_8047961C_0000030C
    rlwinm r0, r6, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8047961C_0000013C
    lfs f1, 0x94c(r3)
    lfs f0, lbl_80886F64
    fcmpo cr0, f1, f0
    ble lbl_fn_8047961C_0000013C
    lwz r5, 0x48(r3)
    neg r0, r5
    or r0, r0, r5
    srwi. r0, r0, 31
    beq lbl_fn_8047961C_00000134
    lwz r5, 0x48(r3)
    addi r29, r1, 0x20
    cmplw r4, r29
    subi r0, r5, 0x1
    mulli r0, r0, 0x90
    add r30, r3, r0
    beq lbl_fn_8047961C_000000B0
    mr r3, r26
    bl fn_80686A48
    mr r5, r3
    mr r3, r29
    mr r4, r26
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8047961C_000000B0:
    addi r30, r30, 0x50
    addi r24, r1, 0x20
    mr r3, r30
    bl fn_80686A48
    cmpwi r24, 0x0
    mr r29, r3
    beq lbl_fn_8047961C_000000D4
    mr r3, r24
    b lbl_fn_8047961C_000000D8
lbl_fn_8047961C_000000D4:
    la r3, lbl_808813D0
lbl_fn_8047961C_000000D8:
    bl fn_80686A48
    cmplw r3, r29
    ble lbl_fn_8047961C_00000104
    cmpwi r24, 0x0
    beq lbl_fn_8047961C_000000F4
    mr r3, r24
    b lbl_fn_8047961C_000000F8
lbl_fn_8047961C_000000F4:
    la r3, lbl_808813D0
lbl_fn_8047961C_000000F8:
    bl fn_80686A48
    mr r5, r3
    b lbl_fn_8047961C_00000110
lbl_fn_8047961C_00000104:
    mr r3, r30
    bl fn_80686A48
    mr r5, r3
lbl_fn_8047961C_00000110:
    cmpwi r24, 0x0
    beq lbl_fn_8047961C_00000120
    mr r3, r24
    b lbl_fn_8047961C_00000124
lbl_fn_8047961C_00000120:
    la r3, lbl_808813D0
lbl_fn_8047961C_00000124:
    mr r4, r30
    bl fn_806846FC
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_8047961C_00000134:
    cmpwi r0, 0x0
    bne lbl_fn_8047961C_0000030C
lbl_fn_8047961C_0000013C:
    lwz r0, 0x48(r25)
    cmplwi r0, 0x10
    blt lbl_fn_8047961C_000001D0
    mr r30, r25
    addi r29, r25, 0x4c
    li r31, 0x0
    b lbl_fn_8047961C_000001BC
lbl_fn_8047961C_00000158:
    addi r0, r31, 0x1
    lwz r4, 0xdc(r30)
    mulli r3, r0, 0x90
    stw r4, 0x4c(r30)
    addi r0, r29, 0x4
    add r3, r25, r3
    addi r24, r3, 0x50
    cmplw r24, r0
    beq lbl_fn_8047961C_00000198
    mr r3, r24
    bl fn_80686A48
    mr r5, r3
    mr r4, r24
    addi r3, r29, 0x4
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8047961C_00000198:
    lwz r0, 0x160(r30)
    addi r29, r29, 0x90
    stw r0, 0xd0(r30)
    addi r31, r31, 0x1
    lwz r0, 0x164(r30)
    stw r0, 0xd4(r30)
    lwz r0, 0x168(r30)
    stw r0, 0xd8(r30)
    addi r30, r30, 0x90
lbl_fn_8047961C_000001BC:
    lwz r3, 0x48(r25)
    subi r0, r3, 0x1
    cmplw r31, r0
    blt lbl_fn_8047961C_00000158
    stw r0, 0x48(r25)
lbl_fn_8047961C_000001D0:
    li r29, 0x0
    stw r29, 0x10(r1)
    mr r3, r26
    addi r30, r1, 0x10
    stw r29, 0x14(r1)
    stw r29, 0x18(r1)
    bl fn_80686A48
    mr r24, r3
    mr r3, r30
    mr r4, r24
    bl fn_800DBF68
    lbz r3, 0xc(r1)
    slwi r0, r24, 1
    stb r3, 0x8(r1)
    mr r3, r30
    mr r6, r26
    add r7, r26, r0
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    mr r3, r30
    bl fn_803B3D2C
    lwz r0, 0x10(r1)
    li r3, -0x1
    stw r29, 0xa0(r1)
    srwi. r0, r0, 31
    sth r29, 0xa4(r1)
    stw r3, 0x124(r1)
    stw r29, 0x128(r1)
    stw r29, 0x12c(r1)
    bne lbl_fn_8047961C_00000258
    addi r24, r1, 0x12
    b lbl_fn_8047961C_0000025C
lbl_fn_8047961C_00000258:
    lwz r24, 0x18(r1)
lbl_fn_8047961C_0000025C:
    addi r26, r1, 0xa4
    cmplw r24, r26
    beq lbl_fn_8047961C_00000284
    mr r3, r24
    bl fn_80686A48
    mr r5, r3
    mr r3, r26
    mr r4, r24
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8047961C_00000284:
    stw r27, 0x124(r1)
    stw r28, 0x128(r1)
    lwz r0, 0x48(r25)
    mulli r0, r0, 0x90
    add r0, r25, r0
    addic. r6, r0, 0x4c
    beq lbl_fn_8047961C_000002E4
    lwz r3, 0xa0(r1)
    li r0, 0x10
    mr r5, r6
    stw r3, 0x0(r6)
    addi r4, r1, 0xa0
    mtctr r0
lbl_fn_8047961C_000002B8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_8047961C_000002B8
    lwz r0, 0x124(r1)
    stw r0, 0x84(r6)
    lwz r0, 0x128(r1)
    stw r0, 0x88(r6)
    lwz r0, 0x12c(r1)
    stw r0, 0x8c(r6)
lbl_fn_8047961C_000002E4:
    lwz r3, 0x48(r25)
    li r0, 0x0
    stw r0, 0x950(r25)
    addi r0, r3, 0x1
    stw r0, 0x48(r25)
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8047961C_0000030C
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8047961C_0000030C:
    addi r11, r1, 0x150
    bl _restgpr_24
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80479940(void)
{
    nofralloc
    lis r6, lbl_807C8A68@ha
    lfs f3, lbl_80886F38
    addi r6, r6, lbl_807C8A68@l
    lfs f2, lbl_80886F1C
    addi r5, r6, 0x0
    lfs f1, lbl_80886F68
    addi r4, r6, 0x10
    addi r3, r6, 0x20
    lfs f0, lbl_80886F14
    stfs f3, 0x0(r6)
    stfs f3, 0x4(r5)
    stfs f3, 0x8(r5)
    stfs f2, 0xc(r5)
    stfs f2, 0x10(r6)
    stfs f3, 0x4(r4)
    stfs f1, 0x8(r4)
    stfs f2, 0xc(r4)
    stfs f2, 0x20(r6)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f2, 0xc(r3)
    blr
}

asm void fn_80479998(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8087F534
    bl OSGetTime
    stw r4, 0x34(r31)
    stw r3, 0x30(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804799CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8087F534
    bl OSGetTime
    stw r4, 0x3c(r31)
    stw r3, 0x38(r31)
    lwz r0, 0x34(r31)
    lwz r5, 0x30(r31)
    subfc r0, r0, r4
    stw r0, 0x44(r31)
    subfe r0, r5, r3
    stw r0, 0x40(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void main(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r14, 0x58(r1)
    bl fn_8047A4C8
    lis r20, fn_8047A410@ha
    lis r21, fn_8047A424@ha
    lis r23, lbl_80775B60@ha
    lis r29, lbl_80775B98@ha
    lis r30, lbl_80775B30@ha
    lis r22, fn_80479998@ha
    lis r14, fn_804799CC@ha
    li r0, 0x0
    stw r0, 0x4c(r1)
    lis r19, lbl_807C8A98@ha
    addi r23, r23, lbl_80775B60@l
    addi r27, r1, 0x8
    addi r29, r29, lbl_80775B98@l
    addi r30, r30, lbl_80775B30@l
    addi r17, r1, 0x18
    addi r20, r20, fn_8047A410@l
    addi r21, r21, fn_8047A424@l
    addi r22, r22, fn_80479998@l
    addi r14, r14, fn_804799CC@l
    li r24, 0x0
    lis r25, lbl_80775BC8@ha
    li r28, 0x1
lbl_main_00000468:
    lbz r0, lbl_8087F538
    stw r24, 0x38(r1)
    extsb. r0, r0
    bne lbl_main_00000488
    addi r3, r19, lbl_807C8A98@l
    stw r21, lbl_807C8A98@l(r19)
    stw r20, 0x4(r3)
    stb r28, lbl_8087F538
lbl_main_00000488:
    lwz r12, lbl_807C8A98@l(r19)
    cmpwi r12, 0x0
    beq lbl_main_000004A8
    addi r3, r1, 0x3c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_main_000004A8:
    cmpwi r22, 0x0
    beq lbl_main_000004BC
    stw r22, 0x3c(r1)
    li r0, 0x1
    b lbl_main_000004C0
lbl_main_000004BC:
    li r0, 0x0
lbl_main_000004C0:
    cmpwi r0, 0x0
    beq lbl_main_000004D4
    addi r3, r19, lbl_807C8A98@l
    stw r3, 0x38(r1)
    b lbl_main_000004D8
lbl_main_000004D4:
    stw r24, 0x38(r1)
lbl_main_000004D8:
    lwz r3, lbl_8087EFB4
    addi r4, r1, 0x38
    li r5, 0x0
    bl fn_80479EA0
    addic. r0, r1, 0x38
    beq lbl_main_00000524
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_main_00000524
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_main_00000520
    mr r3, r0
    li r5, 0x1
    addi r3, r3, 0x4
    mr r4, r3
    mtctr r12
    bctrl
lbl_main_00000520:
    stw r24, 0x38(r1)
lbl_main_00000524:
    lbz r0, lbl_8087F538
    stw r24, 0x24(r1)
    extsb. r0, r0
    bne lbl_main_00000544
    addi r3, r19, lbl_807C8A98@l
    stw r21, lbl_807C8A98@l(r19)
    stw r20, 0x4(r3)
    stb r28, lbl_8087F538
lbl_main_00000544:
    lwz r12, lbl_807C8A98@l(r19)
    cmpwi r12, 0x0
    beq lbl_main_00000564
    addi r3, r1, 0x28
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_main_00000564:
    cmpwi r14, 0x0
    beq lbl_main_00000578
    stw r14, 0x28(r1)
    li r0, 0x1
    b lbl_main_0000057C
lbl_main_00000578:
    li r0, 0x0
lbl_main_0000057C:
    cmpwi r0, 0x0
    beq lbl_main_00000590
    addi r3, r19, lbl_807C8A98@l
    stw r3, 0x24(r1)
    b lbl_main_00000594
lbl_main_00000590:
    stw r24, 0x24(r1)
lbl_main_00000594:
    lwz r3, lbl_8087EFB4
    addi r4, r1, 0x24
    li r5, 0x0
    bl fn_8047A158
    addic. r0, r1, 0x24
    beq lbl_main_000005E0
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    beq lbl_main_000005E0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_main_000005DC
    mr r3, r0
    li r5, 0x1
    addi r3, r3, 0x4
    mr r4, r3
    mtctr r12
    bctrl
lbl_main_000005DC:
    stw r24, 0x24(r1)
lbl_main_000005E0:
    lwz r3, lbl_8087F534
    bl fn_805A6BD8
    lwz r15, lbl_8087F534
    bl OSGetTime
    stw r4, 0x4(r15)
    stw r3, 0x0(r15)
    lwz r0, lbl_8087F540
    cmpwi r0, 0x0
    beq lbl_main_00000614
    lwz r3, lbl_8087F534
    bl fn_805A6D14
    lwz r3, lbl_8087F540
    stfs f1, 0x1eb4(r3)
lbl_main_00000614:
    lwz r3, lbl_8087EF70
    bl fn_800A5554
    lwz r3, lbl_8087EFB4
    bl fn_800BDBC8
    lwz r15, lbl_8087F534
    bl OSGetTime
    stw r4, 0x1c(r15)
    stw r3, 0x18(r15)
    lwz r3, lbl_8087F4E8
    lwz r0, 0x84(r3)
    cmpwi r0, 0x1
    beq lbl_main_00000654
    lwz r3, lbl_8087F530
    bl fn_800D2494
    lwz r3, lbl_8087EE98
    bl fn_8004D124
lbl_main_00000654:
    lwz r15, lbl_8087F534
    bl OSGetTime
    stw r4, 0x24(r15)
    stw r3, 0x20(r15)
    lwz r0, 0x1c(r15)
    lwz r5, 0x18(r15)
    subfc r0, r0, r4
    stw r0, 0x2c(r15)
    subfe r0, r5, r3
    stw r0, 0x28(r15)
    lwz r3, lbl_8087F530
    bl fn_800D2D7C
    lwz r3, lbl_8087F530
    bl fn_800D2AD8
    lwz r3, lbl_8087F4E8
    bl fn_8044073C
    lwz r7, lbl_8087F0A8
    lwz r0, 0x8(r7)
    cmpwi r0, 0x0
    beq lbl_main_000006C0
    lwz r3, lbl_8087EE98
    li r4, 0x1
    lwz r6, 0x10(r7)
    li r5, 0x0
    lwz r8, 0x14(r7)
    li r7, -0x1
    bl fn_8004D258
lbl_main_000006C0:
    lwz r4, lbl_8087F0A8
    lwz r3, lbl_8087EEB8
    lwz r4, 0x4c(r4)
    bl fn_80069E50
    lwz r3, lbl_8087EFB4
    bl fn_800BFAC4
    lwz r15, lbl_8087F534
    bl OSGetTime
    stw r4, 0x4c(r15)
    stw r3, 0x48(r15)
    lwz r3, lbl_8087EE90
    bl fn_80047DCC
    lwz r3, lbl_8087EFE8
    bl fn_800CE6E0
    lwz r3, lbl_8087EFE8
    bl fn_800CECF0
    lwz r15, lbl_8087F534
    bl OSGetTime
    stw r4, 0x54(r15)
    stw r3, 0x50(r15)
    lwz r0, 0x4c(r15)
    lwz r5, 0x48(r15)
    subfc r0, r0, r4
    stw r0, 0x5c(r15)
    subfe r0, r5, r3
    stw r0, 0x58(r15)
    lwz r15, lbl_8087F534
    bl OSGetTime
    stw r4, 0xc(r15)
    stw r3, 0x8(r15)
    lwz r0, 0x4(r15)
    lwz r5, 0x0(r15)
    subfc r0, r0, r4
    stw r0, 0x14(r15)
    subfe r0, r5, r3
    stw r0, 0x10(r15)
    lwz r3, lbl_8087F534
    bl fn_805A6BDC
    lwz r4, lbl_8087F0A8
    lwz r3, lbl_8087EEE0
    lwz r4, 0x30(r4)
    subi r0, r4, 0x1e
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_80071D60
    lwz r3, lbl_8087F9A0
    bl fn_80570CFC
    lwz r18, lbl_8087EE94
    li r16, 0x0
    li r31, 0x0
    b lbl_main_00000860
lbl_main_0000078C:
    lwz r0, 0x8(r18)
    add r15, r0, r31
    lwzx r0, r31, r0
    cmpwi r0, 0x0
    bne lbl_main_00000844
    stw r23, 0x18(r1)
    addi r3, r25, lbl_80775BC8@l
    stb r24, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r26, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r27, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_main_000007F0
    stw r28, 0x4(r3)
    stw r28, 0x8(r3)
    stw r29, 0x0(r3)
    stw r26, 0xc(r3)
lbl_main_000007F0:
    cmpwi r24, 0x0
    stw r3, 0x20(r1)
    stw r24, 0x10(r1)
    beq lbl_main_00000808
    li r3, 0x0
    bl fn_80084C24
lbl_main_00000808:
    lwz r3, 0x1c(r1)
    addi r4, r25, lbl_80775BC8@l
    bl strcpy
    stw r30, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r17, 0x0
    beq lbl_main_00000844
    addic. r3, r17, 0x4
    beq lbl_main_00000844
    beq lbl_main_00000844
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_main_00000844
    bl fn_806952C4
lbl_main_00000844:
    lwz r4, 0x0(r15)
    addi r3, r15, 0x4
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    addi r16, r16, 0x1
    addi r31, r31, 0x14
lbl_main_00000860:
    lwz r0, 0x0(r18)
    cmplw r16, r0
    blt lbl_main_0000078C
    lwz r0, 0x4c(r1)
    cmpwi r0, 0x2
    bne lbl_main_00000468
    li r0, 0x0
    stw r0, 0x4c(r1)
    b lbl_main_00000468
}

asm void fn_80479EA0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    li r0, 0x0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r5
    stw r0, 0x48(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_80479EA0_000008D0
    stw r6, 0x48(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0x4c
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80479EA0_000008D0:
    mr r5, r30
    addi r3, r1, 0x30
    addi r4, r1, 0x48
    bl fn_800BD94C
    lwz r6, 0x30(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r6, 0x0
    beq lbl_fn_80479EA0_00000910
    stw r6, 0x1c(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80479EA0_00000910:
    addi r3, r31, 0x8b0
    addi r0, r1, 0x1c
    cmplw r3, r0
    beq lbl_fn_80479EA0_00000A64
    lwz r3, 0x1c(r1)
    li r0, 0x0
    stw r0, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80479EA0_00000954
    lwz r6, 0x1c(r1)
    addi r3, r1, 0x20
    stw r6, 0x8(r1)
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80479EA0_00000954:
    addi r3, r31, 0x8b0
    addi r0, r1, 0x1c
    cmplw r3, r0
    beq lbl_fn_80479EA0_000009C0
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80479EA0_00000998
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80479EA0_00000990
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80479EA0_00000990:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_80479EA0_00000998:
    lwz r6, 0x8b0(r31)
    cmpwi r6, 0x0
    beq lbl_fn_80479EA0_000009C0
    stw r6, 0x1c(r1)
    addi r3, r31, 0x8b4
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80479EA0_000009C0:
    addi r3, r1, 0x8
    addi r0, r31, 0x8b0
    cmplw r3, r0
    beq lbl_fn_80479EA0_00000A30
    lwz r3, 0x8b0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80479EA0_00000A04
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80479EA0_000009FC
    addi r3, r31, 0x8b4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80479EA0_000009FC:
    li r0, 0x0
    stw r0, 0x8b0(r31)
lbl_fn_80479EA0_00000A04:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80479EA0_00000A30
    stw r0, 0x8b0(r31)
    addi r3, r1, 0xc
    addi r4, r31, 0x8b4
    li r5, 0x0
    lwz r6, 0x8(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80479EA0_00000A30:
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80479EA0_00000A64
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80479EA0_00000A5C
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80479EA0_00000A5C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80479EA0_00000A64:
    addic. r3, r1, 0x1c
    beq lbl_fn_80479EA0_00000AA0
    lwz r4, 0x1c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80479EA0_00000AA0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80479EA0_00000A98
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80479EA0_00000A98:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_80479EA0_00000AA0:
    lwz r0, 0x44(r1)
    addic. r3, r1, 0x30
    stw r0, 0x8c4(r31)
    beq lbl_fn_80479EA0_00000AE8
    beq lbl_fn_80479EA0_00000AE8
    lwz r4, 0x30(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80479EA0_00000AE8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80479EA0_00000AE0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80479EA0_00000AE0:
    li r0, 0x0
    stw r0, 0x30(r1)
lbl_fn_80479EA0_00000AE8:
    addic. r3, r1, 0x48
    beq lbl_fn_80479EA0_00000B24
    lwz r4, 0x48(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80479EA0_00000B24
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80479EA0_00000B1C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80479EA0_00000B1C:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_80479EA0_00000B24:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8047A158(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    li r0, 0x0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r5
    stw r0, 0x48(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8047A158_00000B88
    stw r6, 0x48(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0x4c
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047A158_00000B88:
    mr r5, r30
    addi r3, r1, 0x30
    addi r4, r1, 0x48
    bl fn_800BD94C
    lwz r6, 0x30(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r6, 0x0
    beq lbl_fn_8047A158_00000BC8
    stw r6, 0x1c(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047A158_00000BC8:
    addi r3, r31, 0x8c8
    addi r0, r1, 0x1c
    cmplw r3, r0
    beq lbl_fn_8047A158_00000D1C
    lwz r3, 0x1c(r1)
    li r0, 0x0
    stw r0, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047A158_00000C0C
    lwz r6, 0x1c(r1)
    addi r3, r1, 0x20
    stw r6, 0x8(r1)
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047A158_00000C0C:
    addi r3, r31, 0x8c8
    addi r0, r1, 0x1c
    cmplw r3, r0
    beq lbl_fn_8047A158_00000C78
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047A158_00000C50
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047A158_00000C48
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A158_00000C48:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_8047A158_00000C50:
    lwz r6, 0x8c8(r31)
    cmpwi r6, 0x0
    beq lbl_fn_8047A158_00000C78
    stw r6, 0x1c(r1)
    addi r3, r31, 0x8cc
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047A158_00000C78:
    addi r3, r1, 0x8
    addi r0, r31, 0x8c8
    cmplw r3, r0
    beq lbl_fn_8047A158_00000CE8
    lwz r3, 0x8c8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8047A158_00000CBC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047A158_00000CB4
    addi r3, r31, 0x8cc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A158_00000CB4:
    li r0, 0x0
    stw r0, 0x8c8(r31)
lbl_fn_8047A158_00000CBC:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8047A158_00000CE8
    stw r0, 0x8c8(r31)
    addi r3, r1, 0xc
    addi r4, r31, 0x8cc
    li r5, 0x0
    lwz r6, 0x8(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047A158_00000CE8:
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047A158_00000D1C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047A158_00000D14
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A158_00000D14:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8047A158_00000D1C:
    addic. r3, r1, 0x1c
    beq lbl_fn_8047A158_00000D58
    lwz r4, 0x1c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8047A158_00000D58
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8047A158_00000D50
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A158_00000D50:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_8047A158_00000D58:
    lwz r0, 0x44(r1)
    addic. r3, r1, 0x30
    stw r0, 0x8dc(r31)
    beq lbl_fn_8047A158_00000DA0
    beq lbl_fn_8047A158_00000DA0
    lwz r4, 0x30(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8047A158_00000DA0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8047A158_00000D98
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A158_00000D98:
    li r0, 0x0
    stw r0, 0x30(r1)
lbl_fn_8047A158_00000DA0:
    addic. r3, r1, 0x48
    beq lbl_fn_8047A158_00000DDC
    lwz r4, 0x48(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8047A158_00000DDC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8047A158_00000DD4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A158_00000DD4:
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_8047A158_00000DDC:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8047A410(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    lwz r12, 0x0(r5)
    mtctr r12
    bctr
}

asm void fn_8047A424(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8047A424_00000E3C
    lis r3, lbl_80790060@ha
    addi r3, r3, lbl_80790060@l
    stw r3, 0x0(r4)
    b lbl_fn_8047A424_00000E94
lbl_fn_8047A424_00000E3C:
    cmpwi r5, 0x0
    bne lbl_fn_8047A424_00000E50
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_8047A424_00000E94
lbl_fn_8047A424_00000E50:
    cmpwi r5, 0x1
    bne lbl_fn_8047A424_00000E64
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_8047A424_00000E94
lbl_fn_8047A424_00000E64:
    lwz r5, 0x0(r4)
    lis r3, lbl_80790060@ha
    lwz r4, lbl_80790060@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8047A424_00000E8C
    stw r30, 0x0(r31)
    b lbl_fn_8047A424_00000E94
lbl_fn_8047A424_00000E8C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8047A424_00000E94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047A4C8(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stw r31, 0x24c(r1)
    stw r30, 0x248(r1)
    stw r29, 0x244(r1)
    bl OSInit
    li r3, 0x4
    oris r3, r3, 0x4
    mtspr GQR2, r3
    li r3, 0x5
    oris r3, r3, 0x5
    mtspr GQR3, r3
    li r3, 0x6
    oris r3, r3, 0x6
    mtspr GQR4, r3
    li r3, 0x7
    oris r3, r3, 0x7
    mtspr GQR5, r3
    bl fn_800827E0
    addi r3, r3, 0x1b4
    bl fn_805F30F0
    bl DVDInit
    bl fn_80603AA0
    bl NWC24SuspendScheduler
    bl fn_80570C54
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmplwi r0, 0x6
    blt lbl_fn_8047A4C8_00000F28
    li r3, 0x1
lbl_fn_8047A4C8_00000F28:
    clrlwi. r0, r3, 24
    bne lbl_fn_8047A4C8_00000F34
    li r3, 0x1
lbl_fn_8047A4C8_00000F34:
    clrlwi r3, r3, 24
    bl fn_8006BA54
    bl fn_80071220
    lwz r3, lbl_8087EEE0
    li r4, 0x280
    li r5, 0x1c0
    bl fn_800713D4
    lis r29, lbl_8075626C@ha
    addi r3, r29, lbl_8075626C@l
    crclr 6
    bl OSReport
    addi r4, r29, lbl_8075626C@l
    li r3, 0x48
    addi r5, r4, 0x3
    li r7, 0x0
    li r4, 0x1
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8047A4C8_00000F8C
    li r4, 0x0
    bl fn_800D1D3C
lbl_fn_8047A4C8_00000F8C:
    stw r3, lbl_8087F530
    bl fn_80089620
    bl fn_800B95C4
    bl fn_80363CE4
    lwz r4, lbl_8087F420
    li r0, 0x1
    stw r0, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, lbl_8087EE94
    cmpwi r0, 0x0
    bne lbl_fn_8047A4C8_00000FEC
    li r3, 0xc
    li r4, 0x1
    la r5, lbl_8087E07C
    la r6, lbl_8087E078
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8047A4C8_00000FE8
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
lbl_fn_8047A4C8_00000FE8:
    stw r3, lbl_8087EE94
lbl_fn_8047A4C8_00000FEC:
    lbz r0, lbl_8087F53A
    lis r4, lbl_80790068@ha
    lwzu r6, lbl_80790068@l(r4)
    extsb. r0, r0
    lwz r7, lbl_8087F9A0
    lwz r5, 0x4(r4)
    li r0, 0x0
    lwz r4, 0x8(r4)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r6, 0xb0(r1)
    stw r5, 0xb4(r1)
    stw r4, 0xb8(r1)
    stw r6, 0x100(r1)
    stw r5, 0x104(r1)
    stw r4, 0x108(r1)
    stw r7, 0x10c(r1)
    stw r0, 0x228(r1)
    bne lbl_fn_8047A4C8_00001064
    lis r7, lbl_807C8AA8@ha
    lis r5, fn_8047B684@ha
    lis r4, fn_8047B6B0@ha
    li r0, 0x1
    addi r4, r4, fn_8047B6B0@l
    addi r6, r7, lbl_807C8AA8@l
    addi r5, r5, fn_8047B684@l
    stw r5, 0x4(r6)
    stw r4, lbl_807C8AA8@l(r7)
    stb r0, lbl_8087F53A
lbl_fn_8047A4C8_00001064:
    lwz r6, 0x100(r1)
    addi r3, r1, 0xa0
    lwz r5, 0x104(r1)
    lwz r4, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r6, 0xa0(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r0, 0xac(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8047A4C8_000010D8
    addic. r0, r1, 0x22c
    lwz r6, 0xa0(r1)
    lwz r5, 0xa4(r1)
    lwz r4, 0xa8(r1)
    lwz r0, 0xac(r1)
    stw r6, 0x90(r1)
    stw r5, 0x94(r1)
    stw r4, 0x98(r1)
    stw r0, 0x9c(r1)
    beq lbl_fn_8047A4C8_000010D0
    stw r6, 0x22c(r1)
    stw r5, 0x230(r1)
    stw r4, 0x234(r1)
    stw r0, 0x238(r1)
lbl_fn_8047A4C8_000010D0:
    li r0, 0x1
    b lbl_fn_8047A4C8_000010DC
lbl_fn_8047A4C8_000010D8:
    li r0, 0x0
lbl_fn_8047A4C8_000010DC:
    cmpwi r0, 0x0
    beq lbl_fn_8047A4C8_000010F4
    lis r4, lbl_807C8AA8@ha
    addi r4, r4, lbl_807C8AA8@l
    stw r4, 0x228(r1)
    b lbl_fn_8047A4C8_000010FC
lbl_fn_8047A4C8_000010F4:
    li r0, 0x0
    stw r0, 0x228(r1)
lbl_fn_8047A4C8_000010FC:
    lwz r3, lbl_8087EE94
    addi r4, r1, 0x228
    bl fn_8047AEBC
    addic. r4, r1, 0x228
    beq lbl_fn_8047A4C8_00001144
    lwz r5, 0x228(r1)
    cmpwi r5, 0x0
    beq lbl_fn_8047A4C8_00001144
    lwz r12, 0x0(r5)
    cmpwi r12, 0x0
    beq lbl_fn_8047A4C8_0000113C
    addi r3, r4, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A4C8_0000113C:
    li r0, 0x0
    stw r0, 0x228(r1)
lbl_fn_8047A4C8_00001144:
    lbz r0, lbl_8087F539
    lis r4, lbl_80790074@ha
    lwzu r6, lbl_80790074@l(r4)
    extsb. r0, r0
    lwz r7, lbl_8087F420
    lwz r5, 0x4(r4)
    li r0, 0x0
    lwz r4, 0x8(r4)
    stw r6, 0x84(r1)
    stw r5, 0x88(r1)
    stw r4, 0x8c(r1)
    stw r6, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r4, 0x80(r1)
    stw r6, 0xf0(r1)
    stw r5, 0xf4(r1)
    stw r4, 0xf8(r1)
    stw r7, 0xfc(r1)
    stw r0, 0x214(r1)
    bne lbl_fn_8047A4C8_000011BC
    lis r7, lbl_807C8AA0@ha
    lis r5, fn_8047B5A0@ha
    lis r4, fn_8047B5CC@ha
    li r0, 0x1
    addi r4, r4, fn_8047B5CC@l
    addi r6, r7, lbl_807C8AA0@l
    addi r5, r5, fn_8047B5A0@l
    stw r5, 0x4(r6)
    stw r4, lbl_807C8AA0@l(r7)
    stb r0, lbl_8087F539
lbl_fn_8047A4C8_000011BC:
    lwz r6, 0xf0(r1)
    addi r3, r1, 0x68
    lwz r5, 0xf4(r1)
    lwz r4, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r6, 0x68(r1)
    stw r5, 0x6c(r1)
    stw r4, 0x70(r1)
    stw r0, 0x74(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8047A4C8_00001230
    addic. r0, r1, 0x218
    lwz r6, 0x68(r1)
    lwz r5, 0x6c(r1)
    lwz r4, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_fn_8047A4C8_00001228
    stw r6, 0x218(r1)
    stw r5, 0x21c(r1)
    stw r4, 0x220(r1)
    stw r0, 0x224(r1)
lbl_fn_8047A4C8_00001228:
    li r0, 0x1
    b lbl_fn_8047A4C8_00001234
lbl_fn_8047A4C8_00001230:
    li r0, 0x0
lbl_fn_8047A4C8_00001234:
    cmpwi r0, 0x0
    beq lbl_fn_8047A4C8_0000124C
    lis r4, lbl_807C8AA0@ha
    addi r4, r4, lbl_807C8AA0@l
    stw r4, 0x214(r1)
    b lbl_fn_8047A4C8_00001254
lbl_fn_8047A4C8_0000124C:
    li r0, 0x0
    stw r0, 0x214(r1)
lbl_fn_8047A4C8_00001254:
    lwz r3, lbl_8087EE94
    addi r4, r1, 0x214
    bl fn_8047AEBC
    addic. r4, r1, 0x214
    beq lbl_fn_8047A4C8_0000129C
    lwz r5, 0x214(r1)
    cmpwi r5, 0x0
    beq lbl_fn_8047A4C8_0000129C
    lwz r12, 0x0(r5)
    cmpwi r12, 0x0
    beq lbl_fn_8047A4C8_00001294
    addi r3, r4, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A4C8_00001294:
    li r0, 0x0
    stw r0, 0x214(r1)
lbl_fn_8047A4C8_0000129C:
    lbz r0, lbl_8087F539
    lis r4, lbl_80790080@ha
    lwzu r6, lbl_80790080@l(r4)
    extsb. r0, r0
    lwz r7, lbl_8087F420
    lwz r5, 0x4(r4)
    li r0, 0x0
    lwz r4, 0x8(r4)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r6, 0xe0(r1)
    stw r5, 0xe4(r1)
    stw r4, 0xe8(r1)
    stw r7, 0xec(r1)
    stw r0, 0x200(r1)
    bne lbl_fn_8047A4C8_00001314
    lis r7, lbl_807C8AA0@ha
    lis r5, fn_8047B5A0@ha
    lis r4, fn_8047B5CC@ha
    li r0, 0x1
    addi r4, r4, fn_8047B5CC@l
    addi r6, r7, lbl_807C8AA0@l
    addi r5, r5, fn_8047B5A0@l
    stw r5, 0x4(r6)
    stw r4, lbl_807C8AA0@l(r7)
    stb r0, lbl_8087F539
lbl_fn_8047A4C8_00001314:
    lwz r6, 0xe0(r1)
    addi r3, r1, 0x30
    lwz r5, 0xe4(r1)
    lwz r4, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r0, 0x3c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8047A4C8_00001388
    addic. r0, r1, 0x204
    lwz r6, 0x30(r1)
    lwz r5, 0x34(r1)
    lwz r4, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r6, 0x20(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_fn_8047A4C8_00001380
    stw r6, 0x204(r1)
    stw r5, 0x208(r1)
    stw r4, 0x20c(r1)
    stw r0, 0x210(r1)
lbl_fn_8047A4C8_00001380:
    li r0, 0x1
    b lbl_fn_8047A4C8_0000138C
lbl_fn_8047A4C8_00001388:
    li r0, 0x0
lbl_fn_8047A4C8_0000138C:
    cmpwi r0, 0x0
    beq lbl_fn_8047A4C8_000013A4
    lis r4, lbl_807C8AA0@ha
    addi r4, r4, lbl_807C8AA0@l
    stw r4, 0x200(r1)
    b lbl_fn_8047A4C8_000013AC
lbl_fn_8047A4C8_000013A4:
    li r0, 0x0
    stw r0, 0x200(r1)
lbl_fn_8047A4C8_000013AC:
    lwz r3, lbl_8087EE94
    addi r4, r1, 0x200
    bl fn_8047AEBC
    addic. r4, r1, 0x200
    beq lbl_fn_8047A4C8_000013F4
    lwz r5, 0x200(r1)
    cmpwi r5, 0x0
    beq lbl_fn_8047A4C8_000013F4
    lwz r12, 0x0(r5)
    cmpwi r12, 0x0
    beq lbl_fn_8047A4C8_000013EC
    addi r3, r4, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047A4C8_000013EC:
    li r0, 0x0
    stw r0, 0x200(r1)
lbl_fn_8047A4C8_000013F4:
    lis r29, lbl_8075626C@ha
    addi r29, r29, lbl_8075626C@l
    addi r3, r29, 0x4
    crclr 6
    bl OSReport
    bl fn_80185AD4
    bl fn_8057E8C8
    lwz r3, lbl_8087F0A8
    addi r4, r29, 0x9
    bl fn_80187C44
    lwz r3, lbl_8087F0A8
    bl fn_80186520
    addi r3, r29, 0x15
    crclr 6
    bl OSReport
    lwz r3, lbl_8087F9C0
    bl fn_8057EAF4
    lwz r3, lbl_8087F530
    bl fn_805728C0
    addi r5, r29, 0x3
    li r3, 0x98
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8047A4C8_00001464
    bl fn_805A6B58
lbl_fn_8047A4C8_00001464:
    stw r3, lbl_8087F534
    bl fn_800696C8
    lwz r3, lbl_8087F530
    bl fn_8046D7D8
    lis r30, lbl_8075626C@ha
    addi r30, r30, lbl_8075626C@l
    addi r3, r30, 0x1a
    crclr 6
    bl OSReport
    lwz r5, lbl_8087F0A8
    addi r3, r30, 0x1d
    lwz r4, lbl_8087F518
    lwz r0, 0x5b8(r5)
    stw r0, 0x3ed8(r4)
    crclr 6
    bl OSReport
    lwz r3, lbl_8087F518
    bl fn_8046F014
    addi r3, r30, 0x20
    crclr 6
    bl OSReport
    lwz r3, lbl_8087F518
    bl fn_8046F2C4
    lwz r4, lbl_8087F420
    li r29, 0x0
    addi r3, r30, 0x23
    stw r29, 0x1c(r4)
    crclr 6
    bl OSReport
    stw r29, 0x18(r1)
    addi r3, r1, 0x18
    addi r4, r30, 0x26
    li r5, 0x0
    li r6, 0x0
    bl fn_8047043C
    addi r3, r30, 0x37
    crclr 6
    bl OSReport
    bl fn_800BC798
    addi r3, r30, 0x3a
    crclr 6
    bl OSReport
    lwz r3, lbl_8087F530
    bl fn_800A8FF0
    addi r3, r30, 0x3d
    crclr 6
    bl OSReport
    addi r30, r30, 0x3
    stw r29, 0xd4(r1)
    addi r31, r1, 0xd4
    stw r29, 0xd8(r1)
    mr r3, r30
    stw r29, 0xdc(r1)
    bl strlen
    mr r29, r3
    mr r3, r31
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r31
    stb r0, 0x10(r1)
    mr r6, r30
    add r7, r30, r29
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087EFB4
    mr r5, r31
    lis r4, 0x4
    bl fn_800BD9C0
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8047A4C8_00001594
    lwz r3, 0xdc(r1)
    bl dtor_80084684
lbl_fn_8047A4C8_00001594:
    bl fn_8005DD60
    lis r4, lbl_8075626C@ha
    li r0, 0x0
    addi r4, r4, lbl_8075626C@l
    stw r0, 0xc8(r1)
    addi r29, r4, 0x40
    addi r30, r1, 0xc8
    stw r0, 0xcc(r1)
    mr r3, r29
    stw r0, 0xd0(r1)
    bl strlen
    mr r31, r3
    mr r3, r30
    mr r4, r31
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r31
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r3, lbl_8087EEB0
    mr r5, r30
    lis r4, 0x4
    bl fn_8005DED8
    lwz r0, 0xc8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8047A4C8_00001618
    lwz r3, 0xd0(r1)
    bl dtor_80084684
lbl_fn_8047A4C8_00001618:
    li r3, 0x480
    li r4, 0x200
    li r5, 0x100
    li r6, -0x1
    bl fn_80239794
    bl fn_8004C9B4
    bl fn_800A5508
    lwz r4, lbl_8087F018
    cmpwi r4, 0x0
    beq lbl_fn_8047A4C8_00001658
    li r0, 0x0
    stw r0, 0x40d4(r4)
    lwz r4, lbl_8087F018
    stw r0, 0x40d8(r4)
    lwz r4, lbl_8087F018
    stw r0, 0x40dc(r4)
lbl_fn_8047A4C8_00001658:
    bl fn_800463A8
    bl fn_800CCBA4
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    lfs f1, lbl_80886F70
    bl fn_800D0684
    lfs f1, lbl_80886F74
    li r29, 0x1
    lfs f0, lbl_80886F78
    li r30, 0x0
    stw r29, 0x1e8(r1)
    addi r4, r1, 0x1e8
    lwz r3, lbl_8087EFE8
    stw r30, 0x1ec(r1)
    stfs f1, 0x1f0(r1)
    stfs f1, 0x1f4(r1)
    stfs f0, 0x1f8(r1)
    stfs f1, 0x1fc(r1)
    bl fn_800CFDF0
    lfs f1, lbl_80886F74
    li r31, 0x2
    lfs f0, lbl_80886F78
    addi r4, r1, 0x1d0
    stw r31, 0x1d0(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x1d4(r1)
    stfs f1, 0x1d8(r1)
    stfs f1, 0x1dc(r1)
    stfs f0, 0x1e0(r1)
    stfs f1, 0x1e4(r1)
    bl fn_800CFDF0
    lfs f1, lbl_80886F74
    li r0, 0x3
    lfs f0, lbl_80886F78
    addi r4, r1, 0x1b8
    stw r0, 0x1b8(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x1bc(r1)
    stfs f1, 0x1c0(r1)
    stfs f1, 0x1c4(r1)
    stfs f0, 0x1c8(r1)
    stfs f1, 0x1cc(r1)
    bl fn_800CFDF0
    lfs f1, lbl_80886F74
    li r0, 0x4
    lfs f0, lbl_80886F78
    addi r4, r1, 0x1a0
    stw r0, 0x1a0(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x1a4(r1)
    stfs f1, 0x1a8(r1)
    stfs f1, 0x1ac(r1)
    stfs f0, 0x1b0(r1)
    stfs f1, 0x1b4(r1)
    bl fn_800CFDF0
    lfs f1, lbl_80886F74
    li r0, 0x5
    lfs f0, lbl_80886F78
    addi r4, r1, 0x188
    stw r0, 0x188(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x18c(r1)
    stfs f1, 0x190(r1)
    stfs f1, 0x194(r1)
    stfs f0, 0x198(r1)
    stfs f1, 0x19c(r1)
    bl fn_800CFDF0
    lfs f1, lbl_80886F74
    li r0, 0x6
    lfs f0, lbl_80886F78
    addi r4, r1, 0x170
    stw r0, 0x170(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x174(r1)
    stfs f1, 0x178(r1)
    stfs f1, 0x17c(r1)
    stfs f0, 0x180(r1)
    stfs f1, 0x184(r1)
    bl fn_800CFDF0
    lfs f1, lbl_80886F74
    li r0, 0x7
    lfs f0, lbl_80886F78
    addi r4, r1, 0x158
    stw r0, 0x158(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x15c(r1)
    stfs f1, 0x160(r1)
    stfs f1, 0x164(r1)
    stfs f0, 0x168(r1)
    stfs f1, 0x16c(r1)
    bl fn_800CFDF0
    lfs f1, lbl_80886F74
    li r0, 0x8
    lfs f0, lbl_80886F78
    addi r4, r1, 0x140
    stw r0, 0x140(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x144(r1)
    stfs f1, 0x148(r1)
    stfs f1, 0x14c(r1)
    stfs f0, 0x150(r1)
    stfs f1, 0x154(r1)
    bl fn_800CFDF0
    lfs f1, lbl_80886F74
    addi r4, r1, 0x128
    lfs f0, lbl_80886F78
    stw r29, 0x128(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x12c(r1)
    stfs f1, 0x130(r1)
    stfs f1, 0x134(r1)
    stfs f0, 0x138(r1)
    stfs f1, 0x13c(r1)
    bl fn_800CFFB8
    lfs f1, lbl_80886F74
    addi r4, r1, 0x110
    lfs f0, lbl_80886F78
    stw r31, 0x110(r1)
    lwz r3, lbl_8087EFE8
    stw r30, 0x114(r1)
    stfs f1, 0x118(r1)
    stfs f1, 0x11c(r1)
    stfs f0, 0x120(r1)
    stfs f1, 0x124(r1)
    bl fn_800CFFB8
    lwz r3, lbl_8087F530
    bl fn_801F0D80
    lwz r3, lbl_8087F530
    bl fn_800A2C48
    lwz r3, lbl_8087F530
    bl fn_804405F8
    bl fn_80207F80
    addi r3, r1, 0x18
    bl fn_80470528
    lwz r4, lbl_8087F420
    addi r3, r1, 0x18
    stw r30, 0x18(r4)
    stw r30, 0x1c(r4)
    bl fn_80470528
    lwz r0, 0x254(r1)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    lwz r29, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_8047AEBC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r21, 0x84(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_000018D0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8047AEBC_00001B2C
lbl_fn_8047AEBC_000018D0:
    lwz r0, 0x4(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_8047AEBC_00001D90
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087E084
    la r6, lbl_8087E080
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8047B594@ha
    lis r5, fn_800C622C@ha
    addi r4, r4, fn_8047B594@l
    li r6, 0x14
    addi r5, r5, fn_800C622C@l
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x8(r30)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001B1C
    lwz r0, 0x0(r30)
    li r29, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8047AEBC_00001934
    mr r29, r0
lbl_fn_8047AEBC_00001934:
    cmpwi r29, 0x0
    li r24, 0x0
    beq lbl_fn_8047AEBC_00001B0C
    mr r22, r26
    addi r25, r1, 0x8
    addi r27, r1, 0x1c
    li r21, 0x0
    li r28, 0x0
    b lbl_fn_8047AEBC_00001B04
lbl_fn_8047AEBC_00001958:
    lwz r0, 0x8(r30)
    stw r28, 0x8(r1)
    add r6, r0, r21
    lwzx r0, r21, r0
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001990
    stw r0, 0x8(r1)
    addi r3, r6, 0x4
    addi r4, r25, 0x4
    li r5, 0x0
    lwz r6, 0x0(r6)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001990:
    cmplw r22, r25
    beq lbl_fn_8047AEBC_00001AC0
    lwz r0, 0x8(r1)
    stw r28, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_000019C8
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_000019C8:
    cmplw r22, r25
    beq lbl_fn_8047AEBC_00001A2C
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001A00
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_000019FC
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_000019FC:
    stw r28, 0x8(r1)
lbl_fn_8047AEBC_00001A00:
    lwz r0, 0x0(r22)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001A2C
    stw r0, 0x8(r1)
    addi r3, r22, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r6, 0x0(r22)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001A2C:
    cmplw r27, r22
    beq lbl_fn_8047AEBC_00001A90
    lwz r3, 0x0(r22)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001A64
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001A60
    addi r3, r22, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001A60:
    stw r28, 0x0(r22)
lbl_fn_8047AEBC_00001A64:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001A90
    stw r0, 0x0(r22)
    addi r3, r1, 0x20
    addi r4, r22, 0x4
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001A90:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001AC0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001ABC
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001ABC:
    stw r28, 0x1c(r1)
lbl_fn_8047AEBC_00001AC0:
    cmpwi r25, 0x0
    beq lbl_fn_8047AEBC_00001AF8
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001AF8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001AF4
    addi r3, r25, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001AF4:
    stw r28, 0x8(r1)
lbl_fn_8047AEBC_00001AF8:
    addi r21, r21, 0x14
    addi r22, r22, 0x14
    addi r24, r24, 0x1
lbl_fn_8047AEBC_00001B04:
    cmplw r24, r29
    blt lbl_fn_8047AEBC_00001958
lbl_fn_8047AEBC_00001B0C:
    lis r4, fn_800C622C@ha
    lwz r3, 0x8(r30)
    addi r4, r4, fn_800C622C@l
    bl fn_80695A50
lbl_fn_8047AEBC_00001B1C:
    li r0, 0x8
    stw r26, 0x8(r30)
    stw r0, 0x4(r30)
    b lbl_fn_8047AEBC_00001D90
lbl_fn_8047AEBC_00001B2C:
    lwz r3, 0x0(r3)
    cmplw r3, r0
    blt lbl_fn_8047AEBC_00001D90
    slwi r24, r3, 1
    cmplw r0, r24
    bgt lbl_fn_8047AEBC_00001D90
    mulli r3, r24, 0x14
    li r4, 0x0
    la r5, lbl_8087E084
    la r6, lbl_8087E080
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8047B594@ha
    lis r5, fn_800C622C@ha
    mr r7, r24
    li r6, 0x14
    addi r4, r4, fn_8047B594@l
    addi r5, r5, fn_800C622C@l
    bl fn_80695720
    lwz r0, 0x8(r30)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001D88
    lwz r0, 0x0(r30)
    mr r27, r24
    cmplw r24, r0
    ble lbl_fn_8047AEBC_00001BA0
    mr r27, r0
lbl_fn_8047AEBC_00001BA0:
    cmpwi r27, 0x0
    li r26, 0x0
    beq lbl_fn_8047AEBC_00001D78
    mr r21, r23
    addi r25, r1, 0x30
    addi r29, r1, 0x44
    li r22, 0x0
    li r28, 0x0
    b lbl_fn_8047AEBC_00001D70
lbl_fn_8047AEBC_00001BC4:
    lwz r0, 0x8(r30)
    stw r28, 0x30(r1)
    add r6, r0, r22
    lwzx r0, r22, r0
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001BFC
    stw r0, 0x30(r1)
    addi r3, r6, 0x4
    addi r4, r25, 0x4
    li r5, 0x0
    lwz r6, 0x0(r6)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001BFC:
    cmplw r21, r25
    beq lbl_fn_8047AEBC_00001D2C
    lwz r0, 0x30(r1)
    stw r28, 0x44(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001C34
    lwz r6, 0x30(r1)
    addi r3, r1, 0x34
    stw r6, 0x44(r1)
    addi r4, r1, 0x48
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001C34:
    cmplw r21, r25
    beq lbl_fn_8047AEBC_00001C98
    lwz r3, 0x30(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001C6C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001C68
    addi r3, r1, 0x34
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001C68:
    stw r28, 0x30(r1)
lbl_fn_8047AEBC_00001C6C:
    lwz r0, 0x0(r21)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001C98
    stw r0, 0x30(r1)
    addi r3, r21, 0x4
    addi r4, r1, 0x34
    li r5, 0x0
    lwz r6, 0x0(r21)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001C98:
    cmplw r29, r21
    beq lbl_fn_8047AEBC_00001CFC
    lwz r3, 0x0(r21)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001CD0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001CCC
    addi r3, r21, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001CCC:
    stw r28, 0x0(r21)
lbl_fn_8047AEBC_00001CD0:
    lwz r0, 0x44(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001CFC
    stw r0, 0x0(r21)
    addi r3, r1, 0x48
    addi r4, r21, 0x4
    li r5, 0x0
    lwz r6, 0x44(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001CFC:
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001D2C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001D28
    addi r3, r1, 0x48
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001D28:
    stw r28, 0x44(r1)
lbl_fn_8047AEBC_00001D2C:
    cmpwi r25, 0x0
    beq lbl_fn_8047AEBC_00001D64
    lwz r3, 0x30(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001D64
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001D60
    addi r3, r25, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001D60:
    stw r28, 0x30(r1)
lbl_fn_8047AEBC_00001D64:
    addi r22, r22, 0x14
    addi r21, r21, 0x14
    addi r26, r26, 0x1
lbl_fn_8047AEBC_00001D70:
    cmplw r26, r27
    blt lbl_fn_8047AEBC_00001BC4
lbl_fn_8047AEBC_00001D78:
    lis r4, fn_800C622C@ha
    lwz r3, 0x8(r30)
    addi r4, r4, fn_800C622C@l
    bl fn_80695A50
lbl_fn_8047AEBC_00001D88:
    stw r23, 0x8(r30)
    stw r24, 0x4(r30)
lbl_fn_8047AEBC_00001D90:
    lwz r3, 0x0(r30)
    li r0, 0x0
    lwz r4, 0x8(r30)
    mulli r3, r3, 0x14
    stw r0, 0x6c(r1)
    lwz r6, 0x0(r31)
    add r27, r4, r3
    cmpwi r6, 0x0
    beq lbl_fn_8047AEBC_00001DD0
    stw r6, 0x6c(r1)
    addi r3, r31, 0x4
    addi r4, r1, 0x70
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001DD0:
    addi r0, r1, 0x6c
    cmplw r27, r0
    beq lbl_fn_8047AEBC_00001F1C
    lwz r3, 0x6c(r1)
    li r0, 0x0
    stw r0, 0x58(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001E10
    lwz r6, 0x6c(r1)
    addi r3, r1, 0x70
    stw r6, 0x58(r1)
    addi r4, r1, 0x5c
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001E10:
    addi r0, r1, 0x6c
    cmplw r27, r0
    beq lbl_fn_8047AEBC_00001E7C
    lwz r3, 0x6c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001E50
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001E48
    addi r3, r1, 0x70
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001E48:
    li r0, 0x0
    stw r0, 0x6c(r1)
lbl_fn_8047AEBC_00001E50:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001E7C
    stw r0, 0x6c(r1)
    addi r3, r27, 0x4
    addi r4, r1, 0x70
    li r5, 0x0
    lwz r6, 0x0(r27)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001E7C:
    addi r0, r1, 0x58
    cmplw r0, r27
    beq lbl_fn_8047AEBC_00001EE8
    lwz r3, 0x0(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001EBC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001EB4
    addi r3, r27, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001EB4:
    li r0, 0x0
    stw r0, 0x0(r27)
lbl_fn_8047AEBC_00001EBC:
    lwz r0, 0x58(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8047AEBC_00001EE8
    stw r0, 0x0(r27)
    addi r3, r1, 0x5c
    addi r4, r27, 0x4
    li r5, 0x0
    lwz r6, 0x58(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001EE8:
    lwz r3, 0x58(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8047AEBC_00001F1C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001F14
    addi r3, r1, 0x5c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001F14:
    li r0, 0x0
    stw r0, 0x58(r1)
lbl_fn_8047AEBC_00001F1C:
    addic. r3, r1, 0x6c
    beq lbl_fn_8047AEBC_00001F58
    lwz r4, 0x6c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8047AEBC_00001F58
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8047AEBC_00001F50
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8047AEBC_00001F50:
    li r0, 0x0
    stw r0, 0x6c(r1)
lbl_fn_8047AEBC_00001F58:
    lwz r3, 0x0(r30)
    addi r0, r3, 0x1
    stw r0, 0x0(r30)
    lmw r21, 0x84(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
