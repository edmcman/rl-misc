#include <stdlib.h>

# 1 
float KBND_CONSTANT(const float *img, int w, int h, int x, int y, float bnd_const)
{
    if (x<0) x=0;
    if (y<0) y=0;
    if (x>=w || y>=h)
        return bnd_const;
    return img[y*w + x];
}