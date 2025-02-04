#include <stdio.h>

# 1 
char *my_str_cpy(char *dst, char *src)
{
    if (dst == NULL || src == NULL)
        return NULL;

    char *addr = dst;

    while ((*dst++ = *src++))
        ;

    return addr;
}