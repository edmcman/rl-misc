#include <stdlib.h>

#include <sched.h>

# 1 
long SASAtomicAdd(long *longptr, long delta)
{
# 117 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/pmur/sphde/refs/heads/master/src/sasatom.c"
 long temp;

   temp = delta;
# 146 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/pmur/sphde/refs/heads/master/src/sasatom.c"
   __asm__ (
   "	lock;"
   "	xadd	%0,(%1);"
      : "+r" (temp)
      : "p" (longptr)
      : "memory"
      );
# 167 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/pmur/sphde/refs/heads/master/src/sasatom.c"
 return temp;




}