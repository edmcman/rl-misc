#include <math.h>

# 1 
void sort_sq(float *xq,
             int *index,
             float x,
             const float *cb,
             int cb_size)
{
    int i;

    if (x <= cb[0])
    {
        *index = 0;
        *xq = cb[0];
    }
    else
    {
        i = 0;
        while ((x > cb[i]) && i < cb_size - 1)
        {
            i++;
        }

        if (x > ((cb[i] + cb[i - 1])/2))
        {
            *index = i;
            *xq = cb[i];
        }
        else
        {
            *index = i - 1;
            *xq = cb[i - 1];
        }
    }
}