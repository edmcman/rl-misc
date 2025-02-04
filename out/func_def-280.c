#include <stdio.h>

# 1 
void find_min(int* arr, int n, int* _min)
{
    for (int i = *_min; i < n+1; i++) {
        if (arr[i])
        {
            *_min = i;
            return;
        }
    }
}