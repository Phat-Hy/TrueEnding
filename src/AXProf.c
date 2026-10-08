#include "revolution/types.h"

/* External small data symbols (SDA21) */
extern u32 lbl_80880014;
extern u32 lbl_80880028;
extern u32 lbl_8088002C;
extern u32 lbl_80880030;
extern u32 lbl_80880034;

/* Function declarations */
void fn_8060B080(void);
void fn_8060B090(void);

asm void fn_8060B080(void)
{
    nofralloc
    lwz r3, lbl_80880014
    blr
}

asm void fn_8060B090(void)
{
    nofralloc
    lwz r0, lbl_80880028
    cmpwi r0, 0x0
    beq lbl_fn_8060B090_00000048
    lwz r5, lbl_8088002C
    lwz r3, lbl_80880030
    addi r4, r5, 0x1
    lwz r6, lbl_80880034
    divwu r0, r4, r3
    mullw r0, r0, r3
    mulli r3, r5, 0x38
    subf r0, r0, r4
    stw r0, lbl_8088002C
    add r3, r6, r3
    blr
lbl_fn_8060B090_00000048:
    li r3, 0x0
    blr
}
