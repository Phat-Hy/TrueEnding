#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004B338(void);
extern void fn_800795DC(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_800B6218(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DCA6C(void);
extern void fn_8047202C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473EFC(void);
extern void fn_80473F50(void);
extern void fn_80477FA4(void);
extern void fn_80477FC0(void);
extern void fn_80477FDC(void);
extern void fn_80477FF8(void);
extern void fn_80478014(void);
extern void fn_80478034(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA8(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern void fn_80695AD0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807337A8[];
extern u8 lbl_807337B0[];
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80779264[];
extern u8 lbl_80779270[];
extern u8 lbl_8078FF60[];

/* Small data declarations */
extern u32 lbl_8087D918;
extern u32 lbl_8087D91C;
extern u32 lbl_8087EFB8;
extern u32 lbl_80881088;
extern u32 lbl_80881098;
extern u32 lbl_808810D0;
extern u32 lbl_808810D4;
extern u32 lbl_808810D8;
extern u32 lbl_808810DC;
extern u32 lbl_808810E0;
extern u32 lbl_808810E4;
extern u32 lbl_808810E8;
extern u32 lbl_808810EC;
extern u32 lbl_808810F0;
extern u32 lbl_808810F4;
extern u32 lbl_808810F8;
extern u32 lbl_808810FC;
extern u32 lbl_80881100;
extern u32 lbl_80881104;
extern u32 lbl_80881108;
extern u32 lbl_8088110C;
extern u32 lbl_80881110;
extern u32 lbl_80881114;
extern u32 lbl_80881118;
extern u32 lbl_8088111C;
extern u32 lbl_80881120;
extern u32 lbl_80881124;
extern u32 lbl_80881128;
extern u32 lbl_8088112C;
extern u32 lbl_80881130;
extern u32 lbl_80881134;

/* Function declarations */
void fn_800C122C(void);
void fn_800C1424(void);
void fn_800C1660(void);
void fn_800C169C(void);
void fn_800C16B4(void);
void fn_800C16BC(void);
void fn_800C16C0(void);
void fn_800C1720(void);
void fn_800C1814(void);
void fn_800C18BC(void);
void fn_800C1990(void);
void fn_800C1A1C(void);
void fn_800C1F5C(void);
void fn_800C1FB4(void);
void fn_800C2108(void);
void fn_800C2274(void);
void fn_800C23E8(void);
void fn_800C2418(void);
void fn_800C2448(void);
void fn_800C24B4(void);
void fn_800C2520(void);
void fn_800C258C(void);
void fn_800C2634(void);
void fn_800C289C(void);
void fn_800C2B24(void);
void fn_800C2C20(void);
void fn_800C2D88(void);
void fn_800C2E30(void);
void fn_800C2EE0(void);

asm void fn_800C122C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lwz r0, 0x300(r3)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_800C122C_00000054
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x54(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    b lbl_fn_800C122C_00000070
lbl_fn_800C122C_00000054:
    lis r5, lbl_80779264@ha
    lwzu r4, lbl_80779264@l(r5)
    stw r4, 0x54(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
lbl_fn_800C122C_00000070:
    lwz r5, 0x54(r1)
    addi r3, r1, 0x48
    lwz r4, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r5, 0x48(r1)
    stw r4, 0x4c(r1)
    stw r0, 0x50(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C122C_000001D4
    lwz r0, 0x300(r30)
    addi r29, r1, 0x38
    psq_l f1, 0x0(r31), 0, 0
    cntlzw r0, r0
    lfs f2, 0x8(r31)
    lfs f0, 0xc(r31)
    srwi. r0, r0, 5
    psq_st f1, 0x0(r29), 0, 0
    lwz r28, 0x314(r30)
    stfs f2, 0x40(r1)
    stfs f0, 0x44(r1)
    beq lbl_fn_800C122C_00000194
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r31, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800C122C_00000138
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r31, 0xc(r3)
lbl_fn_800C122C_00000138:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C122C_0000014C
    bl fn_80084C24
lbl_fn_800C122C_0000014C:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_800C122C_00000194
    addic. r3, r3, 0x4
    beq lbl_fn_800C122C_00000194
    beq lbl_fn_800C122C_00000194
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C122C_00000194
    bl fn_806952C4
lbl_fn_800C122C_00000194:
    lfs f2, 0x40(r1)
    addi r4, r1, 0x28
    psq_l f1, 0x0(r29), 0, 0
    mr r5, r28
    lfs f0, 0x44(r1)
    addi r3, r30, 0x304
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r6, 0x300(r30)
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800C122C_000001D4
    b lbl_fn_800C122C_000001D8
lbl_fn_800C122C_000001D4:
    lwz r3, 0x2fc(r30)
lbl_fn_800C122C_000001D8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800C1424(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    addis r4, r3, 0x5
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    stw r28, 0x90(r1)
    lwz r0, 0x4964(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800C1424_00000230
    addi r4, r3, 0x10c
    b lbl_fn_800C1424_00000234
lbl_fn_800C1424_00000230:
    addi r4, r3, 0x118
lbl_fn_800C1424_00000234:
    lwz r0, 0x300(r3)
    addi r3, r1, 0x68
    lfs f2, 0x8(r4)
    addi r30, r1, 0x58
    cntlzw r0, r0
    psq_l f1, 0x0(r4), 0, 0
    lfs f0, lbl_80881098
    srwi. r0, r0, 5
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    stfs f0, 0x74(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x60(r1)
    stfs f0, 0x64(r1)
    beq lbl_fn_800C1424_00000290
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x78(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
    b lbl_fn_800C1424_000002AC
lbl_fn_800C1424_00000290:
    lis r5, lbl_80779270@ha
    lwzu r4, lbl_80779270@l(r5)
    stw r4, 0x78(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
lbl_fn_800C1424_000002AC:
    lwz r5, 0x78(r1)
    addi r3, r1, 0x18
    lwz r4, 0x7c(r1)
    lwz r0, 0x80(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_800C1424_00000410
    lwz r0, 0x300(r31)
    addi r28, r1, 0x28
    psq_l f1, 0x0(r30), 0, 0
    cntlzw r0, r0
    lfs f2, 0x60(r1)
    lfs f0, 0x64(r1)
    srwi. r0, r0, 5
    psq_st f1, 0x0(r28), 0, 0
    lwz r29, 0x314(r31)
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    beq lbl_fn_800C1424_000003D0
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x48(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x4c(r1)
    mr r30, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800C1424_00000374
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_800C1424_00000374:
    li r0, 0x0
    stw r3, 0x50(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C1424_00000388
    bl fn_80084C24
lbl_fn_800C1424_00000388:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x4c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x48
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x48(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x48
    beq lbl_fn_800C1424_000003D0
    addic. r3, r3, 0x4
    beq lbl_fn_800C1424_000003D0
    beq lbl_fn_800C1424_000003D0
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C1424_000003D0
    bl fn_806952C4
lbl_fn_800C1424_000003D0:
    lfs f2, 0x30(r1)
    addi r4, r1, 0x38
    psq_l f1, 0x0(r28), 0, 0
    mr r5, r29
    lfs f0, 0x34(r1)
    addi r3, r31, 0x304
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    stfs f0, 0x44(r1)
    lwz r6, 0x300(r31)
    lwz r12, 0x4(r6)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800C1424_00000410
    b lbl_fn_800C1424_00000414
lbl_fn_800C1424_00000410:
    lwz r3, 0x2fc(r31)
lbl_fn_800C1424_00000414:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_800C1660(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, 0x910(r3)
    stw r4, 0x8(r1)
    slwi r0, r0, 3
    add r0, r3, r0
    stw r5, 0xc(r1)
    addic. r6, r0, 0x914
    beq lbl_fn_800C1660_0000045C
    stw r4, 0x0(r6)
    stw r5, 0x4(r6)
lbl_fn_800C1660_0000045C:
    lwz r4, 0x910(r3)
    addi r0, r4, 0x1
    stw r0, 0x910(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_800C169C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C169C_00000480
    b fn_800B6218
lbl_fn_800C169C_00000480:
    lfs f1, lbl_80881088
    blr
}

asm void fn_800C16B4(void)
{
    nofralloc
    lwz r3, lbl_8087EFB8
    blr
}

asm void fn_800C16BC(void)
{
    nofralloc
    blr
}

asm void fn_800C16C0(void)
{
    nofralloc
    lfs f0, lbl_808810D0
    li r0, 0x0
    li r4, 0x1
    stw r4, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    blr
}

asm void fn_800C1720(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_808810D0
    li r5, 0x1
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r5, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    b lbl_fn_800C1720_00000574
    bl fn_80695A50
lbl_fn_800C1720_00000574:
    li r0, 0x1
    stw r0, 0x3c(r30)
    mulli r3, r0, 0x30
    li r4, 0x0
    la r5, lbl_8087D91C
    la r6, lbl_8087D918
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    addi r4, r4, fn_800D5738@l
    li r6, 0x30
    addi r5, r5, fn_800D5808@l
    li r7, 0x1
    bl fn_80695720
    stw r3, 0x40(r30)
    b lbl_fn_800C1720_000005C0
    stw r0, 0x40(r30)
lbl_fn_800C1720_000005C0:
    lwz r3, 0x40(r30)
    mr r4, r31
    bl fn_800D5908
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C1814(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C1814_00000620
    lis r4, fn_800D5808@ha
    mr r3, r0
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_800C1814_00000620:
    li r0, 0x1
    stw r0, 0x3c(r30)
    mulli r3, r0, 0x30
    li r4, 0x0
    la r5, lbl_8087D91C
    la r6, lbl_8087D918
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    addi r4, r4, fn_800D5738@l
    li r6, 0x30
    addi r5, r5, fn_800D5808@l
    li r7, 0x1
    bl fn_80695720
    stw r3, 0x40(r30)
    b lbl_fn_800C1814_0000066C
    stw r0, 0x40(r30)
lbl_fn_800C1814_0000066C:
    lwz r3, 0x40(r30)
    mr r4, r31
    bl fn_800D5908
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C18BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807337A8@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x1c(r3)
    lfs f0, 0x20(r3)
    lfs f4, 0x4(r3)
    fadds f1, f1, f0
    lfs f3, 0x14(r3)
    lfs f2, 0x8(r3)
    lfs f0, 0x18(r3)
    fadds f3, f4, f3
    fadds f0, f2, f0
    stfs f3, 0x4(r3)
    lfd f2, lbl_807337A8@l(r4)
    stfs f0, 0x8(r3)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_808810D4
    fcmpo cr0, f1, f0
    ble lbl_fn_800C18BC_000006F4
    lfs f0, lbl_808810D8
    fsubs f1, f1, f0
lbl_fn_800C18BC_000006F4:
    lfs f0, lbl_808810DC
    fcmpo cr0, f1, f0
    bge lbl_fn_800C18BC_00000708
    lfs f0, lbl_808810D8
    fadds f1, f1, f0
lbl_fn_800C18BC_00000708:
    lwz r4, 0x48(r31)
    lwz r3, 0x4c(r31)
    cmpwi r4, 0x0
    stfs f1, 0x1c(r31)
    addi r0, r3, 0x1
    stw r0, 0x4c(r31)
    beq lbl_fn_800C18BC_00000750
    cmpw r0, r4
    ble lbl_fn_800C18BC_00000750
    lwz r4, 0x44(r31)
    li r0, 0x0
    lwz r3, 0x3c(r31)
    addi r4, r4, 0x1
    stw r0, 0x4c(r31)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    stw r0, 0x44(r31)
lbl_fn_800C18BC_00000750:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C1990(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_800C1990_000007C0
lbl_fn_800C1990_00000794:
    cmpwi r30, 0x0
    li r30, 0x0
    bne lbl_fn_800C1990_000007B4
    lwz r0, 0x40(r28)
    add r3, r0, r31
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_800C1990_000007B8
lbl_fn_800C1990_000007B4:
    li r30, 0x1
lbl_fn_800C1990_000007B8:
    addi r31, r31, 0x30
    addi r29, r29, 0x1
lbl_fn_800C1990_000007C0:
    lwz r0, 0x3c(r28)
    cmplw r29, r0
    blt lbl_fn_800C1990_00000794
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C1A1C(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stfd f27, 0x140(r1)
    psq_st f27, 0x148(r1), 0, 0
    stfd f26, 0x130(r1)
    psq_st f26, 0x138(r1), 0, 0
    stfd f25, 0x120(r1)
    psq_st f25, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r3
    bl fn_80473E74
    lfs f0, lbl_808810D0
    lis r3, lbl_8078FF60@ha
    li r30, 0x0
    lfs f8, lbl_808810E8
    li r31, 0x1
    lfs f10, lbl_808810E0
    lfs f9, lbl_808810E4
    addi r3, r3, lbl_8078FF60@l
    lfs f7, lbl_808810EC
    li r0, -0x1
    stw r3, 0x0(r28)
    addi r3, r28, 0x164
    stw r30, 0x8(r28)
    stw r30, 0x3c(r28)
    stfs f10, 0x40(r28)
    stfs f9, 0x44(r28)
    stfs f8, 0x48(r28)
    stfs f8, 0x4c(r28)
    stfs f8, 0x50(r28)
    stfs f7, 0x54(r28)
    stw r30, 0x58(r28)
    stw r30, 0x5c(r28)
    stw r30, 0x60(r28)
    stw r30, 0x64(r28)
    stw r30, 0x68(r28)
    stw r30, 0x6c(r28)
    stw r30, 0x70(r28)
    stw r30, 0x74(r28)
    stw r31, 0x78(r28)
    stfs f0, 0x7c(r28)
    stfs f0, 0x80(r28)
    stfs f0, 0x84(r28)
    stfs f0, 0x88(r28)
    stfs f0, 0x8c(r28)
    stfs f0, 0x90(r28)
    stfs f0, 0x94(r28)
    stfs f0, 0x98(r28)
    stfs f0, 0x9c(r28)
    stfs f0, 0xa0(r28)
    stfs f0, 0xa4(r28)
    stfs f0, 0xa8(r28)
    stfs f0, 0xac(r28)
    stfs f0, 0xb0(r28)
    stw r30, 0xb4(r28)
    stw r30, 0xb8(r28)
    stw r30, 0xbc(r28)
    stw r30, 0xc0(r28)
    stw r30, 0xc4(r28)
    stw r0, 0xc8(r28)
    stw r30, 0xcc(r28)
    stw r31, 0xd0(r28)
    stfs f0, 0xd4(r28)
    stfs f0, 0xd8(r28)
    stfs f0, 0xdc(r28)
    stfs f0, 0xe0(r28)
    stfs f0, 0xe4(r28)
    stfs f0, 0xe8(r28)
    stfs f0, 0xec(r28)
    stfs f0, 0xf0(r28)
    stfs f0, 0xf4(r28)
    stfs f0, 0xf8(r28)
    stfs f0, 0xfc(r28)
    stfs f0, 0x100(r28)
    stfs f0, 0x104(r28)
    stfs f0, 0x108(r28)
    stw r30, 0x10c(r28)
    stw r30, 0x110(r28)
    stw r30, 0x114(r28)
    stw r30, 0x118(r28)
    stw r30, 0x11c(r28)
    stw r30, 0x120(r28)
    bl fn_800D5738
    lfs f2, lbl_808810EC
    addi r29, r1, 0x78
    lfs f28, lbl_808810D0
    li r5, 0x2
    lfs f27, lbl_808810F4
    li r0, 0x3
    lfs f7, lbl_808810E8
    addi r6, r1, 0x84
    lfs f26, lbl_808810F0
    mr r3, r29
    lfs f10, lbl_80881110
    mr r4, r29
    lfs f0, lbl_8088111C
    lfs f29, lbl_808810F8
    lfs f31, lbl_808810FC
    lfs f30, lbl_80881100
    lfs f13, lbl_80881104
    lfs f12, lbl_80881108
    lfs f11, lbl_8088110C
    lfs f9, lbl_80881114
    lfs f8, lbl_80881118
    stfs f2, 0x84(r1)
    stfs f0, 0x88(r1)
    stw r30, 0x194(r28)
    psq_l f1, 0x0(r6), 0, 0
    stw r30, 0x198(r28)
    stw r30, 0x19c(r28)
    stw r5, 0x1a0(r28)
    stw r0, 0x1a4(r28)
    stw r31, 0x1a8(r28)
    stw r30, 0x1ac(r28)
    stw r30, 0x1b0(r28)
    stfs f26, 0x1b4(r28)
    stfs f26, 0x1b8(r28)
    stfs f2, 0x1bc(r28)
    stfs f27, 0x1c0(r28)
    stfs f27, 0x1c4(r28)
    stfs f27, 0x1c8(r28)
    stfs f2, 0x1cc(r28)
    stfs f28, 0x1d0(r28)
    stfs f2, 0x1d4(r28)
    stfs f28, 0x1d8(r28)
    stfs f29, 0x1dc(r28)
    stw r30, 0x1e0(r28)
    stw r30, 0x1e4(r28)
    stw r30, 0x1e8(r28)
    stfs f2, 0x1ec(r28)
    stfs f31, 0x1f0(r28)
    stw r30, 0x1f4(r28)
    stw r30, 0x1f8(r28)
    stw r30, 0x1fc(r28)
    stfs f30, 0x200(r28)
    stfs f28, 0x204(r28)
    stfs f13, 0x208(r28)
    stfs f12, 0x20c(r28)
    stfs f11, 0x210(r28)
    stfs f28, 0x214(r28)
    stfs f10, 0x218(r28)
    stfs f9, 0x21c(r28)
    stfs f10, 0x220(r28)
    stfs f28, 0x224(r28)
    stfs f28, 0x228(r28)
    stfs f2, 0x22c(r28)
    stfs f2, 0x230(r28)
    stw r30, 0x234(r28)
    stw r31, 0x238(r28)
    stw r30, 0x23c(r28)
    stfs f8, 0x240(r28)
    stfs f7, 0x244(r28)
    stfs f7, 0x248(r28)
    stfs f7, 0x24c(r28)
    stfs f2, 0x250(r28)
    stfs f2, 0x8c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x80(r1)
    bl fn_805F98D0
    lfs f31, lbl_808810D0
    addi r6, r1, 0x38
    lfs f30, lbl_808810EC
    addi r5, r1, 0x48
    stfs f30, 0x38(r1)
    addi r4, r1, 0x58
    lfs f2, 0x80(r1)
    addi r3, r1, 0x68
    psq_l f1, 0x0(r29), 0, 0
    addi r8, r1, 0x90
    stfs f31, 0x3c(r1)
    addi r7, r1, 0xd0
    lfs f7, lbl_80881120
    psq_st f1, 0x254(r28), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f31, 0x48(r1)
    lfs f9, lbl_80881124
    stfs f30, 0x4c(r1)
    psq_st f1, 0x268(r28), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f31, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f2, 0x25c(r28)
    psq_l f2, 0x8(r6), 0, 0
    stfs f31, 0x58(r1)
    stfs f31, 0x5c(r1)
    psq_st f1, 0x278(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f31, 0x50(r1)
    stfs f31, 0x54(r1)
    psq_st f2, 0x270(r28), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f31, 0x68(r1)
    stfs f31, 0x6c(r1)
    psq_st f1, 0x288(r28), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f30, 0x60(r1)
    stfs f31, 0x64(r1)
    psq_st f2, 0x280(r28), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f31, 0x90(r1)
    stfs f30, 0x94(r1)
    psq_st f1, 0x298(r28), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    lfs f13, 0xd0(r1)
    stfs f31, 0x70(r1)
    fmuls f12, f9, f13
    stfs f31, 0x74(r1)
    psq_st f2, 0x290(r28), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x2a0(r28), 0, 0
    fmr f2, f31
    stfs f2, 0xd8(r1)
    frsp f2, f2
    lfs f11, 0xd8(r1)
    stw r30, 0x260(r28)
    fmuls f0, f12, f11
    stw r30, 0x264(r28)
    stw r30, 0x2a8(r28)
    stw r30, 0x2ac(r28)
    stfs f30, 0x2b0(r28)
    stfs f31, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f31, 0xc8(r1)
    stfs f30, 0xcc(r1)
    stfs f31, 0xc(r28)
    stfs f31, 0x10(r28)
    stfs f31, 0x14(r28)
    stfs f30, 0x18(r28)
    stfs f30, 0xb0(r1)
    stfs f30, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f30, 0xbc(r1)
    stfs f30, 0x2c(r28)
    stfs f30, 0x30(r28)
    stfs f30, 0x34(r28)
    stfs f30, 0x38(r28)
    stfs f7, 0xa0(r1)
    stfs f7, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f30, 0xac(r1)
    stfs f7, 0x1c(r28)
    stfs f7, 0x20(r28)
    stfs f7, 0x24(r28)
    stfs f30, 0x28(r28)
    stfs f31, 0x98(r1)
    stfs f31, 0xdc(r1)
    psq_st f1, 0x154(r28), 0, 0
    stfs f2, 0x15c(r28)
    stfs f31, 0x160(r28)
    lfs f10, 0xd4(r1)
    fmuls f8, f9, f11
    fmadds f7, f12, f13, f30
    stfs f0, 0xe8(r1)
    fmuls f9, f9, f10
    addi r4, r1, 0xe0
    fmuls f25, f12, f10
    fmadds f26, f8, f11, f30
    fmuls f27, f9, f11
    stfs f7, 0xe0(r1)
    fmuls f29, f9, f13
    mr r3, r28
    fmadds f28, f9, f10, f30
    fmuls f11, f8, f10
    fmuls f13, f8, f13
    stfs f25, 0xe4(r1)
    fmuls f8, f8, f31
    fmuls f9, f9, f31
    psq_l f1, 0x0(r4), 0, 0
    fmuls f10, f12, f31
    stfs f29, 0xf0(r1)
    stfs f28, 0xf4(r1)
    stfs f10, 0xec(r1)
    psq_l f3, 0x10(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f27, 0xf8(r1)
    stfs f9, 0xfc(r1)
    psq_l f4, 0x18(r4), 0, 0
    stfs f13, 0x100(r1)
    stfs f11, 0x104(r1)
    psq_l f5, 0x20(r4), 0, 0
    stfs f26, 0x108(r1)
    stfs f8, 0x10c(r1)
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x124(r28), 0, 0
    psq_st f2, 0x12c(r28), 0, 0
    psq_st f3, 0x134(r28), 0, 0
    psq_st f4, 0x13c(r28), 0, 0
    psq_st f5, 0x144(r28), 0, 0
    psq_st f6, 0x14c(r28), 0, 0
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    stfs f25, 0xc(r1)
    lfd f30, 0x170(r1)
    stfs f29, 0x14(r1)
    psq_l f29, 0x168(r1), 0, 0
    stfs f28, 0x18(r1)
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    stfs f27, 0x1c(r1)
    lfd f28, 0x150(r1)
    psq_l f27, 0x148(r1), 0, 0
    stfs f26, 0x28(r1)
    lfd f27, 0x140(r1)
    psq_l f26, 0x138(r1), 0, 0
    lfd f26, 0x130(r1)
    psq_l f25, 0x128(r1), 0, 0
    lfd f25, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x194(r1)
    stfs f7, 0x8(r1)
    stfs f0, 0x10(r1)
    stfs f13, 0x20(r1)
    stfs f11, 0x24(r1)
    stfs f10, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f8, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_800C1F5C(void)
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
    beq lbl_fn_800C1F5C_00000D6C
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_800C1F5C_00000D6C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C1F5C_00000D6C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C1FB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    beq lbl_fn_800C1FB4_00000EC4
    li r4, -0x1
    addi r3, r3, 0x164
    bl fn_800D5808
    addic. r31, r27, 0xd0
    beq lbl_fn_800C1FB4_00000DE8
    addic. r0, r31, 0x3c
    beq lbl_fn_800C1FB4_00000DE8
    lwz r3, 0x40(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800C1FB4_00000DDC
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_800C1FB4_00000DDC:
    li r0, 0x0
    stw r0, 0x40(r31)
    stw r0, 0x3c(r31)
lbl_fn_800C1FB4_00000DE8:
    addic. r31, r27, 0x78
    beq lbl_fn_800C1FB4_00000E1C
    addic. r0, r31, 0x3c
    beq lbl_fn_800C1FB4_00000E1C
    lwz r3, 0x40(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800C1FB4_00000E10
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_800C1FB4_00000E10:
    li r0, 0x0
    stw r0, 0x40(r31)
    stw r0, 0x3c(r31)
lbl_fn_800C1FB4_00000E1C:
    addic. r31, r27, 0x64
    beq lbl_fn_800C1FB4_00000E74
    beq lbl_fn_800C1FB4_00000E74
    beq lbl_fn_800C1FB4_00000E74
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_fn_800C1FB4_00000E74
    lwz r29, 0x4(r31)
    mulli r3, r29, 0x1f4
    subf r0, r29, r29
    stw r0, 0x4(r31)
    add r30, r4, r3
    b lbl_fn_800C1FB4_00000E64
lbl_fn_800C1FB4_00000E50:
    subi r30, r30, 0x1f4
    li r4, -0x1
    mr r3, r30
    bl fn_8004B338
    subi r29, r29, 0x1
lbl_fn_800C1FB4_00000E64:
    cmpwi r29, 0x0
    bne lbl_fn_800C1FB4_00000E50
    lwz r3, 0x0(r31)
    bl dtor_80084684
lbl_fn_800C1FB4_00000E74:
    addic. r4, r27, 0x58
    beq lbl_fn_800C1FB4_00000EA0
    beq lbl_fn_800C1FB4_00000EA0
    beq lbl_fn_800C1FB4_00000EA0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800C1FB4_00000EA0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_800C1FB4_00000EA0:
    cmpwi r27, 0x0
    beq lbl_fn_800C1FB4_00000EB4
    mr r3, r27
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800C1FB4_00000EB4:
    cmpwi r28, 0x0
    ble lbl_fn_800C1FB4_00000EC4
    mr r3, r27
    bl dtor_80084684
lbl_fn_800C1FB4_00000EC4:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C2108(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_800C2108_00000F04
    li r3, 0x1
    b lbl_fn_800C2108_00001034
lbl_fn_800C2108_00000F04:
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_800C2108_00000F18
    mr r3, r27
    bl fn_800C2274
lbl_fn_800C2108_00000F18:
    lwz r0, 0x18c(r27)
    li r31, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_800C2108_00000F48
    addi r3, r27, 0x164
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_800C2108_00000F4C
    addi r3, r27, 0x184
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_800C2108_00000F4C
lbl_fn_800C2108_00000F48:
    li r31, 0x1
lbl_fn_800C2108_00000F4C:
    cmpwi r31, 0x0
    bne lbl_fn_800C2108_00000F64
    lis r4, lbl_807337B0@ha
    addi r3, r27, 0x164
    addi r4, r4, lbl_807337B0@l
    bl fn_800D5908
lbl_fn_800C2108_00000F64:
    addi r3, r27, 0x164
    bl fn_800D59B8
    lwz r0, 0xcc(r27)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_800C2108_00000FD0
    li r30, 0x0
    li r31, 0x0
    li r29, 0x0
    b lbl_fn_800C2108_00000FB8
lbl_fn_800C2108_00000F8C:
    cmpwi r30, 0x0
    li r30, 0x0
    bne lbl_fn_800C2108_00000FAC
    lwz r0, 0x110(r27)
    add r3, r0, r29
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_800C2108_00000FB0
lbl_fn_800C2108_00000FAC:
    li r30, 0x1
lbl_fn_800C2108_00000FB0:
    addi r29, r29, 0x30
    addi r31, r31, 0x1
lbl_fn_800C2108_00000FB8:
    lwz r0, 0x10c(r27)
    cmplw r31, r0
    blt lbl_fn_800C2108_00000F8C
    cmpwi r30, 0x0
    beq lbl_fn_800C2108_00000FD0
    li r28, 0x1
lbl_fn_800C2108_00000FD0:
    lwz r0, 0x70(r27)
    cmpwi r0, 0x0
    beq lbl_fn_800C2108_00001030
    li r31, 0x0
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_800C2108_00001018
lbl_fn_800C2108_00000FEC:
    cmpwi r31, 0x0
    li r31, 0x0
    bne lbl_fn_800C2108_0000100C
    lwz r0, 0xb8(r27)
    add r3, r0, r29
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_800C2108_00001010
lbl_fn_800C2108_0000100C:
    li r31, 0x1
lbl_fn_800C2108_00001010:
    addi r29, r29, 0x30
    addi r30, r30, 0x1
lbl_fn_800C2108_00001018:
    lwz r0, 0xb4(r27)
    cmplw r30, r0
    blt lbl_fn_800C2108_00000FEC
    cmpwi r31, 0x0
    beq lbl_fn_800C2108_00001030
    li r28, 0x1
lbl_fn_800C2108_00001030:
    mr r3, r28
lbl_fn_800C2108_00001034:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C2274(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x40
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    bl _savegpr_27
    li r0, 0x1
    stw r0, 0x8(r3)
    mr r27, r3
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_800C2274_00001184
    lfs f1, lbl_808810D0
    li r29, 0x0
    lfs f0, lbl_808810EC
    li r30, 0x0
    stfs f1, 0x10(r1)
    li r31, 0x0
    lfs f31, lbl_80881128
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0xc(r27)
    stfs f1, 0x10(r27)
    stfs f1, 0x14(r27)
    stfs f0, 0x18(r27)
    b lbl_fn_800C2274_00001174
lbl_fn_800C2274_000010D0:
    mr r3, r27
    bl fn_80478034
    lwzx r28, r3, r30
    addi r4, r1, 0xe
    lfs f1, lbl_808810D0
    sth r31, 0xe(r1)
    addi r3, r28, 0x18
    bl fn_8047202C
    fdivs f30, f1, f31
    sth r31, 0xc(r1)
    lfs f1, lbl_808810D0
    addi r3, r28, 0x24
    addi r4, r1, 0xc
    bl fn_8047202C
    fdivs f29, f1, f31
    sth r31, 0xa(r1)
    lfs f1, lbl_808810D0
    addi r3, r28, 0x30
    addi r4, r1, 0xa
    bl fn_8047202C
    fdivs f28, f1, f31
    sth r31, 0x8(r1)
    lfs f1, lbl_808810D0
    addi r3, r28, 0x3c
    addi r4, r1, 0x8
    bl fn_8047202C
    fdivs f4, f1, f31
    lfs f3, 0xc(r27)
    lfs f2, 0x10(r27)
    addi r30, r30, 0x4
    lfs f1, 0x14(r27)
    addi r29, r29, 0x1
    lfs f0, 0x18(r27)
    fadds f3, f3, f30
    fadds f2, f2, f29
    fadds f1, f1, f28
    stfs f3, 0xc(r27)
    fadds f0, f0, f4
    stfs f2, 0x10(r27)
    stfs f1, 0x14(r27)
    stfs f0, 0x18(r27)
lbl_fn_800C2274_00001174:
    mr r3, r27
    bl fn_80478014
    cmpw r29, r3
    blt lbl_fn_800C2274_000010D0
lbl_fn_800C2274_00001184:
    addi r11, r1, 0x40
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_800C23E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x5c(r3)
    bl fn_80477FDC
    add r3, r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C2418(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x68(r3)
    bl fn_80477FF8
    add r3, r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C2448(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80477FDC
    cmpw r31, r3
    bge lbl_fn_800C2448_00001258
    mr r3, r30
    bl fn_80477FA4
    mulli r0, r31, 0x44
    add r3, r3, r0
    b lbl_fn_800C2448_00001270
lbl_fn_800C2448_00001258:
    mr r3, r30
    bl fn_80477FDC
    subf r0, r3, r31
    lwz r3, 0x58(r30)
    mulli r0, r0, 0x44
    add r3, r3, r0
lbl_fn_800C2448_00001270:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C24B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80477FDC
    cmpw r31, r3
    bge lbl_fn_800C24B4_000012C4
    mr r3, r30
    bl fn_80477FA4
    mulli r0, r31, 0x44
    add r3, r3, r0
    b lbl_fn_800C24B4_000012DC
lbl_fn_800C24B4_000012C4:
    mr r3, r30
    bl fn_80477FDC
    subf r0, r3, r31
    lwz r3, 0x58(r30)
    mulli r0, r0, 0x44
    add r3, r3, r0
lbl_fn_800C24B4_000012DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C2520(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80477FF8
    cmpw r31, r3
    bge lbl_fn_800C2520_00001330
    mr r3, r30
    bl fn_80477FC0
    mulli r0, r31, 0x1f4
    add r3, r3, r0
    b lbl_fn_800C2520_00001348
lbl_fn_800C2520_00001330:
    mr r3, r30
    bl fn_80477FF8
    subf r0, r3, r31
    lwz r3, 0x64(r30)
    mulli r0, r0, 0x1f4
    add r3, r3, r0
lbl_fn_800C2520_00001348:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C258C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C258C_000013FC
    lfs f2, lbl_808810E8
    lfs f0, 0xdc(r3)
    lfs f1, 0xe0(r3)
    fmuls f4, f0, f2
    lfs f0, 0xd4(r3)
    fmuls f3, f1, f2
    lfs f2, 0x0(r4)
    lfs f1, 0xd8(r3)
    fsubs f6, f0, f4
    fsubs f5, f1, f3
    lfs f1, 0x8(r4)
    stfs f2, 0x18(r1)
    fcmpo cr0, f2, f6
    stfs f1, 0x1c(r1)
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f5, 0x14(r1)
    cror eq, gt, eq
    bne lbl_fn_800C258C_000013FC
    lfs f0, 0xdc(r3)
    fadds f0, f6, f0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800C258C_000013FC
    fcmpo cr0, f1, f5
    cror eq, gt, eq
    bne lbl_fn_800C258C_000013FC
    lfs f0, 0xe0(r3)
    fadds f0, f5, f0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_800C258C_000013FC
    addi r3, r3, 0xd0
    b lbl_fn_800C258C_00001400
lbl_fn_800C258C_000013FC:
    li r3, 0x0
lbl_fn_800C258C_00001400:
    addi r1, r1, 0x20
    blr
}

asm void fn_800C2634(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800C2634_000014A0
    lfs f3, lbl_808810EC
    li r0, 0x1
    lfs f2, lbl_808810D0
    addi r4, r1, 0x18
    stfs f3, 0x18(r1)
    addi r5, r1, 0x10
    lfs f0, lbl_808810E8
    addi r6, r1, 0x20
    stfs f3, 0x1c(r1)
    addi r7, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x14(r1)
    psq_st f1, 0x84(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    stfs f2, 0x24(r1)
    psq_st f1, 0x7c(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x9c(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stw r0, 0x70(r3)
    stw r0, 0x78(r3)
    stfs f2, 0x28(r1)
    stfs f2, 0xa4(r3)
    psq_st f1, 0x8c(r3), 0, 0
lbl_fn_800C2634_000014A0:
    lwz r3, 0xb8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C2634_000014B8
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_800C2634_000014B8:
    cmpwi r31, 0x0
    stw r31, 0xb4(r30)
    beq lbl_fn_800C2634_00001504
    mulli r3, r31, 0x30
    li r4, 0x6
    la r5, lbl_8087D91C
    la r6, lbl_8087D918
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    mr r7, r31
    li r6, 0x30
    addi r4, r4, fn_800D5738@l
    addi r5, r5, fn_800D5808@l
    bl fn_80695720
    stw r3, 0xb8(r30)
    b lbl_fn_800C2634_0000150C
lbl_fn_800C2634_00001504:
    li r0, 0x0
    stw r0, 0xb8(r30)
lbl_fn_800C2634_0000150C:
    cmpwi cr1, r31, 0x0
    li r3, 0x0
    li r4, 0x0
    ble cr1, lbl_fn_800C2634_00001658
    cmpwi r31, 0x8
    subi r6, r31, 0x8
    ble lbl_fn_800C2634_00001628
    li r7, 0x0
    blt cr1, lbl_fn_800C2634_00001544
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r31, r0
    bgt lbl_fn_800C2634_00001544
    li r7, 0x1
lbl_fn_800C2634_00001544:
    cmpwi r7, 0x0
    beq lbl_fn_800C2634_00001628
    addi r0, r6, 0x7
    li r12, 0x1
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_800C2634_00001628
lbl_fn_800C2634_00001564:
    lwz r0, 0xb8(r30)
    addi r10, r3, 0x1
    addi r9, r3, 0x2
    addi r8, r3, 0x3
    add r11, r0, r4
    addi r7, r3, 0x4
    stb r12, 0x2d(r11)
    addi r6, r3, 0x5
    addi r5, r3, 0x6
    addi r0, r3, 0x7
    stb r12, 0x2e(r11)
    mulli r10, r10, 0x30
    addi r3, r3, 0x8
    lwz r11, 0xb8(r30)
    addi r4, r4, 0x180
    mulli r9, r9, 0x30
    add r10, r11, r10
    stb r12, 0x2d(r10)
    mulli r8, r8, 0x30
    stb r12, 0x2e(r10)
    lwz r10, 0xb8(r30)
    mulli r7, r7, 0x30
    add r9, r10, r9
    stb r12, 0x2d(r9)
    mulli r6, r6, 0x30
    stb r12, 0x2e(r9)
    mulli r5, r5, 0x30
    lwz r9, 0xb8(r30)
    add r8, r9, r8
    stb r12, 0x2d(r8)
    mulli r0, r0, 0x30
    stb r12, 0x2e(r8)
    lwz r8, 0xb8(r30)
    add r7, r8, r7
    stb r12, 0x2d(r7)
    stb r12, 0x2e(r7)
    lwz r7, 0xb8(r30)
    add r6, r7, r6
    stb r12, 0x2d(r6)
    stb r12, 0x2e(r6)
    lwz r6, 0xb8(r30)
    add r5, r6, r5
    stb r12, 0x2d(r5)
    stb r12, 0x2e(r5)
    lwz r5, 0xb8(r30)
    add r5, r5, r0
    stb r12, 0x2d(r5)
    stb r12, 0x2e(r5)
    bdnz lbl_fn_800C2634_00001564
lbl_fn_800C2634_00001628:
    subf r0, r3, r31
    li r5, 0x1
    mulli r4, r3, 0x30
    mtctr r0
    cmpw r3, r31
    bge lbl_fn_800C2634_00001658
lbl_fn_800C2634_00001640:
    lwz r0, 0xb8(r30)
    add r3, r0, r4
    addi r4, r4, 0x30
    stb r5, 0x2d(r3)
    stb r5, 0x2e(r3)
    bdnz lbl_fn_800C2634_00001640
lbl_fn_800C2634_00001658:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800C289C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    bne lbl_fn_800C289C_000016A4
    li r0, 0x0
    stw r0, 0x70(r3)
    b lbl_fn_800C289C_000018DC
lbl_fn_800C289C_000016A4:
    lwz r0, 0x70(r3)
    li r29, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_800C289C_00001724
    lfs f3, lbl_808810EC
    li r0, 0x1
    lfs f2, lbl_808810D0
    addi r7, r1, 0x8
    stfs f3, 0x8(r1)
    addi r6, r1, 0x10
    lfs f0, lbl_808810E8
    addi r5, r1, 0x20
    stfs f3, 0xc(r1)
    addi r4, r1, 0x18
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x14(r1)
    psq_st f1, 0x84(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x20(r1)
    stfs f2, 0x24(r1)
    psq_st f1, 0x7c(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x9c(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x70(r3)
    stw r0, 0x78(r3)
    stfs f2, 0x28(r1)
    stfs f2, 0xa4(r3)
    psq_st f1, 0x8c(r3), 0, 0
lbl_fn_800C289C_00001724:
    lwz r3, 0xb8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C289C_0000173C
    lis r4, fn_800D5808@ha
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_800C289C_0000173C:
    cmpwi r29, 0x0
    stw r29, 0xb4(r30)
    beq lbl_fn_800C289C_00001788
    mulli r3, r29, 0x30
    li r4, 0x6
    la r5, lbl_8087D91C
    la r6, lbl_8087D918
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    addi r4, r4, fn_800D5738@l
    li r6, 0x30
    addi r5, r5, fn_800D5808@l
    li r7, 0x1
    bl fn_80695720
    stw r3, 0xb8(r30)
    b lbl_fn_800C289C_00001790
lbl_fn_800C289C_00001788:
    li r0, 0x0
    stw r0, 0xb8(r30)
lbl_fn_800C289C_00001790:
    cmpwi cr1, r29, 0x0
    li r3, 0x0
    li r4, 0x0
    ble cr1, lbl_fn_800C289C_000018D0
    cmpwi r29, 0x8
    li r0, -0x7
    ble lbl_fn_800C289C_000018A0
    li r6, 0x0
    blt cr1, lbl_fn_800C289C_000017C8
    lis r5, 0x8000
    subi r5, r5, 0x2
    cmpw r29, r5
    bgt lbl_fn_800C289C_000017C8
    li r6, 0x1
lbl_fn_800C289C_000017C8:
    cmpwi r6, 0x0
    beq lbl_fn_800C289C_000018A0
    li r29, 0x1
    b lbl_fn_800C289C_00001898
lbl_fn_800C289C_000017D8:
    lwz r5, 0xb8(r30)
    addi r11, r3, 0x1
    addi r10, r3, 0x2
    addi r9, r3, 0x3
    add r12, r5, r4
    addi r8, r3, 0x4
    stb r29, 0x2d(r12)
    addi r7, r3, 0x5
    addi r6, r3, 0x6
    addi r5, r3, 0x7
    stb r29, 0x2e(r12)
    mulli r11, r11, 0x30
    addi r3, r3, 0x8
    lwz r12, 0xb8(r30)
    addi r4, r4, 0x180
    mulli r10, r10, 0x30
    add r11, r12, r11
    stb r29, 0x2d(r11)
    mulli r9, r9, 0x30
    stb r29, 0x2e(r11)
    lwz r11, 0xb8(r30)
    mulli r8, r8, 0x30
    add r10, r11, r10
    stb r29, 0x2d(r10)
    mulli r7, r7, 0x30
    stb r29, 0x2e(r10)
    mulli r6, r6, 0x30
    lwz r10, 0xb8(r30)
    add r9, r10, r9
    stb r29, 0x2d(r9)
    mulli r5, r5, 0x30
    stb r29, 0x2e(r9)
    lwz r9, 0xb8(r30)
    add r8, r9, r8
    stb r29, 0x2d(r8)
    stb r29, 0x2e(r8)
    lwz r8, 0xb8(r30)
    add r7, r8, r7
    stb r29, 0x2d(r7)
    stb r29, 0x2e(r7)
    lwz r7, 0xb8(r30)
    add r6, r7, r6
    stb r29, 0x2d(r6)
    stb r29, 0x2e(r6)
    lwz r6, 0xb8(r30)
    add r5, r6, r5
    stb r29, 0x2d(r5)
    stb r29, 0x2e(r5)
lbl_fn_800C289C_00001898:
    cmpw r3, r0
    blt lbl_fn_800C289C_000017D8
lbl_fn_800C289C_000018A0:
    subfic r0, r3, 0x1
    li r5, 0x1
    mulli r4, r3, 0x30
    mtctr r0
    cmpwi r3, 0x1
    bge lbl_fn_800C289C_000018D0
lbl_fn_800C289C_000018B8:
    lwz r0, 0xb8(r30)
    add r3, r0, r4
    addi r4, r4, 0x30
    stb r5, 0x2d(r3)
    stb r5, 0x2e(r3)
    bdnz lbl_fn_800C289C_000018B8
lbl_fn_800C289C_000018D0:
    lwz r3, 0xb8(r30)
    mr r4, r31
    bl fn_800D5908
lbl_fn_800C289C_000018DC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800C2B24(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f2, lbl_808810D0
    stw r0, 0x34(r1)
    addi r7, r1, 0x10
    li r0, 0x1
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r8, 0x110(r3)
    stfs f2, 0x10(r1)
    cmpwi r8, 0x0
    stfs f2, 0x14(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0xf4(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xd4(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0xcc(r3)
    stfs f2, 0x18(r1)
    stfs f2, 0xfc(r3)
    psq_st f1, 0xdc(r3), 0, 0
    stw r0, 0xd0(r3)
    beq lbl_fn_800C2B24_0000196C
    lis r4, fn_800D5808@ha
    mr r3, r8
    addi r4, r4, fn_800D5808@l
    bl fn_80695A50
lbl_fn_800C2B24_0000196C:
    li r0, 0x1
    stw r0, 0x10c(r30)
    mulli r3, r0, 0x30
    li r4, 0x6
    la r5, lbl_8087D91C
    la r6, lbl_8087D918
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    addi r4, r4, fn_800D5738@l
    li r6, 0x30
    addi r5, r5, fn_800D5808@l
    li r7, 0x1
    bl fn_80695720
    stw r3, 0x110(r30)
    b lbl_fn_800C2B24_000019B8
    stw r0, 0x110(r30)
lbl_fn_800C2B24_000019B8:
    lwz r3, 0x110(r30)
    mr r4, r31
    bl fn_800D5908
    lfs f0, lbl_808810D0
    addi r3, r1, 0x8
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xe4(r30), 0, 0
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C2C20(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    lfs f7, lbl_80881124
    addi r5, r1, 0x38
    lfs f11, 0x0(r4)
    lfs f9, 0x8(r4)
    fmuls f10, f7, f11
    lfs f8, 0x4(r4)
    fmuls f0, f7, f9
    lfs f13, 0xc(r4)
    fmuls f7, f7, f8
    lfs f12, lbl_808810EC
    fmuls f29, f10, f9
    psq_l f1, 0x0(r4), 0, 0
    fmuls f30, f10, f8
    lfs f2, 0x8(r4)
    fmadds f31, f10, f11, f12
    stfs f29, 0x40(r1)
    fmadds f27, f7, f8, f12
    stfs f31, 0x38(r1)
    fmuls f26, f7, f9
    fmuls f28, f7, f11
    stfs f30, 0x3c(r1)
    fmadds f12, f0, f9, f12
    fmuls f9, f0, f8
    psq_st f1, 0x154(r3), 0, 0
    fmuls f8, f0, f11
    fmuls f11, f0, f13
    psq_l f1, 0x0(r5), 0, 0
    fmuls f7, f7, f13
    fmuls f0, f10, f13
    stfs f28, 0x48(r1)
    stfs f27, 0x4c(r1)
    psq_l f3, 0x10(r5), 0, 0
    stfs f26, 0x50(r1)
    stfs f7, 0x54(r1)
    psq_l f4, 0x18(r5), 0, 0
    stfs f8, 0x58(r1)
    stfs f9, 0x5c(r1)
    psq_l f5, 0x20(r5), 0, 0
    stfs f12, 0x60(r1)
    stfs f11, 0x64(r1)
    psq_l f6, 0x28(r5), 0, 0
    stfs f0, 0x44(r1)
    stfs f2, 0x15c(r3)
    psq_l f2, 0x8(r5), 0, 0
    stfs f13, 0x160(r3)
    psq_st f1, 0x124(r3), 0, 0
    psq_st f2, 0x12c(r3), 0, 0
    psq_st f3, 0x134(r3), 0, 0
    psq_st f4, 0x13c(r3), 0, 0
    psq_st f5, 0x144(r3), 0, 0
    psq_st f6, 0x14c(r3), 0, 0
    stfs f31, 0x2c(r1)
    psq_l f31, 0xc8(r1), 0, 0
    stfs f30, 0x30(r1)
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    stfs f29, 0x34(r1)
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    stfs f28, 0x20(r1)
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    stfs f27, 0x24(r1)
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    stfs f26, 0x28(r1)
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    stfs f8, 0x14(r1)
    lfd f26, 0x70(r1)
    stfs f9, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f0, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f11, 0x10(r1)
    addi r1, r1, 0xd0
    blr
}

asm void fn_800C2D88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_800C2D88_00001BCC
lbl_fn_800C2D88_00001B88:
    mr r3, r28
    bl fn_80477FDC
    cmpw r29, r3
    bge lbl_fn_800C2D88_00001BA8
    mr r3, r28
    bl fn_80477FA4
    add r3, r3, r30
    b lbl_fn_800C2D88_00001BC0
lbl_fn_800C2D88_00001BA8:
    mr r3, r28
    bl fn_80477FDC
    subf r0, r3, r29
    lwz r3, 0x58(r28)
    mulli r0, r0, 0x44
    add r3, r3, r0
lbl_fn_800C2D88_00001BC0:
    bl fn_800795DC
    addi r30, r30, 0x44
    addi r29, r29, 0x1
lbl_fn_800C2D88_00001BCC:
    lwz r31, 0x5c(r28)
    mr r3, r28
    bl fn_80477FDC
    add r0, r3, r31
    cmpw r29, r0
    blt lbl_fn_800C2D88_00001B88
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C2E30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_807337B0@ha
    addi r30, r30, lbl_807337B0@l
    stw r29, 0x14(r1)
    mr r29, r4
    addi r4, r30, 0x19
    stw r28, 0x10(r1)
    mr r28, r3
    addi r5, r28, 0x120
    mr r3, r29
    bl fn_80087994
    lis r31, fn_800C2EE0@ha
    lfs f1, lbl_8088111C
    lfs f2, lbl_808810EC
    mr r3, r29
    lfs f3, lbl_8088112C
    mr r7, r28
    addi r4, r30, 0x27
    addi r5, r28, 0x154
    addi r6, r31, fn_800C2EE0@l
    bl fn_80087E9C
    lfs f1, lbl_80881130
    mr r3, r29
    lfs f2, lbl_80881134
    mr r7, r28
    lfs f3, lbl_80881104
    addi r4, r30, 0x35
    addi r5, r28, 0x160
    addi r6, r31, fn_800C2EE0@l
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C2EE0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    stfd f26, 0x90(r1)
    psq_st f26, 0x98(r1), 0, 0
    stfd f25, 0x80(r1)
    psq_st f25, 0x88(r1), 0, 0
    stfd f24, 0x70(r1)
    psq_st f24, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    addi r3, r3, 0x154
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x15c(r31)
    addi r3, r1, 0x38
    psq_l f1, 0x154(r31), 0, 0
    psq_st f1, 0x154(r31), 0, 0
    frsp f12, f2
    lfs f27, lbl_80881124
    lfs f28, 0x154(r31)
    lfs f30, 0x158(r31)
    fmuls f13, f27, f2
    fmuls f29, f27, f28
    lfs f26, lbl_808810EC
    fmuls f31, f27, f30
    lfs f25, 0x160(r31)
    fmadds f24, f13, f2, f26
    fmuls f9, f29, f2
    fmuls f10, f29, f30
    stfs f24, 0x60(r1)
    fmadds f7, f31, f30, f26
    fmadds f11, f29, f28, f26
    stfs f9, 0x40(r1)
    fmuls f8, f31, f28
    fmuls f0, f31, f2
    stfs f11, 0x38(r1)
    fmuls f30, f13, f30
    fmuls f28, f13, f28
    stfs f10, 0x3c(r1)
    fmuls f13, f31, f25
    fmuls f26, f29, f25
    psq_l f1, 0x0(r3), 0, 0
    fmuls f12, f27, f12
    stfs f8, 0x48(r1)
    fmuls f12, f12, f25
    stfs f7, 0x4c(r1)
    stfs f12, 0x64(r1)
    psq_l f3, 0x10(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    stfs f26, 0x44(r1)
    stfs f2, 0x15c(r31)
    psq_l f2, 0x8(r3), 0, 0
    stfs f0, 0x50(r1)
    stfs f13, 0x54(r1)
    psq_l f4, 0x18(r3), 0, 0
    stfs f28, 0x58(r1)
    stfs f30, 0x5c(r1)
    psq_l f5, 0x20(r3), 0, 0
    stfs f25, 0x160(r31)
    psq_st f1, 0x124(r31), 0, 0
    psq_st f2, 0x12c(r31), 0, 0
    psq_st f3, 0x134(r31), 0, 0
    psq_st f4, 0x13c(r31), 0, 0
    psq_st f5, 0x144(r31), 0, 0
    psq_st f6, 0x14c(r31), 0, 0
    psq_l f31, 0xe8(r1), 0, 0
    stfs f28, 0x20(r1)
    lfd f31, 0xe0(r1)
    stfs f30, 0x24(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    stfs f24, 0x28(r1)
    lfd f27, 0xa0(r1)
    stfs f26, 0x2c(r1)
    psq_l f26, 0x98(r1), 0, 0
    lfd f26, 0x90(r1)
    psq_l f25, 0x88(r1), 0, 0
    lfd f25, 0x80(r1)
    psq_l f24, 0x78(r1), 0, 0
    lfd f24, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r0, 0xf4(r1)
    stfs f11, 0x8(r1)
    stfs f10, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f13, 0x30(r1)
    stfs f12, 0x34(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
