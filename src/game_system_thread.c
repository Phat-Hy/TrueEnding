#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80069BF4(void);
extern void fn_8006B174(void);
extern void fn_8006B2D8(void);
extern void fn_8006F72C(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D58A4(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_801EDCB8(void);
extern void fn_801F04FC(void);
extern void fn_801F25E0(void);
extern void fn_8067E23C(void);
extern void fn_806825B4(void);
extern void fn_80686A48(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073E57C[];

/* Small data declarations */
extern u32 lbl_8087DAB0;
extern u32 lbl_8087DAB4;
extern u32 lbl_8087DAB8;
extern u32 lbl_8087DABC;
extern u32 lbl_8087DAC0;
extern u32 lbl_8087DAC4;
extern u32 lbl_8087DAC8;
extern u32 lbl_8087DACC;
extern u32 lbl_8087DAE8;
extern u32 lbl_8087DAEC;
extern u32 lbl_8087DB00;
extern u32 lbl_8087DB04;

/* Function declarations */
void fn_801FD530(void);
void fn_801FD534(void);
void fn_801FD5A0(void);
void fn_801FDA20(void);
void fn_801FDE90(void);
void fn_801FDE94(void);
void fn_801FDEE4(void);
void fn_801FE090(void);
void fn_801FE89C(void);
void fn_801FE91C(void);
void fn_801FE99C(void);
void fn_801FEA1C(void);
void fn_801FEA9C(void);
void fn_801FEB1C(void);
void fn_801FEB9C(void);
void fn_801FEC08(void);
void fn_801FEC74(void);
void fn_801FECE0(void);
void fn_801FED24(void);
void fn_801FED70(void);
void fn_801FEDBC(void);
void fn_801FEE08(void);

asm void fn_801FD530(void)
{
    nofralloc
    blr
}

asm void fn_801FD534(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x194
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_801FD534_00000030
    li r3, 0x1
    b lbl_fn_801FD534_0000005C
lbl_fn_801FD534_00000030:
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_801FD534_00000058
    addi r3, r31, 0x1c4
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_801FD534_00000058
    li r3, 0x1
    b lbl_fn_801FD534_0000005C
lbl_fn_801FD534_00000058:
    li r3, 0x0
lbl_fn_801FD534_0000005C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801FD5A0(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stmw r26, 0x2b8(r1)
    mr r29, r3
    mr r30, r5
    addi r3, r1, 0x1b0
    bl strcpy
    addi r3, r1, 0x1b0
    li r4, 0x5c
    bl fn_806825B4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_801FD5A0_000000B8
    addi r3, r1, 0x1b0
    li r4, 0x2f
    bl fn_806825B4
    mr r26, r3
lbl_fn_801FD5A0_000000B8:
    cmpwi r26, 0x0
    beq lbl_fn_801FD5A0_00000484
    addi r3, r1, 0x70
    addi r4, r26, 0x1
    bl strcpy
    li r28, 0x0
    stb r28, 0x1(r26)
    addi r3, r1, 0xb0
    addi r4, r1, 0x1b0
    bl strcpy
    stw r28, 0x64(r1)
    addi r27, r1, 0x64
    addi r3, r1, 0x70
    stw r28, 0x68(r1)
    stw r28, 0x6c(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    addi r6, r1, 0x70
    lbz r0, 0x2c(r1)
    mr r7, r6
    stb r0, 0x28(r1)
    mr r3, r27
    addi r8, r1, 0x28
    add r7, r7, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r27
    addi r3, r1, 0x58
    bl fn_8006B174
    lwz r0, 0x64(r1)
    srwi. r3, r0, 31
    bne lbl_fn_801FD5A0_0000016C
    lwz r4, 0x58(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801FD5A0_0000016C
    lwz r3, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    b lbl_fn_801FD5A0_000001C4
lbl_fn_801FD5A0_0000016C:
    cmpwi r3, 0x0
    beq lbl_fn_801FD5A0_0000017C
    lwz r5, 0x68(r1)
    b lbl_fn_801FD5A0_00000184
lbl_fn_801FD5A0_0000017C:
    lbz r0, 0x64(r1)
    clrlwi r5, r0, 25
lbl_fn_801FD5A0_00000184:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FD5A0_000001A0
    lbz r0, 0x58(r1)
    addi r6, r1, 0x59
    clrlwi r4, r0, 25
    b lbl_fn_801FD5A0_000001A8
lbl_fn_801FD5A0_000001A0:
    lwz r6, 0x60(r1)
    lwz r4, 0x5c(r1)
lbl_fn_801FD5A0_000001A8:
    lbz r0, 0x24(r1)
    add r7, r6, r4
    stb r0, 0x20(r1)
    addi r3, r1, 0x64
    addi r8, r1, 0x20
    li r4, 0x0
    bl fn_80013F78
lbl_fn_801FD5A0_000001C4:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FD5A0_000001D8
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_801FD5A0_000001D8:
    addi r3, r1, 0x4c
    addi r4, r1, 0x64
    bl fn_8006B2D8
    lwz r0, 0x64(r1)
    srwi. r3, r0, 31
    bne lbl_fn_801FD5A0_00000214
    lwz r4, 0x4c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801FD5A0_00000214
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    b lbl_fn_801FD5A0_0000026C
lbl_fn_801FD5A0_00000214:
    cmpwi r3, 0x0
    beq lbl_fn_801FD5A0_00000224
    lwz r5, 0x68(r1)
    b lbl_fn_801FD5A0_0000022C
lbl_fn_801FD5A0_00000224:
    lbz r0, 0x64(r1)
    clrlwi r5, r0, 25
lbl_fn_801FD5A0_0000022C:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FD5A0_00000248
    lbz r0, 0x4c(r1)
    addi r6, r1, 0x4d
    clrlwi r4, r0, 25
    b lbl_fn_801FD5A0_00000250
lbl_fn_801FD5A0_00000248:
    lwz r6, 0x54(r1)
    lwz r4, 0x50(r1)
lbl_fn_801FD5A0_00000250:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r1, 0x64
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_801FD5A0_0000026C:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FD5A0_00000280
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_801FD5A0_00000280:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FD5A0_00000298
    lbz r0, 0x64(r1)
    clrlwi r31, r0, 25
    b lbl_fn_801FD5A0_0000029C
lbl_fn_801FD5A0_00000298:
    lwz r31, 0x68(r1)
lbl_fn_801FD5A0_0000029C:
    srawi r3, r31, 31
    li r0, 0x3
    subfc r0, r0, r31
    li r27, 0x0
    adde. r28, r3, r27
    beq lbl_fn_801FD5A0_00000398
    mr r6, r31
    addi r3, r1, 0x40
    addi r4, r1, 0x64
    subi r5, r31, 0x3
    bl fn_80069BF4
    lis r3, lbl_8073E57C@ha
    li r27, 0x1
    addi r3, r3, lbl_8073E57C@l
    addi r26, r3, 0x15
    mr r3, r26
    bl strlen
    lwz r0, 0x40(r1)
    mr r28, r3
    stw r3, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FD5A0_00000300
    lbz r0, 0x40(r1)
    clrlwi r4, r0, 25
    b lbl_fn_801FD5A0_00000304
lbl_fn_801FD5A0_00000300:
    lwz r4, 0x44(r1)
lbl_fn_801FD5A0_00000304:
    lwz r0, 0x40(r1)
    stw r4, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FD5A0_00000324
    lbz r0, 0x40(r1)
    addi r3, r1, 0x41
    clrlwi r0, r0, 25
    b lbl_fn_801FD5A0_0000032C
lbl_fn_801FD5A0_00000324:
    lwz r3, 0x48(r1)
    lwz r0, 0x44(r1)
lbl_fn_801FD5A0_0000032C:
    cmplw r4, r0
    stw r0, 0x34(r1)
    addi r4, r1, 0x34
    bge lbl_fn_801FD5A0_00000340
    addi r4, r1, 0x3c
lbl_fn_801FD5A0_00000340:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x30(r1)
    addi r5, r1, 0x30
    cmplw r28, r0
    bge lbl_fn_801FD5A0_0000035C
    addi r5, r1, 0x38
lbl_fn_801FD5A0_0000035C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_801FD5A0_00000390
    lwz r0, 0x30(r1)
    cmplw r0, r28
    bge lbl_fn_801FD5A0_00000380
    li r3, -0x1
    b lbl_fn_801FD5A0_00000390
lbl_fn_801FD5A0_00000380:
    bne lbl_fn_801FD5A0_0000038C
    li r3, 0x0
    b lbl_fn_801FD5A0_00000390
lbl_fn_801FD5A0_0000038C:
    li r3, 0x1
lbl_fn_801FD5A0_00000390:
    cntlzw r0, r3
    srwi r28, r0, 5
lbl_fn_801FD5A0_00000398:
    cmpwi r27, 0x0
    beq lbl_fn_801FD5A0_000003B4
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FD5A0_000003B4
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_801FD5A0_000003B4:
    cmpwi r28, 0x0
    beq lbl_fn_801FD5A0_000003F8
    lis r3, lbl_8073E57C@ha
    lbz r0, 0x14(r1)
    addi r3, r3, lbl_8073E57C@l
    stb r0, 0x10(r1)
    addi r26, r3, 0x19
    mr r3, r26
    bl strlen
    mr r0, r3
    mr r6, r26
    addi r3, r1, 0x64
    subi r4, r31, 0x3
    subi r5, r31, 0x1
    add r7, r26, r0
    addi r8, r1, 0x10
    bl fn_80013F78
lbl_fn_801FD5A0_000003F8:
    lwz r0, 0x64(r1)
    lis r3, lbl_8073E57C@ha
    addi r3, r3, lbl_8073E57C@l
    srwi. r0, r0, 31
    addi r26, r3, 0x1d
    bne lbl_fn_801FD5A0_0000041C
    lbz r0, 0x64(r1)
    clrlwi r27, r0, 25
    b lbl_fn_801FD5A0_00000420
lbl_fn_801FD5A0_0000041C:
    lwz r27, 0x68(r1)
lbl_fn_801FD5A0_00000420:
    lbz r0, 0xc(r1)
    mr r3, r26
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r4, r27
    mr r6, r26
    addi r3, r1, 0x64
    add r7, r26, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x64(r1)
    addi r3, r1, 0x70
    srwi. r0, r0, 31
    bne lbl_fn_801FD5A0_00000468
    addi r4, r1, 0x65
    b lbl_fn_801FD5A0_0000046C
lbl_fn_801FD5A0_00000468:
    lwz r4, 0x6c(r1)
lbl_fn_801FD5A0_0000046C:
    bl strcpy
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FD5A0_00000484
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_801FD5A0_00000484:
    cmpwi r30, 0x0
    bne lbl_fn_801FD5A0_00000494
    li r3, 0x1
    b lbl_fn_801FD5A0_000004DC
lbl_fn_801FD5A0_00000494:
    addi r3, r29, 0x194
    bl fn_800D58A4
    lbz r0, 0x70(r1)
    extsb. r0, r0
    bne lbl_fn_801FD5A0_000004C0
    lis r4, lbl_8073E57C@ha
    addi r3, r29, 0x194
    addi r4, r4, lbl_8073E57C@l
    addi r4, r4, 0x26
    bl fn_800D5908
    b lbl_fn_801FD5A0_000004CC
lbl_fn_801FD5A0_000004C0:
    addi r3, r29, 0x194
    addi r4, r1, 0x70
    bl fn_800D5908
lbl_fn_801FD5A0_000004CC:
    li r0, 0x1
    stb r0, 0x1c1(r29)
    li r3, 0x1
    stb r0, 0x1c2(r29)
lbl_fn_801FD5A0_000004DC:
    lmw r26, 0x2b8(r1)
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_801FDA20(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    lbz r0, 0x0(r4)
    stmw r26, 0x2b8(r1)
    mr r29, r3
    extsb. r0, r0
    mr r30, r5
    bne lbl_fn_801FDA20_0000051C
    li r3, 0x0
    b lbl_fn_801FDA20_0000094C
lbl_fn_801FDA20_0000051C:
    addi r3, r1, 0x1b0
    bl strcpy
    addi r3, r1, 0x1b0
    li r4, 0x5c
    bl fn_806825B4
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_801FDA20_0000054C
    addi r3, r1, 0x1b0
    li r4, 0x2f
    bl fn_806825B4
    mr r26, r3
lbl_fn_801FDA20_0000054C:
    cmpwi r26, 0x0
    beq lbl_fn_801FDA20_00000918
    addi r3, r1, 0x70
    addi r4, r26, 0x1
    bl strcpy
    li r28, 0x0
    stb r28, 0x1(r26)
    addi r3, r1, 0xb0
    addi r4, r1, 0x1b0
    bl strcpy
    stw r28, 0x64(r1)
    addi r27, r1, 0x64
    addi r3, r1, 0x70
    stw r28, 0x68(r1)
    stw r28, 0x6c(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    addi r6, r1, 0x70
    lbz r0, 0x2c(r1)
    mr r7, r6
    stb r0, 0x28(r1)
    mr r3, r27
    addi r8, r1, 0x28
    add r7, r7, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r27
    addi r3, r1, 0x58
    bl fn_8006B174
    lwz r0, 0x64(r1)
    srwi. r3, r0, 31
    bne lbl_fn_801FDA20_00000600
    lwz r4, 0x58(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801FDA20_00000600
    lwz r3, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    b lbl_fn_801FDA20_00000658
lbl_fn_801FDA20_00000600:
    cmpwi r3, 0x0
    beq lbl_fn_801FDA20_00000610
    lwz r5, 0x68(r1)
    b lbl_fn_801FDA20_00000618
lbl_fn_801FDA20_00000610:
    lbz r0, 0x64(r1)
    clrlwi r5, r0, 25
lbl_fn_801FDA20_00000618:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FDA20_00000634
    lbz r0, 0x58(r1)
    addi r6, r1, 0x59
    clrlwi r4, r0, 25
    b lbl_fn_801FDA20_0000063C
lbl_fn_801FDA20_00000634:
    lwz r6, 0x60(r1)
    lwz r4, 0x5c(r1)
lbl_fn_801FDA20_0000063C:
    lbz r0, 0x24(r1)
    add r7, r6, r4
    stb r0, 0x20(r1)
    addi r3, r1, 0x64
    addi r8, r1, 0x20
    li r4, 0x0
    bl fn_80013F78
lbl_fn_801FDA20_00000658:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FDA20_0000066C
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_801FDA20_0000066C:
    addi r3, r1, 0x4c
    addi r4, r1, 0x64
    bl fn_8006B2D8
    lwz r0, 0x64(r1)
    srwi. r3, r0, 31
    bne lbl_fn_801FDA20_000006A8
    lwz r4, 0x4c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801FDA20_000006A8
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    b lbl_fn_801FDA20_00000700
lbl_fn_801FDA20_000006A8:
    cmpwi r3, 0x0
    beq lbl_fn_801FDA20_000006B8
    lwz r5, 0x68(r1)
    b lbl_fn_801FDA20_000006C0
lbl_fn_801FDA20_000006B8:
    lbz r0, 0x64(r1)
    clrlwi r5, r0, 25
lbl_fn_801FDA20_000006C0:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FDA20_000006DC
    lbz r0, 0x4c(r1)
    addi r6, r1, 0x4d
    clrlwi r4, r0, 25
    b lbl_fn_801FDA20_000006E4
lbl_fn_801FDA20_000006DC:
    lwz r6, 0x54(r1)
    lwz r4, 0x50(r1)
lbl_fn_801FDA20_000006E4:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r1, 0x64
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_801FDA20_00000700:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FDA20_00000714
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_801FDA20_00000714:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FDA20_0000072C
    lbz r0, 0x64(r1)
    clrlwi r31, r0, 25
    b lbl_fn_801FDA20_00000730
lbl_fn_801FDA20_0000072C:
    lwz r31, 0x68(r1)
lbl_fn_801FDA20_00000730:
    srawi r3, r31, 31
    li r0, 0x3
    subfc r0, r0, r31
    li r27, 0x0
    adde. r28, r3, r27
    beq lbl_fn_801FDA20_0000082C
    mr r6, r31
    addi r3, r1, 0x40
    addi r4, r1, 0x64
    subi r5, r31, 0x3
    bl fn_80069BF4
    lis r3, lbl_8073E57C@ha
    li r27, 0x1
    addi r3, r3, lbl_8073E57C@l
    addi r26, r3, 0x15
    mr r3, r26
    bl strlen
    lwz r0, 0x40(r1)
    mr r28, r3
    stw r3, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FDA20_00000794
    lbz r0, 0x40(r1)
    clrlwi r4, r0, 25
    b lbl_fn_801FDA20_00000798
lbl_fn_801FDA20_00000794:
    lwz r4, 0x44(r1)
lbl_fn_801FDA20_00000798:
    lwz r0, 0x40(r1)
    stw r4, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801FDA20_000007B8
    lbz r0, 0x40(r1)
    addi r3, r1, 0x41
    clrlwi r0, r0, 25
    b lbl_fn_801FDA20_000007C0
lbl_fn_801FDA20_000007B8:
    lwz r3, 0x48(r1)
    lwz r0, 0x44(r1)
lbl_fn_801FDA20_000007C0:
    cmplw r4, r0
    stw r0, 0x34(r1)
    addi r4, r1, 0x34
    bge lbl_fn_801FDA20_000007D4
    addi r4, r1, 0x3c
lbl_fn_801FDA20_000007D4:
    lwz r0, 0x0(r4)
    mr r4, r26
    stw r0, 0x30(r1)
    addi r5, r1, 0x30
    cmplw r28, r0
    bge lbl_fn_801FDA20_000007F0
    addi r5, r1, 0x38
lbl_fn_801FDA20_000007F0:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_801FDA20_00000824
    lwz r0, 0x30(r1)
    cmplw r0, r28
    bge lbl_fn_801FDA20_00000814
    li r3, -0x1
    b lbl_fn_801FDA20_00000824
lbl_fn_801FDA20_00000814:
    bne lbl_fn_801FDA20_00000820
    li r3, 0x0
    b lbl_fn_801FDA20_00000824
lbl_fn_801FDA20_00000820:
    li r3, 0x1
lbl_fn_801FDA20_00000824:
    cntlzw r0, r3
    srwi r28, r0, 5
lbl_fn_801FDA20_0000082C:
    cmpwi r27, 0x0
    beq lbl_fn_801FDA20_00000848
    lwz r0, 0x40(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FDA20_00000848
    lwz r3, 0x48(r1)
    bl dtor_80084684
lbl_fn_801FDA20_00000848:
    cmpwi r28, 0x0
    beq lbl_fn_801FDA20_0000088C
    lis r3, lbl_8073E57C@ha
    lbz r0, 0x14(r1)
    addi r3, r3, lbl_8073E57C@l
    stb r0, 0x10(r1)
    addi r26, r3, 0x19
    mr r3, r26
    bl strlen
    mr r0, r3
    mr r6, r26
    addi r3, r1, 0x64
    subi r4, r31, 0x3
    subi r5, r31, 0x1
    add r7, r26, r0
    addi r8, r1, 0x10
    bl fn_80013F78
lbl_fn_801FDA20_0000088C:
    lwz r0, 0x64(r1)
    lis r3, lbl_8073E57C@ha
    addi r3, r3, lbl_8073E57C@l
    srwi. r0, r0, 31
    addi r26, r3, 0x1d
    bne lbl_fn_801FDA20_000008B0
    lbz r0, 0x64(r1)
    clrlwi r27, r0, 25
    b lbl_fn_801FDA20_000008B4
lbl_fn_801FDA20_000008B0:
    lwz r27, 0x68(r1)
lbl_fn_801FDA20_000008B4:
    lbz r0, 0xc(r1)
    mr r3, r26
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r4, r27
    mr r6, r26
    addi r3, r1, 0x64
    add r7, r26, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x64(r1)
    addi r3, r1, 0x70
    srwi. r0, r0, 31
    bne lbl_fn_801FDA20_000008FC
    addi r4, r1, 0x65
    b lbl_fn_801FDA20_00000900
lbl_fn_801FDA20_000008FC:
    lwz r4, 0x6c(r1)
lbl_fn_801FDA20_00000900:
    bl strcpy
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FDA20_00000918
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_801FDA20_00000918:
    cmpwi r30, 0x0
    bne lbl_fn_801FDA20_00000928
    li r3, 0x1
    b lbl_fn_801FDA20_0000094C
lbl_fn_801FDA20_00000928:
    addi r3, r29, 0x1c4
    bl fn_800D58A4
    addi r3, r29, 0x1c4
    addi r4, r1, 0x70
    bl fn_800D5908
    li r0, 0x1
    stb r0, 0x1f1(r29)
    li r3, 0x1
    stb r0, 0x1f2(r29)
lbl_fn_801FDA20_0000094C:
    lmw r26, 0x2b8(r1)
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_801FDE90(void)
{
    nofralloc
    b fn_801EDCB8
}

asm void fn_801FDE94(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    blr
}

asm void fn_801FDEE4(void)
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
    beq lbl_fn_801FDEE4_00000B40
    lwz r0, 0x8(r3)
    li r31, 0x0
    stw r31, 0x0(r3)
    cmpwi r0, 0x0
    stw r31, 0x4(r3)
    beq lbl_fn_801FDEE4_00000A00
    mr r3, r0
    bl fn_80084C24
    stw r31, 0x8(r29)
lbl_fn_801FDEE4_00000A00:
    lwz r3, 0x14(r29)
    li r31, 0x0
    stw r31, 0xc(r29)
    cmpwi r3, 0x0
    stw r31, 0x10(r29)
    beq lbl_fn_801FDEE4_00000A20
    bl fn_80084C24
    stw r31, 0x14(r29)
lbl_fn_801FDEE4_00000A20:
    lwz r3, 0x20(r29)
    li r31, 0x0
    stw r31, 0x18(r29)
    cmpwi r3, 0x0
    stw r31, 0x1c(r29)
    beq lbl_fn_801FDEE4_00000A40
    bl fn_80084C24
    stw r31, 0x20(r29)
lbl_fn_801FDEE4_00000A40:
    lwz r3, 0x2c(r29)
    li r31, 0x0
    stw r31, 0x24(r29)
    cmpwi r3, 0x0
    stw r31, 0x28(r29)
    beq lbl_fn_801FDEE4_00000A60
    bl fn_80084C24
    stw r31, 0x2c(r29)
lbl_fn_801FDEE4_00000A60:
    lwz r3, 0x38(r29)
    li r31, 0x0
    stw r31, 0x30(r29)
    cmpwi r3, 0x0
    stw r31, 0x34(r29)
    beq lbl_fn_801FDEE4_00000A80
    bl fn_80084C24
    stw r31, 0x38(r29)
lbl_fn_801FDEE4_00000A80:
    lwz r3, 0x44(r29)
    li r31, 0x0
    stw r31, 0x3c(r29)
    cmpwi r3, 0x0
    stw r31, 0x40(r29)
    beq lbl_fn_801FDEE4_00000AA0
    bl fn_80084C24
    stw r31, 0x44(r29)
lbl_fn_801FDEE4_00000AA0:
    addic. r0, r29, 0x3c
    beq lbl_fn_801FDEE4_00000AB8
    lwz r3, 0x44(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801FDEE4_00000AB8
    bl fn_80084C24
lbl_fn_801FDEE4_00000AB8:
    addic. r0, r29, 0x30
    beq lbl_fn_801FDEE4_00000AD0
    lwz r3, 0x38(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801FDEE4_00000AD0
    bl fn_80084C24
lbl_fn_801FDEE4_00000AD0:
    addic. r0, r29, 0x24
    beq lbl_fn_801FDEE4_00000AE8
    lwz r3, 0x2c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801FDEE4_00000AE8
    bl fn_80084C24
lbl_fn_801FDEE4_00000AE8:
    addic. r0, r29, 0x18
    beq lbl_fn_801FDEE4_00000B00
    lwz r3, 0x20(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801FDEE4_00000B00
    bl fn_80084C24
lbl_fn_801FDEE4_00000B00:
    addic. r0, r29, 0xc
    beq lbl_fn_801FDEE4_00000B18
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801FDEE4_00000B18
    bl fn_80084C24
lbl_fn_801FDEE4_00000B18:
    cmpwi r29, 0x0
    beq lbl_fn_801FDEE4_00000B30
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801FDEE4_00000B30
    bl fn_80084C24
lbl_fn_801FDEE4_00000B30:
    cmpwi r30, 0x0
    ble lbl_fn_801FDEE4_00000B40
    mr r3, r29
    bl dtor_80084684
lbl_fn_801FDEE4_00000B40:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801FE090(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r29, 0x0(r4)
    lwz r0, 0x4(r3)
    cmplw r0, r29
    bgt lbl_fn_801FE090_00000CD0
    slwi r3, r29, 2
    li r4, 0x8
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801FE090_00000CC8
    lwz r0, 0x0(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_801FE090_00000BD0
    mr r4, r0
lbl_fn_801FE090_00000BD0:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801FE090_00000CC0
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801FE090_00000C90
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801FE090_00000C90
lbl_fn_801FE090_00000C04:
    lwz r8, 0x8(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801FE090_00000C04
lbl_fn_801FE090_00000C90:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801FE090_00000CC0
lbl_fn_801FE090_00000CA8:
    lwz r3, 0x8(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801FE090_00000CA8
lbl_fn_801FE090_00000CC0:
    lwz r3, 0x8(r30)
    bl fn_80084C24
lbl_fn_801FE090_00000CC8:
    stw r28, 0x8(r30)
    stw r29, 0x4(r30)
lbl_fn_801FE090_00000CD0:
    lwz r28, 0x4(r31)
    lwz r0, 0x10(r30)
    cmplw r0, r28
    bgt lbl_fn_801FE090_00000E1C
    slwi r3, r28, 2
    li r4, 0x8
    la r5, lbl_8087DABC
    la r6, lbl_8087DAB8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x14(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801FE090_00000E14
    lwz r0, 0xc(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801FE090_00000D1C
    mr r4, r0
lbl_fn_801FE090_00000D1C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801FE090_00000E0C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801FE090_00000DDC
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801FE090_00000DDC
lbl_fn_801FE090_00000D50:
    lwz r8, 0x14(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x14(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801FE090_00000D50
lbl_fn_801FE090_00000DDC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801FE090_00000E0C
lbl_fn_801FE090_00000DF4:
    lwz r3, 0x14(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801FE090_00000DF4
lbl_fn_801FE090_00000E0C:
    lwz r3, 0x14(r30)
    bl fn_80084C24
lbl_fn_801FE090_00000E14:
    stw r29, 0x14(r30)
    stw r28, 0x10(r30)
lbl_fn_801FE090_00000E1C:
    lwz r28, 0x8(r31)
    lwz r0, 0x1c(r30)
    cmplw r0, r28
    bgt lbl_fn_801FE090_00000F68
    slwi r3, r28, 2
    li r4, 0x8
    la r5, lbl_8087DB04
    la r6, lbl_8087DB00
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x20(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801FE090_00000F60
    lwz r0, 0x18(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801FE090_00000E68
    mr r4, r0
lbl_fn_801FE090_00000E68:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801FE090_00000F58
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801FE090_00000F28
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801FE090_00000F28
lbl_fn_801FE090_00000E9C:
    lwz r8, 0x20(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x20(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x20(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x20(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x20(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x20(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x20(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x20(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801FE090_00000E9C
lbl_fn_801FE090_00000F28:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801FE090_00000F58
lbl_fn_801FE090_00000F40:
    lwz r3, 0x20(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801FE090_00000F40
lbl_fn_801FE090_00000F58:
    lwz r3, 0x20(r30)
    bl fn_80084C24
lbl_fn_801FE090_00000F60:
    stw r29, 0x20(r30)
    stw r28, 0x1c(r30)
lbl_fn_801FE090_00000F68:
    lwz r28, 0xc(r31)
    lwz r0, 0x28(r30)
    cmplw r0, r28
    bgt lbl_fn_801FE090_000010B4
    slwi r3, r28, 2
    li r4, 0x8
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x2c(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801FE090_000010AC
    lwz r0, 0x24(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801FE090_00000FB4
    mr r4, r0
lbl_fn_801FE090_00000FB4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801FE090_000010A4
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801FE090_00001074
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801FE090_00001074
lbl_fn_801FE090_00000FE8:
    lwz r8, 0x2c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x2c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x2c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x2c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x2c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x2c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x2c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x2c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801FE090_00000FE8
lbl_fn_801FE090_00001074:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801FE090_000010A4
lbl_fn_801FE090_0000108C:
    lwz r3, 0x2c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801FE090_0000108C
lbl_fn_801FE090_000010A4:
    lwz r3, 0x2c(r30)
    bl fn_80084C24
lbl_fn_801FE090_000010AC:
    stw r29, 0x2c(r30)
    stw r28, 0x28(r30)
lbl_fn_801FE090_000010B4:
    lwz r28, 0x10(r31)
    lwz r0, 0x34(r30)
    cmplw r0, r28
    bgt lbl_fn_801FE090_00001200
    slwi r3, r28, 2
    li r4, 0x8
    la r5, lbl_8087DAEC
    la r6, lbl_8087DAE8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x38(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801FE090_000011F8
    lwz r0, 0x30(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801FE090_00001100
    mr r4, r0
lbl_fn_801FE090_00001100:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801FE090_000011F0
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801FE090_000011C0
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801FE090_000011C0
lbl_fn_801FE090_00001134:
    lwz r8, 0x38(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x38(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x38(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x38(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x38(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x38(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x38(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x38(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801FE090_00001134
lbl_fn_801FE090_000011C0:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801FE090_000011F0
lbl_fn_801FE090_000011D8:
    lwz r3, 0x38(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801FE090_000011D8
lbl_fn_801FE090_000011F0:
    lwz r3, 0x38(r30)
    bl fn_80084C24
lbl_fn_801FE090_000011F8:
    stw r29, 0x38(r30)
    stw r28, 0x34(r30)
lbl_fn_801FE090_00001200:
    lwz r28, 0x14(r31)
    lwz r0, 0x40(r30)
    cmplw r0, r28
    bgt lbl_fn_801FE090_0000134C
    slwi r3, r28, 2
    li r4, 0x8
    la r5, lbl_8087DACC
    la r6, lbl_8087DAC8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x44(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801FE090_00001344
    lwz r0, 0x3c(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801FE090_0000124C
    mr r4, r0
lbl_fn_801FE090_0000124C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801FE090_0000133C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801FE090_0000130C
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801FE090_0000130C
lbl_fn_801FE090_00001280:
    lwz r8, 0x44(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x44(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x44(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x44(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x44(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x44(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x44(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x44(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801FE090_00001280
lbl_fn_801FE090_0000130C:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801FE090_0000133C
lbl_fn_801FE090_00001324:
    lwz r3, 0x44(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801FE090_00001324
lbl_fn_801FE090_0000133C:
    lwz r3, 0x44(r30)
    bl fn_80084C24
lbl_fn_801FE090_00001344:
    stw r29, 0x44(r30)
    stw r28, 0x40(r30)
lbl_fn_801FE090_0000134C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801FE89C(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    lwz r5, 0x8(r3)
    slwi r0, r0, 2
    mr r7, r5
    add r6, r5, r0
    b lbl_fn_801FE89C_000013E0
lbl_fn_801FE89C_00001384:
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_801FE89C_000013DC
    cmplw r7, r6
    beqlr
    subf r0, r5, r7
    srawi r0, r0, 2
    addze r5, r0
    slwi r6, r5, 2
    b lbl_fn_801FE89C_000013C4
lbl_fn_801FE89C_000013AC:
    lwz r0, 0x8(r3)
    addi r5, r5, 0x1
    add r4, r0, r6
    addi r6, r6, 0x4
    lwz r0, 0x4(r4)
    stw r0, 0x0(r4)
lbl_fn_801FE89C_000013C4:
    lwz r4, 0x0(r3)
    subi r0, r4, 0x1
    cmplw r5, r0
    blt lbl_fn_801FE89C_000013AC
    stw r0, 0x0(r3)
    blr
lbl_fn_801FE89C_000013DC:
    addi r7, r7, 0x4
lbl_fn_801FE89C_000013E0:
    cmplw r7, r6
    bne lbl_fn_801FE89C_00001384
    blr
}

asm void fn_801FE91C(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    lwz r5, 0x14(r3)
    slwi r0, r0, 2
    mr r7, r5
    add r6, r5, r0
    b lbl_fn_801FE91C_00001460
lbl_fn_801FE91C_00001404:
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_801FE91C_0000145C
    cmplw r7, r6
    beqlr
    subf r0, r5, r7
    srawi r0, r0, 2
    addze r5, r0
    slwi r6, r5, 2
    b lbl_fn_801FE91C_00001444
lbl_fn_801FE91C_0000142C:
    lwz r0, 0x14(r3)
    addi r5, r5, 0x1
    add r4, r0, r6
    addi r6, r6, 0x4
    lwz r0, 0x4(r4)
    stw r0, 0x0(r4)
lbl_fn_801FE91C_00001444:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplw r5, r0
    blt lbl_fn_801FE91C_0000142C
    stw r0, 0xc(r3)
    blr
lbl_fn_801FE91C_0000145C:
    addi r7, r7, 0x4
lbl_fn_801FE91C_00001460:
    cmplw r7, r6
    bne lbl_fn_801FE91C_00001404
    blr
}

asm void fn_801FE99C(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    lwz r5, 0x20(r3)
    slwi r0, r0, 2
    mr r7, r5
    add r6, r5, r0
    b lbl_fn_801FE99C_000014E0
lbl_fn_801FE99C_00001484:
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_801FE99C_000014DC
    cmplw r7, r6
    beqlr
    subf r0, r5, r7
    srawi r0, r0, 2
    addze r5, r0
    slwi r6, r5, 2
    b lbl_fn_801FE99C_000014C4
lbl_fn_801FE99C_000014AC:
    lwz r0, 0x20(r3)
    addi r5, r5, 0x1
    add r4, r0, r6
    addi r6, r6, 0x4
    lwz r0, 0x4(r4)
    stw r0, 0x0(r4)
lbl_fn_801FE99C_000014C4:
    lwz r4, 0x18(r3)
    subi r0, r4, 0x1
    cmplw r5, r0
    blt lbl_fn_801FE99C_000014AC
    stw r0, 0x18(r3)
    blr
lbl_fn_801FE99C_000014DC:
    addi r7, r7, 0x4
lbl_fn_801FE99C_000014E0:
    cmplw r7, r6
    bne lbl_fn_801FE99C_00001484
    blr
}

asm void fn_801FEA1C(void)
{
    nofralloc
    lwz r0, 0x24(r3)
    lwz r5, 0x2c(r3)
    slwi r0, r0, 2
    mr r7, r5
    add r6, r5, r0
    b lbl_fn_801FEA1C_00001560
lbl_fn_801FEA1C_00001504:
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_801FEA1C_0000155C
    cmplw r7, r6
    beqlr
    subf r0, r5, r7
    srawi r0, r0, 2
    addze r5, r0
    slwi r6, r5, 2
    b lbl_fn_801FEA1C_00001544
lbl_fn_801FEA1C_0000152C:
    lwz r0, 0x2c(r3)
    addi r5, r5, 0x1
    add r4, r0, r6
    addi r6, r6, 0x4
    lwz r0, 0x4(r4)
    stw r0, 0x0(r4)
lbl_fn_801FEA1C_00001544:
    lwz r4, 0x24(r3)
    subi r0, r4, 0x1
    cmplw r5, r0
    blt lbl_fn_801FEA1C_0000152C
    stw r0, 0x24(r3)
    blr
lbl_fn_801FEA1C_0000155C:
    addi r7, r7, 0x4
lbl_fn_801FEA1C_00001560:
    cmplw r7, r6
    bne lbl_fn_801FEA1C_00001504
    blr
}

asm void fn_801FEA9C(void)
{
    nofralloc
    lwz r0, 0x30(r3)
    lwz r5, 0x38(r3)
    slwi r0, r0, 2
    mr r7, r5
    add r6, r5, r0
    b lbl_fn_801FEA9C_000015E0
lbl_fn_801FEA9C_00001584:
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_801FEA9C_000015DC
    cmplw r7, r6
    beqlr
    subf r0, r5, r7
    srawi r0, r0, 2
    addze r5, r0
    slwi r6, r5, 2
    b lbl_fn_801FEA9C_000015C4
lbl_fn_801FEA9C_000015AC:
    lwz r0, 0x38(r3)
    addi r5, r5, 0x1
    add r4, r0, r6
    addi r6, r6, 0x4
    lwz r0, 0x4(r4)
    stw r0, 0x0(r4)
lbl_fn_801FEA9C_000015C4:
    lwz r4, 0x30(r3)
    subi r0, r4, 0x1
    cmplw r5, r0
    blt lbl_fn_801FEA9C_000015AC
    stw r0, 0x30(r3)
    blr
lbl_fn_801FEA9C_000015DC:
    addi r7, r7, 0x4
lbl_fn_801FEA9C_000015E0:
    cmplw r7, r6
    bne lbl_fn_801FEA9C_00001584
    blr
}

asm void fn_801FEB1C(void)
{
    nofralloc
    lwz r0, 0x3c(r3)
    lwz r5, 0x44(r3)
    slwi r0, r0, 2
    mr r7, r5
    add r6, r5, r0
    b lbl_fn_801FEB1C_00001660
lbl_fn_801FEB1C_00001604:
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_801FEB1C_0000165C
    cmplw r7, r6
    beqlr
    subf r0, r5, r7
    srawi r0, r0, 2
    addze r5, r0
    slwi r6, r5, 2
    b lbl_fn_801FEB1C_00001644
lbl_fn_801FEB1C_0000162C:
    lwz r0, 0x44(r3)
    addi r5, r5, 0x1
    add r4, r0, r6
    addi r6, r6, 0x4
    lwz r0, 0x4(r4)
    stw r0, 0x0(r4)
lbl_fn_801FEB1C_00001644:
    lwz r4, 0x3c(r3)
    subi r0, r4, 0x1
    cmplw r5, r0
    blt lbl_fn_801FEB1C_0000162C
    stw r0, 0x3c(r3)
    blr
lbl_fn_801FEB1C_0000165C:
    addi r7, r7, 0x4
lbl_fn_801FEB1C_00001660:
    cmplw r7, r6
    bne lbl_fn_801FEB1C_00001604
    blr
}

asm void fn_801FEB9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r0, 0x0(r31)
    lwz r6, 0x8(r31)
    slwi r0, r0, 2
    add r4, r6, r0
    b lbl_fn_801FEB9C_000016B8
lbl_fn_801FEB9C_0000169C:
    lwz r5, 0x0(r6)
    lwz r0, 0x0(r5)
    cmplw r3, r0
    bne lbl_fn_801FEB9C_000016B4
    mr r3, r5
    b lbl_fn_801FEB9C_000016C4
lbl_fn_801FEB9C_000016B4:
    addi r6, r6, 0x4
lbl_fn_801FEB9C_000016B8:
    cmplw r6, r4
    bne lbl_fn_801FEB9C_0000169C
    li r3, 0x0
lbl_fn_801FEB9C_000016C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801FEC08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r0, 0xc(r31)
    lwz r6, 0x14(r31)
    slwi r0, r0, 2
    add r4, r6, r0
    b lbl_fn_801FEC08_00001724
lbl_fn_801FEC08_00001708:
    lwz r5, 0x0(r6)
    lwz r0, 0x0(r5)
    cmplw r3, r0
    bne lbl_fn_801FEC08_00001720
    mr r3, r5
    b lbl_fn_801FEC08_00001730
lbl_fn_801FEC08_00001720:
    addi r6, r6, 0x4
lbl_fn_801FEC08_00001724:
    cmplw r6, r4
    bne lbl_fn_801FEC08_00001708
    li r3, 0x0
lbl_fn_801FEC08_00001730:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801FEC74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r0, 0x30(r31)
    lwz r6, 0x38(r31)
    slwi r0, r0, 2
    add r4, r6, r0
    b lbl_fn_801FEC74_00001790
lbl_fn_801FEC74_00001774:
    lwz r5, 0x0(r6)
    lwz r0, 0x0(r5)
    cmplw r3, r0
    bne lbl_fn_801FEC74_0000178C
    mr r3, r5
    b lbl_fn_801FEC74_0000179C
lbl_fn_801FEC74_0000178C:
    addi r6, r6, 0x4
lbl_fn_801FEC74_00001790:
    cmplw r6, r4
    bne lbl_fn_801FEC74_00001774
    li r3, 0x0
lbl_fn_801FEC74_0000179C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801FECE0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    lwz r6, 0x8(r3)
    slwi r0, r0, 2
    add r3, r6, r0
    b lbl_fn_801FECE0_000017E8
lbl_fn_801FECE0_000017C4:
    lwz r5, 0x0(r6)
    lwz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_fn_801FECE0_000017E4
    addi r3, r5, 0x4
    li r4, 0x0
    li r5, 0x1
    b fn_801F04FC
lbl_fn_801FECE0_000017E4:
    addi r6, r6, 0x4
lbl_fn_801FECE0_000017E8:
    cmplw r6, r3
    bne lbl_fn_801FECE0_000017C4
    blr
}

asm void fn_801FED24(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    lwz r7, 0x14(r3)
    slwi r0, r0, 2
    add r3, r7, r0
    b lbl_fn_801FED24_00001834
lbl_fn_801FED24_00001808:
    lwz r6, 0x0(r7)
    lwz r0, 0x0(r6)
    cmplw r4, r0
    bne lbl_fn_801FED24_00001830
    slwi r0, r5, 3
    li r4, 0x0
    add r3, r6, r0
    li r5, 0x1
    addi r3, r3, 0x4
    b fn_801F04FC
lbl_fn_801FED24_00001830:
    addi r7, r7, 0x4
lbl_fn_801FED24_00001834:
    cmplw r7, r3
    bne lbl_fn_801FED24_00001808
    blr
}

asm void fn_801FED70(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    lwz r7, 0x20(r3)
    slwi r0, r0, 2
    add r3, r7, r0
    b lbl_fn_801FED70_00001880
lbl_fn_801FED70_00001854:
    lwz r6, 0x0(r7)
    lwz r0, 0x0(r6)
    cmplw r4, r0
    bne lbl_fn_801FED70_0000187C
    slwi r0, r5, 3
    li r4, 0x0
    add r3, r6, r0
    li r5, 0x1
    addi r3, r3, 0x4
    b fn_801F04FC
lbl_fn_801FED70_0000187C:
    addi r7, r7, 0x4
lbl_fn_801FED70_00001880:
    cmplw r7, r3
    bne lbl_fn_801FED70_00001854
    blr
}

asm void fn_801FEDBC(void)
{
    nofralloc
    lwz r0, 0x24(r3)
    lwz r7, 0x2c(r3)
    slwi r0, r0, 2
    add r3, r7, r0
    b lbl_fn_801FEDBC_000018CC
lbl_fn_801FEDBC_000018A0:
    lwz r6, 0x0(r7)
    lwz r0, 0x0(r6)
    cmplw r4, r0
    bne lbl_fn_801FEDBC_000018C8
    slwi r0, r5, 3
    li r4, 0x0
    add r3, r6, r0
    li r5, 0x1
    addi r3, r3, 0x4
    b fn_801F04FC
lbl_fn_801FEDBC_000018C8:
    addi r7, r7, 0x4
lbl_fn_801FEDBC_000018CC:
    cmplw r7, r3
    bne lbl_fn_801FEDBC_000018A0
    blr
}

asm void fn_801FEE08(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r5
    lwz r0, 0x30(r3)
    lwz r29, 0x38(r3)
    slwi r0, r0, 2
    add r5, r29, r0
    b lbl_fn_801FEE08_000019A4
lbl_fn_801FEE08_0000190C:
    lwz r3, 0x0(r29)
    lwz r0, 0x0(r3)
    cmplw r4, r0
    bne lbl_fn_801FEE08_000019A0
    li r0, 0x0
    stw r0, 0x10(r1)
    mr r3, r28
    addi r31, r1, 0x10
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    bl fn_80686A48
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_800DBF68
    lbz r3, 0xc(r1)
    slwi r0, r30, 1
    stb r3, 0x8(r1)
    mr r3, r31
    mr r6, r28
    add r7, r28, r0
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x0(r29)
    mr r5, r31
    li r4, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_801F25E0
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801FEE08_000019AC
    lwz r3, 0x18(r1)
    bl dtor_80084684
    b lbl_fn_801FEE08_000019AC
lbl_fn_801FEE08_000019A0:
    addi r29, r29, 0x4
lbl_fn_801FEE08_000019A4:
    cmplw r29, r5
    bne lbl_fn_801FEE08_0000190C
lbl_fn_801FEE08_000019AC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
