
# 1 
__attribute__ ((visibility ("hidden")))


unsigned char *clear_on_drop_hide(unsigned char *ptr) {


    __asm__ volatile ("" : "=r" (ptr) : "0" (ptr) : "memory");

    return ptr;
}