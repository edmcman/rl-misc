#include <stdio.h>

# 1 
void max_min(int array[])
{
    int *max, *min, k, l;
    int *p, *arr_end;
    arr_end = array + 10;
    max = min = array;
    for (p = array + 1; p < arr_end; p++)
        if (*p > *max)
            max = p;
        else if (*p < *min)
            min = p;
    k = *max;
    l = *min;
    *p = array[0];
    array[0] = l;
    l = *p;
    *p = array[9];
    array[9] = k;
    k = *p;
    return;
}