#include "revolution/types.h"

/* External functions */
extern void fn_805ECA00();
extern void fn_805ECB00();

/* External data symbols */
extern u8 lbl_807AF920[];
extern u8 lbl_807AFB20[];

/* External SDA symbols */
extern u32 lbl_8087E760;
extern u32 lbl_8087E858;
extern u32 lbl_8087E85C;

/* Function declarations */
void *fn_80610490(void);
void *fn_806104A0(u32 idx);
void fn_806104C0(void *p);
void fn_806104D0(void *p);
void fn_806104E0(u32 a, u32 b);
void fn_806104F0(u32 *a, u32 *b);

void *fn_80610490(void)
{
    return lbl_807AF920;
}

void *fn_806104A0(u32 idx)
{
    return (u8 *)lbl_807AFB20 + idx * 0x10;
}

void fn_806104C0(void *p)
{
    fn_805ECA00(lbl_8087E760, p);
}

void fn_806104D0(void *p)
{
    fn_805ECB00(lbl_8087E760, p);
}

void fn_806104E0(u32 a, u32 b)
{
    lbl_8087E858 = a;
    lbl_8087E85C = b;
}

void fn_806104F0(u32 *a, u32 *b)
{
    *a = lbl_8087E858;
    *b = lbl_8087E85C;
}
