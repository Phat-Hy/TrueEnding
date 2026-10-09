#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_8004B20C(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_800697D8(void);
extern void fn_8007708C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_800CFBA0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DCA6C(void);
extern void fn_801F3FF8(void);
extern void fn_802085E0(void);
extern void fn_80208694(void);
extern void fn_8021771C(void);
extern void fn_8021F09C(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803754F0(void);
extern void fn_803B27F8(void);
extern void fn_803B8E60(void);
extern void fn_803BDEE4(void);
extern void fn_803BE8C0(void);
extern void fn_80473E8C(void);
extern void fn_80481668(void);
extern void fn_804A39EC(void);
extern void fn_8056B3D8(void);
extern void fn_8056BD38(void);
extern void fn_80570A18(void);
extern void fn_80570A44(void);
extern void fn_805B9F54(void);
extern void fn_805BC6CC(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_806952C4(void);
extern void fn_80695AD0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074DA2C[];
extern u8 lbl_8074DAF8[];
extern u8 lbl_8074DB70[];
extern u8 lbl_8074DB88[];
extern u8 lbl_8074DBE8[];
extern u8 lbl_8074DC1C[];
extern u8 lbl_8074DDF8[];
extern u8 lbl_8074DEC0[];
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_8078A388[];
extern u8 lbl_8078A4B8[];
extern u8 lbl_807C8458[];

/* Small data declarations */
extern u32 lbl_8087DCCC;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F440;
extern u32 lbl_8087F490;
extern u32 lbl_8087F540;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885748;
extern u32 lbl_808857A8;
extern u32 lbl_808857F8;
extern u32 lbl_808857FC;
extern u32 lbl_80885800;
extern u32 lbl_80885804;
extern u32 lbl_80885808;
extern u32 lbl_8088580C;
extern u32 lbl_80885810;
extern u32 lbl_80885814;

/* Function declarations */
void fn_80375B78(void);
void fn_80375D0C(void);
void fn_80376150(void);
void fn_80376194(void);
void fn_803761A4(void);
void fn_803761AC(void);
void fn_803761BC(void);
void fn_803761CC(void);
void fn_803761DC(void);
void fn_803761E4(void);
void fn_803761EC(void);
void fn_803761F4(void);
void fn_803761FC(void);
void fn_80376210(void);
void fn_80376224(void);
void fn_80376238(void);
void fn_8037624C(void);
void fn_80376254(void);
void fn_80376324(void);
void fn_80376568(void);
void fn_803766E4(void);
void fn_80376730(void);
void fn_80376804(void);
void fn_80376A08(void);
void fn_80376A0C(void);
void fn_80376AD4(void);
void fn_80376B68(void);
void fn_80376BE8(void);
void fn_80376D40(void);
void fn_80376DD8(void);
void fn_80377298(void);

asm void fn_80375B78(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stmw r26, 0x108(r1)
    mr r29, r3
    mr r30, r4
    li r31, 0x0
    lwz r3, 0x48(r3)
    lwz r4, 0x4c(r29)
    lwz r5, 0x50(r29)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80375B78_0000017C
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80375B78_0000017C
    lwz r27, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r26, -0x1
    mr r3, r27
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80375B78_0000009C
    addi r3, r27, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r26, r3, 0x64
    bne lbl_fn_80375B78_0000009C
    mr r3, r27
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80375B78_0000009C
    addi r3, r27, 0x6
    bl fn_80684600
    add r26, r26, r3
lbl_fn_80375B78_0000009C:
    lis r3, lbl_8074DB88@ha
    li r4, 0x0
    addi r3, r3, lbl_8074DB88@l
    b lbl_fn_80375B78_000000D4
lbl_fn_80375B78_000000AC:
    cmpw r26, r0
    bne lbl_fn_80375B78_000000CC
    lis r3, lbl_8074DB88@ha
    slwi r0, r4, 3
    addi r3, r3, lbl_8074DB88@l
    add r3, r3, r0
    lwz r5, 0x4(r3)
    b lbl_fn_80375B78_000000E4
lbl_fn_80375B78_000000CC:
    addi r3, r3, 0x8
    addi r4, r4, 0x1
lbl_fn_80375B78_000000D4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80375B78_000000AC
    li r5, -0x1
lbl_fn_80375B78_000000E4:
    cmpwi r5, 0x0
    ble lbl_fn_80375B78_0000013C
    cmplwi r5, 0xfff
    ble lbl_fn_80375B78_0000012C
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80375B78_00000124
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80375B78_00000124:
    li r31, 0x0
    b lbl_fn_80375B78_0000015C
lbl_fn_80375B78_0000012C:
    slwi r0, r5, 2
    add r3, r29, r0
    lwz r31, 0x10e4(r3)
    b lbl_fn_80375B78_0000015C
lbl_fn_80375B78_0000013C:
    lwz r0, 0x1548(r29)
    cmpwi r0, 0x0
    ble lbl_fn_80375B78_00000150
    mr r31, r0
    b lbl_fn_80375B78_0000015C
lbl_fn_80375B78_00000150:
    cmpwi r30, 0x0
    beq lbl_fn_80375B78_0000015C
    lwz r31, 0xbc(r28)
lbl_fn_80375B78_0000015C:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x5a0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80375B78_0000017C
    cmpwi r30, 0x0
    beq lbl_fn_80375B78_0000017C
    lwz r0, 0x154c(r29)
    subf r31, r0, r31
lbl_fn_80375B78_0000017C:
    mr r3, r31
    lmw r26, 0x108(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80375D0C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_22
    lwz r0, 0x5694(r3)
    mr r25, r3
    lwz r4, lbl_8087F430
    li r27, 0x0
    cmpwi r0, 0x0
    lwz r26, 0x10d4(r4)
    beq lbl_fn_80375D0C_00000518
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80375D0C_000001D8
    lwz r0, 0x64(r4)
    b lbl_fn_80375D0C_000001DC
lbl_fn_80375D0C_000001D8:
    li r0, 0x0
lbl_fn_80375D0C_000001DC:
    cmpwi r0, 0x0
    beq lbl_fn_80375D0C_00000518
    cmpwi r4, 0x0
    beq lbl_fn_80375D0C_000001F4
    lwz r3, 0x64(r4)
    b lbl_fn_80375D0C_000001F8
lbl_fn_80375D0C_000001F4:
    li r3, 0x0
lbl_fn_80375D0C_000001F8:
    cmpwi r4, 0x0
    lwz r29, 0x48(r3)
    beq lbl_fn_80375D0C_0000020C
    lwz r3, 0x64(r4)
    b lbl_fn_80375D0C_00000210
lbl_fn_80375D0C_0000020C:
    li r3, 0x0
lbl_fn_80375D0C_00000210:
    cmpwi r4, 0x0
    lwz r28, 0x4c(r3)
    beq lbl_fn_80375D0C_00000224
    lwz r3, 0x64(r4)
    b lbl_fn_80375D0C_00000228
lbl_fn_80375D0C_00000224:
    li r3, 0x0
lbl_fn_80375D0C_00000228:
    lwz r22, 0x50(r3)
    mr r3, r29
    mr r4, r28
    li r30, 0x0
    mr r5, r22
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80375D0C_000004F0
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80375D0C_000004F0
    mr r3, r29
    mr r4, r28
    mr r5, r22
    li r30, 0x0
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_80375D0C_00000458
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80375D0C_00000458
    lwz r23, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r22, -0x1
    mr r3, r23
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80375D0C_000002DC
    addi r3, r23, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r22, r3, 0x64
    bne lbl_fn_80375D0C_000002DC
    mr r3, r23
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80375D0C_000002DC
    addi r3, r23, 0x6
    bl fn_80684600
    add r22, r22, r3
lbl_fn_80375D0C_000002DC:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_80375D0C_000002FC
lbl_fn_80375D0C_000002E8:
    cmpw r22, r0
    bne lbl_fn_80375D0C_000002F8
    li r0, 0x1
    b lbl_fn_80375D0C_0000030C
lbl_fn_80375D0C_000002F8:
    addi r3, r3, 0x4
lbl_fn_80375D0C_000002FC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80375D0C_000002E8
    li r0, 0x0
lbl_fn_80375D0C_0000030C:
    cmpwi r0, 0x0
    beq lbl_fn_80375D0C_00000458
    lwz r22, 0x0(r24)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r23, -0x1
    mr r3, r22
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80375D0C_0000036C
    addi r3, r22, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r23, r3, 0x64
    bne lbl_fn_80375D0C_0000036C
    mr r3, r22
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80375D0C_0000036C
    addi r3, r22, 0x6
    bl fn_80684600
    add r23, r23, r3
lbl_fn_80375D0C_0000036C:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_80375D0C_000003A0
lbl_fn_80375D0C_0000037C:
    cmpw r23, r0
    bne lbl_fn_80375D0C_00000398
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r22, r3, r0
    b lbl_fn_80375D0C_000003B0
lbl_fn_80375D0C_00000398:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_80375D0C_000003A0:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80375D0C_0000037C
    li r22, 0x0
lbl_fn_80375D0C_000003B0:
    cmpwi r22, 0x0
    bne lbl_fn_80375D0C_000003F4
    lwz r4, 0x48(r24)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80375D0C_00000458
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80375D0C_00000458
    lwz r5, 0x10d0(r25)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
    b lbl_fn_80375D0C_00000458
lbl_fn_80375D0C_000003F4:
    lwz r5, 0x4(r22)
    cmplwi r5, 0xfff
    ble lbl_fn_80375D0C_00000438
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80375D0C_00000430
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80375D0C_00000430:
    li r5, 0x0
    b lbl_fn_80375D0C_00000444
lbl_fn_80375D0C_00000438:
    slwi r0, r5, 2
    add r3, r25, r0
    lwz r5, 0x10e4(r3)
lbl_fn_80375D0C_00000444:
    lwz r0, 0x8(r22)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
lbl_fn_80375D0C_00000458:
    cmpwi r30, 0x0
    beq lbl_fn_80375D0C_000004F0
    lwz r22, 0x0(r31)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r23, -0x1
    mr r3, r22
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80375D0C_000004B8
    addi r3, r22, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r23, r3, 0x64
    bne lbl_fn_80375D0C_000004B8
    mr r3, r22
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80375D0C_000004B8
    addi r3, r22, 0x6
    bl fn_80684600
    add r23, r23, r3
lbl_fn_80375D0C_000004B8:
    lis r3, lbl_8074DB70@ha
    addi r3, r3, lbl_8074DB70@l
    b lbl_fn_80375D0C_000004D8
lbl_fn_80375D0C_000004C4:
    cmpw r23, r0
    bne lbl_fn_80375D0C_000004D4
    li r0, 0x1
    b lbl_fn_80375D0C_000004E8
lbl_fn_80375D0C_000004D4:
    addi r3, r3, 0x4
lbl_fn_80375D0C_000004D8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80375D0C_000004C4
    li r0, 0x0
lbl_fn_80375D0C_000004E8:
    cntlzw r0, r0
    srwi r30, r0, 5
lbl_fn_80375D0C_000004F0:
    cmpwi r30, 0x0
    beq lbl_fn_80375D0C_00000518
    cmpwi r29, 0x2
    bne lbl_fn_80375D0C_00000510
    cmpwi r28, 0x9
    bne lbl_fn_80375D0C_00000510
    li r0, 0x0
    b lbl_fn_80375D0C_0000051C
lbl_fn_80375D0C_00000510:
    li r0, 0x1
    b lbl_fn_80375D0C_0000051C
lbl_fn_80375D0C_00000518:
    li r0, 0x0
lbl_fn_80375D0C_0000051C:
    cmpwi r0, 0x0
    beq lbl_fn_80375D0C_00000534
    lwz r3, lbl_8087F430
    lwz r3, 0x10d0(r3)
    bl fn_80208694
    mr r26, r3
lbl_fn_80375D0C_00000534:
    cmpwi r26, 0x0
    beq lbl_fn_80375D0C_00000590
    lwz r3, 0x54(r26)
    lis r0, 0x4330
    lwz r5, lbl_8087F0A8
    lis r4, lbl_8074DBE8@ha
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    lwz r3, 0xd4(r5)
    stw r0, 0x108(r1)
    slwi r0, r3, 5
    lfd f2, lbl_8074DBE8@l(r4)
    add r3, r5, r0
    lfd f0, 0x108(r1)
    lfs f1, 0xd8(r3)
    fsubs f2, f0, f2
    lfs f0, lbl_80885748
    lwz r0, 0xdc(r3)
    fmadds f0, f2, f1, f0
    fctiwz f0, f0
    stfd f0, 0x110(r1)
    lwz r27, 0x114(r1)
    add r27, r27, r0
lbl_fn_80375D0C_00000590:
    lwz r3, 0x48(r25)
    lwz r4, 0x4c(r25)
    lwz r5, 0x50(r25)
    bl fn_8021771C
    cmpwi r3, 0x0
    beq lbl_fn_80375D0C_000005BC
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80375D0C_000005BC
    lwz r0, 0xbc(r3)
    add r27, r27, r0
lbl_fn_80375D0C_000005BC:
    addi r11, r1, 0x140
    mr r3, r27
    bl _restgpr_22
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_80376150(void)
{
    nofralloc
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80376150_000005F0
    lwz r4, 0x64(r4)
    cmpwi r4, 0x0
    bne lbl_fn_80376150_000005F8
lbl_fn_80376150_000005F0:
    li r3, 0x0
    blr
lbl_fn_80376150_000005F8:
    lwz r0, 0x10f4(r3)
    li r3, 0x0
    cmpwi r0, 0x0
    bnelr
    lwz r0, 0x48(r4)
    cmpwi r0, 0x1
    beqlr
    li r3, 0x1
    blr
}

asm void fn_80376194(void)
{
    nofralloc
    cntlzw r0, r4
    srwi r0, r0, 5
    stw r0, 0x10f4(r3)
    blr
}

asm void fn_803761A4(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_803761AC(void)
{
    nofralloc
    lwz r0, 0x10fc(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_803761BC(void)
{
    nofralloc
    lwz r0, 0x10f8(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_803761CC(void)
{
    nofralloc
    lwz r0, 0x1110(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_803761DC(void)
{
    nofralloc
    lwz r3, 0x10ec(r3)
    blr
}

asm void fn_803761E4(void)
{
    nofralloc
    stw r4, 0x1118(r3)
    blr
}

asm void fn_803761EC(void)
{
    nofralloc
    lwz r3, 0x111c(r3)
    blr
}

asm void fn_803761F4(void)
{
    nofralloc
    stw r4, 0x111c(r3)
    blr
}

asm void fn_803761FC(void)
{
    nofralloc
    lwz r3, 0x1164(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80376210(void)
{
    nofralloc
    lwz r3, 0x117c(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80376224(void)
{
    nofralloc
    lwz r3, 0x1180(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80376238(void)
{
    nofralloc
    lwz r3, 0x1194(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8037624C(void)
{
    nofralloc
    stw r4, 0x1194(r3)
    blr
}

asm void fn_80376254(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    cmpwi r4, 0x0
    stw r4, 0x569c(r3)
    stw r5, 0x56a4(r3)
    bgt lbl_fn_80376254_000007A4
    lwz r8, lbl_8087EFA8
    li r0, 0x1
    lfs f0, lbl_80885748
    lwz r4, 0x244(r8)
    lwz r7, 0x248(r8)
    lfs f4, 0x24c(r8)
    lfs f3, 0x250(r8)
    lwz r6, 0x254(r8)
    lwz r5, 0x258(r8)
    lfs f2, 0x25c(r8)
    lfs f1, 0x260(r8)
    lwz r8, 0x240(r8)
    stw r8, 0x56a8(r3)
    stw r4, 0x56ac(r3)
    stw r7, 0x56b0(r3)
    stfs f4, 0x56b4(r3)
    stfs f3, 0x56b8(r3)
    stw r6, 0x56bc(r3)
    stw r5, 0x56c0(r3)
    stfs f2, 0x56c4(r3)
    stfs f1, 0x56c8(r3)
    lwz r8, lbl_8087EFA8
    stw r4, 0xc(r1)
    stw r0, 0x240(r8)
    stw r4, 0x244(r8)
    stw r7, 0x248(r8)
    stfs f4, 0x24c(r8)
    stfs f3, 0x250(r8)
    stw r6, 0x254(r8)
    stw r5, 0x258(r8)
    stfs f2, 0x25c(r8)
    stfs f1, 0x260(r8)
    lwz r4, lbl_8087EFA8
    stw r7, 0x10(r1)
    lfs f5, 0x3a4(r4)
    stfs f5, 0x56cc(r3)
    lwz r3, lbl_8087EFA8
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stw r0, 0x8(r1)
    stfs f0, 0x3a4(r3)
lbl_fn_80376254_000007A4:
    addi r1, r1, 0x30
    blr
}

asm void fn_80376324(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r4
    stw r30, 0x108(r1)
    mr r30, r3
    mr r3, r31
    bl fn_8021F09C
    cmpwi r3, 0x0
    beq lbl_fn_80376324_000009D8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80376324_000008D4
    lwz r0, 0x56f0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80376324_000007FC
    lwz r0, 0x56ec(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80376324_00000830
lbl_fn_80376324_000007FC:
    lwz r0, 0x571c(r30)
    cmplwi r0, 0x8
    bge lbl_fn_80376324_000009D8
    lwz r3, 0x5740(r30)
    lwz r0, 0x571c(r30)
    add r0, r3, r0
    clrlslwi r0, r0, 29, 2
    add r3, r30, r0
    stw r31, 0x5720(r3)
    lwz r3, 0x571c(r30)
    addi r0, r3, 0x1
    stw r0, 0x571c(r30)
    b lbl_fn_80376324_000009D8
lbl_fn_80376324_00000830:
    lwz r5, lbl_8087F8A0
    mr r3, r30
    mr r4, r31
    lwz r5, 0x48(r5)
    bl fn_805BC6CC
    cmpwi r31, 0x8e
    stw r3, 0x56f0(r30)
    bne lbl_fn_80376324_000008B4
    cmplwi r31, 0xfff
    ble lbl_fn_80376324_00000894
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80376324_0000088C
    lis r4, lbl_8074DC1C@ha
    mr r5, r31
    addi r4, r4, lbl_8074DC1C@l
    addi r3, r1, 0x8
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80376324_0000088C:
    li r0, 0x0
    b lbl_fn_80376324_000008A0
lbl_fn_80376324_00000894:
    slwi r0, r31, 2
    add r3, r30, r0
    lwz r0, 0x10e4(r3)
lbl_fn_80376324_000008A0:
    cmpwi r0, 0x1
    ble lbl_fn_80376324_000008B4
    lwz r3, 0x56f0(r30)
    lfs f0, lbl_808857A8
    stfs f0, 0xac(r3)
lbl_fn_80376324_000008B4:
    lwz r3, lbl_8087F540
    bl fn_80481668
    cmpwi r3, 0x0
    beq lbl_fn_80376324_000009D8
    lwz r3, 0x56f0(r30)
    li r4, 0x1
    bl fn_800D246C
    b lbl_fn_80376324_000009D8
lbl_fn_80376324_000008D4:
    lwz r3, 0x56f0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80376324_000008F0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x56f0(r30)
    stw r0, 0x571c(r30)
lbl_fn_80376324_000008F0:
    lwz r3, 0x5590(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80376324_00000904
    li r4, 0x1
    bl fn_80570A18
lbl_fn_80376324_00000904:
    lwz r3, 0x558c(r30)
    bl fn_8056B3D8
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F428
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x10d8(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x2640(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80376324_00000990
    li r4, 0x8
    li r5, 0x1
    li r6, 0x2
    li r7, 0xf
    bl fn_800CFBA0
lbl_fn_80376324_00000990:
    li r0, 0xd
    stw r0, 0x54e4(r30)
    mr r3, r30
    mr r4, r31
    lwz r5, lbl_8087F8A0
    lwz r5, 0x48(r5)
    bl fn_805B9F54
    cmpwi r31, 0xa7
    stw r3, 0x56ec(r30)
    bne lbl_fn_80376324_000009D8
    lwz r0, 0x15e0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80376324_000009D8
    mr r3, r30
    li r4, 0x13f
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_80376324_000009D8:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80376568(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x5590(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80376568_00000A2C
    mr r3, r0
    li r4, 0x0
    bl fn_80570A18
    lwz r3, 0x5590(r31)
    li r4, 0x0
    bl fn_80570A44
lbl_fn_80376568_00000A2C:
    lwz r3, 0x558c(r31)
    bl fn_8056BD38
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F428
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x10d8(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F490
    lwz r3, 0x2640(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80376568_00000AB8
    li r4, 0x8
    li r5, 0x0
    li r6, 0x2
    li r7, 0xf
    bl fn_800CFBA0
lbl_fn_80376568_00000AB8:
    li r30, 0x0
    stw r30, 0x54e4(r31)
    lwz r3, 0x56ec(r31)
    bl fn_800D2338
    stw r30, 0x56ec(r31)
    lwz r3, lbl_8087EEF0
    cmpwi r3, 0x0
    beq lbl_fn_80376568_00000B14
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80376568_00000B04
    lis r4, 0x1
    subi r0, r4, 0xe4f
    mr r4, r3
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80376568_00000B04
    li r30, 0x1
lbl_fn_80376568_00000B04:
    cmpwi r30, 0x0
    beq lbl_fn_80376568_00000B14
    li r0, 0x0
    stw r0, 0x56f4(r31)
lbl_fn_80376568_00000B14:
    lwz r0, 0x56f4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80376568_00000B54
    lwz r0, 0x5718(r31)
    mr r3, r31
    slwi r0, r0, 2
    add r4, r31, r0
    lwz r4, 0x56f8(r4)
    bl fn_80376324
    lwz r4, 0x5718(r31)
    lwz r3, 0x56f4(r31)
    addi r0, r4, 0x1
    clrlwi r4, r0, 29
    stw r4, 0x5718(r31)
    subi r0, r3, 0x1
    stw r0, 0x56f4(r31)
lbl_fn_80376568_00000B54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803766E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x56f0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803766E4_00000B9C
    mr r3, r0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x56f0(r31)
lbl_fn_803766E4_00000B9C:
    li r0, 0x0
    stw r0, 0x571c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80376730(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80376730_00000C74
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80376730_00000C74
    lwz r0, 0x5748(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80376730_00000C74
    lwz r31, 0x562c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_80376730_00000C74
    lwz r3, 0x5634(r3)
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80376730_00000C74
    addi r3, r31, 0xb8
    bl fn_803BDEE4
    addi r3, r1, 0x8
    bl fn_8004B20C
    mr r3, r31
    addi r4, r31, 0xb8
    addi r5, r1, 0x8
    bl fn_803BE8C0
    lwz r0, 0x5630(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80376730_00000C48
    li r0, 0x0
    stw r0, 0x5630(r30)
lbl_fn_80376730_00000C48:
    lwz r3, 0x5634(r30)
    li r5, 0x0
    lwz r4, 0x562c(r30)
    li r6, 0x1
    bl fn_803B8E60
    lwz r5, 0x131c(r30)
    mr r3, r30
    li r4, 0x8e
    li r6, 0x0
    addi r5, r5, 0x1
    bl fn_80370320
lbl_fn_80376730_00000C74:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80376804(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80376804_00000CD8
    subic. r0, r0, 0x1
    stw r0, 0x58(r3)
    bne lbl_fn_80376804_00000CD8
    lwz r3, 0x48(r3)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80376804_00000CD8:
    lwz r3, 0x54(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80376804_00000E74
    lwz r0, 0x5c(r31)
    subi r3, r3, 0x1
    stw r3, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80376804_00000D18
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
    b lbl_fn_80376804_00000D34
lbl_fn_80376804_00000D18:
    lis r5, lbl_8078A388@ha
    lwzu r4, lbl_8078A388@l(r5)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
lbl_fn_80376804_00000D34:
    lwz r5, 0x30(r1)
    addi r3, r1, 0x24
    lwz r4, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80376804_00000E50
    lwz r0, 0x5c(r31)
    lwz r29, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80376804_00000E38
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
    mr r30, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80376804_00000DDC
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_80376804_00000DDC:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_80376804_00000DF0
    bl fn_80084C24
lbl_fn_80376804_00000DF0:
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
    beq lbl_fn_80376804_00000E38
    addic. r3, r3, 0x4
    beq lbl_fn_80376804_00000E38
    beq lbl_fn_80376804_00000E38
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80376804_00000E38
    bl fn_806952C4
lbl_fn_80376804_00000E38:
    lwz r5, 0x5c(r31)
    mr r4, r29
    addi r3, r31, 0x60
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_80376804_00000E50:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80376804_00000E74
    lwz r3, 0x48(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_800D246C
lbl_fn_80376804_00000E74:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80376A08(void)
{
    nofralloc
    blr
}

asm void fn_80376A0C(void)
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
    beq lbl_fn_80376A0C_00000F3C
    addic. r0, r3, 0x70
    beq lbl_fn_80376A0C_00000EE0
    lwz r4, 0x70(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80376A0C_00000EE0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80376A0C_00000EE0
    bl fn_800897D8
lbl_fn_80376A0C_00000EE0:
    addic. r31, r29, 0x5c
    beq lbl_fn_80376A0C_00000F20
    beq lbl_fn_80376A0C_00000F20
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80376A0C_00000F20
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80376A0C_00000F18
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80376A0C_00000F18:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80376A0C_00000F20:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_80376A0C_00000F3C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80376A0C_00000F3C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80376AD4(void)
{
    nofralloc
    lis r6, lbl_807C8458@ha
    li r7, 0x0
    addi r5, r6, lbl_807C8458@l
    li r4, -0x1
    stw r7, lbl_807C8458@l(r6)
    addi r3, r5, 0x98
    addi r6, r5, 0x44
    cmplw r6, r3
    stw r7, 0x4(r5)
    stw r7, 0x8(r5)
    stw r7, 0xc(r5)
    stw r7, 0x10(r5)
    stw r4, 0x14(r5)
    stw r7, 0x18(r5)
    stw r7, 0x1c(r5)
    stw r7, 0x20(r5)
    stw r7, 0x24(r5)
    stw r7, 0x28(r5)
    stw r7, 0x2c(r5)
    stw r7, 0x30(r5)
    stw r7, 0x34(r5)
    stw r4, 0x38(r5)
    stw r7, 0x3c(r5)
    stw r7, 0x40(r5)
    bgelr
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    bgelr
lbl_fn_80376AD4_00000FD8:
    stw r4, 0x0(r6)
    stw r7, 0x4(r6)
    stw r7, 0x8(r6)
    addi r6, r6, 0xc
    bdnz lbl_fn_80376AD4_00000FD8
    blr
}

asm void fn_80376B68(void)
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
    beq lbl_fn_80376B68_00001054
    lwz r0, lbl_8087F440
    cmpwi r0, 0x0
    bne lbl_fn_80376B68_00001054
    lis r5, lbl_8074DEC0@ha
    li r3, 0x298
    addi r5, r5, lbl_8074DEC0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80376B68_00001050
    mr r4, r30
    mr r5, r31
    bl fn_80376BE8
lbl_fn_80376B68_00001050:
    stw r3, lbl_8087F440
lbl_fn_80376B68_00001054:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F440
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80376BE8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    bl fn_800D1D3C
    lis r3, lbl_8078A4B8@ha
    li r30, 0x0
    addi r3, r3, lbl_8078A4B8@l
    stw r3, 0x0(r29)
    addi r3, r29, 0x54
    stw r30, 0x50(r29)
    bl fn_802377B8
    stw r30, 0x64(r29)
    addi r3, r29, 0x94
    li r4, 0x0
    li r5, 0x0
    stw r30, 0x68(r29)
    stw r31, 0x6c(r29)
    stw r30, 0x70(r29)
    stw r30, 0x78(r29)
    stw r30, 0x7c(r29)
    bl fn_8004B290
    lis r31, lbl_8074DEC0@ha
    stw r30, 0x288(r29)
    addi r31, r31, lbl_8074DEC0@l
    mr r3, r29
    stw r30, 0x28c(r29)
    addi r4, r31, 0x1
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x48(r29)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r29
    addi r4, r31, 0x1f
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x4c(r29)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80376BE8_0000114C
    mr r3, r29
    addi r4, r31, 0x3d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x50(r29)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_80376BE8_0000114C:
    lis r31, lbl_8074DEC0@ha
    addi r3, r29, 0x54
    addi r31, r31, lbl_8074DEC0@l
    addi r4, r31, 0x5b
    bl fn_8023780C
    addi r31, r31, 0x69
    addi r30, r1, 0x8
    cmplw r31, r30
    beq lbl_fn_80376BE8_0000118C
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r31
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80376BE8_0000118C:
    li r31, 0x0
    stw r31, 0x48(r1)
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_803B27F8
    stw r3, 0x64(r29)
    stw r31, 0xd64(r3)
    mr r3, r29
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80376D40(void)
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
    beq lbl_fn_80376D40_00001240
    li r0, 0x0
    stw r0, lbl_8087F440
    li r4, -0x1
    addi r3, r3, 0x94
    bl fn_8004B338
    addic. r31, r29, 0x54
    beq lbl_fn_80376D40_00001224
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80376D40_00001224
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80376D40_00001224:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_80376D40_00001240
    mr r3, r29
    bl dtor_80084684
lbl_fn_80376D40_00001240:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80376DD8(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    stw r31, 0x1ec(r1)
    mr r31, r3
    stw r30, 0x1e8(r1)
    stw r29, 0x1e4(r1)
    stw r28, 0x1e0(r1)
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80376DD8_000016FC
    addi r3, r31, 0x54
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80376DD8_000016FC
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808857FC
    li r11, -0x1
    lfs f1, lbl_80885800
    li r0, 0x1
    stfs f0, 0x8c(r1)
    addi r4, r31, 0x54
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x80
    stfs f0, 0x90(r1)
    addi r8, r1, 0x8c
    addi r9, r1, 0x98
    li r5, 0x0
    stfs f0, 0x94(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f1, 0x98(r1)
    stfs f1, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, 0x48(r31)
    li r4, 0x1
    lfs f1, lbl_808857FC
    li r5, 0x0
    lfs f2, lbl_80885800
    bl fn_804A39EC
    lwz r3, 0x4c(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x4c(r31)
    li r0, 0x0
    lwz r3, 0x38(r4)
    ori r3, r3, 0x4
    stw r3, 0x38(r4)
    lwz r3, 0x50(r31)
    stw r0, 0x288(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80376DD8_00001388
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x50(r31)
    lfs f0, lbl_808857FC
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x50(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0x50(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80376DD8_00001388:
    lwz r5, lbl_8087EFA8
    li r10, 0x1
    lfs f6, lbl_808857FC
    lwz r4, 0x378(r5)
    lfs f7, 0x38c(r5)
    lfs f4, 0x390(r5)
    stfs f6, 0xd0(r1)
    lfs f5, lbl_80885800
    stw r10, 0x374(r5)
    lwz r0, 0xd0(r1)
    stw r4, 0x378(r5)
    lfs f3, lbl_80885808
    stfs f6, 0xd4(r1)
    lfs f0, lbl_80885804
    stw r0, 0x37c(r5)
    lwz r3, 0xd4(r1)
    stfs f6, 0xd8(r1)
    stw r3, 0x380(r5)
    lwz r0, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stw r0, 0x384(r5)
    lwz r0, 0xdc(r1)
    stw r0, 0x388(r5)
    stfs f7, 0x38c(r5)
    stfs f4, 0x390(r5)
    stfs f0, 0x394(r5)
    lwz r3, lbl_8087EFA8
    stw r4, 0xf0(r1)
    stfs f7, 0x104(r1)
    stfs f4, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f6, 0xb8(r1)
    stfs f6, 0xbc(r1)
    stfs f6, 0xc0(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xf4(r1)
    stfs f6, 0xf8(r1)
    stfs f6, 0xfc(r1)
    stfs f5, 0x100(r1)
    stw r10, 0xec(r1)
    stw r10, 0xc8(r1)
    stw r4, 0xcc(r1)
    stfs f7, 0xe0(r1)
    stfs f4, 0xe4(r1)
    stfs f0, 0xe8(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f5, 0xb4(r1)
    stfs f3, 0x3c(r3)
    stfs f3, 0x40(r3)
    li r30, 0x0
    lfs f4, lbl_8088580C
    li r0, 0x3
    stfs f3, 0x44(r3)
    lfs f0, lbl_80885814
    lfs f3, lbl_80885810
    stfs f5, 0x48(r3)
    stw r10, 0x160(r1)
    stw r30, 0x164(r1)
    stw r0, 0x168(r1)
    stw r0, 0x16c(r1)
    stw r10, 0x170(r1)
    stfs f5, 0x174(r1)
    stfs f4, 0x178(r1)
    stfs f4, 0x17c(r1)
    stfs f6, 0x180(r1)
    stfs f3, 0x184(r1)
    stfs f5, 0x188(r1)
    stfs f5, 0x190(r1)
    stfs f0, 0x18c(r1)
    stfs f0, 0x194(r1)
    stfs f5, 0x50(r1)
    stfs f5, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f5, 0x5c(r1)
    stfs f5, 0x198(r1)
    stfs f5, 0x19c(r1)
    stfs f5, 0x1a0(r1)
    stfs f5, 0x1a4(r1)
    stfs f5, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f5, 0x1a8(r1)
    stfs f5, 0x1ac(r1)
    stfs f5, 0x1b0(r1)
    stfs f5, 0x1b4(r1)
    stfs f5, 0x70(r1)
    stfs f5, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f5, 0x1b8(r1)
    stfs f5, 0x1bc(r1)
    stfs f5, 0x1c0(r1)
    stfs f5, 0x1c4(r1)
    stw r30, 0x1c8(r1)
    stw r30, 0x1cc(r1)
    stw r30, 0x1d0(r1)
    stw r30, 0x1d4(r1)
    stw r30, 0x1d8(r1)
    stw r30, 0x1dc(r1)
    lwz r28, lbl_8087EFA8
    addi r29, r1, 0x10
    lwz r9, 0x184(r1)
    addi r4, r1, 0x114
    stw r10, 0x54(r28)
    lwz r8, 0x188(r1)
    stw r30, 0x58(r28)
    lwz r7, 0x18c(r1)
    stw r0, 0x5c(r28)
    lwz r6, 0x190(r1)
    stw r0, 0x60(r28)
    lwz r5, 0x194(r1)
    stw r10, 0x64(r28)
    lwz r3, 0x198(r1)
    stfs f5, 0x68(r28)
    lwz r0, 0x19c(r1)
    stfs f4, 0x6c(r28)
    lwz r12, 0x1a0(r1)
    stfs f4, 0x70(r28)
    lwz r11, 0x1a4(r1)
    stfs f6, 0x74(r28)
    lwz r10, 0x1a8(r1)
    stw r9, 0x78(r28)
    lwz r9, 0x1ac(r1)
    stw r8, 0x7c(r28)
    lwz r8, 0x1b0(r1)
    stw r7, 0x80(r28)
    lwz r7, 0x1b4(r1)
    stw r6, 0x84(r28)
    lwz r6, 0x1b8(r1)
    stw r5, 0x88(r28)
    lwz r5, 0x1bc(r1)
    stw r3, 0x8c(r28)
    lwz r3, 0x1c0(r1)
    stw r0, 0x90(r28)
    lwz r0, 0x1c4(r1)
    stw r12, 0x94(r28)
    stw r11, 0x98(r28)
    stw r10, 0x9c(r28)
    stw r9, 0xa0(r28)
    stw r8, 0xa4(r28)
    stw r7, 0xa8(r28)
    stw r6, 0xac(r28)
    stw r5, 0xb0(r28)
    stw r3, 0xb4(r28)
    stw r0, 0xb8(r28)
    stw r30, 0xbc(r28)
    stw r30, 0xc0(r28)
    stw r30, 0xc4(r28)
    stw r30, 0xc8(r28)
    stw r30, 0xcc(r28)
    stfs f5, 0x10(r1)
    stfs f6, 0x14(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f6, 0x18(r1)
    stfs f6, 0x1c(r1)
    psq_l f2, 0x8(r29), 0, 0
    stw r30, 0xd0(r28)
    stw r30, 0x154(r1)
    stw r30, 0x158(r1)
    stfs f5, 0x15c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    addi r9, r1, 0x20
    stfs f6, 0x30(r1)
    lwz r11, lbl_8087EFA8
    addi r10, r1, 0x124
    psq_l f1, 0x0(r9), 0, 0
    addi r7, r1, 0x30
    stfs f6, 0x34(r1)
    addi r8, r1, 0x134
    addi r5, r1, 0x40
    addi r6, r1, 0x144
    psq_st f1, 0x0(r10), 0, 0
    mr r3, r31
    psq_l f1, 0x0(r7), 0, 0
    stfs f6, 0x28(r1)
    stfs f6, 0x2c(r1)
    psq_l f2, 0x8(r9), 0, 0
    stfs f6, 0x40(r1)
    stfs f6, 0x44(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stw r30, 0x324(r11)
    psq_st f1, 0x328(r11), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f6, 0x48(r1)
    stfs f6, 0x4c(r1)
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f2, 0x330(r11), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_st f1, 0x338(r11), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f2, 0x340(r11), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x348(r11), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x350(r11), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x358(r11), 0, 0
    psq_st f2, 0x360(r11), 0, 0
    stw r30, 0x368(r11)
    stw r30, 0x36c(r11)
    stw r30, 0x110(r1)
    stfs f5, 0x370(r11)
    bl fn_80377298
    li r3, 0x1
    b lbl_fn_80376DD8_00001700
lbl_fn_80376DD8_000016FC:
    li r3, 0x0
lbl_fn_80376DD8_00001700:
    lwz r0, 0x1f4(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    lwz r28, 0x1e0(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_80377298(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lis r30, lbl_8074DDF8@ha
    addi r30, r30, lbl_8074DDF8@l
    stw r0, 0x7c(r3)
    lwz r3, lbl_8087F430
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_fn_80377298_000019AC
    lwz r0, lbl_8087DCCC
    cmpwi r0, 0x0
    beq lbl_fn_80377298_000019AC
    beq cr1, lbl_fn_80377298_000017F0
    bl fn_803754F0
    cmpwi r3, 0x0
    beq lbl_fn_80377298_000017F0
    lwz r0, 0x7c(r31)
    li r3, 0x5
    stw r3, 0x6c(r31)
    addi r4, r30, 0x90
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_00001798
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_00001798:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_000017BC
    lwz r0, 0x4(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_000017BC:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_000017E0
    lwz r0, 0x8(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_000017E0:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    b lbl_fn_80377298_00001A4C
lbl_fn_80377298_000017F0:
    lwz r0, 0x6c(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80377298_000018BC
    lwz r0, 0x7c(r31)
    addi r4, r30, 0x48
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_0000181C
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_0000181C:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_00001840
    lwz r0, 0x4(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_00001840:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_00001864
    lwz r0, 0x8(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_00001864:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_00001888
    lwz r0, 0xc(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_00001888:
    lwz r3, 0x7c(r31)
    li r4, 0xd4
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    lwz r3, lbl_8087F430
    bl fn_80370174
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80377298_00001A4C
    li r0, 0x3
    stw r0, 0x78(r31)
    b lbl_fn_80377298_00001A4C
lbl_fn_80377298_000018BC:
    lwz r3, lbl_8087F430
    li r4, 0x122
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80377298_00001950
    lwz r0, 0x7c(r31)
    li r3, 0x0
    stw r3, 0x6c(r31)
    addi r4, r30, 0x28
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_000018F8
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_000018F8:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_0000191C
    lwz r0, 0x4(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_0000191C:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_00001940
    lwz r0, 0x8(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_00001940:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    b lbl_fn_80377298_00001A4C
lbl_fn_80377298_00001950:
    lwz r0, 0x7c(r31)
    li r3, 0x3
    stw r3, 0x6c(r31)
    addi r4, r30, 0x68
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_00001978
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_00001978:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_0000199C
    lwz r0, 0x4(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_0000199C:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    b lbl_fn_80377298_00001A4C
lbl_fn_80377298_000019AC:
    li r4, 0x122
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80377298_00001A18
    lwz r0, 0x7c(r31)
    li r3, 0x2
    stw r3, 0x6c(r31)
    addi r4, r30, 0x10
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_000019E4
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_000019E4:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_00001A08
    lwz r0, 0x4(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_00001A08:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
    b lbl_fn_80377298_00001A4C
lbl_fn_80377298_00001A18:
    lwz r0, 0x7c(r31)
    li r3, 0x4
    stw r3, 0x6c(r31)
    la r4, lbl_808857F8
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r3, r0, 0x80
    beq lbl_fn_80377298_00001A40
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
lbl_fn_80377298_00001A40:
    lwz r3, 0x7c(r31)
    addi r0, r3, 0x1
    stw r0, 0x7c(r31)
lbl_fn_80377298_00001A4C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
