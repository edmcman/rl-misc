#include <stdio.h>

#include <math.h>

#include <string.h> /* memcpy */

# 1 
void warp_mat4_add(float *out, const float *a, const float *b) {
    for (int i = 0; i < 16; i++) {
        out[i] = a[i] + b[i];
    }
}