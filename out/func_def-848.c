#include <stdio.h>

# 1 
char *ho_strcpy(char *dst, const char *src) {
    char *p = dst;
    while ((*dst++ = *src++) != '\0')
        ;
    return p;
}