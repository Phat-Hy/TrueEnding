#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8059E284(void);
extern void fn_8059E308(void);
extern void fn_8059E348(void);
extern void fn_8059E350(void);
extern void fn_8059E358(void);
extern void fn_8059E360(void);
extern void fn_8059E368(void);
extern void fn_8059E370(void);
extern void fn_8059E398(void);
extern void fn_8059E3A8(void);
extern void fn_8059E3B0(void);
extern void fn_8059E990(void);
extern void fn_8059E9A8(void);
extern void fn_8059EA00(void);
extern void fn_8059EA18(void);
extern void fn_8059EA70(void);
extern void fn_8059EA88(void);
extern void fn_805A1288(void);
extern void fn_805A1764(void);
extern void fn_805A1A64(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80709AD0(void);
extern void fn_8070ABA0(void);
extern void fn_8070AC20(void);
extern void fn_8070AE60(void);
extern void fn_8070AF30(void);
extern void fn_8070AFD0(void);
extern void fn_8070C9E0(void);
extern void fn_8070CA60(void);
extern void fn_8070CAA0(void);
extern void fn_8070CFD0(void);
extern void fn_8070D290(void);
extern void fn_8070F0D0(void);
extern void fn_807107E0(void);
extern void fn_807108E0(void);
extern void fn_80712C90(void);
extern void fn_807175E0(void);
extern void fn_80717630(void);
extern void fn_80717990(void);
extern void fn_80717B80(void);
extern void fn_80717EC0(void);
extern void fn_80718130(void);
extern void fn_807181C0(void);
extern void fn_807181D0(void);
extern void fn_807182B0(void);
extern void fn_80718320(void);
extern void fn_807187D0(void);
extern void fn_8071C8E0(void);
extern void fn_807214D0(void);
extern void fn_80724DF0(void);
extern void fn_80724E90(void);
extern void fn_80725200(void);
extern void fn_807252A0(void);

/* External data declarations */
extern u8 lbl_80762810[];
extern u8 lbl_80796DF8[];
extern u8 lbl_80796E34[];
extern u8 lbl_80796E4C[];
extern u8 lbl_80796E88[];
extern u8 lbl_80796EA0[];
extern u8 lbl_80796EDC[];
extern u8 lbl_80796EF4[];
extern u8 lbl_80796F18[];
extern u8 lbl_80796F24[];
extern u8 lbl_80796F48[];
extern u8 lbl_80796F54[];
extern u8 lbl_80796F78[];
extern u8 lbl_80796F84[];
extern u8 lbl_80796FA8[];
extern u8 lbl_80796FB4[];
extern u8 lbl_80796FD8[];
extern u8 lbl_80796FE4[];
extern u8 lbl_80797008[];
extern u8 lbl_80797014[];
extern u8 lbl_80797038[];
extern u8 lbl_80797044[];
extern u8 lbl_80797068[];
extern u8 lbl_80797074[];
extern u8 lbl_80797098[];
extern u8 lbl_807970A4[];
extern u8 lbl_807970C8[];
extern u8 lbl_807970D4[];
extern u8 lbl_807970F8[];
extern u8 lbl_80797104[];
extern u8 lbl_80797128[];

/* Small data declarations */

/* Function declarations */
void fn_8059F660(void);
void fn_8059F72C(void);
void fn_8059F878(void);
void fn_8059FFD8(void);
void fn_805A0028(void);
void fn_805A01DC(void);
void fn_805A0390(void);
void fn_805A03A4(void);

asm void fn_8059F660(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r31, 0x0(r4)
    addi r0, r31, 0x23
    clrrwi r3, r0, 2
    subf. r0, r5, r3
    ble lbl_fn_8059F660_00000044
    li r3, 0x0
    b lbl_fn_8059F660_000000AC
lbl_fn_8059F660_00000044:
    cmpwi r31, 0x0
    stw r3, 0x0(r4)
    beq lbl_fn_8059F660_0000005C
    mr r3, r31
    bl fn_807107E0
    mr r31, r3
lbl_fn_8059F660_0000005C:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1f
    clrrwi r4, r0, 5
    stw r4, 0x0(r28)
    add r3, r30, r4
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    subf. r0, r29, r3
    ble lbl_fn_8059F660_00000088
    li r3, 0x0
    b lbl_fn_8059F660_000000AC
lbl_fn_8059F660_00000088:
    stw r3, 0x0(r28)
    mr r3, r31
    mr r5, r30
    bl fn_807108E0
    cmpwi r3, 0x0
    beq lbl_fn_8059F660_000000A8
    mr r3, r31
    b lbl_fn_8059F660_000000AC
lbl_fn_8059F660_000000A8:
    li r3, 0x0
lbl_fn_8059F660_000000AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059F72C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r21, 0x14(r1)
    mr r22, r4
    mr r21, r3
    mr r23, r5
    mr r24, r6
    mr r3, r22
    bl fn_8059E308
    mulli r0, r3, 0x64
    lwz r29, 0x0(r23)
    mr r30, r3
    add r4, r0, r29
    addi r0, r4, 0x3
    clrrwi r4, r0, 2
    subf. r0, r24, r4
    ble lbl_fn_8059F72C_0000011C
    li r3, 0x0
    b lbl_fn_8059F72C_00000204
lbl_fn_8059F72C_0000011C:
    stw r4, 0x0(r23)
    li r28, 0x0
    lis r31, lbl_80762810@ha
    stw r29, 0x40(r21)
    stw r3, 0x3c(r21)
    b lbl_fn_8059F72C_000001F8
lbl_fn_8059F72C_00000134:
    cmpwi r29, 0x0
    mr r27, r29
    beq lbl_fn_8059F72C_0000014C
    mr r3, r29
    bl fn_80717990
    mr r27, r3
lbl_fn_8059F72C_0000014C:
    mr r3, r22
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_8059E370
    cmpwi r3, 0x0
    beq lbl_fn_8059F72C_000001F0
    lwz r4, 0x8(r1)
    mr r3, r27
    bl fn_80718130
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8059F72C_000001F0
    li r26, 0x0
    b lbl_fn_8059F72C_000001DC
lbl_fn_8059F72C_00000184:
    lwz r6, 0xc(r1)
    mr r3, r21
    mr r4, r23
    mr r5, r24
    bl fn_8059F660
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_8059F72C_000001BC
    addi r3, r31, lbl_80762810@l
    mr r6, r28
    addi r5, r3, 0x259
    li r4, 0x1ba
    crclr 6
    bl fn_80724E90
lbl_fn_8059F72C_000001BC:
    cmpwi r25, 0x0
    bne lbl_fn_8059F72C_000001CC
    li r3, 0x0
    b lbl_fn_8059F72C_00000204
lbl_fn_8059F72C_000001CC:
    mr r3, r27
    mr r4, r25
    bl fn_807182B0
    addi r26, r26, 0x1
lbl_fn_8059F72C_000001DC:
    lwz r4, 0x8(r1)
    cmpw r26, r4
    blt lbl_fn_8059F72C_00000184
    mr r3, r27
    bl fn_807181C0
lbl_fn_8059F72C_000001F0:
    addi r28, r28, 0x1
    addi r29, r29, 0x64
lbl_fn_8059F72C_000001F8:
    cmplw r28, r30
    blt lbl_fn_8059F72C_00000134
    li r3, 0x1
lbl_fn_8059F72C_00000204:
    lmw r21, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8059F878(void)
{
    nofralloc
    stwu r1, -0x1270(r1)
    mflr r0
    stw r0, 0x1274(r1)
    stmw r18, 0x1238(r1)
    mr r31, r3
    li r19, 0x0
    li r18, 0x0
    lis r20, lbl_80762810@ha
    b lbl_fn_8059F878_00000274
lbl_fn_8059F878_0000023C:
    cmplw r19, r8
    blt lbl_fn_8059F878_00000260
    addi r3, r20, lbl_80762810@l
    mr r6, r19
    li r4, 0x2b9
    li r7, 0x0
    addi r5, r3, 0x28a
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000260:
    lwz r0, 0x40(r31)
    add r3, r0, r18
    bl fn_80717B80
    addi r18, r18, 0x64
    addi r19, r19, 0x1
lbl_fn_8059F878_00000274:
    lwz r8, 0x3c(r31)
    cmplw r19, r8
    blt lbl_fn_8059F878_0000023C
    lwz r0, 0x48(r31)
    cmplwi r0, 0x2
    blt lbl_fn_8059F878_000004CC
    addi r30, r31, 0x54
    mr r3, r30
    bl fn_805F3130
    lis r4, fn_8059E990@ha
    lis r5, fn_8059E9A8@ha
    addi r3, r1, 0xc38
    li r6, 0xc
    addi r4, r4, fn_8059E990@l
    addi r5, r5, fn_8059E9A8@l
    li r7, 0x80
    bl fn_806958E0
    lis r29, lbl_80797128@ha
    lis r28, lbl_80797104@ha
    lis r27, lbl_807970C8@ha
    lis r26, lbl_807970A4@ha
    lis r25, lbl_807970F8@ha
    lis r24, lbl_807970D4@ha
    lis r21, lbl_80797098@ha
    lis r20, lbl_80797074@ha
    b lbl_fn_8059F878_000003AC
lbl_fn_8059F878_000002DC:
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_000002F8
    addi r3, r29, lbl_80797128@l
    addi r5, r28, lbl_80797104@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_000002F8:
    lwz r22, 0x4c(r31)
    cmpwi r22, 0x0
    bne lbl_fn_8059F878_00000318
    addi r3, r27, lbl_807970C8@l
    addi r5, r26, lbl_807970A4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000318:
    subic. r23, r22, 0xf0
    bne lbl_fn_8059F878_00000334
    addi r3, r25, lbl_807970F8@l
    addi r5, r24, lbl_807970D4@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000334:
    lwz r0, 0x4c(r31)
    addi r3, r31, 0x48
    stw r0, 0x28(r1)
    addi r4, r1, 0x28
    bl fn_80725200
    lbz r3, 0x98(r23)
    lwz r0, 0x50(r23)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_8059F878_00000364
    li r0, 0x7f
    b lbl_fn_8059F878_0000036C
lbl_fn_8059F878_00000364:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_8059F878_0000036C:
    mulli r0, r0, 0xc
    addi r19, r1, 0xc38
    cmpwi r23, 0x0
    add r19, r19, r0
    addi r22, r19, 0x4
    bne lbl_fn_8059F878_00000398
    addi r3, r21, lbl_80797098@l
    addi r5, r20, lbl_80797074@l
    li r4, 0x233
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000398:
    stw r22, 0x2c(r1)
    mr r3, r19
    addi r4, r1, 0x2c
    addi r5, r23, 0xf0
    bl fn_807252A0
lbl_fn_8059F878_000003AC:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_000002DC
    addi r18, r1, 0xc38
    li r19, 0x0
    lis r29, lbl_80797128@ha
    lis r28, lbl_80797104@ha
    lis r26, lbl_807970C8@ha
    lis r25, lbl_807970A4@ha
    lis r24, lbl_807970F8@ha
    lis r22, lbl_807970D4@ha
    lis r21, lbl_80797098@ha
    lis r20, lbl_80797074@ha
lbl_fn_8059F878_000003E0:
    lwz r0, 0x0(r18)
    cmpwi r0, 0x0
    beq lbl_fn_8059F878_0000049C
    addi r23, r31, 0x4c
    b lbl_fn_8059F878_00000490
lbl_fn_8059F878_000003F4:
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_00000410
    addi r3, r29, lbl_80797128@l
    addi r5, r28, lbl_80797104@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000410:
    lwz r27, 0x4(r18)
    cmpwi r27, 0x0
    bne lbl_fn_8059F878_00000430
    addi r3, r26, lbl_807970C8@l
    addi r5, r25, lbl_807970A4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000430:
    subic. r27, r27, 0xf0
    bne lbl_fn_8059F878_0000044C
    addi r3, r24, lbl_807970F8@l
    addi r5, r22, lbl_807970D4@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_0000044C:
    lwz r0, 0x4(r18)
    mr r3, r18
    stw r0, 0x30(r1)
    addi r4, r1, 0x30
    bl fn_80725200
    cmpwi r27, 0x0
    bne lbl_fn_8059F878_0000047C
    addi r3, r21, lbl_80797098@l
    addi r5, r20, lbl_80797074@l
    li r4, 0x233
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_0000047C:
    stw r23, 0x34(r1)
    addi r3, r31, 0x48
    addi r4, r1, 0x34
    addi r5, r27, 0xf0
    bl fn_807252A0
lbl_fn_8059F878_00000490:
    lwz r0, 0x0(r18)
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_000003F4
lbl_fn_8059F878_0000049C:
    addi r19, r19, 0x1
    addi r18, r18, 0xc
    cmpwi r19, 0x80
    blt lbl_fn_8059F878_000003E0
    lis r4, fn_8059E9A8@ha
    addi r3, r1, 0xc38
    addi r4, r4, fn_8059E9A8@l
    li r5, 0xc
    li r6, 0x80
    bl fn_806959D8
    mr r3, r30
    bl fn_805F3210
lbl_fn_8059F878_000004CC:
    lwz r0, 0x70(r31)
    cmplwi r0, 0x2
    blt lbl_fn_8059F878_00000718
    addi r30, r31, 0x7c
    mr r3, r30
    bl fn_805F3130
    lis r4, fn_8059EA00@ha
    lis r5, fn_8059EA18@ha
    addi r3, r1, 0x638
    li r6, 0xc
    addi r4, r4, fn_8059EA00@l
    addi r5, r5, fn_8059EA18@l
    li r7, 0x80
    bl fn_806958E0
    lis r29, lbl_80797068@ha
    lis r28, lbl_80797044@ha
    lis r27, lbl_80797008@ha
    lis r26, lbl_80796FE4@ha
    lis r25, lbl_80797038@ha
    lis r24, lbl_80797014@ha
    lis r21, lbl_80796FD8@ha
    lis r20, lbl_80796FB4@ha
    b lbl_fn_8059F878_000005F8
lbl_fn_8059F878_00000528:
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_00000544
    addi r3, r29, lbl_80797068@l
    addi r5, r28, lbl_80797044@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000544:
    lwz r22, 0x74(r31)
    cmpwi r22, 0x0
    bne lbl_fn_8059F878_00000564
    addi r3, r27, lbl_80797008@l
    addi r5, r26, lbl_80796FE4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000564:
    subic. r23, r22, 0xf0
    bne lbl_fn_8059F878_00000580
    addi r3, r25, lbl_80797038@l
    addi r5, r24, lbl_80797014@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000580:
    lwz r0, 0x74(r31)
    addi r3, r31, 0x70
    stw r0, 0x18(r1)
    addi r4, r1, 0x18
    bl fn_80725200
    lbz r3, 0x98(r23)
    lwz r0, 0x50(r23)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_8059F878_000005B0
    li r0, 0x7f
    b lbl_fn_8059F878_000005B8
lbl_fn_8059F878_000005B0:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_8059F878_000005B8:
    mulli r0, r0, 0xc
    addi r19, r1, 0x638
    cmpwi r23, 0x0
    add r19, r19, r0
    addi r22, r19, 0x4
    bne lbl_fn_8059F878_000005E4
    addi r3, r21, lbl_80796FD8@l
    addi r5, r20, lbl_80796FB4@l
    li r4, 0x233
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_000005E4:
    stw r22, 0x1c(r1)
    mr r3, r19
    addi r4, r1, 0x1c
    addi r5, r23, 0xf0
    bl fn_807252A0
lbl_fn_8059F878_000005F8:
    lwz r0, 0x70(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_00000528
    addi r18, r1, 0x638
    li r19, 0x0
    lis r29, lbl_80797068@ha
    lis r28, lbl_80797044@ha
    lis r26, lbl_80797008@ha
    lis r25, lbl_80796FE4@ha
    lis r24, lbl_80797038@ha
    lis r22, lbl_80797014@ha
    lis r21, lbl_80796FD8@ha
    lis r20, lbl_80796FB4@ha
lbl_fn_8059F878_0000062C:
    lwz r0, 0x0(r18)
    cmpwi r0, 0x0
    beq lbl_fn_8059F878_000006E8
    addi r23, r31, 0x74
    b lbl_fn_8059F878_000006DC
lbl_fn_8059F878_00000640:
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_0000065C
    addi r3, r29, lbl_80797068@l
    addi r5, r28, lbl_80797044@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_0000065C:
    lwz r27, 0x4(r18)
    cmpwi r27, 0x0
    bne lbl_fn_8059F878_0000067C
    addi r3, r26, lbl_80797008@l
    addi r5, r25, lbl_80796FE4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_0000067C:
    subic. r27, r27, 0xf0
    bne lbl_fn_8059F878_00000698
    addi r3, r24, lbl_80797038@l
    addi r5, r22, lbl_80797014@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000698:
    lwz r0, 0x4(r18)
    mr r3, r18
    stw r0, 0x20(r1)
    addi r4, r1, 0x20
    bl fn_80725200
    cmpwi r27, 0x0
    bne lbl_fn_8059F878_000006C8
    addi r3, r21, lbl_80796FD8@l
    addi r5, r20, lbl_80796FB4@l
    li r4, 0x233
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_000006C8:
    stw r23, 0x24(r1)
    addi r3, r31, 0x70
    addi r4, r1, 0x24
    addi r5, r27, 0xf0
    bl fn_807252A0
lbl_fn_8059F878_000006DC:
    lwz r0, 0x0(r18)
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_00000640
lbl_fn_8059F878_000006E8:
    addi r19, r19, 0x1
    addi r18, r18, 0xc
    cmpwi r19, 0x80
    blt lbl_fn_8059F878_0000062C
    lis r4, fn_8059EA18@ha
    addi r3, r1, 0x638
    addi r4, r4, fn_8059EA18@l
    li r5, 0xc
    li r6, 0x80
    bl fn_806959D8
    mr r3, r30
    bl fn_805F3210
lbl_fn_8059F878_00000718:
    lwz r0, 0x98(r31)
    cmplwi r0, 0x2
    blt lbl_fn_8059F878_00000964
    addi r24, r31, 0xa4
    mr r3, r24
    bl fn_805F3130
    lis r4, fn_8059EA70@ha
    lis r5, fn_8059EA88@ha
    addi r3, r1, 0x38
    li r6, 0xc
    addi r4, r4, fn_8059EA70@l
    addi r5, r5, fn_8059EA88@l
    li r7, 0x80
    bl fn_806958E0
    lis r25, lbl_80796FA8@ha
    lis r26, lbl_80796F84@ha
    lis r27, lbl_80796F48@ha
    lis r28, lbl_80796F24@ha
    lis r29, lbl_80796F78@ha
    lis r30, lbl_80796F54@ha
    lis r21, lbl_80796F18@ha
    lis r20, lbl_80796EF4@ha
    b lbl_fn_8059F878_00000844
lbl_fn_8059F878_00000774:
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_00000790
    addi r3, r25, lbl_80796FA8@l
    addi r5, r26, lbl_80796F84@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000790:
    lwz r22, 0x9c(r31)
    cmpwi r22, 0x0
    bne lbl_fn_8059F878_000007B0
    addi r3, r27, lbl_80796F48@l
    addi r5, r28, lbl_80796F24@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_000007B0:
    subic. r23, r22, 0xf0
    bne lbl_fn_8059F878_000007CC
    addi r3, r29, lbl_80796F78@l
    addi r5, r30, lbl_80796F54@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_000007CC:
    lwz r0, 0x9c(r31)
    addi r3, r31, 0x98
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_80725200
    lbz r3, 0x98(r23)
    lwz r0, 0x50(r23)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_8059F878_000007FC
    li r0, 0x7f
    b lbl_fn_8059F878_00000804
lbl_fn_8059F878_000007FC:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_8059F878_00000804:
    mulli r0, r0, 0xc
    addi r19, r1, 0x38
    cmpwi r23, 0x0
    add r19, r19, r0
    addi r22, r19, 0x4
    bne lbl_fn_8059F878_00000830
    addi r3, r21, lbl_80796F18@l
    addi r5, r20, lbl_80796EF4@l
    li r4, 0x233
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000830:
    stw r22, 0xc(r1)
    mr r3, r19
    addi r4, r1, 0xc
    addi r5, r23, 0xf0
    bl fn_807252A0
lbl_fn_8059F878_00000844:
    lwz r0, 0x98(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_00000774
    addi r18, r1, 0x38
    li r19, 0x0
    lis r20, lbl_80796FA8@ha
    lis r21, lbl_80796F84@ha
    lis r30, lbl_80796F48@ha
    lis r29, lbl_80796F24@ha
    lis r28, lbl_80796F78@ha
    lis r27, lbl_80796F54@ha
    lis r26, lbl_80796F18@ha
    lis r25, lbl_80796EF4@ha
lbl_fn_8059F878_00000878:
    lwz r0, 0x0(r18)
    cmpwi r0, 0x0
    beq lbl_fn_8059F878_00000934
    addi r23, r31, 0x9c
    b lbl_fn_8059F878_00000928
lbl_fn_8059F878_0000088C:
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_000008A8
    addi r3, r20, lbl_80796FA8@l
    addi r5, r21, lbl_80796F84@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_000008A8:
    lwz r22, 0x4(r18)
    cmpwi r22, 0x0
    bne lbl_fn_8059F878_000008C8
    addi r3, r30, lbl_80796F48@l
    addi r5, r29, lbl_80796F24@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_000008C8:
    subic. r22, r22, 0xf0
    bne lbl_fn_8059F878_000008E4
    addi r3, r28, lbl_80796F78@l
    addi r5, r27, lbl_80796F54@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_000008E4:
    lwz r0, 0x4(r18)
    mr r3, r18
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    bl fn_80725200
    cmpwi r22, 0x0
    bne lbl_fn_8059F878_00000914
    addi r3, r26, lbl_80796F18@l
    addi r5, r25, lbl_80796EF4@l
    li r4, 0x233
    crclr 6
    bl fn_80724DF0
lbl_fn_8059F878_00000914:
    stw r23, 0x14(r1)
    addi r3, r31, 0x98
    addi r4, r1, 0x14
    addi r5, r22, 0xf0
    bl fn_807252A0
lbl_fn_8059F878_00000928:
    lwz r0, 0x0(r18)
    cmpwi r0, 0x0
    bne lbl_fn_8059F878_0000088C
lbl_fn_8059F878_00000934:
    addi r19, r19, 0x1
    addi r18, r18, 0xc
    cmpwi r19, 0x80
    blt lbl_fn_8059F878_00000878
    lis r4, fn_8059EA88@ha
    addi r3, r1, 0x38
    addi r4, r4, fn_8059EA88@l
    li r5, 0xc
    li r6, 0x80
    bl fn_806959D8
    mr r3, r24
    bl fn_805F3210
lbl_fn_8059F878_00000964:
    lmw r18, 0x1238(r1)
    lwz r0, 0x1274(r1)
    mtlr r0
    addi r1, r1, 0x1270
    blr
}

asm void fn_8059FFD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x10(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_8059FFD8_000009B0
    lis r3, lbl_80762810@ha
    li r4, 0x2b3
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x2cb
    crclr 6
    bl fn_80724DF0
lbl_fn_8059FFD8_000009B0:
    lwz r3, 0x10(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A0028(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lwz r0, 0x1c(r3)
    stmw r27, 0x3c(r1)
    mr r27, r3
    cmpwi r0, 0x0
    mr r28, r4
    beq lbl_fn_805A0028_00000A0C
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805A0028_00000A0C
    b lbl_fn_805A0028_00000B68
lbl_fn_805A0028_00000A0C:
    lwz r3, 0x10(r27)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805A0028_00000A30
    b lbl_fn_805A0028_00000B68
lbl_fn_805A0028_00000A30:
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    bne lbl_fn_805A0028_00000A60
    bne lbl_fn_805A0028_00000A58
    lis r3, lbl_80762810@ha
    li r4, 0x3ae
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x311
    crclr 6
    bl fn_80724E90
lbl_fn_805A0028_00000A58:
    li r3, 0x0
    b lbl_fn_805A0028_00000A80
lbl_fn_805A0028_00000A60:
    lwz r0, 0x0(r3)
    cmplw r28, r0
    blt lbl_fn_805A0028_00000A74
    li r3, 0x0
    b lbl_fn_805A0028_00000A80
lbl_fn_805A0028_00000A74:
    slwi r0, r28, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
lbl_fn_805A0028_00000A80:
    cmpwi r3, 0x0
    beq lbl_fn_805A0028_00000A8C
    b lbl_fn_805A0028_00000B68
lbl_fn_805A0028_00000A8C:
    lwz r3, 0x10(r27)
    mr r4, r28
    addi r5, r1, 0x10
    bl fn_8059E3A8
    cmpwi r3, 0x0
    bne lbl_fn_805A0028_00000AAC
    li r3, 0x0
    b lbl_fn_805A0028_00000B68
lbl_fn_805A0028_00000AAC:
    li r29, 0x0
    lis r31, lbl_80762810@ha
    b lbl_fn_805A0028_00000B58
lbl_fn_805A0028_00000AB8:
    lwz r3, 0x10(r27)
    mr r4, r28
    mr r5, r29
    addi r6, r1, 0x8
    bl fn_8059E3B0
    cmpwi r3, 0x0
    beq lbl_fn_805A0028_00000B54
    lwz r4, 0x14(r27)
    lwz r3, 0x8(r1)
    cmpwi r4, 0x0
    bne lbl_fn_805A0028_00000B04
    bne lbl_fn_805A0028_00000AFC
    addi r3, r31, lbl_80762810@l
    li r4, 0x348
    addi r5, r3, 0x364
    crclr 6
    bl fn_80724E90
lbl_fn_805A0028_00000AFC:
    li r30, 0x0
    b lbl_fn_805A0028_00000B24
lbl_fn_805A0028_00000B04:
    lwz r0, 0x0(r4)
    cmplw r3, r0
    blt lbl_fn_805A0028_00000B18
    li r30, 0x0
    b lbl_fn_805A0028_00000B24
lbl_fn_805A0028_00000B18:
    slwi r0, r3, 3
    add r3, r4, r0
    lwz r30, 0x4(r3)
lbl_fn_805A0028_00000B24:
    cmpwi r30, 0x0
    beq lbl_fn_805A0028_00000B54
    lwz r3, 0x10(r27)
    addi r6, r1, 0x20
    lwz r4, 0x8(r1)
    lwz r5, 0xc(r1)
    bl fn_8059E398
    cmpwi r3, 0x0
    beq lbl_fn_805A0028_00000B54
    lwz r0, 0x24(r1)
    add r3, r30, r0
    b lbl_fn_805A0028_00000B68
lbl_fn_805A0028_00000B54:
    addi r29, r29, 0x1
lbl_fn_805A0028_00000B58:
    lwz r0, 0x1c(r1)
    cmplw r29, r0
    blt lbl_fn_805A0028_00000AB8
    li r3, 0x0
lbl_fn_805A0028_00000B68:
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805A01DC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lwz r0, 0x1c(r3)
    stmw r27, 0x3c(r1)
    mr r27, r3
    cmpwi r0, 0x0
    mr r28, r4
    beq lbl_fn_805A01DC_00000BC0
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805A01DC_00000BC0
    b lbl_fn_805A01DC_00000D1C
lbl_fn_805A01DC_00000BC0:
    lwz r3, 0x10(r27)
    mr r4, r28
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805A01DC_00000BE4
    b lbl_fn_805A01DC_00000D1C
lbl_fn_805A01DC_00000BE4:
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    bne lbl_fn_805A01DC_00000C14
    bne lbl_fn_805A01DC_00000C0C
    lis r3, lbl_80762810@ha
    li r4, 0x3e1
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x3b9
    crclr 6
    bl fn_80724E90
lbl_fn_805A01DC_00000C0C:
    li r3, 0x0
    b lbl_fn_805A01DC_00000C34
lbl_fn_805A01DC_00000C14:
    lwz r0, 0x0(r3)
    cmplw r28, r0
    blt lbl_fn_805A01DC_00000C28
    li r3, 0x0
    b lbl_fn_805A01DC_00000C34
lbl_fn_805A01DC_00000C28:
    slwi r0, r28, 3
    add r3, r3, r0
    lwz r3, 0x8(r3)
lbl_fn_805A01DC_00000C34:
    cmpwi r3, 0x0
    beq lbl_fn_805A01DC_00000C40
    b lbl_fn_805A01DC_00000D1C
lbl_fn_805A01DC_00000C40:
    lwz r3, 0x10(r27)
    mr r4, r28
    addi r5, r1, 0x10
    bl fn_8059E3A8
    cmpwi r3, 0x0
    bne lbl_fn_805A01DC_00000C60
    li r3, 0x0
    b lbl_fn_805A01DC_00000D1C
lbl_fn_805A01DC_00000C60:
    li r29, 0x0
    lis r31, lbl_80762810@ha
    b lbl_fn_805A01DC_00000D0C
lbl_fn_805A01DC_00000C6C:
    lwz r3, 0x10(r27)
    mr r4, r28
    mr r5, r29
    addi r6, r1, 0x8
    bl fn_8059E3B0
    cmpwi r3, 0x0
    beq lbl_fn_805A01DC_00000D08
    lwz r4, 0x14(r27)
    lwz r3, 0x8(r1)
    cmpwi r4, 0x0
    bne lbl_fn_805A01DC_00000CB8
    bne lbl_fn_805A01DC_00000CB0
    addi r3, r31, lbl_80762810@l
    li r4, 0x37b
    addi r5, r3, 0x414
    crclr 6
    bl fn_80724E90
lbl_fn_805A01DC_00000CB0:
    li r30, 0x0
    b lbl_fn_805A01DC_00000CD8
lbl_fn_805A01DC_00000CB8:
    lwz r0, 0x0(r4)
    cmplw r3, r0
    blt lbl_fn_805A01DC_00000CCC
    li r30, 0x0
    b lbl_fn_805A01DC_00000CD8
lbl_fn_805A01DC_00000CCC:
    slwi r0, r3, 3
    add r3, r4, r0
    lwz r30, 0x8(r3)
lbl_fn_805A01DC_00000CD8:
    cmpwi r30, 0x0
    beq lbl_fn_805A01DC_00000D08
    lwz r3, 0x10(r27)
    addi r6, r1, 0x20
    lwz r4, 0x8(r1)
    lwz r5, 0xc(r1)
    bl fn_8059E398
    cmpwi r3, 0x0
    beq lbl_fn_805A01DC_00000D08
    lwz r0, 0x2c(r1)
    add r3, r30, r0
    b lbl_fn_805A01DC_00000D1C
lbl_fn_805A01DC_00000D08:
    addi r29, r29, 0x1
lbl_fn_805A01DC_00000D0C:
    lwz r0, 0x1c(r1)
    cmplw r29, r0
    blt lbl_fn_805A01DC_00000C6C
    li r3, 0x0
lbl_fn_805A01DC_00000D1C:
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805A0390(void)
{
    nofralloc
    mr r8, r6
    mr r9, r7
    li r6, 0x0
    li r7, 0x0
    b fn_805A03A4
}

asm void fn_805A03A4(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xd4(r1)
    stmw r14, 0x88(r1)
    mr r15, r3
    mr r16, r5
    mr r17, r6
    stw r4, 0x8(r1)
    mr r14, r9
    stw r7, 0xc(r1)
    stb r8, 0x10(r1)
    bne lbl_fn_805A03A4_00000D90
    lis r3, lbl_80762810@ha
    li r4, 0x454
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x64d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00000D90:
    lwz r3, 0x10(r15)
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_00000DA4
    li r3, 0x0
    b lbl_fn_805A03A4_00000DA8
lbl_fn_805A03A4_00000DA4:
    bl fn_8059E284
lbl_fn_805A03A4_00000DA8:
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_00000DB8
    li r3, 0x7
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00000DB8:
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805A03A4_00000DCC
    bl fn_80717630
lbl_fn_805A03A4_00000DCC:
    lwz r3, 0x10(r15)
    mr r4, r16
    addi r5, r1, 0x48
    bl fn_8059E350
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_00000DEC
    li r3, 0x3
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00000DEC:
    lwz r0, 0x54(r1)
    cmpwi r14, 0x0
    stw r0, 0x70(r1)
    li r0, 0x0
    lwz r18, 0x4c(r1)
    stw r0, 0x78(r1)
    li r0, 0x0
    lwz r19, 0x50(r1)
    stw r0, 0x74(r1)
    li r0, 0x0
    stw r0, 0x6c(r1)
    li r0, 0x0
    stw r0, 0x68(r1)
    beq lbl_fn_805A03A4_00000E80
    lwz r3, 0x0(r14)
    clrlwi. r0, r3, 31
    beq lbl_fn_805A03A4_00000E40
    lwz r0, 0x4(r14)
    stw r0, 0x78(r1)
    lwz r0, 0x8(r14)
    stw r0, 0x74(r1)
lbl_fn_805A03A4_00000E40:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_805A03A4_00000E50
    lwz r0, 0x10(r14)
    stw r0, 0x70(r1)
lbl_fn_805A03A4_00000E50:
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_fn_805A03A4_00000E5C
    lwz r18, 0xc(r14)
lbl_fn_805A03A4_00000E5C:
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_fn_805A03A4_00000E68
    lwz r19, 0x14(r14)
lbl_fn_805A03A4_00000E68:
    rlwinm. r0, r3, 0, 27, 27
    beq lbl_fn_805A03A4_00000E80
    lwz r0, 0x18(r14)
    stw r0, 0x6c(r1)
    lwz r0, 0x1c(r14)
    stw r0, 0x68(r1)
lbl_fn_805A03A4_00000E80:
    lbz r0, 0x10(r1)
    lwz r23, 0x70(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805A03A4_00000E98
    mr r3, r23
    subi r23, r3, 0x1
lbl_fn_805A03A4_00000E98:
    cmpwi r17, 0x0
    li r22, 0x0
    beq lbl_fn_805A03A4_00000EB4
    mr r3, r17
    mr r4, r16
    bl fn_8070AF30
    mr r22, r3
lbl_fn_805A03A4_00000EB4:
    add r14, r23, r22
    cmpwi r14, 0x7f
    ble lbl_fn_805A03A4_00000EC8
    li r20, 0x7f
    b lbl_fn_805A03A4_00000ED0
lbl_fn_805A03A4_00000EC8:
    srawi r0, r14, 31
    andc r20, r14, r0
lbl_fn_805A03A4_00000ED0:
    lwz r0, 0xc(r1)
    li r21, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_805A03A4_00000F34
    cmpwi r19, 0x0
    blt lbl_fn_805A03A4_00000EF0
    cmpwi r19, 0x4
    blt lbl_fn_805A03A4_00000EF8
lbl_fn_805A03A4_00000EF0:
    li r21, 0x0
    b lbl_fn_805A03A4_00000F04
lbl_fn_805A03A4_00000EF8:
    slwi r3, r19, 4
    add r3, r0, r3
    addi r21, r3, 0x8
lbl_fn_805A03A4_00000F04:
    cmpwi r21, 0x0
    bne lbl_fn_805A03A4_00000F34
    lis r3, lbl_80762810@ha
    mr r6, r19
    addi r3, r3, lbl_80762810@l
    li r4, 0x49d
    addi r5, r3, 0x674
    li r7, 0x3
    crclr 6
    bl fn_80724E90
    li r3, 0xa
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00000F34:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r8, 0x3c(r15)
    cmplw r18, r8
    blt lbl_fn_805A03A4_00000F6C
    lis r3, lbl_80762810@ha
    mr r6, r18
    addi r3, r3, lbl_80762810@l
    li r4, 0x2b9
    addi r5, r3, 0x28a
    li r7, 0x0
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00000F6C:
    mulli r0, r18, 0x64
    lwz r3, 0x40(r15)
    mr r4, r20
    add r0, r3, r0
    stw r0, 0x7c(r1)
    mr r3, r0
    bl fn_807181D0
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_00000FA4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00000FA4:
    cmpwi r21, 0x0
    beq lbl_fn_805A03A4_00000FD4
    mr r3, r21
    mr r4, r20
    bl fn_8070D290
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_00000FD4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x1
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00000FD4:
    lwz r3, 0x10(r15)
    mr r4, r16
    li r20, 0x0
    li r19, 0x0
    li r18, 0x0
    bl fn_8059E348
    cmpwi r3, 0x1
    beq lbl_fn_805A03A4_00001008
    cmpwi r3, 0x2
    beq lbl_fn_805A03A4_000012E8
    cmpwi r3, 0x3
    beq lbl_fn_805A03A4_000015C8
    b lbl_fn_805A03A4_000018A8
lbl_fn_805A03A4_00001008:
    addic. r0, r15, 0x44
    bne lbl_fn_805A03A4_00001028
    lis r3, lbl_80762810@ha
    li r4, 0x41a
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x69e
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00001028:
    cmpwi r14, 0x7f
    ble lbl_fn_805A03A4_00001038
    li r26, 0x7f
    b lbl_fn_805A03A4_00001040
lbl_fn_805A03A4_00001038:
    srawi r0, r14, 31
    andc r26, r14, r0
lbl_fn_805A03A4_00001040:
    addi r27, r15, 0x54
    mr r3, r27
    bl fn_805F3130
    li r20, 0x0
    lis r28, lbl_80797128@ha
    lis r29, lbl_80797104@ha
    lis r30, lbl_807970C8@ha
    lis r31, lbl_807970A4@ha
    lis r14, lbl_807970F8@ha
    b lbl_fn_805A03A4_000011B8
lbl_fn_805A03A4_00001068:
    addi r3, r15, 0x44
    bl fn_8070F0D0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_00001098
    mr r20, r3
    beq lbl_fn_805A03A4_000011B8
    mr r5, r23
    mr r6, r22
    addi r4, r15, 0x44
    bl fn_80712C90
    mr r20, r3
    b lbl_fn_805A03A4_000011B8
lbl_fn_805A03A4_00001098:
    lwz r0, 0x48(r15)
    cmpwi r0, 0x0
    bne lbl_fn_805A03A4_000010AC
    li r25, 0x0
    b lbl_fn_805A03A4_00001104
lbl_fn_805A03A4_000010AC:
    bne lbl_fn_805A03A4_000010C4
    addi r3, r28, lbl_80797128@l
    addi r5, r29, lbl_80797104@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000010C4:
    lwz r24, 0x4c(r15)
    cmpwi r24, 0x0
    bne lbl_fn_805A03A4_000010E4
    addi r3, r30, lbl_807970C8@l
    addi r5, r31, lbl_807970A4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000010E4:
    subic. r25, r24, 0xf0
    bne lbl_fn_805A03A4_00001104
    lis r4, lbl_807970D4@ha
    addi r3, r14, lbl_807970F8@l
    addi r5, r4, lbl_807970D4@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00001104:
    cmpwi r25, 0x0
    bne lbl_fn_805A03A4_0000111C
    mr r3, r27
    bl fn_805F3210
    li r20, 0x0
    b lbl_fn_805A03A4_00001268
lbl_fn_805A03A4_0000111C:
    lbz r3, 0x98(r25)
    lwz r0, 0x50(r25)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_805A03A4_00001138
    li r0, 0x7f
    b lbl_fn_805A03A4_00001140
lbl_fn_805A03A4_00001138:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_805A03A4_00001140:
    cmpw r26, r0
    bge lbl_fn_805A03A4_00001158
    mr r3, r27
    bl fn_805F3210
    li r20, 0x0
    b lbl_fn_805A03A4_00001268
lbl_fn_805A03A4_00001158:
    addi r3, r15, 0x54
    bl fn_805F3210
    li r3, 0x0
    bl fn_8070CA60
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_000011A4
    lwz r24, 0x9c(r25)
    li r3, 0x0
    bl fn_8070CAA0
    mr r7, r3
    lis r3, lbl_80796E34@ha
    lis r4, lbl_80796DF8@ha
    mr r6, r24
    addi r5, r4, lbl_80796DF8@l
    addi r3, r3, lbl_80796E34@l
    li r4, 0x85
    crclr 6
    bl fn_80724E90
lbl_fn_805A03A4_000011A4:
    mr r3, r25
    li r4, 0x0
    bl fn_80709AD0
    addi r3, r15, 0x54
    bl fn_805F3130
lbl_fn_805A03A4_000011B8:
    cmpwi r20, 0x0
    beq lbl_fn_805A03A4_00001068
    lwz r14, 0x4c(r15)
    addi r22, r15, 0x4c
    lis r24, lbl_807970C8@ha
    lis r23, lbl_807970A4@ha
    b lbl_fn_805A03A4_00001220
lbl_fn_805A03A4_000011D4:
    cmpwi r14, 0x0
    bne lbl_fn_805A03A4_000011F0
    addi r3, r24, lbl_807970C8@l
    addi r5, r23, lbl_807970A4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000011F0:
    lbz r3, -0x58(r14)
    lwz r0, -0xa0(r14)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_805A03A4_0000120C
    li r0, 0x7f
    b lbl_fn_805A03A4_00001214
lbl_fn_805A03A4_0000120C:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_805A03A4_00001214:
    cmpw r26, r0
    blt lbl_fn_805A03A4_00001228
    lwz r14, 0x0(r14)
lbl_fn_805A03A4_00001220:
    cmplw r14, r22
    bne lbl_fn_805A03A4_000011D4
lbl_fn_805A03A4_00001228:
    cmpwi r20, 0x0
    bne lbl_fn_805A03A4_0000124C
    lis r3, lbl_80797098@ha
    lis r5, lbl_80797074@ha
    addi r3, r3, lbl_80797098@l
    li r4, 0x233
    addi r5, r5, lbl_80797074@l
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_0000124C:
    stw r14, 0x1c(r1)
    addi r3, r15, 0x48
    addi r4, r1, 0x1c
    addi r5, r20, 0xf0
    bl fn_807252A0
    mr r3, r27
    bl fn_805F3210
lbl_fn_805A03A4_00001268:
    cmpwi r20, 0x0
    bne lbl_fn_805A03A4_00001278
    li r20, 0x0
    b lbl_fn_805A03A4_00001298
lbl_fn_805A03A4_00001278:
    mr r3, r20
    mr r4, r16
    bl fn_8070AFD0
    cmpwi r17, 0x0
    beq lbl_fn_805A03A4_00001298
    mr r3, r20
    mr r4, r17
    bl fn_8070AE60
lbl_fn_805A03A4_00001298:
    cmpwi r20, 0x0
    bne lbl_fn_805A03A4_000012E0
    li r3, 0x1
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_000012CC
    lis r3, lbl_80762810@ha
    mr r6, r16
    addi r3, r3, lbl_80762810@l
    li r4, 0x4c4
    addi r5, r3, 0x6c6
    crclr 6
    bl fn_80724E90
lbl_fn_805A03A4_000012CC:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x9
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_000012E0:
    mr r14, r20
    b lbl_fn_805A03A4_000018BC
lbl_fn_805A03A4_000012E8:
    addic. r0, r15, 0x6c
    bne lbl_fn_805A03A4_00001308
    lis r3, lbl_80762810@ha
    li r4, 0x41a
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x69e
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00001308:
    cmpwi r14, 0x7f
    ble lbl_fn_805A03A4_00001318
    li r28, 0x7f
    b lbl_fn_805A03A4_00001320
lbl_fn_805A03A4_00001318:
    srawi r0, r14, 31
    andc r28, r14, r0
lbl_fn_805A03A4_00001320:
    addi r27, r15, 0x7c
    mr r3, r27
    bl fn_805F3130
    li r19, 0x0
    lis r26, lbl_80797068@ha
    lis r25, lbl_80797044@ha
    lis r24, lbl_80797008@ha
    lis r14, lbl_80796FE4@ha
    lis r31, lbl_80797038@ha
    b lbl_fn_805A03A4_00001498
lbl_fn_805A03A4_00001348:
    addi r3, r15, 0x6c
    bl fn_8070F0D0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_00001378
    mr r19, r3
    beq lbl_fn_805A03A4_00001498
    mr r5, r23
    mr r6, r22
    addi r4, r15, 0x6c
    bl fn_8071C8E0
    mr r19, r3
    b lbl_fn_805A03A4_00001498
lbl_fn_805A03A4_00001378:
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    bne lbl_fn_805A03A4_0000138C
    li r29, 0x0
    b lbl_fn_805A03A4_000013E4
lbl_fn_805A03A4_0000138C:
    bne lbl_fn_805A03A4_000013A4
    addi r3, r26, lbl_80797068@l
    addi r5, r25, lbl_80797044@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000013A4:
    lwz r29, 0x74(r15)
    cmpwi r29, 0x0
    bne lbl_fn_805A03A4_000013C4
    addi r3, r24, lbl_80797008@l
    addi r5, r14, lbl_80796FE4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000013C4:
    subic. r29, r29, 0xf0
    bne lbl_fn_805A03A4_000013E4
    lis r4, lbl_80797014@ha
    addi r3, r31, lbl_80797038@l
    addi r5, r4, lbl_80797014@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000013E4:
    cmpwi r29, 0x0
    bne lbl_fn_805A03A4_000013FC
    mr r3, r27
    bl fn_805F3210
    li r19, 0x0
    b lbl_fn_805A03A4_00001548
lbl_fn_805A03A4_000013FC:
    lbz r3, 0x98(r29)
    lwz r0, 0x50(r29)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_805A03A4_00001418
    li r0, 0x7f
    b lbl_fn_805A03A4_00001420
lbl_fn_805A03A4_00001418:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_805A03A4_00001420:
    cmpw r28, r0
    bge lbl_fn_805A03A4_00001438
    mr r3, r27
    bl fn_805F3210
    li r19, 0x0
    b lbl_fn_805A03A4_00001548
lbl_fn_805A03A4_00001438:
    addi r3, r15, 0x7c
    bl fn_805F3210
    li r3, 0x1
    bl fn_8070CA60
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_00001484
    lwz r30, 0x9c(r29)
    li r3, 0x1
    bl fn_8070CAA0
    mr r7, r3
    lis r3, lbl_80796E88@ha
    lis r4, lbl_80796E4C@ha
    mr r6, r30
    addi r5, r4, lbl_80796E4C@l
    addi r3, r3, lbl_80796E88@l
    li r4, 0x85
    crclr 6
    bl fn_80724E90
lbl_fn_805A03A4_00001484:
    mr r3, r29
    li r4, 0x0
    bl fn_80709AD0
    addi r3, r15, 0x7c
    bl fn_805F3130
lbl_fn_805A03A4_00001498:
    cmpwi r19, 0x0
    beq lbl_fn_805A03A4_00001348
    lwz r14, 0x74(r15)
    addi r22, r15, 0x74
    lis r24, lbl_80797008@ha
    lis r23, lbl_80796FE4@ha
    b lbl_fn_805A03A4_00001500
lbl_fn_805A03A4_000014B4:
    cmpwi r14, 0x0
    bne lbl_fn_805A03A4_000014D0
    addi r3, r24, lbl_80797008@l
    addi r5, r23, lbl_80796FE4@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000014D0:
    lbz r3, -0x58(r14)
    lwz r0, -0xa0(r14)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_805A03A4_000014EC
    li r0, 0x7f
    b lbl_fn_805A03A4_000014F4
lbl_fn_805A03A4_000014EC:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_805A03A4_000014F4:
    cmpw r28, r0
    blt lbl_fn_805A03A4_00001508
    lwz r14, 0x0(r14)
lbl_fn_805A03A4_00001500:
    cmplw r14, r22
    bne lbl_fn_805A03A4_000014B4
lbl_fn_805A03A4_00001508:
    cmpwi r19, 0x0
    bne lbl_fn_805A03A4_0000152C
    lis r3, lbl_80796FD8@ha
    lis r5, lbl_80796FB4@ha
    addi r3, r3, lbl_80796FD8@l
    li r4, 0x233
    addi r5, r5, lbl_80796FB4@l
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_0000152C:
    stw r14, 0x18(r1)
    addi r3, r15, 0x70
    addi r4, r1, 0x18
    addi r5, r19, 0xf0
    bl fn_807252A0
    mr r3, r27
    bl fn_805F3210
lbl_fn_805A03A4_00001548:
    cmpwi r19, 0x0
    bne lbl_fn_805A03A4_00001558
    li r19, 0x0
    b lbl_fn_805A03A4_00001578
lbl_fn_805A03A4_00001558:
    mr r3, r19
    mr r4, r16
    bl fn_8070AFD0
    cmpwi r17, 0x0
    beq lbl_fn_805A03A4_00001578
    mr r3, r19
    mr r4, r17
    bl fn_8070AE60
lbl_fn_805A03A4_00001578:
    cmpwi r19, 0x0
    bne lbl_fn_805A03A4_000015C0
    li r3, 0x2
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_000015AC
    lis r3, lbl_80762810@ha
    mr r6, r16
    addi r3, r3, lbl_80762810@l
    li r4, 0x4d8
    addi r5, r3, 0x706
    crclr 6
    bl fn_80724E90
lbl_fn_805A03A4_000015AC:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x9
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_000015C0:
    mr r14, r19
    b lbl_fn_805A03A4_000018BC
lbl_fn_805A03A4_000015C8:
    addic. r0, r15, 0x94
    bne lbl_fn_805A03A4_000015E8
    lis r3, lbl_80762810@ha
    li r4, 0x41a
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x69e
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000015E8:
    cmpwi r14, 0x7f
    ble lbl_fn_805A03A4_000015F8
    li r28, 0x7f
    b lbl_fn_805A03A4_00001600
lbl_fn_805A03A4_000015F8:
    srawi r0, r14, 31
    andc r28, r14, r0
lbl_fn_805A03A4_00001600:
    addi r27, r15, 0xa4
    mr r3, r27
    bl fn_805F3130
    li r18, 0x0
    lis r26, lbl_80796FA8@ha
    lis r25, lbl_80796F84@ha
    lis r24, lbl_80796F48@ha
    lis r14, lbl_80796F24@ha
    lis r31, lbl_80796F78@ha
    b lbl_fn_805A03A4_00001778
lbl_fn_805A03A4_00001628:
    addi r3, r15, 0x94
    bl fn_8070F0D0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_00001658
    mr r18, r3
    beq lbl_fn_805A03A4_00001778
    mr r5, r23
    mr r6, r22
    addi r4, r15, 0x94
    bl fn_807214D0
    mr r18, r3
    b lbl_fn_805A03A4_00001778
lbl_fn_805A03A4_00001658:
    lwz r0, 0x98(r15)
    cmpwi r0, 0x0
    bne lbl_fn_805A03A4_0000166C
    li r29, 0x0
    b lbl_fn_805A03A4_000016C4
lbl_fn_805A03A4_0000166C:
    bne lbl_fn_805A03A4_00001684
    addi r3, r26, lbl_80796FA8@l
    addi r5, r25, lbl_80796F84@l
    li r4, 0x1f1
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00001684:
    lwz r29, 0x9c(r15)
    cmpwi r29, 0x0
    bne lbl_fn_805A03A4_000016A4
    addi r3, r24, lbl_80796F48@l
    addi r5, r14, lbl_80796F24@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000016A4:
    subic. r29, r29, 0xf0
    bne lbl_fn_805A03A4_000016C4
    lis r4, lbl_80796F54@ha
    addi r3, r31, lbl_80796F78@l
    addi r5, r4, lbl_80796F54@l
    li r4, 0x193
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000016C4:
    cmpwi r29, 0x0
    bne lbl_fn_805A03A4_000016DC
    mr r3, r27
    bl fn_805F3210
    li r18, 0x0
    b lbl_fn_805A03A4_00001828
lbl_fn_805A03A4_000016DC:
    lbz r3, 0x98(r29)
    lwz r0, 0x50(r29)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_805A03A4_000016F8
    li r0, 0x7f
    b lbl_fn_805A03A4_00001700
lbl_fn_805A03A4_000016F8:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_805A03A4_00001700:
    cmpw r28, r0
    bge lbl_fn_805A03A4_00001718
    mr r3, r27
    bl fn_805F3210
    li r18, 0x0
    b lbl_fn_805A03A4_00001828
lbl_fn_805A03A4_00001718:
    addi r3, r15, 0xa4
    bl fn_805F3210
    li r3, 0x2
    bl fn_8070CA60
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_00001764
    lwz r30, 0x9c(r29)
    li r3, 0x2
    bl fn_8070CAA0
    mr r7, r3
    lis r3, lbl_80796EDC@ha
    lis r4, lbl_80796EA0@ha
    mr r6, r30
    addi r5, r4, lbl_80796EA0@l
    addi r3, r3, lbl_80796EDC@l
    li r4, 0x85
    crclr 6
    bl fn_80724E90
lbl_fn_805A03A4_00001764:
    mr r3, r29
    li r4, 0x0
    bl fn_80709AD0
    addi r3, r15, 0xa4
    bl fn_805F3130
lbl_fn_805A03A4_00001778:
    cmpwi r18, 0x0
    beq lbl_fn_805A03A4_00001628
    lwz r14, 0x9c(r15)
    addi r22, r15, 0x9c
    lis r24, lbl_80796F48@ha
    lis r23, lbl_80796F24@ha
    b lbl_fn_805A03A4_000017E0
lbl_fn_805A03A4_00001794:
    cmpwi r14, 0x0
    bne lbl_fn_805A03A4_000017B0
    addi r3, r24, lbl_80796F48@l
    addi r5, r23, lbl_80796F24@l
    li r4, 0x23d
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_000017B0:
    lbz r3, -0x58(r14)
    lwz r0, -0xa0(r14)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_805A03A4_000017CC
    li r0, 0x7f
    b lbl_fn_805A03A4_000017D4
lbl_fn_805A03A4_000017CC:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_805A03A4_000017D4:
    cmpw r28, r0
    blt lbl_fn_805A03A4_000017E8
    lwz r14, 0x0(r14)
lbl_fn_805A03A4_000017E0:
    cmplw r14, r22
    bne lbl_fn_805A03A4_00001794
lbl_fn_805A03A4_000017E8:
    cmpwi r18, 0x0
    bne lbl_fn_805A03A4_0000180C
    lis r3, lbl_80796F18@ha
    lis r5, lbl_80796EF4@ha
    addi r3, r3, lbl_80796F18@l
    li r4, 0x233
    addi r5, r5, lbl_80796EF4@l
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_0000180C:
    stw r14, 0x14(r1)
    addi r3, r15, 0x98
    addi r4, r1, 0x14
    addi r5, r18, 0xf0
    bl fn_807252A0
    mr r3, r27
    bl fn_805F3210
lbl_fn_805A03A4_00001828:
    cmpwi r18, 0x0
    bne lbl_fn_805A03A4_00001838
    li r18, 0x0
    b lbl_fn_805A03A4_00001858
lbl_fn_805A03A4_00001838:
    mr r3, r18
    mr r4, r16
    bl fn_8070AFD0
    cmpwi r17, 0x0
    beq lbl_fn_805A03A4_00001858
    mr r3, r18
    mr r4, r17
    bl fn_8070AE60
lbl_fn_805A03A4_00001858:
    cmpwi r18, 0x0
    bne lbl_fn_805A03A4_000018A0
    li r3, 0x3
    bl fn_8070C9E0
    cmpwi r3, 0x0
    beq lbl_fn_805A03A4_0000188C
    lis r3, lbl_80762810@ha
    mr r6, r16
    addi r3, r3, lbl_80762810@l
    li r4, 0x4ec
    addi r5, r3, 0x747
    crclr 6
    bl fn_80724E90
lbl_fn_805A03A4_0000188C:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x9
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_000018A0:
    mr r14, r18
    b lbl_fn_805A03A4_000018BC
lbl_fn_805A03A4_000018A8:
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x3
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_000018BC:
    lwz r3, 0x7c(r1)
    mr r4, r14
    bl fn_80717EC0
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_000018F8
    lwz r12, 0x0(r14)
    mr r3, r14
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0xff
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_000018F8:
    lwz r3, 0x10(r15)
    mr r4, r16
    bl fn_8059E348
    cmpwi r3, 0x1
    beq lbl_fn_805A03A4_00001920
    cmpwi r3, 0x2
    beq lbl_fn_805A03A4_000019E4
    cmpwi r3, 0x3
    beq lbl_fn_805A03A4_00001A94
    b lbl_fn_805A03A4_00001B44
lbl_fn_805A03A4_00001920:
    cmpwi r20, 0x0
    bne lbl_fn_805A03A4_00001940
    lis r3, lbl_80762810@ha
    li r4, 0x502
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x788
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00001940:
    lwz r3, 0x7c(r1)
    mr r4, r20
    bl fn_80718320
    lwz r3, 0x10(r15)
    mr r4, r16
    addi r5, r1, 0x34
    bl fn_8059E358
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_0000198C
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x3
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_0000198C:
    lwz r7, 0x78(r1)
    mr r3, r15
    lwz r8, 0x74(r1)
    mr r4, r20
    lwz r9, 0x6c(r1)
    addi r5, r1, 0x48
    lwz r10, 0x68(r1)
    addi r6, r1, 0x34
    bl fn_805A1288
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_805A03A4_00001B84
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r15
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_000019E4:
    cmpwi r19, 0x0
    bne lbl_fn_805A03A4_00001A04
    lis r3, lbl_80762810@ha
    li r4, 0x522
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x7b1
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00001A04:
    lwz r3, 0x10(r15)
    mr r4, r16
    addi r5, r1, 0x20
    bl fn_8059E360
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_00001A44
    lwz r12, 0x0(r19)
    mr r3, r19
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x3
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00001A44:
    lwz r7, 0x78(r1)
    mr r3, r15
    lwz r8, 0x74(r1)
    mr r4, r19
    addi r5, r1, 0x48
    addi r6, r1, 0x20
    bl fn_805A1764
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_805A03A4_00001B84
    lwz r12, 0x0(r19)
    mr r3, r19
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r15
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00001A94:
    cmpwi r18, 0x0
    bne lbl_fn_805A03A4_00001AB4
    lis r3, lbl_80762810@ha
    li r4, 0x53d
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x7db
    crclr 6
    bl fn_80724DF0
lbl_fn_805A03A4_00001AB4:
    lwz r3, 0x10(r15)
    mr r4, r16
    addi r5, r1, 0x28
    bl fn_8059E368
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_00001AF4
    lwz r12, 0x0(r18)
    mr r3, r18
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x3
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00001AF4:
    lwz r7, 0x78(r1)
    mr r3, r15
    lwz r8, 0x74(r1)
    mr r4, r18
    addi r5, r1, 0x48
    addi r6, r1, 0x28
    bl fn_805A1A64
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_fn_805A03A4_00001B84
    lwz r12, 0x0(r18)
    mr r3, r18
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r15
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00001B44:
    lis r3, lbl_80762810@ha
    li r4, 0x557
    addi r3, r3, lbl_80762810@l
    addi r5, r3, 0x805
    crclr 6
    bl fn_80724DF0
    lwz r12, 0x0(r14)
    mr r3, r14
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x3
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00001B84:
    cmpwi r21, 0x0
    beq lbl_fn_805A03A4_00001BC8
    mr r3, r21
    mr r4, r14
    bl fn_8070CFD0
    cmpwi r3, 0x0
    bne lbl_fn_805A03A4_00001BC8
    lwz r12, 0x0(r14)
    mr r3, r14
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0xff
    b lbl_fn_805A03A4_00001C14
lbl_fn_805A03A4_00001BC8:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805A03A4_00001BE0
    mr r3, r14
    mr r4, r0
    bl fn_8070ABA0
lbl_fn_805A03A4_00001BE0:
    lbz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_fn_805A03A4_00001BF8
    lwz r4, 0x70(r1)
    mr r3, r14
    bl fn_8070AC20
lbl_fn_805A03A4_00001BF8:
    lwz r3, 0x8(r1)
    mr r4, r14
    bl fn_807175E0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    li r3, 0x0
lbl_fn_805A03A4_00001C14:
    lmw r14, 0x88(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
