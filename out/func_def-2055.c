#include <limits.h>

#include <wchar.h>

#include <stdio.h>

#include <printf.h>

#include <locale.h>

# 1 
static int printf_binary_arginfo(const struct printf_info *info, size_t n, int *types, int *sizes)
{
    if(n < 1) return -1;
    (void)sizes;

    types[0] = info->is_long_double ? PA_INT | PA_FLAG_LONG_LONG :
               info->is_long ? PA_INT | PA_FLAG_LONG :
               info->is_char ? PA_CHAR :
               info->is_short ? PA_INT | PA_FLAG_SHORT :
                                      PA_INT ;
    return 1;
}