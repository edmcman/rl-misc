#include <stdio.h>

#include <stdlib.h>

# 1 
void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
# 32 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/MetalheadKen/C-Programming-Language/refs/heads/master/NCUT_UVA/Swap.c"
}