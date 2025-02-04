#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

# 1 
unsigned int btsl_reg ( unsigned int reg_in, int bitno,
                        unsigned int* reg_out_p )
{
   unsigned char res;
   unsigned int reg_out;
   __asm__
   __volatile__("movl\t%3, %%eax\n\t"
                "btsl\t%2, %%eax\n\t"
                "movl\t%%eax, %1\n\t"
                "setc\t%0"
                : "=q" (res), "=r" (reg_out)
                : "r" (bitno), "r" (reg_in)
                : "cc", "eax");
   *reg_out_p = reg_out;
   return res;
}