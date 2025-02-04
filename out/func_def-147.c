#include <math.h>

# 1 
int insert_(int *k, int *lp, int *list, int *
 lptr, int *lnew)
{
    static int lsav;
# 3227 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/JohannesBuchner/nfft/refs/heads/master/3rdparty/cstripack/cstripack.c"
    --lptr;
    --list;


    lsav = lptr[*lp];
    lptr[*lp] = *lnew;
    list[*lnew] = *k;
    lptr[*lnew] = lsav;
    ++(*lnew);
    return 0;
}