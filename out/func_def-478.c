#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
void insertionSort(int *a, int *b)
{
    int i, j, index, indexb;
    for (i = 1; i < 16; ++i)
    {
        index = a[i];
        indexb = b[i];
        for (j = i; j > 0 && a[j-1] > index; j--)
        {
            a[j] = a[j-1];
            b[j] = b[j-1];
        }

        a[j] = index;
        b[j] = indexb;
    }
}