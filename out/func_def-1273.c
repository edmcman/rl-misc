#include <math.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

# 1 
static void lsf_sf_expand(
    int *slen, int sf, int n1, int n2, int n3
) {
    if (n3) {
        slen[3] = sf % n3;
        sf /= n3;
    } else {
        slen[3] = 0;
    }
    if (n2) {
        slen[2] = sf % n2;
        sf /= n2;
    } else {
        slen[2] = 0;
    }
    slen[1] = sf % n1;
    sf /= n1;
    slen[0] = sf;
}