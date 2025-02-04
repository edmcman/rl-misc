#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

# 1 
void createbitshape(int n, char bitshp[])
{
    int c = 0;
    for (unsigned bit = 1<<(sizeof(n) * 2 - 1); bit != 0; bit >>= 1, c++)
    {
        bitshp[c] = ((n & bit) ? '1' : '0');
    }
    bitshp[c] = '\0';
}