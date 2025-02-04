#include <string.h> // strcat, strncat, strlen

# 1 
void xed_strcpy(char* dst, const char* src) {
    const char* psrc = src;
    char* pdst = dst;
    while(*psrc)
        *pdst++ = *psrc++;
    *pdst = 0;
}