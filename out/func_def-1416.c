#include <stdlib.h>

# 1 
static void copy (char *dst, char *src)
{
    char *a = dst, *b = src;
    for (; (b - src) < sizeof(src); *a = *b, a++, b++);
}