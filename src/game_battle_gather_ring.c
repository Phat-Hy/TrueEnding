#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80056DB8(void);
extern void fn_80056E40(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092814(void);
extern void fn_80092A00(void);
extern void fn_80092F1C(void);
extern void fn_80095D44(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800DC288(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_802180A8(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_803EBE74(void);
extern void fn_803EC0F8(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803EDB18(void);
extern void fn_803F42C8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80752138[];
extern u8 lbl_8075215C[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80777668[];
extern u8 lbl_8078CB98[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF38;
extern u32 lbl_8087DF3C;
extern u32 lbl_8087DF40;
extern u32 lbl_8087DF44;
extern u32 lbl_8087DF48;
extern u32 lbl_8087DF4C;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885FB0;
extern u32 lbl_80885FB4;
extern u32 lbl_80885FB8;
extern u32 lbl_80885FBC;
extern u32 lbl_80885FC0;
extern u32 lbl_80885FC4;

/* Function declarations */
void fn_803F1A38(void);
void fn_803F1BB4(void);
void fn_803F1C38(void);
void fn_803F1DA4(void);
void fn_803F1E18(void);
void fn_803F1E8C(void);
void fn_803F2044(void);
void fn_803F2110(void);
void fn_803F2344(void);
void fn_803F2BA0(void);
void fn_803F2C1C(void);
void fn_803F2CD0(void);
void fn_803F3334(void);
void fn_803F3360(void);
void fn_803F3374(void);

asm void fn_803F1A38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    beq lbl_fn_803F1A38_0000005C
    addi r27, r3, 0x60
    b lbl_fn_803F1A38_00000038
lbl_fn_803F1A38_00000024:
    addi r3, r27, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    addi r27, r27, 0x10
lbl_fn_803F1A38_00000038:
    lwz r0, 0x5c(r30)
    slwi r0, r0, 4
    add r3, r30, r0
    addi r0, r3, 0x60
    cmplw r27, r0
    bne lbl_fn_803F1A38_00000024
    li r0, 0x0
    stw r0, 0x5c(r30)
    b lbl_fn_803F1A38_00000160
lbl_fn_803F1A38_0000005C:
    addi r31, r3, 0x60
    b lbl_fn_803F1A38_00000148
lbl_fn_803F1A38_00000064:
    lwz r3, 0x0(r31)
    lwz r0, 0x44(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803F1A38_00000084
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803F1A38_00000144
lbl_fn_803F1A38_00000084:
    addi r3, r31, 0xc
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    addi r0, r30, 0x60
    subf r0, r0, r31
    srawi r0, r0, 4
    addze r29, r0
    slwi r0, r29, 4
    add r28, r30, r0
    addi r27, r28, 0x60
    b lbl_fn_803F1A38_000000F0
lbl_fn_803F1A38_000000B4:
    lwz r3, 0x70(r28)
    addi r0, r29, 0x1
    stw r3, 0x60(r28)
    slwi r0, r0, 4
    add r4, r30, r0
    addi r3, r27, 0xc
    lwz r0, 0x74(r28)
    addi r4, r4, 0x6c
    stw r0, 0x64(r28)
    lwz r0, 0x78(r28)
    stw r0, 0x68(r28)
    bl fn_800CB440
    addi r28, r28, 0x10
    addi r27, r27, 0x10
    addi r29, r29, 0x1
lbl_fn_803F1A38_000000F0:
    lwz r3, 0x5c(r30)
    subi r0, r3, 0x1
    cmplw r29, r0
    blt lbl_fn_803F1A38_000000B4
    stw r0, 0x5c(r30)
    mr r5, r31
    b lbl_fn_803F1A38_00000128
lbl_fn_803F1A38_0000010C:
    lwz r4, 0xc(r5)
    cmpwi r4, 0x0
    beq lbl_fn_803F1A38_00000124
    lwz r3, 0xa4(r4)
    subi r0, r3, 0x1
    stw r0, 0xa4(r4)
lbl_fn_803F1A38_00000124:
    addi r5, r5, 0x10
lbl_fn_803F1A38_00000128:
    lwz r0, 0x5c(r30)
    slwi r0, r0, 4
    add r3, r30, r0
    addi r0, r3, 0x60
    cmplw r5, r0
    bne lbl_fn_803F1A38_0000010C
    b lbl_fn_803F1A38_00000148
lbl_fn_803F1A38_00000144:
    addi r31, r31, 0x10
lbl_fn_803F1A38_00000148:
    lwz r0, 0x5c(r30)
    slwi r0, r0, 4
    add r3, r30, r0
    addi r0, r3, 0x60
    cmplw r31, r0
    bne lbl_fn_803F1A38_00000064
lbl_fn_803F1A38_00000160:
    li r0, 0x0
    stw r0, 0x4c(r30)
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F1BB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803F1BB4_000001E0
    lis r5, lbl_8075215C@ha
    li r3, 0xac8
    addi r5, r5, lbl_8075215C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803F1BB4_000001E4
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_803F1C38
    b lbl_fn_803F1BB4_000001E4
lbl_fn_803F1BB4_000001E0:
    li r3, 0x0
lbl_fn_803F1BB4_000001E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F1C38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_803EC568
    lis r4, lbl_8078CB98@ha
    addi r3, r29, 0xf4
    addi r4, r4, lbl_8078CB98@l
    stw r4, 0x0(r29)
    bl fn_80057F28
    addi r3, r29, 0x17c
    bl fn_80057F28
    lfs f0, lbl_80885FB0
    li r31, 0x0
    addi r30, r29, 0x214
    stfs f0, 0x204(r29)
    mr r3, r30
    li r4, 0x0
    stfs f0, 0x208(r29)
    stw r31, 0x20c(r29)
    stw r31, 0x210(r29)
    bl fn_80056DB8
    lis r3, lbl_80777668@ha
    stw r31, 0x288(r29)
    addi r3, r3, lbl_80777668@l
    li r4, 0x8
    stw r3, 0x0(r30)
    addi r3, r29, 0x28c
    li r5, 0x20
    bl fn_80096E94
    addi r3, r29, 0x65c
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r29, 0xa2c
    bl fn_802377B8
    addi r3, r29, 0xa38
    bl fn_802377B8
    addi r3, r29, 0xa44
    bl fn_802377B8
    lfs f1, lbl_80885FB4
    addi r3, r29, 0x260
    lfs f0, lbl_80885FB0
    li r4, 0x0
    stw r31, 0xa50(r29)
    li r5, 0x28
    stfs f1, 0xa54(r29)
    stw r31, 0xa58(r29)
    stw r31, 0xa5c(r29)
    stw r31, 0xa60(r29)
    stfs f0, 0xa64(r29)
    stw r31, 0xa68(r29)
    stw r31, 0xa6c(r29)
    stw r31, 0xa70(r29)
    stw r31, 0xa74(r29)
    stw r31, 0xa78(r29)
    stw r31, 0xa7c(r29)
    stw r31, 0xa80(r29)
    stw r31, 0xa84(r29)
    stw r31, 0xa88(r29)
    stw r31, 0xa8c(r29)
    stw r31, 0xa90(r29)
    stw r31, 0xa94(r29)
    stw r31, 0xa98(r29)
    stw r31, 0xa9c(r29)
    stw r31, 0xaa0(r29)
    stb r31, 0xaa4(r29)
    stw r31, 0x54(r29)
    bl memset
    lwz r0, 0x48(r29)
    lis r3, 0x8
    addi r3, r3, 0x8f8
    cmpwi r0, 0x456
    bne lbl_fn_803F1C38_00000338
    ori r3, r3, 0x6
lbl_fn_803F1C38_00000338:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_803F1C38_00000348
    ori r3, r3, 0x4
lbl_fn_803F1C38_00000348:
    stw r3, 0x234(r29)
    mr r3, r29
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F1DA4(void)
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
    beq lbl_fn_803F1DA4_000003C4
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803F1DA4_000003A8
    beq lbl_fn_803F1DA4_000003A8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803F1DA4_000003A8:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
    ble lbl_fn_803F1DA4_000003C4
    mr r3, r30
    bl dtor_80084684
lbl_fn_803F1DA4_000003C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F1E18(void)
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
    beq lbl_fn_803F1E18_00000438
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803F1E18_0000041C
    beq lbl_fn_803F1E18_0000041C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803F1E18_0000041C:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
    ble lbl_fn_803F1E18_00000438
    mr r3, r30
    bl dtor_80084684
lbl_fn_803F1E18_00000438:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F1E8C(void)
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
    beq lbl_fn_803F1E8C_000005EC
    addic. r0, r3, 0xa7c
    beq lbl_fn_803F1E8C_000004A8
    lwz r3, 0xa80(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803F1E8C_0000049C
    beq lbl_fn_803F1E8C_0000049C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803F1E8C_0000049C:
    li r0, 0x0
    stw r0, 0xa80(r29)
    stw r0, 0xa7c(r29)
lbl_fn_803F1E8C_000004A8:
    addic. r0, r29, 0xa74
    beq lbl_fn_803F1E8C_000004D4
    lwz r3, 0xa78(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803F1E8C_000004C8
    beq lbl_fn_803F1E8C_000004C8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803F1E8C_000004C8:
    li r0, 0x0
    stw r0, 0xa78(r29)
    stw r0, 0xa74(r29)
lbl_fn_803F1E8C_000004D4:
    addic. r0, r29, 0xa6c
    beq lbl_fn_803F1E8C_00000500
    lwz r3, 0xa70(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803F1E8C_000004F4
    beq lbl_fn_803F1E8C_000004F4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803F1E8C_000004F4:
    li r0, 0x0
    stw r0, 0xa70(r29)
    stw r0, 0xa6c(r29)
lbl_fn_803F1E8C_00000500:
    addic. r31, r29, 0xa44
    beq lbl_fn_803F1E8C_00000520
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803F1E8C_00000520
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F1E8C_00000520:
    addic. r31, r29, 0xa38
    beq lbl_fn_803F1E8C_00000540
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803F1E8C_00000540
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F1E8C_00000540:
    addic. r31, r29, 0xa2c
    beq lbl_fn_803F1E8C_00000560
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803F1E8C_00000560
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F1E8C_00000560:
    addi r3, r29, 0x65c
    li r4, -0x1
    bl fn_800971D4
    addi r3, r29, 0x28c
    li r4, -0x1
    bl fn_800971D4
    addic. r3, r29, 0x214
    beq lbl_fn_803F1E8C_00000588
    li r4, 0x0
    bl fn_80056E40
lbl_fn_803F1E8C_00000588:
    addic. r31, r29, 0x17c
    beq lbl_fn_803F1E8C_000005AC
    addic. r3, r31, 0x3c
    beq lbl_fn_803F1E8C_000005A0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F1E8C_000005A0:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_803F1E8C_000005AC:
    addic. r31, r29, 0xf4
    beq lbl_fn_803F1E8C_000005D0
    addic. r3, r31, 0x3c
    beq lbl_fn_803F1E8C_000005C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803F1E8C_000005C4:
    mr r3, r31
    li r4, 0x0
    bl fn_80056E40
lbl_fn_803F1E8C_000005D0:
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_803F1E8C_000005EC
    mr r3, r29
    bl dtor_80084684
lbl_fn_803F1E8C_000005EC:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803F2044(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_803F2044_000006C0
    lwz r0, 0x284(r31)
    lwz r3, 0x21c(r31)
    cmpwi r0, 0x0
    stw r31, 0x220(r31)
    ori r0, r3, 0x8
    stw r0, 0x21c(r31)
    beq lbl_fn_803F2044_00000650
    clrrwi r0, r0, 1
    stw r0, 0x21c(r31)
lbl_fn_803F2044_00000650:
    mr r3, r31
    addi r4, r31, 0x65c
    bl fn_803EDB18
    mr r3, r31
    addi r4, r31, 0x28c
    bl fn_803EDB18
    addi r3, r31, 0xaa4
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803F2044_000006B8
    lwz r0, 0x33c(r31)
    cmpwi r0, 0x0
    bge lbl_fn_803F2044_000006B8
    addi r3, r31, 0x28c
    addi r4, r31, 0xaa4
    li r5, 0x0
    bl fn_80092814
    mr r4, r3
    addi r3, r31, 0x28c
    li r5, -0x1
    bl fn_80095D44
    lwz r0, 0x48(r31)
    cmpwi r0, 0x3f2
    bne lbl_fn_803F2044_000006B8
    lfs f0, lbl_80885FB8
    stfs f0, 0x338(r31)
lbl_fn_803F2044_000006B8:
    li r3, 0x1
    b lbl_fn_803F2044_000006C4
lbl_fn_803F2044_000006C0:
    li r3, 0x0
lbl_fn_803F2044_000006C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F2110(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F2110_00000740
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F2110_00000740:
    addi r3, r30, 0xf4
    psq_l f1, 0x664(r30), 0, 0
    addi r31, r1, 0x60
    psq_l f2, 0x66c(r30), 0, 0
    psq_l f3, 0x674(r30), 0, 0
    psq_l f4, 0x67c(r30), 0, 0
    psq_l f5, 0x684(r30), 0, 0
    psq_l f6, 0x68c(r30), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    addi r3, r30, 0x17c
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lfs f8, 0x8c(r1)
    addi r3, r1, 0x90
    lfs f7, 0x7c(r1)
    li r4, 0x79
    lfs f0, 0x6c(r1)
    lfs f1, 0x7c(r30)
    stfs f0, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f8, 0x20(r1)
    bl fn_805F8E70
    psq_l f1, 0x260(r30), 0, 0
    addi r4, r1, 0x30
    lfs f2, 0x268(r30)
    mr r5, r4
    stfs f2, 0x38(r1)
    addi r3, r1, 0x90
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f8, 0x20(r1)
    addi r4, r1, 0x24
    lfs f0, 0x38(r1)
    li r3, 0x1
    lfs f7, 0x278(r30)
    li r0, 0x0
    fadds f11, f8, f0
    lfs f10, 0x1c(r1)
    lfs f0, 0x34(r1)
    addi r5, r1, 0x8
    lfs f8, 0x30(r1)
    fadds f10, f10, f0
    lfs f9, 0x18(r1)
    fmr f2, f11
    stfs f10, 0x28(r1)
    fadds f8, f9, f8
    lfs f0, lbl_80885FB0
    stfs f2, 0x10(r1)
    frsp f2, f2
    stfs f8, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x25c(r30)
    psq_st f1, 0x250(r30), 0, 0
    stfs f2, 0x258(r30)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    lwz r0, 0x58(r30)
    stfs f11, 0x2c(r1)
    cmpwi r0, 0x1
    psq_st f1, 0x0(r5), 0, 0
    stfs f7, 0x14(r1)
    bne lbl_fn_803F2110_000008B8
    li r0, 0x7
    stw r0, 0x40(r1)
    b lbl_fn_803F2110_000008DC
lbl_fn_803F2110_000008B8:
    cmpwi r0, 0x2
    bne lbl_fn_803F2110_000008CC
    li r0, 0x8
    stw r0, 0x40(r1)
    b lbl_fn_803F2110_000008DC
lbl_fn_803F2110_000008CC:
    cmpwi r0, 0x3
    bne lbl_fn_803F2110_000008DC
    li r0, 0x6
    stw r0, 0x40(r1)
lbl_fn_803F2110_000008DC:
    lwz r12, 0x0(r30)
    mr r3, r30
    addi r4, r1, 0x40
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_803F2344(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    lis r0, 0x4330
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    mr r31, r3
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    stw r28, 0x120(r1)
    lwz r4, 0x54(r3)
    stw r0, 0x110(r1)
    cmpwi r4, 0x7
    stw r0, 0x118(r1)
    beq lbl_fn_803F2344_00001140
    cmpwi r4, 0x0
    bne lbl_fn_803F2344_000009B8
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    lwz r3, 0x27c(r31)
    li r5, 0x0
    stw r5, 0xa60(r31)
    li r0, 0x3e9
    addi r3, r3, 0x1
    lfs f0, lbl_80885FB0
    stw r3, 0x27c(r31)
    mr r3, r31
    addi r4, r1, 0x90
    stw r0, 0x90(r1)
    stw r5, 0x94(r1)
    stw r5, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r5, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803F2344_000009B8:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    bne lbl_fn_803F2344_00000A28
    lfs f0, lbl_80885FB0
    li r0, 0x0
    li r3, 0x3
    stw r3, 0x70(r1)
    mr r3, r31
    addi r4, r1, 0x70
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r0, 0x3e8
    stw r0, 0x70(r1)
    mr r3, r31
    addi r4, r1, 0x70
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_803F2344_00000A28:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F2344_00000A68
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_803F2344_00000A68:
    addi r3, r31, 0xf4
    psq_l f1, 0x664(r31), 0, 0
    addi r30, r1, 0xb0
    psq_l f2, 0x66c(r31), 0, 0
    psq_l f3, 0x674(r31), 0, 0
    psq_l f4, 0x67c(r31), 0, 0
    psq_l f5, 0x684(r31), 0, 0
    psq_l f6, 0x68c(r31), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    addi r3, r31, 0x17c
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lfs f8, 0xdc(r1)
    addi r3, r1, 0xe0
    lfs f7, 0xcc(r1)
    li r4, 0x79
    lfs f0, 0xbc(r1)
    lfs f1, 0x7c(r31)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F8E70
    psq_l f1, 0x260(r31), 0, 0
    addi r4, r1, 0x38
    lfs f2, 0x268(r31)
    mr r5, r4
    stfs f2, 0x40(r1)
    addi r3, r1, 0xe0
    psq_st f1, 0x0(r4), 0, 0
    bl fn_805F93C0
    lfs f7, 0x28(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x40(r1)
    addi r4, r1, 0x10
    lfs f10, 0x24(r1)
    fadds f2, f7, f0
    lfs f9, 0x3c(r1)
    lfs f8, 0x20(r1)
    lfs f7, 0x38(r1)
    fadds f9, f10, f9
    lwz r0, 0xa84(r31)
    fadds f7, f8, f7
    stfs f9, 0x30(r1)
    lfs f0, 0x278(r31)
    cmpwi r0, 0x0
    stfs f7, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    stfs f2, 0x18(r1)
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, 0x1c(r1)
    psq_st f1, 0x250(r31), 0, 0
    stfs f2, 0x258(r31)
    stfs f0, 0x25c(r31)
    beq lbl_fn_803F2344_00000C38
    lwz r0, 0xa88(r31)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803F2344_00000BD4
    lwz r3, 0xa90(r31)
    lwz r0, 0xa8c(r31)
    cmpw r3, r0
    bge lbl_fn_803F2344_00000BEC
    addi r0, r3, 0x1
    stw r0, 0xa90(r31)
    li r4, 0x1
    b lbl_fn_803F2344_00000BEC
lbl_fn_803F2344_00000BD4:
    lwz r3, 0xa90(r31)
    cmpwi r3, 0x0
    ble lbl_fn_803F2344_00000BEC
    subi r0, r3, 0x1
    stw r0, 0xa90(r31)
    li r4, 0x1
lbl_fn_803F2344_00000BEC:
    cmpwi r4, 0x0
    beq lbl_fn_803F2344_00000C38
    lwz r3, 0xa90(r31)
    lis r4, lbl_80752138@ha
    lwz r0, 0xa8c(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x114(r1)
    xoris r0, r0, 0x8000
    lfd f9, lbl_80752138@l(r4)
    stw r0, 0x11c(r1)
    lfd f0, 0x110(r1)
    lfd f7, 0x118(r1)
    fsubs f8, f0, f9
    lfs f0, lbl_80885FBC
    fsubs f7, f7, f9
    lwz r3, 0xa84(r31)
    fdivs f7, f8, f7
    fsubs f1, f0, f7
    bl fn_80092A00
lbl_fn_803F2344_00000C38:
    lwz r0, 0xa94(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F2344_00000CD8
    lwz r0, 0xa98(r31)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803F2344_00000C74
    lwz r3, 0xaa0(r31)
    lwz r0, 0xa9c(r31)
    cmpw r3, r0
    bge lbl_fn_803F2344_00000C8C
    addi r0, r3, 0x1
    stw r0, 0xaa0(r31)
    li r4, 0x1
    b lbl_fn_803F2344_00000C8C
lbl_fn_803F2344_00000C74:
    lwz r3, 0xaa0(r31)
    cmpwi r3, 0x0
    ble lbl_fn_803F2344_00000C8C
    subi r0, r3, 0x1
    stw r0, 0xaa0(r31)
    li r4, 0x1
lbl_fn_803F2344_00000C8C:
    cmpwi r4, 0x0
    beq lbl_fn_803F2344_00000CD8
    lwz r3, 0xaa0(r31)
    lis r4, lbl_80752138@ha
    lwz r0, 0xa9c(r31)
    xoris r3, r3, 0x8000
    stw r3, 0x114(r1)
    xoris r0, r0, 0x8000
    lfd f9, lbl_80752138@l(r4)
    stw r0, 0x11c(r1)
    lfd f0, 0x110(r1)
    lfd f7, 0x118(r1)
    fsubs f8, f0, f9
    lfs f0, lbl_80885FBC
    fsubs f7, f7, f9
    lwz r3, 0xa94(r31)
    fdivs f7, f8, f7
    fsubs f1, f0, f7
    bl fn_80092A00
lbl_fn_803F2344_00000CD8:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x1
    beq lbl_fn_803F2344_00000CEC
    cmpwi r0, 0x8
    bne lbl_fn_803F2344_00000D70
lbl_fn_803F2344_00000CEC:
    addi r3, r31, 0x65c
    li r4, 0x2
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_803F2344_00000D3C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F2344_00000D3C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_803F2344_00000D3C:
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_803F2344_00000D60
lbl_fn_803F2344_00000D48:
    lwz r0, 0xa80(r31)
    addi r4, r31, 0x65c
    add r3, r0, r29
    bl fn_803F42C8
    addi r29, r29, 0x1c
    addi r30, r30, 0x1
lbl_fn_803F2344_00000D60:
    lwz r0, 0xa7c(r31)
    cmplw r30, r0
    blt lbl_fn_803F2344_00000D48
    b lbl_fn_803F2344_00001140
lbl_fn_803F2344_00000D70:
    cmpwi r0, 0x3
    bne lbl_fn_803F2344_00000E68
    addi r3, r31, 0x65c
    li r4, 0x1
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_803F2344_00000DC8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F2344_00000DC8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_803F2344_00000DC8:
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_803F2344_00000DEC
lbl_fn_803F2344_00000DD4:
    lwz r0, 0xa80(r31)
    addi r4, r31, 0x65c
    add r3, r0, r29
    bl fn_803F42C8
    addi r29, r29, 0x1c
    addi r30, r30, 0x1
lbl_fn_803F2344_00000DEC:
    lwz r0, 0xa7c(r31)
    cmplw r30, r0
    blt lbl_fn_803F2344_00000DD4
    lwz r0, 0xa68(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803F2344_00001140
    lwz r3, 0xa60(r31)
    lwz r0, 0xa5c(r31)
    addi r3, r3, 0x1
    stw r3, 0xa60(r31)
    cmpw r3, r0
    blt lbl_fn_803F2344_00001140
    lfs f0, lbl_80885FB0
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x50(r1)
    mr r3, r31
    addi r4, r1, 0x50
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_803F2344_00001140
lbl_fn_803F2344_00000E68:
    cmpwi r0, 0x4
    blt lbl_fn_803F2344_00001084
    cmpwi r0, 0x6
    bge lbl_fn_803F2344_00001084
    lwz r0, 0xfc(r31)
    lfs f31, 0x4c0(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803F2344_00000F68
    lfs f0, 0x204(r31)
    fcmpo cr0, f0, f31
    bge lbl_fn_803F2344_00000F68
    lwz r3, 0xfc(r31)
    li r0, 0x5
    stw r0, 0x54(r31)
    clrrwi r0, r3, 1
    lfs f7, 0x680(r31)
    stw r0, 0xfc(r31)
    lfs f0, lbl_80885FC0
    lwz r4, lbl_8087F048
    fadds f0, f7, f0
    lfs f7, 0x690(r31)
    lfs f8, 0x670(r31)
    cmpwi r4, 0x0
    stfs f8, 0x44(r1)
    stfs f7, 0x4c(r1)
    stfs f0, 0x48(r1)
    beq lbl_fn_803F2344_00000F68
    lwz r0, 0xa50(r31)
    cmpwi r0, 0x0
    ble lbl_fn_803F2344_00000F68
    lwz r0, 0xa58(r31)
    li r28, 0x0
    cmpwi r0, 0x1
    bne lbl_fn_803F2344_00000EFC
    lwz r3, lbl_8087F8A0
    lwz r28, 0x48(r3)
lbl_fn_803F2344_00000EFC:
    addis r3, r4, 0x4
    li r0, 0x1
    stw r0, -0x1c64(r3)
    lwz r29, lbl_8087F048
    mr r3, r29
    bl fn_800F8548
    mr r30, r3
    lwz r3, 0xa50(r31)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f2, lbl_80885FBC
    stw r0, 0xc(r1)
    mr r3, r29
    mr r4, r28
    mr r6, r30
    lfs f1, 0xa54(r31)
    addi r7, r1, 0x44
    addi r8, r31, 0x78
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, lbl_8087F048
    li r0, 0x0
    addis r3, r3, 0x4
    stw r0, -0x1c64(r3)
lbl_fn_803F2344_00000F68:
    lwz r0, 0x184(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803F2344_00000FAC
    lfs f0, 0x208(r31)
    fcmpo cr0, f0, f31
    bge lbl_fn_803F2344_00000FAC
    lwz r0, 0x210(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F2344_00000FA0
    lwz r0, 0x184(r31)
    ori r0, r0, 0x1
    stw r0, 0x184(r31)
    b lbl_fn_803F2344_00000FAC
lbl_fn_803F2344_00000FA0:
    lwz r0, 0x184(r31)
    clrrwi r0, r0, 1
    stw r0, 0x184(r31)
lbl_fn_803F2344_00000FAC:
    addi r3, r31, 0x28c
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803F2344_00000FE4
    lwz r0, 0xa68(r31)
    li r3, 0x6
    stw r3, 0x54(r31)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803F2344_00000FE4
    lfs f0, lbl_80885FC4
    stfs f0, 0xa64(r31)
lbl_fn_803F2344_00000FE4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F2344_00001020
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_803F2344_00001020:
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_803F2344_00001044
lbl_fn_803F2344_0000102C:
    lwz r0, 0xa70(r31)
    addi r4, r31, 0x28c
    add r3, r0, r29
    bl fn_803EBE74
    addi r29, r29, 0x1c
    addi r30, r30, 0x1
lbl_fn_803F2344_00001044:
    lwz r0, 0xa6c(r31)
    cmplw r30, r0
    blt lbl_fn_803F2344_0000102C
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_803F2344_00001074
lbl_fn_803F2344_0000105C:
    lwz r0, 0xa78(r31)
    addi r4, r31, 0x28c
    add r3, r0, r29
    bl fn_803EC0F8
    addi r29, r29, 0x8
    addi r30, r30, 0x1
lbl_fn_803F2344_00001074:
    lwz r0, 0xa74(r31)
    cmplw r30, r0
    blt lbl_fn_803F2344_0000105C
    b lbl_fn_803F2344_00001140
lbl_fn_803F2344_00001084:
    cmpwi r0, 0x6
    bne lbl_fn_803F2344_00001140
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_803F2344_000010B0
lbl_fn_803F2344_00001098:
    lwz r0, 0xa70(r31)
    addi r4, r31, 0x28c
    add r3, r0, r29
    bl fn_803EBE74
    addi r29, r29, 0x1c
    addi r30, r30, 0x1
lbl_fn_803F2344_000010B0:
    lwz r0, 0xa6c(r31)
    cmplw r30, r0
    blt lbl_fn_803F2344_00001098
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_803F2344_000010E0
lbl_fn_803F2344_000010C8:
    lwz r0, 0xa78(r31)
    addi r4, r31, 0x28c
    add r3, r0, r29
    bl fn_803EC0F8
    addi r29, r29, 0x8
    addi r30, r30, 0x1
lbl_fn_803F2344_000010E0:
    lwz r0, 0xa74(r31)
    cmplw r30, r0
    blt lbl_fn_803F2344_000010C8
    lwz r0, 0xa68(r31)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803F2344_00001140
    lfs f7, 0xa64(r31)
    lfs f0, lbl_80885FB0
    fcmpo cr0, f7, f0
    ble lbl_fn_803F2344_0000111C
    lfs f0, lbl_80885FBC
    fsubs f0, f7, f0
    stfs f0, 0xa64(r31)
    b lbl_fn_803F2344_00001140
lbl_fn_803F2344_0000111C:
    lwz r0, 0x498(r31)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    bne lbl_fn_803F2344_00001140
    lwz r0, 0x9c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803F2344_00001140
    li r0, 0x0
    stw r0, 0x9c(r31)
lbl_fn_803F2344_00001140:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_803F2BA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x7
    beq lbl_fn_803F2BA0_000011D0
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803F2BA0_000011D0
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803F2BA0_000011D0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_803F2BA0_000011D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F2C1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x28c
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_803F2C1C_00001218
    addi r3, r31, 0x65c
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_803F2C1C_00001220
lbl_fn_803F2C1C_00001218:
    li r3, 0x1
    b lbl_fn_803F2C1C_00001284
lbl_fn_803F2C1C_00001220:
    addi r3, r31, 0xa44
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_803F2C1C_00001250
    addi r3, r31, 0xa2c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_803F2C1C_00001250
    addi r3, r31, 0xa38
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_803F2C1C_00001258
lbl_fn_803F2C1C_00001250:
    li r3, 0x1
    b lbl_fn_803F2C1C_00001284
lbl_fn_803F2C1C_00001258:
    addi r3, r31, 0xf4
    bl fn_800580BC
    cmpwi r3, 0x0
    bne lbl_fn_803F2C1C_00001278
    addi r3, r31, 0x17c
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_803F2C1C_00001280
lbl_fn_803F2C1C_00001278:
    li r3, 0x1
    b lbl_fn_803F2C1C_00001284
lbl_fn_803F2C1C_00001280:
    li r3, 0x0
lbl_fn_803F2C1C_00001284:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F2CD0(void)
{
    nofralloc
    stwu r1, -0x760(r1)
    mflr r0
    stw r0, 0x764(r1)
    addi r11, r1, 0x760
    bl _savegpr_25
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r28, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r27, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r27
    mr r5, r28
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r27, lbl_8075215C@ha
    li r25, 0x0
    addi r27, r27, lbl_8075215C@l
    li r31, 0x0
    li r30, 0x0
    li r28, 0x1
lbl_fn_803F2CD0_00001354:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r26, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803F2CD0_0000179C
    addi r4, r27, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_000013A8
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x65c
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0x65c
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_000013A8:
    mr r3, r26
    addi r4, r27, 0xe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_000013F0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r29, 0x65c
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_000013F0:
    mr r3, r26
    addi r4, r27, 0x1f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001430
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x28c
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r29
    addi r4, r29, 0x28c
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001430:
    mr r3, r26
    addi r4, r27, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001478
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r29, 0x28c
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001478:
    mr r3, r26
    addi r4, r27, 0x3b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_000014C0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0x28c
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_000014C0:
    mr r3, r26
    addi r4, r27, 0x42
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001508
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0x65c
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001508:
    mr r3, r26
    addi r4, r27, 0x50
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001550
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0x65c
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001550:
    mr r3, r26
    addi r4, r27, 0x5c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001590
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x204(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    bl fn_80058078
    stw r28, 0x20c(r29)
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001590:
    mr r3, r26
    addi r4, r27, 0x6d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_000015D0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x208(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0x17c
    bl fn_80058078
    stw r28, 0x210(r29)
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_000015D0:
    mr r3, r26
    addi r4, r27, 0x7d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_000015FC
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xa2c
    bl fn_8023780C
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_000015FC:
    mr r3, r26
    addi r4, r27, 0x81
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001628
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xa38
    bl fn_8023780C
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001628:
    mr r3, r26
    addi r4, r27, 0x8c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001654
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xa44
    bl fn_8023780C
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001654:
    mr r3, r26
    addi r4, r27, 0x95
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001704
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x260(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x264(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x268(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x278(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x27c(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x280(r29)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    addi r4, r27, 0xa6
    bl fn_80682428
    cntlzw r0, r3
    lfs f0, 0x278(r29)
    psq_l f1, 0x260(r29), 0, 0
    srwi r0, r0, 5
    lfs f2, 0x268(r29)
    stw r0, 0x284(r29)
    psq_st f1, 0x250(r29), 0, 0
    stfs f2, 0x258(r29)
    stfs f0, 0x25c(r29)
    stw r28, 0x288(r29)
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001704:
    mr r3, r26
    addi r4, r27, 0xb2
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_0000174C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    addi r0, r29, 0xaa4
    mr r26, r3
    cmplw r3, r0
    beq lbl_fn_803F2CD0_0000179C
    bl strlen
    mr r5, r3
    mr r4, r26
    addi r3, r29, 0xaa4
    addi r5, r5, 0x1
    bl memcpy
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_0000174C:
    mr r3, r26
    addi r4, r27, 0xc4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001768
    addi r25, r25, 0x1
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001768:
    mr r3, r26
    addi r4, r27, 0xcd
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001784
    addi r31, r31, 0x1
    b lbl_fn_803F2CD0_0000179C
lbl_fn_803F2CD0_00001784:
    mr r3, r26
    addi r4, r27, 0xd5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_0000179C
    addi r30, r30, 0x1
lbl_fn_803F2CD0_0000179C:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803F2CD0_00001354
    lwz r3, 0xa70(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803F2CD0_000017C4
    beq lbl_fn_803F2CD0_000017C4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803F2CD0_000017C4:
    cmpwi r25, 0x0
    stw r25, 0xa6c(r29)
    beq lbl_fn_803F2CD0_0000180C
    mulli r3, r25, 0x1c
    li r4, 0x1
    la r5, lbl_8087DF4C
    la r6, lbl_8087DF48
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3334@ha
    mr r7, r25
    addi r4, r4, fn_803F3334@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    stw r3, 0xa70(r29)
    b lbl_fn_803F2CD0_00001814
lbl_fn_803F2CD0_0000180C:
    li r0, 0x0
    stw r0, 0xa70(r29)
lbl_fn_803F2CD0_00001814:
    lwz r3, 0xa78(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803F2CD0_0000182C
    beq lbl_fn_803F2CD0_0000182C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803F2CD0_0000182C:
    cmpwi r31, 0x0
    stw r31, 0xa74(r29)
    beq lbl_fn_803F2CD0_00001874
    slwi r3, r31, 3
    li r4, 0x1
    addi r3, r3, 0x10
    la r5, lbl_8087DF44
    la r6, lbl_8087DF40
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3360@ha
    mr r7, r31
    addi r4, r4, fn_803F3360@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0xa78(r29)
    b lbl_fn_803F2CD0_0000187C
lbl_fn_803F2CD0_00001874:
    li r0, 0x0
    stw r0, 0xa78(r29)
lbl_fn_803F2CD0_0000187C:
    lwz r3, 0xa80(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803F2CD0_00001894
    beq lbl_fn_803F2CD0_00001894
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_803F2CD0_00001894:
    cmpwi r30, 0x0
    stw r30, 0xa7c(r29)
    beq lbl_fn_803F2CD0_000018DC
    mulli r3, r30, 0x1c
    li r4, 0x1
    la r5, lbl_8087DF3C
    la r6, lbl_8087DF38
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3374@ha
    mr r7, r30
    addi r4, r4, fn_803F3374@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    stw r3, 0xa80(r29)
    b lbl_fn_803F2CD0_000018E4
lbl_fn_803F2CD0_000018DC:
    li r0, 0x0
    stw r0, 0xa80(r29)
lbl_fn_803F2CD0_000018E4:
    addi r11, r1, 0x760
    bl _restgpr_25
    lwz r0, 0x764(r1)
    mtlr r0
    addi r1, r1, 0x760
    blr
}

asm void fn_803F3334(void)
{
    nofralloc
    lfs f0, lbl_80885FBC
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r4, 0x18(r3)
    blr
}

asm void fn_803F3360(void)
{
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_803F3374(void)
{
    nofralloc
    lfs f0, lbl_80885FB0
    li r0, -0x1
    lfs f1, lbl_80885FBC
    li r4, 0x0
    stw r4, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    blr
}
