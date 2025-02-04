#include <string.h>

#include <stdlib.h>

#include <stddef.h>  /* apparently needed to define size_t */

# 1 
int mem_getversion(int *version)
{
    *version = 10;
    return(0);
}