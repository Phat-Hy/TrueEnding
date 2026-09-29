#ifdef __cplusplus
extern "C" {
#endif

typedef struct DestructorChain {
    struct DestructorChain* next;
    void* destructor;
    void* object;
} DestructorChain;

extern DestructorChain* __global_destructor_chain;

void* __register_global_object(void* object, void* destructor, DestructorChain* chain) {
    chain->next = __global_destructor_chain;
    chain->destructor = destructor;
    chain->object = object;
    __global_destructor_chain = chain;
    return object;
}

void __destroy_global_chain(void) {
    DestructorChain* chain;
    while ((chain = __global_destructor_chain) != 0) {
        __global_destructor_chain = chain->next;
        ((void (*)(void*, short))chain->destructor)(chain->object, -1);
    }
}

#ifdef __cplusplus
}
#endif
