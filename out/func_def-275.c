#include <stdio.h>

#include <math.h>

#include <string.h> /* memcpy */

# 1 
extern void warp_mat4_mul
        (float *out, const float *a, const float *b) {
    for (int i = 0; i < 16; i += 4) {
        for (int j = 0; j < 4; j++) {
            out[i + j] = b[i + 0] * a[j + 0]
                       + b[i + 1] * a[j + 4]
                       + b[i + 2] * a[j + 8]
                       + b[i + 3] * a[j + 12];
        }
    }
}