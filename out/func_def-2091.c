#include <stddef.h>

#include <string.h>

# 1 
char* strcpy(char *dst, const char *src)
{
    char *ret = dst;
    while ((*dst++ = *src++) != '\0');
    return ret;
}