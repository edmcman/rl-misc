#include <stdio.h>

#include <stdlib.h>

# 1 
int ok_smul3(int x, int y, int *dest)
{
    int result;

    *dest = x*y;





    asm("setae %%bl; movzbl %%bl,%0"
 : "=r" (result)
 :
 : "%ebx"
 );

    return result;
}