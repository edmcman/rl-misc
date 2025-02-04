#include <math.h>

#include <memory.h>

# 1 
void mtxLoadOrthographic(float *mtx, float left, float right, float bottom, float top, float nearZ, float farZ) {


    mtx[ 0] = 2.0f / (right - left);
    mtx[ 1] = 0.0;
    mtx[ 2] = 0.0;
    mtx[ 3] = 0.0;

    mtx[ 4] = 0.0;
    mtx[ 5] = 2.0f / (top - bottom);
    mtx[ 6] = 0.0;
    mtx[ 7] = 0.0;

    mtx[ 8] = 0.0;
    mtx[ 9] = 0.0;
    mtx[10] = -2.0f / (farZ - nearZ);
    mtx[11] = 0.0;

    mtx[12] = -(right + left) / (right - left);
    mtx[13] = -(top + bottom) / (top - bottom);
    mtx[14] = -(farZ + nearZ) / (farZ - nearZ);
    mtx[15] = 1.0f;
}