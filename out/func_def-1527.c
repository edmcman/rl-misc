#include <math.h>

#include <memory.h>

# 1 
void mtx3x3LoadIdentity(float *mtx) {
    mtx[0] = mtx[4] = mtx[8] = 1.0f;

    mtx[1] = mtx[2] = mtx[3] =
    mtx[5] = mtx[6] = mtx[7] = 0.0f;
}