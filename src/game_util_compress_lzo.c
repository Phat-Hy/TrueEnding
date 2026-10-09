#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_8010C00C(void);
extern void fn_80116FC0(void);
extern void fn_8012B988(void);
extern void fn_8012D8B8(void);
extern void fn_8013407C(void);
extern void fn_80148B38(void);
extern void fn_8014FAD0(void);
extern void fn_80150178(void);
extern void fn_801F4728(void);
extern void fn_801F4E8C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80206B14(void);
extern void fn_80206B9C(void);
extern void fn_80206BE4(void);
extern void fn_80206C50(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF80(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_802114E0(void);
extern void fn_80211940(void);
extern void fn_802124B4(void);
extern void fn_80217D9C(void);
extern void fn_80370174(void);
extern void fn_804438E0(void);
extern void fn_804439FC(void);
extern void fn_8044441C(void);
extern void fn_804444E8(void);
extern void fn_8044453C(void);
extern void fn_80444564(void);
extern void fn_8044D500(void);
extern void fn_8044D560(void);
extern void fn_8044D6AC(void);
extern void fn_8046ECDC(void);
extern void fn_8046EED8(void);
extern void fn_804A55FC(void);
extern void fn_80564060(void);
extern void fn_805659B8(void);
extern void fn_80566014(void);
extern void fn_805807A8(void);
extern void fn_8058100C(void);
extern void fn_805811E0(void);
extern void fn_80581574(void);
extern void fn_80581820(void);
extern void fn_805846C4(void);
extern void fn_8058AAC0(void);
extern void fn_8058ECD8(void);
extern void fn_8058ECF0(void);
extern void fn_8058ED10(void);
extern void fn_8058ED2C(void);
extern void fn_8058EEF0(void);
extern void fn_8058EF0C(void);
extern void fn_8058FAD4(void);
extern void fn_8058FE90(void);
extern void fn_8058FEB8(void);
extern void fn_8058FEC8(void);
extern void fn_8058FED4(void);
extern void fn_8058FEE8(void);
extern void fn_8058FEF4(void);
extern void fn_8058FF04(void);
extern void fn_8058FF0C(void);
extern void fn_8058FF1C(void);
extern void fn_8059185C(void);
extern void fn_805933EC(void);
extern void fn_805969D8(void);
extern void fn_8059709C(void);
extern void fn_8059726C(void);
extern void fn_80597558(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80761D5C[];
extern u8 lbl_80796ACC[];

/* Small data declarations */
extern u32 lbl_8087E6A8;
extern u32 lbl_8087E6AC;
extern u32 lbl_8087E6B0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F518;
extern u32 lbl_8087F580;
extern u32 lbl_80888150;
extern u32 lbl_80888154;
extern u32 lbl_80888158;
extern u32 lbl_8088815C;

/* Function declarations */
void fn_8058CF64(void);
void fn_8058D170(void);
void fn_8058D45C(void);
void fn_8058D6DC(void);
void fn_8058D7FC(void);
void fn_8058D998(void);
void fn_8058DB14(void);
void fn_8058E0CC(void);
void fn_8058E5FC(void);
void fn_8058E7A8(void);

asm void fn_8058CF64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    addis r4, r3, 0x2
    mr r30, r3
    lwz r0, 0x60b0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8058CF64_00000188
    lwz r3, lbl_8087F518
    li r4, 0x0
    bl fn_8046ECDC
    mr r31, r30
    addis r29, r30, 0x2
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_8058CF64_00000098
lbl_fn_8058CF64_00000048:
    addis r3, r31, 0x2
    lwz r0, 0x60b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8058CF64_00000070
    lwz r3, 0x60b8(r3)
    bl fn_80564060
    cmpwi r3, 0x0
    beq lbl_fn_8058CF64_00000090
    li r28, 0x1
    b lbl_fn_8058CF64_000000A4
lbl_fn_8058CF64_00000070:
    cmpwi r0, 0x1
    bne lbl_fn_8058CF64_00000090
    lwz r3, 0x60bc(r3)
    bl fn_8014FAD0
    cmpwi r3, 0x0
    beq lbl_fn_8058CF64_00000090
    li r28, 0x1
    b lbl_fn_8058CF64_000000A4
lbl_fn_8058CF64_00000090:
    addi r31, r31, 0xc
    addi r27, r27, 0x1
lbl_fn_8058CF64_00000098:
    lwz r0, 0x60b0(r29)
    cmplw r27, r0
    blt lbl_fn_8058CF64_00000048
lbl_fn_8058CF64_000000A4:
    cmpwi r28, 0x0
    bne lbl_fn_8058CF64_000001F4
    addis r29, r30, 0x2
    li r31, 0x0
    b lbl_fn_8058CF64_00000168
lbl_fn_8058CF64_000000B8:
    addis r3, r30, 0x2
    lwz r0, 0x60b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8058CF64_00000148
    lwz r3, 0x60b8(r3)
    bl fn_80566014
    addis r3, r30, 0x2
    lwz r5, 0x60b8(r3)
    lwz r3, 0x60bc(r3)
    lwz r4, 0x0(r5)
    bl fn_80150178
    addis r3, r30, 0x2
    lwz r3, 0x60b8(r3)
    bl fn_805659B8
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8058CF64_0000011C
    addis r3, r30, 0x2
    lwz r3, 0x60bc(r3)
    addi r3, r3, 0x7d4
    bl fn_8013407C
    addis r4, r30, 0x2
    lwz r3, lbl_8087F048
    lwz r4, 0x60bc(r4)
    bl fn_8010C00C
lbl_fn_8058CF64_0000011C:
    addis r3, r30, 0x2
    lwz r3, 0x60bc(r3)
    addi r3, r3, 0x7d4
    bl fn_8012B988
    addis r3, r30, 0x2
    lwz r3, 0x60bc(r3)
    lwz r0, 0x674(r3)
    cmpwi r0, 0x0
    bge lbl_fn_8058CF64_00000148
    addi r3, r3, 0x7d4
    bl fn_8012D8B8
lbl_fn_8058CF64_00000148:
    addis r3, r30, 0x2
    lwz r3, 0x60bc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8058CF64_00000160
    lfs f1, lbl_80888150
    bl fn_80148B38
lbl_fn_8058CF64_00000160:
    addi r30, r30, 0xc
    addi r31, r31, 0x1
lbl_fn_8058CF64_00000168:
    lwz r0, 0x60b0(r29)
    cmplw r31, r0
    blt lbl_fn_8058CF64_000000B8
    li r0, 0x0
    stw r0, 0x60b0(r29)
    lwz r3, lbl_8087F518
    bl fn_8046EED8
    b lbl_fn_8058CF64_000001F4
lbl_fn_8058CF64_00000188:
    lwz r0, 0x6080(r4)
    cmpwi r0, 0x0
    bge lbl_fn_8058CF64_000001F4
    lwz r12, 0x0(r3)
    li r4, 0x7
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addis r3, r30, 0x2
    lwz r0, 0x6088(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8058CF64_000001F4
    lwz r3, 0x6110(r3)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_8058CF64_000001F4
    lwz r6, 0x8(r3)
    mr r3, r30
    li r4, 0x1
    li r5, 0xf
    bl fn_80581820
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8058CF64_000001F4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8058D170(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    bl fn_8059726C
    addis r4, r31, 0x2
    lwz r3, 0x6088(r4)
    lwz r0, 0x60a8(r4)
    slwi r3, r3, 2
    add r3, r4, r3
    lwz r3, 0x608c(r3)
    cmpw r3, r0
    bge lbl_fn_8058D170_00000268
    mulli r0, r3, 0x58
    lwz r4, 0x60a4(r4)
    mr r3, r31
    add r4, r4, r0
    bl fn_80597558
lbl_fn_8058D170_00000268:
    addis r5, r31, 0x2
    lwz r0, 0x60a8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8058D170_000002F0
    lwz r0, 0x6088(r5)
    lis r4, lbl_80761D5C@ha
    addi r4, r4, lbl_80761D5C@l
    addi r3, r1, 0x30
    slwi r0, r0, 2
    add r6, r5, r0
    addi r4, r4, 0x25b
    lwz r5, 0x6098(r6)
    lwz r0, 0x608c(r6)
    subf r28, r5, r0
    addi r5, r28, 0x1
    crclr 6
    bl sprintf
    addis r4, r31, 0x2
    addi r3, r1, 0x30
    lwz r30, 0x5b78(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r30
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    addis r3, r31, 0x2
    slwi r0, r28, 2
    add r4, r3, r0
    lwz r3, lbl_8087F580
    lwz r4, 0x5b7c(r4)
    addi r6, r1, 0x1c
    li r5, 0x0
    li r7, 0x0
    bl fn_804A55FC
lbl_fn_8058D170_000002F0:
    addis r6, r31, 0x2
    lis r30, lbl_80761D5C@ha
    lwz r3, 0x5bec(r6)
    addi r30, r30, lbl_80761D5C@l
    lfs f3, lbl_80888150
    addi r4, r30, 0x269
    lwz r0, 0x38(r3)
    addi r5, r1, 0x8
    lfs f2, lbl_80888158
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lfs f0, lbl_80888154
    lfs f1, lbl_8088815C
    stfs f3, 0x18(r1)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x10(r1)
    lwz r3, 0x5bec(r6)
    bl fn_801F4728
    addis r3, r31, 0x2
    lwz r0, 0x6088(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8058D170_000003BC
    li r3, 0x0
    li r4, 0x192
    bl fn_80116FC0
    addis r4, r31, 0x2
    mr r29, r3
    lwz r4, 0x5bec(r4)
    addi r3, r30, 0x271
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    li r3, 0x0
    li r4, 0x196
    bl fn_80116FC0
    addis r4, r31, 0x2
    mr r29, r3
    lwz r4, 0x5bec(r4)
    addi r3, r30, 0x27e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_8058D170_00000424
lbl_fn_8058D170_000003BC:
    li r3, 0x0
    li r4, 0x191
    bl fn_80116FC0
    addis r4, r31, 0x2
    mr r29, r3
    lwz r4, 0x5bec(r4)
    addi r3, r30, 0x271
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    li r3, 0x0
    li r4, 0x196
    bl fn_80116FC0
    addis r4, r31, 0x2
    mr r29, r3
    lwz r4, 0x5bec(r4)
    addi r3, r30, 0x27e
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
lbl_fn_8058D170_00000424:
    addis r3, r31, 0x2
    lwz r0, 0x6084(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8058D170_00000484
    lwz r4, 0x5bec(r3)
    lis r30, lbl_80761D5C@ha
    addi r30, r30, lbl_80761D5C@l
    addi r3, r30, 0x28a
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888154
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    addis r4, r31, 0x2
    addi r3, r30, 0x291
    lwz r4, 0x5bec(r4)
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888150
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    b lbl_fn_8058D170_000004D8
lbl_fn_8058D170_00000484:
    cmpwi r0, 0x1
    bne lbl_fn_8058D170_000004D8
    lwz r4, 0x5bec(r3)
    lis r30, lbl_80761D5C@ha
    addi r30, r30, lbl_80761D5C@l
    addi r3, r30, 0x28a
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888150
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    addis r4, r31, 0x2
    addi r3, r30, 0x291
    lwz r4, 0x5bec(r4)
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888154
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
lbl_fn_8058D170_000004D8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8058D45C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    addis r5, r3, 0x2
    li r4, 0x0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    stw r29, 0x64(r1)
    lwz r0, 0x6080(r5)
    cmpwi r0, 0x0
    blt lbl_fn_8058D45C_0000074C
    slwi r0, r0, 2
    add r5, r5, r0
    lwz r5, 0x5be0(r5)
    cmpwi cr6, r5, 0x0
    beq cr6, lbl_fn_8058D45C_00000560
    lfs f1, 0xa0(r5)
    lfs f0, 0x100(r5)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8058D45C_0000073C
lbl_fn_8058D45C_00000560:
    addis r3, r3, 0x2
    lfs f0, lbl_80888150
    lwz r3, 0x5be8(r3)
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8058D45C_000005CC
    mr r3, r30
    bl fn_8058DB14
    addis r6, r30, 0x2
    li r0, 0xa
    lwz r4, 0x60a8(r6)
    mr r3, r30
    stw r4, 0x5b08(r6)
    lwz r4, 0x6108(r6)
    stw r0, 0x5b10(r6)
    lwz r5, 0x610c(r6)
    lwz r6, 0x6088(r6)
    bl fn_8059709C
    addis r4, r30, 0x2
    lwz r0, 0x6088(r4)
    slwi r0, r0, 2
    add r3, r4, r0
    lwz r0, 0x608c(r3)
    stw r0, 0x5b04(r4)
    lwz r0, 0x6098(r3)
    stw r0, 0x5b0c(r4)
lbl_fn_8058D45C_000005CC:
    addis r5, r30, 0x2
    lis r31, lbl_80761D5C@ha
    lwz r0, 0x6088(r5)
    addi r31, r31, lbl_80761D5C@l
    addi r3, r1, 0x20
    slwi r0, r0, 2
    addi r4, r31, 0x25b
    add r6, r5, r0
    lwz r5, 0x6098(r6)
    lwz r0, 0x608c(r6)
    subf r5, r5, r0
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    addis r4, r30, 0x2
    addi r3, r1, 0x20
    lwz r29, 0x5b78(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_801F4E8C
    addis r5, r30, 0x2
    addi r3, r31, 0x299
    lwz r4, 0x5be8(r5)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x5be8(r5)
    lfs f31, 0x8(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    addis r3, r30, 0x2
    lfs f31, 0xc(r1)
    lwz r4, 0x5be8(r3)
    addi r3, r31, 0x299
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    addis r3, r30, 0x2
    lfs f31, 0x18(r1)
    lwz r4, 0x5be8(r3)
    addi r3, r31, 0x299
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x4
    bl fn_801FED24
    addis r3, r30, 0x2
    lfs f31, 0x10(r1)
    lwz r4, 0x5be8(r3)
    addi r3, r31, 0x2a4
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    addis r3, r30, 0x2
    lfs f31, 0x14(r1)
    lwz r4, 0x5be8(r3)
    addi r3, r31, 0x2aa
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    addis r3, r30, 0x2
    lwz r4, 0x5be8(r3)
    lfs f1, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8058D45C_00000734
    li r0, -0x1
    stw r0, 0x6080(r3)
lbl_fn_8058D45C_00000734:
    li r4, 0x1
    b lbl_fn_8058D45C_0000074C
lbl_fn_8058D45C_0000073C:
    beq cr6, lbl_fn_8058D45C_0000074C
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
lbl_fn_8058D45C_0000074C:
    mr r3, r30
    bl fn_8059726C
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8058D6DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xe8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8058D6DC_000007B4
    addis r3, r3, 0x2
    lwz r3, 0x5b6c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8058D6DC_00000880
lbl_fn_8058D6DC_000007B4:
    cmpwi r0, 0x5
    bne lbl_fn_8058D6DC_000007C4
    bl fn_805807A8
    b lbl_fn_8058D6DC_00000880
lbl_fn_8058D6DC_000007C4:
    cmpwi r0, 0x6
    bne lbl_fn_8058D6DC_00000844
    bl fn_805807A8
    lwz r0, 0x32fc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8058D6DC_00000818
    lwz r3, 0xdc(r30)
    cmpw r3, r0
    bge lbl_fn_8058D6DC_00000818
    mulli r0, r3, 0x5c
    mr r3, r30
    add r31, r30, r0
    lwz r4, 0x3300(r31)
    bl fn_8058100C
    lwz r4, 0x3300(r31)
    mr r3, r30
    bl fn_805811E0
    lwz r4, 0x3300(r31)
    mr r3, r30
    lwz r5, 0x3348(r31)
    bl fn_80581574
lbl_fn_8058D6DC_00000818:
    lwz r7, 0xe0(r30)
    mr r3, r30
    lwz r6, 0xdc(r30)
    li r8, 0x1
    lwz r4, 0xa8(r30)
    subf r0, r7, r6
    slwi r0, r0, 2
    add r5, r30, r0
    lwz r5, 0xac(r5)
    bl fn_805846C4
    b lbl_fn_8058D6DC_00000880
lbl_fn_8058D6DC_00000844:
    li r4, 0x1
    bl fn_8059726C
    addis r4, r30, 0x2
    lwz r3, 0x6088(r4)
    lwz r0, 0x60a8(r4)
    slwi r3, r3, 2
    add r3, r4, r3
    lwz r3, 0x608c(r3)
    cmpw r3, r0
    bge lbl_fn_8058D6DC_00000880
    mulli r0, r3, 0x58
    lwz r4, 0x60a4(r4)
    mr r3, r30
    add r4, r4, r0
    bl fn_80597558
lbl_fn_8058D6DC_00000880:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8058D7FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r3, 0x0(r4)
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x134(r3)
    bl fn_80211480
    lwz r0, 0x4c(r28)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_8058D7FC_000008E4
    li r3, 0x8
    b lbl_fn_8058D7FC_00000A14
lbl_fn_8058D7FC_000008E4:
    lwz r0, 0x48(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8058D7FC_000008F8
    li r3, 0x7
    b lbl_fn_8058D7FC_00000A14
lbl_fn_8058D7FC_000008F8:
    lwz r4, lbl_8087F4F0
    lwz r5, 0x4(r28)
    lwz r0, 0x6000(r4)
    cmpw r5, r0
    ble lbl_fn_8058D7FC_00000914
    li r3, 0x1
    b lbl_fn_8058D7FC_00000A14
lbl_fn_8058D7FC_00000914:
    cmpwi r3, 0x0
    bne lbl_fn_8058D7FC_00000994
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8058D7FC_00000994
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_8058D7FC_00000994
    lwz r3, lbl_8087F4F0
    li r4, 0x143
    bl fn_804444E8
    cmpwi r3, 0x1
    bge lbl_fn_8058D7FC_00000954
    li r3, 0xe
    b lbl_fn_8058D7FC_00000A14
lbl_fn_8058D7FC_00000954:
    mr r3, r29
    li r4, 0x1
    bl fn_802124B4
    cmpwi r3, 0x0
    bne lbl_fn_8058D7FC_00000970
    li r3, 0x2
    b lbl_fn_8058D7FC_00000A14
lbl_fn_8058D7FC_00000970:
    lwz r4, 0x4(r29)
    lwz r3, lbl_8087F4F0
    addis r4, r4, 0xf
    addi r4, r4, 0x4240
    bl fn_80444564
    cmpwi r3, 0xa
    blt lbl_fn_8058D7FC_00000A10
    li r3, 0x2
    b lbl_fn_8058D7FC_00000A14
lbl_fn_8058D7FC_00000994:
    mr r30, r29
    li r28, 0x0
lbl_fn_8058D7FC_0000099C:
    lwz r3, 0x11c(r30)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8058D7FC_000009E4
    lwz r0, 0x11c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8058D7FC_000009E4
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r4)
    bl fn_804444E8
    add r4, r29, r28
    lbz r0, 0x12c(r4)
    extsb r0, r0
    cmpw r3, r0
    bge lbl_fn_8058D7FC_000009E4
    li r3, 0xe
    b lbl_fn_8058D7FC_00000A14
lbl_fn_8058D7FC_000009E4:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_8058D7FC_0000099C
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r31)
    bl fn_80444564
    cmpwi r3, 0xa
    blt lbl_fn_8058D7FC_00000A10
    li r3, 0x2
    b lbl_fn_8058D7FC_00000A14
lbl_fn_8058D7FC_00000A10:
    li r3, 0x0
lbl_fn_8058D7FC_00000A14:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8058D998(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r4
    mr r26, r5
    li r29, 0x0
    lwz r3, 0x0(r4)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8058D998_00000B98
    lwz r29, 0x134(r3)
    mr r3, r29
    bl fn_80211480
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8058D998_00000AE8
    lwz r3, lbl_8087F4F0
    li r4, 0x143
    li r5, 0x1
    bl fn_8044441C
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r25)
    bl fn_8044D6AC
    cmpwi r26, 0x0
    beq lbl_fn_8058D998_00000B80
    bl fn_8058AAC0
    mr r3, r28
    li r4, 0x1
    bl fn_80211940
    cmpwi r3, 0x0
    mr r31, r3
    blt lbl_fn_8058D998_00000B80
    lwz r3, lbl_8087F4F0
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    mr r29, r31
    b lbl_fn_8058D998_00000B80
lbl_fn_8058D998_00000AE8:
    mr r30, r28
    li r27, 0x0
lbl_fn_8058D998_00000AF0:
    lwz r3, 0x11c(r30)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r6, r3
    beq lbl_fn_8058D998_00000B28
    lwz r0, 0x11c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8058D998_00000B28
    add r4, r28, r27
    lwz r3, lbl_8087F4F0
    lbz r5, 0x12c(r4)
    lwz r4, 0x4(r6)
    extsb r5, r5
    bl fn_8044441C
lbl_fn_8058D998_00000B28:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x3
    blt lbl_fn_8058D998_00000AF0
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r25)
    bl fn_8044D6AC
    cmpwi r26, 0x0
    beq lbl_fn_8058D998_00000B74
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    lwz r4, 0x4(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    b lbl_fn_8058D998_00000B80
lbl_fn_8058D998_00000B74:
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r31)
    bl fn_804438E0
lbl_fn_8058D998_00000B80:
    cmpwi r26, 0x0
    beq lbl_fn_8058D998_00000B98
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    lwz r4, 0x4(r28)
    bl fn_8044441C
lbl_fn_8058D998_00000B98:
    mr r3, r29
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8058DB14(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    addis r5, r3, 0x2
    li r4, 0x0
    stw r0, 0x84(r1)
    addic. r0, r1, 0x3c
    stmw r24, 0x60(r1)
    mr r27, r3
    lwz r0, 0x60a8(r5)
    lwz r31, lbl_8087F4F0
    subf r0, r0, r0
    stw r0, 0x60a8(r5)
    stw r4, 0x38(r1)
    beq lbl_fn_8058DB14_00000BF0
    lwz r0, lbl_8087E6A8
    stw r0, 0x3c(r1)
lbl_fn_8058DB14_00000BF0:
    lwz r4, 0x38(r1)
    lwz r3, lbl_8087F430
    addi r0, r4, 0x1
    stw r0, 0x38(r1)
    lwz r3, 0x10d0(r3)
    bl fn_80217D9C
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000CC8
    li r0, 0x2
    li r5, 0x1
    mtctr r0
lbl_fn_8058DB14_00000C1C:
    add r4, r3, r5
    lbz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8058DB14_00000C50
    lwz r0, 0x38(r1)
    addi r4, r1, 0x3c
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_8058DB14_00000C44
    stw r5, 0x0(r4)
lbl_fn_8058DB14_00000C44:
    lwz r4, 0x38(r1)
    addi r0, r4, 0x1
    stw r0, 0x38(r1)
lbl_fn_8058DB14_00000C50:
    addi r5, r5, 0x1
    add r4, r3, r5
    lbz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8058DB14_00000C88
    lwz r0, 0x38(r1)
    addi r4, r1, 0x3c
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_8058DB14_00000C7C
    stw r5, 0x0(r4)
lbl_fn_8058DB14_00000C7C:
    lwz r4, 0x38(r1)
    addi r0, r4, 0x1
    stw r0, 0x38(r1)
lbl_fn_8058DB14_00000C88:
    addi r5, r5, 0x1
    add r4, r3, r5
    lbz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8058DB14_00000CC0
    lwz r0, 0x38(r1)
    addi r4, r1, 0x3c
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_8058DB14_00000CB4
    stw r5, 0x0(r4)
lbl_fn_8058DB14_00000CB4:
    lwz r4, 0x38(r1)
    addi r0, r4, 0x1
    stw r0, 0x38(r1)
lbl_fn_8058DB14_00000CC0:
    addi r5, r5, 0x1
    bdnz lbl_fn_8058DB14_00000C1C
lbl_fn_8058DB14_00000CC8:
    addis r3, r27, 0x2
    lwz r3, 0x6088(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000CE0
    cmpwi r3, 0x2
    bne lbl_fn_8058DB14_00000E14
lbl_fn_8058DB14_00000CE0:
    subi r0, r3, 0x2
    addi r24, r1, 0x38
    cntlzw r0, r0
    li r28, 0x0
    srwi r25, r0, 5
    b lbl_fn_8058DB14_00000D88
lbl_fn_8058DB14_00000CF8:
    lwz r3, lbl_8087F4F0
    li r29, 0x0
    lwz r0, 0x4(r24)
    addis r3, r3, 0x1
    slwi r0, r0, 6
    add r3, r3, r0
    subi r26, r3, 0x7d70
lbl_fn_8058DB14_00000D14:
    lwz r4, 0x20(r26)
    li r3, 0x0
    bl fn_80206B14
    lwz r0, 0x4(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8058DB14_00000D40
    cmpwi r29, 0x1
    bne lbl_fn_8058DB14_00000D40
    lwz r4, 0x20(r26)
    li r3, 0x1
    bl fn_80206B14
lbl_fn_8058DB14_00000D40:
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000D70
    lwz r0, 0xf0(r3)
    cmpw r0, r25
    bne lbl_fn_8058DB14_00000D70
    bl fn_80206BE4
    lwz r5, 0x4(r24)
    mr r4, r3
    mr r3, r27
    mr r6, r29
    li r7, 0x1
    bl fn_805969D8
lbl_fn_8058DB14_00000D70:
    addi r29, r29, 0x1
    addi r26, r26, 0x8
    cmpwi r29, 0x2
    blt lbl_fn_8058DB14_00000D14
    addi r24, r24, 0x4
    addi r28, r28, 0x1
lbl_fn_8058DB14_00000D88:
    lwz r0, 0x38(r1)
    cmplw r28, r0
    blt lbl_fn_8058DB14_00000CF8
    li r24, 0x0
lbl_fn_8058DB14_00000D98:
    mr r3, r24
    bl fn_802114E0
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000E04
    lwz r26, 0x4(r3)
    mr r3, r26
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000E04
    mr r3, r31
    mr r4, r24
    bl fn_8044453C
    cmpwi r3, 0x0
    ble lbl_fn_8058DB14_00000E04
    mr r3, r26
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000E04
    lwz r0, 0xf0(r3)
    cmpw r0, r25
    bne lbl_fn_8058DB14_00000E04
    mr r3, r27
    mr r4, r26
    li r5, -0x1
    li r6, -0x1
    li r7, 0x1
    bl fn_805969D8
lbl_fn_8058DB14_00000E04:
    addi r24, r24, 0x1
    cmpwi r24, 0x600
    blt lbl_fn_8058DB14_00000D98
    b lbl_fn_8058DB14_00000FF4
lbl_fn_8058DB14_00000E14:
    cmpwi r3, 0x1
    bne lbl_fn_8058DB14_00000FF4
    addi r30, r1, 0x3c
    li r29, 0x0
    li r26, 0x0
    b lbl_fn_8058DB14_00000F08
lbl_fn_8058DB14_00000E2C:
    lwz r3, lbl_8087F4F0
    li r28, 0x0
    lwzx r0, r30, r26
    li r25, 0x0
    addis r3, r3, 0x1
    slwi r0, r0, 6
    add r3, r3, r0
    subi r24, r3, 0x7d70
lbl_fn_8058DB14_00000E4C:
    lwzx r4, r24, r25
    mr r3, r28
    bl fn_8020ED84
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000EF0
    addis r4, r27, 0x2
    li r5, 0x0
    lwz r0, 0x5b68(r4)
    beq lbl_fn_8058DB14_00000ECC
    cmplwi r0, 0x1
    ble lbl_fn_8058DB14_00000E8C
    cmpwi r0, 0x2
    beq lbl_fn_8058DB14_00000EA4
    cmpwi r0, 0x3
    beq lbl_fn_8058DB14_00000EBC
    b lbl_fn_8058DB14_00000ECC
lbl_fn_8058DB14_00000E8C:
    lwz r4, 0xa8(r3)
    subi r0, r4, 0x8
    cmplwi r0, 0x2
    ble lbl_fn_8058DB14_00000ECC
    li r5, 0x1
    b lbl_fn_8058DB14_00000ECC
lbl_fn_8058DB14_00000EA4:
    lwz r4, 0xa8(r3)
    subi r0, r4, 0x9
    cmplwi r0, 0x1
    bgt lbl_fn_8058DB14_00000ECC
    li r5, 0x1
    b lbl_fn_8058DB14_00000ECC
lbl_fn_8058DB14_00000EBC:
    lwz r0, 0xa8(r3)
    cmpwi r0, 0x8
    bne lbl_fn_8058DB14_00000ECC
    li r5, 0x1
lbl_fn_8058DB14_00000ECC:
    cmpwi r5, 0x0
    beq lbl_fn_8058DB14_00000EF0
    bl fn_8020EF80
    lwzx r5, r30, r26
    mr r4, r3
    mr r3, r27
    mr r6, r28
    li r7, 0x1
    bl fn_805969D8
lbl_fn_8058DB14_00000EF0:
    addi r28, r28, 0x1
    addi r25, r25, 0x8
    cmpwi r28, 0x2
    blt lbl_fn_8058DB14_00000E4C
    addi r29, r29, 0x1
    addi r26, r26, 0x4
lbl_fn_8058DB14_00000F08:
    lwz r0, 0x38(r1)
    cmplw r29, r0
    blt lbl_fn_8058DB14_00000E2C
    li r24, 0x0
lbl_fn_8058DB14_00000F18:
    mr r3, r24
    bl fn_802114E0
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000FE8
    lwz r25, 0x4(r3)
    mr r3, r25
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_8058DB14_00000FE8
    mr r3, r25
    bl fn_8020EFEC
    addis r4, r27, 0x2
    cmpwi r3, 0x0
    lwz r0, 0x5b68(r4)
    li r4, 0x0
    beq lbl_fn_8058DB14_00000FB4
    cmplwi r0, 0x1
    ble lbl_fn_8058DB14_00000F74
    cmpwi r0, 0x2
    beq lbl_fn_8058DB14_00000F8C
    cmpwi r0, 0x3
    beq lbl_fn_8058DB14_00000FA4
    b lbl_fn_8058DB14_00000FB4
lbl_fn_8058DB14_00000F74:
    lwz r3, 0xa8(r3)
    subi r0, r3, 0x8
    cmplwi r0, 0x2
    ble lbl_fn_8058DB14_00000FB4
    li r4, 0x1
    b lbl_fn_8058DB14_00000FB4
lbl_fn_8058DB14_00000F8C:
    lwz r3, 0xa8(r3)
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    bgt lbl_fn_8058DB14_00000FB4
    li r4, 0x1
    b lbl_fn_8058DB14_00000FB4
lbl_fn_8058DB14_00000FA4:
    lwz r0, 0xa8(r3)
    cmpwi r0, 0x8
    bne lbl_fn_8058DB14_00000FB4
    li r4, 0x1
lbl_fn_8058DB14_00000FB4:
    cmpwi r4, 0x0
    beq lbl_fn_8058DB14_00000FE8
    mr r3, r31
    mr r4, r24
    bl fn_8044453C
    cmpwi r3, 0x0
    ble lbl_fn_8058DB14_00000FE8
    mr r3, r27
    mr r4, r25
    li r5, -0x1
    li r6, -0x1
    li r7, 0x1
    bl fn_805969D8
lbl_fn_8058DB14_00000FE8:
    addi r24, r24, 0x1
    cmpwi r24, 0x600
    blt lbl_fn_8058DB14_00000F18
lbl_fn_8058DB14_00000FF4:
    addis r6, r27, 0x2
    lwz r0, 0x6088(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8058DB14_0000100C
    cmpwi r0, 0x2
    bne lbl_fn_8058DB14_00001084
lbl_fn_8058DB14_0000100C:
    addis r6, r27, 0x2
    lwz r0, 0x6084(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8058DB14_00001050
    li r0, 0x0
    stb r0, 0x14(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x60a8(r6)
    addi r5, r1, 0x14
    lwz r6, 0x60a4(r6)
    mulli r0, r0, 0x58
    stw r6, 0x34(r1)
    add r0, r6, r0
    stw r0, 0x30(r1)
    bl fn_805933EC
    b lbl_fn_8058DB14_000010FC
lbl_fn_8058DB14_00001050:
    li r0, 0x0
    stb r0, 0x10(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x28
    lwz r0, 0x60a8(r6)
    addi r5, r1, 0x10
    lwz r6, 0x60a4(r6)
    mulli r0, r0, 0x58
    stw r6, 0x2c(r1)
    add r0, r6, r0
    stw r0, 0x28(r1)
    bl fn_8059185C
    b lbl_fn_8058DB14_000010FC
lbl_fn_8058DB14_00001084:
    cmpwi r0, 0x1
    bne lbl_fn_8058DB14_000010FC
    lwz r0, 0x6084(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8058DB14_000010CC
    li r0, 0x0
    stb r0, 0xc(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    lwz r0, 0x60a8(r6)
    addi r5, r1, 0xc
    lwz r6, 0x60a4(r6)
    mulli r0, r0, 0x58
    stw r6, 0x24(r1)
    add r0, r6, r0
    stw r0, 0x20(r1)
    bl fn_8058FF1C
    b lbl_fn_8058DB14_000010FC
lbl_fn_8058DB14_000010CC:
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    lwz r0, 0x60a8(r6)
    addi r5, r1, 0x8
    lwz r6, 0x60a4(r6)
    mulli r0, r0, 0x58
    stw r6, 0x1c(r1)
    add r0, r6, r0
    stw r0, 0x18(r1)
    bl fn_8058E0CC
lbl_fn_8058DB14_000010FC:
    addis r3, r27, 0x2
    lwz r0, 0x6088(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8058DB14_00001150
    mr r3, r31
    bl fn_8044D560
    mr r25, r3
    li r24, 0x0
    b lbl_fn_8058DB14_00001148
lbl_fn_8058DB14_00001120:
    mr r3, r31
    mr r4, r24
    bl fn_8044D500
    mr r4, r3
    mr r3, r27
    li r5, -0x1
    li r6, -0x1
    li r7, 0x0
    bl fn_805969D8
    addi r24, r24, 0x1
lbl_fn_8058DB14_00001148:
    cmpw r24, r25
    blt lbl_fn_8058DB14_00001120
lbl_fn_8058DB14_00001150:
    bl fn_8058AAC0
    lmw r24, 0x60(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8058E0CC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_8058E0CC_0000118C:
    mr r3, r28
    mr r4, r27
    bl fn_8058FE90
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_8058E0CC_00001684
    cmpwi r3, 0x14
    bgt lbl_fn_8058E0CC_000011D0
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_8058FAD4
    b lbl_fn_8058E0CC_00001684
lbl_fn_8058E0CC_000011D0:
    lwz r5, lbl_8087E6AC
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_8058FEB8
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_8058FEC8
    lwz r3, lbl_8087E6AC
    addi r6, r3, 0x1
    stw r6, lbl_8087E6AC
    cmpwi r6, 0x5
    blt lbl_fn_8058E0CC_0000122C
    li r6, -0x4
    stw r6, lbl_8087E6AC
lbl_fn_8058E0CC_0000122C:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_8058FEB8
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_8058FEC8
    lwz r3, lbl_8087E6AC
    addi r0, r3, 0x1
    stw r0, lbl_8087E6AC
    cmpwi r0, 0x5
    blt lbl_fn_8058E0CC_0000128C
    li r6, -0x4
    stw r6, lbl_8087E6AC
lbl_fn_8058E0CC_0000128C:
    mr r3, r28
    li r4, 0x1
    bl fn_8058FED4
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_8058FEC8
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_8058EF0C
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_8058FEE8
    b lbl_fn_8058E0CC_000012F8
lbl_fn_8058E0CC_000012F0:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058E0CC_000012F8:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    bne lbl_fn_8058E0CC_000012F0
lbl_fn_8058E0CC_00001324:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_0000136C
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_00001324
lbl_fn_8058E0CC_0000136C:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_00001448
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058E0CC_000013B0
lbl_fn_8058E0CC_000013A8:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058E0CC_000013B0:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    bne lbl_fn_8058E0CC_000013A8
lbl_fn_8058E0CC_000013DC:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_000013DC
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8058E0CC_00001448
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058E0CC_000013B0
lbl_fn_8058E0CC_00001448:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058ECD8
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_00001600
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    bne lbl_fn_8058E0CC_00001538
    b lbl_fn_8058E0CC_000014C8
lbl_fn_8058E0CC_000014C0:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058E0CC_000014C8:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_00001508
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_000014C0
lbl_fn_8058E0CC_00001508:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_00001538
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
lbl_fn_8058E0CC_00001538:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_000015F0
    b lbl_fn_8058E0CC_00001558
lbl_fn_8058E0CC_00001550:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058E0CC_00001558:
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E0CC_00001550
lbl_fn_8058E0CC_00001584:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    bne lbl_fn_8058E0CC_00001584
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8058E0CC_000015F0
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058E0CC_00001558
lbl_fn_8058E0CC_000015F0:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058E0CC_0000118C
lbl_fn_8058E0CC_00001600:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FE90
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FE90
    cmpw r3, r30
    bge lbl_fn_8058E0CC_00001654
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_8058E7A8
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058E0CC_0000118C
lbl_fn_8058E0CC_00001654:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_8058E7A8
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058E0CC_0000118C
lbl_fn_8058E0CC_00001684:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8058E5FC(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lwz r3, 0x0(r4)
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r4
    stw r30, 0x118(r1)
    mr r30, r5
    stw r29, 0x114(r1)
    bl fn_8020EFEC
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_8020EFEC
    cmpwi r29, 0x0
    beq lbl_fn_8058E5FC_000016E4
    cmpwi r3, 0x0
    bne lbl_fn_8058E5FC_000016E4
    li r3, 0x1
    b lbl_fn_8058E5FC_00001828
lbl_fn_8058E5FC_000016E4:
    cmpwi r29, 0x0
    bne lbl_fn_8058E5FC_000016FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E5FC_000016FC
    li r3, 0x0
    b lbl_fn_8058E5FC_00001828
lbl_fn_8058E5FC_000016FC:
    lwz r3, 0x0(r31)
    lwz r0, 0x0(r30)
    cmpw r3, r0
    bne lbl_fn_8058E5FC_00001754
    lwz r0, 0x50(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8058E5FC_0000173C
    lwz r4, 0x50(r30)
    cmpwi r4, 0x0
    blt lbl_fn_8058E5FC_0000173C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8058E5FC_00001828
lbl_fn_8058E5FC_0000173C:
    cmpwi r0, 0x0
    blt lbl_fn_8058E5FC_0000174C
    li r3, 0x1
    b lbl_fn_8058E5FC_00001828
lbl_fn_8058E5FC_0000174C:
    li r3, 0x0
    b lbl_fn_8058E5FC_00001828
lbl_fn_8058E5FC_00001754:
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80211480
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r29)
    mr r30, r3
    addi r3, r1, 0x88
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x88
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058E5FC_0000179C
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8058E5FC_0000179C:
    lis r4, lbl_80796ACC@ha
    lwz r5, 0x8(r30)
    addi r3, r1, 0x8
    addi r4, r4, lbl_80796ACC@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_8058E5FC_000017D0
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_8058E5FC_000017D0:
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_8058E5FC_00001818
    lwz r3, 0x8(r29)
    bl fn_80686A48
    mr r31, r3
    lwz r3, 0x8(r30)
    bl fn_80686A48
    cmpw r31, r3
    beq lbl_fn_8058E5FC_00001818
    xor r0, r3, r31
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_8058E5FC_00001828
lbl_fn_8058E5FC_00001818:
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r30)
    bl fn_80686AF0
    srwi r3, r3, 31
lbl_fn_8058E5FC_00001828:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8058E7A8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_8058E7A8_00001868:
    mr r3, r28
    mr r4, r27
    bl fn_8058FE90
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_8058E7A8_00001D60
    cmpwi r3, 0x14
    bgt lbl_fn_8058E7A8_000018AC
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_8058FAD4
    b lbl_fn_8058E7A8_00001D60
lbl_fn_8058E7A8_000018AC:
    lwz r5, lbl_8087E6B0
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_8058FEB8
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_8058FEC8
    lwz r3, lbl_8087E6B0
    addi r6, r3, 0x1
    stw r6, lbl_8087E6B0
    cmpwi r6, 0x5
    blt lbl_fn_8058E7A8_00001908
    li r6, -0x4
    stw r6, lbl_8087E6B0
lbl_fn_8058E7A8_00001908:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_8058FEB8
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_8058FEC8
    lwz r3, lbl_8087E6B0
    addi r0, r3, 0x1
    stw r0, lbl_8087E6B0
    cmpwi r0, 0x5
    blt lbl_fn_8058E7A8_00001968
    li r6, -0x4
    stw r6, lbl_8087E6B0
lbl_fn_8058E7A8_00001968:
    mr r3, r28
    li r4, 0x1
    bl fn_8058FED4
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_8058FEC8
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_8058EF0C
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_8058FEE8
    b lbl_fn_8058E7A8_000019D4
lbl_fn_8058E7A8_000019CC:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058E7A8_000019D4:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    bne lbl_fn_8058E7A8_000019CC
lbl_fn_8058E7A8_00001A00:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001A48
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001A00
lbl_fn_8058E7A8_00001A48:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001B24
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058E7A8_00001A8C
lbl_fn_8058E7A8_00001A84:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058E7A8_00001A8C:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    bne lbl_fn_8058E7A8_00001A84
lbl_fn_8058E7A8_00001AB8:
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001AB8
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8058E7A8_00001B24
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058E7A8_00001A8C
lbl_fn_8058E7A8_00001B24:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058ECD8
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001CDC
    addi r3, r1, 0x38
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_8058FEE8
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    bne lbl_fn_8058E7A8_00001C14
    b lbl_fn_8058E7A8_00001BA4
lbl_fn_8058E7A8_00001B9C:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058E7A8_00001BA4:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_8058EEF0
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001BE4
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001B9C
lbl_fn_8058E7A8_00001BE4:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001C14
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
lbl_fn_8058E7A8_00001C14:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ED10
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001CCC
    b lbl_fn_8058E7A8_00001C34
lbl_fn_8058E7A8_00001C2C:
    addi r3, r1, 0x40
    bl fn_8058FEF4
lbl_fn_8058E7A8_00001C34:
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    beq lbl_fn_8058E7A8_00001C2C
lbl_fn_8058E7A8_00001C60:
    addi r3, r1, 0x3c
    bl fn_8058FF0C
    bl fn_8058FF04
    mr r30, r3
    mr r3, r27
    bl fn_8058FF04
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_8058E5FC
    cmpwi r3, 0x0
    bne lbl_fn_8058E7A8_00001C60
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_8058ECF0
    cmpwi r3, 0x0
    bne lbl_fn_8058E7A8_00001CCC
    addi r3, r1, 0x3c
    bl fn_8058FF04
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_8058FF04
    mr r4, r30
    bl fn_8058ED2C
    addi r3, r1, 0x40
    bl fn_8058FEF4
    b lbl_fn_8058E7A8_00001C34
lbl_fn_8058E7A8_00001CCC:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058E7A8_00001868
lbl_fn_8058E7A8_00001CDC:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FE90
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_8058FE90
    cmpw r3, r30
    bge lbl_fn_8058E7A8_00001D30
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_8058E7A8
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058E7A8_00001868
lbl_fn_8058E7A8_00001D30:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_8058E7A8
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_8058FEE8
    b lbl_fn_8058E7A8_00001868
lbl_fn_8058E7A8_00001D60:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
