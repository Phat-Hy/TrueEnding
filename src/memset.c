#pragma function_align 4
typedef unsigned long size_t;

__declspec(section ".init") asm void __fill_mem(void* dest, int val, size_t count) {
    nofralloc
    cmplwi r5, 0x20
    clrlwi r7, r4, 24
    subi r6, r3, 1
    blt @10
    nor r0, r6, r6
    clrlwi. r0, r0, 30
    beq @3
    subf r5, r0, r5
@2:
    subic. r0, r0, 1
    stbu r7, 1(r6)
    bne @2
@3:
    cmpwi r7, 0
    beq @5
    slwi r4, r7, 8
    slwi r3, r7, 24
    slwi r0, r7, 16
    or r4, r7, r4
    or r0, r3, r0
    or r7, r4, r0
@5:
    srwi. r0, r5, 5
    subi r3, r6, 3
    beq @8
@7:
    stw r7, 4(r3)
    subic. r0, r0, 1
    stw r7, 8(r3)
    stw r7, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    stw r7, 0x1c(r3)
    stwu r7, 0x20(r3)
    bne @7
@8:
    extrwi. r0, r5, 3, 27
    beq @9
@11:
    subic. r0, r0, 1
    stwu r7, 4(r3)
    bne @11
@9:
    addi r6, r3, 3
    clrlwi r5, r5, 30
@10:
    cmpwi r5, 0
    beqlr
@12:
    subic. r5, r5, 1
    stbu r7, 1(r6)
    bne @12
    blr
}

__declspec(section ".init") void* memset(void* dest, int val, size_t count) {
    __fill_mem(dest, val, count);
    return dest;
}
