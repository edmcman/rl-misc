#include <stdio.h>

#include <stdint.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

# 1 
int hashcmp(const unsigned char hashA[8], const unsigned char hashB[8])
{
    int i = 0;
    for(i = 0; i < 8; i++)
    {
        if(hashA[i] > hashB[i])
            return 1;
        else if(hashA[i] < hashB[i])
            return -1;
    }

    return 0;
}