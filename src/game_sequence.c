#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSWakeupThread(void);
extern void __register_global_object(void);
extern void _restgpr_17(void);
extern void _restgpr_19(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_19(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_80071088(void);
extern void fn_80079994(void);
extern void fn_80084320(void);
extern void fn_8009BF3C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D594C(void);
extern void fn_800D59B8(void);
extern void fn_800D5C84(void);
extern void fn_800D5E18(void);
extern void fn_80473EFC(void);
extern void fn_805F89F0(void);
extern void fn_805F8C50(void);
extern void fn_805F8CA0(void);
extern void fn_805F8DA0(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80604FB0(void);
extern void fn_806050D0(void);
extern void fn_80612B60(void);
extern void fn_80612C00(void);
extern void fn_806130F0(void);
extern void fn_806134E0(void);
extern void fn_806136C0(void);
extern void fn_80613950(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_806140B0(void);
extern void fn_806149C0(void);
extern void fn_80614A00(void);
extern void fn_80614A40(void);
extern void fn_80614A80(void);
extern void fn_80614AB0(void);
extern void fn_80615210(void);
extern void fn_80615700(void);
extern void fn_806158C0(void);
extern void fn_80615990(void);
extern void fn_806159C0(void);
extern void fn_80615AD0(void);
extern void fn_80615AE0(void);
extern void fn_80615B60(void);
extern void fn_80615C40(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_806165B0(void);
extern void fn_806167B0(void);
extern void fn_80616800(void);
extern void fn_80616840(void);
extern void fn_806168C0(void);
extern void fn_80616E80(void);
extern void fn_80617030(void);
extern void fn_80617130(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617340(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176A0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_806177B0(void);
extern void fn_806177F0(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617A10(void);
extern void fn_80617C40(void);
extern void fn_80617D50(void);
extern void fn_80617DA0(void);
extern void fn_80617DD0(void);
extern void fn_80617E00(void);
extern void fn_80617E40(void);
extern void fn_80617F20(void);
extern void fn_80617F50(void);
extern void fn_80618350(void);
extern void fn_806183A0(void);
extern void fn_80618400(void);
extern void fn_80618420(void);
extern void fn_80618570(void);
extern void fn_806185C0(void);
extern void fn_80618630(void);
extern void fn_80618670(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 jumptable_80777C18[];
extern u8 jumptable_80777C58[];
extern u8 jumptable_80777CA8[];
extern u8 jumptable_80777CD8[];
extern u8 lbl_807316B8[];
extern u8 lbl_807316C8[];
extern u8 lbl_807316D0[];
extern u8 lbl_807317B8[];
extern u8 lbl_807317C0[];
extern u8 lbl_807C6C08[];
extern u8 lbl_807C6DB4[];
extern u8 lbl_807C6F60[];
extern u8 lbl_807C6F68[];
extern u8 lbl_807C6FBC[];
extern u8 lbl_807C6FC8[];
extern u8 lbl_807C6FF8[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EED8;
extern u32 lbl_8087EED9;
extern u32 lbl_8087EEDA;
extern u32 lbl_8087EEDC;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EEE4;
extern u32 lbl_8087EEE5;
extern u32 lbl_8087EEE8;
extern u32 lbl_8087EEEC;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880A70;
extern u32 lbl_80880A74;
extern u32 lbl_80880A78;
extern u32 lbl_80880A7C;
extern u32 lbl_80880A80;
extern u32 lbl_80880A84;
extern u32 lbl_80880A88;
extern u32 lbl_80880A8C;
extern u32 lbl_80880A90;
extern u32 lbl_80880A94;
extern u32 lbl_80880A98;
extern u32 lbl_80880A9C;
extern u32 lbl_80880AA0;
extern u32 lbl_80880AA4;
extern u32 lbl_80880AA8;
extern u32 lbl_80880AAC;
extern u32 lbl_80880AB0;
extern u32 lbl_80880AB4;
extern u32 lbl_80880AB8;
extern u32 lbl_80880ABC;
extern u32 lbl_80880AC0;
extern u32 lbl_80880AC4;
extern u32 lbl_80880AC8;

/* Function declarations */
void fn_80071E04(void);
void fn_80072914(void);
void fn_80072BDC(void);
void fn_80072D74(void);
void fn_80072E08(void);
void fn_80072F64(void);
void fn_80073194(void);
void fn_80073A6C(void);
void fn_800742C8(void);
void fn_800748D8(void);
void fn_80074B24(void);
void fn_80074EC8(void);
void fn_80075DEC(void);
void fn_80075F58(void);
void fn_800760BC(void);
void fn_800760D0(void);
void fn_800760E8(void);
void fn_80076174(void);
void fn_800761A8(void);
void fn_800763C0(void);
void fn_800763FC(void);
void fn_8007642C(void);
void fn_80076760(void);
void fn_80076A28(void);
void fn_80076BE4(void);
void fn_80076C44(void);
void fn_80076F88(void);
void fn_80076FD4(void);
void fn_80076FF8(void);

asm void fn_80071E04(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lis r0, 0x4330
    stw r0, 0x60(r1)
    mr r29, r3
    li r4, 0x0
    stw r0, 0x68(r1)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80074EC8
    li r30, 0x0
    lwz r5, 0x3c(r29)
    xoris r0, r30, 0x8000
    stw r0, 0x64(r1)
    lwz r4, 0x40(r29)
    lis r31, lbl_807316C8@ha
    stw r0, 0x6c(r1)
    xoris r3, r5, 0x8000
    lfd f0, 0x60(r1)
    xoris r0, r4, 0x8000
    lfd f2, 0x68(r1)
    lfd f6, lbl_807316C8@l(r31)
    stw r3, 0x64(r1)
    fsubs f5, f0, f6
    lfs f7, 0x58(r29)
    stw r0, 0x6c(r1)
    fsubs f2, f2, f6
    lfd f1, 0x60(r1)
    lfd f0, 0x68(r1)
    fsubs f3, f1, f6
    lfs f4, 0x5c(r29)
    fsubs f0, f0, f6
    stw r30, 0xdc(r29)
    fadds f1, f7, f5
    lfs f5, lbl_80880A70
    fadds f2, f4, f2
    stw r30, 0x60(r29)
    fadds f3, f3, f7
    lfs f6, lbl_80880A74
    fadds f4, f0, f4
    stw r30, 0x64(r29)
    stw r5, 0x68(r29)
    stw r4, 0x6c(r29)
    bl fn_80618570
    lwz r0, 0x6c(r29)
    lfd f2, lbl_807316C8@l(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfs f0, 0x5c(r29)
    lfd f1, 0x60(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x68(r29)
    mr r28, r3
    lfd f2, lbl_807316C8@l(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfs f0, 0x58(r29)
    lfd f1, 0x68(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x64(r29)
    mr r27, r3
    lfd f1, lbl_807316C8@l(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfs f2, 0x5c(r29)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    lwz r0, 0x60(r29)
    mr r26, r3
    lfd f1, lbl_807316C8@l(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfs f2, 0x58(r29)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_806185C0
    lfs f0, lbl_80880A74
    addi r6, r1, 0x20
    stfs f0, 0x20(r1)
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_8009BF3C
    stw r30, 0x80(r29)
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    stw r30, 0x84(r29)
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    stw r30, 0x88(r29)
    stw r30, 0x8c(r29)
    stw r30, 0x90(r29)
    stw r30, 0x94(r29)
    stw r30, 0x98(r29)
    stw r30, 0x9c(r29)
    stw r30, 0xa0(r29)
    stw r30, 0xa4(r29)
    stw r30, 0xa8(r29)
    stw r30, 0xac(r29)
    stw r30, 0xb0(r29)
    stw r30, 0xb4(r29)
    stw r30, 0xb8(r29)
    stw r30, 0xbc(r29)
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x3
    li r4, 0x1
    li r5, 0x7
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x4
    li r4, 0x1
    li r5, 0x8
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x5
    li r4, 0x1
    li r5, 0x9
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x6
    li r4, 0x1
    li r5, 0xa
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x7
    li r4, 0x1
    li r5, 0xb
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    bl fn_80613BB0
    bl fn_806134E0
    bl fn_80613950
    li r3, 0x6
    li r4, 0x0
    bl fn_806149C0
    li r3, 0x6
    li r4, 0x0
    bl fn_80614A00
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    bl fn_80614A40
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80616840
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    bl fn_806168C0
    lfs f1, lbl_80880A70
    addi r3, r1, 0x30
    lfs f0, lbl_80880A74
    li r4, 0x0
    stfs f1, 0x5c(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x44(r1)
    stfs f0, 0x30(r1)
    bl fn_80618350
    addi r3, r1, 0x30
    li r4, 0x0
    bl fn_806183A0
    li r3, 0x0
    bl fn_80618400
    addi r3, r1, 0x30
    li r4, 0x3c
    li r5, 0x0
    bl fn_80618420
    addi r3, r1, 0x30
    li r4, 0x7d
    li r5, 0x0
    bl fn_80618420
    xoris r0, r30, 0x8000
    stw r0, 0x64(r1)
    lwz r5, 0x3c(r29)
    stw r0, 0x6c(r1)
    lwz r4, 0x40(r29)
    xoris r3, r5, 0x8000
    lfd f1, 0x60(r1)
    lfd f6, lbl_807316C8@l(r31)
    xoris r0, r4, 0x8000
    lfd f0, 0x68(r1)
    stw r3, 0x64(r1)
    fsubs f5, f1, f6
    fsubs f2, f0, f6
    lfs f4, 0x5c(r29)
    stw r0, 0x6c(r1)
    lfd f1, 0x60(r1)
    lfd f0, 0x68(r1)
    fadds f2, f4, f2
    fsubs f3, f1, f6
    lfs f7, 0x58(r29)
    fsubs f0, f0, f6
    stw r30, 0x60(r29)
    fadds f1, f7, f5
    fadds f3, f3, f7
    fadds f4, f0, f4
    lfs f5, lbl_80880A70
    stw r30, 0x64(r29)
    lfs f6, lbl_80880A74
    stw r5, 0x68(r29)
    stw r4, 0x6c(r29)
    bl fn_80618570
    lwz r0, 0x6c(r29)
    lfd f2, lbl_807316C8@l(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfs f0, 0x5c(r29)
    lfd f1, 0x60(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x68(r29)
    mr r26, r3
    lfd f2, lbl_807316C8@l(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfs f0, 0x58(r29)
    lfd f1, 0x68(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x64(r29)
    mr r27, r3
    lfd f1, lbl_807316C8@l(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfs f2, 0x5c(r29)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    lwz r0, 0x60(r29)
    mr r28, r3
    lfd f1, lbl_807316C8@l(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfs f2, 0x58(r29)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    mr r4, r28
    mr r5, r27
    mr r6, r26
    bl fn_806185C0
    li r3, 0x0
    bl fn_80614AB0
    li r3, 0x2
    bl fn_80614A80
    li r3, 0x0
    bl fn_80618670
    li r3, 0x0
    li r4, 0x0
    bl fn_80618630
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    stw r30, 0x18(r1)
    addi r4, r1, 0x18
    li r3, 0x4
    bl fn_80615B60
    lwz r0, lbl_80880A78
    addi r4, r1, 0x14
    stw r0, 0x14(r1)
    li r3, 0x4
    bl fn_80615C40
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    stw r30, 0x10(r1)
    addi r4, r1, 0x10
    li r3, 0x5
    bl fn_80615B60
    lwz r0, lbl_80880A7C
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    li r3, 0x5
    bl fn_80615C40
    bl fn_806167B0
    lwz r3, lbl_8087EFA8
    lwz r0, 0x3a8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80071E04_00000710
    cmpwi r0, 0x2
    beq lbl_fn_80071E04_00000760
    lwz r3, 0x8e4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80071E04_00000704
    bl fn_80616800
    stw r30, 0x8e4(r29)
lbl_fn_80071E04_00000704:
    li r0, 0x0
    stw r0, 0x8e0(r29)
    b lbl_fn_80071E04_000007AC
lbl_fn_80071E04_00000710:
    lis r0, lbl_807C6C08@ha
    addic. r0, r0, 27656
    beq lbl_fn_80071E04_0000073C
    lis r3, fn_80076FD4@ha
    addi r3, r3, fn_80076FD4@l
    bl fn_80616800
    lwz r0, 0x8e0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80071E04_00000750
    stw r3, 0x8e4(r29)
    b lbl_fn_80071E04_00000750
lbl_fn_80071E04_0000073C:
    lwz r3, 0x8e4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80071E04_00000750
    bl fn_80616800
    stw r30, 0x8e4(r29)
lbl_fn_80071E04_00000750:
    lis r3, lbl_807C6C08@ha
    addi r3, r3, lbl_807C6C08@l
    stw r3, 0x8e0(r29)
    b lbl_fn_80071E04_000007AC
lbl_fn_80071E04_00000760:
    lis r0, lbl_807C6DB4@ha
    addic. r0, r0, 28084
    beq lbl_fn_80071E04_0000078C
    lis r3, fn_80076FD4@ha
    addi r3, r3, fn_80076FD4@l
    bl fn_80616800
    lwz r0, 0x8e0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80071E04_000007A0
    stw r3, 0x8e4(r29)
    b lbl_fn_80071E04_000007A0
lbl_fn_80071E04_0000078C:
    lwz r3, 0x8e4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80071E04_000007A0
    bl fn_80616800
    stw r30, 0x8e4(r29)
lbl_fn_80071E04_000007A0:
    lis r3, lbl_807C6DB4@ha
    addi r3, r3, lbl_807C6DB4@l
    stw r3, 0x8e0(r29)
lbl_fn_80071E04_000007AC:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x4
    bl fn_80617880
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0x4
    bl fn_80617880
    li r3, 0x3
    li r4, 0x3
    li r5, 0x3
    li r6, 0x4
    bl fn_80617880
    li r3, 0x4
    li r4, 0x4
    li r5, 0x4
    li r6, 0x4
    bl fn_80617880
    li r3, 0x5
    li r4, 0x5
    li r5, 0x5
    li r6, 0x4
    bl fn_80617880
    li r3, 0x6
    li r4, 0x6
    li r5, 0x6
    li r6, 0x4
    bl fn_80617880
    li r3, 0x7
    li r4, 0x7
    li r5, 0x7
    li r6, 0x4
    bl fn_80617880
    li r3, 0x8
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0x9
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xa
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xb
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xc
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xd
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xe
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0xf
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_806177F0
    li r26, 0x0
lbl_fn_80071E04_0000092C:
    mr r3, r26
    li r4, 0x6
    bl fn_80617650
    mr r3, r26
    li r4, 0x0
    bl fn_806176A0
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    addi r26, r26, 0x1
    cmpwi r26, 0x10
    blt lbl_fn_80071E04_0000092C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r26, 0x0
lbl_fn_80071E04_000009C4:
    mr r3, r26
    bl fn_80617220
    addi r26, r26, 0x1
    cmpwi r26, 0x10
    blt lbl_fn_80071E04_000009C4
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    lfs f2, lbl_80880A74
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    fmr f4, f2
    lfs f1, lbl_80880A70
    lfs f3, lbl_80880A80
    li r3, 0x0
    bl fn_80617A10
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617C40
    li r3, 0x0
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl fn_80617D50
    li r3, 0x1
    bl fn_80617DA0
    li r3, 0x1
    bl fn_80617DD0
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl fn_80617E00
    li r3, 0x1
    bl fn_80617E40
    li r3, 0x0
    bl fn_80617F20
    li r3, 0x0
    li r4, 0x0
    bl fn_80617F50
    lwz r3, 0xd0(r29)
    li r6, 0x4
    lwz r0, 0xd8(r29)
    li r5, 0x5
    clrlwi r3, r3, 1
    li r4, 0x2
    oris r3, r3, 0x7000
    oris r0, r0, 0xfff0
    rlwinm r3, r3, 0, 12, 3
    stw r0, 0xd8(r29)
    oris r0, r3, 0x8
    rlwimi r0, r6, 16, 13, 15
    mr r3, r29
    rlwimi r0, r5, 13, 16, 18
    ori r0, r0, 0x1000
    rlwinm r0, r0, 0, 21, 19
    ori r0, r0, 0x400
    rlwimi r0, r4, 7, 22, 24
    ori r0, r0, 0x70
    stw r0, 0xd0(r29)
    bl fn_800761A8
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80072914(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_80072914_00000B44
    cmpwi r4, 0x1
    beq lbl_fn_80072914_00000BB4
    cmpwi r4, 0x2
    beq lbl_fn_80072914_00000C24
    cmpwi r4, 0x3
    beq lbl_fn_80072914_00000C90
    cmpwi r4, 0x4
    beq lbl_fn_80072914_00000D00
    cmpwi r4, 0x5
    beq lbl_fn_80072914_00000D6C
    blr
lbl_fn_80072914_00000B44:
    lwz r7, 0xd4(r3)
    li r0, 0x4
    lwz r10, 0xd0(r3)
    rlwimi r10, r0, 16, 13, 15
    extrwi r5, r7, 3, 13
    lwz r9, 0xd8(r3)
    extrwi r4, r10, 3, 13
    li r0, 0x5
    rlwimi r10, r0, 13, 16, 18
    srwi r8, r9, 20
    subf r6, r5, r4
    subf r4, r4, r5
    or r4, r6, r4
    extrwi r5, r7, 3, 16
    rlwinm r6, r4, 5, 27, 27
    extrwi r0, r10, 3, 16
    subf r4, r5, r0
    stw r10, 0xd0(r3)
    or r6, r8, r6
    subf r0, r0, r5
    or r0, r4, r0
    rlwimi r9, r6, 20, 0, 11
    srwi r4, r9, 20
    rlwinm r0, r0, 6, 26, 26
    or r0, r4, r0
    rlwimi r9, r0, 20, 0, 11
    stw r9, 0xd8(r3)
    blr
lbl_fn_80072914_00000BB4:
    lwz r7, 0xd4(r3)
    li r0, 0x4
    lwz r10, 0xd0(r3)
    rlwimi r10, r0, 16, 13, 15
    extrwi r5, r7, 3, 13
    lwz r9, 0xd8(r3)
    extrwi r4, r10, 3, 13
    li r0, 0x1
    rlwimi r10, r0, 13, 16, 18
    srwi r8, r9, 20
    subf r6, r5, r4
    subf r4, r4, r5
    or r4, r6, r4
    extrwi r5, r7, 3, 16
    rlwinm r6, r4, 5, 27, 27
    extrwi r0, r10, 3, 16
    subf r4, r5, r0
    stw r10, 0xd0(r3)
    or r6, r8, r6
    subf r0, r0, r5
    or r0, r4, r0
    rlwimi r9, r6, 20, 0, 11
    srwi r4, r9, 20
    rlwinm r0, r0, 6, 26, 26
    or r0, r4, r0
    rlwimi r9, r0, 20, 0, 11
    stw r9, 0xd8(r3)
    blr
lbl_fn_80072914_00000C24:
    lwz r10, 0xd0(r3)
    li r0, 0x2
    lwz r4, 0xd4(r3)
    rlwinm r10, r10, 0, 16, 12
    lwz r9, 0xd8(r3)
    extrwi r7, r4, 3, 13
    extrwi r5, r4, 3, 16
    extrwi r4, r10, 3, 13
    rlwimi r10, r0, 13, 16, 18
    subf r6, r7, r4
    srwi r8, r9, 20
    subf r4, r4, r7
    extrwi r0, r10, 3, 16
    or r6, r6, r4
    stw r10, 0xd0(r3)
    subf r4, r5, r0
    subf r0, r0, r5
    rlwinm r6, r6, 5, 27, 27
    or r5, r8, r6
    or r0, r4, r0
    rlwimi r9, r5, 20, 0, 11
    srwi r4, r9, 20
    rlwinm r0, r0, 6, 26, 26
    or r0, r4, r0
    rlwimi r9, r0, 20, 0, 11
    stw r9, 0xd8(r3)
    blr
lbl_fn_80072914_00000C90:
    lwz r7, 0xd4(r3)
    li r0, 0x9
    lwz r10, 0xd0(r3)
    rlwimi r10, r0, 16, 13, 15
    extrwi r5, r7, 3, 13
    lwz r9, 0xd8(r3)
    extrwi r4, r10, 3, 13
    li r0, 0x1
    rlwimi r10, r0, 13, 16, 18
    srwi r8, r9, 20
    subf r6, r5, r4
    subf r4, r4, r5
    or r4, r6, r4
    extrwi r5, r7, 3, 16
    rlwinm r6, r4, 5, 27, 27
    extrwi r0, r10, 3, 16
    subf r4, r5, r0
    stw r10, 0xd0(r3)
    or r6, r8, r6
    subf r0, r0, r5
    or r0, r4, r0
    rlwimi r9, r6, 20, 0, 11
    srwi r4, r9, 20
    rlwinm r0, r0, 6, 26, 26
    or r0, r4, r0
    rlwimi r9, r0, 20, 0, 11
    stw r9, 0xd8(r3)
    blr
lbl_fn_80072914_00000D00:
    lwz r10, 0xd0(r3)
    li r0, 0x5
    lwz r4, 0xd4(r3)
    rlwinm r10, r10, 0, 16, 12
    lwz r9, 0xd8(r3)
    extrwi r7, r4, 3, 13
    extrwi r5, r4, 3, 16
    extrwi r4, r10, 3, 13
    rlwimi r10, r0, 13, 16, 18
    subf r6, r7, r4
    srwi r8, r9, 20
    subf r4, r4, r7
    extrwi r0, r10, 3, 16
    or r6, r6, r4
    stw r10, 0xd0(r3)
    subf r4, r5, r0
    subf r0, r0, r5
    rlwinm r6, r6, 5, 27, 27
    or r5, r8, r6
    or r0, r4, r0
    rlwimi r9, r5, 20, 0, 11
    srwi r4, r9, 20
    rlwinm r0, r0, 6, 26, 26
    or r0, r4, r0
    rlwimi r9, r0, 20, 0, 11
    stw r9, 0xd8(r3)
    blr
lbl_fn_80072914_00000D6C:
    lwz r10, 0xd0(r3)
    li r0, 0x3
    lwz r4, 0xd4(r3)
    rlwinm r10, r10, 0, 16, 12
    lwz r9, 0xd8(r3)
    extrwi r7, r4, 3, 13
    extrwi r5, r4, 3, 16
    extrwi r4, r10, 3, 13
    rlwimi r10, r0, 13, 16, 18
    subf r6, r7, r4
    srwi r8, r9, 20
    subf r4, r4, r7
    extrwi r0, r10, 3, 16
    or r6, r6, r4
    stw r10, 0xd0(r3)
    subf r4, r5, r0
    subf r0, r0, r5
    rlwinm r6, r6, 5, 27, 27
    or r5, r8, r6
    or r0, r4, r0
    rlwimi r9, r5, 20, 0, 11
    srwi r4, r9, 20
    rlwinm r0, r0, 6, 26, 26
    or r0, r4, r0
    rlwimi r9, r0, 20, 0, 11
    stw r9, 0xd8(r3)
    blr
}

asm void fn_80072BDC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_807C6F68@ha
    stw r0, 0x34(r1)
    addi r3, r3, lbl_807C6F68@l
    lhz r0, 0x50(r3)
    cmplwi r0, 0x5
    bne lbl_fn_80072BDC_00000E14
    lis r5, lbl_807317C0@ha
    li r4, 0x41b
    addi r5, r5, lbl_807317C0@l
    addi r3, r5, 0x1
    addi r5, r5, 0x3b
    crclr 6
    bl OSPanic
lbl_fn_80072BDC_00000E14:
    lis r7, lbl_807C6F68@ha
    lwz r3, lbl_8087EEE0
    addi r7, r7, lbl_807C6F68@l
    lhz r4, 0x52(r7)
    lwz r0, 0x7c(r3)
    slwi r3, r4, 4
    add r6, r7, r3
    lwz r3, 0x8(r6)
    lwz r5, 0x0(r6)
    lwz r4, 0x4(r6)
    cmplw r3, r0
    lwz r0, 0xc(r6)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    bne lbl_fn_80072BDC_00000E64
    li r0, 0x1
    stb r0, lbl_8087EED9
    b lbl_fn_80072BDC_00000F60
lbl_fn_80072BDC_00000E64:
    lhz r0, 0x50(r7)
    cmplwi r0, 0x5
    bne lbl_fn_80072BDC_00000E8C
    lis r5, lbl_807317C0@ha
    li r4, 0x408
    addi r5, r5, lbl_807317C0@l
    addi r3, r5, 0x1
    addi r5, r5, 0x52
    crclr 6
    bl OSPanic
lbl_fn_80072BDC_00000E8C:
    lis r5, lbl_807C6F68@ha
    addi r5, r5, lbl_807C6F68@l
    lhz r4, 0x52(r5)
    lhz r0, 0x50(r5)
    cmplw r4, r0
    bne lbl_fn_80072BDC_00000EB0
    li r0, 0x5
    sth r0, 0x50(r5)
    b lbl_fn_80072BDC_00000ED8
lbl_fn_80072BDC_00000EB0:
    lis r3, 0x6666
    addi r4, r4, 0x1
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    sth r0, 0x52(r5)
lbl_fn_80072BDC_00000ED8:
    lis r3, lbl_807C6F60@ha
    addi r3, r3, lbl_807C6F60@l
    bl OSWakeupThread
    lis r3, lbl_807C6F68@ha
    addi r3, r3, lbl_807C6F68@l
    lhz r0, 0x50(r3)
    cmplwi r0, 0x5
    bne lbl_fn_80072BDC_00000F08
    bl fn_80612C00
    li r0, 0x0
    stb r0, lbl_8087EED8
    b lbl_fn_80072BDC_00000F60
lbl_fn_80072BDC_00000F08:
    bne lbl_fn_80072BDC_00000F28
    lis r5, lbl_807317C0@ha
    li r4, 0x41b
    addi r5, r5, lbl_807317C0@l
    addi r3, r5, 0x1
    addi r5, r5, 0x3b
    crclr 6
    bl OSPanic
lbl_fn_80072BDC_00000F28:
    lis r3, lbl_807C6F68@ha
    addi r3, r3, lbl_807C6F68@l
    lhz r0, 0x52(r3)
    slwi r0, r0, 4
    add r6, r3, r0
    lwzx r3, r3, r0
    lwz r5, 0x4(r6)
    lwz r4, 0x8(r6)
    lwz r0, 0xc(r6)
    stw r3, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_80612B60
lbl_fn_80072BDC_00000F60:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80072D74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8087EEE0
    lwz r0, 0xcc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80072D74_00000FA0
    clrlwi. r0, r3, 31
    beq lbl_fn_80072D74_00000FA0
    bl fn_80604FB0
    b lbl_fn_80072D74_00000FF0
lbl_fn_80072D74_00000FA0:
    bl fn_806140B0
    lhz r4, lbl_8087EEDC
    clrlwi r5, r3, 16
    addi r0, r4, 0x1
    clrlwi r0, r0, 16
    cmplw r5, r0
    bne lbl_fn_80072D74_00000FF0
    sth r3, lbl_8087EEDC
    lwz r3, 0x70(r31)
    lwz r0, 0x7c(r31)
    cmplw r0, r3
    bne lbl_fn_80072D74_00000FD4
    lwz r3, 0x74(r31)
lbl_fn_80072D74_00000FD4:
    stw r3, 0x7c(r31)
    lwz r3, lbl_8087EEE0
    lwz r3, 0x7c(r3)
    bl fn_806050D0
    bl fn_80604FB0
    li r0, 0x1
    stb r0, lbl_8087EEDA
lbl_fn_80072D74_00000FF0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80072E08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r4, lbl_8087EEE0
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80072E08_00001028
    clrlwi. r0, r3, 31
    bne lbl_fn_80072E08_00001150
lbl_fn_80072E08_00001028:
    lbz r0, lbl_8087EED9
    cmpwi r0, 0x0
    beq lbl_fn_80072E08_00001150
    lbz r0, lbl_8087EEDA
    cmpwi r0, 0x0
    beq lbl_fn_80072E08_00001150
    lis r3, lbl_807C6F68@ha
    li r4, 0x0
    addi r3, r3, lbl_807C6F68@l
    stb r4, lbl_8087EED9
    lhz r0, 0x50(r3)
    stb r4, lbl_8087EEDA
    cmplwi r0, 0x5
    bne lbl_fn_80072E08_0000107C
    lis r5, lbl_807317C0@ha
    li r4, 0x408
    addi r5, r5, lbl_807317C0@l
    addi r3, r5, 0x1
    addi r5, r5, 0x52
    crclr 6
    bl OSPanic
lbl_fn_80072E08_0000107C:
    lis r5, lbl_807C6F68@ha
    addi r5, r5, lbl_807C6F68@l
    lhz r4, 0x52(r5)
    lhz r0, 0x50(r5)
    cmplw r4, r0
    bne lbl_fn_80072E08_000010A0
    li r0, 0x5
    sth r0, 0x50(r5)
    b lbl_fn_80072E08_000010C8
lbl_fn_80072E08_000010A0:
    lis r3, 0x6666
    addi r4, r4, 0x1
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    sth r0, 0x52(r5)
lbl_fn_80072E08_000010C8:
    lis r3, lbl_807C6F60@ha
    addi r3, r3, lbl_807C6F60@l
    bl OSWakeupThread
    lis r3, lbl_807C6F68@ha
    addi r3, r3, lbl_807C6F68@l
    lhz r0, 0x50(r3)
    cmplwi r0, 0x5
    bne lbl_fn_80072E08_000010F8
    bl fn_80612C00
    li r0, 0x0
    stb r0, lbl_8087EED8
    b lbl_fn_80072E08_00001150
lbl_fn_80072E08_000010F8:
    bne lbl_fn_80072E08_00001118
    lis r5, lbl_807317C0@ha
    li r4, 0x41b
    addi r5, r5, lbl_807317C0@l
    addi r3, r5, 0x1
    addi r5, r5, 0x3b
    crclr 6
    bl OSPanic
lbl_fn_80072E08_00001118:
    lis r3, lbl_807C6F68@ha
    addi r3, r3, lbl_807C6F68@l
    lhz r0, 0x52(r3)
    slwi r0, r0, 4
    add r6, r3, r0
    lwzx r3, r3, r0
    lwz r5, 0x4(r6)
    lwz r4, 0x8(r6)
    lwz r0, 0xc(r6)
    stw r3, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_80612B60
lbl_fn_80072E08_00001150:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80072F64(void)
{
    nofralloc
    lwz r0, 0xe4(r4)
    li r6, 0x0
    stw r5, 0x0(r3)
    li r8, 0x0
    li r7, 0x0
    stw r6, 0x8(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r0, 0x4(r3)
    b lbl_fn_80072F64_000011F8
lbl_fn_80072F64_00001198:
    lwz r5, 0xf8(r4)
    lwzx r5, r5, r7
    lwz r5, 0x10(r5)
    subi r0, r5, 0x1
    cmplwi r0, 0x2
    ble lbl_fn_80072F64_000011D4
    cmpwi r5, 0x0
    beq lbl_fn_80072F64_000011C4
    cmpwi r5, 0x4
    beq lbl_fn_80072F64_000011E4
    b lbl_fn_80072F64_000011F0
lbl_fn_80072F64_000011C4:
    lwz r5, 0x8(r3)
    addi r0, r5, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_80072F64_000011F0
lbl_fn_80072F64_000011D4:
    lwz r5, 0xc(r3)
    addi r0, r5, 0x1
    stw r0, 0xc(r3)
    b lbl_fn_80072F64_000011F0
lbl_fn_80072F64_000011E4:
    lwz r5, 0x10(r3)
    addi r0, r5, 0x1
    stw r0, 0x10(r3)
lbl_fn_80072F64_000011F0:
    addi r7, r7, 0x4
    addi r8, r8, 0x1
lbl_fn_80072F64_000011F8:
    lwz r0, 0xec(r4)
    cmpw r8, r0
    blt lbl_fn_80072F64_00001198
    lwz r5, 0x190(r4)
    li r0, 0x1
    lwz r9, 0x13c(r4)
    li r8, 0x7
    stw r5, 0x14(r3)
    addi r6, r4, 0x194
    li r7, 0x0
    lis r5, jumptable_80777C58@ha
    stw r9, 0x18(r3)
    lis r9, jumptable_80777C18@ha
    stw r0, 0x1c(r3)
    stw r8, 0x20(r3)
    b lbl_fn_80072F64_00001380
lbl_fn_80072F64_00001238:
    lwz r11, 0xc(r6)
    lwz r10, 0x10(r6)
    lwz r8, 0x14(r6)
    slw r11, r0, r11
    lwz r12, 0x1c(r3)
    slw r10, r0, r10
    cmpwi r8, 0xe
    or r8, r12, r11
    or r8, r8, r10
    stw r8, 0x1c(r3)
    beq lbl_fn_80072F64_00001288
    lwz r8, 0x18(r6)
    cmpwi r8, 0xe
    beq lbl_fn_80072F64_00001288
    lwz r8, 0x1c(r6)
    cmpwi r8, 0xe
    beq lbl_fn_80072F64_00001288
    lwz r8, 0x20(r6)
    cmpwi r8, 0xe
    bne lbl_fn_80072F64_000012E8
lbl_fn_80072F64_00001288:
    lwz r8, 0x24(r6)
    subi r10, r8, 0xc
    cmplwi r10, 0x13
    bgt lbl_fn_80072F64_000012E8
    addi r8, r5, jumptable_80777C58@l
    slwi r10, r10, 2
    lwzx r8, r8, r10
    mtctr r8
    bctr
    lwz r8, 0x20(r3)
    ori r8, r8, 0x1
    stw r8, 0x20(r3)
    b lbl_fn_80072F64_000012E8
    lwz r8, 0x20(r3)
    ori r8, r8, 0x2
    stw r8, 0x20(r3)
    b lbl_fn_80072F64_000012E8
    lwz r8, 0x20(r3)
    ori r8, r8, 0x4
    stw r8, 0x20(r3)
    b lbl_fn_80072F64_000012E8
    lwz r8, 0x20(r3)
    ori r8, r8, 0x8
    stw r8, 0x20(r3)
lbl_fn_80072F64_000012E8:
    lwz r8, 0x3c(r6)
    cmpwi r8, 0x6
    beq lbl_fn_80072F64_00001318
    lwz r8, 0x40(r6)
    cmpwi r8, 0x6
    beq lbl_fn_80072F64_00001318
    lwz r8, 0x44(r6)
    cmpwi r8, 0x6
    beq lbl_fn_80072F64_00001318
    lwz r8, 0x48(r6)
    cmpwi r8, 0x6
    bne lbl_fn_80072F64_00001378
lbl_fn_80072F64_00001318:
    lwz r8, 0x4c(r6)
    subi r10, r8, 0x10
    cmplwi r10, 0xf
    bgt lbl_fn_80072F64_00001378
    addi r8, r9, jumptable_80777C18@l
    slwi r10, r10, 2
    lwzx r8, r8, r10
    mtctr r8
    bctr
    lwz r8, 0x20(r3)
    ori r8, r8, 0x1
    stw r8, 0x20(r3)
    b lbl_fn_80072F64_00001378
    lwz r8, 0x20(r3)
    ori r8, r8, 0x2
    stw r8, 0x20(r3)
    b lbl_fn_80072F64_00001378
    lwz r8, 0x20(r3)
    ori r8, r8, 0x4
    stw r8, 0x20(r3)
    b lbl_fn_80072F64_00001378
    lwz r8, 0x20(r3)
    ori r8, r8, 0x8
    stw r8, 0x20(r3)
lbl_fn_80072F64_00001378:
    addi r6, r6, 0x88
    addi r7, r7, 0x1
lbl_fn_80072F64_00001380:
    lwz r8, 0x190(r4)
    cmpw r7, r8
    blt lbl_fn_80072F64_00001238
    blr
}

asm void fn_80073194(void)
{
    nofralloc
    stwu r1, -0x570(r1)
    mflr r0
    stw r0, 0x574(r1)
    addi r11, r1, 0x530
    stfd f31, 0x560(r1)
    psq_st f31, 0x568(r1), 0, 0
    stfd f30, 0x550(r1)
    psq_st f30, 0x558(r1), 0, 0
    stfd f29, 0x540(r1)
    psq_st f29, 0x548(r1), 0, 0
    stfd f28, 0x530(r1)
    psq_st f28, 0x538(r1), 0, 0
    bl _savegpr_23
    cmpwi r5, 0x0
    mr r27, r5
    beq lbl_fn_80073194_000013EC
    lfs f7, lbl_80880A70
    lfs f0, 0xc(r5)
    fcmpu cr0, f7, f0
    bne lbl_fn_80073194_000013EC
    lfs f0, 0x10(r5)
    fcmpu cr0, f7, f0
    beq lbl_fn_80073194_00001C30
lbl_fn_80073194_000013EC:
    lwz r0, 0x0(r3)
    lwz r31, 0x14(r3)
    cmpwi r0, 0x0
    lwz r30, 0x4(r3)
    addi r0, r31, 0x1
    stw r0, 0x14(r3)
    addi r0, r30, 0x1
    stw r0, 0x4(r3)
    beq lbl_fn_80073194_00001424
    lwz r4, 0x10(r3)
    addi r0, r4, 0x1
    stw r0, 0x10(r3)
    addi r29, r4, 0x6
    b lbl_fn_80073194_00001440
lbl_fn_80073194_00001424:
    lwz r5, 0x10(r3)
    lwz r0, 0xc(r3)
    addi r4, r5, 0x1
    lwz r6, 0x8(r3)
    add r0, r0, r5
    stw r4, 0x10(r3)
    add r29, r6, r0
lbl_fn_80073194_00001440:
    slwi r0, r30, 2
    lwz r25, lbl_8087EFB4
    subf r3, r30, r0
    li r7, 0x0
    addi r28, r3, 0x40
    li r4, 0x0
    mr r3, r29
    li r5, 0x0
    mr r8, r28
    li r6, 0x0
    bl fn_80613960
    lfs f29, lbl_80880A70
    cmpwi r27, 0x0
    lfs f0, lbl_80880A74
    lwz r3, lbl_8087EEB0
    stfs f0, 0x10(r1)
    addi r23, r3, 0x40
    stfs f0, 0x14(r1)
    stfs f29, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f29, 0x90(r1)
    stfs f29, 0x94(r1)
    stfs f29, 0x98(r1)
    stfs f29, 0x84(r1)
    stfs f29, 0x88(r1)
    stfs f29, 0x8c(r1)
    beq lbl_fn_80073194_00001554
    lwz r0, 0x44(r27)
    li r26, 0x0
    lwz r3, 0x40(r27)
    mulli r0, r0, 0x30
    add r24, r3, r0
    lwz r0, 0x28(r24)
    cmpwi r0, 0x0
    bne lbl_fn_80073194_000014EC
    mr r3, r24
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_80073194_000014F0
    addi r3, r24, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_80073194_000014F0
lbl_fn_80073194_000014EC:
    li r26, 0x1
lbl_fn_80073194_000014F0:
    cmpwi r26, 0x0
    beq lbl_fn_80073194_00001554
    addi r3, r1, 0x8
    psq_l f1, 0x4(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x10
    psq_l f1, 0xc(r27), 0, 0
    addi r4, r1, 0x90
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x84
    lwz r0, 0x44(r27)
    lwz r3, 0x40(r27)
    psq_l f1, 0x24(r27), 0, 0
    mulli r0, r0, 0x30
    lfs f2, 0x2c(r27)
    stfs f2, 0x98(r1)
    lfs f0, lbl_80880A84
    add r23, r3, r0
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x1c(r27)
    psq_l f1, 0x30(r27), 0, 0
    lfs f2, 0x38(r27)
    fmuls f29, f0, f7
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8c(r1)
lbl_fn_80073194_00001554:
    cmpwi r23, 0x0
    lwz r0, lbl_8087EEE0
    li r3, 0x0
    beq lbl_fn_80073194_00001568
    mr r3, r23
lbl_fn_80073194_00001568:
    slwi r4, r30, 2
    add r4, r0, r4
    lwz r0, 0x80(r4)
    cmplw r0, r3
    beq lbl_fn_80073194_00001590
    cmpwi r3, 0x0
    stw r3, 0x80(r4)
    beq lbl_fn_80073194_00001590
    mr r4, r30
    bl fn_806165B0
lbl_fn_80073194_00001590:
    fmr f1, f29
    bl fn_8068A850
    frsp f28, f1
    fmr f1, f29
    bl fn_8068AD58
    frsp f3, f1
    lfs f1, lbl_80880A74
    lfs f5, lbl_80880A70
    fmr f4, f28
    fmr f2, f1
    addi r3, r1, 0x2b0
    fmr f6, f5
    bl fn_800D5C84
    addi r3, r1, 0x90
    bl fn_805F9920
    lfs f0, lbl_80880A88
    fcmpo cr0, f1, f0
    bge lbl_fn_80073194_0000170C
    lfs f7, 0x8(r1)
    addi r3, r1, 0x250
    lfs f0, 0xc(r1)
    li r4, 0x0
    fneg f9, f7
    lfs f11, lbl_80880A70
    fneg f7, f0
    lfs f8, 0x84(r1)
    lfs f0, 0x8c(r1)
    li r5, 0x30
    lfs f10, lbl_80880A74
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f11, 0x2a4(r1)
    stfs f11, 0x2a0(r1)
    stfs f11, 0x29c(r1)
    stfs f11, 0x298(r1)
    stfs f11, 0x290(r1)
    stfs f11, 0x288(r1)
    stfs f11, 0x284(r1)
    stfs f10, 0x2a8(r1)
    stfs f10, 0x294(r1)
    stfs f10, 0x280(r1)
    stfs f8, 0x28c(r1)
    stfs f0, 0x2ac(r1)
    bl memset
    lfs f8, lbl_80880A8C
    addi r3, r1, 0x220
    lfs f7, 0x10(r1)
    li r4, 0x0
    lfs f0, 0x14(r1)
    li r5, 0x30
    fdivs f7, f8, f7
    stfs f7, 0x250(r1)
    fdivs f0, f8, f0
    stfs f0, 0x268(r1)
    bl memset
    lfs f8, lbl_80880A90
    addi r4, r25, 0x1d4
    lfs f7, lbl_80880A70
    addi r3, r1, 0x280
    lfs f0, lbl_80880A74
    addi r5, r1, 0x130
    stfs f8, 0x220(r1)
    stfs f8, 0x22c(r1)
    stfs f8, 0x234(r1)
    stfs f8, 0x23c(r1)
    stfs f7, 0x248(r1)
    stfs f0, 0x24c(r1)
    bl fn_805F89F0
    addi r3, r1, 0x250
    addi r4, r1, 0x130
    addi r5, r1, 0x160
    bl fn_805F89F0
    addi r3, r1, 0x220
    addi r4, r1, 0x160
    addi r5, r1, 0x190
    bl fn_805F89F0
    addi r3, r1, 0x2b0
    addi r4, r1, 0x190
    addi r5, r1, 0x1c0
    bl fn_805F89F0
    addi r4, r1, 0x1c0
    addi r3, r1, 0x2e0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    b lbl_fn_80073194_000019B8
lbl_fn_80073194_0000170C:
    addi r3, r1, 0x310
    li r4, 0x0
    li r5, 0x0
    bl fn_8004B290
    addi r3, r1, 0x90
    li r0, 0x1
    stw r0, 0x314(r1)
    mr r4, r3
    bl fn_805F98D0
    lfs f11, 0x8(r1)
    addi r3, r1, 0x90
    lfs f7, 0x84(r1)
    addi r4, r1, 0x3c
    lfs f10, lbl_80880A70
    fadds f30, f11, f7
    lfs f8, 0x88(r1)
    lfs f12, 0xc(r1)
    fadds f31, f10, f8
    lfs f0, 0x8c(r1)
    lfs f7, 0x98(r1)
    fadds f13, f12, f0
    lfs f9, lbl_80880A94
    lfs f8, 0x94(r1)
    fmuls f29, f7, f9
    lfs f7, 0x90(r1)
    lfs f0, lbl_80880A74
    fmuls f7, f7, f9
    stfs f11, 0x54(r1)
    fmuls f8, f8, f9
    fsubs f9, f13, f29
    stfs f10, 0x58(r1)
    fsubs f28, f30, f7
    fsubs f11, f31, f8
    stfs f12, 0x5c(r1)
    stfs f30, 0x78(r1)
    stfs f31, 0x7c(r1)
    stfs f13, 0x80(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f29, 0x50(r1)
    stfs f28, 0x6c(r1)
    stfs f11, 0x70(r1)
    stfs f9, 0x74(r1)
    stfs f10, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f10, 0x68(r1)
    stfs f10, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f10, 0x44(r1)
    bl fn_805F9990
    fabs f7, f1
    lfs f0, lbl_80880A98
    frsp f7, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_80073194_00001860
    lfs f0, lbl_80880A70
    addi r5, r1, 0x30
    stfs f0, 0x30(r1)
    addi r26, r1, 0x60
    lfs f2, lbl_80880A74
    addi r3, r1, 0x90
    stfs f0, 0x34(r1)
    addi r4, r1, 0x24
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x38(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x68(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x2c(r1)
    bl fn_805F9990
    fabs f7, f1
    lfs f0, lbl_80880A98
    frsp f7, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_80073194_00001860
    lfs f2, lbl_80880A70
    addi r3, r1, 0x18
    lfs f0, lbl_80880A74
    stfs f0, 0x18(r1)
    stfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x20(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x68(r1)
lbl_fn_80073194_00001860:
    addi r3, r1, 0x60
    lfs f10, lbl_80880A90
    lfs f2, 0x68(r1)
    addi r4, r1, 0x330
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x6c
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x318
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x78
    stfs f2, 0x338(r1)
    addi r6, r1, 0x324
    lfs f2, 0x74(r1)
    addi r3, r1, 0x310
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x320(r1)
    lfs f2, 0x80(r1)
    lfs f9, 0x14(r1)
    lfs f8, 0xc(r1)
    lfs f7, 0x10(r1)
    fmadds f11, f10, f9, f8
    lfs f0, 0x8(r1)
    fnmsubs f8, f10, f9, f8
    psq_st f1, 0x0(r6), 0, 0
    fnmsubs f9, f10, f7, f0
    fmadds f0, f10, f7, f0
    stfs f2, 0x32c(r1)
    stfs f11, 0x34c(r1)
    stfs f8, 0x350(r1)
    stfs f9, 0x354(r1)
    stfs f0, 0x358(r1)
    bl fn_8004B378
    lfs f5, lbl_80880A90
    addi r3, r1, 0x1f0
    lfs f9, lbl_80880A70
    lfs f0, lbl_80880A74
    fmr f7, f5
    fmr f8, f5
    lfs f4, 0x358(r1)
    lfs f3, 0x354(r1)
    lfs f2, 0x350(r1)
    lfs f1, 0x34c(r1)
    stfs f9, 0x21c(r1)
    lfs f6, lbl_80880A9C
    stfs f9, 0x214(r1)
    stfs f9, 0x210(r1)
    stfs f9, 0x20c(r1)
    stfs f9, 0x208(r1)
    stfs f9, 0x200(r1)
    stfs f9, 0x1fc(r1)
    stfs f9, 0x1f8(r1)
    stfs f9, 0x1f4(r1)
    stfs f0, 0x218(r1)
    stfs f0, 0x204(r1)
    stfs f0, 0x1f0(r1)
    bl fn_800D5E18
    addi r4, r25, 0x1d4
    addi r3, r1, 0x368
    addi r5, r1, 0xa0
    bl fn_805F89F0
    addi r3, r1, 0x2b0
    addi r4, r1, 0xa0
    addi r5, r1, 0xd0
    bl fn_805F89F0
    addi r3, r1, 0x1f0
    addi r4, r1, 0xd0
    addi r5, r1, 0x100
    bl fn_805F89F0
    addi r6, r1, 0x100
    addi r5, r1, 0x2e0
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r1, 0x310
    psq_l f2, 0x8(r6), 0, 0
    li r4, -0x1
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    bl fn_8004B338
lbl_fn_80073194_000019B8:
    mr r4, r28
    addi r3, r1, 0x2e0
    li r5, 0x0
    bl fn_80618420
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r31
    mr r4, r29
    mr r5, r30
    li r6, 0xff
    bl fn_80617880
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_fn_80073194_00001A2C
    cmpwi r0, 0x1
    beq lbl_fn_80073194_00001A64
    cmpwi r0, 0x2
    beq lbl_fn_80073194_00001A9C
    cmpwi r0, 0x3
    beq lbl_fn_80073194_00001AD4
    cmpwi r0, 0x4
    beq lbl_fn_80073194_00001B0C
    cmpwi r0, 0x5
    beq lbl_fn_80073194_00001B44
    cmpwi r0, 0x6
    beq lbl_fn_80073194_00001B7C
    b lbl_fn_80073194_00001BB0
lbl_fn_80073194_00001A2C:
    mr r3, r31
    li r4, 0xf
    li r5, 0x0
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    b lbl_fn_80073194_00001BB0
lbl_fn_80073194_00001A64:
    mr r3, r31
    li r4, 0xf
    li r5, 0x0
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    b lbl_fn_80073194_00001BB0
lbl_fn_80073194_00001A9C:
    mr r3, r31
    li r4, 0xf
    li r5, 0x0
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x2
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    b lbl_fn_80073194_00001BB0
lbl_fn_80073194_00001AD4:
    mr r3, r31
    li r4, 0x8
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_806173E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    b lbl_fn_80073194_00001BB0
lbl_fn_80073194_00001B0C:
    mr r3, r31
    li r4, 0x8
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_806173E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    b lbl_fn_80073194_00001BB0
lbl_fn_80073194_00001B44:
    mr r3, r31
    li r4, 0x8
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_806173E0
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    b lbl_fn_80073194_00001BB0
lbl_fn_80073194_00001B7C:
    mr r3, r31
    li r4, 0x8
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_806173E0
    mr r3, r31
    li r4, 0x1
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
lbl_fn_80073194_00001BB0:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x14c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80073194_00001BF4
    mr r3, r31
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
lbl_fn_80073194_00001BF4:
    mr r3, r31
    bl fn_80617220
    mr r3, r31
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
lbl_fn_80073194_00001C30:
    addi r11, r1, 0x530
    psq_l f31, 0x568(r1), 0, 0
    lfd f31, 0x560(r1)
    psq_l f30, 0x558(r1), 0, 0
    lfd f30, 0x550(r1)
    psq_l f29, 0x548(r1), 0, 0
    lfd f29, 0x540(r1)
    psq_l f28, 0x538(r1), 0, 0
    lfd f28, 0x530(r1)
    bl _restgpr_23
    lwz r0, 0x574(r1)
    mtlr r0
    addi r1, r1, 0x570
    blr
}

asm void fn_80073A6C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_17
    li r0, 0x4
    li r31, 0x0
    li r5, 0x1
    mtctr r0
lbl_fn_80073A6C_00001C8C:
    lwz r4, 0x1c(r3)
    slw r6, r5, r31
    and. r0, r4, r6
    bne lbl_fn_80073A6C_00001CA8
    or r0, r4, r6
    stw r0, 0x1c(r3)
    b lbl_fn_80073A6C_00001CB4
lbl_fn_80073A6C_00001CA8:
    addi r31, r31, 0x1
    bdnz lbl_fn_80073A6C_00001C8C
    li r31, 0x0
lbl_fn_80073A6C_00001CB4:
    li r0, 0x4
    li r30, 0x0
    li r5, 0x1
    mtctr r0
lbl_fn_80073A6C_00001CC4:
    lwz r4, 0x1c(r3)
    slw r6, r5, r30
    and. r0, r4, r6
    bne lbl_fn_80073A6C_00001CE0
    or r0, r4, r6
    stw r0, 0x1c(r3)
    b lbl_fn_80073A6C_00001CEC
lbl_fn_80073A6C_00001CE0:
    addi r30, r30, 0x1
    bdnz lbl_fn_80073A6C_00001CC4
    li r30, 0x0
lbl_fn_80073A6C_00001CEC:
    li r0, 0x4
    li r29, 0x0
    li r5, 0x1
    mtctr r0
lbl_fn_80073A6C_00001CFC:
    lwz r4, 0x20(r3)
    slw r6, r5, r29
    and. r0, r4, r6
    bne lbl_fn_80073A6C_00001D18
    or r0, r4, r6
    stw r0, 0x20(r3)
    b lbl_fn_80073A6C_00001D24
lbl_fn_80073A6C_00001D18:
    addi r29, r29, 0x1
    bdnz lbl_fn_80073A6C_00001CFC
    li r29, 0x0
lbl_fn_80073A6C_00001D24:
    lwz r28, 0x14(r3)
    addi r25, r29, 0xc
    li r24, -0x1
    addi r27, r28, 0x1
    addi r26, r27, 0x1
    addi r5, r26, 0x1
    stw r5, 0x14(r3)
    lwz r4, lbl_8087EFA8
    lwz r0, 0x12c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80073A6C_00001D5C
    addi r0, r5, 0x1
    stw r0, 0x14(r3)
    mr r24, r5
lbl_fn_80073A6C_00001D5C:
    lwz r23, 0x4(r3)
    lwz r0, 0x0(r3)
    addi r22, r23, 0x1
    addi r4, r22, 0x1
    cmpwi r0, 0x0
    stw r4, 0x4(r3)
    beq lbl_fn_80073A6C_00001D8C
    lwz r4, 0x10(r3)
    addi r0, r4, 0x1
    stw r0, 0x10(r3)
    addi r21, r4, 0x6
    b lbl_fn_80073A6C_00001DA8
lbl_fn_80073A6C_00001D8C:
    lwz r5, 0x10(r3)
    lwz r0, 0xc(r3)
    addi r4, r5, 0x1
    lwz r6, 0x8(r3)
    add r0, r0, r5
    stw r4, 0x10(r3)
    add r21, r6, r0
lbl_fn_80073A6C_00001DA8:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80073A6C_00001DC8
    lwz r4, 0x10(r3)
    addi r0, r4, 0x1
    stw r0, 0x10(r3)
    addi r20, r4, 0x6
    b lbl_fn_80073A6C_00001DE4
lbl_fn_80073A6C_00001DC8:
    lwz r5, 0x10(r3)
    lwz r0, 0xc(r3)
    addi r4, r5, 0x1
    lwz r6, 0x8(r3)
    add r0, r0, r5
    stw r4, 0x10(r3)
    add r20, r6, r0
lbl_fn_80073A6C_00001DE4:
    slwi r0, r23, 2
    mr r3, r31
    subf r4, r23, r0
    li r5, 0x3
    addi r19, r4, 0x40
    li r6, 0x2
    li r4, 0x0
    li r7, 0x3
    addi r18, r19, 0x3
    bl fn_80617730
    mr r3, r30
    li r4, 0x3
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    lwz r3, lbl_8087EFA8
    lwz r4, lbl_8087EFB4
    lfs f0, 0x110(r3)
    lfs f7, 0x114(r3)
    lfs f4, lbl_80880AA4
    lfs f6, 0x118(r3)
    lfs f5, 0x11c(r3)
    fmuls f3, f4, f0
    fmuls f2, f4, f7
    stfs f0, 0x20(r1)
    fmuls f1, f4, f6
    lwz r7, 0x2fc(r4)
    fmuls f0, f4, f5
    fctiwz f3, f3
    fctiwz f2, f2
    lwz r0, 0x234(r7)
    fctiwz f1, f1
    stfd f3, 0x30(r1)
    fctiwz f0, f0
    stfd f2, 0x38(r1)
    lwz r6, 0x34(r1)
    cmpwi r0, 0x0
    stfd f1, 0x40(r1)
    lwz r5, 0x3c(r1)
    stfd f0, 0x48(r1)
    lwz r4, 0x44(r1)
    lwz r0, 0x4c(r1)
    stb r6, 0xc(r1)
    lwz r17, 0x108(r3)
    stb r5, 0xd(r1)
    stb r4, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stfs f7, 0x24(r1)
    stfs f6, 0x28(r1)
    stfs f5, 0x2c(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_80073A6C_00001F48
    lfs f0, 0x244(r7)
    lfs f2, 0x248(r7)
    fmuls f3, f4, f0
    lfs f1, 0x24c(r7)
    lfs f0, 0x250(r7)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    lwz r17, 0x23c(r7)
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x48(r1)
    fctiwz f0, f0
    stfd f2, 0x40(r1)
    lwz r6, 0x4c(r1)
    stfd f1, 0x38(r1)
    lwz r5, 0x44(r1)
    stfd f0, 0x30(r1)
    lwz r4, 0x3c(r1)
    lwz r0, 0x34(r1)
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x14(r1)
    lbz r6, 0x14(r1)
    lbz r5, 0x15(r1)
    lbz r4, 0x16(r1)
    lbz r0, 0x17(r1)
    stb r6, 0x1c(r1)
    stb r5, 0x1d(r1)
    stb r4, 0x1e(r1)
    stb r0, 0x1f(r1)
lbl_fn_80073A6C_00001F48:
    lwz r0, 0x12c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80073A6C_00001F7C
    lwz r0, lbl_80880AA0
    stw r0, 0x18(r1)
    lbz r5, 0x18(r1)
    lbz r4, 0x19(r1)
    lbz r3, 0x1a(r1)
    lbz r0, 0x1b(r1)
    stb r5, 0x1c(r1)
    stb r4, 0x1d(r1)
    stb r3, 0x1e(r1)
    stb r0, 0x1f(r1)
lbl_fn_80073A6C_00001F7C:
    lwz r0, 0x1c(r1)
    mr r3, r29
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    bl fn_806175F0
    mr r3, r21
    mr r8, r19
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80613960
    mr r3, r20
    mr r8, r18
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80613960
    lwz r0, lbl_8087EEE0
    slwi r4, r23, 2
    lwz r3, lbl_8087EFB4
    add r4, r0, r4
    lwz r0, 0x80(r4)
    addi r3, r3, 0x50c
    cmplw r0, r3
    beq lbl_fn_80073A6C_00001FFC
    cmpwi r3, 0x0
    stw r3, 0x80(r4)
    beq lbl_fn_80073A6C_00001FFC
    mr r4, r23
    bl fn_806165B0
lbl_fn_80073A6C_00001FFC:
    lwz r3, lbl_8087EFB4
    slwi r4, r22, 2
    lwz r0, lbl_8087EEE0
    lwz r3, 0xc(r3)
    add r4, r0, r4
    lwz r0, 0x80(r4)
    addi r3, r3, 0x480
    cmplw r0, r3
    beq lbl_fn_80073A6C_00002034
    cmpwi r3, 0x0
    stw r3, 0x80(r4)
    beq lbl_fn_80073A6C_00002034
    mr r4, r22
    bl fn_806165B0
lbl_fn_80073A6C_00002034:
    lwz r3, lbl_8087EFB4
    mr r4, r19
    li r5, 0x0
    lwz r19, 0xc(r3)
    addi r3, r19, 0x4a0
    bl fn_80618420
    mr r4, r18
    addi r3, r19, 0x4d0
    li r5, 0x0
    bl fn_80618420
    mr r3, r28
    mr r4, r21
    mr r5, r23
    li r6, 0xff
    bl fn_80617880
    mr r3, r28
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80617460
    mr r3, r28
    mr r5, r31
    li r4, 0x0
    bl fn_806176F0
    mr r3, r28
    bl fn_80617220
    mr r3, r28
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    mr r3, r27
    mr r4, r20
    mr r5, r22
    li r6, 0xff
    bl fn_80617880
    mr r3, r27
    li r4, 0x2
    li r5, 0x8
    li r6, 0xc
    li r7, 0xf
    bl fn_806173E0
    mr r3, r27
    li r4, 0xa
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x2
    bl fn_80617460
    mr r3, r27
    mr r5, r30
    li r4, 0x0
    bl fn_806176F0
    mr r3, r27
    bl fn_80617220
    mr r3, r27
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    lwz r3, lbl_8087EFA8
    lwz r0, 0x12c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80073A6C_00002238
    mr r3, r26
    mr r4, r25
    bl fn_80617650
    mr r3, r26
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    mr r3, r26
    li r4, 0x0
    li r5, 0xe
    li r6, 0x4
    li r7, 0xf
    bl fn_806173E0
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r26
    bl fn_80617220
    mr r3, r26
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    b lbl_fn_80073A6C_000024AC
lbl_fn_80073A6C_00002238:
    cmpwi r17, 0x1
    bne lbl_fn_80073A6C_00002378
    mr r3, r26
    mr r4, r25
    bl fn_80617650
    mr r3, r26
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    mr r3, r26
    li r4, 0xf
    li r5, 0xe
    li r6, 0x0
    li r7, 0x0
    bl fn_806173E0
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80617460
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r26
    bl fn_80617220
    mr r3, r26
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    mr r3, r24
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    mr r3, r24
    li r4, 0x0
    li r5, 0x2
    li r6, 0x4
    li r7, 0xf
    bl fn_806173E0
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r24
    bl fn_80617220
    mr r3, r24
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    b lbl_fn_80073A6C_000024AC
lbl_fn_80073A6C_00002378:
    mr r3, r26
    mr r4, r25
    bl fn_80617650
    mr r3, r26
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    mr r3, r26
    li r4, 0xf
    li r5, 0xe
    li r6, 0x0
    li r7, 0xf
    bl fn_806173E0
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80617460
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r26
    bl fn_80617220
    mr r3, r26
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    mr r3, r24
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    mr r3, r24
    li r4, 0x0
    li r5, 0x2
    li r6, 0x4
    li r7, 0xf
    bl fn_806173E0
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r24
    bl fn_80617220
    mr r3, r24
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
lbl_fn_80073A6C_000024AC:
    addi r11, r1, 0x90
    bl _restgpr_17
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800742C8(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x1f0
    bl _savegpr_19
    lwz r31, 0x14(r3)
    lwz r28, 0x4(r3)
    lwz r0, 0x0(r3)
    addi r30, r31, 0x1
    addi r29, r30, 0x1
    addi r27, r28, 0x1
    cmpwi r0, 0x0
    addi r4, r29, 0x1
    addi r0, r27, 0x1
    stw r4, 0x14(r3)
    stw r0, 0x4(r3)
    beq lbl_fn_800742C8_0000251C
    lwz r4, 0x10(r3)
    addi r0, r4, 0x1
    stw r0, 0x10(r3)
    addi r26, r4, 0x6
    b lbl_fn_800742C8_00002538
lbl_fn_800742C8_0000251C:
    lwz r5, 0x10(r3)
    lwz r0, 0xc(r3)
    addi r4, r5, 0x1
    lwz r6, 0x8(r3)
    add r0, r0, r5
    stw r4, 0x10(r3)
    add r26, r6, r0
lbl_fn_800742C8_00002538:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800742C8_00002558
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1
    stw r0, 0xc(r3)
    addi r25, r4, 0x4
    b lbl_fn_800742C8_00002574
lbl_fn_800742C8_00002558:
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r5, r6, 0x1
    lwz r4, 0x10(r3)
    add r0, r0, r6
    stw r5, 0xc(r3)
    add r25, r4, r0
lbl_fn_800742C8_00002574:
    lwz r6, lbl_8087EFA8
    slwi r0, r28, 2
    lwz r4, lbl_8087EFB4
    subf r3, r28, r0
    lfs f0, 0x110(r6)
    addi r24, r3, 0x40
    lfs f13, 0x114(r6)
    addi r23, r24, 0x3
    lfs f10, lbl_80880AA4
    lfs f12, 0x118(r6)
    lfs f11, 0x11c(r6)
    fmuls f9, f10, f0
    fmuls f8, f10, f13
    stfs f0, 0x38(r1)
    fmuls f7, f10, f12
    lwz r7, 0x2fc(r4)
    fmuls f0, f10, f11
    fctiwz f9, f9
    fctiwz f8, f8
    lwz r0, 0x234(r7)
    fctiwz f7, f7
    stfd f9, 0x198(r1)
    fctiwz f0, f0
    stfd f8, 0x1a0(r1)
    lwz r5, 0x19c(r1)
    cmpwi r0, 0x0
    stfd f7, 0x1a8(r1)
    lwz r4, 0x1a4(r1)
    stfd f0, 0x1b0(r1)
    lwz r3, 0x1ac(r1)
    lwz r0, 0x1b4(r1)
    stfs f13, 0x3c(r1)
    lwz r22, 0x108(r6)
    stfs f12, 0x40(r1)
    stfs f11, 0x44(r1)
    stb r5, 0x2c(r1)
    stb r4, 0x2d(r1)
    stb r3, 0x2e(r1)
    stb r0, 0x2f(r1)
    beq lbl_fn_800742C8_000026A0
    lfs f0, 0x244(r7)
    lfs f8, 0x248(r7)
    fmuls f9, f10, f0
    lfs f7, 0x24c(r7)
    lfs f0, 0x250(r7)
    fmuls f8, f10, f8
    fmuls f7, f10, f7
    lwz r22, 0x23c(r7)
    fmuls f0, f10, f0
    fctiwz f9, f9
    fctiwz f8, f8
    fctiwz f7, f7
    stfd f9, 0x1b0(r1)
    fctiwz f0, f0
    stfd f8, 0x1a8(r1)
    lwz r5, 0x1b4(r1)
    stfd f7, 0x1a0(r1)
    lwz r4, 0x1ac(r1)
    stfd f0, 0x198(r1)
    lwz r3, 0x1a4(r1)
    lwz r0, 0x19c(r1)
    stb r5, 0x28(r1)
    stb r4, 0x29(r1)
    stb r3, 0x2a(r1)
    stb r0, 0x2b(r1)
    lwz r0, 0x28(r1)
    stw r0, 0x30(r1)
    lbz r5, 0x30(r1)
    lbz r4, 0x31(r1)
    lbz r3, 0x32(r1)
    lbz r0, 0x33(r1)
    stb r5, 0x8(r1)
    stb r4, 0xd(r1)
    stb r3, 0x12(r1)
    stb r0, 0x17(r1)
lbl_fn_800742C8_000026A0:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x12c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800742C8_000026D8
    lwz r0, lbl_80880AA8
    stw r0, 0x34(r1)
    lbz r5, 0x34(r1)
    lbz r4, 0x35(r1)
    lbz r3, 0x36(r1)
    lbz r0, 0x37(r1)
    stb r5, 0x18(r1)
    stb r4, 0x1d(r1)
    stb r3, 0x22(r1)
    stb r0, 0x27(r1)
lbl_fn_800742C8_000026D8:
    mr r3, r26
    mr r8, r24
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80613960
    mr r3, r25
    mr r8, r23
    li r4, 0x0
    li r5, 0x1
    li r6, 0x3
    li r7, 0x0
    bl fn_80613960
    lwz r3, lbl_8087EFB4
    slwi r4, r28, 2
    lwz r0, lbl_8087EEE0
    lwz r3, 0xc(r3)
    add r4, r0, r4
    lwz r0, 0x80(r4)
    addi r3, r3, 0x460
    cmplw r0, r3
    beq lbl_fn_800742C8_00002748
    cmpwi r3, 0x0
    stw r3, 0x80(r4)
    beq lbl_fn_800742C8_00002748
    mr r4, r28
    bl fn_806165B0
lbl_fn_800742C8_00002748:
    lwz r0, lbl_8087EEE0
    slwi r4, r27, 2
    lwz r3, lbl_8087EFB4
    add r4, r0, r4
    lwz r0, 0x80(r4)
    addi r3, r3, 0x530
    cmplw r0, r3
    beq lbl_fn_800742C8_0000277C
    cmpwi r3, 0x0
    stw r3, 0x80(r4)
    beq lbl_fn_800742C8_0000277C
    mr r4, r27
    bl fn_806165B0
lbl_fn_800742C8_0000277C:
    lfs f9, lbl_80880A70
    addi r3, r1, 0x168
    lfs f0, lbl_80880A74
    lfs f5, lbl_80880A90
    stfs f9, 0x194(r1)
    lwz r19, lbl_8087EFB4
    fmr f7, f5
    stfs f9, 0x18c(r1)
    fmr f8, f5
    lfs f6, lbl_80880A9C
    stfs f9, 0x188(r1)
    stfs f9, 0x184(r1)
    stfs f9, 0x180(r1)
    stfs f9, 0x178(r1)
    stfs f9, 0x174(r1)
    stfs f9, 0x170(r1)
    stfs f9, 0x16c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0x168(r1)
    lfs f4, 0x360(r19)
    lfs f3, 0x35c(r19)
    lfs f2, 0x358(r19)
    lfs f1, 0x354(r19)
    bl fn_800D5E18
    lbz r0, lbl_8087EEE4
    extsb. r0, r0
    bne lbl_fn_800742C8_00002808
    lis r3, lbl_807C6FC8@ha
    li r4, 0x0
    addi r3, r3, lbl_807C6FC8@l
    li r5, 0x30
    bl memset
    li r0, 0x1
    stb r0, lbl_8087EEE4
lbl_fn_800742C8_00002808:
    lis r21, lbl_807C6FC8@ha
    lfs f7, lbl_80880A74
    addi r21, r21, lbl_807C6FC8@l
    addi r20, r1, 0x138
    stfs f7, 0x8(r21)
    addi r3, r19, 0x370
    lfs f0, lbl_80880A70
    addi r4, r1, 0x108
    stfs f7, 0xc(r21)
    psq_l f1, 0x1d4(r19), 0, 0
    psq_l f2, 0x1dc(r19), 0, 0
    psq_l f3, 0x1e4(r19), 0, 0
    psq_l f4, 0x1ec(r19), 0, 0
    psq_l f5, 0x1f4(r19), 0, 0
    psq_l f6, 0x1fc(r19), 0, 0
    psq_st f6, 0x28(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    stfs f0, 0x144(r1)
    stfs f0, 0x154(r1)
    stfs f0, 0x164(r1)
    bl fn_805F8DA0
    lfs f0, lbl_80880A70
    mr r4, r20
    stfs f0, 0x114(r1)
    addi r3, r1, 0x108
    addi r5, r1, 0x78
    stfs f0, 0x124(r1)
    stfs f0, 0x134(r1)
    bl fn_805F89F0
    mr r3, r21
    addi r4, r1, 0x78
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r19, 0x370
    addi r4, r19, 0x1d4
    addi r5, r1, 0x48
    bl fn_805F89F0
    addi r3, r1, 0x168
    addi r4, r1, 0x48
    addi r5, r1, 0xa8
    bl fn_805F89F0
    mr r4, r24
    addi r3, r1, 0xa8
    li r5, 0x0
    bl fn_80618420
    mr r4, r23
    addi r3, r1, 0xd8
    li r5, 0x0
    bl fn_80618420
    mr r3, r31
    mr r4, r26
    mr r5, r28
    li r6, 0xff
    bl fn_80617880
    mr r3, r31
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80617460
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r31
    bl fn_80617220
    mr r3, r31
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    mr r3, r30
    mr r4, r25
    mr r5, r27
    li r6, 0xff
    bl fn_80617880
    mr r3, r30
    li r4, 0xf
    li r5, 0x8
    li r6, 0x2
    li r7, 0xf
    bl fn_806173E0
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80617460
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r30
    bl fn_80617220
    mr r3, r30
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    mr r3, r29
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    cmpwi r22, 0x1
    bne lbl_fn_800742C8_00002A3C
    mr r3, r29
    li r4, 0x0
    li r5, 0xf
    li r6, 0xf
    li r7, 0x2
    bl fn_806173E0
    b lbl_fn_800742C8_00002A54
lbl_fn_800742C8_00002A3C:
    mr r3, r29
    li r4, 0x0
    li r5, 0xf
    li r6, 0x2
    li r7, 0xf
    bl fn_806173E0
lbl_fn_800742C8_00002A54:
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r29
    bl fn_80617220
    mr r3, r29
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    addi r11, r1, 0x1f0
    bl _restgpr_19
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_800748D8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_27
    lwz r0, 0x0(r3)
    lwz r31, 0x14(r3)
    cmpwi r0, 0x0
    lwz r30, 0x4(r3)
    addi r0, r31, 0x1
    stw r0, 0x14(r3)
    addi r0, r30, 0x1
    stw r0, 0x4(r3)
    beq lbl_fn_800748D8_00002B20
    lwz r4, 0x10(r3)
    addi r0, r4, 0x1
    stw r0, 0x10(r3)
    addi r28, r4, 0x6
    b lbl_fn_800748D8_00002B3C
lbl_fn_800748D8_00002B20:
    lwz r5, 0x10(r3)
    lwz r0, 0xc(r3)
    addi r4, r5, 0x1
    lwz r6, 0x8(r3)
    add r0, r0, r5
    stw r4, 0x10(r3)
    add r28, r6, r0
lbl_fn_800748D8_00002B3C:
    slwi r0, r30, 2
    mr r3, r28
    subf r4, r30, r0
    li r5, 0x0
    addi r27, r4, 0x40
    li r6, 0x0
    li r4, 0x0
    li r7, 0x0
    mr r8, r27
    bl fn_80613960
    lwz r3, lbl_8087EFB4
    slwi r4, r30, 2
    lwz r0, lbl_8087EEE0
    lwz r3, 0xc(r3)
    add r4, r0, r4
    lwz r0, 0x80(r4)
    addi r3, r3, 0x460
    cmplw r0, r3
    beq lbl_fn_800748D8_00002B9C
    cmpwi r3, 0x0
    stw r3, 0x80(r4)
    beq lbl_fn_800748D8_00002B9C
    mr r4, r30
    bl fn_806165B0
lbl_fn_800748D8_00002B9C:
    lfs f1, lbl_80880A70
    addi r3, r1, 0x68
    lfs f0, lbl_80880A74
    lfs f5, lbl_80880A90
    stfs f1, 0x94(r1)
    lwz r29, lbl_8087EFB4
    fmr f7, f5
    stfs f1, 0x8c(r1)
    fmr f8, f5
    lfs f6, lbl_80880A9C
    stfs f1, 0x88(r1)
    stfs f1, 0x84(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x68(r1)
    lfs f4, 0x360(r29)
    lfs f3, 0x35c(r29)
    lfs f2, 0x358(r29)
    lfs f1, 0x354(r29)
    bl fn_800D5E18
    addi r3, r29, 0x370
    addi r4, r29, 0x1d4
    addi r5, r1, 0x8
    bl fn_805F89F0
    addi r3, r1, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    mr r4, r27
    addi r3, r1, 0x38
    li r5, 0x0
    bl fn_80618420
    lwz r3, lbl_8087EFB4
    lwz r4, lbl_8087EFA8
    lwz r3, 0x2fc(r3)
    lwz r27, 0x108(r4)
    lwz r0, 0x234(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800748D8_00002C50
    lwz r27, 0x23c(r3)
lbl_fn_800748D8_00002C50:
    mr r3, r31
    mr r4, r28
    mr r5, r30
    li r6, 0xff
    bl fn_80617880
    cmpwi r27, 0x1
    bne lbl_fn_800748D8_00002C88
    mr r3, r31
    li r4, 0x0
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_806173E0
    b lbl_fn_800748D8_00002CA0
lbl_fn_800748D8_00002C88:
    mr r3, r31
    li r4, 0x0
    li r5, 0xf
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
lbl_fn_800748D8_00002CA0:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r31
    bl fn_80617220
    mr r3, r31
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    addi r11, r1, 0xb0
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80074B24(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_24
    lwz r31, 0x14(r3)
    mr r26, r4
    lwz r0, 0x0(r3)
    lwz r29, 0x4(r3)
    addi r30, r31, 0x1
    addi r5, r30, 0x1
    cmpwi r0, 0x0
    addi r4, r29, 0x1
    stw r5, 0x14(r3)
    stw r4, 0x4(r3)
    beq lbl_fn_80074B24_00002D74
    lwz r4, 0x10(r3)
    addi r0, r4, 0x1
    stw r0, 0x10(r3)
    addi r28, r4, 0x6
    b lbl_fn_80074B24_00002D90
lbl_fn_80074B24_00002D74:
    lwz r5, 0x10(r3)
    lwz r0, 0xc(r3)
    addi r4, r5, 0x1
    lwz r6, 0x8(r3)
    add r0, r0, r5
    stw r4, 0x10(r3)
    add r28, r6, r0
lbl_fn_80074B24_00002D90:
    slwi r0, r29, 2
    mr r3, r28
    subf r4, r29, r0
    li r5, 0x0
    addi r27, r4, 0x40
    li r6, 0x0
    li r4, 0x0
    li r7, 0x0
    mr r8, r27
    bl fn_80613960
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    bne lbl_fn_80074B24_00002E74
    lbz r0, lbl_8087EEE5
    extsb. r0, r0
    bne lbl_fn_80074B24_00002DFC
    lis r24, lbl_807C6FF8@ha
    addi r3, r24, lbl_807C6FF8@l
    bl fn_800D5738
    lis r4, fn_800D5808@ha
    lis r5, lbl_807C6FBC@ha
    addi r3, r24, lbl_807C6FF8@l
    addi r4, r4, fn_800D5808@l
    addi r5, r5, lbl_807C6FBC@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EEE5
lbl_fn_80074B24_00002DFC:
    lis r25, lbl_807C6FF8@ha
    li r24, 0x0
    addi r25, r25, lbl_807C6FF8@l
    lwz r0, 0x28(r25)
    cmpwi r0, 0x0
    bne lbl_fn_80074B24_00002E34
    mr r3, r25
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_80074B24_00002E38
    addi r3, r25, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_80074B24_00002E38
lbl_fn_80074B24_00002E34:
    li r24, 0x1
lbl_fn_80074B24_00002E38:
    cmpwi r24, 0x0
    bne lbl_fn_80074B24_00002E6C
    lis r4, lbl_807317C0@ha
    lis r25, lbl_807C6FF8@ha
    addi r4, r4, lbl_807317C0@l
    addi r3, r25, lbl_807C6FF8@l
    addi r4, r4, 0x62
    bl fn_800D594C
    addi r3, r25, lbl_807C6FF8@l
    li r4, 0x1
    li r0, 0x0
    stb r4, 0x2d(r3)
    stb r0, 0x2e(r3)
lbl_fn_80074B24_00002E6C:
    lis r4, lbl_807C6FF8@ha
    addi r4, r4, lbl_807C6FF8@l
lbl_fn_80074B24_00002E74:
    cmpwi r4, 0x0
    lwz r0, lbl_8087EEE0
    li r3, 0x0
    beq lbl_fn_80074B24_00002E88
    mr r3, r4
lbl_fn_80074B24_00002E88:
    slwi r4, r29, 2
    add r4, r0, r4
    lwz r0, 0x80(r4)
    cmplw r0, r3
    beq lbl_fn_80074B24_00002EB0
    cmpwi r3, 0x0
    stw r3, 0x80(r4)
    beq lbl_fn_80074B24_00002EB0
    mr r4, r29
    bl fn_806165B0
lbl_fn_80074B24_00002EB0:
    lfs f1, lbl_80880A70
    addi r3, r1, 0x68
    lfs f0, lbl_80880A74
    lfs f5, lbl_80880A90
    stfs f1, 0x94(r1)
    fmr f7, f5
    lwz r25, lbl_8087EFB4
    stfs f1, 0x8c(r1)
    fmr f8, f5
    lfs f6, lbl_80880A9C
    stfs f1, 0x88(r1)
    stfs f1, 0x84(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x90(r1)
    stfs f0, 0x7c(r1)
    stfs f0, 0x68(r1)
    lfs f4, 0x50(r26)
    lfs f3, 0x4c(r26)
    lfs f2, 0x48(r26)
    lfs f1, 0x44(r26)
    bl fn_800D5E18
    addi r3, r26, 0x60
    addi r4, r25, 0x1d4
    addi r5, r1, 0x8
    bl fn_805F89F0
    addi r3, r1, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x38
    bl fn_805F89F0
    mr r4, r27
    addi r3, r1, 0x38
    li r5, 0x0
    bl fn_80618420
    mr r3, r31
    mr r4, r28
    mr r5, r29
    li r6, 0x4
    bl fn_80617880
    mr r3, r31
    li r4, 0xf
    li r5, 0xa
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x3
    bl fn_80617460
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r31
    bl fn_80617220
    mr r3, r31
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_80617420
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x3
    bl fn_806174C0
    mr r3, r30
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    mr r3, r30
    li r4, 0x0
    li r5, 0x6
    li r6, 0x7
    li r7, 0xf
    bl fn_806173E0
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    mr r3, r30
    bl fn_80617220
    lwz r0, 0x0(r26)
    clrlwi. r0, r0, 31
    beq lbl_fn_80074B24_00003078
    mr r3, r30
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_806173E0
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x3
    li r7, 0x7
    bl fn_80617420
    b lbl_fn_80074B24_00003090
lbl_fn_80074B24_00003078:
    mr r3, r30
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
lbl_fn_80074B24_00003090:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    addi r11, r1, 0xc0
    bl _restgpr_24
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80074EC8(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stmw r15, 0x15c(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r15, r8
    lwz r9, lbl_8087EFA8
    lwz r0, 0x204(r9)
    cmpwi r0, 0x0
    beq lbl_fn_80074EC8_0000315C
    lwz r0, 0xc0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80074EC8_0000315C
    cmplw r0, r4
    bne lbl_fn_80074EC8_0000315C
    lwz r0, 0xc4(r3)
    cmpw r0, r5
    bne lbl_fn_80074EC8_0000315C
    rlwinm. r0, r5, 0, 28, 28
    beq lbl_fn_80074EC8_00003128
    lwz r0, lbl_8087EEEC
    cmplw r0, r7
    bne lbl_fn_80074EC8_0000315C
lbl_fn_80074EC8_00003128:
    rlwinm. r0, r5, 0, 29, 29
    beq lbl_fn_80074EC8_0000313C
    lwz r0, lbl_8087EEE8
    cmplw r0, r6
    bne lbl_fn_80074EC8_0000315C
lbl_fn_80074EC8_0000313C:
    cmpwi r8, 0x0
    beq lbl_fn_80074EC8_00003FD4
    rlwinm. r0, r5, 0, 26, 26
    beq lbl_fn_80074EC8_00003FD4
    lwz r0, 0xc8(r3)
    cmplw r0, r8
    bne lbl_fn_80074EC8_0000315C
    b lbl_fn_80074EC8_00003FD4
lbl_fn_80074EC8_0000315C:
    cmpwi r4, 0x0
    stw r4, 0xc0(r3)
    stw r5, 0xc4(r3)
    stw r6, lbl_8087EEE8
    stw r7, lbl_8087EEEC
    stw r8, 0xc8(r3)
    bne lbl_fn_80074EC8_00003188
    li r0, 0x0
    stw r0, lbl_8087EEE8
    stw r0, lbl_8087EEEC
    b lbl_fn_80074EC8_00003FD4
lbl_fn_80074EC8_00003188:
    lwz r0, 0x60(r4)
    clrlwi r29, r5, 31
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    li r3, 0x3
    bl fn_806175F0
    cmpwi r29, 0x0
    li r3, 0x0
    li r0, 0xff
    stb r3, 0x18(r1)
    stw r0, 0x50(r1)
    stb r3, 0x19(r1)
    stw r0, 0x54(r1)
    stb r3, 0x1a(r1)
    stw r0, 0x58(r1)
    stb r3, 0x1b(r1)
    stw r0, 0x5c(r1)
    stb r3, 0x1c(r1)
    stw r0, 0x60(r1)
    stb r3, 0x1d(r1)
    stw r0, 0x64(r1)
    stb r3, 0x1e(r1)
    stw r0, 0x68(r1)
    stb r3, 0x1f(r1)
    stw r0, 0x6c(r1)
    beq lbl_fn_80074EC8_000032FC
    addi r5, r1, 0x18
    addi r6, r1, 0x50
    addi r7, r1, 0x1c
    addi r8, r1, 0x1e
    li r10, 0x0
    li r11, 0x4
    li r12, 0x6
    li r16, 0x0
    li r4, 0x0
    li r3, 0x1
    b lbl_fn_80074EC8_0000328C
lbl_fn_80074EC8_0000321C:
    lwz r9, 0xf8(r25)
    lwzx r9, r9, r4
    lwz r9, 0x10(r9)
    subi r0, r9, 0x1
    cmplwi r0, 0x2
    ble lbl_fn_80074EC8_0000325C
    cmpwi r9, 0x0
    beq lbl_fn_80074EC8_00003248
    cmpwi r9, 0x4
    beq lbl_fn_80074EC8_00003270
    b lbl_fn_80074EC8_00003280
lbl_fn_80074EC8_00003248:
    stb r3, 0x0(r5)
    addi r5, r5, 0x1
    stw r10, 0x0(r6)
    addi r10, r10, 0x1
    b lbl_fn_80074EC8_00003280
lbl_fn_80074EC8_0000325C:
    stb r3, 0x0(r7)
    addi r7, r7, 0x1
    stw r11, 0x0(r6)
    addi r11, r11, 0x1
    b lbl_fn_80074EC8_00003280
lbl_fn_80074EC8_00003270:
    stb r3, 0x0(r8)
    addi r8, r8, 0x1
    stw r12, 0x0(r6)
    addi r12, r12, 0x1
lbl_fn_80074EC8_00003280:
    addi r4, r4, 0x4
    addi r6, r6, 0x4
    addi r16, r16, 0x1
lbl_fn_80074EC8_0000328C:
    lwz r0, 0xec(r25)
    cmpw r16, r0
    blt lbl_fn_80074EC8_0000321C
    lbz r0, 0x1f(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80074EC8_000033C8
    lbz r0, 0x1e(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80074EC8_000033C8
    lbz r0, 0x1d(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80074EC8_000033C8
    lbz r0, 0x1c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80074EC8_000033C8
    lbz r0, 0x1b(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80074EC8_000033C8
    lbz r0, 0x1a(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80074EC8_000033C8
    lbz r0, 0x19(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80074EC8_000033C8
    lbz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80074EC8_000033C8
    b lbl_fn_80074EC8_000033C8
lbl_fn_80074EC8_000032FC:
    lwz r6, 0xec(r25)
    li r8, 0x0
    cmpwi cr1, r6, 0x0
    ble cr1, lbl_fn_80074EC8_000033C8
    lwz r0, 0xec(r25)
    subi r4, r6, 0x8
    cmpwi r0, 0x8
    ble lbl_fn_80074EC8_000033A0
    li r5, 0x0
    blt cr1, lbl_fn_80074EC8_00003338
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r6, r0
    bgt lbl_fn_80074EC8_00003338
    li r5, 0x1
lbl_fn_80074EC8_00003338:
    cmpwi r5, 0x0
    beq lbl_fn_80074EC8_000033A0
    addi r0, r4, 0x7
    addi r7, r1, 0x50
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_80074EC8_000033A0
lbl_fn_80074EC8_00003358:
    stw r8, 0x0(r7)
    addi r3, r8, 0x1
    addi r0, r8, 0x2
    addi r6, r8, 0x3
    stw r3, 0x4(r7)
    addi r5, r8, 0x4
    addi r4, r8, 0x5
    addi r3, r8, 0x6
    stw r0, 0x8(r7)
    addi r0, r8, 0x7
    addi r8, r8, 0x8
    stw r6, 0xc(r7)
    stw r5, 0x10(r7)
    stw r4, 0x14(r7)
    stw r3, 0x18(r7)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80074EC8_00003358
lbl_fn_80074EC8_000033A0:
    slwi r0, r8, 2
    addi r3, r1, 0x50
    add r3, r3, r0
    b lbl_fn_80074EC8_000033BC
lbl_fn_80074EC8_000033B0:
    stw r8, 0x0(r3)
    addi r3, r3, 0x4
    addi r8, r8, 0x1
lbl_fn_80074EC8_000033BC:
    lwz r0, 0xec(r25)
    cmpw r8, r0
    blt lbl_fn_80074EC8_000033B0
lbl_fn_80074EC8_000033C8:
    addi r30, r1, 0x50
    li r28, 0x40
    li r27, 0x0
    li r31, 0x0
    b lbl_fn_80074EC8_000034FC
lbl_fn_80074EC8_000033DC:
    lwz r4, 0xf8(r25)
    lwz r3, 0xf0(r25)
    lwzx r4, r4, r31
    lwzx r6, r3, r31
    lwz r20, 0x10(r4)
    lwz r16, 0x0(r4)
    subi r0, r20, 0x1
    lwz r17, 0x4(r4)
    lwz r18, 0x8(r4)
    cmplwi r0, 0x3
    lwz r19, 0xc(r4)
    lwz r21, 0x14(r4)
    lwz r22, 0x18(r4)
    lwz r23, 0x1c(r4)
    lwz r12, 0x20(r4)
    lwz r11, 0x24(r4)
    lwz r10, 0x28(r4)
    lwz r9, 0x2c(r4)
    lwz r8, 0x0(r6)
    lwz r7, 0x4(r6)
    lwz r3, 0x8(r6)
    lwz r0, 0xc(r6)
    lwz r4, 0x10(r6)
    lwz r5, 0x14(r6)
    lwz r6, 0x18(r6)
    stw r16, 0x98(r1)
    stw r17, 0x9c(r1)
    stw r18, 0xa0(r1)
    stw r19, 0xa4(r1)
    stw r20, 0xa8(r1)
    stw r21, 0xac(r1)
    stw r22, 0xb0(r1)
    stw r23, 0xb4(r1)
    stw r12, 0xb8(r1)
    stw r11, 0xbc(r1)
    stw r10, 0xc0(r1)
    stw r9, 0xc4(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r5, 0x44(r1)
    stw r6, 0x48(r1)
    ble lbl_fn_80074EC8_000034D0
    cmpwi r20, 0x0
    bne lbl_fn_80074EC8_000034F0
    cmpwi r29, 0x0
    bne lbl_fn_80074EC8_000034B4
    lwz r3, 0x0(r30)
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    b lbl_fn_80074EC8_000034F0
lbl_fn_80074EC8_000034B4:
    lwz r3, 0x0(r30)
    mr r8, r28
    li r6, 0x3c
    li r7, 0x0
    bl fn_80613960
    addi r28, r28, 0x3
    b lbl_fn_80074EC8_000034F0
lbl_fn_80074EC8_000034D0:
    subfic r3, r20, 0x4
    subi r0, r20, 0x4
    or r0, r3, r0
    lwz r3, 0x0(r30)
    mr r8, r28
    srwi r7, r0, 31
    bl fn_80613960
    addi r28, r28, 0x3
lbl_fn_80074EC8_000034F0:
    addi r31, r31, 0x4
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_80074EC8_000034FC:
    lwz r0, 0xec(r25)
    cmpw r27, r0
    blt lbl_fn_80074EC8_000033DC
    lwz r3, 0x80(r25)
    srwi r0, r3, 31
    add r0, r0, r3
    extrwi r3, r0, 8, 23
    bl fn_80615D20
    lwz r0, 0x13c(r25)
    clrlwi r3, r0, 24
    bl fn_80617200
    lwz r0, 0x13c(r25)
    cmpwi r0, 0x0
    ble lbl_fn_80074EC8_00003598
    mr r17, r25
    addi r16, r1, 0x50
    li r18, 0x0
    b lbl_fn_80074EC8_0000358C
lbl_fn_80074EC8_00003544:
    lwz r8, 0x144(r17)
    mr r3, r18
    lwz r5, 0x140(r17)
    slwi r0, r8, 2
    lwz r7, 0x148(r17)
    lwz r6, 0x14c(r17)
    stw r5, 0x20(r1)
    lwzx r4, r16, r0
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    bl fn_80617130
    lwz r4, 0x28(r1)
    mr r3, r18
    lwz r5, 0x2c(r1)
    bl fn_80617030
    addi r17, r17, 0x10
    addi r18, r18, 0x1
lbl_fn_80074EC8_0000358C:
    lwz r0, 0x13c(r25)
    cmpw r18, r0
    blt lbl_fn_80074EC8_00003544
lbl_fn_80074EC8_00003598:
    mr r16, r25
    li r17, 0x0
lbl_fn_80074EC8_000035A0:
    lbz r4, 0x180(r16)
    mr r3, r17
    lbz r5, 0x181(r16)
    lbz r6, 0x182(r16)
    lbz r7, 0x183(r16)
    bl fn_80617730
    addi r17, r17, 0x1
    addi r16, r16, 0x4
    cmpwi r17, 0x3
    blt lbl_fn_80074EC8_000035A0
    mr r17, r25
    addi r19, r1, 0x50
    li r18, 0x0
    li r16, 0x11
    b lbl_fn_80074EC8_0000375C
lbl_fn_80074EC8_000035DC:
    addi r5, r1, 0xc4
    addi r4, r17, 0x190
    mtctr r16
lbl_fn_80074EC8_000035E8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80074EC8_000035E8
    lwz r0, 0xc8(r1)
    li r6, 0xff
    cmpwi r0, 0x0
    beq lbl_fn_80074EC8_00003628
    cmpwi r0, 0x1
    beq lbl_fn_80074EC8_00003630
    cmpwi r0, 0x2
    beq lbl_fn_80074EC8_00003638
    cmpwi r0, 0x3
    beq lbl_fn_80074EC8_00003640
    b lbl_fn_80074EC8_00003644
lbl_fn_80074EC8_00003628:
    li r6, 0xff
    b lbl_fn_80074EC8_00003644
lbl_fn_80074EC8_00003630:
    li r6, 0x4
    b lbl_fn_80074EC8_00003644
lbl_fn_80074EC8_00003638:
    li r6, 0x5
    b lbl_fn_80074EC8_00003644
lbl_fn_80074EC8_00003640:
    li r6, 0x6
lbl_fn_80074EC8_00003644:
    lwz r5, 0xcc(r1)
    cmpwi r5, 0xff
    beq lbl_fn_80074EC8_0000365C
    lwz r0, 0xd0(r1)
    cmpwi r0, 0xff
    bne lbl_fn_80074EC8_00003670
lbl_fn_80074EC8_0000365C:
    mr r3, r18
    li r4, 0xff
    li r5, 0xff
    bl fn_80617880
    b lbl_fn_80074EC8_00003680
lbl_fn_80074EC8_00003670:
    slwi r0, r0, 2
    mr r3, r18
    lwzx r4, r19, r0
    bl fn_80617880
lbl_fn_80074EC8_00003680:
    lwz r4, 0xd4(r1)
    mr r3, r18
    lwz r5, 0xd8(r1)
    bl fn_806176F0
    lwz r4, 0xdc(r1)
    mr r3, r18
    lwz r5, 0xe0(r1)
    lwz r6, 0xe4(r1)
    lwz r7, 0xe8(r1)
    bl fn_806173E0
    lwz r4, 0xec(r1)
    mr r3, r18
    bl fn_80617650
    lwz r0, 0xfc(r1)
    mr r3, r18
    lwz r4, 0xf0(r1)
    lwz r5, 0xf4(r1)
    clrlwi r7, r0, 24
    lwz r6, 0xf8(r1)
    lwz r8, 0x100(r1)
    bl fn_80617460
    lwz r4, 0x104(r1)
    mr r3, r18
    lwz r5, 0x108(r1)
    lwz r6, 0x10c(r1)
    lwz r7, 0x110(r1)
    bl fn_80617420
    lwz r4, 0x114(r1)
    mr r3, r18
    bl fn_806176A0
    lwz r0, 0x124(r1)
    mr r3, r18
    lwz r4, 0x118(r1)
    lwz r5, 0x11c(r1)
    clrlwi r7, r0, 24
    lwz r6, 0x120(r1)
    lwz r8, 0x128(r1)
    bl fn_806174C0
    lwz r0, 0x148(r1)
    mr r3, r18
    clrlwi r0, r0, 24
    stw r0, 0x8(r1)
    lwz r0, 0x14c(r1)
    stw r0, 0xc(r1)
    lwz r0, 0x144(r1)
    lwz r4, 0x12c(r1)
    lwz r5, 0x130(r1)
    clrlwi r10, r0, 24
    lwz r6, 0x134(r1)
    lwz r7, 0x138(r1)
    lwz r8, 0x13c(r1)
    lwz r9, 0x140(r1)
    bl fn_80616E80
    addi r17, r17, 0x88
    addi r18, r18, 0x1
lbl_fn_80074EC8_0000375C:
    lwz r0, 0x190(r25)
    cmpw r18, r0
    blt lbl_fn_80074EC8_000035DC
    mr r4, r25
    mr r5, r29
    addi r3, r1, 0x70
    bl fn_80072F64
    clrrwi. r0, r26, 1
    beq lbl_fn_80074EC8_00003F70
    cmpwi r15, 0x0
    beq lbl_fn_80074EC8_000038F8
    rlwinm. r0, r26, 0, 26, 26
    beq lbl_fn_80074EC8_000038F8
    lwz r3, 0x84(r1)
    addi r0, r3, 0x2
    cmpwi r0, 0x10
    bgt lbl_fn_80074EC8_000038CC
    lwz r0, 0x88(r1)
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_000038CC
    lwz r5, 0x8c(r1)
    li r4, 0x0
    li r3, 0x1
    slw r0, r3, r4
    and. r0, r5, r0
    beq lbl_fn_80074EC8_000037C8
    li r4, 0x1
lbl_fn_80074EC8_000037C8:
    li r0, 0x1
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_000037DC
    addi r4, r4, 0x1
lbl_fn_80074EC8_000037DC:
    li r0, 0x2
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_000037F0
    addi r4, r4, 0x1
lbl_fn_80074EC8_000037F0:
    li r0, 0x3
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_00003804
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003804:
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_000038CC
    lwz r5, 0x90(r1)
    li r4, 0x0
    li r3, 0x1
    slw r0, r3, r4
    and. r0, r5, r0
    beq lbl_fn_80074EC8_00003828
    li r4, 0x1
lbl_fn_80074EC8_00003828:
    li r0, 0x1
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_0000383C
    addi r4, r4, 0x1
lbl_fn_80074EC8_0000383C:
    li r0, 0x2
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_00003850
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003850:
    li r0, 0x3
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_00003864
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003864:
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_000038CC
    lwz r0, 0x70(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80074EC8_000038AC
    lwz r0, 0x78(r1)
    li r4, 0x0
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_000038D0
    lwz r0, 0x7c(r1)
    cmpwi r0, 0x2
    bgt lbl_fn_80074EC8_000038D0
    lwz r3, 0x80(r1)
    addi r0, r3, 0x1
    cmpwi r0, 0x2
    bgt lbl_fn_80074EC8_000038D0
    li r4, 0x1
    b lbl_fn_80074EC8_000038D0
lbl_fn_80074EC8_000038AC:
    lwz r3, 0x74(r1)
    li r0, 0x8
    srawi r4, r0, 31
    addi r5, r3, 0x1
    srwi r3, r5, 31
    subfc r0, r5, r0
    adde r4, r4, r3
    b lbl_fn_80074EC8_000038D0
lbl_fn_80074EC8_000038CC:
    li r4, 0x0
lbl_fn_80074EC8_000038D0:
    cmpwi r4, 0x0
    beq lbl_fn_80074EC8_000038EC
    lwz r5, 0xc4(r24)
    mr r4, r15
    addi r3, r1, 0x70
    bl fn_80074B24
    b lbl_fn_80074EC8_000038F8
lbl_fn_80074EC8_000038EC:
    lwz r0, 0xc4(r24)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0xc4(r24)
lbl_fn_80074EC8_000038F8:
    rlwinm. r0, r26, 0, 30, 30
    beq lbl_fn_80074EC8_00003A70
    lwz r3, 0x84(r1)
    addi r0, r3, 0x4
    cmpwi r0, 0x10
    bgt lbl_fn_80074EC8_00003A44
    lwz r0, 0x88(r1)
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_00003A44
    lwz r5, 0x8c(r1)
    li r4, 0x0
    li r3, 0x1
    slw r0, r3, r4
    and. r0, r5, r0
    beq lbl_fn_80074EC8_00003938
    li r4, 0x1
lbl_fn_80074EC8_00003938:
    li r0, 0x1
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_0000394C
    addi r4, r4, 0x1
lbl_fn_80074EC8_0000394C:
    li r0, 0x2
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_00003960
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003960:
    li r0, 0x3
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_00003974
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003974:
    addi r0, r4, 0x2
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_00003A44
    lwz r5, 0x90(r1)
    li r4, 0x0
    li r3, 0x1
    slw r0, r3, r4
    and. r0, r5, r0
    beq lbl_fn_80074EC8_0000399C
    li r4, 0x1
lbl_fn_80074EC8_0000399C:
    li r0, 0x1
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_000039B0
    addi r4, r4, 0x1
lbl_fn_80074EC8_000039B0:
    li r0, 0x2
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_000039C4
    addi r4, r4, 0x1
lbl_fn_80074EC8_000039C4:
    li r0, 0x3
    slw r0, r3, r0
    and. r0, r5, r0
    beq lbl_fn_80074EC8_000039D8
    addi r4, r4, 0x1
lbl_fn_80074EC8_000039D8:
    addi r0, r4, 0x1
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_00003A44
    lwz r0, 0x70(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80074EC8_00003A24
    lwz r0, 0x78(r1)
    li r4, 0x0
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_00003A48
    lwz r0, 0x7c(r1)
    cmpwi r0, 0x2
    bgt lbl_fn_80074EC8_00003A48
    lwz r3, 0x80(r1)
    addi r0, r3, 0x2
    cmpwi r0, 0x2
    bgt lbl_fn_80074EC8_00003A48
    li r4, 0x1
    b lbl_fn_80074EC8_00003A48
lbl_fn_80074EC8_00003A24:
    lwz r3, 0x74(r1)
    li r0, 0x8
    srawi r4, r0, 31
    addi r5, r3, 0x2
    srwi r3, r5, 31
    subfc r0, r5, r0
    adde r4, r4, r3
    b lbl_fn_80074EC8_00003A48
lbl_fn_80074EC8_00003A44:
    li r4, 0x0
lbl_fn_80074EC8_00003A48:
    cmpwi r4, 0x0
    beq lbl_fn_80074EC8_00003A60
    lwz r4, 0xc4(r24)
    addi r3, r1, 0x70
    bl fn_80073A6C
    b lbl_fn_80074EC8_00003C80
lbl_fn_80074EC8_00003A60:
    lwz r0, 0xc4(r24)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0xc4(r24)
    b lbl_fn_80074EC8_00003C80
lbl_fn_80074EC8_00003A70:
    rlwinm. r0, r26, 0, 27, 27
    beq lbl_fn_80074EC8_00003C80
    lwz r3, lbl_8087EFA8
    li r0, 0x1
    lwz r3, 0x18c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80074EC8_00003A90
    li r0, 0x2
lbl_fn_80074EC8_00003A90:
    mulli r3, r0, 0x1c
    lis r4, lbl_807316D0@ha
    lwz r5, 0x84(r1)
    addi r4, r4, lbl_807316D0@l
    add r6, r4, r3
    lwz r4, 0xc(r6)
    add r4, r5, r4
    cmpwi r4, 0x10
    bgt lbl_fn_80074EC8_00003C40
    lwz r5, 0x88(r1)
    lwz r4, 0x10(r6)
    add r4, r5, r4
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_00003C40
    lwz r7, 0x8c(r1)
    li r6, 0x0
    li r5, 0x1
    slw r4, r5, r6
    and. r4, r7, r4
    beq lbl_fn_80074EC8_00003AE4
    li r6, 0x1
lbl_fn_80074EC8_00003AE4:
    li r4, 0x1
    slw r4, r5, r4
    and. r4, r7, r4
    beq lbl_fn_80074EC8_00003AF8
    addi r6, r6, 0x1
lbl_fn_80074EC8_00003AF8:
    li r4, 0x2
    slw r4, r5, r4
    and. r4, r7, r4
    beq lbl_fn_80074EC8_00003B0C
    addi r6, r6, 0x1
lbl_fn_80074EC8_00003B0C:
    li r4, 0x3
    slw r4, r5, r4
    and. r4, r7, r4
    beq lbl_fn_80074EC8_00003B20
    addi r6, r6, 0x1
lbl_fn_80074EC8_00003B20:
    lis r4, lbl_807316D0@ha
    addi r4, r4, lbl_807316D0@l
    add r4, r4, r3
    lwz r4, 0x14(r4)
    add r4, r4, r6
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_00003C40
    lwz r7, 0x90(r1)
    li r6, 0x0
    li r5, 0x1
    slw r4, r5, r6
    and. r4, r7, r4
    beq lbl_fn_80074EC8_00003B58
    li r6, 0x1
lbl_fn_80074EC8_00003B58:
    li r4, 0x1
    slw r4, r5, r4
    and. r4, r7, r4
    beq lbl_fn_80074EC8_00003B6C
    addi r6, r6, 0x1
lbl_fn_80074EC8_00003B6C:
    li r4, 0x2
    slw r4, r5, r4
    and. r4, r7, r4
    beq lbl_fn_80074EC8_00003B80
    addi r6, r6, 0x1
lbl_fn_80074EC8_00003B80:
    li r4, 0x3
    slw r4, r5, r4
    and. r4, r7, r4
    beq lbl_fn_80074EC8_00003B94
    addi r6, r6, 0x1
lbl_fn_80074EC8_00003B94:
    lis r8, lbl_807316D0@ha
    addi r8, r8, lbl_807316D0@l
    add r5, r8, r3
    lwz r4, 0x18(r5)
    add r4, r4, r6
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_00003C40
    lwz r4, 0x70(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80074EC8_00003C04
    lwz r4, 0x78(r1)
    li r6, 0x0
    lwzx r3, r8, r3
    add r3, r4, r3
    cmpwi r3, 0x4
    bgt lbl_fn_80074EC8_00003C44
    lwz r4, 0x7c(r1)
    lwz r3, 0x4(r5)
    add r3, r4, r3
    cmpwi r3, 0x2
    bgt lbl_fn_80074EC8_00003C44
    lwz r4, 0x80(r1)
    lwz r3, 0x8(r5)
    add r3, r4, r3
    cmpwi r3, 0x2
    bgt lbl_fn_80074EC8_00003C44
    li r6, 0x1
    b lbl_fn_80074EC8_00003C44
lbl_fn_80074EC8_00003C04:
    mulli r4, r0, 0x1c
    li r3, 0x8
    lwz r6, 0x74(r1)
    srawi r5, r3, 31
    add r7, r8, r4
    lwzx r4, r8, r4
    lwz r8, 0x8(r7)
    lwz r7, 0x4(r7)
    add r4, r8, r4
    add r6, r7, r6
    add r6, r6, r4
    srwi r4, r6, 31
    subfc r3, r6, r3
    adde r6, r5, r4
    b lbl_fn_80074EC8_00003C44
lbl_fn_80074EC8_00003C40:
    li r6, 0x0
lbl_fn_80074EC8_00003C44:
    cmpwi r6, 0x0
    beq lbl_fn_80074EC8_00003C74
    cmpwi r0, 0x2
    bne lbl_fn_80074EC8_00003C64
    lwz r4, 0xc4(r24)
    addi r3, r1, 0x70
    bl fn_800748D8
    b lbl_fn_80074EC8_00003C80
lbl_fn_80074EC8_00003C64:
    lwz r4, 0xc4(r24)
    addi r3, r1, 0x70
    bl fn_800742C8
    b lbl_fn_80074EC8_00003C80
lbl_fn_80074EC8_00003C74:
    lwz r0, 0xc4(r24)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0xc4(r24)
lbl_fn_80074EC8_00003C80:
    rlwinm. r0, r26, 0, 29, 29
    beq lbl_fn_80074EC8_00003DF8
    lwz r5, lbl_8087EEE8
    cmpwi r5, 0x0
    beq lbl_fn_80074EC8_00003DEC
    lwz r3, 0x84(r1)
    addi r0, r3, 0x1
    cmpwi r0, 0x10
    bgt lbl_fn_80074EC8_00003DD0
    lwz r0, 0x88(r1)
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_00003DD0
    lwz r6, 0x8c(r1)
    li r4, 0x0
    li r3, 0x1
    slw r0, r3, r4
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003CCC
    li r4, 0x1
lbl_fn_80074EC8_00003CCC:
    li r0, 0x1
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003CE0
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003CE0:
    li r0, 0x2
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003CF4
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003CF4:
    li r0, 0x3
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003D08
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003D08:
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_00003DD0
    lwz r6, 0x90(r1)
    li r4, 0x0
    li r3, 0x1
    slw r0, r3, r4
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003D2C
    li r4, 0x1
lbl_fn_80074EC8_00003D2C:
    li r0, 0x1
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003D40
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003D40:
    li r0, 0x2
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003D54
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003D54:
    li r0, 0x3
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003D68
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003D68:
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_00003DD0
    lwz r0, 0x70(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80074EC8_00003DB0
    lwz r0, 0x78(r1)
    li r4, 0x0
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_00003DD4
    lwz r0, 0x7c(r1)
    cmpwi r0, 0x2
    bgt lbl_fn_80074EC8_00003DD4
    lwz r3, 0x80(r1)
    addi r0, r3, 0x1
    cmpwi r0, 0x2
    bgt lbl_fn_80074EC8_00003DD4
    li r4, 0x1
    b lbl_fn_80074EC8_00003DD4
lbl_fn_80074EC8_00003DB0:
    lwz r3, 0x74(r1)
    li r0, 0x8
    srawi r4, r0, 31
    addi r6, r3, 0x1
    srwi r3, r6, 31
    subfc r0, r6, r0
    adde r4, r4, r3
    b lbl_fn_80074EC8_00003DD4
lbl_fn_80074EC8_00003DD0:
    li r4, 0x0
lbl_fn_80074EC8_00003DD4:
    cmpwi r4, 0x0
    beq lbl_fn_80074EC8_00003DEC
    lwz r4, 0xc4(r24)
    addi r3, r1, 0x70
    bl fn_80073194
    b lbl_fn_80074EC8_00003DF8
lbl_fn_80074EC8_00003DEC:
    lwz r0, 0xc4(r24)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc4(r24)
lbl_fn_80074EC8_00003DF8:
    rlwinm. r0, r26, 0, 28, 28
    beq lbl_fn_80074EC8_00003F70
    lwz r5, lbl_8087EEEC
    cmpwi r5, 0x0
    beq lbl_fn_80074EC8_00003F64
    lwz r3, 0x84(r1)
    addi r0, r3, 0x1
    cmpwi r0, 0x10
    bgt lbl_fn_80074EC8_00003F48
    lwz r0, 0x88(r1)
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_00003F48
    lwz r6, 0x8c(r1)
    li r4, 0x0
    li r3, 0x1
    slw r0, r3, r4
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003E44
    li r4, 0x1
lbl_fn_80074EC8_00003E44:
    li r0, 0x1
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003E58
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003E58:
    li r0, 0x2
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003E6C
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003E6C:
    li r0, 0x3
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003E80
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003E80:
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_00003F48
    lwz r6, 0x90(r1)
    li r4, 0x0
    li r3, 0x1
    slw r0, r3, r4
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003EA4
    li r4, 0x1
lbl_fn_80074EC8_00003EA4:
    li r0, 0x1
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003EB8
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003EB8:
    li r0, 0x2
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003ECC
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003ECC:
    li r0, 0x3
    slw r0, r3, r0
    and. r0, r6, r0
    beq lbl_fn_80074EC8_00003EE0
    addi r4, r4, 0x1
lbl_fn_80074EC8_00003EE0:
    cmpwi r4, 0x4
    bgt lbl_fn_80074EC8_00003F48
    lwz r0, 0x70(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80074EC8_00003F28
    lwz r0, 0x78(r1)
    li r4, 0x0
    cmpwi r0, 0x4
    bgt lbl_fn_80074EC8_00003F4C
    lwz r0, 0x7c(r1)
    cmpwi r0, 0x2
    bgt lbl_fn_80074EC8_00003F4C
    lwz r3, 0x80(r1)
    addi r0, r3, 0x1
    cmpwi r0, 0x2
    bgt lbl_fn_80074EC8_00003F4C
    li r4, 0x1
    b lbl_fn_80074EC8_00003F4C
lbl_fn_80074EC8_00003F28:
    lwz r3, 0x74(r1)
    li r0, 0x8
    srawi r4, r0, 31
    addi r6, r3, 0x1
    srwi r3, r6, 31
    subfc r0, r6, r0
    adde r4, r4, r3
    b lbl_fn_80074EC8_00003F4C
lbl_fn_80074EC8_00003F48:
    li r4, 0x0
lbl_fn_80074EC8_00003F4C:
    cmpwi r4, 0x0
    beq lbl_fn_80074EC8_00003F64
    lwz r4, 0xc4(r24)
    addi r3, r1, 0x70
    bl fn_80073194
    b lbl_fn_80074EC8_00003F70
lbl_fn_80074EC8_00003F64:
    lwz r0, 0xc4(r24)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc4(r24)
lbl_fn_80074EC8_00003F70:
    lwz r0, 0x70(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80074EC8_00003FAC
    lwz r3, 0x80(r1)
    cmpwi r3, 0x0
    ble lbl_fn_80074EC8_00003F90
    addi r0, r3, 0x6
    b lbl_fn_80074EC8_00003FC0
lbl_fn_80074EC8_00003F90:
    lwz r3, 0x7c(r1)
    cmpwi r3, 0x0
    ble lbl_fn_80074EC8_00003FA4
    addi r0, r3, 0x4
    b lbl_fn_80074EC8_00003FC0
lbl_fn_80074EC8_00003FA4:
    lwz r0, 0x78(r1)
    b lbl_fn_80074EC8_00003FC0
lbl_fn_80074EC8_00003FAC:
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    lwz r3, 0x80(r1)
    add r0, r4, r0
    add r0, r3, r0
lbl_fn_80074EC8_00003FC0:
    clrlwi r3, r0, 24
    bl fn_80613BB0
    lwz r0, 0x84(r1)
    clrlwi r3, r0, 24
    bl fn_806179E0
lbl_fn_80074EC8_00003FD4:
    lmw r15, 0x15c(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80075DEC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r6, 0x0
    lis r7, 0x4330
    xoris r5, r6, 0x8000
    stw r7, 0x8(r1)
    lis r27, lbl_807316C8@ha
    lwz r9, 0x40(r3)
    stw r5, 0xc(r1)
    mr r31, r3
    lfd f6, lbl_807316C8@l(r27)
    xoris r0, r9, 0x8000
    lwz r8, 0x3c(r3)
    lfd f0, 0x8(r1)
    xoris r4, r8, 0x8000
    stw r7, 0x10(r1)
    fsubs f1, f0, f6
    lfs f7, 0x58(r3)
    stw r5, 0x14(r1)
    lfs f4, 0x5c(r3)
    lfd f0, 0x10(r1)
    fadds f1, f7, f1
    stw r4, 0xc(r1)
    fsubs f2, f0, f6
    lfs f5, lbl_80880A70
    stw r0, 0x14(r1)
    lfd f3, 0x8(r1)
    lfd f0, 0x10(r1)
    fadds f2, f4, f2
    fsubs f3, f3, f6
    stw r6, 0x60(r3)
    fsubs f0, f0, f6
    lfs f6, lbl_80880A74
    stw r6, 0x64(r3)
    fadds f3, f3, f7
    fadds f4, f0, f4
    stw r8, 0x68(r3)
    stw r9, 0x6c(r3)
    bl fn_80618570
    lwz r0, 0x6c(r31)
    lfd f2, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f0, 0x5c(r31)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x68(r31)
    mr r28, r3
    lfd f2, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f0, 0x58(r31)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x64(r31)
    mr r29, r3
    lfd f1, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f2, 0x5c(r31)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    lwz r0, 0x60(r31)
    mr r30, r3
    lfd f1, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f2, 0x58(r31)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl fn_806185C0
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80075F58(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r10, 0x4330
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r28, lbl_807316C8@ha
    xoris r9, r5, 0x8000
    lfd f6, lbl_807316C8@l(r28)
    stw r10, 0x8(r1)
    xoris r8, r6, 0x8000
    xoris r0, r7, 0x8000
    lfs f7, 0x58(r3)
    lfd f0, 0x8(r1)
    mr r27, r3
    stw r10, 0x10(r1)
    fsubs f1, f0, f6
    lfs f4, 0x5c(r3)
    stw r9, 0x14(r1)
    lfs f5, lbl_80880A70
    lfd f0, 0x10(r1)
    fadds f1, f7, f1
    stw r8, 0xc(r1)
    fsubs f2, f0, f6
    stw r0, 0x14(r1)
    lfd f3, 0x8(r1)
    lfd f0, 0x10(r1)
    fadds f2, f4, f2
    fsubs f3, f3, f6
    stw r4, 0x60(r3)
    fsubs f0, f0, f6
    lfs f6, lbl_80880A74
    stw r5, 0x64(r3)
    fadds f3, f3, f7
    fadds f4, f0, f4
    stw r6, 0x68(r3)
    stw r7, 0x6c(r3)
    bl fn_80618570
    lwz r0, 0x6c(r27)
    lfd f2, lbl_807316C8@l(r28)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f0, 0x5c(r27)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x68(r27)
    mr r29, r3
    lfd f2, lbl_807316C8@l(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f0, 0x58(r27)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x64(r27)
    mr r30, r3
    lfd f1, lbl_807316C8@l(r28)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f2, 0x5c(r27)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    lwz r0, 0x60(r27)
    mr r31, r3
    lfd f1, lbl_807316C8@l(r28)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f2, 0x58(r27)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    mr r4, r31
    mr r5, r30
    mr r6, r29
    bl fn_806185C0
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800760BC(void)
{
    nofralloc
    mr r3, r4
    mr r4, r5
    mr r5, r6
    mr r6, r7
    b fn_806185C0
}

asm void fn_800760D0(void)
{
    nofralloc
    mr r6, r3
    lwz r3, 0x60(r3)
    lwz r4, 0x64(r6)
    lwz r5, 0x68(r6)
    lwz r6, 0x6c(r6)
    b fn_806185C0
}

asm void fn_800760E8(void)
{
    nofralloc
    cmpwi r4, 0xb8
    beqlr
    cmpwi r4, 0xa8
    beq lbl_fn_800760E8_00004324
    cmpwi r4, 0xb0
    beq lbl_fn_800760E8_00004334
    cmpwi r4, 0x90
    beq lbl_fn_800760E8_0000433C
    cmpwi r4, 0x98
    beq lbl_fn_800760E8_00004354
    cmpwi r4, 0xa0
    beq lbl_fn_800760E8_00004354
    cmpwi r4, 0x80
    beq lbl_fn_800760E8_0000435C
    b lbl_fn_800760E8_00004368
    blr
lbl_fn_800760E8_00004324:
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
    blr
lbl_fn_800760E8_00004334:
    subi r3, r3, 0x1
    blr
lbl_fn_800760E8_0000433C:
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r3, r0, r3
    srwi r0, r3, 31
    add r3, r3, r0
    blr
lbl_fn_800760E8_00004354:
    subi r3, r3, 0x2
    blr
lbl_fn_800760E8_0000435C:
    srawi r0, r3, 2
    addze r3, r0
    blr
lbl_fn_800760E8_00004368:
    li r3, 0x0
    blr
}

asm void fn_80076174(void)
{
    nofralloc
    cmpwi r4, 0x0
    mr r5, r3
    beq lbl_fn_80076174_00004390
    lbz r3, 0x19(r3)
    addi r4, r5, 0x1a
    addi r6, r5, 0x32
    li r5, 0x1
    b fn_80615210
lbl_fn_80076174_00004390:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    b fn_80615210
}

asm void fn_800761A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807316B8@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807316B8@l
    stmw r26, 0x8(r1)
    mr r27, r3
    li r28, 0x0
    addi r30, r4, 0xa8
    li r29, 0x1
    addi r31, r4, 0xc8
    addi r26, r4, 0xf0
lbl_fn_800761A8_000043D4:
    lwz r3, 0xd8(r27)
    slw r0, r29, r28
    srwi r3, r3, 20
    and. r0, r3, r0
    beq lbl_fn_800761A8_00004588
    cmpwi r28, 0x7
    beq lbl_fn_800761A8_00004588
    bge lbl_fn_800761A8_00004414
    cmpwi r28, 0x3
    bge lbl_fn_800761A8_00004408
    cmpwi r28, 0x0
    bge lbl_fn_800761A8_00004424
    b lbl_fn_800761A8_00004588
lbl_fn_800761A8_00004408:
    cmpwi r28, 0x6
    bge lbl_fn_800761A8_00004514
    b lbl_fn_800761A8_000044A4
lbl_fn_800761A8_00004414:
    cmpwi r28, 0xb
    beq lbl_fn_800761A8_00004570
    bge lbl_fn_800761A8_00004588
    b lbl_fn_800761A8_00004528
lbl_fn_800761A8_00004424:
    lwz r3, 0xd0(r27)
    srwi. r0, r3, 31
    beq lbl_fn_800761A8_00004458
    rlwinm r0, r3, 6, 27, 29
    extrwi r4, r3, 8, 4
    lwzx r3, r30, r0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
    li r3, 0x0
    bl fn_80617E40
    b lbl_fn_800761A8_00004478
lbl_fn_800761A8_00004458:
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_806177B0
    li r3, 0x1
    bl fn_80617E40
lbl_fn_800761A8_00004478:
    lwz r3, 0xd8(r27)
    rlwinm r0, r3, 12, 20, 30
    rlwimi r3, r0, 20, 0, 11
    srwi r0, r3, 20
    rlwinm r0, r0, 0, 31, 29
    rlwimi r3, r0, 20, 0, 11
    srwi r0, r3, 20
    rlwinm r0, r0, 0, 30, 28
    rlwimi r3, r0, 20, 0, 11
    stw r3, 0xd8(r27)
    b lbl_fn_800761A8_00004588
lbl_fn_800761A8_000044A4:
    lwz r4, 0xd0(r27)
    extrwi. r0, r4, 1, 12
    beq lbl_fn_800761A8_000044D0
    rlwinm r0, r4, 21, 27, 29
    rlwinm r3, r4, 18, 27, 29
    lwzx r4, r31, r3
    li r3, 0x1
    lwzx r5, r31, r0
    li r6, 0xf
    bl fn_80617D50
    b lbl_fn_800761A8_000044E4
lbl_fn_800761A8_000044D0:
    li r3, 0x0
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl fn_80617D50
lbl_fn_800761A8_000044E4:
    lwz r3, 0xd8(r27)
    srwi r0, r3, 20
    rlwinm r0, r0, 0, 29, 27
    rlwimi r3, r0, 20, 0, 11
    srwi r0, r3, 20
    rlwinm r0, r0, 0, 28, 26
    rlwimi r3, r0, 20, 0, 11
    srwi r0, r3, 20
    rlwinm r0, r0, 0, 27, 25
    rlwimi r3, r0, 20, 0, 11
    stw r3, 0xd8(r27)
    b lbl_fn_800761A8_00004588
lbl_fn_800761A8_00004514:
    lwz r0, 0xd0(r27)
    rlwinm r0, r0, 22, 29, 29
    lwzx r3, r26, r0
    bl fn_80614A80
    b lbl_fn_800761A8_00004588
lbl_fn_800761A8_00004528:
    lwz r5, 0xd0(r27)
    rlwinm r0, r5, 27, 27, 29
    extrwi r3, r5, 1, 21
    lwzx r4, r30, r0
    extrwi r5, r5, 1, 25
    bl fn_80617E00
    lwz r3, 0xd8(r27)
    srwi r0, r3, 20
    rlwinm r0, r0, 0, 24, 22
    rlwimi r3, r0, 20, 0, 11
    srwi r0, r3, 20
    rlwinm r0, r0, 0, 23, 21
    rlwimi r3, r0, 20, 0, 11
    srwi r0, r3, 20
    rlwinm r0, r0, 0, 22, 20
    rlwimi r3, r0, 20, 0, 11
    stw r3, 0xd8(r27)
    b lbl_fn_800761A8_00004588
lbl_fn_800761A8_00004570:
    lwz r0, 0xd0(r27)
    extrwi r3, r0, 1, 27
    bl fn_80617DD0
    lwz r0, 0xd0(r27)
    extrwi r3, r0, 1, 26
    bl fn_80617DA0
lbl_fn_800761A8_00004588:
    addi r28, r28, 0x1
    cmpwi r28, 0xc
    blt lbl_fn_800761A8_000043D4
    lwz r0, 0xd8(r27)
    lwz r3, 0xd0(r27)
    clrlwi r0, r0, 12
    stw r3, 0xd4(r27)
    stw r0, 0xd8(r27)
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800763C0(void)
{
    nofralloc
    cmpwi r5, 0x0
    li r6, 0x0
    beq lbl_fn_800763C0_000045CC
    mr r6, r5
lbl_fn_800763C0_000045CC:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r0, 0x80(r3)
    cmplw r0, r6
    beqlr
    cmpwi r6, 0x0
    stw r6, 0x80(r3)
    beqlr
    mr r3, r6
    b fn_806165B0
    blr
}

asm void fn_800763FC(void)
{
    nofralloc
    slwi r0, r5, 2
    add r3, r3, r0
    lwz r0, 0x80(r3)
    cmplw r0, r4
    beqlr
    cmpwi r4, 0x0
    stw r4, 0x80(r3)
    beqlr
    mr r3, r4
    mr r4, r5
    b fn_806165B0
    blr
}

asm void fn_8007642C(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x190
    bl _savegpr_27
    slwi r0, r4, 2
    mr r29, r4
    add r3, r3, r0
    mr r27, r5
    lwz r0, 0xa0(r3)
    cmplw r0, r5
    beq lbl_fn_8007642C_00004944
    cmpwi r5, 0x0
    stw r5, 0xa0(r3)
    beq lbl_fn_8007642C_00004944
    lwz r3, lbl_8087EFB4
    cmpwi r4, 0x0
    addi r28, r3, 0x15c
    bne lbl_fn_8007642C_00004924
    lfs f7, lbl_80880A70
    addi r3, r1, 0x50
    lfs f0, lbl_80880AB0
    mr r4, r3
    stfs f7, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    bl fn_805F98D0
    addi r3, r1, 0x44
    psq_l f1, 0x14(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r30, r1, 0x20
    lfs f2, 0x1c(r27)
    addi r6, r1, 0x38
    lfs f7, 0x48(r1)
    mr r3, r28
    lfs f0, 0x44(r1)
    fneg f10, f2
    fneg f11, f7
    lfs f8, lbl_80880AB4
    fneg f12, f0
    stfs f2, 0x4c(r1)
    frsp f9, f10
    frsp f7, f11
    frsp f0, f12
    stfs f12, 0x2c(r1)
    fmuls f2, f9, f8
    lwz r31, lbl_80880AAC
    fmuls f7, f7, f8
    fmuls f0, f0, f8
    stfs f7, 0x3c(r1)
    mr r4, r30
    mr r5, r30
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F93C0
    lfs f8, 0x4c(r1)
    addi r29, r1, 0x50
    lfs f7, 0x48(r1)
    addi r5, r1, 0x5c
    lfs f0, 0x44(r1)
    fneg f8, f8
    fneg f7, f7
    lfs f2, 0x28(r1)
    fneg f0, f0
    stfs f2, 0x64(r1)
    frsp f2, f8
    psq_l f1, 0x0(r30), 0, 0
    stfs f0, 0x14(r1)
    addi r6, r1, 0x14
    mr r3, r29
    mr r4, r29
    stfs f7, 0x18(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f8, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f10, lbl_80880AA4
    addi r3, r1, 0x118
    lfs f0, 0x34(r27)
    addi r4, r1, 0x10
    lfs f8, 0x38(r27)
    fmuls f9, f10, f0
    lfs f7, 0x3c(r27)
    lfs f0, 0x40(r27)
    fmuls f8, f10, f8
    fmuls f7, f10, f7
    fmuls f0, f10, f0
    fctiwz f9, f9
    fctiwz f8, f8
    fctiwz f7, f7
    stfd f9, 0x158(r1)
    fctiwz f0, f0
    stfd f8, 0x160(r1)
    lwz r7, 0x15c(r1)
    stfd f7, 0x168(r1)
    lwz r6, 0x164(r1)
    stfd f0, 0x170(r1)
    lwz r5, 0x16c(r1)
    lwz r0, 0x174(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80615AD0
    lfs f1, 0x5c(r1)
    addi r3, r1, 0x118
    lfs f2, 0x60(r1)
    lfs f3, 0x64(r1)
    bl fn_80615990
    lfs f2, lbl_80880A70
    addi r3, r1, 0x118
    lfs f1, lbl_80880A74
    fmr f3, f2
    fmr f4, f2
    fmr f5, f2
    fmr f6, f2
    bl fn_80615700
    lfs f1, lbl_80880A74
    addi r3, r1, 0x118
    lfs f2, lbl_80880AB8
    li r4, 0x0
    bl fn_806158C0
    addi r3, r1, 0x118
    li r4, 0x1
    bl fn_80615AE0
    psq_l f1, 0x0(r28), 0, 0
    addi r30, r1, 0xa8
    psq_l f2, 0x8(r28), 0, 0
    mr r3, r30
    psq_l f3, 0x10(r28), 0, 0
    mr r4, r30
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f0, lbl_80880A70
    psq_st f2, 0x8(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f0, 0xb4(r1)
    stfs f0, 0xc4(r1)
    stfs f0, 0xd4(r1)
    bl fn_805F8CA0
    mr r3, r30
    mr r4, r30
    bl fn_805F8C50
    mr r3, r30
    mr r4, r29
    mr r5, r29
    bl fn_805F93C0
    mr r3, r29
    mr r4, r29
    bl fn_805F98D0
    stw r31, 0xc(r1)
    addi r3, r1, 0xd8
    addi r4, r1, 0xc
    bl fn_80615AD0
    lfs f8, 0x50(r1)
    addi r3, r1, 0xd8
    lfs f7, 0x54(r1)
    lfs f0, 0x58(r1)
    fneg f1, f8
    fneg f2, f7
    fneg f3, f0
    bl fn_806159C0
    lfs f1, lbl_80880A70
    addi r3, r1, 0xd8
    lfs f3, lbl_80880A74
    fmr f2, f1
    lfs f4, lbl_80880ABC
    fmr f5, f1
    lfs f6, lbl_80880AC0
    bl fn_80615700
    addi r3, r1, 0xd8
    li r4, 0x2
    bl fn_80615AE0
    b lbl_fn_8007642C_00004944
lbl_fn_8007642C_00004924:
    mr r3, r27
    mr r5, r28
    addi r4, r1, 0x68
    bl fn_80079994
    li r0, 0x1
    addi r3, r1, 0x68
    slw r4, r0, r29
    bl fn_80615AE0
lbl_fn_8007642C_00004944:
    addi r11, r1, 0x190
    bl _restgpr_27
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80076760(void)
{
    nofralloc
    cmplwi r4, 0xb
    bgt lbl_fn_80076760_00004A38
    lis r6, jumptable_80777CD8@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_80777CD8@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 31, 0, 0
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 28, 1, 3
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 20, 4, 11
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 19, 12, 12
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 16, 13, 15
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 13, 16, 18
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 12, 19, 19
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 11, 20, 20
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 10, 21, 21
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 7, 22, 24
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 6, 25, 25
    stw r0, 0xd0(r3)
    b lbl_fn_80076760_00004A38
    lwz r0, 0xd0(r3)
    rlwimi r0, r5, 4, 26, 27
    stw r0, 0xd0(r3)
lbl_fn_80076760_00004A38:
    cmplwi r4, 0xb
    bgt lbl_fn_80076760_00004C08
    lis r5, jumptable_80777CA8@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_80777CA8@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    srwi r5, r4, 31
    srwi r0, r0, 31
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    srwi r5, r0, 31
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 3, 1
    extrwi r0, r0, 3, 1
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 2, 30, 30
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 8, 4
    extrwi r0, r0, 8, 4
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 3, 29, 29
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 1, 12
    extrwi r0, r0, 1, 12
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 4, 28, 28
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 3, 13
    extrwi r0, r0, 3, 13
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 5, 27, 27
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 3, 16
    extrwi r0, r0, 3, 16
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 6, 26, 26
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 1, 19
    extrwi r0, r0, 1, 19
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 7, 25, 25
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 1, 20
    extrwi r0, r0, 1, 20
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 8, 24, 24
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 1, 21
    extrwi r0, r0, 1, 21
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 9, 23, 23
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 3, 22
    extrwi r0, r0, 3, 22
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 10, 22, 22
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 1, 25
    extrwi r0, r0, 1, 25
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 11, 21, 21
    b lbl_fn_80076760_00004C0C
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    extrwi r5, r4, 2, 26
    extrwi r0, r0, 2, 26
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwinm r5, r0, 12, 20, 20
    b lbl_fn_80076760_00004C0C
lbl_fn_80076760_00004C08:
    li r5, 0x0
lbl_fn_80076760_00004C0C:
    lwz r4, 0xd8(r3)
    srwi r0, r4, 20
    or r0, r0, r5
    rlwimi r4, r0, 20, 0, 11
    stw r4, 0xd8(r3)
    blr
}

asm void fn_80076A28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r5, 0x0(r4)
    lwz r0, 0xd4(r3)
    lwz r4, 0x8(r1)
    srwi r8, r5, 31
    srwi r10, r0, 31
    extrwi r7, r0, 3, 1
    subf r9, r10, r8
    clrlwi r4, r4, 12
    subf r8, r8, r10
    extrwi r6, r5, 3, 1
    or r8, r9, r8
    srwi r10, r4, 20
    srwi r9, r8, 31
    stw r5, 0xd0(r3)
    or r11, r10, r9
    subf r8, r7, r6
    subf r6, r6, r7
    extrwi r9, r0, 8, 4
    or r10, r8, r6
    rlwimi r4, r11, 20, 0, 11
    rlwinm r10, r10, 2, 30, 30
    extrwi r7, r5, 8, 4
    rlwimi r10, r4, 12, 31, 31
    extrwi r8, r0, 1, 12
    rlwimi r4, r10, 20, 0, 11
    extrwi r6, r5, 1, 12
    subf r10, r9, r7
    subf r9, r7, r9
    or r9, r10, r9
    subf r7, r8, r6
    subf r6, r6, r8
    or r8, r7, r6
    rlwinm r9, r9, 3, 29, 29
    rlwimi r9, r4, 12, 30, 31
    extrwi r7, r0, 3, 13
    rlwimi r4, r9, 20, 0, 11
    rlwinm r8, r8, 4, 28, 28
    rlwimi r8, r4, 12, 29, 31
    extrwi r6, r5, 3, 13
    rlwimi r4, r8, 20, 0, 11
    extrwi r9, r0, 3, 16
    subf r8, r7, r6
    subf r6, r6, r7
    or r11, r8, r6
    extrwi r7, r5, 3, 16
    subf r10, r9, r7
    extrwi r8, r0, 1, 19
    rlwinm r11, r11, 5, 27, 27
    subf r9, r7, r9
    rlwimi r11, r4, 12, 28, 31
    extrwi r6, r5, 1, 19
    or r9, r10, r9
    subf r7, r8, r6
    subf r6, r6, r8
    or r6, r7, r6
    rlwimi r4, r11, 20, 0, 11
    rlwinm r9, r9, 6, 26, 26
    rlwimi r9, r4, 12, 27, 31
    rlwinm r6, r6, 7, 25, 25
    rlwimi r4, r9, 20, 0, 11
    rlwimi r6, r4, 12, 26, 31
    rlwimi r4, r6, 20, 0, 11
    extrwi r7, r0, 1, 20
    extrwi r6, r5, 1, 20
    subf r9, r7, r6
    srwi r12, r4, 20
    subf r7, r6, r7
    extrwi r8, r0, 1, 21
    or r7, r9, r7
    extrwi r6, r5, 1, 21
    rlwinm r11, r7, 8, 24, 24
    extrwi r10, r0, 3, 22
    subf r9, r8, r6
    subf r6, r6, r8
    or r11, r12, r11
    extrwi r7, r5, 3, 22
    rlwimi r4, r11, 20, 0, 11
    extrwi r8, r0, 1, 25
    or r11, r9, r6
    subf r9, r10, r7
    subf r7, r7, r10
    srwi r12, r4, 20
    rlwinm r10, r11, 9, 23, 23
    extrwi r6, r5, 1, 25
    or r10, r12, r10
    or r9, r9, r7
    subf r7, r8, r6
    subf r6, r6, r8
    or r7, r7, r6
    rlwimi r4, r10, 20, 0, 11
    rlwinm r8, r9, 10, 22, 22
    extrwi r6, r0, 2, 26
    srwi r9, r4, 20
    extrwi r0, r5, 2, 26
    or r8, r9, r8
    rlwinm r5, r7, 11, 21, 21
    rlwimi r4, r8, 20, 0, 11
    srwi r7, r4, 20
    or r7, r7, r5
    subf r5, r6, r0
    subf r0, r0, r6
    or r0, r5, r0
    rlwimi r4, r7, 20, 0, 11
    srwi r5, r4, 20
    rlwinm r0, r0, 12, 20, 20
    or r0, r5, r0
    rlwimi r4, r0, 20, 0, 11
    stw r4, 0xd8(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_80076BE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_fn_80076BE4_00004E04
    stw r4, 0xdc(r3)
    b lbl_fn_80076BE4_00004E2C
lbl_fn_80076BE4_00004E04:
    lwz r0, 0xdc(r3)
    cmplw r0, r4
    beq lbl_fn_80076BE4_00004E2C
    stw r4, 0xdc(r3)
    bl fn_806134E0
    addi r3, r31, 0x1b0
    bl fn_806130F0
    mr r4, r31
    li r3, 0x0
    bl fn_806136C0
lbl_fn_80076BE4_00004E2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80076C44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r29, r3
    mr r30, r4
    li r31, 0x100
    mr r28, r29
    li r27, 0x0
lbl_fn_80076C44_00004E64:
    cmpwi r31, 0x100
    bne lbl_fn_80076C44_00004E7C
    lwz r0, 0xe0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80076C44_00004E7C
    mr r31, r27
lbl_fn_80076C44_00004E7C:
    lwz r4, 0xe0(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80076C44_00004EB4
    mr r3, r30
    bl fn_80071088
    cmpwi r3, 0x0
    beq lbl_fn_80076C44_00004EB4
    slwi r0, r27, 3
    mr r3, r27
    add r5, r29, r0
    lwz r4, 0xe4(r5)
    addi r0, r4, 0x1
    stw r0, 0xe4(r5)
    b lbl_fn_80076C44_00005170
lbl_fn_80076C44_00004EB4:
    addi r27, r27, 0x1
    addi r28, r28, 0x8
    cmpwi r27, 0x100
    blt lbl_fn_80076C44_00004E64
    lis r5, lbl_807317C0@ha
    li r3, 0x288
    addi r5, r5, lbl_807317C0@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80076C44_00005158
    li r0, 0x3
    mr r5, r30
    mr r6, r3
    li r4, 0x0
    mtctr r0
lbl_fn_80076C44_00004EFC:
    lwz r0, 0x0(r5)
    addi r4, r4, 0x8
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r6)
    lbz r0, 0xc(r5)
    stb r0, 0xc(r6)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r6)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r6)
    lwz r0, 0x18(r5)
    stw r0, 0x18(r6)
    lbz r0, 0x1c(r5)
    stb r0, 0x1c(r6)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r6)
    lwz r0, 0x24(r5)
    stw r0, 0x24(r6)
    lwz r0, 0x28(r5)
    stw r0, 0x28(r6)
    lbz r0, 0x2c(r5)
    stb r0, 0x2c(r6)
    lwz r0, 0x30(r5)
    stw r0, 0x30(r6)
    lwz r0, 0x34(r5)
    stw r0, 0x34(r6)
    lwz r0, 0x38(r5)
    stw r0, 0x38(r6)
    lbz r0, 0x3c(r5)
    stb r0, 0x3c(r6)
    lwz r0, 0x40(r5)
    stw r0, 0x40(r6)
    lwz r0, 0x44(r5)
    stw r0, 0x44(r6)
    lwz r0, 0x48(r5)
    stw r0, 0x48(r6)
    lbz r0, 0x4c(r5)
    stb r0, 0x4c(r6)
    lwz r0, 0x50(r5)
    stw r0, 0x50(r6)
    lwz r0, 0x54(r5)
    stw r0, 0x54(r6)
    lwz r0, 0x58(r5)
    stw r0, 0x58(r6)
    lbz r0, 0x5c(r5)
    stb r0, 0x5c(r6)
    lwz r0, 0x60(r5)
    stw r0, 0x60(r6)
    lwz r0, 0x64(r5)
    stw r0, 0x64(r6)
    lwz r0, 0x68(r5)
    stw r0, 0x68(r6)
    lbz r0, 0x6c(r5)
    stb r0, 0x6c(r6)
    lwz r0, 0x70(r5)
    stw r0, 0x70(r6)
    lwz r0, 0x74(r5)
    stw r0, 0x74(r6)
    lwz r0, 0x78(r5)
    stw r0, 0x78(r6)
    lbz r0, 0x7c(r5)
    addi r5, r5, 0x80
    stb r0, 0x7c(r6)
    addi r6, r6, 0x80
    bdnz lbl_fn_80076C44_00004EFC
    slwi r4, r4, 4
    li r0, 0x3
    add r8, r30, r4
    mr r5, r30
    add r9, r3, r4
    lwzx r4, r30, r4
    stw r4, 0x0(r9)
    mr r6, r3
    li r4, 0x0
    lwz r7, 0x4(r8)
    stw r7, 0x4(r9)
    lwz r7, 0x8(r8)
    stw r7, 0x8(r9)
    lbz r7, 0xc(r8)
    stb r7, 0xc(r9)
    lwz r7, 0x10(r8)
    stw r7, 0x10(r9)
    lwz r7, 0x14(r8)
    stw r7, 0x14(r9)
    lwz r7, 0x18(r8)
    stw r7, 0x18(r9)
    lbz r7, 0x1c(r8)
    stb r7, 0x1c(r9)
    lwz r7, 0x20(r8)
    stw r7, 0x20(r9)
    lwz r7, 0x24(r8)
    stw r7, 0x24(r9)
    lwz r7, 0x28(r8)
    stw r7, 0x28(r9)
    lbz r7, 0x2c(r8)
    stb r7, 0x2c(r9)
    mtctr r0
lbl_fn_80076C44_0000508C:
    lwz r0, 0x1b0(r5)
    addi r4, r4, 0x8
    stw r0, 0x1b0(r6)
    lwz r0, 0x1b4(r5)
    stw r0, 0x1b4(r6)
    lwz r0, 0x1b8(r5)
    stw r0, 0x1b8(r6)
    lwz r0, 0x1bc(r5)
    stw r0, 0x1bc(r6)
    lwz r0, 0x1c0(r5)
    stw r0, 0x1c0(r6)
    lwz r0, 0x1c4(r5)
    stw r0, 0x1c4(r6)
    lwz r0, 0x1c8(r5)
    stw r0, 0x1c8(r6)
    lwz r0, 0x1cc(r5)
    stw r0, 0x1cc(r6)
    lwz r0, 0x1d0(r5)
    stw r0, 0x1d0(r6)
    lwz r0, 0x1d4(r5)
    stw r0, 0x1d4(r6)
    lwz r0, 0x1d8(r5)
    stw r0, 0x1d8(r6)
    lwz r0, 0x1dc(r5)
    stw r0, 0x1dc(r6)
    lwz r0, 0x1e0(r5)
    stw r0, 0x1e0(r6)
    lwz r0, 0x1e4(r5)
    stw r0, 0x1e4(r6)
    lwz r0, 0x1e8(r5)
    stw r0, 0x1e8(r6)
    lwz r0, 0x1ec(r5)
    addi r5, r5, 0x40
    stw r0, 0x1ec(r6)
    addi r6, r6, 0x40
    bdnz lbl_fn_80076C44_0000508C
    slwi r0, r4, 3
    add r5, r30, r0
    add r4, r3, r0
    lwz r0, 0x1b0(r5)
    stw r0, 0x1b0(r4)
    lwz r0, 0x1b4(r5)
    stw r0, 0x1b4(r4)
    lwz r0, 0x1b8(r5)
    stw r0, 0x1b8(r4)
    lwz r0, 0x1bc(r5)
    stw r0, 0x1bc(r4)
    lwz r0, 0x1c0(r5)
    stw r0, 0x1c0(r4)
    lwz r0, 0x1c4(r5)
    stw r0, 0x1c4(r4)
lbl_fn_80076C44_00005158:
    slwi r4, r31, 3
    li r0, 0x1
    add r4, r29, r4
    stw r3, 0xe0(r4)
    mr r3, r31
    stw r0, 0xe4(r4)
lbl_fn_80076C44_00005170:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80076F88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    slwi r0, r4, 3
    stw r31, 0xc(r1)
    add r31, r3, r0
    lwz r3, 0xe4(r31)
    subic. r0, r3, 0x1
    stw r0, 0xe4(r31)
    bgt lbl_fn_80076F88_000051BC
    lwz r3, 0xe0(r31)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0xe0(r31)
lbl_fn_80076F88_000051BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80076FD4(void)
{
    nofralloc
    lwz r6, lbl_8087EEE0
    mr r0, r3
    mr r5, r4
    lwz r3, 0x8e0(r6)
    mr r4, r0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

asm void fn_80076FF8(void)
{
    nofralloc
    lwz r0, 0x44(r3)
    stwu r1, -0x20(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80076FF8_0000520C
    lfs f3, lbl_80880AC4
    b lbl_fn_80076FF8_00005210
lbl_fn_80076FF8_0000520C:
    lfs f3, lbl_80880AC8
lbl_fn_80076FF8_00005210:
    lhz r5, 0x6(r3)
    lis r4, 0x4330
    stw r5, 0xc(r1)
    lhz r0, 0x8(r3)
    lis r3, lbl_807317B8@ha
    stw r4, 0x8(r1)
    lfd f2, lbl_807317B8@l(r3)
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    fmuls f1, f3, f0
    addi r1, r1, 0x20
    blr
}
