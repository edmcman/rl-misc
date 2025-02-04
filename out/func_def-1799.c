#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <sys/time.h>

#include <stdint.h>

#include <emmintrin.h>

# 1 
void
init_matrices(float* A, float* B, float* r) {
    for(int i = 0; i < 16; i++) {
        A[i] = i+1;
        B[i] = i+1;
        r[i] = 0.0;
    }
}