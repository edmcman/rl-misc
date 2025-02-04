#include <stdlib.h>

#include <sched.h>

# 1 
void SASAtomicDec (volatile long *longptr)
{
# 515 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/pmur/sphde/refs/heads/master/src/sasatom.c"
   __asm__ (
   "	lock;"
   "	decl	(%0);"
      :
      : "p" (longptr)
      : "memory"
      );






}