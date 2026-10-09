#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8001A510(void);
extern void fn_8001A65C(void);
extern void fn_8001A8A4(void);
extern void fn_8001AD80(void);
extern void fn_8001ADE8(void);
extern void fn_8001AEDC(void);
extern void fn_8001B5B4(void);
extern void fn_8001B634(void);
extern void fn_8001BA88(void);
extern void fn_8001BAA4(void);
extern void fn_8001BB04(void);
extern void fn_8001BC38(void);
extern void fn_8001BC80(void);
extern void fn_8001BE00(void);
extern void fn_8001BEB0(void);
extern void fn_8001BEE0(void);
extern void fn_8001C068(void);
extern void fn_8003D084(void);
extern void fn_8003D3F8(void);
extern void fn_8003DBA4(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8072FF60[];
extern u8 lbl_8072FF68[];
extern u8 lbl_807307A0[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];
extern u8 lbl_807C6B30[];

/* Small data declarations */
extern u32 lbl_80880798;
extern u32 lbl_8088079C;
extern u32 lbl_808807A0;
extern u32 lbl_808807A4;
extern u32 lbl_808807A8;
extern u32 lbl_808807AC;
extern u32 lbl_808807B0;

/* Function declarations */
void fn_8002B9D0(void);
void fn_8002BA24(void);
void fn_8002BBEC(void);
void fn_8002BCC8(void);
void fn_8002BF30(void);
void fn_8002C00C(void);
void fn_8002C260(void);
void fn_8002C2F0(void);
void fn_8002C354(void);
void fn_8002C680(void);
void fn_8002C7D8(void);
void fn_8002CC58(void);
void fn_8002CD34(void);
void fn_8002D108(void);
void fn_8002D294(void);
void fn_8002D36C(void);
void fn_8002D3B0(void);
void fn_8002D474(void);
void fn_8002D554(void);
void fn_8002D648(void);
void fn_8002D704(void);
void fn_8002D75C(void);
void fn_8002D7F4(void);
void fn_8002D960(void);
void fn_8002DA90(void);
void fn_8002DB78(void);
void fn_8002DDDC(void);
void fn_8002DE6C(void);
void fn_8002DF20(void);
void fn_8002DF78(void);
void fn_8002E0FC(void);
void fn_8002E268(void);
void fn_8002E47C(void);
void fn_8002E564(void);
void fn_8002E8AC(void);
void fn_8002E93C(void);
void fn_8002EB20(void);
void fn_8002EB98(void);
void fn_8002ECCC(void);
void fn_8002EDB4(void);
void fn_8002EE58(void);
void fn_8002EF74(void);
void fn_8002EFC4(void);
void fn_8002F354(void);
void fn_8002F4A4(void);
void fn_8002F674(void);
void fn_8002F704(void);
void fn_8002FBD4(void);
void fn_8002FC40(void);
void fn_8002FD54(void);
void fn_8002FECC(void);
void fn_8002FFE0(void);

asm void fn_8002B9D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8002B9D0_00000034
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002B9D0_00000044
lbl_fn_8002B9D0_00000034:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_8002B9D0_00000044:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002BA24(void)
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
    blt lbl_fn_8002BA24_00000080
    li r0, -0x1
    b lbl_fn_8002BA24_0000008C
lbl_fn_8002BA24_00000080:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002BA24_0000008C:
    cmpwi r0, 0x1
    bne lbl_fn_8002BA24_0000009C
    li r3, -0x1
    b lbl_fn_8002BA24_00000208
lbl_fn_8002BA24_0000009C:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8002BA24_00000204
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002BA24_000001FC
    lwz r3, 0x20(r31)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002BA24_00000114
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
    b lbl_fn_8002BA24_00000164
lbl_fn_8002BA24_00000114:
    cmpwi r3, 0x1
    bne lbl_fn_8002BA24_00000160
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
    b lbl_fn_8002BA24_00000164
lbl_fn_8002BA24_00000160:
    li r0, -0x1
lbl_fn_8002BA24_00000164:
    cmpwi r0, 0x1
    bne lbl_fn_8002BA24_00000180
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002BA24_00000208
lbl_fn_8002BA24_00000180:
    cmpwi r0, 0x4
    bne lbl_fn_8002BA24_0000019C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002BA24_00000208
lbl_fn_8002BA24_0000019C:
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_8002BA24_000001BC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002BA24_00000208
lbl_fn_8002BA24_000001BC:
    cmpwi r3, 0x4
    bne lbl_fn_8002BA24_000001D8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002BA24_00000208
lbl_fn_8002BA24_000001D8:
    cmpwi r3, 0x6
    bne lbl_fn_8002BA24_000001F4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002BA24_00000208
lbl_fn_8002BA24_000001F4:
    li r3, -0x1
    b lbl_fn_8002BA24_00000208
lbl_fn_8002BA24_000001FC:
    li r3, -0x1
    b lbl_fn_8002BA24_00000208
lbl_fn_8002BA24_00000204:
    li r3, -0x1
lbl_fn_8002BA24_00000208:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002BBEC(void)
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
    beq lbl_fn_8002BBEC_000002BC
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002BBEC_0000027C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002BBEC_0000027C:
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
    b lbl_fn_8002BBEC_000002C0
lbl_fn_8002BBEC_000002BC:
    li r0, -0x1
lbl_fn_8002BBEC_000002C0:
    cmpwi r0, 0x7
    bne lbl_fn_8002BBEC_000002DC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002BBEC_000002E0
lbl_fn_8002BBEC_000002DC:
    li r3, -0x1
lbl_fn_8002BBEC_000002E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002BCC8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002BCC8_00000364
    lwz r0, 0x64(r31)
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
    b lbl_fn_8002BCC8_000003B4
lbl_fn_8002BCC8_00000364:
    cmpwi r3, 0x1
    bne lbl_fn_8002BCC8_000003B0
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
    b lbl_fn_8002BCC8_000003B4
lbl_fn_8002BCC8_000003B0:
    li r0, -0x1
lbl_fn_8002BCC8_000003B4:
    cmpwi r0, 0x4
    bne lbl_fn_8002BCC8_000003D0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002BCC8_0000054C
lbl_fn_8002BCC8_000003D0:
    cmpwi r0, 0x1
    bne lbl_fn_8002BCC8_000003EC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002BCC8_0000054C
lbl_fn_8002BCC8_000003EC:
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002BCC8_000004C0
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8002BCC8_00000480
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_8002BCC8_0000046C
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
lbl_fn_8002BCC8_0000046C:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002BCC8_000004C4
lbl_fn_8002BCC8_00000480:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x7
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_8002BCC8_000004C4
lbl_fn_8002BCC8_000004C0:
    li r0, -0x1
lbl_fn_8002BCC8_000004C4:
    cmpwi r0, 0x9
    bne lbl_fn_8002BCC8_000004E0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002BCC8_0000054C
lbl_fn_8002BCC8_000004E0:
    cmpwi r0, 0x6
    bne lbl_fn_8002BCC8_00000548
    bl fn_8003D3F8
    cmpwi r3, 0x6
    bne lbl_fn_8002BCC8_00000508
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002BCC8_0000054C
lbl_fn_8002BCC8_00000508:
    cmpwi r3, 0x4
    bne lbl_fn_8002BCC8_00000524
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002BCC8_0000054C
lbl_fn_8002BCC8_00000524:
    cmpwi r3, 0x9
    bne lbl_fn_8002BCC8_00000540
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002BCC8_0000054C
lbl_fn_8002BCC8_00000540:
    li r3, -0x1
    b lbl_fn_8002BCC8_0000054C
lbl_fn_8002BCC8_00000548:
    li r3, -0x1
lbl_fn_8002BCC8_0000054C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8002BF30(void)
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
    beq lbl_fn_8002BF30_00000600
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002BF30_000005C0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002BF30_000005C0:
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
    b lbl_fn_8002BF30_00000604
lbl_fn_8002BF30_00000600:
    li r0, -0x1
lbl_fn_8002BF30_00000604:
    cmpwi r0, 0x7
    bne lbl_fn_8002BF30_00000620
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002BF30_00000624
lbl_fn_8002BF30_00000620:
    li r3, -0x1
lbl_fn_8002BF30_00000624:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002C00C(void)
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
    bne lbl_fn_8002C00C_000006A8
    lwz r0, 0x64(r31)
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
    b lbl_fn_8002C00C_000006F8
lbl_fn_8002C00C_000006A8:
    cmpwi r3, 0x1
    bne lbl_fn_8002C00C_000006F4
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
    b lbl_fn_8002C00C_000006F8
lbl_fn_8002C00C_000006F4:
    li r0, -0x1
lbl_fn_8002C00C_000006F8:
    cmpwi r0, 0x4
    bne lbl_fn_8002C00C_00000714
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002C00C_0000087C
lbl_fn_8002C00C_00000714:
    cmpwi r0, 0x1
    bne lbl_fn_8002C00C_00000730
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002C00C_0000087C
lbl_fn_8002C00C_00000730:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002C00C_0000079C
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8002C00C_00000794
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x7
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_8002C00C_000007D8
lbl_fn_8002C00C_00000794:
    li r0, -0x1
    b lbl_fn_8002C00C_000007D8
lbl_fn_8002C00C_0000079C:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_8002C00C_000007D8:
    cmpwi r0, 0x6
    bne lbl_fn_8002C00C_00000840
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_8002C00C_00000800
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002C00C_0000087C
lbl_fn_8002C00C_00000800:
    cmpwi r3, 0x4
    bne lbl_fn_8002C00C_0000081C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002C00C_0000087C
lbl_fn_8002C00C_0000081C:
    cmpwi r3, 0x6
    bne lbl_fn_8002C00C_00000838
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002C00C_0000087C
lbl_fn_8002C00C_00000838:
    li r3, -0x1
    b lbl_fn_8002C00C_0000087C
lbl_fn_8002C00C_00000840:
    cmpwi r0, 0x9
    bne lbl_fn_8002C00C_0000085C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002C00C_0000087C
lbl_fn_8002C00C_0000085C:
    cmpwi r0, 0x1
    bne lbl_fn_8002C00C_00000878
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002C00C_0000087C
lbl_fn_8002C00C_00000878:
    li r3, -0x1
lbl_fn_8002C00C_0000087C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8002C260(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002C260_000008B8
    li r0, -0x1
    b lbl_fn_8002C260_000008C4
lbl_fn_8002C260_000008B8:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002C260_000008C4:
    cmpwi r0, 0x1
    bne lbl_fn_8002C260_0000090C
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
    b lbl_fn_8002C260_00000910
lbl_fn_8002C260_0000090C:
    li r3, -0x1
lbl_fn_8002C260_00000910:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002C2F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r6, 0x0
    li r0, 0x46
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r6, 0x18(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r0, 0x1c(r4)
    stw r6, 0xe0(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8002C2F0_0000096C
    li r31, 0x7
lbl_fn_8002C2F0_0000096C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002C354(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x74(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002C354_000009B8
    li r0, -0x1
    b lbl_fn_8002C354_000009C4
lbl_fn_8002C354_000009B8:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002C354_000009C4:
    cmpwi r0, 0x1
    bne lbl_fn_8002C354_000009D4
    li r3, -0x1
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_000009D4:
    lis r3, lbl_807C68C0@ha
    addi r29, r3, lbl_807C68C0@l
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8002C354_00000C90
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8002C354_00000B48
    lwz r3, 0x20(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002C354_00000B40
    lwz r3, 0x20(r29)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002C354_00000A5C
    lwz r0, 0x64(r29)
    li r8, 0x0
    stw r8, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    addi r6, r1, 0x3c
    stw r8, 0x3c(r1)
    addi r7, r1, 0x38
    li r3, 0x2
    stw r8, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x4
    b lbl_fn_8002C354_00000AA8
lbl_fn_8002C354_00000A5C:
    cmpwi r3, 0x1
    bne lbl_fn_8002C354_00000AA4
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
    b lbl_fn_8002C354_00000AA8
lbl_fn_8002C354_00000AA4:
    li r0, -0x1
lbl_fn_8002C354_00000AA8:
    cmpwi r0, 0x4
    bne lbl_fn_8002C354_00000AC4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000AC4:
    cmpwi r0, 0x1
    bne lbl_fn_8002C354_00000AE0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000AE0:
    bl fn_8003D3F8
    cmpwi r3, 0x6
    bne lbl_fn_8002C354_00000B00
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000B00:
    cmpwi r3, 0x9
    bne lbl_fn_8002C354_00000B1C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000B1C:
    cmpwi r3, 0x4
    bne lbl_fn_8002C354_00000B38
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000B38:
    li r3, -0x1
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000B40:
    li r3, -0x1
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000B48:
    lwz r3, lbl_807C68C0@l(r3)
    li r4, 0x0
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_8002C354_00000B64
    li r3, -0x1
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000B64:
    lwz r3, 0xe0(r31)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002C354_00000BB4
    lwz r0, 0x64(r29)
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x4
    b lbl_fn_8002C354_00000C00
lbl_fn_8002C354_00000BB4:
    cmpwi r3, 0x1
    bne lbl_fn_8002C354_00000BFC
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
    b lbl_fn_8002C354_00000C00
lbl_fn_8002C354_00000BFC:
    li r0, -0x1
lbl_fn_8002C354_00000C00:
    cmpwi r0, 0x1
    bne lbl_fn_8002C354_00000C1C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000C1C:
    cmpwi r0, 0x4
    bne lbl_fn_8002C354_00000C38
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000C38:
    lis r3, lbl_807C6A40@ha
    addi r3, r3, lbl_807C6A40@l
    lwz r8, 0xe0(r3)
    cmpwi r8, 0x0
    beq lbl_fn_8002C354_00000C7C
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
lbl_fn_8002C354_00000C7C:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002C354_00000C94
lbl_fn_8002C354_00000C90:
    li r3, -0x1
lbl_fn_8002C354_00000C94:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8002C680(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8002C680_00000D90
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8002C680_00000D68
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r29, r0, r4
    add r0, r4, r0
    subf. r30, r29, r0
    ble lbl_fn_8002C680_00000D28
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r29, r29, r0
lbl_fn_8002C680_00000D28:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r29, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8002C680_00000D6C
lbl_fn_8002C680_00000D68:
    li r0, -0x1
lbl_fn_8002C680_00000D6C:
    cmpwi r0, 0x7
    bne lbl_fn_8002C680_00000D88
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002C680_00000DEC
lbl_fn_8002C680_00000D88:
    li r3, -0x1
    b lbl_fn_8002C680_00000DEC
lbl_fn_8002C680_00000D90:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002C680_00000DE8
    li r31, 0x0
    stw r31, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r31, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r31, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
    stw r31, 0x18(r30)
    stw r31, 0xe0(r30)
    b lbl_fn_8002C680_00000DEC
lbl_fn_8002C680_00000DE8:
    li r3, -0x1
lbl_fn_8002C680_00000DEC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002C7D8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    lis r31, lbl_807C6A40@ha
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    addi r29, r31, lbl_807C6A40@l
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8002C7D8_00001060
    lis r29, lbl_807C68C0@ha
    addi r29, r29, lbl_807C68C0@l
    lwz r3, 0x20(r29)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002C7D8_00000E8C
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
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x4
    b lbl_fn_8002C7D8_00000ED8
lbl_fn_8002C7D8_00000E8C:
    cmpwi r3, 0x1
    bne lbl_fn_8002C7D8_00000ED4
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
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
    b lbl_fn_8002C7D8_00000ED8
lbl_fn_8002C7D8_00000ED4:
    li r0, -0x1
lbl_fn_8002C7D8_00000ED8:
    cmpwi r0, 0x4
    bne lbl_fn_8002C7D8_00000EF4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00000EF4:
    cmpwi r0, 0x1
    bne lbl_fn_8002C7D8_00000F10
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00000F10:
    lis r29, lbl_807C68C0@ha
    addi r29, r29, lbl_807C68C0@l
    lwz r3, 0x20(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002C7D8_00000F7C
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8002C7D8_00000F74
    li r0, 0x0
    stw r0, 0x58(r1)
    addi r4, r1, 0x64
    addi r5, r1, 0x60
    stw r0, 0x5c(r1)
    addi r6, r1, 0x5c
    addi r7, r1, 0x58
    li r3, 0x7
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_8002C7D8_00000FB8
lbl_fn_8002C7D8_00000F74:
    li r0, -0x1
    b lbl_fn_8002C7D8_00000FB8
lbl_fn_8002C7D8_00000F7C:
    li r0, 0x0
    stw r0, 0x68(r1)
    addi r4, r1, 0x74
    addi r5, r1, 0x70
    stw r0, 0x6c(r1)
    addi r6, r1, 0x6c
    addi r7, r1, 0x68
    li r3, 0x0
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_8002C7D8_00000FB8:
    cmpwi r0, 0x9
    bne lbl_fn_8002C7D8_00000FD4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00000FD4:
    cmpwi r0, 0x1
    bne lbl_fn_8002C7D8_00000FF0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00000FF0:
    cmpwi r0, 0x6
    bne lbl_fn_8002C7D8_00001058
    bl fn_8003D3F8
    cmpwi r3, 0x6
    bne lbl_fn_8002C7D8_00001018
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00001018:
    cmpwi r3, 0x4
    bne lbl_fn_8002C7D8_00001034
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00001034:
    cmpwi r3, 0x9
    bne lbl_fn_8002C7D8_00001050
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00001050:
    li r3, -0x1
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00001058:
    li r3, -0x1
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00001060:
    lwz r3, 0xe0(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002C7D8_00001234
    lwz r3, 0xe0(r29)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002C7D8_000010C8
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
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x4
    b lbl_fn_8002C7D8_00001114
lbl_fn_8002C7D8_000010C8:
    cmpwi r3, 0x1
    bne lbl_fn_8002C7D8_00001110
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
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
    b lbl_fn_8002C7D8_00001114
lbl_fn_8002C7D8_00001110:
    li r0, -0x1
lbl_fn_8002C7D8_00001114:
    cmpwi r0, 0x1
    bne lbl_fn_8002C7D8_00001130
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00001130:
    cmpwi r0, 0x4
    bne lbl_fn_8002C7D8_0000114C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_0000114C:
    lis r30, lbl_807C6A40@ha
    lis r29, lbl_807C68C0@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r3, lbl_807C68C0@l(r29)
    lwz r5, 0xe0(r31)
    li r4, 0x0
    bl fn_8001BB04
    cmpwi r3, 0x0
    beq lbl_fn_8002C7D8_000011CC
    lwz r3, lbl_807C68C0@l(r29)
    li r4, 0x0
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_8002C7D8_000011C4
    lwz r0, 0xe0(r31)
    li r3, 0x0
    li r31, 0x1
    stw r3, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r3, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x7
    stw r0, 0x2c(r1)
    stw r31, 0x28(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r3, 0x9
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_000011C4:
    li r3, -0x1
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_000011CC:
    addi r3, r29, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002C7D8_0000122C
    lwz r8, 0xe0(r31)
    cmpwi r8, 0x0
    beq lbl_fn_8002C7D8_00001218
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
lbl_fn_8002C7D8_00001218:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_0000122C:
    li r3, -0x1
    b lbl_fn_8002C7D8_0000126C
lbl_fn_8002C7D8_00001234:
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
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
lbl_fn_8002C7D8_0000126C:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8002CC58(void)
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
    beq lbl_fn_8002CC58_00001328
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002CC58_000012E8
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002CC58_000012E8:
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
    b lbl_fn_8002CC58_0000132C
lbl_fn_8002CC58_00001328:
    li r0, -0x1
lbl_fn_8002CC58_0000132C:
    cmpwi r0, 0x7
    bne lbl_fn_8002CC58_00001348
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002CC58_0000134C
lbl_fn_8002CC58_00001348:
    li r3, -0x1
lbl_fn_8002CC58_0000134C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002CD34(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8002CD34_000015CC
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002CD34_000013E4
    lwz r0, 0x64(r31)
    li r8, 0x0
    stw r8, 0x58(r1)
    addi r4, r1, 0x64
    addi r5, r1, 0x60
    addi r6, r1, 0x5c
    stw r8, 0x5c(r1)
    addi r7, r1, 0x58
    li r3, 0x2
    stw r8, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x4
    b lbl_fn_8002CD34_00001430
lbl_fn_8002CD34_000013E4:
    cmpwi r3, 0x1
    bne lbl_fn_8002CD34_0000142C
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x68(r1)
    addi r4, r1, 0x74
    addi r5, r1, 0x70
    addi r6, r1, 0x6c
    stw r8, 0x6c(r1)
    addi r7, r1, 0x68
    li r3, 0x0
    stw r8, 0x70(r1)
    stw r0, 0x74(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
    b lbl_fn_8002CD34_00001430
lbl_fn_8002CD34_0000142C:
    li r0, -0x1
lbl_fn_8002CD34_00001430:
    cmpwi r0, 0x4
    bne lbl_fn_8002CD34_0000144C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_0000144C:
    cmpwi r0, 0x1
    bne lbl_fn_8002CD34_00001468
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_00001468:
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002CD34_0000153C
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x78(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x7c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x78(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8002CD34_000014FC
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_8002CD34_000014E8
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    addi r6, r1, 0x3c
    stw r3, 0x3c(r1)
    addi r7, r1, 0x38
    li r3, 0x3
    stw r0, 0x40(r1)
    stw r8, 0x44(r1)
    bl fn_8001AEDC
lbl_fn_8002CD34_000014E8:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002CD34_00001540
lbl_fn_8002CD34_000014FC:
    li r0, 0x0
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    stw r0, 0x4c(r1)
    addi r6, r1, 0x4c
    addi r7, r1, 0x48
    li r3, 0x7
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_8002CD34_00001540
lbl_fn_8002CD34_0000153C:
    li r0, -0x1
lbl_fn_8002CD34_00001540:
    cmpwi r0, 0x9
    bne lbl_fn_8002CD34_0000155C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_0000155C:
    cmpwi r0, 0x6
    bne lbl_fn_8002CD34_000015C4
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_8002CD34_00001584
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_00001584:
    cmpwi r3, 0x9
    bne lbl_fn_8002CD34_000015A0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_000015A0:
    cmpwi r3, 0x6
    bne lbl_fn_8002CD34_000015BC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_000015BC:
    li r3, -0x1
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_000015C4:
    li r3, -0x1
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_000015CC:
    lwz r3, 0xe0(r3)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002CD34_00001624
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x18(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x24
    stw r8, 0x1c(r1)
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    stw r8, 0x20(r1)
    li r3, 0x2
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x4
    b lbl_fn_8002CD34_00001670
lbl_fn_8002CD34_00001624:
    cmpwi r3, 0x1
    bne lbl_fn_8002CD34_0000166C
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
    b lbl_fn_8002CD34_00001670
lbl_fn_8002CD34_0000166C:
    li r0, -0x1
lbl_fn_8002CD34_00001670:
    cmpwi r0, 0x1
    bne lbl_fn_8002CD34_0000168C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_0000168C:
    cmpwi r0, 0x4
    bne lbl_fn_8002CD34_000016A8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_000016A8:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002CD34_000016FC
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
    b lbl_fn_8002CD34_00001700
lbl_fn_8002CD34_000016FC:
    li r0, -0x1
lbl_fn_8002CD34_00001700:
    cmpwi r0, 0x1
    bne lbl_fn_8002CD34_0000171C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002CD34_00001720
lbl_fn_8002CD34_0000171C:
    li r3, -0x1
lbl_fn_8002CD34_00001720:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8002D108(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002D108_00001768
    li r0, -0x1
    b lbl_fn_8002D108_00001774
lbl_fn_8002D108_00001768:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002D108_00001774:
    cmpwi r0, 0x1
    bne lbl_fn_8002D108_000017BC
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0x0
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002D108_000018AC
lbl_fn_8002D108_000017BC:
    lis r3, lbl_807C6A40@ha
    addi r3, r3, lbl_807C6A40@l
    lwz r3, 0xe0(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002D108_000017DC
    li r3, -0x1
    b lbl_fn_8002D108_000018AC
lbl_fn_8002D108_000017DC:
    lis r31, lbl_807C6B30@ha
    addi r31, r31, lbl_807C6B30@l
    addi r3, r31, 0x8
    bl fn_8001A510
    addi r30, r31, 0x8
    mr r3, r30
    bl fn_8001A65C
    mr r5, r30
    li r3, 0x0
    li r4, 0x0
    bl fn_8001A8A4
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8002D108_00001820
    stw r0, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8002D108_0000182C
lbl_fn_8002D108_00001820:
    li r0, 0x0
    stw r0, 0x4(r31)
    li r0, 0x0
lbl_fn_8002D108_0000182C:
    cmpwi r0, 0x0
    beq lbl_fn_8002D108_000018A8
    lis r31, lbl_807C6B30@ha
    addi r31, r31, lbl_807C6B30@l
    lwz r3, 0x4(r31)
    bl fn_8001BEE0
    lis r9, lbl_807C6A40@ha
    addi r6, r9, lbl_807C6A40@l
    lwz r0, 0x1c(r6)
    cmpw r3, r0
    bge lbl_fn_8002D108_000018A0
    lwz r3, 0x4(r31)
    li r0, 0x0
    li r8, 0x1
    stw r3, 0xe0(r6)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r8, 0x18(r6)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, lbl_807C6A40@l(r9)
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_8002D108_000018AC
lbl_fn_8002D108_000018A0:
    li r3, -0x1
    b lbl_fn_8002D108_000018AC
lbl_fn_8002D108_000018A8:
    li r3, -0x1
lbl_fn_8002D108_000018AC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002D294(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002D294_000018EC
    li r0, -0x1
    b lbl_fn_8002D294_000018F8
lbl_fn_8002D294_000018EC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002D294_000018F8:
    cmpwi r0, 0x1
    bne lbl_fn_8002D294_00001908
    li r3, -0x1
    b lbl_fn_8002D294_0000198C
lbl_fn_8002D294_00001908:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r4, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r4)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002D294_00001988
    lwz r3, lbl_807C68C0@l(r3)
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8002D294_00001940
    cmpwi r4, 0x0
    bne lbl_fn_8002D294_00001948
lbl_fn_8002D294_00001940:
    li r0, 0x0
    b lbl_fn_8002D294_00001958
lbl_fn_8002D294_00001948:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
lbl_fn_8002D294_00001958:
    cmpwi r0, 0xc8
    bge lbl_fn_8002D294_00001974
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    b lbl_fn_8002D294_0000198C
lbl_fn_8002D294_00001974:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002D294_0000198C
lbl_fn_8002D294_00001988:
    li r3, -0x1
lbl_fn_8002D294_0000198C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002D36C(void)
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
    stw r0, lbl_807C6A40@l(r8)
    blr
}

asm void fn_8002D3B0(void)
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
    beq lbl_fn_8002D3B0_00001A0C
    cmpwi r4, 0x0
    bne lbl_fn_8002D3B0_00001A14
lbl_fn_8002D3B0_00001A0C:
    li r6, 0x0
    b lbl_fn_8002D3B0_00001A24
lbl_fn_8002D3B0_00001A14:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r6, 0x1c(r1)
lbl_fn_8002D3B0_00001A24:
    lis r5, lbl_807C6A40@ha
    li r3, 0x1
    addi r4, r5, lbl_807C6A40@l
    stw r3, lbl_807C6A40@l(r5)
    lwz r0, 0x10(r4)
    stw r6, 0x38(r4)
    cmpwi r0, 0x1
    blt lbl_fn_8002D3B0_00001A4C
    li r0, -0x1
    b lbl_fn_8002D3B0_00001A54
lbl_fn_8002D3B0_00001A4C:
    stw r3, lbl_807C6A40@l(r5)
    li r0, 0x1
lbl_fn_8002D3B0_00001A54:
    cmpwi r0, 0x1
    bne lbl_fn_8002D3B0_00001A90
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
    b lbl_fn_8002D3B0_00001A94
lbl_fn_8002D3B0_00001A90:
    li r3, -0x1
lbl_fn_8002D3B0_00001A94:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002D474(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002D474_00001AF0
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8002D474_00001AF0
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_8002D474_00001AF4
lbl_fn_8002D474_00001AF0:
    li r0, 0x0
lbl_fn_8002D474_00001AF4:
    cmpwi r0, 0x0
    beq lbl_fn_8002D474_00001B48
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
    b lbl_fn_8002D474_00001B70
lbl_fn_8002D474_00001B48:
    lis r4, lbl_807307A0@ha
    lis r3, lbl_807C68C0@ha
    addi r4, r4, lbl_807307A0@l
    lwz r3, lbl_807C68C0@l(r3)
    addi r4, r4, 0x3e0
    bl fn_8001C068
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_8002D474_00001B70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002D554(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    addi r3, r1, 0x18
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r5, r31, lbl_807C68C0@l
    stw r30, 0x28(r1)
    psq_l f1, 0x10(r5), 0, 0
    lfs f2, 0x18(r5)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x20(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, lbl_807C68C0@l(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_8002D554_00001C1C
    lwz r3, lbl_807C68C0@l(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_8002D554_00001C1C
    mr r8, r30
lbl_fn_8002D554_00001C1C:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x1
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    addi r4, r3, lbl_807C6A40@l
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    stw r0, 0x28(r4)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002D648(void)
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
    beq lbl_fn_8002D648_00001D18
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002D648_00001CD8
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002D648_00001CD8:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002D648_00001D1C
lbl_fn_8002D648_00001D18:
    li r3, -0x1
lbl_fn_8002D648_00001D1C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002D704(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r0, 0x5a
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r0, 0x18(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8002D704_00001D74
    li r31, 0x7
lbl_fn_8002D704_00001D74:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002D75C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002D75C_00001DC0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002D75C_00001DC4
lbl_fn_8002D75C_00001DC0:
    li r0, -0x1
lbl_fn_8002D75C_00001DC4:
    cmpwi r0, 0x6
    bne lbl_fn_8002D75C_00001E10
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8002D75C_00001DEC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002D75C_00001E14
lbl_fn_8002D75C_00001DEC:
    cmpwi r3, 0x6
    bne lbl_fn_8002D75C_00001E08
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002D75C_00001E14
lbl_fn_8002D75C_00001E08:
    li r3, -0x1
    b lbl_fn_8002D75C_00001E14
lbl_fn_8002D75C_00001E10:
    li r3, -0x1
lbl_fn_8002D75C_00001E14:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002D7F4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x44(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    xoris r0, r4, 0x8000
    lfs f2, 0x1c(r5)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8002D7F4_00001EB4
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
    li r0, 0x5
    b lbl_fn_8002D7F4_00001F3C
lbl_fn_8002D7F4_00001EB4:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002D7F4_00001F38
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002D7F4_00001EF8
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002D7F4_00001EF8:
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
    b lbl_fn_8002D7F4_00001F3C
lbl_fn_8002D7F4_00001F38:
    li r0, -0x1
lbl_fn_8002D7F4_00001F3C:
    cmpwi r0, 0x5
    bne lbl_fn_8002D7F4_00001F58
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002D7F4_00001F78
lbl_fn_8002D7F4_00001F58:
    cmpwi r0, 0x7
    bne lbl_fn_8002D7F4_00001F74
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002D7F4_00001F78
lbl_fn_8002D7F4_00001F74:
    li r3, -0x1
lbl_fn_8002D7F4_00001F78:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002D960(void)
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
    ble lbl_fn_8002D960_00001FF0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002D960_00002040
lbl_fn_8002D960_00001FF0:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002D960_0000203C
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
    b lbl_fn_8002D960_00002040
lbl_fn_8002D960_0000203C:
    li r0, -0x1
lbl_fn_8002D960_00002040:
    cmpwi r0, 0x6
    bne lbl_fn_8002D960_0000208C
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8002D960_00002068
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002D960_000020AC
lbl_fn_8002D960_00002068:
    cmpwi r3, 0x6
    bne lbl_fn_8002D960_00002084
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002D960_000020AC
lbl_fn_8002D960_00002084:
    li r3, -0x1
    b lbl_fn_8002D960_000020AC
lbl_fn_8002D960_0000208C:
    cmpwi r0, 0x8
    bne lbl_fn_8002D960_000020A8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8002D960_000020AC
lbl_fn_8002D960_000020A8:
    li r3, -0x1
lbl_fn_8002D960_000020AC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002DA90(void)
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
    beq lbl_fn_8002DA90_0000216C
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002DA90_00002120
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002DA90_00002120:
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
    b lbl_fn_8002DA90_00002170
lbl_fn_8002DA90_0000216C:
    li r0, -0x1
lbl_fn_8002DA90_00002170:
    cmpwi r0, 0x5
    bne lbl_fn_8002DA90_0000218C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002DA90_00002190
lbl_fn_8002DA90_0000218C:
    li r3, -0x1
lbl_fn_8002DA90_00002190:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002DB78(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002DB78_0000222C
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8002DB78_00002224
    lwz r0, 0x20(r30)
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8002DB78_00002268
lbl_fn_8002DB78_00002224:
    li r0, -0x1
    b lbl_fn_8002DB78_00002268
lbl_fn_8002DB78_0000222C:
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_8002DB78_00002268:
    cmpwi r0, 0x1
    bne lbl_fn_8002DB78_00002284
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002DB78_000023F4
lbl_fn_8002DB78_00002284:
    cmpwi r0, 0x5
    bne lbl_fn_8002DB78_000022A0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002DB78_000023F4
lbl_fn_8002DB78_000022A0:
    lis r5, lbl_807C68C0@ha
    lis r31, lbl_807C6A40@ha
    addi r30, r5, lbl_807C68C0@l
    addi r3, r31, lbl_807C6A40@l
    lwz r4, 0xc(r30)
    lwz r0, 0x18(r3)
    cmpw r4, r0
    bge lbl_fn_8002DB78_00002338
    lwz r4, 0x30(r30)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8002DB78_00002330
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x4
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_8002DB78_000023F4
lbl_fn_8002DB78_00002330:
    li r3, -0x1
    b lbl_fn_8002DB78_000023F4
lbl_fn_8002DB78_00002338:
    lwz r4, 0x34(r30)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8002DB78_000023F0
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002DB78_00002398
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8002DB78_00002398
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_8002DB78_0000239C
lbl_fn_8002DB78_00002398:
    li r0, 0x0
lbl_fn_8002DB78_0000239C:
    cmpwi r0, 0x0
    beq lbl_fn_8002DB78_000023F0
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
    b lbl_fn_8002DB78_000023F4
lbl_fn_8002DB78_000023F0:
    li r3, -0x1
lbl_fn_8002DB78_000023F4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8002DDDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002DDDC_00002434
    li r0, -0x1
    b lbl_fn_8002DDDC_00002440
lbl_fn_8002DDDC_00002434:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002DDDC_00002440:
    cmpwi r0, 0x1
    bne lbl_fn_8002DDDC_00002488
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
    b lbl_fn_8002DDDC_0000248C
lbl_fn_8002DDDC_00002488:
    li r3, -0x1
lbl_fn_8002DDDC_0000248C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002DE6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002DE6C_000024C4
    li r0, -0x1
    b lbl_fn_8002DE6C_000024D0
lbl_fn_8002DE6C_000024C4:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002DE6C_000024D0:
    cmpwi r0, 0x1
    bne lbl_fn_8002DE6C_000024E0
    li r3, -0x1
    b lbl_fn_8002DE6C_00002540
lbl_fn_8002DE6C_000024E0:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002DE6C_0000253C
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8002DE6C_00002518
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002DE6C_00002540
lbl_fn_8002DE6C_00002518:
    cmpwi r3, 0x4
    bne lbl_fn_8002DE6C_00002534
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002DE6C_00002540
lbl_fn_8002DE6C_00002534:
    li r3, -0x1
    b lbl_fn_8002DE6C_00002540
lbl_fn_8002DE6C_0000253C:
    li r3, -0x1
lbl_fn_8002DE6C_00002540:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002DF20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r0, 0x5a
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r0, 0x18(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8002DF20_00002590
    li r31, 0x7
lbl_fn_8002DF20_00002590:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002DF78(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x34(r1)
    addi r3, r3, lbl_807C68C0@l
    stw r31, 0x2c(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002DF78_000025E0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002DF78_000025E4
lbl_fn_8002DF78_000025E0:
    li r0, -0x1
lbl_fn_8002DF78_000025E4:
    cmpwi r0, 0x6
    bne lbl_fn_8002DF78_00002714
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002DF78_00002648
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
    b lbl_fn_8002DF78_00002698
lbl_fn_8002DF78_00002648:
    cmpwi r3, 0x1
    bne lbl_fn_8002DF78_00002694
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
    b lbl_fn_8002DF78_00002698
lbl_fn_8002DF78_00002694:
    li r0, -0x1
lbl_fn_8002DF78_00002698:
    cmpwi r0, 0x4
    bne lbl_fn_8002DF78_000026B4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002DF78_00002718
lbl_fn_8002DF78_000026B4:
    cmpwi r0, 0x1
    bne lbl_fn_8002DF78_000026D0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002DF78_00002718
lbl_fn_8002DF78_000026D0:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8002DF78_000026F0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002DF78_00002718
lbl_fn_8002DF78_000026F0:
    cmpwi r3, 0x4
    bne lbl_fn_8002DF78_0000270C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002DF78_00002718
lbl_fn_8002DF78_0000270C:
    li r3, -0x1
    b lbl_fn_8002DF78_00002718
lbl_fn_8002DF78_00002714:
    li r3, -0x1
lbl_fn_8002DF78_00002718:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002E0FC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x44(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    xoris r0, r4, 0x8000
    lfs f2, 0x1c(r5)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8002E0FC_000027BC
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
    li r0, 0x5
    b lbl_fn_8002E0FC_00002844
lbl_fn_8002E0FC_000027BC:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002E0FC_00002840
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002E0FC_00002800
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002E0FC_00002800:
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
    b lbl_fn_8002E0FC_00002844
lbl_fn_8002E0FC_00002840:
    li r0, -0x1
lbl_fn_8002E0FC_00002844:
    cmpwi r0, 0x5
    bne lbl_fn_8002E0FC_00002860
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002E0FC_00002880
lbl_fn_8002E0FC_00002860:
    cmpwi r0, 0x7
    bne lbl_fn_8002E0FC_0000287C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002E0FC_00002880
lbl_fn_8002E0FC_0000287C:
    li r3, -0x1
lbl_fn_8002E0FC_00002880:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002E268(void)
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
    bne lbl_fn_8002E268_00002904
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
    b lbl_fn_8002E268_00002954
lbl_fn_8002E268_00002904:
    cmpwi r3, 0x1
    bne lbl_fn_8002E268_00002950
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
    b lbl_fn_8002E268_00002954
lbl_fn_8002E268_00002950:
    li r0, -0x1
lbl_fn_8002E268_00002954:
    cmpwi r0, 0x1
    bne lbl_fn_8002E268_00002970
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002E268_00002A98
lbl_fn_8002E268_00002970:
    cmpwi r0, 0x4
    bne lbl_fn_8002E268_0000298C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002E268_00002A98
lbl_fn_8002E268_0000298C:
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
    ble lbl_fn_8002E268_000029DC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_8002E268_00002A2C
lbl_fn_8002E268_000029DC:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002E268_00002A28
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
    b lbl_fn_8002E268_00002A2C
lbl_fn_8002E268_00002A28:
    li r0, -0x1
lbl_fn_8002E268_00002A2C:
    cmpwi r0, 0x6
    bne lbl_fn_8002E268_00002A78
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_8002E268_00002A54
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002E268_00002A98
lbl_fn_8002E268_00002A54:
    cmpwi r3, 0x6
    bne lbl_fn_8002E268_00002A70
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002E268_00002A98
lbl_fn_8002E268_00002A70:
    li r3, -0x1
    b lbl_fn_8002E268_00002A98
lbl_fn_8002E268_00002A78:
    cmpwi r0, 0x8
    bne lbl_fn_8002E268_00002A94
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8002E268_00002A98
lbl_fn_8002E268_00002A94:
    li r3, -0x1
lbl_fn_8002E268_00002A98:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8002E47C(void)
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
    beq lbl_fn_8002E47C_00002B58
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002E47C_00002B0C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002E47C_00002B0C:
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
    b lbl_fn_8002E47C_00002B5C
lbl_fn_8002E47C_00002B58:
    li r0, -0x1
lbl_fn_8002E47C_00002B5C:
    cmpwi r0, 0x5
    bne lbl_fn_8002E47C_00002B78
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002E47C_00002B7C
lbl_fn_8002E47C_00002B78:
    li r3, -0x1
lbl_fn_8002E47C_00002B7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002E564(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002E564_00002C04
    lwz r0, 0x64(r30)
    li r8, 0x0
    stw r8, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r8, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x2
    stw r8, 0x50(r1)
    stw r0, 0x54(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x4
    b lbl_fn_8002E564_00002C54
lbl_fn_8002E564_00002C04:
    cmpwi r3, 0x1
    bne lbl_fn_8002E564_00002C50
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x58(r1)
    addi r4, r1, 0x64
    addi r5, r1, 0x60
    addi r6, r1, 0x5c
    stw r8, 0x5c(r1)
    addi r7, r1, 0x58
    li r3, 0x0
    stw r8, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
    b lbl_fn_8002E564_00002C54
lbl_fn_8002E564_00002C50:
    li r0, -0x1
lbl_fn_8002E564_00002C54:
    cmpwi r0, 0x4
    bne lbl_fn_8002E564_00002C70
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002E564_00002EC4
lbl_fn_8002E564_00002C70:
    cmpwi r0, 0x1
    bne lbl_fn_8002E564_00002C8C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002E564_00002EC4
lbl_fn_8002E564_00002C8C:
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002E564_00002CFC
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8002E564_00002CF4
    lwz r0, 0x20(r30)
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8002E564_00002D38
lbl_fn_8002E564_00002CF4:
    li r0, -0x1
    b lbl_fn_8002E564_00002D38
lbl_fn_8002E564_00002CFC:
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_8002E564_00002D38:
    cmpwi r0, 0x5
    bne lbl_fn_8002E564_00002D54
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002E564_00002EC4
lbl_fn_8002E564_00002D54:
    cmpwi r0, 0x1
    bne lbl_fn_8002E564_00002D70
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002E564_00002EC4
lbl_fn_8002E564_00002D70:
    lis r5, lbl_807C68C0@ha
    lis r31, lbl_807C6A40@ha
    addi r30, r5, lbl_807C68C0@l
    addi r3, r31, lbl_807C6A40@l
    lwz r4, 0xc(r30)
    lwz r0, 0x18(r3)
    cmpw r4, r0
    bge lbl_fn_8002E564_00002E08
    lwz r4, 0x30(r30)
    lis r0, 0x4330
    stw r0, 0x68(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x6c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8002E564_00002E00
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x4
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_8002E564_00002EC4
lbl_fn_8002E564_00002E00:
    li r3, -0x1
    b lbl_fn_8002E564_00002EC4
lbl_fn_8002E564_00002E08:
    lwz r4, 0x34(r30)
    lis r0, 0x4330
    stw r0, 0x68(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x6c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8002E564_00002EC0
    lfs f0, lbl_80880798
    fcmpo cr0, f2, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002E564_00002E68
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_8002E564_00002E68
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_8002E564_00002E6C
lbl_fn_8002E564_00002E68:
    li r0, 0x0
lbl_fn_8002E564_00002E6C:
    cmpwi r0, 0x0
    beq lbl_fn_8002E564_00002EC0
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
    b lbl_fn_8002E564_00002EC4
lbl_fn_8002E564_00002EC0:
    li r3, -0x1
lbl_fn_8002E564_00002EC4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8002E8AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002E8AC_00002F04
    li r0, -0x1
    b lbl_fn_8002E8AC_00002F10
lbl_fn_8002E8AC_00002F04:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002E8AC_00002F10:
    cmpwi r0, 0x1
    bne lbl_fn_8002E8AC_00002F58
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
    b lbl_fn_8002E8AC_00002F5C
lbl_fn_8002E8AC_00002F58:
    li r3, -0x1
lbl_fn_8002E8AC_00002F5C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002E93C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x44(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x3c(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002E93C_00002F98
    li r0, -0x1
    b lbl_fn_8002E93C_00002FA4
lbl_fn_8002E93C_00002F98:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002E93C_00002FA4:
    cmpwi r0, 0x1
    bne lbl_fn_8002E93C_00002FB4
    li r3, -0x1
    b lbl_fn_8002E93C_0000313C
lbl_fn_8002E93C_00002FB4:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8002E93C_00003138
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002E93C_00003130
    lwz r4, 0x38(r31)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x2c(r1)
    lfs f2, 0x1c(r31)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8002E93C_00003128
    lwz r3, 0x20(r31)
    bl fn_8003D084
    cmpwi r3, 0x4
    bne lbl_fn_8002E93C_0000305C
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
    b lbl_fn_8002E93C_000030AC
lbl_fn_8002E93C_0000305C:
    cmpwi r3, 0x1
    bne lbl_fn_8002E93C_000030A8
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
    b lbl_fn_8002E93C_000030AC
lbl_fn_8002E93C_000030A8:
    li r0, -0x1
lbl_fn_8002E93C_000030AC:
    cmpwi r0, 0x1
    bne lbl_fn_8002E93C_000030C8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002E93C_0000313C
lbl_fn_8002E93C_000030C8:
    cmpwi r0, 0x4
    bne lbl_fn_8002E93C_000030E4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002E93C_0000313C
lbl_fn_8002E93C_000030E4:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8002E93C_00003104
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002E93C_0000313C
lbl_fn_8002E93C_00003104:
    cmpwi r3, 0x4
    bne lbl_fn_8002E93C_00003120
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_8002E93C_0000313C
lbl_fn_8002E93C_00003120:
    li r3, -0x1
    b lbl_fn_8002E93C_0000313C
lbl_fn_8002E93C_00003128:
    li r3, -0x1
    b lbl_fn_8002E93C_0000313C
lbl_fn_8002E93C_00003130:
    li r3, -0x1
    b lbl_fn_8002E93C_0000313C
lbl_fn_8002E93C_00003138:
    li r3, -0x1
lbl_fn_8002E93C_0000313C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002EB20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    lis r11, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r9, 0x1
    lwz r10, 0x7c(r3)
    addi r3, r11, lbl_807C6A40@l
    li r4, 0x3c
    li r0, 0x1e
    stw r4, 0x18(r3)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r10, 0x1c(r3)
    addi r7, r1, 0x8
    li r3, 0x8
    stw r9, lbl_807C6A40@l(r11)
    stw r8, 0x8(r1)
    stw r8, 0xc(r1)
    stw r0, 0x10(r1)
    stw r10, 0x14(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002EB98(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    lis r4, lbl_807C68C0@ha
    stw r0, 0x44(r1)
    addi r3, r3, lbl_807C6A40@l
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r3, 0x1c(r3)
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    ble lbl_fn_8002EB98_00003204
    cmpwi r4, 0x0
    bne lbl_fn_8002EB98_0000320C
lbl_fn_8002EB98_00003204:
    li r4, 0x0
    b lbl_fn_8002EB98_0000321C
lbl_fn_8002EB98_0000320C:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
lbl_fn_8002EB98_0000321C:
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpw r4, r0
    ble lbl_fn_8002EB98_00003274
    lwz r0, 0x1c(r3)
    li r3, 0x0
    li r8, 0xa
    stw r3, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r3, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x8
    stw r8, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_8002EB98_000032E4
lbl_fn_8002EB98_00003274:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002EB98_000032E0
    lwz r3, lbl_807C68C0@l(r4)
    li r4, 0x2
    bl fn_8001BAA4
    cmpwi r3, 0x0
    beq lbl_fn_8002EB98_000032A4
    li r3, -0x1
    b lbl_fn_8002EB98_000032E4
lbl_fn_8002EB98_000032A4:
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
    stw r31, lbl_807C6A40@l(r30)
    li r3, 0x8
    b lbl_fn_8002EB98_000032E4
lbl_fn_8002EB98_000032E0:
    li r3, -0x1
lbl_fn_8002EB98_000032E4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002ECCC(void)
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
    beq lbl_fn_8002ECCC_000033A8
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002ECCC_0000335C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002ECCC_0000335C:
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
    b lbl_fn_8002ECCC_000033AC
lbl_fn_8002ECCC_000033A8:
    li r0, -0x1
lbl_fn_8002ECCC_000033AC:
    cmpwi r0, 0x5
    bne lbl_fn_8002ECCC_000033C8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002ECCC_000033CC
lbl_fn_8002ECCC_000033C8:
    li r3, -0x1
lbl_fn_8002ECCC_000033CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002EDB4(void)
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
    blt lbl_fn_8002EDB4_00003410
    li r0, -0x1
    b lbl_fn_8002EDB4_0000341C
lbl_fn_8002EDB4_00003410:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002EDB4_0000341C:
    cmpwi r0, 0x1
    bne lbl_fn_8002EDB4_00003470
    lis r31, lbl_807C6A40@ha
    li r9, 0x0
    addi r3, r31, lbl_807C6A40@l
    li r8, 0xa
    lwz r0, 0x1c(r3)
    addi r4, r1, 0x14
    stw r9, 0x8(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r9, 0xc(r1)
    li r3, 0x8
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_8002EDB4_00003474
lbl_fn_8002EDB4_00003470:
    li r3, -0x1
lbl_fn_8002EDB4_00003474:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002EE58(void)
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
    blt lbl_fn_8002EE58_000034B4
    li r0, -0x1
    b lbl_fn_8002EE58_000034C0
lbl_fn_8002EE58_000034B4:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002EE58_000034C0:
    cmpwi r0, 0x1
    bne lbl_fn_8002EE58_000034D0
    li r3, -0x1
    b lbl_fn_8002EE58_00003590
lbl_fn_8002EE58_000034D0:
    lis r4, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r4, r4, lbl_807C68C0@l
    lfs f1, 0x1c(r4)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8002EE58_0000358C
    lis r3, lbl_807C6A40@ha
    lwz r4, 0x20(r4)
    addi r3, r3, lbl_807C6A40@l
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    ble lbl_fn_8002EE58_00003510
    cmpwi r4, 0x0
    bne lbl_fn_8002EE58_00003518
lbl_fn_8002EE58_00003510:
    li r4, 0x0
    b lbl_fn_8002EE58_00003528
lbl_fn_8002EE58_00003518:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8002EE58_00003528:
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpw r4, r0
    bge lbl_fn_8002EE58_00003584
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r8, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r8, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_8002EE58_00003590
lbl_fn_8002EE58_00003584:
    li r3, -0x1
    b lbl_fn_8002EE58_00003590
lbl_fn_8002EE58_0000358C:
    li r3, -0x1
lbl_fn_8002EE58_00003590:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002EF74(void)
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
    stw r5, 0x8c(r9)
    stw r4, 0x3c(r9)
    stw r0, lbl_807C6A40@l(r10)
    blr
}

asm void fn_8002EFC4(void)
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
    beq lbl_fn_8002EFC4_0000394C
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8002EFC4_000037B8
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
    ble lbl_fn_8002EFC4_00003680
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_8002EFC4_000036CC
lbl_fn_8002EFC4_00003680:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8002EFC4_000036C8
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
    b lbl_fn_8002EFC4_000036CC
lbl_fn_8002EFC4_000036C8:
    li r0, -0x1
lbl_fn_8002EFC4_000036CC:
    cmpwi r0, 0x6
    bne lbl_fn_8002EFC4_00003794
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
    beq lbl_fn_8002EFC4_00003780
    cmpwi r9, 0x0
    beq lbl_fn_8002EFC4_00003750
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
    b lbl_fn_8002EFC4_00003780
lbl_fn_8002EFC4_00003750:
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
lbl_fn_8002EFC4_00003780:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002EFC4_00003968
lbl_fn_8002EFC4_00003794:
    cmpwi r0, 0x8
    bne lbl_fn_8002EFC4_000037B0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_8002EFC4_00003968
lbl_fn_8002EFC4_000037B0:
    li r3, -0x1
    b lbl_fn_8002EFC4_00003968
lbl_fn_8002EFC4_000037B8:
    lwz r3, 0x8c(r3)
    lwz r4, lbl_807C68C0@l(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8002EFC4_000037D0
    cmpwi r4, 0x0
    bne lbl_fn_8002EFC4_000037D8
lbl_fn_8002EFC4_000037D0:
    li r3, 0x0
    b lbl_fn_8002EFC4_000037E8
lbl_fn_8002EFC4_000037D8:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r3, 0x6c(r1)
lbl_fn_8002EFC4_000037E8:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_8002EFC4_00003814
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_8002EFC4_00003968
lbl_fn_8002EFC4_00003814:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8002EFC4_00003834
    cmpwi r4, 0x0
    bne lbl_fn_8002EFC4_0000383C
lbl_fn_8002EFC4_00003834:
    li r0, 0x0
    b lbl_fn_8002EFC4_0000384C
lbl_fn_8002EFC4_0000383C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x68(r1)
    lwz r0, 0x6c(r1)
lbl_fn_8002EFC4_0000384C:
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
    bge lbl_fn_8002EFC4_000038DC
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
    b lbl_fn_8002EFC4_00003968
lbl_fn_8002EFC4_000038DC:
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, 0x3c(r30)
    cmpwi r3, 0x0
    bgt lbl_fn_8002EFC4_00003934
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
    b lbl_fn_8002EFC4_00003968
lbl_fn_8002EFC4_00003934:
    subi r3, r3, 0x1
    li r0, 0x1
    stw r3, 0x3c(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_8002EFC4_00003968
lbl_fn_8002EFC4_0000394C:
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0x18(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
lbl_fn_8002EFC4_00003968:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8002F354(void)
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
    lwz r3, 0x8c(r3)
    lwz r4, lbl_807C68C0@l(r4)
    cmpwi r3, 0x0
    ble lbl_fn_8002F354_000039BC
    cmpwi r4, 0x0
    bne lbl_fn_8002F354_000039C4
lbl_fn_8002F354_000039BC:
    li r3, 0x0
    b lbl_fn_8002F354_000039D4
lbl_fn_8002F354_000039C4:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
lbl_fn_8002F354_000039D4:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x24(r4)
    cmpw r3, r0
    blt lbl_fn_8002F354_00003A00
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r4)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r5)
    b lbl_fn_8002F354_00003ABC
lbl_fn_8002F354_00003A00:
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8002F354_00003A98
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002F354_00003A4C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002F354_00003A4C:
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
    b lbl_fn_8002F354_00003A9C
lbl_fn_8002F354_00003A98:
    li r0, -0x1
lbl_fn_8002F354_00003A9C:
    cmpwi r0, 0x5
    bne lbl_fn_8002F354_00003AB8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002F354_00003ABC
lbl_fn_8002F354_00003AB8:
    li r3, -0x1
lbl_fn_8002F354_00003ABC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002F4A4(void)
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
    beq lbl_fn_8002F4A4_00003B58
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8002F4A4_00003B50
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
    b lbl_fn_8002F4A4_00003B94
lbl_fn_8002F4A4_00003B50:
    li r0, -0x1
    b lbl_fn_8002F4A4_00003B94
lbl_fn_8002F4A4_00003B58:
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
lbl_fn_8002F4A4_00003B94:
    cmpwi r0, 0x5
    bne lbl_fn_8002F4A4_00003BB0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002F4A4_00003C8C
lbl_fn_8002F4A4_00003BB0:
    cmpwi r0, 0x1
    bne lbl_fn_8002F4A4_00003BCC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002F4A4_00003C8C
lbl_fn_8002F4A4_00003BCC:
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
    bge lbl_fn_8002F4A4_00003C88
    lwz r3, 0x54(r5)
    lwz r4, 0x50(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002F4A4_00003C3C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002F4A4_00003C3C:
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
    b lbl_fn_8002F4A4_00003C8C
lbl_fn_8002F4A4_00003C88:
    li r3, -0x1
lbl_fn_8002F4A4_00003C8C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8002F674(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002F674_00003CCC
    li r0, -0x1
    b lbl_fn_8002F674_00003CD8
lbl_fn_8002F674_00003CCC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002F674_00003CD8:
    cmpwi r0, 0x1
    bne lbl_fn_8002F674_00003D20
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
    b lbl_fn_8002F674_00003D24
lbl_fn_8002F674_00003D20:
    li r3, -0x1
lbl_fn_8002F674_00003D24:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002F704(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r5, 0x4330
    lis r4, lbl_807C6A40@ha
    stw r0, 0xa4(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    lwz r0, 0x10(r3)
    stw r5, 0x78(r1)
    cmpwi r0, 0x1
    stw r5, 0x80(r1)
    blt lbl_fn_8002F704_00003D74
    li r0, -0x1
    b lbl_fn_8002F704_00003D80
lbl_fn_8002F704_00003D74:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002F704_00003D80:
    cmpwi r0, 0x1
    bne lbl_fn_8002F704_00003D90
    li r3, -0x1
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_00003D90:
    lis r5, lbl_807C6A40@ha
    addi r4, r5, lbl_807C6A40@l
    lwz r0, 0x64(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8002F704_00003DD4
    lis r3, lbl_807C68C0@ha
    li r0, 0x1
    addi r3, r3, lbl_807C68C0@l
    stw r0, lbl_807C6A40@l(r5)
    lwz r3, 0x58(r3)
    stw r3, 0x64(r4)
    subf. r0, r3, r3
    ble lbl_fn_8002F704_00003DFC
    li r0, 0x3
    stw r3, 0x64(r4)
    stw r0, 0x18(r4)
    b lbl_fn_8002F704_00003DFC
lbl_fn_8002F704_00003DD4:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r6, 0x58(r3)
    subf. r0, r6, r0
    ble lbl_fn_8002F704_00003DFC
    li r3, 0x1
    li r0, 0x3
    stw r6, 0x64(r4)
    stw r3, lbl_807C6A40@l(r5)
    stw r0, 0x18(r4)
lbl_fn_8002F704_00003DFC:
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8002F704_00003E24
    li r0, 0x1
    stw r0, 0x18(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_00003E24:
    cmpwi r0, 0x1
    bne lbl_fn_8002F704_00003E78
    lwz r8, 0x1c(r30)
    li r3, 0x0
    lwz r0, 0x8c(r30)
    addi r4, r1, 0x68
    stw r3, 0x74(r1)
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    addi r7, r1, 0x74
    stw r3, 0x70(r1)
    li r3, 0x8
    stw r8, 0x6c(r1)
    stw r0, 0x68(r1)
    bl fn_8001AEDC
    li r3, 0x1
    li r0, 0x2
    stw r3, lbl_807C6A40@l(r29)
    li r3, -0x1
    stw r0, 0x18(r30)
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_00003E78:
    cmpwi r0, 0x2
    bne lbl_fn_8002F704_00004010
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002F704_00004008
    lwz r3, 0x8c(r30)
    lwz r4, 0x20(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8002F704_00003EB0
    cmpwi r4, 0x0
    bne lbl_fn_8002F704_00003EB8
lbl_fn_8002F704_00003EB0:
    li r3, 0x0
    b lbl_fn_8002F704_00003EC8
lbl_fn_8002F704_00003EB8:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r3, 0x8c(r1)
lbl_fn_8002F704_00003EC8:
    lis r7, lbl_807C6A40@ha
    addi r5, r7, lbl_807C6A40@l
    lwz r0, 0x20(r5)
    cmpw r3, r0
    bge lbl_fn_8002F704_00003F2C
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    li r4, 0x3
    lwz r0, 0x20(r3)
    li r3, 0x1
    stw r4, 0x18(r5)
    addi r4, r1, 0x58
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    stw r3, lbl_807C6A40@l(r7)
    addi r7, r1, 0x64
    li r3, 0x4
    stw r8, 0x64(r1)
    stw r8, 0x60(r1)
    stw r8, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_00003F2C:
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r4, lbl_807C68C0@l(r4)
    lwz r3, 0x20(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8002F704_00003F4C
    cmpwi r4, 0x0
    bne lbl_fn_8002F704_00003F54
lbl_fn_8002F704_00003F4C:
    li r0, 0x0
    b lbl_fn_8002F704_00003F64
lbl_fn_8002F704_00003F54:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r0, 0x8c(r1)
lbl_fn_8002F704_00003F64:
    lis r3, lbl_807C68C0@ha
    xoris r4, r0, 0x8000
    addi r3, r3, lbl_807C68C0@l
    lis r5, lbl_8072FF60@ha
    lwz r0, 0x30(r3)
    lis r3, lbl_8072FF68@ha
    stw r4, 0x7c(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_8072FF60@l(r5)
    stw r0, 0x84(r1)
    lfd f2, 0x78(r1)
    lfd f1, 0x80(r1)
    lfd f0, lbl_8072FF68@l(r3)
    fsub f2, f2, f3
    fsub f1, f1, f3
    fmul f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8002F704_00004000
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x54(r1)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    stw r0, 0x50(r1)
    addi r7, r1, 0x54
    li r3, 0x5
    stw r0, 0x4c(r1)
    stw r31, 0x48(r1)
    bl fn_8001AEDC
    lis r5, lbl_807C6A40@ha
    li r3, 0x3
    addi r4, r5, lbl_807C6A40@l
    stw r31, lbl_807C6A40@l(r5)
    lwz r0, 0x28(r4)
    stw r3, 0x18(r4)
    li r3, 0x8
    stw r0, 0x3c(r4)
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_00004000:
    li r3, -0x1
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_00004008:
    li r3, -0x1
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_00004010:
    cmpwi r0, 0x3
    bne lbl_fn_8002F704_00004100
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002F704_000040E8
    lwz r0, 0x30(r31)
    lis r3, lbl_8072FF60@ha
    lwz r8, 0x20(r31)
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
    beq lbl_fn_8002F704_000040D4
    cmpwi r9, 0x0
    beq lbl_fn_8002F704_000040A4
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
    b lbl_fn_8002F704_000040D4
lbl_fn_8002F704_000040A4:
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
lbl_fn_8002F704_000040D4:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_000040E8:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r30)
    li r3, -0x1
    stw r0, lbl_807C6A40@l(r29)
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_00004100:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002F704_000041E4
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8002F704_000041DC
    lwz r0, 0x30(r31)
    lis r3, lbl_8072FF60@ha
    lwz r8, 0x20(r31)
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
    beq lbl_fn_8002F704_000041C8
    cmpwi r9, 0x0
    beq lbl_fn_8002F704_00004198
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
    b lbl_fn_8002F704_000041C8
lbl_fn_8002F704_00004198:
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
lbl_fn_8002F704_000041C8:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_000041DC:
    li r3, -0x1
    b lbl_fn_8002F704_000041E8
lbl_fn_8002F704_000041E4:
    li r3, -0x1
lbl_fn_8002F704_000041E8:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8002FBD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r10, lbl_807C6A40@ha
    li r11, 0x2711
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r3, r10, lbl_807C6A40@l
    li r9, 0x32
    li r8, 0x1
    stw r11, 0x18(r3)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r9, 0x1c(r3)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x8
    stw r8, lbl_807C6A40@l(r10)
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
    stw r9, 0xc(r1)
    stw r11, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002FC40(void)
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
    blt lbl_fn_8002FC40_0000429C
    li r0, -0x1
    b lbl_fn_8002FC40_000042A8
lbl_fn_8002FC40_0000429C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002FC40_000042A8:
    cmpwi r0, 0x1
    bne lbl_fn_8002FC40_000042B8
    li r3, -0x1
    b lbl_fn_8002FC40_00004370
lbl_fn_8002FC40_000042B8:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002FC40_0000436C
    lis r3, lbl_807C6A40@ha
    lwz r4, 0x20(r31)
    addi r3, r3, lbl_807C6A40@l
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    ble lbl_fn_8002FC40_000042F0
    cmpwi r4, 0x0
    bne lbl_fn_8002FC40_000042F8
lbl_fn_8002FC40_000042F0:
    li r4, 0x0
    b lbl_fn_8002FC40_00004308
lbl_fn_8002FC40_000042F8:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
lbl_fn_8002FC40_00004308:
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x1c(r3)
    cmpw r4, r0
    bge lbl_fn_8002FC40_00004364
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x14(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x8
    stw r8, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0xc(r1)
    li r3, 0x4
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_8002FC40_00004370
lbl_fn_8002FC40_00004364:
    li r3, -0x1
    b lbl_fn_8002FC40_00004370
lbl_fn_8002FC40_0000436C:
    li r3, -0x1
lbl_fn_8002FC40_00004370:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002FD54(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    lis r4, lbl_807C68C0@ha
    stw r0, 0x44(r1)
    addi r3, r3, lbl_807C6A40@l
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r3, 0x18(r3)
    lwz r4, lbl_807C68C0@l(r4)
    cmpwi r3, 0x0
    ble lbl_fn_8002FD54_000043BC
    cmpwi r4, 0x0
    bne lbl_fn_8002FD54_000043C4
lbl_fn_8002FD54_000043BC:
    li r0, 0x0
    b lbl_fn_8002FD54_000043D4
lbl_fn_8002FD54_000043C4:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
lbl_fn_8002FD54_000043D4:
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    lwz r8, 0x1c(r3)
    cmpw r0, r8
    bge lbl_fn_8002FD54_000044A8
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8002FD54_00004480
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002FD54_00004434
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002FD54_00004434:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x18(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x24
    stw r5, 0x1c(r1)
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    stw r31, 0x20(r1)
    li r3, 0x4
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_8002FD54_00004484
lbl_fn_8002FD54_00004480:
    li r0, -0x1
lbl_fn_8002FD54_00004484:
    cmpwi r0, 0x5
    bne lbl_fn_8002FD54_000044A0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002FD54_000044E4
lbl_fn_8002FD54_000044A0:
    li r3, -0x1
    b lbl_fn_8002FD54_000044E4
lbl_fn_8002FD54_000044A8:
    lwz r0, 0x18(r3)
    li r3, 0x0
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r3, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x8
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
lbl_fn_8002FD54_000044E4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002FECC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    lis r4, lbl_807C68C0@ha
    stw r0, 0x44(r1)
    addi r3, r3, lbl_807C6A40@l
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r3, 0x18(r3)
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    ble lbl_fn_8002FECC_00004538
    cmpwi r4, 0x0
    bne lbl_fn_8002FECC_00004540
lbl_fn_8002FECC_00004538:
    li r0, 0x0
    b lbl_fn_8002FECC_00004550
lbl_fn_8002FECC_00004540:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
lbl_fn_8002FECC_00004550:
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r8, 0x1c(r3)
    cmpw r0, r8
    bge lbl_fn_8002FECC_000045BC
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002FECC_000045B4
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
    stw r31, lbl_807C6A40@l(r30)
    li r3, 0x8
    b lbl_fn_8002FECC_000045F8
lbl_fn_8002FECC_000045B4:
    li r3, -0x1
    b lbl_fn_8002FECC_000045F8
lbl_fn_8002FECC_000045BC:
    lwz r0, 0x18(r3)
    li r3, 0x0
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r3, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x8
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
lbl_fn_8002FECC_000045F8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8002FFE0(void)
{
    nofralloc
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002FFE0_0000462C
    li r0, -0x1
    b lbl_fn_8002FFE0_00004638
lbl_fn_8002FFE0_0000462C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002FFE0_00004638:
    cmpwi r0, 0x1
    bne lbl_fn_8002FFE0_00004654
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
lbl_fn_8002FFE0_00004654:
    li r3, -0x1
    blr
}
