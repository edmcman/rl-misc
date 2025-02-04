#include <stdlib.h>

# 1 
double dlaran_(int *iseed)
{
# 135 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/dilawar/sesc/refs/heads/master/src/libsesctherm/SuperLU_MT/SRC/dmatgen.c"
    int it1, it2, it3, it4;

    --iseed;


    it4 = iseed[4] * 2549;
    it3 = it4 / 4096;
    it4 -= it3 << 12;
    it3 = it3 + iseed[3] * 2549 + iseed[4] * 2508;
    it2 = it3 / 4096;
    it3 -= it2 << 12;
    it2 = it2 + iseed[2] * 2549 + iseed[3] * 2508 + iseed[4] * 322;
    it1 = it2 / 4096;
    it2 -= it1 << 12;
    it1 = it1 + iseed[1] * 2549 + iseed[2] * 2508 + iseed[3] * 322 + iseed[4]
     * 494;
    it1 %= 4096;



    iseed[1] = it1;
    iseed[2] = it2;
    iseed[3] = it3;
    iseed[4] = it4;



    return ((double) it1 +
     ((double) it2 + ((double) it3 + (double) it4 * 2.44140625e-4) *
      2.44140625e-4) * 2.44140625e-4) * 2.44140625e-4;

}