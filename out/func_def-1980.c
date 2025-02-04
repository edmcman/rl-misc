#include <math.h>

#include <memory.h>

# 1 
void mtx3x3Multiply(float *mtx, const float *lhs, const float *rhs) {
    mtx[0] = lhs[0]*rhs[0] + lhs[3] * rhs[1] + lhs[6] * rhs[2];
    mtx[1] = lhs[1]*rhs[0] + lhs[4] * rhs[1] + lhs[7] * rhs[2];
    mtx[2] = lhs[2]*rhs[0] + lhs[5] * rhs[1] + lhs[8] * rhs[2];

    mtx[3] = lhs[0]*rhs[3] + lhs[3] * rhs[4] + lhs[6] * rhs[5];
    mtx[4] = lhs[1]*rhs[3] + lhs[4] * rhs[4] + lhs[7] * rhs[5];
    mtx[5] = lhs[2]*rhs[3] + lhs[5] * rhs[4] + lhs[8] * rhs[5];

    mtx[6] = lhs[0]*rhs[6] + lhs[3] * rhs[7] + lhs[6] * rhs[8];
    mtx[7] = lhs[1]*rhs[6] + lhs[4] * rhs[7] + lhs[7] * rhs[8];
    mtx[8] = lhs[2]*rhs[6] + lhs[5] * rhs[7] + lhs[8] * rhs[8];
}