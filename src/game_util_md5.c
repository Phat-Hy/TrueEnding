#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80046228(void);
extern void fn_80046398(void);
extern void fn_8059F72C(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_805F9EF0(void);
extern void fn_805FA4E0(void);
extern void fn_805FA5D0(void);
extern void fn_8068236C(void);
extern void fn_806823DC(void);
extern void fn_806825B4(void);
extern void fn_8070C650(void);
extern void fn_8070C740(void);
extern void fn_8070C770(void);
extern void fn_8070EE90(void);
extern void fn_8070EFE0(void);
extern void fn_807107B0(void);
extern void fn_807107C0(void);
extern void fn_807162B0(void);
extern void fn_80716360(void);
extern void fn_80716410(void);
extern void fn_80716420(void);
extern void fn_80716510(void);
extern void fn_80716640(void);
extern void fn_80716750(void);
extern void fn_80716840(void);
extern void fn_80716950(void);
extern void fn_80716A30(void);
extern void fn_80716AE0(void);
extern void fn_80716BA0(void);
extern void fn_80716CB0(void);
extern void fn_80716DF0(void);
extern void fn_80716E80(void);
extern void fn_80716EC0(void);
extern void fn_80716F10(void);
extern void fn_80717020(void);
extern void fn_807170E0(void);
extern void fn_80717120(void);
extern void fn_80717220(void);
extern void fn_80717340(void);
extern void fn_80717AA0(void);
extern void fn_80718770(void);
extern void fn_80718ED0(void);
extern void fn_80718F50(void);
extern void fn_80724DF0(void);
extern void fn_80724E90(void);
extern void fn_80725170(void);
extern void fn_80726310(void);
extern void fn_807263E0(void);
extern void fn_80726470(void);
extern void fn_80726500(void);
extern void fn_807265A0(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807623A4[];
extern u8 lbl_80762660[];
extern u8 lbl_80762810[];
extern u8 lbl_80796B60[];
extern u8 lbl_80796C98[];
extern u8 lbl_80796CC0[];
extern u8 lbl_80796CD8[];
extern u8 lbl_80796D00[];
extern u8 lbl_80796D18[];
extern u8 lbl_80796D38[];
extern u8 lbl_80796D88[];
extern u8 lbl_80796DB0[];
extern u8 lbl_80797134[];
extern u8 lbl_8079715C[];
extern u8 lbl_80797174[];
extern u8 lbl_8079719C[];
extern u8 lbl_807971B4[];
extern u8 lbl_807971DC[];
extern u8 lbl_807971F4[];
extern u8 lbl_8079721C[];
extern u8 lbl_80797234[];
extern u8 lbl_8079725C[];
extern u8 lbl_80797274[];
extern u8 lbl_8079729C[];
extern u8 lbl_807C6170[];
extern u8 lbl_807C6190[];

/* Small data declarations */
extern u32 lbl_8087EE80;
extern u32 lbl_8087EE84;
extern u32 lbl_8087EE88;
extern u32 lbl_8087EE8C;
extern u32 lbl_80880558;

/* Function declarations */
void fn_8059DA90(void);
void fn_8059DB5C(void);
void fn_8059DC60(void);
void fn_8059DC68(void);
void fn_8059DD4C(void);
void fn_8059DE68(void);
void fn_8059DF58(void);
void fn_8059E018(void);
void fn_8059E0A8(void);
void fn_8059E0B0(void);
void fn_8059E0B8(void);
void fn_8059E0C0(void);
void fn_8059E0C8(void);
void fn_8059E0D0(void);
void fn_8059E0D8(void);
void fn_8059E0E0(void);
void fn_8059E0E8(void);
void fn_8059E0F0(void);
void fn_8059E144(void);
void fn_8059E198(void);
void fn_8059E1A0(void);
void fn_8059E1A8(void);
void fn_8059E1B8(void);
void fn_8059E1C0(void);
void fn_8059E1C8(void);
void fn_8059E220(void);
void fn_8059E244(void);
void fn_8059E284(void);
void fn_8059E298(void);
void fn_8059E2F0(void);
void fn_8059E308(void);
void fn_8059E310(void);
void fn_8059E318(void);
void fn_8059E320(void);
void fn_8059E330(void);
void fn_8059E340(void);
void fn_8059E348(void);
void fn_8059E350(void);
void fn_8059E358(void);
void fn_8059E360(void);
void fn_8059E368(void);
void fn_8059E370(void);
void fn_8059E378(void);
void fn_8059E380(void);
void fn_8059E388(void);
void fn_8059E390(void);
void fn_8059E398(void);
void fn_8059E3A0(void);
void fn_8059E3A8(void);
void fn_8059E3B0(void);
void fn_8059E3B8(void);
void fn_8059E740(void);
void fn_8059E7F0(void);
void fn_8059E910(void);
void fn_8059E950(void);
void fn_8059E990(void);
void fn_8059E9A8(void);
void fn_8059EA00(void);
void fn_8059EA18(void);
void fn_8059EA70(void);
void fn_8059EA88(void);
void fn_8059EAE0(void);
void fn_8059EB20(void);
void fn_8059EBD8(void);
void fn_8059EDE8(void);
void fn_8059EF94(void);
void fn_8059F100(void);
void fn_8059F170(void);

asm void fn_8059DA90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r8, r3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r4
    lbz r0, 0x188(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8059DA90_0000003C
    li r3, 0x0
    b lbl_fn_8059DA90_000000B0
lbl_fn_8059DA90_0000003C:
    cmplwi r5, 0x78
    bge lbl_fn_8059DA90_0000004C
    li r3, 0x0
    b lbl_fn_8059DA90_000000B0
lbl_fn_8059DA90_0000004C:
    cmpwi r4, 0x0
    beq lbl_fn_8059DA90_000000AC
    mr r3, r29
    addi r4, r8, 0x14c
    li r5, 0x0
    bl fn_80726470
    lwz r0, 0x14(r29)
    lis r3, lbl_80796B60@ha
    addi r3, r3, lbl_80796B60@l
    stw r3, 0x0(r29)
    cmplw r31, r0
    stw r30, 0x70(r29)
    stw r31, 0x74(r29)
    ble lbl_fn_8059DA90_0000009C
    lis r3, lbl_807623A4@ha
    li r4, 0x176
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x7e
    crclr 6
    bl fn_80724DF0
lbl_fn_8059DA90_0000009C:
    lwz r4, 0x70(r29)
    mr r3, r29
    li r5, 0x0
    bl fn_80726310
lbl_fn_8059DA90_000000AC:
    mr r3, r29
lbl_fn_8059DA90_000000B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059DB5C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lbz r0, 0x188(r3)
    stw r31, 0x1c(r1)
    mr r31, r8
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r7
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r4
    bne lbl_fn_8059DB5C_0000010C
    li r3, 0x0
    b lbl_fn_8059DB5C_000001B0
lbl_fn_8059DB5C_0000010C:
    cmplwi r5, 0x78
    bge lbl_fn_8059DB5C_0000011C
    li r3, 0x0
    b lbl_fn_8059DB5C_000001B0
lbl_fn_8059DB5C_0000011C:
    mr r3, r29
    bl fn_805F9EF0
    cmpwi r3, 0x0
    mr r4, r3
    bge lbl_fn_8059DB5C_00000154
    lis r3, lbl_807623A4@ha
    mr r6, r29
    addi r3, r3, lbl_807623A4@l
    li r4, 0xae
    addi r5, r3, 0xc0
    crclr 6
    bl fn_80724E90
    li r3, 0x0
    b lbl_fn_8059DB5C_000001B0
lbl_fn_8059DB5C_00000154:
    cmpwi r28, 0x0
    beq lbl_fn_8059DB5C_000001AC
    mr r3, r28
    bl fn_807263E0
    lwz r0, 0x14(r28)
    lis r3, lbl_80796B60@ha
    addi r3, r3, lbl_80796B60@l
    stw r3, 0x0(r28)
    cmplw r31, r0
    stw r30, 0x70(r28)
    stw r31, 0x74(r28)
    ble lbl_fn_8059DB5C_0000019C
    lis r3, lbl_807623A4@ha
    li r4, 0x16c
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x7e
    crclr 6
    bl fn_80724DF0
lbl_fn_8059DB5C_0000019C:
    lwz r4, 0x70(r28)
    mr r3, r28
    li r5, 0x0
    bl fn_80726310
lbl_fn_8059DB5C_000001AC:
    mr r3, r28
lbl_fn_8059DB5C_000001B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059DC60(void)
{
    nofralloc
    li r3, 0x78
    blr
}

asm void fn_8059DC68(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    lbz r0, 0x188(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8059DC68_00000214
    lis r3, lbl_807623A4@ha
    li r4, 0xc6
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0xe5
    crclr 6
    bl fn_80724DF0
lbl_fn_8059DC68_00000214:
    addi r0, r1, 0x27
    lis r7, fn_80046398@ha
    clrrwi r31, r0, 5
    addi r3, r30, 0x14c
    mr r4, r31
    addi r7, r7, fn_80046398@l
    li r5, 0x40
    li r6, 0x0
    li r8, 0x2
    bl fn_805FA4E0
    li r0, 0x0
    stw r0, lbl_8087EE80
lbl_fn_8059DC68_00000244:
    lwz r0, lbl_8087EE80
    cmpwi r0, 0x0
    beq lbl_fn_8059DC68_00000258
    lwz r0, lbl_8087EE84
    b lbl_fn_8059DC68_00000260
lbl_fn_8059DC68_00000258:
    bl fn_80046228
    b lbl_fn_8059DC68_00000244
lbl_fn_8059DC68_00000260:
    cmplwi r0, 0x40
    beq lbl_fn_8059DC68_00000288
    lis r3, lbl_807623A4@ha
    li r4, 0xe8
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x101
    crclr 6
    bl fn_80724E90
    li r3, 0x0
    b lbl_fn_8059DC68_000002A4
lbl_fn_8059DC68_00000288:
    mr r4, r31
    addi r3, r30, 0x108
    bl fn_807162B0
    mr r3, r30
    addi r4, r30, 0x108
    bl fn_8059E298
    li r3, 0x1
lbl_fn_8059DC68_000002A4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8059DD4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x188(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8059DD4C_00000308
    lis r3, lbl_807623A4@ha
    li r4, 0xfe
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0xe5
    crclr 6
    bl fn_80724DF0
lbl_fn_8059DD4C_00000308:
    lwz r31, 0x124(r28)
    lwz r6, 0x120(r28)
    cmplw r30, r31
    bge lbl_fn_8059DD4C_0000033C
    bge lbl_fn_8059DD4C_00000334
    lis r3, lbl_807623A4@ha
    li r4, 0x108
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x134
    crclr 6
    bl fn_80724E90
lbl_fn_8059DD4C_00000334:
    li r3, 0x0
    b lbl_fn_8059DD4C_000003B8
lbl_fn_8059DD4C_0000033C:
    lis r7, fn_80046398@ha
    mr r4, r29
    mr r5, r31
    addi r3, r28, 0x14c
    addi r7, r7, fn_80046398@l
    li r8, 0x2
    bl fn_805FA4E0
    li r0, 0x0
    stw r0, lbl_8087EE80
lbl_fn_8059DD4C_00000360:
    lwz r0, lbl_8087EE80
    cmpwi r0, 0x0
    beq lbl_fn_8059DD4C_00000374
    lwz r0, lbl_8087EE84
    b lbl_fn_8059DD4C_0000037C
lbl_fn_8059DD4C_00000374:
    bl fn_80046228
    b lbl_fn_8059DD4C_00000360
lbl_fn_8059DD4C_0000037C:
    cmplw r0, r31
    beq lbl_fn_8059DD4C_000003A4
    lis r3, lbl_807623A4@ha
    li r4, 0x125
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x16b
    crclr 6
    bl fn_80724E90
    li r3, 0x0
    b lbl_fn_8059DD4C_000003B8
lbl_fn_8059DD4C_000003A4:
    mr r4, r29
    mr r5, r31
    addi r3, r28, 0x108
    bl fn_80716410
    li r3, 0x1
lbl_fn_8059DD4C_000003B8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059DE68(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x188(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8059DE68_00000424
    lis r3, lbl_807623A4@ha
    li r4, 0x13a
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0xe5
    crclr 6
    bl fn_80724DF0
lbl_fn_8059DE68_00000424:
    lwz r31, 0x11c(r28)
    lwz r6, 0x118(r28)
    cmplw r30, r31
    bge lbl_fn_8059DE68_00000458
    bge lbl_fn_8059DE68_00000450
    lis r3, lbl_807623A4@ha
    li r4, 0x144
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x19a
    crclr 6
    bl fn_80724E90
lbl_fn_8059DE68_00000450:
    li r3, 0x0
    b lbl_fn_8059DE68_000004A8
lbl_fn_8059DE68_00000458:
    mr r4, r29
    mr r5, r31
    addi r3, r28, 0x14c
    li r7, 0x2
    bl fn_805FA5D0
    cmplw r3, r31
    beq lbl_fn_8059DE68_00000494
    lis r3, lbl_807623A4@ha
    li r4, 0x153
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x1d9
    crclr 6
    bl fn_80724E90
    li r3, 0x0
    b lbl_fn_8059DE68_000004A8
lbl_fn_8059DE68_00000494:
    mr r4, r29
    mr r5, r31
    addi r3, r28, 0x108
    bl fn_80716360
    li r3, 0x1
lbl_fn_8059DE68_000004A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059DF58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    clrlwi. r0, r4, 27
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8059DF58_00000510
    lis r3, lbl_807623A4@ha
    mr r6, r30
    addi r3, r3, lbl_807623A4@l
    li r4, 0x17d
    addi r5, r3, 0x211
    crclr 6
    bl fn_80724DF0
lbl_fn_8059DF58_00000510:
    clrlwi. r0, r31, 27
    beq lbl_fn_8059DF58_00000534
    lis r3, lbl_807623A4@ha
    mr r6, r31
    addi r3, r3, lbl_807623A4@l
    li r4, 0x17e
    addi r5, r3, 0x256
    crclr 6
    bl fn_80724DF0
lbl_fn_8059DF58_00000534:
    lwz r5, 0x18(r29)
    lwz r4, 0x70(r29)
    lwz r3, 0x74(r29)
    add r0, r5, r31
    add r3, r4, r3
    cmplw r0, r3
    ble lbl_fn_8059DF58_0000055C
    subf r3, r5, r3
    addi r0, r3, 0x1f
    clrrwi r31, r0, 5
lbl_fn_8059DF58_0000055C:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_807265A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059E018(void)
{
    nofralloc
    cmpwi r5, 0x0
    beq lbl_fn_8059E018_000005A4
    cmplwi r5, 0x1
    beq lbl_fn_8059E018_000005B0
    cmplwi r5, 0x2
    beq lbl_fn_8059E018_000005BC
    b lbl_fn_8059E018_000005D0
lbl_fn_8059E018_000005A4:
    lwz r0, 0x70(r3)
    add r4, r4, r0
    b lbl_fn_8059E018_000005E8
lbl_fn_8059E018_000005B0:
    lwz r0, 0x18(r3)
    add r4, r4, r0
    b lbl_fn_8059E018_000005E8
lbl_fn_8059E018_000005BC:
    lwz r5, 0x70(r3)
    lwz r0, 0x74(r3)
    add r0, r5, r0
    subf r4, r4, r0
    b lbl_fn_8059E018_000005E8
lbl_fn_8059E018_000005D0:
    lis r3, lbl_807623A4@ha
    li r4, 0x197
    addi r3, r3, lbl_807623A4@l
    addi r5, r3, 0x29e
    crclr 6
    b fn_80724DF0
lbl_fn_8059E018_000005E8:
    lwz r5, 0x70(r3)
    cmpw r4, r5
    bge lbl_fn_8059E018_000005FC
    mr r4, r5
    b lbl_fn_8059E018_00000610
lbl_fn_8059E018_000005FC:
    lwz r0, 0x74(r3)
    add r0, r5, r0
    cmpw r4, r0
    ble lbl_fn_8059E018_00000610
    mr r4, r0
lbl_fn_8059E018_00000610:
    li r5, 0x0
    b fn_80726310
}

asm void fn_8059E0A8(void)
{
    nofralloc
    li r3, 0x20
    blr
}

asm void fn_8059E0B0(void)
{
    nofralloc
    li r3, 0x20
    blr
}

asm void fn_8059E0B8(void)
{
    nofralloc
    li r3, 0x4
    blr
}

asm void fn_8059E0C0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8059E0C8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8059E0D0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8059E0D8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8059E0E0(void)
{
    nofralloc
    lbz r3, 0x6c(r3)
    blr
}

asm void fn_8059E0E8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8059E0F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8059E0F0_000006A0
    lis r3, lbl_80796D00@ha
    lis r5, lbl_80796CD8@ha
    addi r3, r3, lbl_80796D00@l
    li r4, 0x3a
    addi r5, r5, lbl_80796CD8@l
    crclr 6
    bl fn_80724DF0
lbl_fn_8059E0F0_000006A0:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059E144(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8059E144_000006F4
    lis r3, lbl_80796CC0@ha
    lis r5, lbl_80796C98@ha
    addi r3, r3, lbl_80796CC0@l
    li r4, 0x35
    addi r5, r5, lbl_80796C98@l
    crclr 6
    bl fn_80724DF0
lbl_fn_8059E144_000006F4:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059E198(void)
{
    nofralloc
    la r3, lbl_80880558
    blr
}

asm void fn_8059E1A0(void)
{
    nofralloc
    lwz r3, 0x74(r3)
    blr
}

asm void fn_8059E1A8(void)
{
    nofralloc
    lwz r4, 0x70(r3)
    lwz r0, 0x18(r3)
    subf r3, r4, r0
    blr
}

asm void fn_8059E1B8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8059E1C0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8059E1C8(void)
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
    beq lbl_fn_8059E1C8_00000774
    li r4, 0x0
    bl fn_80726500
    cmpwi r31, 0x0
    ble lbl_fn_8059E1C8_00000774
    mr r3, r30
    bl dtor_80084684
lbl_fn_8059E1C8_00000774:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059E220(void)
{
    nofralloc
    lis r5, lbl_80796D18@ha
    li r4, 0x0
    addi r5, r5, lbl_80796D18@l
    li r0, 0x2f
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stb r0, 0x8(r3)
    stb r4, 0x9(r3)
    blr
}

asm void fn_8059E244(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8059E244_000007DC
    cmpwi r4, 0x0
    ble lbl_fn_8059E244_000007DC
    bl dtor_80084684
lbl_fn_8059E244_000007DC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059E284(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8059E298(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8059E298_00000844
    lis r3, lbl_80762660@ha
    li r4, 0x4b
    addi r3, r3, lbl_80762660@l
    addi r5, r3, 0x15
    crclr 6
    bl fn_80724DF0
lbl_fn_8059E298_00000844:
    stw r31, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059E2F0(void)
{
    nofralloc
    li r4, 0x0
    li r0, 0x2f
    stw r4, 0x4(r3)
    stb r0, 0x8(r3)
    stb r4, 0x9(r3)
    blr
}

asm void fn_8059E308(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716E80
}

asm void fn_8059E310(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716EC0
}

asm void fn_8059E318(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716F10
}

asm void fn_8059E320(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    mr r5, r4
    lwz r4, 0x34(r3)
    b fn_80717340
}

asm void fn_8059E330(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    mr r5, r4
    lwz r4, 0x3c(r3)
    b fn_80717340
}

asm void fn_8059E340(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80717020
}

asm void fn_8059E348(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716420
}

asm void fn_8059E350(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716510
}

asm void fn_8059E358(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716750
}

asm void fn_8059E360(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716840
}

asm void fn_8059E368(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716950
}

asm void fn_8059E370(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716AE0
}

asm void fn_8059E378(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716DF0
}

asm void fn_8059E380(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716640
}

asm void fn_8059E388(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716A30
}

asm void fn_8059E390(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716BA0
}

asm void fn_8059E398(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80716CB0
}

asm void fn_8059E3A0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_807170E0
}

asm void fn_8059E3A8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80717120
}

asm void fn_8059E3B0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80717220
}

asm void fn_8059E3B8(void)
{
    nofralloc
    stwu r1, -0x470(r1)
    mflr r0
    stw r0, 0x474(r1)
    stmw r25, 0x454(r1)
    mr r28, r3
    mr r29, r5
    mr r25, r4
    mr r30, r6
    addi r5, r1, 0x10
    lwz r3, 0x4(r3)
    bl fn_80717120
    cmpwi r3, 0x0
    bne lbl_fn_8059E3B8_00000964
    li r3, 0x0
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000964:
    lwz r31, 0x18(r1)
    cmpwi r31, 0x0
    beq lbl_fn_8059E3B8_00000B48
    lwz r3, lbl_8087EE88
    rlwinm r0, r25, 29, 3, 29
    clrlwi r4, r25, 27
    li r5, 0x1
    lwzx r0, r3, r0
    slw r3, r5, r4
    and. r0, r3, r0
    beq lbl_fn_8059E3B8_00000A98
    mr r3, r31
    li r4, 0x2f
    bl fn_806825B4
    cmpwi r3, 0x0
    beq lbl_fn_8059E3B8_000009C8
    lis r4, lbl_80762660@ha
    mr r6, r3
    addi r4, r4, lbl_80762660@l
    lwz r5, lbl_8087EE8C
    addi r3, r1, 0x350
    addi r4, r4, 0x40
    crclr 6
    bl sprintf
    b lbl_fn_8059E3B8_000009E8
lbl_fn_8059E3B8_000009C8:
    lis r4, lbl_80762660@ha
    lwz r5, lbl_8087EE8C
    addi r4, r4, lbl_80762660@l
    mr r6, r31
    addi r3, r1, 0x350
    addi r4, r4, 0x46
    crclr 6
    bl sprintf
lbl_fn_8059E3B8_000009E8:
    lbz r0, 0x350(r1)
    lwz r31, 0x10(r1)
    cmpwi r0, 0x2f
    bne lbl_fn_8059E3B8_00000A00
    addi r6, r1, 0x350
    b lbl_fn_8059E3B8_00000A70
lbl_fn_8059E3B8_00000A00:
    addi r3, r1, 0x350
    bl strlen
    mr r27, r3
    addi r3, r28, 0x8
    bl strlen
    add r0, r27, r3
    mr r5, r3
    cmplwi r0, 0x100
    blt lbl_fn_8059E3B8_00000A4C
    lis r3, lbl_80762660@ha
    addi r6, r28, 0x8
    addi r3, r3, lbl_80762660@l
    addi r7, r1, 0x350
    addi r5, r3, 0x4d
    li r4, 0x16e
    crclr 6
    bl fn_80724E90
    li r3, 0x0
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000A4C:
    addi r3, r1, 0x250
    addi r4, r28, 0x8
    addi r5, r5, 0x1
    bl fn_8068236C
    addi r3, r1, 0x250
    addi r4, r1, 0x350
    addi r5, r27, 0x1
    bl fn_806823DC
    addi r6, r1, 0x250
lbl_fn_8059E3B8_00000A70:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    lwz r12, 0x1c(r12)
    mr r8, r31
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000A98:
    lbz r0, 0x0(r31)
    lwz r26, 0x10(r1)
    cmpwi r0, 0x2f
    bne lbl_fn_8059E3B8_00000AAC
    b lbl_fn_8059E3B8_00000B1C
lbl_fn_8059E3B8_00000AAC:
    mr r3, r31
    bl strlen
    mr r27, r3
    addi r3, r28, 0x8
    bl strlen
    add r0, r27, r3
    mr r5, r3
    cmplwi r0, 0x100
    blt lbl_fn_8059E3B8_00000AF8
    lis r3, lbl_80762660@ha
    mr r7, r31
    addi r3, r3, lbl_80762660@l
    addi r6, r28, 0x8
    addi r5, r3, 0x4d
    li r4, 0x16e
    crclr 6
    bl fn_80724E90
    li r3, 0x0
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000AF8:
    addi r3, r1, 0x150
    addi r4, r28, 0x8
    addi r5, r5, 0x1
    bl fn_8068236C
    mr r4, r31
    addi r3, r1, 0x150
    addi r5, r27, 0x1
    bl fn_806823DC
    addi r31, r1, 0x150
lbl_fn_8059E3B8_00000B1C:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    lwz r12, 0x1c(r12)
    mr r6, r31
    mr r8, r26
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000B48:
    lwz r3, 0x4(r28)
    mr r4, r25
    addi r6, r1, 0x8
    li r5, 0x0
    bl fn_80717220
    cmpwi r3, 0x0
    bne lbl_fn_8059E3B8_00000B6C
    li r3, 0x0
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000B6C:
    lwz r3, 0x4(r28)
    addi r5, r1, 0x38
    lwz r4, 0x8(r1)
    bl fn_80716BA0
    cmpwi r3, 0x0
    bne lbl_fn_8059E3B8_00000B8C
    li r3, 0x0
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000B8C:
    lwz r3, 0x4(r28)
    addi r6, r1, 0x20
    lwz r4, 0x8(r1)
    lwz r5, 0xc(r1)
    bl fn_80716CB0
    cmpwi r3, 0x0
    bne lbl_fn_8059E3B8_00000BB0
    li r3, 0x0
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000BB0:
    lwz r26, 0x3c(r1)
    lwz r3, 0x40(r1)
    lwz r0, 0x24(r1)
    cmpwi r26, 0x0
    lwz r25, 0x28(r1)
    add r27, r3, r0
    beq lbl_fn_8059E3B8_00000C78
    lbz r0, 0x0(r26)
    cmpwi r0, 0x2f
    bne lbl_fn_8059E3B8_00000BDC
    b lbl_fn_8059E3B8_00000C4C
lbl_fn_8059E3B8_00000BDC:
    mr r3, r26
    bl strlen
    mr r31, r3
    addi r3, r28, 0x8
    bl strlen
    add r0, r31, r3
    mr r5, r3
    cmplwi r0, 0x100
    blt lbl_fn_8059E3B8_00000C28
    lis r3, lbl_80762660@ha
    mr r7, r26
    addi r3, r3, lbl_80762660@l
    addi r6, r28, 0x8
    addi r5, r3, 0x4d
    li r4, 0x16e
    crclr 6
    bl fn_80724E90
    li r3, 0x0
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000C28:
    addi r3, r1, 0x50
    addi r4, r28, 0x8
    addi r5, r5, 0x1
    bl fn_8068236C
    mr r4, r26
    addi r3, r1, 0x50
    addi r5, r31, 0x1
    bl fn_806823DC
    addi r26, r1, 0x50
lbl_fn_8059E3B8_00000C4C:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    lwz r12, 0x1c(r12)
    mr r6, r26
    mr r7, r27
    mr r8, r25
    mtctr r12
    bctrl
    b lbl_fn_8059E3B8_00000C9C
lbl_fn_8059E3B8_00000C78:
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    lwz r12, 0x18(r12)
    mr r6, r27
    mr r7, r25
    mtctr r12
    bctrl
lbl_fn_8059E3B8_00000C9C:
    lmw r25, 0x454(r1)
    lwz r0, 0x474(r1)
    mtlr r0
    addi r1, r1, 0x470
    blr
}

asm void fn_8059E740(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r29
    bl strlen
    add r4, r29, r3
    mr r31, r3
    lbz r0, -0x1(r4)
    mr r30, r31
    cmpwi r0, 0x2f
    beq lbl_fn_8059E740_00000D04
    add r4, r28, r3
    li r0, 0x2f
    stb r0, 0x8(r4)
    addi r30, r3, 0x1
lbl_fn_8059E740_00000D04:
    cmplwi r30, 0x100
    blt lbl_fn_8059E740_00000D24
    lis r3, lbl_80762660@ha
    li r4, 0x184
    addi r3, r3, lbl_80762660@l
    addi r5, r3, 0x68
    crclr 6
    bl fn_80724DF0
lbl_fn_8059E740_00000D24:
    add r3, r28, r30
    li r0, 0x0
    stb r0, 0x8(r3)
    mr r4, r29
    mr r5, r31
    addi r3, r28, 0x8
    bl fn_8068236C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059E7F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80796D38@ha
    lis r5, lbl_80796DB0@ha
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80796D38@l
    lis r4, lbl_80796D88@ha
    addi r7, r3, 0x4c
    stw r31, 0xc(r1)
    li r31, 0x0
    addi r0, r6, 0x14
    addi r5, r5, lbl_80796DB0@l
    stw r30, 0x8(r1)
    addi r4, r4, lbl_80796D88@l
    mr r30, r3
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    stw r31, 0x10(r3)
    stw r31, 0x14(r3)
    stw r31, 0x18(r3)
    stw r31, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r3, 0x24(r3)
    stw r4, 0x28(r3)
    stw r3, 0x2c(r3)
    stw r31, 0x34(r3)
    stw r31, 0x38(r3)
    stw r31, 0x3c(r3)
    stw r31, 0x40(r3)
    stw r31, 0x44(r3)
    stw r31, 0x48(r3)
    stw r7, 0x4c(r3)
    stw r7, 0x50(r3)
    addi r3, r3, 0x54
    bl fn_805F30F0
    addi r0, r30, 0x74
    stw r31, 0x6c(r30)
    addi r3, r30, 0x7c
    stw r31, 0x70(r30)
    stw r0, 0x74(r30)
    stw r0, 0x78(r30)
    bl fn_805F30F0
    addi r0, r30, 0x9c
    stw r31, 0x94(r30)
    addi r3, r30, 0xa4
    stw r31, 0x98(r30)
    stw r0, 0x9c(r30)
    stw r0, 0xa0(r30)
    bl fn_805F30F0
    lis r4, lbl_807C6190@ha
    lis r3, lbl_807C6170@ha
    addi r4, r4, lbl_807C6190@l
    addi r0, r30, 0xe0
    addi r3, r3, lbl_807C6170@l
    stw r4, 0xbc(r30)
    stw r0, 0xc0(r30)
    stw r31, 0xc4(r30)
    stw r3, 0xe0(r30)
    stw r31, 0xe4(r30)
    stw r31, 0xe8(r30)
    bl fn_8070C650
    mr r4, r30
    bl fn_8070C740
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059E910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8059E910_00000EA8
    cmpwi r4, 0x0
    ble lbl_fn_8059E910_00000EA8
    bl dtor_80084684
lbl_fn_8059E910_00000EA8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059E950(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8059E950_00000EE8
    cmpwi r4, 0x0
    ble lbl_fn_8059E950_00000EE8
    bl dtor_80084684
lbl_fn_8059E950_00000EE8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059E990(void)
{
    nofralloc
    addi r4, r3, 0x4
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

asm void fn_8059E9A8(void)
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
    beq lbl_fn_8059E9A8_00000F54
    li r4, 0x0
    bl fn_80725170
    cmpwi r31, 0x0
    ble lbl_fn_8059E9A8_00000F54
    mr r3, r30
    bl dtor_80084684
lbl_fn_8059E9A8_00000F54:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059EA00(void)
{
    nofralloc
    addi r4, r3, 0x4
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

asm void fn_8059EA18(void)
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
    beq lbl_fn_8059EA18_00000FC4
    li r4, 0x0
    bl fn_80725170
    cmpwi r31, 0x0
    ble lbl_fn_8059EA18_00000FC4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8059EA18_00000FC4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059EA70(void)
{
    nofralloc
    addi r4, r3, 0x4
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

asm void fn_8059EA88(void)
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
    beq lbl_fn_8059EA88_00001034
    li r4, 0x0
    bl fn_80725170
    cmpwi r31, 0x0
    ble lbl_fn_8059EA88_00001034
    mr r3, r30
    bl dtor_80084684
lbl_fn_8059EA88_00001034:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059EAE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8059EAE0_00001078
    cmpwi r4, 0x0
    ble lbl_fn_8059EAE0_00001078
    bl dtor_80084684
lbl_fn_8059EAE0_00001078:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059EB20(void)
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
    beq lbl_fn_8059EB20_0000112C
    lis r4, lbl_80796D38@ha
    addi r4, r4, lbl_80796D38@l
    stw r4, 0x8(r3)
    addi r0, r4, 0x14
    stw r0, 0xc(r3)
    bl fn_8070C650
    mr r4, r30
    bl fn_8070C770
    addic. r0, r30, 0x94
    beq lbl_fn_8059EB20_000010EC
    addic. r3, r0, 0x4
    beq lbl_fn_8059EB20_000010EC
    li r4, 0x0
    bl fn_80725170
lbl_fn_8059EB20_000010EC:
    addic. r0, r30, 0x6c
    beq lbl_fn_8059EB20_00001104
    addic. r3, r0, 0x4
    beq lbl_fn_8059EB20_00001104
    li r4, 0x0
    bl fn_80725170
lbl_fn_8059EB20_00001104:
    addic. r0, r30, 0x44
    beq lbl_fn_8059EB20_0000111C
    addic. r3, r0, 0x4
    beq lbl_fn_8059EB20_0000111C
    li r4, 0x0
    bl fn_80725170
lbl_fn_8059EB20_0000111C:
    cmpwi r31, 0x0
    ble lbl_fn_8059EB20_0000112C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8059EB20_0000112C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059EBD8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r25, 0x64(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    bl fn_80718770
    cmpwi r3, 0x0
    bne lbl_fn_8059EBD8_00001194
    lis r3, lbl_80762810@ha
    li r4, 0x83
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x1b
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EBD8_00001194:
    bl fn_80718770
    cmpwi r3, 0x0
    bne lbl_fn_8059EBD8_000011A8
    li r3, 0x0
    b lbl_fn_8059EBD8_00001344
lbl_fn_8059EBD8_000011A8:
    cmpwi r26, 0x0
    bne lbl_fn_8059EBD8_000011C8
    lis r3, lbl_80762810@ha
    li r4, 0x89
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x59
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EBD8_000011C8:
    cmpwi r27, 0x0
    bne lbl_fn_8059EBD8_000011E8
    lis r3, lbl_80762810@ha
    li r4, 0x8a
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x7d
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EBD8_000011E8:
    cmpwi r30, 0x0
    beq lbl_fn_8059EBD8_00001210
    cmpwi r29, 0x0
    bne lbl_fn_8059EBD8_00001210
    lis r3, lbl_80762810@ha
    li r4, 0x8c
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0xa4
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EBD8_00001210:
    cmpwi r26, 0x0
    bne lbl_fn_8059EBD8_00001230
    lis r3, lbl_80762810@ha
    li r4, 0x110
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x59
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EBD8_00001230:
    mr r3, r26
    addi r4, r1, 0x40
    li r31, 0x0
    bl fn_8059E378
    cmpwi r3, 0x0
    beq lbl_fn_8059EBD8_0000124C
    lwz r31, 0x50(r1)
lbl_fn_8059EBD8_0000124C:
    lis r3, 0x1
    subi r0, r3, 0x6000
    mullw r0, r31, r0
    cmplw r30, r0
    bge lbl_fn_8059EBD8_00001278
    lis r3, lbl_80762810@ha
    li r4, 0x8e
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0xcf
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EBD8_00001278:
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_8059F170
    cmpwi r3, 0x0
    bne lbl_fn_8059EBD8_0000129C
    li r3, 0x0
    b lbl_fn_8059EBD8_00001344
lbl_fn_8059EBD8_0000129C:
    cmpwi r26, 0x0
    bne lbl_fn_8059EBD8_000012BC
    lis r3, lbl_80762810@ha
    li r4, 0x110
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x59
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EBD8_000012BC:
    mr r3, r26
    addi r4, r1, 0x24
    li r31, 0x0
    bl fn_8059E378
    cmpwi r3, 0x0
    beq lbl_fn_8059EBD8_000012D8
    lwz r31, 0x34(r1)
lbl_fn_8059EBD8_000012D8:
    lis r3, 0x1
    subi r0, r3, 0x6000
    mullw r0, r31, r0
    cmplw r30, r0
    bge lbl_fn_8059EBD8_000012F4
    li r0, 0x0
    b lbl_fn_8059EBD8_00001328
lbl_fn_8059EBD8_000012F4:
    mr r3, r26
    addi r4, r1, 0x8
    li r31, 0x0
    bl fn_8059E378
    cmpwi r3, 0x0
    beq lbl_fn_8059EBD8_00001310
    lwz r31, 0x18(r1)
lbl_fn_8059EBD8_00001310:
    mr r4, r29
    mr r5, r30
    mr r6, r31
    addi r3, r25, 0xc8
    bl fn_80718ED0
    li r0, 0x1
lbl_fn_8059EBD8_00001328:
    cmpwi r0, 0x0
    bne lbl_fn_8059EBD8_00001338
    li r3, 0x0
    b lbl_fn_8059EBD8_00001344
lbl_fn_8059EBD8_00001338:
    addi r0, r25, 0xbc
    stw r0, 0x30(r25)
    li r3, 0x1
lbl_fn_8059EBD8_00001344:
    lmw r25, 0x64(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8059EDE8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x30(r3)
    b lbl_fn_8059EDE8_000013B4
lbl_fn_8059EDE8_0000139C:
    lwz r0, 0x40(r28)
    li r4, -0x1
    add r3, r0, r29
    bl fn_80717AA0
    addi r29, r29, 0x64
    addi r30, r30, 0x1
lbl_fn_8059EDE8_000013B4:
    lwz r0, 0x3c(r28)
    cmplw r30, r0
    blt lbl_fn_8059EDE8_0000139C
    li r0, 0x0
    stw r0, 0x3c(r28)
    addi r3, r28, 0xc8
    stw r0, 0x40(r28)
    bl fn_80718F50
    lwz r29, 0xe4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_8059EDE8_000014E4
    lwz r30, 0xe8(r28)
    bne lbl_fn_8059EDE8_00001404
    lis r3, lbl_8079729C@ha
    lis r5, lbl_80797274@ha
    addi r3, r3, lbl_8079729C@l
    li r4, 0x56
    addi r5, r5, lbl_80797274@l
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EDE8_00001404:
    addi r31, r28, 0x54
    mr r3, r31
    bl fn_805F3130
    mr r4, r29
    mr r5, r30
    addi r3, r28, 0x44
    bl fn_8070EFE0
    mr r3, r31
    bl fn_805F3210
    lwz r30, 0xe4(r28)
    lwz r29, 0xe8(r28)
    cmpwi r30, 0x0
    bne lbl_fn_8059EDE8_00001454
    lis r3, lbl_8079725C@ha
    lis r5, lbl_80797234@ha
    addi r3, r3, lbl_8079725C@l
    li r4, 0x56
    addi r5, r5, lbl_80797234@l
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EDE8_00001454:
    addi r31, r28, 0x7c
    mr r3, r31
    bl fn_805F3130
    mr r4, r30
    mr r5, r29
    addi r3, r28, 0x6c
    bl fn_8070EFE0
    mr r3, r31
    bl fn_805F3210
    lwz r29, 0xe4(r28)
    lwz r30, 0xe8(r28)
    cmpwi r29, 0x0
    bne lbl_fn_8059EDE8_000014A4
    lis r3, lbl_8079721C@ha
    lis r5, lbl_807971F4@ha
    addi r3, r3, lbl_8079721C@l
    li r4, 0x56
    addi r5, r5, lbl_807971F4@l
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EDE8_000014A4:
    addi r31, r28, 0xa4
    mr r3, r31
    bl fn_805F3130
    mr r4, r29
    mr r5, r30
    addi r3, r28, 0x94
    bl fn_8070EFE0
    mr r3, r31
    bl fn_805F3210
    lwz r4, 0xe4(r28)
    addi r3, r28, 0xbc
    lwz r5, 0xe8(r28)
    bl fn_807107C0
    li r0, 0x0
    stw r0, 0xe4(r28)
    stw r0, 0xe8(r28)
lbl_fn_8059EDE8_000014E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059EF94(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    bne lbl_fn_8059EF94_00001544
    lis r3, lbl_80762810@ha
    li r4, 0xd2
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x59
    crclr 6
    bl fn_80724DF0
lbl_fn_8059EF94_00001544:
    mr r3, r30
    bl fn_8059E308
    mulli r4, r3, 0x64
    mr r29, r3
    li r28, 0x0
    addi r0, r4, 0x3
    clrrwi r31, r0, 2
    b lbl_fn_8059EF94_000015B4
lbl_fn_8059EF94_00001564:
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_8059E370
    cmpwi r3, 0x0
    beq lbl_fn_8059EF94_000015B0
    lwz r3, 0xc(r1)
    lwz r5, 0x8(r1)
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8059EF94_000015B0
lbl_fn_8059EF94_00001598:
    cmpwi r3, 0x0
    beq lbl_fn_8059EF94_000015AC
    addi r0, r31, 0x3f
    clrrwi r31, r0, 5
    add r31, r31, r4
lbl_fn_8059EF94_000015AC:
    bdnz lbl_fn_8059EF94_00001598
lbl_fn_8059EF94_000015B0:
    addi r28, r28, 0x1
lbl_fn_8059EF94_000015B4:
    cmplw r28, r29
    blt lbl_fn_8059EF94_00001564
    mr r3, r30
    bl fn_8059E310
    slwi r4, r3, 3
    mr r3, r30
    addi r0, r4, 0x7
    clrrwi r0, r0, 2
    addi r4, r1, 0x10
    add r31, r31, r0
    bl fn_8059E378
    cmpwi r3, 0x0
    beq lbl_fn_8059EF94_00001638
    lwz r0, 0x10(r1)
    lwz r4, 0x18(r1)
    mulli r6, r0, 0x4b4
    lwz r3, 0x24(r1)
    lwz r0, 0x14(r1)
    mulli r5, r4, 0x10b4
    addi r6, r6, 0x3
    mulli r4, r3, 0x234
    clrrwi r3, r6, 2
    addi r5, r5, 0x3
    add r31, r31, r3
    mulli r3, r0, 0xd0
    clrrwi r5, r5, 2
    addi r0, r4, 0x3
    add r31, r31, r5
    clrrwi r4, r0, 2
    addi r0, r3, 0x3
    add r31, r31, r4
    clrrwi r0, r0, 2
    add r31, r31, r0
lbl_fn_8059EF94_00001638:
    mr r3, r30
    bl fn_8059E3A0
    slwi r3, r3, 3
    addi r0, r3, 0x7
    clrrwi r0, r0, 2
    add r3, r31, r0
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059F100(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    bne lbl_fn_8059F100_000016A4
    lis r3, lbl_80762810@ha
    li r4, 0x110
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x59
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F100_000016A4:
    mr r3, r31
    addi r4, r1, 0x8
    li r31, 0x0
    bl fn_8059E378
    cmpwi r3, 0x0
    beq lbl_fn_8059F100_000016C0
    lwz r31, 0x18(r1)
lbl_fn_8059F100_000016C0:
    lis r3, 0x1
    subi r0, r3, 0x6000
    mullw r3, r31, r0
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8059F170(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stmw r22, 0x28(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    bne lbl_fn_8059F170_00001720
    lis r3, lbl_80762810@ha
    li r4, 0x130
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x59
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001720:
    cmpwi r29, 0x0
    bne lbl_fn_8059F170_00001740
    lis r3, lbl_80762810@ha
    li r4, 0x131
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x7d
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001740:
    clrlwi. r0, r29, 30
    beq lbl_fn_8059F170_00001764
    lis r3, lbl_80762810@ha
    mr r6, r29
    addi r3, r3, lbl_80762810@l
    li r4, 0x132
    addi r5, r3, 0x118
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001764:
    mr r3, r27
    mr r4, r28
    bl fn_8059EF94
    cmplw r30, r3
    bge lbl_fn_8059F170_00001790
    lis r3, lbl_80762810@ha
    li r4, 0x133
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x15f
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001790:
    add r31, r29, r30
    stw r29, 0x8(r1)
    mr r3, r27
    mr r4, r28
    mr r6, r31
    addi r5, r1, 0x8
    bl fn_8059F72C
    cmpwi r3, 0x0
    bne lbl_fn_8059F170_000017BC
    li r3, 0x0
    b lbl_fn_8059F170_00001BBC
lbl_fn_8059F170_000017BC:
    mr r3, r28
    bl fn_8059E310
    slwi r3, r3, 3
    lwz r5, 0x8(r1)
    addi r0, r3, 0x4
    add r3, r0, r5
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    subf. r0, r31, r4
    ble lbl_fn_8059F170_000017EC
    li r0, 0x0
    b lbl_fn_8059F170_00001844
lbl_fn_8059F170_000017EC:
    stw r5, 0x14(r27)
    mr r3, r28
    stw r4, 0x8(r1)
    bl fn_8059E310
    lwz r5, 0x14(r27)
    li r6, 0x0
    li r7, 0x0
    li r4, 0x0
    stw r3, 0x0(r5)
    b lbl_fn_8059F170_00001830
lbl_fn_8059F170_00001814:
    add r3, r3, r7
    addi r6, r6, 0x1
    stw r4, 0x4(r3)
    lwz r0, 0x14(r27)
    add r3, r0, r7
    addi r7, r7, 0x8
    stw r4, 0x8(r3)
lbl_fn_8059F170_00001830:
    lwz r3, 0x14(r27)
    lwz r0, 0x0(r3)
    cmplw r6, r0
    blt lbl_fn_8059F170_00001814
    li r0, 0x1
lbl_fn_8059F170_00001844:
    cmpwi r0, 0x0
    bne lbl_fn_8059F170_00001854
    li r3, 0x0
    b lbl_fn_8059F170_00001BBC
lbl_fn_8059F170_00001854:
    mr r3, r28
    bl fn_8059E3A0
    slwi r3, r3, 3
    lwz r5, 0x8(r1)
    addi r0, r3, 0x4
    add r3, r0, r5
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    subf. r0, r31, r4
    ble lbl_fn_8059F170_00001884
    li r0, 0x0
    b lbl_fn_8059F170_000018DC
lbl_fn_8059F170_00001884:
    stw r5, 0x18(r27)
    mr r3, r28
    stw r4, 0x8(r1)
    bl fn_8059E3A0
    lwz r5, 0x18(r27)
    li r6, 0x0
    li r7, 0x0
    li r4, 0x0
    stw r3, 0x0(r5)
    b lbl_fn_8059F170_000018C8
lbl_fn_8059F170_000018AC:
    add r3, r3, r7
    addi r6, r6, 0x1
    stw r4, 0x4(r3)
    lwz r0, 0x18(r27)
    add r3, r0, r7
    addi r7, r7, 0x8
    stw r4, 0x8(r3)
lbl_fn_8059F170_000018C8:
    lwz r3, 0x18(r27)
    lwz r0, 0x0(r3)
    cmplw r6, r0
    blt lbl_fn_8059F170_000018AC
    li r0, 0x1
lbl_fn_8059F170_000018DC:
    cmpwi r0, 0x0
    bne lbl_fn_8059F170_000018EC
    li r3, 0x0
    b lbl_fn_8059F170_00001BBC
lbl_fn_8059F170_000018EC:
    mr r3, r28
    addi r4, r1, 0xc
    bl fn_8059E378
    cmpwi r3, 0x0
    beq lbl_fn_8059F170_00001B78
    lwz r23, 0xc(r1)
    lwz r22, 0x8(r1)
    mulli r25, r23, 0x4b4
    add r3, r25, r22
    addi r0, r3, 0x3
    clrrwi r24, r0, 2
    subf. r0, r31, r24
    ble lbl_fn_8059F170_00001928
    li r0, 0x0
    b lbl_fn_8059F170_000019A0
lbl_fn_8059F170_00001928:
    cmpwi r22, 0x0
    bne lbl_fn_8059F170_0000194C
    lis r3, lbl_807971DC@ha
    lis r5, lbl_807971B4@ha
    addi r3, r3, lbl_807971DC@l
    li r4, 0x43
    addi r5, r5, lbl_807971B4@l
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_0000194C:
    addi r26, r27, 0x54
    mr r3, r26
    bl fn_805F3130
    mr r4, r22
    mr r5, r25
    addi r3, r27, 0x44
    li r6, 0x4b4
    bl fn_8070EE90
    mr r25, r3
    mr r3, r26
    bl fn_805F3210
    cmplw r25, r23
    beq lbl_fn_8059F170_00001998
    lis r3, lbl_80762810@ha
    li r4, 0x218
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x197
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001998:
    stw r24, 0x8(r1)
    li r0, 0x1
lbl_fn_8059F170_000019A0:
    cmpwi r0, 0x0
    bne lbl_fn_8059F170_000019B0
    li r3, 0x0
    b lbl_fn_8059F170_00001BBC
lbl_fn_8059F170_000019B0:
    lwz r24, 0x14(r1)
    lwz r22, 0x8(r1)
    mulli r25, r24, 0x10b4
    add r3, r25, r22
    addi r0, r3, 0x3
    clrrwi r23, r0, 2
    subf. r0, r31, r23
    ble lbl_fn_8059F170_000019D8
    li r0, 0x0
    b lbl_fn_8059F170_00001A50
lbl_fn_8059F170_000019D8:
    cmpwi r22, 0x0
    bne lbl_fn_8059F170_000019FC
    lis r3, lbl_8079715C@ha
    lis r5, lbl_80797134@ha
    addi r3, r3, lbl_8079715C@l
    li r4, 0x43
    addi r5, r5, lbl_80797134@l
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_000019FC:
    addi r26, r27, 0x7c
    mr r3, r26
    bl fn_805F3130
    mr r4, r22
    mr r5, r25
    addi r3, r27, 0x6c
    li r6, 0x10b4
    bl fn_8070EE90
    mr r25, r3
    mr r3, r26
    bl fn_805F3210
    cmplw r25, r24
    beq lbl_fn_8059F170_00001A48
    lis r3, lbl_80762810@ha
    li r4, 0x258
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x197
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001A48:
    stw r23, 0x8(r1)
    li r0, 0x1
lbl_fn_8059F170_00001A50:
    cmpwi r0, 0x0
    bne lbl_fn_8059F170_00001A60
    li r3, 0x0
    b lbl_fn_8059F170_00001BBC
lbl_fn_8059F170_00001A60:
    lwz r24, 0x20(r1)
    lwz r22, 0x8(r1)
    mulli r26, r24, 0x234
    add r3, r26, r22
    addi r0, r3, 0x3
    clrrwi r23, r0, 2
    subf. r0, r31, r23
    ble lbl_fn_8059F170_00001A88
    li r0, 0x0
    b lbl_fn_8059F170_00001B00
lbl_fn_8059F170_00001A88:
    cmpwi r22, 0x0
    bne lbl_fn_8059F170_00001AAC
    lis r3, lbl_8079719C@ha
    lis r5, lbl_80797174@ha
    addi r3, r3, lbl_8079719C@l
    li r4, 0x43
    addi r5, r5, lbl_80797174@l
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001AAC:
    addi r25, r27, 0xa4
    mr r3, r25
    bl fn_805F3130
    mr r4, r22
    mr r5, r26
    addi r3, r27, 0x94
    li r6, 0x234
    bl fn_8070EE90
    mr r26, r3
    mr r3, r25
    bl fn_805F3210
    cmplw r26, r24
    beq lbl_fn_8059F170_00001AF8
    lis r3, lbl_80762810@ha
    li r4, 0x238
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x197
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001AF8:
    stw r23, 0x8(r1)
    li r0, 0x1
lbl_fn_8059F170_00001B00:
    cmpwi r0, 0x0
    bne lbl_fn_8059F170_00001B10
    li r3, 0x0
    b lbl_fn_8059F170_00001BBC
lbl_fn_8059F170_00001B10:
    lwz r24, 0x10(r1)
    lwz r4, 0x8(r1)
    mulli r5, r24, 0xd0
    add r3, r5, r4
    addi r0, r3, 0x3
    clrrwi r23, r0, 2
    subf. r0, r31, r23
    ble lbl_fn_8059F170_00001B38
    li r0, 0x0
    b lbl_fn_8059F170_00001B68
lbl_fn_8059F170_00001B38:
    addi r3, r27, 0xbc
    bl fn_807107B0
    cmplw r3, r24
    beq lbl_fn_8059F170_00001B60
    lis r3, lbl_80762810@ha
    li r4, 0x278
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x1c4
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001B60:
    stw r23, 0x8(r1)
    li r0, 0x1
lbl_fn_8059F170_00001B68:
    cmpwi r0, 0x0
    bne lbl_fn_8059F170_00001B78
    li r3, 0x0
    b lbl_fn_8059F170_00001BBC
lbl_fn_8059F170_00001B78:
    mr r3, r27
    mr r4, r28
    bl fn_8059EF94
    lwz r0, 0x8(r1)
    subf r0, r29, r0
    cmplw r0, r3
    beq lbl_fn_8059F170_00001BAC
    lis r3, lbl_80762810@ha
    li r4, 0x15f
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F170_00001BAC:
    stw r28, 0x10(r27)
    li r3, 0x1
    stw r29, 0xe4(r27)
    stw r30, 0xe8(r27)
lbl_fn_8059F170_00001BBC:
    lmw r22, 0x28(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
