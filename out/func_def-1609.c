#include <string.h>	/* for memcpy() and memset() */

#include <stdio.h>

#include <errno.h>

#include <stdlib.h>

#include <stdint.h>

#include <inttypes.h>

#include <stdio.h>

# 1 
int mk_MD5Parse(unsigned char in[33], unsigned char out[16])
{
    int i = 0;

    for (i = 0; i < 16; i++)
    {
        if (in[2*i] >= '0' && in[2*i] <= '9')
            in[2*i] -= '0';
        else if (in[2*i] >= 'A' && in[2*i] <= 'F')
            in[2*i] += 10 - 'A';
        else if (in[2*i] >= 'a' && in[2*i] <= 'f')
            in[2*i] += 10 - 'a';
        else
            return 1;
        if (in[1+(2*i)] >= '0' && in[1+(2*i)] <= '9')
            in[1+(2*i)] -= '0';
        else if (in[1+(2*i)] >= 'A' && in[1+(2*i)] <= 'F')
            in[1+(2*i)] += 10 - 'A';
        else if (in[1+(2*i)] >= 'a' && in[1+(2*i)] <= 'f')
            in[1+(2*i)] += 10 - 'a';
        else
            return 1;
        out[i] = in[2*i] << 4 | in[1+(2*i)];
    }
    return 0;
}