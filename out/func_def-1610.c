#include <stdarg.h>

# 1 
int strcopy(char * dst, char * src) {
    int i = 0;
    while (*src) {
        *dst++=*src++;
        i++;
    }
    return i;
}