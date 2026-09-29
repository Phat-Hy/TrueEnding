typedef unsigned long size_t;

__declspec(section ".init") asm void* memcpy(void* dest, const void* src, size_t count) {
    nofralloc
    cmplwi cr1, r5, 0
    beqlr cr1
    cmplw cr1, r4, r3
    blt cr1, @reverse
    beqlr cr1
    li r6, 0x80
    cmplw cr5, r5, r6
    blt cr5, @forward_small
    clrlwi r9, r4, 29
    clrlwi r10, r3, 29
    subf r8, r10, r3
    dcbt r0, r4
    xor. r11, r10, r9
    bne @forward_unaligned
    andi. r10, r10, 7
    beq+ @forward_aligned_8
    li r6, 8
    subf r9, r9, r6
    addi r8, r3, 0
    mtctr r9
    subf r5, r9, r5
@head_loop:
    lbz r9, 0(r4)
    addi r4, r4, 1
    stb r9, 0(r8)
    addi r8, r8, 1
    bdnz @head_loop
@forward_aligned_8:
    srwi r6, r5, 5
    mtctr r6
@forward_block_loop:
    lfd f1, 0(r4)
    lfd f2, 8(r4)
    lfd f3, 0x10(r4)
    lfd f4, 0x18(r4)
    addi r4, r4, 0x20
    stfd f1, 0(r8)
    stfd f2, 8(r8)
    stfd f3, 0x10(r8)
    stfd f4, 0x18(r8)
    addi r8, r8, 0x20
    bdnz @forward_block_loop
    andi. r6, r5, 0x1f
    beqlr
    subi r4, r4, 1
    mtctr r6
    subi r8, r8, 1
@tail_loop:
    lbzu r9, 1(r4)
    stbu r9, 1(r8)
    bdnz @tail_loop
    blr

@forward_small:
    li r6, 0x14
    cmplw cr5, r5, r6
    ble cr5, @forward_unaligned
    clrlwi r9, r4, 30
    clrlwi r10, r3, 30
    xor. r11, r10, r9
    bne @forward_unaligned
    li r6, 4
    subf r9, r9, r6
    addi r8, r3, 0
    subf r5, r9, r5
    mtctr r9
@small_head_loop:
    lbz r9, 0(r4)
    addi r4, r4, 1
    stb r9, 0(r8)
    addi r8, r8, 1
    bdnz @small_head_loop
    srwi r6, r5, 4
    mtctr r6
@small_word_loop:
    lwz r9, 0(r4)
    lwz r10, 4(r4)
    lwz r11, 8(r4)
    lwz r12, 0xc(r4)
    addi r4, r4, 0x10
    stw r9, 0(r8)
    stw r10, 4(r8)
    stw r11, 8(r8)
    stw r12, 0xc(r8)
    addi r8, r8, 0x10
    bdnz @small_word_loop
    andi. r6, r5, 0xf
    beqlr
    subi r4, r4, 1
    mtctr r6
    subi r8, r8, 1
@small_tail_loop:
    lbzu r9, 1(r4)
    stbu r9, 1(r8)
    bdnz @small_tail_loop
    blr

@forward_unaligned:
    subi r7, r4, 1
    subi r8, r3, 1
    mtctr r5
@unaligned_loop:
    lbzu r9, 1(r7)
    stbu r9, 1(r8)
    bdnz @unaligned_loop
    blr

@reverse:
    add r4, r4, r5
    add r12, r3, r5
    li r6, 0x80
    cmplw cr5, r5, r6
    blt cr5, @reverse_small
    clrlwi r9, r4, 29
    clrlwi r10, r12, 29
    xor. r11, r10, r9
    bne @reverse_unaligned
    andi. r10, r10, 7
    beq+ @reverse_aligned_8
    mtctr r10
@rev_head_loop:
    lbzu r9, -1(r4)
    stbu r9, -1(r12)
    bdnz @rev_head_loop
@reverse_aligned_8:
    subf r5, r10, r5
    srwi r6, r5, 5
    mtctr r6
@rev_block_loop:
    lfd f1, -8(r4)
    lfd f2, -0x10(r4)
    lfd f3, -0x18(r4)
    lfd f4, -0x20(r4)
    subi r4, r4, 0x20
    stfd f1, -8(r12)
    stfd f2, -0x10(r12)
    stfd f3, -0x18(r12)
    stfdu f4, -0x20(r12)
    bdnz @rev_block_loop
    andi. r6, r5, 0x1f
    beqlr
    mtctr r6
@rev_tail_loop:
    lbzu r9, -1(r4)
    stbu r9, -1(r12)
    bdnz @rev_tail_loop
    blr

@reverse_small:
    li r6, 0x14
    cmplw cr5, r5, r6
    ble cr5, @reverse_unaligned
    clrlwi r9, r4, 30
    clrlwi r10, r12, 30
    xor. r11, r10, r9
    bne @reverse_unaligned
    andi. r10, r10, 7
    beq+ @rev_small_aligned_8
    mtctr r10
@rev_small_head_loop:
    lbzu r9, -1(r4)
    stbu r9, -1(r12)
    bdnz @rev_small_head_loop
@rev_small_aligned_8:
    subf r5, r10, r5
    srwi r6, r5, 4
    mtctr r6
@rev_small_word_loop:
    lwz r9, -4(r4)
    lwz r10, -8(r4)
    lwz r11, -0xc(r4)
    lwz r8, -0x10(r4)
    subi r4, r4, 0x10
    stw r9, -4(r12)
    stw r10, -8(r12)
    stw r11, -0xc(r12)
    stwu r8, -0x10(r12)
    bdnz @rev_small_word_loop
    andi. r6, r5, 0xf
    beqlr
    mtctr r6
@rev_small_tail_loop:
    lbzu r9, -1(r4)
    stbu r9, -1(r12)
    bdnz @rev_small_tail_loop
    blr

@reverse_unaligned:
    mtctr r5
@rev_unaligned_loop:
    lbzu r9, -1(r4)
    stbu r9, -1(r12)
    bdnz @rev_unaligned_loop
    blr
}
