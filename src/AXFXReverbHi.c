#include "revolution/types.h"

/* External functions */
extern void fn_8060B180(void);
extern void fn_8060B320(void);
extern void fn_8060B380(void);

/* External float constants (sdata2) */
extern f32 lbl_808885C0;
extern f32 lbl_808885C4;

/* Function declarations */
void fn_8060B0D0(void);
void fn_8060B140(void);
void fn_8060B170(void);

asm void fn_8060B0D0(void)
{
    nofralloc
    lfs f7, 0x158(r3)
    li r0, 0x0
    lfs f2, lbl_808885C0
    li r4, 0x5
    lfs f6, 0x150(r3)
    lfs f5, 0x148(r3)
    lfs f4, 0x154(r3)
    lfs f3, 0x15c(r3)
    lfs f1, lbl_808885C4
    lfs f0, 0x14c(r3)
    stw r4, 0x110(r3)
    stfs f7, 0x114(r3)
    stfs f7, 0x118(r3)
    stw r0, 0x11c(r3)
    stfs f6, 0x120(r3)
    stfs f5, 0x124(r3)
    stfs f4, 0x128(r3)
    stfs f3, 0x12c(r3)
    stfs f2, 0x130(r3)
    stfs f1, 0x134(r3)
    stw r0, 0x138(r3)
    stw r0, 0x13c(r3)
    stfs f0, 0x140(r3)
    stfs f2, 0x144(r3)
    b fn_8060B180
}

asm void fn_8060B140(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8060B320
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8060B170(void)
{
    nofralloc
    b fn_8060B380
}
