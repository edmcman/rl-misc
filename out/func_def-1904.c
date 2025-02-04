#include <math.h>

#include <memory.h>

# 1 
void mtxTranslateMatrix(float *mtx, float xTrans, float yTrans, float zTrans) {





    mtx[ 0] += xTrans * mtx[ 3];
    mtx[ 1] += yTrans * mtx[ 3];
    mtx[ 2] += zTrans * mtx[ 3];

    mtx[ 4] += xTrans * mtx[ 7];
    mtx[ 5] += yTrans * mtx[ 7];
    mtx[ 6] += zTrans * mtx[ 7];

    mtx[ 8] += xTrans * mtx[11];
    mtx[ 9] += yTrans * mtx[11];
    mtx[10] += zTrans * mtx[11];

    mtx[12] += xTrans * mtx[15];
    mtx[13] += yTrans * mtx[15];
    mtx[14] += zTrans * mtx[15];
}