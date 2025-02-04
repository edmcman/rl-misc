#include <stdio.h>

#include <stdint.h>

#include <time.h>

# 1 
void sumArray( int array1[], int array2[], int resultArr[])
{
    for(int i = 0; i< 16; i++)
    {
        resultArr[i] = array1[i] + array2[i];
    }
    return;
}