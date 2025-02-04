#include <math.h>

# 1 
void index_conv_dec(int *index)
{
    int k;

    for (k = 1; k < 3; k++)
    {
        if ((index[k] >= 44) && (index[k] < 108))
        {
            index[k] += 64;
        }
        else if ((index[k] >= 108) && (index[k] < 128))
        {
            index[k] += 128;
        }
        else
        {

        }
    }
}