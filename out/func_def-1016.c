#include <stdio.h>

# 1 
void swap(int *a, int *b) {
# 19 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/shjborage/iOS-Guide/refs/heads/master/Interview/Algorithm/swap.c"
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;



}