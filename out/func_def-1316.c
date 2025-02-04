#include <stdio.h>

#include <stdint.h>

#include <time.h>

# 1 
void populateArray(int array[], int number)
{
    for(int i = 0; i< 16; i++)
    {
        array[i] = number;
    }
    return;
}