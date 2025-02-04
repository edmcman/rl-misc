#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <memory.h>

# 1 
static int psd_bark2bin(float *psd_bark, int psd_len, float bark)
{
    int k;

    if(bark <= 0)
        return 0;

    if(bark >= 25)
        return psd_len-1;

    for(k = 1; k < psd_len; k++) {
        if(psd_bark[k] > bark)
            return k-1;
    }

    return psd_len-1;
}