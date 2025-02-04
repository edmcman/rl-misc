#include <math.h>

#include <memory.h>

# 1 
void mtxScaleApply(float *mtx, float xScale, float yScale, float zScale) {





    mtx[ 0] *= xScale;
    mtx[ 4] *= yScale;
    mtx[ 8] *= zScale;

    mtx[ 1] *= xScale;
    mtx[ 5] *= yScale;
    mtx[ 9] *= zScale;

    mtx[ 2] *= xScale;
    mtx[ 6] *= yScale;
    mtx[10] *= zScale;

    mtx[ 3] *= xScale;
    mtx[ 7] *= yScale;
    mtx[11] *= xScale;
}