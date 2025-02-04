#include <stdio.h>

# 1 
void next_generation(int *current, int *next, int length)
{
    int i;
    for(i = 1;i < length - 1; i++)
    {
        int number = 0;
        if(current[i - 1] == 1)
        {
            number++;
        }
        if(current[i + 1] == 1)
        {
            number++;
        }
        if(number == 1)
        {
            next[i] = 1;
        }
    }
}