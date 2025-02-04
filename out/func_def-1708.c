#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <unistd.h>

#include <stdint.h>

#include <string.h>

# 1 
int sort(float target, float heightMap[])
{
    int mid = 0;
    int min = 0;
    int max = 120;

    while (min <= max)
    {

        mid = (max - min) / 2 + min;

 if (mid == min)
     return mid + 1;

        if (heightMap[mid] == target)
            return mid;
        else if (heightMap[mid] < target)
            min = mid + 1;
        else
            max = mid - 1;
    }

    return min;
}