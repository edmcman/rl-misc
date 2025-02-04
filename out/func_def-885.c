#include <sys/types.h>

#include <sys/stat.h>

#include <sys/mman.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>

#include <stdint.h>

#include <stdlib.h>

#include <stddef.h>

#include <stdarg.h>

#include <math.h>

#include <stdbool.h>

#include <string.h>

#include <ctype.h>

# 1 
__attribute__((regparm(0))) wchar_t *(_win_wcscpy)
        (wchar_t *dest, const wchar_t *src)
{
        wchar_t *d = dest;
        while ((*d++ = *src++))
                ;
        return dest;
}