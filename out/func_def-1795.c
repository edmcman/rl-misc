#include <math.h>

#include <memory.h>

# 1 
void mtx3x3FromTopLeftOf4x4(float *mtx, const float *src) {
    mtx[0] = src[0];
    mtx[1] = src[1];
    mtx[2] = src[2];
    mtx[3] = src[4];
    mtx[4] = src[5];
    mtx[5] = src[6];
    mtx[6] = src[8];
    mtx[7] = src[9];
    mtx[8] = src[10];
}