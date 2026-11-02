#include "revolution/types.h"

/* External functions */
extern void fn_805ECA00(void);
extern void fn_805ECB00(void);

/* External data symbols */
extern u8 lbl_807AF920[];
extern u8 lbl_807AFB20[];

/* External SDA symbols */
extern u32 lbl_8087E760;
extern u32 lbl_8087E858;
extern u32 lbl_8087E85C;

/* Function declarations */
void *fn_80610490(void);
void fn_806104A0(void);
void fn_806104C0(void);
void fn_806104D0(void);
void fn_806104E0(u32 a, u32 b);
void fn_806104F0(void);

void *fn_80610490(void)
{
    return lbl_807AF920;
}

asm void fn_806104A0(void)
{
    nofralloc
    lis r4, lbl_807AFB20@ha
    slwi r0, r3, 4
    addi r4, r4, lbl_807AFB20@l
    add r3, r4, r0
    blr
}

asm void fn_806104C0(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087E760
    b fn_805ECA00
}

asm void fn_806104D0(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087E760
    b fn_805ECB00
}

void fn_806104E0(u32 a, u32 b)
{
    lbl_8087E858 = a;
    lbl_8087E85C = b;
}

asm void fn_806104F0(void)
{
    nofralloc
    lwz r0, lbl_8087E858
    stw r0, 0x0(r3)
    lwz r0, lbl_8087E85C
    stw r0, 0x0(r4)
    blr
}
