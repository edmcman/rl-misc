#include <math.h>

# 1 
void IoList_sliceIndex(int *index, int step, int size)
{

    if (*index < 0)
    {
        *index += size;
        if (*index < 0)
        {
            *index = (step < 0) ? -1 : 0;
        }
    }
    else if (*index >= size)
    {
        *index = (step < 0) ? size - 1 : size;
    }
}