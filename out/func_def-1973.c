#include <stdio.h>

# 1 
void getNums2(int *numbers)
{
    int i;
    for(i=0; i<4; i++)
    {
        *numbers = i*3;
        numbers++;
    }
}