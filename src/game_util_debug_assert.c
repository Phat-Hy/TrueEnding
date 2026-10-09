#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_22(void);
extern void _savegpr_14(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_801F4AA0(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801F6C80(void);
extern void fn_801F6E78(void);
extern void fn_801F7DF0(void);
extern void fn_801F837C(void);
extern void fn_801FECE0(void);
extern void fn_801FEE08(void);
extern void fn_80206B9C(void);
extern void fn_80206C50(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF4C(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_80211770(void);
extern void fn_80212840(void);
extern void fn_80212C34(void);
extern void fn_8021C6A4(void);
extern void fn_80370174(void);
extern void fn_804444E8(void);
extern void fn_804A3C24(void);
extern void fn_804A4CE4(void);
extern void fn_804A7DD4(void);
extern void fn_80584754(void);
extern void fn_80598534(void);
extern void fn_80680770(void);
extern void fn_80686AF0(void);
extern void fn_80686CF8(void);
extern void fn_80686EA4(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80761C90[];
extern u8 lbl_80761D5C[];
extern u8 lbl_80796AB0[];
extern u8 lbl_80796ACC[];
extern u8 lbl_807C7898[];
extern u8 lbl_807C78A8[];
extern u8 lbl_807C78C8[];

/* Small data declarations */
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_80888150;
extern u32 lbl_80888154;
extern u32 lbl_80888160;
extern u32 lbl_80888164;
extern u32 lbl_80888168;
extern u32 lbl_8088816C;
extern u32 lbl_80888170;

/* Function declarations */
void fn_80595F7C(void);
void fn_805969D8(void);
void fn_8059709C(void);
void fn_80597168(void);
void fn_8059726C(void);
void fn_80597558(void);

asm void fn_80595F7C(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x1c0
    bl _savegpr_14
    lwz r16, 0x0(r5)
    mr r28, r3
    lwz r15, 0x0(r3)
    mr r29, r4
    lwz r3, 0x0(r16)
    mr r30, r5
    bl fn_80206C50
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r14, 0x0
    beq lbl_fn_80595F7C_00000054
    cmpwi r3, 0x0
    bne lbl_fn_80595F7C_00000054
    li r0, 0x1
    b lbl_fn_80595F7C_0000011C
lbl_fn_80595F7C_00000054:
    cmpwi r14, 0x0
    bne lbl_fn_80595F7C_0000006C
    cmpwi r3, 0x0
    beq lbl_fn_80595F7C_0000006C
    li r0, 0x0
    b lbl_fn_80595F7C_0000011C
lbl_fn_80595F7C_0000006C:
    lwz r4, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_80595F7C_000000C4
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80595F7C_000000AC
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80595F7C_000000AC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80595F7C_0000011C
lbl_fn_80595F7C_000000AC:
    cmpwi r0, 0x0
    blt lbl_fn_80595F7C_000000BC
    li r0, 0x1
    b lbl_fn_80595F7C_0000011C
lbl_fn_80595F7C_000000BC:
    li r0, 0x0
    b lbl_fn_80595F7C_0000011C
lbl_fn_80595F7C_000000C4:
    lfs f2, 0x0(r14)
    lfs f1, 0x0(r3)
    lfs f0, lbl_80888160
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80595F7C_00000110
    mr r3, r4
    bl fn_80211480
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r14)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_80595F7C_0000011C
lbl_fn_80595F7C_00000110:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80595F7C_0000011C:
    lwz r16, 0x0(r29)
    cntlzw r0, r0
    lwz r15, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x0(r16)
    bl fn_80206C50
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r14, 0x0
    beq lbl_fn_80595F7C_00000158
    cmpwi r3, 0x0
    bne lbl_fn_80595F7C_00000158
    li r0, 0x1
    b lbl_fn_80595F7C_00000220
lbl_fn_80595F7C_00000158:
    cmpwi r14, 0x0
    bne lbl_fn_80595F7C_00000170
    cmpwi r3, 0x0
    beq lbl_fn_80595F7C_00000170
    li r0, 0x0
    b lbl_fn_80595F7C_00000220
lbl_fn_80595F7C_00000170:
    lwz r4, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_80595F7C_000001C8
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80595F7C_000001B0
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80595F7C_000001B0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80595F7C_00000220
lbl_fn_80595F7C_000001B0:
    cmpwi r0, 0x0
    blt lbl_fn_80595F7C_000001C0
    li r0, 0x1
    b lbl_fn_80595F7C_00000220
lbl_fn_80595F7C_000001C0:
    li r0, 0x0
    b lbl_fn_80595F7C_00000220
lbl_fn_80595F7C_000001C8:
    lfs f2, 0x0(r14)
    lfs f1, 0x0(r3)
    lfs f0, lbl_80888160
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80595F7C_00000214
    mr r3, r4
    bl fn_80211480
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r14)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_80595F7C_00000220
lbl_fn_80595F7C_00000214:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80595F7C_00000220:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_80595F7C_00000238
    cmpwi r0, 0x0
    bne lbl_fn_80595F7C_00000A44
lbl_fn_80595F7C_00000238:
    cmpwi r31, 0x0
    bne lbl_fn_80595F7C_00000404
    cmpwi r0, 0x0
    bne lbl_fn_80595F7C_00000404
    lwz r24, 0x0(r28)
    lwz r23, 0x0(r29)
    lwz r22, 0x8(r24)
    lwz r21, 0xc(r24)
    lwz r20, 0x10(r24)
    lwz r19, 0x14(r24)
    lwz r18, 0x18(r24)
    lwz r17, 0x1c(r24)
    lwz r16, 0x20(r24)
    lwz r15, 0x24(r24)
    lwz r14, 0x28(r24)
    lwz r12, 0x2c(r24)
    lwz r11, 0x30(r24)
    lwz r10, 0x34(r24)
    lwz r9, 0x38(r24)
    lwz r8, 0x3c(r24)
    lwz r7, 0x40(r24)
    lwz r6, 0x44(r24)
    lwz r5, 0x48(r24)
    lwz r4, 0x4c(r24)
    lwz r3, 0x50(r24)
    lwz r0, 0x54(r24)
    lwz r25, 0x0(r24)
    lwz r26, 0x4(r24)
    lwz r27, 0x0(r23)
    stw r27, 0x0(r24)
    lwz r27, 0x4(r23)
    stw r27, 0x4(r24)
    lwz r27, 0xc(r23)
    lwz r28, 0x8(r23)
    stw r28, 0x8(r24)
    stw r27, 0xc(r24)
    lwz r27, 0x14(r23)
    lwz r28, 0x10(r23)
    stw r28, 0x10(r24)
    stw r27, 0x14(r24)
    lwz r27, 0x1c(r23)
    lwz r28, 0x18(r23)
    stw r28, 0x18(r24)
    stw r27, 0x1c(r24)
    lwz r27, 0x24(r23)
    lwz r28, 0x20(r23)
    stw r28, 0x20(r24)
    stw r27, 0x24(r24)
    lwz r27, 0x2c(r23)
    lwz r28, 0x28(r23)
    stw r28, 0x28(r24)
    stw r27, 0x2c(r24)
    lwz r27, 0x34(r23)
    lwz r28, 0x30(r23)
    stw r28, 0x30(r24)
    stw r27, 0x34(r24)
    lwz r27, 0x3c(r23)
    lwz r28, 0x38(r23)
    stw r28, 0x38(r24)
    stw r27, 0x3c(r24)
    lwz r27, 0x44(r23)
    lwz r28, 0x40(r23)
    stw r28, 0x40(r24)
    stw r27, 0x44(r24)
    lwz r27, 0x48(r23)
    stw r27, 0x48(r24)
    lwz r27, 0x4c(r23)
    stw r27, 0x4c(r24)
    lwz r27, 0x50(r23)
    stw r27, 0x50(r24)
    lwz r27, 0x54(r23)
    stw r27, 0x54(r24)
    stw r25, 0x0(r23)
    stw r26, 0x4(r23)
    stw r22, 0x8(r23)
    stw r21, 0xc(r23)
    stw r20, 0x10(r23)
    stw r19, 0x14(r23)
    stw r18, 0x18(r23)
    stw r17, 0x1c(r23)
    stw r16, 0x20(r23)
    stw r15, 0x24(r23)
    stw r14, 0x28(r23)
    stw r12, 0x2c(r23)
    stw r11, 0x30(r23)
    stw r10, 0x34(r23)
    stw r9, 0x38(r23)
    stw r8, 0x3c(r23)
    stw r7, 0x40(r23)
    stw r22, 0x118(r1)
    stw r21, 0x11c(r1)
    stw r20, 0x120(r1)
    stw r19, 0x124(r1)
    stw r18, 0x128(r1)
    stw r17, 0x12c(r1)
    stw r16, 0x130(r1)
    stw r15, 0x134(r1)
    stw r14, 0x138(r1)
    stw r12, 0x13c(r1)
    stw r11, 0x140(r1)
    stw r10, 0x144(r1)
    stw r9, 0x148(r1)
    stw r8, 0x14c(r1)
    stw r7, 0x150(r1)
    stw r6, 0x154(r1)
    stw r5, 0x158(r1)
    stw r4, 0x15c(r1)
    stw r3, 0x160(r1)
    stw r0, 0x164(r1)
    stw r6, 0x44(r23)
    stw r5, 0x48(r23)
    stw r4, 0x4c(r23)
    stw r3, 0x50(r23)
    stw r0, 0x54(r23)
    b lbl_fn_80595F7C_00000A44
lbl_fn_80595F7C_00000404:
    lwz r16, 0x0(r29)
    lwz r15, 0x0(r28)
    lwz r3, 0x0(r16)
    bl fn_80206C50
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80206C50
    cmpwi r14, 0x0
    beq lbl_fn_80595F7C_00000438
    cmpwi r3, 0x0
    bne lbl_fn_80595F7C_00000438
    li r0, 0x1
    b lbl_fn_80595F7C_00000500
lbl_fn_80595F7C_00000438:
    cmpwi r14, 0x0
    bne lbl_fn_80595F7C_00000450
    cmpwi r3, 0x0
    beq lbl_fn_80595F7C_00000450
    li r0, 0x0
    b lbl_fn_80595F7C_00000500
lbl_fn_80595F7C_00000450:
    lwz r4, 0x0(r16)
    lwz r0, 0x0(r15)
    cmpw r4, r0
    bne lbl_fn_80595F7C_000004A8
    lwz r0, 0x50(r16)
    cmpwi r0, 0x0
    blt lbl_fn_80595F7C_00000490
    lwz r4, 0x50(r15)
    cmpwi r4, 0x0
    blt lbl_fn_80595F7C_00000490
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_80595F7C_00000500
lbl_fn_80595F7C_00000490:
    cmpwi r0, 0x0
    blt lbl_fn_80595F7C_000004A0
    li r0, 0x1
    b lbl_fn_80595F7C_00000500
lbl_fn_80595F7C_000004A0:
    li r0, 0x0
    b lbl_fn_80595F7C_00000500
lbl_fn_80595F7C_000004A8:
    lfs f2, 0x0(r14)
    lfs f1, 0x0(r3)
    lfs f0, lbl_80888160
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80595F7C_000004F4
    mr r3, r4
    bl fn_80211480
    mr r14, r3
    lwz r3, 0x0(r15)
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r14)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_80595F7C_00000500
lbl_fn_80595F7C_000004F4:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_80595F7C_00000500:
    cmpwi r0, 0x0
    beq lbl_fn_80595F7C_000006C8
    lwz r17, 0x0(r28)
    lwz r18, 0x0(r29)
    lwz r14, 0x0(r17)
    lwz r19, 0x8(r17)
    lwz r20, 0xc(r17)
    lwz r21, 0x10(r17)
    lwz r22, 0x14(r17)
    lwz r23, 0x18(r17)
    lwz r24, 0x1c(r17)
    lwz r25, 0x20(r17)
    lwz r26, 0x24(r17)
    lwz r27, 0x28(r17)
    lwz r12, 0x2c(r17)
    lwz r11, 0x30(r17)
    lwz r10, 0x34(r17)
    lwz r9, 0x38(r17)
    lwz r8, 0x3c(r17)
    lwz r7, 0x40(r17)
    lwz r6, 0x44(r17)
    lwz r5, 0x48(r17)
    lwz r4, 0x4c(r17)
    lwz r3, 0x50(r17)
    lwz r0, 0x54(r17)
    stw r14, 0x168(r1)
    lwz r14, 0x4(r17)
    lwz r15, 0x0(r18)
    stw r15, 0x0(r17)
    lwz r15, 0x4(r18)
    stw r15, 0x4(r17)
    lwz r15, 0xc(r18)
    lwz r16, 0x8(r18)
    stw r16, 0x8(r17)
    stw r15, 0xc(r17)
    lwz r15, 0x14(r18)
    lwz r16, 0x10(r18)
    stw r16, 0x10(r17)
    stw r15, 0x14(r17)
    lwz r15, 0x1c(r18)
    lwz r16, 0x18(r18)
    stw r16, 0x18(r17)
    stw r15, 0x1c(r17)
    lwz r15, 0x24(r18)
    lwz r16, 0x20(r18)
    stw r16, 0x20(r17)
    stw r15, 0x24(r17)
    lwz r15, 0x2c(r18)
    lwz r16, 0x28(r18)
    stw r16, 0x28(r17)
    stw r15, 0x2c(r17)
    lwz r15, 0x34(r18)
    lwz r16, 0x30(r18)
    stw r16, 0x30(r17)
    stw r15, 0x34(r17)
    lwz r15, 0x3c(r18)
    lwz r16, 0x38(r18)
    stw r16, 0x38(r17)
    stw r15, 0x3c(r17)
    lwz r16, 0x44(r18)
    lwz r15, 0x40(r18)
    stw r15, 0x40(r17)
    stw r16, 0x44(r17)
    lwz r15, 0x48(r18)
    stw r15, 0x48(r17)
    lwz r15, 0x4c(r18)
    stw r15, 0x4c(r17)
    lwz r15, 0x50(r18)
    stw r15, 0x50(r17)
    lwz r15, 0x54(r18)
    stw r15, 0x54(r17)
    lwz r15, 0x168(r1)
    stw r15, 0x0(r18)
    stw r14, 0x4(r18)
    stw r19, 0x8(r18)
    stw r20, 0xc(r18)
    stw r21, 0x10(r18)
    stw r22, 0x14(r18)
    stw r23, 0x18(r18)
    stw r24, 0x1c(r18)
    stw r25, 0x20(r18)
    stw r26, 0x24(r18)
    stw r27, 0x28(r18)
    stw r12, 0x2c(r18)
    stw r11, 0x30(r18)
    stw r10, 0x34(r18)
    stw r9, 0x38(r18)
    stw r8, 0x3c(r18)
    stw r7, 0x40(r18)
    stw r19, 0xc0(r1)
    stw r20, 0xc4(r1)
    stw r21, 0xc8(r1)
    stw r22, 0xcc(r1)
    stw r23, 0xd0(r1)
    stw r24, 0xd4(r1)
    stw r25, 0xd8(r1)
    stw r26, 0xdc(r1)
    stw r27, 0xe0(r1)
    stw r12, 0xe4(r1)
    stw r11, 0xe8(r1)
    stw r10, 0xec(r1)
    stw r9, 0xf0(r1)
    stw r8, 0xf4(r1)
    stw r7, 0xf8(r1)
    stw r6, 0xfc(r1)
    stw r5, 0x100(r1)
    stw r4, 0x104(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    stw r6, 0x44(r18)
    stw r5, 0x48(r18)
    stw r4, 0x4c(r18)
    stw r3, 0x50(r18)
    stw r0, 0x54(r18)
lbl_fn_80595F7C_000006C8:
    cmpwi r31, 0x0
    beq lbl_fn_80595F7C_0000088C
    lwz r24, 0x0(r29)
    lwz r23, 0x0(r30)
    lwz r22, 0x8(r24)
    lwz r21, 0xc(r24)
    lwz r20, 0x10(r24)
    lwz r19, 0x14(r24)
    lwz r18, 0x18(r24)
    lwz r17, 0x1c(r24)
    lwz r16, 0x20(r24)
    lwz r15, 0x24(r24)
    lwz r14, 0x28(r24)
    lwz r12, 0x2c(r24)
    lwz r11, 0x30(r24)
    lwz r10, 0x34(r24)
    lwz r9, 0x38(r24)
    lwz r8, 0x3c(r24)
    lwz r7, 0x40(r24)
    lwz r6, 0x44(r24)
    lwz r5, 0x48(r24)
    lwz r4, 0x4c(r24)
    lwz r3, 0x50(r24)
    lwz r0, 0x54(r24)
    lwz r25, 0x0(r24)
    lwz r26, 0x4(r24)
    lwz r27, 0x0(r23)
    stw r27, 0x0(r24)
    lwz r27, 0x4(r23)
    stw r27, 0x4(r24)
    lwz r27, 0xc(r23)
    lwz r28, 0x8(r23)
    stw r28, 0x8(r24)
    stw r27, 0xc(r24)
    lwz r27, 0x14(r23)
    lwz r28, 0x10(r23)
    stw r28, 0x10(r24)
    stw r27, 0x14(r24)
    lwz r27, 0x1c(r23)
    lwz r28, 0x18(r23)
    stw r28, 0x18(r24)
    stw r27, 0x1c(r24)
    lwz r27, 0x24(r23)
    lwz r28, 0x20(r23)
    stw r28, 0x20(r24)
    stw r27, 0x24(r24)
    lwz r27, 0x2c(r23)
    lwz r28, 0x28(r23)
    stw r28, 0x28(r24)
    stw r27, 0x2c(r24)
    lwz r27, 0x34(r23)
    lwz r28, 0x30(r23)
    stw r28, 0x30(r24)
    stw r27, 0x34(r24)
    lwz r27, 0x3c(r23)
    lwz r28, 0x38(r23)
    stw r28, 0x38(r24)
    stw r27, 0x3c(r24)
    lwz r27, 0x44(r23)
    lwz r28, 0x40(r23)
    stw r28, 0x40(r24)
    stw r27, 0x44(r24)
    lwz r27, 0x48(r23)
    stw r27, 0x48(r24)
    lwz r27, 0x4c(r23)
    stw r27, 0x4c(r24)
    lwz r27, 0x50(r23)
    stw r27, 0x50(r24)
    lwz r27, 0x54(r23)
    stw r27, 0x54(r24)
    stw r25, 0x0(r23)
    stw r26, 0x4(r23)
    stw r22, 0x8(r23)
    stw r21, 0xc(r23)
    stw r20, 0x10(r23)
    stw r19, 0x14(r23)
    stw r18, 0x18(r23)
    stw r17, 0x1c(r23)
    stw r16, 0x20(r23)
    stw r15, 0x24(r23)
    stw r14, 0x28(r23)
    stw r12, 0x2c(r23)
    stw r11, 0x30(r23)
    stw r10, 0x34(r23)
    stw r9, 0x38(r23)
    stw r8, 0x3c(r23)
    stw r7, 0x40(r23)
    stw r22, 0x68(r1)
    stw r21, 0x6c(r1)
    stw r20, 0x70(r1)
    stw r19, 0x74(r1)
    stw r18, 0x78(r1)
    stw r17, 0x7c(r1)
    stw r16, 0x80(r1)
    stw r15, 0x84(r1)
    stw r14, 0x88(r1)
    stw r12, 0x8c(r1)
    stw r11, 0x90(r1)
    stw r10, 0x94(r1)
    stw r9, 0x98(r1)
    stw r8, 0x9c(r1)
    stw r7, 0xa0(r1)
    stw r6, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    stw r6, 0x44(r23)
    stw r5, 0x48(r23)
    stw r4, 0x4c(r23)
    stw r3, 0x50(r23)
    stw r0, 0x54(r23)
    b lbl_fn_80595F7C_00000A44
lbl_fn_80595F7C_0000088C:
    lwz r24, 0x0(r28)
    lwz r23, 0x0(r30)
    lwz r22, 0x8(r24)
    lwz r21, 0xc(r24)
    lwz r20, 0x10(r24)
    lwz r19, 0x14(r24)
    lwz r18, 0x18(r24)
    lwz r17, 0x1c(r24)
    lwz r16, 0x20(r24)
    lwz r15, 0x24(r24)
    lwz r14, 0x28(r24)
    lwz r12, 0x2c(r24)
    lwz r11, 0x30(r24)
    lwz r10, 0x34(r24)
    lwz r9, 0x38(r24)
    lwz r8, 0x3c(r24)
    lwz r7, 0x40(r24)
    lwz r6, 0x44(r24)
    lwz r5, 0x48(r24)
    lwz r4, 0x4c(r24)
    lwz r3, 0x50(r24)
    lwz r0, 0x54(r24)
    lwz r25, 0x0(r24)
    lwz r26, 0x4(r24)
    lwz r27, 0x0(r23)
    stw r27, 0x0(r24)
    lwz r27, 0x4(r23)
    stw r27, 0x4(r24)
    lwz r27, 0xc(r23)
    lwz r28, 0x8(r23)
    stw r28, 0x8(r24)
    stw r27, 0xc(r24)
    lwz r27, 0x14(r23)
    lwz r28, 0x10(r23)
    stw r28, 0x10(r24)
    stw r27, 0x14(r24)
    lwz r27, 0x1c(r23)
    lwz r28, 0x18(r23)
    stw r28, 0x18(r24)
    stw r27, 0x1c(r24)
    lwz r27, 0x24(r23)
    lwz r28, 0x20(r23)
    stw r28, 0x20(r24)
    stw r27, 0x24(r24)
    lwz r27, 0x2c(r23)
    lwz r28, 0x28(r23)
    stw r28, 0x28(r24)
    stw r27, 0x2c(r24)
    lwz r27, 0x34(r23)
    lwz r28, 0x30(r23)
    stw r28, 0x30(r24)
    stw r27, 0x34(r24)
    lwz r27, 0x3c(r23)
    lwz r28, 0x38(r23)
    stw r28, 0x38(r24)
    stw r27, 0x3c(r24)
    lwz r27, 0x44(r23)
    lwz r28, 0x40(r23)
    stw r28, 0x40(r24)
    stw r27, 0x44(r24)
    lwz r27, 0x48(r23)
    stw r27, 0x48(r24)
    lwz r27, 0x4c(r23)
    stw r27, 0x4c(r24)
    lwz r27, 0x50(r23)
    stw r27, 0x50(r24)
    lwz r27, 0x54(r23)
    stw r27, 0x54(r24)
    stw r25, 0x0(r23)
    stw r26, 0x4(r23)
    stw r22, 0x8(r23)
    stw r21, 0xc(r23)
    stw r20, 0x10(r23)
    stw r19, 0x14(r23)
    stw r18, 0x18(r23)
    stw r17, 0x1c(r23)
    stw r16, 0x20(r23)
    stw r15, 0x24(r23)
    stw r14, 0x28(r23)
    stw r12, 0x2c(r23)
    stw r11, 0x30(r23)
    stw r10, 0x34(r23)
    stw r9, 0x38(r23)
    stw r8, 0x3c(r23)
    stw r7, 0x40(r23)
    stw r22, 0x10(r1)
    stw r21, 0x14(r1)
    stw r20, 0x18(r1)
    stw r19, 0x1c(r1)
    stw r18, 0x20(r1)
    stw r17, 0x24(r1)
    stw r16, 0x28(r1)
    stw r15, 0x2c(r1)
    stw r14, 0x30(r1)
    stw r12, 0x34(r1)
    stw r11, 0x38(r1)
    stw r10, 0x3c(r1)
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r6, 0x44(r23)
    stw r5, 0x48(r23)
    stw r4, 0x4c(r23)
    stw r3, 0x50(r23)
    stw r0, 0x54(r23)
lbl_fn_80595F7C_00000A44:
    addi r11, r1, 0x1c0
    bl _restgpr_14
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_805969D8(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r25, 0x84(r1)
    li r25, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    addi r3, r1, 0x30
    li r4, 0x0
    li r5, 0x40
    stw r25, 0x28(r1)
    stw r25, 0x2c(r1)
    bl memset
    mr r3, r28
    bl fn_80211480
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_805969D8_0000110C
    lwz r3, 0x134(r3)
    bl fn_80211480
    cmpwi r3, 0x0
    bne lbl_fn_805969D8_00000B90
    lwz r3, lbl_8087F430
    li r25, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_805969D8_00000AE4
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_805969D8_00000AE4
    li r25, 0x1
lbl_fn_805969D8_00000AE4:
    lwz r3, 0x4(r26)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_805969D8_00000B1C
    lwz r3, 0x4(r26)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_805969D8_00000B1C
    lwz r3, 0x4(r26)
    bl fn_80206C50
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805969D8_00000B1C
    li r25, 0x0
lbl_fn_805969D8_00000B1C:
    lis r4, lbl_80796ACC@ha
    lwz r3, 0x8(r26)
    addi r4, r4, lbl_80796ACC@l
    addi r4, r4, 0x8
    bl fn_80686CF8
    cmpwi r3, 0x0
    beq lbl_fn_805969D8_00000B3C
    li r25, 0x0
lbl_fn_805969D8_00000B3C:
    cmpwi r25, 0x0
    beq lbl_fn_805969D8_00000B80
    cmpwi r31, 0x0
    beq lbl_fn_805969D8_00000B80
    lis r3, 0x1062
    lwz r4, 0xc8(r26)
    addi r3, r3, 0x4dd3
    li r0, 0x1
    mulhw r3, r3, r4
    stw r0, 0x70(r1)
    srawi r0, r3, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r3, r0, 0x64
    addi r0, r3, 0x1f4
    stw r0, 0x2c(r1)
    b lbl_fn_805969D8_00000C38
lbl_fn_805969D8_00000B80:
    li r0, 0x0
    stw r0, 0x2c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_805969D8_00000C38
lbl_fn_805969D8_00000B90:
    cmpwi r31, 0x0
    bne lbl_fn_805969D8_00000BA4
    stw r25, 0x2c(r1)
    stw r25, 0x70(r1)
    b lbl_fn_805969D8_00000C38
lbl_fn_805969D8_00000BA4:
    lwz r3, lbl_8087F430
    li r25, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_805969D8_00000BC8
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_805969D8_00000BC8
    li r25, 0x1
lbl_fn_805969D8_00000BC8:
    cmpwi r25, 0x0
    bne lbl_fn_805969D8_00000BEC
    lwz r0, 0x11c(r26)
    cmpwi r0, 0x143
    bne lbl_fn_805969D8_00000BEC
    li r0, 0x0
    stw r0, 0x2c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_805969D8_00000C38
lbl_fn_805969D8_00000BEC:
    lwz r3, lbl_8087F430
    lwz r0, 0x130(r26)
    cmpwi r3, 0x0
    stw r0, 0x2c(r1)
    beq lbl_fn_805969D8_00000C30
    li r4, 0xdb
    bl fn_80370174
    lwz r4, 0x2c(r1)
    subfic r0, r3, 0x64
    lis r3, 0x51ec
    mullw r0, r4, r0
    subi r3, r3, 0x7ae1
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    stw r0, 0x2c(r1)
lbl_fn_805969D8_00000C30:
    li r0, 0x1
    stw r0, 0x70(r1)
lbl_fn_805969D8_00000C38:
    lwz r3, lbl_8087F430
    li r4, 0x11c
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_805969D8_00000C54
    li r0, 0x0
    stw r0, 0x2c(r1)
lbl_fn_805969D8_00000C54:
    stw r28, 0x28(r1)
    addis r5, r27, 0x2
    stw r29, 0x78(r1)
    stw r30, 0x7c(r1)
    stw r31, 0x74(r1)
    lwz r3, 0x60a8(r5)
    lwz r4, 0x60ac(r5)
    cmplw r3, r4
    bge lbl_fn_805969D8_00000D40
    addi r3, r3, 0x1
    stw r3, 0x60a8(r5)
    subi r0, r3, 0x1
    lwz r4, 0x60a4(r5)
    mulli r3, r0, 0x58
    lwz r0, 0x28(r1)
    stwux r0, r4, r3
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x6c(r1)
    lwz r3, 0x68(r1)
    stw r3, 0x40(r4)
    stw r0, 0x44(r4)
    lwz r0, 0x70(r1)
    stw r0, 0x48(r4)
    lwz r0, 0x74(r1)
    stw r0, 0x4c(r4)
    lwz r0, 0x78(r1)
    stw r0, 0x50(r4)
    lwz r0, 0x7c(r1)
    stw r0, 0x54(r4)
    b lbl_fn_805969D8_0000110C
lbl_fn_805969D8_00000D40:
    lis r3, 0x2e9
    subi r0, r3, 0x45d2
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_805969D8_00000D78
    lis r4, lbl_80761D5C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80761D5C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x2b0
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805969D8_00000D78:
    addis r5, r27, 0x2
    li r6, 0x0
    lwz r4, 0x60a8(r5)
    lis r3, 0x2e9
    lwz r31, 0x60ac(r5)
    subi r0, r3, 0x45d2
    addi r3, r4, 0x1
    addi r4, r5, 0x60ac
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r6, 0x14(r1)
    stw r6, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r6, 0x24(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_805969D8_00000DE4
    lis r4, lbl_80761D5C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80761D5C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x2b0
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805969D8_00000DE4:
    lis r3, 0xf8
    addi r0, r3, 0x3e0f
    cmplw r31, r0
    bge lbl_fn_805969D8_00000E34
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_805969D8_00000E28
    addi r3, r1, 0x10
lbl_fn_805969D8_00000E28:
    lwz r0, 0x0(r3)
    add r25, r31, r0
    b lbl_fn_805969D8_00000E78
lbl_fn_805969D8_00000E34:
    lis r3, 0x1f0
    addi r0, r3, 0x7c1e
    cmplw r31, r0
    bge lbl_fn_805969D8_00000E70
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_805969D8_00000E64
    addi r3, r1, 0x10
lbl_fn_805969D8_00000E64:
    lwz r0, 0x0(r3)
    add r25, r31, r0
    b lbl_fn_805969D8_00000E78
lbl_fn_805969D8_00000E70:
    lis r3, 0x2e9
    subi r25, r3, 0x45d2
lbl_fn_805969D8_00000E78:
    lis r3, 0x2e9
    subi r0, r3, 0x45d2
    cmplw r25, r0
    ble lbl_fn_805969D8_00000EAC
    lis r4, lbl_80761D5C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80761D5C@l
    addi r3, r3, __files@l
    addi r4, r4, 0x2b0
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805969D8_00000EAC:
    mulli r3, r25, 0x58
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_805969D8_00000EE0
    lis r3, __files@ha
    lis r4, lbl_80796AB0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80796AB0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_805969D8_00000EE0:
    addis r3, r27, 0x2
    lwz r7, 0x18(r1)
    lwz r8, 0x60a8(r3)
    li r0, 0x58
    addi r5, r7, 0x1
    lwz r6, 0x28(r1)
    mulli r4, r8, 0x58
    stw r5, 0x18(r1)
    stw r26, 0x14(r1)
    add r4, r26, r4
    mulli r7, r7, 0x58
    stwux r6, r7, r4
    lwz r5, 0x2c(r1)
    stw r5, 0x4(r7)
    lwz r5, 0x34(r1)
    lwz r6, 0x30(r1)
    stw r6, 0x8(r7)
    stw r5, 0xc(r7)
    lwz r5, 0x3c(r1)
    lwz r6, 0x38(r1)
    stw r6, 0x10(r7)
    stw r5, 0x14(r7)
    lwz r5, 0x44(r1)
    lwz r6, 0x40(r1)
    stw r6, 0x18(r7)
    stw r5, 0x1c(r7)
    lwz r5, 0x4c(r1)
    lwz r6, 0x48(r1)
    stw r6, 0x20(r7)
    stw r5, 0x24(r7)
    lwz r5, 0x54(r1)
    lwz r6, 0x50(r1)
    stw r6, 0x28(r7)
    stw r5, 0x2c(r7)
    lwz r5, 0x5c(r1)
    lwz r6, 0x58(r1)
    stw r6, 0x30(r7)
    stw r5, 0x34(r7)
    lwz r5, 0x64(r1)
    lwz r6, 0x60(r1)
    stw r6, 0x38(r7)
    stw r5, 0x3c(r7)
    lwz r5, 0x6c(r1)
    lwz r6, 0x68(r1)
    stw r6, 0x40(r7)
    stw r5, 0x44(r7)
    lwz r5, 0x70(r1)
    stw r5, 0x48(r7)
    lwz r5, 0x74(r1)
    stw r5, 0x4c(r7)
    lwz r5, 0x78(r1)
    stw r5, 0x50(r7)
    lwz r5, 0x7c(r1)
    stw r5, 0x54(r7)
    lwz r5, 0x60a8(r3)
    lwz r6, 0x60a4(r3)
    mulli r3, r5, 0x58
    stw r25, 0x1c(r1)
    stw r8, 0x24(r1)
    add r3, r6, r3
    addi r5, r3, 0x57
    subf r5, r6, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r3, r6
    ble lbl_fn_805969D8_000010C0
lbl_fn_805969D8_00000FE8:
    subic. r4, r4, 0x58
    subi r3, r3, 0x58
    beq lbl_fn_805969D8_000010A4
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x18(r4)
    stw r0, 0x1c(r4)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x20(r4)
    stw r0, 0x24(r4)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x28(r4)
    stw r0, 0x2c(r4)
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x30(r4)
    stw r0, 0x34(r4)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x38(r4)
    stw r0, 0x3c(r4)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x40(r4)
    stw r0, 0x44(r4)
    lwz r0, 0x48(r3)
    stw r0, 0x48(r4)
    lwz r0, 0x4c(r3)
    stw r0, 0x4c(r4)
    lwz r0, 0x50(r3)
    stw r0, 0x50(r4)
    lwz r0, 0x54(r3)
    stw r0, 0x54(r4)
lbl_fn_805969D8_000010A4:
    lwz r6, 0x24(r1)
    lwz r5, 0x18(r1)
    subi r0, r6, 0x1
    stw r0, 0x24(r1)
    addi r0, r5, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_805969D8_00000FE8
lbl_fn_805969D8_000010C0:
    addis r6, r27, 0x2
    addic. r0, r1, 0x14
    lwz r0, 0x18(r1)
    li r7, 0x0
    lwz r8, 0x60ac(r6)
    lwz r5, 0x1c(r1)
    lwz r3, 0x60a4(r6)
    lwz r4, 0x14(r1)
    stw r5, 0x60ac(r6)
    stw r8, 0x1c(r1)
    stw r4, 0x60a4(r6)
    stw r3, 0x14(r1)
    stw r0, 0x60a8(r6)
    stw r7, 0x18(r1)
    beq lbl_fn_805969D8_0000110C
    cmpwi r3, 0x0
    beq lbl_fn_805969D8_0000110C
    stw r7, 0x18(r1)
    bl dtor_80084684
lbl_fn_805969D8_0000110C:
    lmw r25, 0x84(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8059709C(void)
{
    nofralloc
    cmpwi r4, 0x0
    bltlr
    addis r7, r3, 0x2
    slwi r6, r6, 2
    lwz r0, 0x60a8(r7)
    add r6, r7, r6
    lwz r10, 0x608c(r6)
    li r12, 0x0
    lwz r11, 0x6098(r6)
    li r9, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8059709C_00001188
lbl_fn_8059709C_00001154:
    lwz r0, 0x60a4(r7)
    add r8, r0, r9
    lwzx r0, r9, r0
    cmpw r0, r4
    bne lbl_fn_8059709C_0000117C
    lwz r0, 0x50(r8)
    cmpw r0, r5
    bne lbl_fn_8059709C_0000117C
    mr r10, r12
    b lbl_fn_8059709C_00001188
lbl_fn_8059709C_0000117C:
    addi r9, r9, 0x58
    addi r12, r12, 0x1
    bdnz lbl_fn_8059709C_00001154
lbl_fn_8059709C_00001188:
    cmpw r10, r11
    bge lbl_fn_8059709C_00001198
    mr r11, r10
    b lbl_fn_8059709C_000011A8
lbl_fn_8059709C_00001198:
    addi r0, r11, 0xa
    cmpw r10, r0
    blt lbl_fn_8059709C_000011A8
    subi r11, r10, 0x9
lbl_fn_8059709C_000011A8:
    addis r3, r3, 0x2
    lwz r4, 0x5b08(r3)
    cmpw r10, r4
    blt lbl_fn_8059709C_000011C4
    subi r3, r4, 0x1
    srawi r0, r3, 31
    andc r10, r3, r0
lbl_fn_8059709C_000011C4:
    cmpwi r10, 0xa
    blt lbl_fn_8059709C_000011E0
    subi r3, r4, 0x1
    addi r0, r11, 0x9
    cmpw r3, r0
    bgt lbl_fn_8059709C_000011E0
    subi r11, r4, 0xa
lbl_fn_8059709C_000011E0:
    stw r10, 0x608c(r6)
    stw r11, 0x6098(r6)
    blr
}

asm void fn_80597168(void)
{
    nofralloc
    addis r9, r3, 0x2
    lwz r8, 0x0(r6)
    lwz r0, 0x0(r5)
    li r12, 0x0
    lwz r10, 0x60a8(r9)
    li r7, 0x0
    subf r11, r8, r0
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_80597168_000012A4
lbl_fn_80597168_00001214:
    lwz r8, 0x60a4(r9)
    lwz r0, 0x0(r4)
    add r10, r8, r7
    lwzx r8, r8, r7
    cmpw r8, r0
    bne lbl_fn_80597168_00001298
    lwz r8, 0x50(r10)
    cmpwi r8, 0x0
    bge lbl_fn_80597168_00001244
    lwz r0, 0x50(r4)
    cmpwi r0, 0x0
    blt lbl_fn_80597168_00001260
lbl_fn_80597168_00001244:
    lwz r0, 0x50(r4)
    cmpw r8, r0
    bne lbl_fn_80597168_00001298
    lwz r8, 0x54(r10)
    lwz r0, 0x54(r4)
    cmpw r8, r0
    bne lbl_fn_80597168_00001298
lbl_fn_80597168_00001260:
    subf r7, r11, r12
    stw r12, 0x0(r5)
    neg r0, r7
    addis r4, r3, 0x2
    andc r0, r0, r7
    srawi r0, r0, 31
    and r0, r7, r0
    stw r0, 0x0(r6)
    lwz r0, 0x60a8(r4)
    cmplwi r0, 0xa
    bge lbl_fn_80597168_000012A4
    li r0, 0x0
    stw r0, 0x0(r6)
    b lbl_fn_80597168_000012A4
lbl_fn_80597168_00001298:
    addi r12, r12, 0x1
    addi r7, r7, 0x58
    bdnz lbl_fn_80597168_00001214
lbl_fn_80597168_000012A4:
    addis r3, r3, 0x2
    lwz r0, 0x0(r5)
    lwz r7, 0x60a8(r3)
    cmpw r0, r7
    blt lbl_fn_80597168_000012C8
    subi r3, r7, 0x1
    srawi r0, r3, 31
    andc r0, r3, r0
    stw r0, 0x0(r5)
lbl_fn_80597168_000012C8:
    cmpwi r7, 0xa
    bltlr
    lwz r3, 0x0(r6)
    subi r4, r7, 0x1
    addi r0, r3, 0x9
    cmpw r4, r0
    bgtlr
    subi r0, r7, 0xa
    stw r0, 0x0(r6)
    blr
}

asm void fn_8059726C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_22
    addis r7, r3, 0x2
    lis r5, lbl_80761D5C@ha
    lwz r6, 0x5b78(r7)
    mr r23, r4
    lwz r27, lbl_8087F4F0
    addi r30, r5, lbl_80761D5C@l
    lwz r0, 0x38(r6)
    mr r22, r3
    addi r3, r30, 0x2c4
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    lwz r4, 0x5b78(r7)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80888154
    mr r4, r3
    mr r3, r24
    bl fn_801FECE0
    addis r7, r22, 0x2
    addi r4, r30, 0x2ca
    lwz r3, 0x5b70(r7)
    li r6, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r5, lbl_8087F4F0
    lwz r3, 0x5b70(r7)
    lwz r5, 0x6000(r5)
    bl fn_801F4CB4
    addis r6, r22, 0x2
    mr r3, r22
    lwz r4, 0x5b78(r6)
    li r7, 0xa
    lwz r5, 0x5b0c(r6)
    lwz r6, 0x60a8(r6)
    bl fn_80584754
    lfs f0, lbl_80888150
    mr r28, r22
    stfs f0, 0x1c(r1)
    addis r31, r22, 0x2
    li r26, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_8059726C_000013B8:
    addi r3, r1, 0x30
    addi r4, r30, 0x2d2
    addi r5, r26, 0x1
    crclr 6
    bl sprintf
    lwz r24, 0x5b78(r31)
    addi r3, r1, 0x30
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r24
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addis r3, r28, 0x2
    lfs f3, 0xc(r1)
    addi r4, r30, 0x269
    lfs f2, 0x10(r1)
    addi r5, r1, 0x1c
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    lwz r3, 0x5b7c(r3)
    bl fn_801F6E78
    lwz r3, 0x5b0c(r31)
    lwz r0, 0x60a8(r31)
    add r3, r26, r3
    cmpw r3, r0
    bge lbl_fn_8059726C_000015B4
    mulli r0, r3, 0x58
    lwz r3, 0x60a4(r31)
    add r29, r3, r0
    lwzx r3, r3, r0
    bl fn_80211480
    mr r25, r3
    mr r3, r27
    lwz r4, 0x4(r25)
    bl fn_804444E8
    cmpwi r23, 0x0
    mr r24, r3
    beq lbl_fn_8059726C_000015A0
    lwz r4, 0x50(r29)
    cmpwi r4, 0x0
    bge lbl_fn_8059726C_0000148C
    addis r3, r28, 0x2
    lfs f1, lbl_80888150
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2df
    bl fn_801F6C80
    b lbl_fn_8059726C_000014B8
lbl_fn_8059726C_0000148C:
    addis r3, r28, 0x2
    li r5, 0x4
    lwz r3, 0x5b7c(r3)
    li r6, 0x2
    bl fn_804A4CE4
    addis r3, r28, 0x2
    lfs f1, lbl_80888154
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2df
    bl fn_801F6C80
    li r24, -0x1
lbl_fn_8059726C_000014B8:
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8059726C_00001520
    lfs f1, lbl_80888164
    addis r3, r28, 0x2
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2e6
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    addis r3, r28, 0x2
    lfs f1, lbl_80888168
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2ee
    bl fn_801F6C80
    addis r3, r28, 0x2
    lfs f1, lbl_80888168
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2ee
    bl fn_801F6C80
    addis r3, r28, 0x2
    lfs f1, lbl_80888168
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2ee
    bl fn_801F6C80
    b lbl_fn_8059726C_00001578
lbl_fn_8059726C_00001520:
    lfs f1, lbl_8088816C
    addis r3, r28, 0x2
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2e6
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    addis r3, r28, 0x2
    lfs f1, lbl_80888170
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2ee
    bl fn_801F6C80
    addis r3, r28, 0x2
    lfs f1, lbl_80888170
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2ee
    bl fn_801F6C80
    addis r3, r28, 0x2
    lfs f1, lbl_80888170
    lwz r3, 0x5b7c(r3)
    addi r4, r30, 0x2ee
    bl fn_801F6C80
lbl_fn_8059726C_00001578:
    addis r3, r28, 0x2
    lwz r9, 0x4c(r29)
    lwz r4, 0x5b7c(r3)
    mr r3, r22
    mr r5, r25
    mr r7, r24
    li r6, -0x1
    li r8, -0x1
    bl fn_80598534
    b lbl_fn_8059726C_000015B4
lbl_fn_8059726C_000015A0:
    addis r3, r28, 0x2
    lwz r3, 0x5b7c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8059726C_000015B4:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0xa
    blt lbl_fn_8059726C_000013B8
    addi r11, r1, 0xa0
    bl _restgpr_22
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80597558(void)
{
    nofralloc
    stwu r1, -0x3d0(r1)
    mflr r0
    stw r0, 0x3d4(r1)
    addi r11, r1, 0x3c0
    stfd f31, 0x3c0(r1)
    psq_st f31, 0x3c8(r1), 0, 0
    bl _savegpr_14
    mr r16, r4
    lis r4, lbl_80761D5C@ha
    addi r17, r4, lbl_80761D5C@l
    lis r26, lbl_80761C90@ha
    addis r4, r3, 0x2
    mr r15, r3
    lwz r3, 0x5b70(r4)
    addi r26, r26, lbl_80761C90@l
    lwz r23, lbl_8087F4F0
    addi r4, r17, 0x2f8
    lwz r5, 0x4(r16)
    li r6, 0x0
    bl fn_801F4CB4
    lfs f0, lbl_80888150
    addis r4, r15, 0x2
    stfs f0, 0x94(r1)
    addi r3, r17, 0x305
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    lwz r14, 0x5b70(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r14
    addi r3, r1, 0x30
    bl fn_801F4E8C
    lfs f4, 0x30(r1)
    addis r3, r15, 0x2
    lfs f3, 0x34(r1)
    addi r4, r17, 0x269
    lfs f2, 0x38(r1)
    addi r5, r1, 0x94
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    lwz r3, 0x5ba4(r3)
    bl fn_801F6E78
    addis r3, r15, 0x2
    lfs f1, lbl_80888150
    lwz r3, 0x5ba4(r3)
    addi r4, r17, 0x2df
    bl fn_801F6C80
    addis r3, r15, 0x2
    addi r4, r17, 0x269
    lwz r3, 0x5bb8(r3)
    addi r5, r1, 0x94
    bl fn_801F6E78
    mr r19, r15
    addis r14, r15, 0x2
    li r20, 0x0
lbl_fn_80597558_000016D4:
    addi r3, r1, 0xe8
    addi r4, r17, 0x30f
    addi r5, r20, 0x1
    crclr 6
    bl sprintf
    lwz r18, 0x5b70(r14)
    addi r3, r1, 0xe8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r18
    addi r3, r1, 0x1c
    bl fn_801F4E8C
    lfs f4, 0x1c(r1)
    addis r3, r19, 0x2
    lfs f3, 0x20(r1)
    addi r4, r17, 0x269
    lfs f2, 0x24(r1)
    addi r5, r1, 0x94
    lfs f1, 0x28(r1)
    lfs f0, 0x2c(r1)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    lwz r3, 0x5ba8(r3)
    bl fn_801F6E78
    addis r3, r19, 0x2
    addi r4, r17, 0x269
    lwz r3, 0x5bb0(r3)
    addi r5, r1, 0x94
    bl fn_801F6E78
    addi r20, r20, 0x1
    addi r19, r19, 0x4
    cmpwi r20, 0x2
    blt lbl_fn_80597558_000016D4
    lis r17, lbl_80761D5C@ha
    mr r19, r15
    addi r17, r17, lbl_80761D5C@l
    addis r14, r15, 0x2
    li r20, 0x0
lbl_fn_80597558_00001778:
    addi r3, r1, 0xe8
    addi r4, r17, 0x31d
    addi r5, r20, 0x1
    crclr 6
    bl sprintf
    lwz r18, 0x5b70(r14)
    addi r3, r1, 0xe8
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r18
    addi r3, r1, 0x8
    bl fn_801F4E8C
    lfs f4, 0x8(r1)
    addis r3, r19, 0x2
    lfs f3, 0xc(r1)
    addi r4, r17, 0x269
    lfs f2, 0x10(r1)
    addi r5, r1, 0x94
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f4, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f0, 0xa4(r1)
    lwz r3, 0x5bbc(r3)
    bl fn_801F6E78
    addis r3, r19, 0x2
    lfs f1, lbl_80888150
    lwz r3, 0x5bbc(r3)
    addi r4, r17, 0x2df
    bl fn_801F6C80
    addi r20, r20, 0x1
    addi r19, r19, 0x4
    cmpwi r20, 0x3
    blt lbl_fn_80597558_00001778
    lwz r3, 0x0(r16)
    li r19, 0x0
    bl fn_80211480
    mr r17, r3
    lwz r3, 0x134(r3)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r14, r3
    li r18, 0x0
    li r20, 0x0
    li r21, 0x0
    beq lbl_fn_80597558_00001888
    lwz r0, 0x48(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00001BD8
    lwz r3, 0x4(r3)
    bl fn_8020EFEC
    mr r18, r3
    lwz r3, 0x4(r14)
    bl fn_80206C50
    cmpwi r18, 0x0
    mr r21, r3
    beq lbl_fn_80597558_00001BD8
    mr r3, r18
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001BD8
    lwz r4, 0x7c(r18)
    li r3, 0x1
    bl fn_8020ED84
    mr r20, r3
    b lbl_fn_80597558_00001BD8
lbl_fn_80597558_00001888:
    lwz r0, 0x48(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00001BD8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001BD8
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_80597558_00001BD8
    addis r6, r15, 0x2
    lbz r0, 0x0(r17)
    stb r0, 0x5bf0(r6)
    li r0, 0xc
    addi r5, r6, 0x5c00
    addi r4, r17, 0x10
    lbz r3, 0x1(r17)
    stb r3, 0x5bf1(r6)
    lbz r3, 0x2(r17)
    stb r3, 0x5bf2(r6)
    lbz r3, 0x3(r17)
    stb r3, 0x5bf3(r6)
    lwz r3, 0x4(r17)
    stw r3, 0x5bf4(r6)
    lwz r3, 0x8(r17)
    stw r3, 0x5bf8(r6)
    lwz r3, 0xc(r17)
    stw r3, 0x5bfc(r6)
    lwz r3, 0x10(r17)
    stw r3, 0x5c00(r6)
    mtctr r0
lbl_fn_80597558_00001904:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80597558_00001904
    lwz r4, 0x74(r17)
    addis r3, r15, 0x2
    lwz r0, 0x78(r17)
    addi r14, r17, 0xcc
    stw r0, 0x5c68(r3)
    addi r19, r3, 0x5cbc
    cmplw r14, r19
    stw r4, 0x5c64(r3)
    lwz r4, 0x7c(r17)
    lwz r0, 0x80(r17)
    stw r0, 0x5c70(r3)
    stw r4, 0x5c6c(r3)
    lwz r4, 0x84(r17)
    lwz r0, 0x88(r17)
    stw r0, 0x5c78(r3)
    stw r4, 0x5c74(r3)
    lwz r0, 0x8c(r17)
    stw r0, 0x5c7c(r3)
    lwz r4, 0x90(r17)
    lwz r0, 0x94(r17)
    stw r0, 0x5c84(r3)
    stw r4, 0x5c80(r3)
    lwz r4, 0x98(r17)
    lwz r0, 0x9c(r17)
    stw r0, 0x5c8c(r3)
    stw r4, 0x5c88(r3)
    lwz r4, 0xa0(r17)
    lwz r0, 0xa4(r17)
    stw r0, 0x5c94(r3)
    stw r4, 0x5c90(r3)
    lwz r0, 0xa8(r17)
    stw r0, 0x5c98(r3)
    lwz r0, 0xac(r17)
    stw r0, 0x5c9c(r3)
    lwz r0, 0xb0(r17)
    stw r0, 0x5ca0(r3)
    lwz r4, 0xb4(r17)
    lwz r0, 0xb8(r17)
    stw r0, 0x5ca8(r3)
    stw r4, 0x5ca4(r3)
    lha r0, 0xbc(r17)
    sth r0, 0x5cac(r3)
    lha r0, 0xbe(r17)
    sth r0, 0x5cae(r3)
    lbz r0, 0xc0(r17)
    stb r0, 0x5cb0(r3)
    lbz r0, 0xc1(r17)
    stb r0, 0x5cb1(r3)
    lbz r0, 0xc2(r17)
    stb r0, 0x5cb2(r3)
    lbz r0, 0xc3(r17)
    stb r0, 0x5cb3(r3)
    lwz r0, 0xc4(r17)
    stw r0, 0x5cb4(r3)
    lwz r0, 0xc8(r17)
    stw r0, 0x5cb8(r3)
    beq lbl_fn_80597558_00001A18
    mr r3, r14
    bl strlen
    mr r5, r3
    mr r3, r19
    mr r4, r14
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80597558_00001A18:
    addis r3, r15, 0x2
    addi r14, r17, 0xdc
    addi r19, r3, 0x5ccc
    cmplw r14, r19
    beq lbl_fn_80597558_00001A48
    mr r3, r14
    bl strlen
    mr r5, r3
    mr r3, r19
    mr r4, r14
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80597558_00001A48:
    lwz r3, 0xec(r17)
    addis r4, r15, 0x2
    lwz r0, 0xf0(r17)
    addi r14, r17, 0x114
    stw r0, 0x5ce0(r4)
    addi r19, r4, 0x5d04
    cmplw r14, r19
    stw r3, 0x5cdc(r4)
    lwz r3, 0xf4(r17)
    lwz r0, 0xf8(r17)
    stw r0, 0x5ce8(r4)
    stw r3, 0x5ce4(r4)
    lwz r3, 0xfc(r17)
    lwz r0, 0x100(r17)
    stw r0, 0x5cf0(r4)
    stw r3, 0x5cec(r4)
    lwz r3, 0x104(r17)
    lwz r0, 0x108(r17)
    stw r0, 0x5cf8(r4)
    stw r3, 0x5cf4(r4)
    lwz r3, 0x10c(r17)
    lwz r0, 0x110(r17)
    stw r0, 0x5d00(r4)
    stw r3, 0x5cfc(r4)
    beq lbl_fn_80597558_00001AC8
    mr r3, r14
    bl strlen
    mr r5, r3
    mr r3, r19
    mr r4, r14
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80597558_00001AC8:
    lwz r4, 0x11c(r17)
    addis r5, r15, 0x2
    lwz r0, 0x120(r17)
    addi r14, r5, 0x5bf0
    stw r0, 0x5d10(r5)
    lwz r3, 0x5bf4(r5)
    stw r4, 0x5d0c(r5)
    lwz r4, 0x124(r17)
    lwz r0, 0x128(r17)
    stw r0, 0x5d18(r5)
    stw r4, 0x5d14(r5)
    lwz r0, 0x12c(r17)
    stw r0, 0x5d1c(r5)
    lwz r0, 0x130(r17)
    stw r0, 0x5d20(r5)
    lwz r0, 0x134(r17)
    stw r0, 0x5d24(r5)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001B24
    lwz r3, 0x4(r14)
    bl fn_8020EFEC
    mr r18, r3
lbl_fn_80597558_00001B24:
    lwz r3, 0x4(r14)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001B40
    lwz r3, 0x4(r14)
    bl fn_80206C50
    mr r21, r3
lbl_fn_80597558_00001B40:
    cmpwi r18, 0x0
    beq lbl_fn_80597558_00001B64
    addis r3, r15, 0x2
    mr r4, r18
    li r5, 0x1
    addi r3, r3, 0x5e58
    bl fn_80212C34
    addis r18, r15, 0x2
    addi r18, r18, 0x5e58
lbl_fn_80597558_00001B64:
    cmpwi r21, 0x0
    beq lbl_fn_80597558_00001B88
    addis r3, r15, 0x2
    mr r4, r21
    li r5, 0x1
    addi r3, r3, 0x5d28
    bl fn_80212840
    addis r21, r15, 0x2
    addi r21, r21, 0x5d28
lbl_fn_80597558_00001B88:
    addis r5, r15, 0x2
    li r4, -0x1
    lwz r3, 0x5bf4(r5)
    addis r3, r3, 0xf
    addi r3, r3, 0x4240
    stw r3, 0x5bf4(r5)
    bl fn_80211770
    addis r4, r15, 0x2
    cmpwi r18, 0x0
    stw r3, 0x5bf8(r4)
    beq lbl_fn_80597558_00001BD4
    mr r3, r18
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001BD4
    lwz r4, 0x7c(r18)
    li r3, 0x1
    bl fn_8020ED84
    mr r20, r3
lbl_fn_80597558_00001BD4:
    li r19, 0x1
lbl_fn_80597558_00001BD8:
    lwz r0, 0x48(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00001DB8
    lwz r4, 0x4(r14)
    mr r3, r23
    bl fn_804444E8
    cmpwi r3, 0x0
    bge lbl_fn_80597558_00001C00
    li r3, 0x0
    b lbl_fn_80597558_00001C0C
lbl_fn_80597558_00001C00:
    lwz r4, 0x4(r14)
    mr r3, r23
    bl fn_804444E8
lbl_fn_80597558_00001C0C:
    addis r4, r15, 0x2
    mr r7, r3
    lwz r4, 0x5ba4(r4)
    mr r3, r15
    mr r5, r14
    li r6, -0x1
    li r8, -0x1
    li r9, 0x1
    bl fn_80598534
    lfs f1, lbl_80888164
    addis r3, r15, 0x2
    lis r4, lbl_80761D5C@ha
    lwz r3, 0x5ba4(r3)
    fmr f2, f1
    addi r14, r4, lbl_80761D5C@l
    fmr f3, f1
    addi r4, r14, 0x2e6
    bl fn_801F7DF0
    cmpwi r19, 0x0
    beq lbl_fn_80597558_00001CEC
    li r3, 0x143
    bl fn_80211480
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_80597558_00001DCC
    lwz r4, 0x4(r19)
    mr r3, r23
    bl fn_804444E8
    addis r4, r15, 0x2
    mr r22, r3
    lwz r4, 0x5bbc(r4)
    mr r3, r15
    mr r5, r19
    mr r8, r22
    li r6, -0x1
    li r7, 0x1
    li r9, 0x1
    bl fn_80598534
    cmpwi r22, 0x1
    blt lbl_fn_80597558_00001CCC
    lfs f1, lbl_80888164
    addis r3, r15, 0x2
    lwz r3, 0x5bbc(r3)
    addi r4, r14, 0x2e6
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    b lbl_fn_80597558_00001DCC
lbl_fn_80597558_00001CCC:
    lfs f1, lbl_8088816C
    addis r3, r15, 0x2
    lwz r3, 0x5bbc(r3)
    addi r4, r14, 0x2e6
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    b lbl_fn_80597558_00001DCC
lbl_fn_80597558_00001CEC:
    mr r19, r17
    mr r22, r15
    li r24, 0x0
lbl_fn_80597558_00001CF8:
    lwz r3, 0x11c(r19)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80597558_00001DA0
    lwz r0, 0x11c(r19)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00001DA0
    lwz r4, 0x4(r28)
    mr r3, r23
    bl fn_804444E8
    add r27, r17, r24
    mr r25, r3
    addis r3, r22, 0x2
    lbz r7, 0x12c(r27)
    lwz r4, 0x5bbc(r3)
    mr r3, r15
    mr r5, r28
    mr r8, r25
    extsb r7, r7
    li r6, -0x1
    li r9, 0x1
    bl fn_80598534
    lbz r0, 0x12c(r27)
    extsb r0, r0
    cmpw r0, r25
    bgt lbl_fn_80597558_00001D84
    lfs f1, lbl_80888164
    addis r3, r22, 0x2
    lwz r3, 0x5bbc(r3)
    addi r4, r14, 0x2e6
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
    b lbl_fn_80597558_00001DA0
lbl_fn_80597558_00001D84:
    lfs f1, lbl_8088816C
    addis r3, r22, 0x2
    lwz r3, 0x5bbc(r3)
    addi r4, r14, 0x2e6
    fmr f2, f1
    fmr f3, f1
    bl fn_801F7DF0
lbl_fn_80597558_00001DA0:
    addi r24, r24, 0x1
    addi r22, r22, 0x4
    cmpwi r24, 0x3
    addi r19, r19, 0x4
    blt lbl_fn_80597558_00001CF8
    b lbl_fn_80597558_00001DCC
lbl_fn_80597558_00001DB8:
    addis r3, r15, 0x2
    lwz r3, 0x5bb8(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_80597558_00001DCC:
    lis r24, lbl_80761D5C@ha
    lfs f31, lbl_80888150
    mr r22, r15
    addi r14, r18, 0xe4
    addi r19, r21, 0xc4
    addi r24, r24, lbl_80761D5C@l
    li r23, 0x0
lbl_fn_80597558_00001DE8:
    cmpwi r18, 0x0
    li r4, 0x0
    beq lbl_fn_80597558_00001DFC
    mr r4, r14
    b lbl_fn_80597558_00001E08
lbl_fn_80597558_00001DFC:
    cmpwi r21, 0x0
    beq lbl_fn_80597558_00001E08
    mr r4, r19
lbl_fn_80597558_00001E08:
    addis r3, r22, 0x2
    lwz r3, 0x5bb0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x48(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00001E74
    lwz r0, 0x4c(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00001E74
    cmpwi r4, 0x0
    beq lbl_fn_80597558_00001E74
    addi r3, r1, 0x128
    bl fn_8021C6A4
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001E74
    addis r6, r22, 0x2
    addi r4, r24, 0x328
    lwz r3, 0x5ba8(r6)
    addi r5, r1, 0x128
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x5ba8(r6)
    bl fn_801F837C
    b lbl_fn_80597558_00001E80
lbl_fn_80597558_00001E74:
    addis r3, r22, 0x2
    lwz r3, 0x5bb0(r3)
    stfs f31, 0x50(r3)
lbl_fn_80597558_00001E80:
    addi r23, r23, 0x1
    addi r19, r19, 0x14
    cmpwi r23, 0x2
    addi r22, r22, 0x4
    addi r14, r14, 0x14
    blt lbl_fn_80597558_00001DE8
    lwz r3, 0x4(r17)
    li r14, 0x0
    li r24, 0x0
    li r19, 0x0
    li r22, 0x0
    li r23, 0x0
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001F1C
    lwz r3, 0x4(r17)
    li r14, 0x1
    bl fn_80206C50
    cmpwi r3, 0x0
    mr r24, r3
    mr r19, r21
    beq lbl_fn_80597558_00001FA8
    lwz r0, 0x4c(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00001EF8
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0x88(r24)
    bl fn_804A3C24
    b lbl_fn_80597558_00001FA8
lbl_fn_80597558_00001EF8:
    lwz r17, lbl_8087F580
    li r3, 0x1
    li r4, 0x15b
    bl fn_80116FC0
    mr r4, r3
    mr r3, r17
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_80597558_00001FA8
lbl_fn_80597558_00001F1C:
    lwz r3, 0x4(r17)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001FA8
    lwz r3, 0x4(r17)
    li r14, 0x0
    bl fn_8020EFEC
    mr r24, r3
    mr r19, r18
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_80597558_00001F60
    lwz r4, 0x7c(r24)
    li r3, 0x1
    bl fn_8020ED84
    mr r22, r3
    mr r23, r20
lbl_fn_80597558_00001F60:
    cmpwi r24, 0x0
    beq lbl_fn_80597558_00001FA8
    lwz r0, 0x4c(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00001F88
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0x84(r24)
    bl fn_804A3C24
    b lbl_fn_80597558_00001FA8
lbl_fn_80597558_00001F88:
    lwz r17, lbl_8087F580
    li r3, 0x1
    li r4, 0x15b
    bl fn_80116FC0
    mr r4, r3
    mr r3, r17
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_80597558_00001FA8:
    addi r3, r1, 0x80
    li r4, 0x0
    li r5, 0x14
    bl memset
    addi r3, r1, 0x6c
    li r4, 0x0
    li r5, 0x14
    bl memset
    cmpwi r24, 0x0
    beq lbl_fn_80597558_00002028
    lfs f0, 0x0(r24)
    li r0, 0x0
    fctiwz f0, f0
    stfd f0, 0x328(r1)
    lwz r3, 0x32c(r1)
    stw r3, 0x80(r1)
    lfs f0, 0x8(r24)
    fctiwz f0, f0
    stw r0, 0x88(r1)
    stfd f0, 0x330(r1)
    lwz r0, 0x334(r1)
    stw r0, 0x84(r1)
    lfs f0, 0xc(r24)
    fctiwz f0, f0
    stfd f0, 0x338(r1)
    lwz r0, 0x33c(r1)
    stw r0, 0x8c(r1)
    lfs f0, 0x4(r24)
    fctiwz f0, f0
    stfd f0, 0x340(r1)
    lwz r0, 0x344(r1)
    stw r0, 0x90(r1)
lbl_fn_80597558_00002028:
    cmpwi r22, 0x0
    beq lbl_fn_80597558_000020A0
    lfs f0, 0x0(r22)
    lwz r6, 0x80(r1)
    fctiwz f0, f0
    lwz r5, 0x84(r1)
    lwz r4, 0x8c(r1)
    stfd f0, 0x340(r1)
    lwz r3, 0x90(r1)
    lwz r0, 0x344(r1)
    add r0, r6, r0
    stw r0, 0x80(r1)
    lfs f0, 0x8(r22)
    fctiwz f0, f0
    stfd f0, 0x338(r1)
    lwz r0, 0x33c(r1)
    add r0, r5, r0
    stw r0, 0x84(r1)
    lfs f0, 0xc(r22)
    fctiwz f0, f0
    stfd f0, 0x330(r1)
    lwz r0, 0x334(r1)
    add r0, r4, r0
    stw r0, 0x8c(r1)
    lfs f0, 0x4(r22)
    fctiwz f0, f0
    stfd f0, 0x328(r1)
    lwz r0, 0x32c(r1)
    add r0, r3, r0
    stw r0, 0x90(r1)
lbl_fn_80597558_000020A0:
    addi r3, r1, 0x58
    li r4, 0x0
    li r5, 0x14
    bl memset
    cmpwi r24, 0x0
    beq lbl_fn_80597558_00002278
    cmpwi r19, 0x0
    beq lbl_fn_80597558_00002278
    lfs f1, 0x0(r24)
    li r0, 0x0
    lfs f0, 0x0(r19)
    cmpwi r22, 0x0
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x340(r1)
    stfd f0, 0x338(r1)
    lwz r4, 0x344(r1)
    lwz r3, 0x33c(r1)
    subf r7, r4, r3
    stw r7, 0x58(r1)
    lfs f1, 0x8(r24)
    lfs f0, 0x8(r19)
    fctiwz f1, f1
    fctiwz f0, f0
    stw r0, 0x60(r1)
    stfd f1, 0x330(r1)
    stfd f0, 0x328(r1)
    lwz r3, 0x334(r1)
    lwz r0, 0x32c(r1)
    subf r6, r3, r0
    stw r6, 0x5c(r1)
    lfs f1, 0xc(r24)
    lfs f0, 0xc(r19)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x348(r1)
    stfd f0, 0x350(r1)
    lwz r3, 0x34c(r1)
    lwz r0, 0x354(r1)
    subf r5, r3, r0
    stw r5, 0x64(r1)
    lfs f1, 0x4(r24)
    lfs f0, 0x4(r19)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x358(r1)
    stfd f0, 0x360(r1)
    lwz r3, 0x35c(r1)
    lwz r0, 0x364(r1)
    subf r4, r3, r0
    stw r4, 0x68(r1)
    beq lbl_fn_80597558_00002228
    cmpwi r23, 0x0
    beq lbl_fn_80597558_00002228
    lfs f1, 0x0(r22)
    lfs f0, 0x0(r23)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x360(r1)
    stfd f0, 0x358(r1)
    lwz r3, 0x364(r1)
    lwz r0, 0x35c(r1)
    subf r0, r3, r0
    add r0, r7, r0
    stw r0, 0x58(r1)
    lfs f1, 0x8(r22)
    lfs f0, 0x8(r23)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x350(r1)
    stfd f0, 0x348(r1)
    lwz r3, 0x354(r1)
    lwz r0, 0x34c(r1)
    subf r0, r3, r0
    add r0, r6, r0
    stw r0, 0x5c(r1)
    lfs f1, 0xc(r22)
    lfs f0, 0xc(r23)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x340(r1)
    stfd f0, 0x338(r1)
    lwz r3, 0x344(r1)
    lwz r0, 0x33c(r1)
    subf r0, r3, r0
    add r0, r5, r0
    stw r0, 0x64(r1)
    lfs f1, 0x4(r22)
    lfs f0, 0x4(r23)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x330(r1)
    stfd f0, 0x328(r1)
    lwz r3, 0x334(r1)
    lwz r0, 0x32c(r1)
    subf r0, r3, r0
    add r0, r4, r0
    stw r0, 0x68(r1)
lbl_fn_80597558_00002228:
    lwz r3, 0x80(r1)
    lwz r0, 0x58(r1)
    lwz r5, 0x84(r1)
    add r8, r3, r0
    lwz r4, 0x5c(r1)
    lwz r3, 0x88(r1)
    add r7, r5, r4
    lwz r0, 0x60(r1)
    lwz r5, 0x8c(r1)
    add r6, r3, r0
    lwz r4, 0x64(r1)
    lwz r3, 0x90(r1)
    lwz r0, 0x68(r1)
    add r4, r5, r4
    stw r8, 0x6c(r1)
    add r0, r3, r0
    stw r7, 0x70(r1)
    stw r6, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_80597558_00002278:
    lis r5, lbl_80761D5C@ha
    lis r4, lbl_80796ACC@ha
    lis r3, lbl_807C78C8@ha
    addis r0, r15, 0x2
    stw r0, 0x368(r1)
    mr r21, r15
    addi r23, r26, 0x14
    addi r22, r26, 0x20
    lis r30, lbl_807C7898@ha
    addi r27, r3, lbl_807C78C8@l
    lis r31, lbl_807C78A8@ha
    addi r28, r5, lbl_80761D5C@l
    addi r29, r4, lbl_80796ACC@l
    li r18, 0x0
lbl_fn_80597558_000022B0:
    cmpwi r14, 0x0
    li r17, 0x0
    beq lbl_fn_80597558_000022C4
    lwz r20, 0x0(r23)
    b lbl_fn_80597558_000022C8
lbl_fn_80597558_000022C4:
    lwz r20, 0x0(r22)
lbl_fn_80597558_000022C8:
    mr r5, r18
    addi r3, r1, 0xe8
    addi r4, r28, 0x332
    crclr 6
    bl sprintf
    slwi r20, r20, 2
    addi r4, r26, 0x0
    lwzx r4, r4, r20
    li r3, 0x0
    bl fn_80116FC0
    lwz r4, 0x368(r1)
    mr r25, r3
    addi r3, r1, 0xe8
    lwz r4, 0x5b70(r4)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r25
    bl fn_801FEE08
    lwz r0, 0x4c(r16)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00002464
    mr r5, r18
    addi r3, r1, 0xe8
    addi r4, r28, 0x33c
    crclr 6
    bl sprintf
    addi r3, r1, 0x58
    lwzx r0, r3, r20
    cmpwi r0, 0x0
    ble lbl_fn_80597558_00002378
    lis r5, lbl_807C7898@ha
    addis r4, r21, 0x2
    addis r3, r15, 0x2
    lfs f1, lbl_807C7898@l(r5)
    addi r5, r30, lbl_807C7898@l
    lwz r17, 0x5bc8(r4)
    lwz r3, 0x5b70(r3)
    addi r4, r1, 0xe8
    lfs f2, 0x4(r5)
    lfs f3, 0x8(r5)
    bl fn_801F4AA0
    b lbl_fn_80597558_000023CC
lbl_fn_80597558_00002378:
    bne lbl_fn_80597558_000023A0
    lis r3, lbl_807C78C8@ha
    addis r4, r15, 0x2
    lfs f1, lbl_807C78C8@l(r3)
    lwz r3, 0x5b70(r4)
    addi r4, r1, 0xe8
    lfs f2, 0x4(r27)
    lfs f3, 0x8(r27)
    bl fn_801F4AA0
    b lbl_fn_80597558_000023CC
lbl_fn_80597558_000023A0:
    lis r5, lbl_807C78A8@ha
    addis r4, r21, 0x2
    addis r3, r15, 0x2
    lfs f1, lbl_807C78A8@l(r5)
    addi r5, r31, lbl_807C78A8@l
    lwz r17, 0x5bd4(r4)
    lwz r3, 0x5b70(r3)
    addi r4, r1, 0xe8
    lfs f2, 0x4(r5)
    lfs f3, 0x8(r5)
    bl fn_801F4AA0
lbl_fn_80597558_000023CC:
    mr r5, r18
    addi r3, r1, 0xe8
    addi r4, r28, 0x34c
    crclr 6
    bl sprintf
    addi r3, r1, 0x80
    addis r4, r15, 0x2
    lwzx r5, r3, r20
    li r6, 0x0
    lwz r3, 0x5b70(r4)
    addi r4, r1, 0xe8
    bl fn_801F4CB4
    mr r5, r18
    addi r3, r1, 0xe8
    addi r4, r28, 0x35d
    crclr 6
    bl sprintf
    cmpwi r19, 0x0
    beq lbl_fn_80597558_00002438
    addi r3, r1, 0x6c
    addis r4, r15, 0x2
    lwzx r5, r3, r20
    li r6, 0x0
    lwz r3, 0x5b70(r4)
    addi r4, r1, 0xe8
    bl fn_801F4CB4
    b lbl_fn_80597558_0000250C
lbl_fn_80597558_00002438:
    addis r3, r15, 0x2
    addi r20, r29, 0x10
    lwz r4, 0x5b70(r3)
    addi r3, r1, 0xe8
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r20
    bl fn_801FEE08
    b lbl_fn_80597558_0000250C
lbl_fn_80597558_00002464:
    mr r5, r18
    addi r3, r1, 0xe8
    addi r4, r28, 0x33c
    crclr 6
    bl sprintf
    lis r3, lbl_807C78C8@ha
    addis r4, r15, 0x2
    lfs f1, lbl_807C78C8@l(r3)
    lwz r3, 0x5b70(r4)
    addi r4, r1, 0xe8
    lfs f2, 0x4(r27)
    lfs f3, 0x8(r27)
    bl fn_801F4AA0
    mr r5, r18
    addi r3, r1, 0xe8
    addi r4, r28, 0x34c
    crclr 6
    bl sprintf
    addis r3, r15, 0x2
    addi r20, r29, 0x12
    lwz r4, 0x5b70(r3)
    addi r3, r1, 0xe8
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r20
    bl fn_801FEE08
    mr r5, r18
    addi r3, r1, 0xe8
    addi r4, r28, 0x35d
    crclr 6
    bl sprintf
    addis r3, r15, 0x2
    lwz r4, 0x5b70(r3)
    addi r3, r1, 0xe8
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r20
    bl fn_801FEE08
lbl_fn_80597558_0000250C:
    cmpwi r17, 0x0
    beq lbl_fn_80597558_00002564
    mr r5, r18
    addi r3, r1, 0xa8
    addi r4, r28, 0x36d
    crclr 6
    bl sprintf
    addis r4, r15, 0x2
    addi r3, r1, 0xa8
    lwz r20, 0x5b70(r4)
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r20
    addi r3, r1, 0x44
    bl fn_801F4E8C
    lwz r0, 0x38(r17)
    mr r3, r17
    addi r4, r28, 0x269
    addi r5, r1, 0x44
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r17)
    bl fn_801F6E78
lbl_fn_80597558_00002564:
    addi r18, r18, 0x1
    addi r22, r22, 0x4
    cmpwi r18, 0x3
    addi r21, r21, 0x4
    addi r23, r23, 0x4
    blt lbl_fn_80597558_000022B0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x488(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80597558_00002598
    lwz r3, lbl_8087F580
    lwz r4, 0x0(r16)
    bl fn_804A7DD4
lbl_fn_80597558_00002598:
    addi r11, r1, 0x3c0
    psq_l f31, 0x3c8(r1), 0, 0
    lfd f31, 0x3c0(r1)
    bl _restgpr_14
    lwz r0, 0x3d4(r1)
    mtlr r0
    addi r1, r1, 0x3d0
    blr
}
