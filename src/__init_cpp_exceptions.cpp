extern "C" {

typedef struct __eti_init_info {
    void* eti_start;
    void* eti_end;
    void* tofe;
} __eti_init_info;

extern __eti_init_info _eti_init_info[];

int __register_fragment(void*, void*);
void __unregister_fragment(int);

extern int fragmentID_8087ED28;

void __init_cpp_exceptions(void) {
    if (fragmentID_8087ED28 == -2) {
        register char* r2_reg;
        asm {
            mr r2_reg, r2
        }
        fragmentID_8087ED28 = __register_fragment(_eti_init_info, r2_reg);
    }
}

void __fini_cpp_exceptions(void) {
    if (fragmentID_8087ED28 != -2) {
        __unregister_fragment(fragmentID_8087ED28);
        fragmentID_8087ED28 = -2;
    }
}

typedef void (*__void_func)(void);
extern void __destroy_global_chain(void);

#pragma section ".ctors$10"
#pragma section ".dtors$10"

__declspec(section ".ctors$10") const __void_func __init_cpp_exceptions_reference = __init_cpp_exceptions;
__declspec(section ".dtors$10") const __void_func __destroy_global_chain_reference = __destroy_global_chain;
__declspec(section ".dtors$10") const __void_func __fini_cpp_exceptions_reference = __fini_cpp_exceptions;

}
