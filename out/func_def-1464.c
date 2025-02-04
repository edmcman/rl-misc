#include <stdarg.h>

#include <string.h> /* for memset */

# 1 
static
size_t nrt_testing_atomic_dec(size_t *ptr){

    size_t out = *ptr;
    out -= 1;
    *ptr = out;
    return out;
}