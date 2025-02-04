#include <stdint.h>

#include <stdbool.h>

# 1 
char *
am_util_string_strcpy(char *pcDst, const char *pcSrc)
{
    char *pcRet = pcDst;




    do
    {
        *pcDst++ = *pcSrc;
    } while ( *pcSrc++ );

    return pcRet;
}