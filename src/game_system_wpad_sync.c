#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_800144FC(void);
extern void fn_80047B54(void);
extern void fn_8004829C(void);
extern void fn_8004895C(void);
extern void fn_80049654(void);
extern void fn_800498D4(void);
extern void fn_8004B338(void);
extern void fn_800697D8(void);
extern void fn_8006A250(void);
extern void fn_8006A5A8(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_800A5B30(void);
extern void fn_800AFEBC(void);
extern void fn_800C16B4(void);
extern void fn_800C289C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CDF84(void);
extern void fn_800CE368(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800EF588(void);
extern void fn_800EF8DC(void);
extern void fn_800EFF68(void);
extern void fn_800F13BC(void);
extern void fn_800F2C9C(void);
extern void fn_80119ECC(void);
extern void fn_8012AFE8(void);
extern void fn_801823A8(void);
extern void fn_801839FC(void);
extern void fn_801E9398(void);
extern void fn_802085E0(void);
extern void fn_80208634(void);
extern void fn_80212790(void);
extern void fn_80218720(void);
extern void fn_80239798(void);
extern void fn_8023A678(void);
extern void fn_80334B38(void);
extern void fn_8035DF48(void);
extern void fn_80378474(void);
extern void fn_8037C8C4(void);
extern void fn_8037D8B8(void);
extern void fn_8037DC68(void);
extern void fn_803B3C10(void);
extern void fn_803B8C6C(void);
extern void fn_803BAA90(void);
extern void fn_803CD9A8(void);
extern void fn_803CE148(void);
extern void fn_803CE154(void);
extern void fn_803CE160(void);
extern void fn_803CE4B0(void);
extern void fn_803CE910(void);
extern void fn_803D022C(void);
extern void fn_803D0B20(void);
extern void fn_803E836C(void);
extern void fn_803EDFBC(void);
extern void fn_80442F10(void);
extern void fn_80442F68(void);
extern void fn_8046F96C(void);
extern void fn_8047043C(void);
extern void fn_80470528(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F88(void);
extern void fn_8047E4BC(void);
extern void fn_80490EB8(void);
extern void fn_804A1DDC(void);
extern void fn_804A29C4(void);
extern void fn_8052A88C(void);
extern void fn_805477CC(void);
extern void fn_80549D90(void);
extern void fn_8054A530(void);
extern void fn_8054A5C8(void);
extern void fn_8054A9AC(void);
extern void fn_8056B38C(void);
extern void fn_8056B398(void);
extern void fn_8056C39C(void);
extern void fn_8057EF44(void);
extern void fn_805A70F4(void);
extern void fn_805F98D0(void);
extern void fn_80605540(void);
extern void fn_806055A0(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8078A070[];
extern u8 jumptable_8078A150[];
extern u8 lbl_8074D998[];
extern u8 lbl_8074DBE0[];
extern u8 lbl_8074DC1C[];
extern u8 lbl_80789ED8[];
extern u8 lbl_8078A038[];
extern u8 lbl_8078A394[];
extern u8 lbl_8078A3D0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80790000[];
extern u8 lbl_807C8458[];

/* Small data declarations */
extern u32 lbl_8087DCD8;
extern u32 lbl_8087DCDC;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F018;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F420;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F460;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F518;
extern u32 lbl_8087F580;
extern u32 lbl_8087F610;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9C0;
extern u32 lbl_808856D4;
extern u32 lbl_80885700;
extern u32 lbl_80885708;
extern u32 lbl_8088570C;
extern u32 lbl_80885710;
extern u32 lbl_80885714;
extern u32 lbl_80885718;
extern u32 lbl_8088571C;
extern u32 lbl_80885720;
extern u32 lbl_80885724;
extern u32 lbl_80885728;
extern u32 lbl_8088572C;
extern u32 lbl_80885730;
extern u32 lbl_80885734;
extern u32 lbl_80885738;
extern u32 lbl_8088573C;
extern u32 lbl_80885740;
extern u32 lbl_80885744;

/* Function declarations */
void fn_80365320(void);
void fn_80365390(void);
void fn_803653CC(void);
void fn_80365424(void);
void fn_8036545C(void);
void fn_80365464(void);
void fn_803654EC(void);
void fn_8036554C(void);
void fn_8036555C(void);
void fn_8036562C(void);
void fn_80365708(void);
void fn_803658B8(void);
void fn_8036635C(void);
void fn_80366364(void);
void fn_803663A4(void);
void fn_80366454(void);

asm void fn_80365320(void)
{
    nofralloc
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x28(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80365320_00000028
    lfs f0, lbl_808856D4
    stfs f0, 0x104(r4)
lbl_fn_80365320_00000028:
    lwz r4, 0x2c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80365320_00000044
    lfs f0, lbl_808856D4
    stfs f0, 0x104(r4)
lbl_fn_80365320_00000044:
    lwz r4, 0x30(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80365320_00000064
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_80365320_00000064:
    li r0, 0x1
    stw r0, 0x3c(r3)
    blr
}

asm void fn_80365390(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8054A530
    lis r4, lbl_80789ED8@ha
    mr r3, r31
    addi r4, r4, lbl_80789ED8@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803653CC(void)
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
    beq lbl_fn_803653CC_000000E8
    li r4, 0x0
    bl fn_8054A5C8
    cmpwi r31, 0x0
    ble lbl_fn_803653CC_000000E8
    mr r3, r30
    bl dtor_80084684
lbl_fn_803653CC_000000E8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80365424(void)
{
    nofralloc
    lfs f2, 0x10(r4)
    li r0, 0x0
    lfs f3, lbl_80885700
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    stw r0, 0x90(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    stw r0, 0x68(r4)
    blr
}

asm void fn_8036545C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80365464(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80365464_000001B0
    lwz r0, lbl_8087F428
    cmpwi r0, 0x0
    bne lbl_fn_80365464_000001B0
    lis r5, lbl_8074D998@ha
    li r3, 0x48
    addi r5, r5, lbl_8074D998@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80365464_000001AC
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_8078A038@ha
    addi r3, r3, lbl_8078A038@l
    stw r3, 0x0(r31)
lbl_fn_80365464_000001AC:
    stw r31, lbl_8087F428
lbl_fn_80365464_000001B0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F428
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803654EC(void)
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
    beq lbl_fn_803654EC_00000210
    li r0, 0x0
    stw r0, lbl_8087F428
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803654EC_00000210
    mr r3, r30
    bl dtor_80084684
lbl_fn_803654EC_00000210:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036554C(void)
{
    nofralloc
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r3, 0x14ac(r3)
    blr
}

asm void fn_8036555C(void)
{
    nofralloc
    cmpwi r3, 0x1
    bne lbl_fn_8036555C_0000024C
    li r3, 0x1
    blr
lbl_fn_8036555C_0000024C:
    cmpwi r3, 0x2
    bne lbl_fn_8036555C_00000304
    subi r0, r4, 0xe
    cmplwi r0, 0x37
    bgt lbl_fn_8036555C_00000304
    lis r3, jumptable_8078A070@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078A070@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    subfic r3, r5, 0x3
    subi r0, r5, 0x3
    or r0, r3, r0
    srwi r3, r0, 31
    blr
    cmpwi r5, 0x1
    li r3, 0x0
    beq lbl_fn_8036555C_000002A0
    cmpwi r5, 0x2
    bnelr
lbl_fn_8036555C_000002A0:
    li r3, 0x1
    blr
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
    cmpwi r5, 0x5
    li r3, 0x0
    beqlr
    cmpwi r5, 0x3
    beqlr
    li r3, 0x1
    blr
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_8036555C_00000304:
    li r3, 0x0
    blr
}

asm void fn_8036562C(void)
{
    nofralloc
    cmpwi r3, 0x1
    bne lbl_fn_8036562C_0000031C
    li r3, 0x1
    blr
lbl_fn_8036562C_0000031C:
    cmpwi r3, 0x2
    bne lbl_fn_8036562C_000003E0
    subi r0, r4, 0xe
    cmplwi r0, 0x36
    bgt lbl_fn_8036562C_000003A0
    lis r3, jumptable_8078A150@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078A150@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
    subi r4, r5, 0x2
    li r3, 0x0
    cmplwi r4, 0x9
    bgtlr
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x205
    beqlr
    li r3, 0x1
    blr
lbl_fn_8036562C_000003A0:
    lis r3, 0x2
    subi r0, r3, 0x69c0
    cmpw r6, r0
    blt lbl_fn_8036562C_000003C8
    cmpwi r4, 0x8
    bne lbl_fn_8036562C_000003C8
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_8036562C_000003C8:
    cmpwi r4, 0x47
    bne lbl_fn_8036562C_000003E0
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_8036562C_000003E0:
    li r3, 0x0
    blr
}

asm void fn_80365708(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    beq lbl_fn_80365708_00000578
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_80365708_00000578
    lis r31, lbl_807C8458@ha
    lwz r0, lbl_807C8458@l(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80365708_00000468
    lis r5, lbl_8074DC1C@ha
    li r3, 0x5778
    addi r5, r5, lbl_8074DC1C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80365708_00000460
    addi r5, r31, lbl_807C8458@l
    mr r4, r29
    addi r5, r5, 0x4
    bl fn_803658B8
lbl_fn_80365708_00000460:
    stw r3, lbl_8087F430
    b lbl_fn_80365708_00000578
lbl_fn_80365708_00000468:
    lwz r10, lbl_8087F460
    cmpwi r10, 0x0
    beq lbl_fn_80365708_00000544
    lbz r9, 0x4d11(r10)
    lis r5, lbl_8074DC1C@ha
    lhz r4, 0x4d12(r10)
    addi r5, r5, lbl_8074DC1C@l
    lbz r3, 0x4d10(r10)
    li r8, 0x0
    li r0, -0x1
    stw r3, 0x8(r1)
    mr r6, r5
    li r3, 0x5778
    stw r4, 0xc(r1)
    li r4, 0x1
    li r7, 0x0
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r0, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r8, 0x28(r1)
    stw r10, 0x24(r1)
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80365708_000004DC
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_803658B8
lbl_fn_80365708_000004DC:
    lwz r31, lbl_8087F460
    stw r3, lbl_8087F430
    cmpwi r31, 0x0
    beq lbl_fn_80365708_00000578
    beq lbl_fn_80365708_00000538
    addis r3, r31, 0x1
    subic. r3, r3, 0x61a0
    beq lbl_fn_80365708_00000514
    lis r4, fn_80119ECC@ha
    addi r3, r3, 0x11c4
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_80365708_00000514:
    addic. r3, r31, 0x539c
    beq lbl_fn_80365708_00000530
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_80365708_00000530:
    mr r3, r31
    bl dtor_80084684
lbl_fn_80365708_00000538:
    li r0, 0x0
    stw r0, lbl_8087F460
    b lbl_fn_80365708_00000578
lbl_fn_80365708_00000544:
    lis r5, lbl_8074DC1C@ha
    li r3, 0x5778
    addi r5, r5, lbl_8074DC1C@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80365708_00000574
    mr r4, r29
    mr r5, r30
    bl fn_803658B8
lbl_fn_80365708_00000574:
    stw r3, lbl_8087F430
lbl_fn_80365708_00000578:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    lwz r3, lbl_8087F430
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803658B8(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x170
    bl _savegpr_25
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_800D1D3C
    lwz r11, 0x0(r31)
    lis r12, lbl_8078A3D0@ha
    lwz r10, 0x4(r31)
    addi r12, r12, lbl_8078A3D0@l
    lwz r9, 0x8(r31)
    addi r3, r29, 0x6c
    lwz r8, 0xc(r31)
    lwz r7, 0x10(r31)
    lwz r6, 0x14(r31)
    lwz r5, 0x18(r31)
    lwz r4, 0x1c(r31)
    lwz r0, 0x20(r31)
    stw r12, 0x0(r29)
    stw r11, 0x48(r29)
    stw r10, 0x4c(r29)
    stw r9, 0x50(r29)
    stw r8, 0x54(r29)
    stw r7, 0x58(r29)
    stw r6, 0x5c(r29)
    stw r5, 0x60(r29)
    stw r4, 0x64(r29)
    stw r0, 0x68(r29)
    bl fn_8037D8B8
    addi r3, r29, 0xd18
    bl fn_80378474
    li r27, 0x0
    addi r28, r29, 0x5504
    li r0, 0xf
    stw r27, 0x10d0(r29)
    mr r3, r28
    stw r27, 0x10d4(r29)
    stw r27, 0x10d8(r29)
    stw r27, 0x10dc(r29)
    stw r27, 0x10e0(r29)
    stw r27, 0x54e4(r29)
    stw r0, 0x54e8(r29)
    stw r27, 0x54ec(r29)
    stw r27, 0x54f0(r29)
    stw r27, 0x54f4(r29)
    stw r27, 0x54f8(r29)
    stw r27, 0x54fc(r29)
    stw r27, 0x5500(r29)
    bl fn_80473E74
    lis r26, lbl_8078FBB0@ha
    addi r25, r29, 0x550c
    addi r26, r26, lbl_8078FBB0@l
    stw r26, 0x0(r28)
    mr r3, r25
    bl fn_80473E74
    lis r5, lbl_8074DC1C@ha
    stw r26, 0x0(r25)
    addi r5, r5, lbl_8074DC1C@l
    li r3, 0x494
    stw r27, 0x14(r25)
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    stw r27, 0x28(r25)
    stw r27, 0x2c(r25)
    stw r27, 0x30(r25)
    stw r27, 0x34(r25)
    stw r27, 0x38(r25)
    stw r27, 0x3c(r25)
    stw r27, 0x40(r25)
    stw r27, 0x44(r25)
    stw r27, 0x48(r25)
    stw r27, 0x4c(r25)
    stw r27, 0x555c(r29)
    stw r27, 0x5560(r29)
    stw r27, 0x5564(r29)
    stw r27, 0x5568(r29)
    stb r27, 0x556c(r29)
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803658B8_000006EC
    bl fn_8056B38C
lbl_fn_803658B8_000006EC:
    li r26, 0x0
    stw r3, 0x558c(r29)
    addi r3, r29, 0x55a8
    stw r26, 0x5590(r29)
    stw r26, 0x5594(r29)
    stw r26, 0x5598(r29)
    bl fn_800CB360
    lfs f0, lbl_8088570C
    li r0, 0x2
    lfs f3, lbl_80885708
    lis r5, lbl_8074DC1C@ha
    stfs f3, 0x10(r1)
    addi r7, r1, 0x10
    addi r27, r29, 0x55c8
    addi r12, r1, 0x20
    stfs f0, 0x14(r1)
    addi r25, r29, 0x55d8
    addi r10, r1, 0x30
    addi r11, r29, 0x55e8
    psq_l f1, 0x0(r7), 0, 0
    addi r8, r1, 0x40
    addi r5, r5, lbl_8074DC1C@l
    stfs f0, 0x18(r1)
    addi r9, r29, 0x55f8
    li r3, 0xfc4
    stfs f0, 0x1c(r1)
    mr r6, r5
    li r4, 0x1
    psq_l f2, 0x8(r7), 0, 0
    li r7, 0x0
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    psq_st f2, 0x8(r27), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    psq_st f2, 0x8(r25), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stw r26, 0x55b0(r29)
    stw r26, 0x55b4(r29)
    stw r26, 0x55b8(r29)
    stw r26, 0x55bc(r29)
    stw r26, 0x55c4(r29)
    stw r26, 0x5608(r29)
    stw r26, 0x560c(r29)
    stfs f3, 0x5610(r29)
    psq_st f1, 0x0(r9), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    stw r0, 0x5618(r29)
    stw r0, 0x561c(r29)
    stw r26, 0x5620(r29)
    stw r26, 0x5624(r29)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r0, r3
    beq lbl_fn_803658B8_00000814
    bl fn_803BAA90
    mr r0, r3
lbl_fn_803658B8_00000814:
    lfs f4, lbl_8088570C
    li r26, 0x0
    li r27, 0x1
    li r28, -0x1
    lfs f0, lbl_80885710
    addi r25, r29, 0x56dc
    lfs f3, lbl_80885708
    mr r3, r25
    stw r0, 0x5628(r29)
    stw r26, 0x562c(r29)
    stw r27, 0x5638(r29)
    stw r28, 0x563c(r29)
    stw r26, 0x5640(r29)
    stw r26, 0x5644(r29)
    stw r26, 0x5648(r29)
    stw r26, 0x564c(r29)
    stw r26, 0x5650(r29)
    stw r26, 0x5654(r29)
    stfs f4, 0x5658(r29)
    stw r26, 0x565c(r29)
    stw r26, 0x5660(r29)
    stw r27, 0x5664(r29)
    stw r26, 0x5668(r29)
    stw r26, 0x566c(r29)
    stw r26, 0x5670(r29)
    stw r27, 0x5674(r29)
    stw r26, 0x567c(r29)
    stw r26, 0x5680(r29)
    stw r26, 0x5684(r29)
    stw r28, 0x5688(r29)
    stw r28, 0x568c(r29)
    stw r26, 0x5690(r29)
    stw r26, 0x5694(r29)
    stw r26, 0x5698(r29)
    stw r26, 0x569c(r29)
    stw r26, 0x56a0(r29)
    stw r26, 0x56a4(r29)
    stw r26, 0x56a8(r29)
    stw r26, 0x56ac(r29)
    stw r26, 0x56b0(r29)
    stfs f3, 0x56b4(r29)
    stfs f4, 0x56b8(r29)
    stw r26, 0x56bc(r29)
    stw r26, 0x56c0(r29)
    stfs f0, 0x56c4(r29)
    stfs f0, 0x56c8(r29)
    stw r26, 0x56d0(r29)
    stw r26, 0x56d4(r29)
    stw r26, 0x56d8(r29)
    bl fn_80473E74
    lis r3, lbl_80790000@ha
    stw r26, 0x56e4(r29)
    addi r3, r3, lbl_80790000@l
    stw r3, 0x0(r25)
    stw r28, 0x56e8(r29)
    stw r26, 0x56ec(r29)
    stw r26, 0x56f0(r29)
    stw r26, 0x56f4(r29)
    stw r26, 0x5718(r29)
    stw r26, 0x571c(r29)
    stw r26, 0x5740(r29)
    stw r26, 0x5744(r29)
    stw r26, 0x5748(r29)
    stw r26, 0x574c(r29)
    stw r26, 0x5750(r29)
    stw r26, 0x5754(r29)
    stw r26, 0x5758(r29)
    stw r26, 0x575c(r29)
    stw r26, 0x5760(r29)
    stw r26, 0x5764(r29)
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_803658B8_00000940
    stw r27, 0x18(r3)
    stw r27, 0x1c(r3)
lbl_fn_803658B8_00000940:
    lis r4, lbl_8074DC1C@ha
    addi r3, r29, 0x5690
    addi r4, r4, lbl_8074DC1C@l
    li r5, 0x0
    addi r4, r4, 0x1
    li r6, 0x0
    bl fn_8047043C
    lwz r3, lbl_8087F420
    cmpwi r3, 0x0
    beq lbl_fn_803658B8_00000974
    li r0, 0x0
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
lbl_fn_803658B8_00000974:
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_803658B8_00000994
    lwz r0, lbl_8087F610
    addis r3, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, -0x6fcc(r3)
lbl_fn_803658B8_00000994:
    lis r5, lbl_8074DC1C@ha
    lis r28, 0x1
    addi r5, r5, lbl_8074DC1C@l
    li r4, 0x1
    mr r6, r5
    addi r3, r28, 0x3560
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_803658B8_000009CC
    addi r5, r28, 0x3560
    li r4, 0x0
    bl memset
lbl_fn_803658B8_000009CC:
    lwz r3, 0x562c(r29)
    stw r25, 0x562c(r29)
    bl dtor_80084684
    lwz r4, 0x64(r29)
    cmpwi r4, 0x0
    beq lbl_fn_803658B8_00000A40
    lwz r3, 0x562c(r29)
    lis r5, 0x1
    addi r5, r5, 0x34a8
    addi r3, r3, 0xb8
    bl memcpy
    lwz r5, 0x562c(r29)
    li r4, 0x1
    li r3, 0x0
    li r0, 0x5
    addi r6, r5, 0xb8
    stw r6, 0x64(r29)
    lwz r5, 0xbc(r5)
    stw r5, 0x54(r29)
    lbz r5, 0x4d10(r6)
    stw r5, 0x48(r29)
    lhz r5, 0x4d12(r6)
    stw r5, 0x4c(r29)
    lbz r5, 0x4d11(r6)
    stw r5, 0x50(r29)
    stw r4, 0x5c(r29)
    stw r3, 0x5630(r29)
    stw r0, 0x5748(r29)
    b lbl_fn_803658B8_00000A48
lbl_fn_803658B8_00000A40:
    li r0, 0x1
    stw r0, 0x5630(r29)
lbl_fn_803658B8_00000A48:
    mr r3, r29
    bl fn_803B8C6C
    stw r3, 0x5634(r29)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803658B8_00000A94
    lwz r3, 0x48(r29)
    cmpwi r3, 0x2
    bne lbl_fn_803658B8_00000A88
    lwz r4, 0x4c(r29)
    cmpwi r4, 0x9
    bne lbl_fn_803658B8_00000A88
    lwz r5, 0x50(r29)
    bl fn_80208634
    stw r3, 0x10d4(r29)
    b lbl_fn_803658B8_00000A94
lbl_fn_803658B8_00000A88:
    lwz r4, 0x4c(r29)
    bl fn_802085E0
    stw r3, 0x10d4(r29)
lbl_fn_803658B8_00000A94:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803658B8_00000AA8
    lwz r3, lbl_8087F9C0
    bl fn_8057EF44
lbl_fn_803658B8_00000AA8:
    bl fn_80212790
    mr r3, r30
    li r4, 0x240
    li r5, 0x480
    li r6, 0x8
    li r7, 0x180
    bl fn_80239798
    lwz r0, 0x0(r31)
    li r4, 0x120
    lwz r3, lbl_8087F3C0
    cmpwi r0, 0x1
    bne lbl_fn_803658B8_00000ADC
    li r4, 0x80
lbl_fn_803658B8_00000ADC:
    bl fn_8023A678
    lwz r4, 0x0(r31)
    li r0, 0x1
    lwz r3, lbl_8087F3C0
    cmpwi r4, 0x3
    stw r0, 0xf0(r3)
    beq lbl_fn_803658B8_00000B70
    cmpwi r4, 0x4
    beq lbl_fn_803658B8_00000B70
    cmpwi r30, 0x0
    addi r26, r29, 0x6c
    beq lbl_fn_803658B8_00000B68
    li r3, 0x78
    li r4, 0x1
    la r5, lbl_8087DCDC
    la r6, lbl_8087DCD8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_803658B8_00000B6C
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_8078A394@ha
    li r0, 0x0
    addi r3, r3, lbl_8078A394@l
    stw r3, 0x0(r25)
    stw r29, 0x48(r25)
    stw r26, 0x4c(r25)
    stw r0, 0x50(r25)
    stw r0, 0x54(r25)
    stw r0, 0x58(r25)
    stw r0, 0x5c(r25)
    stw r0, 0x70(r25)
    b lbl_fn_803658B8_00000B6C
lbl_fn_803658B8_00000B68:
    li r25, 0x0
lbl_fn_803658B8_00000B6C:
    stw r25, 0x10e0(r29)
lbl_fn_803658B8_00000B70:
    mr r3, r29
    bl fn_80490EB8
    mr r3, r29
    bl fn_80549D90
    mr r3, r29
    bl fn_80334B38
    mr r3, r29
    bl fn_805477CC
    mr r3, r29
    bl fn_80365464
    mr r3, r29
    bl fn_800F13BC
    mr r3, r29
    bl fn_800144FC
    mr r3, r29
    bl fn_801823A8
    mr r3, r29
    bl fn_8047E4BC
    mr r3, r29
    bl fn_803CE910
    mr r3, r29
    bl fn_800EFF68
    mr r3, r29
    bl fn_801E9398
    mr r3, r29
    bl fn_803EDFBC
    mr r3, r29
    bl fn_801839FC
    bl fn_80442F10
    mr r3, r29
    bl fn_8035DF48
    mr r3, r29
    bl fn_8037C8C4
    mr r3, r29
    bl fn_803E836C
    mr r3, r29
    bl fn_803CE4B0
    mr r3, r29
    bl fn_803CD9A8
    mr r3, r29
    bl fn_805A70F4
    mr r3, r29
    bl fn_804A1DDC
    mr r3, r29
    bl fn_80218720
    lwz r3, lbl_8087EFE8
    bl fn_800CDF84
    lwz r5, lbl_8087EFE8
    li r0, 0x1
    addi r3, r29, 0x10e4
    li r4, 0x0
    stw r0, 0x34d4(r5)
    li r5, 0x4000
    bl memset
    addi r3, r29, 0x50e4
    li r4, 0x0
    li r5, 0x400
    bl memset
    lis r4, lbl_8074DC1C@ha
    addi r3, r29, 0x54f4
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0x1a
    bl fn_803B3C10
    mr r3, r29
    bl fn_804A29C4
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803658B8_00000C8C
    mr r3, r29
    bl fn_8052A88C
    stw r3, 0x567c(r29)
lbl_fn_803658B8_00000C8C:
    lwz r0, lbl_8087EE90
    cmpwi r0, 0x0
    beq lbl_fn_803658B8_00000CDC
    lwz r3, 0x0(r31)
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    bl fn_803CE160
    cmpwi r3, 0x0
    beq lbl_fn_803658B8_00000CC8
    lwz r25, lbl_8087EE90
    bl fn_803CE154
    mr r4, r3
    mr r3, r25
    bl fn_80047B54
    b lbl_fn_803658B8_00000CDC
lbl_fn_803658B8_00000CC8:
    lwz r25, lbl_8087EE90
    bl fn_803CE148
    mr r4, r3
    mr r3, r25
    bl fn_80047B54
lbl_fn_803658B8_00000CDC:
    lwz r3, 0x0(r31)
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    bl fn_8036555C
    cmpwi r3, 0x0
    bne lbl_fn_803658B8_00000D04
    lwz r3, lbl_8087F048
    bl fn_800F2C9C
    lwz r3, lbl_8087F8A8
    bl fn_8054A9AC
lbl_fn_803658B8_00000D04:
    lwz r0, 0x0(r31)
    lwz r4, 0x8(r31)
    cmpwi r0, 0x1
    lwz r3, 0x4(r31)
    bne lbl_fn_803658B8_00000D20
    li r0, 0x1
    b lbl_fn_803658B8_00000D44
lbl_fn_803658B8_00000D20:
    cmpwi r0, 0x2
    bne lbl_fn_803658B8_00000D40
    cmpwi r3, 0x44
    bne lbl_fn_803658B8_00000D40
    subi r0, r4, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_803658B8_00000D44
lbl_fn_803658B8_00000D40:
    li r0, 0x0
lbl_fn_803658B8_00000D44:
    lwz r3, lbl_8087EF8C
    cmpwi r0, 0x0
    li r4, 0x2
    addi r3, r3, 0x118
    beq lbl_fn_803658B8_00000D5C
    li r4, 0x4
lbl_fn_803658B8_00000D5C:
    bl fn_800AFEBC
    lwz r3, 0x0(r31)
    lwz r4, 0x4(r31)
    bl fn_800EF588
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_803658B8_00000DA4
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803658B8_00000DA4
    lis r7, lbl_8074DBE0@ha
    lwzu r6, lbl_8074DBE0@l(r7)
    stw r6, 0x8(r1)
    addi r4, r1, 0x8
    lwz r0, 0x4(r7)
    li r5, 0x2
    stw r0, 0xc(r1)
    bl fn_8004829C
lbl_fn_803658B8_00000DA4:
    lwz r3, lbl_8087F490
    bl fn_803D022C
    lwz r3, 0x0(r31)
    lwz r4, 0x4(r31)
    lwz r5, 0x8(r31)
    bl fn_8036555C
    cmpwi r3, 0x0
    bne lbl_fn_803658B8_00000DCC
    lwz r3, lbl_8087F490
    bl fn_803D0B20
lbl_fn_803658B8_00000DCC:
    mr r3, r29
    li r4, 0xa
    lis r5, 0xff00
    li r6, 0x0
    bl fn_8006A250
    stw r3, 0x5620(r29)
    mr r3, r29
    li r4, 0x1e
    li r5, -0x1
    lis r6, 0xff00
    li r7, 0x0
    bl fn_8006A5A8
    addi r0, r29, 0x6c
    stw r3, 0x5624(r29)
    lwz r6, 0x5620(r29)
    lis r3, 0x3b9b
    stw r0, 0x1080(r29)
    li r7, 0x0
    subi r4, r3, 0x3601
    li r5, 0x1
    stw r7, 0x4c(r6)
    lis r0, 0xff00
    lfs f0, lbl_8088570C
    lwz r3, 0x5620(r29)
    stw r7, 0x58(r3)
    lwz r3, 0x5620(r29)
    stw r5, 0x54(r3)
    lwz r3, 0x5620(r29)
    stw r4, 0x5c(r3)
    lwz r3, 0x5620(r29)
    stw r0, 0x6c(r3)
    lwz r3, 0x5620(r29)
    stw r0, 0x70(r3)
    lwz r3, 0x5620(r29)
    stfs f0, 0x74(r3)
    lwz r3, 0x5620(r29)
    stw r5, 0x48(r3)
    lwz r0, lbl_8087EEB8
    lwz r25, 0x54(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803658B8_00000F0C
    lwz r0, 0x10d0(r29)
    cmpw r0, r25
    ble lbl_fn_803658B8_00000EB8
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x100
    bl memset
    lis r4, lbl_8074DC1C@ha
    lwz r5, 0x10d0(r29)
    addi r4, r4, lbl_8074DC1C@l
    mr r6, r25
    addi r3, r1, 0x50
    addi r4, r4, 0x36
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x50
    bl fn_800697D8
lbl_fn_803658B8_00000EB8:
    lwz r4, 0x10d0(r29)
    cmpwi r4, 0x0
    blt lbl_fn_803658B8_00000ED4
    lis r3, 0xf
    addi r0, r3, 0x423f
    cmpw r4, r0
    ble lbl_fn_803658B8_00000F0C
lbl_fn_803658B8_00000ED4:
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x100
    bl memset
    lis r4, lbl_8074DC1C@ha
    mr r5, r25
    addi r4, r4, lbl_8074DC1C@l
    addi r3, r1, 0x50
    addi r4, r4, 0x5b
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x50
    bl fn_800697D8
lbl_fn_803658B8_00000F0C:
    li r4, 0x1
    stw r25, 0x10d0(r29)
    stw r4, 0x10e4(r29)
    stw r4, 0x1194(r29)
    lwz r3, lbl_8087F0A8
    stw r4, 0xd4(r3)
    lwz r3, lbl_8087F9C0
    stw r4, 0x7c(r3)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803658B8_00000F40
    stw r4, 0x156c(r29)
lbl_fn_803658B8_00000F40:
    lwz r12, 0x68(r29)
    li r0, 0x1
    stw r0, 0x115c(r29)
    cmpwi r12, 0x0
    beq lbl_fn_803658B8_00000F60
    mr r3, r29
    mtctr r12
    bctrl
lbl_fn_803658B8_00000F60:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F428
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F580
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x567c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803658B8_00000FB0
    li r4, 0x1
    bl fn_800D246C
lbl_fn_803658B8_00000FB0:
    lwz r3, lbl_8087F120
    li r4, 0x1
    bl fn_800D246C
    lwz r12, 0x56dc(r29)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    addi r3, r29, 0x56dc
    lwz r12, 0xc(r12)
    addi r4, r4, 0x81
    mtctr r12
    bctrl
    lwz r3, lbl_8087F4E8
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803658B8_00001010
    lwz r3, lbl_8087F420
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, lbl_8087F018
    cmpwi r3, 0x0
    beq lbl_fn_803658B8_00001010
    stw r0, 0x40e0(r3)
lbl_fn_803658B8_00001010:
    li r0, 0x0
    stw r0, 0x5768(r29)
    addi r11, r1, 0x170
    mr r3, r29
    stw r0, 0x5774(r29)
    stw r0, 0x5770(r29)
    bl _restgpr_25
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8036635C(void)
{
    nofralloc
    lwz r3, lbl_8087F8A8
    blr
}

asm void fn_80366364(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80366364_0000106C
    cmpwi r4, 0x0
    ble lbl_fn_80366364_0000106C
    bl dtor_80084684
lbl_fn_80366364_0000106C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803663A4(void)
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
    beq lbl_fn_803663A4_00001118
    addic. r3, r3, 0x10
    beq lbl_fn_803663A4_000010B8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803663A4_000010B8:
    addic. r0, r30, 0x8
    beq lbl_fn_803663A4_000010E4
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803663A4_000010D8
    lis r4, fn_80366364@ha
    addi r4, r4, fn_80366364@l
    bl fn_80695A50
lbl_fn_803663A4_000010D8:
    li r0, 0x0
    stw r0, 0xc(r30)
    stw r0, 0x8(r30)
lbl_fn_803663A4_000010E4:
    cmpwi r30, 0x0
    beq lbl_fn_803663A4_00001108
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803663A4_000010FC
    bl fn_80084C24
lbl_fn_803663A4_000010FC:
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
lbl_fn_803663A4_00001108:
    cmpwi r31, 0x0
    ble lbl_fn_803663A4_00001118
    mr r3, r30
    bl dtor_80084684
lbl_fn_803663A4_00001118:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80366454(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    addi r11, r1, 0x270
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r28, r3
    mr r29, r4
    beq lbl_fn_80366454_00001A04
    lis r4, lbl_8078A3D0@ha
    li r0, 0x0
    addi r4, r4, lbl_8078A3D0@l
    stw r4, 0x0(r3)
    stw r0, lbl_8087F430
    lwz r3, 0x10e0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80366454_0000117C
    bl fn_800D2338
lbl_fn_80366454_0000117C:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001198
    li r0, 0x0
    stw r0, 0xf0(r3)
    lwz r3, lbl_8087F3C0
    stw r0, 0xcc(r3)
lbl_fn_80366454_00001198:
    lwz r3, lbl_8087EE98
    cmpwi r3, 0x0
    beq lbl_fn_80366454_000011B0
    addis r3, r3, 0x1
    li r0, 0x1
    stw r0, -0x6fcc(r3)
lbl_fn_80366454_000011B0:
    lwz r3, 0x5590(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80366454_000011C4
    li r4, 0x1
    bl fn_8056C39C
lbl_fn_80366454_000011C4:
    lwz r25, 0x5628(r28)
    cmpwi r25, 0x0
    beq lbl_fn_80366454_000011F4
    beq lbl_fn_80366454_000011F4
    lis r4, fn_8012AFE8@ha
    mr r3, r25
    addi r4, r4, fn_8012AFE8@l
    li r5, 0x240
    li r6, 0x7
    bl fn_806959D8
    mr r3, r25
    bl dtor_80084684
lbl_fn_80366454_000011F4:
    addi r3, r28, 0x550c
    bl fn_80470580
    mr r25, r3
    addi r3, r28, 0x550c
    bl fn_8047059C
    cmpwi r25, 0x0
    srwi r5, r3, 2
    beq lbl_fn_80366454_00001228
    lwz r3, lbl_8087F518
    mr r4, r25
    bl fn_8046F96C
    addi r3, r28, 0x550c
    bl fn_80473F88
lbl_fn_80366454_00001228:
    bl fn_800EF8DC
    bl fn_80442F68
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_80366454_0000124C
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80366454_0000124C
    bl fn_8004895C
lbl_fn_80366454_0000124C:
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001264
    bl fn_80049654
    lwz r3, lbl_8087EE90
    bl fn_800498D4
lbl_fn_80366454_00001264:
    lwz r3, lbl_8087EFE8
    bl fn_800CE368
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d4(r3)
    lwz r3, lbl_8087EFE8
    stw r0, 0x2a10(r3)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001290
    bl fn_800D2338
lbl_fn_80366454_00001290:
    lis r3, lbl_807C8458@ha
    lwz r0, lbl_807C8458@l(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80366454_000012A8
    li r0, 0x0
    stw r0, lbl_807C8458@l(r3)
lbl_fn_80366454_000012A8:
    li r30, 0x0
    stw r30, lbl_8087F460
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    cmpwi r30, 0x0
    stw r30, 0x74(r3)
    bne lbl_fn_80366454_000012D0
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80366454_000012D4
lbl_fn_80366454_000012D0:
    li r30, 0x1
lbl_fn_80366454_000012D4:
    stw r30, 0x70(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r4, 0x0
    bl fn_800C289C
    lwz r3, lbl_8087EFB4
    li r30, 0x0
    lfs f10, lbl_80885708
    li r31, 0x1
    addis r3, r3, 0x5
    lfs f3, lbl_80885714
    stw r30, 0x4964(r3)
    li r0, 0x3
    lfs f8, lbl_8088571C
    lwz r5, lbl_8087EFA8
    lfs f9, lbl_8088570C
    lfs f0, lbl_80885718
    stw r31, 0x54(r5)
    stw r31, 0x130(r1)
    stw r30, 0x134(r1)
    stw r0, 0x138(r1)
    stw r0, 0x13c(r1)
    stw r31, 0x140(r1)
    stfs f10, 0x144(r1)
    stfs f3, 0x148(r1)
    stfs f3, 0x14c(r1)
    stfs f9, 0x150(r1)
    stfs f0, 0x154(r1)
    stfs f10, 0x158(r1)
    stfs f10, 0x160(r1)
    stfs f8, 0x15c(r1)
    stfs f8, 0x164(r1)
    stfs f10, 0x40(r1)
    stfs f10, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f10, 0x168(r1)
    stfs f10, 0x16c(r1)
    stfs f10, 0x170(r1)
    stfs f10, 0x174(r1)
    stfs f10, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f10, 0x38(r1)
    stfs f10, 0x3c(r1)
    stfs f10, 0x178(r1)
    stfs f10, 0x17c(r1)
    stfs f10, 0x180(r1)
    stfs f10, 0x184(r1)
    stfs f10, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f10, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f10, 0x188(r1)
    stfs f10, 0x18c(r1)
    stfs f10, 0x190(r1)
    stfs f10, 0x194(r1)
    stw r30, 0x198(r1)
    stw r30, 0x19c(r1)
    stw r30, 0x1a0(r1)
    stw r30, 0x1a4(r1)
    stw r31, 0x54(r5)
    li r4, 0x140
    lfs f5, lbl_80885730
    li r3, 0xe0
    stw r30, 0x58(r5)
    lfs f4, lbl_80885720
    stw r0, 0x5c(r5)
    lfs f0, lbl_80885724
    stw r0, 0x60(r5)
    lfs f7, lbl_80885728
    stw r31, 0x64(r5)
    lfs f6, lbl_8088572C
    stfs f10, 0x68(r5)
    lwz r6, 0x154(r1)
    stfs f3, 0x6c(r5)
    lwz r9, 0x158(r1)
    stfs f3, 0x70(r5)
    lwz r8, 0x15c(r1)
    stfs f9, 0x74(r5)
    lwz r7, 0x160(r1)
    stw r6, 0x78(r5)
    lwz r6, 0x164(r1)
    stw r9, 0x7c(r5)
    lwz r9, 0x168(r1)
    stw r8, 0x80(r5)
    lwz r8, 0x16c(r1)
    stw r7, 0x84(r5)
    lwz r7, 0x170(r1)
    stw r6, 0x88(r5)
    lwz r6, 0x174(r1)
    stw r9, 0x8c(r5)
    lwz r9, 0x178(r1)
    stw r8, 0x90(r5)
    lwz r8, 0x17c(r1)
    stw r7, 0x94(r5)
    lwz r7, 0x180(r1)
    stw r6, 0x98(r5)
    lwz r6, 0x184(r1)
    stw r9, 0x9c(r5)
    lwz r9, 0x188(r1)
    stw r8, 0xa0(r5)
    lwz r8, 0x18c(r1)
    stw r7, 0xa4(r5)
    lwz r7, 0x190(r1)
    stw r6, 0xa8(r5)
    lwz r6, 0x194(r1)
    stw r9, 0xac(r5)
    stw r8, 0xb0(r5)
    stw r7, 0xb4(r5)
    stw r6, 0xb8(r5)
    stw r30, 0xbc(r5)
    stw r30, 0xc0(r5)
    stw r30, 0xc4(r5)
    stw r30, 0xc8(r5)
    stw r30, 0xcc(r5)
    stw r30, 0xd0(r5)
    stw r31, 0xd4(r5)
    stw r30, 0xd8(r5)
    stw r30, 0x1a8(r1)
    stw r30, 0x1ac(r1)
    stw r31, 0xb8(r1)
    stw r30, 0xbc(r1)
    stw r30, 0xc0(r1)
    stw r31, 0xc4(r1)
    stfs f4, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f7, 0xd0(r1)
    stfs f6, 0xd4(r1)
    stw r4, 0xd8(r1)
    stw r3, 0xdc(r1)
    stfs f5, 0xe0(r1)
    stfs f5, 0xe4(r1)
    stw r30, 0xdc(r5)
    stw r31, 0xe0(r5)
    li r6, 0x2
    lfs f3, lbl_80885738
    addi r7, r1, 0x1e8
    stfs f4, 0xe4(r5)
    fmr f2, f9
    lfs f4, lbl_80885734
    stfs f0, 0xe8(r5)
    lfs f0, lbl_8088573C
    stfs f7, 0xec(r5)
    stfs f6, 0xf0(r5)
    stw r4, 0xf4(r5)
    stw r3, 0xf8(r5)
    stfs f5, 0xfc(r5)
    stfs f5, 0x100(r5)
    stw r30, 0x264(r5)
    stw r30, 0x268(r5)
    stw r6, 0x26c(r5)
    stw r0, 0x270(r5)
    stw r31, 0x274(r5)
    stw r30, 0x278(r5)
    stw r30, 0x27c(r5)
    stfs f4, 0x280(r5)
    stfs f4, 0x284(r5)
    stfs f3, 0x1d8(r1)
    stfs f3, 0x1dc(r1)
    lwz r4, 0x1d8(r1)
    stfs f10, 0x288(r5)
    lwz r3, 0x1dc(r1)
    stw r4, 0x28c(r5)
    stfs f3, 0x1e0(r1)
    stw r3, 0x290(r5)
    lwz r4, 0x1e0(r1)
    stfs f10, 0x1e4(r1)
    stw r4, 0x294(r5)
    lwz r3, 0x1e4(r1)
    stfs f9, 0x1e8(r1)
    stfs f10, 0x1ec(r1)
    stw r3, 0x298(r5)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x29c(r5), 0, 0
    stfs f2, 0x2a4(r5)
    stw r30, 0x1b0(r1)
    stw r30, 0x1b4(r1)
    stw r6, 0x1b8(r1)
    stw r0, 0x1bc(r1)
    stw r31, 0x1c0(r1)
    stw r30, 0x1c4(r1)
    stw r30, 0x1c8(r1)
    stfs f4, 0x1cc(r1)
    stfs f4, 0x1d0(r1)
    stfs f10, 0x1d4(r1)
    stfs f9, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    stfs f0, 0x2a8(r5)
    stfs f10, 0x80(r1)
    addi r26, r1, 0x14
    addi r7, r1, 0x80
    lfs f0, lbl_80885744
    stfs f9, 0x84(r1)
    addi r6, r1, 0x1fc
    addi r9, r1, 0x70
    addi r8, r1, 0x20c
    psq_l f1, 0x0(r7), 0, 0
    addi r11, r1, 0x60
    stfs f9, 0x70(r1)
    addi r10, r1, 0x21c
    addi r27, r1, 0x50
    addi r12, r1, 0x22c
    stfs f10, 0x74(r1)
    addi r25, r1, 0x8
    lfs f3, lbl_80885740
    mr r3, r26
    psq_st f1, 0x0(r6), 0, 0
    mr r4, r26
    psq_l f1, 0x0(r9), 0, 0
    stfs f9, 0x88(r1)
    stfs f9, 0x8c(r1)
    psq_l f2, 0x8(r7), 0, 0
    stfs f9, 0x60(r1)
    stfs f9, 0x64(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f9, 0x78(r1)
    stfs f9, 0x7c(r1)
    psq_st f2, 0x8(r6), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f9, 0x50(r1)
    stfs f9, 0x54(r1)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stw r30, 0x324(r5)
    psq_st f1, 0x328(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f10, 0x68(r1)
    stfs f9, 0x6c(r1)
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f9, 0x58(r1)
    stfs f9, 0x5c(r1)
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_st f2, 0x8(r12), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f2, 0x330(r5), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x338(r5), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    psq_st f2, 0x340(r5), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_st f1, 0x348(r5), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    psq_st f2, 0x350(r5), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    psq_st f1, 0x358(r5), 0, 0
    psq_st f2, 0x360(r5), 0, 0
    fmr f2, f10
    stw r30, 0x368(r5)
    stw r30, 0x36c(r5)
    stfs f10, 0x370(r5)
    stfs f10, 0x8(r1)
    lwz r27, lbl_8087EFA8
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r25), 0, 0
    stw r30, 0x1f8(r1)
    stw r30, 0x23c(r1)
    stw r30, 0x240(r1)
    stfs f10, 0x244(r1)
    stw r31, 0x90(r1)
    stw r30, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f8, 0x9c(r1)
    stfs f8, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f10, 0xa8(r1)
    stfs f10, 0x10(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lfs f2, 0x1c(r1)
    mr r0, r31
    psq_l f1, 0x0(r26), 0, 0
    addi r3, r1, 0xac
    lfs f0, 0x98(r1)
    stw r0, 0x104(r27)
    mr r0, r30
    stw r0, 0x108(r27)
    lwz r0, 0x9c(r1)
    stfs f0, 0x10c(r27)
    lfs f0, lbl_80885708
    stw r0, 0x110(r27)
    lwz r0, 0xa0(r1)
    stw r0, 0x114(r27)
    lwz r0, 0xa4(r1)
    stw r0, 0x118(r27)
    lwz r0, 0xa8(r1)
    stw r0, 0x11c(r27)
    psq_st f1, 0x120(r27), 0, 0
    stfs f2, 0x128(r27)
    lwz r5, lbl_8087EFA8
    psq_st f1, 0x0(r3), 0, 0
    lwz r4, 0x378(r5)
    lfs f9, 0x37c(r5)
    lfs f8, 0x380(r5)
    lfs f7, 0x384(r5)
    lfs f6, 0x388(r5)
    lfs f5, 0x38c(r5)
    lfs f4, 0x390(r5)
    lfs f3, 0x394(r5)
    stfs f9, 0xf0(r1)
    stw r30, 0x374(r5)
    lwz r0, 0xf0(r1)
    stw r4, 0x378(r5)
    stfs f8, 0xf4(r1)
    stw r0, 0x37c(r5)
    lwz r3, 0xf4(r1)
    stfs f7, 0xf8(r1)
    stw r3, 0x380(r5)
    lwz r0, 0xf8(r1)
    stfs f6, 0xfc(r1)
    stw r0, 0x384(r5)
    lwz r0, 0xfc(r1)
    stw r0, 0x388(r5)
    stfs f5, 0x38c(r5)
    stfs f4, 0x390(r5)
    stfs f3, 0x394(r5)
    lwz r3, lbl_8087EFA8
    stfs f2, 0xb4(r1)
    stw r30, 0x240(r3)
    lwz r3, lbl_8087EFA8
    stw r4, 0x110(r1)
    stfs f0, 0x3a4(r3)
    lwz r0, lbl_8087F610
    stfs f9, 0x114(r1)
    cmpwi r0, 0x0
    stfs f8, 0x118(r1)
    stfs f7, 0x11c(r1)
    stfs f6, 0x120(r1)
    stfs f5, 0x124(r1)
    stfs f4, 0x128(r1)
    stfs f3, 0x12c(r1)
    stw r30, 0x10c(r1)
    stw r30, 0xe8(r1)
    stw r4, 0xec(r1)
    stfs f5, 0x100(r1)
    stfs f4, 0x104(r1)
    stfs f3, 0x108(r1)
    bne lbl_fn_80366454_00001840
    lwz r3, lbl_8087F4E8
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001840
    stw r31, 0x88(r3)
lbl_fn_80366454_00001840:
    lwz r3, lbl_8087EF70
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001854
    li r4, 0x5
    bl fn_800A5B30
lbl_fn_80366454_00001854:
    li r3, 0x1
    bl fn_80605540
    li r3, 0x0
    bl fn_806055A0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_80366454_00001894
    lwz r3, lbl_8087F9C0
    bl fn_8057EF44
    lwz r3, lbl_8087F420
    li r0, 0x0
    stw r0, 0xc(r3)
    lwz r3, lbl_8087F018
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001894
    stw r0, 0x40e0(r3)
lbl_fn_80366454_00001894:
    lwz r3, lbl_8087EF8C
    li r4, 0x2
    addi r3, r3, 0x118
    bl fn_800AFEBC
    addic. r3, r28, 0x56dc
    beq lbl_fn_80366454_000018B4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80366454_000018B4:
    addic. r3, r28, 0x5690
    beq lbl_fn_80366454_000018C0
    bl fn_80470528
lbl_fn_80366454_000018C0:
    addic. r0, r28, 0x562c
    beq lbl_fn_80366454_000018D0
    lwz r3, 0x562c(r28)
    bl dtor_80084684
lbl_fn_80366454_000018D0:
    addi r3, r28, 0x55a8
    li r4, -0x1
    bl fn_800CB3A0
    addic. r0, r28, 0x558c
    beq lbl_fn_80366454_000018F0
    lwz r3, 0x558c(r28)
    li r4, 0x1
    bl fn_8056B398
lbl_fn_80366454_000018F0:
    addic. r25, r28, 0x550c
    beq lbl_fn_80366454_0000193C
    addic. r0, r25, 0x44
    beq lbl_fn_80366454_00001910
    lwz r3, 0x4c(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001910
    bl fn_80084C24
lbl_fn_80366454_00001910:
    addic. r0, r25, 0x38
    beq lbl_fn_80366454_00001928
    lwz r3, 0x40(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001928
    bl fn_80084C24
lbl_fn_80366454_00001928:
    cmpwi r25, 0x0
    beq lbl_fn_80366454_0000193C
    mr r3, r25
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80366454_0000193C:
    addic. r25, r28, 0x54f4
    beq lbl_fn_80366454_000019A4
    addic. r3, r25, 0x10
    beq lbl_fn_80366454_00001954
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80366454_00001954:
    addic. r0, r25, 0x8
    beq lbl_fn_80366454_00001980
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001974
    lis r4, fn_80366364@ha
    addi r4, r4, fn_80366364@l
    bl fn_80695A50
lbl_fn_80366454_00001974:
    li r0, 0x0
    stw r0, 0xc(r25)
    stw r0, 0x8(r25)
lbl_fn_80366454_00001980:
    cmpwi r25, 0x0
    beq lbl_fn_80366454_000019A4
    lwz r3, 0x4(r25)
    cmpwi r3, 0x0
    beq lbl_fn_80366454_00001998
    bl fn_80084C24
lbl_fn_80366454_00001998:
    li r0, 0x0
    stw r0, 0x4(r25)
    stw r0, 0x0(r25)
lbl_fn_80366454_000019A4:
    addic. r25, r28, 0xd18
    beq lbl_fn_80366454_000019DC
    addic. r0, r25, 0x1fc
    beq lbl_fn_80366454_000019D0
    lwz r4, 0x1fc(r25)
    cmpwi r4, 0x0
    beq lbl_fn_80366454_000019D0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80366454_000019D0
    bl fn_800897D8
lbl_fn_80366454_000019D0:
    addi r3, r25, 0x8
    li r4, -0x1
    bl fn_8004B338
lbl_fn_80366454_000019DC:
    addi r3, r28, 0x6c
    li r4, -0x1
    bl fn_8037DC68
    mr r3, r28
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r29, 0x0
    ble lbl_fn_80366454_00001A04
    mr r3, r28
    bl dtor_80084684
lbl_fn_80366454_00001A04:
    addi r11, r1, 0x270
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}
