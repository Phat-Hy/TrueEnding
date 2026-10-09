#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80049B74(void);
extern void fn_8004AD9C(void);
extern void fn_8004ADF4(void);
extern void fn_8004AE84(void);
extern void fn_8004B0E4(void);
extern void fn_8004B158(void);
extern void fn_8004B1EC(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_80076FF8(void);
extern void fn_80084320(void);
extern void fn_800897D8(void);
extern void fn_800CA910(void);
extern void fn_800CAA88(void);
extern void fn_800CB480(void);
extern void fn_800CB4C4(void);
extern void fn_800CB538(void);
extern void fn_800CB58C(void);
extern void fn_800CB5B4(void);
extern void fn_800CB640(void);
extern void fn_800CB6F8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_80149A30(void);
extern void fn_80207EE8(void);
extern void fn_80207F34(void);
extern void fn_803605EC(void);
extern void fn_80360848(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80373148(void);
extern void fn_8037E9E0(void);
extern void fn_803CE074(void);
extern void fn_803CE0B4(void);
extern void fn_803CE160(void);
extern void fn_803CE278(void);
extern void fn_805A38F4(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074DFD0[];
extern u8 lbl_8074DFF0[];
extern u8 lbl_8074E000[];
extern u8 lbl_8078A4F0[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F480;
extern u32 lbl_8087F610;
extern u32 lbl_808858D8;
extern u32 lbl_808858DC;
extern u32 lbl_808858E0;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F0;
extern u32 lbl_808858F4;
extern u32 lbl_808858F8;
extern u32 lbl_808858FC;
extern u32 lbl_80885900;
extern u32 lbl_80885904;
extern u32 lbl_80885908;
extern u32 lbl_8088590C;
extern u32 lbl_80885910;
extern u32 lbl_80885914;
extern u32 lbl_80885918;
extern u32 lbl_8088591C;
extern u32 lbl_80885924;
extern u32 lbl_80885928;
extern u32 lbl_8088592C;
extern u32 lbl_80885930;
extern u32 lbl_80885934;
extern u32 lbl_80885938;
extern u32 lbl_8088593C;
extern u32 lbl_80885940;
extern u32 lbl_80885944;
extern u32 lbl_80885948;
extern u32 lbl_8088594C;
extern u32 lbl_80885950;
extern u32 lbl_80885954;
extern u32 lbl_80885958;
extern u32 lbl_8088595C;
extern u32 lbl_80885960;
extern u32 lbl_80885964;
extern u32 lbl_80885968;
extern u32 lbl_8088596C;
extern u32 lbl_80885970;
extern u32 lbl_80885974;
extern u32 lbl_80885978;
extern u32 lbl_8088597C;
extern u32 lbl_80885980;
extern u32 lbl_80885984;
extern u32 lbl_80885988;
extern u32 lbl_8088598C;
extern u32 lbl_80885990;
extern u32 lbl_80885994;
extern u32 lbl_80885998;

/* Function declarations */
void fn_8037C690(void);
void fn_8037C69C(void);
void fn_8037C71C(void);
void fn_8037C8C4(void);
void fn_8037C934(void);
void fn_8037CA24(void);
void fn_8037CAF0(void);
void fn_8037CB38(void);
void fn_8037D274(void);
void fn_8037D34C(void);
void fn_8037D3E8(void);
void fn_8037D49C(void);
void fn_8037D4C0(void);
void fn_8037D684(void);
void fn_8037D758(void);
void fn_8037D808(void);
void fn_8037D8B8(void);
void fn_8037DC68(void);
void fn_8037DD00(void);

asm void fn_8037C690(void)
{
    nofralloc
    stw r4, 0x35c(r3)
    stw r5, 0x360(r3)
    blr
}

asm void fn_8037C69C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x3a8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037C69C_0000003C
    mr r3, r0
    bl fn_80149A30
lbl_fn_8037C69C_0000003C:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8037C69C_00000070
    mr r31, r29
    li r30, 0x0
    b lbl_fn_8037C69C_00000064
lbl_fn_8037C69C_00000054:
    lwz r3, 0x218(r31)
    bl fn_80149A30
    addi r31, r31, 0x20
    addi r30, r30, 0x1
lbl_fn_8037C69C_00000064:
    lwz r0, 0x214(r29)
    cmplw r30, r0
    blt lbl_fn_8037C69C_00000054
lbl_fn_8037C69C_00000070:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037C71C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80207EE8
    lwz r4, lbl_8087F0A8
    mr r30, r3
    lwz r0, 0x15c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8037C71C_00000134
    cmpwi r29, 0x6c
    bge lbl_fn_8037C71C_000000F4
    cmpwi r29, 0x68
    beq lbl_fn_8037C71C_00000128
    bge lbl_fn_8037C71C_000000E8
    cmpwi r29, 0x67
    bge lbl_fn_8037C71C_00000134
    cmpwi r29, 0x65
    bge lbl_fn_8037C71C_00000118
    b lbl_fn_8037C71C_00000134
lbl_fn_8037C71C_000000E8:
    cmpwi r29, 0x6a
    bge lbl_fn_8037C71C_00000128
    b lbl_fn_8037C71C_00000118
lbl_fn_8037C71C_000000F4:
    cmpwi r29, 0xc9
    beq lbl_fn_8037C71C_00000128
    bge lbl_fn_8037C71C_0000010C
    cmpwi r29, 0x6e
    bge lbl_fn_8037C71C_00000134
    b lbl_fn_8037C71C_00000118
lbl_fn_8037C71C_0000010C:
    cmpwi r29, 0x191
    beq lbl_fn_8037C71C_00000118
    b lbl_fn_8037C71C_00000134
lbl_fn_8037C71C_00000118:
    li r3, 0x2707
    bl fn_80207EE8
    mr r30, r3
    b lbl_fn_8037C71C_00000134
lbl_fn_8037C71C_00000128:
    li r3, 0x270a
    bl fn_80207EE8
    mr r30, r3
lbl_fn_8037C71C_00000134:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8037C71C_00000214
    lwz r31, 0x10d0(r3)
    cmpwi r31, 0x0
    blt lbl_fn_8037C71C_00000170
    lis r3, 0x6
    addi r0, r3, 0x1a80
    cmpw r31, r0
    bge lbl_fn_8037C71C_00000170
    cmpwi r29, 0x191
    bne lbl_fn_8037C71C_00000170
    li r3, 0x192
    bl fn_80207EE8
    mr r30, r3
lbl_fn_8037C71C_00000170:
    lis r3, 0x6
    addi r0, r3, 0x1a80
    cmpw r31, r0
    blt lbl_fn_8037C71C_000001A4
    lis r3, 0x9
    addi r0, r3, 0x27c0
    cmpw r31, r0
    bge lbl_fn_8037C71C_000001A4
    cmpwi r29, 0x191
    bne lbl_fn_8037C71C_000001A4
    li r3, 0x193
    bl fn_80207EE8
    mr r30, r3
lbl_fn_8037C71C_000001A4:
    lis r3, 0x9
    addi r0, r3, 0x27c0
    cmpw r31, r0
    blt lbl_fn_8037C71C_00000214
    lwz r3, lbl_8087F430
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8037C71C_000001F8
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8037C71C_000001F8
    cmpwi r29, 0x191
    beq lbl_fn_8037C71C_000001E8
    cmpwi r29, 0x1f5
    bne lbl_fn_8037C71C_00000214
lbl_fn_8037C71C_000001E8:
    li r3, 0x194
    bl fn_80207EE8
    mr r30, r3
    b lbl_fn_8037C71C_00000214
lbl_fn_8037C71C_000001F8:
    cmpwi r29, 0x191
    beq lbl_fn_8037C71C_00000208
    cmpwi r29, 0x1f5
    bne lbl_fn_8037C71C_00000214
lbl_fn_8037C71C_00000208:
    li r3, 0x4ee
    bl fn_80207EE8
    mr r30, r3
lbl_fn_8037C71C_00000214:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037C8C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8037C8C4_0000028C
    lwz r0, lbl_8087F448
    cmpwi r0, 0x0
    bne lbl_fn_8037C8C4_0000028C
    lis r5, lbl_8074E000@ha
    li r3, 0xe8
    addi r5, r5, lbl_8074E000@l
    li r4, 0xa
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8037C8C4_00000288
    mr r4, r31
    bl fn_8037C934
lbl_fn_8037C8C4_00000288:
    stw r3, lbl_8087F448
lbl_fn_8037C8C4_0000028C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F448
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037C934(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D1D3C
    lis r3, lbl_8078A4F0@ha
    li r31, 0x0
    addi r3, r3, lbl_8078A4F0@l
    lis r4, fn_8004AD9C@ha
    lis r5, fn_8004ADF4@ha
    stw r3, 0x0(r30)
    addi r3, r30, 0x4c
    addi r4, r4, fn_8004AD9C@l
    stw r31, 0x48(r30)
    addi r5, r5, fn_8004ADF4@l
    li r6, 0x14
    li r7, 0x2
    bl fn_806958E0
    lfs f1, lbl_808858D8
    addi r4, r30, 0x4c
    lfs f0, lbl_808858DC
    addi r0, r30, 0x60
    li r3, 0x1
    stw r3, 0x7c(r30)
    mr r3, r30
    stw r31, 0x80(r30)
    stw r31, 0x84(r30)
    stw r31, 0x88(r30)
    stw r31, 0x8c(r30)
    stw r31, 0x90(r30)
    stfs f1, 0x94(r30)
    stw r31, 0x98(r30)
    stw r31, 0x9c(r30)
    stw r31, 0xa0(r30)
    stw r31, 0xa4(r30)
    stw r31, 0xa8(r30)
    stw r31, 0xac(r30)
    stfs f1, 0xb0(r30)
    stw r31, 0xb4(r30)
    stw r31, 0xb8(r30)
    stw r31, 0xbc(r30)
    stw r31, 0xc0(r30)
    stw r31, 0xc4(r30)
    stw r31, 0xc8(r30)
    stfs f1, 0xcc(r30)
    stw r31, 0xd0(r30)
    stw r31, 0xd4(r30)
    stw r31, 0xd8(r30)
    stw r31, 0xdc(r30)
    stfs f0, 0xe0(r30)
    stw r4, 0x78(r30)
    stw r0, 0x74(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037CA24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8037CA24_0000043C
    lis r4, lbl_8078A4F0@ha
    li r30, 0x0
    addi r4, r4, lbl_8078A4F0@l
    stw r4, 0x0(r3)
    li r31, 0x0
lbl_fn_8037CA24_000003D4:
    add r3, r28, r31
    li r4, 0x0
    addi r3, r3, 0x4c
    bl fn_8004B1EC
    add r3, r28, r31
    addi r3, r3, 0x54
    bl fn_800CB480
    addi r30, r30, 0x1
    addi r31, r31, 0x14
    cmpwi r30, 0x2
    blt lbl_fn_8037CA24_000003D4
    li r0, 0x0
    lis r4, fn_8004ADF4@ha
    stw r0, lbl_8087F448
    addi r3, r28, 0x4c
    addi r4, r4, fn_8004ADF4@l
    li r5, 0x14
    li r6, 0x2
    bl fn_806959D8
    mr r3, r28
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r29, 0x0
    ble lbl_fn_8037CA24_0000043C
    mr r3, r28
    bl dtor_80084684
lbl_fn_8037CA24_0000043C:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037CAF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8037CAF0_00000490
    li r0, 0x7
    stw r0, 0x48(r31)
    li r3, 0x1
    b lbl_fn_8037CAF0_00000494
lbl_fn_8037CAF0_00000490:
    li r3, 0x0
lbl_fn_8037CAF0_00000494:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037CB38(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x84(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_000004F0
    lwz r4, 0x48(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    bgt lbl_fn_8037CB38_000004F0
    li r0, 0x1
    li r4, 0x0
    stw r4, 0x84(r3)
    stw r0, 0x88(r3)
    stw r0, 0x48(r3)
lbl_fn_8037CB38_000004F0:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8037CB38_000007EC
    lwz r0, 0x88(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_000005BC
    lwz r5, 0x7c(r3)
    li r25, 0x0
    lwz r29, 0x8c(r3)
    addi r0, r5, 0x1
    lwz r30, 0x90(r3)
    srwi r4, r0, 31
    lfs f1, 0x94(r3)
    clrlwi r0, r0, 31
    lwz r12, 0x98(r3)
    xor r0, r0, r4
    lwz r11, 0x9c(r3)
    subf r27, r4, r0
    lwz r10, 0xa0(r3)
    mulli r4, r5, 0x14
    lwz r9, 0xa4(r3)
    lwz r8, 0xc4(r3)
    lwz r7, 0xc8(r3)
    add r26, r3, r4
    lfs f0, 0xcc(r3)
    mulli r0, r27, 0x14
    lwz r6, 0xd0(r3)
    lwz r5, 0xd4(r3)
    addi r26, r26, 0x4c
    lwz r4, 0xd8(r3)
    add r28, r3, r0
    lwz r0, 0xdc(r3)
    addi r28, r28, 0x4c
    stw r25, 0x88(r3)
    stw r26, 0x78(r3)
    stw r27, 0x7c(r3)
    stw r28, 0x74(r3)
    stw r29, 0xa8(r3)
    stw r30, 0xac(r3)
    stfs f1, 0xb0(r3)
    stw r12, 0xb4(r3)
    stw r11, 0xb8(r3)
    stw r10, 0xbc(r3)
    stw r9, 0xc0(r3)
    stw r8, 0x8c(r3)
    stw r7, 0x90(r3)
    stfs f0, 0x94(r3)
    stw r6, 0x98(r3)
    stw r5, 0x9c(r3)
    stw r4, 0xa0(r3)
    stw r0, 0xa4(r3)
lbl_fn_8037CB38_000005BC:
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_0000061C
    lwz r3, 0x90(r3)
    li r4, 0x1
    li r5, 0x1
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_8037CB38_00000BCC
    lwz r4, 0xa4(r31)
    mr r3, r31
    lwz r5, 0x74(r31)
    neg r0, r4
    or r0, r0, r4
    lwz r4, 0x10(r5)
    srwi r0, r0, 31
    or r0, r4, r0
    stw r0, 0x10(r5)
    lwz r4, 0x74(r31)
    lwz r5, 0x90(r31)
    bl fn_8037D274
    li r0, 0x2
    stw r0, 0x48(r31)
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_0000061C:
    lwz r0, 0x8c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8037CB38_00000650
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_8037CB38_00000650
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_00000650
    lwz r6, 0x98(r31)
    li r4, 0x1
    li r5, 0x2
    bl fn_80360848
lbl_fn_8037CB38_00000650:
    lwz r3, lbl_8087F418
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8037CB38_00000694
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8037CB38_00000694
    lwz r0, 0x180(r3)
    li r3, 0x0
    cmpwi r0, 0x1
    beq lbl_fn_8037CB38_00000684
    cmpwi r0, 0x2
    bne lbl_fn_8037CB38_00000688
lbl_fn_8037CB38_00000684:
    li r3, 0x1
lbl_fn_8037CB38_00000688:
    cmpwi r3, 0x0
    beq lbl_fn_8037CB38_00000694
    li r4, 0x1
lbl_fn_8037CB38_00000694:
    cmpwi r4, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r28, 0x78(r31)
    lwz r25, 0x98(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8037CB38_00000740
    lwz r0, lbl_8087F480
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_00000734
    lwz r3, 0x8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8037CB38_00000734
    lwz r0, 0x10(r28)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8037CB38_00000734
    bl fn_800CAA88
    mulli r0, r25, 0x3e8
    lis r4, 0x8889
    subi r4, r4, 0x7777
    mulhw r4, r4, r0
    add r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    add r26, r0, r3
    lwz r3, 0x8(r28)
    bl fn_800CA910
    cmpw r26, r3
    ble lbl_fn_8037CB38_00000718
    lwz r3, 0x8(r28)
    bl fn_800CA910
    subf r26, r3, r26
lbl_fn_8037CB38_00000718:
    lwz r27, lbl_8087F480
    addi r3, r28, 0x8
    bl fn_800CB6F8
    mr r4, r3
    mr r3, r27
    mr r5, r26
    bl fn_803CE0B4
lbl_fn_8037CB38_00000734:
    mr r3, r28
    mr r4, r25
    bl fn_8004B1EC
lbl_fn_8037CB38_00000740:
    lwz r3, 0x78(r31)
    lwz r0, 0x10(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8037CB38_00000760
    lwz r0, 0x10(r3)
    clrrwi r0, r0, 1
    stw r0, 0x10(r3)
lbl_fn_8037CB38_00000760:
    lwz r0, 0x8c(r31)
    li r3, 0x3
    stw r3, 0x48(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8037CB38_00000BCC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE160
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000BCC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE278
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_000007B0
    lwz r0, 0xa8(r31)
    cmpwi r0, 0x67
    bne lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_000007B0:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_8037CB38_00000BCC
    lwz r0, 0x18c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_00000BCC
    lwz r4, 0x98(r31)
    li r0, 0x0
    stw r0, 0x18c(r3)
    lfs f1, 0x188(r3)
    bl fn_803605EC
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_000007EC:
    cmpwi r0, 0x2
    bne lbl_fn_8037CB38_000009C8
    lwz r3, 0x74(r3)
    bl fn_8004B0E4
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_00000BCC
    lwz r3, 0x74(r31)
    lfs f1, 0x94(r31)
    lwz r4, 0x98(r31)
    bl fn_8004B158
    lwz r0, 0xa0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_0000090C
    lwz r0, 0x98(r31)
    li r26, 0xf
    cmpwi r0, 0xf
    ble lbl_fn_8037CB38_00000840
    mr r26, r0
lbl_fn_8037CB38_00000840:
    lwz r28, 0x78(r31)
    cmpwi r28, 0x0
    beq lbl_fn_8037CB38_000008E0
    lwz r0, lbl_8087F480
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_000008D4
    lwz r3, 0x8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8037CB38_000008D4
    lwz r0, 0x10(r28)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8037CB38_000008D4
    bl fn_800CAA88
    mulli r0, r26, 0x3e8
    lis r4, 0x8889
    subi r4, r4, 0x7777
    mulhw r4, r4, r0
    add r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    add r25, r0, r3
    lwz r3, 0x8(r28)
    bl fn_800CA910
    cmpw r25, r3
    ble lbl_fn_8037CB38_000008B8
    lwz r3, 0x8(r28)
    bl fn_800CA910
    subf r25, r3, r25
lbl_fn_8037CB38_000008B8:
    lwz r27, lbl_8087F480
    addi r3, r28, 0x8
    bl fn_800CB6F8
    mr r4, r3
    mr r3, r27
    mr r5, r25
    bl fn_803CE0B4
lbl_fn_8037CB38_000008D4:
    mr r3, r28
    mr r4, r26
    bl fn_8004B1EC
lbl_fn_8037CB38_000008E0:
    lwz r3, 0x78(r31)
    lwz r0, 0x10(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8037CB38_00000900
    lwz r0, 0x10(r3)
    clrrwi r0, r0, 1
    stw r0, 0x10(r3)
lbl_fn_8037CB38_00000900:
    li r0, 0x5
    stw r0, 0x48(r31)
    b lbl_fn_8037CB38_00000914
lbl_fn_8037CB38_0000090C:
    li r0, 0x4
    stw r0, 0x48(r31)
lbl_fn_8037CB38_00000914:
    lwz r0, lbl_8087F418
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_00000BCC
    lwz r0, 0x8c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8037CB38_00000BCC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE160
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000974
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE278
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000968
    lwz r0, 0x8c(r31)
    cmpwi r0, 0x67
    bne lbl_fn_8037CB38_00000974
lbl_fn_8037CB38_00000968:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_0000098C
lbl_fn_8037CB38_00000974:
    lwz r3, lbl_8087F418
    li r4, 0x0
    lwz r6, 0x98(r31)
    li r5, 0x2
    bl fn_80360848
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_0000098C:
    lwz r3, lbl_8087F418
    li r4, 0x1
    lwz r6, 0x98(r31)
    li r5, 0x2
    bl fn_80360848
    lwz r3, lbl_8087F418
    lwz r0, 0x18c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r4, 0x98(r31)
    li r0, 0x1
    stw r0, 0x18c(r3)
    lfs f1, 0x190(r3)
    bl fn_803605EC
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_000009C8:
    cmpwi r0, 0x3
    bne lbl_fn_8037CB38_00000A60
    lwz r3, 0x78(r3)
    addi r3, r3, 0x8
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r3, 0x78(r31)
    addi r3, r3, 0x8
    bl fn_800CB480
    lwz r0, 0x8c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8037CB38_00000A54
    lwz r25, 0x90(r31)
    li r4, 0x1
    li r5, 0x1
    mr r3, r25
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_8037CB38_00000BCC
    lwz r4, 0xa4(r31)
    mr r3, r31
    lwz r6, 0x74(r31)
    mr r5, r25
    neg r0, r4
    or r0, r0, r4
    lwz r4, 0x10(r6)
    srwi r0, r0, 31
    or r0, r4, r0
    stw r0, 0x10(r6)
    lwz r4, 0x74(r31)
    bl fn_8037D274
    li r0, 0x2
    stw r0, 0x48(r31)
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_00000A54:
    li r0, 0x7
    stw r0, 0x48(r31)
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_00000A60:
    cmpwi r0, 0x4
    bne lbl_fn_8037CB38_00000A88
    lwz r3, 0x74(r3)
    addi r3, r3, 0x8
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000BCC
    li r0, 0x6
    stw r0, 0x48(r31)
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_00000A88:
    cmpwi r0, 0x5
    bne lbl_fn_8037CB38_00000AD0
    lwz r3, 0x74(r3)
    addi r3, r3, 0x8
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r3, 0x78(r31)
    addi r3, r3, 0x8
    bl fn_800CB538
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r3, 0x78(r31)
    addi r3, r3, 0x8
    bl fn_800CB480
    li r0, 0x6
    stw r0, 0x48(r31)
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_00000AD0:
    cmpwi r0, 0x6
    bne lbl_fn_8037CB38_00000BCC
    lwz r3, 0x74(r3)
    addi r3, r3, 0x8
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000B10
    lfs f1, lbl_808858D8
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8037D4C0
    li r0, 0x0
    stw r0, 0x80(r31)
lbl_fn_8037CB38_00000B10:
    lwz r0, lbl_8087F418
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_00000BCC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE160
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000B64
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE278
    cmpwi r3, 0x0
    bne lbl_fn_8037CB38_00000B58
    lwz r0, 0x8c(r31)
    cmpwi r0, 0x67
    bne lbl_fn_8037CB38_00000B64
lbl_fn_8037CB38_00000B58:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_00000B88
lbl_fn_8037CB38_00000B64:
    lwz r3, lbl_8087F418
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r6, 0x98(r31)
    li r4, 0x0
    li r5, 0x2
    bl fn_80360848
    b lbl_fn_8037CB38_00000BCC
lbl_fn_8037CB38_00000B88:
    lwz r3, lbl_8087F418
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037CB38_00000BCC
    lwz r6, 0x98(r31)
    li r4, 0x1
    li r5, 0x2
    bl fn_80360848
    lwz r3, lbl_8087F418
    lwz r0, 0x18c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8037CB38_00000BCC
    lwz r4, 0x98(r31)
    li r0, 0x1
    stw r0, 0x18c(r3)
    lfs f1, 0x190(r3)
    bl fn_803605EC
lbl_fn_8037CB38_00000BCC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8037D274(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r29, r4
    mr r27, r5
    beq lbl_fn_8037D274_00000CA8
    lwz r0, 0x9c(r3)
    li r28, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_8037D274_00000C18
    mr r28, r0
lbl_fn_8037D274_00000C18:
    lwz r3, lbl_8087EE90
    mr r4, r27
    bl fn_80049B74
    lwz r5, lbl_8087F480
    mr r4, r3
    cmpwi r5, 0x0
    beq lbl_fn_8037D274_00000C5C
    lwz r0, 0x10(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8037D274_00000C5C
    mr r3, r5
    bl fn_803CE074
    cmpwi r3, 0x0
    mr r28, r3
    bge lbl_fn_8037D274_00000C5C
    li r28, 0x0
lbl_fn_8037D274_00000C5C:
    lwz r6, lbl_8087EFE8
    mr r3, r29
    li r30, 0x1
    li r31, 0x0
    lwz r29, 0x34d4(r6)
    mr r4, r27
    mr r5, r28
    stw r30, 0x34d0(r6)
    lwz r6, lbl_8087EFE8
    stw r30, 0x34d4(r6)
    lwz r6, lbl_8087EFE8
    stw r31, 0x34c8(r6)
    bl fn_8004AE84
    lwz r3, lbl_8087EFE8
    stw r31, 0x34d0(r3)
    lwz r3, lbl_8087EFE8
    stw r29, 0x34d4(r3)
    lwz r3, lbl_8087EFE8
    stw r30, 0x34c8(r3)
lbl_fn_8037D274_00000CA8:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037D34C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r4, 0x74(r3)
    stw r0, 0x14(r1)
    cmpwi r4, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8037D34C_00000D08
    addi r3, r4, 0x8
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_8037D34C_00000D08
    lwz r3, 0x74(r31)
    addi r3, r3, 0x8
    bl fn_800CB4C4
    cmpwi r3, 0x0
    beq lbl_fn_8037D34C_00000D08
    li r3, 0x1
    b lbl_fn_8037D34C_00000D44
lbl_fn_8037D34C_00000D08:
    lwz r3, 0x78(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8037D34C_00000D40
    addi r3, r3, 0x8
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_8037D34C_00000D40
    lwz r3, 0x78(r31)
    addi r3, r3, 0x8
    bl fn_800CB4C4
    cmpwi r3, 0x0
    beq lbl_fn_8037D34C_00000D40
    li r3, 0x1
    b lbl_fn_8037D34C_00000D44
lbl_fn_8037D34C_00000D40:
    li r3, 0x0
lbl_fn_8037D34C_00000D44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037D3E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r7, 0x74(r3)
    cmpwi r7, 0x0
    beq lbl_fn_8037D3E8_00000DB8
    addi r3, r7, 0x8
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_8037D3E8_00000DB8
    lwz r3, 0x74(r28)
    mr r4, r29
    mr r5, r30
    mr r6, r31
    addi r3, r3, 0x8
    bl fn_800CB640
lbl_fn_8037D3E8_00000DB8:
    lwz r3, 0x78(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8037D3E8_00000DEC
    addi r3, r3, 0x8
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_8037D3E8_00000DEC
    lwz r3, 0x78(r28)
    mr r4, r29
    mr r5, r30
    mr r6, r31
    addi r3, r3, 0x8
    bl fn_800CB640
lbl_fn_8037D3E8_00000DEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037D49C(void)
{
    nofralloc
    lwz r5, 0x74(r3)
    lfs f0, 0x94(r3)
    cmpwi r5, 0x0
    stfs f0, 0xe0(r3)
    stfs f1, 0x94(r3)
    beqlr
    addi r3, r5, 0x8
    b fn_800CB5B4
    blr
}

asm void fn_8037D4C0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_22
    fmr f31, f1
    cmpwi r4, 0x0
    mr r31, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    ble lbl_fn_8037D4C0_00000E84
    cmpwi r4, 0x6
    bgt lbl_fn_8037D4C0_00000E84
    lis r5, lbl_8074DFD0@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_8074DFD0@l
    lwzx r22, r5, r0
lbl_fn_8037D4C0_00000E84:
    lwz r28, lbl_8087EE90
    li r27, 0x0
    li r26, 0x0
    cmpwi r28, 0x0
    beq lbl_fn_8037D4C0_00000F28
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_8037D4C0_00000F28
    lwz r29, 0x90(r3)
    li r30, 0x0
    cmpwi r29, 0x0
    beq lbl_fn_8037D4C0_00000EC8
    mr r3, r29
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8037D4C0_00000EC8
    li r30, 0x1
lbl_fn_8037D4C0_00000EC8:
    cmpwi r30, 0x0
    beq lbl_fn_8037D4C0_00000EE0
    mr r3, r28
    mr r4, r29
    bl fn_80049B74
    mr r27, r3
lbl_fn_8037D4C0_00000EE0:
    mr r3, r22
    bl fn_8037C71C
    cmpwi r3, 0x0
    li r30, 0x0
    beq lbl_fn_8037D4C0_00000F04
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8037D4C0_00000F04
    li r30, 0x1
lbl_fn_8037D4C0_00000F04:
    cmpwi r30, 0x0
    beq lbl_fn_8037D4C0_00000F28
    lwz r30, lbl_8087EE90
    mr r3, r22
    bl fn_8037C71C
    mr r4, r3
    mr r3, r30
    bl fn_80049B74
    mr r26, r3
lbl_fn_8037D4C0_00000F28:
    cmplw r27, r26
    beq lbl_fn_8037D4C0_00000F98
    stw r22, 0xc4(r31)
    mr r3, r22
    bl fn_8037C71C
    cmpwi r22, 0x0
    stw r3, 0xc8(r31)
    stfs f31, 0xcc(r31)
    stw r23, 0xd0(r31)
    stw r25, 0xd4(r31)
    stw r24, 0xd8(r31)
    ble lbl_fn_8037D4C0_00000F70
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE160
    cmpwi r3, 0x0
    beq lbl_fn_8037D4C0_00000F78
lbl_fn_8037D4C0_00000F70:
    li r0, 0x0
    stw r0, 0xd8(r31)
lbl_fn_8037D4C0_00000F78:
    mr r3, r22
    bl fn_80207F34
    li r0, 0x1
    stw r3, 0xdc(r31)
    li r3, 0x1
    stw r0, 0x80(r31)
    stw r0, 0x84(r31)
    b lbl_fn_8037D4C0_00000FD4
lbl_fn_8037D4C0_00000F98:
    lwz r3, 0x74(r31)
    frsp f0, f31
    stw r22, 0x8c(r31)
    cmpwi r3, 0x0
    stw r23, 0x98(r31)
    stfs f0, 0xe0(r31)
    stfs f31, 0x94(r31)
    beq lbl_fn_8037D4C0_00000FC8
    fmr f1, f31
    mr r4, r23
    addi r3, r3, 0x8
    bl fn_800CB5B4
lbl_fn_8037D4C0_00000FC8:
    li r0, 0x0
    stw r0, 0x84(r31)
    li r3, 0x0
lbl_fn_8037D4C0_00000FD4:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8037D684(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8037D684_000010AC
    mr r3, r0
    bl fn_80373148
    cmpwi r3, 0x0
    bne lbl_fn_8037D684_00001038
    b lbl_fn_8037D684_000010AC
lbl_fn_8037D684_00001038:
    lwz r0, 0x84(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8037D684_000010AC
    lwz r0, 0x8c(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8037D684_000010AC
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpw r30, r0
    bne lbl_fn_8037D684_00001070
    lwz r0, 0x4c(r3)
    cmpw r31, r0
    beq lbl_fn_8037D684_000010AC
lbl_fn_8037D684_00001070:
    lwz r0, 0x84(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8037D684_000010AC
    lwz r0, 0x8c(r29)
    cmpwi r0, 0x191
    beq lbl_fn_8037D684_00001090
    cmpwi r0, 0x1f5
    bne lbl_fn_8037D684_000010AC
lbl_fn_8037D684_00001090:
    lfs f1, lbl_808858D8
    mr r3, r29
    li r4, 0x0
    li r5, 0x2d
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_8037D684_000010AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037D758(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8037D758_00001160
    lwz r0, 0x10d8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8037D758_000010FC
    b lbl_fn_8037D758_00001160
lbl_fn_8037D758_000010FC:
    mr r3, r4
    li r4, 0x38f
    bl fn_80370174
    mr r31, r3
    lwz r3, lbl_8087F430
    li r4, 0x390
    bl fn_80370174
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    lis r4, lbl_8074DFF0@ha
    stw r3, 0xc(r1)
    lfd f2, lbl_8074DFF0@l(r4)
    cmpwi r31, 0x0
    stw r0, 0x8(r1)
    lfs f0, lbl_808858E0
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    ble lbl_fn_8037D758_00001160
    mr r3, r30
    mr r4, r31
    li r5, 0x3c
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_8037D758_00001160:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037D808(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    beq lbl_fn_8037D808_00001210
    lwz r4, 0x10d8(r6)
    cmpwi r4, 0x0
    bne lbl_fn_8037D808_000011A8
    b lbl_fn_8037D808_00001210
lbl_fn_8037D808_000011A8:
    lwz r0, 0x140(r4)
    li r5, 0x0
    lfs f31, lbl_808858D8
    cmpwi r0, 0x0
    bne lbl_fn_8037D808_000011DC
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8037D808_000011D4
    lwz r5, 0xc4(r3)
    lfs f31, 0xcc(r3)
    b lbl_fn_8037D808_000011DC
lbl_fn_8037D808_000011D4:
    lwz r5, 0x8c(r3)
    lfs f31, 0x94(r3)
lbl_fn_8037D808_000011DC:
    mr r3, r6
    li r4, 0x38f
    li r6, 0x0
    bl fn_80370320
    lfs f0, lbl_808858E0
    li r4, 0x390
    lwz r3, lbl_8087F430
    li r6, 0x0
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r5, 0xc(r1)
    bl fn_80370320
lbl_fn_8037D808_00001210:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037D8B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8004B290
    addi r3, r29, 0x1f4
    li r4, 0x0
    li r5, 0x0
    bl fn_8004B290
    lfs f5, lbl_808858E8
    li r30, 0x0
    lfs f0, lbl_808858EC
    stfs f5, 0x41c(r29)
    stw r30, 0x424(r29)
    stfs f5, 0x464(r29)
    stw r30, 0x46c(r29)
    stfs f5, 0x4ac(r29)
    stw r30, 0x4b4(r29)
    stfs f5, 0x4f4(r29)
    stfs f5, 0x550(r29)
    stfs f5, 0x58c(r29)
    stfs f5, 0x5c8(r29)
    stfs f5, 0x604(r29)
    stfs f5, 0x640(r29)
    stfs f5, 0x67c(r29)
    stfs f5, 0x6b8(r29)
    stfs f5, 0x6f4(r29)
    stfs f5, 0x730(r29)
    stfs f5, 0x76c(r29)
    stfs f5, 0x7a8(r29)
    stfs f5, 0x7e4(r29)
    stw r30, 0x7ec(r29)
    stw r30, 0x7f0(r29)
    stw r30, 0x7f4(r29)
    stw r30, 0x7fc(r29)
    stw r30, 0x804(r29)
    stw r30, 0x808(r29)
    stw r30, 0x834(r29)
    stw r30, 0x838(r29)
    stw r30, 0x83c(r29)
    stfs f5, 0x840(r29)
    stfs f5, 0x844(r29)
    stfs f5, 0x848(r29)
    stfs f5, 0x84c(r29)
    stfs f5, 0x850(r29)
    stfs f5, 0x854(r29)
    stw r30, 0x858(r29)
    stw r30, 0x880(r29)
    stfs f5, 0x884(r29)
    stfs f5, 0x888(r29)
    stfs f5, 0x88c(r29)
    stfs f5, 0x890(r29)
    stfs f5, 0x894(r29)
    stfs f5, 0x898(r29)
    stw r30, 0x89c(r29)
    stfs f0, 0x8a0(r29)
    stfs f5, 0x8a4(r29)
    stfs f5, 0x8a8(r29)
    stfs f5, 0x8ac(r29)
    stfs f5, 0x8b0(r29)
    stfs f5, 0x8b4(r29)
    stfs f5, 0x8b8(r29)
    lfs f2, lbl_808858F8
    li r31, 0x1
    li r6, 0xf
    lfs f4, lbl_808858F0
    lfs f3, lbl_808858F4
    li r7, -0x1
    lfs f1, lbl_808858FC
    li r0, 0xa
    lfs f0, lbl_80885900
    addi r3, r29, 0xa20
    stfs f5, 0x8bc(r29)
    li r4, 0x0
    li r5, 0x0
    stfs f5, 0x8c0(r29)
    stfs f5, 0x8c4(r29)
    stfs f5, 0x8c8(r29)
    stw r30, 0x8cc(r29)
    stw r7, 0x8d0(r29)
    stw r30, 0x8d4(r29)
    stfs f4, 0x8d8(r29)
    stfs f3, 0x8dc(r29)
    stw r31, 0x8e0(r29)
    stw r30, 0x8e4(r29)
    stw r30, 0x8e8(r29)
    stw r30, 0x8ec(r29)
    stw r30, 0x8f0(r29)
    stw r30, 0x8f4(r29)
    stfs f5, 0x8f8(r29)
    stfs f2, 0x8fc(r29)
    stw r30, 0x900(r29)
    stw r30, 0x904(r29)
    stfs f5, 0x908(r29)
    stfs f5, 0x90c(r29)
    stb r30, 0x910(r29)
    stb r30, 0x911(r29)
    stw r30, 0x914(r29)
    stw r6, 0x918(r29)
    stfs f5, 0x91c(r29)
    stfs f5, 0x920(r29)
    stfs f5, 0x924(r29)
    stfs f5, 0x928(r29)
    stfs f5, 0x92c(r29)
    stfs f5, 0x930(r29)
    stfs f5, 0x93c(r29)
    stfs f5, 0x940(r29)
    stfs f5, 0x944(r29)
    stfs f5, 0x948(r29)
    stfs f5, 0x94c(r29)
    stfs f5, 0x950(r29)
    stfs f5, 0x954(r29)
    stfs f5, 0x958(r29)
    stfs f2, 0x95c(r29)
    stfs f5, 0x96c(r29)
    stfs f5, 0x970(r29)
    stfs f5, 0x974(r29)
    stw r30, 0x984(r29)
    stfs f5, 0x988(r29)
    stfs f1, 0x9ec(r29)
    stw r0, 0x9f0(r29)
    stw r31, 0x9f4(r29)
    stfs f0, 0xa04(r29)
    stw r6, 0xa08(r29)
    stfs f5, 0xa0c(r29)
    stfs f5, 0xa10(r29)
    stfs f5, 0xa14(r29)
    stfs f5, 0xa18(r29)
    stfs f5, 0xa1c(r29)
    bl fn_8004B290
    lfs f1, lbl_80885918
    li r3, 0x140
    lfs f6, lbl_808858E8
    li r0, 0xe0
    lfs f5, lbl_80885908
    lfs f4, lbl_8088590C
    lfs f3, lbl_80885910
    lfs f2, lbl_80885914
    lfs f7, lbl_80885904
    lfs f0, lbl_808858F8
    stfs f7, 0xc14(r29)
    stfs f6, 0xc1c(r29)
    stw r30, 0xc20(r29)
    stw r31, 0xc24(r29)
    stw r30, 0xc28(r29)
    stw r30, 0xc2c(r29)
    stw r31, 0xc30(r29)
    stfs f5, 0xc34(r29)
    stfs f4, 0xc38(r29)
    stfs f3, 0xc3c(r29)
    stfs f2, 0xc40(r29)
    stw r3, 0xc44(r29)
    stw r0, 0xc48(r29)
    stfs f1, 0xc4c(r29)
    stfs f1, 0xc50(r29)
    stw r31, 0xc54(r29)
    stw r30, 0xc58(r29)
    stw r30, 0xc5c(r29)
    stw r31, 0xc60(r29)
    stfs f5, 0xc64(r29)
    stfs f4, 0xc68(r29)
    stfs f3, 0xc6c(r29)
    stfs f2, 0xc70(r29)
    stw r3, 0xc74(r29)
    stw r0, 0xc78(r29)
    stfs f1, 0xc7c(r29)
    stfs f1, 0xc80(r29)
    stw r30, 0xc84(r29)
    stfs f6, 0xca0(r29)
    stfs f6, 0xca4(r29)
    stfs f0, 0xca8(r29)
    lwz r3, lbl_8087EEE0
    bl fn_80076FF8
    lwz r0, 0x7fc(r29)
    addi r3, r29, 0x4fc
    stfs f1, 0x54(r29)
    li r4, 0x0
    li r5, 0x20
    stw r0, 0x800(r29)
    bl memset
    mr r3, r29
    bl fn_8037DD00
    mr r3, r29
    bl fn_8037E9E0
    lfs f0, lbl_808858E8
    mr r3, r29
    lfs f4, lbl_8088591C
    lfs f3, lbl_8088590C
    lfs f2, lbl_80885910
    lfs f1, lbl_80885914
    stfs f4, 0xc64(r29)
    stfs f3, 0xc68(r29)
    stfs f2, 0xc6c(r29)
    stfs f1, 0xc70(r29)
    stfs f0, 0xc8c(r29)
    stfs f0, 0xc88(r29)
    stfs f0, 0xc94(r29)
    stfs f0, 0xc90(r29)
    stfs f0, 0xc9c(r29)
    stfs f0, 0xc98(r29)
    stfs f0, 0x994(r29)
    stfs f0, 0x990(r29)
    stfs f0, 0x98c(r29)
    stfs f0, 0x9a0(r29)
    stfs f0, 0x99c(r29)
    stfs f0, 0x998(r29)
    stfs f0, 0x9ac(r29)
    stfs f0, 0x9a8(r29)
    stfs f0, 0x9a4(r29)
    stfs f0, 0x9b8(r29)
    stfs f0, 0x9b4(r29)
    stfs f0, 0x9b0(r29)
    stfs f0, 0x9c4(r29)
    stfs f0, 0x9c0(r29)
    stfs f0, 0x9bc(r29)
    stfs f0, 0x9d0(r29)
    stfs f0, 0x9cc(r29)
    stfs f0, 0x9c8(r29)
    stfs f0, 0x9dc(r29)
    stfs f0, 0x9d8(r29)
    stfs f0, 0x9d4(r29)
    stfs f0, 0x9e8(r29)
    stfs f0, 0x9e4(r29)
    stfs f0, 0x9e0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8037DC68(void)
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
    beq lbl_fn_8037DC68_00001654
    li r4, -0x1
    addi r3, r3, 0xa20
    bl fn_8004B338
    addic. r0, r30, 0x7ec
    beq lbl_fn_8037DC68_0000162C
    lwz r4, 0x7ec(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8037DC68_0000162C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8037DC68_0000162C
    bl fn_800897D8
lbl_fn_8037DC68_0000162C:
    addi r3, r30, 0x1f4
    li r4, -0x1
    bl fn_8004B338
    mr r3, r30
    li r4, -0x1
    bl fn_8004B338
    cmpwi r31, 0x0
    ble lbl_fn_8037DC68_00001654
    mr r3, r30
    bl dtor_80084684
lbl_fn_8037DC68_00001654:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8037DD00(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    stfd f25, 0x90(r1)
    psq_st f25, 0x98(r1), 0, 0
    stfd f24, 0x80(r1)
    psq_st f24, 0x88(r1), 0, 0
    stfd f23, 0x70(r1)
    psq_st f23, 0x78(r1), 0, 0
    stfd f22, 0x60(r1)
    psq_st f22, 0x68(r1), 0, 0
    stfd f21, 0x50(r1)
    psq_st f21, 0x58(r1), 0, 0
    stfd f20, 0x40(r1)
    psq_st f20, 0x48(r1), 0, 0
    stfd f19, 0x30(r1)
    psq_st f19, 0x38(r1), 0, 0
    stfd f18, 0x20(r1)
    psq_st f18, 0x28(r1), 0, 0
    stfd f17, 0x10(r1)
    psq_st f17, 0x18(r1), 0, 0
    lfs f5, lbl_808858E8
    li r4, 0x1
    lfs f3, lbl_80885938
    li r0, 0x0
    lfs f7, lbl_80885930
    lfs f2, lbl_8088593C
    lfs f13, lbl_8088594C
    lfs f4, lbl_80885934
    lfs f17, lbl_80885944
    lfs f19, lbl_80885950
    lfs f20, lbl_80885954
    lfs f10, lbl_80885924
    lfs f9, lbl_80885928
    lfs f8, lbl_8088592C
    lfs f6, lbl_808858F4
    lfs f1, lbl_808858F0
    lfs f0, lbl_80885940
    lfs f18, lbl_80885948
    lfs f21, lbl_80885958
    lfs f22, lbl_8088595C
    lfs f12, lbl_80885960
    lfs f11, lbl_80885964
    stfs f10, 0x51c(r3)
    stfs f9, 0x520(r3)
    stfs f8, 0x524(r3)
    stfs f7, 0x528(r3)
    stfs f6, 0x52c(r3)
    stfs f5, 0x530(r3)
    stfs f5, 0x534(r3)
    stfs f4, 0x538(r3)
    stfs f3, 0x53c(r3)
    stfs f2, 0x540(r3)
    stfs f3, 0x544(r3)
    stfs f1, 0x548(r3)
    stfs f0, 0x54c(r3)
    stw r4, 0x554(r3)
    stfs f17, 0x558(r3)
    stfs f18, 0x55c(r3)
    stfs f5, 0x560(r3)
    stfs f5, 0x564(r3)
    stfs f13, 0x568(r3)
    stfs f5, 0x56c(r3)
    stfs f5, 0x570(r3)
    stfs f19, 0x574(r3)
    stfs f5, 0x578(r3)
    stfs f2, 0x57c(r3)
    stfs f5, 0x580(r3)
    stfs f5, 0x584(r3)
    stfs f5, 0x588(r3)
    stw r0, 0x590(r3)
    stfs f13, 0x594(r3)
    stfs f20, 0x598(r3)
    stfs f5, 0x59c(r3)
    stfs f7, 0x5a0(r3)
    stfs f13, 0x5a4(r3)
    stfs f5, 0x5a8(r3)
    stfs f7, 0x5ac(r3)
    stfs f4, 0x5b0(r3)
    stfs f3, 0x5b4(r3)
    stfs f2, 0x5b8(r3)
    stfs f3, 0x5bc(r3)
    stfs f21, 0x5c0(r3)
    stfs f5, 0x5c4(r3)
    stw r4, 0x5cc(r3)
    stfs f17, 0x5d0(r3)
    stfs f20, 0x5d4(r3)
    stfs f5, 0x5d8(r3)
    stfs f22, 0x5dc(r3)
    stfs f12, 0x5e0(r3)
    stfs f11, 0x5e4(r3)
    stfs f5, 0x5e8(r3)
    stfs f19, 0x5ec(r3)
    lfs f26, lbl_80885974
    lfs f23, lbl_80885968
    lfs f24, lbl_8088596C
    lfs f25, lbl_80885970
    lfs f27, lbl_80885978
    lfs f28, lbl_8088597C
    lfs f31, lbl_80885980
    lfs f30, lbl_80885984
    lfs f13, lbl_80885988
    lfs f12, lbl_8088598C
    lfs f11, lbl_80885990
    lfs f29, lbl_80885910
    stfs f5, 0x5f0(r3)
    stfs f2, 0x5f4(r3)
    stfs f5, 0x5f8(r3)
    stfs f21, 0x5fc(r3)
    stfs f5, 0x600(r3)
    stw r4, 0x608(r3)
    stfs f17, 0x60c(r3)
    stfs f20, 0x610(r3)
    stfs f5, 0x614(r3)
    stfs f22, 0x618(r3)
    stfs f23, 0x61c(r3)
    stfs f24, 0x620(r3)
    stfs f25, 0x624(r3)
    stfs f19, 0x628(r3)
    stfs f5, 0x62c(r3)
    stfs f2, 0x630(r3)
    stfs f5, 0x634(r3)
    stfs f21, 0x638(r3)
    stfs f5, 0x63c(r3)
    stw r4, 0x644(r3)
    stfs f26, 0x648(r3)
    stfs f27, 0x64c(r3)
    stfs f5, 0x650(r3)
    stfs f28, 0x654(r3)
    stfs f31, 0x658(r3)
    stfs f30, 0x65c(r3)
    stfs f13, 0x660(r3)
    stfs f2, 0x664(r3)
    stfs f5, 0x668(r3)
    stfs f5, 0x66c(r3)
    stfs f5, 0x670(r3)
    stfs f21, 0x674(r3)
    stfs f5, 0x678(r3)
    stw r4, 0x680(r3)
    stfs f12, 0x684(r3)
    stfs f18, 0x688(r3)
    stfs f11, 0x68c(r3)
    stfs f5, 0x690(r3)
    stfs f5, 0x694(r3)
    stfs f5, 0x698(r3)
    stfs f5, 0x69c(r3)
    stfs f4, 0x6a0(r3)
    stfs f3, 0x6a4(r3)
    stfs f2, 0x6a8(r3)
    stfs f3, 0x6ac(r3)
    stfs f21, 0x6b0(r3)
    stfs f5, 0x6b4(r3)
    stw r0, 0x6bc(r3)
    stfs f5, 0x7bc(r3)
    stfs f29, 0x7c0(r3)
    stfs f26, 0x7c4(r3)
    lfs f30, lbl_80885994
    lfs f31, lbl_80885998
    lfs f12, 0x550(r3)
    lfs f13, 0x6f4(r3)
    lfs f11, lbl_808858F8
    stfs f9, 0x7b4(r3)
    stfs f30, 0x6c0(r3)
    stfs f9, 0x6c4(r3)
    stfs f31, 0x6c8(r3)
    stfs f7, 0x6cc(r3)
    stfs f6, 0x6d0(r3)
    stfs f5, 0x6d4(r3)
    stfs f5, 0x6d8(r3)
    stfs f4, 0x6dc(r3)
    stfs f3, 0x6e0(r3)
    stfs f2, 0x6e4(r3)
    stfs f3, 0x6e8(r3)
    stfs f1, 0x6ec(r3)
    stfs f0, 0x6f0(r3)
    stw r4, 0x6f8(r3)
    stfs f30, 0x6fc(r3)
    stfs f9, 0x700(r3)
    stfs f31, 0x704(r3)
    stfs f6, 0x70c(r3)
    stfs f5, 0x710(r3)
    stfs f5, 0x714(r3)
    stfs f4, 0x718(r3)
    stfs f3, 0x71c(r3)
    stfs f2, 0x720(r3)
    stfs f3, 0x724(r3)
    stfs f0, 0x72c(r3)
    stfs f13, 0x730(r3)
    stw r4, 0x734(r3)
    stfs f5, 0x708(r3)
    stfs f2, 0x728(r3)
    stfs f10, 0x738(r3)
    stfs f9, 0x73c(r3)
    stfs f8, 0x740(r3)
    stfs f4, 0x754(r3)
    stfs f3, 0x758(r3)
    stfs f2, 0x75c(r3)
    stfs f3, 0x760(r3)
    stfs f1, 0x764(r3)
    stfs f0, 0x768(r3)
    stfs f12, 0x76c(r3)
    stw r4, 0x770(r3)
    stfs f5, 0x744(r3)
    stfs f29, 0x748(r3)
    stfs f5, 0x74c(r3)
    stfs f6, 0x750(r3)
    stfs f10, 0x774(r3)
    stfs f9, 0x778(r3)
    stfs f8, 0x77c(r3)
    stfs f7, 0x780(r3)
    stfs f6, 0x784(r3)
    stfs f5, 0x788(r3)
    stfs f5, 0x78c(r3)
    stfs f4, 0x790(r3)
    stfs f3, 0x794(r3)
    stfs f2, 0x798(r3)
    stfs f1, 0x7a0(r3)
    stfs f0, 0x7a4(r3)
    stfs f12, 0x7a8(r3)
    stw r4, 0x7ac(r3)
    stfs f5, 0x79c(r3)
    stw r0, 0x8f4(r3)
    stfs f11, 0x8fc(r3)
    stfs f5, 0x8f8(r3)
    stw r0, 0x424(r3)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    psq_l f25, 0x98(r1), 0, 0
    lfd f25, 0x90(r1)
    psq_l f24, 0x88(r1), 0, 0
    lfd f24, 0x80(r1)
    psq_l f23, 0x78(r1), 0, 0
    lfd f23, 0x70(r1)
    psq_l f22, 0x68(r1), 0, 0
    lfd f22, 0x60(r1)
    psq_l f21, 0x58(r1), 0, 0
    lfd f21, 0x50(r1)
    psq_l f20, 0x48(r1), 0, 0
    lfd f20, 0x40(r1)
    psq_l f19, 0x38(r1), 0, 0
    lfd f19, 0x30(r1)
    psq_l f18, 0x28(r1), 0, 0
    lfd f18, 0x20(r1)
    psq_l f17, 0x18(r1), 0, 0
    lfd f17, 0x10(r1)
    addi r1, r1, 0x100
    blr
}
