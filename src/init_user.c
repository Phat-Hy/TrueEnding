typedef void (*voidfunc)(void);

extern voidfunc _ctors[];
extern voidfunc _dtors[];
extern void PPCHalt(void);

static void __init_cpp(void);

asm void __init_user(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl __init_cpp
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

static void __init_cpp(void) {
    voidfunc* ctor;
    for (ctor = _ctors; *ctor; ctor++) {
        (*ctor)();
    }
}

void exit(int status) {
    voidfunc* dtor;
    (void)status;
    for (dtor = _dtors; *dtor; dtor++) {
        (*dtor)();
    }
    PPCHalt();
}
