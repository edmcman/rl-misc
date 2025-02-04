#include <stdarg.h>

# 1 
char *xstrcpy (char* dst, const char* src)
{
    register char *d = dst;

    while((*d++=*src++) !='\0');
    return dst;
}