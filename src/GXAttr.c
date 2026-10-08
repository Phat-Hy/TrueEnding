#include "revolution/types.h"

/* External Jumptables in .rodata */
extern u8 jumptable_807B0750[];
extern u8 jumptable_807B07B8[];
extern u8 jumptable_807B0820[];
extern u8 jumptable_807B0864[];
extern u8 jumptable_807B08A8[];

/* External SDA symbols */
extern u32 __GXData;
extern u32 lbl_8087E870;
extern u32 lbl_8087E874;
extern u8 lbl_8087E878[8];

/* Function declarations */
void fn_80612E80(void);
void fn_806130F0(void);
void fn_80613300(void);
void fn_806133B0(void);
void fn_806134E0(void);
void fn_80613520(void);
void fn_806136C0(void);
void fn_80613890(void);
void fn_80613910(void);
void fn_80613950(void);
void fn_80613960(void);
void fn_80613BB0(void);

asm void fn_80612E80(void)
{
    nofralloc
    cmplwi r3, 0x19
    bgt lbl_fn_80612E80_00000214
    lis r5, jumptable_807B0750@ha
    slwi r0, r3, 2
    addi r5, r5, jumptable_807B0750@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 0, 31, 31
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 1, 30, 30
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 2, 29, 29
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 3, 28, 28
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 4, 27, 27
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 5, 26, 26
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 6, 25, 25
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 7, 24, 24
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 8, 23, 23
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 9, 21, 22
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    cmpwi r4, 0x0
    beq lbl_fn_80612E80_0000010C
    lwz r5, __GXData
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x524(r5)
    stb r0, 0x525(r5)
    stw r4, 0x520(r5)
    b lbl_fn_80612E80_00000214
lbl_fn_80612E80_0000010C:
    lwz r3, __GXData
    li r0, 0x0
    stb r0, 0x524(r3)
    b lbl_fn_80612E80_00000214
    cmpwi r4, 0x0
    beq lbl_fn_80612E80_00000140
    lwz r5, __GXData
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x525(r5)
    stb r0, 0x524(r5)
    stw r4, 0x520(r5)
    b lbl_fn_80612E80_00000214
lbl_fn_80612E80_00000140:
    lwz r3, __GXData
    li r0, 0x0
    stb r0, 0x525(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 13, 17, 18
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x14(r3)
    rlwimi r0, r4, 15, 15, 16
    stw r0, 0x14(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 0, 30, 31
    stw r0, 0x18(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 2, 28, 29
    stw r0, 0x18(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 4, 26, 27
    stw r0, 0x18(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 6, 24, 25
    stw r0, 0x18(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 8, 22, 23
    stw r0, 0x18(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 10, 20, 21
    stw r0, 0x18(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 12, 18, 19
    stw r0, 0x18(r3)
    b lbl_fn_80612E80_00000214
    lwz r3, __GXData
    lwz r0, 0x18(r3)
    rlwimi r0, r4, 14, 16, 17
    stw r0, 0x18(r3)
lbl_fn_80612E80_00000214:
    lwz r4, __GXData
    lbz r0, 0x524(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80612E80_00000230
    lbz r0, 0x525(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80612E80_00000248
lbl_fn_80612E80_00000230:
    lwz r5, __GXData
    lwz r0, 0x520(r5)
    lwz r3, 0x14(r5)
    rlwimi r3, r0, 11, 19, 20
    stw r3, 0x14(r5)
    b lbl_fn_80612E80_00000254
lbl_fn_80612E80_00000248:
    lwz r0, 0x14(r4)
    rlwinm r0, r0, 0, 21, 18
    stw r0, 0x14(r4)
lbl_fn_80612E80_00000254:
    lwz r0, 0x5fc(r4)
    ori r0, r0, 0x8
    stw r0, 0x5fc(r4)
    blr
}

asm void fn_806130F0(void)
{
    nofralloc
    lwz r5, __GXData
    li r7, 0x0
    li r8, 0x1
    lis r4, jumptable_807B07B8@ha
    b lbl_fn_806130F0_0000042C
    nop
lbl_fn_806130F0_00000288:
    lwz r6, 0x0(r3)
    lwz r0, 0x4(r3)
    cmplwi r6, 0x19
    bgt lbl_fn_806130F0_00000428
    addi r9, r4, jumptable_807B07B8@l
    slwi r6, r6, 2
    lwzx r9, r9, r6
    mtctr r9
    bctr
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 0, 31, 31
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 1, 30, 30
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 2, 29, 29
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 3, 28, 28
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 4, 27, 27
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 5, 26, 26
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 6, 25, 25
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 7, 24, 24
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 8, 23, 23
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 9, 21, 22
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    cmpwi r0, 0x0
    beq lbl_fn_806130F0_00000364
    stb r8, 0x524(r5)
    stb r7, 0x525(r5)
    stw r0, 0x520(r5)
    b lbl_fn_806130F0_00000428
lbl_fn_806130F0_00000364:
    stb r7, 0x524(r5)
    b lbl_fn_806130F0_00000428
    cmpwi r0, 0x0
    beq lbl_fn_806130F0_00000384
    stb r8, 0x525(r5)
    stb r7, 0x524(r5)
    stw r0, 0x520(r5)
    b lbl_fn_806130F0_00000428
lbl_fn_806130F0_00000384:
    stb r7, 0x525(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 13, 17, 18
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 15, 15, 16
    stw r6, 0x14(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 0, 30, 31
    stw r6, 0x18(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 2, 28, 29
    stw r6, 0x18(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 4, 26, 27
    stw r6, 0x18(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 6, 24, 25
    stw r6, 0x18(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 8, 22, 23
    stw r6, 0x18(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 10, 20, 21
    stw r6, 0x18(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 12, 18, 19
    stw r6, 0x18(r5)
    b lbl_fn_806130F0_00000428
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 14, 16, 17
    stw r6, 0x18(r5)
lbl_fn_806130F0_00000428:
    addi r3, r3, 0x8
lbl_fn_806130F0_0000042C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0xff
    bne lbl_fn_806130F0_00000288
    lbz r0, 0x524(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806130F0_00000450
    lbz r0, 0x525(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806130F0_00000464
lbl_fn_806130F0_00000450:
    lwz r0, 0x520(r5)
    lwz r3, 0x14(r5)
    rlwimi r3, r0, 11, 19, 20
    stw r3, 0x14(r5)
    b lbl_fn_806130F0_00000470
lbl_fn_806130F0_00000464:
    lwz r0, 0x14(r5)
    rlwinm r0, r0, 0, 21, 18
    stw r0, 0x14(r5)
lbl_fn_806130F0_00000470:
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x8
    stw r0, 0x5fc(r5)
    blr
}

asm void fn_80613300(void)
{
    nofralloc
    lis r5, 0xcc01
    li r6, 0x8
    stb r6, -0x8000(r5)
    li r4, 0x50
    lwz r3, __GXData
    li r0, 0x60
    stb r4, -0x8000(r5)
    lwz r4, 0x14(r3)
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    stb r0, -0x8000(r5)
    lwz r0, 0x18(r3)
    stw r0, -0x8000(r5)
    lbz r0, 0x525(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80613300_000004C8
    li r8, 0x2
    b lbl_fn_80613300_000004D8
lbl_fn_80613300_000004C8:
    lbz r4, 0x524(r3)
    neg r0, r4
    or r0, r0, r4
    srwi r8, r0, 31
lbl_fn_80613300_000004D8:
    lwz r0, 0x14(r3)
    lis r6, 0xcc01
    lwz r5, 0x18(r3)
    li r4, 0x10
    extrwi r7, r0, 4, 15
    li r0, 0x1008
    cntlzw r7, r7
    clrlwi r5, r5, 16
    stb r4, -0x8000(r6)
    subfic r7, r7, 0x21
    cntlzw r5, r5
    slwi r4, r8, 2
    subfic r5, r5, 0x21
    stw r0, -0x8000(r6)
    srwi r7, r7, 1
    li r0, 0x1
    extlwi r5, r5, 28, 3
    or r5, r5, r7
    or r4, r5, r4
    stw r4, -0x8000(r6)
    sth r0, 0x2(r3)
    blr
}

asm void fn_806133B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r3, __GXData
    stw r31, 0xc(r1)
    lhz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806133B0_00000650
    lwz r9, 0x14(r3)
    la r7, lbl_8087E878
    lwz r5, 0x1c(r3)
    clrlwi r0, r9, 31
    extrwi r4, r9, 1, 30
    add r0, r0, r4
    extrwi r8, r5, 1, 22
    extrwi r4, r9, 1, 29
    extrwi r5, r9, 2, 19
    add r0, r0, r4
    cmpwi r8, 0x1
    extrwi r4, r9, 1, 28
    extrwi r6, r9, 1, 25
    add r0, r0, r4
    extrwi r8, r9, 1, 23
    extrwi r4, r9, 1, 27
    lwz r31, 0x18(r3)
    add r0, r0, r4
    lbzx r5, r7, r5
    extrwi r4, r9, 1, 26
    add r0, r0, r4
    add r0, r0, r6
    extrwi r6, r9, 1, 24
    add r0, r0, r6
    extrwi r4, r9, 2, 21
    lbzx r6, r7, r4
    add r0, r0, r8
    li r4, 0x1
    add r0, r0, r6
    bne lbl_fn_806133B0_000005C4
    li r4, 0x3
lbl_fn_806133B0_000005C4:
    mullw r8, r5, r4
    la r7, lbl_8087E870
    extrwi r4, r9, 2, 17
    extrwi r5, r9, 2, 15
    lbzx r6, r7, r4
    lbzx r5, r7, r5
    add r0, r0, r8
    la r12, lbl_8087E874
    add r0, r0, r6
    clrlwi r4, r31, 30
    extrwi r10, r31, 2, 28
    lbzx r11, r12, r4
    add r0, r0, r5
    extrwi r9, r31, 2, 26
    extrwi r8, r31, 2, 24
    extrwi r7, r31, 2, 22
    extrwi r6, r31, 2, 20
    extrwi r5, r31, 2, 18
    extrwi r4, r31, 2, 16
    lbzx r10, r12, r10
    add r0, r0, r11
    lbzx r9, r12, r9
    add r0, r0, r10
    lbzx r8, r12, r8
    add r0, r0, r9
    lbzx r7, r12, r7
    add r0, r0, r8
    lbzx r6, r12, r6
    add r0, r0, r7
    lbzx r5, r12, r5
    add r0, r0, r6
    lbzx r4, r12, r4
    add r0, r0, r5
    add r0, r0, r4
    sth r0, 0x6(r3)
lbl_fn_806133B0_00000650:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_806134E0(void)
{
    nofralloc
    lwz r5, __GXData
    li r0, 0x1
    li r3, 0x0
    li r4, 0x0
    rlwimi r3, r0, 9, 21, 22
    stw r3, 0x14(r5)
    stw r4, 0x18(r5)
    stb r4, 0x524(r5)
    stb r4, 0x525(r5)
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x8
    stw r0, 0x5fc(r5)
    blr
}

asm void fn_80613520(void)
{
    nofralloc
    subi r0, r4, 0x9
    lwz r8, __GXData
    cmplwi r0, 0x10
    slwi r4, r3, 2
    add r8, r8, r4
    bgt lbl_fn_80613520_00000810
    lis r4, jumptable_807B0820@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807B0820@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 0, 31, 31
    rlwimi r0, r6, 1, 28, 30
    rlwimi r0, r7, 4, 23, 27
    stw r0, 0x1c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x1c(r8)
    cmpwi r5, 0x2
    rlwimi r0, r6, 10, 19, 21
    stw r0, 0x1c(r8)
    bne lbl_fn_80613520_00000710
    lwz r0, 0x1c(r8)
    ori r0, r0, 0x200
    oris r0, r0, 0x8000
    stw r0, 0x1c(r8)
    b lbl_fn_80613520_00000810
lbl_fn_80613520_00000710:
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 9, 22, 22
    clrlwi r0, r0, 1
    stw r0, 0x1c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 13, 18, 18
    rlwimi r0, r6, 14, 15, 17
    stw r0, 0x1c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 17, 14, 14
    rlwimi r0, r6, 18, 11, 13
    stw r0, 0x1c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 21, 10, 10
    rlwimi r0, r6, 22, 7, 9
    rlwimi r0, r7, 25, 2, 6
    stw r0, 0x1c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x3c(r8)
    rlwimi r0, r5, 0, 31, 31
    rlwimi r0, r6, 1, 28, 30
    rlwimi r0, r7, 4, 23, 27
    stw r0, 0x3c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x3c(r8)
    rlwimi r0, r5, 9, 22, 22
    rlwimi r0, r6, 10, 19, 21
    rlwimi r0, r7, 13, 14, 18
    stw r0, 0x3c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x3c(r8)
    rlwimi r0, r5, 18, 13, 13
    rlwimi r0, r6, 19, 10, 12
    rlwimi r0, r7, 22, 5, 9
    stw r0, 0x3c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x3c(r8)
    rlwimi r0, r5, 27, 4, 4
    rlwimi r0, r6, 28, 1, 3
    stw r0, 0x3c(r8)
    lwz r0, 0x5c(r8)
    rlwimi r0, r7, 0, 27, 31
    stw r0, 0x5c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x5c(r8)
    rlwimi r0, r5, 5, 26, 26
    rlwimi r0, r6, 6, 23, 25
    rlwimi r0, r7, 9, 18, 22
    stw r0, 0x5c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x5c(r8)
    rlwimi r0, r5, 14, 17, 17
    rlwimi r0, r6, 15, 14, 16
    rlwimi r0, r7, 18, 9, 13
    stw r0, 0x5c(r8)
    b lbl_fn_80613520_00000810
    lwz r0, 0x5c(r8)
    rlwimi r0, r5, 23, 8, 8
    rlwimi r0, r6, 24, 5, 7
    rlwimi r0, r7, 27, 0, 4
    stw r0, 0x5c(r8)
lbl_fn_80613520_00000810:
    lwz r5, __GXData
    clrlwi r0, r3, 24
    li r3, 0x1
    lwz r4, 0x5fc(r5)
    slw r0, r3, r0
    clrlwi r0, r0, 24
    ori r3, r4, 0x10
    stw r3, 0x5fc(r5)
    lbz r3, 0x5fb(r5)
    or r0, r3, r0
    stb r0, 0x5fb(r5)
    blr
}

asm void fn_806136C0(void)
{
    nofralloc
    lwz r6, __GXData
    slwi r0, r3, 2
    lis r5, jumptable_807B0864@ha
    add r8, r6, r0
    b lbl_fn_806136C0_000009CC
    nop
lbl_fn_806136C0_00000858:
    lwz r6, 0x0(r4)
    lbz r7, 0xc(r4)
    subi r0, r6, 0x9
    lwz r10, 0x8(r4)
    cmplwi r0, 0x10
    lwz r9, 0x4(r4)
    bgt lbl_fn_806136C0_000009C8
    addi r6, r5, jumptable_807B0864@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 0, 31, 31
    rlwimi r0, r10, 1, 28, 30
    rlwimi r0, r7, 4, 23, 27
    stw r0, 0x1c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x1c(r8)
    cmpwi r9, 0x2
    rlwimi r0, r10, 10, 19, 21
    stw r0, 0x1c(r8)
    bne lbl_fn_806136C0_000008C8
    lwz r0, 0x1c(r8)
    ori r0, r0, 0x200
    oris r0, r0, 0x8000
    stw r0, 0x1c(r8)
    b lbl_fn_806136C0_000009C8
lbl_fn_806136C0_000008C8:
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 9, 22, 22
    clrlwi r0, r0, 1
    stw r0, 0x1c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 13, 18, 18
    rlwimi r0, r10, 14, 15, 17
    stw r0, 0x1c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 17, 14, 14
    rlwimi r0, r10, 18, 11, 13
    stw r0, 0x1c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 21, 10, 10
    rlwimi r0, r10, 22, 7, 9
    rlwimi r0, r7, 25, 2, 6
    stw r0, 0x1c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x3c(r8)
    rlwimi r0, r9, 0, 31, 31
    rlwimi r0, r10, 1, 28, 30
    rlwimi r0, r7, 4, 23, 27
    stw r0, 0x3c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x3c(r8)
    rlwimi r0, r9, 9, 22, 22
    rlwimi r0, r10, 10, 19, 21
    rlwimi r0, r7, 13, 14, 18
    stw r0, 0x3c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x3c(r8)
    rlwimi r0, r9, 18, 13, 13
    rlwimi r0, r10, 19, 10, 12
    rlwimi r0, r7, 22, 5, 9
    stw r0, 0x3c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x3c(r8)
    rlwimi r0, r9, 27, 4, 4
    rlwimi r0, r10, 28, 1, 3
    stw r0, 0x3c(r8)
    lwz r0, 0x5c(r8)
    rlwimi r0, r7, 0, 27, 31
    stw r0, 0x5c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x5c(r8)
    rlwimi r0, r9, 5, 26, 26
    rlwimi r0, r10, 6, 23, 25
    rlwimi r0, r7, 9, 18, 22
    stw r0, 0x5c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x5c(r8)
    rlwimi r0, r9, 14, 17, 17
    rlwimi r0, r10, 15, 14, 16
    rlwimi r0, r7, 18, 9, 13
    stw r0, 0x5c(r8)
    b lbl_fn_806136C0_000009C8
    lwz r0, 0x5c(r8)
    rlwimi r0, r9, 23, 8, 8
    rlwimi r0, r10, 24, 5, 7
    rlwimi r0, r7, 27, 0, 4
    stw r0, 0x5c(r8)
lbl_fn_806136C0_000009C8:
    addi r4, r4, 0x10
lbl_fn_806136C0_000009CC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xff
    bne lbl_fn_806136C0_00000858
    lwz r5, __GXData
    clrlwi r0, r3, 24
    li r3, 0x1
    lwz r4, 0x5fc(r5)
    slw r0, r3, r0
    clrlwi r0, r0, 24
    ori r3, r4, 0x10
    stw r3, 0x5fc(r5)
    lbz r3, 0x5fb(r5)
    or r0, r3, r0
    stb r0, 0x5fb(r5)
    blr
}

asm void fn_80613890(void)
{
    nofralloc
    lwz r8, __GXData
    li r9, 0x0
    li r6, 0x8
    lis r5, 0xcc01
    lbz r10, 0x5fb(r8)
    mr r7, r8
lbl_fn_80613890_00000A28:
    clrlwi. r0, r10, 31
    beq lbl_fn_80613890_00000A6C
    stb r6, -0x8000(r5)
    ori r4, r9, 0x70
    ori r3, r9, 0x80
    ori r0, r9, 0x90
    stb r4, -0x8000(r5)
    lwz r4, 0x1c(r7)
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    stb r3, -0x8000(r5)
    lwz r3, 0x3c(r7)
    stw r3, -0x8000(r5)
    stb r6, -0x8000(r5)
    stb r0, -0x8000(r5)
    lwz r0, 0x5c(r7)
    stw r0, -0x8000(r5)
lbl_fn_80613890_00000A6C:
    srwi. r10, r10, 1
    addi r9, r9, 0x1
    addi r7, r7, 0x4
    bne lbl_fn_80613890_00000A28
    lis r3, 0xcc01
    li r0, 0x0
    stb r0, -0x8000(r3)
    stb r0, 0x5fb(r8)
    blr
}

asm void fn_80613910(void)
{
    nofralloc
    cmpwi r3, 0x19
    bne lbl_fn_80613910_00000A9C
    li r3, 0xa
lbl_fn_80613910_00000A9C:
    lis r6, 0xcc01
    subi r8, r3, 0x9
    li r7, 0x8
    stb r7, -0x8000(r6)
    ori r0, r8, 0xa0
    clrlwi r3, r4, 2
    stb r0, -0x8000(r6)
    ori r0, r8, 0xb0
    stw r3, -0x8000(r6)
    stb r7, -0x8000(r6)
    stb r0, -0x8000(r6)
    stw r5, -0x8000(r6)
    blr
}

asm void fn_80613950(void)
{
    nofralloc
    lis r3, 0xcc01
    li r0, 0x48
    stb r0, -0x8000(r3)
    blr
}

asm void fn_80613960(void)
{
    nofralloc
    cmplwi r5, 0x14
    li r10, 0x0
    li r12, 0x0
    li r11, 0x5
    bgt lbl_fn_80613960_00000B88
    lis r9, jumptable_807B08A8@ha
    slwi r0, r5, 2
    addi r9, r9, jumptable_807B08A8@l
    lwzx r9, r9, r0
    mtctr r9
    bctr
    li r11, 0x0
    li r12, 0x1
    b lbl_fn_80613960_00000B88
    li r11, 0x1
    li r12, 0x1
    b lbl_fn_80613960_00000B88
    li r11, 0x3
    li r12, 0x1
    b lbl_fn_80613960_00000B88
    li r11, 0x4
    li r12, 0x1
    b lbl_fn_80613960_00000B88
    li r11, 0x2
    b lbl_fn_80613960_00000B88
    li r11, 0x2
    b lbl_fn_80613960_00000B88
    li r11, 0x5
    b lbl_fn_80613960_00000B88
    li r11, 0x6
    b lbl_fn_80613960_00000B88
    li r11, 0x7
    b lbl_fn_80613960_00000B88
    li r11, 0x8
    b lbl_fn_80613960_00000B88
    li r11, 0x9
    b lbl_fn_80613960_00000B88
    li r11, 0xa
    b lbl_fn_80613960_00000B88
    li r11, 0xb
    b lbl_fn_80613960_00000B88
    li r11, 0xc
lbl_fn_80613960_00000B88:
    subi r9, r4, 0x2
    cmplwi r9, 0x7
    ble lbl_fn_80613960_00000BD4
    cmpwi r4, 0x1
    beq lbl_fn_80613960_00000BB0
    cmpwi r4, 0x0
    beq lbl_fn_80613960_00000BC0
    cmpwi r4, 0xa
    beq lbl_fn_80613960_00000BF8
    b lbl_fn_80613960_00000C24
lbl_fn_80613960_00000BB0:
    li r10, 0x0
    rlwimi r10, r12, 2, 29, 29
    rlwimi r10, r11, 7, 20, 24
    b lbl_fn_80613960_00000C24
lbl_fn_80613960_00000BC0:
    li r0, 0x0
    ori r10, r0, 0x2
    rlwimi r10, r12, 2, 29, 29
    rlwimi r10, r11, 7, 20, 24
    b lbl_fn_80613960_00000C24
lbl_fn_80613960_00000BD4:
    li r4, 0x1
    subi r0, r5, 0xc
    li r10, 0x0
    rlwimi r10, r12, 2, 29, 29
    rlwimi r10, r4, 4, 25, 27
    rlwimi r10, r11, 7, 20, 24
    rlwimi r10, r0, 12, 17, 19
    rlwimi r10, r9, 15, 14, 16
    b lbl_fn_80613960_00000C24
lbl_fn_80613960_00000BF8:
    cmpwi r5, 0x13
    li r10, 0x0
    rlwimi r10, r12, 2, 29, 29
    bne lbl_fn_80613960_00000C14
    li r0, 0x2
    rlwimi r10, r0, 4, 25, 27
    b lbl_fn_80613960_00000C1C
lbl_fn_80613960_00000C14:
    li r0, 0x3
    rlwimi r10, r0, 4, 25, 27
lbl_fn_80613960_00000C1C:
    li r0, 0x2
    rlwimi r10, r0, 7, 20, 24
lbl_fn_80613960_00000C24:
    lwz r9, __GXData
    slwi r4, r3, 2
    subi r0, r8, 0x40
    lis r5, 0x1
    add r8, r9, r4
    li r4, 0x0
    stw r10, 0xc8(r8)
    rlwimi r4, r0, 0, 26, 31
    slw r0, r5, r3
    cmpwi r3, 0x0
    lwz r5, 0x5fc(r9)
    rlwimi r4, r7, 8, 23, 23
    or r0, r5, r0
    stw r0, 0x5fc(r9)
    stw r4, 0xe8(r8)
    beq lbl_fn_80613960_00000C98
    cmpwi r3, 0x1
    beq lbl_fn_80613960_00000CA8
    cmpwi r3, 0x2
    beq lbl_fn_80613960_00000CB8
    cmpwi r3, 0x3
    beq lbl_fn_80613960_00000CC8
    cmpwi r3, 0x4
    beq lbl_fn_80613960_00000CD8
    cmpwi r3, 0x5
    beq lbl_fn_80613960_00000CE8
    cmpwi r3, 0x6
    beq lbl_fn_80613960_00000CF8
    b lbl_fn_80613960_00000D08
lbl_fn_80613960_00000C98:
    lwz r0, 0x80(r9)
    rlwimi r0, r6, 6, 20, 25
    stw r0, 0x80(r9)
    b lbl_fn_80613960_00000D14
lbl_fn_80613960_00000CA8:
    lwz r0, 0x80(r9)
    rlwimi r0, r6, 12, 14, 19
    stw r0, 0x80(r9)
    b lbl_fn_80613960_00000D14
lbl_fn_80613960_00000CB8:
    lwz r0, 0x80(r9)
    rlwimi r0, r6, 18, 8, 13
    stw r0, 0x80(r9)
    b lbl_fn_80613960_00000D14
lbl_fn_80613960_00000CC8:
    lwz r0, 0x80(r9)
    rlwimi r0, r6, 24, 2, 7
    stw r0, 0x80(r9)
    b lbl_fn_80613960_00000D14
lbl_fn_80613960_00000CD8:
    lwz r0, 0x84(r9)
    rlwimi r0, r6, 0, 26, 31
    stw r0, 0x84(r9)
    b lbl_fn_80613960_00000D14
lbl_fn_80613960_00000CE8:
    lwz r0, 0x84(r9)
    rlwimi r0, r6, 6, 20, 25
    stw r0, 0x84(r9)
    b lbl_fn_80613960_00000D14
lbl_fn_80613960_00000CF8:
    lwz r0, 0x84(r9)
    rlwimi r0, r6, 12, 14, 19
    stw r0, 0x84(r9)
    b lbl_fn_80613960_00000D14
lbl_fn_80613960_00000D08:
    lwz r0, 0x84(r9)
    rlwimi r0, r6, 18, 8, 13
    stw r0, 0x84(r9)
lbl_fn_80613960_00000D14:
    lwz r0, 0x5fc(r9)
    oris r0, r0, 0x400
    stw r0, 0x5fc(r9)
    blr
}

asm void fn_80613BB0(void)
{
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x254(r4)
    rlwimi r0, r3, 0, 28, 31
    stw r0, 0x254(r4)
    lwz r0, 0x5fc(r4)
    oris r0, r0, 0x200
    ori r0, r0, 0x4
    stw r0, 0x5fc(r4)
    blr
}
