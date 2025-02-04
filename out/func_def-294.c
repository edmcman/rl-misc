#include <stdlib.h>

# 1 
float
Mat_floatSwap( float *a )
{

    union {
        char i1[4];
        float r4;
    } tmp;

    tmp.r4 = *a;

    tmp.i1[0]^=tmp.i1[3];tmp.i1[3]^=tmp.i1[0];tmp.i1[0]^=tmp.i1[3];
    tmp.i1[1]^=tmp.i1[2];tmp.i1[2]^=tmp.i1[1];tmp.i1[1]^=tmp.i1[2];

    *a = tmp.r4;
    return *a;

}