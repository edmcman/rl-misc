#include <stdlib.h>

#include <stdio.h>      // fgets, sscanf

#include <sys/timeb.h>  // timeb

# 1 
unsigned int FUZ_rand(unsigned int* src)
{
    *src = ((*src) * 2654435761U) + 2246822519U;
    return *src;
}