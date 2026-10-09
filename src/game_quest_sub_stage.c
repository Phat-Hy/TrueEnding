#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_16(void);
extern void _restgpr_26(void);
extern void _savegpr_16(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80079044(void);
extern void fn_800791B4(void);
extern void fn_8007A154(void);
extern void fn_800844D8(void);
extern void fn_800C16B4(void);
extern void fn_800C2448(void);
extern void fn_800CF680(void);
extern void fn_800DAA3C(void);
extern void fn_803606CC(void);
extern void fn_80360780(void);
extern void fn_80373148(void);
extern void fn_8037D4C0(void);
extern void fn_8041D180(void);
extern void fn_8041D198(void);
extern void fn_804827D8(void);
extern void fn_80482B24(void);
extern void fn_80482B54(void);
extern void fn_80482D90(void);
extern void fn_80482EB4(void);
extern void fn_80491528(void);
extern void fn_804918A4(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_80756338[];
extern u8 lbl_80756380[];
extern u8 lbl_80775A88[];
extern u8 lbl_8077927C[];
extern u8 lbl_807901A0[];
extern u8 lbl_807C88F0[];

/* Small data declarations */
extern u32 lbl_8087EEF8;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F008;
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F4C0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F558;
extern u32 lbl_80886F8C;
extern u32 lbl_80886F90;
extern u32 lbl_80886FB0;
extern u32 lbl_80887010;

/* Function declarations */
void fn_80483644(void);
void fn_80483714(void);
void fn_80483E80(void);
void fn_80483E94(void);
void fn_80483F70(void);
void fn_80484074(void);
void fn_80484088(void);
void fn_804846FC(void);
void fn_804848C4(void);
void fn_804848D0(void);
void fn_80484A78(void);
void fn_80484BF4(void);
void fn_80484D40(void);
void fn_80484D64(void);
void fn_80484E6C(void);
void fn_80484E88(void);
void fn_80484FBC(void);
void fn_80485028(void);

asm void fn_80483644(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F4C0
    extsb. r0, r0
    bne lbl_fn_80483644_00000058
    lis r7, lbl_807C88F0@ha
    lis r5, fn_8041D180@ha
    lis r4, fn_8041D198@ha
    li r0, 0x1
    addi r4, r4, fn_8041D198@l
    addi r6, r7, lbl_807C88F0@l
    addi r5, r5, fn_8041D180@l
    stw r5, 0x4(r6)
    stw r4, lbl_807C88F0@l(r7)
    stb r0, lbl_8087F4C0
lbl_fn_80483644_00000058:
    lis r4, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80483644_0000007C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80483644_0000007C:
    cmpwi r31, 0x0
    beq lbl_fn_80483644_00000090
    stw r31, 0x4(r30)
    li r0, 0x1
    b lbl_fn_80483644_00000094
lbl_fn_80483644_00000090:
    li r0, 0x0
lbl_fn_80483644_00000094:
    cmpwi r0, 0x0
    beq lbl_fn_80483644_000000AC
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x0(r30)
    b lbl_fn_80483644_000000B4
lbl_fn_80483644_000000AC:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_80483644_000000B4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80483714(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    stw r28, 0x50(r1)
    lbz r0, 0x1ab0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80483714_0000081C
    lwz r4, lbl_8087EFA8
    cmpwi cr1, r4, 0x0
    beq cr1, lbl_fn_80483714_0000081C
    lwz r0, lbl_8087EFB4
    cmpwi r0, 0x0
    beq lbl_fn_80483714_0000081C
    beq cr1, lbl_fn_80483714_00000168
    lwz r5, 0x1b68(r3)
    stw r5, 0x240(r4)
    lwz r5, 0x1b6c(r3)
    stw r5, 0x244(r4)
    lwz r5, 0x1b70(r3)
    stw r5, 0x248(r4)
    lfs f0, 0x1b74(r3)
    stfs f0, 0x24c(r4)
    lfs f0, 0x1b78(r3)
    stfs f0, 0x250(r4)
    lwz r5, 0x1b7c(r3)
    stw r5, 0x254(r4)
    lwz r5, 0x1b80(r3)
    stw r5, 0x258(r4)
    lfs f0, 0x1b84(r3)
    stfs f0, 0x25c(r4)
    lfs f0, 0x1b88(r3)
    stfs f0, 0x260(r4)
lbl_fn_80483714_00000168:
    lwz r5, 0x1ab8(r3)
    stw r5, 0x54(r4)
    lwz r5, 0x1abc(r3)
    stw r5, 0x58(r4)
    lwz r5, 0x1ac0(r3)
    stw r5, 0x5c(r4)
    lwz r5, 0x1ac4(r3)
    stw r5, 0x60(r4)
    lwz r5, 0x1ac8(r3)
    stw r5, 0x64(r4)
    lfs f0, 0x1acc(r3)
    stfs f0, 0x68(r4)
    lfs f0, 0x1ad0(r3)
    stfs f0, 0x6c(r4)
    lfs f0, 0x1ad4(r3)
    stfs f0, 0x70(r4)
    lfs f0, 0x1ad8(r3)
    stfs f0, 0x74(r4)
    lwz r5, 0x1ae0(r3)
    lwz r6, 0x1adc(r3)
    stw r6, 0x78(r4)
    stw r5, 0x7c(r4)
    lwz r5, 0x1ae8(r3)
    lwz r6, 0x1ae4(r3)
    stw r6, 0x80(r4)
    stw r5, 0x84(r4)
    lwz r5, 0x1aec(r3)
    stw r5, 0x88(r4)
    lwz r5, 0x1af4(r3)
    lwz r6, 0x1af0(r3)
    stw r6, 0x8c(r4)
    stw r5, 0x90(r4)
    lwz r5, 0x1afc(r3)
    lwz r6, 0x1af8(r3)
    stw r6, 0x94(r4)
    stw r5, 0x98(r4)
    lwz r5, 0x1b04(r3)
    lwz r6, 0x1b00(r3)
    stw r6, 0x9c(r4)
    stw r5, 0xa0(r4)
    lwz r5, 0x1b0c(r3)
    lwz r6, 0x1b08(r3)
    stw r6, 0xa4(r4)
    stw r5, 0xa8(r4)
    lwz r5, 0x1b14(r3)
    lwz r6, 0x1b10(r3)
    stw r6, 0xac(r4)
    stw r5, 0xb0(r4)
    lwz r5, 0x1b1c(r3)
    lwz r6, 0x1b18(r3)
    stw r6, 0xb4(r4)
    stw r5, 0xb8(r4)
    lwz r5, 0x1b24(r3)
    lwz r6, 0x1b20(r3)
    stw r6, 0xbc(r4)
    stw r5, 0xc0(r4)
    lwz r5, 0x1b28(r3)
    stw r5, 0xc4(r4)
    lwz r5, 0x1b30(r3)
    lwz r6, 0x1b2c(r3)
    stw r6, 0xc8(r4)
    stw r5, 0xcc(r4)
    lwz r5, 0x1b34(r3)
    stw r5, 0xd0(r4)
    lwz r5, 0x1b38(r3)
    stw r5, 0xd4(r4)
    lwz r5, 0x1b3c(r3)
    stw r5, 0xd8(r4)
    lwz r5, 0x1b40(r3)
    stw r5, 0xdc(r4)
    lwz r5, 0x1b44(r3)
    stw r5, 0xe0(r4)
    lfs f0, 0x1b48(r3)
    stfs f0, 0xe4(r4)
    lfs f0, 0x1b4c(r3)
    stfs f0, 0xe8(r4)
    lfs f0, 0x1b50(r3)
    stfs f0, 0xec(r4)
    lfs f0, 0x1b54(r3)
    stfs f0, 0xf0(r4)
    lwz r5, 0x1b58(r3)
    stw r5, 0xf4(r4)
    lwz r5, 0x1b5c(r3)
    stw r5, 0xf8(r4)
    lfs f0, 0x1b60(r3)
    stfs f0, 0xfc(r4)
    lfs f0, 0x1b64(r3)
    stfs f0, 0x100(r4)
    lwz r7, 0x1b8c(r3)
    lwz r6, 0x1b90(r3)
    lfs f4, 0x1b94(r3)
    lfs f3, 0x1b98(r3)
    lfs f0, 0x1b9c(r3)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    lfs f0, 0x1ba0(r3)
    li r8, 0x0
    lfs f5, 0x1ba4(r3)
    lfs f4, 0x1ba8(r3)
    lfs f3, 0x1bac(r3)
    lwz r5, 0x34(r1)
    stw r7, 0x374(r4)
    lwz r7, 0x38(r1)
    stw r6, 0x378(r4)
    lwz r6, 0x3c(r1)
    stw r5, 0x37c(r4)
    stw r7, 0x380(r4)
    stfs f0, 0x40(r1)
    stw r6, 0x384(r4)
    lwz r5, 0x40(r1)
    stw r5, 0x388(r4)
    stfs f5, 0x38c(r4)
    stfs f4, 0x390(r4)
    stfs f3, 0x394(r4)
    lwz r5, 0x1bb0(r3)
    stw r5, 0x2ac(r4)
    lwz r5, 0x1bb4(r3)
    stw r5, 0x2b0(r4)
    lfs f0, 0x1bb8(r3)
    stfs f0, 0x2b4(r4)
    lfs f0, 0x1bbc(r3)
    stfs f0, 0x2b8(r4)
    stb r8, 0x1ab1(r3)
    mr r3, r0
    stfs f5, 0x44(r1)
    stfs f4, 0x48(r1)
    stfs f3, 0x4c(r1)
    bl fn_800C16B4
    lwz r0, 0x1bd0(r29)
    addi r7, r29, 0x1c54
    stw r0, 0x3c(r3)
    addi r6, r29, 0x1c64
    addi r5, r29, 0x1c8c
    lfs f0, 0x1bd4(r29)
    stfs f0, 0x40(r3)
    lfs f0, 0x1bd8(r29)
    stfs f0, 0x44(r3)
    lwz r0, 0x1be0(r29)
    lwz r4, 0x1bdc(r29)
    stw r4, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x1be8(r29)
    lwz r4, 0x1be4(r29)
    stw r4, 0x50(r3)
    stw r0, 0x54(r3)
    lfs f0, 0x1bec(r29)
    stfs f0, 0xc(r3)
    lfs f0, 0x1bf0(r29)
    stfs f0, 0x10(r3)
    lfs f0, 0x1bf4(r29)
    stfs f0, 0x14(r3)
    lfs f0, 0x1bf8(r29)
    stfs f0, 0x18(r3)
    lfs f0, 0x1bfc(r29)
    stfs f0, 0x1c(r3)
    lfs f0, 0x1c00(r29)
    stfs f0, 0x20(r3)
    lfs f0, 0x1c04(r29)
    stfs f0, 0x24(r3)
    lfs f0, 0x1c08(r29)
    stfs f0, 0x28(r3)
    lfs f0, 0x1c0c(r29)
    stfs f0, 0x2c(r3)
    lfs f0, 0x1c10(r29)
    stfs f0, 0x30(r3)
    lfs f0, 0x1c14(r29)
    stfs f0, 0x34(r3)
    lfs f0, 0x1c18(r29)
    stfs f0, 0x38(r3)
    lwz r0, 0x1c1c(r29)
    stw r0, 0x198(r3)
    lwz r0, 0x1c20(r29)
    stw r0, 0x19c(r3)
    lwz r0, 0x1c24(r29)
    stw r0, 0x1a0(r3)
    lwz r0, 0x1c28(r29)
    stw r0, 0x1a4(r3)
    lwz r0, 0x1c2c(r29)
    stw r0, 0x1a8(r3)
    lwz r0, 0x1c30(r29)
    stw r0, 0x1ac(r3)
    lwz r0, 0x1c34(r29)
    stw r0, 0x1b0(r3)
    lfs f0, 0x1c38(r29)
    stfs f0, 0x1b4(r3)
    lfs f0, 0x1c3c(r29)
    stfs f0, 0x1b8(r3)
    lfs f0, 0x1c40(r29)
    stfs f0, 0x1bc(r3)
    lwz r0, 0x1c48(r29)
    lwz r4, 0x1c44(r29)
    stw r4, 0x1c0(r3)
    stw r0, 0x1c4(r3)
    lwz r0, 0x1c50(r29)
    lwz r4, 0x1c4c(r29)
    stw r4, 0x1c8(r3)
    stw r0, 0x1cc(r3)
    lfs f2, 0x1c5c(r29)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x1d0(r3), 0, 0
    stfs f2, 0x1d8(r3)
    lfs f0, 0x1c60(r29)
    stfs f0, 0x1dc(r3)
    lwz r0, 0x1c64(r29)
    stw r0, 0x238(r3)
    lwz r0, 0x1c68(r29)
    stw r0, 0x23c(r3)
    lfs f0, 0x1c6c(r29)
    stfs f0, 0x240(r3)
    lwz r0, 0x1c74(r29)
    lwz r4, 0x1c70(r29)
    stw r4, 0x244(r3)
    stw r0, 0x248(r3)
    lwz r0, 0x1c7c(r29)
    lwz r4, 0x1c78(r29)
    stw r4, 0x24c(r3)
    stw r0, 0x250(r3)
    lfs f2, 0x1c88(r29)
    psq_l f1, 0x1c(r6), 0, 0
    psq_st f1, 0x254(r3), 0, 0
    stfs f2, 0x25c(r3)
    lwz r0, 0x260(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80483714_000004FC
    addi r11, r3, 0x264
    b lbl_fn_80483714_00000504
lbl_fn_80483714_000004FC:
    lwz r4, lbl_8087EFA8
    addi r11, r4, 0x324
lbl_fn_80483714_00000504:
    lwz r0, 0x0(r5)
    addi r6, r29, 0x1ce8
    stw r0, 0x0(r11)
    addi r7, r29, 0x1cf0
    addi r8, r29, 0x1cf8
    addi r9, r29, 0x1d00
    psq_l f2, 0xc(r5), 0, 0
    addi r10, r29, 0x1d08
    psq_l f1, 0x4(r5), 0, 0
    addi r28, r29, 0x1d1c
    psq_st f1, 0x4(r11), 0, 0
    li r4, 0x0
    psq_st f2, 0xc(r11), 0, 0
    psq_l f2, 0x1c(r5), 0, 0
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r11), 0, 0
    psq_st f2, 0x1c(r11), 0, 0
    psq_l f2, 0x2c(r5), 0, 0
    psq_l f1, 0x24(r5), 0, 0
    psq_st f1, 0x24(r11), 0, 0
    psq_st f2, 0x2c(r11), 0, 0
    psq_l f2, 0x3c(r5), 0, 0
    psq_l f1, 0x34(r5), 0, 0
    psq_st f1, 0x34(r11), 0, 0
    psq_st f2, 0x3c(r11), 0, 0
    lwz r0, 0x44(r5)
    stw r0, 0x44(r11)
    lwz r0, 0x48(r5)
    stw r0, 0x48(r11)
    lfs f0, 0x4c(r5)
    stfs f0, 0x4c(r11)
    lwz r0, 0x1cdc(r29)
    stw r0, 0x1f8(r3)
    lwz r0, 0x1ce0(r29)
    stw r0, 0x1fc(r3)
    lfs f0, 0x1ce4(r29)
    stfs f0, 0x200(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x204(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x20c(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x214(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x21c(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    psq_st f1, 0x224(r3), 0, 0
    psq_st f2, 0x22c(r3), 0, 0
    lwz r0, 0x1d18(r29)
    stw r0, 0x120(r3)
    bl fn_800C2448
    lwz r0, 0x0(r28)
    addi r5, r29, 0x1ab0
    stw r0, 0x0(r3)
    li r4, 0x0
    lwz r0, 0x4(r28)
    stw r0, 0x4(r3)
    lfs f2, 0x10(r28)
    psq_l f1, 0x8(r28), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x1c(r28)
    psq_l f1, 0x14(r28), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lwz r0, 0x20(r28)
    stw r0, 0x20(r3)
    lfs f0, 0x24(r28)
    stfs f0, 0x24(r3)
    lfs f0, 0x28(r28)
    stfs f0, 0x28(r3)
    lfs f0, 0x2c(r28)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r28)
    stfs f0, 0x30(r3)
    lwz r0, 0x38(r28)
    lwz r6, 0x34(r28)
    stw r6, 0x34(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x40(r28)
    lwz r6, 0x3c(r28)
    stw r6, 0x3c(r3)
    stw r0, 0x40(r3)
    lbz r0, lbl_8087F4C0
    stw r5, 0x8(r1)
    extsb. r0, r0
    stw r4, 0xc(r1)
    stb r4, 0x10(r1)
    stw r4, 0x18(r1)
    bne lbl_fn_80483714_00000698
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80483714_00000698:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80483714_000006BC
    addi r3, r1, 0x1c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80483714_000006BC:
    lis r0, fn_804827D8@ha
    addic. r0, r0, 10200
    beq lbl_fn_80483714_000006D4
    stw r0, 0x1c(r1)
    li r0, 0x1
    b lbl_fn_80483714_000006D8
lbl_fn_80483714_000006D4:
    li r0, 0x0
lbl_fn_80483714_000006D8:
    cmpwi r0, 0x0
    beq lbl_fn_80483714_000006F0
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x18(r1)
    b lbl_fn_80483714_000006F8
lbl_fn_80483714_000006F0:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80483714_000006F8:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x18
    addi r5, r1, 0x8
    bl fn_80491528
    addic. r3, r1, 0x18
    beq lbl_fn_80483714_00000744
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80483714_00000744
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80483714_0000073C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80483714_0000073C:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80483714_00000744:
    lwz r3, lbl_8087F430
    li r28, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80483714_0000076C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80483714_0000076C
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r28, r3
lbl_fn_80483714_0000076C:
    cmpwi r28, 0x0
    bne lbl_fn_80483714_00000790
    lwz r3, lbl_8087F558
    cmpwi r3, 0x0
    beq lbl_fn_80483714_00000790
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80483714_00000790
    lwz r28, 0x4c(r3)
lbl_fn_80483714_00000790:
    cmpwi r28, 0x0
    beq lbl_fn_80483714_000007A0
    lwz r0, 0x1d6c(r29)
    stw r0, 0x104(r28)
lbl_fn_80483714_000007A0:
    lwz r0, 0xc4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80483714_000007C4
    lfs f0, lbl_80886F90
    li r0, 0x0
    stfs f0, 0xb4(r29)
    lwz r3, lbl_8087EFA8
    stfs f0, 0x3a4(r3)
    stw r0, 0xc4(r29)
lbl_fn_80483714_000007C4:
    lwz r28, 0x1bcc(r29)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    cmpwi r28, 0x0
    stw r28, 0x74(r3)
    li r4, 0x0
    bne lbl_fn_80483714_000007EC
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80483714_000007F0
lbl_fn_80483714_000007EC:
    li r4, 0x1
lbl_fn_80483714_000007F0:
    stw r4, 0x70(r3)
    li r4, 0x0
    lwz r3, lbl_8087F008
    bl fn_800DAA3C
    cmpwi r31, 0x0
    bne lbl_fn_80483714_0000081C
    mr r3, r29
    mr r4, r30
    bl fn_80483E94
    li r0, 0x0
    stb r0, 0x1ab0(r29)
lbl_fn_80483714_0000081C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80483E80(void)
{
    nofralloc
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stb r0, 0x8(r3)
    blr
}

asm void fn_80483E94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x1ab0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80483E94_00000918
    cmpwi r4, 0x0
    beq lbl_fn_80483E94_000008A4
    lwz r4, 0x1d64(r3)
    cmpwi r4, -0x1
    beq lbl_fn_80483E94_000008A4
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80483E94_000008A4
    lfs f1, 0x1d68(r31)
    li r5, 0x3c
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_80483E94_000008A4:
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80483E94_000008C0
    li r4, 0x3
    li r5, 0x3c
    li r6, 0x0
    bl fn_800CF680
lbl_fn_80483E94_000008C0:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80483E94_000008F0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_80360780
    lwz r3, lbl_8087F418
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_803606CC
lbl_fn_80483E94_000008F0:
    lwz r3, lbl_8087F0A0
    cmpwi r3, 0x0
    beq lbl_fn_80483E94_00000910
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80483E94_00000910
    li r0, 0x1
    stw r0, 0x48(r3)
lbl_fn_80483E94_00000910:
    li r0, 0x0
    stb r0, 0x1ab0(r31)
lbl_fn_80483E94_00000918:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80483F70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886FB0
    stw r0, 0x34(r1)
    addi r5, r1, 0x18
    stw r31, 0x2c(r1)
    lwz r6, lbl_8087F540
    lwz r4, lbl_8087EFA8
    lwz r0, 0x1a38(r6)
    lwz r3, lbl_8087F558
    addi r31, r4, 0x324
    mulli r0, r0, 0x65c
    stfs f0, 0x24(r1)
    cmpwi r3, 0x0
    add r4, r6, r0
    psq_l f1, 0xdc(r4), 0, 0
    lfs f2, 0xe4(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    beq lbl_fn_80483F70_00000A18
    frsp f2, f2
    addi r4, r1, 0x8
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_804918A4
    cmpwi r3, 0x0
    beq lbl_fn_80483F70_00000A18
    lwz r0, 0x2ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80483F70_000009B0
    addi r3, r3, 0x2b0
    b lbl_fn_80483F70_000009B8
lbl_fn_80483F70_000009B0:
    lwz r3, lbl_8087EFA8
    addi r3, r3, 0x324
lbl_fn_80483F70_000009B8:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    psq_l f2, 0xc(r3), 0, 0
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x4(r31), 0, 0
    psq_st f2, 0xc(r31), 0, 0
    psq_l f2, 0x1c(r3), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x14(r31), 0, 0
    psq_st f2, 0x1c(r31), 0, 0
    psq_l f2, 0x2c(r3), 0, 0
    psq_l f1, 0x24(r3), 0, 0
    psq_st f1, 0x24(r31), 0, 0
    psq_st f2, 0x2c(r31), 0, 0
    psq_l f2, 0x3c(r3), 0, 0
    psq_l f1, 0x34(r3), 0, 0
    psq_st f1, 0x34(r31), 0, 0
    psq_st f2, 0x3c(r31), 0, 0
    lwz r0, 0x44(r3)
    stw r0, 0x44(r31)
    lwz r0, 0x48(r3)
    stw r0, 0x48(r31)
    lfs f0, 0x4c(r3)
    stfs f0, 0x4c(r31)
lbl_fn_80483F70_00000A18:
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80484074(void)
{
    nofralloc
    lwz r0, 0x1a38(r3)
    mulli r0, r0, 0x65c
    add r3, r3, r0
    addi r3, r3, 0xc8
    blr
}

asm void fn_80484088(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_16
    lfs f0, lbl_80886F8C
    li r18, 0x0
    lfs f3, lbl_80886F90
    fmr f4, f1
    stfs f3, 0x48(r1)
    addi r6, r1, 0x48
    addi r5, r1, 0x94
    addi r8, r1, 0x38
    stfs f0, 0x4c(r1)
    addi r7, r1, 0xa4
    addi r10, r1, 0x28
    psq_l f1, 0x0(r6), 0, 0
    addi r9, r1, 0xb4
    stfs f0, 0x50(r1)
    addi r12, r1, 0x18
    addi r11, r1, 0xc4
    mr r29, r3
    stfs f0, 0x54(r1)
    lis r3, __files@ha
    li r30, 0x0
    li r28, 0x0
    psq_l f2, 0x8(r6), 0, 0
    addi r24, r1, 0x88
    stfs f0, 0x38(r1)
    addi r21, r3, __files@l
    addi r31, r1, 0x58
    lis r26, 0xcccd
    stfs f3, 0x3c(r1)
    lis r19, 0x333
    lis r22, 0x111
    lis r23, 0x222
    psq_st f1, 0x0(r5), 0, 0
    lis r27, lbl_807901A0@ha
    psq_l f1, 0x0(r8), 0, 0
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stw r18, 0x80(r1)
    stw r18, 0x84(r1)
    stw r18, 0x88(r1)
    stw r18, 0x90(r1)
    stw r18, 0xd4(r1)
    stw r18, 0xd8(r1)
    stfs f3, 0xdc(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f2, 0x8(r11), 0, 0
    stw r18, 0x8c(r1)
    stfs f4, 0xe0(r1)
    lwz r0, 0x0(r4)
    stw r0, 0x90(r1)
    psq_l f1, 0x4(r4), 0, 0
    psq_l f2, 0xc(r4), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    psq_l f2, 0x1c(r4), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    psq_l f2, 0x2c(r4), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x34(r4), 0, 0
    psq_l f2, 0x3c(r4), 0, 0
    psq_st f2, 0x8(r11), 0, 0
    psq_st f1, 0x0(r11), 0, 0
    lwz r0, 0x44(r4)
    stw r0, 0xd4(r1)
    lwz r0, 0x48(r4)
    stw r0, 0xd8(r1)
    lfs f0, 0x4c(r4)
    lis r4, lbl_80756380@ha
    stfs f0, 0xdc(r1)
    addi r20, r4, lbl_80756380@l
    stw r18, 0x84(r1)
    b lbl_fn_80484088_00000F80
lbl_fn_80484088_00000BCC:
    lwz r0, 0x84(r1)
    lwz r25, 0x88(r1)
    lwz r3, 0x1bc0(r29)
    cmplw r0, r25
    add r17, r3, r28
    bge lbl_fn_80484088_00000C64
    mulli r0, r0, 0x50
    lwz r3, 0x80(r1)
    add. r3, r3, r0
    beq lbl_fn_80484088_00000C54
    lwz r0, 0xbc(r17)
    stw r0, 0x0(r3)
    psq_l f2, 0xc8(r17), 0, 0
    psq_l f1, 0xc0(r17), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    psq_st f2, 0xc(r3), 0, 0
    psq_l f2, 0xd8(r17), 0, 0
    psq_l f1, 0xd0(r17), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    psq_st f2, 0x1c(r3), 0, 0
    psq_l f2, 0xe8(r17), 0, 0
    psq_l f1, 0xe0(r17), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    psq_st f2, 0x2c(r3), 0, 0
    psq_l f2, 0xf8(r17), 0, 0
    psq_l f1, 0xf0(r17), 0, 0
    psq_st f1, 0x34(r3), 0, 0
    psq_st f2, 0x3c(r3), 0, 0
    lwz r0, 0x100(r17)
    stw r0, 0x44(r3)
    lwz r0, 0x104(r17)
    stw r0, 0x48(r3)
    lfs f0, 0x108(r17)
    stfs f0, 0x4c(r3)
lbl_fn_80484088_00000C54:
    lwz r3, 0x84(r1)
    addi r0, r3, 0x1
    stw r0, 0x84(r1)
    b lbl_fn_80484088_00000F78
lbl_fn_80484088_00000C64:
    addi r0, r19, 0x3333
    subf r0, r25, r0
    cmplwi r0, 0x1
    bge lbl_fn_80484088_00000C88
    addi r4, r20, 0x1c8
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80484088_00000C88:
    addi r0, r22, 0x1111
    cmplw r25, r0
    bge lbl_fn_80484088_00000CBC
    addi r3, r25, 0x1
    subi r4, r26, 0x3333
    slwi r0, r3, 2
    subf r0, r3, r0
    mulhwu r0, r4, r0
    srwi r0, r0, 2
    cmplwi r0, 0x1
    bge lbl_fn_80484088_00000CD8
    b lbl_fn_80484088_00000CD8
    b lbl_fn_80484088_00000CD8
lbl_fn_80484088_00000CBC:
    addi r0, r23, 0x2222
    cmplw r25, r0
    bge lbl_fn_80484088_00000CD8
    addi r0, r25, 0x1
    srwi r0, r0, 1
    cmplwi r0, 0x1
    cmplwi r0, 0x1
lbl_fn_80484088_00000CD8:
    lwz r3, 0x84(r1)
    addi r0, r19, 0x3333
    lwz r25, 0x88(r1)
    addi r3, r3, 0x1
    stw r18, 0x58(r1)
    subf r3, r25, r3
    subf r0, r25, r0
    cmplw r3, r0
    stw r18, 0x5c(r1)
    stw r18, 0x60(r1)
    stw r24, 0x64(r1)
    stw r18, 0x68(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_80484088_00000D24
    addi r4, r20, 0x1c8
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80484088_00000D24:
    addi r0, r22, 0x1111
    cmplw r25, r0
    bge lbl_fn_80484088_00000D6C
    addi r4, r25, 0x1
    subi r5, r26, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80484088_00000D60
    addi r3, r1, 0x10
lbl_fn_80484088_00000D60:
    lwz r0, 0x0(r3)
    add r25, r25, r0
    b lbl_fn_80484088_00000DA8
lbl_fn_80484088_00000D6C:
    addi r0, r23, 0x2222
    cmplw r25, r0
    bge lbl_fn_80484088_00000DA4
    addi r3, r25, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80484088_00000D98
    addi r3, r1, 0x10
lbl_fn_80484088_00000D98:
    lwz r0, 0x0(r3)
    add r25, r25, r0
    b lbl_fn_80484088_00000DA8
lbl_fn_80484088_00000DA4:
    addi r25, r19, 0x3333
lbl_fn_80484088_00000DA8:
    addi r0, r19, 0x3333
    cmplw r25, r0
    ble lbl_fn_80484088_00000DC8
    addi r4, r20, 0x1c8
    addi r3, r21, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80484088_00000DC8:
    mulli r3, r25, 0x50
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_80484088_00000DF0
    addi r3, r21, 0xa0
    addi r4, r27, lbl_807901A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80484088_00000DF0:
    lwz r5, 0x84(r1)
    lwz r0, 0x5c(r1)
    mulli r4, r5, 0x50
    stw r16, 0x58(r1)
    stw r25, 0x60(r1)
    mulli r3, r0, 0x50
    add r0, r16, r4
    stw r5, 0x68(r1)
    add. r3, r3, r0
    beq lbl_fn_80484088_00000E78
    lwz r0, 0xbc(r17)
    stw r0, 0x0(r3)
    psq_l f2, 0xc8(r17), 0, 0
    psq_l f1, 0xc0(r17), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    psq_st f2, 0xc(r3), 0, 0
    psq_l f2, 0xd8(r17), 0, 0
    psq_l f1, 0xd0(r17), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    psq_st f2, 0x1c(r3), 0, 0
    psq_l f2, 0xe8(r17), 0, 0
    psq_l f1, 0xe0(r17), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    psq_st f2, 0x2c(r3), 0, 0
    psq_l f2, 0xf8(r17), 0, 0
    psq_l f1, 0xf0(r17), 0, 0
    psq_st f1, 0x34(r3), 0, 0
    psq_st f2, 0x3c(r3), 0, 0
    lwz r0, 0x100(r17)
    stw r0, 0x44(r3)
    lwz r0, 0x104(r17)
    stw r0, 0x48(r3)
    lfs f0, 0x108(r17)
    stfs f0, 0x4c(r3)
lbl_fn_80484088_00000E78:
    lwz r0, 0x84(r1)
    lwz r3, 0x68(r1)
    lwz r4, 0x5c(r1)
    mulli r5, r0, 0x50
    lwz r0, 0x80(r1)
    addi r6, r4, 0x1
    stw r6, 0x5c(r1)
    mulli r3, r3, 0x50
    lwz r4, 0x58(r1)
    add r6, r0, r5
    add r5, r4, r3
    b lbl_fn_80484088_00000F2C
lbl_fn_80484088_00000EA8:
    subic. r5, r5, 0x50
    subi r6, r6, 0x50
    beq lbl_fn_80484088_00000F14
    lwz r3, 0x0(r6)
    stw r3, 0x0(r5)
    psq_l f2, 0xc(r6), 0, 0
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    psq_st f2, 0xc(r5), 0, 0
    psq_l f2, 0x1c(r6), 0, 0
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    psq_st f2, 0x1c(r5), 0, 0
    psq_l f2, 0x2c(r6), 0, 0
    psq_l f1, 0x24(r6), 0, 0
    psq_st f1, 0x24(r5), 0, 0
    psq_st f2, 0x2c(r5), 0, 0
    psq_l f2, 0x3c(r6), 0, 0
    psq_l f1, 0x34(r6), 0, 0
    psq_st f1, 0x34(r5), 0, 0
    psq_st f2, 0x3c(r5), 0, 0
    lwz r3, 0x44(r6)
    stw r3, 0x44(r5)
    lwz r3, 0x48(r6)
    stw r3, 0x48(r5)
    lfs f0, 0x4c(r6)
    stfs f0, 0x4c(r5)
lbl_fn_80484088_00000F14:
    lwz r4, 0x68(r1)
    lwz r3, 0x5c(r1)
    subi r4, r4, 0x1
    stw r4, 0x68(r1)
    addi r3, r3, 0x1
    stw r3, 0x5c(r1)
lbl_fn_80484088_00000F2C:
    cmplw r0, r6
    blt lbl_fn_80484088_00000EA8
    lwz r0, 0x5c(r1)
    cmpwi r31, 0x0
    lwz r6, 0x88(r1)
    lwz r5, 0x60(r1)
    lwz r3, 0x80(r1)
    lwz r4, 0x58(r1)
    stw r5, 0x88(r1)
    stw r6, 0x60(r1)
    stw r4, 0x80(r1)
    stw r3, 0x58(r1)
    stw r0, 0x84(r1)
    stw r18, 0x5c(r1)
    beq lbl_fn_80484088_00000F78
    cmpwi r3, 0x0
    beq lbl_fn_80484088_00000F78
    stw r18, 0x5c(r1)
    bl dtor_80084684
lbl_fn_80484088_00000F78:
    addi r30, r30, 0x1
    addi r28, r28, 0x194
lbl_fn_80484088_00000F80:
    lwz r0, 0x1bc4(r29)
    cmpw r30, r0
    blt lbl_fn_80484088_00000BCC
    lbz r0, lbl_8087F4C0
    li r3, 0x0
    stw r3, 0x6c(r1)
    extsb. r0, r0
    bne lbl_fn_80484088_00000FC8
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80484088_00000FC8:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80484088_00000FEC
    addi r3, r1, 0x70
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80484088_00000FEC:
    lis r0, fn_80482B54@ha
    addic. r0, r0, 11092
    beq lbl_fn_80484088_00001004
    stw r0, 0x70(r1)
    li r0, 0x1
    b lbl_fn_80484088_00001008
lbl_fn_80484088_00001004:
    li r0, 0x0
lbl_fn_80484088_00001008:
    cmpwi r0, 0x0
    beq lbl_fn_80484088_00001020
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x6c(r1)
    b lbl_fn_80484088_00001028
lbl_fn_80484088_00001020:
    li r0, 0x0
    stw r0, 0x6c(r1)
lbl_fn_80484088_00001028:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x6c
    addi r5, r1, 0x80
    bl fn_80491528
    addic. r3, r1, 0x6c
    beq lbl_fn_80484088_00001074
    lwz r4, 0x6c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80484088_00001074
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80484088_0000106C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80484088_0000106C:
    li r0, 0x0
    stw r0, 0x6c(r1)
lbl_fn_80484088_00001074:
    addic. r0, r1, 0x80
    beq lbl_fn_80484088_000010A0
    beq lbl_fn_80484088_000010A0
    beq lbl_fn_80484088_000010A0
    lwz r3, 0x80(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80484088_000010A0
    lwz r0, 0x84(r1)
    subf r0, r0, r0
    stw r0, 0x84(r1)
    bl dtor_80084684
lbl_fn_80484088_000010A0:
    addi r11, r1, 0x130
    bl _restgpr_16
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_804846FC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x4330
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r0, 0x30(r1)
    lwz r3, lbl_8087EFB4
    stw r0, 0x38(r1)
    bl fn_800C16B4
    li r4, 0x0
    bl fn_800C2448
    extrwi r0, r31, 8, 8
    stw r0, 0x34(r1)
    lis r4, lbl_80756338@ha
    psq_l f1, 0x0(r30), 0, 0
    extrwi r0, r31, 8, 16
    stw r0, 0x3c(r1)
    lfd f7, lbl_80756338@l(r4)
    clrlwi r5, r31, 24
    lfd f3, 0x30(r1)
    srwi r0, r31, 24
    lfd f0, 0x38(r1)
    li r4, 0x0
    stw r5, 0x34(r1)
    fsubs f5, f3, f7
    lfs f6, lbl_80887010
    fsubs f4, f0, f7
    stw r0, 0x3c(r1)
    mr r31, r3
    lfd f3, 0x30(r1)
    fmuls f5, f6, f5
    lfd f0, 0x38(r1)
    fsubs f3, f3, f7
    psq_st f1, 0x14(r3), 0, 0
    lfs f2, 0x8(r30)
    fmuls f4, f6, f4
    stfs f2, 0x1c(r3)
    fsubs f0, f0, f7
    fmuls f3, f6, f3
    stfs f5, 0x34(r3)
    fmuls f0, f6, f0
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
    lbz r0, lbl_8087F4C0
    stfs f5, 0x8(r1)
    extsb. r0, r0
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    stw r4, 0x18(r1)
    bne lbl_fn_804846FC_000011BC
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_804846FC_000011BC:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_804846FC_000011E0
    addi r3, r1, 0x1c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804846FC_000011E0:
    lis r0, fn_80482D90@ha
    addic. r0, r0, 11664
    beq lbl_fn_804846FC_000011F8
    stw r0, 0x1c(r1)
    li r0, 0x1
    b lbl_fn_804846FC_000011FC
lbl_fn_804846FC_000011F8:
    li r0, 0x0
lbl_fn_804846FC_000011FC:
    cmpwi r0, 0x0
    beq lbl_fn_804846FC_00001214
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x18(r1)
    b lbl_fn_804846FC_0000121C
lbl_fn_804846FC_00001214:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_804846FC_0000121C:
    lwz r3, lbl_8087F558
    mr r5, r31
    addi r4, r1, 0x18
    bl fn_80491528
    addic. r3, r1, 0x18
    beq lbl_fn_804846FC_00001268
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804846FC_00001268
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804846FC_00001260
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804846FC_00001260:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_804846FC_00001268:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804848C4(void)
{
    nofralloc
    lwz r3, 0x2fc(r3)
    li r4, 0x0
    b fn_800C2448
}

asm void fn_804848D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r4, lbl_8087F540
    lwz r0, 0x1a64(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804848D0_000012B4
    b lbl_fn_804848D0_000012C4
lbl_fn_804848D0_000012B4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804848D0_000012C4
    bl fn_80373148
lbl_fn_804848D0_000012C4:
    lwz r5, lbl_8087F540
    addi r4, r1, 0x8
    lfs f0, lbl_80886FB0
    addi r6, r1, 0x18
    lwz r0, 0x1a38(r5)
    stfs f0, 0x24(r1)
    mulli r0, r0, 0x65c
    lwz r3, lbl_8087F558
    add r5, r5, r0
    psq_l f1, 0xdc(r5), 0, 0
    lfs f2, 0xe4(r5)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x20(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_804918A4
    cmpwi r3, 0x0
    beq lbl_fn_804848D0_00001398
    li r4, 0x0
    addi r3, r3, 0x4c
    bl fn_800C2448
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r31)
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    stfs f2, 0x10(r31)
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    lfs f2, 0x1c(r3)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    lwz r0, 0x20(r3)
    stw r0, 0x20(r31)
    lfs f0, 0x24(r3)
    stfs f0, 0x24(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x28(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r31)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x34(r31)
    lfs f0, 0x38(r3)
    stfs f0, 0x38(r31)
    lfs f0, 0x3c(r3)
    stfs f0, 0x3c(r31)
    lfs f0, 0x40(r3)
    stfs f0, 0x40(r31)
    b lbl_fn_804848D0_00001420
lbl_fn_804848D0_00001398:
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    lwz r3, 0x2fc(r3)
    bl fn_800C2448
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r31)
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    stfs f2, 0x10(r31)
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    lfs f2, 0x1c(r3)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    lwz r0, 0x20(r3)
    stw r0, 0x20(r31)
    lfs f0, 0x24(r3)
    stfs f0, 0x24(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x28(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x2c(r31)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x34(r31)
    lfs f0, 0x38(r3)
    stfs f0, 0x38(r31)
    lfs f0, 0x3c(r3)
    stfs f0, 0x3c(r31)
    lfs f0, 0x40(r3)
    stfs f0, 0x40(r31)
lbl_fn_804848D0_00001420:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80484A78(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, 0x4330
    extrwi r3, r4, 8, 8
    stw r3, 0x34(r1)
    lis r7, lbl_80756338@ha
    extrwi r6, r4, 8, 16
    clrlwi r5, r4, 24
    stw r8, 0x30(r1)
    srwi r4, r4, 24
    lfd f5, lbl_80756338@l(r7)
    li r3, 0x0
    lfd f0, 0x30(r1)
    stw r8, 0x38(r1)
    fsubs f1, f0, f5
    lfs f4, lbl_80887010
    stw r5, 0x34(r1)
    stw r6, 0x3c(r1)
    fmuls f3, f4, f1
    lfd f0, 0x30(r1)
    lfd f2, 0x38(r1)
    fsubs f0, f0, f5
    stw r0, 0x44(r1)
    fsubs f2, f2, f5
    stw r4, 0x3c(r1)
    fmuls f1, f4, f0
    lbz r0, lbl_8087F4C0
    lfd f0, 0x38(r1)
    fmuls f2, f4, f2
    extsb. r0, r0
    stfs f3, 0x8(r1)
    fsubs f0, f0, f5
    stfs f1, 0x10(r1)
    stfs f2, 0xc(r1)
    fmuls f0, f4, f0
    stw r3, 0x18(r1)
    stfs f0, 0x14(r1)
    bne lbl_fn_80484A78_000014F4
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80484A78_000014F4:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80484A78_00001518
    addi r3, r1, 0x1c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80484A78_00001518:
    lis r0, fn_80482EB4@ha
    addic. r0, r0, 11956
    beq lbl_fn_80484A78_00001530
    stw r0, 0x1c(r1)
    li r0, 0x1
    b lbl_fn_80484A78_00001534
lbl_fn_80484A78_00001530:
    li r0, 0x0
lbl_fn_80484A78_00001534:
    cmpwi r0, 0x0
    beq lbl_fn_80484A78_0000154C
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x18(r1)
    b lbl_fn_80484A78_00001554
lbl_fn_80484A78_0000154C:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80484A78_00001554:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x18
    addi r5, r1, 0x8
    bl fn_80491528
    addic. r3, r1, 0x18
    beq lbl_fn_80484A78_000015A0
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80484A78_000015A0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80484A78_00001598
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80484A78_00001598:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_80484A78_000015A0:
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80484BF4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    addic. r0, r31, 0x1eb8
    li r4, 0x0
    stw r0, 0x74(r3)
    bne lbl_fn_80484BF4_000015E8
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80484BF4_000015EC
lbl_fn_80484BF4_000015E8:
    li r4, 0x1
lbl_fn_80484BF4_000015EC:
    stw r4, 0x70(r3)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r0, -0x1
    stw r0, 0xc8(r3)
    li r3, 0x0
    lbz r0, lbl_8087F4C0
    stw r3, 0x8(r1)
    extsb. r0, r0
    bne lbl_fn_80484BF4_0000163C
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80484BF4_0000163C:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80484BF4_00001660
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80484BF4_00001660:
    lis r0, fn_80482B24@ha
    addic. r0, r0, 11044
    beq lbl_fn_80484BF4_00001678
    stw r0, 0xc(r1)
    li r0, 0x1
    b lbl_fn_80484BF4_0000167C
lbl_fn_80484BF4_00001678:
    li r0, 0x0
lbl_fn_80484BF4_0000167C:
    cmpwi r0, 0x0
    beq lbl_fn_80484BF4_00001694
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x8(r1)
    b lbl_fn_80484BF4_0000169C
lbl_fn_80484BF4_00001694:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80484BF4_0000169C:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x8
    addi r5, r31, 0x1eb8
    bl fn_80491528
    addic. r3, r1, 0x8
    beq lbl_fn_80484BF4_000016E8
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80484BF4_000016E8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80484BF4_000016E0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80484BF4_000016E0:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80484BF4_000016E8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80484D40(void)
{
    nofralloc
    stfs f1, 0x1f08(r3)
    addi r6, r3, 0x1ec4
    lfs f0, 0x0(r5)
    stfs f0, 0x1ebc(r3)
    lfs f0, 0x4(r5)
    stfs f0, 0x1ec0(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    blr
}

asm void fn_80484D64(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f0, 0x0(r5)
    stfs f0, 0x1ebc(r3)
    lwz r0, 0x1f0c(r3)
    lfs f0, 0x4(r5)
    cmpwi r0, 0x0
    stfs f0, 0x1ec0(r3)
    beq lbl_fn_80484D64_000017A0
    lfs f4, 0x1ec4(r3)
    lfs f0, 0x0(r4)
    fcmpo cr0, f4, f0
    bge lbl_fn_80484D64_00001790
    lfs f3, 0x1ec8(r3)
    lfs f0, 0x4(r4)
    fcmpo cr0, f3, f0
    bge lbl_fn_80484D64_00001790
    lfs f5, 0x1f08(r3)
    lfs f2, 0x4(r4)
    lfs f0, 0x0(r4)
    fmuls f2, f2, f5
    fmuls f5, f0, f5
    stfs f2, 0x1c(r1)
    fadds f0, f3, f2
    fadds f2, f4, f5
    stfs f5, 0x18(r1)
    stfs f2, 0x1ec4(r3)
    stfs f0, 0x1ec8(r3)
    b lbl_fn_80484D64_00001820
lbl_fn_80484D64_00001790:
    addi r3, r3, 0x1ec4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80484D64_00001820
lbl_fn_80484D64_000017A0:
    lfs f4, 0x1ec4(r3)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f4, f0
    ble lbl_fn_80484D64_000017EC
    lfs f3, 0x1ec8(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_80484D64_000017EC
    lfs f5, 0x1f08(r3)
    lfs f2, 0x4(r4)
    lfs f0, 0x0(r4)
    fmuls f2, f2, f5
    fmuls f5, f0, f5
    stfs f2, 0x14(r1)
    fsubs f0, f3, f2
    fsubs f2, f4, f5
    stfs f5, 0x10(r1)
    stfs f2, 0x1ec4(r3)
    stfs f0, 0x1ec8(r3)
    b lbl_fn_80484D64_00001820
lbl_fn_80484D64_000017EC:
    lfs f0, 0x4(r4)
    lfs f3, lbl_80886F8C
    lfs f2, 0x0(r4)
    fmuls f4, f0, f3
    lfs f0, 0x1ec8(r3)
    fmuls f3, f2, f3
    lfs f2, 0x1ec4(r3)
    stfs f4, 0xc(r1)
    fsubs f0, f0, f4
    fsubs f2, f2, f3
    stfs f3, 0x8(r1)
    stfs f2, 0x1ec4(r3)
    stfs f0, 0x1ec8(r3)
lbl_fn_80484D64_00001820:
    addi r1, r1, 0x20
    blr
}

asm void fn_80484E6C(void)
{
    nofralloc
    lfs f2, 0x4(r4)
    lfs f0, 0x0(r4)
    fmuls f2, f2, f1
    fmuls f0, f0, f1
    stfs f2, 0x4(r3)
    stfs f0, 0x0(r3)
    blr
}

asm void fn_80484E88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    li r4, 0x0
    stw r4, 0x74(r3)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80484E88_00001870
    li r4, 0x1
lbl_fn_80484E88_00001870:
    stw r4, 0x70(r3)
    lwz r0, lbl_8087F558
    cmpwi r0, 0x0
    beq lbl_fn_80484E88_00001968
    lbz r0, lbl_8087F4C0
    li r3, 0x0
    stw r3, 0x8(r1)
    extsb. r0, r0
    bne lbl_fn_80484E88_000018BC
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80484E88_000018BC:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80484E88_000018E0
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80484E88_000018E0:
    lis r0, fn_80482B24@ha
    addic. r0, r0, 11044
    beq lbl_fn_80484E88_000018F8
    stw r0, 0xc(r1)
    li r0, 0x1
    b lbl_fn_80484E88_000018FC
lbl_fn_80484E88_000018F8:
    li r0, 0x0
lbl_fn_80484E88_000018FC:
    cmpwi r0, 0x0
    beq lbl_fn_80484E88_00001914
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x8(r1)
    b lbl_fn_80484E88_0000191C
lbl_fn_80484E88_00001914:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80484E88_0000191C:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80491528
    addic. r3, r1, 0x8
    beq lbl_fn_80484E88_00001968
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80484E88_00001968
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80484E88_00001960
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80484E88_00001960:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80484E88_00001968:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80484FBC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r4, lbl_8087EEF8
    lwz r31, 0x4(r4)
    b lbl_fn_80484FBC_000019B4
lbl_fn_80484FBC_000019A4:
    lwz r3, lbl_8087EEF8
    li r4, 0x0
    bl fn_8007A154
    addi r30, r30, 0x1
lbl_fn_80484FBC_000019B4:
    cmpw r30, r31
    blt lbl_fn_80484FBC_000019A4
    lwz r0, 0x1f14(r29)
    subf r0, r0, r0
    stw r0, 0x1f14(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80485028(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x120
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    bl _savegpr_26
    lwz r7, 0x1f14(r3)
    lis r0, 0x4330
    mr r28, r5
    mr r27, r3
    mr r26, r4
    fmr f31, f1
    mr r29, r6
    stw r0, 0xf8(r1)
    li r30, 0x0
    li r5, 0x0
    stw r0, 0x100(r1)
    mtctr r7
    cmpwi r7, 0x0
    ble lbl_fn_80485028_00001A9C
lbl_fn_80485028_00001A38:
    lwz r6, 0x1f10(r3)
    lwzx r0, r6, r5
    cmpw r4, r0
    bne lbl_fn_80485028_00001A90
    lwz r0, 0x1f14(r3)
    add r3, r6, r5
    addi r4, r3, 0x4
    slwi r0, r0, 2
    add r0, r6, r0
    subf r0, r3, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x1f14(r27)
    mr r4, r30
    subi r0, r3, 0x1
    stw r0, 0x1f14(r27)
    lwz r3, lbl_8087EEF8
    bl fn_8007A154
    b lbl_fn_80485028_00001A9C
lbl_fn_80485028_00001A90:
    addi r30, r30, 0x1
    addi r5, r5, 0x4
    bdnz lbl_fn_80485028_00001A38
lbl_fn_80485028_00001A9C:
    lwz r3, 0x1f14(r27)
    lwz r30, 0x1f18(r27)
    cmplw r3, r30
    bge lbl_fn_80485028_00001AC8
    addi r3, r3, 0x1
    stw r3, 0x1f14(r27)
    subi r0, r3, 0x1
    lwz r3, 0x1f10(r27)
    slwi r0, r0, 2
    stwx r26, r3, r0
    b lbl_fn_80485028_00001DA4
lbl_fn_80485028_00001AC8:
    lis r3, 0x4000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x34(r1)
    subf r0, r30, r0
    cmplwi r0, 0x1
    bge lbl_fn_80485028_00001B08
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485028_00001B08:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r30, r0
    bge lbl_fn_80485028_00001B40
    addi r4, r30, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x2c(r1)
    cmplwi r0, 0x1
    b lbl_fn_80485028_00001B60
lbl_fn_80485028_00001B40:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r30, r0
    bge lbl_fn_80485028_00001B60
    addi r0, r30, 0x1
    srwi r0, r0, 1
    stw r0, 0x30(r1)
    cmplwi r0, 0x1
lbl_fn_80485028_00001B60:
    li r4, 0x0
    addi r5, r27, 0x1f18
    lis r3, 0x4000
    stw r4, 0x5c(r1)
    subi r0, r3, 0x1
    stw r4, 0x60(r1)
    stw r4, 0x64(r1)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    lwz r3, 0x1f14(r27)
    lwz r31, 0x1f18(r27)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x20(r1)
    ble lbl_fn_80485028_00001BC8
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485028_00001BC8:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80485028_00001C18
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x20(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_80485028_00001C0C
    addi r3, r1, 0x20
lbl_fn_80485028_00001C0C:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80485028_00001C5C
lbl_fn_80485028_00001C18:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80485028_00001C54
    addi r3, r31, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_80485028_00001C48
    addi r3, r1, 0x20
lbl_fn_80485028_00001C48:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80485028_00001C5C
lbl_fn_80485028_00001C54:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_80485028_00001C5C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80485028_00001C90
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485028_00001C90:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80485028_00001CC4
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485028_00001CC4:
    lwz r0, 0x60(r1)
    stw r30, 0x5c(r1)
    slwi r3, r0, 2
    stw r31, 0x64(r1)
    lwz r0, 0x1f14(r27)
    stw r0, 0x6c(r1)
    slwi r0, r0, 2
    add r4, r30, r0
    stwx r26, r4, r3
    lwz r3, 0x60(r1)
    lwz r0, 0x6c(r1)
    addi r3, r3, 0x1
    stw r3, 0x60(r1)
    lwz r3, 0x5c(r1)
    lwz r4, 0x1f14(r27)
    lwz r30, 0x1f10(r27)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r26, r5
    subf r0, r26, r0
    stw r0, 0x6c(r1)
    slwi r31, r26, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x60(r1)
    li r4, 0x0
    addic. r3, r1, 0x5c
    add r0, r0, r26
    stw r0, 0x60(r1)
    stw r4, 0x1f14(r27)
    lwz r3, 0x1f18(r27)
    lwz r0, 0x64(r1)
    stw r0, 0x1f18(r27)
    stw r3, 0x64(r1)
    lwz r0, 0x5c(r1)
    lwz r3, 0x1f10(r27)
    stw r0, 0x1f10(r27)
    stw r3, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r0, 0x1f14(r27)
    stw r4, 0x60(r1)
    beq lbl_fn_80485028_00001DA4
    lwz r3, 0x5c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80485028_00001DA4
    stw r4, 0x60(r1)
    bl dtor_80084684
lbl_fn_80485028_00001DA4:
    addi r3, r1, 0xb4
    bl fn_80079044
    extrwi r0, r29, 8, 8
    stw r0, 0xfc(r1)
    extrwi r0, r29, 8, 16
    lis r5, lbl_80756338@ha
    stw r0, 0x104(r1)
    clrlwi r3, r29, 24
    lfd f0, 0xf8(r1)
    srwi r0, r29, 24
    lfd f7, lbl_80756338@l(r5)
    fmr f1, f31
    lfd f4, 0x100(r1)
    mr r4, r28
    stw r3, 0xfc(r1)
    fsubs f5, f0, f7
    lfs f6, lbl_80887010
    stw r0, 0x104(r1)
    fsubs f4, f4, f7
    lfd f3, 0xf8(r1)
    fmuls f5, f6, f5
    lfd f0, 0x100(r1)
    addi r3, r1, 0xb4
    fsubs f3, f3, f7
    fsubs f0, f0, f7
    stfs f5, 0x38(r1)
    fmuls f4, f6, f4
    addi r5, r1, 0x38
    fmuls f3, f6, f3
    fmuls f0, f6, f0
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_800791B4
    lwz r30, lbl_8087EEF8
    addi r4, r1, 0xbc
    lfs f2, 0xc4(r1)
    addi r8, r1, 0x78
    lwz r9, 0x4(r30)
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r1, 0x84
    lwz r0, 0x8(r30)
    psq_st f1, 0x0(r8), 0, 0
    lwz r6, 0xb4(r1)
    cmplw r9, r0
    stfs f2, 0x80(r1)
    lwz r5, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0xd0(r1)
    lwz r4, 0xd4(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xdc(r1)
    lfs f7, 0xe0(r1)
    lfs f6, 0xe4(r1)
    lfs f5, 0xe8(r1)
    lfs f4, 0xec(r1)
    lfs f3, 0xf0(r1)
    lfs f0, 0xf4(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8c(r1)
    stw r4, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f8, 0x98(r1)
    stfs f7, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f5, 0xa4(r1)
    stfs f4, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f0, 0xb0(r1)
    bge lbl_fn_80485028_00001F34
    mulli r0, r9, 0x44
    lwz r3, 0x0(r30)
    add. r3, r3, r0
    beq lbl_fn_80485028_00001F24
    stw r6, 0x0(r3)
    psq_l f1, 0x0(r8), 0, 0
    stw r5, 0x4(r3)
    lfs f2, 0x80(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8c(r1)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r4, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
lbl_fn_80485028_00001F24:
    lwz r3, 0x4(r30)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_80485028_00002300
lbl_fn_80485028_00001F34:
    li r0, 0x1
    stw r0, 0x1c(r1)
    lis r3, 0x3c4
    lwz r26, 0x8(r30)
    subi r0, r3, 0x3c3d
    subf r0, r26, r0
    cmplwi r0, 0x1
    bge lbl_fn_80485028_00001F78
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485028_00001F78:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r26, r0
    bge lbl_fn_80485028_00001FB0
    addi r4, r26, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_80485028_00001FD0
lbl_fn_80485028_00001FB0:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r26, r0
    bge lbl_fn_80485028_00001FD0
    addi r0, r26, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_80485028_00001FD0:
    lwz r4, 0x4(r30)
    li r6, 0x0
    lwz r5, 0x8(r30)
    addi r7, r30, 0x8
    addi r0, r4, 0x1
    lis r3, 0x3c4
    subf r4, r5, r0
    stw r4, 0x8(r1)
    subi r0, r3, 0x3c3d
    lwz r31, 0x8(r30)
    stw r6, 0x48(r1)
    subf r0, r31, r0
    cmplw r4, r0
    stw r6, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    ble lbl_fn_80485028_0000203C
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485028_0000203C:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r31, r0
    bge lbl_fn_80485028_0000208C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80485028_00002080
    addi r3, r1, 0x8
lbl_fn_80485028_00002080:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_80485028_000020D0
lbl_fn_80485028_0000208C:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r31, r0
    bge lbl_fn_80485028_000020C8
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80485028_000020BC
    addi r3, r1, 0x8
lbl_fn_80485028_000020BC:
    lwz r0, 0x0(r3)
    add r27, r31, r0
    b lbl_fn_80485028_000020D0
lbl_fn_80485028_000020C8:
    lis r3, 0x3c4
    subi r27, r3, 0x3c3d
lbl_fn_80485028_000020D0:
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r27, r0
    ble lbl_fn_80485028_00002104
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485028_00002104:
    mulli r3, r27, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80485028_00002138
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80485028_00002138:
    lwz r5, 0x4(r30)
    addi r7, r1, 0x78
    lwz r0, 0x4c(r1)
    addi r6, r1, 0x84
    mulli r4, r5, 0x44
    stw r26, 0x48(r1)
    stw r27, 0x50(r1)
    mulli r3, r0, 0x44
    add r0, r26, r4
    stw r5, 0x58(r1)
    add. r3, r3, r0
    beq lbl_fn_80485028_000021E0
    lwz r0, 0x70(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x74(r1)
    stw r0, 0x4(r3)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    lfs f2, 0x80(r1)
    stfs f2, 0x10(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    lfs f2, 0x8c(r1)
    stfs f2, 0x1c(r3)
    lwz r0, 0x90(r1)
    stw r0, 0x20(r3)
    lfs f0, 0x94(r1)
    stfs f0, 0x24(r3)
    lfs f0, 0x98(r1)
    stfs f0, 0x28(r3)
    lfs f0, 0x9c(r1)
    stfs f0, 0x2c(r3)
    lfs f0, 0xa0(r1)
    stfs f0, 0x30(r3)
    lfs f0, 0xa4(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0xa8(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0xac(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0xb0(r1)
    stfs f0, 0x40(r3)
lbl_fn_80485028_000021E0:
    lwz r3, 0x4(r30)
    lwz r0, 0x58(r1)
    lwz r5, 0x4c(r1)
    mulli r4, r3, 0x44
    lwz r7, 0x0(r30)
    addi r5, r5, 0x1
    stw r5, 0x4c(r1)
    mulli r0, r0, 0x44
    lwz r3, 0x48(r1)
    add r5, r7, r4
    add r6, r3, r0
    b lbl_fn_80485028_000022AC
lbl_fn_80485028_00002210:
    subic. r6, r6, 0x44
    subi r5, r5, 0x44
    beq lbl_fn_80485028_00002294
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r6)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r5)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r5)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r5)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r5)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r5)
    stfs f0, 0x38(r6)
    lfs f0, 0x3c(r5)
    stfs f0, 0x3c(r6)
    lfs f0, 0x40(r5)
    stfs f0, 0x40(r6)
lbl_fn_80485028_00002294:
    lwz r4, 0x58(r1)
    lwz r3, 0x4c(r1)
    subi r0, r4, 0x1
    stw r0, 0x58(r1)
    addi r0, r3, 0x1
    stw r0, 0x4c(r1)
lbl_fn_80485028_000022AC:
    cmplw r7, r5
    blt lbl_fn_80485028_00002210
    li r5, 0x0
    stw r5, 0x4(r30)
    addic. r0, r1, 0x48
    lwz r0, 0x4c(r1)
    lwz r6, 0x8(r30)
    lwz r3, 0x50(r1)
    stw r3, 0x8(r30)
    lwz r4, 0x48(r1)
    lwz r3, 0x0(r30)
    stw r6, 0x50(r1)
    stw r4, 0x0(r30)
    stw r3, 0x48(r1)
    stw r0, 0x4(r30)
    stw r5, 0x4c(r1)
    beq lbl_fn_80485028_00002300
    cmpwi r3, 0x0
    beq lbl_fn_80485028_00002300
    stw r5, 0x4c(r1)
    bl dtor_80084684
lbl_fn_80485028_00002300:
    addi r11, r1, 0x120
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    bl _restgpr_26
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
