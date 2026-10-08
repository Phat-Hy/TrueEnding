#include "revolution/types.h"
#include "revolution/os.h"

/* External functions from ax.c */
extern void fn_806083F0(void);
extern void fn_80608430(void);
extern void fn_80608450(void);
extern void fn_80608470(void);
extern void fn_80608490(void);
extern void fn_806084B0(void);
extern void fn_806084D0(void);
extern void fn_80608510(void);
extern void fn_80608530(void);
extern void fn_80608550(void);
extern void fn_80608570(void);
extern void fn_80608590(void);
extern void fn_806085B0(void);
extern void fn_806085F0(void);
extern void fn_80609EB0(void);
extern void fn_8060AB50(void);

/* External large data symbols */
extern u8 lbl_807D48C0[];

/* External small data symbols (SDA21) */
extern u32 lbl_8087FF2C;
extern u32 lbl_8087FF30;
extern u32 lbl_8087FF34;
extern u32 lbl_8087FF38;
extern u32 lbl_8087FF3C;
extern u32 lbl_8087FF40;
extern u16 lbl_8087FF50;
extern u16 lbl_8087FF52;
extern u16 lbl_8087FF54;
extern u16 lbl_8087FF56;
extern u16 lbl_8087FF58;
extern u32 lbl_8087FF5C;
extern u32 lbl_8087FF60;
extern u32 lbl_8087FF64;
extern u32 lbl_8087FF68;
extern u32 lbl_8087FF6C;
extern u32 lbl_8087FF70;

/* Function declarations */
void fn_80608B10(void);
void fn_80608B30(void);
void fn_80608B50(void);
void fn_80608B70(void);
void fn_80608B80(void);
void fn_80608BB0(void);

asm void fn_80608B10(void)
{
    nofralloc
    lwz r0, lbl_8087FF40
    stw r0, 0x0(r3)
    lwz r0, lbl_8087FF34
    stw r0, 0x0(r4)
    blr
}

asm void fn_80608B30(void)
{
    nofralloc
    lwz r0, lbl_8087FF3C
    stw r0, 0x0(r3)
    lwz r0, lbl_8087FF30
    stw r0, 0x0(r4)
    blr
}

asm void fn_80608B50(void)
{
    nofralloc
    lwz r0, lbl_8087FF38
    stw r0, 0x0(r3)
    lwz r0, lbl_8087FF2C
    stw r0, 0x0(r4)
    blr
}

asm void fn_80608B70(void)
{
    nofralloc
    lwz r3, lbl_8087FF64
    blr
}

asm void fn_80608B80(void)
{
    nofralloc
    lwz r5, lbl_8087FF70
    lis r4, lbl_807D48C0@ha
    addi r4, r4, lbl_807D48C0@l
    addi r3, r5, 0x1
    slwi r5, r5, 7
    clrlslwi r0, r3, 31, 7
    clrlwi r3, r3, 31
    stw r3, lbl_8087FF70
    add r0, r4, r0
    stw r0, lbl_8087FF6C
    add r3, r4, r5
    blr
}

asm void fn_80608BB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1e83
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r0, lbl_8087FF64
    lwz r31, lbl_8087FF6C
    bl fn_80609EB0
    stw r3, 0x8(r1)
    li r0, 0x0
    lwz r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r5, lbl_8087FF68
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    cmpwi r5, 0x0
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    addi r0, r3, 0x101e
    stw r0, lbl_8087FF64
    beq lbl_fn_80608BB0_0000014C
    cmplwi r5, 0x1
    beq lbl_fn_80608BB0_00000194
    cmplwi r5, 0x2
    beq lbl_fn_80608BB0_000001DC
    b lbl_fn_80608BB0_00000220
lbl_fn_80608BB0_0000014C:
    li r0, 0x1
    sth r0, 0x0(r4)
    srwi r0, r28, 16
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r28, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x2dd
    stw r0, lbl_8087FF64
    b lbl_fn_80608BB0_00000220
lbl_fn_80608BB0_00000194:
    li r0, 0x2
    sth r0, 0x0(r4)
    srwi r0, r28, 16
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r28, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x33d
    stw r0, lbl_8087FF64
    b lbl_fn_80608BB0_00000220
lbl_fn_80608BB0_000001DC:
    li r0, 0x3
    sth r0, 0x0(r4)
    srwi r0, r28, 16
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r28, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x39d
    stw r0, lbl_8087FF64
lbl_fn_80608BB0_00000220:
    bl fn_8060AB50
    stw r3, 0x8(r1)
    li r0, 0x4
    lwz r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r0, lbl_8087FF68
    lwz r3, lbl_8087FF6C
    cmplwi r0, 0x2
    addi r5, r3, 0x2
    stw r5, lbl_8087FF6C
    bne lbl_fn_80608BB0_0000059C
    addi r3, r1, 0x8
    bl fn_806083F0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80608BB0_00000408
    lwz r4, lbl_8087FF6C
    li r0, 0x8
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lhz r0, lbl_8087FF54
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608450
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608430
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608470
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608490
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_806084B0
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0xbdc
    stw r0, lbl_8087FF64
lbl_fn_80608BB0_00000408:
    addi r3, r1, 0x8
    bl fn_806084D0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80608BB0_000007AC
    lwz r4, lbl_8087FF6C
    li r0, 0x9
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lhz r0, lbl_8087FF52
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608530
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608510
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608550
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608570
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608590
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0xbdc
    stw r0, lbl_8087FF64
    b lbl_fn_80608BB0_000007AC
lbl_fn_80608BB0_0000059C:
    addi r3, r1, 0x8
    bl fn_806083F0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80608BB0_0000064C
    lwz r4, lbl_8087FF6C
    li r0, 0x5
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lhz r0, lbl_8087FF54
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608430
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x8bb
    stw r0, lbl_8087FF64
lbl_fn_80608BB0_0000064C:
    addi r3, r1, 0x8
    bl fn_806084D0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80608BB0_000006FC
    lwz r4, lbl_8087FF6C
    li r0, 0x6
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lhz r0, lbl_8087FF52
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_80608510
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x8bb
    stw r0, lbl_8087FF64
lbl_fn_80608BB0_000006FC:
    addi r3, r1, 0x8
    bl fn_806085B0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80608BB0_000007AC
    lwz r4, lbl_8087FF6C
    li r0, 0x7
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lhz r0, lbl_8087FF50
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r0, 0x0(r4)
    lwz r4, lbl_8087FF6C
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    bl fn_806085F0
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x8bb
    stw r0, lbl_8087FF64
lbl_fn_80608BB0_000007AC:
    lwz r0, lbl_8087FF60
    cmpwi r0, 0x0
    beq lbl_fn_80608BB0_00000834
    lwz r4, lbl_8087FF6C
    li r0, 0xa
    lis r3, 0x1
    sth r0, 0x0(r4)
    addi r0, r3, -0x8000
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lhz r0, lbl_8087FF58
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, lbl_8087FF5C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    lwz r0, lbl_8087FF5C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x73a
    stw r0, lbl_8087FF64
lbl_fn_80608BB0_00000834:
    lwz r3, lbl_8087FF6C
    li r0, 0xd
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    lwz r0, 0x0(r30)
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    lwz r0, 0x0(r30)
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    lwz r0, 0x4(r30)
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    lwz r0, 0x4(r30)
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    lwz r0, 0x8(r30)
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    lwz r0, 0x8(r30)
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    lwz r0, 0xc(r30)
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    lwz r0, 0xc(r30)
    sth r0, 0x0(r3)
    lwz r0, lbl_8087FF68
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    cmplwi r0, 0x2
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    addi r0, r3, 0x199
    stw r0, lbl_8087FF64
    bne lbl_fn_80608BB0_00000994
    li r0, 0xc
    sth r0, 0x0(r4)
    srwi r3, r28, 16
    lwz r5, lbl_8087FF6C
    srwi r0, r29, 16
    lhz r4, lbl_8087FF56
    addi r5, r5, 0x2
    stw r5, lbl_8087FF6C
    sth r4, 0x0(r5)
    lwz r4, lbl_8087FF6C
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r3, 0x0(r4)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r28, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r29, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x4ab
    stw r0, lbl_8087FF64
    b lbl_fn_80608BB0_00000A10
lbl_fn_80608BB0_00000994:
    li r0, 0xb
    sth r0, 0x0(r4)
    srwi r3, r28, 16
    lwz r5, lbl_8087FF6C
    srwi r0, r29, 16
    lhz r4, lbl_8087FF56
    addi r5, r5, 0x2
    stw r5, lbl_8087FF6C
    sth r4, 0x0(r5)
    lwz r4, lbl_8087FF6C
    addi r4, r4, 0x2
    stw r4, lbl_8087FF6C
    sth r3, 0x0(r4)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r28, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r0, 0x0(r3)
    lwz r3, lbl_8087FF6C
    addi r3, r3, 0x2
    stw r3, lbl_8087FF6C
    sth r29, 0x0(r3)
    lwz r4, lbl_8087FF6C
    lwz r3, lbl_8087FF64
    addi r5, r4, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r3, 0x494
    stw r0, lbl_8087FF64
lbl_fn_80608BB0_00000A10:
    li r0, 0xe
    sth r0, 0x0(r5)
    mr r3, r31
    li r4, 0x80
    lwz r5, lbl_8087FF6C
    lwz r6, lbl_8087FF64
    addi r5, r5, 0x2
    stw r5, lbl_8087FF6C
    addi r0, r6, 0x1e
    stw r0, lbl_8087FF64
    bl DCFlushRange
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
